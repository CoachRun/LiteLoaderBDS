// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
class SchedulerSystem : public ITickingSystem {
public:
    virtual ~SchedulerSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};