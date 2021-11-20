// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BedrockBlocksAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace BedrockBlocks {
#include "Extra/BedrockBlocksAPI.hpp"

MCAPI void assignBlocks();
MCAPI class Block const* mAir;
MCAPI class Block const* mClientRequestPlaceholderBlock;
MCAPI class Block const* mUnknown;
MCAPI void unassignBlocks();

} // namespace BedrockBlocks