
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointHMDAnchor::~CPointHMDAnchor  (line 40, @0x000000000233b800, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointHMDAnchor::~CPointHMDAnchor(CPointHMDAnchor *const this)
{
  this->_vptr_IHandleEntity = &off_408D570;
  CBaseEntity::~CBaseEntity(this);
}


// CPointHMDAnchor::~CPointHMDAnchor  (line 40, @0x000000000233b820, libserver.so)  // inlines: ~CPointHMDAnchor
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointHMDAnchor::~CPointHMDAnchor(CPointHMDAnchor *const this)
{
  this->_vptr_IHandleEntity = &off_408D570;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointHMDAnchor::GetEntityClass  (line 42, @0x0000000002339770, libserver.so)
CEntityClass *__cdecl CPointHMDAnchor::GetEntityClass()
{
  return g_pEntityCPointHMDAnchorClass;
}


// CPointHMDAnchor::Schema_DynamicBinding  (line 42, @0x0000000002339780, libserver.so)
// globals: CPointHMDAnchor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointHMDAnchor::Schema_DynamicBinding(const CPointHMDAnchor *const this)
{
  return CPointHMDAnchor::s_pSchemaBinding;
}


// CPointHMDAnchor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002339790, libserver.so)
// globals: CPointHMDAnchor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointHMDAnchor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointHMDAnchor::CEntityInstanceEntityClass *const this)
{
  return CPointHMDAnchor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointHMDAnchor::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x00000000023397a0, libserver.so)  // inlines: Destruct<CPointHMDAnchor>
void __fastcall CPointHMDAnchor::CEntityInstanceEntityClass::DestructInstance(
        CPointHMDAnchor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointHMDAnchor::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x00000000023397c0, libserver.so)
void __fastcall CPointHMDAnchor::CEntityInstanceEntityClass::FreeInstance(
        CPointHMDAnchor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointHMDAnchor::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x00000000023397e0, libserver.so)
bool __fastcall CPointHMDAnchor::CEntityInstanceEntityClass::CanAllocate(
        const CPointHMDAnchor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointHMDAnchor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x00000000023397f0, libserver.so)
// globals: CPointHMDAnchor::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointHMDAnchor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointHMDAnchor::CEntityInstanceEntityClass *const this)
{
  return CPointHMDAnchor::s_pSchemaBinding;
}


// CPointHMDAnchor::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x000000000233b120, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointHMDAnchor::CEntityInstanceEntityClass::AllocateInstance(
        CPointHMDAnchor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CPointHMDAnchor::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x000000000233b4d0, libserver.so)  // inlines: CNetworkVarBase, CPointHMDAnchor, Construct<CPointHMDAnchor>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointHMDAnchor::CEntityInstanceEntityClass::ConstructInstance(
        CPointHMDAnchor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 776) = 0;
    *p = &off_408D570;
    *(p + 195) = 0;
    *(p + 196) = 0;
  }
  return p;
}


// CPointHMDAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x000000000233cad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointHMDAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointHMDAnchor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointHMDAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x000000000233caf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointHMDAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointHMDAnchor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointHMDAnchor::GetEntityClassInternal  (line 42, @0x0000000002343cf0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_hmd_anchor", "CPointHMDAnchor", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass, CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointHMDAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo, CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (11 total)
CEntityClass *__cdecl CPointHMDAnchor::GetEntityClassInternal()
{
  if ( `guard variable for'CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass) != 0 )
  {
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_designerName.u.m_Id = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass._vptr_CEntityClass = off_3F79390;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_ComponentOffsets.m_Size = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_AllHelpers.m_Size = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classInputs.m_Size = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classOutputs.m_Size = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_requiredEHandle.m_Index = -1;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_hNetworkSerializer = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pBaseClassInfo = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pClassInfo = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_flags = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_nAllHelpersFlags = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pScriptClassDesc = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pInputs = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_nInputCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pOutputs = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_nOutputCount = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pGameClass = 0;
    CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass._vptr_CEntityClass = off_408AE90;
    __cxa_guard_release(&`guard variable for'CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass);
    __cxa_atexit(
      CPointHMDAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointHMDAnchorClass != 0 )
    return &CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass;
  if ( `guard variable for'CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
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
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo,
      "CPointHMDAnchor",
      "point_hmd_anchor",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo);
  }
  CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pClassInfo = &CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo;
  CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pBaseClassInfo = CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo.m_pBaseClassInfo;
  g_pEntityCPointHMDAnchorClass = &CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass;
  CPointHMDAnchor::GetEntityClassInfo(void)::g_EntityCPointHMDAnchorClassInfo.m_pClass = &CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass;
  CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointHMDAnchorClass->m_pComponentOverrides = 0;
  return &CPointHMDAnchor::GetEntityClassInternal(void)::g_EntityCPointHMDAnchorClass;
}


