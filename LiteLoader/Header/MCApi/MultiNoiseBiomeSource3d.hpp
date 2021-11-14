// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MultiNoiseBiomeSource3d {
public:
    virtual ~MultiNoiseBiomeSource3d();
    virtual void fillBiomes(class LevelChunk&, class ChunkLocalNoiseCache const&);
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int);
    virtual bool containsOnly(int, int, int, int, class gsl::span<int const, -1>);
    virtual class Biome const* getBiome(int, int, int);

private:
    MCAPI struct TargetPoint _getTargetPoint(int, int, int) const;
};