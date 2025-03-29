cmake_minimum_required(VERSION 3.10)
project(AdaptiveSatelliteRouting)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

add_executable(simulator src/main.cpp)
target_include_directories(simulator PRIVATE src/)
