// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlrbtree.h:47
class CDefLess<CAssetModifierContainer::CAssetModifierIndex> {
	bool operator()(const CAssetModifierIndex &, const CAssetModifierIndex &);
	bool operator!();

	// sizeof = 1
};

// src/public/tier1/utlrbtree.h:47
class CDefLess<int> {
	bool operator()(const int &, const int &);
	bool operator!();

	// sizeof = 1
};

// src/public/tier1/utlrbtree.h:47
class CDefLess<unsigned int> {
	bool operator()(const unsigned int &, const unsigned int &);
	bool operator!();

	// sizeof = 1
};

// src/public/tier1/utlrbtree.h:173
struct UtlRBTreeLinks_t<short unsigned int> {
	short unsigned int m_Left;  // +0x0
	short unsigned int m_Right;  // +0x2
	short unsigned int m_Parent;  // +0x4
	short unsigned int m_Tag;  // +0x6

	// sizeof = 8
};

// src/public/tier1/utlrbtree.h:173
struct UtlRBTreeLinks_t<int> {
	int m_Left;  // +0x0
	int m_Right;  // +0x4
	int m_Parent;  // +0x8
	int m_Tag;  // +0xc

	// sizeof = 16
};

// src/public/tier1/utlrbtree.h:173
struct UtlRBTreeLinks_t<unsigned int> {
	unsigned int m_Left;  // +0x0
	unsigned int m_Right;  // +0x4
	unsigned int m_Parent;  // +0x8
	unsigned int m_Tag;  // +0xc

	// sizeof = 16
};

// src/public/tier1/utlrbtree.h:182
struct UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int> : public UtlRBTreeLinks_t<short unsigned int> {
public:

	UtlRBTreeNode_t();

	// sizeof = 12
};

// src/public/tier1/utlrbtree.h:182
struct UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> : public UtlRBTreeLinks_t<int> {
public:

	UtlRBTreeNode_t(UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> *);

	// sizeof = 160
};

// src/public/tier1/utlrbtree.h:182
struct UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> : public UtlRBTreeLinks_t<int> {
public:

	UtlRBTreeNode_t(UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> *);

	// sizeof = 72
};

// src/public/tier1/utlrbtree.h:194
class CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> > {
	enum NodeColor_t {
		RED = 0,
		BLACK = 0x1,
	};
	typedef CLess LessFunc_t;

protected:

	LessFunc_t m_LessFunc;  // +0x0

	short unsigned int m_Root;  // +0x18
	short unsigned int m_NumElements;  // +0x1a
	short unsigned int m_FirstFree;  // +0x1c
	typedef UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int> Node_t;

	Node_t * m_pElements;  // +0x20
	typedef UtlRBTreeLinks_t<short unsigned int> Links_t;
	CUtlRBTree(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, int, int, const LessFunc_t &);
	/* tag__fprintf: const_type tag not supported! */;
	CUtlRBTree(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const LessFunc_t &);
	~CUtlRBTree(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, int);
	void EnsureCapacity(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, int);
	void CopyFrom(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	CStringPoolIndex & Element(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	const CStringPoolIndex & Element(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	CStringPoolIndex & operator[](CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	const CStringPoolIndex & operator[](const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	short unsigned int Root(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	unsigned int Count(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int MaxElement(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int Parent(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	short unsigned int LeftChild(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	short unsigned int RightChild(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	bool IsLeftChild(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	bool IsRightChild(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	bool IsRoot(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	bool IsLeaf(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	bool IsValidIndex(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	bool IsValid(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int InvalidIndex();
	int Depth(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	int Depth(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	void SetLessFunc(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const LessFunc_t &);
	short unsigned int NewNode(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CStringPoolIndex *);
	short unsigned int Insert(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CStringPoolIndex &, ERBTreeInsertBehavior);
	void Insert(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CStringPoolIndex *, int, ERBTreeInsertBehavior);
	short unsigned int InsertIfNotFound(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CStringPoolIndex &);
	short unsigned int Find(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, const CStringPoolIndex &);
	short unsigned int Find(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, const CStringPoolIndex &, FindCondition_t);
	short unsigned int FindFirst(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, const CStringPoolIndex &);
	short unsigned int FindClosest(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, const CStringPoolIndex &, CompareOperands_t);
	void RemoveAt(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	bool Remove(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CStringPoolIndex &);
	void RemoveAll(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl);
	void Purge(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl);
	void PurgeAndDeleteElements(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl);
	bool HasElement(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, const CStringPoolIndex &);
	void FreeNode(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	short unsigned int FirstInorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int NextInorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	short unsigned int PrevInorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	short unsigned int LastInorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int FirstPreorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int NextPreorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	short unsigned int PrevPreorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	short unsigned int LastPreorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int FirstPostorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	short unsigned int NextPostorder(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	void Reinsert(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	void Swap(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl);
	size_t AllocSize(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);

private:

	CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl operator=(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);

protected:

	void SetParent(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int, short unsigned int);
	void SetLeftChild(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int, short unsigned int);
	void SetRightChild(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int, short unsigned int);
	void LinkToParent(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int, short unsigned int, bool);
	const Links_t & Links(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	/* tag__fprintf: const_type tag not supported! */;
	Links_t & Links(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	bool IsRed(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	bool IsBlack(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	NodeColor_t Color(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_, short unsigned int);
	void SetColor(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int, NodeColor_t);
	void RotateLeft(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	void RotateRight(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	void InsertRebalance(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	void RemoveRebalance(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	short unsigned int InsertAt(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int, bool, const CStringPoolIndex *);
	CUtlRBTree(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	void FindInsertionPosition(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, const CStringPoolIndex &, bool, short unsigned int &, bool &, bool &);
	void Unlink(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	void Link(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl, short unsigned int);
	const CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> & Elements(const CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_);
	void ResetDbgInfo(CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtl);

	// sizeof = 40
};

// src/public/tier1/utlrbtree.h:194
class CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> > {
	enum NodeColor_t {
		RED = 0,
		BLACK = 0x1,
	};
	typedef CKeyLess LessFunc_t;

protected:

	LessFunc_t m_LessFunc;  // +0x0
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> m_Elements;  // +0x8
	int m_Root;  // +0x18
	int m_NumElements;  // +0x1c
	int m_FirstFree;  // +0x20
	typedef UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> Node_t;

	Node_t * m_pElements;  // +0x28
	typedef UtlRBTreeLinks_t<int> Links_t;
	CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int, int, const LessFunc_t &);
	/* tag__fprintf: const_type tag not supported! */;
	CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const LessFunc_t &);
	~CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	void EnsureCapacity(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	void CopyFrom(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	Node_t & Element(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	const Node_t & Element(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	Node_t & operator[](CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	const Node_t & operator[](const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int Root(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	unsigned int Count(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int MaxElement(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int Parent(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int LeftChild(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int RightChild(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	bool IsLeftChild(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	bool IsRightChild(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	bool IsRoot(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	bool IsLeaf(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	bool IsValidIndex(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	bool IsValid(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int InvalidIndex();
	int Depth(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int Depth(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	void SetLessFunc(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const LessFunc_t &);
	int NewNode(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const Node_t *);
	int Insert(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const Node_t &, ERBTreeInsertBehavior);
	void Insert(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const Node_t *, int, ERBTreeInsertBehavior);
	int InsertIfNotFound(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const Node_t &);
	int Find(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, const Node_t &);
	int Find(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, const Node_t &, FindCondition_t);
	int FindFirst(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, const Node_t &);
	int FindClosest(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, const Node_t &, CompareOperands_t);
	void RemoveAt(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	bool Remove(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const Node_t &);
	void RemoveAll(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap);
	void Purge(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap);
	void PurgeAndDeleteElements(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap);
	bool HasElement(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, const Node_t &);
	void FreeNode(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	int FirstInorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int NextInorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int PrevInorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int LastInorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int FirstPreorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int NextPreorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int PrevPreorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	int LastPreorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int FirstPostorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	int NextPostorder(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	void Reinsert(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	void Swap(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap);
	size_t AllocSize(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);

private:

	CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap operator=(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);

protected:

	void SetParent(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int, int);
	void SetLeftChild(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int, int);
	void SetRightChild(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int, int);
	void LinkToParent(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int, int, bool);
	const Links_t & Links(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	/* tag__fprintf: const_type tag not supported! */;
	Links_t & Links(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	bool IsRed(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	bool IsBlack(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	NodeColor_t Color(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C, int);
	void SetColor(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int, NodeColor_t);
	void RotateLeft(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	void RotateRight(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	void InsertRebalance(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	void RemoveRebalance(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	int InsertAt(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int, bool, const Node_t *);
	CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	void FindInsertionPosition(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, const Node_t &, bool, int &, bool &, bool &);
	void Unlink(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	void Link(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap, int);
	const CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> Elements(const CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C);
	void ResetDbgInfo(CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap);

	// sizeof = 48
};

// src/public/tier1/utlrbtree.h:194
class CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> > {
	enum NodeColor_t {
		RED = 0,
		BLACK = 0x1,
	};
	typedef CKeyLess LessFunc_t;

protected:

	LessFunc_t m_LessFunc;  // +0x0
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> m_Elements;  // +0x8
	int m_Root;  // +0x18
	int m_NumElements;  // +0x1c
	int m_FirstFree;  // +0x20
	typedef UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> Node_t;

	Node_t * m_pElements;  // +0x28
	typedef UtlRBTreeLinks_t<int> Links_t;
	CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int, int, const LessFunc_t &);
	/* tag__fprintf: const_type tag not supported! */;
	CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const LessFunc_t &);
	~CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	void EnsureCapacity(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	void CopyFrom(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	Node_t & Element(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	const Node_t & Element(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	Node_t & operator[](CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	const Node_t & operator[](const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int Root(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	unsigned int Count(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int MaxElement(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int Parent(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int LeftChild(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int RightChild(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	bool IsLeftChild(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	bool IsRightChild(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	bool IsRoot(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	bool IsLeaf(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	bool IsValidIndex(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	bool IsValid(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int InvalidIndex();
	int Depth(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int Depth(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	void SetLessFunc(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const LessFunc_t &);
	int NewNode(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const Node_t *);
	int Insert(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const Node_t &, ERBTreeInsertBehavior);
	void Insert(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const Node_t *, int, ERBTreeInsertBehavior);
	int InsertIfNotFound(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const Node_t &);
	int Find(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, const Node_t &);
	int Find(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, const Node_t &, FindCondition_t);
	int FindFirst(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, const Node_t &);
	int FindClosest(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, const Node_t &, CompareOperands_t);
	void RemoveAt(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	bool Remove(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const Node_t &);
	void RemoveAll(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<);
	void Purge(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<);
	void PurgeAndDeleteElements(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<);
	bool HasElement(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, const Node_t &);
	void FreeNode(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	int FirstInorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int NextInorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int PrevInorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int LastInorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int FirstPreorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int NextPreorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int PrevPreorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	int LastPreorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int FirstPostorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	int NextPostorder(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	void Reinsert(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	void Swap(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<);
	size_t AllocSize(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);

private:

	CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap< operator=(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);

protected:

	void SetParent(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int, int);
	void SetLeftChild(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int, int);
	void SetRightChild(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int, int);
	void LinkToParent(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int, int, bool);
	const Links_t & Links(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	/* tag__fprintf: const_type tag not supported! */;
	Links_t & Links(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	bool IsRed(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	bool IsBlack(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	NodeColor_t Color(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU, int);
	void SetColor(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int, NodeColor_t);
	void RotateLeft(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	void RotateRight(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	void InsertRebalance(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	void RemoveRebalance(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	int InsertAt(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int, bool, const Node_t *);
	CUtlRBTree(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	void FindInsertionPosition(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, const Node_t &, bool, int &, bool &, bool &);
	void Unlink(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	void Link(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<, int);
	const CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>: Elements(const CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CU);
	void ResetDbgInfo(CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<);

	// sizeof = 48
};

// CDefLess: 3 more instantiations (full list in INDEX.tsv)
//   CDefLess<item_definition_index_t>
//   CDefLess<short unsigned int>
//   CDefLess<float>

// UtlRBTreeLinks_t: 2 more instantiations (full list in INDEX.tsv)
//   UtlRBTreeLinks_t<short int>
//   UtlRBTreeLinks_t<long long int>

// UtlRBTreeNode_t: 150 more instantiations (full list in INDEX.tsv)
//   UtlRBTreeNode_t<unsigned int, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CEconItemRarityDefinition, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, CEconItemQualityDefinition, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, autograph_t, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, CEconItemAttributeDefinition, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, AssetModifier_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, ItemPartner_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::No
//   UtlRBTreeNode_t<CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t
//   UtlRBTreeNode_t<CUtlMap<unsigned int, AchievementAward_t*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, attachedparticlesystem_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, const random_attrib_t*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol, KeyValues*, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, CEconSoundMaterialDefinition, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, kill_eater_score_type_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<item_definition_index_t, item_definition_index_t, short unsigned int>::Node_t, short unsigned in
//   UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const*
//   UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, 
//   UtlRBTreeNode_t<CUtlMap<item_definition_index_t, KeyValues*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::No
//   UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<FlattenedSerializerHandle_t__*, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<ImportedDesc_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool
//   UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<IPhysAggregateInstance*, int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Nod
//   UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>
//   UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t
//   UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::
//   UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&
//   UtlRBTreeNode_t<CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::Node
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned 
//   UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, 
//   UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CBaseEntity*, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_
//   UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, 
//   UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, i
//   UtlRBTreeNode_t<VisibilityCacheEntry_t, short unsigned int>
//   UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlString, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* cons
//   UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned
//   UtlRBTreeNode_t<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>
//   UtlRBTreeNode_t<TeamSharePVS_t, short unsigned int>
//   UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const
//   UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>
//   UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::No
//   UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, event_storage_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* cons
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<KillCountAdjustmentKey_t, KillCountAdjustmentValue_t>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, EEvent>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, 
//   UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CSeriesScores*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CTimeline*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>
//   UtlRBTreeNode_t<void*, int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::No
//   UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::No
//   UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<char const*, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<short unsigned int, const CEconItemDefinition*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t,
//   UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<const CChoreoEvent*, short unsigned int>
//   UtlRBTreeNode_t<CChoreoScene::ActiveList, int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::No
//   UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::
//   UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node
//   UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, sho
//   UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* c
//   UtlRBTreeNode_t<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne
//   UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<GCSDK::SOID_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>
//   UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>
//   UtlRBTreeNode_t<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int>

// CUtlRBTree: 157 more instantiations (full list in INDEX.tsv)
//   CUtlRBTree<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, 
//   CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNod
//   CUtlRBTree<CUtlMap<int, CEconItemRarityDefinition, int>::Node_t, int, CUtlMap<int, CEconItemRarityDefinition, int>::CKey
//   CUtlRBTree<CUtlMap<int, CEconItemQualityDefinition, int>::Node_t, int, CUtlMap<int, CEconItemQualityDefinition, int>::CK
//   CUtlRBTree<CUtlMap<int, autograph_t, int>::Node_t, int, CUtlMap<int, autograph_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNo
//   CUtlRBTree<CUtlMap<int, CEconItemAttributeDefinition, int>::Node_t, int, CUtlMap<int, CEconItemAttributeDefinition, int>
//   CUtlRBTree<CUtlMap<int, AssetModifier_t>::Node_t, short unsigned int, CUtlMap<int, AssetModifier_t>::CKeyLess, CUtlMemor
//   CUtlRBTree<CUtlMap<unsigned int, ItemPartner_t>::Node_t, short unsigned int, CUtlMap<unsigned int, ItemPartner_t>::CKeyL
//   CUtlRBTree<CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::Node_t, int, CUtlMap<CEconSchemaSymbol, CEconItemSe
//   CUtlRBTree<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t,
//   CUtlRBTree<CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int
//   CUtlRBTree<CUtlMap<unsigned int, AchievementAward_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, AchievementAwar
//   CUtlRBTree<CUtlMap<int, attachedparticlesystem_t>::Node_t, short unsigned int, CUtlMap<int, attachedparticlesystem_t>::C
//   CUtlRBTree<CUtlMap<int, const random_attrib_t*>::Node_t, short unsigned int, CUtlMap<int, const random_attrib_t*>::CKeyL
//   CUtlRBTree<CUtlMap<CEconSchemaSymbol, KeyValues*, int>::Node_t, int, CUtlMap<CEconSchemaSymbol, KeyValues*, int>::CKeyLe
//   CUtlRBTree<CUtlMap<int, CEconSoundMaterialDefinition, int>::Node_t, int, CUtlMap<int, CEconSoundMaterialDefinition, int>
//   CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char c
//   CUtlRBTree<CUtlMap<unsigned int, kill_eater_score_type_t>::Node_t, short unsigned int, CUtlMap<unsigned int, kill_eater_
//   CUtlRBTree<CUtlMap<item_definition_index_t, item_definition_index_t, short unsigned int>::Node_t, short unsigned int, CU
//   CUtlRBTree<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* cons
//   CUtlRBTree<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, 
//   CUtlRBTree<CUtlMap<item_definition_index_t, KeyValues*>::Node_t, short unsigned int, CUtlMap<item_definition_index_t, Ke
//   CUtlRBTree<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t,
//   CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMult
//   CUtlRBTree<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>:
//   CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMa
//   CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<He
//   CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLes
//   CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlM
//   CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::C
//   CUtlRBTree<FlattenedSerializerHandle_t__*, short unsigned int, bool (*)(FlattenedSerializerHandle_t__* const&, Flattened
//   CUtlRBTree<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int, CUtlMap
//   CUtlRBTree<ImportedDesc_t, short unsigned int, bool (*)(const ImportedDesc_t&, const ImportedDesc_t&), CUtlMemory<UtlRBT
//   CUtlRBTree<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int, CUtlMap<unsigned int, CTonemapContro
//   CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUt
//   CUtlRBTree<CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(
//   CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlS
//   CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned
//   CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringT
//   CUtlRBTree<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int, CUtlM
//   CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlM
//   CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::C
//   CUtlRBTree<CUtlMap<IPhysAggregateInstance*, int>::Node_t, short unsigned int, CUtlMap<IPhysAggregateInstance*, int>::CKe
//   CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, 
//   CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<ch
//   CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<in
//   CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CRespo
//   CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, sho
//   CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_
//   CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::N
//   CUtlRBTree<CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, i
//   CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::
//   CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char 
//   CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMe
//   CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMa
//   CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess,
//   CUtlRBTree<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char 
//   CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemory<UtlRBTreeNod
//   CUtlRBTree<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, in
//   CUtlRBTree<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtl
//   CUtlRBTree<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlM
//   CUtlRBTree<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, 
//   CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, C
//   CUtlRBTree<VisibilityCacheEntry_t, short unsigned int, CVisibilityCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<VisibilityC
//   CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t, short unsigned int, CCombatCharVisCache::CVisCacheEntryLess, CUtlMemory
//   CUtlRBTree<CUtlString, short unsigned int, bool (*)(const CUtlString&, const CUtlString&), CUtlMemory<UtlRBTreeNode_t<CU
//   CUtlRBTree<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char
//   CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>:
//   CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNod
//   CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemo
//   CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int,
//   CUtlRBTree<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int, CUtlMap<unsigned int, CEconSchemaSymbol
//   CUtlRBTree<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Nod
//   CUtlRBTree<TeamSharePVS_t, short unsigned int, bool (*)(const TeamSharePVS_t&, const TeamSharePVS_t&), CUtlMemory<UtlRBT
//   CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBT
//   CUtlRBTree<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int, CUtlMap<CEntityIndex, float>::CKeyLess, CUtlMemory<
//   CUtlRBTree<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* con
//   CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<
//   CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<C
//   CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&),
//   CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemoryFixedGrowable
//   CUtlRBTree<CSceneEntity::SpeakEventSound_t, short unsigned int, bool (*)(const CSceneEntity::SpeakEventSound_t&, const C
//   CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t,
//   CUtlRBTree<AsyncCaption_t::BlockInfo_t, short unsigned int, bool (*)(const AsyncCaption_t::BlockInfo_t&, const AsyncCapt
//   CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<
//   CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int
//   CUtlRBTree<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, AsyncCaption_t*>::CKeyL
//   CUtlRBTree<CUtlMap<CUtlString, AsyncCaption_t>::Node_t, short unsigned int, CUtlMap<CUtlString, AsyncCaption_t>::CKeyLes
//   CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>,
//   CUtlRBTree<CUtlMap<int, event_storage_t>::Node_t, short unsigned int, CUtlMap<int, event_storage_t>::CKeyLess, CUtlMemor
//   CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CU
//   CUtlRBTree<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<
//   CUtlRBTree<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int, CUtlMap<int, float, int, CDefLess<int> >::CKeyLess, CU
//   CUtlRBTree<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge
//   CUtlRBTree<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSym
//   CUtlRBTree<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int, CUtlMap<unsigned int, KeyValues*>::CKeyLess, C
//   CUtlRBTree<CUtlMap<KillCountAdjustmentKey_t, KillCountAdjustmentValue_t>::Node_t, short unsigned int, CUtlMap<KillCountA
//   CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbo
//   CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge
//   CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemor
//   CUtlRBTree<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMa
//   CUtlRBTree<CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::Node_t, int, CUtlMap<item_de
//   CUtlRBTree<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int, CUtlM
//   CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsign
//   CUtlRBTree<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int, CUtlMap<char const
//   CUtlRBTree<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<
//   CUtlRBTree<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int, CUtlMap<EEvent, CDOTAEventDefinition*>::C
//   CUtlRBTree<CUtlMap<unsigned int, EEvent>::Node_t, short unsigned int, CUtlMap<unsigned int, EEvent>::CKeyLess, CUtlMemor
//   CUtlRBTree<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int, CUtlMap<DOTAAbilityData_t*, bool>::CKeyLess, C
//   CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBT
//   CUtlRBTree<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, 
//   CUtlRBTree<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlM
//   CUtlRBTree<CUtlMap<unsigned int, CSeriesScores*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSeriesScores*>::CKe
//   CUtlRBTree<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CTimeline*>::CKeyL
//   CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaSt
//   CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManag
//   CUtlRBTree<CUtlMap<int, CTimeline*>::Node_t, short unsigned int, CUtlMap<int, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTre
//   CUtlRBTree<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int, CUtlMap<int, CDOTA_World_Map_Location*>:
//   CUtlRBTree<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int, CUtlMap<float, int, int, CDefLess<float> >::CKeyLess
//   CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >
//   CUtlRBTree<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t,
//   CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t,
//   CUtlRBTree<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CHeroLoadout>::CKeyLess, CUtlMemory<UtlR
//   CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMem
//   CUtlRBTree<CUtlMap<int, CHeroBaseItems>::Node_t, short unsigned int, CUtlMap<int, CHeroBaseItems>::CKeyLess, CUtlMemory<
//   CUtlRBTree<CUtlMap<int, CDOTAHeroSlots>::Node_t, short unsigned int, CUtlMap<int, CDOTAHeroSlots>::CKeyLess, CUtlMemory<
//   CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t
//   CUtlRBTree<CUtlMap<short unsigned int, const CEconItemDefinition*>::Node_t, short unsigned int, CUtlMap<short unsigned i
//   CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned i
//   CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, shor
//   CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTree
//   CUtlRBTree<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap
//   CUtlRBTree<const CChoreoEvent*, short unsigned int, bool (*)(const CChoreoEvent* const&, const CChoreoEvent* const&), CU
//   CUtlRBTree<CChoreoScene::ActiveList, int, bool (*)(const CChoreoScene::ActiveList&, const CChoreoScene::ActiveList&), CU
//   CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLes
//   CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityCompon
//   CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CU
//   CUtlRBTree<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int, CUtlMap<CUtlStringToken, CUtlString, int>::CKeyLess, 
//   CUtlRBTree<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int, CUtlMap<unsigned int, char const*>::CKeyLess,
//   CUtlRBTree<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t,
//   CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int, CUtlMap<unsigned int, voi
//   CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int, CUtlMap<unsigned int
//   CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_
//   CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, s
//   CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short in
//   CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&
//   CUtlRBTree<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int, CUtlMap<char cons
//   CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemory<Ut
//   CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int
//   CUtlRBTree<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<
//   CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t
//   CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GC
//   CUtlRBTree<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, long long un
//   CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_
//   CUtlRBTree<GCSDK::SOID_t, short unsigned int, bool (*)(const GCSDK::SOID_t&, const GCSDK::SOID_t&), CUtlMemory<UtlRBTree
//   CUtlRBTree<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int, CUtlMap<int, GCSDK::CSOIDNameInfo>::CKeyLess,
//   CUtlRBTree<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int, CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::CKe
