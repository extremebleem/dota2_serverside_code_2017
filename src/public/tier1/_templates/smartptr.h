// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/smartptr.h:99
class CPlainAutoPtr<CEconItemView> {
private:

	CPlainAutoPtr(CEconItemView *);
	~CPlainAutoPtr();
	void Delete();
	CPlainAutoPtr(const CPlainAutoPtr<CEconItemView> &);
	CPlainAutoPtr<CEconItemView> & operator=(const CPlainAutoPtr<CEconItemView> &);
	void Attach(CEconItemView *);
	CEconItemView * Detach();
	bool IsValid();
	CEconItemView * Get();
	CEconItemView * operator->();
	CEconItemView & operator*();

	// sizeof = 8
};

// src/public/tier1/smartptr.h:99
class CPlainAutoPtr<IRecipientFilter> {
private:

	CPlainAutoPtr(IRecipientFilter *);
	~CPlainAutoPtr();
	void Delete();
	CPlainAutoPtr(const CPlainAutoPtr<IRecipientFilter> &);
	CPlainAutoPtr<IRecipientFilter> & operator=(const CPlainAutoPtr<IRecipientFilter> &);
	void Attach(IRecipientFilter *);
	IRecipientFilter * Detach();
	bool IsValid();
	IRecipientFilter * Get();
	IRecipientFilter * operator->();
	IRecipientFilter & operator*();

	// sizeof = 8
};

// src/public/tier1/smartptr.h:99
class CPlainAutoPtr<Crr2LibPort> {
private:

	CPlainAutoPtr(Crr2LibPort *);
	~CPlainAutoPtr();
	void Delete();
	CPlainAutoPtr(const CPlainAutoPtr<Crr2LibPort> &);
	CPlainAutoPtr<Crr2LibPort> & operator=(const CPlainAutoPtr<Crr2LibPort> &);
	void Attach(Crr2LibPort *);
	Crr2LibPort * Detach();
	bool IsValid();
	Crr2LibPort * Get();
	Crr2LibPort * operator->();
	Crr2LibPort & operator*();

	// sizeof = 8
};

// src/public/tier1/smartptr.h:196
class CSmartPtr<CEntityInstance, CNullRefCountAccessor> {
private:

	CSmartPtr();
	CSmartPtr(CEntityInstance *);
	CSmartPtr(const CSmartPtr<CEntityInstance, CNullRefCountAccessor> &);
	CSmartPtr(CSmartPtr<CEntityInstance, CNullRefCountAccessor> &);
	~CSmartPtr();
	CSmartPtr(ESmartPtrNoAddRef, CEntityInstance *);
	CSmartPtr(ESmartPtrAddRef, CEntityInstance *);
	CEntityInstance * operator=(CEntityInstance *);
	void operator=(const CSmartPtr<CEntityInstance, CNullRefCountAccessor> &);
	void operator=(CSmartPtr<CEntityInstance, CNullRefCountAccessor> &);
	const CEntityInstance * operator->();
	CEntityInstance * operator->();
	bool operator!();
	bool operator==(const CEntityInstance *);
	bool operator!=(const CEntityInstance *);
	CEntityInstance & operator*();
	const CEntityInstance & operator*();
	bool IsValid();
	CEntityInstance * Get();
	void MarkDeleted();
	void Reset();
	void Reset(ESmartPtrNoAddRef, CEntityInstance *);
	void Reset(ESmartPtrAddRef, CEntityInstance *);
	void Swap(CSmartPtr<CEntityInstance, CNullRefCountAccessor> &);
	void SetNoRef(CEntityInstance *);

	// sizeof = 8
};

// src/public/tier1/smartptr.h:196
class CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> {
private:

	CSmartPtr(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	CSmartPtr(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	CSmartPtr(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> &);
	CSmartPtr(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> &);
	~CSmartPtr(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, int);
	CSmartPtr(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, ESmartPtrNoAddRef, CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	CSmartPtr(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, ESmartPtrAddRef, CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> * operator=(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	void operator=(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> &);
	void operator=(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> &);
	const CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> * operator->(const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> * operator->(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	bool operator!(const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	bool operator==(const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, const CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	bool operator!=(const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, const CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> & operator*(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	const CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> & operator*(const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	bool IsValid(const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> * Get(const CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	void MarkDeleted(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	void Reset(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *);
	void Reset(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, ESmartPtrNoAddRef, CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	void Reset(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, ESmartPtrAddRef, CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);
	void Swap(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> &);
	void SetNoRef(CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> *, CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> *);

	// sizeof = 8
};

// src/public/tier1/smartptr.h:196
class CSmartPtr<CPhysAggregateData, CRefCountAccessor> {
private:

	CSmartPtr();
	CSmartPtr(CPhysAggregateData *);
	CSmartPtr(const CSmartPtr<CPhysAggregateData, CRefCountAccessor> &);
	CSmartPtr(CSmartPtr<CPhysAggregateData, CRefCountAccessor> &);
	~CSmartPtr();
	CSmartPtr(ESmartPtrNoAddRef, CPhysAggregateData *);
	CSmartPtr(ESmartPtrAddRef, CPhysAggregateData *);
	CPhysAggregateData * operator=(CPhysAggregateData *);
	void operator=(const CSmartPtr<CPhysAggregateData, CRefCountAccessor> &);
	void operator=(CSmartPtr<CPhysAggregateData, CRefCountAccessor> &);
	const CPhysAggregateData * operator->();
	CPhysAggregateData * operator->();
	bool operator!();
	bool operator==(const CPhysAggregateData *);
	bool operator!=(const CPhysAggregateData *);
	CPhysAggregateData & operator*();
	const CPhysAggregateData & operator*();
	bool IsValid();
	CPhysAggregateData * Get();
	void MarkDeleted();
	void Reset();
	void Reset(ESmartPtrNoAddRef, CPhysAggregateData *);
	void Reset(ESmartPtrAddRef, CPhysAggregateData *);
	void Swap(CSmartPtr<CPhysAggregateData, CRefCountAccessor> &);
	void SetNoRef(CPhysAggregateData *);

	// sizeof = 8
};

// CPlainAutoPtr: 1 more instantiations (full list in INDEX.tsv)
//   CPlainAutoPtr<Crr2Payload>

// CSmartPtr: 5 more instantiations (full list in INDEX.tsv)
//   CSmartPtr<rr2::ICriterionFunctor, CRefCountAccessor>
//   CSmartPtr<CDamageComponent, CNullRefCountAccessor>
//   CSmartPtr<CHealthComponent, CNullRefCountAccessor>
//   CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>
//   CSmartPtr<IAnimationGraph, CRefCountAccessor>
