// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PushableDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PushableDescription {
#include "Extra/PushableDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~PushableDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};