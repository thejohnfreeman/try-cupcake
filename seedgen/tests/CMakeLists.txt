cupcake_find_package(doctest 2.4 PRIVATE)

cupcake_add_test_executable(seedgen seedgen.cpp)
target_link_libraries(${this}
  seedgen::libseedgen
  doctest::doctest
)
