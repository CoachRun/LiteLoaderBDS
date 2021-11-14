// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LootItemFunction.hpp"
class TraderMaterialTypeFunction : public LootItemFunction {
public:
    virtual ~TraderMaterialTypeFunction();
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

private:
    MCAPI void _applyBase(class ItemStackBase&, class Random&, class LootTableContext&) const;
};