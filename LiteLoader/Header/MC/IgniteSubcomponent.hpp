// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/IgniteSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class IgniteSubcomponent {
#include "Extra/IgniteSubcomponentAPI.hpp"
public:
    virtual ~IgniteSubcomponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();
};