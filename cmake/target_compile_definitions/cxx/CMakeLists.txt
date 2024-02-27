cmake_minimum_required(VERSION 3.15)

project ( hello_world_prj )

set( EXE_SOURCES
    src/main.cpp
    src/Hello.cpp
)

add_executable( hello_world_exe  ${EXE_SOURCES} )

target_include_directories( hello_world_exe
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_definitions( hello_world_exe PRIVATE MY_DEF1 )
target_compile_definitions( hello_world_exe PRIVATE MY_DEF2 )
target_compile_definitions( hello_world_exe PRIVATE MY_DEF3 )
target_compile_definitions( hello_world_exe
                            PRIVATE 
                                  MY_DEF4
                                  MY_DEF5
                                  MY_DEF6
                                  )

add_executable( hello_world_exe_1024  ${EXE_SOURCES} )

target_include_directories( hello_world_exe_1024
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_definitions( hello_world_exe_1024 PRIVATE HELLO_DEF1 )
target_compile_definitions( hello_world_exe_1024 PRIVATE HELLO_DEF2 )
