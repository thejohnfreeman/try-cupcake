#include <cstdio>
#include <cstdlib>

#include <fmt/base.h>

#include <pig-latin/pig-latin.hpp>

int main(int argc, const char** argv) {
    if (argc < 2) {
        fmt::println("usage: {} <word>", argv[0]);
        return EXIT_FAILURE;
    }
    fmt::println("{}", pig_latin::word(argv[1]));
    return 0;
}
