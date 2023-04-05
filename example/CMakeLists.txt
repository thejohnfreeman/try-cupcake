cmake_minimum_required(VERSION 3.7)

project(example
  VERSION 0.1.0
  LANGUAGES CXX
)

find_package(cupcake 0.1.0 REQUIRED)

cupcake_project()

cupcake_find_package(seedgen 0.1.0)

cupcake_add_executable(example)
target_link_libraries(${this} PRIVATE seedgen::libseedgen)

cupcake_install_project()
cupcake_install_cpp_info()
