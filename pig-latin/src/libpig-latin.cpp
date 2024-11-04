#include <pig-latin/pig-latin.hpp>

namespace pig_latin {

std::string word(std::string const& before) {
    auto i = before.find_first_of("aeiou");
    if (i == 0)
        return before + "way";
    return before.substr(i) + before.substr(0, i) + "ay";
}

}
