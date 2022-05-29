cmake_minimum_required(VERSION 3.10)
project(Smile VERSION 0.0.1)

include(FetchContent)
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.3.7
)
FetchContent_MakeAvailable(glfw)

file(GLOB SRC src/*.cpp src/*.c)
file(GLOB INCLUDE src/*.hpp)

add_library(${PROJECT_NAME} Smile.cpp
${SRC} ${INCLUDE}
)

target_include_directories(${PROJECT_NAME} PUBLIC include/)

target_link_libraries(${PROJECT_NAME} PUBLIC glfw)