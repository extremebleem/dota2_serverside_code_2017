
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTATeam::~CDOTATeam  (line 16, @0x000000000274d3c0, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CGameEventListener, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CTeam, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CTeamSpawnPoint*, int>::Purge
void __fastcall CDOTATeam::~CDOTATeam(CDOTATeam *const this)
{
  bool v2; // zf

  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IHandleEntity = &off_42AB8F0;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->m_aPlayers.m_Vector.m_Size = 0;
  this->_vptr_IGameEventListener2 = off_3FB3150;
  v2 = (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40B6DF0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_aPlayers.m_Vector.m_Memory);
    if ( (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_aPlayers.m_Vector.m_Memory);
  }
  v2 = (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aSpawnPoints.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory),
        (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTATeam::~CDOTATeam  (line 16, @0x000000000274d4d0, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CDOTATeam, ~CGameEventListener, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CTeam, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CTeamSpawnPoint*, int>::Purge
void __fastcall CDOTATeam::~CDOTATeam(CDOTATeam *const this)
{
  bool v2; // zf

  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IHandleEntity = &off_42AB8F0;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->m_aPlayers.m_Vector.m_Size = 0;
  this->_vptr_IGameEventListener2 = off_3FB3150;
  v2 = (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40B6DF0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_aPlayers.m_Vector.m_Memory);
    if ( (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_aPlayers.m_Vector.m_Memory);
  }
  v2 = (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aSpawnPoints.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory);
    if ( (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTATeam::Schema_DynamicBinding  (line 18, @0x0000000002728690, libserver.so)
// globals: CDOTATeam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTATeam::Schema_DynamicBinding(const CDOTATeam *const this)
{
  return CDOTATeam::s_pSchemaBinding;
}


// CDOTATeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x00000000027286a0, libserver.so)
// globals: CDOTATeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTATeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTATeam::CEntityInstanceEntityClass *const this)
{
  return CDOTATeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTATeam::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x00000000027286b0, libserver.so)  // inlines: Destruct<CDOTATeam>
void __fastcall CDOTATeam::CEntityInstanceEntityClass::DestructInstance(
        CDOTATeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTATeam::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x00000000027286d0, libserver.so)
void __fastcall CDOTATeam::CEntityInstanceEntityClass::FreeInstance(
        CDOTATeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTATeam::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x00000000027286f0, libserver.so)
bool __fastcall CDOTATeam::CEntityInstanceEntityClass::CanAllocate(
        const CDOTATeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTATeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x0000000002728700, libserver.so)
// globals: CDOTATeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTATeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTATeam::CEntityInstanceEntityClass *const this)
{
  return CDOTATeam::s_pSchemaBinding;
}


// CDOTATeam::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000002736980, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTATeam::CEntityInstanceEntityClass::AllocateInstance(
        CDOTATeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1112);
  memset(v1, 0, 0x458u);
  return v1;
}


// CDOTATeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x000000000274d280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTATeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTATeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTATeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x000000000274d2a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTATeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTATeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTATeam::GetEntityClassInternal  (line 18, @0x000000000279e930, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "dota_team", "CDOTATeam", "team_manager"
// globals: `guard variable for'CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass, CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass, __dso_handle, CDOTATeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo, CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo, `guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo, CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo
CEntityClass *__cdecl CDOTATeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass);
    CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass._vptr_CEntityClass = off_42AB870;
    __cxa_guard_release(&`guard variable for'CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass);
    __cxa_atexit(
      CDOTATeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTATeamClass != 0 )
    return &CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass;
  if ( `guard variable for'CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo) != 0 )
  {
    if ( `guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo,
        "CTeam",
        "team_manager",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo,
      "CDOTATeam",
      "dota_team",
      0,
      &CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo);
  }
  CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass.m_pClassInfo = &CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo;
  CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass.m_pBaseClassInfo = CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTATeamClass = &CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass;
  CDOTATeam::GetEntityClassInfo(void)::g_EntityCDOTATeamClassInfo.m_pClass = &CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass;
  CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTATeamClass->m_pComponentOverrides = 0;
  return &CDOTATeam::GetEntityClassInternal(void)::g_EntityCDOTATeamClass;
}


// CDOTATeam::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x000000000279eac0, libserver.so)  // inlines: Construct<CDOTATeam>
// calls: CDOTATeam::CDOTATeam
CEntityInstance *__fastcall CDOTATeam::CEntityInstanceEntityClass::ConstructInstance(
        CDOTATeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTATeam::CDOTATeam(p);
  return p;
}


