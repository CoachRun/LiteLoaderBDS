// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SelectorDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SelectorDefinition : public BehaviorDefinition {
#include "Extra/SelectorDefinitionAPI.hpp"
public:
    virtual ~SelectorDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};