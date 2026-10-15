// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utlsharedarray.h:16
class CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> {
	typedef Index Index;

protected:

	Index m_nRefCount;  // +0x0
	const Index m_nElementCount;  // +0x4
	/* tag__fprintf: const_type tag not supported! */;
	CUtlSharedArray(Index);
	~CUtlSharedArray();
	CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t> * AllocateRaw(Index);
	CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> Allocate(Index);
	CSmartPtr<CUtlSharedArray<Manifold_t, UtlSharedArrayTraits_t>, CRefCountAccessor> DeepCopy();
	Manifold_t * Base();
	const Manifold_t * Base();
	Manifold_t & operator[](Index);
	const Manifold_t & operator[](Index);
	Manifold_t & Element(Index);
	const Manifold_t & Element(Index);
	void AddRef();
	void Release();
	Index Count();
	uint GetDataSize();
	uint GetAllocatedSize();
	Index RefCount();

	// sizeof = 8
};
