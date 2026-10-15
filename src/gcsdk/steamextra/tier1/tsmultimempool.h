// Reconstructed from DWARF by pahole; not original source.

// src/gcsdk/steamextra/tier1/tsmultimempool.h:34
class CThreadSafeMultiMemoryPool {
	struct MemPoolConfig_t {
		uint32 m_cubBlockSize;  // +0x0
		uint32 m_cubDefaultPoolSize;  // +0x4

		// sizeof = 8
	};

	struct MemPoolRecord_t {
		uint32 m_nBlockSize;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct RawAllocation_t {
		void * m_pvMem;  // +0x0
		uint32 m_nBlockSize;  // +0x8

		// sizeof = 16
	};

private:

	uint32 m_nBlockSizeMax;  // +0x18

	CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int, bool (*)(void* const&, void* const&)> m_MapRawAllocation;  // +0x38

	uint32 m_cubReallocedTotal;  // +0x78
	CThreadSafeMultiMemoryPool(const MemPoolConfig_t *, int, int);
	/* tag__fprintf: const_type tag not supported! */;
	~CThreadSafeMultiMemoryPool();
	void * Alloc(uint32);
	void Free(void *);
	void * ReAlloc(void *, uint32);
	void Clear();
	int CubAllocSize(void *);
	void PrintStats();
	int Count();
	int CMBPoolSize();
	int CMBPoolSizeInUse();

	// sizeof = 128
};
