cmake_minimum_required(VERSION 3.10)
project(Smile VERSION 0.0.1)

add_subdirectory(glfw)

file(GLOB SRC src/*.cpp)
file(GLOB INCLUDE src/*.hpp)

add_library(${PROJECT_NAME} Smile.cpp
${SRC} ${INCLUDE}
)

target_include_directories(${PROJECT_NAME} PUBLIC include/)

target_link_libraries(${PROJECT_NAME} PUBLIC glfw)