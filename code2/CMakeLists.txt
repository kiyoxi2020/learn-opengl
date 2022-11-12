cmake_minimum_required(VERSION 3.0)

project(code2)
link_directories(${PROJECT_SOURCE_DIR}/lib)
message(STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++17")
message(STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})

set(SOURCE_FILES src/main.cpp src/glad.c src/stb_image.h src/shader_s.h)
add_executable(main ${SOURCE_FILES})

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/include/glm)
# include_directories(${PROJECT_SOURCE_DIR}/include/assimp)

link_directories(${PROJECT_SOURCE_DIR}/lib)
# link_directories(${PROJECT_SOURCE_DIR}/include/assimp/bin)
link_directories(${PROJECT_SOURCE_DIR}/resource)


target_link_libraries(main glfw3)