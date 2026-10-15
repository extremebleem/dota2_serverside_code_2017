// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/physics_saverestore.cpp:32
struct PhysBlockHeader_t {
	int nSaved;  // +0x0

	uint64 pWorldObject;  // +0x8

	static datamap_t m_DataMap;
	void Clear();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 16
};

// src/game/shared/physics_saverestore.cpp:66
struct BBox_t {
	BBox_t();
	BBox_t & operator=(const BBox_t &);

	// sizeof = 24
};

// src/game/shared/physics_saverestore.cpp:71
struct physics_save_sphere_t {
	float radius;  // +0x0

	// sizeof = 4
};

// src/game/shared/physics_saverestore.cpp:77
struct PhysObjectHeader_t {
	EHANDLE hEntity;  // +0x4
	string_t fieldName;  // +0x8
	int nObjects;  // +0x10

	string_t modelName;  // +0x18
	int iCollide;  // +0x3c

	static datamap_t m_DataMap;
	PhysObjectHeader_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	PhysObjectHeader_t & operator=(const PhysObjectHeader_t &);
	PhysObjectHeader_t(const PhysObjectHeader_t &);

	// sizeof = 64
};

// src/game/shared/physics_saverestore.cpp:117
class CPhysSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler, public IEntityListener {
	struct QueuedItem_t {
		void * * ppPhysObj;  // +0x40
		QueuedItem_t();
		QueuedItem_t(const QueuedItem_t &);
		QueuedItem_t & operator=(const QueuedItem_t &);

		// sizeof = 72
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CEntityRestoreSet : public CUtlVector<CPhysSaveRestoreBlockHandler::QueuedItem_t, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int> > {
	public:

		CEntityRestoreSet();
		int Add(CBaseEntity *, typedescription_t *, void * *, PhysInterfaceId_t);
		QueuedItem_t * FindItem(string_t);
		~CEntityRestoreSet();

		// sizeof = 24
	};

public:

private:

	CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&)> m_QueuedRestores;  // +0x30
	bool m_fDoLoad;  // +0x58

	CPhysSaveRestoreBlockHandler(CPhysSaveRestoreBlockHandler &);
	CPhysSaveRestoreBlockHandler(const CPhysSaveRestoreBlockHandler &);
	CPhysSaveRestoreBlockHandler();
	virtual const char * GetBlockName();
	virtual void PreSave(CSaveRestoreData *, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void Save(ISave *);
	virtual void WriteSaveHeaders(ISave *);
	virtual void PostSave(const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);
	void RestoreBlock(IRestore *, const PhysObjectHeader_t &);
	void RestoreAggregateForSkeletonInstance(IVPhysics2World *, IRestore *, CBaseEntity *, const PhysObjectHeader_t &, QueuedItem_t *, int);
	virtual void PostRestore();
	void QueueSave(CBaseEntity *, typedescription_t *, void * *, PhysInterfaceId_t);
	void QueueRestore(CBaseEntity *, typedescription_t *, void * *, PhysInterfaceId_t);
	void SavePhysicsObject(ISave *, CBaseEntity *, void *, PhysInterfaceId_t);
	void RestorePhysicsObject(IVPhysics2World *, IRestore *, const PhysObjectHeader_t &, void * *);
	virtual void OnEntityCreated(CEntityInstance *);
	virtual void OnEntityDeleted(CEntityInstance *);
	bool SaveQueueFunc(const QueuedItem_t &, const QueuedItem_t &);
	~CPhysSaveRestoreBlockHandler();

	// vtable[0] GetBlockName
	// vtable[1] PreSave
	// vtable[2] Save
	// vtable[3] WriteSaveHeaders
	// vtable[4] PostSave
	// vtable[5] PreRestore
	// vtable[6] ReadRestoreHeaders
	// vtable[7] Restore
	// vtable[8] PostRestore
	// vtable[9] OnEntityCreated
	// vtable[10] OnEntityDeleted
	// sizeof = 112
};

// src/game/shared/physics_saverestore.cpp:592
class CPhysObjSaveRestoreOps : public CDefSaveRestoreOps {
public:

	CPhysObjSaveRestoreOps(CPhysObjSaveRestoreOps &);
	CPhysObjSaveRestoreOps(const CPhysObjSaveRestoreOps &);
	CPhysObjSaveRestoreOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[3] MakeEmpty
	// vtable[2] IsEmpty
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PhysBlockHeader_t::AddDatadescMetadataKeys  (line 45, @0x00000000022dc600, libserver.so)
void __fastcall PhysBlockHeader_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// PhysBlockHeader_t::GetBaseMap  (line 45, @0x00000000022dc610, libserver.so)
datamap_t *__cdecl PhysBlockHeader_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<PhysBlockHeader_t>  (line 45, @0x00000000022dc620, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "PhysBlockHeader_t"
// globals: `guard variable for'DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder, PhysBlockHeader_t::m_DataMap, DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder) != 0 )
  {
    DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder.m_pszBase = "PhysBlockHeader_t";
    DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::nameHolder,
      &_dso_handle);
  }
  PhysBlockHeader_t::m_DataMap.baseMap = 0;
  PhysBlockHeader_t::m_DataMap.dataDesc = &DataMapInit<PhysBlockHeader_t>(PhysBlockHeader_t *)::dataDesc[1];
  PhysBlockHeader_t::m_DataMap.dataNumFields = 2;
  return &PhysBlockHeader_t::m_DataMap;
}


// PhysObjectHeader_t::AddDatadescMetadataKeys  (line 96, @0x00000000022dc6e0, libserver.so)
void __fastcall PhysObjectHeader_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// PhysObjectHeader_t::GetBaseMap  (line 96, @0x00000000022dc6f0, libserver.so)
datamap_t *__cdecl PhysObjectHeader_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<PhysObjectHeader_t>  (line 96, @0x00000000022dc700, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "PhysObjectHeader_t"
// globals: `guard variable for'DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder, PhysObjectHeader_t::m_DataMap, DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder) != 0 )
  {
    DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder.m_pszBase = "PhysObjectHeader_t";
    DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::nameHolder,
      &_dso_handle);
  }
  PhysObjectHeader_t::m_DataMap.baseMap = 0;
  PhysObjectHeader_t::m_DataMap.dataDesc = &DataMapInit<PhysObjectHeader_t>(PhysObjectHeader_t *)::dataDesc[1];
  PhysObjectHeader_t::m_DataMap.dataNumFields = 9;
  return &PhysObjectHeader_t::m_DataMap;
}


// CPhysSaveRestoreBlockHandler::~CPhysSaveRestoreBlockHandler  (line 117, @0x0000000002311b10, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMap, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int>::Purge
void __fastcall CPhysSaveRestoreBlockHandler::~CPhysSaveRestoreBlockHandler(CPhysSaveRestoreBlockHandler *const this)
{
  bool v2; // zf

  this->_vptr_ISaveRestoreBlockHandler = &off_4081B10;
  this->_vptr_IEntityListener = &off_4081B78;
  CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_QueuedRestores.m_Tree);
  v2 = (this->m_QueuedRestores.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_QueuedRestores.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_QueuedRestores.m_Tree.m_Elements);
    v2 = (this->m_QueuedRestores.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_QueuedRestores.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
    {
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_QueuedRestores.m_Tree.m_Elements);
      v2 = (this->m_QueuedSaves.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      this->m_QueuedSaves.m_heap.m_Size = 0;
      if ( !v2 )
        return;
      goto LABEL_7;
    }
  }
  else
  {
    this->m_QueuedRestores.m_Tree.m_LastAlloc.index = -1;
  }
  v2 = (this->m_QueuedSaves.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_QueuedSaves.m_heap.m_Size = 0;
  if ( !v2 )
    return;
LABEL_7:
  CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Purge(&this->m_QueuedSaves.m_heap.m_Memory);
  if ( (this->m_QueuedSaves.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Purge(&this->m_QueuedSaves.m_heap.m_Memory);
}


// CPhysSaveRestoreBlockHandler::GetBlockName  (line 130, @0x00000000023041a0, libserver.so)
const char *__fastcall CPhysSaveRestoreBlockHandler::GetBlockName(const CPhysSaveRestoreBlockHandler *const this)
{
  return "Physics";
}


// CPhysSaveRestoreBlockHandler::PreSave  (line 137, @0x00000000023041b0, libserver.so)  // inlines: Clear
void __fastcall CPhysSaveRestoreBlockHandler::PreSave(
        CPhysSaveRestoreBlockHandler *const this,
        CSaveRestoreData *a2,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  this->m_blockHeader.nSaved = 0;
  this->m_blockHeader.pWorldObject = 0;
}


// CPhysSaveRestoreBlockHandler::Save  (line 144, @0x000000000230bc20, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlSymbolLarge, Element, FastRemove, Get, GetInstance, PercolateDown, PhysObjectHeader_t, QueuedItem_t, RemoveAtHead, SavePhysicsObject, Swap, WriteAll<PhysObjectHeader_t>, memcpy, operator(), operator=, operator[]
// calls: CPhysicsGameSystem::GetLevelAggregateInstance, CEntityHandle::operator CEntityInstance*, CBaseEntity::VPhysicsWorld
// globals: PhysObjectHeader_t::m_DataMap
void __fastcall CPhysSaveRestoreBlockHandler::Save(CPhysSaveRestoreBlockHandler *const this, ISave *pSave)
{
  IPhysAggregateInstance *LevelAggregateInstance; // rax
  int m_Size; // eax
  int v6; // r13d
  CPhysSaveRestoreBlockHandler::QueuedItem_t *m_pMemory; // rbx
  const CBaseEntity *v8; // r12
  int v9; // r13d
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 type; // rcx
  void *v14; // rax
  IVPhysics2World *v15; // rax
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v16; // rax
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v17; // rdx
  __int64 i; // r12
  int v19; // ebx
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v20; // rdx
  __int64 v21; // rcx
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v22; // rax
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v23; // rdx
  PhysInterfaceId_t v24; // r12d
  uint32 m_Index; // r11d
  UtlSymLargeId_t m_Id; // r10
  int nObjects; // r9d
  UtlSymLargeId_t v28; // r8
  vec_t x; // xmm6_4
  vec_t y; // xmm5_4
  vec_t z; // xmm4_4
  vec_t v32; // xmm3_4
  vec_t v33; // xmm2_4
  vec_t v34; // xmm1_4
  int iCollide; // edi
  void **ppPhysObj; // rsi
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v37; // rcx
  float v38; // xmm0_4
  int v39; // r15d
  _QWORD v41[2]; // [rsp+20h] [rbp-80h] BYREF
  PhysInterfaceId_t v42; // [rsp+30h] [rbp-70h]
  float radius; // [rsp+58h] [rbp-48h]

  LevelAggregateInstance = CPhysicsGameSystem::GetLevelAggregateInstance(g_pPhysicsGameSystem);
  this->m_blockHeader.pWorldObject = (*(LevelAggregateInstance->_vptr_IPhysAggregateInstance + 10))(
                                       LevelAggregateInstance,
                                       0);
  m_Size = this->m_QueuedSaves.m_heap.m_Size;
  this->m_blockHeader.nSaved = m_Size;
  v6 = m_Size;
LABEL_2:
  if ( v6 == 0 )
    return;
  do
  {
    m_pMemory = this->m_QueuedSaves.m_heap.m_Memory.m_pMemory;
    v8 = CEntityHandle::operator CEntityInstance *(&m_pMemory->header.hEntity);
    if ( v8 != 0 )
    {
      v9 = 0;
      (*(pSave->_vptr_ISave + 5))(pSave, m_pMemory, &PhysObjectHeader_t::m_DataMap);
      v10 = 0;
      (*(pSave->_vptr_ISave + 8))(pSave);
      if ( m_pMemory->header.nObjects > 0 )
      {
        do
        {
          (*(pSave->_vptr_ISave + 8))(pSave);
          type = m_pMemory->header.type;
          v14 = m_pMemory->ppPhysObj[v10];
          if ( v14 != 0 )
          {
            v42 = m_pMemory->header.type;
            v41[0] = pSave;
            v41[1] = v14;
            v15 = CBaseEntity::VPhysicsWorld(v8);
            (*(*v15 + 1688LL))(v15, v41);
          }
          ++v9;
          ++v10;
          (*(pSave->_vptr_ISave + 9))(pSave, v12, v11, type);
        }
        while ( m_pMemory->header.nObjects > v9 );
      }
      (*(pSave->_vptr_ISave + 9))(pSave);
      v6 = this->m_QueuedSaves.m_heap.m_Size;
    }
    if ( v6 > 0 )
    {
      if ( --v6 != 0 )
      {
        v16 = this->m_QueuedSaves.m_heap.m_Memory.m_pMemory;
        v17 = &v16[v6];
        *&v16->header.type = *&v17->header.type;
        v16->header.fieldName.u.m_Id = v17->header.fieldName.u.m_Id;
        *&v16->header.nObjects = *&v17->header.nObjects;
        v16->header.modelName.u.m_Id = v17->header.modelName.u.m_Id;
        *&v16->header.bbox.mins.x = *&v17->header.bbox.mins.x;
        *&v16->header.bbox.mins.z = *&v17->header.bbox.mins.z;
        *&v16->header.bbox.maxs.y = *&v17->header.bbox.maxs.y;
        *&v16->header.sphere.radius = *&v17->header.sphere.radius;
        v16->ppPhysObj = v17->ppPhysObj;
        v6 = this->m_QueuedSaves.m_heap.m_Size - 1;
      }
      this->m_QueuedSaves.m_heap.m_Size = v6;
    }
    if ( v6 / 2 <= 0 )
      goto LABEL_2;
    for ( i = 0; ; i = v19 )
    {
      v39 = 2 * i + 2;
      v19 = 2 * i + 1;
      if ( v19 < v6 )
        break;
      v19 = i;
      if ( v39 < v6 )
        goto LABEL_23;
LABEL_16:
      if ( i == v19 )
        goto LABEL_26;
LABEL_17:
      v20 = this->m_QueuedSaves.m_heap.m_Memory.m_pMemory;
      v21 = v19;
      v22 = &v20[i];
      v23 = &v20[v21];
      v24 = v22->header.type;
      m_Index = v22->header.hEntity.m_Index;
      m_Id = v22->header.fieldName.u.m_Id;
      nObjects = v22->header.nObjects;
      v28 = v22->header.modelName.u.m_Id;
      x = v22->header.bbox.mins.x;
      y = v22->header.bbox.mins.y;
      z = v22->header.bbox.mins.z;
      v32 = v22->header.bbox.maxs.x;
      v33 = v22->header.bbox.maxs.y;
      v34 = v22->header.bbox.maxs.z;
      radius = v22->header.sphere.radius;
      iCollide = v22->header.iCollide;
      ppPhysObj = v22->ppPhysObj;
      v22->header.type = v23->header.type;
      v22->header.hEntity.m_Index = v23->header.hEntity.m_Index;
      v22->header.fieldName.u.m_Id = v23->header.fieldName.u.m_Id;
      v22->header.nObjects = v23->header.nObjects;
      v22->header.modelName.u.m_Id = v23->header.modelName.u.m_Id;
      v22->header.bbox.mins.x = v23->header.bbox.mins.x;
      v22->header.bbox.mins.y = v23->header.bbox.mins.y;
      v22->header.bbox.mins.z = v23->header.bbox.mins.z;
      v22->header.bbox.maxs.x = v23->header.bbox.maxs.x;
      v22->header.bbox.maxs.y = v23->header.bbox.maxs.y;
      v22->header.bbox.maxs.z = v23->header.bbox.maxs.z;
      v22->header.sphere.radius = v23->header.sphere.radius;
      v22->header.iCollide = v23->header.iCollide;
      v22->ppPhysObj = v23->ppPhysObj;
      v37 = &this->m_QueuedSaves.m_heap.m_Memory.m_pMemory[v21];
      v37->header.type = v24;
      v37->header.hEntity.m_Index = m_Index;
      v37->header.fieldName.u.m_Id = m_Id;
      v37->header.nObjects = nObjects;
      v37->header.modelName.u.m_Id = v28;
      v37->header.bbox.mins.x = x;
      v37->header.bbox.mins.y = y;
      v37->header.bbox.mins.z = z;
      v37->header.bbox.maxs.x = v32;
      v37->header.bbox.maxs.y = v33;
      v37->header.bbox.maxs.z = v34;
      v38 = radius;
      v37->header.iCollide = iCollide;
      v37->ppPhysObj = ppPhysObj;
      v37->header.sphere.radius = v38;
      if ( v6 / 2 <= v19 )
        goto LABEL_26;
    }
    if ( !this->m_QueuedSaves.m_LessFunc(
            &this->m_QueuedSaves.m_heap.m_Memory.m_pMemory[i],
            &this->m_QueuedSaves.m_heap.m_Memory.m_pMemory[v19]) )
      v19 = i;
    if ( v39 >= v6 )
      goto LABEL_16;
LABEL_23:
    if ( this->m_QueuedSaves.m_LessFunc(
           &this->m_QueuedSaves.m_heap.m_Memory.m_pMemory[v19],
           &this->m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39]) )
    {
      v19 = 2 * i + 2;
    }
    if ( i != v19 )
      goto LABEL_17;
LABEL_26:
    v6 = this->m_QueuedSaves.m_heap.m_Size;
  }
  while ( v6 != 0 );
}


// CPhysSaveRestoreBlockHandler::WriteSaveHeaders  (line 180, @0x00000000023041d0, libserver.so)  // inlines: WriteAll<PhysBlockHeader_t>
// globals: PHYS_SAVE_RESTORE_VERSION, PhysBlockHeader_t::m_DataMap
void __fastcall CPhysSaveRestoreBlockHandler::WriteSaveHeaders(CPhysSaveRestoreBlockHandler *const this, ISave *pSave)
{
  (*(pSave->_vptr_ISave + 10))(pSave, &PHYS_SAVE_RESTORE_VERSION, 1);
  (*(pSave->_vptr_ISave + 5))(pSave, &this->m_blockHeader, &PhysBlockHeader_t::m_DataMap);
}


// CPhysSaveRestoreBlockHandler::PostSave  (line 188, @0x00000000023084e0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int>::Purge
void __fastcall CPhysSaveRestoreBlockHandler::PostSave(
        CPhysSaveRestoreBlockHandler *const this,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  bool v2; // zf

  v2 = (this->m_QueuedSaves.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_QueuedSaves.m_heap.m_Size = 0;
  if ( v2 )
    CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Purge(&this->m_QueuedSaves.m_heap.m_Memory);
}


// CPhysSaveRestoreBlockHandler::PreRestore  (line 195, @0x00000000023074a0, libserver.so)
// calls: CGameEntitySystem::AddListenerEntity
void __fastcall CPhysSaveRestoreBlockHandler::PreRestore(CPhysSaveRestoreBlockHandler *const this)
{
  CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CPhysSaveRestoreBlockHandler::ReadRestoreHeaders  (line 214, @0x0000000002304210, libserver.so)  // inlines: ReadAll<PhysBlockHeader_t>
// globals: PHYS_SAVE_RESTORE_VERSION, PhysBlockHeader_t::m_DataMap
void __fastcall CPhysSaveRestoreBlockHandler::ReadRestoreHeaders(
        CPhysSaveRestoreBlockHandler *const this,
        IRestore *pRestore)
{
  this->m_fDoLoad = (*(pRestore->_vptr_IRestore + 12))(pRestore) == PHYS_SAVE_RESTORE_VERSION;
  (*(pRestore->_vptr_IRestore + 2))(pRestore, &this->m_blockHeader, &PhysBlockHeader_t::m_DataMap);
}


// CPhysSaveRestoreBlockHandler::Restore  (line 225, @0x0000000002311310, libserver.so)  // inlines: CEntityHandle, CGameSceneNodeHandle, CNetworkVarBase, CUtlSymbolLarge, Element, EnsureValidValue<CEntityHandle>, Find, FindItem, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetSkeletonInstance, IndexToIdentity, Init, IsValid, LookupEntity, PhysObjectHeader_t, ReadAll<PhysObjectHeader_t>, RestoreAggregateForSkeletonInstance, RestoreBlock, RestorePhysicsObject, ToInt, memset, operator CEntityInstance*, operator!=<CBaseEntity>, operator=<CEntityInstance*>, operator[]
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld, CPhysicsGameSystem::GetLevelAggregateInstance, CEntityHandle::operator CEntityInstance*, CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::Find, __dynamic_cast, CSkeletonInstance::SetupPhysics, CGameSceneNodeHandle::CGameSceneNodeHandle
// globals: PhysObjectHeader_t::m_DataMap, CEntityHandle::gm_pEntityList, `typeinfo for'IMotionEvent
// local variable allocation has failed, the output may be wrong!
void __fastcall CPhysSaveRestoreBlockHandler::Restore(
        CPhysSaveRestoreBlockHandler *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t a3,
        bool a4)
{
  IVPhysics2World *LevelWorld; // r12
  IPhysAggregateInstance *LevelAggregateInstance; // rax
  int nSaved; // eax
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CBaseEntity *v11; // r15
  __int64 v12; // r12
  CBaseEntity *v13; // r13
  int nObjects; // r10d
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::ElemType_t elem; // rax
  int m_Size; // edx
  CPhysSaveRestoreBlockHandler::QueuedItem_t *m_pMemory; // rcx
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v18; // rax
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v19; // r12
  CPhysSaveRestoreBlockHandler::CEntityRestoreSet *v20; // r12
  __int64 v21; // r15
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  __int64 v24; // rax
  void *v25; // rax
  CSkeletonInstance *v26; // rax
  void *v27; // rdx
  CPhysSaveRestoreBlockHandler::CEntityRestoreSet *ppPhysObj; // rdx
  CBaseEntity *m_pInstance; // rdx
  __int64 v30; // rcx
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::Node_t *v31; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v33; // eax
  __int16 v34; // cx
  int v35; // edx
  CBaseEntity *lpsrc; // [rsp+10h] [rbp-F0h]
  CGameSceneNode *pNode; // [rsp+28h] [rbp-D8h]
  CGameSceneNode *pNodea; // [rsp+28h] [rbp-D8h]
  CGameSceneNode *pNodeb; // [rsp+28h] [rbp-D8h]
  CGameSceneNodeHandle v41; // [rsp+40h] [rbp-C0h] BYREF
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::Node_t search[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE params[64]; // [rsp+90h] [rbp-70h] OVERLAPPED BYREF

  if ( this->m_fDoLoad )
  {
    LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, 0, 0);
    if ( LevelWorld != 0 )
    {
      *params = 1;
      LevelAggregateInstance = CPhysicsGameSystem::GetLevelAggregateInstance(g_pPhysicsGameSystem);
      *&params[16] = (*(LevelAggregateInstance->_vptr_IPhysAggregateInstance + 10))(LevelAggregateInstance, 0);
      *&params[8] = this->m_blockHeader.pWorldObject;
      (*(*LevelWorld + 1696LL))(LevelWorld, params);
    }
    memset(params, 0, sizeof(params));
    nSaved = this->m_blockHeader.nSaved;
    this->m_blockHeader.nSaved = nSaved - 1;
    if ( nSaved != 0 )
    {
      do
      {
        (*(pRestore->_vptr_IRestore + 2))(pRestore, params, &PhysObjectHeader_t::m_DataMap);
        (*(pRestore->_vptr_IRestore + 7))(pRestore);
        if ( (*&params[4] + 2) > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*&params[4] >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[*&params[4] & 0x1FF];
            if ( v10 != 0 && *&params[4] == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
            {
              v11 = CEntityHandle::operator CEntityInstance *(&params[4]);
              search[0].key = v11;
              v12 = CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                      &this->m_QueuedRestores.m_Tree,
                      search);
              v13 = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, 0, 0);
              if ( v12 != 0xFFFF )
              {
                if ( (*(v11->_vptr_IHandleEntity + 48))(v11) != 0 && (nObjects = *&params[16], *&params[16] > 0) )
                {
                  elem = this->m_QueuedRestores.m_Tree.m_Elements.m_pMemory[v12].m_Data.elem;
                  m_Size = elem->m_Size;
                  if ( elem->m_Size > 0 )
                  {
                    m_pMemory = elem->m_Memory.m_pMemory;
                    if ( *&params[8] != m_pMemory->header.fieldName.u.m_Id )
                    {
                      v18 = m_pMemory + 1;
                      while ( v18 != &m_pMemory[(m_Size - 1) + 1] )
                      {
                        v19 = v18++;
                        if ( *&params[8] == v18[-1].header.fieldName.u.m_Id )
                          goto LABEL_21;
                      }
                      goto LABEL_7;
                    }
                    v19 = elem->m_Memory.m_pMemory;
LABEL_21:
                    if ( v19->header.nObjects <= *&params[16] )
                      nObjects = v19->header.nObjects;
                    if ( v19->header.type == PhysInterfaceId_t::PIID_IPHYSAGGREGATE )
                    {
                      (*(pRestore->_vptr_IRestore + 7))(pRestore);
                      pNodea = v11->m_pCollision;
                      v26 = (*(v11->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(v11->m_CBodyComponent->m_pSceneNode);
                      if ( v26 != 0 && pNodea != 0 && *v19->ppPhysObj == 0 )
                      {
                        pNodeb = v26;
                        CSkeletonInstance::SetupPhysics(v26);
                        v27 = *&pNodeb[1].m_angAbsRotation.y;
                        if ( v27 != 0 )
                        {
                          *v19->ppPhysObj = v27;
                          ppPhysObj = v19->ppPhysObj;
                          search[0].key = pRestore;
                          search[1].key = v11;
                          search[2].key = v13;
                          search[1].elem = 0;
                          search[0].elem = ppPhysObj;
                          LODWORD(search[3].key) = *params;
                          CGameSceneNodeHandle::CGameSceneNodeHandle(&v41, pNodeb);
                          search[2].elem = *&v41.m_hOwner.m_Value.m_Index;
                          (*(v13->_vptr_IHandleEntity + 213))(v13, search);
                        }
                      }
                      (*(pRestore->_vptr_IRestore + 8))(pRestore);
                    }
                    else
                    {
                      v20 = v19->ppPhysObj;
                      if ( nObjects > 0 )
                      {
                        lpsrc = v11;
                        v21 = &v20->m_Memory + 8 * (nObjects - 1);
                        while ( 2 )
                        {
                          (*(pRestore->_vptr_IRestore + 7))(pRestore);
                          if ( v13 == 0 )
                            goto LABEL_35;
                          if ( (*&params[4] + 2) <= 1
                            || (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*&params[4] >> 9) & 0x3F]) == 0
                            || (v23 = &v22[*&params[4] & 0x1FF]) == 0
                            || *&params[4] != v23->m_EHandle.m_Index )
                          {
                            memset(search, 0, 0x38u);
                            search[0].key = pRestore;
                            search[0].elem = v20;
                            search[2].key = v13;
                            goto LABEL_33;
                          }
                          m_pInstance = v23->m_pInstance;
                          v30 = 14;
                          v31 = search;
                          while ( v30 != 0 )
                          {
                            LODWORD(v31->key) = 0;
                            v31 = (v31 + 4);
                            --v30;
                          }
                          search[0].key = pRestore;
                          search[0].elem = v20;
                          search[1].key = m_pInstance;
                          search[2].key = v13;
                          if ( m_pInstance != 0 && (m_pEntity = m_pInstance->m_pEntity) != 0 )
                          {
                            v33 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                            v34 = 0x7FFF;
                            if ( m_pEntity->m_EHandle.m_Index != -1 )
                              v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                            LOWORD(v41._vptr_CGameSceneNodeHandle) = v34 | v41._vptr_CGameSceneNodeHandle & 0x8000;
                            v35 = v33 << 15;
                            v24 = (v33 << 15) | v41._vptr_CGameSceneNodeHandle & 0x7FFF;
                            LODWORD(v41._vptr_CGameSceneNodeHandle) = v35 | v41._vptr_CGameSceneNodeHandle & 0x7FFF;
                          }
                          else
                          {
LABEL_33:
                            v24 = 0xFFFFFFFFLL;
                          }
                          search[2].elem = v24;
                          LODWORD(search[3].key) = *params;
                          (*(v13->_vptr_IHandleEntity + 213))(v13, search);
LABEL_35:
                          (*(pRestore->_vptr_IRestore + 8))(pRestore);
                          if ( *params == 5 )
                          {
                            pNode = *&v20->m_Size;
                            if ( *&v20->m_Size != 0 )
                            {
                              v25 = __dynamic_cast(lpsrc, &`typeinfo for'CBaseEntity, &`typeinfo for'IMotionEvent, -2);
                              if ( v25 != 0 )
                                (*(pNode->_vptr_CGameSceneNode + 2))(pNode, v25);
                            }
                          }
                          v20 = (v20 + 8);
                          if ( v20 == v21 )
                            break;
                          continue;
                        }
                      }
                    }
                  }
                }
                else
                {
                  (*(v11->_vptr_IHandleEntity + 49))(v11);
                }
              }
            }
          }
        }
LABEL_7:
        (*(pRestore->_vptr_IRestore + 8))(pRestore);
        v8 = this->m_blockHeader.nSaved;
        this->m_blockHeader.nSaved = v8 - 1;
      }
      while ( v8 != 0 );
    }
  }
}


// CPhysSaveRestoreBlockHandler::PostRestore  (line 354, @0x00000000023119f0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, RemoveAll, operator[], ~CEntityRestoreSet, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld, operator delete, CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int>::Purge, CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CGameEntitySystem::RemoveListenerEntity
void __fastcall CPhysSaveRestoreBlockHandler::PostRestore(CPhysSaveRestoreBlockHandler *const this)
{
  IVPhysics2World *LevelWorld; // rax
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // si
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)> *p_m_QueuedRestores; // r14
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::ElemType_t elem; // rbx
  bool v9; // zf

  LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, 0, 0);
  if ( LevelWorld != 0 )
    (*(*LevelWorld + 1712LL))(LevelWorld);
  m_Root = this->m_QueuedRestores.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    p_m_QueuedRestores = &this->m_QueuedRestores;
  }
  else
  {
    m_pMemory = this->m_QueuedRestores.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_QueuedRestores = &this->m_QueuedRestores;
    while ( 1 )
    {
      elem = m_pMemory[v5].m_Data.elem;
      if ( elem != 0 )
      {
        v9 = (elem->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        elem->m_Size = 0;
        if ( v9 )
        {
          CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Purge(&elem->m_Memory);
          if ( (elem->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Purge(&elem->m_Memory);
        }
        operator delete(elem);
      }
      m_Root = CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_QueuedRestores.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_QueuedRestores.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&p_m_QueuedRestores->m_Tree);
  CGameEntitySystem::RemoveListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CPhysSaveRestoreBlockHandler::OnEntityCreated  (line 462, @0x0000000002304250, libserver.so)
void __fastcall CPhysSaveRestoreBlockHandler::OnEntityCreated(
        CPhysSaveRestoreBlockHandler *const this,
        CEntityInstance *pEntity)
{
  ;
}


// CPhysSaveRestoreBlockHandler::OnEntityDeleted  (line 468, @0x000000000231e210, libserver.so)  // inlines: Element, Find, FreeNode, Purge, RemoveAll, RemoveAt, SetLeftChild, SetRightChild, operator[], ~CEntityRestoreSet, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator delete, CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int>::Purge
void __fastcall CPhysSaveRestoreBlockHandler::OnEntityDeleted(
        CPhysSaveRestoreBlockHandler *const this,
        CEntityInstance *pIEntity)
{
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)> *p_m_QueuedRestores; // r15
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r12
  __int64 v6; // r14
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::ElemType_t elem; // r13
  bool v8; // zf
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::Node_t v9; // [rsp-48h] [rbp-48h] BYREF

  if ( pIEntity != 0 )
  {
    p_m_QueuedRestores = &this->m_QueuedRestores;
    v9.key = pIEntity;
    v4 = CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_QueuedRestores.m_Tree,
           &v9);
    v5 = v4;
    if ( v4 != 0xFFFF )
    {
      v6 = v4;
      elem = this->m_QueuedRestores.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
      if ( elem != 0 )
      {
        v8 = (elem->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        elem->m_Size = 0;
        if ( v8 )
        {
          CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Purge(&elem->m_Memory);
          if ( (elem->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Purge(&elem->m_Memory);
        }
        operator delete(elem);
      }
      CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &p_m_QueuedRestores->m_Tree,
        v5);
      this->m_QueuedRestores.m_Tree.m_Elements.m_pMemory[v6].m_Left = v5;
      this->m_QueuedRestores.m_Tree.m_Elements.m_pMemory[v6].m_Right = this->m_QueuedRestores.m_Tree.m_FirstFree;
      --this->m_QueuedRestores.m_Tree.m_NumElements;
      this->m_QueuedRestores.m_Tree.m_FirstFree = v5;
    }
  }
}


// CPhysSaveRestoreBlockHandler::SaveQueueFunc  (line 538, @0x00000000023097a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, entindex, operator CEntityInstance*, operator->, operator>
// calls: CEntityInstance::GetEntityIndex
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CPhysSaveRestoreBlockHandler::SaveQueueFunc(
        const CPhysSaveRestoreBlockHandler::QueuedItem_t *const left,
        const CPhysSaveRestoreBlockHandler::QueuedItem_t *const right)
{
  bool result; // al
  uint32 m_Index; // eax
  const CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIndex v8; // eax
  uint32 v9; // edx
  const CEntityInstance *v10; // rdi
  int32 m_Data; // r12d
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rax

  result = left->header.type > right->header.type;
  if ( left->header.type == right->header.type )
  {
    m_Index = right->header.hEntity.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(right->header.hEntity.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[right->header.hEntity.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    v8.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
    v9 = left->header.hEntity.m_Index;
    v10 = 0;
    m_Data = v8.m_Data;
    if ( v9 + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(left->header.hEntity.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[left->header.hEntity.m_Index & 0x1FF];
        if ( v13 != 0 && v9 == v13->m_EHandle.m_Index )
          v10 = v13->m_pInstance;
      }
    }
    return m_Data < CEntityInstance::GetEntityIndex(v10).m_Data;
  }
  return result;
}


// GetPhysSaveRestoreBlockHandler  (line 563, @0x00000000022dc7c0, libserver.so)
// callers: CEntity2SaveRestore::LoadAdjacentEnts, CSource2Server::Shutdown, CSource2Server::Init
// globals: g_PhysSaveRestoreBlockHandler
ISaveRestoreBlockHandler *__cdecl GetPhysSaveRestoreBlockHandler()
{
  return &g_PhysSaveRestoreBlockHandler;
}


// CPhysObjSaveRestoreOps::Save  (line 595, @0x00000000023195a0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlSymbolLarge, Construct<CPhysSaveRestoreBlockHandler::QueuedItem_t>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Insert, IsValidEntityPointer, PercolateUp, PhysObjectHeader_t, QueueSave, QueuedItem_t, Set, Swap, memset, operator(), operator=, operator[]
// calls: CGameSaveRestoreInfo::GetCurrentEntityContext, CGameEntitySystem::IsEntityPtr, AllocPooledString, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int>::Grow
void __fastcall CPhysObjSaveRestoreOps::Save(
        CPhysObjSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  CGameSaveRestoreInfo *v5; // rax
  CEntityInstance *CurrentEntityContext; // rbx
  PhysInterfaceId_t m_type; // r12d
  void **pField; // r15
  typedescription_t *pTypeDesc; // r14
  char v10; // r8
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // si
  int v13; // ecx
  int fieldSize; // eax
  int m_Size; // r13d
  int v16; // eax
  __int64 v17; // rdx
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v18; // rax
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v19; // r8
  bool v20; // cc
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v21; // rax
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v22; // rdx
  PhysInterfaceId_t type; // r11d
  uint32 m_Index; // r10d
  UtlSymLargeId_t m_Id; // r9
  int nObjects; // r8d
  UtlSymLargeId_t v27; // rdi
  vec_t x; // xmm6_4
  vec_t y; // xmm5_4
  vec_t z; // xmm4_4
  vec_t v31; // xmm3_4
  vec_t v32; // xmm2_4
  vec_t v33; // xmm1_4
  int iCollide; // esi
  void **ppPhysObj; // rcx
  CPhysSaveRestoreBlockHandler::QueuedItem_t *v36; // rax
  float v37; // xmm0_4
  __int64 v38; // r12
  __int64 v39; // r14
  _QWORD v40[8]; // [rsp+0h] [rbp-D0h] BYREF
  void **v41; // [rsp+40h] [rbp-90h]
  __int64 v42[7]; // [rsp+50h] [rbp-80h] BYREF
  float radius; // [rsp+88h] [rbp-48h]

  v5 = (*(pSave->_vptr_ISave + 73))(pSave);
  CurrentEntityContext = CGameSaveRestoreInfo::GetCurrentEntityContext(v5);
  CGameEntitySystem::IsEntityPtr(g_pGameEntitySystem, CurrentEntityContext);
  m_type = this->m_type;
  if ( m_type != PhysInterfaceId_t::PIID_UNKNOWN )
  {
    pField = fieldInfo->pField;
    pTypeDesc = fieldInfo->pTypeDesc;
    if ( CurrentEntityContext != 0 )
    {
      v10 = (*(CurrentEntityContext->_vptr_IHandleEntity + 48))(CurrentEntityContext);
      v41 = pField;
      memset(v40, 0, sizeof(v40));
      m_pEntity = CurrentEntityContext->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v12 = 0x7FFF;
        v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        WORD2(v40[0]) = v12 | WORD2(v40[0]) & 0x8000;
        HIDWORD(v40[0]) = (v13 << 15) | WORD2(v40[0]) & 0x7FFF;
      }
      else
      {
        HIDWORD(v40[0]) = -1;
      }
      fieldSize = 0;
      LODWORD(v40[0]) = m_type;
      if ( v10 != 0 )
        fieldSize = pTypeDesc->fieldSize;
      LODWORD(v40[2]) = fieldSize;
      AllocPooledString(v42, pTypeDesc->fieldName);
      m_Size = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Size;
      memset(&v40[3], 0, 36);
      v40[1] = v42[0];
      v16 = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Size;
      if ( g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Size == g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Grow(
          &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory,
          1);
        v16 = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Size;
      }
      v17 = m_Size;
      g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Size = v16 + 1;
      v18 = 0;
      v19 = &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[m_Size];
      if ( v19 != 0 )
      {
        memset(v19, 0, 0x40u);
        v18 = &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[m_Size];
      }
      *&v18->header.type = v40[0];
      v18->header.fieldName.u.m_Id = v40[1];
      v18->header.nObjects = v40[2];
      v20 = m_Size < g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Size;
      v18->header.modelName.u.m_Id = v40[3];
      *&v18->header.bbox.mins.x = v40[4];
      *&v18->header.bbox.mins.z = v40[5];
      *&v18->header.bbox.maxs.y = v40[6];
      *&v18->header.sphere.radius = v40[7];
      v18->ppPhysObj = v41;
      if ( v20 && m_Size != 0 )
      {
        while ( 1 )
        {
          v38 = v17;
          m_Size = (m_Size + 1) / 2 - 1;
          v39 = m_Size;
          if ( g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_LessFunc(
                 &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v17],
                 &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39]) )
          {
            break;
          }
          v21 = &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39];
          v22 = &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v38];
          type = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[m_Size].header.type;
          m_Index = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.hEntity.m_Index;
          m_Id = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.fieldName.u.m_Id;
          nObjects = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.nObjects;
          v27 = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.modelName.u.m_Id;
          x = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.bbox.mins.x;
          y = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.bbox.mins.y;
          z = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.bbox.mins.z;
          v31 = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.bbox.maxs.x;
          v32 = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.bbox.maxs.y;
          v33 = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.bbox.maxs.z;
          radius = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.sphere.radius;
          iCollide = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].header.iCollide;
          ppPhysObj = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v39].ppPhysObj;
          v21->header.type = g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v38].header.type;
          v21->header.hEntity.m_Index = v22->header.hEntity.m_Index;
          v21->header.fieldName.u.m_Id = v22->header.fieldName.u.m_Id;
          v21->header.nObjects = v22->header.nObjects;
          v21->header.modelName.u.m_Id = v22->header.modelName.u.m_Id;
          v21->header.bbox.mins.x = v22->header.bbox.mins.x;
          v21->header.bbox.mins.y = v22->header.bbox.mins.y;
          v21->header.bbox.mins.z = v22->header.bbox.mins.z;
          v21->header.bbox.maxs.x = v22->header.bbox.maxs.x;
          v21->header.bbox.maxs.y = v22->header.bbox.maxs.y;
          v21->header.bbox.maxs.z = v22->header.bbox.maxs.z;
          v21->header.sphere.radius = v22->header.sphere.radius;
          v21->header.iCollide = v22->header.iCollide;
          v21->ppPhysObj = v22->ppPhysObj;
          v36 = &g_PhysSaveRestoreBlockHandler.m_QueuedSaves.m_heap.m_Memory.m_pMemory[v38];
          v36->header.type = type;
          v36->header.hEntity.m_Index = m_Index;
          v36->header.fieldName.u.m_Id = m_Id;
          v36->header.nObjects = nObjects;
          v36->header.modelName.u.m_Id = v27;
          v36->header.bbox.mins.x = x;
          v36->header.bbox.mins.y = y;
          v36->header.bbox.mins.z = z;
          v36->header.bbox.maxs.x = v31;
          v36->header.bbox.maxs.y = v32;
          v36->header.bbox.maxs.z = v33;
          v37 = radius;
          v36->header.iCollide = iCollide;
          v36->ppPhysObj = ppPhysObj;
          v36->header.sphere.radius = v37;
          if ( m_Size == 0 )
            break;
          v17 = m_Size;
        }
      }
    }
  }
}


// CPhysObjSaveRestoreOps::Restore  (line 625, @0x000000000231e5d0, libserver.so)  // inlines: Add, AddToTail, CEntityRestoreSet, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CPhysSaveRestoreBlockHandler::QueuedItem_t>, Element, Find, FindInsertionPosition, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Insert, InsertAt, LeftChild, PhysObjectHeader_t, QueueRestore, QueuedItem_t, RightChild, Set, memset, operator(), operator=, operator[]
// calls: CGameSaveRestoreInfo::GetCurrentEntityContext, CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::Find, AllocPooledString, memset, operator new, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int>::Grow, CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int, CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
void __fastcall CPhysObjSaveRestoreOps::Restore(
        CPhysObjSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CGameSaveRestoreInfo *v5; // rax
  CEntityInstance *CurrentEntityContext; // rax
  PhysInterfaceId_t m_type; // ebx
  CBaseEntity *v8; // r12
  void *pField; // rax
  typedescription_t *pTypeDesc; // r15
  unsigned __int16 v11; // ax
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::ElemType_t elem; // r13
  __int64 m_Size; // r14
  int v14; // eax
  __int64 v15; // rdx
  char *v16; // r14
  __int64 v17; // rdx
  char *v18; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  CPhysSaveRestoreBlockHandler::CEntityRestoreSet *v22; // rax
  unsigned __int16 m_Left; // ax
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // r14
  char v26; // cl
  void *s; // [rsp+0h] [rbp-60h]
  unsigned __int16 isLeft; // [rsp+1Ch] [rbp-44h]
  bool isLefta; // [rsp+1Ch] [rbp-44h]
  CUtlMap<CBaseEntity*,CPhysSaveRestoreBlockHandler::CEntityRestoreSet*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  v5 = (*(pRestore->_vptr_IRestore + 51))(pRestore);
  CurrentEntityContext = CGameSaveRestoreInfo::GetCurrentEntityContext(v5);
  m_type = this->m_type;
  if ( m_type != PhysInterfaceId_t::PIID_UNKNOWN )
  {
    v8 = CurrentEntityContext;
    pField = fieldInfo->pField;
    pTypeDesc = fieldInfo->pTypeDesc;
    search.key = v8;
    s = pField;
    v11 = CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::Find(
            &g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree,
            &search);
    if ( v11 == 0xFFFF )
    {
      v22 = operator new(0x18u);
      v22->m_Size = 0;
      elem = v22;
      v22->m_Memory.m_pMemory = 0;
      v22->m_Memory.m_nAllocationCount = 0;
      v22->m_Memory.m_nGrowSize = 0;
      search.elem = v22;
      search.key = v8;
      isLeft = g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_Root;
      if ( g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_Root == 0xFFFF )
      {
        v25 = -1;
        v26 = 0;
      }
      else
      {
        while ( 1 )
        {
          if ( g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_LessFunc.m_LessFunc(
                 &search.key,
                 &g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_Elements.m_pMemory[isLeft].m_Data.key) )
          {
            m_Left = g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_Elements.m_pMemory[isLeft].m_Left;
            v26 = 1;
          }
          else
          {
            m_Left = g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_Elements.m_pMemory[isLeft].m_Right;
            v26 = 0;
          }
          if ( m_Left == 0xFFFF )
            break;
          isLeft = m_Left;
        }
        v25 = isLeft;
      }
      isLefta = v26;
      v24 = CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree,
              &search);
      CUtlRBTree<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short,CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity *,CPhysSaveRestoreBlockHandler::CEntityRestoreSet *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree,
        v24,
        v25,
        isLefta);
      ++g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_NumElements;
    }
    else
    {
      elem = g_PhysSaveRestoreBlockHandler.m_QueuedRestores.m_Tree.m_Elements.m_pMemory[v11].m_Data.elem;
    }
    m_Size = elem->m_Size;
    v14 = elem->m_Size;
    if ( m_Size == elem->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t,int>::Grow(&elem->m_Memory, 1);
      v14 = elem->m_Size;
    }
    v15 = 9 * m_Size;
    v16 = 0;
    v17 = 8 * v15;
    elem->m_Size = v14 + 1;
    v18 = elem->m_Memory.m_pMemory + v17;
    if ( v18 != 0 )
    {
      memset(v18, 0, 0x40u);
      v16 = elem->m_Memory.m_pMemory + v17;
    }
    *(v16 + 8) = s;
    if ( v8 != 0 && (m_pEntity = v8->m_pEntity) != 0 )
    {
      v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v21 = 0x7FFF;
      else
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *(v16 + 2) = v21 | *(v16 + 2) & 0x8000;
      *(v16 + 1) = (v20 << 15) | *(v16 + 1) & 0x7FFF;
    }
    else
    {
      *(v16 + 1) = -1;
    }
    *v16 = m_type;
    *(v16 + 4) = pTypeDesc->fieldSize;
    AllocPooledString(&search, pTypeDesc->fieldName);
    *(v16 + 1) = search.key;
    memset(s, 0, 8LL * pTypeDesc->fieldSize);
  }
}


// CPhysObjSaveRestoreOps::MakeEmpty  (line 655, @0x0000000002305da0, libserver.so)  // inlines: memset
// calls: memset
void __fastcall CPhysObjSaveRestoreOps::MakeEmpty(
        CPhysObjSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  memset(fieldInfo->pField, 0, 8LL * fieldInfo->pTypeDesc->fieldSize);
}


// CPhysObjSaveRestoreOps::IsEmpty  (line 660, @0x0000000002304270, libserver.so)
bool __fastcall CPhysObjSaveRestoreOps::IsEmpty(
        CPhysObjSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  _QWORD *pField; // rdx
  int fieldSize; // ecx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  pField = fieldInfo->pField;
  fieldSize = fieldInfo->pTypeDesc->fieldSize;
  if ( fieldSize == 0 )
    return 1;
  if ( *pField == 0 )
  {
    v4 = 0;
    v5 = 8LL * (fieldSize - 1);
    while ( v4 != v5 )
    {
      v4 += 8LL;
      if ( pField[v4 / 8] != 0 )
        return 0;
    }
    return 1;
  }
  return 0;
}


// GetPhysObjSaveRestoreOps  (line 682, @0x00000000022dc7d0, libserver.so)
// callers: DataMapInit<CModelState>, DataMapInit<CEnvShake>, DataMapInit<CPropVRTrackedObject>, DataMapInit<CRagdoll>, DataMapInit<CPropVehicle>
// globals: GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited, g_PhysObjSaveRestoreOps
ISaveRestoreOps *__fastcall GetPhysObjSaveRestoreOps(PhysInterfaceId_t type)
{
  PhysInterfaceId_t *p_m_type; // rcx
  PhysInterfaceId_t i; // edx

  if ( !GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited )
  {
    GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited = 1;
    p_m_type = &g_PhysObjSaveRestoreOps[0].m_type;
    for ( i = PhysInterfaceId_t::PIID_UNKNOWN; i != PhysInterfaceId_t::PIID_NUM_TYPES; ++i )
    {
      *p_m_type = i;
      p_m_type += 4;
    }
  }
  return &g_PhysObjSaveRestoreOps[type];
}


