cmake_minimum_required(VERSION 3.25.1)

set(PROJECT_NAME CeriumUI)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_EXE_LINKER_FLAGS "-static")

file(GLOB_RECURSE H_SRC
        src/core/*.h
        src/core/*.hpp
        src/common/*.h
        src/common/*.hpp
        src/common/math/*.h
        src/common/math/*.hpp
        src/platform/render_api/*.h
        src/platform/render_api/*.hpp
)
file(GLOB_RECURSE CPP_SRC
        src/core/*.cpp
        src/common/*.cpp
        src/common/math/*.cpp
        src/platform/render_api/*.cpp
)

find_package(SDL2 REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp ${H_SRC} ${CPP_SRC})

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
target_link_libraries(${PROJECT_NAME} libGLESv1_CM.so libEGL.so)
