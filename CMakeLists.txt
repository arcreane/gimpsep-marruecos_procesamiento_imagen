cmake_minimum_required(VERSION 3.22)
project(Project)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

add_executable(Project main.cpp main2.cpp main3.cpp main4.cpp main5.cpp)

target_link_libraries(Project ${OpenCV_LIBS})