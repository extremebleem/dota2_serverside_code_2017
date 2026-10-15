
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PlayerResourcePlayerTeamData_t::operator=  (line 15, @0x00000000026ba7d0, libserver.so)  // inlines: Get, GetRawColor, NetworkStateChanged, Set, SetRawColor, operator CEntityInstance*, operator=
// calls: PlayerResourcePlayerTeamData_t::NetworkStateChanged, operator!=<CBaseEntity>
// callers: CSchemaUtlVectorManipulator<CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >, PlayerResourcePlayerTeamData_t>::SwapItems, CSchemaClassBinding<PlayerResourcePlayerTeamData_t>::AllocateAndCopyConstruct, CSchemaClassBinding<PlayerResourcePlayerTeamData_t>::Copy, CAtomicManipulator<CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> > >::AllocateAndCopy, CAtomicManipulator<CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> > >::Copy
PlayerResourcePlayerTeamData_t *__fastcall PlayerResourcePlayerTeamData_t::operator=(
        PlayerResourcePlayerTeamData_t *const this,
        __int64 a2)
{
  CEntityInstance *v4; // rax
  int v5; // eax
  CEntityInstance *m_pObj; // rdi
  int v7; // eax
  CEntityInstance *v8; // rdi
  unsigned __int16 v9; // ax
  CEntityInstance *v10; // rdi
  char v11; // al
  CEntityInstance *v12; // rdi
  unsigned __int64 v13; // rax
  CEntityInstance *v14; // rdi
  int v15; // eax
  CEntityInstance *v16; // rdi

  v4 = *(a2 + 8);
  if ( v4 != this->__m_pChainEntity.m_pObj )
    this->__m_pChainEntity.m_pObj = v4;
  this->__m_PathIndex.m_Value = *(a2 + 16);
  if ( this->m_nSelectedHeroID.m_Value != *(a2 + 20) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 20, 0xFFFFFFFFLL, -1);
    this->m_nSelectedHeroID.m_Value = *(a2 + 20);
  }
  if ( this->m_iKills.m_Value != *(a2 + 24) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 24, 0xFFFFFFFFLL, -1);
    this->m_iKills.m_Value = *(a2 + 24);
  }
  if ( this->m_iAssists.m_Value != *(a2 + 28) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 28, 0xFFFFFFFFLL, -1);
    this->m_iAssists.m_Value = *(a2 + 28);
  }
  v5 = *(a2 + 32);
  if ( this->m_iDeaths.m_Value != v5 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 32, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v5 = *(a2 + 32);
    }
    this->m_iDeaths.m_Value = v5;
  }
  if ( this->m_iStreak.m_Value != *(a2 + 36) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 36, 0xFFFFFFFFLL, -1);
    this->m_iStreak.m_Value = *(a2 + 36);
  }
  if ( this->m_iLevel.m_Value != *(a2 + 40) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 40, 0xFFFFFFFFLL, -1);
    this->m_iLevel.m_Value = *(a2 + 40);
  }
  v7 = *(a2 + 44);
  if ( this->m_iRespawnSeconds.m_Value != v7 )
  {
    v8 = this->__m_pChainEntity.m_pObj;
    if ( v8 != 0 && (v8->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v8->_vptr_IHandleEntity + 22))(v8, 44, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v7 = *(a2 + 44);
    }
    this->m_iRespawnSeconds.m_Value = v7;
  }
  if ( this->m_iLastBuybackTime.m_Value != *(a2 + 48) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 48, 0xFFFFFFFFLL, -1);
    this->m_iLastBuybackTime.m_Value = *(a2 + 48);
  }
  if ( operator!=<CBaseEntity>(&this->m_hSelectedHero.m_Value, (a2 + 52)) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 52, 0xFFFFFFFFLL, -1);
    this->m_hSelectedHero.m_Value.m_Index = *(a2 + 52);
  }
  if ( this->m_bAFK.m_Value != *(a2 + 56) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 56, 0xFFFFFFFFLL, -1);
    this->m_bAFK.m_Value = *(a2 + 56);
  }
  *this->m_nSuggestedHeroes.m_Value = *(a2 + 60);
  *&this->m_nSuggestedHeroes.m_Value[2] = *(a2 + 68);
  if ( this->m_bVoiceChatBanned.m_Value != *(a2 + 76) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 76, 0xFFFFFFFFLL, -1);
    this->m_bVoiceChatBanned.m_Value = *(a2 + 76);
  }
  if ( this->m_iTimedRewardDrops.m_Value != *(a2 + 80) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 80, 0xFFFFFFFFLL, -1);
    this->m_iTimedRewardDrops.m_Value = *(a2 + 80);
  }
  if ( this->m_iTimedRewardDropOrigins.m_Value != *(a2 + 84) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 84, 0xFFFFFFFFLL, -1);
    this->m_iTimedRewardDropOrigins.m_Value = *(a2 + 84);
  }
  if ( this->m_iTimedRewardCrates.m_Value != *(a2 + 88) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 88, 0xFFFFFFFFLL, -1);
    this->m_iTimedRewardCrates.m_Value = *(a2 + 88);
  }
  if ( this->m_iTimedRewardEvents.m_Value != *(a2 + 92) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 92, 0xFFFFFFFFLL, -1);
    this->m_iTimedRewardEvents.m_Value = *(a2 + 92);
  }
  v9 = *(a2 + 96);
  if ( this->m_unCompendiumLevel.m_Value != v9 )
  {
    v10 = this->__m_pChainEntity.m_pObj;
    if ( v10 != 0 && (v10->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v10->_vptr_IHandleEntity + 22))(v10, 96, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v9 = *(a2 + 96);
    }
    this->m_unCompendiumLevel.m_Value = v9;
  }
  v11 = *(a2 + 98);
  if ( this->m_bCanRepick.m_Value != v11 )
  {
    v12 = this->__m_pChainEntity.m_pObj;
    if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v12->_vptr_IHandleEntity + 22))(v12, 98, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v11 = *(a2 + 98);
    }
    this->m_bCanRepick.m_Value = v11;
  }
  if ( this->m_bHasRandomed.m_Value != *(a2 + 99) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 99, 0xFFFFFFFFLL, -1);
    this->m_bHasRandomed.m_Value = *(a2 + 99);
  }
  if ( this->m_nRandomedHeroID.m_Value != *(a2 + 100) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 100, 0xFFFFFFFFLL, -1);
    this->m_nRandomedHeroID.m_Value = *(a2 + 100);
  }
  if ( this->m_bBattleBonusActive.m_Value != *(a2 + 104) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 104, 0xFFFFFFFFLL, -1);
    this->m_bBattleBonusActive.m_Value = *(a2 + 104);
  }
  if ( this->m_iBattleBonusRate.m_Value != *(a2 + 106) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 106, 0xFFFFFFFFLL, -1);
    this->m_iBattleBonusRate.m_Value = *(a2 + 106);
  }
  if ( this->m_iCustomBuybackCost.m_Value != *(a2 + 108) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 108, 0xFFFFFFFFLL, -1);
    this->m_iCustomBuybackCost.m_Value = *(a2 + 108);
  }
  if ( *&this->m_CustomPlayerColor != *(a2 + 112) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 112, 0xFFFFFFFFLL, -1);
    this->m_CustomPlayerColor = *(a2 + 112);
  }
  if ( this->m_bQualifiesForPAContractReward.m_Value != *(a2 + 116) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 116, 0xFFFFFFFFLL, -1);
    this->m_bQualifiesForPAContractReward.m_Value = *(a2 + 116);
  }
  if ( this->m_bHasPredictedVictory.m_Value != *(a2 + 117) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 117, 0xFFFFFFFFLL, -1);
    this->m_bHasPredictedVictory.m_Value = *(a2 + 117);
  }
  if ( this->m_UnitShareMasks.m_Value != *(a2 + 120) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 120, 0xFFFFFFFFLL, -1);
    this->m_UnitShareMasks.m_Value = *(a2 + 120);
  }
  if ( this->m_iTeamSlot.m_Value != *(a2 + 124) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 124, 0xFFFFFFFFLL, -1);
    this->m_iTeamSlot.m_Value = *(a2 + 124);
  }
  if ( this->m_iEventPoints.m_Value != *(a2 + 128) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 128, 0xFFFFFFFFLL, -1);
    this->m_iEventPoints.m_Value = *(a2 + 128);
  }
  if ( this->m_iEventPremiumPoints.m_Value != *(a2 + 132) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 132, 0xFFFFFFFFLL, -1);
    this->m_iEventPremiumPoints.m_Value = *(a2 + 132);
  }
  if ( this->m_iEventWagerTokensRemaining.m_Value != *(a2 + 136) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 136, 0xFFFFFFFFLL, -1);
    this->m_iEventWagerTokensRemaining.m_Value = *(a2 + 136);
  }
  if ( this->m_iEventWagerTokensMax.m_Value != *(a2 + 140) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 140, 0xFFFFFFFFLL, -1);
    this->m_iEventWagerTokensMax.m_Value = *(a2 + 140);
  }
  if ( this->m_iEventEffectsMask.m_Value != *(a2 + 144) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 144, 0xFFFFFFFFLL, -1);
    this->m_iEventEffectsMask.m_Value = *(a2 + 144);
  }
  if ( this->m_iEventRanks.m_Value != *(a2 + 148) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 148, 0xFFFFFFFFLL, -1);
    this->m_iEventRanks.m_Value = *(a2 + 148);
  }
  if ( this->m_bIsEventOwned.m_Value != *(a2 + 150) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 150, 0xFFFFFFFFLL, -1);
    this->m_bIsEventOwned.m_Value = *(a2 + 150);
  }
  if ( operator!=<CBaseEntity>(&this->m_hCourier.m_Value, (a2 + 152)) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 152, 0xFFFFFFFFLL, -1);
    this->m_hCourier.m_Value.m_Index = *(a2 + 152);
  }
  if ( this->m_iBattleCupWinStreak.m_Value != *(a2 + 156) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 156, 0xFFFFFFFFLL, -1);
    this->m_iBattleCupWinStreak.m_Value = *(a2 + 156);
  }
  v13 = *(a2 + 160);
  if ( this->m_iBattleCupWinDate.m_Value != v13 )
  {
    v14 = this->__m_pChainEntity.m_pObj;
    if ( v14 != 0 && (v14->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v14->_vptr_IHandleEntity + 22))(v14, 160, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v13 = *(a2 + 160);
    }
    this->m_iBattleCupWinDate.m_Value = v13;
  }
  if ( this->m_iBattleCupSkillLevel.m_Value != *(a2 + 168) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 168, 0xFFFFFFFFLL, -1);
    this->m_iBattleCupSkillLevel.m_Value = *(a2 + 168);
  }
  if ( this->m_iBattleCupTeamID.m_Value != *(a2 + 172) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 172, 0xFFFFFFFFLL, -1);
    this->m_iBattleCupTeamID.m_Value = *(a2 + 172);
  }
  if ( this->m_iBattleCupTournamentID.m_Value != *(a2 + 176) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 176, 0xFFFFFFFFLL, -1);
    this->m_iBattleCupTournamentID.m_Value = *(a2 + 176);
  }
  if ( this->m_iBattleCupDivision.m_Value != *(a2 + 180) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 180, 0xFFFFFFFFLL, -1);
    this->m_iBattleCupDivision.m_Value = *(a2 + 180);
  }
  if ( this->m_flTeamFightParticipation.m_Value != *(a2 + 184) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 184, 0xFFFFFFFFLL, -1);
    this->m_flTeamFightParticipation.m_Value = *(a2 + 184);
  }
  if ( this->m_iFirstBloodClaimed.m_Value != *(a2 + 188) )
  {
    PlayerResourcePlayerTeamData_t::NetworkStateChanged(this, 188, 0xFFFFFFFFLL, -1);
    this->m_iFirstBloodClaimed.m_Value = *(a2 + 188);
  }
  v15 = *(a2 + 192);
  if ( this->m_iFirstBloodGiven.m_Value != v15 )
  {
    v16 = this->__m_pChainEntity.m_pObj;
    if ( v16 != 0 && (v16->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v16->_vptr_IHandleEntity + 22))(v16, 192, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v15 = *(a2 + 192);
    }
    this->m_iFirstBloodGiven.m_Value = v15;
  }
  return this;
}


// PlayerResourcePlayerTeamData_t::Schema_DynamicBinding  (line 18, @0x000000000269ceb0, libserver.so)
// globals: PlayerResourcePlayerTeamData_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall PlayerResourcePlayerTeamData_t::Schema_DynamicBinding(
        const PlayerResourcePlayerTeamData_t *const this)
{
  return PlayerResourcePlayerTeamData_t::s_pSchemaBinding;
}


// PlayerResourcePlayerTeamData_t::NetworkStateChanged  (line 19, @0x00000000026a84c0, libserver.so)  // inlines: Get, operator CEntityInstance*
// callers: CDOTA_PlayerResource::LoadSaveGameInformation, CDOTA_PlayerResource::UpdateTeamSlot, PlayerResourcePlayerTeamData_t::operator=
void __fastcall PlayerResourcePlayerTeamData_t::NetworkStateChanged(
        PlayerResourcePlayerTeamData_t *const this,
        __int64 nLocalOffset,
        __int64 nArrayIndex,
        int16 a4)
{
  CEntityInstance *m_pObj; // rax
  ChangeAccessorFieldPathIndex_t *p_nPathIndexa; // rcx
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // rdi
  ChangeAccessorFieldPathIndex_t nPathIndexa; // [rsp+0h] [rbp-10h] BYREF

  m_pObj = this->__m_pChainEntity.m_pObj;
  nPathIndexa.m_Value = a4;
  if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
  {
    p_nPathIndexa = &nPathIndexa;
    p_m_PathIndex = &this->__m_PathIndex;
    if ( nPathIndexa.m_Value == -1 )
      p_nPathIndexa = p_m_PathIndex;
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, nLocalOffset, nArrayIndex, p_nPathIndexa->m_Value);
  }
}


// PlayerResourcePlayerData_t::operator=  (line 78, @0x00000000026ba290, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// callers: CSchemaUtlVectorManipulator<CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >, PlayerResourcePlayerData_t>::SwapItems, CSchemaClassBinding<PlayerResourcePlayerData_t>::AllocateAndCopyConstruct, CSchemaClassBinding<PlayerResourcePlayerData_t>::Copy, CAtomicManipulator<CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> > >::AllocateAndCopy, CAtomicManipulator<CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> > >::Copy
PlayerResourcePlayerData_t *__fastcall PlayerResourcePlayerData_t::operator=(
        PlayerResourcePlayerData_t *const this,
        __int64 a2)
{
  CEntityInstance *v4; // rax
  int16 v5; // cx
  char v6; // al
  CEntityInstance *m_pObj; // rdi
  UtlSymLargeId_t v8; // rax
  int v9; // eax
  CEntityInstance *v10; // rdi
  char v11; // al
  CEntityInstance *v12; // rdi
  char v13; // al
  CEntityInstance *v14; // rdi
  char v15; // al
  CEntityInstance *v16; // rdi
  unsigned int v17; // eax
  CEntityInstance *v18; // rdi
  unsigned int v19; // eax
  CEntityInstance *v20; // rdi
  char v21; // al
  CEntityInstance *v22; // rdi
  int v23; // eax
  CEntityInstance *v24; // rdi
  unsigned __int64 v25; // rax
  CEntityInstance *v26; // rdi
  DOTATeam_t v27; // eax
  CEntityInstance *v28; // rdi
  CEntityInstance *v30; // rdi

  v4 = *(a2 + 8);
  if ( v4 != this->__m_pChainEntity.m_pObj )
    this->__m_pChainEntity.m_pObj = v4;
  v5 = *(a2 + 16);
  this->__m_PathIndex.m_Value = v5;
  v6 = *(a2 + 18);
  if ( this->m_bIsValid.m_Value != v6 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v5 != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 18, 0xFFFFFFFFLL);
      v6 = *(a2 + 18);
    }
    this->m_bIsValid.m_Value = v6;
  }
  v8 = *(a2 + 24);
  if ( this->m_iszPlayerName.m_Value.u.m_Id != v8 )
  {
    v30 = this->__m_pChainEntity.m_pObj;
    if ( v30 != 0 && (v30->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v30->_vptr_IHandleEntity + 22))(v30, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v8 = *(a2 + 24);
    }
    this->m_iszPlayerName.m_Value.u.m_Id = v8;
  }
  v9 = *(a2 + 32);
  if ( this->m_iPlayerTeam.m_Value != v9 )
  {
    v10 = this->__m_pChainEntity.m_pObj;
    if ( v10 != 0 && (v10->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v10->_vptr_IHandleEntity + 22))(v10, 32, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v9 = *(a2 + 32);
    }
    this->m_iPlayerTeam.m_Value = v9;
  }
  v11 = *(a2 + 36);
  if ( this->m_bFullyJoinedServer.m_Value != v11 )
  {
    v12 = this->__m_pChainEntity.m_pObj;
    if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v12->_vptr_IHandleEntity + 22))(v12, 36, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v11 = *(a2 + 36);
    }
    this->m_bFullyJoinedServer.m_Value = v11;
  }
  v13 = *(a2 + 37);
  if ( this->m_bFakeClient.m_Value != v13 )
  {
    v14 = this->__m_pChainEntity.m_pObj;
    if ( v14 != 0 && (v14->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v14->_vptr_IHandleEntity + 22))(v14, 37, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v13 = *(a2 + 37);
    }
    this->m_bFakeClient.m_Value = v13;
  }
  v15 = *(a2 + 38);
  if ( this->m_bIsBroadcaster.m_Value != v15 )
  {
    v16 = this->__m_pChainEntity.m_pObj;
    if ( v16 != 0 && (v16->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v16->_vptr_IHandleEntity + 22))(v16, 38, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v15 = *(a2 + 38);
    }
    this->m_bIsBroadcaster.m_Value = v15;
  }
  v17 = *(a2 + 40);
  if ( this->m_iBroadcasterChannel.m_Value != v17 )
  {
    v18 = this->__m_pChainEntity.m_pObj;
    if ( v18 != 0 && (v18->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v18->_vptr_IHandleEntity + 22))(v18, 40, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v17 = *(a2 + 40);
    }
    this->m_iBroadcasterChannel.m_Value = v17;
  }
  v19 = *(a2 + 44);
  if ( this->m_iBroadcasterChannelSlot.m_Value != v19 )
  {
    v20 = this->__m_pChainEntity.m_pObj;
    if ( v20 != 0 && (v20->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v20->_vptr_IHandleEntity + 22))(v20, 44, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v19 = *(a2 + 44);
    }
    this->m_iBroadcasterChannelSlot.m_Value = v19;
  }
  v21 = *(a2 + 48);
  if ( this->m_bIsBroadcasterChannelCameraman.m_Value != v21 )
  {
    v22 = this->__m_pChainEntity.m_pObj;
    if ( v22 != 0 && (v22->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v22->_vptr_IHandleEntity + 22))(v22, 48, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v21 = *(a2 + 48);
    }
    this->m_bIsBroadcasterChannelCameraman.m_Value = v21;
  }
  v23 = *(a2 + 52);
  if ( this->m_iConnectionState.m_Value != v23 )
  {
    v24 = this->__m_pChainEntity.m_pObj;
    if ( v24 != 0 && (v24->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v24->_vptr_IHandleEntity + 22))(v24, 52, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v23 = *(a2 + 52);
    }
    this->m_iConnectionState.m_Value = v23;
  }
  v25 = *(a2 + 56);
  if ( this->m_iPlayerSteamID.m_Value != v25 )
  {
    v26 = this->__m_pChainEntity.m_pObj;
    if ( v26 != 0 && (v26->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v26->_vptr_IHandleEntity + 22))(v26, 56, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v25 = *(a2 + 56);
    }
    this->m_iPlayerSteamID.m_Value = v25;
  }
  v27 = *(a2 + 64);
  if ( this->m_eCoachTeam.m_Value != v27 )
  {
    v28 = this->__m_pChainEntity.m_pObj;
    if ( v28 != 0 && (v28->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v28->_vptr_IHandleEntity + 22))(v28, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v27 = *(a2 + 64);
    }
    this->m_eCoachTeam.m_Value = v27;
  }
  return this;
}


// PlayerResourcePlayerData_t::Schema_DynamicBinding  (line 81, @0x000000000269cec0, libserver.so)
// globals: PlayerResourcePlayerData_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall PlayerResourcePlayerData_t::Schema_DynamicBinding(
        const PlayerResourcePlayerData_t *const this)
{
  return PlayerResourcePlayerData_t::s_pSchemaBinding;
}


// PlayerResourceBroadcasterData_t::Schema_DynamicBinding  (line 106, @0x000000000269ced0, libserver.so)
// globals: PlayerResourceBroadcasterData_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall PlayerResourceBroadcasterData_t::Schema_DynamicBinding(
        const PlayerResourceBroadcasterData_t *const this)
{
  return PlayerResourceBroadcasterData_t::s_pSchemaBinding;
}


// DataTeamPlayer_t::operator=  (line 122, @0x0000000002591660, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator[]
// calls: operator!=<CBaseEntity>, CUtlVectorBase<sSharedCooldownInfo, CUtlMemory<sSharedCooldownInfo, int> >::SetCount, CUtlString::operator=, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::SetCount, DataTeamPlayer_t::NetworkStateChanged
// callers: CSchemaUtlVectorManipulator<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >, DataTeamPlayer_t>::SwapItems, CAtomicManipulator<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> > >::AllocateAndCopy, CAtomicManipulator<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> > >::Copy, CSchemaClassBinding<DataTeamPlayer_t>::AllocateAndCopyConstruct, CSchemaClassBinding<DataTeamPlayer_t>::Copy
DataTeamPlayer_t *__fastcall DataTeamPlayer_t::operator=(DataTeamPlayer_t *const this, __int64 a2)
{
  CEntityInstance *v4; // rax
  int16 v5; // cx
  int v6; // eax
  CEntityInstance *m_pObj; // rdi
  int v8; // eax
  CEntityInstance *v9; // rdi
  int v10; // eax
  CEntityInstance *v11; // rdi
  int v12; // eax
  CEntityInstance *v13; // rdi
  int v14; // eax
  CEntityInstance *v15; // rdi
  int v16; // eax
  CEntityInstance *v17; // rdi
  int v18; // eax
  CEntityInstance *v19; // rdi
  int v20; // eax
  CEntityInstance *v21; // rdi
  int v22; // eax
  CEntityInstance *v23; // rdi
  int v24; // eax
  CEntityInstance *v25; // rdi
  int v26; // eax
  CEntityInstance *v27; // rdi
  int v28; // eax
  CEntityInstance *v29; // rdi
  int v30; // eax
  CEntityInstance *v31; // rdi
  int v32; // eax
  CEntityInstance *v33; // rdi
  int v34; // eax
  CEntityInstance *v35; // rdi
  int v36; // eax
  CEntityInstance *v37; // rdi
  int v38; // eax
  CEntityInstance *v39; // rdi
  int v40; // eax
  CEntityInstance *v41; // rdi
  int v42; // eax
  CEntityInstance *v43; // rdi
  unsigned __int16 v44; // ax
  CEntityInstance *v45; // rdi
  unsigned __int16 v46; // ax
  CEntityInstance *v47; // rdi
  unsigned __int16 v48; // ax
  CEntityInstance *v49; // rdi
  int v50; // eax
  CEntityInstance *v51; // rdi
  int v52; // eax
  CEntityInstance *v53; // rdi
  int v54; // eax
  CEntityInstance *v55; // rdi
  int v56; // eax
  CEntityInstance *v57; // rdi
  int v58; // eax
  CEntityInstance *v59; // rdi
  int v60; // eax
  CEntityInstance *v61; // rdi
  int v62; // eax
  CEntityInstance *v63; // rdi
  int v64; // eax
  CEntityInstance *v65; // rdi
  int v66; // eax
  CEntityInstance *v67; // rdi
  int v68; // eax
  CEntityInstance *v69; // rdi
  int v70; // eax
  CEntityInstance *v71; // rdi
  int v72; // r15d
  __int64 v73; // r13
  __int64 v74; // r15
  __int64 v75; // r14
  __int64 v76; // r15
  CUtlString *v77; // r14
  __int64 i; // rax
  int v79; // r13d
  unsigned __int64 v80; // rax
  int v81; // r13d
  unsigned __int64 v82; // rax
  __int64 v84; // [rsp+8h] [rbp-38h]

  v4 = *(a2 + 8);
  if ( v4 != this->__m_pChainEntity.m_pObj )
    this->__m_pChainEntity.m_pObj = v4;
  v5 = *(a2 + 16);
  this->__m_PathIndex.m_Value = v5;
  v6 = *(a2 + 20);
  if ( this->m_iReliableGold.m_Value != v6 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v5 != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 20, 0xFFFFFFFFLL);
      v6 = *(a2 + 20);
    }
    this->m_iReliableGold.m_Value = v6;
  }
  v8 = *(a2 + 24);
  if ( this->m_iUnreliableGold.m_Value != v8 )
  {
    v9 = this->__m_pChainEntity.m_pObj;
    if ( v9 != 0 && (v9->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v9->_vptr_IHandleEntity + 22))(v9, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v8 = *(a2 + 24);
    }
    this->m_iUnreliableGold.m_Value = v8;
  }
  v10 = *(a2 + 28);
  if ( this->m_iStartingPosition.m_Value != v10 )
  {
    v11 = this->__m_pChainEntity.m_pObj;
    if ( v11 != 0 && (v11->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v11->_vptr_IHandleEntity + 22))(v11, 28, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v10 = *(a2 + 28);
    }
    this->m_iStartingPosition.m_Value = v10;
  }
  v12 = *(a2 + 32);
  if ( this->m_iTotalEarnedGold.m_Value != v12 )
  {
    v13 = this->__m_pChainEntity.m_pObj;
    if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v13->_vptr_IHandleEntity + 22))(v13, 32, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v12 = *(a2 + 32);
    }
    this->m_iTotalEarnedGold.m_Value = v12;
  }
  v14 = *(a2 + 36);
  if ( this->m_iTotalEarnedXP.m_Value != v14 )
  {
    v15 = this->__m_pChainEntity.m_pObj;
    if ( v15 != 0 && (v15->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v15->_vptr_IHandleEntity + 22))(v15, 36, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v14 = *(a2 + 36);
    }
    this->m_iTotalEarnedXP.m_Value = v14;
  }
  v16 = *(a2 + 40);
  if ( this->m_iSharedGold.m_Value != v16 )
  {
    v17 = this->__m_pChainEntity.m_pObj;
    if ( v17 != 0 && (v17->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 40, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v16 = *(a2 + 40);
    }
    this->m_iSharedGold.m_Value = v16;
  }
  v18 = *(a2 + 44);
  if ( this->m_iHeroKillGold.m_Value != v18 )
  {
    v19 = this->__m_pChainEntity.m_pObj;
    if ( v19 != 0 && (v19->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v19->_vptr_IHandleEntity + 22))(v19, 44, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v18 = *(a2 + 44);
    }
    this->m_iHeroKillGold.m_Value = v18;
  }
  v20 = *(a2 + 48);
  if ( this->m_iCreepKillGold.m_Value != v20 )
  {
    v21 = this->__m_pChainEntity.m_pObj;
    if ( v21 != 0 && (v21->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v21->_vptr_IHandleEntity + 22))(v21, 48, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v20 = *(a2 + 48);
    }
    this->m_iCreepKillGold.m_Value = v20;
  }
  v22 = *(a2 + 52);
  if ( this->m_iIncomeGold.m_Value != v22 )
  {
    v23 = this->__m_pChainEntity.m_pObj;
    if ( v23 != 0 && (v23->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 52, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v22 = *(a2 + 52);
    }
    this->m_iIncomeGold.m_Value = v22;
  }
  v24 = *(a2 + 56);
  if ( this->m_iNetWorth.m_Value != v24 )
  {
    v25 = this->__m_pChainEntity.m_pObj;
    if ( v25 != 0 && (v25->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v25->_vptr_IHandleEntity + 22))(v25, 56, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v24 = *(a2 + 56);
    }
    this->m_iNetWorth.m_Value = v24;
  }
  v26 = *(a2 + 60);
  if ( this->m_iDenyCount.m_Value != v26 )
  {
    v27 = this->__m_pChainEntity.m_pObj;
    if ( v27 != 0 && (v27->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v27->_vptr_IHandleEntity + 22))(v27, 60, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v26 = *(a2 + 60);
    }
    this->m_iDenyCount.m_Value = v26;
  }
  v28 = *(a2 + 64);
  if ( this->m_iLastHitCount.m_Value != v28 )
  {
    v29 = this->__m_pChainEntity.m_pObj;
    if ( v29 != 0 && (v29->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v29->_vptr_IHandleEntity + 22))(v29, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v28 = *(a2 + 64);
    }
    this->m_iLastHitCount.m_Value = v28;
  }
  v30 = *(a2 + 68);
  if ( this->m_iLastHitStreak.m_Value != v30 )
  {
    v31 = this->__m_pChainEntity.m_pObj;
    if ( v31 != 0 && (v31->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v31->_vptr_IHandleEntity + 22))(v31, 68, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v30 = *(a2 + 68);
    }
    this->m_iLastHitStreak.m_Value = v30;
  }
  v32 = *(a2 + 72);
  if ( this->m_iLastHitMultikill.m_Value != v32 )
  {
    v33 = this->__m_pChainEntity.m_pObj;
    if ( v33 != 0 && (v33->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v33->_vptr_IHandleEntity + 22))(v33, 72, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v32 = *(a2 + 72);
    }
    this->m_iLastHitMultikill.m_Value = v32;
  }
  v34 = *(a2 + 76);
  if ( this->m_iNearbyCreepDeathCount.m_Value != v34 )
  {
    v35 = this->__m_pChainEntity.m_pObj;
    if ( v35 != 0 && (v35->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v35->_vptr_IHandleEntity + 22))(v35, 76, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v34 = *(a2 + 76);
    }
    this->m_iNearbyCreepDeathCount.m_Value = v34;
  }
  v36 = *(a2 + 80);
  if ( this->m_iClaimedDenyCount.m_Value != v36 )
  {
    v37 = this->__m_pChainEntity.m_pObj;
    if ( v37 != 0 && (v37->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v37->_vptr_IHandleEntity + 22))(v37, 80, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v36 = *(a2 + 80);
    }
    this->m_iClaimedDenyCount.m_Value = v36;
  }
  v38 = *(a2 + 84);
  if ( this->m_iClaimedMissCount.m_Value != v38 )
  {
    v39 = this->__m_pChainEntity.m_pObj;
    if ( v39 != 0 && (v39->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v39->_vptr_IHandleEntity + 22))(v39, 84, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v38 = *(a2 + 84);
    }
    this->m_iClaimedMissCount.m_Value = v38;
  }
  v40 = *(a2 + 88);
  if ( this->m_iMissCount.m_Value != v40 )
  {
    v41 = this->__m_pChainEntity.m_pObj;
    if ( v41 != 0 && (v41->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v41->_vptr_IHandleEntity + 22))(v41, 88, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v40 = *(a2 + 88);
    }
    this->m_iMissCount.m_Value = v40;
  }
  v42 = *(a2 + 92);
  if ( this->m_nPossibleHeroSelection.m_Value != v42 )
  {
    v43 = this->__m_pChainEntity.m_pObj;
    if ( v43 != 0 && (v43->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v43->_vptr_IHandleEntity + 22))(v43, 92, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v42 = *(a2 + 92);
    }
    this->m_nPossibleHeroSelection.m_Value = v42;
  }
  v44 = *(a2 + 96);
  if ( this->m_iMetaLevel.m_Value != v44 )
  {
    v45 = this->__m_pChainEntity.m_pObj;
    if ( v45 != 0 && (v45->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v45->_vptr_IHandleEntity + 22))(v45, 96, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v44 = *(a2 + 96);
    }
    this->m_iMetaLevel.m_Value = v44;
  }
  v46 = *(a2 + 98);
  if ( this->m_iMetaExperience.m_Value != v46 )
  {
    v47 = this->__m_pChainEntity.m_pObj;
    if ( v47 != 0 && (v47->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v47->_vptr_IHandleEntity + 22))(v47, 98, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v46 = *(a2 + 98);
    }
    this->m_iMetaExperience.m_Value = v46;
  }
  v48 = *(a2 + 100);
  if ( this->m_iMetaExperienceAwarded.m_Value != v48 )
  {
    v49 = this->__m_pChainEntity.m_pObj;
    if ( v49 != 0 && (v49->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v49->_vptr_IHandleEntity + 22))(v49, 100, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v48 = *(a2 + 100);
    }
    this->m_iMetaExperienceAwarded.m_Value = v48;
  }
  if ( this->m_flBuybackCooldownTime.m_Value != *(a2 + 104) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 104, 0xFFFFFFFFLL, -1);
    this->m_flBuybackCooldownTime.m_Value = *(a2 + 104);
  }
  if ( this->m_flBuybackGoldLimitTime.m_Value != *(a2 + 108) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 108, 0xFFFFFFFFLL, -1);
    this->m_flBuybackGoldLimitTime.m_Value = *(a2 + 108);
  }
  if ( this->m_flBuybackCostTime.m_Value != *(a2 + 112) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 112, 0xFFFFFFFFLL, -1);
    this->m_flBuybackCostTime.m_Value = *(a2 + 112);
  }
  if ( this->m_flCustomBuybackCooldown.m_Value != *(a2 + 116) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 116, 0xFFFFFFFFLL, -1);
    this->m_flCustomBuybackCooldown.m_Value = *(a2 + 116);
  }
  if ( this->m_fStuns.m_Value != *(a2 + 120) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 120, 0xFFFFFFFFLL, -1);
    this->m_fStuns.m_Value = *(a2 + 120);
  }
  if ( this->m_fHealing.m_Value != *(a2 + 124) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 124, 0xFFFFFFFFLL, -1);
    this->m_fHealing.m_Value = *(a2 + 124);
  }
  v50 = *(a2 + 128);
  if ( this->m_iTowerKills.m_Value != v50 )
  {
    v51 = this->__m_pChainEntity.m_pObj;
    if ( v51 != 0 && (v51->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v51->_vptr_IHandleEntity + 22))(v51, 128, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v50 = *(a2 + 128);
    }
    this->m_iTowerKills.m_Value = v50;
  }
  v52 = *(a2 + 132);
  if ( this->m_iRoshanKills.m_Value != v52 )
  {
    v53 = this->__m_pChainEntity.m_pObj;
    if ( v53 != 0 && (v53->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v53->_vptr_IHandleEntity + 22))(v53, 132, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v52 = *(a2 + 132);
    }
    this->m_iRoshanKills.m_Value = v52;
  }
  if ( operator!=<CBaseEntity>(&this->m_hCameraTarget.m_Value, (a2 + 136)) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 136, 0xFFFFFFFFLL, -1);
    this->m_hCameraTarget.m_Value.m_Index = *(a2 + 136);
  }
  if ( operator!=<CBaseEntity>(&this->m_hOverrideSelectionEntity.m_Value, (a2 + 140)) )
  {
    DataTeamPlayer_t::NetworkStateChanged(this, 140, 0xFFFFFFFFLL, -1);
    this->m_hOverrideSelectionEntity.m_Value.m_Index = *(a2 + 140);
  }
  v54 = *(a2 + 144);
  if ( this->m_iObserverWardsPlaced.m_Value != v54 )
  {
    v55 = this->__m_pChainEntity.m_pObj;
    if ( v55 != 0 && (v55->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v55->_vptr_IHandleEntity + 22))(v55, 144, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v54 = *(a2 + 144);
    }
    this->m_iObserverWardsPlaced.m_Value = v54;
  }
  v56 = *(a2 + 148);
  if ( this->m_iSentryWardsPlaced.m_Value != v56 )
  {
    v57 = this->__m_pChainEntity.m_pObj;
    if ( v57 != 0 && (v57->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v57->_vptr_IHandleEntity + 22))(v57, 148, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v56 = *(a2 + 148);
    }
    this->m_iSentryWardsPlaced.m_Value = v56;
  }
  v58 = *(a2 + 152);
  if ( this->m_iCreepsStacked.m_Value != v58 )
  {
    v59 = this->__m_pChainEntity.m_pObj;
    if ( v59 != 0 && (v59->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v59->_vptr_IHandleEntity + 22))(v59, 152, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v58 = *(a2 + 152);
    }
    this->m_iCreepsStacked.m_Value = v58;
  }
  v60 = *(a2 + 156);
  if ( this->m_iCampsStacked.m_Value != v60 )
  {
    v61 = this->__m_pChainEntity.m_pObj;
    if ( v61 != 0 && (v61->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v61->_vptr_IHandleEntity + 22))(v61, 156, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v60 = *(a2 + 156);
    }
    this->m_iCampsStacked.m_Value = v60;
  }
  v62 = *(a2 + 160);
  if ( this->m_iRunePickups.m_Value != v62 )
  {
    v63 = this->__m_pChainEntity.m_pObj;
    if ( v63 != 0 && (v63->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v63->_vptr_IHandleEntity + 22))(v63, 160, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v62 = *(a2 + 160);
    }
    this->m_iRunePickups.m_Value = v62;
  }
  v64 = *(a2 + 164);
  if ( this->m_iGoldSpentOnSupport.m_Value != v64 )
  {
    v65 = this->__m_pChainEntity.m_pObj;
    if ( v65 != 0 && (v65->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v65->_vptr_IHandleEntity + 22))(v65, 164, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v64 = *(a2 + 164);
    }
    this->m_iGoldSpentOnSupport.m_Value = v64;
  }
  v66 = *(a2 + 168);
  if ( this->m_iHeroDamage.m_Value != v66 )
  {
    v67 = this->__m_pChainEntity.m_pObj;
    if ( v67 != 0 && (v67->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v67->_vptr_IHandleEntity + 22))(v67, 168, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v66 = *(a2 + 168);
    }
    this->m_iHeroDamage.m_Value = v66;
  }
  v68 = *(a2 + 172);
  if ( this->m_iWardsPurchased.m_Value != v68 )
  {
    v69 = this->__m_pChainEntity.m_pObj;
    if ( v69 != 0 && (v69->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v69->_vptr_IHandleEntity + 22))(v69, 172, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v68 = *(a2 + 172);
    }
    this->m_iWardsPurchased.m_Value = v68;
  }
  v70 = *(a2 + 176);
  if ( this->m_iWardsDestroyed.m_Value != v70 )
  {
    v71 = this->__m_pChainEntity.m_pObj;
    if ( v71 != 0 && (v71->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v71->_vptr_IHandleEntity + 22))(v71, 176, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v70 = *(a2 + 176);
    }
    this->m_iWardsDestroyed.m_Value = v70;
  }
  if ( &this->m_PreGameInventory.m_SharedCooldownList != (a2 + 192) )
  {
    v72 = *(a2 + 192);
    CUtlVectorBase<sSharedCooldownInfo,CUtlMemory<sSharedCooldownInfo,int>>::SetCount(
      &this->m_PreGameInventory.m_SharedCooldownList,
      v72);
    if ( v72 > 0 )
    {
      v73 = 0;
      v84 = 16 * ((v72 - 1) + 1LL);
      do
      {
        v74 = v73;
        v75 = v73;
        v73 += 16;
        v76 = *(a2 + 200) + v74;
        v77 = (&this->m_PreGameInventory.m_SharedCooldownList.m_Memory.m_pMemory->cooldownName + v75);
        CUtlString::operator=(v77, v76);
        LODWORD(v77[1].m_pString) = *(v76 + 8);
        HIDWORD(v77[1].m_pString) = *(v76 + 12);
      }
      while ( v73 != v84 );
    }
  }
  for ( i = 0; i != 17; ++i )
    this->m_PreGameInventory.m_hItems.m_Value[i].m_Index = *(a2 + 216 + i * 4);
  *this->m_PreGameInventory.m_bItemQueried = *(a2 + 284);
  *&this->m_PreGameInventory.m_bItemQueried[8] = *(a2 + 292);
  this->m_PreGameInventory.m_bItemQueried[16] = *(a2 + 300);
  if ( this->m_PreGameInventory.m_iParity.m_Value != *(a2 + 304) )
  {
    (*(this->m_PreGameInventory._vptr_CDOTA_UnitInventory + 2))(
      &this->m_PreGameInventory,
      120,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_PreGameInventory.m_iParity.m_Value = *(a2 + 304);
  }
  if ( operator!=<CBaseEntity>(&this->m_PreGameInventory.m_hInventoryParent.m_Value, (a2 + 308)) )
  {
    (*(this->m_PreGameInventory._vptr_CDOTA_UnitInventory + 2))(
      &this->m_PreGameInventory,
      124,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_PreGameInventory.m_hInventoryParent.m_Value.m_Index = *(a2 + 308);
  }
  this->m_PreGameInventory.m_bIsActive = *(a2 + 312);
  if ( this->m_PreGameInventory.m_bStashEnabled.m_Value != *(a2 + 313) )
  {
    (*(this->m_PreGameInventory._vptr_CDOTA_UnitInventory + 2))(
      &this->m_PreGameInventory,
      129,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_PreGameInventory.m_bStashEnabled.m_Value = *(a2 + 313);
  }
  if ( operator!=<CBaseEntity>(&this->m_PreGameInventory.m_hTransientCastItem.m_Value, (a2 + 316)) )
  {
    (*(this->m_PreGameInventory._vptr_CDOTA_UnitInventory + 2))(
      &this->m_PreGameInventory,
      132,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_PreGameInventory.m_hTransientCastItem.m_Value.m_Index = *(a2 + 316);
  }
  if ( &this->m_PreGameInventory.m_hPendingCombineItemRemoves != (a2 + 320) )
  {
    v79 = *(a2 + 320);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::SetCount(
      &this->m_PreGameInventory.m_hPendingCombineItemRemoves,
      v79);
    if ( v79 > 0 )
    {
      v80 = 0;
      do
      {
        this->m_PreGameInventory.m_hPendingCombineItemRemoves.m_Memory.m_pMemory[v80 / 4].m_Index = *(*(a2 + 328) + v80);
        v80 += 4LL;
      }
      while ( v80 != 4LL * (v79 - 1) + 4 );
    }
  }
  this->m_PreGameInventory.m_flRecentlyDroppedItemsTime = *(a2 + 344);
  if ( &this->m_PreGameInventory.m_vecRecentlyDroppedItems != (a2 + 352) )
  {
    v81 = *(a2 + 352);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::SetCount(
      &this->m_PreGameInventory.m_vecRecentlyDroppedItems,
      v81);
    if ( v81 > 0 )
    {
      v82 = 0;
      do
      {
        this->m_PreGameInventory.m_vecRecentlyDroppedItems.m_Memory.m_pMemory[v82 / 4].m_Index = *(*(a2 + 360) + v82);
        v82 += 4LL;
      }
      while ( v82 != 4LL * (v81 - 1) + 4 );
    }
  }
  this->m_PreGameInventory.m_nPreGamePlayerID = *(a2 + 376);
  return this;
}


// DataTeamPlayer_t::Schema_DynamicBinding  (line 125, @0x00000000024998d0, libserver.so)
// calls: DataTeamPlayer_t::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall DataTeamPlayer_t::Schema_DynamicBinding(const DataTeamPlayer_t *const this)
{
  DataTeamPlayer_t::Schema_VerifyBindingIsRegistered();
  return DataTeamPlayer_t::s_pSchemaBinding;
}


// DataTeamPlayer_t::NetworkStateChanged  (line 126, @0x0000000002567980, libserver.so)  // inlines: Get, operator CEntityInstance*
// callers: DataTeamPlayer_t::operator=, CDOTA_PlayerResource::ComputeNetWorth, CDOTA_PlayerResource::ModifyGold, CDOTA_PlayerResource::LoadSaveGameInformation
void __fastcall DataTeamPlayer_t::NetworkStateChanged(
        DataTeamPlayer_t *const this,
        __int64 nLocalOffset,
        __int64 nArrayIndex,
        int16 a4)
{
  CEntityInstance *m_pObj; // rax
  ChangeAccessorFieldPathIndex_t *p_nPathIndexa; // rcx
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // rdi
  ChangeAccessorFieldPathIndex_t nPathIndexa; // [rsp+0h] [rbp-10h] BYREF

  m_pObj = this->__m_pChainEntity.m_pObj;
  nPathIndexa.m_Value = a4;
  if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
  {
    p_nPathIndexa = &nPathIndexa;
    p_m_PathIndex = &this->__m_PathIndex;
    if ( nPathIndexa.m_Value == -1 )
      p_nPathIndexa = p_m_PathIndex;
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, nLocalOffset, nArrayIndex, p_nPathIndexa->m_Value);
  }
}


// DataTeamPlayer_t::NetworkVar_m_PreGameInventory::NetworkStateChanged  (line 173, @0x0000000002496f80, libserver.so)  // inlines: DispatchNetworkStateChanged<DataTeamPlayer_t>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall DataTeamPlayer_t::NetworkVar_m_PreGameInventory::NetworkStateChanged(
        DataTeamPlayer_t::NetworkVar_m_PreGameInventory *const this)
{
  _QWORD *v1; // rdi

  v1 = *(this - 22);
  if ( v1 != 0 && (*(v1[1] + 49LL) & 4) == 0 )
    (*(*v1 + 168LL))(v1);
}


// DataTeamPlayer_t::NetworkVar_m_PreGameInventory::NetworkStateChangedLog  (line 173, @0x0000000002496fc0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<DataTeamPlayer_t>, Get, NetworkStateChangedLog, operator const CEntityInstance*
void __fastcall DataTeamPlayer_t::NetworkVar_m_PreGameInventory::NetworkStateChangedLog(
        const DataTeamPlayer_t::NetworkVar_m_PreGameInventory *const this,
        const char *pVarName,
        const char *pMsg)
{
  _QWORD *v3; // rdi

  v3 = *(this - 22);
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 )
    (*(*v3 + 184LL))(v3, pVarName, pMsg);
}


// DataTeamPlayer_t::NetworkVar_m_PreGameInventory::NetworkStateChanged  (line 173, @0x0000000002497000, libserver.so)  // inlines: DispatchNetworkStateChanged<DataTeamPlayer_t>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall DataTeamPlayer_t::NetworkVar_m_PreGameInventory::NetworkStateChanged(
        DataTeamPlayer_t::NetworkVar_m_PreGameInventory *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v4; // rax
  int16 *v5; // rdi
  int16 *p_m_Value; // r8
  int16 m_Value; // [rsp+0h] [rbp-10h] BYREF

  v4 = *(this - 22);
  m_Value = nPathIndex.m_Value;
  if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 && *(this - 84) != 0xFFFF )
  {
    v5 = (this - 168);
    p_m_Value = &m_Value;
    if ( nPathIndex.m_Value == -1 )
      p_m_Value = v5;
    (*(*v4 + 176LL))(v4, nLocalOffset + 184, nArrayIndex, *p_m_Value);
  }
}


