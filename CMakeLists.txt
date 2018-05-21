cmake_minimum_required(VERSION 2.8)

project(ia)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
include_directories(${PROJECT_SOURCE_DIR}/src)
file(GLOB_RECURSE IA_SOURCE_LIST ./src/*.cpp)
add_executable(ia ${IA_SOURCE_LIST})
