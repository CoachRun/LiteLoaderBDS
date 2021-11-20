// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "SimpleContainer.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SimplePlayerContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SimplePlayerContainer : public SimpleContainer {
#include "Extra/SimplePlayerContainerAPI.hpp"
public:
    virtual ~SimplePlayerContainer();
    virtual void init();
    virtual void setItem(int, class ItemStack const&);
    virtual void unk_vfn_14();
    virtual int getMaxStackSize();
    virtual void startOpen(class Player&);
    virtual void stopOpen(class Player&);
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void unk_vfn_31();
};