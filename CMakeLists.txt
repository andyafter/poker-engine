cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

option(BUILD_TYPE "Build type" "DEV")

if(BUILD_TYPE STREQUAL "DEV")
    add_definitions(-DDEV_BUILD)
elseif(BUILD_TYPE STREQUAL "STAGING")
    add_definitions(-DSTAGING_BUILD)
elseif(BUILD_TYPE STREQUAL "PROD")
    add_definitions(-DPROD_BUILD)
endif()

include_directories(ompeval)

file(GLOB OMPEval_SRC "ompeval/omp/*.cpp")
file(GLOB SOURCES "src/*.cpp")
add_executable(poker-engine ${SOURCES} ${OMPEval_SRC})
