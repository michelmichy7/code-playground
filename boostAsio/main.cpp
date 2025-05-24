#include <iostream>
#include <boost/asio.hpp>
#include <boost/asio/io_context.hpp>
#include <chrono>

using namespace boost::asio;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    io_context iocontext;

    steady_timer timer{iocontext, std::chrono::seconds{3}};
    timer.async_wait([] (const boost::system::error_code &ec)
        { std::cout << "3 sec\n"; });

    iocontext.run();
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}