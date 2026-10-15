
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABaseAbility::Schema_DynamicBinding  (line 29, @0x0000000002455800, libserver.so)
// globals: CDOTABaseAbility::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTABaseAbility::Schema_DynamicBinding(const CDOTABaseAbility *const this)
{
  return CDOTABaseAbility::s_pSchemaBinding;
}


// CDOTABaseAbility::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002455810, libserver.so)
// globals: CDOTABaseAbility::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTABaseAbility::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTABaseAbility::CEntityInstanceEntityClass *const this)
{
  return CDOTABaseAbility::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTABaseAbility::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002455820, libserver.so)  // inlines: Destruct<CDOTABaseAbility>
void __fastcall CDOTABaseAbility::CEntityInstanceEntityClass::DestructInstance(
        CDOTABaseAbility::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTABaseAbility::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002455840, libserver.so)
void __fastcall CDOTABaseAbility::CEntityInstanceEntityClass::FreeInstance(
        CDOTABaseAbility::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTABaseAbility::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002455860, libserver.so)
bool __fastcall CDOTABaseAbility::CEntityInstanceEntityClass::CanAllocate(
        const CDOTABaseAbility::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTABaseAbility::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002455870, libserver.so)
// globals: CDOTABaseAbility::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTABaseAbility::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTABaseAbility::CEntityInstanceEntityClass *const this)
{
  return CDOTABaseAbility::s_pSchemaBinding;
}


// CDOTABaseAbility::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x00000000024572f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTABaseAbility::CEntityInstanceEntityClass::AllocateInstance(
        CDOTABaseAbility::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTABaseAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000024591e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTABaseAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTABaseAbility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTABaseAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002459200, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTABaseAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTABaseAbility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTABaseAbility::GetEntityClassInfo  (line 29, @0x0000000002459e10, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_AttributeBonus::GetEntityClassInternal, CDOTA_Ability_DataDriven::GetEntityClassInternal, CDOTA_Ability_Lua::GetEntityClassInternal, CDOTA_Ability_Healing_Campfire::GetEntityClassInternal, CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal, CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal, CDOTA_Ability_Throw_Coal::GetEntityClassInternal, CDOTA_Ability_Throw_Snowball::GetEntityClassInternal, CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal, CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal, CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal, CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal (1048 total)
// strings: "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTABaseAbility::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo != 0 )
    return &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) == 0 )
    return &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo;
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
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
    "CDOTABaseAbility",
    "dota_base_ability",
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  return &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo;
}


// CDOTABaseAbility::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x000000000245a2f0, libserver.so)  // inlines: Construct<CDOTABaseAbility>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTABaseAbility::CEntityInstanceEntityClass::ConstructInstance(
        CDOTABaseAbility::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTABaseAbility::CDOTABaseAbility(p);
  return p;
}


// CDOTABaseAbility::GetEntityClassInternal  (line 29, @0x00000000024604d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTABaseAbility>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_01.cpp
// strings: "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass, CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTABaseAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (11 total)
CEntityClass *__cdecl CDOTABaseAbility::GetEntityClassInternal()
{
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass) != 0 )
  {
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_designerName.u.m_Id = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass._vptr_CEntityClass = off_3F79390;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_ComponentOffsets.m_Size = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_AllHelpers.m_Size = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classInputs.m_Size = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classOutputs.m_Size = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_requiredEHandle.m_Index = -1;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_hNetworkSerializer = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pBaseClassInfo = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pClassInfo = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_flags = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_nAllHelpersFlags = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pScriptClassDesc = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pInputs = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_nInputCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pOutputs = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_nOutputCount = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pGameClass = 0;
    CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass._vptr_CEntityClass = off_40D51F0;
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass);
    __cxa_atexit(
      CDOTABaseAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTABaseAbilityClass != 0 )
    return &CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass;
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
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
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
      "CDOTABaseAbility",
      "dota_base_ability",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  }
  CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pClassInfo = &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo;
  CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pBaseClassInfo = CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTABaseAbilityClass = &CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass;
  CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo.m_pClass = &CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass;
  CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass.m_pScriptClassDesc = GetScriptDesc<CDOTABaseAbility>(0);
  g_pEntityCDOTABaseAbilityClass->m_pComponentOverrides = 0;
  return &CDOTABaseAbility::GetEntityClassInternal(void)::g_EntityCDOTABaseAbilityClass;
}


// CDOTABaseAbility::Script_GetAbilityKeyValues  (line 81, @0x000000000245b740, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, Get, GetAbilityData, GetAbilityKeyValues, GetPublicScriptScope, GetVM, TakeOwnership
// calls: Recursive_ConvertKeyValuesToTable, CEntityInstance::CreatePublicScriptScope, CDOTABaseAbility::LoadAbilityData, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
__int64 __fastcall CDOTABaseAbility::Script_GetAbilityKeyValues(__int64 a1, CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  KeyValues *m_pKVData; // r13
  IScriptVM *v6; // r12

  *(a1 + 8) = 0;
  *(a1 + 10) = 0;
  *a1 = 0;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
      return a1;
  }
  m_pKVData = m_pAbilityData->m_pKVData;
  if ( m_pKVData == 0 )
    return a1;
  if ( this->m_pEntity->m_hPublicScope.m_hScope == 0 )
    CEntityInstance::CreatePublicScriptScope(this, 0);
  v6 = g_pScriptVM;
  if ( g_pScriptVM == 0 )
    return a1;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, a1);
  if ( *a1 != 0 )
  {
    Recursive_ConvertKeyValuesToTable(m_pKVData, v6, *a1);
    if ( *(a1 + 8) != 31 )
      return a1;
  }
  else if ( *(a1 + 8) != 31 )
  {
    return a1;
  }
  *(a1 + 8) = 36;
  return a1;
}


// CDOTABaseAbility::Script_GetCaster  (line 103, @0x0000000002459480, libserver.so)  // inlines: CEntityHandle, EntityToHScript, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTABaseAbility::Script_GetCaster(CDOTABaseAbility *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  HSCRIPT result; // rax
  CEntityInstance *m_pInstance; // rbx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 || v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  result = 0;
  if ( v5->m_pInstance != 0 )
  {
    result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    if ( result == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5->m_pInstance, 0);
      return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  return result;
}


// CDOTABaseAbility::IsReflectable  (line 106, @0x0000000002455880, libserver.so)
bool __fastcall CDOTABaseAbility::IsReflectable(CDOTABaseAbility *const this)
{
  return !this->m_bReflection;
}


// CDOTABaseAbility::IsReflectionDelayed  (line 107, @0x0000000002455890, libserver.so)
bool __fastcall CDOTABaseAbility::IsReflectionDelayed(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::CopyAbilityState  (line 108, @0x00000000024558a0, libserver.so)
void __fastcall CDOTABaseAbility::CopyAbilityState(CDOTABaseAbility *const this, CDOTABaseAbility *pAbilityCopy)
{
  ;
}


// CDOTABaseAbility::GetGestureBasedActivity  (line 115, @0x00000000024558b0, libserver.so)
Activity __fastcall CDOTABaseAbility::GetGestureBasedActivity(CDOTABaseAbility *const this)
{
  return -1;
}


// CDOTABaseAbility::Script_GetCursorTarget  (line 119, @0x000000000245a3e0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDOTABaseAbility::GetCursorTarget, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTABaseAbility::Script_GetCursorTarget(CDOTABaseAbility *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // [rsp+8h] [rbp-8h]

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget == 0 )
    return 0;
  if ( CursorTarget->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return CursorTarget->m_pEntity->m_hPublicScope.m_hScope;
  v3 = CursorTarget;
  CEntityInstance::CreatePublicScriptScope(CursorTarget, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTABaseAbility::GetLevel  (line 124, @0x00000000024558c0, libserver.so)
int __fastcall CDOTABaseAbility::GetLevel(const CDOTABaseAbility *const this)
{
  return this->m_iLevel.m_Value;
}


// CDOTABaseAbility::IsTrained  (line 129, @0x00000000024558d0, libserver.so)
bool __fastcall CDOTABaseAbility::IsTrained(CDOTABaseAbility *const this)
{
  return this->m_iLevel.m_Value > 0;
}


// CDOTABaseAbility::GetPlaybackRateOverride  (line 132, @0x00000000024558f0, libserver.so)
float __fastcall CDOTABaseAbility::GetPlaybackRateOverride(CDOTABaseAbility *const this)
{
  return 1.0;
}


// CDOTABaseAbility::GetAbilityName  (line 135, @0x0000000002455900, libserver.so)
// strings: "<NoAbilityName>"
const char *__fastcall CDOTABaseAbility::GetAbilityName(const CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *result; // rax
  const char *m_pszAbilityName; // rdx

  m_pAbilityData = this->m_pAbilityData;
  result = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      return m_pszAbilityName;
  }
  return result;
}


// CDOTABaseAbility::GetAbilityIndex  (line 146, @0x0000000002455930, libserver.so)
int __fastcall CDOTABaseAbility::GetAbilityIndex(CDOTABaseAbility *const this)
{
  return this->m_iAbilityIndex;
}


// CDOTABaseAbility::GetAbilityType  (line 147, @0x000000000245ae60, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetAbilityType(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityType;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityType;
}


// CDOTABaseAbility::ModifyAbilityPingMessage  (line 151, @0x0000000002455940, libserver.so)
void __fastcall CDOTABaseAbility::ModifyAbilityPingMessage(
        CDOTABaseAbility *const this,
        CDOTAUserMsg_AbilityPing *const msg)
{
  ;
}


// CDOTABaseAbility::IsPassive  (line 156, @0x0000000002455950, libserver.so)
bool __fastcall CDOTABaseAbility::IsPassive(CDOTABaseAbility *const this)
{
  return ((*(this->_vptr_IHandleEntity + 251))(this) & 2) != 0;
}


// CDOTABaseAbility::IsToggle  (line 157, @0x0000000002455970, libserver.so)
bool __fastcall CDOTABaseAbility::IsToggle(CDOTABaseAbility *const this)
{
  return ((*(this->_vptr_IHandleEntity + 251))(this) & 0x200) != 0;
}


// CDOTABaseAbility::IsHidden  (line 158, @0x0000000002455990, libserver.so)
bool __fastcall CDOTABaseAbility::IsHidden(CDOTABaseAbility *const this)
{
  return this->m_bHidden.m_Value;
}


// CDOTABaseAbility::IsActivated  (line 159, @0x00000000024559a0, libserver.so)
bool __fastcall CDOTABaseAbility::IsActivated(CDOTABaseAbility *const this)
{
  return this->m_bActivated.m_Value;
}


// CDOTABaseAbility::IsRefreshable  (line 161, @0x00000000024559b0, libserver.so)
bool __fastcall CDOTABaseAbility::IsRefreshable(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::IsHiddenAbilityCastable  (line 163, @0x000000000245aea0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
bool __fastcall CDOTABaseAbility::IsHiddenAbilityCastable(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return (*(m_pAbilityData + 377) & 0x20) != 0;
}


// CDOTABaseAbility::IsCosmetic  (line 165, @0x00000000024559c0, libserver.so)
bool __fastcall CDOTABaseAbility::IsCosmetic(CDOTABaseAbility *const this, CBaseEntity *pTargetEntity)
{
  return 0;
}


// CDOTABaseAbility::Script_IsCosmetic  (line 166, @0x0000000002459040, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
bool __fastcall CDOTABaseAbility::Script_IsCosmetic(CDOTABaseAbility *const this, HSCRIPT hEntity)
{
  bool (__fastcall *v4)(CDOTABaseAbility *const, __int64); // r14
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v7; // rsi

  v4 = *(this->_vptr_IHandleEntity + 219);
  if ( hEntity != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hEntity, Script);
  }
  else
  {
    v7 = 0;
  }
  return v4(this, v7);
}


// CDOTABaseAbility::IsSharedWithTeammates  (line 167, @0x00000000024559d0, libserver.so)
bool __fastcall CDOTABaseAbility::IsSharedWithTeammates(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::IsGrantedByScepter  (line 168, @0x000000000245af20, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
bool __fastcall CDOTABaseAbility::IsGrantedByScepter(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return (*(m_pAbilityData + 377) & 0x10) != 0;
}


// CDOTABaseAbility::CausesAutoattack  (line 170, @0x00000000024559e0, libserver.so)
bool __fastcall CDOTABaseAbility::CausesAutoattack(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::ToggleAutoCast  (line 175, @0x00000000024581f0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseAbility::ToggleAutoCast(CDOTABaseAbility *const this)
{
  bool v2; // r12

  v2 = !this->m_bAutoCastState.m_Value;
  if ( this->m_bAutoCastState.m_Value != v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 836, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAutoCastState.m_Value = v2;
  }
}


// CDOTABaseAbility::GetAutoCastState  (line 176, @0x00000000024559f0, libserver.so)
bool __fastcall CDOTABaseAbility::GetAutoCastState(CDOTABaseAbility *const this)
{
  return this->m_bAutoCastState.m_Value;
}


// CDOTABaseAbility::IsItem  (line 179, @0x0000000002455a00, libserver.so)
bool __fastcall CDOTABaseAbility::IsItem(const CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::IsAlertableItem  (line 180, @0x0000000002455a10, libserver.so)
bool __fastcall CDOTABaseAbility::IsAlertableItem(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::GetChannelStartTime  (line 186, @0x0000000002455a20, libserver.so)
float __fastcall CDOTABaseAbility::GetChannelStartTime(CDOTABaseAbility *const this)
{
  return this->m_flChannelStartTime.m_Value;
}


// CDOTABaseAbility::Script_GetCastRange  (line 193, @0x00000000024590c0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>
int __fastcall CDOTABaseAbility::Script_GetCastRange(
        CDOTABaseAbility *const this,
        const Vector *const vLocation,
        HSCRIPT hTarget)
{
  int (__fastcall *v6)(CDOTABaseAbility *const, const Vector *const, __int64); // rcx
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int (__fastcall *v12)(CDOTABaseAbility *const, const Vector *const, __int64); // [rsp+8h] [rbp-38h]

  v6 = *(this->_vptr_IHandleEntity + 226);
  if ( hTarget != 0
    && (v12 = *(this->_vptr_IHandleEntity + 226),
        v7 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        v9 = v7(g_pScriptVM, hTarget, Script),
        v6 = v12,
        v9 != 0)
    && *(v9 + 339) != 0 )
  {
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  return v6(this, vLocation, v10);
}


// CDOTABaseAbility::GetCastRangeBuffer  (line 195, @0x000000000245af60, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetCastRangeBuffer(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_nCastRangeBuffer;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_nCastRangeBuffer;
}


// CDOTABaseAbility::GetEffectiveCastRange  (line 197, @0x0000000002455a30, libserver.so)
int __fastcall CDOTABaseAbility::GetEffectiveCastRange(
        CDOTABaseAbility *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int v4; // r12d

  v4 = (*(this->_vptr_IHandleEntity + 226))(this, vLocation, pTarget);
  return v4 + (*(this->_vptr_IHandleEntity + 228))(this);
}


// CDOTABaseAbility::GetEffectiveCastRangeWithBuffer  (line 198, @0x0000000002455a60, libserver.so)
int __fastcall CDOTABaseAbility::GetEffectiveCastRangeWithBuffer(
        CDOTABaseAbility *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int v4; // r12d

  v4 = (*(this->_vptr_IHandleEntity + 229))(this, vLocation, pTarget);
  return v4 + (*(this->_vptr_IHandleEntity + 227))(this);
}


// CDOTABaseAbility::ContinueCasting  (line 202, @0x0000000002455a90, libserver.so)
bool __fastcall CDOTABaseAbility::ContinueCasting(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::GetChannelAnimation  (line 204, @0x0000000002455aa0, libserver.so)
Activity __fastcall CDOTABaseAbility::GetChannelAnimation(CDOTABaseAbility *const this)
{
  return -1;
}


// CDOTABaseAbility::GetAnimationIgnoresModelScale  (line 205, @0x000000000245b400, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
bool __fastcall CDOTABaseAbility::GetAnimationIgnoresModelScale(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return (*(m_pAbilityData + 377) & 0x40) != 0;
}


// CDOTABaseAbility::SetOverrideCastPoint  (line 207, @0x0000000002458240, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CDOTABaseAbility::SetOverrideCastPoint(CDOTABaseAbility *const this, double a2, float flCastPoint)
{
  float flCastPointa; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flOverrideCastPoint.m_Value )
  {
    flCastPointa = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 848, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flCastPoint);
    this->m_flOverrideCastPoint.m_Value = flCastPointa;
  }
}


// CDOTABaseAbility::GetModifierValue  (line 209, @0x000000000245afb0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
float __fastcall CDOTABaseAbility::GetModifierValue(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_flModifierValue;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_flModifierValue;
}


// CDOTABaseAbility::GetModifierValueBonus  (line 210, @0x000000000245b000, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
float __fastcall CDOTABaseAbility::GetModifierValueBonus(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_flModifierValueBonus;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_flModifierValueBonus;
}


// CDOTABaseAbility::SetRefCountsModifiers  (line 212, @0x0000000002455ab0, libserver.so)
void __fastcall CDOTABaseAbility::SetRefCountsModifiers(CDOTABaseAbility *const this, bool bRefCounts)
{
  this->m_bRefCountsModifiers = bRefCounts;
}


// CDOTABaseAbility::IncrementModifierRefCount  (line 215, @0x0000000002455ac0, libserver.so)
void __fastcall CDOTABaseAbility::IncrementModifierRefCount(CDOTABaseAbility *const this)
{
  ++this->m_iModifierRefCount;
}


// CDOTABaseAbility::DecrementModifierRefCount  (line 216, @0x0000000002455ad0, libserver.so)
void __fastcall CDOTABaseAbility::DecrementModifierRefCount(CDOTABaseAbility *const this)
{
  --this->m_iModifierRefCount;
}


// CDOTABaseAbility::NumModifiersUsingAbility  (line 217, @0x0000000002455ae0, libserver.so)
int __fastcall CDOTABaseAbility::NumModifiersUsingAbility(CDOTABaseAbility *const this)
{
  return this->m_iModifierRefCount;
}


// CDOTABaseAbility::IsFullyCastable  (line 219, @0x0000000002459be0, libserver.so)
// calls: CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// callers: CDOTA_BotMode_Attack_BountyHunter::GetAttackScore, CDOTA_Bot_AbilityUsage_Bane_BrainSap::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Luna_LucentBeam::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lich_FrostNova::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lich_FrostArmor::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lina_DragonSlave::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::GetCurrentUsageDesire, CDOTA_Bot_Hero_SandKing::IsSavingBlink (18 total)
bool __fastcall CDOTABaseAbility::IsFullyCastable(CDOTABaseAbility *const this)
{
  return this->m_iLevel.m_Value > 0
      && (*(this->_vptr_IHandleEntity + 245))(this) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(this)
      && CDOTABaseAbility::IsOwnersGoldEnough(this, -1);
}


// CDOTABaseAbility::IsAttributeBonus  (line 221, @0x0000000002455af0, libserver.so)
bool __fastcall CDOTABaseAbility::IsAttributeBonus(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::ProcsMagicStick  (line 223, @0x0000000002455b00, libserver.so)
bool __fastcall CDOTABaseAbility::ProcsMagicStick(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::GetPotentialAbuseType  (line 224, @0x0000000002455b10, libserver.so)
EAbilityAbuseType __fastcall CDOTABaseAbility::GetPotentialAbuseType(CDOTABaseAbility *const this)
{
  return EAbilityAbuseType::k_EAbilityAbuseType_None;
}


// CDOTABaseAbility::GetSharedCooldownName  (line 233, @0x000000000245b210, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
// strings: "<NoSharedCooldownName>"
const char *__fastcall CDOTABaseAbility::GetSharedCooldownName(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *result; // rax
  const char *m_pszAbilityName; // rdx

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  result = m_pAbilityData->m_pszSharedCooldownName;
  if ( result == 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    result = "<NoSharedCooldownName>";
    if ( m_pszAbilityName != 0 )
      return m_pszAbilityName;
  }
  return result;
}


// CDOTABaseAbility::ShouldUseResources  (line 244, @0x0000000002455b20, libserver.so)
bool __fastcall CDOTABaseAbility::ShouldUseResources(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::GetDamage  (line 260, @0x00000000024572d0, libserver.so)
// calls: Warning
// strings: "HEY YOU, CALL GetAbilityDamage INSTEAD!\n"
float __fastcall CDOTABaseAbility::GetDamage(CDOTABaseAbility *const this)
{
  Warning("HEY YOU, CALL GetAbilityDamage INSTEAD!\n");
  return 0.0;
}


// CDOTABaseAbility::Script_GetCloneSource  (line 269, @0x0000000002458d20, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTABaseAbility::Script_GetCloneSource(CDOTABaseAbility *const this)
{
  CEntityInstance *v1; // rax
  CEntityInstance *v3; // [rsp+8h] [rbp-8h]

  v1 = (*(this->_vptr_IHandleEntity + 250))(this);
  if ( v1 == 0 )
    return 0;
  if ( v1->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v1->m_pEntity->m_hPublicScope.m_hScope;
  v3 = v1;
  CEntityInstance::CreatePublicScriptScope(v1, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTABaseAbility::UpdateTransmitState  (line 275, @0x00000000024573f0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTABaseAbility::UpdateTransmitState(CDOTABaseAbility *const this)
{
  return CBaseEntity::SetTransmitState(this, 0);
}


// CDOTABaseAbility::GetToggleState  (line 276, @0x0000000002455b30, libserver.so)
bool __fastcall CDOTABaseAbility::GetToggleState(CDOTABaseAbility *const this)
{
  return this->m_bToggleState.m_Value;
}


// CDOTABaseAbility::GetBehavior  (line 277, @0x000000000245b050, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetBehavior(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityBehavior;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityBehavior;
}


// CDOTABaseAbility::GetAbilityTargetTeam  (line 278, @0x000000000245b340, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetAbilityTargetTeam(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityTargetTeam;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityTargetTeam;
}


// CDOTABaseAbility::GetAbilityTargetType  (line 279, @0x000000000245b0d0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetAbilityTargetType(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityTargetType;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityTargetType;
}


// CDOTABaseAbility::GetAbilityTargetFlags  (line 280, @0x000000000245b300, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetAbilityTargetFlags(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityTargetFlags;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityTargetFlags;
}


// CDOTABaseAbility::GetAbilityDamageType  (line 281, @0x000000000245b110, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetAbilityDamageType(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityDamageType;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityDamageType;
}


// CDOTABaseAbility::GetMaxLevel  (line 284, @0x000000000245b1d0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetMaxLevel(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iMaxLevel;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iMaxLevel;
}


// CDOTABaseAbility::GetCurrentAbilityDamageType  (line 287, @0x000000000245b150, libserver.so)  // inlines: GetAbilityDamageType, GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetCurrentAbilityDamageType(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityDamageType;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityDamageType;
}


// CDOTABaseAbility::GetCurrentAbilityImmunityType  (line 288, @0x000000000245b190, libserver.so)  // inlines: GetAbilityData, GetAbilityImmunityType
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetCurrentAbilityImmunityType(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityImmunityType;
  CDOTABaseAbility::LoadAbilityData(this, 0);
  return this->m_pAbilityData->m_iAbilityImmunityType;
}


// CDOTABaseAbility::GetAllowedTargetBehavior  (line 289, @0x0000000002455b40, libserver.so)
int __fastcall CDOTABaseAbility::GetAllowedTargetBehavior(CDOTABaseAbility *const this)
{
  return (*(this->_vptr_IHandleEntity + 251))(this);
}


// CDOTABaseAbility::GetCustomCastError  (line 292, @0x0000000002455b60, libserver.so)
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTABaseAbility::GetCustomCastError(CDOTABaseAbility *const this, CDOTA_BaseNPC *pTarget)
{
  return "CUSTOM ERROR";
}


// CDOTABaseAbility::GetCustomCastError  (line 295, @0x0000000002455b70, libserver.so)
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTABaseAbility::GetCustomCastError(
        CDOTABaseAbility *const this,
        const Vector *const vLocation)
{
  return "CUSTOM ERROR";
}


// CDOTABaseAbility::CastFilterResult  (line 297, @0x0000000002455b80, libserver.so)
int __fastcall CDOTABaseAbility::CastFilterResult(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::GetCustomCastError  (line 298, @0x0000000002455b90, libserver.so)
// strings: "CUSTOM ERROR"
const char *__fastcall CDOTABaseAbility::GetCustomCastError(CDOTABaseAbility *const this)
{
  return "CUSTOM ERROR";
}


// CDOTABaseAbility::GetIntrinsicModifier  (line 301, @0x0000000002455ba0, libserver.so)
CDOTA_Buff *__fastcall CDOTABaseAbility::GetIntrinsicModifier(CDOTABaseAbility *const this)
{
  return this->m_pIntrinsicBuff.m_pObject;
}


// CDOTABaseAbility::OnSpellStart  (line 306, @0x0000000002455bb0, libserver.so)
void __fastcall CDOTABaseAbility::OnSpellStart(CDOTABaseAbility *const this)
{
  ;
}


// CDOTABaseAbility::OnChannelFinish  (line 307, @0x0000000002455bc0, libserver.so)
void __fastcall CDOTABaseAbility::OnChannelFinish(CDOTABaseAbility *const this, bool bInterrupted)
{
  ;
}


// CDOTABaseAbility::OnParentTakeDamage  (line 318, @0x0000000002455bd0, libserver.so)
void __fastcall CDOTABaseAbility::OnParentTakeDamage(
        CDOTABaseAbility *const this,
        CDOTA_BaseNPC *pAttacker,
        int iDamage)
{
  ;
}


// CDOTABaseAbility::OnHeroDiedNearby  (line 319, @0x0000000002455be0, libserver.so)
void __fastcall CDOTABaseAbility::OnHeroDiedNearby(CDOTABaseAbility *const this, KeyValues *pKV)
{
  ;
}


// CDOTABaseAbility::GetIntrinsicModifierName  (line 320, @0x0000000002455bf0, libserver.so)
const char *__fastcall CDOTABaseAbility::GetIntrinsicModifierName(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::ResetToggleOnRespawn  (line 321, @0x0000000002455c00, libserver.so)
bool __fastcall CDOTABaseAbility::ResetToggleOnRespawn(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::OnHeroLevelUp  (line 322, @0x0000000002455c10, libserver.so)
void __fastcall CDOTABaseAbility::OnHeroLevelUp(CDOTABaseAbility *const this)
{
  ;
}


// CDOTABaseAbility::OnInventoryContentsChanged  (line 323, @0x000000000245a430, libserver.so)
// calls: CDOTABaseAbility::InitBaseValues
void __fastcall CDOTABaseAbility::OnInventoryContentsChanged(CDOTABaseAbility *const this)
{
  CDOTABaseAbility::InitBaseValues(this);
}


// CDOTABaseAbility::OnItemEquipped  (line 324, @0x0000000002455c20, libserver.so)
void __fastcall CDOTABaseAbility::OnItemEquipped(CDOTABaseAbility *const this, CDOTA_Item *pItem)
{
  ;
}


// CDOTABaseAbility::OnHeroCalculateStatBonus  (line 325, @0x0000000002455c30, libserver.so)
void __fastcall CDOTABaseAbility::OnHeroCalculateStatBonus(CDOTABaseAbility *const this)
{
  ;
}


// CDOTABaseAbility::HeroXPChange  (line 326, @0x0000000002455c40, libserver.so)
__int64 __fastcall CDOTABaseAbility::HeroXPChange(CDOTABaseAbility *const this, double a2, float flXP)
{
  return 0;
}


// CDOTABaseAbility::GetAdditionalOwnedUnits  (line 327, @0x0000000002455c50, libserver.so)
void __fastcall CDOTABaseAbility::GetAdditionalOwnedUnits(
        CDOTABaseAbility *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *vecOwnedUnits)
{
  ;
}


// CDOTABaseAbility::OnAbilityUpgrade  (line 328, @0x000000000245a450, libserver.so)
// calls: CDOTABaseAbility::InitBaseValues
void __fastcall CDOTABaseAbility::OnAbilityUpgrade(CDOTABaseAbility *const this, CDOTABaseAbility *pAbility)
{
  CDOTABaseAbility::InitBaseValues(this);
}


// CDOTABaseAbility::OnProjectileHit  (line 330, @0x0000000002455c60, libserver.so)
__int64 __fastcall CDOTABaseAbility::OnProjectileHit(
        CDOTABaseAbility *const this,
        EHANDLE hTarget,
        const Vector *const vLocation)
{
  return 0;
}


// CDOTABaseAbility::OnProjectileHit_ExtraData  (line 331, @0x0000000002455c70, libserver.so)
__int64 __fastcall CDOTABaseAbility::OnProjectileHit_ExtraData(
        CDOTABaseAbility *const this,
        EHANDLE hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  return 0;
}


// CDOTABaseAbility::OnProjectileThink  (line 332, @0x0000000002455c80, libserver.so)
void __fastcall CDOTABaseAbility::OnProjectileThink(CDOTABaseAbility *const this, const Vector *const vLocation)
{
  ;
}


// CDOTABaseAbility::OnProjectileThink  (line 333, @0x0000000002455c90, libserver.so)
void __fastcall CDOTABaseAbility::OnProjectileThink(CDOTABaseAbility *const this, int iProjectileHandle)
{
  ;
}


// CDOTABaseAbility::OnProjectileThink_ExtraData  (line 334, @0x0000000002455ca0, libserver.so)
void __fastcall CDOTABaseAbility::OnProjectileThink_ExtraData(
        CDOTABaseAbility *const this,
        int iProjectileIndex,
        KeyValues *pExtraData)
{
  ;
}


// CDOTABaseAbility::OnProjectileThink_ExtraData  (line 335, @0x0000000002455cb0, libserver.so)
void __fastcall CDOTABaseAbility::OnProjectileThink_ExtraData(
        CDOTABaseAbility *const this,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  ;
}


// CDOTABaseAbility::OnProjectileThink_ExtraData  (line 336, @0x0000000002455cc0, libserver.so)
void __fastcall CDOTABaseAbility::OnProjectileThink_ExtraData(
        CDOTABaseAbility *const this,
        int iProjectileIndex,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  ;
}


// CDOTABaseAbility::ShouldSpeakAbilityConcept  (line 343, @0x0000000002455cd0, libserver.so)
bool __fastcall CDOTABaseAbility::ShouldSpeakAbilityConcept(CDOTABaseAbility *const this, int iConcept)
{
  return 1;
}


// CDOTABaseAbility::GetConceptRecipientType  (line 344, @0x0000000002455ce0, libserver.so)
int __fastcall CDOTABaseAbility::GetConceptRecipientType(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::SpeakTrigger  (line 345, @0x0000000002455cf0, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTABaseAbility::SpeakTrigger(CDOTABaseAbility *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_CAST;
}


// CDOTABaseAbility::SetInAbilityPhase  (line 348, @0x00000000024581b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseAbility::SetInAbilityPhase(CDOTABaseAbility *const this, bool bInAbilityPhase)
{
  if ( this->m_bInAbilityPhase.m_Value != bInAbilityPhase )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInAbilityPhase.m_Value = bInAbilityPhase;
  }
}


// CDOTABaseAbility::IsInAbilityPhase  (line 349, @0x0000000002455d00, libserver.so)
bool __fastcall CDOTABaseAbility::IsInAbilityPhase(CDOTABaseAbility *const this)
{
  return this->m_bInAbilityPhase.m_Value;
}


// CDOTABaseAbility::AbilitySuppressesTaunt  (line 350, @0x0000000002455d10, libserver.so)
bool __fastcall CDOTABaseAbility::AbilitySuppressesTaunt(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::IsChanneling  (line 352, @0x0000000002455d20, libserver.so)
bool __fastcall CDOTABaseAbility::IsChanneling(CDOTABaseAbility *const this)
{
  return this->m_bChanneling;
}


// CDOTABaseAbility::RequiresFacing  (line 354, @0x0000000002455d30, libserver.so)
bool __fastcall CDOTABaseAbility::RequiresFacing(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::GetAssociatedPrimaryAbilities  (line 357, @0x0000000002455d40, libserver.so)
const char *__fastcall CDOTABaseAbility::GetAssociatedPrimaryAbilities(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::GetAssociatedSecondaryAbilities  (line 358, @0x0000000002455d50, libserver.so)
const char *__fastcall CDOTABaseAbility::GetAssociatedSecondaryAbilities(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::IsStealable  (line 360, @0x0000000002455d60, libserver.so)
bool __fastcall CDOTABaseAbility::IsStealable(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::IsHiddenWhenStolen  (line 361, @0x0000000002455d70, libserver.so)
bool __fastcall CDOTABaseAbility::IsHiddenWhenStolen(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::SetStolen  (line 363, @0x00000000024582a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseAbility::SetStolen(CDOTABaseAbility *const this, bool bStolen)
{
  if ( this->m_bStolen.m_Value != bStolen )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStolen.m_Value = bStolen;
  }
}


// CDOTABaseAbility::IsStolen  (line 364, @0x0000000002455d80, libserver.so)
bool __fastcall CDOTABaseAbility::IsStolen(CDOTABaseAbility *const this)
{
  return this->m_bStolen.m_Value;
}


// CDOTABaseAbility::OnStolen  (line 366, @0x0000000002455d90, libserver.so)
void __fastcall CDOTABaseAbility::OnStolen(CDOTABaseAbility *const this, CDOTABaseAbility *pSourceAbility)
{
  ;
}


// CDOTABaseAbility::PlaysDefaultAnimWhenStolen  (line 369, @0x0000000002455da0, libserver.so)
bool __fastcall CDOTABaseAbility::PlaysDefaultAnimWhenStolen(CDOTABaseAbility *const this)
{
  return (((*(this->_vptr_IHandleEntity + 251))(this) >> 7) ^ 1) & 1;
}


// CDOTABaseAbility::GetStolenActivityModifier  (line 370, @0x0000000002455dc0, libserver.so)
const char *__fastcall CDOTABaseAbility::GetStolenActivityModifier(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::ShouldNeutralCast  (line 374, @0x0000000002455dd0, libserver.so)
bool __fastcall CDOTABaseAbility::ShouldNeutralCast(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::GetNeutralCastType  (line 375, @0x0000000002455de0, libserver.so)
int __fastcall CDOTABaseAbility::GetNeutralCastType(CDOTABaseAbility *const this)
{
  return -1;
}


// CDOTABaseAbility::GetNeutralCastTarget  (line 376, @0x0000000002455df0, libserver.so)  // inlines: CEntityHandle, CHandle
uint32 *__fastcall CDOTABaseAbility::GetNeutralCastTarget(uint32 *a1, CDOTABaseAbility *const this)
{
  *a1 = this->m_hNeutralCastTarget.m_Index;
  return a1;
}


// CDOTABaseAbility::WantsToNeutralCast  (line 377, @0x0000000002455e10, libserver.so)
bool __fastcall CDOTABaseAbility::WantsToNeutralCast(CDOTABaseAbility *const this)
{
  return this->m_bWantsToNeutralCast;
}


// CDOTABaseAbility::SetWantsToNeutralCast  (line 378, @0x0000000002455e20, libserver.so)
void __fastcall CDOTABaseAbility::SetWantsToNeutralCast(CDOTABaseAbility *const this, bool bWantsToNeutralCast)
{
  this->m_bWantsToNeutralCast = bWantsToNeutralCast;
}


// CDOTABaseAbility::SetNeutralCastTarget  (line 379, @0x0000000002455e30, libserver.so)  // inlines: operator=
void __fastcall CDOTABaseAbility::SetNeutralCastTarget(CDOTABaseAbility *const this, uint32 *hTarget)
{
  this->m_hNeutralCastTarget.m_Index = *hTarget;
}


// CDOTABaseAbility::DoDesiredCast  (line 381, @0x0000000002455e40, libserver.so)
void __fastcall CDOTABaseAbility::DoDesiredCast(CDOTABaseAbility *const this)
{
  ;
}


// CDOTABaseAbility::RefreshCharges  (line 383, @0x0000000002455e50, libserver.so)
void __fastcall CDOTABaseAbility::RefreshCharges(CDOTABaseAbility *const this)
{
  ;
}


// CDOTABaseAbility::OnVectorTargetLocation  (line 390, @0x0000000002455e60, libserver.so)
void __fastcall CDOTABaseAbility::OnVectorTargetLocation(CDOTABaseAbility *const this)
{
  ;
}


// CDOTABaseAbility::GetLevelSpecialValueFor<float>  (line 393, @0x00000000024a5ac0, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetInt, HasAbilityTuningValueFilter, HasScriptFilter, IsConsideredHero, RunAbilityTuningValueFilter, entindex, operator float, operator int
// calls: CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTABaseAbility::GetEffectiveLevel, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat, VScriptFilter::RunScriptFilter (17 total)
// callers: CDOTA_BaseNPC::GetAbilityModifierValues, CDOTA_Ability_Zombie_Berserk::OnSpellStart, CDOTA_Ability_Creature_Fire_Breath::OnSpellStart, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Modifier_Corpselord_Revive::OnCreated, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTA_Modifier_FillerThinker::OnIntervalThink, CDOTA_Ability_OgreMagi_FrostArmor::OnSpellStart, CDOTA_Ability_DarkTrollWarlord_Ensnare::OnSpellStart, CDOTA_Ability_DarkTrollWarlord_RaiseDead::OnSpellStart, CDOTA_Ability_AncientGolem_Rockslide::OnProjectileHit, CDOTA_Ability_MudGolem_HurlBoulder::OnProjectileHit (1041 total)
// strings: "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
float __fastcall CDOTABaseAbility::GetLevelSpecialValueFor<float>(
        CDOTABaseAbility *const this,
        const char *szName,
        int nLevel,
        bool bSkipFilter)
{
  int EffectiveLevel; // r15d
  DOTASpecialAbility_t *SpecialAbility; // r12
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v11; // edx
  bool v12; // cc
  fieldtype_t m_FieldType; // eax
  int Int; // r15d
  fieldtype_t v15; // eax
  float result; // xmm0_4
  fieldtype_t *v17; // r15
  __int16 v18; // ax
  int v19; // r15d
  fieldtype_t *v20; // r15
  float v21; // xmm0_4
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  CEntityIndex v25; // eax
  CEntityIndex v26; // eax
  float v27; // xmm1_4
  float v28; // xmm1_4
  fieldtype_t v29; // eax
  KeyValues *v30; // rbx
  KeyValues *pMem; // [rsp+0h] [rbp-50h]
  float flValue; // [rsp+Ch] [rbp-44h]
  float flMultiply; // [rsp+10h] [rbp-40h] BYREF
  float flAdd; // [rsp+14h] [rbp-3Ch] BYREF
  KeyValues *pFilterKeys; // [rsp+18h] [rbp-38h] BYREF

  EffectiveLevel = nLevel;
  if ( nLevel == -1 )
  {
    EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
    if ( EffectiveLevel == -1 )
      return 0.0;
  }
  SpecialAbility = CDOTABaseAbility::GetSpecialAbility(this, szName);
  if ( SpecialAbility == 0 )
    return 0.0;
  flMultiply = 1.0;
  flAdd = 0.0;
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::GetAbilityModifierValues(Caster, szName, &flMultiply, &flAdd);
  }
  m_nCount = SpecialAbility->m_nCount;
  v11 = m_nCount - 1;
  v12 = m_nCount <= EffectiveLevel;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( v12 )
    EffectiveLevel = v11;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v20 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    if ( *(v20 + 8) == 34 )
      v21 = *(v20 + 1);
    else
      v21 = *(v20 + 2);
    Int = 0;
    flValue = (v21 * flMultiply) + flAdd;
  }
  else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
  {
    v17 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    v18 = *(v17 + 8);
    if ( v18 == 1 )
    {
      v19 = *(v17 + 2);
    }
    else if ( v18 == 34 )
    {
      v19 = *(v17 + 1);
    }
    else
    {
      v19 = *(v17 + 2);
    }
    flValue = 0.0;
    Int = ((v19 * flMultiply) + flAdd);
  }
  else
  {
    Int = 0;
    flValue = 0.0;
  }
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && !bSkipFilter
    && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 3) != 0
    && g_pGameRules != 0 )
  {
    GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
    v23 = GameModeEntity;
    if ( GameModeEntity != 0
      && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
      && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
    {
      pMem = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(pMem, "AbilityValueData");
      pFilterKeys = pMem;
      if ( CDOTABaseAbility::GetCaster(this) != 0 )
      {
        v24 = CDOTABaseAbility::GetCaster(this);
        v25.m_Data = CEntityInstance::GetEntityIndex(v24).m_Data;
        KeyValues::SetInt(pFilterKeys, "entindex_caster_const", v25.m_Data);
      }
      v26.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      KeyValues::SetInt(pFilterKeys, "entindex_ability_const", v26.m_Data);
      KeyValues::SetString(pFilterKeys, "value_name_const", szName);
      KeyValues::SetFloat(pFilterKeys, "value", v27);
      if ( VScriptFilter::RunScriptFilter(v23 + 63, &pFilterKeys) )
      {
        v29 = SpecialAbility->m_FieldType;
        if ( v29 == fieldtype_t::FIELD_FLOAT )
        {
          flValue = KeyValues::GetFloat(pFilterKeys, "value", v28);
        }
        else if ( v29 == fieldtype_t::FIELD_INTEGER )
        {
          Int = KeyValues::GetInt(pFilterKeys, "value", Int);
        }
      }
      v30 = pFilterKeys;
      if ( pFilterKeys != 0 )
      {
        KeyValues::~KeyValues(pFilterKeys);
        KeyValues::operator delete(v30);
      }
    }
  }
  v15 = SpecialAbility->m_FieldType;
  result = flValue;
  if ( v15 != fieldtype_t::FIELD_FLOAT )
  {
    if ( v15 == fieldtype_t::FIELD_INTEGER )
      return Int;
    return 0.0;
  }
  return result;
}


// CDOTABaseAbility::GetLevelSpecialValueFor<int>  (line 393, @0x00000000024a5e10, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetInt, HasAbilityTuningValueFilter, HasScriptFilter, IsConsideredHero, RunAbilityTuningValueFilter, entindex, operator float, operator int
// calls: CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTABaseAbility::GetEffectiveLevel, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat, VScriptFilter::RunScriptFilter (17 total)
// callers: CDOTA_Ability_Throw_Snowball::OnSpellStart, CDOTA_Ability_Throw_Coal::OnSpellStart, CDOTA_Ability_Healing_Campfire::OnSpellStart, CDOTA_Ability_Creature_Fire_Breath::OnSpellStart, CDOTA_Item_UpgradedBarricade::OnSpellStart, CDOTA_Item_GreaterClarity::OnSpellStart, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Modifier_Zombie_Berserk::OnCreated, CDOTA_Modifier_UpgradedBarricade::OnCreated, CDOTA_Modifier_Corpselord_Revive::OnCreated, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, DotaRetrieveAbilityValue<int> (1767 total)
// strings: "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
int __fastcall CDOTABaseAbility::GetLevelSpecialValueFor<int>(
        CDOTABaseAbility *const this,
        const char *szName,
        int nLevel,
        bool bSkipFilter)
{
  int EffectiveLevel; // r14d
  DOTASpecialAbility_t *SpecialAbility; // r12
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v11; // edx
  bool v12; // cc
  fieldtype_t m_FieldType; // eax
  int Int; // r14d
  fieldtype_t v15; // edx
  int result; // eax
  fieldtype_t *v17; // r14
  __int16 v18; // ax
  int v19; // r14d
  fieldtype_t *v20; // r14
  float v21; // xmm0_4
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v23; // r15
  CDOTA_BaseNPC *v24; // rax
  CEntityIndex v25; // eax
  CEntityIndex v26; // eax
  float v27; // xmm1_4
  float v28; // xmm1_4
  fieldtype_t v29; // eax
  KeyValues *v30; // rbx
  KeyValues *pMem; // [rsp+0h] [rbp-50h]
  float flValue; // [rsp+Ch] [rbp-44h]
  float flMultiply; // [rsp+10h] [rbp-40h] BYREF
  float flAdd; // [rsp+14h] [rbp-3Ch] BYREF
  KeyValues *pFilterKeys; // [rsp+18h] [rbp-38h] BYREF

  EffectiveLevel = nLevel;
  if ( nLevel == -1 )
  {
    EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
    if ( EffectiveLevel == -1 )
      return 0;
  }
  SpecialAbility = CDOTABaseAbility::GetSpecialAbility(this, szName);
  if ( SpecialAbility == 0 )
    return 0;
  flMultiply = 1.0;
  flAdd = 0.0;
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::GetAbilityModifierValues(Caster, szName, &flMultiply, &flAdd);
  }
  m_nCount = SpecialAbility->m_nCount;
  v11 = m_nCount - 1;
  v12 = m_nCount <= EffectiveLevel;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( v12 )
    EffectiveLevel = v11;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v20 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    if ( *(v20 + 8) == 34 )
      v21 = *(v20 + 1);
    else
      v21 = *(v20 + 2);
    Int = 0;
    flValue = (v21 * flMultiply) + flAdd;
  }
  else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
  {
    v17 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    v18 = *(v17 + 8);
    if ( v18 == 1 )
    {
      v19 = *(v17 + 2);
    }
    else if ( v18 == 34 )
    {
      v19 = *(v17 + 1);
    }
    else
    {
      v19 = *(v17 + 2);
    }
    flValue = 0.0;
    Int = ((v19 * flMultiply) + flAdd);
  }
  else
  {
    Int = 0;
    flValue = 0.0;
  }
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && !bSkipFilter
    && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 3) != 0
    && g_pGameRules != 0 )
  {
    GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
    v23 = GameModeEntity;
    if ( GameModeEntity != 0
      && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
      && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
    {
      pMem = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(pMem, "AbilityValueData");
      pFilterKeys = pMem;
      if ( CDOTABaseAbility::GetCaster(this) != 0 )
      {
        v24 = CDOTABaseAbility::GetCaster(this);
        v25.m_Data = CEntityInstance::GetEntityIndex(v24).m_Data;
        KeyValues::SetInt(pFilterKeys, "entindex_caster_const", v25.m_Data);
      }
      v26.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      KeyValues::SetInt(pFilterKeys, "entindex_ability_const", v26.m_Data);
      KeyValues::SetString(pFilterKeys, "value_name_const", szName);
      KeyValues::SetFloat(pFilterKeys, "value", v27);
      if ( VScriptFilter::RunScriptFilter(v23 + 63, &pFilterKeys) )
      {
        v29 = SpecialAbility->m_FieldType;
        if ( v29 == fieldtype_t::FIELD_FLOAT )
        {
          flValue = KeyValues::GetFloat(pFilterKeys, "value", v28);
        }
        else if ( v29 == fieldtype_t::FIELD_INTEGER )
        {
          Int = KeyValues::GetInt(pFilterKeys, "value", Int);
        }
      }
      v30 = pFilterKeys;
      if ( pFilterKeys != 0 )
      {
        KeyValues::~KeyValues(pFilterKeys);
        KeyValues::operator delete(v30);
      }
    }
  }
  v15 = SpecialAbility->m_FieldType;
  if ( v15 == fieldtype_t::FIELD_FLOAT )
    return flValue;
  result = 0;
  if ( v15 == fieldtype_t::FIELD_INTEGER )
    return Int;
  return result;
}


// CDOTABaseAbility::GetAbilityDamageToTargetOverInterval  (line 497, @0x0000000002455e70, libserver.so)
__int64 __fastcall CDOTABaseAbility::GetAbilityDamageToTargetOverInterval(
        CDOTABaseAbility *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  return 0;
}


// CDOTABaseAbility::GetSlowDuration  (line 498, @0x0000000002455e80, libserver.so)
float __fastcall CDOTABaseAbility::GetSlowDuration(CDOTABaseAbility *const this)
{
  return 0.0;
}


// CDOTABaseAbility::GetStunDuration  (line 499, @0x0000000002455e90, libserver.so)
float __fastcall CDOTABaseAbility::GetStunDuration(CDOTABaseAbility *const this)
{
  return 0.0;
}


// CDOTABaseAbility::HasBlink  (line 500, @0x0000000002455ea0, libserver.so)
bool __fastcall CDOTABaseAbility::HasBlink(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::HasMinistunOnAttack  (line 501, @0x0000000002455eb0, libserver.so)
bool __fastcall CDOTABaseAbility::HasMinistunOnAttack(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::HasSilence  (line 502, @0x0000000002455ec0, libserver.so)
bool __fastcall CDOTABaseAbility::HasSilence(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::HasInvisibility  (line 503, @0x0000000002455ed0, libserver.so)
bool __fastcall CDOTABaseAbility::HasInvisibility(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::GetAvoidRadius  (line 505, @0x0000000002455ee0, libserver.so)
float __fastcall CDOTABaseAbility::GetAvoidRadius(CDOTABaseAbility *const this)
{
  return 0.0;
}


// CDOTABaseAbility::IsAvoidMagical  (line 506, @0x0000000002455ef0, libserver.so)
bool __fastcall CDOTABaseAbility::IsAvoidMagical(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::IsAvoidPhysical  (line 507, @0x0000000002455f00, libserver.so)
bool __fastcall CDOTABaseAbility::IsAvoidPhysical(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::GetAvoidStrength  (line 508, @0x0000000002455f10, libserver.so)
float __fastcall CDOTABaseAbility::GetAvoidStrength(CDOTABaseAbility *const this, CDOTA_Bot *pBot)
{
  return 0.0;
}


// CDOTABaseAbility::WantsToChannelCancel  (line 510, @0x0000000002455f20, libserver.so)
bool __fastcall CDOTABaseAbility::WantsToChannelCancel(CDOTABaseAbility *const this)
{
  return 1;
}


// CDOTABaseAbility::ShouldUseAlternateDroppedItemModel  (line 531, @0x0000000002455f30, libserver.so)
bool __fastcall CDOTABaseAbility::ShouldUseAlternateDroppedItemModel(CDOTABaseAbility *const this)
{
  return 0;
}


// DotaRetrieveAbilityValue<int>  (line 741, @0x000000000264b770, libserver.so)  // inlines: AssignTo, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// callers: CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker::OnCreated, CDOTA_Modifier_Knockback::OnCreated, CDOTA_Modifier_BackdoorProtection::OnCreated, CDOTA_Modifier_HarpyStorm_ChainLightning::OnCreated, CDOTA_Modifier_Filler_Heal::OnCreated, CDOTA_Modifier_Greevil_Miniboss_Green_LivingArmor::OnCreated, CDOTA_Modifier_ForestTrollHighPriest_HealAutocast::OnIntervalThink, CDOTA_Modifier_DrowRanger_Marksmanship::OnCreated, CDOTA_Modifier_Razor_PlasmaField_Thinker::OnCreated, CDOTA_Modifier_HoldoutCullingBlade::OnCreated, CDOTA_Modifier_CrystalMaiden_FreezingField::OnCreated, CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnCreated (181 total)
void __fastcall DotaRetrieveAbilityValue<int>(CDOTABaseAbility *pAbility, int *const nValue, const char *pValueName)
{
  if ( pAbility != 0 )
    *nValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, pValueName, -1, 0);
  else
    *nValue = 0;
}


// DotaRetrieveAbilityValue<float>  (line 741, @0x0000000002a33900, libserver.so)  // inlines: AssignTo, GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// callers: CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnDestroy, CDOTA_Modifier_Mirana_Leap::OnCreated, CDOTA_Modifier_Kunkka_Torrent_Thinker::OnIntervalThink, CDOTA_Modifier_Nevermore_Necromastery::OnDeath, CDOTA_Modifier_Puck_DreamCoil_Thinker::OnCreated, CDOTA_Modifier_Viper_CorrosiveSkin::OnTakeDamage, CDOTA_Modifier_Nian_GreaterBash::DoBash, CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnCreated, CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::OnIntervalThink, CDOTA_Modifier_Nian_EruptionPendingThinker::OnIntervalThink, CDOTA_Modifier_Nian_Dive::OnCreated, CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnCreated (40 total)
void __fastcall DotaRetrieveAbilityValue<float>(
        CDOTABaseAbility *pAbility,
        float *const nValue,
        const char *pValueName)
{
  if ( pAbility != 0 )
    *nValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(pAbility, pValueName, -1, 0);
  else
    *nValue = 0.0;
}


