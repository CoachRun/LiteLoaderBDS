// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/LegacyIceFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LegacyIceFeature : public Feature {
#include "Extra/LegacyIceFeatureAPI.hpp"
public:
    virtual ~LegacyIceFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};