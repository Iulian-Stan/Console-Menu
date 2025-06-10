cmake_minimum_required(VERSION 4.0)

project(MENU LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME}
    include/global.h
    include/menu.h
    include/action.h
    src/global.cpp
    src/menu.cpp
    src/action.cpp
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)