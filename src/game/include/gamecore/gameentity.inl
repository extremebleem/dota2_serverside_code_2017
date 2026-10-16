
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameEntity::~CGameEntity  (line 30, @0x0000000001f03f40, libserver.so)
// calls: CEntityInstance::~CEntityInstance
void __fastcall CGameEntity::~CGameEntity(CGameEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FC3AD0;
  CEntityInstance::~CEntityInstance(this);
}


// CGameEntity::~CGameEntity  (line 30, @0x0000000001f03f60, libserver.so)  // inlines: ~CGameEntity
// calls: CEntityInstance::~CEntityInstance, operator delete
void __fastcall CGameEntity::~CGameEntity(CGameEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FC3AD0;
  CEntityInstance::~CEntityInstance(this);
  operator delete(this);
}


// CGameEntity::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000001ea0cb0, libserver.so)
void *__fastcall CGameEntity::CEntityInstanceEntityClass::AllocateInstance(
        CGameEntity::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CGameEntity::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000001ea0cc0, libserver.so)
CEntityInstance *__fastcall CGameEntity::CEntityInstanceEntityClass::ConstructInstance(
        CGameEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  return p;
}


// CGameEntity::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000001ea0cd0, libserver.so)
void __fastcall CGameEntity::CEntityInstanceEntityClass::DestructInstance(
        CGameEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  ;
}


// CGameEntity::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000001ea0ce0, libserver.so)
void __fastcall CGameEntity::CEntityInstanceEntityClass::FreeInstance(
        CGameEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  ;
}


// CGameEntity::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000001ea0cf0, libserver.so)
bool __fastcall CGameEntity::CEntityInstanceEntityClass::CanAllocate(
        const CGameEntity::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CGameEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000001ea1cf0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CGameEntity::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CGameEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameEntity::CEntityInstanceEntityClass *const this)
{
  CGameEntity::Schema_VerifyBindingIsRegistered();
  return CGameEntity::s_pSchemaBinding;
}


// CGameEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000001ea1d10, libserver.so)
// calls: CGameEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGameEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameEntity::CEntityInstanceEntityClass *const this)
{
  CGameEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CGameEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000001ea2690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGameEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000001ea26b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameEntity::GetEntityClassInternal  (line 34, @0x0000000001eff5f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CEntityInstance::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I__unity_interface_01.cpp
// strings: "CGameEntity"
// globals: `guard variable for'CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass, CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGameEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClass *__cdecl CGameEntity::GetEntityClassInternal()
{
  CGameEntity::CEntityInstanceEntityClass *v1; // rax

  if ( `guard variable for'CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass) != 0 )
  {
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass._vptr_CEntityClass = off_3F79390;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_designerName.u.m_Id = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_ComponentOffsets.m_Size = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_AllHelpers.m_Size = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classInputs.m_Size = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classOutputs.m_Size = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_requiredEHandle.m_Index = -1;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_hNetworkSerializer = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pBaseClassInfo = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pClassInfo = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_flags = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_nAllHelpersFlags = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pScriptClassDesc = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pInputs = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_nInputCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pOutputs = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_nOutputCount = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pGameClass = 0;
    CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass._vptr_CEntityClass = off_3FAF3B0;
    __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass);
    __cxa_atexit(
      CGameEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameEntityClass != 0 )
    return &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass;
  if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
  {
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
      "CGameEntity",
      0,
      0,
      &g_EntityRootClassInfo);
    __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
  }
  CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pClassInfo = &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo;
  CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pBaseClassInfo = CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCGameEntityClass = &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass;
  CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo.m_pClass = &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass;
  CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass.m_pScriptClassDesc = CEntityInstance::InitScriptDesc();
  g_pEntityCGameEntityClass->m_pComponentOverrides = 0;
  return &CGameEntity::GetEntityClassInternal(void)::g_EntityCGameEntityClass;
}


// CGameEntity::Schema_DynamicBinding  (line 34, @0x0000000001f03ed0, libserver.so)
// calls: CGameEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGameEntity::Schema_DynamicBinding(const CGameEntity *const this)
{
  CGameEntity::Schema_VerifyBindingIsRegistered();
  return CGameEntity::s_pSchemaBinding;
}


// CGameEntity::HackToMakeAVTable  (line 35, @0x0000000001f038b0, libserver.so)
void __fastcall CGameEntity::HackToMakeAVTable(const CGameEntity *const this)
{
  ;
}


// CGameEntity::GetPredictionCopyable  (line 42, @0x0000000001b50090, libserver.so)
IPredictionCopyable *__fastcall CGameEntity::GetPredictionCopyable(CGameEntity *const this)
{
  return 0;
}


