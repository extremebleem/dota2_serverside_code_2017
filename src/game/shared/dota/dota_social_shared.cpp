// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_social_shared.cpp:105
struct MatchEvent {
	int iPlayerID;  // +0x0
	RTime32 unTimestamp;  // +0x4
	int nGameTime;  // +0x8
	uint unReplayTime;  // +0xc

	// sizeof = 20
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InitializeSocialSystem  (line 116, @0x00000000026ccb40, libserver.so)  // inlines: RemoveAll
// callers: CDOTAGamerules::State_Enter_INIT, CDOTAGamerules::GameInit
// globals: s_vecRecordedMatchEvents
void __cdecl InitializeSocialSystem()
{
  s_vecRecordedMatchEvents.m_Size = 0;
}


// RecordSocialFeedMatchEvent  (line 122, @0x000000000270d910, libserver.so)  // inlines: AddToTail, CopyConstruct<MatchEvent>, Element, GrowMemory, RTime32TimeCur, operator[]
// calls: __cxa_guard_acquire, CDOTAGamerules::GetDOTATime, ConVarRef::ConVarRef, __cxa_guard_release, CUtlMemory<MatchEvent, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: RecordSocialFeedPostGameMatchEvents, CDOTA_BaseNPC_Hero::KilledHero, CDOTA_Item_Aegis::OnEquip
// strings: "tv_demo_starttick"
// globals: s_vecRecordedMatchEvents, `guard variable for'RecordSocialFeedMatchEvent(int,ESocialFeedMatchEventType)::tv_demo_starttick, RecordSocialFeedMatchEvent(int,ESocialFeedMatchEventType)::tv_demo_starttick
void __fastcall RecordSocialFeedMatchEvent(int iPlayerID, ESocialFeedMatchEventType eMatchEventType)
{
  MatchEvent *m_pMemory; // rax
  RTime32 v5; // r14d
  int DOTATime; // r15d
  __int64 m_Size; // r13
  float v8; // xmm1_4
  int v9; // edx
  int v10; // r8d
  MatchEvent *v11; // rax
  int v12; // [rsp+8h] [rbp-38h]

  if ( s_vecRecordedMatchEvents.m_Size > 0 )
  {
    m_pMemory = s_vecRecordedMatchEvents.m_Memory.m_pMemory;
    if ( s_vecRecordedMatchEvents.m_Memory.m_pMemory->iPlayerID == iPlayerID )
      return;
    while ( m_pMemory != &s_vecRecordedMatchEvents.m_Memory.m_pMemory[s_vecRecordedMatchEvents.m_Size - 1] )
    {
      ++m_pMemory;
      if ( m_pMemory->iPlayerID == iPlayerID )
        return;
    }
  }
  if ( `guard variable for'RecordSocialFeedMatchEvent(int,ESocialFeedMatchEventType)::tv_demo_starttick == 0
    && __cxa_guard_acquire(&`guard variable for'RecordSocialFeedMatchEvent(int,ESocialFeedMatchEventType)::tv_demo_starttick) != 0 )
  {
    ConVarRef::ConVarRef(
      &RecordSocialFeedMatchEvent(int,ESocialFeedMatchEventType)::tv_demo_starttick,
      "tv_demo_starttick");
    __cxa_guard_release(&`guard variable for'RecordSocialFeedMatchEvent(int,ESocialFeedMatchEventType)::tv_demo_starttick);
  }
  v5 = CRTime::sm_nTimeCur;
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
  m_Size = s_vecRecordedMatchEvents.m_Size;
  v8 = (gpGlobals->tickcount
      - RecordSocialFeedMatchEvent(int,ESocialFeedMatchEventType)::tv_demo_starttick.m_pConVarState->m_Value.m_nValue)
     * gpGlobals->interval_per_tick;
  v9 = s_vecRecordedMatchEvents.m_Size;
  v10 = v8;
  if ( s_vecRecordedMatchEvents.m_Size == s_vecRecordedMatchEvents.m_Memory.m_nAllocationCount )
  {
    v12 = v8;
    CUtlMemory<MatchEvent,int>::Grow(&s_vecRecordedMatchEvents.m_Memory, 1);
    v9 = s_vecRecordedMatchEvents.m_Size;
    v10 = v12;
  }
  s_vecRecordedMatchEvents.m_Size = v9 + 1;
  v11 = &s_vecRecordedMatchEvents.m_Memory.m_pMemory[m_Size];
  if ( v11 != 0 )
  {
    v11->iPlayerID = iPlayerID;
    v11->unTimestamp = v5;
    v11->nGameTime = DOTATime;
    v11->unReplayTime = v10;
    v11->eMatchEventType = eMatchEventType;
  }
}


// RecordSocialFeedPostGameMatchEvents  (line 149, @0x000000000270da80, libserver.so)  // inlines: RoundFloatToInt, _mm_cvt_ss2si, _mm_cvtss_si32, _mm_load_ss, _mm_set_ss
// calls: IsAppDota2Main, CDOTA_PlayerResource::GetKills, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_PlayerResource::GetTowerKills, RecordSocialFeedMatchEvent
// callers: CDOTAGCServerSystem::GameRules_State_Enter
void __cdecl RecordSocialFeedPostGameMatchEvents()
{
  int v0; // ebx
  int v1; // r15d
  int v2; // r14d
  int v3; // r13d
  int Kills; // eax
  int GoldPerMin; // eax
  int TowerKills; // eax
  int nMaxTowerKillsPlayerID; // [rsp+0h] [rbp-40h]
  int nMaxGPMPlayerID; // [rsp+4h] [rbp-3Ch]
  int nMaxKillsPlayerID; // [rsp+8h] [rbp-38h]

  if ( IsAppDota2Main() )
  {
    v0 = 0;
    nMaxTowerKillsPlayerID = -1;
    v1 = 0;
    v2 = 0;
    nMaxGPMPlayerID = -1;
    v3 = 0;
    nMaxKillsPlayerID = -1;
    do
    {
      Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, v0);
      if ( Kills > v3 )
      {
        nMaxKillsPlayerID = v0;
        v3 = Kills;
      }
      GoldPerMin = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, v0);
      if ( GoldPerMin > v2 )
      {
        nMaxGPMPlayerID = v0;
        v2 = GoldPerMin;
      }
      TowerKills = CDOTA_PlayerResource::GetTowerKills(g_pDOTAPlayerResource, v0);
      if ( TowerKills > v1 )
      {
        nMaxTowerKillsPlayerID = v0;
        v1 = TowerKills;
      }
      ++v0;
    }
    while ( v0 != 24 );
    if ( nMaxKillsPlayerID != -1 )
      RecordSocialFeedMatchEvent(nMaxKillsPlayerID, ESocialFeedMatchEventType::k_ESocialFeedMatchEventType_MostKills);
    if ( nMaxGPMPlayerID != -1 )
      RecordSocialFeedMatchEvent(nMaxGPMPlayerID, ESocialFeedMatchEventType::k_ESocialFeedMatchEventType_MostGPM);
    if ( nMaxTowerKillsPlayerID != -1 )
      RecordSocialFeedMatchEvent(
        nMaxTowerKillsPlayerID,
        ESocialFeedMatchEventType::k_ESocialFeedMatchEventType_MostTowerKills);
  }
}


// PopulateMatchSignOutSocialFeedEvents  (line 202, @0x00000000026ccb50, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CSocialFeedMatchEvent>::TypeHandler>, New, add_social_feed_events, operator[], set_account_id, set_event_type, set_game_time, set_has_account_id, set_has_event_type, set_has_game_time, set_has_replay_time, set_has_timestamp, set_replay_time, set_timestamp
// calls: CDOTA_PlayerResource::GetSteamAccountID, operator new, CMsgGameMatchSignOut_CSocialFeedMatchEvent::CMsgGameMatchSignOut_CSocialFeedMatchEvent, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::MatchSignOut
// globals: s_vecRecordedMatchEvents
void __fastcall PopulateMatchSignOutSocialFeedEvents(CMsgGameMatchSignOut *pMatchSignOut)
{
  __int64 v2; // r12
  int v3; // ebx
  MatchEvent *v4; // r13
  AccountID_t SteamAccountID; // r15d
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdx
  CMsgGameMatchSignOut_CSocialFeedMatchEvent *v10; // rax
  int v11; // edx
  RTime32 unTimestamp; // ecx
  ESocialFeedMatchEventType eMatchEventType; // ecx
  bool v14; // cc
  int nGameTime; // ecx
  uint unReplayTime; // ecx
  __int64 v17; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *v18; // [rsp-48h] [rbp-48h]
  CMsgGameMatchSignOut_CSocialFeedMatchEvent *v19; // [rsp-40h] [rbp-40h]

  if ( s_vecRecordedMatchEvents.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    v18 = (pMatchSignOut + 248);
    do
    {
      while ( 1 )
      {
        if ( g_pDOTAPlayerResource != 0 )
        {
          v4 = &s_vecRecordedMatchEvents.m_Memory.m_pMemory[v2];
          SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(
                             g_pDOTAPlayerResource,
                             s_vecRecordedMatchEvents.m_Memory.m_pMemory[v2].iPlayerID);
          if ( SteamAccountID != 0 )
            break;
        }
        ++v3;
        ++v2;
        if ( s_vecRecordedMatchEvents.m_Size <= v3 )
          return;
      }
      v6 = *(pMatchSignOut + 64);
      v7 = *(pMatchSignOut + 65);
      if ( v6 < v7 )
      {
        v17 = *(pMatchSignOut + 31);
        *(pMatchSignOut + 64) = v6 + 1;
        v10 = *(v17 + 8 * v6);
      }
      else
      {
        if ( v7 == *(pMatchSignOut + 66) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v18, v7 + 1);
        v19 = operator new(0x30u);
        CMsgGameMatchSignOut_CSocialFeedMatchEvent::CMsgGameMatchSignOut_CSocialFeedMatchEvent(v19);
        v8 = *(pMatchSignOut + 64);
        v9 = *(pMatchSignOut + 31);
        ++*(pMatchSignOut + 65);
        *(pMatchSignOut + 64) = v8 + 1;
        *(v9 + 8 * v8) = v19;
        v10 = v19;
      }
      v11 = *(v10 + 4);
      *(v10 + 6) = SteamAccountID;
      ++v3;
      ++v2;
      *(v10 + 4) = v11 | 1;
      unTimestamp = v4->unTimestamp;
      *(v10 + 4) = v11 | 3;
      *(v10 + 7) = unTimestamp;
      eMatchEventType = v4->eMatchEventType;
      *(v10 + 4) = v11 | 7;
      v14 = s_vecRecordedMatchEvents.m_Size <= v3;
      *(v10 + 8) = eMatchEventType;
      nGameTime = v4->nGameTime;
      *(v10 + 4) = v11 | 0xF;
      *(v10 + 9) = nGameTime;
      unReplayTime = v4->unReplayTime;
      *(v10 + 4) = v11 | 0x1F;
      *(v10 + 10) = unReplayTime;
    }
    while ( !v14 );
  }
}


