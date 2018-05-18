cmake_minimum_required(VERSION 3.9.2)

# do not allow any compiler specific c++ extensions
set(CMAKE_CXX_EXTENSIONS OFF)

project(testci CXX)

set(SOURCE
  func.cpp
  main.cpp)

add_executable(testci ${SOURCE})

# set standard
set_target_properties(testci PROPERTIES CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON)

target_compile_options(testci PUBLIC -Wall -Wextra -pedantic)
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  target_compile_options(testci PUBLIC -Wno-c++98-compat)
endif ()
