cmake_minimum_required(VERSION 3.10)

project(lab04)


add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex_lib)
add_subdirectory(hello_world_application)
add_subdirectory(solver_lib)


add_executable(hello_world hello_world_application/hello_world.cpp)
add_executable(solver solver_lib/solver.cpp)


install(TARGETS hello_world solver DESTINATION bin)


install(TARGETS formatter formatter_ex solver_lib DESTINATION lib)


install(DIRECTORY include/ DESTINATION include)
