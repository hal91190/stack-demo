cmake_minimum_required(VERSION 3.6)
project(stack_demo)

set(SOURCE_FILES main.c stack.c stack.h)
add_executable(stack_demo ${SOURCE_FILES})