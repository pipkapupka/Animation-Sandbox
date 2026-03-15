cmake_minimum_required(VERSION 3.10)
project(Animation-Sandbox)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
        main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)