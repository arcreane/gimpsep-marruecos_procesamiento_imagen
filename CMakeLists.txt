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
include_directories("/opt/homebrew/Cellar/qt@5/5.15.3/lib")

add_executable(Project erosion_dilation.cpp resizing.cpp lighten_darken.cpp panorama_stitching.cpp canny_edge_detection.cpp panorama_stitching.h resizing.h lighten_darken.h erosion_dilation.h canny_edge_detection.h)

target_link_libraries(Project ${OpenCV_LIBS} Qt5::Core)