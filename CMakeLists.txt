cmake_minimum_required(VERSION 3.22)
project(Project)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt@5/5.15.3")

find_package(OpenCV)
find_package(Qt5 COMPONENTS
        Core
        REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Project main.cpp main2.cpp main3.cpp main4.cpp main5.cpp advgui.cpp advgui.h advgui.ui)

target_link_libraries(Project ${OpenCV_LIBS} Qt5::Core)