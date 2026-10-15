// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlblockmemory.h:35
class CUtlBlockMemory<CacheOptimizedTriangle_t, int> {
	static const int INVALID_INDEX;
protected:

	int m_nBlocks;  // +0x8
	uint32 m_nIndexMask:27;  // +0xc:0
	uint32 m_nIndexShift:5;  // +0xc:27
	class Iterator_t {
		// sizeof = 0
	};
	CUtlBlockMemory(int, int);
	~CUtlBlockMemory();
	void Init(int, int);
	CacheOptimizedTriangle_t * Base();
	const CacheOptimizedTriangle_t * Base();
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	CacheOptimizedTriangle_t & operator[](int);
	const CacheOptimizedTriangle_t & operator[](int);
	CacheOptimizedTriangle_t & Element(int);
	const CacheOptimizedTriangle_t & Element(int);
	bool IsIdxValid(int);
	int InvalidIndex();
	void Swap(CUtlBlockMemory<CacheOptimizedTriangle_t, int> &);
	int NumAllocated();
	int Count();
	int BlockSize();
	void Grow(int);
	void EnsureCapacity(int);
	int EnsureContiguousCapacity(int, int);
	void Purge();
	void Purge(int);
	bool IsUsingGrowableMemory();
	int Index(int, int);
	int MajorIndex(int);
	int MinorIndex(int);
	void ChangeSize(int);
	int NumElementsInBlock();

	// sizeof = 16
};

// src/public/tier1/utlblockmemory.h:35
class CUtlBlockMemory<float const*, int> {
	static const int INVALID_INDEX;
protected:

	const float * * * m_pMemory;  // +0x0
	int m_nBlocks;  // +0x8
	uint32 m_nIndexMask:27;  // +0xc:0
	uint32 m_nIndexShift:5;  // +0xc:27
	class Iterator_t {
		// sizeof = 0
	};
	CUtlBlockMemory(int, int);
	~CUtlBlockMemory();
	void Init(int, int);
	const float * * Base();
	const float * const * Base();
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	const float * & operator[](int);
	const float * const & operator[](int);
	const float * & Element(int);
	const float * const & Element(int);
	bool IsIdxValid(int);
	int InvalidIndex();
	void Swap(CUtlBlockMemory<float const*, int> &);
	int NumAllocated();
	int Count();
	int BlockSize();
	void Grow(int);
	void EnsureCapacity(int);
	int EnsureContiguousCapacity(int, int);
	void Purge();
	void Purge(int);
	bool IsUsingGrowableMemory();
	int Index(int, int);
	int MajorIndex(int);
	int MinorIndex(int);
	void ChangeSize(int);
	int NumElementsInBlock();

	// sizeof = 16
};
