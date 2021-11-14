// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ItemUseInventoryTransaction {
public:
    virtual ~ItemUseInventoryTransaction();
    virtual void read(class ReadOnlyBinaryStream&);
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_3();
    virtual int /*enum InventoryTransactionError*/ handle(class Player&, bool);
    virtual void onTransactionError(class Player&, int /*enum InventoryTransactionError*/);

public:
    MCAPI class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const&);
    MCAPI void resendBlocksAroundArea(class Player&, class BlockPos const&, unsigned char) const;
    MCAPI class ItemUseInventoryTransaction& setSelectedItem(class ItemStack const&);

private:
    MCAPI static class BidirectionalUnorderedMap<enum ItemUseInventoryTransaction::ActionType, std::string> const actionTypeMap;
};