#include <cstdio>
#include <cstdlib>

#include <pig-latin/pig-latin.hpp>

int main(int argc, const char** argv) {
    if (argc < 2) {
        std::printf("usage: %s <word>\n", argv[0]);
        return EXIT_FAILURE;
    }
    std::printf("%s\n", pig_latin::word(argv[1]).c_str());
    return 0;
}
