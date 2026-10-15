
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RegisterGameEventMessage<CDOTAUserMsg_FlipCoinResult_t>  (line 30, @0x0000000001d31b30, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_FlipCoinResult_t>, FindOrCreateNetMessage<CDOTAUserMsg_FlipCoinResult_t>, RegisterGameEvent<CDOTAUserMsg_FlipCoinResult_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_FlipCoinResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_FlipCoinResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<565,CDOTAUserMsg_FlipCoinResult,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_FlipCoinResult_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_FlipCoinResult_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_FlipCoinResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_FlipCoinResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_FlipCoinResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 565, &CNetMessagePB<565,CDOTAUserMsg_FlipCoinResult,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_FlipCoinResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_FlipCoinResult_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_RollDiceResult_t>  (line 30, @0x0000000001d31bd0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_RollDiceResult_t>, FindOrCreateNetMessage<CDOTAUserMsg_RollDiceResult_t>, RegisterGameEvent<CDOTAUserMsg_RollDiceResult_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_RollDiceResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_RollDiceResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<564,CDOTAUserMsg_RollDiceResult,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_RollDiceResult_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_RollDiceResult_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_RollDiceResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_RollDiceResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_RollDiceResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 564, &CNetMessagePB<564,CDOTAUserMsg_RollDiceResult,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_RollDiceResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_RollDiceResult_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SelectPenaltyGold_t>  (line 30, @0x0000000001d31c70, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SelectPenaltyGold_t>, FindOrCreateNetMessage<CDOTAUserMsg_SelectPenaltyGold_t>, RegisterGameEvent<CDOTAUserMsg_SelectPenaltyGold_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SelectPenaltyGold_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SelectPenaltyGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<563,CDOTAUserMsg_SelectPenaltyGold,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SelectPenaltyGold_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SelectPenaltyGold_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SelectPenaltyGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SelectPenaltyGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SelectPenaltyGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 563, &CNetMessagePB<563,CDOTAUserMsg_SelectPenaltyGold,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SelectPenaltyGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SelectPenaltyGold_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_KillcamDamageTaken_t>  (line 30, @0x0000000001d31d10, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_KillcamDamageTaken_t>, FindOrCreateNetMessage<CDOTAUserMsg_KillcamDamageTaken_t>, RegisterGameEvent<CDOTAUserMsg_KillcamDamageTaken_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_KillcamDamageTaken_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<562,CDOTAUserMsg_KillcamDamageTaken,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_KillcamDamageTaken_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_KillcamDamageTaken_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 562, &CNetMessagePB<562,CDOTAUserMsg_KillcamDamageTaken,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_KillcamDamageTaken_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SuggestHeroRole_t>  (line 30, @0x0000000001d31db0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>, FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroRole_t>, RegisterGameEvent<CDOTAUserMsg_SuggestHeroRole_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroRole_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<561,CDOTAUserMsg_SuggestHeroRole,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SuggestHeroRole_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroRole_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroRole_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroRole_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 561, &CNetMessagePB<561,CDOTAUserMsg_SuggestHeroRole,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroRole_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroRole_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SuggestHeroPick_t>  (line 30, @0x0000000001d31e50, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>, FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroPick_t>, RegisterGameEvent<CDOTAUserMsg_SuggestHeroPick_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroPick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<560,CDOTAUserMsg_SuggestHeroPick,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SuggestHeroPick_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroPick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroPick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroPick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 560, &CNetMessagePB<560,CDOTAUserMsg_SuggestHeroPick,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SuggestHeroPick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SuggestHeroPick_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_QuestStatus_t>  (line 30, @0x0000000001d31ef0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_QuestStatus_t>, FindOrCreateNetMessage<CDOTAUserMsg_QuestStatus_t>, RegisterGameEvent<CDOTAUserMsg_QuestStatus_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_QuestStatus_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<559,CDOTAUserMsg_QuestStatus,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_QuestStatus_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_QuestStatus_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 559, &CNetMessagePB<559,CDOTAUserMsg_QuestStatus,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_QuestStatus_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_MatchDetails_t>  (line 30, @0x0000000001d31f90, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>, FindOrCreateNetMessage<CDOTAUserMsg_MatchDetails_t>, RegisterGameEvent<CDOTAUserMsg_MatchDetails_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<558,CMsgDOTAMatch,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_MatchDetails_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 558, &CNetMessagePB<558,CMsgDOTAMatch,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 336, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_MatchMetadata_t>  (line 30, @0x0000000001d32030, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>, FindOrCreateNetMessage<CDOTAUserMsg_MatchMetadata_t>, RegisterGameEvent<CDOTAUserMsg_MatchMetadata_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<557,CDOTAMatchMetadataFile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_MatchMetadata_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 557, &CNetMessagePB<557,CDOTAMatchMetadataFile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_UpdateQuestProgress_t>  (line 30, @0x0000000001d320d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>, FindOrCreateNetMessage<CDOTAUserMsg_UpdateQuestProgress_t>, RegisterGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateQuestProgress_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<556,CDOTAUserMsg_UpdateQuestProgress,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_UpdateQuestProgress_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateQuestProgress_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateQuestProgress_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateQuestProgress_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 556, &CNetMessagePB<556,CDOTAUserMsg_UpdateQuestProgress,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateQuestProgress_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateQuestProgress_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_XPAlert_t>  (line 30, @0x0000000001d32170, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_XPAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_XPAlert_t>, RegisterGameEvent<CDOTAUserMsg_XPAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_XPAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<555,CDOTAUserMsg_XPAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_XPAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_XPAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 555, &CNetMessagePB<555,CDOTAUserMsg_XPAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_XPAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CombatLogDataHLTV_t>  (line 30, @0x0000000001d32210, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>, FindOrCreateNetMessage<CDOTAUserMsg_CombatLogDataHLTV_t>, RegisterGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogDataHLTV_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<554,CMsgDOTACombatLogEntry,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CombatLogDataHLTV_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogDataHLTV_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogDataHLTV_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogDataHLTV_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 554, &CNetMessagePB<554,CMsgDOTACombatLogEntry,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 232, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogDataHLTV_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogDataHLTV_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ProjectionEvent_t>  (line 30, @0x0000000001d322b0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ProjectionEvent_t>, FindOrCreateNetMessage<CDOTAUserMsg_ProjectionEvent_t>, RegisterGameEvent<CDOTAUserMsg_ProjectionEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ProjectionEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<553,CDOTAUserMsg_ProjectionEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ProjectionEvent_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ProjectionEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 553, &CNetMessagePB<553,CDOTAUserMsg_ProjectionEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ProjectionEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ProjectionAbility_t>  (line 30, @0x0000000001d32350, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ProjectionAbility_t>, FindOrCreateNetMessage<CDOTAUserMsg_ProjectionAbility_t>, RegisterGameEvent<CDOTAUserMsg_ProjectionAbility_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ProjectionAbility_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<552,CDOTAUserMsg_ProjectionAbility,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ProjectionAbility_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ProjectionAbility_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 552, &CNetMessagePB<552,CDOTAUserMsg_ProjectionAbility,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ProjectionAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ProjectionAbility_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CompendiumState_t>  (line 30, @0x0000000001d323f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CompendiumState_t>, FindOrCreateNetMessage<CDOTAUserMsg_CompendiumState_t>, RegisterGameEvent<CDOTAUserMsg_CompendiumState_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CompendiumState_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CompendiumState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<551,CDOTAUserMsg_CompendiumState,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CompendiumState_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CompendiumState_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CompendiumState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CompendiumState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CompendiumState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 551, &CNetMessagePB<551,CDOTAUserMsg_CompendiumState,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CompendiumState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CompendiumState_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>  (line 30, @0x0000000001d32490, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>, FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>, RegisterGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<550,CDOTAUserMsg_CustomHudElement_Destroy,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 550, &CNetMessagePB<550,CDOTAUserMsg_CustomHudElement_Destroy,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Modify_t>  (line 30, @0x0000000001d32530, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>, FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Modify_t>, RegisterGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Modify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<549,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Modify_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Modify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Modify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Modify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 549, &CNetMessagePB<549,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Modify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Create_t>  (line 30, @0x0000000001d325d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>, FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Create_t>, RegisterGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Create_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<548,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Create_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Create_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Create_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Create_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 548, &CNetMessagePB<548,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHudElement_Create_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>  (line 30, @0x0000000001d32670, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>, FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>, RegisterGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<547,CDOTAUserMsg_SpectatorPlayerUnitOrders,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 547, &CNetMessagePB<547,CDOTAUserMsg_SpectatorPlayerUnitOrders,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 72, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_BeastChat_t>  (line 30, @0x0000000001d32710, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_BeastChat_t>, FindOrCreateNetMessage<CDOTAUserMsg_BeastChat_t>, RegisterGameEvent<CDOTAUserMsg_BeastChat_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BeastChat_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BeastChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<546,CDOTAUserMsg_BeastChat,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_BeastChat_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BeastChat_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BeastChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BeastChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BeastChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 546, &CNetMessagePB<546,CDOTAUserMsg_BeastChat,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BeastChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BeastChat_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_GlyphAlert_t>  (line 30, @0x0000000001d327b0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_GlyphAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_GlyphAlert_t>, RegisterGameEvent<CDOTAUserMsg_GlyphAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlyphAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<545,CDOTAUserMsg_GlyphAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_GlyphAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlyphAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 545, &CNetMessagePB<545,CDOTAUserMsg_GlyphAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlyphAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_HPManaAlert_t>  (line 30, @0x0000000001d32850, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_HPManaAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_HPManaAlert_t>, RegisterGameEvent<CDOTAUserMsg_HPManaAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HPManaAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<544,CDOTAUserMsg_HPManaAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_HPManaAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HPManaAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 544, &CNetMessagePB<544,CDOTAUserMsg_HPManaAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HPManaAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ModifierAlert_t>  (line 30, @0x0000000001d328f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ModifierAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_ModifierAlert_t>, RegisterGameEvent<CDOTAUserMsg_ModifierAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ModifierAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<543,CDOTAUserMsg_ModifierAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ModifierAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ModifierAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 543, &CNetMessagePB<543,CDOTAUserMsg_ModifierAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ModifierAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_PredictionResult_t>  (line 30, @0x0000000001d32990, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>, FindOrCreateNetMessage<CDOTAUserMsg_PredictionResult_t>, RegisterGameEvent<CDOTAUserMsg_PredictionResult_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PredictionResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<542,CDOTAUserMsg_PredictionResult,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_PredictionResult_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PredictionResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PredictionResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PredictionResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 542, &CNetMessagePB<542,CDOTAUserMsg_PredictionResult,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PredictionResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_StatsHeroDetails_t>  (line 30, @0x0000000001d32a30, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_StatsHeroDetails_t>, FindOrCreateNetMessage<CDOTAUserMsg_StatsHeroDetails_t>, RegisterGameEvent<CDOTAUserMsg_StatsHeroDetails_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsHeroDetails_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsHeroDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<541,CMsgCombatAnalyzerStats,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_StatsHeroDetails_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsHeroDetails_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsHeroDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsHeroDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsHeroDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 541, &CNetMessagePB<541,CMsgCombatAnalyzerStats,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsHeroDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsHeroDetails_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_QuickBuyAlert_t>  (line 30, @0x0000000001d32ad0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_QuickBuyAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_QuickBuyAlert_t>, RegisterGameEvent<CDOTAUserMsg_QuickBuyAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_QuickBuyAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<540,CDOTAUserMsg_QuickBuyAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_QuickBuyAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_QuickBuyAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 540, &CNetMessagePB<540,CDOTAUserMsg_QuickBuyAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_QuickBuyAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CustomHeaderMessage_t>  (line 30, @0x0000000001d32b70, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>, FindOrCreateNetMessage<CDOTAUserMsg_CustomHeaderMessage_t>, RegisterGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHeaderMessage_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<539,CDOTAUserMsg_CustomHeaderMessage,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CustomHeaderMessage_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHeaderMessage_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHeaderMessage_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHeaderMessage_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 539, &CNetMessagePB<539,CDOTAUserMsg_CustomHeaderMessage,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomHeaderMessage_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SpeechBubble_t>  (line 30, @0x0000000001d32c10, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>, FindOrCreateNetMessage<CDOTAUserMsg_SpeechBubble_t>, RegisterGameEvent<CDOTAUserMsg_SpeechBubble_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpeechBubble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<538,CDOTAUserMsg_SpeechBubble,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SpeechBubble_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpeechBubble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpeechBubble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpeechBubble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 538, &CNetMessagePB<538,CDOTAUserMsg_SpeechBubble,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpeechBubble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_BuyBackStateAlert_t>  (line 30, @0x0000000001d32cb0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_BuyBackStateAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_BuyBackStateAlert_t>, RegisterGameEvent<CDOTAUserMsg_BuyBackStateAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BuyBackStateAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<537,CDOTAUserMsg_BuyBackStateAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_BuyBackStateAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BuyBackStateAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 537, &CNetMessagePB<537,CDOTAUserMsg_BuyBackStateAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BuyBackStateAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_MiniTaunt_t>  (line 30, @0x0000000001d32d50, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>, FindOrCreateNetMessage<CDOTAUserMsg_MiniTaunt_t>, RegisterGameEvent<CDOTAUserMsg_MiniTaunt_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniTaunt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<536,CDOTAUserMsg_MiniTaunt,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_MiniTaunt_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniTaunt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniTaunt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniTaunt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 536, &CNetMessagePB<536,CDOTAUserMsg_MiniTaunt,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniTaunt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_StatsMatchDetails_t>  (line 30, @0x0000000001d32df0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>, FindOrCreateNetMessage<CDOTAUserMsg_StatsMatchDetails_t>, RegisterGameEvent<CDOTAUserMsg_StatsMatchDetails_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsMatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<535,CDOTAUserMsg_StatsMatchDetails,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_StatsMatchDetails_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsMatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsMatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsMatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 535, &CNetMessagePB<535,CDOTAUserMsg_StatsMatchDetails,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 168, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_StatsMatchDetails_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_StatsMatchDetails_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_EnemyItemAlert_t>  (line 30, @0x0000000001d32e90, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_EnemyItemAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_EnemyItemAlert_t>, RegisterGameEvent<CDOTAUserMsg_EnemyItemAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_EnemyItemAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<534,CDOTAUserMsg_EnemyItemAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_EnemyItemAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_EnemyItemAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 534, &CNetMessagePB<534,CDOTAUserMsg_EnemyItemAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_EnemyItemAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CourierKilledAlert_t>  (line 30, @0x0000000001d32f30, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_CourierKilledAlert_t>, RegisterGameEvent<CDOTAUserMsg_CourierKilledAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CourierKilledAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<533,CDOTAUserMsg_CourierKilledAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CourierKilledAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CourierKilledAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CourierKilledAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CourierKilledAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 533, &CNetMessagePB<533,CDOTAUserMsg_CourierKilledAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CourierKilledAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_AbilitySteal_t>  (line 30, @0x0000000001d32fd0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>, FindOrCreateNetMessage<CDOTAUserMsg_AbilitySteal_t>, RegisterGameEvent<CDOTAUserMsg_AbilitySteal_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilitySteal_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<532,CDOTAUserMsg_AbilitySteal,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_AbilitySteal_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilitySteal_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilitySteal_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilitySteal_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 532, &CNetMessagePB<532,CDOTAUserMsg_AbilitySteal,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilitySteal_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_PlayerMMR_t>  (line 30, @0x0000000001d33070, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_PlayerMMR_t>, FindOrCreateNetMessage<CDOTAUserMsg_PlayerMMR_t>, RegisterGameEvent<CDOTAUserMsg_PlayerMMR_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PlayerMMR_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PlayerMMR_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<531,CDOTAUserMsg_PlayerMMR,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_PlayerMMR_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PlayerMMR_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PlayerMMR_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PlayerMMR_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PlayerMMR_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 531, &CNetMessagePB<531,CDOTAUserMsg_PlayerMMR,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_PlayerMMR_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PlayerMMR_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TutorialMinimapPosition_t>  (line 30, @0x0000000001d33110, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TutorialMinimapPosition_t>, FindOrCreateNetMessage<CDOTAUserMsg_TutorialMinimapPosition_t>, RegisterGameEvent<CDOTAUserMsg_TutorialMinimapPosition_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialMinimapPosition_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialMinimapPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<530,CDOTAUserMsg_TutorialMinimapPosition,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TutorialMinimapPosition_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialMinimapPosition_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialMinimapPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialMinimapPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialMinimapPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 530, &CNetMessagePB<530,CDOTAUserMsg_TutorialMinimapPosition,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialMinimapPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialMinimapPosition_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_WillPurchaseAlert_t>  (line 30, @0x0000000001d331b0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_WillPurchaseAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_WillPurchaseAlert_t>, RegisterGameEvent<CDOTAUserMsg_WillPurchaseAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_WillPurchaseAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<529,CDOTAUserMsg_WillPurchaseAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_WillPurchaseAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_WillPurchaseAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 529, &CNetMessagePB<529,CDOTAUserMsg_WillPurchaseAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_WillPurchaseAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_BoosterState_t>  (line 30, @0x0000000001d33250, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_BoosterState_t>, FindOrCreateNetMessage<CDOTAUserMsg_BoosterState_t>, RegisterGameEvent<CDOTAUserMsg_BoosterState_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BoosterState_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BoosterState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<528,CDOTAUserMsg_BoosterState,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_BoosterState_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BoosterState_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BoosterState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BoosterState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BoosterState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 528, &CNetMessagePB<528,CDOTAUserMsg_BoosterState,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BoosterState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BoosterState_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_VoteEnd_t>  (line 30, @0x0000000001d332f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>, FindOrCreateNetMessage<CDOTAUserMsg_VoteEnd_t>, RegisterGameEvent<CDOTAUserMsg_VoteEnd_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<527,CDOTAUserMsg_VoteEnd,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_VoteEnd_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 527, &CNetMessagePB<527,CDOTAUserMsg_VoteEnd,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_VoteUpdate_t>  (line 30, @0x0000000001d33390, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>, FindOrCreateNetMessage<CDOTAUserMsg_VoteUpdate_t>, RegisterGameEvent<CDOTAUserMsg_VoteUpdate_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<526,CDOTAUserMsg_VoteUpdate,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_VoteUpdate_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 526, &CNetMessagePB<526,CDOTAUserMsg_VoteUpdate,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_VoteStart_t>  (line 30, @0x0000000001d33430, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>, FindOrCreateNetMessage<CDOTAUserMsg_VoteStart_t>, RegisterGameEvent<CDOTAUserMsg_VoteStart_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteStart_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<525,CDOTAUserMsg_VoteStart,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_VoteStart_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteStart_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteStart_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteStart_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 525, &CNetMessagePB<525,CDOTAUserMsg_VoteStart,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_VoteStart_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ShowGenericPopup_t>  (line 30, @0x0000000001d334d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>, FindOrCreateNetMessage<CDOTAUserMsg_ShowGenericPopup_t>, RegisterGameEvent<CDOTAUserMsg_ShowGenericPopup_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowGenericPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<524,CDOTAUserMsg_ShowGenericPopup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ShowGenericPopup_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowGenericPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowGenericPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowGenericPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 524, &CNetMessagePB<524,CDOTAUserMsg_ShowGenericPopup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowGenericPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>  (line 30, @0x0000000001d33570, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>, FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>, RegisterGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<522,CDOTAUserMsg_TE_UnitAnimationEnd,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 522, &CNetMessagePB<522,CDOTAUserMsg_TE_UnitAnimationEnd,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TEUnitAnimation_t>  (line 30, @0x0000000001d33610, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>, FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimation_t>, RegisterGameEvent<CDOTAUserMsg_TEUnitAnimation_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimation_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<521,CDOTAUserMsg_TE_UnitAnimation,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TEUnitAnimation_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimation_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimation_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimation_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 521, &CNetMessagePB<521,CDOTAUserMsg_TE_UnitAnimation,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEUnitAnimation_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_AbilityPing_t>  (line 30, @0x0000000001d336b0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>, FindOrCreateNetMessage<CDOTAUserMsg_AbilityPing_t>, RegisterGameEvent<CDOTAUserMsg_AbilityPing_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilityPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<523,CDOTAUserMsg_AbilityPing,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_AbilityPing_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilityPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilityPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilityPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 523, &CNetMessagePB<523,CDOTAUserMsg_AbilityPing,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AbilityPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TEDotaBloodImpact_t>  (line 30, @0x0000000001d33750, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>, FindOrCreateNetMessage<CDOTAUserMsg_TEDotaBloodImpact_t>, RegisterGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEDotaBloodImpact_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<520,CDOTAUserMsg_TE_DotaBloodImpact,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TEDotaBloodImpact_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEDotaBloodImpact_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEDotaBloodImpact_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEDotaBloodImpact_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 520, &CNetMessagePB<520,CDOTAUserMsg_TE_DotaBloodImpact,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEDotaBloodImpact_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TEProjectileLoc_t>  (line 30, @0x0000000001d337f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>, FindOrCreateNetMessage<CDOTAUserMsg_TEProjectileLoc_t>, RegisterGameEvent<CDOTAUserMsg_TEProjectileLoc_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectileLoc_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<519,CDOTAUserMsg_TE_ProjectileLoc,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TEProjectileLoc_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectileLoc_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectileLoc_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectileLoc_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 519, &CNetMessagePB<519,CDOTAUserMsg_TE_ProjectileLoc,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 72, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectileLoc_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TEProjectile_t>  (line 30, @0x0000000001d33890, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>, FindOrCreateNetMessage<CDOTAUserMsg_TEProjectile_t>, RegisterGameEvent<CDOTAUserMsg_TEProjectile_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<518,CDOTAUserMsg_TE_Projectile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TEProjectile_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 518, &CNetMessagePB<518,CDOTAUserMsg_TE_Projectile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TEProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ClientLoadGridNav_t>  (line 30, @0x0000000001d33930, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ClientLoadGridNav_t>, FindOrCreateNetMessage<CDOTAUserMsg_ClientLoadGridNav_t>, RegisterGameEvent<CDOTAUserMsg_ClientLoadGridNav_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ClientLoadGridNav_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ClientLoadGridNav_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<517,CDOTAUserMsg_ClientLoadGridNav,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ClientLoadGridNav_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ClientLoadGridNav_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ClientLoadGridNav_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ClientLoadGridNav_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ClientLoadGridNav_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 517, &CNetMessagePB<517,CDOTAUserMsg_ClientLoadGridNav,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ClientLoadGridNav_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ClientLoadGridNav_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CoachHUDPing_t>  (line 30, @0x0000000001d339d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CoachHUDPing_t>, FindOrCreateNetMessage<CDOTAUserMsg_CoachHUDPing_t>, RegisterGameEvent<CDOTAUserMsg_CoachHUDPing_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CoachHUDPing_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CoachHUDPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<516,CDOTAUserMsg_CoachHUDPing,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CoachHUDPing_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CoachHUDPing_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CoachHUDPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CoachHUDPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CoachHUDPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 516, &CNetMessagePB<516,CDOTAUserMsg_CoachHUDPing,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CoachHUDPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CoachHUDPing_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CustomMsg_t>  (line 30, @0x0000000001d33a70, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CustomMsg_t>, FindOrCreateNetMessage<CDOTAUserMsg_CustomMsg_t>, RegisterGameEvent<CDOTAUserMsg_CustomMsg_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomMsg_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<515,CDOTAUserMsg_CustomMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CustomMsg_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomMsg_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 515, &CNetMessagePB<515,CDOTAUserMsg_CustomMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CustomMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomMsg_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SendFinalGold_t>  (line 30, @0x0000000001d33b10, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SendFinalGold_t>, FindOrCreateNetMessage<CDOTAUserMsg_SendFinalGold_t>, RegisterGameEvent<CDOTAUserMsg_SendFinalGold_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendFinalGold_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendFinalGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<514,CDOTAUserMsg_SendFinalGold,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SendFinalGold_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendFinalGold_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendFinalGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendFinalGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendFinalGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 514, &CNetMessagePB<514,CDOTAUserMsg_SendFinalGold,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendFinalGold_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendFinalGold_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SendGenericToolTip_t>  (line 30, @0x0000000001d33bb0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>, FindOrCreateNetMessage<CDOTAUserMsg_SendGenericToolTip_t>, RegisterGameEvent<CDOTAUserMsg_SendGenericToolTip_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendGenericToolTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<513,CDOTAUserMsg_SendGenericToolTip,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SendGenericToolTip_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendGenericToolTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendGenericToolTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendGenericToolTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 513, &CNetMessagePB<513,CDOTAUserMsg_SendGenericToolTip,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendGenericToolTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendGenericToolTip_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SendRoshanPopup_t>  (line 30, @0x0000000001d33c50, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>, FindOrCreateNetMessage<CDOTAUserMsg_SendRoshanPopup_t>, RegisterGameEvent<CDOTAUserMsg_SendRoshanPopup_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendRoshanPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<512,CDOTAUserMsg_SendRoshanPopup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SendRoshanPopup_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendRoshanPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendRoshanPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendRoshanPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 512, &CNetMessagePB<512,CDOTAUserMsg_SendRoshanPopup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendRoshanPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TutorialFinish_t>  (line 30, @0x0000000001d33cf0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>, FindOrCreateNetMessage<CDOTAUserMsg_TutorialFinish_t>, RegisterGameEvent<CDOTAUserMsg_TutorialFinish_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFinish_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<511,CDOTAUserMsg_TutorialFinish,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TutorialFinish_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFinish_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFinish_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFinish_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 511, &CNetMessagePB<511,CDOTAUserMsg_TutorialFinish,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFinish_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SendStatPopup_t>  (line 30, @0x0000000001d33d90, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SendStatPopup_t>, FindOrCreateNetMessage<CDOTAUserMsg_SendStatPopup_t>, RegisterGameEvent<CDOTAUserMsg_SendStatPopup_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendStatPopup_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<510,CDOTAUserMsg_SendStatPopup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SendStatPopup_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendStatPopup_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 510, &CNetMessagePB<510,CDOTAUserMsg_SendStatPopup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendStatPopup_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_AddQuestLogEntry_t>  (line 30, @0x0000000001d33e30, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>, FindOrCreateNetMessage<CDOTAUserMsg_AddQuestLogEntry_t>, RegisterGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AddQuestLogEntry_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<509,CDOTAUserMsg_AddQuestLogEntry,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_AddQuestLogEntry_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AddQuestLogEntry_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AddQuestLogEntry_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AddQuestLogEntry_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 509, &CNetMessagePB<509,CDOTAUserMsg_AddQuestLogEntry,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AddQuestLogEntry_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TutorialFade_t>  (line 30, @0x0000000001d33ed0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>, FindOrCreateNetMessage<CDOTAUserMsg_TutorialFade_t>, RegisterGameEvent<CDOTAUserMsg_TutorialFade_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<508,CDOTAUserMsg_TutorialFade,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TutorialFade_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 508, &CNetMessagePB<508,CDOTAUserMsg_TutorialFade,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ShowSurvey_t>  (line 30, @0x0000000001d33f70, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ShowSurvey_t>, FindOrCreateNetMessage<CDOTAUserMsg_ShowSurvey_t>, RegisterGameEvent<CDOTAUserMsg_ShowSurvey_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowSurvey_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowSurvey_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<507,CDOTAUserMsg_ShowSurvey,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ShowSurvey_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowSurvey_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowSurvey_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowSurvey_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowSurvey_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 507, &CNetMessagePB<507,CDOTAUserMsg_ShowSurvey,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ShowSurvey_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowSurvey_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_GamerulesStateChanged_t>  (line 30, @0x0000000001d34010, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_GamerulesStateChanged_t>, FindOrCreateNetMessage<CDOTAUserMsg_GamerulesStateChanged_t>, RegisterGameEvent<CDOTAUserMsg_GamerulesStateChanged_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GamerulesStateChanged_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GamerulesStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<506,CDOTAUserMsg_GamerulesStateChanged,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_GamerulesStateChanged_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GamerulesStateChanged_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GamerulesStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GamerulesStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GamerulesStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 506, &CNetMessagePB<506,CDOTAUserMsg_GamerulesStateChanged,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GamerulesStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GamerulesStateChanged_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TutorialPingMinimap_t>  (line 30, @0x0000000001d340b0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>, FindOrCreateNetMessage<CDOTAUserMsg_TutorialPingMinimap_t>, RegisterGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialPingMinimap_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<505,CDOTAUserMsg_TutorialPingMinimap,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TutorialPingMinimap_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialPingMinimap_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialPingMinimap_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialPingMinimap_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 505, &CNetMessagePB<505,CDOTAUserMsg_TutorialPingMinimap,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialPingMinimap_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TutorialRequestExp_t>  (line 30, @0x0000000001d34150, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TutorialRequestExp_t>, FindOrCreateNetMessage<CDOTAUserMsg_TutorialRequestExp_t>, RegisterGameEvent<CDOTAUserMsg_TutorialRequestExp_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialRequestExp_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialRequestExp_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<504,CDOTAUserMsg_TutorialRequestExp,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TutorialRequestExp_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialRequestExp_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialRequestExp_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialRequestExp_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialRequestExp_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 504, &CNetMessagePB<504,CDOTAUserMsg_TutorialRequestExp,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialRequestExp_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialRequestExp_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_UpdateSharedContent_t>  (line 30, @0x0000000001d341f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_UpdateSharedContent_t>, FindOrCreateNetMessage<CDOTAUserMsg_UpdateSharedContent_t>, RegisterGameEvent<CDOTAUserMsg_UpdateSharedContent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateSharedContent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateSharedContent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<503,CDOTAUserMsg_UpdateSharedContent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_UpdateSharedContent_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateSharedContent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateSharedContent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateSharedContent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateSharedContent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 503, &CNetMessagePB<503,CDOTAUserMsg_UpdateSharedContent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UpdateSharedContent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UpdateSharedContent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ReceivedXmasGift_t>  (line 30, @0x0000000001d34290, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ReceivedXmasGift_t>, FindOrCreateNetMessage<CDOTAUserMsg_ReceivedXmasGift_t>, RegisterGameEvent<CDOTAUserMsg_ReceivedXmasGift_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ReceivedXmasGift_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ReceivedXmasGift_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<502,CDOTAUserMsg_ReceivedXmasGift,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ReceivedXmasGift_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ReceivedXmasGift_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ReceivedXmasGift_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ReceivedXmasGift_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ReceivedXmasGift_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 502, &CNetMessagePB<502,CDOTAUserMsg_ReceivedXmasGift,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ReceivedXmasGift_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ReceivedXmasGift_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ChatWheel_t>  (line 30, @0x0000000001d34330, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>, FindOrCreateNetMessage<CDOTAUserMsg_ChatWheel_t>, RegisterGameEvent<CDOTAUserMsg_ChatWheel_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<501,CDOTAUserMsg_ChatWheel,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ChatWheel_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 501, &CNetMessagePB<501,CDOTAUserMsg_ChatWheel,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatWheel_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_HalloweenDrops_t>  (line 30, @0x0000000001d343d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_HalloweenDrops_t>, FindOrCreateNetMessage<CDOTAUserMsg_HalloweenDrops_t>, RegisterGameEvent<CDOTAUserMsg_HalloweenDrops_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HalloweenDrops_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HalloweenDrops_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<500,CDOTAUserMsg_HalloweenDrops,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_HalloweenDrops_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HalloweenDrops_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HalloweenDrops_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HalloweenDrops_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HalloweenDrops_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 500, &CNetMessagePB<500,CDOTAUserMsg_HalloweenDrops,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HalloweenDrops_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HalloweenDrops_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ItemAlert_t>  (line 30, @0x0000000001d34470, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ItemAlert_t>, FindOrCreateNetMessage<CDOTAUserMsg_ItemAlert_t>, RegisterGameEvent<CDOTAUserMsg_ItemAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<499,CDOTAUserMsg_ItemAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ItemAlert_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemAlert_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 499, &CNetMessagePB<499,CDOTAUserMsg_ItemAlert,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemAlert_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_WorldLine_t>  (line 30, @0x0000000001d34510, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_WorldLine_t>, FindOrCreateNetMessage<CDOTAUserMsg_WorldLine_t>, RegisterGameEvent<CDOTAUserMsg_WorldLine_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_WorldLine_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<497,CDOTAUserMsg_WorldLine,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_WorldLine_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_WorldLine_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 497, &CNetMessagePB<497,CDOTAUserMsg_WorldLine,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_WorldLine_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SwapVerify_t>  (line 30, @0x0000000001d345b0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SwapVerify_t>, FindOrCreateNetMessage<CDOTAUserMsg_SwapVerify_t>, RegisterGameEvent<CDOTAUserMsg_SwapVerify_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SwapVerify_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SwapVerify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<496,CDOTAUserMsg_SwapVerify,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SwapVerify_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SwapVerify_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SwapVerify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SwapVerify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SwapVerify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 496, &CNetMessagePB<496,CDOTAUserMsg_SwapVerify,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SwapVerify_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SwapVerify_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ItemFound_t>  (line 30, @0x0000000001d34650, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>, FindOrCreateNetMessage<CDOTAUserMsg_ItemFound_t>, RegisterGameEvent<CDOTAUserMsg_ItemFound_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemFound_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<494,CDOTAUserMsg_ItemFound,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ItemFound_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemFound_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemFound_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemFound_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 494, &CNetMessagePB<494,CDOTAUserMsg_ItemFound,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemFound_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_Ping_t>  (line 30, @0x0000000001d346f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>, FindOrCreateNetMessage<CDOTAUserMsg_Ping_t>, RegisterGameEvent<CDOTAUserMsg_Ping_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_Ping_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<493,CDOTAUserMsg_Ping,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_Ping_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_Ping_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_Ping_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_Ping_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 493, &CNetMessagePB<493,CDOTAUserMsg_Ping,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_Ping_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ItemPurchased_t>  (line 30, @0x0000000001d34790, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>, FindOrCreateNetMessage<CDOTAUserMsg_ItemPurchased_t>, RegisterGameEvent<CDOTAUserMsg_ItemPurchased_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemPurchased_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<492,CDOTAUserMsg_ItemPurchased,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ItemPurchased_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemPurchased_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemPurchased_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemPurchased_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 492, &CNetMessagePB<492,CDOTAUserMsg_ItemPurchased,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ItemPurchased_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_HudError_t>  (line 30, @0x0000000001d34830, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>, FindOrCreateNetMessage<CDOTAUserMsg_HudError_t>, RegisterGameEvent<CDOTAUserMsg_HudError_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<491,CDOTAUserMsg_HudError,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_HudError_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 491, &CNetMessagePB<491,CDOTAUserMsg_HudError,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_BotChat_t>  (line 30, @0x0000000001d348d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>, FindOrCreateNetMessage<CDOTAUserMsg_BotChat_t>, RegisterGameEvent<CDOTAUserMsg_BotChat_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BotChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<490,CDOTAUserMsg_BotChat,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_BotChat_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BotChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BotChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BotChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 490, &CNetMessagePB<490,CDOTAUserMsg_BotChat,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_BotChat_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ParticleManager_t>  (line 30, @0x0000000001d34970, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateNetMessage<CDOTAUserMsg_ParticleManager_t>, RegisterGameEvent<CDOTAUserMsg_ParticleManager_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<489,CDOTAUserMsg_ParticleManager,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ParticleManager_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 489, &CNetMessagePB<489,CDOTAUserMsg_ParticleManager,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 152, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_UnitEvent_t>  (line 30, @0x0000000001d34a10, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateNetMessage<CDOTAUserMsg_UnitEvent_t>, RegisterGameEvent<CDOTAUserMsg_UnitEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UnitEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<488,CDOTAUserMsg_UnitEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_UnitEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UnitEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UnitEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UnitEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 488, &CNetMessagePB<488,CDOTAUserMsg_UnitEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 88, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_UnitEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_TutorialTipInfo_t>  (line 30, @0x0000000001d34ab0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>, FindOrCreateNetMessage<CDOTAUserMsg_TutorialTipInfo_t>, RegisterGameEvent<CDOTAUserMsg_TutorialTipInfo_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialTipInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<487,CDOTAUserMsg_TutorialTipInfo,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_TutorialTipInfo_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialTipInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialTipInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialTipInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 487, &CNetMessagePB<487,CDOTAUserMsg_TutorialTipInfo,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_TutorialTipInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerClick_t>  (line 30, @0x0000000001d34b50, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>, FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerClick_t>, RegisterGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerClick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<486,CDOTAUserMsg_SpectatorPlayerClick,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerClick_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerClick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerClick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerClick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 486, &CNetMessagePB<486,CDOTAUserMsg_SpectatorPlayerClick,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SpectatorPlayerClick_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpectatorPlayerClick_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SharedCooldown_t>  (line 30, @0x0000000001d34bf0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>, FindOrCreateNetMessage<CDOTAUserMsg_SharedCooldown_t>, RegisterGameEvent<CDOTAUserMsg_SharedCooldown_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SharedCooldown_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<485,CDOTAUserMsg_SharedCooldown,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SharedCooldown_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SharedCooldown_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SharedCooldown_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SharedCooldown_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 485, &CNetMessagePB<485,CDOTAUserMsg_SharedCooldown,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SharedCooldown_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_SetNextAutobuyItem_t>  (line 30, @0x0000000001d34c90, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>, FindOrCreateNetMessage<CDOTAUserMsg_SetNextAutobuyItem_t>, RegisterGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SetNextAutobuyItem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<484,CDOTAUserMsg_SetNextAutobuyItem,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_SetNextAutobuyItem_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SetNextAutobuyItem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SetNextAutobuyItem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SetNextAutobuyItem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 484, &CNetMessagePB<484,CDOTAUserMsg_SetNextAutobuyItem,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_SetNextAutobuyItem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_OverheadEvent_t>  (line 30, @0x0000000001d34d30, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>, FindOrCreateNetMessage<CDOTAUserMsg_OverheadEvent_t>, RegisterGameEvent<CDOTAUserMsg_OverheadEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_OverheadEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<483,CDOTAUserMsg_OverheadEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_OverheadEvent_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_OverheadEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_OverheadEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_OverheadEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 483, &CNetMessagePB<483,CDOTAUserMsg_OverheadEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_OverheadEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_NevermoreRequiem_t>  (line 30, @0x0000000001d34dd0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>, FindOrCreateNetMessage<CDOTAUserMsg_NevermoreRequiem_t>, RegisterGameEvent<CDOTAUserMsg_NevermoreRequiem_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_NevermoreRequiem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<482,CDOTAUserMsg_NevermoreRequiem,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_NevermoreRequiem_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_NevermoreRequiem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_NevermoreRequiem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_NevermoreRequiem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 482, &CNetMessagePB<482,CDOTAUserMsg_NevermoreRequiem,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_NevermoreRequiem_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_MinimapEvent_t>  (line 30, @0x0000000001d34e70, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>, FindOrCreateNetMessage<CDOTAUserMsg_MinimapEvent_t>, RegisterGameEvent<CDOTAUserMsg_MinimapEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<481,CDOTAUserMsg_MinimapEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_MinimapEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 481, &CNetMessagePB<481,CDOTAUserMsg_MinimapEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_MinimapDebugPoint_t>  (line 30, @0x0000000001d34f10, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_MinimapDebugPoint_t>, FindOrCreateNetMessage<CDOTAUserMsg_MinimapDebugPoint_t>, RegisterGameEvent<CDOTAUserMsg_MinimapDebugPoint_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapDebugPoint_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapDebugPoint_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<480,CDOTAUserMsg_MinimapDebugPoint,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_MinimapDebugPoint_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapDebugPoint_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapDebugPoint_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapDebugPoint_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapDebugPoint_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 480, &CNetMessagePB<480,CDOTAUserMsg_MinimapDebugPoint,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MinimapDebugPoint_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapDebugPoint_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_MiniKillCamInfo_t>  (line 30, @0x0000000001d34fb0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>, FindOrCreateNetMessage<CDOTAUserMsg_MiniKillCamInfo_t>, RegisterGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniKillCamInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<479,CDOTAUserMsg_MiniKillCamInfo,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_MiniKillCamInfo_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniKillCamInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniKillCamInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniKillCamInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 479, &CNetMessagePB<479,CDOTAUserMsg_MiniKillCamInfo,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MiniKillCamInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniKillCamInfo_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_MapLine_t>  (line 30, @0x0000000001d35050, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_MapLine_t>, FindOrCreateNetMessage<CDOTAUserMsg_MapLine_t>, RegisterGameEvent<CDOTAUserMsg_MapLine_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MapLine_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<478,CDOTAUserMsg_MapLine,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_MapLine_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MapLine_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 478, &CNetMessagePB<478,CDOTAUserMsg_MapLine,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MapLine_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_LocationPing_t>  (line 30, @0x0000000001d350f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_LocationPing_t>, FindOrCreateNetMessage<CDOTAUserMsg_LocationPing_t>, RegisterGameEvent<CDOTAUserMsg_LocationPing_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_LocationPing_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_LocationPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<477,CDOTAUserMsg_LocationPing,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_LocationPing_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_LocationPing_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_LocationPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_LocationPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_LocationPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 477, &CNetMessagePB<477,CDOTAUserMsg_LocationPing,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_LocationPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_LocationPing_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_InvalidCommand_t>  (line 30, @0x0000000001d35190, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>, FindOrCreateNetMessage<CDOTAUserMsg_InvalidCommand_t>, RegisterGameEvent<CDOTAUserMsg_InvalidCommand_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_InvalidCommand_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<476,CDOTAUserMsg_InvalidCommand,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_InvalidCommand_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_InvalidCommand_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_InvalidCommand_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_InvalidCommand_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 476, &CNetMessagePB<476,CDOTAUserMsg_InvalidCommand,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_InvalidCommand_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_GlobalLightDirection_t>  (line 30, @0x0000000001d35230, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>, FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightDirection_t>, RegisterGameEvent<CDOTAUserMsg_GlobalLightDirection_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightDirection_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<475,CDOTAUserMsg_GlobalLightDirection,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_GlobalLightDirection_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightDirection_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightDirection_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightDirection_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 475, &CNetMessagePB<475,CDOTAUserMsg_GlobalLightDirection,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightDirection_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_GlobalLightColor_t>  (line 30, @0x0000000001d352d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>, FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightColor_t>, RegisterGameEvent<CDOTAUserMsg_GlobalLightColor_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightColor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<474,CDOTAUserMsg_GlobalLightColor,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_GlobalLightColor_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightColor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightColor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightColor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 474, &CNetMessagePB<474,CDOTAUserMsg_GlobalLightColor,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_GlobalLightColor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>  (line 30, @0x0000000001d35370, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>, FindOrCreateNetMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>, RegisterGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<473,CDOTAUserMsg_DodgeTrackingProjectiles,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 473, &CNetMessagePB<473,CDOTAUserMsg_DodgeTrackingProjectiles,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_DestroyLinearProjectile_t>  (line 30, @0x0000000001d35410, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>, FindOrCreateNetMessage<CDOTAUserMsg_DestroyLinearProjectile_t>, RegisterGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DestroyLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<472,CDOTAUserMsg_DestroyLinearProjectile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_DestroyLinearProjectile_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DestroyLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DestroyLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DestroyLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 472, &CNetMessagePB<472,CDOTAUserMsg_DestroyLinearProjectile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_DestroyLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CreateLinearProjectile_t>  (line 30, @0x0000000001d354b0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>, FindOrCreateNetMessage<CDOTAUserMsg_CreateLinearProjectile_t>, RegisterGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CreateLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<471,CDOTAUserMsg_CreateLinearProjectile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CreateLinearProjectile_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CreateLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CreateLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CreateLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 471, &CNetMessagePB<471,CDOTAUserMsg_CreateLinearProjectile,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 80, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CreateLinearProjectile_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CombatLogShowDeath_t>  (line 30, @0x0000000001d35550, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CombatLogShowDeath_t>, FindOrCreateNetMessage<CDOTAUserMsg_CombatLogShowDeath_t>, RegisterGameEvent<CDOTAUserMsg_CombatLogShowDeath_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogShowDeath_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogShowDeath_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<470,CDOTAUserMsg_CombatLogShowDeath,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CombatLogShowDeath_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogShowDeath_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogShowDeath_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogShowDeath_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogShowDeath_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 470, &CNetMessagePB<470,CDOTAUserMsg_CombatLogShowDeath,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogShowDeath_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogShowDeath_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CombatLogData_t>  (line 30, @0x0000000001d355f0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>, FindOrCreateNetMessage<CDOTAUserMsg_CombatLogData_t>, RegisterGameEvent<CDOTAUserMsg_CombatLogData_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogData_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<468,CMsgDOTACombatLogEntry,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CombatLogData_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogData_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogData_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogData_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 468, &CNetMessagePB<468,CMsgDOTACombatLogEntry,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 232, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatLogData_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatLogData_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_CombatHeroPositions_t>  (line 30, @0x0000000001d35690, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>, FindOrCreateNetMessage<CDOTAUserMsg_CombatHeroPositions_t>, RegisterGameEvent<CDOTAUserMsg_CombatHeroPositions_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatHeroPositions_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<467,CDOTAUserMsg_CombatHeroPositions,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_CombatHeroPositions_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatHeroPositions_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatHeroPositions_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatHeroPositions_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 467, &CNetMessagePB<467,CDOTAUserMsg_CombatHeroPositions,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_CombatHeroPositions_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CombatHeroPositions_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_ChatEvent_t>  (line 30, @0x0000000001d35730, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>, FindOrCreateNetMessage<CDOTAUserMsg_ChatEvent_t>, RegisterGameEvent<CDOTAUserMsg_ChatEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<466,CDOTAUserMsg_ChatEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_ChatEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 466, &CNetMessagePB<466,CDOTAUserMsg_ChatEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_ChatEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CDOTAUserMsg_AIDebugLine_t>  (line 30, @0x0000000001d357d0, libserver.so)  // inlines: FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>, FindOrCreateNetMessage<CDOTAUserMsg_AIDebugLine_t>, RegisterGameEvent<CDOTAUserMsg_AIDebugLine_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AIDebugLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<465,CDOTAUserMsg_AIDebugLine,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CDOTAUserMsg_AIDebugLine_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AIDebugLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AIDebugLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AIDebugLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 465, &CNetMessagePB<465,CDOTAUserMsg_AIDebugLine,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CDOTAUserMsg_AIDebugLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMsg_CustomGameEvent_t>  (line 30, @0x0000000001f77660, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>, FindOrCreateNetMessage<CUserMsg_CustomGameEvent_t>, RegisterGameEvent<CUserMsg_CustomGameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMsg_CustomGameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 148, &CNetMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CMsgSosStartSoundEvent_t>  (line 30, @0x0000000001f77700, libserver.so)  // inlines: FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>, FindOrCreateNetMessage<CMsgSosStartSoundEvent_t>, RegisterGameEvent<CMsgSosStartSoundEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CMsgSosStartSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<208,CMsgSosStartSoundEvent,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CMsgSosStartSoundEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosStartSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CMsgSosStartSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CMsgSosStartSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 208, &CNetMessagePB<208,CMsgSosStartSoundEvent,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosStartSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<ClearDecalsForSkeletonInstanceEvent_t>  (line 30, @0x0000000001f777a0, libserver.so)  // inlines: FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>, FindOrCreateNetMessage<ClearDecalsForSkeletonInstanceEvent_t>, RegisterGameEvent<ClearDecalsForSkeletonInstanceEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ClearDecalsForSkeletonInstanceEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<204,CMsgClearDecalsForSkeletonInstanceEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<ClearDecalsForSkeletonInstanceEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<ClearDecalsForSkeletonInstanceEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<ClearDecalsForSkeletonInstanceEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<ClearDecalsForSkeletonInstanceEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 204, &CNetMessagePB<204,CMsgClearDecalsForSkeletonInstanceEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<ClearDecalsForSkeletonInstanceEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<ClearEntityDecalsEvent_t>  (line 30, @0x0000000001f77840, libserver.so)  // inlines: FindOrCreateGameEvent<ClearEntityDecalsEvent_t>, FindOrCreateNetMessage<ClearEntityDecalsEvent_t>, RegisterGameEvent<ClearEntityDecalsEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ClearEntityDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<203,CMsgClearEntityDecalsEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<ClearEntityDecalsEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<ClearEntityDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<ClearEntityDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<ClearEntityDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 203, &CNetMessagePB<203,CMsgClearEntityDecalsEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<ClearEntityDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CMsgSosSetLibraryStackFields_t>  (line 30, @0x0000000001f778e0, libserver.so)  // inlines: FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>, FindOrCreateNetMessage<CMsgSosSetLibraryStackFields_t>, RegisterGameEvent<CMsgSosSetLibraryStackFields_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CMsgSosSetLibraryStackFields_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<211,CMsgSosSetLibraryStackFields,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CMsgSosSetLibraryStackFields_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosSetLibraryStackFields_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CMsgSosSetLibraryStackFields_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CMsgSosSetLibraryStackFields_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 211, &CNetMessagePB<211,CMsgSosSetLibraryStackFields,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosSetLibraryStackFields_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CMsgSosStopSoundEventHash_t>  (line 30, @0x0000000001f77980, libserver.so)  // inlines: FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>, FindOrCreateNetMessage<CMsgSosStopSoundEventHash_t>, RegisterGameEvent<CMsgSosStopSoundEventHash_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEventHash_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<212,CMsgSosStopSoundEventHash,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CMsgSosStopSoundEventHash_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEventHash_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEventHash_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEventHash_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 212, &CNetMessagePB<212,CMsgSosStopSoundEventHash,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEventHash_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CMsgSosSetSoundEventParams_t>  (line 30, @0x0000000001f77a20, libserver.so)  // inlines: FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>, FindOrCreateNetMessage<CMsgSosSetSoundEventParams_t>, RegisterGameEvent<CMsgSosSetSoundEventParams_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CMsgSosSetSoundEventParams_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<210,CMsgSosSetSoundEventParams,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CMsgSosSetSoundEventParams_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosSetSoundEventParams_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CMsgSosSetSoundEventParams_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CMsgSosSetSoundEventParams_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 210, &CNetMessagePB<210,CMsgSosSetSoundEventParams,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosSetSoundEventParams_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<ClearWorldDecalsEvent_t>  (line 30, @0x0000000001f77ac0, libserver.so)  // inlines: FindOrCreateGameEvent<ClearWorldDecalsEvent_t>, FindOrCreateNetMessage<ClearWorldDecalsEvent_t>, RegisterGameEvent<ClearWorldDecalsEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ClearWorldDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<202,CMsgClearWorldDecalsEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<ClearWorldDecalsEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<ClearWorldDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<ClearWorldDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<ClearWorldDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 202, &CNetMessagePB<202,CMsgClearWorldDecalsEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<ClearWorldDecalsEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CMsgSosStopSoundEvent_t>  (line 30, @0x0000000001f77b60, libserver.so)  // inlines: FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>, FindOrCreateNetMessage<CMsgSosStopSoundEvent_t>, RegisterGameEvent<CMsgSosStopSoundEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<209,CMsgSosStopSoundEvent,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CMsgSosStopSoundEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 209, &CNetMessagePB<209,CMsgSosStopSoundEvent,(SignonGroup_t)4,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CMsgSosStopSoundEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<PlaceDecalEvent_t>  (line 30, @0x0000000001f77c00, libserver.so)  // inlines: FindOrCreateGameEvent<PlaceDecalEvent_t>, FindOrCreateNetMessage<PlaceDecalEvent_t>, RegisterGameEvent<PlaceDecalEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<PlaceDecalEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<PlaceDecalEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<PlaceDecalEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<PlaceDecalEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<PlaceDecalEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 201, &CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 88, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<PlaceDecalEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageHandHapticPulse_t>  (line 30, @0x00000000020f8f30, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>, FindOrCreateNetMessage<CUserMessageHandHapticPulse_t>, RegisterGameEvent<CUserMessageHandHapticPulse_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageHandHapticPulse_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<149,CUserMessageHapticPulse,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageHandHapticPulse_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHandHapticPulse_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageHandHapticPulse_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageHandHapticPulse_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 149, &CNetMessagePB<149,CUserMessageHapticPulse,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHandHapticPulse_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHandHapticPulse_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMsg_HudError_t>  (line 30, @0x00000000020f8fd0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMsg_HudError_t>, FindOrCreateNetMessage<CUserMsg_HudError_t>, RegisterGameEvent<CUserMsg_HudError_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMsg_HudError_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<146,CUserMsg_HudError,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMsg_HudError_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMsg_HudError_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 146, &CNetMessagePB<146,CUserMsg_HudError,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMsg_HudError_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMsg_HudError_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMsg_ParticleManager_t>  (line 30, @0x00000000020f9070, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMsg_ParticleManager_t>, FindOrCreateNetMessage<CUserMsg_ParticleManager_t>, RegisterGameEvent<CUserMsg_ParticleManager_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMsg_ParticleManager_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<145,CUserMsg_ParticleManager,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMsg_ParticleManager_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMsg_ParticleManager_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 145, &CNetMessagePB<145,CUserMsg_ParticleManager,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 136, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMsg_ParticleManager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMsg_ParticleManager_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CEntityMessageFixAngleEvent_t>  (line 30, @0x00000000020f9110, libserver.so)  // inlines: FindOrCreateGameEvent<CEntityMessageFixAngleEvent_t>, FindOrCreateNetMessage<CEntityMessageFixAngleEvent_t>, RegisterGameEvent<CEntityMessageFixAngleEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessageFixAngleEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CEntityMessageFixAngleEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<141,CEntityMessageFixAngle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CEntityMessageFixAngleEvent_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CEntityMessageFixAngleEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageFixAngleEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CEntityMessageFixAngleEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CEntityMessageFixAngleEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 141, &CNetMessagePB<141,CEntityMessageFixAngle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageFixAngleEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessageFixAngleEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CEntityMessageDoSpark_t>  (line 30, @0x00000000020f91b0, libserver.so)  // inlines: FindOrCreateGameEvent<CEntityMessageDoSpark_t>, FindOrCreateNetMessage<CEntityMessageDoSpark_t>, RegisterGameEvent<CEntityMessageDoSpark_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessageDoSpark_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CEntityMessageDoSpark_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<140,CEntityMessageDoSpark,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CEntityMessageDoSpark_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CEntityMessageDoSpark_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageDoSpark_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CEntityMessageDoSpark_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CEntityMessageDoSpark_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 140, &CNetMessagePB<140,CEntityMessageDoSpark,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageDoSpark_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessageDoSpark_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CEntityMessagePropagateForce_t>  (line 30, @0x00000000020f9250, libserver.so)  // inlines: FindOrCreateGameEvent<CEntityMessagePropagateForce_t>, FindOrCreateNetMessage<CEntityMessagePropagateForce_t>, RegisterGameEvent<CEntityMessagePropagateForce_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CEntityMessagePropagateForce_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<139,CEntityMessagePropagateForce,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CEntityMessagePropagateForce_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessagePropagateForce_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CEntityMessagePropagateForce_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CEntityMessagePropagateForce_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 139, &CNetMessagePB<139,CEntityMessagePropagateForce,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessagePropagateForce_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CEntityMessageRemoveAllDecals_t>  (line 30, @0x00000000020f92f0, libserver.so)  // inlines: FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>, FindOrCreateNetMessage<CEntityMessageRemoveAllDecals_t>, RegisterGameEvent<CEntityMessageRemoveAllDecals_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CEntityMessageRemoveAllDecals_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CEntityMessageRemoveAllDecals_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageRemoveAllDecals_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CEntityMessageRemoveAllDecals_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CEntityMessageRemoveAllDecals_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 138, &CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageRemoveAllDecals_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CEntityMessageScreenOverlay_t>  (line 30, @0x00000000020f9390, libserver.so)  // inlines: FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>, FindOrCreateNetMessage<CEntityMessageScreenOverlay_t>, RegisterGameEvent<CEntityMessageScreenOverlay_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CEntityMessageScreenOverlay_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<137,CEntityMessageScreenOverlay,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CEntityMessageScreenOverlay_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageScreenOverlay_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CEntityMessageScreenOverlay_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CEntityMessageScreenOverlay_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 137, &CNetMessagePB<137,CEntityMessageScreenOverlay,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessageScreenOverlay_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CEntityMessagePlayJingle_t>  (line 30, @0x00000000020f9430, libserver.so)  // inlines: FindOrCreateGameEvent<CEntityMessagePlayJingle_t>, FindOrCreateNetMessage<CEntityMessagePlayJingle_t>, RegisterGameEvent<CEntityMessagePlayJingle_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePlayJingle_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CEntityMessagePlayJingle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<136,CEntityMessagePlayJingle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CEntityMessagePlayJingle_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePlayJingle_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessagePlayJingle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CEntityMessagePlayJingle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CEntityMessagePlayJingle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 136, &CNetMessagePB<136,CEntityMessagePlayJingle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CEntityMessagePlayJingle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePlayJingle_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageCameraTransition_t>  (line 30, @0x00000000020f94d0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageCameraTransition_t>, FindOrCreateNetMessage<CUserMessageCameraTransition_t>, RegisterGameEvent<CUserMessageCameraTransition_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCameraTransition_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageCameraTransition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<143,CUserMessageCameraTransition,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageCameraTransition_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageCameraTransition_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCameraTransition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageCameraTransition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageCameraTransition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 143, &CNetMessagePB<143,CUserMessageCameraTransition,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCameraTransition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCameraTransition_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageColoredText_t>  (line 30, @0x00000000020f9570, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageColoredText_t>, FindOrCreateNetMessage<CUserMessageColoredText_t>, RegisterGameEvent<CUserMessageColoredText_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageColoredText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<113,CUserMessageColoredText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageColoredText_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageColoredText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageColoredText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageColoredText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 113, &CNetMessagePB<113,CUserMessageColoredText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageColoredText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageSayTextChannel_t>  (line 30, @0x00000000020f9610, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageSayTextChannel_t>, FindOrCreateNetMessage<CUserMessageSayTextChannel_t>, RegisterGameEvent<CUserMessageSayTextChannel_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayTextChannel_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageSayTextChannel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<119,CUserMessageSayTextChannel,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageSayTextChannel_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayTextChannel_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSayTextChannel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageSayTextChannel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageSayTextChannel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 119, &CNetMessagePB<119,CUserMessageSayTextChannel,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSayTextChannel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayTextChannel_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageTrain_t>  (line 30, @0x00000000020f96b0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageTrain_t>, FindOrCreateNetMessage<CUserMessageTrain_t>, RegisterGameEvent<CUserMessageTrain_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageTrain_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageTrain_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<126,CUserMessageTrain,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageTrain_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageTrain_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageTrain_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageTrain_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageTrain_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 126, &CNetMessagePB<126,CUserMessageTrain,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageTrain_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageTrain_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageCreditsMsg_t>  (line 30, @0x00000000020f9750, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageCreditsMsg_t>, FindOrCreateNetMessage<CUserMessageCreditsMsg_t>, RegisterGameEvent<CUserMessageCreditsMsg_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCreditsMsg_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageCreditsMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<135,CUserMessageCreditsMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageCreditsMsg_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageCreditsMsg_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCreditsMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageCreditsMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageCreditsMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 135, &CNetMessagePB<135,CUserMessageCreditsMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCreditsMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCreditsMsg_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageResetHUD_t>  (line 30, @0x00000000020f97f0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageResetHUD_t>, FindOrCreateNetMessage<CUserMessageResetHUD_t>, RegisterGameEvent<CUserMessageResetHUD_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageResetHUD_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageResetHUD_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<115,CUserMessageResetHUD,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageResetHUD_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageResetHUD_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageResetHUD_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageResetHUD_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageResetHUD_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 115, &CNetMessagePB<115,CUserMessageResetHUD,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageResetHUD_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageResetHUD_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageHudText_t>  (line 30, @0x00000000020f9890, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageHudText_t>, FindOrCreateNetMessage<CUserMessageHudText_t>, RegisterGameEvent<CUserMessageHudText_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageHudText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<111,CUserMessageHudText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageHudText_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHudText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageHudText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageHudText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 111, &CNetMessagePB<111,CUserMessageHudText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHudText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageHudMsg_t>  (line 30, @0x00000000020f9930, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageHudMsg_t>, FindOrCreateNetMessage<CUserMessageHudMsg_t>, RegisterGameEvent<CUserMessageHudMsg_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudMsg_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageHudMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<110,CUserMessageHudMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageHudMsg_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudMsg_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHudMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageHudMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageHudMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 110, &CNetMessagePB<110,CUserMessageHudMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 72, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHudMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudMsg_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageGameTitle_t>  (line 30, @0x00000000020f99d0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageGameTitle_t>, FindOrCreateNetMessage<CUserMessageGameTitle_t>, RegisterGameEvent<CUserMessageGameTitle_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageGameTitle_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageGameTitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<107,CUserMessageGameTitle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageGameTitle_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageGameTitle_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageGameTitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageGameTitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageGameTitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 107, &CNetMessagePB<107,CUserMessageGameTitle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageGameTitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageGameTitle_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageCloseCaptionPlaceholder_t>  (line 30, @0x00000000020f9a70, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageCloseCaptionPlaceholder_t>, FindOrCreateNetMessage<CUserMessageCloseCaptionPlaceholder_t>, RegisterGameEvent<CUserMessageCloseCaptionPlaceholder_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaptionPlaceholder_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionPlaceholder_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<142,CUserMessageCloseCaptionPlaceholder,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageCloseCaptionPlaceholder_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaptionPlaceholder_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionPlaceholder_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionPlaceholder_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionPlaceholder_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 142, &CNetMessagePB<142,CUserMessageCloseCaptionPlaceholder,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionPlaceholder_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaptionPlaceholder_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageCloseCaptionDirect_t>  (line 30, @0x00000000020f9b10, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageCloseCaptionDirect_t>, FindOrCreateNetMessage<CUserMessageCloseCaptionDirect_t>, RegisterGameEvent<CUserMessageCloseCaptionDirect_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaptionDirect_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionDirect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<103,CUserMessageCloseCaptionDirect,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageCloseCaptionDirect_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaptionDirect_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionDirect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionDirect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionDirect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 103, &CNetMessagePB<103,CUserMessageCloseCaptionDirect,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaptionDirect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaptionDirect_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageCloseCaption_t>  (line 30, @0x00000000020f9bb0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageCloseCaption_t>, FindOrCreateNetMessage<CUserMessageCloseCaption_t>, RegisterGameEvent<CUserMessageCloseCaption_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaption_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaption_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<102,CUserMessageCloseCaption,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageCloseCaption_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaption_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaption_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaption_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaption_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 102, &CNetMessagePB<102,CUserMessageCloseCaption,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCloseCaption_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaption_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageAudioParameter_t>  (line 30, @0x00000000020f9c50, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageAudioParameter_t>, FindOrCreateNetMessage<CUserMessageAudioParameter_t>, RegisterGameEvent<CUserMessageAudioParameter_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageAudioParameter_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<144,CUserMessageAudioParameter,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageAudioParameter_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageAudioParameter_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageAudioParameter_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageAudioParameter_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 144, &CNetMessagePB<144,CUserMessageAudioParameter,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageAudioParameter_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageSendAudio_t>  (line 30, @0x00000000020f9cf0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageSendAudio_t>, FindOrCreateNetMessage<CUserMessageSendAudio_t>, RegisterGameEvent<CUserMessageSendAudio_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageSendAudio_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageSendAudio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<130,CUserMessageSendAudio,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageSendAudio_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageSendAudio_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSendAudio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageSendAudio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageSendAudio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 130, &CNetMessagePB<130,CUserMessageSendAudio,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSendAudio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageSendAudio_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageVoiceSubtitle_t>  (line 30, @0x00000000020f9d90, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>, FindOrCreateNetMessage<CUserMessageVoiceSubtitle_t>, RegisterGameEvent<CUserMessageVoiceSubtitle_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceSubtitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<129,CUserMessageVoiceSubtitle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageVoiceSubtitle_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceSubtitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceSubtitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceSubtitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 129, &CNetMessagePB<129,CUserMessageVoiceSubtitle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceSubtitle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageShowMenu_t>  (line 30, @0x00000000020f9e30, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageShowMenu_t>, FindOrCreateNetMessage<CUserMessageShowMenu_t>, RegisterGameEvent<CUserMessageShowMenu_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageShowMenu_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageShowMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<134,CUserMessageShowMenu,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageShowMenu_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageShowMenu_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageShowMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageShowMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageShowMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 134, &CNetMessagePB<134,CUserMessageShowMenu,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageShowMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageShowMenu_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageScreenTilt_t>  (line 30, @0x00000000020f9ed0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageScreenTilt_t>, FindOrCreateNetMessage<CUserMessageScreenTilt_t>, RegisterGameEvent<CUserMessageScreenTilt_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageScreenTilt_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageScreenTilt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<125,CUserMessageScreenTilt,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageScreenTilt_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageScreenTilt_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageScreenTilt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageScreenTilt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageScreenTilt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 125, &CNetMessagePB<125,CUserMessageScreenTilt,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageScreenTilt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageScreenTilt_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageRumble_t>  (line 30, @0x00000000020f9f70, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageRumble_t>, FindOrCreateNetMessage<CUserMessageRumble_t>, RegisterGameEvent<CUserMessageRumble_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageRumble_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageRumble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<116,CUserMessageRumble,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageRumble_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageRumble_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageRumble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageRumble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageRumble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 116, &CNetMessagePB<116,CUserMessageRumble,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageRumble_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageRumble_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageAchievementEvent_t>  (line 30, @0x00000000020fa010, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageAchievementEvent_t>, FindOrCreateNetMessage<CUserMessageAchievementEvent_t>, RegisterGameEvent<CUserMessageAchievementEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageAchievementEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<101,CUserMessageAchievementEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageAchievementEvent_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageAchievementEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageAchievementEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageAchievementEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 101, &CNetMessagePB<101,CUserMessageAchievementEvent,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageAchievementEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageAchievementEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageTextMsg_t>  (line 30, @0x00000000020fa0b0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageTextMsg_t>, FindOrCreateNetMessage<CUserMessageTextMsg_t>, RegisterGameEvent<CUserMessageTextMsg_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageTextMsg_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageTextMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<124,CUserMessageTextMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageTextMsg_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageTextMsg_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageTextMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageTextMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageTextMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 124, &CNetMessagePB<124,CUserMessageTextMsg,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageTextMsg_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageTextMsg_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageAmmoDenied_t>  (line 30, @0x00000000020fa150, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageAmmoDenied_t>, FindOrCreateNetMessage<CUserMessageAmmoDenied_t>, RegisterGameEvent<CUserMessageAmmoDenied_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageAmmoDenied_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageAmmoDenied_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<132,CUserMessageAmmoDenied,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageAmmoDenied_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageAmmoDenied_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageAmmoDenied_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageAmmoDenied_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageAmmoDenied_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 132, &CNetMessagePB<132,CUserMessageAmmoDenied,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageAmmoDenied_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageAmmoDenied_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageItemPickup_t>  (line 30, @0x00000000020fa1f0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageItemPickup_t>, FindOrCreateNetMessage<CUserMessageItemPickup_t>, RegisterGameEvent<CUserMessageItemPickup_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageItemPickup_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageItemPickup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<131,CUserMessageItemPickup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageItemPickup_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageItemPickup_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageItemPickup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageItemPickup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageItemPickup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 131, &CNetMessagePB<131,CUserMessageItemPickup,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageItemPickup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageItemPickup_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageShakeDir_t>  (line 30, @0x00000000020fa290, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageShakeDir_t>, FindOrCreateNetMessage<CUserMessageShakeDir_t>, RegisterGameEvent<CUserMessageShakeDir_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageShakeDir_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageShakeDir_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<121,CUserMessageShakeDir,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageShakeDir_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageShakeDir_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageShakeDir_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageShakeDir_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageShakeDir_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 121, &CNetMessagePB<121,CUserMessageShakeDir,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageShakeDir_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageShakeDir_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageShake_t>  (line 30, @0x00000000020fa330, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageShake_t>, FindOrCreateNetMessage<CUserMessageShake_t>, RegisterGameEvent<CUserMessageShake_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageShake_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageShake_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<120,CUserMessageShake,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageShake_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageShake_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageShake_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageShake_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageShake_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 120, &CNetMessagePB<120,CUserMessageShake,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageShake_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageShake_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageFade_t>  (line 30, @0x00000000020fa3d0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageFade_t>, FindOrCreateNetMessage<CUserMessageFade_t>, RegisterGameEvent<CUserMessageFade_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageFade_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<106,CUserMessageFade,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageFade_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageFade_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 106, &CNetMessagePB<106,CUserMessageFade,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageFade_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageFade_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageSayText_t>  (line 30, @0x00000000020fa470, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageSayText_t>, FindOrCreateNetMessage<CUserMessageSayText_t>, RegisterGameEvent<CUserMessageSayText_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<117,CUserMessageSayText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageSayText_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 117, &CNetMessagePB<117,CUserMessageSayText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageVGUIMenu_t>  (line 30, @0x00000000020fa510, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageVGUIMenu_t>, FindOrCreateNetMessage<CUserMessageVGUIMenu_t>, RegisterGameEvent<CUserMessageVGUIMenu_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageVGUIMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<127,CUserMessageVGUIMenu,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageVGUIMenu_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageVGUIMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageVGUIMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageVGUIMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 127, &CNetMessagePB<127,CUserMessageVGUIMenu,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageVGUIMenu_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageCrosshairAngle_t>  (line 30, @0x00000000020fa5b0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>, FindOrCreateNetMessage<CUserMessageCrosshairAngle_t>, RegisterGameEvent<CUserMessageCrosshairAngle_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageCrosshairAngle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<133,CUserMessageCrosshairAngle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageCrosshairAngle_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCrosshairAngle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageCrosshairAngle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageCrosshairAngle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 133, &CNetMessagePB<133,CUserMessageCrosshairAngle,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCrosshairAngle_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageKeyHintText_t>  (line 30, @0x00000000020fa650, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageKeyHintText_t>, FindOrCreateNetMessage<CUserMessageKeyHintText_t>, RegisterGameEvent<CUserMessageKeyHintText_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageKeyHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<112,CUserMessageKeyHintText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageKeyHintText_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageKeyHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageKeyHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageKeyHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 112, &CNetMessagePB<112,CUserMessageKeyHintText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageKeyHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageVoiceMask_t>  (line 30, @0x00000000020fa6f0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageVoiceMask_t>, FindOrCreateNetMessage<CUserMessageVoiceMask_t>, RegisterGameEvent<CUserMessageVoiceMask_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceMask_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceMask_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<128,CUserMessageVoiceMask,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageVoiceMask_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceMask_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceMask_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceMask_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceMask_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 128, &CNetMessagePB<128,CUserMessageVoiceMask,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageVoiceMask_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceMask_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageRequestState_t>  (line 30, @0x00000000020fa790, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageRequestState_t>, FindOrCreateNetMessage<CUserMessageRequestState_t>, RegisterGameEvent<CUserMessageRequestState_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageRequestState_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageRequestState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<114,CUserMessageRequestState,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageRequestState_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageRequestState_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageRequestState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageRequestState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageRequestState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 114, &CNetMessagePB<114,CUserMessageRequestState,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageRequestState_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageRequestState_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageHintText_t>  (line 30, @0x00000000020fa830, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageHintText_t>, FindOrCreateNetMessage<CUserMessageHintText_t>, RegisterGameEvent<CUserMessageHintText_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<109,CUserMessageHintText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageHintText_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 109, &CNetMessagePB<109,CUserMessageHintText,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageHintText_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageDesiredTimescale_t>  (line 30, @0x00000000020fa8d0, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>, FindOrCreateNetMessage<CUserMessageDesiredTimescale_t>, RegisterGameEvent<CUserMessageDesiredTimescale_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageDesiredTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<105,CUserMessageDesiredTimescale,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageDesiredTimescale_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageDesiredTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageDesiredTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageDesiredTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 105, &CNetMessagePB<105,CUserMessageDesiredTimescale,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageDesiredTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageCurrentTimescale_t>  (line 30, @0x00000000020fa970, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>, FindOrCreateNetMessage<CUserMessageCurrentTimescale_t>, RegisterGameEvent<CUserMessageCurrentTimescale_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageCurrentTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<104,CUserMessageCurrentTimescale,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageCurrentTimescale_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCurrentTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageCurrentTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageCurrentTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 104, &CNetMessagePB<104,CUserMessageCurrentTimescale,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageCurrentTimescale_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<Source1LegacyGameEventList_t>  (line 30, @0x00000000020faab0, libserver.so)  // inlines: FindOrCreateGameEvent<Source1LegacyGameEventList_t>, FindOrCreateNetMessage<Source1LegacyGameEventList_t>, RegisterGameEvent<Source1LegacyGameEventList_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEventList_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<205,CMsgSource1LegacyGameEventList,(SignonGroup_t)10,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<Source1LegacyGameEventList_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEventList_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 205, &CNetMessagePB<205,CMsgSource1LegacyGameEventList,(SignonGroup_t)10,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEventList_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<Source1LegacyGameEvent_t>  (line 30, @0x00000000020fb480, libserver.so)  // inlines: FindOrCreateGameEvent<Source1LegacyGameEvent_t>, FindOrCreateNetMessage<Source1LegacyGameEvent_t>, RegisterGameEvent<Source1LegacyGameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<Source1LegacyGameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 207, &CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<CUserMessageSayText2_t>  (line 30, @0x00000000020fb520, libserver.so)  // inlines: FindOrCreateGameEvent<CUserMessageSayText2_t>, FindOrCreateNetMessage<CUserMessageSayText2_t>, RegisterGameEvent<CUserMessageSayText2_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText2_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<118,CUserMessageSayText2,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<CUserMessageSayText2_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText2_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText2_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText2_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 118, &CNetMessagePB<118,CUserMessageSayText2,(SignonGroup_t)13,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 72, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<CUserMessageSayText2_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEExplosion_GameEvent_t>  (line 30, @0x0000000002f519c0, libserver.so)  // inlines: FindOrCreateGameEvent<TEExplosion_GameEvent_t>, FindOrCreateNetMessage<TEExplosion_GameEvent_t>, RegisterGameEvent<TEExplosion_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEExplosion_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<419,CMsgTEExplosion,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEExplosion_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEExplosion_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEExplosion_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEExplosion_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 419, &CNetMessagePB<419,CMsgTEExplosion,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 72, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEExplosion_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEEnergySplash_GameEvent_t>  (line 30, @0x0000000002f51a60, libserver.so)  // inlines: FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>, FindOrCreateNetMessage<TEEnergySplash_GameEvent_t>, RegisterGameEvent<TEEnergySplash_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEEnergySplash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<412,CMsgTEEnergySplash,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEEnergySplash_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEEnergySplash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEEnergySplash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEEnergySplash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 412, &CNetMessagePB<412,CMsgTEEnergySplash,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEEnergySplash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEArmorRicochet_GameEvent_t>  (line 30, @0x0000000002f51b00, libserver.so)  // inlines: FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>, FindOrCreateNetMessage<TEArmorRicochet_GameEvent_t>, RegisterGameEvent<TEArmorRicochet_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEArmorRicochet_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<401,CMsgTEArmorRicochet,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEArmorRicochet_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEArmorRicochet_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEArmorRicochet_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEArmorRicochet_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 401, &CNetMessagePB<401,CMsgTEArmorRicochet,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEArmorRicochet_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBeamPoints_GameEvent_t>  (line 30, @0x0000000002f51ba0, libserver.so)  // inlines: FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>, FindOrCreateNetMessage<TEBeamPoints_GameEvent_t>, RegisterGameEvent<TEBeamPoints_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBeamPoints_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<404,CMsgTEBeamPoints,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBeamPoints_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamPoints_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBeamPoints_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBeamPoints_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 404, &CNetMessagePB<404,CMsgTEBeamPoints,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamPoints_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBeamRing_GameEvent_t>  (line 30, @0x0000000002f51c40, libserver.so)  // inlines: FindOrCreateGameEvent<TEBeamRing_GameEvent_t>, FindOrCreateNetMessage<TEBeamRing_GameEvent_t>, RegisterGameEvent<TEBeamRing_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBeamRing_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<405,CMsgTEBeamRing,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBeamRing_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamRing_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBeamRing_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBeamRing_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 405, &CNetMessagePB<405,CMsgTEBeamRing,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamRing_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBubbles_GameEvent_t>  (line 30, @0x0000000002f51ce0, libserver.so)  // inlines: FindOrCreateGameEvent<TEBubbles_GameEvent_t>, FindOrCreateNetMessage<TEBubbles_GameEvent_t>, RegisterGameEvent<TEBubbles_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBubbles_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<408,CMsgTEBubbles,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBubbles_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBubbles_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBubbles_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBubbles_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 408, &CNetMessagePB<408,CMsgTEBubbles,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBubbles_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEDust_GameEvent_t>  (line 30, @0x0000000002f51d80, libserver.so)  // inlines: FindOrCreateGameEvent<TEDust_GameEvent_t>, FindOrCreateNetMessage<TEDust_GameEvent_t>, RegisterGameEvent<TEDust_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEDust_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<420,CMsgTEDust,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEDust_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEDust_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEDust_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEDust_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 420, &CNetMessagePB<420,CMsgTEDust,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEDust_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBeamEnts_GameEvent_t>  (line 30, @0x0000000002f51e20, libserver.so)  // inlines: FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>, FindOrCreateNetMessage<TEBeamEnts_GameEvent_t>, RegisterGameEvent<TEBeamEnts_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBeamEnts_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<403,CMsgTEBeamEnts,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBeamEnts_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamEnts_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBeamEnts_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBeamEnts_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 403, &CNetMessagePB<403,CMsgTEBeamEnts,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamEnts_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBSPDecal_GameEvent_t>  (line 30, @0x0000000002f51ec0, libserver.so)  // inlines: FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>, FindOrCreateNetMessage<TEBSPDecal_GameEvent_t>, RegisterGameEvent<TEBSPDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBSPDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<407,CMsgTEBSPDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBSPDecal_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBSPDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBSPDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBSPDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 407, &CNetMessagePB<407,CMsgTEBSPDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBSPDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEDecal_GameEvent_t>  (line 30, @0x0000000002f51f60, libserver.so)  // inlines: FindOrCreateGameEvent<TEDecal_GameEvent_t>, FindOrCreateNetMessage<TEDecal_GameEvent_t>, RegisterGameEvent<TEDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<410,CMsgTEDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEDecal_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 410, &CNetMessagePB<410,CMsgTEDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBeamEntPoint_GameEvent_t>  (line 30, @0x0000000002f52000, libserver.so)  // inlines: FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>, FindOrCreateNetMessage<TEBeamEntPoint_GameEvent_t>, RegisterGameEvent<TEBeamEntPoint_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBeamEntPoint_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<402,CMsgTEBeamEntPoint,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBeamEntPoint_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamEntPoint_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBeamEntPoint_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBeamEntPoint_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 402, &CNetMessagePB<402,CMsgTEBeamEntPoint,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBeamEntPoint_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBloodStream_GameEvent_t>  (line 30, @0x0000000002f520a0, libserver.so)  // inlines: FindOrCreateGameEvent<TEBloodStream_GameEvent_t>, FindOrCreateNetMessage<TEBloodStream_GameEvent_t>, RegisterGameEvent<TEBloodStream_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBloodStream_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<418,CMsgTEBloodStream,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBloodStream_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBloodStream_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBloodStream_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBloodStream_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 418, &CNetMessagePB<418,CMsgTEBloodStream,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBloodStream_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBreakModel_GameEvent_t>  (line 30, @0x0000000002f52140, libserver.so)  // inlines: FindOrCreateGameEvent<TEBreakModel_GameEvent_t>, FindOrCreateNetMessage<TEBreakModel_GameEvent_t>, RegisterGameEvent<TEBreakModel_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBreakModel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<406,CMsgTEBreakModel,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBreakModel_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBreakModel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBreakModel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBreakModel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 406, &CNetMessagePB<406,CMsgTEBreakModel,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 80, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBreakModel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEEffectDispatch_GameEvent_t>  (line 30, @0x0000000002f521e0, libserver.so)  // inlines: FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>, FindOrCreateNetMessage<TEEffectDispatch_GameEvent_t>, RegisterGameEvent<TEEffectDispatch_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEEffectDispatch_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<400,CMsgTEEffectDispatch,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEEffectDispatch_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEEffectDispatch_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEEffectDispatch_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEEffectDispatch_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 400, &CNetMessagePB<400,CMsgTEEffectDispatch,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEEffectDispatch_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEFizz_GameEvent_t>  (line 30, @0x0000000002f52280, libserver.so)  // inlines: FindOrCreateGameEvent<TEFizz_GameEvent_t>, FindOrCreateNetMessage<TEFizz_GameEvent_t>, RegisterGameEvent<TEFizz_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEFizz_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<413,CMsgTEFizz,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEFizz_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEFizz_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEFizz_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEFizz_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 413, &CNetMessagePB<413,CMsgTEFizz,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEFizz_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEBubbleTrail_GameEvent_t>  (line 30, @0x0000000002f52320, libserver.so)  // inlines: FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>, FindOrCreateNetMessage<TEBubbleTrail_GameEvent_t>, RegisterGameEvent<TEBubbleTrail_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem, INetworkMessages::FindOrCreateNetMessage<TEBubbleTrail_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<409,CMsgTEBubbleTrail,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEBubbleTrail_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEBubbleTrail_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEBubbleTrail_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEBubbleTrail_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 409, &CNetMessagePB<409,CMsgTEBubbleTrail,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEBubbleTrail_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEProjectedDecal_GameEvent_t>  (line 30, @0x0000000002f5d860, libserver.so)  // inlines: FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>, FindOrCreateNetMessage<TEProjectedDecal_GameEvent_t>, RegisterGameEvent<TEProjectedDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEProjectedDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<425,CMsgTEProjectedDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEProjectedDecal_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEProjectedDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEProjectedDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEProjectedDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 425, &CNetMessagePB<425,CMsgTEProjectedDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEProjectedDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEImpact_GameEvent_t>  (line 30, @0x0000000002f5d900, libserver.so)  // inlines: FindOrCreateGameEvent<TEImpact_GameEvent_t>, FindOrCreateNetMessage<TEImpact_GameEvent_t>, RegisterGameEvent<TEImpact_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEImpact_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<416,CMsgTEImpact,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEImpact_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEImpact_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEImpact_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEImpact_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 416, &CNetMessagePB<416,CMsgTEImpact,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEImpact_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEShatterSurface_GameEvent_t>  (line 30, @0x0000000002f5d9a0, libserver.so)  // inlines: FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>, FindOrCreateNetMessage<TEShatterSurface_GameEvent_t>, RegisterGameEvent<TEShatterSurface_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEShatterSurface_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<414,CMsgTEShatterSurface,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEShatterSurface_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEShatterSurface_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEShatterSurface_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEShatterSurface_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 414, &CNetMessagePB<414,CMsgTEShatterSurface,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 80, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEShatterSurface_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TESparks_GameEvent_t>  (line 30, @0x0000000002f5da40, libserver.so)  // inlines: FindOrCreateGameEvent<TESparks_GameEvent_t>, FindOrCreateNetMessage<TESparks_GameEvent_t>, RegisterGameEvent<TESparks_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TESparks_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<422,CMsgTESparks,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TESparks_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TESparks_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TESparks_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TESparks_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 422, &CNetMessagePB<422,CMsgTESparks,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TESparks_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEWorldDecal_GameEvent_t>  (line 30, @0x0000000002f5dae0, libserver.so)  // inlines: FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>, FindOrCreateNetMessage<TEWorldDecal_GameEvent_t>, RegisterGameEvent<TEWorldDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEWorldDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<411,CMsgTEWorldDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEWorldDecal_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEWorldDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEWorldDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEWorldDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 411, &CNetMessagePB<411,CMsgTEWorldDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEWorldDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TESmoke_GameEvent_t>  (line 30, @0x0000000002f5db80, libserver.so)  // inlines: FindOrCreateGameEvent<TESmoke_GameEvent_t>, FindOrCreateNetMessage<TESmoke_GameEvent_t>, RegisterGameEvent<TESmoke_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TESmoke_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<426,CMsgTESmoke,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TESmoke_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TESmoke_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TESmoke_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TESmoke_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 426, &CNetMessagePB<426,CMsgTESmoke,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TESmoke_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEPhysicsProp_GameEvent_t>  (line 30, @0x0000000002f5dc20, libserver.so)  // inlines: FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>, FindOrCreateNetMessage<TEPhysicsProp_GameEvent_t>, RegisterGameEvent<TEPhysicsProp_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEPhysicsProp_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<423,CMsgTEPhysicsProp,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEPhysicsProp_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEPhysicsProp_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEPhysicsProp_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEPhysicsProp_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 423, &CNetMessagePB<423,CMsgTEPhysicsProp,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 80, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEPhysicsProp_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TELargeFunnel_GameEvent_t>  (line 30, @0x0000000002f5dcc0, libserver.so)  // inlines: FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>, FindOrCreateNetMessage<TELargeFunnel_GameEvent_t>, RegisterGameEvent<TELargeFunnel_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TELargeFunnel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<421,CMsgTELargeFunnel,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TELargeFunnel_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TELargeFunnel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TELargeFunnel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TELargeFunnel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 421, &CNetMessagePB<421,CMsgTELargeFunnel,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TELargeFunnel_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEMuzzleFlash_GameEvent_t>  (line 30, @0x0000000002f5dd60, libserver.so)  // inlines: FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>, FindOrCreateNetMessage<TEMuzzleFlash_GameEvent_t>, RegisterGameEvent<TEMuzzleFlash_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEMuzzleFlash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<417,CMsgTEMuzzleFlash,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEMuzzleFlash_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEMuzzleFlash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEMuzzleFlash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEMuzzleFlash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 417, &CNetMessagePB<417,CMsgTEMuzzleFlash,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEMuzzleFlash_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEGlowSprite_GameEvent_t>  (line 30, @0x0000000002f5de00, libserver.so)  // inlines: FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>, FindOrCreateNetMessage<TEGlowSprite_GameEvent_t>, RegisterGameEvent<TEGlowSprite_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEGlowSprite_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<415,CMsgTEGlowSprite,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEGlowSprite_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEGlowSprite_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEGlowSprite_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEGlowSprite_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 415, &CNetMessagePB<415,CMsgTEGlowSprite,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEGlowSprite_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// RegisterGameEventMessage<TEPlayerDecal_GameEvent_t>  (line 30, @0x0000000002f5dea0, libserver.so)  // inlines: FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>, FindOrCreateNetMessage<TEPlayerDecal_GameEvent_t>, RegisterGameEvent<TEPlayerDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TEPlayerDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<424,CMsgTEPlayerDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterGameEventMessage<TEPlayerDecal_GameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>(bool)::s_hEvent == 0 )
  {
    v2 = INetworkMessages::FindOrCreateNetMessage<TEPlayerDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<TEPlayerDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<TEPlayerDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 424, &CNetMessagePB<424,CMsgTEPlayerDecal,(SignonGroup_t)5,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v2 = INetworkMessages::FindOrCreateNetMessage<TEPlayerDecal_GameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>(bool)::s_hEvent = v2;
  }
  (*(*v0 + 88LL))(v0);
  return 1;
}


// UnregisterGameEventMessage<CDOTAUserMsg_AIDebugLine_t>  (line 36, @0x0000000001d2b9a0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_AIDebugLine_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ChatEvent_t>  (line 36, @0x0000000001d2b9b0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ChatEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CombatHeroPositions_t>  (line 36, @0x0000000001d2b9c0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CombatHeroPositions_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CombatLogData_t>  (line 36, @0x0000000001d2b9d0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CombatLogData_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CombatLogShowDeath_t>  (line 36, @0x0000000001d2b9e0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CombatLogShowDeath_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CreateLinearProjectile_t>  (line 36, @0x0000000001d2b9f0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CreateLinearProjectile_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_DestroyLinearProjectile_t>  (line 36, @0x0000000001d2ba00, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_DestroyLinearProjectile_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>  (line 36, @0x0000000001d2ba10, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_GlobalLightColor_t>  (line 36, @0x0000000001d2ba20, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_GlobalLightColor_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_GlobalLightDirection_t>  (line 36, @0x0000000001d2ba30, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_GlobalLightDirection_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_InvalidCommand_t>  (line 36, @0x0000000001d2ba40, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_InvalidCommand_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_LocationPing_t>  (line 36, @0x0000000001d2ba50, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_LocationPing_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_MapLine_t>  (line 36, @0x0000000001d2ba60, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_MapLine_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_MiniKillCamInfo_t>  (line 36, @0x0000000001d2ba70, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_MiniKillCamInfo_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_MinimapDebugPoint_t>  (line 36, @0x0000000001d2ba80, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_MinimapDebugPoint_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_MinimapEvent_t>  (line 36, @0x0000000001d2ba90, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_MinimapEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_NevermoreRequiem_t>  (line 36, @0x0000000001d2baa0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_NevermoreRequiem_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_OverheadEvent_t>  (line 36, @0x0000000001d2bab0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_OverheadEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SetNextAutobuyItem_t>  (line 36, @0x0000000001d2bac0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SetNextAutobuyItem_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SharedCooldown_t>  (line 36, @0x0000000001d2bad0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SharedCooldown_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerClick_t>  (line 36, @0x0000000001d2bae0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerClick_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TutorialTipInfo_t>  (line 36, @0x0000000001d2baf0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TutorialTipInfo_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_UnitEvent_t>  (line 36, @0x0000000001d2bb00, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_UnitEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ParticleManager_t>  (line 36, @0x0000000001d2bb10, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ParticleManager_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_BotChat_t>  (line 36, @0x0000000001d2bb20, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_BotChat_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_HudError_t>  (line 36, @0x0000000001d2bb30, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_HudError_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ItemPurchased_t>  (line 36, @0x0000000001d2bb40, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ItemPurchased_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_Ping_t>  (line 36, @0x0000000001d2bb50, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_Ping_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ItemFound_t>  (line 36, @0x0000000001d2bb60, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ItemFound_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SwapVerify_t>  (line 36, @0x0000000001d2bb70, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SwapVerify_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_WorldLine_t>  (line 36, @0x0000000001d2bb80, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_WorldLine_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ItemAlert_t>  (line 36, @0x0000000001d2bb90, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ItemAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_HalloweenDrops_t>  (line 36, @0x0000000001d2bba0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_HalloweenDrops_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ChatWheel_t>  (line 36, @0x0000000001d2bbb0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ChatWheel_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ReceivedXmasGift_t>  (line 36, @0x0000000001d2bbc0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ReceivedXmasGift_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_UpdateSharedContent_t>  (line 36, @0x0000000001d2bbd0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_UpdateSharedContent_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TutorialRequestExp_t>  (line 36, @0x0000000001d2bbe0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TutorialRequestExp_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TutorialPingMinimap_t>  (line 36, @0x0000000001d2bbf0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TutorialPingMinimap_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_GamerulesStateChanged_t>  (line 36, @0x0000000001d2bc00, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_GamerulesStateChanged_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ShowSurvey_t>  (line 36, @0x0000000001d2bc10, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ShowSurvey_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TutorialFade_t>  (line 36, @0x0000000001d2bc20, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TutorialFade_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_AddQuestLogEntry_t>  (line 36, @0x0000000001d2bc30, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_AddQuestLogEntry_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SendStatPopup_t>  (line 36, @0x0000000001d2bc40, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SendStatPopup_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TutorialFinish_t>  (line 36, @0x0000000001d2bc50, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TutorialFinish_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SendRoshanPopup_t>  (line 36, @0x0000000001d2bc60, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SendRoshanPopup_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SendGenericToolTip_t>  (line 36, @0x0000000001d2bc70, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SendGenericToolTip_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SendFinalGold_t>  (line 36, @0x0000000001d2bc80, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SendFinalGold_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CustomMsg_t>  (line 36, @0x0000000001d2bc90, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CustomMsg_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CoachHUDPing_t>  (line 36, @0x0000000001d2bca0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CoachHUDPing_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ClientLoadGridNav_t>  (line 36, @0x0000000001d2bcb0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ClientLoadGridNav_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TEProjectile_t>  (line 36, @0x0000000001d2bcc0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TEProjectile_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TEProjectileLoc_t>  (line 36, @0x0000000001d2bcd0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TEProjectileLoc_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TEDotaBloodImpact_t>  (line 36, @0x0000000001d2bce0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TEDotaBloodImpact_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_AbilityPing_t>  (line 36, @0x0000000001d2bcf0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_AbilityPing_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TEUnitAnimation_t>  (line 36, @0x0000000001d2bd00, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TEUnitAnimation_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>  (line 36, @0x0000000001d2bd10, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ShowGenericPopup_t>  (line 36, @0x0000000001d2bd20, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ShowGenericPopup_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_VoteStart_t>  (line 36, @0x0000000001d2bd30, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_VoteStart_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_VoteUpdate_t>  (line 36, @0x0000000001d2bd40, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_VoteUpdate_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_VoteEnd_t>  (line 36, @0x0000000001d2bd50, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_VoteEnd_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_BoosterState_t>  (line 36, @0x0000000001d2bd60, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_BoosterState_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_WillPurchaseAlert_t>  (line 36, @0x0000000001d2bd70, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_WillPurchaseAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_TutorialMinimapPosition_t>  (line 36, @0x0000000001d2bd80, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_TutorialMinimapPosition_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_PlayerMMR_t>  (line 36, @0x0000000001d2bd90, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_PlayerMMR_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_AbilitySteal_t>  (line 36, @0x0000000001d2bda0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_AbilitySteal_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CourierKilledAlert_t>  (line 36, @0x0000000001d2bdb0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CourierKilledAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_EnemyItemAlert_t>  (line 36, @0x0000000001d2bdc0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_EnemyItemAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_StatsMatchDetails_t>  (line 36, @0x0000000001d2bdd0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_StatsMatchDetails_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_MiniTaunt_t>  (line 36, @0x0000000001d2bde0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_MiniTaunt_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_BuyBackStateAlert_t>  (line 36, @0x0000000001d2bdf0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_BuyBackStateAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SpeechBubble_t>  (line 36, @0x0000000001d2be00, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SpeechBubble_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CustomHeaderMessage_t>  (line 36, @0x0000000001d2be10, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CustomHeaderMessage_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_QuickBuyAlert_t>  (line 36, @0x0000000001d2be20, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_QuickBuyAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_StatsHeroDetails_t>  (line 36, @0x0000000001d2be30, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_StatsHeroDetails_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_PredictionResult_t>  (line 36, @0x0000000001d2be40, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_PredictionResult_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ModifierAlert_t>  (line 36, @0x0000000001d2be50, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ModifierAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_HPManaAlert_t>  (line 36, @0x0000000001d2be60, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_HPManaAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_GlyphAlert_t>  (line 36, @0x0000000001d2be70, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_GlyphAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_BeastChat_t>  (line 36, @0x0000000001d2be80, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_BeastChat_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>  (line 36, @0x0000000001d2be90, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SpectatorPlayerUnitOrders_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Create_t>  (line 36, @0x0000000001d2bea0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Create_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Modify_t>  (line 36, @0x0000000001d2beb0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Modify_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>  (line 36, @0x0000000001d2bec0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CompendiumState_t>  (line 36, @0x0000000001d2bed0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CompendiumState_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ProjectionAbility_t>  (line 36, @0x0000000001d2bee0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ProjectionAbility_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_ProjectionEvent_t>  (line 36, @0x0000000001d2bef0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_ProjectionEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_CombatLogDataHLTV_t>  (line 36, @0x0000000001d2bf00, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_CombatLogDataHLTV_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_XPAlert_t>  (line 36, @0x0000000001d2bf10, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_XPAlert_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_UpdateQuestProgress_t>  (line 36, @0x0000000001d2bf20, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_UpdateQuestProgress_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_MatchMetadata_t>  (line 36, @0x0000000001d2bf30, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_MatchMetadata_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_MatchDetails_t>  (line 36, @0x0000000001d2bf40, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_MatchDetails_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_QuestStatus_t>  (line 36, @0x0000000001d2bf50, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_QuestStatus_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SuggestHeroPick_t>  (line 36, @0x0000000001d2bf60, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SuggestHeroPick_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SuggestHeroRole_t>  (line 36, @0x0000000001d2bf70, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SuggestHeroRole_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_KillcamDamageTaken_t>  (line 36, @0x0000000001d2bf80, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_KillcamDamageTaken_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_SelectPenaltyGold_t>  (line 36, @0x0000000001d2bf90, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_SelectPenaltyGold_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_RollDiceResult_t>  (line 36, @0x0000000001d2bfa0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_RollDiceResult_t>()
{
  ;
}


// UnregisterGameEventMessage<CDOTAUserMsg_FlipCoinResult_t>  (line 36, @0x0000000001d2bfb0, libserver.so)
void __cdecl UnregisterGameEventMessage<CDOTAUserMsg_FlipCoinResult_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMsg_CustomGameEvent_t>  (line 36, @0x0000000001f723f0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMsg_CustomGameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<PlaceDecalEvent_t>  (line 36, @0x0000000001f72410, libserver.so)
void __cdecl UnregisterGameEventMessage<PlaceDecalEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<ClearWorldDecalsEvent_t>  (line 36, @0x0000000001f72420, libserver.so)
void __cdecl UnregisterGameEventMessage<ClearWorldDecalsEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<ClearEntityDecalsEvent_t>  (line 36, @0x0000000001f72430, libserver.so)
void __cdecl UnregisterGameEventMessage<ClearEntityDecalsEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<ClearDecalsForSkeletonInstanceEvent_t>  (line 36, @0x0000000001f72440, libserver.so)
void __cdecl UnregisterGameEventMessage<ClearDecalsForSkeletonInstanceEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CMsgSosStartSoundEvent_t>  (line 36, @0x0000000001f72480, libserver.so)
void __cdecl UnregisterGameEventMessage<CMsgSosStartSoundEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CMsgSosStopSoundEvent_t>  (line 36, @0x0000000001f72490, libserver.so)
void __cdecl UnregisterGameEventMessage<CMsgSosStopSoundEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CMsgSosStopSoundEventHash_t>  (line 36, @0x0000000001f724a0, libserver.so)
void __cdecl UnregisterGameEventMessage<CMsgSosStopSoundEventHash_t>()
{
  ;
}


// UnregisterGameEventMessage<CMsgSosSetSoundEventParams_t>  (line 36, @0x0000000001f724b0, libserver.so)
void __cdecl UnregisterGameEventMessage<CMsgSosSetSoundEventParams_t>()
{
  ;
}


// UnregisterGameEventMessage<CMsgSosSetLibraryStackFields_t>  (line 36, @0x0000000001f724c0, libserver.so)
void __cdecl UnregisterGameEventMessage<CMsgSosSetLibraryStackFields_t>()
{
  ;
}


// UnregisterGameEventMessage<Source1LegacyGameEventList_t>  (line 36, @0x00000000020f1c10, libserver.so)
void __cdecl UnregisterGameEventMessage<Source1LegacyGameEventList_t>()
{
  ;
}


// UnregisterGameEventMessage<Source1LegacyGameEvent_t>  (line 36, @0x00000000020f1c20, libserver.so)
void __cdecl UnregisterGameEventMessage<Source1LegacyGameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageCurrentTimescale_t>  (line 36, @0x00000000020f1db0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageCurrentTimescale_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageDesiredTimescale_t>  (line 36, @0x00000000020f1dc0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageDesiredTimescale_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageHintText_t>  (line 36, @0x00000000020f1dd0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageHintText_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageRequestState_t>  (line 36, @0x00000000020f1de0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageRequestState_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageVoiceMask_t>  (line 36, @0x00000000020f1df0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageVoiceMask_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageKeyHintText_t>  (line 36, @0x00000000020f1e00, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageKeyHintText_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageCrosshairAngle_t>  (line 36, @0x00000000020f1e10, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageCrosshairAngle_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageVGUIMenu_t>  (line 36, @0x00000000020f1e20, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageVGUIMenu_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageSayText_t>  (line 36, @0x00000000020f1e30, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageSayText_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageFade_t>  (line 36, @0x00000000020f1e40, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageFade_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageShake_t>  (line 36, @0x00000000020f1e50, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageShake_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageShakeDir_t>  (line 36, @0x00000000020f1e60, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageShakeDir_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageItemPickup_t>  (line 36, @0x00000000020f1e70, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageItemPickup_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageAmmoDenied_t>  (line 36, @0x00000000020f1e80, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageAmmoDenied_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageSayText2_t>  (line 36, @0x00000000020f1e90, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageSayText2_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageTextMsg_t>  (line 36, @0x00000000020f1ea0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageTextMsg_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageAchievementEvent_t>  (line 36, @0x00000000020f1eb0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageAchievementEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageRumble_t>  (line 36, @0x00000000020f1ec0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageRumble_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageScreenTilt_t>  (line 36, @0x00000000020f1ed0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageScreenTilt_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageShowMenu_t>  (line 36, @0x00000000020f1ee0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageShowMenu_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageVoiceSubtitle_t>  (line 36, @0x00000000020f1ef0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageVoiceSubtitle_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageSendAudio_t>  (line 36, @0x00000000020f1f00, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageSendAudio_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageAudioParameter_t>  (line 36, @0x00000000020f1f10, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageAudioParameter_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageCloseCaption_t>  (line 36, @0x00000000020f1f20, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageCloseCaption_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageCloseCaptionDirect_t>  (line 36, @0x00000000020f1f30, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageCloseCaptionDirect_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageCloseCaptionPlaceholder_t>  (line 36, @0x00000000020f1f40, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageCloseCaptionPlaceholder_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageGameTitle_t>  (line 36, @0x00000000020f1f50, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageGameTitle_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageHudMsg_t>  (line 36, @0x00000000020f1f60, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageHudMsg_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageHudText_t>  (line 36, @0x00000000020f1f70, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageHudText_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageResetHUD_t>  (line 36, @0x00000000020f1f80, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageResetHUD_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageCreditsMsg_t>  (line 36, @0x00000000020f1f90, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageCreditsMsg_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageTrain_t>  (line 36, @0x00000000020f1fa0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageTrain_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageSayTextChannel_t>  (line 36, @0x00000000020f1fb0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageSayTextChannel_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageColoredText_t>  (line 36, @0x00000000020f1fc0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageColoredText_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageCameraTransition_t>  (line 36, @0x00000000020f1fd0, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageCameraTransition_t>()
{
  ;
}


// UnregisterGameEventMessage<CEntityMessagePlayJingle_t>  (line 36, @0x00000000020f1fe0, libserver.so)
void __cdecl UnregisterGameEventMessage<CEntityMessagePlayJingle_t>()
{
  ;
}


// UnregisterGameEventMessage<CEntityMessageScreenOverlay_t>  (line 36, @0x00000000020f1ff0, libserver.so)
void __cdecl UnregisterGameEventMessage<CEntityMessageScreenOverlay_t>()
{
  ;
}


// UnregisterGameEventMessage<CEntityMessageRemoveAllDecals_t>  (line 36, @0x00000000020f2000, libserver.so)
void __cdecl UnregisterGameEventMessage<CEntityMessageRemoveAllDecals_t>()
{
  ;
}


// UnregisterGameEventMessage<CEntityMessagePropagateForce_t>  (line 36, @0x00000000020f2010, libserver.so)
void __cdecl UnregisterGameEventMessage<CEntityMessagePropagateForce_t>()
{
  ;
}


// UnregisterGameEventMessage<CEntityMessageDoSpark_t>  (line 36, @0x00000000020f2020, libserver.so)
void __cdecl UnregisterGameEventMessage<CEntityMessageDoSpark_t>()
{
  ;
}


// UnregisterGameEventMessage<CEntityMessageFixAngleEvent_t>  (line 36, @0x00000000020f2030, libserver.so)
void __cdecl UnregisterGameEventMessage<CEntityMessageFixAngleEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMsg_ParticleManager_t>  (line 36, @0x00000000020f2040, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMsg_ParticleManager_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMsg_HudError_t>  (line 36, @0x00000000020f2050, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMsg_HudError_t>()
{
  ;
}


// UnregisterGameEventMessage<CUserMessageHandHapticPulse_t>  (line 36, @0x00000000020f2060, libserver.so)
void __cdecl UnregisterGameEventMessage<CUserMessageHandHapticPulse_t>()
{
  ;
}


// UnregisterGameEventMessage<TEArmorRicochet_GameEvent_t>  (line 36, @0x0000000002f4f930, libserver.so)
void __cdecl UnregisterGameEventMessage<TEArmorRicochet_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBeamEntPoint_GameEvent_t>  (line 36, @0x0000000002f4f940, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBeamEntPoint_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBeamEnts_GameEvent_t>  (line 36, @0x0000000002f4f950, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBeamEnts_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBeamPoints_GameEvent_t>  (line 36, @0x0000000002f4f960, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBeamPoints_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBeamRing_GameEvent_t>  (line 36, @0x0000000002f4f970, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBeamRing_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBloodStream_GameEvent_t>  (line 36, @0x0000000002f4f980, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBloodStream_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBreakModel_GameEvent_t>  (line 36, @0x0000000002f4f990, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBreakModel_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBSPDecal_GameEvent_t>  (line 36, @0x0000000002f4f9a0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBSPDecal_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBubbles_GameEvent_t>  (line 36, @0x0000000002f4f9b0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBubbles_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEBubbleTrail_GameEvent_t>  (line 36, @0x0000000002f4f9c0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEBubbleTrail_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEDecal_GameEvent_t>  (line 36, @0x0000000002f4f9d0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEDecal_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEEffectDispatch_GameEvent_t>  (line 36, @0x0000000002f4f9e0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEEffectDispatch_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEEnergySplash_GameEvent_t>  (line 36, @0x0000000002f4f9f0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEEnergySplash_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEExplosion_GameEvent_t>  (line 36, @0x0000000002f4fa00, libserver.so)
void __cdecl UnregisterGameEventMessage<TEExplosion_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEFizz_GameEvent_t>  (line 36, @0x0000000002f4fa10, libserver.so)
void __cdecl UnregisterGameEventMessage<TEFizz_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEDust_GameEvent_t>  (line 36, @0x0000000002f4fa20, libserver.so)
void __cdecl UnregisterGameEventMessage<TEDust_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEShatterSurface_GameEvent_t>  (line 36, @0x0000000002f5c550, libserver.so)
void __cdecl UnregisterGameEventMessage<TEShatterSurface_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEGlowSprite_GameEvent_t>  (line 36, @0x0000000002f5c560, libserver.so)
void __cdecl UnregisterGameEventMessage<TEGlowSprite_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEImpact_GameEvent_t>  (line 36, @0x0000000002f5c570, libserver.so)
void __cdecl UnregisterGameEventMessage<TEImpact_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TELargeFunnel_GameEvent_t>  (line 36, @0x0000000002f5c580, libserver.so)
void __cdecl UnregisterGameEventMessage<TELargeFunnel_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEMuzzleFlash_GameEvent_t>  (line 36, @0x0000000002f5c590, libserver.so)
void __cdecl UnregisterGameEventMessage<TEMuzzleFlash_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEPhysicsProp_GameEvent_t>  (line 36, @0x0000000002f5c5a0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEPhysicsProp_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEPlayerDecal_GameEvent_t>  (line 36, @0x0000000002f5c5b0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEPlayerDecal_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEProjectedDecal_GameEvent_t>  (line 36, @0x0000000002f5c5c0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEProjectedDecal_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TESmoke_GameEvent_t>  (line 36, @0x0000000002f5c5d0, libserver.so)
void __cdecl UnregisterGameEventMessage<TESmoke_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TESparks_GameEvent_t>  (line 36, @0x0000000002f5c5e0, libserver.so)
void __cdecl UnregisterGameEventMessage<TESparks_GameEvent_t>()
{
  ;
}


// UnregisterGameEventMessage<TEWorldDecal_GameEvent_t>  (line 36, @0x0000000002f5c5f0, libserver.so)
void __cdecl UnregisterGameEventMessage<TEWorldDecal_GameEvent_t>()
{
  ;
}


// RegisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>  (line 40, @0x0000000001b51280, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CClientMsg_DevPaletteVisibilityChangedEvent_t>, FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>, FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>, RegisterGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>, RegisterNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<283,CClientMsg_DevPaletteVisibilityChangedEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 283, &CNetMessagePB<283,CClientMsg_DevPaletteVisibilityChangedEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 283, &CNetMessagePB<283,CClientMsg_DevPaletteVisibilityChangedEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CClientMsg_ClientUIEvent_t>  (line 40, @0x0000000001b51510, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CClientMsg_ClientUIEvent_t>, FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>, FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>, RegisterGameEvent<CClientMsg_ClientUIEvent_t>, RegisterNetMessage<CClientMsg_ClientUIEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<282,CClientMsg_ClientUIEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CClientMsg_ClientUIEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 282, &CNetMessagePB<282,CClientMsg_ClientUIEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 282, &CNetMessagePB<282,CClientMsg_ClientUIEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_ClientUIEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_MapLine_t>  (line 40, @0x0000000001c9b970, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_MapLine_t>, FindOrCreateGameEvent<CDOTAClientMsg_MapLine_t>, FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>, RegisterGameEvent<CDOTAClientMsg_MapLine_t>, RegisterNetMessage<CDOTAClientMsg_MapLine_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MapLine_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<301,CDOTAClientMsg_MapLine,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_MapLine_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MapLine_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 301, &CNetMessagePB<301,CDOTAClientMsg_MapLine,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MapLine_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 301, &CNetMessagePB<301,CDOTAClientMsg_MapLine,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_PlayerShowCase_t>  (line 40, @0x0000000001c9ba60, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_PlayerShowCase_t>, FindOrCreateGameEvent<CDOTAClientMsg_PlayerShowCase_t>, FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>, RegisterGameEvent<CDOTAClientMsg_PlayerShowCase_t>, RegisterNetMessage<CDOTAClientMsg_PlayerShowCase_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_PlayerShowCase_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<325,CDOTAClientMsg_PlayerShowCase,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_PlayerShowCase_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_PlayerShowCase_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 325, &CNetMessagePB<325,CDOTAClientMsg_PlayerShowCase,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_PlayerShowCase_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 325, &CNetMessagePB<325,CDOTAClientMsg_PlayerShowCase,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_PlayerShowCase_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SpecialAbility_t>  (line 40, @0x0000000001c9bb50, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SpecialAbility_t>, FindOrCreateGameEvent<CDOTAClientMsg_SpecialAbility_t>, FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>, RegisterGameEvent<CDOTAClientMsg_SpecialAbility_t>, RegisterNetMessage<CDOTAClientMsg_SpecialAbility_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SpecialAbility_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<358,CDOTAClientMsg_SpecialAbility,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SpecialAbility_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SpecialAbility_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 358, &CNetMessagePB<358,CDOTAClientMsg_SpecialAbility,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SpecialAbility_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 358, &CNetMessagePB<358,CDOTAClientMsg_SpecialAbility,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SpecialAbility_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_WillPurchaseAlert_t>  (line 40, @0x0000000001c9bc40, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_WillPurchaseAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_WillPurchaseAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>, RegisterGameEvent<CDOTAClientMsg_WillPurchaseAlert_t>, RegisterNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_WillPurchaseAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<324,CDOTAClientMsg_WillPurchaseAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_WillPurchaseAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_WillPurchaseAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 324, &CNetMessagePB<324,CDOTAClientMsg_WillPurchaseAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_WillPurchaseAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 324, &CNetMessagePB<324,CDOTAClientMsg_WillPurchaseAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WillPurchaseAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_QuestStatus_t>  (line 40, @0x0000000001c9bd30, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_QuestStatus_t>, FindOrCreateGameEvent<CDOTAClientMsg_QuestStatus_t>, FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>, RegisterGameEvent<CDOTAClientMsg_QuestStatus_t>, RegisterNetMessage<CDOTAClientMsg_QuestStatus_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_QuestStatus_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<356,CDOTAClientMsg_QuestStatus,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_QuestStatus_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_QuestStatus_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 356, &CNetMessagePB<356,CDOTAClientMsg_QuestStatus,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_QuestStatus_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 356, &CNetMessagePB<356,CDOTAClientMsg_QuestStatus,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuestStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SendStatPopup_t>  (line 40, @0x0000000001c9be20, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SendStatPopup_t>, FindOrCreateGameEvent<CDOTAClientMsg_SendStatPopup_t>, FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>, RegisterGameEvent<CDOTAClientMsg_SendStatPopup_t>, RegisterNetMessage<CDOTAClientMsg_SendStatPopup_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SendStatPopup_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<317,CDOTAClientMsg_SendStatPopup,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SendStatPopup_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SendStatPopup_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 317, &CNetMessagePB<317,CDOTAClientMsg_SendStatPopup,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SendStatPopup_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 317, &CNetMessagePB<317,CDOTAClientMsg_SendStatPopup,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SendStatPopup_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_BeginLastHitChallenge_t>  (line 40, @0x0000000001c9bf10, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_BeginLastHitChallenge_t>, FindOrCreateGameEvent<CDOTAClientMsg_BeginLastHitChallenge_t>, FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>, RegisterGameEvent<CDOTAClientMsg_BeginLastHitChallenge_t>, RegisterNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BeginLastHitChallenge_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<318,CDOTAClientMsg_BeginLastHitChallenge,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_BeginLastHitChallenge_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BeginLastHitChallenge_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 318, &CNetMessagePB<318,CDOTAClientMsg_BeginLastHitChallenge,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BeginLastHitChallenge_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 318, &CNetMessagePB<318,CDOTAClientMsg_BeginLastHitChallenge,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BeginLastHitChallenge_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_UpdateQuickBuy_t>  (line 40, @0x0000000001c9c000, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_UpdateQuickBuy_t>, FindOrCreateGameEvent<CDOTAClientMsg_UpdateQuickBuy_t>, FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>, RegisterGameEvent<CDOTAClientMsg_UpdateQuickBuy_t>, RegisterNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_UpdateQuickBuy_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<319,CDOTAClientMsg_UpdateQuickBuy,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_UpdateQuickBuy_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_UpdateQuickBuy_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 319, &CNetMessagePB<319,CDOTAClientMsg_UpdateQuickBuy,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_UpdateQuickBuy_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 319, &CNetMessagePB<319,CDOTAClientMsg_UpdateQuickBuy,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UpdateQuickBuy_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_XPAlert_t>  (line 40, @0x0000000001c9c0f0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_XPAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_XPAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>, RegisterGameEvent<CDOTAClientMsg_XPAlert_t>, RegisterNetMessage<CDOTAClientMsg_XPAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_XPAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<351,CDOTAClientMsg_XPAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_XPAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_XPAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 351, &CNetMessagePB<351,CDOTAClientMsg_XPAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_XPAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 351, &CNetMessagePB<351,CDOTAClientMsg_XPAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_XPAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ShopViewMode_t>  (line 40, @0x0000000001c9c1e0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ShopViewMode_t>, FindOrCreateGameEvent<CDOTAClientMsg_ShopViewMode_t>, FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>, RegisterGameEvent<CDOTAClientMsg_ShopViewMode_t>, RegisterNetMessage<CDOTAClientMsg_ShopViewMode_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ShopViewMode_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<309,CDOTAClientMsg_ShopViewMode,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ShopViewMode_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ShopViewMode_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 309, &CNetMessagePB<309,CDOTAClientMsg_ShopViewMode,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ShopViewMode_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 309, &CNetMessagePB<309,CDOTAClientMsg_ShopViewMode,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ShopViewMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SetUnitShareFlag_t>  (line 40, @0x0000000001c9c2d0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SetUnitShareFlag_t>, FindOrCreateGameEvent<CDOTAClientMsg_SetUnitShareFlag_t>, FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>, RegisterGameEvent<CDOTAClientMsg_SetUnitShareFlag_t>, RegisterNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetUnitShareFlag_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<310,CDOTAClientMsg_SetUnitShareFlag,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SetUnitShareFlag_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetUnitShareFlag_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 310, &CNetMessagePB<310,CDOTAClientMsg_SetUnitShareFlag,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetUnitShareFlag_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 310, &CNetMessagePB<310,CDOTAClientMsg_SetUnitShareFlag,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetUnitShareFlag_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SwapRequest_t>  (line 40, @0x0000000001c9c3c0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SwapRequest_t>, FindOrCreateGameEvent<CDOTAClientMsg_SwapRequest_t>, FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>, RegisterGameEvent<CDOTAClientMsg_SwapRequest_t>, RegisterNetMessage<CDOTAClientMsg_SwapRequest_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SwapRequest_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<311,CDOTAClientMsg_SwapRequest,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SwapRequest_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SwapRequest_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 311, &CNetMessagePB<311,CDOTAClientMsg_SwapRequest,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SwapRequest_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 311, &CNetMessagePB<311,CDOTAClientMsg_SwapRequest,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapRequest_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_MatchMetadata_t>  (line 40, @0x0000000001c9c4b0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_MatchMetadata_t>, FindOrCreateGameEvent<CDOTAClientMsg_MatchMetadata_t>, FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>, RegisterGameEvent<CDOTAClientMsg_MatchMetadata_t>, RegisterNetMessage<CDOTAClientMsg_MatchMetadata_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MatchMetadata_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<354,CDOTAClientMsg_MatchMetadata,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_MatchMetadata_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MatchMetadata_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 354, &CNetMessagePB<354,CDOTAClientMsg_MatchMetadata,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MatchMetadata_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 354, &CNetMessagePB<354,CDOTAClientMsg_MatchMetadata,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MatchMetadata_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_WorldLine_t>  (line 40, @0x0000000001c9c5a0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_WorldLine_t>, FindOrCreateGameEvent<CDOTAClientMsg_WorldLine_t>, FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>, RegisterGameEvent<CDOTAClientMsg_WorldLine_t>, RegisterNetMessage<CDOTAClientMsg_WorldLine_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_WorldLine_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<313,CDOTAClientMsg_WorldLine,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_WorldLine_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_WorldLine_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 313, &CNetMessagePB<313,CDOTAClientMsg_WorldLine,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_WorldLine_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 313, &CNetMessagePB<313,CDOTAClientMsg_WorldLine,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_WorldLine_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_RequestGraphUpdate_t>  (line 40, @0x0000000001c9c690, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_RequestGraphUpdate_t>, FindOrCreateGameEvent<CDOTAClientMsg_RequestGraphUpdate_t>, FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>, RegisterGameEvent<CDOTAClientMsg_RequestGraphUpdate_t>, RegisterNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RequestGraphUpdate_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<314,CDOTAClientMsg_RequestGraphUpdate,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_RequestGraphUpdate_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RequestGraphUpdate_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 314, &CNetMessagePB<314,CDOTAClientMsg_RequestGraphUpdate,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RequestGraphUpdate_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 314, &CNetMessagePB<314,CDOTAClientMsg_RequestGraphUpdate,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RequestGraphUpdate_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ItemAlert_t>  (line 40, @0x0000000001c9c780, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ItemAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_ItemAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>, RegisterGameEvent<CDOTAClientMsg_ItemAlert_t>, RegisterNetMessage<CDOTAClientMsg_ItemAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ItemAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<315,CDOTAClientMsg_ItemAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ItemAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ItemAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 315, &CNetMessagePB<315,CDOTAClientMsg_ItemAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ItemAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 315, &CNetMessagePB<315,CDOTAClientMsg_ItemAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_KillcamDamageTaken_t>  (line 40, @0x0000000001c9c870, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_KillcamDamageTaken_t>, FindOrCreateGameEvent<CDOTAClientMsg_KillcamDamageTaken_t>, FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>, RegisterGameEvent<CDOTAClientMsg_KillcamDamageTaken_t>, RegisterNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_KillcamDamageTaken_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<359,CDOTAClientMsg_KillcamDamageTaken,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_KillcamDamageTaken_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_KillcamDamageTaken_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 359, &CNetMessagePB<359,CDOTAClientMsg_KillcamDamageTaken,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_KillcamDamageTaken_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 359, &CNetMessagePB<359,CDOTAClientMsg_KillcamDamageTaken,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 56, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_KillcamDamageTaken_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>  (line 40, @0x0000000001c9c960, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_BroadcasterUsingCameraman_t>, FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingCameraman_t>, FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>, RegisterGameEvent<CDOTAClientMsg_BroadcasterUsingCameraman_t>, RegisterNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingCameraman_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<328,CDOTAClientMsg_BroadcasterUsingCameraman,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingCameraman_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 328, &CNetMessagePB<328,CDOTAClientMsg_BroadcasterUsingCameraman,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingCameraman_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 328, &CNetMessagePB<328,CDOTAClientMsg_BroadcasterUsingCameraman,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>  (line 40, @0x0000000001c9ca50, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>, FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>, FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>, RegisterGameEvent<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>, RegisterNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHan, CNetMessagePB<329,CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 329, &CNetMessagePB<329,CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 329, &CNetMessagePB<329,CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_EnemyItemAlert_t>  (line 40, @0x0000000001c9cb40, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_EnemyItemAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_EnemyItemAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>, RegisterGameEvent<CDOTAClientMsg_EnemyItemAlert_t>, RegisterNetMessage<CDOTAClientMsg_EnemyItemAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EnemyItemAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<330,CDOTAClientMsg_EnemyItemAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_EnemyItemAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EnemyItemAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 330, &CNetMessagePB<330,CDOTAClientMsg_EnemyItemAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EnemyItemAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 330, &CNetMessagePB<330,CDOTAClientMsg_EnemyItemAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EnemyItemAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>  (line 40, @0x0000000001c9cc30, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SetEnemyStartingPosition_t>, FindOrCreateGameEvent<CDOTAClientMsg_SetEnemyStartingPosition_t>, FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>, RegisterGameEvent<CDOTAClientMsg_SetEnemyStartingPosition_t>, RegisterNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetEnemyStartingPosition_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<360,CDOTAClientMsg_SetEnemyStartingPosition,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetEnemyStartingPosition_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 360, &CNetMessagePB<360,CDOTAClientMsg_SetEnemyStartingPosition,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetEnemyStartingPosition_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 360, &CNetMessagePB<360,CDOTAClientMsg_SetEnemyStartingPosition,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_BuyBackStateAlert_t>  (line 40, @0x0000000001c9cd20, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_BuyBackStateAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_BuyBackStateAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>, RegisterGameEvent<CDOTAClientMsg_BuyBackStateAlert_t>, RegisterNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BuyBackStateAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<332,CDOTAClientMsg_BuyBackStateAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_BuyBackStateAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BuyBackStateAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 332, &CNetMessagePB<332,CDOTAClientMsg_BuyBackStateAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_BuyBackStateAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 332, &CNetMessagePB<332,CDOTAClientMsg_BuyBackStateAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_BuyBackStateAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_QuickBuyAlert_t>  (line 40, @0x0000000001c9ce10, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_QuickBuyAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_QuickBuyAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>, RegisterGameEvent<CDOTAClientMsg_QuickBuyAlert_t>, RegisterNetMessage<CDOTAClientMsg_QuickBuyAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_QuickBuyAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<333,CDOTAClientMsg_QuickBuyAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_QuickBuyAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_QuickBuyAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 333, &CNetMessagePB<333,CDOTAClientMsg_QuickBuyAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_QuickBuyAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 333, &CNetMessagePB<333,CDOTAClientMsg_QuickBuyAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_QuickBuyAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_HeroStatueLike_t>  (line 40, @0x0000000001c9cf00, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_HeroStatueLike_t>, FindOrCreateGameEvent<CDOTAClientMsg_HeroStatueLike_t>, FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>, RegisterGameEvent<CDOTAClientMsg_HeroStatueLike_t>, RegisterNetMessage<CDOTAClientMsg_HeroStatueLike_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_HeroStatueLike_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<334,CDOTAClientMsg_HeroStatueLike,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_HeroStatueLike_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_HeroStatueLike_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 334, &CNetMessagePB<334,CDOTAClientMsg_HeroStatueLike,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_HeroStatueLike_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 334, &CNetMessagePB<334,CDOTAClientMsg_HeroStatueLike,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HeroStatueLike_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>  (line 40, @0x0000000001c9cff0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SetDesiredWardPlacement_t>, FindOrCreateGameEvent<CDOTAClientMsg_SetDesiredWardPlacement_t>, FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>, RegisterGameEvent<CDOTAClientMsg_SetDesiredWardPlacement_t>, RegisterNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetDesiredWardPlacement_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<361,CDOTAClientMsg_SetDesiredWardPlacement,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetDesiredWardPlacement_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 361, &CNetMessagePB<361,CDOTAClientMsg_SetDesiredWardPlacement,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SetDesiredWardPlacement_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 361, &CNetMessagePB<361,CDOTAClientMsg_SetDesiredWardPlacement,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_HPManaAlert_t>  (line 40, @0x0000000001c9d0e0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_HPManaAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_HPManaAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>, RegisterGameEvent<CDOTAClientMsg_HPManaAlert_t>, RegisterNetMessage<CDOTAClientMsg_HPManaAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_HPManaAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<337,CDOTAClientMsg_HPManaAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_HPManaAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_HPManaAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 337, &CNetMessagePB<337,CDOTAClientMsg_HPManaAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_HPManaAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 337, &CNetMessagePB<337,CDOTAClientMsg_HPManaAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_HPManaAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_GlyphAlert_t>  (line 40, @0x0000000001c9d1d0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_GlyphAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_GlyphAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>, RegisterGameEvent<CDOTAClientMsg_GlyphAlert_t>, RegisterNetMessage<CDOTAClientMsg_GlyphAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_GlyphAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<338,CDOTAClientMsg_GlyphAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_GlyphAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_GlyphAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 338, &CNetMessagePB<338,CDOTAClientMsg_GlyphAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_GlyphAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 338, &CNetMessagePB<338,CDOTAClientMsg_GlyphAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_GlyphAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_EventCNY2015Cmd_t>  (line 40, @0x0000000001c9d2c0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_EventCNY2015Cmd_t>, FindOrCreateGameEvent<CDOTAClientMsg_EventCNY2015Cmd_t>, FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>, RegisterGameEvent<CDOTAClientMsg_EventCNY2015Cmd_t>, RegisterNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventCNY2015Cmd_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<341,CDOTAClientMsg_EventCNY2015Cmd,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_EventCNY2015Cmd_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v1; // rsi
  INetworkMessages *v2; // rbx
  __int64 v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventCNY2015Cmd_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 341, &CNetMessagePB<341,CDOTAClientMsg_EventCNY2015Cmd,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventCNY2015Cmd_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 341, &CNetMessagePB<341,CDOTAClientMsg_EventCNY2015Cmd,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventCNY2015Cmd_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_RollDice_t>  (line 40, @0x0000000001c9d3b0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_RollDice_t>, FindOrCreateGameEvent<CDOTAClientMsg_RollDice_t>, FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>, RegisterGameEvent<CDOTAClientMsg_RollDice_t>, RegisterNetMessage<CDOTAClientMsg_RollDice_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RollDice_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<362,CDOTAClientMsg_RollDice,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_RollDice_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RollDice_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 362, &CNetMessagePB<362,CDOTAClientMsg_RollDice,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RollDice_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 362, &CNetMessagePB<362,CDOTAClientMsg_RollDice,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RollDice_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_DemoHero_t>  (line 40, @0x0000000001c9d4a0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_DemoHero_t>, FindOrCreateGameEvent<CDOTAClientMsg_DemoHero_t>, FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>, RegisterGameEvent<CDOTAClientMsg_DemoHero_t>, RegisterNetMessage<CDOTAClientMsg_DemoHero_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_DemoHero_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<343,CDOTAClientMsg_DemoHero,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_DemoHero_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_DemoHero_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 343, &CNetMessagePB<343,CDOTAClientMsg_DemoHero,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 72, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_DemoHero_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 343, &CNetMessagePB<343,CDOTAClientMsg_DemoHero,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 72, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_DemoHero_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ChallengeSelect_t>  (line 40, @0x0000000001c9d590, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ChallengeSelect_t>, FindOrCreateGameEvent<CDOTAClientMsg_ChallengeSelect_t>, FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>, RegisterGameEvent<CDOTAClientMsg_ChallengeSelect_t>, RegisterNetMessage<CDOTAClientMsg_ChallengeSelect_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeSelect_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<346,CDOTAClientMsg_ChallengeSelect,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ChallengeSelect_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeSelect_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 346, &CNetMessagePB<346,CDOTAClientMsg_ChallengeSelect,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeSelect_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 346, &CNetMessagePB<346,CDOTAClientMsg_ChallengeSelect,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeSelect_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ChallengeReroll_t>  (line 40, @0x0000000001c9d680, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ChallengeReroll_t>, FindOrCreateGameEvent<CDOTAClientMsg_ChallengeReroll_t>, FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>, RegisterGameEvent<CDOTAClientMsg_ChallengeReroll_t>, RegisterNetMessage<CDOTAClientMsg_ChallengeReroll_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeReroll_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<347,CDOTAClientMsg_ChallengeReroll,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ChallengeReroll_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeReroll_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 347, &CNetMessagePB<347,CDOTAClientMsg_ChallengeReroll,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChallengeReroll_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 347, &CNetMessagePB<347,CDOTAClientMsg_ChallengeReroll,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 40, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChallengeReroll_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ToggleAutoattack_t>  (line 40, @0x0000000001c9d770, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ToggleAutoattack_t>, FindOrCreateGameEvent<CDOTAClientMsg_ToggleAutoattack_t>, FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>, RegisterGameEvent<CDOTAClientMsg_ToggleAutoattack_t>, RegisterNetMessage<CDOTAClientMsg_ToggleAutoattack_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ToggleAutoattack_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<357,CDOTAClientMsg_ToggleAutoattack,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ToggleAutoattack_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ToggleAutoattack_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 357, &CNetMessagePB<357,CDOTAClientMsg_ToggleAutoattack,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ToggleAutoattack_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 357, &CNetMessagePB<357,CDOTAClientMsg_ToggleAutoattack,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ToggleAutoattack_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>  (line 40, @0x0000000001c9d860, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_UnitsAutoAttackMode_t>, FindOrCreateGameEvent<CDOTAClientMsg_UnitsAutoAttackMode_t>, FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>, RegisterGameEvent<CDOTAClientMsg_UnitsAutoAttackMode_t>, RegisterNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_UnitsAutoAttackMode_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<304,CDOTAClientMsg_UnitsAutoAttackMode,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_UnitsAutoAttackMode_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 304, &CNetMessagePB<304,CDOTAClientMsg_UnitsAutoAttackMode,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_UnitsAutoAttackMode_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 304, &CNetMessagePB<304,CDOTAClientMsg_UnitsAutoAttackMode,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_AspectRatio_t>  (line 40, @0x0000000001c9d950, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_AspectRatio_t>, FindOrCreateGameEvent<CDOTAClientMsg_AspectRatio_t>, FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>, RegisterGameEvent<CDOTAClientMsg_AspectRatio_t>, RegisterNetMessage<CDOTAClientMsg_AspectRatio_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_AspectRatio_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<302,CDOTAClientMsg_AspectRatio,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_AspectRatio_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_AspectRatio_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 302, &CNetMessagePB<302,CDOTAClientMsg_AspectRatio,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_AspectRatio_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 302, &CNetMessagePB<302,CDOTAClientMsg_AspectRatio,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_AspectRatio_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_MapPing_t>  (line 40, @0x0000000001c9da40, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_MapPing_t>, FindOrCreateGameEvent<CDOTAClientMsg_MapPing_t>, FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>, RegisterGameEvent<CDOTAClientMsg_MapPing_t>, RegisterNetMessage<CDOTAClientMsg_MapPing_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MapPing_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<303,CDOTAClientMsg_MapPing,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_MapPing_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MapPing_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 303, &CNetMessagePB<303,CDOTAClientMsg_MapPing,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_MapPing_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 303, &CNetMessagePB<303,CDOTAClientMsg_MapPing,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_MapPing_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_Pause_t>  (line 40, @0x0000000001c9db30, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_Pause_t>, FindOrCreateGameEvent<CDOTAClientMsg_Pause_t>, FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>, RegisterGameEvent<CDOTAClientMsg_Pause_t>, RegisterNetMessage<CDOTAClientMsg_Pause_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_Pause_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<308,CDOTAClientMsg_Pause,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_Pause_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_Pause_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 308, &CNetMessagePB<308,CDOTAClientMsg_Pause,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_Pause_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 308, &CNetMessagePB<308,CDOTAClientMsg_Pause,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 24, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_Pause_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ClickedBuff_t>  (line 40, @0x0000000001c9dc20, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ClickedBuff_t>, FindOrCreateGameEvent<CDOTAClientMsg_ClickedBuff_t>, FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>, RegisterGameEvent<CDOTAClientMsg_ClickedBuff_t>, RegisterNetMessage<CDOTAClientMsg_ClickedBuff_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ClickedBuff_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<348,CDOTAClientMsg_ClickedBuff,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ClickedBuff_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ClickedBuff_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 348, &CNetMessagePB<348,CDOTAClientMsg_ClickedBuff,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ClickedBuff_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 348, &CNetMessagePB<348,CDOTAClientMsg_ClickedBuff,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ClickedBuff_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_FlipCoin_t>  (line 40, @0x0000000001c9dd10, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_FlipCoin_t>, FindOrCreateGameEvent<CDOTAClientMsg_FlipCoin_t>, FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>, RegisterGameEvent<CDOTAClientMsg_FlipCoin_t>, RegisterNetMessage<CDOTAClientMsg_FlipCoin_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FlipCoin_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<363,CDOTAClientMsg_FlipCoin,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_FlipCoin_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FlipCoin_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 363, &CNetMessagePB<363,CDOTAClientMsg_FlipCoin,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FlipCoin_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 363, &CNetMessagePB<363,CDOTAClientMsg_FlipCoin,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FlipCoin_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SearchString_t>  (line 40, @0x0000000001c9de00, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SearchString_t>, FindOrCreateGameEvent<CDOTAClientMsg_SearchString_t>, FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>, RegisterGameEvent<CDOTAClientMsg_SearchString_t>, RegisterNetMessage<CDOTAClientMsg_SearchString_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SearchString_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<307,CDOTAClientMsg_SearchString,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SearchString_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SearchString_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 307, &CNetMessagePB<307,CDOTAClientMsg_SearchString,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SearchString_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 307, &CNetMessagePB<307,CDOTAClientMsg_SearchString,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SearchString_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_TeleportRequiresHalt_t>  (line 40, @0x0000000001c9def0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_TeleportRequiresHalt_t>, FindOrCreateGameEvent<CDOTAClientMsg_TeleportRequiresHalt_t>, FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>, RegisterGameEvent<CDOTAClientMsg_TeleportRequiresHalt_t>, RegisterNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_TeleportRequiresHalt_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<326,CDOTAClientMsg_TeleportRequiresHalt,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_TeleportRequiresHalt_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_TeleportRequiresHalt_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 326, &CNetMessagePB<326,CDOTAClientMsg_TeleportRequiresHalt,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_TeleportRequiresHalt_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 326, &CNetMessagePB<326,CDOTAClientMsg_TeleportRequiresHalt,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_TeleportRequiresHalt_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ExecuteOrders_t>  (line 40, @0x0000000001c9dfe0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ExecuteOrders_t>, FindOrCreateGameEvent<CDOTAClientMsg_ExecuteOrders_t>, FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>, RegisterGameEvent<CDOTAClientMsg_ExecuteOrders_t>, RegisterNetMessage<CDOTAClientMsg_ExecuteOrders_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ExecuteOrders_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<350,CDOTAClientMsg_ExecuteOrders,(SignonGroup_t)14,(NetChannelBufType_t)0,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ExecuteOrders_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ExecuteOrders_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 350, &CNetMessagePB<350,CDOTAClientMsg_ExecuteOrders,(SignonGroup_t)14,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ExecuteOrders_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 350, &CNetMessagePB<350,CDOTAClientMsg_ExecuteOrders,(SignonGroup_t)14,(NetChannelBufType_t)0,true>::s_ProtobufBinding, 48, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ExecuteOrders_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_SwapAccept_t>  (line 40, @0x0000000001c9e0d0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_SwapAccept_t>, FindOrCreateGameEvent<CDOTAClientMsg_SwapAccept_t>, FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>, RegisterGameEvent<CDOTAClientMsg_SwapAccept_t>, RegisterNetMessage<CDOTAClientMsg_SwapAccept_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SwapAccept_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<312,CDOTAClientMsg_SwapAccept,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_SwapAccept_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SwapAccept_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 312, &CNetMessagePB<312,CDOTAClientMsg_SwapAccept,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_SwapAccept_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 312, &CNetMessagePB<312,CDOTAClientMsg_SwapAccept,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_SwapAccept_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ChatWheel_t>  (line 40, @0x0000000001c9e1c0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ChatWheel_t>, FindOrCreateGameEvent<CDOTAClientMsg_ChatWheel_t>, FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>, RegisterGameEvent<CDOTAClientMsg_ChatWheel_t>, RegisterNetMessage<CDOTAClientMsg_ChatWheel_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChatWheel_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<316,CDOTAClientMsg_ChatWheel,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ChatWheel_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChatWheel_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 316, &CNetMessagePB<316,CDOTAClientMsg_ChatWheel,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ChatWheel_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 316, &CNetMessagePB<316,CDOTAClientMsg_ChatWheel,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ChatWheel_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_RecordVote_t>  (line 40, @0x0000000001c9e2b0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_RecordVote_t>, FindOrCreateGameEvent<CDOTAClientMsg_RecordVote_t>, FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>, RegisterGameEvent<CDOTAClientMsg_RecordVote_t>, RegisterNetMessage<CDOTAClientMsg_RecordVote_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RecordVote_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<322,CDOTAClientMsg_RecordVote,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_RecordVote_t>()
{
  IGameEventSystem *v0; // rbx
  __int64 v1; // rsi
  INetworkMessages *v2; // rbx
  __int64 v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RecordVote_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 322, &CNetMessagePB<322,CDOTAClientMsg_RecordVote,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_RecordVote_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 322, &CNetMessagePB<322,CDOTAClientMsg_RecordVote,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_RecordVote_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_CameraZoomAmount_t>  (line 40, @0x0000000001c9e3a0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_CameraZoomAmount_t>, FindOrCreateGameEvent<CDOTAClientMsg_CameraZoomAmount_t>, FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>, RegisterGameEvent<CDOTAClientMsg_CameraZoomAmount_t>, RegisterNetMessage<CDOTAClientMsg_CameraZoomAmount_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_CameraZoomAmount_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<327,CDOTAClientMsg_CameraZoomAmount,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_CameraZoomAmount_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_CameraZoomAmount_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 327, &CNetMessagePB<327,CDOTAClientMsg_CameraZoomAmount,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_CameraZoomAmount_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 327, &CNetMessagePB<327,CDOTAClientMsg_CameraZoomAmount,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CameraZoomAmount_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_FreeInventory_t>  (line 40, @0x0000000001c9e490, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_FreeInventory_t>, FindOrCreateGameEvent<CDOTAClientMsg_FreeInventory_t>, FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>, RegisterGameEvent<CDOTAClientMsg_FreeInventory_t>, RegisterNetMessage<CDOTAClientMsg_FreeInventory_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FreeInventory_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<331,CDOTAClientMsg_FreeInventory,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_FreeInventory_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FreeInventory_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 331, &CNetMessagePB<331,CDOTAClientMsg_FreeInventory,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FreeInventory_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 331, &CNetMessagePB<331,CDOTAClientMsg_FreeInventory,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FreeInventory_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_ModifierAlert_t>  (line 40, @0x0000000001c9e580, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_ModifierAlert_t>, FindOrCreateGameEvent<CDOTAClientMsg_ModifierAlert_t>, FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>, RegisterGameEvent<CDOTAClientMsg_ModifierAlert_t>, RegisterNetMessage<CDOTAClientMsg_ModifierAlert_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ModifierAlert_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<335,CDOTAClientMsg_ModifierAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_ModifierAlert_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ModifierAlert_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 335, &CNetMessagePB<335,CDOTAClientMsg_ModifierAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_ModifierAlert_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 335, &CNetMessagePB<335,CDOTAClientMsg_ModifierAlert,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_ModifierAlert_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>  (line 40, @0x0000000001c9e670, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_FillEmptySlotsWithBots_t>, FindOrCreateGameEvent<CDOTAClientMsg_FillEmptySlotsWithBots_t>, FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>, RegisterGameEvent<CDOTAClientMsg_FillEmptySlotsWithBots_t>, RegisterNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FillEmptySlotsWithBots_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<342,CDOTAClientMsg_FillEmptySlotsWithBots,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FillEmptySlotsWithBots_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 342, &CNetMessagePB<342,CDOTAClientMsg_FillEmptySlotsWithBots,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_FillEmptySlotsWithBots_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 342, &CNetMessagePB<342,CDOTAClientMsg_FillEmptySlotsWithBots,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_CoinWager_t>  (line 40, @0x0000000001c9e760, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_CoinWager_t>, FindOrCreateGameEvent<CDOTAClientMsg_CoinWager_t>, FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>, RegisterGameEvent<CDOTAClientMsg_CoinWager_t>, RegisterNetMessage<CDOTAClientMsg_CoinWager_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_CoinWager_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_CoinWager_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_CoinWager_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 349, &CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_CoinWager_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 349, &CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_CoinWager_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CDOTAClientMsg_EventPointsTip_t>  (line 40, @0x0000000001c9e850, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CDOTAClientMsg_EventPointsTip_t>, FindOrCreateGameEvent<CDOTAClientMsg_EventPointsTip_t>, FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>, RegisterGameEvent<CDOTAClientMsg_EventPointsTip_t>, RegisterNetMessage<CDOTAClientMsg_EventPointsTip_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventPointsTip_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CDOTAClientMsg_EventPointsTip_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventPointsTip_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 353, &CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CDOTAClientMsg_EventPointsTip_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 353, &CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CDOTAClientMsg_EventPointsTip_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CClientMsg_CustomGameEvent_t>  (line 40, @0x0000000001f787d0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CClientMsg_CustomGameEvent_t>, FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>, FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>, RegisterGameEvent<CClientMsg_CustomGameEvent_t>, RegisterNetMessage<CClientMsg_CustomGameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<280,CBaseCmdKeyValues<CClientMsg_CustomGameEvent>,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CClientMsg_CustomGameEvent_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 280, &CNetMessagePB<280,CBaseCmdKeyValues<CClientMsg_CustomGameEvent>,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 280, &CNetMessagePB<280,CBaseCmdKeyValues<CClientMsg_CustomGameEvent>,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_CustomGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<Source1LegacyListenEvents_t>  (line 40, @0x00000000020fc770, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<Source1LegacyListenEvents_t>, FindOrCreateGameEvent<Source1LegacyListenEvents_t>, FindOrCreateNetMessage<Source1LegacyListenEvents_t>, RegisterGameEvent<Source1LegacyListenEvents_t>, RegisterNetMessage<Source1LegacyListenEvents_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<Source1LegacyListenEvents_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<206,CMsgSource1LegacyListenEvents,(SignonGroup_t)10,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<Source1LegacyListenEvents_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<Source1LegacyListenEvents_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 206, &CNetMessagePB<206,CMsgSource1LegacyListenEvents,(SignonGroup_t)10,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<Source1LegacyListenEvents_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 206, &CNetMessagePB<206,CMsgSource1LegacyListenEvents,(SignonGroup_t)10,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyListenEvents_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// RegisterClientEventMessage<CClientMsg_RotateAnchor_t>  (line 40, @0x000000000233c6c0, libserver.so)  // inlines: AssociateNetMessageWithChannelCategory<CClientMsg_RotateAnchor_t>, FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>, FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>, RegisterGameEvent<CClientMsg_RotateAnchor_t>, RegisterNetMessage<CClientMsg_RotateAnchor_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<285,CClientMsg_RotateAnchor,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding
bool __cdecl RegisterClientEventMessage<CClientMsg_RotateAnchor_t>()
{
  IGameEventSystem *v0; // rbx
  NetMessageHandle_t v1; // rsi
  INetworkMessages *v2; // rbx
  NetMessageHandle_t v4; // rsi

  v0 = g_pGameEventSystem;
  if ( IGameEventSystem::FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>(bool)::s_hEvent == 0 )
  {
    v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 285, &CNetMessagePB<285,CClientMsg_RotateAnchor,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
      v4 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_RotateAnchor_t>(bool)::s_hEvent = v4;
  }
  (*(*v0 + 88LL))(v0);
  v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v2 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 285, &CNetMessagePB<285,CClientMsg_RotateAnchor,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 32, 0, 1, 0);
    v1 = INetworkMessages::FindOrCreateNetMessage<CClientMsg_RotateAnchor_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v2 + 8LL))(v2, v1, 2, 0);
  return 1;
}


// UnregisterClientEventMessage<CClientMsg_ClientUIEvent_t>  (line 47, @0x0000000001b50880, libserver.so)
void __cdecl UnregisterClientEventMessage<CClientMsg_ClientUIEvent_t>()
{
  ;
}


// UnregisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>  (line 47, @0x0000000001b50890, libserver.so)
void __cdecl UnregisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_MapLine_t>  (line 47, @0x0000000001c98230, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_MapLine_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_AspectRatio_t>  (line 47, @0x0000000001c98240, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_AspectRatio_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_MapPing_t>  (line 47, @0x0000000001c98250, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_MapPing_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>  (line 47, @0x0000000001c98260, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_UnitsAutoAttackMode_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SearchString_t>  (line 47, @0x0000000001c98270, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SearchString_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_Pause_t>  (line 47, @0x0000000001c98280, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_Pause_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ShopViewMode_t>  (line 47, @0x0000000001c98290, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ShopViewMode_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SetUnitShareFlag_t>  (line 47, @0x0000000001c982a0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SetUnitShareFlag_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SwapRequest_t>  (line 47, @0x0000000001c982b0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SwapRequest_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SwapAccept_t>  (line 47, @0x0000000001c982c0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SwapAccept_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_WorldLine_t>  (line 47, @0x0000000001c982d0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_WorldLine_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_RequestGraphUpdate_t>  (line 47, @0x0000000001c982e0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_RequestGraphUpdate_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ItemAlert_t>  (line 47, @0x0000000001c982f0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ItemAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ChatWheel_t>  (line 47, @0x0000000001c98300, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ChatWheel_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SendStatPopup_t>  (line 47, @0x0000000001c98310, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SendStatPopup_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_BeginLastHitChallenge_t>  (line 47, @0x0000000001c98320, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_BeginLastHitChallenge_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_UpdateQuickBuy_t>  (line 47, @0x0000000001c98330, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_UpdateQuickBuy_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_RecordVote_t>  (line 47, @0x0000000001c98340, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_RecordVote_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_WillPurchaseAlert_t>  (line 47, @0x0000000001c98350, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_WillPurchaseAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_PlayerShowCase_t>  (line 47, @0x0000000001c98360, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_PlayerShowCase_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_TeleportRequiresHalt_t>  (line 47, @0x0000000001c98370, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_TeleportRequiresHalt_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_CameraZoomAmount_t>  (line 47, @0x0000000001c98380, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_CameraZoomAmount_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>  (line 47, @0x0000000001c98390, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingCameraman_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>  (line 47, @0x0000000001c983a0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_EnemyItemAlert_t>  (line 47, @0x0000000001c983b0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_EnemyItemAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_FreeInventory_t>  (line 47, @0x0000000001c983c0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_FreeInventory_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_BuyBackStateAlert_t>  (line 47, @0x0000000001c983d0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_BuyBackStateAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_QuickBuyAlert_t>  (line 47, @0x0000000001c983e0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_QuickBuyAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_HeroStatueLike_t>  (line 47, @0x0000000001c983f0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_HeroStatueLike_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ModifierAlert_t>  (line 47, @0x0000000001c98400, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ModifierAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_HPManaAlert_t>  (line 47, @0x0000000001c98410, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_HPManaAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_GlyphAlert_t>  (line 47, @0x0000000001c98420, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_GlyphAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_EventCNY2015Cmd_t>  (line 47, @0x0000000001c98430, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_EventCNY2015Cmd_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>  (line 47, @0x0000000001c98440, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_FillEmptySlotsWithBots_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_DemoHero_t>  (line 47, @0x0000000001c98450, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_DemoHero_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ChallengeSelect_t>  (line 47, @0x0000000001c98460, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ChallengeSelect_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ChallengeReroll_t>  (line 47, @0x0000000001c98470, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ChallengeReroll_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ClickedBuff_t>  (line 47, @0x0000000001c98480, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ClickedBuff_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_CoinWager_t>  (line 47, @0x0000000001c98490, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_CoinWager_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_EventPointsTip_t>  (line 47, @0x0000000001c984a0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_EventPointsTip_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ExecuteOrders_t>  (line 47, @0x0000000001c984b0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ExecuteOrders_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_XPAlert_t>  (line 47, @0x0000000001c984c0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_XPAlert_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_MatchMetadata_t>  (line 47, @0x0000000001c984d0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_MatchMetadata_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_QuestStatus_t>  (line 47, @0x0000000001c984e0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_QuestStatus_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SpecialAbility_t>  (line 47, @0x0000000001c984f0, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SpecialAbility_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_KillcamDamageTaken_t>  (line 47, @0x0000000001c98500, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_KillcamDamageTaken_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>  (line 47, @0x0000000001c98510, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SetEnemyStartingPosition_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>  (line 47, @0x0000000001c98520, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_SetDesiredWardPlacement_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_RollDice_t>  (line 47, @0x0000000001c98530, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_RollDice_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_FlipCoin_t>  (line 47, @0x0000000001c98540, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_FlipCoin_t>()
{
  ;
}


// UnregisterClientEventMessage<CDOTAClientMsg_ToggleAutoattack_t>  (line 47, @0x0000000001c98550, libserver.so)
void __cdecl UnregisterClientEventMessage<CDOTAClientMsg_ToggleAutoattack_t>()
{
  ;
}


// UnregisterClientEventMessage<CClientMsg_CustomGameEvent_t>  (line 47, @0x0000000001f72400, libserver.so)
void __cdecl UnregisterClientEventMessage<CClientMsg_CustomGameEvent_t>()
{
  ;
}


// UnregisterClientEventMessage<Source1LegacyListenEvents_t>  (line 47, @0x00000000020f1c00, libserver.so)
void __cdecl UnregisterClientEventMessage<Source1LegacyListenEvents_t>()
{
  ;
}


// UnregisterClientEventMessage<CClientMsg_RotateAnchor_t>  (line 47, @0x000000000233a260, libserver.so)
void __cdecl UnregisterClientEventMessage<CClientMsg_RotateAnchor_t>()
{
  ;
}


