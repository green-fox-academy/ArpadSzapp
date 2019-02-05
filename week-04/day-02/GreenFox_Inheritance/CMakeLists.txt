cmake_minimum_required(VERSION 3.13)
project(GreenFox_Inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(GreenFox_Inheritance main.cpp person.cpp person.h student.cpp student.h mentor.cpp mentor.h cohort.cpp cohort.h)