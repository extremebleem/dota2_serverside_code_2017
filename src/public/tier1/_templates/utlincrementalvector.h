// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlincrementalvector.h:22
class CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggregateData*, int> > {
protected:

	typedef CPhysAggregateData * ElemType_t;
	typedef CPhysAggregateData * * iterator;
	typedef CPhysAggregateData * const * const_iterator;
	CUtlIncrementalVector(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	CPhysAggregateData * * Base(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	CPhysAggregateData * const * Base(const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA);
	iterator begin(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	const_iterator begin(const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA);
	iterator end(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	const_iterator end(const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA);
	void SetCount(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int);
	int Count(const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA);
	CPhysAggregateData * operator[](CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int);
	const CPhysAggregateData * operator[](const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA, int);
	CPhysAggregateData * AddToTail(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, CPhysAggregateData *);
	void MoveToHead(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, CPhysAggregateData *);
	void SwapItems(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int, int);
	void InsertNewMultipleBefore(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int, int);
	void RemoveAndDeleteMultiple(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int, int);
	void RemoveAndDelete(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int);
	void FastRemove(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int);
	CPhysAggregateData * FindAndFastRemove(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, CPhysAggregateData *);
	int Find(const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA, const CPhysAggregateData *);
	bool Has(const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA, const CPhysAggregateData *);
	void FastRemoveAndDelete(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, CPhysAggregateData *);
	void PurgeAndDeleteElements(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	void Validate(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	void Purge(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	bool IsEmpty(const CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysA);
	CPhysAggregateData * Tail(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega);
	void EnsureCapacity(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int);
	void Sort(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int (*)(const ElemType_t *, const ElemType_t *));
	/* tag__fprintf: const_type tag not supported! */;
	~CUtlIncrementalVector(CUtlIncrementalVector<CPhysAggregateData, DefaultIncrementalVectorAccessor_t<CPhysAggregateData>, CUtlMemory<CPhysAggrega, int);

	// sizeof = 24
};
