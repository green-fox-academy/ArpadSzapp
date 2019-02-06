cmake_minimum_required(VERSION 3.13)
project(WirelessAdapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(WirelessAdapter main.cpp device.cpp device.h USBdevice.cpp USBdevice.h networkdevice.cpp networkdevice.h wirelessadapter.cpp wirelessadapter.h)