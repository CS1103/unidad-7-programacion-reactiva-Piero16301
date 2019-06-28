cmake_minimum_required(VERSION 3.14)
project(Source)

set(CMAKE_CXX_STANDARD 17)

add_executable(Source main.cpp Event.cpp Event.h Component.cpp Component.h Window.cpp Window.h Circle.cpp Circle.h Rectangle.cpp Rectangle.h)