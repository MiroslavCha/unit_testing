cmake_minimum_required(VERSION 2.8)

project(average CXX)

add_subdirectory(src)
add_subdirectory(googletest)

enable_testing()

add_subdirectory(tests)
