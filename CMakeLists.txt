cmake_minimum_required(VERSION 3.25)
project(Cube)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cube main.cpp Components.cpp Components.h Cube.cpp Cube.h)
target_link_libraries(Cube -lOpenGL32 -lfreeGLUT -lglu32)

find_package(OpenGL REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR})