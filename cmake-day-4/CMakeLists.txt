cmake_minimum_required(VERSION 3.10.0)

project(demo VERSION 0.1.0)

add_subdirectory(./add)
add_subdirectory(./person)
add_subdirectory(./print)

add_executable(demo main.cpp)

target_include_directories(demo PUBLIC ./person)

target_link_directories(demo PUBLIC ./person)

target_link_libraries(demo PUBLIC person)

get_target_property(test demo property)

# 打印指定的头文件搜索路径
get_property(public_private_dirs TARGET person PROPERTY INCLUDE_DIRECTORIES)
message("public_private_dirs: ${public_private_dirs}")

get_property(public_private_dirs TARGET demo PROPERTY INCLUDE_DIRECTORIES)
message("public_private_dirs: ${public_private_dirs}")

get_property(public_interface_dirs TARGET person PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
message("public_interface_dirs: ${public_interface_dirs}")
