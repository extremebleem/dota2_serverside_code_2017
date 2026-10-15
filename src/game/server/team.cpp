// Reconstructed from DWARF by pahole; not original source.

// src/game/server/team.cpp:27
class C_CTeam_MapInstall {
	C_CTeam_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetGlobalTeam  (line 19, @0x00000000023c9140, libserver.so)  // inlines: operator[]
// callers: CBaseEntity::GetTeam, CBaseEntity::InSameTeam, CBaseEntity::TeamID, CBaseEntity::IsInTeam, CEventLog::PrintPlayerEvent, CBasePlayer::ChangeTeam, CSceneEntity::AddBroadcastTeamTarget, CSceneEntity::RemoveBroadcastTeamTarget, GetTeamName, FindCustomGameTeamWithMostFreeSpaces, CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_CombatLog::GenerateTimedStats (90 total)
// globals: g_Teams
CTeam *__fastcall GetGlobalTeam(int iIndex)
{
  CTeam *result; // rax

  result = 0;
  if ( iIndex >= 0 && iIndex < g_Teams.m_Size )
    return g_Teams.m_Memory.m_pMemory[iIndex];
  return result;
}


// CTeam::YouForgotToImplementOrDeclareServerClass  (line 27, @0x00000000023baef0, libserver.so)
int __fastcall CTeam::YouForgotToImplementOrDeclareServerClass(CTeam *const this)
{
  return 0;
}


// CTeam::GetServerClass  (line 27, @0x00000000023c2f80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CTeam::GetServerClass(CTeam *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CTeam::CEntityInstanceEntityClass::InitOptionalTables  (line 30, @0x00000000023c9170, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CTeam::SetupEntClassInputs, CTeam::SetupEntClassComponentOverrides, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// strings: "team_manager"
// globals: `guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass, CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass, __dso_handle, CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo, CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo
bool __cdecl CTeam::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass);
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass._vptr_CEntityClass = off_3FE1370;
    __cxa_guard_release(&`guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass);
    __cxa_atexit(
      CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCTeamClass == 0 )
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
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pClassInfo = &CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pBaseClassInfo = CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo.m_pBaseClassInfo;
    g_pEntityCTeamClass = &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass;
    CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo.m_pClass = &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    CTeam::SetupEntClassInputs(g_pEntityCTeamClass);
    CTeam::SetupEntClassComponentOverrides(g_pEntityCTeamClass);
  }
  CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_flags |= 4u;
  return 1;
}


// GetNumberOfTeams  (line 38, @0x00000000023c92c0, libserver.so)
// globals: g_Teams
int __cdecl GetNumberOfTeams()
{
  return g_Teams.m_Size;
}


// GetTeamName  (line 43, @0x00000000023c92d0, libserver.so)
// calls: GetGlobalTeam
// callers: CBasePlayer::EnsureSplitScreenTeam
// strings: "UNKNOWN TEAM"
const char *__fastcall GetTeamName(int iTeam)
{
  CTeam *GlobalTeam; // rax

  GlobalTeam = GetGlobalTeam(iTeam);
  if ( GlobalTeam != 0 )
    return (*(GlobalTeam->_vptr_IHandleEntity + 208))(GlobalTeam);
  else
    return "UNKNOWN TEAM";
}


// CTeam::CTeam  (line 60, @0x00000000023c9300, libserver.so)  // inlines: AddEFlags, CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue<int>, GetForModify, NetworkStateChanged, Purge, RemoveAll, V_memset, memset, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CTeamSpawnPoint*, int>::Purge
// callers: CTeam::CEntityInstanceEntityClass::ConstructInstance, CDOTATeam::CDOTATeam
void __fastcall CTeam::CTeam(CTeam *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40B6DF0;
  this->m_aSpawnPoints.m_Size = 0;
  this->m_aSpawnPoints.m_Memory.m_pMemory = 0;
  this->m_aSpawnPoints.m_Memory.m_nAllocationCount = 0;
  this->m_aSpawnPoints.m_Memory.m_nGrowSize = 0;
  this->m_aPlayers.m_Vector.m_Size = 0;
  this->m_aPlayers.m_Vector.m_Memory.m_pMemory = 0;
  this->m_aPlayers.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_iScore.m_Value = 0;
  this->m_iRoundsWon.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x340u, -1, -1);
  *this->m_szTeamname.m_Value = 0;
  this->m_iEFlags |= 0x10u;
}


// CTeam::UpdateOnRemove  (line 70, @0x00000000023d5610, libserver.so)  // inlines: NetworkStateChanged, Purge, RemoveAll
// calls: CUtlMemory<CTeamSpawnPoint*, int>::Purge, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlVectorBase<CTeam*, CUtlMemory<CTeam*, int> >::FindAndRemove, CBaseEntity::UpdateOnRemove
// globals: g_Teams
void __fastcall CTeam::UpdateOnRemove(CTeam *const this)
{
  bool v2; // zf
  int m_Size; // r12d
  CTeam *src; // [rsp+8h] [rbp-18h] BYREF

  this->m_aSpawnPoints.m_Size = 0;
  if ( (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory);
  v2 = (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  m_Size = this->m_aPlayers.m_Vector.m_Size;
  this->m_aPlayers.m_Vector.m_Size = 0;
  if ( v2 )
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_aPlayers.m_Vector.m_Memory);
  if ( m_Size > 0 )
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  src = this;
  CUtlVectorBase<CTeam *,CUtlMemory<CTeam *,int>>::FindAndRemove(&g_Teams, &src);
  CBaseEntity::UpdateOnRemove(this);
}


// CTeam::Think  (line 81, @0x00000000023baf00, libserver.so)
void __fastcall CTeam::Think(CTeam *const this)
{
  ;
}


// CTeam::UpdateTransmitState  (line 88, @0x00000000023bb720, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CTeam::UpdateTransmitState(CTeam *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CTeam::ShouldTransmitToPlayer  (line 96, @0x00000000023baf10, libserver.so)
int __fastcall CTeam::ShouldTransmitToPlayer(
        CTeam *const this,
        const CGameCheckTransmitInfo *pInfo,
        CBaseEntity *pEntity)
{
  int result; // eax

  result = 16;
  if ( pInfo->m_bRecipientIsObserver && pInfo->m_pObserverTarget == pEntity )
    return 4;
  return result;
}


// CTeam::Init  (line 108, @0x00000000023bf540, libserver.so)  // inlines: GetForModify, NetworkStateChanged, Set, V_strncpy<int>, operator=<int>
// calls: _V_strncpy
void __fastcall CTeam::Init(CTeam *const this, const char *pName, int iNumber)
{
  unsigned __int8 v4; // r12

  v4 = iNumber;
  (*(this->_vptr_IHandleEntity + 211))(this);
  (*(this->_vptr_IHandleEntity + 215))(this);
  if ( this->m_iScore.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iScore.m_Value = 0;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_szTeamname, pName, 129);
  if ( v4 != this->m_iTeamNum.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 383, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTeamNum.m_Value = v4;
  }
}


// CTeam::GetName  (line 126, @0x00000000023baf30, libserver.so)
const char *__fastcall CTeam::GetName(CTeam *const this)
{
  return this->m_szTeamname.m_Value;
}


// CTeam::UpdateClientData  (line 135, @0x00000000023baf40, libserver.so)
void __fastcall CTeam::UpdateClientData(CTeam *const this, CBasePlayer *pPlayer)
{
  ;
}


// CTeam::InitializeSpawnpoints  (line 144, @0x00000000023baf50, libserver.so)
void __fastcall CTeam::InitializeSpawnpoints(CTeam *const this)
{
  this->m_iLastSpawn = 0;
}


// CTeam::AddSpawnpoint  (line 152, @0x00000000023e2410, libserver.so)  // inlines: AddToTail, CopyConstruct<CTeamSpawnPoint*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CTeamSpawnPoint*, int>::Grow
void __fastcall CTeam::AddSpawnpoint(CTeam *const this, CTeamSpawnPoint *pSpawnpoint)
{
  __int64 m_Size; // r12
  int v5; // eax
  CTeamSpawnPoint **v6; // rax

  m_Size = this->m_aSpawnPoints.m_Size;
  v5 = this->m_aSpawnPoints.m_Size;
  if ( m_Size == this->m_aSpawnPoints.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CTeamSpawnPoint *,int>::Grow(&this->m_aSpawnPoints.m_Memory, 1);
    v5 = this->m_aSpawnPoints.m_Size;
  }
  this->m_aSpawnPoints.m_Size = v5 + 1;
  v6 = &this->m_aSpawnPoints.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pSpawnpoint;
}


// CTeam::RemoveSpawnpoint  (line 160, @0x00000000023bf670, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CTeam::RemoveSpawnpoint(CTeam *const this, CTeamSpawnPoint *pSpawnpoint)
{
  int m_Size; // edx
  CTeamSpawnPoint **m_pMemory; // rdi
  int v5; // ecx
  CTeamSpawnPoint **v6; // rax
  CTeamSpawnPoint **v7; // r8

  m_Size = this->m_aSpawnPoints.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_aSpawnPoints.m_Memory.m_pMemory;
    v5 = 0;
    v6 = m_pMemory + 1;
    if ( *m_pMemory == pSpawnpoint )
    {
      v7 = m_pMemory;
      v5 = 0;
LABEL_7:
      if ( m_Size - v5 - 1 > 0 )
      {
        memmove(v7, &m_pMemory[v5 + 1], 8LL * (m_Size - v5 - 1));
        m_Size = this->m_aSpawnPoints.m_Size;
      }
      this->m_aSpawnPoints.m_Size = m_Size - 1;
    }
    else
    {
      while ( ++v5 != m_Size )
      {
        v7 = v6++;
        if ( *(v6 - 1) == pSpawnpoint )
          goto LABEL_7;
      }
    }
  }
}


// CTeam::SpawnPlayer  (line 175, @0x00000000023dc620, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
CBaseEntity *__fastcall CTeam::SpawnPlayer(CTeam *const this, CBasePlayer *pPlayer)
{
  int m_iLastSpawn; // ebx
  int v5; // ecx
  int m_Size; // eax
  int v7; // edx
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // r12
  CTeamSpawnPoint *v11; // rdx
  CTeamSpawnPoint **m_pMemory; // rax
  int iStartingSpawn; // [rsp+Ch] [rbp-44h]
  CVariant value; // [rsp+10h] [rbp-40h] BYREF

  if ( this->m_aSpawnPoints.m_Size == 0 )
    return 0;
  m_iLastSpawn = this->m_iLastSpawn;
  v5 = m_iLastSpawn + (*(*random_valve + 16LL))(random_valve, 1, 3);
  m_Size = this->m_aSpawnPoints.m_Size;
  v7 = v5 - m_Size;
  if ( v5 < m_Size )
    v7 = v5;
  v8 = 0;
  v9 = v7;
  iStartingSpawn = v7;
  while ( 1 )
  {
    if ( v9 >= m_Size )
    {
      ++v8;
      v10 = 0;
      v9 = 0;
      if ( v8 > 3 )
        break;
    }
    else
    {
      v10 = v9;
    }
    if ( (*(*this->m_aSpawnPoints.m_Memory.m_pMemory[v10] + 1656LL))(
           this->m_aSpawnPoints.m_Memory.m_pMemory[v10],
           pPlayer) != 0 )
      break;
    if ( iStartingSpawn == ++v9 )
      return 0;
    m_Size = this->m_aSpawnPoints.m_Size;
  }
  v11 = this->m_aSpawnPoints.m_Memory.m_pMemory[v10];
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal((v11 + 776), pPlayer, v11, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  m_pMemory = this->m_aSpawnPoints.m_Memory.m_pMemory;
  this->m_iLastSpawn = v9;
  return m_pMemory[v10];
}


// CTeam::InitializePlayers  (line 217, @0x00000000023baf60, libserver.so)
void __fastcall CTeam::InitializePlayers(CTeam *const this)
{
  ;
}


// CTeam::AddPlayer  (line 224, @0x00000000023e2fd0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBasePlayer> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, NetworkStateChanged, Set, operator[]
// calls: CUtlMemory<CHandle<CBasePlayer>, int>::Grow
void __fastcall CTeam::AddPlayer(CTeam *const this, CBasePlayer *pPlayer)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  unsigned int m_Size; // r12d
  int v6; // eax
  CHandle<CBasePlayer> *v7; // rax
  int v8; // [rsp+0h] [rbp-20h]

  v8 = -1;
  if ( pPlayer != 0 )
  {
    m_pEntity = pPlayer->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  m_Size = this->m_aPlayers.m_Vector.m_Size;
  v6 = m_Size;
  if ( m_Size == this->m_aPlayers.m_Vector.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBasePlayer>,int>::Grow(&this->m_aPlayers.m_Vector.m_Memory, 1);
    v6 = this->m_aPlayers.m_Vector.m_Size;
  }
  this->m_aPlayers.m_Vector.m_Size = v6 + 1;
  v7 = &this->m_aPlayers.m_Vector.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    v7->m_Index = v8;
  (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  (*(this->_vptr_IHandleEntity + 22))(this, 800, m_Size, 0xFFFFFFFFLL);
  (*(this->_vptr_IHandleEntity + 21))(this);
}


// CTeam::RemovePlayer  (line 233, @0x00000000023c0b90, libserver.so)  // inlines: CEntityHandle, CHandle, Element, Find, FindAndRemove, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, IsValidIndex, LookupEntity, NetworkStateChanged, Remove, Set, ShiftElementsLeft, V_memmove, memmove, operator CEntityInstance*, operator==<CBasePlayer>, operator[]
// calls: memmove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTeam::RemovePlayer(CTeam *const this, CBasePlayer *pPlayer)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  int m_Size; // r9d
  int v6; // ebx
  CHandle<CBasePlayer> *m_pMemory; // rax
  CEntityInstance *v8; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v15; // rdx
  int v16; // [rsp+10h] [rbp-40h]

  v16 = -1;
  if ( pPlayer != 0 )
  {
    m_pEntity = pPlayer->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v16 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  m_Size = this->m_aPlayers.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v6 = 0;
    m_pMemory = this->m_aPlayers.m_Vector.m_Memory.m_pMemory;
    while ( 1 )
    {
      m_pInstance = 0;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[m_pMemory->m_Index & 0x1FF];
          if ( v13 != 0 && m_pMemory->m_Index == v13->m_EHandle.m_Index )
            m_pInstance = v13->m_pInstance;
        }
      }
      v8 = 0;
      if ( (v16 + 2) > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 & 0x7FFF) >> 9];
        if ( v9 != 0 )
        {
          v10 = &v9[v16 & 0x1FF];
          if ( v10 != 0 && v10->m_EHandle.m_Index == v16 )
            v8 = v10->m_pInstance;
        }
      }
      if ( m_pInstance == v8 )
        break;
      ++v6;
      ++m_pMemory;
      if ( v6 == m_Size )
        goto LABEL_25;
    }
    if ( v6 < m_Size )
    {
      if ( m_Size - v6 - 1 > 0 )
      {
        memmove(m_pMemory, &this->m_aPlayers.m_Vector.m_Memory.m_pMemory[v6 + 1], 4LL * (m_Size - v6 - 1));
        m_Size = this->m_aPlayers.m_Vector.m_Size;
      }
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      this->m_aPlayers.m_Vector.m_Size = m_Size - 1;
      vptr_IHandleEntity[22](this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      while ( v6 < this->m_aPlayers.m_Vector.m_Size )
      {
        v15 = v6++;
        (*(this->_vptr_IHandleEntity + 22))(this, 800, v15, 0xFFFFFFFFLL);
      }
    }
  }
LABEL_25:
  (*(this->_vptr_IHandleEntity + 21))(this);
}


// CTeam::GetNumPlayers  (line 242, @0x00000000023baf70, libserver.so)
int __fastcall CTeam::GetNumPlayers(CTeam *const this)
{
  return this->m_aPlayers.m_Vector.m_Size;
}


// CTeam::GetPlayer  (line 250, @0x00000000023c0910, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBasePlayer*, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
CBasePlayer *__fastcall CTeam::GetPlayer(CTeam *const this, int iIndex)
{
  CHandle<CBasePlayer> *v2; // rcx
  CBasePlayer *result; // rax
  uint32 m_Index; // edx
  __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  v2 = &this->m_aPlayers.m_Vector.m_Memory.m_pMemory[iIndex];
  result = 0;
  m_Index = v2->m_Index;
  if ( v2->m_Index + 2 > 1 )
  {
    v5 = v2->m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v2->m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        return v7->m_pInstance;
    }
  }
  return result;
}


// CTeam::AddScore  (line 261, @0x00000000023bf860, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<int>
void __fastcall CTeam::AddScore(CTeam *const this, int iScore)
{
  int m_Value; // eax
  int v4; // r12d

  m_Value = this->m_iScore.m_Value;
  v4 = m_Value + iScore;
  if ( m_Value != m_Value + iScore )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iScore.m_Value = v4;
  }
}


// CTeam::SetScore  (line 266, @0x00000000023bf7e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CTeam::SetScore(CTeam *const this, int iScore)
{
  if ( this->m_iScore.m_Value != iScore )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iScore.m_Value = iScore;
  }
}


// CTeam::GetScore  (line 274, @0x00000000023baf80, libserver.so)
int __fastcall CTeam::GetScore(CTeam *const this)
{
  return this->m_iScore.m_Value;
}


// CTeam::ResetScores  (line 282, @0x00000000023baf90, libserver.so)
void __fastcall CTeam::ResetScores(CTeam *const this)
{
  (*(this->_vptr_IHandleEntity + 221))(this, 0);
}


// CTeam::AwardAchievement  (line 290, @0x00000000023e3d10, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CUserMessageAchievementEvent_t, CUserMessagePB, FindGameEvent<CUserMessageAchievementEvent_t>, FindOrCreateGameEvent<CUserMessageAchievementEvent_t>, PostEvent<CUserMessageAchievementEvent_t>, set_achievement, set_has_achievement, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessageAchievementEvent_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CUserMessageAchievementEvent::CUserMessageAchievementEvent, CUserMessageAchievementEvent::~CUserMessageAchievementEvent, CRecipientFilter::~CRecipientFilter, _Unwind_Resume, __stack_chk_fail
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent
void __fastcall CTeam::AwardAchievement(CTeam *const this, int iAchievement)
{
  unsigned int v4; // ebx
  int v5; // r13d
  const CEntityInstance *v6; // rax
  __int64 v7; // r13
  IGameEventSystem *v8; // r12
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v10[2]; // [rsp+18h] [rbp-198h] BYREF
  int v11; // [rsp+28h] [rbp-188h]
  int iAchievementa; // [rsp+30h] [rbp-180h]
  int v13; // [rsp+38h] [rbp-178h]
  CRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+178h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  v4 = 0;
  v5 = (*(this->_vptr_IHandleEntity + 218))(this);
  if ( v5 > 0 )
  {
    do
    {
      if ( (*(this->_vptr_IHandleEntity + 219))(this, v4) != 0 )
      {
        v6 = (*(this->_vptr_IHandleEntity + 219))(this, v4);
        CRecipientFilter::AddRecipient(&filter, v6);
      }
      ++v4;
    }
    while ( v4 != v5 );
  }
  CUserMessageAchievementEvent::CUserMessageAchievementEvent(v10);
  iAchievementa = iAchievement;
  v10[0] = off_3FFFF50;
  v11 |= 1u;
  v13 = 0;
  v7 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent;
  v8 = g_pGameEventSystem;
  v9 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent);
  v9(v8, 0, 0, &filter, v7, v10, 32);
  v10[0] = &off_3FFFDD0;
  CUserMessageAchievementEvent::~CUserMessageAchievementEvent(v10);
  CRecipientFilter::~CRecipientFilter(&filter);
}


