// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RepeatUntilSuccessNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RepeatUntilSuccessNode {
#include "Extra/RepeatUntilSuccessNodeAPI.hpp"
public:
    virtual ~RepeatUntilSuccessNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void initializeFromDefinition(class Actor&);
};