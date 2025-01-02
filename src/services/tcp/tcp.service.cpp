#include "tcp.service.h"

using boost::asio::ip::tcp;

void handleTcpClient(tcp::socket socket)
{
    try
    {
        boost::system::error_code error;
        std::string message = "TCP Feature Response\n";
        boost::asio::write(socket, boost::asio::buffer(message), error);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error handling TCP client: " << e.what() << '\n';
    }
}

void startTcpService()
{
    boost::asio::io_context ioContext;
    tcp::acceptor acceptor(ioContext, tcp::endpoint(tcp::v4(), 3003));

    std::cout << "TCP Server running on port 3003..." << std::endl;

    while (true)
    {
        tcp::socket socket(ioContext);
        acceptor.accept(socket);
        std::thread(handleTcpClient, std::move(socket)).detach();
    }
}