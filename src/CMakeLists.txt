cmake_minimum_required(VERSION 3.13)
project(truffula)

set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(truffula main.cpp)