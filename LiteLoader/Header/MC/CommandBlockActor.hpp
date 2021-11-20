// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockActor.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/CommandBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandBlockActor : public BlockActor {
#include "Extra/CommandBlockActorAPI.hpp"
public:
    virtual ~CommandBlockActor();
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    virtual bool save(class CompoundTag&);
    virtual void saveBlockData(class CompoundTag&, class BlockSource&);
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    virtual void onCustomTagLoadDone(class BlockSource&);
    virtual void tick(class BlockSource&);
    virtual void onChanged(class BlockSource&);
    virtual void onPlace(class BlockSource&);
    virtual void unk_vfn_12();
    virtual void onRemoved(class BlockSource&);
    virtual void triggerEvent(int, int);
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_21();
    virtual std::string const& getFilteredCustomName(class UIProfanityContext const&);
    virtual std::string getName();
    virtual void setCustomName(std::string const&);
    virtual std::string getImmersiveReaderText(class BlockSource&);
    virtual void unk_vfn_26();
    virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    virtual bool _playerCanUpdate(class Player const&);

public:
    MCAPI class BaseCommandBlock& getBaseCommandBlock();
    MCAPI std::string const& getCommand() const;
    MCAPI class CommandBlock const* getCommandBlock(class BlockSource&) const;
    MCAPI bool getConditionalMode(class BlockSource&) const;
    MCAPI int getDelayOnActivation() const;
    MCAPI enum CommandBlockMode getMode(class BlockSource&) const;
    MCAPI bool getPowered() const;
    MCAPI int getSuccessCount() const;
    MCAPI int getTickDelay() const;
    MCAPI bool isAutomatic() const;
    MCAPI bool markConditionMet(class BlockSource&);
    MCAPI void markForSaving(class BlockSource&);
    MCAPI void markForSaving(class BlockSource&, int, bool);
    MCAPI bool performCommand(class BlockSource&);
    MCAPI void setPowered(bool);
    MCAPI void setSuccessCount(int);
    MCAPI void updateBlock(class BlockSource&, std::string const&, std::string const&, enum CommandBlockMode, bool, bool, bool, int, bool);
    MCAPI bool wasConditionMet();

private:
    MCAPI void _setAutomatic(class BlockSource&, bool, enum CommandBlockMode);
};