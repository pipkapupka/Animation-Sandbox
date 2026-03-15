cmake_minimum_required(VERSION 3.10)
project(Animation-Sandbox)

find_package(glfw3 REQUIRED)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(vendor/NO-Core)

add_library(glad STATIC
    vendor/glad/src/glad.c
)

target_include_directories(glad PUBLIC vendor/glad/include)

add_executable(${PROJECT_NAME}
        src/SandboxApp.cpp
        main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_libraries(${PROJECT_NAME} PRIVATE
        glad
        glfw
        nocore
)