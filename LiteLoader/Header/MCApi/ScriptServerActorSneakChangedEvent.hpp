// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptServerActorSneakChangedEvent {
public:
    virtual ~ScriptServerActorSneakChangedEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setIsSneaking(bool);

private:
    MCAPI static class HashedString const mHash;
};