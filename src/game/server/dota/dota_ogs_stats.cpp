
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_OGS::CDOTA_OGS  (line 74, @0x00000000025fa6e0, libserver.so)  // inlines: CCallback, CCallbackBase, CCallbackImpl, Register, SetGameserverFlag, ~CCallback, ~CCallbackImpl
// calls: SteamAPI_RegisterCallback, SteamAPI_UnregisterCallback, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// globals: CDOTA_OGS::Steam_OnGSClientKick(GSClientKick_t *), CDOTA_OGS::Steam_OnGSClientDeny(GSClientDeny_t *)
void __fastcall CDOTA_OGS::CDOTA_OGS(CDOTA_OGS *const this)
{
  this->m_CallbackGSClientKick._vptr_CCallbackBase = off_4169350;
  this->m_CallbackGSClientKick.m_iCallback = 0;
  this->m_CallbackGSClientKick.m_Func.__delta = 0;
  this->m_CallbackGSClientKick.m_nCallbackFlags = 2;
  this->m_CallbackGSClientKick.m_pObj = this;
  this->m_CallbackGSClientKick.m_Func.__pfn = CDOTA_OGS::Steam_OnGSClientKick;
  SteamAPI_RegisterCallback(this, 203);
  this->m_CallbackGSClientDeny.m_nCallbackFlags = 2;
  this->m_CallbackGSClientDeny._vptr_CCallbackBase = off_4169390;
  this->m_CallbackGSClientDeny.m_pObj = this;
  this->m_CallbackGSClientDeny.m_iCallback = 0;
  this->m_CallbackGSClientDeny.m_Func.__delta = 0;
  this->m_CallbackGSClientDeny.m_Func.__pfn = CDOTA_OGS::Steam_OnGSClientDeny;
  SteamAPI_RegisterCallback(&this->m_CallbackGSClientDeny, 202);
}


// CDOTA_OGS::IsMatchLobby  (line 85, @0x00000000025fa7d0, libserver.so)  // inlines: GetLobby
// calls: GDOTAGCClientSystem, CDOTALobby::IsMatchmadeLobbyType
// callers: CDOTA_OGS::ShouldLog, CDOTA_OGS::LogCMHeroDraft, CDOTA_OGS::LogBuildingDeath, CDOTA_OGS::LogMatchSnapshot
bool __cdecl CDOTA_OGS::IsMatchLobby()
{
  const CDOTALobby *v0; // rdi

  return GDOTAGCClientSystem() != 0
      && (v0 = *(GDOTAGCClientSystem() + 260)) != 0
      && CDOTALobby::IsMatchmadeLobbyType(v0);
}


// CDOTA_OGS::ShouldLog  (line 96, @0x00000000025fa800, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTA_OGS::IsMatchLobby
bool __cdecl CDOTA_OGS::ShouldLog()
{
  return g_pGameRules != 0 && CDOTA_OGS::IsMatchLobby();
}


// CDOTA_OGS::ShouldLog  (line 110, @0x00000000025fa830, libserver.so)  // inlines: DOTAGameRules, ShouldLog
// calls: CDOTA_PlayerResource::IsBroadcaster, CDOTA_PlayerResource::IsFakeClient, CDOTA_OGS::IsMatchLobby
// callers: CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogHeroSelection, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroDeath, CDOTA_OGS::LogHeroLevelUp
bool __fastcall CDOTA_OGS::ShouldLog(int iPlayerID)
{
  return !CDOTA_PlayerResource::IsBroadcaster(g_pDOTAPlayerResource, iPlayerID)
      && !CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, iPlayerID)
      && g_pGameRules != 0
      && CDOTA_OGS::IsMatchLobby();
}


// CDOTA_OGS::LogItemEvent  (line 124, @0x00000000025fa890, libserver.so)  // inlines: DOTAGameRules, GetBool, GetGameMode, GetInt, SetBool
// calls: CDOTA_OGS::ShouldLog, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetLevel, CDOTAGamerules::GetDOTATime, KeyValues::SetFloat, CDOTA_PlayerResource::GetNumConsumablesPurchased, CDOTA_PlayerResource::GetNumItemsPurchased, CDOTA_PlayerResource::GetTimeOfLastDeath (23 total)
// callers: CDOTA_BaseNPC::SellItem, CDOTA_BaseNPC::DisassembleItem, CDOTA_BaseNPC::AttemptToPurchaseItem
// strings: "DOTAItemEvents", "EventIndex", "ItemEventID", "TimeSinceLastDeath", "TimeOfLastConsumablePurchase", "CurrentGold" (8 total)
// globals: CDOTA_OGS::m_iEventCount, g_dota_ogs_itemevents, g_DOTASteamWorksGameStatsServer
void __fastcall CDOTA_OGS::LogItemEvent(
        DOTA_OGS_ItemEvent iEvent,
        DOTAAbilityData_t *pItemData,
        CDOTA_BaseNPC *pOwnerNPC)
{
  __int64 v3; // r13
  int v5; // r12d
  KeyValues *v6; // rbx
  int v7; // edx
  int Team; // eax
  int v9; // edx
  int Level; // eax
  int v11; // edx
  float v12; // xmm1_4
  int NumConsumablesPurchased; // eax
  int NumItemsPurchased; // eax
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  int Gold; // eax
  int GoldLostToDeath; // eax
  int GoldSpentOnItems; // eax
  int GoldSpentOnConsumables; // eax
  int GoldSpentOnBuybacks; // eax
  const char *SelectedHeroName; // rax
  int v24; // eax
  int v25; // eax

  v3 = iEvent;
  if ( dota_sv_ogs_itemevents.m_pParent->m_Value.m_nValue != 0 && pOwnerNPC != 0 )
  {
    v5 = (*(pOwnerNPC->_vptr_IHandleEntity + 414))(pOwnerNPC);
    if ( CDOTA_OGS::ShouldLog(v5) )
    {
      v6 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v6, "DOTAItemEvents");
      v7 = CDOTA_OGS::m_iEventCount++;
      KeyValues::SetInt(v6, "EventIndex", v7);
      KeyValues::SetString(v6, "ItemEventID", g_dota_ogs_itemevents[v3]);
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5);
      v9 = 255;
      if ( Team <= 255 )
      {
        v24 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5);
        v9 = 0;
        if ( v24 >= 0 )
          v9 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5);
      }
      KeyValues::SetInt(v6, "Team", v9);
      Level = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, v5);
      v11 = 255;
      if ( Level <= 255 )
      {
        v25 = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, v5);
        v11 = 0;
        if ( v25 >= 0 )
          v11 = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, v5);
      }
      KeyValues::SetInt(v6, "HeroLevel", v11);
      CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      KeyValues::SetFloat(v6, "GameTime", v12);
      NumConsumablesPurchased = CDOTA_PlayerResource::GetNumConsumablesPurchased(g_pDOTAPlayerResource, v5);
      KeyValues::SetInt(v6, "NumConsumablesPurchased", NumConsumablesPurchased);
      NumItemsPurchased = CDOTA_PlayerResource::GetNumItemsPurchased(g_pDOTAPlayerResource, v5);
      KeyValues::SetInt(v6, "NumItemsPurchased", NumItemsPurchased);
      CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      CDOTA_PlayerResource::GetTimeOfLastDeath(g_pDOTAPlayerResource, v5);
      KeyValues::SetFloat(v6, "TimeSinceLastDeath", v15);
      CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      CDOTA_PlayerResource::GetTimeOfLastItemPurchase(g_pDOTAPlayerResource, v5);
      KeyValues::SetFloat(v6, "TimeOfLastItemPurchase", v16);
      CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      CDOTA_PlayerResource::GetTimeOfLastConsumablePurchase(g_pDOTAPlayerResource, v5);
      KeyValues::SetFloat(v6, "TimeOfLastConsumablePurchase", v17);
      Gold = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v5);
      KeyValues::SetInt(v6, "CurrentGold", Gold);
      GoldLostToDeath = CDOTA_PlayerResource::GetGoldLostToDeath(g_pDOTAPlayerResource, v5);
      KeyValues::SetInt(v6, "GoldLostToDeath", GoldLostToDeath);
      GoldSpentOnItems = CDOTA_PlayerResource::GetGoldSpentOnItems(g_pDOTAPlayerResource, v5);
      KeyValues::SetInt(v6, "GoldSpentOnItems", GoldSpentOnItems);
      GoldSpentOnConsumables = CDOTA_PlayerResource::GetGoldSpentOnConsumables(g_pDOTAPlayerResource, v5);
      KeyValues::SetInt(v6, "GoldSpentOnConsumables", GoldSpentOnConsumables);
      GoldSpentOnBuybacks = CDOTA_PlayerResource::GetGoldSpentOnBuybacks(g_pDOTAPlayerResource, v5);
      KeyValues::SetInt(v6, "GoldSpentOnBuybacks", GoldSpentOnBuybacks);
      KeyValues::SetInt(v6, "ItemCost", pItemData->m_iItemCost);
      KeyValues::SetString(v6, "GameModeID", g_DOTA_GameMode[*&g_pGameRules[6].m_szQuestName[68]]);
      KeyValues::SetString(v6, "ItemID", pItemData->m_pszAbilityName);
      SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v5);
      KeyValues::SetString(v6, "UnitID", SelectedHeroName);
      KeyValues::SetInt(v6, "IsConsumable", pItemData->m_ItemQuality == ItemQuality_t::DOTA_ITEM_QUALITY_CONSUMABLE);
      CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v6, v5, 1);
    }
  }
}


// CDOTA_OGS::LogHeroSelection  (line 166, @0x00000000025fac60, libserver.so)  // inlines: DOTAGameRules, GetGameMode, HeroPickState_Get, SetBool, State_Get
// calls: CDOTA_OGS::ShouldLog, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetSelectedHeroName, KeyValues::SetString, KeyValues::SetFloat, CSteamWorksGameStatsUploader::AddStatsForUpload, KeyValues::operator delete, _Unwind_Resume
// callers: CDOTAGamerules::ClientMsg_SwapAccept, CDOTAGamerules::MakeRandomHeroSelection, CDOTAPlayer::HandleHeroSelection
// strings: "DOTAHeroSelection", "EventIndex", "GameModeID", "HeroPickStateID", "GameRulesStateID", "IsRandom" (7 total)
// globals: CDOTA_OGS::m_iEventCount, g_DOTASteamWorksGameStatsServer
void __fastcall CDOTA_OGS::LogHeroSelection(int iPlayerID, bool bIsRandom, bool bIsSwap)
{
  int v6; // eax
  KeyValues *v7; // rbx
  int v8; // edx
  int Team; // eax
  int v10; // edx
  const char *SelectedHeroName; // rax
  float v12; // xmm1_4
  int v13; // eax

  if ( CDOTA_OGS::ShouldLog(iPlayerID) )
  {
    v6 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v6 != 2 && v6 != 8 )
    {
      v7 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v7, "DOTAHeroSelection");
      v8 = CDOTA_OGS::m_iEventCount++;
      KeyValues::SetInt(v7, "EventIndex", v8);
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
      v10 = 255;
      if ( Team <= 255 )
      {
        v13 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
        v10 = 0;
        if ( v13 >= 0 )
          v10 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
      }
      KeyValues::SetInt(v7, "Team", v10);
      SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, iPlayerID);
      KeyValues::SetString(v7, "UnitID", SelectedHeroName);
      KeyValues::SetString(v7, "GameModeID", g_DOTA_GameMode[*&g_pGameRules[6].m_szQuestName[68]]);
      KeyValues::SetString(v7, "HeroPickStateID", g_DOTA_HeroPickState[*&g_pGameRules[6].m_szQuestName[32]]);
      KeyValues::SetString(v7, "GameRulesStateID", g_DOTA_GameRulesState[*&g_pGameRules[6].m_szQuestName[28]]);
      KeyValues::SetFloat(v7, "RemainingTime", v12);
      KeyValues::SetInt(v7, "IsRandom", bIsRandom);
      KeyValues::SetInt(v7, "IsSwap", bIsSwap);
      CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v7, iPlayerID, 1);
    }
  }
}


// CDOTA_OGS::LogHeroResults  (line 196, @0x00000000025fae80, libserver.so)  // inlines: CSteamID, SetFromUint64
// calls: CDOTA_OGS::ShouldLog, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_PlayerResource::GetRank, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetSelectedHeroName, KeyValues::SetString, CDOTA_PlayerResource::GetKills, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetAssists, CDOTA_PlayerResource::GetLastHits (31 total)
// callers: CDOTAGamerules::State_Enter_POST_GAME
// strings: "DOTAHeroResults", "EventIndex", "GoldEarned", "XPEarned", "PlayerDamageScaled", "TowerDamageScaled" (12 total)
// globals: CDOTA_OGS::m_iEventCount, g_DOTASteamWorksGameStatsServer
void __fastcall CDOTA_OGS::LogHeroResults(int iPlayerID)
{
  KeyValues *v2; // r12
  int v3; // edx
  int Rank; // eax
  int Team; // eax
  int v6; // edx
  const char *SelectedHeroName; // rax
  int Kills; // eax
  int v9; // edx
  int Deaths; // eax
  int v11; // edx
  int Assists; // eax
  int v13; // edx
  int LastHits; // eax
  int Denies; // eax
  int TotalEarnedGold; // eax
  int TotalEarnedXP; // eax
  int Level; // eax
  int v19; // edx
  int ScaledPlayerDamage; // eax
  int ScaledTowerDamage; // eax
  int ScaledHealing; // eax
  int RawPlayerDamage; // eax
  int RawTowerDamage; // eax
  int RawHealing; // eax
  DOTALeaverStatus_t LeaverStatus; // eax
  int TimeLastSeen; // eax
  uint64 SteamID; // r13
  CDOTAGCServerSystem *v29; // rax
  uint64 PartyIDForLobbyMember; // rdx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  CSteamID v36; // [rsp+0h] [rbp-30h] BYREF

  if ( CDOTA_OGS::ShouldLog(iPlayerID) )
  {
    v2 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v2, "DOTAHeroResults");
    v3 = CDOTA_OGS::m_iEventCount++;
    KeyValues::SetInt(v2, "EventIndex", v3);
    Rank = CDOTA_PlayerResource::GetRank(g_pDOTAPlayerResource, iPlayerID, 0);
    KeyValues::SetInt(v2, "Rank", Rank);
    Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
    v6 = 255;
    if ( Team <= 255 )
    {
      v31 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
      v6 = 0;
      if ( v31 >= 0 )
        v6 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(v2, "Team", v6);
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetString(v2, "UnitID", SelectedHeroName);
    Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, iPlayerID);
    v9 = 0x7FFF;
    if ( Kills <= 0x7FFF )
    {
      v35 = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, iPlayerID);
      v9 = -32768;
      if ( v35 >= -32768 )
        v9 = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(v2, "Kills", v9);
    Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, iPlayerID);
    v11 = 0x7FFF;
    if ( Deaths <= 0x7FFF )
    {
      v34 = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, iPlayerID);
      v11 = -32768;
      if ( v34 >= -32768 )
        v11 = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(v2, "Deaths", v11);
    Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, iPlayerID);
    v13 = 0x7FFF;
    if ( Assists <= 0x7FFF )
    {
      v33 = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, iPlayerID);
      v13 = -32768;
      if ( v33 >= -32768 )
        v13 = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(v2, "Assists", v13);
    LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "LastHits", LastHits);
    Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "Denies", Denies);
    TotalEarnedGold = CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "GoldEarned", TotalEarnedGold);
    TotalEarnedXP = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "XPEarned", TotalEarnedXP);
    Level = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, iPlayerID);
    v19 = 255;
    if ( Level <= 255 )
    {
      v32 = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, iPlayerID);
      v19 = 0;
      if ( v32 >= 0 )
        v19 = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(v2, "HeroLevel", v19);
    ScaledPlayerDamage = CDOTA_PlayerResource::GetScaledPlayerDamage(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "PlayerDamageScaled", ScaledPlayerDamage);
    ScaledTowerDamage = CDOTA_PlayerResource::GetScaledTowerDamage(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "TowerDamageScaled", ScaledTowerDamage);
    ScaledHealing = CDOTA_PlayerResource::GetScaledHealing(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "HealingScaled", ScaledHealing);
    RawPlayerDamage = CDOTA_PlayerResource::GetRawPlayerDamage(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "PlayerDamageRaw", RawPlayerDamage);
    RawTowerDamage = CDOTA_PlayerResource::GetRawTowerDamage(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "TowerDamageRaw", RawTowerDamage);
    RawHealing = CDOTA_PlayerResource::GetRawHealing(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "HealingRaw", RawHealing);
    LeaverStatus = CDOTA_PlayerResource::GetLeaverStatus(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetString(v2, "LeaverStatusID", g_DOTA_LeaverStatus[LeaverStatus]);
    TimeLastSeen = CDOTA_PlayerResource::GetTimeLastSeen(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(v2, "TimeLastSeen", TimeLastSeen);
    SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, iPlayerID);
    if ( GDOTAGCClientSystem() != 0 )
    {
      v36.m_steamid.m_comp = SteamID;
      v29 = GDOTAGCClientSystem();
      PartyIDForLobbyMember = CDOTAGCServerSystem::GetPartyIDForLobbyMember(v29, &v36);
    }
    else
    {
      PartyIDForLobbyMember = 0;
    }
    KeyValues::SetUint64(v2, "PartyID", PartyIDForLobbyMember);
    CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v2, iPlayerID, 1);
  }
}


// CDOTA_OGS::LogHeroDeath  (line 235, @0x00000000025fb2e0, libserver.so)  // inlines: CEntityHandle, Get, GetAbilityName, GetAssignedHero, GetAttacker, GetEntryIndex, GetHandleEntity, GetInflictor, GetInstance, GetSerialNumber, GetStreak, GetUnitName, IndexToIdentity, Init, LookupEntity, SetBool, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, entindex, operator CBaseEntity*
// calls: CDOTA_OGS::ShouldLog, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CBaseEntity::GetAbsOrigin, KeyValues::SetFloat, CDOTAGamerules::GetDOTATime, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetStreak, CDOTA_PlayerResource::GetTowerDamageTaken, CDOTA_PlayerResource::GetCreepDamageTaken (24 total)
// callers: CDOTA_BaseNPC_Hero::Event_Killed
// strings: "DOTAHeroDeath", "EventIndex", "WillReincarnate", "StreakAtDeath", "GoldLost", "KillingBlowDamage" (11 total)
// globals: CDOTA_OGS::m_iEventCount, g_DOTASteamWorksGameStatsServer
void __fastcall CDOTA_OGS::LogHeroDeath(
        CDOTAPlayer *pPlayerParam,
        const CTakeDamageInfo *const info,
        int iGoldLostOnDeath,
        bool bReincarnating)
{
  int v6; // r13d
  unsigned __int16 v7; // dx
  int v8; // esi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // r14
  KeyValues *v13; // rbx
  int v14; // edx
  unsigned __int16 v15; // dx
  int v16; // esi
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *v20; // rax
  const char *m_pAsString; // rdx
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  int Deaths; // eax
  int v26; // edx
  int Streak; // eax
  int v28; // edx
  int m_flDamage; // eax
  int v30; // edx
  int TowerDamageTaken; // eax
  int CreepDamageTaken; // eax
  int HeroDamageTaken; // eax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // r12
  int v36; // eax
  CDOTAPlayer *PlayerByPlayerID; // rax
  CEntityIndex v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  uint64 v43; // rax
  int m_Value; // eax
  int v45; // edx
  const char *v46; // rdx
  CEntityInstance *v47; // rax
  _QWORD *v48; // rax
  const char **v49; // rax
  const char *v50; // rdx
  const char *v51; // rax
  int m_hScope_high; // eax
  int v53; // edx
  CEntityInstance *v54; // rdx
  int v55; // eax
  int v56; // eax
  __int64 (__fastcall *iGoldLostOnDeathb)(IVEngineServer2 *, _QWORD, const char *); // [rsp+8h] [rbp-48h]

  if ( pPlayerParam != 0 )
  {
    v6 = (*(pPlayerParam->_vptr_IHandleEntity + 393))(pPlayerParam);
    if ( CDOTA_OGS::ShouldLog(v6) )
    {
      if ( pPlayerParam->m_hAssignedHero.m_Value.m_Index == -1 )
      {
        v7 = 0x7FFF;
        v8 = 0x7FFF;
      }
      else
      {
        v7 = pPlayerParam->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
        v8 = v7;
      }
      v9 = (pPlayerParam->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
      if ( v9 + 2 > 1 )
      {
        v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
        if ( v10 != 0 )
        {
          v11 = &v10[v8 & 0x1FF];
          if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v13 = KeyValues::operator new(0x14u);
              KeyValues::KeyValues(v13, "DOTAHeroDeath");
              v14 = CDOTA_OGS::m_iEventCount++;
              KeyValues::SetInt(v13, "EventIndex", v14);
              if ( pPlayerParam->m_hAssignedHero.m_Value.m_Index == -1 )
              {
                v15 = 0x7FFF;
                v16 = 0x7FFF;
              }
              else
              {
                v15 = pPlayerParam->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                v16 = v15;
              }
              v17 = (pPlayerParam->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
              if ( v17 + 2 > 1
                && (v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9]) != 0
                && (v19 = &v18[v16 & 0x1FF]) != 0
                && v17 == v19->m_EHandle.m_Index
                && (v54 = v19->m_pInstance) != 0
                && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
              {
                v20 = 0;
                if ( (v54[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  v20 = v54;
              }
              else
              {
                v20 = 0;
              }
              m_pAsString = "";
              if ( v20[70].m_iszPrivateVScripts.u.m_Id != 0 )
                m_pAsString = v20[70].m_iszPrivateVScripts.u.m_pAsString;
              KeyValues::SetString(v13, "UnitID", m_pAsString);
              CBaseEntity::GetAbsOrigin(m_pInstance);
              KeyValues::SetFloat(v13, "LocX", v22);
              CBaseEntity::GetAbsOrigin(m_pInstance);
              KeyValues::SetFloat(v13, "LocY", v23);
              CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
              KeyValues::SetFloat(v13, "GameTime", v24);
              Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v6);
              v26 = 0x7FFF;
              if ( Deaths <= 0x7FFF )
              {
                v56 = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v6);
                v26 = -32768;
                if ( v56 >= -32768 )
                  v26 = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v6);
              }
              KeyValues::SetInt(v13, "Deaths", v26);
              KeyValues::SetInt(v13, "WillReincarnate", bReincarnating);
              Streak = CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, m_pInstance[100]._vptr_IHandleEntity);
              v28 = 0x7FFF;
              if ( Streak <= 0x7FFF )
              {
                v55 = CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, m_pInstance[100]._vptr_IHandleEntity);
                v28 = -32768;
                if ( v55 >= -32768 )
                  v28 = CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, m_pInstance[100]._vptr_IHandleEntity);
              }
              KeyValues::SetInt(v13, "StreakAtDeath", v28);
              KeyValues::SetInt(v13, "GoldLost", iGoldLostOnDeath);
              m_flDamage = info->m_flDamage;
              if ( m_flDamage < -32768 )
                m_flDamage = -32768;
              v30 = 0x7FFF;
              if ( m_flDamage <= 0x7FFF )
                v30 = m_flDamage;
              KeyValues::SetInt(v13, "KillingBlowDamage", v30);
              TowerDamageTaken = CDOTA_PlayerResource::GetTowerDamageTaken(g_pDOTAPlayerResource, v6, 0);
              KeyValues::SetInt(v13, "TowerDamageTaken", TowerDamageTaken);
              CreepDamageTaken = CDOTA_PlayerResource::GetCreepDamageTaken(g_pDOTAPlayerResource, v6, 0);
              KeyValues::SetInt(v13, "CreepDamageTaken", CreepDamageTaken);
              HeroDamageTaken = CDOTA_PlayerResource::GetHeroDamageTaken(g_pDOTAPlayerResource, v6, 0);
              KeyValues::SetInt(v13, "HeroDamageTaken", HeroDamageTaken);
              v34 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
              v35 = v34;
              if ( v34 != 0 && v34->m_bIsDOTANPC )
              {
                if ( CDOTA_BaseNPC::IsBot(v34) )
                {
                  KeyValues::deleteThis(v13);
                  return;
                }
                v36 = (*(v35->_vptr_IHandleEntity + 414))(v35);
                if ( v36 >= 0 )
                {
                  PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(v36);
                  if ( PlayerByPlayerID != 0 )
                  {
                    iGoldLostOnDeathb = *(*engine + 384LL);
                    v38.m_Data = CEntityInstance::GetEntityIndex(PlayerByPlayerID).m_Data;
                    v39 = iGoldLostOnDeathb(engine, v38.m_Data, "steamworks_sessionid_client");
                    v43 = V_atoui64(v39, v42, v40, v41);
                    KeyValues::SetUint64(v13, "KillerSessionID", v43);
                  }
                }
                m_Value = 0;
                v45 = 255;
                if ( v35->m_iCurrentLevel.m_Value >= 0 )
                  m_Value = v35->m_iCurrentLevel.m_Value;
                if ( m_Value <= 255 )
                  v45 = m_Value;
                KeyValues::SetInt(v13, "KillerHeroLevel", v45);
                v46 = "";
                if ( v35->m_iszUnitName.m_Value.u.m_Id != 0 )
                  v46 = v35->m_iszUnitName.m_Value.u.m_pAsString;
                KeyValues::SetString(v13, "KillerUnitID", v46);
              }
              v47 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
              if ( v47 != 0 )
              {
                v48 = __dynamic_cast(v47, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
                if ( v48 != 0 )
                {
                  v49 = v48[111];
                  v50 = "<NoAbilityName>";
                  if ( v49 != 0 )
                  {
                    v51 = *v49;
                    if ( v51 != 0 )
                      v50 = v51;
                  }
                  KeyValues::SetString(v13, "AbilityID", v50);
                }
              }
              m_hScope_high = 0;
              v53 = 255;
              if ( SHIDWORD(m_pInstance[44].m_hPrivateScope.m_hScope) >= 0 )
                m_hScope_high = HIDWORD(m_pInstance[44].m_hPrivateScope.m_hScope);
              if ( m_hScope_high <= 255 )
                v53 = m_hScope_high;
              KeyValues::SetInt(v13, "HeroLevel", v53);
              CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v13, v6, 1);
            }
          }
        }
      }
    }
  }
}


// CDOTA_OGS::LogCMHeroDraft  (line 299, @0x00000000025fb8e0, libserver.so)  // inlines: CM_GetBonusTimeRemainingInHeroSelection, CM_GetPhaseTimeRemaining, DOTAGameRules, GetRemainingTime, SetBool, ShouldLog
// calls: CDOTA_OGS::IsMatchLobby, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetString, KeyValues::SetInt, CountdownTimer::Now, KeyValues::SetFloat, CSteamWorksGameStatsUploader::AddStatsForUpload, KeyValues::operator delete, _Unwind_Resume
// callers: CDOTAGamerules::CM_AddBannedHero, CDOTAGamerules::CM_AddSelectedHero
// strings: "DOTACMHeroDraft", "Ban", "BonusTime"
// globals: g_DOTASteamWorksGameStatsServer
void __fastcall CDOTA_OGS::LogCMHeroDraft(const char *pszHeroName, bool bBan, int iTeamID, int nSlot)
{
  KeyValues *v8; // rbx
  int v9; // edx
  int v10; // edx
  float v11; // r13d
  float v12; // xmm0_4
  float v13; // xmm1_4

  if ( g_pGameRules != 0 && CDOTA_OGS::IsMatchLobby() )
  {
    v8 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v8, "DOTACMHeroDraft");
    KeyValues::SetString(v8, "UnitID", pszHeroName);
    KeyValues::SetInt(v8, "Ban", bBan);
    v9 = 0;
    if ( iTeamID >= 0 )
      v9 = iTeamID;
    if ( v9 > 255 )
      v9 = 255;
    KeyValues::SetInt(v8, "Team", v9);
    v10 = 255;
    if ( nSlot < 0 )
      nSlot = 0;
    if ( nSlot <= 255 )
      v10 = nSlot;
    KeyValues::SetInt(v8, "Slot", v10);
    v11 = *&g_pGameRules[9].m_szQuestName[28];
    v12 = CountdownTimer::Now(&g_pGameRules[9].m_szQuestName[16]);
    KeyValues::SetFloat(v8, "RemainingTime", v11 - v12);
    KeyValues::SetFloat(v8, "BonusTime", v13);
    CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v8, -1, 1);
  }
}


// CDOTA_OGS::LogHeroLevelUp  (line 319, @0x0000000002619720, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_OGS::ShouldLog, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, CDOTAGamerules::GetDOTATime, KeyValues::SetFloat, CDOTA_PlayerResource::GetSelectedHeroName, KeyValues::SetString, CDOTA_PlayerResource::GetLevel, CDOTA_PlayerResource::GetTotalEarnedGold, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetKills (22 total)
// callers: CDOTA_BaseNPC_Hero::HeroLevelUp
// strings: "DOTAHeroLevelUp", "EventIndex", "GoldEarned", "InventoryValue"
// globals: CDOTA_OGS::m_iEventCount, g_DOTASteamWorksGameStatsServer
void __fastcall CDOTA_OGS::LogHeroLevelUp(int iPlayerID, int iInventoryValue)
{
  int v3; // edx
  float v4; // xmm1_4
  const char *SelectedHeroName; // rax
  int Level; // eax
  int v7; // edx
  int TotalEarnedGold; // eax
  int Team; // eax
  int Kills; // eax
  int v11; // edx
  int Deaths; // eax
  int v13; // edx
  int Assists; // eax
  int v15; // edx
  int LastHits; // eax
  int Denies; // eax
  int i; // ebx
  int *v19; // rax
  __int64 m_Size; // r12
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  KeyValues *pKVData; // [rsp+10h] [rbp-60h]
  int v28; // [rsp+1Ch] [rbp-54h]
  CUtlVector<int,CUtlMemory<int,int> > EnemyIDs; // [rsp+20h] [rbp-50h] BYREF

  if ( CDOTA_OGS::ShouldLog(iPlayerID) )
  {
    pKVData = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(pKVData, "DOTAHeroLevelUp");
    v3 = CDOTA_OGS::m_iEventCount++;
    KeyValues::SetInt(pKVData, "EventIndex", v3);
    CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    KeyValues::SetFloat(pKVData, "GameTime", v4);
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetString(pKVData, "UnitID", SelectedHeroName);
    Level = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, iPlayerID);
    v7 = 255;
    if ( Level <= 255 )
    {
      v25 = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, iPlayerID);
      v7 = 0;
      if ( v25 >= 0 )
        v7 = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(pKVData, "HeroLevel", v7);
    TotalEarnedGold = CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(pKVData, "GoldEarned", TotalEarnedGold);
    KeyValues::SetInt(pKVData, "InventoryValue", iInventoryValue);
    Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(pKVData, "Team", Team);
    Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, iPlayerID);
    v11 = 0x7FFF;
    if ( Kills <= 0x7FFF )
    {
      v24 = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, iPlayerID);
      v11 = -32768;
      if ( v24 >= -32768 )
        v11 = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(pKVData, "Kills", v11);
    Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, iPlayerID);
    v13 = 0x7FFF;
    if ( Deaths <= 0x7FFF )
    {
      v23 = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, iPlayerID);
      v13 = -32768;
      if ( v23 >= -32768 )
        v13 = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(pKVData, "Deaths", v13);
    Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, iPlayerID);
    v15 = 0x7FFF;
    if ( Assists <= 0x7FFF )
    {
      v22 = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, iPlayerID);
      v15 = -32768;
      if ( v22 >= -32768 )
        v15 = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, iPlayerID);
    }
    KeyValues::SetInt(pKVData, "Assists", v15);
    LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(pKVData, "LastHits", LastHits);
    Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, iPlayerID);
    KeyValues::SetInt(pKVData, "Denies", Denies);
    EnemyIDs.m_Size = 0;
    EnemyIDs.m_Memory.m_pMemory = 0;
    EnemyIDs.m_Memory.m_nAllocationCount = 0;
    EnemyIDs.m_Memory.m_nGrowSize = 0;
    v28 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID);
    for ( i = 0; i != 10; ++i )
    {
      if ( v28 != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, i) )
      {
        m_Size = EnemyIDs.m_Size;
        v21 = EnemyIDs.m_Size;
        if ( EnemyIDs.m_Size == EnemyIDs.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&EnemyIDs.m_Memory, 1);
          v21 = EnemyIDs.m_Size;
        }
        EnemyIDs.m_Size = v21 + 1;
        v19 = &EnemyIDs.m_Memory.m_pMemory[m_Size];
        if ( v19 != 0 )
          *v19 = i;
      }
    }
    CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, pKVData, iPlayerID, 1);
    if ( (EnemyIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&EnemyIDs.m_Memory);
      if ( (EnemyIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&EnemyIDs.m_Memory);
    }
  }
}


// CDOTA_OGS::LogBuildingDeath  (line 355, @0x00000000025fba70, libserver.so)  // inlines: DOTAGameRules, Get, GetAbilityName, GetAttacker, GetInflictor, GetInstance, GetTeamNumber, GetUnitName, ShouldLog, String, ToCStr, ToDOTABaseNPC, entindex, operator CBaseEntity*
// calls: CDOTA_OGS::IsMatchLobby, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CBaseEntity::GetAbsOrigin, KeyValues::SetFloat, CDOTAGamerules::GetDOTATime, CEntityHandle::operator CEntityInstance*, CDOTAPlayer::GetPlayerByPlayerID, CEntityInstance::GetEntityIndex, V_atoui64 (17 total)
// callers: CDOTA_BaseNPC_Building::Event_Killed
// strings: "DOTABuildingDeath", "EventIndex", "UnitTeam", "steamworks_sessionid_client", "KillerSessionID", "KillerHeroLevel" (8 total)
// globals: CDOTA_OGS::m_iEventCount, g_DOTASteamWorksGameStatsServer
void __fastcall CDOTA_OGS::LogBuildingDeath(CDOTA_BaseNPC_Building *pBuilding, const CTakeDamageInfo *const info)
{
  uint32 m_iUnitType; // eax
  KeyValues *v5; // rbx
  int v6; // edx
  const char *m_pAsString; // rdx
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // r12
  int v13; // eax
  CDOTAPlayer *PlayerByPlayerID; // rax
  __int64 (__fastcall *v15)(IVEngineServer2 *, _QWORD, const char *); // r15
  CEntityIndex v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  uint64 v21; // rax
  int m_hScope_high; // eax
  int v23; // edx
  const char *v24; // rdx
  CEntityInstance *v25; // rax
  _QWORD *v26; // rax
  const char **v27; // rax
  const char *v28; // rdx
  const char *v29; // rax

  if ( g_pGameRules != 0 && CDOTA_OGS::IsMatchLobby() )
  {
    m_iUnitType = pBuilding->m_iUnitType;
    if ( (m_iUnitType & 4) != 0 || (m_iUnitType & 0x60) != 0 )
    {
      v5 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v5, "DOTABuildingDeath");
      v6 = CDOTA_OGS::m_iEventCount++;
      KeyValues::SetInt(v5, "EventIndex", v6);
      m_pAsString = "";
      if ( pBuilding->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = pBuilding->m_iszUnitName.m_Value.u.m_pAsString;
      KeyValues::SetString(v5, "UnitID", m_pAsString);
      KeyValues::SetInt(v5, "UnitTeam", pBuilding->m_iTeamNum.m_Value);
      CBaseEntity::GetAbsOrigin(pBuilding);
      KeyValues::SetFloat(v5, "LocX", v8);
      CBaseEntity::GetAbsOrigin(pBuilding);
      KeyValues::SetFloat(v5, "LocY", v9);
      CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      KeyValues::SetFloat(v5, "GameTime", v10);
      v11 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
      v12 = v11;
      if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
      {
        v13 = (*(v11->_vptr_IHandleEntity + 414))(v11);
        if ( v13 >= 0 )
        {
          PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(v13);
          if ( PlayerByPlayerID != 0 )
          {
            v15 = *(*engine + 384LL);
            v16.m_Data = CEntityInstance::GetEntityIndex(PlayerByPlayerID).m_Data;
            v17 = v15(engine, v16.m_Data, "steamworks_sessionid_client");
            v21 = V_atoui64(v17, v20, v18, v19);
            KeyValues::SetUint64(v5, "KillerSessionID", v21);
          }
        }
        m_hScope_high = 0;
        v23 = 255;
        if ( SHIDWORD(v12[44].m_hPrivateScope.m_hScope) >= 0 )
          m_hScope_high = HIDWORD(v12[44].m_hPrivateScope.m_hScope);
        if ( m_hScope_high <= 255 )
          v23 = m_hScope_high;
        KeyValues::SetInt(v5, "KillerHeroLevel", v23);
        v24 = "";
        if ( v12[70].m_iszPrivateVScripts.u.m_Id != 0 )
          v24 = v12[70].m_iszPrivateVScripts.u.m_pAsString;
        KeyValues::SetString(v5, "KillerUnitID", v24);
        KeyValues::SetInt(v5, "KillerTeam", HIBYTE(v12[7].m_CScriptComponent));
      }
      v25 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
      if ( v25 != 0 )
      {
        v26 = __dynamic_cast(v25, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
        if ( v26 != 0 )
        {
          v27 = v26[111];
          v28 = "<NoAbilityName>";
          if ( v27 != 0 )
          {
            v29 = *v27;
            if ( v29 != 0 )
              v28 = v29;
          }
          KeyValues::SetString(v5, "AbilityID", v28);
        }
      }
      CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v5, -1, 1);
    }
  }
}


// StringSortDescPredicate  (line 408, @0x00000000025e03a0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
bool __fastcall StringSortDescPredicate(const char *pszLeft, const char *pszRight)
{
  return strcmp(pszLeft, pszRight) >= 0;
}


// CDOTA_OGS::LogMatchSnapshot  (line 417, @0x00000000026208a0, libserver.so)  // inlines: CEntityHandle, CSteamID, GetAbilityData, GetAssignedHero, GetAssists, GetDeaths, GetDenies, GetEntryIndex, GetGameWinner, GetHandleEntity, GetInstance, GetKills, GetLastHits, GetSerialNumber, IndexToIdentity, Init, LookupEntity, SetBool, ShouldLog, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, __final_insertion_sort<char const**, bool (*)(char const*, char const*)>, operator CBaseEntity*, sort<char const**, bool (*)(char const*, char const*)>
// calls: CDOTA_OGS::IsMatchLobby, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, CDOTAGamerules::GetDOTATime, KeyValues::SetFloat, CDOTAGamerules::GetTeamHasAbandonedPlayer, CDOTAGamerules::GetTowerStatus, CDOTAGamerules::GetBarracksStatus, CDOTAGamerules::GetRoshanKillCount, CSteamWorksGameStatsUploader::AddStatsForUpload, UTIL_PlayerByIndex (38 total)
// callers: CDOTAGamerules::Think, CDOTAGamerules::State_Enter_POST_GAME
// strings: "DOTAMatchStateSnapshots", "SnapshotIndex", "RadiantWon", "DireWon", "RadiantAbandoned", "DireAbandoned" (26 total)
// globals: CDOTA_OGS::m_iSnapshotIndex, g_DOTASteamWorksGameStatsServer, StringSortDescPredicate(char const*,char const*)
void __cdecl CDOTA_OGS::LogMatchSnapshot()
{
  uint16 v0; // r12
  KeyValues *v1; // rbx
  int v2; // r13d
  float v3; // xmm1_4
  bool HasAbandonedPlayer; // al
  bool v5; // al
  uint32 TowerStatus; // eax
  uint32 v7; // eax
  uint32 BarracksStatus; // eax
  uint32 v9; // eax
  uint RoshanKillCount; // eax
  uint v11; // eax
  CBasePlayer *v12; // rax
  CBaseMultiplayerPlayer *v13; // rbx
  int v14; // eax
  int v15; // edx
  unsigned __int16 v16; // cx
  int v17; // esi
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_UnitInventory *Inventory; // rcx
  __int64 v22; // r12
  CDOTA_UnitInventory *v23; // rbx
  CDOTA_Item *ItemInSlot; // rax
  const char **p_m_pszAbilityName; // rdx
  KeyValues *v26; // r12
  float v27; // xmm1_4
  DOTALeaverStatus_t LeaverStatus; // eax
  const char *SelectedHeroName; // rax
  int Kills; // eax
  int Deaths; // eax
  int Assists; // eax
  int LastHits; // eax
  int Denies; // edx
  int TotalEarnedXP; // eax
  int Gold; // eax
  int TotalEarnedGold; // eax
  int GoldLostToDeath; // eax
  int GoldSpentOnItems; // eax
  int GoldSpentOnConsumables; // eax
  int GoldSpentOnBuybacks; // eax
  int RunePickups; // eax
  int AegisPickups; // eax
  int GoldSpentOnSupport; // eax
  CDOTA_BaseNPC *v45; // r12
  CDOTA_Item *v46; // [rsp-40h] [rbp-D0h]
  CDOTA_BaseNPC *m_pInstance; // [rsp-28h] [rbp-B8h]
  CBaseMultiplayerPlayer *v48; // [rsp-20h] [rbp-B0h]
  int v49; // [rsp-10h] [rbp-A0h]
  int v50; // [rsp-Ch] [rbp-9Ch]
  CSteamID v51; // [rsp-8h] [rbp-98h] BYREF
  const char *v52; // [rsp+8h] [rbp-88h] BYREF
  const char *pItemNames[9]; // [rsp+10h] [rbp-80h] BYREF

  if ( g_pGameRules != 0 && CDOTA_OGS::IsMatchLobby() )
  {
    v0 = CDOTA_OGS::m_iSnapshotIndex++;
    v1 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v1, "DOTAMatchStateSnapshots");
    v2 = 1;
    v49 = v0;
    KeyValues::SetInt(v1, "SnapshotIndex", v0);
    CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    KeyValues::SetFloat(v1, "GameTime", v3);
    KeyValues::SetInt(v1, "RadiantWon", *&g_pGameRules[16].m_szQuestName[80] == 2);
    KeyValues::SetInt(v1, "DireWon", *&g_pGameRules[16].m_szQuestName[80] == 3);
    HasAbandonedPlayer = CDOTAGamerules::GetTeamHasAbandonedPlayer(g_pGameRules, 2);
    KeyValues::SetInt(v1, "RadiantAbandoned", HasAbandonedPlayer);
    v5 = CDOTAGamerules::GetTeamHasAbandonedPlayer(g_pGameRules, 3);
    KeyValues::SetInt(v1, "DireAbandoned", v5);
    TowerStatus = CDOTAGamerules::GetTowerStatus(g_pGameRules, 2);
    KeyValues::SetInt(v1, "RadiantTowerState", TowerStatus);
    v7 = CDOTAGamerules::GetTowerStatus(g_pGameRules, 3);
    KeyValues::SetInt(v1, "DireTowerState", v7);
    BarracksStatus = CDOTAGamerules::GetBarracksStatus(g_pGameRules, 2);
    KeyValues::SetInt(v1, "RadiantBarracksState", BarracksStatus);
    v9 = CDOTAGamerules::GetBarracksStatus(g_pGameRules, 3);
    KeyValues::SetInt(v1, "DireBarracksState", v9);
    RoshanKillCount = CDOTAGamerules::GetRoshanKillCount(g_pGameRules, 2);
    KeyValues::SetInt(v1, "RadiantRoshanKills", RoshanKillCount);
    v11 = CDOTAGamerules::GetRoshanKillCount(g_pGameRules, 3);
    KeyValues::SetInt(v1, "DireRoshanKills", v11);
    CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v1, -1, 1);
    if ( gpGlobals->maxClients > 0 )
    {
      do
      {
        while ( 1 )
        {
          v12 = UTIL_PlayerByIndex(v2);
          v13 = v12;
          if ( v12 != 0
            && (*(v12->_vptr_IHandleEntity + 140))(v12) != 0
            && (*(v13->_vptr_IHandleEntity + 391))(v13) == 0
            && (v13->m_iTeamNum.m_Value - 2) <= 1u )
          {
            break;
          }
          if ( gpGlobals->maxClients < ++v2 )
            return;
        }
        v14 = (*(v13->_vptr_IHandleEntity + 393))(v13);
        HIWORD(v51.m_steamid.m_unAll64Bits) = BYTE6(v51.m_steamid.m_unAll64Bits) & 0xF;
        v50 = v14;
        v51.m_steamid.m_comp = (v51.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
        CBaseMultiplayerPlayer::GetSteamID(v13, &v51);
        v15 = HIDWORD(v13[1].m_pfnUse.__pfn) >> 15;
        if ( HIDWORD(v13[1].m_pfnUse.__pfn) == -1 )
        {
          v16 = 0x7FFF;
          v17 = 0x7FFF;
        }
        else
        {
          v16 = WORD2(v13[1].m_pfnUse.__pfn) & 0x7FFF;
          v17 = v16;
        }
        LOWORD(v52) = v16 | v52 & 0x8000;
        v18 = (v15 << 15) | v52 & 0x7FFF;
        LODWORD(v52) = v18;
        if ( (v18 + 2) > 1
          && (v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9]) != 0
          && (v20 = &v19[v17 & 0x1FF]) != 0
          && v18 == v20->m_EHandle.m_Index
          && (v45 = v20->m_pInstance, v20->m_pInstance != 0)
          && v45->m_bIsDOTANPC
          && (v45->m_iUnitType & 1) != 0 )
        {
          m_pInstance = v20->m_pInstance;
          Inventory = CDOTA_BaseNPC::GetInventory(v20->m_pInstance);
        }
        else
        {
          m_pInstance = 0;
          Inventory = 0;
        }
        v48 = v13;
        v22 = 0;
        v23 = Inventory;
        do
        {
          while ( v23 != 0 )
          {
            ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(v23, v22);
            if ( ItemInSlot == 0 )
              break;
            p_m_pszAbilityName = &ItemInSlot->m_pAbilityData->m_pszAbilityName;
            if ( p_m_pszAbilityName == 0 )
            {
              v46 = ItemInSlot;
              CDOTABaseAbility::LoadAbilityData(ItemInSlot, 0);
              p_m_pszAbilityName = &v46->m_pAbilityData->m_pszAbilityName;
              if ( p_m_pszAbilityName == 0 )
                break;
            }
            pItemNames[v22++ - 1] = *p_m_pszAbilityName;
            if ( v22 == 9 )
              goto LABEL_23;
          }
          pItemNames[v22++ - 1] = "";
        }
        while ( v22 != 9 );
LABEL_23:
        std::__introsort_loop<char const**,long,bool (*)(char const*,char const*)>(
          &v52,
          &pItemNames[8],
          6,
          StringSortDescPredicate);
        std::__insertion_sort<char const**,bool (*)(char const*,char const*)>(
          &v52,
          &pItemNames[8],
          StringSortDescPredicate);
        v26 = KeyValues::operator new(0x14u);
        KeyValues::KeyValues(v26, "DOTAMatchPlayerSnapshots");
        KeyValues::SetInt(v26, "SnapshotIndex", v49);
        CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
        KeyValues::SetFloat(v26, "GameTime", v27);
        KeyValues::SetInt(v26, "AccountID", *&v51.m_steamid.m_comp);
        LeaverStatus = CDOTA_PlayerResource::GetLeaverStatus(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "Abandoned", LeaverStatus == DOTALeaverStatus_t::DOTA_LEAVER_ABANDONED);
        KeyValues::SetInt(v26, "IsRadiant", v48->m_iTeamNum.m_Value == 2);
        KeyValues::SetInt(v26, "PlayerID", v50);
        SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v50);
        KeyValues::SetString(v26, "UnitID", SelectedHeroName);
        if ( m_pInstance != 0 )
        {
          KeyValues::SetInt(v26, "HeroLevel", m_pInstance->m_iCurrentLevel.m_Value);
          Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, m_pInstance[1].m_pfnBlocked.__delta);
          KeyValues::SetInt(v26, "Kills", Kills);
          Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, m_pInstance[1].m_pfnBlocked.__delta);
          KeyValues::SetInt(v26, "Deaths", Deaths);
          Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, m_pInstance[1].m_pfnBlocked.__delta);
          KeyValues::SetInt(v26, "Assists", Assists);
          LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, m_pInstance[1].m_pfnBlocked.__delta);
          KeyValues::SetInt(v26, "LastHits", LastHits);
          Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, m_pInstance[1].m_pfnBlocked.__delta);
        }
        else
        {
          KeyValues::SetInt(v26, "HeroLevel", 0);
          KeyValues::SetInt(v26, "Kills", 0);
          KeyValues::SetInt(v26, "Deaths", 0);
          KeyValues::SetInt(v26, "Assists", 0);
          KeyValues::SetInt(v26, "LastHits", 0);
          Denies = 0;
        }
        ++v2;
        KeyValues::SetInt(v26, "Denies", Denies);
        TotalEarnedXP = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "XPEarned", TotalEarnedXP);
        Gold = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "CurrentGold", Gold);
        TotalEarnedGold = CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "GoldEarned", TotalEarnedGold);
        GoldLostToDeath = CDOTA_PlayerResource::GetGoldLostToDeath(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "GoldLostToDeath", GoldLostToDeath);
        GoldSpentOnItems = CDOTA_PlayerResource::GetGoldSpentOnItems(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "GoldSpentOnItems", GoldSpentOnItems);
        GoldSpentOnConsumables = CDOTA_PlayerResource::GetGoldSpentOnConsumables(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "GoldSpentOnConsumables", GoldSpentOnConsumables);
        GoldSpentOnBuybacks = CDOTA_PlayerResource::GetGoldSpentOnBuybacks(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "GoldSpentOnBuybacks", GoldSpentOnBuybacks);
        RunePickups = CDOTA_PlayerResource::GetRunePickups(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "RunesPickedUp", RunePickups);
        AegisPickups = CDOTA_PlayerResource::GetAegisPickups(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "AegisesPickedUp", AegisPickups);
        GoldSpentOnSupport = CDOTA_PlayerResource::GetGoldSpentOnSupport(g_pDOTAPlayerResource, v50);
        KeyValues::SetInt(v26, "SupportGoldContributed", GoldSpentOnSupport);
        KeyValues::SetString(v26, "InventoryItemID1", v52);
        KeyValues::SetString(v26, "InventoryItemID2", pItemNames[0]);
        KeyValues::SetString(v26, "InventoryItemID3", pItemNames[1]);
        KeyValues::SetString(v26, "InventoryItemID4", pItemNames[2]);
        KeyValues::SetString(v26, "InventoryItemID5", pItemNames[3]);
        KeyValues::SetString(v26, "InventoryItemID6", pItemNames[4]);
        CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v26, -1, 1);
      }
      while ( gpGlobals->maxClients >= v2 );
    }
  }
}


// CDOTA_OGS::Steam_OnGSClientDeny  (line 518, @0x00000000025e02f0, libserver.so)
void __fastcall CDOTA_OGS::Steam_OnGSClientDeny(CDOTA_OGS *const this, GSClientDeny_t *pGSClientDeny)
{
  ;
}


// CDOTA_OGS::Steam_OnGSClientKick  (line 525, @0x00000000025e0300, libserver.so)
void __fastcall CDOTA_OGS::Steam_OnGSClientKick(CDOTA_OGS *const this, GSClientKick_t *pGSClientKick)
{
  ;
}


// CDOTASteamWorksGameStatsServer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 532, @0x00000000025fbd40, libserver.so)
void __cdecl CDOTASteamWorksGameStatsServer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetDOTASteamWorksGameStatsServer  (line 534, @0x00000000025fbd50, libserver.so)
// callers: CDOTAGamerules::ClientDisconnected, CDOTA_Tutorial::FinishTutorial, CDOTA_Tutorial::FireGameEvent, CDOTA_Modifier_TutorialStatCollector::OnAbilityExecuted, CDOTA_Modifier_TutorialStatCollector::OnAttack, CDOTA_Modifier_TutorialStatCollector::OnTakeDamage
// globals: g_DOTASteamWorksGameStatsServer
CDOTASteamWorksGameStatsServer *__cdecl GetDOTASteamWorksGameStatsServer()
{
  return &g_DOTASteamWorksGameStatsServer;
}


// GetSteamWorksGameStatsServer  (line 535, @0x00000000025fbd60, libserver.so)
// callers: CDOTAGamerules::GameDeactivate, CDOTAGamerules::GameInit, CDOTAHLTVDirector::FinishRecording
// globals: g_DOTASteamWorksGameStatsServer
CSteamWorksGameStatsServer *__cdecl GetSteamWorksGameStatsServer()
{
  return &g_DOTASteamWorksGameStatsServer;
}


// CDOTASteamWorksGameStatsServer::CDOTASteamWorksGameStatsServer  (line 537, @0x00000000025fbd70, libserver.so)  // inlines: CDOTATutorialStats, Clear
// calls: CSteamWorksGameStatsServer::CSteamWorksGameStatsServer
void __fastcall CDOTASteamWorksGameStatsServer::CDOTASteamWorksGameStatsServer(
        CDOTASteamWorksGameStatsServer *const this)
{
  CSteamWorksGameStatsServer::CSteamWorksGameStatsServer(this);
  this->m_TutorialStats.m_nAttacks = 0;
  this->_vptr_IGameSystem = off_4169430;  // vptr: CDOTASteamWorksGameStatsServer
  this->_vptr_IGameEventListener2 = off_41695C0;
  this->m_TutorialStats.m_nTimesHitOneHealth = 0;
  this->m_TutorialStats.m_nTimeToLevelSix = 0;
  this->m_TutorialStats.m_nSpellsCast = 0;
  this->m_bAddedTutorialStats = 0;
}


// CDOTASteamWorksGameStatsServer::Reset  (line 542, @0x00000000025e1bb0, libserver.so)  // inlines: Clear
// calls: CSteamWorksGameStatsUploader::Reset
void __fastcall CDOTASteamWorksGameStatsServer::Reset(CDOTASteamWorksGameStatsServer *const this)
{
  CSteamWorksGameStatsUploader::Reset(this);
  this->m_bAddedTutorialStats = 0;
  this->m_TutorialStats.m_nAttacks = 0;
  this->m_TutorialStats.m_nTimesHitOneHealth = 0;
  this->m_TutorialStats.m_nTimeToLevelSix = 0;
  this->m_TutorialStats.m_nSpellsCast = 0;
}


// CDOTASteamWorksGameStatsServer::EndSession  (line 550, @0x00000000025fc070, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTASteamWorksGameStatsServer::LogTutorialStats, CSteamWorksGameStatsUploader::EndSession
void __fastcall CDOTASteamWorksGameStatsServer::EndSession(CDOTASteamWorksGameStatsServer *const this)
{
  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
    CDOTASteamWorksGameStatsServer::LogTutorialStats(this);
  CSteamWorksGameStatsUploader::EndSession(this);
}


// CDOTASteamWorksGameStatsServer::LogTutorialStats  (line 572, @0x00000000025fbdd0, libserver.so)  // inlines: CSteamID, GetTutorialPlayer, ToDOTAPlayer, curtime
// calls: Warning, UTIL_PlayerByIndex, CBaseMultiplayerPlayer::GetSteamID, DOTATutorial, KeyValues::operator new, KeyValues::KeyValues, CDOTA_Tutorial::GetCurrentLesson, CDOTA_PlayerResource::GetLastHits, KeyValues::SetInt, KeyValues::SetString, CSteamWorksGameStatsUploader::AddStatsForUpload, KeyValues::operator delete (13 total)
// callers: CDOTAGamerules::ClientDisconnected, CDOTASteamWorksGameStatsServer::EndSession, CDOTA_Tutorial::FinishTutorial
// strings: "CDOTASteamWorksGameStatsServer Failed to find tutorial player\n", "CDOTASteamWorksGameStatsServer Failed to tutorial player's SteamID\n", "DOTATutorialM1", "Attacks", "TimeToLevelSix", "LastLessonID" (7 total)
void __fastcall CDOTASteamWorksGameStatsServer::LogTutorialStats(CDOTASteamWorksGameStatsServer *const this)
{
  CEntityIndex v2; // r13d
  CBasePlayer *v3; // rax
  CBaseMultiplayerPlayer *v4; // rbx
  CDOTA_Tutorial *v5; // r14
  KeyValues *v6; // r13
  CGlobalVars *v7; // r15
  int m_flCurrentTime; // r15d
  const char *CurrentLesson; // r14
  int LastHits; // eax
  int v11; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int nLastHits; // [rsp+Ch] [rbp-44h]
  CSteamID steamID; // [rsp+10h] [rbp-40h] BYREF

  if ( !this->m_bAddedTutorialStats )
  {
    v2.m_Data = 1;
    if ( gpGlobals->maxClients > 0 )
    {
      while ( 1 )
      {
        v3 = UTIL_PlayerByIndex(v2);
        v4 = v3;
        if ( v3 != 0
          && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0
          && (*(v4->_vptr_IHandleEntity + 391))(v4) == 0
          && (*(v4->_vptr_IHandleEntity + 393))(v4) != -1 )
        {
          break;
        }
        if ( ++v2.m_Data > gpGlobals->maxClients )
          goto LABEL_4;
      }
      HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
      steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
      if ( CBaseMultiplayerPlayer::GetSteamID(v4, &steamID) )
      {
        v5 = DOTATutorial();
        if ( v5 != 0 )
        {
          v6 = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(v6, "DOTATutorialM1");
          v7 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            }
            m_flCurrentTime = v7->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0;
          }
          CurrentLesson = CDOTA_Tutorial::GetCurrentLesson(v5);
          LastHits = -1;
          if ( g_pDOTAPlayerResource != 0 )
          {
            v11 = (*(v4->_vptr_IHandleEntity + 393))(v4);
            LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v11);
          }
          nLastHits = LastHits;
          KeyValues::SetInt(v6, "Duration", m_flCurrentTime);
          KeyValues::SetInt(v6, "Attacks", this->m_TutorialStats.m_nAttacks);
          KeyValues::SetInt(v6, "LastHits", nLastHits);
          KeyValues::SetInt(v6, "Deaths", this->m_TutorialStats.m_nTimesHitOneHealth);
          KeyValues::SetInt(v6, "TimeToLevelSix", this->m_TutorialStats.m_nTimeToLevelSix);
          KeyValues::SetString(v6, "LastLessonID", CurrentLesson);
          KeyValues::SetInt(v6, "AccountID", *&steamID.m_steamid.m_comp);
          KeyValues::SetInt(v6, "SpellCasts", this->m_TutorialStats.m_nSpellsCast);
          CSteamWorksGameStatsUploader::AddStatsForUpload(this, v6, -1, 1);
          this->m_bAddedTutorialStats = 1;
        }
      }
      else
      {
        Warning("CDOTASteamWorksGameStatsServer Failed to tutorial player's SteamID\n");
      }
    }
    else
    {
LABEL_4:
      Warning("CDOTASteamWorksGameStatsServer Failed to find tutorial player\n");
    }
  }
}


