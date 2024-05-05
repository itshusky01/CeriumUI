cmake_minimum_required(VERSION 3.28)

set(PROJECT_NAME CeriumUI)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE H_SRC src/core/common/*.h)
file(GLOB_RECURSE CPP_SRC src/core/common/*.cpp)

add_executable(${PROJECT_NAME}
        src/main.cpp
        ${H_SRC}
        ${CPP_SRC}
)
