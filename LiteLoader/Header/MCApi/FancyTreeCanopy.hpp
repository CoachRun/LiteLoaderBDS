// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FancyTreeCanopy {
public:
    virtual ~FancyTreeCanopy();
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&);

private:
    MCAPI class std::optional<class BlockPos> _fillLayer(class IBlockWorldGenAPI&, class BlockPos const&, class Block const*, int, struct TreeHelper::TreeParams const&) const;
};