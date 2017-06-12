cmake_minimum_required(VERSION 2.8)
project(OpenGl CXX)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-std=c++11")



include_directories(./Libs/imgui)
include_directories(./Libs/gl3w)
include_directories(./Include)
aux_source_directory(./Src SRC_LIST)
add_executable(opengl ${SRC_LIST} ./Libs/imgui/imgui.o ./Libs/imgui/imgui_draw.o ./Libs/imgui/imgui_demo.o ./Libs/gl3w/GL/gl3w.o)

target_link_libraries(opengl -lstdc++)
target_link_libraries(opengl -lglfw3)
target_link_libraries(opengl -lsoil)
target_link_libraries(opengl -lglew)
target_link_libraries(opengl -lm)
target_link_libraries(opengl "-framework OpenGl")
target_link_libraries(opengl "-framework Cocoa")
target_link_libraries(opengl "-framework IOKit")
target_link_libraries(opengl "-framework Corevideo")
target_link_libraries(opengl "-framework Carbon")
