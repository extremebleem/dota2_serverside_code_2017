
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// __CreateCHLTVDirectorIHLTVDirector_interface  (line 26, @0x0000000002593560, libserver.so)
void *__cdecl __CreateCHLTVDirectorIHLTVDirector_interface()
{
  return &s_HLTVDirector.IHLTVDirector;
}


// CDOTAHLTVDirector::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 27, @0x000000000259ab00, libserver.so)
void __cdecl CDOTAHLTVDirector::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// HLTVDirector  (line 42, @0x000000000259ab10, libserver.so)
// callers: CSource2GameClients::GetHLTVDirector, CSource2GameClients::SendHLTVStatusMessage, CSource2GameClients::StartHLTVServer, tv_msg, CBasePlayer::ShouldTransmit, CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CDOTAGamerules::State_Think_POST_GAME, PerformDOTASaveGame, CDOTA_AutoSaveGameSystem::FrameUpdatePostEntityThink, CDOTAGCServerSystem::CheckUpdateConnectedPlayers, CDOTAGCServerSystem::UpdateGCServerInfo
// globals: s_HLTVDirector
CHLTVDirector *__cdecl HLTVDirector()
{
  return &s_HLTVDirector;
}


// HLTVDirectorSystem  (line 47, @0x000000000259ab20, libserver.so)
// callers: CLoopModeGame::AddModIndependentGameSystems
IGameSystem *__cdecl HLTVDirectorSystem()
{
  return &s_HLTVDirector.IGameSystem;
}


// DOTAHLTVDirector  (line 52, @0x000000000259ab30, libserver.so)
// callers: CDOTAGamerules::PreFatalShutdown, CDOTAGamerules::State_Enter, CDOTAGamerules::CheckUploadReplay, CDOTA_Ability_Furion_Teleportation::OnSpellStart, CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnIntervalThink, CDOTA_Item_BootsOfTravel::OnChannelFinish, CDOTA_Item_TeleportScroll::OnChannelFinish
// globals: s_HLTVDirector
CDOTAHLTVDirector *__cdecl DOTAHLTVDirector()
{
  return &s_HLTVDirector;
}


// CDOTAHLTVDirector::CDOTAHLTVDirector  (line 57, @0x000000000259ab40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CHLTVDirector::CHLTVDirector, CountdownTimer::CountdownTimer, CHLTVDirector::~CHLTVDirector, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
void __fastcall CDOTAHLTVDirector::CDOTAHLTVDirector(CDOTAHLTVDirector *const this)
{
  CHLTVDirector::CHLTVDirector(this);
  this->_vptr_IGameEventListener2 = off_41018F0;  // vptr: CDOTAHLTVDirector
  this->_vptr_IGameSystem = &off_4101A50;
  this->_vptr_IHLTVDirector = off_4101BA0;
  CountdownTimer::CountdownTimer(&this->m_startReplayTimer);
  this->m_replayUploadChildren.m_Size = 0;
  this->m_replayUploadChildren.m_Memory.m_pMemory = 0;
  this->m_replayUploadChildren.m_Memory.m_nAllocationCount = 0;
  this->m_replayUploadChildren.m_Memory.m_nGrowSize = 0;
  this->m_szLastReplayFilename[0] = 0;
  this->m_nNextShotID = -1;
  this->m_nNextForcedShotTick = 0;
  this->m_cameraEventId = -1;
}


// CDOTAHLTVDirector::GetDirectorCameraEventId  (line 65, @0x0000000002593570, libserver.so)
// strings: "dota_chase_hero"
int __fastcall CDOTAHLTVDirector::GetDirectorCameraEventId(CDOTAHLTVDirector *const this)
{
  int result; // eax

  result = this->m_cameraEventId;
  if ( result == -1 )
  {
    result = (*(gameeventmanager->_vptr_IBaseInterface + 14))(gameeventmanager, "dota_chase_hero");
    this->m_cameraEventId = result;
  }
  return result;
}


// CDOTAHLTVDirector::GameRules_State_Enter  (line 75, @0x000000000259abf0, libserver.so)  // inlines: GetBool, GetFloat, GetGameMode, GetInt, IsCustomGame, NetworkStateChanged, Set, Start, State_IsAfter, State_IsAfterWaitingForPlayers, State_IsBefore, State_IsBeforePostGame, State_Order, operator=<float>
// calls: ConVarRef::ConVarRef, CountdownTimer::Now, Msg
// callers: CDOTAGamerules::State_Enter
// strings: "tv_delay", "Starting replay recording in %.0f seconds...\n"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTAHLTVDirector::GameRules_State_Enter(CDOTAHLTVDirector *const this, DOTA_GameState newState)
{
  IHLTVServer *m_pHLTVServer; // rdi
  int v4; // eax
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // [rsp+8h] [rbp-28h]
  float newStateb; // [rsp+Ch] [rbp-24h]
  float newStatec; // [rsp+Ch] [rbp-24h]
  ConVarRef tv_delay; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_startReplayTimer.m_timestamp.m_Value <= 0.0 )
  {
    m_pHLTVServer = this->m_pHLTVServer;
    if ( m_pHLTVServer != 0
      && (*(m_pHLTVServer->_vptr_IBaseInterface + 13))(m_pHLTVServer) == 0
      && tv_dota_auto_record.m_pParent->m_Value.m_nValue != 0 )
    {
      if ( newState <= DOTA_GameState::DOTA_GAMERULES_STATE_WAIT_FOR_MAP_TO_LOAD )
      {
        v4 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[newState];
        if ( v4 <= dword_491AD04 )
          return;
      }
      else
      {
        if ( dword_491AD04 >= 0 )
          return;
        v4 = 0;
      }
      if ( dword_491AD18 > v4 && *&g_pGameRules[6].m_szQuestName[68] != 15 )
      {
        ConVarRef::ConVarRef(&tv_delay, "tv_delay");
        newStateb = tv_delay.m_pConVarState->m_Value.m_fValue;
        v5 = CountdownTimer::Now(&this->m_startReplayTimer);
        v6 = newStateb;
        v7 = v5 + newStateb;
        if ( v7 != this->m_startReplayTimer.m_timestamp.m_Value )
        {
          v8 = v7;
          (*(this->m_startReplayTimer._vptr_CountdownTimer + 2))(
            &this->m_startReplayTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          v6 = newStateb;
          this->m_startReplayTimer.m_timestamp.m_Value = v8;
        }
        if ( v6 != this->m_startReplayTimer.m_duration.m_Value )
        {
          newStatec = v6;
          (*(this->m_startReplayTimer._vptr_CountdownTimer + 2))(
            &this->m_startReplayTimer,
            8,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_startReplayTimer.m_duration.m_Value = newStatec;
        }
        Msg("Starting replay recording in %.0f seconds...\n", tv_delay.m_pConVarState->m_Value.m_fValue);
      }
    }
  }
}


// CDOTAHLTVDirector::SetHLTVServer  (line 93, @0x00000000025bfde0, libserver.so)  // inlines: ListenForGameEvent
// calls: CHLTVDirector::SetHLTVServer
// strings: "dota_unit_event"
void __fastcall CDOTAHLTVDirector::SetHLTVServer(CDOTAHLTVDirector *const this, IHLTVServer *hltv)
{
  CHLTVDirector::SetHLTVServer(this, hltv);
  if ( hltv != 0 )
  {
    this->m_bRegisteredForEvents = 1;
    (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, this, "dota_unit_event", 1);
  }
}


// CDOTAHLTVDirector::GetModEvents  (line 103, @0x00000000025935d0, libserver.so)
// globals: CDOTAHLTVDirector::GetModEvents(void)::s_modevents
const char **__fastcall CDOTAHLTVDirector::GetModEvents(CDOTAHLTVDirector *const this)
{
  return CDOTAHLTVDirector::GetModEvents(void)::s_modevents;
}


// CDOTAHLTVDirector::Shutdown  (line 128, @0x00000000025935f0, libserver.so)
void __fastcall CDOTAHLTVDirector::Shutdown(CDOTAHLTVDirector *const this)
{
  this->m_nNextShotID = -1;
  this->m_nNextForcedShotTick = 0;
}


// CreateUnitEvent  (line 134, @0x000000000259ad70, libserver.so)  // inlines: CreateEvent, SetInt
// callers: CDOTAHLTVDirector::AnalyzePlayers, CDOTAHLTVDirector::TryToGenerateTeleportEvent, CDOTA_BaseNPC_Hero::OnTakeDamage_Alive, CDOTA_BaseNPC::ActivateRuneEffect, CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC_Fort::OnTakeDamage_Alive, CDOTA_BaseNPC_Barracks::OnTakeDamage_Alive, CDOTA_BaseNPC_Healer::OnTakeDamage_Alive, CDOTAHeroList::DistributeRewardsForKill, CDOTA_BaseNPC_Fort::Event_Killed, CDOTA_BaseNPC_Tower::Event_Killed, CDOTA_BaseNPC_Barracks::Event_Killed (51 total)
// strings: "dota_unit_event", "victim", "eventtype"
void __fastcall CreateUnitEvent(
        CEntityIndex iUnitID1,
        CEntityIndex iUnitID2,
        int iPriority,
        EDOTAHeroChaseEventType eEventType)
{
  __int64 v8; // rax
  __int64 v9; // rbx

  if ( iPriority != 0 )
  {
    v8 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_unit_event", 0, 0);
    v9 = v8;
    if ( v8 != 0 )
    {
      (*(*v8 + 112LL))(v8, "victim", iUnitID1.m_Data);
      (*(*v9 + 112LL))(v9, "attacker", iUnitID2.m_Data);
      (*(*v9 + 112LL))(v9, "priority", iPriority);
      (*(*v9 + 112LL))(v9, "eventtype", eEventType);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v9, 1);
    }
  }
}


// CDOTAHLTVDirector::AnalyzePlayers  (line 153, @0x000000000259ae50, libserver.so)  // inlines: CEntityHandle, FastSqrt, Get, GetAssignedHero, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetHealthPercent, GetHero, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, Length2D, LookupEntity, NetworkStateChanged, RemapValClamped, Set, String, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, entindex, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<int>, operator[]
// calls: CDOTA_BaseNPC::FindModifierByName, CGlobalVarsBase::curtime, CBaseEntity::GetHealth, CBaseEntity::InSameTeam, CBaseEntity::GetAbsOrigin, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityInstance::GetEntityIndex, CreateUnitEvent, RandomInt
// strings: "modifier_monkey_king_fur_army_soldier_hidden", "modifier_smoke_of_deceit", "modifier_fountain_aura_buff", "Adding Idle Event: Priority %d - Target: %s - max dist: %f\n"
// globals: CEntityHandle::gm_pEntityList, LOG_DOTA_HLTVDIRECTOR
void __fastcall CDOTAHLTVDirector::AnalyzePlayers(CDOTAHLTVDirector *const this)
{
  __int64 v1; // r14
  int v2; // r13d
  CHandle<CDOTA_BaseNPC_Hero> *v3; // rdx
  uint32 m_Index; // eax
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rbx
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  int v12; // edi
  int v13; // edx
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  CEntityInstance *v16; // rdx
  int v17; // edx
  float v18; // xmm0_4
  bool v19; // cc
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm0_4
  __int64 v24; // r15
  CHandle<CDOTA_BaseNPC_Hero> *v25; // rdx
  uint32 v26; // eax
  __int16 v27; // si
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CBaseEntity *v30; // r8
  const Vector *v31; // rax
  float v32; // xmm0_4
  __m128 v33; // xmm0
  __m128 v34; // xmm7
  float v35; // xmm0_4
  CDOTA_Buff *v36; // rax
  char v37; // di
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rcx
  int v41; // r15d
  float v42; // xmm0_4
  float v43; // xmm2_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r8
  CEntityIndex v46; // eax
  float v47; // xmm0_4
  float v48; // xmm0_4
  __int64 v49; // r15
  int v50; // eax
  __int64 v51; // rsi
  float v52; // xmm1_4
  float v53; // xmm1_4
  CDOTA_BaseNPC *v54; // [rsp+8h] [rbp-68h]
  CDOTA_Buff *ModifierByName; // [rsp+10h] [rbp-60h]
  float flNearby; // [rsp+18h] [rbp-58h]
  float flClosestEnemy; // [rsp+1Ch] [rbp-54h]
  char bEnemySmoked; // [rsp+20h] [rbp-50h]
  __int64 bEnemySmokeda; // [rsp+20h] [rbp-50h]
  CBaseEntity *v60; // [rsp+28h] [rbp-48h]
  CBaseEntity *v61; // [rsp+28h] [rbp-48h]
  CBaseEntity *v62; // [rsp+28h] [rbp-48h]
  const Vector *AbsOrigin; // [rsp+28h] [rbp-48h]
  float v64; // [rsp+28h] [rbp-48h]

  v1 = 0;
  v2 = 0;
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    while ( 1 )
    {
      v3 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v1];
      m_Index = v3->m_Index;
      if ( v3->m_Index + 2 <= 1 )
        goto LABEL_3;
      v5 = v3->m_Index;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v6 == 0 )
        goto LABEL_3;
      v7 = &v6[v5 & 0x1FF];
      if ( v7 == 0 )
        goto LABEL_3;
      if ( m_Index != v7->m_EHandle.m_Index )
        goto LABEL_3;
      m_pInstance = v7->m_pInstance;
      if ( v7->m_pInstance == 0
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
        || LOBYTE(m_pInstance[71].m_pEntity) != 0
        || CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_monkey_king_fur_army_soldier_hidden", 0) != 0 )
      {
        goto LABEL_3;
      }
      v9 = 1;
      if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
      {
        v20 = 100LL * CBaseEntity::GetHealth(m_pInstance);
        v21 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
        v22 = 1;
        if ( v21 > 0 )
          v22 = v21;
        v23 = (((100 - v20 / v22) / 25) - 1.0) / 3.0;
        if ( v23 < 0.0 )
        {
          flClosestEnemy = 801.0;
        }
        else
        {
          flClosestEnemy = 1081.35;
          if ( v23 <= 1.0 )
            flClosestEnemy = ((0.35000002 * v23) + 1.0) * 801.0;
        }
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_smoke_of_deceit", 0);
        if ( g_HeroList.m_hHeroList.m_Size <= 0 )
        {
          flNearby = 0.0;
        }
        else
        {
          v24 = 0;
          bEnemySmoked = 0;
          flNearby = 0.0;
          do
          {
            while ( 1 )
            {
              v25 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v24];
              v26 = v25->m_Index;
              if ( v25->m_Index + 2 > 1 )
              {
                v27 = v25->m_Index;
                v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
                if ( v28 != 0 )
                {
                  v29 = &v28[v27 & 0x1FF];
                  if ( v29 != 0 && v26 == v29->m_EHandle.m_Index )
                  {
                    v30 = v29->m_pInstance;
                    if ( v29->m_pInstance != 0 && (v30[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                    {
                      v62 = v29->m_pInstance;
                      if ( (*(v30->_vptr_IHandleEntity + 408))(v29->m_pInstance) != 0
                        && m_pInstance != v62
                        && (!CBaseEntity::InSameTeam(v62, m_pInstance) || ModifierByName != 0)
                        && LOBYTE(v62[4].m_pfnMoveDone.__delta) == 0
                        && CDOTA_BaseNPC::FindModifierByName(
                             m_pInstance,
                             "modifier_monkey_king_fur_army_soldier_hidden",
                             0) == 0 )
                      {
                        v54 = v62;
                        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                        v31 = CBaseEntity::GetAbsOrigin(v54);
                        v32 = fsqrt(
                                ((v31->x - AbsOrigin->x) * (v31->x - AbsOrigin->x))
                              + ((v31->y - AbsOrigin->y) * (v31->y - AbsOrigin->y)));
                        if ( flClosestEnemy >= v32 )
                          break;
                      }
                    }
                  }
                }
              }
              if ( g_HeroList.m_hHeroList.m_Size <= ++v24 )
                goto LABEL_55;
            }
            if ( flClosestEnemy == 0.0 )
            {
              v33.m128_f32[0] = v32 - flClosestEnemy;
              v34 = _mm_cmple_ss(0LL, v33);
              LODWORD(v35) = _mm_andnot_ps(v34, 0x40000000u).m128_u32[0] | v34.m128_i32[0] & 0x3DCCCCCD;
            }
            else
            {
              v52 = v32;
              v35 = 2.0;
              v53 = v52 / flClosestEnemy;
              if ( v53 >= 0.0 )
              {
                v35 = 0.10000002;
                if ( v53 <= 1.0 )
                  v35 = (-1.9 * v53) + 2.0;
              }
            }
            flNearby = v35 + flNearby;
            v36 = CDOTA_BaseNPC::FindModifierByName(v54, "modifier_smoke_of_deceit", 0);
            v37 = bEnemySmoked;
            if ( v36 != 0 )
              v37 = 1;
            ++v24;
            bEnemySmoked = v37;
          }
          while ( g_HeroList.m_hHeroList.m_Size > v24 );
LABEL_55:
          if ( bEnemySmoked != 0 )
            flNearby = RandomInt(1, 2) * flNearby;
        }
        v38 = 100LL * CBaseEntity::GetHealth(m_pInstance);
        v39 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
        v64 = 1.0;
        v40 = v39;
        if ( v39 <= 0 )
          v40 = 1;
        if ( (v38 / v40) <= 99 )
        {
          v49 = 100LL * CBaseEntity::GetHealth(m_pInstance);
          v50 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
          v51 = 1;
          if ( v50 > 0 )
            v51 = v50;
          v64 = ((v49 / v51) / -10 + 10);
        }
        v41 = 1;
        if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_fountain_aura_buff", 0) == 0 )
          v41 = ((v64 * flNearby) + 5.0);
        v42 = CGlobalVarsBase::curtime(gpGlobals, 0);
        v43 = 3.0;
        if ( (v42 - *&m_pInstance[122].m_pEntity) <= 3.0 )
        {
          v48 = CGlobalVarsBase::curtime(gpGlobals, 0);
          v43 = 0.0;
          if ( (v48 - *&m_pInstance[122].m_pEntity) >= 0.0 )
            v43 = CGlobalVarsBase::curtime(gpGlobals, 0) - *&m_pInstance[122].m_pEntity;
        }
        v9 = (v41 + v43);
        if ( LoggingSystem_IsChannelEnabled(LOG_DOTA_HLTVDIRECTOR, 0) != 0 )
        {
          m_pEntity = m_pInstance->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          LoggingSystem_Log(
            LOG_DOTA_HLTVDIRECTOR,
            0,
            "Adding Idle Event: Priority %d - Target: %s - max dist: %f\n",
            v9,
            m_pAsString,
            flClosestEnemy);
        }
        v46.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
        CreateUnitEvent(v46, 0, v9, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_HERO_LOOKAT);
      }
      v10 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
      if ( v10 == 0 )
        goto LABEL_3;
      if ( *(v10 + 4820) == -1 )
      {
        v11 = 0x7FFF;
        v12 = 0x7FFF;
      }
      else
      {
        v11 = *(v10 + 4820) & 0x7FFF;
        v12 = v11;
      }
      v13 = (*(v10 + 4820) >> 15 << 15) | v11 & 0x7FFF;
      if ( (v13 + 2) <= 1 )
        goto LABEL_3;
      v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
      if ( v14 == 0 )
        goto LABEL_3;
      v15 = &v14[v12 & 0x1FF];
      if ( v15 == 0 )
        goto LABEL_3;
      if ( v13 != v15->m_EHandle.m_Index )
        goto LABEL_3;
      v16 = v15->m_pInstance;
      if ( v15->m_pInstance == 0
        || BYTE3(v16[7]._vptr_IHandleEntity) == 0
        || (v16[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
        || m_pInstance != v16 )
      {
        goto LABEL_3;
      }
      v17 = *(v10 + 4680);
      if ( v17 > v9 )
      {
        bEnemySmokeda = v10;
        v47 = CGlobalVarsBase::curtime(gpGlobals, 0);
        v10 = bEnemySmokeda;
        if ( v47 >= (*(bEnemySmokeda + 4736) + 2.0) )
        {
          v17 = *(bEnemySmokeda + 4680);
          goto LABEL_25;
        }
LABEL_3:
        ++v2;
        ++v1;
        if ( v2 >= g_HeroList.m_hHeroList.m_Size )
          return;
      }
      else
      {
LABEL_25:
        if ( v9 != v17 )
        {
          v60 = v10;
          (*(*v10 + 176LL))(v10, 4680, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v10 = v60;
          LODWORD(v60[6].m_iszPrivateVScripts.u.m_Id) = v9;
        }
        ++v2;
        v61 = v10;
        ++v1;
        v18 = CGlobalVarsBase::curtime(gpGlobals, 0);
        v19 = v2 < g_HeroList.m_hHeroList.m_Size;
        *&v61[6].m_NetworkTransmitComponent.m_pTimerEvent = v18;
        if ( !v19 )
          return;
      }
    }
  }
}


// CDOTAHLTVDirector::FindBestGameEvent  (line 247, @0x00000000025a9130, libserver.so)  // inlines: Element, FirstInorder, LeftChild, V_memset, memset, operator[]
// calls: CHLTVDirector::FindFirstEvent, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, RandomInt
// strings: "Death Event found! id: %ld - time %f - priority: %d\n", "Found the queued event %ld! Let's do this!\n"
// globals: LOG_DOTA_HLTVDIRECTOR
CHLTVGameEvent *__fastcall CDOTAHLTVDirector::FindBestGameEvent(CDOTAHLTVDirector *const this)
{
  int m_nBroadcastTick; // esi
  __int64 v3; // rbx
  int FirstEvent; // ecx
  int v5; // r14d
  int v6; // r9d
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v7; // rdx
  int v8; // eax
  unsigned __int16 Inorder; // ax
  int m_Priority; // r8d
  char IsChannelEnabled; // al
  __int64 v12; // rax
  __int64 v13; // rsi
  int v15; // eax
  __int64 m_nNextShotID; // r14
  unsigned __int16 m_Root; // dx
  CHLTVGameEvent *p_m_Data; // r8
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *m_pMemory; // rbx
  __int64 v20; // r15
  unsigned __int16 m_Left; // ax
  char v22; // al
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v23; // r15
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v24; // [rsp+8h] [rbp-78h]
  int index; // [rsp+14h] [rbp-6Ch]
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v26; // [rsp+18h] [rbp-68h]
  int v27; // [rsp+18h] [rbp-68h]
  bool bDeathEventFound; // [rsp+23h] [rbp-5Dh]
  unsigned int priority; // [rsp+24h] [rbp-5Ch]
  int prioritya; // [rsp+24h] [rbp-5Ch]
  int bestEvent[4]; // [rsp+30h] [rbp-50h] BYREF
  int bestEventPrio[16]; // [rsp+40h] [rbp-40h] BYREF

  memset(bestEvent, 0, sizeof(bestEvent));
  m_nBroadcastTick = this->m_nBroadcastTick;
  memset(bestEventPrio, 0, 16);
  if ( this->m_nNextForcedShotTick != m_nBroadcastTick || (m_nNextShotID = this->m_nNextShotID) == -1 )
  {
    this->m_nNextShotID = -1;
    v3 = 0;
    this->m_nNextForcedShotTick = 0;
    bDeathEventFound = 0;
    FirstEvent = CHLTVDirector::FindFirstEvent(this, m_nBroadcastTick);
    do
    {
      bestEventPrio[v3] = 0;
      bestEvent[v3] = 0;
      v5 = this->m_nBroadcastTick + ((((v3 + 1.0) * 1.5) / gpGlobals->interval_per_tick) + 0.5);
      if ( v5 > this->m_nNextShotTick )
        break;
      if ( FirstEvent != 0xFFFF )
      {
        v6 = FirstEvent;
        v7 = &this->m_EventHistory.m_Elements.m_pMemory[FirstEvent];
        if ( v5 >= v7->m_Data.m_Tick )
        {
          v8 = 0;
          while ( 1 )
          {
            m_Priority = v7->m_Data.m_Priority;
            if ( m_Priority > v8 )
              goto LABEL_54;
            if ( m_Priority == v8 )
            {
              v24 = v7;
              index = FirstEvent;
              v27 = v6;
              prioritya = v7->m_Data.m_Priority;
              v15 = RandomInt(0, 1);
              m_Priority = prioritya;
              v6 = v27;
              FirstEvent = index;
              v7 = v24;
              if ( v15 == 1 )
              {
LABEL_54:
                bestEventPrio[v3] = m_Priority;
                bestEvent[v3] = FirstEvent;
                if ( m_Priority > 99 )
                {
                  v26 = v7;
                  priority = v6;
                  IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_DOTA_HLTVDIRECTOR, 0);
                  bDeathEventFound = 1;
                  LOWORD(v6) = priority;
                  if ( IsChannelEnabled != 0 )
                  {
                    LoggingSystem_Log(
                      LOG_DOTA_HLTVDIRECTOR,
                      0,
                      "Death Event found! id: %ld - time %f - priority: %d\n",
                      v26->m_Data.m_Index,
                      v26->m_Data.m_Priority,
                      priority,
                      (v26->m_Data.m_Tick * gpGlobals->interval_per_tick));
                    LOWORD(v6) = priority;
                  }
                }
              }
            }
            Inorder = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                        &this->m_EventHistory,
                        v6);
            FirstEvent = Inorder;
            if ( Inorder == 0xFFFF )
              break;
            v7 = &this->m_EventHistory.m_Elements.m_pMemory[Inorder];
            if ( v5 < v7->m_Data.m_Tick )
              break;
            v8 = bestEventPrio[v3];
            v6 = FirstEvent;
          }
        }
      }
      ++v3;
    }
    while ( v3 != 4 );
    if ( bestEventPrio[0] == 0 && bestEventPrio[1] == 0 && bestEventPrio[2] == 0 && bestEventPrio[3] == 0 )
      return 0;
    if ( bDeathEventFound )
    {
      v12 = 0;
      v13 = 0;
      if ( bestEventPrio[0] > 99 )
        return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[v13])].m_Data;
      while ( ++v12 != 4 )
      {
        v13 = v12;
        if ( bestEventPrio[v12] > 99 )
          return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[v13])].m_Data;
      }
    }
    if ( bestEventPrio[0] > bestEventPrio[1] )
    {
      if ( bestEventPrio[0] > bestEventPrio[2] )
        return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[0])].m_Data;
    }
    else if ( bestEventPrio[1] >= bestEventPrio[2] )
    {
      if ( bestEventPrio[1] >= bestEventPrio[3] )
        return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[1])].m_Data;
      return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[3])].m_Data;
    }
    if ( bestEventPrio[2] > bestEventPrio[3] )
      return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[2])].m_Data;
    return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[3])].m_Data;
  }
  m_Root = this->m_EventHistory.m_Root;
  p_m_Data = 0;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_EventHistory.m_Elements.m_pMemory;
    v20 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left == 0xFFFF )
    {
      m_Left = this->m_EventHistory.m_Root;
    }
    else
    {
      while ( 1 )
      {
        v20 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
    }
    while ( 1 )
    {
      v23 = &m_pMemory[v20];
      if ( v23 != -8LL && v23->m_Data.m_Index == m_nNextShotID )
        break;
      m_Left = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_EventHistory,
                 m_Left);
      if ( m_Left == 0xFFFF )
      {
        p_m_Data = 0;
        goto LABEL_43;
      }
      v20 = m_Left;
    }
    v22 = LoggingSystem_IsChannelEnabled(LOG_DOTA_HLTVDIRECTOR, 0);
    p_m_Data = &v23->m_Data;
    if ( v22 != 0 )
    {
      LoggingSystem_Log(LOG_DOTA_HLTVDIRECTOR, 0, "Found the queued event %ld! Let's do this!\n", v23->m_Data.m_Index);
      p_m_Data = &v23->m_Data;
    }
  }
LABEL_43:
  this->m_nNextShotID = -1;
  this->m_nNextForcedShotTick = 0;
  return p_m_Data;
}


// CDOTAHLTVDirector::CreateShotFromEvent  (line 362, @0x000000000259b8e0, libserver.so)  // inlines: GetInt, _V_strcmp
// calls: RandomInt, CDOTAHLTVDirector::StartChaseCameraShot, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "dota_unit_event", "victim", "eventtype", "Did not find any close death events!\n", "Processing event: index: %ld time: %f priority: %d - Now looking for close death events!\, "Found another event!! Time: %f - %d - tick: %d\n"
// globals: LOG_DOTA_HLTVDIRECTOR
void __fastcall CDOTAHLTVDirector::CreateShotFromEvent(CDOTAHLTVDirector *const this, CHLTVGameEvent *event)
{
  signed int v4; // r14d
  _BOOL8 v5; // r15
  unsigned int v6; // eax
  float v7; // xmm1_4
  CGlobalVars *v8; // rdx
  int m_nBroadcastTick; // r14d
  __int64 v10; // rdi
  int m_nNextShotTick; // r15d
  int v12; // eax
  CHLTVGameEvent *v13; // rax
  CHLTVGameEvent *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  int v17; // eax
  unsigned int iPriority; // [rsp+0h] [rbp-40h]
  float flGameTime; // [rsp+4h] [rbp-3Ch]
  int pNextEvent; // [rsp+8h] [rbp-38h]
  CHLTVGameEvent *pNextEventa; // [rsp+8h] [rbp-38h]

  if ( event != 0 && strcmp("dota_unit_event", (*(event->m_Event->_vptr_IGameEvent + 2))(event->m_Event)) == 0 )
  {
    v4 = (*(event->m_Event->_vptr_IGameEvent + 8))(event->m_Event, "victim", 0);
    pNextEvent = (*(event->m_Event->_vptr_IGameEvent + 8))(event->m_Event, "attacker", 0);
    if ( v4 > 0 )
    {
      iPriority = (*(event->m_Event->_vptr_IGameEvent + 8))(event->m_Event, "priority", 0);
      flGameTime = event->m_Tick * gpGlobals->interval_per_tick;
      v5 = RandomInt(1, 100) < dota_director_shoulder_view_chance.m_pParent->m_Value.m_nValue;
      v6 = (*(event->m_Event->_vptr_IGameEvent + 8))(event->m_Event, "eventtype", 0);
      CDOTAHLTVDirector::StartChaseCameraShot(this, v4, pNextEvent, 2 * v5, iPriority, flGameTime, v6);
      v7 = 5.0;
      if ( event->m_Priority <= 99 )
        v7 = 3.5;
      v8 = gpGlobals;
      m_nBroadcastTick = this->m_nBroadcastTick;
      v10 = LOG_DOTA_HLTVDIRECTOR;
      m_nNextShotTick = this->m_nNextShotTick;
      v12 = event->m_Tick + ((1.5 / gpGlobals->interval_per_tick) + 0.5);
      this->m_nBroadcastTick = v12;
      this->m_nNextShotTick = ((v7 / v8->interval_per_tick) + 0.5) + v12;
      if ( LoggingSystem_IsChannelEnabled(v10, 0) != 0 )
        LoggingSystem_Log(
          LOG_DOTA_HLTVDIRECTOR,
          0,
          "Processing event: index: %ld time: %f priority: %d - Now looking for close death events!\n",
          event->m_Index,
          event->m_Priority,
          (event->m_Tick * gpGlobals->interval_per_tick));
      v13 = (*(this->_vptr_IGameEventListener2 + 39))(this);
      this->m_nNextShotTick = m_nNextShotTick;
      v14 = v13;
      this->m_nBroadcastTick = m_nBroadcastTick;
      if ( v13 != 0 && v13->m_Priority > 44 )
      {
        pNextEventa = v13;
        v16 = LOG_DOTA_HLTVDIRECTOR;
        v17 = v13->m_Tick - ((0.5 / gpGlobals->interval_per_tick) + 0.5);
        this->m_nNextShotTick = v17;
        this->m_nNextForcedShotTick = v17;
        this->m_nNextShotID = v14->m_Index;
        if ( LoggingSystem_IsChannelEnabled(v16, 0) != 0 )
          LoggingSystem_Log(
            LOG_DOTA_HLTVDIRECTOR,
            0,
            "Found another event!! Time: %f - %d - tick: %d\n",
            pNextEventa->m_Priority,
            (pNextEventa->m_Tick * gpGlobals->interval_per_tick));
      }
      else
      {
        v15 = LOG_DOTA_HLTVDIRECTOR;
        this->m_nNextShotTick = event->m_Tick + ((2.0 / gpGlobals->interval_per_tick) + 0.5);
        if ( LoggingSystem_IsChannelEnabled(v15, 0) != 0 )
          LoggingSystem_Log(LOG_DOTA_HLTVDIRECTOR, 0, "Did not find any close death events!\n");
      }
    }
  }
}


// CDOTAHLTVDirector::StartChaseCameraShot  (line 434, @0x000000000259b640, libserver.so)  // inlines: CUtlString, String, ToDOTABaseNPC, curtime, ~CUtlString
// calls: UTIL_EntityByIndex, LoggingSystem_IsChannelEnabled, CUtlString::FreeMemoryBlock, CHLTVDirector::BroadcastEventInternal, CUtlString::Get, LoggingSystem_Log, _Unwind_Resume
// callers: CDOTAHLTVDirector::CreateShotFromEvent, CDOTAHLTVDirector::StartRandomShot
// strings: "dota_chase_hero", "eventtype", "target1playerid", "target2playerid"
// globals: LOG_DOTA_HLTVDIRECTOR
void __fastcall CDOTAHLTVDirector::StartChaseCameraShot(
        CDOTAHLTVDirector *const this,
        unsigned int iTarget1,
        int iTarget2,
        unsigned int iType,
        unsigned int iPriority,
        float flGameTime,
        unsigned int eEventType)
{
  __int64 v10; // rax
  IGameEvent *v11; // rbx
  CBaseEntity *v12; // rax
  CBaseEntity *v13; // r14
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v15; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *v17; // rax
  const char *v18; // rax
  CUtlString eventPrint; // [rsp+20h] [rbp-40h] BYREF

  v10 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_chase_hero", 1, 0);
  v11 = v10;
  if ( v10 == 0 )
    return;
  (*(*v10 + 112LL))(v10, "target1", iTarget1);
  (*(v11->_vptr_IGameEvent + 14))(v11, "target2", iTarget2);
  (*(v11->_vptr_IGameEvent + 14))(v11, "type", iType);
  (*(v11->_vptr_IGameEvent + 14))(v11, "priority", iPriority);
  (*(v11->_vptr_IGameEvent + 16))(v11, "gametime", flGameTime);
  (*(v11->_vptr_IGameEvent + 14))(v11, "eventtype", eEventType);
  if ( iTarget1 <= 0 || (v12 = UTIL_EntityByIndex(iTarget1), v13 = v12, v12 == 0) || !v12->m_bIsDOTANPC )
  {
    (*(v11->_vptr_IGameEvent + 14))(v11, "target1playerid", 64);
LABEL_24:
    if ( iTarget2 <= 0 )
      goto LABEL_15;
    goto LABEL_13;
  }
  (*(v11->_vptr_IGameEvent + 14))(v11, "target1playerid", LODWORD(v12[3].m_AIAddOn.u.m_Id));
  if ( (v13[2].m_hEffectEntity.m_Value.m_Index & 1) == 0 )
    goto LABEL_24;
  m_flCurrentTime = 0.0;
  v15 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v15->m_flCurrentTime;
  }
  *&v13[7].m_OnKilled.m_pDesc = m_flCurrentTime;
  if ( iTarget2 > 0 )
  {
LABEL_13:
    v17 = UTIL_EntityByIndex(iTarget2);
    if ( v17 != 0 && v17->m_bIsDOTANPC )
    {
      (*(v11->_vptr_IGameEvent + 14))(v11, "target2playerid", LODWORD(v17[3].m_AIAddOn.u.m_Id));
      goto LABEL_16;
    }
  }
LABEL_15:
  (*(v11->_vptr_IGameEvent + 14))(v11, "target2playerid", 64);
LABEL_16:
  if ( LoggingSystem_IsChannelEnabled(LOG_DOTA_HLTVDIRECTOR, 1) != 0 )
  {
    eventPrint.m_pString = 0;
    (*(gameeventmanager->_vptr_IBaseInterface + 15))(gameeventmanager, v11, &eventPrint);
    if ( LoggingSystem_IsChannelEnabled(LOG_DOTA_HLTVDIRECTOR, 1) != 0 )
    {
      v18 = CUtlString::Get(&eventPrint);
      LoggingSystem_Log(LOG_DOTA_HLTVDIRECTOR, 1, "%s", v18);
    }
    if ( eventPrint.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&eventPrint);
  }
  CHLTVDirector::BroadcastEventInternal(this, v11, 0);
  (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v11);
}


// CDOTAHLTVDirector::TryToGenerateTeleportEvent  (line 474, @0x00000000025a8e90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityInstance::GetEntityIndex, CreateUnitEvent, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_Ability_Furion_Teleportation::OnSpellStart, CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnIntervalThink, CDOTA_Item_BootsOfTravel::OnChannelFinish, CDOTA_Item_TeleportScroll::OnChannelFinish
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHLTVDirector::TryToGenerateTeleportEvent(CDOTAHLTVDirector *const this, _WORD *hEntity)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  const CBaseEntity *v5; // rdi
  const Vector *AbsOrigin; // rax
  int v7; // r13d
  CEntityIndex v8; // eax
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v10; // [rsp+138h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  if ( (*hEntity + 2) > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[*hEntity & 0x1FF];
      if ( v3 != 0 && *hEntity == v3->m_EHandle.m_Index )
      {
        m_pInstance = v3->m_pInstance;
        if ( v3->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          v5 = v3->m_pInstance;
          entities.m_Size = 0;
          entities.m_Memory.m_nAllocationCount = 64;
          entities.m_Memory.m_nGrowSize = 0x80000000;
          entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
          FindUnitsInRadius(m_pInstance->m_iTeamNum.m_Value, AbsOrigin, m_pInstance, 800.0, &entities, 2, 1, 8208, 0, 0);
          if ( entities.m_Size != 0 )
          {
            v7 = 5 * entities.m_Size + 10;
            v8.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
            CreateUnitEvent(v8, 0, v7, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_END_TELEPORT);
          }
          entities.m_Size = 0;
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
            if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          }
        }
      }
    }
  }
}


// CDOTAHLTVDirector::StartRandomShot  (line 491, @0x00000000025b6b30, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetRaw, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::FindModifierByName, CEntityInstance::GetEntityIndex, RandomInt, CDOTAHLTVDirector::StartChaseCameraShot, CUtlMemory<CEntityIndex, int>::Purge, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CEntityIndex, int>::Grow, _Unwind_Resume
// strings: "modifier_monkey_king_fur_army_soldier_hidden"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHLTVDirector::StartRandomShot(CDOTAHLTVDirector *const this)
{
  int m_nNextShotTick; // edx
  int m_Size; // r10d
  int v3; // eax
  __int64 v4; // r12
  int v5; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r14
  CEntityIndex v12; // eax
  __int64 v13; // r14
  int32 m_Data; // r15d
  int v15; // eax
  CEntityIndex *v16; // rax
  int v17; // esi
  int v18; // eax
  __int64 v19; // rbx
  int i; // r12d
  CEntityInstance *v21; // rax
  CEntityInstance *v22; // r13
  CEntityIndex v23; // eax
  __int64 v24; // r13
  int32 v25; // r14d
  int v26; // eax
  CEntityIndex *v27; // rax
  CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int> > candidates; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecUnits; // [rsp+50h] [rbp-50h] BYREF

  candidates.m_Size = 0;
  candidates.m_Memory.m_pMemory = 0;
  candidates.m_Memory.m_nAllocationCount = 0;
  m_nNextShotTick = this->m_nNextShotTick;
  candidates.m_Memory.m_nGrowSize = 0;
  m_Size = g_HeroList.m_hHeroList.m_Size;
  v3 = this->m_nBroadcastTick + ((5.0 / gpGlobals->interval_per_tick) + 0.5);
  if ( v3 > m_nNextShotTick )
    v3 = m_nNextShotTick;
  this->m_nNextShotTick = v3;
  if ( m_Size <= 0 )
    goto LABEL_26;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v10->m_pInstance) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0
              && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_monkey_king_fur_army_soldier_hidden", 0) == 0 )
            {
              v12.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
              v13 = candidates.m_Size;
              m_Data = v12.m_Data;
              v15 = candidates.m_Size;
              if ( candidates.m_Size == candidates.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CEntityIndex,int>::Grow(&candidates.m_Memory, 1);
                v15 = candidates.m_Size;
              }
              candidates.m_Size = v15 + 1;
              v16 = &candidates.m_Memory.m_pMemory[v13];
              if ( v16 != 0 )
                break;
            }
          }
        }
      }
      ++v5;
      ++v4;
      if ( v5 >= g_HeroList.m_hHeroList.m_Size )
        goto LABEL_19;
    }
    v16->m_Data = m_Data;
    ++v5;
    ++v4;
  }
  while ( v5 < g_HeroList.m_hHeroList.m_Size );
LABEL_19:
  v17 = candidates.m_Size;
  if ( candidates.m_Size == 0 )
  {
LABEL_26:
    vecUnits.m_Size = 0;
    vecUnits.m_Memory.m_pMemory = 0;
    vecUnits.m_Memory.m_nAllocationCount = 0;
    vecUnits.m_Memory.m_nGrowSize = 0;
    FindUnitsInRadius(2, &vec3_origin, 0, -1.0, &vecUnits, 3, 3, 0, 0, 0);
    v19 = 0;
    for ( i = 0; vecUnits.m_Size > i; ++v19 )
    {
      while ( 1 )
      {
        v21 = CEntityHandle::operator CEntityInstance *(&vecUnits.m_Memory.m_pMemory[v19]);
        v22 = v21;
        if ( v21 != 0
          && BYTE3(v21[7]._vptr_IHandleEntity) != 0
          && (*(v21->_vptr_IHandleEntity + 408))(v21) != 0
          && LOBYTE(v22[71].m_pEntity) == 0
          && (HIBYTE(v22[7].m_CScriptComponent) - 2) <= 1u )
        {
          v23.m_Data = CEntityInstance::GetEntityIndex(v22).m_Data;
          v24 = candidates.m_Size;
          v25 = v23.m_Data;
          v26 = candidates.m_Size;
          if ( candidates.m_Size == candidates.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CEntityIndex,int>::Grow(&candidates.m_Memory, 1);
            v26 = candidates.m_Size;
          }
          candidates.m_Size = v26 + 1;
          v27 = &candidates.m_Memory.m_pMemory[v24];
          if ( v27 != 0 )
            break;
        }
        ++i;
        ++v19;
        if ( vecUnits.m_Size <= i )
          goto LABEL_38;
      }
      v27->m_Data = v25;
      ++i;
    }
LABEL_38:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecUnits);
    v17 = candidates.m_Size;
  }
  if ( v17 > 0 )
  {
    v18 = RandomInt(0, (v17 - 1));
    CDOTAHLTVDirector::StartChaseCameraShot(this, candidates.m_Memory.m_pMemory[v18].m_Data, 0, 1u, 1u, 0.0, 0);
  }
  if ( (candidates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&candidates.m_Memory);
    if ( (candidates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&candidates.m_Memory);
  }
}


// CDOTAHLTVDirector::NewEventNotification  (line 534, @0x0000000002597ef0, libserver.so)  // inlines: curtime
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Added new event! index %ld - time %f - priority %d\n"
// globals: LOG_DOTA_HLTVDIRECTOR
void __fastcall CDOTAHLTVDirector::NewEventNotification(CDOTAHLTVDirector *const this, CHLTVGameEvent *event)
{
  double m_flCurrentTime; // xmm0_8
  int m_Priority; // r8d
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v7; // [rsp+Ch] [rbp-14h]

  if ( event->m_Priority > 4 && LoggingSystem_IsChannelEnabled(LOG_DOTA_HLTVDIRECTOR, 0) != 0 )
  {
    m_flCurrentTime = 0.0;
    m_Priority = event->m_Priority;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v7 = event->m_Priority;
          (m_pfnWarningFunc)(1, 0.0);
          m_Priority = v7;
        }
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    LoggingSystem_Log(
      LOG_DOTA_HLTVDIRECTOR,
      0,
      "Added new event! index %ld - time %f - priority %d\n",
      event->m_Index,
      m_flCurrentTime,
      m_Priority);
  }
}


// CDOTAHLTVDirector::FinishRecording  (line 554, @0x00000000025bfe40, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, DOTAGameRules, GetGameMode, GetGameWinner, GetGlobalDOTATeam, GetLastLeagueID, GetLastMatchID, GetTeamID, New, add_picks_bans, add_player_info, assign, length, mutable_dota, set_dire_team_id, set_dire_team_tag, set_end_time, set_game_mode, set_game_team, set_game_winner, set_has_dire_team_id, set_has_dire_team_tag, set_has_dota, set_has_end_time, set_has_game_mode, set_has_game_team, set_has_game_winner, set_has_hero_id, set_has_hero_name, set_has_is_fake_client, set_has_is_pick, set_has_leagueid, set_has_match_id, set_has_player_name, set_has_radiant_team_id, set_has_radiant_team_tag, set_has_steamid, set_has_team, set_hero_id, set_hero_name, set_is_fake_client, set_is_pick, set_leagueid, set_match_id, set_player_name, set_radiant_team_id, set_radiant_team_tag, set_steamid, set_team
// calls: V_snprintf, Msg, CGameInfo::CGameInfo, GDOTAGCClientSystem, CGameInfo::mutable_dota, GetSteamWorksGameStatsServer, CSteamWorksGameStatsUploader::GetTimeSinceEpoch, CDOTA_PlayerResource::NumTeamPlayers, CDOTA_PlayerResource::GetSelectedHeroName, CDOTA_PlayerResource::GetPlayerName, operator new, CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo (26 total)
// callers: CDOTAGamerules::PreFatalShutdown, CDOTAGamerules::CheckUploadReplay
// strings: "CDOTAHLTVDirector::FinishRecording  m_szLastReplayFilename = %s\n", "CDOTAHLTVDirector::FinishRecording - not currently recording.  m_szLastReplayFilename = %, "CDOTAHLTVDirector::FinishRecording No HLTVServer.\n"
void __fastcall CDOTAHLTVDirector::FinishRecording(CDOTAHLTVDirector *const this)
{
  IHLTVServer *m_pHLTVServer; // rdi
  const char *v2; // rax
  __int64 v3; // rbx
  CGameInfo_CDotaGameInfo *v4; // rax
  CGameInfo_CDotaGameInfo *v5; // rax
  CGameInfo_CDotaGameInfo *v6; // rax
  CGameInfo_CDotaGameInfo *v7; // rax
  CSteamWorksGameStatsServer *SteamWorksGameStatsServer; // rax
  CGameInfo_CDotaGameInfo *v9; // rax
  int v10; // ebx
  const char *SelectedHeroName; // rax
  const char *v12; // r12
  const char *PlayerName; // rax
  int *v14; // r14
  const char *v15; // r15
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdx
  CGameInfo_CDotaGameInfo_CPlayerInfo *v20; // r14
  size_t v21; // rax
  bool IsFakeClient; // al
  uint64 SteamID; // rax
  int Team; // eax
  __int64 v25; // rdx
  size_t v26; // rax
  int i; // ebx
  CTeam *GlobalTeam; // rax
  int m_Id; // r12d
  const char *v30; // r13
  CGameInfo_CDotaGameInfo *v31; // rax
  CGameInfo_CDotaGameInfo *v32; // rax
  CGameInfo_CDotaGameInfo *v33; // r12
  size_t v34; // rax
  CGameRules *v35; // r13
  __int64 v36; // r12
  int v37; // r15d
  __int64 v38; // rax
  __int64 v39; // rdx
  CGameInfo_CDotaGameInfo_CHeroSelectEvent *v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // ecx
  _DWORD *v44; // r14
  int *v45; // rbx
  __int64 v46; // rax
  int v47; // esi
  __int64 v48; // rdx
  CGameInfo_CDotaGameInfo *v49; // rax
  CGameInfo_CDotaGameInfo_CPlayerInfo *pMem; // [rsp+18h] [rbp-58h]
  CGameInfo_CDotaGameInfo_CHeroSelectEvent *pMema; // [rsp+18h] [rbp-58h]
  _BYTE v53[16]; // [rsp+20h] [rbp-50h] BYREF
  int v54; // [rsp+30h] [rbp-40h]
  int *v55; // [rsp+38h] [rbp-38h]

  m_pHLTVServer = this->m_pHLTVServer;
  if ( m_pHLTVServer != 0 )
  {
    if ( (*(m_pHLTVServer->_vptr_IBaseInterface + 13))(m_pHLTVServer) != 0 )
    {
      v2 = (*(this->m_pHLTVServer->_vptr_IBaseInterface + 14))(this->m_pHLTVServer);
      if ( v2 != 0 )
        V_snprintf(this->m_szLastReplayFilename, 260, "%s", v2);
      Msg("CDOTAHLTVDirector::FinishRecording  m_szLastReplayFilename = %s\n", this->m_szLastReplayFilename);
      CGameInfo::CGameInfo(v53);
      v3 = *(GDOTAGCClientSystem() + 231);
      v4 = CGameInfo::mutable_dota(v53);
      *(v4 + 4) |= 1u;
      *(v4 + 3) = v3;
      LODWORD(v3) = *&g_pGameRules[6].m_szQuestName[68];
      v5 = CGameInfo::mutable_dota(v53);
      *(v5 + 4) |= 2u;
      *(v5 + 8) = v3;
      LODWORD(v3) = *&g_pGameRules[16].m_szQuestName[80];
      v6 = CGameInfo::mutable_dota(v53);
      *(v6 + 4) |= 4u;
      *(v6 + 9) = v3;
      LODWORD(v3) = *(GDOTAGCClientSystem() + 464);
      v7 = CGameInfo::mutable_dota(v53);
      *(v7 + 4) |= 0x10u;
      *(v7 + 22) = v3;
      SteamWorksGameStatsServer = GetSteamWorksGameStatsServer();
      LODWORD(v3) = CSteamWorksGameStatsUploader::GetTimeSinceEpoch(SteamWorksGameStatsServer);
      v9 = CGameInfo::mutable_dota(v53);
      *(v9 + 27) = v3;
      v10 = 0;
      *(v9 + 4) |= 0x400u;
      while ( v10 < CDOTA_PlayerResource::NumTeamPlayers(g_pDOTAPlayerResource) )
      {
        SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v10);
        v12 = SelectedHeroName;
        if ( SelectedHeroName != 0 && *SelectedHeroName != 0 )
        {
          PlayerName = CDOTA_PlayerResource::GetPlayerName(g_pDOTAPlayerResource, v10);
          v14 = v55;
          v15 = PlayerName;
          v54 |= 1u;
          if ( v55 == 0 )
          {
            v14 = operator new(0x78u);
            CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(v14);
            v55 = v14;
          }
          v16 = v14[12];
          v17 = v14[13];
          if ( v16 < v17 )
          {
            v25 = *(v14 + 5);
            v14[12] = v16 + 1;
            v20 = *(v25 + 8 * v16);
          }
          else
          {
            if ( v17 == v14[14] )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v14 + 10), v17 + 1);
            pMem = operator new(0x38u);
            CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo(pMem);
            v18 = v14[12];
            v19 = *(v14 + 5);
            ++v14[13];
            v14[12] = v18 + 1;
            *(v19 + 8 * v18) = pMem;
            v20 = pMem;
          }
          *(v20 + 4) |= 1u;
          v21 = strlen(v12);
          std::string::assign(*(v20 + 3), v12, v21);
          if ( v15 != 0 && *v15 != 0 )
          {
            *(v20 + 4) |= 2u;
            v26 = strlen(v15);
            std::string::assign(*(v20 + 4), v15, v26);
          }
          IsFakeClient = CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v10);
          *(v20 + 4) |= 4u;
          *(v20 + 48) = IsFakeClient;
          if ( !CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v10) )
          {
            SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v10);
            *(v20 + 4) |= 8u;
            *(v20 + 5) = SteamID;
          }
          Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v10);
          *(v20 + 4) |= 0x10u;
          *(v20 + 13) = Team;
        }
        ++v10;
      }
      for ( i = 2; i != 4; ++i )
      {
        GlobalTeam = GetGlobalTeam(i);
        if ( GlobalTeam != 0 )
        {
          m_Id = GlobalTeam[1].m_iszPrivateVScripts.u.m_Id;
          if ( m_Id != 0 )
          {
            v30 = &GlobalTeam[1].m_pDummyPhysicsComponent + 6;
            v31 = CGameInfo::mutable_dota(v53);
            if ( i == 2 )
            {
              *(v31 + 4) |= 0x40u;
              *(v31 + 23) = m_Id;
              v49 = CGameInfo::mutable_dota(v53);
              *(v49 + 4) |= 0x100u;
              std::string::assign(*(v49 + 12), v30);
            }
            else
            {
              *(v31 + 4) |= 0x80u;
              *(v31 + 26) = m_Id;
              v32 = CGameInfo::mutable_dota(v53);
              *(v32 + 4) |= 0x200u;
              v33 = v32;
              v34 = strlen(v30);
              std::string::assign(*(v33 + 14), v30, v34);
            }
          }
        }
      }
      v35 = g_pGameRules;
      if ( g_pGameRules != -7568LL && *&g_pGameRules[52].m_szQuestName[72] > 0 )
      {
        v36 = 0;
        v37 = 0;
        do
        {
          v44 = (*&v35[52].m_szQuestName[80] + v36);
          if ( v44 != 0 )
          {
            v45 = v55;
            v54 |= 1u;
            if ( v55 == 0 )
            {
              v45 = operator new(0x78u);
              CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(v45);
              v55 = v45;
            }
            v46 = v45[18];
            v47 = v45[19];
            if ( v46 >= v47 )
            {
              if ( v47 == v45[20] )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v45 + 16), v47 + 1);
              pMema = operator new(0x28u);
              CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent(pMema);
              v38 = v45[18];
              v39 = *(v45 + 8);
              ++v45[19];
              v45[18] = v38 + 1;
              *(v39 + 8 * v38) = pMema;
              v40 = pMema;
            }
            else
            {
              v48 = *(v45 + 8);
              v45[18] = v46 + 1;
              v40 = *(v48 + 8 * v46);
            }
            v41 = *(v40 + 4);
            *(v40 + 24) = *v44 == 0;
            *(v40 + 4) = v41 | 1;
            v42 = v44[1];
            *(v40 + 4) = v41 | 5;
            *(v40 + 8) = v42;
            v43 = v44[2];
            *(v40 + 4) = v41 | 7;
            *(v40 + 7) = v43;
          }
          ++v37;
          v36 += 12;
        }
        while ( *&v35[52].m_szQuestName[72] > v37 );
      }
      (*(this->m_pHLTVServer->_vptr_IBaseInterface + 16))(this->m_pHLTVServer, v53);
      CGameInfo::~CGameInfo(v53);
    }
    else
    {
      Warning(
        "CDOTAHLTVDirector::FinishRecording - not currently recording.  m_szLastReplayFilename = %s\n",
        this->m_szLastReplayFilename);
    }
  }
  else
  {
    Msg("CDOTAHLTVDirector::FinishRecording No HLTVServer.\n");
  }
}


// CDOTAHLTVDirector::UploadReplay  (line 654, @0x00000000025b7740, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyAndAddToTail, CopyConstruct<char*>, Element, GetInt, GetLastMatchID, GetLastMetadataPrivateKey, GetLastReplaySalt, GrowMemory, Purge, PurgeAndDeleteElements, RemoveAll, V_memcpy, V_strlen, V_strncat<long unsigned int>, _Alloc_hider, _M_data, _M_rep, basic_string, empty, memcpy, operator[], size, ~CUtlBuffer, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~basic_string
// calls: Msg, GDOTAGCClientSystem, CDOTAHLTVDirector::DiscardReplay, V_sprintf_safe<260ul>, CDOTAGamerules::NumHumanPlayers, CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass, _V_strncat, CFmtStrN<256, false>::CFmtStrN, CDOTA_CombatLog::SaveCombatLog, strlen, memcpy, CDOTAGCServerSystem::SerializeLastMatchMetadataToString (26 total)
// callers: CDOTAGamerules::CheckUploadReplay
// strings: "CDOTAHLTVDirector::UploadReplay m_szLastReplayFilename = %s\n", "CDOTAHLTVDirector::UploadReplay: Not uploading replay file as replay filename is empty.\n, "CDOTAHLTVDirector::UploadReplay: Not uploading replay as we didn't submit match stats.\n", "replays/%llu.dem", "Renamed replay %s to %s\n", "%llu_%d.dem" (24 total)
void __fastcall CDOTAHLTVDirector::UploadReplay(
        CDOTAHLTVDirector *const this,
        uint32 lobbyLeagueID,
        CSODOTALobby::LobbyType lobbyType)
{
  char *m_szLastReplayFilename; // r12
  double v7; // xmm0_8
  __int64 v8; // r15
  bool v9; // zf
  const char *v10; // rax
  double v11; // xmm0_8
  char *v12; // rax
  char *v13; // r13
  __int64 m_Size; // r12
  char **v15; // rax
  CDOTAGCServerSystem *v16; // rax
  unsigned __int8 (__fastcall *v17)(IBaseFileSystem *, char *, _QWORD, CUtlBuffer *); // r15
  __int64 v18; // r12
  int v19; // ebx
  char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  IHLTVServer *m_pHLTVServer; // rdi
  __int64 v24; // rax
  const char *v25; // rsi
  const char *v26; // rax
  const char *pszExtensionSuffix; // [rsp+8h] [rbp-518h]
  int v28; // [rsp+10h] [rbp-510h]
  uint32 unMetadataPrivateKey; // [rsp+18h] [rbp-508h]
  int v30; // [rsp+1Ch] [rbp-504h]
  std::string strSerialized; // [rsp+20h] [rbp-500h] BYREF
  CUtlStringList vecReplayFiles; // [rsp+30h] [rbp-4F0h] BYREF
  CUtlBuffer bufMetadata; // [rsp+50h] [rbp-4D0h] BYREF
  char szNewFileNameBase[260]; // [rsp+A0h] [rbp-480h] BYREF
  char szNewFileName_0[260]; // [rsp+1B0h] [rbp-370h] BYREF
  CFmtStr strFilename; // [rsp+2C0h] [rbp-260h] BYREF
  char szReplayFile[260]; // [rsp+3D0h] [rbp-150h] BYREF
  unsigned __int64 v38; // [rsp+4E8h] [rbp-38h]

  m_szLastReplayFilename = this->m_szLastReplayFilename;
  v38 = __readfsqword(0x28u);
  *&v7 = Msg("CDOTAHLTVDirector::UploadReplay m_szLastReplayFilename = %s\n", this->m_szLastReplayFilename).m128_u64[0];
  if ( m_szLastReplayFilename == 0 || this->m_szLastReplayFilename[0] == 0 )
  {
    Msg("CDOTAHLTVDirector::UploadReplay: Not uploading replay file as replay filename is empty.\n", v7);
    return;
  }
  if ( *(GDOTAGCClientSystem() + 457) != 2 )
  {
    Msg("CDOTAHLTVDirector::UploadReplay: Not uploading replay as we didn't submit match stats.\n");
    CDOTAHLTVDirector::DiscardReplay(this);
    return;
  }
  v8 = *(GDOTAGCClientSystem() + 231);
  v30 = *(GDOTAGCClientSystem() + 465);
  unMetadataPrivateKey = *(GDOTAGCClientSystem() + 466);
  if ( (*(*engine + 160LL))(engine) == 0 )
  {
    if ( v8 != 0 )
    {
      V_sprintf_safe<260ul>(szReplayFile, "replays/%llu.dem", v8);
      if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 26))(g_pFullFileSystem, m_szLastReplayFilename, szReplayFile, 0) != 0 )
        Msg("Renamed replay %s to %s\n", m_szLastReplayFilename, szReplayFile);
      else
        Warning("Failed to renamed replay %s to %s\n", m_szLastReplayFilename, szReplayFile);
    }
    return;
  }
  if ( lobbyLeagueID == 0
    && lobbyType != CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_COOP_BOT_MATCH
    && CDOTAGamerules::ShouldFillEmptySlotsWithBots(g_pGameRules) )
  {
    Msg("CDOTAHLTVDirector::UploadReplay: Not uploading replay as it contained bots.\n", v22, v21, &g_pGameRules);
    CDOTAHLTVDirector::DiscardReplay(this);
    return;
  }
  if ( CDOTAGamerules::NumHumanPlayers(g_pGameRules) <= 4
    && CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) < 300.0 )
  {
    Msg("CDOTAHLTVDirector::UploadReplay: Not uploading replay as it was a short game with less than five players.\n");
    CDOTAHLTVDirector::DiscardReplay(this);
    return;
  }
  if ( v8 == 0 )
  {
    Msg("CDOTAHLTVDirector::UploadReplay: Not uploading replay file %s as MatchID is zero.\n", m_szLastReplayFilename);
    CDOTAHLTVDirector::DiscardReplay(this);
    return;
  }
  if ( v30 != 0 )
    V_sprintf_safe<260ul>(szNewFileNameBase, "%llu_%d.dem", v8, v30);
  else
    V_sprintf_safe<260ul>(szNewFileNameBase, "%llu.dem", v8);
  pszExtensionSuffix = ".tournament";
  if ( lobbyType != CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_TOURNAMENT )
  {
    pszExtensionSuffix = ".coop";
    if ( lobbyType != CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_COOP_BOT_MATCH )
    {
      if ( lobbyType == CSODOTALobby_LobbyType::CSODOTALobby_LobbyType_PRACTICE )
      {
        v26 = ".practice";
        if ( lobbyLeagueID >= 2 )
          v26 = ".league";
        pszExtensionSuffix = v26;
      }
      else
      {
        v9 = !CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass(g_pDOTAPlayerResource);
        v10 = ".battlepass";
        if ( v9 )
          v10 = "";
        pszExtensionSuffix = v10;
      }
    }
  }
  _V_strncat(szNewFileNameBase, pszExtensionSuffix, 260, 0xFFFFFFFFLL);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 27))(g_pFullFileSystem, "replays/pending_upload", "GAME");
  (*(g_pFullFileSystem->_vptr_IAppSystem + 27))(g_pFullFileSystem, "replays/recent", "GAME");
  vecReplayFiles.m_Size = 0;
  vecReplayFiles.m_Memory.m_pMemory = 0;
  vecReplayFiles.m_Memory.m_nAllocationCount = 0;
  vecReplayFiles.m_Memory.m_nGrowSize = 0;
  V_sprintf_safe<260ul>(szNewFileName_0, "replays/pending_upload/%s", szNewFileNameBase);
  *&v11 = Msg("CDOTAHLTVDirector::UploadReplay renaming replay: %s to: %s\n", m_szLastReplayFilename, szNewFileName_0).m128_u64[0];
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 26))(g_pFullFileSystem, m_szLastReplayFilename, szNewFileName_0, 0, v11) != 0 )
  {
    Msg("Renamed replay %s to %s\n", m_szLastReplayFilename, szNewFileName_0);
  }
  else
  {
    Warning("Failed to renamed replay %s to %s\n", m_szLastReplayFilename, szNewFileName_0);
    m_pHLTVServer = this->m_pHLTVServer;
    if ( m_pHLTVServer != 0 && (*(m_pHLTVServer->_vptr_IBaseInterface + 13))(m_pHLTVServer) != 0 )
    {
      v24 = (*(this->m_pHLTVServer->_vptr_IBaseInterface + 14))(this->m_pHLTVServer);
      v25 = "NULL";
      if ( v24 != 0 )
        v25 = v24;
      Warning("  HLTVServer is currently recording: %s\n", v25);
    }
    else
    {
      Warning("  HLTVServer is not currently recording\n");
    }
  }
  if ( lobbyLeagueID != 0 )
  {
    if ( dota_director_record_combat_log.m_pParent->m_Value.m_nValue > 0 )
    {
LABEL_26:
      CFmtStrN<256,false>::CFmtStrN(&strFilename, "%llu_%d.clog%s", v8, v30, pszExtensionSuffix);
      CFmtStrN<256,false>::CFmtStrN(szReplayFile, "replays/pending_upload/%s", strFilename.m_szBuf);
      CDOTA_CombatLog::SaveCombatLog(g_pDOTACombatLog, &szReplayFile[9]);
      CFmtStrN<256,false>::CFmtStrN(szReplayFile, "pending_upload/%s", strFilename.m_szBuf);
      v28 = strlen(&szReplayFile[9]) + 1;
      v12 = (**g_pMemAlloc)(g_pMemAlloc, v28);
      v13 = v12;
      if ( v28 < 0 )
        __debugbreak();
      memcpy(v12, &szReplayFile[9], v28);
      m_Size = vecReplayFiles.m_Size;
      CUtlMemory<char *,int>::Grow(&vecReplayFiles.m_Memory, 1);
      ++vecReplayFiles.m_Size;
      v15 = &vecReplayFiles.m_Memory.m_pMemory[m_Size];
      if ( v15 != 0 )
        *v15 = v13;
    }
  }
  else if ( dota_director_record_combat_log.m_pParent->m_Value.m_nValue > 1 )
  {
    goto LABEL_26;
  }
  strSerialized._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  v16 = GDOTAGCClientSystem();
  CDOTAGCServerSystem::SerializeLastMatchMetadataToString(v16, &strSerialized, unMetadataPrivateKey);
  if ( *(strSerialized._M_dataplus._M_p - 3) != 0 )
  {
    CFmtStrN<256,false>::CFmtStrN(&strFilename, "%llu_%d.meta%s", v8, v30, ".league");
    CUtlBuffer::CUtlBuffer(&bufMetadata, 0, 0, 0);
    CUtlBuffer::SetExternalBuffer(
      &bufMetadata,
      strSerialized._M_dataplus._M_p,
      *(strSerialized._M_dataplus._M_p - 3),
      *(strSerialized._M_dataplus._M_p - 3),
      0);
    v17 = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 15);
    CFmtStrN<256,false>::CFmtStrN(szReplayFile, "replays/pending_upload/%s", strFilename.m_szBuf);
    if ( v17(&g_pFullFileSystem->IBaseFileSystem, &szReplayFile[9], 0, &bufMetadata) != 0 )
    {
      CFmtStrN<256,false>::CFmtStrN(szReplayFile, "pending_upload/%s", strFilename.m_szBuf);
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::CopyAndAddToTail(
        &vecReplayFiles,
        &szReplayFile[9]);
    }
    else
    {
      Warning("Failed to write Match Metadata file to disk, not uploading!\n");
    }
    if ( (bufMetadata.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&bufMetadata.m_Memory);
  }
  V_sprintf_safe<260ul>(szReplayFile, "pending_upload/%s", szNewFileNameBase);
  CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::CopyAndAddToTail(&vecReplayFiles, szReplayFile);
  CDOTAHLTVDirector::UploadReplayFiles(this, &vecReplayFiles);
  std::string::_Rep::_M_dispose(strSerialized._M_dataplus._M_p - 24, &bufMetadata);
  if ( vecReplayFiles.m_Size > 0 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      ++v19;
      v20 = vecReplayFiles.m_Memory.m_pMemory[v18++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20);
    }
    while ( v19 < vecReplayFiles.m_Size );
  }
  vecReplayFiles.m_Size = 0;
  CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&vecReplayFiles);
}


// CDOTAHLTVDirector::DiscardReplay  (line 848, @0x000000000259bbc0, libserver.so)
// calls: Msg, V_snprintf, Warning, __stack_chk_fail
// callers: CDOTAHLTVDirector::UploadReplay
// strings: "Discarding replay %s\n", "replays/discarded", "replays/discarded/%s", "Renamed replay %s to %s\n", "Failed to renamed replay %s to %s\n"
void __fastcall CDOTAHLTVDirector::DiscardReplay(CDOTAHLTVDirector *const this)
{
  char *m_szLastReplayFilename; // rbx
  double v2; // xmm0_8
  char szNewFileName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-28h]

  v4 = __readfsqword(0x28u);
  m_szLastReplayFilename = this->m_szLastReplayFilename;
  if ( this != -1248LL && this->m_szLastReplayFilename[0] != 0 )
  {
    *&v2 = Msg("Discarding replay %s\n", m_szLastReplayFilename).m128_u64[0];
    (*(g_pFullFileSystem->_vptr_IAppSystem + 27))(g_pFullFileSystem, "replays/discarded", "GAME", v2);
    V_snprintf(szNewFileName, 260, "replays/discarded/%s", m_szLastReplayFilename);
    if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 26))(g_pFullFileSystem, m_szLastReplayFilename, szNewFileName, 0) != 0 )
      Msg("Renamed replay %s to %s\n", m_szLastReplayFilename, szNewFileName);
    else
      Warning("Failed to renamed replay %s to %s\n", m_szLastReplayFilename, szNewFileName);
  }
}


// CDOTAHLTVDirector::UploadReplayFiles  (line 870, @0x00000000025b6ee0, libserver.so)  // inlines: AddToHead, AddToTail, Append, CUtlMemory, CUtlStringBuilder, CUtlVector, CUtlVectorBase, Capacity, Clear, Construct, CopyConstruct<char*>, CopyConstruct<int>, Element, FreeHeap, Get, GetString, GrowMemory, GrowVector, HasError, InsertBefore, IsEmpty, Length, PrepareBuffer, Purge, RemoveAll, SetBytesLeft, SetDirect, ShiftElementsRight, String, V_memmove, memcpy, memmove, operator+=, operator=, operator[], printf, ~CUtlMemory, ~CUtlStringBuilder, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<char*, CUtlMemory<char*, int> >::AddVectorToTail<CUtlMemory<char*, int> >, strlen, CUtlStringBuilder::InternalPrepareBuffer, memcpy, Msg, V_FixSlashes, V_snprintf, fork, chdir, __printf_chk, syscall, puts (23 total)
// callers: CDOTAHLTVDirector::UploadReplay, dota_upload_replay
// strings: "UploadReplayFiles %s\n", "replays", "FCVAR_NEVER_AS_STRING", "%s/%s", "Failed to change directory for replay %s:\n", "  szFullScriptFile = %s\n" (14 total)
bool __fastcall CDOTAHLTVDirector::UploadReplayFiles(
        CDOTAHLTVDirector *const this,
        const CUtlStringList *const vecTargets)
{
  __int64 m_Size; // rbx
  int v3; // eax
  const char **m_pMemory; // rax
  char **v5; // rdx
  const char *v6; // rbx
  size_t v7; // rax
  size_t v8; // r12
  char *v9; // rax
  int sentinel; // edx
  signed __int8 v11; // r15
  __int64 v12; // r12
  int i; // r13d
  char *v14; // rbx
  __int64 m_nLength; // r14
  size_t v16; // rsi
  char *v17; // rax
  size_t v18; // rax
  size_t v19; // r14
  size_t v20; // rsi
  char *v21; // rax
  CUtlStringBuilder *p_strWinArgs; // rsi
  double v23; // xmm0_8
  char *m_pszString; // r8
  __pid_t v25; // eax
  __pid_t v26; // r13d
  int v27; // r13d
  CUtlStringBuilder *v28; // rdx
  bool v29; // bl
  __int64 v31; // rbx
  int v32; // eax
  int *v33; // rax
  char *m_pchString; // rax
  char *v35; // rax
  int v36; // r13d
  int v37; // r14d
  char **v38; // rax
  CUtlStringBuilder *v39; // rdx
  CUtlStringBuilder *v40; // rcx
  int v42; // [rsp+28h] [rbp-298h]
  __int64 v43; // [rsp+28h] [rbp-298h]
  CUtlVector<char*,CUtlMemory<char*,int> > vecArgs; // [rsp+30h] [rbp-290h] BYREF
  CUtlStringBuilder strWinArgs; // [rsp+50h] [rbp-270h] BYREF
  char szReplaysPath[272]; // [rsp+70h] [rbp-250h] BYREF
  char szFullScriptFile[264]; // [rsp+180h] [rbp-140h] BYREF
  unsigned __int64 v48; // [rsp+288h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  vecArgs.m_Size = 0;
  vecArgs.m_Memory.m_pMemory = 0;
  vecArgs.m_Memory.m_nAllocationCount = 0;
  vecArgs.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<char *,CUtlMemory<char *,int>>::AddVectorToTail<CUtlMemory<char *,int>>(&vecArgs, vecTargets);
  m_Size = vecArgs.m_Size;
  v3 = vecArgs.m_Size;
  if ( vecArgs.m_Size == vecArgs.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<char *,int>::Grow(&vecArgs.m_Memory, 1);
    v3 = vecArgs.m_Size;
  }
  vecArgs.m_Size = v3 + 1;
  m_pMemory = vecArgs.m_Memory.m_pMemory;
  v5 = &vecArgs.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    *v5 = 0;
    m_pMemory = vecArgs.m_Memory.m_pMemory;
  }
  strWinArgs.m_data.Stack.m_szString[0] = 0;
  strWinArgs.m_data.Heap.sentinel = 19;
  v6 = *m_pMemory;
  if ( *m_pMemory != 0 && (v7 = strlen(*m_pMemory), v8 = v7, v7 != 0) )
  {
    if ( v7 <= 0x13 )
      v9 = CUtlStringBuilder::Data::SetLength(&strWinArgs.m_data, v7);
    else
      v9 = CUtlStringBuilder::InternalPrepareBuffer(&strWinArgs, v7, 0, v7);
    if ( v9 != 0 )
      memcpy(v9, v6, v8);
    sentinel = strWinArgs.m_data.Heap.sentinel;
    v11 = strWinArgs.m_data.Stack.m_szString[19];
  }
  else
  {
    strWinArgs.m_data.Heap.m_pchString = 0;
    v11 = 19;
    sentinel = 19;
  }
  if ( vecArgs.m_Size > 1 )
  {
    v12 = 1;
    for ( i = 1; vecArgs.m_Size > i; ++i )
    {
      v11 = sentinel;
      v14 = vecArgs.m_Memory.m_pMemory[v12];
      if ( v14 == 0 )
        goto LABEL_14;
      if ( (sentinel & 0x80u) != 0 )
      {
        m_nLength = strWinArgs.m_data.Heap.m_nLength;
        if ( strWinArgs.m_data.Heap.m_nLength == 0 )
        {
LABEL_55:
          CUtlStringBuilder::SetDirect(&strWinArgs, " ", 1u);
          goto LABEL_22;
        }
        v16 = strWinArgs.m_data.Heap.m_nLength + 1LL;
        if ( strWinArgs.m_data.Heap.m_nCapacity < v16 )
        {
          if ( (sentinel & 0x40) != 0 )
          {
LABEL_23:
            if ( *v14 == 0 )
              goto LABEL_14;
            v42 = sentinel;
            v18 = strlen(v14);
            sentinel = v42;
            v19 = v18;
            if ( v18 == 0 )
              goto LABEL_14;
            if ( (v42 & 0x80u) != 0 )
            {
              if ( strWinArgs.m_data.Heap.m_nLength == 0 )
              {
                if ( (v42 & 0x40) != 0 )
                  goto LABEL_14;
                m_pchString = strWinArgs.m_data.Heap.m_pchString;
                if ( strWinArgs.m_data.Heap.m_pchString == 0 )
                  m_pchString = "";
                if ( v14 == m_pchString )
                  goto LABEL_14;
                if ( v19 <= strWinArgs.m_data.Heap.m_nCapacity )
                  goto LABEL_101;
                goto LABEL_76;
              }
              v20 = v18 + strWinArgs.m_data.Heap.m_nLength;
              v43 = strWinArgs.m_data.Heap.m_nLength;
              if ( v20 <= strWinArgs.m_data.Heap.m_nCapacity )
                goto LABEL_57;
              if ( (sentinel & 0x40) != 0 )
                goto LABEL_14;
LABEL_28:
              v21 = CUtlStringBuilder::InternalPrepareBuffer(&strWinArgs, v20, 1, v20);
LABEL_29:
              if ( v21 != 0 )
                memcpy(&v21[v43], v14, v19);
            }
            else
            {
              if ( v42 != 19 )
              {
                v20 = v18 + 19 - v42;
                v43 = 19 - v42;
                if ( v20 > 0x13 )
                  goto LABEL_28;
LABEL_57:
                v21 = CUtlStringBuilder::Data::SetLength(&strWinArgs.m_data, v20);
                goto LABEL_29;
              }
              if ( v18 <= 0x13 )
              {
LABEL_101:
                v35 = CUtlStringBuilder::Data::SetLength(&strWinArgs.m_data, v19);
                goto LABEL_77;
              }
LABEL_76:
              v35 = CUtlStringBuilder::InternalPrepareBuffer(&strWinArgs, v19, 0, v19);
LABEL_77:
              if ( v35 != 0 )
              {
                memcpy(v35, v14, v19);
                sentinel = strWinArgs.m_data.Heap.sentinel;
                v11 = strWinArgs.m_data.Stack.m_szString[19];
                goto LABEL_14;
              }
            }
            sentinel = strWinArgs.m_data.Heap.sentinel;
            v11 = strWinArgs.m_data.Stack.m_szString[19];
            goto LABEL_14;
          }
LABEL_19:
          v17 = CUtlStringBuilder::InternalPrepareBuffer(&strWinArgs, v16, 1, v16);
          goto LABEL_20;
        }
      }
      else
      {
        if ( sentinel == 19 )
          goto LABEL_55;
        m_nLength = 19 - sentinel;
        v16 = m_nLength + 1;
        if ( (m_nLength + 1) > 0x13 )
          goto LABEL_19;
      }
      v17 = CUtlStringBuilder::Data::SetLength(&strWinArgs.m_data, v16);
LABEL_20:
      if ( v17 != 0 )
        v17[m_nLength] = 32;
LABEL_22:
      sentinel = strWinArgs.m_data.Heap.sentinel;
      v14 = vecArgs.m_Memory.m_pMemory[v12];
      v11 = strWinArgs.m_data.Stack.m_szString[19];
      if ( v14 != 0 )
        goto LABEL_23;
LABEL_14:
      ++v12;
    }
  }
  p_strWinArgs = &strWinArgs;
  if ( v11 < 0 )
  {
    p_strWinArgs = "";
    if ( strWinArgs.m_data.Heap.m_pchString != 0 )
      p_strWinArgs = strWinArgs.m_data.Heap.m_pchString;
  }
  *&v23 = Msg("UploadReplayFiles %s\n", p_strWinArgs).m128_u64[0];
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(
         g_pFullFileSystem,
         "replays",
         "GAME",
         szReplaysPath,
         260,
         0,
         v23,
         0) == 0 )
  {
    Warning("Failed to convert replay path to full path. szReplaysPath = %s\n", szReplaysPath);
    v29 = 0;
    goto LABEL_44;
  }
  V_FixSlashes(szReplaysPath, 47);
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (dota_replay_upload_script.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( dota_replay_upload_script.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = dota_replay_upload_script.m_pParent->m_Value.m_pszString;
  }
  V_snprintf(szFullScriptFile, 260, "%s/%s", szReplaysPath, m_pszString);
  V_FixSlashes(szFullScriptFile, 47);
  v25 = fork();
  v26 = v25;
  if ( v25 != 0 )
  {
    Msg("UploadReplayFiles: Forked, pID = %d\n", v25);
    v31 = this->m_replayUploadChildren.m_Size;
    v32 = this->m_replayUploadChildren.m_Size;
    if ( v31 == this->m_replayUploadChildren.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&this->m_replayUploadChildren.m_Memory, 1);
      v32 = this->m_replayUploadChildren.m_Size;
    }
    this->m_replayUploadChildren.m_Size = v32 + 1;
    v33 = &this->m_replayUploadChildren.m_Memory.m_pMemory[v31];
    if ( v33 != 0 )
      *v33 = v26;
    goto LABEL_43;
  }
  (*(*g_pNetworkSystem + 568LL))(g_pNetworkSystem);
  v27 = chdir(szReplaysPath);
  if ( v27 != 0 )
  {
    v28 = &strWinArgs;
    if ( strWinArgs.m_data.Stack.m_szString[19] < 0 )
    {
      v28 = "";
      if ( strWinArgs.m_data.Heap.m_pchString != 0 )
        v28 = strWinArgs.m_data.Heap.m_pchString;
    }
    __printf_chk(1, "Failed to change directory for replay %s:\n", v28);
  }
  else
  {
    __printf_chk(1, "Forked child changed directory to %s\n", szReplaysPath);
    v36 = vecArgs.m_Size;
    v37 = vecArgs.m_Size + 1;
    if ( vecArgs.m_Size + 1 > vecArgs.m_Memory.m_nAllocationCount )
      CUtlMemory<char *,int>::Grow(&vecArgs.m_Memory, v37 - vecArgs.m_Memory.m_nAllocationCount);
    vecArgs.m_Size = v37;
    if ( v36 > 0 )
      memmove(vecArgs.m_Memory.m_pMemory + 1, vecArgs.m_Memory.m_pMemory, 8LL * v36);
    v38 = vecArgs.m_Memory.m_pMemory;
    if ( vecArgs.m_Memory.m_pMemory != 0 )
    {
      *vecArgs.m_Memory.m_pMemory = szFullScriptFile;
      v38 = vecArgs.m_Memory.m_pMemory;
    }
    v27 = execv(*v38, v38);
    if ( v27 == 0 )
    {
      v40 = &strWinArgs;
      if ( strWinArgs.m_data.Stack.m_szString[19] < 0 )
      {
        v40 = "";
        if ( strWinArgs.m_data.Heap.m_pchString != 0 )
          v40 = strWinArgs.m_data.Heap.m_pchString;
      }
      __printf_chk(1, "Executed shell script %s args: %s path:%s\n", szFullScriptFile, v40, szReplaysPath);
      goto LABEL_42;
    }
    v39 = &strWinArgs;
    if ( strWinArgs.m_data.Stack.m_szString[19] < 0 )
    {
      v39 = "";
      if ( strWinArgs.m_data.Heap.m_pchString != 0 )
        v39 = strWinArgs.m_data.Heap.m_pchString;
    }
    __printf_chk(1, "Failed to execute replay upload script for replay %s:\n", v39);
  }
  __printf_chk(1, "  szFullScriptFile = %s\n", szFullScriptFile);
  __printf_chk(1, "  szReplaysPath = %s\n", szReplaysPath);
  __printf_chk(1, "  system result = %d\n", v27);
LABEL_42:
  syscall(60, 0);
  puts("Forked child just called SYS_exit.");
LABEL_43:
  v29 = 1;
LABEL_44:
  if ( strWinArgs.m_data.Stack.m_szString[19] < 0 && strWinArgs.m_data.Heap.m_pchString != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  vecArgs.m_Size = 0;
  if ( (vecArgs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&vecArgs.m_Memory);
    if ( (vecArgs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&vecArgs.m_Memory);
  }
  return v29;
}


// CDOTAHLTVDirector::FrameUpdatePostEntityThink  (line 975, @0x00000000025c03b0, libserver.so)  // inlines: Invalidate, IsElapsed, NetworkStateChanged, Set, operator=<float>, operator[]
// calls: CHLTVDirector::FrameUpdatePostEntityThink, waitpid, CUtlVectorBase<int, CUtlMemory<int, int> >::FastRemove, CountdownTimer::Now
void __fastcall CDOTAHLTVDirector::FrameUpdatePostEntityThink(
        CDOTAHLTVDirector *const this,
        const EventServerPostEntityThink_t *const msg)
{
  IHLTVServer *m_pHLTVServer; // rdi
  int i; // ebx

  CHLTVDirector::FrameUpdatePostEntityThink(this, msg);
  m_pHLTVServer = this->m_pHLTVServer;
  if ( m_pHLTVServer != 0
    && (*(m_pHLTVServer->_vptr_IBaseInterface + 13))(m_pHLTVServer) == 0
    && this->m_startReplayTimer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_startReplayTimer) >= this->m_startReplayTimer.m_timestamp.m_Value )
  {
    (*(this->m_pHLTVServer->_vptr_IBaseInterface + 15))(this->m_pHLTVServer);
    if ( this->m_startReplayTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_startReplayTimer._vptr_CountdownTimer + 2))(
        &this->m_startReplayTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0);
      this->m_startReplayTimer.m_timestamp.m_Value = -1.0;
    }
  }
  for ( i = 0;
        this->m_replayUploadChildren.m_Size > i;
        CUtlVectorBase<int,CUtlMemory<int,int>>::FastRemove(&this->m_replayUploadChildren, i) )
  {
    while ( waitpid(this->m_replayUploadChildren.m_Memory.m_pMemory[i], 0, 1) == 0 )
    {
      if ( this->m_replayUploadChildren.m_Size <= ++i )
        return;
    }
  }
}


// dota_upload_replay  (line 999, @0x00000000025b7fa0, libserver.so)  // inlines: AddToTail, ArgV, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyAndAddToTail, CopyConstruct<char*>, Element, GrowMemory, Purge, PurgeAndDeleteElements, RemoveAll, V_memcpy, V_strlen, memcpy, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: strlen, memcpy, CUtlMemory<char*, int>::Grow, CDOTAHLTVDirector::UploadReplayFiles, CUtlMemory<char*, int>::Purge, ConMsg(char const*,...), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Usage: dota_upload_replay <filename1> [<filename2> ...] (file is relative from replays)\n
// globals: s_HLTVDirector
void __fastcall dota_upload_replay(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // eax
  __int64 v3; // r12
  size_t v4; // r13
  char *v5; // rax
  char *v6; // r14
  __int64 m_Size; // rbx
  int v8; // eax
  char **v9; // rax
  bool v10; // zf
  const char **v11; // rax
  const char *v12; // rbx
  __int64 v13; // r12
  int j; // ebx
  char *v15; // rsi
  const char **m_ppArgv; // [rsp+18h] [rbp-68h]
  int v18; // [rsp+28h] [rbp-58h]
  int i; // [rsp+2Ch] [rbp-54h]
  CUtlStringList vecReplayFiles; // [rsp+30h] [rbp-50h] BYREF

  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc <= 1 )
  {
    ConMsg("Usage: dota_upload_replay <filename1> [<filename2> ...] (file is relative from replays)\n");
  }
  else
  {
    vecReplayFiles.m_Size = 0;
    v3 = 1;
    vecReplayFiles.m_Memory.m_pMemory = 0;
    vecReplayFiles.m_Memory.m_nAllocationCount = 0;
    vecReplayFiles.m_Memory.m_nGrowSize = 0;
    i = 1;
    m_ppArgv = args->m_ppArgv;
    do
    {
      v10 = m_nArgc == 0;
      v11 = 0;
      if ( !v10 )
        v11 = m_ppArgv;
      v12 = v11[v3];
      if ( v12 != 0 )
      {
        v18 = strlen(v11[v3]) + 1;
        v4 = v18;
      }
      else
      {
        v4 = 1;
        v18 = 1;
      }
      v5 = (**g_pMemAlloc)(g_pMemAlloc, v4);
      v6 = v5;
      if ( v18 < 0 )
        __debugbreak();
      memcpy(v5, v12, v4);
      m_Size = vecReplayFiles.m_Size;
      v8 = vecReplayFiles.m_Size;
      if ( vecReplayFiles.m_Size == vecReplayFiles.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char *,int>::Grow(&vecReplayFiles.m_Memory, 1);
        v8 = vecReplayFiles.m_Size;
      }
      vecReplayFiles.m_Size = v8 + 1;
      v9 = &vecReplayFiles.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        *v9 = v6;
      ++v3;
      ++i;
      m_nArgc = args->m_nArgc;
    }
    while ( args->m_nArgc > i );
    CDOTAHLTVDirector::UploadReplayFiles(&s_HLTVDirector, &vecReplayFiles);
    v13 = 0;
    for ( j = 0; j < vecReplayFiles.m_Size; ++j )
    {
      v15 = vecReplayFiles.m_Memory.m_pMemory[v13++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v15);
    }
    vecReplayFiles.m_Size = 0;
    if ( (vecReplayFiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&vecReplayFiles.m_Memory);
      if ( (vecReplayFiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&vecReplayFiles.m_Memory);
    }
  }
}


