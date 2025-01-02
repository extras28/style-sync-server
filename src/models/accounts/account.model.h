#ifndef ACCOUNTS_MODEL_H
#define ACCOUNTS_MODEL_H

#include "database.config.h"

#include <vector>

struct Account
{
    int id;
    std::string username;
    std::string fullname;
    std::string email;
    std::string phone;
    std::string avatar;
};

class AccountModel
{
public:
    static void createTable(DatabaseConfig& dbConfig);
    static void
    insertAccount(DatabaseConfig& dbConfig, const std::string& username,
                  const std::string& password, const std::string& fullname,
                  const std::string& email, const std::string& phone,
                  const std::string& avatar);
    static std::vector<Account> getAllAccount(DatabaseConfig& dbConfig);
};

#endif