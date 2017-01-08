cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Utils/utilities.h Utils/utilities.cpp Converters/lungime.cpp Converters/lungime.h Converters/arie.cpp Converters/arie.h Utils/global.h Utils/global.cpp)
add_executable(untitled ${SOURCE_FILES})