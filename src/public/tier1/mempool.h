// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/mempool.h:50
class CUtlMemoryPoolBase {
	class CBlob {
		int m_NumBytes;  // +0x8
		char m_Data[1];  // +0xc
		char m_Padding[3];  // +0xd

		// sizeof = 16
	};

	struct FreeList_t {
		// sizeof = 8
	};
	/* tag__fprintf: volatile_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;

protected:

	int m_BlockSize;  // +0x0
	int m_BlocksPerBlob;  // +0x4
	CInterlockedInt m_BlocksAllocated;  // +0xc
	CInterlockedInt m_PeakAlloc;  // +0x10
	short unsigned int m_nAlignment;  // +0x14
	short unsigned int m_NumBlobs;  // +0x16
	const char * m_pszAllocOwner;  // +0x18
	CTSFastPushQueue m_FreeList;  // +0x20
	CTSFastPushQueue m_Blobs;  // +0x30

	static MemoryPoolReportFunc_t g_ReportFunc;
	CUtlMemoryPoolBase(int, int, int, MemoryPoolGrowType_t, const char *);
	~CUtlMemoryPoolBase();
	void * Alloc();
	void * AllocZero();
	void Free(void *);
	void Clear();
	void SetErrorReportFunc(MemoryPoolReportFunc_t);
	int Count();
	int PeakCount();
	int BlockSize();
	int Size();
	bool IsAllocationWithinPool(void *);
	void ResetAllocationCounts();
	FreeList_t * AddNewBlob();
	void InternalClear(CBlob *, FreeList_t *);

	// sizeof = 64
};

// src/public/tier1/mempool.h:696
struct UtlScratchMemoryPoolMark_t {
	void * m_pBlock;  // +0x0
	int m_nBytesFree;  // +0x8

	// sizeof = 16
};

// src/public/tier1/mempool.h:707
class CUtlScratchMemoryPool {
	struct MemoryBlock_t {
		int m_nBytesFree;  // +0x8
		bool m_bSkipDeallocation;  // +0xc
		uint8 * GetAllocPtr(int);

		// sizeof = 16
	};

protected:

	int m_nBlockSize;  // +0x8
	bool m_bSearchAllBlocks;  // +0xc
	CUtlScratchMemoryPool();
	CUtlScratchMemoryPool(int, void *, bool);
	~CUtlScratchMemoryPool();
	void Init(int, void *, bool);
	void * AllocAligned(int, int);
	void * AllocNaturalAligned(int);
	void * Alloc(int);
	void * AllocZero(int);
	const char * DupString(const char *);
	void FreeAll();
	UtlScratchMemoryPoolMark_t GetCurrentAllocPoint();
	void FreeToAllocPoint(UtlScratchMemoryPoolMark_t);
	bool IsInitialized();
	void * AddNewBlock(int);
	int GetFirstBytesFree();
	int GetBlockUsableBytes();

	// sizeof = 16
};

// src/public/tier1/mempool.h:707
class CUtlScratchMemoryPool {
	struct MemoryBlock_t {
		int m_nBytesFree;  // +0x8
		bool m_bSkipDeallocation;  // +0xc
		uint8 * GetAllocPtr(int);

		// sizeof = 16
	};

protected:

	int m_nBlockSize;  // +0x8
	bool m_bSearchAllBlocks;  // +0xc
	CUtlScratchMemoryPool();
	CUtlScratchMemoryPool(int, void *, bool);
	~CUtlScratchMemoryPool();
	void Init(int, void *, bool);
	void * AllocAligned(int, int);
	void * AllocNaturalAligned(int);
	void * Alloc(int);
	void * AllocZero(int);
	const char * DupString(const char *);
	void FreeAll();
	UtlScratchMemoryPoolMark_t GetCurrentAllocPoint();
	void FreeToAllocPoint(UtlScratchMemoryPoolMark_t);
	bool IsInitialized();
	void * AddNewBlock(int);
	int GetFirstBytesFree();
	int GetBlockUsableBytes();
	char * AllocType<char>(int);
	DOTASpecialAbility_t * AllocType<DOTASpecialAbility_t>(int);
	int * AllocType<int>(int);
	float * AllocType<float>(int);

	// sizeof = 16
};
