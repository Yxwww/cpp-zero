cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

project(LoveLife)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")

add_executable (LoveLife index.cpp)
