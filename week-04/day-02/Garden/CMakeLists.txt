cmake_minimum_required(VERSION 3.13)
project(Garden)

set(CMAKE_CXX_STANDARD 14)

add_executable(Garden main.cpp plant.cpp plant.h flower.cpp flower.h tree.cpp tree.h garden.cpp garden.h)