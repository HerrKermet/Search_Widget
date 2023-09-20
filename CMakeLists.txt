cmake_minimum_required(VERSION 3.25)
project(Search_Widget)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Search_Widget Source/main.cpp Source/mainwindow.cpp Source/searchOptions.cpp Headers/mainwindow.h Headers/searchOptions.h Headers/ui_mainwindow.h)
target_link_libraries(Search_Widget
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

