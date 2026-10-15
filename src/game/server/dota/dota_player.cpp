// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_player.cpp:59
class C_CDOTAPlayer_MapInstall {
	C_CDOTAPlayer_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InitManifestDesc<player_server::CTemplateArg>  (line 57, @0x00000000026597a0, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "player.ventr"
// globals: `guard variable for'InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN13player_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1, _ZGRZ16InitManifestDescIN13player_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0
ResourceManifestDesc_t *__fastcall InitManifestDesc<player_server::CTemplateArg>(
        player_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4BC25C8 = 0;
    ZGRZ16InitManifestDescIN13player_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = "player.ventr";
    ZGRZ16InitManifestDescIN13player_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0 = &ZGRZ16InitManifestDescIN13player_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    qword_4BC25D0 = 0;
    InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN13player_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0;
    qword_4BC25D8 = 0;
    dword_4BC25E0 = 0;
    qword_4BC25F8 = 1;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<player_server::CTemplateArg>(player_server::CTemplateArg &)::s_Manifest;
}


// CDOTAPlayer::YouForgotToImplementOrDeclareServerClass  (line 59, @0x0000000002653b80, libserver.so)
int __fastcall CDOTAPlayer::YouForgotToImplementOrDeclareServerClass(CDOTAPlayer *const this)
{
  return 0;
}


// CDOTAPlayer::GetServerClass  (line 59, @0x0000000002658c80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTAPlayer::GetServerClass(CDOTAPlayer *const this)
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


// SendCommentatorTable_UserGroupFunc  (line 61, @0x000000000265b3c0, libserver.so)  // inlines: Bitvec_Set, ClearAll, ClearAllRecipients, GetTeamNumber, IsACoach, Set, SetRecipient, ToDOTAPlayer, memset
// calls: CDOTA_PlayerResource::IsBroadcaster, UTIL_PlayerByIndex, CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum, CDOTA_PlayerResource::GetBroadcasterChannel
// globals: g_pDOTAPlayerResource
void __fastcall SendCommentatorTable_UserGroupFunc(
        const char *pUserGroupName,
        const void *pStructBase,
        CSendProxyRecipients *pRecipients,
        int objectID)
{
  int v5; // eax
  int v6; // r12d
  int v7; // ebx
  CBasePlayer *v8; // rax
  CDOTAPlayer *v9; // r15
  int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  uint32 nChannel; // [rsp+4h] [rbp-3Ch]

  *pRecipients = 0;
  v5 = (*(*pStructBase + 3144LL))(pStructBase, pStructBase, pRecipients, objectID);
  nChannel = 6;
  if ( CDOTA_PlayerResource::IsBroadcaster(g_pDOTAPlayerResource, v5) )
  {
    v13 = (*(*pStructBase + 3144LL))(pStructBase);
    nChannel = CDOTA_PlayerResource::GetBroadcasterChannel(g_pDOTAPlayerResource, v13);
  }
  v6 = 0;
  v7 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    while ( 1 )
    {
      v8 = UTIL_PlayerByIndex(v7);
      v9 = v8;
      if ( v8 == 0 || (*(v8->_vptr_IHandleEntity + 140))(v8) == 0 )
        goto LABEL_7;
      if ( v9->m_pl.hltv )
      {
LABEL_11:
        v10 = 1 << v6;
        ++v7;
        v11 = v6++ >> 5;
        pRecipients->m_Bits.m_Ints[v11] |= v10;
        if ( gpGlobals->maxClients < v7 )
          return;
      }
      else
      {
        if ( v9->m_iTeamNum.m_Value == 1 )
        {
          if ( !CDOTAPlayer::IsACoach(v9) || CDOTAPlayer::GetCoachedTeamNum(v9) == *(pStructBase + 383) )
            goto LABEL_11;
        }
        else if ( pStructBase != v9 )
        {
          if ( nChannel != 6 )
          {
            v12 = (*(v9->_vptr_IHandleEntity + 393))(v9);
            if ( nChannel == CDOTA_PlayerResource::GetBroadcasterChannel(g_pDOTAPlayerResource, v12) )
              goto LABEL_11;
          }
          if ( *(pStructBase + 383) == 1
            && CDOTAPlayer::IsACoach(pStructBase)
            && CDOTAPlayer::GetCoachedTeamNum(pStructBase) == v9->m_iTeamNum.m_Value )
          {
            goto LABEL_11;
          }
        }
LABEL_7:
        ++v7;
        ++v6;
        if ( gpGlobals->maxClients < v7 )
          return;
      }
    }
  }
}


// SendTeamMatesAndCommentatorTable_UserGroupFunc  (line 126, @0x000000000265b590, libserver.so)  // inlines: Bitvec_Set, ClearAll, ClearAllRecipients, GetTeamNumber, IsACoach, Set, SetRecipient, ToDOTAPlayer, memset
// calls: CDOTA_PlayerResource::IsBroadcaster, UTIL_PlayerByIndex, CDOTA_PlayerResource::GetBroadcasterChannel, CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum
// globals: g_pDOTAPlayerResource
void __fastcall SendTeamMatesAndCommentatorTable_UserGroupFunc(
        const char *pUserGroupName,
        const void *pStructBase,
        CSendProxyRecipients *pRecipients,
        int objectID)
{
  int v5; // eax
  int v6; // r12d
  int v7; // ebx
  unsigned __int8 m_Value; // al
  CBasePlayer *v9; // rax
  CDOTAPlayer *v10; // r15
  int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  uint32 nChannel; // [rsp+4h] [rbp-3Ch]

  *pRecipients = 0;
  v5 = (*(*pStructBase + 3144LL))(pStructBase, pStructBase, pRecipients, objectID);
  nChannel = 6;
  if ( CDOTA_PlayerResource::IsBroadcaster(g_pDOTAPlayerResource, v5) )
  {
    v14 = (*(*pStructBase + 3144LL))(pStructBase);
    nChannel = CDOTA_PlayerResource::GetBroadcasterChannel(g_pDOTAPlayerResource, v14);
  }
  v6 = 0;
  v7 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = UTIL_PlayerByIndex(v7);
        v10 = v9;
        if ( v9 != 0 && (*(v9->_vptr_IHandleEntity + 140))(v9) != 0 )
        {
          if ( v10->m_pl.hltv )
            goto LABEL_12;
          m_Value = v10->m_iTeamNum.m_Value;
          if ( m_Value == *(pStructBase + 383) )
            goto LABEL_12;
          if ( m_Value != 1 )
            break;
          if ( !CDOTAPlayer::IsACoach(v10) || CDOTAPlayer::GetCoachedTeamNum(v10) == *(pStructBase + 383) )
            goto LABEL_12;
        }
LABEL_8:
        ++v7;
        ++v6;
        if ( gpGlobals->maxClients < v7 )
          return;
      }
      if ( pStructBase == v10 )
        goto LABEL_8;
      if ( nChannel == 6 )
        goto LABEL_8;
      v13 = (*(v10->_vptr_IHandleEntity + 393))(v10);
      if ( nChannel != CDOTA_PlayerResource::GetBroadcasterChannel(g_pDOTAPlayerResource, v13) )
        goto LABEL_8;
LABEL_12:
      v11 = 1 << v6;
      ++v7;
      v12 = v6++ >> 5;
      pRecipients->m_Bits.m_Ints[v12] |= v11;
    }
    while ( gpGlobals->maxClients >= v7 );
  }
}


// SendCompendiumData_UserGroupFunc  (line 181, @0x00000000026541e0, libserver.so)  // inlines: Bitvec_Set, ClearAll, Set, SetOnly, memset
void __fastcall SendCompendiumData_UserGroupFunc(
        const char *pUserGroupName,
        const void *pStructBase,
        CSendProxyRecipients *pRecipients,
        int objectID)
{
  *pRecipients = 0;
  pRecipients->m_Bits.m_Ints[(objectID - 1) >> 5] |= 1 << (objectID - 1);
}


// cc_CreatePredictionError_f  (line 215, @0x0000000002656f70, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, VectorAdd, operator+
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
void __cdecl cc_CreatePredictionError_f()
{
  CEntityIdentity *v0; // rax
  CBaseEntity *m_pInstance; // rbx
  const Vector *AbsOrigin; // rax
  vec_t v3; // xmm1_4
  vec_t v4; // xmm0_4
  Vector vOrigin; // [rsp+0h] [rbp-20h] BYREF

  v0 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
  if ( v0 != 0 && v0 != -120LL && (v0[1].m_EHandle.m_Index & 0x7FFF) == 1 )
    m_pInstance = v0[1].m_pInstance;
  else
    m_pInstance = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v3 = AbsOrigin->z + 0.0;
  v4 = AbsOrigin->x + 63.0;
  vOrigin.y = AbsOrigin->y + 0.0;
  vOrigin.z = v3;
  vOrigin.x = v4;
  CBaseEntity::SetAbsOrigin(m_pInstance, &vOrigin);
}


// CDOTAPlayer::CDOTAPlayer  (line 223, @0x000000000267b3a0, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkVarBase, CUtlLinkedList, CUtlMemory, ConstructList, EnsureValidValue, EnsureValidValue<ShopItemViewMode_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, ResetDbgInfo, Set, Vector, Zero, operator!=, operator=, operator=<DOTA_SHOP_CATEGORY>, operator=<bool>, operator=<float>, operator=<int>, ~CUtlLinkedList, ~CUtlMemory
// calls: CBaseMultiplayerPlayer::CBaseMultiplayerPlayer, CountdownTimer::CountdownTimer, CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer, _Unwind_Resume, CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int>::Purge
// callers: CDOTAPlayer::CEntityInstanceEntityClass::ConstructInstance
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAPlayer::CDOTAPlayer(CDOTAPlayer *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (*v3)(...); // rax
  int m_Value; // r12d
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  bool v8; // zf
  int v9; // r10d
  _DWORD v10[12]; // [rsp+0h] [rbp-30h] BYREF

  CBaseMultiplayerPlayer::CBaseMultiplayerPlayer(this);
  this->m_vecStartingPosition.m_Value.z = 0.0;
  this->_vptr_IHandleEntity = &off_416E110;
  this->_vptr_CAI_ExpresserSink = &off_416F2A0;
  this->_vptr_ISharedObjectListener = off_416F2C8;
  this->m_vecStartingPosition.m_Value.y = 0.0;
  this->m_vecStartingPosition.m_Value.x = 0.0;
  this->m_iSpectatorClickBehavior.m_Value = 0;
  this->m_flAspectRatio.m_Value = 0.0;
  this->m_hSpectatorQueryUnit.m_Value.m_Index = -1;
  this->m_iStatsPanel.m_Value = 0;
  this->m_iShopPanel.m_Value = 0;
  this->m_iShopViewMode.m_Value = ShopItemViewMode_t::SHOP_VIEW_MODE_LIST;
  this->m_iStatsDropdownCategory.m_Value = 0;
  this->m_iStatsDropdownSort.m_Value = 0;
  this->m_bInShowCaseMode.m_Value = 0;
  this->m_flCameraZoomAmount.m_Value = 0.0;
  this->m_iHighPriorityScore.m_Value = 0;
  this->m_bUsingAssistedCameraOperator.m_Value = 0;
  this->m_bUsingCameraMan.m_Value = 0;
  this->m_nPlayerAssistFlags.m_Value = 0;
  this->m_iMusicStatus.m_Value = 0;
  CountdownTimer::CountdownTimer(&this->m_MusicRestTime);
  this->m_unitorders.m_Head = -1;
  this->m_unitorders.m_Tail = -1;
  this->m_unitorders.m_FirstFree = -1;
  this->m_unitorders.m_ElementCount = 0;
  this->m_unitorders.m_NumAlloced = 0;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_hKillCamUnit.m_Value.m_Index = -1;
  this->m_hAssignedHero.m_Value.m_Index = -1;
  this->m_iPlayerID.m_Value = 0;
  this->m_nServerOrderSequenceNumber.m_Value = 0;
  this->m_unitorders.m_Memory.m_pMemory = 0;
  this->m_unitorders.m_Memory.m_nAllocationCount = 0;
  this->m_unitorders.m_Memory.m_nGrowSize = 0;
  this->m_unitorders.m_LastAlloc.index = -1;
  this->m_unitorders.m_pElements = 0;
  this->m_nCachedCoachedTeam.m_Value = 0;
  this->m_iTotalEarnedGold.m_Value = 0;
  this->m_iTotalEarnedXP.m_Value = 0;
  v3 = vptr_IHandleEntity[211];
  v10[0] = 0;
  v10[1] = 0;
  v10[2] = 0;
  v3(this, v10);
  if ( this->m_iPlayerID.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPlayerID.m_Value = -1;
  }
  m_Value = this->m_iMusicStatus.m_Value;
  this->m_bWantsRandomHero = 0;
  this->m_bFullyJoinedServer = 0;
  this->m_flLastKnownActiveTime = 0.0;
  this->m_flLastReconnectTime = 0.0;
  this->m_flLastChatWheelTime[0] = 0.0;
  this->m_flLastChatWheelTime[1] = 0.0;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4740, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iMusicStatus.m_Value = 0;
  }
  m_Index = this->m_hKillCamUnit.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hKillCamUnit.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hKillCamUnit.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hKillCamUnit.m_Value.m_Index = -1;
      }
    }
  }
  v8 = this->m_iShopPanel.m_Value == 15;
  this->m_iSwapPreferencePlayerID = -1;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4592, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iShopPanel.m_Value = 15;
  }
  if ( !this->m_bUsingCameraMan.m_Value )
  {
    if ( !this->m_bUsingAssistedCameraOperator.m_Value )
      goto LABEL_13;
LABEL_22:
    (*(this->_vptr_IHandleEntity + 22))(this, 4729, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = !this->m_bInShowCaseMode.m_Value;
    this->m_bUsingAssistedCameraOperator.m_Value = 0;
    if ( v8 )
      goto LABEL_14;
    goto LABEL_23;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 4730, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v8 = !this->m_bUsingAssistedCameraOperator.m_Value;
  this->m_bUsingCameraMan.m_Value = 0;
  if ( !v8 )
    goto LABEL_22;
LABEL_13:
  if ( this->m_bInShowCaseMode.m_Value )
  {
LABEL_23:
    (*(this->_vptr_IHandleEntity + 22))(this, 4672, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInShowCaseMode.m_Value = 0;
  }
LABEL_14:
  if ( this->m_flCameraZoomAmount.m_Value != 0.5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4676, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCameraZoomAmount.m_Value = 0.5;
  }
  if ( this->m_iHighPriorityScore.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4680, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iHighPriorityScore.m_Value = 0;
  }
  v9 = this->m_nPlayerAssistFlags.m_Value;
  this->m_flHighPriorityScoreTimeStamp = 0.0;
  if ( v9 != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nPlayerAssistFlags.m_Value = 0;
  }
  this->m_eUnitsAutoattackMode[0] = CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_INVALID;
  this->m_eUnitsAutoattackMode[1] = CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_INVALID;
  this->m_eToggledAutoattackMode = CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_INVALID;
}


// CDOTAPlayer::~CDOTAPlayer  (line 260, @0x000000000267b8a0, libserver.so)  // inlines: ~CUtlLinkedList, ~CUtlMemory
// calls: CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int>::Purge, CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer
// callers: CDOTAPlayer::~CDOTAPlayer
void __fastcall CDOTAPlayer::~CDOTAPlayer(CDOTAPlayer *const this)
{
  CUtlLinkedList<CUnitOrders,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,short unsigned int>,short unsigned int> > *p_m_unitorders; // r12

  p_m_unitorders = &this->m_unitorders;
  this->_vptr_IHandleEntity = &off_416E110;
  this->_vptr_CAI_ExpresserSink = &off_416F2A0;
  this->_vptr_ISharedObjectListener = off_416F2C8;
  CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::RemoveAll(&this->m_unitorders);
  CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>::Purge(&p_m_unitorders->m_Memory);
  CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer(this);
}


// CDOTAPlayer::~CDOTAPlayer  (line 260, @0x000000000267b900, libserver.so)
// calls: CDOTAPlayer::~CDOTAPlayer, CBaseEntity::operator delete
void __fastcall CDOTAPlayer::~CDOTAPlayer(CDOTAPlayer *const this)
{
  CDOTAPlayer::~CDOTAPlayer(this);
  CBaseEntity::operator delete(this);
}


// CDOTAPlayer::Connect  (line 264, @0x0000000002699d30, libserver.so)
// calls: CBaseMultiplayerPlayer::Connect, CBaseAnimating::UseClientSideAnimation
void __fastcall CDOTAPlayer::Connect(CDOTAPlayer *const this)
{
  CBaseMultiplayerPlayer::Connect(this);
  CBaseAnimating::UseClientSideAnimation(this, 1);
}


// CDOTAPlayer::GetPlayerByPlayerID  (line 270, @0x0000000002659850, libserver.so)  // inlines: ToDOTAPlayer
// calls: UTIL_PlayerByIndex
// callers: CDOTABaseAbility::OnAbilityPinged, DebugTestChallenge, DebugTestQuestChallenge, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::ClientDisconnected, CDOTAGamerules::ClientMsg_WorldLine, CDOTAGamerules::Think, CDOTAGamerules::State_Enter_POST_GAME, CDOTA_Item::OnAbilityPinged, CDOTA_OGS::LogHeroDeath, CDOTA_OGS::LogBuildingDeath, CDOTA_UnitInventory::SellItem (19 total)
CDOTAPlayer *__fastcall CDOTAPlayer::GetPlayerByPlayerID(int iPlayerID)
{
  CEntityIndex v2; // r12d
  CBasePlayer *v3; // rax
  CDOTAPlayer *v4; // rbx

  v2.m_Data = 1;
  if ( gpGlobals->maxClients <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(v2);
    v4 = v3;
    if ( v3 != 0
      && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0
      && (*(v4->_vptr_IHandleEntity + 393))(v4) != -1
      && (*(v4->_vptr_IHandleEntity + 393))(v4) == iPlayerID )
    {
      break;
    }
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 0;
  }
  return v4;
}


// CDOTAPlayer::UpdatePlayerIDFromSteamID  (line 288, @0x0000000002699d60, libserver.so)  // inlines: GetGameMode, GetTeamNumber, IsAddOnGame, IsPlayerTeam, NetworkStateChanged, Set, entindex, operator=<int>
// calls: CMsgPlayerInfo::CMsgPlayerInfo, CEntityInstance::GetEntityIndex, CBasePlayer::GetNetworkIDString, V_stricmp_fast, CBaseMultiplayerPlayer::GetSteamIDAsUInt64, CDOTA_PlayerResource::FindOrCreatePlayerID, CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment, CMsgPlayerInfo::~CMsgPlayerInfo, _Unwind_Resume
// callers: CDOTAPlayer::ChangeTeam, CDOTA_PlayerResource::CustomGame_AssignPlayerID
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::UpdatePlayerIDFromSteamID(CDOTAPlayer *const this)
{
  unsigned __int8 (__fastcall *v2)(IVEngineServer2 *, _QWORD, _BYTE *); // r14
  CEntityIndex v3; // eax
  const char *NetworkIDString; // rax
  __int64 v5; // rsi
  bool v6; // r13
  char v7; // r14
  __int64 m_Value; // rdx
  int v9; // eax
  bool v10; // zf
  bool v11; // al
  char v12; // al
  bool v13; // dl
  bool v14; // r13
  uint64 SteamIDAsUInt64; // rax
  int PlayerID; // r13d
  _BYTE v17[104]; // [rsp-8h] [rbp-68h] BYREF

  if ( g_pDOTAPlayerResource != 0 )
  {
    CMsgPlayerInfo::CMsgPlayerInfo(v17);
    v2 = *(*engine + 656LL);
    v3.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    if ( v2(engine, v3.m_Data, v17) == 0 || v17[53] == 0 )
    {
      NetworkIDString = CBasePlayer::GetNetworkIDString(this);
      v6 = NetworkIDString != 0 && V_stricmp_fast(NetworkIDString, "BOT") == 0;
      v7 = 1;
      m_Value = this->m_iTeamNum.m_Value;
      v9 = *&g_pGameRules[6].m_szQuestName[68];
      if ( v9 != 15 )
      {
        v10 = v9 == 19;
        v11 = (m_Value - 6) <= 7;
        m_Value = (m_Value - 2);
        LOBYTE(m_Value) = m_Value <= 1;
        v7 = m_Value | v11 | v10;
      }
      v12 = (*(this->_vptr_IHandleEntity + 391))(this, v5, m_Value);
      v13 = v6;
      v14 = 1;
      if ( v12 == 0 )
        v14 = v13;
      SteamIDAsUInt64 = CBaseMultiplayerPlayer::GetSteamIDAsUInt64(this);
      PlayerID = CDOTA_PlayerResource::FindOrCreatePlayerID(g_pDOTAPlayerResource, SteamIDAsUInt64, v14, v7);
      if ( PlayerID != this->m_iPlayerID.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iPlayerID.m_Value = PlayerID;
      }
      CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment(g_pDOTAPlayerResource, this);
    }
    CMsgPlayerInfo::~CMsgPlayerInfo(v17);
  }
}


// CDOTAPlayer::SetAssignedHero  (line 315, @0x00000000026598f0, libserver.so)  // inlines: DOTAGameRules, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetLastOrderTime, operator!=, operator=
// callers: CDOTAGamerules::SwapPlayers, CDOTAGamerules::OnARDMDuringMatchSpawnComplete, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, OnHeroSpawned
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAPlayer::SetAssignedHero(CDOTAPlayer *const this, CBaseEntity *pCharacter)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  float v8; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx

  m_pInstance = 0;
  m_Index = this->m_hAssignedHero.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAssignedHero.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hAssignedHero.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pCharacter != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pCharacter != 0 && (m_pEntity = pCharacter->m_pEntity) != 0 )
    {
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v11 = 0x7FFF;
      else
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAssignedHero.m_Value.m_Index) = v11 | this->m_hAssignedHero.m_Value.m_Index & 0x8000;
      this->m_hAssignedHero.m_Value.m_Index = (v10 << 15) | this->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hAssignedHero.m_Value.m_Index = -1;
    }
  }
  v8 = 0.0;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastOrderTime = v8;
  this->m_flLastKnownActiveTime = v8;
}


// CDOTAPlayer::PhysicsSimulate  (line 322, @0x000000000269a080, libserver.so)
// calls: CBaseEntity::PhysicsRunThink, CBasePlayer::PhysicsSimulate
void __fastcall CDOTAPlayer::PhysicsSimulate(CDOTAPlayer *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 391))(this) != 0 )
    CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS);
  CBasePlayer::PhysicsSimulate(this);
}


// CDOTAPlayer::PreThink  (line 332, @0x000000000269a0c0, libserver.so)
// calls: CBasePlayer::PreThink, CDOTAPlayer::ExecuteOrders
void __fastcall CDOTAPlayer::PreThink(CDOTAPlayer *const this)
{
  CBasePlayer::PreThink(this);
  CDOTAPlayer::ExecuteOrders(this);
}


// CDOTAPlayer::CreatePlayer  (line 339, @0x0000000002659a40, libserver.so)
// calls: CreateEntityByName
// callers: ClientPutInServer
CDOTAPlayer *__fastcall CDOTAPlayer::CreatePlayer(const char *className, CEntityIndex nEntIndex)
{
  return CreateEntityByName(className, nEntIndex);
}


// CDOTAPlayer::Spawn  (line 345, @0x000000000269a0e0, libserver.so)  // inlines: DOTAGameRules, FStrEq, GetBool, GetGameTime, GetInt, NetworkStateChanged, Set, SetLastOrderTime, SetSolid, _V_strcmp, operator!=, operator=, operator=<Vector>
// calls: CBasePlayer::Spawn, CBaseEntity::SetMoveType, CBaseEntity::GetAbsOrigin, CBasePlayer::GetNetworkIDString, V_stricmp_fast, CommandLine, CDOTAPlayer::SetWantsSpecificHero, GDOTAGCClientSystem, CDOTAPlayer::SetWantsRandomHero
// strings: "-hero", "-team", "-herophotos", "npc_dota_hero_abaddon"
void __fastcall CDOTAPlayer::Spawn(CDOTAPlayer *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  const Vector *AbsOrigin; // rax
  float v5; // xmm0_4
  const char *NetworkIDString; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  const char *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  const char *v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  vec_t x; // [rsp+4h] [rbp-2Ch]
  vec_t y; // [rsp+8h] [rbp-28h]
  vec_t z; // [rsp+Ch] [rbp-24h]

  p_m_Collision = &this->m_Collision;
  CBasePlayer::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 0);
  (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  if ( AbsOrigin->x != this->m_vecStartingPosition.m_Value.x
    || AbsOrigin->y != this->m_vecStartingPosition.m_Value.y
    || AbsOrigin->z != this->m_vecStartingPosition.m_Value.z )
  {
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
    (*(this->_vptr_IHandleEntity + 22))(this, 4552, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecStartingPosition.m_Value.x = x;
    this->m_vecStartingPosition.m_Value.y = y;
    this->m_vecStartingPosition.m_Value.z = z;
  }
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastOrderTime = v5;
  this->m_flLastKnownActiveTime = v5;
  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    NetworkIDString = CBasePlayer::GetNetworkIDString(this);
    if ( NetworkIDString == 0 || V_stricmp_fast(NetworkIDString, "BOT") != 0 )
    {
      v8 = CommandLine(v7);
      v9 = 0;
      if ( (*(*v8 + 24LL))(v8, "-hero", 0) != 0 )
      {
        v11 = CommandLine(v10);
        v9 = (*(*v11 + 80LL))(v11, "-hero", "");
      }
      v12 = CommandLine(v10);
      if ( (*(*v12 + 24LL))(v12, "-team", 0) != 0 )
      {
        v14 = CommandLine(v13);
        v15 = (*(*v14 + 80LL))(v14, "-team", "");
        v17 = CommandLine(v16);
        if ( (*(*v17 + 64LL))(v17, "-herophotos") != 0 )
        {
LABEL_15:
          v15 = "good";
          v9 = "npc_dota_hero_abaddon";
LABEL_16:
          if ( *v15 != 0 && *(GDOTAGCClientSystem() + 260) == 0 )
          {
            if ( v15 == "good" || strcmp("good", v15) == 0 )
            {
              (*(this->_vptr_IHandleEntity + 70))(this, 2);
            }
            else if ( v15 == "bad" || strcmp("bad", v15) == 0 )
            {
              (*(this->_vptr_IHandleEntity + 70))(this, 3);
            }
            else if ( v15 == "spectator" || strcmp("spectator", v15) == 0 )
            {
              (*(this->_vptr_IHandleEntity + 70))(this, 1);
            }
          }
          goto LABEL_17;
        }
        if ( v15 != 0 )
          goto LABEL_16;
      }
      else
      {
        v18 = CommandLine(v13);
        if ( (*(*v18 + 64LL))(v18, "-herophotos") != 0 )
          goto LABEL_15;
      }
LABEL_17:
      if ( v9 != 0 && *v9 != 0 )
      {
        if ( strcmp(v9, "random") == 0 )
          CDOTAPlayer::SetWantsRandomHero(this);
        else
          CDOTAPlayer::SetWantsSpecificHero(this, v9);
      }
    }
  }
}


// CDOTAPlayer::InitialSpawn  (line 410, @0x000000000269a420, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: CBasePlayer::InitialSpawn, CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::InitialSpawn(CDOTAPlayer *const this)
{
  CDOTA_PlayerResource *v2; // rdi
  int m_Value; // eax

  CBasePlayer::InitialSpawn(this);
  if ( this->m_iTotalEarnedGold.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4936, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_iTotalEarnedXP.m_Value;
    this->m_iTotalEarnedGold.m_Value = 0;
    if ( m_Value == 0 )
    {
LABEL_3:
      v2 = g_pDOTAPlayerResource;
      if ( g_pDOTAPlayerResource == 0 )
        return;
      goto LABEL_4;
    }
  }
  else if ( this->m_iTotalEarnedXP.m_Value == 0 )
  {
    goto LABEL_3;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 4940, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v2 = g_pDOTAPlayerResource;
  this->m_iTotalEarnedXP.m_Value = 0;
  if ( v2 != 0 )
LABEL_4:
    CDOTA_PlayerResource::ApplyDelayedCustomTeamAssignment(v2, this);
}


// CDOTAPlayer::BuildTransmitInfo  (line 422, @0x000000000269a4d0, libserver.so)  // inlines: DOTAGameRules, State_IsGameOver
// calls: CBasePlayer::BuildTransmitInfo, CDOTAPlayer::GetCoachedTeamNum
void __fastcall CDOTAPlayer::BuildTransmitInfo(
        CDOTAPlayer *const this,
        CGameCheckTransmitInfo *const gameInfo,
        CCheckTransmitInfo *pInfo)
{
  int CoachedTeamNum; // eax

  CBasePlayer::BuildTransmitInfo(this, gameInfo, pInfo);
  CoachedTeamNum = CDOTAPlayer::GetCoachedTeamNum(this);
  if ( CoachedTeamNum != 0 )
    gameInfo->m_nRecipientCoachedTeamNumber = CoachedTeamNum;
  gameInfo->m_bGameOverState = g_pGameRules != 0 && (*&g_pGameRules[6].m_szQuestName[28] - 6) <= 1;
}


// CDOTAPlayer::Event_Killed  (line 434, @0x000000000269a530, libserver.so)  // inlines: DOTAGameRules, GetGameTime, SetLastOrderTime
// calls: CBasePlayer::Event_Killed
void __fastcall CDOTAPlayer::Event_Killed(CDOTAPlayer *const this, const CTakeDamageInfo *const info)
{
  float v2; // xmm0_4

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastOrderTime = v2;
  this->m_flLastKnownActiveTime = v2;
  CBasePlayer::Event_Killed(this, info);
}


// CDOTAPlayer::CreateViewModel  (line 440, @0x0000000002653b90, libserver.so)
void __fastcall CDOTAPlayer::CreateViewModel(CDOTAPlayer *const this, int index)
{
  ;
}


// CDOTAPlayer::CheatImpulseCommands  (line 445, @0x0000000002653ba0, libserver.so)
void __fastcall CDOTAPlayer::CheatImpulseCommands(CDOTAPlayer *const this, int iImpulse)
{
  ;
}


// CDOTAPlayer::FindPickerEntity  (line 450, @0x0000000002654330, libserver.so)  // inlines: CEntityIndex
// calls: UTIL_EntityByIndex
CBaseEntity *__fastcall CDOTAPlayer::FindPickerEntity(CDOTAPlayer *const this)
{
  return UTIL_EntityByIndex(this->m_iCrosshairEntity);
}


// CDOTAPlayer::EntSelectSpawnPoint  (line 455, @0x0000000002654600, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: CGameEntitySystem::FindEntityByClassname, Warning
// strings: "info_player_start", "EntSelectSpawnPoint: no info_player_start on level\n"
CBaseEntity *__fastcall CDOTAPlayer::EntSelectSpawnPoint(CDOTAPlayer *const this)
{
  CBaseEntity *result; // rax
  CEntityIdentity *v2; // rax

  result = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "info_player_start");
  if ( result == 0 )
  {
    Warning("EntSelectSpawnPoint: no info_player_start on level\n");
    v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
    if ( v2 == 0 || (v2->m_EHandle.m_Index & 0x7FFF) != 0 )
      return 0;
    else
      return v2->m_pInstance;
  }
  return result;
}


// CDOTAPlayer::AddExecuteOrders  (line 467, @0x0000000002689b50, libserver.so)  // inlines: AddToTail, Get, Get<google::protobuf::RepeatedPtrField<CDOTAMsg_UnitOrder>::TypeHandler>, NetworkStateChanged, Set, operator=<int>, operator[], orders
// calls: CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::InsertBefore, MsgUnitOrderToUnitOrder
// callers: CDOTAGamerules::ClientMsg_ExecuteOrders
void __fastcall CDOTAPlayer::AddExecuteOrders(
        CDOTAPlayer *const this,
        const CDOTAClientMsg_ExecuteOrders *const msgOrders)
{
  CUtlLinkedList<CUnitOrders,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,short unsigned int>,short unsigned int> > *p_m_unitorders; // r14
  __int64 v5; // rbx
  unsigned __int16 v6; // ax
  int v7; // r15d

  if ( *(msgOrders + 8) > 0 && this->m_unitorders.m_ElementCount <= 0x200u )
  {
    p_m_unitorders = &this->m_unitorders;
    v5 = 0;
    do
    {
      if ( *(*(*(msgOrders + 3) + 8 * v5) + 68LL) <= this->m_nServerOrderSequenceNumber.m_Value
        || (v6 = CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::InsertBefore(
                   p_m_unitorders,
                   0xFFFFu),
            MsgUnitOrderToUnitOrder(*(*(msgOrders + 3) + 8 * v5), &this->m_unitorders.m_Memory.m_pMemory[v6].m_Element),
            (v7 = *(*(*(msgOrders + 3) + 8 * v5) + 68LL)) == this->m_nServerOrderSequenceNumber.m_Value) )
      {
        if ( v5 + 1 >= *(msgOrders + 8) )
          return;
      }
      else
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4856, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nServerOrderSequenceNumber.m_Value = v7;
        if ( v5 + 1 >= *(msgOrders + 8) )
          return;
      }
      ++v5;
    }
    while ( this->m_unitorders.m_ElementCount <= 0x200u );
  }
}


// CDOTAPlayer::ExecuteOrders  (line 485, @0x000000000267b920, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Destruct<CUnitOrders>, Free, GetAssignedHero, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetSerialNumber, IncrementCommandsIssued, IndexToIdentity, Init, InternalElement, IsValidTeamPlayerID, LookupEntity, Purge, Remove, RemoveAll, SetLastOrderTime, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: DOTA_ExecuteOrders, CDOTAPlayer::CreateSpectatorClicks, CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::Unlink, CUtlMemory<CEntityIndex, int>::Purge, CDOTA_BaseNPC::GetOpposingTeamNumber, CBaseModelEntity::CanBeSeenByTeam
// callers: CDOTAPlayer::PreThink
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::ExecuteOrders(CDOTAPlayer *const this)
{
  __int64 m_Head; // rdx
  uint32 v3; // esi
  unsigned __int16 v4; // cx
  int v5; // edi
  int v6; // eax
  __int64 v7; // rsi
  CEntityIdentity *v8; // rcx
  char *v9; // rcx
  bool CanBeSeenByTeam; // al
  float v11; // xmm0_4
  int v12; // r13d
  bool v13; // r14
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v14; // r12
  unsigned int v15; // ecx
  int v16; // eax
  unsigned __int16 v17; // r12
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v18; // r15
  bool v19; // zf
  CDOTA_BaseNPC *v20; // r12
  int OpposingTeamNumber; // eax

  m_Head = this->m_unitorders.m_Head;
  if ( m_Head != 0xFFFF )
  {
    v3 = this->m_hAssignedHero.m_Value.m_Index >> 15;
    if ( this->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (v3 << 15) | v4 & 0x7FFF;
    v7 = g_pEntitySystem;
    if ( (v6 + 2) > 1
      && (v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
      && (v7 = 120LL * (v5 & 0x1FF), (v9 = v8 + v7) != 0)
      && v6 == *(v9 + 4)
      && (v20 = *v9, *v9 != 0)
      && v20->m_bIsDOTANPC
      && (v20->m_iUnitType & 1) != 0 )
    {
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(*v9);
      CanBeSeenByTeam = CBaseModelEntity::CanBeSeenByTeam(v20, OpposingTeamNumber);
      m_Head = this->m_unitorders.m_Head;
    }
    else
    {
      CanBeSeenByTeam = 0;
    }
    v11 = 0.0;
    if ( g_pGameRules != 0 )
      v11 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_flLastOrderTime = v11;
    if ( CanBeSeenByTeam )
      this->m_flLastKnownActiveTime = v11;
    v12 = 2;
    v13 = 1;
    while ( m_Head != 0xFFFF && v13 )
    {
      v13 = 0;
      v14 = &this->m_unitorders.m_Memory.m_pMemory[m_Head];
      v15 = v14->m_Element.m_nOrderType - 1;
      if ( v15 <= 0x1B )
        v13 = ((1LL << v15) & 0xC00000F) != 0;
      v14->m_Element.m_nIssuerPlayerIndex = (*(this->_vptr_IHandleEntity + 393))(this, v7);
      v16 = (*(this->_vptr_IHandleEntity + 393))(this);
      if ( v16 >= 0 && v16 < *(g_pDOTAPlayerResource + 194) )
        ++*(g_pDOTAPlayerResource + v16 + 8422);
      DOTA_ExecuteOrders(&v14->m_Element, 1, 0, 1);
      CDOTAPlayer::CreateSpectatorClicks(this, &v14->m_Element);
      v17 = this->m_unitorders.m_Head;
      CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::Unlink(
        &this->m_unitorders,
        v17);
      v18 = &this->m_unitorders.m_Memory.m_pMemory[v17];
      v19 = (v18->m_Element.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v18->m_Element.m_nUnits.m_Size = 0;
      if ( v19 )
      {
        CUtlMemory<CEntityIndex,int>::Purge(&v18->m_Element.m_nUnits.m_Memory);
        if ( (v18->m_Element.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityIndex,int>::Purge(&v18->m_Element.m_nUnits.m_Memory);
      }
      --v12;
      v18->m_Next = this->m_unitorders.m_FirstFree;
      this->m_unitorders.m_FirstFree = v17;
      if ( v12 == 0 )
        break;
      m_Head = this->m_unitorders.m_Head;
    }
  }
}


// CDOTAPlayer::CreateSpectatorClicks  (line 531, @0x0000000002659a50, libserver.so)  // inlines: Add, CDOTAUserMsg_SpectatorPlayerClick_t, CDOTAUserMsg_SpectatorPlayerUnitOrders_t, CNetMessagePB, CUserMessagePB, CopyArray, FindGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>, FindGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>, FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>, FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>, GetRaw, MoveArray, PostEvent<CDOTAUserMsg_SpectatorPlayerClick_t>, PostEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>, Reserve, SendUserMessage<CDOTAUserMsg_SpectatorPlayerClick_t>, SendUserMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>, add_units, end, entindex, memcpy, mutable_position, operator!=, operator(), operator==, set_ability_index, set_entindex, set_has_entindex, set_has_order_type, set_has_position, set_has_sequence_number, set_has_target_index, set_has_x, set_has_y, set_has_z, set_order_type, set_queue, set_sequence_number, set_target_index, set_x, set_y, set_z, ~CDOTAUserMsg_SpectatorPlayerClick_t, ~CDOTAUserMsg_SpectatorPlayerUnitOrders_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CTeamRecipientFilter::CTeamRecipientFilter, BuildRecipientListForTeamEvent, CDOTAUserMsg_SpectatorPlayerUnitOrders::CDOTAUserMsg_SpectatorPlayerUnitOrders, CEntityInstance::GetEntityIndex, operator new [], memcpy, operator delete [], CDOTAUserMsg_SpectatorPlayerUnitOrders::~CDOTAUserMsg_SpectatorPlayerUnitOrders, CDOTAUserMsg_SpectatorPlayerClick::CDOTAUserMsg_SpectatorPlayerClick, CDOTAUserMsg_SpectatorPlayerClick::~CDOTAUserMsg_SpectatorPlayerClick, CRecipientFilter::~CRecipientFilter, operator new (18 total)
// callers: CDOTAPlayer::ExecuteOrders
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>(bool)::s_hEvent
void __fastcall CDOTAPlayer::CreateSpectatorClicks(CDOTAPlayer *const this, CUnitOrders *const orders)
{
  CEntityIndex *m_pMemory; // rbx
  __int64 m_Size; // rax
  int v6; // edx
  CEntityIndex *v7; // r13
  void *v8; // rax
  __int64 v9; // rdx
  int32 m_Data; // r12d
  int v11; // edx
  void *v12; // r15
  float x; // r12d
  CMsgVector *v14; // r13
  CMsgVector *v15; // r12
  vec_t y; // r13d
  CMsgVector *v17; // r12
  vec_t z; // r13d
  bool m_bQueue; // dl
  __int64 v20; // r15
  IGameEventSystem *v21; // r13
  void (__fastcall *v22)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // r12
  __int64 v23; // r12
  int32 v24; // eax
  IGameEventSystem *v25; // rbx
  void (__fastcall *v26)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // r13
  CBaseEntity *v27; // rax
  void *v28; // rax
  int v29; // eax
  _QWORD v31[2]; // [rsp+20h] [rbp-1C0h] BYREF
  int v32; // [rsp+30h] [rbp-1B0h]
  CEntityIndex v33; // [rsp+38h] [rbp-1A8h]
  int m_nOrderType; // [rsp+3Ch] [rbp-1A4h]
  void *src; // [rsp+40h] [rbp-1A0h]
  int v36; // [rsp+48h] [rbp-198h]
  int v37; // [rsp+4Ch] [rbp-194h]
  int32 v38; // [rsp+50h] [rbp-190h]
  int32 v39; // [rsp+54h] [rbp-18Ch]
  CMsgVector *v40; // [rsp+58h] [rbp-188h]
  bool v41; // [rsp+60h] [rbp-180h]
  int m_nOrderSequenceNumber; // [rsp+64h] [rbp-17Ch]
  CTeamRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v44; // [rsp+1A8h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  CTeamRecipientFilter::CTeamRecipientFilter(&filter, 1, 0);
  BuildRecipientListForTeamEvent(this, &filter);
  CDOTAUserMsg_SpectatorPlayerUnitOrders::CDOTAUserMsg_SpectatorPlayerUnitOrders(v31);
  v31[0] = off_416D490;
  v33.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  m_pMemory = orders->m_nUnits.m_Memory.m_pMemory;
  m_nOrderType = orders->m_nOrderType;
  m_Size = orders->m_nUnits.m_Size;
  v6 = v32 | 3;
  v32 |= 3u;
  v7 = &m_pMemory[m_Size];
  if ( m_pMemory == v7 )
  {
    v29 = v6;
  }
  else
  {
    do
    {
      v9 = v36;
      m_Data = m_pMemory->m_Data;
      if ( v36 == v37 )
      {
        v11 = 2 * v36;
        v12 = src;
        if ( v36 + 1 >= 2 * v36 )
          v11 = v36 + 1;
        if ( v11 < 4 )
          v11 = 4;
        v37 = v11;
        v8 = operator new[](4LL * v11);
        src = v8;
        v9 = v36;
        if ( v12 != 0 )
        {
          memcpy(v8, v12, 4LL * v36);
          operator delete[](v12);
          v8 = src;
          v9 = v36;
        }
      }
      else
      {
        v8 = src;
      }
      ++m_pMemory;
      v36 = v9 + 1;
      *(v8 + v9) = m_Data;
    }
    while ( v7 != m_pMemory );
    v29 = v32;
  }
  if ( orders->m_nTargetIndex.m_Data != 0 )
  {
    v38 = orders->m_nTargetIndex.m_Data;
    v29 |= 8u;
  }
  if ( orders->m_nAbilityIndex.m_Data != 0 )
  {
    v39 = orders->m_nAbilityIndex.m_Data;
    v29 |= 0x10u;
  }
  x = orders->m_vPosition.x;
  if ( x != vec3_origin.x || vec3_origin.y != orders->m_vPosition.y || vec3_origin.z != orders->m_vPosition.z )
  {
    v14 = v40;
    v32 = v29 | 0x20;
    if ( v40 == 0 )
    {
      v14 = operator new(0x28u);
      CMsgVector::CMsgVector(v14);
      v40 = v14;
    }
    *(v14 + 4) |= 1u;
    *(v14 + 6) = x;
    v15 = v40;
    v32 |= 0x20u;
    y = orders->m_vPosition.y;
    if ( v40 == 0 )
    {
      v15 = operator new(0x28u);
      CMsgVector::CMsgVector(v15);
      v40 = v15;
    }
    *(v15 + 4) |= 2u;
    *(v15 + 7) = y;
    v17 = v40;
    v32 |= 0x20u;
    z = orders->m_vPosition.z;
    if ( v40 == 0 )
    {
      v17 = operator new(0x28u);
      CMsgVector::CMsgVector(v17);
      v40 = v17;
    }
    *(v17 + 4) |= 4u;
    *(v17 + 8) = z;
    v29 = v32;
  }
  m_bQueue = orders->m_bQueue;
  LOBYTE(v29) = v29 | 0xC0;
  v32 = v29;
  v20 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(bool)::s_hEvent;
  v41 = m_bQueue;
  v21 = g_pGameEventSystem;
  m_nOrderSequenceNumber = orders->m_nOrderSequenceNumber;
  v22 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(bool)::s_hEvent);
  v22(v21, 0, 0, &filter, v20, v31, 72);
  v31[0] = &off_416D310;
  CDOTAUserMsg_SpectatorPlayerUnitOrders::~CDOTAUserMsg_SpectatorPlayerUnitOrders(v31);
  if ( vec3_origin.x == orders->m_vPosition.x
    && vec3_origin.y == orders->m_vPosition.y
    && vec3_origin.z == orders->m_vPosition.z
    && orders->m_nTargetIndex.m_Data == 0
    || orders->m_nOrderType == 6
    && (v27 = UTIL_EntityByIndex(orders->m_nAbilityIndex)) != 0
    && (v28 = __dynamic_cast(v27, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0)) != 0
    && (*(*v28 + 2016LL))(v28) == 64 )
  {
    filter._vptr_IRecipientFilter = &off_3FF4590;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CDOTAUserMsg_SpectatorPlayerClick::CDOTAUserMsg_SpectatorPlayerClick(v31);
    v31[0] = off_416C4D0;
    v33.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v23 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>(bool)::s_hEvent;
    m_nOrderType = orders->m_nOrderType;
    v24 = orders->m_nTargetIndex.m_Data;
    v32 |= 7u;
    LODWORD(src) = v24;
    v25 = g_pGameEventSystem;
    v26 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>(bool)::s_hEvent);
    v26(v25, 0, 0, &filter, v23, v31, 40);
    v31[0] = &off_416C350;
    CDOTAUserMsg_SpectatorPlayerClick::~CDOTAUserMsg_SpectatorPlayerClick(v31);
    filter._vptr_IRecipientFilter = &off_3FF4590;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTAPlayer::HasSelectedHero  (line 587, @0x0000000002659ff0, libserver.so)
// calls: CDOTA_PlayerResource::HasSelectedHero
// callers: CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::HeroPickState_Think_CM_PICK, CDOTAGamerules::HeroPickState_Think_CD_PICK, CDOTAGamerules::HeroPickState_Think_ARDM_SELECT, CDOTAGamerules::HeroPickState_Think_AP_SELECT, CDOTAGamerules::HeroPickState_Think_SELECT_PENALTY, CDOTAGamerules::HeroPickState_Think_SD_SELECT, CDOTAGamerules::HeroPickState_Think_BD_SELECT, CDOTAGamerules::HeroPickState_Think_FH_SELECT, CDOTAGamerules::HeroPickState_Think_CUSTOMGAME_SELECT, dota_preview_hero, dota_record_hero (14 total)
// globals: g_pDOTAPlayerResource
bool __fastcall CDOTAPlayer::HasSelectedHero(CDOTAPlayer *const this)
{
  int v2; // eax

  if ( (*(this->_vptr_IHandleEntity + 393))(this) == -1 )
    return 0;
  v2 = (*(this->_vptr_IHandleEntity + 393))(this);
  return CDOTA_PlayerResource::HasSelectedHero(g_pDOTAPlayerResource, v2);
}


// CDOTAPlayer::ChangeTeam  (line 594, @0x0000000002699ee0, libserver.so)  // inlines: ChangeTeam, GetTeamMapping, IsPlayerTeam
// calls: GetGlobalTeam, CDOTA_PlayerResource::UpdateTeamSlot, CDOTA_PlayerResource::HasFullyJoinedServer, CDOTA_PlayerResource::OnFullyJoinedServer, CDOTATeam::IsTeamFull, LoggingSystem_IsChannelEnabled, FoW_TeamNumberToFoWIndex, Warning, LoggingSystem_Log, CDOTAPlayer::UpdatePlayerIDFromSteamID
// strings: "Cannot change player team. Ensure that you have specified TeamCount in your addoninfo.txt, "Cannot assign player to team %i, no space on team.\n"
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::ChangeTeam(CDOTAPlayer *const this, int iTeamNum)
{
  CDOTATeam *GlobalTeam; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  GlobalTeam = GetGlobalTeam(iTeamNum);
  if ( GlobalTeam != 0 )
  {
    if ( this->m_pl.hltv || !CDOTATeam::IsTeamFull(GlobalTeam) )
    {
      if ( ((iTeamNum - 6) <= 7 || (iTeamNum - 2) <= 1) && FoW_TeamNumberToFoWIndex(iTeamNum) == 10000 )
      {
        Warning("Cannot change player team. Ensure that you have specified TeamCount in your addoninfo.txt!\n");
      }
      else
      {
        (*(this->_vptr_IHandleEntity + 493))(this, iTeamNum, 0, 0);
        if ( (*(this->_vptr_IHandleEntity + 393))(this) == -1 )
          CDOTAPlayer::UpdatePlayerIDFromSteamID(this);
        if ( (*(this->_vptr_IHandleEntity + 393))(this) != -1 )
        {
          v5 = (*(this->_vptr_IHandleEntity + 393))(this);
          CDOTA_PlayerResource::UpdateTeamSlot(g_pDOTAPlayerResource, v5, iTeamNum, -1);
          if ( this->m_bFullyJoinedServer && (this->m_iConnected - 1) > 1 )
          {
            v6 = (*(this->_vptr_IHandleEntity + 393))(this);
            if ( !CDOTA_PlayerResource::HasFullyJoinedServer(g_pDOTAPlayerResource, v6) )
            {
              v7 = (*(this->_vptr_IHandleEntity + 393))(this);
              CDOTA_PlayerResource::OnFullyJoinedServer(g_pDOTAPlayerResource, v7);
            }
          }
        }
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      LoggingSystem_Log(LOG_SERVER, 2, "Cannot assign player to team %i, no space on team.\n", iTeamNum);
    }
  }
}


// CDOTAPlayer::HandlePossibleHeroSelection  (line 630, @0x0000000002664550, libserver.so)  // inlines: Arg, operator[]
// calls: CDOTAPlayer::HasSelectedHero, CDOTA_PlayerResource::SetPossibleHeroSelection
// callers: CDOTAPlayer::ClientCommand
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::HandlePossibleHeroSelection(
        CDOTAPlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v5; // r12
  int v6; // eax

  if ( !CDOTAPlayer::HasSelectedHero(this) && args->m_nArgc == 2 )
  {
    v5 = args->m_ppArgv[1];
    v6 = (*(this->_vptr_IHandleEntity + 393))(this);
    CDOTA_PlayerResource::SetPossibleHeroSelection(g_pDOTAPlayerResource, v6, v5);
  }
}


// CDOTAPlayer::HandleSuggestHeroPick  (line 640, @0x000000000267a9a0, libserver.so)  // inlines: CDOTAUserMsg_SuggestHeroPick_t, CNetMessagePB, CUserMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Find, FindGameEvent<CDOTAUserMsg_SuggestHeroPick_t>, FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>, GetTeamNumber, PostEvent<CDOTAUserMsg_SuggestHeroPick_t>, SendUserMessage<CDOTAUserMsg_SuggestHeroPick_t>, set_has_hero_id, set_has_player_id, set_hero_id, set_player_id, ~CDOTAUserMsg_SuggestHeroPick_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB, ~CUtlVector
// calls: UTIL_VarArgs, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CDOTAGameManager::IsHeroAvailableByHeroID, CDOTA_PlayerResource::GetPlayerSuggestedHeroList, CDOTA_PlayerResource::GetCoachTeam, CDOTAUserMsg_SuggestHeroPick::CDOTAUserMsg_SuggestHeroPick, CDOTA_PlayerResource::SetSuggestedHeroSelection, CTeamRecipientFilter::CTeamRecipientFilter, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_SuggestHeroPick::~CDOTAUserMsg_SuggestHeroPick, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase (16 total)
// callers: CDOTAPlayer::ClientCommand
// strings: "npc_dota_hero_%s"
// globals: g_pDOTAPlayerResource, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>(bool)::s_hEvent
void __fastcall CDOTAPlayer::HandleSuggestHeroPick(
        CDOTAPlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  char *v4; // rbx
  CDOTAGameManager *v5; // rax
  int HeroIDByName; // r14d
  int v7; // ebx
  CDOTAGameManager *v8; // rax
  int (**vptr_IHandleEntity)(...); // rax
  int v10; // eax
  int v11; // eax
  DOTATeam_t CoachTeam; // r15d
  int *v13; // rdx
  int v14; // eax
  int (**v15)(...); // rax
  int v16; // eax
  int v17; // eax
  int m_Value; // esi
  __int64 v19; // r15
  IGameEventSystem *v20; // r14
  int v21; // eax
  void (__fastcall *v22)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1B8h]
  CUtlVector<int,CUtlMemory<int,int> > heroIDList; // [rsp+10h] [rbp-1B0h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-190h] BYREF
  int v25; // [rsp+40h] [rbp-180h]
  int v26; // [rsp+48h] [rbp-178h]
  int v27; // [rsp+4Ch] [rbp-174h]
  CTeamRecipientFilter filterbroadcast; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v29; // [rsp+188h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 )
  {
    v4 = UTIL_VarArgs("npc_dota_hero_%s", args->m_ppArgv[1]);
    v5 = DOTAGameManager();
    HeroIDByName = CDOTAGameManager::GetHeroIDByName(v5, v4);
    if ( HeroIDByName > 0
      && (*&g_pGameRules[6].m_szQuestName[68] != 22 || !CDOTAGamerules::AD_IsHeroBanned(g_pGameRules, HeroIDByName)) )
    {
      v7 = (*(this->_vptr_IHandleEntity + 393))(this);
      v8 = DOTAGameManager();
      if ( CDOTAGameManager::IsHeroAvailableByHeroID(v8, v7, HeroIDByName) )
      {
        vptr_IHandleEntity = this->_vptr_IHandleEntity;
        heroIDList.m_Size = 0;
        heroIDList.m_Memory.m_pMemory = 0;
        heroIDList.m_Memory.m_nAllocationCount = 0;
        heroIDList.m_Memory.m_nGrowSize = 0;
        v10 = vptr_IHandleEntity[393](this);
        CDOTA_PlayerResource::GetPlayerSuggestedHeroList(g_pDOTAPlayerResource, v10, &heroIDList);
        v11 = (*(this->_vptr_IHandleEntity + 393))(this);
        CoachTeam = CDOTA_PlayerResource::GetCoachTeam(g_pDOTAPlayerResource, v11);
        if ( heroIDList.m_Size > 0 )
        {
          if ( HeroIDByName == *heroIDList.m_Memory.m_pMemory )
          {
LABEL_19:
            v21 = (*(this->_vptr_IHandleEntity + 393))(this);
            CDOTA_PlayerResource::ClearSuggestedHeroSelection(g_pDOTAPlayerResource, v21, HeroIDByName);
LABEL_15:
            CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&heroIDList);
            return;
          }
          v13 = heroIDList.m_Memory.m_pMemory + 1;
          v14 = 0;
          while ( ++v14 != heroIDList.m_Size )
          {
            if ( HeroIDByName == *v13++ )
            {
              if ( v14 == -1 )
                break;
              goto LABEL_19;
            }
          }
        }
        CDOTAUserMsg_SuggestHeroPick::CDOTAUserMsg_SuggestHeroPick(v24);
        v24[0] = off_416D6D0;
        v26 = (*(this->_vptr_IHandleEntity + 393))(this);
        v15 = this->_vptr_IHandleEntity;
        v27 = HeroIDByName;
        v25 |= 3u;
        v16 = v15[393](this);
        if ( CDOTA_PlayerResource::SetSuggestedHeroSelection(g_pDOTAPlayerResource, v16, HeroIDByName) )
        {
          if ( CoachTeam == -1 )
          {
            m_Value = this->m_iTeamNum.m_Value;
          }
          else
          {
            v17 = (*(this->_vptr_IHandleEntity + 393))(this);
            m_Value = CDOTA_PlayerResource::GetCoachTeam(g_pDOTAPlayerResource, v17);
          }
          CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, m_Value, 0);
          v19 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>(bool)::s_hEvent;
          v20 = g_pGameEventSystem;
          v22 = *(*g_pGameEventSystem + 128LL);
          (*(*g_pNetworkMessages + 96LL))(
            g_pNetworkMessages,
            IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>(bool)::s_hEvent);
          v22(v20, 0, 0, &filterbroadcast, v19, v24, 32);
          filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
          CRecipientFilter::~CRecipientFilter(&filterbroadcast);
          v24[0] = &off_416D550;
          CDOTAUserMsg_SuggestHeroPick::~CDOTAUserMsg_SuggestHeroPick(v24);
          goto LABEL_15;
        }
        v24[0] = &off_416D550;
        CDOTAUserMsg_SuggestHeroPick::~CDOTAUserMsg_SuggestHeroPick(v24);
        CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&heroIDList);
      }
    }
  }
}


// CDOTAPlayer::HandleSuggestHeroRole  (line 684, @0x000000000265a040, libserver.so)  // inlines: Arg, CDOTAUserMsg_SuggestHeroRole_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_SuggestHeroRole_t>, FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>, GetTeamNumber, PostEvent<CDOTAUserMsg_SuggestHeroRole_t>, SendUserMessage<CDOTAUserMsg_SuggestHeroRole_t>, assign, length, operator[], set_has_hero_role, set_has_player_id, set_hero_role, set_player_id, ~CDOTAUserMsg_SuggestHeroRole_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CDOTAUserMsg_SuggestHeroRole::CDOTAUserMsg_SuggestHeroRole, strlen, std::string::assign(char const*,ulong), CTeamRecipientFilter::CTeamRecipientFilter, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_SuggestHeroRole::~CDOTAUserMsg_SuggestHeroRole, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAPlayer::ClientCommand
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>(bool)::s_hEvent
void __fastcall CDOTAPlayer::HandleSuggestHeroRole(
        CDOTAPlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v4; // r13
  size_t v5; // rax
  __int64 v6; // r14
  IGameEventSystem *v7; // r13
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v9[2]; // [rsp+10h] [rbp-1A0h] BYREF
  int v10; // [rsp+20h] [rbp-190h]
  std::string *v11; // [rsp+28h] [rbp-188h]
  int v12; // [rsp+30h] [rbp-180h]
  CTeamRecipientFilter filterbroadcast; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+178h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 )
  {
    v4 = args->m_ppArgv[1];
    CDOTAUserMsg_SuggestHeroRole::CDOTAUserMsg_SuggestHeroRole(v9);
    v9[0] = off_416D910;
    v12 = (*(this->_vptr_IHandleEntity + 393))(this);
    v10 |= 3u;
    v5 = strlen(v4);
    std::string::assign(v11, v4, v5);
    CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, this->m_iTeamNum.m_Value, 0);
    v6 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>(bool)::s_hEvent;
    v7 = g_pGameEventSystem;
    v8 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>(bool)::s_hEvent);
    v8(v7, 0, 0, &filterbroadcast, v6, v9, 40);
    filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
    CRecipientFilter::~CRecipientFilter(&filterbroadcast);
    v9[0] = &off_416D790;
    CDOTAUserMsg_SuggestHeroRole::~CDOTAUserMsg_SuggestHeroRole(v9);
  }
}


// CDOTAPlayer::HandleSuggestHeroSelection  (line 699, @0x000000000265dff0, libserver.so)
// calls: UTIL_VarArgs, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CDOTA_PlayerResource::SetSuggestedHeroSelection
// callers: CDOTAPlayer::ClientCommand
// strings: "npc_dota_hero_%s"
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::HandleSuggestHeroSelection(
        CDOTAPlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  char *v4; // r12
  CDOTAGameManager *v5; // rax
  int HeroIDByName; // r12d
  int v7; // eax

  if ( args->m_nArgc == 2 )
  {
    v4 = UTIL_VarArgs("npc_dota_hero_%s", args->m_ppArgv[1]);
    v5 = DOTAGameManager();
    HeroIDByName = CDOTAGameManager::GetHeroIDByName(v5, v4);
    if ( HeroIDByName > 0 )
    {
      v7 = (*(this->_vptr_IHandleEntity + 393))(this);
      CDOTA_PlayerResource::SetSuggestedHeroSelection(g_pDOTAPlayerResource, v7, HeroIDByName);
    }
  }
}


// CDOTAPlayer::HandleSelectStartingPosition  (line 711, @0x00000000026641e0, libserver.so)  // inlines: atoi
// calls: strtol, CDOTA_PlayerResource::SetStartingPosition
// callers: CDOTAPlayer::ClientCommand
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::HandleSelectStartingPosition(
        CDOTAPlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  unsigned int v4; // r12d
  int v5; // eax

  if ( args->m_nArgc == 2 )
  {
    v4 = strtol(args->m_ppArgv[1], 0, 10);
    if ( v4 <= 5 )
    {
      v5 = (*(this->_vptr_IHandleEntity + 393))(this);
      CDOTA_PlayerResource::SetStartingPosition(g_pDOTAPlayerResource, v5, v4);
    }
  }
}


// CDOTAPlayer::HandleAbilityDraftSelection  (line 726, @0x000000000265a1d0, libserver.so)  // inlines: Arg, DOTAGameRules, Element, Get, GetForModify, NetworkStateChanged, Set, atoi, operator CEntityInstance*, operator=<int>, operator[], ~CBroadcastRecipientFilter
// calls: ABILITYDRAFT_GetDraftingPlayer, strtol, ABILITYDRAFT_GetFreeAbilitySlotForPlayer, CBroadcastRecipientFilter::CBroadcastRecipientFilter, CRecipientFilter::RemoveRecipient, Gamerules_EmitSound, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAPlayer::ClientCommand
// strings: "ui.abilitydraft_theirpick"
void __fastcall CDOTAPlayer::HandleAbilityDraftSelection(
        CDOTAPlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  int v4; // ebx
  const char *v5; // rdi
  int v6; // r14d
  int v7; // eax
  bool FreeAbilitySlotForPlayer; // al
  int v9; // ecx
  __int64 i; // rdx
  __int64 v11; // rbx
  char v12; // r15
  int v13; // eax
  CGameRules *v14; // rdx
  __int64 v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  int v18; // r14d
  _QWORD *v19; // rdi
  int argsb; // [rsp+8h] [rbp-188h]
  int nRegularAbilitiesDrafted; // [rsp+1Ch] [rbp-174h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v24; // [rsp+158h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 393))(this, ctx);
    if ( v4 == ABILITYDRAFT_GetDraftingPlayer()
      && g_pGameRules[21].m_szQuestName[120] == 0
      && HIDWORD(g_pGameRules[21]._vptr_CGameRules) == 1 )
    {
      v5 = "";
      if ( args->m_nArgc > 1 )
        v5 = args->m_ppArgv[1];
      nRegularAbilitiesDrafted = 0;
      v6 = strtol(v5, 0, 10);
      v7 = (*(this->_vptr_IHandleEntity + 393))(this);
      FreeAbilitySlotForPlayer = ABILITYDRAFT_GetFreeAbilitySlotForPlayer(v7, &nRegularAbilitiesDrafted);
      v9 = 0;
      for ( i = *&g_pGameRules[20].m_szQuestName[32]; ; i += 32 )
      {
        v11 = i - *&g_pGameRules[20].m_szQuestName[32];
        if ( v6 == *(i + 20) )
          break;
        if ( ++v9 == 48 )
          return;
      }
      if ( *(i + 24) == 10 )
      {
        if ( v9 > 35 )
        {
          if ( FreeAbilitySlotForPlayer )
            return;
          v12 = 1;
        }
        else
        {
          if ( nRegularAbilitiesDrafted > 2 )
            return;
          v12 = 0;
        }
        v13 = (*(this->_vptr_IHandleEntity + 393))(this);
        v14 = g_pGameRules;
        v15 = *&g_pGameRules[20].m_szQuestName[32] + v11;
        if ( v13 == *(v15 + 24) )
        {
          v17 = *&g_pGameRules[20].m_szQuestName[32] + v11;
        }
        else
        {
          v16 = *(v15 + 8);
          if ( v16 != 0 && (*(v16[1] + 49LL) & 4) == 0 && *(v15 + 16) != 0xFFFF )
          {
            argsb = v13;
            (*(*v16 + 176LL))(v16, 24, 0xFFFFFFFFLL, *(v15 + 16));
            v14 = g_pGameRules;
            v13 = argsb;
          }
          *(v15 + 24) = v13;
          v17 = *&v14[20].m_szQuestName[32] + v11;
        }
        v18 = 3;
        if ( v12 == 0 )
          v18 = nRegularAbilitiesDrafted;
        if ( v18 != *(v17 + 28) )
        {
          v19 = *(v17 + 8);
          if ( v19 != 0 && (*(v19[1] + 49LL) & 4) == 0 && *(v17 + 16) != 0xFFFF )
          {
            (*(*v19 + 176LL))(v19, 28, 0xFFFFFFFFLL, *(v17 + 16));
            v14 = g_pGameRules;
          }
          *(v17 + 28) = v18;
        }
        v14[21].m_szQuestName[120] = 1;
        CBroadcastRecipientFilter::CBroadcastRecipientFilter(&filter);
        CRecipientFilter::RemoveRecipient(&filter, this);
        Gamerules_EmitSound("ui.abilitydraft_theirpick", &filter, 0);
        filter._vptr_IRecipientFilter = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
    }
  }
}


// CDOTAPlayer::AnnounceHeroSelection  (line 781, @0x000000000265a460, libserver.so)  // inlines: DOTAGameRules, ShouldAnnounceHeroSelection
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTAGamerules::QueueConceptForAllAnnouncers, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTAPlayer::HandleHeroSelection
// strings: "announce_event", "targetclassname"
void __fastcall CDOTAPlayer::AnnounceHeroSelection(CDOTAPlayer *const this, const char *pszHeroName, int nTeam)
{
  int v4; // eax
  CResponseCriteriaSet criteria; // [rsp+0h] [rbp-60h] BYREF

  if ( g_pGameRules != 0 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 393))(this, pszHeroName, nTeam);
    if ( v4 == *g_pGameRules[62].m_szQuestName || v4 == *&g_pGameRules[62].m_szQuestName[4] )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "announce_event", "hero_pick", 1.0);
      CResponseCriteriaSet::AppendCriteria(&criteria, "targetclassname", pszHeroName, 1.0);
      CDOTAGamerules::QueueConceptForAllAnnouncers(g_pGameRules, 18, 2.0, &criteria, 5, 1);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
  }
}


// CDOTAPlayer::UndoHeroSelection  (line 793, @0x0000000002678ce0, libserver.so)  // inlines: CEntityHandle, CreateEvent, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_PlayerResource::SetCanRepick, UTIL_Remove, CDOTA_PlayerResource::SetSelectedHero
// callers: CDOTAPlayer::HandleHeroSelection, Playtesting_ChangeToRandomHero
// strings: "dota_hero_undoselection", "playerid1"
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::UndoHeroSelection(CDOTAPlayer *const this)
{
  int v2; // eax
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r12
  void (__fastcall *v12)(__int64, const char *, _QWORD); // r14
  unsigned int v13; // eax
  CEntityInstance *v14; // rax

  v2 = (*(this->_vptr_IHandleEntity + 393))(this);
  CDOTA_PlayerResource::SetCanRepick(g_pDOTAPlayerResource, v2, 0);
  if ( this->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v5 + 2 > 1
    && (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) != 0
    && (v7 = &v6[v4 & 0x1FF]) != 0
    && v5 == v7->m_EHandle.m_Index
    && (v14 = v7->m_pInstance, v7->m_pInstance != 0)
    && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
  {
    m_pInstance = 0;
    if ( (v14[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      m_pInstance = v7->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
  UTIL_Remove(m_pInstance);
  v9 = (*(this->_vptr_IHandleEntity + 393))(this);
  CDOTA_PlayerResource::SetSelectedHero(g_pDOTAPlayerResource, v9, 0, 0);
  v10 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_hero_undoselection", 0, 0);
  v11 = v10;
  if ( v10 != 0 )
  {
    v12 = *(*v10 + 112LL);
    v13 = (*(this->_vptr_IHandleEntity + 393))(this);
    v12(v11, "playerid1", v13);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v11, 0);
  }
}


// CDOTAPlayer::HandleHeroSelection  (line 807, @0x000000000267a6d0, libserver.so)
// calls: CDOTAPlayer::HandleHeroSelection
void __fastcall CDOTAPlayer::HandleHeroSelection(
        CDOTAPlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  if ( args->m_nArgc > 1 )
    CDOTAPlayer::HandleHeroSelection(this, args->m_ppArgv[1]);
}


// CDOTAPlayer::HandleHeroSelection  (line 815, @0x000000000267a210, libserver.so)  // inlines: DOTAGameRules, GetGameMode, GetTeamNumber, HeroPickState_Get, IsAllDraftGameMode, IsAllDraftVariation, State_Get, V_strlen, _V_strcmp
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTAPlayer::HasSelectedHero, CDOTA_PlayerResource::HasRandomed, CDOTA_PlayerResource::CanRepick, CDOTA_PlayerResource::SetCanRepick, CDOTAGamerules::State_Think, CDOTA_PlayerResource::GetGold, CDOTAGamerules::GetLastUsedAbility, strlen, CDOTAPlayer::UndoHeroSelection, CDOTA_PlayerResource::ModifyGold, CDOTAGamerules::MakeRandomHeroSelection (19 total)
// callers: dota_pick_hero, CDOTAPlayer::HandleHeroSelection, CDOTAPlayer::ClientCommand
// strings: "repick"
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::HandleHeroSelection(CDOTAPlayer *const this, const char *pArg)
{
  int v4; // eax
  bool HasSelectedHero; // al
  bool v6; // zf
  const char *v7; // rdi
  __int64 v8; // rcx
  const char *v9; // rsi
  bool v10; // al
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  const char *v16; // rdi
  __int64 v17; // rcx
  const char *v18; // rsi
  CDOTAGamerules *v19; // rdi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  const char *LastUsedAbility; // rdi
  int v25; // eax
  int v26; // eax
  bool HasRandomed; // r13
  int v28; // eax
  int v29; // eax
  int v30; // r14d
  CDOTAGameManager *v31; // rax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax

  if ( *&g_pGameRules[6].m_szQuestName[68] == 18 )
    return;
  if ( g_pDOTAPlayerResource == 0 )
    return;
  v4 = (*(this->_vptr_IHandleEntity + 393))(this);
  if ( !CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v4) )
    return;
  HasSelectedHero = CDOTAPlayer::HasSelectedHero(this);
  v6 = !HasSelectedHero;
  if ( !HasSelectedHero )
    goto LABEL_10;
  v7 = "repick";
  v8 = 7;
  v9 = pArg;
  do
  {
    if ( v8 == 0 )
      break;
    v6 = *v9++ == *v7++;
    --v8;
  }
  while ( v6 );
  if ( !v6
    || (v20 = (*(this->_vptr_IHandleEntity + 393))(this, v9),
        !CDOTA_PlayerResource::CanRepick(g_pDOTAPlayerResource, v20))
    || *&g_pGameRules[6].m_szQuestName[28] != 2 )
  {
LABEL_10:
    v10 = CDOTAPlayer::HasSelectedHero(this);
    v11 = !v10;
    if ( v10 )
    {
      if ( g_pGameRules != 0 )
      {
        v12 = *&g_pGameRules[6].m_szQuestName[68];
        if ( v12 == 3 || v12 == 22 )
        {
          v13 = (*(this->_vptr_IHandleEntity + 393))(this);
          if ( CDOTA_PlayerResource::HasRandomed(g_pDOTAPlayerResource, v13) )
          {
            v14 = (*(this->_vptr_IHandleEntity + 393))(this);
            if ( CDOTA_PlayerResource::CanRepick(g_pDOTAPlayerResource, v14) )
            {
              v15 = (*(this->_vptr_IHandleEntity + 393))(this);
              CDOTA_PlayerResource::SetCanRepick(g_pDOTAPlayerResource, v15, 0);
            }
          }
        }
      }
      return;
    }
    v16 = "random";
    v17 = 7;
    v18 = pArg;
    do
    {
      if ( v17 == 0 )
        break;
      v11 = *v18++ == *v16++;
      --v17;
    }
    while ( v11 );
    if ( v11 )
    {
      v19 = g_pGameRules;
      if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 22 )
      {
        v18 = *&g_pGameRules[21].m_szQuestName[104];
        if ( v18 == 0 )
          return;
      }
      if ( BYTE2(g_pGameRules[10]._vptr_CGameRules) == 0 )
      {
LABEL_24:
        CDOTAGamerules::State_Think(v19);
        return;
      }
      v36 = (*(this->_vptr_IHandleEntity + 393))(this, v18);
      if ( !CDOTA_PlayerResource::HasRandomed(g_pDOTAPlayerResource, v36) )
      {
        v37 = (*(this->_vptr_IHandleEntity + 393))(this);
        if ( CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, v37, 0, -1, 0) )
        {
          v38 = (*(this->_vptr_IHandleEntity + 393))(this);
          CDOTA_PlayerResource::SetHasRandomed(g_pDOTAPlayerResource, v38);
          v19 = g_pGameRules;
          if ( *&g_pGameRules[6].m_szQuestName[68] == 22 )
          {
            v39 = (*(this->_vptr_IHandleEntity + 393))(this);
            CDOTA_PlayerResource::SetCanRepick(g_pDOTAPlayerResource, v39, 1);
            CDOTAGamerules::State_Think(g_pGameRules);
            return;
          }
          goto LABEL_24;
        }
      }
    }
    else
    {
      v30 = (*(this->_vptr_IHandleEntity + 393))(this, v18);
      v31 = DOTAGameManager();
      if ( !CDOTAGameManager::IsHeroAvailableByName(v31, v30, pArg) )
        return;
      v32 = *&g_pGameRules[6].m_szQuestName[68];
      if ( (v32 == 2 || v32 == 16) && !CDOTAGamerules::CM_IsSelectedHero(g_pGameRules, this->m_iTeamNum.m_Value, pArg) )
        return;
      v33 = (*(this->_vptr_IHandleEntity + 393))(this);
      CDOTA_PlayerResource::SetSelectedHero(g_pDOTAPlayerResource, v33, pArg, 0);
      if ( *&g_pGameRules[6].m_szQuestName[32] == 1 )
        CDOTAPlayer::AnnounceHeroSelection(this, pArg, this->m_iTeamNum.m_Value);
      v34 = (*(this->_vptr_IHandleEntity + 393))(this);
      CDOTA_OGS::LogHeroSelection(v34, 0, 0);
    }
    CDOTAGamerules::State_Think(g_pGameRules);
    return;
  }
  v21 = (*(this->_vptr_IHandleEntity + 393))(this);
  if ( CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v21) > 99 )
  {
    v22 = (*(this->_vptr_IHandleEntity + 393))(this);
    if ( !CDOTA_PlayerResource::HasRandomed(g_pDOTAPlayerResource, v22)
      || (v35 = (*(this->_vptr_IHandleEntity + 393))(this),
          CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v35) > 349) )
    {
      v23 = (*(this->_vptr_IHandleEntity + 393))(this);
      LastUsedAbility = CDOTAGamerules::GetLastUsedAbility(g_pGameRules, v23);
      if ( (LastUsedAbility == 0 || strlen(LastUsedAbility) <= 0)
        && (g_pGameRules == 0 || *&g_pGameRules[6].m_szQuestName[68] != 20) )
      {
        CDOTAPlayer::UndoHeroSelection(this);
        v25 = (*(this->_vptr_IHandleEntity + 393))(this);
        CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v25, -100, 0, 0);
        v26 = (*(this->_vptr_IHandleEntity + 393))(this);
        HasRandomed = CDOTA_PlayerResource::HasRandomed(g_pDOTAPlayerResource, v26);
        if ( HasRandomed )
        {
          v40 = (*(this->_vptr_IHandleEntity + 393))(this);
          CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v40, -200, 0, 0);
        }
        if ( g_pGameRules != 0 )
        {
          v28 = *&g_pGameRules[6].m_szQuestName[68];
          if ( v28 == 1 )
          {
            if ( !HasRandomed )
              return;
          }
          else if ( v28 != 5 && v28 != 3 && v28 != 22 )
          {
            return;
          }
          v29 = (*(this->_vptr_IHandleEntity + 393))(this);
          CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, v29, 0, -1, 0);
        }
      }
    }
  }
}


// CDOTAPlayer::SetLastOrderTime  (line 918, @0x000000000265a540, libserver.so)
// callers: CDOTA_BaseNPC_Hero::AddExperience, CDOTAHeroList::GiveGold, CDOTA_NeutralSpawner::SpawnNextBatch, CDOTA_Modifier_Roshan_InherentBuffs::OnAttacked, CDOTA_Ability_Techies_LandMines::OnSpellStart, CDOTA_Ability_Techies_StasisTrap::OnSpellStart, CDOTA_Ability_Techies_RemoteMines::OnSpellStart
void __fastcall CDOTAPlayer::SetLastOrderTime(CDOTAPlayer *const this, float a2, float flTime, bool bMarkAsActive)
{
  this->m_flLastOrderTime = a2;
  if ( bMarkAsActive )
    this->m_flLastKnownActiveTime = a2;
}


// CDOTAPlayer::OnReconnect  (line 927, @0x000000000265e4f0, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, GetAssignedHero, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_PlayerResource::GetPlayer, CDOTA_BaseNPC::GetEconSpecifyingPlayerID, CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange
// callers: CDOTAGamerules::PlayerSpawn
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::OnReconnect(CDOTAPlayer *const this)
{
  float v1; // xmm0_4
  int *v3; // rdi
  int v4; // ebx
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTAPlayer *Player; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  int EconSpecifyingPlayerID; // r14d

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  v3 = g_pDOTAPlayerResource;
  v4 = 0;
  this->m_flLastReconnectTime = v1;
  if ( v3[212] > 0 )
  {
    do
    {
      Player = CDOTA_PlayerResource::GetPlayer(v3, v4);
      if ( Player != 0 )
      {
        if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
        {
          v5 = 0x7FFF;
          v6 = 0x7FFF;
        }
        else
        {
          v5 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
          v6 = v5;
        }
        v7 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
        if ( (v7 + 2) > 1 )
        {
          v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
          if ( v8 != 0 )
          {
            v9 = &v8[v6 & 0x1FF];
            if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 )
              {
                EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(v9->m_pInstance);
                if ( EconSpecifyingPlayerID == (*(this->_vptr_IHandleEntity + 393))(this) )
                  CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange(m_pInstance);
              }
            }
          }
        }
      }
      v3 = g_pDOTAPlayerResource;
      ++v4;
    }
    while ( v4 < *(g_pDOTAPlayerResource + 212) );
  }
}


// CDOTAPlayer::IsAFK  (line 950, @0x000000000265a560, libserver.so)  // inlines: DOTAGameRules, GetBool, GetFloat, GetGameTime, GetIdleTime, GetInt
// calls: CDOTAGamerules::Rules_DisableAFKChecks
// callers: CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTA_PlayerResource::UpdatePlayerData
bool __fastcall CDOTAPlayer::IsAFK(CDOTAPlayer *const this)
{
  float v3; // xmm1_4
  float v4; // xmm1_4

  if ( g_pGameRules != 0 && CDOTAGamerules::Rules_DisableAFKChecks(g_pGameRules) )
    return 0;
  if ( (*(this->_vptr_IHandleEntity + 521))(this) == 0 )
  {
    if ( g_pGameRules != 0 )
    {
      if ( dota_reconnect_idle_buffer_time.m_pParent->m_Value.m_fValue < (*&g_pGameRules[18].m_szQuestName[20]
                                                                        - this->m_flLastReconnectTime) )
      {
        v3 = 0.0;
        if ( *&g_pGameRules[6].m_szQuestName[28] != 5 )
          return v3 > dota_idle_time.m_pParent->m_Value.m_fValue;
        v4 = *&g_pGameRules[18].m_szQuestName[20];
LABEL_11:
        v3 = v4 - this->m_flLastOrderTime;
        return v3 > dota_idle_time.m_pParent->m_Value.m_fValue;
      }
    }
    else
    {
      v4 = 0.0;
      if ( dota_reconnect_idle_buffer_time.m_pParent->m_Value.m_fValue < (0.0 - this->m_flLastReconnectTime) )
        goto LABEL_11;
    }
    return 0;
  }
  return dota_bot_fake_afk.m_pParent->m_Value.m_nValue != 0;
}


// CDOTAPlayer::GetIdleTime  (line 974, @0x000000000265a650, libserver.so)  // inlines: DOTAGameRules, GetGameTime
float __fastcall CDOTAPlayer::GetIdleTime(CDOTAPlayer *const this)
{
  float result; // xmm0_4

  result = 0.0;
  if ( g_pGameRules != 0 )
  {
    if ( *&g_pGameRules[6].m_szQuestName[28] != 5 )
      return result;
    result = *&g_pGameRules[18].m_szQuestName[20];
  }
  return result - this->m_flLastOrderTime;
}


// CDOTAPlayer::IsFountainIdle  (line 982, @0x000000000265a690, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetGameTime
// calls: CDOTAGamerules::GetDOTATime
// callers: CDOTAGamerules::CheckIdleAndDisconnectedPlayers
bool __fastcall CDOTAPlayer::IsFountainIdle(CDOTAPlayer *const this, bool bLenient)
{
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  ConVar *m_pParent; // rax

  if ( g_pGameRules != 0 )
  {
    if ( *&g_pGameRules[6].m_szQuestName[28] != 5 )
      return 0;
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  }
  else
  {
    v5 = 0.0;
  }
  if ( dota_reconnect_idle_buffer_time.m_pParent->m_Value.m_fValue >= (v5 - this->m_flLastReconnectTime)
    || dota_fountain_idle_minimum_time.m_pParent->m_Value.m_fValue >= CDOTAGamerules::GetDOTATime(
                                                                        g_pGameRules,
                                                                        0,
                                                                        0,
                                                                        0.0) )
  {
    return 0;
  }
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v7 = v6 - this->m_flLastKnownActiveTime;
  if ( bLenient )
    m_pParent = dota_lenient_idle_time.m_pParent;
  else
    m_pParent = dota_idle_time.m_pParent;
  return v7 > m_pParent->m_Value.m_fValue;
}


// CDOTAPlayer::CheatHeroRefresh  (line 1006, @0x000000000265a790, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::EndCooldown, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTAGamerules::SetGlyphCooldown, CDOTAGamerules::SetRadarCooldown
// callers: CDOTAPlayer::ClientCommand
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAPlayer::CheatHeroRefresh(CDOTAPlayer *const this)
{
  char v1; // al
  float v2; // xmm1_4
  __int64 v3; // r14
  int v4; // r13d
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r12
  int v11; // ebx
  int v12; // eax
  float v13; // xmm1_4
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v15; // r15
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  unsigned int v18; // ebx
  CDOTAGamerules *v19; // r12
  unsigned int v20; // esi
  float v21; // xmm1_4
  __int64 v22; // [rsp+8h] [rbp-38h]

  v1 = (*(this->_vptr_IHandleEntity + 393))(this);
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v3 = 0;
    v22 = 1LL << v1;
    v4 = 0;
    do
    {
      v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && (v22 & m_pInstance[61].m_hPrivateScope.m_hScope) != 0 )
            {
              v11 = 0;
              v12 = (*(m_pInstance->_vptr_IHandleEntity + 156))(v9->m_pInstance);
              CDOTA_BaseNPC::ModifyHealth(m_pInstance, v12, 0, 0, 0);
              CDOTA_BaseNPC::SetMana(m_pInstance, v13);
              do
              {
                AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v11);
                v15 = AbilityByIndex;
                if ( AbilityByIndex != 0 && (*(AbilityByIndex->_vptr_IHandleEntity + 217))(AbilityByIndex) != 0 )
                  CDOTABaseAbility::EndCooldown(v15);
                ++v11;
              }
              while ( v11 != 24 );
              LOBYTE(v11) = 0;
              do
              {
                Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
                ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v11);
                if ( ItemInSlot != 0 )
                  CDOTABaseAbility::EndCooldown(ItemInSlot);
                ++v11;
              }
              while ( v11 != 9 );
            }
          }
        }
      }
      ++v4;
      ++v3;
    }
    while ( v4 < g_HeroList.m_hHeroList.m_Size );
  }
  v18 = 2;
  v19 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    do
    {
      CDOTAGamerules::SetGlyphCooldown(v19, v18, 0.0, v2);
      v20 = v18++;
      CDOTAGamerules::SetRadarCooldown(v19, v20, 0.0, v21);
    }
    while ( v18 != 14 );
  }
}


// CDOTAPlayer::ClientCommand  (line 1051, @0x000000000269a570, libserver.so)  // inlines: Arg, CCommandContext, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, FStrEq, Get, GetBool, GetClassNameAsCStr, GetClassname, GetGameMode, GetInstance, GetInt, GetLevel, GetTeamNumber, GetUnitName, HandleHeroSelection, IsACoach, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, _V_strcmp, atof, atoi, entindex, operator CBaseEntity*, operator+, operator->, operator[], ~CUtlVector
// calls: CBasePlayer::GetSplitScreenPlayerSlot, strcmp, Plat_GetLocalTime, CFmtStrN<256, false>::CFmtStrN, CDOTA_ActiveModifiersList::GetActiveModifierByIndex, CDOTA_ModifierManager::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetName, CDOTAPlayer::HandlePossibleHeroSelection, CDOTAPlayer::HandleHeroSelection, CDOTAPlayer::HandleSuggestHeroPick (57 total)
// strings: "possible_hero", "suggest_hero", "suggest_hero_pick", "suggest_hero_role", "dota_select_starting_position", "dota_select_hero" (40 total)
// globals: g_pDOTAPlayerResource
bool __fastcall CDOTAPlayer::ClientCommand(CDOTAPlayer *const this, const CCommand *const args)
{
  CSplitScreenSlot v4; // eax
  int m_nArgc; // ebx
  char *v6; // r13
  const char *v7; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  char *v10; // rsi
  const char *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  const char *v14; // rdi
  bool v15; // zf
  __int64 v16; // rcx
  char *v17; // rsi
  const char *v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  const char *v21; // rdi
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // r12
  int i; // r14d
  CDOTA_ModifierManager *ActiveModifierByIndex; // rax
  CDOTA_ModifierManager *v27; // r13
  void (*v28)(IFileSystem *, __int64, const char *, ...); // r15
  CEntityInstance *v29; // rax
  const char *v30; // r8
  CEntityInstance *v31; // rax
  const char *v32; // rcx
  CEntityIdentity *m_pEntity; // rax
  int j; // r15d
  CDOTA_Buff *BuffByIndex; // rax
  const char *v36; // r8
  const char *Name; // rax
  char IsCheatMode; // bl
  const char *v40; // rsi
  int v41; // esi
  int v42; // eax
  const char *v43; // rsi
  int v44; // eax
  CDOTAGamerules *v45; // rdi
  int v46; // eax
  const char *v47; // rsi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  const char *v52; // rsi
  CBaseEntity *v53; // rbx
  CBaseEntity *EntityByClassname; // rax
  const char *v55; // rdi
  int v56; // ebx
  int v57; // eax
  int v58; // edx
  float v59; // xmm1_4
  __int64 v60; // rdi
  __int64 v61; // rax
  void (__fastcall *v62)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v63; // eax
  int v64; // esi
  const char *v65; // rdi
  int v66; // r12d
  int v67; // eax
  const char *v68; // rdi
  int m_Value; // edi
  __int64 k; // r12
  CEntityInstance *v71; // rax
  CDOTA_BaseNPC *v72; // r14
  const char *v73; // r15
  CDOTA_BaseNPC_Hero *v74; // rax
  CDOTA_BaseNPC_Hero *AssignedHero; // r12
  float v76; // xmm3_4
  float v77; // xmm2_4
  double v78; // xmm0_8
  const char *v79; // rdi
  float v80; // xmm6_4
  double v81; // xmm0_8
  int v82; // eax
  CDOTA_BaseNPC_Hero *Hero; // rax
  const char *m_pAsString; // rsi
  int v85; // r12d
  CDOTA_BaseNPC_Hero *v86; // rax
  int *v87; // rbx
  const char *v88; // rdi
  int v89; // r12d
  int v90; // r13d
  int v91; // r14d
  int XPNeededToReachNextLevel; // eax
  CDOTA_BaseNPC_Hero *v93; // rax
  CDOTA_BaseNPC *v94; // r12
  void (*v95)(IFileSystem *, __int64, const char *, ...); // [rsp+20h] [rbp-1E0h]
  const char *v96; // [rsp+28h] [rbp-1D8h]
  const char *v97; // [rsp+28h] [rbp-1D8h]
  float v98; // [rsp+28h] [rbp-1D8h]
  float v99; // [rsp+30h] [rbp-1D0h]
  float v100; // [rsp+30h] [rbp-1D0h]
  CEntityHandle *v101; // [rsp+38h] [rbp-1C8h]
  float v102; // [rsp+38h] [rbp-1C8h]
  CCommandContext ctx; // [rsp+40h] [rbp-1C0h] BYREF
  CEntityHandle v104[4]; // [rsp+50h] [rbp-1B0h] BYREF
  CEntityHandle v105[4]; // [rsp+60h] [rbp-1A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-190h] BYREF
  int v107; // [rsp+88h] [rbp-178h]
  CFmtStrN<256,false> v108; // [rsp+B0h] [rbp-150h] BYREF
  unsigned __int64 v109; // [rsp+1C8h] [rbp-38h]
  Vector v110; // 0:xmm0_8.8,8:xmm1_4.4

  ctx.m_nTarget = CommandTarget_t::CT_NO_TARGET;
  v109 = __readfsqword(0x28u);
  v4.m_Data = CBasePlayer::GetSplitScreenPlayerSlot(this).m_Data;
  m_nArgc = args->m_nArgc;
  ctx.m_nTarget = v4.m_Data;
  if ( m_nArgc <= 0 )
  {
    v6 = "";
  }
  else
  {
    v6 = args->m_ppArgv[0];
    if ( v6 == "possible_hero" || strcmp(args->m_ppArgv[0], "possible_hero") == 0 )
    {
      CDOTAPlayer::HandlePossibleHeroSelection(this, &ctx, args);
      return 1;
    }
    if ( v6 == "suggest_hero" || strcmp(args->m_ppArgv[0], "suggest_hero") == 0 )
    {
      CDOTAPlayer::HandleSuggestHeroSelection(this, &ctx, args);
      return 1;
    }
    if ( v6 == "suggest_hero_pick" || strcmp(args->m_ppArgv[0], "suggest_hero_pick") == 0 )
    {
      CDOTAPlayer::HandleSuggestHeroPick(this, &ctx, args);
      return 1;
    }
    if ( v6 == "suggest_hero_role" )
    {
LABEL_104:
      CDOTAPlayer::HandleSuggestHeroRole(this, &ctx, args);
      return 1;
    }
  }
  if ( strcmp(v6, "suggest_hero_role") == 0 )
    goto LABEL_104;
  v7 = "dota_select_starting_position";
  v8 = v6 == "dota_select_starting_position";
  if ( v6 != "dota_select_starting_position" )
  {
    v9 = 30;
    v10 = v6;
    do
    {
      if ( v9 == 0 )
        break;
      v8 = *v10++ == *v7++;
      --v9;
    }
    while ( v8 );
    if ( !v8 )
    {
      v11 = "dota_select_hero";
      v12 = v6 == "dota_select_hero";
      if ( v6 != "dota_select_hero" )
      {
        v13 = 17;
        v10 = v6;
        do
        {
          if ( v13 == 0 )
            break;
          v12 = *v10++ == *v11++;
          --v13;
        }
        while ( v12 );
        if ( !v12 )
        {
          v14 = "dota_captain_select_captain";
          v15 = v6 == "dota_captain_select_captain";
          if ( v6 != "dota_captain_select_captain" )
          {
            v16 = 28;
            v17 = v6;
            do
            {
              if ( v16 == 0 )
                break;
              v15 = *v17++ == *v14++;
              --v16;
            }
            while ( v15 );
            if ( !v15 )
            {
              v18 = "dota_captain_select_hero";
              v19 = v6 == "dota_captain_select_hero";
              if ( v6 != "dota_captain_select_hero" )
              {
                v20 = 25;
                v17 = v6;
                do
                {
                  if ( v20 == 0 )
                    break;
                  v19 = *v17++ == *v18++;
                  --v20;
                }
                while ( v19 );
                if ( !v19 )
                {
                  v21 = "dota_captain_ban_hero";
                  v22 = v6 == "dota_captain_ban_hero";
                  if ( v6 != "dota_captain_ban_hero" )
                  {
                    v23 = 22;
                    v17 = v6;
                    do
                    {
                      if ( v23 == 0 )
                        break;
                      v22 = *v17++ == *v21++;
                      --v23;
                    }
                    while ( v22 );
                    if ( !v22 )
                    {
                      if ( v6 == "dota_ability_draft_select_ability"
                        || strcmp(v6, "dota_ability_draft_select_ability") == 0 )
                      {
                        CDOTAPlayer::HandleAbilityDraftSelection(this, &ctx, args);
                        return 1;
                      }
                      if ( v6 == "skip_into_game" || strcmp(v6, "skip_into_game") == 0 )
                      {
                        if ( *&g_pGameRules[6].m_szQuestName[28] == 3
                          && CDOTAGamerules::NumHumanPlayers(g_pGameRules) == 1 )
                        {
                          IsCheatMode = 1;
                          CDOTAGamerules::State_Transition(
                            g_pGameRules,
                            DOTA_GameState::DOTA_GAMERULES_STATE_WAIT_FOR_MAP_TO_LOAD);
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "location_ping" || strcmp(v6, "location_ping") == 0 )
                        return 1;
                      if ( v6 == "dota_all_vision_enable" || strcmp(v6, "dota_all_vision_enable") == 0 )
                      {
                        if ( CDOTAGamerules::IsCheatMode() )
                          ConVar::SetValue(&dota_all_vision, 1);
                        goto LABEL_144;
                      }
                      if ( v6 == "dota_all_vision_disable" || strcmp(v6, "dota_all_vision_disable") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 )
                        {
                          ConVar::SetValue(&dota_all_vision, 0);
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "dota_clear_wards" || strcmp(v6, "dota_clear_wards") == 0 )
                      {
                        if ( CDOTAGamerules::IsCheatMode() )
                        {
                          v53 = 0;
                          while ( 1 )
                          {
                            EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                                                  g_pGameEntitySystem,
                                                  v53,
                                                  "npc_dota_ward_base");
                            v53 = EntityByClassname;
                            if ( EntityByClassname == 0 )
                              break;
                            UTIL_Remove(EntityByClassname);
                          }
                        }
                        return 1;
                      }
                      if ( v6 == "dota_ability_debug_disable" || strcmp(v6, "dota_ability_debug_disable") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 )
                        {
                          ConVar::SetValue(&dota_ability_debug, 0);
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "dota_ability_debug_enable" || strcmp(v6, "dota_ability_debug_enable") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 )
                        {
                          ConVar::SetValue(&dota_ability_debug, 1);
                          CDOTAPlayer::CheatHeroRefresh(this);
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "dota_creeps_no_spawning_enable" || strcmp(v6, "dota_creeps_no_spawning_enable") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 )
                        {
                          ConVar::SetValue(&dota_creeps_no_spawning, 1);
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "dota_creeps_no_spawning_disable" || strcmp(v6, "dota_creeps_no_spawning_disable") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 )
                        {
                          ConVar::SetValue(&dota_creeps_no_spawning, 0);
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "dota_start_game"
                        || strcmp(v6, "dota_start_game") == 0
                        || v6 == "dota_takephotos"
                        || strcmp(v6, "dota_takephotos") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 && g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[28] != 5 )
                        {
                          CDOTAGamerules::ForceGameStart(g_pGameRules);
                          CDOTAGamerules::PrepareSpawners(g_pGameRules, COERCE_DOUBLE(1065353216), v59);
                          v61 = CommandLine(v60);
                          if ( (*(*v61 + 64LL))(v61, "-herophotos") != 0 )
                          {
                            v62 = *(*engine + 288LL);
                            v63.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
                            v62(engine, v63.m_Data, "dota_record_hero npc_dota_hero_antimage");
                            return IsCheatMode;
                          }
                        }
                        return 1;
                      }
                      if ( v6 == "dota_give_gold" || strcmp(v6, "dota_give_gold") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 )
                        {
                          if ( args->m_nArgc == 1 )
                          {
                            Msg("Missing gold amount");
                          }
                          else
                          {
                            if ( args->m_nArgc <= 1 )
                              v65 = "";
                            else
                              v65 = args->m_ppArgv[1];
                            v66 = strtol(v65, 0, 10);
                            v67 = (*(this->_vptr_IHandleEntity + 393))(this);
                            CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v67, v66, 0, 8);
                          }
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "dota_win" || strcmp(v6, "dota_win") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode != 0 )
                        {
                          DevForceGameEnd(this->m_iTeamNum.m_Value);
                          return IsCheatMode;
                        }
                        return 1;
                      }
                      if ( v6 == "dota_teleport" || strcmp(v6, "dota_teleport") == 0 )
                      {
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode == 0 )
                          return 1;
                        if ( args->m_nArgc == 3
                          && (v82 = strtol(args->m_ppArgv[2], 0, 10)) > 0
                          && v82 <= g_HeroList.m_hHeroList.m_Size )
                        {
                          Hero = CDOTAHeroList::GetHero(&g_HeroList, v82 - 1);
                          m_pAsString = "not found";
                          AssignedHero = Hero;
                          if ( Hero != 0 )
                          {
                            m_pAsString = "";
                            if ( Hero->m_iszUnitName.m_Value.u.m_Id != 0 )
                              m_pAsString = Hero->m_iszUnitName.m_Value.u.m_pAsString;
                          }
                          Msg("%s\n", m_pAsString);
                        }
                        else
                        {
                          AssignedHero = CDOTAPlayer::GetAssignedHero(this);
                        }
                        if ( AssignedHero == 0 )
                          return 1;
                        v76 = this->m_vecCrosshairTracePos.y + 0.0;
                        v77 = this->m_vecCrosshairTracePos.z + 5.0;
                        v102 = this->m_vecCrosshairTracePos.x + 0.0;
                        if ( args->m_nArgc == 4 )
                        {
                          v100 = this->m_vecCrosshairTracePos.z + 5.0;
                          v78 = strtod(args->m_ppArgv[2], 0);
                          v79 = "";
                          v80 = v78;
                          v102 = v80;
                          if ( args->m_nArgc > 3 )
                            v79 = args->m_ppArgv[3];
                          v81 = strtod(v79, 0);
                          v77 = v100;
                          v76 = v81;
                        }
                        v110.z = v77;
                        *&entities.m_Size = __PAIR64__(LODWORD(v76), LODWORD(v102));
                        *&v110.x = __PAIR64__(LODWORD(v76), LODWORD(v102));
                        v98 = v76;
                        *&entities.m_Memory.m_pMemory = v77;
                        v99 = v77;
                        FindClearSpaceForUnit(AssignedHero, v110, 1);
                        DevMsg("Teleported hero to position: %f %f %f\n", v102, v98, v99);
                        CDOTA_BaseNPC::Interrupt(AssignedHero);
                      }
                      else
                      {
                        if ( v6 != "dota_killwards" && strcmp(v6, "dota_killwards") != 0 )
                        {
                          if ( v6 == "dota_hero_respawn" || strcmp(v6, "dota_hero_respawn") == 0 )
                          {
                            IsCheatMode = CDOTAGamerules::IsCheatMode();
                            if ( IsCheatMode != 0 )
                            {
                              v74 = CDOTAPlayer::GetAssignedHero(this);
                              if ( v74 != 0 && (v74->m_iUnitType & 1) != 0 )
                              {
                                (*(v74->_vptr_IHandleEntity + 494))(v74, 0, 0, 0);
                                return IsCheatMode;
                              }
                            }
                          }
                          else if ( v6 == "dota_hero_refresh" || strcmp(v6, "dota_hero_refresh") == 0 )
                          {
                            IsCheatMode = CDOTAGamerules::IsCheatMode();
                            if ( IsCheatMode != 0 )
                            {
                              CDOTAPlayer::CheatHeroRefresh(this);
                              return IsCheatMode;
                            }
                          }
                          else if ( v6 == "dota_hero_maxlevel" || strcmp(v6, "dota_hero_maxlevel") == 0 )
                          {
                            IsCheatMode = CDOTAGamerules::IsCheatMode();
                            if ( IsCheatMode != 0 )
                            {
                              HeroMaxLevel(this);
                              return IsCheatMode;
                            }
                          }
                          else if ( v6 == "dota_rap_god" || strcmp(v6, "dota_rap_god") == 0 )
                          {
                            IsCheatMode = CDOTAGamerules::IsCheatMode();
                            if ( IsCheatMode != 0 )
                            {
                              HeroMaxLevel(this);
                              v93 = CDOTAPlayer::GetAssignedHero(this);
                              v94 = v93;
                              if ( v93 != 0 && (v93->m_iUnitType & 1) != 0 )
                              {
                                CDOTA_BaseNPC::AddItem(v93, "item_rapier", 3, -1, 0);
                                CDOTA_BaseNPC::AddItem(v94, "item_rapier", 3, -1, 0);
                                CDOTA_BaseNPC::AddItem(v94, "item_rapier", 3, -1, 0);
                                CDOTA_BaseNPC::AddItem(v94, "item_greater_crit", 3, -1, 0);
                                CDOTA_BaseNPC::AddItem(v94, "item_heart", 3, -1, 0);
                                CDOTA_BaseNPC::AddItem(v94, "item_travel_boots_2", 3, -1, 0);
                                return IsCheatMode;
                              }
                            }
                          }
                          else if ( v6 == "dota_hero_level" || strcmp(v6, "dota_hero_level") == 0 )
                          {
                            IsCheatMode = CDOTAGamerules::IsCheatMode();
                            if ( IsCheatMode != 0 )
                            {
                              v85 = args->m_nArgc;
                              if ( args->m_nArgc == 1 )
                              {
                                Msg("Missing level count");
                                return IsCheatMode;
                              }
                              v86 = CDOTAPlayer::GetAssignedHero(this);
                              v87 = v86;
                              if ( v86 != 0 && (v86->m_iUnitType & 1) != 0 )
                              {
                                v88 = "";
                                if ( v85 > 1 )
                                  v88 = args->m_ppArgv[1];
                                v89 = 0;
                                v90 = strtol(v88, 0, 10);
                                while ( v89 < v90 )
                                {
                                  v91 = v87[533];
                                  if ( GetHeroMaxLevel() <= v91 )
                                    break;
                                  ++v89;
                                  XPNeededToReachNextLevel = GetXPNeededToReachNextLevel(v87[533]);
                                  (*(*v87 + 3944LL))(v87, 0, 0, 1, (XPNeededToReachNextLevel - v87[1194]));
                                }
                              }
                            }
                          }
                          else
                          {
                            if ( (v6 == "dump_modifiers" || strcmp(v6, "dump_modifiers") == 0)
                              && sv_cheats->m_pParent->m_Value.m_nValue != 0 )
                            {
                              Plat_GetLocalTime(&entities);
                              v101 = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 2);
                              CFmtStrN<256,false>::CFmtStrN(
                                &v108,
                                "modifier_list_%02d%02d%02d-%02d%02d%02d.txt",
                                (entities.m_Memory.m_nGrowSize + 1900) % 100,
                                entities.m_Memory.m_nAllocationCount,
                                v107,
                                LODWORD(entities.m_Memory.m_pMemory),
                                *(&entities.m_Size + 1),
                                entities.m_Size);
                              v24 = (v101)(&g_pFullFileSystem->IBaseFileSystem, v108.m_szBuf, "wt", 0);
                              if ( v24 != 0 )
                              {
                                for ( i = 0; i < g_pDOTAActiveModifiers->m_modifiers.m_Size; ++i )
                                {
                                  ActiveModifierByIndex = CDOTA_ActiveModifiersList::GetActiveModifierByIndex(
                                                            g_pDOTAActiveModifiers,
                                                            i);
                                  v27 = ActiveModifierByIndex;
                                  if ( ActiveModifierByIndex->m_bufflist.m_Size > 0 )
                                  {
                                    v28 = *(g_pFullFileSystem->_vptr_IAppSystem + 34);
                                    CDOTA_ModifierManager::GetParent(v105, ActiveModifierByIndex);
                                    v29 = CEntityHandle::operator CEntityInstance *(v105);
                                    v30 = "Bad Guys";
                                    if ( HIBYTE(v29[7].m_CScriptComponent) != 3 )
                                      v30 = "Good Guys";
                                    v96 = v30;
                                    CDOTA_ModifierManager::GetParent(v104, v27);
                                    v31 = CEntityHandle::operator CEntityInstance *(v104);
                                    v32 = "";
                                    m_pEntity = v31->m_pEntity;
                                    if ( m_pEntity->m_designerName.u.m_Id != 0 )
                                      v32 = m_pEntity->m_designerName.u.m_pAsString;
                                    v28(g_pFullFileSystem, v24, "---------- %s - Team: %s ---------\n", v32, v96);
                                    for ( j = 0; j < v27->m_bufflist.m_Size; ++j )
                                    {
                                      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(v27, j, 0);
                                      if ( BuffByIndex != 0 )
                                      {
                                        v36 = "false";
                                        if ( (*(BuffByIndex + 138) & 4) == 0 )
                                          v36 = "true";
                                        v97 = v36;
                                        v95 = *(g_pFullFileSystem->_vptr_IAppSystem + 34);
                                        Name = CDOTA_Buff::GetName(BuffByIndex);
                                        v95(g_pFullFileSystem, v24, "%s - Active: %s\n", Name, v97);
                                      }
                                    }
                                    (*(g_pFullFileSystem->_vptr_IAppSystem + 34))(
                                      g_pFullFileSystem,
                                      v24,
                                      "---------------------\n\n");
                                  }
                                }
                                IsCheatMode = 1;
                                (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(
                                  &g_pFullFileSystem->IBaseFileSystem,
                                  v24);
                                return IsCheatMode;
                              }
LABEL_144:
                              if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
                              {
                                if ( v6 == "givegold" || strcmp(v6, "givegold") == 0 )
                                {
                                  if ( args->m_nArgc <= 1 )
                                    v55 = "";
                                  else
                                    v55 = args->m_ppArgv[1];
                                  v56 = strtol(v55, 0, 10);
                                  v57 = (*(this->_vptr_IHandleEntity + 393))(this);
                                  v58 = v56;
                                  IsCheatMode = 1;
                                  CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v57, v58, 0, 0);
                                  return IsCheatMode;
                                }
                                if ( v6 == "dota_easybuy_chat" || strcmp(v6, "dota_easybuy_chat") == 0 )
                                {
                                  if ( args->m_nArgc <= 1 )
                                    v64 = 1;
                                  else
                                    v64 = strtol(args->m_ppArgv[1], 0, 10);
                                  IsCheatMode = 1;
                                  ConVar::SetValue(&dota_easybuy, v64);
                                  return IsCheatMode;
                                }
                              }
                              return CBaseMultiplayerPlayer::ClientCommand(this, args);
                            }
                            if ( v6 == "use_item" || strcmp(v6, "use_item") == 0 )
                            {
                              if ( m_nArgc > 1 )
                              {
                                v40 = "";
                                if ( m_nArgc != 2 )
                                  v40 = args->m_ppArgv[2];
                                UseEconItem(args->m_ppArgv[1], v40, this);
                              }
                            }
                            else
                            {
                              if ( v6 != "use_item_id" && strcmp(v6, "use_item_id") != 0 )
                                goto LABEL_144;
                              if ( m_nArgc > 0 )
                              {
                                if ( m_nArgc == 1 )
                                  v68 = "";
                                else
                                  v68 = args->m_ppArgv[1];
                                IsCheatMode = 1;
                                UseEconItemID(v68, this);
                                return IsCheatMode;
                              }
                            }
                          }
                          return 1;
                        }
                        IsCheatMode = CDOTAGamerules::IsCheatMode();
                        if ( IsCheatMode == 0 )
                          return 1;
                        m_Value = this->m_iTeamNum.m_Value;
                        entities.m_Size = 0;
                        entities.m_Memory.m_pMemory = 0;
                        entities.m_Memory.m_nAllocationCount = 0;
                        entities.m_Memory.m_nGrowSize = 0;
                        FindUnitsInRadius(m_Value, &vec3_origin, 0, -1.0, &entities, 3, 32, 0, 0, 0);
                        for ( k = 0; entities.m_Size > k; ++k )
                        {
                          v71 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[k]);
                          v72 = v71;
                          if ( v71 != 0 && BYTE3(v71[7]._vptr_IHandleEntity) != 0 )
                          {
                            v73 = v71[70].m_iszPrivateVScripts.u.m_pAsString;
                            if ( v73 != 0
                              && (v73 == "npc_dota_sentry_wards"
                               || strcmp(v73, "npc_dota_sentry_wards") == 0
                               || v73 == "npc_dota_observer_wards"
                               || strcmp(v73, "npc_dota_observer_wards") == 0) )
                            {
                              CDOTA_BaseNPC::Kill(v72, 0, 0, 0.0, 0);
                            }
                          }
                        }
                        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
                      }
                      return IsCheatMode;
                    }
                  }
                  v45 = g_pGameRules;
                  v46 = *&g_pGameRules[6].m_szQuestName[68];
                  if ( v46 == 22 && *&g_pGameRules[21].m_szQuestName[104] != 0 )
                    return 1;
                  if ( dota_force_pick_allow.m_pParent->m_Value.m_nValue == 0 )
                  {
                    v49 = (*(this->_vptr_IHandleEntity + 393))(this, v17);
                    if ( !CDOTAGamerules::HeroPickState_IsPlayerIDInControl(g_pGameRules, v49) )
                      return 1;
                    v45 = g_pGameRules;
                    v46 = *&g_pGameRules[6].m_szQuestName[68];
                  }
                  if ( v46 == 22 )
                  {
                    v50 = (*(this->_vptr_IHandleEntity + 393))(this, v17);
                    if ( !CDOTAGamerules::HasAllDraftBanned(g_pGameRules, v50) )
                    {
                      v51 = (*(this->_vptr_IHandleEntity + 393))(this);
                      if ( args->m_nArgc <= 1 )
                        v52 = "";
                      else
                        v52 = args->m_ppArgv[1];
                      IsCheatMode = 1;
                      CDOTAGamerules::AD_AddBannedHero(g_pGameRules, v52, v51);
                      return IsCheatMode;
                    }
                    v45 = g_pGameRules;
                  }
                  v47 = "";
                  if ( args->m_nArgc > 1 )
                    v47 = args->m_ppArgv[1];
                  CDOTAGamerules::CM_AddBannedHero(v45, v47);
                  return 1;
                }
              }
              if ( dota_force_pick_allow.m_pParent->m_Value.m_nValue == 0 )
              {
                v48 = (*(this->_vptr_IHandleEntity + 393))(this, v17);
                if ( !CDOTAGamerules::HeroPickState_IsPlayerIDInControl(g_pGameRules, v48) )
                  return 1;
                m_nArgc = args->m_nArgc;
              }
              v43 = "";
              if ( m_nArgc > 1 )
                v43 = args->m_ppArgv[1];
              IsCheatMode = 1;
              CDOTAGamerules::CM_AddSelectedHero(g_pGameRules, v43);
              return IsCheatMode;
            }
          }
          v41 = this->m_iTeamNum.m_Value;
          if ( v41 == 1 )
          {
            if ( CDOTAPlayer::IsACoach(this) )
              return 1;
            v41 = this->m_iTeamNum.m_Value;
          }
          if ( CDOTAGamerules::CM_GetCaptain(g_pGameRules, v41) == -1 )
          {
            v42 = (*(this->_vptr_IHandleEntity + 393))(this);
            IsCheatMode = 1;
            CDOTAGamerules::CM_SetCaptain(g_pGameRules, this->m_iTeamNum.m_Value, v42);
            return IsCheatMode;
          }
          return 1;
        }
      }
      if ( *&g_pGameRules[6].m_szQuestName[68] == 22 && *&g_pGameRules[21].m_szQuestName[104] == 0 )
        return 1;
      if ( dota_force_pick_allow.m_pParent->m_Value.m_nValue == 0 )
      {
        v44 = (*(this->_vptr_IHandleEntity + 393))(this, v10);
        if ( !CDOTAGamerules::HeroPickState_IsPlayerIDInControl(g_pGameRules, v44) )
          return 1;
        m_nArgc = args->m_nArgc;
      }
      if ( m_nArgc > 1 )
      {
        IsCheatMode = 1;
        CDOTAPlayer::HandleHeroSelection(this, args->m_ppArgv[1]);
        return IsCheatMode;
      }
      return 1;
    }
  }
  CDOTAPlayer::HandleSelectStartingPosition(this, &ctx, args);
  return 1;
}


// CDOTAPlayer::NoClipStateChanged  (line 1505, @0x0000000002653bb0, libserver.so)
void __fastcall CDOTAPlayer::NoClipStateChanged(CDOTAPlayer *const this)
{
  ;
}


// CDOTAPlayer::SetWantsSpecificHero  (line 1509, @0x0000000002678ca0, libserver.so)
// calls: CDOTA_PlayerResource::SetSelectedHero
// callers: CDOTAPlayer::Spawn
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::SetWantsSpecificHero(CDOTAPlayer *const this, const char *pszHeroName)
{
  int v3; // eax

  this->m_bWantsRandomHero = 0;
  v3 = (*(this->_vptr_IHandleEntity + 393))(this);
  CDOTA_PlayerResource::SetSelectedHero(g_pDOTAPlayerResource, v3, pszHeroName, 0);
}


// CDOTAPlayer::SetWantsRandomHero  (line 1515, @0x0000000002678e70, libserver.so)
// calls: CDOTA_PlayerResource::SetSelectedHero, CDOTA_PlayerResource::SetHasRandomed
// callers: CDOTAGamerules::PlayerSpawn, CDOTAPlayer::Spawn
// globals: g_pDOTAPlayerResource
void __fastcall CDOTAPlayer::SetWantsRandomHero(CDOTAPlayer *const this)
{
  int v2; // eax
  int v3; // eax

  this->m_bWantsRandomHero = 1;
  v2 = (*(this->_vptr_IHandleEntity + 393))(this);
  CDOTA_PlayerResource::SetSelectedHero(g_pDOTAPlayerResource, v2, "random", 0);
  v3 = (*(this->_vptr_IHandleEntity + 393))(this);
  CDOTA_PlayerResource::SetHasRandomed(g_pDOTAPlayerResource, v3);
}


// CDOTAPlayer::WantsRandomHero  (line 1522, @0x000000000265a970, libserver.so)
// callers: CDOTAGamerules::HeroPickState_Think_AP_SELECT, CDOTAGamerules::HeroPickState_Think_SELECT_PENALTY, CDOTAGamerules::HeroPickState_Think_SD_SELECT, CDOTAGamerules::HeroPickState_Think_BD_SELECT, CDOTAGamerules::HeroPickState_Think_FH_SELECT, CDOTAGamerules::SpawnPlayerHeroes, CDOTAGamerules::HeroPickState_Think_CUSTOMGAME_SELECT, CDOTAGamerules::ClientDisconnected
bool __fastcall CDOTAPlayer::WantsRandomHero(CDOTAPlayer *const this)
{
  return this->m_bWantsRandomHero;
}


// FindLeastPickedHeroClassForTeam  (line 1528, @0x000000000267b0a0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GrowMemory, Purge, RemoveAll, V_memset, memset, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetSelectedHeroName, DOTAGameManager, CDOTAGameManager::GetHeroDataByName, KeyValues::GetString, GetAttributeIndexFromString, RandomInt, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "AttributePrimary"
// globals: g_pDOTAPlayerResource
int __fastcall FindLeastPickedHeroClassForTeam(int iTeam)
{
  int v2; // ebx
  CDOTA_PlayerResource *v3; // r12
  const char *SelectedHeroName; // r12
  CDOTAGameManager *v5; // rax
  KeyValues *HeroDataByName; // rax
  const char *String; // rax
  Attributes AttributeIndexFromString; // eax
  __int64 v9; // rbx
  int v10; // r13d
  int v11; // r12d
  int v12; // r14d
  int *m_pMemory; // rax
  int result; // eax
  __int64 m_Size; // r12
  int v16; // eax
  int *v17; // rax
  int v18; // [rsp+18h] [rbp-68h]
  int iAttributeArray[4]; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > m_attributes; // [rsp+30h] [rbp-50h] BYREF

  v2 = 0;
  memset(iAttributeArray, 0, 12);
  do
  {
    while ( 1 )
    {
      v3 = g_pDOTAPlayerResource;
      if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v2) == iTeam )
      {
        SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(v3, v2);
        v5 = DOTAGameManager();
        HeroDataByName = CDOTAGameManager::GetHeroDataByName(v5, SelectedHeroName);
        if ( HeroDataByName != 0 )
          break;
      }
      if ( ++v2 == 64 )
        goto LABEL_6;
    }
    ++v2;
    String = KeyValues::GetString(HeroDataByName, "AttributePrimary", 0, 0, 0);
    AttributeIndexFromString = GetAttributeIndexFromString(String);
    ++iAttributeArray[AttributeIndexFromString];
  }
  while ( v2 != 64 );
LABEL_6:
  m_attributes.m_Size = 0;
  v9 = 0;
  v10 = 99999;
  m_attributes.m_Memory.m_pMemory = 0;
  m_attributes.m_Memory.m_nAllocationCount = 0;
  m_attributes.m_Memory.m_nGrowSize = 0;
  do
  {
    while ( 1 )
    {
      v11 = iAttributeArray[v9];
      v12 = v9;
      if ( v11 >= v10 )
      {
        if ( v10 == v11 )
        {
          m_Size = m_attributes.m_Size;
          v16 = m_attributes.m_Size;
          if ( m_attributes.m_Size == m_attributes.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&m_attributes.m_Memory, 1);
            v16 = m_attributes.m_Size;
          }
          m_attributes.m_Size = v16 + 1;
          v17 = &m_attributes.m_Memory.m_pMemory[m_Size];
          if ( v17 != 0 )
            *v17 = v9;
        }
        goto LABEL_8;
      }
      m_attributes.m_Size = 0;
      if ( m_attributes.m_Memory.m_nAllocationCount != 0 )
      {
        m_attributes.m_Size = 1;
        m_pMemory = m_attributes.m_Memory.m_pMemory;
        if ( m_attributes.m_Memory.m_pMemory != 0 )
          break;
        goto LABEL_20;
      }
      CUtlMemory<int,int>::Grow(&m_attributes.m_Memory, 1);
      ++m_attributes.m_Size;
      m_pMemory = m_attributes.m_Memory.m_pMemory;
      if ( m_attributes.m_Memory.m_pMemory != 0 )
        break;
LABEL_20:
      v10 = v11;
LABEL_8:
      if ( ++v9 == 3 )
        goto LABEL_13;
    }
    ++v9;
    *m_pMemory = v12;
    v10 = v11;
  }
  while ( v9 != 3 );
LABEL_13:
  result = m_attributes.m_Memory.m_pMemory[RandomInt(0, (m_attributes.m_Size - 1))];
  m_attributes.m_Size = 0;
  if ( (m_attributes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v18 = result;
    CUtlMemory<int,int>::Purge(&m_attributes.m_Memory);
    result = v18;
    if ( (m_attributes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&m_attributes.m_Memory);
      return v18;
    }
  }
  return result;
}


// CDOTAPlayer::Script_MakeRandomHeroSelection  (line 1573, @0x0000000002654350, libserver.so)
// calls: CDOTAGamerules::MakeRandomHeroSelection
void __fastcall CDOTAPlayer::Script_MakeRandomHeroSelection(CDOTAPlayer *const this)
{
  int v1; // eax

  v1 = (*(this->_vptr_IHandleEntity + 393))(this);
  CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, v1, 0, -1, 1);
}


// CDOTAPlayer::PrepareForFullUpdate  (line 1578, @0x0000000002654380, libserver.so)  // inlines: GetInstance, entindex
// calls: CGameEntitySystem::FirstEntInfo, CEntityInstance::GetEntityIndex, CGameEntitySystem::NextEntInfo
void __fastcall CDOTAPlayer::PrepareForFullUpdate(CDOTAPlayer *const this)
{
  CEntityIdentity *i; // rbx
  CEntityInstance *m_pInstance; // r12

  for ( i = CGameEntitySystem::FirstEntInfo(g_pGameEntitySystem);
        i != 0;
        i = CGameEntitySystem::NextEntInfo(g_pGameEntitySystem, i) )
  {
    if ( i->m_pInstance != 0 )
    {
      m_pInstance = i->m_pInstance;
      LODWORD(m_pInstance[8].m_pEntity) &= ~(1 << SLOBYTE(CEntityInstance::GetEntityIndex(this).m_Data));
    }
  }
}


// CDOTAPlayer::GetPlayerBySteamID  (line 1598, @0x000000000265a980, libserver.so)  // inlines: CSteamID, ToDOTAPlayer
// calls: UTIL_PlayerByIndex, CBaseMultiplayerPlayer::GetSteamID
// callers: CDOTAGCServerSystem::FinishActivateServerFromLobby
CDOTAPlayer *__fastcall CDOTAPlayer::GetPlayerBySteamID(const CSteamID *const steamID)
{
  CEntityIndex v2; // ebx
  CBasePlayer *v3; // rax
  CDOTAPlayer *v4; // r12
  CSteamID steamIDPlayer; // [rsp+0h] [rbp-40h] BYREF

  v2.m_Data = 1;
  HIWORD(steamIDPlayer.m_steamid.m_unAll64Bits) = BYTE6(steamIDPlayer.m_steamid.m_unAll64Bits) & 0xF;
  steamIDPlayer.m_steamid.m_comp = (steamIDPlayer.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  if ( gpGlobals->maxClients <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(v2);
    v4 = v3;
    if ( v3 != 0
      && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0
      && CBaseMultiplayerPlayer::GetSteamID(v4, &steamIDPlayer)
      && steamIDPlayer.m_steamid.m_comp == steamID->m_steamid.m_unAll64Bits )
    {
      break;
    }
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 0;
  }
  return v4;
}


// CDOTAPlayer::InventoryUpdated  (line 1621, @0x0000000002657470, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_BaseNPC_Hero::InventoryUpdated
void __fastcall CDOTAPlayer::InventoryUpdated(CDOTAPlayer *const this, CPlayerInventory *pInventory)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rdi

  v2 = this->m_hAssignedHero.m_Value.m_Index >> 15;
  if ( this->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (v2 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          CDOTA_BaseNPC_Hero::InventoryUpdated(m_pInstance, pInventory);
        }
      }
    }
  }
}


// CDOTAPlayer::TranslateMusic  (line 1633, @0x000000000265aa40, libserver.so)  // inlines: DOTAGameRules, State_Get
// callers: CDOTAHeroList::CalculateMusic, CDOTA_BaseNPC_Hero::Spawn
int __fastcall CDOTAPlayer::TranslateMusic(CDOTAPlayer *const this, int iMusic)
{
  int result; // eax
  int v3; // edx

  result = iMusic;
  if ( iMusic == 1 && g_pGameRules != 0 )
  {
    v3 = *&g_pGameRules[6].m_szQuestName[28];
    if ( v3 == 4 || v3 == 2 )
      return 3;
  }
  return result;
}


// CDOTAPlayer::CanSpeak  (line 1644, @0x0000000002653bc0, libserver.so)  // inlines: GetTextChatBanned, IsValidTeamPlayerID
// globals: g_pDOTAPlayerResource
bool __fastcall CDOTAPlayer::CanSpeak(CDOTAPlayer *const this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = (*(this->_vptr_IHandleEntity + 393))(this);
  result = 1;
  if ( v1 >= 0 && v1 < *(g_pDOTAPlayerResource + 194) )
    return *(g_pDOTAPlayerResource + v1 + 14856) ^ 1;
  return result;
}


// CDOTAPlayer::SetSwapPreferencePlayerID  (line 1650, @0x000000000265aa80, libserver.so)
// callers: CDOTAGamerules::ClientMsg_SwapRequest
void __fastcall CDOTAPlayer::SetSwapPreferencePlayerID(CDOTAPlayer *const this, int iPreferencePlayerID)
{
  this->m_iSwapPreferencePlayerID = iPreferencePlayerID;
}


// CDOTAPlayer::GetSwapPreferencePlayerID  (line 1655, @0x000000000265aa90, libserver.so)
// callers: CDOTAGamerules::ClientMsg_SwapAccept
int __fastcall CDOTAPlayer::GetSwapPreferencePlayerID(CDOTAPlayer *const this)
{
  return this->m_iSwapPreferencePlayerID;
}


// CDOTAPlayer::IsChatWheelRateLimited  (line 1660, @0x000000000265aaa0, libserver.so)  // inlines: curtime
// callers: CDOTABaseAbility::OnAbilityPinged, CDOTAGamerules::ClientMsg_BuyBackStateAlert, CDOTAGamerules::ClientMsg_GlyphAlert, CDOTAGamerules::ClientMsg_HPManaAlert, CDOTAGamerules::ClientMsg_XPAlert, CDOTAGamerules::ClientMsg_WillPurchaseAlert, CDOTAGamerules::ClientMsg_QuickBuyAlert, CDOTAGamerules::ClientMsg_ItemAlert, CDOTAGamerules::ClientMsg_KillcamDamageTaken, CDOTAGamerules::ClientMsg_ModifierAlert, CDOTAGamerules::ClientMsg_QuestStatus, CDOTAGamerules::ClientMsg_EnemyItemAlert (16 total)
bool __fastcall CDOTAPlayer::IsChatWheelRateLimited(CDOTAPlayer *const this)
{
  double v1; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool result; // al
  CGlobalVars *v7; // rbx
  float v8; // xmm1_4
  FnGlobalVarsWarningFunc v9; // rax

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( (m_flCurrentTime - this->m_flLastChatWheelTime[0]) >= 2.0 )
    return 0;
  v7 = gpGlobals;
  v8 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v9 = gpGlobals->m_pfnWarningFunc;
      if ( v9 != 0 )
        (v9)(1, 2.0, 0.0);
    }
    v8 = v7->m_flCurrentTime;
  }
  result = 1;
  if ( (v8 - this->m_flLastChatWheelTime[1]) >= 2.0 )
    return 0;
  return result;
}


// CDOTAPlayer::NoteChatWheelTime  (line 1672, @0x000000000265ab70, libserver.so)  // inlines: curtime
// callers: CDOTABaseAbility::OnAbilityPinged, CDOTAGamerules::ClientMsg_BuyBackStateAlert, CDOTAGamerules::ClientMsg_GlyphAlert, CDOTAGamerules::ClientMsg_HPManaAlert, CDOTAGamerules::ClientMsg_XPAlert, CDOTAGamerules::ClientMsg_WillPurchaseAlert, CDOTAGamerules::ClientMsg_QuickBuyAlert, CDOTAGamerules::ClientMsg_ItemAlert, CDOTAGamerules::ClientMsg_KillcamDamageTaken, CDOTAGamerules::ClientMsg_ModifierAlert, CDOTAGamerules::ClientMsg_QuestStatus, CDOTAGamerules::ClientMsg_EnemyItemAlert (16 total)
void __fastcall CDOTAPlayer::NoteChatWheelTime(CDOTAPlayer *const this)
{
  float v2; // xmm0_4
  bool v3; // cf
  bool v4; // zf
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // rbx
  __int64 v7; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = this->m_flLastChatWheelTime[1];
  v3 = v2 < this->m_flLastChatWheelTime[0];
  v4 = v2 == this->m_flLastChatWheelTime[0];
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  v7 = v3 | v4;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  this->m_flLastChatWheelTime[v7] = m_flCurrentTime;
}


// CDOTAPlayer::SendChatWheelMessage  (line 1679, @0x000000000265abf0, libserver.so)  // inlines: CDOTAUserMsg_ChatWheel_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, Delete, FindGameEvent<CDOTAUserMsg_ChatWheel_t>, FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>, GetTeamCommander, GetTeamNumber, IsPlayerTeam, PostEvent<CDOTAUserMsg_ChatWheel_t>, SendUserMessage<CDOTAUserMsg_ChatWheel_t>, SpeakConcept, chat_message, set_chat_message, set_has_param_hero_id, set_has_player_id, set_param_hero_id, set_player_id, ~CDOTAUserMsg_ChatWheel_t, ~CNetMessagePB, ~CPlainAutoPtr, ~CUserMessagePB
// calls: CDOTAPlayer::IsChatWheelRateLimited, CDOTAPlayer::NoteChatWheelTime, IsChatWheelMessageSentToAll, operator new, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CDOTAUserMsg_ChatWheel::CDOTAUserMsg_ChatWheel, CDOTAUserMsg_ChatWheel::~CDOTAUserMsg_ChatWheel, CTeamRecipientFilter::CTeamRecipientFilter, CDOTAGamerules::OnGGCallMade, CDOTAPlayer::GetAssignedHero, CBaseEntity::GetAbsOrigin (22 total)
// callers: CDOTAGamerules::ClientMsg_ChatWheel
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>(bool)::s_hEvent
void __fastcall CDOTAPlayer::SendChatWheelMessage(CDOTAPlayer *const this, const CDOTAClientMsg_ChatWheel *const msg)
{
  int m_Value; // eax
  int v5; // r15d
  EDOTAChatWheelMessage v6; // edi
  CTeamRecipientFilter *v7; // r13
  int v8; // eax
  IGameEventSystem *v9; // r15
  int v10; // r14d
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  CDOTA_BaseNPC_Hero *v12; // r13
  const Vector *AbsOrigin; // rax
  unsigned __int8 v14; // r14
  CDOTA_Commander *v15; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  const char *LaneNameFromNumber; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC_Hero *v20; // r13
  CDOTA_Speech *v21; // rdi
  __int64 v22; // [rsp+10h] [rbp-90h]
  Vector *vLoca; // [rsp+18h] [rbp-88h]
  Vector *vLoc; // [rsp+18h] [rbp-88h]
  DOTA_LANE lane; // [rsp+28h] [rbp-78h] BYREF
  float amt; // [rsp+2Ch] [rbp-74h] BYREF
  CResponseCriteriaSet criteria; // [rsp+30h] [rbp-70h] BYREF

  m_Value = this->m_iTeamNum.m_Value;
  if ( ((m_Value - 6) <= 7 || (m_Value - 2) <= 1) && !CDOTAPlayer::IsChatWheelRateLimited(this) )
  {
    CDOTAPlayer::NoteChatWheelTime(this);
    v5 = *(msg + 6);
    if ( v5 == 8 )
    {
      AssignedHero = CDOTAPlayer::GetAssignedHero(this);
      v12 = AssignedHero;
      if ( AssignedHero == 0 )
      {
        v6 = EDOTAChatWheelMessage::k_EDOTA_CW_Missing;
        goto LABEL_7;
      }
      lane = DOTA_LANE::DOTA_LANE_NONE;
      amt = 0.0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(AssignedHero);
      v14 = this->m_iTeamNum.m_Value;
      vLoc = AbsOrigin;
      v15 = DOTACommander();
      p_m_GoodGuys = &v15->m_GoodGuys;
      p_m_BadGuys = &v15->m_BadGuys;
      if ( v14 != 2 )
        p_m_GoodGuys = p_m_BadGuys;
      CDOTA_TeamCommander::FindClosestLane(p_m_GoodGuys, vLoc, 1200.0, &lane, &amt);
      switch ( lane )
      {
        case DOTA_LANE::DOTA_LANE_MIDDLE:
          v5 = 10;
          break;
        case DOTA_LANE::DOTA_LANE_BOTTOM:
          v5 = 11;
          break;
        case DOTA_LANE::DOTA_LANE_TOP:
          v5 = 9;
          break;
        default:
          break;
      }
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      LaneNameFromNumber = GetLaneNameFromNumber(lane);
      CResponseCriteriaSet::AppendCriteria(&criteria, "lane", LaneNameFromNumber, 1.0);
      m_pSpeech = v12->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 29, &criteria, 2, 0, 0, 0, 0);
    }
    else
    {
      v6 = *(msg + 6);
      if ( v5 != 62 )
      {
LABEL_7:
        if ( IsChatWheelMessageSentToAll(v6) )
        {
          v7 = operator new(0x138u);
          CRecipientFilter::CRecipientFilter(v7);
          v7->_vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::AddAllPlayers(v7);
        }
        else
        {
          v10 = this->m_iTeamNum.m_Value;
          v7 = operator new(0x138u);
          CTeamRecipientFilter::CTeamRecipientFilter(v7, v10, 0);
        }
        CDOTAUserMsg_ChatWheel::CDOTAUserMsg_ChatWheel(&criteria);
        criteria._vptr_CResponseCriteriaSet = off_416C950;
        criteria.m_Lookup.m_Elements.m_nGrowSize = (*(this->_vptr_IHandleEntity + 393))(this);
        v8 = *(msg + 7);
        criteria.m_Lookup.m_Elements.m_nAllocationCount = v5;
        *&criteria.m_Lookup.m_FirstFree = v8;
        LODWORD(criteria.m_Lookup.m_Elements.m_pMemory) |= 0xBu;
        v9 = g_pGameEventSystem;
        vLoca = *(*g_pGameEventSystem + 128LL);
        v22 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>(bool)::s_hEvent;
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>(bool)::s_hEvent);
        (vLoca)(v9, 0, 0, v7, v22, &criteria, 40);
        if ( g_pGameRules != 0 && (*(msg + 6) - 75) <= 1 )
          CDOTAGamerules::OnGGCallMade(g_pGameRules, this->m_iTeamNum.m_Value, 0);
        criteria._vptr_CResponseCriteriaSet = &off_416C7D0;
        CDOTAUserMsg_ChatWheel::~CDOTAUserMsg_ChatWheel(&criteria);
        if ( v7 != 0 )
          (*(v7->_vptr_IRecipientFilter + 2))(v7);
        return;
      }
      v20 = CDOTAPlayer::GetAssignedHero(this);
      if ( v20 == 0 )
      {
        v6 = EDOTAChatWheelMessage::k_EDOTA_CW_Thanks;
        goto LABEL_7;
      }
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      v21 = v20->m_Speech.m_pSpeech;
      if ( v21 != 0 )
        CDOTA_Speech::SpeakConcept(v21, 26, &criteria, 2, 0, 0, 0, 0);
    }
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    v6 = *(msg + 6);
    goto LABEL_7;
  }
}


// CDOTAPlayer::UpdateQuickBuy  (line 1747, @0x000000000265afb0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAClientMsg_UpdateQuickBuyItem>::TypeHandler>, NetworkStateChanged, Set, items
// calls: memcmp
// callers: CDOTAGamerules::ClientMsg_UpdateQuickBuy
void __fastcall CDOTAPlayer::UpdateQuickBuy(CDOTAPlayer *const this, const CDOTAClientMsg_UpdateQuickBuy *const msg)
{
  __int64 v4; // r15
  CNetworkArrayBase<int,9,CDOTAPlayer::NetworkVar_m_quickBuyItems> *v5; // rbx
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rcx
  char v9; // r14
  CNetworkArrayBase<int,9,CDOTAPlayer::NetworkVar_m_quickBuyItems> *p_m_quickBuyItems; // [rsp+0h] [rbp-60h]
  __int64 v11; // [rsp+8h] [rbp-58h]
  _DWORD v12[13]; // [rsp+2Ch] [rbp-34h] BYREF

  if ( (this->m_iTeamNum.m_Value - 2) <= 1u )
  {
    v4 = 0;
    p_m_quickBuyItems = &this->m_quickBuyItems;
    v5 = &this->m_quickBuyItems;
    do
    {
      if ( *(msg + 8) <= v4 )
      {
        v12[0] = 0;
        if ( memcmp(v5, v12, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4684, v4, 0xFFFFFFFFLL);
          *(&p_m_quickBuyItems[-130] + v5 - this - 4) = 0;
        }
        if ( this->m_quickBuyIsPurchasable.m_Value[v4] )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4720, v4, 0xFFFFFFFFLL);
          this->m_quickBuyIsPurchasable.m_Value[v4] = 0;
        }
      }
      else
      {
        v6 = *(*(*(msg + 3) + 8 * v4) + 24LL);
        v11 = *(*(msg + 3) + 8 * v4);
        v12[0] = v6;
        v7 = memcmp(v5, v12, 4u);
        v8 = v11;
        if ( v7 != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4684, v4, 0xFFFFFFFFLL);
          *(&p_m_quickBuyItems[-130] + v5 - this - 4) = v6;
          v8 = *(*(msg + 3) + 8 * v4);
        }
        v9 = *(v8 + 28);
        if ( this->m_quickBuyIsPurchasable.m_Value[v4] != v9 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4720, v4, 0xFFFFFFFFLL);
          this->m_quickBuyIsPurchasable.m_Value[v4] = v9;
        }
      }
      ++v4;
      v5 = (v5 + 4);
    }
    while ( v4 != 9 );
  }
}


// CDOTAPlayer::IsACoach  (line 1771, @0x0000000002654660, libserver.so)  // inlines: CSteamID, GetLobby
// calls: CBaseMultiplayerPlayer::GetSteamID, GDOTAGCClientSystem, CDOTALobby::IsMemberACoach
// callers: CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum, SendCommentatorTable_UserGroupFunc, SendTeamMatesAndCommentatorTable_UserGroupFunc, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_ProjectileManager::InternalDestroyLinearProjectile, CDOTAPlayer::ClientCommand
bool __fastcall CDOTAPlayer::IsACoach(CDOTAPlayer *const this)
{
  const CDOTALobby *v2; // rdi
  CSteamID steamID; // [rsp+0h] [rbp-20h] BYREF

  HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
  steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  return CBaseMultiplayerPlayer::GetSteamID(this, &steamID)
      && GDOTAGCClientSystem() != 0
      && (v2 = *(GDOTAGCClientSystem() + 260)) != 0
      && CDOTALobby::IsMemberACoach(v2, &steamID);
}


// CDOTAPlayer::IsACoach  (line 1771, @0x000000000265b150, libserver.so)
// calls: CDOTAPlayer::IsACoach
// callers: GetEffectiveTeamNumber, Host_Say, CGameRules::GetChatPrefix, CDOTA_DataRadiant::ShouldTransmit, CDOTA_DataDire::ShouldTransmit, CDOTAFogOfWarTempViewers::ShouldTransmit, CDOTAGamerules::GetChatFormat, CDOTAGamerules::PlayerCanHearChat, CVoiceGameMgrHelper::CanPlayerHearPlayer, BuildRecipientListForTeamEvent, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::SetGameWinner (18 total)
bool __fastcall CDOTAPlayer::IsACoach(CDOTAPlayer *const this)
{
  return this->m_iTeamNum.m_Value == 1 && CDOTAPlayer::IsACoach(this);
}


// CDOTAPlayer::GetCoachedTeamNum  (line 1792, @0x000000000265b170, libserver.so)  // inlines: CSteamID, GetLobby, GetTeamNumber, IsACoach, NetworkStateChanged, Set, ToDOTAPlayer, operator=<DOTATeam_t>, operator=<int>, operator==<int>
// calls: CDOTAPlayer::IsACoach, GDOTAGCClientSystem, CBaseMultiplayerPlayer::GetSteamID, CDOTALobby::GetMemberCoachTeam, CDOTAGCServerSystem::GetPartyIDForLobbyMember, UTIL_PlayerByIndex
// callers: GetEffectiveTeamNumber, CDOTA_DataRadiant::ShouldTransmit, CDOTA_DataDire::ShouldTransmit, CDOTAGamerules::PlayerCanHearChat, CVoiceGameMgrHelper::CanPlayerHearPlayer, BuildRecipientListForTeamEvent, CDOTAGamerules::SetGameWinner, CDOTAGamerules::ClientMsg_WorldLine, CDOTAGamerules::ClientMsg_RollDice, CDOTAGamerules::ClientMsg_FlipCoin, CDOTA_Item::OnPurchase, CDOTATeamRecipientFilter::CDOTATeamRecipientFilter (19 total)
int __fastcall CDOTAPlayer::GetCoachedTeamNum(CDOTAPlayer *const this)
{
  int result; // eax
  const CDOTALobby *v3; // rdi
  CDOTAGCServerSystem *v4; // rax
  CEntityIndex v5; // r12d
  CBasePlayer *v6; // rax
  CDOTAPlayer *v7; // r15
  CDOTAGCServerSystem *v8; // rax
  int m_Value; // r12d
  GCSDK::PlayerGroupID_t nPartyID; // [rsp+8h] [rbp-58h]
  int nPartyIDa; // [rsp+8h] [rbp-58h]
  CSteamID steamID; // [rsp+10h] [rbp-50h] BYREF
  CSteamID steamIDForTeammate; // [rsp+20h] [rbp-40h] BYREF

  result = this->m_nCachedCoachedTeam.m_Value;
  if ( result != 0 || this->m_iTeamNum.m_Value != 1 )
    return result;
  if ( !CDOTAPlayer::IsACoach(this) )
    return this->m_nCachedCoachedTeam.m_Value;
  if ( GDOTAGCClientSystem() == 0 )
    return this->m_nCachedCoachedTeam.m_Value;
  HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
  steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  if ( !CBaseMultiplayerPlayer::GetSteamID(this, &steamID) )
    return this->m_nCachedCoachedTeam.m_Value;
  v3 = *(GDOTAGCClientSystem() + 260);
  if ( v3 == 0 )
    return this->m_nCachedCoachedTeam.m_Value;
  result = CDOTALobby::GetMemberCoachTeam(v3, &steamID);
  if ( result == 0 )
  {
    result = 2;
    if ( this->m_nCachedCoachedTeam.m_Value != 2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nCachedCoachedTeam.m_Value = 2;
      return 2;
    }
    return result;
  }
  if ( result != 1 )
  {
    if ( result == 3 )
    {
      v4 = GDOTAGCClientSystem();
      nPartyID = CDOTAGCServerSystem::GetPartyIDForLobbyMember(v4, &steamID);
      if ( nPartyID != 0 && gpGlobals->maxClients > 0 )
      {
        v5.m_Data = 1;
        while ( 1 )
        {
          v6 = UTIL_PlayerByIndex(v5);
          v7 = v6;
          if ( v6 != 0
            && (*(v6->_vptr_IHandleEntity + 140))(v6) != 0
            && this != v7
            && (v7->m_iTeamNum.m_Value - 2) <= 1u )
          {
            HIWORD(steamIDForTeammate.m_steamid.m_unAll64Bits) = BYTE6(steamIDForTeammate.m_steamid.m_unAll64Bits) & 0xF;
            steamIDForTeammate.m_steamid.m_comp = (steamIDForTeammate.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
            if ( CBaseMultiplayerPlayer::GetSteamID(v7, &steamIDForTeammate) )
            {
              v8 = GDOTAGCClientSystem();
              if ( nPartyID == CDOTAGCServerSystem::GetPartyIDForLobbyMember(v8, &steamIDForTeammate) )
                break;
            }
          }
          if ( gpGlobals->maxClients < ++v5.m_Data )
            return this->m_nCachedCoachedTeam.m_Value;
        }
        m_Value = v7->m_iTeamNum.m_Value;
        if ( m_Value != this->m_nCachedCoachedTeam.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_nCachedCoachedTeam.m_Value = m_Value;
        }
      }
    }
    return this->m_nCachedCoachedTeam.m_Value;
  }
  LOBYTE(result) = 3;
  if ( this->m_nCachedCoachedTeam.m_Value != 3 )
  {
    nPartyIDa = result;
    (*(this->_vptr_IHandleEntity + 22))(this, 4924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nCachedCoachedTeam.m_Value = 3;
    return nPartyIDa;
  }
  return result;
}


// CDOTAPlayer::SetMusicStatus  (line 1853, @0x0000000002656bd0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: memcmp
void __fastcall CDOTAPlayer::SetMusicStatus(CDOTAPlayer *const this, int nMusicStatus, double a3, float flIntensity)
{
  float flIntensitya[5]; // [rsp+Ch] [rbp-14h] BYREF

  flIntensitya[0] = *&a3;
  if ( this->m_iMusicStatus.m_Value != nMusicStatus )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4740, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, flIntensity);
    this->m_iMusicStatus.m_Value = nMusicStatus;
  }
  if ( memcmp(&this->m_flMusicOperatorVals, flIntensitya, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4744, 0, 0xFFFFFFFFLL);
    this->m_flMusicOperatorVals.m_Value[0] = flIntensitya[0];
  }
}


// CDOTAPlayer::CheckForSpawningFreeCourier  (line 1861, @0x0000000002678f80, libserver.so)  // inlines: AddKeyValue<CDOTAPlayer*>, AddToTail, Base, CEntityHandle, DOTAGameRules, Element, FindKeyHash, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsAddOnGame, IsFreeCourierMode, IsValid, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetValue<CDOTAPlayer*>, SetValue<int>, operator CBaseEntity*, operator CDOTA_BaseNPC*, operator CEntityInstance*, operator=, operator[], ~CDotaNPCSpawner, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString
// calls: CDOTA_PlayerResource::GetCourier, GetCourierSpawnLocationForTeam, CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner, CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName, CEntityKeyValues::SetValue<int>, CEntitySpawner<CDOTA_BaseNPC>::Spawn, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_PlayerResource::SetCourier, CEntityKeyValuesModifyScope::Release (21 total)
// callers: CDOTAGamerules::PlayerSpawn, OnHeroSpawned, CDOTA_BaseNPC_Hero::Spawn
// strings: "npc_dota_courier", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: g_pDOTAPlayerResource, CEntityHandle::gm_pEntityList, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTAPlayer::CheckForSpawningFreeCourier(CDOTAPlayer *const this)
{
  int v1; // eax
  int v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // r14
  int (**vptr_CEntitySpawnerBase)(...); // r13
  CDOTA_BaseNPC *v8; // r13
  int v9; // eax
  int v10; // eax
  CUtlScratchMemoryPool *v11; // rdi
  int (**v12)(...); // rbx
  int v14; // esi
  __int16 v15; // cx
  __int64 v16; // rax
  char *v17; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v19; // r15
  unsigned __int64 v20; // rax
  int (*v21)(...); // rax
  int (*v22)(...); // rdx
  __int64 v23; // r15
  char *v24; // rdx
  __int16 v25; // ax
  uint32 v26; // eax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v28; // si
  int (*v29)(...); // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int16 v33; // ax
  uint32 v34; // eax
  CEntityIdentity *v35; // rcx
  __int16 v36; // si
  CEntityHandle v37[3]; // [rsp-14h] [rbp-E8h] BYREF
  int m_Value; // [rsp-8h] [rbp-DCh] BYREF
  __int64 (__fastcall **v39)(); // [rsp-4h] [rbp-D8h] OVERLAPPED BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+4h] [rbp-D0h] BYREF
  Vector v41; // 0:xmm0_8.8,8:xmm1_4.4

  if ( g_pGameRules == 0 )
    return;
  if ( g_pGameRules[5].m_szQuestName[114] == 0 )
    return;
  v1 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v1 == 15 )
    return;
  if ( v1 == 19 )
    return;
  v3 = (*(this->_vptr_IHandleEntity + 393))(this);
  if ( CDOTA_PlayerResource::GetCourier(g_pDOTAPlayerResource, v3) != 0 )
    return;
  m_Value = this->m_iTeamNum.m_Value;
  GetCourierSpawnLocationForTeam(m_Value);
  if ( (v39 + 2) <= 1 )
    return;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v39 >> 9) & 0x3F];
  if ( v4 == 0 )
    return;
  v5 = &v4[v39 & 0x1FF];
  if ( v5 == 0 )
    return;
  if ( v39 != v5->m_EHandle.m_Index )
    return;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return;
  CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner(&v39, "npc_dota_courier", 0);
  CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&v39, "npc_dota_courier");
  CEntityKeyValues::SetValue<int>(spawner._vptr_CEntitySpawnerBase, -175874245, &m_Value);
  vptr_CEntitySpawnerBase = spawner._vptr_CEntitySpawnerBase;
  if ( *(spawner._vptr_CEntitySpawnerBase + 41) <= 0 )
  {
    v14 = *spawner._vptr_CEntitySpawnerBase;
    if ( v14 <= 0 )
    {
LABEL_33:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(spawner._vptr_CEntitySpawnerBase);
      v19 = *vptr_CEntitySpawnerBase - 1;
      v20 = *(vptr_CEntitySpawnerBase + 1);
      if ( v20 != 0 )
      {
        if ( v20 <= 9 )
          v21 = (vptr_CEntitySpawnerBase + 4);
        else
          v21 = vptr_CEntitySpawnerBase[1];
      }
      else
      {
        v21 = 0;
      }
      *(v21 + v19) = -1104771937;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr((vptr_CEntitySpawnerBase + 5));
      if ( *(vptr_CEntitySpawnerBase + 21) != 0 )
        v22 = vptr_CEntitySpawnerBase[6];
      else
        v22 = 0;
      v23 = 24LL * v19;
      v24 = v22 + v23;
      v25 = *(v24 + 5);
      if ( (v25 & 1) != 0 )
        *(v24 + 5) = v25 & 0xFFFE;
      *v24 = 0;
      v26 = -1;
      *(v24 + 4) = 13;
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
      {
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v28 = 0x7FFF;
        else
          v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v26 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v28 & 0x7FFF;
        v37[0].m_Index = v26;
      }
      *v24 = v26;
      if ( *(vptr_CEntitySpawnerBase + 21) != 0 )
        v29 = vptr_CEntitySpawnerBase[6];
      else
        v29 = 0;
      *(v29 + v23 + 16) = 0;
      goto LABEL_14;
    }
    v15 = *(spawner._vptr_CEntitySpawnerBase + 1);
    v16 = 0;
    while ( 1 )
    {
      if ( v15 != 0 )
      {
        v17 = spawner._vptr_CEntitySpawnerBase + 4;
        if ( v15 > 9 )
          v17 = *(spawner._vptr_CEntitySpawnerBase + 1);
      }
      else
      {
        v17 = 0;
      }
      if ( *&v17[4 * v16] == -1104771937 )
        break;
      if ( v14 <= ++v16 )
        goto LABEL_33;
    }
    if ( *(spawner._vptr_CEntitySpawnerBase + 21) != 0 )
    {
      v30 = *(spawner._vptr_CEntitySpawnerBase + 6);
      v31 = 24 * v16;
      if ( *(v30 + v31 + 16) != 0 )
      {
LABEL_49:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v30 + v31 + 16));
        goto LABEL_14;
      }
    }
    else
    {
      v31 = 24 * v16;
      v30 = 0;
      if ( *(v31 + 16) != 0 )
        goto LABEL_49;
    }
    v32 = v31 + v30;
    v33 = *(v32 + 10);
    if ( (v33 & 1) != 0 )
      *(v32 + 10) = v33 & 0xFFFE;
    *v32 = 0;
    v34 = -1;
    *(v32 + 8) = 13;
    v35 = this->m_pEntity;
    if ( v35 != 0 )
    {
      if ( v35->m_EHandle.m_Index == -1 )
        v36 = 0x7FFF;
      else
        v36 = v35->m_EHandle.m_Index & 0x7FFF;
      v34 = (((v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1)) << 15) | v36 & 0x7FFF;
      v37[0].m_Index = v34;
    }
    *v32 = v34;
  }
LABEL_14:
  CEntitySpawner<CDOTA_BaseNPC>::Spawn(v37, &v39);
  v8 = CEntityHandle::operator CEntityInstance *(v37);
  if ( v8 != 0 )
  {
    v41 = *CBaseEntity::GetAbsOrigin(m_pInstance);
    FindClearSpaceForUnit(v8, v41, 1);
    v9 = (*(this->_vptr_IHandleEntity + 393))(this);
    CDOTA_BaseNPC::SetControllableByPlayer(v8, v9, 0);
    v10 = (*(this->_vptr_IHandleEntity + 393))(this);
    CDOTA_PlayerResource::SetCourier(g_pDOTAPlayerResource, v10, v8);
  }
  v11 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  v39 = off_40FBED0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = *&spawner.m_bValidateKeys;
  if ( v11 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v11);
  }
  if ( spawner._vptr_CEntitySpawnerBase != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_pEntityKeyValues);
    v12 = spawner._vptr_CEntitySpawnerBase;
    if ( --*(spawner._vptr_CEntitySpawnerBase + 40) <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v12);
      operator delete(v12);
    }
  }
  if ( spawner.m_pEntityClass != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_pEntityClass);
  CEntityKeyValuesModifyScope::Release(&spawner.m_pEntityKeyValues);
}


// CDOTAPlayer::GetUnitsAutoAttackMode  (line 1891, @0x000000000265b720, libserver.so)
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_BaseNPC::Spawn
CDOTAClientMsg_UnitsAutoAttackMode_EMode __fastcall CDOTAPlayer::GetUnitsAutoAttackMode(
        CDOTAPlayer *const this,
        AutoattackUnitType_t unitType)
{
  CDOTAClientMsg_UnitsAutoAttackMode_EMode result; // eax

  result = this->m_eToggledAutoattackMode;
  if ( result == CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_INVALID )
    return this->m_eUnitsAutoattackMode[unitType];
  return result;
}


// CDOTAPlayer::ToggleAutoattack  (line 1899, @0x000000000265b750, libserver.so)  // inlines: CDOTAUserMsg_InvalidCommand_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_InvalidCommand_t>, FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>, GetUnitsAutoAttackMode, PostEvent<CDOTAUserMsg_InvalidCommand_t>, SendUserMessage<CDOTAUserMsg_InvalidCommand_t>, assign, set_has_message, set_message, ~CDOTAUserMsg_InvalidCommand_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CDOTAUserMsg_InvalidCommand::CDOTAUserMsg_InvalidCommand, std::string::assign(char const*,ulong), CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAGamerules::ClientMsg_ToggleAutoattack
// strings: "#dota_hud_error_autoattack_always", "#dota_hud_error_autoattack_after_spellcast", "#dota_hud_error_autoattack_never"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent
void __fastcall CDOTAPlayer::ToggleAutoattack(
        CDOTAPlayer *const this,
        const CDOTAClientMsg_ToggleAutoattack_t *const msg)
{
  CDOTAClientMsg_UnitsAutoAttackMode_EMode m_eToggledAutoattackMode; // eax
  __int64 v4; // r14
  IGameEventSystem *v5; // rbx
  void (__fastcall *v6)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v7[2]; // [rsp+10h] [rbp-190h] BYREF
  int v8; // [rsp+20h] [rbp-180h]
  std::string *v9; // [rsp+28h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( (*(msg + 16) & 1) != 0 )
  {
    this->m_eToggledAutoattackMode = *(msg + 6);
    goto LABEL_11;
  }
  if ( this->m_eToggledAutoattackMode == CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_INVALID )
  {
    this->m_eToggledAutoattackMode = (this->m_eUnitsAutoattackMode[0] != CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_ALWAYS)
                                   + 1;
LABEL_11:
    if ( *(msg + 28) == 0 )
      return;
    goto LABEL_4;
  }
  this->m_eToggledAutoattackMode = CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_INVALID;
  if ( *(msg + 28) == 0 )
    return;
LABEL_4:
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, this);
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_InvalidCommand::CDOTAUserMsg_InvalidCommand(v7);
  v7[0] = off_416C290;
  m_eToggledAutoattackMode = this->m_eToggledAutoattackMode;
  if ( m_eToggledAutoattackMode == CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_INVALID )
    m_eToggledAutoattackMode = this->m_eUnitsAutoattackMode[0];
  if ( m_eToggledAutoattackMode != CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_NEVER )
  {
    v8 |= 1u;
    if ( m_eToggledAutoattackMode == CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_AFTER_SPELLCAST )
      std::string::assign(v9, "#dota_hud_error_autoattack_after_spellcast", 0x2Au);
    else
      std::string::assign(v9, "#dota_hud_error_autoattack_always", 0x21u);
  }
  else
  {
    v8 |= 1u;
    std::string::assign(v9, "#dota_hud_error_autoattack_never", 0x20u);
  }
  v4 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent;
  v5 = g_pGameEventSystem;
  v6 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent);
  v6(v5, 0, 0, &filter, v4, v7, 32);
  v7[0] = &off_416C110;
  CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand(v7);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


