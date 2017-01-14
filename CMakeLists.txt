cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Utils/utilities.h Utils/utilities.cpp Converters/lungime.cpp Converters/lungime.h Converters/arie.cpp Converters/arie.h Utils/global.h Utils/global.cpp Converters/viteza.cpp Converters/viteza.h Converters/volum.cpp Converters/volum.h Converters/timp.cpp Converters/timp.h Converters/temperatura.cpp Converters/temperatura.h Converters/masa.cpp Converters/masa.h Converters/energie.cpp Converters/energie.h Converters/presiune.cpp Converters/presiune.h Converters/densitate.cpp Converters/densitate.h Converters/consum_combustibil.cpp Converters/consum_combustibil.h)
add_executable(untitled ${SOURCE_FILES})