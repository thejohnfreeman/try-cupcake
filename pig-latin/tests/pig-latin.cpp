#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <pig-latin/pig-latin.hpp>

TEST_CASE("test case please ignore") {
    CHECK(pig_latin::word("latin") == "atinlay");
}
