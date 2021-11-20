// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CommandOrigin.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/PlayerCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PlayerCommandOrigin : public CommandOrigin {
#include "Extra/PlayerCommandOriginAPI.hpp"
public:
    virtual ~PlayerCommandOrigin();
    virtual std::string const& getRequestId();
    virtual std::string getName();
    virtual class BlockPos getBlockPosition();
    virtual class Vec3 getWorldPosition();
    virtual class Level* getLevel();
    virtual class Dimension* getDimension();
    virtual class Actor* getEntity();
    virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel();
    virtual std::unique_ptr<class CommandOrigin> clone();
    virtual class std::optional<class BlockPos> getCursorHitBlockPos();
    virtual class std::optional<class Vec3> getCursorHitPos();
    virtual bool canUseAbility(int /*enum AbilitiesIndex*/);
    virtual bool canUseCommandsWithoutCheatsEnabled();
    virtual bool isSelectorExpansionAllowed();
    virtual class NetworkIdentifier const& getSourceId();
    virtual unsigned char getSourceSubId();
    virtual void unk_vfn_20();
    virtual struct CommandOriginIdentity getIdentity();
    virtual void unk_vfn_22();
    virtual void unk_vfn_24();
    virtual void handleCommandOutputCallback(class Json::Value&&);
    virtual class CompoundTag serialize();
    virtual bool isValid();

public:
    MCAPI static std::unique_ptr<class PlayerCommandOrigin> load(class CompoundTag const&, class Level&);
};