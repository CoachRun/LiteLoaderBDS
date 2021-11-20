// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BiomeDecorationSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace BiomeDecorationSystem {
#include "Extra/BiomeDecorationSystemAPI.hpp"

MCAPI void consolidateDecorationFeatures(class BiomeRegistry&);
MCAPI void decorateLargeFeature(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&, std::string const&);

} // namespace BiomeDecorationSystem