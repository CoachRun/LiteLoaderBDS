// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScreenHandlerLabTableAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScreenHandlerLabTable {
#include "Extra/ScreenHandlerLabTableAPI.hpp"
public:
    virtual ~ScreenHandlerLabTable();
    virtual bool canDestroy(int /*enum ContainerEnumName*/, unsigned char);
    virtual int /*enum ItemStackNetResult*/ handleAction(class ItemStackRequestAction const&);
    virtual int /*enum ItemStackNetResult*/ endRequest();
    virtual void unk_vfn_4();
    virtual void postRequest(bool);
};