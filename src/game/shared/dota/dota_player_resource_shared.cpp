
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PlayerResourcePlayerTeamData_t::PlayerResourcePlayerTeamData_t  (line 23, @0x0000000002662840, libserver.so)  // inlines: CEntityHandle, CEntityOwnerPtr, CHandle, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, Color, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, Get, NetworkStateChanged, Set, SetRawColor, operator CEntityInstance*, operator=, operator=<Color>, operator=<eEconItemOrigin>, operator=<int>
// calls: memcmp
// callers: CSchemaClassBinding<PlayerResourcePlayerTeamData_t>::Allocate, CSchemaClassBinding<PlayerResourcePlayerTeamData_t>::ConstructInPlace, CUtlVectorBase<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >, PlayerResourcePlayerTeamData_t>::InsertMultipleBefore, CSchemaUtlVectorManipulator<CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >, PlayerResourcePlayerTeamData_t>::SwapItems, CSchemaClassBinding<PlayerResourcePlayerTeamData_t>::AllocateAndCopyConstruct
// globals: INVALID_CUSTOM_PLAYER_COLOR
void __fastcall PlayerResourcePlayerTeamData_t::PlayerResourcePlayerTeamData_t(
        PlayerResourcePlayerTeamData_t *const this)
{
  unsigned int v1; // r13d
  CNetworkArrayBase<int,4,PlayerResourcePlayerTeamData_t::NetworkVar_m_nSuggestedHeroes> *p_m_nSuggestedHeroes; // r15
  CNetworkArrayBase<int,4,PlayerResourcePlayerTeamData_t::NetworkVar_m_nSuggestedHeroes> *v4; // r12
  CEntityInstance *v5; // rax
  CNetworkVarBase<Color,PlayerResourcePlayerTeamData_t::NetworkVar_m_CustomPlayerColor> v6; // r12d
  CEntityInstance *v7; // rdi
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v9; // rdi
  CEntityInstance *v10; // rdi
  bool v11; // zf
  CEntityInstance *v12; // rdi
  CEntityInstance *v13; // rdi
  unsigned int m_Value; // r12d
  CEntityInstance *v15; // rdi
  unsigned int v16; // r11d
  CEntityInstance *v17; // rdi
  CEntityInstance *v18; // rdi
  CEntityInstance *v19; // rdi
  int s2[13]; // [rsp+Ch] [rbp-34h] BYREF

  v1 = 0;
  this->_vptr_PlayerResourcePlayerTeamData_t = &off_416DB80;
  this->__m_PathIndex.m_Value = -1;
  p_m_nSuggestedHeroes = &this->m_nSuggestedHeroes;
  this->m_iKills.m_Value = 0;
  v4 = &this->m_nSuggestedHeroes;
  this->m_iAssists.m_Value = 0;
  this->m_iDeaths.m_Value = 0;
  v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_iStreak.m_Value = 0;
  this->m_iLevel.m_Value = 0;
  this->m_iRespawnSeconds.m_Value = 0;
  this->m_iLastBuybackTime.m_Value = 0;
  this->__m_pChainEntity.m_pObj = v5;
  this->m_unCompendiumLevel.m_Value = 0;
  this->m_iBattleBonusRate.m_Value = 0;
  this->m_hSelectedHero.m_Value.m_Index = -1;
  this->m_bAFK.m_Value = 0;
  this->m_bVoiceChatBanned.m_Value = 0;
  this->m_iTimedRewardDrops.m_Value = 0;
  this->m_iTimedRewardDropOrigins.m_Value = 0;
  this->m_iTimedRewardCrates.m_Value = 0;
  this->m_iTimedRewardEvents.m_Value = 0;
  this->m_bCanRepick.m_Value = 0;
  this->m_bHasRandomed.m_Value = 0;
  this->m_bBattleBonusActive.m_Value = 0;
  this->m_iCustomBuybackCost.m_Value = 0;
  this->m_CustomPlayerColor = 0;
  this->m_bQualifiesForPAContractReward.m_Value = 0;
  this->m_iEventRanks.m_Value = 0;
  this->m_bHasPredictedVictory.m_Value = 0;
  this->m_UnitShareMasks.m_Value = 0;
  this->m_iTeamSlot.m_Value = 0;
  this->m_iEventPoints.m_Value = 0;
  this->m_iEventPremiumPoints.m_Value = 0;
  this->m_iEventWagerTokensRemaining.m_Value = 0;
  this->m_iEventWagerTokensMax.m_Value = 0;
  this->m_iEventEffectsMask.m_Value = 0;
  this->m_bIsEventOwned.m_Value = 0;
  this->m_hCourier.m_Value.m_Index = -1;
  this->m_iBattleCupWinStreak.m_Value = 0;
  this->m_iBattleCupWinDate.m_Value = 0;
  this->m_iBattleCupSkillLevel.m_Value = 0;
  this->m_iBattleCupTeamID.m_Value = 0;
  this->m_iBattleCupTournamentID.m_Value = 0;
  this->m_iBattleCupDivision.m_Value = 0;
  this->m_flTeamFightParticipation.m_Value = 0.0;
  this->m_iFirstBloodClaimed.m_Value = 0;
  this->m_iFirstBloodGiven.m_Value = 0;
  this->m_nSelectedHeroID.m_Value = -1;
  this->m_nRandomedHeroID.m_Value = -1;
  do
  {
    s2[0] = -1;
    if ( memcmp(v4, s2, 4u) != 0 )
    {
      m_pObj = this->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 60, v1, this->__m_PathIndex.m_Value);
      *(&p_m_nSuggestedHeroes[-3] + v4 - this - 12) = -1;
    }
    ++v1;
    v4 = (v4 + 4);
  }
  while ( v1 != 4 );
  v6 = INVALID_CUSTOM_PLAYER_COLOR;
  if ( INVALID_CUSTOM_PLAYER_COLOR != *&this->m_CustomPlayerColor )
  {
    v19 = this->__m_pChainEntity.m_pObj;
    if ( v19 != 0 && (v19->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v19->_vptr_IHandleEntity + 22))(v19, 112, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_CustomPlayerColor = v6;
  }
  if ( this->m_iTimedRewardDropOrigins.m_Value != 0 )
  {
    v18 = this->__m_pChainEntity.m_pObj;
    if ( v18 != 0 && (v18->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v18->_vptr_IHandleEntity + 22))(v18, 84, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_iTimedRewardDropOrigins.m_Value = 0;
  }
  if ( this->m_iTeamSlot.m_Value != -1 )
  {
    v7 = this->__m_pChainEntity.m_pObj;
    if ( v7 != 0 && (v7->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v7->_vptr_IHandleEntity + 22))(v7, 124, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_iTeamSlot.m_Value = -1;
  }
  if ( this->m_iBattleCupWinStreak.m_Value != 0 )
  {
    v10 = this->__m_pChainEntity.m_pObj;
    if ( v10 != 0 && (v10->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v10->_vptr_IHandleEntity + 22))(v10, 156, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    v11 = this->m_iBattleCupWinDate.m_Value == 0;
    this->m_iBattleCupWinStreak.m_Value = 0;
    if ( v11 )
    {
LABEL_14:
      if ( this->m_iBattleCupSkillLevel.m_Value == 0 )
        goto LABEL_15;
      goto LABEL_39;
    }
  }
  else if ( this->m_iBattleCupWinDate.m_Value == 0 )
  {
    goto LABEL_14;
  }
  v12 = this->__m_pChainEntity.m_pObj;
  if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    (*(v12->_vptr_IHandleEntity + 22))(v12, 160, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
  v11 = this->m_iBattleCupSkillLevel.m_Value == 0;
  this->m_iBattleCupWinDate.m_Value = 0;
  if ( v11 )
  {
LABEL_15:
    if ( this->m_iBattleCupTeamID.m_Value == 0 )
      goto LABEL_16;
    goto LABEL_44;
  }
LABEL_39:
  v13 = this->__m_pChainEntity.m_pObj;
  if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    (*(v13->_vptr_IHandleEntity + 22))(v13, 168, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
  m_Value = this->m_iBattleCupTeamID.m_Value;
  this->m_iBattleCupSkillLevel.m_Value = 0;
  if ( m_Value == 0 )
  {
LABEL_16:
    if ( this->m_iBattleCupTournamentID.m_Value == 0 )
      goto LABEL_17;
    goto LABEL_49;
  }
LABEL_44:
  v15 = this->__m_pChainEntity.m_pObj;
  if ( v15 != 0 && (v15->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    (*(v15->_vptr_IHandleEntity + 22))(v15, 172, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
  v16 = this->m_iBattleCupTournamentID.m_Value;
  this->m_iBattleCupTeamID.m_Value = 0;
  if ( v16 != 0 )
  {
LABEL_49:
    v17 = this->__m_pChainEntity.m_pObj;
    if ( v17 != 0 && (v17->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v17->_vptr_IHandleEntity + 22))(v17, 176, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_iBattleCupTournamentID.m_Value = 0;
  }
LABEL_17:
  if ( this->m_iBattleCupDivision.m_Value != 0 )
  {
    v9 = this->__m_pChainEntity.m_pObj;
    if ( v9 != 0 && (v9->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v9->_vptr_IHandleEntity + 22))(v9, 180, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_iBattleCupDivision.m_Value = 0;
  }
}


// PlayerResourcePlayerData_t::PlayerResourcePlayerData_t  (line 45, @0x0000000002662d40, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUtlSymbolLarge, ChangeAccessorFieldPathIndex_t, EnsureValidValue<DOTATeam_t>, EnsureValidValue<bool>, EnsureValidValue<int>, EnsureValidValue<long long unsigned int>, Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator=<DOTAConnectionState_t>, operator=<DOTATeam_t>, operator=<int>
// callers: CSchemaClassBinding<PlayerResourcePlayerData_t>::Allocate, CSchemaClassBinding<PlayerResourcePlayerData_t>::ConstructInPlace, CUtlVectorBase<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >, PlayerResourcePlayerData_t>::InsertMultipleBefore, CSchemaUtlVectorManipulator<CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >, PlayerResourcePlayerData_t>::SwapItems, CSchemaClassBinding<PlayerResourcePlayerData_t>::AllocateAndCopyConstruct
void __fastcall PlayerResourcePlayerData_t::PlayerResourcePlayerData_t(PlayerResourcePlayerData_t *const this)
{
  CEntityInstance *v2; // rax
  bool v3; // zf
  CEntityInstance *m_pObj; // rdi

  this->_vptr_PlayerResourcePlayerData_t = &off_416DBA0;
  this->__m_PathIndex.m_Value = -1;
  this->m_bIsValid.m_Value = 0;
  this->m_iszPlayerName.m_Value.u.m_Id = 0;
  this->m_bFullyJoinedServer.m_Value = 0;
  v2 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_bFakeClient.m_Value = 0;
  this->m_bIsBroadcaster.m_Value = 0;
  this->m_bIsBroadcasterChannelCameraman.m_Value = 0;
  this->m_iConnectionState.m_Value = 0;
  this->__m_pChainEntity.m_pObj = v2;
  this->m_iPlayerSteamID.m_Value = 0;
  this->m_eCoachTeam.m_Value = 0;
  this->m_iPlayerTeam.m_Value = 5;
  this->m_iBroadcasterChannel.m_Value = 6;
  this->m_iBroadcasterChannelSlot.m_Value = 6;
  v3 = this->m_eCoachTeam.m_Value == -1;
  this->m_iConnectionState.m_Value = 1;
  if ( !v3 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_eCoachTeam.m_Value = -1;
  }
}


// DataTeamPlayer_t::DataTeamPlayer_t  (line 54, @0x00000000026873e0, libserver.so)  // inlines: CEntityHandle, CEntityOwnerPtr, CHandle, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, DOTAGameRules, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<short unsigned int>, Get, NetworkStateChanged, NetworkVar_m_PreGameInventory, Set, operator CEntityInstance*, operator=<int>, ~NetworkVar_m_PreGameInventory
// calls: CDOTA_UnitInventory::CDOTA_UnitInventory, CDOTA_UnitInventory::~CDOTA_UnitInventory, _Unwind_Resume
// callers: CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >, DataTeamPlayer_t>::InsertMultipleBefore, CSchemaUtlVectorManipulator<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >, DataTeamPlayer_t>::SwapItems, CSchemaClassBinding<DataTeamPlayer_t>::Allocate, CSchemaClassBinding<DataTeamPlayer_t>::ConstructInPlace, CSchemaClassBinding<DataTeamPlayer_t>::AllocateAndCopyConstruct
void __fastcall DataTeamPlayer_t::DataTeamPlayer_t(DataTeamPlayer_t *const this)
{
  CEntityInstance *v2; // rax
  bool v3; // zf
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v5; // rdi
  int v6; // r12d
  CEntityInstance *v7; // rdi

  this->_vptr_DataTeamPlayer_t = &off_40DCA80;
  this->__m_PathIndex.m_Value = -1;
  this->m_iMetaLevel.m_Value = 0;
  this->m_iMetaExperience.m_Value = 0;
  this->m_iMetaExperienceAwarded.m_Value = 0;
  v2 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_iReliableGold.m_Value = 0;
  this->m_iUnreliableGold.m_Value = 0;
  this->m_iStartingPosition.m_Value = 0;
  this->m_iTotalEarnedGold.m_Value = 0;
  this->__m_pChainEntity.m_pObj = v2;
  this->m_iTotalEarnedXP.m_Value = 0;
  this->m_iSharedGold.m_Value = 0;
  this->m_iHeroKillGold.m_Value = 0;
  this->m_iCreepKillGold.m_Value = 0;
  this->m_iIncomeGold.m_Value = 0;
  this->m_iNetWorth.m_Value = 0;
  this->m_iDenyCount.m_Value = 0;
  this->m_iLastHitCount.m_Value = 0;
  this->m_iLastHitStreak.m_Value = 0;
  this->m_iLastHitMultikill.m_Value = 0;
  this->m_iNearbyCreepDeathCount.m_Value = 0;
  this->m_iClaimedDenyCount.m_Value = 0;
  this->m_iClaimedMissCount.m_Value = 0;
  this->m_iMissCount.m_Value = 0;
  this->m_nPossibleHeroSelection.m_Value = 0;
  this->m_flBuybackCooldownTime.m_Value = 0.0;
  this->m_flBuybackGoldLimitTime.m_Value = 0.0;
  this->m_flBuybackCostTime.m_Value = 0.0;
  this->m_flCustomBuybackCooldown.m_Value = 0.0;
  this->m_fStuns.m_Value = 0.0;
  this->m_fHealing.m_Value = 0.0;
  this->m_iTowerKills.m_Value = 0;
  this->m_iRoshanKills.m_Value = 0;
  this->m_hCameraTarget.m_Value.m_Index = -1;
  this->m_hOverrideSelectionEntity.m_Value.m_Index = -1;
  this->m_iObserverWardsPlaced.m_Value = 0;
  this->m_iSentryWardsPlaced.m_Value = 0;
  this->m_iCreepsStacked.m_Value = 0;
  this->m_iCampsStacked.m_Value = 0;
  this->m_iRunePickups.m_Value = 0;
  this->m_iGoldSpentOnSupport.m_Value = 0;
  this->m_iHeroDamage.m_Value = 0;
  this->m_iWardsPurchased.m_Value = 0;
  this->m_iWardsDestroyed.m_Value = 0;
  CDOTA_UnitInventory::CDOTA_UnitInventory(&this->m_PreGameInventory);
  v3 = this->m_iStartingPosition.m_Value == -1;
  this->m_PreGameInventory._vptr_CDOTA_UnitInventory = &off_40DCA50;
  if ( !v3 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 28, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_iStartingPosition.m_Value = -1;
  }
  if ( this->m_nPossibleHeroSelection.m_Value != -1 )
  {
    v5 = this->__m_pChainEntity.m_pObj;
    if ( v5 != 0 && (v5->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v5->_vptr_IHandleEntity + 22))(v5, 92, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_nPossibleHeroSelection.m_Value = -1;
  }
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[5].m_szQuestName[116];
  else
    v6 = 0;
  if ( v6 != this->m_iUnreliableGold.m_Value )
  {
    v7 = this->__m_pChainEntity.m_pObj;
    if ( v7 != 0 && (v7->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v7->_vptr_IHandleEntity + 22))(v7, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_iUnreliableGold.m_Value = v6;
  }
}


// CDOTA_PlayerResource::GetTeamDataForPlayer  (line 65, @0x0000000002662e10, libserver.so)  // inlines: Element, IsValidIndex, IsValidTeamPlayerID, operator[]
// calls: CDOTA_PlayerResource::GetTeam
// callers: CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetSentryWardsPlaced, CDOTA_PlayerResource::GetTotalWardsPlaced, CDOTA_PlayerResource::GetNearbyCreepDeaths, CDOTA_PlayerResource::GetCreepsStacked, CDOTA_PlayerResource::GetCampsStacked, CDOTA_PlayerResource::GetRunePickups, CDOTA_PlayerResource::GetNetWorth, CDOTA_PlayerResource::GetCameraTarget, CDOTA_PlayerResource::GetPlayerPreGameInventory, CDOTA_PlayerResource::GetStuns, CDOTA_PlayerResource::GetHealing (90 total)
DataTeamPlayer_t *__fastcall CDOTA_PlayerResource::GetTeamDataForPlayer(
        CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  __int64 v2; // r12
  DataTeamPlayer_t *v3; // rbx
  unsigned int Team; // eax
  CDOTA_DataNonSpectator *v6; // rdx
  __int64 v7; // rax

  v2 = iPlayerID;
  v3 = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    Team = CDOTA_PlayerResource::GetTeam(this, iPlayerID);
    if ( Team <= 0xD )
    {
      v6 = g_pDOTADataTeams[Team];
      if ( v6 != 0 )
      {
        v7 = *(*(this + 98) + 200 * v2 + 124);
        if ( v7 >= 0 && v7 < v6->m_vecDataTeam.m_Vector.m_Size )
          return &v6->m_vecDataTeam.m_Vector.m_Memory.m_pMemory[v7];
      }
    }
  }
  return v3;
}


// CDOTA_PlayerResource::GetTeamDataForPlayer  (line 98, @0x00000000026655f0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
const DataTeamPlayer_t *__fastcall CDOTA_PlayerResource::GetTeamDataForPlayer(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  return CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
}


// CDOTA_PlayerResource::GetReliableGold  (line 105, @0x0000000002663280, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::Buyback
int __fastcall CDOTA_PlayerResource::GetReliableGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iReliableGold.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetUnreliableGold  (line 115, @0x00000000026632a0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetUnreliableGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iUnreliableGold.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetGold  (line 127, @0x00000000026632c0, libserver.so)  // inlines: GetReliableGold, IsValidTeamPlayerID
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTABaseAbility::IsOwnersGoldEnoughForUpgrade, CDOTABaseAbility::IsOwnersGoldEnough, CDOTAGamerules::ClientMsg_SwapRequest, CDOTAGamerules::SwapPlayers, CDOTAGamerules::DistributeAbandonedPlayerGold, CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogMatchSnapshot, CDOTA_PlayerResource::ComputeNetWorth, CDOTAPlayer::HandleHeroSelection, CDOTA_BaseNPC_Hero::GetGold, Playtesting_SwapPlayers, Playtesting_ChangeToRandomHero (17 total)
int __fastcall CDOTA_PlayerResource::GetGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  int v2; // ebx
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  v2 = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
    if ( TeamDataForPlayer != 0 )
      return TeamDataForPlayer->m_iUnreliableGold.m_Value + TeamDataForPlayer->m_iReliableGold.m_Value;
  }
  return v2;
}


// CDOTA_PlayerResource::GetStartingPosition  (line 136, @0x0000000002665600, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetStartingPosition(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iStartingPosition.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetTotalEarnedGold  (line 145, @0x00000000026632f0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGamerules::State_Enter_POST_GAME, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroLevelUp, CDOTA_OGS::LogMatchSnapshot, CDOTASpectatorGraphManager::RecordTeamStats, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients
int __fastcall CDOTA_PlayerResource::GetTotalEarnedGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iTotalEarnedGold.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetTotalEarnedXP  (line 154, @0x00000000026633a0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_CombatLog::GenerateTimedStats, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogMatchSnapshot, CDOTASpectatorGraphManager::RecordTeamStats, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients
int __fastcall CDOTA_PlayerResource::GetTotalEarnedXP(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iTotalEarnedXP.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetSharedGold  (line 164, @0x0000000002665620, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetSharedGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iSharedGold.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetHeroKillGold  (line 173, @0x0000000002665640, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetHeroKillGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iHeroKillGold.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetCreepKillGold  (line 182, @0x0000000002665660, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetCreepKillGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iCreepKillGold.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetIncomeGold  (line 191, @0x0000000002665680, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetIncomeGold(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iIncomeGold.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetDenies  (line 200, @0x0000000002663450, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: DOTAPrintPlayerStatus, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroLevelUp, CDOTA_OGS::LogMatchSnapshot, CDOTA_Tutorial::CalculateScore, CDOTA_BaseNPC_Hero::GetDenies, CDOTAHeroList::DistributeRewardsForKill, CDOTAGCServerSystem::PopulateFantasyStats, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients, CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_PlayerResource::GetDenies(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iDenyCount.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetClaimedMisses  (line 209, @0x0000000002663470, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetClaimedMisses(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iClaimedMissCount.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetClaimedDenies  (line 218, @0x0000000002663490, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetClaimedDenies(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iClaimedDenyCount.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetMisses  (line 227, @0x00000000026634b0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam
int __fastcall CDOTA_PlayerResource::GetMisses(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iMissCount.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetLastHits  (line 236, @0x00000000026634d0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_CombatLog::AddEndGameStatsEvent, CDOTA_CombatLog::GenerateExperimentalTimedStats, CDOTA_CombatLog::AddHealthEvent, CDOTA_CombatLog::DoCombatAnalysis, DOTAPrintPlayerStatus, CDOTA_OGS::LogHeroResults, CDOTASteamWorksGameStatsServer::LogTutorialStats, CDOTA_OGS::LogHeroLevelUp, CDOTA_OGS::LogMatchSnapshot, CDOTA_Tutorial::CalculateScore, CDOTA_BaseNPC_Hero::GetLastHits (24 total)
int __fastcall CDOTA_PlayerResource::GetLastHits(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iLastHitCount.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetLastHitStreak  (line 245, @0x00000000026638c0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetLastHitStreak(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iLastHitStreak.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetLastHitMultikill  (line 254, @0x00000000026638e0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
int __fastcall CDOTA_PlayerResource::GetLastHitMultikill(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iLastHitMultikill.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetBuybackGoldLimitTime  (line 263, @0x00000000026656a0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
float __fastcall CDOTA_PlayerResource::GetBuybackGoldLimitTime(CDOTA_PlayerResource *const this, int nPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_flBuybackGoldLimitTime.m_Value;
  else
    return -1.0;
}


// CDOTA_PlayerResource::GetBuybackCost  (line 272, @0x00000000026656d0, libserver.so)  // inlines: DOTAGameRules, GetCustomBuybackCost, IsValidTeamPlayerID, Max<float>
// calls: CDOTAGamerules::GetGameModeEntity, CDOTA_PlayerResource::GetLevel, CDOTA_PlayerResource::GetTeamDataForPlayer, CDOTAGamerules::GetDOTATime
// callers: CDOTA_BaseNPC_Hero::GetBuybackCost, CDOTA_BaseNPC_Hero::Buyback
int __fastcall CDOTA_PlayerResource::GetBuybackCost(CDOTA_PlayerResource *const this, int nPlayerID)
{
  int result; // eax
  __int64 v3; // rbx
  CDOTAGamerules *v5; // r13
  int Level; // r14d
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float DOTATime; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float flBuybackCostTime; // [rsp+Ch] [rbp-24h]

  result = 0;
  v3 = nPlayerID;
  if ( nPlayerID >= 0 && nPlayerID < *(this + 194) )
  {
    if ( g_pGameRules != 0 )
    {
      if ( CDOTAGamerules::GetGameModeEntity(g_pGameRules) != 0
        && CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bUseCustomBuybackCost.m_Value )
      {
        return *(*(this + 98) + 200 * v3 + 108);
      }
      v5 = g_pGameRules;
    }
    else
    {
      v5 = 0;
    }
    Level = CDOTA_PlayerResource::GetLevel(this, v3);
    TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, v3);
    if ( TeamDataForPlayer != 0 )
      flBuybackCostTime = TeamDataForPlayer->m_flBuybackCostTime.m_Value;
    else
      flBuybackCostTime = 0.0;
    DOTATime = CDOTAGamerules::GetDOTATime(v5, 0, 0, 0.0);
    v9 = 0.0;
    v10 = DOTATime - flBuybackCostTime;
    if ( v10 >= 0.0 )
      v9 = (v10 * 15.0) / 60.0;
    return (v9 + (15 * Level * Level / 10 + 100));
  }
  return result;
}


// CDOTA_PlayerResource::GetCustomBuybackCooldown  (line 291, @0x0000000002663900, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTA_BaseNPC_Hero::SetBuybackCooldownTime
float __fastcall CDOTA_PlayerResource::GetCustomBuybackCooldown(CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float result; // xmm0_4

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  result = 0.0;
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_flCustomBuybackCooldown.m_Value;
  return result;
}


// CDOTA_PlayerResource::GetStuns  (line 300, @0x00000000026631e0, libserver.so)  // inlines: GetTeamDataForPlayer
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGCServerSystem::PopulateFantasyStats
float __fastcall CDOTA_PlayerResource::GetStuns(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float result; // xmm0_4

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  result = 0.0;
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_fStuns.m_Value;
  return result;
}


// CDOTA_PlayerResource::GetHealing  (line 309, @0x0000000002663200, libserver.so)  // inlines: GetTeamDataForPlayer
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
float __fastcall CDOTA_PlayerResource::GetHealing(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  float result; // xmm0_4

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  result = 0.0;
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_fHealing.m_Value;
  return result;
}


// CDOTA_PlayerResource::GetTowerKills  (line 318, @0x0000000002663220, libserver.so)  // inlines: GetTeamDataForPlayer
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: RecordSocialFeedPostGameMatchEvents, CDOTAGCServerSystem::PopulateFantasyStats
int __fastcall CDOTA_PlayerResource::GetTowerKills(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iTowerKills.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetRoshanKills  (line 327, @0x0000000002663250, libserver.so)  // inlines: GetTeamDataForPlayer
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDOTAGCServerSystem::PopulateFantasyStats
int __fastcall CDOTA_PlayerResource::GetRoshanKills(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, iPlayerID);
  if ( TeamDataForPlayer != 0 )
    return TeamDataForPlayer->m_iRoshanKills.m_Value;
  else
    return 0;
}


// CDOTA_PlayerResource::GetOverrideSelectionEntity  (line 336, @0x0000000002665820, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_PlayerResource::GetTeamDataForPlayer
uint32 *__fastcall CDOTA_PlayerResource::GetOverrideSelectionEntity(
        uint32 *a1,
        CDOTA_PlayerResource *const this,
        int nPlayerID)
{
  DataTeamPlayer_t *TeamDataForPlayer; // rax

  TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(this, nPlayerID);
  if ( TeamDataForPlayer != 0 )
  {
    *a1 = TeamDataForPlayer->m_hOverrideSelectionEntity.m_Value.m_Index;
    return a1;
  }
  else
  {
    *a1 = -1;
    return a1;
  }
}


// CDOTA_PlayerResource::GetPlayerColor  (line 347, @0x0000000002665860, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: DOTA_CombatLog_Record::GetColorForName, DrawEstimatedLeadPosition, CDOTA_Item_BootsOfTravel::OnSpellStart, CDOTA_Item_TeleportScroll::OnAbilityPhaseStart
// globals: INVALID_CUSTOM_PLAYER_COLOR, g_PlayerColors
Color __fastcall CDOTA_PlayerResource::GetPlayerColor(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rdx
  Color result; // eax
  __int64 v4; // rdx
  int v5; // eax

  if ( iPlayerID < 0 || iPlayerID >= *(this + 194) )
    return -1;
  v2 = *(this + 98) + 200LL * iPlayerID;
  result = *(v2 + 112);
  if ( result != INVALID_CUSTOM_PLAYER_COLOR )
    return result;
  v4 = *(v2 + 124);
  v5 = *(*(this + 107) + 72LL * iPlayerID + 32);
  if ( v5 != 2 )
  {
    if ( v5 != 3 || v4 > 4 )
      return -1;
    v4 = v4 + 5;
    return g_PlayerColors[v4];
  }
  if ( v4 <= 4 )
    return g_PlayerColors[v4];
  return -1;
}


// CDOTA_PlayerResource::IsEventOwnedForPlayerID  (line 388, @0x00000000026658f0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: IncrementCommunityGoal, CIngameEvent_WM2016::ClientMsg_DoEventPointsTip, CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients, CDOTAGCServerSystem::SendMatchMetadataToClients, CGCClientJobUploadMatchStats::BYieldingRunJob
bool __fastcall CDOTA_PlayerResource::IsEventOwnedForPlayerID(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 150);
  return result;
}


// CDOTA_PlayerResource::GetEventPointsForPlayerID  (line 396, @0x0000000002655fe0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CIngameEvent_Base::GetPlayerCompendiumLevel
uint32 __fastcall CDOTA_PlayerResource::GetEventPointsForPlayerID(CDOTA_PlayerResource *const this, int iPlayerID)
{
  uint32 result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 128);
  return result;
}


// CDOTA_PlayerResource::GetEventLevelForPlayerID  (line 404, @0x0000000002665930, libserver.so)  // inlines: IsValidTeamPlayerID
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition, CDOTAEventDefinition::GetEventPointsLevel
// callers: CDOTA_BaseNPC_Pet::UpdatePetLevel, CEconItemView::ComputeItemCriteria
uint32 __fastcall CDOTA_PlayerResource::GetEventLevelForPlayerID(CDOTA_PlayerResource *const this, int iPlayerID)
{
  __int64 v2; // rbx
  EEvent v4; // r13d
  CDOTAEventSchema *v6; // rax
  const CDOTAEventDefinition *EventDefinition; // rax

  v2 = iPlayerID;
  if ( iPlayerID >= 0
    && iPlayerID < *(this + 194)
    && (v4 = *(this + 248)) != EEvent::EVENT_ID_NONE
    && (v6 = CDOTAEventSchema::Get(), (EventDefinition = CDOTAEventSchema::GetEventDefinition(v6, v4)) != 0) )
  {
    return CDOTAEventDefinition::GetEventPointsLevel(EventDefinition, *(*(this + 98) + 200 * v2 + 128));
  }
  else
  {
    return 0;
  }
}


// CDOTA_PlayerResource::GetEventPremiumPoints  (line 420, @0x0000000002655fb0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CIngameEvent_FM2015::ClientMsg_SetPlayerCoinWager, CIngameEvent_Base::GetPlayerCompendiumCoins, CGCClientJobUploadMatchStats::BYieldingRunJob
uint32 __fastcall CDOTA_PlayerResource::GetEventPremiumPoints(CDOTA_PlayerResource *const this, int iPlayerID)
{
  uint32 result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 132);
  return result;
}


// CDOTA_PlayerResource::GetEventRanks  (line 428, @0x0000000002655f70, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
uint16 __fastcall CDOTA_PlayerResource::GetEventRanks(CDOTA_PlayerResource *const this, int iPlayerID)
{
  uint16 result; // ax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 148);
  return result;
}


// CDOTA_PlayerResource::GetEventWagerTokensRemaining  (line 436, @0x00000000026659c0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CIngameEvent_WM2016::GetWagerSizeAmount, CIngameEvent_WM2016::ClientMsg_SetPlayerCoinWager, CIngameEvent_WM2016::GetAvailableWagerTokens, CIngameEvent_Base::GetPlayerWagerTokensRemaining, CGCClientJobUploadMatchStats::BYieldingRunJob
uint32 __fastcall CDOTA_PlayerResource::GetEventWagerTokensRemaining(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  uint32 result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 136);
  return result;
}


// CDOTA_PlayerResource::GetEventWagerTokensMax  (line 444, @0x00000000026659f0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CIngameEvent_Base::GetPlayerWagerTokensMax, CGCClientJobUploadMatchStats::BYieldingRunJob
uint32 __fastcall CDOTA_PlayerResource::GetEventWagerTokensMax(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  uint32 result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 140);
  return result;
}


// CDOTA_PlayerResource::GetEventEffectsMaskForPlayerID  (line 452, @0x0000000002665a20, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
// callers: CGCClientJobUploadMatchStats::BYieldingRunJob, CEconItemView::ComputeItemCriteria
uint32 __fastcall CDOTA_PlayerResource::GetEventEffectsMaskForPlayerID(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  uint32 result; // eax

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 144);
  return result;
}


// CDOTA_PlayerResource::IsBattleCupVictoryActive  (line 462, @0x0000000002665a50, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator><int>, operator[]
bool __fastcall CDOTA_PlayerResource::IsBattleCupVictoryActive(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 160) != 0;
  return result;
}


// CDOTA_PlayerResource::GetBattleCupVictorySkillLevel  (line 470, @0x0000000002665a90, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
int __fastcall CDOTA_PlayerResource::GetBattleCupVictorySkillLevel(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  int result; // eax

  result = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 168);
  return result;
}


// CDOTA_PlayerResource::GetBattleCupVictoryDivision  (line 478, @0x0000000002665ad0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
int __fastcall CDOTA_PlayerResource::GetBattleCupVictoryDivision(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 180);
  return result;
}


// CDOTA_PlayerResource::GetBattleCupVictoryWinDate  (line 486, @0x0000000002665b10, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
time_t __fastcall CDOTA_PlayerResource::GetBattleCupVictoryWinDate(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  time_t result; // rax

  result = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 160);
  return result;
}


// CDOTA_PlayerResource::GetBattleCupVictoryWinStreak  (line 494, @0x0000000002665b50, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator><int>, operator[]
// callers: CDOTAGamerules::StartCreateHeroStatues
int __fastcall CDOTA_PlayerResource::GetBattleCupVictoryWinStreak(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  LODWORD(v2) = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v3 = *(this + 98) + 200LL * iPlayerID;
    LODWORD(v2) = *(v3 + 156);
    if ( *(v3 + 156) == 0 )
      return *(v3 + 160) != 0;
  }
  return v2;
}


// CDOTA_PlayerResource::GetBattleCupVictoryTeamID  (line 510, @0x0000000002665ba0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
int __fastcall CDOTA_PlayerResource::GetBattleCupVictoryTeamID(const CDOTA_PlayerResource *const this, int iPlayerID)
{
  int result; // eax

  result = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 172);
  return result;
}


// CDOTA_PlayerResource::GetBattleCupVictoryTournamentID  (line 518, @0x0000000002665be0, libserver.so)  // inlines: Element, IsValidTeamPlayerID, operator[]
int __fastcall CDOTA_PlayerResource::GetBattleCupVictoryTournamentID(
        const CDOTA_PlayerResource *const this,
        int iPlayerID)
{
  int result; // eax

  result = -1;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
    return *(*(this + 98) + 200LL * iPlayerID + 176);
  return result;
}


// CDOTA_PlayerResource::GetCourier  (line 528, @0x0000000002665c20, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, IsValidTeamPlayerID, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator[]
// callers: CDOTAPlayer::CheckForSpawningFreeCourier, CDOTA_Bot::ConsiderCourierUsage, CDOTA_Item_Flying_Courier::Think
// globals: CEntityHandle::gm_pEntityList
CDOTA_Unit_Courier *__fastcall CDOTA_PlayerResource::GetCourier(CDOTA_PlayerResource *const this, int iPlayerID)
{
  CDOTA_Unit_Courier *result; // rax
  __int64 v3; // rdx
  int v4; // esi
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  result = 0;
  if ( iPlayerID >= 0 && iPlayerID < *(this + 194) )
  {
    v3 = *(this + 98) + 200LL * iPlayerID;
    result = 0;
    v4 = *(v3 + 152);
    if ( (v4 + 2) > 1 )
    {
      v5 = *(v3 + 152);
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5 & 0x1FF];
        if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
          return v7->m_pInstance;
      }
    }
  }
  return result;
}


// CDOTA_PlayerResource::HasCustomGameTicketForPlayerID  (line 539, @0x0000000002656870, libserver.so)  // inlines: CSteamID, GetLobby, SetFromUint64
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, GDOTAGCClientSystem, CDOTA_PlayerResource::GetSteamID
bool __fastcall CDOTA_PlayerResource::HasCustomGameTicketForPlayerID(CDOTA_PlayerResource *const this, int iPlayerID)
{
  bool result; // al
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rax
  CSteamID steamIDPlayer; // [rsp+0h] [rbp-30h] BYREF

  result = CDOTA_PlayerResource::IsValidTeamPlayer(this, iPlayerID);
  if ( result )
  {
    v5 = *(GDOTAGCClientSystem() + 260);
    result = v5 != 0
          && (steamIDPlayer.m_steamid.m_comp = CDOTA_PlayerResource::GetSteamID(this, iPlayerID),
              (v6 = (*(*v5 + 112LL))(v5, &steamIDPlayer)) != -1)
          && (v7 = (*(*v5 + 136LL))(v5, v6)) != 0
          && *(v7 + 176) > 0;
  }
  return result;
}


