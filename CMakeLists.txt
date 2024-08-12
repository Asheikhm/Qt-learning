cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(helloworld VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_PREFIX_PATH $ENV{QT_CMAKE_PREFIX_PATH} CACHE PATH "Path to Qt CMake files")

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)
qt_standard_project_setup()

add_subdirectory(src/app)