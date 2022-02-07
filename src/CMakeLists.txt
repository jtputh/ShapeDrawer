cmake_minimum_required(VERSION 3.14)

project(circle LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Widgets REQUIRED)

add_executable(circle
  Point.h
  Shape.h
  Circle.h
  CircleImageGenerator.h
  AppMessages.h
  InputUtils.h
  main.cpp
  Point.cpp
  Shape.cpp
  Circle.cpp
  CircleImageGenerator.cpp
  AppMessages.cpp
  InputUtils.cpp
  )

target_link_libraries(circle Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Widgets)
