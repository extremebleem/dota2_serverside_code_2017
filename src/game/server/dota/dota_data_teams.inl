
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_DataNonSpectator::~CDOTA_DataNonSpectator  (line 22, @0x00000000024b31e0, libserver.so)  // inlines: Purge, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataNonSpectator::~CDOTA_DataNonSpectator(CDOTA_DataNonSpectator *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory),
        (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTA_DataNonSpectator::~CDOTA_DataNonSpectator  (line 22, @0x00000000024b3460, libserver.so)  // inlines: Purge, ~CDOTA_DataNonSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataNonSpectator::~CDOTA_DataNonSpectator(CDOTA_DataNonSpectator *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_DataNonSpectator::Schema_DynamicBinding  (line 24, @0x00000000024998f0, libserver.so)
// calls: CDOTA_DataNonSpectator::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_DataNonSpectator::Schema_DynamicBinding(
        const CDOTA_DataNonSpectator *const this)
{
  CDOTA_DataNonSpectator::Schema_VerifyBindingIsRegistered();
  return CDOTA_DataNonSpectator::s_pSchemaBinding;
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x0000000002551df0, libserver.so)
// globals: CDOTA_DataNonSpectator::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataNonSpectator::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x0000000002551e00, libserver.so)  // inlines: Destruct<CDOTA_DataNonSpectator>
void __fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x0000000002551e20, libserver.so)
void __fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x0000000002551e40, libserver.so)
bool __fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x0000000002551e50, libserver.so)
// globals: CDOTA_DataNonSpectator::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataNonSpectator::s_pSchemaBinding;
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x00000000025551d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2936);
  memset(v1, 0, 0xB78u);
  return v1;
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x000000000255dc70, libserver.so)  // inlines: CDOTA_DataNonSpectator, CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Construct<CDOTA_DataNonSpectator>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this,
        void *p)
{
  CEntityInstance *v3; // rax

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *(p + 98) = 0;
    *(p + 198) = 0;
    *(p + 412) = 0;
    *p = &off_40EC2B0;
    *(p + 199) = 0;
    *(p + 826) = 0;
    *(p + 104) = 0;
    v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 840) = 0;
    *(p + 841) = 0;
    *(p + 100) = v3;
  }
  return p;
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x0000000002560630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_DataNonSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x0000000002560650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_DataNonSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataNonSpectator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_DataNonSpectator::GetEntityClassInfo  (line 24, @0x00000000025679d0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_DataRadiant::GetEntityClassInternal, CDOTA_DataDire::GetEntityClassInternal, CDOTA_DataCustomTeam::GetEntityClassInternal, CDOTA_DataSpectator::GetEntityClassInternal
// strings: "CDOTA_DataNonSpectator", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo, CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_DataNonSpectator::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo != 0 )
    return &CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo) == 0 )
    return &CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo;
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
    &CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo,
    "CDOTA_DataNonSpectator",
    0,
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo);
  return &CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo;
}


// CDOTA_DataNonSpectator::GetEntityClassInternal  (line 24, @0x0000000002575500, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "CDOTA_DataNonSpectator"
// globals: `guard variable for'CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass, CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_DataNonSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo, CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo
CEntityClass *__cdecl CDOTA_DataNonSpectator::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass) != 0 )
  {
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_designerName.u.m_Id = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass._vptr_CEntityClass = off_3F79390;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_AllHelpers.m_Size = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classInputs.m_Size = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classOutputs.m_Size = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_requiredEHandle.m_Index = -1;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_hNetworkSerializer = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pBaseClassInfo = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pClassInfo = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_flags = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_nAllHelpersFlags = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pScriptClassDesc = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pInputs = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_nInputCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pOutputs = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_nOutputCount = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pGameClass = 0;
    CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass._vptr_CEntityClass = off_40F5750;
    __cxa_guard_release(&`guard variable for'CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass);
    __cxa_atexit(
      CDOTA_DataNonSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_DataNonSpectatorClass != 0 )
    return &CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass;
  if ( `guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo,
      "CDOTA_DataNonSpectator",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo);
  }
  CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pClassInfo = &CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo;
  CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pBaseClassInfo = CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_DataNonSpectatorClass = &CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass;
  CDOTA_DataNonSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataNonSpectatorClassInfo.m_pClass = &CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass;
  CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_DataNonSpectatorClass->m_pComponentOverrides = 0;
  return &CDOTA_DataNonSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataNonSpectatorClass;
}


// CDOTA_DataRadiant::~CDOTA_DataRadiant  (line 43, @0x00000000024b33e0, libserver.so)  // inlines: Purge, ~CDOTA_DataNonSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataRadiant::~CDOTA_DataRadiant(CDOTA_DataRadiant *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory),
        (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTA_DataRadiant::~CDOTA_DataRadiant  (line 43, @0x00000000024b3660, libserver.so)  // inlines: Purge, ~CDOTA_DataNonSpectator, ~CDOTA_DataRadiant, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataRadiant::~CDOTA_DataRadiant(CDOTA_DataRadiant *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_DataRadiant::Schema_DynamicBinding  (line 45, @0x0000000002499910, libserver.so)
// calls: CDOTA_DataRadiant::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_DataRadiant::Schema_DynamicBinding(const CDOTA_DataRadiant *const this)
{
  CDOTA_DataRadiant::Schema_VerifyBindingIsRegistered();
  return CDOTA_DataRadiant::s_pSchemaBinding;
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000002551e60, libserver.so)
// globals: CDOTA_DataRadiant::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_DataRadiant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataRadiant::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000002551e70, libserver.so)  // inlines: Destruct<CDOTA_DataRadiant>
void __fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_DataRadiant::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x0000000002551e90, libserver.so)
void __fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_DataRadiant::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x0000000002551eb0, libserver.so)
bool __fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_DataRadiant::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x0000000002551ec0, libserver.so)
// globals: CDOTA_DataRadiant::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_DataRadiant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataRadiant::s_pSchemaBinding;
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000002555210, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_DataRadiant::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2936);
  memset(v1, 0, 0xB78u);
  return v1;
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x000000000255dd10, libserver.so)  // inlines: CDOTA_DataNonSpectator, CDOTA_DataRadiant, CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Construct<CDOTA_DataRadiant>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_DataRadiant::CEntityInstanceEntityClass *const this,
        void *p)
{
  CEntityInstance *v3; // rax

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *(p + 98) = 0;
    *(p + 198) = 0;
    *(p + 412) = 0;
    *p = &off_40EC2B0;
    *(p + 199) = 0;
    *(p + 826) = 0;
    *(p + 104) = 0;
    v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 840) = 0;
    *(p + 841) = 0;
    *(p + 100) = v3;
    *p = &off_40EC950;
  }
  return p;
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002560680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataRadiant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_DataRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x00000000025606a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_DataRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataRadiant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_DataRadiant::GetEntityClassInternal  (line 45, @0x0000000002575840, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CDOTA_DataNonSpectator::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_data_radiant", "CDOTA_DataRadiant"
// globals: `guard variable for'CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass, CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_DataRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo, CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo
CEntityClass *__cdecl CDOTA_DataRadiant::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass) != 0 )
  {
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_designerName.u.m_Id = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass._vptr_CEntityClass = off_3F79390;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_AllHelpers.m_Size = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classInputs.m_Size = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classOutputs.m_Size = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_requiredEHandle.m_Index = -1;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_hNetworkSerializer = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pBaseClassInfo = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pClassInfo = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_flags = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_nAllHelpersFlags = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pScriptClassDesc = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pInputs = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_nInputCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pOutputs = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_nOutputCount = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pGameClass = 0;
    CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass._vptr_CEntityClass = off_40F57D0;
    __cxa_guard_release(&`guard variable for'CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass);
    __cxa_atexit(
      CDOTA_DataRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_DataRadiantClass != 0 )
    return &CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass;
  if ( `guard variable for'CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_DataNonSpectator::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo,
      "CDOTA_DataRadiant",
      "dota_data_radiant",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo);
  }
  CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pClassInfo = &CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo;
  CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pBaseClassInfo = CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_DataRadiantClass = &CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass;
  CDOTA_DataRadiant::GetEntityClassInfo(void)::g_EntityCDOTA_DataRadiantClassInfo.m_pClass = &CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass;
  CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_DataRadiantClass->m_pComponentOverrides = 0;
  return &CDOTA_DataRadiant::GetEntityClassInternal(void)::g_EntityCDOTA_DataRadiantClass;
}


// CDOTA_DataDire::~CDOTA_DataDire  (line 52, @0x00000000024b3260, libserver.so)  // inlines: Purge, ~CDOTA_DataNonSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataDire::~CDOTA_DataDire(CDOTA_DataDire *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory),
        (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTA_DataDire::~CDOTA_DataDire  (line 52, @0x00000000024b3560, libserver.so)  // inlines: Purge, ~CDOTA_DataDire, ~CDOTA_DataNonSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataDire::~CDOTA_DataDire(CDOTA_DataDire *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_DataDire::Schema_DynamicBinding  (line 54, @0x0000000002499930, libserver.so)
// calls: CDOTA_DataDire::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_DataDire::Schema_DynamicBinding(const CDOTA_DataDire *const this)
{
  CDOTA_DataDire::Schema_VerifyBindingIsRegistered();
  return CDOTA_DataDire::s_pSchemaBinding;
}


// CDOTA_DataDire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 54, @0x0000000002551ed0, libserver.so)
// globals: CDOTA_DataDire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DataDire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_DataDire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataDire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_DataDire::CEntityInstanceEntityClass::DestructInstance  (line 54, @0x0000000002551ee0, libserver.so)  // inlines: Destruct<CDOTA_DataDire>
void __fastcall CDOTA_DataDire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_DataDire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_DataDire::CEntityInstanceEntityClass::FreeInstance  (line 54, @0x0000000002551f00, libserver.so)
void __fastcall CDOTA_DataDire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_DataDire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_DataDire::CEntityInstanceEntityClass::CanAllocate  (line 54, @0x0000000002551f20, libserver.so)
bool __fastcall CDOTA_DataDire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_DataDire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_DataDire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 54, @0x0000000002551f30, libserver.so)
// globals: CDOTA_DataDire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_DataDire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_DataDire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataDire::s_pSchemaBinding;
}


// CDOTA_DataDire::CEntityInstanceEntityClass::AllocateInstance  (line 54, @0x0000000002555250, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_DataDire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_DataDire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2936);
  memset(v1, 0, 0xB78u);
  return v1;
}


// CDOTA_DataDire::CEntityInstanceEntityClass::ConstructInstance  (line 54, @0x000000000255ddc0, libserver.so)  // inlines: CDOTA_DataDire, CDOTA_DataNonSpectator, CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Construct<CDOTA_DataDire>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_DataDire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_DataDire::CEntityInstanceEntityClass *const this,
        void *p)
{
  CEntityInstance *v3; // rax

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *(p + 98) = 0;
    *(p + 198) = 0;
    *(p + 412) = 0;
    *p = &off_40EC2B0;
    *(p + 199) = 0;
    *(p + 826) = 0;
    *(p + 104) = 0;
    v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 840) = 0;
    *(p + 841) = 0;
    *(p + 100) = v3;
    *p = &off_40ECFF0;
  }
  return p;
}


// CDOTA_DataDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 54, @0x00000000025606d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_DataDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataDire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_DataDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 54, @0x00000000025606f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_DataDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataDire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_DataDire::GetEntityClassInternal  (line 54, @0x0000000002576230, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CDOTA_DataNonSpectator::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_data_dire", "CDOTA_DataDire"
// globals: `guard variable for'CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass, CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_DataDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo, CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo
CEntityClass *__cdecl CDOTA_DataDire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass) != 0 )
  {
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_designerName.u.m_Id = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass._vptr_CEntityClass = off_3F79390;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_AllHelpers.m_Size = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classInputs.m_Size = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classOutputs.m_Size = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_requiredEHandle.m_Index = -1;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_hNetworkSerializer = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pBaseClassInfo = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pClassInfo = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_flags = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_nAllHelpersFlags = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pScriptClassDesc = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pInputs = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_nInputCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pOutputs = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_nOutputCount = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pGameClass = 0;
    CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass._vptr_CEntityClass = off_40F5850;
    __cxa_guard_release(&`guard variable for'CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass);
    __cxa_atexit(
      CDOTA_DataDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_DataDireClass != 0 )
    return &CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass;
  if ( `guard variable for'CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_DataNonSpectator::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo,
      "CDOTA_DataDire",
      "dota_data_dire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo);
  }
  CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pClassInfo = &CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo;
  CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pBaseClassInfo = CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_DataDireClass = &CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass;
  CDOTA_DataDire::GetEntityClassInfo(void)::g_EntityCDOTA_DataDireClassInfo.m_pClass = &CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass;
  CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_DataDireClass->m_pComponentOverrides = 0;
  return &CDOTA_DataDire::GetEntityClassInternal(void)::g_EntityCDOTA_DataDireClass;
}


// CDOTA_DataCustomTeam::~CDOTA_DataCustomTeam  (line 61, @0x00000000024b32e0, libserver.so)  // inlines: Purge, ~CDOTA_DataNonSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataCustomTeam::~CDOTA_DataCustomTeam(CDOTA_DataCustomTeam *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory),
        (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTA_DataCustomTeam::~CDOTA_DataCustomTeam  (line 61, @0x00000000024b34e0, libserver.so)  // inlines: Purge, ~CDOTA_DataCustomTeam, ~CDOTA_DataNonSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataCustomTeam::~CDOTA_DataCustomTeam(CDOTA_DataCustomTeam *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_DataCustomTeam::Schema_DynamicBinding  (line 63, @0x0000000002499950, libserver.so)
// calls: CDOTA_DataCustomTeam::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_DataCustomTeam::Schema_DynamicBinding(
        const CDOTA_DataCustomTeam *const this)
{
  CDOTA_DataCustomTeam::Schema_VerifyBindingIsRegistered();
  return CDOTA_DataCustomTeam::s_pSchemaBinding;
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 63, @0x0000000002551f40, libserver.so)
// globals: CDOTA_DataCustomTeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataCustomTeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::DestructInstance  (line 63, @0x0000000002551f50, libserver.so)  // inlines: Destruct<CDOTA_DataCustomTeam>
void __fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::FreeInstance  (line 63, @0x0000000002551f70, libserver.so)
void __fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::CanAllocate  (line 63, @0x0000000002551f90, libserver.so)
bool __fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 63, @0x0000000002551fa0, libserver.so)
// globals: CDOTA_DataCustomTeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataCustomTeam::s_pSchemaBinding;
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::AllocateInstance  (line 63, @0x0000000002555290, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2936);
  memset(v1, 0, 0xB78u);
  return v1;
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::ConstructInstance  (line 63, @0x000000000255de70, libserver.so)  // inlines: CDOTA_DataCustomTeam, CDOTA_DataNonSpectator, CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Construct<CDOTA_DataCustomTeam>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  CEntityInstance *v3; // rax

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *(p + 98) = 0;
    *(p + 198) = 0;
    *(p + 412) = 0;
    *p = &off_40EC2B0;
    *(p + 199) = 0;
    *(p + 826) = 0;
    *(p + 104) = 0;
    v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 840) = 0;
    *(p + 841) = 0;
    *(p + 100) = v3;
    *p = &off_40EDD30;
  }
  return p;
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002560720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_DataCustomTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002560740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_DataCustomTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataCustomTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_DataCustomTeam::GetEntityClassInternal  (line 63, @0x0000000002576580, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CDOTA_DataNonSpectator::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_data_custom", "CDOTA_DataCustomTeam"
// globals: `guard variable for'CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass, CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_DataCustomTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo, CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo
CEntityClass *__cdecl CDOTA_DataCustomTeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass) != 0 )
  {
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_designerName.u.m_Id = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass._vptr_CEntityClass = off_3F79390;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_AllHelpers.m_Size = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classInputs.m_Size = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classOutputs.m_Size = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_requiredEHandle.m_Index = -1;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_hNetworkSerializer = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pBaseClassInfo = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pClassInfo = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_flags = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_nAllHelpersFlags = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pScriptClassDesc = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pInputs = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_nInputCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pOutputs = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_nOutputCount = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pGameClass = 0;
    CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass._vptr_CEntityClass = off_40F58D0;
    __cxa_guard_release(&`guard variable for'CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass);
    __cxa_atexit(
      CDOTA_DataCustomTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_DataCustomTeamClass != 0 )
    return &CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass;
  if ( `guard variable for'CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_DataNonSpectator::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo,
      "CDOTA_DataCustomTeam",
      "dota_data_custom",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo);
  }
  CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pClassInfo = &CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo;
  CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pBaseClassInfo = CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_DataCustomTeamClass = &CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass;
  CDOTA_DataCustomTeam::GetEntityClassInfo(void)::g_EntityCDOTA_DataCustomTeamClassInfo.m_pClass = &CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass;
  CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_DataCustomTeamClass->m_pComponentOverrides = 0;
  return &CDOTA_DataCustomTeam::GetEntityClassInternal(void)::g_EntityCDOTA_DataCustomTeamClass;
}


// CDOTA_DataSpectator::~CDOTA_DataSpectator  (line 74, @0x00000000024b3360, libserver.so)  // inlines: Purge, ~CDOTA_DataNonSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataSpectator::~CDOTA_DataSpectator(CDOTA_DataSpectator *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory),
        (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTA_DataSpectator::~CDOTA_DataSpectator  (line 74, @0x00000000024b35e0, libserver.so)  // inlines: Purge, ~CDOTA_DataNonSpectator, ~CDOTA_DataSpectator, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<DataTeamPlayer_t, int>::Purge
void __fastcall CDOTA_DataSpectator::~CDOTA_DataSpectator(CDOTA_DataSpectator *const this)
{
  this->_vptr_IHandleEntity = &off_40EC2B0;
  operator delete(this->m_vecDataTeam.m_pArraySizeChangedDelegate);
  CUtlVectorBase<DataTeamPlayer_t,CNetworkUtlVector_MemoryType<DataTeamPlayer_t,-1>>::RemoveAll(&this->m_vecDataTeam.m_Vector);
  if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
    if ( (this->m_vecDataTeam.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<DataTeamPlayer_t,int>::Purge(&this->m_vecDataTeam.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_DataSpectator::Schema_DynamicBinding  (line 76, @0x0000000002499970, libserver.so)
// calls: CDOTA_DataSpectator::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_DataSpectator::Schema_DynamicBinding(
        const CDOTA_DataSpectator *const this)
{
  CDOTA_DataSpectator::Schema_VerifyBindingIsRegistered();
  return CDOTA_DataSpectator::s_pSchemaBinding;
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 76, @0x0000000002551fb0, libserver.so)
// globals: CDOTA_DataSpectator::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_DataSpectator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataSpectator::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::DestructInstance  (line 76, @0x0000000002551fc0, libserver.so)  // inlines: Destruct<CDOTA_DataSpectator>
void __fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_DataSpectator::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::FreeInstance  (line 76, @0x0000000002551fe0, libserver.so)
void __fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_DataSpectator::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::CanAllocate  (line 76, @0x0000000002552000, libserver.so)
bool __fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_DataSpectator::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 76, @0x0000000002552010, libserver.so)
// globals: CDOTA_DataSpectator::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_DataSpectator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DataSpectator::s_pSchemaBinding;
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::AllocateInstance  (line 76, @0x00000000025552d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_DataSpectator::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 3048);
  memset(v1, 0, 0xBE8u);
  return v1;
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::ConstructInstance  (line 76, @0x000000000255e1c0, libserver.so)  // inlines: CDOTA_DataNonSpectator, CDOTA_DataSpectator, CEntityHandle, CEntityOwnerPtr, CFieldPath, CNetworkHandleBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Construct<CDOTA_DataSpectator>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_DataSpectator::CEntityInstanceEntityClass *const this,
        void *p)
{
  CEntityInstance *v3; // rax

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *(p + 98) = 0;
    *(p + 198) = 0;
    *(p + 412) = 0;
    *p = &off_40EC2B0;
    *(p + 199) = 0;
    *(p + 826) = 0;
    *(p + 104) = 0;
    v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 840) = 0;
    *(p + 841) = 0;
    *(p + 733) = -1;
    *(p + 734) = -1;
    *(p + 100) = v3;
    *(p + 735) = -1;
    *(p + 736) = -1;
    *(p + 737) = -1;
    *p = &off_40ED690;
  }
  return p;
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 76, @0x0000000002560770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataSpectator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_DataSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 76, @0x0000000002560790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_DataSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DataSpectator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_DataSpectator::GetEntityClassInternal  (line 76, @0x00000000025768d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CDOTA_DataNonSpectator::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_data_spectator", "CDOTA_DataSpectator"
// globals: `guard variable for'CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass, CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_DataSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo, CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo
CEntityClass *__cdecl CDOTA_DataSpectator::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass) != 0 )
  {
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_designerName.u.m_Id = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass._vptr_CEntityClass = off_3F79390;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_AllHelpers.m_Size = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classInputs.m_Size = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classOutputs.m_Size = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_requiredEHandle.m_Index = -1;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_hNetworkSerializer = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pBaseClassInfo = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pClassInfo = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_flags = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_nAllHelpersFlags = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pScriptClassDesc = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pInputs = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_nInputCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pOutputs = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_nOutputCount = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pGameClass = 0;
    CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass._vptr_CEntityClass = off_40F5950;
    __cxa_guard_release(&`guard variable for'CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass);
    __cxa_atexit(
      CDOTA_DataSpectator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_DataSpectatorClass != 0 )
    return &CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass;
  if ( `guard variable for'CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_DataNonSpectator::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo,
      "CDOTA_DataSpectator",
      "dota_data_spectator",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo);
  }
  CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pClassInfo = &CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo;
  CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pBaseClassInfo = CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_DataSpectatorClass = &CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass;
  CDOTA_DataSpectator::GetEntityClassInfo(void)::g_EntityCDOTA_DataSpectatorClassInfo.m_pClass = &CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass;
  CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_DataSpectatorClass->m_pComponentOverrides = 0;
  return &CDOTA_DataSpectator::GetEntityClassInternal(void)::g_EntityCDOTA_DataSpectatorClass;
}


