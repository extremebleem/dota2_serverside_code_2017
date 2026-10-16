
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameRulesProxy::~CGameRulesProxy  (line 98, @0x000000000227c2d0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CGameRulesProxy::~CGameRulesProxy(CGameRulesProxy *const this)
{
  this->_vptr_IHandleEntity = &off_404F510;
  CBaseEntity::~CBaseEntity(this);
}


// CGameRulesProxy::~CGameRulesProxy  (line 98, @0x000000000227c2f0, libserver.so)  // inlines: ~CGameRulesProxy
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CGameRulesProxy::~CGameRulesProxy(CGameRulesProxy *const this)
{
  this->_vptr_IHandleEntity = &off_404F510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CGameRulesProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 100, @0x0000000001f0f160, libserver.so)
// globals: CGameRulesProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameRulesProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameRulesProxy::CEntityInstanceEntityClass *const this)
{
  return CGameRulesProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameRulesProxy::CEntityInstanceEntityClass::DestructInstance  (line 100, @0x0000000001f0f170, libserver.so)  // inlines: Destruct<CGameRulesProxy>
void __fastcall CGameRulesProxy::CEntityInstanceEntityClass::DestructInstance(
        CGameRulesProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGameRulesProxy::CEntityInstanceEntityClass::FreeInstance  (line 100, @0x0000000001f0f190, libserver.so)
void __fastcall CGameRulesProxy::CEntityInstanceEntityClass::FreeInstance(
        CGameRulesProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGameRulesProxy::CEntityInstanceEntityClass::CanAllocate  (line 100, @0x0000000001f0f1b0, libserver.so)
bool __fastcall CGameRulesProxy::CEntityInstanceEntityClass::CanAllocate(
        const CGameRulesProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGameRulesProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 100, @0x0000000001f0f1c0, libserver.so)
// globals: CGameRulesProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CGameRulesProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameRulesProxy::CEntityInstanceEntityClass *const this)
{
  return CGameRulesProxy::s_pSchemaBinding;
}


// CGameRulesProxy::CEntityInstanceEntityClass::AllocateInstance  (line 100, @0x0000000001f10d90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGameRulesProxy::CEntityInstanceEntityClass::AllocateInstance(
        CGameRulesProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CGameRulesProxy::CEntityInstanceEntityClass::ConstructInstance  (line 100, @0x0000000001f10fd0, libserver.so)  // inlines: CGameRulesProxy, Construct<CGameRulesProxy>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CGameRulesProxy::CEntityInstanceEntityClass::ConstructInstance(
        CGameRulesProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_404F510;
  }
  return p;
}


// CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000001f12bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameRulesProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000001f12bf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameRulesProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameRulesProxy::GetEntityClassInternal  (line 100, @0x0000000001f184f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp, _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CGameRulesProxy", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass, CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo, CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (11 total)
CEntityClass *__cdecl CGameRulesProxy::GetEntityClassInternal()
{
  if ( `guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass) != 0 )
  {
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_designerName.u.m_Id = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass._vptr_CEntityClass = off_3F79390;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_requiredEHandle.m_Index = -1;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_hNetworkSerializer = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pBaseClassInfo = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pClassInfo = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_flags = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_nAllHelpersFlags = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pScriptClassDesc = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pInputs = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_nInputCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pOutputs = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_nOutputCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pGameClass = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass._vptr_CEntityClass = off_3FC5290;
    __cxa_guard_release(&`guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass);
    __cxa_atexit(
      CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameRulesProxyClass != 0 )
    return &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
  if ( `guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo) != 0 )
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
      &CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo,
      "CGameRulesProxy",
      0,
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo);
  }
  CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pClassInfo = &CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo;
  CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pBaseClassInfo = CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCGameRulesProxyClass = &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
  CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo.m_pClass = &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
  CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCGameRulesProxyClass->m_pComponentOverrides = 0;
  return &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
}


// CGameRulesProxy::Schema_DynamicBinding  (line 100, @0x000000000227c1a0, libserver.so)
// calls: CGameRulesProxy::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGameRulesProxy::Schema_DynamicBinding(const CGameRulesProxy *const this)
{
  CGameRulesProxy::Schema_VerifyBindingIsRegistered();
  return CGameRulesProxy::s_pSchemaBinding;
}


// CGameRulesProxy::ObjectCaps  (line 107, @0x000000000227c050, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CGameRulesProxy::ObjectCaps(CGameRulesProxy *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CGameRules::Schema_DynamicBinding  (line 118, @0x000000000227c1c0, libserver.so)
// calls: CGameRules::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGameRules::Schema_DynamicBinding(const CGameRules *const this)
{
  CGameRules::Schema_VerifyBindingIsRegistered();
  return CGameRules::s_pSchemaBinding;
}


// CGameRules::PostInit  (line 125, @0x000000000227a4a0, libserver.so)
void __fastcall CGameRules::PostInit(CGameRules *const this)
{
  ;
}


// CGameRules::GameInit  (line 126, @0x000000000227a4b0, libserver.so)
void __fastcall CGameRules::GameInit(CGameRules *const this, const EventGameInit_t *const msg)
{
  ;
}


// CGameRules::GamePostInit  (line 127, @0x000000000227a4c0, libserver.so)
void __fastcall CGameRules::GamePostInit(CGameRules *const this, const EventGamePostInit_t *const msg)
{
  ;
}


// CGameRules::GameActivate  (line 128, @0x000000000227a4d0, libserver.so)
void __fastcall CGameRules::GameActivate(CGameRules *const this, const EventGameActivate_t *const msg)
{
  ;
}


// CGameRules::SpawnGroupPrecache  (line 129, @0x000000000227a4e0, libserver.so)
void __fastcall CGameRules::SpawnGroupPrecache(CGameRules *const this, const EventSpawnGroupPrecache_t *const msg)
{
  ;
}


// CGameRules::PreSpawnGroupLoad  (line 130, @0x000000000227a4f0, libserver.so)
void __fastcall CGameRules::PreSpawnGroupLoad(CGameRules *const this, const EventPreSpawnGroupLoad_t *const msg)
{
  ;
}


// CGameRules::PostSpawnGroupLoad  (line 131, @0x000000000227a500, libserver.so)
void __fastcall CGameRules::PostSpawnGroupLoad(CGameRules *const this, const EventPostSpawnGroupLoad_t *const msg)
{
  ;
}


// CGameRules::PreSpawnGroupUnload  (line 132, @0x000000000227a510, libserver.so)
void __fastcall CGameRules::PreSpawnGroupUnload(CGameRules *const this, const EventPreSpawnGroupUnload_t *const msg)
{
  ;
}


// CGameRules::PostSpawnGroupUnload  (line 133, @0x000000000227a520, libserver.so)
void __fastcall CGameRules::PostSpawnGroupUnload(CGameRules *const this, const EventPostSpawnGroupUnload_t *const msg)
{
  ;
}


// CGameRules::ActiveSpawnGroupChanged  (line 134, @0x000000000227a530, libserver.so)
void __fastcall CGameRules::ActiveSpawnGroupChanged(
        CGameRules *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  ;
}


// CGameRules::GameDeactivate  (line 135, @0x000000000227a540, libserver.so)
void __fastcall CGameRules::GameDeactivate(CGameRules *const this, const EventGameDeactivate_t *const msg)
{
  ;
}


// CGameRules::GameShutdown  (line 136, @0x000000000227a550, libserver.so)
void __fastcall CGameRules::GameShutdown(CGameRules *const this, const EventGameShutdown_t *const msg)
{
  ;
}


// CGameRules::SaveGame  (line 137, @0x000000000227a560, libserver.so)
void __fastcall CGameRules::SaveGame(CGameRules *const this, const EventSaveGame_t *const msg)
{
  ;
}


// CGameRules::RestoreGame  (line 138, @0x000000000227a570, libserver.so)
void __fastcall CGameRules::RestoreGame(CGameRules *const this, const EventRestoreGame_t *const msg)
{
  ;
}


// CGameRules::FrameUpdatePreEntityThink  (line 147, @0x000000000227a580, libserver.so)
void __fastcall CGameRules::FrameUpdatePreEntityThink(
        CGameRules *const this,
        const EventServerPreEntityThink_t *const msg)
{
  ;
}


// CGameRules::PreClientUpdate  (line 148, @0x000000000227a590, libserver.so)
void __fastcall CGameRules::PreClientUpdate(CGameRules *const this, const EventServerPreClientUpdate_t *const msg)
{
  ;
}


// CGameRules::Shutdown  (line 162, @0x000000000227a5a0, libserver.so)
void __fastcall CGameRules::Shutdown(CGameRules *const this)
{
  ;
}


// CGameRules::DefaultFOV  (line 187, @0x000000000227a5b0, libserver.so)
int __fastcall CGameRules::DefaultFOV(CGameRules *const this)
{
  return 90;
}


// CGameRules::GetDamageMultiplier  (line 194, @0x000000000227a5c0, libserver.so)
float __fastcall CGameRules::GetDamageMultiplier(CGameRules *const this)
{
  return 1.0;
}


// CGameRules::InRoundRestart  (line 199, @0x000000000227a5d0, libserver.so)
bool __fastcall CGameRules::InRoundRestart(CGameRules *const this)
{
  return 0;
}


// CGameRules::RegisterScriptFunctions  (line 201, @0x000000000227a5e0, libserver.so)
void __fastcall CGameRules::RegisterScriptFunctions(CGameRules *const this)
{
  ;
}


// CGameRules::GetPrivateScriptScope  (line 204, @0x000000000227a5f0, libserver.so)  // inlines: CScriptAccessorT
CEntityPrivateScriptScope __fastcall CGameRules::GetPrivateScriptScope(_QWORD *a1, CGameRules *const this)
{
  *a1 = 0;
  return a1;
}


// CGameRules::ClientCommandKeyValues  (line 207, @0x000000000227a600, libserver.so)
void __fastcall CGameRules::ClientCommandKeyValues(CGameRules *const this, CBaseEntity *pEdict, KeyValues *pKeyValues)
{
  ;
}


// CGameRules::CheckAchievementsEnabled  (line 209, @0x000000000227a610, libserver.so)
bool __fastcall CGameRules::CheckAchievementsEnabled(CGameRules *const this, int iAchievementID)
{
  return 1;
}


// CGameRules::PrintStatus  (line 218, @0x000000000227a620, libserver.so)
void __fastcall CGameRules::PrintStatus(CGameRules *const this, CEntityIndex nPlayerEntityIndex, CUtlString *pOutput)
{
  ;
}


// CGameRules::GetTaggedConVarList  (line 220, @0x000000000227a630, libserver.so)
void __fastcall CGameRules::GetTaggedConVarList(CGameRules *const this, KeyValues *pCvarTagList)
{
  ;
}


// CGameRules::OnBeginChangeLevel  (line 229, @0x000000000227a640, libserver.so)
void __fastcall CGameRules::OnBeginChangeLevel(CGameRules *const this, const char *nextMapName)
{
  ;
}


// CGameRules::LevelShutdown  (line 232, @0x000000000227a650, libserver.so)
void __fastcall CGameRules::LevelShutdown(CGameRules *const this)
{
  ;
}


// CGameRules::IsSkillLevel  (line 241, @0x000000000227a660, libserver.so)
bool __fastcall CGameRules::IsSkillLevel(CGameRules *const this, int iLevel)
{
  return (*(this->_vptr_CGameRules + 54))(this) == iLevel;
}


// CGameRules::GetSkillLevel  (line 242, @0x000000000227a680, libserver.so)
// globals: g_iSkillLevel
int __fastcall CGameRules::GetSkillLevel(CGameRules *const this)
{
  return g_iSkillLevel;
}


// CGameRules::OnSkillLevelChanged  (line 243, @0x000000000227a690, libserver.so)
void __fastcall CGameRules::OnSkillLevelChanged(CGameRules *const this, int iNewLevel)
{
  ;
}


// CGameRules::SetSkillLevel  (line 244, @0x000000000227a6a0, libserver.so)
// globals: g_iSkillLevel
void __fastcall CGameRules::SetSkillLevel(CGameRules *const this, int iLevel)
{
  int v2; // edx
  unsigned int v3; // eax

  v2 = g_iSkillLevel;
  v3 = 1;
  if ( iLevel > 0 )
  {
    LOBYTE(v3) = 3;
    if ( iLevel <= 3 )
      v3 = iLevel;
  }
  g_iSkillLevel = v3;
  if ( v3 != v2 )
    (*(this->_vptr_CGameRules + 55))(this, v3);
}


// CGameRules::IsTeamplay  (line 270, @0x000000000227a6e0, libserver.so)
bool __fastcall CGameRules::IsTeamplay(CGameRules *const this)
{
  return 0;
}


// CGameRules::GetGameDescription  (line 272, @0x000000000227a6f0, libserver.so)
// strings: "Half-Life 2"
const char *__fastcall CGameRules::GetGameDescription(CGameRules *const this)
{
  return "Half-Life 2";
}


// CGameRules::ShouldTimeoutClient  (line 278, @0x000000000227a700, libserver.so)
__int64 __fastcall CGameRules::ShouldTimeoutClient(
        CGameRules *const this,
        int nUserID,
        double a3,
        float flTimeSinceLastReceived)
{
  return 0;
}


// CGameRules::FPlayerCanTakeDamage  (line 282, @0x000000000227a710, libserver.so)
bool __fastcall CGameRules::FPlayerCanTakeDamage(CGameRules *const this, CBasePlayer *pPlayer, CBaseEntity *pAttacker)
{
  return 1;
}


// CGameRules::ShouldAutoAim  (line 283, @0x000000000227a720, libserver.so)
bool __fastcall CGameRules::ShouldAutoAim(CGameRules *const this, CBasePlayer *pPlayer, CBaseEntity *target)
{
  return 1;
}


// CGameRules::GetAutoAimScale  (line 284, @0x000000000227a730, libserver.so)
float __fastcall CGameRules::GetAutoAimScale(CGameRules *const this, CBasePlayer *pPlayer)
{
  return 1.0;
}


// CGameRules::GetAutoAimMode  (line 285, @0x000000000227a740, libserver.so)
int __fastcall CGameRules::GetAutoAimMode(CGameRules *const this)
{
  return 1;
}


// CGameRules::ShouldUseRobustRadiusDamage  (line 287, @0x000000000227a750, libserver.so)
bool __fastcall CGameRules::ShouldUseRobustRadiusDamage(CGameRules *const this, CBaseEntity *pEntity)
{
  return 0;
}


// CGameRules::FlPlayerFallDeathDoesScreenFade  (line 290, @0x000000000227a760, libserver.so)
bool __fastcall CGameRules::FlPlayerFallDeathDoesScreenFade(CGameRules *const this, CBasePlayer *pl)
{
  return 1;
}


// CGameRules::AllowAutoTargetCrosshair  (line 303, @0x000000000227a770, libserver.so)
bool __fastcall CGameRules::AllowAutoTargetCrosshair(CGameRules *const this)
{
  return 1;
}


// CGameRules::GetDamageCustomString  (line 311, @0x000000000227a780, libserver.so)
const char *__fastcall CGameRules::GetDamageCustomString(CGameRules *const this, const CTakeDamageInfo *const info)
{
  return 0;
}


// CGameRules::AdjustPlayerDamageInflicted  (line 315, @0x000000000227a790, libserver.so)
void __fastcall CGameRules::AdjustPlayerDamageInflicted(CGameRules *const this, double a2, float damage)
{
  ;
}


// CGameRules::AdjustPlayerDamageTaken  (line 316, @0x000000000227a7a0, libserver.so)
void __fastcall CGameRules::AdjustPlayerDamageTaken(CGameRules *const this, CTakeDamageInfo *pInfo)
{
  ;
}


// CGameRules::GetAmmoQuantityScale  (line 341, @0x000000000227a7b0, libserver.so)
float __fastcall CGameRules::GetAmmoQuantityScale(CGameRules *const this, int iAmmoIndex)
{
  return 1.0;
}


// CGameRules::InitDefaultAIRelationships  (line 344, @0x000000000227a7c0, libserver.so)
void __fastcall CGameRules::InitDefaultAIRelationships(CGameRules *const this)
{
  ;
}


// CGameRules::AIClassText  (line 345, @0x000000000227a7d0, libserver.so)
const char *__fastcall CGameRules::AIClassText(CGameRules *const this, int classType)
{
  return 0;
}


// CGameRules::NumEntityClasses  (line 346, @0x000000000227a7e0, libserver.so)
int __fastcall CGameRules::NumEntityClasses(const CGameRules *const this)
{
  return 4;
}


// CGameRules::NumFactions  (line 347, @0x000000000227a7f0, libserver.so)
int __fastcall CGameRules::NumFactions(const CGameRules *const this)
{
  return 0;
}


// CGameRules::FlHEVChargerRechargeTime  (line 351, @0x000000000227a800, libserver.so)
float __fastcall CGameRules::FlHEVChargerRechargeTime(CGameRules *const this)
{
  return 0.0;
}


// CGameRules::CheckChatText  (line 362, @0x000000000227a810, libserver.so)
void __fastcall CGameRules::CheckChatText(CGameRules *const this, CBasePlayer *pPlayer, char *pText)
{
  ;
}


// CGameRules::OnPlayerChatted  (line 363, @0x000000000227a820, libserver.so)
void __fastcall CGameRules::OnPlayerChatted(
        CGameRules *const this,
        CBasePlayer *pSpeaker,
        int nTeamOnly,
        const char *szPlayerName,
        const char *szText)
{
  ;
}


// CGameRules::GetTeamIndex  (line 365, @0x000000000227a830, libserver.so)
int __fastcall CGameRules::GetTeamIndex(CGameRules *const this, const char *pTeamName)
{
  return -1;
}


// CGameRules::GetIndexedTeamName  (line 366, @0x000000000227a840, libserver.so)
const char *__fastcall CGameRules::GetIndexedTeamName(CGameRules *const this, int teamIndex)
{
  return "";
}


// CGameRules::IsValidTeam  (line 367, @0x000000000227a850, libserver.so)
bool __fastcall CGameRules::IsValidTeam(CGameRules *const this, const char *pTeamName)
{
  return 1;
}


// CGameRules::ChangePlayerTeam  (line 368, @0x000000000227a860, libserver.so)
void __fastcall CGameRules::ChangePlayerTeam(
        CGameRules *const this,
        CBasePlayer *pPlayer,
        const char *pTeamName,
        bool bKill,
        bool bGib)
{
  ;
}


// CGameRules::SetDefaultPlayerTeam  (line 369, @0x000000000227a870, libserver.so)
const char *__fastcall CGameRules::SetDefaultPlayerTeam(CGameRules *const this, CBasePlayer *pPlayer)
{
  return "";
}


// CGameRules::UpdateClientData  (line 370, @0x000000000227a880, libserver.so)
void __fastcall CGameRules::UpdateClientData(CGameRules *const this, CBasePlayer *pPlayer)
{
  ;
}


// CGameRules::PlayTextureSounds  (line 373, @0x000000000227a890, libserver.so)
bool __fastcall CGameRules::PlayTextureSounds(CGameRules *const this)
{
  return 1;
}


// CGameRules::PlayFootstepSounds  (line 374, @0x000000000227a8a0, libserver.so)
bool __fastcall CGameRules::PlayFootstepSounds(CGameRules *const this, CBasePlayer *pl)
{
  return 1;
}


// CGameRules::AllowSoundscapes  (line 375, @0x000000000227a8b0, libserver.so)
bool __fastcall CGameRules::AllowSoundscapes(CGameRules *const this)
{
  return 1;
}


// CGameRules::EndMultiplayerGame  (line 381, @0x000000000227a8c0, libserver.so)
void __fastcall CGameRules::EndMultiplayerGame(CGameRules *const this)
{
  ;
}


// CGameRules::GetChatLocation  (line 396, @0x000000000227a8d0, libserver.so)
const char *__fastcall CGameRules::GetChatLocation(CGameRules *const this, bool bTeamOnly, CBasePlayer *pPlayer)
{
  return 0;
}


// CGameRules::GetChatFormat  (line 399, @0x000000000227a8e0, libserver.so)
const char *__fastcall CGameRules::GetChatFormat(
        CGameRules *const this,
        bool bTeamOnly,
        CBasePlayer *pPlayer,
        int nCustomModRules)
{
  return 0;
}


// CGameRules::ShouldBurningPropsEmitLight  (line 402, @0x000000000227a8f0, libserver.so)
bool __fastcall CGameRules::ShouldBurningPropsEmitLight(CGameRules *const this)
{
  return 0;
}


// CGameRules::CanEntityBeUsePushed  (line 404, @0x000000000227a900, libserver.so)
bool __fastcall CGameRules::CanEntityBeUsePushed(CGameRules *const this, CBaseEntity *pEnt)
{
  return 1;
}


// CGameRules::CreateCustomNetworkStringTables  (line 406, @0x000000000227a910, libserver.so)
void __fastcall CGameRules::CreateCustomNetworkStringTables(CGameRules *const this)
{
  ;
}


// CGameRules::ResetMapCycleTimeStamp  (line 411, @0x000000000227a920, libserver.so)
void __fastcall CGameRules::ResetMapCycleTimeStamp(CGameRules *const this)
{
  ;
}


// CGameRules::OnNavMeshLoad  (line 413, @0x000000000227a930, libserver.so)
void __fastcall CGameRules::OnNavMeshLoad(CGameRules *const this)
{
  ;
}


// CGameRules::UpdateGameplayStatsFromSteam  (line 415, @0x000000000227a940, libserver.so)
void __fastcall CGameRules::UpdateGameplayStatsFromSteam(CGameRules *const this)
{
  ;
}


// CGameRules::PreFatalShutdown  (line 419, @0x000000000227a950, libserver.so)
void __fastcall CGameRules::PreFatalShutdown(CGameRules *const this)
{
  ;
}


// CGameRules::GetGameTypeName  (line 422, @0x000000000227a960, libserver.so)
const char *__fastcall CGameRules::GetGameTypeName(CGameRules *const this)
{
  return 0;
}


// CGameRules::GetGameType  (line 423, @0x000000000227a970, libserver.so)
int __fastcall CGameRules::GetGameType(CGameRules *const this)
{
  return 0;
}


// CGameRules::ForceSplitScreenPlayersOnToSameTeam  (line 425, @0x000000000227a980, libserver.so)
bool __fastcall CGameRules::ForceSplitScreenPlayersOnToSameTeam(CGameRules *const this)
{
  return 1;
}


// CGameRules::IsTopDown  (line 427, @0x000000000227a990, libserver.so)
bool __fastcall CGameRules::IsTopDown(CGameRules *const this)
{
  return 0;
}


// CGameRules::GetTopDownMovementAxis  (line 428, @0x000000000227a9a0, libserver.so)
const QAngle *__fastcall CGameRules::GetTopDownMovementAxis(CGameRules *const this)
{
  return &vec3_angle;
}


// CGameRules::GetMaxHumanPlayers  (line 431, @0x000000000227a9b0, libserver.so)
int __fastcall CGameRules::GetMaxHumanPlayers(const CGameRules *const this)
{
  return -1;
}


// CGameRules::ShouldPlayerReceiveStringTableUserData  (line 435, @0x000000000227a9c0, libserver.so)
bool __fastcall CGameRules::ShouldPlayerReceiveStringTableUserData(
        CGameRules *const this,
        CEntityIndex nPlayerEntIndex,
        const INetworkStringTable *pTable,
        int stringNumber)
{
  return 1;
}


// CGameRules::FindEntityByUnitType  (line 439, @0x000000000227a9d0, libserver.so)
CBaseEntity *__fastcall CGameRules::FindEntityByUnitType(
        CGameRules *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  return 0;
}


// CGameRules::FindEntityByUnitTypeWithin  (line 440, @0x000000000227a9e0, libserver.so)
CBaseEntity *__fastcall CGameRules::FindEntityByUnitTypeWithin(
        CGameRules *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator)
{
  return 0;
}


// CGameRules::FindEntityByUnitTypeNearest  (line 441, @0x000000000227a9f0, libserver.so)
CBaseEntity *__fastcall CGameRules::FindEntityByUnitTypeNearest(
        CGameRules *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  return 0;
}


