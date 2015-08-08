

//
#include <boost\asio.hpp>
#include <boost\date_time\posix_time\posix_time.hpp>
#include <iostream>

int main()
{
    boost::asio::io_service io_service;
    boost::asio::deadline_timer t(io_service, boost::posix_time::seconds(5));

    t.wait();

    std::cout << "Hello !" << std::endl;

    return 0;
}

