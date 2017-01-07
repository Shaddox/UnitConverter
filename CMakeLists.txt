cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Utils/utilities.h Utils/utilities.cpp Converters/lungime.cpp Converters/lungime.h)
add_executable(untitled ${SOURCE_FILES})