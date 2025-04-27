cmake_minimum_required(VERSION 3.10)
project(lab04)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex_lib)
add_subdirectory(solver_lib)
add_subdirectory(solver_application)
add_subdirectory(hello_world_application)

install(TARGETS hello_world solver DESTINATION bin)
install(TARGETS formatter_lib formatter_ex_lib solver_lib DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)
