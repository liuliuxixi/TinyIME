cmake_minimum_required(VERSION 4.2)
project(TinyIME)
set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(TinyIME
        src/main.cpp
        include/Application.h
        src/Application.cpp)
