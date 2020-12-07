cmake_minimum_required(VERSION 3.10.0)

project(demo)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(VAR1 "1222")
set(VAR2 2)
set(VAR3)
set(VAR4 "\"QAZ\"")
set(VAR5 "BABA")

configure_file(Config.h.in Config.h)

configure_file(Config.h.in Config1.h ESCAPE_QUOTES @ONLY NEWLINE_STYLE CRLF)
configure_file(Config.h.in ./ COPYONLY)
add_executable(demo main.cpp)
