cmake_minimum_required(VERSION 3.23)
project(tools C)

set(CMAKE_C_STANDARD 17)

add_executable(tools main.c bermuda.c categorize.c pizza.c)
