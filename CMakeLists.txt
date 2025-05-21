cmake_minimum_required(VERSION 3.31)
project(untitled C)

set(CMAKE_C_STANDARD 17)

add_executable(untitled main.c
        kolejka.h
        kolejka.c)
