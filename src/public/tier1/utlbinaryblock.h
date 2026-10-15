// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlbinaryblock.h:18
class CUtlBinaryBlock {
private:

	int m_nActualLength;  // +0x10
	CUtlBinaryBlock(int, int);
	CUtlBinaryBlock(void *, int, int);
	CUtlBinaryBlock(const void *, int);
	CUtlBinaryBlock(const CUtlBinaryBlock &);
	CUtlBinaryBlock(CUtlBinaryBlock &);
	void Get(void *, int);
	void Set(const void *, int);
	const void * Get();
	void * Get();
	unsigned char & operator[](int);
	const unsigned char & operator[](int);
	int Length();
	void SetLength(int);
	bool IsEmpty();
	void Clear();
	void Purge();
	bool IsReadOnly();
	CUtlBinaryBlock & operator=(const CUtlBinaryBlock &);
	bool operator==(const CUtlBinaryBlock &);
	~CUtlBinaryBlock();

	// sizeof = 24
};
