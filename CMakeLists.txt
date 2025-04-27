cmake_minimum_required(VERSION 3.10)

project(lab04)


add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex_lib)
add_subdirectory(solver_lib)


add_executable(hello_world src/hello_world.cpp)
add_executable(solver src/solver.cpp)


install(TARGETS hello_world solver DESTINATION bin)


install(TARGETS formatter formatter_ex solver_lib DESTINATION lib)


install(DIRECTORY include/ DESTINATION include)
