// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlstack.h:27
class CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > {
private:

	int m_Size;  // +0x10

	CUtlStack(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int, int);
	~CUtlStack(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	void CopyFrom(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, const CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > &);
	JSONParserMessageField_t & operator[](CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	const JSONParserMessageField_t & operator[](const CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	JSONParserMessageField_t & Element(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	const JSONParserMessageField_t & Element(const CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	JSONParserMessageField_t * Base(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	const JSONParserMessageField_t * Base(const CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	JSONParserMessageField_t & Top(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	const JSONParserMessageField_t & Top(const CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	int Count(const CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	bool IsIdxValid(const CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	int Push(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	int Push(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, const JSONParserMessageField_t &);
	void Pop(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	void Pop(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, JSONParserMessageField_t &);
	void PopMultiple(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	void EnsureCapacity(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *, int);
	void Clear(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	void Purge(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	void GrowStack(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);
	void ResetDbgInfo(CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> > *);

	// sizeof = 32
};

// src/public/tier1/utlstack.h:27
class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > {
private:

	int m_Size;  // +0x10

	CUtlStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int, int);
	~CUtlStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	void CopyFrom(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > &);
	KeyValues3 * & operator[](CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	KeyValues3 * const & operator[](const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	KeyValues3 * & Element(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	KeyValues3 * const & Element(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	KeyValues3 * * Base(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	KeyValues3 * const * Base(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	KeyValues3 * & Top(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	KeyValues3 * const & Top(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	int Count(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	bool IsIdxValid(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	int Push(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	int Push(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, KeyValues3 * const &);
	void Pop(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	void Pop(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, KeyValues3 * &);
	void PopMultiple(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	void EnsureCapacity(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int);
	void Clear(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	void Purge(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	void GrowStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);
	void ResetDbgInfo(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *);

	// sizeof = 32
};

// src/public/tier1/utlstack.h:27
class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > {
private:

	int m_Size;  // +0x10

	const KeyValues3 * * m_pElements;  // +0x18
	CUtlStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int, int);
	~CUtlStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	void CopyFrom(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > &);
	const KeyValues3 * & operator[](CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	const KeyValues3 * const & operator[](const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	const KeyValues3 * & Element(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	const KeyValues3 * const & Element(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	const KeyValues3 * * Base(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	const KeyValues3 * const * Base(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	const KeyValues3 * & Top(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	const KeyValues3 * const & Top(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	int Count(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	bool IsIdxValid(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	int Push(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	int Push(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const KeyValues3 * const &);
	void Pop(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	void Pop(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const KeyValues3 * &);
	void PopMultiple(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	void EnsureCapacity(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int);
	void Clear(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	void Purge(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	void GrowStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);
	void ResetDbgInfo(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *);

	// sizeof = 32
};

// CUtlStack: 6 more instantiations (full list in INDEX.tsv)
//   CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >
//   CUtlStack<const typedescription_t*, CUtlMemory<const typedescription_t*, int> >
//   CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >
//   CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >
//   CUtlStack<float, CUtlMemory<float, int> >
//   CUtlStack<CDOTA_BotAction*, CUtlMemory<CDOTA_BotAction*, int> >
