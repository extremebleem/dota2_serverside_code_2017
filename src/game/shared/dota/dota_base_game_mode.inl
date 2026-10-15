
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABaseGameMode::~CDOTABaseGameMode  (line 43, @0x000000000249ec00, libserver.so)  // inlines: ClearFilterFunction, Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~VScriptFilter
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<int, int>::Purge
void __fastcall CDOTABaseGameMode::~CDOTABaseGameMode(CDOTABaseGameMode *const this)
{
  HSCRIPT m_hFunction; // rsi
  bool v3; // zf

  m_hFunction = this->m_ItemAddedToInventoryFilter.m_hFunction;
  this->_vptr_IHandleEntity = &off_40DCBD0;
  if ( m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ItemAddedToInventoryFilter.m_hFunction = 0;
  }
  if ( this->m_ItemAddedToInventoryFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ItemAddedToInventoryFilter.m_hContext = 0;
  }
  if ( this->m_ModifierGainedFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifierGainedFilter.m_hFunction = 0;
  }
  if ( this->m_ModifierGainedFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifierGainedFilter.m_hContext = 0;
  }
  if ( this->m_AbilityTuningValueFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_AbilityTuningValueFilter.m_hFunction = 0;
  }
  if ( this->m_AbilityTuningValueFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_AbilityTuningValueFilter.m_hContext = 0;
  }
  if ( this->m_TrackingProjectileFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_TrackingProjectileFilter.m_hFunction = 0;
  }
  if ( this->m_TrackingProjectileFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_TrackingProjectileFilter.m_hContext = 0;
  }
  if ( this->m_DamageFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_DamageFilter.m_hFunction = 0;
  }
  if ( this->m_DamageFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_DamageFilter.m_hContext = 0;
  }
  if ( this->m_ExecuteOrderFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ExecuteOrderFilter.m_hFunction = 0;
  }
  if ( this->m_ExecuteOrderFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ExecuteOrderFilter.m_hContext = 0;
  }
  if ( this->m_RuneSpawnFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_RuneSpawnFilter.m_hFunction = 0;
  }
  if ( this->m_RuneSpawnFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_RuneSpawnFilter.m_hContext = 0;
  }
  if ( this->m_ModifyExperienceFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifyExperienceFilter.m_hFunction = 0;
  }
  if ( this->m_ModifyExperienceFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifyExperienceFilter.m_hContext = 0;
  }
  if ( this->m_ModifyGoldFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifyGoldFilter.m_hFunction = 0;
  }
  if ( this->m_ModifyGoldFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifyGoldFilter.m_hContext = 0;
  }
  if ( this->m_BountyRunePickupFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_BountyRunePickupFilter.m_hFunction = 0;
  }
  if ( this->m_BountyRunePickupFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_BountyRunePickupFilter.m_hContext = 0;
  }
  v3 = (this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size = 0;
  if ( !v3
    || (CUtlMemory<int,int>::Purge(&this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory),
        (this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<int,int>::Purge(&this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTABaseGameMode::~CDOTABaseGameMode  (line 43, @0x000000000249ef90, libserver.so)  // inlines: ClearFilterFunction, Purge, RemoveAll, ~CDOTABaseGameMode, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~VScriptFilter
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<int, int>::Purge
void __fastcall CDOTABaseGameMode::~CDOTABaseGameMode(CDOTABaseGameMode *const this)
{
  HSCRIPT m_hFunction; // rsi
  bool v3; // zf

  m_hFunction = this->m_ItemAddedToInventoryFilter.m_hFunction;
  this->_vptr_IHandleEntity = &off_40DCBD0;
  if ( m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ItemAddedToInventoryFilter.m_hFunction = 0;
  }
  if ( this->m_ItemAddedToInventoryFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ItemAddedToInventoryFilter.m_hContext = 0;
  }
  if ( this->m_ModifierGainedFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifierGainedFilter.m_hFunction = 0;
  }
  if ( this->m_ModifierGainedFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifierGainedFilter.m_hContext = 0;
  }
  if ( this->m_AbilityTuningValueFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_AbilityTuningValueFilter.m_hFunction = 0;
  }
  if ( this->m_AbilityTuningValueFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_AbilityTuningValueFilter.m_hContext = 0;
  }
  if ( this->m_TrackingProjectileFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_TrackingProjectileFilter.m_hFunction = 0;
  }
  if ( this->m_TrackingProjectileFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_TrackingProjectileFilter.m_hContext = 0;
  }
  if ( this->m_DamageFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_DamageFilter.m_hFunction = 0;
  }
  if ( this->m_DamageFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_DamageFilter.m_hContext = 0;
  }
  if ( this->m_ExecuteOrderFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ExecuteOrderFilter.m_hFunction = 0;
  }
  if ( this->m_ExecuteOrderFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ExecuteOrderFilter.m_hContext = 0;
  }
  if ( this->m_RuneSpawnFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_RuneSpawnFilter.m_hFunction = 0;
  }
  if ( this->m_RuneSpawnFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_RuneSpawnFilter.m_hContext = 0;
  }
  if ( this->m_ModifyExperienceFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifyExperienceFilter.m_hFunction = 0;
  }
  if ( this->m_ModifyExperienceFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifyExperienceFilter.m_hContext = 0;
  }
  if ( this->m_ModifyGoldFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifyGoldFilter.m_hFunction = 0;
  }
  if ( this->m_ModifyGoldFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifyGoldFilter.m_hContext = 0;
  }
  if ( this->m_BountyRunePickupFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_BountyRunePickupFilter.m_hFunction = 0;
  }
  if ( this->m_BountyRunePickupFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_BountyRunePickupFilter.m_hContext = 0;
  }
  v3 = (this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<int,int>::Purge(&this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory);
    if ( (this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTABaseGameMode::Schema_DynamicBinding  (line 45, @0x0000000002497060, libserver.so)
// globals: CDOTABaseGameMode::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTABaseGameMode::Schema_DynamicBinding(const CDOTABaseGameMode *const this)
{
  return CDOTABaseGameMode::s_pSchemaBinding;
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000002497070, libserver.so)
// globals: CDOTABaseGameMode::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTABaseGameMode::CEntityInstanceEntityClass *const this)
{
  return CDOTABaseGameMode::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000002497080, libserver.so)  // inlines: Destruct<CDOTABaseGameMode>
void __fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::DestructInstance(
        CDOTABaseGameMode::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x00000000024970a0, libserver.so)
void __fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::FreeInstance(
        CDOTABaseGameMode::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x00000000024970c0, libserver.so)
bool __fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::CanAllocate(
        const CDOTABaseGameMode::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x00000000024970d0, libserver.so)
// globals: CDOTABaseGameMode::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTABaseGameMode::CEntityInstanceEntityClass *const this)
{
  return CDOTABaseGameMode::s_pSchemaBinding;
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000002499340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::AllocateInstance(
        CDOTABaseGameMode::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1056);
  memset(v1, 0, 0x420u);
  return v1;
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x000000000249d810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTABaseGameMode::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x000000000249d830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTABaseGameMode::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTABaseGameMode::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x00000000024a1c00, libserver.so)  // inlines: Construct<CDOTABaseGameMode>
// calls: CDOTABaseGameMode::CDOTABaseGameMode
CEntityInstance *__fastcall CDOTABaseGameMode::CEntityInstanceEntityClass::ConstructInstance(
        CDOTABaseGameMode::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTABaseGameMode::CDOTABaseGameMode(p);
  return p;
}


// CDOTABaseGameMode::GetEntityClassInternal  (line 45, @0x00000000024aa200, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTABaseGameMode>, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "dota_base_game_mode", "CDOTABaseGameMode"
// globals: `guard variable for'CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass, CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTABaseGameMode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo, CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo
CEntityClass *__cdecl CDOTABaseGameMode::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass) != 0 )
  {
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_designerName.u.m_Id = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass._vptr_CEntityClass = off_3F79390;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_ComponentOffsets.m_Size = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_AllHelpers.m_Size = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classInputs.m_Size = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classOutputs.m_Size = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_requiredEHandle.m_Index = -1;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_hNetworkSerializer = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pBaseClassInfo = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pClassInfo = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_flags = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_nAllHelpersFlags = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pScriptClassDesc = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pInputs = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_nInputCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pOutputs = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_nOutputCount = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pGameClass = 0;
    CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass._vptr_CEntityClass = off_40DCAD0;
    __cxa_guard_release(&`guard variable for'CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass);
    __cxa_atexit(
      CDOTABaseGameMode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTABaseGameModeClass != 0 )
    return &CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass;
  if ( `guard variable for'CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo,
      "CDOTABaseGameMode",
      "dota_base_game_mode",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo);
  }
  CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pClassInfo = &CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo;
  CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pBaseClassInfo = CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTABaseGameModeClass = &CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass;
  CDOTABaseGameMode::GetEntityClassInfo(void)::g_EntityCDOTABaseGameModeClassInfo.m_pClass = &CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass;
  CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass.m_pScriptClassDesc = GetScriptDesc<CDOTABaseGameMode>(0);
  g_pEntityCDOTABaseGameModeClass->m_pComponentOverrides = 0;
  return &CDOTABaseGameMode::GetEntityClassInternal(void)::g_EntityCDOTABaseGameModeClass;
}


// CDOTABaseGameMode::GetAlwaysShowPlayerInventory  (line 53, @0x00000000024970e0, libserver.so)
bool __fastcall CDOTABaseGameMode::GetAlwaysShowPlayerInventory(CDOTABaseGameMode *const this)
{
  return this->m_bAlwaysShowPlayerInventory.m_Value;
}


// CDOTABaseGameMode::GetGoldSoundDisabled  (line 54, @0x00000000024970f0, libserver.so)
bool __fastcall CDOTABaseGameMode::GetGoldSoundDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bGoldSoundDisabled.m_Value;
}


// CDOTABaseGameMode::GetRecommendedItemsDisabled  (line 55, @0x0000000002497100, libserver.so)
bool __fastcall CDOTABaseGameMode::GetRecommendedItemsDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bRecommendedItemsDisabled.m_Value;
}


// CDOTABaseGameMode::GetStashPurchasingDisabled  (line 56, @0x0000000002497110, libserver.so)
bool __fastcall CDOTABaseGameMode::GetStashPurchasingDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bStashPurchasingDisabled.m_Value;
}


// CDOTABaseGameMode::GetStickyItemDisabled  (line 57, @0x0000000002497120, libserver.so)
bool __fastcall CDOTABaseGameMode::GetStickyItemDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bStickyItemDisabled.m_Value;
}


// CDOTABaseGameMode::GetFogOfWarDisabled  (line 58, @0x0000000002497130, libserver.so)
bool __fastcall CDOTABaseGameMode::GetFogOfWarDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bFogOfWarDisabled.m_Value;
}


// CDOTABaseGameMode::GetCustomBuybackCostEnabled  (line 59, @0x0000000002497140, libserver.so)
bool __fastcall CDOTABaseGameMode::GetCustomBuybackCostEnabled(CDOTABaseGameMode *const this)
{
  return this->m_bUseCustomBuybackCost.m_Value;
}


// CDOTABaseGameMode::GetCustomBuybackCooldownEnabled  (line 60, @0x0000000002497150, libserver.so)
bool __fastcall CDOTABaseGameMode::GetCustomBuybackCooldownEnabled(CDOTABaseGameMode *const this)
{
  return this->m_bUseCustomBuybackCooldown.m_Value;
}


// CDOTABaseGameMode::IsBuybackEnabled  (line 61, @0x0000000002497160, libserver.so)
bool __fastcall CDOTABaseGameMode::IsBuybackEnabled(CDOTABaseGameMode *const this)
{
  return this->m_bBuybackEnabled.m_Value;
}


// CDOTABaseGameMode::GetAlwaysShowPlayerNames  (line 62, @0x0000000002497170, libserver.so)
bool __fastcall CDOTABaseGameMode::GetAlwaysShowPlayerNames(CDOTABaseGameMode *const this)
{
  return this->m_bAlwaysShowPlayerNames.m_Value;
}


// CDOTABaseGameMode::GetCameraDistanceOverride  (line 64, @0x0000000002497180, libserver.so)
float __fastcall CDOTABaseGameMode::GetCameraDistanceOverride(CDOTABaseGameMode *const this)
{
  return this->m_flCameraDistanceOverride.m_Value;
}


// CDOTABaseGameMode::SetTopBarTeamValuesOverride  (line 68, @0x000000000249c3a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetTopBarTeamValuesOverride(CDOTABaseGameMode *const this, bool bOverride)
{
  if ( this->m_bTopBarTeamValuesOverride.m_Value != bOverride )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTopBarTeamValuesOverride.m_Value = bOverride;
  }
}


// CDOTABaseGameMode::GetTopBarTeamValuesOverride  (line 69, @0x0000000002497190, libserver.so)
bool __fastcall CDOTABaseGameMode::GetTopBarTeamValuesOverride(CDOTABaseGameMode *const this)
{
  return this->m_bTopBarTeamValuesOverride.m_Value;
}


// CDOTABaseGameMode::SetTopBarTeamValuesVisible  (line 70, @0x000000000249c320, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetTopBarTeamValuesVisible(CDOTABaseGameMode *const this, bool bVisible)
{
  if ( this->m_bTopBarTeamValuesVisible.m_Value != bVisible )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 801, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTopBarTeamValuesVisible.m_Value = bVisible;
  }
}


// CDOTABaseGameMode::GetTopBarTeamValuesVisible  (line 71, @0x00000000024971a0, libserver.so)
bool __fastcall CDOTABaseGameMode::GetTopBarTeamValuesVisible(CDOTABaseGameMode *const this)
{
  return this->m_bTopBarTeamValuesVisible.m_Value;
}


// CDOTABaseGameMode::GetUseCustomHeroLevels  (line 75, @0x00000000024971b0, libserver.so)
bool __fastcall CDOTABaseGameMode::GetUseCustomHeroLevels(CDOTABaseGameMode *const this)
{
  return this->m_bUseCustomHeroLevels.m_Value;
}


// CDOTABaseGameMode::GetCustomHeroMaxLevel  (line 76, @0x00000000024971c0, libserver.so)
int __fastcall CDOTABaseGameMode::GetCustomHeroMaxLevel(CDOTABaseGameMode *const this)
{
  return this->m_nCustomXPRequiredToReachNextLevel.m_Vector.m_Size;
}


// CDOTABaseGameMode::GetTowerBackdoorProtectionEnabled  (line 85, @0x00000000024971d0, libserver.so)
bool __fastcall CDOTABaseGameMode::GetTowerBackdoorProtectionEnabled(CDOTABaseGameMode *const this)
{
  return this->m_bTowerBackdoorProtectionEnabled.m_Value;
}


// CDOTABaseGameMode::GetAnnouncerDisabled  (line 90, @0x00000000024971e0, libserver.so)
bool __fastcall CDOTABaseGameMode::GetAnnouncerDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bAnnouncerDisabled.m_Value;
}


// CDOTABaseGameMode::GetFixedRespawnTime  (line 93, @0x00000000024971f0, libserver.so)
float __fastcall CDOTABaseGameMode::GetFixedRespawnTime(CDOTABaseGameMode *const this)
{
  return this->m_flFixedRespawnTime.m_Value;
}


// CDOTABaseGameMode::GetMinimumAttackSpeed  (line 95, @0x0000000002497200, libserver.so)
int __fastcall CDOTABaseGameMode::GetMinimumAttackSpeed(CDOTABaseGameMode *const this)
{
  return this->m_flMinimumAttackSpeed.m_Value;
}


// CDOTABaseGameMode::GetMaximumAttackSpeed  (line 96, @0x0000000002497220, libserver.so)
int __fastcall CDOTABaseGameMode::GetMaximumAttackSpeed(CDOTABaseGameMode *const this)
{
  return this->m_flMaximumAttackSpeed.m_Value;
}


// CDOTABaseGameMode::IsDaynightCycleDisabled  (line 98, @0x0000000002497240, libserver.so)
bool __fastcall CDOTABaseGameMode::IsDaynightCycleDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bIsDaynightCycleDisabled.m_Value;
}


// CDOTABaseGameMode::SetDaynightCycleDisabled  (line 99, @0x000000000249be80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetDaynightCycleDisabled(CDOTABaseGameMode *const this, bool bDisable)
{
  if ( this->m_bIsDaynightCycleDisabled.m_Value != bDisable )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 860, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsDaynightCycleDisabled.m_Value = bDisable;
  }
}


// CDOTABaseGameMode::AreWeatherEffectsDisabled  (line 101, @0x0000000002497250, libserver.so)
bool __fastcall CDOTABaseGameMode::AreWeatherEffectsDisabled(CDOTABaseGameMode *const this)
{
  return this->m_bAreWeatherEffectsDisabled.m_Value;
}


// CDOTABaseGameMode::SetWeatherEffectsDisabled  (line 102, @0x000000000249c0a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetWeatherEffectsDisabled(CDOTABaseGameMode *const this, bool bDisable)
{
  if ( this->m_bAreWeatherEffectsDisabled.m_Value != bDisable )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 861, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAreWeatherEffectsDisabled.m_Value = bDisable;
  }
}


// CDOTABaseGameMode::GetHUDVisible  (line 104, @0x0000000002497260, libserver.so)
bool __fastcall CDOTABaseGameMode::GetHUDVisible(const CDOTABaseGameMode *const this, int iElement)
{
  return ((1 << iElement) & this->m_nHUDVisibilityBits.m_Value) != 0;
}


// CDOTABaseGameMode::SetAlwaysShowPlayerInventory  (line 150, @0x000000000249c0e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetAlwaysShowPlayerInventory(CDOTABaseGameMode *const this, bool bAlwaysShow)
{
  if ( this->m_bAlwaysShowPlayerInventory.m_Value != bAlwaysShow )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAlwaysShowPlayerInventory.m_Value = bAlwaysShow;
  }
}


// CDOTABaseGameMode::SetGoldSoundDisabled  (line 151, @0x000000000249bf40, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetGoldSoundDisabled(CDOTABaseGameMode *const this, bool bDisabled)
{
  if ( this->m_bGoldSoundDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 781, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bGoldSoundDisabled.m_Value = bDisabled;
  }
}


// CDOTABaseGameMode::SetRecommendedItemsDisabled  (line 152, @0x000000000249c2a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetRecommendedItemsDisabled(CDOTABaseGameMode *const this, bool bDisabled)
{
  if ( this->m_bRecommendedItemsDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 782, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bRecommendedItemsDisabled.m_Value = bDisabled;
  }
}


// CDOTABaseGameMode::SetStashPurchasingDisabled  (line 153, @0x000000000249bf80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetStashPurchasingDisabled(CDOTABaseGameMode *const this, bool bDisabled)
{
  if ( this->m_bStashPurchasingDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStashPurchasingDisabled.m_Value = bDisabled;
  }
}


// CDOTABaseGameMode::SetStickyItemDisabled  (line 154, @0x000000000249bfc0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetStickyItemDisabled(CDOTABaseGameMode *const this, bool bDisabled)
{
  if ( this->m_bStickyItemDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 783, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStickyItemDisabled.m_Value = bDisabled;
  }
}


// CDOTABaseGameMode::SetCustomBuybackCostEnabled  (line 157, @0x000000000249bec0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetCustomBuybackCostEnabled(CDOTABaseGameMode *const this, bool bEnabled)
{
  if ( this->m_bUseCustomBuybackCost.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 787, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bUseCustomBuybackCost.m_Value = bEnabled;
  }
}


// CDOTABaseGameMode::SetCustomBuybackCooldownEnabled  (line 158, @0x000000000249bf00, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetCustomBuybackCooldownEnabled(CDOTABaseGameMode *const this, bool bEnabled)
{
  if ( this->m_bUseCustomBuybackCooldown.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bUseCustomBuybackCooldown.m_Value = bEnabled;
  }
}


// CDOTABaseGameMode::SetBuybackEnabled  (line 159, @0x000000000249c2e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetBuybackEnabled(CDOTABaseGameMode *const this, bool bEnabled)
{
  if ( this->m_bBuybackEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 789, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bBuybackEnabled.m_Value = bEnabled;
  }
}


// CDOTABaseGameMode::SetCameraDistanceOverride  (line 160, @0x000000000249c040, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTABaseGameMode::SetCameraDistanceOverride(
        CDOTABaseGameMode *const this,
        double a2,
        float flCameraDistanceOverride)
{
  float flCameraDistanceOverridea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flCameraDistanceOverride.m_Value )
  {
    flCameraDistanceOverridea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flCameraDistanceOverride);
    this->m_flCameraDistanceOverride.m_Value = flCameraDistanceOverridea;
  }
}


// CDOTABaseGameMode::Script_SetOverrideSelectionEntity  (line 162, @0x000000000249ea50, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HScriptToEntity<CBaseEntity>, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetOverrideSelectionEntity, ToDOTABaseNPC, ToEnt, operator CEntityInstance*, operator!=<CDOTA_BaseNPC>, operator=, operator=<CDOTA_BaseNPC*>
// calls: GetScriptDesc<CEntityInstance>
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABaseGameMode::Script_SetOverrideSelectionEntity(
        CDOTABaseGameMode *const this,
        HSCRIPT hOverrideEntity)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int16 v8; // cx
  unsigned int v9; // ecx
  uint32 v10; // r12d
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rdx
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rax
  int v18; // [rsp+0h] [rbp-30h]

  if ( hOverrideEntity == 0
    || (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hOverrideEntity, Script)) == 0)
    || *(v6 + 339) == 0 )
  {
    LOWORD(v18) = -1;
    goto LABEL_22;
  }
  v7 = *(v6 + 8);
  LOWORD(v18) = -1;
  if ( v7 == 0 )
  {
LABEL_22:
    v9 = 1;
    v10 = -1;
    goto LABEL_8;
  }
  v8 = 0x7FFF;
  if ( *(v7 + 16) != -1 )
    v8 = *(v7 + 16) & 0x7FFF;
  v18 = (((*(v7 + 16) >> 15) - (*(v7 + 48) & 1)) << 15) | v8 & 0x7FFF;
  v9 = v18 + 2;
  v10 = v18;
LABEL_8:
  m_Index = this->m_hOverrideSelectionEntity.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOverrideSelectionEntity.m_Value.m_Index) >> 9)
                                                         & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[this->m_hOverrideSelectionEntity.m_Value.m_Index & 0x1FF];
      if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
  v15 = 0;
  if ( v9 > 1 )
  {
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F];
    if ( v16 != 0 )
    {
      v17 = &v16[v18 & 0x1FF];
      if ( v17 != 0 && v17->m_EHandle.m_Index == v10 )
        v15 = v17->m_pInstance;
    }
  }
  if ( m_pInstance != v15 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hOverrideSelectionEntity.m_Value.m_Index = v10;
  }
}


// CDOTABaseGameMode::SetAlwaysShowPlayerNames  (line 163, @0x000000000249c000, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetAlwaysShowPlayerNames(CDOTABaseGameMode *const this, bool bEnabled)
{
  if ( this->m_bAlwaysShowPlayerNames.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAlwaysShowPlayerNames.m_Value = bEnabled;
  }
}


// CDOTABaseGameMode::SetUseCustomHeroLevels  (line 165, @0x000000000249c360, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetUseCustomHeroLevels(CDOTABaseGameMode *const this, bool bEnabled)
{
  if ( this->m_bUseCustomHeroLevels.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 813, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bUseCustomHeroLevels.m_Value = bEnabled;
  }
}


// CDOTABaseGameMode::SetCustomHeroMaxLevel  (line 166, @0x00000000024992e0, libserver.so)
// calls: Msg
// strings: "SetCustomHeroMaxLevel is a deprecated API."
void __fastcall CDOTABaseGameMode::SetCustomHeroMaxLevel(CDOTABaseGameMode *const this, int a2)
{
  Msg("SetCustomHeroMaxLevel is a deprecated API.", a2);
}


// CDOTABaseGameMode::SetRemoveIllusionsOnDeath  (line 171, @0x0000000002497280, libserver.so)
void __fastcall CDOTABaseGameMode::SetRemoveIllusionsOnDeath(CDOTABaseGameMode *const this, bool bRemove)
{
  this->m_bRemoveIllusionsOnDeath = bRemove;
}


// CDOTABaseGameMode::SetLoseGoldOnDeath  (line 174, @0x0000000002497290, libserver.so)
void __fastcall CDOTABaseGameMode::SetLoseGoldOnDeath(CDOTABaseGameMode *const this, bool bEnabled)
{
  this->m_bLoseGoldOnDeath = bEnabled;
}


// CDOTABaseGameMode::SetTowerBackdoorProtectionEnabled  (line 177, @0x000000000249c3e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetTowerBackdoorProtectionEnabled(CDOTABaseGameMode *const this, bool bEnabled)
{
  if ( this->m_bTowerBackdoorProtectionEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 840, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bTowerBackdoorProtectionEnabled.m_Value = bEnabled;
  }
}


// CDOTABaseGameMode::SetBotThinkingEnabled  (line 178, @0x000000000249c420, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetBotThinkingEnabled(CDOTABaseGameMode *const this, bool bEnabled)
{
  if ( this->m_bBotThinkingEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 841, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bBotThinkingEnabled.m_Value = bEnabled;
  }
}


// CDOTABaseGameMode::SetBotsInLateGame  (line 180, @0x00000000024972a0, libserver.so)
void __fastcall CDOTABaseGameMode::SetBotsInLateGame(CDOTABaseGameMode *const this, bool bLateGame)
{
  this->m_bOverrideBotLateGame = 1;
  this->m_bBotsInLateGame = bLateGame;
}


// CDOTABaseGameMode::SetBotsMaxPushTier  (line 184, @0x00000000024972c0, libserver.so)
void __fastcall CDOTABaseGameMode::SetBotsMaxPushTier(CDOTABaseGameMode *const this, int nMaxTier)
{
  this->m_nBotMaxPushTier = nMaxTier;
}


// CDOTABaseGameMode::SetBotsAlwaysPushWithHuman  (line 187, @0x00000000024972d0, libserver.so)
void __fastcall CDOTABaseGameMode::SetBotsAlwaysPushWithHuman(CDOTABaseGameMode *const this, bool bAlwaysPush)
{
  this->m_bBotsAlwaysPushWithHuman = bAlwaysPush;
}


// CDOTABaseGameMode::SetAnnouncerDisabled  (line 191, @0x000000000249bc60, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetAnnouncerDisabled(CDOTABaseGameMode *const this, bool bDisabled)
{
  if ( this->m_bAnnouncerDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 842, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAnnouncerDisabled.m_Value = bDisabled;
  }
}


// CDOTABaseGameMode::SetKillingSpreeAnnouncerDisabled  (line 192, @0x000000000249bca0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTABaseGameMode::SetKillingSpreeAnnouncerDisabled(CDOTABaseGameMode *const this, bool bDisabled)
{
  if ( this->m_bKillingSpreeAnnouncerDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 843, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bKillingSpreeAnnouncerDisabled.m_Value = bDisabled;
  }
}


// CDOTABaseGameMode::SetFixedRespawnTime  (line 193, @0x000000000249c4c0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTABaseGameMode::SetFixedRespawnTime(
        CDOTABaseGameMode *const this,
        double a2,
        float flFixedRespawnTime)
{
  float flFixedRespawnTimea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flFixedRespawnTime.m_Value )
  {
    flFixedRespawnTimea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 844, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flFixedRespawnTime);
    this->m_flFixedRespawnTime.m_Value = flFixedRespawnTimea;
  }
}


// CDOTABaseGameMode::SetFountainPercentageHealthRegen  (line 195, @0x00000000024972e0, libserver.so)
void __fastcall CDOTABaseGameMode::SetFountainPercentageHealthRegen(
        CDOTABaseGameMode *const this,
        float a2,
        float flPercentageHealthRegen)
{
  this->m_flFountainPercentageHealthRegen = a2;
}


// CDOTABaseGameMode::SetFountainPercentageManaRegen  (line 198, @0x00000000024972f0, libserver.so)
void __fastcall CDOTABaseGameMode::SetFountainPercentageManaRegen(
        CDOTABaseGameMode *const this,
        float a2,
        float flPercentageManaRegen)
{
  this->m_flFountainPercentageManaRegen = a2;
}


// CDOTABaseGameMode::SetFountainConstantManaRegen  (line 201, @0x0000000002497300, libserver.so)
void __fastcall CDOTABaseGameMode::SetFountainConstantManaRegen(
        CDOTABaseGameMode *const this,
        float a2,
        float flConstantManaRegen)
{
  this->m_flFountainConstantManaRegen = a2;
}


// CDOTABaseGameMode::SetMinimumAttackSpeed  (line 206, @0x000000000249c5e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTABaseGameMode::SetMinimumAttackSpeed(CDOTABaseGameMode *const this, int nMinSpeed)
{
  float v3; // [rsp-1Ch] [rbp-1Ch]

  if ( (nMinSpeed / 100.0) != this->m_flMinimumAttackSpeed.m_Value )
  {
    v3 = nMinSpeed / 100.0;
    (*(this->_vptr_IHandleEntity + 22))(this, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMinimumAttackSpeed.m_Value = v3;
  }
}


// CDOTABaseGameMode::SetMaximumAttackSpeed  (line 207, @0x000000000249c570, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTABaseGameMode::SetMaximumAttackSpeed(CDOTABaseGameMode *const this, int nMaxSpeed)
{
  float v3; // [rsp-1Ch] [rbp-1Ch]

  if ( (nMaxSpeed / 100.0) != this->m_flMaximumAttackSpeed.m_Value )
  {
    v3 = nMaxSpeed / 100.0;
    (*(this->_vptr_IHandleEntity + 22))(this, 856, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMaximumAttackSpeed.m_Value = v3;
  }
}


// CDOTABaseGameMode::SetTrackingProjectileFilter  (line 213, @0x000000000249e150, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetTrackingProjectileFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_TrackingProjectileFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_TrackingProjectileFilter.m_hFunction;
      this->m_TrackingProjectileFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_TrackingProjectileFilter.m_hContext;
        this->m_TrackingProjectileFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_TrackingProjectileFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearTrackingProjectileFilter  (line 214, @0x000000000249de40, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearTrackingProjectileFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_TrackingProjectileFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_TrackingProjectileFilter.m_hFunction = 0;
  }
  if ( this->m_TrackingProjectileFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_TrackingProjectileFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetRuneSpawnFilter  (line 218, @0x000000000249e950, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetRuneSpawnFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_RuneSpawnFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_RuneSpawnFilter.m_hFunction;
      this->m_RuneSpawnFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_RuneSpawnFilter.m_hContext;
        this->m_RuneSpawnFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_RuneSpawnFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearRuneSpawnFilter  (line 219, @0x000000000249ddd0, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearRuneSpawnFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_RuneSpawnFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_RuneSpawnFilter.m_hFunction = 0;
  }
  if ( this->m_RuneSpawnFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_RuneSpawnFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetExecuteOrderFilter  (line 223, @0x000000000249b070, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetExecuteOrderFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_ExecuteOrderFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_ExecuteOrderFilter.m_hFunction;
      this->m_ExecuteOrderFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_ExecuteOrderFilter.m_hContext;
        this->m_ExecuteOrderFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_ExecuteOrderFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearExecuteOrderFilter  (line 224, @0x000000000249df20, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearExecuteOrderFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_ExecuteOrderFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ExecuteOrderFilter.m_hFunction = 0;
  }
  if ( this->m_ExecuteOrderFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ExecuteOrderFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetDamageFilter  (line 228, @0x000000000249e850, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetDamageFilter(CDOTABaseGameMode *const this, HSCRIPT hFunction, HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_DamageFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_DamageFilter.m_hFunction;
      this->m_DamageFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_DamageFilter.m_hContext;
        this->m_DamageFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_DamageFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearDamageFilter  (line 229, @0x000000000249deb0, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearDamageFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_DamageFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_DamageFilter.m_hFunction = 0;
  }
  if ( this->m_DamageFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_DamageFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetBountyRunePickupFilter  (line 233, @0x000000000249e750, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetBountyRunePickupFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_BountyRunePickupFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_BountyRunePickupFilter.m_hFunction;
      this->m_BountyRunePickupFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_BountyRunePickupFilter.m_hContext;
        this->m_BountyRunePickupFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_BountyRunePickupFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearBountyRunePickupFilter  (line 234, @0x000000000249df90, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearBountyRunePickupFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_BountyRunePickupFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_BountyRunePickupFilter.m_hFunction = 0;
  }
  if ( this->m_BountyRunePickupFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_BountyRunePickupFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetModifyGoldFilter  (line 238, @0x000000000249e650, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetModifyGoldFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_ModifyGoldFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_ModifyGoldFilter.m_hFunction;
      this->m_ModifyGoldFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_ModifyGoldFilter.m_hContext;
        this->m_ModifyGoldFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_ModifyGoldFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearModifyGoldFilter  (line 239, @0x000000000249dd60, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearModifyGoldFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_ModifyGoldFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifyGoldFilter.m_hFunction = 0;
  }
  if ( this->m_ModifyGoldFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifyGoldFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetModifyExperienceFilter  (line 243, @0x000000000249e550, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetModifyExperienceFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_ModifyExperienceFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_ModifyExperienceFilter.m_hFunction;
      this->m_ModifyExperienceFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_ModifyExperienceFilter.m_hContext;
        this->m_ModifyExperienceFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_ModifyExperienceFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearModifyExperienceFilter  (line 244, @0x000000000249e0e0, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearModifyExperienceFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_ModifyExperienceFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifyExperienceFilter.m_hFunction = 0;
  }
  if ( this->m_ModifyExperienceFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifyExperienceFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetAbilityTuningValueFilter  (line 248, @0x000000000249e450, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetAbilityTuningValueFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_AbilityTuningValueFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_AbilityTuningValueFilter.m_hFunction;
      this->m_AbilityTuningValueFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_AbilityTuningValueFilter.m_hContext;
        this->m_AbilityTuningValueFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_AbilityTuningValueFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::SetModifierGainedFilter  (line 253, @0x000000000249e350, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetModifierGainedFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_ModifierGainedFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_ModifierGainedFilter.m_hFunction;
      this->m_ModifierGainedFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_ModifierGainedFilter.m_hContext;
        this->m_ModifierGainedFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_ModifierGainedFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearModifierGainedFilter  (line 254, @0x000000000249e070, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearModifierGainedFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_ModifierGainedFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ModifierGainedFilter.m_hFunction = 0;
  }
  if ( this->m_ModifierGainedFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ModifierGainedFilter.m_hContext = 0;
  }
}


// CDOTABaseGameMode::SetItemAddedToInventoryFilter  (line 258, @0x000000000249e250, libserver.so)  // inlines: SetFilterFunction
// calls: Msg
// strings: "VScriptFilter::SetFilterFunction - Failed to copy function or context\n", "VScriptFilter::SetFilterFunction - Invalid context\n", "VScriptFilter::SetFilterFunction - Invalid function\n"
void __fastcall CDOTABaseGameMode::SetItemAddedToInventoryFilter(
        CDOTABaseGameMode *const this,
        HSCRIPT hFunction,
        HSCRIPT hContext)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi
  HSCRIPT v7; // rax
  HSCRIPT m_hFunction; // rsi
  HSCRIPT m_hContext; // rsi
  const char *v10; // rdi

  if ( hFunction != 0 )
  {
    if ( hContext != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM);
      v6 = g_pScriptVM;
      this->m_ItemAddedToInventoryFilter.m_hFunction = v5;
      v7 = (*(*v6 + 456LL))(v6, hContext);
      m_hFunction = this->m_ItemAddedToInventoryFilter.m_hFunction;
      this->m_ItemAddedToInventoryFilter.m_hContext = v7;
      if ( m_hFunction != 0 )
      {
        if ( v7 != 0 )
          return;
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        m_hContext = this->m_ItemAddedToInventoryFilter.m_hContext;
        this->m_ItemAddedToInventoryFilter.m_hFunction = 0;
      }
      else
      {
        m_hContext = v7;
      }
      if ( m_hContext != 0 )
      {
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
        this->m_ItemAddedToInventoryFilter.m_hContext = 0;
      }
      v10 = "VScriptFilter::SetFilterFunction - Failed to copy function or context\n";
    }
    else
    {
      v10 = "VScriptFilter::SetFilterFunction - Invalid context\n";
    }
    Msg(v10);
  }
  else
  {
    Msg("VScriptFilter::SetFilterFunction - Invalid function\n", 0, hContext);
  }
}


// CDOTABaseGameMode::ClearItemAddedToInventoryFilter  (line 259, @0x000000000249e000, libserver.so)  // inlines: ClearFilterFunction
void __fastcall CDOTABaseGameMode::ClearItemAddedToInventoryFilter(CDOTABaseGameMode *const this)
{
  if ( this->m_ItemAddedToInventoryFilter.m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_ItemAddedToInventoryFilter.m_hFunction = 0;
  }
  if ( this->m_ItemAddedToInventoryFilter.m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_ItemAddedToInventoryFilter.m_hContext = 0;
  }
}


