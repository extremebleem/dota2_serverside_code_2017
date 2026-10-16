
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointClientUIWorldPanel::~CPointClientUIWorldPanel  (line 39, @0x0000000001b544d0, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseClientUIEntity::~CBaseClientUIEntity, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CPointClientUIWorldPanel::~CPointClientUIWorldPanel(CPointClientUIWorldPanel *const this)
{
  bool v2; // zf
  CUtlVectorBase<CUtlSymbolLarge,CNetworkUtlVector_MemoryType<CUtlSymbolLarge,-1> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecCSSClasses.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_3F7CDB0;
  this->m_vecCSSClasses.m_Vector.m_Size = 0;
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


// CPointClientUIWorldPanel::~CPointClientUIWorldPanel  (line 39, @0x0000000001b54540, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CPointClientUIWorldPanel, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseClientUIEntity::~CBaseClientUIEntity, CBaseEntity::operator delete, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CPointClientUIWorldPanel::~CPointClientUIWorldPanel(CPointClientUIWorldPanel *const this)
{
  bool v2; // zf
  CUtlVectorBase<CUtlSymbolLarge,CNetworkUtlVector_MemoryType<CUtlSymbolLarge,-1> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecCSSClasses.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_3F7CDB0;
  this->m_vecCSSClasses.m_Vector.m_Size = 0;
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


// CPointClientUIWorldPanel::GetEntityClass  (line 41, @0x0000000001b54330, libserver.so)
CEntityClass *__cdecl CPointClientUIWorldPanel::GetEntityClass()
{
  return g_pEntityCPointClientUIWorldPanelClass;
}


// CPointClientUIWorldPanel::Schema_DynamicBinding  (line 41, @0x0000000001b54360, libserver.so)
// calls: CPointClientUIWorldPanel::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPointClientUIWorldPanel::Schema_DynamicBinding(
        const CPointClientUIWorldPanel *const this)
{
  CPointClientUIWorldPanel::Schema_VerifyBindingIsRegistered();
  return CPointClientUIWorldPanel::s_pSchemaBinding;
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000001eaa680, libserver.so)
// globals: CPointClientUIWorldPanel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this)
{
  return CPointClientUIWorldPanel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000001eaa690, libserver.so)  // inlines: Destruct<CPointClientUIWorldPanel>
void __fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::DestructInstance(
        CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000001eaa6b0, libserver.so)
void __fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::FreeInstance(
        CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000001eaa6d0, libserver.so)
bool __fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::CanAllocate(
        const CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000001eaa6e0, libserver.so)
// globals: CPointClientUIWorldPanel::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this)
{
  return CPointClientUIWorldPanel::s_pSchemaBinding;
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000001eaa7c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::AllocateInstance(
        CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1496);
  memset(v1, 0, 0x5D8u);
  return v1;
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000001eaa800, libserver.so)  // inlines: Construct<CPointClientUIWorldPanel>
// calls: CPointClientUIWorldPanel::CPointClientUIWorldPanel
CEntityInstance *__fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::ConstructInstance(
        CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointClientUIWorldPanel::CPointClientUIWorldPanel(p);
  return p;
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000001eaaf50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointClientUIWorldPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000001eaaf70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointClientUIWorldPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointClientUIWorldPanel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointClientUIWorldPanel::GetEntityClassInternal  (line 41, @0x0000000001eab310, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CPointClientUIWorldPanel>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I_point_clientui_world_panel_h_schema.gen_cpp
// strings: "point_clientui_world_panel", "CPointClientUIWorldPanel", "CBaseClientUIEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass, CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointClientUIWorldPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo, CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo, `guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo (11 total)
CEntityClass *__cdecl CPointClientUIWorldPanel::GetEntityClassInternal()
{
  CPointClientUIWorldPanel::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass) != 0 )
  {
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass._vptr_CEntityClass = off_3F79390;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_designerName.u.m_Id = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_ComponentOffsets.m_Size = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_AllHelpers.m_Size = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classInputs.m_Size = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classOutputs.m_Size = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_requiredEHandle.m_Index = -1;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_hNetworkSerializer = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pBaseClassInfo = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pClassInfo = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_flags = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_nAllHelpersFlags = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pScriptClassDesc = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pInputs = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_nInputCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pOutputs = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_nOutputCount = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pGameClass = 0;
    CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass._vptr_CEntityClass = off_3FB25B0;
    __cxa_guard_release(&`guard variable for'CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass);
    __cxa_atexit(
      CPointClientUIWorldPanel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointClientUIWorldPanelClass != 0 )
    return &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass;
  if ( `guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo) != 0 )
  {
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
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo,
      "CPointClientUIWorldPanel",
      "point_clientui_world_panel",
      0,
      &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo);
  }
  CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pClassInfo = &CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo;
  CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pBaseClassInfo = CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo.m_pBaseClassInfo;
  g_pEntityCPointClientUIWorldPanelClass = &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass;
  CPointClientUIWorldPanel::GetEntityClassInfo(void)::g_EntityCPointClientUIWorldPanelClassInfo.m_pClass = &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass;
  CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass.m_pScriptClassDesc = GetScriptDesc<CPointClientUIWorldPanel>(0);
  g_pEntityCPointClientUIWorldPanelClass->m_pComponentOverrides = 0;
  return &CPointClientUIWorldPanel::GetEntityClassInternal(void)::g_EntityCPointClientUIWorldPanelClass;
}


// CPointClientUIWorldPanel::ShouldDraw  (line 107, @0x0000000001b54340, libserver.so)
bool __fastcall CPointClientUIWorldPanel::ShouldDraw(CPointClientUIWorldPanel *const this)
{
  return 1;
}


