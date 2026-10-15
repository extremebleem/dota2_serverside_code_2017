// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_spectator_graphs.cpp:39
class C_CDOTASpecGraphPlayerData_MapInstall {
	C_CDOTASpecGraphPlayerData_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_spectator_graphs.cpp:69
class C_CDOTASpectatorGraphManagerProxy_MapInstall {
	C_CDOTASpectatorGraphManagerProxy_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTASpecGraphPlayerData::YouForgotToImplementOrDeclareServerClass  (line 39, @0x00000000026bce40, libserver.so)
int __fastcall CDOTASpecGraphPlayerData::YouForgotToImplementOrDeclareServerClass(CDOTASpecGraphPlayerData *const this)
{
  return 0;
}


// CDOTASpecGraphPlayerData::GetServerClass  (line 39, @0x00000000026cc980, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTASpecGraphPlayerData::GetServerClass(CDOTASpecGraphPlayerData *const this)
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


// CDOTASpectatorGraphManagerProxy::YouForgotToImplementOrDeclareServerClass  (line 69, @0x00000000026bce50, libserver.so)
int __fastcall CDOTASpectatorGraphManagerProxy::YouForgotToImplementOrDeclareServerClass(
        CDOTASpectatorGraphManagerProxy *const this)
{
  return 0;
}


// CDOTASpectatorGraphManagerProxy::GetServerClass  (line 69, @0x00000000026cca00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTASpectatorGraphManagerProxy::GetServerClass(CDOTASpectatorGraphManagerProxy *const this)
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


// CDOTASpectatorGraphManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 85, @0x00000000026f1830, libserver.so)
void __cdecl CDOTASpectatorGraphManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// ShouldTrackGraphDataForPlayer  (line 87, @0x00000000026f1840, libserver.so)
bool __fastcall ShouldTrackGraphDataForPlayer(CBasePlayer *pPlayer)
{
  return pPlayer != 0 && pPlayer->m_iTeamNum.m_Value != 1 && !pPlayer->m_pl.hltv;
}


// GetTimelineValueByGameTime  (line 101, @0x00000000026bd840, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetStartTime
// calls: CTimeline::GetValueAtInterp
// callers: CDOTASpectatorGraphManager::SendTeamTotalEarnedGold, GetTimelineValueByGameTime, CDOTASpecGraphPlayerData::UpdateGoldPerMinStats, CDOTASpecGraphPlayerData::UpdateXPPerMinStats
float __fastcall GetTimelineValueByGameTime(float a1, float flGameTime, const CTimeline *pTimeline)
{
  float v3; // xmm2_4
  float m_Value; // xmm1_4
  float v5; // xmm0_4

  v3 = 0.0;
  m_Value = pTimeline->m_timestamp.m_Value;
  v5 = a1 - m_Value;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  return CTimeline::GetValueAtInterp(pTimeline, v5 / (v3 - m_Value), m_Value);
}


// GetTimelineValueByGameTime  (line 101, @0x00000000026f1870, libserver.so)
// calls: GetTimelineValueByGameTime
double __fastcall GetTimelineValueByGameTime(float a1, float flGameTime, const CTimeline *pTimeline)
{
  double result; // xmm0_8

  if ( pTimeline == 0 || pTimeline->m_nBucketCount.m_Value == 0 )
    return 0.0;
  *&result = GetTimelineValueByGameTime(a1, flGameTime, pTimeline);
  return result;
}


// CDOTASpecGraphPlayerData::ShouldTransmit  (line 120, @0x00000000026bd6f0, libserver.so)  // inlines: GetBool, GetInt, ShouldTrackGraphDataForPlayer
int __fastcall CDOTASpecGraphPlayerData::ShouldTransmit(
        CDOTASpecGraphPlayerData *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  CBasePlayer *m_pRecipientPlayer; // rdx
  int result; // eax

  m_pRecipientPlayer = pInfo->m_pRecipientPlayer;
  result = 4;
  if ( m_pRecipientPlayer != 0 && m_pRecipientPlayer->m_iTeamNum.m_Value != 1 && !m_pRecipientPlayer->m_pl.hltv )
    return dota_spectator_graph_networking_override.m_pParent->m_Value.m_nValue == 0 ? 8 : 4;
  return result;
}


// CDOTASpecGraphPlayerData::UpdateGoldPerMinStats  (line 137, @0x0000000002712d90, libserver.so)  // inlines: Count, DOTAGameRules, GetBool, GetGameTime, GetInt, GetStartTime, GetTimelineValueByGameTime, NetworkStateChanged, Set
// calls: CDOTA_PlayerResource::GetSelectedHeroName, V_sprintf_safe<256ul>, CDotaStatManager::GetStatTimeline, memcmp, GetTimelineValueByGameTime, __stack_chk_fail
// callers: CDOTASpectatorGraphManager::PreClientUpdate
// strings: "%s.goldperminute"
// globals: g_pDotaStatManager, g_pDotaSpectatorGraphManager
void __fastcall CDOTASpecGraphPlayerData::UpdateGoldPerMinStats(CDOTASpecGraphPlayerData *const this)
{
  int m_Value; // esi
  const char *SelectedHeroName; // rax
  CTimeline *StatTimeline; // rax
  float v5; // xmm0_4
  const CTimeline *v6; // r13
  float m_flStartTime; // xmm1_4
  int v8; // ebx
  CNetworkArrayBase<int,64,CDOTASpecGraphPlayerData::NetworkVar_m_rgGoldPerMinute> *p_m_rgGoldPerMinute; // r12
  int TimelineValueByGameTime; // r15d
  float flTimeInterpStep; // [rsp+8h] [rbp-168h]
  float v12; // [rsp+Ch] [rbp-164h]
  int v13; // [rsp+2Ch] [rbp-144h] BYREF
  char szStatName[256]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+138h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( dota_spectator_graph_networking_enabled.m_pParent->m_Value.m_nValue != 0
    && dota_spectator_graph_per_player_stats.m_pParent->m_Value.m_nValue != 0 )
  {
    m_Value = this->m_nCreatedByPlayerID.m_Value;
    memset(szStatName, 0, sizeof(szStatName));
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, m_Value);
    V_sprintf_safe<256ul>(szStatName, "%s.goldperminute", SelectedHeroName);
    StatTimeline = CDotaStatManager::GetStatTimeline(g_pDotaStatManager, this->m_nCreatedByPlayerID.m_Value, szStatName);
    v5 = 0.0;
    v6 = StatTimeline;
    m_flStartTime = g_pDotaSpectatorGraphManager->m_flStartTime;
    v12 = m_flStartTime;
    if ( g_pGameRules != 0 )
      v5 = *&g_pGameRules[18].m_szQuestName[20];
    v8 = 0;
    p_m_rgGoldPerMinute = &this->m_rgGoldPerMinute;
    flTimeInterpStep = (v5 - m_flStartTime) * 0.015625;
    do
    {
      if ( v6 != 0 )
      {
        TimelineValueByGameTime = v6->m_nBucketCount.m_Value;
        if ( TimelineValueByGameTime != 0 )
          TimelineValueByGameTime = GetTimelineValueByGameTime((v8 * flTimeInterpStep) + v12, m_flStartTime, v6);
        v13 = TimelineValueByGameTime;
        if ( memcmp(p_m_rgGoldPerMinute, &v13, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 776, v8, 0xFFFFFFFFLL);
          p_m_rgGoldPerMinute->m_Value[0] = TimelineValueByGameTime;
        }
      }
      ++v8;
      p_m_rgGoldPerMinute = (p_m_rgGoldPerMinute + 4);
    }
    while ( v8 != 64 );
  }
}


// CDOTASpecGraphPlayerData::UpdateXPPerMinStats  (line 157, @0x0000000002712f70, libserver.so)  // inlines: Count, DOTAGameRules, GetBool, GetGameTime, GetInt, GetStartTime, GetTimelineValueByGameTime, NetworkStateChanged, Set
// calls: CDOTA_PlayerResource::GetSelectedHeroName, V_sprintf_safe<256ul>, CDotaStatManager::GetStatTimeline, memcmp, GetTimelineValueByGameTime, __stack_chk_fail
// callers: CDOTASpectatorGraphManager::PreClientUpdate
// strings: "%s.xpperminute"
// globals: g_pDotaStatManager, g_pDotaSpectatorGraphManager
void __fastcall CDOTASpecGraphPlayerData::UpdateXPPerMinStats(CDOTASpecGraphPlayerData *const this)
{
  int m_Value; // esi
  const char *SelectedHeroName; // rax
  CTimeline *StatTimeline; // rax
  float v5; // xmm0_4
  const CTimeline *v6; // r13
  float m_flStartTime; // xmm1_4
  int v8; // ebx
  CNetworkArrayBase<int,64,CDOTASpecGraphPlayerData::NetworkVar_m_rgXPPerMinute> *p_m_rgXPPerMinute; // r12
  int TimelineValueByGameTime; // r15d
  float flTimeInterpStep; // [rsp+8h] [rbp-168h]
  float v12; // [rsp+Ch] [rbp-164h]
  int v13; // [rsp+2Ch] [rbp-144h] BYREF
  char szStatName[256]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+138h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( dota_spectator_graph_networking_enabled.m_pParent->m_Value.m_nValue != 0
    && dota_spectator_graph_per_player_stats.m_pParent->m_Value.m_nValue != 0 )
  {
    m_Value = this->m_nCreatedByPlayerID.m_Value;
    memset(szStatName, 0, sizeof(szStatName));
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, m_Value);
    V_sprintf_safe<256ul>(szStatName, "%s.xpperminute", SelectedHeroName);
    StatTimeline = CDotaStatManager::GetStatTimeline(g_pDotaStatManager, this->m_nCreatedByPlayerID.m_Value, szStatName);
    v5 = 0.0;
    v6 = StatTimeline;
    m_flStartTime = g_pDotaSpectatorGraphManager->m_flStartTime;
    v12 = m_flStartTime;
    if ( g_pGameRules != 0 )
      v5 = *&g_pGameRules[18].m_szQuestName[20];
    v8 = 0;
    p_m_rgXPPerMinute = &this->m_rgXPPerMinute;
    flTimeInterpStep = (v5 - m_flStartTime) * 0.015625;
    do
    {
      if ( v6 != 0 )
      {
        TimelineValueByGameTime = v6->m_nBucketCount.m_Value;
        if ( TimelineValueByGameTime != 0 )
          TimelineValueByGameTime = GetTimelineValueByGameTime((v8 * flTimeInterpStep) + v12, m_flStartTime, v6);
        v13 = TimelineValueByGameTime;
        if ( memcmp(p_m_rgXPPerMinute, &v13, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1032, v8, 0xFFFFFFFFLL);
          p_m_rgXPPerMinute->m_Value[0] = TimelineValueByGameTime;
        }
      }
      ++v8;
      p_m_rgXPPerMinute = (p_m_rgXPPerMinute + 4);
    }
    while ( v8 != 64 );
  }
}


// GetDOTASpectatorGraphManager  (line 217, @0x00000000026f18a0, libserver.so)
// callers: CDOTAGamerules::ClientMsg_RequestGraphUpdate, CDOTAGamerules::State_Enter_PRE_GAME, CDOTAGamerules::State_Enter_POST_GAME, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
// globals: g_pDotaSpectatorGraphManager
CDOTASpectatorGraphManager *__cdecl GetDOTASpectatorGraphManager()
{
  return g_pDotaSpectatorGraphManager;
}


// CDOTASpectatorGraphManager::CDOTASpectatorGraphManager  (line 222, @0x00000000026ffbb0, libserver.so)  // inlines: CEntityHandle, CEntityOwnerPtr, CGameEventListener, CHandle, CNetworkArrayBase, CNetworkVarBase, CNetworkVarChainer, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, ChangeAccessorFieldPathIndex_t, EnsureValidValue<int>, Get, NetworkStateChanged, Set, StopListeningForAllEvents, operator CEntityInstance*, ~CAutoGameSystem, ~CGameEventListener, ~CUtlVector, ~IGameEventListener2
// calls: CountdownTimer::CountdownTimer, memcmp, CDOTASpectatorGraphManager::Reset, CUtlVectorBase<sPlayerSnapshot, CUtlMemory<sPlayerSnapshot, int> >::~CUtlVectorBase, CGameEventListener::StopListeningForAllEvents, IGameSystem::~IGameSystem, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
void __fastcall CDOTASpectatorGraphManager::CDOTASpectatorGraphManager(CDOTASpectatorGraphManager *const this)
{
  CDOTASpectatorGraphManager *p_m_rgPlayerGraphData; // rax
  CEntityInstance *m_pObj; // rdi
  CUtlVectorBase<sPlayerSnapshot,CUtlMemory<sPlayerSnapshot,int> >::CAllocator *p_m_Memory; // rcx
  CDOTASpectatorGraphManager *v5; // rax
  CDOTASpectatorGraphManager *v6; // rdx
  signed __int64 v7; // rdx
  CNetworkArrayBase<int,64,CDOTASpectatorGraphManager::NetworkVar_m_rgRadiantTotalEarnedGold> *p_m_rgRadiantTotalEarnedGold; // rbx
  unsigned int i; // r14d
  CEntityInstance *v10; // rdi
  CEntityInstance *v11; // rdi
  CEntityInstance *v12; // rdi
  CEntityInstance *v13; // rdi
  CEntityInstance *v14; // rdi
  CEntityInstance *v15; // rdi
  _DWORD s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  this->_vptr_IGameSystem = &off_42A9F10;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameEventListener2 = off_42AA070;
  this->__m_pChainEntity.m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->__m_pChainEntity.m_PathIndex.m_Value = -1;
  this->__m_pChainEntity.m_pPropagationList = 0;
  this->m_nPlayerDataCount = 0;
  CountdownTimer::CountdownTimer(&this->m_SendTeamStatsTimer);
  this->m_bTrackingTeamStats = 0;
  p_m_rgPlayerGraphData = &this->m_rgPlayerGraphData;
  this->m_flStartTime = 0.0;
  this->m_nNextUpdatePlayer = 0;
  this->m_nNextUpdateStat = DOTAStatUpdate_t::DSU_GOLD_PER_MIN;
  do
  {
    LODWORD(p_m_rgPlayerGraphData->_vptr_IGameSystem) = -1;
    p_m_rgPlayerGraphData = (p_m_rgPlayerGraphData + 4);
  }
  while ( p_m_rgPlayerGraphData != &this->m_rgRadiantTotalEarnedGold );
  this->m_flTotalEarnedGoldStartTime.m_Value = 0.0;
  m_pObj = this->__m_pChainEntity.m_pObj;
  if ( m_pObj != 0 )
  {
    if ( (m_pObj->m_pEntity->m_flags & 0x400) != 0 )
    {
      this->m_flTotalEarnedGoldEndTime.m_Value = 0.0;
      goto LABEL_6;
    }
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 1736, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_flTotalEarnedGoldEndTime.m_Value = 0.0;
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 )
    {
LABEL_6:
      if ( (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 1740, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    }
  }
  else
  {
    this->m_flTotalEarnedGoldEndTime.m_Value = 0.0;
  }
  this->m_nGoldGraphVersion.m_Value = 0;
  CountdownTimer::CountdownTimer(&this->m_TeamStatsUpdateTimer);
  CountdownTimer::CountdownTimer(&this->m_HeroInventorySnapshotTimer);
  p_m_Memory = &this->m_vecPlayerSnapshots[0].m_Memory;
  v5 = &this->m_vecPlayerSnapshots[0].m_Memory;
  do
  {
    v6 = v5;
    v5[-1].m_event_dota_player_pick_hero = 0;
    v5 = (v5 + 24);
    v7 = v6 - this->m_vecPlayerSnapshots;
    *(p_m_Memory + v7 - 8) = 0;
    *(&p_m_Memory->m_pMemory + v7) = 0;
    *(&p_m_Memory->m_pMemory + v7 + 4) = 0;
  }
  while ( v5 != &this->m_event_dota_player_pick_hero );
  p_m_rgRadiantTotalEarnedGold = &this->m_rgRadiantTotalEarnedGold;
  for ( i = 0; i != 64; ++i )
  {
    while ( 1 )
    {
      s2[0] = 0;
      if ( memcmp(p_m_rgRadiantTotalEarnedGold, s2, 4u) != 0 )
      {
        v10 = this->__m_pChainEntity.m_pObj;
        if ( v10 != 0 && (v10->m_pEntity->m_flags & 0x400) == 0 )
          (*(v10->_vptr_IHandleEntity + 22))(v10, 200, i, this->__m_pChainEntity.m_PathIndex.m_Value);
        p_m_rgRadiantTotalEarnedGold->m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_rgRadiantTotalEarnedGold[1], s2, 4u) != 0 )
      {
        v15 = this->__m_pChainEntity.m_pObj;
        if ( v15 != 0 && (v15->m_pEntity->m_flags & 0x400) == 0 )
          (*(v15->_vptr_IHandleEntity + 22))(v15, 456, i, this->__m_pChainEntity.m_PathIndex.m_Value);
        p_m_rgRadiantTotalEarnedGold[1].m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_rgRadiantTotalEarnedGold[2], s2, 4u) != 0 )
      {
        v14 = this->__m_pChainEntity.m_pObj;
        if ( v14 != 0 && (v14->m_pEntity->m_flags & 0x400) == 0 )
          (*(v14->_vptr_IHandleEntity + 22))(v14, 712, i, this->__m_pChainEntity.m_PathIndex.m_Value);
        p_m_rgRadiantTotalEarnedGold[2].m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_rgRadiantTotalEarnedGold[3], s2, 4u) != 0 )
      {
        v13 = this->__m_pChainEntity.m_pObj;
        if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 )
          (*(v13->_vptr_IHandleEntity + 22))(v13, 968, i, this->__m_pChainEntity.m_PathIndex.m_Value);
        p_m_rgRadiantTotalEarnedGold[3].m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_rgRadiantTotalEarnedGold[4], s2, 4u) != 0 )
      {
        v12 = this->__m_pChainEntity.m_pObj;
        if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 )
          (*(v12->_vptr_IHandleEntity + 22))(v12, 1224, i, this->__m_pChainEntity.m_PathIndex.m_Value);
        p_m_rgRadiantTotalEarnedGold[4].m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_rgRadiantTotalEarnedGold[5], s2, 4u) != 0 )
        break;
      ++i;
      p_m_rgRadiantTotalEarnedGold = (p_m_rgRadiantTotalEarnedGold + 4);
      if ( i == 64 )
        goto LABEL_28;
    }
    v11 = this->__m_pChainEntity.m_pObj;
    if ( v11 != 0 && (v11->m_pEntity->m_flags & 0x400) == 0 )
      (*(v11->_vptr_IHandleEntity + 22))(v11, 1480, i, this->__m_pChainEntity.m_PathIndex.m_Value);
    p_m_rgRadiantTotalEarnedGold = (p_m_rgRadiantTotalEarnedGold + 4);
    p_m_rgRadiantTotalEarnedGold[4].m_Value[63] = 0;
  }
LABEL_28:
  CDOTASpectatorGraphManager::Reset(this);
}


// CDOTASpectatorGraphManager::~CDOTASpectatorGraphManager  (line 248, @0x00000000026caa80, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CAutoGameSystem, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlMemory<sPlayerSnapshot, int>::Purge, IGameSystem::~IGameSystem
// callers: CDOTASpectatorGraphManager::~CDOTASpectatorGraphManager
void __fastcall CDOTASpectatorGraphManager::~CDOTASpectatorGraphManager(CDOTASpectatorGraphManager *const this)
{
  CUtlVector<sPlayerSnapshot,CUtlMemory<sPlayerSnapshot,int> > *m_vecPlayerSnapshots; // r13
  int *p_m_event_dota_player_killed; // rbx
  bool v4; // zf
  CUtlMemory<sPlayerSnapshot,int> *v5; // rdi

  m_vecPlayerSnapshots = this->m_vecPlayerSnapshots;
  p_m_event_dota_player_killed = &this->m_event_dota_player_killed;
  this->_vptr_IGameSystem = &off_42A9F10;
  this->_vptr_IGameEventListener2 = off_42AA070;
  do
  {
    while ( 1 )
    {
      v4 = (*(p_m_event_dota_player_killed - 1) & 0xC0000000) == 0;
      *(p_m_event_dota_player_killed - 6) = 0;
      if ( v4 )
      {
        CUtlMemory<sPlayerSnapshot,int>::Purge(p_m_event_dota_player_killed - 1);
        if ( (*(p_m_event_dota_player_killed - 1) & 0xC0000000) == 0 )
          break;
      }
      p_m_event_dota_player_killed -= 6;
      if ( m_vecPlayerSnapshots == p_m_event_dota_player_killed )
        goto LABEL_6;
    }
    v5 = (p_m_event_dota_player_killed - 4);
    p_m_event_dota_player_killed -= 6;
    CUtlMemory<sPlayerSnapshot,int>::Purge(v5);
  }
  while ( m_vecPlayerSnapshots != p_m_event_dota_player_killed );
LABEL_6:
  v4 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v4 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTASpectatorGraphManager::~CDOTASpectatorGraphManager  (line 248, @0x00000000026cab70, libserver.so)
// calls: CDOTASpectatorGraphManager::~CDOTASpectatorGraphManager, operator delete
void __fastcall CDOTASpectatorGraphManager::~CDOTASpectatorGraphManager(CDOTASpectatorGraphManager *const this)
{
  CDOTASpectatorGraphManager::~CDOTASpectatorGraphManager(this);
  operator delete(this);
}


// CDOTASpectatorGraphManagerProxy::NotifyNetworkStateChanged  (line 252, @0x00000000026f18b0, libserver.so)
// globals: CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy
void __cdecl CDOTASpectatorGraphManagerProxy::NotifyNetworkStateChanged()
{
  if ( CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy != 0 )
    (*(CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy->_vptr_IHandleEntity + 21))(CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy);
}


// CDOTASpectatorGraphManagerProxy::ShouldTransmit  (line 261, @0x00000000026bce60, libserver.so)
int __fastcall CDOTASpectatorGraphManagerProxy::ShouldTransmit(
        CDOTASpectatorGraphManagerProxy *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  if ( pInfo->m_nRecipientTeamNumber == 1 || pInfo->m_bRecipientHLTV )
    return 4;
  else
    return 8;
}


// CDOTASpectatorGraphManagerProxy::CDOTASpectatorGraphManagerProxy  (line 280, @0x00000000026f18e0, libserver.so)  // inlines: GetDOTASpectatorGraphManager, Set, operator(), operator=
// calls: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::ConstructInstance
// globals: g_pDotaSpectatorGraphManager, CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy
void __fastcall CDOTASpectatorGraphManagerProxy::CDOTASpectatorGraphManagerProxy(
        CDOTASpectatorGraphManagerProxy *const this)
{
  CDOTASpectatorGraphManager *v2; // rax
  CNetworkVarChainer *p_m_pChainEntity; // r12
  CNetworkVarChainer::ChainUpdatePropagationLL_t *i; // rbx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v6; // rdi

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_42A9810;
  v2 = g_pDotaSpectatorGraphManager;
  CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy = this;
  this->m_pGraphManager = g_pDotaSpectatorGraphManager;
  p_m_pChainEntity = &v2->__m_pChainEntity;
  if ( this != v2->__m_pChainEntity.m_pObj )
    v2->__m_pChainEntity.m_pObj = this;
  for ( i = v2->__m_pChainEntity.m_pPropagationList; i != 0; i = i->pNext )
  {
    pfn = i->updateDelegate.m_Closure.m_pFunction.__pfn;
    v6 = (i->updateDelegate.m_Closure.m_pthis + i->updateDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v6 - 1);
    (pfn)(v6, p_m_pChainEntity);
  }
}


// CDOTASpectatorGraphManagerProxy::~CDOTASpectatorGraphManagerProxy  (line 289, @0x00000000026bd150, libserver.so)
// calls: CBaseEntity::~CBaseEntity
// globals: CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy
void __fastcall CDOTASpectatorGraphManagerProxy::~CDOTASpectatorGraphManagerProxy(
        CDOTASpectatorGraphManagerProxy *const this)
{
  this->_vptr_IHandleEntity = &off_42A9810;
  CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy = 0;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTASpectatorGraphManagerProxy::~CDOTASpectatorGraphManagerProxy  (line 289, @0x00000000026bd170, libserver.so)  // inlines: ~CDOTASpectatorGraphManagerProxy
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
// globals: CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy
void __fastcall CDOTASpectatorGraphManagerProxy::~CDOTASpectatorGraphManagerProxy(
        CDOTASpectatorGraphManagerProxy *const this)
{
  this->_vptr_IHandleEntity = &off_42A9810;
  CDOTASpectatorGraphManagerProxy::s_pDotaSpectatorGraphProxy = 0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTASpectatorGraphManager::FireGameEvent  (line 294, @0x00000000026f2060, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetCountdownDuration, GetEHandle, GetEntryIndex, GetGameTime, GetRemainingTime, GetSerialNumber, NetworkStateChanged, Set, ShouldTrackGraphDataForPlayer, StartFromTime, operator=<float>, operator><float>
// calls: CountdownTimer::Now, UTIL_PlayerByIndex, CDOTASpectatorGraphManager::CreateGraphDataForPlayerEnt, CDOTASpectatorGraphManager::Reset
void __fastcall CDOTASpectatorGraphManager::FireGameEvent(CDOTASpectatorGraphManager *const this, IGameEvent *event)
{
  int v4; // eax
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  CEntityIndex v10; // eax
  CBasePlayer *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  float m_Value; // [rsp+8h] [rbp-28h]
  float v15; // [rsp+8h] [rbp-28h]
  float v16; // [rsp+Ch] [rbp-24h]
  float v17; // [rsp+Ch] [rbp-24h]
  EHANDLE hPlayer; // [rsp+10h] [rbp-20h] BYREF

  v4 = (*(event->_vptr_IGameEvent + 3))(event);
  if ( v4 == this->m_event_dota_player_killed )
  {
    if ( this->m_SendTeamStatsTimer.m_timestamp.m_Value > 0.0 )
    {
      m_Value = this->m_TeamStatsUpdateTimer.m_timestamp.m_Value;
      if ( (m_Value - CountdownTimer::Now(&this->m_TeamStatsUpdateTimer)) > 1.0 )
      {
        v5 = 0.0;
        v6 = this->m_TeamStatsUpdateTimer.m_timestamp.m_Value;
        v7 = 0.0;
        if ( v6 > 0.0 )
          v7 = this->m_TeamStatsUpdateTimer.m_duration.m_Value;
        if ( g_pGameRules != 0 )
          v8 = *&g_pGameRules[18].m_szQuestName[20];
        else
          v8 = 0.0;
        if ( v6 > 0.0 )
          v5 = this->m_TeamStatsUpdateTimer.m_duration.m_Value;
        v9 = ((v8 - v5) + 1.0) + v7;
        if ( v6 != v9 )
        {
          v15 = v9;
          v17 = v7;
          (*(this->m_TeamStatsUpdateTimer._vptr_CountdownTimer + 2))(
            &this->m_TeamStatsUpdateTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          v7 = v17;
          this->m_TeamStatsUpdateTimer.m_timestamp.m_Value = v15;
        }
        if ( v7 != this->m_TeamStatsUpdateTimer.m_duration.m_Value )
        {
          v16 = v7;
          (*(this->m_TeamStatsUpdateTimer._vptr_CountdownTimer + 2))(
            &this->m_TeamStatsUpdateTimer,
            8,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_TeamStatsUpdateTimer.m_duration.m_Value = v16;
        }
      }
    }
  }
  else if ( v4 == this->m_event_server_pre_shutdown )
  {
    CDOTASpectatorGraphManager::Reset(this);
  }
  else if ( v4 == this->m_event_dota_player_pick_hero )
  {
    v10.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "player", 0);
    v11 = UTIL_PlayerByIndex(v10);
    if ( v11 != 0 && v11->m_iTeamNum.m_Value != 1 && !v11->m_pl.hltv )
    {
      m_pEntity = v11->m_pEntity;
      hPlayer.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hPlayer.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      }
      CDOTASpectatorGraphManager::CreateGraphDataForPlayerEnt(this, &hPlayer);
    }
  }
}


// CDOTASpectatorGraphManager::Init  (line 331, @0x00000000026bce90, libserver.so)  // inlines: ListenForGameEvent
bool __fastcall CDOTASpectatorGraphManager::Init(CDOTASpectatorGraphManager *const this)
{
  CGameEventListener *v2; // r12
  int v3; // eax
  IGameEventManager2 *v4; // rdi
  int v5; // eax
  IGameEventManager2 *v6; // rdi
  int v7; // eax

  v2 = &this->CGameEventListener;
  this->m_bRegisteredForEvents = 1;
  v3 = (*(gameeventmanager->_vptr_IBaseInterface + 4))(
         gameeventmanager,
         &this->CGameEventListener,
         "dota_player_killed",
         1);
  v4 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  this->m_event_dota_player_killed = v3;
  v5 = (*(v4->_vptr_IBaseInterface + 4))(v4, v2, "server_pre_shutdown", 1);
  v6 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  this->m_event_server_pre_shutdown = v5;
  v7 = (*(v6->_vptr_IBaseInterface + 4))(v6, v2, "dota_player_pick_hero", 1);
  this->m_nNextUpdateStat = DOTAStatUpdate_t::DSU_GOLD_PER_MIN;
  this->m_event_dota_player_pick_hero = v7;
  this->m_nNextUpdatePlayer = 0;
  return 1;
}


// CDOTASpectatorGraphManager::Shutdown  (line 346, @0x00000000026f22a0, libserver.so)
// calls: CDOTASpectatorGraphManager::Reset
void __fastcall CDOTASpectatorGraphManager::Shutdown(CDOTASpectatorGraphManager *const this)
{
  CDOTASpectatorGraphManager::Reset(this);
}


// CDOTASpectatorGraphManager::GameInit  (line 353, @0x00000000026f22b0, libserver.so)
// calls: CDOTASpectatorGraphManager::Reset
void __fastcall CDOTASpectatorGraphManager::GameInit(
        CDOTASpectatorGraphManager *const this,
        const EventGameInit_t *const msg)
{
  CDOTASpectatorGraphManager::Reset(this);
}


// CDOTASpectatorGraphManager::CreateGraphDataForPlayerEnt  (line 361, @0x00000000026f1980, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ShouldTrackGraphDataForPlayer, ToDOTAPlayer, operator CEntityInstance*, operator!, operator=
// calls: CreateEntityByName, memcmp
// callers: CDOTASpectatorGraphManager::FireGameEvent
// strings: "dota_spec_graph_player_data"
// globals: CEntityHandle::gm_pEntityList
CDOTASpecGraphPlayerData *__fastcall CDOTASpectatorGraphManager::CreateGraphDataForPlayerEnt(
        CDOTASpectatorGraphManager *const this,
        _DWORD *hPlayer)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CEntityInstance *m_pInstance; // rbx
  CBaseEntity *EntityByName; // r13
  vec_t v11; // ebx
  CEntityIdentity *m_pEntity; // rax
  __int16 v13; // cx
  unsigned int m_nPlayerDataCount; // ebx
  CEntityInstance *m_pObj; // rdi
  uint32 v16; // [rsp-38h] [rbp-38h] BYREF

  if ( dota_spectator_graph_per_player_stats.m_pParent->m_Value.m_nValue == 0 )
    return 0;
  if ( (*hPlayer + 2) <= 1 )
    return 0;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hPlayer >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0;
  v4 = &v3[*hPlayer & 0x1FF];
  if ( v4 == 0 )
    return 0;
  if ( *hPlayer != v4->m_EHandle.m_Index )
    return 0;
  if ( v4->m_pInstance == 0 )
    return 0;
  if ( (*(v4->m_pInstance->_vptr_IHandleEntity + 140))(v4->m_pInstance) == 0 )
    return 0;
  if ( (*hPlayer + 2) <= 1 )
    return 0;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hPlayer >> 9) & 0x3F];
  if ( v7 == 0 )
    return 0;
  v8 = &v7[*hPlayer & 0x1FF];
  if ( v8 == 0 )
    return 0;
  if ( *hPlayer != v8->m_EHandle.m_Index )
    return 0;
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0 )
    return 0;
  if ( HIBYTE(m_pInstance[7].m_CScriptComponent) == 1 )
    return 0;
  if ( BYTE1(m_pInstance[52].m_iszPrivateVScripts.u.m_Id) != 0 )
    return 0;
  if ( this->m_nPlayerDataCount > 23 )
    return 0;
  if ( (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) == 0 )
    return 0;
  EntityByName = CreateEntityByName("dota_spec_graph_player_data", -1);
  if ( EntityByName == 0 )
    return 0;
  LODWORD(v11) = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
  if ( LODWORD(v11) != LODWORD(EntityByName[1].m_vecBaseVelocity.m_Value.x) )
  {
    (*(EntityByName->_vptr_IHandleEntity + 22))(EntityByName, 1288, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    EntityByName[1].m_vecBaseVelocity.m_Value.x = v11;
  }
  m_pEntity = EntityByName->m_pEntity;
  v16 = -1;
  if ( m_pEntity != 0 )
  {
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v16 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
  }
  m_nPlayerDataCount = this->m_nPlayerDataCount;
  this->m_nPlayerDataCount = m_nPlayerDataCount + 1;
  if ( memcmp(&this->m_rgPlayerGraphData.m_Value[m_nPlayerDataCount], &v16, 4u) != 0 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 104, m_nPlayerDataCount, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_rgPlayerGraphData.m_Value[m_nPlayerDataCount].m_Index = v16;
  }
  return EntityByName;
}


// CDOTASpectatorGraphManager::StartTracking  (line 401, @0x00000000026f1bc0, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetGameTime, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
// callers: CDOTAGamerules::State_Enter_PRE_GAME
void __fastcall CDOTASpectatorGraphManager::StartTracking(CDOTASpectatorGraphManager *const this)
{
  CountdownTimer *p_m_SendTeamStatsTimer; // r12
  double v3; // xmm0_8
  double v4; // xmm1_8
  double v5; // xmm2_8
  double v6; // xmm3_8
  double v7; // xmm0_8
  double v8; // xmm1_8
  double v9; // xmm2_8
  double v10; // xmm3_8
  double v11; // xmm4_8
  float v12; // xmm0_4
  ConVar *m_pParent; // rax
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm2_8
  double v17; // xmm3_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  float v20; // [rsp+8h] [rbp-18h]
  float v21; // [rsp+8h] [rbp-18h]
  float v22; // [rsp+8h] [rbp-18h]
  float m_fValue; // [rsp+Ch] [rbp-14h]
  float v24; // [rsp+Ch] [rbp-14h]
  float v25; // [rsp+Ch] [rbp-14h]

  p_m_SendTeamStatsTimer = &this->m_SendTeamStatsTimer;
  this->m_bTrackingTeamStats = 1;
  m_fValue = dota_spectator_graph_interval.m_pParent->m_Value.m_fValue;
  *&v3 = CountdownTimer::Now(&this->m_SendTeamStatsTimer) + m_fValue;
  if ( *&v3 != this->m_SendTeamStatsTimer.m_timestamp.m_Value )
  {
    v20 = *&v3;
    (*(this->m_SendTeamStatsTimer._vptr_CountdownTimer + 2))(p_m_SendTeamStatsTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v3 = LODWORD(v20);
    this->m_SendTeamStatsTimer.m_timestamp.m_Value = v20;
  }
  if ( m_fValue != this->m_SendTeamStatsTimer.m_duration.m_Value )
  {
    (*(this->m_SendTeamStatsTimer._vptr_CountdownTimer + 2))(
      p_m_SendTeamStatsTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v3,
      v4,
      v5,
      v6,
      m_fValue);
    this->m_SendTeamStatsTimer.m_duration.m_Value = m_fValue;
  }
  v24 = dota_spectator_graph_send_interval.m_pParent->m_Value.m_fValue;
  *&v7 = CountdownTimer::Now(&this->m_TeamStatsUpdateTimer) + v24;
  if ( *&v7 != this->m_TeamStatsUpdateTimer.m_timestamp.m_Value )
  {
    v22 = *&v7;
    (*(this->m_TeamStatsUpdateTimer._vptr_CountdownTimer + 2))(
      &this->m_TeamStatsUpdateTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    *&v7 = LODWORD(v22);
    this->m_TeamStatsUpdateTimer.m_timestamp.m_Value = v22;
  }
  if ( v24 != this->m_TeamStatsUpdateTimer.m_duration.m_Value )
  {
    (*(this->m_TeamStatsUpdateTimer._vptr_CountdownTimer + 2))(
      &this->m_TeamStatsUpdateTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v7,
      v8,
      v9,
      v10,
      v11,
      v24);
    this->m_TeamStatsUpdateTimer.m_duration.m_Value = v24;
  }
  v12 = 0.0;
  if ( g_pGameRules != 0 )
    v12 = *&g_pGameRules[18].m_szQuestName[20];
  m_pParent = dota_spectator_inventory_snapshot_interval.m_pParent;
  this->m_flStartTime = v12;
  v25 = m_pParent->m_Value.m_fValue;
  *&v14 = CountdownTimer::Now(&this->m_HeroInventorySnapshotTimer) + v25;
  if ( *&v14 != this->m_HeroInventorySnapshotTimer.m_timestamp.m_Value )
  {
    v21 = *&v14;
    (*(this->m_HeroInventorySnapshotTimer._vptr_CountdownTimer + 2))(
      &this->m_HeroInventorySnapshotTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    *&v14 = LODWORD(v21);
    this->m_HeroInventorySnapshotTimer.m_timestamp.m_Value = v21;
  }
  if ( v25 != this->m_HeroInventorySnapshotTimer.m_duration.m_Value )
  {
    (*(this->m_HeroInventorySnapshotTimer._vptr_CountdownTimer + 2))(
      &this->m_HeroInventorySnapshotTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v25);
    this->m_HeroInventorySnapshotTimer.m_duration.m_Value = v25;
  }
}


// CDOTASpectatorGraphManager::StopTracking  (line 411, @0x00000000026f1e20, libserver.so)
// callers: CDOTAGamerules::State_Enter_POST_GAME
void __fastcall CDOTASpectatorGraphManager::StopTracking(CDOTASpectatorGraphManager *const this)
{
  this->m_bTrackingTeamStats = 0;
}


// CDOTASpectatorGraphManager::GetStartTime  (line 416, @0x00000000026f1e30, libserver.so)
float __fastcall CDOTASpectatorGraphManager::GetStartTime(const CDOTASpectatorGraphManager *const this)
{
  return this->m_flStartTime;
}


// CDOTASpectatorGraphManager::PreClientUpdate  (line 421, @0x0000000002713140, libserver.so)  // inlines: CEntityHandle, CHandle, GetBool, GetEntityIdentity, GetEntryIndex, GetInt, IndexToIdentity, IsElapsed, LookupEntity, NetworkStateChanged, Reset, SendTeamTotalEarnedGold, Set, operator bool, operator=<float>
// calls: CountdownTimer::Now, CDOTASpectatorGraphManager::RecordHeroInventorySnapshots, CDOTASpectatorGraphManager::RecordTeamStats, CDOTASpectatorGraphManager::SendTeamTotalEarnedGold, CDOTASpecGraphPlayerData::UpdateXPPerMinStats, CDOTASpecGraphPlayerData::UpdateGoldPerMinStats
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTASpectatorGraphManager::PreClientUpdate(
        CDOTASpectatorGraphManager *const this,
        const EventServerPreClientUpdate_t *const msg)
{
  CountdownTimer *p_m_SendTeamStatsTimer; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  DOTAStatUpdate_t m_nNextUpdateStat; // eax
  DOTAStatUpdate_t v8; // eax
  int m_nNextUpdatePlayer; // eax
  int v10; // edx
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // [rsp+Ch] [rbp-24h]
  float v16; // [rsp+Ch] [rbp-24h]
  float v17; // [rsp+Ch] [rbp-24h]

  if ( !this->m_bTrackingTeamStats || this->m_SendTeamStatsTimer.m_timestamp.m_Value <= 0.0 )
    return;
  p_m_SendTeamStatsTimer = &this->m_SendTeamStatsTimer;
  if ( CountdownTimer::Now(&this->m_SendTeamStatsTimer) >= this->m_SendTeamStatsTimer.m_timestamp.m_Value )
  {
    m_Index = this->m_rgPlayerGraphData.m_Value[this->m_nNextUpdatePlayer].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_nNextUpdateStat = this->m_nNextUpdateStat;
          if ( m_nNextUpdateStat == DOTAStatUpdate_t::DSU_GOLD_PER_MIN )
          {
            CDOTASpecGraphPlayerData::UpdateGoldPerMinStats(v6->m_pInstance);
            m_nNextUpdateStat = this->m_nNextUpdateStat;
            goto LABEL_9;
          }
          if ( m_nNextUpdateStat != DOTAStatUpdate_t::DSU_XP_PER_MIN )
          {
LABEL_9:
            v8 = m_nNextUpdateStat + 1;
            this->m_nNextUpdateStat = v8;
            if ( v8 > DOTAStatUpdate_t::DSU_XP_PER_MIN )
            {
              m_nNextUpdatePlayer = this->m_nNextUpdatePlayer;
              this->m_nNextUpdateStat = DOTAStatUpdate_t::DSU_GOLD_PER_MIN;
              v10 = m_nNextUpdatePlayer + 1;
              v11 = 0;
              if ( v10 < 24 )
                v11 = v10;
              this->m_nNextUpdatePlayer = v11;
            }
            v12 = CountdownTimer::Now(p_m_SendTeamStatsTimer) + this->m_SendTeamStatsTimer.m_duration.m_Value;
            if ( v12 != this->m_SendTeamStatsTimer.m_timestamp.m_Value )
            {
              v16 = v12;
              (*(this->m_SendTeamStatsTimer._vptr_CountdownTimer + 2))(
                p_m_SendTeamStatsTimer,
                12,
                0xFFFFFFFFLL,
                0xFFFFFFFFLL);
              this->m_SendTeamStatsTimer.m_timestamp.m_Value = v16;
            }
            goto LABEL_15;
          }
          CDOTASpecGraphPlayerData::UpdateXPPerMinStats(v6->m_pInstance);
        }
      }
    }
    m_nNextUpdateStat = this->m_nNextUpdateStat;
    goto LABEL_9;
  }
LABEL_15:
  if ( CountdownTimer::Now(&this->m_TeamStatsUpdateTimer) >= this->m_TeamStatsUpdateTimer.m_timestamp.m_Value )
  {
    CDOTASpectatorGraphManager::RecordTeamStats(this);
    if ( dota_spectator_graph_networking_enabled.m_pParent->m_Value.m_nValue != 0 )
      CDOTASpectatorGraphManager::SendTeamTotalEarnedGold(this);
    v14 = CountdownTimer::Now(&this->m_TeamStatsUpdateTimer) + this->m_TeamStatsUpdateTimer.m_duration.m_Value;
    if ( v14 != this->m_TeamStatsUpdateTimer.m_timestamp.m_Value )
    {
      v17 = v14;
      (*(this->m_TeamStatsUpdateTimer._vptr_CountdownTimer + 2))(
        &this->m_TeamStatsUpdateTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      this->m_TeamStatsUpdateTimer.m_timestamp.m_Value = v17;
    }
  }
  if ( CountdownTimer::Now(&this->m_HeroInventorySnapshotTimer) >= this->m_HeroInventorySnapshotTimer.m_timestamp.m_Value )
  {
    CDOTASpectatorGraphManager::RecordHeroInventorySnapshots(this);
    v13 = CountdownTimer::Now(&this->m_HeroInventorySnapshotTimer)
        + this->m_HeroInventorySnapshotTimer.m_duration.m_Value;
    if ( v13 != this->m_HeroInventorySnapshotTimer.m_timestamp.m_Value )
    {
      v15 = v13;
      (*(this->m_HeroInventorySnapshotTimer._vptr_CountdownTimer + 2))(
        &this->m_HeroInventorySnapshotTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      this->m_HeroInventorySnapshotTimer.m_timestamp.m_Value = v15;
    }
  }
}


// CDOTASpectatorGraphManager::RecordTeamStats  (line 478, @0x00000000027126b0, libserver.so)  // inlines: GetTotalEarnedGoldTimeline, GetTotalEarnedXPTimeline, GetTotalNetWorthTimeline
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTotalEarnedGold, CDOTA_PlayerResource::GetTotalEarnedXP, CDOTA_PlayerResource::GetNetWorth, CDOTA_PlayerResource::GetTeam, CDotaStatManager::GetPlayerNetWorthTimeline, CTimeline::RecordValue
// callers: CDOTASpectatorGraphManager::RequestImmediateGraphUpdate, CDOTASpectatorGraphManager::PreClientUpdate
// globals: g_pDotaStatManager
void __fastcall CDOTASpectatorGraphManager::RecordTeamStats(CDOTASpectatorGraphManager *const this)
{
  int v1; // ebx
  float v2; // xmm1_4
  int TotalEarnedGold; // r15d
  int TotalEarnedXP; // r14d
  int NetWorth; // r13d
  int Team; // eax
  CTimeline *PlayerNetWorthTimeline; // rax
  __int64 i; // rbx
  CDotaStatManager *v9; // rax
  CTimeline *v10; // rdi
  CTimeline *v11; // rdi
  CTimeline *v12; // rdi
  int nTeamGold[4]; // [rsp+0h] [rbp-60h]
  int nTeamXP[4]; // [rsp+10h] [rbp-50h]
  int nTeamNetWorth[16]; // [rsp+20h] [rbp-40h]

  v1 = 0;
  nTeamGold[0] = 0;
  nTeamGold[1] = 0;
  nTeamXP[0] = 0;
  nTeamXP[1] = 0;
  nTeamNetWorth[0] = 0;
  nTeamNetWorth[1] = 0;
  do
  {
    while ( 1 )
    {
      if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v1) )
      {
        TotalEarnedGold = CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, v1);
        TotalEarnedXP = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, v1);
        NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v1);
        Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v1);
        if ( Team == 2 )
        {
          nTeamGold[0] += TotalEarnedGold;
          nTeamXP[0] += TotalEarnedXP;
          nTeamNetWorth[0] += NetWorth;
        }
        else if ( Team == 3 )
        {
          nTeamGold[1] += TotalEarnedGold;
          nTeamXP[1] += TotalEarnedXP;
          nTeamNetWorth[1] += NetWorth;
        }
        PlayerNetWorthTimeline = CDotaStatManager::GetPlayerNetWorthTimeline(g_pDotaStatManager, v1);
        if ( PlayerNetWorthTimeline != 0 )
          break;
      }
      if ( ++v1 == 24 )
        goto LABEL_9;
    }
    ++v1;
    CTimeline::RecordValue(PlayerNetWorthTimeline, NetWorth / 10.0, v2);
  }
  while ( v1 != 24 );
LABEL_9:
  for ( i = 0; i != 2; ++i )
  {
    v9 = g_pDotaStatManager;
    if ( i != 0 )
      v10 = g_pDotaStatManager->m_pTotalEarnedGoldTimeline[1];
    else
      v10 = g_pDotaStatManager->m_pTotalEarnedGoldTimeline[0];
    if ( v10 != 0 )
    {
      CTimeline::RecordValue(v10, nTeamGold[i] / 10.0, v2);
      v9 = g_pDotaStatManager;
    }
    if ( i != 0 )
      v11 = v9->m_pTotalNetWorthTimeline[1];
    else
      v11 = v9->m_pTotalNetWorthTimeline[0];
    if ( v11 != 0 )
    {
      CTimeline::RecordValue(v11, nTeamNetWorth[i] / 10.0, v2);
      v9 = g_pDotaStatManager;
    }
    if ( i != 0 )
      v12 = v9->m_pTotalEarnedXPTimeline[1];
    else
      v12 = v9->m_pTotalEarnedXPTimeline[0];
    if ( v12 != 0 )
      CTimeline::RecordValue(v12, nTeamXP[i] / 10.0, v2);
  }
}


// CDOTASpectatorGraphManager::RecordHeroInventorySnapshots  (line 533, @0x000000000270db70, libserver.so)  // inlines: AddToTail, CopyConstruct<sPlayerSnapshot>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_BaseNPC::GetInventory, CDOTAGamerules::GetDOTATime, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Item::GetItemID, CDOTA_PlayerResource::GetKills, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetAssists, CDOTA_PlayerResource::GetLevel, CUtlMemory<sPlayerSnapshot, int>::Grow
// callers: CDOTASpectatorGraphManager::PreClientUpdate
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTASpectatorGraphManager::RecordHeroInventorySnapshots(CDOTASpectatorGraphManager *const this)
{
  CUtlVectorBase<sPlayerSnapshot,CUtlMemory<sPlayerSnapshot,int> >::CAllocator *p_m_Memory; // r12
  int v2; // ebx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // r15
  __int64 v7; // r14
  CDOTA_Item *ItemInSlot; // rax
  int ItemID; // ecx
  char Kills; // r15
  char Deaths; // r14
  char Level; // al
  __int64 m_nAllocationCount; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  bool v16; // zf
  sPlayerSnapshot *v17; // rdx
  int v18; // [rsp+0h] [rbp-60h]
  char v19; // [rsp+4h] [rbp-5Ch]
  char Assists; // [rsp+8h] [rbp-58h]
  _BYTE s[36]; // [rsp+Ch] [rbp-54h] OVERLAPPED BYREF

  p_m_Memory = &this->m_vecPlayerSnapshots[0].m_Memory;
  v2 = 0;
  do
  {
    while ( 1 )
    {
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&s[4], g_pDOTAPlayerResource, v2);
      if ( (*&s[4] + 2) > 1 )
      {
        v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*&s[4] >> 9) & 0x3F];
        if ( v3 != 0 )
        {
          v4 = &v3[*&s[4] & 0x1FF];
          if ( v4 != 0 && *&s[4] == v4->m_EHandle.m_Index )
          {
            m_pInstance = v4->m_pInstance;
            if ( v4->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
              if ( Inventory != 0 )
              {
                v7 = 0;
                *s = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
                do
                {
                  ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v7);
                  ItemID = 0;
                  if ( ItemInSlot != 0 )
                    ItemID = CDOTA_Item::GetItemID(ItemInSlot);
                  *&s[4 * v7++ + 4] = ItemID;
                }
                while ( v7 != 6 );
                Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, v2);
                Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v2);
                Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, v2);
                Level = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, v2);
                m_nAllocationCount = p_m_Memory[-1].m_nAllocationCount;
                v14 = p_m_Memory[-1].m_nAllocationCount;
                if ( m_nAllocationCount == p_m_Memory->m_nAllocationCount )
                {
                  v18 = p_m_Memory[-1].m_nAllocationCount;
                  v19 = Level;
                  CUtlMemory<sPlayerSnapshot,int>::Grow(p_m_Memory, 1);
                  v14 = p_m_Memory[-1].m_nAllocationCount;
                  m_nAllocationCount = v18;
                  Level = v19;
                }
                v15 = m_nAllocationCount;
                v16 = &p_m_Memory->m_pMemory[v15] == 0;
                v17 = &p_m_Memory->m_pMemory[v15];
                p_m_Memory[-1].m_nAllocationCount = v14 + 1;
                if ( !v16 )
                  break;
              }
            }
          }
        }
      }
      ++v2;
      p_m_Memory = (p_m_Memory + 24);
      if ( v2 == 24 )
        return;
    }
    s[35] = Level;
    ++v2;
    s[32] = Kills;
    p_m_Memory = (p_m_Memory + 24);
    s[33] = Deaths;
    *&s[28] = *s;
    s[34] = Assists;
    *v17->m_nItemID = *&s[4];
    *&v17->m_nItemID[2] = *&s[12];
    *&v17->m_nItemID[4] = *&s[20];
    *&v17->m_fGameTime = *&s[28];
  }
  while ( v2 != 24 );
}


// CDOTASpectatorGraphManager::GetPlayerSnapshotsForPlayerID  (line 561, @0x00000000026f1e40, libserver.so)
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
const CUtlVector<sPlayerSnapshot,CUtlMemory<sPlayerSnapshot,int> > *__fastcall CDOTASpectatorGraphManager::GetPlayerSnapshotsForPlayerID(
        const CDOTASpectatorGraphManager *const this,
        int nPlayerID)
{
  if ( nPlayerID > 0x17 )
    return 0;
  else
    return &this->m_vecPlayerSnapshots[nPlayerID];
}


// CDOTASpectatorGraphManager::SendTeamTotalEarnedGold  (line 570, @0x00000000026cba40, libserver.so)  // inlines: Count, DOTAGameRules, Get, GetGameTime, GetStartTime, GetTimelineValueByGameTime, GetTotalEarnedGoldTimeline, GetTotalEarnedXPTimeline, GetTotalNetWorthTimeline, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
// calls: memcmp, GetTimelineValueByGameTime
// callers: CDOTASpectatorGraphManager::SendTeamTotalEarnedGold, CDOTASpectatorGraphManager::RequestImmediateGraphUpdate, CDOTASpectatorGraphManager::PreClientUpdate
// globals: g_pDotaStatManager
void __fastcall CDOTASpectatorGraphManager::SendTeamTotalEarnedGold(CDOTASpectatorGraphManager *const this)
{
  float v1; // xmm1_4
  CGameRules *v3; // rax
  float v4; // xmm0_4
  unsigned int v5; // r13d
  CNetworkArrayBase<int,64,CDOTASpectatorGraphManager::NetworkVar_m_rgDireNetWorth> *p_m_rgDireNetWorth; // rbx
  float v7; // xmm1_4
  const CTimeline *v8; // rax
  int v9; // r15d
  float v10; // xmm1_4
  const CTimeline *v11; // rax
  int TimelineValueByGameTime; // r15d
  float v13; // xmm1_4
  const CTimeline *v14; // rax
  int v15; // r15d
  float v16; // xmm1_4
  const CTimeline *v17; // rax
  int v18; // r15d
  float v19; // xmm1_4
  const CTimeline *v20; // rax
  int v21; // r15d
  int m_Value; // r15d
  float v23; // xmm1_4
  CEntityInstance *v24; // rdi
  CEntityInstance *v25; // rdi
  CEntityInstance *v26; // rdi
  CEntityInstance *v27; // rdi
  CEntityInstance *v28; // rdi
  CEntityInstance *v29; // rdi
  CEntityInstance *v30; // rdi
  CEntityInstance *m_pObj; // rdi
  float v32; // [rsp-3Ch] [rbp-84h]
  CTimeline *v33; // [rsp-38h] [rbp-80h]
  CTimeline *v34; // [rsp-30h] [rbp-78h]
  CTimeline *v35; // [rsp-28h] [rbp-70h]
  CTimeline *v36; // [rsp-20h] [rbp-68h]
  CTimeline *v37; // [rsp-18h] [rbp-60h]
  CTimeline *v38; // [rsp-10h] [rbp-58h]
  float v39; // [rsp-10h] [rbp-58h]
  float m_flStartTime; // [rsp-8h] [rbp-50h]
  float v41; // [rsp-4h] [rbp-4Ch]
  float v42; // [rsp-4h] [rbp-4Ch]
  float v43; // [rsp-4h] [rbp-4Ch]
  _DWORD v44[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v1 = 0.0;
  m_flStartTime = this->m_flStartTime;
  v3 = g_pGameRules;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( m_flStartTime != this->m_flTotalEarnedGoldStartTime.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      v43 = v1;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 1736, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
      v3 = g_pGameRules;
      v1 = v43;
    }
    this->m_flTotalEarnedGoldStartTime.m_Value = m_flStartTime;
  }
  v4 = 0.0;
  if ( v3 != 0 )
    v4 = *&v3[18].m_szQuestName[20];
  if ( v4 != this->m_flTotalEarnedGoldEndTime.m_Value )
  {
    v30 = this->__m_pChainEntity.m_pObj;
    if ( v30 != 0 && (v30->m_pEntity->m_flags & 0x400) == 0 )
    {
      v39 = v4;
      v42 = v1;
      (*(v30->_vptr_IHandleEntity + 22))(v30, 1740, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
      v1 = v42;
      v4 = v39;
    }
    this->m_flTotalEarnedGoldEndTime.m_Value = v4;
  }
  v38 = g_pDotaStatManager->m_pTotalEarnedGoldTimeline[0];
  v37 = g_pDotaStatManager->m_pTotalEarnedGoldTimeline[1];
  v36 = g_pDotaStatManager->m_pTotalEarnedXPTimeline[0];
  v35 = g_pDotaStatManager->m_pTotalEarnedXPTimeline[1];
  v34 = g_pDotaStatManager->m_pTotalNetWorthTimeline[0];
  v33 = g_pDotaStatManager->m_pTotalNetWorthTimeline[1];
  if ( v38 != 0
    && g_pDotaStatManager->m_pTotalEarnedGoldTimeline[1] != 0
    && g_pDotaStatManager->m_pTotalEarnedXPTimeline[0] != 0
    && g_pDotaStatManager->m_pTotalEarnedXPTimeline[1] != 0
    && g_pDotaStatManager->m_pTotalNetWorthTimeline[0] != 0
    && g_pDotaStatManager->m_pTotalNetWorthTimeline[1] != 0 )
  {
    v5 = 0;
    p_m_rgDireNetWorth = &this->m_rgDireNetWorth;
    v7 = (v1 - m_flStartTime) * 0.015625;
    v32 = v7;
    while ( 1 )
    {
      m_Value = v38->m_nBucketCount.m_Value;
      v41 = (v5 * v32) + m_flStartTime;
      if ( m_Value != 0 )
        m_Value = GetTimelineValueByGameTime((v5 * v32) + m_flStartTime, v7, v38);
      v44[0] = m_Value;
      if ( memcmp(&p_m_rgDireNetWorth[-5], v44, 4u) == 0 )
        break;
      v24 = this->__m_pChainEntity.m_pObj;
      if ( v24 != 0 && (v24->m_pEntity->m_flags & 0x400) == 0 )
        (*(v24->_vptr_IHandleEntity + 22))(v24, 200, v5, this->__m_pChainEntity.m_PathIndex.m_Value);
      v8 = v37;
      p_m_rgDireNetWorth[-5].m_Value[0] = m_Value;
      v9 = v37->m_nBucketCount.m_Value;
      if ( v9 != 0 )
        goto LABEL_32;
LABEL_15:
      v44[0] = v9;
      if ( memcmp(&p_m_rgDireNetWorth[-4], v44, 4u) == 0 )
      {
        v11 = v36;
        TimelineValueByGameTime = v36->m_nBucketCount.m_Value;
        if ( TimelineValueByGameTime == 0 )
          goto LABEL_17;
LABEL_57:
        TimelineValueByGameTime = GetTimelineValueByGameTime(v41, v10, v11);
        goto LABEL_17;
      }
      v29 = this->__m_pChainEntity.m_pObj;
      if ( v29 != 0 && (v29->m_pEntity->m_flags & 0x400) == 0 )
        (*(v29->_vptr_IHandleEntity + 22))(v29, 456, v5, this->__m_pChainEntity.m_PathIndex.m_Value);
      v11 = v36;
      p_m_rgDireNetWorth[-4].m_Value[0] = v9;
      TimelineValueByGameTime = v36->m_nBucketCount.m_Value;
      if ( TimelineValueByGameTime != 0 )
        goto LABEL_57;
LABEL_17:
      v44[0] = TimelineValueByGameTime;
      if ( memcmp(&p_m_rgDireNetWorth[-3], v44, 4u) == 0 )
      {
        v14 = v35;
        v15 = v35->m_nBucketCount.m_Value;
        if ( v15 == 0 )
          goto LABEL_19;
LABEL_52:
        v15 = GetTimelineValueByGameTime(v41, v13, v14);
        goto LABEL_19;
      }
      v28 = this->__m_pChainEntity.m_pObj;
      if ( v28 != 0 && (v28->m_pEntity->m_flags & 0x400) == 0 )
        (*(v28->_vptr_IHandleEntity + 22))(v28, 712, v5, this->__m_pChainEntity.m_PathIndex.m_Value);
      v14 = v35;
      p_m_rgDireNetWorth[-3].m_Value[0] = TimelineValueByGameTime;
      v15 = v35->m_nBucketCount.m_Value;
      if ( v15 != 0 )
        goto LABEL_52;
LABEL_19:
      v44[0] = v15;
      if ( memcmp(&p_m_rgDireNetWorth[-2], v44, 4u) == 0 )
      {
        v17 = v34;
        v18 = v34->m_nBucketCount.m_Value;
        if ( v18 == 0 )
          goto LABEL_21;
LABEL_47:
        v18 = GetTimelineValueByGameTime(v41, v16, v17);
        goto LABEL_21;
      }
      v27 = this->__m_pChainEntity.m_pObj;
      if ( v27 != 0 && (v27->m_pEntity->m_flags & 0x400) == 0 )
        (*(v27->_vptr_IHandleEntity + 22))(v27, 968, v5, this->__m_pChainEntity.m_PathIndex.m_Value);
      v17 = v34;
      p_m_rgDireNetWorth[-2].m_Value[0] = v15;
      v18 = v34->m_nBucketCount.m_Value;
      if ( v18 != 0 )
        goto LABEL_47;
LABEL_21:
      v44[0] = v18;
      if ( memcmp(&p_m_rgDireNetWorth[-1], v44, 4u) != 0 )
      {
        v26 = this->__m_pChainEntity.m_pObj;
        if ( v26 != 0 && (v26->m_pEntity->m_flags & 0x400) == 0 )
          (*(v26->_vptr_IHandleEntity + 22))(v26, 1224, v5, this->__m_pChainEntity.m_PathIndex.m_Value);
        v20 = v33;
        p_m_rgDireNetWorth[-1].m_Value[0] = v18;
        v21 = v33->m_nBucketCount.m_Value;
        if ( v21 == 0 )
          goto LABEL_23;
LABEL_42:
        v21 = GetTimelineValueByGameTime(v41, v19, v20);
        goto LABEL_23;
      }
      v20 = v33;
      v21 = v33->m_nBucketCount.m_Value;
      if ( v21 != 0 )
        goto LABEL_42;
LABEL_23:
      v44[0] = v21;
      if ( memcmp(p_m_rgDireNetWorth, v44, 4u) != 0 )
      {
        v25 = this->__m_pChainEntity.m_pObj;
        if ( v25 != 0 && (v25->m_pEntity->m_flags & 0x400) == 0 )
          (*(v25->_vptr_IHandleEntity + 22))(v25, 1480, v5, this->__m_pChainEntity.m_PathIndex.m_Value);
        p_m_rgDireNetWorth->m_Value[0] = v21;
      }
      ++v5;
      p_m_rgDireNetWorth = (p_m_rgDireNetWorth + 4);
      if ( v5 == 64 )
        return;
    }
    v8 = v37;
    v9 = v37->m_nBucketCount.m_Value;
    if ( v9 == 0 )
      goto LABEL_15;
LABEL_32:
    v9 = GetTimelineValueByGameTime(v41, v23, v8);
    goto LABEL_15;
  }
}


// CDOTASpectatorGraphManager::SendTeamTotalEarnedGold  (line 570, @0x00000000026f1e70, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTASpectatorGraphManager::SendTeamTotalEarnedGold
void __fastcall CDOTASpectatorGraphManager::SendTeamTotalEarnedGold(CDOTASpectatorGraphManager *const this)
{
  if ( dota_spectator_graph_networking_enabled.m_pParent->m_Value.m_nValue != 0 )
    CDOTASpectatorGraphManager::SendTeamTotalEarnedGold(this);
}


// CDOTASpectatorGraphManager::RequestImmediateGraphUpdate  (line 609, @0x0000000002712890, libserver.so)  // inlines: GetBool, GetElapsedTime, GetInt, NetworkStateChanged, Reset, SendTeamTotalEarnedGold, Set, operator=<float>
// calls: CountdownTimer::Now, CDOTASpectatorGraphManager::RecordTeamStats, CDOTASpectatorGraphManager::SendTeamTotalEarnedGold
// callers: CDOTAGamerules::ClientMsg_RequestGraphUpdate
void __fastcall CDOTASpectatorGraphManager::RequestImmediateGraphUpdate(
        CDOTASpectatorGraphManager *const this,
        CDOTAPlayer *pPlayer)
{
  CountdownTimer *p_m_TeamStatsUpdateTimer; // r12
  float v4; // xmm0_4
  float v5; // [rsp-1Ch] [rbp-1Ch]

  if ( pPlayer != 0 && pPlayer->m_iTeamNum.m_Value == 1 )
  {
    p_m_TeamStatsUpdateTimer = &this->m_TeamStatsUpdateTimer;
    if ( ((CountdownTimer::Now(&this->m_TeamStatsUpdateTimer) - this->m_TeamStatsUpdateTimer.m_timestamp.m_Value)
        + this->m_TeamStatsUpdateTimer.m_duration.m_Value) > 1.0 )
    {
      CDOTASpectatorGraphManager::RecordTeamStats(this);
      if ( dota_spectator_graph_networking_enabled.m_pParent->m_Value.m_nValue != 0 )
        CDOTASpectatorGraphManager::SendTeamTotalEarnedGold(this);
      v4 = CountdownTimer::Now(p_m_TeamStatsUpdateTimer) + this->m_TeamStatsUpdateTimer.m_duration.m_Value;
      if ( v4 != this->m_TeamStatsUpdateTimer.m_timestamp.m_Value )
      {
        v5 = v4;
        (*(this->m_TeamStatsUpdateTimer._vptr_CountdownTimer + 2))(
          p_m_TeamStatsUpdateTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_TeamStatsUpdateTimer.m_timestamp.m_Value = v5;
      }
    }
  }
}


// CDOTASpectatorGraphManager::GetTotalEarnedTeamGold  (line 777, @0x00000000026f1ea0, libserver.so)
int __fastcall CDOTASpectatorGraphManager::GetTotalEarnedTeamGold(
        CDOTASpectatorGraphManager *const this,
        int nTeam,
        int nBucket)
{
  int result; // eax

  result = 0;
  if ( nBucket <= 0x3F && this->m_nGoldGraphVersion.m_Value != 2 )
  {
    if ( nTeam != 0 )
    {
      if ( nTeam == 1 )
        return this->m_rgDireTotalEarnedGold.m_Value[nBucket];
    }
    else
    {
      return this->m_rgRadiantTotalEarnedGold.m_Value[nBucket];
    }
  }
  return result;
}


// CDOTASpectatorGraphManager::GetTotalEarnedTeamXP  (line 795, @0x00000000026f1ef0, libserver.so)
int __fastcall CDOTASpectatorGraphManager::GetTotalEarnedTeamXP(
        CDOTASpectatorGraphManager *const this,
        int nTeam,
        int nBucket)
{
  int result; // eax

  result = 0;
  if ( nBucket <= 0x3F )
  {
    if ( nTeam != 0 )
    {
      if ( nTeam == 1 )
        return this->m_rgDireTotalEarnedXP.m_Value[nBucket];
    }
    else
    {
      return this->m_rgRadiantTotalEarnedXP.m_Value[nBucket];
    }
  }
  return result;
}


// CDOTASpectatorGraphManager::GetTotalTeamNetWorth  (line 809, @0x00000000026f1f30, libserver.so)
int __fastcall CDOTASpectatorGraphManager::GetTotalTeamNetWorth(
        CDOTASpectatorGraphManager *const this,
        int nTeam,
        int nBucket)
{
  int result; // eax

  result = 0;
  if ( nBucket <= 0x3F )
  {
    if ( this->m_nGoldGraphVersion.m_Value == 2 )
    {
      if ( nTeam != 0 )
      {
        if ( nTeam == 1 )
          return this->m_rgDireTotalEarnedGold.m_Value[nBucket];
      }
      else
      {
        return this->m_rgRadiantTotalEarnedGold.m_Value[nBucket];
      }
    }
    else if ( this->m_nGoldGraphVersion.m_Value > 2 )
    {
      if ( nTeam != 0 )
      {
        if ( nTeam == 1 )
          return this->m_rgDireNetWorth.m_Value[nBucket];
      }
      else
      {
        return this->m_rgRadiantNetWorth.m_Value[nBucket];
      }
    }
  }
  return result;
}


// CDOTASpectatorGraphManager::Reset  (line 835, @0x00000000026f1fa0, libserver.so)  // inlines: Get, Invalidate, NetworkStateChanged, RemoveAll, Set, operator CEntityInstance*, operator=<float>, operator=<int>
// callers: CDOTASpectatorGraphManager::FireGameEvent, CDOTASpectatorGraphManager::Shutdown, CDOTASpectatorGraphManager::GameInit, CDOTASpectatorGraphManager::CDOTASpectatorGraphManager
void __fastcall CDOTASpectatorGraphManager::Reset(CDOTASpectatorGraphManager *const this)
{
  __int64 v2; // xmm0_8
  bool v3; // zf
  CEntityInstance *m_pObj; // rdi
  __int64 i; // rax

  this->m_nPlayerDataCount = 0;
  v2 = 3212836864LL;
  if ( this->m_SendTeamStatsTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_SendTeamStatsTimer._vptr_CountdownTimer + 2))(
      &this->m_SendTeamStatsTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    this->m_SendTeamStatsTimer.m_timestamp.m_Value = -1.0;
  }
  v3 = this->m_nGoldGraphVersion.m_Value == 3;
  this->m_bTrackingTeamStats = 0;
  if ( !v3 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        1744,
        0xFFFFFFFFLL,
        this->__m_pChainEntity.m_PathIndex.m_Value,
        *&v2);
    this->m_nGoldGraphVersion.m_Value = 3;
  }
  for ( i = 0; i != 24; ++i )
    this->m_vecPlayerSnapshots[i].m_Size = 0;
}


// CDOTASpecGraphPlayerData::PrintStats  (line 880, @0x00000000026f22c0, libserver.so)
// calls: Msg
// strings: "Stats for player: \n", "\tGold[%d] = %d\n", "\tXP[%d] = %d\n"
void __fastcall CDOTASpecGraphPlayerData::PrintStats(CDOTASpecGraphPlayerData *const this)
{
  __int64 v2; // rbx
  CNetworkArrayBase<int,64,CDOTASpecGraphPlayerData::NetworkVar_m_rgXPPerMinute> *p_m_rgXPPerMinute; // r13
  CNetworkArrayBase<int,64,CDOTASpecGraphPlayerData::NetworkVar_m_rgGoldPerMinute> *p_m_rgGoldPerMinute; // r14
  int v5; // r12d
  int v6; // esi

  v2 = 0;
  Msg("Stats for player: \n");
  p_m_rgXPPerMinute = &this->m_rgXPPerMinute;
  p_m_rgGoldPerMinute = &this->m_rgGoldPerMinute;
  do
  {
    v5 = p_m_rgXPPerMinute->m_Value[v2];
    Msg("\tGold[%d] = %d\n", v2, p_m_rgGoldPerMinute->m_Value[v2]);
    v6 = v2++;
    Msg("\tXP[%d] = %d\n", v6, v5);
  }
  while ( v2 != 64 );
}


