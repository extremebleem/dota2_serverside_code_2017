
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetEffectiveTeamNumber  (line 23, @0x000000000209d430, libserver.so)  // inlines: GetTeamNumber, ToDOTAPlayer
// calls: CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum
// callers: CRecipientFilter::RemoveRecipientsByTeamNumber, CRecipientFilter::RemoveRecipientsNotOnTeam, CRecipientFilter::AddRecipientsByTeamNumber, CTeamRecipientFilter::CTeamRecipientFilter
int __fastcall GetEffectiveTeamNumber(CBasePlayer *pPlayer)
{
  if ( pPlayer != 0 && (*(pPlayer->_vptr_IHandleEntity + 140))(pPlayer) != 0 && CDOTAPlayer::IsACoach(pPlayer) )
    return CDOTAPlayer::GetCoachedTeamNum(pPlayer);
  else
    return pPlayer->m_iTeamNum.m_Value;
}


// CRecipientFilter::CRecipientFilter  (line 39, @0x00000000020b3230, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~IRecipientFilter
// calls: CRecipientFilter::Reset, Plat_IsInDebugSessionRaw, CUtlMemory<CEntityIndex, int>::Purge, _Unwind_Resume
// callers: CBaseEntity::DecalTrace, Script_EmitSoundOnClient, CSoundOpGameSystem::SetSoundEventParam, CSoundOpGameSystem::snd_sos_sv_soundevent_start, Script_StartSoundEventReliable, Script_StartSoundEventUnreliable, PlayImpactSoundEventAtPosition, CPhysicsGameSystem::PhysFrictionSound, CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last, CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last, CSoundOpGameSystem::snd_sos_sv_test_gender, Script_StartSoundEventFromPositionReliable (366 total)
void __fastcall CRecipientFilter::CRecipientFilter(CRecipientFilter *const this)
{
  CEntityIndex *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
  this->_vptr_IRecipientFilter = &off_3FFC090;
  this->m_Recipients.m_Size = 0;
  this->m_Recipients.m_Memory.m_pMemory = 0;
  this->m_Recipients.m_Memory.m_nAllocationCount = 65;
  this->m_Recipients.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 40) & 3) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
  {
    __debugbreak();
    this->m_Recipients.m_Memory.m_pMemory = p_m_FixedMemory;
    CRecipientFilter::Reset(this);
  }
  else
  {
    this->m_Recipients.m_Memory.m_pMemory = p_m_FixedMemory;
    CRecipientFilter::Reset(this);
  }
}


// CRecipientFilter::~CRecipientFilter  (line 44, @0x00000000020cffb0, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, CUtlMemory<CEntityIndex, int>::Purge
// callers: CBroadcastRecipientFilter::~CBroadcastRecipientFilter, CBaseEntity::DecalTrace, CReliableBroadcastRecipientFilter::~CReliableBroadcastRecipientFilter, CPASFilter::~CPASFilter, CSingleUserRecipientFilter::~CSingleUserRecipientFilter, Script_EmitSoundOnClient, CSoundOpGameSystem::SetSoundEventParam, CSoundOpGameSystem::snd_sos_sv_soundevent_start, Script_StartSoundEventReliable, Script_StartSoundEventUnreliable, PlayImpactSoundEventAtPosition, CPhysicsGameSystem::PhysFrictionSound (414 total)
void __fastcall CRecipientFilter::~CRecipientFilter(CRecipientFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CRecipientFilter *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 != 0 )
  {
LABEL_7:
    this->_vptr_IRecipientFilter = &off_3FCAC70;
    return;
  }
  CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
  this->_vptr_IRecipientFilter = &off_3FCAC70;
}


// CRecipientFilter::~CRecipientFilter  (line 44, @0x00000000020d0060, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CRecipientFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CRecipientFilter::~CRecipientFilter(CRecipientFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CRecipientFilter *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 == 0 )
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
LABEL_7:
  this->_vptr_IRecipientFilter = &off_3FCAC70;
  operator delete(this);
}


// CRecipientFilter::CopyFrom  (line 52, @0x00000000020dce90, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, GrowMemory, IgnorePredictionCull, IsUsingPredictionRules, operator[]
// calls: CUtlMemory<CEntityIndex, int>::Grow
// callers: CSceneEntity::SetRecipientFilter, CDOTA_ParticleManager::CreateParticleEffectInternal
void __fastcall CRecipientFilter::CopyFrom(CRecipientFilter *const this, const CRecipientFilter *const src)
{
  unsigned int v3; // r12d
  int v5; // r14d
  CEntityIndex *v6; // rdx
  int32 v7; // eax
  __int64 m_Size; // r13
  int v9; // edx
  int32 v10; // [rsp+Ch] [rbp-34h]

  v3 = 0;
  this->m_nBufType = (*(src->_vptr_IRecipientFilter + 3))(src);
  this->m_bInitMessage = (*(src->_vptr_IRecipientFilter + 4))(src);
  this->m_bUsingPredictionRules = src->m_bUsingPredictionRules;
  this->m_bIgnorePredictionCull = src->m_bIgnorePredictionCull;
  v5 = (*(src->_vptr_IRecipientFilter + 5))(src);
  if ( v5 > 0 )
  {
    do
    {
      v7 = (*(src->_vptr_IRecipientFilter + 6))(src, v3);
      m_Size = this->m_Recipients.m_Size;
      v9 = this->m_Recipients.m_Size;
      if ( m_Size == this->m_Recipients.m_Memory.m_nAllocationCount )
      {
        v10 = v7;
        CUtlMemory<CEntityIndex,int>::Grow(&this->m_Recipients.m_Memory, 1);
        v9 = this->m_Recipients.m_Size;
        v7 = v10;
      }
      this->m_Recipients.m_Size = v9 + 1;
      v6 = &this->m_Recipients.m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
        v6->m_Data = v7;
      ++v3;
    }
    while ( v3 != v5 );
  }
}


// CRecipientFilter::Reset  (line 69, @0x00000000020b3200, libserver.so)  // inlines: RemoveAll
// callers: CRecipientFilter::CRecipientFilter
void __fastcall CRecipientFilter::Reset(CRecipientFilter *const this)
{
  this->m_nBufType = NetChannelBufType_t::BUF_DEFAULT;
  this->m_bInitMessage = 0;
  this->m_Recipients.m_Size = 0;
  this->m_bUsingPredictionRules = 0;
  this->m_bIgnorePredictionCull = 0;
}


// CRecipientFilter::MakeReliable  (line 78, @0x00000000020b32d0, libserver.so)
// callers: CSoundOpGameSystem::SetSoundEventParam, CSoundOpGameSystem::snd_sos_sv_soundevent_start, Script_StartSoundEventReliable, CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last, CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last, CSoundOpGameSystem::snd_sos_sv_test_gender, Script_StartSoundEventFromPositionReliable, CSoundOpGameSystem::StopSoundEvent, CSoundOpGameSystem::snd_sos_sv_soundevent_stop_last, Script_StopSoundEventReliable, CCustomGameEventManager::Script_Send_ServerToAllClients, CCustomGameEventManager::Script_Send_ServerToTeam (173 total)
void __fastcall CRecipientFilter::MakeReliable(CRecipientFilter *const this)
{
  this->m_nBufType = NetChannelBufType_t::BUF_RELIABLE;
}


// CRecipientFilter::IsInitMessage  (line 83, @0x000000000209c790, libserver.so)
bool __fastcall CRecipientFilter::IsInitMessage(const CRecipientFilter *const this)
{
  return this->m_bInitMessage;
}


// CRecipientFilter::MakeInitMessage  (line 88, @0x00000000020b32e0, libserver.so)
// callers: CProjectedDecal::StaticDecal
void __fastcall CRecipientFilter::MakeInitMessage(CRecipientFilter *const this)
{
  this->m_bInitMessage = 1;
}


// CRecipientFilter::GetNetworkBufType  (line 94, @0x000000000209c7a0, libserver.so)
NetChannelBufType_t __fastcall CRecipientFilter::GetNetworkBufType(const CRecipientFilter *const this)
{
  return this->m_nBufType;
}


// CRecipientFilter::GetRecipientCount  (line 99, @0x000000000209c7b0, libserver.so)
// callers: CBaseCombatWeapon::OnPickedUp, CMultiplayRules::VoiceCommand
int __fastcall CRecipientFilter::GetRecipientCount(const CRecipientFilter *const this)
{
  return this->m_Recipients.m_Size;
}


// CRecipientFilter::GetRecipientIndex  (line 104, @0x000000000209f110, libserver.so)
// callers: CMultiplayRules::VoiceCommand
CEntityIndex __fastcall CRecipientFilter::GetRecipientIndex(const CRecipientFilter *const this, int slot)
{
  __int64 v2; // rbx

  v2 = slot;
  if ( slot >= 0 && slot < (*(this->_vptr_IRecipientFilter + 5))(this) )
    return this->m_Recipients.m_Memory.m_pMemory[v2].m_Data;
  else
    return -1;
}


// CRecipientFilter::AddAllPlayers  (line 112, @0x00000000020dc7b0, libserver.so)  // inlines: operator++
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, UTIL_PlayerByIndex, CRecipientFilter::AddRecipient
// callers: CBaseEntity::DecalTrace, CSoundOpGameSystem::SetSoundEventParam, CSoundOpGameSystem::snd_sos_sv_soundevent_start, Script_StartSoundEventReliable, Script_StartSoundEventUnreliable, CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last, CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last, CSoundOpGameSystem::snd_sos_sv_test_gender, Script_StartSoundEventFromPositionReliable, Script_StartSoundEventFromPositionUnreliable, CSoundOpGameSystem::StopSoundEvent, CSoundOpGameSystem::snd_sos_sv_soundevent_stop_last (190 total)
void __fastcall CRecipientFilter::AddAllPlayers(CRecipientFilter *const this)
{
  int v2; // ebx
  CBasePlayer *v3; // rax

  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( gpGlobals != 0 && gpGlobals->maxClients > 0 )
  {
    v2 = 1;
    do
    {
      v3 = UTIL_PlayerByIndex(v2);
      if ( v3 != 0 )
        CRecipientFilter::AddRecipient(this, v3);
      ++v2;
    }
    while ( gpGlobals->maxClients >= v2 );
  }
}


// CRecipientFilter::AddRecipient  (line 145, @0x00000000020dc6b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CEntityIndex, CopyConstruct<CEntityIndex>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GetSuppressHost, GrowMemory, Init, operator[]
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::Find, CUtlMemory<CEntityIndex, int>::Grow
// callers: Script_EmitSoundOnClient, CCustomGameEventManager::Script_Send_ServerToPlayer, Script_SetOpvarFloatPlayer, CRecipientFilter::AddAllPlayers, CRecipientFilter::AddRecipientsByTeamNumber, CRecipientFilter::AddRecipientByPlayerIndex, CRecipientFilter::AddPlayersFromBitMask, CTeamRecipientFilter::CTeamRecipientFilter, CSingleUserPlusObserversFilter::CSingleUserPlusObserversFilter, CBaseMultiplayerPlayer::AwardAchievement, CBaseCombatWeapon::OnPickedUp, CSingleUserRecipientFilter::CSingleUserRecipientFilter (95 total)
void __fastcall CRecipientFilter::AddRecipient(CRecipientFilter *const this, const CEntityInstance *player)
{
  CEntityIdentity *m_pEntity; // rax
  int32 v4; // ecx
  bool v5; // zf
  __int64 m_Size; // r12
  int v7; // eax
  CEntityIndex *v8; // rax
  CEntityIndex v9; // [rsp-8h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-28h]

  if ( player != 0 )
  {
    m_pEntity = player->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_11;
    LOWORD(v4) = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      LOWORD(v4) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v10 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    if ( v10 == -1 )
LABEL_11:
      v4 = 0x7FFF;
    else
      v4 = v4;
    v5 = !this->m_bUsingPredictionRules;
    v9.m_Data = v4;
    if ( (v5
       || g_RecipientFilterPredictionSystem.m_nStatusPushed > 0
       || player != g_RecipientFilterPredictionSystem.m_pSuppressHost)
      && CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::Find(&this->m_Recipients, &v9) == -1 )
    {
      m_Size = this->m_Recipients.m_Size;
      v7 = this->m_Recipients.m_Size;
      if ( m_Size == this->m_Recipients.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityIndex,int>::Grow(&this->m_Recipients.m_Memory, 1);
        v7 = this->m_Recipients.m_Size;
      }
      this->m_Recipients.m_Size = v7 + 1;
      v8 = &this->m_Recipients.m_Memory.m_pMemory[m_Size];
      if ( v8 != 0 )
        v8->m_Data = v9.m_Data;
    }
  }
}


// CRecipientFilter::AddRecipientsByTeamNumber  (line 187, @0x00000000020dc820, libserver.so)
// calls: UTIL_PlayerByIndex, GetEffectiveTeamNumber, CRecipientFilter::AddRecipient
// callers: CCustomGameEventManager::Script_Send_ServerToTeam, CRecipientFilter::AddRecipientsByTeam, BroadcastCombatLogMessage, CDOTAGamerules::AddMinimapDebugPoint, CDOTAGamerules::SetGameWinner, CDOTAGamerules::Radar, CDOTA_Modifier_Radar_Thinker::OnCreated, CDOTA_Modifier_Radar_Thinker::OnIntervalThink, CDOTAGamerules::ClientMsg_RollDice, CDOTAGamerules::ClientMsg_FlipCoin, CDOTAGamerules::State_Enter_HERO_SELECTION, CDOTA_ParticleManager::ReleaseParticleIndex (17 total)
void __fastcall CRecipientFilter::AddRecipientsByTeamNumber(CRecipientFilter *const this, int iTeamNumber)
{
  int v4; // ebx
  CBasePlayer *v5; // rax
  const CEntityInstance *v6; // r12

  v4 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = UTIL_PlayerByIndex(v4);
        v6 = v5;
        if ( v5 != 0 && GetEffectiveTeamNumber(v5) == iTeamNumber )
          break;
        if ( gpGlobals->maxClients < ++v4 )
          return;
      }
      ++v4;
      CRecipientFilter::AddRecipient(this, v6);
    }
    while ( gpGlobals->maxClients >= v4 );
  }
}


// CRecipientFilter::RemoveAllRecipients  (line 203, @0x00000000020b32f0, libserver.so)  // inlines: RemoveAll
// callers: CCustomGameEventManager::Script_Send_ServerToTeam, CCustomGameEventManager::Script_Send_ServerToPlayer, CTeamRecipientFilter::CTeamRecipientFilter, CDOTAGamerules::AddMinimapDebugPoint, CDOTATeamRecipientFilter::CDOTATeamRecipientFilter, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Speech::SpeechSourceToNetFilter, CDOTA_SpeechCallbackForwardToPlayersAnnouncer::MakeNetworkFilter, CDOTA_Speech::QueueConcept, CScriptParticleManager::CreateParticleForTeam, CScriptParticleManager::CreateParticleForPlayer, DOTA_AddAllTeamRecipients (19 total)
void __fastcall CRecipientFilter::RemoveAllRecipients(CRecipientFilter *const this)
{
  this->m_Recipients.m_Size = 0;
}


// CRecipientFilter::RemoveRecipient  (line 208, @0x00000000020d3680, libserver.so)  // inlines: CEntityHandle, CEntityIndex, GetEHandle, GetEntryIndex, GetSerialNumber, Init
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::FindAndRemove
// callers: CRecipientFilter::RemoveRecipientsByTeamNumber, CRecipientFilter::RemoveRecipientsNotOnTeam, CRecipientFilter::RemovePlayersFromBitMask, CRecipientFilter::UsePredictionRules, CPASAttenuationFilter::Filter, CBaseEntity::RemoveRecipientsIfNotCloseCaptioning, CSceneEntity::DispatchStartSpeak, CDOTAGamerules::Think, CDOTAPlayer::HandleAbilityDraftSelection, CDOTA_PlayerResource::OnFullyJoinedServer, DOTA_EmitSound, CDOTA_BaseNPC_Hero::OnBuybackSpawned (14 total)
void __fastcall CRecipientFilter::RemoveRecipient(CRecipientFilter *const this, const CEntityInstance *player)
{
  __int64 v2; // rbp
  CEntityIdentity *m_pEntity; // rax
  int32 v4; // ecx
  CEntityIndex v5; // [rsp-18h] [rbp-18h] BYREF
  __int64 v6; // [rsp-8h] [rbp-8h]

  if ( player != 0 )
  {
    v6 = v2;
    m_pEntity = player->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_9;
    LOWORD(v4) = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      LOWORD(v4) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF) == 0xFFFFFFFF )
LABEL_9:
      v4 = 0x7FFF;
    else
      v4 = v4;
    v5.m_Data = v4;
    CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::FindAndRemove(&this->m_Recipients, &v5);
  }
}


// CRecipientFilter::RemoveRecipientByPlayerIndex  (line 219, @0x00000000020d3e40, libserver.so)
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::FindAndRemove
// callers: CMultiplayRules::VoiceCommand, CSceneEntity::DispatchStartSpeak, CDOTAGamerules::ClientMsg_MapLine, CDOTAGamerules::ExecutePing, CDOTAGamerules::ClientMsg_WorldLine
void __fastcall CRecipientFilter::RemoveRecipientByPlayerIndex(CRecipientFilter *const this, int32 a2)
{
  CEntityIndex playerindexa; // [rsp+0h] [rbp-10h] BYREF

  playerindexa.m_Data = a2;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::FindAndRemove(
    &this->m_Recipients,
    &playerindexa);
}


// CRecipientFilter::AddRecipientsByTeam  (line 226, @0x00000000020dc8a0, libserver.so)  // inlines: GetTeamNumber
// calls: CRecipientFilter::AddRecipientsByTeamNumber
// callers: CSceneEntity::AddBroadcastTeamTarget, CDOTAGamerules::SendCustomMessageToTeam, CDOTAGamerules::SendProjectionAbilityMessageInternal, CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker::OnCreated, CDOTA_Speech::SpeechSourceToNetFilter, DOTA_EmitSound, Script_EmitSoundOnLocationForAllies, MinimapEvent, CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_Modifier_Morphling_Replicate_Timer::OnIntervalThink, CDOTA_Unit_Hero_PhantomLancer::Spawn, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker (48 total)
void __fastcall CRecipientFilter::AddRecipientsByTeam(CRecipientFilter *const this, CTeam *team)
{
  if ( team != 0 )
    CRecipientFilter::AddRecipientsByTeamNumber(this, team->m_iTeamNum.m_Value);
}


// CRecipientFilter::AddRecipientByPlayerIndex  (line 243, @0x00000000020dc8d0, libserver.so)
// calls: UTIL_PlayerByIndex, CRecipientFilter::AddRecipient
// callers: CHLTVDirector::BroadcastLocalTitle
void __fastcall CRecipientFilter::AddRecipientByPlayerIndex(CRecipientFilter *const this, CEntityIndex playerIndex)
{
  CBasePlayer *v3; // rax

  v3 = UTIL_PlayerByIndex(playerIndex);
  if ( v3 != 0 )
    CRecipientFilter::AddRecipient(this, v3);
}


// CRecipientFilter::RemoveRecipientsByTeam  (line 252, @0x00000000020d3790, libserver.so)  // inlines: GetTeamNumber
// calls: CRecipientFilter::RemoveRecipientsByTeamNumber
// callers: CSceneEntity::RemoveBroadcastTeamTarget, CDOTAGamerules::OnNumSpectatorsChanged, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, DOTA_EmitSound, DOTA_EmitSoundLocation, DOTA_EmitSoundLocationWithCaster, CDOTAPASFilter::CDOTAPASFilter, CDOTAHeroList::GiveTeamGoldReward, CDOTA_Modifier_Morphling_Replicate_Timer::OnIntervalThink, CDOTA_Unit_Hero_PhantomLancer::Spawn, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_Modifier_Kunkka_Torrent_Thinker::OnCreated (35 total)
void __fastcall CRecipientFilter::RemoveRecipientsByTeam(CRecipientFilter *const this, CTeam *team)
{
  if ( team != 0 )
    CRecipientFilter::RemoveRecipientsByTeamNumber(this, team->m_iTeamNum.m_Value);
}


// CRecipientFilter::RemoveRecipientsByTeamNumber  (line 269, @0x00000000020d3700, libserver.so)
// calls: UTIL_PlayerByIndex, GetEffectiveTeamNumber, CRecipientFilter::RemoveRecipient
// callers: CRecipientFilter::RemoveRecipientsByTeam, CDOTA_Modifier_Teleporting::GenerateSound, CDOTA_MapTree::CutDownEx, CDOTA_TempTree::CutDown, CDOTA_MapTree::GrowBack, CreateTempTree, CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnAttackLanded, CDOTA_RoshanSpawner::RoshanThink
void __fastcall CRecipientFilter::RemoveRecipientsByTeamNumber(CRecipientFilter *const this, int iTeamNumber)
{
  int v4; // ebx
  CBasePlayer *v5; // rax
  const CEntityInstance *v6; // r12

  v4 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = UTIL_PlayerByIndex(v4);
        v6 = v5;
        if ( v5 != 0 && GetEffectiveTeamNumber(v5) == iTeamNumber )
          break;
        if ( gpGlobals->maxClients < ++v4 )
          return;
      }
      ++v4;
      CRecipientFilter::RemoveRecipient(this, v6);
    }
    while ( gpGlobals->maxClients >= v4 );
  }
}


// CRecipientFilter::RemoveRecipientsNotOnTeam  (line 286, @0x00000000020d37c0, libserver.so)  // inlines: GetTeamNumber
// calls: UTIL_PlayerByIndex, GetEffectiveTeamNumber, CRecipientFilter::RemoveRecipient
// callers: CMultiplayRules::VoiceCommand, CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker::OnCreated, DOTA_EmitSound, Script_EmitSoundOnLocationForAllies, Script_EmitAnnouncerSoundForTeamOnLocation, CDOTA_TeamCommander::ChatMessageRequest, CDOTA_Bot_Script::Action_Chat, CDOTA_Ability_Kunkka_Torrent::OnSpellStart, CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnCreated, CDOTA_Ability_Kunkka_GhostShip::OnSpellStart, CDOTA_Ability_Mirana_Arrow::OnSpellStart, CDOTA_Ability_Windrunner_Powershot::OnSpellStart (17 total)
void __fastcall CRecipientFilter::RemoveRecipientsNotOnTeam(CRecipientFilter *const this, CTeam *team)
{
  int v4; // ebx
  CBasePlayer *v5; // rax
  const CEntityInstance *v6; // r12

  if ( team != 0 && gpGlobals->maxClients > 0 )
  {
    v4 = 1;
    do
    {
      v5 = UTIL_PlayerByIndex(v4);
      v6 = v5;
      if ( v5 != 0 && GetEffectiveTeamNumber(v5) != team->m_iTeamNum.m_Value )
        CRecipientFilter::RemoveRecipient(this, v6);
      ++v4;
    }
    while ( gpGlobals->maxClients >= v4 );
  }
}


// CRecipientFilter::AddPlayersFromBitMask  (line 334, @0x00000000020dc910, libserver.so)  // inlines: BitVec_FindNextSetBit<int, false>, FindNextSetBit, FirstBitInWord, FirstBitInWordThatIsKnownToBeNonZero, GetEndMask, GetStartBitMask
// calls: UTIL_PlayerByIndex, CRecipientFilter::AddRecipient
// callers: CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::AddRecipientsByPAS
// globals: GetEndMask(int)::bitStringEndMasks, GetStartBitMask(int)::g_StartMask
void __fastcall CRecipientFilter::AddPlayersFromBitMask(CRecipientFilter *const this, CBitVec<64> *const playerbits)
{
  unsigned int *v4; // rbx
  int v5; // r14d
  unsigned int v6; // eax
  int v7; // r14d
  CBasePlayer *v8; // rax
  __int64 v9; // rax
  unsigned int *v10; // rsi
  unsigned int v11; // ecx
  unsigned int *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // r14d
  unsigned int v16; // r14d
  unsigned int v17; // ecx

  v4 = playerbits + 1;
  v5 = GetStartBitMask(int)::g_StartMask[0] & playerbits->m_Ints[0];
  if ( v5 != 0 )
  {
    _BitScanForward(&v5, v5);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_5:
            if ( v5 < 0 )
              return;
            v7 = v5 + 1;
            v8 = UTIL_PlayerByIndex(v7);
            if ( v8 != 0 )
              CRecipientFilter::AddRecipient(this, v8);
            if ( v7 > 63 )
              return;
            v9 = v7 >> 5;
            v10 = playerbits + v9;
            v11 = GetStartBitMask(int)::g_StartMask[v7 & 0x1F] & *v10;
            if ( v4 != v10 )
              break;
            v17 = GetEndMask(int)::bitStringEndMasks[0] & v11;
            if ( v17 == 0 )
              return;
            _BitScanForward(&v17, v17);
            v5 = v17 + 32;
          }
          if ( v11 == 0 )
            break;
          _BitScanForward(&v15, v11);
          v5 = 32 * ((4 * v9) >> 2) + v15;
        }
        v12 = v10 + 1;
        if ( v4 != v10 + 1 )
          break;
LABEL_16:
        v14 = playerbits->m_Ints[1] & GetEndMask(int)::bitStringEndMasks[0];
        if ( v14 == 0 )
          return;
        _BitScanForward(&v14, v14);
        v5 = v14 + 32;
      }
      v13 = v10[1];
      if ( v13 == 0 )
      {
        do
        {
          if ( v4 == ++v12 )
            goto LABEL_16;
          v13 = *v12;
        }
        while ( *v12 == 0 );
      }
      _BitScanForward(&v16, v13);
      v5 = 32 * ((v12 - playerbits) >> 2) + v16;
    }
  }
  v6 = playerbits->m_Ints[1] & GetEndMask(int)::bitStringEndMasks[0];
  if ( v6 != 0 )
  {
    _BitScanForward(&v6, v6);
    v5 = v6 + 32;
    goto LABEL_5;
  }
}


// CRecipientFilter::RemovePlayersFromBitMask  (line 365, @0x00000000020d3850, libserver.so)  // inlines: BitVec_FindNextSetBit<int, false>, FindNextSetBit, FirstBitInWord, FirstBitInWordThatIsKnownToBeNonZero, GetEndMask, GetStartBitMask
// calls: UTIL_PlayerByIndex, CRecipientFilter::RemoveRecipient
// callers: CRecipientFilter::RemoveRecipientsByPVS
// globals: GetEndMask(int)::bitStringEndMasks, GetStartBitMask(int)::g_StartMask
void __fastcall CRecipientFilter::RemovePlayersFromBitMask(CRecipientFilter *const this, CBitVec<64> *const playerbits)
{
  unsigned int *v4; // rbx
  int v5; // r14d
  unsigned int v6; // eax
  int v7; // r14d
  CBasePlayer *v8; // rax
  __int64 v9; // rax
  unsigned int *v10; // rsi
  unsigned int v11; // ecx
  unsigned int *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // r14d
  unsigned int v16; // r14d
  unsigned int v17; // ecx

  v4 = playerbits + 1;
  v5 = GetStartBitMask(int)::g_StartMask[0] & playerbits->m_Ints[0];
  if ( v5 != 0 )
  {
    _BitScanForward(&v5, v5);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_5:
            if ( v5 < 0 )
              return;
            v7 = v5 + 1;
            v8 = UTIL_PlayerByIndex(v7);
            if ( v8 != 0 )
              CRecipientFilter::RemoveRecipient(this, v8);
            if ( v7 > 63 )
              return;
            v9 = v7 >> 5;
            v10 = playerbits + v9;
            v11 = GetStartBitMask(int)::g_StartMask[v7 & 0x1F] & *v10;
            if ( v4 != v10 )
              break;
            v17 = GetEndMask(int)::bitStringEndMasks[0] & v11;
            if ( v17 == 0 )
              return;
            _BitScanForward(&v17, v17);
            v5 = v17 + 32;
          }
          if ( v11 == 0 )
            break;
          _BitScanForward(&v15, v11);
          v5 = 32 * ((4 * v9) >> 2) + v15;
        }
        v12 = v10 + 1;
        if ( v4 != v10 + 1 )
          break;
LABEL_16:
        v14 = playerbits->m_Ints[1] & GetEndMask(int)::bitStringEndMasks[0];
        if ( v14 == 0 )
          return;
        _BitScanForward(&v14, v14);
        v5 = v14 + 32;
      }
      v13 = v10[1];
      if ( v13 == 0 )
      {
        do
        {
          if ( v4 == ++v12 )
            goto LABEL_16;
          v13 = *v12;
        }
        while ( *v12 == 0 );
      }
      _BitScanForward(&v16, v13);
      v5 = 32 * ((v12 - playerbits) >> 2) + v16;
    }
  }
  v6 = playerbits->m_Ints[1] & GetEndMask(int)::bitStringEndMasks[0];
  if ( v6 != 0 )
  {
    _BitScanForward(&v6, v6);
    v5 = v6 + 32;
    goto LABEL_5;
  }
}


// CRecipientFilter::AddRecipientsByPVS  (line 381, @0x00000000020dca60, libserver.so)  // inlines: CBitVec, CBitVecT, ClearAll, memset
// calls: CRecipientFilter::AddPlayersFromBitMask, CRecipientFilter::AddAllPlayers
// callers: ITempEntsSystem::Sparks, ITempEntsSystem::MuzzleFlash, CEnvSpark::SparkThink, ITempEntsSystem::Dust, ITempEntsSystem::Ricochet, CBreakable::Die, PhysCollisionDust, ITempEntsSystem::Smoke, UTIL_BloodStream
void __fastcall CRecipientFilter::AddRecipientsByPVS(CRecipientFilter *const this, const Vector *const origin)
{
  CBitVec<64> playerbits; // [rsp+0h] [rbp-20h] BYREF

  if ( gpGlobals->maxClients == 1 )
  {
    CRecipientFilter::AddAllPlayers(this);
  }
  else
  {
    playerbits = 0;
    (*(*engine + 272LL))(engine, 0, origin, &playerbits);
    CRecipientFilter::AddPlayersFromBitMask(this, &playerbits);
  }
}


// CRecipientFilter::RemoveRecipientsByPVS  (line 399, @0x00000000020d39a0, libserver.so)  // inlines: CBitVec, CBitVecT, ClearAll, memset
// calls: CRecipientFilter::RemovePlayersFromBitMask, CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll
// callers: CBasePlayer::PlayStepSound, CBaseCombatCharacter::PlayFootstepSound
void __fastcall CRecipientFilter::RemoveRecipientsByPVS(CRecipientFilter *const this, const Vector *const origin)
{
  CBitVec<64> playerbits; // [rsp+0h] [rbp-20h] BYREF

  if ( gpGlobals->maxClients == 1 )
  {
    CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  }
  else
  {
    playerbits = 0;
    (*(*engine + 272LL))(engine, 0, origin, &playerbits);
    CRecipientFilter::RemovePlayersFromBitMask(this, &playerbits);
  }
}


// CRecipientFilter::AddRecipientsByPAS  (line 419, @0x00000000020dcbd0, libserver.so)  // inlines: CBitVec, CBitVecT, ClearAll, memset
// calls: CRecipientFilter::AddPlayersFromBitMask, CRecipientFilter::AddAllPlayers
// callers: PlayImpactSoundEventAtPosition, CPhysicsGameSystem::PhysFrictionSound, PlaySoundEventAtPosition, CPASFilter::CPASFilter, MaterialFootstepSound, CBreakableProp::Break, CBaseCombatWeapon::WeaponSound, CBasePlayer::PlayStepSound, CPASAttenuationFilter::CPASAttenuationFilter, CFuncRotating::RampPitchVol, CFuncRotating::UpdateSpeed, CBaseButton::ButtonActivate (86 total)
void __fastcall CRecipientFilter::AddRecipientsByPAS(CRecipientFilter *const this, const Vector *const origin)
{
  CBitVec<64> playerbits; // [rsp+0h] [rbp-20h] BYREF

  if ( gpGlobals->maxClients == 1 )
  {
    CRecipientFilter::AddAllPlayers(this);
  }
  else
  {
    playerbits = 0;
    (*(*engine + 272LL))(engine, 1, origin, &playerbits);
    CRecipientFilter::AddPlayersFromBitMask(this, &playerbits);
  }
}


// CRecipientFilter::UsePredictionRules  (line 437, @0x00000000020d3a20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSplitScreenPlayerOwner, GetSuppressHost, IndexToIdentity, IsValid, LookupEntity, ToBasePlayer, operator CBasePlayer*, operator CEntityInstance*, operator[]
// calls: CRecipientFilter::RemoveRecipient, CBasePlayer::GetSplitScreenPlayers
// callers: CBaseCombatWeapon::WeaponSound, CMoveHelperServer::StartSound
// globals: CEntityHandle::gm_pEntityList
void __fastcall CRecipientFilter::UsePredictionRules(CRecipientFilter *const this)
{
  int (**vptr_IRecipientFilter)(...); // rax
  CBasePlayer *m_pSuppressHost; // rbx
  CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *SplitScreenPlayers; // r13
  __int64 v5; // rbx
  const CEntityInstance *v6; // rsi
  CHandle<CBasePlayer> *v7; // rcx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 m_Index; // eax
  const CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx

  if ( !this->m_bUsingPredictionRules )
  {
    vptr_IRecipientFilter = this->_vptr_IRecipientFilter;
    this->m_bUsingPredictionRules = 1;
    if ( vptr_IRecipientFilter[5]() != 0 && g_RecipientFilterPredictionSystem.m_nStatusPushed <= 0 )
    {
      m_pSuppressHost = g_RecipientFilterPredictionSystem.m_pSuppressHost;
      if ( g_RecipientFilterPredictionSystem.m_pSuppressHost != 0
        && (*(g_RecipientFilterPredictionSystem.m_pSuppressHost->_vptr_IHandleEntity + 140))(g_RecipientFilterPredictionSystem.m_pSuppressHost) != 0 )
      {
        CRecipientFilter::RemoveRecipient(this, m_pSuppressHost);
        if ( m_pSuppressHost->m_bSplitScreenPlayer )
        {
          m_Index = m_pSuppressHost->m_hSplitOwner.m_Index;
          m_pInstance = 0;
          if ( m_Index + 2 > 1 )
          {
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pSuppressHost->m_hSplitOwner.m_Index) >> 9)
                                                                 & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[m_pSuppressHost->m_hSplitOwner.m_Index & 0x1FF];
              if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
                m_pInstance = v13->m_pInstance;
            }
          }
          CRecipientFilter::RemoveRecipient(this, m_pInstance);
        }
        else
        {
          SplitScreenPlayers = CBasePlayer::GetSplitScreenPlayers(m_pSuppressHost);
          if ( SplitScreenPlayers->m_Size > 0 )
          {
            v5 = 0;
            do
            {
              v6 = 0;
              v7 = &SplitScreenPlayers->m_Memory.m_pMemory[v5];
              if ( v7->m_Index + 2 > 1 )
              {
                v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
                if ( v8 != 0 )
                {
                  v9 = &v8[v7->m_Index & 0x1FF];
                  if ( v9 != 0 && v7->m_Index == v9->m_EHandle.m_Index )
                    v6 = v9->m_pInstance;
                }
              }
              CRecipientFilter::RemoveRecipient(this, v6);
              ++v5;
            }
            while ( v5 < SplitScreenPlayers->m_Size );
          }
        }
      }
    }
  }
}


// CRecipientFilter::RemoveSplitScreenPlayers  (line 502, @0x00000000020d3e60, libserver.so)  // inlines: CEntityIndex
// calls: UTIL_PlayerByIndex, CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::Remove
// callers: CSceneEntity::DispatchStartSpeak
void __fastcall CRecipientFilter::RemoveSplitScreenPlayers(CRecipientFilter *const this)
{
  CUtlVector<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int> > *p_m_Recipients; // r14
  int v3; // ebx
  __int64 v4; // r12
  CBasePlayer *v5; // rax

  p_m_Recipients = &this->m_Recipients;
  v3 = (*(this->_vptr_IRecipientFilter + 5))(this) - 1;
  v4 = v3;
  if ( v3 >= 0 )
  {
    do
    {
      v5 = UTIL_PlayerByIndex(this->m_Recipients.m_Memory.m_pMemory[v4]);
      if ( v5 != 0 && v5->m_bSplitScreenPlayer )
        CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::Remove(p_m_Recipients, v3);
      --v3;
      --v4;
    }
    while ( v3 != -1 );
  }
}


// CRecipientFilter::IsUsingPredictionRules  (line 515, @0x00000000020b3300, libserver.so)
bool __fastcall CRecipientFilter::IsUsingPredictionRules(const CRecipientFilter *const this)
{
  return this->m_bUsingPredictionRules;
}


// CRecipientFilter::IgnorePredictionCull  (line 520, @0x00000000020b3310, libserver.so)
// callers: CTempEntsSystem::SuppressTE
bool __fastcall CRecipientFilter::IgnorePredictionCull(const CRecipientFilter *const this)
{
  return this->m_bIgnorePredictionCull;
}


// CRecipientFilter::SetIgnorePredictionCull  (line 525, @0x00000000020b3320, libserver.so)
void __fastcall CRecipientFilter::SetIgnorePredictionCull(CRecipientFilter *const this, bool ignore)
{
  this->m_bIgnorePredictionCull = ignore;
}


// CTeamRecipientFilter::CTeamRecipientFilter  (line 533, @0x00000000020dcc40, libserver.so)  // inlines: GetTeamNumber, MakeReliable, ~CRecipientFilter, ~CUtlVector, ~IRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::RemoveAllRecipients, UTIL_PlayerByIndex, GetEffectiveTeamNumber, CRecipientFilter::AddRecipient, CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABaseAbility::OnAbilityPinged, CDOTAGamerules::ClientMsg_BuyBackStateAlert, CDOTAGamerules::ClientMsg_GlyphAlert, CDOTAGamerules::ClientMsg_HPManaAlert, CDOTAGamerules::ClientMsg_XPAlert, CDOTAGamerules::ClientMsg_WillPurchaseAlert, CDOTAGamerules::ClientMsg_QuickBuyAlert, CDOTAGamerules::ClientMsg_ItemAlert, CDOTAGamerules::ClientMsg_KillcamDamageTaken, CDOTAGamerules::ClientMsg_SendStatPopup, CDOTAGamerules::ClientMsg_ModifierAlert, CDOTAGamerules::ClientMsg_MapLine (31 total)
void __fastcall CTeamRecipientFilter::CTeamRecipientFilter(CTeamRecipientFilter *const this, int team, bool isReliable)
{
  int v6; // r12d
  CBasePlayer *v7; // rax
  const CEntityInstance *v8; // rbx

  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FF4590;
  if ( isReliable )
    this->m_nBufType = NetChannelBufType_t::BUF_RELIABLE;
  CRecipientFilter::RemoveAllRecipients(this);
  if ( gpGlobals->maxClients > 0 )
  {
    v6 = 1;
    do
    {
      while ( 1 )
      {
        v7 = UTIL_PlayerByIndex(v6);
        v8 = v7;
        if ( v7 != 0
          && (GetEffectiveTeamNumber(v7) == team
           || HIBYTE(v8[7].m_CScriptComponent) == 1
           && ((*(v8->_vptr_IHandleEntity + 436))(v8) == 4 || (*(v8->_vptr_IHandleEntity + 436))(v8) == 5)
           && ((*(v8->_vptr_IHandleEntity + 439))(v8) == 0 || team == *((*(v8->_vptr_IHandleEntity + 439))(v8) + 383))) )
        {
          break;
        }
        if ( gpGlobals->maxClients < ++v6 )
          return;
      }
      CRecipientFilter::AddRecipient(this, v8);
      ++v6;
    }
    while ( gpGlobals->maxClients >= v6 );
  }
}


// CPASAttenuationFilter::Filter  (line 580, @0x00000000020d3ba0, libserver.so)  // inlines: DistTo, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Instance, IsUsed, IsValid, Length, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator->, operator[]
// calls: CBasePlayer::GetSplitScreenPlayers, CRecipientFilter::RemoveRecipient
// callers: CBaseCombatWeapon::WeaponSound, CPASAttenuationFilter::CPASAttenuationFilter, CFuncRotating::RampPitchVol, CFuncRotating::UpdateSpeed, CBaseButton::ButtonActivate, CMomentaryRotButton::PlaySound, CBaseButton::ReactToDamage, CBaseButton::ButtonUse, CBaseButton::Press, CBaseButton::OnTakeDamage, PlayLockSounds, CBaseDoor::MovingSoundThink (60 total)
// globals: g_pGameEntitySystem, CEntityHandle::gm_pEntityList
void __fastcall CPASAttenuationFilter::Filter(
        CPASAttenuationFilter *const this,
        const Vector *const origin,
        float a3,
        float attenuation)
{
  int v6; // ebx
  int v7; // eax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rdx
  CBasePlayer *m_pInstance; // r14
  double v11; // xmm0_8
  float v12; // xmm1_4
  CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *SplitScreenPlayers; // rax
  __int64 v14; // r15
  double v15; // xmm0_8
  float v16; // xmm1_4
  CEntityInstance *v17; // rdi
  CHandle<CBasePlayer> *v18; // rcx
  uint32 m_Index; // edx
  __int16 v20; // si
  CEntityIdentity *v21; // rcx
  CEntityIdentity *v22; // rcx
  CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *v23; // [rsp-14h] [rbp-68h]
  float v24; // [rsp-8h] [rbp-5Ch]

  if ( gpGlobals->maxClients != 1 && a3 > 0.0 )
  {
    v24 = 2000.0 / a3;
    v6 = (*(this->_vptr_IRecipientFilter + 5))(this) - 1;
    if ( v6 >= 0 )
    {
      do
      {
        v7 = (*(this->_vptr_IRecipientFilter + 6))(this, v6);
        if ( v7 <= 0x7FFE )
        {
          v8 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && (v9->m_EHandle.m_Index & 0x7FFF) == v7 )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0
                && (*(m_pInstance->_vptr_IHandleEntity + 140))(v9->m_pInstance) != 0
                && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
              {
                v11 = (*(m_pInstance->_vptr_IHandleEntity + 167))(m_pInstance);
                if ( v24 < fsqrt(
                             (((*&v11 - origin->x) * (*&v11 - origin->x))
                            + ((*(&v11 + 1) - origin->y) * (*(&v11 + 1) - origin->y)))
                           + ((v12 - origin->z) * (v12 - origin->z))) )
                {
                  if ( CBasePlayer::GetSplitScreenPlayers(m_pInstance)->m_Size != 0
                    && (SplitScreenPlayers = CBasePlayer::GetSplitScreenPlayers(m_pInstance))->m_Size > 0 )
                  {
                    v14 = 0;
                    while ( 1 )
                    {
                      v17 = 0;
                      v18 = &SplitScreenPlayers->m_Memory.m_pMemory[v14];
                      m_Index = v18->m_Index;
                      if ( v18->m_Index + 2 > 1 )
                      {
                        v20 = v18->m_Index;
                        v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
                        if ( v21 != 0 )
                        {
                          v22 = &v21[v20 & 0x1FF];
                          if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
                            v17 = v22->m_pInstance;
                        }
                      }
                      v23 = SplitScreenPlayers;
                      v15 = (*(v17->_vptr_IHandleEntity + 167))(v17);
                      if ( v24 >= fsqrt(
                                    (((*&v15 - origin->x) * (*&v15 - origin->x))
                                   + ((*(&v15 + 1) - origin->y) * (*(&v15 + 1) - origin->y)))
                                  + ((v16 - origin->z) * (v16 - origin->z))) )
                        break;
                      SplitScreenPlayers = v23;
                      if ( v23->m_Size <= ++v14 )
                        goto LABEL_24;
                    }
                  }
                  else
                  {
LABEL_24:
                    CRecipientFilter::RemoveRecipient(this, m_pInstance);
                  }
                }
              }
            }
          }
        }
        --v6;
      }
      while ( v6 != -1 );
    }
  }
}


// CSingleUserPlusObserversFilter::CSingleUserPlusObserversFilter  (line 639, @0x00000000020dcd90, libserver.so)  // inlines: ~CRecipientFilter, ~CUtlVector, ~IRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, UTIL_PlayerByIndex, CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CSingleUserPlusObserversFilter::CSingleUserPlusObserversFilter(
        CSingleUserPlusObserversFilter *const this,
        CBasePlayer *player,
        bool inEyeOnly)
{
  int v5; // ebx
  CBasePlayer *v6; // rax
  const CEntityInstance *v7; // r12

  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FF4650;
  CRecipientFilter::AddRecipient(this, player);
  if ( gpGlobals->maxClients > 0 )
  {
    v5 = 1;
    do
    {
      while ( 1 )
      {
        v6 = UTIL_PlayerByIndex(v5);
        v7 = v6;
        if ( player != v6
          && v6 != 0
          && player == (*(v6->_vptr_IHandleEntity + 439))(v6)
          && ((*(v7->_vptr_IHandleEntity + 436))(v7) == 4 || !inEyeOnly && (*(v7->_vptr_IHandleEntity + 436))(v7) == 5) )
        {
          break;
        }
        if ( gpGlobals->maxClients < ++v5 )
          return;
      }
      CRecipientFilter::AddRecipient(this, v7);
      ++v5;
    }
    while ( gpGlobals->maxClients >= v5 );
  }
}


