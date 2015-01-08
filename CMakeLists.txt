cmake_minimum_required(VERSION 2.7 FATAL_ERROR)
project("ACPhys2D")

add_subdirectory(Objects)

set(src_files main.cpp)
add_executable(main ${src_files})
