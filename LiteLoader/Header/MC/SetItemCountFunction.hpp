// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SetItemCountFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SetItemCountFunction : public LootItemFunction {
#include "Extra/SetItemCountFunctionAPI.hpp"
public:
    virtual ~SetItemCountFunction();
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
};