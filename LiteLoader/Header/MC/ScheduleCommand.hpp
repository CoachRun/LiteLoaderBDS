// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScheduleCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScheduleCommand {
#include "Extra/ScheduleCommandAPI.hpp"
public:
    virtual ~ScheduleCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI void _delay(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI void _onAreaLoaded(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI struct ScheduleCommand::FunctionInfo _tryGetFunction(class FunctionManager&, class CommandOutput&) const;
};