cmake_minimum_required ( VERSION 3.17 )

project ( list_test )

set ( t_name )
set ( t_value )
list ( APPEND t_name XXX )
list ( APPEND t_value 1  )
list ( APPEND t_name YYY )
list ( APPEND t_value 2  )
message ( STATUS "t_name = ${t_name}" )
message ( STATUS "t_value = ${t_value}" )

list ( LENGTH t_name len )
math ( EXPR my_len "${len} - 1")
message ( STATUS "len = ${len}" )
 
foreach ( val RANGE ${my_len} )
  list ( GET t_name  ${val} val1 )
  list ( GET t_value ${val} val2 )
  message ( STATUS "${val1}  ${val2}" )
endforeach ()
