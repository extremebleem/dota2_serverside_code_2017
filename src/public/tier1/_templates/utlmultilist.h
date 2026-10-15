// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlmultilist.h:27
class CUtlMultiList<watcher_t, short unsigned int> {
	struct ListElem_t {
		short unsigned int m_Previous;  // +0x10
		short unsigned int m_Next;  // +0x12
		ListElem_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct List_t {
		short unsigned int m_Head;  // +0x0
		short unsigned int m_Tail;  // +0x2
		short unsigned int m_Count;  // +0x4

		// sizeof = 6
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlMemory<CUtlMultiList<watcher_t, short unsigned int>::ListElem_t, int> M;

protected:

	M m_Memory;  // +0x0

	short unsigned int * m_pElementList;  // +0x38
	short unsigned int m_FirstFree;  // +0x40
	short unsigned int m_TotalElements;  // +0x42
	int m_MaxElementIndex;  // +0x44
	typedef short unsigned int ListHandle_t;
	CUtlMultiList(int, int);
	CUtlMultiList(void *, int);
	~CUtlMultiList();
	watcher_t & Element(short unsigned int);
	const watcher_t & Element(short unsigned int);
	watcher_t & operator[](short unsigned int);
	const watcher_t & operator[](short unsigned int);
	void EnsureCapacity(int);
	void Purge();
	ListHandle_t CreateList();
	void DestroyList(ListHandle_t);
	bool IsValidList(ListHandle_t);
	short unsigned int InsertBefore(ListHandle_t, short unsigned int);
	short unsigned int InsertAfter(ListHandle_t, short unsigned int);
	short unsigned int AddToHead(ListHandle_t);
	short unsigned int AddToTail(ListHandle_t);
	short unsigned int InsertBefore(ListHandle_t, short unsigned int, const watcher_t &);
	short unsigned int InsertAfter(ListHandle_t, short unsigned int, const watcher_t &);
	short unsigned int AddToHead(ListHandle_t, const watcher_t &);
	short unsigned int AddToTail(ListHandle_t, const watcher_t &);
	void Remove(ListHandle_t, short unsigned int);
	void RemoveAll(ListHandle_t);
	void RemoveAll();
	short unsigned int Alloc();
	void Free(short unsigned int);
	void LinkBefore(ListHandle_t, short unsigned int, short unsigned int);
	void LinkAfter(ListHandle_t, short unsigned int, short unsigned int);
	void Unlink(ListHandle_t, short unsigned int);
	void LinkToHead(ListHandle_t, short unsigned int);
	void LinkToTail(ListHandle_t, short unsigned int);
	short unsigned int InvalidIndex();
	bool IndexInRange(int);
	size_t ElementSize();
	int Count(ListHandle_t);
	int TotalCount();
	short unsigned int MaxElementIndex();
	short unsigned int Head(ListHandle_t);
	short unsigned int Tail(ListHandle_t);
	short unsigned int Previous(short unsigned int);
	short unsigned int Next(short unsigned int);
	bool IsValidIndex(short unsigned int);
	bool IsInList(short unsigned int);
	void ConstructList();
	ListElem_t & InternalElement(short unsigned int);
	const ListElem_t & InternalElement(short unsigned int);
	bool IsElementInList(ListHandle_t, short unsigned int);
	CUtlMultiList(const CUtlMultiList<watcher_t, short unsigned int> &);
	void ResetDbgInfo();

	// sizeof = 80
};
