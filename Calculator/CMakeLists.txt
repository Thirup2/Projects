cmake_minimum_required(VERSION 3.24)
project(计算器)

set(CMAKE_C_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/share)

set(SOURCE_PATH ${PROJECT_SOURCE_DIR}/src)
add_executable(calculator ${SOURCE_PATH}/main.c)
target_include_directories(calculator PUBLIC ${PROJECT_SOURCE_DIR}/include)
