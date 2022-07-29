#include <iostream>
#include <string>

#include <boost/asio.hpp>
#include <boost/regex.hpp>

int main(int argc, char *argv[]) {
  boost::asio::io_context io;
  boost::asio::steady_timer t(io, boost::asio::chrono::seconds(5));

  t.wait();
  std::cout << "Hello, world!" << std::endl;

  return 0;
}
