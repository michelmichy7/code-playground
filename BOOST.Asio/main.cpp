#include <boost/asio/io_service.hpp>
#include <boost/asio/steady_timer.hpp>
#include <chrono>
#include <iostream>

using namespace boost::asio;

int main() {
    io_service ioservice;

    steady_timer timer{ioservice, std::chrono::seconds{3}};
}