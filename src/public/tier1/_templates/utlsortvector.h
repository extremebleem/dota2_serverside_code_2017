// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlsortvector.h:28
class CUtlSortVectorDefaultLess<unsigned int> {
	bool Less(const unsigned int &, const unsigned int &, void *);

	// sizeof = 1
};

// src/public/tier1/utlsortvector.h:38
class CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInfo, int> > > : public CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInfo, int> > {
public:

protected:

	void * m_pLessContext;  // +0x18
	bool m_bNeedsSort;  // +0x20
	CUtlSortVector(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int, int);
	CUtlSortVector(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, sDamageHandlerInfo *, int);
	int Insert(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const sDamageHandlerInfo &);
	int InsertAfterEqual(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const sDamageHandlerInfo &);
	int InsertIfNotFound(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const sDamageHandlerInfo &);
	void Remove(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const sDamageHandlerInfo &);
	void Remove(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int);
	void SetLessContext(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, void *);
	int InsertNoSort(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const sDamageHandlerInfo &);
	void RedoSort(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, bool);
	int InsertAfter(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int, const sDamageHandlerInfo &);
	CUtlSortVector(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHand);
	int AddToHead(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf);
	int AddToTail(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf);
	int InsertBefore(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int);
	int InsertAfter(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int);
	int InsertBefore(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int, const sDamageHandlerInfo &);
	int AddToHead(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const sDamageHandlerInfo &);
	int AddToTail(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const sDamageHandlerInfo &);
	int AddMultipleToHead(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int);
	int AddMultipleToTail(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int, const sDamageHandlerInfo *);
	int InsertMultipleBefore(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int, int, const sDamageHandlerInfo *);
	int InsertMultipleAfter(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int, int);
	int AddVectorToTail(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInfo, int> > &);
	int CompareHelper(void *, const sDamageHandlerInfo *, const sDamageHandlerInfo *);

private:

	void QuickSort(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, DamageHandlerPriorityLess &, int, int);
	~CUtlSortVector(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, int);
	CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf operator=(CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInf, const CUtlSortVector<sDamageHandlerInfo, DamageHandlerPriorityLess, CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHand);

	// sizeof = 40
};

// src/public/tier1/utlsortvector.h:38
class CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > > : public CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > {
public:

protected:

	void * m_pLessContext;  // +0x18
	bool m_bNeedsSort;  // +0x20
	CUtlSortVector(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int, int);
	CUtlSortVector(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * *, int);
	int Insert(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * const &);
	int InsertAfterEqual(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * const &);
	int InsertIfNotFound(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * const &);
	void Remove(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * const &);
	void Remove(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int);
	void SetLessContext(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, void *);
	int InsertNoSort(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * const &);
	void RedoSort(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, bool);
	int InsertAfter(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int, CBaseEntity * const &);
	CUtlSortVector(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, const CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*);
	int AddToHead(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>);
	int AddToTail(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>);
	int InsertBefore(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int);
	int InsertAfter(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int);
	int InsertBefore(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int, CBaseEntity * const &);
	int AddToHead(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * const &);
	int AddToTail(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CBaseEntity * const &);
	int AddMultipleToHead(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int);
	int AddMultipleToTail(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int, CBaseEntity * const *);
	int InsertMultipleBefore(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int, int, CBaseEntity * const *);
	int InsertMultipleAfter(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int, int);
	int AddVectorToTail(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, const CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > &);
	int CompareHelper(void *, CBaseEntity * const *, CBaseEntity * const *);

private:

	void QuickSort(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, CEntityReportLess &, int, int);
	~CUtlSortVector(CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int>, int);

	// sizeof = 40
};

// src/public/tier1/utlsortvector.h:38
class CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > > : public CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > {
public:

protected:

	void * m_pLessContext;  // +0x18
	bool m_bNeedsSort;  // +0x20
	CUtlSortVector(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int, int);
	CUtlSortVector(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, unsigned int *, int);
	int Insert(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const unsigned int &);
	int InsertAfterEqual(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const unsigned int &);
	int InsertIfNotFound(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const unsigned int &);
	void Remove(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const unsigned int &);
	void Remove(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int);
	void SetLessContext(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, void *);
	int InsertNoSort(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const unsigned int &);
	void RedoSort(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, bool);
	int InsertAfter(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int, const unsigned int &);
	CUtlSortVector(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned );
	int AddToHead(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i);
	int AddToTail(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i);
	int InsertBefore(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int);
	int InsertAfter(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int);
	int InsertBefore(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int, const unsigned int &);
	int AddToHead(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const unsigned int &);
	int AddToTail(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const unsigned int &);
	int AddMultipleToHead(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int);
	int AddMultipleToTail(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int, const unsigned int *);
	int InsertMultipleBefore(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int, int, const unsigned int *);
	int InsertMultipleAfter(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, int, int);
	int AddVectorToTail(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &);
	int CompareHelper(void *, const unsigned int *, const unsigned int *);

private:

	void QuickSort(CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i, CUtlSortVectorDefaultLess<unsigned int> &, int, int);
	int FindLessOrEqual<unsigned int>(const CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned , const unsigned int &);
	int Find<unsigned int>(const CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned , const unsigned int &);
	int FindLessOrEqual<unsigned int>(const CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned , const unsigned int &, bool *);

	// sizeof = 40
};

// CUtlSortVector: 4 more instantiations (full list in INDEX.tsv)
//   CUtlSortVector<CaptionLookup_t, CCaptionLookupLess, CUtlVector<CaptionLookup_t, CUtlMemory<CaptionLookup_t, int> > >
//   CUtlSortVector<target_t, CPotentialTargetLess, CUtlVector<target_t, CUtlMemory<target_t, int> > >
//   CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >
//   CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t, GCSDK::CSharedObject::CCompareSharedObject, CUtlVector<GCSDK::C
