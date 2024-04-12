cmake_minimum_required(VERSION 3.22.1)

project(cpp_webserver)

file(GLOB SOURCE_DIR11 "./src/*.cpp")
file(GLOB INCLUDE_DIR11 "./src/*.h")

add_executable(main ${SOURCE_DIR11})
include_directories(${INCLUDE_DIR11})
