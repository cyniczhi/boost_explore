
# set(BOOST_ROOT /usr/local/boost_1_79_0)
find_package(Boost 1.79.0 CONFIG REQUIRED COMPONENTS system thread regex)
if (NOT Boost_FOUND)
  message(FATAL_ERROR "Boost library not found")
endif()

file(GLOB sources CONFIGURE_DEPENDS *.cc *.h)

add_executable(main ${sources})
target_link_libraries(main Boost::system Boost::thread Boost::regex)
