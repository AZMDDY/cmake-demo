cmake_minimum_required(VERSION 3.10.0)

project(cmake-day-8-demo1)

add_subdirectory(dir1)
add_subdirectory(dir2)

add_library(demo1 STATIC ../dir2/test2.cpp ../dir1/test1.cpp ../dir1/dir3/test3.cpp)

add_library(obj_demo1 SHARED $<TARGET_OBJECTS:demo1_test1_obj> $<TARGET_OBJECTS:demo1_test2_obj> $<TARGET_OBJECTS:demo1_test3_obj>)
