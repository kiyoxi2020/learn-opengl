cmake_minimum_required(VERSION 3.0)

project(code1)
link_directories(${PROJECT_SOURCE_DIR}/lib)
message(STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++17")
message(STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})

set(SOURCE_FILES src/main.cpp src/glad.c)
add_executable(main ${SOURCE_FILES})

include_directories(${PROJECT_SOURCE_DIR}/include)

target_link_libraries(main glfw3)