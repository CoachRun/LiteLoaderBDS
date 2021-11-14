// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EntitySystems {

public:
    MCAPI class PlayerInteractionSystem& getPlayerInteractionSystem();
    MCAPI void registerEvents(class EntityRegistry&);
    MCAPI void registerSystem(std::unique_ptr<struct ISystem>);
    MCAPI void registerTickingSystem(std::unique_ptr<class ITickingSystem>);
    MCAPI void tick(class EntityRegistry&, enum SimulationType);
};