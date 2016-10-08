cmake_minimum_required(VERSION 3.6)
project(stack_demo)

set(SOURCE_FILES main.c stack.h stack.c queue.h queue.c linkedlist.h linkedlist.c)
add_executable(stack_demo ${SOURCE_FILES})