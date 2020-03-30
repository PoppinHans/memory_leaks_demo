cmake_minimum_required(VERSION 3.15)
project(memory_leak_demo)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cc song.cc)

add_executable(memory_leak_demo main.cc song.cc)