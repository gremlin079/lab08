cmake_minimum_required(VERSION 3.10)

project(lab05)


add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex_lib)
add_subdirectory(hello_world_application)
add_subdirectory(solver_lib)
add_subdirectory(solver_application)

install(TARGETS hello_world solver DESTINATION bin)


install(TARGETS formatter formatter_ex solver_lib DESTINATION lib)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB TEST_SOURCES tests/*.cpp)
  add_executable(check ${TEST_SOURCES})
  
  # Подключи нужные библиотеки явно
  target_link_libraries(check
    formatter
    formatter_ex
    solver_lib
    gtest_main
  )

  add_test(NAME check COMMAND check)
endif()
