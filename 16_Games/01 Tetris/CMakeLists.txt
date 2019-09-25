cmake_minimum_required(VERSION 3.14)
project(01_Tetris)

set(CMAKE_CXX_STANDARD 14)

add_executable(01_Tetris
        main.cpp test.cpp tetris_t.h)
