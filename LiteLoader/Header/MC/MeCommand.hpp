// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MeCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MeCommand {
#include "Extra/MeCommandAPI.hpp"
public:
    virtual ~MeCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};