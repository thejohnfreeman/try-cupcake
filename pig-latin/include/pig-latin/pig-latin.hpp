#ifndef PIG_LATIN_PIG_LATIN_HPP
#define PIG_LATIN_PIG_LATIN_HPP

#include <pig-latin/export.hpp>
#include <string>

namespace pig_latin {

/** Translate one word to Pig Latin. */
PIG_LATIN_EXPORT std::string word(std::string const& before);

}

#endif
