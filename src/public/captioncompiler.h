// Reconstructed from DWARF by pahole; not original source.

// src/public/captioncompiler.h:24
struct CompiledCaptionHeader_t {
	static datamap_t m_DataMap;

	int magic;  // +0x0
	int version;  // +0x4
	int numblocks;  // +0x8
	int blocksize;  // +0xc
	int directorysize;  // +0x10
	int dataoffset;  // +0x14
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 24
};

// src/public/captioncompiler.h:35
struct CaptionLookup_t {
	static datamap_t m_DataMap;

	unsigned int hash;  // +0x0
	int blockNum;  // +0x4
	short unsigned int offset;  // +0x8
	short unsigned int length;  // +0xa
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	void SetHash(const char *);

	// sizeof = 12
};

// src/public/captioncompiler.h:59
class CCaptionLookupLess {
	bool Less(const CaptionLookup_t &, const CaptionLookup_t &, void *);

	// sizeof = 1
};
