cmake_minimum_required(VERSION 3.24)
project(snake)

set(CMAKE_C_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/share)

set(DW_LIB_NAME DrawWindow)
add_library(${DW_LIB_NAME} SHARED src/DrawWindow/DrawWindow.c)
target_include_directories(${DW_LIB_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${DW_LIB_NAME} PUBLIC)

add_executable(${PROJECT_NAME} src/main.c src/proc.c)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PUBLIC ${DW_LIB})