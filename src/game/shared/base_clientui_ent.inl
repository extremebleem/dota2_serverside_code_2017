
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CClientUIDialogManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 26, @0x0000000001b507e0, libserver.so)
void __fastcall CClientUIDialogManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CClientUIDialogManager *const this)
{
  ;
}


// CClientUIDialogManager::DoesGameSystemReallocate  (line 26, @0x0000000001b507f0, libserver.so)
// globals: CClientUIDialogManager::sm_Factory
bool __fastcall CClientUIDialogManager::DoesGameSystemReallocate(const CClientUIDialogManager *const this)
{
  return (*(CClientUIDialogManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CClientUIDialogManager::sm_Factory);
}


// CClientUIDialogManager::SetGameSystemGlobalPtrs  (line 26, @0x0000000001b50810, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CClientUIDialogManager::sm_Factory
void __fastcall CClientUIDialogManager::SetGameSystemGlobalPtrs(CClientUIDialogManager *const this, void *pValue)
{
  if ( CClientUIDialogManager::sm_Factory != 0 )
    (*(CClientUIDialogManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CClientUIDialogManager::sm_Factory, pValue);
}


// CBaseClientUIEntity::GetEntityClass  (line 49, @0x0000000001b50840, libserver.so)
CEntityClass *__cdecl CBaseClientUIEntity::GetEntityClass()
{
  return g_pEntityCBaseClientUIEntityClass;
}


// CBaseClientUIEntity::Schema_DynamicBinding  (line 49, @0x0000000001b50c00, libserver.so)
// calls: CBaseClientUIEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseClientUIEntity::Schema_DynamicBinding(
        const CBaseClientUIEntity *const this)
{
  CBaseClientUIEntity::Schema_VerifyBindingIsRegistered();
  return CBaseClientUIEntity::s_pSchemaBinding;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 49, @0x0000000001ea8ae0, libserver.so)
// globals: CBaseClientUIEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseClientUIEntity::CEntityInstanceEntityClass *const this)
{
  return CBaseClientUIEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::AllocateInstance  (line 49, @0x0000000001ea8af0, libserver.so)
void *__fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::AllocateInstance(
        CBaseClientUIEntity::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::ConstructInstance  (line 49, @0x0000000001ea8b00, libserver.so)
CEntityInstance *__fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::ConstructInstance(
        CBaseClientUIEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  return p;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::DestructInstance  (line 49, @0x0000000001ea8b10, libserver.so)
void __fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::DestructInstance(
        CBaseClientUIEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  ;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::FreeInstance  (line 49, @0x0000000001ea8b20, libserver.so)
void __fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::FreeInstance(
        CBaseClientUIEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  ;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::CanAllocate  (line 49, @0x0000000001ea8b30, libserver.so)
bool __fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::CanAllocate(
        const CBaseClientUIEntity::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 49, @0x0000000001ea8b40, libserver.so)
// globals: CBaseClientUIEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseClientUIEntity::CEntityInstanceEntityClass *const this)
{
  return CBaseClientUIEntity::s_pSchemaBinding;
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000001ea8c50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseClientUIEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseClientUIEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000001ea8c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseClientUIEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseClientUIEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseClientUIEntity::GetEntityClassInternal  (line 49, @0x0000000001ea8dd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I_base_clientui_ent_h_schema.gen_cpp
// strings: "CBaseClientUIEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass, CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseClientUIEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo, CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo (9 total)
CEntityClass *__cdecl CBaseClientUIEntity::GetEntityClassInternal()
{
  CBaseClientUIEntity::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass) != 0 )
  {
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass._vptr_CEntityClass = off_3F79390;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_designerName.u.m_Id = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_ComponentOffsets.m_Size = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_AllHelpers.m_Size = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classInputs.m_Size = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classOutputs.m_Size = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_requiredEHandle.m_Index = -1;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_hNetworkSerializer = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pBaseClassInfo = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pClassInfo = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_flags = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_nAllHelpersFlags = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pScriptClassDesc = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pInputs = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_nInputCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pOutputs = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_nOutputCount = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pGameClass = 0;
    CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass._vptr_CEntityClass = off_3FB2310;
    __cxa_guard_release(&`guard variable for'CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass);
    __cxa_atexit(
      CBaseClientUIEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseClientUIEntityClass != 0 )
    return &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass;
  if ( `guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo,
      "CBaseClientUIEntity",
      0,
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo);
  }
  CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pClassInfo = &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo;
  CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pBaseClassInfo = CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseClientUIEntityClass = &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass;
  CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo.m_pClass = &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass;
  CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCBaseClientUIEntityClass->m_pComponentOverrides = 0;
  return &CBaseClientUIEntity::GetEntityClassInternal(void)::g_EntityCBaseClientUIEntityClass;
}


// CBaseClientUIEntity::GetEntityClassInfo  (line 49, @0x0000000001eac900, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CPointClientUIWorldTextPanel::GetEntityClassInternal
// strings: "CBaseClientUIEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo, CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CBaseClientUIEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo != 0 )
    return &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo) == 0 )
    return &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo,
    "CBaseClientUIEntity",
    0,
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo);
  return &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo;
}


// CBaseClientUIEntity::OnClientDialogFinished  (line 82, @0x0000000001b50850, libserver.so)
void __fastcall CBaseClientUIEntity::OnClientDialogFinished(CBaseClientUIEntity *const this, CBaseEntity *pClient)
{
  ;
}


// CBaseClientUIEntity::OnInputEnable  (line 86, @0x0000000001b50860, libserver.so)
void __fastcall CBaseClientUIEntity::OnInputEnable(CBaseClientUIEntity *const this, inputdata_t *const inputdata)
{
  ;
}


// CBaseClientUIEntity::OnInputDisable  (line 87, @0x0000000001b50870, libserver.so)
void __fastcall CBaseClientUIEntity::OnInputDisable(CBaseClientUIEntity *const this, inputdata_t *const inputdata)
{
  ;
}


