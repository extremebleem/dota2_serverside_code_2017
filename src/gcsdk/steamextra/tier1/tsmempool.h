// Reconstructed from DWARF by pahole; not original source.

// src/gcsdk/steamextra/tier1/tsmempool.h:31
class CThreadSafeMemoryPool {
	struct BlockSet_t {
		uint8 * m_pubBlockSet;  // +0x0
		size_t m_cubAllocated;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const int k_nRequiredAlignment = 16;
private:

	int m_nGrowMode;  // +0x20
	int m_cubBlockSize;  // +0x24
	int m_nGrowSize;  // +0x28
	CInterlockedInt m_cBlocksInUse;  // +0x2c
	size_t m_cubAllocated;  // +0x30
	CThreadSafeMemoryPool(int, int, int);
	~CThreadSafeMemoryPool();
	void * Alloc();
	void * Alloc(unsigned int);
	void Free(void *);
	void Free(void *, int);
	void Clear();
	void PrintStats();
	size_t CubTotalSize();
	size_t CubSizeInUse();
	int Count();
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	void * operator new [](size_t);
	void operator delete [](void *);
	void ClearNoLock();

	// sizeof = 96
};
