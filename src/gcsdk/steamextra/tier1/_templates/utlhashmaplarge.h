// Reconstructed from DWARF by pahole; not original source.

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:23
class CUtlHashMapLargeDefEquals<item_definition_index_t> {
	CUtlHashMapLargeDefEquals();
	CUtlHashMapLargeDefEquals(int);
	bool operator()(const item_definition_index_t &, const item_definition_index_t &);
	bool operator!();

	// sizeof = 1
};

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:23
class CUtlHashMapLargeDefEquals<CEconSchemaSymbol> {
	CUtlHashMapLargeDefEquals();
	CUtlHashMapLargeDefEquals(int);
	bool operator()(const CEconSchemaSymbol &, const CEconSchemaSymbol &);
	bool operator!();

	// sizeof = 1
};

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:23
class CUtlHashMapLargeDefEquals<unsigned int> {
	CUtlHashMapLargeDefEquals();
	CUtlHashMapLargeDefEquals(int);
	bool operator()(const unsigned int &, const unsigned int &);
	bool operator!();

	// sizeof = 1
};

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:84
class CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> > : public base_utlmap_t {
	enum EInsertPolicy {
		eInsert_UpdateExisting = 0,
		eInsert_LeaveExisting = 0x1,
		eInsert_CreateDupes = 0x2,
	};

	struct HashBucket_t {
		IndexType_t m_iNode;  // +0x0

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct Node_t {
		KeyType_t m_key;  // +0x0

		ElemType_t m_elem;  // +0x8
		int m_iNextNode;  // +0x10
		Node_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	typedef int IndexType_t;

	IndexType_t m_iNodeFreeListHead;  // +0x40
	IndexType_t m_cElements;  // +0x44
	IndexType_t m_nMaxElement;  // +0x48
	IndexType_t m_nMinRehashedBucket;  // +0x4c
	IndexType_t m_nMaxRehashedBucket;  // +0x50
	typedef CUtlHashMapLargeDefEquals<item_definition_index_t> EqualityFunc_t;

	EqualityFunc_t m_EqualityFunc;  // +0x54

	typedef MurmurHash3Functor<item_definition_index_t> HashFunc_t;

	HashFunc_t m_HashFunc;  // +0x55
	typedef item_definition_index_t KeyType_t;
	typedef CEconItemDefinition * ElemType_t;

	class MutableValuesIteratorHelper {
		// sizeof = 0
	};

	class ConstValuesIteratorHelper {
		// sizeof = 0
	};
	CUtlHashMapLarge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	CUtlHashMapLarge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	~CUtlHashMapLarge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	ElemType_t & Element(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	const ElemType_t & Element(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	ElemType_t & operator[](CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	const ElemType_t & operator[](const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	KeyType_t & Key(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	const KeyType_t & Key(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	IndexType_t Count(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,);
	IndexType_t MaxElement(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,);
	bool IsValidIndex(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	IndexType_t InvalidIndex();
	IndexType_t Insert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	IndexType_t Insert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	IndexType_t InsertWithDupes(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	IndexType_t FindOrInsert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	IndexType_t InsertOrReplace(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	int Find(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, const KeyType_t &);
	int FindOrInsert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	const ElemType_t * FindGetPtr(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, const KeyType_t &);
	ElemType_t * FindGetPtr(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	ElemType_t * FindOrInsertGetPtr(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	bool HasElement(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, const KeyType_t &);
	void EnsureCapacity(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	void RemoveAt(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	bool Remove(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	void RemoveAll(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void Purge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void PurgeAndDeleteElements(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void Swap(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	ConstValuesIteratorHelper IterValues(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,);
	MutableValuesIteratorHelper IterValues(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	int InsertInternal(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &, EInsertPolicy);
	IndexType_t FreeNodeIDToIndex(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	IndexType_t FreeNodeIndexToID(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	bool IsFreeNodeID(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	int FindInBucket(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, int, const KeyType_t &);
	int AllocNode(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void RehashNodesInBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	void LinkNodeIntoBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int, int);
	void UnlinkNodeFromBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int, int);
	bool RemoveNodeFromBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t, int);
	void IncrementalRehash(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);

	// sizeof = 88
};

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:84
class CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> > : public base_utlmap_t {
	enum EInsertPolicy {
		eInsert_UpdateExisting = 0,
		eInsert_LeaveExisting = 0x1,
		eInsert_CreateDupes = 0x2,
	};

	struct HashBucket_t {
		IndexType_t m_iNode;  // +0x0

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct Node_t {
		KeyType_t m_key;  // +0x0
		ElemType_t m_elem;  // +0x8
		int m_iNextNode;  // +0x10
		Node_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	typedef int IndexType_t;

	IndexType_t m_iNodeFreeListHead;  // +0x40
	IndexType_t m_cElements;  // +0x44
	IndexType_t m_nMaxElement;  // +0x48
	IndexType_t m_nMinRehashedBucket;  // +0x4c
	IndexType_t m_nMaxRehashedBucket;  // +0x50
	typedef CUtlHashMapLargeDefEquals<CEconSchemaSymbol> EqualityFunc_t;

	EqualityFunc_t m_EqualityFunc;  // +0x54

	typedef MurmurHash3Functor<CEconSchemaSymbol> HashFunc_t;

	HashFunc_t m_HashFunc;  // +0x55
	typedef CEconSchemaSymbol KeyType_t;
	typedef CEconItemDefinition * ElemType_t;

	class MutableValuesIteratorHelper {
		// sizeof = 0
	};

	class ConstValuesIteratorHelper {
		// sizeof = 0
	};
	CUtlHashMapLarge(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);
	CUtlHashMapLarge(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, int);
	~CUtlHashMapLarge(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, int);
	ElemType_t & Element(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, IndexType_t);
	const ElemType_t & Element(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	ElemType_t & operator[](CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, IndexType_t);
	const ElemType_t & operator[](const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, IndexType_t);
	KeyType_t & Key(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, IndexType_t);
	const KeyType_t & Key(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	IndexType_t Count(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3);
	IndexType_t MaxElement(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3);
	bool IsValidIndex(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, IndexType_t);
	IndexType_t InvalidIndex();
	IndexType_t Insert(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &, const ElemType_t &);
	IndexType_t Insert(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &);
	IndexType_t InsertWithDupes(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &, const ElemType_t &);
	IndexType_t FindOrInsert(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &, const ElemType_t &);
	IndexType_t InsertOrReplace(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &, const ElemType_t &);
	int Find(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, const KeyType_t &);
	int FindOrInsert(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &);
	const ElemType_t * FindGetPtr(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, const KeyType_t &);
	ElemType_t * FindGetPtr(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &);
	ElemType_t * FindOrInsertGetPtr(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &);
	bool HasElement(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, const KeyType_t &);
	void EnsureCapacity(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, int);
	void RemoveAt(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, IndexType_t);
	bool Remove(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &);
	void RemoveAll(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);
	void Purge(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);
	void PurgeAndDeleteElements(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);
	void Swap(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);
	ConstValuesIteratorHelper IterValues(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3);
	MutableValuesIteratorHelper IterValues(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);
	int InsertInternal(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, const KeyType_t &, const ElemType_t &, EInsertPolicy);
	IndexType_t FreeNodeIDToIndex(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, IndexType_t);
	IndexType_t FreeNodeIndexToID(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, IndexType_t);
	bool IsFreeNodeID(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, IndexType_t);
	int FindInBucket(const CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3, int, const KeyType_t &);
	int AllocNode(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);
	void RehashNodesInBucket(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, int);
	void LinkNodeIntoBucket(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, int, int);
	void UnlinkNodeFromBucket(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, int, int);
	bool RemoveNodeFromBucket(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo, IndexType_t, int);
	void IncrementalRehash(CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functo);

	// sizeof = 88
};

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:84
class CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> > : public base_utlmap_t {
	enum CompileTimeCheck {
		IsUtlMap = 0x1,
	};

	enum EInsertPolicy {
		eInsert_UpdateExisting = 0,
		eInsert_LeaveExisting = 0x1,
		eInsert_CreateDupes = 0x2,
	};

	struct HashBucket_t {
		IndexType_t m_iNode;  // +0x0

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct Node_t {
		KeyType_t m_key;  // +0x0

		ElemType_t m_elem;  // +0x8
		int m_iNextNode;  // +0x10
		Node_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	typedef int IndexType_t;

	IndexType_t m_iNodeFreeListHead;  // +0x40
	IndexType_t m_cElements;  // +0x44
	IndexType_t m_nMaxElement;  // +0x48
	IndexType_t m_nMinRehashedBucket;  // +0x4c
	IndexType_t m_nMaxRehashedBucket;  // +0x50
	typedef CUtlHashMapLargeDefEquals<item_definition_index_t> EqualityFunc_t;

	EqualityFunc_t m_EqualityFunc;  // +0x54

	typedef MurmurHash3Functor<item_definition_index_t> HashFunc_t;

	HashFunc_t m_HashFunc;  // +0x55
	typedef item_definition_index_t KeyType_t;
	typedef CEconItemDefinition * ElemType_t;

	class MutableValuesIteratorHelper {
		// sizeof = 0
	};

	class ConstValuesIteratorHelper {
		// sizeof = 0
	};
	CUtlHashMapLarge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	CUtlHashMapLarge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	~CUtlHashMapLarge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	ElemType_t & Element(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	const ElemType_t & Element(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	ElemType_t & operator[](CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	const ElemType_t & operator[](const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	KeyType_t & Key(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	const KeyType_t & Key(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	IndexType_t Count(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,);
	IndexType_t MaxElement(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,);
	bool IsValidIndex(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	IndexType_t InvalidIndex();
	IndexType_t Insert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	IndexType_t Insert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	IndexType_t InsertWithDupes(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	IndexType_t FindOrInsert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	IndexType_t InsertOrReplace(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &);
	int Find(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, const KeyType_t &);
	int FindOrInsert(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	const ElemType_t * FindGetPtr(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, const KeyType_t &);
	ElemType_t * FindGetPtr(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	ElemType_t * FindOrInsertGetPtr(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	bool HasElement(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, const KeyType_t &);
	void EnsureCapacity(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	void RemoveAt(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t);
	bool Remove(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &);
	void RemoveAll(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void Purge(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void PurgeAndDeleteElements(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void Swap(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	ConstValuesIteratorHelper IterValues(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,);
	MutableValuesIteratorHelper IterValues(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	int InsertInternal(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, const KeyType_t &, const ElemType_t &, EInsertPolicy);
	IndexType_t FreeNodeIDToIndex(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	IndexType_t FreeNodeIndexToID(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	bool IsFreeNodeID(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, IndexType_t);
	int FindInBucket(const CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>,, int, const KeyType_t &);
	int AllocNode(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);
	void RehashNodesInBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int);
	void LinkNodeIntoBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int, int);
	void UnlinkNodeFromBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, int, int);
	bool RemoveNodeFromBucket(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu, IndexType_t, int);
	void IncrementalRehash(CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, Murmu);

	// sizeof = 88
};

// CUtlHashMapLargeDefEquals: 3 more instantiations (full list in INDEX.tsv)
//   CUtlHashMapLargeDefEquals<long long unsigned int>
//   CUtlHashMapLargeDefEquals<long long int>
//   CUtlHashMapLargeDefEquals<int>

// CUtlHashMapLarge: 19 more instantiations (full list in INDEX.tsv)
//   CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<lo
//   CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Fun
//   CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long
//   CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >
//   CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<u
//   CUtlHashMapLarge<int, KeyValues*, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >
//   CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >
//   CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<u
//   CUtlHashMapLarge<int, CUtlVector<CSteamID, CUtlMemory<CSteamID, int> >*, CUtlHashMapLargeDefEquals<int>, MurmurHash3Func
//   CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Funct
//   CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t, CUtlHashMapLargeDefEquals<item_defini
//   CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functo
//   CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >*
//   CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<lo
//   CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Fun
//   CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long
//   CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >
//   CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsi
//   CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>
