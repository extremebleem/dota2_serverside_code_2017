// Reconstructed from DWARF by pahole; not original source.

// src/entity2/entitysystem.cpp:78
class CEHandleSerializer : public CGameNetworkFieldSerializerBase<2, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	const char * GetSerializerName();

	// sizeof = 1
};

// src/entity2/entitysystem.cpp:135
class CEntityRootClassesInitializer {
	CEntityRootClassesInitializer();

	// sizeof = 1
};

// src/entity2/entitysystem.cpp:767
class CSchemaMetaOverrideIterator {
private:

	ClassIntrospectionHandle_t m_Class;  // +0x0
	int m_nOverrideIndex;  // +0x8
	CSchemaMetaOverrideIterator(ClassIntrospectionHandle_t);
	void Advance();
	bool IsValid();
	const char * GetFieldName();
	MetaTagOverrideStatus_t TagInfo<MKeyfieldname>(MetaTagOverrideInfo_t<MKeyfieldname> *);
	MetaTagOverrideStatus_t IsPresent<MGenerateArrayKeynames>(bool *);
	MetaTagOverrideStatus_t TagInfo<MGenerateArrayKeynamesFirstIndex>(MetaTagOverrideInfo_t<MGenerateArrayKeynamesFirstIndex> *);
	MetaTagOverrideStatus_t IsPresent<MIsWorldSpaceOrientation>(bool *);
	MetaTagOverrideStatus_t IsPresent<MIsWorldSpace>(bool *);

	// sizeof = 16
};

// src/entity2/entitysystem.cpp:4761
class CAttributeObjectPool {
private:

	CAttributeObjectPool();
	~CAttributeObjectPool();
	CRenderAttributesDoubleBuffered * New();
	void QueueDelete(CRenderAttributesDoubleBuffered *);
	void ProcessDeletionQueue();
	void SpewCounts();

	// sizeof = 32
};

// src/entity2/entitysystem.cpp:4993
struct variant_savestring_t {
	string_t iszString;  // +0x0
	variant_savestring_t();

	// sizeof = 8
};

// src/entity2/entitysystem.cpp:5012
struct variant_savevector_t {
	variant_savevector_t();

	// sizeof = 12
};

// src/entity2/entitysystem.cpp:5060
class CVariantSaveDataOps : public CDefSaveRestoreOps {
public:

	CVariantSaveDataOps(CVariantSaveDataOps &);
	CVariantSaveDataOps(const CVariantSaveDataOps &);
	CVariantSaveDataOps();

private:

	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// sizeof = 8
};

// src/entity2/entitysystem.cpp:5303
class CEventQueue_SaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler {
public:

private:

	bool m_fDoLoad;  // +0x8
	CEventQueue_SaveRestoreBlockHandler(CEventQueue_SaveRestoreBlockHandler &);
	CEventQueue_SaveRestoreBlockHandler(const CEventQueue_SaveRestoreBlockHandler &);
	CEventQueue_SaveRestoreBlockHandler();
	virtual const char * GetBlockName();
	virtual void Save(ISave *);
	virtual void WriteSaveHeaders(ISave *);
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);

	// vtable[0] GetBlockName
	// vtable[2] Save
	// vtable[3] WriteSaveHeaders
	// vtable[6] ReadRestoreHeaders
	// vtable[7] Restore
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityComponentHelperInit_CEntityComponent  (line 71, @0x00000000030ac040, libserver.so)
// callers: CEntityComponentHelperInit_CHitboxComponent, CEntityComponentHelperInit_CLightComponent, CEntityComponentHelperInit_CRenderComponent, CEntityComponentHelperInit_CBodyComponent, CEntityComponentHelperInit_CDamageComponent, CEntityComponentHelperInit_CHealthComponent, CEntityComponentHelperInit_CScriptComponent
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CEntityComponent()
{
  return 0;
}


// CEHandleSerializer::Serialize  (line 81, @0x00000000030bed10, libserver.so)  // inlines: GetSerialNumber, IsNetworkable, Set<long long unsigned int>, ToNetworkableInt
NetworkFieldResult_t __fastcall CEHandleSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  _DWORD *m_pFieldData; // rax
  int v4; // ecx
  int64 v5; // rax

  m_pFieldData = info->m_pFieldData;
  if ( m_pFieldData != 0 && (v4 = *m_pFieldData & 0x7FFF) <= 0x3FFF )
  {
    if ( *m_pFieldData == -1 )
      v5 = 0xFFFFFF;
    else
      v5 = v4 | (*m_pFieldData >> 1) & 0xFFC000;
    pOut->m_iVal64 = v5;
    pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_UINT64;
    pOut->m_nNumComponents = 1;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  else
  {
    pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_UINT64;
    pOut->m_nNumComponents = 1;
    pOut->m_iVal64 = 0xFFFFFF;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
}


// CEHandleSerializer::Unserialize  (line 97, @0x00000000030bed90, libserver.so)  // inlines: CEntityHandle, FromNetworkableInt, Init
NetworkFieldResult_t __fastcall CEHandleSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  int64 m_iVal64; // rdx
  _DWORD *m_pFieldData; // rcx

  m_iVal64 = pIn->m_iVal64;
  m_pFieldData = info->m_pFieldData;
  if ( m_iVal64 == 0xFFFFFF )
    *m_pFieldData = -1;
  else
    *m_pFieldData = (2 * m_iVal64) & 0x1FF8000 | m_iVal64 & 0x3FFF;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CEHandleSerializer::GetEntityReportDescString  (line 107, @0x00000000030bf040, libserver.so)  // inlines: CEntityHandle, FromNetworkableInt, GetEntryIndex, GetSerialNumber, Init
// calls: CUtlString::Format, CUtlString::operator=
// strings: "%d (s/n %d)"
bool __fastcall CEHandleSerializer::GetEntityReportDescString(const NetworkableData_t *pData, CUtlString *const desc)
{
  int64 m_iVal64; // rcx
  int v3; // edx
  unsigned int v4; // ecx

  m_iVal64 = pData->m_iVal64;
  if ( pData->m_iVal64 == 0xFFFFFF )
  {
    CUtlString::operator=(desc, "NULL");
  }
  else
  {
    if ( m_iVal64 == 0xFFFFFF )
    {
      v4 = 0x1FFFF;
      v3 = 0x7FFF;
    }
    else
    {
      v3 = m_iVal64 & 0x3FFF;
      v4 = (m_iVal64 >> 14) & 0x3FF;
    }
    CUtlString::Format(desc, "%d (s/n %d)", v3, v4);
  }
  return 1;
}


// CEHandleSerializer::GetSerializerName  (line 124, @0x00000000030bee00, libserver.so)
const char *__cdecl CEHandleSerializer::GetSerializerName()
{
  return "ehandle";
}


// InitCEHandleSerializerFieldSerializer  (line 130, @0x00000000030aa590, libserver.so)
// globals: CValidatingNetworkFieldSerializer<CEHandleSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CEHandleSerializer::GetSerializerName(void), CEHandleSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CEHandleSerializer::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<2,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<2,1>::GetDataSize(NetworkFieldInfo_t const&), CEHandleSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCEHandleSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "ehandle",
    mode,
    2,
    1,
    CEHandleSerializer::Serialize,
    CEHandleSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<2,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<2,1>::ParseData,
    CEHandleSerializer::GetEntityReportDescString,
    CEHandleSerializer::GetSerializerName,
    CEHandleSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CEHandleSerializer>::ValidatingUnserialize);
}


// InitCEntityHandleAtomicTypeSerializerOverideHelper  (line 131, @0x00000000030aa620, libserver.so)
void __fastcall InitCEntityHandleAtomicTypeSerializerOverideHelper(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 232LL))(g_pNetworkMessages, 5000, "ehandle");
}


// InitCHandleAtomicTypeSerializerOverideHelper  (line 132, @0x00000000030aa650, libserver.so)
void __fastcall InitCHandleAtomicTypeSerializerOverideHelper(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 232LL))(g_pNetworkMessages, 5003, "ehandle");
}


// CEntityRootClassesInitializer::CEntityRootClassesInitializer  (line 138, @0x00000000030c2680, libserver.so)  // inlines: CEntityClass, CEntityHandle, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, Purge, RemoveAll, SetClassInfo, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CEntityInstance::SetupEntClassInputs, CEntityInstance::InitScriptDesc, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I_entitysystem.cpp
// globals: `guard variable for'CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass, g_EntityRootClassInfo, CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEntityClass::~CEntityClass()
void __fastcall CEntityRootClassesInitializer::CEntityRootClassesInitializer(CEntityRootClassesInitializer *const this)
{
  CEntityClass *v1; // rbx
  CEntityClass *v2; // rax

  if ( `guard variable for'CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass) != 0 )
  {
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass._vptr_CEntityClass = off_3F79390;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_designerName.u.m_Id = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_ComponentOffsets.m_Size = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_AllHelpers.m_Size = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v2 = &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass;
    do
    {
      v2->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v2 = (v2 + 16);
      v2->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v2 != &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classInputs.m_Size = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classOutputs.m_Size = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_requiredEHandle.m_Index = -1;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_hNetworkSerializer = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pBaseClassInfo = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pClassInfo = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_flags = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_nAllHelpersFlags = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pScriptClassDesc = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pInputs = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_nInputCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pOutputs = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_nOutputCount = 0;
    CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pGameClass = 0;
    __cxa_guard_release(&`guard variable for'CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass);
    __cxa_atexit(
      CEntityClass::~CEntityClass,
      &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass,
      &_dso_handle);
  }
  CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pBaseClassInfo = 0;
  CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass.m_pClassInfo = &g_EntityRootClassInfo;
  g_EntityRootClassInfo.m_pClass = &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass;
  g_pEntityRootClass = &CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass;
  CEntityInstance::SetupEntClassInputs(&CEntityRootClassesInitializer::CEntityRootClassesInitializer(void)::g_EntityRootClass);
  v1 = g_pEntityRootClass;
  v1->m_pScriptClassDesc = CEntityInstance::InitScriptDesc();
}


// CEntitySystem::CreateEntitySystem  (line 148, @0x00000000030bbd70, libserver.so)  // inlines: PostCreateEntitySystem
// calls: operator new, CEntitySystem::CEntitySystem, CEntitySystem::Init, operator delete, _Unwind_Resume
// globals: CEntitySystem::s_nInitCount, g_pEntitySystem
void __fastcall CEntitySystem::CreateEntitySystem(
        const char *pName,
        EntitySystemType_t type,
        IEntityIONotify *pEntityIONotify,
        NetworkSerializationMode_t nMode,
        bool bActivateDebugHelpers)
{
  CEntitySystem *pMem; // [rsp+8h] [rbp-38h]

  if ( CEntitySystem::s_nInitCount++ <= 0 )
  {
    pMem = operator new(0x1A060u);
    CEntitySystem::CEntitySystem(pMem);
    g_pEntitySystem = pMem;
    CEntitySystem::Init(pMem, pName, type, pEntityIONotify, nMode, bActivateDebugHelpers);
  }
}


// CEntitySystem::PostCreateEntitySystem  (line 157, @0x00000000030bbd50, libserver.so)
// calls: CEntitySystem::Init
// callers: CSource2EntitySystem::StaticInit
// globals: g_pEntitySystem
void __fastcall CEntitySystem::PostCreateEntitySystem(
        CEntitySystem *pEntitySystem,
        const char *pName,
        EntitySystemType_t type,
        IEntityIONotify *pEntityIONotify,
        NetworkSerializationMode_t nMode,
        bool bActivateDebugHelpers)
{
  g_pEntitySystem = pEntitySystem;
  CEntitySystem::Init(pEntitySystem, pName, type, pEntityIONotify, nMode, bActivateDebugHelpers);
}


// CEntitySystem::DestroyEntitySystem  (line 163, @0x00000000030bb020, libserver.so)
// calls: CEntitySystem::Shutdown
// callers: CSource2EntitySystem::StaticShutdown
// globals: CEntitySystem::s_nInitCount, g_pEntitySystem
void __cdecl CEntitySystem::DestroyEntitySystem()
{
  if ( --CEntitySystem::s_nInitCount <= 0 && g_pEntitySystem != 0 )
  {
    CEntitySystem::Shutdown(g_pEntitySystem);
    if ( g_pEntitySystem != 0 )
      (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 11))(g_pEntitySystem);
    g_pEntitySystem = 0;
  }
}


// CEntitySystem::CEntitySystem  (line 182, @0x00000000030b21a0, libserver.so)  // inlines: CBitVec, CBitVecT, CCallQueue, CCallQueueT, CConcreteEntityList, CEntityHandle, CInterlockedIntT, CList, CTSListBase, CTSQueue, CThreadMutex, CThreadSpinRWLock, CThreadsafeTree, CUtlAbstractDelegate, CUtlDelegate, CUtlMap, CUtlMemory, CUtlMemoryPool, CUtlRBTree, CUtlScratchMemoryPoolFixedGrowable, CUtlSymbolLarge, CUtlSymbolTableLargeBase, CUtlTSHash, CUtlTSHashBase, CUtlVector, CUtlVectorBase, CVariantBase, Clear, ClearAll, ClosurePtr, EntityIOQueuePrioritizedEvent_t, FastDelegate2, HashBucket_t, Purge, RemoveAll, ResetDbgInfo, SetEntityLimits, SetEntityLimitsFromCurrentState, SetLessFunc, SetToIdentity, Term, ThreadInterlockedExchange, V_memset, memset, operator=, ~CCallQueue, ~CCallQueueT, ~CConcreteEntityList, ~CEntityIdentity, ~CScriptAccessorT, ~CTSListBase, ~CThreadMutex, ~CUtlMap, ~CUtlMemory, ~CUtlScratchMemoryPoolFixedGrowable, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EntityIOQueuePrioritizedEvent_t
// calls: memset, KeyValues::FindKey, KeyValues::GetInt, CConcreteEntityList::FreeEntity, operator delete [], CConcreteEntityList::AllocEntityChunk, operator new, pthread_mutexattr_init, pthread_mutexattr_settype, pthread_mutex_init, CUtlScratchMemoryPool::CUtlScratchMemoryPool, CUtlMemoryPoolBase::CUtlMemoryPoolBase (34 total)
// callers: CGameEntitySystem::CGameEntitySystem, CEntitySystem::CreateEntitySystem
// strings: "Engine2", "MaxNetworkableEntities", "MaxNonNetworkableEntities", "WARNING: Ignoring invalid gameinfo MaxNonNetworkableEntities %d\n", "WARNING: Ignoring invalid gameinfo MaxNetworkableEntities %d\n"
// globals: CDefOps<CUtlSymbolLarge>::LessFunc(CUtlSymbolLarge const&,CUtlSymbolLarge const&), FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CEntitySystem::CEntitySystem(CEntitySystem *const this)
{
  CConcreteEntityList *p_m_EntityList; // rbx
  CBitVec<16384> *p_m_PVSBits; // r14
  KeyValues *v4; // rax
  KeyValues *Key; // rax
  KeyValues *v6; // r13
  int Int; // r14d
  int v8; // r13d
  CEntityIdentity *m_pHead; // rsi
  CEntityIdentity *m_pNext; // r15
  CEntityIdentity *v11; // rsi
  CEntityIdentity *v12; // r15
  __int64 v13; // r15
  CEntityIdentity *v14; // rdi
  CEntityIdentity *v15; // r8
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rdx
  V_uuid_t *v19; // rdi
  CTSQueue<CFunctor*,false>::Node_t *v20; // rax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *m_aBuckets; // rcx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *v22; // rdx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *i; // rax
  __int64 v24; // rdx
  bool v25; // zf
  CBitVec<16384> *s; // [rsp+18h] [rbp-38h]

  p_m_EntityList = &this->m_EntityList;
  this->_vptr_IEntityResourceManifestBuilder = &off_47C30D0;
  this->m_EntityList.m_usedList.m_pHead = 0;
  this->m_EntityList.m_usedList.m_pTail = 0;
  this->m_EntityList.m_dormantList.m_pHead = 0;
  this->m_EntityList.m_dormantList.m_pTail = 0;
  this->m_EntityList.m_freeNetworkableList.m_pHead = 0;
  this->m_EntityList.m_freeNetworkableList.m_pTail = 0;
  this->m_EntityList.m_freeNonNetworkableList.m_pHead = 0;
  this->m_EntityList.m_freeNonNetworkableList.m_pTail = 0;
  p_m_PVSBits = &this->m_EntityList.m_PVSBits;
  s = &this->m_EntityList.m_PVSBits;
  memset(&this->m_EntityList.m_PVSBits, 0, sizeof(this->m_EntityList.m_PVSBits));
  this->m_EntityList.m_nMaxPlayers = 0;
  this->m_EntityList.m_pFirstActiveEntity = 0;
  memset(p_m_PVSBits, 0, sizeof(CBitVec<16384>));
  memset(this->m_EntityList.m_pIdentityChunks, 0, sizeof(this->m_EntityList.m_pIdentityChunks));
  memset(this->m_EntityList.m_pEntityIdChunks, 0, sizeof(this->m_EntityList.m_pEntityIdChunks));
  if ( g_pApplication != 0
    && (v4 = (*(g_pApplication->_vptr_IAppSystem + 19))(g_pApplication)) != 0
    && (Key = KeyValues::FindKey(v4, "Engine2", 0), v6 = Key, Key != 0) )
  {
    Int = KeyValues::GetInt(Key, "MaxNetworkableEntities", 0x4000);
    if ( (Int - 1) > 0x3FFF )
    {
      Warning("WARNING: Ignoring invalid gameinfo MaxNetworkableEntities %d\n", Int);
      Int = 0x4000;
    }
    v8 = KeyValues::GetInt(v6, "MaxNonNetworkableEntities", 0x4000);
    if ( (v8 - 1) > 0x3FFF )
    {
      Warning("WARNING: Ignoring invalid gameinfo MaxNonNetworkableEntities %d\n", v8);
      v8 = 0x4000;
    }
  }
  else
  {
    v8 = 0x4000;
    Int = 0x4000;
  }
  m_pHead = this->m_EntityList.m_dormantList.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      CConcreteEntityList::FreeEntity(p_m_EntityList, m_pHead, 1);
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v11 = this->m_EntityList.m_usedList.m_pHead;
  if ( v11 != 0 )
  {
    while ( 1 )
    {
      v12 = v11->m_pNext;
      CConcreteEntityList::FreeEntity(p_m_EntityList, v11, 1);
      if ( v12 == 0 )
        break;
      v11 = v12;
    }
  }
  this->m_EntityList.m_pFirstActiveEntity = 0;
  v13 = 0;
  this->m_EntityList.m_freeNetworkableList.m_pHead = 0;
  this->m_EntityList.m_freeNetworkableList.m_pTail = 0;
  this->m_EntityList.m_freeNonNetworkableList.m_pHead = 0;
  this->m_EntityList.m_freeNonNetworkableList.m_pTail = 0;
  do
  {
    v14 = p_m_EntityList->m_pIdentityChunks[v13];
    if ( v14 != 0 )
    {
      v15 = &v14[v14[-1].m_pId];
      if ( v14 != v15 )
      {
        v16 = v15 - 1;
        do
        {
          v17 = v16;
          v18 = v16--;
          v17->m_hPublicScope.m_hScope = 0;
          v14 = p_m_EntityList->m_pIdentityChunks[v13];
        }
        while ( v14 != v18 );
      }
      operator delete[](&v14[-1].m_pId);
    }
    v19 = p_m_EntityList->m_pEntityIdChunks[v13];
    if ( v19 != 0 )
      operator delete[](v19);
    ++v13;
  }
  while ( v13 != 64 );
  memset(this->m_EntityList.m_pIdentityChunks, 0, sizeof(this->m_EntityList.m_pIdentityChunks));
  memset(this->m_EntityList.m_pEntityIdChunks, 0, sizeof(this->m_EntityList.m_pEntityIdChunks));
  memset(s, 0, sizeof(CBitVec<16384>));
  this->m_EntityList.m_nNonNetworkableEntityLimit = v8;
  this->m_EntityList.m_nNetworkableEntityLimit = Int;
  CConcreteEntityList::AllocEntityChunk(p_m_EntityList, 1);
  CConcreteEntityList::AllocEntityChunk(p_m_EntityList, 0);
  this->m_callQueue.m_queue.m_Count.m_value = 0;
  this->m_callQueue.m_queue.m_FreeNodes.m_Head.value.Next = 0;
  *(&this->m_callQueue.m_queue.m_FreeNodes.m_Head.value64x128 + 1) = 0;
  _InterlockedExchange(&this->m_callQueue.m_queue.m_Count.m_value, 0);
  this->m_callQueue.m_queue.m_Tail.value.sequence = 0;
  this->m_callQueue.m_queue.m_Head.value.sequence = 0;
  v20 = operator new(0x10u);
  this->m_callQueue.m_queue.m_Tail.value.pNode = v20;
  this->m_callQueue.m_queue.m_Head.value.pNode = v20;
  v20->pNext = &this->m_callQueue;
  this->m_ComponentTypesByName.m_Tree.m_Root = -1;
  this->m_ComponentTypesByName.m_Tree.m_NumElements = 0;
  this->m_ComponentTypesByName.m_Tree.m_FirstFree = -1;
  this->m_ComponentTypesByName.m_Tree.m_LastAlloc.index = -1;
  this->m_EntityByNameMap.m_Tree.m_LessFunc.m_LessFunc = CDefOps<CUtlSymbolLarge>::LessFunc;
  this->m_ClassesByName.m_Tree.m_FirstFree = -1;
  this->m_ClassesByName.m_Tree.m_LastAlloc.index = -1;
  this->m_ClassesByDesignName.m_Tree.m_Root = -1;
  this->m_ClassesByDesignName.m_Tree.m_NumElements = 0;
  this->m_ClassesByName.m_Tree.m_Root = -1;
  this->m_callQueue.m_nRefCount = 0;
  this->m_ClassesByName.m_Tree.m_NumElements = 0;
  this->m_ClassesByDesignName.m_Tree.m_FirstFree = -1;
  this->m_ClassesByDesignName.m_Tree.m_LastAlloc.index = -1;
  this->m_callQueue.m_bNoQueue = 0;
  this->m_ClassesByName.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_ClassesByName.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ClassesByName.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ClassesByName.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ClassesByName.m_Tree.m_pElements = 0;
  this->m_ClassesByDesignName.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_ClassesByDesignName.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ClassesByDesignName.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ClassesByDesignName.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ClassesByDesignName.m_Tree.m_pElements = 0;
  this->m_ComponentTypesByName.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ComponentTypesByName.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ComponentTypesByName.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ComponentTypesByName.m_Tree.m_pElements = 0;
  this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory = 0;
  this->m_EntityByNameMap.m_Tree.m_Root = -1;
  this->m_EntityByNameMap.m_Tree.m_FirstFree = -1;
  this->m_EntityByNameMap.m_Tree.m_LastAlloc.index = -1;
  this->m_EntityByNameMap.m_Tree.m_NumElements = 0;
  this->m_EntityByNameMap.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_EntityByNameMap.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_EntityByNameMap.m_Tree.m_pElements = 0;
  pthread_mutexattr_init(&this->m_eventQueueMutex.m_Attr);
  pthread_mutexattr_settype(&this->m_eventQueueMutex.m_Attr, 1);
  pthread_mutex_init(&this->m_eventQueueMutex.m_Mutex, &this->m_eventQueueMutex.m_Attr);
  this->m_events.m_variantValue.m_flags = 0;
  this->m_events.m_pTarget.u.m_Id = 0;
  this->m_events.m_pTargetInput.u.m_Id = 0;
  this->m_events.m_hActivator.m_Index = -1;
  this->m_events.m_hCaller.m_Index = -1;
  this->m_events.m_hEntTarget.m_Index = -1;
  this->m_events.m_variantValue.m_type = 0;
  this->m_events.m_variantValue.m_uint64 = 0;
  this->m_nQueueSetInPVSCallsDepth = 0;
  this->m_flChangeCallbackMsecLimit = 0.0;
  this->m_QueuedCreates.m_Size = 0;
  this->m_QueuedCreates.m_Memory.m_pMemory = 0;
  this->m_QueuedCreates.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedCreates.m_Memory.m_nGrowSize = 0;
  this->m_QueuedPostDataUpdates.m_Size = 0;
  this->m_QueuedPostDataUpdates.m_Memory.m_pMemory = 0;
  this->m_QueuedPostDataUpdates.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedPostDataUpdates.m_Memory.m_nGrowSize = 0;
  this->m_QueuedDestroys.m_Size = 0;
  this->m_QueuedDestroys.m_Memory.m_pMemory = 0;
  this->m_QueuedDestroys.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedDestroys.m_Memory.m_nGrowSize = 0;
  this->m_QueuedDeallocation.m_Size = 0;
  this->m_QueuedDeallocation.m_Memory.m_pMemory = 0;
  this->m_QueuedDeallocation.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedDeallocation.m_Memory.m_nGrowSize = 0;
  this->m_QueuedSetInPVSChanges.m_Size = 0;
  this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory = 0;
  this->m_QueuedSetInPVSChanges.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedSetInPVSChanges.m_Memory.m_nGrowSize = 0;
  this->m_creationDelegates.m_Size = 0;
  this->m_creationDelegates.m_Memory.m_pMemory = 0;
  this->m_creationDelegates.m_Memory.m_nAllocationCount = 0;
  this->m_creationDelegates.m_Memory.m_nGrowSize = 0;
  this->m_postSpawnDelegate.m_Closure.m_pthis = 0;
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__delta = 0;
  this->m_pChangeCallbackTimeLimitSpewFunc = 0;
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(&this->m_unserializerData);
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(
    &this->m_entitySpawnerData,
    4000,
    this->m_entitySpawnerData.m_initialAllocationMemory,
    0);
  CUtlMemoryPoolBase::CUtlMemoryPoolBase(
    &this->m_pooledStrings.m_Lookup.m_EntryMemory,
    24,
    32,
    8,
    MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
    0);
  m_aBuckets = this->m_pooledStrings.m_Lookup.m_aBuckets;
  v22 = this->m_pooledStrings.m_Lookup.m_aBuckets;
  for ( i = this->m_pooledStrings.m_Lookup.m_aBuckets; ; i = v22 )
  {
    v22->m_nWriters.m_value = 0;
    ++v22;
    i->m_lockInfo.m_writerId = 0;
    i->m_lockInfo.m_nReaders = 0;
    *&i->m_nWriters.m_value = 0;
    i->m_pFirst = 0;
    if ( v22 == (&off_19EF0 + this) )
      break;
  }
  this->m_pooledStrings.m_Lookup.m_ContentionCheck.m_value = 0;
  _InterlockedExchange(&this->m_pooledStrings.m_Lookup.m_ContentionCheck.m_value, 0);
  v24 = 0;
  *(&off_19EF0 + this) = 0;
  while ( 1 )
  {
    m_aBuckets->m_pFirst = 0;
    m_aBuckets->m_pFirstUncommitted = 0;
    if ( (v24 * 48 + 48) == &off_18000 )
      break;
    m_aBuckets = &this->m_pooledStrings.m_Lookup.m_aBuckets[++v24];
  }
  v25 = this->m_ClassesByName.m_Tree.m_LessFunc.m_LessFunc == 0;
  *(&dword_19F00 + this) = 0;
  *(&stru_19F08.r_offset + this) = 0;
  this->m_pooledStrings.m_StringPools.m_Memory.m_nAllocationCount = 0;
  this->m_pooledStrings.m_StringPools.m_Memory.m_nGrowSize = 8;
  this->m_bProfilingResourceSystem = 0;
  this->m_nEntitySpawnerDataUseCount = 0;
  this->m_pCurrentManifest = 0;
  this->m_bAutoExecuteQueuedDeletion = 0;
  this->m_nDestroyImmediateSuppressCount = 0;
  this->m_nAutoDeletionSuppressCount = 0;
  this->m_bPerformDeletionPostCreation = 0;
  this->m_bPerformDeallocationPostCreation = 0;
  this->m_nQueuedDestructionDepth = 0;
  this->m_pEntityIONotify = 0;
  this->m_postSpawnDelegate.m_Closure.m_pthis = 0;
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__delta = 0;
  this->m_nQueuedCreationDepth = 0;
  this->m_events.m_flFireTime = -3.4028235e38;
  this->m_events.m_pNext = 0;
  this->m_pszName = 0;
  this->m_bInvokePostDataUpdates = 0;
  this->m_pQueuedNetworkChangeCallbacks = 0;
  this->m_pNetworkChangeCallbackData = 0;
  *(&stru_19F20.r_offset + this) = 0;
  this->m_bInRestoreActivation = 0;
  if ( !v25 )
  {
    if ( this->m_ClassesByDesignName.m_Tree.m_LessFunc.m_LessFunc != 0 )
      goto LABEL_33;
LABEL_37:
    v25 = this->m_ComponentTypesByName.m_Tree.m_LessFunc.m_LessFunc == 0;
    this->m_ClassesByDesignName.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
    if ( !v25 )
      goto LABEL_34;
LABEL_38:
    this->m_ComponentTypesByName.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
    goto LABEL_34;
  }
  v25 = this->m_ClassesByDesignName.m_Tree.m_LessFunc.m_LessFunc == 0;
  this->m_ClassesByName.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  if ( v25 )
    goto LABEL_37;
LABEL_33:
  if ( this->m_ComponentTypesByName.m_Tree.m_LessFunc.m_LessFunc == 0 )
    goto LABEL_38;
LABEL_34:
  this->m_ActiveSpawnGroupHandle = 0;
  SetIdentityMatrix(&this->m_vSpawnOriginOffset);
  memset(this->m_ppAccessors, 0, sizeof(this->m_ppAccessors));
}


// CEntitySystem::~CEntitySystem  (line 217, @0x00000000030af970, libserver.so)  // inlines: Clear, ClearAll, FinishPush, First, InterlockedCompareExchangeNodeLink, IsIdxValid, IsValidIndex, LeftChild, Next, Pop, Purge, RemoveAll, SetLeftChild, SetRightChild, Term, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, memset, operator--, operator==, operator[], ~CCallQueue, ~CCallQueueT, ~CConcreteEntityList, ~CEntityIdentity, ~CScriptAccessorT, ~CTSListBase, ~CTSQueue, ~CThreadMutex, ~CThreadsafeTree, ~CUtlMap, ~CUtlMemory, ~CUtlMemoryPool, ~CUtlRBTree, ~CUtlScratchMemoryPoolFixedGrowable, ~CUtlSymbolTableLargeBase, ~CUtlTSHash, ~CUtlTSHashBase, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EntityIOQueuePrioritizedEvent_t
// calls: CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::RemoveAll, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlScratchMemoryPool::~CUtlScratchMemoryPool, CUtlVectorBase<QueuedSetInPVSInfo_t, CUtlMemory<QueuedSetInPVSInfo_t, int> >::RemoveAll, CUtlVectorBase<PostDataUpdateInfo_t, CUtlMemory<PostDataUpdateInfo_t, int> >::RemoveAll, CUtlVectorBase<CEntitySystem::CreationInfo_t, CUtlMemory<CEntitySystem::CreationInfo_t, int> >::RemoveAll, CVariantBase<CVariantDefaultAllocator>::Free, pthread_mutex_destroy, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int>::Purge, CCallQueueT<CTSQueue<CFunctor*, false> >::Flush, operator delete (24 total)
// callers: CGameEntitySystem::~CGameEntitySystem, CGameEntitySystem::CGameEntitySystem, CEntitySystem::~CEntitySystem
void __fastcall CEntitySystem::~CEntitySystem(CEntitySystem *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // r15
  int v3; // r13d
  string_t_table *p_m_pooledStrings; // rbx
  __int64 v6; // rsi
  bool v7; // zf
  CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true>::StringPool_t*,int> *v8; // r13
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper*>::Node_t,short unsigned int> *v13; // rcx
  unsigned __int16 v14; // si
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *v18; // rcx
  unsigned __int16 v19; // si
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *v23; // rcx
  volatile signed __int64 *p_m_callQueue; // r15
  intp *p_sequence; // r14
  signed __int64 *pNode; // rdi
  signed __int64 v27; // rsi
  signed __int64 v28; // r10
  __int128 v29; // rt0
  __int128 v30; // rt0
  TSLHead_t m_Head; // rt0
  TSLNodeBase_t *Next; // rdi
  CTSQueue<CFunctor*,false>::Node_t *v33; // rdi
  CConcreteEntityList *p_m_EntityList; // r13
  CEntityIdentity *m_pHead; // rsi
  CEntityIdentity *m_pNext; // r12
  CEntityIdentity *v37; // rsi
  CEntityIdentity *v38; // r12
  __int64 v39; // r12
  CEntityIdentity *v40; // rdx
  CEntityIdentity *v41; // rsi
  CEntityIdentity *v42; // rax
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rcx
  V_uuid_t *v45; // rdi
  CEntitySystem *thisa; // [rsp+8h] [rbp-58h]

  v2 = 0;
  v3 = 0;
  this->_vptr_IEntityResourceManifestBuilder = &off_47C30D0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pszName);
  thisa = this;
  p_m_pooledStrings = &this->m_pooledStrings;
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::RemoveAll(&p_m_pooledStrings->m_Lookup);
  if ( thisa->m_pooledStrings.m_StringPools.m_Size > 0 )
  {
    do
    {
      ++v3;
      v6 = *(*(&stru_19F08.r_offset + thisa) + v2);
      v2 += 8;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
    }
    while ( v3 < thisa->m_pooledStrings.m_StringPools.m_Size );
  }
  v7 = (thisa->m_pooledStrings.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  v8 = (&stru_19F08 + thisa);
  thisa->m_pooledStrings.m_StringPools.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(v8);
    v7 = (thisa->m_pooledStrings.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    thisa->m_pooledStrings.m_StringPools.m_Size = 0;
    if ( v7 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(v8);
      if ( (thisa->m_pooledStrings.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(v8);
    }
  }
  else
  {
    thisa->m_pooledStrings.m_StringPools.m_Size = 0;
  }
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::RemoveAll(&p_m_pooledStrings->m_Lookup);
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&p_m_pooledStrings->m_Lookup.m_EntryMemory);
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&thisa->m_entitySpawnerData);
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&thisa->m_unserializerData);
  v7 = (thisa->m_creationDelegates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  thisa->m_creationDelegates.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CUtlDelegate<void ()(bool)>,int>::Purge(&thisa->m_creationDelegates.m_Memory);
    if ( (thisa->m_creationDelegates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlDelegate<void ()(bool)>,int>::Purge(&thisa->m_creationDelegates.m_Memory);
  }
  CUtlVectorBase<QueuedSetInPVSInfo_t,CUtlMemory<QueuedSetInPVSInfo_t,int>>::RemoveAll(&thisa->m_QueuedSetInPVSChanges);
  if ( (thisa->m_QueuedSetInPVSChanges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<QueuedSetInPVSInfo_t,int>::Purge(&thisa->m_QueuedSetInPVSChanges.m_Memory);
    if ( (thisa->m_QueuedSetInPVSChanges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<QueuedSetInPVSInfo_t,int>::Purge(&thisa->m_QueuedSetInPVSChanges.m_Memory);
  }
  v7 = (thisa->m_QueuedDeallocation.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  thisa->m_QueuedDeallocation.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<EntityDeletion_t,int>::Purge(&thisa->m_QueuedDeallocation.m_Memory);
    if ( (thisa->m_QueuedDeallocation.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<EntityDeletion_t,int>::Purge(&thisa->m_QueuedDeallocation.m_Memory);
  }
  v7 = (thisa->m_QueuedDestroys.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  thisa->m_QueuedDestroys.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<EntityDeletion_t,int>::Purge(&thisa->m_QueuedDestroys.m_Memory);
    if ( (thisa->m_QueuedDestroys.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<EntityDeletion_t,int>::Purge(&thisa->m_QueuedDestroys.m_Memory);
  }
  CUtlVectorBase<PostDataUpdateInfo_t,CUtlMemory<PostDataUpdateInfo_t,int>>::RemoveAll(&thisa->m_QueuedPostDataUpdates);
  if ( (thisa->m_QueuedPostDataUpdates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<PostDataUpdateInfo_t,int>::Purge(&thisa->m_QueuedPostDataUpdates.m_Memory);
    if ( (thisa->m_QueuedPostDataUpdates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<PostDataUpdateInfo_t,int>::Purge(&thisa->m_QueuedPostDataUpdates.m_Memory);
  }
  CUtlVectorBase<CEntitySystem::CreationInfo_t,CUtlMemory<CEntitySystem::CreationInfo_t,int>>::RemoveAll(&thisa->m_QueuedCreates);
  if ( (thisa->m_QueuedCreates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntitySystem::CreationInfo_t,int>::Purge(&thisa->m_QueuedCreates.m_Memory);
    if ( (thisa->m_QueuedCreates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntitySystem::CreationInfo_t,int>::Purge(&thisa->m_QueuedCreates.m_Memory);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&thisa->m_events.m_variantValue);
  pthread_mutex_destroy(&thisa->m_eventQueueMutex.m_Mutex);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&thisa->m_EntityByNameMap.m_Tree);
  if ( (thisa->m_EntityByNameMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&thisa->m_EntityByNameMap.m_Tree.m_Elements);
  index = thisa->m_ComponentTypesByName.m_Tree.m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = thisa->m_ComponentTypesByName.m_Tree.m_Elements.m_nAllocationCount;
    v11 = 0;
    v12 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v12 < m_nAllocationCount && v12 <= index )
        {
          v13 = &thisa->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[v11];
          if ( v12 != v13->m_Left )
          {
            v13->m_Right = thisa->m_ComponentTypesByName.m_Tree.m_FirstFree;
            thisa->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[v11].m_Left = v12;
            index = thisa->m_ComponentTypesByName.m_Tree.m_LastAlloc.index;
            thisa->m_ComponentTypesByName.m_Tree.m_FirstFree = v12;
          }
        }
        if ( v12 == index )
          break;
        m_nAllocationCount = thisa->m_ComponentTypesByName.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v12 + 1) >= m_nAllocationCount )
          break;
        ++v12;
        ++v11;
      }
      while ( v12 != 0xFFFF );
    }
    thisa->m_ComponentTypesByName.m_Tree.m_Root = -1;
    thisa->m_ComponentTypesByName.m_Tree.m_NumElements = 0;
  }
  thisa->m_ComponentTypesByName.m_Tree.m_FirstFree = -1;
  if ( (thisa->m_ComponentTypesByName.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
  {
    thisa->m_ComponentTypesByName.m_Tree.m_LastAlloc.index = -1;
  }
  else
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&thisa->m_ComponentTypesByName.m_Tree.m_Elements);
    v7 = (thisa->m_ComponentTypesByName.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    thisa->m_ComponentTypesByName.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&thisa->m_ComponentTypesByName.m_Tree.m_Elements);
  }
  v14 = thisa->m_ClassesByDesignName.m_Tree.m_LastAlloc.index;
  if ( v14 != 0xFFFF )
  {
    v15 = thisa->m_ClassesByDesignName.m_Tree.m_Elements.m_nAllocationCount;
    v16 = 0;
    v17 = 0;
    if ( v15 > 0 )
    {
      do
      {
        if ( v17 < v15 && v14 >= v17 )
        {
          v18 = &thisa->m_ClassesByDesignName.m_Tree.m_Elements.m_pMemory[v16];
          if ( v17 != v18->m_Left )
          {
            v18->m_Right = thisa->m_ClassesByDesignName.m_Tree.m_FirstFree;
            thisa->m_ClassesByDesignName.m_Tree.m_Elements.m_pMemory[v16].m_Left = v17;
            v14 = thisa->m_ClassesByDesignName.m_Tree.m_LastAlloc.index;
            thisa->m_ClassesByDesignName.m_Tree.m_FirstFree = v17;
          }
        }
        if ( v17 == v14 )
          break;
        v15 = thisa->m_ClassesByDesignName.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v17 + 1) >= v15 )
          break;
        ++v17;
        ++v16;
      }
      while ( v17 != 0xFFFF );
    }
    thisa->m_ClassesByDesignName.m_Tree.m_Root = -1;
    thisa->m_ClassesByDesignName.m_Tree.m_NumElements = 0;
  }
  thisa->m_ClassesByDesignName.m_Tree.m_FirstFree = -1;
  if ( (thisa->m_ClassesByDesignName.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
  {
    thisa->m_ClassesByDesignName.m_Tree.m_LastAlloc.index = -1;
  }
  else
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&thisa->m_ClassesByDesignName.m_Tree.m_Elements);
    v7 = (thisa->m_ClassesByDesignName.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    thisa->m_ClassesByDesignName.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&thisa->m_ClassesByDesignName.m_Tree.m_Elements);
  }
  v19 = thisa->m_ClassesByName.m_Tree.m_LastAlloc.index;
  if ( v19 != 0xFFFF )
  {
    v20 = thisa->m_ClassesByName.m_Tree.m_Elements.m_nAllocationCount;
    v21 = 0;
    v22 = 0;
    if ( v20 > 0 )
    {
      do
      {
        if ( v22 < v20 && v22 <= v19 )
        {
          v23 = &thisa->m_ClassesByName.m_Tree.m_Elements.m_pMemory[v21];
          if ( v22 != v23->m_Left )
          {
            v23->m_Right = thisa->m_ClassesByName.m_Tree.m_FirstFree;
            thisa->m_ClassesByName.m_Tree.m_Elements.m_pMemory[v21].m_Left = v22;
            v19 = thisa->m_ClassesByName.m_Tree.m_LastAlloc.index;
            thisa->m_ClassesByName.m_Tree.m_FirstFree = v22;
          }
        }
        if ( v22 == v19 )
          break;
        v20 = thisa->m_ClassesByName.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v22 + 1) >= v20 )
          break;
        ++v22;
        ++v21;
      }
      while ( v22 != 0xFFFF );
    }
    thisa->m_ClassesByName.m_Tree.m_Root = -1;
    thisa->m_ClassesByName.m_Tree.m_NumElements = 0;
  }
  thisa->m_ClassesByName.m_Tree.m_FirstFree = -1;
  if ( (thisa->m_ClassesByName.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
  {
    thisa->m_ClassesByName.m_Tree.m_LastAlloc.index = -1;
  }
  else
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&thisa->m_ClassesByName.m_Tree.m_Elements);
    v7 = (thisa->m_ClassesByName.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    thisa->m_ClassesByName.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&thisa->m_ClassesByName.m_Tree.m_Elements);
  }
  p_m_callQueue = &thisa->m_callQueue;
  CCallQueueT<CTSQueue<CFunctor *,false>>::Flush(&thisa->m_callQueue);
  p_sequence = &thisa->m_callQueue.m_queue.m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        pNode = thisa->m_callQueue.m_queue.m_Head.value.pNode;
        v27 = *pNode;
      }
      while ( *pNode == 0 );
      if ( pNode == thisa->m_callQueue.m_queue.m_Tail.value.pNode )
        break;
      if ( p_m_callQueue != v27 )
      {
        v28 = *(v27 + 8);
        *&v29 = thisa->m_callQueue.m_queue.m_Head.value.pNode;
        *(&v29 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(p_m_callQueue, *p_sequence + 1, v27, &v29) != 0 )
        {
          _InterlockedSub(&thisa->m_callQueue.m_queue.m_Count.m_value, 1u);
          pNode[1] = v28;
          operator delete(pNode);
        }
      }
    }
    if ( p_m_callQueue == v27 )
      break;
    *&v30 = thisa->m_callQueue.m_queue.m_Head.value.pNode;
    *(&v30 + 1) = thisa->m_callQueue.m_queue.m_Tail.value.sequence;
    _InterlockedCompareExchange128(&thisa->m_callQueue.m_queue.m_Tail, *(&v30 + 1) + 1LL, v27, &v30);
  }
LABEL_81:
  v1 = v1;
  while ( 1 )
  {
    Next = thisa->m_callQueue.m_queue.m_FreeNodes.m_Head.value.Next;
    if ( Next == 0 )
      break;
    v1 = (*(&thisa->m_callQueue.m_queue.m_FreeNodes.m_Head.value64x128 + 1) - 1) | v1 & 0xFFFFFFFF00000000LL;
    m_Head = thisa->m_callQueue.m_queue.m_FreeNodes.m_Head;
    if ( _InterlockedCompareExchange128(&thisa->m_callQueue.m_queue.m_FreeNodes, v1, Next->Next, &m_Head) != 0 )
    {
      operator delete(Next);
      goto LABEL_81;
    }
    _mm_pause();
  }
  v33 = thisa->m_callQueue.m_queue.m_Head.value.pNode;
  thisa->m_callQueue.m_queue.m_Tail.value.sequence = 0;
  thisa->m_callQueue.m_queue.m_Head.value.sequence = 0;
  operator delete(v33);
  thisa->m_callQueue.m_queue.m_Head.value.pNode = 0;
  thisa->m_callQueue.m_queue.m_Tail.value.pNode = 0;
  p_m_EntityList = &thisa->m_EntityList;
  CTSListBase::Detach(&thisa->m_callQueue.m_queue.m_FreeNodes);
  m_pHead = thisa->m_EntityList.m_dormantList.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      CConcreteEntityList::FreeEntity(&thisa->m_EntityList, m_pHead, 1);
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v37 = thisa->m_EntityList.m_usedList.m_pHead;
  if ( v37 != 0 )
  {
    while ( 1 )
    {
      v38 = v37->m_pNext;
      CConcreteEntityList::FreeEntity(&thisa->m_EntityList, v37, 1);
      if ( v38 == 0 )
        break;
      v37 = v38;
    }
  }
  v39 = 0;
  thisa->m_EntityList.m_pFirstActiveEntity = 0;
  thisa->m_EntityList.m_freeNetworkableList.m_pHead = 0;
  thisa->m_EntityList.m_freeNetworkableList.m_pTail = 0;
  thisa->m_EntityList.m_freeNonNetworkableList.m_pHead = 0;
  thisa->m_EntityList.m_freeNonNetworkableList.m_pTail = 0;
  do
  {
    v40 = p_m_EntityList->m_pIdentityChunks[v39];
    if ( v40 != 0 )
    {
      v41 = &v40[v40[-1].m_pId];
      if ( v40 != v41 )
      {
        v42 = v41 - 1;
        do
        {
          v43 = v42;
          v44 = v42--;
          v43->m_hPublicScope.m_hScope = 0;
          v40 = p_m_EntityList->m_pIdentityChunks[v39];
        }
        while ( v40 != v44 );
      }
      operator delete[](&v40[-1].m_pId);
    }
    v45 = p_m_EntityList->m_pEntityIdChunks[v39];
    if ( v45 != 0 )
      operator delete[](v45);
    ++v39;
  }
  while ( v39 != 64 );
  memset(thisa->m_EntityList.m_pIdentityChunks, 0, sizeof(thisa->m_EntityList.m_pIdentityChunks));
  memset(thisa->m_EntityList.m_pEntityIdChunks, 0, sizeof(thisa->m_EntityList.m_pEntityIdChunks));
  memset(&thisa->m_EntityList.m_PVSBits, 0, sizeof(thisa->m_EntityList.m_PVSBits));
}


// CEntitySystem::~CEntitySystem  (line 217, @0x00000000030b0300, libserver.so)
// calls: CEntitySystem::~CEntitySystem, operator delete
void __fastcall CEntitySystem::~CEntitySystem(CEntitySystem *const this)
{
  CEntitySystem::~CEntitySystem(this);
  operator delete(this);
}


// CEntitySystem::GetName  (line 223, @0x00000000030ac050, libserver.so)
const char *__fastcall CEntitySystem::GetName(CEntitySystem *const this)
{
  return this->m_pszName;
}


// CEntitySystem::GetVM  (line 230, @0x00000000030ac060, libserver.so)  // inlines: GetVM
IScriptVM *__fastcall CEntitySystem::GetVM(CEntitySystem *const this)
{
  return g_pScriptVM;
}


// CEntitySystem::Init  (line 239, @0x00000000030bb570, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CNetworkFieldChangedEventQueue, CNetworkFieldScratchData, CThreadFastMutex, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Element, FirstInorder, InitHandles, IterClassesStart, LeftChild, MemAlloc_StrDupFunc, NextInorder, Purge, Purge_FixedGrowable, RemoveAll, SetRuntimeIndex, V_memset, memset, operator[], strcpy, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: strlen, strcpy, CUtlScratchMemoryPool::Init, CEntitySystem::RegisterEntityClass, CEntitySystem::RegisterAliasEntityClass, CEntitySystem::RegisterComponentType, CUtlVectorBase<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> >::SetCount, CEntitySystem::InitGlobalContainedFlags, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::SetCount, memset, CEntitySystem::BuildEntityClassTables, CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder (30 total)
// callers: CEntitySystem::PostCreateEntitySystem, CEntitySystem::CreateEntitySystem
// strings: "EntitySystem - Class Tables", "string_t_table"
// globals: CEntityClass::GetGlobalList(void)::g_pEntityClassList, CEntityHandle::gm_pEntitySystem, CEntityHandle::gm_pEntityList, CEntityComponentHelpers::GetList(void)::g_pList, CEntitySystem::Init(char const*,EntitySystemType_t,IEntityIONotify *,NetworkSerializationMode_t,bool)::bDidStaticInit
void __fastcall CEntitySystem::Init(
        CEntitySystem *const this,
        const char *pName,
        EntitySystemType_t type,
        IEntityIONotify *pEntityIONotify,
        NetworkSerializationMode_t nMode,
        bool bActivateDebugHelpers)
{
  size_t v9; // rax
  char *v10; // rax
  char *v11; // rax
  bool v12; // al
  CEntityClass *v13; // r13
  CEntityClass *i; // r13
  CEntityComponentHelper *v15; // r13
  int j; // r14d
  CEntityComponentHelper *k; // r13
  __int64 m_Root; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *v19; // rdx
  int Inorder; // r13d
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx
  __int64 m_NumElements; // r15
  __int64 v24; // r14
  __int64 v25; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *v26; // rcx
  unsigned __int16 v27; // dx
  CEntityClass *m; // rax
  INetworkFieldScratchData *v29; // rax
  __int64 v30; // rdx
  CNetworkFieldChangedEventQueue *v31; // rax
  __int64 v32; // rdi
  INetworkFieldScratchData *m_pNetworkChangeCallbackData; // r14
  CNetworkFieldChangedEventQueue *v34; // r13
  IFieldChangeLimitSpew *m_pChangeCallbackTimeLimitSpewFunc; // rax
  INetworkMessages *v36; // rdi
  unsigned int v37; // r14d
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,32ul,int> > *v41; // [rsp+10h] [rbp-50h]
  EntityClassIter_t iter; // [rsp+28h] [rbp-38h] BYREF

  this->m_nNetworkMode = nMode;
  g_bCheckForChainedCalls = bActivateDebugHelpers;
  if ( pEntityIONotify != 0 )
    this->m_pEntityIONotify = pEntityIONotify;
  if ( this->m_pszName != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  if ( pName != 0 )
  {
    v9 = strlen(pName);
    v10 = (**g_pMemAlloc)(g_pMemAlloc, v9 + 1);
    v11 = strcpy(v10, pName);
  }
  else
  {
    v11 = 0;
  }
  this->m_pszName = v11;
  v12 = type == EntitySystemType_t::ENTITY_SYSTEM_INVOKE_POST_DATA_UPDATES && g_pNetworkMessages != 0;
  this->m_bInvokePostDataUpdates = v12;
  CUtlScratchMemoryPool::Init(&this->m_unserializerData, 1024, 0, 0);
  v13 = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
  CEntityHandle::gm_pEntitySystem = this;
  CEntityHandle::gm_pEntityList = &this->m_EntityList;
  if ( CEntityClass::GetGlobalList(void)::g_pEntityClassList != 0 )
  {
    do
    {
      while ( (v13->m_flags & 2) != 0 )
      {
        v13 = v13->m_pNextClass;
        if ( v13 == 0 )
          goto LABEL_14;
      }
      CEntitySystem::RegisterEntityClass(this, v13);
      v13 = v13->m_pNextClass;
    }
    while ( v13 != 0 );
LABEL_14:
    for ( i = CEntityClass::GetGlobalList(void)::g_pEntityClassList; i != 0; i = i->m_pNextClass )
    {
      while ( (i->m_flags & 2) == 0 )
      {
        i = i->m_pNextClass;
        if ( i == 0 )
          goto LABEL_19;
      }
      CEntitySystem::RegisterAliasEntityClass(this, i);
    }
  }
LABEL_19:
  v15 = CEntityComponentHelpers::GetList(void)::g_pList;
  for ( j = 0; v15 != 0; v15 = v15->m_pNext )
  {
    ++j;
    v15->m_pInfo->m_nRuntimeIndex = CEntitySystem::RegisterComponentType(this, v15);
    if ( (v15->m_pInfo->m_nFlags & 1) != 0 )
      v15->m_flags |= 0x20000u;
    (*(v15->_vptr_CEntityComponentHelper + 1))(v15);
  }
  CUtlVectorBase<EntComponentInfo_t const*,CUtlMemory<EntComponentInfo_t const*,int>>::SetCount(
    &CEntityClass::gm_ComponentInfosById,
    j);
  for ( k = CEntityComponentHelpers::GetList(void)::g_pList; k != 0; k = k->m_pNext )
  {
    if ( g_pNetworkMessages != 0 )
      (*(*g_pNetworkMessages + 192LL))(g_pNetworkMessages, k->m_nPriority);
    CEntityClass::gm_ComponentInfosById.m_Memory.m_pMemory[k->m_pInfo->m_nRuntimeIndex] = k->m_pInfo;
  }
  if ( this->m_ClassesByName.m_Tree.m_NumElements != 0 )
  {
    m_Root = this->m_ClassesByName.m_Tree.m_Root;
    if ( m_Root == 0xFFFF )
    {
      CEntitySystem::InitGlobalContainedFlags(
        this,
        *(&stru_17FFE8.r_addend + this->m_ClassesByName.m_Tree.m_Elements.m_pMemory));
    }
    else
    {
      do
      {
        v19 = &this->m_ClassesByName.m_Tree.m_Elements.m_pMemory[m_Root];
        m_Root = v19->m_Left;
      }
      while ( m_Root != 0xFFFF );
      CEntitySystem::InitGlobalContainedFlags(this, v19->m_Data.elem);
    }
  }
  if ( !CEntitySystem::Init(char const*,EntitySystemType_t,IEntityIONotify *,NetworkSerializationMode_t,bool)::bDidStaticInit )
  {
    Inorder = this->m_ClassesByName.m_Tree.m_Root;
    if ( Inorder != 0xFFFF )
    {
      m_pMemory = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory;
      m_Left = m_pMemory[Inorder].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( m_pMemory[m_Left].m_Left != 0xFFFF )
          m_Left = m_pMemory[m_Left].m_Left;
        Inorder = m_Left;
      }
      while ( 1 )
      {
        m_NumElements = this->m_ComponentTypesByName.m_Tree.m_NumElements;
        v24 = Inorder;
        CUtlVectorBase<CEntityClass::ComponentOffsets_t,CUtlMemory<CEntityClass::ComponentOffsets_t,int>>::SetCount(
          &m_pMemory[v24].m_Data.elem->m_ComponentOffsets,
          m_NumElements);
        memset(
          this->m_ClassesByName.m_Tree.m_Elements.m_pMemory[v24].m_Data.elem->m_ComponentOffsets.m_Memory.m_pMemory,
          255,
          2 * m_NumElements);
        CEntitySystem::BuildEntityClassTables(this, this->m_ClassesByName.m_Tree.m_Elements.m_pMemory[v24].m_Data.elem);
        Inorder = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                    &this->m_ClassesByName.m_Tree,
                    Inorder);
        if ( Inorder == 0xFFFF )
          break;
        m_pMemory = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory;
      }
    }
  }
  COM_TimestampedLog("EntitySystem - Class Tables");
  if ( g_pNetworkMessages != 0 )
    (*(*g_pNetworkMessages + 152LL))(g_pNetworkMessages, "string_t_table", this->m_nNetworkMode, &this->m_pooledStrings);
  CEntitySystem::BuildComponentUnserializers(this);
  if ( this->m_bInvokePostDataUpdates )
  {
    v29 = operator new(0x28u);
    LODWORD(v29[1]._vptr_INetworkFieldScratchData) = 0;
    v29->_vptr_INetworkFieldScratchData = off_47C3090;
    v29[2]._vptr_INetworkFieldScratchData = 0;
    LODWORD(v29[3]._vptr_INetworkFieldScratchData) = 0;
    v30 = LOG_ENTITY_SYSTEM;
    HIDWORD(v29[3]._vptr_INetworkFieldScratchData) = 0;
    LODWORD(v29[4]._vptr_INetworkFieldScratchData) = 0;
    this->m_pNetworkChangeCallbackData = v29;
    (*(v29->_vptr_INetworkFieldScratchData + 2))(v29, 0x10000, v30);
    v31 = operator new(0x1A8u);
    m_pNetworkChangeCallbackData = this->m_pNetworkChangeCallbackData;
    v34 = v31;
    m_pChangeCallbackTimeLimitSpewFunc = this->m_pChangeCallbackTimeLimitSpewFunc;
    v34->m_queuedChanges.m_Size = 0;
    v34->m_queuedChanges.m_Memory.m_pMemory = 0;
    v34->m_queuedChanges.m_Memory.m_nAllocationCount = 0;
    v41 = m_pChangeCallbackTimeLimitSpewFunc;
    v34->m_queuedChanges.m_Memory.m_nGrowSize = 0;
    v34->m_orderPriority.m_Size = 0;
    v34->m_orderPriority.m_Memory.m_pMemory = 0;
    v34->m_orderPriority.m_Memory.m_nAllocationCount = 32;
    v34->m_orderPriority.m_Memory.m_nGrowSize = 0x80000000;
    if ( ((v34 + 48) & 3) != 0 && Plat_IsInDebugSessionRaw(v32) != 0 )
      __debugbreak();
    v34->m_orderPriority.m_Memory.m_pMemory = &v34->m_orderPriority.m_Memory.m_FixedMemory;
    v34->m_reallocSpans.m_Size = 0;
    v34->m_reallocSpans.m_Memory.m_pMemory = 0;
    v34->m_reallocSpans.m_Memory.m_nAllocationCount = 4;
    v34->m_reallocSpans.m_Memory.m_nGrowSize = 0x80000000;
    if ( ((v34 - 56) & 7) != 0 && Plat_IsInDebugSessionRaw(v32) != 0 )
      __debugbreak();
    v34->m_deallocSpans.m_Size = 0;
    v34->m_deallocSpans.m_Memory.m_pMemory = 0;
    v34->m_deallocSpans.m_Memory.m_nAllocationCount = 4;
    v34->m_deallocSpans.m_Memory.m_nGrowSize = 0x80000000;
    v34->m_reallocSpans.m_Memory.m_pMemory = &v34->m_reallocSpans.m_Memory.m_FixedMemory;
    if ( ((v34 + 64) & 7) != 0 && Plat_IsInDebugSessionRaw(v32) != 0 )
      __debugbreak();
    v34->m_deallocSpans.m_Memory.m_pMemory = &v34->m_deallocSpans.m_Memory.m_FixedMemory;
    v36 = g_pNetworkMessages;
    v34->m_pScratchData = m_pNetworkChangeCallbackData;
    v34->m_bTrackReallocs = 0;
    v34->m_memoryMutex.m_ownerID = 0;
    v34->m_pfnChangeLimitSpew = v41;
    v34->m_memoryMutex.m_depth = 0;
    v37 = (*(*v36 + 176LL))(v36);
    CUtlVectorBase<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t,false>,CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t,false>,int>>::SetCount(
      &v34->m_queuedChanges,
      v37);
    CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,32ul,int>>::SetCount(&v34->m_orderPriority, v37);
    (*(*g_pNetworkMessages + 184LL))(
      g_pNetworkMessages,
      v37,
      v34->m_orderPriority.m_Memory.m_pMemory,
      v38,
      v39,
      v40,
      &v34->m_deallocSpans.m_Memory,
      &v34->m_reallocSpans.m_Memory,
      &v34->m_orderPriority);
    v34->m_nProcessedOrder = -1;
    this->m_pQueuedNetworkChangeCallbacks = v34;
  }
  if ( !CEntitySystem::Init(char const*,EntitySystemType_t,IEntityIONotify *,NetworkSerializationMode_t,bool)::bDidStaticInit )
  {
    v25 = this->m_ClassesByName.m_Tree.m_Root;
    if ( v25 != 0xFFFF )
    {
      v26 = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory;
      v27 = v26[v25].m_Left;
      if ( v27 != 0xFFFF )
      {
        while ( v26[v27].m_Left != 0xFFFF )
          v27 = v26[v27].m_Left;
        v25 = v27;
      }
      if ( v25 != 0xFFFF )
      {
        LODWORD(iter) = v25;
        for ( m = v26[v25].m_Data.elem; m != 0; m = CEntitySystem::IterClassesNext(this, &iter) )
          CEntityClass::BuildEntityIOTables(m);
      }
    }
  }
  CEntitySystem::Init(char const*,EntitySystemType_t,IEntityIONotify *,NetworkSerializationMode_t,bool)::bDidStaticInit = 1;
}


// CEntitySystem::LoadEntityScriptClasses  (line 357, @0x00000000030ac070, libserver.so)  // inlines: GetVM
// calls: CEntityScriptFramework::LoadEntityClasses
// callers: CVScriptGameSystem::VScriptInit
void __fastcall CEntitySystem::LoadEntityScriptClasses(CEntitySystem *const this)
{
  if ( g_pScriptVM != 0 )
    CEntityScriptFramework::LoadEntityClasses(&g_EntityScriptFramework);
}


// CEntitySystem::IsKeyUsedByScriptClass  (line 365, @0x00000000030ac0a0, libserver.so)  // inlines: GetVM
// calls: CEntityScriptFramework::IsKeyUsedByScriptClass
bool __fastcall CEntitySystem::IsKeyUsedByScriptClass(
        const CEntitySystem *const this,
        const char *pScriptClassName,
        EntityKeyId_t key)
{
  return g_pScriptVM != 0
      && CEntityScriptFramework::IsKeyUsedByScriptClass(&g_EntityScriptFramework, pScriptClassName, key);
}


// CEntitySystem::Shutdown  (line 372, @0x00000000030bad50, libserver.so)  // inlines: CleanUpAttributeObjectPool, ConvertToExternalMemory, InitHandles, IsExternallyAllocated, Purge, Purge_FixedGrowable, Remove, RemoveAll, UnregisterComponentType, ~CNetworkFieldChangedEventQueue, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntitySystem::ExecuteQueuedOperations, CUtlMemory<CNetworkFieldDeallocRecord, int>::ConvertToExternalMemory, CUtlMemory<CNetworkFieldReallocRecord, int>::ConvertToExternalMemory, CUtlMemory<int, int>::Purge, CUtlVectorBase<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, int> >::RemoveAll, operator delete, CEntitySystem::UnregisterEntityClass, CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::Remove, CAttributeObjectPool::ProcessDeletionQueue, CUtlMemory<CNetworkFieldReallocRecord, int>::Purge, CUtlMemory<CNetworkFieldDeallocRecord, int>::Purge, CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, int>::Purge
// callers: CEntitySystem::DestroyEntitySystem
// strings: "string_t_table"
// globals: CEntityClass::GetGlobalList(void)::g_pEntityClassList, CEntityComponentHelpers::GetList(void)::g_pList, s_attributeObjectPool, CEntityHandle::gm_pEntitySystem, CEntityHandle::gm_pEntityList, gpGlobalsBase
void __fastcall CEntitySystem::Shutdown(CEntitySystem *const this)
{
  CNetworkFieldChangedEventQueue *m_pQueuedNetworkChangeCallbacks; // rbx
  int m_nAllocationCount; // esi
  uint32 m_nGrowSize; // edx
  CNetworkFieldChangedEventQueue *m_pMemory; // rsi
  unsigned int v6; // eax
  INetworkFieldScratchData *m_pNetworkChangeCallbackData; // rdi
  CEntityClass *i; // rbx
  CEntityComponentHelper *j; // rbx
  __int64 k; // rbx
  IEntityDataInstantiator *v11; // rdi
  int v12; // esi
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  CEntitySystem::ExecuteQueuedOperations(this, 0);
  m_pQueuedNetworkChangeCallbacks = this->m_pQueuedNetworkChangeCallbacks;
  if ( m_pQueuedNetworkChangeCallbacks == 0 )
    goto LABEL_18;
  m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Size = 0;
  CUtlMemory<CNetworkFieldDeallocRecord,int>::ConvertToExternalMemory(
    &m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Memory,
    &m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Memory.m_FixedMemory,
    4,
    0,
    1,
    0x3FFFFFFFu);
  if ( (m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CNetworkFieldDeallocRecord,int>::Purge(&m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Memory);
  m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Size = 0;
  CUtlMemory<CNetworkFieldReallocRecord,int>::ConvertToExternalMemory(
    &m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Memory,
    &m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Memory.m_FixedMemory,
    4,
    0,
    1,
    0x3FFFFFFFu);
  if ( (m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_nAllocationCount;
    m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Size = 0;
    if ( m_nAllocationCount >= 0 )
      goto LABEL_6;
LABEL_11:
    v6 = m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_nGrowSize & 0xC0000000;
LABEL_12:
    if ( v6 == 0 )
      CUtlMemory<int,int>::Purge(&m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory);
    goto LABEL_14;
  }
  CUtlMemory<CNetworkFieldReallocRecord,int>::Purge(&m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Memory);
  v12 = m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_nAllocationCount;
  m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Size = 0;
  if ( v12 < 0 )
    goto LABEL_11;
LABEL_6:
  m_nGrowSize = m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_nGrowSize;
  m_pMemory = m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_pMemory;
  v6 = m_nGrowSize & 0xC0000000;
  if ( &m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_FixedMemory == m_pMemory )
    goto LABEL_12;
  if ( m_pMemory != 0 && v6 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    m_nGrowSize = m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_nGrowSize;
  }
  m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_pMemory = &m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_FixedMemory;
  m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_nAllocationCount = 32;
  m_pQueuedNetworkChangeCallbacks->m_orderPriority.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_14:
  CUtlVectorBase<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t,false>,CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t,false>,int>>::RemoveAll(&m_pQueuedNetworkChangeCallbacks->m_queuedChanges);
  if ( (m_pQueuedNetworkChangeCallbacks->m_queuedChanges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t,false>,int>::Purge(&m_pQueuedNetworkChangeCallbacks->m_queuedChanges.m_Memory);
    if ( (m_pQueuedNetworkChangeCallbacks->m_queuedChanges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t,false>,int>::Purge(&m_pQueuedNetworkChangeCallbacks->m_queuedChanges.m_Memory);
  }
  operator delete(m_pQueuedNetworkChangeCallbacks);
  m_pNetworkChangeCallbackData = this->m_pNetworkChangeCallbackData;
  this->m_pQueuedNetworkChangeCallbacks = 0;
  if ( m_pNetworkChangeCallbackData != 0 )
    (*(m_pNetworkChangeCallbackData->_vptr_INetworkFieldScratchData + 1))(m_pNetworkChangeCallbackData);
  this->m_pNetworkChangeCallbackData = 0;
LABEL_18:
  for ( i = CEntityClass::GetGlobalList(void)::g_pEntityClassList; i != 0; i = i->m_pNextClass )
    CEntitySystem::UnregisterEntityClass(this, i);
  for ( j = CEntityComponentHelpers::GetList(void)::g_pList; j != 0; j = j->m_pNext )
  {
    search.key = j->m_pInfo->m_pName;
    CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Remove(
      &this->m_ComponentTypesByName.m_Tree,
      &search);
  }
  if ( g_pNetworkMessages != 0 )
    (*(*g_pNetworkMessages + 152LL))(g_pNetworkMessages, "string_t_table", this->m_nNetworkMode, 0);
  for ( k = 0; k != 32; ++k )
  {
    v11 = this->m_ppAccessors[k];
    if ( v11 != 0 )
      (*(v11->_vptr_IEntityDataInstantiator + 1))(v11);
    this->m_ppAccessors[k] = 0;
  }
  CAttributeObjectPool::ProcessDeletionQueue(&s_attributeObjectPool);
  CEntityHandle::gm_pEntitySystem = 0;
  CEntityHandle::gm_pEntityList = 0;
  gpGlobalsBase = 0;
}


// CEntitySystem::RemoveCreationWrapperCallbacks  (line 416, @0x00000000030ac0d0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<CUtlDelegate<void(bool)>, int>::Purge
// callers: CSource2EntitySystem::StaticShutdown
void __fastcall CEntitySystem::RemoveCreationWrapperCallbacks(CEntitySystem *const this)
{
  bool v1; // zf

  v1 = (this->m_creationDelegates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_creationDelegates.m_Size = 0;
  if ( v1 )
    CUtlMemory<CUtlDelegate<void ()(bool)>,int>::Purge(&this->m_creationDelegates.m_Memory);
}


// CEntitySystem::RemovePostSpawnCallback  (line 421, @0x00000000030ac100, libserver.so)  // inlines: Clear
// callers: CSource2EntitySystem::StaticShutdown
void __fastcall CEntitySystem::RemovePostSpawnCallback(CEntitySystem *const this)
{
  this->m_postSpawnDelegate.m_Closure.m_pthis = 0;
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__delta = 0;
}


// CEntitySystem::InstallCreationWrapperCallbacks  (line 426, @0x00000000030af8d0, libserver.so)  // inlines: AddToTail, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, CopyConstruct<CUtlDelegate<void(bool)> >, CopyFrom<FastDelegate1<bool, void> >, Element, FastDelegate1, GrowMemory, SetMementoFrom, operator[]
// calls: CUtlMemory<CUtlDelegate<void(bool)>, int>::Grow
// callers: CSource2EntitySystem::StaticInit
void __fastcall CEntitySystem::InstallCreationWrapperCallbacks(CEntitySystem *const this, detail::GenericClass **a2)
{
  __int64 m_Size; // r12
  int v5; // eax
  CUtlDelegate<void(bool)> *v6; // rcx
  __int64 v7; // rdx

  m_Size = this->m_creationDelegates.m_Size;
  v5 = this->m_creationDelegates.m_Size;
  if ( m_Size == this->m_creationDelegates.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlDelegate<void ()(bool)>,int>::Grow(&this->m_creationDelegates.m_Memory, 1);
    v5 = this->m_creationDelegates.m_Size;
  }
  this->m_creationDelegates.m_Size = v5 + 1;
  v6 = &this->m_creationDelegates.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    v6->m_Closure.m_pthis = 0;
    v6->m_Closure.m_pFunction.__pfn = 0;
    v6->m_Closure.m_pFunction.__delta = 0;
    v7 = a2[2];
    v6->m_Closure.m_pFunction.__pfn = a2[1];
    v6->m_Closure.m_pFunction.__delta = v7;
    v6->m_Closure.m_pthis = *a2;
  }
}


// CEntitySystem::InstallPostSpawnCallback  (line 431, @0x00000000030ac130, libserver.so)  // inlines: CopyFrom<FastDelegate2<int, CEntityHandle*, void> >, SetMementoFrom, operator=
// callers: CSource2EntitySystem::StaticInit
void __fastcall CEntitySystem::InstallPostSpawnCallback(CEntitySystem *const this, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(a2 + 16);
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__pfn = *(a2 + 8);
  this->m_postSpawnDelegate.m_Closure.m_pFunction.__delta = v2;
  this->m_postSpawnDelegate.m_Closure.m_pthis = *a2;
}


// CEntitySystem::RegisterEntityClass  (line 439, @0x00000000030b6bf0, libserver.so)  // inlines: Element, Find, GetClassInfo, Insert, LeafCodeInfo_t, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::Find, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::Insert
// callers: CEntitySystem::Init
// strings: "entitysystem.cpp", "RegisterEntityClass", "Multiple entity classes have the same designer name \"%s\" ( class %s and class %s )\n", "Multiple registration of class %s\n"
int __fastcall CEntitySystem::RegisterEntityClass(CEntitySystem *const this, CEntityClass *pClass)
{
  CEntityClassInfo *m_pClassInfo; // rax
  const char *m_pszCPPClassname; // r13
  const char *m_pszClassname; // r15
  const char *v8; // rax
  unsigned __int16 v9; // [rsp+14h] [rbp-5Ch]
  CUtlMap<char const*,CEntityClass*,short unsigned int,bool (*)(char const* const&,char const* const&)> *p_m_ClassesByName; // [rsp+18h] [rbp-58h]
  LeafCodeInfo_t search[3]; // [rsp+20h] [rbp-50h] BYREF

  if ( pClass == 0 )
    return -1;
  m_pClassInfo = pClass->m_pClassInfo;
  m_pszCPPClassname = m_pClassInfo->m_pszCPPClassname;
  m_pszClassname = m_pClassInfo->m_pszClassname;
  p_m_ClassesByName = &this->m_ClassesByName;
  search[0].m_szFile = m_pszCPPClassname;
  if ( CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_ClassesByName.m_Tree,
         search) == 0xFFFF )
  {
    if ( m_pszClassname != 0 )
    {
      search[0].m_szFile = m_pszClassname;
      v9 = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &this->m_ClassesByDesignName.m_Tree,
             search);
      if ( v9 != 0xFFFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
        {
          v8 = this->m_ClassesByDesignName.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem->m_pClassInfo->m_pszCPPClassname;
          search[0].m_szFile = "entitysystem.cpp";
          search[0].m_szFunction = "RegisterEntityClass";
          search[0].m_nLine = 461;
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            LoggingSeverity_t::LS_ERROR,
            search,
            "Multiple entity classes have the same designer name \"%s\" ( class %s and class %s )\n",
            m_pszClassname,
            m_pszCPPClassname,
            v8);
        }
        return -1;
      }
      (*(pClass->_vptr_CEntityClass + 2))(pClass);
      search[0].m_szFile = m_pszClassname;
      *&search[0].m_nLine = pClass;
      CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
        &this->m_ClassesByDesignName.m_Tree,
        search,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
    }
    else
    {
      (*(pClass->_vptr_CEntityClass + 2))(pClass);
    }
    search[0].m_szFile = m_pszCPPClassname;
    *&search[0].m_nLine = pClass;
    return CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
             &p_m_ClassesByName->m_Tree,
             search,
             ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) == 0 )
      return -1;
    search[0].m_szFile = "entitysystem.cpp";
    search[0].m_szFunction = "RegisterEntityClass";
    search[0].m_nLine = 451;
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      LoggingSeverity_t::LS_ERROR,
      search,
      "Multiple registration of class %s\n",
      m_pszCPPClassname);
    return -1;
  }
}


// CEntitySystem::RegisterAliasEntityClass  (line 474, @0x00000000030b6de0, libserver.so)  // inlines: Element, Find, GetBaseClass, GetClassInfo, Insert, LeafCodeInfo_t, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::Find, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::Insert
// callers: CEntitySystem::Init
// strings: "entitysystem.cpp", "RegisterAliasEntityClass", "Attempted to alias unknown class %s using same designer name \"%s\"\n", "Multiple entity classes have the same designer name \"%s\" ( alias class %s and class %s 
void __fastcall CEntitySystem::RegisterAliasEntityClass(CEntitySystem *const this, CEntityClass *pClass)
{
  CEntityClassInfo *m_pBaseClassInfo; // rax
  CEntityClass *m_pClass; // rax
  const char *m_pszCPPClassname; // r13
  const char *m_pszClassname; // r14
  unsigned __int16 v7; // r15
  CUtlMap<char const*,CEntityClass*,short unsigned int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rax
  const char *v9; // rax
  unsigned __int16 v10; // [rsp+1Ch] [rbp-5Ch]
  LeafCodeInfo_t v11[3]; // [rsp+20h] [rbp-58h] BYREF

  if ( pClass != 0 )
  {
    m_pBaseClassInfo = pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      m_pClass = m_pBaseClassInfo->m_pClass;
    else
      m_pClass = 0;
    m_pszCPPClassname = m_pClass->m_pClassInfo->m_pszCPPClassname;
    m_pszClassname = pClass->m_pClassInfo->m_pszClassname;
    v11[0].m_szFile = m_pszCPPClassname;
    v7 = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_ClassesByName.m_Tree,
           v11);
    if ( v7 == 0xFFFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
      {
        v11[0].m_szFile = "entitysystem.cpp";
        v11[0].m_szFunction = "RegisterAliasEntityClass";
        v11[0].m_nLine = 488;
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          LoggingSeverity_t::LS_ERROR,
          v11,
          "Attempted to alias unknown class %s using same designer name \"%s\"\n",
          m_pszCPPClassname,
          m_pszClassname);
      }
    }
    else
    {
      v11[0].m_szFile = m_pszClassname;
      v10 = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
              &this->m_ClassesByDesignName.m_Tree,
              v11);
      if ( v10 == 0xFFFF )
      {
        elem = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem;
        v11[0].m_szFile = m_pszClassname;
        *&v11[0].m_nLine = elem;
        CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
          &this->m_ClassesByDesignName.m_Tree,
          v11,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
      {
        v9 = this->m_ClassesByDesignName.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem->m_pClassInfo->m_pszCPPClassname;
        v11[0].m_szFile = "entitysystem.cpp";
        v11[0].m_szFunction = "RegisterAliasEntityClass";
        v11[0].m_nLine = 496;
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          LoggingSeverity_t::LS_ERROR,
          v11,
          "Multiple entity classes have the same designer name \"%s\" ( alias class %s and class %s )\n",
          m_pszClassname,
          m_pszCPPClassname,
          v9);
      }
    }
  }
}


// CEntitySystem::UnregisterEntityClass  (line 506, @0x00000000030b6fa0, libserver.so)  // inlines: GetClassInfo, Remove
// calls: CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::Remove
// callers: CEntitySystem::Shutdown
void __fastcall CEntitySystem::UnregisterEntityClass(CEntitySystem *const this, CEntityClass *pClass)
{
  CEntityClassInfo *m_pClassInfo; // rax
  const char *m_pszClassname; // rbx
  CUtlMap<char const*,CEntityClass*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t v5[2]; // [rsp-28h] [rbp-28h] BYREF

  if ( pClass != 0 )
  {
    m_pClassInfo = pClass->m_pClassInfo;
    m_pszClassname = m_pClassInfo->m_pszClassname;
    if ( (pClass->m_flags & 2) == 0 )
    {
      v5[0].key = m_pClassInfo->m_pszCPPClassname;
      CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Remove(
        &this->m_ClassesByName.m_Tree,
        v5);
    }
    if ( m_pszClassname != 0 )
    {
      v5[0].key = m_pszClassname;
      CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Remove(
        &this->m_ClassesByDesignName.m_Tree,
        v5);
    }
  }
}


// CEntitySystem::AllocPooledString  (line 530, @0x00000000030b3bb0, libserver.so)  // inlines: AddString, Alloc, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CopyConstruct<CUtlSymbolTableLargeBaseTreeEntry_t*>, FindPoolWithSpace, HashStringFastCaseless, Insert, InsertUncommitted, ToSymbol, V_memcpy, V_strlen, memcpy, operator!=
// calls: strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::Find, CThreadSpinRWLock::LockForWrite, CThreadSpinRWLock::UnlockWrite(void), CUtlMemoryPoolBase::Alloc
// callers: CRestore::ReadString, CSkeletonInstance::SetModelNameFromModel, AllocPooledString, ParseKeyvalue, CSource1GameConfiguration::InitGameSession, CCommentarySystem::InitCommentary, CEntityClass::OnRegister, CEntityClass::FindEntityIOOutputByName, CEntityClass::ReacquirePooledStrings, CEntityClass::AddEntityInputsToTable, CEntityClass::AddEntityOutputsToTable, CEntityClass::UnserializeKey (21 total)
string_t __fastcall CEntitySystem::AllocPooledString(char **a1, CEntitySystem *const this, const char *pString)
{
  int v6; // eax
  int v7; // r15d
  char *v8; // rax
  int v10; // r10d
  signed int v11; // edx
  _DWORD **v12; // rdi
  _DWORD *v13; // rax
  int v14; // r9d
  _DWORD **v15; // rdi
  int v16; // esi
  unsigned int v17; // ecx
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rbx
  UtlTSHashHandle_t v21; // rax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *v22; // rbx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v23; // rcx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v24; // r15
  int v25; // [rsp+0h] [rbp-50h]
  char *v26; // [rsp+0h] [rbp-50h]
  CUtlSymbolTableLargeBaseTreeEntry_t *uiKey; // [rsp+8h] [rbp-48h]
  char *v28; // [rsp+10h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *src; // [rsp+18h] [rbp-38h] BYREF

  if ( pString == 0 || *pString == 0 || (v6 = strlen(pString), v7 = v6, v6 <= 0) )
  {
    *a1 = 0;
    return a1;
  }
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(&v28, &this->m_pooledStrings, pString, v6);
  v8 = v28;
  if ( v28 == 0 )
  {
    v10 = *(&dword_19F00 + this);
    v11 = (v7 + 16) & 0xFFFFFFF8;
    if ( v10 > 0 )
    {
      v12 = *(&stru_19F08.r_offset + this);
      v13 = *v12;
      v14 = (*v12)[1];
      if ( v11 <= **v12 - v14 )
      {
LABEL_16:
        v13[1] = v14 + v11;
        v26 = v13 + v14;
        uiKey = (v26 + 8);
        *(v26 + 1) = MurmurHash2LowerCase(pString, 0x3501A674u);
        memcpy(v26 + 16, pString, v7);
        v26[v7 + 16] = 0;
        v20 = *(v26 + 1);
        v21 = CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
                &this->m_pooledStrings.m_Lookup,
                (v26 + 8));
        if ( v21 == 0 )
        {
          v22 = &this->m_pooledStrings.m_Lookup.m_aBuckets[v20 & 0x7FF];
          CThreadSpinRWLock::LockForWrite(v22);
          v24 = CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
                  uiKey,
                  v22->m_pFirstUncommitted,
                  v22->m_pFirst,
                  v23);
          if ( v24 == 0 )
          {
            *(&off_19EF0 + this) = 1;
            v24 = CUtlMemoryPoolBase::Alloc(&this->m_pooledStrings.m_Lookup.m_EntryMemory);
            v24->m_pNext = v22->m_pFirstUncommitted;
            v22->m_pFirstUncommitted = v24;
            v24->m_uiKey = uiKey;
            v24->m_Data = uiKey;
          }
          CThreadSpinRWLock::UnlockWrite(v22);
          v21 = v24;
        }
        v8 = (*(v21 + 16) + 8LL);
        goto LABEL_5;
      }
      v15 = v12 + 1;
      v16 = 0;
      while ( ++v16 != v10 )
      {
        v13 = *v15++;
        v14 = v13[1];
        if ( v11 <= *v13 - v14 )
        {
          if ( v16 != -1 )
            goto LABEL_16;
          break;
        }
      }
    }
    if ( (v11 + 12LL) <= 0x800 )
    {
      v17 = 2036;
      v18 = 2048;
    }
    else
    {
      v17 = (v7 + 16) & 0xFFFFFFF8;
      v18 = v11 + 12;
    }
    v25 = v17;
    src = (**g_pMemAlloc)(g_pMemAlloc, v18);
    src->m_TotalLen = v25;
    src->m_SpaceUsed = 0;
    v19 = CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
            (&dword_19F00 + this),
            &src);
    v11 = (v7 + 16) & 0xFFFFFFF8;
    v13 = *(*(&stru_19F08.r_offset + this) + 8LL * v19);
    v14 = v13[1];
    goto LABEL_16;
  }
LABEL_5:
  *a1 = v8;
  return a1;
}


// CEntitySystem::FindPooledString  (line 539, @0x00000000030af0d0, libserver.so)  // inlines: CUtlSymbolLarge, Find, V_strlen
// calls: strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find
// callers: CNotifyManager::ReportNamedEvent, CFilterEnemy::PassesNameFilter, CDOTA_QuestSystem::FireGameEvent
string_t __fastcall CEntitySystem::FindPooledString(char **a1, CEntitySystem *const this, const char *pString)
{
  string_t_table *p_m_pooledStrings; // r12
  int v5; // eax
  int v6; // ecx
  const char *pStringa; // [rsp+8h] [rbp-18h]

  if ( pString == 0 )
  {
    p_m_pooledStrings = &this->m_pooledStrings;
    v6 = 0;
    goto LABEL_4;
  }
  if ( *pString != 0 )
  {
    pStringa = pString;
    p_m_pooledStrings = &this->m_pooledStrings;
    v5 = strlen(pString);
    pString = pStringa;
    v6 = v5;
LABEL_4:
    CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(a1, p_m_pooledStrings, pString, v6);
    return a1;
  }
  *a1 = 0;
  return a1;
}


// CEntitySystem::FreeAllPooledStrings  (line 548, @0x00000000030b0320, libserver.so)  // inlines: Commit, Element, FirstInorder, IncrementSerialNumber, LeftChild, NextInorder, Purge, PurgeAndDeleteElements, RemoveAll, operator[]
// calls: CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::RemoveAll, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int>::Purge, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, CEntityClass::ReacquirePooledStrings, CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CEntitySystem::ClearEntityDatabase
// globals: CGameString::gm_iSerialNumber
void __fastcall CEntitySystem::FreeAllPooledStrings(CEntitySystem *const this)
{
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *m_aBuckets; // rbx
  int i; // r12d
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirstUncommitted; // rax
  CThreadSpinRWLock *v5; // rdi
  __int64 v6; // r12
  int v7; // ebx
  __int64 v8; // rsi
  bool v9; // zf
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx

  if ( *(&off_19EF0 + this) != 0 )
  {
    m_aBuckets = this->m_pooledStrings.m_Lookup.m_aBuckets;
    for ( i = 2048; i != 0; --i )
    {
      CThreadSpinRWLock::LockForRead(m_aBuckets);
      m_pFirstUncommitted = m_aBuckets->m_pFirstUncommitted;
      v5 = m_aBuckets++;
      m_aBuckets[-1].m_pFirst = m_pFirstUncommitted;
      CThreadSpinRWLock::UnlockRead(v5);
    }
    *(&off_19EF0 + this) = 0;
  }
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::RemoveAll(&this->m_pooledStrings.m_Lookup);
  if ( *(&dword_19F00 + this) > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = *(*(&stru_19F08.r_offset + this) + v6);
      v6 += 8;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < *(&dword_19F00 + this) );
  }
  v9 = (this->m_pooledStrings.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  *(&dword_19F00 + this) = 0;
  if ( v9 )
    CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge((&stru_19F08 + this));
  ++CGameString::gm_iSerialNumber;
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_EntityByNameMap.m_Tree);
  m_Root = this->m_ClassesByName.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    while ( 1 )
    {
      CEntityClass::ReacquirePooledStrings(m_pMemory[m_Root].m_Data.elem);
      m_Root = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_ClassesByName.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory;
    }
  }
}


// CEntitySystem::AddComponentProceduralKeys  (line 566, @0x00000000030b7010, libserver.so)  // inlines: AddToTail, Alloc, As<CSchemaType_Atomic>, As<CSchemaType_DeclaredClass>, As<const CSchemaType_Atomic_T>, As<const CSchemaType_DeclaredClass>, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<ComponentUnserializerFieldInfo_t>, CopyConstruct<char const**>, Element, Find, FindInsertionPosition, GeneratePrefixedKeyName<260ul>, GetAllMetaPtrs<char const**>, GetAllPtrs, GetPtr, GetResourceTypeOfStrongHandle, GetValue, GrowMemory, Insert, InsertAt, InsertUncommitted, InternalAs, IsPresent, IsResourceStrongHandle, LeafCodeInfo_t, LeftChild, MakeStringToken, Node_t, Purge, RemoveAll, RightChild, SchemaMetaGetAllPtrs2<ComponentKeyField_t*>, SchemaMetaGetAllPtrs2<char const**>, SchemaMetaGetPtr2, SchemaMetaIsPresent2, V_strlen, V_strncpy<int>, operator(), operator[], ~CSchemaFieldIterator, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~Node_t
// calls: CSchemaClassInfo::MetaGetAllPtrs<ComponentKeyField_t*>, V_strcpy_safe<260ul>, CSchemaFieldIterator::CSchemaFieldIterator, CSchemaFieldIterator::IsValid, CSchemaFieldIterator::GetAllMetaPtrsInternal, CSchemaFieldIterator::GetType, V_sprintf_safe<260ul>, CSchemaFieldIterator::IsMetaPresent, CSchemaFieldIterator::Advance, MurmurHash2LowerCase, CUtlString::FreeMemoryBlock, CUtlString::Get (31 total)
// callers: CEntitySystem::AddComponentFieldUnserializer, CEntitySystem::BuildComponentUnserializers
// strings: "MKeyField", "MKeyfieldname", "MHasSubKeyfields", "entitysystem.cpp", "AddComponentProceduralKeys", "CUtlStringToken hash collision between the two fields %s and %s!\n\tRename one of the key (7 total)
void __fastcall CEntitySystem::AddComponentProceduralKeys(
        CEntitySystem *const this,
        const char *pKeyPrefix,
        ClassIntrospectionHandle_t pSchemaInfo,
        bool bFlatten,
        ComponentUnserializerClassInfo_t *pInfo,
        CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)> *const tokenCollisionTest)
{
  ComponentKeyField_t *v7; // rax
  _BYTE *m_pKeyName; // r12
  __int64 v9; // rdi
  int v10; // eax
  uint32 v11; // r13d
  __int64 v12; // rax
  char *v13; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  const char *v18; // r13
  CSchemaType *Type; // rbx
  const CSchemaClassInfo *v20; // rbx
  __int64 m_Size; // rbx
  int v22; // eax
  int v23; // eax
  const char ***v24; // rdx
  _DWORD *v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // r12
  const char *v33; // rax
  const char *v34; // rax
  _QWORD *v35; // rax
  char v36; // dl
  int v37; // r12d
  int m_Right; // eax
  bool v39; // bl
  bool v40; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int>::Node_t,int> *v41; // rax
  int v42; // eax
  __int64 v43; // rdi
  int v44; // eax
  CSchemaType *v45; // rdx
  const CSchemaClassInfo *v46; // rdi
  __int64 *Ptr; // rax
  char *v48; // rcx
  int v49; // edx
  unsigned int v50; // eax
  const CSchemaClassInfo *pSkipClass; // [rsp+8h] [rbp-2B8h]
  __int64 v53; // [rsp+20h] [rbp-2A0h]
  _QWORD *v54; // [rsp+20h] [rbp-2A0h]
  char v55; // [rsp+2Eh] [rbp-292h]
  CSchemaType *nLen; // [rsp+30h] [rbp-290h]
  int nLena; // [rsp+30h] [rbp-290h]
  unsigned int nLenb; // [rsp+30h] [rbp-290h]
  CUtlMemory<char const**,int> *v60; // [rsp+38h] [rbp-288h]
  ComponentUnserializerClassInfo_t::FieldHash_t *p_m_atomicFields; // [rsp+40h] [rbp-280h]
  CSchemaFieldIterator *v64; // [rsp+60h] [rbp-260h]
  const char *pEmptyString; // [rsp+70h] [rbp-250h] BYREF
  CUtlString v67; // [rsp+78h] [rbp-248h] BYREF
  CUtlVector<ComponentKeyField_t*,CUtlMemory<ComponentKeyField_t*,int> > tags; // [rsp+80h] [rbp-240h] BYREF
  CUtlVector<char const**,CUtlMemory<char const**,int> > metaValues; // [rsp+A0h] [rbp-220h] BYREF
  CSchemaFieldIterator iter; // [rsp+C0h] [rbp-200h] BYREF
  char pKeyName[260]; // [rsp+180h] [rbp-140h] BYREF
  unsigned __int64 v72; // [rsp+288h] [rbp-38h]

  v72 = __readfsqword(0x28u);
  tags.m_Size = 0;
  tags.m_Memory.m_pMemory = 0;
  tags.m_Memory.m_nAllocationCount = 0;
  tags.m_Memory.m_nGrowSize = 0;
  pSkipClass = 0;
  if ( !bFlatten && pSchemaInfo->m_BaseClasses.m_Data.m_nImplLength != 0 )
    pSkipClass = *(pSchemaInfo->m_BaseClasses.m_Data.m_pImplElements + 1);
  CSchemaClassInfo::MetaGetAllPtrs<ComponentKeyField_t *>(
    pSchemaInfo,
    "MKeyField",
    &tags,
    SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
    pSkipClass);
  if ( tags.m_Size > 0 )
  {
    v64 = 0;
    v60 = (8LL * (tags.m_Size - 1) + 8);
    p_m_atomicFields = &pInfo->m_atomicFields;
    do
    {
      v7 = *(tags.m_Memory.m_pMemory + v64);
      m_pKeyName = v7->m_pKeyName;
      if ( pKeyPrefix != 0 && *pKeyPrefix != 0 )
      {
        if ( m_pKeyName != 0 && *m_pKeyName != 0 )
          V_sprintf_safe<260ul>(pKeyName, "%s.%s", pKeyPrefix, v7->m_pKeyName);
        else
          V_strcpy_safe<260ul>(pKeyName, pKeyPrefix);
        m_pKeyName = 0;
        v10 = 0;
        v11 = 0;
        if ( pKeyName[0] == 0 )
          goto LABEL_12;
      }
      else
      {
        V_strcpy_safe<260ul>(pKeyName, v7->m_pKeyName);
        v10 = 0;
        v11 = 0;
        if ( pKeyName[0] == 0 )
          goto LABEL_12;
      }
      v11 = MurmurHash2LowerCase(pKeyName, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(v11, pKeyName, 0, 1);
      v10 = v11 & 0xF;
LABEL_12:
      v12 = 16 * (v10 + 4LL);
      v13 = p_m_atomicFields + v12;
      v14 = *(&p_m_atomicFields->m_EntryMemory.m_BlockSize + v12);
      if ( v14 == 0 )
        goto LABEL_17;
      if ( v11 != *v14 )
      {
        v15 = *(&p_m_atomicFields->m_EntryMemory.m_BlockSize + v12);
        while ( 1 )
        {
          v15 = *(v15 + 8);
          if ( v15 == 0 )
            break;
          if ( v11 == *v15 )
            goto LABEL_22;
        }
LABEL_17:
        v16 = *(v13 + 1);
        if ( v16 != 0 && v14 != v16 )
        {
          while ( v11 != *v16 )
          {
            v16 = *(v16 + 8);
            if ( v14 == v16 )
              goto LABEL_50;
          }
          goto LABEL_22;
        }
LABEL_50:
        v55 = 0;
        if ( m_pKeyName == 0 )
        {
          v48 = pKeyName;
          do
          {
            v49 = *v48;
            v48 += 4;
            v50 = ~v49 & (v49 - 16843009) & 0x80808080;
          }
          while ( v50 == 0 );
          if ( (~v49 & (v49 - 16843009) & 0x8080) == 0 )
          {
            LOBYTE(v50) = (~v49 & (v49 - 16843009) & 0x80808080) >> 16;
            LODWORD(v48) = v48 + 2;
          }
          nLenb = v48 - (__CFADD__(v50, v50) + 3) - pKeyName + 1;
          m_pKeyName = operator new[](nLenb);
          _V_strncpy(m_pKeyName, 0, nLenb);
          v55 = 1;
        }
        nLen = (*(tags.m_Memory.m_pMemory + v64))->m_pType;
        if ( (**nLen)(v9) != 4 )
          goto LABEL_52;
        v42 = *(CSchemaType::InternalAs(
                  nLen,
                  SchemaTypeCategory_t::SCHEMA_TYPE_ATOMIC,
                  SchemaAtomicCategory_t::SCHEMA_ATOMIC_PLAIN)
              + 16);
        if ( (v42 - 4007) > 2 && v42 != 4000 )
          goto LABEL_52;
        if ( (**nLen)(nLen) == 4 )
        {
          v44 = (*(*nLen + 48LL))(nLen);
          v45 = 0;
          if ( v44 == 1 )
            v45 = nLen;
        }
        else
        {
          v45 = 0;
        }
        v54 = *(v45 + 9);
        if ( (**v54)(v43) == 5
          && (*(*v54 + 48LL))(v54) == 4
          && (v46 = v54[6]) != 0
          && (Ptr = CSchemaClassInfo::MetaGetPtr(
                      v46,
                      "MResourceTypeForInfoType",
                      SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
                      0)) != 0 )
        {
          v53 = *Ptr;
        }
        else
        {
LABEL_52:
          v53 = 0;
        }
        v25 = *v13;
        if ( *v13 != 0 )
        {
          if ( *v25 != v11 )
          {
            v26 = *v13;
            do
            {
              v26 = *(v26 + 1);
              if ( v26 == 0 )
                goto LABEL_58;
            }
            while ( v11 != *v26 );
          }
LABEL_68:
          LODWORD(pEmptyString) = v11;
          v67.m_pString = 0;
          m_Root = tokenCollisionTest->m_Tree.m_Root;
          if ( m_Root == -1 )
            goto LABEL_83;
          m_pMemory = tokenCollisionTest->m_Tree.m_Elements.m_pMemory;
          do
          {
            while ( 1 )
            {
              v31 = m_Root;
              if ( tokenCollisionTest->m_Tree.m_LessFunc.m_LessFunc(&pEmptyString, &m_pMemory[v31].m_Data) == 0 )
                break;
              m_pMemory = tokenCollisionTest->m_Tree.m_Elements.m_pMemory;
              m_Root = m_pMemory[m_Root].m_Left;
              if ( m_Root == -1 )
                goto LABEL_74;
            }
            if ( tokenCollisionTest->m_Tree.m_LessFunc.m_LessFunc(
                   &tokenCollisionTest->m_Tree.m_Elements.m_pMemory[v31].m_Data,
                   &pEmptyString) == 0 )
              break;
            m_pMemory = tokenCollisionTest->m_Tree.m_Elements.m_pMemory;
            m_Root = m_pMemory[v31].m_Right;
          }
          while ( m_Root != -1 );
LABEL_74:
          if ( v67.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v67);
          if ( m_Root == -1 )
          {
LABEL_83:
            metaValues.m_Size = v11;
            metaValues.m_Memory.m_pMemory = 0;
            v37 = tokenCollisionTest->m_Tree.m_Root;
            if ( v37 != -1 )
            {
              while ( 1 )
              {
                v40 = tokenCollisionTest->m_Tree.m_LessFunc.m_LessFunc(
                        &metaValues,
                        &tokenCollisionTest->m_Tree.m_Elements.m_pMemory[v37].m_Data) == 0;
                v41 = tokenCollisionTest->m_Tree.m_Elements.m_pMemory;
                if ( v40 )
                {
                  m_Right = v41[v37].m_Right;
                  v39 = 0;
                  if ( m_Right == -1 )
                    goto LABEL_89;
                }
                else
                {
                  m_Right = v41[v37].m_Left;
                  v39 = 1;
                  if ( m_Right == -1 )
                    goto LABEL_89;
                }
                v37 = m_Right;
              }
            }
            v39 = 0;
LABEL_89:
            nLena = CUtlRBTree<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int,CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int>,int>>::NewNode(
                      &tokenCollisionTest->m_Tree,
                      &metaValues);
            CUtlRBTree<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int,CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int>,int>>::LinkToParent(
              &tokenCollisionTest->m_Tree,
              nLena,
              v37,
              v39);
            ++tokenCollisionTest->m_Tree.m_NumElements;
            if ( metaValues.m_Memory.m_pMemory != 0 )
              CUtlString::FreeMemoryBlock(&metaValues.m_Memory);
            CUtlString::operator=(&tokenCollisionTest->m_Tree.m_Elements.m_pMemory[nLena].m_Data.elem, pKeyName);
          }
          else
          {
            v32 = m_Root;
            v33 = CUtlString::Get(&tokenCollisionTest->m_Tree.m_Elements.m_pMemory[v32].m_Data.elem);
            if ( V_stricmp_fast(pKeyName, v33) != 0 && LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
            {
              v34 = CUtlString::Get(&tokenCollisionTest->m_Tree.m_Elements.m_pMemory[v32].m_Data.elem);
              LODWORD(metaValues.m_Memory.m_pMemory) = 624;
              *&metaValues.m_Size = "entitysystem.cpp";
              *&metaValues.m_Memory.m_nAllocationCount = "AddComponentProceduralKeys";
              LoggingSystem_Log(
                LOG_ENTITY_SYSTEM,
                LoggingSeverity_t::LS_ERROR,
                &metaValues,
                "CUtlStringToken hash collision between the two fields %s and %s!\n"
                "\tRename one of the keyfieldnames to fix the error.",
                pKeyName,
                v34);
            }
          }
          goto LABEL_22;
        }
LABEL_58:
        v27 = *(v13 + 1);
        if ( v27 != 0 )
        {
          if ( v25 != v27 )
          {
            if ( v11 == *v27 )
              goto LABEL_68;
            v28 = *(v13 + 1);
            while ( 1 )
            {
              v28 = *(v28 + 8);
              if ( v25 == v28 )
                goto LABEL_64;
              if ( v11 == *v28 )
                goto LABEL_68;
            }
          }
        }
        else
        {
LABEL_64:
          if ( v25 != v27 )
          {
            while ( v11 != *v27 )
            {
              v27 = *(v27 + 8);
              if ( v27 == v25 )
                goto LABEL_82;
            }
            goto LABEL_68;
          }
        }
LABEL_82:
        pInfo->m_atomicFields.m_bNeedsCommit = 1;
        v35 = CUtlMemoryPoolBase::Alloc(&p_m_atomicFields->m_EntryMemory);
        v35[1] = *(v13 + 1);
        *(v13 + 1) = v35;
        v35[2] = nLen;
        v36 = *(v35 + 43);
        *v35 = v11;
        v35[3] = m_pKeyName;
        *(v35 + 20) = -1;
        v35[4] = v53;
        *(v35 + 42) = 0;
        *(v35 + 43) = (2 * v55) | v36 & 0xFC;
        goto LABEL_68;
      }
LABEL_22:
      v64 = (v64 + 8);
    }
    while ( v64 != v60 );
  }
  CSchemaFieldIterator::CSchemaFieldIterator(
    &iter,
    pSchemaInfo,
    SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
    pSkipClass);
  while ( CSchemaFieldIterator::IsValid(&iter) )
  {
    metaValues.m_Size = 0;
    metaValues.m_Memory.m_pMemory = 0;
    metaValues.m_Memory.m_nAllocationCount = 0;
    metaValues.m_Memory.m_nGrowSize = 0;
    CSchemaFieldIterator::GetAllMetaPtrsInternal(&iter, "MKeyfieldname", &metaValues);
    pEmptyString = "";
    if ( metaValues.m_Size > 0 )
      goto LABEL_26;
    if ( !CSchemaFieldIterator::IsMetaPresent(&iter, "MHasSubKeyfields") )
    {
      CUtlVectorBase<char const**,CUtlMemory<char const**,int>>::~CUtlVectorBase(&metaValues);
      goto LABEL_45;
    }
    m_Size = metaValues.m_Size;
    v22 = metaValues.m_Size;
    if ( metaValues.m_Size == metaValues.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char const**,int>::Grow(&metaValues.m_Memory, 1);
      v22 = metaValues.m_Size;
    }
    v23 = v22 + 1;
    metaValues.m_Size = v23;
    v24 = &metaValues.m_Memory.m_pMemory[m_Size];
    if ( v24 != 0 )
    {
      *v24 = &pEmptyString;
      v23 = metaValues.m_Size;
    }
    if ( v23 > 0 )
    {
LABEL_26:
      v17 = 0;
      do
      {
        v18 = *metaValues.m_Memory.m_pMemory[v17];
        Type = CSchemaFieldIterator::GetType(&iter);
        if ( (**Type)(Type) == 5 && (*(*Type + 48LL))(Type) == 4 )
        {
          v20 = *(Type + 6);
          if ( pKeyPrefix != 0 && *pKeyPrefix != 0 )
          {
            if ( v18 != 0 && *v18 != 0 )
              V_sprintf_safe<260ul>(pKeyName, "%s.%s", pKeyPrefix, v18);
            else
              V_strcpy_safe<260ul>(pKeyName, pKeyPrefix);
          }
          else
          {
            V_strcpy_safe<260ul>(pKeyName, v18);
          }
          CEntitySystem::AddComponentProceduralKeys(this, pKeyName, v20, bFlatten, pInfo, tokenCollisionTest);
        }
        ++v17;
      }
      while ( metaValues.m_Size > v17 );
    }
    metaValues.m_Size = 0;
    if ( (metaValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char const**,int>::Purge(&metaValues.m_Memory);
      if ( (metaValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char const**,int>::Purge(&metaValues.m_Memory);
    }
LABEL_45:
    CSchemaFieldIterator::Advance(&iter);
  }
  CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&iter.m_InheritanceIterator.m_ClassesToTraverse);
  tags.m_Size = 0;
  if ( (tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<ComponentKeyField_t *,int>::Purge(&tags.m_Memory);
    if ( (tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentKeyField_t *,int>::Purge(&tags.m_Memory);
  }
}


// CEntitySystem::AddKeyToUnserialize  (line 678, @0x00000000030b7b30, libserver.so)  // inlines: Alloc, As<CSchemaType_Atomic>, As<const CSchemaType_Atomic_T>, As<const CSchemaType_DeclaredClass>, CUtlString, CopyConstruct<ComponentUnserializerFieldInfo_t>, Element, Find, FindInsertionPosition, GetPtr, GetResourceTypeOfStrongHandle, GetValue, Insert, InsertAt, InsertUncommitted, InternalAs, IsResourceStrongHandle, LeafCodeInfo_t, LeftChild, MakeEntityKeyId, MakeStringToken, Node_t, RightChild, SchemaMetaGetPtr2, V_strlen, V_strncpy<int>, memset, operator(), operator[], ~CUtlString, ~Node_t
// calls: CUtlString::FreeMemoryBlock, CUtlString::Get, V_stricmp_fast, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), MurmurHash2LowerCase, CUtlRBTree<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int, CUtlMap<CUtlStringToken, CUtlString, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int, CUtlMap<CUtlStringToken, CUtlString, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int>, int> >::LinkToParent, CUtlString::operator=, CSchemaType::InternalAs, CSchemaClassInfo::MetaGetPtr, strlen (17 total)
// callers: CEntitySystem::AddComponentFieldUnserializer
// strings: "CUtlStringToken hash collision between the two fields %s and %s!\n\tRename one of the key, "entitysystem.cpp", "AddKeyToUnserialize", "MResourceTypeForInfoType"
void __fastcall CEntitySystem::AddKeyToUnserialize(
        CEntitySystem *const this,
        const CEntitySystem::ComponentFieldUnserializerInfo_t *const info,
        const char *pKeyName,
        const char *pSharedKeyName,
        CSchemaType *pType,
        uint32 nFieldOffset,
        EntityKeyTransformType_t keyTransformType,
        bool bIsMatrix3x4SubKey)
{
  const char *v8; // r14
  bool v10; // r8
  int v11; // ebx
  uint32 v12; // r15d
  bool m_bIsRemoved; // al
  unsigned int (__fastcall **v14)(CSchemaType *); // rax
  _QWORD *Ptr; // rax
  ComponentUnserializerClassInfo_t::FieldHash_t *p_m_atomicFields; // rdi
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashBucket_t *v17; // rbx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *m_pFirst; // rdx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *v19; // rax
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *m_pFirstUncommitted; // rcx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *v21; // rax
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *v22; // rax
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *v23; // rax
  CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)> *m_pTokenCollisionTest; // r12
  __int64 m_Root; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int>::Node_t,int> *m_pMemory; // rax
  __int64 v27; // rbx
  __int64 v28; // r13
  const char *v29; // rax
  const char *v30; // rax
  uint32 v31; // eax
  int v32; // r13d
  int m_Right; // eax
  bool v34; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int>::Node_t,int> *v35; // rax
  int v36; // eax
  __int64 v37; // r15
  int v38; // eax
  __int64 v39; // rsi
  CSchemaType *v40; // rdx
  int v41; // eax
  const CSchemaType *const *v42; // rax
  const void *v43; // rax
  const CSchemaClassInfo *v44; // rdi
  size_t v45; // rdi
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *v46; // rax
  CSchemaType *m_pType; // rdx
  bool v48; // bl
  bool v49; // al
  __int16 v50; // [rsp+8h] [rbp-88h]
  __int16 nFieldOffseta; // [rsp+Ch] [rbp-84h]
  uint32 nFieldOffsetb; // [rsp+Ch] [rbp-84h]
  LeafCodeInfo_t pCopyFrom; // [rsp+20h] [rbp-70h] BYREF
  ComponentUnserializerFieldInfo_t fieldInfo; // [rsp+40h] [rbp-50h] BYREF

  v8 = pSharedKeyName;
  v10 = bIsMatrix3x4SubKey;
  if ( pKeyName != 0 )
  {
    v11 = 0;
    v12 = 0;
    if ( *pKeyName != 0 )
    {
      nFieldOffseta = nFieldOffset;
      v31 = MurmurHash2LowerCase(pKeyName, 0x31415926u);
      LOWORD(nFieldOffset) = nFieldOffseta;
      v10 = bIsMatrix3x4SubKey;
      if ( g_bUpdateStringTokenDatabase )
      {
        v50 = nFieldOffseta;
        nFieldOffsetb = v31;
        RegisterStringToken(v31, pKeyName, 0, 1);
        v10 = bIsMatrix3x4SubKey;
        LOWORD(nFieldOffset) = v50;
        v31 = nFieldOffsetb;
      }
      v12 = v31;
      v11 = v31 & 0xF;
    }
    *&fieldInfo.m_nOffset = 0;
    memset(&fieldInfo, 0, 24);
    m_bIsRemoved = info->m_bIsRemoved;
    fieldInfo.m_nOffset = nFieldOffset;
    *(&fieldInfo + 27) = ((4 * m_bIsRemoved) | v10);
    if ( v8 != 0 )
      goto LABEL_4;
    LODWORD(v8) = strlen(pKeyName) + 1;
    v45 = v8;
LABEL_68:
    fieldInfo.m_pName = operator new[](v45);
    _V_strncpy(fieldInfo.m_pName, pKeyName, v8);
    *(&fieldInfo + 27) |= 2u;
    goto LABEL_5;
  }
  v11 = 0;
  v12 = 0;
  *&fieldInfo.m_nOffset = 0;
  memset(&fieldInfo, 0, 24);
  v49 = info->m_bIsRemoved;
  fieldInfo.m_nOffset = nFieldOffset;
  *(&fieldInfo + 27) = ((4 * v49) | bIsMatrix3x4SubKey);
  if ( pSharedKeyName == 0 )
  {
    v45 = 1;
    LOBYTE(v8) = 1;
    goto LABEL_68;
  }
LABEL_4:
  fieldInfo.m_pName = v8;
LABEL_5:
  v14 = *pType;
  fieldInfo.m_pType = pType;
  if ( (*v14)(pType) != 4 )
    goto LABEL_6;
  v38 = (**pType)(pType);
  v40 = 0;
  if ( v38 == 4 )
  {
    (*(*pType + 48LL))(pType, v39, 0);
    v40 = pType;
  }
  if ( (((v41 = *(v40 + 16)) - 4007) <= 2 || v41 == 4000)
    && (v42 = CSchemaType::InternalAs(
                pType,
                SchemaTypeCategory_t::SCHEMA_TYPE_ATOMIC,
                SchemaAtomicCategory_t::SCHEMA_ATOMIC_T),
        (v43 = CSchemaType::InternalAs(
                 v42[9],
                 SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_CLASS,
                 SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID)) != 0)
    && (v44 = *(v43 + 6)) != 0 )
  {
    Ptr = CSchemaClassInfo::MetaGetPtr(
            v44,
            "MResourceTypeForInfoType",
            SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
            0);
    if ( Ptr != 0 )
      Ptr = *Ptr;
  }
  else
  {
LABEL_6:
    Ptr = 0;
  }
  fieldInfo.m_resourceType = Ptr;
  fieldInfo.m_keyTransformType = keyTransformType;
  p_m_atomicFields = &info->m_pUnserializerInfo->m_atomicFields;
  v17 = &p_m_atomicFields->m_aBuckets[v11];
  m_pFirst = v17->m_pFirst;
  if ( v17->m_pFirst != 0 )
  {
    if ( v12 == m_pFirst->m_uiKey )
      goto LABEL_33;
    v19 = v17->m_pFirst;
    while ( 1 )
    {
      v19 = v19->m_pNext;
      if ( v19 == 0 )
        break;
      if ( v12 == v19->m_uiKey )
        goto LABEL_33;
    }
  }
  m_pFirstUncommitted = v17->m_pFirstUncommitted;
  if ( m_pFirstUncommitted == 0 )
    goto LABEL_18;
  if ( m_pFirst != m_pFirstUncommitted )
  {
    if ( v12 == m_pFirstUncommitted->m_uiKey )
      goto LABEL_33;
    v21 = v17->m_pFirstUncommitted;
    while ( 1 )
    {
      v21 = v21->m_pNext;
      if ( m_pFirst == v21 )
        break;
      if ( v12 == v21->m_uiKey )
        goto LABEL_33;
    }
LABEL_18:
    if ( m_pFirst == 0 )
      goto LABEL_23;
  }
  if ( v12 == m_pFirst->m_uiKey )
    goto LABEL_33;
  v22 = v17->m_pFirst;
  while ( 1 )
  {
    v22 = v22->m_pNext;
    if ( v22 == 0 )
      break;
    if ( v12 == v22->m_uiKey )
      goto LABEL_33;
  }
LABEL_23:
  if ( m_pFirstUncommitted != 0 )
  {
    if ( m_pFirst == m_pFirstUncommitted )
    {
LABEL_69:
      info->m_pUnserializerInfo->m_atomicFields.m_bNeedsCommit = 1;
      v46 = CUtlMemoryPoolBase::Alloc(&p_m_atomicFields->m_EntryMemory);
      v46->m_pNext = v17->m_pFirstUncommitted;
      m_pType = fieldInfo.m_pType;
      v17->m_pFirstUncommitted = v46;
      v46->m_uiKey = v12;
      v46->m_Data.m_pType = m_pType;
      v46->m_Data.m_pName = fieldInfo.m_pName;
      v46->m_Data.m_resourceType = fieldInfo.m_resourceType;
      *&v46->m_Data.m_nOffset = *&fieldInfo.m_nOffset;
      goto LABEL_33;
    }
    if ( v12 == m_pFirstUncommitted->m_uiKey )
      goto LABEL_33;
    v23 = v17->m_pFirstUncommitted;
    while ( 1 )
    {
      v23 = v23->m_pNext;
      if ( m_pFirst == v23 )
        break;
      if ( v12 == v23->m_uiKey )
        goto LABEL_33;
    }
  }
  if ( m_pFirst == m_pFirstUncommitted )
    goto LABEL_69;
  while ( v12 != m_pFirstUncommitted->m_uiKey )
  {
    m_pFirstUncommitted = m_pFirstUncommitted->m_pNext;
    if ( m_pFirst == m_pFirstUncommitted )
      goto LABEL_69;
  }
LABEL_33:
  *&pCopyFrom.m_nLine = 0;
  LODWORD(pCopyFrom.m_szFile) = v12;
  m_pTokenCollisionTest = info->m_pTokenCollisionTest;
  m_Root = m_pTokenCollisionTest->m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory;
    do
    {
      while ( 1 )
      {
        v27 = m_Root;
        if ( !m_pTokenCollisionTest->m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &m_pMemory[v27].m_Data.key) )
          break;
        m_pMemory = m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_39;
      }
      if ( !m_pTokenCollisionTest->m_Tree.m_LessFunc.m_LessFunc(
              &m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory[v27].m_Data.key,
              &pCopyFrom) )
        break;
      m_pMemory = m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v27].m_Right;
    }
    while ( m_Root != -1 );
LABEL_39:
    if ( *&pCopyFrom.m_nLine != 0 )
      CUtlString::FreeMemoryBlock(&pCopyFrom.m_nLine);
    if ( m_Root != -1 )
    {
      v28 = m_Root;
      v29 = CUtlString::Get(&info->m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory[v28].m_Data.elem);
      if ( V_stricmp_fast(pKeyName, v29) != 0 && LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
      {
        v30 = CUtlString::Get(&info->m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory[v28].m_Data.elem);
        pCopyFrom.m_nLine = 726;
        pCopyFrom.m_szFile = "entitysystem.cpp";
        pCopyFrom.m_szFunction = "AddKeyToUnserialize";
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          LoggingSeverity_t::LS_ERROR,
          &pCopyFrom,
          "CUtlStringToken hash collision between the two fields %s and %s!\n"
          "\tRename one of the keyfieldnames to fix the error.",
          pKeyName,
          v30);
      }
      return;
    }
    m_pTokenCollisionTest = info->m_pTokenCollisionTest;
  }
  *&pCopyFrom.m_nLine = 0;
  LODWORD(pCopyFrom.m_szFile) = v12;
  v32 = m_pTokenCollisionTest->m_Tree.m_Root;
  if ( v32 != -1 )
  {
    while ( 1 )
    {
      v34 = !m_pTokenCollisionTest->m_Tree.m_LessFunc.m_LessFunc(
               &pCopyFrom,
               &m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory[v32].m_Data.key);
      v35 = m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory;
      if ( v34 )
      {
        m_Right = v35[v32].m_Right;
        v48 = 0;
        if ( m_Right == -1 )
          goto LABEL_56;
      }
      else
      {
        m_Right = v35[v32].m_Left;
        v48 = 1;
        if ( m_Right == -1 )
          goto LABEL_56;
      }
      v32 = m_Right;
    }
  }
  v48 = 0;
LABEL_56:
  v36 = CUtlRBTree<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int,CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int>,int>>::NewNode(
          &m_pTokenCollisionTest->m_Tree,
          &pCopyFrom);
  v37 = v36;
  CUtlRBTree<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int,CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int>,int>>::LinkToParent(
    &m_pTokenCollisionTest->m_Tree,
    v36,
    v32,
    v48);
  ++m_pTokenCollisionTest->m_Tree.m_NumElements;
  if ( *&pCopyFrom.m_nLine != 0 )
    CUtlString::FreeMemoryBlock(&pCopyFrom.m_nLine);
  CUtlString::operator=(&info->m_pTokenCollisionTest->m_Tree.m_Elements.m_pMemory[v37].m_Data.elem, pKeyName);
}


// CompareMetaValues<char const*>  (line 744, @0x00000000030ac160, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
bool __fastcall CompareMetaValues<char const*>(const char **v1, const char **v2)
{
  return strcmp(*v1, *v2) == 0;
}


// CEntitySystem::BuildComponentUnserializer  (line 878, @0x00000000030b9250, libserver.so)  // inlines: AddToTail, Advance, CUtlMemory, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CompareMetaValues<char const*>, CompareMetaValues<int>, ComponentFieldUnserializerInfo_t, ConvertToExternalMemory, CopyConstruct<CUtlString>, CopyConstruct<char const**>, Count, Element, GetAllMetaPtrs<char const**>, GetAllMetaPtrs<int*>, GetAllPtrs, GetBaseClassCount, GetMetaOverrideCount, GetMetaOverrideData, GetPtr, GetValue, GrowMemory, IsPresent, IsPresent<MGenerateArrayKeynames>, IsPresent<MIsWorldSpace>, IsPresent<MIsWorldSpaceOrientation>, IsValid, LeafCodeInfo_t, MetaTagOverrideInfo_t, Purge, PurgeAndDeleteElements, Purge_FixedGrowable, Remove, RemoveAll, SchemaMetaGetAllPtrs2<char const**>, SchemaMetaGetAllPtrs2<int*>, SchemaMetaGetPtr2, SchemaMetaIsPresent2, ShiftElementsLeft, TagInfo<MGenerateArrayKeynamesFirstIndex>, TagInfo<MKeyfieldname>, V_memcmp, V_memmove, WasTagAdded, WasTagRemoved, _V_strcmp, memmove, operator[], ~CSchemaFieldIterator, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~ComponentFieldUnserializerInfo_t, ~MetaTagOverrideInfo_t
// calls: V_stristr_fast(char const*,char const*), Warning, CSchemaFieldIterator::CSchemaFieldIterator, CSchemaFieldIterator::GetMetaPtr, CSchemaFieldIterator::IsMetaPresent, CEntitySystem::AddComponentFieldUnserializer, CSchemaFieldIterator::Advance, CSchemaFieldIterator::IsValid, CSchemaFieldIterator::GetAllMetaPtrsInternal, CSchemaFieldIterator::GetRawFieldHandle, CSchemaFieldIterator::GetFieldMemoryOffset, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll (36 total)
// callers: CEntitySystem::AddComponentFieldUnserializer, CEntitySystem::BuildComponentUnserializers
// strings: "CEntitySystem::BuildComponentUnserializer '%s'\n", "MGenerateArrayKeynamesFirstIndex", "MIsWorldSpaceOrientation", "MIsWorldSpace", "MKeyfieldname", "MGenerateArrayKeynames" (11 total)
// globals: s_SpewComponentUnserializerForClassSubstring
void __fastcall CEntitySystem::BuildComponentUnserializer(
        CEntitySystem *const this,
        const char *pKeyPrefix,
        ClassIntrospectionHandle_t pSchemaInfo,
        uint32 nOffset,
        bool bFlatten,
        ComponentUnserializerClassInfo_t *pInfo,
        CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)> *const tokenCollisionTest)
{
  ClassIntrospectionHandle_t v7; // r15
  int *MetaPtr; // rax
  int v11; // eax
  uint32 FieldMemoryOffset; // eax
  _QWORD *v13; // rax
  __int64 v14; // r13
  int v15; // r12d
  CUtlString *v16; // rbx
  const char *v17; // rax
  const char *v18; // rsi
  __int64 m_Size; // rbx
  int v20; // eax
  __int64 m_fieldOwnerClass_low; // rbx
  int m_fieldOwnerClass; // eax
  const char ***v23; // rax
  __int64 v24; // r12
  int v25; // ebx
  __int64 v26; // rsi
  const char *m_pImplChars; // r8
  CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int> > *p_m_ClassesToTraverse; // r14
  char *v29; // rax
  char *v30; // r13
  __int64 v31; // rbx
  const char ***m_pMemory; // r15
  CUtlMemory<CUtlString,int> *v33; // r13
  const char ***v34; // r14
  const char *v35; // rbx
  const char ***v36; // r12
  int v37; // eax
  bool v38; // sf
  unsigned int v39; // edx
  const char **v40; // rax
  __int64 v41; // r10
  char v42; // r13
  const CSchemaClassInfo *i; // rax
  unsigned int v44; // edx
  const char **v45; // rax
  __int64 v46; // r10
  unsigned int v47; // edx
  const char **v48; // rax
  __int64 v49; // r10
  const CSchemaFieldMetadataOverride *v50; // rbx
  bool IsMetaPresent; // r12
  unsigned int v52; // edx
  const char **m_pImplElements; // rax
  __int64 v54; // r10
  const CSchemaFieldMetadataOverride *v55; // rbx
  unsigned int v56; // edx
  const char **v57; // rax
  __int64 v58; // r10
  const CSchemaFieldMetadataOverride *v59; // rbx
  unsigned int v60; // edx
  const char **v61; // rax
  __int64 v62; // r10
  const CSchemaFieldMetadataOverride *v63; // rax
  const CSchemaFieldMetadataOverride *v64; // r13
  __int64 v65; // rbx
  uint32 v66; // eax
  int **v67; // r15
  int **v68; // r14
  CUtlMemory<CUtlString,int> *v69; // r13
  const void *v70; // rbx
  int **v71; // r12
  int v72; // eax
  unsigned int v73; // edx
  const char **v74; // rax
  __int64 v75; // r10
  int v76; // eax
  unsigned int v77; // edx
  const char **v78; // rax
  __int64 v79; // r10
  CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int> > *v80; // [rsp+0h] [rbp-690h]
  const CSchemaClassInfo *v81; // [rsp+8h] [rbp-688h]
  CSchemaFieldIterator *v82; // [rsp+18h] [rbp-678h]
  const CSchemaFieldMetadataOverride *v83; // [rsp+18h] [rbp-678h]
  ClassIntrospectionHandle_t classInfo; // [rsp+28h] [rbp-668h]
  ClassIntrospectionHandle_t classInfoa; // [rsp+28h] [rbp-668h]
  const CSchemaClassInfo *pSkipClass; // [rsp+30h] [rbp-660h]
  int v89; // [rsp+54h] [rbp-63Ch]
  char *v90; // [rsp+68h] [rbp-628h]
  int v91; // [rsp+68h] [rbp-628h]
  CUtlMemory<char*,int> *v92; // [rsp+78h] [rbp-618h]
  int desta; // [rsp+80h] [rbp-610h]
  const void **destb; // [rsp+80h] [rbp-610h]
  const char ***bIsChanged; // [rsp+88h] [rbp-608h]
  char bIsChangeda; // [rsp+88h] [rbp-608h]
  int v98; // [rsp+98h] [rbp-5F8h]
  int v99; // [rsp+98h] [rbp-5F8h]
  CUtlMemory<CUtlString,int> *v100; // [rsp+A0h] [rbp-5F0h]
  CUtlMemory<CUtlString,int> *v101; // [rsp+A0h] [rbp-5F0h]
  CUtlVector<void*,CUtlMemory<void*,int> > *metaValues; // [rsp+A8h] [rbp-5E8h]
  CUtlString v103; // [rsp+B0h] [rbp-5E0h] BYREF
  const char *pEmptyString; // [rsp+B8h] [rbp-5D8h] BYREF
  const char *szSeparators[2]; // [rsp+C0h] [rbp-5D0h] BYREF
  MetaTagOverrideInfo_t<MKeyfieldname> keyFieldNameOverrides; // [rsp+D0h] [rbp-5C0h] BYREF
  MetaTagOverrideInfo_t<MGenerateArrayKeynamesFirstIndex> firstIndexInfo; // [rsp+120h] [rbp-570h] BYREF
  CEntitySystem::ComponentFieldUnserializerInfo_t fieldInfo; // [rsp+170h] [rbp-520h] BYREF
  CSchemaFieldIterator iter; // [rsp+1D0h] [rbp-4C0h] BYREF
  CSchemaFieldIterator v110; // [rsp+290h] [rbp-400h] BYREF
  CSchemaFieldIterator v111; // [rsp+350h] [rbp-340h] BYREF
  CSchemaFieldIterator v112; // [rsp+410h] [rbp-280h] BYREF
  CSchemaFieldIterator v113; // [rsp+4D0h] [rbp-1C0h] BYREF
  CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int> > v114; // [rsp+590h] [rbp-100h] BYREF
  unsigned __int64 v115; // [rsp+658h] [rbp-38h]

  v7 = pSchemaInfo;
  v115 = __readfsqword(0x28u);
  if ( s_SpewComponentUnserializerForClassSubstring != 0
    && V_stristr_fast(pSchemaInfo->m_Name.m_pImplChars, s_SpewComponentUnserializerForClassSubstring) != 0 )
  {
    Warning("CEntitySystem::BuildComponentUnserializer '%s'\n", v7->m_Name.m_pImplChars);
  }
  memset(&fieldInfo.m_pField, 0, 20);
  fieldInfo.m_nFirstArrayIndex = -1;
  fieldInfo.m_bIsWorldSpaceOrientation = 0;
  fieldInfo.m_bIsWorldSpace = 0;
  fieldInfo.m_bIsRemoved = 0;
  fieldInfo.m_ArraySuffixes.m_Size = 0;
  fieldInfo.m_ArraySuffixes.m_Memory.m_pMemory = 0;
  fieldInfo.m_ArraySuffixes.m_Memory.m_nAllocationCount = 0;
  fieldInfo.m_ArraySuffixes.m_Memory.m_nGrowSize = 0;
  fieldInfo.m_pTokenCollisionTest = tokenCollisionTest;
  fieldInfo.m_pClass = v7;
  fieldInfo.m_pUnserializerInfo = pInfo;
  fieldInfo.m_pKeyPrefix = pKeyPrefix;
  pSkipClass = 0;
  if ( !bFlatten && v7->m_BaseClasses.m_Data.m_nImplLength != 0 )
    pSkipClass = *(v7->m_BaseClasses.m_Data.m_pImplElements + 1);
  CSchemaFieldIterator::CSchemaFieldIterator(
    &iter,
    v7,
    SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
    pSkipClass);
  while ( CSchemaFieldIterator::IsValid(&iter) )
  {
    LODWORD(keyFieldNameOverrides.m_fieldOwnerClass) = 0;
    keyFieldNameOverrides.m_field = 0;
    keyFieldNameOverrides.m_nFieldOffset = 0;
    *(&keyFieldNameOverrides.m_nFieldOffset + 1) = 0;
    CSchemaFieldIterator::GetAllMetaPtrsInternal(&iter, "MKeyfieldname", &keyFieldNameOverrides);
    pEmptyString = "";
    if ( SLODWORD(keyFieldNameOverrides.m_fieldOwnerClass) <= 0 )
    {
      if ( !CSchemaFieldIterator::IsMetaPresent(&iter, "MHasSubKeyfields") )
      {
        CUtlVectorBase<char const**,CUtlMemory<char const**,int>>::~CUtlVectorBase(&keyFieldNameOverrides);
        goto LABEL_12;
      }
      m_fieldOwnerClass_low = SLODWORD(keyFieldNameOverrides.m_fieldOwnerClass);
      m_fieldOwnerClass = keyFieldNameOverrides.m_fieldOwnerClass;
      if ( LODWORD(keyFieldNameOverrides.m_fieldOwnerClass) == keyFieldNameOverrides.m_nFieldOffset )
      {
        CUtlMemory<char const**,int>::Grow(&keyFieldNameOverrides.m_field, 1);
        m_fieldOwnerClass = keyFieldNameOverrides.m_fieldOwnerClass;
      }
      LODWORD(keyFieldNameOverrides.m_fieldOwnerClass) = m_fieldOwnerClass + 1;
      v23 = (&keyFieldNameOverrides.m_field->m_Name.m_pImplChars + m_fieldOwnerClass_low);
      if ( v23 != 0 )
        *v23 = &pEmptyString;
    }
    fieldInfo.m_pField = CSchemaFieldIterator::GetRawFieldHandle(&iter);
    fieldInfo.m_pKeyfieldNames = &keyFieldNameOverrides;
    FieldMemoryOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&iter);
    fieldInfo.m_nFirstArrayIndex = -1;
    fieldInfo.m_nFieldOffset = nOffset + FieldMemoryOffset;
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&fieldInfo.m_ArraySuffixes);
    if ( CSchemaFieldIterator::IsMetaPresent(&iter, "MGenerateArrayKeynames") )
    {
      MetaPtr = CSchemaFieldIterator::GetMetaPtr(&iter, "MGenerateArrayKeynamesFirstIndex");
      if ( MetaPtr != 0 )
        v11 = *MetaPtr;
      else
        v11 = 0;
      fieldInfo.m_nFirstArrayIndex = v11;
    }
    else if ( CSchemaFieldIterator::IsMetaPresent(&iter, "MGenerateArrayKeynamesList") )
    {
      fieldInfo.m_nFirstArrayIndex = 0;
      v13 = CSchemaFieldIterator::GetMetaPtr(&iter, "MGenerateArrayKeynamesList");
      if ( v13 != 0 && *v13 != 0 )
      {
        LODWORD(firstIndexInfo.m_fieldOwnerClass) = 0;
        szSeparators[1] = ";";
        firstIndexInfo.m_field = 0;
        firstIndexInfo.m_nFieldOffset = 0;
        *(&firstIndexInfo.m_nFieldOffset + 1) = 0;
        szSeparators[0] = ",";
        V_SplitString2(*v13, szSeparators, 2, &firstIndexInfo);
        if ( SLODWORD(firstIndexInfo.m_fieldOwnerClass) > 0 )
        {
          v14 = 0;
          v15 = 0;
          do
          {
            v18 = *(&firstIndexInfo.m_field->m_Name.m_pImplChars + v14);
            v103.m_pString = 0;
            CUtlString::Set(&v103, v18);
            m_Size = fieldInfo.m_ArraySuffixes.m_Size;
            v20 = fieldInfo.m_ArraySuffixes.m_Size;
            if ( fieldInfo.m_ArraySuffixes.m_Size == fieldInfo.m_ArraySuffixes.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CUtlString,int>::Grow(&fieldInfo.m_ArraySuffixes.m_Memory, 1);
              v20 = fieldInfo.m_ArraySuffixes.m_Size;
            }
            fieldInfo.m_ArraySuffixes.m_Size = v20 + 1;
            v16 = &fieldInfo.m_ArraySuffixes.m_Memory.m_pMemory[m_Size];
            if ( v16 != 0 )
            {
              v16->m_pString = 0;
              v17 = CUtlString::Get(&v103);
              CUtlString::Set(v16, v17);
            }
            if ( v103.m_pString != 0 )
              CUtlString::FreeMemoryBlock(&v103);
            ++v15;
            v14 += 8;
          }
          while ( SLODWORD(firstIndexInfo.m_fieldOwnerClass) > v15 );
          if ( SLODWORD(firstIndexInfo.m_fieldOwnerClass) > 0 )
          {
            v24 = 0;
            v25 = 0;
            do
            {
              ++v25;
              v26 = *(&firstIndexInfo.m_field->m_Name.m_pImplChars + v24);
              v24 += 8;
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v26);
            }
            while ( v25 < SLODWORD(firstIndexInfo.m_fieldOwnerClass) );
          }
        }
        LODWORD(firstIndexInfo.m_fieldOwnerClass) = 0;
        if ( (*(&firstIndexInfo.m_nFieldOffset + 1) & 0xC0000000) == 0 )
        {
          CUtlMemory<char *,int>::Purge(&firstIndexInfo.m_field);
          if ( (*(&firstIndexInfo.m_nFieldOffset + 1) & 0xC0000000) == 0 )
            CUtlMemory<char *,int>::Purge(&firstIndexInfo.m_field);
        }
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
      {
        m_pImplChars = v7->m_Name.m_pImplChars;
        firstIndexInfo.m_fieldOwnerClass = "entitysystem.cpp";
        *&firstIndexInfo.m_nFieldOffset = "BuildComponentUnserializer";
        LODWORD(firstIndexInfo.m_field) = 950;
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          LoggingSeverity_t::LS_ERROR,
          &firstIndexInfo,
          "CEntitySystem::BuildComponentUnserializer '%s' specifies MGenerateArrayKeynamesList but does not contain sound list\n",
          m_pImplChars);
      }
    }
    fieldInfo.m_bIsWorldSpaceOrientation = CSchemaFieldIterator::IsMetaPresent(&iter, "MIsWorldSpaceOrientation");
    fieldInfo.m_bIsWorldSpace = CSchemaFieldIterator::IsMetaPresent(&iter, "MIsWorldSpace");
    fieldInfo.m_bIsRemoved = 0;
    CEntitySystem::AddComponentFieldUnserializer(this, &fieldInfo);
    LODWORD(keyFieldNameOverrides.m_fieldOwnerClass) = 0;
    if ( (*(&keyFieldNameOverrides.m_nFieldOffset + 1) & 0xC0000000) == 0 )
    {
      CUtlMemory<char const**,int>::Purge(&keyFieldNameOverrides.m_field);
      if ( (*(&keyFieldNameOverrides.m_nFieldOffset + 1) & 0xC0000000) == 0 )
        CUtlMemory<char const**,int>::Purge(&keyFieldNameOverrides.m_field);
    }
LABEL_12:
    CSchemaFieldIterator::Advance(&iter);
  }
  if ( !bFlatten && v7->m_FieldMetadataOverrides.m_Data.m_nImplLength != 0 )
  {
    metaValues = 0;
    p_m_ClassesToTraverse = &v114;
    v89 = 0;
    while ( 2 )
    {
      keyFieldNameOverrides.m_values.m_Size = 0;
      memset(&keyFieldNameOverrides.m_values.m_Memory, 0, 20);
      v29 = v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues;
      keyFieldNameOverrides.m_removedValues.m_Memory.m_pMemory = 0;
      keyFieldNameOverrides.m_removedValues.m_Memory.m_nAllocationCount = 0;
      keyFieldNameOverrides.m_removedValues.m_Memory.m_nGrowSize = 0;
      v30 = v29;
      v90 = v29;
      CSchemaFieldIterator::CSchemaFieldIterator(&v110, v7, SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
      CSchemaFieldIterator::FindField(&v110, *(v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues));
      keyFieldNameOverrides.m_fieldOwnerClass = CSchemaFieldIterator::CurrentClass(&v110);
      keyFieldNameOverrides.m_field = CSchemaFieldIterator::GetRawFieldHandle(&v110);
      keyFieldNameOverrides.m_nFieldOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&v110);
      CSchemaFieldIterator::GetAllMetaPtrsInternal(&v110, "MKeyfieldname", &keyFieldNameOverrides.m_values);
      if ( v30[16] != 0 )
        goto LABEL_49;
      v47 = abs32(*(v90 + 12));
      if ( v47 != 0 )
      {
        v48 = *(v90 + 5);
        v49 = &v48[2 * v47];
        while ( strcmp("MKeyfieldname", *v48) != 0 )
        {
          v48 += 2;
          if ( v48 == v49 )
            goto LABEL_64;
        }
LABEL_49:
        v31 = 0;
        if ( v7->m_BaseClasses.m_Data.m_nImplLength != 0 )
        {
          while ( 1 )
          {
            CSchemaFieldIterator::CSchemaFieldIterator(
              p_m_ClassesToTraverse,
              *(v7->m_BaseClasses.m_Data.m_pImplElements + 2 * v31 + 1),
              SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
            if ( CSchemaFieldIterator::FindField(
                   p_m_ClassesToTraverse,
                   *(v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues)) )
            {
              break;
            }
            CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(p_m_ClassesToTraverse);
            if ( abs32(v7->m_BaseClasses.m_Data.m_nImplLength) <= ++v31 )
              goto LABEL_54;
          }
          CSchemaFieldIterator::GetAllMetaPtrsInternal(
            p_m_ClassesToTraverse,
            "MKeyfieldname",
            &keyFieldNameOverrides.m_removedValues);
          CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(p_m_ClassesToTraverse);
        }
LABEL_54:
        classInfo = v7;
        v82 = p_m_ClassesToTraverse;
        v100 = (8LL * keyFieldNameOverrides.m_removedValues.m_Size);
        desta = keyFieldNameOverrides.m_values.m_Size;
        v98 = keyFieldNameOverrides.m_removedValues.m_Size - 1;
        v92 = (8LL * (keyFieldNameOverrides.m_values.m_Size - 1));
        if ( keyFieldNameOverrides.m_removedValues.m_Size - 1 >= 0 )
        {
          do
          {
            if ( desta <= 0 )
            {
              v33 = (v100 - 8);
            }
            else
            {
              m_pMemory = keyFieldNameOverrides.m_values.m_Memory.m_pMemory;
              v33 = (v100 - 8);
              v34 = (keyFieldNameOverrides.m_removedValues.m_Memory.m_pMemory + &v100[-1].m_nAllocationCount);
              bIsChanged = keyFieldNameOverrides.m_removedValues.m_Memory.m_pMemory;
              v35 = **v34;
              v36 = (keyFieldNameOverrides.m_values.m_Memory.m_pMemory + v92 + 8);
              while ( strcmp(**m_pMemory, v35) != 0 )
              {
                if ( ++m_pMemory == v36 )
                  goto LABEL_62;
              }
              v37 = keyFieldNameOverrides.m_removedValues.m_Size;
              if ( keyFieldNameOverrides.m_removedValues.m_Size - v98 - 1 > 0 )
              {
                memmove(v34, bIsChanged + v100, 8LL * (keyFieldNameOverrides.m_removedValues.m_Size - v98 - 1));
                v37 = keyFieldNameOverrides.m_removedValues.m_Size;
              }
              keyFieldNameOverrides.m_removedValues.m_Size = v37 - 1;
            }
LABEL_62:
            v38 = --v98 < 0;
            v100 = v33;
          }
          while ( !v38 );
        }
        v7 = classInfo;
        p_m_ClassesToTraverse = &v82->m_InheritanceIterator.m_ClassesToTraverse;
      }
LABEL_64:
      v39 = abs32(*(v90 + 8));
      if ( v39 != 0 )
      {
        v40 = *(v90 + 3);
        v41 = &v40[4 * v39];
        while ( strcmp("MKeyfieldname", *v40) != 0 )
        {
          v40 += 4;
          if ( v40 == v41 )
            goto LABEL_78;
        }
LABEL_68:
        v42 = 1;
      }
      else
      {
LABEL_78:
        v42 = 1;
        if ( v90[16] == 0 )
        {
          v44 = abs32(*(v90 + 12));
          if ( v44 != 0 )
          {
            v45 = *(v90 + 5);
            v46 = &v45[2 * v44];
            while ( strcmp("MKeyfieldname", *v45) != 0 )
            {
              v45 += 2;
              if ( v45 == v46 )
                goto LABEL_137;
            }
            goto LABEL_68;
          }
LABEL_137:
          v42 = 0;
        }
      }
      CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&v110.m_InheritanceIterator.m_ClassesToTraverse);
      for ( i = pSkipClass; ; i = *(i->m_BaseClasses.m_Data.m_pImplElements + 1) )
      {
        if ( i == 0 )
          goto LABEL_74;
        if ( keyFieldNameOverrides.m_fieldOwnerClass == i )
          break;
        if ( i->m_BaseClasses.m_Data.m_nImplLength == 0 )
          goto LABEL_74;
      }
      v50 = (v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues);
      CSchemaFieldIterator::CSchemaFieldIterator(&v111, v7, SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
      CSchemaFieldIterator::FindField(&v111, *(v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues));
      IsMetaPresent = CSchemaFieldIterator::IsMetaPresent(&v111, "MGenerateArrayKeynames");
      v52 = abs32(v50->m_ModifyAdds.m_Data.m_nImplLength);
      if ( v52 != 0 )
      {
        m_pImplElements = v50->m_ModifyAdds.m_Data.m_pImplElements;
        v54 = &m_pImplElements[4 * v52];
        while ( strcmp("MGenerateArrayKeynames", *m_pImplElements) != 0 )
        {
          m_pImplElements += 4;
          if ( m_pImplElements == v54 )
            goto LABEL_117;
        }
LABEL_93:
        CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&v111.m_InheritanceIterator.m_ClassesToTraverse);
        bIsChangeda = 1;
        if ( !IsMetaPresent )
          goto LABEL_94;
LABEL_120:
        firstIndexInfo.m_values.m_Size = 0;
        memset(&firstIndexInfo.m_values.m_Memory, 0, 20);
        v63 = (v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues);
        firstIndexInfo.m_removedValues.m_Memory.m_pMemory = 0;
        firstIndexInfo.m_removedValues.m_Memory.m_nAllocationCount = 0;
        firstIndexInfo.m_removedValues.m_Memory.m_nGrowSize = 0;
        v64 = v63;
        v83 = v63;
        CSchemaFieldIterator::CSchemaFieldIterator(&v112, v7, SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
        CSchemaFieldIterator::FindField(&v112, *(v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues));
        firstIndexInfo.m_fieldOwnerClass = CSchemaFieldIterator::CurrentClass(&v112);
        firstIndexInfo.m_field = CSchemaFieldIterator::GetRawFieldHandle(&v112);
        firstIndexInfo.m_nFieldOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&v112);
        CSchemaFieldIterator::GetAllMetaPtrsInternal(
          &v112,
          "MGenerateArrayKeynamesFirstIndex",
          &firstIndexInfo.m_values);
        if ( v64->m_bRemoveAll )
        {
LABEL_121:
          v65 = 0;
          if ( v7->m_BaseClasses.m_Data.m_nImplLength != 0 )
          {
            while ( 1 )
            {
              CSchemaFieldIterator::CSchemaFieldIterator(
                p_m_ClassesToTraverse,
                *(v7->m_BaseClasses.m_Data.m_pImplElements + 2 * v65 + 1),
                SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
              if ( CSchemaFieldIterator::FindField(
                     p_m_ClassesToTraverse,
                     *(v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues)) )
              {
                break;
              }
              v114.m_Size = 0;
              v66 = v114.m_Memory.m_nGrowSize & 0xC0000000;
              if ( v114.m_Memory.m_nAllocationCount < 0
                || v114.m_Memory.m_pMemory == &p_m_ClassesToTraverse->m_Memory.m_FixedMemory )
              {
                if ( v66 == 0 )
                  CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Purge(&v114.m_Memory);
              }
              else if ( v114.m_Memory.m_pMemory != 0 && v66 == 0 )
              {
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
              }
              if ( abs32(v7->m_BaseClasses.m_Data.m_nImplLength) <= ++v65 )
                goto LABEL_139;
            }
            CSchemaFieldIterator::GetAllMetaPtrsInternal(
              p_m_ClassesToTraverse,
              "MGenerateArrayKeynamesFirstIndex",
              &firstIndexInfo.m_removedValues);
            CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(p_m_ClassesToTraverse);
          }
LABEL_139:
          v81 = v7;
          v80 = p_m_ClassesToTraverse;
          v101 = (8LL * firstIndexInfo.m_removedValues.m_Size);
          v91 = firstIndexInfo.m_values.m_Size;
          v99 = firstIndexInfo.m_removedValues.m_Size - 1;
          classInfoa = (8LL * (firstIndexInfo.m_values.m_Size - 1));
          if ( firstIndexInfo.m_removedValues.m_Size - 1 >= 0 )
          {
            do
            {
              if ( v91 <= 0 )
              {
                v69 = (v101 - 8);
              }
              else
              {
                v67 = firstIndexInfo.m_removedValues.m_Memory.m_pMemory;
                v68 = firstIndexInfo.m_values.m_Memory.m_pMemory;
                v69 = (v101 - 8);
                destb = (firstIndexInfo.m_removedValues.m_Memory.m_pMemory + &v101[-1].m_nAllocationCount);
                v70 = *destb;
                v71 = (&classInfoa->m_Name.m_nImplBufferSize + firstIndexInfo.m_values.m_Memory.m_pMemory);
                while ( memcmp(*v68, v70, 4u) != 0 )
                {
                  if ( ++v68 == v71 )
                    goto LABEL_147;
                }
                v72 = firstIndexInfo.m_removedValues.m_Size;
                if ( firstIndexInfo.m_removedValues.m_Size - v99 - 1 > 0 )
                {
                  memmove(destb, v101 + v67, 8LL * (firstIndexInfo.m_removedValues.m_Size - v99 - 1));
                  v72 = firstIndexInfo.m_removedValues.m_Size;
                }
                firstIndexInfo.m_removedValues.m_Size = v72 - 1;
              }
LABEL_147:
              v38 = --v99 < 0;
              v101 = v69;
            }
            while ( !v38 );
          }
          v7 = v81;
          p_m_ClassesToTraverse = v80;
        }
        else
        {
          v77 = abs32(v83->m_ModifyRemoves.m_Data.m_nImplLength);
          if ( v77 != 0 )
          {
            v78 = v83->m_ModifyRemoves.m_Data.m_pImplElements;
            v79 = &v78[2 * v77];
            while ( strcmp("MGenerateArrayKeynamesFirstIndex", *v78) != 0 )
            {
              v78 += 2;
              if ( v78 == v79 )
                goto LABEL_149;
            }
            goto LABEL_121;
          }
        }
LABEL_149:
        v73 = abs32(v83->m_ModifyAdds.m_Data.m_nImplLength);
        if ( v73 != 0 )
        {
          v74 = v83->m_ModifyAdds.m_Data.m_pImplElements;
          v75 = &v74[4 * v73];
          while ( strcmp("MGenerateArrayKeynamesFirstIndex", *v74) != 0 )
          {
            v74 += 4;
            if ( v74 == v75 )
              goto LABEL_163;
          }
LABEL_153:
          CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&v112.m_InheritanceIterator.m_ClassesToTraverse);
          bIsChangeda = 1;
        }
        else
        {
LABEL_163:
          if ( v83->m_bRemoveAll || CSchemaFieldMetadataOverride::WasTagRemoved(v83, "MGenerateArrayKeynamesFirstIndex") )
            goto LABEL_153;
          CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&v112.m_InheritanceIterator.m_ClassesToTraverse);
        }
        v76 = **firstIndexInfo.m_values.m_Memory.m_pMemory;
        firstIndexInfo.m_removedValues.m_Size = 0;
        fieldInfo.m_nFirstArrayIndex = v76;
        if ( (firstIndexInfo.m_removedValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<int *,int>::Purge(&firstIndexInfo.m_removedValues.m_Memory);
          if ( (firstIndexInfo.m_removedValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<int *,int>::Purge(&firstIndexInfo.m_removedValues.m_Memory);
        }
        firstIndexInfo.m_values.m_Size = 0;
        if ( (firstIndexInfo.m_values.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<int *,int>::Purge(&firstIndexInfo.m_values.m_Memory);
          if ( (firstIndexInfo.m_values.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<int *,int>::Purge(&firstIndexInfo.m_values.m_Memory);
        }
      }
      else
      {
LABEL_117:
        if ( v50->m_bRemoveAll || CSchemaFieldMetadataOverride::WasTagRemoved(v50, "MGenerateArrayKeynames") )
          goto LABEL_93;
        bIsChangeda = v42;
        CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&v111.m_InheritanceIterator.m_ClassesToTraverse);
        if ( IsMetaPresent )
          goto LABEL_120;
LABEL_94:
        fieldInfo.m_nFirstArrayIndex = -1;
      }
      v55 = (v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues);
      CSchemaFieldIterator::CSchemaFieldIterator(&v113, v7, SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
      CSchemaFieldIterator::FindField(&v113, *(v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues));
      fieldInfo.m_bIsWorldSpaceOrientation = CSchemaFieldIterator::IsMetaPresent(&v113, "MIsWorldSpaceOrientation");
      v56 = abs32(v55->m_ModifyAdds.m_Data.m_nImplLength);
      if ( v56 != 0 )
      {
        v57 = v55->m_ModifyAdds.m_Data.m_pImplElements;
        v58 = &v57[4 * v56];
        while ( strcmp("MIsWorldSpaceOrientation", *v57) != 0 )
        {
          v57 += 4;
          if ( v57 == v58 )
            goto LABEL_114;
        }
LABEL_99:
        CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&v113.m_InheritanceIterator.m_ClassesToTraverse);
        bIsChangeda = 1;
      }
      else
      {
LABEL_114:
        if ( v55->m_bRemoveAll || CSchemaFieldMetadataOverride::WasTagRemoved(v55, "MIsWorldSpaceOrientation") )
          goto LABEL_99;
        CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&v113.m_InheritanceIterator.m_ClassesToTraverse);
      }
      v59 = (v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues);
      CSchemaFieldIterator::CSchemaFieldIterator(
        p_m_ClassesToTraverse,
        v7,
        SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
      CSchemaFieldIterator::FindField(
        p_m_ClassesToTraverse,
        *(v7->m_FieldMetadataOverrides.m_Data.m_pImplElements + metaValues));
      fieldInfo.m_bIsWorldSpace = CSchemaFieldIterator::IsMetaPresent(p_m_ClassesToTraverse, "MIsWorldSpace");
      v60 = abs32(v59->m_ModifyAdds.m_Data.m_nImplLength);
      if ( v60 != 0 )
      {
        v61 = v59->m_ModifyAdds.m_Data.m_pImplElements;
        v62 = &v61[4 * v60];
        while ( strcmp("MIsWorldSpace", *v61) != 0 )
        {
          v61 += 4;
          if ( v61 == v62 )
            goto LABEL_110;
        }
LABEL_104:
        CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(p_m_ClassesToTraverse);
      }
      else
      {
LABEL_110:
        if ( v59->m_bRemoveAll || CSchemaFieldMetadataOverride::WasTagRemoved(v59, "MIsWorldSpace") )
          goto LABEL_104;
        CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(p_m_ClassesToTraverse);
        if ( bIsChangeda == 0 )
        {
LABEL_74:
          keyFieldNameOverrides.m_removedValues.m_Size = 0;
          if ( (keyFieldNameOverrides.m_removedValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<char const**,int>::Purge(&keyFieldNameOverrides.m_removedValues.m_Memory);
            if ( (keyFieldNameOverrides.m_removedValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<char const**,int>::Purge(&keyFieldNameOverrides.m_removedValues.m_Memory);
          }
          keyFieldNameOverrides.m_values.m_Size = 0;
          if ( (keyFieldNameOverrides.m_values.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<char const**,int>::Purge(&keyFieldNameOverrides.m_values.m_Memory);
            if ( (keyFieldNameOverrides.m_values.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<char const**,int>::Purge(&keyFieldNameOverrides.m_values.m_Memory);
          }
          goto LABEL_76;
        }
      }
      fieldInfo.m_pField = keyFieldNameOverrides.m_field;
      fieldInfo.m_nFieldOffset = keyFieldNameOverrides.m_nFieldOffset + nOffset;
      if ( keyFieldNameOverrides.m_values.m_Size != 0 )
      {
        fieldInfo.m_bIsRemoved = 0;
        fieldInfo.m_pKeyfieldNames = &keyFieldNameOverrides.m_values;
        CEntitySystem::AddComponentFieldUnserializer(this, &fieldInfo);
      }
      if ( keyFieldNameOverrides.m_removedValues.m_Size != 0 )
      {
        fieldInfo.m_bIsRemoved = 1;
        fieldInfo.m_pKeyfieldNames = &keyFieldNameOverrides.m_removedValues;
        CEntitySystem::AddComponentFieldUnserializer(this, &fieldInfo);
      }
      CUtlVectorBase<char const**,CUtlMemory<char const**,int>>::~CUtlVectorBase(&keyFieldNameOverrides.m_removedValues);
      CUtlVectorBase<char const**,CUtlMemory<char const**,int>>::~CUtlVectorBase(&keyFieldNameOverrides.m_values);
LABEL_76:
      metaValues = (metaValues + 56);
      if ( v89 + 1 < abs32(v7->m_FieldMetadataOverrides.m_Data.m_nImplLength) )
      {
        ++v89;
        continue;
      }
      break;
    }
  }
  CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&iter.m_InheritanceIterator.m_ClassesToTraverse);
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::~CUtlVectorBase(&fieldInfo.m_ArraySuffixes);
}


// CEntitySystem::AddComponentFieldUnserializer  (line 1051, @0x00000000030b8120, libserver.so)  // inlines: AddToTail, Alloc, As<CSchemaType_Atomic_T>, As<CSchemaType_DeclaredClass>, As<CSchemaType_FixedArray>, As<CSchemaType_Ptr>, CInterlockedIntT, CUtlAbstractDelegate, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentPostUnserializerInfo_t, ComponentUnserializerClassInfo_t, Construct<ComponentPostUnserializerInfo_t>, Construct<ComponentUnserializerClassInfo_t>, Count, Element, GeneratePrefixedKeyName<260ul>, Get, GetPtr, GetValue, GrowMemory, LeafCodeInfo_t, SchemaMetaGetPtr2, SchemaTypeOf<CEntityHandle>, SchemaTypeOf<CEntityIOOutput>, SchemaTypeOf<CTransform>, SchemaTypeOf<Quaternion>, SchemaTypeOf<Vector>, SchemaTypeOf<char>, SchemaTypeOf<matrix3x4_t>, SchemaTypeOf<matrix3x4a_t>, SchemaTypeScope, SetInitialized, SetMementoFrom, String, ThreadInterlockedExchange, V_memcpy, V_strlen, memcpy, operator int, operator=, operator[]
// calls: CSchemaType::InternalAs, SchemaTypeOf<CEntityIOOutput>, V_strcpy_safe<260ul>, CUtlMemory<EntOutput_t, int>::Grow, operator new [], memcpy, CSchemaClassInfo::MetaGetPtr, CEntitySystem::FindPostUnserializeHandler, CEntitySystem::BuildComponentUnserializer, CEntitySystem::AddComponentProceduralKeys, CUtlString::Get, V_snprintf (25 total)
// callers: CEntitySystem::BuildComponentUnserializer
// strings: "MEntityPostUnserializerHandler", "CEntityIOOutput", "CTransform", "matrix3x4_t", "matrix3x4a_t", "Field %s::%s cannot be labelled with MHasSubKeyfields since it is an atomic type!\n" (11 total)
// globals: SchemaTypeOf<CEntityIOOutput>(void)::s_pTypeOf, SchemaTypeOf<CTransform>(void)::s_pTypeOf, SchemaTypeOf<matrix3x4_t>(void)::s_pTypeOf, SchemaTypeOf<matrix3x4a_t>(void)::s_pTypeOf, SchemaTypeOf<Vector>(void)::s_pTypeOf, SchemaTypeOf<Quaternion>(void)::s_pTypeOf, CSchemaManipulator<CTransform>::StaticAccessor(void)::m, CAtomicManipulator<CTransform>::Get(void)::val (20 total)
void __fastcall CEntitySystem::AddComponentFieldUnserializer(
        CEntitySystem *const this,
        const CEntitySystem::ComponentFieldUnserializerInfo_t *const info)
{
  int m_nFieldOffset; // r12d
  const char *v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  unsigned __int8 (__fastcall *v7)(const CSchemaType *, CSchemaType *); // r13
  CSchemaType *v8; // rax
  char v9; // bl
  const CSchemaType *const *v10; // r13
  CSchemaType_DeclaredClass *v11; // rax
  uint32 v12; // r15d
  const char *m_pKeyPrefix; // rsi
  const char *v14; // rax
  char *v15; // r13
  __int64 v16; // rbx
  char *v17; // rdx
  int v18; // ecx
  unsigned int v19; // eax
  ComponentUnserializerClassInfo_t *m_pUnserializerInfo; // r12
  bool v21; // cf
  int m_Size; // eax
  int v23; // edx
  int v24; // esi
  EntOutput_t *v25; // r12
  char *v26; // rax
  CSchemaType *v27; // rax
  const CSchemaClassInfo *v28; // r12
  const char **Ptr; // rax
  const char *v30; // rdi
  int v31; // eax
  const char *v32; // rax
  ComponentUnserializerClassInfo_t *v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  ComponentPostUnserializerInfo_t *v37; // rsi
  ComponentPostUnserializerInfo_t *v38; // rcx
  ComponentUnserializerClassInfo_t *v39; // rax
  __int64 j; // rdx
  ComponentUnserializerClassInfo_t *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  ComponentUnserializerClassInfo_t *v45; // r12
  __int64 v46; // rdx
  int v47; // ecx
  ComponentUnserializerPtrToClassInfo_t *v48; // rdx
  const char *v49; // rax
  __int64 v50; // rax
  const char *v51; // r12
  CSchemaType *v52; // r8
  const char *v53; // r12
  CSchemaType *v54; // r8
  const char *v55; // r12
  CSchemaType *v56; // r8
  const char *v57; // r12
  CSchemaType *v58; // r8
  uint32 v59; // r9d
  const char *v60; // rax
  __int64 v61; // rax
  const char *v62; // rax
  __int64 v63; // rax
  const char *v64; // rax
  __int64 v65; // rax
  const char *v66; // rax
  __int64 v67; // rax
  CSchemaType *v68; // rax
  const char *v69; // rax
  __int64 v70; // rax
  ISchemaSystemTypeScope *v71; // rax
  ISchemaSystemTypeScope *v72; // rax
  const char *v73; // r9
  const char *v74; // r8
  const void *v75; // rax
  CSchemaType *v76; // rax
  const char *m_pImplChars; // r9
  CSchemaType *v78; // rax
  const char *v79; // r9
  __int64 (__fastcall *v80)(ISchemaSystem *, const char *); // r15
  const char *NameOfModule; // rax
  __int64 v82; // rax
  __int64 (__fastcall *v83)(ISchemaSystem *, const char *); // r13
  const char *v84; // rax
  __int64 v85; // rax
  CUtlVector<char const**,CUtlMemory<char const**,int> > *metaValues; // [rsp+18h] [rbp-418h]
  bool bIsOutput; // [rsp+23h] [rbp-40Dh]
  int nFirstArrayIndex; // [rsp+24h] [rbp-40Ch]
  __int64 i; // [rsp+28h] [rbp-408h]
  void *m_pBlock; // [rsp+30h] [rbp-400h]
  uint32 v91; // [rsp+30h] [rbp-400h]
  const char *v92; // [rsp+38h] [rbp-3F8h]
  int mark; // [rsp+40h] [rbp-3F0h]
  EntityKeyTransformType_t keyTransformType; // [rsp+44h] [rbp-3ECh]
  CSchemaType_DeclaredClass *pClass; // [rsp+50h] [rbp-3E0h]
  CSchemaType_DeclaredClass *pClassa; // [rsp+50h] [rbp-3E0h]
  const char *pSharedKeyName; // [rsp+68h] [rbp-3C8h]
  const CSchemaType *pFieldType; // [rsp+78h] [rbp-3B8h]
  CSchemaType_DeclaredClass *pInlineDeclaredClass; // [rsp+80h] [rbp-3B0h]
  int pClassInfob; // [rsp+88h] [rbp-3A8h]
  int pClassInfoc; // [rsp+88h] [rbp-3A8h]
  ComponentUnserializerClassInfo_t *pClassInfo; // [rsp+88h] [rbp-3A8h]
  ComponentUnserializerClassInfo_t *pClassInfoa; // [rsp+88h] [rbp-3A8h]
  int pClassInfod; // [rsp+88h] [rbp-3A8h]
  int pClassInfoe; // [rsp+88h] [rbp-3A8h]
  int na; // [rsp+90h] [rbp-3A0h]
  size_t n; // [rsp+90h] [rbp-3A0h]
  __int64 (__fastcall *nb)(ISchemaSystem *, const char *); // [rsp+90h] [rbp-3A0h]
  ComponentUnserializerClassInfo_t *nc; // [rsp+90h] [rbp-3A0h]
  __int64 (__fastcall *nd)(ISchemaSystem *, const char *); // [rsp+90h] [rbp-3A0h]
  __int64 (__fastcall *ne)(ISchemaSystem *, const char *); // [rsp+90h] [rbp-3A0h]
  __int64 (__fastcall *nf)(ISchemaSystem *, const char *); // [rsp+90h] [rbp-3A0h]
  size_t ng; // [rsp+90h] [rbp-3A0h]
  __int64 (__fastcall *nh)(ISchemaSystem *, const char *); // [rsp+90h] [rbp-3A0h]
  __int64 (__fastcall *ni)(ISchemaSystem *, const char *); // [rsp+90h] [rbp-3A0h]
  int nArrayFieldSize; // [rsp+98h] [rbp-398h]
  bool bIsArray; // [rsp+9Fh] [rbp-391h]
  int nArrayCount; // [rsp+A0h] [rbp-390h]
  __int64 nArrayCounta; // [rsp+A0h] [rbp-390h]
  CUtlAbstractDelegate delegate; // [rsp+B0h] [rbp-380h] BYREF
  char pBaseKeyName[260]; // [rsp+D0h] [rbp-360h] BYREF
  char pArrayKeyName[260]; // [rsp+1E0h] [rbp-250h] BYREF
  char pSubKeyName[260]; // [rsp+2F0h] [rbp-140h] BYREF
  unsigned __int64 v125; // [rsp+3F8h] [rbp-38h]
  UtlScratchMemoryPoolMark_t CurrentAllocPoint; // 0:rax.12
  UtlScratchMemoryPoolMark_t v127; // 0:rsi.8,8:edx.4

  v125 = __readfsqword(0x28u);
  m_nFieldOffset = info->m_nFieldOffset;
  pFieldType = info->m_pField->m_pType;
  v4 = **info->m_pKeyfieldNames->m_Memory.m_pMemory;
  if ( info->m_nFirstArrayIndex < 0 )
  {
    v75 = CSchemaType::InternalAs(
            pFieldType,
            SchemaTypeCategory_t::SCHEMA_TYPE_FIXED_ARRAY,
            SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
    if ( v75 != 0 )
    {
      nArrayCounta = (*(*v75 + 96LL))(v75);
      v76 = SchemaTypeOf<char>(void)::s_pTypeOf;
      if ( SchemaTypeOf<char>(void)::s_pTypeOf == 0 )
      {
        v80 = *(*g_pSchemaSystem + 104LL);
        NameOfModule = GetNameOfModule();
        v82 = v80(g_pSchemaSystem, NameOfModule);
        v76 = (*(*v82 + 40LL))(v82, 2);
        SchemaTypeOf<char>(void)::s_pTypeOf = v76;
      }
      if ( nArrayCounta != v76 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
        {
          m_pImplChars = info->m_pClass->m_Name.m_pImplChars;
          LODWORD(delegate.m_pFunction.__pfn) = 1089;
          delegate.m_pthis = "entitysystem.cpp";
          delegate.m_pFunction.__delta = "AddComponentFieldUnserializer";
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            LoggingSeverity_t::LS_ERROR,
            &delegate,
            "Field \"%s\" of class \"%s\" cannot unserialized yet (lacking array support)!\n",
            v4,
            m_pImplChars);
        }
        return;
      }
    }
    nArrayFieldSize = 0;
    nFirstArrayIndex = 0;
    nArrayCount = 1;
    bIsArray = 0;
  }
  else
  {
    v5 = CSchemaType::InternalAs(
           info->m_pField->m_pType,
           SchemaTypeCategory_t::SCHEMA_TYPE_FIXED_ARRAY,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
    if ( v5 == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
      {
        v79 = info->m_pClass->m_Name.m_pImplChars;
        LODWORD(delegate.m_pFunction.__pfn) = 1067;
        delegate.m_pthis = "entitysystem.cpp";
        delegate.m_pFunction.__delta = "AddComponentFieldUnserializer";
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          LoggingSeverity_t::LS_ERROR,
          &delegate,
          "Field \"%s\" of class \"%s\" cannot be labelled with MGenerateArrayKeynames if it is not a fixed array!\n",
          v4,
          v79);
      }
      return;
    }
    nArrayCount = v5[12];
    nFirstArrayIndex = info->m_nFirstArrayIndex;
    pFieldType = (*(*v5 + 96LL))(v5);
    bIsArray = 1;
    nArrayFieldSize = (*(*pFieldType + 64LL))(pFieldType);
  }
  v6 = CSchemaType::InternalAs(
         pFieldType,
         SchemaTypeCategory_t::SCHEMA_TYPE_ATOMIC,
         SchemaAtomicCategory_t::SCHEMA_ATOMIC_T);
  v7 = *(*pFieldType + 112LL);
  v8 = SchemaTypeOf<CEntityIOOutput>();
  if ( v7(pFieldType, v8) != 0 )
  {
    if ( v6 != 0 && v6[16] == 5004 )
      pFieldType = (*(*v6 + 96LL))(v6);
    bIsOutput = 1;
  }
  else
  {
    if ( v6 != 0 && v6[16] == 5003 )
    {
      v78 = SchemaTypeOf<CEntityHandle>(void)::s_pTypeOf;
      if ( SchemaTypeOf<CEntityHandle>(void)::s_pTypeOf == 0 )
      {
        v83 = *(*g_pSchemaSystem + 104LL);
        v84 = GetNameOfModule();
        v85 = v83(g_pSchemaSystem, v84);
        v78 = (*(*v85 + 56LL))(
                v85,
                "CEntityHandle",
                5000,
                CAtomicManipulator<CEntityHandle>::Get(void)::val,
                CSchemaManipulator<CEntityHandle>::StaticAccessor(void)::m);
        SchemaTypeOf<CEntityHandle>(void)::s_pTypeOf = v78;
      }
      pFieldType = v78;
    }
    bIsOutput = 0;
  }
  v9 = info->m_bIsWorldSpaceOrientation ? 2 : 0;
  if ( info->m_bIsWorldSpace )
    v9 = 1;
  v10 = CSchemaType::InternalAs(
          pFieldType,
          SchemaTypeCategory_t::SCHEMA_TYPE_POINTER,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  pClass = 0;
  pInlineDeclaredClass = CSchemaType::InternalAs(
                           pFieldType,
                           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_CLASS,
                           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  if ( v10 != 0 )
    pClass = CSchemaType::InternalAs(
               v10[6],
               SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_CLASS,
               SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  v11 = pClass;
  if ( pInlineDeclaredClass != 0 )
    v11 = pInlineDeclaredClass;
  pClassa = v11;
  metaValues = info->m_pKeyfieldNames;
  if ( metaValues->m_Size > 0 )
  {
    v12 = m_nFieldOffset;
    i = 0;
    keyTransformType = v9;
    while ( 1 )
    {
      m_pKeyPrefix = info->m_pKeyPrefix;
      v14 = *metaValues->m_Memory.m_pMemory[i];
      v92 = v14;
      if ( m_pKeyPrefix != 0 && *m_pKeyPrefix != 0 )
      {
        if ( v14 != 0 && *v14 != 0 )
        {
          V_sprintf_safe<260ul>(pBaseKeyName, "%s.%s", m_pKeyPrefix, v14);
          pSharedKeyName = 0;
        }
        else
        {
          V_strcpy_safe<260ul>(pBaseKeyName, m_pKeyPrefix);
          pSharedKeyName = 0;
        }
      }
      else
      {
        V_strcpy_safe<260ul>(pBaseKeyName, v14);
        pSharedKeyName = v92;
      }
      if ( nArrayCount > 0 )
        break;
LABEL_43:
      v31 = i++;
      if ( metaValues->m_Size <= v31 + 1 )
        return;
    }
    v15 = pBaseKeyName;
    v16 = 0;
    while ( 1 )
    {
      if ( bIsArray )
      {
        if ( info->m_ArraySuffixes.m_Size <= 0 )
        {
          v15 = pArrayKeyName;
          V_snprintf(pArrayKeyName, 260, pBaseKeyName, (nFirstArrayIndex + v16));
        }
        else
        {
          v32 = CUtlString::Get(&info->m_ArraySuffixes.m_Memory.m_pMemory[v16]);
          v15 = pArrayKeyName;
          V_snprintf(pArrayKeyName, 260, pBaseKeyName, v32);
        }
        pSharedKeyName = 0;
      }
      if ( bIsOutput )
      {
        v17 = v15;
        do
        {
          v18 = *v17;
          v17 += 4;
          v19 = ~v18 & (v18 - 16843009) & 0x80808080;
        }
        while ( v19 == 0 );
        m_pUnserializerInfo = info->m_pUnserializerInfo;
        if ( (~v18 & (v18 - 16843009) & 0x8080) == 0 )
        {
          LOBYTE(v19) = (~v18 & (v18 - 16843009) & 0x80808080) >> 16;
          LODWORD(v17) = v17 + 2;
        }
        v21 = __CFADD__(v19, v19);
        m_Size = m_pUnserializerInfo->m_outputFields.m_Size;
        v23 = v17 - (v21 + 3) - v15;
        v24 = m_Size;
        if ( m_Size == m_pUnserializerInfo->m_outputFields.m_Memory.m_nAllocationCount )
        {
          pClassInfob = m_pUnserializerInfo->m_outputFields.m_Size;
          na = v23;
          CUtlMemory<EntOutput_t,int>::Grow(&m_pUnserializerInfo->m_outputFields.m_Memory, 1);
          v24 = m_pUnserializerInfo->m_outputFields.m_Size;
          m_Size = pClassInfob;
          v23 = na;
        }
        m_pUnserializerInfo->m_outputFields.m_Size = v24 + 1;
        pClassInfoc = v23 + 1;
        n = v23 + 1;
        v25 = &info->m_pUnserializerInfo->m_outputFields.m_Memory.m_pMemory[m_Size];
        v26 = operator new[](n);
        v25->m_desc.m_pName = v26;
        if ( pClassInfoc < 0 )
          __debugbreak();
        memcpy(v26, v15, n);
        v27 = SchemaTypeOf<CEntityIOOutput>(void)::s_pTypeOf;
        v25->m_desc.m_nOutputOffset = v12;
        v25->m_desc.m_nFlags = 0;
        if ( v27 == 0 )
        {
          nb = *(*g_pSchemaSystem + 104LL);
          v49 = GetNameOfModule();
          v50 = nb(g_pSchemaSystem, v49);
          v27 = (*(*v50 + 88LL))(v50, "CEntityIOOutput");
          SchemaTypeOf<CEntityIOOutput>(void)::s_pTypeOf = v27;
        }
        if ( pFieldType == v27 )
          goto LABEL_42;
      }
      if ( pClassa != 0 )
      {
        v28 = *(pClassa + 6);
        Ptr = CSchemaClassInfo::MetaGetPtr(
                v28,
                "MEntityPostUnserializerHandler",
                SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
                0);
        if ( Ptr != 0
          && (v30 = *Ptr, *Ptr != 0)
          && (memset(&delegate, 0, sizeof(delegate)), CEntitySystem::FindPostUnserializeHandler(v30, &delegate)) )
        {
          v33 = info->m_pUnserializerInfo;
          v34 = info->m_pUnserializerInfo->m_postUnserializeHandlers.m_Size;
          v35 = info->m_pUnserializerInfo->m_postUnserializeHandlers.m_Size;
          if ( v34 == info->m_pUnserializerInfo->m_postUnserializeHandlers.m_Memory.m_nAllocationCount )
          {
            pClassInfod = info->m_pUnserializerInfo->m_postUnserializeHandlers.m_Size;
            nc = info->m_pUnserializerInfo;
            CUtlMemory<ComponentPostUnserializerInfo_t,int>::Grow(&v33->m_postUnserializeHandlers.m_Memory, 1);
            v33 = nc;
            v34 = pClassInfod;
            v35 = nc->m_postUnserializeHandlers.m_Size;
          }
          v36 = v34;
          v33->m_postUnserializeHandlers.m_Size = v35 + 1;
          v37 = &v33->m_postUnserializeHandlers.m_Memory.m_pMemory[v36];
          if ( v37 != 0 )
          {
            v37->m_delegate.m_pthis = 0;
            v37->m_delegate.m_pFunction.__pfn = 0;
            v37->m_delegate.m_pFunction.__delta = 0;
          }
          v38 = &info->m_pUnserializerInfo->m_postUnserializeHandlers.m_Memory.m_pMemory[v36];
          v38->m_nOffset = v12;
          v38->m_delegate = delegate;
          if ( pInlineDeclaredClass == 0 )
          {
LABEL_57:
            CurrentAllocPoint = CUtlScratchMemoryPool::GetCurrentAllocPoint(&this->m_unserializerData);
            mark = CurrentAllocPoint.m_nBytesFree;
            m_pBlock = CurrentAllocPoint.m_pBlock;
            v39 = CUtlScratchMemoryPool::AllocAligned(&this->m_unserializerData, 408, 16);
            if ( v39 != 0 )
            {
              v39->m_pBaseClassUnserializer = -1LL;
              pClassInfo = v39;
              CUtlMemoryPoolBase::CUtlMemoryPoolBase(
                &v39->m_atomicFields.m_EntryMemory,
                48,
                4,
                8,
                MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
                0);
              v39 = pClassInfo;
              pClassInfo->m_atomicFields.m_ContentionCheck.m_value = 0;
              _InterlockedExchange(&pClassInfo->m_atomicFields.m_ContentionCheck.m_value, 0);
              pClassInfo->m_atomicFields.m_bNeedsCommit = 0;
              for ( j = 0; j != 16; ++j )
              {
                pClassInfo->m_atomicFields.m_aBuckets[j].m_pFirst = 0;
                pClassInfo->m_atomicFields.m_aBuckets[j].m_pFirstUncommitted = 0;
              }
              pClassInfo->m_ptrFields.m_Size = 0;
              pClassInfo->m_ptrFields.m_Memory.m_pMemory = 0;
              pClassInfo->m_ptrFields.m_Memory.m_nAllocationCount = 0;
              pClassInfo->m_ptrFields.m_Memory.m_nGrowSize = 0;
              pClassInfo->m_postUnserializeHandlers.m_Size = 0;
              pClassInfo->m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
              pClassInfo->m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
              pClassInfo->m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
              pClassInfo->m_outputFields.m_Size = 0;
              pClassInfo->m_outputFields.m_Memory.m_pMemory = 0;
              pClassInfo->m_outputFields.m_Memory.m_nAllocationCount = 0;
              pClassInfo->m_outputFields.m_Memory.m_nGrowSize = 0;
            }
            v39->m_pBaseClassUnserializer = 0;
            pClassInfoa = v39;
            CEntitySystem::BuildComponentUnserializer(this, v15, v28, 0, 1, v39, info->m_pTokenCollisionTest);
            CEntitySystem::AddComponentProceduralKeys(this, v15, v28, 1, pClassInfoa, info->m_pTokenCollisionTest);
            v41 = pClassInfoa;
            if ( pClassInfoa->m_atomicFields.m_EntryMemory.m_BlocksAllocated.m_value != 0
              || pClassInfoa->m_ptrFields.m_Size != 0 )
            {
              v45 = info->m_pUnserializerInfo;
              v46 = info->m_pUnserializerInfo->m_ptrFields.m_Size;
              if ( v46 == info->m_pUnserializerInfo->m_ptrFields.m_Memory.m_nAllocationCount )
              {
                pClassInfoe = info->m_pUnserializerInfo->m_ptrFields.m_Size;
                ng = v41;
                CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Grow(&v45->m_ptrFields.m_Memory, 1);
                v47 = v45->m_ptrFields.m_Size;
                v46 = pClassInfoe;
                v41 = ng;
              }
              else
              {
                v47 = info->m_pUnserializerInfo->m_ptrFields.m_Size;
              }
              v45->m_ptrFields.m_Size = v47 + 1;
              v48 = &info->m_pUnserializerInfo->m_ptrFields.m_Memory.m_pMemory[v46];
              v48->m_nOffset = v12;
              v48->m_pClassInfo = v41;
            }
            else
            {
              v127.m_pBlock = m_pBlock;
              v127.m_nBytesFree = mark;
              CUtlScratchMemoryPool::FreeToAllocPoint(&this->m_unserializerData, v127);
            }
            goto LABEL_42;
          }
        }
        else if ( pInlineDeclaredClass == 0 )
        {
          goto LABEL_57;
        }
        CEntitySystem::BuildComponentUnserializer(
          this,
          v15,
          v28,
          v12,
          1,
          info->m_pUnserializerInfo,
          info->m_pTokenCollisionTest);
        CEntitySystem::AddComponentProceduralKeys(
          this,
          v15,
          v28,
          1,
          info->m_pUnserializerInfo,
          info->m_pTokenCollisionTest);
      }
      else
      {
        v42 = SchemaTypeOf<CTransform>(void)::s_pTypeOf;
        if ( SchemaTypeOf<CTransform>(void)::s_pTypeOf == 0 )
        {
          nd = *(*g_pSchemaSystem + 104LL);
          v60 = GetNameOfModule();
          v61 = nd(g_pSchemaSystem, v60);
          v42 = (*(*v61 + 56LL))(
                  v61,
                  "CTransform",
                  2013,
                  CAtomicManipulator<CTransform>::Get(void)::val,
                  &CSchemaManipulator<CTransform>::StaticAccessor(void)::m);
          SchemaTypeOf<CTransform>(void)::s_pTypeOf = v42;
        }
        if ( pFieldType == v42 )
        {
          if ( *v15 != 0 )
          {
            v55 = 0;
            V_sprintf_safe<260ul>(pSubKeyName, "%s.%s", v15, "origin");
            v56 = SchemaTypeOf<Vector>(void)::s_pTypeOf;
            if ( SchemaTypeOf<Vector>(void)::s_pTypeOf == 0 )
              goto LABEL_98;
          }
          else
          {
            v55 = "origin";
            V_strcpy_safe<260ul>(pSubKeyName, "origin");
            v56 = SchemaTypeOf<Vector>(void)::s_pTypeOf;
            if ( SchemaTypeOf<Vector>(void)::s_pTypeOf != 0 )
              goto LABEL_86;
LABEL_98:
            ni = *(*g_pSchemaSystem + 104LL);
            v69 = GetNameOfModule();
            v70 = ni(g_pSchemaSystem, v69);
            v56 = (*(*v70 + 56LL))(
                    v70,
                    "Vector",
                    2010,
                    CAtomicManipulator<Vector>::Get(void)::val,
                    CSchemaManipulator<Vector>::StaticAccessor(void)::m);
            SchemaTypeOf<Vector>(void)::s_pTypeOf = v56;
          }
LABEL_86:
          CEntitySystem::AddKeyToUnserialize(this, info, pSubKeyName, v55, v56, v12, keyTransformType, 0);
          if ( *v15 != 0 )
          {
            v57 = 0;
            V_sprintf_safe<260ul>(pSubKeyName, "%s.%s", v15, "angles");
            v58 = SchemaTypeOf<Quaternion>(void)::s_pTypeOf;
            v59 = v12 + 16;
            if ( SchemaTypeOf<Quaternion>(void)::s_pTypeOf != 0 )
              goto LABEL_88;
          }
          else
          {
            v57 = "angles";
            V_strcpy_safe<260ul>(pSubKeyName, "angles");
            v58 = SchemaTypeOf<Quaternion>(void)::s_pTypeOf;
            v59 = v12 + 16;
            if ( SchemaTypeOf<Quaternion>(void)::s_pTypeOf != 0 )
            {
LABEL_88:
              CEntitySystem::AddKeyToUnserialize(this, info, pSubKeyName, v57, v58, v59, keyTransformType, 0);
              goto LABEL_42;
            }
          }
          v91 = v59;
          nh = *(*g_pSchemaSystem + 104LL);
          v66 = GetNameOfModule();
          v67 = nh(g_pSchemaSystem, v66);
          v68 = (*(*v67 + 56LL))(
                  v67,
                  "Quaternion",
                  2006,
                  CAtomicManipulator<Quaternion>::Get(void)::val,
                  &CSchemaManipulator<Quaternion>::StaticAccessor(void)::m);
          v59 = v91;
          v58 = v68;
          SchemaTypeOf<Quaternion>(void)::s_pTypeOf = v68;
          goto LABEL_88;
        }
        v43 = SchemaTypeOf<matrix3x4_t>(void)::s_pTypeOf;
        if ( SchemaTypeOf<matrix3x4_t>(void)::s_pTypeOf == 0 )
        {
          v71 = SchemaTypeScope();
          v43 = (*(*v71 + 56LL))(
                  v71,
                  "matrix3x4_t",
                  2003,
                  CAtomicManipulator<matrix3x4_t>::Get(void)::val,
                  CSchemaManipulator<matrix3x4_t>::StaticAccessor(void)::m);
          SchemaTypeOf<matrix3x4_t>(void)::s_pTypeOf = v43;
        }
        if ( pFieldType == v43 )
          goto LABEL_79;
        v44 = SchemaTypeOf<matrix3x4a_t>(void)::s_pTypeOf;
        if ( SchemaTypeOf<matrix3x4a_t>(void)::s_pTypeOf == 0 )
        {
          v72 = SchemaTypeScope();
          v44 = (*(*v72 + 56LL))(
                  v72,
                  "matrix3x4a_t",
                  2004,
                  CAtomicManipulator<matrix3x4a_t>::Get(void)::val,
                  &CSchemaManipulator<matrix3x4a_t>::StaticAccessor(void)::m);
          SchemaTypeOf<matrix3x4a_t>(void)::s_pTypeOf = v44;
        }
        if ( pFieldType == v44 )
        {
LABEL_79:
          if ( *v15 != 0 )
          {
            v51 = 0;
            V_sprintf_safe<260ul>(pSubKeyName, "%s.%s", v15, "origin");
            v52 = SchemaTypeOf<Vector>(void)::s_pTypeOf;
            if ( SchemaTypeOf<Vector>(void)::s_pTypeOf == 0 )
              goto LABEL_93;
          }
          else
          {
            v51 = "origin";
            V_strcpy_safe<260ul>(pSubKeyName, "origin");
            v52 = SchemaTypeOf<Vector>(void)::s_pTypeOf;
            if ( SchemaTypeOf<Vector>(void)::s_pTypeOf != 0 )
              goto LABEL_81;
LABEL_93:
            nf = *(*g_pSchemaSystem + 104LL);
            v64 = GetNameOfModule();
            v65 = nf(g_pSchemaSystem, v64);
            v52 = (*(*v65 + 56LL))(
                    v65,
                    "Vector",
                    2010,
                    CAtomicManipulator<Vector>::Get(void)::val,
                    CSchemaManipulator<Vector>::StaticAccessor(void)::m);
            SchemaTypeOf<Vector>(void)::s_pTypeOf = v52;
          }
LABEL_81:
          CEntitySystem::AddKeyToUnserialize(this, info, pSubKeyName, v51, v52, v12, keyTransformType, 1);
          if ( *v15 != 0 )
          {
            v53 = 0;
            V_sprintf_safe<260ul>(pSubKeyName, "%s.%s", v15, "angles");
            v54 = SchemaTypeOf<Quaternion>(void)::s_pTypeOf;
            if ( SchemaTypeOf<Quaternion>(void)::s_pTypeOf != 0 )
              goto LABEL_83;
          }
          else
          {
            v53 = "angles";
            V_strcpy_safe<260ul>(pSubKeyName, "angles");
            v54 = SchemaTypeOf<Quaternion>(void)::s_pTypeOf;
            if ( SchemaTypeOf<Quaternion>(void)::s_pTypeOf != 0 )
            {
LABEL_83:
              CEntitySystem::AddKeyToUnserialize(this, info, pSubKeyName, v53, v54, v12, keyTransformType, 1);
              goto LABEL_42;
            }
          }
          ne = *(*g_pSchemaSystem + 104LL);
          v62 = GetNameOfModule();
          v63 = ne(g_pSchemaSystem, v62);
          v54 = (*(*v63 + 56LL))(
                  v63,
                  "Quaternion",
                  2006,
                  CAtomicManipulator<Quaternion>::Get(void)::val,
                  &CSchemaManipulator<Quaternion>::StaticAccessor(void)::m);
          SchemaTypeOf<Quaternion>(void)::s_pTypeOf = v54;
          goto LABEL_83;
        }
        if ( *v92 == 0 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
          {
            v73 = info->m_pField->m_Name.m_pImplChars;
            v74 = info->m_pClass->m_Name.m_pImplChars;
            LODWORD(delegate.m_pFunction.__pfn) = 1254;
            delegate.m_pthis = "entitysystem.cpp";
            delegate.m_pFunction.__delta = "AddComponentFieldUnserializer";
            LoggingSystem_Log(
              LOG_ENTITY_SYSTEM,
              LoggingSeverity_t::LS_ERROR,
              &delegate,
              "Field %s::%s cannot be labelled with MHasSubKeyfields since it is an atomic type!\n",
              v74,
              v73);
          }
          return;
        }
        CEntitySystem::AddKeyToUnserialize(this, info, v15, pSharedKeyName, pFieldType, v12, keyTransformType, 0);
      }
LABEL_42:
      ++v16;
      v12 += nArrayFieldSize;
      if ( nArrayCount <= v16 )
        goto LABEL_43;
    }
  }
}


// EntityKeyIdLessFunc  (line 1266, @0x00000000030aa680, libserver.so)
bool __fastcall EntityKeyIdLessFunc(const EntityKeyId_t *const k1_0, const EntityKeyId_t *const k2_0)
{
  return k1_0->m_nHashCode < k2_0->m_nHashCode;
}


// CEntitySystem::BuildComponentUnserializers  (line 1290, @0x00000000030ba840, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, FirstInorder, GetBaseClass, GetClassInfo, IterClassesStart, LeftChild, NumComponentTypes, Purge, ResetDbgInfo, SetInitialized, SetLessFunc, V_isempty, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CEntityVariantAllocator::Activate, CEntitySystem::FindComponentTypeByRuntimeIndex, CEntitySystem::BuildComponentUnserializer, CEntitySystem::AddComponentProceduralKeys, CEntitySystem::IterClassesNext, CUtlRBTree<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int, CUtlMap<CUtlStringToken, CUtlString, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int>, int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int>, int>::Purge, CUtlRBTree<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int, CUtlMap<CUtlStringToken, CUtlString, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int>, int> >::~CUtlRBTree, _Unwind_Resume
// callers: CEntitySystem::Init
// globals: EntityKeyIdLessFunc(CUtlStringToken const&,CUtlStringToken const&)
void __fastcall CEntitySystem::BuildComponentUnserializers(CEntitySystem *const this)
{
  int m_NumElements; // eax
  CEntityComponentHelper *ComponentTypeByRuntimeIndex; // rdi
  _QWORD *p_m_pBaseClassUnserializer; // r13
  const CSchemaClassInfo *v5; // r12
  EntComponentInfo_t *m_pInfo; // rbx
  __int64 v7; // rax
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *m_pMemory; // rcx
  __int64 m_Left; // rdx
  unsigned __int16 v11; // ax
  CEntityClass *i; // rbx
  CEntityClassInfo *m_pClassInfo; // rdx
  const char *m_pszCPPClassname; // rax
  _QWORD *v15; // r13
  __int64 v16; // rax
  const CSchemaClassInfo *v17; // r12
  CEntityClassInfo *m_pBaseClassInfo; // rax
  __int64 v19; // rax
  CUtlScratchMemoryPool *pMemoryPool; // [rsp+8h] [rbp-88h]
  int nCount; // [rsp+14h] [rbp-7Ch]
  int nComponentRuntimeIndex; // [rsp+18h] [rbp-78h]
  EntityClassIter_t iter; // [rsp+28h] [rbp-68h] BYREF
  CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)> tokenCollisionTest; // [rsp+30h] [rbp-60h] BYREF

  pMemoryPool = &this->m_unserializerData;
  CEntityVariantAllocator::Activate(&this->m_unserializerData, 1);
  tokenCollisionTest.m_Tree.m_Elements.m_pMemory = 0;
  tokenCollisionTest.m_Tree.m_LessFunc.m_LessFunc = EntityKeyIdLessFunc;
  m_NumElements = this->m_ComponentTypesByName.m_Tree.m_NumElements;
  tokenCollisionTest.m_Tree.m_Elements.m_nAllocationCount = 0;
  tokenCollisionTest.m_Tree.m_Elements.m_nGrowSize = 0;
  tokenCollisionTest.m_Tree.m_Root = -1;
  tokenCollisionTest.m_Tree.m_NumElements = 0;
  tokenCollisionTest.m_Tree.m_FirstFree = -1;
  tokenCollisionTest.m_Tree.m_LastAlloc.index = -1;
  tokenCollisionTest.m_Tree.m_pElements = 0;
  nCount = m_NumElements;
  nComponentRuntimeIndex = 0;
  if ( m_NumElements != 0 )
  {
    do
    {
      ComponentTypeByRuntimeIndex = CEntitySystem::FindComponentTypeByRuntimeIndex(this, nComponentRuntimeIndex);
      if ( ComponentTypeByRuntimeIndex != 0 )
      {
        p_m_pBaseClassUnserializer = 0;
        do
        {
          m_pInfo = ComponentTypeByRuntimeIndex->m_pInfo;
          v7 = (*(ComponentTypeByRuntimeIndex->_vptr_CEntityComponentHelper + 2))(ComponentTypeByRuntimeIndex);
          if ( v7 != 0 )
            v5 = *(v7 + 40);
          else
            v5 = 0;
          if ( p_m_pBaseClassUnserializer != 0 )
            *p_m_pBaseClassUnserializer = &m_pInfo->m_unserializer;
          if ( m_pInfo->m_unserializer.m_pBaseClassUnserializer != -1LL )
            break;
          m_pInfo->m_unserializer.m_pBaseClassUnserializer = 0;
          p_m_pBaseClassUnserializer = &m_pInfo->m_unserializer.m_pBaseClassUnserializer;
          if ( v5 != 0 )
          {
            CEntitySystem::BuildComponentUnserializer(this, "", v5, 0, 0, &m_pInfo->m_unserializer, &tokenCollisionTest);
            CEntitySystem::AddComponentProceduralKeys(this, "", v5, 0, &m_pInfo->m_unserializer, &tokenCollisionTest);
          }
          ComponentTypeByRuntimeIndex = m_pInfo->m_pBaseClassComponentHelper;
        }
        while ( ComponentTypeByRuntimeIndex != 0 );
      }
      ++nComponentRuntimeIndex;
    }
    while ( nComponentRuntimeIndex < nCount );
  }
  m_Root = this->m_ClassesByName.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left == 0xFFFF )
    {
      m_Left = m_Root;
    }
    else
    {
      while ( 1 )
      {
        v11 = m_pMemory[m_Left].m_Left;
        if ( v11 == 0xFFFF )
          break;
        m_Left = v11;
      }
    }
    if ( m_Left != 0xFFFF )
    {
      LODWORD(iter) = m_Left;
      for ( i = m_pMemory[m_Left].m_Data.elem; i != 0; i = CEntitySystem::IterClassesNext(this, &iter) )
      {
        m_pClassInfo = i->m_pClassInfo;
        if ( m_pClassInfo->m_pszClassname != 0 && *m_pClassInfo->m_pszClassname != 0 )
        {
          m_pszCPPClassname = m_pClassInfo->m_pszCPPClassname;
          if ( m_pszCPPClassname != 0 && *m_pszCPPClassname != 0 )
          {
            v15 = 0;
            do
            {
              v19 = (*(i->_vptr_CEntityClass + 7))(i);
              if ( v19 != 0 && (v16 = (*(*v19 + 8LL))(v19)) != 0 )
                v17 = *(v16 + 40);
              else
                v17 = 0;
              if ( v15 != 0 )
                *v15 = &i->m_instanceUnserializer;
              if ( i->m_instanceUnserializer.m_pBaseClassUnserializer != -1LL )
                break;
              i->m_instanceUnserializer.m_pBaseClassUnserializer = 0;
              v15 = &i->m_instanceUnserializer.m_pBaseClassUnserializer;
              if ( v17 != 0 )
              {
                CEntitySystem::BuildComponentUnserializer(
                  this,
                  "",
                  v17,
                  0,
                  0,
                  &i->m_instanceUnserializer,
                  &tokenCollisionTest);
                CEntitySystem::AddComponentProceduralKeys(
                  this,
                  "",
                  v17,
                  0,
                  &i->m_instanceUnserializer,
                  &tokenCollisionTest);
              }
              m_pBaseClassInfo = i->m_pBaseClassInfo;
              if ( m_pBaseClassInfo == 0 )
                break;
              i = m_pBaseClassInfo->m_pClass;
            }
            while ( i != 0 );
          }
        }
      }
    }
  }
  CEntityVariantAllocator::Activate(pMemoryPool, 0);
  CUtlRBTree<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int,CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int>,int>>::RemoveAll(&tokenCollisionTest.m_Tree);
  tokenCollisionTest.m_Tree.m_FirstFree = -1;
  if ( (tokenCollisionTest.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int>,int>::Purge(&tokenCollisionTest.m_Tree.m_Elements);
    tokenCollisionTest.m_Tree.m_LastAlloc.index = -1;
    if ( (tokenCollisionTest.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CUtlString,int,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,int>,int>::Purge(&tokenCollisionTest.m_Tree.m_Elements);
  }
}


// CEntitySystem::FindClassByDesignName  (line 1383, @0x00000000030bc8e0, libserver.so)  // inlines: AssignTo, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVariantBase, Call<char const*>, CopyData, Find, Free, GetScriptClassForDesignerName<CUtlString, char const*>, GetVM, IsEmpty, IsInitialized, IsValid, LookupFunction, Purge, RemoveAll, V_strlen, operator=, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::Clear, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, CUtlString::FreeMemoryBlock, CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount, CVariantBase<CVariantDefaultAllocator>::AssignTo, CUtlString::Get, CEntitySystem::FindClassByName, CUtlString::Set, strlen, CVariantBase<CVariantDefaultAllocator>::Free, CUtlMemory<char, int>::Purge (14 total)
// callers: CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, SetupEntityKeyValuesFromTable, CBreakableProp::SetEnableMotionPosition, ConvertOldKeyValuesToNew, CGameEntitySystem::ExtractClientServerSpecificEntities, CBaseEntity::Create, CC_Ent_Create, give, CCommentarySystem::InitCommentary, CSource2Server::OnLoadSessionPersisters (67 total)
// strings: "GetScriptClassForDesignerName"
// globals: g_pEntitySystem
CEntityClass *__fastcall CEntitySystem::FindClassByDesignName(
        CEntitySystem *const this,
        const char *pDesignName,
        CUtlString *pOutScriptClassName)
{
  unsigned __int16 v6; // ax
  __int64 v7; // r14
  HSCRIPT hFunction; // rsi
  int v10; // r13d
  int v11; // esi
  const char *v12; // rax
  CEntityClass *ClassByName; // rbx
  CUtlString temp; // [rsp+10h] [rbp-80h] BYREF
  HSCRIPT__ **src; // [rsp+18h] [rbp-78h] BYREF
  CVariantBase<CVariantDefaultAllocator> v16; // [rsp+20h] [rbp-70h] BYREF
  const char *v17; // [rsp+30h] [rbp-60h] BYREF
  __int16 v18; // [rsp+38h] [rbp-58h]
  __int16 v19; // [rsp+3Ah] [rbp-56h]
  CUtlVectorBase<char,CUtlMemory<char,int> > search[3]; // [rsp+40h] [rbp-50h] BYREF

  if ( pDesignName == 0 || *pDesignName == 0 )
    return 0;
  *&search[0].m_Size = pDesignName;
  v6 = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_ClassesByDesignName.m_Tree,
         search);
  v7 = v6;
  if ( v6 != 0xFFFF )
  {
    if ( pOutScriptClassName != 0 )
      CUtlString::Clear(pOutScriptClassName);
    return this->m_ClassesByDesignName.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem;
  }
  if ( g_pScriptVM == 0 || g_EntityScriptFramework.m_hScope == 0 )
  {
    if ( pOutScriptClassName == 0 )
      return 0;
    goto LABEL_10;
  }
  hFunction = g_EntityScriptFramework.m_hScriptFunc_GetScriptClassForDesignerName.hFunction;
  temp.m_pString = 0;
  if ( pOutScriptClassName == 0 )
    pOutScriptClassName = &temp;
  if ( hFunction == 0 )
  {
    g_EntityScriptFramework.m_hScriptFunc_GetScriptClassForDesignerName.hFunction = (*(*g_pScriptVM + 144LL))(
                                                                                      g_pScriptVM,
                                                                                      "GetScriptClassForDesignerName",
                                                                                      g_EntityScriptFramework.m_hScope,
                                                                                      0);
    src = &g_EntityScriptFramework.m_hScriptFunc_GetScriptClassForDesignerName.hFunction;
    CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
      &g_EntityScriptFramework.m_FuncHandles,
      &src);
    hFunction = g_EntityScriptFramework.m_hScriptFunc_GetScriptClassForDesignerName.hFunction;
    if ( hFunction == 0 )
    {
LABEL_8:
      if ( temp.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&temp);
LABEL_10:
      CUtlString::Clear(pOutScriptClassName);
      return 0;
    }
  }
  v16.m_type = 0;
  v16.m_flags = 0;
  v17 = pDesignName;
  v16.m_uint64 = 0;
  v19 = 0;
  v18 = 30;
  v10 = (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, &v17, 1, &v16, g_EntityScriptFramework.m_hScope, 1);
  if ( (v19 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17);
  if ( v10 == -1 )
  {
    CVariantBase<CVariantDefaultAllocator>::Free(&v16);
    goto LABEL_8;
  }
  v11 = 256;
  if ( v16.m_type == 30 )
  {
    if ( v16.m_uint64 != 0 )
      v11 = strlen(v16.m_pszString) + 1;
    else
      v11 = 1;
  }
  search[0].m_Size = 0;
  search[0].m_Memory.m_pMemory = 0;
  search[0].m_Memory.m_nAllocationCount = 0;
  search[0].m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(search, v11);
  if ( CVariantBase<CVariantDefaultAllocator>::AssignTo(&v16, search[0].m_Memory.m_pMemory, search[0].m_Size) )
    CUtlString::Set(pOutScriptClassName, search[0].m_Memory.m_pMemory);
  else
    CUtlString::Clear(pOutScriptClassName);
  search[0].m_Size = 0;
  if ( (search[0].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char,int>::Purge(&search[0].m_Memory);
    if ( (search[0].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char,int>::Purge(&search[0].m_Memory);
  }
  if ( (v16.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16.m_uint64);
    v16.m_flags &= ~1u;
    v16.m_uint64 = 0;
    v16.m_type = 0;
  }
  if ( pOutScriptClassName->m_pString == 0 || *pOutScriptClassName->m_pString == 0 )
    goto LABEL_8;
  v12 = CUtlString::Get(pOutScriptClassName);
  ClassByName = CEntitySystem::FindClassByName(g_pEntitySystem, v12, 0);
  if ( ClassByName == 0 )
    CUtlString::Clear(pOutScriptClassName);
  if ( temp.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&temp);
  return ClassByName;
}


// CEntitySystem::FindClassByName  (line 1426, @0x00000000030bbfd0, libserver.so)  // inlines: CUtlString, CVariantBase, Call<char const*>, CopyData, Find, Free, GetNativeClassForScriptClass<CUtlString, char const*>, GetVM, IsEmpty, IsInitialized, IsValid, LookupFunction, _V_strcmp, operator=, ~CUtlString, ~CVariantBase
// calls: CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::Clear, CVariantBase<CVariantDefaultAllocator>::AssignTo, CUtlString::Get, strcmp, CUtlString::operator=, CUtlString::FreeMemoryBlock, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, _Unwind_Resume
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses, CEntitySystem::FindClassByDesignName, CEntitySystem::CreateEntity
// strings: "GetNativeClassForScriptClass"
// globals: g_pEntitySystem
CEntityClass *__fastcall CEntitySystem::FindClassByName(
        CEntitySystem *const this,
        const char *pszName,
        CUtlString *pOutScriptClassName)
{
  unsigned __int16 v6; // ax
  __int64 v7; // r8
  __int64 v8; // r14
  IScriptVM *v10; // rdi
  HSCRIPT hFunction; // rsi
  HSCRIPT m_hScope; // r9
  int v13; // r14d
  char *m_pString; // rax
  const char *v15; // rax
  const char *v16; // rax
  CEntityClass *ClassByName; // r12
  bool v18; // bl
  CUtlString nativeClassName; // [rsp+10h] [rbp-60h] BYREF
  HSCRIPT__ **src; // [rsp+18h] [rbp-58h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+20h] [rbp-50h] BYREF
  CUtlMap<char const*,CEntityClass*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+30h] [rbp-40h] BYREF

  if ( pszName == 0 || *pszName == 0 )
    return 0;
  search.key = pszName;
  v6 = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_ClassesByName.m_Tree,
         &search);
  v8 = v6;
  if ( v6 == 0xFFFF )
  {
    v10 = g_pScriptVM;
    if ( g_pScriptVM == 0 || g_EntityScriptFramework.m_hScope == 0 )
    {
      ClassByName = 0;
LABEL_27:
      if ( pOutScriptClassName != 0 )
      {
        CUtlString::Clear(pOutScriptClassName);
        return 0;
      }
      return ClassByName;
    }
    hFunction = g_EntityScriptFramework.m_hScriptFunc_GetNativeClassForScriptClass.hFunction;
    nativeClassName.m_pString = 0;
    m_hScope = g_EntityScriptFramework.m_hScope;
    if ( hFunction == 0 )
    {
      g_EntityScriptFramework.m_hScriptFunc_GetNativeClassForScriptClass.hFunction = (*(*g_pScriptVM + 144LL))(
                                                                                       g_pScriptVM,
                                                                                       "GetNativeClassForScriptClass",
                                                                                       g_EntityScriptFramework.m_hScope,
                                                                                       0,
                                                                                       v7,
                                                                                       g_EntityScriptFramework.m_hScope);
      src = &g_EntityScriptFramework.m_hScriptFunc_GetNativeClassForScriptClass.hFunction;
      CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
        &g_EntityScriptFramework.m_FuncHandles,
        &src);
      hFunction = g_EntityScriptFramework.m_hScriptFunc_GetNativeClassForScriptClass.hFunction;
      if ( hFunction == 0 )
        goto LABEL_33;
      v10 = g_pScriptVM;
      m_hScope = g_EntityScriptFramework.m_hScope;
    }
    v21.m_type = 0;
    v21.m_flags = 0;
    v21.m_uint64 = 0;
    LODWORD(search.elem) = 30;
    search.key = pszName;
    v13 = (*(*v10 + 160LL))(v10, hFunction, &search, 1, &v21, m_hScope, 1);
    if ( (BYTE2(search.elem) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, search.key);
    if ( v13 != -1 )
    {
      CVariantBase<CVariantDefaultAllocator>::AssignTo(&v21, &nativeClassName);
      if ( (v21.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
        v21.m_flags &= ~1u;
        v21.m_uint64 = 0;
        v21.m_type = 0;
      }
      m_pString = nativeClassName.m_pString;
      if ( nativeClassName.m_pString != 0 && *nativeClassName.m_pString != 0 )
      {
        v15 = CUtlString::Get(&nativeClassName);
        if ( strcmp(v15, pszName) != 0 )
        {
          v16 = CUtlString::Get(&nativeClassName);
          ClassByName = CEntitySystem::FindClassByName(g_pEntitySystem, v16, 0);
          if ( pOutScriptClassName != 0 )
            CUtlString::operator=(pOutScriptClassName, pszName);
          m_pString = nativeClassName.m_pString;
          v18 = ClassByName == 0;
LABEL_22:
          if ( m_pString != 0 )
            CUtlString::FreeMemoryBlock(&nativeClassName);
          if ( !v18 )
            return ClassByName;
          goto LABEL_27;
        }
        m_pString = nativeClassName.m_pString;
      }
      v18 = 1;
      ClassByName = 0;
      goto LABEL_22;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v21);
LABEL_33:
    m_pString = nativeClassName.m_pString;
    v18 = 1;
    ClassByName = 0;
    goto LABEL_22;
  }
  if ( pOutScriptClassName != 0 )
    CUtlString::Clear(pOutScriptClassName);
  return this->m_ClassesByName.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
}


// CEntitySystem::IterClassesStart  (line 1465, @0x00000000030ac180, libserver.so)  // inlines: FirstInorder, LeftChild, operator[]
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses
CEntityClass *__fastcall CEntitySystem::IterClassesStart(CEntitySystem *const this, EntityClassIter_t *pIter)
{
  __int64 m_Root; // r8
  CEntityClass *result; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass*>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx

  m_Root = this->m_ClassesByName.m_Tree.m_Root;
  result = 0;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_ClassesByName.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    if ( m_Root == 0xFFFF )
    {
      return 0;
    }
    else
    {
      *pIter = m_Root;
      return this->m_ClassesByName.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.elem;
    }
  }
  return result;
}


// CEntitySystem::IterClassesNext  (line 1477, @0x00000000030af070, libserver.so)  // inlines: Element, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityClass*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses, CEntitySystem::BuildComponentUnserializers, CEntitySystem::Init
CEntityClass *__fastcall CEntitySystem::IterClassesNext(CEntitySystem *const this, EntityClassIter_t *pIter)
{
  unsigned __int16 Inorder; // ax

  Inorder = CUtlRBTree<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityClass *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
              &this->m_ClassesByName.m_Tree,
              *pIter);
  if ( Inorder == 0xFFFF )
    return 0;
  *pIter = Inorder;
  return this->m_ClassesByName.m_Tree.m_Elements.m_pMemory[Inorder].m_Data.elem;
}


// CEntitySystem::IterClassesEnd  (line 1489, @0x00000000030ac1f0, libserver.so)
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses
void __fastcall CEntitySystem::IterClassesEnd(CEntitySystem *const this, EntityClassIter_t *pIter)
{
  ;
}


// CEntitySystem::RegisterComponentType  (line 1495, @0x00000000030baba0, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeafCodeInfo_t, LeftChild, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::Find, LoggingSystem_IsChannelEnabled, CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CEntitySystem::Init
// strings: "entitysystem.cpp", "RegisterComponentType", "Multiple registration of class %s\n"
int __fastcall CEntitySystem::RegisterComponentType(
        CEntitySystem *const this,
        CEntityComponentHelper *pComponentHelper)
{
  const char *m_pName; // r15
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Left; // ax
  char v8; // cl
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper*>::Node_t,short unsigned int> *m_pMemory; // rax
  CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper*>::Node_t,short unsigned int,CUtlMap<char const*,CEntityComponentHelper*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper*>::Node_t,short unsigned int>,short unsigned int> > *p_m_Tree; // r14
  unsigned __int16 v12; // ax
  bool v13; // r15
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)> *p_m_ComponentTypesByName; // [rsp+8h] [rbp-58h]
  int v15; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t search[3]; // [rsp+10h] [rbp-50h] BYREF

  if ( pComponentHelper == 0 )
    return -1;
  m_pName = pComponentHelper->m_pInfo->m_pName;
  p_m_ComponentTypesByName = &this->m_ComponentTypesByName;
  search[0].m_szFile = m_pName;
  if ( CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_ComponentTypesByName.m_Tree,
         search) != 0xFFFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
    {
      search[0].m_szFile = "entitysystem.cpp";
      search[0].m_szFunction = "RegisterComponentType";
      search[0].m_nLine = 1506;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        search,
        "Multiple registration of class %s\n",
        m_pName);
    }
    return -1;
  }
  *&search[0].m_nLine = pComponentHelper;
  m_Root = this->m_ComponentTypesByName.m_Tree.m_Root;
  search[0].m_szFile = m_pName;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v13 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v9 = !this->m_ComponentTypesByName.m_Tree.m_LessFunc.m_LessFunc(
            search,
            &this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
    m_pMemory = this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory;
    if ( v9 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v8 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_12;
LABEL_9:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v8 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_9;
LABEL_12:
  v13 = v8;
LABEL_13:
  p_m_Tree = &p_m_ComponentTypesByName->m_Tree;
  v12 = CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &p_m_ComponentTypesByName->m_Tree,
          search);
  v15 = v12;
  CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    p_m_Tree,
    v12,
    m_Root,
    v13);
  ++this->m_ComponentTypesByName.m_Tree.m_NumElements;
  return v15;
}


// CEntitySystem::UnregisterComponentType  (line 1515, @0x00000000030bad20, libserver.so)  // inlines: Remove
// calls: CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::Remove
void __fastcall CEntitySystem::UnregisterComponentType(
        CEntitySystem *const this,
        CEntityComponentHelper *pComponentHelper)
{
  __int64 v2; // rbp
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t v3; // [rsp-18h] [rbp-18h] BYREF
  __int64 v4; // [rsp-8h] [rbp-8h]

  if ( pComponentHelper != 0 )
  {
    v4 = v2;
    v3.key = pComponentHelper->m_pInfo->m_pName;
    CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Remove(
      &this->m_ComponentTypesByName.m_Tree,
      &v3);
  }
}


// CEntitySystem::FindComponentTypeByName  (line 1528, @0x00000000030af150, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CEntitySystem::ServiceEntityIOEvents, CNetworkSerializerBindingBuildFilter::GetOverridePointedToClass, CNetworkSerializerBindingBuildFilter::GetFieldPriority
CEntityComponentHelper *__fastcall CEntitySystem::FindComponentTypeByName(
        CEntitySystem *const this,
        const char *pszName)
{
  unsigned __int16 v3; // ax
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = pszName;
  v3 = CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_ComponentTypesByName.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CEntitySystem::NumComponentTypes  (line 1542, @0x00000000030ac200, libserver.so)
// callers: CEntityClass::IsKeyUsedByUnserialization, CEntityClass::GetEntityUnserializer, CEntityClass::Unserialize, CEntityIdentity::IterComponentsNext
int __fastcall CEntitySystem::NumComponentTypes(CEntitySystem *const this)
{
  return this->m_ComponentTypesByName.m_Tree.m_NumElements;
}


// CEntitySystem::SetGlobals  (line 1549, @0x00000000030ac210, libserver.so)
// callers: CSource1GameConfiguration::InitGameSession
// globals: gpGlobalsBase
void __fastcall CEntitySystem::SetGlobals(CEntitySystem *const this, CGlobalVarsBase *pGlobals)
{
  gpGlobalsBase = pGlobals;
}


// CEntitySystem::FindComponentTypeByRuntimeIndex  (line 1556, @0x00000000030ac220, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// callers: CEntityClass::IsKeyUsedByUnserialization, CEntityClass::GetEntityUnserializer, CEntityClass::Unserialize, CEntityIdentity::IterComponentsNext, CEntitySystem::BuildComponentUnserializers
CEntityComponentHelper *__fastcall CEntitySystem::FindComponentTypeByRuntimeIndex(CEntitySystem *const this, int i)
{
  CEntityComponentHelper *result; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper*>::Node_t,short unsigned int> *m_pMemory; // rdx

  result = 0;
  if ( i < this->m_ComponentTypesByName.m_Tree.m_Elements.m_nAllocationCount )
  {
    result = 0;
    if ( i <= this->m_ComponentTypesByName.m_Tree.m_LastAlloc.index && i != 0xFFFF )
    {
      m_pMemory = this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory;
      if ( m_pMemory[i].m_Left != i )
        return m_pMemory[i].m_Data.elem;
    }
  }
  return result;
}


// CEntitySystem::IterComponentTypesStart  (line 1565, @0x00000000030ac270, libserver.so)  // inlines: FirstInorder, LeftChild, operator[]
// callers: CEntityScriptFramework::LoadFramework
CEntityComponentHelper *__fastcall CEntitySystem::IterComponentTypesStart(
        CEntitySystem *const this,
        EntityComponentTypeIter_t *pIter)
{
  __int64 m_Root; // r8
  CEntityComponentHelper *result; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper*>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx

  m_Root = this->m_ComponentTypesByName.m_Tree.m_Root;
  result = 0;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    if ( m_Root == 0xFFFF )
    {
      return 0;
    }
    else
    {
      *pIter = m_Root;
      return this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.elem;
    }
  }
  return result;
}


// CEntitySystem::IterComponentTypesNext  (line 1580, @0x00000000030af440, libserver.so)  // inlines: Element, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CEntityScriptFramework::LoadFramework
CEntityComponentHelper *__fastcall CEntitySystem::IterComponentTypesNext(
        CEntitySystem *const this,
        EntityComponentTypeIter_t *pIter)
{
  unsigned __int16 Inorder; // ax

  Inorder = CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
              &this->m_ComponentTypesByName.m_Tree,
              *pIter);
  if ( Inorder == 0xFFFF )
    return 0;
  *pIter = Inorder;
  return this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[Inorder].m_Data.elem;
}


// CEntitySystem::IterComponentTypesEnd  (line 1595, @0x00000000030ac2e0, libserver.so)
// callers: CEntityScriptFramework::LoadFramework
void __fastcall CEntitySystem::IterComponentTypesEnd(CEntitySystem *const this, EntityComponentTypeIter_t *pIter)
{
  ;
}


// CEntitySystem::AllocateEntityIdentity  (line 1603, @0x00000000030b2e00, libserver.so)  // inlines: AddFlags, IndexToIdentity, IsUsed, LeafCodeInfo_t, LookupEntityByIndex
// calls: LoggingSystem_IsChannelEnabled, CConcreteEntityList::AllocEntity, CEntityIdentity::GetDebugName, LoggingSystem_Log, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_CreateUUIDImpl
// callers: CEntitySystem::CreateEntity, CEntitySystem::AllocateForPrecache
// strings: "Entity allocation failed since it forced slot %d, which is currently used by entity \"%s\, "entitysystem.cpp", "AllocateEntityIdentity", "DoAllocateEntity pEntity->m_pInstance != NULL %d\n", "Bad entity serial number %d\n", "DoAllocateEntity failed\n" (8 total)
CEntityIdentity *__fastcall CEntitySystem::AllocateEntityIdentity(
        CEntitySystem *const this,
        bool bNetworkable,
        CEntityIndex iForcedIndex,
        int iForcedSerial,
        const V_uuid_t *pForcedId,
        bool bCreateInIsolatedPrecacheList,
        bool bIsAnonymous)
{
  CEntityIdentity *result; // rax
  unsigned int m_Data; // r12d
  int (***v13)(...); // r13
  int (**v14)(...); // rax
  __int64 v15; // r12
  int (**v16)(...); // rax
  int (**v17)(...); // rdi
  int (**v18)(...); // rdi
  const char *DebugName; // rax
  V_uuid_t *m_pId; // rdi
  __int64 v21; // r10
  CEntityIdentity *pEntity; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v23; // [rsp+10h] [rbp-50h] BYREF

  if ( iForcedIndex.m_Data == -1 )
  {
    result = CConcreteEntityList::AllocEntity(
               &this->m_EntityList,
               bNetworkable,
               -1,
               -1,
               bCreateInIsolatedPrecacheList,
               bIsAnonymous);
    if ( result == 0 )
      goto LABEL_36;
    m_Data = iForcedIndex.m_Data;
  }
  else
  {
    if ( !bNetworkable )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
        LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, "Cannot force non-networkable entity index %d\n", iForcedIndex.m_Data);
      return 0;
    }
    if ( iForcedIndex.m_Data > 0x3FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
        LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, &::iForcedIndex, iForcedIndex.m_Data);
      return 0;
    }
    m_Data = iForcedSerial;
    if ( iForcedSerial != -1 && iForcedSerial != (iForcedSerial & 0x1FFFF) )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
        LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, "Bad entity serial number %d\n", m_Data);
        return 0;
      }
      return 0;
    }
    result = CConcreteEntityList::AllocEntity(
               &this->m_EntityList,
               1,
               iForcedIndex,
               iForcedSerial,
               bCreateInIsolatedPrecacheList,
               bIsAnonymous);
    if ( result == 0 )
    {
      if ( (iForcedIndex.m_Data >> 9) <= 0x3F )
      {
        v13 = &this->_vptr_IEntityResourceManifestBuilder + (iForcedIndex.m_Data >> 9);
        v14 = v13[3];
        if ( v14 != 0 )
        {
          v15 = 15LL * (iForcedIndex.m_Data & 0x1FF);
          v16 = &v14[v15];
          if ( v16 != 0 && (v16[2] & 0x7FFF) == iForcedIndex.m_Data )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            {
              if ( iForcedIndex.m_Data == 0x7FFF
                || (v17 = v13[3]) == 0
                || (v18 = &v17[v15]) == 0
                || (v18[2] & 0x7FFF) != iForcedIndex.m_Data )
              {
                v18 = 0;
              }
              DebugName = CEntityIdentity::GetDebugName(v18);
              LoggingSystem_Log(
                LOG_ENTITY_SYSTEM,
                2,
                "Entity allocation failed since it forced slot %d, which is currently used by entity \"%s\"!\n",
                iForcedIndex.m_Data,
                DebugName);
              return 0;
            }
            return 0;
          }
        }
      }
LABEL_36:
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
        LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, "DoAllocateEntity failed\n");
        return 0;
      }
      return 0;
    }
  }
  m_pId = result->m_pId;
  if ( m_pId == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
    {
      v23.m_nLine = 1655;
      v23.m_szFile = "entitysystem.cpp";
      v23.m_szFunction = "AllocateEntityIdentity";
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &v23,
        "DoAllocateEntity pEntity->m_pId == NULL %d\n",
        m_Data);
    }
    return 0;
  }
  if ( result->m_pInstance != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
    {
      v23.m_nLine = 1661;
      v23.m_szFile = "entitysystem.cpp";
      v23.m_szFunction = "AllocateEntityIdentity";
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &v23,
        "DoAllocateEntity pEntity->m_pInstance != NULL %d\n",
        m_Data);
    }
    return 0;
  }
  if ( pForcedId != 0 )
  {
    v21 = *pForcedId->Data4;
    *&m_pId->Data1 = *&pForcedId->Data1;
    *m_pId->Data4 = v21;
  }
  else
  {
    pEntity = result;
    Plat_CreateUUIDImpl(m_pId, &RandomInt);
    result = pEntity;
  }
  if ( !bNetworkable || this->m_nNetworkMode == NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0 )
    result->m_flags |= 0x100u;
  result->m_pRenderAttrs = 0;
  result->m_pAttributes = 0;
  return result;
}


// CEntitySystem::DeallocateEntityIdentity  (line 1687, @0x00000000030ac2f0, libserver.so)
// calls: CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity
void __fastcall CEntitySystem::DeallocateEntityIdentity(
        CEntitySystem *const this,
        CEntityIdentity *pEntity,
        bool bInvalidateHandle)
{
  CEntityIdentity::FreeAttributes(pEntity, 0);
  CConcreteEntityList::FreeEntity(&this->m_EntityList, pEntity, bInvalidateHandle);
}


// CEntitySystem::OnAddEntityToDatabase  (line 1694, @0x00000000030ac330, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Init
// calls: CEntityClass::AddToClassList
// callers: CEntitySystem::TransferEntityIntoStagingDatabase, CEntitySystem::CreateEntity
void __fastcall CEntitySystem::OnAddEntityToDatabase(CEntitySystem *const this, CEntityIdentity *pEntity)
{
  uint32 m_flags; // eax
  uint32 v5; // edx
  uint32 v6; // ecx
  uint32 v7; // ecx
  void (__fastcall *v8)(CEntitySystem *const, CEntityInstance *, int *); // r8
  __int16 v9; // dx
  CEntityInstance *m_pInstance; // rsi
  int v11[8]; // [rsp+0h] [rbp-20h] BYREF

  m_flags = pEntity->m_flags;
  if ( (m_flags & 0x4000) != 0 )
  {
    pEntity->m_flags = m_flags | 4;
  }
  else
  {
    CEntityClass::AddToClassList(pEntity->m_pClass, pEntity);
    v5 = pEntity->m_flags;
    v6 = pEntity->m_EHandle.m_Index >> 15;
    pEntity->m_flags = v5 | 4;
    v7 = v6 - (v5 & 1);
    v8 = *(this->_vptr_IEntityResourceManifestBuilder + 15);
    v9 = 0x7FFF;
    if ( pEntity->m_EHandle.m_Index != -1 )
      v9 = pEntity->m_EHandle.m_Index & 0x7FFF;
    m_pInstance = pEntity->m_pInstance;
    v11[0] = (v7 << 15) | v9 & 0x7FFF;
    v8(this, m_pInstance, v11);
    g_bReceivedChainedAddedToEntityDatabase = 0;
    (*(pEntity->m_pInstance->_vptr_IHandleEntity + 7))(pEntity->m_pInstance);
  }
}


// CEntitySystem::OnRemoveEntityFromDatabase  (line 1723, @0x00000000030b5ba0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
// calls: CEntitySystem::RemoveEntityFromNameMap, CEntityClass::RemoveFromClassList
// callers: CEntitySystem::ExecuteQueuedDeletion, CEntitySystem::DestroyEntityImmediate
void __fastcall CEntitySystem::OnRemoveEntityFromDatabase(CEntitySystem *const this, CEntityIdentity *pEntity)
{
  uint32 m_flags; // eax
  __int16 v5; // cx
  void (__fastcall *v6)(CEntitySystem *const, CEntityInstance *, int *); // r8
  uint32 v7; // edx
  CEntityInstance *m_pInstance; // rsi
  int v9[8]; // [rsp+0h] [rbp-20h] BYREF

  m_flags = pEntity->m_flags;
  if ( (m_flags & 0x800) == 0 && (m_flags & 0x4000) == 0 )
  {
    v5 = 0x7FFF;
    v6 = *(this->_vptr_IEntityResourceManifestBuilder + 16);
    v7 = (pEntity->m_EHandle.m_Index >> 15) - (pEntity->m_flags & 1);
    if ( pEntity->m_EHandle.m_Index != -1 )
      v5 = pEntity->m_EHandle.m_Index & 0x7FFF;
    m_pInstance = pEntity->m_pInstance;
    v9[0] = (v7 << 15) | v5 & 0x7FFF;
    v6(this, m_pInstance, v9);
    CEntitySystem::RemoveEntityFromNameMap(this, pEntity);
    CEntityClass::RemoveFromClassList(pEntity->m_pClass, pEntity);
  }
}


// CEntitySystem::DoConstructEntity  (line 1747, @0x00000000030bc2e0, libserver.so)  // inlines: AddFlags, AllocPooledString, CEntitySpawnHelperScopeGuard, CUtlString, CUtlSymbolLarge, CVariantBase, GetDesignerNameForScriptClass<CUtlString, char const*>, GetName, GetVM, IsEmpty, IsInitialized, IsValid, LookupFunction, RemoveFlags, operator char const*, operator=, operator[], ~CEntitySpawnHelperScopeGuard, ~CUtlString, ~CVariantBase
// calls: CEntitySystem::DoDestructEntity, CEntityInstance::CreatePublicScriptScope, CScriptAccessorT<CDefScriptAccessorBase, true>::Call<char const*>, CVariantBase<CVariantDefaultAllocator>::AssignTo, CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::AddString, CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator>::AddToTail, _Unwind_Resume
// callers: CEntitySystem::CreateEntity, CEntitySystem::AllocateForPrecache
// strings: "GetDesignerNameForScriptClass"
// globals: CEntitySpawnHelper::gm_pCurEntityPtr
bool __fastcall CEntitySystem::DoConstructEntity(
        CEntitySystem *const this,
        CEntityIdentity *pEntity,
        const char *pszScriptClass)
{
  CEntityInstance *v5; // rax
  CEntityClass *m_pClass; // r12
  int m_Size; // r14d
  unsigned __int64 v8; // rbx
  char v9; // r15
  __int64 v10; // r14
  CEntityClass::ComponentHelper_t *v11; // rax
  CEntityComponentHelper *m_pHelper; // rdi
  bool result; // al
  HSCRIPT hFunction; // rsi
  const char *v15; // rax
  char *v16; // rax
  CEntityInstance *pEntityInstance; // [rsp+10h] [rbp-70h]
  CEntityInstance *pInstance; // [rsp+18h] [rbp-68h]
  CUtlString designerName; // [rsp+20h] [rbp-60h] BYREF
  char *v21; // [rsp+30h] [rbp-50h] BYREF
  HSCRIPT__ **src; // [rsp+38h] [rbp-48h] BYREF
  ScriptVariant_t pReturn; // [rsp+40h] [rbp-40h] BYREF

  pEntity->m_flags |= 0x400u;
  v5 = (*(pEntity->m_pClass->_vptr_CEntityClass + 3))(pEntity->m_pClass);
  pEntity->m_pInstance = v5;
  v5->m_pEntity = pEntity;
  m_pClass = pEntity->m_pClass;
  pEntityInstance = v5;
  CEntitySpawnHelper::gm_pCurEntityPtr = v5;
  pEntity->m_designerName.u.m_Id = m_pClass->m_designerName.u.m_Id;
  if ( pszScriptClass != 0 && *pszScriptClass != 0 )
  {
    CEntityInstance::CreatePublicScriptScope(v5, pszScriptClass);
    designerName.m_pString = 0;
    hFunction = g_EntityScriptFramework.m_hScriptFunc_GetDesignerNameForScriptClass.hFunction;
    if ( hFunction == 0 )
    {
      if ( g_pScriptVM == 0 || g_EntityScriptFramework.m_hScope == 0 )
      {
        g_EntityScriptFramework.m_hScriptFunc_GetDesignerNameForScriptClass.hFunction = 0;
        goto LABEL_25;
      }
      g_EntityScriptFramework.m_hScriptFunc_GetDesignerNameForScriptClass.hFunction = (*(*g_pScriptVM + 144LL))(
                                                                                        g_pScriptVM,
                                                                                        "GetDesignerNameForScriptClass",
                                                                                        g_EntityScriptFramework.m_hScope,
                                                                                        0);
      src = &g_EntityScriptFramework.m_hScriptFunc_GetDesignerNameForScriptClass.hFunction;
      CUtlVectorUltraConservative<HSCRIPT__ **,CUtlVectorUltraConservativeAllocator>::AddToTail(
        &g_EntityScriptFramework.m_FuncHandles,
        &src);
      hFunction = g_EntityScriptFramework.m_hScriptFunc_GetDesignerNameForScriptClass.hFunction;
      if ( hFunction == 0 )
        goto LABEL_25;
    }
    pReturn.m_type = 0;
    pReturn.m_flags = 0;
    pReturn.m_uint64 = 0;
    if ( CScriptAccessorT<CDefScriptAccessorBase,true>::Call<char const*>(
           &g_EntityScriptFramework,
           hFunction,
           &pReturn,
           pszScriptClass) == ScriptStatus_t::SCRIPT_ERROR )
    {
      CVariantBase<CVariantDefaultAllocator>::Free(&pReturn);
    }
    else
    {
      CVariantBase<CVariantDefaultAllocator>::AssignTo(&pReturn, &designerName);
      CVariantBase<CVariantDefaultAllocator>::Free(&pReturn);
      CVariantBase<CVariantDefaultAllocator>::Free(&pReturn);
      if ( designerName.m_pString == 0 )
        goto LABEL_27;
      if ( *designerName.m_pString == 0 )
      {
LABEL_26:
        CUtlString::FreeMemoryBlock(&designerName);
        goto LABEL_27;
      }
      v15 = CUtlString::Get(&designerName);
      if ( v15 == 0 || *v15 != 0 )
      {
        CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::AddString(&v21, &this->m_pooledStrings, v15);
        v16 = v21;
      }
      else
      {
        v16 = 0;
      }
      pEntity->m_designerName.u.m_Id = v16;
    }
LABEL_25:
    if ( designerName.m_pString != 0 )
      goto LABEL_26;
LABEL_27:
    m_pClass = pEntity->m_pClass;
  }
  pInstance = pEntity->m_pInstance;
  if ( (m_pClass->m_nAllHelpersFlags & 1) == 0 )
    goto LABEL_14;
  m_Size = m_pClass->m_AllHelpers.m_Size;
  if ( m_Size <= 0 )
    goto LABEL_14;
  v8 = 0;
  v9 = 1;
  v10 = 16 * ((m_Size - 1) + 1LL);
  do
  {
    while ( 1 )
    {
      v11 = &m_pClass->m_AllHelpers.m_Memory.m_pMemory[v8 / 0x10];
      m_pHelper = v11->m_pHelper;
      if ( (m_pHelper->m_flags & 1) != 0 )
        break;
      v8 += 16LL;
      if ( v8 == v10 )
        goto LABEL_11;
    }
    if ( (*(m_pHelper->_vptr_CEntityComponentHelper + 3))(m_pHelper, pEntity, pInstance + v11->m_offset) == 0 )
      v9 = 0;
    v8 += 16LL;
  }
  while ( v8 != v10 );
LABEL_11:
  if ( v9 != 0 )
  {
    m_pClass = pEntity->m_pClass;
LABEL_14:
    (*(m_pClass->_vptr_CEntityClass + 4))(m_pClass, pEntityInstance);
    g_bReceivedChainedConnect = 0;
    (*(pEntity->m_pInstance->_vptr_IHandleEntity + 5))(pEntity->m_pInstance);
    pEntity->m_flags &= ~0x400u;
    result = 1;
    goto LABEL_15;
  }
  pEntity->m_flags &= ~0x400u;
  CEntitySystem::DoDestructEntity(this, pEntityInstance, 1);
  result = 0;
LABEL_15:
  CEntitySpawnHelper::gm_pCurEntityPtr = 0;
  return result;
}


// CEntitySystem::DoDestructEntity  (line 1809, @0x00000000030ac3e0, libserver.so)  // inlines: operator[]
// callers: CEntitySystem::DeallocateForPrecache, CEntitySystem::ExecuteQueuedDeallocation, CEntitySystem::DestroyEntityImmediate, CEntitySystem::DoConstructEntity
// globals: g_bDisableEhandleAccess
void __fastcall CEntitySystem::DoDestructEntity(
        CEntitySystem *const this,
        CEntityInstance *pEntityInstance,
        bool bPartiallyConstructed)
{
  CEntityIdentity *m_pEntity; // r13
  CEntityClass *m_pClass; // r15
  int v6; // r12d
  __int64 v7; // rbx
  CEntityClass::ComponentHelper_t *v8; // rdx
  CEntityComponentHelper *m_pHelper; // rdi

  m_pEntity = pEntityInstance->m_pEntity;
  m_pClass = m_pEntity->m_pClass;
  if ( (m_pClass->m_nAllHelpersFlags & 2) != 0 )
  {
    v6 = m_pClass->m_AllHelpers.m_Size - 1;
    if ( v6 >= 0 )
    {
      v7 = v6;
      do
      {
        while ( 1 )
        {
          v8 = &m_pClass->m_AllHelpers.m_Memory.m_pMemory[v7];
          m_pHelper = v8->m_pHelper;
          if ( (m_pHelper->m_flags & 2) != 0 )
            break;
          --v6;
          --v7;
          if ( v6 == -1 )
            goto LABEL_7;
        }
        --v6;
        --v7;
        (*(m_pHelper->_vptr_CEntityComponentHelper + 4))(m_pHelper, m_pEntity, pEntityInstance + v8->m_offset);
      }
      while ( v6 != -1 );
    }
  }
LABEL_7:
  g_bDisableEhandleAccess = 1;
  if ( !bPartiallyConstructed )
    (*(m_pClass->_vptr_CEntityClass + 5))(m_pClass, pEntityInstance);
  (*(m_pClass->_vptr_CEntityClass + 6))(m_pClass, pEntityInstance);
  g_bDisableEhandleAccess = 0;
  m_pEntity->m_pInstance = 0;
}


// CEntitySystem::CreateEntity  (line 1831, @0x00000000030bc5b0, libserver.so)  // inlines: CEntityHandle, DeallocateEntityIdentity, GetActiveSpawnGroupHandle, GetEntryIndex, GetInstance, GetRequiredEntityHandle, GetSerialNumber, IsCapableOfNetworking, SetSpawnGroupHandle, ShouldSpawnInSpawnGroupInvalid
// calls: CEntityClass::GetRequiredEntityHandle, CEntitySystem::AllocateEntityIdentity, CEntitySystem::DoConstructEntity, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity, CEntitySystem::OnAddEntityToDatabase, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDevtestHierarchy2::Spawn, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityGroupFromTable, CBreakableProp::SetEnableMotionPosition, CreateWorldEntity, CBaseEntity::Create, CCommentarySystem::InitCommentary, CBeam::BeamCreate (61 total)
// strings: "Cannot create an entity because entity class is NULL %d\n"
CEntityInstance *__fastcall CEntitySystem::CreateEntity(
        CEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        CEntityClass *pClass,
        const char *pszScriptClassName,
        EntityNetworkingMode_t networkMode,
        CEntityIndex iForcedIndex,
        int iForcedSerial,
        const V_uuid_t *pForcedId,
        bool bCreateInIsolatedPrecacheList)
{
  int32 m_Data; // r14d
  EntityNetworkingMode_t v13; // r8d
  CEntityClassInfo *m_pBaseClassInfo; // rax
  CEntityClass *m_pClass; // rax
  CEntityClassInfo *v16; // rax
  CEntityClassInfo *v17; // rax
  uint32 m_Index; // eax
  uint32 m_flags; // eax
  _BOOL8 v20; // rsi
  CEntityIdentity *EntityIdentity; // rax
  CEntityIdentity *v22; // r14
  CEntityClassInfo *v23; // r8
  CEntityClass *v24; // r8
  CEntityInstance *m_pInstance; // r13
  CEntityHandle hRequiredHandle; // [rsp+20h] [rbp-40h] BYREF

  if ( pClass == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) == 0 )
      return 0;
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "Cannot create an entity because entity class is NULL %d\n",
      iForcedIndex.m_Data);
    return 0;
  }
  m_Data = iForcedIndex.m_Data;
  if ( (*(pClass->_vptr_CEntityClass + 8))(pClass) == 0 )
    return 0;
  v13 = networkMode;
  if ( (pClass->m_flags & 8) != 0 )
  {
    m_Index = pClass->m_requiredEHandle.m_Index;
    hRequiredHandle.m_Index = m_Index;
    goto LABEL_11;
  }
  m_pBaseClassInfo = pClass->m_pBaseClassInfo;
  if ( m_pBaseClassInfo == 0 )
    goto LABEL_32;
  m_pClass = m_pBaseClassInfo->m_pClass;
  if ( (m_pClass->m_flags & 8) == 0 )
  {
    v16 = m_pClass->m_pBaseClassInfo;
    if ( v16 == 0 )
      goto LABEL_32;
    m_pClass = v16->m_pClass;
    if ( (m_pClass->m_flags & 8) == 0 )
    {
      v17 = m_pClass->m_pBaseClassInfo;
      if ( v17 != 0 )
      {
        CEntityClass::GetRequiredEntityHandle(&hRequiredHandle.m_Index, v17->m_pClass);
        m_Index = hRequiredHandle.m_Index;
        v13 = networkMode;
        goto LABEL_11;
      }
LABEL_32:
      hRequiredHandle.m_Index = -1;
      if ( networkMode == EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_NETWORKED )
        goto LABEL_33;
LABEL_14:
      if ( v13 == EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_NOT_NETWORKED )
      {
        if ( m_Data != -1 )
          return 0;
        goto LABEL_16;
      }
      if ( v13 != EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT )
      {
LABEL_16:
        m_flags = pClass->m_flags;
        LOBYTE(v20) = 0;
        goto LABEL_17;
      }
      if ( m_Data == -1 )
      {
        if ( this->m_nNetworkMode != NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0 )
          goto LABEL_16;
        m_flags = pClass->m_flags;
        LOBYTE(v20) = 0;
        if ( (m_flags & 1) == 0 )
          v20 = pClass->m_hNetworkSerializer != 0;
      }
      else
      {
        m_flags = pClass->m_flags;
        if ( (m_flags & 1) != 0 )
          return 0;
        LOBYTE(v20) = 1;
        if ( pClass->m_hNetworkSerializer == 0 )
          return 0;
      }
LABEL_17:
      EntityIdentity = CEntitySystem::AllocateEntityIdentity(
                         this,
                         v20,
                         m_Data,
                         iForcedSerial,
                         pForcedId,
                         bCreateInIsolatedPrecacheList,
                         (m_flags & 0x40) != 0);
      v22 = EntityIdentity;
      if ( EntityIdentity == 0 )
        return 0;
      EntityIdentity->m_pClass = pClass;
      if ( (pClass->m_flags & 4) == 0 )
      {
        v23 = pClass->m_pBaseClassInfo;
        if ( v23 == 0 )
        {
LABEL_30:
          if ( hSpawnGroup == -1 )
            hSpawnGroup = this->m_ActiveSpawnGroupHandle;
          goto LABEL_24;
        }
        while ( 1 )
        {
          v24 = v23->m_pClass;
          if ( (v24->m_flags & 4) != 0 )
            break;
          v23 = v24->m_pBaseClassInfo;
          if ( v23 == 0 )
            goto LABEL_30;
        }
      }
      hSpawnGroup = 0;
LABEL_24:
      EntityIdentity->m_hSpawnGroup = hSpawnGroup;
      if ( !CEntitySystem::DoConstructEntity(this, EntityIdentity, pszScriptClassName) )
      {
        CEntityIdentity::FreeAttributes(v22, 0);
        CConcreteEntityList::FreeEntity(&this->m_EntityList, v22, 1);
        return 0;
      }
      m_pInstance = v22->m_pInstance;
      m_pInstance->m_worldGroupId.m_nHashCode = (*(this->_vptr_IEntityResourceManifestBuilder + 17))(this, hSpawnGroup);
      if ( (v22->m_flags & 0x800) == 0 )
        CEntitySystem::OnAddEntityToDatabase(this, v22);
      return v22->m_pInstance;
    }
  }
  m_Index = m_pClass->m_requiredEHandle.m_Index;
  hRequiredHandle.m_Index = m_Index;
LABEL_11:
  if ( m_Index != -1 )
  {
    iForcedSerial = hRequiredHandle.m_Index >> 15;
    m_Data = hRequiredHandle.m_Index & 0x7FFF;
  }
  if ( v13 != EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_NETWORKED )
    goto LABEL_14;
LABEL_33:
  m_flags = pClass->m_flags;
  if ( (m_flags & 1) != 0
    || pClass->m_hNetworkSerializer == 0
    || this->m_nNetworkMode != NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0 && m_Data == -1 )
  {
    return 0;
  }
  LOBYTE(v20) = 1;
  goto LABEL_17;
}


// CEntitySystem::CreateEntity  (line 1954, @0x00000000030bdc00, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CEntitySystem::FindClassByName, CUtlString::Get, CEntitySystem::CreateEntity, CUtlString::FreeMemoryBlock, CEntitySystem::FindClassByDesignName, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, _Unwind_Resume
// callers: CreateEntityByName, CreateModelEntityByName, CEntitySaveRestoreBlockHandler::Restore, CreateEntitiesInTransitionList, CLoadingSpawnGroup::CreateEntityToSpawn, CC_Ent_Info, CCommentarySystem::LoadCommentaryFile
// strings: "Attempted to create unknown entity classname \"%s\"!\n"
CEntityInstance *__fastcall CEntitySystem::CreateEntity(
        CEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const char *pszNameOrDesignName,
        EntityNetworkingMode_t networkMode,
        CEntityIndex iForcedIndex,
        int iForcedSerial,
        const V_uuid_t *pForcedId,
        bool bCreateInIsolatedPrecacheList)
{
  CEntityClass *ClassByName; // r12
  const char *v12; // rax
  CEntityInstance *result; // rax
  CEntityInstance *hSpawnGroupb; // [rsp+28h] [rbp-48h]
  CUtlString scriptClassName; // [rsp+30h] [rbp-40h] BYREF

  scriptClassName.m_pString = 0;
  ClassByName = CEntitySystem::FindClassByName(this, pszNameOrDesignName, &scriptClassName);
  if ( ClassByName != 0
    || (ClassByName = CEntitySystem::FindClassByDesignName(this, pszNameOrDesignName, &scriptClassName)) != 0 )
  {
    v12 = CUtlString::Get(&scriptClassName);
    result = CEntitySystem::CreateEntity(
               this,
               hSpawnGroup,
               ClassByName,
               v12,
               networkMode,
               iForcedIndex,
               iForcedSerial,
               pForcedId,
               bCreateInIsolatedPrecacheList);
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 0) != 0 )
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        0,
        "Attempted to create unknown entity classname \"%s\"!\n",
        pszNameOrDesignName);
    result = 0;
  }
  if ( scriptClassName.m_pString != 0 )
  {
    hSpawnGroupb = result;
    CUtlString::FreeMemoryBlock(&scriptClassName);
    return hSpawnGroupb;
  }
  return result;
}


// CEntitySystem::UnserializeForPrecache  (line 1976, @0x00000000030b4f90, libserver.so)  // inlines: AddFlags, AddString, Alloc, AllocPooledString, Base, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Compare, CopyConstruct<CUtlSymbolTableLargeBaseTreeEntry_t*>, Element, Find, FindKeyHash, FindPoolWithSpace, GetInstance, GetValue, GetValueString, HashStringFastCaseless, Insert, InsertUncommitted, LockForRead, TempString, ToSymbol, UnlockRead, V_memcpy, V_strlen, memcpy, operator!=, operator[]
// calls: strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CEntityIdentity::SetEntityName, CEntityClass::Unserialize, CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), CThreadSpinRWLock::LockForWrite, CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::Find (14 total)
// callers: CEntitySystem::BuildResourceManifest, CEntitySystem::AllocateForPrecache
// globals: CEntityKeyValues::sm_EmptyVariant
bool __fastcall CEntitySystem::UnserializeForPrecache(
        CEntitySystem *const this,
        CEntityIdentity *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  CEntityInstance *m_pInstance; // r12
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v9; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // r15
  int v14; // r9d
  char *v15; // rax
  string_t *v16; // rcx
  int v17; // r9d
  bool result; // al
  int v19; // r10d
  signed int v20; // edx
  _DWORD **v21; // rdi
  int v22; // esi
  _DWORD **v23; // rdi
  int v24; // ecx
  _DWORD *v25; // r11
  unsigned int v26; // ecx
  __int64 v27; // rsi
  int v28; // eax
  _DWORD *v29; // rax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v30; // r10
  __int64 v31; // rsi
  __int64 v32; // r15
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirst; // rdx
  int v34; // eax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v35; // r13
  _QWORD *v36; // r9
  _QWORD *v37; // rdx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v38; // r10
  string_t *v39; // rcx
  int v40; // eax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v41; // rcx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v42; // rax
  CUtlMemoryPoolBase *v43; // rcx
  string_t *v44; // [rsp+0h] [rbp-80h]
  __int64 v45; // [rsp+8h] [rbp-78h]
  string_t *v46; // [rsp+8h] [rbp-78h]
  _QWORD *v47; // [rsp+8h] [rbp-78h]
  int v48; // [rsp+10h] [rbp-70h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v49; // [rsp+10h] [rbp-70h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v50; // [rsp+10h] [rbp-70h]
  string_t *v51; // [rsp+10h] [rbp-70h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v52; // [rsp+10h] [rbp-70h]
  unsigned int v53; // [rsp+18h] [rbp-68h]
  int v54; // [rsp+18h] [rbp-68h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v55; // [rsp+18h] [rbp-68h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v56; // [rsp+18h] [rbp-68h]
  _QWORD *v57; // [rsp+18h] [rbp-68h]
  string_t *v58; // [rsp+18h] [rbp-68h]
  string_t *v59; // [rsp+18h] [rbp-68h]
  string_t_table *p_m_pooledStrings; // [rsp+20h] [rbp-60h]
  CUtlMemoryPoolBase *v61; // [rsp+20h] [rbp-60h]
  int v62; // [rsp+28h] [rbp-58h]
  unsigned int v63; // [rsp+28h] [rbp-58h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v64; // [rsp+28h] [rbp-58h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *p_m_PeakAlloc; // [rsp+28h] [rbp-58h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v66; // [rsp+28h] [rbp-58h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v67; // [rsp+28h] [rbp-58h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v68; // [rsp+28h] [rbp-58h]
  char *v69; // [rsp+30h] [rbp-50h] BYREF
  string_t v70; // [rsp+40h] [rbp-40h] BYREF

  if ( pEntity != 0 )
    m_pInstance = pEntity->m_pInstance;
  else
    m_pInstance = 0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_19:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_14;
    goto LABEL_20;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v9 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v9) == 1094168427 )
      goto LABEL_11;
LABEL_8:
    if ( m_nCount <= ++v9 )
      goto LABEL_19;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v9] != 1094168427 )
    goto LABEL_8;
LABEL_11:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v11 = pKeyValues->m_keyValues.m_pElements;
  else
    v11 = 0;
  p_m_value = &v11[v9].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_14:
    m_uint64 = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 != 0 )
    {
      if ( *m_uint64 != 0 && (v14 = strlen(p_m_value->m_pszString)) > 0 )
      {
        p_m_pooledStrings = &this->m_pooledStrings;
        v62 = v14;
        CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(&v69, &this->m_pooledStrings, m_uint64, v14);
        v15 = v69;
        v16 = &v70;
        v17 = v62;
        if ( v69 != 0 )
          goto LABEL_18;
        v19 = *(&dword_19F00 + this);
        v20 = (v62 + 16) & 0xFFFFFFF8;
        if ( v19 <= 0 )
        {
LABEL_29:
          if ( (v20 + 12LL) <= 0x800 )
          {
            v26 = 2036;
            v27 = 2048;
          }
          else
          {
            v26 = (v62 + 16) & 0xFFFFFFF8;
            v27 = v20 + 12;
          }
          v48 = v62;
          v53 = (v62 + 16) & 0xFFFFFFF8;
          v63 = v26;
          v70.u.m_Id = (**g_pMemAlloc)(g_pMemAlloc, v27);
          *v70.u.m_Id = v63;
          *(v70.u.m_Id + 4) = 0;
          v28 = CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                  (&dword_19F00 + this),
                  &v70);
          v20 = v53;
          v17 = v48;
          v29 = *(*(&stru_19F08.r_offset + this) + 8LL * v28);
          v22 = v29[1];
        }
        else
        {
          v21 = *(&stru_19F08.r_offset + this);
          v22 = (*v21)[1];
          if ( v20 > **v21 - v22 )
          {
            v23 = v21 + 1;
            v24 = 0;
            while ( ++v24 != v19 )
            {
              v25 = *v23++;
              v22 = v25[1];
              if ( v20 <= *v25 - v22 )
              {
                if ( v24 == -1 )
                  goto LABEL_29;
                v29 = v25;
                goto LABEL_32;
              }
            }
            goto LABEL_29;
          }
          v29 = *v21;
        }
LABEL_32:
        v29[1] = v22 + v20;
        v45 = v29 + v22 + 8;
        v54 = v17;
        v64 = (v29 + v22);
        *&v64->m_EntryMemory.m_GrowMode = MurmurHash2LowerCase(m_uint64, 0x3501A674u);
        v49 = v64;
        p_m_PeakAlloc = &v64->m_EntryMemory.m_PeakAlloc;
        memcpy(p_m_PeakAlloc, m_uint64, v54);
        v30 = v45;
        *(&v49->m_EntryMemory.m_PeakAlloc.m_value + v54) = 0;
        v31 = *&v49->m_EntryMemory.m_GrowMode;
        v32 = &p_m_pooledStrings->m_Lookup.m_aBuckets[v31 & 0x7FF];
        v16 = &v70;
        m_pFirst = p_m_pooledStrings->m_Lookup.m_aBuckets[v31 & 0x7FF].m_pFirst;
        if ( m_pFirst != 0 )
        {
          while ( 1 )
          {
            if ( m_pFirst->m_uiKey->m_Hash == v31 )
            {
              v46 = v16;
              v50 = m_pFirst;
              v55 = v30;
              v34 = V_stricmp_fast(m_pFirst->m_uiKey->m_String, p_m_PeakAlloc);
              v30 = v55;
              m_pFirst = v50;
              v16 = v46;
              if ( v34 == 0 )
                break;
            }
            m_pFirst = m_pFirst->m_pNext;
            if ( m_pFirst == 0 )
              goto LABEL_40;
            v31 = *&v30->m_EntryMemory.m_BlockSize;
          }
          v35 = v50;
        }
        else
        {
LABEL_40:
          if ( *(v32 + 32) == 0 )
            goto LABEL_50;
          v51 = v16;
          v56 = v30;
          CThreadSpinRWLock::LockForRead(v32);
          v36 = *(v32 + 24);
          v37 = *(v32 + 32);
          v38 = v56;
          v39 = v51;
          if ( v36 == v37 )
          {
LABEL_49:
            v58 = v39;
            v66 = v38;
            CThreadSpinRWLock::UnlockRead(v32);
            v30 = v66;
            v16 = v58;
LABEL_50:
            v59 = v16;
            v67 = v30;
            CThreadSpinRWLock::LockForWrite(v32);
            v42 = CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
                    v67,
                    *(v32 + 32),
                    *(v32 + 24),
                    v41);
            v43 = v59;
            if ( v42 == 0 )
            {
              *(&off_19EF0 + this) = 1;
              v42 = CUtlMemoryPoolBase::Alloc(&p_m_pooledStrings->m_Lookup.m_EntryMemory);
              v43 = v59;
              *&v42->m_EntryMemory.m_GrowMode = *(v32 + 32);
              *(v32 + 32) = v42;
              *&v42->m_EntryMemory.m_BlockSize = v67;
              *&v42->m_EntryMemory.m_PeakAlloc.m_value = v67;
            }
            v61 = v43;
            v68 = v42;
            CThreadSpinRWLock::UnlockWrite(v32);
            v16 = v61;
            v35 = v68;
          }
          else
          {
            while ( 1 )
            {
              if ( **v37 == *&v38->m_EntryMemory.m_BlockSize )
              {
                v44 = v39;
                v47 = v36;
                v52 = v38;
                v57 = v37;
                v40 = V_stricmp_fast(*v37 + 8LL, p_m_PeakAlloc);
                v37 = v57;
                v38 = v52;
                v36 = v47;
                v39 = v44;
                if ( v40 == 0 )
                  break;
              }
              v37 = v37[1];
              if ( v36 == v37 )
                goto LABEL_49;
            }
            v35 = v57;
            CThreadSpinRWLock::UnlockRead(v32);
            v16 = v44;
          }
        }
        v15 = (*&v35->m_EntryMemory.m_PeakAlloc.m_value + 8LL);
      }
      else
      {
        v16 = &v70;
        v15 = 0;
      }
LABEL_18:
      v70.u.m_Id = v15;
      CEntityIdentity::SetEntityName(pEntity, v16);
    }
  }
LABEL_20:
  result = CEntityClass::Unserialize(pEntity->m_pClass, m_pInstance, pKeyValues);
  pEntity->m_flags |= 0x1000u;
  return result;
}


// CEntitySystem::AllocateForPrecache  (line 1993, @0x00000000030bdd20, libserver.so)  // inlines: Base, CUtlString, DeallocateEntityIdentity, Element, FindKeyHash, GetInstance, GetValue, GetValueString, TempString, operator[], ~CUtlString
// calls: CEntitySystem::FindClassByDesignName, CEntitySystem::AllocateEntityIdentity, CUtlString::Get, CEntitySystem::DoConstructEntity, CEntitySystem::UnserializeForPrecache, CUtlString::FreeMemoryBlock, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity, CEntitySystem::DeallocateForPrecache, _Unwind_Resume
// callers: CEntitySystem::PrecacheEntity, CEntitySystem::InvokePrecacheCallback
// strings: "CEntitySystem::PrecacheEntity: Classname missing from entity!\n"
// globals: CEntityKeyValues::sm_EmptyVariant
CEntityInstance *__fastcall CEntitySystem::AllocateForPrecache(
        CEntitySystem *const this,
        const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rsi
  CEntityClass *ClassByDesignName; // r13
  CEntityIdentity *EntityIdentity; // rax
  CEntityIdentity *v13; // r15
  const char *v14; // rax
  CEntityInstance *m_pInstance; // r13
  CUtlString scriptClassName; // [rsp+10h] [rbp-40h] BYREF

  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_20:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_21;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -971301790 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_20;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -971301790 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type != 30 )
  {
LABEL_21:
    m_pInstance = 0;
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, "CEntitySystem::PrecacheEntity: Classname missing from entity!\n");
    return m_pInstance;
  }
LABEL_12:
  m_uint64 = p_m_value->m_uint64;
  if ( p_m_value->m_uint64 == 0 )
    goto LABEL_21;
  scriptClassName.m_pString = 0;
  ClassByDesignName = CEntitySystem::FindClassByDesignName(this, m_uint64, &scriptClassName);
  if ( ClassByDesignName == 0 )
  {
LABEL_24:
    m_pInstance = 0;
    goto LABEL_17;
  }
  EntityIdentity = CEntitySystem::AllocateEntityIdentity(this, 0, -1, -1, 0, 1, 0);
  EntityIdentity->m_pClass = ClassByDesignName;
  v13 = EntityIdentity;
  v14 = CUtlString::Get(&scriptClassName);
  if ( !CEntitySystem::DoConstructEntity(this, v13, v14) )
  {
    CEntityIdentity::FreeAttributes(v13, 0);
    CConcreteEntityList::FreeEntity(&this->m_EntityList, v13, 1);
    goto LABEL_24;
  }
  m_pInstance = v13->m_pInstance;
  if ( !CEntitySystem::UnserializeForPrecache(this, v13, pKeyValues) )
  {
    CEntitySystem::DeallocateForPrecache(this, m_pInstance);
    m_pInstance = 0;
  }
LABEL_17:
  if ( scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&scriptClassName);
  return m_pInstance;
}


// CEntitySystem::DeallocateForPrecache  (line 2032, @0x00000000030ac4b0, libserver.so)  // inlines: DeallocateEntityIdentity
// calls: CEntitySystem::DoDestructEntity, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity
// callers: CEntitySystem::AllocateForPrecache, CEntitySystem::PrecacheEntity, CEntitySystem::InvokePrecacheCallback
void __fastcall CEntitySystem::DeallocateForPrecache(CEntitySystem *const this, CEntityInstance *pEntityInstance)
{
  CEntityIdentity *m_pEntity; // rbx

  m_pEntity = pEntityInstance->m_pEntity;
  CEntitySystem::DoDestructEntity(this, pEntityInstance, 0);
  CEntityIdentity::FreeAttributes(m_pEntity, 0);
  CConcreteEntityList::FreeEntity(&this->m_EntityList, m_pEntity, 1);
}


// CEntitySystem::PrecacheEntity  (line 2041, @0x00000000030bdf00, libserver.so)  // inlines: CPreserveValueScopeGuard, GetActiveSpawnGroupHandle, Release, SetSpawnGroupHandle, ~CPreserveValueScopeGuard
// calls: CEntitySystem::AllocateForPrecache, CEntitySystem::DeallocateForPrecache, _Unwind_Resume
// callers: CEntitySystem::BuildResourceManifest, CEntitySystem::BuildResourceManifestForEntity
void __fastcall CEntitySystem::PrecacheEntity(
        CEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CEntityKeyValues *pKeyValues,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  SpawnGroupHandle_t m_ActiveSpawnGroupHandle; // r12d
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rbx
  CEntityIdentity *m_pEntity; // rax
  bool v12; // r14
  CEntityPrecacheContext context; // [rsp+10h] [rbp-50h] BYREF

  m_ActiveSpawnGroupHandle = hSpawnGroup;
  if ( hSpawnGroup == -1 )
    m_ActiveSpawnGroupHandle = this->m_ActiveSpawnGroupHandle;
  v9 = CEntitySystem::AllocateForPrecache(this, pKeyValues);
  v10 = v9;
  if ( v9 != 0 )
  {
    m_pEntity = v9->m_pEntity;
    context.m_pKeyValues = pKeyValues;
    context.m_pManifest = pResourceManifest;
    m_pEntity->m_hSpawnGroup = m_ActiveSpawnGroupHandle;
    context.m_pConfig = pConfig;
    v12 = g_bReceivedChainedPrecache;
    g_bReceivedChainedPrecache = 0;
    (*(v10->_vptr_IHandleEntity + 6))(v10, &context);
    CEntitySystem::DeallocateForPrecache(this, v10);
    g_bReceivedChainedPrecache = v12;
  }
}


// CEntitySystem::TransferEntityIntoStagingDatabase  (line 2070, @0x00000000030b31b0, libserver.so)  // inlines: AddFlags, CUtlSymbolLarge, DeallocateEntityIdentity, GetEntityName, GetEntryIndex, GetSerialNumber, Init, SetSpawnGroupHandle, Term, operator HSCRIPT, operator=
// calls: CConcreteEntityList::AllocEntity, CEntitySystem::OnAddEntityToDatabase, CEntityIdentity::SetEntityName, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity
// callers: CEntitySystem::QueueSpawnEntity
CEntityIdentity *__fastcall CEntitySystem::TransferEntityIntoStagingDatabase(
        CEntitySystem *const this,
        CEntityIdentity *pEntity)
{
  int v2; // edx
  uint32 m_flags; // esi
  bool v6; // r9
  bool v7; // si
  CConcreteEntityList *p_m_EntityList; // rdi
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // r12
  V_uuid_t *m_pId; // rdx
  CEntityIdentity *v13; // rsi
  V_uuid_t *v14; // rax
  __int64 v15; // r10
  CEntityInstance *m_pInstance; // rax
  string_t name; // [rsp+10h] [rbp-30h] BYREF

  v2 = -1;
  m_flags = pEntity->m_flags;
  v6 = (m_flags & 0x4000) != 0;
  v7 = (m_flags & 0x40) != 0;
  if ( pEntity->m_EHandle.m_Index != -1 )
  {
    v2 = pEntity->m_EHandle.m_Index & 0x7FFF;
    if ( v2 == 0x7FFF )
      v2 = -1;
  }
  p_m_EntityList = &this->m_EntityList;
  v9 = pEntity->m_EHandle.m_Index >> 15;
  if ( v9 == 0x1FFFF )
    v9 = -1;
  v10 = CConcreteEntityList::AllocEntity(p_m_EntityList, v7, v2, v9, 0, v6);
  v11 = v10;
  if ( v10 != 0 )
  {
    m_pId = pEntity->m_pId;
    v13 = v10;
    v14 = v10->m_pId;
    v15 = *m_pId->Data4;
    *&v14->Data1 = *&m_pId->Data1;
    *v14->Data4 = v15;
    v11->m_flags |= pEntity->m_flags & 0xFFFFF7BF;
    v11->m_PathIndex.m_Value = pEntity->m_PathIndex.m_Value;
    v11->m_pRenderAttrs = pEntity->m_pRenderAttrs;
    v11->m_pAttributes = pEntity->m_pAttributes;
    LODWORD(v14) = pEntity->m_fDataObjectTypes;
    pEntity->m_pRenderAttrs = 0;
    pEntity->m_pAttributes = 0;
    v11->m_fDataObjectTypes = v14;
    m_pInstance = pEntity->m_pInstance;
    v11->m_pInstance = pEntity->m_pInstance;
    m_pInstance->m_pEntity = v11;
    v11->m_pClass = pEntity->m_pClass;
    v11->m_designerName.u.m_Id = pEntity->m_designerName.u.m_Id;
    v11->m_hPublicScope.m_hScope = pEntity->m_hPublicScope.m_hScope;
    LODWORD(m_pInstance) = pEntity->m_hSpawnGroup;
    pEntity->m_hPublicScope.m_hScope = 0;
    v11->m_hSpawnGroup = m_pInstance;
    CEntitySystem::OnAddEntityToDatabase(this, v13);
    name.u.m_Id = pEntity->m_name.u.m_Id;
    CEntityIdentity::SetEntityName(v11, &name);
    CEntityIdentity::FreeAttributes(pEntity, 0);
    CConcreteEntityList::FreeEntity(&this->m_EntityList, pEntity, 1);
    return v11;
  }
  else
  {
    CEntityIdentity::FreeAttributes(pEntity, 0);
    CConcreteEntityList::FreeEntity(&this->m_EntityList, pEntity, 1);
    return 0;
  }
}


// CEntitySystem::QueueSpawnEntity  (line 2124, @0x00000000030b3330, libserver.so)  // inlines: AddRef, AddToTail, CEntityHandle, Construct<CEntitySystem::CreationInfo_t>, CreationInfo_t, Element, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, Set, Term, operator=, operator[]
// calls: CEntitySystem::TransferEntityIntoStagingDatabase, CUtlMemory<CEntitySystem::CreationInfo_t, int>::Grow
// callers: CLoadingSpawnGroup::SpawnEntities, CCommentarySystem::LoadCommentaryFile, CSource2GameClients::ClientPutInServer, UTIL_LoadAndSpawnEntitiesFromScript, CEntitySystem::QueueSpawnEntity
void __fastcall CEntitySystem::QueueSpawnEntity(
        CEntitySystem *const this,
        CEntityIdentity *pEntity,
        const CEntityKeyValues *pInitializationData)
{
  CEntityIdentity *v3; // rax
  int m_Size; // r13d
  int v7; // edx
  CEntitySystem::CreationInfo_t *v8; // rcx
  CEntitySystem::CreationInfo_t *v9; // rdx
  uint32 m_flags; // ecx
  int v11; // ecx
  __int16 v12; // si
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *pEntitya; // [rsp+8h] [rbp-28h]

  v3 = pEntity;
  if ( (pEntity->m_flags & 0x800) == 0 || (v3 = CEntitySystem::TransferEntityIntoStagingDatabase(this, pEntity)) != 0 )
  {
    m_Size = this->m_QueuedCreates.m_Size;
    v7 = m_Size;
    if ( m_Size == this->m_QueuedCreates.m_Memory.m_nAllocationCount )
    {
      pEntitya = v3;
      CUtlMemory<CEntitySystem::CreationInfo_t,int>::Grow(&this->m_QueuedCreates.m_Memory, 1);
      v7 = this->m_QueuedCreates.m_Size;
      v3 = pEntitya;
    }
    this->m_QueuedCreates.m_Size = v7 + 1;
    v8 = &this->m_QueuedCreates.m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
    {
      v8->m_hNonAnonymousEntity.m_Index = -1;
      v9 = &this->m_QueuedCreates.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v9 = 0;
    }
    v9->m_bNeedsUnserialization = 1;
    m_flags = v3->m_flags;
    if ( (m_flags & 0x1000) != 0 )
    {
      v9->m_bNeedsUnserialization = 0;
      m_flags = v3->m_flags;
    }
    if ( (m_flags & 0x4000) != 0 )
    {
      m_pInstance = v3->m_pInstance;
      v9->m_hNonAnonymousEntity.m_Index = -1;
      v9->m_pAnonymousEntity = m_pInstance;
    }
    else
    {
      v9->m_pAnonymousEntity = 0;
      v11 = (v3->m_EHandle.m_Index >> 15) - (v3->m_flags & 1);
      v12 = 0x7FFF;
      if ( v3->m_EHandle.m_Index != -1 )
        v12 = v3->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v9->m_hNonAnonymousEntity.m_Index) = v12 | v9->m_hNonAnonymousEntity.m_Index & 0x8000;
      v9->m_hNonAnonymousEntity.m_Index = (v11 << 15) | v9->m_hNonAnonymousEntity.m_Index & 0x7FFF;
    }
    v9->m_pKeyValues = pInitializationData;
    if ( pInitializationData != 0 )
    {
      ++pInitializationData->m_nRefCount;
      ++pInitializationData->m_nQueuedForSpawnCount;
    }
  }
}


// CEntitySystem::QueueSpawnEntity  (line 2169, @0x00000000030b3460, libserver.so)
// calls: CEntitySystem::QueueSpawnEntity
// callers: CDevtestHierarchy2::Spawn, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityGroupFromTable, CBreakableProp::SetEnableMotionPosition, CLoopModeGameToolHooks::OnToolSpawnEntity, CLoopModeGameToolHooks::OnToolRestartMap, DispatchSpawn, CreateWorldEntity (63 total)
void __fastcall CEntitySystem::QueueSpawnEntity(
        CEntitySystem *const this,
        CEntityInstance *pEntity,
        const CEntityKeyValues *pInitializationData)
{
  CEntitySystem::QueueSpawnEntity(this, pEntity->m_pEntity, pInitializationData);
}


// CEntitySystem::QueuePostDataUpdates  (line 2176, @0x00000000030b5650, libserver.so)  // inlines: AddMultipleToTail, GrowMemory, GrowVector, InsertMultipleBefore, V_memcpy, memcpy, operator[]
// calls: memcpy, AssertMsg_ConditionFailed, CUtlMemory<PostDataUpdateInfo_t, int>::Grow
// callers: CLoopModeGame::OnPostDataUpdate
// strings: "Cannot call QueuePostDataUpdate on an entity system that you did not initialize to suppor
// globals: CEntitySystem::QueuePostDataUpdates(int,PostDataUpdateInfo_t *)::_assertionConstants
void __fastcall CEntitySystem::QueuePostDataUpdates(CEntitySystem *const this, int nCount, PostDataUpdateInfo_t *pInfo)
{
  __int64 m_Size; // r15
  int m_nAllocationCount; // eax
  int v8; // r14d
  __int64 v9; // r15
  PostDataUpdateInfo_t *v10; // rdx
  int v11; // eax
  CEntityIdentity *m_pEntity; // rcx

  if ( !this->m_bInvokePostDataUpdates
    && AssertMsg_ConditionFailed(
         &CEntitySystem::QueuePostDataUpdates(int,PostDataUpdateInfo_t *)::_assertionConstants,
         "Cannot call QueuePostDataUpdate on an entity system that you did not initialize to support post data updates!\n") != 0 )
  {
    __debugbreak();
  }
  if ( nCount != 0 )
  {
    m_Size = this->m_QueuedPostDataUpdates.m_Size;
    m_nAllocationCount = this->m_QueuedPostDataUpdates.m_Memory.m_nAllocationCount;
    v8 = nCount + m_Size;
    if ( nCount + m_Size > m_nAllocationCount )
      CUtlMemory<PostDataUpdateInfo_t,int>::Grow(&this->m_QueuedPostDataUpdates.m_Memory, v8 - m_nAllocationCount);
    v9 = m_Size;
    this->m_QueuedPostDataUpdates.m_Size = v8;
    if ( nCount <= 0 )
    {
      memcpy(&this->m_QueuedPostDataUpdates.m_Memory.m_pMemory[v9], pInfo, 16LL * nCount);
    }
    else
    {
      memcpy(&this->m_QueuedPostDataUpdates.m_Memory.m_pMemory[v9], pInfo, 16LL * nCount);
      v10 = pInfo;
      v11 = 0;
      do
      {
        m_pEntity = v10->m_pEntity;
        ++v11;
        ++v10;
        m_pEntity->m_flags |= 8u;
      }
      while ( nCount > v11 );
    }
  }
}


// CEntitySystem::QueueDestroyEntity  (line 2204, @0x00000000030b6300, libserver.so)  // inlines: AddToTail, DeallocateEntityIdentity, GrowMemory
// calls: CEntitySystem::ExecuteQueuedDeletion, CEntitySystem::DestroyEntityImmediate, CUtlMemory<EntityDeletion_t, int>::Grow, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown, CLoopModeGameToolHooks::OnToolDestroyAllEntities, CLoopModeGameToolHooks::OnToolDestroyEntity, CLoadingSpawnGroup::Release, CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CEntitySystem::DestroyEntityImmediate, CEntitySystem::QueueDestroyEntity, CEntitySystem::QueueDestroyAllEntities
void __fastcall CEntitySystem::QueueDestroyEntity(CEntitySystem *const this, CEntityIdentity *pEntity)
{
  uint32 m_flags; // eax
  __int64 m_Size; // r13
  int v6; // eax

  if ( pEntity != 0 )
  {
    if ( pEntity->m_pInstance != 0 )
    {
      m_flags = pEntity->m_flags;
      if ( (m_flags & 0x800) != 0 )
      {
        CEntitySystem::DestroyEntityImmediate(this, pEntity);
      }
      else if ( (m_flags & 0x200) == 0 )
      {
        BYTE1(m_flags) |= 2u;
        pEntity->m_flags = m_flags;
        m_Size = this->m_QueuedDestroys.m_Size;
        v6 = this->m_QueuedDestroys.m_Size;
        if ( m_Size == this->m_QueuedDestroys.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<EntityDeletion_t,int>::Grow(&this->m_QueuedDestroys.m_Memory, 1);
          v6 = this->m_QueuedDestroys.m_Size;
        }
        this->m_QueuedDestroys.m_Size = v6 + 1;
        this->m_QueuedDestroys.m_Memory.m_pMemory[m_Size].m_pEntity = pEntity;
        if ( this->m_nAutoDeletionSuppressCount == 0 && this->m_bAutoExecuteQueuedDeletion )
          CEntitySystem::ExecuteQueuedDeletion(this, 0);
      }
    }
    else
    {
      CEntityIdentity::FreeAttributes(pEntity, 0);
      CConcreteEntityList::FreeEntity(&this->m_EntityList, pEntity, 1);
    }
  }
}


// CEntitySystem::QueueDestroyEntity  (line 2248, @0x00000000030b6400, libserver.so)
// calls: CEntitySystem::QueueDestroyEntity
// callers: EntityPostSpawnDelegate, UTIL_Remove, CEntitySaveRestoreBlockHandler::Restore, CEntitySaveRestoreBlockHandler::RestoreGlobalEntity, CLogicRelay::InputTrigger, CLogicRelay::Think, CreateEntityTransitionList, CEntityInstance::RemoveSelf
void __fastcall CEntitySystem::QueueDestroyEntity(CEntitySystem *const this, CEntityInstance *pEntity)
{
  if ( pEntity != 0 )
    CEntitySystem::QueueDestroyEntity(this, pEntity->m_pEntity);
}


// CEntitySystem::QueueDestroyAllEntities  (line 2257, @0x00000000030b6420, libserver.so)  // inlines: GetEHandle, GetEntryIndex, IsNetworkable, SuppressAutoDeletionExecution
// calls: CEntitySystem::SuppressAutoDeletionExecution, CEntitySystem::QueueDestroyEntity
// callers: CEntitySystem::ClearEntityDatabase
void __fastcall CEntitySystem::QueueDestroyAllEntities(
        CEntitySystem *const this,
        CEntitySystem::EQueueDestroyFlags_t eQDEFlags)
{
  __int32 v2; // r15d
  char v3; // r14
  __int32 v4; // r13d
  CEntityIdentity *m_pHead; // rbx
  CEntityIdentity *m_pFirstActiveEntity; // rbx
  char v8; // r13
  int v9; // r14d
  int v10; // r13d
  __int16 m_Index; // [rsp+0h] [rbp-40h]
  __int16 v12; // [rsp+0h] [rbp-40h]

  v2 = eQDEFlags & 2;
  v3 = eQDEFlags;
  v4 = eQDEFlags & 1;
  m_pHead = this->m_EntityList.m_dormantList.m_pHead;
  ++this->m_nAutoDeletionSuppressCount;
  while ( m_pHead != 0 )
  {
    while ( 1 )
    {
      if ( m_pHead->m_EHandle.m_Index == -1 )
        goto LABEL_5;
      m_Index = m_pHead->m_EHandle.m_Index;
      if ( v2 != 0 )
        break;
      if ( v4 == 0 || (m_Index & 0x7FFFu) <= 0x3FFF )
        goto LABEL_6;
LABEL_20:
      CEntitySystem::QueueDestroyEntity(this, m_pHead);
      m_pHead = m_pHead->m_pNext;
      if ( m_pHead == 0 )
        goto LABEL_7;
    }
    if ( (m_Index & 0x7FFFu) <= 0x3FFF )
      goto LABEL_20;
LABEL_5:
    if ( v4 != 0 )
      goto LABEL_20;
LABEL_6:
    m_pHead = m_pHead->m_pNext;
  }
LABEL_7:
  m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
  v8 = v3;
  v9 = v3 & 1;
  v10 = v8 & 2;
  while ( m_pFirstActiveEntity != 0 )
  {
    while ( 1 )
    {
      if ( m_pFirstActiveEntity->m_EHandle.m_Index == -1 )
        goto LABEL_11;
      v12 = m_pFirstActiveEntity->m_EHandle.m_Index;
      if ( v10 != 0 )
        break;
      if ( v9 == 0 || (v12 & 0x7FFFu) <= 0x3FFF )
        goto LABEL_12;
LABEL_16:
      CEntitySystem::QueueDestroyEntity(this, m_pFirstActiveEntity);
      m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
      if ( m_pFirstActiveEntity == 0 )
        goto LABEL_13;
    }
    if ( (v12 & 0x7FFFu) <= 0x3FFF )
      goto LABEL_16;
LABEL_11:
    if ( v9 != 0 )
      goto LABEL_16;
LABEL_12:
    m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
  }
LABEL_13:
  CEntitySystem::SuppressAutoDeletionExecution(this, 0);
}


// CEntitySystem::HasEntitiesOfType  (line 2289, @0x00000000030ac4f0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, IsNetworkable
// callers: CEntitySystem::ClearEntityDatabase
bool __fastcall CEntitySystem::HasEntitiesOfType(
        const CEntitySystem *const this,
        CEntitySystem::EQueueDestroyFlags_t eType)
{
  CEntityIdentity *m_pHead; // rdx
  bool result; // al
  CEntityIdentity *m_pFirstActiveEntity; // rdx
  char v5; // cl
  __int32 v6; // esi
  int v7; // ecx
  __int16 v8; // [rsp+0h] [rbp-10h]
  __int16 m_Index; // [rsp+0h] [rbp-10h]

  m_pHead = this->m_EntityList.m_dormantList.m_pHead;
  if ( m_pHead == 0 )
  {
LABEL_11:
    m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
    if ( m_pFirstActiveEntity == 0 )
      return 0;
    v5 = eType;
    v6 = eType & 2;
    v7 = v5 & 1;
    while ( 1 )
    {
      if ( m_pFirstActiveEntity->m_EHandle.m_Index == -1 )
        goto LABEL_16;
      m_Index = m_pFirstActiveEntity->m_EHandle.m_Index;
      result = (m_Index & 0x7FFFu) <= 0x3FFF;
      if ( v6 != 0 )
        break;
      if ( v7 != 0 && (m_Index & 0x7FFFu) > 0x3FFF )
        return 1;
LABEL_20:
      m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
      if ( m_pFirstActiveEntity == 0 )
        return 0;
    }
    if ( (m_Index & 0x7FFFu) <= 0x3FFF )
      return result;
LABEL_16:
    if ( v7 != 0 )
      return 1;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( m_pHead->m_EHandle.m_Index == -1 )
      goto LABEL_5;
    v8 = m_pHead->m_EHandle.m_Index;
    result = (v8 & 0x7FFFu) <= 0x3FFF;
    if ( (eType & 2) != 0 )
    {
      if ( (v8 & 0x7FFFu) <= 0x3FFF )
        return result;
LABEL_5:
      if ( (eType & 1) != 0 )
        return 1;
      goto LABEL_10;
    }
    if ( (eType & 1) != 0 && (v8 & 0x7FFFu) > 0x3FFF )
      return 1;
LABEL_10:
    m_pHead = m_pHead->m_pNext;
    if ( m_pHead == 0 )
      goto LABEL_11;
  }
}


// CEntitySystem::ClearEntityDatabase  (line 2316, @0x00000000030b6b50, libserver.so)  // inlines: ClearAll, memset
// calls: CEntitySystem::ExecuteQueuedOperations, CEntitySystem::QueueDestroyAllEntities, CEntitySystem::HasEntitiesOfType, CEntitySystem::ClearEntityIOEvents, CEntitySystem::FreeAllPooledStrings, CEntitySystem::ExecuteQueuedDeallocation, memset
// callers: CGameEntitySystem::ClearEntityDatabase
void __fastcall CEntitySystem::ClearEntityDatabase(CEntitySystem *const this, ClearEntityDatabaseMode_t eMode)
{
  CEntitySystem::EQueueDestroyFlags_t v4; // r12d

  CEntitySystem::ExecuteQueuedOperations(this, 0);
  v4 = (eMode != ClearEntityDatabaseMode_t::CED_NETWORKEDONLY_AND_DONTCLEARSTRINGPOOL) + 2;
  do
  {
    do
    {
      CEntitySystem::QueueDestroyAllEntities(this, v4);
      CEntitySystem::ExecuteQueuedOperations(this, 1);
    }
    while ( this->m_QueuedCreates.m_Size > 0 );
  }
  while ( CEntitySystem::HasEntitiesOfType(this, v4) );
  CEntitySystem::ClearEntityIOEvents(this);
  if ( eMode == ClearEntityDatabaseMode_t::CED_NORMAL )
    CEntitySystem::FreeAllPooledStrings(this);
  CEntitySystem::ExecuteQueuedDeallocation(this);
  memset(&this->m_EntityList.m_PVSBits, 0, sizeof(this->m_EntityList.m_PVSBits));
}


// CEntitySystem::FindEntityById  (line 2359, @0x00000000030ac5c0, libserver.so)  // inlines: GetInstance, Plat_CompareUUIDs, operator==
// calls: memcmp
const CEntityInstance *__fastcall CEntitySystem::FindEntityById(CEntitySystem *const this, const V_uuid_t *const id)
{
  CEntityIdentity *m_pFirstActiveEntity; // rbx

  m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pFirstActiveEntity == 0 )
    return 0;
  while ( memcmp(m_pFirstActiveEntity->m_pId, id, 0x10u) != 0 )
  {
    m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
    if ( m_pFirstActiveEntity == 0 )
      return 0;
  }
  return m_pFirstActiveEntity->m_pInstance;
}


// CEntitySystem::InitGlobalContainedFlags  (line 2376, @0x00000000030bb070, libserver.so)
// calls: CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount
// callers: CEntitySystem::Init
void __fastcall CEntitySystem::InitGlobalContainedFlags(CEntitySystem *const this, CEntityClass *pClass)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  int m_NumElements; // r13d
  CUtlVectorBase<bool,CUtlMemory<bool,int> > *v7; // rax
  __int64 v8; // rax
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rdx

  v4 = 0;
  v5 = 0;
  m_NumElements = this->m_ComponentTypesByName.m_Tree.m_NumElements;
  v7 = (*(pClass->_vptr_CEntityClass + 10))(pClass);
  CUtlVectorBase<bool,CUtlMemory<bool,int>>::SetCount(v7, m_NumElements);
  if ( m_NumElements != 0 )
  {
    do
    {
      v8 = *((*(pClass->_vptr_CEntityClass + 10))(pClass) + 8);
      elem = this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[v4++].m_Data.elem;
      *(v8 + v5) = elem->m_pInfo->m_nFlags & 1;
      *(v8 + v5++) &= 1u;
    }
    while ( m_NumElements > v5 );
  }
}


// CEntitySystem::BuildEntityClassTables  (line 2440, @0x00000000030bb100, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CopyArray, CopyConstruct<const CSchemaClassInfo*>, Element, EnsureCapacity, GetSingleInheritanceBaseClass, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, SortHelpersByPriority<CEntityClass::ComponentHelper_t>, memcpy, memset, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: memset, CEntitySystem::BuildTablesRecursive, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::SetCount, CUtlMemory<const CSchemaClassInfo*, int>::ConvertToExternalMemory, CUtlMemory<const CSchemaClassInfo*, int>::Purge, CUtlMemory<const CSchemaClassInfo*, int>::Grow, memcpy, _Unwind_Resume, __stack_chk_fail
// callers: CEntitySystem::Init
void __fastcall CEntitySystem::BuildEntityClassTables(CEntitySystem *const this, CEntityClass *pClass)
{
  __int64 m_Size; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  size_t m_NumElements; // rdx
  __int64 v8; // rbx
  void *v9; // rsp
  const CSchemaClassInfo *v10; // rbx
  unsigned __int64 v11; // rdx
  const CSchemaClassInfo **v12; // rax
  void *v13; // rsp
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  int v16; // r12d
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  __m128i *v19; // rcx
  unsigned __int64 v20; // rsi
  int v21; // r9d
  __m128i *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdi
  uint32 m_nGrowSize; // eax
  CEntityClass::ComponentHelper_t *v26; // rsi
  __int64 (__fastcall **v27)(_QWORD *, __int64, unsigned __int64); // rax
  CEntityClass::ComponentHelper_t *v28; // rax
  __int64 v29; // rcx
  CEntityComponentHelper *v30; // rdx
  CEntityClass::ComponentHelper_t *v31; // rsi
  uint32 m_nAllHelpersFlags; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  CEntityClass::ComponentHelper_t *m_pMemory; // r13
  CEntityClass::ComponentHelper_t *v36; // rax
  _BYTE v38[12]; // [rsp+20h] [rbp-460h] BYREF
  int nHelperCount; // [rsp+2Ch] [rbp-454h] BYREF
  CUtlVectorFixedGrowable<const CSchemaClassInfo*,128ul> inheritanceChain; // [rsp+30h] [rbp-450h] BYREF
  unsigned __int64 v41; // [rsp+448h] [rbp-38h]

  m_Size = 0;
  v41 = __readfsqword(0x28u);
  v5 = (*(pClass->_vptr_CEntityClass + 7))(pClass);
  v6 = (*(*v5 + 8LL))(v5);
  m_NumElements = this->m_ComponentTypesByName.m_Tree.m_NumElements;
  v8 = v6;
  v9 = alloca((((m_NumElements + 31) & 0x1FFF0) + 30) & 0x3FFF0);
  memset((v38 & 0xFFFFFFFFFFFFFFEFLL), 0, m_NumElements);
  v10 = *(v8 + 40);
  v11 = 0;
  inheritanceChain.m_Size = 0;
  inheritanceChain.m_Memory.m_nAllocationCount = 128;
  inheritanceChain.m_Memory.m_pMemory = &inheritanceChain.m_Memory.m_FixedMemory;
  inheritanceChain.m_Memory.m_nGrowSize = 0x80000000;
  if ( v10 != 0 )
  {
    while ( 1 )
    {
      v11 = (v11 + 1);
      inheritanceChain.m_Size = v11;
      v12 = &inheritanceChain.m_Memory.m_pMemory[m_Size];
      if ( v12 != 0 )
      {
        *v12 = v10;
        m_Size = inheritanceChain.m_Size;
      }
      else
      {
        m_Size = v11;
      }
      if ( v10->m_BaseClasses.m_Data.m_nImplLength == 0 )
        break;
      v10 = *(v10->m_BaseClasses.m_Data.m_pImplElements + 1);
      if ( v10 == 0 )
        break;
      if ( m_Size == inheritanceChain.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CSchemaClassInfo const*,int>::Grow(&inheritanceChain.m_Memory, 1);
        LODWORD(v11) = inheritanceChain.m_Size;
      }
      else
      {
        LODWORD(v11) = m_Size;
      }
    }
  }
  nHelperCount = 0;
  v13 = alloca((16 * this->m_ComponentTypesByName.m_Tree.m_NumElements + 46) & 0x1FFFF0);
  v14 = 8LL * m_Size - 8;
  v15 = v38 & 0xFFFFFFFFFFFFFFEFLL;
  while ( 1 )
  {
    LODWORD(m_Size) = m_Size - 1;
    if ( m_Size < 0 )
      break;
    CEntitySystem::BuildTablesRecursive(
      this,
      pClass,
      (v38 & 0xFFFFFFFFFFFFFFEFLL),
      *(inheritanceChain.m_Memory.m_pMemory + v14),
      0,
      &nHelperCount,
      (v38 & 0xFFFFFFFFFFFFFFEFLL));
    v14 -= 8;
  }
  v16 = nHelperCount;
  if ( nHelperCount > 1 )
  {
    v17 = v38 & 0xFFFFFFFFFFFFFFEFLL;
    v18 = 0;
    do
    {
      v19 = (v17 - 16);
      v11 = v18;
      v20 = v18 - 1;
      v21 = *(*(v17 + 24) + 24LL);
      v22 = v17;
      if ( v21 > *(*(v17 + 8) + 24LL) )
      {
        while ( 1 )
        {
          v11 = v15 + 16 * (v11 + 1);
          v23 = *v11;
          v24 = *(v11 + 8);
          *v11 = _mm_load_si128(v22);
          v22->m128i_i64[0] = v23;
          v22->m128i_i64[1] = v24;
          if ( v20 == -1 )
            break;
          v11 = v19->m128i_u64[1];
          v22 = v19--;
          if ( v21 <= *(v11 + 24) )
            break;
          v11 = v20--;
        }
      }
      ++v18;
      v17 += 16LL;
    }
    while ( v18 != (v16 - 2) + 1LL );
  }
  if ( v16 > pClass->m_AllHelpers.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = pClass->m_AllHelpers.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = pClass->m_AllHelpers.m_Memory.m_pMemory;
        v36 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v16, v11);
        pClass->m_AllHelpers.m_Memory.m_pMemory = v36;
        if ( m_pMemory != 0 )
          memcpy(v36, m_pMemory, 16LL * pClass->m_AllHelpers.m_Memory.m_nAllocationCount);
        pClass->m_AllHelpers.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v26 = pClass->m_AllHelpers.m_Memory.m_pMemory;
        v27 = *g_pMemAlloc;
        if ( v26 != 0 )
          v28 = v27[1](g_pMemAlloc, v26, 16LL * v16);
        else
          v28 = (*v27)(g_pMemAlloc, 16LL * v16, v11);
        pClass->m_AllHelpers.m_Memory.m_pMemory = v28;
      }
      pClass->m_AllHelpers.m_Memory.m_nAllocationCount = v16;
      v16 = nHelperCount;
    }
  }
  CUtlVectorBase<CEntityClass::ComponentHelper_t,CUtlMemory<CEntityClass::ComponentHelper_t,int>>::SetCount(
    &pClass->m_AllHelpers,
    v16);
  if ( v16 > 0 )
  {
    v29 = 0;
    do
    {
      v30 = *(v29 * 16 + v15 + 8);
      v31 = pClass->m_AllHelpers.m_Memory.m_pMemory;
      v31[v29].m_offset = *(v29 * 16 + v15);
      v31[v29++].m_pHelper = v30;
    }
    while ( v29 != (v16 - 1) + 1LL );
  }
  if ( nHelperCount > 0 )
  {
    m_nAllHelpersFlags = pClass->m_nAllHelpersFlags;
    v33 = v15 + 16LL * (nHelperCount - 1) + 16;
    do
    {
      v34 = *(v15 + 8);
      v15 += 16LL;
      m_nAllHelpersFlags |= *(v34 + 8);
      pClass->m_nAllHelpersFlags = m_nAllHelpersFlags;
    }
    while ( v15 != v33 );
  }
  inheritanceChain.m_Size = 0;
  CUtlMemory<CSchemaClassInfo const*,int>::ConvertToExternalMemory(
    &inheritanceChain.m_Memory,
    &inheritanceChain.m_Memory.m_FixedMemory,
    128,
    0,
    1,
    0x3FFFFFFFu);
  if ( (inheritanceChain.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CSchemaClassInfo const*,int>::Purge(&inheritanceChain.m_Memory);
}


// CEntitySystem::BuildComponentRecursive  (line 2481, @0x00000000030ac620, libserver.so)  // inlines: Element, GetNameAsCStr, LeafCodeInfo_t, String, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CEntitySystem::BuildTablesRecursive
// strings: "entitysystem.cpp", "BuildComponentRecursive", "The entity instance is too large for type %s! Make more components referenced!\n", "Multiple components in same entity instance not supported (%s in class %s)\n", "Base component class %s needs to have the same contained / referenced rules as its derive
bool __fastcall CEntitySystem::BuildComponentRecursive(
        CEntitySystem *const this,
        CEntityClass *pClass,
        bool *pVisits,
        const char *pszTypename,
        size_t curOffset,
        int *const nUsedHelperCount,
        CEntityClass::ComponentHelper_t *pHelpersUsed,
        bool *pForceContained,
        int iComponent)
{
  CEntityComponentHelper *v14; // r10
  bool *v15; // r11
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // r9
  EntComponentInfo_t *m_pInfo; // rax
  bool v18; // dl
  char v19; // al
  CEntityComponentHelper *v20; // r9
  CEntityComponentHelper *m_pBaseClassComponentHelper; // rax
  char v23; // al
  char IsChannelEnabled; // al
  const char *m_pAsString; // r9
  bool *v26; // [rsp+18h] [rbp-78h]
  CEntityComponentHelper *pHelper; // [rsp+28h] [rbp-68h]
  CEntityComponentHelper *pHelpera; // [rsp+28h] [rbp-68h]
  bool bIsContained; // [rsp+3Fh] [rbp-51h] BYREF
  const char *ignored; // [rsp+40h] [rbp-50h] BYREF
  int v32; // [rsp+48h] [rbp-48h]
  const char *v33; // [rsp+50h] [rbp-40h]

  v14 = iComponent;
  v15 = &pVisits[iComponent];
  if ( *v15 )
  {
    v26 = &pVisits[iComponent];
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
    v14 = iComponent;
    v15 = v26;
    if ( IsChannelEnabled != 0 )
    {
      m_pAsString = "";
      if ( pClass->m_designerName.u.m_Id != 0 )
        m_pAsString = pClass->m_designerName.u.m_pAsString;
      ignored = "entitysystem.cpp";
      v33 = "BuildComponentRecursive";
      v32 = 2487;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &ignored,
        "Multiple components in same entity instance not supported (%s in class %s)\n",
        pszTypename,
        m_pAsString);
      v15 = v26;
      v14 = iComponent;
    }
  }
  *v15 = 1;
  if ( curOffset > 0xFFFE )
  {
    pHelpera = v14;
    v23 = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
    v14 = pHelpera;
    if ( v23 != 0 )
    {
      ignored = "entitysystem.cpp";
      v33 = "BuildComponentRecursive";
      v32 = 2494;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &ignored,
        "The entity instance is too large for type %s! Make more components referenced!\n",
        pszTypename);
      v14 = pHelpera;
    }
  }
  pClass->m_ComponentOffsets.m_Memory.m_pMemory[v14].m_nBaseOffset = curOffset;
  elem = this->m_ComponentTypesByName.m_Tree.m_Elements.m_pMemory[iComponent].m_Data.elem;
  if ( pHelpersUsed != 0 )
  {
    pHelpersUsed[*nUsedHelperCount].m_offset = curOffset;
    pHelpersUsed[(*nUsedHelperCount)++].m_pHelper = elem;
  }
  m_pInfo = elem->m_pInfo;
  pHelper = elem;
  v18 = m_pInfo->m_nFlags & 1;
  bIsContained = v18;
  if ( pForceContained != 0 && v18 != *pForceContained )
  {
    v19 = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
    v20 = pHelper;
    if ( v19 != 0 )
    {
      ignored = "entitysystem.cpp";
      v33 = "BuildComponentRecursive";
      v32 = 2511;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &ignored,
        "Base component class %s needs to have the same contained / referenced rules as its derived classes!\n",
        pszTypename);
      v20 = pHelper;
    }
    m_pInfo = v20->m_pInfo;
  }
  m_pBaseClassComponentHelper = m_pInfo->m_pBaseClassComponentHelper;
  if ( m_pBaseClassComponentHelper != 0 )
    CEntitySystem::BuildComponentRecursive(
      this,
      pClass,
      pVisits,
      m_pBaseClassComponentHelper->m_pInfo->m_pCPPClassname,
      curOffset,
      &ignored,
      0,
      &bIsContained,
      m_pBaseClassComponentHelper->m_pInfo->m_nRuntimeIndex);
  return 1;
}


// CEntitySystem::BuildTablesRecursive  (line 2526, @0x00000000030af1a0, libserver.so)  // inlines: AdvanceClassnameBeyondC, Find, GetBaseClass, GetName, MatchInnerAs<CSchemaType_DeclaredClass>, ~CSchemaFieldIterator, ~CSchemaInheritanceIterator, ~CUtlVectorFixedGrowable
// calls: CSchemaFieldIterator::CSchemaFieldIterator, CSchemaFieldIterator::IsValid, CSchemaFieldIterator::GetType, CUtlString::Get, CUtlRBTree<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int, CUtlMap<char const*, CEntityComponentHelper*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned int> >::Find, strcmp, CSchemaFieldIterator::GetFieldMemoryOffset, CEntitySystem::BuildComponentRecursive, CSchemaFieldIterator::Advance, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CEntitySystem::BuildEntityClassTables
void __fastcall CEntitySystem::BuildTablesRecursive(
        CEntitySystem *const this,
        CEntityClass *pClass,
        bool *pVisits,
        ClassIntrospectionHandle_t pCurClassInfo,
        size_t curOffset,
        int *const nUsedHelperCount,
        CEntityClass::ComponentHelper_t *pHelpersUsed)
{
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)> *p_m_ComponentTypesByName; // r14
  CSchemaType *Type; // rax
  const CUtlString *v9; // rax
  const CUtlString *v10; // rbx
  const char *v11; // rax
  int v12; // r13d
  const char *pszOverrideComponent; // rbx
  char v14; // al
  EntClassComponentOverride_t *m_pComponentOverrides; // r12
  const char *pszBaseComponent; // rsi
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  uint32 FieldMemoryOffset; // eax
  CEntityClass *pCurClass; // [rsp+58h] [rbp-128h]
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t v25; // [rsp+60h] [rbp-120h] BYREF
  CUtlMap<char const*,CEntityComponentHelper*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t v26; // [rsp+70h] [rbp-110h] BYREF
  CSchemaFieldIterator it; // [rsp+80h] [rbp-100h] BYREF
  unsigned __int64 v28; // [rsp+148h] [rbp-38h]

  p_m_ComponentTypesByName = &this->m_ComponentTypesByName;
  v28 = __readfsqword(0x28u);
  CSchemaFieldIterator::CSchemaFieldIterator(&it, pCurClassInfo, SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE);
  while ( CSchemaFieldIterator::IsValid(&it) )
  {
    Type = CSchemaFieldIterator::GetType(&it);
    v9 = (*(*Type + 120LL))(Type, 5, 4);
    if ( v9 != 0 )
    {
      v10 = v9 + 1;
      v11 = CUtlString::Get(v9 + 1);
      v25.key = &v11[*v11 == 67];
      v12 = CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
              &p_m_ComponentTypesByName->m_Tree,
              &v25);
      if ( v12 != 0xFFFF )
      {
        pszOverrideComponent = CUtlString::Get(v10);
        pCurClass = pClass;
        v14 = 0;
LABEL_6:
        if ( v14 == 0 )
        {
          while ( pCurClass != 0 )
          {
            m_pComponentOverrides = pCurClass->m_pComponentOverrides;
            if ( m_pComponentOverrides != 0
              && (pszBaseComponent = m_pComponentOverrides->pszBaseComponent,
                  m_pComponentOverrides->pszBaseComponent != 0) )
            {
              while ( strcmp(pszOverrideComponent, pszBaseComponent) != 0 )
              {
                ++m_pComponentOverrides;
                pszBaseComponent = m_pComponentOverrides->pszBaseComponent;
                if ( m_pComponentOverrides->pszBaseComponent == 0 )
                  goto LABEL_12;
              }
              v26.key = &m_pComponentOverrides->pszOverrideComponent[*m_pComponentOverrides->pszOverrideComponent == 67];
              v12 = CUtlRBTree<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityComponentHelper *,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                      &p_m_ComponentTypesByName->m_Tree,
                      &v26);
              v14 = 1;
              pszOverrideComponent = m_pComponentOverrides->pszOverrideComponent;
              m_pBaseClassInfo = pCurClass->m_pBaseClassInfo;
              if ( m_pBaseClassInfo != 0 )
              {
LABEL_17:
                pCurClass = m_pBaseClassInfo->m_pClass;
                goto LABEL_6;
              }
            }
            else
            {
LABEL_12:
              v14 = 0;
              m_pBaseClassInfo = pCurClass->m_pBaseClassInfo;
              if ( m_pBaseClassInfo != 0 )
                goto LABEL_17;
            }
            pCurClass = 0;
            if ( v14 != 0 )
              break;
          }
        }
        FieldMemoryOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&it);
        CEntitySystem::BuildComponentRecursive(
          this,
          pClass,
          pVisits,
          pszOverrideComponent,
          FieldMemoryOffset + curOffset,
          nUsedHelperCount,
          pHelpersUsed,
          0,
          v12);
      }
    }
    CSchemaFieldIterator::Advance(&it);
  }
  CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t,CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t,8ul,int>>::~CUtlVectorBase(&it.m_InheritanceIterator.m_ClassesToTraverse);
}


// CEntitySystem::AddEntityIOEvent  (line 2596, @0x00000000030b4050, libserver.so)  // inlines: AddString, Alloc, AllocPooledString, Allocate, Allocate<QAngle>, Allocate<Vector2D>, AssignTo<CVariantDefaultAllocator>, CEntityHandle, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CVariantBase, Compare, CopyConstruct<CUtlSymbolTableLargeBaseTreeEntry_t*>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, EntityIOQueuePrioritizedEvent_t, Find, FindPoolWithSpace, Free, GetEHandle, GetEntryIndex, GetSerialNumber, HashStringFastCaseless, Init, Insert, InsertUncommitted, LockForRead, Set, ToSymbol, UnlockRead, V_memcpy, V_strlen, curtime, memcpy, operator=
// calls: operator new, strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>, CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>, CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void) (16 total)
// callers: CServerEventQueue::AddEvent, CEntitySystem::Restore
// globals: gpGlobalsBase, jpt_30B423D
void __fastcall CEntitySystem::AddEntityIOEvent(
        CEntitySystem *const this,
        EntityIOTargetType_t targetType,
        const char *pTarget,
        const char *pInputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        float flDelay,
        const CVariant *const value,
        int nOutputID)
{
  __int64 m_pfnWarningFunc; // rdx
  EntityIOQueuePrioritizedEvent_t *v14; // r13
  float m_flCurrentTime; // xmm0_4
  CGlobalVarsBase *v16; // rax
  char *m_String; // r15
  char *v18; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // cx
  CEntityIdentity *v21; // rax
  __int16 v22; // cx
  int16 m_type; // cx
  int v24; // eax
  int v25; // r15d
  signed int v26; // edx
  int v27; // r10d
  _DWORD **v28; // rsi
  _DWORD *v29; // r9
  int v30; // edi
  _DWORD **v31; // rsi
  int v32; // eax
  unsigned int v33; // r12d
  __int64 v34; // rsi
  int v35; // eax
  _DWORD *v36; // rax
  const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v37; // r12
  int64 m_nReaders; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  _QWORD *p_m_uiKey; // r15
  int v42; // eax
  int v43; // r9d
  signed int v44; // edx
  int v45; // r11d
  _DWORD **v46; // rsi
  _DWORD *v47; // r10
  int v48; // edi
  _DWORD **v49; // rsi
  int v50; // eax
  unsigned int v51; // r15d
  __int64 v52; // rsi
  int v53; // eax
  _DWORD *v54; // rax
  const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v55; // r15
  __int64 v56; // rax
  __int64 v57; // r12
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirst; // r12
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v59; // r15
  _DWORD *m_uint64; // rbx
  _DWORD *v61; // rax
  const Quaternion *v62; // r12
  _DWORD *v63; // rbx
  _QWORD *v64; // rdi
  _DWORD *v65; // rax
  const Vector4D *v66; // r12
  const char *v67; // rbx
  unsigned int v68; // r12d
  void *v69; // rax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v70; // rdx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v71; // r12
  const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *v72; // rbx
  _QWORD *v73; // rbx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v74; // rcx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v75; // rcx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v76; // rax
  const char *pInputNamea; // [rsp+0h] [rbp-80h]
  const char *pInputNameb; // [rsp+0h] [rbp-80h]
  CThreadSpinRWLock *v79; // [rsp+8h] [rbp-78h]
  int v80; // [rsp+8h] [rbp-78h]
  CThreadSpinRWLock *v81; // [rsp+8h] [rbp-78h]
  CThreadSpinRWLock *v82; // [rsp+8h] [rbp-78h]
  CThreadSpinRWLock *v83; // [rsp+8h] [rbp-78h]
  CThreadSpinRWLock *v84; // [rsp+10h] [rbp-70h]
  CInterlockedInt *p_m_nWriters; // [rsp+10h] [rbp-70h]
  int v86; // [rsp+10h] [rbp-70h]
  char *v87; // [rsp+10h] [rbp-70h]
  void *v88; // [rsp+10h] [rbp-70h]
  CGlobalVarsBase *v89; // [rsp+10h] [rbp-70h]
  string_t_table *flDelayb; // [rsp+18h] [rbp-68h]
  string_t_table *flDelayc; // [rsp+18h] [rbp-68h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *flDelayd; // [rsp+18h] [rbp-68h]
  char *v96[2]; // [rsp+30h] [rbp-50h] BYREF
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *src[8]; // [rsp+40h] [rbp-40h] BYREF

  v14 = operator new(0x48u);
  v14->m_pTarget.u.m_Id = 0;
  m_flCurrentTime = 0.0;
  v14->m_pTargetInput.u.m_Id = 0;
  v14->m_hActivator.m_Index = -1;
  v14->m_hCaller.m_Index = -1;
  v14->m_hEntTarget.m_Index = -1;
  v14->m_variantValue.m_type = 0;
  v14->m_variantValue.m_flags = 0;
  v14->m_variantValue.m_uint64 = 0;
  v16 = gpGlobalsBase;
  if ( gpGlobalsBase != 0 )
  {
    if ( !gpGlobalsBase->m_bEnableAssertions && !gpGlobalsBase->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobalsBase->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v89 = gpGlobalsBase;
        (m_pfnWarningFunc)(1, 0.0);
        v16 = v89;
      }
    }
    m_flCurrentTime = v16->m_flCurrentTime;
  }
  v14->m_targetType = targetType;
  m_String = 0;
  v14->m_flFireTime = m_flCurrentTime + flDelay;
  if ( pTarget == 0 )
    goto LABEL_6;
  if ( *pTarget == 0 )
    goto LABEL_6;
  v42 = strlen(pTarget);
  if ( v42 <= 0 )
    goto LABEL_6;
  v86 = v42;
  flDelayc = &this->m_pooledStrings;
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(v96, &this->m_pooledStrings, pTarget, v42);
  m_String = v96[0];
  v43 = v86;
  if ( v96[0] != 0 )
    goto LABEL_6;
  v44 = (v86 + 16) & 0xFFFFFFF8;
  v45 = *(&dword_19F00 + this);
  if ( v45 <= 0 )
    goto LABEL_47;
  v46 = *(&stru_19F08.r_offset + this);
  v47 = *v46;
  v48 = (*v46)[1];
  if ( v44 > **v46 - v48 )
  {
    v49 = v46 + 1;
    v50 = 0;
    while ( ++v50 != v45 )
    {
      v47 = *v49++;
      v48 = v47[1];
      if ( v44 <= *v47 - v48 )
      {
        if ( v50 == -1 )
          break;
        goto LABEL_103;
      }
    }
LABEL_47:
    if ( (v44 + 12LL) <= 0x800 )
    {
      v51 = 2036;
      v52 = 2048;
    }
    else
    {
      v51 = (v86 + 16) & 0xFFFFFFF8;
      v52 = v44 + 12;
    }
    src[0] = (**g_pMemAlloc)(g_pMemAlloc, v52);
    src[0]->m_TotalLen = v51;
    src[0]->m_SpaceUsed = 0;
    v53 = CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
            (&dword_19F00 + this),
            src);
    v44 = (v86 + 16) & 0xFFFFFFF8;
    v43 = v86;
    v54 = *(*(&stru_19F08.r_offset + this) + 8LL * v53);
    v48 = v54[1];
    goto LABEL_50;
  }
LABEL_103:
  v54 = v47;
LABEL_50:
  v54[1] = v48 + v44;
  v80 = v43;
  v55 = (v54 + v48 + 8);
  v87 = v54 + v48;
  *(v87 + 1) = MurmurHash2LowerCase(pTarget, 0x3501A674u);
  pInputNamea = v87;
  v88 = v87 + 16;
  memcpy(v88, pTarget, v80);
  pInputNamea[v80 + 16] = 0;
  v56 = *(pInputNamea + 1);
  v57 = &flDelayc->m_Lookup.m_aBuckets[v56 & 0x7FF];
  if ( flDelayc->m_Lookup.m_aBuckets[v56 & 0x7FF].m_pFirst != 0 )
  {
    v81 = &flDelayc->m_Lookup.m_aBuckets[*(pInputNamea + 1) & 0x7FFLL];
    m_pFirst = flDelayc->m_Lookup.m_aBuckets[*(pInputNamea + 1) & 0x7FFLL].m_pFirst;
    while ( 1 )
    {
      if ( m_pFirst->m_uiKey->m_Hash == v56 && V_stricmp_fast(m_pFirst->m_uiKey->m_String, v88) == 0 )
      {
        v59 = m_pFirst;
        goto LABEL_57;
      }
      m_pFirst = m_pFirst->m_pNext;
      if ( m_pFirst == 0 )
        break;
      v56 = *&v55->m_EntryMemory.m_BlockSize;
    }
    v57 = v81;
  }
  if ( *(v57 + 32) != 0 )
  {
    CThreadSpinRWLock::LockForRead(v57);
    v70 = *(v57 + 32);
    if ( *(v57 + 24) != v70 )
    {
      v82 = v57;
      v71 = *(v57 + 24);
      pInputNameb = pInputName;
      v72 = v55;
      v59 = v70;
      do
      {
        if ( v59->m_uiKey->m_Hash == *&v72->m_EntryMemory.m_BlockSize
          && V_stricmp_fast(v59->m_uiKey->m_String, v88) == 0 )
        {
          pInputName = pInputNameb;
          CThreadSpinRWLock::UnlockRead(v82);
          goto LABEL_57;
        }
        v59 = v59->m_pNext;
      }
      while ( v71 != v59 );
      v55 = v72;
      v57 = v82;
      pInputName = pInputNameb;
    }
    CThreadSpinRWLock::UnlockRead(v57);
  }
  CThreadSpinRWLock::LockForWrite(v57);
  v76 = CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
          v55,
          *(v57 + 32),
          *(v57 + 24),
          v75);
  if ( v76 == 0 )
  {
    *(&off_19EF0 + this) = 1;
    v76 = CUtlMemoryPoolBase::Alloc(&flDelayc->m_Lookup.m_EntryMemory);
    v76->m_pNext = *(v57 + 32);
    *(v57 + 32) = v76;
    v76->m_uiKey = v55;
    v76->m_Data = v55;
  }
  flDelayd = v76;
  CThreadSpinRWLock::UnlockWrite(v57);
  v59 = flDelayd;
LABEL_57:
  m_String = v59->m_Data->m_String;
LABEL_6:
  v18 = 0;
  v14->m_pTarget.u.m_Id = m_String;
  v14->m_hEntTarget.m_Index = -1;
  if ( pInputName == 0 )
    goto LABEL_8;
  if ( *pInputName == 0 )
    goto LABEL_8;
  v24 = strlen(pInputName);
  v25 = v24;
  if ( v24 <= 0 )
    goto LABEL_8;
  flDelayb = &this->m_pooledStrings;
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(v96, &this->m_pooledStrings, pInputName, v24);
  v18 = v96[0];
  if ( v96[0] != 0 )
    goto LABEL_8;
  v26 = (v25 + 16) & 0xFFFFFFF8;
  v27 = *(&dword_19F00 + this);
  if ( v27 <= 0 )
    goto LABEL_30;
  v28 = *(&stru_19F08.r_offset + this);
  v29 = *v28;
  v30 = (*v28)[1];
  if ( v26 > **v28 - v30 )
  {
    v31 = v28 + 1;
    v32 = 0;
    while ( ++v32 != v27 )
    {
      v29 = *v31++;
      v30 = v29[1];
      if ( v26 <= *v29 - v30 )
      {
        if ( v32 == -1 )
          break;
        goto LABEL_105;
      }
    }
LABEL_30:
    if ( (v26 + 12LL) <= 0x800 )
    {
      v33 = 2036;
      v34 = 2048;
    }
    else
    {
      v33 = (v25 + 16) & 0xFFFFFFF8;
      v34 = v26 + 12;
    }
    src[0] = (**g_pMemAlloc)(g_pMemAlloc, v34);
    src[0]->m_TotalLen = v33;
    src[0]->m_SpaceUsed = 0;
    v35 = CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
            (&dword_19F00 + this),
            src);
    v26 = (v25 + 16) & 0xFFFFFFF8;
    v36 = *(*(&stru_19F08.r_offset + this) + 8LL * v35);
    v30 = v36[1];
    goto LABEL_33;
  }
LABEL_105:
  v36 = v29;
LABEL_33:
  v36[1] = v30 + v26;
  v37 = (v36 + v30 + 8);
  v84 = (v36 + v30);
  v84->m_lockInfo.m_nReaders = MurmurHash2LowerCase(pInputName, 0x3501A674u);
  v79 = v84;
  p_m_nWriters = &v84->m_nWriters;
  memcpy(p_m_nWriters, pInputName, v25);
  *(&v79->m_nWriters.m_value + v25) = 0;
  m_nReaders = v79->m_lockInfo.m_nReaders;
  v39 = m_nReaders & 0x7FF;
  v40 = &flDelayb->m_Lookup.m_aBuckets[v39];
  p_m_uiKey = &flDelayb->m_Lookup.m_aBuckets[v39].m_pFirst->m_uiKey;
  if ( p_m_uiKey != 0 )
  {
    while ( m_nReaders != **p_m_uiKey || V_stricmp_fast(*p_m_uiKey + 8LL, p_m_nWriters) != 0 )
    {
      p_m_uiKey = p_m_uiKey[1];
      if ( p_m_uiKey == 0 )
        goto LABEL_95;
      m_nReaders = *&v37->m_EntryMemory.m_BlockSize;
    }
  }
  else
  {
LABEL_95:
    if ( *(v40 + 32) != 0 )
    {
      CThreadSpinRWLock::LockForRead(v40);
      p_m_uiKey = *(v40 + 32);
      if ( *(v40 + 24) != p_m_uiKey )
      {
        v83 = v40;
        v73 = *(v40 + 24);
        do
        {
          if ( **p_m_uiKey == *&v37->m_EntryMemory.m_BlockSize && V_stricmp_fast(*p_m_uiKey + 8LL, p_m_nWriters) == 0 )
          {
            CThreadSpinRWLock::UnlockRead(v83);
            goto LABEL_39;
          }
          p_m_uiKey = p_m_uiKey[1];
        }
        while ( v73 != p_m_uiKey );
        v40 = v83;
      }
      CThreadSpinRWLock::UnlockRead(v40);
    }
    CThreadSpinRWLock::LockForWrite(v40);
    p_m_uiKey = CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
                  v37,
                  *(v40 + 32),
                  *(v40 + 24),
                  v74);
    if ( p_m_uiKey == 0 )
    {
      *(&off_19EF0 + this) = 1;
      p_m_uiKey = CUtlMemoryPoolBase::Alloc(&flDelayb->m_Lookup.m_EntryMemory);
      p_m_uiKey[1] = *(v40 + 32);
      *(v40 + 32) = p_m_uiKey;
      *p_m_uiKey = v37;
      p_m_uiKey[2] = v37;
    }
    CThreadSpinRWLock::UnlockWrite(v40);
  }
LABEL_39:
  v18 = (p_m_uiKey[2] + 8LL);
LABEL_8:
  v14->m_pTargetInput.u.m_Id = v18;
  if ( pActivator != 0 )
  {
    m_pEntity = pActivator->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      m_pfnWarningFunc = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15;
      LOWORD(src[0]) = v20 | src[0] & 0x8000;
      LODWORD(src[0]) = m_pfnWarningFunc | src[0] & 0x7FFF;
    }
    else
    {
      LODWORD(src[0]) = -1;
    }
    v14->m_hActivator.m_Index = src[0];
  }
  else
  {
    v14->m_hActivator.m_Index = -1;
  }
  if ( pCaller != 0 )
  {
    v21 = pCaller->m_pEntity;
    if ( v21 != 0 )
    {
      v22 = 0x7FFF;
      if ( v21->m_EHandle.m_Index != -1 )
        v22 = v21->m_EHandle.m_Index & 0x7FFF;
      m_pfnWarningFunc = ((v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1)) << 15;
      LOWORD(src[0]) = v22 | src[0] & 0x8000;
      LODWORD(src[0]) = m_pfnWarningFunc | src[0] & 0x7FFF;
    }
    else
    {
      LODWORD(src[0]) = -1;
    }
    v14->m_hCaller.m_Index = src[0];
  }
  else
  {
    v14->m_hCaller.m_Index = -1;
  }
  if ( (v14->m_variantValue.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14->m_variantValue.m_uint64);
    v14->m_variantValue.m_flags &= ~1u;
  }
  v14->m_variantValue.m_uint64 = 0;
  v14->m_variantValue.m_type = 0;
  m_type = value->m_type;
  switch ( m_type )
  {
    case 3:
      m_uint64 = value->m_uint64;
      if ( (v14->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v14->m_variantValue.m_flags &= ~1u;
      }
      v14->m_variantValue.m_uint64 = 0;
      v14->m_variantValue.m_type = 3;
      goto LABEL_64;
    case 4:
      v62 = value->m_uint64;
      if ( (v14->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v14->m_variantValue.m_flags &= ~1u;
      }
      v14->m_variantValue.m_uint64 = 0;
      v14->m_variantValue.m_type = 4;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>(&v14->m_variantValue, v62, m_pfnWarningFunc);
      break;
    case 25:
      v63 = value->m_uint64;
      if ( (v14->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v14->m_variantValue.m_flags &= ~1u;
      }
      v64 = g_pMemAlloc;
      v14->m_variantValue.m_uint64 = 0;
      v14->m_variantValue.m_type = 25;
      v65 = (**v64)(v64, 8);
      v14->m_variantValue.m_uint64 = v65;
      *v65 = *v63;
      v65[1] = v63[1];
      v14->m_variantValue.m_flags |= 1u;
      break;
    case 27:
      v66 = value->m_uint64;
      if ( (v14->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v14->m_variantValue.m_flags &= ~1u;
      }
      v14->m_variantValue.m_uint64 = 0;
      v14->m_variantValue.m_type = 27;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>(&v14->m_variantValue, v66, m_pfnWarningFunc);
      break;
    case 30:
      v67 = value->m_uint64;
      if ( (v14->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v14->m_variantValue.m_flags &= ~1u;
      }
      v14->m_variantValue.m_uint64 = 0;
      v14->m_variantValue.m_type = 30;
      if ( v67 != 0 )
      {
        v68 = strlen(v67) + 1;
        v69 = (**g_pMemAlloc)(g_pMemAlloc, v68);
        v14->m_variantValue.m_uint64 = v69;
        memcpy(v69, v67, v68);
        v14->m_variantValue.m_flags |= 1u;
      }
      break;
    case 39:
      m_uint64 = value->m_uint64;
      if ( (v14->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v14->m_variantValue.m_flags &= ~1u;
      }
      v14->m_variantValue.m_uint64 = 0;
      v14->m_variantValue.m_type = 39;
LABEL_64:
      v61 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      v14->m_variantValue.m_uint64 = v61;
      *v61 = *m_uint64;
      v61[1] = m_uint64[1];
      v61[2] = m_uint64[2];
      v14->m_variantValue.m_flags |= 1u;
      break;
    default:
      v14->m_variantValue.m_type = m_type;
      v14->m_variantValue.m_uint64 = value->m_uint64;
      break;
  }
  v14->m_nOutputID = nOutputID;
  CEntitySystem::AddEntityIOEvent(this, v14);
}


// CEntitySystem::AddEntityIOEvent  (line 2618, @0x00000000030ae3c0, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Vector2D>, AssignTo<CVariantDefaultAllocator>, CEntityHandle, CUtlSymbolLarge, CVariantBase, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, EntityIOQueuePrioritizedEvent_t, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Init, V_strlen, curtime, memcpy, operator=
// calls: operator new, CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>, CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>, strlen, memcpy
// callers: CEntitySystem::AddEntityIOEvent, CEntitySystem::Restore, CEntityIOOutput::FireOutputInternal
// globals: gpGlobalsBase, jpt_30AE5A1
void __fastcall CEntitySystem::AddEntityIOEvent(
        CEntitySystem *const this,
        CEntityInstance *hTarget,
        string_t inputNameSymbol,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        float flDelay,
        int nOutputID)
{
  EntityIOQueuePrioritizedEvent_t *v10; // rax
  CGlobalVarsBase *v11; // r12
  __int16 v12; // r9
  EntityIOQueuePrioritizedEvent_t *v13; // rbx
  float m_flCurrentTime; // xmm0_4
  CEntityInstance *v15; // r8
  CEntityInstance *v16; // rcx
  UtlSymLargeId_t m_Id; // rdx
  CEntityInstance *v18; // rsi
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // cx
  CEntityIdentity *v21; // rax
  __int16 v22; // cx
  int16 m_type; // cx
  void (__fastcall *m_pfnWarningFunc)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double); // rax
  _DWORD *m_uint64; // r12
  _DWORD *v26; // rax
  const Quaternion *v27; // r15
  _DWORD *v28; // r12
  _QWORD *v29; // rdi
  _DWORD *v30; // rax
  const Vector4D *v31; // r15
  const char *v32; // r12
  unsigned int v33; // r15d
  void *v34; // rax
  CEntityInstance *hTargetb; // [rsp+8h] [rbp-68h]
  CEntityInstance *inputNameSymbolb; // [rsp+10h] [rbp-60h]
  CEntityInstance *pActivatorb; // [rsp+18h] [rbp-58h]
  CEntityInstance *pCallerb; // [rsp+20h] [rbp-50h]
  int v44; // [rsp+30h] [rbp-40h]
  int v45; // [rsp+30h] [rbp-40h]

  v10 = operator new(0x48u);
  v11 = gpGlobalsBase;
  v12 = 0;
  v13 = v10;
  v10->m_pTarget.u.m_Id = 0;
  m_flCurrentTime = 0.0;
  v15 = pCaller;
  v10->m_pTargetInput.u.m_Id = 0;
  v16 = pActivator;
  v10->m_hActivator.m_Index = -1;
  m_Id = inputNameSymbol.u.m_Id;
  v10->m_hCaller.m_Index = -1;
  v18 = hTarget;
  v10->m_hEntTarget.m_Index = -1;
  v10->m_variantValue.m_type = 0;
  v10->m_variantValue.m_flags = 0;
  v10->m_variantValue.m_uint64 = 0;
  if ( v11 != 0 )
  {
    if ( !v11->m_bEnableAssertions && !v11->m_bInSimulation )
    {
      m_pfnWarningFunc = v11->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        hTargetb = pCaller;
        inputNameSymbolb = pActivator;
        pActivatorb = m_Id;
        pCallerb = v18;
        m_pfnWarningFunc(1, v18, m_Id, v16, v15, 0, 0.0);
        v15 = hTargetb;
        v16 = inputNameSymbolb;
        m_Id = pActivatorb;
        v12 = v13->m_variantValue.m_flags & 1;
        v18 = pCallerb;
      }
    }
    m_flCurrentTime = v11->m_flCurrentTime;
  }
  v13->m_targetType = EntityIOTargetType_t::ENTITY_IO_TARGET_INVALID;
  v13->m_pTarget.u.m_Id = 0;
  v13->m_flFireTime = m_flCurrentTime + flDelay;
  v13->m_hEntTarget.m_Index = v18->_vptr_IHandleEntity;
  v13->m_pTargetInput.u.m_Id = *m_Id;
  if ( v16 != 0 )
  {
    m_pEntity = v16->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      m_Id = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15;
      v44 = m_Id | v20 & 0x7FFF;
    }
    else
    {
      v44 = -1;
    }
    v13->m_hActivator.m_Index = v44;
  }
  else
  {
    v13->m_hActivator.m_Index = -1;
  }
  if ( v15 != 0 )
  {
    v21 = v15->m_pEntity;
    if ( v21 != 0 )
    {
      v22 = 0x7FFF;
      if ( v21->m_EHandle.m_Index != -1 )
        v22 = v21->m_EHandle.m_Index & 0x7FFF;
      m_Id = ((v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1)) << 15;
      v45 = m_Id | v22 & 0x7FFF;
    }
    else
    {
      v45 = -1;
    }
    v13->m_hCaller.m_Index = v45;
  }
  else
  {
    v13->m_hCaller.m_Index = -1;
  }
  if ( v12 != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13->m_variantValue.m_uint64);
    v13->m_variantValue.m_flags &= ~1u;
  }
  v13->m_variantValue.m_uint64 = 0;
  v13->m_variantValue.m_type = 0;
  m_type = value->m_type;
  switch ( m_type )
  {
    case 3:
      m_uint64 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 3;
      goto LABEL_25;
    case 4:
      v27 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 4;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>(&v13->m_variantValue, v27, m_Id);
      break;
    case 25:
      v28 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_type = 25;
      v29 = g_pMemAlloc;
      v13->m_variantValue.m_uint64 = 0;
      v30 = (**v29)(v29, 8);
      v13->m_variantValue.m_uint64 = v30;
      *v30 = *v28;
      v30[1] = v28[1];
      v13->m_variantValue.m_flags |= 1u;
      break;
    case 27:
      v31 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 27;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>(&v13->m_variantValue, v31, m_Id);
      break;
    case 30:
      v32 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 30;
      if ( v32 != 0 )
      {
        v33 = strlen(v32) + 1;
        v34 = (**g_pMemAlloc)(g_pMemAlloc, v33);
        v13->m_variantValue.m_uint64 = v34;
        memcpy(v34, v32, v33);
        v13->m_variantValue.m_flags |= 1u;
      }
      break;
    case 39:
      m_uint64 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 39;
LABEL_25:
      v26 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      v13->m_variantValue.m_uint64 = v26;
      *v26 = *m_uint64;
      v26[1] = m_uint64[1];
      v26[2] = m_uint64[2];
      v13->m_variantValue.m_flags |= 1u;
      break;
    default:
      v13->m_variantValue.m_type = m_type;
      v13->m_variantValue.m_uint64 = value->m_uint64;
      break;
  }
  v13->m_nOutputID = nOutputID;
  CEntitySystem::AddEntityIOEvent(this, v13);
}


// CEntitySystem::AddEntityIOEvent  (line 2636, @0x00000000030b3470, libserver.so)  // inlines: AddString, Alloc, AllocPooledString, CEntityHandle, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Compare, CopyConstruct<CUtlSymbolTableLargeBaseTreeEntry_t*>, Find, FindPoolWithSpace, GetEHandle, GetEntryIndex, GetSerialNumber, HashStringFastCaseless, Init, Insert, InsertUncommitted, LockForRead, ToSymbol, UnlockRead, V_memcpy, V_strlen, memcpy, operator!=
// calls: strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CEntitySystem::AddEntityIOEvent, CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), CThreadSpinRWLock::LockForWrite, CThreadSpinRWLock::UnlockWrite(void), CUtlMemoryPoolBase::Alloc
// callers: Script_FireEntityIOInputString, Script_FireEntityIOInputVec, CServerEventQueue::AddEvent, CMomentaryRotButton::Use, CEntitySystem::AddEntityIOEvent
void __fastcall CEntitySystem::AddEntityIOEvent(
        CEntitySystem *const this,
        CEntityInstance *pTarget,
        const char *pInputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        float flDelay,
        int nOutputID)
{
  int v10; // r12d
  CEntityIdentity *m_pEntity; // rax
  __int16 v13; // cx
  int v14; // eax
  char *v15; // rax
  int v16; // r8d
  int v17; // edi
  signed int v18; // r11d
  _DWORD **v19; // rcx
  _DWORD *v20; // rdx
  int v21; // esi
  _DWORD **v22; // rcx
  int v23; // edx
  _DWORD *v24; // r10
  unsigned int v25; // edx
  __int64 v26; // rsi
  int v27; // eax
  CEntitySystem *v28; // rcx
  CEntitySystem *v29; // r9
  float v30; // xmm0_4
  int (**vptr_IEntityResourceManifestBuilder)(...); // rax
  __int64 v32; // rdx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirst; // r12
  _QWORD *p_m_uiKey; // rbx
  CEntitySystem *v35; // rcx
  CVariant *v36; // r9
  float v37; // xmm0_4
  const char *v38; // r12
  const char *m_pszString; // r13
  CEntitySystem *v40; // rbx
  CEntitySystem *v41; // rcx
  CEntitySystem *v42; // r9
  float v43; // xmm0_4
  const char *v44; // r12
  const char *v45; // r13
  CEntitySystem *v46; // rbx
  const CVariant *v47; // r9
  float v48; // xmm0_4
  _QWORD *v49; // rax
  float v50; // [rsp+10h] [rbp-A0h]
  float v51; // [rsp+10h] [rbp-A0h]
  float v52; // [rsp+10h] [rbp-A0h]
  int v53; // [rsp+18h] [rbp-98h]
  const CVariant *v54; // [rsp+18h] [rbp-98h]
  float v55; // [rsp+18h] [rbp-98h]
  const CVariant *v56; // [rsp+18h] [rbp-98h]
  float v57; // [rsp+18h] [rbp-98h]
  float v58; // [rsp+18h] [rbp-98h]
  CEntitySystem *v59; // [rsp+18h] [rbp-98h]
  float thisd; // [rsp+20h] [rbp-90h]
  CEntitySystem *thisa; // [rsp+20h] [rbp-90h]
  CEntitySystem *thise; // [rsp+20h] [rbp-90h]
  CEntitySystem *thisb; // [rsp+20h] [rbp-90h]
  CEntitySystem *thisf; // [rsp+20h] [rbp-90h]
  CEntitySystem *thisg; // [rsp+20h] [rbp-90h]
  CEntitySystem *thisc; // [rsp+20h] [rbp-90h]
  float thish; // [rsp+20h] [rbp-90h]
  string_t_table *p_m_pooledStrings; // [rsp+28h] [rbp-88h]
  float v69; // [rsp+30h] [rbp-80h]
  const CVariant *v70; // [rsp+30h] [rbp-80h]
  int v71; // [rsp+30h] [rbp-80h]
  int v72; // [rsp+30h] [rbp-80h]
  CEntitySystem *v73; // [rsp+30h] [rbp-80h]
  int v74; // [rsp+30h] [rbp-80h]
  CEntitySystem *v75; // [rsp+30h] [rbp-80h]
  CEntitySystem *v76; // [rsp+30h] [rbp-80h]
  int v77; // [rsp+30h] [rbp-80h]
  float v78; // [rsp+30h] [rbp-80h]
  CEntitySystem *v79; // [rsp+30h] [rbp-80h]
  float flDelaya; // [rsp+38h] [rbp-78h]
  const CVariant *flDelayb; // [rsp+38h] [rbp-78h]
  unsigned int flDelayd; // [rsp+38h] [rbp-78h]
  const CVariant *flDelayc; // [rsp+38h] [rbp-78h]
  const CVariant *flDelaye; // [rsp+38h] [rbp-78h]
  CEntitySystem *flDelayf; // [rsp+38h] [rbp-78h]
  const CVariant *valuea; // [rsp+40h] [rbp-70h]
  int valueb; // [rsp+40h] [rbp-70h]
  unsigned int valued; // [rsp+40h] [rbp-70h]
  const CVariant *valuee; // [rsp+40h] [rbp-70h]
  CVariant *valuec; // [rsp+40h] [rbp-70h]
  char *v92[2]; // [rsp+60h] [rbp-50h] BYREF
  string_t inputNameSymbol; // [rsp+70h] [rbp-40h] BYREF

  v10 = -1;
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
    }
  }
  if ( pInputName == 0
    || *pInputName == 0
    || (flDelaya = flDelay, valuea = value, v14 = strlen(pInputName), value = valuea, flDelay = flDelaya, v14 <= 0) )
  {
    v15 = 0;
    goto LABEL_27;
  }
  v69 = flDelaya;
  flDelayb = valuea;
  p_m_pooledStrings = &this->m_pooledStrings;
  valueb = v14;
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(v92, &this->m_pooledStrings, pInputName, v14);
  v15 = v92[0];
  v16 = valueb;
  value = flDelayb;
  flDelay = v69;
  if ( v92[0] == 0 )
  {
    v17 = *(&dword_19F00 + this);
    v18 = (valueb + 16) & 0xFFFFFFF8;
    if ( v17 > 0 )
    {
      v19 = *(&stru_19F08.r_offset + this);
      v20 = *v19;
      v21 = (*v19)[1];
      if ( v18 <= **v19 - v21 )
      {
LABEL_18:
        v20[1] = v18 + v21;
        v50 = flDelay;
        v54 = value;
        v71 = v16;
        thisa = (v20 + v21 + 8);
        valuee = (v20 + v21);
        *&valuee->m_type = MurmurHash2LowerCase(pInputName, 0x3501A674u);
        flDelayc = valuee + 1;
        memcpy(&valuee[1], pInputName, v71);
        v28 = thisa;
        v29 = v54;
        *(&valuee[1].m_char + v71) = 0;
        v30 = v50;
        vptr_IEntityResourceManifestBuilder = *&valuee->m_type;
        v32 = vptr_IEntityResourceManifestBuilder & 0x7FF;
        valuec = &p_m_pooledStrings->m_Lookup.m_aBuckets[v32];
        if ( p_m_pooledStrings->m_Lookup.m_aBuckets[v32].m_pFirst != 0 )
        {
          v72 = v10;
          m_pFirst = p_m_pooledStrings->m_Lookup.m_aBuckets[v32].m_pFirst;
          while ( 1 )
          {
            if ( vptr_IEntityResourceManifestBuilder == m_pFirst->m_uiKey->m_Hash
              && V_stricmp_fast(m_pFirst->m_uiKey->m_String, flDelayc) == 0 )
            {
              p_m_uiKey = &m_pFirst->m_uiKey;
              value = v54;
              v10 = v72;
              flDelay = v50;
              goto LABEL_25;
            }
            m_pFirst = m_pFirst->m_pNext;
            if ( m_pFirst == 0 )
              break;
            vptr_IEntityResourceManifestBuilder = thisa->_vptr_IEntityResourceManifestBuilder;
          }
          v10 = v72;
          v28 = thisa;
          v29 = v54;
          v30 = v50;
        }
        if ( valuec[2].m_uint64 != 0 )
        {
          v55 = v30;
          thise = v29;
          v73 = v28;
          CThreadSpinRWLock::LockForRead(valuec);
          v35 = v73;
          v36 = thise;
          v37 = v55;
          if ( *&valuec[1].m_type != valuec[2].m_uint64 )
          {
            v74 = v10;
            v38 = *&valuec[1].m_type;
            thisb = this;
            m_pszString = valuec[2].m_pszString;
            v40 = v35;
            v56 = v36;
            v51 = v37;
            do
            {
              if ( **m_pszString == v40->_vptr_IEntityResourceManifestBuilder
                && V_stricmp_fast(*m_pszString + 8LL, flDelayc) == 0 )
              {
                p_m_uiKey = m_pszString;
                v10 = v74;
                this = thisb;
                CThreadSpinRWLock::UnlockRead(valuec);
                flDelay = v51;
                value = v56;
                goto LABEL_25;
              }
              m_pszString = *(m_pszString + 1);
            }
            while ( v38 != m_pszString );
            v10 = v74;
            v35 = v40;
            this = thisb;
            v36 = v56;
            v37 = v51;
          }
          v57 = v37;
          thisf = v36;
          v75 = v35;
          CThreadSpinRWLock::UnlockRead(valuec);
          v28 = v75;
          v29 = thisf;
          v30 = v57;
        }
        v58 = v30;
        thisg = v29;
        v76 = v28;
        CThreadSpinRWLock::LockForWrite(valuec);
        v41 = v76;
        v42 = thisg;
        v43 = v58;
        if ( *&valuec[1].m_type != valuec[2].m_uint64 )
        {
          v77 = v10;
          v44 = *&valuec[1].m_type;
          thisc = this;
          v45 = valuec[2].m_pszString;
          v46 = v41;
          v59 = v42;
          v52 = v43;
          do
          {
            if ( **v45 == v46->_vptr_IEntityResourceManifestBuilder && V_stricmp_fast(*v45 + 8LL, flDelayc) == 0 )
            {
              p_m_uiKey = v45;
              v10 = v77;
              this = thisc;
              v47 = v59;
              v48 = v52;
              goto LABEL_46;
            }
            v45 = *(v45 + 1);
          }
          while ( v44 != v45 );
          v10 = v77;
          v41 = v46;
          this = thisc;
          v42 = v59;
          v43 = v52;
        }
        *(&off_19EF0 + this) = 1;
        thish = v43;
        v79 = v42;
        flDelayf = v41;
        v49 = CUtlMemoryPoolBase::Alloc(&p_m_pooledStrings->m_Lookup.m_EntryMemory);
        v47 = v79;
        v48 = thish;
        v49[1] = valuec[2].m_pszString;
        valuec[2].m_uint64 = v49;
        p_m_uiKey = v49;
        *v49 = flDelayf;
        v49[2] = flDelayf;
LABEL_46:
        v78 = v48;
        flDelaye = v47;
        CThreadSpinRWLock::UnlockWrite(valuec);
        flDelay = v78;
        value = flDelaye;
LABEL_25:
        v15 = (p_m_uiKey[2] + 8LL);
        goto LABEL_27;
      }
      v22 = v19 + 1;
      v23 = 0;
      while ( ++v23 != v17 )
      {
        v24 = *v22++;
        v21 = v24[1];
        if ( v18 <= *v24 - v21 )
        {
          if ( v23 == -1 )
            break;
          v20 = v24;
          goto LABEL_18;
        }
      }
    }
    if ( (v18 + 12LL) <= 0x800 )
    {
      v25 = 2036;
      v26 = 2048;
    }
    else
    {
      v25 = (valueb + 16) & 0xFFFFFFF8;
      v26 = v18 + 12;
    }
    v53 = valueb;
    thisd = v69;
    v70 = flDelayb;
    flDelayd = (valueb + 16) & 0xFFFFFFF8;
    valued = v25;
    inputNameSymbol.u.m_Id = (**g_pMemAlloc)(g_pMemAlloc, v26);
    *inputNameSymbol.u.m_Id = valued;
    *(inputNameSymbol.u.m_Id + 4) = 0;
    v27 = CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
            (&dword_19F00 + this),
            &inputNameSymbol);
    v18 = flDelayd;
    value = v70;
    v20 = *(*(&stru_19F08.r_offset + this) + 8LL * v27);
    v16 = v53;
    flDelay = thisd;
    v21 = v20[1];
    goto LABEL_18;
  }
LABEL_27:
  inputNameSymbol.u.m_Id = v15;
  LODWORD(v92[0]) = v10;
  CEntitySystem::AddEntityIOEvent(this, v92, &inputNameSymbol, pActivator, pCaller, value, flDelay, nOutputID);
}


// CEntitySystem::AddEntityIOEvent  (line 2646, @0x00000000030b3b40, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: Script_FireEntityIOInputNameOnly, CLogicRelay::InputTrigger, CServerEventQueue::AddEvent, CMomentaryRotButton::Use
void __fastcall CEntitySystem::AddEntityIOEvent(
        CEntitySystem *const this,
        CEntityInstance *pTarget,
        const char *pInputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        float flDelay,
        int nOutputID)
{
  CVariant value; // [rsp+10h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntitySystem::AddEntityIOEvent(this, pTarget, pInputName, pActivator, pCaller, &value, flDelay, nOutputID);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CEntitySystem::AddEntityIOEvent  (line 2653, @0x00000000030ae890, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Vector2D>, AssignTo<CVariantDefaultAllocator>, CEntityHandle, CUtlSymbolLarge, CVariantBase, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, EntityIOQueuePrioritizedEvent_t, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Init, V_strlen, curtime, memcpy, operator=
// calls: operator new, CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>, CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>, strlen, memcpy
// callers: CEntityIOOutput::FireOutputInternal
// globals: gpGlobalsBase, jpt_30AEA75
void __fastcall CEntitySystem::AddEntityIOEvent(
        CEntitySystem *const this,
        EntityIOTargetType_t nTargetType,
        string_t target,
        string_t inputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        float flDelay,
        const CVariant *const value,
        int nOutputID)
{
  EntityIOQueuePrioritizedEvent_t *v10; // rax
  CGlobalVarsBase *v11; // r12
  __int16 v12; // r10
  EntityIOQueuePrioritizedEvent_t *v13; // rbx
  float m_flCurrentTime; // xmm0_4
  CEntityInstance *v15; // r9
  CEntityInstance *v16; // r8
  UtlSymLargeId_t *m_Id; // rcx
  UtlSymLargeId_t v18; // rdx
  EntityIOTargetType_t v19; // esi
  UtlSymLargeId_t v20; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v22; // cx
  CEntityIdentity *v23; // rax
  __int16 v24; // cx
  int16 m_type; // cx
  void (__fastcall *m_pfnWarningFunc)(__int64, double); // rax
  _DWORD *m_uint64; // r12
  _DWORD *v28; // rax
  const Quaternion *v29; // r15
  _DWORD *v30; // r12
  _QWORD *v31; // rdi
  _DWORD *v32; // rax
  const Vector4D *v33; // r15
  const char *v34; // r12
  unsigned int v35; // r15d
  void *v36; // rax
  CEntityInstance *nTargetTypeb; // [rsp+0h] [rbp-70h]
  CEntityInstance *targetb; // [rsp+8h] [rbp-68h]
  CEntityInstance *pActivatorb; // [rsp+18h] [rbp-58h]
  EntityIOTargetType_t pCallerb; // [rsp+20h] [rbp-50h]
  int v47; // [rsp+30h] [rbp-40h]
  int v48; // [rsp+30h] [rbp-40h]

  v10 = operator new(0x48u);
  v11 = gpGlobalsBase;
  v10->m_variantValue.m_type = 0;
  v12 = 0;
  v13 = v10;
  v10->m_hActivator.m_Index = -1;
  m_flCurrentTime = 0.0;
  v10->m_pTarget.u.m_Id = 0;
  v15 = pCaller;
  v10->m_pTargetInput.u.m_Id = 0;
  v16 = pActivator;
  v10->m_hCaller.m_Index = -1;
  m_Id = inputName.u.m_Id;
  v10->m_hEntTarget.m_Index = -1;
  v18 = target.u.m_Id;
  v10->m_variantValue.m_flags = 0;
  v19 = nTargetType;
  v10->m_variantValue.m_uint64 = 0;
  if ( v11 != 0 )
  {
    if ( !v11->m_bEnableAssertions && !v11->m_bInSimulation )
    {
      m_pfnWarningFunc = v11->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        nTargetTypeb = pCaller;
        targetb = pActivator;
        pActivatorb = v18;
        pCallerb = v19;
        m_pfnWarningFunc(1, 0.0);
        v15 = nTargetTypeb;
        v16 = targetb;
        m_Id = inputName.u.m_Id;
        v12 = v13->m_variantValue.m_flags & 1;
        v18 = pActivatorb;
        v19 = pCallerb;
      }
    }
    m_flCurrentTime = v11->m_flCurrentTime;
  }
  v13->m_targetType = v19;
  v13->m_flFireTime = m_flCurrentTime + flDelay;
  v20 = *v18;
  v13->m_hEntTarget.m_Index = -1;
  v13->m_pTarget.u.m_Id = v20;
  v13->m_pTargetInput.u.m_Id = *m_Id;
  if ( v16 != 0 )
  {
    m_pEntity = v16->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v22 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v18 = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15;
      v47 = v18 | v22 & 0x7FFF;
    }
    else
    {
      v47 = -1;
    }
    v13->m_hActivator.m_Index = v47;
  }
  else
  {
    v13->m_hActivator.m_Index = -1;
  }
  if ( v15 != 0 )
  {
    v23 = v15->m_pEntity;
    if ( v23 != 0 )
    {
      v24 = 0x7FFF;
      if ( v23->m_EHandle.m_Index != -1 )
        v24 = v23->m_EHandle.m_Index & 0x7FFF;
      v18 = ((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15;
      v48 = v18 | v24 & 0x7FFF;
    }
    else
    {
      v48 = -1;
    }
    v13->m_hCaller.m_Index = v48;
  }
  else
  {
    v13->m_hCaller.m_Index = -1;
  }
  if ( v12 != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13->m_variantValue.m_uint64);
    v13->m_variantValue.m_flags &= ~1u;
  }
  v13->m_variantValue.m_uint64 = 0;
  v13->m_variantValue.m_type = 0;
  m_type = value->m_type;
  switch ( m_type )
  {
    case 3:
      m_uint64 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 3;
      goto LABEL_25;
    case 4:
      v29 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 4;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>(&v13->m_variantValue, v29, v18);
      break;
    case 25:
      v30 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_type = 25;
      v31 = g_pMemAlloc;
      v13->m_variantValue.m_uint64 = 0;
      v32 = (**v31)(v31, 8);
      v13->m_variantValue.m_uint64 = v32;
      *v32 = *v30;
      v32[1] = v30[1];
      v13->m_variantValue.m_flags |= 1u;
      break;
    case 27:
      v33 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 27;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>(&v13->m_variantValue, v33, v18);
      break;
    case 30:
      v34 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 30;
      if ( v34 != 0 )
      {
        v35 = strlen(v34) + 1;
        v36 = (**g_pMemAlloc)(g_pMemAlloc, v35);
        v13->m_variantValue.m_uint64 = v36;
        memcpy(v36, v34, v35);
        v13->m_variantValue.m_flags |= 1u;
      }
      break;
    case 39:
      m_uint64 = value->m_uint64;
      if ( (v13->m_variantValue.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        v13->m_variantValue.m_flags &= ~1u;
      }
      v13->m_variantValue.m_uint64 = 0;
      v13->m_variantValue.m_type = 39;
LABEL_25:
      v28 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      v13->m_variantValue.m_uint64 = v28;
      *v28 = *m_uint64;
      v28[1] = m_uint64[1];
      v28[2] = m_uint64[2];
      v13->m_variantValue.m_flags |= 1u;
      break;
    default:
      v13->m_variantValue.m_type = m_type;
      v13->m_variantValue.m_uint64 = value->m_uint64;
      break;
  }
  v13->m_nOutputID = nOutputID;
  CEntitySystem::AddEntityIOEvent(this, v13);
}


// CEntitySystem::ClearEntityIOEvents  (line 2675, @0x00000000030ac8b0, libserver.so)  // inlines: CAutoLockT, Free, Lock, Unlock, ~CAutoLockT, ~CVariantBase, ~EntityIOQueuePrioritizedEvent_t
// calls: pthread_mutex_lock, operator delete, pthread_mutex_unlock
// callers: CGameConfiguration::InitGameSession, CServerEventQueue::Init, CServerEventQueue::Clear, CEntitySystem::Restore, CEntitySystem::ClearEntityDatabase
void __fastcall CEntitySystem::ClearEntityIOEvents(CEntitySystem *const this)
{
  CThreadMutex *p_m_eventQueueMutex; // r14
  EntityIOQueuePrioritizedEvent_t *m_pNext; // rbx
  EntityIOQueuePrioritizedEvent_t *v4; // r12
  bool v5; // zf

  p_m_eventQueueMutex = &this->m_eventQueueMutex;
  pthread_mutex_lock(&this->m_eventQueueMutex.m_Mutex);
  m_pNext = this->m_events.m_pNext;
  if ( m_pNext != 0 )
  {
    v4 = m_pNext->m_pNext;
    if ( (m_pNext->m_variantValue.m_flags & 1) != 0 )
      goto LABEL_5;
    while ( 1 )
    {
      m_pNext->m_variantValue.m_uint64 = 0;
      m_pNext->m_variantValue.m_type = 0;
      operator delete(m_pNext);
      if ( v4 == 0 )
        break;
      m_pNext = v4;
      v5 = (v4->m_variantValue.m_flags & 1) == 0;
      v4 = v4->m_pNext;
      if ( !v5 )
      {
LABEL_5:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pNext->m_variantValue.m_uint64);
        m_pNext->m_variantValue.m_flags &= ~1u;
      }
    }
  }
  this->m_events.m_pNext = 0;
  pthread_mutex_unlock(&p_m_eventQueueMutex->m_Mutex);
}


// CEntitySystem::AddEntityIOEvent  (line 2698, @0x00000000030ae320, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData, pthread_mutex_unlock, _Unwind_Resume
// callers: CEntitySystem::AddEntityIOEvent
void __fastcall CEntitySystem::AddEntityIOEvent(CEntitySystem *const this, EntityIOQueuePrioritizedEvent_t *pNewEvent)
{
  CThreadMutex *p_m_eventQueueMutex; // r12
  EntityIOQueuePrioritizedEvent_t *i; // rdx
  EntityIOQueuePrioritizedEvent_t *m_pNext; // rax
  EntityIOQueuePrioritizedEvent_t *v7; // rax

  p_m_eventQueueMutex = &this->m_eventQueueMutex;
  pthread_mutex_lock(&this->m_eventQueueMutex.m_Mutex);
  for ( i = &this->m_events; ; i = i->m_pNext )
  {
    m_pNext = i->m_pNext;
    if ( m_pNext == 0 || m_pNext->m_flFireTime > pNewEvent->m_flFireTime )
      break;
  }
  pNewEvent->m_pNext = m_pNext;
  pNewEvent->m_pPrev = i;
  i->m_pNext = pNewEvent;
  CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData(&pNewEvent->m_variantValue, 1);
  v7 = pNewEvent->m_pNext;
  if ( v7 != 0 )
    v7->m_pPrev = pNewEvent;
  pthread_mutex_unlock(&p_m_eventQueueMutex->m_Mutex);
}


// CEntitySystem::RemoveEntityIOEvent  (line 2731, @0x00000000030ac950, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, pthread_mutex_unlock
// callers: CEntitySystem::CancelEntityIOEvents, CEntitySystem::ServiceEntityIOEvents
void __fastcall CEntitySystem::RemoveEntityIOEvent(CEntitySystem *const this, EntityIOQueuePrioritizedEvent_t *pe)
{
  CThreadMutex *p_m_eventQueueMutex; // r12
  EntityIOQueuePrioritizedEvent_t *m_pNext; // rax

  p_m_eventQueueMutex = &this->m_eventQueueMutex;
  pthread_mutex_lock(&this->m_eventQueueMutex.m_Mutex);
  pe->m_pPrev->m_pNext = pe->m_pNext;
  m_pNext = pe->m_pNext;
  if ( m_pNext != 0 )
    m_pNext->m_pPrev = pe->m_pPrev;
  pthread_mutex_unlock(&p_m_eventQueueMutex->m_Mutex);
}


// CEntitySystem::CancelEntityIOEvents  (line 2750, @0x00000000030ac9a0, libserver.so)  // inlines: CAutoLockT, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Lock, LookupEntity, Unlock, operator CEntityInstance*, ~CAutoLockT, ~CVariantBase, ~EntityIOQueuePrioritizedEvent_t
// calls: pthread_mutex_lock, CEntitySystem::RemoveEntityIOEvent, operator delete, pthread_mutex_unlock
// callers: CancelEntityIOEvents, CLogicRelay::InputCancelPending, CC_Ent_CancelPendingEntFires, CPointCommentaryNode::CleanupPostCommentary
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntitySystem::CancelEntityIOEvents(CEntitySystem *const this, CEntityInstance *pCaller)
{
  CThreadMutex *p_m_eventQueueMutex; // r14
  EntityIOQueuePrioritizedEvent_t *m_pNext; // rbx
  uint32 m_Index; // eax
  EntityIOQueuePrioritizedEvent_t *v7; // r12
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  if ( pCaller != 0 )
  {
    p_m_eventQueueMutex = &this->m_eventQueueMutex;
    pthread_mutex_lock(&this->m_eventQueueMutex.m_Mutex);
    m_pNext = this->m_events.m_pNext;
    if ( m_pNext != 0 )
    {
      while ( 1 )
      {
        m_Index = m_pNext->m_hCaller.m_Index;
        v7 = m_pNext->m_pNext;
        if ( m_Index + 2 > 1
          && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hCaller.m_Index) >> 9) & 0x3F]) != 0
          && (v9 = &v8[m_pNext->m_hCaller.m_Index & 0x1FF]) != 0
          && m_Index == v9->m_EHandle.m_Index
          && pCaller == v9->m_pInstance )
        {
          CEntitySystem::RemoveEntityIOEvent(this, m_pNext);
          if ( (m_pNext->m_variantValue.m_flags & 1) != 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pNext->m_variantValue.m_uint64);
            m_pNext->m_variantValue.m_flags &= ~1u;
          }
          m_pNext->m_variantValue.m_uint64 = 0;
          m_pNext->m_variantValue.m_type = 0;
          operator delete(m_pNext);
          if ( v7 == 0 )
            break;
        }
        else if ( v7 == 0 )
        {
          break;
        }
        m_pNext = v7;
      }
    }
    pthread_mutex_unlock(&p_m_eventQueueMutex->m_Mutex);
  }
}


// CEntitySystem::FindFirstEntityHandleByName  (line 2775, @0x00000000030af800, libserver.so)  // inlines: CEntityHandle, FindFirstEntityByName, First, GetEHandle, GetEntryIndex, GetSerialNumber, Init
// calls: EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, EntityInstanceByNameIter_t::Next
// callers: CDevtestHierarchy::Spawn, CGameSceneNode::Spawn, CDOTA_BaseNPC::ComputeGeneratingItem, OnHeroReplacedAsync, CDOTA_BaseNPC_Effigy_BattleCup::Spawn, CDOTA_BaseNPC_Effigy_Statue::Spawn, CEntityClass::UnserializeKey
_WORD *__fastcall CEntitySystem::FindFirstEntityHandleByName(_WORD *a1, CEntitySystem *const this, const char *pName)
{
  CEntityInstance *v4; // rax
  CEntityIdentity *m_pEntity; // rax
  int v6; // edx
  __int16 v7; // cx
  EntityInstanceByNameIter_t v9; // [rsp+10h] [rbp-50h] BYREF

  if ( pName != 0
    && *pName != 0
    && (EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
          &v9,
          pName,
          0,
          0,
          0,
          0,
          EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY),
        v9.m_pCur = 0,
        (v4 = EntityInstanceByNameIter_t::Next(&v9)) != 0)
    && (m_pEntity = v4->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v7 = 0x7FFF;
    else
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *a1 = v7 | *a1 & 0x8000;
    *a1 = (v6 << 15) | *a1 & 0x7FFF;
    return a1;
  }
  else
  {
    *a1 = -1;
    return a1;
  }
}


// CEntitySystem::FindEntityProcedural  (line 2782, @0x00000000030aed70, libserver.so)  // inlines: Attribute_GetEHandleValue, CEntityHandle, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetEntityIdentity, GetEntryIndex, GetInstance, GetIntValue, GetValue<int>, Hash, Head, IndexToIdentity, LookupEntity, MakeStringToken
// calls: V_stricmp_fast, V_sprintf_safe<512ul>, MurmurHash2LowerCase, operator new, RegisterStringToken, __stack_chk_fail
// callers: CEntitySystem::FindEntityProcedural
// strings: "__procedural_adopted_targetname_"
// globals: CEntityHandle::gm_pEntityList
CEntityInstance *__fastcall CEntitySystem::FindEntityProcedural(
        CEntitySystem *const this,
        CEntityInstance *szName,
        CEntityInstance *pSearchingEntity,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller)
{
  const char *v8; // rbx
  int v9; // eax
  CEntityInstance *v10; // rdx
  int v12; // eax
  int v13; // eax
  const char *v14; // rcx
  int v15; // ebx
  CEntityIdentity *m_pEntity; // r12
  _QWORD *p_m_pParentTable; // rax
  int v18; // r13d
  _QWORD *v19; // r11
  _QWORD *v20; // r12
  _QWORD *v21; // rdi
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  CEntityIdentity *v27; // rcx
  CEntityIdentity *v28; // rcx
  uint32 v29; // eax
  uint32 v30; // [rsp+Ch] [rbp-244h]
  char pDynamicAttrName[512]; // [rsp+20h] [rbp-230h] BYREF
  unsigned __int64 v32; // [rsp+228h] [rbp-28h]

  v8 = &this->_vptr_IEntityResourceManifestBuilder + 1;
  v32 = __readfsqword(0x28u);
  v9 = V_stricmp_fast(&this->_vptr_IEntityResourceManifestBuilder + 1, "activator");
  v10 = pSearchingEntity;
  if ( v9 != 0 )
  {
    v12 = V_stricmp_fast(v8, "caller");
    v10 = pActivator;
    if ( v12 != 0 )
    {
      v13 = V_stricmp_fast(v8, "self");
      v10 = szName;
      if ( v13 != 0 && szName != 0 )
      {
        v14 = v8;
        v15 = 0;
        V_sprintf_safe<512ul>(pDynamicAttrName, "%s%s", "__procedural_adopted_targetname_", v14);
        if ( pDynamicAttrName[0] != 0 )
        {
          v29 = MurmurHash2LowerCase(pDynamicAttrName, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
          {
            v30 = v29;
            RegisterStringToken(v29, pDynamicAttrName, 0, 1);
            v29 = v30;
          }
          v15 = v29 & 0x7FFFFFF;
        }
        m_pEntity = szName->m_pEntity;
        p_m_pParentTable = &m_pEntity->m_pAttributes->m_pParentTable;
        if ( p_m_pParentTable == 0 )
        {
          p_m_pParentTable = operator new(0x38u);
          p_m_pParentTable[1] = 0;
          p_m_pParentTable[4] = 0;
          *(p_m_pParentTable + 10) = 0;
          *(p_m_pParentTable + 7) = 0;
          *(p_m_pParentTable + 6) = 64;
          *(p_m_pParentTable + 4) = -1;
          *(p_m_pParentTable + 5) = -2;
          *p_m_pParentTable = 0;
          m_pEntity->m_pAttributes = p_m_pParentTable;
        }
        v18 = *(p_m_pParentTable + 6);
        v19 = p_m_pParentTable;
        v20 = p_m_pParentTable[1];
        while ( 2 )
        {
          while ( 1 )
          {
            v21 = v20;
            if ( v20 != 0 )
              break;
LABEL_28:
            v19 = *v19;
            if ( v19 == 0 )
            {
              v26 = -1;
              goto LABEL_21;
            }
            v18 = *(v19 + 6);
            v20 = v19[1];
          }
LABEL_11:
          v22 = (v18 - 1) & v15;
          while ( 1 )
          {
            v23 = v21[v22 + 1];
            if ( ((v23 ^ v15) & 0x7FFFFFF) == 0 )
              break;
            if ( v23 != *(v19 + 5) )
            {
              v22 = (v18 - 1) & (v22 + 1);
              if ( ((v18 - 1) & v15) != v22 )
                continue;
            }
            v21 = *v21;
            if ( v21 != 0 )
              goto LABEL_11;
            goto LABEL_28;
          }
          v24 = HIDWORD(v21[v22 + 1]);
          if ( v23 < 0 )
          {
            v26 = *(p_m_pParentTable[6] + v24);
          }
          else if ( v23 == v15 || (v25 = v23 & 0x78000000) == 0 )
          {
            v26 = v24;
          }
          else
          {
            if ( v25 != 0x8000000 )
              continue;
            v26 = *&v24;
          }
          break;
        }
        if ( v26 == 0 )
          return 0;
LABEL_21:
        if ( v26 == -1 )
        {
          return 0;
        }
        else
        {
          v10 = 0;
          if ( v26 != -2 )
          {
            v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v26 >> 9) & 0x3F];
            if ( v27 != 0 )
            {
              v28 = &v27[v26 & 0x1FF];
              if ( v28 != 0 && v28->m_EHandle.m_Index == v26 )
                return v28->m_pInstance;
            }
          }
        }
      }
    }
  }
  return v10;
}


// CEntitySystem::FindEntityProcedural  (line 2782, @0x00000000030af040, libserver.so)
// calls: CEntitySystem::FindEntityProcedural
// callers: CGameEntitySystem::FindEntityProcedural
CEntityInstance *__fastcall CEntitySystem::FindEntityProcedural(
        CEntitySystem *const this,
        const char *szName,
        CEntityInstance *pSearchingEntity,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller)
{
  if ( szName != 0 && *szName == 33 )
    return CEntitySystem::FindEntityProcedural(szName, pSearchingEntity, pActivator, pCaller, pCaller);
  else
    return 0;
}


// CEntitySystem::FindEntitiesByNameExact  (line 2819, @0x00000000030af4a0, libserver.so)  // inlines: Element, Find, operator=, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, CEntitySystem::FindEntitiesByNameExact, CEntitySystem::FindEntitiesByName
const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *__fastcall CEntitySystem::FindEntitiesByNameExact(
        CEntitySystem *const this,
        string_t name)
{
  unsigned __int16 v3; // ax
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key.u.m_Id = *name.u.m_Id;
  v3 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_EntityByNameMap.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CEntitySystem::FindEntitiesByNameExact  (line 2833, @0x00000000030af620, libserver.so)  // inlines: CUtlSymbolLarge, Find, FindPooledString, V_strlen, operator==
// calls: strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CEntitySystem::FindEntitiesByNameExact
const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *__fastcall CEntitySystem::FindEntitiesByNameExact(
        CEntitySystem *const this,
        const char *pName)
{
  string_t_table *p_m_pooledStrings; // r13
  int v5; // ecx
  string_t name; // [rsp+0h] [rbp-40h] BYREF
  string_t v8; // [rsp+10h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    if ( *pName == 0 )
      return 0;
    p_m_pooledStrings = &this->m_pooledStrings;
    v5 = strlen(pName);
  }
  else
  {
    p_m_pooledStrings = &this->m_pooledStrings;
    v5 = 0;
  }
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(&name, p_m_pooledStrings, pName, v5);
  if ( name.u.m_Id != 0 )
  {
    v8.u.m_Id = name.u.m_Id;
    return CEntitySystem::FindEntitiesByNameExact(this, &v8);
  }
  return 0;
}


// CEntitySystem::UniqueEntityNameCount  (line 2851, @0x00000000030acac0, libserver.so)
int __fastcall CEntitySystem::UniqueEntityNameCount(const CEntitySystem *const this)
{
  return this->m_EntityByNameMap.m_Tree.m_NumElements;
}


// CEntitySystem::AddEntityToNameMap  (line 2857, @0x00000000030b5770, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityHandle>, Element, Find, FindInsertionPosition, GetEHandle, GetEntityName, GetEntryIndex, GetSerialNumber, GrowMemory, Init, Insert, InsertAt, LeftChild, RightChild, operator(), operator=, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CUtlMemory<CEntityHandle, int>::Grow, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CEntityIdentity::Restore, CEntityIdentity::SetEntityName, CEntityInstance::OnSetDormant
void __fastcall CEntitySystem::AddEntityToNameMap(CEntitySystem *const this, CEntityIdentity *pEntity)
{
  UtlSymLargeId_t m_Id; // r13
  unsigned __int16 v5; // ax
  uint32 v6; // edx
  __int16 v7; // si
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // rbx
  __int64 m_Size; // r12
  int v10; // eax
  CEntityHandle *v11; // rax
  char *v12; // rax
  __int16 v13; // si
  CEntityHandle *m_pMemory; // rdx
  unsigned __int16 m_Root; // bx
  bool v16; // r13
  unsigned __int16 v17; // ax
  unsigned __int16 m_Right; // ax
  char v19; // cl
  bool v20; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle>*>::Node_t,short unsigned int> *v21; // rax
  CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pVec; // [rsp+0h] [rbp-50h]
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)> *p_m_EntityByNameMap; // [rsp+8h] [rbp-48h]
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  m_Id = pEntity->m_name.u.m_Id;
  if ( m_Id != 0 )
  {
    search.key.u.m_Id = pEntity->m_name.u.m_Id;
    p_m_EntityByNameMap = &this->m_EntityByNameMap;
    v5 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_EntityByNameMap.m_Tree,
           &search);
    if ( v5 == 0xFFFF )
    {
      v12 = operator new(0x18u);
      v13 = 0x7FFF;
      *v12 = 0;
      *(v12 + 1) = 0;
      *(v12 + 4) = 0;
      *(v12 + 5) = 0;
      if ( pEntity->m_EHandle.m_Index != -1 )
        v13 = pEntity->m_EHandle.m_Index & 0x7FFF;
      pVec = v12;
      LODWORD(search.key.u.m_Id) = (((pEntity->m_EHandle.m_Index >> 15) - (pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      CUtlMemory<CEntityHandle,int>::Grow((v12 + 8), 1);
      m_pMemory = pVec->m_Memory.m_pMemory;
      ++pVec->m_Size;
      if ( m_pMemory != 0 )
        m_pMemory->m_Index = search.key.u.m_Id;
      m_Root = this->m_EntityByNameMap.m_Tree.m_Root;
      search.key.u.m_Id = m_Id;
      search.elem = pVec;
      if ( m_Root == 0xFFFF )
      {
        m_Root = -1;
        v16 = 0;
      }
      else
      {
        while ( 1 )
        {
          v20 = !this->m_EntityByNameMap.m_Tree.m_LessFunc.m_LessFunc(
                   &search,
                   &this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
          v21 = this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory;
          if ( v20 )
          {
            m_Right = v21[m_Root].m_Right;
            v19 = 0;
          }
          else
          {
            m_Right = v21[m_Root].m_Left;
            v19 = 1;
          }
          if ( m_Right == 0xFFFF )
            break;
          m_Root = m_Right;
        }
        v16 = v19;
      }
      v17 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &p_m_EntityByNameMap->m_Tree,
              &search);
      CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &p_m_EntityByNameMap->m_Tree,
        v17,
        m_Root,
        v16);
      ++this->m_EntityByNameMap.m_Tree.m_NumElements;
    }
    else
    {
      v6 = (pEntity->m_EHandle.m_Index >> 15) - (pEntity->m_flags & 1);
      if ( pEntity->m_EHandle.m_Index == -1 )
        v7 = 0x7FFF;
      else
        v7 = pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(search.key.u.m_Id) = v7 | search.key.u.m_Id & 0x8000;
      LODWORD(search.key.u.m_Id) = (v6 << 15) | search.key.u.m_Id & 0x7FFF;
      elem = this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem;
      m_Size = elem->m_Size;
      v10 = elem->m_Size;
      if ( m_Size == elem->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityHandle,int>::Grow(&elem->m_Memory, 1);
        v10 = elem->m_Size;
      }
      elem->m_Size = v10 + 1;
      v11 = &elem->m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
        v11->m_Index = search.key.u.m_Id;
    }
  }
}


// CEntitySystem::RemoveEntityFromNameMap  (line 2880, @0x00000000030b59c0, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, Element, FastRemove, Find, FindAndFastRemove, FreeNode, GetEHandle, GetEntityName, GetEntryIndex, GetSerialNumber, Init, Purge, RemoveAt, SetLeftChild, SetRightChild, memcpy, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, operator delete, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlMemory<CEntityHandle, int>::Purge
// callers: CEntityIdentity::SetEntityName, CEntityInstance::OnSetDormant, CEntityInstance::UpdateOnRemove, CEntitySystem::OnRemoveEntityFromDatabase
void __fastcall CEntitySystem::RemoveEntityFromNameMap(CEntitySystem *const this, CEntityIdentity *pEntity)
{
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)> *p_m_EntityByNameMap; // rbx
  unsigned __int16 v5; // r14
  uint32 v6; // edx
  __int16 v7; // ax
  __int64 v8; // r12
  int v9; // esi
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle>*>::Node_t,short unsigned int> *m_pMemory; // rax
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // rdi
  int m_Size; // r8d
  CEntityHandle *v13; // rax
  CEntityHandle *v14; // rcx
  int v15; // edx
  int v16; // r8d
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t v17; // r15
  CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> >*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  if ( pEntity->m_name.u.m_Id == 0 )
    return;
  p_m_EntityByNameMap = &this->m_EntityByNameMap;
  search.key.u.m_Id = pEntity->m_name.u.m_Id;
  v5 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_EntityByNameMap.m_Tree,
         &search);
  if ( v5 == 0xFFFF )
    return;
  v6 = (pEntity->m_EHandle.m_Index >> 15) - (pEntity->m_flags & 1);
  v7 = 0x7FFF;
  if ( pEntity->m_EHandle.m_Index != -1 )
    v7 = pEntity->m_EHandle.m_Index & 0x7FFF;
  v8 = v5;
  v9 = (v6 << 15) | v7 & 0x7FFF;
  LODWORD(search.key.u.m_Id) = v9;
  m_pMemory = this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory;
  elem = m_pMemory[v8].m_Data.elem;
  m_Size = elem->m_Size;
  if ( elem->m_Size <= 0 )
  {
    v17 = m_pMemory[v8].m_Data.elem;
LABEL_15:
    if ( m_Size == 0 )
    {
      CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(v17);
      if ( (v17->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityHandle,int>::Purge(&v17->m_Memory);
        if ( (v17->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityHandle,int>::Purge(&v17->m_Memory);
      }
      operator delete(v17);
      CUtlRBTree<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &p_m_EntityByNameMap->m_Tree,
        v5);
      this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory[v5].m_Left = v5;
      this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory[v8].m_Right = this->m_EntityByNameMap.m_Tree.m_FirstFree;
      --this->m_EntityByNameMap.m_Tree.m_NumElements;
      this->m_EntityByNameMap.m_Tree.m_FirstFree = v5;
    }
    return;
  }
  v13 = elem->m_Memory.m_pMemory;
  if ( v13->m_Index == v9 )
  {
    v15 = 0;
LABEL_12:
    v16 = m_Size - 1;
    if ( v15 != v16 )
    {
      v13[v15] = v13[v16];
      v16 = elem->m_Size - 1;
    }
    elem->m_Size = v16;
    v17 = this->m_EntityByNameMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
    m_Size = v17->m_Size;
    goto LABEL_15;
  }
  v14 = elem->m_Memory.m_pMemory;
  v15 = 0;
  while ( ++v15 != m_Size )
  {
    ++v14;
    if ( v14->m_Index == v9 )
    {
      if ( v15 == -1 )
        return;
      goto LABEL_12;
    }
  }
}


// CEntitySystem::FindEntitiesByName  (line 2902, @0x00000000030b09b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlSymbolLarge, CopyArray, CopyConstruct<CEntityHandle>, Element, First, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Init, String, operator[], strchr
// calls: strchr, EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, EntityInstanceByNameIter_t::Next, CUtlMemory<CEntityHandle, int>::Grow, CEntitySystem::FindEntitiesByNameExact, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::SetCount
// callers: CEntitySystem::ServiceEntityIOEvents
const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *__fastcall CEntitySystem::FindEntitiesByName(
        CEntitySystem *const this,
        string_t name,
        CEntityInstance *pSearcher,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pHandles)
{
  const char *v7; // r12
  CEntityIdentity *v8; // rbx
  CEntityInstance *v10; // rax
  int v11; // ecx
  __int16 v12; // ax
  __int64 v13; // r14
  __int16 v14; // dx
  int v15; // eax
  CEntityHandle *v16; // rax
  CEntityIdentity *m_pEntity; // rdx
  const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *EntitiesByNameExact; // rbx
  int m_Size; // r12d
  CEntityHandle *m_pMemory; // rbx
  unsigned __int64 v21; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int16 v25; // cx
  __int64 v26; // rbx
  int v27; // eax
  CEntityHandle *v28; // rax
  int v29; // [rsp+10h] [rbp-70h]
  EntityInstanceByNameIter_t iter; // [rsp+20h] [rbp-60h] BYREF

  v7 = "";
  v8 = *name.u.m_Id;
  if ( *name.u.m_Id != 0 )
    v7 = *name.u.m_pAsString;
  if ( pHandles == 0 )
    return 0;
  if ( *v7 != 33 )
  {
    if ( strchr(v7, 42) == 0 )
    {
      iter.m_pCur = v8;
      EntitiesByNameExact = CEntitySystem::FindEntitiesByNameExact(this, &iter);
      if ( EntitiesByNameExact != 0 )
      {
        CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(pHandles);
        m_Size = EntitiesByNameExact->m_Size;
        m_pMemory = EntitiesByNameExact->m_Memory.m_pMemory;
        CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::SetCount(pHandles, m_Size);
        if ( m_Size > 0 )
        {
          v21 = 0;
          do
          {
            pHandles->m_Memory.m_pMemory[v21 / 4] = m_pMemory[v21 / 4];
            v21 += 4LL;
          }
          while ( v21 != 4LL * (m_Size - 1) + 4 );
        }
      }
LABEL_21:
      if ( pHandles->m_Size > 0 )
        return pHandles;
      return 0;
    }
    EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
      &iter,
      v7,
      0,
      0,
      0,
      0,
      EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
    iter.m_pCur = 0;
    v10 = EntityInstanceByNameIter_t::Next(&iter);
    if ( v10 == 0 )
      goto LABEL_21;
    while ( 1 )
    {
      m_pEntity = v10->m_pEntity;
      if ( m_pEntity != 0 )
        break;
      v13 = pHandles->m_Size;
      v29 = -1;
      v15 = v13;
      if ( v13 == pHandles->m_Memory.m_nAllocationCount )
        goto LABEL_16;
LABEL_11:
      pHandles->m_Size = v15 + 1;
      v16 = &pHandles->m_Memory.m_pMemory[v13];
      if ( v16 != 0 )
        v16->m_Index = v29;
      v10 = EntityInstanceByNameIter_t::Next(&iter);
      if ( v10 == 0 )
        goto LABEL_21;
    }
    v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v13 = pHandles->m_Size;
    v14 = v12 | v29 & 0x8000;
    v15 = v13;
    v29 = (v11 << 15) | v14 & 0x7FFF;
    if ( v13 != pHandles->m_Memory.m_nAllocationCount )
      goto LABEL_11;
LABEL_16:
    CUtlMemory<CEntityHandle,int>::Grow(&pHandles->m_Memory, 1);
    v15 = pHandles->m_Size;
    goto LABEL_11;
  }
  v23 = (*(this->_vptr_IEntityResourceManifestBuilder + 13))(this, v7, pSearcher, pActivator, pCaller);
  if ( v23 != 0 )
  {
    CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(pHandles);
    v24 = *(v23 + 8);
    if ( v24 != 0 )
    {
      v25 = 0x7FFF;
      if ( *(v24 + 16) != -1 )
        v25 = *(v24 + 16) & 0x7FFF;
      LODWORD(iter.m_pCur) = (((*(v24 + 16) >> 15) - (*(v24 + 48) & 1)) << 15) | v25 & 0x7FFF;
    }
    else
    {
      LODWORD(iter.m_pCur) = -1;
    }
    v26 = pHandles->m_Size;
    v27 = pHandles->m_Size;
    if ( v26 == pHandles->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityHandle,int>::Grow(&pHandles->m_Memory, 1);
      v27 = pHandles->m_Size;
    }
    pHandles->m_Size = v27 + 1;
    v28 = &pHandles->m_Memory.m_pMemory[v26];
    if ( v28 != 0 )
      v28->m_Index = iter.m_pCur;
    return pHandles;
  }
  return 0;
}


// CEntitySystem::FindEntityInheritingFrom  (line 2971, @0x00000000030acad0, libserver.so)  // inlines: GetInstance, GetSingleInheritanceBaseClass, SchemaSingleInheritanceDepth, SingleInheritsFromOrIs
// callers: CGameEntitySystem::FindEntityInheritingFromWithin
CEntityInstance *__fastcall CEntitySystem::FindEntityInheritingFrom(
        CEntitySystem *const this,
        CEntityInstance *pStartEntity,
        const CSchemaClassBindingBase *pInheritsFrom)
{
  CEntityIdentity *m_pNext; // r13
  CEntityInstance *m_pInstance; // rbx
  __int64 v6; // rax
  CSchemaClassInfo *m_pClassInfo_N; // rsi
  CSchemaClassInfo *v8; // rcx

  if ( pStartEntity != 0 )
    m_pNext = pStartEntity->m_pEntity->m_pNext;
  else
    m_pNext = this->m_EntityList.m_pFirstActiveEntity;
  for ( ; m_pNext != 0; m_pNext = m_pNext->m_pNext )
  {
    m_pInstance = m_pNext->m_pInstance;
    v6 = (*m_pNext->m_pInstance->_vptr_IHandleEntity)(m_pNext->m_pInstance);
    m_pClassInfo_N = pInheritsFrom->m_pClassInfo_N;
    v8 = *(v6 + 40);
    if ( v8 != 0 )
    {
      if ( v8 == m_pClassInfo_N )
        return m_pInstance;
      while ( v8->m_BaseClasses.m_Data.m_nImplLength != 0 )
      {
        v8 = *(v8->m_BaseClasses.m_Data.m_pImplElements + 1);
        if ( v8 == 0 )
          break;
        if ( m_pClassInfo_N == v8 )
          return m_pInstance;
      }
    }
  }
  return 0;
}


// CEntitySystem::FindEntityByOutputTarget  (line 2986, @0x00000000030acb70, libserver.so)  // inlines: CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetEntityIOOutputs, GetInstance, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::GetEntityIOOutputs, CEntityIOOutput::GetActionForTarget, CUtlMemory<CEntityIOOutput*, int>::Purge, _Unwind_Resume
CEntityInstance *__fastcall CEntitySystem::FindEntityByOutputTarget(
        CEntitySystem *const this,
        CEntityInstance *pStartEntity,
        string_t iTarget)
{
  CEntityIdentity *m_pNext; // r15
  CEntityInstance *m_pInstance; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  CEntityInstance *v9; // [rsp+18h] [rbp-68h]
  string_t searchTarget; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+30h] [rbp-50h] BYREF

  if ( pStartEntity != 0 )
    m_pNext = pStartEntity->m_pEntity->m_pNext;
  else
    m_pNext = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pNext == 0 )
    return 0;
  while ( 1 )
  {
    m_pInstance = m_pNext->m_pInstance;
    outputs.m_Memory.m_pMemory = 0;
    outputs.m_Memory.m_nAllocationCount = 0;
    outputs.m_Memory.m_nGrowSize = 0;
    outputs.m_Size = 0;
    v9 = m_pInstance;
    CEntityIdentity::GetEntityIOOutputs(m_pInstance->m_pEntity, &outputs);
    if ( outputs.m_Size > 0 )
      break;
LABEL_10:
    outputs.m_Size = 0;
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
    }
    m_pNext = m_pNext->m_pNext;
    if ( m_pNext == 0 )
      return 0;
  }
  v6 = 0;
  v7 = 8LL * (outputs.m_Size - 1) + 8;
  while ( 1 )
  {
    searchTarget.u.m_Id = *iTarget.u.m_Id;
    if ( CEntityIOOutput::GetActionForTarget(outputs.m_Memory.m_pMemory[v6 / 8], &searchTarget) != 0 )
      break;
    v6 += 8LL;
    if ( v6 == v7 )
      goto LABEL_10;
  }
  outputs.m_Size = 0;
  if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
  }
  return v9;
}


// EntityInstanceIter_t::EntityInstanceIter_t  (line 3012, @0x00000000030acd10, libserver.so)
// callers: CSource2GameEntities::ResetChangeAccessorsSerialNumbersToZero, CPVSManager::ActiveSpawnGroupChanged, CDOTAGameManager::ReloadGameKeyValues
void __fastcall EntityInstanceIter_t::EntityInstanceIter_t(
        EntityInstanceIter_t *const this,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  this->m_pCur = 0;
  this->m_pFilter = pFilter;
  this->m_iterType = iterType;
}


// EntityInstanceIter_t::EntityInstanceIter_t  (line 3017, @0x00000000030acd30, libserver.so)
void __fastcall EntityInstanceIter_t::EntityInstanceIter_t(
        EntityInstanceIter_t *const this,
        CEntityInstance *pStart,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  CEntityIdentity *m_pEntity; // rax

  if ( pStart != 0 )
  {
    m_pEntity = pStart->m_pEntity;
    this->m_pFilter = pFilter;
    this->m_iterType = iterType;
    this->m_pCur = m_pEntity;
  }
  else
  {
    this->m_pFilter = pFilter;
    this->m_pCur = 0;
    this->m_iterType = iterType;
  }
}


// EntityInstanceIter_t::Next  (line 3022, @0x00000000030acd60, libserver.so)  // inlines: GetInstance
// callers: CSource2GameEntities::ResetChangeAccessorsSerialNumbersToZero, CPVSManager::ActiveSpawnGroupChanged, CDOTAGameManager::ReloadGameKeyValues, EntityInstanceIter_t::First
// globals: g_pEntitySystem
CEntityInstance *__fastcall EntityInstanceIter_t::Next(EntityInstanceIter_t *const this)
{
  CEntityIdentity *m_pNext; // rax

  if ( this->m_pCur != 0 )
  {
    m_pNext = this->m_pCur->m_pNext;
    this->m_pCur = m_pNext;
  }
  else
  {
    if ( this->m_iterType != EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY )
      m_pNext = g_pEntitySystem->m_EntityList.m_dormantList.m_pHead;
    else
      m_pNext = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;
    this->m_pCur = m_pNext;
  }
  if ( this->m_pFilter != 0 )
  {
    if ( m_pNext == 0 )
      return 0;
    while ( (m_pNext->m_flags & 0x200) != 0
         || (*this->m_pFilter->_vptr_IEntityFindFilter)(this->m_pFilter, m_pNext->m_pInstance) == 0 )
    {
      m_pNext = this->m_pCur->m_pNext;
      this->m_pCur = m_pNext;
      if ( m_pNext == 0 )
        return 0;
    }
    m_pNext = this->m_pCur;
  }
  if ( m_pNext == 0 )
    return 0;
  return m_pNext->m_pInstance;
}


// EntityInstanceIter_t::First  (line 3053, @0x00000000030ace00, libserver.so)
// calls: EntityInstanceIter_t::Next
// callers: CSource2GameEntities::ResetChangeAccessorsSerialNumbersToZero, CPVSManager::ActiveSpawnGroupChanged, CDOTAGameManager::ReloadGameKeyValues
CEntityInstance *__fastcall EntityInstanceIter_t::First(EntityInstanceIter_t *const this)
{
  this->m_pCur = 0;
  return EntityInstanceIter_t::Next(this);
}


// EntityInstanceByClassIter_t::EntityInstanceByClassIter_t  (line 3060, @0x00000000030bcd20, libserver.so)  // inlines: EntityInstanceIter_t
// calls: EntityInstanceByClassIter_t::Init
// callers: CFogSystem::InitMasterController, CColorCorrectionSystem::InitMasterController, CFuncLadder::FindNearbyDismountPoints, CC_RespawnPlayer, CPostProcessSystem::InitMasterController, CPropZipline::Activate, CNavGenerator::BeginGeneration
void __fastcall EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
        EntityInstanceByClassIter_t *const this,
        const char *pClassName,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  this->m_pCur = 0;
  this->m_pFilter = pFilter;
  this->m_iterType = iterType;
  EntityInstanceByClassIter_t::Init(this, pClassName);
}


// EntityInstanceByClassIter_t::EntityInstanceByClassIter_t  (line 3066, @0x00000000030bcd40, libserver.so)  // inlines: EntityInstanceIter_t, String
// calls: EntityInstanceByClassIter_t::Init
void __fastcall EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
        EntityInstanceByClassIter_t *const this,
        string_t className,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  const char *v5; // rsi

  this->m_pCur = 0;
  this->m_pFilter = pFilter;
  v5 = "";
  this->m_iterType = iterType;
  if ( *className.u.m_Id != 0 )
    v5 = *className.u.m_pAsString;
  EntityInstanceByClassIter_t::Init(this, v5);
}


// EntityInstanceByClassIter_t::EntityInstanceByClassIter_t  (line 3072, @0x00000000030ace20, libserver.so)  // inlines: EntityInstanceIter_t
// callers: CGameEntitySystem::FindEntityByClassname, CGameEntitySystem::FindEntityByClassnameFast, CDOTA_Modifier_MonkeyKing_Transform::OnCreated
void __fastcall EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
        EntityInstanceByClassIter_t *const this,
        CEntityInstance *pStart,
        const char *pClassName,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  CEntityIdentity *m_pEntity; // rax

  if ( pStart != 0 )
    m_pEntity = pStart->m_pEntity;
  else
    m_pEntity = 0;
  this->m_pCur = m_pEntity;
  this->m_pFilter = pFilter;
  this->m_iterType = iterType;
  this->m_pSearchString = pClassName;
  this->m_pEntityClass = 0;
}


// EntityInstanceByClassIter_t::Init  (line 3080, @0x00000000030bcc60, libserver.so)  // inlines: CUtlString, IsEmpty, strchr, ~CUtlString
// calls: strchr, CEntitySystem::FindClassByDesignName, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, CEntitySystem::ServiceEntityIOEvents
// globals: g_pEntitySystem
void __fastcall EntityInstanceByClassIter_t::Init(EntityInstanceByClassIter_t *const this, const char *pClassName)
{
  CEntitySystem *v4; // rdi
  CUtlString scriptClassName; // [rsp+0h] [rbp-30h] BYREF

  if ( strchr(pClassName, 42) != 0 || this->m_iterType == EntityIterType_t::ENTITY_ENUM_ITERATE_DORMANT_ONLY )
  {
    this->m_pEntityClass = 0;
    this->m_pSearchString = pClassName;
  }
  else
  {
    v4 = g_pEntitySystem;
    this->m_pSearchString = 0;
    scriptClassName.m_pString = 0;
    this->m_pEntityClass = CEntitySystem::FindClassByDesignName(v4, pClassName, &scriptClassName);
    if ( scriptClassName.m_pString != 0 )
    {
      if ( *scriptClassName.m_pString != 0 )
      {
        this->m_pEntityClass = 0;
        this->m_pSearchString = pClassName;
      }
      CUtlString::FreeMemoryBlock(&scriptClassName);
    }
  }
}


// EntityInstanceByClassIter_t::Next  (line 3105, @0x00000000030ace60, libserver.so)  // inlines: GetInstance
// calls: CEntityIdentity::ClassMatches
// callers: CFogSystem::InitMasterController, CGameEntitySystem::FindEntityByClassname, CGameEntitySystem::FindEntityByClassnameFast, CColorCorrectionSystem::InitMasterController, CFuncLadder::FindNearbyDismountPoints, CC_RespawnPlayer, CPostProcessSystem::InitMasterController, CPropZipline::Activate, CDOTA_Modifier_MonkeyKing_Transform::OnCreated, CNavGenerator::BeginGeneration, EntityInstanceByClassIter_t::First, CEntitySystem::ServiceEntityIOEvents
// globals: g_pEntitySystem
CEntityInstance *__fastcall EntityInstanceByClassIter_t::Next(EntityInstanceByClassIter_t *const this)
{
  CEntityClass *m_pEntityClass; // rdx
  CEntityIdentity *m_pCur; // rax
  CEntityIdentity *m_pNext; // rdi
  IEntityFindFilter *m_pFilter; // rdi
  CEntityInstance *v7; // rsi

  m_pEntityClass = this->m_pEntityClass;
  if ( m_pEntityClass == 0 )
  {
    if ( this->m_pSearchString != 0 )
    {
      if ( this->m_pCur != 0 )
      {
        m_pNext = this->m_pCur->m_pNext;
        this->m_pCur = m_pNext;
      }
      else
      {
        if ( this->m_iterType != EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY )
          m_pNext = g_pEntitySystem->m_EntityList.m_dormantList.m_pHead;
        else
          m_pNext = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;
        this->m_pCur = m_pNext;
      }
      if ( m_pNext == 0 )
        return 0;
      while ( 1 )
      {
        if ( (m_pNext->m_flags & 0x200) == 0 && CEntityIdentity::ClassMatches(m_pNext, this->m_pSearchString) )
        {
          m_pFilter = this->m_pFilter;
          if ( m_pFilter == 0 )
            break;
          v7 = this->m_pCur != 0 ? this->m_pCur->m_pInstance : 0LL;
          if ( (*m_pFilter->_vptr_IEntityFindFilter)(m_pFilter, v7) != 0 )
            break;
        }
        m_pNext = this->m_pCur->m_pNext;
        this->m_pCur = m_pNext;
        if ( m_pNext == 0 )
          return 0;
      }
    }
LABEL_22:
    m_pCur = this->m_pCur;
    goto LABEL_23;
  }
  if ( this->m_pCur != 0 )
    m_pCur = this->m_pCur->m_pNextByClass;
  else
    m_pCur = m_pEntityClass->m_pFirstByClass;
  this->m_pCur = m_pCur;
  if ( this->m_pFilter != 0 )
  {
    if ( m_pCur == 0 )
      return 0;
    while ( (m_pCur->m_flags & 0x200) != 0
         || (*this->m_pFilter->_vptr_IEntityFindFilter)(this->m_pFilter, m_pCur->m_pInstance) == 0 )
    {
      m_pCur = this->m_pCur->m_pNextByClass;
      this->m_pCur = m_pCur;
      if ( m_pCur == 0 )
        return 0;
    }
    goto LABEL_22;
  }
LABEL_23:
  if ( m_pCur == 0 )
    return 0;
  return m_pCur->m_pInstance;
}


// EntityInstanceByClassIter_t::First  (line 3166, @0x00000000030acfa0, libserver.so)
// calls: EntityInstanceByClassIter_t::Next
CEntityInstance *__fastcall EntityInstanceByClassIter_t::First(EntityInstanceByClassIter_t *const this)
{
  this->m_pCur = 0;
  return EntityInstanceByClassIter_t::Next(this);
}


// EntityInstanceByNameIter_t::EntityInstanceByNameIter_t  (line 3173, @0x00000000030af6b0, libserver.so)  // inlines: CUtlSymbolLarge, EntityInstanceIter_t, Find, FindPooledString, V_strlen, strchr
// calls: strchr, strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CEntitySystem::FindEntitiesByNameExact
// callers: CEntFireAutoCompletionFunctor::CommandCompletionCallback, CSoundEventEntity::UpdateSourceEntity, CEntitySystem::FindFirstEntityHandleByName, CEntitySystem::FindEntitiesByName
// globals: g_pEntitySystem
void __fastcall EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
        EntityInstanceByNameIter_t *const this,
        const char *pEntityName,
        CEntityInstance *pSearcher,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  CEntityInstance *v9; // rax
  CEntitySystem *v10; // r13
  int v11; // eax
  CEntitySystem *v12; // rdi
  UtlSymLargeId_t m_Id; // rax
  const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *EntitiesByNameExact; // rax
  int m_Size; // eax
  string_t entityName; // [rsp+0h] [rbp-40h] BYREF
  string_t name; // [rsp+10h] [rbp-30h] BYREF

  this->m_pCur = 0;
  this->m_pFilter = pFilter;
  this->m_iterType = iterType;
  if ( *pEntityName == 33 )
  {
    this->m_pSearchString = 0;
    this->m_pNameList = 0;
    v9 = (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 13))(
           g_pEntitySystem,
           pEntityName,
           pSearcher,
           pActivator,
           pCaller);
    this->m_nStartingNameListCount = 0;
    this->m_pProceduralEntity = v9;
    this->m_nCurNameInList = 0;
    return;
  }
  this->m_pProceduralEntity = 0;
  if ( strchr(pEntityName, 42) != 0 || iterType == EntityIterType_t::ENTITY_ENUM_ITERATE_DORMANT_ONLY )
  {
    this->m_pSearchString = pEntityName;
    this->m_pNameList = 0;
    this->m_nStartingNameListCount = 0;
    this->m_nCurNameInList = 0;
  }
  else
  {
    v10 = g_pEntitySystem;
    if ( *pEntityName != 0 )
    {
      v11 = strlen(pEntityName);
      CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(
        &entityName,
        &v10->m_pooledStrings,
        pEntityName,
        v11);
      v12 = g_pEntitySystem;
      m_Id = entityName.u.m_Id;
    }
    else
    {
      entityName.u.m_Id = 0;
      v12 = g_pEntitySystem;
      m_Id = 0;
    }
    this->m_pSearchString = 0;
    name.u.m_Id = m_Id;
    EntitiesByNameExact = CEntitySystem::FindEntitiesByNameExact(v12, &name);
    this->m_nCurNameInList = 0;
    this->m_pNameList = EntitiesByNameExact;
    if ( EntitiesByNameExact == 0 )
    {
      this->m_nStartingNameListCount = 0;
      goto LABEL_11;
    }
    m_Size = EntitiesByNameExact->m_Size;
    this->m_nStartingNameListCount = m_Size;
    if ( m_Size == 0 )
LABEL_11:
      this->m_pNameList = 0;
  }
}


// EntityInstanceByNameIter_t::EntityInstanceByNameIter_t  (line 3210, @0x00000000030af500, libserver.so)  // inlines: CUtlSymbolLarge, EntityInstanceIter_t, String, strchr
// calls: strchr, CEntitySystem::FindEntitiesByNameExact
// callers: CTonemapTrigger::Spawn
// globals: g_pEntitySystem
void __fastcall EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
        EntityInstanceByNameIter_t *const this,
        string_t entityName,
        CEntityInstance *pSearcher,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  const char *v8; // r12
  const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *EntitiesByNameExact; // rax
  int m_Size; // eax
  CEntitySystem *v12; // rdi
  CEntityInstance *v13; // rax
  string_t name; // [rsp+0h] [rbp-30h] BYREF

  v8 = "";
  this->m_pCur = 0;
  this->m_pFilter = pFilter;
  this->m_iterType = iterType;
  if ( *entityName.u.m_Id != 0 )
    v8 = *entityName.u.m_pAsString;
  if ( *v8 == 33 )
  {
    v12 = g_pEntitySystem;
    this->m_pSearchString = 0;
    this->m_pNameList = 0;
    v13 = (*(v12->_vptr_IEntityResourceManifestBuilder + 13))(v12, v8, pSearcher, pActivator, pCaller);
    this->m_nStartingNameListCount = 0;
    this->m_pProceduralEntity = v13;
    this->m_nCurNameInList = 0;
  }
  else
  {
    this->m_pProceduralEntity = 0;
    if ( strchr(v8, 42) != 0 || iterType == EntityIterType_t::ENTITY_ENUM_ITERATE_DORMANT_ONLY )
    {
      this->m_pSearchString = v8;
      this->m_pNameList = 0;
      this->m_nStartingNameListCount = 0;
      this->m_nCurNameInList = 0;
    }
    else
    {
      this->m_pSearchString = 0;
      name.u.m_Id = *entityName.u.m_Id;
      EntitiesByNameExact = CEntitySystem::FindEntitiesByNameExact(g_pEntitySystem, &name);
      this->m_nCurNameInList = 0;
      this->m_pNameList = EntitiesByNameExact;
      if ( EntitiesByNameExact == 0 )
      {
        this->m_nStartingNameListCount = 0;
        goto LABEL_10;
      }
      m_Size = EntitiesByNameExact->m_Size;
      this->m_nStartingNameListCount = m_Size;
      if ( m_Size == 0 )
LABEL_10:
        this->m_pNameList = 0;
    }
  }
}


// EntityInstanceByNameIter_t::EntityInstanceByNameIter_t  (line 3248, @0x00000000030acfc0, libserver.so)  // inlines: EntityInstanceIter_t
// callers: CGameEntitySystem::FindEntityByName
// globals: g_pEntitySystem
void __fastcall EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
        EntityInstanceByNameIter_t *const this,
        CEntityInstance *pStart,
        const char *pEntityName,
        CEntityInstance *pSearcher,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  CEntityIdentity *m_pEntity; // rsi
  CEntitySystem *v10; // rdi

  if ( pStart != 0 )
    m_pEntity = pStart->m_pEntity;
  else
    m_pEntity = 0;
  this->m_pCur = m_pEntity;
  this->m_nStartingNameListCount = 0;
  this->m_nCurNameInList = 0;
  this->m_pFilter = pFilter;
  this->m_iterType = iterType;
  if ( *pEntityName == 33 )
  {
    v10 = g_pEntitySystem;
    this->m_pSearchString = 0;
    this->m_pNameList = 0;
    this->m_pProceduralEntity = (*(v10->_vptr_IEntityResourceManifestBuilder + 13))(
                                  v10,
                                  pEntityName,
                                  pSearcher,
                                  pActivator,
                                  pCaller);
  }
  else
  {
    this->m_pProceduralEntity = 0;
    this->m_pSearchString = pEntityName;
    this->m_pNameList = 0;
  }
}


// EntityInstanceByNameIter_t::EntityInstanceByNameIter_t  (line 3270, @0x00000000030ad060, libserver.so)  // inlines: EntityInstanceIter_t, String
// callers: CGameEntitySystem::FindEntityByName
// globals: g_pEntitySystem
void __fastcall EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
        EntityInstanceByNameIter_t *const this,
        CEntityInstance *pStart,
        string_t entityName,
        CEntityInstance *pSearcher,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        IEntityFindFilter *pFilter,
        EntityIterType_t iterType)
{
  CEntityIdentity *m_pEntity; // rax
  const char *v10; // rsi
  CEntitySystem *v11; // rdi

  if ( pStart != 0 )
    m_pEntity = pStart->m_pEntity;
  else
    m_pEntity = 0;
  this->m_pCur = m_pEntity;
  v10 = "";
  this->m_nStartingNameListCount = 0;
  this->m_nCurNameInList = 0;
  this->m_pFilter = pFilter;
  this->m_iterType = iterType;
  if ( *entityName.u.m_Id != 0 )
    v10 = *entityName.u.m_pAsString;
  if ( *v10 == 33 )
  {
    v11 = g_pEntitySystem;
    this->m_pSearchString = 0;
    this->m_pNameList = 0;
    this->m_pProceduralEntity = (*(v11->_vptr_IEntityResourceManifestBuilder + 13))(
                                  v11,
                                  v10,
                                  pSearcher,
                                  pActivator,
                                  pCaller);
  }
  else
  {
    this->m_pProceduralEntity = 0;
    this->m_pSearchString = v10;
    this->m_pNameList = 0;
  }
}


// EntityInstanceByNameIter_t::Next  (line 3294, @0x00000000030ad110, libserver.so)  // inlines: Element, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityIdentity*, operator[]
// calls: CEntityIdentity::NameMatches
// callers: CGameEntitySystem::FindEntityByName, EntityInstanceByNameIter_t::First, CEntitySystem::FindFirstEntityHandleByName, CEntitySystem::FindEntitiesByName
// globals: CEntityHandle::gm_pEntityList, g_pEntitySystem
CEntityInstance *__fastcall EntityInstanceByNameIter_t::Next(EntityInstanceByNameIter_t *const this)
{
  CEntityInstance *m_pProceduralEntity; // rsi
  const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *m_pNameList; // rdx
  int m_nCurNameInList; // eax
  int v6; // eax
  CEntityHandle *v7; // rcx
  CEntityIdentity *m_pCur; // rax
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rcx
  IEntityFindFilter *m_pFilter; // rdi
  IEntityFindFilter *v12; // rdi
  CEntityIdentity *m_pNext; // rdi
  IEntityFindFilter *v14; // rdi
  CEntityInstance *v15; // rsi

  m_pProceduralEntity = this->m_pProceduralEntity;
  if ( m_pProceduralEntity == 0 )
  {
    m_pNameList = this->m_pNameList;
    if ( m_pNameList != 0 )
    {
      if ( this->m_pCur != 0 )
        m_nCurNameInList = this->m_nCurNameInList;
      else
        m_nCurNameInList = this->m_nStartingNameListCount;
      v6 = m_nCurNameInList - 1;
      this->m_nCurNameInList = v6;
      if ( v6 < 0 )
        goto LABEL_3;
      while ( 1 )
      {
        v7 = &m_pNameList->m_Memory.m_pMemory[v6];
        m_pCur = 0;
        m_Index = v7->m_Index;
        if ( v7->m_Index + 2 > 1 )
        {
          m_Index_low = LOWORD(v7->m_Index);
          m_pCur = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( m_pCur != 0 )
          {
            m_pCur += m_Index_low & 0x1FF;
            if ( m_pCur != 0 && m_Index != m_pCur->m_EHandle.m_Index )
              m_pCur = 0;
          }
        }
        this->m_pCur = m_pCur;
        if ( (m_pCur->m_flags & 0x200) == 0 )
        {
          m_pFilter = this->m_pFilter;
          if ( m_pFilter == 0 )
            return m_pCur->m_pInstance;
          if ( (*m_pFilter->_vptr_IEntityFindFilter)(m_pFilter, m_pCur->m_pInstance) != 0 )
            break;
        }
        v6 = this->m_nCurNameInList - 1;
        this->m_nCurNameInList = v6;
        if ( v6 < 0 )
          goto LABEL_3;
        m_pNameList = this->m_pNameList;
      }
    }
    else if ( this->m_pSearchString != 0 )
    {
      if ( this->m_pCur != 0 )
      {
        m_pNext = this->m_pCur->m_pNext;
        this->m_pCur = m_pNext;
      }
      else
      {
        if ( this->m_iterType != EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY )
          m_pNext = g_pEntitySystem->m_EntityList.m_dormantList.m_pHead;
        else
          m_pNext = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;
        this->m_pCur = m_pNext;
      }
      if ( m_pNext == 0 )
        return 0;
      while ( 1 )
      {
        if ( (m_pNext->m_flags & 0x200) == 0
          && m_pNext->m_name.u.m_Id != 0
          && CEntityIdentity::NameMatches(m_pNext, this->m_pSearchString) )
        {
          v14 = this->m_pFilter;
          if ( v14 == 0 )
            break;
          v15 = this->m_pCur != 0 ? this->m_pCur->m_pInstance : 0LL;
          if ( (*v14->_vptr_IEntityFindFilter)(v14, v15) != 0 )
            break;
        }
        m_pNext = this->m_pCur->m_pNext;
        this->m_pCur = m_pNext;
        if ( m_pNext == 0 )
          return 0;
      }
    }
    goto LABEL_17;
  }
  if ( this->m_pCur != 0 )
  {
LABEL_3:
    this->m_pCur = 0;
    return 0;
  }
  v12 = this->m_pFilter;
  if ( v12 != 0 )
  {
    if ( (*v12->_vptr_IEntityFindFilter)(v12) == 0 )
    {
LABEL_17:
      m_pCur = this->m_pCur;
      goto LABEL_18;
    }
    m_pProceduralEntity = this->m_pProceduralEntity;
  }
  m_pCur = m_pProceduralEntity->m_pEntity;
  this->m_pCur = m_pCur;
LABEL_18:
  if ( m_pCur == 0 )
    return 0;
  return m_pCur->m_pInstance;
}


// EntityInstanceByNameIter_t::First  (line 3380, @0x00000000030ad310, libserver.so)
// calls: EntityInstanceByNameIter_t::Next
// callers: CTonemapTrigger::Spawn, CEntFireAutoCompletionFunctor::CommandCompletionCallback, CSoundEventEntity::UpdateSourceEntity
CEntityInstance *__fastcall EntityInstanceByNameIter_t::First(EntityInstanceByNameIter_t *const this)
{
  this->m_pCur = 0;
  return EntityInstanceByNameIter_t::Next(this);
}


// CEntitySystem::ServiceEntityIOEvents  (line 3389, @0x00000000030bcd70, libserver.so)  // inlines: AcceptInput, AddToTail, CAutoLockT, CEntityHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ClassInheritsFrom, CopyConstruct<CEntityHandle>, Element, EntityInstanceByClassIter_t, EntityInstanceIter_t, First, Free, GetClassNameAsCStr, GetComponent, GetEHandle, GetEntityIdentity, GetEntityNameAsCStr, GetEntryIndex, GetInstance, GetRuntimeIndex, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsValid, Lock, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, String, Unlock, curtime, operator CEntityIdentity*, operator CEntityInstance*, operator bool, operator->, operator[], ~CAutoLockT, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVariantBase, ~EntityIOQueuePrioritizedEvent_t
// calls: pthread_mutex_lock, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::~CUtlVectorBase, EntityInstanceByClassIter_t::Init, EntityInstanceByClassIter_t::Next, CEntitySystem::FindComponentTypeByName, CEntityIdentity::AcceptInput, CEntityHandle::operator CEntityInstance*, CEntitySystem::FindEntitiesByName, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlMemory<CEntityHandle, int>::Purge, CEntityIdentity::ClassInheritsFrom, LoggingSystem_IsChannelEnabled (20 total)
// callers: CSource2Server::GameFrame
// strings: "target input not found", "target entity not found", "unhandled input: (%s) -> (%s), from (%s,%s); %s\n", "Encountered unknown entity i/o target type!\n"
// globals: gpGlobalsBase, CEntityHandle::gm_pEntityList, jpt_30BCE9C
void __fastcall CEntitySystem::ServiceEntityIOEvents(CEntitySystem *const this)
{
  EntityIOQueuePrioritizedEvent_t *m_pNext; // r15
  CGlobalVarsBase *v3; // rbx
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  char v8; // bl
  char v9; // r13
  const char *v10; // rsi
  const char *v11; // rax
  CEntityInstance *i; // rax
  int v13; // edx
  __int16 v14; // cx
  __int64 m_Size; // rbx
  int v16; // eax
  CEntityHandle *v17; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *v19; // rsi
  CEntityComponentHelper *ComponentTypeByName; // rax
  CEntityIdentity *v21; // r12
  __int64 m_nRuntimeIndex; // rax
  char v23; // r13
  uint32 v24; // eax
  CEntityInstance *v25; // rdx
  CEntityIdentity *v26; // rsi
  CEntityIdentity *v27; // rsi
  __int64 m_nBaseOffset; // rdx
  char *v29; // rcx
  uint32 v30; // eax
  CEntityInstance *v31; // rcx
  unsigned int v32; // r9d
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  CEntityInstance *v35; // rax
  CEntityInstance *v36; // rbx
  CEntityInstance *v37; // r12
  CEntityInstance *v38; // rax
  const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *EntitiesByName; // rax
  const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *v40; // r14
  __int64 v41; // r13
  int v42; // r12d
  CEntityHandle *v43; // rax
  CEntityIdentity *v44; // rcx
  CEntityIdentity *v45; // rcx
  uint32 v46; // r8d
  CEntityInstance *v47; // rcx
  unsigned int v48; // r9d
  CEntityIdentity *v49; // rdx
  CEntityIdentity *v50; // rdx
  uint32 v51; // edi
  CEntityInstance *v52; // rdx
  CEntityIdentity *v53; // r8
  CEntityIdentity *v54; // r8
  CEntityIdentity *v55; // rdi
  bool v56; // zf
  char v57; // al
  CEntityIdentity *m_pFirstActiveEntity; // r12
  const char *m_pAsString; // rsi
  uint32 v60; // eax
  CEntityInstance *m_pInstance; // rcx
  unsigned int m_nOutputID; // r9d
  CEntityIdentity *v63; // rdx
  CEntityIdentity *v64; // rdx
  uint32 v65; // eax
  CEntityInstance *v66; // rdx
  CEntityIdentity *v67; // rsi
  CEntityIdentity *v68; // rsi
  char v69; // al
  uint32 v70; // edx
  const char *v71; // r14
  const char *v72; // r12
  const char *v73; // r13
  CEntityIdentity *v74; // rcx
  CEntityIdentity *v75; // rax
  const char *v76; // r8
  const char *v77; // rcx
  unsigned __int64 v78; // r12
  char v79; // r14
  __int64 v80; // r13
  CEntityHandle *v81; // rdx
  uint32 v82; // eax
  __int16 v83; // di
  CEntityIdentity *v84; // rdx
  CEntityIdentity *v85; // rdi
  uint32 v86; // r8d
  CEntityInstance *v87; // rcx
  unsigned int v88; // r9d
  CEntityIdentity *v89; // rax
  CEntityIdentity *v90; // rax
  uint32 v91; // eax
  CEntityInstance *v92; // rdx
  CEntityIdentity *v93; // rsi
  CEntityIdentity *v94; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CEntityInstance *v96; // r10
  uint32 v97; // eax
  CEntityInstance *v98; // rcx
  unsigned int v99; // r9d
  CEntityIdentity *v100; // rdx
  CEntityIdentity *v101; // rdx
  uint32 v102; // eax
  CEntityInstance *v103; // rdx
  CEntityIdentity *v104; // rsi
  CEntityIdentity *v105; // rsi
  CEntityIdentity *v106; // rdi
  CThreadMutex *generated_id_3395; // [rsp+18h] [rbp-1D8h]
  __int64 v108; // [rsp+30h] [rbp-1C0h]
  float m_flCurrentTime; // [rsp+44h] [rbp-1ACh]
  __int64 bTargetInputFound; // [rsp+48h] [rbp-1A8h]
  char bTargetInputFounda; // [rsp+48h] [rbp-1A8h]
  string_t name; // [rsp+60h] [rbp-190h] BYREF
  CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > temp; // [rsp+70h] [rbp-180h] BYREF
  CUtlVectorFixedGrowable<CEntityHandle,64ul> foundEntities; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v116; // [rsp+1B8h] [rbp-38h]

  v116 = __readfsqword(0x28u);
  generated_id_3395 = &this->m_eventQueueMutex;
  pthread_mutex_lock(&this->m_eventQueueMutex.m_Mutex);
  m_pNext = this->m_events.m_pNext;
  v3 = gpGlobalsBase;
  if ( gpGlobalsBase != 0 )
  {
    if ( !gpGlobalsBase->m_bEnableAssertions && !gpGlobalsBase->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobalsBase->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  while ( m_pNext != 0 && m_flCurrentTime >= m_pNext->m_flFireTime )
  {
    m_Index = m_pNext->m_hEntTarget.m_Index;
    v5 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hEntTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[m_pNext->m_hEntTarget.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (v96 = v7->m_pInstance, v7->m_pInstance == 0) )
    {
      switch ( m_pNext->m_targetType )
      {
        case EntityIOTargetType_t::ENTITY_IO_TARGET_CLASSNAME:
          goto LABEL_13;
        case EntityIOTargetType_t::ENTITY_IO_TARGET_CLASSNAME_DERIVES_FROM:
          m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
          if ( m_pFirstActiveEntity == 0 )
            goto LABEL_124;
          v23 = 0;
          v8 = 0;
          do
          {
            while ( 1 )
            {
              m_pAsString = m_pNext->m_pTarget.u.m_pAsString;
              if ( m_pAsString == m_pFirstActiveEntity->m_designerName.u.m_pAsString )
                break;
              if ( m_pAsString == 0 )
                m_pAsString = "";
              if ( CEntityIdentity::ClassInheritsFrom(m_pFirstActiveEntity, m_pAsString) )
                break;
              m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
              if ( m_pFirstActiveEntity == 0 )
                goto LABEL_100;
            }
            v60 = m_pNext->m_hCaller.m_Index;
            m_pInstance = 0;
            m_nOutputID = m_pNext->m_nOutputID;
            if ( v60 + 2 > 1 )
            {
              v63 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hCaller.m_Index) >> 9) & 0x3F];
              if ( v63 != 0 )
              {
                v64 = &v63[m_pNext->m_hCaller.m_Index & 0x1FF];
                if ( v64 != 0 && v60 == v64->m_EHandle.m_Index )
                  m_pInstance = v64->m_pInstance;
              }
            }
            v65 = m_pNext->m_hActivator.m_Index;
            v66 = 0;
            if ( v65 + 2 > 1 )
            {
              v67 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hActivator.m_Index) >> 9) & 0x3F];
              if ( v67 != 0 )
              {
                v68 = &v67[m_pNext->m_hActivator.m_Index & 0x1FF];
                if ( v68 != 0 && v65 == v68->m_EHandle.m_Index )
                  v66 = v68->m_pInstance;
              }
            }
            *&temp.m_Size = m_pNext->m_pTargetInput.u.m_Id;
            v69 = CEntityIdentity::AcceptInput(
                    m_pFirstActiveEntity,
                    &temp,
                    v66,
                    m_pInstance,
                    &m_pNext->m_variantValue,
                    m_nOutputID);
            m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
            if ( v69 != 0 )
              v23 = 1;
            v8 = 1;
          }
          while ( m_pFirstActiveEntity != 0 );
LABEL_100:
          v9 = v8 ^ 1 | v23 ^ 1;
          goto LABEL_101;
        case EntityIOTargetType_t::ENTITY_IO_TARGET_ENTITYNAME:
        case EntityIOTargetType_t::ENTITY_IO_TARGET_SPECIAL_ACTIVATOR:
        case EntityIOTargetType_t::ENTITY_IO_TARGET_SPECIAL_CALLER:
        case EntityIOTargetType_t::ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME:
          v35 = CEntityHandle::operator CEntityInstance *(&m_pNext->m_hCaller);
          temp.m_Size = 0;
          temp.m_Memory.m_pMemory = 0;
          v36 = v35;
          temp.m_Memory.m_nAllocationCount = 0;
          temp.m_Memory.m_nGrowSize = 0;
          v37 = CEntityHandle::operator CEntityInstance *(&m_pNext->m_hCaller);
          v38 = CEntityHandle::operator CEntityInstance *(&m_pNext->m_hActivator);
          name.u.m_Id = m_pNext->m_pTarget.u.m_Id;
          EntitiesByName = CEntitySystem::FindEntitiesByName(this, &name, v36, v38, v37, &temp);
          v40 = EntitiesByName;
          if ( EntitiesByName != 0 )
          {
            if ( EntitiesByName->m_Size <= 0 )
            {
              v9 = 1;
              v8 = 0;
            }
            else
            {
              v41 = 0;
              v42 = 0;
              bTargetInputFounda = 0;
              v8 = 0;
              do
              {
                while ( 1 )
                {
                  v43 = &v40->m_Memory.m_pMemory[v41];
                  if ( v43->m_Index + 2 > 1 )
                  {
                    v44 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v43->m_Index) >> 9) & 0x3F];
                    if ( v44 != 0 )
                    {
                      v45 = &v44[v43->m_Index & 0x1FF];
                      if ( v45 != 0 && v43->m_Index == v45->m_EHandle.m_Index )
                        break;
                    }
                  }
                  ++v42;
                  ++v41;
                  if ( v40->m_Size <= v42 )
                    goto LABEL_76;
                }
                v46 = m_pNext->m_hCaller.m_Index;
                v47 = 0;
                v48 = m_pNext->m_nOutputID;
                if ( v46 + 2 > 1 )
                {
                  v49 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hCaller.m_Index) >> 9)
                                                                       & 0x3F];
                  if ( v49 != 0 )
                  {
                    v50 = &v49[m_pNext->m_hCaller.m_Index & 0x1FF];
                    if ( v50 != 0 && v46 == v50->m_EHandle.m_Index )
                      v47 = v50->m_pInstance;
                  }
                }
                v51 = m_pNext->m_hActivator.m_Index;
                v52 = 0;
                if ( v51 + 2 > 1 )
                {
                  v53 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hActivator.m_Index) >> 9)
                                                                       & 0x3F];
                  if ( v53 != 0 )
                  {
                    v54 = &v53[m_pNext->m_hActivator.m_Index & 0x1FF];
                    if ( v54 != 0 && v51 == v54->m_EHandle.m_Index )
                      v52 = v54->m_pInstance;
                  }
                }
                name.u.m_Id = m_pNext->m_pTargetInput.u.m_Id;
                v55 = 0;
                if ( v43->m_Index + 2 > 1 )
                {
                  v55 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v43->m_Index) >> 9) & 0x3F];
                  if ( v55 != 0 )
                  {
                    v55 += v43->m_Index & 0x1FF;
                    if ( v55 != 0 && v43->m_Index != v55->m_EHandle.m_Index )
                      v55 = 0;
                  }
                }
                v56 = CEntityIdentity::AcceptInput(v55, &name, v52, v47, &m_pNext->m_variantValue, v48) == 0;
                v57 = bTargetInputFounda;
                v8 = 1;
                if ( !v56 )
                  v57 = 1;
                ++v42;
                ++v41;
                bTargetInputFounda = v57;
              }
              while ( v40->m_Size > v42 );
LABEL_76:
              v9 = bTargetInputFounda ^ 1 | v8 ^ 1;
            }
          }
          else
          {
            v8 = 0;
            v9 = 1;
            if ( m_pNext->m_targetType == EntityIOTargetType_t::ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME )
            {
              CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::~CUtlVectorBase(&temp);
LABEL_13:
              foundEntities.m_Memory.m_nAllocationCount = 64;
              v10 = "";
              foundEntities.m_Memory.m_nGrowSize = 0x80000000;
              foundEntities.m_Size = 0;
              foundEntities.m_Memory.m_pMemory = &foundEntities.m_Memory.m_FixedMemory;
              v11 = m_pNext->m_pTarget.u.m_pAsString;
              memset(&temp, 0, 20);
              if ( v11 != 0 )
                v10 = v11;
              EntityInstanceByClassIter_t::Init(&temp, v10);
              *&temp.m_Size = 0;
              for ( i = EntityInstanceByClassIter_t::Next(&temp); i != 0; i = EntityInstanceByClassIter_t::Next(&temp) )
              {
                m_pEntity = i->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v14 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(name.u.m_Id) = v14 | name.u.m_Id & 0x8000;
                  LODWORD(name.u.m_Id) = (v13 << 15) | name.u.m_Id & 0x7FFF;
                }
                else
                {
                  LODWORD(name.u.m_Id) = -1;
                }
                m_Size = foundEntities.m_Size;
                v16 = foundEntities.m_Size;
                if ( foundEntities.m_Size == foundEntities.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CEntityHandle,int>::Grow(&foundEntities.m_Memory, 1);
                  v16 = foundEntities.m_Size;
                }
                foundEntities.m_Size = v16 + 1;
                v17 = &foundEntities.m_Memory.m_pMemory[m_Size];
                if ( v17 != 0 )
                  v17->m_Index = name.u.m_Id;
              }
              v8 = 0;
              v9 = 1;
              if ( foundEntities.m_Size > 0 )
              {
                v78 = 0;
                v79 = 0;
                v80 = 4LL * (foundEntities.m_Size - 1) + 4;
                v8 = 0;
                do
                {
                  while ( 1 )
                  {
                    v81 = &foundEntities.m_Memory.m_pMemory[v78 / 4];
                    v82 = foundEntities.m_Memory.m_pMemory[v78 / 4].m_Index;
                    if ( v82 + 2 > 1 )
                    {
                      v83 = v81->m_Index;
                      v84 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v81->m_Index) >> 9) & 0x3F];
                      if ( v84 != 0 )
                      {
                        v85 = &v84[v83 & 0x1FF];
                        if ( v85 != 0 && v82 == v85->m_EHandle.m_Index )
                          break;
                      }
                    }
                    v78 += 4LL;
                    if ( v78 == v80 )
                      goto LABEL_145;
                  }
                  v86 = m_pNext->m_hCaller.m_Index;
                  v87 = 0;
                  v88 = m_pNext->m_nOutputID;
                  if ( v86 + 2 > 1 )
                  {
                    v89 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hCaller.m_Index) >> 9)
                                                                         & 0x3F];
                    if ( v89 != 0 )
                    {
                      v90 = &v89[m_pNext->m_hCaller.m_Index & 0x1FF];
                      if ( v90 != 0 && v86 == v90->m_EHandle.m_Index )
                        v87 = v90->m_pInstance;
                    }
                  }
                  v91 = m_pNext->m_hActivator.m_Index;
                  v92 = 0;
                  if ( v91 + 2 > 1 )
                  {
                    v93 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hActivator.m_Index) >> 9)
                                                                         & 0x3F];
                    if ( v93 != 0 )
                    {
                      v94 = &v93[m_pNext->m_hActivator.m_Index & 0x1FF];
                      if ( v94 != 0 && v91 == v94->m_EHandle.m_Index )
                        v92 = v94->m_pInstance;
                    }
                  }
                  name.u.m_Id = m_pNext->m_pTargetInput.u.m_Id;
                  v8 = 1;
                  if ( CEntityIdentity::AcceptInput(v85, &name, v92, v87, &m_pNext->m_variantValue, v88) != 0 )
                    v79 = 1;
                  v78 += 4LL;
                }
                while ( v78 != v80 );
LABEL_145:
                v9 = v79 ^ 1 | v8 ^ 1;
              }
              foundEntities.m_Size = 0;
              CUtlMemory<CEntityHandle,int>::ConvertToExternalMemory(
                &foundEntities.m_Memory,
                &foundEntities.m_Memory.m_FixedMemory,
                64,
                0,
                1,
                0x3FFFFFFFu);
              if ( (foundEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CEntityHandle,int>::Purge(&foundEntities.m_Memory);
              goto LABEL_101;
            }
          }
          CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&temp);
          if ( (temp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CEntityHandle,int>::Purge(&temp.m_Memory);
            if ( (temp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CEntityHandle,int>::Purge(&temp.m_Memory);
          }
LABEL_101:
          if ( v9 == 0 )
            goto LABEL_118;
          if ( v8 != 0 )
            goto LABEL_103;
LABEL_123:
          v5 = CEntityHandle::gm_pEntityList;
LABEL_124:
          v71 = "target entity not found";
LABEL_108:
          v70 = m_pNext->m_hCaller.m_Index;
          if ( v70 + 2 > 1 )
            goto LABEL_109;
          goto LABEL_104;
        case EntityIOTargetType_t::ENTITY_IO_TARGET_CONTAINS_COMPONENT:
          v19 = "";
          if ( m_pNext->m_pTarget.u.m_Id != 0 )
            v19 = m_pNext->m_pTarget.u.m_pAsString;
          ComponentTypeByName = CEntitySystem::FindComponentTypeByName(this, v19);
          if ( ComponentTypeByName == 0 )
            goto LABEL_107;
          v21 = this->m_EntityList.m_pFirstActiveEntity;
          m_nRuntimeIndex = ComponentTypeByName->m_pInfo->m_nRuntimeIndex;
          if ( v21 == 0 )
            goto LABEL_123;
          v108 = m_nRuntimeIndex;
          v23 = 0;
          bTargetInputFound = m_nRuntimeIndex;
          v8 = 0;
          do
          {
            if ( v21->m_pInstance != 0 )
            {
              m_nBaseOffset = v21->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[bTargetInputFound].m_nBaseOffset;
              if ( m_nBaseOffset != 0xFFFF )
              {
                v29 = v21->m_pInstance + m_nBaseOffset;
                if ( !CEntityClass::gm_fComponentsContained.m_Memory.m_pMemory[v108] )
                  v29 = *(&v21->m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
                if ( v29 != 0 )
                {
                  v30 = m_pNext->m_hCaller.m_Index;
                  v31 = 0;
                  v32 = m_pNext->m_nOutputID;
                  if ( v30 + 2 > 1 )
                  {
                    v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hCaller.m_Index) >> 9)
                                                                         & 0x3F];
                    if ( v33 != 0 )
                    {
                      v34 = &v33[m_pNext->m_hCaller.m_Index & 0x1FF];
                      if ( v34 != 0 && v30 == v34->m_EHandle.m_Index )
                        v31 = v34->m_pInstance;
                    }
                  }
                  v24 = m_pNext->m_hActivator.m_Index;
                  v25 = 0;
                  if ( v24 + 2 > 1 )
                  {
                    v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hActivator.m_Index) >> 9)
                                                                         & 0x3F];
                    if ( v26 != 0 )
                    {
                      v27 = &v26[m_pNext->m_hActivator.m_Index & 0x1FF];
                      if ( v27 != 0 && v24 == v27->m_EHandle.m_Index )
                        v25 = v27->m_pInstance;
                    }
                  }
                  *&temp.m_Size = m_pNext->m_pTargetInput.u.m_Id;
                  v8 = 1;
                  if ( CEntityIdentity::AcceptInput(v21, &temp, v25, v31, &m_pNext->m_variantValue, v32) != 0 )
                    v23 = 1;
                }
              }
            }
            v21 = v21->m_pNext;
          }
          while ( v21 != 0 );
          goto LABEL_100;
        default:
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
            LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, "Encountered unknown entity i/o target type!\n");
LABEL_107:
          v5 = CEntityHandle::gm_pEntityList;
          v71 = "target entity not found";
          goto LABEL_108;
      }
    }
    v97 = m_pNext->m_hCaller.m_Index;
    v98 = 0;
    v99 = m_pNext->m_nOutputID;
    if ( v97 + 2 > 1 )
    {
      v100 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hCaller.m_Index) >> 9) & 0x3F];
      if ( v100 != 0 )
      {
        v101 = &v100[m_pNext->m_hCaller.m_Index & 0x1FF];
        if ( v101 != 0 && v97 == v101->m_EHandle.m_Index )
          v98 = v101->m_pInstance;
      }
    }
    v102 = m_pNext->m_hActivator.m_Index;
    v103 = 0;
    if ( v102 + 2 > 1 )
    {
      v104 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pNext->m_hActivator.m_Index) >> 9) & 0x3F];
      if ( v104 != 0 )
      {
        v105 = &v104[m_pNext->m_hActivator.m_Index & 0x1FF];
        if ( v105 != 0 && v102 == v105->m_EHandle.m_Index )
          v103 = v105->m_pInstance;
      }
    }
    v106 = v96->m_pEntity;
    *&temp.m_Size = m_pNext->m_pTargetInput.u.m_Id;
    if ( CEntityIdentity::AcceptInput(v106, &temp, v103, v98, &m_pNext->m_variantValue, v99) != 0 )
      goto LABEL_118;
LABEL_103:
    v70 = m_pNext->m_hCaller.m_Index;
    v71 = "target input not found";
    v5 = CEntityHandle::gm_pEntityList;
    if ( v70 + 2 > 1 )
    {
LABEL_109:
      v74 = v5->m_pIdentityChunks[(LOWORD(m_pNext->m_hCaller.m_Index) >> 9) & 0x3F];
      if ( v74 != 0 )
      {
        v75 = &v74[m_pNext->m_hCaller.m_Index & 0x1FF];
        if ( v75 != 0 )
        {
          v73 = "";
          v72 = "";
          if ( v70 == v75->m_EHandle.m_Index )
          {
            if ( v75->m_designerName.u.m_Id != 0 )
              v73 = v75->m_designerName.u.m_pAsString;
            v72 = "";
            if ( v75->m_name.u.m_Id != 0 )
              v72 = v75->m_name.u.m_pAsString;
          }
          goto LABEL_112;
        }
      }
    }
LABEL_104:
    v72 = "";
    v73 = "";
LABEL_112:
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 0) != 0 )
    {
      v76 = "";
      if ( m_pNext->m_pTarget.u.m_Id != 0 )
        v76 = m_pNext->m_pTarget.u.m_pAsString;
      v77 = "";
      if ( m_pNext->m_pTargetInput.u.m_Id != 0 )
        v77 = m_pNext->m_pTargetInput.u.m_pAsString;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        0,
        "unhandled input: (%s) -> (%s), from (%s,%s); %s\n",
        v77,
        v76,
        v73,
        v72,
        v71);
    }
LABEL_118:
    CEntitySystem::RemoveEntityIOEvent(this, m_pNext);
    if ( (m_pNext->m_variantValue.m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pNext->m_variantValue.m_uint64);
      m_pNext->m_variantValue.m_flags &= ~1u;
    }
    m_pNext->m_variantValue.m_uint64 = 0;
    m_pNext->m_variantValue.m_type = 0;
    operator delete(m_pNext);
    m_pNext = this->m_events.m_pNext;
  }
  pthread_mutex_unlock(&generated_id_3395->m_Mutex);
}


// CEntitySystem::Spawn  (line 3567, @0x00000000030abca0, libserver.so)  // inlines: CEntityHandle, GetActiveSpawnGroupHandle, GetClassNameAsCStr, GetEHandle, GetEntityNameAsCStr, GetEntryIndex, GetInstance, GetSerialNumber, Init, Release, SetActiveSpawnGroupHandle, String
// calls: CEntityClass::FixupEntityOutputPointers, CEntityKeyValues::~CEntityKeyValues, operator delete
// callers: CGameEntitySystem::Spawn
void __fastcall CEntitySystem::Spawn(CEntitySystem *const this, int nCount, const EntitySpawnInfo_t *pInfo)
{
  __int64 v4; // rax
  const EntitySpawnInfo_t *v5; // r12
  __int16 m_nRefCount; // ax
  CEntityIdentity *m_pEntity; // r14
  CEntityKeyValues *m_pKeyValues; // rbx
  CEntityInstance *v9; // r15
  bool v10; // al
  __int64 v11; // rax
  CEntityIdentity *v12; // rsi
  const char *m_pAsString; // rcx
  const char *v14; // rdx
  __int16 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  void (__fastcall *v19)(__int64, __int64, __int64, __int64); // r8
  CEntityIdentity *v20; // rax
  __int16 v21; // si
  __int64 v22; // rax
  __int64 v23; // rsi
  CEntityIdentity *v24; // rdx
  __int16 v25; // si
  const EntitySpawnInfo_t *v26; // rax
  const EntitySpawnInfo_t *v28; // [rsp+8h] [rbp-58h]
  int nPrevActiveSpawnGroup; // [rsp+18h] [rbp-48h]
  char bProfilingResourceSystem; // [rsp+1Eh] [rbp-42h]
  bool bPrevChainedSpawn; // [rsp+1Fh] [rbp-41h]

  bProfilingResourceSystem = 0;
  if ( g_pResourceSystem != 0 )
  {
    v4 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    bProfilingResourceSystem = (*(*v4 + 40LL))(v4);
  }
  nPrevActiveSpawnGroup = this->m_ActiveSpawnGroupHandle;
  if ( nCount > 0 )
  {
    v5 = pInfo;
    v28 = &pInfo[(nCount - 1) + 1];
    do
    {
      while ( 1 )
      {
        m_pEntity = v5->m_pEntity;
        m_pKeyValues = v5->m_pKeyValues;
        v9 = v5->m_pEntity != 0 ? m_pEntity->m_pInstance : 0LL;
        CEntityClass::FixupEntityOutputPointers(m_pEntity->m_pClass, v9);
        v10 = g_bReceivedChainedSpawn;
        g_bReceivedChainedSpawn = 0;
        bPrevChainedSpawn = v10;
        this->m_ActiveSpawnGroupHandle = m_pEntity->m_hSpawnGroup;
        if ( bProfilingResourceSystem != 0 )
        {
          v11 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
          v12 = v9->m_pEntity;
          m_pAsString = "";
          if ( v12->m_designerName.u.m_Id != 0 )
            m_pAsString = v12->m_designerName.u.m_pAsString;
          v14 = "";
          if ( m_pEntity->m_name.u.m_Id != 0 )
            v14 = m_pEntity->m_name.u.m_pAsString;
          v15 = 0x7FFF;
          if ( v12->m_EHandle.m_Index != -1 )
            v15 = v12->m_EHandle.m_Index & 0x7FFF;
          (*(*v11 + 16LL))(
            v11,
            (((v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1)) << 15) | v15 & 0x7FFF,
            v14,
            m_pAsString);
          v16 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
          v17 = 0xFFFFFFFFLL;
          v18 = v16;
          v19 = *(*v16 + 24LL);
          v20 = v9->m_pEntity;
          if ( v20 != 0 )
          {
            v21 = 0x7FFF;
            if ( v20->m_EHandle.m_Index != -1 )
              v21 = v20->m_EHandle.m_Index & 0x7FFF;
            v17 = (((v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1)) << 15) | v21 & 0x7FFF;
          }
          v19(v18, v17, 19, 1);
          (*(v9->_vptr_IHandleEntity + 8))(v9, m_pKeyValues);
          v22 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
          v23 = 0xFFFFFFFFLL;
          v24 = v9->m_pEntity;
          if ( v24 != 0 )
          {
            v25 = 0x7FFF;
            if ( v24->m_EHandle.m_Index != -1 )
              v25 = v24->m_EHandle.m_Index & 0x7FFF;
            v23 = (((v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1)) << 15) | v25 & 0x7FFF;
          }
          (*(*v22 + 24LL))(v22, v23, 19, 2);
        }
        else
        {
          (*(v9->_vptr_IHandleEntity + 8))(v9, m_pKeyValues);
        }
        g_bReceivedChainedSpawn = bPrevChainedSpawn;
        if ( m_pKeyValues != 0 )
        {
          m_nRefCount = m_pKeyValues->m_nRefCount;
          --m_pKeyValues->m_nQueuedForSpawnCount;
          m_pKeyValues->m_nRefCount = --m_nRefCount;
          if ( m_nRefCount <= 0 )
            break;
        }
        if ( ++v5 == v28 )
          goto LABEL_28;
      }
      ++v5;
      CEntityKeyValues::~CEntityKeyValues(m_pKeyValues);
      operator delete(m_pKeyValues);
    }
    while ( v5 != v28 );
LABEL_28:
    this->m_ActiveSpawnGroupHandle = nPrevActiveSpawnGroup;
    v26 = pInfo;
    do
    {
      if ( v26->m_pEntity->m_pInstance != 0 )
        v26->m_pEntity->m_flags &= ~2u;
      ++v26;
    }
    while ( v28 != v26 );
  }
}


// CEntitySystem::ActivateEntity  (line 3634, @0x00000000030ad330, libserver.so)  // inlines: GetInstance
void __fastcall CEntitySystem::ActivateEntity(
        CEntitySystem *const this,
        CEntityIdentity *pEntity,
        ActivateType_t activateType)
{
  CEntityInstance *m_pInstance; // rdi

  if ( pEntity != 0 )
    m_pInstance = pEntity->m_pInstance;
  else
    m_pInstance = 0;
  g_bReceivedChainedActivate = 0;
  (*(m_pInstance->_vptr_IHandleEntity + 10))(m_pInstance, activateType);
}


// CEntitySystem::ExecuteQueuedActivates  (line 3648, @0x00000000030b0c30, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<EntityActivation_t>, Element, GetEntityIdentity, GetEntryIndex, GrowMemory, IndexToIdentity, IsExternallyAllocated, IsValid, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, operator CEntityIdentity*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<EntityActivation_t, int>::Purge, __stack_chk_fail, CUtlMemory<EntityActivation_t, int>::Grow, CUtlVectorBase<EntityActivation_t, CUtlMemoryFixedGrowable<EntityActivation_t, 50ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntitySystem::ExecuteQueuedCreation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntitySystem::ExecuteQueuedActivates(
        CEntitySystem *const this,
        CUtlVectorFixedGrowable<CEntityHandle,50ul> *const ehandleList)
{
  int m_Size; // edx
  __int64 v4; // rbx
  __int64 i; // r12
  __int16 v6; // r14
  CEntityIdentity *v7; // rdx
  __int64 v8; // rsi
  CEntityIdentity *v9; // r14
  CEntityHandle *v10; // rdx
  uint32 m_Index; // eax
  uint32 v12; // eax
  EntityActivation_t *v13; // rax
  CUtlVectorFixedGrowable<EntityActivation_t,50ul> stagingEntities; // [rsp+10h] [rbp-1E0h] BYREF
  unsigned __int64 v16; // [rsp+1B8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  m_Size = ehandleList->m_Size;
  stagingEntities.m_Size = 0;
  stagingEntities.m_Memory.m_nAllocationCount = 50;
  stagingEntities.m_Memory.m_nGrowSize = 0x80000000;
  stagingEntities.m_Memory.m_pMemory = &stagingEntities.m_Memory.m_FixedMemory;
  if ( m_Size <= 0 )
    goto LABEL_12;
  v4 = 0;
  for ( i = 0; ; i = v8 )
  {
    v10 = &ehandleList->m_Memory.m_pMemory[v4];
    m_Index = v10->m_Index;
    if ( v10->m_Index + 2 > 1 )
    {
      v6 = v10->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
        break;
    }
    ++v4;
    v8 = i;
    if ( ehandleList->m_Size <= v4 )
      goto LABEL_10;
LABEL_7:
    ;
  }
  v8 = i;
  v9 = &v7[v6 & 0x1FF];
  if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
  {
    v9->m_flags &= ~4u;
    if ( i == stagingEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<EntityActivation_t,int>::Grow(&stagingEntities.m_Memory, 1);
      LODWORD(v8) = stagingEntities.m_Size;
    }
    v8 = (v8 + 1);
    stagingEntities.m_Size = v8;
    v13 = &stagingEntities.m_Memory.m_pMemory[i];
    if ( v13 != 0 )
    {
      v13->m_pEntity = v9;
      v8 = v8;
    }
  }
  if ( ehandleList->m_Size > ++v4 )
    goto LABEL_7;
LABEL_10:
  if ( v8 > 0 )
    (*(this->_vptr_IEntityResourceManifestBuilder + 19))(
      this,
      v8,
      stagingEntities.m_Memory.m_pMemory,
      this->m_bInRestoreActivation ? 2 : 0);
LABEL_12:
  if ( stagingEntities.m_Memory.m_nAllocationCount < 0 )
  {
    v12 = stagingEntities.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v12 = stagingEntities.m_Memory.m_nGrowSize & 0xC0000000;
    if ( stagingEntities.m_Memory.m_pMemory != &stagingEntities.m_Memory.m_FixedMemory )
    {
      if ( stagingEntities.m_Memory.m_pMemory != 0 && v12 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v12 == 0 )
    CUtlMemory<EntityActivation_t,int>::Purge(&stagingEntities.m_Memory);
}


// CEntitySystem::SetChangeCallbackLimitMsecs  (line 3675, @0x00000000030ad360, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "change callback spew threshold %f msecs\n"
void __fastcall CEntitySystem::SetChangeCallbackLimitMsecs(CEntitySystem *const this, float a2, float flMsecs)
{
  float v3; // xmm1_4

  v3 = fmaxf(0.0, a2);
  if ( v3 != this->m_flChangeCallbackMsecLimit )
  {
    this->m_flChangeCallbackMsecLimit = v3;
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        1,
        "change callback spew threshold %f msecs\n",
        this->m_flChangeCallbackMsecLimit);
  }
}


// CEntitySystem::SetChangeCallbackTimeLimitSpewFunc  (line 3685, @0x00000000030ad3e0, libserver.so)  // inlines: SetChangeCallbackTimeLimitSpewFunc
void __fastcall CEntitySystem::SetChangeCallbackTimeLimitSpewFunc(
        CEntitySystem *const this,
        IFieldChangeLimitSpew *pfnChangeLimitSpew)
{
  CNetworkFieldChangedEventQueue *m_pQueuedNetworkChangeCallbacks; // rax

  m_pQueuedNetworkChangeCallbacks = this->m_pQueuedNetworkChangeCallbacks;
  this->m_pChangeCallbackTimeLimitSpewFunc = pfnChangeLimitSpew;
  if ( m_pQueuedNetworkChangeCallbacks != 0 )
    m_pQueuedNetworkChangeCallbacks->m_pfnChangeLimitSpew = pfnChangeLimitSpew;
}


// CEntitySystem::ExecuteQueuedPostDataUpdateAndActivates  (line 3695, @0x00000000030b0e60, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<EntityActivation_t>, Element, GetEntityIdentity, GetEntryIndex, GrowMemory, IndexToIdentity, IsExternallyAllocated, IsValid, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, Reset, operator CEntityIdentity*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CNetworkFieldChangedEventQueue::InvokeChangeCallbacks, CUtlMemory<CNetworkFieldReallocRecord, int>::ConvertToExternalMemory, CUtlMemory<CNetworkFieldDeallocRecord, int>::ConvertToExternalMemory, CUtlVectorBase<PostDataUpdateInfo_t, CUtlMemory<PostDataUpdateInfo_t, int> >::RemoveAll, CUtlMemory<EntityActivation_t, int>::Purge, CUtlMemory<EntityActivation_t, int>::Grow, __stack_chk_fail, CUtlVectorBase<EntityActivation_t, CUtlMemoryFixedGrowable<EntityActivation_t, 50ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntitySystem::ExecuteQueuedCreation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntitySystem::ExecuteQueuedPostDataUpdateAndActivates(
        CEntitySystem *const this,
        CUtlVectorFixedGrowable<CEntityHandle,50ul> *const activateEHandleList)
{
  double v2; // xmm1_8
  double v3; // xmm2_8
  __int64 v6; // r12
  int v7; // ebx
  int m_Size; // esi
  CEntityHandle *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // r14
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // r14
  int v14; // eax
  EntityActivation_t *v15; // rax
  double v16; // xmm1_8
  double v17; // xmm2_8
  __int64 v18; // rsi
  CNetworkFieldChangedEventQueue *m_pQueuedNetworkChangeCallbacks; // rbx
  uint32 v20; // eax
  int v21; // [rsp+1Ch] [rbp-1E4h]
  CUtlVectorFixedGrowable<EntityActivation_t,50ul> activateEntities; // [rsp+20h] [rbp-1E0h] BYREF
  unsigned __int64 v23; // [rsp+1C8h] [rbp-38h]

  v6 = 0;
  v7 = 0;
  activateEntities.m_Size = 0;
  v23 = __readfsqword(0x28u);
  m_Size = activateEHandleList->m_Size;
  activateEntities.m_Memory.m_pMemory = &activateEntities.m_Memory.m_FixedMemory;
  activateEntities.m_Memory.m_nAllocationCount = 50;
  activateEntities.m_Memory.m_nGrowSize = 0x80000000;
  if ( m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = &activateEHandleList->m_Memory.m_pMemory[v6];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              v14 = activateEntities.m_Size;
              v13->m_flags &= ~4u;
              v21 = activateEntities.m_Size;
              if ( activateEntities.m_Size == activateEntities.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<EntityActivation_t,int>::Grow(&activateEntities.m_Memory, 1);
                v14 = activateEntities.m_Size;
              }
              activateEntities.m_Size = v14 + 1;
              v15 = &activateEntities.m_Memory.m_pMemory[v21];
              if ( v15 != 0 )
                break;
            }
          }
        }
        ++v7;
        ++v6;
        if ( activateEHandleList->m_Size <= v7 )
          goto LABEL_12;
      }
      v15->m_pEntity = v13;
      ++v7;
      ++v6;
    }
    while ( activateEHandleList->m_Size > v7 );
  }
LABEL_12:
  CNetworkFieldChangedEventQueue::InvokeChangeCallbacks(
    this->m_pQueuedNetworkChangeCallbacks,
    1024,
    COERCE_DOUBLE(LODWORD(this->m_flChangeCallbackMsecLimit)),
    v2,
    v3);
  v18 = this->m_QueuedPostDataUpdates.m_Size;
  if ( v18 <= 0 )
    CNetworkFieldChangedEventQueue::InvokeChangeCallbacks(
      this->m_pQueuedNetworkChangeCallbacks,
      -2147483647,
      COERCE_DOUBLE(LODWORD(this->m_flChangeCallbackMsecLimit)),
      v16,
      v17);
  else
    (*(this->_vptr_IEntityResourceManifestBuilder + 20))(this, v18, this->m_QueuedPostDataUpdates.m_Memory.m_pMemory);
  m_pQueuedNetworkChangeCallbacks = this->m_pQueuedNetworkChangeCallbacks;
  (*(m_pQueuedNetworkChangeCallbacks->m_pScratchData->_vptr_INetworkFieldScratchData + 4))(m_pQueuedNetworkChangeCallbacks->m_pScratchData);
  m_pQueuedNetworkChangeCallbacks->m_nProcessedOrder = -1;
  m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Size = 0;
  CUtlMemory<CNetworkFieldReallocRecord,int>::ConvertToExternalMemory(
    &m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Memory,
    &m_pQueuedNetworkChangeCallbacks->m_reallocSpans.m_Memory.m_FixedMemory,
    4,
    0,
    1,
    0x3FFFFFFFu);
  m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Size = 0;
  CUtlMemory<CNetworkFieldDeallocRecord,int>::ConvertToExternalMemory(
    &m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Memory,
    &m_pQueuedNetworkChangeCallbacks->m_deallocSpans.m_Memory.m_FixedMemory,
    4,
    0,
    1,
    0x3FFFFFFFu);
  CUtlVectorBase<PostDataUpdateInfo_t,CUtlMemory<PostDataUpdateInfo_t,int>>::RemoveAll(&this->m_QueuedPostDataUpdates);
  if ( activateEntities.m_Size > 0 )
    (*(this->_vptr_IEntityResourceManifestBuilder + 19))(
      this,
      activateEntities.m_Size,
      activateEntities.m_Memory.m_pMemory,
      2 - !this->m_bInRestoreActivation);
  if ( activateEntities.m_Memory.m_nAllocationCount < 0 )
  {
    v20 = activateEntities.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v20 = activateEntities.m_Memory.m_nGrowSize & 0xC0000000;
    if ( activateEntities.m_Memory.m_pMemory != &activateEntities.m_Memory.m_FixedMemory )
    {
      if ( activateEntities.m_Memory.m_pMemory != 0 && v20 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v20 == 0 )
    CUtlMemory<EntityActivation_t,int>::Purge(&activateEntities.m_Memory);
}


// CEntitySystem::Activate  (line 3757, @0x00000000030aa690, libserver.so)  // inlines: ActivateEntity, CEntityHandle, GetActiveSpawnGroupHandle, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Init, SetActiveSpawnGroupHandle
// callers: CGameEntitySystem::Activate
void __fastcall CEntitySystem::Activate(
        CEntitySystem *const this,
        int nCount,
        const EntityActivation_t *pActivates,
        ActivateType_t activateType)
{
  char m_bProfilingResourceSystem; // al
  __int64 v9; // rax
  SpawnGroupHandle_t m_ActiveSpawnGroupHandle; // edx
  CEntityInstance *m_pInstance; // rdi
  __int64 v12; // rax
  __int16 v13; // si
  __int64 v14; // rax
  uint32 v15; // edx
  __int16 v16; // si
  SpawnGroupHandle_t nPrevActiveSpawnGroup; // [rsp+4h] [rbp-4Ch]
  const EntityActivation_t *v18; // [rsp+8h] [rbp-48h]

  m_bProfilingResourceSystem = 0;
  if ( g_pResourceSystem != 0 )
  {
    v9 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    m_bProfilingResourceSystem = (*(*v9 + 40LL))(v9);
  }
  m_ActiveSpawnGroupHandle = this->m_ActiveSpawnGroupHandle;
  this->m_bProfilingResourceSystem = m_bProfilingResourceSystem;
  nPrevActiveSpawnGroup = m_ActiveSpawnGroupHandle;
  if ( nCount > 0 )
  {
    v18 = &pActivates[(nCount - 1) + 1];
    while ( 1 )
    {
      if ( m_bProfilingResourceSystem != 0 )
      {
        v12 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
        v13 = 0x7FFF;
        if ( pActivates->m_pEntity->m_EHandle.m_Index != -1 )
          v13 = pActivates->m_pEntity->m_EHandle.m_Index & 0x7FFF;
        (*(*v12 + 24LL))(
          v12,
          (((pActivates->m_pEntity->m_EHandle.m_Index >> 15) - (pActivates->m_pEntity->m_flags & 1)) << 15)
        | v13 & 0x7FFF,
          20,
          1);
      }
      this->m_ActiveSpawnGroupHandle = pActivates->m_pEntity->m_hSpawnGroup;
      if ( pActivates->m_pEntity != 0 )
        m_pInstance = pActivates->m_pEntity->m_pInstance;
      else
        m_pInstance = 0;
      g_bReceivedChainedActivate = 0;
      (*(m_pInstance->_vptr_IHandleEntity + 10))(m_pInstance, activateType);
      if ( this->m_bProfilingResourceSystem )
      {
        v14 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
        v15 = (pActivates->m_pEntity->m_EHandle.m_Index >> 15) - (pActivates->m_pEntity->m_flags & 1);
        v16 = 0x7FFF;
        if ( pActivates->m_pEntity->m_EHandle.m_Index != -1 )
          v16 = pActivates->m_pEntity->m_EHandle.m_Index & 0x7FFF;
        ++pActivates;
        (*(*v14 + 24LL))(v14, (v15 << 15) | v16 & 0x7FFF, 20, 2);
        if ( pActivates == v18 )
          break;
      }
      else if ( ++pActivates == v18 )
      {
        break;
      }
      m_bProfilingResourceSystem = this->m_bProfilingResourceSystem;
    }
  }
  this->m_ActiveSpawnGroupHandle = nPrevActiveSpawnGroup;
}


// CEntitySystem::PostDataUpdate  (line 3785, @0x00000000030abfb0, libserver.so)  // inlines: GetInstance
// calls: CNetworkFieldChangedEventQueue::InvokeChangeCallbacks
// callers: CGameEntitySystem::PostDataUpdate
void __fastcall CEntitySystem::PostDataUpdate(CEntitySystem *const this, int nCount, const PostDataUpdateInfo_t *pInfo)
{
  double v3; // xmm1_8
  double v4; // xmm2_8
  const PostDataUpdateInfo_t *v7; // r13
  CEntityInstance *m_pInstance; // rdi
  __int64 m_updateType; // rsi
  CEntityIdentity *m_pEntity; // rax

  CNetworkFieldChangedEventQueue::InvokeChangeCallbacks(
    this->m_pQueuedNetworkChangeCallbacks,
    -2147483647,
    COERCE_DOUBLE(LODWORD(this->m_flChangeCallbackMsecLimit)),
    v3,
    v4);
  if ( nCount > 0 )
  {
    v7 = &pInfo[(nCount - 1) + 1];
    do
    {
      m_pEntity = pInfo->m_pEntity;
      g_bReceivedChainedPostDataUpdate = 0;
      m_pEntity->m_flags &= ~8u;
      if ( pInfo->m_pEntity != 0 )
        m_pInstance = pInfo->m_pEntity->m_pInstance;
      else
        m_pInstance = 0;
      m_updateType = pInfo->m_updateType;
      ++pInfo;
      (*(m_pInstance->_vptr_IHandleEntity + 9))(m_pInstance, m_updateType);
    }
    while ( pInfo != v7 );
  }
}


// CEntitySystem::UpdateDormancyFlags  (line 3809, @0x00000000030ad400, libserver.so)  // inlines: AddFlags, RemoveFlags
// callers: CEntitySystem::SetInPVS
void __fastcall CEntitySystem::UpdateDormancyFlags(
        CEntitySystem *const this,
        int nCount,
        EntityDormancyChange_t *pInfo)
{
  EntityDormancyChange_t *v3; // rdi
  CEntityIdentity *m_pEntity; // rcx
  uint32 v5; // eax
  EntityDormancyType_t m_nNewDormancyType; // esi

  if ( nCount > 0 )
  {
    v3 = &pInfo[(nCount - 1) + 1];
    do
    {
      while ( 1 )
      {
        m_pEntity = pInfo->m_pEntity;
        v5 = pInfo->m_pEntity->m_flags & 0xFFFFDF7F;
        pInfo->m_pEntity->m_flags = v5;
        m_nNewDormancyType = pInfo->m_nNewDormancyType;
        if ( m_nNewDormancyType != EntityDormancyType_t::ENTITY_DORMANT )
          break;
        ++pInfo;
        LOBYTE(v5) = v5 | 0x80;
        m_pEntity->m_flags = v5;
        if ( pInfo == v3 )
          return;
      }
      if ( m_nNewDormancyType == EntityDormancyType_t::ENTITY_SUSPENDED )
      {
        BYTE1(v5) |= 0x20u;
        m_pEntity->m_flags = v5;
      }
      ++pInfo;
    }
    while ( pInfo != v3 );
  }
}


// CEntitySystem::OnSetDormant  (line 3829, @0x00000000030aa860, libserver.so)  // inlines: GetInstance
// callers: CGameEntitySystem::OnSetDormant
void __fastcall CEntitySystem::OnSetDormant(
        CEntitySystem *const this,
        int nCount,
        const EntityDormancyChange_t *pInfo,
        bool bNotifyAddedToPVS)
{
  const EntityDormancyChange_t *v4; // r13
  const EntityDormancyChange_t *v5; // rbx
  CEntityInstance *m_pInstance; // rdi

  if ( nCount > 0 )
  {
    v4 = &pInfo[(nCount - 1) + 1];
    v5 = pInfo;
    do
    {
      if ( v5->m_pEntity != 0 )
        m_pInstance = v5->m_pEntity->m_pInstance;
      else
        m_pInstance = 0;
      g_bReceivedChainedOnSetDormant = 0;
      ++v5;
      (*(m_pInstance->_vptr_IHandleEntity + 12))(m_pInstance, v5[-1].m_nPrevDormancyType, v5[-1].m_nNewDormancyType);
    }
    while ( v5 != v4 );
  }
}


// CEntitySystem::UpdateDatabaseForDormancy  (line 3848, @0x00000000030ad460, libserver.so)  // inlines: AddToTail, GetEntityIndex, IdentityIndexInChunk, IdentityToIndex, IsInList, LinkBefore, MakeDormant, Set, SetInPVS, Unlink
// callers: CEntitySystem::SetInPVS
void __fastcall CEntitySystem::UpdateDatabaseForDormancy(
        CEntitySystem *const this,
        CConcreteEntityList *const list,
        int nCount,
        EntityDormancyChange_t *pInfo)
{
  EntityDormancyChange_t *v4; // r9
  EntityDormancyChange_t *v5; // r13
  int v6; // ecx
  EntityDormancyType_t m_nNewDormancyType; // r11d
  CEntityIdentity *m_pEntity; // rax
  bool v9; // r12
  CEntityIdentity **m_pIdentityChunks; // rdx
  int i; // r8d
  CEntityIdentity *v12; // rdi
  CEntityIdentity *v13; // rcx
  char v14; // di
  int v15; // edi
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int *v18; // rdx
  CEntityIdentity *m_pPrev; // rdx
  CEntityIdentity *m_pNext; // rdx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx

  if ( nCount <= 0 )
    return;
  v4 = pInfo;
  v5 = &pInfo[(nCount - 1) + 1];
  do
  {
    v6 = -1;
    m_nNewDormancyType = v4->m_nNewDormancyType;
    m_pEntity = v4->m_pEntity;
    v9 = v4->m_nPrevDormancyType == EntityDormancyType_t::ENTITY_DORMANT;
    if ( v4->m_pEntity == 0 )
      goto LABEL_17;
    m_pIdentityChunks = list->m_pIdentityChunks;
    for ( i = 0x4000; i != 0x8000; i += 512 )
    {
      v12 = *m_pIdentityChunks;
      if ( *m_pIdentityChunks != 0 )
      {
        if ( m_pEntity >= v12 && m_pEntity < &v12[512] && m_pEntity->m_pId != 0 )
        {
          v6 = i - 286331153 * ((m_pEntity - v12) >> 3) - 0x4000;
          if ( v6 >= 0 )
            goto LABEL_17;
        }
        v13 = m_pIdentityChunks[32];
        v14 = 0;
        if ( v13 != 0 )
        {
LABEL_11:
          if ( m_pEntity >= v13 && m_pEntity < &v13[512] && m_pEntity->m_pId != 0 )
          {
            v6 = i - 286331153 * ((m_pEntity - v13) >> 3);
            if ( v6 >= 0 )
              goto LABEL_17;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v13 = m_pIdentityChunks[32];
        v14 = 1;
        if ( v13 != 0 )
          goto LABEL_11;
      }
      if ( v14 != 0 )
        break;
LABEL_15:
      ++m_pIdentityChunks;
    }
    v6 = -1;
LABEL_17:
    if ( list->m_nNetworkableEntityLimit > v6 )
    {
      v15 = 1 << v6;
      v16 = v6 >> 5;
      v17 = 1 << v6;
      v18 = &list->m_PVSBits.m_Ints[v16];
      if ( m_nNewDormancyType != EntityDormancyType_t::ENTITY_NOT_DORMANT )
        *v18 &= ~v17;
      else
        *v18 |= v15;
    }
    if ( v9 != (m_nNewDormancyType == EntityDormancyType_t::ENTITY_DORMANT) )
    {
      if ( m_nNewDormancyType == EntityDormancyType_t::ENTITY_DORMANT )
      {
        if ( m_pEntity == list->m_pFirstActiveEntity )
          list->m_pFirstActiveEntity = m_pEntity->m_pNext;
        m_pPrev = m_pEntity->m_pPrev;
        if ( m_pEntity != m_pPrev )
        {
          if ( m_pPrev != 0 )
            m_pPrev->m_pNext = m_pEntity->m_pNext;
          else
            list->m_usedList.m_pHead = m_pEntity->m_pNext;
          m_pNext = m_pEntity->m_pNext;
          if ( m_pNext != 0 )
            m_pNext->m_pPrev = m_pEntity->m_pPrev;
          else
            list->m_usedList.m_pTail = m_pEntity->m_pPrev;
          m_pEntity->m_pPrev = m_pEntity;
        }
        m_pEntity->m_pNext = 0;
        m_pEntity->m_pPrev = list->m_dormantList.m_pTail;
        list->m_dormantList.m_pTail = m_pEntity;
        v21 = m_pEntity->m_pPrev;
        if ( v21 != 0 )
          v21->m_pNext = m_pEntity;
        else
          list->m_dormantList.m_pHead = m_pEntity;
      }
      else
      {
        v22 = m_pEntity->m_pPrev;
        if ( m_pEntity != v22 )
        {
          if ( v22 != 0 )
            v22->m_pNext = m_pEntity->m_pNext;
          else
            list->m_dormantList.m_pHead = m_pEntity->m_pNext;
          v23 = m_pEntity->m_pNext;
          if ( v23 != 0 )
            v23->m_pPrev = m_pEntity->m_pPrev;
          else
            list->m_dormantList.m_pTail = m_pEntity->m_pPrev;
          m_pEntity->m_pPrev = m_pEntity;
        }
        m_pEntity->m_pNext = 0;
        m_pEntity->m_pPrev = list->m_usedList.m_pTail;
        list->m_usedList.m_pTail = m_pEntity;
        v24 = m_pEntity->m_pPrev;
        if ( v24 != 0 )
          v24->m_pNext = m_pEntity;
        else
          list->m_usedList.m_pHead = m_pEntity;
        if ( list->m_pFirstActiveEntity == 0 )
          list->m_pFirstActiveEntity = m_pEntity;
      }
    }
    ++v4;
  }
  while ( v4 != v5 );
}


// CEntitySystem::QueueSetInPVS  (line 3863, @0x00000000030b11a0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CEntityHandle, Construct<QueuedSetInPVSInfo_t>, Element, EnsureCapacity, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Init, QueuedSetInPVSInfo_t, Set, memcpy, operator=, operator[]
// calls: CUtlMemory<QueuedSetInPVSInfo_t, int>::Grow, memcpy
// callers: CEntitySystem::SetInPVS
void __fastcall CEntitySystem::QueueSetInPVS(CEntitySystem *const this, int nCount, const SetInPVSInfo_t *pInfo)
{
  int v6; // r14d
  uint32 m_nGrowSize; // eax
  QueuedSetInPVSInfo_t *v8; // rsi
  __int64 v9; // rax
  const SetInPVSInfo_t *v10; // r14
  int m_Size; // r12d
  QueuedSetInPVSInfo_t *v12; // rsi
  CEntityInstance *v13; // rdx
  __int64 v14; // rdi
  int v15; // eax
  CEntityIdentity *v16; // rcx
  __int16 v17; // r8
  QueuedSetInPVSInfo_t *v18; // rdx
  QueuedSetInPVSInfo_t *v19; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v21; // edx
  __int16 v22; // si
  QueuedSetInPVSInfo_t *m_pMemory; // r15
  QueuedSetInPVSInfo_t *v24; // rax

  v6 = nCount + this->m_QueuedSetInPVSChanges.m_Size;
  if ( v6 > this->m_QueuedSetInPVSChanges.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_QueuedSetInPVSChanges.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory;
        v24 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v6);
        this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory = v24;
        if ( m_pMemory != 0 )
          memcpy(v24, m_pMemory, 8LL * this->m_QueuedSetInPVSChanges.m_Memory.m_nAllocationCount);
        this->m_QueuedSetInPVSChanges.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v8 = this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory;
        v9 = *g_pMemAlloc;
        if ( v8 != 0 )
          this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory = (*(v9 + 8))(g_pMemAlloc, v8, 8LL * v6);
        else
          this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory = (*v9)(g_pMemAlloc, 8LL * v6);
      }
      this->m_QueuedSetInPVSChanges.m_Memory.m_nAllocationCount = v6;
    }
  }
  if ( nCount > 0 )
  {
    v10 = &pInfo[(nCount - 1) + 1];
    do
    {
      m_Size = this->m_QueuedSetInPVSChanges.m_Size;
      if ( m_Size <= 0 )
      {
LABEL_21:
        if ( this->m_QueuedSetInPVSChanges.m_Memory.m_nAllocationCount == m_Size )
          CUtlMemory<QueuedSetInPVSInfo_t,int>::Grow(&this->m_QueuedSetInPVSChanges.m_Memory, 1);
        ++this->m_QueuedSetInPVSChanges.m_Size;
        v18 = &this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory[m_Size];
        if ( v18 != 0 )
        {
          v18->m_hEntity.m_Index = -1;
          v19 = &this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory[m_Size];
        }
        else
        {
          v19 = 0;
        }
        if ( pInfo->m_pEntity != 0 && (m_pEntity = pInfo->m_pEntity->m_pEntity) != 0 )
        {
          v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v22 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v19->m_hEntity.m_Index) = v22 | v19->m_hEntity.m_Index & 0x8000;
          v19->m_hEntity.m_Index = (v21 << 15) | v19->m_hEntity.m_Index & 0x7FFF;
        }
        else
        {
          v19->m_hEntity.m_Index = -1;
        }
        v19->m_bInPVS = pInfo->m_bInPVS;
      }
      else
      {
        v12 = this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory;
        v13 = pInfo->m_pEntity;
        v14 = &v12[(m_Size - 1) + 1];
        while ( 1 )
        {
          v15 = -1;
          if ( v13 != 0 )
          {
            v16 = v13->m_pEntity;
            if ( v16 != 0 )
            {
              v17 = 0x7FFF;
              if ( v16->m_EHandle.m_Index != -1 )
                v17 = v16->m_EHandle.m_Index & 0x7FFF;
              v15 = (((v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1)) << 15) | v17 & 0x7FFF;
            }
          }
          if ( v12->m_hEntity.m_Index == v15 )
            break;
          if ( ++v12 == v14 )
            goto LABEL_21;
        }
        v12->m_bInPVS = pInfo->m_bInPVS;
      }
      ++pInfo;
    }
    while ( pInfo != v10 );
  }
}


// CEntitySystem::ExecuteQueuedSetInPVS  (line 3893, @0x00000000030b1640, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlMemory, CUtlVector, CUtlVectorBase, Element, EnsureCapacity, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CEntityInstance*, operator!, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<QueuedSetInPVSInfo_t, CUtlMemory<QueuedSetInPVSInfo_t, int> >::RemoveAll, CEntitySystem::SetInPVS, CUtlMemory<SetInPVSInfo_t, int>::Purge, CUtlMemory<SetInPVSInfo_t, int>::Grow, _Unwind_Resume
// callers: CEntitySystem::ForceSetInPVSCallsIntoQueue, CEntitySystem::ExecuteQueuedCreation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntitySystem::ExecuteQueuedSetInPVS(CEntitySystem *const this)
{
  int m_Size; // ebx
  SetInPVSInfo_t *v3; // rax
  int v4; // r9d
  __int64 v5; // r14
  int v6; // r13d
  CConcreteEntityList *v7; // rsi
  QueuedSetInPVSInfo_t *v8; // rbx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  uint32 m_flags; // eax
  __int64 v12; // r15
  int v13; // eax
  CEntityInstance *m_pInstance; // rcx
  SetInPVSInfo_t *v15; // r15
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CUtlVector<SetInPVSInfo_t,CUtlMemory<SetInPVSInfo_t,int> > changes; // [rsp+10h] [rbp-50h] BYREF

  if ( this->m_nQueueSetInPVSCallsDepth <= 0 )
  {
    m_Size = this->m_QueuedSetInPVSChanges.m_Size;
    if ( m_Size != 0 )
    {
      changes.m_Size = 0;
      changes.m_Memory.m_pMemory = 0;
      changes.m_Memory.m_nAllocationCount = 0;
      changes.m_Memory.m_nGrowSize = 0;
      if ( m_Size > 0 )
      {
        v3 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * m_Size);
        v4 = this->m_QueuedSetInPVSChanges.m_Size;
        changes.m_Memory.m_pMemory = v3;
        changes.m_Memory.m_nAllocationCount = m_Size;
        if ( v4 > 0 )
        {
          v5 = 0;
          v6 = 0;
          do
          {
            v7 = CEntityHandle::gm_pEntityList;
            v8 = &this->m_QueuedSetInPVSChanges.m_Memory.m_pMemory[v5];
            if ( v8->m_hEntity.m_Index + 2 > 1 )
            {
              v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hEntity.m_Index) >> 9) & 0x3F];
              if ( v9 != 0 )
              {
                v10 = &v9[v8->m_hEntity.m_Index & 0x1FF];
                if ( v10 != 0 && v8->m_hEntity.m_Index == v10->m_EHandle.m_Index )
                {
                  m_flags = v10->m_flags;
                  if ( (m_flags & 0x200) == 0 && v8->m_bInPVS != (((m_flags >> 7) ^ 1) & 1) )
                  {
                    v12 = changes.m_Size;
                    v13 = changes.m_Size;
                    if ( changes.m_Size == changes.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<SetInPVSInfo_t,int>::Grow(&changes.m_Memory, 1);
                      v13 = changes.m_Size;
                      v7 = CEntityHandle::gm_pEntityList;
                    }
                    m_pInstance = 0;
                    changes.m_Size = v13 + 1;
                    v15 = &changes.m_Memory.m_pMemory[v12];
                    if ( v8->m_hEntity.m_Index + 2 > 1 )
                    {
                      v16 = v7->m_pIdentityChunks[(LOWORD(v8->m_hEntity.m_Index) >> 9) & 0x3F];
                      if ( v16 != 0 )
                      {
                        v17 = &v16[v8->m_hEntity.m_Index & 0x1FF];
                        if ( v17 != 0 && v8->m_hEntity.m_Index == v17->m_EHandle.m_Index )
                          m_pInstance = v17->m_pInstance;
                      }
                    }
                    v15->m_pEntity = m_pInstance;
                    v15->m_bInPVS = v8->m_bInPVS;
                  }
                }
              }
            }
            ++v6;
            ++v5;
          }
          while ( this->m_QueuedSetInPVSChanges.m_Size > v6 );
        }
      }
      CUtlVectorBase<QueuedSetInPVSInfo_t,CUtlMemory<QueuedSetInPVSInfo_t,int>>::RemoveAll(&this->m_QueuedSetInPVSChanges);
      CEntitySystem::SetInPVS(this, changes.m_Size, changes.m_Memory.m_pMemory);
      if ( (changes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<SetInPVSInfo_t,int>::Purge(&changes.m_Memory);
        if ( (changes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<SetInPVSInfo_t,int>::Purge(&changes.m_Memory);
      }
    }
  }
}


// CEntitySystem::SetInPVS  (line 3930, @0x00000000030b1430, libserver.so)  // inlines: GetDormancyType, GetFlags
// calls: CEntitySystem::QueueSetInPVS, CEntitySystem::UpdateDormancyFlags, CEntitySystem::UpdateDatabaseForDormancy, __stack_chk_fail
// callers: EntityPostSpawnDelegate, CEntitySaveRestoreBlockHandler::RestoreEntity, CEntitySaveRestoreBlockHandler::RestoreGlobalEntity, CEntitySystem::ExecuteQueuedSetInPVS
void __fastcall CEntitySystem::SetInPVS(CEntitySystem *const this, int nCount, const SetInPVSInfo_t *pInfo)
{
  __int64 v4; // rcx
  void *v5; // rsp
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  int v8; // r13d
  unsigned int v9; // r12d
  CEntityIdentity *m_pEntity; // r8
  uint32 m_flags; // edi
  int v12; // edi
  int v13; // r9d
  unsigned __int64 v14; // r10
  EntityDormancyChange_t *v15; // r15
  __int64 v16; // r10
  _QWORD v17[8]; // [rsp+10h] [rbp-40h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( nCount == 0 )
    return;
  if ( this->m_nQueuedCreationDepth > 0 || this->m_nQueueSetInPVSCallsDepth > 0 )
  {
    CEntitySystem::QueueSetInPVS(this, nCount, pInfo);
    return;
  }
  v4 = 16LL * nCount;
  v5 = alloca(v4 + 32);
  v6 = v17 & 0xFFFFFFFFFFFFFFEFLL;
  if ( nCount <= 0 )
  {
    CEntitySystem::UpdateDatabaseForDormancy(this, &this->m_EntityList, 0, (v6 + v4));
    CEntitySystem::UpdateDatabaseForDormancy(this, &this->m_EntityList, 0, (v17 & 0xFFFFFFFFFFFFFFEFLL));
    return;
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  do
  {
    m_pEntity = pInfo[v7].m_pEntity->m_pEntity;
    m_flags = m_pEntity->m_flags;
    if ( (m_flags & 0x2080) != 0 )
    {
      v12 = (m_flags >> 7) + 2;
      if ( pInfo[v7].m_bInPVS )
      {
        v16 = v8;
        v13 = 0;
        ++v8;
        v14 = v6 + 16 * v16;
        goto LABEL_12;
      }
    }
    else
    {
      v12 = 0;
      if ( pInfo[v7].m_bInPVS )
        goto LABEL_13;
    }
    v13 = 2 - ((m_pEntity->m_pClass->m_flags & 0x20) == 0);
    if ( v13 != v12 )
    {
      ++v9;
      v14 = v6 + 16LL * (nCount - v9);
LABEL_12:
      *v14 = m_pEntity;
      *(v14 + 8) = v12;
      *(v14 + 12) = v13;
    }
LABEL_13:
    ++v7;
  }
  while ( v7 != (nCount - 1) + 1LL );
  v15 = (v6 + v4);
  if ( v9 != 0 )
  {
    v15 = (v6 + 16LL * (nCount - v9));
    CEntitySystem::UpdateDormancyFlags(this, v9, v15);
    (*(this->_vptr_IEntityResourceManifestBuilder + 21))(this, v9, v15, 0);
  }
  CEntitySystem::UpdateDatabaseForDormancy(this, &this->m_EntityList, v9, v15);
  CEntitySystem::UpdateDatabaseForDormancy(this, &this->m_EntityList, v8, (v17 & 0xFFFFFFFFFFFFFFEFLL));
  if ( v8 != 0 )
  {
    CEntitySystem::UpdateDormancyFlags(this, v8, (v17 & 0xFFFFFFFFFFFFFFEFLL));
    (*(this->_vptr_IEntityResourceManifestBuilder + 21))(this, v8, v17 & 0xFFFFFFFFFFFFFFEFLL, 1);
  }
}


// CEntitySystem::HelperExecuteQueuedSpawn  (line 4006, @0x00000000030b0490, libserver.so)  // inlines: ActivateStagingEntities, AddFlags, AddToTail, Base, CEntityHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CopyConstruct<CEntityHandle>, DeallocateEntityIdentity, Element, EnsureCapacity, FindKeyHash, FirstStagingEntity, Get, GetEHandle, GetEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetValue, GetValueString, GrowMemory, IndexToIdentity, Init, IsValid, LookupEntity, NextStagingEntity, Release, RemoveFlags, SetEntityName, TempString, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base
// calls: CEntityClass::Unserialize, CEntityKeyValues::~CEntityKeyValues, operator delete, CUtlVectorBase<CEntitySystem::CreationInfo_t, CUtlMemory<CEntitySystem::CreationInfo_t, int> >::RemoveAll, CUtlMemory<EntitySpawnInfo_t, int>::Purge, CEntityIdentity::SetEntityName, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity, CUtlMemory<CEntityHandle, int>::Grow, CUtlMemory<EntitySpawnInfo_t, int>::EnsureCapacity, _Unwind_Resume, __stack_chk_fail
// callers: CEntitySystem::ExecuteQueuedCreation
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValues::sm_EmptyVariant
void __fastcall CEntitySystem::HelperExecuteQueuedSpawn(
        CEntitySystem *const this,
        CUtlVectorFixedGrowable<CEntityHandle,50ul> *const ehandleList)
{
  int m_Size; // ebx
  CEntitySystem::CreationInfo_t *v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  CEntitySystem::CreationInfo_t *v8; // rax
  const CEntityKeyValues *m_pKeyValues; // rcx
  CEntityInstance *m_pAnonymousEntity; // r9
  int m_nCount; // edi
  __int16 m_nAllocated; // si
  __int64 v13; // rax
  __int16 *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *p_m_value; // rax
  unsigned __int64 v17; // r13
  CEntityIdentity *m_pEntity; // rbx
  const CEntityKeyValues *v19; // rdx
  __int64 v20; // rax
  CEntityIdentity **v21; // rax
  CEntitySystem::CreationInfo_t *v22; // r12
  CEntityInstance *v23; // rax
  CEntityIdentity *v24; // rbx
  const CEntityKeyValues *v25; // rax
  CEntityKeyValues *v26; // rbx
  CEntityIdentity *m_pHead; // rbx
  __int16 v29; // cx
  __int64 v30; // r12
  int v31; // eax
  CEntityHandle *v32; // rax
  uint32 m_Index; // edx
  __int16 v34; // si
  CEntityIdentity *v35; // rax
  CEntityIdentity *v36; // rax
  char *m_pMemory; // [rsp+18h] [rbp-398h]
  int nSpawnCount; // [rsp+24h] [rbp-38Ch]
  __int64 v39; // [rsp+28h] [rbp-388h]
  int v40; // [rsp+30h] [rbp-380h]
  CUtlMemoryFixedGrowable<EntitySpawnInfo_t,50ul,int> spawnEntities; // [rsp+40h] [rbp-370h] BYREF
  unsigned __int64 v42; // [rsp+378h] [rbp-38h]

  spawnEntities.m_nAllocationCount = 50;
  v42 = __readfsqword(0x28u);
  m_Size = this->m_QueuedCreates.m_Size;
  spawnEntities.m_nGrowSize = 0x80000000;
  spawnEntities.m_pMemory = &spawnEntities.m_FixedMemory;
  if ( m_Size > 50 )
  {
    CUtlMemory<EntitySpawnInfo_t,int>::EnsureCapacity(&spawnEntities, m_Size);
    m_pMemory = spawnEntities.m_pMemory;
    goto LABEL_3;
  }
  m_pMemory = &spawnEntities.m_FixedMemory;
  if ( m_Size > 0 )
  {
LABEL_3:
    v5 = this->m_QueuedCreates.m_Memory.m_pMemory;
    v6 = (m_Size - 1) + 1LL;
    v7 = 0;
    v39 = 32 * v6;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = &v5[v7 / 0x20];
        m_pKeyValues = v5[v7 / 0x20].m_pKeyValues;
        if ( m_pKeyValues == 0 )
          goto LABEL_18;
        if ( !v8->m_bNeedsUnserialization )
          goto LABEL_18;
        m_pAnonymousEntity = v8->m_pAnonymousEntity;
        if ( m_pAnonymousEntity == 0 )
        {
          m_Index = v8->m_hNonAnonymousEntity.m_Index;
          if ( v8->m_hNonAnonymousEntity.m_Index + 2 <= 1 )
            goto LABEL_18;
          v34 = v8->m_hNonAnonymousEntity.m_Index;
          v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hNonAnonymousEntity.m_Index) >> 9) & 0x3F];
          if ( v35 == 0 )
            goto LABEL_18;
          v36 = &v35[v34 & 0x1FF];
          if ( v36 == 0 )
            goto LABEL_18;
          if ( m_Index != v36->m_EHandle.m_Index )
            goto LABEL_18;
          m_pAnonymousEntity = v36->m_pInstance;
          if ( v36->m_pInstance == 0 )
            goto LABEL_18;
        }
        m_nCount = m_pKeyValues->m_keyHashes.m_nCount;
        if ( m_nCount > 0 )
          break;
LABEL_52:
        p_m_value = &CEntityKeyValues::sm_EmptyVariant;
        if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
          goto LABEL_18;
LABEL_53:
        if ( p_m_value->m_uint64 == 0 )
          goto LABEL_18;
        CEntityIdentity::SetEntityName(m_pAnonymousEntity->m_pEntity, p_m_value->m_pszString);
        v7 += 32LL;
        v5 = this->m_QueuedCreates.m_Memory.m_pMemory;
        if ( v7 == v39 )
        {
LABEL_19:
          v17 = 0;
          nSpawnCount = 0;
          while ( 1 )
          {
            v22 = &v5[v17 / 0x20];
            v23 = v22->m_pAnonymousEntity;
            if ( v23 != 0 )
            {
              m_pEntity = v23->m_pEntity;
            }
            else if ( v22->m_hNonAnonymousEntity.m_Index + 2 <= 1
                   || (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_hNonAnonymousEntity.m_Index) >> 9)
                                                                            & 0x3F]) == 0
                   || (m_pEntity = &v24[v22->m_hNonAnonymousEntity.m_Index & 0x1FF]) == 0
                   || v22->m_hNonAnonymousEntity.m_Index != m_pEntity->m_EHandle.m_Index )
            {
LABEL_34:
              v25 = v22->m_pKeyValues;
              if ( v25 == 0 )
                goto LABEL_27;
              goto LABEL_35;
            }
            if ( m_pEntity == 0 )
              goto LABEL_34;
            v19 = v22->m_pKeyValues;
            if ( v19 == 0 || !v22->m_bNeedsUnserialization )
              goto LABEL_26;
            if ( CEntityClass::Unserialize(m_pEntity->m_pClass, m_pEntity->m_pInstance, v19) )
            {
              m_pEntity->m_flags |= 0x1000u;
LABEL_26:
              v20 = nSpawnCount++;
              v21 = &m_pMemory[16 * v20];
              *v21 = m_pEntity;
              v21[1] = v22->m_pKeyValues;
              LODWORD(v21) = m_pEntity->m_flags;
              BYTE1(v21) &= ~1u;
              m_pEntity->m_flags = v21 | 2;
LABEL_27:
              v17 += 32LL;
              if ( v17 == v39 )
                goto LABEL_37;
              goto LABEL_28;
            }
            CEntityIdentity::FreeAttributes(m_pEntity, 0);
            CConcreteEntityList::FreeEntity(&this->m_EntityList, m_pEntity, 1);
            v25 = v22->m_pKeyValues;
LABEL_35:
            --v25->m_nQueuedForSpawnCount;
            v26 = v22->m_pKeyValues;
            if ( --v26->m_nRefCount > 0 )
              goto LABEL_27;
            v17 += 32LL;
            CEntityKeyValues::~CEntityKeyValues(v26);
            operator delete(v26);
            if ( v17 == v39 )
              goto LABEL_37;
LABEL_28:
            v5 = this->m_QueuedCreates.m_Memory.m_pMemory;
          }
        }
      }
      m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
      v13 = 0;
      while ( m_nAllocated == 0 )
      {
        if ( *(4 * v13) == 1094168427 )
          goto LABEL_15;
LABEL_12:
        if ( m_nCount <= ++v13 )
          goto LABEL_52;
      }
      m_pElements = &m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1;
      if ( m_nAllocated > 9 )
        m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
      if ( *&m_pElements[2 * v13] != 1094168427 )
        goto LABEL_12;
LABEL_15:
      if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
        v15 = m_pKeyValues->m_keyValues.m_pElements;
      else
        v15 = 0;
      p_m_value = &v15[v13].m_value;
      if ( p_m_value->m_type == 30 )
        goto LABEL_53;
LABEL_18:
      v7 += 32LL;
      if ( v7 == v39 )
        goto LABEL_19;
    }
  }
  nSpawnCount = 0;
LABEL_37:
  CUtlVectorBase<CEntitySystem::CreationInfo_t,CUtlMemory<CEntitySystem::CreationInfo_t,int>>::RemoveAll(&this->m_QueuedCreates);
  m_pHead = this->m_EntityList.m_usedList.m_pHead;
  if ( m_pHead != this->m_EntityList.m_pFirstActiveEntity )
  {
    if ( m_pHead != 0 )
    {
      do
      {
        v29 = 0x7FFF;
        if ( m_pHead->m_EHandle.m_Index != -1 )
          v29 = m_pHead->m_EHandle.m_Index & 0x7FFF;
        v30 = ehandleList->m_Size;
        v40 = (((m_pHead->m_EHandle.m_Index >> 15) - (m_pHead->m_flags & 1)) << 15) | v29 & 0x7FFF;
        v31 = v30;
        if ( v30 == ehandleList->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityHandle,int>::Grow(&ehandleList->m_Memory, 1);
          v31 = ehandleList->m_Size;
        }
        ehandleList->m_Size = v31 + 1;
        v32 = &ehandleList->m_Memory.m_pMemory[v30];
        if ( v32 != 0 )
          v32->m_Index = v40;
        m_pHead = m_pHead->m_pNext;
      }
      while ( this->m_EntityList.m_pFirstActiveEntity != m_pHead && m_pHead != 0 );
      m_pHead = this->m_EntityList.m_usedList.m_pHead;
    }
    else
    {
      m_pHead = 0;
    }
  }
  this->m_EntityList.m_pFirstActiveEntity = m_pHead;
  if ( nSpawnCount != 0 )
    (*(this->_vptr_IEntityResourceManifestBuilder + 18))(this, nSpawnCount, m_pMemory);
  CUtlMemory<EntitySpawnInfo_t,int>::Purge(&spawnEntities);
}


// CEntitySystem::HasQueuedEntitySpawns  (line 4108, @0x00000000030ad750, libserver.so)
bool __fastcall CEntitySystem::HasQueuedEntitySpawns(const CEntitySystem *const this)
{
  return this->m_QueuedCreates.m_Size > 0;
}


// CEntitySystem::HasQueuedEntityDeletions  (line 4113, @0x00000000030ad770, libserver.so)
bool __fastcall CEntitySystem::HasQueuedEntityDeletions(const CEntitySystem *const this)
{
  return this->m_QueuedDestroys.m_Size > 0;
}


// CEntitySystem::ExecuteQueuedCreation  (line 4122, @0x00000000030b65a0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CallQueued, Commit, Count, FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, IsEmpty, Pop, PopItem, Purge, Purge_FixedGrowable, Push, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator int, operator!, operator(), operator--, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntitySystem::HelperExecuteQueuedSpawn, CEntitySystem::ExecuteQueuedActivates, CUtlMemory<CEntityHandle, int>::ConvertToExternalMemory, CUtlMemory<CEntityHandle, int>::Purge, CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), CEntitySystem::ExecuteQueuedDeletion, CEntitySystem::ExecuteQueuedSetInPVS, CTSQueue<CFunctor*, false>::PushItem, CEntitySystem::ExecuteQueuedPostDataUpdateAndActivates, __stack_chk_fail, _Unwind_Resume
// callers: CDevtestHierarchy2::Spawn, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityGroupFromTable, CBreakableProp::SetEnableMotionPosition, CLoadingSpawnGroup::SpawnEntities, DispatchSpawn, CreateWorldEntity, CBaseEntity::Create (65 total)
void __fastcall CEntitySystem::ExecuteQueuedCreation(CEntitySystem *const this)
{
  unsigned __int64 v1; // r13
  int m_Size; // r14d
  int v3; // eax
  detail::GenericClass *m_pthis; // rcx
  void (*v5)(detail::GenericClass *); // rax
  _QWORD *v6; // rdi
  bool v7; // zf
  char v8; // r15
  int m_nQueuedCreationDepth; // eax
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  CUtlDelegate<void(bool)> *v13; // rax
  void (*v14)(detail::GenericClass *); // rdx
  _QWORD *v15; // rdi
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *m_aBuckets; // r13
  int i; // r14d
  unsigned __int64 v18; // r12
  CUtlDelegate<void(bool)> *v19; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v21; // rdi
  CCallQueue *p_m_callQueue; // r15
  signed __int64 *pNode; // rsi
  signed __int64 v24; // rdi
  signed __int64 v25; // r14
  __int128 v26; // rt0
  TSLHead_t m_Head; // rax
  __int64 v28; // rdx
  TSLHead_t v29; // rt0
  unsigned __int8 v30; // tt
  __int128 v31; // rt0
  volatile signed __int64 *p_m_Tail; // [rsp+10h] [rbp-150h]
  CFunctor *init; // [rsp+20h] [rbp-140h] BYREF
  CCallQueue *v35; // [rsp+28h] [rbp-138h]
  CTSQueue<CFunctor*,false>::NodeLink_t *v36; // [rsp+30h] [rbp-130h]
  intp *p_sequence; // [rsp+38h] [rbp-128h]
  CUtlVectorFixedGrowable<CEntityHandle,50ul> ehandleList; // [rsp+40h] [rbp-120h] BYREF
  unsigned __int64 v39; // [rsp+128h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  m_Size = this->m_creationDelegates.m_Size;
  v3 = this->m_nQueuedCreationDepth + 1;
  this->m_nQueuedCreationDepth = v3;
  if ( v3 == 1 && m_Size > 0 )
  {
    v18 = 0;
    do
    {
      v19 = &this->m_creationDelegates.m_Memory.m_pMemory[v18 / 0x18];
      pfn = v19->m_Closure.m_pFunction.__pfn;
      v21 = (v19->m_Closure.m_pthis + v19->m_Closure.m_pFunction.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v21 - 1);
      v18 += 24LL;
      (pfn)(v21, 1);
    }
    while ( v18 != 8 * (3LL * (m_Size - 1) + 3) );
  }
  ehandleList.m_Size = 0;
  ehandleList.m_Memory.m_nAllocationCount = 50;
  ehandleList.m_Memory.m_nGrowSize = 0x80000000;
  ehandleList.m_Memory.m_pMemory = &ehandleList.m_Memory.m_FixedMemory;
  do
    CEntitySystem::HelperExecuteQueuedSpawn(this, &ehandleList);
  while ( this->m_QueuedCreates.m_Size > 0 );
  m_pthis = this->m_postSpawnDelegate.m_Closure.m_pthis;
  if ( m_pthis != 0 )
  {
    v5 = this->m_postSpawnDelegate.m_Closure.m_pFunction.__pfn;
  }
  else
  {
    v5 = this->m_postSpawnDelegate.m_Closure.m_pFunction.__pfn;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  v6 = (m_pthis + this->m_postSpawnDelegate.m_Closure.m_pFunction.__delta);
  if ( (v5 & 1) != 0 )
    v5 = *(v5 + *v6 - 1);
  (v5)(v6, ehandleList.m_Size, ehandleList.m_Memory.m_pMemory);
LABEL_9:
  v7 = !this->m_bInvokePostDataUpdates;
  v8 = *(&stru_19F20.r_offset + this);
  *(&stru_19F20.r_offset + this) = 1;
  if ( v7 || this->m_nQueuedCreationDepth > 1 )
    CEntitySystem::ExecuteQueuedActivates(this, &ehandleList);
  else
    CEntitySystem::ExecuteQueuedPostDataUpdateAndActivates(this, &ehandleList);
  m_nQueuedCreationDepth = this->m_nQueuedCreationDepth;
  *(&stru_19F20.r_offset + this) = v8;
  this->m_nQueuedCreationDepth = --m_nQueuedCreationDepth;
  if ( m_nQueuedCreationDepth <= 0 )
  {
    if ( m_Size > 0 )
    {
      v10 = 3LL * (m_Size - 1) + 3;
      v11 = 0;
      v12 = 8 * v10;
      do
      {
        v13 = &this->m_creationDelegates.m_Memory.m_pMemory[v11 / 0x18];
        v14 = v13->m_Closure.m_pFunction.__pfn;
        v15 = (v13->m_Closure.m_pthis + v13->m_Closure.m_pFunction.__delta);
        if ( (v14 & 1) != 0 )
          v14 = *(v14 + *v15 - 1);
        (v14)(v15, 0);
        v11 += 24LL;
      }
      while ( v11 != v12 );
    }
    if ( this->m_callQueue.m_queue.m_Count.m_value != 0 )
    {
      init = 0;
      p_m_callQueue = &this->m_callQueue;
      CTSQueue<CFunctor *,false>::PushItem(&this->m_callQueue.m_queue, &init);
      p_m_Tail = &this->m_callQueue.m_queue.m_Tail;
      while ( 1 )
      {
        v35 = &this->m_callQueue;
        v36 = &this->m_callQueue.m_queue.m_Tail;
        p_sequence = &this->m_callQueue.m_queue.m_Head.value.sequence;
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              pNode = this->m_callQueue.m_queue.m_Head.value.pNode;
              v24 = *pNode;
            }
            while ( *pNode == 0 );
            if ( pNode != *p_m_Tail )
              break;
            if ( p_m_callQueue == v24 )
              goto LABEL_22;
            *&v31 = this->m_callQueue.m_queue.m_Head.value.pNode;
            *(&v31 + 1) = v36->value.sequence;
            _InterlockedCompareExchange128(p_m_Tail, *(&v31 + 1) + 1LL, v24, &v31);
          }
          if ( p_m_callQueue != v24 )
          {
            v25 = *(v24 + 8);
            *&v26 = this->m_callQueue.m_queue.m_Head.value.pNode;
            *(&v26 + 1) = *p_sequence;
            if ( _InterlockedCompareExchange128(v35, *p_sequence + 1, v24, &v26) != 0 )
              break;
          }
        }
        _InterlockedSub(&this->m_callQueue.m_queue.m_Count.m_value, 1u);
        pNode[1] = v25;
        v1 = v1;
        while ( 1 )
        {
          m_Head = this->m_callQueue.m_queue.m_FreeNodes.m_Head;
          v1 = (m_Head.value32.DepthAndSequence + 65537) | v1 & 0xFFFFFFFF00000000LL;
          *pNode = m_Head.value.Next;
          v29 = m_Head;
          v30 = _InterlockedCompareExchange128(&this->m_callQueue.m_queue.m_FreeNodes, v1, pNode, &v29);
          v28 = *(&v29.value64x128 + 1);
          if ( v30 != 0 )
            break;
          _mm_pause();
        }
        if ( v25 == 0 )
          break;
        (*(*v25 + 16LL))(v25, pNode, v28, v1);
        (*(*v25 + 8LL))(v25);
      }
    }
LABEL_22:
    if ( *(&off_19EF0 + this) != 0 )
    {
      m_aBuckets = this->m_pooledStrings.m_Lookup.m_aBuckets;
      for ( i = 2048; i != 0; --i )
      {
        CThreadSpinRWLock::LockForRead(m_aBuckets);
        m_aBuckets->m_pFirst = m_aBuckets->m_pFirstUncommitted;
        CThreadSpinRWLock::UnlockRead(m_aBuckets++);
      }
      *(&off_19EF0 + this) = 0;
    }
    if ( this->m_bPerformDeletionPostCreation )
    {
      CEntitySystem::ExecuteQueuedDeletion(this, this->m_bPerformDeallocationPostCreation);
      this->m_bPerformDeletionPostCreation = 0;
      this->m_bPerformDeallocationPostCreation = 0;
    }
    CEntitySystem::ExecuteQueuedSetInPVS(this);
    ehandleList.m_Size = 0;
    CUtlMemory<CEntityHandle,int>::ConvertToExternalMemory(
      &ehandleList.m_Memory,
      &ehandleList.m_Memory.m_FixedMemory,
      50,
      0,
      1,
      0x3FFFFFFFu);
    if ( (ehandleList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&ehandleList.m_Memory);
  }
  else
  {
    ehandleList.m_Size = 0;
    CUtlMemory<CEntityHandle,int>::ConvertToExternalMemory(
      &ehandleList.m_Memory,
      &ehandleList.m_Memory.m_FixedMemory,
      50,
      0,
      1,
      0x3FFFFFFFu);
    if ( (ehandleList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&ehandleList.m_Memory);
  }
}


// CEntitySystem::ForceSetInPVSCallsIntoQueue  (line 4197, @0x00000000030b18a0, libserver.so)
// calls: CEntitySystem::ExecuteQueuedSetInPVS
// callers: CEntitySaveRestoreBlockHandler::PreRestore, CEntitySaveRestoreBlockHandler::PostRestore, CreateEntityTransitionList
void __fastcall CEntitySystem::ForceSetInPVSCallsIntoQueue(CEntitySystem *const this, bool bForceIntoQueue)
{
  if ( bForceIntoQueue )
  {
    ++this->m_nQueueSetInPVSCallsDepth;
  }
  else if ( this->m_nQueueSetInPVSCallsDepth-- == 1 && this->m_nQueuedCreationDepth == 0 )
  {
    CEntitySystem::ExecuteQueuedSetInPVS(this);
  }
}


// CEntitySystem::EnableAutoDeletionExecution  (line 4220, @0x00000000030ad790, libserver.so)
// callers: CSource2EntitySystem::StaticInit
void __fastcall CEntitySystem::EnableAutoDeletionExecution(CEntitySystem *const this, bool bEnable)
{
  this->m_bAutoExecuteQueuedDeletion = bEnable;
}


// CEntitySystem::SuppressAutoDeletionExecution  (line 4229, @0x00000000030b61a0, libserver.so)
// calls: CEntitySystem::ExecuteQueuedDeletion
// callers: CEntitySystem::SuppressAutoDeletionExecution
void __fastcall CEntitySystem::SuppressAutoDeletionExecution(CEntitySystem *const this, bool bSuppress)
{
  if ( this->m_bAutoExecuteQueuedDeletion )
    CEntitySystem::ExecuteQueuedDeletion(this, 0);
}


// CEntitySystem::SuppressAutoDeletionExecution  (line 4229, @0x00000000030b61c0, libserver.so)
// calls: CEntitySystem::SuppressAutoDeletionExecution
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown, CPhysExplosion::Explode, CEntitySystem::DestroyEntityImmediate, CEntitySystem::QueueDestroyAllEntities
void __fastcall CEntitySystem::SuppressAutoDeletionExecution(CEntitySystem *const this, bool bSuppress)
{
  if ( bSuppress )
  {
    ++this->m_nAutoDeletionSuppressCount;
  }
  else if ( this->m_nAutoDeletionSuppressCount-- == 1 )
  {
    CEntitySystem::SuppressAutoDeletionExecution(this, 0);
  }
}


// CEntitySystem::SuppressDestroyImmediate  (line 4250, @0x00000000030ad7a0, libserver.so)
// callers: Physics_RunThinkFunctions
void __fastcall CEntitySystem::SuppressDestroyImmediate(CEntitySystem *const this, bool bSuppress)
{
  if ( bSuppress )
    ++this->m_nDestroyImmediateSuppressCount;
  else
    --this->m_nDestroyImmediateSuppressCount;
}


// CEntitySystem::DestroyEntityImmediate  (line 4267, @0x00000000030b61f0, libserver.so)  // inlines: DeallocateEntityIdentity, GetInstance, SuppressAutoDeletionExecution
// calls: CEntitySystem::QueueDestroyEntity, CEntitySystem::DoDestructEntity, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity, CEntitySystem::OnRemoveEntityFromDatabase, CEntitySystem::SuppressAutoDeletionExecution
// callers: CC_Ent_Info, CEntitySystem::QueueDestroyEntity, CEntitySystem::DestroyEntityImmediate
void __fastcall CEntitySystem::DestroyEntityImmediate(CEntitySystem *const this, CEntityIdentity *pEntity)
{
  uint32 m_flags; // eax
  uint32 v5; // eax
  CEntityInstance *m_pInstance; // r13
  bool v7; // zf
  int (**vptr_IEntityResourceManifestBuilder)(...); // rax
  EntityDeletion_t deletion; // [rsp+0h] [rbp-30h] BYREF

  if ( pEntity != 0 )
  {
    m_flags = pEntity->m_flags;
    if ( (m_flags & 0x800) != 0 )
    {
      CEntitySystem::DoDestructEntity(this, pEntity->m_pInstance, 0);
      CEntityIdentity::FreeAttributes(pEntity, 0);
      CConcreteEntityList::FreeEntity(&this->m_EntityList, pEntity, 1);
    }
    else if ( (m_flags & 0x200) == 0 )
    {
      if ( this->m_nDestroyImmediateSuppressCount <= 0 )
      {
        ++this->m_nAutoDeletionSuppressCount;
        v5 = pEntity->m_flags;
        m_pInstance = pEntity->m_pInstance;
        v7 = pEntity->m_pInstance == 0;
        pEntity->m_flags = v5 | 0x10;
        if ( !v7 )
        {
          if ( (v5 & 4) == 0 )
          {
            vptr_IEntityResourceManifestBuilder = this->_vptr_IEntityResourceManifestBuilder;
            deletion.m_pEntity = pEntity;
            vptr_IEntityResourceManifestBuilder[22](this, 1, &deletion);
          }
          CEntitySystem::OnRemoveEntityFromDatabase(this, pEntity);
        }
        CEntitySystem::DoDestructEntity(this, m_pInstance, 0);
        CEntityIdentity::FreeAttributes(pEntity, 0);
        CConcreteEntityList::FreeEntity(&this->m_EntityList, pEntity, 1);
        CEntitySystem::SuppressAutoDeletionExecution(this, 0);
      }
      else
      {
        CEntitySystem::QueueDestroyEntity(this, pEntity);
      }
    }
  }
}


// CEntitySystem::DestroyEntityImmediate  (line 4315, @0x00000000030b6580, libserver.so)
// calls: CEntitySystem::DestroyEntityImmediate
// callers: FreeContainingEntity, UTIL_RemoveImmediate
void __fastcall CEntitySystem::DestroyEntityImmediate(CEntitySystem *const this, CEntityInstance *pEntity)
{
  if ( pEntity != 0 )
    CEntitySystem::DestroyEntityImmediate(this, pEntity->m_pEntity);
}


// CEntitySystem::UpdateOnRemove  (line 4327, @0x00000000030aa8d0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Init
// callers: CGameEntitySystem::UpdateOnRemove
void __fastcall CEntitySystem::UpdateOnRemove(CEntitySystem *const this, int nCount, const EntityDeletion_t *pDeletion)
{
  char m_bProfilingResourceSystem; // al
  __int64 v7; // rax
  const EntityDeletion_t *v8; // r14
  unsigned int v9; // ebx
  __int16 v10; // cx
  __int64 v11; // rax
  CEntityInstance *m_pInstance; // rdi
  __int64 v13; // rax
  const EntityDeletion_t *v14; // [rsp+8h] [rbp-48h]

  m_bProfilingResourceSystem = 0;
  if ( g_pResourceSystem != 0 )
  {
    v7 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    m_bProfilingResourceSystem = (*(*v7 + 40LL))(v7);
  }
  this->m_bProfilingResourceSystem = m_bProfilingResourceSystem;
  if ( nCount > 0 )
  {
    v8 = pDeletion;
    v14 = &pDeletion[(nCount - 1) + 1];
    while ( 1 )
    {
      v9 = 0;
      if ( m_bProfilingResourceSystem != 0 )
      {
        v10 = 0x7FFF;
        if ( v8->m_pEntity->m_EHandle.m_Index != -1 )
          v10 = v8->m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v9 = (((v8->m_pEntity->m_EHandle.m_Index >> 15) - (v8->m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
        v11 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
        (*(*v11 + 24LL))(v11, v9, 21, 1);
      }
      if ( v8->m_pEntity != 0 )
        m_pInstance = v8->m_pEntity->m_pInstance;
      else
        m_pInstance = 0;
      g_bReceivedChainedRemove = 0;
      (*(m_pInstance->_vptr_IHandleEntity + 11))(m_pInstance);
      if ( this->m_bProfilingResourceSystem )
      {
        ++v8;
        v13 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
        (*(*v13 + 24LL))(v13, v9, 21, 2);
        if ( v8 == v14 )
          return;
      }
      else if ( ++v8 == v14 )
      {
        return;
      }
      m_bProfilingResourceSystem = this->m_bProfilingResourceSystem;
    }
  }
}


// CEntitySystem::ExecuteQueuedDeletion  (line 4359, @0x00000000030b5c40, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<EntityDeletion_t>, Element, EnsureCapacity, GetInstance, GrowMemory, GrowVector, InsertMultipleBefore, Purge, Purge_FixedGrowable, RemoveAll, memcpy, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntitySystem::OnRemoveEntityFromDatabase, CUtlMemory<EntityDeletion_t, int>::Grow, CEntitySystem::ExecuteQueuedDeallocation, memcpy, CUtlMemory<EntityDeletion_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<EntityDeletion_t, CUtlMemoryFixedGrowable<EntityDeletion_t, 256ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown, CGameEntitySystem::CleanupDeleteList, CEntitySystem::SuppressAutoDeletionExecution, CEntitySystem::QueueDestroyEntity, CEntitySystem::ExecuteQueuedCreation, CEntitySystem::ExecuteQueuedOperations
void __fastcall CEntitySystem::ExecuteQueuedDeletion(CEntitySystem *const this, bool bPerformDeallocation)
{
  bool v3; // zf
  char v4; // al
  CUtlVectorFixedGrowable<EntityDeletion_t,256ul> *p_currDestroys; // rcx
  int m_Size; // eax
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  EntityDeletion_t *v11; // r13
  CEntityIdentity *m_pEntity; // rax
  int v13; // eax
  int v14; // edx
  EntityDeletion_t *v15; // rax
  __int64 v16; // rbx
  EntityDeletion_t *v17; // r13
  int v18; // ebx
  int v19; // eax
  uint32 m_nGrowSize; // eax
  int v21; // esi
  unsigned int v22; // eax
  int v23; // r14d
  int m_nAllocationCount; // eax
  EntityDeletion_t *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  EntityDeletion_t *v28; // rcx
  __int64 (__fastcall **v29)(_QWORD *, __int64, __int64, CUtlVectorFixedGrowable<EntityDeletion_t,256ul> *); // rax
  EntityDeletion_t *v30; // rax
  EntityDeletion_t *m_pMemory; // rbx
  EntityDeletion_t *v32; // rax
  int nCompleted_0; // [rsp+24h] [rbp-85Ch]
  int i; // [rsp+28h] [rbp-858h]
  int nCurrCount; // [rsp+2Ch] [rbp-854h]
  CUtlVectorFixedGrowable<EntityDeletion_t,256ul> currDestroys; // [rsp+30h] [rbp-850h] BYREF
  unsigned __int64 v38; // [rsp+848h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( this->m_nQueuedDestructionDepth != 0 )
    return;
  if ( this->m_nQueuedCreationDepth != 0 )
  {
    v3 = !this->m_bPerformDeallocationPostCreation;
    v4 = 1;
    this->m_bPerformDeletionPostCreation = 1;
    if ( v3 )
      v4 = bPerformDeallocation;
    this->m_bPerformDeallocationPostCreation = v4;
    return;
  }
  this->m_nQueuedDestructionDepth = 1;
  if ( bPerformDeallocation )
    CEntitySystem::ExecuteQueuedDeallocation(this);
  currDestroys.m_Memory.m_nAllocationCount = 256;
  p_currDestroys = &currDestroys;
  currDestroys.m_Memory.m_pMemory = &currDestroys.m_Memory.m_FixedMemory;
  m_Size = this->m_QueuedDestroys.m_Size;
  currDestroys.m_Memory.m_nGrowSize = 0x80000000;
  nCompleted_0 = m_Size;
  if ( m_Size != 0 )
  {
    v7 = 256;
    for ( i = 0; ; i = p_currDestroys )
    {
      v8 = 0;
      currDestroys.m_Size = 0;
      nCurrCount = nCompleted_0 - i;
      if ( nCompleted_0 - i > v7 && (currDestroys.m_Memory.m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (currDestroys.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = currDestroys.m_Memory.m_pMemory;
          v32 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * nCurrCount, v7, p_currDestroys);
          currDestroys.m_Memory.m_pMemory = v32;
          if ( m_pMemory != 0 )
            memcpy(v32, m_pMemory, 8LL * currDestroys.m_Memory.m_nAllocationCount);
          currDestroys.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v29 = *g_pMemAlloc;
          if ( currDestroys.m_Memory.m_pMemory != 0 )
            v30 = v29[1](g_pMemAlloc, currDestroys.m_Memory.m_pMemory, 8LL * nCurrCount, p_currDestroys);
          else
            v30 = (*v29)(g_pMemAlloc, 8LL * nCurrCount, v7, p_currDestroys);
          currDestroys.m_Memory.m_pMemory = v30;
        }
        v8 = currDestroys.m_Size;
        currDestroys.m_Memory.m_nAllocationCount = nCompleted_0 - i;
      }
      if ( nCurrCount > 0 )
      {
        v9 = 8LL * i;
        v10 = 8 * (i + (nCurrCount - 1) + 1);
        while ( 1 )
        {
          v11 = &this->m_QueuedDestroys.m_Memory.m_pMemory[v9 / 8];
          v11->m_pEntity->m_flags |= 0x10u;
          m_pEntity = v11->m_pEntity;
          if ( v11->m_pEntity == 0 || m_pEntity->m_pInstance == 0 || (m_pEntity->m_flags & 4) != 0 )
            goto LABEL_14;
          v13 = v8;
          if ( currDestroys.m_Memory.m_nAllocationCount == v8 )
          {
            CUtlMemory<EntityDeletion_t,int>::Grow(&currDestroys.m_Memory, 1);
            v13 = currDestroys.m_Size;
          }
          v14 = v13 + 1;
          currDestroys.m_Size = v13 + 1;
          v15 = &currDestroys.m_Memory.m_pMemory[v8];
          if ( v15 != 0 )
          {
            v9 += 8LL;
            v15->m_pEntity = v11->m_pEntity;
            v8 = currDestroys.m_Size;
            if ( v9 == v10 )
              break;
          }
          else
          {
            v8 = v14;
LABEL_14:
            v9 += 8LL;
            if ( v9 == v10 )
              break;
          }
        }
      }
      if ( v8 != 0 )
        (*(this->_vptr_IEntityResourceManifestBuilder + 22))(this, v8, currDestroys.m_Memory.m_pMemory);
      if ( nCompleted_0 > i )
      {
        v16 = i;
        do
          CEntitySystem::OnRemoveEntityFromDatabase(this, this->m_QueuedDestroys.m_Memory.m_pMemory[v16++].m_pEntity);
        while ( v16 != i + (nCompleted_0 - 1 - i) + 1 );
      }
      v17 = this->m_QueuedDestroys.m_Memory.m_pMemory;
      v18 = this->m_QueuedDeallocation.m_Size;
      if ( nCurrCount == 0 )
        goto LABEL_28;
      v23 = nCurrCount + v18;
      m_nAllocationCount = this->m_QueuedDeallocation.m_Memory.m_nAllocationCount;
      if ( nCurrCount + v18 > m_nAllocationCount )
        CUtlMemory<EntityDeletion_t,int>::Grow(&this->m_QueuedDeallocation.m_Memory, v23 - m_nAllocationCount);
      this->m_QueuedDeallocation.m_Size = v23;
      v25 = &v17[i];
      if ( v25 != 0 && nCurrCount > 0 )
      {
        v26 = 0;
        v27 = v18;
        do
        {
          v28 = &this->m_QueuedDeallocation.m_Memory.m_pMemory[v27];
          if ( v28 != 0 )
            v28->m_pEntity = v25[v26];
          ++v26;
          ++v27;
        }
        while ( nCurrCount > v26 );
        if ( bPerformDeallocation )
LABEL_47:
          CEntitySystem::ExecuteQueuedDeallocation(this);
      }
      else
      {
LABEL_28:
        if ( bPerformDeallocation )
          goto LABEL_47;
      }
      v19 = this->m_QueuedDestroys.m_Size;
      if ( v19 <= nCompleted_0 || v19 == 0 )
      {
        m_nGrowSize = currDestroys.m_Memory.m_nGrowSize;
        this->m_QueuedDestroys.m_Size = 0;
        currDestroys.m_Size = 0;
        v21 = currDestroys.m_Memory.m_nAllocationCount;
        --this->m_nQueuedDestructionDepth;
        v22 = m_nGrowSize & 0xC0000000;
        if ( v21 >= 0 )
          goto LABEL_34;
        goto LABEL_58;
      }
      p_currDestroys = nCompleted_0;
      nCompleted_0 = this->m_QueuedDestroys.m_Size;
      v7 = currDestroys.m_Memory.m_nAllocationCount;
    }
  }
  --this->m_nQueuedDestructionDepth;
  v22 = 0x80000000;
  this->m_QueuedDestroys.m_Size = 0;
  currDestroys.m_Size = 0;
LABEL_34:
  if ( currDestroys.m_Memory.m_pMemory == &currDestroys.m_Memory.m_FixedMemory )
  {
LABEL_58:
    if ( v22 == 0 )
      CUtlMemory<EntityDeletion_t,int>::Purge(&currDestroys.m_Memory);
  }
  else if ( currDestroys.m_Memory.m_pMemory != 0 && v22 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CEntitySystem::ExecuteQueuedDeallocation  (line 4442, @0x00000000030ad7d0, libserver.so)  // inlines: DeallocateEntityIdentity, GetInstance, RemoveAll
// calls: CEntitySystem::DoDestructEntity, CEntityIdentity::FreeAttributes, CConcreteEntityList::FreeEntity
// callers: CEntitySystem::ExecuteQueuedDeletion, CEntitySystem::ClearEntityDatabase
void __fastcall CEntitySystem::ExecuteQueuedDeallocation(CEntitySystem *const this)
{
  int m_Size; // eax
  CConcreteEntityList *p_m_EntityList; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *m_pEntity; // rbx

  m_Size = this->m_QueuedDeallocation.m_Size;
  if ( m_Size > 0 )
  {
    p_m_EntityList = &this->m_EntityList;
    v4 = 0;
    v5 = 8LL * (m_Size - 1) + 8;
    do
    {
      m_pEntity = this->m_QueuedDeallocation.m_Memory.m_pMemory[v4 / 8].m_pEntity;
      if ( m_pEntity != 0 )
        m_pInstance = m_pEntity->m_pInstance;
      else
        m_pInstance = 0;
      v4 += 8LL;
      CEntitySystem::DoDestructEntity(this, m_pInstance, 0);
      CEntityIdentity::FreeAttributes(m_pEntity, 0);
      CConcreteEntityList::FreeEntity(p_m_EntityList, m_pEntity, 1);
    }
    while ( v4 != v5 );
  }
  this->m_QueuedDeallocation.m_Size = 0;
}


// CEntitySystem::ExecuteQueuedOperations  (line 4462, @0x00000000030b6b10, libserver.so)
// calls: CEntitySystem::ExecuteQueuedDeletion, CEntitySystem::ExecuteQueuedCreation
// callers: CEntity2SaveRestore::EndRestoreEntities, CEntity2SaveRestore::BeginRestoreEntities, CLoopModeGame::OnServerSimulate, CLoopModeGame::OnPostDataUpdate, CLoopModeGame::OnLoopActivate, CLoadingSpawnGroup::Release, CSource2Server::GameFrame, CEntitySystem::ClearEntityDatabase, CEntitySystem::Shutdown
void __fastcall CEntitySystem::ExecuteQueuedOperations(CEntitySystem *const this, bool bPerformDeallocationOnDeletes)
{
  CEntitySystem::ExecuteQueuedDeletion(this, bPerformDeallocationOnDeletes);
  do
    CEntitySystem::ExecuteQueuedCreation(this);
  while ( this->m_QueuedCreates.m_Size > 0 );
}


// CEntitySystem::IsServerEntitySystem  (line 4472, @0x00000000030ad870, libserver.so)
// callers: CEntityInstance::RemoveSelf, CEntityInstance::IsAuthoritative
bool __fastcall CEntitySystem::IsServerEntitySystem(const CEntitySystem *const this)
{
  return this->m_nNetworkMode == NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0;
}


// CEntitySystem::AddRefKeyValues  (line 4478, @0x00000000030aaa30, libserver.so)  // inlines: AddRef
void __fastcall CEntitySystem::AddRefKeyValues(CEntitySystem *const this, const CEntityKeyValues *pKeyValues)
{
  ++pKeyValues->m_nRefCount;
}


// CEntitySystem::ReleaseKeyValues  (line 4483, @0x00000000030abc60, libserver.so)  // inlines: Release
// calls: CEntityKeyValues::~CEntityKeyValues, operator delete
void __fastcall CEntitySystem::ReleaseKeyValues(CEntitySystem *const this, const CEntityKeyValues *pKeyValues)
{
  if ( --pKeyValues->m_nRefCount <= 0 )
  {
    CEntityKeyValues::~CEntityKeyValues(pKeyValues);
    operator delete(pKeyValues);
  }
}


// CEntitySystem::LockResourceManifest  (line 4492, @0x00000000030aaa40, libserver.so)  // inlines: GetActiveSpawnGroupHandle, GetSpawnOriginOffset, SetActiveSpawnGroupHandle, SetSpawnOriginOffset
// callers: CGameEntitySystem::LockResourceManifest
void __fastcall CEntitySystem::LockResourceManifest(
        CEntitySystem *const this,
        bool bLock,
        CEntityResourceManifestLock *const context)
{
  bool v3; // cc
  IEntityResourceManifest *m_pCurrentManifest; // rbx
  matrix3x4a_t *p_m_vSpawnOriginOffset; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r12
  SpawnGroupHandle_t m_ActiveSpawnGroupHandle; // r13d

  if ( context->m_bIsLocked != bLock )
  {
    context->m_bIsLocked = bLock;
    v3 = this->m_nQueuedCreationDepth <= 1;
    m_pCurrentManifest = this->m_pCurrentManifest;
    this->m_pCurrentManifest = context->m_pManifest;
    p_m_vSpawnOriginOffset = &this->m_vSpawnOriginOffset;
    if ( !v3 )
      p_m_vSpawnOriginOffset = &g_MatrixIdentity;
    v6 = *&p_m_vSpawnOriginOffset->m_flMatVal[0][0];
    v7 = *&p_m_vSpawnOriginOffset->m_flMatVal[0][2];
    v8 = *&p_m_vSpawnOriginOffset->m_flMatVal[1][0];
    v9 = *&p_m_vSpawnOriginOffset->m_flMatVal[1][2];
    v10 = *&p_m_vSpawnOriginOffset->m_flMatVal[2][0];
    v11 = *&p_m_vSpawnOriginOffset->m_flMatVal[2][2];
    m_ActiveSpawnGroupHandle = this->m_ActiveSpawnGroupHandle;
    *&this->m_vSpawnOriginOffset.m_flMatVal[0][0] = *&context->m_vSpawnGroupOffset.m_flMatVal[0][0];
    *(&stru_19F38.r_offset + this) = *&context->m_vSpawnGroupOffset.m_flMatVal[0][2];
    *&this->m_vSpawnOriginOffset.m_flMatVal[1][0] = *&context->m_vSpawnGroupOffset.m_flMatVal[1][0];
    *(&stru_19F50.r_offset + this) = *&context->m_vSpawnGroupOffset.m_flMatVal[2][0];
    *&this->m_vSpawnOriginOffset.m_flMatVal[2][2] = *&context->m_vSpawnGroupOffset.m_flMatVal[2][2];
    this->m_ActiveSpawnGroupHandle = context->m_hSpawnGroup;
    if ( bLock )
    {
      context->m_pManifest = m_pCurrentManifest;
      *&context->m_vSpawnGroupOffset.m_flMatVal[0][0] = v6;
      *&context->m_vSpawnGroupOffset.m_flMatVal[0][2] = v7;
      *&context->m_vSpawnGroupOffset.m_flMatVal[1][0] = v8;
      *&context->m_vSpawnGroupOffset.m_flMatVal[1][2] = v9;
      *&context->m_vSpawnGroupOffset.m_flMatVal[2][0] = v10;
      *&context->m_vSpawnGroupOffset.m_flMatVal[2][2] = v11;
      context->m_hSpawnGroup = m_ActiveSpawnGroupHandle;
    }
  }
}


// CEntitySystem::BuildResourceManifest  (line 4521, @0x00000000030b5410, libserver.so)  // inlines: CPreserveValueScopeGuard, GetActiveSpawnGroupHandle, GetInstance, GetSpawnOriginOffset, Release, SetActiveSpawnGroupHandle, SetSpawnOriginOffset, ~CPreserveValueScopeGuard
// calls: CEntitySystem::UnserializeForPrecache, _Unwind_Resume
// callers: CGameEntitySystem::BuildResourceManifest
// local variable allocation has failed, the output may be wrong!
void __fastcall CEntitySystem::BuildResourceManifest(
        CEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        int nEntityCount,
        const EntitySpawnInfo_t *pEntities,
        const matrix3x4a_t *const vecSpawnGroupOffset,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  bool v8; // cc
  matrix3x4a_t *p_m_vSpawnOriginOffset; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  const EntitySpawnInfo_t *v13; // rbx
  const EntitySpawnInfo_t *v14; // r15
  char v15; // al
  __int64 v16; // rdx
  CEntityIdentity *m_pEntity; // rsi
  CEntityInstance *m_pInstance; // rdi
  bool v19; // zf
  __int64 v20; // rax
  IEntityResourceManifest *pCurr; // [rsp+8h] [rbp-A8h]
  SpawnGroupHandle_t v22; // [rsp+10h] [rbp-A0h]
  _BYTE prevEntity[17]; // [rsp+17h] [rbp-99h] OVERLAPPED BYREF
  __int64 v24; // [rsp+28h] [rbp-88h]
  CEntityPrecacheContext context; // [rsp+30h] [rbp-80h] BYREF
  matrix3x4a_t vPrevOffset; // [rsp+50h] [rbp-60h]

  v8 = this->m_nQueuedCreationDepth <= 1;
  pCurr = this->m_pCurrentManifest;
  p_m_vSpawnOriginOffset = &this->m_vSpawnOriginOffset;
  this->m_pCurrentManifest = pResourceManifest;
  if ( !v8 )
    p_m_vSpawnOriginOffset = &g_MatrixIdentity;
  v10 = *&p_m_vSpawnOriginOffset->m_flMatVal[0][0];
  context.m_pConfig = pConfig;
  context.m_pManifest = pResourceManifest;
  *&prevEntity[9] = 0;
  *&vPrevOffset.m_flMatVal[0][0] = v10;
  *&vPrevOffset.m_flMatVal[0][2] = *&p_m_vSpawnOriginOffset->m_flMatVal[0][2];
  *&vPrevOffset.m_flMatVal[1][0] = *&p_m_vSpawnOriginOffset->m_flMatVal[1][0];
  v11 = *&p_m_vSpawnOriginOffset->m_flMatVal[2][0];
  v12 = *&p_m_vSpawnOriginOffset->m_flMatVal[2][2];
  *&vPrevOffset.m_flMatVal[2][0] = v11;
  *&vPrevOffset.m_flMatVal[2][2] = v12;
  *&this->m_vSpawnOriginOffset.m_flMatVal[0][0] = *&vecSpawnGroupOffset->m_flMatVal[0][0];
  *(&stru_19F38.r_offset + this) = *&vecSpawnGroupOffset->m_flMatVal[0][2];
  *&this->m_vSpawnOriginOffset.m_flMatVal[1][0] = *&vecSpawnGroupOffset->m_flMatVal[1][0];
  *(&stru_19F50.r_offset + this) = *&vecSpawnGroupOffset->m_flMatVal[2][0];
  *&this->m_vSpawnOriginOffset.m_flMatVal[2][2] = *&vecSpawnGroupOffset->m_flMatVal[2][2];
  LODWORD(v12) = this->m_ActiveSpawnGroupHandle;
  this->m_ActiveSpawnGroupHandle = hSpawnGroup;
  v22 = v12;
  prevEntity[0] = g_bReceivedChainedPrecache;
  v24 = 0;
  if ( nEntityCount > 0 )
  {
    v13 = pEntities;
    v14 = &pEntities[(nEntityCount - 1) + 1];
    v15 = 0;
    do
    {
      if ( v13->m_pEntity != 0 )
      {
        v19 = v15 == 0;
        v20 = *pResourceManifest;
        if ( v19 )
        {
          *&prevEntity[9] = (*(v20 + 32))(pResourceManifest, v13);
          v24 = v16;
        }
        else
        {
          (*(v20 + 32))(pResourceManifest, v13);
        }
        m_pEntity = v13->m_pEntity;
        context.m_pKeyValues = v13->m_pKeyValues;
        CEntitySystem::UnserializeForPrecache(this, m_pEntity, context.m_pKeyValues);
        g_bReceivedChainedPrecache = 0;
        if ( v13->m_pEntity != 0 )
          m_pInstance = v13->m_pEntity->m_pInstance;
        else
          m_pInstance = 0;
        (*(m_pInstance->_vptr_IHandleEntity + 6))(m_pInstance, &context);
        v15 = 1;
      }
      ++v13;
    }
    while ( v13 != v14 );
    if ( v15 != 0 )
      (*(*pResourceManifest + 32LL))(pResourceManifest, &prevEntity[9]);
  }
  this->m_ActiveSpawnGroupHandle = v22;
  *&this->m_vSpawnOriginOffset.m_flMatVal[0][0] = *&vPrevOffset.m_flMatVal[0][0];
  *(&stru_19F38.r_offset + this) = *&vPrevOffset.m_flMatVal[0][2];
  *&this->m_vSpawnOriginOffset.m_flMatVal[1][0] = *&vPrevOffset.m_flMatVal[1][0];
  *(&stru_19F50.r_offset + this) = *&vPrevOffset.m_flMatVal[2][0];
  *&this->m_vSpawnOriginOffset.m_flMatVal[2][2] = *&vPrevOffset.m_flMatVal[2][2];
  this->m_pCurrentManifest = pCurr;
  g_bReceivedChainedPrecache = prevEntity[0];
}


// CEntitySystem::BuildResourceManifest  (line 4588, @0x00000000030bdfb0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, TempString, operator[]
// calls: CEntitySystem::PrecacheEntity
// callers: CGameEntitySystem::BuildResourceManifest
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CEntitySystem::BuildResourceManifest(
        CEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        int nEntityKeyValueCount,
        const CEntityKeyValues **ppEntityKeyValues,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  IEntityResourceManifest *m_pCurrentManifest; // rax
  IEntityPrecacheConfiguration *v9; // r13
  const CEntityKeyValues **v10; // r14
  const CEntityKeyValues **v11; // r12
  const CEntityKeyValues *v12; // rcx
  int m_nCount; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v15; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rdx
  CEntityIdentity *v20; // rax
  const CEntityKeyValues *v21; // rdx
  const CEntityKeyValues *v22; // rdx
  IEntityResourceManifest *pCurr; // [rsp+0h] [rbp-70h]
  EntitySpawnInfo_t prevEntity; // [rsp+20h] [rbp-50h] BYREF
  EntitySpawnInfo_t currEntity; // [rsp+30h] [rbp-40h] BYREF

  m_pCurrentManifest = this->m_pCurrentManifest;
  currEntity.m_pEntity = 0;
  this->m_pCurrentManifest = pResourceManifest;
  pCurr = m_pCurrentManifest;
  if ( nEntityKeyValueCount > 0 )
  {
    v9 = pConfig;
    v10 = ppEntityKeyValues;
    v11 = &ppEntityKeyValues[(nEntityKeyValueCount - 1) + 1];
    while ( 1 )
    {
      v12 = *v10;
      m_nCount = (*v10)->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
        break;
      m_nAllocated = v12->m_keyHashes.m_nAllocated;
      v15 = 0;
      pConfig = m_nAllocated;
      while ( m_nAllocated == 0 )
      {
        if ( *(4 * v15) == -971301790 )
          goto LABEL_11;
LABEL_8:
        if ( m_nCount <= ++v15 )
          goto LABEL_18;
      }
      m_pElements = (&v12->m_keyHashes.m_nAllocAllocated + 1);
      if ( m_nAllocated > 9 )
        m_pElements = v12->m_keyHashes.m_pElements;
      if ( m_pElements[v15] != -971301790 )
        goto LABEL_8;
LABEL_11:
      if ( v12->m_keyValues.m_nAllocated != 0 )
        v17 = v12->m_keyValues.m_pElements;
      else
        v17 = 0;
      p_m_value = &v17[v15].m_value;
      m_uint64 = "";
      if ( p_m_value->m_type != 30 )
        goto LABEL_19;
LABEL_14:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_uint64 != 0 && *m_uint64 != 0 )
      {
LABEL_16:
        currEntity.m_pKeyValues = *v10++;
        v20 = (*(*pResourceManifest + 32LL))(pResourceManifest, &currEntity, m_uint64, v12, pConfig);
        prevEntity.m_pKeyValues = v21;
        v22 = *(v10 - 1);
        prevEntity.m_pEntity = v20;
        CEntitySystem::PrecacheEntity(this, hSpawnGroup, v22, v9, pResourceManifest);
        (*(*pResourceManifest + 32LL))(pResourceManifest, &prevEntity);
        if ( v10 == v11 )
          goto LABEL_17;
      }
      else
      {
LABEL_20:
        if ( ++v10 == v11 )
          goto LABEL_17;
      }
    }
LABEL_18:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_14;
LABEL_19:
    if ( asc_32DB004[2] != 0 )
      goto LABEL_16;
    goto LABEL_20;
  }
LABEL_17:
  this->m_pCurrentManifest = pCurr;
}


// CEntitySystem::BuildResourceManifest  (line 4616, @0x00000000030aab30, libserver.so)
void __fastcall CEntitySystem::BuildResourceManifest(
        CEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pEntityKeyValues,
        const char *pFilterName,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  if ( pEntityKeyValues != 0 )
    (*(this->_vptr_IEntityResourceManifestBuilder + 1))(
      this,
      hSpawnGroup,
      pEntityKeyValues->m_Size,
      pEntityKeyValues->m_Memory.m_pMemory,
      pConfig,
      pResourceManifest);
}


// CEntitySystem::BuildResourceManifest  (line 4629, @0x00000000030aab60, libserver.so)
// callers: CGameEntitySystem::BuildResourceManifest
void __fastcall CEntitySystem::BuildResourceManifest(
        CEntitySystem *const this,
        const char *pManifestNameOrGroupName,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  IEntityResourceManifest *m_pCurrentManifest; // r12

  m_pCurrentManifest = this->m_pCurrentManifest;
  this->m_pCurrentManifest = pResourceManifest;
  (**pResourceManifest)(pResourceManifest, pManifestNameOrGroupName, pConfig);
  this->m_pCurrentManifest = m_pCurrentManifest;
}


// CEntitySystem::BuildResourceManifest  (line 4638, @0x00000000030aab90, libserver.so)
// callers: CGameEntitySystem::BuildResourceManifest
void __fastcall CEntitySystem::BuildResourceManifest(
        CEntitySystem *const this,
        EntityResourceManifestCreationCallback_t callback,
        void *pContext,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  IEntityResourceManifest *m_pCurrentManifest; // r12

  m_pCurrentManifest = this->m_pCurrentManifest;
  this->m_pCurrentManifest = pResourceManifest;
  callback(pResourceManifest, pContext);
  this->m_pCurrentManifest = m_pCurrentManifest;
}


// CEntitySystem::BuildResourceManifestForEntity  (line 4646, @0x00000000030be140, libserver.so)  // inlines: AddKeyValue<char const*>, AddRef, AddToTail, AddToTailGetPtr, Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, Allocate<Vector4D>, Allocate<Vector>, AssignTo<CEntityVariantAllocator>, Base, CEntityKeyValuesModifyScope, CVariantBase, Construct<CEntityKeyValues::KeyValueInfo_t>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Destruct<CEntityKeyValues::KeyValueInfo_t>, Element, EnsureCapacity, FindKeyHash, Free, KeyValueInfo_t, LeafCodeInfo_t, Release, SetValue, V_strlen, memcpy, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CVariantBase, ~KeyValueInfo_t
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValuesModifyScope::Release, CEntitySystem::PrecacheEntity, CEntityKeyValues::~CEntityKeyValues, operator delete, Warning, CEntityVariantAllocator::Allocate, strlen, memcpy, LoggingSystem_IsChannelEnabled (16 total)
// callers: CGameEntitySystem::BuildResourceManifestForEntity
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow", "EnsureCapacity"
// globals: jpt_30BE499
// write access to const memory has been detected, the output may be wrong!
void __fastcall CEntitySystem::BuildResourceManifestForEntity(
        CEntitySystem *const this,
        const char *pEntityDesignerName,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  CEntityKeyValues *v6; // rbx
  IEntityResourceManifest *m_pCurrentManifest; // r13
  __int64 v8; // rax
  CEntityIdentity *v9; // rax
  const CEntityKeyValues *v10; // rdx
  bool v11; // cc
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  unsigned __int64 m_nAllocated; // rdx
  int v17; // esi
  int v18; // r13d
  int v19; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rax
  int v21; // eax
  int v22; // edx
  __int16 v23; // cx
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  int16 m_type; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r13
  __int16 v32; // ax
  _DWORD *v33; // rax
  uint16 m_flags; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v35; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v36; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v38; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v39; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // r13
  uint16 v41; // ax
  void *v42; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  __int16 v44; // ax
  _DWORD *v45; // rax
  __int16 v46; // ax
  void *v47; // rax
  __int16 v48; // ax
  __int16 v49; // ax
  __int16 v50; // ax
  _DWORD *v51; // rax
  __int16 v52; // ax
  void *v53; // rax
  int v54; // ecx
  void *v55; // rcx
  unsigned __int64 v56; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // r8
  __int64 v75; // r9
  signed int v76; // [rsp+Ch] [rbp-104h]
  __int64 v77; // [rsp+10h] [rbp-100h]
  char *s; // [rsp+18h] [rbp-F8h]
  char *sa; // [rsp+18h] [rbp-F8h]
  char *sb; // [rsp+18h] [rbp-F8h]
  char *sc; // [rsp+18h] [rbp-F8h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v82; // [rsp+20h] [rbp-F0h]
  __int64 v83; // [rsp+28h] [rbp-E8h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v84; // [rsp+30h] [rbp-E0h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v85; // [rsp+32h] [rbp-DEh]
  __int16 v86; // [rsp+34h] [rbp-DCh]
  signed int v87; // [rsp+34h] [rbp-DCh]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v89; // [rsp+40h] [rbp-D0h]
  signed int v90; // [rsp+40h] [rbp-D0h]
  CEntityKeyValuesModifyScope_0 sg; // [rsp+50h] [rbp-C0h] BYREF
  EntitySpawnInfo_t currEntity; // [rsp+60h] [rbp-B0h] BYREF
  EntitySpawnInfo_t prevEntity; // [rsp+70h] [rbp-A0h] BYREF
  LeafCodeInfo_t v95; // [rsp+80h] [rbp-90h] BYREF
  LeafCodeInfo_t v96; // [rsp+A0h] [rbp-70h] BYREF
  LeafCodeInfo_t v97; // [rsp+C0h] [rbp-50h] BYREF

  v6 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v6);
  ++v6->m_nRefCount;
  sg.m_pKeyValues = 0;
  sg.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&sg, v6);
  if ( v6->m_nQueuedForSpawnCount > 0 )
    goto LABEL_2;
  m_nCount = v6->m_keyHashes.m_nCount;
  if ( v6->m_keyHashes.m_nCount <= 0 )
  {
LABEL_13:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_113;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v60, v61, v58, v59, v62, v63) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_113:
        v95.m_szFile = "../public/tier1/utlleanvector.h";
        v95.m_szFunction = "AddToTailGetPtr";
        v95.m_nLine = 557;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v95,
          "%s allocation count overflow",
          "AddToTailGetPtr");
      }
    }
    m_nAllocated = v6->m_keyHashes.m_nAllocated;
    v17 = m_nCount + 1;
    if ( v17 > m_nAllocated )
    {
      LOWORD(v18) = m_nCount + 1;
      if ( v17 > 9 )
      {
        if ( m_nCount == 0x7FFF )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_123;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v72, v73, v70, v71, v74, v75) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_123:
            v96.m_szFile = "../public/tier1/utlleanvector.h";
            v96.m_szFunction = "EnsureCapacity";
            v96.m_nLine = 104;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v96,
              "%s allocation count overflow",
              "EnsureCapacity");
          }
        }
        v18 = v6->m_keyHashes.m_nAllocated;
        while ( 1 )
        {
          v19 = v18;
          if ( v17 <= v18 )
            break;
          if ( v18 <= 16382 )
          {
            v54 = 2 * v18;
            v18 = 8;
            if ( 2 * v19 > 7 )
              v18 = v54;
          }
          else
          {
            v18 = 0x7FFF;
          }
        }
      }
      if ( m_nAllocated > 9 )
      {
        v6->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v6->m_keyHashes.m_pElements, 4LL * v18);
        m_nCount = v6->m_keyHashes.m_nCount;
      }
      else if ( v18 > 9 )
      {
        v55 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v18);
        v56 = v6->m_keyHashes.m_nAllocated;
        if ( v56 != 0 )
        {
          m_pElements = (&v6->m_keyHashes.m_nAllocAllocated + 1);
          if ( v56 > 9 )
            m_pElements = v6->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        v6->m_keyHashes.m_pElements = memcpy(v55, m_pElements, 4LL * v6->m_keyHashes.m_nCount);
        m_nCount = v6->m_keyHashes.m_nCount;
      }
      v6->m_keyHashes.m_nAllocated = v18;
      m_nAllocated = v18;
    }
    v6->m_keyHashes.m_nCount = m_nCount + 1;
    if ( m_nAllocated != 0 )
    {
      v20 = (&v6->m_keyHashes.m_nAllocAllocated + 1);
      if ( m_nAllocated > 9 )
        v20 = v6->m_keyHashes.m_pElements;
    }
    else
    {
      v20 = 0;
    }
    v20[m_nCount] = -971301790;
    v77 = m_nCount;
    v84 = v6->m_keyValues.m_nCount;
    if ( v84 == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_118;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v66, v67, v64, v65, v68, v69) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_118:
        v97.m_szFile = "../public/tier1/utlleanvector.h";
        v97.m_szFunction = "AddToTailGetPtr";
        v97.m_nLine = 557;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v97,
          "%s allocation count overflow",
          "AddToTailGetPtr");
      }
    }
    v21 = v6->m_keyValues.m_nAllocated;
    v22 = v84 + 1;
    v85 = v6->m_keyValues.m_nAllocated;
    if ( v22 > v21 )
    {
      v23 = v6->m_keyValues.m_nAllocated;
      while ( v22 > v21 )
      {
        if ( v23 <= 16382 )
        {
          v23 *= 2;
          v11 = 2 * v21 <= 1;
          v21 = v23;
          if ( v11 )
          {
            v23 = 2;
            v21 = 2;
          }
        }
        else
        {
          v23 = 0x7FFF;
          v21 = 0x7FFF;
        }
      }
      v85 = v23;
      v83 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v23);
      if ( v6->m_keyValues.m_nAllocated != 0 )
        v82 = v6->m_keyValues.m_pElements;
      else
        v82 = 0;
      v24 = v6->m_keyValues.m_nCount;
      if ( v85 <= v24 )
        v24 = v85;
      v86 = 0;
      if ( v24 > 0 )
      {
        do
        {
          v25 = v86;
          v26 = v25 * 24 + v83;
          if ( v25 * 24 + v83 != 0 )
          {
            v27 = &v82[v25];
            *v26 = 0;
            *(v26 + 10) = 0;
          }
          else
          {
            v27 = &v82[v25];
          }
          v89 = v27;
          *v26 = 0;
          *(v26 + 8) = 0;
          m_type = v27->m_value.m_type;
          switch ( m_type )
          {
            case 3:
              s = v89->m_value.m_uint64;
              v49 = *(v26 + 10);
              if ( (v49 & 1) != 0 )
                *(v26 + 10) = v49 & 0xFFFE;
              *(v26 + 8) = 3;
              v33 = CEntityVariantAllocator::Allocate(0xCu);
              goto LABEL_47;
            case 4:
              sa = v89->m_value.m_uint64;
              v48 = *(v26 + 10);
              if ( (v48 & 1) != 0 )
                *(v26 + 10) = v48 & 0xFFFE;
              *(v26 + 8) = 4;
              v45 = CEntityVariantAllocator::Allocate(0x10u);
              goto LABEL_70;
            case 25:
              sc = v89->m_value.m_uint64;
              v50 = *(v26 + 10);
              if ( (v50 & 1) != 0 )
                *(v26 + 10) = v50 & 0xFFFE;
              *(v26 + 8) = 25;
              v51 = CEntityVariantAllocator::Allocate(8u);
              *v26 = v51;
              *v51 = *sc;
              v51[1] = *(sc + 1);
              *(v26 + 10) |= 1u;
              break;
            case 27:
              sa = v89->m_value.m_uint64;
              v44 = *(v26 + 10);
              if ( (v44 & 1) != 0 )
                *(v26 + 10) = v44 & 0xFFFE;
              *(v26 + 8) = 27;
              v45 = CEntityVariantAllocator::Allocate(0x10u);
LABEL_70:
              *v26 = v45;
              *v45 = *sa;
              v45[1] = *(sa + 1);
              v45[2] = *(sa + 2);
              v45[3] = *(sa + 3);
              *(v26 + 10) |= 1u;
              break;
            case 30:
              sb = v89->m_value.m_uint64;
              v46 = *(v26 + 10);
              if ( (v46 & 1) != 0 )
                *(v26 + 10) = v46 & 0xFFFE;
              *(v26 + 8) = 30;
              if ( sb != 0 )
              {
                v76 = strlen(sb) + 1;
                v47 = CEntityVariantAllocator::Allocate(v76);
                *v26 = v47;
                memcpy(v47, sb, v76);
                *(v26 + 10) |= 1u;
              }
              break;
            case 39:
              s = v89->m_value.m_uint64;
              v32 = *(v26 + 10);
              if ( (v32 & 1) != 0 )
                *(v26 + 10) = v32 & 0xFFFE;
              *(v26 + 8) = 39;
              v33 = CEntityVariantAllocator::Allocate(0xCu);
LABEL_47:
              *v26 = v33;
              *v33 = *s;
              v33[1] = *(s + 1);
              v33[2] = *(s + 2);
              *(v26 + 10) |= 1u;
              break;
            default:
              *(v26 + 8) = m_type;
              *v26 = v89->m_value.m_uint64;
              break;
          }
          *(v26 + 16) = v89->m_pAttributeName;
          m_flags = v89->m_value.m_flags;
          if ( (m_flags & 1) != 0 )
            v89->m_value.m_flags = m_flags & 0xFFFE;
          ++v86;
          v89->m_value.m_uint64 = 0;
          v89->m_value.m_type = 0;
          v35 = v6->m_keyValues.m_nCount;
          if ( v85 <= v35 )
            v35 = v85;
        }
        while ( v86 < v35 );
      }
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6->m_keyValues.m_pElements);
      v6->m_keyValues.m_pElements = v83;
      v6->m_keyValues.m_nAllocated = v85;
    }
    if ( v85 != 0 )
      v36 = v6->m_keyValues.m_pElements;
    else
      v36 = 0;
    v37 = &v36[v84];
    if ( v37 != 0 )
    {
      v37->m_value.m_uint64 = 0;
      v37->m_value.m_type = 0;
      v37->m_value.m_flags = 0;
      v38 = v6->m_keyValues.m_nAllocated;
    }
    else
    {
      v38 = v85;
    }
    ++v6->m_keyValues.m_nCount;
    if ( v38 != 0 )
      v39 = v6->m_keyValues.m_pElements;
    else
      v39 = 0;
    v40 = &v39[v77];
    v41 = v40->m_value.m_flags;
    if ( (v41 & 1) != 0 )
      v40->m_value.m_flags = v41 & 0xFFFE;
    v40->m_value.m_uint64 = 0;
    v40->m_value.m_type = 30;
    if ( pEntityDesignerName != 0 )
    {
      v87 = strlen(pEntityDesignerName) + 1;
      v42 = CEntityVariantAllocator::Allocate(v87);
      v40->m_value.m_uint64 = v42;
      memcpy(v42, pEntityDesignerName, v87);
      v40->m_value.m_flags |= 1u;
    }
    if ( v6->m_keyValues.m_nAllocated != 0 )
      v43 = v6->m_keyValues.m_pElements;
    else
      v43 = 0;
    v43[v77].m_pAttributeName = 0;
  }
  else
  {
    v13 = v6->m_keyHashes.m_nAllocated;
    v14 = 0;
    while ( 1 )
    {
      if ( v13 != 0 )
      {
        v15 = (&v6->m_keyHashes.m_nAllocAllocated + 1);
        if ( v13 > 9 )
          v15 = v6->m_keyHashes.m_pElements;
      }
      else
      {
        v15 = 0;
      }
      if ( v15[v14] == -971301790 )
        break;
      if ( m_nCount <= ++v14 )
        goto LABEL_13;
    }
    if ( v6->m_keyValues.m_nAllocated != 0 )
    {
      v29 = v6->m_keyValues.m_pElements;
      v30 = v14;
      v31 = &v29[v30];
      if ( v29[v30].m_pAttributeName != 0 )
      {
LABEL_43:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v29[v30].m_pAttributeName);
        goto LABEL_2;
      }
    }
    else
    {
      v30 = v14;
      v29 = 0;
      v31 = v30 * 24;
      if ( *(v30 * 24 + 16) != 0 )
        goto LABEL_43;
    }
    v52 = *(v31 + 10);
    if ( (v52 & 1) != 0 )
      *(v31 + 10) = v52 & 0xFFFE;
    *v31 = 0;
    *(v31 + 8) = 30;
    if ( pEntityDesignerName != 0 )
    {
      v90 = strlen(pEntityDesignerName) + 1;
      v53 = CEntityVariantAllocator::Allocate(v90);
      *v31 = v53;
      memcpy(v53, pEntityDesignerName, v90);
      *(v31 + 10) |= 1u;
    }
  }
LABEL_2:
  CEntityKeyValuesModifyScope::Release(&sg);
  m_pCurrentManifest = this->m_pCurrentManifest;
  this->m_pCurrentManifest = pResourceManifest;
  v8 = *pResourceManifest;
  currEntity.m_pKeyValues = v6;
  currEntity.m_pEntity = 0;
  v9 = (*(v8 + 32))(pResourceManifest, &currEntity);
  prevEntity.m_pKeyValues = v10;
  prevEntity.m_pEntity = v9;
  CEntitySystem::PrecacheEntity(this, 0, v6, pConfig, pResourceManifest);
  (*(*pResourceManifest + 32LL))(pResourceManifest, &prevEntity);
  this->m_pCurrentManifest = m_pCurrentManifest;
  v11 = --v6->m_nRefCount <= 0;
  if ( v11 )
  {
    CEntityKeyValues::~CEntityKeyValues(v6);
    operator delete(v6);
  }
  CEntityKeyValuesModifyScope::Release(&sg);
}


// CEntitySystem::InvokePrecacheCallback  (line 4678, @0x00000000030bec00, libserver.so)  // inlines: GetInstance
// calls: CEntitySystem::AllocateForPrecache, CEntitySystem::DeallocateForPrecache
// callers: CGameEntitySystem::InvokePrecacheCallback
void __fastcall CEntitySystem::InvokePrecacheCallback(
        CEntitySystem *const this,
        ResourceHandle_t hResource,
        const EntitySpawnInfo_t *const info,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest,
        __int64 a6,
        SecondaryPrecacheMemberCallback_t callback)
{
  IEntityResourceManifest *m_pCurrentManifest; // r12
  CEntityIdentity *m_pEntity; // rax
  const CEntityKeyValues *m_pKeyValues; // rsi
  void (*pfn)(CEntityInstance *, ResourceHandle_t, const CEntityPrecacheContext *); // r13
  CEntityInstance *v13; // rdi
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rdi
  CEntityInstance *pEntityInstance; // [rsp+8h] [rbp-58h]
  CEntityPrecacheContext context; // [rsp+10h] [rbp-50h] BYREF

  context.m_pConfig = pConfig;
  m_pCurrentManifest = this->m_pCurrentManifest;
  this->m_pCurrentManifest = pResourceManifest;
  m_pEntity = info->m_pEntity;
  context.m_pManifest = pResourceManifest;
  m_pKeyValues = info->m_pKeyValues;
  pfn = callback.__pfn;
  context.m_pKeyValues = m_pKeyValues;
  if ( m_pEntity != 0 )
  {
    v13 = (m_pEntity->m_pInstance + callback.__delta);
    if ( (callback.__pfn & 1) != 0 )
      pfn = *(v13->_vptr_IHandleEntity + callback.__pfn - 1);
    pfn(v13, hResource, &context);
  }
  else
  {
    v14 = CEntitySystem::AllocateForPrecache(this, m_pKeyValues);
    if ( v14 != 0 )
    {
      v15 = (v14 + callback.__delta);
      if ( (callback.__pfn & 1) != 0 )
        pfn = *(v15->_vptr_IHandleEntity + callback.__pfn - 1);
      pEntityInstance = v14;
      pfn(v15, hResource, &context);
      CEntitySystem::DeallocateForPrecache(this, pEntityInstance);
    }
  }
  this->m_pCurrentManifest = m_pCurrentManifest;
}


// CEntitySystem::RegisterPostUnserializeHandler  (line 4707, @0x00000000030bbe20, libserver.so)  // inlines: AddMultipleToTail, AddString, CUtlAbstractDelegate, Construct<CUtlAbstractDelegate>, Defined, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, LeafCodeInfo_t, SetMementoFrom, operator const UtlSymId_t, operator=, operator[]
// calls: CUtlSymbolTable::Find, LoggingSystem_IsChannelEnabled, CUtlSymbolTable::AddString, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlMemory<CUtlAbstractDelegate, int>::Grow
// strings: "entitysystem.cpp", "RegisterPostUnserializeHandler", "Error: Duplicate post unserialize handler registered (%s)!\n"
// globals: CEntitySystem::s_PostUnserializeHandlers
void __fastcall CEntitySystem::RegisterPostUnserializeHandler(const char *pHandlerName, detail::GenericClass **a2)
{
  __int64 m_szFile_low; // rdx
  __int64 m_Size; // rbx
  int v6; // r12d
  int v7; // r14d
  CUtlAbstractDelegate *m_pMemory; // rax
  CUtlAbstractDelegate *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rdx
  CUtlAbstractDelegate *v13; // rcx
  LeafCodeInfo_t v14; // [rsp+0h] [rbp-40h] BYREF

  CUtlSymbolTable::Find(&v14, &CEntitySystem::s_PostUnserializeHandlers.m_SymbolTable, pHandlerName);
  if ( LOWORD(v14.m_szFile) == 0xFFFF )
  {
    CUtlSymbolTable::AddString(&v14, &CEntitySystem::s_PostUnserializeHandlers.m_SymbolTable, pHandlerName);
    m_szFile_low = LOWORD(v14.m_szFile);
    m_Size = CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Size;
    if ( LOWORD(v14.m_szFile) >= CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Size )
    {
      v6 = LOWORD(v14.m_szFile) + 1;
      if ( CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Size < v6 )
      {
        v7 = v6 - CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Size;
        if ( v6 != CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Size )
        {
          if ( v6 > CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Memory.m_nAllocationCount )
            CUtlMemory<CUtlAbstractDelegate,int>::Grow(
              &CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Memory,
              v6 - CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Memory.m_nAllocationCount);
          CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Size = v6;
          if ( v7 > 0 )
          {
            m_pMemory = CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Memory.m_pMemory;
            v11 = 0;
            v12 = m_Size;
            do
            {
              v13 = &m_pMemory[v12];
              if ( &m_pMemory[v12] != 0 )
              {
                v13->m_pthis = 0;
                v13->m_pFunction.__pfn = 0;
                m_pMemory = CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Memory.m_pMemory;
                v13->m_pFunction.__delta = 0;
              }
              ++v11;
              ++v12;
            }
            while ( v7 > v11 );
            m_szFile_low = LOWORD(v14.m_szFile);
            goto LABEL_8;
          }
          m_szFile_low = LOWORD(v14.m_szFile);
        }
      }
    }
    m_pMemory = CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Memory.m_pMemory;
LABEL_8:
    v9 = &m_pMemory[m_szFile_low];
    v10 = a2[2];
    v9->m_pFunction.__pfn = a2[1];
    v9->m_pFunction.__delta = v10;
    v9->m_pthis = *a2;
    return;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
  {
    v14.m_szFile = "entitysystem.cpp";
    v14.m_szFunction = "RegisterPostUnserializeHandler";
    v14.m_nLine = 4711;
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      LoggingSeverity_t::LS_ERROR,
      &v14,
      "Error: Duplicate post unserialize handler registered (%s)!\n",
      pHandlerName);
  }
}


// CEntitySystem::FindPostUnserializeHandler  (line 4720, @0x00000000030ad890, libserver.so)  // inlines: Clear, Find, SetMementoFrom, operator const UtlSymId_t, operator=, operator[]
// calls: CUtlSymbolTable::Find
// callers: CEntitySystem::AddComponentFieldUnserializer
bool __fastcall CEntitySystem::FindPostUnserializeHandler(const char *pHandlerName, CUtlAbstractDelegate *pDelegate)
{
  CUtlAbstractDelegate *v3; // rcx
  __int64 delta; // rdx
  UtlSymId_t id[16]; // [rsp+0h] [rbp-20h] BYREF

  CUtlSymbolTable::Find(id, &CEntitySystem::s_PostUnserializeHandlers.m_SymbolTable, pHandlerName);
  if ( id[0] == 0xFFFF )
  {
    pDelegate->m_pthis = 0;
    pDelegate->m_pFunction.__pfn = 0;
    pDelegate->m_pFunction.__delta = 0;
    return 0;
  }
  else
  {
    v3 = &CEntitySystem::s_PostUnserializeHandlers.m_Vector.m_Memory.m_pMemory[id[0]];
    delta = v3->m_pFunction.__delta;
    pDelegate->m_pFunction.__pfn = v3->m_pFunction.__pfn;
    pDelegate->m_pFunction.__delta = delta;
    pDelegate->m_pthis = v3->m_pthis;
    return 1;
  }
}


// CEntitySystem::SetActiveSpawnGroupHandle  (line 4735, @0x00000000030ad910, libserver.so)
// callers: CSpawnGroupMgrGameSystem::SetActiveSpawnGroup, CLoopModeGame::OnLoopDeactivate, CBasePlayer::GiveNamedItem
void __fastcall CEntitySystem::SetActiveSpawnGroupHandle(CEntitySystem *const this, SpawnGroupHandle_t handle)
{
  this->m_ActiveSpawnGroupHandle = handle;
}


// CEntitySystem::GetActiveSpawnGroupHandle  (line 4740, @0x00000000030ad920, libserver.so)
// callers: CDevtestHierarchy2::Spawn, CNetworkTransmitComponent::RecomputePVSInformation, CNetworkTransmitComponent::IsInPVS, CMapSpawnGroup::IsActiveSpawnGroup, CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle, CWorldGameSystem::FindWorldInfoForSpawnGroup, CEntitySpawner<CBaseEntity>::CEntitySpawner, CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, CSpawnGroupMgrGameSystem::SetActiveSpawnGroup, CSpawnGroupMgrGameSystem::OnSpawnGroupList, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate (107 total)
SpawnGroupHandle_t __fastcall CEntitySystem::GetActiveSpawnGroupHandle(const CEntitySystem *const this)
{
  return this->m_ActiveSpawnGroupHandle;
}


// CEntitySystem::GetSpawnOriginOffset  (line 4746, @0x00000000030ad930, libserver.so)
// callers: CDevtestHierarchy2::Spawn, CEntitySpawner<CBaseEntity>::CEntitySpawner, CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_PrecacheEntityFromTable, Script_SpawnEntityFromTableSynchronous, CBreakableProp::SetEnableMotionPosition, CreateWorldEntity, CEntitySpawnerAsync<CBaseEntity>::Init, CBaseEntity::Create (79 total)
const matrix3x4a_t *__fastcall CEntitySystem::GetSpawnOriginOffset(CEntitySystem *const this)
{
  const matrix3x4a_t *result; // rax

  result = &this->m_vSpawnOriginOffset;
  if ( this->m_nQueuedCreationDepth > 1 )
    return &g_MatrixIdentity;
  return result;
}


// CEntitySystem::SetSpawnOriginOffset  (line 4755, @0x00000000030ad950, libserver.so)
void __fastcall CEntitySystem::SetSpawnOriginOffset(CEntitySystem *const this, const matrix3x4a_t *const vOffset)
{
  *&this->m_vSpawnOriginOffset.m_flMatVal[0][0] = *&vOffset->m_flMatVal[0][0];
  *(&stru_19F38.r_offset + this) = *&vOffset->m_flMatVal[0][2];
  *&this->m_vSpawnOriginOffset.m_flMatVal[1][0] = *&vOffset->m_flMatVal[1][0];
  *(&stru_19F50.r_offset + this) = *&vOffset->m_flMatVal[2][0];
  *&this->m_vSpawnOriginOffset.m_flMatVal[2][2] = *&vOffset->m_flMatVal[2][2];
}


// CAttributeObjectPool::~CAttributeObjectPool  (line 4767, @0x00000000030c0b40, libserver.so)  // inlines: Detach, Free, Pop, Purge, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause, ~CRenderAttributesDoubleBuffered, ~CTSListBase, ~CTSPointerList, ~CTSPool, ~simpleTSPoolStruct_t
// calls: CAttributeObjectPool::ProcessDeletionQueue, CRenderAttributes::~CRenderAttributes, operator delete, CUtlMemoryPoolBase::Free
void __fastcall CAttributeObjectPool::~CAttributeObjectPool(CAttributeObjectPool *const this)
{
  unsigned __int64 v1; // r12
  __int128 v3; // rt0
  TSLNodeBase_t *Next; // r14
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  TSLNodeBase_t *v7; // rsi
  TSLHead_t v8; // rax
  TSLHead_t m_Head; // rt0
  TSLNodeBase_t *v10; // r12
  unsigned __int64 v11; // rcx
  TSLHead_t v12; // rt0
  __int128 v13; // rt0
  TSLNodeBase_t *v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+8h] [rbp-38h]

  CAttributeObjectPool::ProcessDeletionQueue(this);
  while ( 1 )
  {
    Next = this->m_objectPool.m_Head.value.Next;
    v1 = v1;
    v5 = *(&this->m_objectPool.m_Head.value64x128 + 1);
    if ( this->m_objectPool.m_Head.value.Next == 0 )
      break;
    while ( 1 )
    {
      v1 = (v5 - 1) | v1 & 0xFFFFFFFF00000000LL;
      *&v3 = Next;
      *(&v3 + 1) = v5;
      if ( _InterlockedCompareExchange128(this, v1, Next->Next, &v3) != 0 )
        break;
      _mm_pause();
      Next = this->m_objectPool.m_Head.value.Next;
      v5 = *(&this->m_objectPool.m_Head.value64x128 + 1);
      if ( this->m_objectPool.m_Head.value.Next == 0 )
        goto LABEL_5;
    }
    CRenderAttributes::~CRenderAttributes(&Next[51]);
    CRenderAttributes::~CRenderAttributes(&Next[1]);
    operator delete(Next);
  }
LABEL_5:
  v6 = 0;
  do
  {
    _mm_pause();
    v7 = this->m_deletionQueue.m_Head.value.Next;
    *(&v8.value64x128 + 1) = *(&this->m_deletionQueue.m_Head.value64x128 + 1);
    if ( v7 == 0 )
    {
      v8.value.Next = 0;
      goto LABEL_12;
    }
    v6 = *(&this->m_deletionQueue.m_Head.value64x128 + 1) & 0xFFFF0000LL | v6 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_deletionQueue.m_Head;
  }
  while ( _InterlockedCompareExchange128(&this->m_deletionQueue, v6, 0, &m_Head) == 0 );
  while ( 1 )
  {
    v10 = v7->Next;
    CUtlMemoryPoolBase::Free(&g_TSPointerListNodes, v7);
    if ( v10 == 0 )
      break;
    v7 = v10;
  }
  v8 = this->m_deletionQueue.m_Head;
LABEL_12:
  v11 = 0;
  while ( 1 )
  {
    _mm_pause();
    if ( v8.value.Next == 0 )
      break;
    v11 = v8.value32.DepthAndSequence & 0xFFFF0000 | v11 & 0xFFFFFFFF00000000LL;
    v12 = v8;
    if ( _InterlockedCompareExchange128(&this->m_deletionQueue, v11, 0, &v12) != 0 )
      break;
    v8 = this->m_deletionQueue.m_Head;
  }
  while ( 1 )
  {
    v14 = this->m_objectPool.m_Head.value.Next;
    v15 = *(&this->m_objectPool.m_Head.value64x128 + 1);
    v16 = v16;
    if ( this->m_objectPool.m_Head.value.Next == 0 )
      break;
    while ( 1 )
    {
      v16 = (v15 - 1) | v16 & 0xFFFFFFFF00000000LL;
      *&v13 = v14;
      *(&v13 + 1) = v15;
      if ( _InterlockedCompareExchange128(this, v16, v14->Next, &v13) != 0 )
        break;
      _mm_pause();
      v14 = this->m_objectPool.m_Head.value.Next;
      v15 = *(&this->m_objectPool.m_Head.value64x128 + 1);
      if ( this->m_objectPool.m_Head.value.Next == 0 )
        goto LABEL_19;
    }
    CRenderAttributes::~CRenderAttributes(&v14[51]);
    CRenderAttributes::~CRenderAttributes(&v14[1]);
    operator delete(v14);
  }
LABEL_19:
  _mm_pause();
}


// CAttributeObjectPool::ProcessDeletionQueue  (line 4784, @0x00000000030c02e0, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Free, Init, Pop, PopItem, Purge, Push, PutObject, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, ReleaseValueFromAttribute<CUtlString>, StoreAlignedIntSIMD<(ESIMDLevel)20u>, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause, _mm_store_ps, operator=, ~CUtlAttributeListChunk, ~CUtlString, ~OverflowChunk_t
// calls: CUtlMemoryPoolBase::Free, operator delete, CUtlString::FreeMemoryBlock, CUtlString::Clear
// callers: CAttributeObjectPool::~CAttributeObjectPool, CEntitySystem::PerformPreRenderCleanup, CEntitySystem::CleanUpAttributeObjectPool, CEntitySystem::Shutdown
void __fastcall CAttributeObjectPool::ProcessDeletionQueue(CAttributeObjectPool *const this)
{
  signed __int64 *Next; // rsi
  __int64 v2; // rdx
  __int128 v3; // rt0
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // r12
  fltx4_0 *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  fltx4_0 *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r12
  fltx4_0 *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // r12
  unsigned __int64 v16; // rdx
  fltx4_0 *v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // r12
  fltx4_0 *v20; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // r12
  fltx4_0 *v23; // rax
  CUtlAttributeList<CUtlString,4,CUtlString>::OverflowChunk_t *m_pString; // rbx
  CUtlString *v25; // r15
  __int64 v26; // r12
  CUtlString *m_FixedValues; // r13
  CUtlAttributeList<CUtlString,4,CUtlString> *p_m_stringAttrs; // r15
  CUtlString *v29; // r14
  fltx4_0 *v30; // rax
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *m_pNext; // r12
  fltx4_0 *p_m_snapshot; // rax
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *v34; // rdi
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *v35; // r12
  fltx4_0 *p_m_matrix4x4Attrs; // rax
  CUtlAttributeList<int,8,int>::OverflowChunk_t *v37; // rdi
  CUtlAttributeList<int,8,int>::OverflowChunk_t *v38; // r12
  fltx4_0 *p_m_intAttrs; // rax
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *v40; // rdi
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *v41; // r12
  __int64 v42; // rdx
  fltx4_0 *p_m_textureAttrs; // rax
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *v44; // rdi
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *v45; // r12
  fltx4_0 *p_m_constantBufferAttrs; // rax
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *v47; // rdi
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *v48; // r12
  fltx4_0 *p_m_ptrAttrs; // rax
  CUtlAttributeList<CUtlString,4,CUtlString>::OverflowChunk_t *v50; // rbx
  CUtlString *v51; // r15
  __int64 v52; // r12
  CUtlString *v53; // r13
  CUtlAttributeList<CUtlString,4,CUtlString> *v54; // r15
  CUtlString *v55; // r14
  fltx4_0 *v56; // rax
  TSLHead_t m_Head; // rax
  TSLHead_t v58; // rt0
  unsigned __int64 v60; // [rsp+10h] [rbp-50h]
  unsigned __int64 v61; // [rsp+18h] [rbp-48h]
  CUtlString *pMem; // [rsp+20h] [rbp-40h]
  CUtlAttributeList<CUtlString,4,CUtlString>::OverflowChunk_t *pMema; // [rsp+20h] [rbp-40h]
  CRenderAttributesDoubleBuffered *pObj; // [rsp+28h] [rbp-38h]

  while ( 1 )
  {
    v61 = v61;
    Next = this->m_deletionQueue.m_Head.value.Next;
    v2 = *(&this->m_deletionQueue.m_Head.value64x128 + 1);
    if ( Next == 0 )
      break;
    while ( 1 )
    {
      v61 = (v2 - 1) | v61 & 0xFFFFFFFF00000000LL;
      *&v3 = Next;
      *(&v3 + 1) = v2;
      if ( _InterlockedCompareExchange128(&this->m_deletionQueue, v61, *Next, &v3) != 0 )
        break;
      _mm_pause();
      Next = this->m_deletionQueue.m_Head.value.Next;
      v2 = *(&this->m_deletionQueue.m_Head.value64x128 + 1);
      if ( Next == 0 )
        return;
    }
    v4 = Next[2];
    pObj = v4;
    CUtlMemoryPoolBase::Free(&g_TSPointerListNodes, Next);
    v5 = v4[11];
    if ( v5 != 0 )
    {
      while ( 1 )
      {
        v6 = *v5;
        operator delete(v5);
        v4[11] = v6;
        if ( v6 == 0 )
          break;
        v5 = v6;
      }
    }
    v7 = v4;
    do
      *v7++ = Four_Zeros;
    while ( v4 + 2 != v7 );
    v8 = v4[47];
    v4[10] = 0;
    if ( v8 != 0 )
    {
      while ( 1 )
      {
        v9 = *v8;
        operator delete(v8);
        v4[47] = v9;
        if ( v9 == 0 )
          break;
        v8 = v9;
      }
    }
    v10 = (v4 + 12);
    if ( v4 + 12 != v4 + 14 )
    {
      do
        *v10++ = Four_Zeros;
      while ( v4 + 14 != v10 );
    }
    v11 = v4[57];
    v4[46] = 0;
    if ( v11 != 0 )
    {
      while ( 1 )
      {
        v12 = *v11;
        operator delete(v11);
        v4[57] = v12;
        if ( v12 == 0 )
          break;
        v11 = v12;
      }
    }
    v13 = (v4 + 48);
    if ( v4 + 48 != v4 + 52 )
    {
      do
        *v13++ = Four_Zeros;
      while ( v4 + 52 != v13 );
    }
    v14 = v4[69];
    v4[56] = 0;
    if ( v14 != 0 )
    {
      while ( 1 )
      {
        v15 = *v14;
        operator delete(v14);
        v4[69] = v15;
        if ( v15 == 0 )
          break;
        v14 = v15;
      }
    }
    v16 = 0;
    v17 = (v4 + 58);
    do
    {
      if ( v17->m128_i32[v16 / 4] != 0 )
        v4[v16 / 2 + 60] = 0;
      v16 += 4LL;
    }
    while ( v16 != 16 );
    for ( ; v4 + 60 != v17; ++v17 )
      *v17 = Four_Zeros;
    v18 = v4[81];
    v4[68] = 0;
    if ( v18 != 0 )
    {
      while ( 1 )
      {
        v19 = *v18;
        operator delete(v18);
        v4[81] = v19;
        if ( v19 == 0 )
          break;
        v18 = v19;
      }
    }
    v20 = (v4 + 70);
    if ( v4 + 70 != v4 + 72 )
    {
      do
        *v20++ = Four_Zeros;
      while ( v4 + 72 != v20 );
    }
    v21 = v4[89];
    v4[80] = 0;
    if ( v21 != 0 )
    {
      while ( 1 )
      {
        v22 = *v21;
        operator delete(v21);
        v4[89] = v22;
        if ( v22 == 0 )
          break;
        v21 = v22;
      }
    }
    v23 = (v4 + 82);
    if ( v4 + 82 != v4 + 84 )
    {
      do
        *v23++ = Four_Zeros;
      while ( v4 + 84 != v23 );
    }
    v4[88] = 0;
    pMem = v4[97];
    if ( pMem != 0 )
    {
      while ( 1 )
      {
        m_pString = pMem->m_pString;
        v25 = pMem + 8;
        do
        {
          --v25;
          if ( v25->m_pString != 0 )
            CUtlString::FreeMemoryBlock(v25);
        }
        while ( &pMem[4] != v25 );
        operator delete(pMem);
        pObj->m_attrs.m_stringAttrs.m_pOverflow.m_pHead = m_pString;
        if ( m_pString == 0 )
          break;
        pMem = m_pString;
      }
    }
    v26 = 0;
    m_FixedValues = pObj->m_attrs.m_stringAttrs.m_fixedStorage.m_FixedValues;
    p_m_stringAttrs = &pObj->m_attrs.m_stringAttrs;
    v29 = pObj->m_attrs.m_stringAttrs.m_fixedStorage.m_FixedValues;
    do
    {
      if ( p_m_stringAttrs->m_fixedStorage.m_nFixedKeys[0].m_i32[v26] != 0 )
        CUtlString::Clear(v29);
      ++v26;
      ++v29;
    }
    while ( v26 != 4 );
    if ( p_m_stringAttrs != m_FixedValues )
    {
      v30 = &pObj->m_attrs.m_stringAttrs;
      do
        *v30++ = Four_Zeros;
      while ( m_FixedValues != v30 );
    }
    m_pHead = pObj->m_snapshot.m_vec4Attrs.m_pOverflow.m_pHead;
    pObj->m_attrs.m_stringAttrs.m_pParent = 0;
    pObj->m_attrs.m_pParent = 0;
    if ( m_pHead != 0 )
    {
      while ( 1 )
      {
        m_pNext = m_pHead->m_pNext;
        operator delete(m_pHead);
        pObj->m_snapshot.m_vec4Attrs.m_pOverflow.m_pHead = m_pNext;
        if ( m_pNext == 0 )
          break;
        m_pHead = m_pNext;
      }
    }
    p_m_snapshot = &pObj->m_snapshot;
    if ( &pObj->m_snapshot != pObj->m_snapshot.m_vec4Attrs.m_fixedStorage.m_FixedValues )
    {
      do
        *p_m_snapshot++ = Four_Zeros;
      while ( pObj->m_snapshot.m_vec4Attrs.m_fixedStorage.m_FixedValues != p_m_snapshot );
    }
    v34 = pObj->m_snapshot.m_matrix4x4Attrs.m_pOverflow.m_pHead;
    pObj->m_snapshot.m_vec4Attrs.m_pParent = 0;
    if ( v34 != 0 )
    {
      while ( 1 )
      {
        v35 = v34->m_pNext;
        operator delete(v34);
        pObj->m_snapshot.m_matrix4x4Attrs.m_pOverflow.m_pHead = v35;
        if ( v35 == 0 )
          break;
        v34 = v35;
      }
    }
    p_m_matrix4x4Attrs = &pObj->m_snapshot.m_matrix4x4Attrs;
    if ( &pObj->m_snapshot.m_matrix4x4Attrs != pObj->m_snapshot.m_matrix4x4Attrs.m_fixedStorage.m_FixedValues )
    {
      do
        *p_m_matrix4x4Attrs++ = Four_Zeros;
      while ( pObj->m_snapshot.m_matrix4x4Attrs.m_fixedStorage.m_FixedValues != p_m_matrix4x4Attrs );
    }
    v37 = pObj->m_snapshot.m_intAttrs.m_pOverflow.m_pHead;
    pObj->m_snapshot.m_matrix4x4Attrs.m_pParent = 0;
    if ( v37 != 0 )
    {
      while ( 1 )
      {
        v38 = v37->m_pNext;
        operator delete(v37);
        pObj->m_snapshot.m_intAttrs.m_pOverflow.m_pHead = v38;
        if ( v38 == 0 )
          break;
        v37 = v38;
      }
    }
    p_m_intAttrs = &pObj->m_snapshot.m_intAttrs;
    if ( &pObj->m_snapshot.m_intAttrs != pObj->m_snapshot.m_intAttrs.m_fixedStorage.m_FixedValues )
    {
      do
        *p_m_intAttrs++ = Four_Zeros;
      while ( pObj->m_snapshot.m_intAttrs.m_fixedStorage.m_FixedValues != p_m_intAttrs );
    }
    v40 = pObj->m_snapshot.m_textureAttrs.m_pOverflow.m_pHead;
    pObj->m_snapshot.m_intAttrs.m_pParent = 0;
    if ( v40 != 0 )
    {
      while ( 1 )
      {
        v41 = v40->m_pNext;
        operator delete(v40);
        pObj->m_snapshot.m_textureAttrs.m_pOverflow.m_pHead = v41;
        if ( v41 == 0 )
          break;
        v40 = v41;
      }
    }
    v42 = 0;
    p_m_textureAttrs = &pObj->m_snapshot.m_textureAttrs;
    do
    {
      if ( p_m_textureAttrs->m128_i32[v42] != 0 )
        pObj->m_snapshot.m_textureAttrs.m_fixedStorage.m_FixedValues[v42].texture.m_pBinding = 0;
      ++v42;
    }
    while ( v42 != 4 );
    for ( ; pObj->m_snapshot.m_textureAttrs.m_fixedStorage.m_FixedValues != p_m_textureAttrs; ++p_m_textureAttrs )
      *p_m_textureAttrs = Four_Zeros;
    v44 = pObj->m_snapshot.m_constantBufferAttrs.m_pOverflow.m_pHead;
    pObj->m_snapshot.m_textureAttrs.m_pParent = 0;
    if ( v44 != 0 )
    {
      while ( 1 )
      {
        v45 = v44->m_pNext;
        operator delete(v44);
        pObj->m_snapshot.m_constantBufferAttrs.m_pOverflow.m_pHead = v45;
        if ( v45 == 0 )
          break;
        v44 = v45;
      }
    }
    p_m_constantBufferAttrs = &pObj->m_snapshot.m_constantBufferAttrs;
    if ( &pObj->m_snapshot.m_constantBufferAttrs != pObj->m_snapshot.m_constantBufferAttrs.m_fixedStorage.m_FixedValues )
    {
      do
        *p_m_constantBufferAttrs++ = Four_Zeros;
      while ( pObj->m_snapshot.m_constantBufferAttrs.m_fixedStorage.m_FixedValues != p_m_constantBufferAttrs );
    }
    v47 = pObj->m_snapshot.m_ptrAttrs.m_pOverflow.m_pHead;
    pObj->m_snapshot.m_constantBufferAttrs.m_pParent = 0;
    if ( v47 != 0 )
    {
      while ( 1 )
      {
        v48 = v47->m_pNext;
        operator delete(v47);
        pObj->m_snapshot.m_ptrAttrs.m_pOverflow.m_pHead = v48;
        if ( v48 == 0 )
          break;
        v47 = v48;
      }
    }
    p_m_ptrAttrs = &pObj->m_snapshot.m_ptrAttrs;
    if ( &pObj->m_snapshot.m_ptrAttrs != pObj->m_snapshot.m_ptrAttrs.m_fixedStorage.m_FixedValues )
    {
      do
        *p_m_ptrAttrs++ = Four_Zeros;
      while ( pObj->m_snapshot.m_ptrAttrs.m_fixedStorage.m_FixedValues != p_m_ptrAttrs );
    }
    pObj->m_snapshot.m_ptrAttrs.m_pParent = 0;
    v50 = pObj->m_snapshot.m_stringAttrs.m_pOverflow.m_pHead;
    if ( v50 != 0 )
    {
      while ( 1 )
      {
        v51 = &v50[1];
        pMema = v50->m_pNext;
        do
        {
          --v51;
          if ( v51->m_pString != 0 )
            CUtlString::FreeMemoryBlock(v51);
        }
        while ( v50->m_storage.m_FixedValues != v51 );
        operator delete(v50);
        pObj->m_snapshot.m_stringAttrs.m_pOverflow.m_pHead = pMema;
        if ( pMema == 0 )
          break;
        v50 = pMema;
      }
    }
    v52 = 0;
    v53 = pObj->m_snapshot.m_stringAttrs.m_fixedStorage.m_FixedValues;
    v54 = &pObj->m_snapshot.m_stringAttrs;
    v55 = pObj->m_snapshot.m_stringAttrs.m_fixedStorage.m_FixedValues;
    do
    {
      if ( v54->m_fixedStorage.m_nFixedKeys[0].m_i32[v52] != 0 )
        CUtlString::Clear(v55);
      ++v52;
      ++v55;
    }
    while ( v52 != 4 );
    if ( v54 != v53 )
    {
      v56 = &pObj->m_snapshot.m_stringAttrs;
      do
        *v56++ = Four_Zeros;
      while ( v53 != v56 );
    }
    pObj->m_snapshot.m_stringAttrs.m_pParent = 0;
    pObj->m_snapshot.m_pParent = 0;
    v60 = v60;
    while ( 1 )
    {
      m_Head = this->m_objectPool.m_Head;
      pObj[-1].m_snapshot.m_pParent = this->m_objectPool.m_Head.value.Next;
      v60 = (m_Head.value32.DepthAndSequence + 65537) | v60 & 0xFFFFFFFF00000000LL;
      v58 = m_Head;
      if ( _InterlockedCompareExchange128(this, v60, &pObj[-1].m_snapshot.m_pParent, &v58) != 0 )
        break;
      _mm_pause();
    }
  }
}


// GetNewAttributeObjectFromPool  (line 4816, @0x00000000030ade20, libserver.so)  // inlines: CRenderAttributes, CRenderAttributesDoubleBuffered, CUtlAttributeList, CUtlAttributeListChunk, CUtlIntrusiveList, CUtlString, CWeakHandle, Clear, ConstantBufferAttr_t, FromUntypedHandleUnchecked, GetObject, Init, New, Pop, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, ReleaseValueFromAttribute<CUtlString>, SetParent, StaticInvalidHandle, StoreAlignedIntSIMD<(ESIMDLevel)20u>, TextureAttrForStorage_t, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause, _mm_store_ps, memset, operator=, simpleTSPoolStruct_t, ~CUtlString
// calls: operator new, CRenderAttributes::CRenderAttributes, CUtlString::Clear, CRenderAttributes::~CRenderAttributes, operator delete, _Unwind_Resume, CUtlString::FreeMemoryBlock, CUtlAttributeList<void*, 4, void*>::~CUtlAttributeList, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::~CUtlAttributeList, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>::~CUtlAttributeList, CUtlAttributeList<int, 8, int>::~CUtlAttributeList, CUtlAttributeList<VMatrix, 4, VMatrix>::~CUtlAttributeList (13 total)
// callers: CRenderComponent::UpdateEntityRenderAttrs
// globals: s_attributeObjectPool
CRenderAttributesDoubleBuffered *__cdecl GetNewAttributeObjectFromPool()
{
  unsigned __int64 v0; // rcx
  TSLHead_t m_Head; // kr00_16
  TSLHead_t v2; // rt0
  char *v4; // rbx
  fltx4_0 *v5; // rax
  fltx4_0 *v6; // rax
  fltx4_0 *v7; // rax
  fltx4_0 *v8; // rdx
  fltx4_0 *v9; // r15
  char *v10; // rax
  __int64 v11; // rax
  fltx4_0 *v12; // rax
  fltx4_0 *v13; // rdx
  char *v14; // rax
  fltx4_0 *v15; // rax
  fltx4_0 *v16; // rax
  __int64 v17; // r12
  CUtlString *v18; // r14
  fltx4_0 *v19; // r15

  v0 = 0;
  m_Head = s_attributeObjectPool.m_objectPool.m_Head;
  if ( s_attributeObjectPool.m_objectPool.m_Head.value.Next != 0 )
  {
    while ( 1 )
    {
      v0 = (m_Head.value32.DepthAndSequence - 1) | v0 & 0xFFFFFFFF00000000LL;
      v2 = m_Head;
      if ( _InterlockedCompareExchange128(&s_attributeObjectPool, v0, m_Head.value.Next->Next, &v2) != 0 )
        return &m_Head.value.Next[1];
      _mm_pause();
      m_Head = s_attributeObjectPool.m_objectPool.m_Head;
      if ( s_attributeObjectPool.m_objectPool.m_Head.value.Next == 0 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v4 = operator new(0x650u);
    *(v4 + 2) = 0;
    *(v4 + 3) = 0;
    if ( v4 + 16 != v4 + 32 )
    {
      v5 = (v4 + 16);
      do
        *v5++ = Four_Zeros;
      while ( v4 + 32 != v5 );
    }
    *(v4 + 12) = 0;
    *(v4 + 13) = 0;
    *(v4 + 14) = 0;
    *(v4 + 15) = 0;
    if ( v4 + 112 != v4 + 128 )
    {
      v6 = (v4 + 112);
      do
        *v6++ = Four_Zeros;
      while ( v4 + 128 != v6 );
    }
    *(v4 + 48) = 0;
    *(v4 + 49) = 0;
    *(v4 + 50) = 0;
    *(v4 + 51) = 0;
    *(v4 + 52) = 0;
    *(v4 + 53) = 0;
    if ( v4 + 400 != v4 + 432 )
    {
      v7 = (v4 + 400);
      do
        *v7++ = Four_Zeros;
      while ( v4 + 432 != v7 );
    }
    v8 = (v4 + 496);
    *(v4 + 58) = 0;
    *(v4 + 59) = 0;
    v9 = (v4 + 480);
    v10 = v4 + 496;
    do
    {
      *v10 = 0;
      v10 += 16;
      *(v10 - 2) = -1;
    }
    while ( v10 != v4 + 560 );
    *(v4 + 60) = 0;
    v11 = 0;
    *(v4 + 61) = 0;
    do
    {
      if ( v9->m128_i32[v11] != 0 )
        *&v4[1 * v11 + 496] = 0;
      ++v11;
    }
    while ( v11 != 4 );
    if ( v9 != v8 )
    {
      v12 = (v4 + 480);
      do
        *v12++ = Four_Zeros;
      while ( v8 != v12 );
    }
    *(v4 + 70) = 0;
    v13 = (v4 + 592);
    *(v4 + 71) = 0;
    v14 = v4 + 592;
    do
    {
      *v14 = 0;
      v14 += 16;
      *(v14 - 2) = 0;
    }
    while ( v14 != v4 + 656 );
    *(v4 + 72) = 0;
    *(v4 + 73) = 0;
    if ( v4 + 576 != v13 )
    {
      v15 = (v4 + 576);
      do
        *v15++ = Four_Zeros;
      while ( v13 != v15 );
    }
    *(v4 + 82) = 0;
    *(v4 + 83) = 0;
    *(v4 + 84) = 0;
    *(v4 + 85) = 0;
    if ( v4 + 672 != v4 + 688 )
    {
      v16 = (v4 + 672);
      do
        *v16++ = Four_Zeros;
      while ( v4 + 688 != v16 );
    }
    v17 = 0;
    *(v4 + 90) = 0;
    *(v4 + 91) = 0;
    v18 = (v4 + 752);
    *(v4 + 94) = 0;
    *(v4 + 95) = 0;
    *(v4 + 96) = 0;
    *(v4 + 97) = 0;
    *(v4 + 92) = 0;
    *(v4 + 93) = 0;
    do
    {
      if ( *&v4[v17 + 736] != 0 )
        CUtlString::Clear(v18);
      v17 += 4;
      ++v18;
    }
    while ( v17 != 16 );
    v19 = (v4 + 736);
    do
      *v19++ = Four_Zeros;
    while ( v4 + 752 != v19 );
    *(v4 + 98) = 0;
    *(v4 + 99) = 0;
    *(v4 + 100) = 0;
    CRenderAttributes::CRenderAttributes((v4 + 816));
    *(v4 + 100) = v4 + 816;
    *(v4 + 48) = v4 + 912;
    *(v4 + 58) = v4 + 1200;
    *(v4 + 70) = v4 + 1280;
    *(v4 + 82) = v4 + 1376;
    *(v4 + 90) = v4 + 1472;
    *(v4 + 98) = v4 + 1536;
    *(v4 + 12) = v4 + 816;
    return (v4 + 16);
  }
}


// ReturnAttributeObjectToPool  (line 4822, @0x00000000030ad9a0, libserver.so)  // inlines: Alloc, Push, PushItem, QueueDelete, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause
// calls: CUtlMemoryPoolBase::Alloc
// callers: CEntityIdentity::FreeAttributes
void __fastcall ReturnAttributeObjectToPool(CRenderAttributesDoubleBuffered *pAttrs)
{
  TSLNodeBase_t **v2; // rax
  unsigned __int64 v3; // rcx
  TSLNodeBase_t **v4; // rbx
  TSLHead_t m_Head; // rax
  TSLHead_t v6; // rt0

  v2 = CUtlMemoryPoolBase::Alloc(&g_TSPointerListNodes);
  v3 = 0;
  v4 = v2;
  v2[2] = pAttrs;
  while ( 1 )
  {
    m_Head = s_attributeObjectPool.m_deletionQueue.m_Head;
    v3 = (s_attributeObjectPool.m_deletionQueue.m_Head.value32.DepthAndSequence + 65537) | v3 & 0xFFFFFFFF00000000LL;
    *v4 = s_attributeObjectPool.m_deletionQueue.m_Head.value.Next;
    v6 = m_Head;
    if ( _InterlockedCompareExchange128(&s_attributeObjectPool.m_deletionQueue.m_Head.value.Next, v3, v4, &v6) != 0 )
      break;
    _mm_pause();
  }
}


// CEntitySystem::PerformPreRenderCleanup  (line 4827, @0x00000000030ada00, libserver.so)  // inlines: CleanUpAttributeObjectPool
// calls: CAttributeObjectPool::ProcessDeletionQueue
// callers: CLoopModeGame::OnFrameBoundary
// globals: s_attributeObjectPool
void __fastcall CEntitySystem::PerformPreRenderCleanup(CEntitySystem *const this)
{
  CAttributeObjectPool::ProcessDeletionQueue(&s_attributeObjectPool);
}


// CEntitySystem::CleanUpAttributeObjectPool  (line 4832, @0x00000000030ada20, libserver.so)
// calls: CAttributeObjectPool::ProcessDeletionQueue
// globals: s_attributeObjectPool
void __fastcall CEntitySystem::CleanUpAttributeObjectPool(CEntitySystem *const this)
{
  CAttributeObjectPool::ProcessDeletionQueue(&s_attributeObjectPool);
}


// CEntitySystem::IsValidDataObjectType  (line 4838, @0x00000000030ada40, libserver.so)
bool __fastcall CEntitySystem::IsValidDataObjectType(const CEntitySystem *const this, EntityDataObjectType_t type)
{
  bool result; // al

  result = 0;
  if ( type <= 0x1F )
    return this->m_ppAccessors[type] != 0;
  return result;
}


// CEntitySystem::AddDataAccessor  (line 4848, @0x00000000030ada60, libserver.so)
// callers: CGameEntitySystem::CGameEntitySystem
void __fastcall CEntitySystem::AddDataAccessor(
        CEntitySystem *const this,
        EntityDataObjectType_t type,
        IEntityDataInstantiator *instantiator)
{
  int (***v3)(...); // rax

  if ( type <= 0x1F )
  {
    v3 = &this->_vptr_IEntityResourceManifestBuilder + type;
    if ( v3[13292] == 0 )
      v3[13292] = instantiator;
  }
}


// CEntitySystem::GetDataObject  (line 4867, @0x00000000030ada90, libserver.so)  // inlines: IsValidDataObjectType
// callers: CEntityIdentity::GetDataObject
void *__fastcall CEntitySystem::GetDataObject(
        CEntitySystem *const this,
        EntityDataObjectType_t type,
        const CEntityInstance *instance)
{
  IEntityDataInstantiator *v3; // rdi

  if ( type <= 0x1F && (v3 = this->m_ppAccessors[type]) != 0 )
    return (*(v3->_vptr_IEntityDataInstantiator + 2))(v3, instance);
  else
    return 0;
}


// CEntitySystem::CreateDataObject  (line 4877, @0x00000000030adad0, libserver.so)  // inlines: IsValidDataObjectType
// callers: CEntityIdentity::CreateDataObject
void *__fastcall CEntitySystem::CreateDataObject(
        CEntitySystem *const this,
        EntityDataObjectType_t type,
        CEntityInstance *instance)
{
  IEntityDataInstantiator *v3; // rdi

  if ( type <= 0x1F && (v3 = this->m_ppAccessors[type]) != 0 )
    return (*(v3->_vptr_IEntityDataInstantiator + 3))(v3, instance);
  else
    return 0;
}


// CEntitySystem::DestroyDataObject  (line 4888, @0x00000000030adb10, libserver.so)  // inlines: IsValidDataObjectType
// callers: CEntityIdentity::DestroyDataObject
void __fastcall CEntitySystem::DestroyDataObject(
        CEntitySystem *const this,
        EntityDataObjectType_t type,
        CEntityInstance *instance)
{
  IEntityDataInstantiator *v3; // rdi

  if ( type <= 0x1F )
  {
    v3 = this->m_ppAccessors[type];
    if ( v3 != 0 )
      (*(v3->_vptr_IEntityDataInstantiator + 4))(v3, instance);
  }
}


// SpewEntityListSummary  (line 4899, @0x00000000030b18e0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlStringMap, CUtlSymbol, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<int>, Element, EnsureCount, Find, GetClassNameAsCStr, Grow, GrowMemory, GrowVector, Insert, InsertMultipleBefore, IsExternallyAllocated, Next, Purge, Purge_FixedGrowable, RemoveAll, Sort, String, __final_insertion_sort<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t*>, __lg, __unguarded_insertion_sort<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t*>, __unguarded_linear_insert<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t*>, memcpy, operator const UtlSymId_t, operator[], sort<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t*>, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CUtlSymbolTable::String, std::__introsort_loop<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t*, long int>, std::__insertion_sort<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t*>, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlSymbolTable::~CUtlSymbolTable, UtlMemory_CalcNewAllocationCount, memcpy (19 total)
// callers: CEntityDebugGameSystem::OnEntitySummary, CConcreteEntityList::AllocEntityChunk
// strings: "class %s - %d instance%s (%.2f%%)\n", "=== Total: %d entities ===\n", "=== Entity List Summary (%s) ===\n"
void __fastcall SpewEntityListSummary(const CConcreteEntityList *pList)
{
  CEntityIdentity *m_pFirstActiveEntity; // rbx
  int *m_pMemory; // rax
  __int64 v4; // rdx
  const char *m_pAsString; // r15
  CEntityIdentity *m_pEntity; // rax
  __int64 v7; // r14
  __int64 m_Size; // r15
  SpewEntityListSummary::ClassCount_t *p_m_FixedMemory; // r13
  __int64 v10; // r12
  UtlSymId_t v11; // bx
  SpewEntityListSummary::ClassCount_t *v12; // rdi
  int i; // eax
  SpewEntityListSummary::ClassCount_t *v14; // r12
  __int64 v15; // rsi
  SpewEntityListSummary::ClassCount_t *v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  int v19; // ebx
  int v20; // r13d
  const char *v21; // r15
  const char *v22; // r9
  uint32 m_nGrowSize; // edx
  uint32 v24; // eax
  int j; // r15d
  __int64 v26; // rax
  SpewEntityListSummary::ClassCount_t *v27; // rax
  SpewEntityListSummary::ClassCount_t *v28; // rax
  int v29; // eax
  int *v30; // rdx
  SpewEntityListSummary::ClassCount_t *v31; // r12
  int m_nCount; // edi
  SpewEntityListSummary::ClassCount_t *v33; // rcx
  const char *m_pClassName; // r8
  SpewEntityListSummary::ClassCount_t *k; // rsi
  const char *v36; // rdx
  const char *NameOfModule; // rax
  SpewEntityListSummary::ClassCount_t *v38; // rcx
  int v39; // [rsp+10h] [rbp-310h]
  int src; // [rsp+18h] [rbp-308h]
  SpewEntityListSummary::ClassCount_t *srca; // [rsp+18h] [rbp-308h]
  int nTotalCount; // [rsp+2Ch] [rbp-2F4h]
  unsigned __int16 v43[8]; // [rsp+30h] [rbp-2F0h] BYREF
  CUtlSymbol id; // [rsp+40h] [rbp-2E0h] BYREF
  unsigned __int16 v45[8]; // [rsp+50h] [rbp-2D0h] BYREF
  CUtlStringMap<int,CUtlSymbolTable> classCountMap; // [rsp+60h] [rbp-2C0h] BYREF
  CUtlVectorFixedGrowable<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t,32ul> classCountSorted; // [rsp+D0h] [rbp-250h] BYREF
  unsigned __int64 v48; // [rsp+2E8h] [rbp-38h]

  classCountMap.m_Vector.m_Size = 0;
  v48 = __readfsqword(0x28u);
  classCountMap.m_Vector.m_Memory.m_pMemory = 0;
  classCountMap.m_Vector.m_Memory.m_nAllocationCount = 32;
  classCountMap.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(pList);
  classCountMap.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 128);
  CUtlSymbolTable::CUtlSymbolTable(&classCountMap.m_SymbolTable, 0, 32, 1);
  m_pFirstActiveEntity = pList->m_pFirstActiveEntity;
  for ( nTotalCount = 0; m_pFirstActiveEntity != 0; m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext )
  {
    m_pAsString = "";
    m_pEntity = m_pFirstActiveEntity->m_pInstance->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    CUtlSymbolTable::Find(v43, &classCountMap.m_SymbolTable, m_pAsString);
    if ( v43[0] == 0xFFFF )
    {
      CUtlSymbolTable::AddString(v45, &classCountMap.m_SymbolTable, m_pAsString);
      v7 = v45[0];
      m_Size = classCountMap.m_Vector.m_Size;
      if ( classCountMap.m_Vector.m_Size > v45[0] )
      {
        v4 = v45[0];
        m_pMemory = classCountMap.m_Vector.m_Memory.m_pMemory;
      }
      else if ( classCountMap.m_Vector.m_Size == v45[0] )
      {
        v29 = classCountMap.m_Vector.m_Size;
        if ( classCountMap.m_Vector.m_Size == classCountMap.m_Vector.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&classCountMap.m_Vector.m_Memory, 1);
          v29 = classCountMap.m_Vector.m_Size;
        }
        classCountMap.m_Vector.m_Size = v29 + 1;
        m_pMemory = classCountMap.m_Vector.m_Memory.m_pMemory;
        v30 = &classCountMap.m_Vector.m_Memory.m_pMemory[m_Size];
        if ( v30 != 0 )
        {
          *v30 = 0;
          v4 = v7;
          m_pMemory = classCountMap.m_Vector.m_Memory.m_pMemory;
        }
        else
        {
          v4 = v7;
        }
      }
      else
      {
        v39 = v45[0] + 1;
        if ( classCountMap.m_Vector.m_Size < v39 )
        {
          if ( v39 > classCountMap.m_Vector.m_Memory.m_nAllocationCount )
            CUtlMemory<int,int>::Grow(
              &classCountMap.m_Vector.m_Memory,
              v39 - classCountMap.m_Vector.m_Memory.m_nAllocationCount);
          classCountMap.m_Vector.m_Size = v39;
        }
        v4 = v7;
        classCountMap.m_Vector.m_Memory.m_pMemory[v7] = 0;
        m_pMemory = classCountMap.m_Vector.m_Memory.m_pMemory;
      }
    }
    else
    {
      m_pMemory = classCountMap.m_Vector.m_Memory.m_pMemory;
      v4 = v43[0];
    }
    ++m_pMemory[v4];
    ++nTotalCount;
  }
  classCountSorted.m_Size = 0;
  p_m_FixedMemory = &classCountSorted.m_Memory.m_FixedMemory;
  classCountSorted.m_Memory.m_nAllocationCount = 32;
  classCountSorted.m_Memory.m_nGrowSize = 0x80000000;
  classCountSorted.m_Memory.m_pMemory = &classCountSorted.m_Memory.m_FixedMemory;
  if ( classCountMap.m_Vector.m_Size != 0 )
  {
    v10 = 0;
    v11 = 0;
LABEL_18:
    v12 = classCountSorted.m_Memory.m_pMemory;
    for ( i = v10; ; i = classCountSorted.m_Size )
    {
      classCountSorted.m_Size = i + 1;
      v14 = &v12[v10];
      v14->m_nCount = classCountMap.m_Vector.m_Memory.m_pMemory[v11];
      id.m_Id = v11++;
      v14->m_pClassName = CUtlSymbolTable::String(&classCountMap.m_SymbolTable, &id.m_Id);
      if ( v11 >= classCountMap.m_Vector.m_Size || v11 == 0xFFFF )
        break;
      v10 = classCountSorted.m_Size;
      if ( classCountSorted.m_Memory.m_nAllocationCount != classCountSorted.m_Size
        || (classCountSorted.m_Memory.m_nGrowSize & 0x40000000) != 0 )
      {
        goto LABEL_18;
      }
      src = classCountSorted.m_Size + 1;
      for ( j = UtlMemory_CalcNewAllocationCount(
                  classCountSorted.m_Size,
                  classCountSorted.m_Memory.m_nGrowSize & 0x3FFFFFFF,
                  classCountSorted.m_Size + 1,
                  16); src > j; j = (src + j) / 2 )
        ;
      if ( (classCountSorted.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      {
        srca = classCountSorted.m_Memory.m_pMemory;
        v28 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * j);
        classCountSorted.m_Memory.m_pMemory = v28;
        v12 = v28;
        if ( srca != 0 )
        {
          memcpy(v28, srca, 16LL * classCountSorted.m_Memory.m_nAllocationCount);
          v12 = classCountSorted.m_Memory.m_pMemory;
        }
        classCountSorted.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v26 = *g_pMemAlloc;
        if ( classCountSorted.m_Memory.m_pMemory != 0 )
          v27 = (*(v26 + 8))(g_pMemAlloc, classCountSorted.m_Memory.m_pMemory, 16LL * j);
        else
          v27 = (*v26)(g_pMemAlloc, 16LL * j);
        classCountSorted.m_Memory.m_pMemory = v27;
        v12 = v27;
      }
      classCountSorted.m_Memory.m_nAllocationCount = j;
    }
    p_m_FixedMemory = classCountSorted.m_Memory.m_pMemory;
    v15 = classCountSorted.m_Size;
  }
  else
  {
    v15 = 0;
  }
  v16 = &p_m_FixedMemory[v15];
  if ( &p_m_FixedMemory[v15] != p_m_FixedMemory )
  {
    _BitScanReverse64(&v17, (v15 * 16) >> 4);
    std::__introsort_loop<SpewEntityListSummary(CConcreteEntityList const*)::ClassCount_t *,long>(
      p_m_FixedMemory,
      &p_m_FixedMemory[v15],
      2 * (63LL - (v17 ^ 0x3F)));
    if ( v16 - p_m_FixedMemory > 271 )
    {
      v31 = p_m_FixedMemory + 16;
      std::__insertion_sort<SpewEntityListSummary(CConcreteEntityList const*)::ClassCount_t *>(
        p_m_FixedMemory,
        p_m_FixedMemory + 16);
      if ( v16 != &p_m_FixedMemory[16] )
      {
        do
        {
          while ( 1 )
          {
            m_nCount = v31->m_nCount;
            v33 = v31 - 1;
            m_pClassName = v31->m_pClassName;
            if ( v31->m_nCount > v31[-1].m_nCount )
              break;
            v38 = v31++;
            v38->m_nCount = m_nCount;
            v38->m_pClassName = m_pClassName;
            if ( v16 == v31 )
              goto LABEL_24;
          }
          for ( k = v31; ; k = v33-- )
          {
            v36 = v33->m_pClassName;
            *&k->m_nCount = *&v33->m_nCount;
            k->m_pClassName = v36;
            if ( m_nCount <= v33[-1].m_nCount )
              break;
          }
          ++v31;
          v33->m_nCount = m_nCount;
          v33->m_pClassName = m_pClassName;
        }
        while ( v16 != v31 );
      }
    }
    else
    {
      std::__insertion_sort<SpewEntityListSummary(CConcreteEntityList const*)::ClassCount_t *>(p_m_FixedMemory, v16);
    }
  }
LABEL_24:
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
  {
    NameOfModule = GetNameOfModule();
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "=== Entity List Summary (%s) ===\n", NameOfModule);
  }
  if ( classCountSorted.m_Size > 0 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      v20 = classCountSorted.m_Memory.m_pMemory[v18].m_nCount;
      v21 = classCountSorted.m_Memory.m_pMemory[v18].m_pClassName;
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      {
        v22 = "";
        if ( v20 != 1 )
          v22 = "s";
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          1,
          "class %s - %d instance%s (%.2f%%)\n",
          v21,
          v20,
          v22,
          ((v20 / nTotalCount) * 100.0));
      }
      ++v19;
      ++v18;
    }
    while ( classCountSorted.m_Size > v19 );
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "=== Total: %d entities ===\n", nTotalCount);
  classCountSorted.m_Size = 0;
  if ( classCountSorted.m_Memory.m_nAllocationCount < 0 )
  {
    v24 = classCountSorted.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = classCountSorted.m_Memory.m_nGrowSize;
    v24 = classCountSorted.m_Memory.m_nGrowSize & 0xC0000000;
    if ( classCountSorted.m_Memory.m_pMemory != &classCountSorted.m_Memory.m_FixedMemory )
    {
      if ( classCountSorted.m_Memory.m_pMemory != 0 && v24 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = classCountSorted.m_Memory.m_nGrowSize;
      }
      classCountSorted.m_Memory.m_nAllocationCount = 32;
      classCountSorted.m_Memory.m_pMemory = &classCountSorted.m_Memory.m_FixedMemory;
      classCountSorted.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_41;
    }
  }
  if ( v24 == 0 )
    CUtlMemory<SpewEntityListSummary(CConcreteEntityList const*)::ClassCount_t,int>::Purge(&classCountSorted.m_Memory);
LABEL_41:
  CUtlSymbolTable::~CUtlSymbolTable(&classCountMap.m_SymbolTable);
  classCountMap.m_Vector.m_Size = 0;
  if ( (classCountMap.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&classCountMap.m_Vector.m_Memory);
    if ( (classCountMap.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&classCountMap.m_Vector.m_Memory);
  }
}


// MakeEntitySystemString  (line 4955, @0x00000000030b3e00, libserver.so)  // inlines: AddString, Alloc, AllocPooledString, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CopyConstruct<CUtlSymbolTableLargeBaseTreeEntry_t*>, FindPoolWithSpace, HashStringFastCaseless, Insert, InsertUncommitted, ToSymbol, V_memcpy, V_strlen, memcpy, operator!=
// calls: strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::Find, CThreadSpinRWLock::LockForWrite, CThreadSpinRWLock::UnlockWrite(void), CUtlMemoryPoolBase::Alloc
// callers: CPointClientUIWorldPanel::InputRemoveCSSClass, CPointClientUIWorldPanel::InputAddCSSClass, CDynamicProp::InputSetDefaultAnimation, CBaseEntity::InputSetDamageFilter, CBaseEntity::InputSetParent, CAI_Expresser::FireEntIOFromResponse, CAI_ExpresserWithFollowup::SpeakDispatchFollowup, CBaseViewModel::SetWeaponModel, CBaseButton::Spawn, Commentary_IsCommentaryEntity, CEntityDissolve::InputDissolve, CEnvInstructorHint::InputShowHint (90 total)
// globals: g_pEntitySystem
string_t __fastcall MakeEntitySystemString(char **a1, const char *pStr)
{
  CEntitySystem *v4; // r13
  int v5; // eax
  int v6; // r15d
  char *v7; // rax
  int v9; // r10d
  signed int v10; // edx
  _DWORD **v11; // rdi
  _DWORD *v12; // rax
  int v13; // r9d
  _DWORD **v14; // rdi
  int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rbx
  UtlTSHashHandle_t v20; // rax
  __int64 v21; // rbx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v22; // rcx
  _QWORD *v23; // r15
  int v24; // [rsp+0h] [rbp-50h]
  char *v25; // [rsp+0h] [rbp-50h]
  CUtlSymbolTableLargeBaseTreeEntry_t *uiKey; // [rsp+8h] [rbp-48h]
  char *v27; // [rsp+10h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *src; // [rsp+18h] [rbp-38h] BYREF

  v4 = g_pEntitySystem;
  if ( pStr == 0 || *pStr == 0 || (v5 = strlen(pStr), v6 = v5, v5 <= 0) )
  {
    *a1 = 0;
    return a1;
  }
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(&v27, &v4->m_pooledStrings, pStr, v5);
  v7 = v27;
  if ( v27 == 0 )
  {
    v9 = *(&dword_19F00 + v4);
    v10 = (v6 + 16) & 0xFFFFFFF8;
    if ( v9 > 0 )
    {
      v11 = *(&stru_19F08.r_offset + v4);
      v12 = *v11;
      v13 = (*v11)[1];
      if ( v10 <= **v11 - v13 )
      {
LABEL_16:
        v12[1] = v13 + v10;
        v25 = v12 + v13;
        uiKey = (v25 + 8);
        *(v25 + 1) = MurmurHash2LowerCase(pStr, 0x3501A674u);
        memcpy(v25 + 16, pStr, v6);
        v25[v6 + 16] = 0;
        v19 = *(v25 + 1);
        v20 = CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
                &v4->m_pooledStrings.m_Lookup,
                (v25 + 8));
        if ( v20 == 0 )
        {
          v21 = &v4->m_pooledStrings.m_Lookup.m_aBuckets[v19 & 0x7FF];
          CThreadSpinRWLock::LockForWrite(v21);
          v23 = CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
                  uiKey,
                  *(v21 + 32),
                  *(v21 + 24),
                  v22);
          if ( v23 == 0 )
          {
            *(&off_19EF0 + v4) = 1;
            v23 = CUtlMemoryPoolBase::Alloc(&v4->m_pooledStrings.m_Lookup.m_EntryMemory);
            v23[1] = *(v21 + 32);
            *(v21 + 32) = v23;
            *v23 = uiKey;
            v23[2] = uiKey;
          }
          CThreadSpinRWLock::UnlockWrite(v21);
          v20 = v23;
        }
        v7 = (*(v20 + 16) + 8LL);
        goto LABEL_5;
      }
      v14 = v11 + 1;
      v15 = 0;
      while ( ++v15 != v9 )
      {
        v12 = *v14++;
        v13 = v12[1];
        if ( v10 <= *v12 - v13 )
        {
          if ( v15 != -1 )
            goto LABEL_16;
          break;
        }
      }
    }
    if ( (v10 + 12LL) <= 0x800 )
    {
      v16 = 2036;
      v17 = 2048;
    }
    else
    {
      v16 = (v6 + 16) & 0xFFFFFFF8;
      v17 = v10 + 12;
    }
    v24 = v16;
    src = (**g_pMemAlloc)(g_pMemAlloc, v17);
    src->m_TotalLen = v24;
    src->m_SpaceUsed = 0;
    v18 = CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
            (&dword_19F00 + v4),
            &src);
    v10 = (v6 + 16) & 0xFFFFFFF8;
    v12 = *(*(&stru_19F08.r_offset + v4) + 8LL * v18);
    v13 = v12[1];
    goto LABEL_16;
  }
LABEL_5:
  *a1 = v7;
  return a1;
}


// CVariantSaveDataOps::Save  (line 5063, @0x00000000030c7430, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, StringID, TempString, ToString, Vector3D, operator=, variant_savestring_t
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo, MakeEntitySystemString, Warning
// strings: "Bad type %d in saved CVariant\n", "unknown_variant_type", "No free conversion of %s variant to Vector right now\n"
// globals: jpt_30C7482, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, CVariantBase<CVariantDefaultAllocator>::m_SaveString, CVariantBase<CVariantDefaultAllocator>::m_SaveEHandle, CVariantBase<CVariantDefaultAllocator>::m_SaveFloat, CVariantBase<CVariantDefaultAllocator>::m_SaveInt, CVariantBase<CVariantDefaultAllocator>::m_SaveBool, CVariantBase<CVariantDefaultAllocator>::m_SaveColor (10 total)
void __fastcall CVariantSaveDataOps::Save(
        CVariantSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  const CVariantBase<CVariantDefaultAllocator> *pField; // r12
  int16 m_type; // ax
  const char *m_uint64; // rsi
  typedescription_t *pTypeDesc; // rcx
  uint64 v9; // rax
  typedescription_t *v10; // rcx
  vec_t v11; // xmm0_4
  int (**vptr_ISave)(...); // rax
  int type; // [rsp+Ch] [rbp-44h] BYREF
  variant_savestring_t Temp; // [rsp+10h] [rbp-40h] BYREF
  variant_savevector_t Temp_0; // [rsp+20h] [rbp-30h] BYREF

  pField = fieldInfo->pField;
  type = *(fieldInfo->pField + 4);
  (*(pSave->_vptr_ISave + 11))(pSave, &type, 1);
  m_type = pField->m_type;
  switch ( m_type )
  {
    case 0:
      return;
    case 1:
      (*(pSave->_vptr_ISave + 6))(
        pSave,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveFloat,
        1);
      break;
    case 2:
    case 30:
      Temp.iszString.u.m_Id = 0;
      if ( m_type == 30 )
      {
        m_uint64 = pField->m_uint64;
      }
      else
      {
        CVariantBase<CVariantDefaultAllocator>::AssignTo(
          pField,
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          0x200u);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      MakeEntitySystemString(&Temp_0, m_uint64);
      pTypeDesc = fieldInfo->pTypeDesc;
      Temp.iszString.u.m_Id = *&Temp_0.vecSave.x;
      (*(pSave->_vptr_ISave + 6))(
        pSave,
        pTypeDesc->fieldName,
        &Temp,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveString,
        1);
      break;
    case 3:
      v9 = pField->m_uint64;
      v10 = fieldInfo->pTypeDesc;
      Temp_0.vecSave.x = *pField->m_pszString;
      Temp_0.vecSave.y = *(v9 + 4);
      v11 = *(v9 + 8);
      vptr_ISave = pSave->_vptr_ISave;
      Temp_0.vecSave.z = v11;
      vptr_ISave[6](pSave, v10->fieldName, &Temp_0, 0, CVariantBase<CVariantDefaultAllocator>::m_SaveVector, 1);
      break;
    case 5:
      (*(pSave->_vptr_ISave + 6))(
        pSave,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveInt,
        1);
      break;
    case 6:
      (*(pSave->_vptr_ISave + 6))(
        pSave,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveBool,
        1);
      break;
    case 9:
      (*(pSave->_vptr_ISave + 6))(
        pSave,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveColor,
        1);
      break;
    case 13:
      (*(pSave->_vptr_ISave + 6))(
        pSave,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveEHandle,
        1);
      break;
    case 14:
      Warning("No free conversion of %s variant to Vector right now\n", "unknown_variant_type");
      (*(pSave->_vptr_ISave + 6))(
        pSave,
        fieldInfo->pTypeDesc->fieldName,
        &Temp_0,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SavePositionVector,
        1);
      break;
    default:
      Warning("Bad type %d in saved CVariant\n", m_type);
      break;
  }
}


// CVariantSaveDataOps::Restore  (line 5120, @0x00000000030c1780, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Vector2D>, Allocate<Vector>, AssignTo<CVariantDefaultAllocator>, CUtlSymbolLarge, CVariantBase, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, Free, SetOnRestore, SetPositionVector3D, SetString, SetVector3D, V_strlen, memcpy, operator=, variant_savestring_t, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>, CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>, strlen, memcpy, Warning, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Bad type %d in saved CVariant\n"
// globals: jpt_30C17E9, jpt_30C18AC, CVariantBase<CVariantDefaultAllocator>::m_SavePositionVector, CVariantBase<CVariantDefaultAllocator>::m_SaveEHandle, CVariantBase<CVariantDefaultAllocator>::m_SaveColor, CVariantBase<CVariantDefaultAllocator>::m_SaveBool, CVariantBase<CVariantDefaultAllocator>::m_SaveInt, CVariantBase<CVariantDefaultAllocator>::m_SaveVector (10 total)
void __fastcall CVariantSaveDataOps::Restore(
        CVariantSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CVariantBase<CVariantDefaultAllocator> *pField; // rbx
  __int64 z_low; // rcx
  _DWORD *v7; // r15
  _QWORD *v8; // rdi
  _DWORD *v9; // rax
  int16 v10; // ax
  _QWORD *v11; // rdi
  const Quaternion *v12; // r14
  const Vector4D *v13; // r14
  _DWORD *v14; // r15
  _DWORD *v15; // rax
  const char *v16; // r14
  unsigned int v17; // r15d
  void *v18; // rax
  typedescription_t *pTypeDesc; // rcx
  IRestore *v20; // rdi
  int (**vptr_IRestore)(...); // rax
  const char *v22; // r12
  variant_savevector_t Temp; // [rsp+0h] [rbp-40h] BYREF

  Temp.vecSave.z = 0.0;
  pField = fieldInfo->pField;
  *&Temp.vecSave.x = 0;
  if ( (pField->m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pField->m_uint64);
    pField->m_flags &= ~1u;
  }
  pField->m_uint64 = 0;
  pField->m_type = 0;
  z_low = LOWORD(Temp.vecSave.z);
  switch ( LOWORD(Temp.vecSave.z) )
  {
    case 3:
      v7 = *&Temp.vecSave.x;
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0, pRestore, LOWORD(Temp.vecSave.z));
        pField->m_flags &= ~1u;
      }
      pField->m_uint64 = 0;
      v11 = g_pMemAlloc;
      pField->m_type = 3;
      v9 = (**v11)(v11, 12, pRestore, z_low);
      goto LABEL_7;
    case 4:
      v12 = *&Temp.vecSave.x;
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0, pRestore, LOWORD(Temp.vecSave.z));
        pField->m_flags &= ~1u;
      }
      pField->m_uint64 = 0;
      pField->m_type = 4;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>(pField, v12, pRestore);
      break;
    case 0x19:
      v14 = *&Temp.vecSave.x;
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0, pRestore, LOWORD(Temp.vecSave.z));
        pField->m_flags &= ~1u;
      }
      pField->m_uint64 = 0;
      pField->m_type = 25;
      v15 = (**g_pMemAlloc)(g_pMemAlloc, 8, pRestore, z_low);
      pField->m_uint64 = v15;
      *v15 = *v14;
      v15[1] = v14[1];
      pField->m_flags |= 1u;
      break;
    case 0x1B:
      v13 = *&Temp.vecSave.x;
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0, pRestore, LOWORD(Temp.vecSave.z));
        pField->m_flags &= ~1u;
      }
      pField->m_uint64 = 0;
      pField->m_type = 27;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>(pField, v13, pRestore);
      break;
    case 0x1E:
      v16 = *&Temp.vecSave.x;
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0, pRestore, LOWORD(Temp.vecSave.z));
        pField->m_flags &= ~1u;
      }
      pField->m_uint64 = 0;
      pField->m_type = 30;
      if ( v16 != 0 )
      {
        v17 = strlen(v16) + 1;
        v18 = (**g_pMemAlloc)(g_pMemAlloc, v17);
        pField->m_uint64 = v18;
        memcpy(v18, v16, v17);
        pField->m_flags |= 1u;
      }
      break;
    case 0x27:
      v7 = *&Temp.vecSave.x;
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0, pRestore, LOWORD(Temp.vecSave.z));
        pField->m_flags &= ~1u;
      }
      pField->m_uint64 = 0;
      v8 = g_pMemAlloc;
      pField->m_type = 39;
      v9 = (**v8)(v8, 12, 39, z_low);
LABEL_7:
      pField->m_uint64 = v9;
      *v9 = *v7;
      v9[1] = v7[1];
      v9[2] = v7[2];
      pField->m_flags |= 1u;
      break;
    default:
      pField->m_type = LOWORD(Temp.vecSave.z);
      pField->m_uint64 = *&Temp.vecSave.x;
      break;
  }
  if ( (BYTE2(Temp.vecSave.z) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&Temp.vecSave.x);
  v10 = (*(pRestore->_vptr_IRestore + 13))(pRestore);
  pField->m_type = v10;
  switch ( v10 )
  {
    case 0:
      return;
    case 1:
      (*(pRestore->_vptr_IRestore + 3))(
        pRestore,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveFloat,
        1);
      break;
    case 2:
    case 30:
      pTypeDesc = fieldInfo->pTypeDesc;
      *&Temp.vecSave.x = 0;
      v20 = pRestore;
      vptr_IRestore = pRestore->_vptr_IRestore;
      v22 = "";
      vptr_IRestore[3](v20, pTypeDesc->fieldName, &Temp, 0, CVariantBase<CVariantDefaultAllocator>::m_SaveString, 1);
      if ( *&Temp.vecSave.x != 0 )
        v22 = *&Temp.vecSave.x;
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pField->m_uint64);
        pField->m_flags &= ~1u;
      }
      pField->m_type = 30;
      pField->m_uint64 = v22;
      break;
    case 3:
      (*(pRestore->_vptr_IRestore + 3))(
        pRestore,
        fieldInfo->pTypeDesc->fieldName,
        &Temp,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveVector,
        1);
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pField->m_uint64);
        pField->m_flags &= ~1u;
      }
      pField->m_type = 3;
      pField->m_uint64 = &Temp;
      break;
    case 5:
      (*(pRestore->_vptr_IRestore + 3))(
        pRestore,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveInt,
        1);
      break;
    case 6:
      (*(pRestore->_vptr_IRestore + 3))(
        pRestore,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveBool,
        1);
      break;
    case 9:
      (*(pRestore->_vptr_IRestore + 3))(
        pRestore,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveColor,
        1);
      break;
    case 13:
      (*(pRestore->_vptr_IRestore + 3))(
        pRestore,
        fieldInfo->pTypeDesc->fieldName,
        pField,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SaveEHandle,
        1);
      break;
    case 14:
      (*(pRestore->_vptr_IRestore + 3))(
        pRestore,
        fieldInfo->pTypeDesc->fieldName,
        &Temp,
        0,
        CVariantBase<CVariantDefaultAllocator>::m_SavePositionVector,
        1);
      if ( (pField->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pField->m_uint64);
        pField->m_flags &= ~1u;
      }
      pField->m_uint64 = &Temp;
      pField->m_type = 14;
      break;
    default:
      Warning("Bad type %d in saved CVariant\n", v10);
      break;
  }
}


// CVariantSaveDataOps::IsEmpty  (line 5177, @0x00000000030bee10, libserver.so)
bool __fastcall CVariantSaveDataOps::IsEmpty(
        CVariantSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  typedescription_t *pTypeDesc; // rdx
  _WORD *pField; // rax
  int fieldSize; // ecx
  int v5; // edx

  pTypeDesc = fieldInfo->pTypeDesc;
  pField = fieldInfo->pField;
  fieldSize = pTypeDesc->fieldSize;
  if ( pTypeDesc->fieldSize == 0 )
    return 1;
  if ( pField[4] == 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      ++v5;
      pField += 8;
      if ( v5 >= fieldSize )
        break;
      if ( pField[4] != 0 )
        return 0;
    }
    return 1;
  }
  return 0;
}


// CVariantSaveDataOps::MakeEmpty  (line 5191, @0x00000000030bee60, libserver.so)
void __fastcall CVariantSaveDataOps::MakeEmpty(
        CVariantSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  ;
}


// CEntitySystem::AddDatadescMetadataKeys  (line 5205, @0x00000000030adb50, libserver.so)
void __fastcall CEntitySystem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CEntitySystem::GetBaseMap  (line 5205, @0x00000000030adb60, libserver.so)
datamap_t *__cdecl CEntitySystem::GetBaseMap()
{
  return 0;
}


// DataMapInit<CEntitySystem>  (line 5205, @0x00000000030adb70, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_entitysystem.cpp
// strings: "CEntitySystem"
// globals: `guard variable for'DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder, CEntitySystem::m_DataMap, DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEntitySystem>(CEntitySystem *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder) != 0 )
  {
    DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder.m_pszBase = "CEntitySystem";
    DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEntitySystem>(CEntitySystem *)::nameHolder,
      &_dso_handle);
  }
  CEntitySystem::m_DataMap.baseMap = 0;
  CEntitySystem::m_DataMap.dataDesc = &DataMapInit<CEntitySystem>(CEntitySystem *)::dataDesc[1];
  CEntitySystem::m_DataMap.dataNumFields = 1;
  return &CEntitySystem::m_DataMap;
}


// EntityIOQueuePrioritizedEvent_t::AddDatadescMetadataKeys  (line 5214, @0x00000000030adc30, libserver.so)
void __fastcall EntityIOQueuePrioritizedEvent_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// EntityIOQueuePrioritizedEvent_t::GetBaseMap  (line 5214, @0x00000000030adc40, libserver.so)
datamap_t *__cdecl EntityIOQueuePrioritizedEvent_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<EntityIOQueuePrioritizedEvent_t>  (line 5214, @0x00000000030adc50, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_entitysystem.cpp
// strings: "EntityIOQueuePrioritizedEvent_t"
// globals: `guard variable for'DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder, `guard variable for'DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::dataDesc, EntityIOQueuePrioritizedEvent_t::m_DataMap, variantFuncs, DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder) != 0 )
  {
    DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder.m_pszBase = "EntityIOQueuePrioritizedEvent_t";
    DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder.m_nLenBase = 31;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::nameHolder,
      &_dso_handle);
  }
  EntityIOQueuePrioritizedEvent_t::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::dataDesc) != 0 )
  {
    DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::dataDesc[9].pSaveRestoreOps = variantFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::dataDesc);
  }
  EntityIOQueuePrioritizedEvent_t::m_DataMap.dataNumFields = 9;
  EntityIOQueuePrioritizedEvent_t::m_DataMap.dataDesc = &DataMapInit<EntityIOQueuePrioritizedEvent_t>(EntityIOQueuePrioritizedEvent_t *)::dataDesc[1];
  return &EntityIOQueuePrioritizedEvent_t::m_DataMap;
}


// CEntitySystem::Save  (line 5229, @0x00000000030add50, libserver.so)
// callers: CEventQueue_SaveRestoreBlockHandler::Save
// strings: "EventQueue", "PEvent"
// globals: CEntitySystem::m_DataMap, EntityIOQueuePrioritizedEvent_t::m_DataMap
int __fastcall CEntitySystem::Save(CEntitySystem *const this, ISave *const save)
{
  int v2; // ecx
  EntityIOQueuePrioritizedEvent_t *m_pNext; // rax
  EntityIOQueuePrioritizedEvent_t *v6; // rbx

  v2 = 0;
  m_pNext = this->m_events.m_pNext;
  for ( this->m_iEventListCount = 0; m_pNext != 0; m_pNext = m_pNext->m_pNext )
    this->m_iEventListCount = ++v2;
  if ( (*(save->_vptr_ISave + 6))(
         save,
         "EventQueue",
         this,
         0,
         CEntitySystem::m_DataMap.dataDesc,
         CEntitySystem::m_DataMap.dataNumFields) == 0 )
    return 0;
  v6 = this->m_events.m_pNext;
  if ( v6 != 0 )
  {
    while ( (*(save->_vptr_ISave + 6))(
              save,
              "PEvent",
              v6,
              0,
              EntityIOQueuePrioritizedEvent_t::m_DataMap.dataDesc,
              EntityIOQueuePrioritizedEvent_t::m_DataMap.dataNumFields) != 0 )
    {
      v6 = v6->m_pNext;
      if ( v6 == 0 )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CEntitySystem::Restore  (line 5254, @0x00000000030b4b20, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, CVariantBase, EntityIOQueuePrioritizedEvent_t, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, curtime, operator CEntityInstance*, operator bool, ~CVariantBase, ~EntityIOQueuePrioritizedEvent_t
// calls: CEntitySystem::ClearEntityIOEvents, CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CEventQueue_SaveRestoreBlockHandler::Restore
// strings: "EventQueue", "PEvent"
// globals: CEntitySystem::m_DataMap, EntityIOQueuePrioritizedEvent_t::m_DataMap, CEntityHandle::gm_pEntityList, gpGlobalsBase
int __fastcall CEntitySystem::Restore(CEntitySystem *const this, IRestore *const restore)
{
  int (**vptr_IRestore)(...); // rax
  int v5; // ebx
  __int64 m_Index_low; // rsi
  uint32 m_Index; // eax
  CConcreteEntityList *v8; // rcx
  CEntityIdentity *v9; // rdx
  CGlobalVarsBase *v10; // r14
  FnGlobalVarsWarningFunc v11; // rax
  float v12; // xmm0_4
  CEntityInstance *v13; // r9
  float v14; // xmm0_4
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // r8
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  const char *m_pAsString; // rcx
  const char *v21; // rdx
  int v22; // ebx
  CGlobalVarsBase *v24; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CConcreteEntityList *v26; // rdi
  float m_flCurrentTime; // xmm0_4
  CEntityInstance *m_pInstance; // r8
  float v29; // xmm0_4
  CEntityIdentity *v30; // rcx
  CEntityIdentity *v31; // rcx
  CEntityInstance *v32; // rcx
  CEntityIdentity *v33; // rsi
  CEntityIdentity *v34; // rsi
  float v35; // [rsp+18h] [rbp-B8h]
  float m_flFireTime; // [rsp+18h] [rbp-B8h]
  int nOutputID; // [rsp+1Ch] [rbp-B4h]
  int m_nOutputID; // [rsp+1Ch] [rbp-B4h]
  uint32 v39; // [rsp+30h] [rbp-A0h] BYREF
  UtlSymLargeId_t v40[2]; // [rsp+40h] [rbp-90h] BYREF
  EntityIOQueuePrioritizedEvent_t tmpEvent; // [rsp+50h] [rbp-80h] BYREF

  CEntitySystem::ClearEntityIOEvents(this);
  vptr_IRestore = restore->_vptr_IRestore;
  tmpEvent.m_hActivator.m_Index = -1;
  tmpEvent.m_pTarget.u.m_Id = 0;
  tmpEvent.m_pTargetInput.u.m_Id = 0;
  tmpEvent.m_hCaller.m_Index = -1;
  tmpEvent.m_hEntTarget.m_Index = -1;
  tmpEvent.m_variantValue.m_type = 0;
  tmpEvent.m_variantValue.m_flags = 0;
  tmpEvent.m_variantValue.m_uint64 = 0;
  if ( vptr_IRestore[3](
         restore,
         "EventQueue",
         this,
         0,
         CEntitySystem::m_DataMap.dataDesc,
         CEntitySystem::m_DataMap.dataNumFields) == 0 )
  {
LABEL_32:
    v22 = 0;
    goto LABEL_33;
  }
  if ( this->m_iEventListCount > 0 )
  {
    v5 = 0;
    while ( (*(restore->_vptr_IRestore + 3))(
              restore,
              "PEvent",
              &tmpEvent,
              0,
              EntityIOQueuePrioritizedEvent_t::m_DataMap.dataDesc,
              EntityIOQueuePrioritizedEvent_t::m_DataMap.dataNumFields) != 0 )
    {
      m_Index = tmpEvent.m_hEntTarget.m_Index;
      v8 = CEntityHandle::gm_pEntityList;
      v9 = (tmpEvent.m_hEntTarget.m_Index + 2);
      if ( v9 > 1
        && (m_Index_low = LOWORD(tmpEvent.m_hEntTarget.m_Index),
            (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(tmpEvent.m_hEntTarget.m_Index) >> 9) & 0x3F]) != 0)
        && (m_Index_low = 120LL * (tmpEvent.m_hEntTarget.m_Index & 0x1FF), (v9 = (v9 + m_Index_low)) != 0)
        && tmpEvent.m_hEntTarget.m_Index == v9->m_EHandle.m_Index )
      {
        v24 = gpGlobalsBase;
        m_flFireTime = tmpEvent.m_flFireTime;
        m_nOutputID = tmpEvent.m_nOutputID;
        if ( gpGlobalsBase != 0 )
        {
          if ( gpGlobalsBase->m_bEnableAssertions
            || gpGlobalsBase->m_bInSimulation
            || (m_pfnWarningFunc = gpGlobalsBase->m_pfnWarningFunc) == 0 )
          {
            v26 = CEntityHandle::gm_pEntityList;
          }
          else
          {
            (m_pfnWarningFunc)(1, m_Index_low, m_pfnWarningFunc, CEntityHandle::gm_pEntityList);
            m_Index = tmpEvent.m_hEntTarget.m_Index;
            v26 = CEntityHandle::gm_pEntityList;
          }
          m_flCurrentTime = v24->m_flCurrentTime;
        }
        else
        {
          v26 = CEntityHandle::gm_pEntityList;
          m_flCurrentTime = 0.0;
        }
        m_pInstance = 0;
        v29 = m_flFireTime - m_flCurrentTime;
        if ( tmpEvent.m_hCaller.m_Index + 2 > 1 )
        {
          v30 = v26->m_pIdentityChunks[(LOWORD(tmpEvent.m_hCaller.m_Index) >> 9) & 0x3F];
          if ( v30 != 0 )
          {
            v31 = &v30[tmpEvent.m_hCaller.m_Index & 0x1FF];
            if ( v31 != 0 && tmpEvent.m_hCaller.m_Index == v31->m_EHandle.m_Index )
              m_pInstance = v31->m_pInstance;
          }
        }
        v32 = 0;
        if ( tmpEvent.m_hActivator.m_Index + 2 > 1 )
        {
          v33 = v26->m_pIdentityChunks[(LOWORD(tmpEvent.m_hActivator.m_Index) >> 9) & 0x3F];
          if ( v33 != 0 )
          {
            v34 = &v33[tmpEvent.m_hActivator.m_Index & 0x1FF];
            if ( v34 != 0 && tmpEvent.m_hActivator.m_Index == v34->m_EHandle.m_Index )
              v32 = v34->m_pInstance;
          }
        }
        v39 = m_Index;
        v40[0] = tmpEvent.m_pTargetInput.u.m_Id;
        CEntitySystem::AddEntityIOEvent(this, &v39, v40, v32, m_pInstance, &tmpEvent.m_variantValue, v29, m_nOutputID);
      }
      else
      {
        v10 = gpGlobalsBase;
        v35 = tmpEvent.m_flFireTime;
        nOutputID = tmpEvent.m_nOutputID;
        if ( gpGlobalsBase != 0 )
        {
          if ( !gpGlobalsBase->m_bEnableAssertions && !gpGlobalsBase->m_bInSimulation )
          {
            v11 = gpGlobalsBase->m_pfnWarningFunc;
            if ( v11 != 0 )
            {
              (v11)(1, m_Index_low, v9, CEntityHandle::gm_pEntityList);
              v8 = CEntityHandle::gm_pEntityList;
            }
          }
          v12 = v10->m_flCurrentTime;
        }
        else
        {
          v12 = 0.0;
        }
        v13 = 0;
        v14 = v35 - v12;
        if ( tmpEvent.m_hCaller.m_Index + 2 > 1 )
        {
          v15 = v8->m_pIdentityChunks[(LOWORD(tmpEvent.m_hCaller.m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[tmpEvent.m_hCaller.m_Index & 0x1FF];
            if ( v16 != 0 && tmpEvent.m_hCaller.m_Index == v16->m_EHandle.m_Index )
              v13 = v16->m_pInstance;
          }
        }
        v17 = 0;
        if ( tmpEvent.m_hActivator.m_Index + 2 > 1 )
        {
          v18 = v8->m_pIdentityChunks[(LOWORD(tmpEvent.m_hActivator.m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[tmpEvent.m_hActivator.m_Index & 0x1FF];
            if ( v19 != 0 && tmpEvent.m_hActivator.m_Index == v19->m_EHandle.m_Index )
              v17 = v19->m_pInstance;
          }
        }
        m_pAsString = "";
        v21 = "";
        if ( tmpEvent.m_pTargetInput.u.m_Id != 0 )
          m_pAsString = tmpEvent.m_pTargetInput.u.m_pAsString;
        if ( tmpEvent.m_pTarget.u.m_Id != 0 )
          v21 = tmpEvent.m_pTarget.u.m_pAsString;
        CEntitySystem::AddEntityIOEvent(
          this,
          EntityIOTargetType_t::ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME,
          v21,
          m_pAsString,
          v17,
          v13,
          v14,
          &tmpEvent.m_variantValue,
          nOutputID);
      }
      if ( this->m_iEventListCount <= ++v5 )
        goto LABEL_31;
    }
    goto LABEL_32;
  }
LABEL_31:
  v22 = 1;
LABEL_33:
  CVariantBase<CVariantDefaultAllocator>::Free(&tmpEvent.m_variantValue);
  return v22;
}


// CEventQueue_SaveRestoreBlockHandler::GetBlockName  (line 5306, @0x00000000030bee70, libserver.so)
// strings: "EventQueue"
const char *__fastcall CEventQueue_SaveRestoreBlockHandler::GetBlockName(
        const CEventQueue_SaveRestoreBlockHandler *const this)
{
  return "EventQueue";
}


// CEventQueue_SaveRestoreBlockHandler::Save  (line 5313, @0x00000000030c0d60, libserver.so)
// calls: CEntitySystem::Save
// globals: g_pEntitySystem
void __fastcall CEventQueue_SaveRestoreBlockHandler::Save(
        CEventQueue_SaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  if ( g_pEntitySystem != 0 )
    CEntitySystem::Save(g_pEntitySystem, pSave);
}


// CEventQueue_SaveRestoreBlockHandler::WriteSaveHeaders  (line 5323, @0x00000000030bee80, libserver.so)
// globals: EVENTQUEUE_SAVE_RESTORE_VERSION
void __fastcall CEventQueue_SaveRestoreBlockHandler::WriteSaveHeaders(
        CEventQueue_SaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  (*(pSave->_vptr_ISave + 10))(pSave, &EVENTQUEUE_SAVE_RESTORE_VERSION, 1);
}


// CEventQueue_SaveRestoreBlockHandler::ReadRestoreHeaders  (line 5330, @0x00000000030beea0, libserver.so)
// globals: EVENTQUEUE_SAVE_RESTORE_VERSION
void __fastcall CEventQueue_SaveRestoreBlockHandler::ReadRestoreHeaders(
        CEventQueue_SaveRestoreBlockHandler *const this,
        IRestore *pRestore)
{
  __int16 version[9]; // [rsp+Eh] [rbp-12h] BYREF

  (*(pRestore->_vptr_IRestore + 23))(pRestore, version, 1, 0);
  this->m_fDoLoad = version[0] == EVENTQUEUE_SAVE_RESTORE_VERSION;
}


// CEventQueue_SaveRestoreBlockHandler::Restore  (line 5340, @0x00000000030c76b0, libserver.so)
// calls: CEntitySystem::Restore
// globals: g_pEntitySystem
void __fastcall CEventQueue_SaveRestoreBlockHandler::Restore(
        CEventQueue_SaveRestoreBlockHandler *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  if ( this->m_fDoLoad && g_pEntitySystem != 0 )
    CEntitySystem::Restore(g_pEntitySystem, pRestore);
}


// GetEventQueueSaveRestoreBlockHandler  (line 5358, @0x00000000030ade10, libserver.so)
// callers: CSource2Server::Shutdown, CSource2Server::Init
// globals: g_EventQueue_SaveRestoreBlockHandler
ISaveRestoreBlockHandler *__cdecl GetEventQueueSaveRestoreBlockHandler()
{
  return &g_EventQueue_SaveRestoreBlockHandler;
}


