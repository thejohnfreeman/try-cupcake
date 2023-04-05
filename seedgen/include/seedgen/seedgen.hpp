#ifndef SEEDGEN_HPP
#define SEEDGEN_HPP

#include <string>
#include <ripple/protocol/Seed.h>
#include <seedgen/export.hpp>

namespace seedgen {

SEEDGEN_EXPORT ripple::Seed random();

}

#endif
