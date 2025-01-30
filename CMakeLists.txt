cmake_minimum_required(VERSION 3.0.0)
project(nreg)

set (FullOutputDir "${CMAKE_SOURCE_DIR}/build/")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${FullOutputDir}/static libs")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FullOutputDir}")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FullOutputDir}")

include_directories(./src/)

add_executable(${PROJECT_NAME} ./src/main.cpp)
