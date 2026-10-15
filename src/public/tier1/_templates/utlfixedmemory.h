// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlfixedmemory.h:39
class CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > {
	static const intp INVALID_INDEX;
protected:

	static const size_t BLOCK_ALIGN;
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:

		// sizeof = 16
	};

	int m_nAllocationCount;  // +0x8
	int m_nGrowSize;  // +0xc
	class Iterator_t {
		intp m_nIndex;  // +0x8
		Iterator_t(BlockHeader_t *, intp);
		bool operator==(Iterator_t);
		bool operator!=(Iterator_t);

		// sizeof = 16
	};

	struct BlockHeaderUnaligned_t {
		intp m_nBlockSize;  // +0x8

		// sizeof = 16
	};
	CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, int, int);
	~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, int);
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, int, int);
	UtlLinkedListElem_t<CRenderComponent*, long long int> * Base(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *);
	const UtlLinkedListElem_t<CRenderComponent*, long long int> * Base(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *);
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *);
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, const Iterator_t &);
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, intp, const Iterator_t &);
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, const Iterator_t &);
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *);
	UtlLinkedListElem_t<CRenderComponent*, long long int> & operator[](CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, intp);
	const UtlLinkedListElem_t<CRenderComponent*, long long int> & operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, intp);
	UtlLinkedListElem_t<CRenderComponent*, long long int> & Element(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, intp);
	const UtlLinkedListElem_t<CRenderComponent*, long long int> & Element(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, intp);
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, intp);
	intp InvalidIndex();
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *);
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *);
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, int);
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, int);
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *);
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > &);
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, intp, BlockHeader_t *);
	const UtlLinkedListElem_t<CRenderComponent*, long long int> * HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, const BlockHeader_t *);
	/* tag__fprintf: const_type tag not supported! */;
	const BlockHeader_t * BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > *, const UtlLinkedListElem_t<CRenderComponent*, long long int> *);

	// sizeof = 16
};

// src/public/tier1/utlfixedmemory.h:39
class CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > {
	static const intp INVALID_INDEX;
protected:

	static const size_t BLOCK_ALIGN;
	struct BlockHeader_t {
		// sizeof = 0
	};

	int m_nAllocationCount;  // +0x8
	int m_nGrowSize;  // +0xc
	class Iterator_t {
		intp m_nIndex;  // +0x8
		Iterator_t(BlockHeader_t *, intp);
		bool operator==(Iterator_t);
		bool operator!=(Iterator_t);

		// sizeof = 16
	};
	CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int, int);
	~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int);
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int, int);
	UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> * Base(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long );
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> Base(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const Iterator_t &);
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp, const Iterator_t &);
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const Iterator_t &);
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> & operator[](CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , intp);
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp);
	UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> & Element(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , intp);
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> Element(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp);
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp);
	intp InvalidIndex();
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int);
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int);
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long );
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long );
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp, BlockHeader_t *);
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const BlockHeader_t *);
	/* tag__fprintf: const_type tag not supported! */;
	const BlockHeader_t * BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> );

	// sizeof = 16
};

// src/public/tier1/utlfixedmemory.h:39
class CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > {
	static const intp INVALID_INDEX;
protected:

	static const size_t BLOCK_ALIGN;
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:

		// sizeof = 16
	};

	int m_nAllocationCount;  // +0x8
	int m_nGrowSize;  // +0xc
	class Iterator_t {
		intp m_nIndex;  // +0x8
		Iterator_t(BlockHeader_t *, intp);
		bool operator==(Iterator_t);
		bool operator!=(Iterator_t);

		// sizeof = 16
	};

	struct BlockHeaderUnaligned_t {
		intp m_nBlockSize;  // +0x8

		// sizeof = 16
	};
	CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int, int);
	~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int);
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int, int);
	UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> * Base(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long );
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> Base(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const Iterator_t &);
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp, const Iterator_t &);
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const Iterator_t &);
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> & operator[](CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , intp);
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp);
	UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> & Element(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , intp);
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> Element(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp);
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp);
	intp InvalidIndex();
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,);
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int);
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , int);
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long );
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long , CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long );
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, intp, BlockHeader_t *);
	const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const BlockHeader_t *);
	/* tag__fprintf: const_type tag not supported! */;
	const BlockHeader_t * BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t,, const UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> );

	// sizeof = 16
};

// CUtlFixedMemory: 5 more instantiations (full list in INDEX.tsv)
//   CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> >
//   CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> >
//   CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> >
//   CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> >
//   CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> >
