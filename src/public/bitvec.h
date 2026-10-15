// Reconstructed from DWARF by pahole; not original source.

// src/public/bitvec.h:19
class CBitVecAccessor {
private:

	uint32 * m_pDWords;  // +0x0
	int m_iBit;  // +0x8
	CBitVecAccessor(uint32 *, int);
	void operator=(int);
	uint32 operator uint32();

	// sizeof = 16
};

// src/public/bitvec.h:1165
class CVarBitVec : public CVarBitVecT<short unsigned int, 32u> {
public:

	CVarBitVec();
	CVarBitVec(int);
	~CVarBitVec();

	// sizeof = 24
};

// src/public/bitvec.h:1172
class CLargeVarBitVec : public CBitVecT<CVarBitVecBase<int, 32> > {
public:

	CLargeVarBitVec();
	CLargeVarBitVec(int);
	~CLargeVarBitVec();

	// sizeof = 24
};
