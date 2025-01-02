#include "account.model.h"

void AccountModel::createTable(DatabaseConfig& dbConfig)
{
    const std::string createAccountTableQuery =
        R"(CREATE TABLE IF NOT EXISTS accounts (
            id INT PRIMARY KEY AUTO_INCREMENT,
            username VARCHAR(255) NOT NULL,
            password VARCHAR(255) NOT NULL,
            fullname VARCHAR(255) NOT NULL,
            email VARCHAR(255) NOT NULL,
            avatar VARCHAR(255) NOT NULL,
            phone VARCHAR(255) NOT NULL,
            created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
        );)";

    dbConfig.executeQuery(createAccountTableQuery);
    std::cout << "accounts table created or already exists." << std::endl;
}

void AccountModel::insertAccount(DatabaseConfig& dbConfig,
                                 const std::string& username,
                                 const std::string& password,
                                 const std::string& fullname,
                                 const std::string& email,
                                 const std::string& phone,
                                 const std::string& avatar)
{
    const std::string insertAccountQuery = R"(
        INSERT INTO accounts(username, password, fullname, email, phone, avatar) VALUES (?,?,?,?,?,?);
    )";

    auto conn = dbConfig.getConnection();
    std::unique_ptr<sql::PreparedStatement> pstmt(
        conn->prepareStatement(insertAccountQuery));
    pstmt->setString(1, username);
    pstmt->setString(2, password);
    pstmt->setString(3, fullname);
    pstmt->setString(4, email);
    pstmt->setString(5, phone);
    pstmt->setString(6, avatar);

    pstmt->executeUpdate();

    std::cout << "Account inserted successfully." << std::endl;
}

std::vector<Account> AccountModel::getAllAccount(DatabaseConfig& dbConfig)
{
    const std::string getAllQuery =
        R"(SELECT id, username, fullname, email, phone, avatar FROM accounts;)";

    auto conn = dbConfig.getConnection();
    std::vector<Account> accounts;

    try
    {
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(getAllQuery));

        while (res->next())
        {
            Account account;
            account.id = res->getInt("id");
            account.username = res->getString("username");
            account.fullname = res->getString("fullname");
            account.email = res->getString("email");
            account.phone = res->getString("phone");
            account.avatar = res->getString("avatar");
            accounts.push_back(account);
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error fetching accounts: " << e.what() << std::endl;
    }

    return accounts;
}