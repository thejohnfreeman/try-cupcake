#include <cstdio>

#include <pig-latin/pig-latin.hpp>

int main(int argc, const char** argv) {
    std::printf("%s\n", pig_latin::word("latin").c_str());
    return 0;
}
