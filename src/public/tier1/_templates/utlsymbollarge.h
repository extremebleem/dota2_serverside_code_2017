// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlsymbollarge.h:199
class CTreeEntryLess<CNonThreadsafeTree<false>, false> {
	CTreeEntryLess(CTreeEntryLess<CNonThreadsafeTree<false>, false> *, int);
	bool operator!(const CTreeEntryLess<CNonThreadsafeTree<false>, false> *);
	bool operator()(const CTreeEntryLess<CNonThreadsafeTree<false>, false> *, CUtlSymbolTableLargeBaseTreeEntry_t * const &, CUtlSymbolTableLargeBaseTreeEntry_t * const &);

	// sizeof = 1
};

// src/public/tier1/utlsymbollarge.h:199
class CTreeEntryLess<CNonThreadsafeTree<true>, true> {
	CTreeEntryLess(CTreeEntryLess<CNonThreadsafeTree<true>, true> *, int);
	bool operator!(const CTreeEntryLess<CNonThreadsafeTree<true>, true> *);
	bool operator()(const CTreeEntryLess<CNonThreadsafeTree<true>, true> *, CUtlSymbolTableLargeBaseTreeEntry_t * const &, CUtlSymbolTableLargeBaseTreeEntry_t * const &);

	// sizeof = 1
};

// src/public/tier1/utlsymbollarge.h:224
class CNonThreadsafeTree<false> : public CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> > {
public:

	typedef intp IndexType_t;
	CNonThreadsafeTree();
	void Commit();
	IndexType_t Insert(CUtlSymbolTableLargeBaseTreeEntry_t *);
	IndexType_t Find(CUtlSymbolTableLargeBaseTreeEntry_t *);
	IndexType_t InvalidIndex();
	IndexType_t GetElements(int, int, CUtlSymbolLarge *);
	~CNonThreadsafeTree();

	// sizeof = 64
};

// src/public/tier1/utlsymbollarge.h:224
class CNonThreadsafeTree<true> : public CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> > {
public:

	typedef intp IndexType_t;
	CNonThreadsafeTree();
	void Commit();
	IndexType_t Insert(CUtlSymbolTableLargeBaseTreeEntry_t *);
	IndexType_t Find(CUtlSymbolTableLargeBaseTreeEntry_t *);
	IndexType_t InvalidIndex();
	IndexType_t GetElements(int, int, CUtlSymbolLarge *);

	// sizeof = 64
};

// src/public/tier1/utlsymbollarge.h:264
class CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true> {
	int Hash(CUtlSymbolTableLargeBaseTreeEntry_t * const &, int);
	bool Compare(CUtlSymbolTableLargeBaseTreeEntry_t * const &, CUtlSymbolTableLargeBaseTreeEntry_t * const &);

	// sizeof = 1
};

// src/public/tier1/utlsymbollarge.h:298
class CThreadsafeTree<true> : public CUtlTSHash<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true> > {
public:

	typedef intp IndexType_t;
	CThreadsafeTree();
	void Commit();
	IndexType_t Insert(CUtlSymbolTableLargeBaseTreeEntry_t *);
	IndexType_t Find(CUtlSymbolTableLargeBaseTreeEntry_t *);
	IndexType_t InvalidIndex();
	int GetElements(int, int, CUtlSymbolLarge *);
	~CThreadsafeTree();

	// sizeof = 98384
};

// src/public/tier1/utlsymbollarge.h:340
class CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> {
	struct StringPool_t {
		int m_TotalLen;  // +0x0
		int m_SpaceUsed;  // +0x4
		char m_Data[1];  // +0x8

		// sizeof = 12
	};

protected:

	CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int);
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int AddStringElement(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int AddStringElement(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int FindElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int FindElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	bool HasElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	bool HasElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	const char * String(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, CUtlSymbolLarge);
	void RemoveAll(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	int GetNumStrings(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	void Commit(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	int GetElements(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int, int, CUtlSymbolLarge *);
	const char * GetElementString(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int);
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);

private:

	int FindPoolWithSpace(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int);
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);

	// sizeof = 88
};

// src/public/tier1/utlsymbollarge.h:340
class CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> {
	struct StringPool_t {
		int m_TotalLen;  // +0x0
		int m_SpaceUsed;  // +0x4
		char m_Data[1];  // +0x8

		// sizeof = 12
	};

protected:

	CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *);
	~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, int);
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *);
	int AddStringElement(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *);
	int AddStringElement(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *, int);
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *);
	int FindElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *);
	int FindElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *, int);
	bool HasElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *);
	bool HasElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *, int);
	const char * String(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, CUtlSymbolLarge);
	void RemoveAll(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *);
	int GetNumStrings(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *);
	void Commit(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *);
	int GetElements(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, int, int, CUtlSymbolLarge *);
	const char * GetElementString(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, int);
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *);

private:

	int FindPoolWithSpace(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, int);
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *, int);
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul> *, const char *, int);

	// sizeof = 88
};

// src/public/tier1/utlsymbollarge.h:340
class CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> {
	struct StringPool_t {
		// sizeof = 0
	};

protected:

	CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int);
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int AddStringElement(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int AddStringElement(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int FindElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	int FindElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	bool HasElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *);
	bool HasElement(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	const char * String(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, CUtlSymbolLarge);
	void RemoveAll(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	int GetNumStrings(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	void Commit(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);
	int GetElements(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int, int, CUtlSymbolLarge *);
	const char * GetElementString(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int);
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *);

private:

	int FindPoolWithSpace(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, int);
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul> *, const char *, int);

	// sizeof = 88
};

// src/public/tier1/utlsymbollarge.h:657
class CSchemaTypeOf<CUtlSymbolLarge> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// CUtlSymbolTableLargeBase: 1 more instantiations (full list in INDEX.tsv)
//   CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>
