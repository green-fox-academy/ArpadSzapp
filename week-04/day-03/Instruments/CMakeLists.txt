cmake_minimum_required(VERSION 3.13)
project(Instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments main.cpp instrument.h ElectricGuitar.cpp ElectricGuitar.h bassGuitar.cpp bassGuitar.h violin.cpp violin.h stringedInstruments.cpp stringedInstruments.h)