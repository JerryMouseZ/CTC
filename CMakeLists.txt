cmake_minimum_required(VERSION 3.12)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
project(CoroutineExample)

add_executable(CoroutineExample main.cpp)

add_executable(coawaitExample coawait.cpp)