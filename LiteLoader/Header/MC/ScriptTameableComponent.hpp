// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptTameableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptTameableComponent : public ScriptActorComponent {
#include "Extra/ScriptTameableComponentAPI.hpp"
public:
    virtual ~ScriptTameableComponent();

public:
    MCAPI class Scripting::Result<float> getProbability() const;
    MCAPI class Scripting::Result<struct Scripting::TypedObjectHandle<class ScriptDefinitionTrigger>> getTameEvent() const;
    MCAPI class Scripting::Result<bool> tame() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptTameableComponent> bind(struct Scripting::Version);
};