#include <cstdio>
#include <string>

#include <seedgen/seedgen.hpp>

int main(int argc, const char** argv) {
    ripple::Seed seed = seedgen::random();
    std::string str = ripple::toBase58(seed);
    std::printf("%s\n", str.c_str());
    return 0;
}
