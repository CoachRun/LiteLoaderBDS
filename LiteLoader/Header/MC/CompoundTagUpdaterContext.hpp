// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CompoundTagUpdaterContextAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CompoundTagUpdaterContext {
#include "Extra/CompoundTagUpdaterContextAPI.hpp"

public:
    MCAPI class CompoundTagUpdaterBuilder addUpdater(unsigned char, unsigned char, unsigned char);
    MCAPI void sortUpdaters();
    MCAPI enum CompoundTagUpdaterResult update(class CompoundTag&, unsigned int);

private:
    MCAPI static bool comparisonPredicate(std::unique_ptr<class CompoundTagUpdater> const&, std::unique_ptr<class CompoundTagUpdater> const&);
};