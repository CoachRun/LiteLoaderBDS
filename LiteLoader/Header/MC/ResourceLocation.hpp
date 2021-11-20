// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ResourceLocationAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ResourceLocation {
#include "Extra/ResourceLocationAPI.hpp"

public:
    MCAPI class Core::PathBuffer<std::string> getFullPath() const;
    MCAPI bool operator==(class ResourceLocation const&);
    MCAPI class Core::PathBuffer<std::string> const& getRelativePath() const;
    MCAPI void serialize(class Json::Value&) const;
    MCAPI void setRelativePath(class Core::PathBuffer<std::string> const&);

    MCAPI static class ResourceLocation const& getEmptyLocation();
};