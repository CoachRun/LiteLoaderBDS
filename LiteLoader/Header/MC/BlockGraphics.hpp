// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockGraphicsAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BlockGraphics {
#include "Extra/BlockGraphicsAPI.hpp"

public:
    MCAPI enum BlockShape getBlockShape() const;
    MCAPI struct TextureUVCoordinateSet const& getIconTexture(int) const;
    MCAPI bool isFull() const;
    MCAPI bool isFullAndOpaque() const;

    MCAPI static float const SIZE_OFFSET;
    MCAPI static class BlockGraphics const* getForBlock(class Block const&);
    MCAPI static class BlockGraphics const* getForBlock(class BlockLegacy const&);
    MCAPI static bool isInitialized();
    MCAPI static std::unique_ptr<class BlockGraphics> mDummyBlock;
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);

private:
    MCAPI static class std::mutex mBlockModelAccess;
    MCAPI static class std::unordered_map<unsigned int, class BlockGraphics*, struct std::hash<unsigned int>, struct std::equal_to<unsigned int>, class std::allocator<struct std::pair<unsigned int const, class BlockGraphics*>>> mBlocks;
    MCAPI static bool mInitialized;

protected:
    MCAPI static class std::weak_ptr<class AtlasItemManager> mTerrainTextureAtlas;
};