#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <seedgen/seedgen.hpp>

TEST_CASE("test case please ignore") {
    CHECK(ripple::toBase58(seedgen::random())[0] == 's');
}
