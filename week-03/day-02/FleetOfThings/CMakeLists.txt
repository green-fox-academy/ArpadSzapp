cmake_minimum_required(VERSION 3.13)
project(FleetOfThings)

set(CMAKE_CXX_STANDARD 14)

add_executable(FleetOfThings main.cpp fleet.h fleet.cpp thing.h thing.cpp)