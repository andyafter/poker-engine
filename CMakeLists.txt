cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

include_directories(ompeval)

file(GLOB OMPEval_SRC "ompeval/omp/*.cpp")
file(GLOB SOURCES "src/*.cpp")
add_executable(poker-engine ${SOURCES} ${OMPEval_SRC})

