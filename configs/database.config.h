#ifndef DATABASE_CONFIG_H
#define DATABASE_CONFIG_H

#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <mysql_connection.h>
#include <mysql_driver.h>

#include <memory>
#include <queue>
#include <stdexcept>
#include <string>

class DatabaseConfig
{
private:
    std::queue<std::unique_ptr<sql::Connection>>
        connectionPool; // Connection pool
    sql::mysql::MySQL_Driver* driver;
    std::string host;
    std::string username;
    std::string password;
    std::string database;
    size_t maxPoolSize;
    std::unique_ptr<sql::Connection> connection; // Active database connection

public:
    DatabaseConfig(const std::string& host, const std::string& username,
                   const std::string& password, const std::string& database,
                   size_t maxPoolSize);

    void connect();
    std::unique_ptr<sql::Connection>
    createConnection();               // Connect to the database
    sql::Connection* getConnection(); // Get the connection from the pool
    void returnConnection(std::unique_ptr<sql::Connection>
                              connection); // Return connection to the pool
    void syncModels();                     // sync models
    void disconnect();                     // Disconnect the database connection
    void executeQuery(const std::string& query);
    ~DatabaseConfig(); // Destructor to clean up
};

#endif
