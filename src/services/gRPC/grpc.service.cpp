#include "grpc.service.h"

class AccountServiceImpl final : public AccountService::Service
{
private:
    DatabaseConfig& dbConfig;

public:
    explicit AccountServiceImpl(DatabaseConfig& dbConfig) : dbConfig(dbConfig)
    {
    }

    grpc::Status GetAllAccount(grpc::ServerContext* context,
                               const Request* request,
                               GetAllAccountResponse* response) override
    {
        try
        {
            std::vector<Account> accounts =
                AccountModel::getAllAccount(dbConfig);

            for (const auto& account : accounts)
            {
                auto* grpcAccount = response->add_accounts();
                grpcAccount->set_id(std::to_string(account.id));
                grpcAccount->set_username(account.username);
                grpcAccount->set_fullname(account.fullname);
                grpcAccount->set_email(account.email);
                grpcAccount->set_phone(account.phone);
                grpcAccount->set_avatar(account.avatar);
            }

            return grpc::Status::OK;
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error in GetAllAccount: " << e.what() << std::endl;
            return grpc::Status(grpc::StatusCode::INTERNAL, "Database error");
        }
    }
};

void startGrpcService(DatabaseConfig& dbConfig)
{
    AccountServiceImpl accountService(dbConfig);

    // Define server address and build server
    // std::string server_address("127.0.0.1:50051");
    // grpc::ServerBuilder builder;

    // builder.AddListeningPort(server_address,
    // grpc::InsecureServerCredentials());
    // builder.RegisterService(&accountService);

    // // Start server
    // std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    // std::cout << "gRPC server listening on " << server_address << std::endl;

    // // Keep the server running
    // server->Wait();
    std::cout << "gRPC version: " << grpc::Version() << std::endl;
}