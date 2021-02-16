cmake_minimum_required(VERSION 3.15)
project(memory_leak_demo)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC src/main.cc src/list.cc)

add_executable(memory_leak_demo ${SRC})

add_subdirectory(test)