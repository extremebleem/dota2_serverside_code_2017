
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_NPCSpawner::~CDOTA_NPCSpawner  (line 14, @0x0000000002978170, libserver.so)  // inlines: Purge, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_NPCSpawner::~CDOTA_NPCSpawner(CDOTA_NPCSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_42FCDD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Units);
  if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
    if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_NPCSpawner::~CDOTA_NPCSpawner  (line 14, @0x0000000002978810, libserver.so)  // inlines: Purge, ~CDOTA_NPCSpawner, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_NPCSpawner::~CDOTA_NPCSpawner(CDOTA_NPCSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_42FCDD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Units);
  if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
    if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPCSpawner::GetEntityClass  (line 16, @0x00000000029656c0, libserver.so)
CEntityClass *__cdecl CDOTA_NPCSpawner::GetEntityClass()
{
  return g_pEntityCDOTA_NPCSpawnerClass;
}


// CDOTA_NPCSpawner::Schema_DynamicBinding  (line 16, @0x00000000029656d0, libserver.so)
// globals: CDOTA_NPCSpawner::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPCSpawner::Schema_DynamicBinding(const CDOTA_NPCSpawner *const this)
{
  return CDOTA_NPCSpawner::s_pSchemaBinding;
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 16, @0x00000000029656e0, libserver.so)
// globals: CDOTA_NPCSpawner::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPCSpawner::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::DestructInstance  (line 16, @0x00000000029656f0, libserver.so)  // inlines: Destruct<CDOTA_NPCSpawner>
void __fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::FreeInstance  (line 16, @0x0000000002965710, libserver.so)
void __fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::CanAllocate  (line 16, @0x0000000002965730, libserver.so)
bool __fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 16, @0x0000000002965740, libserver.so)
// globals: CDOTA_NPCSpawner::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPCSpawner::s_pSchemaBinding;
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::AllocateInstance  (line 16, @0x000000000296a590, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 904);
  memset(v1, 0, 0x388u);
  return v1;
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::ConstructInstance  (line 16, @0x000000000296e950, libserver.so)  // inlines: CDOTA_NPCSpawner, CPointEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CDOTA_NPCSpawner>, ~CPointEntity
// calls: CBaseEntity::CBaseEntity, CountdownTimer::CountdownTimer, CBaseEntity::~CBaseEntity, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_42FCDD0;
    *(p + 98) = 0;
    *(p + 99) = 0;
    CountdownTimer::CountdownTimer((p + 800));
    CountdownTimer::CountdownTimer((p + 824));
    *(p + 220) = 0;
    *(p + 111) = 0;
    *(p + 224) = 0;
    *(p + 225) = 0;
  }
  return p;
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x000000000296f510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPCSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x000000000296f530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPCSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPCSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPCSpawner::GetEntityClassInfo  (line 16, @0x0000000002975cd0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_NPCSpawnerGoodMid::GetEntityClassInternal, CDOTA_NPCSpawnerBadMid::GetEntityClassInternal, CDOTA_NPCSpawnerBadTop::GetEntityClassInternal, CDOTA_NPCSpawnerBadBot::GetEntityClassInternal, CDOTA_NPCSpawnerGoodTop::GetEntityClassInternal, CDOTA_NPCSpawnerGoodBot::GetEntityClassInternal
// strings: "npc_dota_spawner", "CDOTA_NPCSpawner", "CPointEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo, CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_NPCSpawner::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo != 0 )
    return &CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo) == 0 )
    return &CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo;
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
    &CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo,
    "CDOTA_NPCSpawner",
    "npc_dota_spawner",
    0,
    &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo);
  return &CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo;
}


// CDOTA_NPCSpawner::GetEntityClassInternal  (line 16, @0x000000000297efb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_spawner", "CDOTA_NPCSpawner"
// globals: `guard variable for'CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass, CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_NPCSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo, CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo
CEntityClass *__cdecl CDOTA_NPCSpawner::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass) != 0 )
  {
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_designerName.u.m_Id = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_AllHelpers.m_Size = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classInputs.m_Size = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classOutputs.m_Size = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_hNetworkSerializer = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pBaseClassInfo = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pClassInfo = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_flags = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_nAllHelpersFlags = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pScriptClassDesc = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pInputs = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_nInputCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pOutputs = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_nOutputCount = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pGameClass = 0;
    CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass._vptr_CEntityClass = off_42D58F0;
    __cxa_guard_release(&`guard variable for'CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass);
    __cxa_atexit(
      CDOTA_NPCSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPCSpawnerClass != 0 )
    return &CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass;
  if ( `guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo,
      "CDOTA_NPCSpawner",
      "npc_dota_spawner",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo);
  }
  CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pClassInfo = &CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo;
  CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pBaseClassInfo = CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPCSpawnerClass = &CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass;
  CDOTA_NPCSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NPCSpawnerClassInfo.m_pClass = &CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass;
  CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_NPCSpawnerClass->m_pComponentOverrides = 0;
  return &CDOTA_NPCSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NPCSpawnerClass;
}


// CDOTA_NeutralSpawner::~CDOTA_NeutralSpawner  (line 62, @0x0000000002978a90, libserver.so)  // inlines: Purge, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_NeutralSpawner::~CDOTA_NeutralSpawner(CDOTA_NeutralSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_42FFF30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hVolumes);
  if ( (this->m_hVolumes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hVolumes.m_Memory);
    if ( (this->m_hVolumes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hVolumes.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Units);
  if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
    if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_PendingUnits);
  if ( (this->m_PendingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_PendingUnits.m_Memory);
    if ( (this->m_PendingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_PendingUnits.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_NeutralSpawner::~CDOTA_NeutralSpawner  (line 62, @0x0000000002978b90, libserver.so)  // inlines: Purge, ~CDOTA_NeutralSpawner, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_NeutralSpawner::~CDOTA_NeutralSpawner(CDOTA_NeutralSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_42FFF30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hVolumes);
  if ( (this->m_hVolumes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hVolumes.m_Memory);
    if ( (this->m_hVolumes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hVolumes.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Units);
  if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
    if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_PendingUnits);
  if ( (this->m_PendingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_PendingUnits.m_Memory);
    if ( (this->m_PendingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_PendingUnits.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NeutralSpawner::GetEntityClass  (line 64, @0x0000000002965750, libserver.so)
CEntityClass *__cdecl CDOTA_NeutralSpawner::GetEntityClass()
{
  return g_pEntityCDOTA_NeutralSpawnerClass;
}


// CDOTA_NeutralSpawner::Schema_DynamicBinding  (line 64, @0x0000000002965760, libserver.so)
// globals: CDOTA_NeutralSpawner::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NeutralSpawner::Schema_DynamicBinding(
        const CDOTA_NeutralSpawner *const this)
{
  return CDOTA_NeutralSpawner::s_pSchemaBinding;
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 64, @0x0000000002965770, libserver.so)
// globals: CDOTA_NeutralSpawner::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NeutralSpawner::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::DestructInstance  (line 64, @0x0000000002965780, libserver.so)  // inlines: Destruct<CDOTA_NeutralSpawner>
void __fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::FreeInstance  (line 64, @0x00000000029657a0, libserver.so)
void __fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::CanAllocate  (line 64, @0x00000000029657c0, libserver.so)
bool __fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 64, @0x00000000029657d0, libserver.so)
// globals: CDOTA_NeutralSpawner::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NeutralSpawner::s_pSchemaBinding;
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::AllocateInstance  (line 64, @0x000000000296a5d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x000000000296f740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x000000000296f760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NeutralSpawner::CEntityInstanceEntityClass::ConstructInstance  (line 64, @0x0000000002977fd0, libserver.so)  // inlines: CDOTA_NeutralSpawner, CEntityIOOutput, CNetworkVarBase, CPointEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CDOTA_NeutralSpawner>, EnsureValidValue<int>, ~CPointEntity
// calls: CBaseEntity::CBaseEntity, CountdownTimer::CountdownTimer, CBaseEntity::~CBaseEntity, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_NeutralSpawner::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NeutralSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_42FFF30;
    CountdownTimer::CountdownTimer((p + 784));
    CountdownTimer::CountdownTimer(p + 35);
    CountdownTimer::CountdownTimer(p + 36);
    *(p + 222) = 0;
    *(p + 112) = 0;
    *(p + 226) = 0;
    *(p + 227) = 0;
    *(p + 228) = 0;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
    *(p + 118) = 0;
    *(p + 238) = 0;
    *(p + 120) = 0;
    *(p + 242) = 0;
    *(p + 243) = 0;
    *(p + 122) = off_3F7C190;
    *(p + 250) = 0;
  }
  return p;
}


// CDOTA_NeutralSpawner::GetEntityClassInternal  (line 64, @0x0000000002981ac0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_neutral_spawner", "CDOTA_NeutralSpawner"
// globals: `guard variable for'CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass, CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_NeutralSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo, CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo
CEntityClass *__cdecl CDOTA_NeutralSpawner::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass) != 0 )
  {
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_designerName.u.m_Id = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_AllHelpers.m_Size = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classInputs.m_Size = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classOutputs.m_Size = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_hNetworkSerializer = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pBaseClassInfo = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pClassInfo = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_flags = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_nAllHelpersFlags = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pScriptClassDesc = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pInputs = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_nInputCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pOutputs = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_nOutputCount = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pGameClass = 0;
    CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass._vptr_CEntityClass = off_42D5970;
    __cxa_guard_release(&`guard variable for'CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass);
    __cxa_atexit(
      CDOTA_NeutralSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NeutralSpawnerClass != 0 )
    return &CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass;
  if ( `guard variable for'CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo,
      "CDOTA_NeutralSpawner",
      "npc_dota_neutral_spawner",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo);
  }
  CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pClassInfo = &CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo;
  CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pBaseClassInfo = CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NeutralSpawnerClass = &CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass;
  CDOTA_NeutralSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_NeutralSpawnerClassInfo.m_pClass = &CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass;
  CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_NeutralSpawnerClass->m_pComponentOverrides = 0;
  return &CDOTA_NeutralSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_NeutralSpawnerClass;
}


// CDOTA_RoshanSpawner::~CDOTA_RoshanSpawner  (line 131, @0x0000000002b19840, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTA_RoshanSpawner::~CDOTA_RoshanSpawner(CDOTA_RoshanSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_RoshanSpawner::~CDOTA_RoshanSpawner  (line 131, @0x0000000002b19860, libserver.so)  // inlines: ~CDOTA_RoshanSpawner, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTA_RoshanSpawner::~CDOTA_RoshanSpawner(CDOTA_RoshanSpawner *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 133, @0x00000000029657e0, libserver.so)
// globals: CDOTA_RoshanSpawner::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_RoshanSpawner::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::DestructInstance  (line 133, @0x00000000029657f0, libserver.so)  // inlines: Destruct<CDOTA_RoshanSpawner>
void __fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::FreeInstance  (line 133, @0x0000000002965810, libserver.so)
void __fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::CanAllocate  (line 133, @0x0000000002965830, libserver.so)
bool __fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 133, @0x0000000002965840, libserver.so)
// globals: CDOTA_RoshanSpawner::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_RoshanSpawner::s_pSchemaBinding;
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::AllocateInstance  (line 133, @0x000000000296a610, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::ConstructInstance  (line 133, @0x000000000296afd0, libserver.so)  // inlines: CDOTA_RoshanSpawner, CEntityHandle, CHandle, CPointEntity, Construct<CDOTA_RoshanSpawner>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 195) = -1;
    *p = &off_447BCD0;
  }
  return p;
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 133, @0x000000000296f790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_RoshanSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 133, @0x000000000296f7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_RoshanSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_RoshanSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_RoshanSpawner::GetEntityClassInternal  (line 133, @0x0000000002981420, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_roshan_spawner", "CDOTA_RoshanSpawner"
// globals: `guard variable for'CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass, CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_RoshanSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo, CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo
CEntityClass *__cdecl CDOTA_RoshanSpawner::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass) != 0 )
  {
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_designerName.u.m_Id = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_AllHelpers.m_Size = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classInputs.m_Size = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classOutputs.m_Size = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_hNetworkSerializer = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pBaseClassInfo = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pClassInfo = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_flags = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_nAllHelpersFlags = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pScriptClassDesc = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pInputs = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_nInputCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pOutputs = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_nOutputCount = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pGameClass = 0;
    CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass._vptr_CEntityClass = off_42D59F0;
    __cxa_guard_release(&`guard variable for'CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass);
    __cxa_atexit(
      CDOTA_RoshanSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_RoshanSpawnerClass != 0 )
    return &CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass;
  if ( `guard variable for'CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo,
      "CDOTA_RoshanSpawner",
      "npc_dota_roshan_spawner",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo);
  }
  CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pClassInfo = &CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo;
  CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pBaseClassInfo = CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_RoshanSpawnerClass = &CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass;
  CDOTA_RoshanSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_RoshanSpawnerClassInfo.m_pClass = &CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass;
  CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_RoshanSpawnerClass->m_pComponentOverrides = 0;
  return &CDOTA_RoshanSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_RoshanSpawnerClass;
}


// CDOTA_RoshanSpawner::Schema_DynamicBinding  (line 133, @0x0000000002b19890, libserver.so)
// calls: CDOTA_RoshanSpawner::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_RoshanSpawner::Schema_DynamicBinding(
        const CDOTA_RoshanSpawner *const this)
{
  CDOTA_RoshanSpawner::Schema_VerifyBindingIsRegistered();
  return CDOTA_RoshanSpawner::s_pSchemaBinding;
}


// CDOTA_RoshanSpawner::UpdateTransmitState  (line 139, @0x0000000002b19830, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTA_RoshanSpawner::UpdateTransmitState(CDOTA_RoshanSpawner *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CDOTA_ScriptedSpawner::~CDOTA_ScriptedSpawner  (line 163, @0x0000000002978ca0, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CGameEventListener, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_ScriptedSpawner::~CDOTA_ScriptedSpawner(CDOTA_ScriptedSpawner *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_43005D0;
  this->_vptr_IGameEventListener2 = off_4300D10;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Units);
  if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
    if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
  }
  v2 = (this->m_hMoveToTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hMoveToTargets.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t,int>::Purge(&this->m_hMoveToTargets.m_Memory);
    if ( (this->m_hMoveToTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t,int>::Purge(&this->m_hMoveToTargets.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_ScriptedSpawner::~CDOTA_ScriptedSpawner  (line 163, @0x0000000002978dd0, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CDOTA_ScriptedSpawner, ~CGameEventListener, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_ScriptedSpawner::~CDOTA_ScriptedSpawner(CDOTA_ScriptedSpawner *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_43005D0;
  this->_vptr_IGameEventListener2 = off_4300D10;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Units);
  if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
    if ( (this->m_Units.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Units.m_Memory);
  }
  v2 = (this->m_hMoveToTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hMoveToTargets.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t,int>::Purge(&this->m_hMoveToTargets.m_Memory);
    if ( (this->m_hMoveToTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t,int>::Purge(&this->m_hMoveToTargets.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_ScriptedSpawner::GetEntityClass  (line 165, @0x0000000002965850, libserver.so)
CEntityClass *__cdecl CDOTA_ScriptedSpawner::GetEntityClass()
{
  return g_pEntityCDOTA_ScriptedSpawnerClass;
}


// CDOTA_ScriptedSpawner::Schema_DynamicBinding  (line 165, @0x0000000002965860, libserver.so)
// globals: CDOTA_ScriptedSpawner::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ScriptedSpawner::Schema_DynamicBinding(
        const CDOTA_ScriptedSpawner *const this)
{
  return CDOTA_ScriptedSpawner::s_pSchemaBinding;
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 165, @0x0000000002965870, libserver.so)
// globals: CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::DestructInstance  (line 165, @0x0000000002965880, libserver.so)  // inlines: Destruct<CDOTA_ScriptedSpawner>
void __fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::FreeInstance  (line 165, @0x00000000029658a0, libserver.so)
void __fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::CanAllocate  (line 165, @0x00000000029658c0, libserver.so)
bool __fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 165, @0x00000000029658d0, libserver.so)
// globals: CDOTA_ScriptedSpawner::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_ScriptedSpawner::s_pSchemaBinding;
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::AllocateInstance  (line 165, @0x000000000296a650, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x000000000296f7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x000000000296f800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::ConstructInstance  (line 165, @0x0000000002970b00, libserver.so)  // inlines: CDOTA_ScriptedSpawner, CEntityHandle, CEntityIOOutput, CGameEventListener, CHandle, CPointEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CDOTA_ScriptedSpawner>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_ScriptedSpawner::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 784) = 0;
    *p = &off_43005D0;
    *(p + 97) = off_4300D10;
    *(p + 99) = 0;
    *(p + 206) = 0;
    *(p + 104) = 0;
    *(p + 210) = 0;
    *(p + 211) = 0;
    *(p + 106) = off_3F7C190;
    *(p + 109) = off_3F7C190;
    *(p + 112) = off_3F7C190;
    *(p + 230) = 0;
    *(p + 116) = 0;
    *(p + 234) = 0;
    *(p + 235) = 0;
    *(p + 236) = -1;
    *(p + 119) = 0;
  }
  return p;
}


// CDOTA_ScriptedSpawner::GetEntityClassInternal  (line 165, @0x000000000297f300, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_scripted_spawner", "CDOTA_ScriptedSpawner"
// globals: `guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass, CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo, CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo
CEntityClass *__cdecl CDOTA_ScriptedSpawner::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass) != 0 )
  {
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_designerName.u.m_Id = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_AllHelpers.m_Size = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classInputs.m_Size = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classOutputs.m_Size = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_hNetworkSerializer = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pBaseClassInfo = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pClassInfo = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_flags = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_nAllHelpersFlags = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pScriptClassDesc = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pInputs = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_nInputCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pOutputs = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_nOutputCount = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pGameClass = 0;
    CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass._vptr_CEntityClass = off_42D5A70;
    __cxa_guard_release(&`guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass);
    __cxa_atexit(
      CDOTA_ScriptedSpawner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_ScriptedSpawnerClass != 0 )
    return &CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass;
  if ( `guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo,
      "CDOTA_ScriptedSpawner",
      "npc_dota_scripted_spawner",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo);
  }
  CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pClassInfo = &CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo;
  CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pBaseClassInfo = CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_ScriptedSpawnerClass = &CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass;
  CDOTA_ScriptedSpawner::GetEntityClassInfo(void)::g_EntityCDOTA_ScriptedSpawnerClassInfo.m_pClass = &CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass;
  CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_ScriptedSpawnerClass->m_pComponentOverrides = 0;
  return &CDOTA_ScriptedSpawner::GetEntityClassInternal(void)::g_EntityCDOTA_ScriptedSpawnerClass;
}


// CDOTA_ScriptedSpawner::GetFirstNPC  (line 207, @0x000000000276c750, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTA_ScriptedSpawner::GetFirstNPC(CDOTA_ScriptedSpawner *const this)
{
  CHandle<CBaseEntity> *m_pMemory; // rcx
  CBaseEntity *result; // rax
  uint32 m_Index; // edx
  __int16 v4; // si
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_Units.m_Size <= 0 )
    return 0;
  m_pMemory = this->m_Units.m_Memory.m_pMemory;
  result = 0;
  m_Index = m_pMemory->m_Index;
  if ( m_pMemory->m_Index + 2 > 1 )
  {
    v4 = m_pMemory->m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


