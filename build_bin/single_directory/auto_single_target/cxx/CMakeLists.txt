# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(manual_single_target LANGUAGES CXX)

# list sources
file(GLOB _sources ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(chapter_3 ${_sources})
