// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animationsystem/animationresource.h:123
union CAnimValue {
	struct {
		uint8 valid;  // +0x0
		uint8 total;  // +0x1
	} num;
	short int value;  // +0x0
};

// src/game/public/animationsystem/animationresource.h:236
struct CAnimDecoder {
	AnimString_t m_szName;  // +0x0
	int32 m_nVersion;  // +0x10
	int32 m_nType;  // +0x14
	CAnimDecoder();

	// sizeof = 24
};

// src/game/public/animationsystem/animationresource.h:249
struct CAnimFrameSegment {
	int32 m_nUniqueFrameIndex;  // +0x0
	uint32 m_nLocalElementMasks;  // +0x4
	int32 m_nLocalChannel;  // +0x8

	void * m_pContainer;  // +0x10
	const DecodeContainer_t * pContainer();

	// sizeof = 24
};

// src/game/public/animationsystem/animationresource.h:423
struct CAnimData {
	AnimString_t m_name;  // +0x0
	int32 m_nMaxUniqueFrameIndex;  // +0x58

	const char * GetName();
	CAnimData();

private:

	CAnimData(const CAnimData &);

	// sizeof = 120
};

// src/game/public/animationsystem/animationresource.h:451
class CAnimationResource {
private:

	const ICompressorService * * m_pMasterDecoder;  // +0x0
	int32 m_nCacheKey;  // +0x10

	uint16 * m_pLocalCacheIndexes;  // +0x18
	CAnimationResource();
	void InitFromV0Data(CConvertOldDiskCtx &, const AnimationResourceData_t *, const char *);
	void Finalize();
	~CAnimationResource();
	const CAnimData * GetData();
	uint16 * GetLocalCacheIndexes();
	uint32 GetCacheKey(int32);
	bool IsInited();
	const ICompressorService * GetDecompressor(int);
	void InitDecompressors();
	const char * GetName();

	// sizeof = 40
};
