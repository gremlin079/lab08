cmake_minimum_required(VERSION 3.10)
project(solver)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(solver equation.cpp)
target_link_libraries(solver PRIVATE solver_lib formatter_ex)
target_include_directories(solver PRIVATE
    ${CMAKE_SOURCE_DIR}/formatter_ex_lib
    ${CMAKE_SOURCE_DIR}/formatter_lib
    ${CMAKE_SOURCE_DIR}/solver_lib
)
