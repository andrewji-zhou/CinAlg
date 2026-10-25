cmake_minimm_required(VERSION 3.16)
project(CinAlg LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(cinalg INTERFACE)
target_include_directories(cinalg INTERFACE include)

add_executable(example examples/main.cpp)
target_link_libraries(example PRIVATE cinalg)
