cmake_minimum_required(VERSION 3.10)
project(risc-v-emulator)

set(CMAKE_CXX_STANDARD 14)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(SOURCES
    ./src/main.cpp
    ./src/io.cpp
)

add_executable(emulator ${SOURCES})