// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BreakBlocksDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BreakBlocksDescription {
#include "Extra/BreakBlocksDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~BreakBlocksDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};