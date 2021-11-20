// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MerchantRecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MerchantRecipe {
#include "Extra/MerchantRecipeAPI.hpp"

public:
    MCAPI void calculateDemandPrices(int, int, int, bool);
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool) const;
    MCAPI int getBaseCountA() const;
    MCAPI int getBaseCountB() const;
    MCAPI class ItemInstance const& getBuyAItem() const;
    MCAPI class ItemInstance const& getBuyBItem() const;
    MCAPI int getDemand() const;
    MCAPI int getMaxUses() const;
    MCAPI class ItemInstance const& getSellItem() const;
    MCAPI int getTier() const;
    MCAPI unsigned int getTraderExp() const;
    MCAPI int getUses() const;
    MCAPI bool hasSecondaryBuyItem() const;
    MCAPI void increaseMaxUses(int);
    MCAPI void increaseUses();
    MCAPI void init(class ItemInstance const&, class ItemInstance const&, class ItemInstance const&);
    MCAPI bool isOutOfUses() const;
    MCAPI bool isSame(class MerchantRecipe const&) const;
    MCAPI void legacyCalculateDemandPrices(int, int);
    MCAPI void load(class CompoundTag const*);
    MCAPI void setDemand(int);
    MCAPI void setMaxUses(int);
    MCAPI void setPriceMultiplierA(float);
    MCAPI void setPriceMultiplierB(float);
    MCAPI void setRewardExp(bool);
    MCAPI void setTier(int);
    MCAPI void setTraderExp(unsigned int);
    MCAPI void setUses(int);
    MCAPI bool shouldRewardExp() const;
};