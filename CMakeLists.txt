cmake_minimum_required(VERSION 3.28)

set(PROJECT_NAME CeriumUI)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

file(GLOB_RECURSE H_SRC
        src/core/*.h
        src/core/*.hpp
        src/common/*.h
        src/common/*.hpp
        src/common/math/*.h
        src/common/math/*.hpp
)
file(GLOB_RECURSE CPP_SRC
        src/core/*.cpp
        src/common/*.cpp
        src/common/math/*.cpp
)

add_executable(${PROJECT_NAME} src/main.cpp ${H_SRC} ${CPP_SRC})
