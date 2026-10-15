
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoPlayerStartDota::~CInfoPlayerStartDota  (line 35, @0x000000000296b030, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoPlayerStartDota::~CInfoPlayerStartDota(CInfoPlayerStartDota *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoPlayerStartDota::~CInfoPlayerStartDota  (line 35, @0x000000000296b050, libserver.so)  // inlines: ~CInfoPlayerStartDota, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoPlayerStartDota::~CInfoPlayerStartDota(CInfoPlayerStartDota *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoPlayerStartDota::GetEntityClass  (line 37, @0x0000000002967030, libserver.so)
CEntityClass *__cdecl CInfoPlayerStartDota::GetEntityClass()
{
  return g_pEntityCInfoPlayerStartDotaClass;
}


// CInfoPlayerStartDota::Schema_DynamicBinding  (line 37, @0x0000000002967040, libserver.so)
// globals: CInfoPlayerStartDota::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoPlayerStartDota::Schema_DynamicBinding(
        const CInfoPlayerStartDota *const this)
{
  return CInfoPlayerStartDota::s_pSchemaBinding;
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002967050, libserver.so)
// globals: CInfoPlayerStartDota::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoPlayerStartDota::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStartDota::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002967060, libserver.so)  // inlines: Destruct<CInfoPlayerStartDota>
void __fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::DestructInstance(
        CInfoPlayerStartDota::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002967080, libserver.so)
void __fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::FreeInstance(
        CInfoPlayerStartDota::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x00000000029670a0, libserver.so)
bool __fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::CanAllocate(
        const CInfoPlayerStartDota::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x00000000029670b0, libserver.so)
// globals: CInfoPlayerStartDota::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoPlayerStartDota::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStartDota::s_pSchemaBinding;
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x000000000296ab90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::AllocateInstance(
        CInfoPlayerStartDota::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x000000000296f830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStartDota::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x000000000296f850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStartDota::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoPlayerStartDota::GetEntityClassInfo  (line 37, @0x0000000002976580, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CInfoPlayerStartBadGuys::GetEntityClassInternal, CInfoPlayerStartGoodGuys::GetEntityClassInternal
// strings: "info_player_start_dota", "CInfoPlayerStartDota", "CPointEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo, CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CInfoPlayerStartDota::GetEntityClassInfo()
{
  if ( `guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo != 0 )
    return &CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo) == 0 )
    return &CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo;
  if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
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
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
      "CPointEntity",
      0,
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo,
    "CInfoPlayerStartDota",
    "info_player_start_dota",
    0,
    &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo);
  return &CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo;
}


// CInfoPlayerStartDota::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002976b10, libserver.so)  // inlines: Construct<CInfoPlayerStartDota>
// calls: CInfoPlayerStartDota::CInfoPlayerStartDota
CEntityInstance *__fastcall CInfoPlayerStartDota::CEntityInstanceEntityClass::ConstructInstance(
        CInfoPlayerStartDota::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CInfoPlayerStartDota::CInfoPlayerStartDota(p);
  return p;
}


// CInfoPlayerStartDota::GetEntityClassInternal  (line 37, @0x000000000297ec60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "info_player_start_dota", "CInfoPlayerStartDota"
// globals: `guard variable for'CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass, CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoPlayerStartDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo, CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo
CEntityClass *__cdecl CInfoPlayerStartDota::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass) != 0 )
  {
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_designerName.u.m_Id = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass._vptr_CEntityClass = off_3F79390;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_ComponentOffsets.m_Size = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_AllHelpers.m_Size = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classInputs.m_Size = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classOutputs.m_Size = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_requiredEHandle.m_Index = -1;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_hNetworkSerializer = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pBaseClassInfo = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pClassInfo = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_flags = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_nAllHelpersFlags = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pScriptClassDesc = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pInputs = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_nInputCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pOutputs = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_nOutputCount = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pGameClass = 0;
    CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass._vptr_CEntityClass = off_42D7B10;
    __cxa_guard_release(&`guard variable for'CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass);
    __cxa_atexit(
      CInfoPlayerStartDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoPlayerStartDotaClass != 0 )
    return &CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass;
  if ( `guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo,
      "CInfoPlayerStartDota",
      "info_player_start_dota",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo);
  }
  CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pClassInfo = &CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo;
  CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pBaseClassInfo = CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoPlayerStartDotaClass = &CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass;
  CInfoPlayerStartDota::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartDotaClassInfo.m_pClass = &CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass;
  CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoPlayerStartDotaClass->m_pComponentOverrides = 0;
  return &CInfoPlayerStartDota::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartDotaClass;
}


// CDOTAMusicProbabilityEntry::Schema_DynamicBinding  (line 68, @0x00000000029670c0, libserver.so)
// globals: CDOTAMusicProbabilityEntry::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAMusicProbabilityEntry::Schema_DynamicBinding(
        const CDOTAMusicProbabilityEntry *const this)
{
  return CDOTAMusicProbabilityEntry::s_pSchemaBinding;
}


// CDOTAMusicProbabilityGank::~CDOTAMusicProbabilityGank  (line 95, @0x00000000029766d0, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Purge, RemoveAll, Set, operator=<float>, ~CDOTAMusicProbabilityEntry, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<float, int>::Purge
// callers: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
void __fastcall CDOTAMusicProbabilityGank::~CDOTAMusicProbabilityGank(CDOTAMusicProbabilityGank *const this)
{
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12
  bool v3; // zf

  p_m_Memory = &this->m_flProbabilityElements.m_Memory;
  v3 = (this->m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTAMusicProbabilityEntry = &off_42F8950;
  this->m_flProbabilityElements.m_Size = 0;
  if ( v3 )
    CUtlMemory<float,int>::Purge(&this->m_flProbabilityElements.m_Memory);
  if ( this->m_GankTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_GankTimer._vptr_CountdownTimer + 2))(&this->m_GankTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_GankTimer.m_timestamp.m_Value = -1.0;
  }
  v3 = (this->m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_flProbabilityElements.m_Size = 0;
  this->_vptr_CDOTAMusicProbabilityEntry = &off_42D7B90;
  if ( v3 )
  {
    CUtlMemory<float,int>::Purge(p_m_Memory);
    if ( (this->m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(p_m_Memory);
  }
}


// CDOTA_BaseNPC_Hero::GetEntityClass  (line 150, @0x00000000029670d0, libserver.so)
CEntityClass *__cdecl CDOTA_BaseNPC_Hero::GetEntityClass()
{
  return g_pEntityCDOTA_BaseNPC_HeroClass;
}


// CDOTA_BaseNPC_Hero::Schema_DynamicBinding  (line 150, @0x00000000029670e0, libserver.so)
// globals: CDOTA_BaseNPC_Hero::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Hero::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_BaseNPC_Hero::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 150, @0x0000000002967110, libserver.so)
// globals: CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::DestructInstance  (line 150, @0x0000000002967120, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Hero>
void __fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::FreeInstance  (line 150, @0x0000000002967140, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::CanAllocate  (line 150, @0x0000000002967160, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 150, @0x0000000002967170, libserver.so)
// globals: CDOTA_BaseNPC_Hero::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Hero::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::AllocateInstance  (line 150, @0x000000000296abd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 150, @0x000000000296faa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 150, @0x000000000296fbb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::ConstructInstance  (line 150, @0x00000000029840b0, libserver.so)  // inlines: Construct<CDOTA_BaseNPC_Hero>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
  return p;
}


// CDOTA_BaseNPC_Hero::GetEntityClassInternal  (line 150, @0x000000000298b2d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Hero>, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_hero", "CDOTA_BaseNPC_Hero"
// globals: `guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass, CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo, CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Hero::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass) != 0 )
  {
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_flags = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pInputs = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass._vptr_CEntityClass = off_42D7BD0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_HeroClass != 0 )
    return &CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass;
  if ( `guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo,
      "CDOTA_BaseNPC_Hero",
      "npc_dota_hero",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo);
  }
  CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pClassInfo = &CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo;
  CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pBaseClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_HeroClass = &CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass;
  CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo.m_pClass = &CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass;
  CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Hero>(0);
  g_pEntityCDOTA_BaseNPC_HeroClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Hero::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HeroClass;
}


// CDOTA_BaseNPC_Hero::GetEntityClassInfo  (line 150, @0x0000000002a2a930, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDOTA_BaseNPC::GetEntityClassInfo
// callers: CDOTA_Unit_Hero_Razor::GetEntityClassInternal, CDOTA_Unit_Hero_SandKing::GetEntityClassInternal, CDOTA_Unit_Hero_Axe::GetEntityClassInternal, CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal, CDOTA_Unit_Hero_Lich::GetEntityClassInternal, CDOTA_Unit_Hero_AntiMage::GetEntityClassInternal, CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal, CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal, CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal, CDOTA_Unit_Hero_Mirana::GetEntityClassInternal, CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal, CDOTA_Unit_Hero_Puck::GetEntityClassInternal (114 total)
// strings: "npc_dota_hero", "CDOTA_BaseNPC_Hero", "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo, CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo, `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_Hero::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo != 0 )
    return &CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo) == 0 )
    return &CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo,
      "CDOTA_BaseNPC_Additive",
      "npc_dota_base_additive",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo,
    "CDOTA_BaseNPC_Hero",
    "npc_dota_hero",
    0,
    &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo);
  return &CDOTA_BaseNPC_Hero::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HeroClassInfo;
}


// CDOTA_BaseNPC_Hero::ShouldDoFlyHeightVisual  (line 164, @0x0000000002967180, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::ShouldDoFlyHeightVisual(CDOTA_BaseNPC_Hero *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Hero::HasFlyingVision  (line 165, @0x0000000002967190, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::HasFlyingVision(CDOTA_BaseNPC_Hero *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Hero::OnIllusionPostSpawn  (line 167, @0x00000000029671a0, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::OnIllusionPostSpawn(CDOTA_BaseNPC_Hero *const this, CDOTA_BaseNPC *pOriginal)
{
  ;
}


// CDOTA_BaseNPC_Hero::Script_GetTogglableWearable  (line 180, @0x000000000296deb0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, GetTogglableWearable, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_BaseNPC_Hero::Script_GetTogglableWearable(CDOTA_BaseNPC_Hero *const this, int nSlotType)
{
  CEconWearable *v2; // rbx
  HSCRIPT result; // rax

  v2 = this->m_pTogglableWearable[nSlotType];
  if ( v2 == 0 )
    return 0;
  result = v2->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(this->m_pTogglableWearable[nSlotType], 0);
    return v2->m_pEntity->m_hPublicScope.m_hScope;
  }
  return result;
}


// CDOTA_BaseNPC_Hero::GetPlayerID  (line 182, @0x00000000029671b0, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetPlayerID(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_iPlayerID.m_Value;
}


// CDOTA_BaseNPC_Hero::SetPlayerID  (line 185, @0x000000000296dce0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTA_BaseNPC_Hero::SetPlayerID(CDOTA_BaseNPC_Hero *const this, int iPlayerID)
{
  if ( this->m_iPlayerID.m_Value != iPlayerID )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPlayerID.m_Value = iPlayerID;
  }
}


// CDOTA_BaseNPC_Hero::GetAbilityPoints  (line 196, @0x00000000029671c0, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetAbilityPoints(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_iAbilityPoints.m_Value;
}


// CDOTA_BaseNPC_Hero::SetAbilityPoints  (line 197, @0x000000000296dd20, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTA_BaseNPC_Hero::SetAbilityPoints(CDOTA_BaseNPC_Hero *const this, int iPoints)
{
  if ( this->m_iAbilityPoints.m_Value != iPoints )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iAbilityPoints.m_Value = iPoints;
  }
}


// CDOTA_BaseNPC_Hero::Script_SetCustomDeathXP  (line 200, @0x00000000029671d0, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::Script_SetCustomDeathXP(CDOTA_BaseNPC_Hero *const this, int iValue)
{
  this->m_iXPBounty = iValue;
}


// CDOTA_BaseNPC_Hero::GetStatsBasedManaRegen  (line 214, @0x00000000029671e0, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetStatsBasedManaRegen(CDOTA_BaseNPC_Hero *const this)
{
  return (*(this->_vptr_IHandleEntity + 498))(this) * 0.039999999;
}


// CDOTA_BaseNPC_Hero::GetBuybackCooldownTime  (line 225, @0x0000000002967200, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetBuybackCooldownTime(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_fBuybackCooldown;
}


// CDOTA_BaseNPC_Hero::GetBuybackGoldLimitTime  (line 227, @0x0000000002967210, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetBuybackGoldLimitTime(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_fBuybackGoldLimit;
}


// CDOTA_BaseNPC_Hero::SetBuyBackDisabledByReapersScythe  (line 233, @0x0000000002967220, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::SetBuyBackDisabledByReapersScythe(
        CDOTA_BaseNPC_Hero *const this,
        bool bBuybackDisabled)
{
  this->m_bBuybackDisabled = bBuybackDisabled;
}


// CDOTA_BaseNPC_Hero::IsBuybackDisabledByReapersScythe  (line 234, @0x0000000002967230, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::IsBuybackDisabledByReapersScythe(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_bBuybackDisabled;
}


// CDOTA_BaseNPC_Hero::GetBaseStrength  (line 240, @0x0000000002967240, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetBaseStrength(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_flStrength.m_Value;
}


// CDOTA_BaseNPC_Hero::GetBaseAgility  (line 241, @0x0000000002967250, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetBaseAgility(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_flAgility.m_Value;
}


// CDOTA_BaseNPC_Hero::GetBaseIntellect  (line 242, @0x0000000002967260, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetBaseIntellect(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_flIntellect.m_Value;
}


// CDOTA_BaseNPC_Hero::SetBaseStrength  (line 244, @0x000000000296dbc0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTA_BaseNPC_Hero::SetBaseStrength(CDOTA_BaseNPC_Hero *const this, double a2, float flStrength)
{
  float flStrengtha; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flStrength.m_Value )
  {
    flStrengtha = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flStrength);
    this->m_flStrength.m_Value = flStrengtha;
  }
}


// CDOTA_BaseNPC_Hero::SetBaseAgility  (line 245, @0x000000000296dc80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTA_BaseNPC_Hero::SetBaseAgility(CDOTA_BaseNPC_Hero *const this, double a2, float flAgility)
{
  float flAgilitya; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flAgility.m_Value )
  {
    flAgilitya = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flAgility);
    this->m_flAgility.m_Value = flAgilitya;
  }
}


// CDOTA_BaseNPC_Hero::SetBaseIntellect  (line 246, @0x000000000296dc20, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTA_BaseNPC_Hero::SetBaseIntellect(CDOTA_BaseNPC_Hero *const this, double a2, float flIntellect)
{
  float flIntellecta; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flIntellect.m_Value )
  {
    flIntellecta = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flIntellect);
    this->m_flIntellect.m_Value = flIntellecta;
  }
}


// CDOTA_BaseNPC_Hero::GetStrengthGain  (line 248, @0x0000000002967270, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetStrengthGain(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_flStrengthGain;
}


// CDOTA_BaseNPC_Hero::GetAgilityGain  (line 249, @0x0000000002967280, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetAgilityGain(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_flAgilityGain;
}


// CDOTA_BaseNPC_Hero::GetIntellectGain  (line 250, @0x0000000002967290, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetIntellectGain(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_flIntellectGain;
}


// CDOTA_BaseNPC_Hero::IncrementKills  (line 265, @0x000000000296b9a0, libserver.so)
// calls: CDOTA_PlayerResource::IncrementKills
void __fastcall CDOTA_BaseNPC_Hero::IncrementKills(CDOTA_BaseNPC_Hero *const this, int iVictimID)
{
  CDOTA_PlayerResource::IncrementKills(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, iVictimID);
}


// CDOTA_BaseNPC_Hero::IncrementDeaths  (line 266, @0x000000000296b8e0, libserver.so)
// calls: CDOTA_PlayerResource::IncrementDeaths
void __fastcall CDOTA_BaseNPC_Hero::IncrementDeaths(CDOTA_BaseNPC_Hero *const this, int iKillerID)
{
  CDOTA_PlayerResource::IncrementDeaths(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, iKillerID);
}


// CDOTA_BaseNPC_Hero::IncrementAssists  (line 267, @0x000000000296b730, libserver.so)
// calls: CDOTA_PlayerResource::IncrementAssists
void __fastcall CDOTA_BaseNPC_Hero::IncrementAssists(CDOTA_BaseNPC_Hero *const this, int iKillerID)
{
  CDOTA_PlayerResource::IncrementAssists(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, iKillerID);
}


// CDOTA_BaseNPC_Hero::IncrementLastHits  (line 268, @0x000000000296b920, libserver.so)
// calls: CDOTA_PlayerResource::IncrementLastHits
void __fastcall CDOTA_BaseNPC_Hero::IncrementLastHits(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::IncrementLastHits(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::IncrementDenies  (line 269, @0x000000000296b670, libserver.so)
// calls: CDOTA_PlayerResource::IncrementDenies
void __fastcall CDOTA_BaseNPC_Hero::IncrementDenies(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::IncrementDenies(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::IncrementNearbyCreepDeaths  (line 270, @0x000000000296b770, libserver.so)
// calls: CDOTA_PlayerResource::IncrementNearbyCreepDeaths
void __fastcall CDOTA_BaseNPC_Hero::IncrementNearbyCreepDeaths(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::IncrementNearbyCreepDeaths(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::IncrementLastHitStreak  (line 274, @0x000000000296b940, libserver.so)
// calls: CDOTA_PlayerResource::IncrementLastHitStreak
void __fastcall CDOTA_BaseNPC_Hero::IncrementLastHitStreak(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::IncrementLastHitStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::ClearLastHitStreak  (line 275, @0x000000000296b750, libserver.so)
// calls: CDOTA_PlayerResource::ClearLastHitStreak
void __fastcall CDOTA_BaseNPC_Hero::ClearLastHitStreak(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::ClearLastHitStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::IncrementLastHitMultikill  (line 276, @0x000000000296b960, libserver.so)
// calls: CDOTA_PlayerResource::IncrementLastHitMultikill
void __fastcall CDOTA_BaseNPC_Hero::IncrementLastHitMultikill(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::IncrementLastHitMultikill(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::ClearLastHitMultikill  (line 277, @0x000000000296b890, libserver.so)
// calls: CDOTA_PlayerResource::ClearLastHitMultikill
void __fastcall CDOTA_BaseNPC_Hero::ClearLastHitMultikill(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::ClearLastHitMultikill(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetKills  (line 279, @0x000000000296b710, libserver.so)
// calls: CDOTA_PlayerResource::GetKills
int __fastcall CDOTA_BaseNPC_Hero::GetKills(const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetDeaths  (line 280, @0x000000000296b6f0, libserver.so)
// calls: CDOTA_PlayerResource::GetDeaths
int __fastcall CDOTA_BaseNPC_Hero::GetDeaths(const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetAssists  (line 281, @0x000000000296b6d0, libserver.so)
// calls: CDOTA_PlayerResource::GetAssists
int __fastcall CDOTA_BaseNPC_Hero::GetAssists(const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetLastHits  (line 282, @0x000000000296b6b0, libserver.so)
// calls: CDOTA_PlayerResource::GetLastHits
int __fastcall CDOTA_BaseNPC_Hero::GetLastHits(const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetDenies  (line 283, @0x000000000296b690, libserver.so)
// calls: CDOTA_PlayerResource::GetDenies
int __fastcall CDOTA_BaseNPC_Hero::GetDenies(const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::IncrementStreak  (line 286, @0x000000000296b980, libserver.so)
// calls: CDOTA_PlayerResource::IncrementStreak
void __fastcall CDOTA_BaseNPC_Hero::IncrementStreak(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::IncrementStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::ClearStreak  (line 287, @0x000000000296b900, libserver.so)
// calls: CDOTA_PlayerResource::ClearStreak
void __fastcall CDOTA_BaseNPC_Hero::ClearStreak(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_PlayerResource::ClearStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetStreak  (line 288, @0x000000000296b630, libserver.so)
// calls: CDOTA_PlayerResource::GetStreak
int __fastcall CDOTA_BaseNPC_Hero::GetStreak(const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetMultipleKillCount  (line 290, @0x00000000029672a0, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetMultipleKillCount(const CDOTA_BaseNPC_Hero *const this)
{
  return this->m_iMultipleKillCount;
}


// CDOTA_BaseNPC_Hero::ModifyGold  (line 297, @0x000000000296b600, libserver.so)
// calls: CDOTA_PlayerResource::ModifyGold
int __fastcall CDOTA_BaseNPC_Hero::ModifyGold(
        CDOTA_BaseNPC_Hero *const this,
        int iGoldChange,
        bool bReliable,
        int iReason)
{
  return CDOTA_PlayerResource::ModifyGold(
           g_pDOTAPlayerResource,
           this->m_iPlayerID.m_Value,
           iGoldChange,
           bReliable,
           iReason);
}


// CDOTA_BaseNPC_Hero::SetGold  (line 298, @0x000000000296b8b0, libserver.so)
// calls: CDOTA_PlayerResource::SetGold
void __fastcall CDOTA_BaseNPC_Hero::SetGold(CDOTA_BaseNPC_Hero *const this, int iGold, bool bReliable)
{
  CDOTA_PlayerResource::SetGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, iGold, bReliable);
}


// CDOTA_BaseNPC_Hero::SpendGold  (line 300, @0x000000000296b120, libserver.so)
// calls: CDOTA_PlayerResource::SpendGold
void __fastcall CDOTA_BaseNPC_Hero::SpendGold(CDOTA_BaseNPC_Hero *const this, int iCost, int iReason)
{
  CDOTA_PlayerResource::SpendGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, iCost, iReason);
}


// CDOTA_BaseNPC_Hero::GetGold  (line 301, @0x000000000296b140, libserver.so)
// calls: CDOTA_PlayerResource::GetGold
int __fastcall CDOTA_BaseNPC_Hero::GetGold(const CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::GetMostRecentDamageTime  (line 328, @0x00000000029672b0, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetMostRecentDamageTime(const CDOTA_BaseNPC_Hero *const this)
{
  return this->m_fMostRecentDamageTime;
}


// CDOTA_BaseNPC_Hero::GetTimeUntilRespawn  (line 330, @0x00000000029672c0, libserver.so)
float __fastcall CDOTA_BaseNPC_Hero::GetTimeUntilRespawn(const CDOTA_BaseNPC_Hero *const this)
{
  return this->m_flTimeUntilRespawn;
}


// CDOTA_BaseNPC_Hero::GetRespawnsDisabled  (line 334, @0x00000000029672d0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::GetRespawnsDisabled(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_bScriptDisableRespawns;
}


// CDOTA_BaseNPC_Hero::SetRespawnsDisabled  (line 335, @0x00000000029672e0, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::SetRespawnsDisabled(CDOTA_BaseNPC_Hero *const this, bool bDisableRespawns)
{
  this->m_bScriptDisableRespawns = bDisableRespawns;
}


// CDOTA_BaseNPC_Hero::GetPrimaryAttribute  (line 372, @0x00000000029672f0, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetPrimaryAttribute(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_iPrimaryAttribute.m_Value;
}


// CDOTA_BaseNPC_Hero::GetSpawnEffectName  (line 379, @0x0000000002967300, libserver.so)
// strings: "particles/generic_hero_status/respawn.vpcf"
const char *__fastcall CDOTA_BaseNPC_Hero::GetSpawnEffectName(CDOTA_BaseNPC_Hero *const this)
{
  return "particles/generic_hero_status/respawn.vpcf";
}


// CDOTA_BaseNPC_Hero::GetDeathEffectName  (line 380, @0x0000000002967310, libserver.so)
// strings: "particles/generic_hero_status/hero_bloodpool.vpcf"
const char *__fastcall CDOTA_BaseNPC_Hero::GetDeathEffectName(CDOTA_BaseNPC_Hero *const this)
{
  return "particles/generic_hero_status/hero_bloodpool.vpcf";
}


// CDOTA_BaseNPC_Hero::GetCurrentXP  (line 382, @0x0000000002967320, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetCurrentXP(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_iCurrentXP.m_Value;
}


// CDOTA_BaseNPC_Hero::IsReincarnating  (line 396, @0x0000000002967330, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::IsReincarnating(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_bReincarnating.m_Value;
}


// CDOTA_BaseNPC_Hero::UnitCanRespawn  (line 409, @0x0000000002967340, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::UnitCanRespawn(CDOTA_BaseNPC_Hero *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Hero::ReplicateModelFromOtherHero  (line 416, @0x0000000002cad690, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=<CDOTA_BaseNPC_Hero>, operator=, operator=<CDOTA_BaseNPC_Hero*>
// calls: CBaseEntity::GetModel, CBaseModelEntity::SetModel
// callers: CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldier
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Hero::ReplicateModelFromOtherHero(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC_Hero *pOtherHero)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  unsigned int v6; // esi
  uint32 m_pBinding; // r13d
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // rdx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  HModel hModel; // [rsp+0h] [rbp-30h] BYREF

  LODWORD(hModel.m_pBinding) = -1;
  if ( pOtherHero != 0 && (m_pEntity = pOtherHero->m_pEntity) != 0 )
  {
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(hModel.m_pBinding) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    v6 = LODWORD(hModel.m_pBinding) + 2;
    m_pBinding = hModel.m_pBinding;
  }
  else
  {
    v6 = 1;
    m_pBinding = -1;
  }
  m_Index = this->m_hReplicatingOtherHeroModel.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hReplicatingOtherHeroModel.m_Value.m_Index) >> 9)
                                                         & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hReplicatingOtherHeroModel.m_Value.m_Index & 0x1FF];
      if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  v12 = 0;
  if ( v6 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hModel.m_pBinding) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[hModel.m_pBinding & 0x1FF];
      if ( v14 != 0 && m_pBinding == v14->m_EHandle.m_Index )
        v12 = v14->m_pInstance;
    }
  }
  if ( m_pInstance != v12 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hReplicatingOtherHeroModel.m_Value.m_Index = m_pBinding;
  }
  CBaseEntity::GetModel(&hModel, pOtherHero);
  CBaseModelEntity::SetModel(this, &hModel);
}


// CDOTA_BaseNPC_Hero::SetRespawnPosition  (line 452, @0x0000000002967350, libserver.so)  // inlines: operator=
void __fastcall CDOTA_BaseNPC_Hero::SetRespawnPosition(CDOTA_BaseNPC_Hero *const this, double a2, vec_t a3)
{
  this->m_vRespawnPosition.z = a3;
  *&this->m_vRespawnPosition.x = a2;
}


// CDOTA_BaseNPC_Hero::IsInventoryEnabled  (line 456, @0x0000000002967380, libserver.so)
bool __fastcall CDOTA_BaseNPC_Hero::IsInventoryEnabled(CDOTA_BaseNPC_Hero *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Hero::RecordCompendiumAbilityDamage  (line 459, @0x0000000002967390, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::RecordCompendiumAbilityDamage(
        CDOTA_BaseNPC_Hero *const this,
        int iIndex,
        int iDamage)
{
  ;
}


// CDOTA_BaseNPC_Hero::RecordCompendiumFarmEfficiency  (line 460, @0x00000000029673a0, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::RecordCompendiumFarmEfficiency(
        CDOTA_BaseNPC_Hero *const this,
        int nFarmRank,
        double a3,
        float flFarmShare,
        float flFarmEfficiency)
{
  ;
}


// CDOTA_BaseNPC_Hero::GenerateCompendiumStats  (line 461, @0x00000000029673b0, libserver.so)
void __fastcall CDOTA_BaseNPC_Hero::GenerateCompendiumStats(CDOTA_BaseNPC_Hero *const this)
{
  ;
}


// ToDOTABaseNPCRealHero  (line 817, @0x0000000002976780, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTABaseNPCHero
// callers: CDOTAHeroList::GiveExperience, CDOTA_Modifier_Juggernaut_BladeDance::GetModifierPreAttack_CriticalStrike, CDOTA_Ability_Pudge_MeatHook::OnProjectileHit_ExtraData, CDOTA_Ability_Lich_ChainFrost::OnProjectileHit_ExtraData, CDOTA_Modifier_PhantomAssassin_CoupdeGrace::GetModifierPreAttack_CriticalStrike, CDOTA_Ability_Beastmaster_PrimalRoar::OnSpellStart, CDOTA_Ability_DeathProphet_Silence::OnSpellStart, CDOTA_Modifier_DeathProphet_Exorcism::OnIntervalThink, CDOTA_Ability_Omniknight_Purification::OnSpellStart, CDOTA_Modifier_Luna_Eclipse::DoLucentBeamStrike, CDOTA_Modifier_Centaur_Return::OnAttackLanded, CDOTA_Modifier_Legion_Commander_Duel::OnDeath (14 total)
CDOTA_BaseNPC_Hero *__fastcall ToDOTABaseNPCRealHero(CBaseEntity *pEntity)
{
  CDOTA_BaseNPC_Hero *result; // rax

  result = 0;
  if ( pEntity != 0
    && pEntity->m_bIsDOTANPC
    && (pEntity[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
    && LOBYTE(pEntity[4].m_pfnMoveDone.__delta) == 0 )
  {
    return pEntity;
  }
  return result;
}


// HeroLimitedUnitTracker_t::LessFunc  (line 880, @0x0000000002970990, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator<, operator==<CBaseEntity>
// globals: CEntityHandle::gm_pEntityList
bool __fastcall HeroLimitedUnitTracker_t::LessFunc(
        const HeroLimitedUnitTracker_t *const lhs,
        const HeroLimitedUnitTracker_t *const rhs)
{
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // r10
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  uint32 v6; // eax
  CEntityInstance *v7; // r9
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  bool result; // al

  m_Index = lhs->hHero.m_Index;
  m_pInstance = 0;
  if ( lhs->hHero.m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(lhs->hHero.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[lhs->hHero.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  v6 = rhs->hHero.m_Index;
  v7 = 0;
  if ( rhs->hHero.m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(rhs->hHero.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[rhs->hHero.m_Index & 0x1FF];
      if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
        v7 = v9->m_pInstance;
    }
  }
  result = m_Index < v6;
  if ( m_pInstance == v7 )
    return lhs->eType < rhs->eType;
  return result;
}


// CDOTAHeroList::~CDOTAHeroList  (line 893, @0x000000000297dc30, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >::RemoveAll, CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >::RemoveAll, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int>::Purge, CUtlMemory<CDOTAMusicSystemElement, int>::Purge
void __fastcall CDOTAHeroList::~CDOTAHeroList(CDOTAHeroList *const this)
{
  this->_vptr_IGameSystem = off_42F7430;
  CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapHeroToLimitedUnits.m_Tree);
  if ( (this->m_mapHeroToLimitedUnits.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapHeroToLimitedUnits.m_Tree.m_Elements);
  CUtlVectorBase<CDOTAMusicSystemElement,CUtlMemory<CDOTAMusicSystemElement,int>>::RemoveAll(&this->m_MusicElements);
  if ( (this->m_MusicElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTAMusicSystemElement,int>::Purge(&this->m_MusicElements.m_Memory);
    if ( (this->m_MusicElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAMusicSystemElement,int>::Purge(&this->m_MusicElements.m_Memory);
  }
  CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>,CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>>::RemoveAll(&this->m_hHeroList);
  if ( (this->m_hHeroList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>::Purge(&this->m_hHeroList.m_Memory);
    if ( (this->m_hHeroList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>::Purge(&this->m_hHeroList.m_Memory);
  }
  CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_HeroPositionHistory.m_Tree);
  if ( (this->m_HeroPositionHistory.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_HeroPositionHistory.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTAHeroList::~CDOTAHeroList  (line 893, @0x000000000297dd10, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CDOTAHeroList, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >::RemoveAll, CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >::RemoveAll, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int>::Purge, CUtlMemory<CDOTAMusicSystemElement, int>::Purge
void __fastcall CDOTAHeroList::~CDOTAHeroList(CDOTAHeroList *const this)
{
  this->_vptr_IGameSystem = off_42F7430;
  CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapHeroToLimitedUnits.m_Tree);
  if ( (this->m_mapHeroToLimitedUnits.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapHeroToLimitedUnits.m_Tree.m_Elements);
  CUtlVectorBase<CDOTAMusicSystemElement,CUtlMemory<CDOTAMusicSystemElement,int>>::RemoveAll(&this->m_MusicElements);
  if ( (this->m_MusicElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTAMusicSystemElement,int>::Purge(&this->m_MusicElements.m_Memory);
    if ( (this->m_MusicElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAMusicSystemElement,int>::Purge(&this->m_MusicElements.m_Memory);
  }
  CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>,CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>>::RemoveAll(&this->m_hHeroList);
  if ( (this->m_hHeroList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>::Purge(&this->m_hHeroList.m_Memory);
    if ( (this->m_hHeroList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>::Purge(&this->m_hHeroList.m_Memory);
  }
  CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_HeroPositionHistory.m_Tree);
  if ( (this->m_HeroPositionHistory.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_HeroPositionHistory.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTAHeroList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 895, @0x00000000029673c0, libserver.so)
void __fastcall CDOTAHeroList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTAHeroList *const this)
{
  ;
}


// CDOTAHeroList::DoesGameSystemReallocate  (line 895, @0x00000000029673d0, libserver.so)
// globals: CDOTAHeroList::sm_Factory
bool __fastcall CDOTAHeroList::DoesGameSystemReallocate(const CDOTAHeroList *const this)
{
  return (*(CDOTAHeroList::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAHeroList::sm_Factory);
}


// CDOTAHeroList::SetGameSystemGlobalPtrs  (line 895, @0x00000000029673f0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAHeroList::sm_Factory
void __fastcall CDOTAHeroList::SetGameSystemGlobalPtrs(CDOTAHeroList *const this, void *pValue)
{
  if ( CDOTAHeroList::sm_Factory != 0 )
    (*(CDOTAHeroList::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAHeroList::sm_Factory, pValue);
}


// CDOTAHeroList::GameInit  (line 900, @0x000000000298bfe0, libserver.so)  // inlines: PurgeAndDeleteElements
// calls: CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >::RemoveAll, CUtlVectorBase<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >::RemoveAll, CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, CDOTAHeroList::RemoveAllHeroPositions
void __fastcall CDOTAHeroList::GameInit(CDOTAHeroList *const this, const EventGameInit_t *const msg)
{
  CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>,CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>>::RemoveAll(&this->m_hHeroList);
  CUtlVectorBase<CDOTAMusicSystemElement,CUtlMemory<CDOTAMusicSystemElement,int>>::RemoveAll(&this->m_MusicElements);
  CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_mapHeroToLimitedUnits.m_Tree);
  CDOTAHeroList::RemoveAllHeroPositions(this);
}


// CDOTAHeroList::GameShutdown  (line 909, @0x000000000298c020, libserver.so)  // inlines: PurgeAndDeleteElements
// calls: CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >::RemoveAll, CUtlVectorBase<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >::RemoveAll, CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, CDOTAHeroList::RemoveAllHeroPositions
void __fastcall CDOTAHeroList::GameShutdown(CDOTAHeroList *const this, const EventGameShutdown_t *const msg)
{
  CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>,CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>>::RemoveAll(&this->m_hHeroList);
  CUtlVectorBase<CDOTAMusicSystemElement,CUtlMemory<CDOTAMusicSystemElement,int>>::RemoveAll(&this->m_MusicElements);
  CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_mapHeroToLimitedUnits.m_Tree);
  CDOTAHeroList::RemoveAllHeroPositions(this);
}


// CDOTAHeroList::GetHero  (line 938, @0x00000000026a85d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// callers: CDOTAPlayer::ClientCommand
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Hero *__fastcall CDOTAHeroList::GetHero(CDOTAHeroList *const this, int iIndex)
{
  CHandle<CDOTA_BaseNPC_Hero> *v2; // rdx
  uint32 m_Index; // eax
  __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC_Hero *result; // rax

  v2 = &this->m_hHeroList.m_Memory.m_pMemory[iIndex];
  m_Index = v2->m_Index;
  if ( v2->m_Index + 2 <= 1 )
    return 0;
  v4 = v2->m_Index;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v2->m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[v4 & 0x1FF];
  if ( v6 == 0 )
    return 0;
  if ( m_Index != v6->m_EHandle.m_Index )
    return 0;
  result = v6->m_pInstance;
  if ( v6->m_pInstance == 0 || (result->m_iUnitType & 1) == 0 )
    return 0;
  return result;
}


// CDOTA_Pet_CarriedItem::~CDOTA_Pet_CarriedItem  (line 996, @0x000000000296b1a0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_Pet_CarriedItem::~CDOTA_Pet_CarriedItem(CDOTA_Pet_CarriedItem *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_Pet_CarriedItem::~CDOTA_Pet_CarriedItem  (line 996, @0x000000000296b1e0, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Pet_CarriedItem
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Pet_CarriedItem::~CDOTA_Pet_CarriedItem(CDOTA_Pet_CarriedItem *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Pet_CarriedItem::Schema_DynamicBinding  (line 998, @0x0000000002967420, libserver.so)
// globals: CDOTA_Pet_CarriedItem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Pet_CarriedItem::Schema_DynamicBinding(
        const CDOTA_Pet_CarriedItem *const this)
{
  return CDOTA_Pet_CarriedItem::s_pSchemaBinding;
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 998, @0x0000000002967430, libserver.so)
// globals: CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::DestructInstance  (line 998, @0x0000000002967440, libserver.so)  // inlines: Destruct<CDOTA_Pet_CarriedItem>
void __fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::FreeInstance  (line 998, @0x0000000002967460, libserver.so)
void __fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::CanAllocate  (line 998, @0x0000000002967480, libserver.so)
bool __fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 998, @0x0000000002967490, libserver.so)
// globals: CDOTA_Pet_CarriedItem::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Pet_CarriedItem::s_pSchemaBinding;
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::AllocateInstance  (line 998, @0x000000000296ac10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::ConstructInstance  (line 998, @0x000000000296b160, libserver.so)  // inlines: CDOTA_Pet_CarriedItem, CEntityHandle, CHandle, Construct<CDOTA_Pet_CarriedItem>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 304) = -1;
    *p = &off_42F8990;
  }
  return p;
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 998, @0x000000000296fa00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 998, @0x000000000296fa20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Pet_CarriedItem::GetEntityClassInternal  (line 998, @0x0000000002980d80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "dota_pet_carrieditem", "CDOTA_Pet_CarriedItem"
// globals: `guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass, CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo, CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo
CEntityClass *__cdecl CDOTA_Pet_CarriedItem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass) != 0 )
  {
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_designerName.u.m_Id = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_AllHelpers.m_Size = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classInputs.m_Size = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classOutputs.m_Size = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_hNetworkSerializer = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pBaseClassInfo = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pClassInfo = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_flags = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_nAllHelpersFlags = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pScriptClassDesc = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pInputs = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_nInputCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pOutputs = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_nOutputCount = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pGameClass = 0;
    CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass._vptr_CEntityClass = off_42D7C50;
    __cxa_guard_release(&`guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass);
    __cxa_atexit(
      CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Pet_CarriedItemClass != 0 )
    return &CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass;
  if ( `guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo,
      "CDOTA_Pet_CarriedItem",
      "dota_pet_carrieditem",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo);
  }
  CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pClassInfo = &CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo;
  CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pBaseClassInfo = CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Pet_CarriedItemClass = &CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass;
  CDOTA_Pet_CarriedItem::GetEntityClassInfo(void)::g_EntityCDOTA_Pet_CarriedItemClassInfo.m_pClass = &CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass;
  CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTA_Pet_CarriedItemClass->m_pComponentOverrides = 0;
  return &CDOTA_Pet_CarriedItem::GetEntityClassInternal(void)::g_EntityCDOTA_Pet_CarriedItemClass;
}


// CDOTA_BaseNPC_Pet::~CDOTA_BaseNPC_Pet  (line 1012, @0x0000000002983de0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Pet::~CDOTA_BaseNPC_Pet(CDOTA_BaseNPC_Pet *const this)
{
  CUtlString *p_m_strPickupItemModel; // rdi

  p_m_strPickupItemModel = &this->m_strPickupItemModel;
  p_m_strPickupItemModel[-565].m_pString = &off_42F9190;
  p_m_strPickupItemModel[-329].m_pString = &off_42FA0F0;
  p_m_strPickupItemModel[-308].m_pString = &off_42FA420;
  if ( this->m_strPickupItemModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strPickupItemModel);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Pet::~CDOTA_BaseNPC_Pet  (line 1012, @0x0000000002984460, libserver.so)  // inlines: ~CDOTA_BaseNPC_Pet, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Pet::~CDOTA_BaseNPC_Pet(CDOTA_BaseNPC_Pet *const this)
{
  CUtlString *p_m_strPickupItemModel; // rdi

  p_m_strPickupItemModel = &this->m_strPickupItemModel;
  p_m_strPickupItemModel[-565].m_pString = &off_42F9190;
  p_m_strPickupItemModel[-329].m_pString = &off_42FA0F0;
  p_m_strPickupItemModel[-308].m_pString = &off_42FA420;
  if ( this->m_strPickupItemModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strPickupItemModel);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Pet::Schema_DynamicBinding  (line 1014, @0x00000000029674a0, libserver.so)
// globals: CDOTA_BaseNPC_Pet::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Pet::Schema_DynamicBinding(const CDOTA_BaseNPC_Pet *const this)
{
  return CDOTA_BaseNPC_Pet::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1014, @0x00000000029674d0, libserver.so)
// globals: CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::DestructInstance  (line 1014, @0x00000000029674e0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Pet>
void __fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::FreeInstance  (line 1014, @0x0000000002967500, libserver.so)
void __fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::CanAllocate  (line 1014, @0x0000000002967520, libserver.so)
bool __fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1014, @0x0000000002967530, libserver.so)
// globals: CDOTA_BaseNPC_Pet::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Pet::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::AllocateInstance  (line 1014, @0x000000000296ac50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4552);
  memset(v1, 0, 0x11C8u);
  return v1;
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1014, @0x000000000296f9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1014, @0x000000000296fa50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::ConstructInstance  (line 1014, @0x0000000002982700, libserver.so)  // inlines: CDOTA_BaseNPC_Pet, CEntityHandle, CHandle, CUtlString, Construct<CDOTA_BaseNPC_Pet>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = -1;
    *p = &off_42F9190;
    *(p + 236) = &off_42FA0F0;
    *(p + 257) = &off_42FA420;
    *(p + 565) = 0;
    *(p + 1132) = -1;
  }
  return p;
}


// CDOTA_BaseNPC_Pet::GetEntityClassInternal  (line 1014, @0x0000000002987660, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CDOTA_BaseNPC::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_companion", "CDOTA_BaseNPC_Pet"
// globals: `guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass, CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo, CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Pet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass) != 0 )
  {
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_flags = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pInputs = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass._vptr_CEntityClass = off_42D7CD0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_PetClass != 0 )
    return &CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass;
  if ( `guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo,
      "CDOTA_BaseNPC_Pet",
      "npc_dota_companion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo);
  }
  CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pClassInfo = &CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo;
  CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pBaseClassInfo = CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_PetClass = &CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass;
  CDOTA_BaseNPC_Pet::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_PetClassInfo.m_pClass = &CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass;
  CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPC_PetClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Pet::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_PetClass;
}


// CDOTA_BaseNPC_Pet::IsPet  (line 1019, @0x0000000002967540, libserver.so)
bool __fastcall CDOTA_BaseNPC_Pet::IsPet(CDOTA_BaseNPC_Pet *const this)
{
  return 1;
}


