cmake_minimum_required(VERSION 3.16.3)

project(Overloading)

add_executable(${PROJECT_NAME} main.cpp)

add_library(rectangle rectangle.h rectangle.cpp) 

target_link_libraries(${PROJECT_NAME} PRIVATE rectangle) 
