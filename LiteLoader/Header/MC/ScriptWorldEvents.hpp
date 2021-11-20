// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptWorldEventsAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptWorldEvents {
#include "Extra/ScriptWorldEventsAPI.hpp"

public:
    MCAPI class Level& getLevel() const;
    MCAPI void onActivatePiston(struct ScriptPistonActionEvent&);
    MCAPI void onActorAddEffect(struct ScriptActorAddEffectEvent&);
    MCAPI void onActorCreated(struct ScriptActorEvent&);
    MCAPI void onBeforeActivatePiston(struct ScriptBeforePistonActionEvent&);
    MCAPI void onBeforeChat(struct ScriptBeforeChatEvent&);
    MCAPI void onBeforeExplosion(struct ScriptBeforeExplosionStartedEvent&);
    MCAPI void onChat(struct ScriptChatEvent&);
    MCAPI void onExplodeBlock(struct ScriptBlockExplodedEvent&);
    MCAPI void onExplosion(struct ScriptExplosionStartedEvent&);
    MCAPI void onLevelTick(struct ScriptTickEvent&);
    MCAPI void onWeatherChanged(struct ScriptWeatherChangedEvent&);
    MCAPI class ScriptWorldEvents& operator=(class ScriptWorldEvents&&);
    MCAPI void registerListener(struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptWorldEvents> bind(struct Scripting::Version);
};