// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/DoublePlantFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DoublePlantFeature : public Feature {
#include "Extra/DoublePlantFeatureAPI.hpp"
public:
    virtual ~DoublePlantFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI bool place(class BlockSource&, class BlockPos const&, class Random&, enum DoublePlantType) const;
};