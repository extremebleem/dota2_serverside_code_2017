// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utllinkedlist.h:43
struct UtlLinkedListElem_t<IPrerequisite*, short unsigned int> {
	short unsigned int m_Previous;  // +0x8
	short unsigned int m_Next;  // +0xa
private:

	UtlLinkedListElem_t(const UtlLinkedListElem_t<IPrerequisite*, short unsigned int> &);

	// sizeof = 16
};

// src/public/tier1/utllinkedlist.h:43
struct UtlLinkedListElem_t<CRenderComponent*, long long int> {
	long long int m_Previous;  // +0x8
	long long int m_Next;  // +0x10
private:

	UtlLinkedListElem_t(const UtlLinkedListElem_t<CRenderComponent*, long long int> &);

	// sizeof = 24
};

// src/public/tier1/utllinkedlist.h:43
struct UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> {
	long long int m_Previous;  // +0x58
	long long int m_Next;  // +0x60
private:

	UtlLinkedListElem_t(UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> *, const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> );

	// sizeof = 104
};

// src/public/tier1/utllinkedlist.h:63
class CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > {
	enum {
		IsUtlLinkedList = 0x1,
	};

protected:

	short unsigned int m_Head;  // +0x10
	short unsigned int m_Tail;  // +0x12
	short unsigned int m_FirstFree;  // +0x14
	short unsigned int m_ElementCount;  // +0x16
	short unsigned int m_NumAlloced;  // +0x18

	typedef UtlLinkedListElem_t<IPrerequisite*, short unsigned int> ListElem_t;

	ListElem_t * m_pElements;  // +0x20
	typedef IPrerequisite * ElemType_t;
	typedef short unsigned int IndexType_t;
	typedef _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > > const_iterator;

	class _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > > {
	protected:

		const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere m_list;  // +0x0
		typedef IndexType_t IndexType_t;

		IndexType_t m_index;  // +0x8
		typedef ElemType_t ElemType_t;
		_CUtlLinkedList_constiterator_t(_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<);
		_CUtlLinkedList_constiterator_t(_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<, const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, IndexType_t);
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory< operator++(_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<);
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory< operator++(_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<, int);
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory< operator--(_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<);
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory< operator--(_CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<, int);
		bool operator==(const _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlM, const _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlM);
		bool operator!=(const _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlM, const _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlM);
		const ElemType_t & operator*(const _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlM);
		/* tag__fprintf: const_type tag not supported! */;
		const ElemType_t * operator->(const _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlM);

		// sizeof = 16
	};
	typedef _CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > > iterator;

	class _CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > > : public _CUtlLinkedList_constiterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > > {
	public:

		typedef ElemType_t ElemType_t;
		typedef IndexType_t IndexType_t;
		_CUtlLinkedList_iterator_t(_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi);
		_CUtlLinkedList_iterator_t(_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi, const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, IndexType_t);
		_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi operator++(_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi);
		_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi operator++(_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi, int);
		_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi operator--(_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi);
		_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi operator--(_CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLi, int);
		ElemType_t & operator*(const _CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory);
		ElemType_t * operator->(const _CUtlLinkedList_iterator_t<CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory);

		// sizeof = 16
	};
	CUtlLinkedList(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, int, int);
	~CUtlLinkedList(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, int);
	IPrerequisite * & Element(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	IPrerequisite * const & Element(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, short unsigned int);
	IPrerequisite * & operator[](CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	IPrerequisite * const & operator[](const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, short unsigned int);
	void EnsureCapacity(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, int);
	void SetGrowSize(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, int);
	void Purge(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	void PurgeAndDeleteElements(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	short unsigned int InsertBefore(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	short unsigned int InsertAfter(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	short unsigned int AddToHead(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	short unsigned int AddToTail(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	short unsigned int InsertBefore(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int, IPrerequisite * const &);
	short unsigned int InsertAfter(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int, IPrerequisite * const &);
	short unsigned int AddToHead(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, IPrerequisite * const &);
	short unsigned int AddToTail(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, IPrerequisite * const &);
	short unsigned int Find(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, IPrerequisite * const &);
	bool FindAndRemove(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, IPrerequisite * const &);
	void Remove(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	void RemoveAll(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	short unsigned int Alloc(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, bool);
	void Free(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	void LinkBefore(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int, short unsigned int);
	void LinkAfter(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int, short unsigned int);
	void Unlink(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	void LinkToHead(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	void LinkToTail(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	short unsigned int InvalidIndex();
	bool IndexInRange(short unsigned int);
	size_t ElementSize();
	short unsigned int Count(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	bool IsEmpty(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	short unsigned int MaxElementIndex(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	short unsigned int NumAllocated(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	short unsigned int Head(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	short unsigned int Tail(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	short unsigned int Previous(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, short unsigned int);
	short unsigned int Next(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, short unsigned int);
	const_iterator begin(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	iterator begin(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	const_iterator end(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	iterator end(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	bool IsValidIndex(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, short unsigned int);
	bool IsInList(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, short unsigned int);
	size_t GetMemoryUsage(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	short unsigned int AllocInternal(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, bool);
	void ConstructList(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	ListElem_t & InternalElement(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, short unsigned int);
	const ListElem_t & InternalElement(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere, short unsigned int);
	/* tag__fprintf: const_type tag not supported! */;
	CUtlLinkedList(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit, const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	const CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> & Memory(const CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrere);
	void ResetDbgInfo(CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisit);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 40
};

// src/public/tier1/utllinkedlist.h:63
class CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > > {
protected:

	long long int m_Head;  // +0x10
	long long int m_Tail;  // +0x18
	long long int m_FirstFree;  // +0x20
	long long int m_ElementCount;  // +0x28
	long long int m_NumAlloced;  // +0x30
	typedef UtlLinkedListElem_t<CRenderComponent*, long long int> ListElem_t;

	ListElem_t * m_pElements;  // +0x48
	typedef _CUtlLinkedList_constiterator_t<CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > > > const_iterator;

	class _CUtlLinkedList_constiterator_t<CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > > > {
		// sizeof = 0
	};
	typedef _CUtlLinkedList_iterator_t<CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > > > iterator;

	class _CUtlLinkedList_iterator_t<CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > > > {
		// sizeof = 0
	};
	CUtlLinkedList(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, int, int);
	~CUtlLinkedList(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, int);
	CRenderComponent * & Element(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	CRenderComponent * const & Element(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, long long int);
	CRenderComponent * & operator[](CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	CRenderComponent * const & operator[](const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, long long int);
	void EnsureCapacity(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, int);
	void SetGrowSize(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, int);
	void Purge(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	void PurgeAndDeleteElements(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	long long int InsertBefore(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	long long int InsertAfter(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	long long int AddToHead(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	long long int AddToTail(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	long long int InsertBefore(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int, CRenderComponent * const &);
	long long int InsertAfter(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int, CRenderComponent * const &);
	long long int AddToHead(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, CRenderComponent * const &);
	long long int AddToTail(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, CRenderComponent * const &);
	long long int Find(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, CRenderComponent * const &);
	bool FindAndRemove(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, CRenderComponent * const &);
	void Remove(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	void RemoveAll(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	long long int Alloc(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, bool);
	void Free(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	void LinkBefore(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int, long long int);
	void LinkAfter(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int, long long int);
	void Unlink(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	void LinkToHead(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	void LinkToTail(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	long long int InvalidIndex();
	bool IndexInRange(long long int);
	size_t ElementSize();
	long long int Count(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	bool IsEmpty(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	long long int MaxElementIndex(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	long long int NumAllocated(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	long long int Head(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	long long int Tail(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	long long int Previous(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, long long int);
	long long int Next(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, long long int);
	const_iterator begin(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	iterator begin(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	const_iterator end(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	iterator end(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	bool IsValidIndex(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, long long int);
	bool IsInList(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, long long int);
	size_t GetMemoryUsage(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	long long int AllocInternal(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, bool);
	void ConstructList(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);
	ListElem_t & InternalElement(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, long long int);
	const ListElem_t & InternalElement(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo, long long int);
	/* tag__fprintf: const_type tag not supported! */;
	CUtlLinkedList(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen, const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > & Memory(const CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderCo);
	void ResetDbgInfo(CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponen);

	// sizeof = 80
};

// src/public/tier1/utllinkedlist.h:63
class CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > > {
protected:

	long long int m_Head;  // +0x10
	long long int m_Tail;  // +0x18
	long long int m_FirstFree;  // +0x20
	long long int m_ElementCount;  // +0x28
	long long int m_NumAlloced;  // +0x30
	typedef UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> ListElem_t;

	ListElem_t * m_pElements;  // +0x48
	typedef _CUtlLinkedList_constiterator_t<CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > > > const_iterator;

	class _CUtlLinkedList_constiterator_t<CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > > > {
		// sizeof = 0
	};
	typedef _CUtlLinkedList_iterator_t<CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > > > iterator;

	class _CUtlLinkedList_iterator_t<CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > > > {
		// sizeof = 0
	};
	CUtlLinkedList(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , int, int);
	~CUtlLinkedList(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , int);
	InternalInfo_t & Element(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	const InternalInfo_t & Element(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, long long int);
	InternalInfo_t & operator[](CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	const InternalInfo_t & operator[](const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, long long int);
	void EnsureCapacity(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , int);
	void SetGrowSize(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , int);
	void Purge(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	void PurgeAndDeleteElements(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	long long int InsertBefore(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	long long int InsertAfter(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	long long int AddToHead(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	long long int AddToTail(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	long long int InsertBefore(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int, const InternalInfo_t &);
	long long int InsertAfter(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int, const InternalInfo_t &);
	long long int AddToHead(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , const InternalInfo_t &);
	long long int AddToTail(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , const InternalInfo_t &);
	long long int Find(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, const InternalInfo_t &);
	bool FindAndRemove(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , const InternalInfo_t &);
	void Remove(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	void RemoveAll(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	long long int Alloc(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , bool);
	void Free(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	void LinkBefore(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int, long long int);
	void LinkAfter(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int, long long int);
	void Unlink(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	void LinkToHead(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	void LinkToTail(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	long long int InvalidIndex();
	bool IndexInRange(long long int);
	size_t ElementSize();
	long long int Count(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	bool IsEmpty(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	long long int MaxElementIndex(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	long long int NumAllocated(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	long long int Head(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	long long int Tail(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	long long int Previous(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, long long int);
	long long int Next(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, long long int);
	const_iterator begin(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	iterator begin(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	const_iterator end(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	iterator end(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	bool IsValidIndex(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, long long int);
	bool IsInList(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, long long int);
	size_t GetMemoryUsage(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	long long int AllocInternal(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , bool);
	void ConstructList(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );
	ListElem_t & InternalElement(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , long long int);
	const ListElem_t & InternalElement(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,, long long int);
	/* tag__fprintf: const_type tag not supported! */;
	CUtlLinkedList(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long , const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, Memory(const CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true,);
	void ResetDbgInfo(CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long );

	// sizeof = 80
};

// src/public/tier1/utllinkedlist.h:397
class CSchemaTypeOf<CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/tier1/utllinkedlist.h:397
class CSchemaTypeOf<CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/tier1/utllinkedlist.h:397
class CSchemaTypeOf<CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/tier1/utllinkedlist.h:401
class CUtlFixedLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t> : public CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > > {
public:

	CUtlFixedLinkedList(CUtlFixedLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t> *, int, int);
	bool IsValidIndex(const CUtlFixedLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t> *, intp);

private:

	int MaxElementIndex(const CUtlFixedLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t> *);
	void ResetDbgInfo(CUtlFixedLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t> *);

	// sizeof = 80
};

// src/public/tier1/utllinkedlist.h:401
class CUtlFixedLinkedList<CRenderComponent*> : public CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > > {
public:

	CUtlFixedLinkedList(int, int);
	bool IsValidIndex(intp);

private:

	int MaxElementIndex();
	void ResetDbgInfo();
	~CUtlFixedLinkedList();

	// sizeof = 80
};

// src/public/tier1/utllinkedlist.h:401
class CUtlFixedLinkedList<CResponseQueue::CDeferredResponse> : public CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > > {
public:

	CUtlFixedLinkedList(int, int);
	bool IsValidIndex(intp);

private:

	int MaxElementIndex();
	void ResetDbgInfo();
	~CUtlFixedLinkedList();

	// sizeof = 80
};

// UtlLinkedListElem_t: 26 more instantiations (full list in INDEX.tsv)
//   UtlLinkedListElem_t<CBaseCubemap*, short unsigned int>
//   UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>
//   UtlLinkedListElem_t<CDamageModifier*, int>
//   UtlLinkedListElem_t<INextBot*, short unsigned int>
//   UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>
//   UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>
//   UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>
//   UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>
//   UtlLinkedListElem_t<JiggleData, short unsigned int>
//   UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int>
//   UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>
//   UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>
//   UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>
//   UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>
//   UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>
//   UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>
//   UtlLinkedListElem_t<CUserCmd, int>
//   UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int>
//   UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>
//   UtlLinkedListElem_t<LagRecord, long long int>
//   UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int>
//   UtlLinkedListElem_t<int, short unsigned int>
//   UtlLinkedListElem_t<CUnitOrders, short unsigned int>
//   UtlLinkedListElem_t<CRR_Concept, short unsigned int>
//   UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>
//   UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>

// CUtlLinkedList: 29 more instantiations (full list in INDEX.tsv)
//   CUtlLinkedList<CBaseCubemap*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCubemap
//   CUtlLinkedList<CEnvWindShared::WindAveEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEl
//   CUtlLinkedList<CEnvWindShared::WindVariationEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinked
//   CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedL
//   CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >
//   CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short
//   CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimI
//   CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdI
//   CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavB
//   CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CH
//   CUtlLinkedList<JiggleData, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<JiggleData, sho
//   CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >
//   CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_
//   CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCo
//   CUtlLinkedList<CEnvWindShared*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindSh
//   CUtlLinkedList<CFuncAreaPortalBase*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFunc
//   CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned 
//   CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >
//   CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinke
//   CUtlLinkedList<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int, false, short unsigned int, CUtl
//   CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long i
//   CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CH
//   CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYieldin
//   CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_
//   CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAH
//   CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned in
//   CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, s
//   CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavB
//   CUtlLinkedList<CRR_Concept, short unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CRR_Concept, short u

// CSchemaTypeOf: 3 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEl
//   CSchemaTypeOf<CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinke
//   CSchemaTypeOf<CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<

// CUtlFixedLinkedList: 3 more instantiations (full list in INDEX.tsv)
//   CUtlFixedLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t>
//   CUtlFixedLinkedList<LagRecord>
//   CUtlFixedLinkedList<CDOTAHeroPositionsElement>
