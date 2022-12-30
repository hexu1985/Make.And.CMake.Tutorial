# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(hello LANGUAGES CXX)

add_executable(hello hello.cpp)
