cmake_minimum_required(VERSION 3.13)
include(CMake/cmake_header.txt)

add_library(testlib STATIC testlib.c)
set_target_properties(testlib PROPERTIES PREFIX "")

add_executable(hello hello_openc.cpp)
target_link_libraries(hello testlib)
elf2e32(hello 0xe8abe52f)
makesis(hello)
