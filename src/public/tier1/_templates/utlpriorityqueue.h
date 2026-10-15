// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlpriorityqueue.h:15
class CDefUtlPriorityQueueLessFunc<CNavOpenListElement> {
	bool operator()(const CNavOpenListElement &, const CNavOpenListElement &, bool (*)(const CNavOpenListElement &, const CNavOpenListElement &));

	// sizeof = 1
};

// src/public/tier1/utlpriorityqueue.h:15
class CDefUtlPriorityQueueLessFunc<CPhysSaveRestoreBlockHandler::QueuedItem_t> {
	bool operator()(const QueuedItem_t &, const QueuedItem_t &, bool (*)(const QueuedItem_t &, const QueuedItem_t &));

	// sizeof = 1
};

// src/public/tier1/utlpriorityqueue.h:15
class CDefUtlPriorityQueueLessFunc<SoundCommand_t*> {
	bool operator()(SoundCommand_t * const &, SoundCommand_t * const &, bool (*)(SoundCommand_t * const &, SoundCommand_t * const &));

	// sizeof = 1
};

// src/public/tier1/utlpriorityqueue.h:25
class CDefUtlPriorityQueueSetIndexFunc<CPhysSaveRestoreBlockHandler::QueuedItem_t> {
	void SetIndex(QueuedItem_t &, int);

	// sizeof = 1
};

// src/public/tier1/utlpriorityqueue.h:25
class CDefUtlPriorityQueueSetIndexFunc<SoundCommand_t*> {
	void SetIndex(SoundCommand_t * &, int);

	// sizeof = 1
};

// src/public/tier1/utlpriorityqueue.h:25
class CDefUtlPriorityQueueSetIndexFunc<CEventRegister*> {
	void SetIndex(CEventRegister * &, int);

	// sizeof = 1
};

// src/public/tier1/utlpriorityqueue.h:36
class CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefUtlPriorityQueueSetIndexFunc<CEventRegister*> > {
protected:

	typedef bool (*LessFunc_t)(CEventRegister * const &, CEventRegister * const &);

	LessFunc_t m_LessFunc;  // +0x18
	CUtlPriorityQueue(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int, int, LessFunc_t);
	CUtlPriorityQueue(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, CEventRegister * *, int, LessFunc_t);
	CEventRegister * const & ElementAtHead(const CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>,);
	bool IsValidIndex(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	void RemoveAtHead(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	void RemoveAt(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	void RevaluateElement(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	void Insert(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, CEventRegister * const &);
	void SetLessFunc(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, LessFunc_t);
	int Count(const CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>,);
	void RemoveAll(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	void Purge(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	CEventRegister * const & Element(const CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>,, int);
	CEventRegister * & Element(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	bool IsHeapified(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	void Swap(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int, int);
	int PercolateDown(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	int PercolateUp(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);

	// sizeof = 32
};

// src/public/tier1/utlpriorityqueue.h:36
class CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t> {
protected:

	typedef bool (*LessFunc_t)(const CNavOpenListElement &, const CNavOpenListElement &);

	LessFunc_t m_LessFunc;  // +0x18
	CUtlPriorityQueue(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int, int, LessFunc_t);
	CUtlPriorityQueue(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, CNavOpenListElement *, int, LessFunc_t);
	const CNavOpenListElement & ElementAtHead(const CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListEl);
	bool IsValidIndex(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int);
	void RemoveAtHead(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,);
	void RemoveAt(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int);
	void RevaluateElement(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int);
	void Insert(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, const CNavOpenListElement &);
	void SetLessFunc(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, LessFunc_t);
	int Count(const CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListEl);
	void RemoveAll(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,);
	void Purge(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,);
	const CNavOpenListElement & Element(const CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListEl, int);
	CNavOpenListElement & Element(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int);
	bool IsHeapified(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,);
	void Swap(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int, int);
	int PercolateDown(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int);
	int PercolateUp(CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement,, int);

	// sizeof = 32
};

// src/public/tier1/utlpriorityqueue.h:36
class CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefUtlPriorityQueueSetIndexFunc<CEventRegister*> > {
protected:

	typedef bool (*LessFunc_t)(CEventRegister * const &, CEventRegister * const &);

	LessFunc_t m_LessFunc;  // +0x18
	CUtlPriorityQueue(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int, int, LessFunc_t);
	CUtlPriorityQueue(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, CEventRegister * *, int, LessFunc_t);
	CEventRegister * const & ElementAtHead(const CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>,);
	bool IsValidIndex(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	void RemoveAtHead(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	void RemoveAt(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	void RevaluateElement(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	void Insert(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, CEventRegister * const &);
	void SetLessFunc(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, LessFunc_t);
	int Count(const CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>,);
	void RemoveAll(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	void Purge(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	CEventRegister * const & Element(const CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>,, int);
	CEventRegister * & Element(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	bool IsHeapified(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU);
	void Swap(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int, int);
	int PercolateDown(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	int PercolateUp(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);
	~CUtlPriorityQueue(CUtlPriorityQueue<CEventRegister*, CDefUtlPriorityQueueLessFunc<CEventRegister*>, CUtlMemory<CEventRegister*, int>, CDefU, int);

	// sizeof = 32
};

// CDefUtlPriorityQueueLessFunc: 4 more instantiations (full list in INDEX.tsv)
//   CDefUtlPriorityQueueLessFunc<CEventRegister*>
//   CDefUtlPriorityQueueLessFunc<CShortPathProbe*>
//   CDefUtlPriorityQueueLessFunc<CFieldPathHuffmanEncoder::INode*>
//   CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>

// CDefUtlPriorityQueueSetIndexFunc: 4 more instantiations (full list in INDEX.tsv)
//   CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*>
//   CDefUtlPriorityQueueSetIndexFunc<CFieldPathHuffmanEncoder::INode*>
//   CDefUtlPriorityQueueSetIndexFunc<CMeshEdgeSplitter::HalfEdgeWithLength_t>
//   CDefUtlPriorityQueueSetIndexFunc<GCSDK::CJobMgr::JobSleeping_t>

// CUtlPriorityQueue: 8 more instantiations (full list in INDEX.tsv)
//   CUtlPriorityQueue<CPhysSaveRestoreBlockHandler::QueuedItem_t, CDefUtlPriorityQueueLessFunc<CPhysSaveRestoreBlockHandler:
//   CUtlPriorityQueue<SoundCommand_t*, CDefUtlPriorityQueueLessFunc<SoundCommand_t*>, CUtlMemory<SoundCommand_t*, int>, CDef
//   CUtlPriorityQueue<GCSDK::CJobMgr::JobSleeping_t, CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>, CUtlMemory
//   CUtlPriorityQueue<CGridNavOpenList::GridNavHeapEntry_t, CGridNavOpenList::CGridNavHeapLessFunc, CUtlMemoryFixedGrowable<
//   CUtlPriorityQueue<CShortPathProbe*, CDefUtlPriorityQueueLessFunc<CShortPathProbe*>, CUtlMemory<CShortPathProbe*, int>, C
//   CUtlPriorityQueue<CFieldPathHuffmanEncoder::INode*, CDefUtlPriorityQueueLessFunc<CFieldPathHuffmanEncoder::INode*>, CUtl
//   CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitte
//   CUtlPriorityQueue<GCSDK::CJobMgr::JobSleeping_t, CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>, CUtlMemory
