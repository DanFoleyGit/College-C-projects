cmake_minimum_required(VERSION 3.8)
project(College)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c "Lab 8/myLabwork.c")
add_executable(College ${SOURCE_FILES})
add_executable(days1_7 "Lab 4/days1_7.c")
add_executable(myLabwork "Lab 8/myLabwork.c")
add_executable(dgttoword "Lab 4/dgttoword.c")
add_executable(assignment1V2 "assignment 1/assignment1V2.c")