cmake_minimum_required(VERSION 3.25)
project(CompositeDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(CompositeDemo main.cpp AItem.h Item.h List.h)
