// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "TargetGoal.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/WitherTargetHighestDamageAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WitherTargetHighestDamage : public TargetGoal {
#include "Extra/WitherTargetHighestDamageAPI.hpp"
public:
    virtual ~WitherTargetHighestDamage();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool _canAttack(class Mob*, class Actor*, bool, bool, struct MobDescriptor const**);

private:
    MCAPI class Player* getHighestDamageTarget();
};