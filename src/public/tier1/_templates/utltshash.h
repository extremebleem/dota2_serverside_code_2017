// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utltshash.h:101
class CUtlTSHashPreHashedKeyMethod<unsigned int> {
	int Hash(const unsigned int &, int);
	bool Compare(const unsigned int &, const unsigned int &);

	// sizeof = 1
};

// src/public/tier1/utltshash.h:119
class CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex> {
	struct HashFixedDataInternal_t<ComponentUnserializerFieldInfo_t> {
		unsigned int m_uiKey;  // +0x0

		// sizeof = 48
	};

	struct HashBucket_t : public CThreadNullMutex {
	public:

		HashFixedData_t * m_pFirst;  // +0x0
		HashFixedData_t * m_pFirstUncommitted;  // +0x8

		// sizeof = 16
	};
	typedef HashFixedDataInternal_t<ComponentUnserializerFieldInfo_t> HashFixedData_t;

protected:

	CUtlMemoryPoolMT m_EntryMemory;  // +0x0
	bool m_bNeedsCommit;  // +0x140

	CInterlockedInt m_ContentionCheck;  // +0x144
	CUtlTSHashBase(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, int);
	~CUtlTSHashBase(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, int);
	UtlTSHashHandle_t InvalidHandle();
	bool IsValidHandle(UtlTSHashHandle_t);
	UtlTSHashHandle_t Find(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, unsigned int);
	const unsigned int * FindKeyForValue(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, const ComponentUnserializerFieldInfo_t &);
	UtlTSHashHandle_t Insert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, const ComponentUnserializerFieldInfo_t &, bool *);
	UtlTSHashHandle_t Insert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, ITSHashConstructor<ComponentUnserializerFieldInfo_t> *, bool *);
	UtlTSHashHandle_t FastInsert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, const ComponentUnserializerFieldInfo_t &);
	UtlTSHashHandle_t FastInsert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, ITSHashConstructor<ComponentUnserializerFieldInfo_t> *);
	void Commit(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul);
	void FindAndRemove(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int);
	void Remove(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, UtlTSHashHandle_t);
	void RemoveAll(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul);
	void Purge(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul);
	int Count(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr);
	int GetElements(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, int, int, UtlTSHashHandle_t *);
	int GetElementsData(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, int, int, ComponentUnserializerFieldInfo_t *);
	ComponentUnserializerFieldInfo_t & Element(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, UtlTSHashHandle_t);
	const ComponentUnserializerFieldInfo_t & Element(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	ComponentUnserializerFieldInfo_t & operator[](CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, UtlTSHashHandle_t);
	const ComponentUnserializerFieldInfo_t & operator[](const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	unsigned int GetID(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	const unsigned int * GetPointerToKey(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	UtlTSHashHandle_t ElementPtrToHandle(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, ComponentUnserializerFieldInfo_t *);
	size_t AllocSize(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr);
	UtlTSHashHandle_t Find(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, unsigned int, HashFixedData_t *, HashFixedData_t *);
	UtlTSHashHandle_t InsertUncommitted(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, HashBucket_t &);

	// sizeof = 328
};

// src/public/tier1/utltshash.h:119
class CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex> {
	enum {
		BUCKET_MASK = 0xf,
	};

	struct HashFixedDataInternal_t<ComponentUnserializerFieldInfo_t> {
		unsigned int m_uiKey;  // +0x0

		// sizeof = 48
	};

	struct HashBucket_t : public CThreadNullMutex {
	public:

		HashFixedData_t * m_pFirst;  // +0x0
		HashFixedData_t * m_pFirstUncommitted;  // +0x8

		// sizeof = 16
	};
	typedef HashFixedDataInternal_t<ComponentUnserializerFieldInfo_t> HashFixedData_t;

protected:

	CUtlMemoryPoolMT m_EntryMemory;  // +0x0
	bool m_bNeedsCommit;  // +0x140

	CInterlockedInt m_ContentionCheck;  // +0x144
	CUtlTSHashBase(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, int);
	~CUtlTSHashBase(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, int);
	UtlTSHashHandle_t InvalidHandle();
	bool IsValidHandle(UtlTSHashHandle_t);
	UtlTSHashHandle_t Find(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, unsigned int);
	const unsigned int * FindKeyForValue(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, const ComponentUnserializerFieldInfo_t &);
	UtlTSHashHandle_t Insert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, const ComponentUnserializerFieldInfo_t &, bool *);
	UtlTSHashHandle_t Insert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, ITSHashConstructor<ComponentUnserializerFieldInfo_t> *, bool *);
	UtlTSHashHandle_t FastInsert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, const ComponentUnserializerFieldInfo_t &);
	UtlTSHashHandle_t FastInsert(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, ITSHashConstructor<ComponentUnserializerFieldInfo_t> *);
	void Commit(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul);
	void FindAndRemove(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int);
	void Remove(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, UtlTSHashHandle_t);
	void RemoveAll(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul);
	void Purge(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul);
	int Count(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr);
	int GetElements(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, int, int, UtlTSHashHandle_t *);
	int GetElementsData(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, int, int, ComponentUnserializerFieldInfo_t *);
	ComponentUnserializerFieldInfo_t & Element(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, UtlTSHashHandle_t);
	const ComponentUnserializerFieldInfo_t & Element(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	ComponentUnserializerFieldInfo_t & operator[](CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, UtlTSHashHandle_t);
	const ComponentUnserializerFieldInfo_t & operator[](const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	unsigned int GetID(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	const unsigned int * GetPointerToKey(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, UtlTSHashHandle_t);
	UtlTSHashHandle_t ElementPtrToHandle(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, ComponentUnserializerFieldInfo_t *);
	size_t AllocSize(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr);
	UtlTSHashHandle_t Find(const CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThr, unsigned int, HashFixedData_t *, HashFixedData_t *);
	UtlTSHashHandle_t InsertUncommitted(CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNul, unsigned int, HashBucket_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 328
};

// src/public/tier1/utltshash.h:119
class CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock> {
	enum {
		BUCKET_MASK = 0x7ff,
	};

	struct HashFixedDataInternal_t<CUtlSymbolTableLargeBaseTreeEntry_t*> {
		// sizeof = 24
	};

	struct HashBucket_t : public CThreadSpinRWLock {
	public:

		HashFixedData_t * m_pFirst;  // +0x18
		HashFixedData_t * m_pFirstUncommitted;  // +0x20
		HashBucket_t();

		// sizeof = 48
	};
	typedef HashFixedDataInternal_t<CUtlSymbolTableLargeBaseTreeEntry_t*> HashFixedData_t;

protected:

	CUtlMemoryPoolMT m_EntryMemory;  // +0x0
	bool m_bNeedsCommit;  // +0x18040

	CInterlockedInt m_ContentionCheck;  // +0x18044
	CUtlTSHashBase(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, int);
	~CUtlTSHashBase(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, int);
	UtlTSHashHandle_t InvalidHandle();
	bool IsValidHandle(UtlTSHashHandle_t);
	UtlTSHashHandle_t Find(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, CUtlSymbolTableLargeBaseTreeEntry_t *);
	CUtlSymbolTableLargeBaseTreeEntry_t * const * FindKeyForValue(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, CUtlSymbolTableLargeBaseTreeEntry_t * const &);
	UtlTSHashHandle_t Insert(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, CUtlSymbolTableLargeBaseTreeEntry_t *, CUtlSymbolTableLargeBaseTreeEntry_t * const &, bool *);
	UtlTSHashHandle_t Insert(bool *);
	UtlTSHashHandle_t FastInsert(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, CUtlSymbolTableLargeBaseTreeEntry_t *, CUtlSymbolTableLargeBaseTreeEntry_t * const &);
	UtlTSHashHandle_t FastInsert();
	void Commit(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth);
	void FindAndRemove(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, CUtlSymbolTableLargeBaseTreeEntry_t *);
	void Remove(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, UtlTSHashHandle_t);
	void RemoveAll(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth);
	void Purge(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth);
	int Count(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa);
	int GetElements(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, int, int, UtlTSHashHandle_t *);
	int GetElementsData(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, int, int, CUtlSymbolTableLargeBaseTreeEntry_t * *);
	CUtlSymbolTableLargeBaseTreeEntry_t * & Element(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, UtlTSHashHandle_t);
	CUtlSymbolTableLargeBaseTreeEntry_t * const & Element(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, UtlTSHashHandle_t);
	CUtlSymbolTableLargeBaseTreeEntry_t * & operator[](CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, UtlTSHashHandle_t);
	CUtlSymbolTableLargeBaseTreeEntry_t * const & operator[](const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, UtlTSHashHandle_t);
	CUtlSymbolTableLargeBaseTreeEntry_t * GetID(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, UtlTSHashHandle_t);
	CUtlSymbolTableLargeBaseTreeEntry_t * const * GetPointerToKey(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, UtlTSHashHandle_t);
	UtlTSHashHandle_t ElementPtrToHandle(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, CUtlSymbolTableLargeBaseTreeEntry_t * *);
	size_t AllocSize(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa);
	UtlTSHashHandle_t Find(const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHa, CUtlSymbolTableLargeBaseTreeEntry_t *, HashFixedData_t *, HashFixedData_t *);
	UtlTSHashHandle_t InsertUncommitted(CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMeth, CUtlSymbolTableLargeBaseTreeEntry_t *, HashBucket_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 98384
};

// src/public/tier1/utltshash.h:809
class CUtlTSHash<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true> > : public CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock> {
public:

	CUtlTSHash(CUtlTSHash<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2, int);
	~CUtlTSHash(CUtlTSHash<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2, int);

	// sizeof = 98384
};

// src/public/tier1/utltshash.h:832
class CUtlNonTSHashPreHashedKeys<ComponentUnserializerFieldInfo_t, 16, unsigned int> : public CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex> {
public:

	CUtlNonTSHashPreHashedKeys(int);
	~CUtlNonTSHashPreHashedKeys();

	// sizeof = 328
};

// src/public/tier1/utltshash.h:1005
class CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree> {
	struct HashTable_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	unsigned int m_nDeletedKeyValue;  // +0x8
	unsigned int m_nEmptyKeyValue;  // +0xc
	int m_nCurrentTableSize;  // +0x10
	int m_nNumKeysDeleted;  // +0x14
	struct HashEntry_Unaligned_t {
		unsigned int m_key;  // +0x0
		unsigned int m_value;  // +0x4

		// sizeof = 8
	};

	struct HashEntry_t : public HashEntry_Unaligned_t {
	public:

		// sizeof = 8
	};
	CUtlTSOpenHash(unsigned int, unsigned int);
	void Optimize();
	bool Insert(unsigned int, unsigned int, unsigned int *);
	unsigned int Find_Inline(unsigned int, unsigned int, bool *, unsigned int *);
	unsigned int Find(unsigned int, unsigned int, bool *);
	void Delete(unsigned int);
	~CUtlTSOpenHash();
	void Purge();
	void ExtractDataAsVector(CUtlVector<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpenH);
	HashTable_t * NewTable();
	HashEntry_t * FindEntry_Inline(unsigned int, bool *, unsigned int *);

	// sizeof = 40
};

// src/public/tier1/utltshash.h:1005
class CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree> {
	struct HashTable_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	unsigned int m_nDeletedKeyValue;  // +0x8
	unsigned int m_nEmptyKeyValue;  // +0xc
	int m_nCurrentTableSize;  // +0x10
	int m_nNumKeysDeleted;  // +0x14
	struct HashEntry_Unaligned_t {
		unsigned int m_key;  // +0x0
		unsigned int m_value;  // +0x4

		// sizeof = 8
	};

	struct HashEntry_t : public HashEntry_Unaligned_t {
	public:

		// sizeof = 8
	};
	CUtlTSOpenHash(unsigned int, unsigned int);
	void Optimize();
	bool Insert(unsigned int, unsigned int, unsigned int *);
	unsigned int Find_Inline(unsigned int, unsigned int, bool *, unsigned int *);
	unsigned int Find(unsigned int, unsigned int, bool *);
	void Delete(unsigned int);
	~CUtlTSOpenHash();
	void Purge();
	void ExtractDataAsVector(CUtlVector<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpenH);
	HashTable_t * NewTable();
	HashEntry_t * FindEntry_Inline(unsigned int, bool *, unsigned int *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 40
};

// src/public/tier1/utltshash.h:1005
class CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree> {
	struct HashTable_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	unsigned int m_nDeletedKeyValue;  // +0x8
	unsigned int m_nEmptyKeyValue;  // +0xc
	int m_nCurrentTableSize;  // +0x10
	int m_nNumKeysDeleted;  // +0x14
	struct extractdata_t {
		unsigned int key;  // +0x0
		unsigned int value;  // +0x4

		// sizeof = 8
	};

	struct HashEntry_Unaligned_t {
		unsigned int m_key;  // +0x0
		unsigned int m_value;  // +0x4

		// sizeof = 8
	};

	struct HashEntry_t : public HashEntry_Unaligned_t {
	public:

		// sizeof = 8
	};
	CUtlTSOpenHash(unsigned int, unsigned int);
	void Optimize();
	bool Insert(unsigned int, unsigned int, unsigned int *);
	unsigned int Find_Inline(unsigned int, unsigned int, bool *, unsigned int *);
	unsigned int Find(unsigned int, unsigned int, bool *);
	void Delete(unsigned int);
	~CUtlTSOpenHash();
	void Purge();
	void ExtractDataAsVector(CUtlVector<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpenH);
	HashTable_t * NewTable();
	HashEntry_t * FindEntry_Inline(unsigned int, bool *, unsigned int *);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 40
};
