cmake_minimum_required(VERSION 3.31)
project(boostAsio)


find_package(Boost REQUIRED COMPONENTS asio)


set(CMAKE_CXX_STANDARD 23)

add_executable(boostAsio main.cpp)
target_link_libraries(boostAsio PRIVATE ws2_32)