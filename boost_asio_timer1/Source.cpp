

//
#include <boost\asio.hpp>
#include <boost\date_time\posix_time\posix_time.hpp>
#include <iostream>

void print(const boost::system::error_code &)
{
    std::cout << "print() called" << std::endl;
}

int main()
{
    boost::asio::io_service io_service;
    boost::asio::deadline_timer t(io_service, boost::posix_time::seconds(5));

    t.async_wait(&print);

    io_service.run();

    return 0;
}

