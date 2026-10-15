// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/memstack.h:26
class CMemoryStack {
private:

	uint8 * m_pNextAlloc;  // +0x0
	uint8 * m_pCommitLimit;  // +0x8
	uint8 * m_pAllocLimit;  // +0x10
	uint8 * m_pHighestAllocLimit;  // +0x18
	uint8 * m_pBase;  // +0x20
	unsigned int m_maxSize;  // +0x28
	unsigned int m_alignment;  // +0x2c
	unsigned int m_commitIncrement;  // +0x30
	unsigned int m_minCommit;  // +0x34
	uint32 m_nAllocStatsId;  // +0x38

	CMemoryStack();
	~CMemoryStack();
	bool Init(const char *, unsigned int, unsigned int, unsigned int, unsigned int);
	void Term();
	int GetSize();
	int GetMaxSize();
	int GetUsed();
	void * Alloc(unsigned int, bool);
	MemoryStackMark_t GetCurrentAllocPoint();
	void FreeToAllocPoint(MemoryStackMark_t, bool);
	void FreeAll(bool);
	void Access(void * *, unsigned int *);
	void PrintContents();
	void * GetBase();
	const void * GetBase();
	bool CommitSize(int);
	const char * GetName();
	bool WillAllocSucceed(unsigned int);
	bool CommitTo(uint8 *);
	void RegisterAllocation(uint32);
	void RegisterDeallocation();

	// sizeof = 88
};
