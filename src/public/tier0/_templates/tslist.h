// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/tslist.h:294
class CTSSimpleList<CTempFieldPathList::SListElement> : public CTSListBase {
public:

	CTSSimpleList();
	void Push(SListElement *);
	SListElement * Pop();
	~CTSSimpleList();

	// sizeof = 16
};

// src/public/tier0/tslist.h:294
class CTSSimpleList<CTempPackedFieldPathVec::SListElement> : public CTSListBase {
public:

	CTSSimpleList();
	void Push(SListElement *);
	SListElement * Pop();
	~CTSSimpleList();

	// sizeof = 16
};

// src/public/tier0/tslist.h:313
class CTSPool<CRenderAttributesDoubleBuffered> : public CTSListBase {
public:

	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:

		simpleTSPoolStruct_t();
		~simpleTSPoolStruct_t();

		// sizeof = 1616
	};
	CTSPool();
	~CTSPool();
	void Purge();
	void PutObject(CRenderAttributesDoubleBuffered *);
	CRenderAttributesDoubleBuffered * GetObject();
	CRenderAttributesDoubleBuffered * Get();

	// sizeof = 16
};

// src/public/tier0/tslist.h:628
class CTSItemList<CEntityHandle> : public CTSListBase {
public:

private:

	struct Node_t : public TSLNodeBase_t {
	public:

		Node_t();
		Node_t(const CEntityHandle &);

		// sizeof = 32
	};
	CTSItemList();
	~CTSItemList();
	void Purge();
	void RemoveAll();
	void PushItem(const CEntityHandle &);
	bool PopItem(CEntityHandle *);
	Node_t * Detach();
	void FreeNode(Node_t *);

	// sizeof = 32
};

// src/public/tier0/tslist.h:727
class CTSQueue<CFunctor*, false> {
	union NodeLink_t {
		int128 value64x128;  // +0x0
	};

	struct Node_t {
		// sizeof = 0
	};

private:

	CInterlockedInt m_Count;  // +0x20

	CTSQueue();
	~CTSQueue();
	void Purge();
	void RemoveAll();
	bool ValidateQueue();
	Node_t * Push(Node_t *);
	Node_t * Pop();
	void FreeNode(Node_t *);
	void PushItem(CFunctor * const &);
	bool PopItem(CFunctor * *);
	int Count();
	void FinishPush(Node_t *, const NodeLink_t &);
	/* tag__fprintf: const_type tag not supported! */;
	Node_t * End();
	Node_t * InterlockedCompareExchangeNode(volatile Node_t * *, Node_t *, Node_t *);
	bool InterlockedCompareExchangeNodeLink(volatile NodeLink_t *, const NodeLink_t &, const NodeLink_t &);
	/* tag__fprintf: volatile_type tag not supported! */;

	// sizeof = 64
};

// src/public/tier0/tslist.h:727
class CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false> {
	union NodeLink_t {
		int128 value64x128;  // +0x0
	};

	struct Node_t {
		Node_t();
		Node_t(const CNetworkFieldChangedEventQueueChangeInfo_t &);

		// sizeof = 96
	};

private:

	CInterlockedInt m_Count;  // +0x20

	CTSQueue();
	~CTSQueue();
	void Purge();
	void RemoveAll();
	bool ValidateQueue();
	Node_t * Push(Node_t *);
	Node_t * Pop();
	void FreeNode(Node_t *);
	void PushItem(const CNetworkFieldChangedEventQueueChangeInfo_t &);
	bool PopItem(CNetworkFieldChangedEventQueueChangeInfo_t *);
	int Count();
	void FinishPush(Node_t *, const NodeLink_t &);
	/* tag__fprintf: const_type tag not supported! */;
	Node_t * End();
	Node_t * InterlockedCompareExchangeNode(volatile Node_t * *, Node_t *, Node_t *);
	bool InterlockedCompareExchangeNodeLink(volatile NodeLink_t *, const NodeLink_t &, const NodeLink_t &);
	/* tag__fprintf: volatile_type tag not supported! */;

	// sizeof = 64
};

// src/public/tier0/tslist.h:727
class CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> {
	union NodeLink_t {
		int128 value64x128;  // +0x0
	};

	struct Node_t {
		// sizeof = 0
	};

private:

	CInterlockedInt m_Count;  // +0x20

	CTSQueue(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *);
	~CTSQueue(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, int);
	void Purge(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *);
	void RemoveAll(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *);
	bool ValidateQueue(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *);
	Node_t * Push(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, Node_t *);
	Node_t * Pop(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *);
	void FreeNode(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, Node_t *);
	void PushItem(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, IUtlQueuedSignal * const &);
	bool PopItem(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, IUtlQueuedSignal * *);
	int Count(const CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *);
	void FinishPush(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, Node_t *, const NodeLink_t &);
	/* tag__fprintf: const_type tag not supported! */;
	Node_t * End(const CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *);
	Node_t * InterlockedCompareExchangeNode(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, volatile Node_t * *, Node_t *, Node_t *);
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::IUtlQueuedSignal*, false> *, volatile NodeLink_t *, const NodeLink_t &, const NodeLink_t &);
	/* tag__fprintf: volatile_type tag not supported! */;

	// sizeof = 64
};

// src/public/tier0/tslist.h:1097
class _CTSFastPushQueueIterateResult<bool> {
private:

	bool m_bContinue;  // +0x0
	enum {
		CAN_REMOVE = 0,
	};
	_CTSFastPushQueueIterateResult(bool);
	bool Continue();
	bool Remove();
	_CTSFastPushQueueIterateResult<bool> CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6&>(CBlob *, __lambda6 &);
	_CTSFastPushQueueIterateResult<bool> CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::__lambda7&>(CBlob *, __lambda7 &);

	// sizeof = 1
};

// src/public/tier0/tslist.h:1113
class _CTSFastPushQueueIterateResult<void> {
	enum {
		CAN_REMOVE = 0,
	};
	bool Continue();
	bool Remove();
	_CTSFastPushQueueIterateResult<void> CallFunctor<CUtlMemoryPoolBase::FreeList_t, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4&>(FreeList_t *, __lambda4 &);
	_CTSFastPushQueueIterateResult<void> CallFunctor<CUtlMemoryPoolBase::CBlob, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda5&>(CBlob *, __lambda5 &);

	// sizeof = 1
};

// src/public/tier0/tslist.h:1134
class CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((CUtlMemoryPoolBase::FreeList_t* volatile CUtlMemoryPoolBase::FreeList_t::*)&CUtlMemoryPoolBase::FreeList_t::pNext)> {
	static const volatile FreeList_t * FreeList_t::* k_LinkedListMember;
protected:

	volatile volatile FreeList_t * m_pPush;  // +0x0
	volatile volatile FreeList_t * m_pPop;  // +0x8
	FreeList_t * GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	volatile FreeList_t * InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, volatile FreeList_t *);
	FreeList_t * Node_GetNext(FreeList_t *);
	void Node_SetNext(FreeList_t *, FreeList_t *);
	CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C);
	CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C operator=(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	bool IsEmpty(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	bool IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	void Push(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void PushMultiple(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *, FreeList_t *);
	FreeList_t * BeginPeek(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, bool);
	void EndPeek_Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void EndPeek_Replace(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void EndPeek_Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void EndPeek_Rotate(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	FreeList_t * BeginPeek_Lock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, volatile FreeList_t * *);
	void EndPeek_Unlock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *, volatile FreeList_t * *, class );
	FreeList_t * Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, bool);
	FreeList_t * Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C);
	void Push_Head(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	bool Remove(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);

	// sizeof = 16
};

// src/public/tier0/tslist.h:1134
class CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)> {
	static const volatile CBlob * CBlob::* k_LinkedListMember;
protected:

	volatile volatile CBlob * m_pPush;  // +0x0
	volatile volatile CBlob * m_pPop;  // +0x8
	CBlob * GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemory);
	volatile CBlob * InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, volatile CBlob *);
	CBlob * Node_GetNext(CBlob *);
	void Node_SetNext(CBlob *, CBlob *);
	CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa);
	CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemory);
	CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa operator=(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemory);
	bool IsEmpty(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemory);
	bool IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemory);
	void Push(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *);
	void PushMultiple(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *, CBlob *);
	CBlob * BeginPeek(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, bool);
	void EndPeek_Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *);
	void EndPeek_Replace(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *);
	void EndPeek_Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *);
	void EndPeek_Rotate(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *);
	CBlob * BeginPeek_Lock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, volatile CBlob * *);
	void EndPeek_Unlock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *, volatile CBlob * *, class );
	CBlob * Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, bool);
	CBlob * Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa);
	void Push_Head(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *);
	bool Remove(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBa, CBlob *);

	// sizeof = 16
};

// src/public/tier0/tslist.h:1134
class CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((CUtlMemoryPoolBase::FreeList_t* volatile CUtlMemoryPoolBase::FreeList_t::*)&CUtlMemoryPoolBase::FreeList_t::pNext)> {
	enum {
		END_OF_DETACHED_LIST = 0x1,
	};
	static const volatile FreeList_t * FreeList_t::* k_LinkedListMember;
protected:

	volatile volatile FreeList_t * m_pPush;  // +0x0
	volatile volatile FreeList_t * m_pPop;  // +0x8
	FreeList_t * GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	volatile FreeList_t * InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, volatile FreeList_t *);
	FreeList_t * Node_GetNext(FreeList_t *);
	void Node_SetNext(FreeList_t *, FreeList_t *);
	CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C);
	CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C operator=(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	bool IsEmpty(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	bool IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	void Push(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void PushMultiple(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *, FreeList_t *);
	FreeList_t * BeginPeek(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, bool);
	void EndPeek_Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void EndPeek_Replace(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void EndPeek_Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	void EndPeek_Rotate(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	FreeList_t * BeginPeek_Lock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, volatile FreeList_t * *);
	void EndPeek_Unlock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *, volatile FreeList_t * *, class );
	FreeList_t * Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, bool);
	FreeList_t * Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C);
	void Push_Head(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	bool Remove(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((C, FreeList_t *);
	FreeList_t * IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4; T = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE = CUtlMemoryPoolBase::FreeList_t; CONTAINER_TYPE = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::FreeList_t* volatile CUtlMemoryPoolBase::FreeList_t::*)&CUtlMemoryPoolBase::FreeList_t::pNext)]::__lambda0>(FreeList_t *, __lambda4 &, __lambda0 &);
	FreeList_t * IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4>(FreeList_t *, __lambda4 &);

	// sizeof = 16
};

// CTSQueue: 3 more instantiations (full list in INDEX.tsv)
//   CTSQueue<CFunctor*, false>
//   CTSQueue<google::protobuf::Message*, false>
//   CTSQueue<GCSDK::CWorkItem*, false>

// CTSFastPushQueue_Base: 8 more instantiations (full list in INDEX.tsv)
//   CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolB
//   CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, ((CEventListNode* volatile CEventListNode::*)&CEve
//   CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((
//   CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolB
//   CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((
//   CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolB
//   CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, ((
//   CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolB
