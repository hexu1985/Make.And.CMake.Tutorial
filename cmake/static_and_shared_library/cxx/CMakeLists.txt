cmake_minimum_required(VERSION 3.15)

project ( hello_world_prj )

set( STATIC_LIB_SOURCES
    src/Hello_Static.cpp
)

set( SHARED_LIB_SOURCES
    src/Hello_Shared.cpp
)


set( EXE_SOURCES
    src/main.cpp
)

add_library( hello_world_static_library STATIC
    ${STATIC_LIB_SOURCES}
)

target_include_directories( hello_world_static_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_library( hello_world_shared_library SHARED 
    ${SHARED_LIB_SOURCES}
)

target_compile_definitions( hello_world_shared_library PRIVATE BUILD_DLL )

target_include_directories( hello_world_shared_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_executable( hello_world_exe_static_link  ${EXE_SOURCES} )

target_include_directories( hello_world_exe_static_link
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries( hello_world_exe_static_link 
    PRIVATE 
        hello_world_static_library
)

add_executable( hello_world_exe_shared_link  ${EXE_SOURCES} )

target_compile_definitions( hello_world_exe_shared_link PRIVATE USE_DLL )

target_link_libraries( hello_world_exe_shared_link 
    PRIVATE 
        hello_world_shared_library
)
