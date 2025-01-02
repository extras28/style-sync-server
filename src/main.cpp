#include "database.config.h"
#include "grpc.service.h"
#include "restful.service.h"
#include "tcp.service.h"

int main()
{
    try
    {
        DatabaseConfig dbConfig("tcp://127.0.0.1:3306", "root", "Vht@2024",
                                "style_sync", 5);

        dbConfig.connect();
        dbConfig.syncModels();

        startTcpService();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}