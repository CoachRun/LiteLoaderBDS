// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class AgeableComponent {

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    MCAPI int getAge() const;
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void setAge(int);
};