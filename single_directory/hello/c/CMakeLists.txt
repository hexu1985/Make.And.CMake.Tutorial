# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(hello LANGUAGES C)

add_executable(hello hello.c)
