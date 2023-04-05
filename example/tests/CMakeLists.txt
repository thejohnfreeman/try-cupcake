cupcake_find_package(doctest 2.4 PRIVATE)

cupcake_add_test_executable(example example.cpp)
target_link_libraries(${this}
  example::libexample
  doctest::doctest
)
