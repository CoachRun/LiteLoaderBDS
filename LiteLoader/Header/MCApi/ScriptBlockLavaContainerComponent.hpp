// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseScriptBlockLiquidContainerComponent.hpp"
class ScriptBlockLavaContainerComponent : public BaseScriptBlockLiquidContainerComponent {
public:
    virtual ~ScriptBlockLavaContainerComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockLavaContainerComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockLavaContainerComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
};