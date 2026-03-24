cmake_minimum_required(VERSION 3.17)
project(HeapExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(HeapExample heap_driver.cpp Heap.h)