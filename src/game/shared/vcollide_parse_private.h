// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vcollide_parse_private.h:22
struct kventry_t {
	short unsigned int type;  // +0x0
	short unsigned int blockIndex;  // +0x2
	short unsigned int key;  // +0x4
	short unsigned int value;  // +0x6

	// sizeof = 8
};

// src/game/shared/vcollide_parse_private.h:30
struct packedkv_t {
	uint32 id;  // +0x0
	short unsigned int keyCount;  // +0x4
	short unsigned int stringCount;  // +0x6
	short unsigned int heapSize;  // +0x8
	short unsigned int heapOffset;  // +0xa
	kventry_t * KeyTable();
	short unsigned int * StringOffsetTable();
	const char * StringDataTable();
	const char * String(int);
	uint8 * HeapOffset(int);

	// sizeof = 12
};

// src/game/shared/vcollide_parse_private.h:65
struct parsefield_t {
	const char * pName;  // +0x0
	int offset;  // +0x8
	int type;  // +0xc
	int flags;  // +0x10
	int fieldSize;  // +0x14
	ParseFunction_t updateFunc;  // +0x18

	// sizeof = 32
};

// src/game/shared/vcollide_parse_private.h:75
struct parseblock_t {
	const char * pBlockName;  // +0x0
	int fieldCount;  // +0x10

	// sizeof = 24
};
