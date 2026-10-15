// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/blockcompress.h:14
class CBlockCompress {
	uint32 FastCompress(const uint8 *, uint32, uint8 *, uint32);
	uint32 GetDecompressedSize(const uint8 *, uint32);
	bool IsStoredUncompressed(const uint8 *, uint32);
	uint32 FastDecompress(const uint8 *, uint32, uint8 *, uint32);

	// sizeof = 1
};
