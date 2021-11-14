// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ContainerScreenContext {

public:
    MCAPI bool operator==(enum ContainerType);
    MCAPI class Player& getPlayer() const;
    MCAPI enum ContainerType getScreenContainerType() const;
    MCAPI class Actor* tryGetActor() const;
    MCAPI class BlockActor* tryGetBlockActor() const;
};