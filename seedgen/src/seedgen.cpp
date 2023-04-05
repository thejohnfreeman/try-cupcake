#include <cstdio>

#include <seedgen/seedgen.hpp>

int main(int argc, const char** argv) {
    std::printf("%s\n", seedgen::random().c_str());
    return 0;
}
