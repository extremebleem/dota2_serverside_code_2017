// Reconstructed from DWARF by pahole; not original source.

// src/public/bitvec.h:902
class CBitVecT<CFixedBitVecBase<64> > : public CFixedBitVecBase<64> {
public:

	CBitVecT(CBitVecT<CFixedBitVecBase<64> > *);
	CBitVecT(CBitVecT<CFixedBitVecBase<64> > *, int);
	void Init(CBitVecT<CFixedBitVecBase<64> > *, int);
	CBitVecAccessor operator[](CBitVecT<CFixedBitVecBase<64> > *, int);
	uint32 operator[](const CBitVecT<CFixedBitVecBase<64> > *, int);
	bool IsAllClear(const CBitVecT<CFixedBitVecBase<64> > *);
	bool IsAllSet(const CBitVecT<CFixedBitVecBase<64> > *);
	uint32 Get(const CBitVecT<CFixedBitVecBase<64> > *, uint32);
	bool IsBitSet(const CBitVecT<CFixedBitVecBase<64> > *, int);
	void Set(CBitVecT<CFixedBitVecBase<64> > *, int);
	void Set(CBitVecT<CFixedBitVecBase<64> > *, int, bool);
	void Clear(CBitVecT<CFixedBitVecBase<64> > *, int);
	bool TestAndSet(CBitVecT<CFixedBitVecBase<64> > *, int);
	void Set(CBitVecT<CFixedBitVecBase<64> > *, uint32, uint32);
	void Clear(CBitVecT<CFixedBitVecBase<64> > *, uint32, uint32);
	uint32 Get(CBitVecT<CFixedBitVecBase<64> > *, uint32, uint32);
	void SetAll(CBitVecT<CFixedBitVecBase<64> > *);
	void ClearAll(CBitVecT<CFixedBitVecBase<64> > *);
	uint32 GetDWord(const CBitVecT<CFixedBitVecBase<64> > *, int);
	void SetDWord(CBitVecT<CFixedBitVecBase<64> > *, int, uint32);
	uint32 PopulationCount(const CBitVecT<CFixedBitVecBase<64> > *);
	void PackBitsFromWords(CBitVecT<CFixedBitVecBase<64> > *, const uint16 *, int, int);
	void GetOffsetMaskForBit(uint32, uint32 *, uint32 *);
	void Ranged_Set(CBitVecT<CFixedBitVecBase<64> > *, int, int);
	void Ranged_Clear(CBitVecT<CFixedBitVecBase<64> > *, int, int);

	// sizeof = 8
};

// src/public/bitvec.h:902
class CBitVecT<CFixedBitVecBase<16384> > : public CFixedBitVecBase<16384> {
public:

	CBitVecT(CBitVecT<CFixedBitVecBase<16384> > *);
	CBitVecT(CBitVecT<CFixedBitVecBase<16384> > *, int);
	void Init(CBitVecT<CFixedBitVecBase<16384> > *, int);
	CBitVecAccessor operator[](CBitVecT<CFixedBitVecBase<16384> > *, int);
	uint32 operator[](const CBitVecT<CFixedBitVecBase<16384> > *, int);
	bool IsAllClear(const CBitVecT<CFixedBitVecBase<16384> > *);
	bool IsAllSet(const CBitVecT<CFixedBitVecBase<16384> > *);
	uint32 Get(const CBitVecT<CFixedBitVecBase<16384> > *, uint32);
	bool IsBitSet(const CBitVecT<CFixedBitVecBase<16384> > *, int);
	void Set(CBitVecT<CFixedBitVecBase<16384> > *, int);
	void Set(CBitVecT<CFixedBitVecBase<16384> > *, int, bool);
	void Clear(CBitVecT<CFixedBitVecBase<16384> > *, int);
	bool TestAndSet(CBitVecT<CFixedBitVecBase<16384> > *, int);
	void Set(CBitVecT<CFixedBitVecBase<16384> > *, uint32, uint32);
	void Clear(CBitVecT<CFixedBitVecBase<16384> > *, uint32, uint32);
	uint32 Get(CBitVecT<CFixedBitVecBase<16384> > *, uint32, uint32);
	void SetAll(CBitVecT<CFixedBitVecBase<16384> > *);
	void ClearAll(CBitVecT<CFixedBitVecBase<16384> > *);
	uint32 GetDWord(const CBitVecT<CFixedBitVecBase<16384> > *, int);
	void SetDWord(CBitVecT<CFixedBitVecBase<16384> > *, int, uint32);
	uint32 PopulationCount(const CBitVecT<CFixedBitVecBase<16384> > *);
	void PackBitsFromWords(CBitVecT<CFixedBitVecBase<16384> > *, const uint16 *, int, int);
	void GetOffsetMaskForBit(uint32, uint32 *, uint32 *);
	void Ranged_Set(CBitVecT<CFixedBitVecBase<16384> > *, int, int);
	void Ranged_Clear(CBitVecT<CFixedBitVecBase<16384> > *, int, int);

	// sizeof = 2048
};

// src/public/bitvec.h:902
class CBitVecT<CVarBitVecBase<int, 32> > : public CVarBitVecBase<int, 32> {
public:

	CBitVecT(CBitVecT<CVarBitVecBase<int, 32> > *);
	CBitVecT(CBitVecT<CVarBitVecBase<int, 32> > *, int);
	void Init(CBitVecT<CVarBitVecBase<int, 32> > *, int);
	CBitVecAccessor operator[](CBitVecT<CVarBitVecBase<int, 32> > *, int);
	uint32 operator[](const CBitVecT<CVarBitVecBase<int, 32> > *, int);
	bool IsAllClear(const CBitVecT<CVarBitVecBase<int, 32> > *);
	bool IsAllSet(const CBitVecT<CVarBitVecBase<int, 32> > *);
	uint32 Get(const CBitVecT<CVarBitVecBase<int, 32> > *, uint32);
	bool IsBitSet(const CBitVecT<CVarBitVecBase<int, 32> > *, int);
	void Set(CBitVecT<CVarBitVecBase<int, 32> > *, int);
	void Set(CBitVecT<CVarBitVecBase<int, 32> > *, int, bool);
	void Clear(CBitVecT<CVarBitVecBase<int, 32> > *, int);
	bool TestAndSet(CBitVecT<CVarBitVecBase<int, 32> > *, int);
	void Set(CBitVecT<CVarBitVecBase<int, 32> > *, uint32, uint32);
	void Clear(CBitVecT<CVarBitVecBase<int, 32> > *, uint32, uint32);
	uint32 Get(CBitVecT<CVarBitVecBase<int, 32> > *, uint32, uint32);
	void SetAll(CBitVecT<CVarBitVecBase<int, 32> > *);
	void ClearAll(CBitVecT<CVarBitVecBase<int, 32> > *);
	uint32 GetDWord(const CBitVecT<CVarBitVecBase<int, 32> > *, int);
	void SetDWord(CBitVecT<CVarBitVecBase<int, 32> > *, int, uint32);
	uint PopulationCount(const CBitVecT<CVarBitVecBase<int, 32> > *);
	void PackBitsFromWords(CBitVecT<CVarBitVecBase<int, 32> > *, const uint16 *, int, int);
	void GetOffsetMaskForBit(uint32, uint32 *, uint32 *);
	void Ranged_Set(CBitVecT<CVarBitVecBase<int, 32> > *, int, int);
	void Ranged_Clear(CBitVecT<CVarBitVecBase<int, 32> > *, int, int);
	~CBitVecT(CBitVecT<CVarBitVecBase<int, 32> > *, int);

	// sizeof = 24
};

// src/public/bitvec.h:997
class CVarBitVecBase<int, 32> {
	enum {
		FIXED_INT_SIZE = 0x1,
	};

private:

	int m_numBits;  // +0x0
	int m_numInts;  // +0x4
	uint32 * m_pInt;  // +0x8
	unsigned int m_FixedStorage[1];  // +0x10
	bool IsFixedSize();
	int GetNumBits();
	void Resize(int, bool);
	int GetNumDWords();
	uint32 * Base();
	const uint32 * Base();
	void Attach(uint32 *, int);
	bool Detach(uint32 * *, int *);
	int FindNextSetBit(int);
	int FindNextSetBit(int, int);

protected:

	CVarBitVecBase();
	CVarBitVecBase(int);
	bool ShouldOptimizeForLargeCount();
	~CVarBitVecBase();
	unsigned int GetEndMask();

private:

	void AllocInts(int);
	void ReallocInts(int);
	void FreeInts();

	// sizeof = 24
};

// src/public/bitvec.h:997
class CVarBitVecBase<short unsigned int, 32u> {
	enum {
		FIXED_INT_SIZE = 0x1,
	};

private:

	short unsigned int m_numBits;  // +0x0
	short unsigned int m_numInts;  // +0x2

	uint32 * m_pInt;  // +0x8
	unsigned int m_FixedStorage[1];  // +0x10
	bool IsFixedSize();
	int GetNumBits();
	void Resize(int, bool);
	int GetNumDWords();
	uint32 * Base();
	const uint32 * Base();
	void Attach(uint32 *, int);
	bool Detach(uint32 * *, int *);
	int FindNextSetBit(int);
	int FindNextSetBit(int, int);

protected:

	CVarBitVecBase();
	CVarBitVecBase(int);
	bool ShouldOptimizeForLargeCount();
	~CVarBitVecBase();
	unsigned int GetEndMask();

private:

	void AllocInts(int);
	void ReallocInts(int);
	void FreeInts();

	// sizeof = 24
};

// src/public/bitvec.h:997
class CVarBitVecBase<short unsigned int, 1024u> {
	enum {
		FIXED_INT_SIZE = 0x20,
	};

private:

	short unsigned int m_numBits;  // +0x0
	short unsigned int m_numInts;  // +0x2

	uint32 * m_pInt;  // +0x8
	unsigned int m_FixedStorage[32];  // +0x10
	bool IsFixedSize();
	int GetNumBits();
	void Resize(int, bool);
	int GetNumDWords();
	uint32 * Base();
	const uint32 * Base();
	void Attach(uint32 *, int);
	bool Detach(uint32 * *, int *);
	int FindNextSetBit(int);
	int FindNextSetBit(int, int);

protected:

	CVarBitVecBase();
	CVarBitVecBase(int);
	bool ShouldOptimizeForLargeCount();
	~CVarBitVecBase();
	unsigned int GetEndMask();

private:

	void AllocInts(int);
	void ReallocInts(int);
	void FreeInts();

	// sizeof = 144
};

// src/public/bitvec.h:1099
class CFixedBitVecBase<64> {
private:

	unsigned int m_Ints[2];  // +0x0
	bool IsFixedSize();
	int GetNumBits();
	void Resize(int, bool);
	int GetNumDWords();
	uint32 * Base();
	const uint32 * Base();
	int FindNextSetBit(int);
	int FindNextSetBit(int, int);

protected:

	CFixedBitVecBase();
	CFixedBitVecBase(int);
	bool ShouldOptimizeForLargeCount();
	unsigned int GetEndMask();

	// sizeof = 8
};

// src/public/bitvec.h:1099
class CFixedBitVecBase<16384> {
private:

	unsigned int m_Ints[512];  // +0x0
	bool IsFixedSize();
	int GetNumBits();
	void Resize(int, bool);
	int GetNumDWords();
	uint32 * Base();
	const uint32 * Base();
	int FindNextSetBit(int);
	int FindNextSetBit(int, int);

protected:

	CFixedBitVecBase();
	CFixedBitVecBase(int);
	bool ShouldOptimizeForLargeCount();
	unsigned int GetEndMask();

	// sizeof = 2048
};

// src/public/bitvec.h:1099
class CFixedBitVecBase<64> {
	enum {
		NUM_INTS = 0x2,
	};

private:

	unsigned int m_Ints[2];  // +0x0
	bool IsFixedSize();
	int GetNumBits();
	void Resize(int, bool);
	int GetNumDWords();
	uint32 * Base();
	const uint32 * Base();
	int FindNextSetBit(int);
	int FindNextSetBit(int, int);

protected:

	CFixedBitVecBase();
	CFixedBitVecBase(int);
	bool ShouldOptimizeForLargeCount();
	unsigned int GetEndMask();

	// sizeof = 8
};

// src/public/bitvec.h:1152
class CVarBitVecT<short unsigned int, 32u> : public CBitVecT<CVarBitVecBase<short unsigned int, 32u> > {
public:

	CVarBitVecT();
	CVarBitVecT(int);
	~CVarBitVecT();

	// sizeof = 24
};

// src/public/bitvec.h:1152
class CVarBitVecT<short unsigned int, 1024u> : public CBitVecT<CVarBitVecBase<short unsigned int, 1024u> > {
public:

	CVarBitVecT();
	CVarBitVecT(int);
	~CVarBitVecT();

	// sizeof = 144
};

// src/public/bitvec.h:1152
class CVarBitVecT<unsigned int, 32u> : public CBitVecT<CVarBitVecBase<unsigned int, 32u> > {
public:

	CVarBitVecT();
	CVarBitVecT(int);
	~CVarBitVecT();

	// sizeof = 24
};

// src/public/bitvec.h:1188
class CBitVec<64> : public CBitVecT<CFixedBitVecBase<64> > {
public:

	CBitVec();
	CBitVec(int);

	// sizeof = 8
};

// src/public/bitvec.h:1188
class CBitVec<16384> : public CBitVecT<CFixedBitVecBase<16384> > {
public:

	CBitVec();
	CBitVec(int);

	// sizeof = 2048
};

// src/public/bitvec.h:1188
class CBitVec<16> : public CBitVecT<CFixedBitVecBase<16> > {
public:

	CBitVec();
	CBitVec(int);

	// sizeof = 4
};

// src/public/bitvec.h:1202
class CSchemaTypeOf<CBitVec<64> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// CBitVecT: 8 more instantiations (full list in INDEX.tsv)
//   CBitVecT<CFixedBitVecBase<16> >
//   CBitVecT<CVarBitVecBase<short unsigned int, 32u> >
//   CBitVecT<CFixedBitVecBase<32768> >
//   CBitVecT<CVarBitVecBase<short unsigned int, 1024u> >
//   CBitVecT<CFixedBitVecBase<512> >
//   CBitVecT<CFixedBitVecBase<262144> >
//   CBitVecT<CFixedBitVecBase<19> >
//   CBitVecT<CVarBitVecBase<unsigned int, 32u> >

// CVarBitVecBase: 1 more instantiations (full list in INDEX.tsv)
//   CVarBitVecBase<unsigned int, 32u>

// CFixedBitVecBase: 11 more instantiations (full list in INDEX.tsv)
//   CFixedBitVecBase<16>
//   CFixedBitVecBase<32768>
//   CFixedBitVecBase<512>
//   CFixedBitVecBase<262144>
//   CFixedBitVecBase<16384>
//   CFixedBitVecBase<256>
//   CFixedBitVecBase<128>
//   CFixedBitVecBase<96>
//   CFixedBitVecBase<32>
//   CFixedBitVecBase<19>
//   CFixedBitVecBase<16384>

// CBitVec: 4 more instantiations (full list in INDEX.tsv)
//   CBitVec<32768>
//   CBitVec<512>
//   CBitVec<262144>
//   CBitVec<19>
