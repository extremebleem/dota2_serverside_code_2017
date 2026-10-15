
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseTrigger::~CBaseTrigger  (line 23, @0x00000000023f5eb0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CBaseTrigger::~CBaseTrigger(CBaseTrigger *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseTrigger::~CBaseTrigger  (line 23, @0x00000000023f6d00, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CBaseTrigger::~CBaseTrigger(CBaseTrigger *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseTrigger::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x0000000001eea3d0, libserver.so)  // inlines: Destruct<CBaseTrigger>
void __fastcall CBaseTrigger::CEntityInstanceEntityClass::DestructInstance(
        CBaseTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseTrigger::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x0000000001eea3f0, libserver.so)
void __fastcall CBaseTrigger::CEntityInstanceEntityClass::FreeInstance(
        CBaseTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseTrigger::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x0000000001eea410, libserver.so)
bool __fastcall CBaseTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CBaseTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x0000000001eebe20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CBaseTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CBaseTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x0000000001eeca70, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseTrigger::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseTrigger::CEntityInstanceEntityClass *const this)
{
  CBaseTrigger::Schema_VerifyBindingIsRegistered();
  return CBaseTrigger::s_pSchemaBinding;
}


// CBaseTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x0000000001eeca90, libserver.so)
// calls: CBaseTrigger::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseTrigger::CEntityInstanceEntityClass *const this)
{
  CBaseTrigger::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x0000000001eecab0, libserver.so)  // inlines: Construct<CBaseTrigger>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CBaseTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CBaseTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseTrigger::CBaseTrigger(p);
  return p;
}


// CBaseTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001eedbd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001eedbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseTrigger::GetEntityClassInfo  (line 25, @0x0000000001ef0610, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CTonemapTrigger::GetEntityClassInternal, CFogTrigger::GetEntityClassInternal, CTriggerMultiple::GetEntityClassInternal, CTriggerSndSosOpvar::GetEntityClassInternal, CTriggerHurt::GetEntityClassInternal, CTriggerCallback::GetEntityClassInternal, CTriggerRemove::GetEntityClassInternal, CScriptTriggerHurt::GetEntityClassInternal, CTriggerOnce::GetEntityClassInfo, CTriggerOnce::GetEntityClassInternal, CChangeLevel::GetEntityClassInternal, CTriggerPush::GetEntityClassInternal (23 total)
// strings: "CBaseTrigger", "CBaseToggle"
// globals: `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CBaseTrigger::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo != 0 )
    return &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) == 0 )
    return &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo;
  if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
      "CBaseToggle",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
    "CBaseTrigger",
    "trigger",
    0,
    &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  return &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo;
}


// CBaseTrigger::GetEntityClassInternal  (line 25, @0x0000000002023a30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseTrigger>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "CBaseTrigger", "CBaseToggle"
// globals: `guard variable for'CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass, CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo (9 total)
CEntityClass *__cdecl CBaseTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass) != 0 )
  {
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_designerName.u.m_Id = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass._vptr_CEntityClass = off_3F79390;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_ComponentOffsets.m_Size = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_AllHelpers.m_Size = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classInputs.m_Size = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classOutputs.m_Size = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_requiredEHandle.m_Index = -1;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_hNetworkSerializer = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pBaseClassInfo = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pClassInfo = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_flags = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_nAllHelpersFlags = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pScriptClassDesc = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pInputs = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_nInputCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pOutputs = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_nOutputCount = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pGameClass = 0;
    CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass._vptr_CEntityClass = off_3FB6450;
    __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass);
    __cxa_atexit(
      CBaseTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseTriggerClass != 0 )
    return &CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass;
  if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
      "CBaseTrigger",
      "trigger",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  }
  CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pClassInfo = &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo;
  CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pBaseClassInfo = CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseTriggerClass = &CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass;
  CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo.m_pClass = &CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass;
  CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass.m_pScriptClassDesc = GetScriptDesc<CBaseTrigger>(0);
  g_pEntityCBaseTriggerClass->m_pComponentOverrides = 0;
  return &CBaseTrigger::GetEntityClassInternal(void)::g_EntityCBaseTriggerClass;
}


// CBaseTrigger::GetEntityClass  (line 25, @0x00000000023e5320, libserver.so)
CEntityClass *__cdecl CBaseTrigger::GetEntityClass()
{
  return g_pEntityCBaseTriggerClass;
}


// CBaseTrigger::Schema_DynamicBinding  (line 25, @0x00000000023e94a0, libserver.so)
// calls: CBaseTrigger::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseTrigger::Schema_DynamicBinding(const CBaseTrigger *const this)
{
  CBaseTrigger::Schema_VerifyBindingIsRegistered();
  return CBaseTrigger::s_pSchemaBinding;
}


// CBaseTrigger::ObjectCaps  (line 40, @0x0000000001eec440, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CBaseTrigger::ObjectCaps(CBaseTrigger *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CBaseTrigger::UsesFilter  (line 63, @0x0000000001eed740, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseTrigger::UsesFilter(CBaseTrigger *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hFilter.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFilter.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hFilter.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance != 0;
    }
  }
  return result;
}


// CTriggerMultiple::~CTriggerMultiple  (line 125, @0x00000000023f5f20, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerMultiple::~CTriggerMultiple(CTriggerMultiple *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerMultiple::~CTriggerMultiple  (line 125, @0x00000000023f6880, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerMultiple::~CTriggerMultiple(CTriggerMultiple *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerMultiple::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 127, @0x0000000002018f50, libserver.so)
// globals: CTriggerMultiple::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerMultiple::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  return CTriggerMultiple::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerMultiple::CEntityInstanceEntityClass::DestructInstance  (line 127, @0x0000000002018f60, libserver.so)  // inlines: Destruct<CTriggerMultiple>
void __fastcall CTriggerMultiple::CEntityInstanceEntityClass::DestructInstance(
        CTriggerMultiple::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerMultiple::CEntityInstanceEntityClass::FreeInstance  (line 127, @0x0000000002018f80, libserver.so)
void __fastcall CTriggerMultiple::CEntityInstanceEntityClass::FreeInstance(
        CTriggerMultiple::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerMultiple::CEntityInstanceEntityClass::CanAllocate  (line 127, @0x0000000002018fa0, libserver.so)
bool __fastcall CTriggerMultiple::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerMultiple::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 127, @0x0000000002018fb0, libserver.so)
// globals: CTriggerMultiple::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerMultiple::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  return CTriggerMultiple::s_pSchemaBinding;
}


// CTriggerMultiple::CEntityInstanceEntityClass::AllocateInstance  (line 127, @0x000000000201ab00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerMultiple::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1504);
  memset(v1, 0, 0x5E0u);
  return v1;
}


// CTriggerMultiple::CEntityInstanceEntityClass::ConstructInstance  (line 127, @0x000000000201ae60, libserver.so)  // inlines: Construct<CTriggerMultiple>
// calls: CTriggerMultiple::CTriggerMultiple
CEntityInstance *__fastcall CTriggerMultiple::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerMultiple::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CTriggerMultiple::CTriggerMultiple(p);
  return p;
}


// CTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x000000000201da60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x000000000201da80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerMultiple::GetEntityClassInternal  (line 127, @0x0000000002023dc0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseTrigger>, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "CTriggerMultiple"
// globals: `guard variable for'CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass, CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo, CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo
CEntityClass *__cdecl CTriggerMultiple::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass) != 0 )
  {
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_designerName.u.m_Id = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass._vptr_CEntityClass = off_3F79390;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_ComponentOffsets.m_Size = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_AllHelpers.m_Size = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classInputs.m_Size = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classOutputs.m_Size = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_requiredEHandle.m_Index = -1;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_hNetworkSerializer = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pBaseClassInfo = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pClassInfo = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_flags = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_nAllHelpersFlags = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pScriptClassDesc = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pInputs = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_nInputCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pOutputs = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_nOutputCount = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pGameClass = 0;
    CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass._vptr_CEntityClass = off_3FE29F0;
    __cxa_guard_release(&`guard variable for'CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass);
    __cxa_atexit(
      CTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerMultipleClass != 0 )
    return &CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass;
  if ( `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo,
      "CTriggerMultiple",
      "trigger_multiple",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo);
  }
  CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pClassInfo = &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo;
  CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pBaseClassInfo = CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerMultipleClass = &CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass;
  CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo.m_pClass = &CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass;
  CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass.m_pScriptClassDesc = GetScriptDesc<CBaseTrigger>(0);
  g_pEntityCTriggerMultipleClass->m_pComponentOverrides = 0;
  return &CTriggerMultiple::GetEntityClassInternal(void)::g_EntityCTriggerMultipleClass;
}


// CTriggerMultiple::GetEntityClass  (line 127, @0x00000000023e5330, libserver.so)
CEntityClass *__cdecl CTriggerMultiple::GetEntityClass()
{
  return g_pEntityCTriggerMultipleClass;
}


// CTriggerMultiple::Schema_DynamicBinding  (line 127, @0x00000000023e94c0, libserver.so)
// calls: CTriggerMultiple::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CTriggerMultiple::Schema_DynamicBinding(const CTriggerMultiple *const this)
{
  CTriggerMultiple::Schema_VerifyBindingIsRegistered();
  return CTriggerMultiple::s_pSchemaBinding;
}


// CTriggerMultiple::GetEntityClassInfo  (line 127, @0x00000000023ee100, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CScriptTriggerMultiple::GetEntityClassInternal, CTriggerImpact::GetEntityClassInternal, CTriggerDota::GetEntityClassInternal, CDOTA_HeroTrigger::GetEntityClassInternal
// strings: "CTriggerMultiple", "CBaseTrigger", "CBaseToggle"
// globals: `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo, CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo, `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CTriggerMultiple::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo != 0 )
    return &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo) == 0 )
    return &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo;
  if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
      "CBaseTrigger",
      "trigger",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo,
    "CTriggerMultiple",
    "trigger_multiple",
    0,
    &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  __cxa_guard_release(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo);
  return &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo;
}


// CTriggerSndSosOpvar::~CTriggerSndSosOpvar  (line 173, @0x00000000023f72b0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerSndSosOpvar::~CTriggerSndSosOpvar(CTriggerSndSosOpvar *const this)
{
  this->_vptr_IHandleEntity = &off_40BFF30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingPlayers);
  if ( (this->m_hTouchingPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingPlayers.m_Memory);
    if ( (this->m_hTouchingPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingPlayers.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerSndSosOpvar::~CTriggerSndSosOpvar  (line 173, @0x00000000023f7420, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerSndSosOpvar, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerSndSosOpvar::~CTriggerSndSosOpvar(CTriggerSndSosOpvar *const this)
{
  this->_vptr_IHandleEntity = &off_40BFF30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingPlayers);
  if ( (this->m_hTouchingPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingPlayers.m_Memory);
    if ( (this->m_hTouchingPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingPlayers.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 175, @0x0000000002018fc0, libserver.so)
// globals: CTriggerSndSosOpvar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this)
{
  return CTriggerSndSosOpvar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::DestructInstance  (line 175, @0x0000000002018fd0, libserver.so)  // inlines: Destruct<CTriggerSndSosOpvar>
void __fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::DestructInstance(
        CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::FreeInstance  (line 175, @0x0000000002018ff0, libserver.so)
void __fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::FreeInstance(
        CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::CanAllocate  (line 175, @0x0000000002019010, libserver.so)
bool __fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 175, @0x0000000002019020, libserver.so)
// globals: CTriggerSndSosOpvar::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this)
{
  return CTriggerSndSosOpvar::s_pSchemaBinding;
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::AllocateInstance  (line 175, @0x000000000201ab40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2344);
  memset(v1, 0, 0x928u);
  return v1;
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 175, @0x000000000201dab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 175, @0x000000000201dad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerSndSosOpvar::CEntityInstanceEntityClass::ConstructInstance  (line 175, @0x0000000002021940, libserver.so)  // inlines: CTriggerSndSosOpvar, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CTriggerSndSosOpvar>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerSndSosOpvar::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerSndSosOpvar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 370) = 0;
    *(p + 186) = 0;
    *(p + 374) = 0;
    *(p + 375) = 0;
    *(p + 191) = 0;
    *p = &off_40BFF30;
    *(p + 192) = 0;
    *(p + 193) = 0;
  }
  return p;
}


// CTriggerSndSosOpvar::GetEntityClassInternal  (line 175, @0x0000000002024110, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseTrigger>, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "trigger_snd_sos_opvar", "CTriggerSndSosOpvar"
// globals: `guard variable for'CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass, CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTriggerSndSosOpvar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo, CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo
CEntityClass *__cdecl CTriggerSndSosOpvar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass) != 0 )
  {
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_designerName.u.m_Id = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass._vptr_CEntityClass = off_3F79390;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_ComponentOffsets.m_Size = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_AllHelpers.m_Size = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classInputs.m_Size = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classOutputs.m_Size = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_requiredEHandle.m_Index = -1;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_hNetworkSerializer = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pBaseClassInfo = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pClassInfo = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_flags = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_nAllHelpersFlags = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pScriptClassDesc = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pInputs = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_nInputCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pOutputs = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_nOutputCount = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pGameClass = 0;
    CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass._vptr_CEntityClass = off_3FE2A70;
    __cxa_guard_release(&`guard variable for'CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass);
    __cxa_atexit(
      CTriggerSndSosOpvar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerSndSosOpvarClass != 0 )
    return &CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass;
  if ( `guard variable for'CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo,
      "CTriggerSndSosOpvar",
      "trigger_snd_sos_opvar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo);
  }
  CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pClassInfo = &CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo;
  CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pBaseClassInfo = CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerSndSosOpvarClass = &CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass;
  CTriggerSndSosOpvar::GetEntityClassInfo(void)::g_EntityCTriggerSndSosOpvarClassInfo.m_pClass = &CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass;
  CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass.m_pScriptClassDesc = GetScriptDesc<CBaseTrigger>(0);
  g_pEntityCTriggerSndSosOpvarClass->m_pComponentOverrides = 0;
  return &CTriggerSndSosOpvar::GetEntityClassInternal(void)::g_EntityCTriggerSndSosOpvarClass;
}


// CTriggerSndSosOpvar::GetEntityClass  (line 175, @0x00000000023e5340, libserver.so)
CEntityClass *__cdecl CTriggerSndSosOpvar::GetEntityClass()
{
  return g_pEntityCTriggerSndSosOpvarClass;
}


// CTriggerSndSosOpvar::Schema_DynamicBinding  (line 175, @0x00000000023e94e0, libserver.so)
// calls: CTriggerSndSosOpvar::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CTriggerSndSosOpvar::Schema_DynamicBinding(
        const CTriggerSndSosOpvar *const this)
{
  CTriggerSndSosOpvar::Schema_VerifyBindingIsRegistered();
  return CTriggerSndSosOpvar::s_pSchemaBinding;
}


// CTriggerHurt::~CTriggerHurt  (line 219, @0x00000000023f71f0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerHurt::~CTriggerHurt(CTriggerHurt *const this)
{
  this->_vptr_IHandleEntity = &off_40BF810;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hurtEntities);
  if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
    if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerHurt::~CTriggerHurt  (line 219, @0x00000000023f74e0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerHurt, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerHurt::~CTriggerHurt(CTriggerHurt *const this)
{
  this->_vptr_IHandleEntity = &off_40BF810;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hurtEntities);
  if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
    if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerHurt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 221, @0x0000000002019030, libserver.so)
// globals: CTriggerHurt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerHurt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerHurt::CEntityInstanceEntityClass *const this)
{
  return CTriggerHurt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerHurt::CEntityInstanceEntityClass::DestructInstance  (line 221, @0x0000000002019040, libserver.so)  // inlines: Destruct<CTriggerHurt>
void __fastcall CTriggerHurt::CEntityInstanceEntityClass::DestructInstance(
        CTriggerHurt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerHurt::CEntityInstanceEntityClass::FreeInstance  (line 221, @0x0000000002019060, libserver.so)
void __fastcall CTriggerHurt::CEntityInstanceEntityClass::FreeInstance(
        CTriggerHurt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerHurt::CEntityInstanceEntityClass::CanAllocate  (line 221, @0x0000000002019080, libserver.so)
bool __fastcall CTriggerHurt::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerHurt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerHurt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 221, @0x0000000002019090, libserver.so)
// globals: CTriggerHurt::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerHurt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerHurt::CEntityInstanceEntityClass *const this)
{
  return CTriggerHurt::s_pSchemaBinding;
}


// CTriggerHurt::CEntityInstanceEntityClass::AllocateInstance  (line 221, @0x000000000201ab80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerHurt::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerHurt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1600);
  memset(v1, 0, 0x640u);
  return v1;
}


// CTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 221, @0x000000000201db00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerHurt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 221, @0x000000000201db20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerHurt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerHurt::GetEntityClassInfo  (line 221, @0x000000000201fa50, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CTriggerHurtGhost::GetEntityClassInternal
// strings: "CTriggerHurt", "CBaseTrigger", "CBaseToggle"
// globals: `guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo, CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo, `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CTriggerHurt::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo != 0 )
    return &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo) == 0 )
    return &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo;
  if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
      "CBaseTrigger",
      "trigger",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo,
    "CTriggerHurt",
    "trigger_hurt",
    0,
    &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  __cxa_guard_release(&`guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo);
  return &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo;
}


// CTriggerHurt::CEntityInstanceEntityClass::ConstructInstance  (line 221, @0x00000000020219c0, libserver.so)  // inlines: CEntityIOOutput, CTriggerHurt, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CTriggerHurt>, Zero
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerHurt::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerHurt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 394) = 0;
    *(p + 198) = 0;
    *(p + 398) = 0;
    *(p + 399) = 0;
    *(p + 371) = 1101004800;
    *p = &off_40BF810;
    *(p + 191) = off_3F7C190;
    *(p + 194) = off_3F7C190;
    *(p + 379) = 0;
    *(p + 378) = 0;
    *(p + 377) = 0;
  }
  return p;
}


// CTriggerHurt::GetEntityClassInternal  (line 221, @0x0000000002024460, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseTrigger>, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "CTriggerHurt"
// globals: `guard variable for'CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass, CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo, CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo
CEntityClass *__cdecl CTriggerHurt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass) != 0 )
  {
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_designerName.u.m_Id = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass._vptr_CEntityClass = off_3F79390;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_ComponentOffsets.m_Size = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_AllHelpers.m_Size = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classInputs.m_Size = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classOutputs.m_Size = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_requiredEHandle.m_Index = -1;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_hNetworkSerializer = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pBaseClassInfo = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pClassInfo = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_flags = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_nAllHelpersFlags = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pScriptClassDesc = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pInputs = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_nInputCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pOutputs = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_nOutputCount = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pGameClass = 0;
    CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass._vptr_CEntityClass = off_3FE2AF0;
    __cxa_guard_release(&`guard variable for'CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass);
    __cxa_atexit(
      CTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerHurtClass != 0 )
    return &CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass;
  if ( `guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo,
      "CTriggerHurt",
      "trigger_hurt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo);
  }
  CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pClassInfo = &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo;
  CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pBaseClassInfo = CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerHurtClass = &CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass;
  CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo.m_pClass = &CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass;
  CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass.m_pScriptClassDesc = GetScriptDesc<CBaseTrigger>(0);
  g_pEntityCTriggerHurtClass->m_pComponentOverrides = 0;
  return &CTriggerHurt::GetEntityClassInternal(void)::g_EntityCTriggerHurtClass;
}


// CTriggerHurt::GetEntityClass  (line 221, @0x00000000023e5350, libserver.so)
CEntityClass *__cdecl CTriggerHurt::GetEntityClass()
{
  return g_pEntityCTriggerHurtClass;
}


// CTriggerHurt::Schema_DynamicBinding  (line 221, @0x00000000023e9500, libserver.so)
// calls: CTriggerHurt::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CTriggerHurt::Schema_DynamicBinding(const CTriggerHurt *const this)
{
  CTriggerHurt::Schema_VerifyBindingIsRegistered();
  return CTriggerHurt::s_pSchemaBinding;
}


// CTriggerHurtGhost::~CTriggerHurtGhost  (line 279, @0x000000000201ddd0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CTriggerHurt, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerHurtGhost::~CTriggerHurtGhost(CTriggerHurtGhost *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hurtEntities.m_Size = 0;
  v2 = (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BF810;
  if ( v2 )
  {
    p_m_Memory = &this->m_hurtEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
    if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerHurtGhost::~CTriggerHurtGhost  (line 279, @0x000000000201de90, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CTriggerHurt, ~CTriggerHurtGhost, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerHurtGhost::~CTriggerHurtGhost(CTriggerHurtGhost *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hurtEntities.m_Size = 0;
  v2 = (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BF810;
  if ( v2 )
  {
    p_m_Memory = &this->m_hurtEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
    if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerHurtGhost::Schema_DynamicBinding  (line 281, @0x00000000020190a0, libserver.so)
// globals: CTriggerHurtGhost::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerHurtGhost::Schema_DynamicBinding(const CTriggerHurtGhost *const this)
{
  return CTriggerHurtGhost::s_pSchemaBinding;
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 281, @0x00000000020190b0, libserver.so)
// globals: CTriggerHurtGhost::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerHurtGhost::CEntityInstanceEntityClass *const this)
{
  return CTriggerHurtGhost::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::DestructInstance  (line 281, @0x00000000020190c0, libserver.so)  // inlines: Destruct<CTriggerHurtGhost>
void __fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::DestructInstance(
        CTriggerHurtGhost::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::FreeInstance  (line 281, @0x00000000020190e0, libserver.so)
void __fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::FreeInstance(
        CTriggerHurtGhost::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::CanAllocate  (line 281, @0x0000000002019100, libserver.so)
bool __fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerHurtGhost::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 281, @0x0000000002019110, libserver.so)
// globals: CTriggerHurtGhost::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerHurtGhost::CEntityInstanceEntityClass *const this)
{
  return CTriggerHurtGhost::s_pSchemaBinding;
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::AllocateInstance  (line 281, @0x000000000201abc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerHurtGhost::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1600);
  memset(v1, 0, 0x640u);
  return v1;
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 281, @0x000000000201db50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerHurtGhost::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 281, @0x000000000201db70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerHurtGhost::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerHurtGhost::CEntityInstanceEntityClass::ConstructInstance  (line 281, @0x0000000002021a60, libserver.so)  // inlines: CEntityIOOutput, CTriggerHurt, CTriggerHurtGhost, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CTriggerHurtGhost>, Zero
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerHurtGhost::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerHurtGhost::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 394) = 0;
    *(p + 191) = off_3F7C190;
    *(p + 194) = off_3F7C190;
    *(p + 198) = 0;
    *(p + 398) = 0;
    *(p + 399) = 0;
    *(p + 371) = 1101004800;
    *(p + 379) = 0;
    *(p + 378) = 0;
    *(p + 377) = 0;
    *p = &off_3FE2BF0;
  }
  return p;
}


// CTriggerHurtGhost::GetEntityClassInternal  (line 281, @0x00000000020247b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseTrigger>, CTriggerHurt::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "trigger_hurt_ghost", "CTriggerHurtGhost"
// globals: `guard variable for'CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass, CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTriggerHurtGhost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo, CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo
CEntityClass *__cdecl CTriggerHurtGhost::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass) != 0 )
  {
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_designerName.u.m_Id = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass._vptr_CEntityClass = off_3F79390;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_ComponentOffsets.m_Size = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_AllHelpers.m_Size = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classInputs.m_Size = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classOutputs.m_Size = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_requiredEHandle.m_Index = -1;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_hNetworkSerializer = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pBaseClassInfo = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pClassInfo = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_flags = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_nAllHelpersFlags = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pScriptClassDesc = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pInputs = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_nInputCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pOutputs = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_nOutputCount = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pGameClass = 0;
    CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass._vptr_CEntityClass = off_3FE2B70;
    __cxa_guard_release(&`guard variable for'CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass);
    __cxa_atexit(
      CTriggerHurtGhost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerHurtGhostClass != 0 )
    return &CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass;
  if ( `guard variable for'CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerHurt::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo,
      "CTriggerHurtGhost",
      "trigger_hurt_ghost",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo);
  }
  CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pClassInfo = &CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo;
  CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pBaseClassInfo = CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerHurtGhostClass = &CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass;
  CTriggerHurtGhost::GetEntityClassInfo(void)::g_EntityCTriggerHurtGhostClassInfo.m_pClass = &CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass;
  CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass.m_pScriptClassDesc = GetScriptDesc<CBaseTrigger>(0);
  g_pEntityCTriggerHurtGhostClass->m_pComponentOverrides = 0;
  return &CTriggerHurtGhost::GetEntityClassInternal(void)::g_EntityCTriggerHurtGhostClass;
}


// CTriggerCallback::~CTriggerCallback  (line 291, @0x00000000023f65b0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerCallback::~CTriggerCallback(CTriggerCallback *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerCallback::~CTriggerCallback  (line 291, @0x00000000023f6800, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerCallback, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerCallback::~CTriggerCallback(CTriggerCallback *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerCallback::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 293, @0x0000000002019120, libserver.so)
// globals: CTriggerCallback::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerCallback::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerCallback::CEntityInstanceEntityClass *const this)
{
  return CTriggerCallback::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerCallback::CEntityInstanceEntityClass::DestructInstance  (line 293, @0x0000000002019130, libserver.so)  // inlines: Destruct<CTriggerCallback>
void __fastcall CTriggerCallback::CEntityInstanceEntityClass::DestructInstance(
        CTriggerCallback::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerCallback::CEntityInstanceEntityClass::FreeInstance  (line 293, @0x0000000002019150, libserver.so)
void __fastcall CTriggerCallback::CEntityInstanceEntityClass::FreeInstance(
        CTriggerCallback::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerCallback::CEntityInstanceEntityClass::CanAllocate  (line 293, @0x0000000002019170, libserver.so)
bool __fastcall CTriggerCallback::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerCallback::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerCallback::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 293, @0x0000000002019180, libserver.so)
// globals: CTriggerCallback::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerCallback::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerCallback::CEntityInstanceEntityClass *const this)
{
  return CTriggerCallback::s_pSchemaBinding;
}


// CTriggerCallback::CEntityInstanceEntityClass::AllocateInstance  (line 293, @0x000000000201ac00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerCallback::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerCallback::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1496);
  memset(v1, 0, 0x5D8u);
  return v1;
}


// CTriggerCallback::CEntityInstanceEntityClass::ConstructInstance  (line 293, @0x000000000201ae90, libserver.so)  // inlines: CTriggerCallback, Construct<CTriggerCallback>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerCallback::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerCallback::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40CAA30;
  }
  return p;
}


// CTriggerCallback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 293, @0x000000000201dba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerCallback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerCallback::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerCallback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 293, @0x000000000201dbc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerCallback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerCallback::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerCallback::GetEntityClassInternal  (line 293, @0x0000000002024b00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseTrigger>, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "trigger_callback", "CTriggerCallback"
// globals: `guard variable for'CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass, CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTriggerCallback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo, CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo
CEntityClass *__cdecl CTriggerCallback::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass) != 0 )
  {
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_designerName.u.m_Id = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass._vptr_CEntityClass = off_3F79390;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_ComponentOffsets.m_Size = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_AllHelpers.m_Size = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classInputs.m_Size = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classOutputs.m_Size = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_requiredEHandle.m_Index = -1;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_hNetworkSerializer = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pBaseClassInfo = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pClassInfo = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_flags = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_nAllHelpersFlags = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pScriptClassDesc = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pInputs = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_nInputCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pOutputs = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_nOutputCount = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pGameClass = 0;
    CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass._vptr_CEntityClass = off_3FE3310;
    __cxa_guard_release(&`guard variable for'CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass);
    __cxa_atexit(
      CTriggerCallback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerCallbackClass != 0 )
    return &CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass;
  if ( `guard variable for'CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo,
      "CTriggerCallback",
      "trigger_callback",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo);
  }
  CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pClassInfo = &CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo;
  CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pBaseClassInfo = CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerCallbackClass = &CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass;
  CTriggerCallback::GetEntityClassInfo(void)::g_EntityCTriggerCallbackClassInfo.m_pClass = &CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass;
  CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass.m_pScriptClassDesc = GetScriptDesc<CBaseTrigger>(0);
  g_pEntityCTriggerCallbackClass->m_pComponentOverrides = 0;
  return &CTriggerCallback::GetEntityClassInternal(void)::g_EntityCTriggerCallbackClass;
}


// CTriggerCallback::GetEntityClass  (line 293, @0x00000000023e5360, libserver.so)
CEntityClass *__cdecl CTriggerCallback::GetEntityClass()
{
  return g_pEntityCTriggerCallbackClass;
}


// CTriggerCallback::Schema_DynamicBinding  (line 293, @0x00000000023e9520, libserver.so)
// calls: CTriggerCallback::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CTriggerCallback::Schema_DynamicBinding(const CTriggerCallback *const this)
{
  CTriggerCallback::Schema_VerifyBindingIsRegistered();
  return CTriggerCallback::s_pSchemaBinding;
}


// CTriggerCamera::~CTriggerCamera  (line 334, @0x00000000023e9020, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTriggerCamera::~CTriggerCamera(CTriggerCamera *const this)
{
  this->_vptr_IHandleEntity = &off_40C7DF0;
  CBaseEntity::~CBaseEntity(this);
}


// CTriggerCamera::~CTriggerCamera  (line 334, @0x00000000023e9040, libserver.so)  // inlines: ~CTriggerCamera
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTriggerCamera::~CTriggerCamera(CTriggerCamera *const this)
{
  this->_vptr_IHandleEntity = &off_40C7DF0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerCamera::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 336, @0x0000000002019190, libserver.so)
// globals: CTriggerCamera::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerCamera::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerCamera::CEntityInstanceEntityClass *const this)
{
  return CTriggerCamera::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerCamera::CEntityInstanceEntityClass::DestructInstance  (line 336, @0x00000000020191a0, libserver.so)  // inlines: Destruct<CTriggerCamera>
void __fastcall CTriggerCamera::CEntityInstanceEntityClass::DestructInstance(
        CTriggerCamera::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerCamera::CEntityInstanceEntityClass::FreeInstance  (line 336, @0x00000000020191c0, libserver.so)
void __fastcall CTriggerCamera::CEntityInstanceEntityClass::FreeInstance(
        CTriggerCamera::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerCamera::CEntityInstanceEntityClass::CanAllocate  (line 336, @0x00000000020191e0, libserver.so)
bool __fastcall CTriggerCamera::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerCamera::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerCamera::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 336, @0x00000000020191f0, libserver.so)
// globals: CTriggerCamera::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerCamera::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerCamera::CEntityInstanceEntityClass *const this)
{
  return CTriggerCamera::s_pSchemaBinding;
}


// CTriggerCamera::CEntityInstanceEntityClass::AllocateInstance  (line 336, @0x000000000201ac40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerCamera::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerCamera::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 904);
  memset(v1, 0, 0x388u);
  return v1;
}


// CTriggerCamera::CEntityInstanceEntityClass::ConstructInstance  (line 336, @0x000000000201aed0, libserver.so)  // inlines: Construct<CTriggerCamera>
// calls: CTriggerCamera::CTriggerCamera
CEntityInstance *__fastcall CTriggerCamera::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerCamera::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CTriggerCamera::CTriggerCamera(p);
  return p;
}


// CTriggerCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 336, @0x000000000201dd80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerCamera::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 336, @0x000000000201dda0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerCamera::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerCamera::GetEntityClassInternal  (line 336, @0x0000000002023390, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "point_viewcontrol", "CTriggerCamera"
// globals: `guard variable for'CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass, CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTriggerCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo, CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo
CEntityClass *__cdecl CTriggerCamera::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass) != 0 )
  {
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_designerName.u.m_Id = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass._vptr_CEntityClass = off_3F79390;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_ComponentOffsets.m_Size = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_AllHelpers.m_Size = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classInputs.m_Size = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classOutputs.m_Size = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_requiredEHandle.m_Index = -1;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_hNetworkSerializer = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pBaseClassInfo = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pClassInfo = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_flags = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_nAllHelpersFlags = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pScriptClassDesc = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pInputs = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_nInputCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pOutputs = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_nOutputCount = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pGameClass = 0;
    CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass._vptr_CEntityClass = off_3FE3390;
    __cxa_guard_release(&`guard variable for'CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass);
    __cxa_atexit(
      CTriggerCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerCameraClass != 0 )
    return &CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass;
  if ( `guard variable for'CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo,
      "CTriggerCamera",
      "point_viewcontrol",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo);
  }
  CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pClassInfo = &CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo;
  CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pBaseClassInfo = CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerCameraClass = &CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass;
  CTriggerCamera::GetEntityClassInfo(void)::g_EntityCTriggerCameraClassInfo.m_pClass = &CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass;
  CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTriggerCameraClass->m_pComponentOverrides = 0;
  return &CTriggerCamera::GetEntityClassInternal(void)::g_EntityCTriggerCameraClass;
}


// CTriggerCamera::GetEntityClass  (line 336, @0x00000000023e5370, libserver.so)
CEntityClass *__cdecl CTriggerCamera::GetEntityClass()
{
  return g_pEntityCTriggerCameraClass;
}


// CTriggerCamera::Schema_DynamicBinding  (line 336, @0x00000000023e9540, libserver.so)
// calls: CTriggerCamera::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CTriggerCamera::Schema_DynamicBinding(const CTriggerCamera *const this)
{
  CTriggerCamera::Schema_VerifyBindingIsRegistered();
  return CTriggerCamera::s_pSchemaBinding;
}


