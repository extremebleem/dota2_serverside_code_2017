
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlasma::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x0000000001ea75e0, libserver.so)
// globals: CPlasma::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPlasma::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPlasma::CEntityInstanceEntityClass *const this)
{
  return CPlasma::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPlasma::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x0000000001ea75f0, libserver.so)  // inlines: Destruct<CPlasma>
void __fastcall CPlasma::CEntityInstanceEntityClass::DestructInstance(
        CPlasma::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPlasma::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x0000000001ea7610, libserver.so)
void __fastcall CPlasma::CEntityInstanceEntityClass::FreeInstance(
        CPlasma::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPlasma::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x0000000001ea7630, libserver.so)
bool __fastcall CPlasma::CEntityInstanceEntityClass::CanAllocate(const CPlasma::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPlasma::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x0000000001ea7640, libserver.so)
// globals: CPlasma::s_pSchemaBinding
const ISchemaBinding *__fastcall CPlasma::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPlasma::CEntityInstanceEntityClass *const this)
{
  return CPlasma::s_pSchemaBinding;
}


// CPlasma::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x0000000001ea7750, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPlasma::CEntityInstanceEntityClass::AllocateInstance(CPlasma::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CPlasma::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x0000000001ea7800, libserver.so)  // inlines: Construct<CPlasma>
// calls: CPlasma::CPlasma
CEntityInstance *__fastcall CPlasma::CEntityInstanceEntityClass::ConstructInstance(
        CPlasma::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPlasma::CPlasma(p);
  return p;
}


// CPlasma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001ea7970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPlasma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPlasma::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPlasma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001ea7990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPlasma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPlasma::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPlasma::GetEntityClassInternal  (line 23, @0x0000000001ea7af0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I_plasma_h_schema.gen_cpp
// strings: "_plasma", "CPlasma", "_dummyBaseFireClass", "CBaseFire"
// globals: `guard variable for'CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass, CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPlasma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo, CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo, `guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo (9 total)
CEntityClass *__cdecl CPlasma::GetEntityClassInternal()
{
  CPlasma::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass) != 0 )
  {
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass._vptr_CEntityClass = off_3F79390;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_designerName.u.m_Id = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_ComponentOffsets.m_Size = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_AllHelpers.m_Size = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classInputs.m_Size = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classOutputs.m_Size = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_requiredEHandle.m_Index = -1;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_hNetworkSerializer = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pBaseClassInfo = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pClassInfo = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_flags = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_nAllHelpersFlags = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pScriptClassDesc = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pInputs = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_nInputCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pOutputs = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_nOutputCount = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pGameClass = 0;
    CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass._vptr_CEntityClass = off_3FB1FB0;
    __cxa_guard_release(&`guard variable for'CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass);
    __cxa_atexit(
      CPlasma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass,
      &_dso_handle);
  }
  if ( g_pEntityCPlasmaClass != 0 )
    return &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass;
  if ( `guard variable for'CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo,
        "CBaseFire",
        "_dummyBaseFireClass",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo,
      "CPlasma",
      "_plasma",
      0,
      &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo);
    __cxa_guard_release(&`guard variable for'CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo);
  }
  CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pClassInfo = &CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo;
  CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pBaseClassInfo = CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo.m_pBaseClassInfo;
  g_pEntityCPlasmaClass = &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass;
  CPlasma::GetEntityClassInfo(void)::g_EntityCPlasmaClassInfo.m_pClass = &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass;
  CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPlasmaClass->m_pComponentOverrides = 0;
  return &CPlasma::GetEntityClassInternal(void)::g_EntityCPlasmaClass;
}


// CPlasma::GetEntityClass  (line 23, @0x0000000002f4f7d0, libserver.so)
CEntityClass *__cdecl CPlasma::GetEntityClass()
{
  return g_pEntityCPlasmaClass;
}


// CPlasma::Schema_DynamicBinding  (line 23, @0x0000000002f50080, libserver.so)
// calls: CPlasma::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPlasma::Schema_DynamicBinding(const CPlasma *const this)
{
  CPlasma::Schema_VerifyBindingIsRegistered();
  return CPlasma::s_pSchemaBinding;
}


