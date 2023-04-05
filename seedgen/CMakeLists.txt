cmake_minimum_required(VERSION 3.7)

project(seedgen
  VERSION 0.1.0
  LANGUAGES CXX
)

find_package(cupcake 0.1.0 REQUIRED)

cupcake_project()

cupcake_find_package(xrpl 1.10.1)

cupcake_add_library(seedgen)
target_link_libraries(${this} PUBLIC xrpl::libxrpl)

cupcake_add_executable(seedgen)
target_link_libraries(${this} PRIVATE seedgen::libseedgen)

cupcake_add_tests()

cupcake_install_project()
cupcake_install_cpp_info()
