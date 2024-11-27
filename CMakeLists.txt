cmake_minimum_required(VERSION 3.10)
project(GoatCppVuln)

set(CMAKE_CXX_STANDARD 11)

add_executable(buffer_overflow src/buffer_overflow.cpp)
add_executable(null_pointer src/null_pointer.cpp)
add_executable(memory_leak src/memory_leak.cpp)
add_executable(race_condition src/race_condition.cpp)
