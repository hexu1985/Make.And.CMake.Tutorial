# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(manual_single_target LANGUAGES CXX)

# list sources
list(APPEND _sources 
    main.cpp 
    student.cpp 
    student.h 
    teacher.cpp 
    teacher.h)

add_executable(chapter_3 ${_sources})
