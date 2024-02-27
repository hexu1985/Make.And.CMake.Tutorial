cmake_minimum_required( VERSION 3.15 )

project ( hello_world_prj )

set( exe_sources )

list( APPEND exe_sources main.cpp )
list( APPEND exe_sources Hello.cpp )
list( APPEND exe_sources Hello1.cpp )
list( APPEND exe_sources Hello2.cpp )

message( STATUS "exe_sources = ${exe_sources}" )

add_executable( hello_world_exe ${exe_sources} )
