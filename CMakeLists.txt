cmake_minimum_required(VERSION 2.8)

project(ia)

file(GLOB_RECURSE IA_SOURCE_LIST ./src/*.cpp)
add_executable(ia ${IA_SOURCE_LIST})
