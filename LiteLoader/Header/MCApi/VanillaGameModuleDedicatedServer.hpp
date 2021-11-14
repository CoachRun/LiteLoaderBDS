// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class VanillaGameModuleDedicatedServer {
public:
    virtual ~VanillaGameModuleDedicatedServer();
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();
    virtual class std::shared_ptr<class IInPackagePacks> createInPackagePacks();
    virtual void registerMolangQueries();
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator&);
};