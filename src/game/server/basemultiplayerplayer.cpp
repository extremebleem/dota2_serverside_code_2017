
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseMultiplayerPlayer::CBaseMultiplayerPlayer  (line 21, @0x00000000021622d0, libserver.so)  // inlines: CAI_ExpresserHost, curtime, ~CAI_ExpresserHost
// calls: CBasePlayer::CBasePlayer, KeyValues::operator new, KeyValues::KeyValues, CBasePlayer::~CBasePlayer, _Unwind_Resume, KeyValues::operator delete
// callers: CBaseMultiplayerPlayer::CEntityInstanceEntityClass::ConstructInstance, CDOTAPlayer::CDOTAPlayer
// strings: "achievement_counts"
void __fastcall CBaseMultiplayerPlayer::CBaseMultiplayerPlayer(CBaseMultiplayerPlayer *const this)
{
  CGlobalVars *v2; // r12
  float m_flCurrentTime; // xmm0_4
  KeyValues *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBasePlayer::CBasePlayer(this);
  this->m_iCurrentConcept = -1;
  this->_vptr_IHandleEntity = &off_4007390;
  this->_vptr_CAI_ExpresserSink = &off_4008510;
  this->m_flLastForcedChangeTeamTime = -1.0;
  this->m_iBalanceScore = 0;
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v2->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  this->m_flConnectionTime = m_flCurrentTime;
  this->m_pExpresser = 0;
  v4 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v4, "achievement_counts");
  this->m_pAchievementKV = v4;
  this->m_flAreaCaptureScoreAccumulator = 0.0;
}


// CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer  (line 35, @0x0000000002172190, libserver.so)  // inlines: ~CAI_ExpresserHost, ~CAI_ExpresserWithFollowup, ~CMultiplayer_Expresser
// calls: KeyValues::deleteThis, CAI_Expresser::~CAI_Expresser, operator delete, CBasePlayer::~CBasePlayer
// callers: CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer, CDOTAPlayer::CDOTAPlayer, CDOTAPlayer::~CDOTAPlayer
void __fastcall CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer(CBaseMultiplayerPlayer *const this)
{
  CMultiplayer_Expresser *m_pExpresser; // r12
  CMultiplayer_Expresser *v3; // rdi

  this->_vptr_IHandleEntity = &off_4007390;
  this->_vptr_CAI_ExpresserSink = &off_4008510;
  KeyValues::deleteThis(this->m_pAchievementKV);
  m_pExpresser = this->m_pExpresser;
  if ( m_pExpresser != 0 )
  {
    v3 = this->m_pExpresser;
    m_pExpresser->_vptr_IResponseFilter = &off_40013F0;
    CAI_Expresser::~CAI_Expresser(v3);
    operator delete(m_pExpresser);
  }
  this->_vptr_IHandleEntity = &off_4000290;
  this->_vptr_CAI_ExpresserSink = &off_40013C8;
  CBasePlayer::~CBasePlayer(this);
}


// CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer  (line 35, @0x0000000002172210, libserver.so)  // inlines: operator delete
// calls: CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer
void __fastcall CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer(CBaseMultiplayerPlayer *const this)
{
  CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CBaseMultiplayerPlayer::CreateExpresser  (line 44, @0x00000000021728d0, libserver.so)  // inlines: CAI_ExpresserWithFollowup, CEntityHandle, CFollowupTargetSpec_t, CHandle, CMultiplayer_Expresser
// calls: operator new, CAI_Expresser::CAI_Expresser, operator delete, _Unwind_Resume
CAI_Expresser *__fastcall CBaseMultiplayerPlayer::CreateExpresser(CBaseMultiplayerPlayer *const this)
{
  CMultiplayer_Expresser *v2; // rbx

  v2 = operator new(0x78u);
  CAI_Expresser::CAI_Expresser(v2, this);
  v2->m_pPostponedFollowup = 0;
  v2->_vptr_IResponseFilter = &off_4001670;
  v2->m_followupTarget.m_iTargetType = DeferredResponseTarget_t::kDRT_MAX;
  v2->m_followupTarget.m_hHandle.m_Index = -1;
  v2->m_bAllowMultipleScenes = 0;
  this->m_pExpresser = v2;
  v2->m_pSink = &this->CAI_ExpresserSink;
  return this->m_pExpresser;
}


// CBaseMultiplayerPlayer::Connect  (line 57, @0x000000000213df50, libserver.so)
// calls: CBaseModelEntity::Connect
// callers: CDOTAPlayer::Connect
void __fastcall CBaseMultiplayerPlayer::Connect(CBaseMultiplayerPlayer *const this)
{
  CBaseModelEntity::Connect(this);
  (*(this->_vptr_IHandleEntity + 557))(this);
}


// CBaseMultiplayerPlayer::ModifyOrAppendCriteria  (line 66, @0x000000000213df80, libserver.so)  // inlines: ModifyOrAppendCriteria
// calls: CBaseEntity::ModifyOrAppendCriteria
void __fastcall CBaseMultiplayerPlayer::ModifyOrAppendCriteria(
        CBaseMultiplayerPlayer *const this,
        CResponseCriteriaSet *const criteriaSet)
{
  CBaseEntity::ModifyOrAppendCriteria(this, criteriaSet);
  (*(this->_vptr_IHandleEntity + 496))(this, criteriaSet);
}


// CBaseMultiplayerPlayer::SpeakIfAllowed  (line 76, @0x000000000213d8a0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol
// local variable allocation has failed, the output may be wrong!
bool __fastcall CBaseMultiplayerPlayer::SpeakIfAllowed(
        CBaseMultiplayerPlayer *const this,
        AIConcept_t concept,
        __int64 priority,
        const char *modifiers,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  bool result; // al
  int (**vptr_IHandleEntity)(...); // rax
  int (*v14)(...); // rax
  _WORD v15[2]; // [rsp+0h] [rbp-40h] BYREF
  int v16; // [rsp+4h] [rbp-3Ch]

  result = (*(this->_vptr_IHandleEntity + 139))(this, concept, priority);
  if ( result )
  {
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    v15[0] = *concept.m_iConcept.m_Id;
    v14 = vptr_IHandleEntity[543];
    v16 = *(*&concept + 4LL);
    return v14(this, v15, modifiers, pszOutResponseChosen, bufsize, filter);
  }
  return result;
}


// CBaseMultiplayerPlayer::SpeakConcept  (line 88, @0x00000000021623f0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, FindResponse
// calls: CRR_Concept::CRR_Concept, CAI_Expresser::FindResponse
void __fastcall CBaseMultiplayerPlayer::SpeakConcept(
        CBaseMultiplayerPlayer *const this,
        AI_Response *const outResponse,
        int iConcept)
{
  int (**vptr_IHandleEntity)(...); // rax
  CAI_Expresser *v6; // rax
  AIConcept_t concept; // [rsp+0h] [rbp-30h] BYREF

  this->m_iCurrentConcept = iConcept;
  CRR_Concept::CRR_Concept(&concept, g_pszMPConcepts[iConcept]);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  concept.m_hSpeaker.m_Index = -1;
  v6 = (vptr_IHandleEntity[522])(this);
  CAI_Expresser::FindResponse(v6, outResponse, &concept, 0);
}


// CBaseMultiplayerPlayer::SpeakConceptIfAllowed  (line 99, @0x000000000213dfb0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle
// calls: CRR_Concept::CRR_Concept
bool __fastcall CBaseMultiplayerPlayer::SpeakConceptIfAllowed(
        CBaseMultiplayerPlayer *const this,
        int iConcept,
        const char *modifiers,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  bool (__fastcall *v9)(CBaseMultiplayerPlayer *const, CRR_Concept *, __int64, const char *, char *, size_t, IRecipientFilter *); // r13
  CRR_Concept v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+24h] [rbp-3Ch]

  this->m_iCurrentConcept = iConcept;
  v9 = *(this->_vptr_IHandleEntity + 549);
  CRR_Concept::CRR_Concept(&v13, g_pszMPConcepts[iConcept]);
  v14 = -1;
  return v9(this, &v13, 1, modifiers, pszOutResponseChosen, bufsize, filter);
}


// CBaseMultiplayerPlayer::CanHearAndReadChatFrom  (line 109, @0x000000000213d910, libserver.so)
bool __fastcall CBaseMultiplayerPlayer::CanHearAndReadChatFrom(
        CBaseMultiplayerPlayer *const this,
        CBasePlayer *pPlayer)
{
  int m_iIgnoreGlobalChat; // eax

  if ( pPlayer == 0 )
    return this->m_iIgnoreGlobalChat != 1;
  m_iIgnoreGlobalChat = this->m_iIgnoreGlobalChat;
  if ( m_iIgnoreGlobalChat == 1 )
    return 0;
  if ( m_iIgnoreGlobalChat == 2 )
    return (*(g_pGameRules->_vptr_CGameRules + 114))(g_pGameRules, this, pPlayer) == 1;
  return 1;
}


// CBaseMultiplayerPlayer::ClientCommand  (line 126, @0x0000000002140370, libserver.so)  // inlines: Arg, FStrEq, _V_strcmp, operator[]
// calls: ClientPrint, CBasePlayer::ClientCommand
// callers: CDOTAPlayer::ClientCommand
// strings: "ignoremsg", "#Accept_All_Messages", "#Ignore_Broadcast_Team_Messages", "#Ignore_Broadcast_Messages"
bool __fastcall CBaseMultiplayerPlayer::ClientCommand(CBaseMultiplayerPlayer *const this, const CCommand *const args)
{
  char *v3; // rsi
  int v4; // ecx

  if ( args->m_nArgc <= 0 )
    return CBasePlayer::ClientCommand(this, args);
  v3 = args->m_ppArgv[0];
  if ( v3 != "ignoremsg" && strcmp(v3, "ignoremsg") != 0 )
    return CBasePlayer::ClientCommand(this, args);
  v4 = (this->m_iIgnoreGlobalChat + 1) % 3;
  this->m_iIgnoreGlobalChat = v4;
  if ( v4 == 1 )
  {
    ClientPrint(this, 3, "#Ignore_Broadcast_Messages", 0, 0, 0, 0);
    return 1;
  }
  else if ( v4 == 2 )
  {
    ClientPrint(this, 3, "#Ignore_Broadcast_Team_Messages", 0, 0, 0, 0);
    return 1;
  }
  else
  {
    if ( v4 == 0 )
      ClientPrint(this, 3, "#Accept_All_Messages", 0, 0, 0, 0);
    return 1;
  }
}


// CBaseMultiplayerPlayer::ShouldShowVoiceSubtitleToEnemy  (line 153, @0x000000000213d980, libserver.so)
bool __fastcall CBaseMultiplayerPlayer::ShouldShowVoiceSubtitleToEnemy(CBaseMultiplayerPlayer *const this)
{
  return 0;
}


// CBaseMultiplayerPlayer::CalculateTeamBalanceScore  (line 161, @0x0000000002144870, libserver.so)  // inlines: curtime
int __fastcall CBaseMultiplayerPlayer::CalculateTeamBalanceScore(CBaseMultiplayerPlayer *const this)
{
  CGlobalVars *v2; // rbx
  float m_flCurrentTime; // xmm0_4
  float v4; // xmm1_4
  int v5; // r14d
  float m_flLastForcedChangeTeamTime; // xmm0_4
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc v8; // rax
  int result; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v11; // [rsp+Ch] [rbp-24h]

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v2->m_flCurrentTime;
    v4 = 0.0;
  }
  else
  {
    v4 = 0.0;
    m_flCurrentTime = 0.0;
  }
  v5 = (m_flCurrentTime - this->m_flConnectionTime);
  m_flLastForcedChangeTeamTime = this->m_flLastForcedChangeTeamTime;
  if ( m_flLastForcedChangeTeamTime <= 0.0 )
    return -v5;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v8 = gpGlobals->m_pfnWarningFunc;
      if ( v8 != 0 )
      {
        v11 = this->m_flLastForcedChangeTeamTime;
        v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        m_flLastForcedChangeTeamTime = v11;
      }
    }
    v4 = v7->m_flCurrentTime;
  }
  result = -10000 - v5;
  if ( (v4 - m_flLastForcedChangeTeamTime) >= 300.0 )
    return -v5;
  return result;
}


// CBaseMultiplayerPlayer::SetOrResetInitialState  (line 176, @0x0000000002140470, libserver.so)  // inlines: ResetPerLifeCounters
// calls: KeyValues::Clear, CBasePlayer::SetOrResetInitialState
void __fastcall CBaseMultiplayerPlayer::SetOrResetInitialState(
        CBaseMultiplayerPlayer *const this,
        const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // rax

  KeyValues::Clear(this->m_pAchievementKV);
  CBasePlayer::SetOrResetInitialState(this, pKeyValues);
  if ( (*(*engine + 648LL))(engine) != 0 )
  {
    v4 = (*(*engine + 648LL))(engine);
    (*(*v4 + 136LL))(v4, this);
  }
}


// CBaseMultiplayerPlayer::AwardAchievement  (line 188, @0x0000000002162460, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageAchievementEvent_t, CUserMessagePB, FindGameEvent<CUserMessageAchievementEvent_t>, FindOrCreateGameEvent<CUserMessageAchievementEvent_t>, PostEvent<CUserMessageAchievementEvent_t>, set_achievement, set_has_achievement, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageAchievementEvent_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CUserMessageAchievementEvent::CUserMessageAchievementEvent, CUserMessageAchievementEvent::~CUserMessageAchievementEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent
void __fastcall CBaseMultiplayerPlayer::AwardAchievement(CBaseMultiplayerPlayer *const this, int iAchievement)
{
  __int64 v4; // r14
  IGameEventSystem *v5; // r13
  void (__fastcall *v6)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v7[2]; // [rsp+18h] [rbp-198h] BYREF
  int v8; // [rsp+28h] [rbp-188h]
  int iAchievementa; // [rsp+30h] [rbp-180h]
  int v10; // [rsp+38h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+178h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, this);
  CUserMessageAchievementEvent::CUserMessageAchievementEvent(v7);
  iAchievementa = iAchievement;
  v7[0] = off_3FFFF50;
  v8 |= 1u;
  v10 = 0;
  v4 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent;
  v5 = g_pGameEventSystem;
  v6 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent);
  v6(v5, 0, 0, &filter, v4, v7, 32);
  v7[0] = &off_3FFFDD0;
  CUserMessageAchievementEvent::~CUserMessageAchievementEvent(v7);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CBaseMultiplayerPlayer::GetPerLifeCounterKV  (line 234, @0x00000000021625e0, libserver.so)
// calls: KeyValues::GetInt
int __fastcall CBaseMultiplayerPlayer::GetPerLifeCounterKV(CBaseMultiplayerPlayer *const this, const char *name)
{
  return KeyValues::GetInt(this->m_pAchievementKV, name, 0);
}


// CBaseMultiplayerPlayer::SetPerLifeCounterKV  (line 239, @0x0000000002162600, libserver.so)
// calls: KeyValues::SetInt
void __fastcall CBaseMultiplayerPlayer::SetPerLifeCounterKV(
        CBaseMultiplayerPlayer *const this,
        const char *name,
        int value)
{
  KeyValues::SetInt(this->m_pAchievementKV, name, value);
}


// CBaseMultiplayerPlayer::ResetPerLifeCounters  (line 244, @0x0000000002162620, libserver.so)
// calls: KeyValues::Clear
void __fastcall CBaseMultiplayerPlayer::ResetPerLifeCounters(CBaseMultiplayerPlayer *const this)
{
  KeyValues::Clear(this->m_pAchievementKV);
}


// CBaseMultiplayerPlayer::EscortScoringThink  (line 258, @0x0000000002146980, libserver.so)  // inlines: CreateEvent, curtime, entindex
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::ThinkSet
// strings: "player_escort_score"
// globals: CBaseMultiplayerPlayer::EscortScoringThink(void)
void __fastcall CBaseMultiplayerPlayer::EscortScoringThink(CBaseMultiplayerPlayer *const this)
{
  float m_flCapPointScoreRate; // xmm2_4
  float v3; // xmm0_4
  unsigned int v4; // ebx
  float v5; // xmm1_4
  __int64 v6; // rax
  __int64 v7; // r13
  void (__fastcall *v8)(__int64, char *, _QWORD); // r15
  CEntityIndex v9; // eax
  CGlobalVars *v10; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v12; // xmm0_4

  m_flCapPointScoreRate = this->m_flCapPointScoreRate;
  v3 = this->m_flAreaCaptureScoreAccumulator + 0.1;
  this->m_flAreaCaptureScoreAccumulator = v3;
  if ( m_flCapPointScoreRate > 0.0 )
  {
    v4 = 0;
    v5 = 1.0 / m_flCapPointScoreRate;
    if ( v3 >= (1.0 / m_flCapPointScoreRate) )
    {
      do
      {
        v3 = v3 - v5;
        ++v4;
      }
      while ( v3 >= v5 );
      this->m_flAreaCaptureScoreAccumulator = v3;
      v6 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_escort_score", 0, 0);
      v7 = v6;
      if ( v6 != 0 )
      {
        v8 = *(*v6 + 112LL);
        v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        v8(v7, "player", v9.m_Data);
        (*(*v7 + 112LL))(v7, "points", v4);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v7, 1);
      }
    }
  }
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v12 = v10->m_flCurrentTime + 0.1;
  }
  else
  {
    v12 = 0.1;
  }
  CBaseEntity::ThinkSet(this, CBaseMultiplayerPlayer::EscortScoringThink, v12, -739307463, 0);
}


// CBaseMultiplayerPlayer::StartScoringEscortPoints  (line 292, @0x0000000002162640, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet
// globals: CBaseMultiplayerPlayer::EscortScoringThink(void)
void __fastcall CBaseMultiplayerPlayer::StartScoringEscortPoints(
        CBaseMultiplayerPlayer *const this,
        double a2,
        float flRate)
{
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // xmm0_4

  this->m_flCapPointScoreRate = *&a2;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, a2, flRate);
    }
    v6 = v4->m_flCurrentTime + 0.1;
  }
  else
  {
    v6 = 0.1;
  }
  CBaseEntity::ThinkSet(this, CBaseMultiplayerPlayer::EscortScoringThink, v6, -739307463, 0);
}


// CBaseMultiplayerPlayer::StopScoringEscortPoints  (line 302, @0x00000000021626d0, libserver.so)
// calls: CBaseEntity::ThinkSet
void __fastcall CBaseMultiplayerPlayer::StopScoringEscortPoints(CBaseMultiplayerPlayer *const this)
{
  CBaseEntity::ThinkSet(this, 0LL, -1.0, -739307463, 0);
}


// CBaseMultiplayerPlayer::GetSteamID  (line 311, @0x00000000021626f0, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex
// callers: CServerAchievementManager::PlayerConnected, CBaseMultiplayerPlayer::GetSteamIDAsUInt64, CDOTAChallengeSystem::ClientMsg_ChallengeReroll, CDOTAGamerules::PlayerHasCustomGameHostPrivileges, CDOTAGamerules::PlayerSpawn, dota_call_gg, CDOTASteamWorksGameStatsServer::LogTutorialStats, CDOTA_OGS::LogMatchSnapshot, CDOTAPlayer::IsACoach, CDOTAPlayer::GetPlayerBySteamID, CDOTAPlayer::GetCoachedTeamNum, CDotaStatManager::GetStatIndexForPlayer (22 total)
bool __fastcall CBaseMultiplayerPlayer::GetSteamID(CBaseMultiplayerPlayer *const this, CSteamID *pID)
{
  __int64 (__fastcall *v3)(IVEngineServer2 *, _QWORD); // r12
  CEntityIndex v4; // eax
  CSteamID::SteamID_t *v5; // rax

  v3 = *(*engine + 544LL);
  v4.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v5 = v3(engine, v4.m_Data);
  if ( v5 == 0 )
    return 0;
  pID->m_steamid.m_comp = v5->m_comp;
  return 1;
}


// CBaseMultiplayerPlayer::GetSteamIDAsUInt64  (line 326, @0x0000000002162750, libserver.so)  // inlines: CSteamID, ConvertToUint64
// calls: CBaseMultiplayerPlayer::GetSteamID
// callers: CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, CDOTAGamerules::State_Leave_HERO_SELECTION, CDOTAPlayer::UpdatePlayerIDFromSteamID
uint64 __fastcall CBaseMultiplayerPlayer::GetSteamIDAsUInt64(CBaseMultiplayerPlayer *const this)
{
  bool SteamID; // al
  uint64 v2; // rdx
  CSteamID steamIDForPlayer; // [rsp+0h] [rbp-10h] BYREF

  HIWORD(steamIDForPlayer.m_steamid.m_unAll64Bits) = BYTE6(steamIDForPlayer.m_steamid.m_unAll64Bits) & 0xF;
  steamIDForPlayer.m_steamid.m_comp = (steamIDForPlayer.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  SteamID = CBaseMultiplayerPlayer::GetSteamID(this, &steamIDForPlayer);
  v2 = 0;
  if ( SteamID )
    return steamIDForPlayer.m_steamid.m_unAll64Bits;
  return v2;
}


