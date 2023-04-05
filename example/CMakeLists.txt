cmake_minimum_required(VERSION 3.7)

project(example
  VERSION 0.1.0
  LANGUAGES CXX
)

find_package(cupcake 0.1.0 REQUIRED)

cupcake_project()

cupcake_add_library(example)

cupcake_add_executable(example)
target_link_libraries(${this} PRIVATE example::libexample)

cupcake_add_tests()

cupcake_install_project()
cupcake_install_cpp_info()
