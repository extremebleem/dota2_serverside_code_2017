// Reconstructed from DWARF by pahole; not original source.

// src/public/tier2/fieldpath.h:90
class CFieldPath {
	enum ConstructSentinel_t {
		IS_SENTINEL = 0x1,
	};

	struct Path_t {
		int16 m_nValue;  // +0x0

		// sizeof = 2
	};

	union fieldpathpaths_t {
		const Path_t * m_pPaths;  // +0x0
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	int16 m_nCount;  // +0x10
	bool m_bUsingExternalPaths;  // +0x12
	CFieldPath();
	CFieldPath(const CFieldPath &);
	CFieldPath(const Path_t *, int);
	CFieldPath(bool, const Path_t *, int);
	CFieldPath(ConstructSentinel_t);
	CFieldPath(PackedFieldPath_t, const PackedFieldPath_t *, const int *);
	bool operator!=(const CFieldPath &);
	CFieldPath & operator=(const CFieldPath &);
	bool operator==(const CFieldPath &);
	CUtlString ToString();
	void FromString(const char *);
	int GetDepth();
	void Init();
	Path_t * Push(int);
	Path_t Pop();
	Path_t PopHead();
	void Truncate(int);
	void Set(int, int);
	const Path_t & operator[](int);
	const Path_t * GetElement(int);
	void operator+=(const CFieldPath &);
	const int ComparePaths(const CFieldPath &);
	const bool operator<(const CFieldPath &);
	bool Less(const CFieldPath &, const CFieldPath &);
	const int CompareUpToDepth(const CFieldPath &, int);
	void MakeSentinel();
	bool IsSentinel();
	void Clear();

private:

	void ToString(char *, size_t);
	bool IsUsingFixedPaths();
	Path_t * Path_AddToTail(const Path_t &);
	void Path_SetCount(int);
	void Path_Remove(int);
	int Path_Count();
	Path_t Path_PopLast();
	void Path_RemoveAll();
	const Path_t * GetPathData(int);
	Path_t * GetPathData(int);

	// sizeof = 24
};

// src/public/tier2/fieldpath.h:90
class CFieldPath {
	enum {
		DEFAULT_MAX_PATH_DEPTH = 0x6,
		FIELDPATH_SENTINEL_VALUE = 0x7fff,
	};

	enum ConstructSentinel_t {
		IS_SENTINEL = 0x1,
	};

	struct Path_t {
		int16 m_nValue;  // +0x0

		// sizeof = 2
	};

	union fieldpathpaths_t {
		const Path_t * m_pPaths;  // +0x0
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	int16 m_nCount;  // +0x10
	bool m_bUsingExternalPaths;  // +0x12
	CFieldPath();
	CFieldPath(const CFieldPath &);
	CFieldPath(const Path_t *, int);
	CFieldPath(bool, const Path_t *, int);
	CFieldPath(ConstructSentinel_t);
	CFieldPath(PackedFieldPath_t, const PackedFieldPath_t *, const int *);
	bool operator!=(const CFieldPath &);
	CFieldPath & operator=(const CFieldPath &);
	bool operator==(const CFieldPath &);
	CUtlString ToString();
	void FromString(const char *);
	int GetDepth();
	void Init();
	Path_t * Push(int);
	Path_t Pop();
	Path_t PopHead();
	void Truncate(int);
	void Set(int, int);
	const Path_t & operator[](int);
	const Path_t * GetElement(int);
	void operator+=(const CFieldPath &);
	const int ComparePaths(const CFieldPath &);
	const bool operator<(const CFieldPath &);
	bool Less(const CFieldPath &, const CFieldPath &);
	const int CompareUpToDepth(const CFieldPath &, int);
	void MakeSentinel();
	bool IsSentinel();
	void Clear();

private:

	void ToString(char *, size_t);
	bool IsUsingFixedPaths();
	Path_t * Path_AddToTail(const Path_t &);
	void Path_SetCount(int);
	void Path_Remove(int);
	int Path_Count();
	Path_t Path_PopLast();
	void Path_RemoveAll();
	const Path_t * GetPathData(int);
	Path_t * GetPathData(int);

	// sizeof = 24
};

// src/public/tier2/fieldpath.h:644
struct FieldOpPair_t {
	pfnFieldPathOpWrite m_Write;  // +0x0
	pfnFieldPathOpRead m_Read;  // +0x8

	// sizeof = 16
};

// src/public/tier2/fieldpath.h:650
class CFieldPathHuffmanEncoder {
	struct HuffCode {
		unsigned char m_data[4];  // +0x0

		HuffCode();
		HuffCode(const HuffCode &);
		HuffCode & operator=(const HuffCode &);
		CUtlString ToString();

		// sizeof = 40
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct composed_t {
		int8 lval;  // +0x0
		int8 rval;  // +0x1

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;
	static FieldOpPair_t s_FieldOps[40];
	class INode {
		int ()() * * _vptr.INode;  // +0x0
		const int f;  // +0x8
		const int slot;  // +0xc
		INode(const INode &);
		virtual ~INode();
		virtual bool IsLeafNode();

	protected:

		INode(int, int);

		// vtable[2] IsLeafNode
		// sizeof = 16
	};

protected:

	class LeafNode : public INode {
	public:

		const optype_t m_op;  // +0x10
		LeafNode(int, optype_t, int);
		virtual bool IsLeafNode();
		virtual ~LeafNode();

		// vtable[2] IsLeafNode
		// sizeof = 24
	};
	CFieldPathHuffmanEncoder();
	~CFieldPathHuffmanEncoder();
	int GetOverheadBitsForOpcode(optype_t);
	void Describe();
	void PrintTree();
	void BuildOpCodeCodeToHuffmanLookup();
	bool INodeLessFunc(INode * const &, INode * const &);
	void PrintTree_R(INode *, int);
	INode * BuildTree();
	void GenerateOpCodeToHuffmanMap(const INode *, const HuffCode &);
	/* tag__fprintf: const_type tag not supported! */;
	void BuildFixedTree();
	int8 BuildFixedTree_R(const INode *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 1664
};

// src/public/tier2/fieldpath.h:650
class CFieldPathHuffmanEncoder {
	struct HuffCode {
		unsigned char m_data[4];  // +0x0

		HuffCode();
		HuffCode(const HuffCode &);
		HuffCode & operator=(const HuffCode &);
		CUtlString ToString();

		// sizeof = 40
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct composed_t {
		int8 lval;  // +0x0
		int8 rval;  // +0x1

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;
	static FieldOpPair_t s_FieldOps[40];
	class INode {
		int ()() * * _vptr.INode;  // +0x0
		const int f;  // +0x8
		const int slot;  // +0xc
		INode(const INode &);
		virtual ~INode();
		virtual bool IsLeafNode();

	protected:

		INode(int, int);

		// vtable[2] IsLeafNode
		// sizeof = 16
	};

protected:

	class InternalNode : public INode {
	public:

		const INode * left;  // +0x10
		const INode * right;  // +0x18
		InternalNode(const InternalNode &);
		InternalNode(INode *, INode *, int);
		virtual ~InternalNode();
		virtual bool IsLeafNode();

		// vtable[2] IsLeafNode
		// sizeof = 32
	};

	class LeafNode : public INode {
	public:

		const optype_t m_op;  // +0x10
		LeafNode(LeafNode &);
		LeafNode(const LeafNode &);
		LeafNode(int, optype_t, int);
		virtual bool IsLeafNode();
		virtual ~LeafNode();

		// vtable[2] IsLeafNode
		// sizeof = 24
	};
	CFieldPathHuffmanEncoder();
	~CFieldPathHuffmanEncoder();
	int GetOverheadBitsForOpcode(optype_t);
	void Describe();
	void PrintTree();
	void BuildOpCodeCodeToHuffmanLookup();
	bool INodeLessFunc(INode * const &, INode * const &);
	void PrintTree_R(INode *, int);
	INode * BuildTree();
	void GenerateOpCodeToHuffmanMap(const INode *, const HuffCode &);
	/* tag__fprintf: const_type tag not supported! */;
	void BuildFixedTree();
	int8 BuildFixedTree_R(const INode *);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 1664
};

// src/public/tier2/fieldpath.h:920
class CDeltaFieldPathWriter {
	static IDeltaFieldPathTracer * s_pTracer;
	static bool s_bVerboseOpCodes;
protected:

	int m_nFieldCount;  // +0x38
	int m_nBitCount;  // +0x3c
	bool m_bVerbose;  // +0x40
	CDeltaFieldPathWriter(bf_write *, bool);
	~CDeltaFieldPathWriter();
	int WritePropPath(const CFieldPath &);
	bf_write * GetBitBuf();
	void SetLastField(const CFieldPath &);
	int Finish();
	void GetStats(int &, int &);
	void StartTracing(IDeltaFieldPathTracer *);
	void EndTracing();
	optype_t Characterize(const CFieldPath &, CFieldPath &);
	int GetOverheadBitsForOpcode(optype_t);

	// sizeof = 72
};

// src/public/tier2/fieldpath.h:1157
class CFieldPathReconstruct_t {
	int16 m_nStart;  // +0x0
	int16 m_nCount;  // +0x2
	CFieldPathReconstruct_t();
	CFieldPathReconstruct_t(int, int);
	bool operator!=(const CFieldPathReconstruct_t &);

	// sizeof = 4
};

// src/public/tier2/fieldpath.h:1178
class CFieldPathList {
private:

	CFieldPathList();
	~CFieldPathList();
	void ReserveCounts(int, int);
	void GetCounts(int &, int &);
	void ReserveForAddingPaths(int, int);
	void Reserve(const CFieldPathList &);
	void Copy(const CFieldPathList &);
	int AddToTail(const CFieldPath &);
	int Count();
	const CFieldPath Element(int);
	void Clear();
	void PurgeNonTemporary();
	void Sort();
	bool Compare(const CFieldPathList &);
	bool IsSorted(bool);
	int FindPathIndex(const CFieldPath &);
	int FindOrAddPath(const CFieldPath &);
	uint32 EstimateMemoryUsage();

	// sizeof = 32
};

// src/public/tier2/fieldpath.h:1294
class CTempFieldPathList {
	struct SListElement {
		SListElement();

		// sizeof = 48
	};

protected:

	static CTSSimpleList<CTempFieldPathList::SListElement> s_allLists;
	CTempFieldPathList();
	~CTempFieldPathList();
	CFieldPathList & Get();
	int Count();
	const CFieldPath Element(int);
	int FindPathIndex(const CFieldPath &);

	// sizeof = 8
};

// src/public/tier2/fieldpath.h:1356
class CTempPackedFieldPathVec {
	struct SListElement {
		PackedFieldPathVec_t pathVec;  // +0x10
		SListElement();

		// sizeof = 32
	};

protected:

	static CTSSimpleList<CTempPackedFieldPathVec::SListElement> s_allVectors;
	CTempPackedFieldPathVec();
	~CTempPackedFieldPathVec();
	PackedFieldPathVec_t & Get();
	int Count();
	PackedFieldPath_t Element(int);
	int Find(PackedFieldPath_t);

	// sizeof = 8
};

// src/public/tier2/fieldpath.h:1425
struct PackedFieldPathList_t {
	CInterlockedInt m_nRefs;  // +0x0
	uint32 m_nCount;  // +0x4
	PackedFieldPathList_t();
	void AddRef();
	void Release();
	bool operator==(const PackedFieldPathList_t &);
	const PackedFieldPath_t * GetFirstPathPtr();
	const PackedFieldPath_t * GetNextPathPtr(const PackedFieldPath_t *);
	const PackedFieldPath_t * GetPathPtrLimit();
	PackedFieldPath_t Element(int);
	int GetNumPaths(int);
	int EstimateMemoryUsage();
	PackedFieldPathList_t * Alloc(int);
	PackedFieldPathList_t * Pack(const PackedFieldPathVec_t *);
	int Unpack(PackedFieldPathVec_t *);

	// sizeof = 8
};
