// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EntityRegistryBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EntityRegistryBase {
#include "Extra/EntityRegistryBaseAPI.hpp"

public:
    MCAPI bool isValidEntity(class EntityContextBase const&) const;

protected:
    MCAPI void _assertValidRegistry(class EntityContextBase const&) const;

    MCAPI static struct std::atomic<unsigned int> mRegistryCount;
};