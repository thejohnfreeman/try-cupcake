cmake_minimum_required(VERSION 3.7)

project(example
  VERSION 0.1.0
  LANGUAGES CXX
)

find_package(cupcake 0.1.0 REQUIRED)

cupcake_project()


cupcake_add_executable(example)

cupcake_install_project()
cupcake_install_cpp_info()
