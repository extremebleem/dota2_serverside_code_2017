
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointClientUIWorldTextPanel::~CPointClientUIWorldTextPanel  (line 72, @0x0000000001b55610, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CPointClientUIWorldPanel, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseClientUIEntity::~CBaseClientUIEntity, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CPointClientUIWorldTextPanel::~CPointClientUIWorldTextPanel(CPointClientUIWorldTextPanel *const this)
{
  bool v2; // zf
  CUtlVectorBase<CUtlSymbolLarge,CNetworkUtlVector_MemoryType<CUtlSymbolLarge,-1> >::CAllocator *p_m_Memory; // r12

  this->m_vecCSSClasses.m_Vector.m_Size = 0;
  v2 = (this->m_vecCSSClasses.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_3F7CDB0;
  if ( !v2
    || (p_m_Memory = &this->m_vecCSSClasses.m_Vector.m_Memory,
        CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_vecCSSClasses.m_Vector.m_Memory),
        (this->m_vecCSSClasses.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseClientUIEntity::~CBaseClientUIEntity(this);
  }
  else
  {
    CUtlMemory<CUtlSymbolLarge,int>::Purge(p_m_Memory);
    CBaseClientUIEntity::~CBaseClientUIEntity(this);
  }
}


// CPointClientUIWorldTextPanel::~CPointClientUIWorldTextPanel  (line 72, @0x0000000001b55680, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CPointClientUIWorldPanel, ~CPointClientUIWorldTextPanel, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseClientUIEntity::~CBaseClientUIEntity, CBaseEntity::operator delete, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CPointClientUIWorldTextPanel::~CPointClientUIWorldTextPanel(CPointClientUIWorldTextPanel *const this)
{
  bool v2; // zf
  CUtlVectorBase<CUtlSymbolLarge,CNetworkUtlVector_MemoryType<CUtlSymbolLarge,-1> >::CAllocator *p_m_Memory; // r12

  this->m_vecCSSClasses.m_Vector.m_Size = 0;
  v2 = (this->m_vecCSSClasses.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_3F7CDB0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecCSSClasses.m_Vector.m_Memory;
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_vecCSSClasses.m_Vector.m_Memory);
    if ( (this->m_vecCSSClasses.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbolLarge,int>::Purge(p_m_Memory);
  }
  CBaseClientUIEntity::~CBaseClientUIEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointClientUIWorldTextPanel::GetEntityClass  (line 74, @0x0000000001b555e0, libserver.so)
CEntityClass *__cdecl CPointClientUIWorldTextPanel::GetEntityClass()
{
  return g_pEntityCPointClientUIWorldTextPanelClass;
}


// CPointClientUIWorldTextPanel::Schema_DynamicBinding  (line 74, @0x0000000001b555f0, libserver.so)
// calls: CPointClientUIWorldTextPanel::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPointClientUIWorldTextPanel::Schema_DynamicBinding(
        const CPointClientUIWorldTextPanel *const this)
{
  CPointClientUIWorldTextPanel::Schema_VerifyBindingIsRegistered();
  return CPointClientUIWorldTextPanel::s_pSchemaBinding;
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 74, @0x0000000001eac4d0, libserver.so)
// globals: CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this)
{
  return CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::DestructInstance  (line 74, @0x0000000001eac4e0, libserver.so)  // inlines: Destruct<CPointClientUIWorldTextPanel>
void __fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::DestructInstance(
        CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::FreeInstance  (line 74, @0x0000000001eac500, libserver.so)
void __fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::FreeInstance(
        CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::CanAllocate  (line 74, @0x0000000001eac520, libserver.so)
bool __fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::CanAllocate(
        const CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 74, @0x0000000001eac530, libserver.so)
// globals: CPointClientUIWorldTextPanel::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this)
{
  return CPointClientUIWorldTextPanel::s_pSchemaBinding;
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::AllocateInstance  (line 74, @0x0000000001eac710, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::AllocateInstance(
        CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2008);
  memset(v1, 0, 0x7D8u);
  return v1;
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::ConstructInstance  (line 74, @0x0000000001eac750, libserver.so)  // inlines: Construct<CPointClientUIWorldTextPanel>
// calls: CPointClientUIWorldTextPanel::CPointClientUIWorldTextPanel
CEntityInstance *__fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::ConstructInstance(
        CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointClientUIWorldTextPanel::CPointClientUIWorldTextPanel(p);
  return p;
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000001eac780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000001eac7a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointClientUIWorldTextPanel::GetEntityClassInternal  (line 74, @0x0000000001eac9c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CPointClientUIWorldPanel::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseClientUIEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I_point_clientui_world_text_panel_h_schema.gen_cpp
// strings: "point_clientui_world_text_panel", "point_clientui_world_panel", "CPointClientUIWorldPanel"
// globals: `guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass, CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo, CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo, `guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo (9 total)
CEntityClass *__cdecl CPointClientUIWorldTextPanel::GetEntityClassInternal()
{
  CPointClientUIWorldTextPanel::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass) != 0 )
  {
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass._vptr_CEntityClass = off_3F79390;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_designerName.u.m_Id = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_ComponentOffsets.m_Size = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_AllHelpers.m_Size = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classInputs.m_Size = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classOutputs.m_Size = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_requiredEHandle.m_Index = -1;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_hNetworkSerializer = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pBaseClassInfo = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pClassInfo = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_flags = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_nAllHelpersFlags = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pScriptClassDesc = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pInputs = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_nInputCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pOutputs = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_nOutputCount = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pGameClass = 0;
    CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass._vptr_CEntityClass = off_3FB29D0;
    __cxa_guard_release(&`guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass);
    __cxa_atexit(
      CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointClientUIWorldTextPanelClass != 0 )
    return &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass;
  if ( `guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo) != 0 )
  {
    if ( `guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo) != 0 )
    {
      EntityClassInfo = CBaseClientUIEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo,
        "CPointClientUIWorldPanel",
        "point_clientui_world_panel",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo,
      &flLerp.y,
      "point_clientui_world_text_panel",
      0,
      &CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo);
    __cxa_guard_release(&`guard variable for'CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo);
  }
  CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pClassInfo = &CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo;
  CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pBaseClassInfo = CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo.m_pBaseClassInfo;
  g_pEntityCPointClientUIWorldTextPanelClass = &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass;
  CPointClientUIWorldTextPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldTextPanelClassInfo.m_pClass = &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass;
  CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass.m_pScriptClassDesc = CPointClientUIWorldPanel::InitScriptDesc();
  g_pEntityCPointClientUIWorldTextPanelClass->m_pComponentOverrides = 0;
  return &CPointClientUIWorldTextPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldTextPanelClass;
}


