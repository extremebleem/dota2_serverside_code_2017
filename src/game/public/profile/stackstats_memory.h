// Reconstructed from DWARF by pahole; not original source.

// src/game/public/profile/stackstats_memory.h:110
struct MemStdInfo_t {
	enum {
		SIZE_BUCKET_16 = 0,
		SIZE_BUCKET_32 = 0x1,
		SIZE_BUCKET_64 = 0x2,
		SIZE_BUCKET_128 = 0x3,
		SIZE_BUCKET_256 = 0x4,
		SIZE_BUCKET_512 = 0x5,
		SIZE_BUCKET_1024 = 0x6,
		SIZE_BUCKET_2048 = 0x7,
		NUM_SIZE_BUCKETS = 0x8,
	};

	size_t m_nCurrentSize;  // +0x0
	size_t m_nCurrentCount;  // +0x8
	uint64 m_nTotalSize;  // +0x10
	uint64 m_nTotalCount;  // +0x18
	size_t m_nMaxSingleAllocation;  // +0x20
	size_t m_nMaxConcurrentAllocations;  // +0x28
	size_t m_nCurrentWastedBytes;  // +0x30
	size_t m_nCurrentThatFitInAPointer;  // +0x38
	long unsigned int m_nCurrentCount_SmallBuckets[8];  // +0x40

	// sizeof = 128
};
