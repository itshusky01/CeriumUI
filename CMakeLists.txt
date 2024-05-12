cmake_minimum_required(VERSION 3.25.1)

set(PROJECT_NAME CeriumUI)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

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

# If current platform is Linux
if (CMAKE_SYSTEM_NAME MATCHES "Linux")

    find_package(SDL2 REQUIRED)

    add_executable(${PROJECT_NAME} src/main.cpp ${H_SRC} ${CPP_SRC})

    target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
    target_link_libraries(${PROJECT_NAME} libGLESv1_CM.so libEGL.so)

endif (CMAKE_SYSTEM_NAME MATCHES "Linux")


# If current platform is Windows
if (CMAKE_SYSTEM_NAME MATCHES "Windows")

    set(CMAKE_EXE_LINKER_FLAGS "-static")

    # SDL2
    find_package(SDL2 CONFIG REQUIRED)
    # GLAD
    set(GLAD_SRC thirdparty/glad/src/glad.c)

    add_executable(${PROJECT_NAME} src/main.cpp ${H_SRC} ${CPP_SRC} ${GLAD_SRC})

    # GLAD
    target_include_directories(${PROJECT_NAME} PUBLIC thirdparty/glad/include/)
    # GLES and EGL etc
    target_include_directories(${PROJECT_NAME} PUBLIC $ENV{GLES_EMU}/include/)
    # SDL2 link
    target_link_libraries(${PROJECT_NAME}
            PRIVATE
            $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
            $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
    )
    # GLES link
    target_link_libraries(${PROJECT_NAME} PRIVATE
            $ENV{GLES_EMU}/libEGL.lib
            $ENV{GLES_EMU}/libGLESv2.lib
    )

endif (CMAKE_SYSTEM_NAME MATCHES "Windows")
