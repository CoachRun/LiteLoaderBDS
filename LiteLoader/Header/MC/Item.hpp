// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ItemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Item {
#include "Extra/ItemAPI.hpp"
public:
    virtual ~Item();
    virtual bool initServer(class Json::Value&, class SemVersion const&);
    virtual void tearDown();
    virtual int getMaxUseDuration(class ItemStack const*);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&);
    virtual void unk_vfn_7();
    virtual bool isArmor();
    virtual bool isBlockPlanterItem();
    virtual void unk_vfn_10();
    virtual bool isCamera();
    virtual void unk_vfn_12();
    virtual bool isDamageable();
    virtual bool isDyeable();
    virtual bool isDye();
    virtual int /*enum ItemColor*/ getItemColor();
    virtual bool isFertilizer();
    virtual void unk_vfn_18();
    virtual bool isThrowable();
    virtual bool isUseable();
    virtual class ICameraItemComponent* getCamera();
    virtual class IFoodItemComponent* getFood();
    virtual class FuelItemComponent* getFuel();
    virtual class Item& setMaxStackSize(unsigned char);
    virtual class Item& setStackedByData(bool);
    virtual class Item& setMaxDamage(int);
    virtual class Item& setHandEquipped();
    virtual class Item& setUseAnimation(int /*enum UseAnimation*/);
    virtual class Item& setMaxUseDuration(int);
    virtual class Item& setRequiresWorldBuilder(bool);
    virtual class Item& setExplodable(bool);
    virtual class Item& setFireResistant(bool);
    virtual class Item& setIsGlint(bool);
    virtual class Item& setShouldDespawn(bool);
    virtual void unk_vfn_35();
    virtual bool canBeDepleted();
    virtual bool canDestroySpecial(class Block const&);
    virtual int getLevelDataForAuxValue(int);
    virtual bool isStackedByData();
    virtual short getMaxDamage();
    virtual int getAttackDamage();
    virtual bool isHandEquipped();
    virtual bool isGlint(class ItemStackBase const&);
    virtual void unk_vfn_44();
    virtual void unk_vfn_45();
    virtual void unk_vfn_46();
    virtual bool isWearableThroughLootTable(class CompoundTag const*);
    virtual bool canDestroyInCreative();
    virtual bool isDestructive(int);
    virtual bool isLiquidClipItem(int);
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&);
    virtual bool requiresInteract();
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool);
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&);
    virtual int getEnchantSlot();
    virtual int getEnchantValue();
    virtual int getArmorValue();
    virtual void unk_vfn_58();
    virtual bool isValidAuxValue(int);
    virtual int getDamageChance(int);
    virtual void unk_vfn_61();
    virtual void unk_vfn_62();
    virtual void unk_vfn_63();
    virtual void unk_vfn_64();
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&);
    virtual bool hasCustomColor(class CompoundTag const*);
    virtual void unk_vfn_67();
    virtual void clearColor(class CompoundTag*);
    virtual void unk_vfn_69();
    virtual void unk_vfn_70();
    virtual void unk_vfn_71();
    virtual void unk_vfn_72();
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&);
    virtual void unk_vfn_74();
    virtual void unk_vfn_75();
    virtual int buildIdAux(short, class CompoundTag const*);
    virtual void unk_vfn_77();
    virtual class ItemStack& use(class ItemStack&, class Player&);
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char);
    virtual int /*enum ItemUseMethod*/ useTimeDepleted(class ItemStack&, class Level*, class Player*);
    virtual void releaseUsing(class ItemStack&, class Player*, int);
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&);
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&);
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&);
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&);
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*);
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*);
    virtual void unk_vfn_88();
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*);
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&);
    virtual std::string buildCategoryDescriptionName();
    virtual void readUserData(class ItemStackBase&, class IDataInput&, class ReadOnlyBinaryStream&);
    virtual void writeUserData(class ItemStackBase const&, class IDataOutput&);
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&);
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool);
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&);
    virtual class HashedString const& getCooldownType();
    virtual int getCooldownTime();
    virtual void fixupCommon(class ItemStackBase&, class Level&);
    virtual void fixupCommon(class ItemStackBase&);
    virtual short getDamageValue(class CompoundTag const*);
    virtual void setDamageValue(class ItemStackBase&, short);
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual bool validFishInteraction(int);
    virtual bool isSameItem(class ItemStackBase const&, class ItemStackBase const&);
    virtual void initClient(class Json::Value&, class SemVersion const&);
    virtual std::string getInteractText(class Player const&);
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool);
    virtual bool isEmissive(int);
    virtual struct Brightness getLightEmission(int);
    virtual struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const&, int, bool);
    virtual int getIconYOffset();
    virtual class Item& setIcon(struct TextureUVCoordinateSet const&);
    virtual class Item& setIcon(std::string const&, int);
    virtual class Item& setIconAtlas(std::string const&, int);
    virtual bool canBeCharged();
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&);
    virtual void unk_vfn_119();
    virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const&);
    virtual float getFurnaceXPmultiplier(class ItemStackBase const&);
    virtual std::string getAuxValuesDescription();
    virtual bool _checkUseOnPermissions(class Actor&, class ItemStackBase&, unsigned char const&, class BlockPos const&);
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&);
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, float, float, float);

public:
    MCAPI void addOnResetBAIcallback(class std::function<void(void)> const&);
    MCAPI class Item& addTag(class HashedString const&);
    MCAPI bool allowOffhand() const;
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const*) const;
    MCAPI float destroySpeedBonus(class ItemStackBase const&) const;
    MCAPI void fixupOnLoad(class ItemStackBase&) const;
    MCAPI void fixupOnLoad(class ItemStackBase&, class Level&) const;
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    MCAPI enum CreativeItemCategory getCreativeCategory() const;
    MCAPI std::string const& getCreativeGroup() const;
    MCAPI std::string const& getDescriptionId() const;
    MCAPI int getFrameCount() const;
    MCAPI std::string const& getFullItemName() const;
    MCAPI short getId() const;
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;
    MCAPI std::string const& getNamespace() const;
    MCAPI class HashedString const& getRawNameHash() const;
    MCAPI std::string const& getRawNameId() const;
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;
    MCAPI std::string getSerializedName() const;
    MCAPI enum UseAnimation getUseAnimation() const;
    MCAPI bool hasTag(class HashedString const&) const;
    MCAPI bool hasTag(unsigned __int64 const&) const;
    MCAPI bool isElytra() const;
    MCAPI bool isExplodable() const;
    MCAPI bool isFireResistant() const;
    MCAPI bool isNameTag() const;
    MCAPI bool isSeed() const;
    MCAPI class Item& setAllowOffhand(bool);
    MCAPI class Item& setCategory(enum CreativeItemCategory);
    MCAPI class Item& setCreativeGroup(std::string const&);
    MCAPI class Item& setDescriptionId(std::string const&);
    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float);
    MCAPI class Item& setFurnaceXPmultiplier(float);
    MCAPI class Item& setIsMirroredArt(bool);
    MCAPI class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const&);
    MCAPI bool shouldDespawn() const;
    MCAPI bool updateCustomBlockEntityTag(class BlockSource&, class ItemStackBase&, class BlockPos const&) const;
    MCAPI bool useOn(class ItemStack&, class Actor&, int, int, int, unsigned char, float, float, float) const;

    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
    MCAPI static std::string const TAG_DAMAGE;
    MCAPI static void addCreativeItem(class Block const&);
    MCAPI static void addCreativeItem(class ItemInstance const&);
    MCAPI static void addCreativeItem(class ItemStack const&);
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const&);
    MCAPI static void beginCreativeGroup(std::string const&, class ItemInstance const&);
    MCAPI static void beginCreativeGroup(std::string const&, short, short, class CompoundTag const*);
    MCAPI static void beginCreativeGroup(std::string const&, class Block const*, class CompoundTag const*);
    MCAPI static void endCreativeGroup();
    MCAPI static void endCreativeItemDefinitions(bool);
    MCAPI static struct TextureUVCoordinateSet const& getIconTextureUVSet(class TextureAtlasItem const&, int, int);
    MCAPI static class TextureAtlasItem const& getTextureItem(std::string const&);
    MCAPI static struct TextureUVCoordinateSet getTextureUVCoordinateSet(std::string const&, int);
    MCAPI static bool isElytra(class ItemDescriptor const&);
    MCAPI static bool isElytraBroken(int);
    MCAPI static bool isFlyEnabled(class ItemInstance const&);
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&);
    MCAPI static class CreativeGroupInfo* mActiveCreativeGroupInfo;
    MCAPI static class CreativeItemGroupCategory* mActiveCreativeItemCategory;
    MCAPI static class CreativeItemRegistry* mActiveCreativeItemRegistry;
    MCAPI static bool const mGenerateDenyParticleEffect;
    MCAPI static struct TextureUVCoordinateSet mInvalidTextureUVCoordinateSet;
    MCAPI static class std::weak_ptr<class AtlasItemManager> mItemTextureItems;
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry*);
    MCAPI static struct NewBlockID toBlockId(short);

private:
    MCAPI static void _addLooseCreativeItemsClient();
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;

protected:
    MCAPI void _helpChangeInventoryItemInPlace(class Actor&, class ItemStack&, class ItemStack&, enum ItemAcquisitionMethod) const;
};