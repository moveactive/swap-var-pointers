cmake_minimum_required(VERSION 3.7)
project(Pointers)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c boyan_andreev.h swapVarPointers.h)
add_executable(Pointers ${SOURCE_FILES})