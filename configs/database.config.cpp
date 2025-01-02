#include "database.config.h"
#include "account.model.h"

#include <iostream>
#include <stdexcept>

DatabaseConfig::DatabaseConfig(const std::string& host,
                               const std::string& username,
                               const std::string& password,
                               const std::string& database, size_t maxPoolSize)
    : host(host), username(username), password(password), database(database),
      maxPoolSize(maxPoolSize)
{
    driver = sql::mysql::get_mysql_driver_instance();
    for (size_t i = 0; i < maxPoolSize; ++i)
    {
        connectionPool.push(
            createConnection()); // Fill the pool with initial connections
    }
}

void DatabaseConfig::connect()
{
    if (connectionPool.empty())
    {
        std::cerr << "Error: No connections available in the pool."
                  << std::endl;
        throw std::runtime_error("No connections available.");
    }

    // Get the first available connection from the pool
    connection = std::move(connectionPool.front());
    connectionPool.pop(); // Remove the connection from the pool

    std::cout << "Successfully connected to the database: " << database
              << std::endl;
}

sql::Connection* DatabaseConfig::getConnection()
{
    if (!connection)
    {
        throw std::runtime_error("No active database connection.");
    }

    return connection.get();
}

void DatabaseConfig::returnConnection(
    std::unique_ptr<sql::Connection> connection)
{
    if (connectionPool.size() < maxPoolSize)
    {
        connectionPool.push(
            std::move(connection)); // Return the connection to the pool
        std::cout << "Connection returned to the pool." << std::endl;
    }
    else
    {
        std::cerr << "Error: Connection pool is full." << std::endl;
    }
}

void DatabaseConfig::syncModels()
{
    try
    {
        if (connectionPool.empty())
        {
            throw std::runtime_error(
                "No connections available to sync models.");
        }

        AccountModel::createTable(*this);

        std::cout << "All models synchronized successfully." << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error during sync models: " << e.what() << std::endl;
    }
}

void DatabaseConfig::disconnect()
{
    if (connection)
    {
        returnConnection(
            std::move(connection)); // Return connection to the pool
        std::cout << "Database connection returned to the pool." << std::endl;
    }
}

void DatabaseConfig::executeQuery(const std::string& query)
{
    try
    {
        // get connection from the pool
        auto conn = getConnection();

        // execute query
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        stmt->execute(query);

        std::cout << "Executed query: " << query << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error executing query: " << e.what() << '\n';
    }
}

DatabaseConfig::~DatabaseConfig()
{
    disconnect(); // Clean up by returning any active connections to the pool
}

std::unique_ptr<sql::Connection> DatabaseConfig::createConnection()
{
    auto conn = std::unique_ptr<sql::Connection>(
        driver->connect(host, username, password));
    conn->setSchema(database);
    return conn;
}
