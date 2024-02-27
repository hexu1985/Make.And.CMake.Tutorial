cmake_minimum_required(VERSION 3.15)

project ( hello_world_prj )

set( mylist )
list( APPEND mylist a )
list( APPEND mylist b )
list( APPEND mylist c )
list( LENGTH mylist mylen )

message( STATUS "mylist = ${mylist}" )
message( STATUS "mylen = ${mylen}" )
