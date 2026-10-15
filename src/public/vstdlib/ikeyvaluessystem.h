// Reconstructed from DWARF by pahole; not original source.

// src/public/vstdlib/ikeyvaluessystem.h:18
class HKeySymbol {
private:

	uint32 nIndex;  // +0x0
	HKeySymbol();
	HKeySymbol(uint32);
	uint32 GetIndex();
	uint32 operator uint32();
	bool operator==(const HKeySymbol &);

	// sizeof = 4
};

// src/public/vstdlib/ikeyvaluessystem.h:34
struct HTemporaryKeyValueAllocationScope__ {
	int unused;  // +0x0

	// sizeof = 4
};
