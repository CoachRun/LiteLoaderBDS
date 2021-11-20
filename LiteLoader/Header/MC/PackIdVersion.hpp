// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PackIdVersionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PackIdVersion {
#include "Extra/PackIdVersionAPI.hpp"

public:
    MCAPI std::string asString() const;
    MCAPI bool operator<(struct PackIdVersion const&);
    MCAPI bool operator!=(struct PackIdVersion const&);
    MCAPI bool operator==(struct PackIdVersion const&);
    MCAPI bool satisfies(struct PackIdVersion const&) const;
};