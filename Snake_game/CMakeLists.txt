cmake_minimum_required(VERSION 3.24)
project(贪吃蛇)

set(CMAKE_C_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/share)

add_library(Point SHARED ${PROJECT_SOURCE_DIR}/src/Point/Point.c)
target_include_directories(Point PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(snake ${PROJECT_SOURCE_DIR}/src/main.c)