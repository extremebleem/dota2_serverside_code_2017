// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/mempool.h:131
class CUtlMemoryPool<TSPointerListNode_t> : public CUtlMemoryPoolBase {
public:

	CUtlMemoryPool(int, MemoryPoolGrowType_t, const char *);
	TSPointerListNode_t * Alloc();
	TSPointerListNode_t * AllocZero();
	void Free(TSPointerListNode_t *);

	// sizeof = 64
};

// src/public/tier1/mempool.h:131
class CUtlMemoryPool<CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::HashFixedDataInternal_t<ComponentUnserializerFieldInfo_t> > : public CUtlMemoryPoolBase {
public:

	CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned i, int, MemoryPoolGrowType_t, const char *);
	HashFixedDataInternal_t<ComponentUnserializerFieldInfo_t> * Alloc(CUtlMemoryPool<CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned i);
	HashFixedDataInternal_t<ComponentUnserializerFieldInfo_t> * AllocZero(CUtlMemoryPool<CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned i);
	void Free();
	~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned i, int);

	// sizeof = 64
};

// src/public/tier1/mempool.h:131
class CUtlMemoryPool<touchlink_t> : public CUtlMemoryPoolBase {
public:

	CUtlMemoryPool(int, MemoryPoolGrowType_t, const char *);
	touchlink_t * Alloc();
	touchlink_t * AllocZero();
	void Free(touchlink_t *);

	// sizeof = 64
};

// src/public/tier1/mempool.h:157
class CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> > : public CUtlMemoryPool<CDOTAItemDefinition> {
public:

	CClassMemoryPool(CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> > *, int, MemoryPoolGrowType_t);
	~CClassMemoryPool(CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> > *, int);
	CDOTAItemDefinition * Alloc(CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> > *);
	CDOTAItemDefinition * AllocZero(CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> > *);
	void Free(CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> > *, CDOTAItemDefinition *);
	void Clear(CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> > *);

	// sizeof = 64
};

// src/public/tier1/mempool.h:157
class CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> > : public CUtlMemoryPool<CHullTri> {
public:

	CClassMemoryPool(CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> > *, int, MemoryPoolGrowType_t);
	~CClassMemoryPool(CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> > *, int);
	CHullTri * Alloc(CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> > *);
	CHullTri * AllocZero(CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> > *);
	void Free(CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> > *, CHullTri *);
	void Clear(CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> > *);

	// sizeof = 64
};

// src/public/tier1/mempool.h:157
class CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> > : public CUtlMemoryPool<GCSDK::CNetPacket> {
public:

	CClassMemoryPool(CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> > *, int, MemoryPoolGrowType_t);
	~CClassMemoryPool(CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> > *, int);
	CNetPacket * Alloc(CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> > *);
	CNetPacket * AllocZero(CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> > *);
	void Free(CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> > *, CNetPacket *);
	void Clear(CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> > *);

	// sizeof = 64
};

// src/public/tier1/mempool.h:887
class CUtlScratchMemoryPoolFixedGrowable<4096> : public CUtlScratchMemoryPool {
public:

private:

	unsigned char m_initialAllocationMemory[4096];  // +0x10
	CUtlScratchMemoryPoolFixedGrowable();
	~CUtlScratchMemoryPoolFixedGrowable();

	// sizeof = 4112
};

// src/public/tier1/mempool.h:887
class CUtlScratchMemoryPoolFixedGrowable<4000> : public CUtlScratchMemoryPool {
public:

private:

	unsigned char m_initialAllocationMemory[4000];  // +0x10
	CUtlScratchMemoryPoolFixedGrowable();
	~CUtlScratchMemoryPoolFixedGrowable();

	// sizeof = 4016
};

// CUtlMemoryPool: 9 more instantiations (full list in INDEX.tsv)
//   CUtlMemoryPool<groundlink_t>
//   CUtlMemoryPool<CSoundPatch>
//   CUtlMemoryPool<SoundCommand_t>
//   CUtlMemoryPool<CShortPathProbe>
//   CUtlMemoryPool<AI_Waypoint_t>
//   CUtlMemoryPool<CDOTAItemDefinition>
//   CUtlMemoryPool<CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThread
//   CUtlMemoryPool<CHullTri>
//   CUtlMemoryPool<GCSDK::CNetPacket>
