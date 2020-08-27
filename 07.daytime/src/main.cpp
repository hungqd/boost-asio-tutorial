#include <array>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

std::string make_daytime_string()
{
	time_t now = time(0);
	return ctime(&now);
}

int main(int argc, char *argv[])
{
	std::cout << "Daytime server is running..." << std::endl;
	try
	{
		boost::asio::io_context io_context;
		tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 13));

		while (true)
		{
			tcp::socket socket(io_context);
			acceptor.accept(socket);
			std::string message = make_daytime_string();
			boost::system::error_code ignored_error;
			boost::asio::write(socket, boost::asio::buffer(message), ignored_error);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}