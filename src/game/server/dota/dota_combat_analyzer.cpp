
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_CombatAnalyzer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 33, @0x000000000246c500, libserver.so)
void __cdecl CDOTA_CombatAnalyzer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_RealtimeCombatAnalyzer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 36, @0x000000000246c510, libserver.so)
void __cdecl CDOTA_RealtimeCombatAnalyzer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_CombatAnalyzer::CDOTA_CombatAnalyzer  (line 41, @0x000000000246c520, libserver.so)
void __fastcall CDOTA_CombatAnalyzer::CDOTA_CombatAnalyzer(CDOTA_CombatAnalyzer *const this)
{
  this->_vptr_IGameSystem = off_40DE710;
  this->m_pParsingPlayer = 0;
}


// CDOTA_CombatAnalyzer::~CDOTA_CombatAnalyzer  (line 48, @0x0000000002462ba0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CDOTA_CombatAnalyzer::~CDOTA_CombatAnalyzer(CDOTA_CombatAnalyzer *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_CombatAnalyzer::~CDOTA_CombatAnalyzer  (line 48, @0x0000000002462bc0, libserver.so)  // inlines: ~CAutoGameSystem, ~CDOTA_CombatAnalyzer
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTA_CombatAnalyzer::~CDOTA_CombatAnalyzer(CDOTA_CombatAnalyzer *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_CombatAnalyzer::FrameUpdatePostEntityThink  (line 54, @0x00000000024625a0, libserver.so)
void __fastcall CDOTA_CombatAnalyzer::FrameUpdatePostEntityThink(
        CDOTA_CombatAnalyzer *const this,
        const EventServerPostEntityThink_t *const msg)
{
  ;
}


// CDOTA_CombatAnalyzer::GameInit  (line 61, @0x00000000024625b0, libserver.so)
void __fastcall CDOTA_CombatAnalyzer::GameInit(CDOTA_CombatAnalyzer *const this, const EventGameInit_t *const msg)
{
  ;
}


// CDOTA_CombatAnalyzer::CalculateEndGameStats  (line 67, @0x000000000246c540, libserver.so)
// callers: CDOTAGamerules::State_Enter_POST_GAME
void __fastcall CDOTA_CombatAnalyzer::CalculateEndGameStats(CDOTA_CombatAnalyzer *const this)
{
  ;
}


// CDOTA_CombatAnalyzer::ParseEventSearchFields  (line 73, @0x000000000246cfc0, libserver.so)
// calls: KeyValues::GetString, GetCombatLogEventType, ICLSearchFieldFactory::CreateSearchFields, KeyValues::GetFloat, Warning
// callers: CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent
// strings: "COMBAT ANALYZER: Invalid event type %s\n"
ICLSearchFields *__fastcall CDOTA_CombatAnalyzer::ParseEventSearchFields(
        CDOTA_CombatAnalyzer *const this,
        KeyValues *pKVStatsEvent)
{
  const char *String; // r14
  DOTA_COMBATLOG_TYPES CombatLogEventType; // r13d
  ICLSearchFields *SearchFields; // r12
  float v7; // xmm1_4

  if ( pKVStatsEvent != 0 )
  {
    String = KeyValues::GetString(pKVStatsEvent, "event", "", 0, 0);
    CombatLogEventType = GetCombatLogEventType(String);
    SearchFields = ICLSearchFieldFactory::CreateSearchFields(CombatLogEventType, this->m_pParsingPlayer, pKVStatsEvent);
    if ( SearchFields != 0 )
    {
      SearchFields->m_flGameTime = KeyValues::GetFloat(pKVStatsEvent, "gametime", v7);
      return SearchFields;
    }
    if ( (CombatLogEventType - 7) > 5 || ((1LL << (CombatLogEventType - 7)) & 0x2F) == 0 )
      Warning("COMBAT ANALYZER: Invalid event type %s\n", String);
  }
  return 0;
}


// CDOTA_CombatAnalyzer::LoadQueriesFromFile  (line 111, @0x000000000246c550, libserver.so)
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::deleteThis, Warning, _Unwind_Resume
// callers: test_compendium_stats
// strings: "Couldn't Find Stats Definition in file %s\n"
void __fastcall CDOTA_CombatAnalyzer::LoadQueriesFromFile(
        CDOTA_CombatAnalyzer *const this,
        const char *pszFilename,
        CDOTAPlayer *pPlayer,
        ICombatAnalyzerQueryUpdateNotify *pNotify)
{
  KeyValues *v8; // rbx
  IBaseFileSystem *v9; // rsi

  v8 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v8, pszFilename);
  v9 = 0;
  if ( g_pFullFileSystem != 0 )
    v9 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v8, v9, pszFilename, "GAME", 0) )
  {
    (*(this->_vptr_IGameSystem + 40))(this, v8, pPlayer, pNotify);
    if ( v8 != 0 )
    {
      KeyValues::~KeyValues(v8);
      KeyValues::operator delete(v8);
    }
  }
  else
  {
    KeyValues::deleteThis(v8);
    Warning("Couldn't Find Stats Definition in file %s\n", pszFilename);
  }
}


// CDOTA_CombatAnalyzer::ParseQueriesFromKV  (line 126, @0x00000000024625c0, libserver.so)
void __fastcall CDOTA_CombatAnalyzer::ParseQueriesFromKV(
        CDOTA_CombatAnalyzer *const this,
        KeyValues *pKV,
        CDOTAPlayer *pPlayer,
        ICombatAnalyzerQueryUpdateNotify *pNotify)
{
  ;
}


// test_compendium_stats  (line 132, @0x000000000246c650, libserver.so)  // inlines: Arg, ToDOTAPlayer, operator[]
// calls: UTIL_GetCommandClient, CDOTA_CombatAnalyzer::LoadQueriesFromFile, Warning
// strings: "Please specify the filename containing your stats definition.\n"
// globals: g_DOTACombatAnalyzer
void __fastcall test_compendium_stats(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v4; // r12
  CDOTAPlayer *v5; // rdx
  const char *v6; // rsi

  if ( args->m_nArgc <= 1 )
  {
    Warning("Please specify the filename containing your stats definition.\n");
  }
  else
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
      v5 = v4;
    else
      v5 = 0;
    v6 = "";
    if ( args->m_nArgc > 1 )
      v6 = args->m_ppArgv[1];
    CDOTA_CombatAnalyzer::LoadQueriesFromFile(&g_DOTACombatAnalyzer, v6, v5, 0);
  }
}


// test_compendium_endgame_stats  (line 145, @0x00000000024625d0, libserver.so)
void __fastcall test_compendium_endgame_stats(const CCommandContext *const ctx, const CCommand *const args)
{
  ;
}


// GetStorageForKey  (line 151, @0x000000000246c6d0, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp
// callers: CDOTA_RealtimeCombatAnalyzer::ParseStorage
// strings: "derive_from_storage", "gpm", "xpm", "assists", "last_hits", "obs_wards_placed" (11 total)
event_storage_types_t __fastcall GetStorageForKey(const char *pszStorage)
{
  event_storage_types_t result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  result = event_storage_types_t::EVENT_STORAGE_FROM_STORAGE;
  if ( pszStorage != "derive_from_storage" && strcmp(pszStorage, "derive_from_storage") != 0 )
  {
    if ( pszStorage == "target" )
      return event_storage_types_t::EVENT_STORAGE_TARGET_NAME;
    result = event_storage_types_t::EVENT_STORAGE_TARGET_NAME;
    if ( strcmp(pszStorage, "target") != 0 )
    {
      if ( pszStorage == "attacker" )
        return event_storage_types_t::EVENT_STORAGE_ATTACKER_NAME;
      LOBYTE(result) = 1;
      if ( strcmp(pszStorage, "attacker") != 0 && pszStorage != "caster" && strcmp(pszStorage, "caster") != 0 )
      {
        if ( pszStorage == "inflictor" )
          return event_storage_types_t::EVENT_STORAGE_INFLICTOR_NAME;
        result = event_storage_types_t::EVENT_STORAGE_INFLICTOR_NAME;
        if ( strcmp(pszStorage, "inflictor") == 0 )
          return result;
        if ( pszStorage == "modifier" )
          return event_storage_types_t::EVENT_STORAGE_INFLICTOR_NAME;
        if ( strcmp(pszStorage, "modifier") != 0
          && pszStorage != "item"
          && strcmp(pszStorage, "item") != 0
          && pszStorage != "ability"
          && strcmp(pszStorage, "ability") != 0 )
        {
          if ( pszStorage == "gpm" )
          {
            return event_storage_types_t::EVENT_STORAGE_GPM;
          }
          else
          {
            result = event_storage_types_t::EVENT_STORAGE_GPM;
            if ( strcmp(pszStorage, "gpm") != 0 )
            {
              if ( pszStorage == "xpm" )
              {
                return event_storage_types_t::EVENT_STORAGE_XPM;
              }
              else
              {
                LOBYTE(result) = 4;
                if ( strcmp(pszStorage, "xpm") != 0 )
                {
                  if ( pszStorage == "kills" )
                  {
                    return event_storage_types_t::EVENT_STORAGE_KILLS;
                  }
                  else
                  {
                    LOBYTE(result) = 5;
                    if ( strcmp(pszStorage, "kills") != 0 )
                    {
                      if ( pszStorage == "deaths" )
                      {
                        return event_storage_types_t::EVENT_STORAGE_DEATHS;
                      }
                      else
                      {
                        LOBYTE(result) = 6;
                        if ( strcmp(pszStorage, "deaths") != 0 )
                        {
                          if ( pszStorage == "assists" )
                          {
                            return event_storage_types_t::EVENT_STORAGE_ASSISTS;
                          }
                          else
                          {
                            LOBYTE(result) = 7;
                            if ( strcmp(pszStorage, "assists") != 0 )
                            {
                              if ( pszStorage == "last_hits" )
                              {
                                return event_storage_types_t::EVENT_STORAGE_LAST_HITS;
                              }
                              else
                              {
                                v3 = strcmp(pszStorage, "last_hits");
                                result = event_storage_types_t::EVENT_STORAGE_LAST_HITS;
                                if ( v3 != 0 )
                                {
                                  if ( pszStorage == "value" )
                                  {
                                    return event_storage_types_t::EVENT_STORAGE_VALUE;
                                  }
                                  else
                                  {
                                    v4 = strcmp(pszStorage, "value");
                                    result = event_storage_types_t::EVENT_STORAGE_VALUE;
                                    if ( v4 != 0 )
                                    {
                                      if ( pszStorage == "obs_wards_placed" )
                                      {
                                        return event_storage_types_t::EVENT_STORAGE_OBS_WARDS_PLACED;
                                      }
                                      else
                                      {
                                        v5 = strcmp(pszStorage, "obs_wards_placed");
                                        result = event_storage_types_t::EVENT_STORAGE_OBS_WARDS_PLACED;
                                        if ( v5 != 0 )
                                        {
                                          if ( pszStorage == "stack_count" )
                                          {
                                            return event_storage_types_t::EVENT_STORAGE_STACK_COUNT;
                                          }
                                          else
                                          {
                                            v6 = strcmp(pszStorage, "stack_count");
                                            result = event_storage_types_t::EVENT_STORAGE_STACK_COUNT;
                                            if ( v6 != 0 )
                                            {
                                              if ( pszStorage == "duration" )
                                              {
                                                return event_storage_types_t::EVENT_STORAGE_DURATION;
                                              }
                                              else
                                              {
                                                v7 = strcmp(pszStorage, "duration");
                                                result = event_storage_types_t::EVENT_STORAGE_DURATION;
                                                if ( v7 != 0 )
                                                {
                                                  if ( pszStorage == "stun_duration" )
                                                  {
                                                    return event_storage_types_t::EVENT_STORAGE_STUN_DURATION;
                                                  }
                                                  else
                                                  {
                                                    v8 = strcmp(pszStorage, "stun_duration");
                                                    result = event_storage_types_t::EVENT_STORAGE_STUN_DURATION;
                                                    if ( v8 != 0 )
                                                    {
                                                      if ( pszStorage == "elapsed_duration" )
                                                      {
                                                        return event_storage_types_t::EVENT_STORAGE_ELAPSED_DURATION;
                                                      }
                                                      else
                                                      {
                                                        v9 = strcmp(pszStorage, "elapsed_duration");
                                                        result = event_storage_types_t::EVENT_STORAGE_ELAPSED_DURATION;
                                                        if ( v9 != 0 )
                                                        {
                                                          if ( pszStorage == "networth" )
                                                          {
                                                            return event_storage_types_t::EVENT_STORAGE_NETWORTH;
                                                          }
                                                          else
                                                          {
                                                            v10 = strcmp(pszStorage, "networth");
                                                            result = event_storage_types_t::EVENT_STORAGE_NETWORTH;
                                                            if ( v10 != 0 )
                                                            {
                                                              if ( pszStorage == "game_time" )
                                                              {
                                                                return event_storage_types_t::EVENT_STORAGE_GAME_TIME;
                                                              }
                                                              else
                                                              {
                                                                v11 = strcmp(pszStorage, "game_time");
                                                                result = event_storage_types_t::EVENT_STORAGE_GAME_TIME;
                                                                if ( v11 != 0 )
                                                                {
                                                                  if ( pszStorage == "support_gold_spent" )
                                                                  {
                                                                    return event_storage_types_t::EVENT_STORAGE_SUPPORT_GOLD_SPENT;
                                                                  }
                                                                  else
                                                                  {
                                                                    v12 = strcmp(pszStorage, "support_gold_spent");
                                                                    result = event_storage_types_t::EVENT_STORAGE_SUPPORT_GOLD_SPENT;
                                                                    if ( v12 != 0 )
                                                                    {
                                                                      if ( pszStorage == "hero_level" )
                                                                      {
                                                                        return event_storage_types_t::EVENT_STORAGE_HERO_LEVEL;
                                                                      }
                                                                      else
                                                                      {
                                                                        v13 = strcmp(pszStorage, "hero_level");
                                                                        result = event_storage_types_t::EVENT_STORAGE_HERO_LEVEL;
                                                                        if ( v13 != 0 )
                                                                        {
                                                                          if ( pszStorage == "highest_killed_enemy_player_kill_count"
                                                                            || strcmp(
                                                                                 pszStorage,
                                                                                 "highest_killed_enemy_player_kill_count") == 0 )
                                                                          {
                                                                            return event_storage_types_t::EVENT_STORAGE_HIGHEST_KILLED_ENEMY_PLAYER_KILL_COUNT;
                                                                          }
                                                                          else
                                                                          {
                                                                            return event_storage_types_t::EVENT_STORAGE_TARGET_INVALID;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// CombatLogQuery::CombatLogQuery  (line 201, @0x000000000247f590, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, ResetDbgInfo
// callers: CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery
void __fastcall CombatLogQuery::CombatLogQuery(CombatLogQuery *const this)
{
  this->m_PostMatchStorageMap.m_Tree.m_LastAlloc.index = -1;
  this->m_Name.m_pString = 0;
  this->m_Events.m_Size = 0;
  this->m_Events.m_Memory.m_pMemory = 0;
  this->m_Events.m_Memory.m_nAllocationCount = 0;
  this->m_Events.m_Memory.m_nGrowSize = 0;
  this->m_EventSeparators.m_Size = 0;
  this->m_EventSeparators.m_Memory.m_pMemory = 0;
  this->m_EventSeparators.m_Memory.m_nAllocationCount = 0;
  this->m_EventSeparators.m_Memory.m_nGrowSize = 0;
  this->m_EventStorageMaps.m_Size = 0;
  this->m_EventStorageMaps.m_Memory.m_pMemory = 0;
  this->m_EventStorageMaps.m_Memory.m_nAllocationCount = 0;
  this->m_EventStorageMaps.m_Memory.m_nGrowSize = 0;
  this->m_PostMatchStorageMap.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_PostMatchStorageMap.m_Tree.m_Elements.m_pMemory = 0;
  this->m_PostMatchStorageMap.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_PostMatchStorageMap.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_PostMatchStorageMap.m_Tree.m_Root = -1;
  this->m_PostMatchStorageMap.m_Tree.m_NumElements = 0;
  this->m_PostMatchStorageMap.m_Tree.m_FirstFree = -1;
  this->m_PostMatchStorageMap.m_Tree.m_pElements = 0;
  this->m_PostStorageTests.m_Size = 0;
  this->m_PostStorageTests.m_Memory.m_pMemory = 0;
  this->m_PostStorageTests.m_Memory.m_nAllocationCount = 0;
  this->m_PostStorageTests.m_Memory.m_nGrowSize = 0;
  this->m_PostMatchIncrementsPreStorageTests.m_Size = 0;
  this->m_PostMatchIncrementsPreStorageTests.m_Memory.m_pMemory = 0;
  this->m_PostMatchIncrementsPreStorageTests.m_Memory.m_nAllocationCount = 0;
  this->m_PostMatchIncrementsPreStorageTests.m_Memory.m_nGrowSize = 0;
  this->m_QueryStorage.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_QueryStorage.m_Tree.m_Elements.m_pMemory = 0;
  this->m_QueryStorage.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_QueryStorage.m_Tree.m_Root = -1;
  this->m_QueryStorage.m_Tree.m_NumElements = 0;
  this->m_QueryStorage.m_Tree.m_FirstFree = -1;
  this->m_QueryStorage.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_QueryStorage.m_Tree.m_LastAlloc.index = -1;
  this->m_QueryStorage.m_Tree.m_pElements = 0;
  this->m_vecClearStorageIndicesPerQuery.m_Size = 0;
  this->m_vecClearStorageIndicesPerQuery.m_Memory.m_pMemory = 0;
  this->m_vecClearStorageIndicesPerQuery.m_Memory.m_nAllocationCount = 0;
  this->m_vecClearStorageIndicesPerQuery.m_Memory.m_nGrowSize = 0;
  this->m_vecClearStorageIndicesPerTrigger.m_Size = 0;
  this->m_vecClearStorageIndicesPerTrigger.m_Memory.m_pMemory = 0;
  this->m_vecClearStorageIndicesPerTrigger.m_Memory.m_nAllocationCount = 0;
  this->m_vecClearStorageIndicesPerTrigger.m_Memory.m_nGrowSize = 0;
  this->m_vecAccumulatedEvents.m_Size = 0;
  this->m_vecAccumulatedEvents.m_Memory.m_pMemory = 0;
  this->m_vecAccumulatedEvents.m_Memory.m_nAllocationCount = 0;
  this->m_vecAccumulatedEvents.m_Memory.m_nGrowSize = 0;
  this->m_MultiQueryIdentifier.m_pString = 0;
  this->m_RankedQueryIdentifier.m_pString = 0;
  this->m_pNotify = 0;
  *(this + 340) &= ~4u;
}


// CombatLogQuery::~CombatLogQuery  (line 206, @0x000000000247f7a0, libserver.so)  // inlines: Destruct<CUtlMap<int, event_storage_t> >, Element, Purge, PurgeAndDeleteElements, RemoveAll, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<ICLSearchFields*, int>::Purge, CUtlString::FreeMemoryBlock, CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlMap<int, event_storage_t>::Node_t, short unsigned int, CUtlMap<int, event_storage_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, event_storage_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, event_storage_t>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<AccumulatedEvent_t, int>::Purge, CUtlMemory<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, int>::Purge, CUtlMemory<float, int>::Purge, CUtlMemory<int, int>::Purge, CUtlMemory<comparison_test_t, int>::Purge
// callers: CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer, CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID, CDOTA_RealtimeCombatAnalyzer::GameInit, CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
void __fastcall CombatLogQuery::~CombatLogQuery(CombatLogQuery *const this)
{
  __int64 v1; // r13
  int i; // r12d
  ICLSearchFields *v4; // rdi
  bool v5; // zf
  int m_Size; // r13d
  __int64 j; // r14
  CUtlRBTree<CUtlMap<int,event_storage_t>::Node_t,short unsigned int,CUtlMap<int,event_storage_t>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t>::Node_t,short unsigned int>,short unsigned int> > *v8; // r12
  uint32 m_nGrowSize; // edx
  CUtlVectorBase<ICLSearchFields*,CUtlMemory<ICLSearchFields*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-38h]

  v1 = 0;
  for ( i = 0; i < this->m_Events.m_Size; ++v1 )
  {
    v4 = this->m_Events.m_Memory.m_pMemory[v1];
    if ( v4 != 0 )
      (*(v4->_vptr_ICLSearchFields + 1))(v4);
    ++i;
  }
  v5 = (this->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Events.m_Size = 0;
  p_m_Memory = &this->m_Events.m_Memory;
  if ( v5 )
    CUtlMemory<ICLSearchFields *,int>::Purge(p_m_Memory);
  if ( this->m_RankedQueryIdentifier.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_RankedQueryIdentifier);
  if ( this->m_MultiQueryIdentifier.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_MultiQueryIdentifier);
  v5 = (this->m_vecAccumulatedEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecAccumulatedEvents.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<AccumulatedEvent_t,int>::Purge(&this->m_vecAccumulatedEvents.m_Memory);
    if ( (this->m_vecAccumulatedEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<AccumulatedEvent_t,int>::Purge(&this->m_vecAccumulatedEvents.m_Memory);
  }
  v5 = (this->m_vecClearStorageIndicesPerTrigger.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecClearStorageIndicesPerTrigger.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<int,int>::Purge(&this->m_vecClearStorageIndicesPerTrigger.m_Memory);
    if ( (this->m_vecClearStorageIndicesPerTrigger.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_vecClearStorageIndicesPerTrigger.m_Memory);
  }
  v5 = (this->m_vecClearStorageIndicesPerQuery.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecClearStorageIndicesPerQuery.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<int,int>::Purge(&this->m_vecClearStorageIndicesPerQuery.m_Memory);
    if ( (this->m_vecClearStorageIndicesPerQuery.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_vecClearStorageIndicesPerQuery.m_Memory);
  }
  CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_QueryStorage.m_Tree);
  if ( (this->m_QueryStorage.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_QueryStorage.m_Tree.m_Elements);
  v5 = (this->m_PostMatchIncrementsPreStorageTests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PostMatchIncrementsPreStorageTests.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<comparison_test_t,int>::Purge(&this->m_PostMatchIncrementsPreStorageTests.m_Memory);
    if ( (this->m_PostMatchIncrementsPreStorageTests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<comparison_test_t,int>::Purge(&this->m_PostMatchIncrementsPreStorageTests.m_Memory);
  }
  v5 = (this->m_PostStorageTests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PostStorageTests.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<comparison_test_t,int>::Purge(&this->m_PostStorageTests.m_Memory);
    if ( (this->m_PostStorageTests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<comparison_test_t,int>::Purge(&this->m_PostStorageTests.m_Memory);
  }
  CUtlRBTree<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_PostMatchStorageMap.m_Tree);
  v5 = (this->m_PostMatchStorageMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_PostMatchStorageMap.m_Tree.m_FirstFree = -1;
  if ( v5 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PostMatchStorageMap.m_Tree.m_Elements);
    v5 = (this->m_PostMatchStorageMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_PostMatchStorageMap.m_Tree.m_LastAlloc.index = -1;
    if ( v5 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PostMatchStorageMap.m_Tree.m_Elements);
  }
  else
  {
    this->m_PostMatchStorageMap.m_Tree.m_LastAlloc.index = -1;
  }
  m_Size = this->m_EventStorageMaps.m_Size;
  for ( j = 40LL * m_Size - 40; --m_Size >= 0; j -= 40 )
  {
    v8 = (&this->m_EventStorageMaps.m_Memory.m_pMemory->m_Tree + j);
    CUtlRBTree<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(v8);
    v5 = (v8->m_Elements.m_nGrowSize & 0xC0000000) == 0;
    v8->m_FirstFree = -1;
    if ( v5 )
    {
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v8->m_Elements);
      m_nGrowSize = v8->m_Elements.m_nGrowSize;
      v8->m_LastAlloc.index = -1;
      if ( (m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v8->m_Elements);
    }
    else
    {
      v8->m_LastAlloc.index = -1;
    }
  }
  v5 = (this->m_EventStorageMaps.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_EventStorageMaps.m_Size = 0;
  if ( !v5
    || (CUtlMemory<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>,int>::Purge(&this->m_EventStorageMaps.m_Memory),
        (this->m_EventStorageMaps.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v5 = (this->m_EventSeparators.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_EventSeparators.m_Size = 0;
    if ( !v5 )
      goto LABEL_29;
  }
  else
  {
    CUtlMemory<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>,int>::Purge(&this->m_EventStorageMaps.m_Memory);
    v5 = (this->m_EventSeparators.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_EventSeparators.m_Size = 0;
    if ( !v5 )
      goto LABEL_29;
  }
  CUtlMemory<float,int>::Purge(&this->m_EventSeparators.m_Memory);
  if ( (this->m_EventSeparators.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_29:
    v5 = (this->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Events.m_Size = 0;
    if ( !v5 )
      goto LABEL_30;
    goto LABEL_38;
  }
  CUtlMemory<float,int>::Purge(&this->m_EventSeparators.m_Memory);
  v5 = (this->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Events.m_Size = 0;
  if ( !v5 )
    goto LABEL_30;
LABEL_38:
  CUtlMemory<ICLSearchFields *,int>::Purge(p_m_Memory);
  if ( (this->m_Events.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_30:
    if ( this->m_Name.m_pString == 0 )
      return;
LABEL_31:
    CUtlString::FreeMemoryBlock(&this->m_Name);
    return;
  }
  CUtlMemory<ICLSearchFields *,int>::Purge(p_m_Memory);
  if ( this->m_Name.m_pString != 0 )
    goto LABEL_31;
}


// CDOTA_RealtimeCombatAnalyzer::CDOTA_RealtimeCombatAnalyzer  (line 213, @0x000000000246cb60, libserver.so)  // inlines: CDOTA_CombatAnalyzer, CUtlMemory, CUtlVector, CUtlVectorBase
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
void __fastcall CDOTA_RealtimeCombatAnalyzer::CDOTA_RealtimeCombatAnalyzer(CDOTA_RealtimeCombatAnalyzer *const this)
{
  this->m_pParsingPlayer = 0;
  this->_vptr_IGameSystem = off_40DE870;
  this->m_vecQueries.m_Size = 0;
  this->m_vecQueries.m_Memory.m_pMemory = 0;
  this->m_vecQueries.m_Memory.m_nAllocationCount = 0;
  this->m_vecQueries.m_Memory.m_nGrowSize = 0;
  this->m_queuedQueriesToRemove.m_Size = 0;
  this->m_queuedQueriesToRemove.m_Memory.m_pMemory = 0;
  this->m_queuedQueriesToRemove.m_Memory.m_nAllocationCount = 0;
  this->m_queuedQueriesToRemove.m_Memory.m_nGrowSize = 0;
  this->m_bMustQueueQueryRemoval = 0;
}


// CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer  (line 218, @0x000000000247ff70, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CAutoGameSystem, ~CDOTA_CombatAnalyzer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CombatLogQuery::~CombatLogQuery, operator delete, CUtlMemory<CombatLogQuery*, int>::Purge, IGameSystem::~IGameSystem, CUtlMemory<int, int>::Purge
// callers: CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer
void __fastcall CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer(CDOTA_RealtimeCombatAnalyzer *const this)
{
  __int64 v1; // r14
  int v2; // r13d
  int m_Size; // r11d
  CombatLogQuery **m_pMemory; // rax
  CombatLogQuery *v6; // rbx
  bool v7; // zf

  v1 = 0;
  v2 = 0;
  m_Size = this->m_vecQueries.m_Size;
  this->_vptr_IGameSystem = off_40DE870;
  if ( m_Size > 0 )
  {
    do
    {
      m_pMemory = this->m_vecQueries.m_Memory.m_pMemory;
      v6 = m_pMemory[v1];
      if ( v6 != 0 )
      {
        CombatLogQuery::~CombatLogQuery(m_pMemory[v1]);
        operator delete(v6);
      }
      ++v2;
      ++v1;
    }
    while ( v2 < this->m_vecQueries.m_Size );
  }
  v7 = (this->m_vecQueries.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecQueries.m_Size = 0;
  if ( v7 )
    CUtlMemory<CombatLogQuery *,int>::Purge(&this->m_vecQueries.m_Memory);
  v7 = (this->m_queuedQueriesToRemove.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_queuedQueriesToRemove.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<int,int>::Purge(&this->m_queuedQueriesToRemove.m_Memory);
    if ( (this->m_queuedQueriesToRemove.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_queuedQueriesToRemove.m_Memory);
  }
  v7 = (this->m_vecQueries.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecQueries.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CombatLogQuery *,int>::Purge(&this->m_vecQueries.m_Memory);
    if ( (this->m_vecQueries.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CombatLogQuery *,int>::Purge(&this->m_vecQueries.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer  (line 218, @0x0000000002480080, libserver.so)
// calls: CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer, operator delete
void __fastcall CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer(CDOTA_RealtimeCombatAnalyzer *const this)
{
  CDOTA_RealtimeCombatAnalyzer::~CDOTA_RealtimeCombatAnalyzer(this);
  operator delete(this);
}


// CDOTA_RealtimeCombatAnalyzer::GameInit  (line 225, @0x000000000247fed0, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll
// calls: CombatLogQuery::~CombatLogQuery, operator delete, CUtlMemory<CombatLogQuery*, int>::Purge
void __fastcall CDOTA_RealtimeCombatAnalyzer::GameInit(
        CDOTA_RealtimeCombatAnalyzer *const this,
        const EventGameInit_t *const msg)
{
  __int64 v3; // r13
  int v4; // r12d
  int m_Size; // r10d
  CombatLogQuery **m_pMemory; // rax
  CombatLogQuery *v7; // rbx
  bool v8; // zf

  v3 = 0;
  v4 = 0;
  m_Size = this->m_vecQueries.m_Size;
  this->m_nLastLogEntryCount = 0;
  this->m_nNextQueryID = 0;
  if ( m_Size > 0 )
  {
    do
    {
      m_pMemory = this->m_vecQueries.m_Memory.m_pMemory;
      v7 = m_pMemory[v3];
      if ( v7 != 0 )
      {
        CombatLogQuery::~CombatLogQuery(m_pMemory[v3]);
        operator delete(v7);
      }
      ++v4;
      ++v3;
    }
    while ( v4 < this->m_vecQueries.m_Size );
  }
  v8 = (this->m_vecQueries.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecQueries.m_Size = 0;
  if ( v8 )
    CUtlMemory<CombatLogQuery *,int>::Purge(&this->m_vecQueries.m_Memory);
}


// CDOTA_RealtimeCombatAnalyzer::ParseQueriesFromKV  (line 234, @0x0000000002486510, libserver.so)  // inlines: CEntityHandle, CombatQueryDesc_t, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer, KeyValues::GetFirstSubKey, KeyValues::GetName, CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery, KeyValues::GetNextKey, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Loaded %d combat log queries.\n"
// globals: LOG_COMBAT_ANALYZER
void __fastcall CDOTA_RealtimeCombatAnalyzer::ParseQueriesFromKV(
        CDOTA_RealtimeCombatAnalyzer *const this,
        KeyValues *pKV,
        CDOTAPlayer *pPlayer,
        ICombatAnalyzerQueryUpdateNotify *pNotify)
{
  uint32 v8; // r8d
  unsigned __int16 v9; // dx
  int v10; // r9d
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // rax
  KeyValues *i; // rbx
  const char *Name; // rax
  CombatQueryDesc_t desc; // [rsp+0h] [rbp-70h] BYREF

  if ( pPlayer != 0 )
  {
    v8 = pPlayer->m_hAssignedHero.m_Value.m_Index >> 15;
    if ( pPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v9 = 0x7FFF;
      v10 = 0x7FFF;
    }
    else
    {
      v9 = pPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v10 = v9;
    }
    v11 = (v8 << 15) | v9 & 0x7FFF;
    LODWORD(desc.m_pName) = v11;
    if ( (v11 + 2) > 1 )
    {
      v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
      if ( v12 != 0 )
      {
        v13 = &v12[v10 & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        {
          m_pInstance = v13->m_pInstance;
          if ( v13->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer(this, pPlayer);
            desc.m_pPlayer = pPlayer;
            desc.m_bMultiQuery = 0;
            desc.m_pszMultiQueryName = 0;
            desc.m_nProgress = 0;
            desc.m_bRankedQuery = 0;
            desc.m_pszRankedQueryName = 0;
            desc.m_nQueryRank = 1;
            desc.m_pNotify = pNotify;
            for ( i = KeyValues::GetFirstSubKey(pKV); i != 0; i = KeyValues::GetNextKey(i) )
            {
              Name = KeyValues::GetName(i);
              desc.m_pKV = i;
              desc.m_pName = Name;
              CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery(this, &desc);
            }
            if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
              LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "Loaded %d combat log queries.\n", this->m_vecQueries.m_Size);
          }
        }
      }
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer  (line 267, @0x000000000247fbc0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: CombatLogQuery::~CombatLogQuery, operator delete, CUtlVectorBase<CombatLogQuery*, CUtlMemory<CombatLogQuery*, int> >::Remove, CUtlMemory<int, int>::Grow, Warning
// callers: CDOTAChallengeSystem::ClearChallengeForPlayer, CDOTAChallengeSystem::InternalSetPlayerChallenge, CDOTA_RealtimeCombatAnalyzer::ParseQueriesFromKV, CIngameEvent_WM2016::GoActive
// strings: "Tried to RemoveQueriesForPlayer from an invalid player\n"
void __fastcall CDOTA_RealtimeCombatAnalyzer::RemoveQueriesForPlayer(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CDOTAPlayer *pPlayer)
{
  int v4; // ebx
  __int64 v5; // r12
  int m_nPlayerID; // r13d
  CombatLogQuery **m_pMemory; // rax
  __int64 m_Size; // r13
  CombatLogQuery *v9; // r8
  int v10; // eax
  int *v11; // rax
  CombatLogQuery *v12; // r13
  CombatLogQuery *v13; // [rsp+8h] [rbp-48h]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-40h]
  CUtlVector<CombatLogQuery*,CUtlMemory<CombatLogQuery*,int> > *p_m_vecQueries; // [rsp+18h] [rbp-38h]

  if ( pPlayer == 0 )
  {
    Warning("Tried to RemoveQueriesForPlayer from an invalid player\n");
    return;
  }
  v4 = this->m_vecQueries.m_Size - 1;
  v5 = v4;
  p_m_vecQueries = &this->m_vecQueries;
  p_m_Memory = &this->m_queuedQueriesToRemove.m_Memory;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      m_nPlayerID = this->m_vecQueries.m_Memory.m_pMemory[v5]->m_nPlayerID;
      if ( m_nPlayerID != (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer) )
        goto LABEL_4;
      m_pMemory = this->m_vecQueries.m_Memory.m_pMemory;
      if ( !this->m_bMustQueueQueryRemoval )
      {
        v12 = m_pMemory[v5];
        if ( v12 != 0 )
        {
          CombatLogQuery::~CombatLogQuery(m_pMemory[v5]);
          operator delete(v12);
        }
        CUtlVectorBase<CombatLogQuery *,CUtlMemory<CombatLogQuery *,int>>::Remove(p_m_vecQueries, v4);
        goto LABEL_4;
      }
      m_Size = this->m_queuedQueriesToRemove.m_Size;
      v9 = m_pMemory[v5];
      v10 = this->m_queuedQueriesToRemove.m_Size;
      if ( m_Size == this->m_queuedQueriesToRemove.m_Memory.m_nAllocationCount )
      {
        v13 = v9;
        CUtlMemory<int,int>::Grow(p_m_Memory, 1);
        v10 = this->m_queuedQueriesToRemove.m_Size;
        v9 = v13;
      }
      this->m_queuedQueriesToRemove.m_Size = v10 + 1;
      v11 = &this->m_queuedQueriesToRemove.m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
      {
        --v4;
        --v5;
        *v11 = v9->m_nQueryID;
        if ( v4 == -1 )
          return;
      }
      else
      {
LABEL_4:
        --v4;
        --v5;
        if ( v4 == -1 )
          return;
      }
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID  (line 295, @0x000000000247fda0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: LoggingSystem_IsChannelEnabled, CombatLogQuery::~CombatLogQuery, operator delete, CUtlVectorBase<CombatLogQuery*, CUtlMemory<CombatLogQuery*, int> >::Remove, LoggingSystem_Log, CUtlMemory<int, int>::Grow
// callers: CDOTAChallengeSystem::FireGameEvent, CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis, CDOTAInGamePredictionGameSystem::ClearQueries
// strings: "Query ID %d removed\n"
// globals: LOG_COMBAT_ANALYZER
void __fastcall CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID(CDOTA_RealtimeCombatAnalyzer *const this, int nQueryID)
{
  int v4; // ebx
  CombatLogQuery **m_pMemory; // rcx
  __int64 v6; // r14
  __int64 i; // rax
  CombatLogQuery **v8; // rax
  void *v9; // r12
  __int64 m_Size; // rbx
  int v11; // eax
  int *v12; // rax

  if ( this->m_bMustQueueQueryRemoval )
  {
    m_Size = this->m_queuedQueriesToRemove.m_Size;
    v11 = this->m_queuedQueriesToRemove.m_Size;
    if ( m_Size == this->m_queuedQueriesToRemove.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&this->m_queuedQueriesToRemove.m_Memory, 1);
      v11 = this->m_queuedQueriesToRemove.m_Size;
    }
    this->m_queuedQueriesToRemove.m_Size = v11 + 1;
    v12 = &this->m_queuedQueriesToRemove.m_Memory.m_pMemory[m_Size];
    if ( v12 != 0 )
      *v12 = nQueryID;
  }
  else
  {
    v4 = this->m_vecQueries.m_Size - 1;
    if ( v4 >= 0 )
    {
      m_pMemory = this->m_vecQueries.m_Memory.m_pMemory;
      v6 = 8LL * v4;
      if ( (*(m_pMemory + v6))->m_nQueryID == nQueryID )
      {
LABEL_10:
        if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
          LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "Query ID %d removed\n", nQueryID);
        v8 = this->m_vecQueries.m_Memory.m_pMemory;
        v9 = *(v8 + v6);
        if ( v9 != 0 )
        {
          CombatLogQuery::~CombatLogQuery(*(v8 + v6));
          operator delete(v9);
        }
        CUtlVectorBase<CombatLogQuery *,CUtlMemory<CombatLogQuery *,int>>::Remove(&this->m_vecQueries, v4);
      }
      else
      {
        for ( i = v6 - 8; --v4 != -1; i -= 8 )
        {
          if ( (*(m_pMemory + i))->m_nQueryID == nQueryID )
          {
            v6 = i;
            goto LABEL_10;
          }
        }
      }
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery  (line 329, @0x0000000002484350, libserver.so)  // inlines: AddToTail, CopyConstruct<CombatLogQuery*>, CopyConstruct<int>, Element, Find, GetBool, GrowMemory, Insert, InsertOrReplace, SetDefLessFunc<CUtlMap<int, float> >, SetLessFunc, atoi, operator[]
// calls: operator new, CombatLogQuery::CombatLogQuery, CUtlString::operator=, KeyValues::GetString, StringFieldToInt, KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, strtol, KeyValues::GetFloat (26 total)
// callers: CDOTAChallengeSystem::GenerateBasicQuery, CDOTAChallengeSystem::GenerateMultiQuery, CDOTAChallengeSystem::GenerateRankedQuery, CDOTAChallengeSystem::GenerateRankedMultiQuery, CDOTA_RealtimeCombatAnalyzer::ParseQueriesFromKV, CDOTAInGamePredictionGameSystem::StartInGamePredictionAnalysis
// strings: "linear_series", "matching_type", "never_match_queries", "clear_storage_per_query", "clear_storage_per_trigger_or_pre_test_pass", "progress_stored_in" (19 total)
// globals: g_szQueryEventMatchingTypes, LOG_COMBAT_ANALYZER, CDefOps<int>::LessFunc(int const&,int const&)
int __fastcall CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery(
        CDOTA_RealtimeCombatAnalyzer *const this,
        const CombatQueryDesc_t *const desc)
{
  CDOTAPlayer *m_pPlayer; // rax
  KeyValues *m_pKV; // r14
  CombatLogQuery *v6; // rbx
  int m_Size; // eax
  __int64 v8; // rdx
  CombatLogQuery **v9; // rax
  CombatLogQuery **v10; // rdx
  CombatLogQuery *v11; // rbx
  const char *String; // rax
  KeyValues *Key; // rax
  const KeyValues *v14; // r15
  KeyValues *i; // r15
  const char *Name; // rax
  int v17; // eax
  int Int; // eax
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  int *v22; // rax
  KeyValues *v23; // rax
  const KeyValues *v24; // r15
  KeyValues *j; // r15
  const char *v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // r8d
  __int64 v30; // rax
  int v31; // edx
  int *v32; // rax
  int v33; // eax
  float v34; // xmm1_4
  float Float; // xmm0_4
  KeyValues *v36; // rax
  KeyValues *v37; // rax
  int m_nMatchingType; // edx
  KeyValues *v39; // rax
  char *v41; // rcx
  int v42; // eax
  unsigned __int16 v43; // ax
  const char *v44; // rax
  unsigned __int16 v45; // ax
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t m_nProgressStorageIndex; // eax
  int v47; // [rsp+10h] [rbp-50h]
  int v48; // [rsp+10h] [rbp-50h]
  int v49; // [rsp+14h] [rbp-4Ch]
  int v50; // [rsp+18h] [rbp-48h]
  int v51; // [rsp+18h] [rbp-48h]
  float m_nProgress; // [rsp+18h] [rbp-48h]
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  m_pPlayer = desc->m_pPlayer;
  if ( m_pPlayer == 0 )
  {
    Warning("Tried to ParseAndAddQuery from an invalid player\n");
    return -1;
  }
  this->m_pParsingPlayer = m_pPlayer;
  m_pKV = desc->m_pKV;
  v6 = operator new(0x158u);
  CombatLogQuery::CombatLogQuery(v6);
  m_Size = this->m_vecQueries.m_Size;
  v49 = m_Size;
  if ( m_Size == this->m_vecQueries.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CombatLogQuery *,int>::Grow(&this->m_vecQueries.m_Memory, 1);
    m_Size = this->m_vecQueries.m_Size;
  }
  this->m_vecQueries.m_Size = m_Size + 1;
  v8 = v49;
  v9 = &this->m_vecQueries.m_Memory.m_pMemory[v8];
  if ( v9 != 0 )
  {
    *v9 = v6;
    v10 = &this->m_vecQueries.m_Memory.m_pMemory[v8];
  }
  else
  {
    v10 = 0;
  }
  v11 = *v10;
  if ( (*v10)->m_QueryStorage.m_Tree.m_LessFunc.m_LessFunc == 0 )
    v11->m_QueryStorage.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
  v11->m_nPlayerID = (*(desc->m_pPlayer->_vptr_IHandleEntity + 393))(desc->m_pPlayer);
  CUtlString::operator=(&v11->m_Name, desc->m_pName);
  v11->m_pNotify = desc->m_pNotify;
  *(v11 + 340) = (2 * desc->m_bMultiQuery) | *(v11 + 340) & 0xFD;
  CUtlString::operator=(&v11->m_MultiQueryIdentifier, desc->m_pszMultiQueryName);
  *(v11 + 340) = (8 * desc->m_bRankedQuery) | *(v11 + 340) & 0xF7;
  CUtlString::operator=(&v11->m_RankedQueryIdentifier, desc->m_pszRankedQueryName);
  v11->m_nQueryRank = desc->m_nQueryRank;
  String = KeyValues::GetString(m_pKV, "matching_type", "linear_series", 0, 0);
  v11->m_nMatchingType = StringFieldToInt(String, g_szQueryEventMatchingTypes, 5, 0, 0);
  *(v11 + 340) = (4 * (KeyValues::GetInt(m_pKV, "never_match_queries", 0) != 0)) | *(v11 + 340) & 0xFB;
  Key = KeyValues::FindKey(m_pKV, "clear_storage_per_query", 0);
  v14 = Key;
  if ( Key != 0 && KeyValues::GetFirstSubKey(Key) != 0 )
  {
    *(v11 + 340) &= ~1u;
    for ( i = KeyValues::GetFirstSubKey(v14); i != 0; i = KeyValues::GetNextKey(i) )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(i);
        v17 = strtol(Name, 0, 10);
        if ( v17 != 0 )
        {
          v50 = v17;
          Int = KeyValues::GetInt(i, 0, 0);
          v19 = v50;
          if ( Int != 0 )
          {
            v20 = v11->m_vecClearStorageIndicesPerQuery.m_Size;
            if ( v20 == v11->m_vecClearStorageIndicesPerQuery.m_Memory.m_nAllocationCount )
            {
              v47 = v11->m_vecClearStorageIndicesPerQuery.m_Size;
              CUtlMemory<int,int>::Grow(&v11->m_vecClearStorageIndicesPerQuery.m_Memory, 1);
              v21 = v11->m_vecClearStorageIndicesPerQuery.m_Size;
              v20 = v47;
              v19 = v50;
            }
            else
            {
              v21 = v11->m_vecClearStorageIndicesPerQuery.m_Size;
            }
            v11->m_vecClearStorageIndicesPerQuery.m_Size = v21 + 1;
            v22 = &v11->m_vecClearStorageIndicesPerQuery.m_Memory.m_pMemory[v20];
            if ( v22 != 0 )
              break;
          }
        }
        i = KeyValues::GetNextKey(i);
        if ( i == 0 )
          goto LABEL_19;
      }
      *v22 = v19;
    }
  }
  else
  {
    *(v11 + 340) = (KeyValues::GetInt(m_pKV, "clear_storage_per_query", 0) != 0) | *(v11 + 340) & 0xFE;
  }
LABEL_19:
  v23 = KeyValues::FindKey(m_pKV, "clear_storage_per_trigger_or_pre_test_pass", 0);
  v24 = v23;
  if ( v23 != 0 && KeyValues::GetFirstSubKey(v23) != 0 )
  {
    for ( j = KeyValues::GetFirstSubKey(v24); j != 0; j = KeyValues::GetNextKey(j) )
    {
      while ( 1 )
      {
        v26 = KeyValues::GetName(j);
        v27 = strtol(v26, 0, 10);
        if ( v27 != 0 )
        {
          v51 = v27;
          v28 = KeyValues::GetInt(j, 0, 0);
          v29 = v51;
          if ( v28 != 0 )
          {
            v30 = v11->m_vecClearStorageIndicesPerTrigger.m_Size;
            if ( v30 == v11->m_vecClearStorageIndicesPerTrigger.m_Memory.m_nAllocationCount )
            {
              v48 = v11->m_vecClearStorageIndicesPerTrigger.m_Size;
              CUtlMemory<int,int>::Grow(&v11->m_vecClearStorageIndicesPerTrigger.m_Memory, 1);
              v31 = v11->m_vecClearStorageIndicesPerTrigger.m_Size;
              v30 = v48;
              v29 = v51;
            }
            else
            {
              v31 = v11->m_vecClearStorageIndicesPerTrigger.m_Size;
            }
            v11->m_vecClearStorageIndicesPerTrigger.m_Size = v31 + 1;
            v32 = &v11->m_vecClearStorageIndicesPerTrigger.m_Memory.m_pMemory[v30];
            if ( v32 != 0 )
              break;
          }
        }
        j = KeyValues::GetNextKey(j);
        if ( j == 0 )
          goto LABEL_30;
      }
      *v32 = v29;
    }
  }
LABEL_30:
  v33 = KeyValues::GetInt(m_pKV, "progress_stored_in", 0);
  *(v11 + 340) &= ~0x10u;
  v11->m_nProgressStorageIndex = v33;
  Float = KeyValues::GetFloat(m_pKV, "fail_gametime", v34);
  v11->m_flCompletionGameTime = Float;
  if ( Float == 0.0 )
    v11->m_flCompletionGameTime = KeyValues::GetFloat(m_pKV, "success_gametime", 0.0);
  else
    *(v11 + 340) |= 0x10u;
  v11->m_flTimeBlock = 0.0;
  v36 = KeyValues::FindKey(m_pKV, "post_tests", 0);
  if ( v36 != 0 && !CDOTA_RealtimeCombatAnalyzer::ParsePostTests(this, v11, v36) )
    return -1;
  v37 = KeyValues::FindKey(m_pKV, "query", 0);
  if ( v37 != 0 )
  {
    m_nMatchingType = v11->m_nMatchingType;
    if ( m_nMatchingType != 2 )
    {
      if ( m_nMatchingType > 2 )
      {
        if ( m_nMatchingType == 3 )
        {
          CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulate(this, v11, v37);
          goto LABEL_40;
        }
        if ( m_nMatchingType == 4 )
        {
          CDOTA_RealtimeCombatAnalyzer::ParseEvents_GameState(this, v11, v37);
          goto LABEL_40;
        }
LABEL_68:
        CDOTA_RealtimeCombatAnalyzer::ParseEvents_LinearSeries(this, v11, v37);
        goto LABEL_40;
      }
      if ( m_nMatchingType != 1 )
        goto LABEL_68;
    }
    CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulateWithTrigger(this, v11, v37);
  }
LABEL_40:
  v39 = KeyValues::FindKey(m_pKV, "postmatch_increments", 0);
  CDOTA_RealtimeCombatAnalyzer::ParsePostMatchIncrements(this, v11, v39);
  if ( v11->m_nProgressStorageIndex != 0 )
  {
    search.key = v11->m_nProgressStorageIndex;
    v43 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
            &v11->m_QueryStorage.m_Tree,
            &search);
    if ( v43 == 0xFFFF )
    {
      m_nProgress = desc->m_nProgress;
      search.key = v11->m_nProgressStorageIndex;
      v45 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
              &v11->m_QueryStorage.m_Tree,
              &search);
      if ( v45 == 0xFFFF )
      {
        m_nProgressStorageIndex = v11->m_nProgressStorageIndex;
        search.elem = m_nProgress;
        search.key = m_nProgressStorageIndex;
        CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
          &v11->m_QueryStorage.m_Tree,
          &search,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      }
      else
      {
        v11->m_QueryStorage.m_Tree.m_Elements.m_pMemory[v45].m_Data.elem = m_nProgress;
      }
    }
    else
    {
      v11->m_QueryStorage.m_Tree.m_Elements.m_pMemory[v43].m_Data.elem = desc->m_nProgress;
    }
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
  {
    v42 = (*(desc->m_pPlayer->_vptr_IHandleEntity + 393))(desc->m_pPlayer);
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---Added Query for playerID: %d\n", v42);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
  {
    v44 = CUtlString::Get(&v11->m_Name);
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---QueryName: %s\n", v44);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---Query Index: %d\n", v49);
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---MultiQueryIdentifier: %s\n", desc->m_pszMultiQueryName);
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---Progress: %d\n", desc->m_nProgress);
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
  {
    v41 = "FAIL";
    if ( (*(v11 + 340) & 0x10) == 0 )
      v41 = "SUCCEED";
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---Completion GameTime: %f [%s]\n", v41, v11->m_flCompletionGameTime);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---Ranked Query Identifier: %s\n", desc->m_pszRankedQueryName);
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "---Query Rank: %d\n", v11->m_nQueryRank);
  v11->m_nQueryID = this->m_nNextQueryID++;
  return v11->m_nQueryID;
}


// CDOTA_RealtimeCombatAnalyzer::ParseStorage  (line 469, @0x0000000002483a90, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, atoi, operator(), operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetName, strtol, KeyValues::GetString, GetCompendiumStatAggregator, GetStorageForKey, CUtlRBTree<CUtlMap<int, event_storage_t>::Node_t, short unsigned int, CUtlMap<int, event_storage_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, event_storage_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, event_storage_t>::Node_t, short unsigned int, CUtlMap<int, event_storage_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, event_storage_t>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, KeyValues::GetNextKey, Warning
// callers: CDOTA_RealtimeCombatAnalyzer::ParsePostMatchIncrements, CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent, CDOTA_RealtimeCombatAnalyzer::ParseEvents_GameState
// strings: "aggregator", "from_storage_index", "Invalid event storage type specified: %s\n"
void __fastcall CDOTA_RealtimeCombatAnalyzer::ParseStorage(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)> *pMap,
        KeyValues *pKVStorage)
{
  KeyValues *i; // r14
  const char *Name; // rax
  CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v6; // r15d
  const char *String; // r13
  const char *v8; // rax
  CompendiumStatAggregator_t CompendiumStatAggregator; // r12d
  const char *v10; // rax
  int v11; // edx
  event_storage_types_t StorageForKey; // eax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Right; // ax
  char v15; // cl
  bool v16; // zf
  UtlRBTreeNode_t<CUtlMap<int,event_storage_t>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v18; // r15
  unsigned __int16 v19; // ax
  const char *v20; // rax
  int v21; // [rsp-50h] [rbp-50h]
  CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)>::Node_t v22[4]; // [rsp-48h] [rbp-48h] BYREF

  if ( pKVStorage != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(pKVStorage); i != 0; i = KeyValues::GetNextKey(i) )
    {
      Name = KeyValues::GetName(i);
      v6 = strtol(Name, 0, 10);
      if ( KeyValues::GetFirstSubKey(i) != 0 )
      {
        String = KeyValues::GetString(i, "key", "", 0, 0);
        v8 = KeyValues::GetString(i, "aggregator", "", 0, 0);
        CompendiumStatAggregator = GetCompendiumStatAggregator(v8);
        v10 = KeyValues::GetString(i, "from_storage_index", "", 0, 0);
        v11 = strtol(v10, 0, 10);
        StorageForKey = event_storage_types_t::EVENT_STORAGE_INCREMENT;
        if ( CompendiumStatAggregator == CompendiumStatAggregator_t::CSA_INCREMENT )
          goto LABEL_6;
      }
      else
      {
        CompendiumStatAggregator = CompendiumStatAggregator_t::CSA_COUNT;
        v20 = KeyValues::GetString(i, 0, "", 0, 0);
        v11 = 0;
        String = v20;
      }
      v21 = v11;
      StorageForKey = GetStorageForKey(String);
      v11 = v21;
      if ( StorageForKey != event_storage_types_t::EVENT_STORAGE_TARGET_INVALID )
      {
LABEL_6:
        v22[0].elem.nAggregator = CompendiumStatAggregator;
        m_Root = pMap->m_Tree.m_Root;
        v22[0].key = v6;
        v22[0].elem.nType = StorageForKey;
        v22[0].elem.nStorageIndex = v11;
        if ( m_Root != 0xFFFF )
        {
          while ( 1 )
          {
            v16 = pMap->m_Tree.m_LessFunc.m_LessFunc(v22, &pMap->m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
            m_pMemory = pMap->m_Tree.m_Elements.m_pMemory;
            if ( v16 )
            {
              m_Right = m_pMemory[m_Root].m_Right;
              v15 = 0;
              if ( m_Right == 0xFFFF )
              {
LABEL_12:
                v18 = v15;
                v19 = CUtlRBTree<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                        &pMap->m_Tree,
                        v22);
                goto LABEL_13;
              }
            }
            else
            {
              m_Right = m_pMemory[m_Root].m_Left;
              v15 = 1;
              if ( m_Right == 0xFFFF )
                goto LABEL_12;
            }
            m_Root = m_Right;
          }
        }
        m_Root = -1;
        v18 = 0;
        v19 = CUtlRBTree<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                &pMap->m_Tree,
                v22);
LABEL_13:
        CUtlRBTree<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
          &pMap->m_Tree,
          v19,
          m_Root,
          v18);
        ++pMap->m_Tree.m_NumElements;
        continue;
      }
      Warning("Invalid event storage type specified: %s\n", String);
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParsePostMatchIncrements  (line 508, @0x0000000002483c90, libserver.so)  // inlines: AddToTail, GrowMemory, SetDefLessFunc<CUtlMap<int, event_storage_t> >, SetLessFunc, operator[]
// calls: KeyValues::FindKey, CDOTA_RealtimeCombatAnalyzer::ParseStorage, KeyValues::GetFirstSubKey, KeyValues::GetInt, KeyValues::GetString, StringFieldToInt, KeyValues::GetNextKey, CUtlMemory<comparison_test_t, int>::Grow
// callers: CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery
// strings: "pre_storage_test"
// globals: CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CDOTA_RealtimeCombatAnalyzer::ParsePostMatchIncrements(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        KeyValues *pKVPostMatchIncrements)
{
  KeyValues *Key; // rax
  KeyValues *v7; // rax
  KeyValues *i; // r12
  __int64 v9; // r13
  comparison_test_t *v10; // r15
  comparison_test_t *v11; // r15
  const char *String; // rax
  comparison_test_t *v13; // r13
  __int64 m_Size; // r13
  int v15; // eax

  if ( pKVPostMatchIncrements != 0 )
  {
    if ( pQuery->m_PostMatchStorageMap.m_Tree.m_LessFunc.m_LessFunc == 0 )
      pQuery->m_PostMatchStorageMap.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
    Key = KeyValues::FindKey(pKVPostMatchIncrements, "storage", 0);
    CDOTA_RealtimeCombatAnalyzer::ParseStorage(this, &pQuery->m_PostMatchStorageMap, Key);
    v7 = KeyValues::FindKey(pKVPostMatchIncrements, "pre_storage_test", 0);
    if ( v7 != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(v7); i != 0; i = KeyValues::GetNextKey(i) )
      {
        m_Size = pQuery->m_PostMatchIncrementsPreStorageTests.m_Size;
        v15 = pQuery->m_PostMatchIncrementsPreStorageTests.m_Size;
        if ( m_Size == pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<comparison_test_t,int>::Grow(&pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory, 1);
          v15 = pQuery->m_PostMatchIncrementsPreStorageTests.m_Size;
        }
        v9 = m_Size;
        pQuery->m_PostMatchIncrementsPreStorageTests.m_Size = v15 + 1;
        v10 = &pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory.m_pMemory[v9];
        v10->nStorageSlot = KeyValues::GetInt(i, "storage", 0);
        v11 = &pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory.m_pMemory[v9];
        String = KeyValues::GetString(i, "compare", "", 0, 0);
        v11->nComparison = StringFieldToInt(String, g_szScriptedComparisonTypes, 6, -1, 0);
        v13 = &pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory.m_pMemory[v9];
        v13->nAgainst = KeyValues::GetInt(i, "amount", 0);
      }
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent  (line 534, @0x0000000002483e20, libserver.so)  // inlines: AddToHead, GrowMemory, GrowVector, InsertBefore, SetDefLessFunc<CUtlMap<int, event_storage_t> >, SetLessFunc, ShiftElementsRight, V_memmove, memmove, operator[]
// calls: CUtlMemory<ICLSearchFields*, int>::Grow, memmove, CDOTA_CombatAnalyzer::ParseEventSearchFields, CUtlVectorBase<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, CUtlMemory<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, int> >::InsertBefore, KeyValues::FindKey, CDOTA_RealtimeCombatAnalyzer::ParseStorage, Warning
// callers: CDOTA_RealtimeCombatAnalyzer::ParseEvents_LinearSeries, CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulateWithTrigger, CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulate
// strings: "Error found in queries. Aborting.\n"
// globals: CDefOps<int>::LessFunc(int const&,int const&)
bool __fastcall CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        KeyValues *pKV)
{
  __int64 m_Size; // r12
  int m_nAllocationCount; // eax
  int v8; // r13d
  ICLSearchFields **m_pMemory; // r12
  __int64 v10; // r12
  CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)> *v11; // rax
  KeyValues *Key; // rax

  m_Size = pQuery->m_Events.m_Size;
  m_nAllocationCount = pQuery->m_Events.m_Memory.m_nAllocationCount;
  v8 = m_Size + 1;
  if ( m_Size + 1 > m_nAllocationCount )
    CUtlMemory<ICLSearchFields *,int>::Grow(&pQuery->m_Events.m_Memory, v8 - m_nAllocationCount);
  pQuery->m_Events.m_Size = v8;
  if ( m_Size > 0 )
    memmove(pQuery->m_Events.m_Memory.m_pMemory + 1, pQuery->m_Events.m_Memory.m_pMemory, 8 * m_Size);
  m_pMemory = pQuery->m_Events.m_Memory.m_pMemory;
  *m_pMemory = CDOTA_CombatAnalyzer::ParseEventSearchFields(this, pKV);
  if ( *pQuery->m_Events.m_Memory.m_pMemory != 0 )
  {
    v10 = CUtlVectorBase<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>,CUtlMemory<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>,int>>::InsertBefore(
            &pQuery->m_EventStorageMaps,
            0);
    v11 = &pQuery->m_EventStorageMaps.m_Memory.m_pMemory[v10];
    if ( v11->m_Tree.m_LessFunc.m_LessFunc == 0 )
      v11->m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
    Key = KeyValues::FindKey(pKV, "storage", 0);
    CDOTA_RealtimeCombatAnalyzer::ParseStorage(this, &pQuery->m_EventStorageMaps.m_Memory.m_pMemory[v10], Key);
    return 1;
  }
  else
  {
    Warning("Error found in queries. Aborting.\n");
    return 0;
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParseEvents_LinearSeries  (line 557, @0x0000000002483f20, libserver.so)  // inlines: AddToHead, AddToTail, CopyConstruct<float>, Element, GrowMemory, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetString, V_stricmp_fast, CUtlVectorBase<float, CUtlMemory<float, int> >::InsertBefore, KeyValues::GetNextKey, CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent, KeyValues::GetFloat, CUtlMemory<float, int>::Grow
// callers: CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery
void __fastcall CDOTA_RealtimeCombatAnalyzer::ParseEvents_LinearSeries(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        KeyValues *pKV)
{
  char v5; // bl
  KeyValues *FirstSubKey; // r14
  const char *String; // r15
  float v8; // xmm1_4
  __int64 m_Size; // rbx
  int v10; // eax
  float *v11; // rax
  CUtlVector<float,CUtlMemory<float,int> > *p_m_EventSeparators; // [rsp+0h] [rbp-50h]
  float v13[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v5 = 0;
  FirstSubKey = KeyValues::GetFirstSubKey(pKV);
  if ( FirstSubKey != 0 )
  {
    p_m_EventSeparators = &pQuery->m_EventSeparators;
    do
    {
      if ( v5 != 0 )
      {
        String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        if ( V_stricmp_fast(String, "OR") != 0 )
        {
          if ( V_stricmp_fast(String, "AND") != 0 )
            v13[0] = KeyValues::GetFloat(FirstSubKey, 0, v8);
          else
            v13[0] = -2.0;
          CUtlVectorBase<float,CUtlMemory<float,int>>::InsertBefore(p_m_EventSeparators, 0, v13);
        }
        else
        {
          v13[0] = -1.0;
          CUtlVectorBase<float,CUtlMemory<float,int>>::InsertBefore(p_m_EventSeparators, 0, v13);
        }
      }
      else if ( !CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent(this, pQuery, FirstSubKey) )
      {
        return;
      }
      v5 ^= 1u;
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    }
    while ( FirstSubKey != 0 );
  }
  m_Size = pQuery->m_EventSeparators.m_Size;
  if ( m_Size < pQuery->m_Events.m_Size )
  {
    v10 = pQuery->m_EventSeparators.m_Size;
    if ( m_Size == pQuery->m_EventSeparators.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<float,int>::Grow(&pQuery->m_EventSeparators.m_Memory, 1);
      v10 = pQuery->m_EventSeparators.m_Size;
    }
    pQuery->m_EventSeparators.m_Size = v10 + 1;
    v11 = &pQuery->m_EventSeparators.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
      *v11 = 0.0;
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulateWithTrigger  (line 598, @0x00000000024840a0, libserver.so)
// calls: KeyValues::FindKey, CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent, KeyValues::GetFloat, CUtlString::Get, Warning
// callers: CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery
// strings: "accumulate_event", "time_block_after_trigger", "time_block_before_trigger", "Missing or invalid '%s' for %s event %s.\n", "No 'trigger' event specified for %s event %s.\n", "No 'accumulate_event' event specified for %s event %s.\n"
// globals: g_szQueryEventMatchingTypes
void __fastcall CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulateWithTrigger(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        KeyValues *pKV)
{
  KeyValues *Key; // rax
  KeyValues *v7; // rax
  float v8; // xmm1_4
  const char *v9; // r13
  float Float; // xmm0_4
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax

  Key = KeyValues::FindKey(pKV, "trigger", 0);
  if ( Key != 0 )
  {
    if ( CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent(this, pQuery, Key) )
    {
      v7 = KeyValues::FindKey(pKV, "accumulate_event", 0);
      if ( v7 != 0 )
      {
        if ( CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent(this, pQuery, v7) )
        {
          v9 = "time_block_before_trigger";
          if ( pQuery->m_nMatchingType == query_event_matching_types_t::QUERY_EVENT_MATCHINGTYPE_TIMEBLOCK_ACCUMULATE_AFTER_TRIGGER )
            v9 = "time_block_after_trigger";
          Float = KeyValues::GetFloat(pKV, v9, v8);
          pQuery->m_flTimeBlock = Float;
          if ( Float <= 0.0 )
          {
            v11 = CUtlString::Get(&pQuery->m_Name);
            Warning(
              "Missing or invalid '%s' for %s event %s.\n",
              v9,
              g_szQueryEventMatchingTypes[pQuery->m_nMatchingType],
              v11);
          }
        }
      }
      else
      {
        v13 = CUtlString::Get(&pQuery->m_Name);
        Warning(
          "No 'accumulate_event' event specified for %s event %s.\n",
          g_szQueryEventMatchingTypes[pQuery->m_nMatchingType],
          v13);
      }
    }
  }
  else
  {
    v12 = CUtlString::Get(&pQuery->m_Name);
    Warning(
      "No 'trigger' event specified for %s event %s.\n",
      g_szQueryEventMatchingTypes[pQuery->m_nMatchingType],
      v12);
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulate  (line 634, @0x00000000024841f0, libserver.so)
// calls: KeyValues::FindKey, CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent, KeyValues::GetFloat, CUtlString::Get, Warning
// callers: CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery
// strings: "accumulate_event", "time_block", "Missing or invalid 'time_block' for timeblock_accumulate event %s.\n", "No 'accumulate_event' event specified for timeblock_accumulate event %s.\n"
void __fastcall CDOTA_RealtimeCombatAnalyzer::ParseEvents_TimeBlockAccumulate(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        KeyValues *pKV)
{
  KeyValues *Key; // rax
  float v7; // xmm1_4
  float Float; // xmm0_4
  const char *v9; // rax
  const char *v10; // rax

  Key = KeyValues::FindKey(pKV, "accumulate_event", 0);
  if ( Key != 0 )
  {
    if ( CDOTA_RealtimeCombatAnalyzer::ParseSingleEvent(this, pQuery, Key) )
    {
      Float = KeyValues::GetFloat(pKV, "time_block", v7);
      pQuery->m_flTimeBlock = Float;
      if ( Float <= 0.0 )
      {
        v9 = CUtlString::Get(&pQuery->m_Name);
        Warning("Missing or invalid 'time_block' for timeblock_accumulate event %s.\n", v9);
      }
    }
  }
  else
  {
    v10 = CUtlString::Get(&pQuery->m_Name);
    Warning("No 'accumulate_event' event specified for timeblock_accumulate event %s.\n", v10);
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParseEvents_GameState  (line 655, @0x00000000024842a0, libserver.so)  // inlines: AddToHead, SetDefLessFunc<CUtlMap<int, event_storage_t> >, SetLessFunc, operator[]
// calls: KeyValues::FindKey, CUtlVectorBase<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, CUtlMemory<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, int> >::InsertBefore, CDOTA_RealtimeCombatAnalyzer::ParseStorage, CUtlString::Get, Warning
// callers: CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery
// strings: "state_values", "No 'state_values' specified for game state query %s.\n"
// globals: CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CDOTA_RealtimeCombatAnalyzer::ParseEvents_GameState(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        KeyValues *pKV)
{
  KeyValues *Key; // r12
  __int64 v6; // rax
  CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)> *v7; // rsi
  const char *v8; // rax

  Key = KeyValues::FindKey(pKV, "state_values", 0);
  if ( Key != 0 )
  {
    v6 = CUtlVectorBase<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>,CUtlMemory<CUtlMap<int,event_storage_t,unsigned short,bool (*)(int const&,int const&)>,int>>::InsertBefore(
           &pQuery->m_EventStorageMaps,
           0);
    v7 = &pQuery->m_EventStorageMaps.m_Memory.m_pMemory[v6];
    if ( v7->m_Tree.m_LessFunc.m_LessFunc == 0 )
    {
      v7->m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
      v7 = &pQuery->m_EventStorageMaps.m_Memory.m_pMemory[v6];
    }
    CDOTA_RealtimeCombatAnalyzer::ParseStorage(this, v7, Key);
  }
  else
  {
    v8 = CUtlString::Get(&pQuery->m_Name);
    Warning("No 'state_values' specified for game state query %s.\n", v8);
  }
}


// CDOTA_RealtimeCombatAnalyzer::ParsePostTests  (line 671, @0x00000000024800a0, libserver.so)  // inlines: AddToTail, GrowMemory, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetInt, KeyValues::GetString, StringFieldToInt, KeyValues::GetNextKey, CUtlMemory<comparison_test_t, int>::Grow
// callers: CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery
bool __fastcall CDOTA_RealtimeCombatAnalyzer::ParsePostTests(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        KeyValues *pKV)
{
  KeyValues *i; // r12
  __int64 v5; // r13
  comparison_test_t *v6; // r15
  comparison_test_t *v7; // r15
  const char *String; // rax
  comparison_test_t *v9; // r13
  __int64 m_Size; // r13
  int v11; // eax

  for ( i = KeyValues::GetFirstSubKey(pKV); i != 0; i = KeyValues::GetNextKey(i) )
  {
    m_Size = pQuery->m_PostStorageTests.m_Size;
    v11 = pQuery->m_PostStorageTests.m_Size;
    if ( m_Size == pQuery->m_PostStorageTests.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<comparison_test_t,int>::Grow(&pQuery->m_PostStorageTests.m_Memory, 1);
      v11 = pQuery->m_PostStorageTests.m_Size;
    }
    v5 = m_Size;
    pQuery->m_PostStorageTests.m_Size = v11 + 1;
    v6 = &pQuery->m_PostStorageTests.m_Memory.m_pMemory[v5];
    v6->nStorageSlot = KeyValues::GetInt(i, "storage", 0);
    v7 = &pQuery->m_PostStorageTests.m_Memory.m_pMemory[v5];
    String = KeyValues::GetString(i, "compare", "", 0, 0);
    v7->nComparison = StringFieldToInt(String, g_szScriptedComparisonTypes, 6, -1, 0);
    v9 = &pQuery->m_PostStorageTests.m_Memory.m_pMemory[v5];
    v9->nAgainst = KeyValues::GetInt(i, "amount", 0);
  }
  return 1;
}


// CDOTA_RealtimeCombatAnalyzer::FrameUpdatePostEntityThink  (line 690, @0x000000000248b080, libserver.so)
// calls: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
void __fastcall CDOTA_RealtimeCombatAnalyzer::FrameUpdatePostEntityThink(
        CDOTA_RealtimeCombatAnalyzer *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis(this);
}


// CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis  (line 696, @0x000000000248abf0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, DOTAGameRules, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CDOTAGamerules::GetDOTATime, CDOTA_RealtimeCombatAnalyzer::QueryFullyMatched, CombatLogQuery::~CombatLogQuery, operator delete, CUtlVectorBase<CombatLogQuery*, CUtlMemory<CombatLogQuery*, int> >::Remove, Plat_FloatTime, CDOTA_RealtimeCombatAnalyzer::QueryFailed, CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID, CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, int>::Purge, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log (21 total)
// callers: CDOTA_RealtimeCombatAnalyzer::FrameUpdatePostEntityThink, CDOTAInGamePredictionGameSystem::FireGameEvent, CDOTAGCServerSystem::GameRules_State_Enter
// strings: "COMBAT ANALYZER SLOW QUERY: [%.3f]ms %d Log Entries %s\n"
// globals: LOG_COMBAT_ANALYZER
void __fastcall CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis(CDOTA_RealtimeCombatAnalyzer *const this)
{
  int m_Size; // eax
  float DOTATime; // xmm0_4
  int v4; // eax
  int v5; // r13d
  __int64 v6; // r14
  CombatLogQuery **m_pMemory; // rax
  CombatLogQuery *v8; // rbx
  uint32 v9; // eax
  CombatLogQuery *v10; // rbx
  __m128d v11; // xmm0
  query_event_matching_types_t m_nMatchingType; // eax
  bool v13; // r15
  __m128d v14; // xmm0
  char v15; // al
  float m_flCompletionGameTime; // xmm0_4
  int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  int v20; // esi
  bool v21; // zf
  const char *v22; // rax
  bool v23; // al
  int nCurEntries; // [rsp+10h] [rbp-470h]
  int nLogEntryToStartAt; // [rsp+14h] [rbp-46Ch]
  float flDotaTime; // [rsp+28h] [rbp-458h]
  float st; // [rsp+2Ch] [rbp-454h]
  float sta; // [rsp+2Ch] [rbp-454h]
  CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t tempEventsToEntries; // [rsp+30h] [rbp-450h] BYREF
  unsigned __int64 v30; // [rsp+448h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  m_Size = this->m_vecQueries.m_Size;
  if ( m_Size != 0 )
  {
    nCurEntries = g_DOTACombatLog.m_vecEntryReferences.m_Size;
    if ( this->m_nLastLogEntryCount < g_DOTACombatLog.m_vecEntryReferences.m_Size
      && g_DOTACombatLog.m_vecEntryReferences.m_Size != 0 )
    {
      if ( g_pGameRules != 0 )
      {
        DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
        m_Size = this->m_vecQueries.m_Size;
        flDotaTime = DOTATime;
      }
      else
      {
        flDotaTime = 0.0;
      }
      v4 = m_Size - 1;
      this->m_bMustQueueQueryRemoval = 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = v4;
        nLogEntryToStartAt = nCurEntries - 1;
        while ( 1 )
        {
          v10 = this->m_vecQueries.m_Memory.m_pMemory[v6];
          tempEventsToEntries.m_Size = 0;
          tempEventsToEntries.m_Memory.m_nAllocationCount = 128;
          tempEventsToEntries.m_Memory.m_nGrowSize = 0x80000000;
          tempEventsToEntries.m_Memory.m_pMemory = &tempEventsToEntries.m_Memory.m_FixedMemory;
          v11.m128d_f64[0] = Plat_FloatTime();
          m_nMatchingType = v10->m_nMatchingType;
          st = _mm_movedup_pd(v11).m128d_f64[0];
          if ( m_nMatchingType == query_event_matching_types_t::QUERY_EVENT_MATCHINGTYPE_LINEARSERIES )
            break;
          switch ( m_nMatchingType )
          {
            case query_event_matching_types_t::QUERY_EVENT_MATCHINGTYPE_TIMEBLOCK_ACCUMULATE_BEFORE_TRIGGER:
              v23 = CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger(
                      this,
                      &tempEventsToEntries,
                      v10,
                      nLogEntryToStartAt);
              goto LABEL_44;
            case query_event_matching_types_t::QUERY_EVENT_MATCHINGTYPE_TIMEBLOCK_ACCUMULATE_AFTER_TRIGGER:
              v23 = CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger(
                      this,
                      &tempEventsToEntries,
                      v10,
                      nLogEntryToStartAt);
              goto LABEL_44;
            case query_event_matching_types_t::QUERY_EVENT_MATCHINGTYPE_TIMEBLOCK_ACCUMULATE:
              v23 = CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblock(this, &tempEventsToEntries, v10, nLogEntryToStartAt);
              goto LABEL_44;
            default:
              break;
          }
          v13 = 0;
          if ( m_nMatchingType == query_event_matching_types_t::QUERY_EVENT_MATCHINGTYPE_GAMESTATE )
          {
            v23 = CDOTA_RealtimeCombatAnalyzer::EvaluateGameState(this, &tempEventsToEntries, v10);
            goto LABEL_44;
          }
LABEL_24:
          v14.m128d_f64[0] = Plat_FloatTime();
          sta = _mm_movedup_pd(v14).m128d_f64[0] - st;
          if ( sta > 0.0099999998 && LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 2) != 0 )
          {
            v22 = CUtlString::Get(&v10->m_Name);
            LoggingSystem_Log(
              LOG_COMBAT_ANALYZER,
              2,
              "COMBAT ANALYZER SLOW QUERY: [%.3f]ms %d Log Entries %s\n",
              (nCurEntries - this->m_nLastLogEntryCount),
              v22,
              (1000.0 * sta));
          }
          v15 = *(v10 + 340);
          if ( (v15 & 4) == 0 && v13 )
            goto LABEL_9;
          m_flCompletionGameTime = v10->m_flCompletionGameTime;
          if ( m_flCompletionGameTime > 0.0 && flDotaTime != 0.0 && flDotaTime > m_flCompletionGameTime )
          {
            if ( (v15 & 0x10) != 0 )
              CDOTA_RealtimeCombatAnalyzer::QueryFailed(this, v10);
            else
LABEL_9:
              CDOTA_RealtimeCombatAnalyzer::QueryFullyMatched(this, &tempEventsToEntries, v10);
            m_pMemory = this->m_vecQueries.m_Memory.m_pMemory;
            v8 = m_pMemory[v6];
            if ( v8 != 0 )
            {
              CombatLogQuery::~CombatLogQuery(m_pMemory[v6]);
              operator delete(v8);
            }
            CUtlVectorBase<CombatLogQuery *,CUtlMemory<CombatLogQuery *,int>>::Remove(&this->m_vecQueries, v5);
          }
          tempEventsToEntries.m_Size = 0;
          v9 = tempEventsToEntries.m_Memory.m_nGrowSize & 0xC0000000;
          if ( tempEventsToEntries.m_Memory.m_nAllocationCount < 0
            || tempEventsToEntries.m_Memory.m_pMemory == &tempEventsToEntries.m_Memory.m_FixedMemory )
          {
            if ( v9 == 0 )
              CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,int>::Purge(&tempEventsToEntries.m_Memory);
          }
          else if ( tempEventsToEntries.m_Memory.m_pMemory != 0 && v9 == 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          }
          --v5;
          --v6;
          if ( v5 == -1 )
            goto LABEL_31;
        }
        v23 = CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent(
                this,
                &tempEventsToEntries,
                v10,
                0,
                nLogEntryToStartAt,
                0.0,
                -3.0,
                1,
                0);
LABEL_44:
        v13 = v23;
        goto LABEL_24;
      }
LABEL_31:
      v17 = this->m_queuedQueriesToRemove.m_Size;
      this->m_bMustQueueQueryRemoval = 0;
      if ( v17 > 0 )
      {
        v18 = 0;
        v19 = 4LL * (v17 - 1) + 4;
        do
        {
          v20 = this->m_queuedQueriesToRemove.m_Memory.m_pMemory[v18 / 4];
          v18 += 4LL;
          CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID(this, v20);
        }
        while ( v18 != v19 );
      }
      v21 = (this->m_queuedQueriesToRemove.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      this->m_queuedQueriesToRemove.m_Size = 0;
      if ( v21 )
        CUtlMemory<int,int>::Purge(&this->m_queuedQueriesToRemove.m_Memory);
      this->m_nLastLogEntryCount = nCurEntries;
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::PostTestsPass  (line 789, @0x0000000002486e80, libserver.so)  // inlines: Element, Find, operator[]
// calls: CDOTA_RealtimeCombatAnalyzer::PerformPostMatchStorage, EvaluateScriptedComparison, CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_RealtimeCombatAnalyzer::EvaluateGameState, CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblock
bool __fastcall CDOTA_RealtimeCombatAnalyzer::PostTestsPass(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery)
{
  __int64 v3; // r15
  int v4; // r12d
  unsigned __int16 v5; // ax
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  CDOTA_RealtimeCombatAnalyzer::PerformPostMatchStorage(this, pQuery);
  if ( pQuery->m_PostStorageTests.m_Size <= 0 )
    return 1;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    search.key = pQuery->m_PostStorageTests.m_Memory.m_pMemory[v3].nStorageSlot;
    v5 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &pQuery->m_QueryStorage.m_Tree,
           &search);
    if ( v5 == 0xFFFF
      || !EvaluateScriptedComparison(
            pQuery->m_QueryStorage.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem,
            pQuery->m_PostStorageTests.m_Memory.m_pMemory[v3].nAgainst,
            pQuery->m_PostStorageTests.m_Memory.m_pMemory[v3].nComparison) )
    {
      break;
    }
    ++v4;
    ++v3;
    if ( pQuery->m_PostStorageTests.m_Size <= v4 )
      return 1;
  }
  return 0;
}


// CDOTA_RealtimeCombatAnalyzer::PreStorageTestsPass  (line 841, @0x0000000002486d10, libserver.so)  // inlines: Element, Find, operator[]
// calls: EvaluateScriptedComparison, CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Find, CDOTA_RealtimeCombatAnalyzer::PerformTriggerEventStorageCleanup
// callers: CDOTA_RealtimeCombatAnalyzer::PerformPostMatchStorage
bool __fastcall CDOTA_RealtimeCombatAnalyzer::PreStorageTestsPass(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery)
{
  CombatQueryStorage_t *p_m_QueryStorage; // r13
  __int64 v4; // r14
  int v5; // ebx
  unsigned __int16 v6; // ax
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  if ( pQuery->m_PostMatchIncrementsPreStorageTests.m_Size <= 0 )
  {
LABEL_7:
    CDOTA_RealtimeCombatAnalyzer::PerformTriggerEventStorageCleanup(this, pQuery);
    return 1;
  }
  else
  {
    p_m_QueryStorage = &pQuery->m_QueryStorage;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      search.key = pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory.m_pMemory[v4].nStorageSlot;
      v6 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &p_m_QueryStorage->m_Tree,
             &search);
      if ( v6 == 0xFFFF
        || !EvaluateScriptedComparison(
              pQuery->m_QueryStorage.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem,
              pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory.m_pMemory[v4].nAgainst,
              pQuery->m_PostMatchIncrementsPreStorageTests.m_Memory.m_pMemory[v4].nComparison) )
      {
        return 0;
      }
      ++v5;
      ++v4;
      if ( pQuery->m_PostMatchIncrementsPreStorageTests.m_Size <= v5 )
        goto LABEL_7;
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup  (line 894, @0x0000000002486c10, libserver.so)  // inlines: Purge, Remove
// calls: CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Remove, CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge
// callers: CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger
void __fastcall CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery)
{
  __int64 v3; // rbx
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( (*(pQuery + 340) & 1) != 0 )
  {
    CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&pQuery->m_QueryStorage.m_Tree);
  }
  else if ( pQuery->m_vecClearStorageIndicesPerQuery.m_Size > 0 )
  {
    v3 = 0;
    do
    {
      search.key = pQuery->m_vecClearStorageIndicesPerQuery.m_Memory.m_pMemory[v3];
      CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Remove(
        &pQuery->m_QueryStorage.m_Tree,
        &search);
      ++v3;
    }
    while ( v3 < pQuery->m_vecClearStorageIndicesPerQuery.m_Size );
  }
}


// CDOTA_RealtimeCombatAnalyzer::PerformTriggerEventStorageCleanup  (line 909, @0x0000000002486ca0, libserver.so)  // inlines: Remove
// calls: CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Remove
// callers: CDOTA_RealtimeCombatAnalyzer::PreStorageTestsPass, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger
void __fastcall CDOTA_RealtimeCombatAnalyzer::PerformTriggerEventStorageCleanup(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery)
{
  CombatQueryStorage_t *p_m_QueryStorage; // r14
  __int64 v4; // rbx
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pQuery->m_vecClearStorageIndicesPerTrigger.m_Size > 0 )
  {
    p_m_QueryStorage = &pQuery->m_QueryStorage;
    v4 = 0;
    do
    {
      search.key = pQuery->m_vecClearStorageIndicesPerTrigger.m_Memory.m_pMemory[v4];
      CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Remove(
        &p_m_QueryStorage->m_Tree,
        &search);
      ++v4;
    }
    while ( v4 < pQuery->m_vecClearStorageIndicesPerTrigger.m_Size );
  }
}


// CDOTA_RealtimeCombatAnalyzer::PerformPostMatchStorage  (line 918, @0x0000000002486de0, libserver.so)  // inlines: Element, IsIdxValid, IsValidIndex, Key, LeftChild, operator[]
// calls: CDOTA_RealtimeCombatAnalyzer::PreStorageTestsPass, CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal
// callers: CDOTA_RealtimeCombatAnalyzer::PostTestsPass
void __fastcall CDOTA_RealtimeCombatAnalyzer::PerformPostMatchStorage(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery)
{
  int m_nAllocationCount; // eax
  __int64 v5; // r12
  int v6; // ebx
  UtlRBTreeNode_t<CUtlMap<int,event_storage_t>::Node_t,short unsigned int> *m_pMemory; // rdx
  event_storage_t *v8; // rdx

  if ( CDOTA_RealtimeCombatAnalyzer::PreStorageTestsPass(this, pQuery) )
  {
    m_nAllocationCount = pQuery->m_PostMatchStorageMap.m_Tree.m_Elements.m_nAllocationCount;
    if ( m_nAllocationCount != 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        if ( m_nAllocationCount > v6 && v6 <= pQuery->m_PostMatchStorageMap.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = pQuery->m_PostMatchStorageMap.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v6].m_Left != v6 )
          {
            v8 = &m_pMemory[v5];
            if ( (v8[1].nType + 3) <= 1 )
            {
              CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal(this, pQuery, v8 + 1, v8->nStorageIndex, 1.0, 1, 0);
              m_nAllocationCount = pQuery->m_PostMatchStorageMap.m_Tree.m_Elements.m_nAllocationCount;
            }
          }
        }
        ++v6;
        ++v5;
      }
      while ( m_nAllocationCount > v6 );
    }
  }
}


// CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal  (line 947, @0x00000000024866c0, libserver.so)  // inlines: Element, Find, Insert, operator[]
// calls: CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Insert
// callers: CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CDOTA_RealtimeCombatAnalyzer::PerformPostMatchStorage, CDOTA_RealtimeCombatAnalyzer::EvaluateGameState
void __fastcall CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        event_storage_t *pStorageInfo,
        CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t nStorageSlot,
        CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t flNewNumericalValue,
        bool bIsNumerical,
        bool bRemoveStorage)
{
  CombatQueryStorage_t *p_m_QueryStorage; // r12
  unsigned __int16 v11; // ax
  float v12; // xmm0_4
  bool v13; // r8
  UtlRBTreeNode_t<CUtlMap<int,float>::Node_t,short unsigned int> *v14; // rax
  float elem; // xmm1_4
  CompendiumStatAggregator_t nAggregator; // edx
  bool v17; // zf
  ICombatAnalyzerQueryUpdateNotify *m_pNotify; // rdi
  unsigned __int16 v19; // ax
  bool v21; // [rsp+8h] [rbp-48h]
  float flNewNumericalValuea; // [rsp+Ch] [rbp-44h]
  bool flNewNumericalValueb; // [rsp+Ch] [rbp-44h]
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  if ( pStorageInfo->nType == event_storage_types_t::EVENT_STORAGE_FROM_STORAGE )
  {
    p_m_QueryStorage = &pQuery->m_QueryStorage;
    flNewNumericalValueb = bIsNumerical;
    search.key = pStorageInfo->nStorageIndex;
    v19 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
            &pQuery->m_QueryStorage.m_Tree,
            &search);
    bIsNumerical = flNewNumericalValueb;
    if ( v19 == 0xFFFF )
    {
      search.key = nStorageSlot;
      v11 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
              &p_m_QueryStorage->m_Tree,
              &search);
      v13 = flNewNumericalValueb;
      if ( v11 == 0xFFFF )
        return;
      v12 = 0.0;
      goto LABEL_9;
    }
    flNewNumericalValue = pQuery->m_QueryStorage.m_Tree.m_Elements.m_pMemory[v19].m_Data.elem;
  }
  else
  {
    p_m_QueryStorage = &pQuery->m_QueryStorage;
  }
  v21 = bIsNumerical;
  flNewNumericalValuea = flNewNumericalValue;
  search.key = nStorageSlot;
  v11 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          &p_m_QueryStorage->m_Tree,
          &search);
  v12 = flNewNumericalValuea;
  v13 = v21;
  if ( v11 == 0xFFFF )
  {
    if ( flNewNumericalValuea == 0.0 )
      return;
    search.elem = flNewNumericalValuea;
    search.key = nStorageSlot;
    CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
      &p_m_QueryStorage->m_Tree,
      &search,
      ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
    v12 = flNewNumericalValuea;
    if ( pQuery->m_nProgressStorageIndex != nStorageSlot )
      return;
LABEL_22:
    m_pNotify = pQuery->m_pNotify;
    if ( m_pNotify != 0 )
      (*m_pNotify->_vptr_ICombatAnalyzerQueryUpdateNotify)(m_pNotify, pQuery->m_nQueryID, v12);
    return;
  }
LABEL_9:
  v14 = &pQuery->m_QueryStorage.m_Tree.m_Elements.m_pMemory[v11];
  elem = v14->m_Data.elem;
  if ( v13 )
  {
    nAggregator = pStorageInfo->nAggregator;
    if ( nAggregator == CompendiumStatAggregator_t::CSA_MIN )
    {
      if ( v12 > elem )
        return;
      goto LABEL_15;
    }
    if ( nAggregator > CompendiumStatAggregator_t::CSA_MIN )
    {
      if ( nAggregator == CompendiumStatAggregator_t::CSA_MAX )
      {
        if ( elem > v12 )
          return;
        goto LABEL_15;
      }
    }
    else if ( nAggregator >= CompendiumStatAggregator_t::CSA_SUM )
    {
      if ( bRemoveStorage )
        v12 = elem - v12;
      else
        v12 = v12 + elem;
      goto LABEL_15;
    }
    v17 = elem == v12;
    goto LABEL_16;
  }
LABEL_15:
  v17 = v12 == elem;
LABEL_16:
  if ( !v17 )
  {
    v14->m_Data.elem = v12;
    if ( pQuery->m_nProgressStorageIndex == nStorageSlot )
      goto LABEL_22;
  }
}


// CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent  (line 1033, @0x00000000024868d0, libserver.so)  // inlines: Element, IsIdxValid, IsValidIndex, Key, LeftChild, operator[]
// calls: CDOTA_PlayerResource::GetHighestKilledPlayerKills, CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal, CDOTA_PlayerResource::GetLevel, CDOTA_PlayerResource::GetGoldSpentOnSupport, CDOTAGamerules::GameTimeToDOTATime, CDOTA_PlayerResource::GetNetWorth
// callers: CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger, CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblock
// globals: jpt_2486975
void __fastcall CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        int nCurEvent,
        CMsgDOTACombatLogEntry *const entry,
        bool bRemoveStorage)
{
  __int64 v6; // rbx
  CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)> *m_pMemory; // rsi
  CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)> *v8; // rdx
  int m_nAllocationCount; // eax
  int v12; // r12d
  _BOOL4 v13; // r10d
  float v14; // xmm1_4
  UtlRBTreeNode_t<CUtlMap<int,event_storage_t>::Node_t,short unsigned int> *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v18; // ecx
  int NetWorth; // eax
  float v20; // xmm0_4
  bool v21; // r8
  float v22; // [rsp+Ch] [rbp-44h]
  __int64 v23; // [rsp+10h] [rbp-40h]
  float v24; // [rsp+10h] [rbp-40h]
  bool v25[4]; // [rsp+18h] [rbp-38h]
  int nStorageSlot; // [rsp+1Ch] [rbp-34h]
  int nStorageSlota; // [rsp+1Ch] [rbp-34h]

  v6 = nCurEvent;
  m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
  v8 = &m_pMemory[v6];
  m_nAllocationCount = m_pMemory[v6].m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    v12 = 0;
    v13 = bRemoveStorage;
    v14 = 0.0;
    do
    {
      if ( v12 < m_nAllocationCount && v12 <= v8->m_Tree.m_LastAlloc.index && v12 != 0xFFFF )
      {
        v15 = v8->m_Tree.m_Elements.m_pMemory;
        if ( v15[v12].m_Left != v12 )
        {
          v16 = 24LL * v12;
          v17 = v15 + v16;
          v18 = *(v17 + 8);
          switch ( *(v17 + 12) )
          {
            case 0xFFFFFFFD:
              v21 = 1;
              v20 = v14;
              break;
            case 0xFFFFFFFE:
              v21 = 1;
              v20 = 1.0;
              break;
            case 0:
              v21 = 0;
              v20 = *(entry + 7);
              break;
            case 1:
              v21 = 0;
              v20 = *(entry + 9);
              break;
            case 2:
              v21 = 0;
              v20 = *(entry + 11);
              break;
            case 3:
              v21 = 1;
              v20 = *(entry + 17);
              break;
            case 4:
              v21 = 1;
              v20 = *(entry + 18);
              break;
            case 5:
              v21 = 1;
              v20 = *(entry + 8);
              break;
            case 6:
              v21 = 1;
              v20 = *(entry + 9);
              break;
            case 7:
              v21 = 1;
              v20 = *(entry + 10);
              break;
            case 8:
              v21 = 1;
              v20 = *(entry + 26);
              break;
            case 9:
              v21 = 1;
              v20 = *(entry + 13);
              break;
            case 0xA:
              v21 = 1;
              v20 = *(entry + 29);
              break;
            case 0xB:
              v21 = 1;
              v20 = *(entry + 34);
              break;
            case 0xC:
              v20 = *(entry + 24);
              v21 = 1;
              break;
            case 0xD:
              v20 = *(entry + 17);
              v21 = 1;
              break;
            case 0xE:
              v20 = *(entry + 52);
              v21 = 1;
              break;
            case 0xF:
              v22 = v14;
              *v25 = v13;
              v23 = 24LL * v12;
              nStorageSlot = *(v17 + 8);
              NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
              goto LABEL_9;
            case 0x10:
              v22 = v14;
              *v25 = v13;
              v23 = 24LL * v12;
              nStorageSlot = *(v17 + 8);
              v20 = CDOTAGamerules::GameTimeToDOTATime(g_pGameRules, *(entry + 15), 0, 0);
              goto LABEL_10;
            case 0x11:
              v22 = v14;
              *v25 = v13;
              v23 = 24LL * v12;
              nStorageSlot = *(v17 + 8);
              NetWorth = CDOTA_PlayerResource::GetGoldSpentOnSupport(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
              goto LABEL_9;
            case 0x12:
              v22 = v14;
              *v25 = v13;
              v23 = 24LL * v12;
              nStorageSlot = *(v17 + 8);
              NetWorth = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
              goto LABEL_9;
            case 0x13:
              v22 = v14;
              *v25 = v13;
              v23 = 24LL * v12;
              nStorageSlot = *(v17 + 8);
              NetWorth = CDOTA_PlayerResource::GetHighestKilledPlayerKills(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
LABEL_9:
              v20 = NetWorth;
LABEL_10:
              m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
              v21 = 1;
              v18 = nStorageSlot;
              v16 = v23;
              v13 = *v25;
              v14 = v22;
              break;
            default:
              v21 = 0;
              v20 = 0.0;
              break;
          }
          v24 = v14;
          nStorageSlota = v13;
          CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal(
            this,
            pQuery,
            (&m_pMemory[v6].m_Tree.m_Elements.m_pMemory->m_Data.elem + v16),
            v18,
            v20,
            v21,
            v13);
          m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
          v13 = nStorageSlota;
          v14 = v24;
        }
      }
      v8 = &m_pMemory[v6];
      ++v12;
      m_nAllocationCount = m_pMemory[v6].m_Tree.m_Elements.m_nAllocationCount;
    }
    while ( m_nAllocationCount > v12 );
  }
}


// CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent  (line 1074, @0x00000000024899c0, libserver.so)  // inlines: AddToTail, ConvertToExternalMemory, CopyConstruct<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t>, Element, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, operator[]
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::MatchEventFields, CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup, CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, int>::Grow, ICLSearchFields::UpdateDynamicValues, CDOTA_RealtimeCombatAnalyzer::PostTestsPass, _Unwind_Resume
// callers: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
// globals: g_DOTACombatLog
_BOOL8 __fastcall CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *const tempEventsToEntries,
        CombatLogQuery *pQuery,
        int nCurEvent,
        int nLogEntryToStartAt,
        float flPrevLogTime,
        float flEventSeparator,
        bool bLookingForTrigger,
        bool bFindSingleEvent)
{
  int v11; // ebx
  int v12; // r14d
  int m_Size; // eax
  __int64 v14; // rdx
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *v15; // rax
  int v16; // edx
  int v17; // r14d
  int m_nAllocationCount; // eax
  uint32 m_nGrowSize; // edx
  CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *m_pMemory; // rsi
  int v22; // edx
  int v23; // ecx
  float *v24; // rax
  float v25; // xmm0_4
  float *v26; // rcx
  float *v27; // rax
  float *v28; // rdx
  int v29; // r14d
  int v30; // edx
  float *v31; // rax
  float v32; // ebx
  __int64 v33; // rax
  __m128i v34; // xmm0
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *v36; // rsi
  __int64 i; // rax
  __int64 v38; // r14
  unsigned __int64 v39; // [rsp+10h] [rbp-170h]
  unsigned __int64 v41; // [rsp+20h] [rbp-160h]
  float flEarliestTime; // [rsp+28h] [rbp-158h]
  float flPrevLogTimea; // [rsp+30h] [rbp-150h]
  int nNextEvent; // [rsp+34h] [rbp-14Ch]
  int v46; // [rsp+40h] [rbp-140h]
  bool matched; // [rsp+4Eh] [rbp-132h]
  float flEventSeparatora; // [rsp+58h] [rbp-128h]
  float flNextSeparator; // [rsp+5Ch] [rbp-124h]
  _BYTE v53[60]; // [rsp+60h] [rbp-120h] BYREF
  float v54; // [rsp+9Ch] [rbp-E4h]

  flPrevLogTimea = flPrevLogTime;
  flEventSeparatora = flEventSeparator;
  if ( pQuery->m_Events.m_Size <= nCurEvent )
    return CDOTA_RealtimeCombatAnalyzer::PostTestsPass(this, pQuery);
  flEarliestTime = flPrevLogTime - flEventSeparator;
  if ( bLookingForTrigger || pQuery->m_QueryStorage.m_Tree.m_NumElements == 0 )
  {
    v41 = nCurEvent;
  }
  else
  {
    v41 = nCurEvent;
    if ( !ICLSearchFields::UpdateDynamicValues(
            pQuery->m_Events.m_Memory.m_pMemory[nCurEvent],
            &pQuery->m_QueryStorage,
            0) )
      return 0;
  }
  v39 = v41;
  flNextSeparator = pQuery->m_EventSeparators.m_Memory.m_pMemory[v41];
  if ( nLogEntryToStartAt >= 0 )
  {
    v11 = nLogEntryToStartAt - 1;
    nNextEvent = nCurEvent + 1;
    while ( 1 )
    {
      v12 = v11 + 1;
      if ( bLookingForTrigger && this->m_nLastLogEntryCount > v12 )
        goto LABEL_66;
      CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v53);
      CDOTA_CombatLog::GetEntry(&g_DOTACombatLog, v12, v53);
      if ( flEventSeparatora != -3.0 && flEarliestTime > v54 )
      {
        CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v53);
        goto LABEL_66;
      }
      matched = CDOTA_CombatLog::MatchEventFields(&g_DOTACombatLog, v53, pQuery->m_Events.m_Memory.m_pMemory[v41]);
      if ( !matched )
        goto LABEL_22;
      if ( !bLookingForTrigger )
        break;
      CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup(this, pQuery);
      m_nAllocationCount = tempEventsToEntries->m_Memory.m_nAllocationCount;
      tempEventsToEntries->m_Size = 0;
      if ( m_nAllocationCount < 0 )
      {
        v14 = 0;
        m_Size = 0;
      }
      else
      {
        m_nGrowSize = tempEventsToEntries->m_Memory.m_nGrowSize;
        m_pMemory = tempEventsToEntries->m_Memory.m_pMemory;
        if ( &tempEventsToEntries->m_Memory.m_FixedMemory == m_pMemory )
        {
          v46 = m_nAllocationCount;
          m_Size = 0;
LABEL_13:
          v14 = m_Size;
          if ( v46 != m_Size )
            goto LABEL_14;
LABEL_34:
          CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,int>::Grow(&tempEventsToEntries->m_Memory, 1);
          m_Size = tempEventsToEntries->m_Size;
          v14 = v46;
          goto LABEL_14;
        }
        m_Size = 0;
        if ( m_pMemory != 0 && (m_nGrowSize & 0xC0000000) == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = tempEventsToEntries->m_Memory.m_nGrowSize;
          m_Size = tempEventsToEntries->m_Size;
        }
        v46 = 128;
        tempEventsToEntries->m_Memory.m_nAllocationCount = 128;
        tempEventsToEntries->m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
        v14 = m_Size;
        tempEventsToEntries->m_Memory.m_pMemory = &tempEventsToEntries->m_Memory.m_FixedMemory;
        if ( m_Size == 128 )
          goto LABEL_34;
      }
LABEL_14:
      tempEventsToEntries->m_Size = m_Size + 1;
      v15 = &tempEventsToEntries->m_Memory.m_pMemory[v14];
      if ( v15 != 0 )
      {
        v15->m_nLogEntryIndex = v12;
        v15->m_nEventIndex = nCurEvent;
      }
      CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(this, pQuery, nCurEvent, v53, 0);
      if ( bFindSingleEvent )
        goto LABEL_45;
      if ( flNextSeparator == -2.0 )
      {
        if ( bLookingForTrigger )
        {
          v16 = pQuery->m_EventSeparators.m_Size;
          flPrevLogTimea = v54;
          if ( nCurEvent < v16 && flEventSeparatora < 0.0 )
          {
            v26 = pQuery->m_EventSeparators.m_Memory.m_pMemory;
            v27 = &v26[v39];
            v28 = &v26[v41 + (~nCurEvent + v16)];
            do
            {
              flEventSeparatora = *v27;
              if ( v27 == v28 )
                break;
              ++v27;
            }
            while ( flEventSeparatora < 0.0 );
          }
        }
        if ( CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent(
               this,
               tempEventsToEntries,
               pQuery,
               nNextEvent,
               nLogEntryToStartAt,
               flPrevLogTimea,
               flEventSeparatora,
               0,
               0) )
        {
          goto LABEL_45;
        }
LABEL_22:
        v17 = v11;
        goto LABEL_23;
      }
      v22 = pQuery->m_EventSeparators.m_Size;
      v23 = nCurEvent + 1;
      if ( v22 > nNextEvent )
      {
        if ( flNextSeparator == -1.0 )
        {
          v23 = nCurEvent + 1;
          v24 = &pQuery->m_EventSeparators.m_Memory.m_pMemory[v39 + 1];
          do
          {
            ++v23;
            v25 = *v24;
            if ( v23 == v22 )
              break;
            ++v24;
          }
          while ( v25 == -1.0 );
          flNextSeparator = v25;
        }
        else
        {
          v23 = nCurEvent + 1;
        }
      }
      v17 = v11;
      if ( CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent(
             this,
             tempEventsToEntries,
             pQuery,
             v23,
             v11,
             v54,
             flNextSeparator,
             0,
             0) )
      {
        goto LABEL_45;
      }
      if ( !bLookingForTrigger )
      {
        matched = 0;
LABEL_45:
        CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v53);
        return matched;
      }
LABEL_23:
      --v11;
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v53);
      if ( v17 < 0 )
        goto LABEL_66;
    }
    m_Size = tempEventsToEntries->m_Size;
    v46 = tempEventsToEntries->m_Memory.m_nAllocationCount;
    goto LABEL_13;
  }
LABEL_66:
  if ( flNextSeparator == -1.0 )
    return CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent(
             this,
             tempEventsToEntries,
             pQuery,
             nCurEvent + 1,
             nLogEntryToStartAt,
             flPrevLogTimea,
             flEventSeparatora,
             bLookingForTrigger,
             0);
  if ( flNextSeparator != -2.0 )
    return 0;
  if ( !bLookingForTrigger )
    return 0;
  v29 = nCurEvent + 1;
  if ( !CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent(
          this,
          tempEventsToEntries,
          pQuery,
          nCurEvent + 1,
          nLogEntryToStartAt,
          flPrevLogTimea,
          flEventSeparatora,
          1,
          0) )
    return 0;
  v30 = pQuery->m_EventSeparators.m_Size;
  if ( v29 < v30 )
  {
    v31 = pQuery->m_EventSeparators.m_Memory.m_pMemory;
    v32 = v31[v41];
    if ( v32 >= 0.0 )
    {
LABEL_70:
      if ( tempEventsToEntries->m_Size > 0 )
      {
        v36 = tempEventsToEntries->m_Memory.m_pMemory;
        if ( v29 == v36->m_nEventIndex )
        {
          v38 = 0;
LABEL_78:
          CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v53);
          CDOTA_CombatLog::GetEntry(
            &g_DOTACombatLog,
            *(&tempEventsToEntries->m_Memory.m_pMemory->m_nLogEntryIndex + v38),
            v53);
          flPrevLogTimea = v54;
          CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v53);
          flEventSeparatora = v32;
          goto LABEL_63;
        }
        for ( i = 8; i != 8LL * (tempEventsToEntries->m_Size - 1) + 8; i += 8 )
        {
          if ( v29 == v36[i / 8].m_nEventIndex )
          {
            v38 = i;
            goto LABEL_78;
          }
        }
      }
      flEventSeparatora = v32;
      goto LABEL_63;
    }
    v33 = &v31[v39 + 1];
    while ( ++v29 != v30 )
    {
      v33 += 4;
      v34 = *(v33 - 4);
      if ( *v34.m128i_i32 >= 0.0 )
      {
        v32 = COERCE_FLOAT(_mm_cvtsi128_si32(v34));
        goto LABEL_70;
      }
    }
  }
LABEL_63:
  if ( flPrevLogTimea != 0.0 )
    return CDOTA_RealtimeCombatAnalyzer::RecursiveEvaluateQueryFromEvent(
             this,
             tempEventsToEntries,
             pQuery,
             nCurEvent,
             nLogEntryToStartAt,
             flPrevLogTimea,
             flEventSeparatora,
             0,
             1);
  return 0;
}


// CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger  (line 1324, @0x000000000248a180, libserver.so)  // inlines: AddToTail, ConvertToExternalMemory, CopyConstruct<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t>, Element, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, operator[]
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::MatchEventFields, CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup, CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CDOTA_RealtimeCombatAnalyzer::PostTestsPass, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, int>::Grow, _Unwind_Resume
// callers: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
// globals: g_DOTACombatLog
bool __fastcall CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockBeforeTrigger(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *const tempEventsToEntries,
        CombatLogQuery *pQuery,
        int nLogEntryToStartAt)
{
  int m_nAllocationCount; // r15d
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *m_pMemory; // rsi
  __int64 m_Size; // rax
  uint32 m_nGrowSize; // edx
  int v10; // edx
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *v11; // rax
  int v12; // ebx
  __int64 v13; // r15
  int v14; // eax
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *v15; // rax
  bool v16; // al
  int v17; // eax
  CUtlVectorBase<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,CUtlMemoryFixedGrowable<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,128ul,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-140h]
  AlignedByteArray_t<128ul,CDOTA_RealtimeCombatAnalyzer::EventToEntry_t> *p_m_FixedMemory; // [rsp+8h] [rbp-138h]
  int iEntry; // [rsp+18h] [rbp-128h]
  float flEarliestTime; // [rsp+1Ch] [rbp-124h]
  bool flEarliestTimea; // [rsp+1Ch] [rbp-124h]
  _BYTE v25[60]; // [rsp+20h] [rbp-120h] BYREF
  float v26; // [rsp+5Ch] [rbp-E4h]

  if ( nLogEntryToStartAt < 0 || nLogEntryToStartAt < this->m_nLastLogEntryCount )
    return 0;
  iEntry = nLogEntryToStartAt - 1;
  p_m_Memory = &tempEventsToEntries->m_Memory;
  p_m_FixedMemory = &tempEventsToEntries->m_Memory.m_FixedMemory;
  while ( 1 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v25);
    CDOTA_CombatLog::GetEntry(&g_DOTACombatLog, iEntry + 1, v25);
    if ( CDOTA_CombatLog::MatchEventFields(&g_DOTACombatLog, v25, *(pQuery->m_Events.m_Memory.m_pMemory + 1)) )
    {
      CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup(this, pQuery);
      m_nAllocationCount = tempEventsToEntries->m_Memory.m_nAllocationCount;
      tempEventsToEntries->m_Size = 0;
      if ( m_nAllocationCount < 0 )
      {
        m_Size = 0;
        v10 = 0;
      }
      else
      {
        m_pMemory = tempEventsToEntries->m_Memory.m_pMemory;
        m_Size = 0;
        m_nGrowSize = tempEventsToEntries->m_Memory.m_nGrowSize;
        if ( p_m_FixedMemory != m_pMemory )
        {
          if ( m_pMemory != 0 && (m_nGrowSize & 0xC0000000) == 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
            m_nGrowSize = tempEventsToEntries->m_Memory.m_nGrowSize;
            m_Size = tempEventsToEntries->m_Size;
          }
          tempEventsToEntries->m_Memory.m_nAllocationCount = 128;
          m_nAllocationCount = 128;
          tempEventsToEntries->m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
          tempEventsToEntries->m_Memory.m_pMemory = p_m_FixedMemory;
        }
        v10 = m_Size;
        if ( m_nAllocationCount == m_Size )
        {
          CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,int>::Grow(p_m_Memory, 1);
          v10 = tempEventsToEntries->m_Size;
          m_Size = m_nAllocationCount;
        }
      }
      tempEventsToEntries->m_Size = v10 + 1;
      v11 = &tempEventsToEntries->m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
      {
        v11->m_nEventIndex = 1;
        v11->m_nLogEntryIndex = iEntry + 1;
      }
      CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(this, pQuery, 1, v25, 0);
      flEarliestTime = v26 - pQuery->m_flTimeBlock;
      if ( iEntry >= 0 )
      {
        v12 = iEntry;
        while ( 1 )
        {
          CDOTA_CombatLog::GetEntry(&g_DOTACombatLog, v12, v25);
          if ( flEarliestTime > v26 )
            break;
          if ( CDOTA_CombatLog::MatchEventFields(&g_DOTACombatLog, v25, *pQuery->m_Events.m_Memory.m_pMemory) )
          {
            v13 = tempEventsToEntries->m_Size;
            v14 = tempEventsToEntries->m_Size;
            if ( v13 == tempEventsToEntries->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,int>::Grow(p_m_Memory, 1);
              v14 = tempEventsToEntries->m_Size;
            }
            tempEventsToEntries->m_Size = v14 + 1;
            v15 = &tempEventsToEntries->m_Memory.m_pMemory[v13];
            if ( v15 != 0 )
            {
              v15->m_nEventIndex = 0;
              v15->m_nLogEntryIndex = v12;
            }
            CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(this, pQuery, 0, v25, 0);
            if ( --v12 == -1 )
              break;
          }
          else if ( --v12 == -1 )
          {
            break;
          }
        }
      }
      v16 = CDOTA_RealtimeCombatAnalyzer::PostTestsPass(this, pQuery);
      if ( v16 )
        break;
    }
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v25);
    v17 = iEntry;
    if ( iEntry >= 0 )
    {
      --iEntry;
      if ( v17 >= this->m_nLastLogEntryCount )
        continue;
    }
    return 0;
  }
  flEarliestTimea = v16;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v25);
  return flEarliestTimea;
}


// CDOTA_RealtimeCombatAnalyzer::DebugSpewTimeblockAfterTrigger  (line 1394, @0x000000000246cbc0, libserver.so)
void __fastcall CDOTA_RealtimeCombatAnalyzer::DebugSpewTimeblockAfterTrigger(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery,
        int nLogEntry,
        const CMsgDOTACombatLogEntry *const triggerEntry,
        CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *const tempEventsToEntries)
{
  ;
}


// CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger  (line 1415, @0x000000000248a490, libserver.so)  // inlines: AddToHead, AddToTail, ConvertToExternalMemory, CopyConstruct<AccumulatedEvent_t>, CopyConstruct<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t>, Element, GrowMemory, GrowVector, InsertBefore, Purge, Purge_FixedGrowable, RemoveAll, ShiftElementsRight, V_memmove, memmove, operator[]
// calls: memmove, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::MatchEventFields, CUtlMemory<AccumulatedEvent_t, int>::Grow, CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup, CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, int>::Grow, CDOTA_RealtimeCombatAnalyzer::PostTestsPass, CDOTA_RealtimeCombatAnalyzer::PerformTriggerEventStorageCleanup, CUtlVectorBase<AccumulatedEvent_t, CUtlMemory<AccumulatedEvent_t, int> >::Remove (13 total)
// callers: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
// globals: g_DOTACombatLog
bool __fastcall CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblockAfterTrigger(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *const tempEventsToEntries,
        CombatLogQuery *pQuery,
        int nLogEntryToFinishAt)
{
  int m_nLastLogEntryCount; // eax
  int v7; // ebx
  AccumulatedEvent_t *m_pMemory; // rax
  int m_nAllocationCount; // eax
  __int64 v10; // rax
  bool v11; // sf
  int v12; // r15d
  int v13; // edx
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *v14; // rsi
  __int64 v15; // r12
  uint32 m_nGrowSize; // eax
  int v17; // eax
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *v18; // rax
  char *v19; // rax
  int v20; // r12d
  CDOTA_RealtimeCombatAnalyzer::EventToEntry_t *v21; // rax
  __int64 v22; // r15
  int v23; // eax
  bool v24; // al
  char v26; // r12
  AlignedByteArray_t<128ul,CDOTA_RealtimeCombatAnalyzer::EventToEntry_t> *p_m_FixedMemory; // [rsp+8h] [rbp-248h]
  int ia; // [rsp+14h] [rbp-23Ch]
  int i; // [rsp+14h] [rbp-23Ch]
  CUtlVectorBase<AccumulatedEvent_t,CUtlMemory<AccumulatedEvent_t,int> >::CAllocator *p_m_Memory; // [rsp+18h] [rbp-238h]
  CUtlVectorBase<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,CUtlMemoryFixedGrowable<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,128ul,int> >::CAllocator *v31; // [rsp+18h] [rbp-238h]
  int pEntry; // [rsp+20h] [rbp-230h]
  int m_Size; // [rsp+28h] [rbp-228h]
  __int64 v34; // [rsp+28h] [rbp-228h]
  int flLatestTime; // [rsp+38h] [rbp-218h]
  float flLatestTimea; // [rsp+38h] [rbp-218h]
  bool nLogEntryToFinishAtb; // [rsp+3Ch] [rbp-214h]
  _BYTE v40[60]; // [rsp+40h] [rbp-210h] BYREF
  float v41; // [rsp+7Ch] [rbp-1D4h]
  _BYTE v42[60]; // [rsp+130h] [rbp-120h] BYREF
  float v43; // [rsp+16Ch] [rbp-E4h]

  m_nLastLogEntryCount = this->m_nLastLogEntryCount;
  p_m_Memory = &pQuery->m_vecAccumulatedEvents.m_Memory;
  v7 = m_nLastLogEntryCount + 1;
  if ( m_nLastLogEntryCount <= nLogEntryToFinishAt )
  {
    do
    {
      CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v42);
      CDOTA_CombatLog::GetEntry(&g_DOTACombatLog, v7 - 1, v42);
      flLatestTime = v7;
      if ( CDOTA_CombatLog::MatchEventFields(&g_DOTACombatLog, v42, *(pQuery->m_Events.m_Memory.m_pMemory + 1)) )
      {
        m_Size = pQuery->m_vecAccumulatedEvents.m_Size;
        pEntry = m_Size + 1;
        m_nAllocationCount = pQuery->m_vecAccumulatedEvents.m_Memory.m_nAllocationCount;
        if ( m_Size + 1 > m_nAllocationCount )
          CUtlMemory<AccumulatedEvent_t,int>::Grow(p_m_Memory, pEntry - m_nAllocationCount);
        pQuery->m_vecAccumulatedEvents.m_Size = pEntry;
        if ( m_Size > 0 )
          memmove(
            &pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory[1],
            pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory,
            8LL * m_Size);
        m_pMemory = pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory;
        if ( m_pMemory != 0 )
        {
          m_pMemory->m_nLogEntry = v7 - 1;
          m_pMemory->m_nFirstUnprocessedLogEntry = v7;
        }
      }
      ++v7;
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v42);
    }
    while ( nLogEntryToFinishAt >= flLatestTime );
  }
  ia = pQuery->m_vecAccumulatedEvents.m_Size;
  v10 = ia;
  v11 = ia - 1 < 0;
  i = ia - 1;
  v34 = 8 * v10 - 8;
  p_m_FixedMemory = &tempEventsToEntries->m_Memory.m_FixedMemory;
  v31 = &tempEventsToEntries->m_Memory;
  if ( v11 )
    return 0;
  while ( 1 )
  {
    v12 = *(&pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory->m_nLogEntry + v34);
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v40);
    CDOTA_CombatLog::GetEntry(&g_DOTACombatLog, v12, v40);
    CDOTA_RealtimeCombatAnalyzer::PerformQueryStorageCleanup(this, pQuery);
    v13 = tempEventsToEntries->m_Memory.m_nAllocationCount;
    tempEventsToEntries->m_Size = 0;
    if ( v13 < 0 )
    {
      v15 = 0;
      v17 = 0;
    }
    else
    {
      v14 = tempEventsToEntries->m_Memory.m_pMemory;
      v15 = 0;
      m_nGrowSize = tempEventsToEntries->m_Memory.m_nGrowSize;
      if ( p_m_FixedMemory != v14 )
      {
        if ( v14 != 0 && (m_nGrowSize & 0xC0000000) == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = tempEventsToEntries->m_Memory.m_nGrowSize;
          v15 = tempEventsToEntries->m_Size;
        }
        tempEventsToEntries->m_Memory.m_nAllocationCount = 128;
        v13 = 128;
        tempEventsToEntries->m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
        tempEventsToEntries->m_Memory.m_pMemory = p_m_FixedMemory;
      }
      v17 = v15;
      if ( v15 == v13 )
      {
        CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,int>::Grow(v31, 1);
        v17 = tempEventsToEntries->m_Size;
      }
    }
    tempEventsToEntries->m_Size = v17 + 1;
    v18 = &tempEventsToEntries->m_Memory.m_pMemory[v15];
    if ( v18 != 0 )
    {
      v18->m_nEventIndex = 1;
      v18->m_nLogEntryIndex = v12;
    }
    CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(this, pQuery, 1, v40, 0);
    v19 = pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory + v34;
    flLatestTimea = v41 + pQuery->m_flTimeBlock;
    v20 = *(v19 + 1);
    if ( nLogEntryToFinishAt >= v20 )
    {
      do
      {
        CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v42);
        CDOTA_CombatLog::GetEntry(&g_DOTACombatLog, v20, v42);
        if ( v43 > flLatestTimea )
        {
          v26 = 1;
          CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v42);
          v19 = pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory + v34;
          goto LABEL_33;
        }
        if ( CDOTA_CombatLog::MatchEventFields(&g_DOTACombatLog, v42, *pQuery->m_Events.m_Memory.m_pMemory) )
        {
          v22 = tempEventsToEntries->m_Size;
          v23 = tempEventsToEntries->m_Size;
          if ( v22 == tempEventsToEntries->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t,int>::Grow(v31, 1);
            v23 = tempEventsToEntries->m_Size;
          }
          tempEventsToEntries->m_Size = v23 + 1;
          v21 = &tempEventsToEntries->m_Memory.m_pMemory[v22];
          if ( v21 != 0 )
          {
            v21->m_nEventIndex = 0;
            v21->m_nLogEntryIndex = v20;
          }
          CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(this, pQuery, 0, v42, 0);
        }
        ++v20;
        CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v42);
      }
      while ( nLogEntryToFinishAt >= v20 );
      v26 = 0;
      v19 = pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory + v34;
    }
    else
    {
      v26 = 0;
    }
LABEL_33:
    *(v19 + 1) = nLogEntryToFinishAt + 1;
    v24 = CDOTA_RealtimeCombatAnalyzer::PostTestsPass(this, pQuery);
    if ( v24 )
      break;
    if ( v26 != 0 )
    {
      CDOTA_RealtimeCombatAnalyzer::PerformTriggerEventStorageCleanup(this, pQuery);
      CUtlVectorBase<AccumulatedEvent_t,CUtlMemory<AccumulatedEvent_t,int>>::Remove(&pQuery->m_vecAccumulatedEvents, i);
    }
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v40);
    v34 -= 8;
    if ( --i < 0 )
      return 0;
  }
  nLogEntryToFinishAtb = v24;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v40);
  return nLogEntryToFinishAtb;
}


// CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblock  (line 1505, @0x000000000248a970, libserver.so)  // inlines: AddToTail, CopyConstruct<AccumulatedEvent_t>, Element, GrowMemory, operator[]
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::MatchEventFields, CUtlVectorBase<AccumulatedEvent_t, CUtlMemory<AccumulatedEvent_t, int> >::Remove, CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CDOTA_RealtimeCombatAnalyzer::PostTestsPass, CUtlMemory<AccumulatedEvent_t, int>::Grow, _Unwind_Resume
// callers: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
// strings: "accumulator has %d events stored.\n"
// globals: g_DOTACombatLog, LOG_COMBAT_ANALYZER
bool __fastcall CDOTA_RealtimeCombatAnalyzer::EvaluateTimeblock(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *const tempEventsToEntries,
        CombatLogQuery *pQuery,
        int nLogEntryToFinishAt)
{
  __int64 m_Size; // r13
  int v7; // ebx
  __int64 v8; // r13
  int v9; // eax
  AccumulatedEvent_t *v10; // rax
  bool v11; // al
  CUtlVectorBase<AccumulatedEvent_t,CUtlMemory<AccumulatedEvent_t,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-238h]
  CUtlVector<AccumulatedEvent_t,CUtlMemory<AccumulatedEvent_t,int> > *p_m_vecAccumulatedEvents; // [rsp+20h] [rbp-220h]
  int nLogEntry; // [rsp+28h] [rbp-218h]
  float flEarliestTime; // [rsp+2Ch] [rbp-214h]
  bool flEarliestTimea; // [rsp+2Ch] [rbp-214h]
  _BYTE v19[60]; // [rsp+30h] [rbp-210h] BYREF
  float v20; // [rsp+6Ch] [rbp-1D4h]
  _BYTE v21[60]; // [rsp+120h] [rbp-120h] BYREF
  float v22; // [rsp+15Ch] [rbp-E4h]

  nLogEntry = this->m_nLastLogEntryCount;
  if ( nLogEntry > nLogEntryToFinishAt )
    return 0;
  p_m_Memory = &pQuery->m_vecAccumulatedEvents.m_Memory;
  p_m_vecAccumulatedEvents = &pQuery->m_vecAccumulatedEvents;
  while ( 1 )
  {
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v19);
    CDOTA_CombatLog::GetEntry(&g_DOTACombatLog, nLogEntry, v19);
    if ( CDOTA_CombatLog::MatchEventFields(&g_DOTACombatLog, v19, *pQuery->m_Events.m_Memory.m_pMemory) )
    {
      m_Size = pQuery->m_vecAccumulatedEvents.m_Size;
      v7 = pQuery->m_vecAccumulatedEvents.m_Size - 1;
      flEarliestTime = v20 - pQuery->m_flTimeBlock;
      if ( v7 >= 0 )
      {
        v8 = v7;
        do
        {
          CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v21);
          CDOTA_CombatLog::GetEntry(
            &g_DOTACombatLog,
            pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory[v8].m_nLogEntry,
            v21);
          if ( v22 < flEarliestTime )
          {
            CUtlVectorBase<AccumulatedEvent_t,CUtlMemory<AccumulatedEvent_t,int>>::Remove(p_m_vecAccumulatedEvents, v7);
            CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(this, pQuery, 0, v21, 1);
          }
          --v7;
          --v8;
          CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v21);
        }
        while ( v7 != -1 );
        m_Size = pQuery->m_vecAccumulatedEvents.m_Size;
      }
      v9 = m_Size;
      if ( m_Size == pQuery->m_vecAccumulatedEvents.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<AccumulatedEvent_t,int>::Grow(p_m_Memory, 1);
        v9 = pQuery->m_vecAccumulatedEvents.m_Size;
      }
      pQuery->m_vecAccumulatedEvents.m_Size = v9 + 1;
      v10 = &pQuery->m_vecAccumulatedEvents.m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
        *v10 = nLogEntry;
      CDOTA_RealtimeCombatAnalyzer::PerformStorageForEvent(this, pQuery, 0, v19, 0);
      if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 0) != 0 )
        LoggingSystem_Log(
          LOG_COMBAT_ANALYZER,
          0,
          "accumulator has %d events stored.\n",
          pQuery->m_vecAccumulatedEvents.m_Size);
      v11 = CDOTA_RealtimeCombatAnalyzer::PostTestsPass(this, pQuery);
      if ( v11 )
        break;
    }
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v19);
    if ( nLogEntryToFinishAt < ++nLogEntry )
      return 0;
  }
  flEarliestTimea = v11;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v19);
  return flEarliestTimea;
}


// CDOTA_RealtimeCombatAnalyzer::EvaluateGameState  (line 1581, @0x0000000002486f50, libserver.so)  // inlines: Element, IsIdxValid, IsValidIndex, Key, LeftChild, operator[]
// calls: CDOTA_PlayerResource::GetHighestKilledPlayerKills, CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal, CDOTA_RealtimeCombatAnalyzer::PostTestsPass, CDOTA_PlayerResource::GetLevel, CDOTA_PlayerResource::GetGoldSpentOnSupport, CDOTAGamerules::GetDOTATime, CDOTA_PlayerResource::GetNetWorth, CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetAssists, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetKills (14 total)
// callers: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
// globals: jpt_2486FF7
bool __fastcall CDOTA_RealtimeCombatAnalyzer::EvaluateGameState(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *const tempEventsToEntries,
        CombatLogQuery *pQuery)
{
  CUtlMap<int,event_storage_t,short unsigned int,bool (*)(int const&,int const&)> *m_pMemory; // rax
  int m_nPlayerID; // r14d
  int m_nAllocationCount; // edx
  int v9; // r15d
  UtlRBTreeNode_t<CUtlMap<int,event_storage_t>::Node_t,short unsigned int> *v10; // rdx
  __int64 v11; // r9
  char *v12; // rdx
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v13; // ecx
  int Kills; // eax
  float GoldPerMin; // xmm0_4
  bool v16; // r8
  __int64 v17; // [rsp+0h] [rbp-40h]
  int nStorageSlot; // [rsp+Ch] [rbp-34h]
  int nStorageSlota; // [rsp+Ch] [rbp-34h]
  int nStorageSlotb; // [rsp+Ch] [rbp-34h]
  int nStorageSlotc; // [rsp+Ch] [rbp-34h]

  if ( pQuery->m_EventStorageMaps.m_Size == 0 )
    return 0;
  m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
  m_nPlayerID = pQuery->m_nPlayerID;
  m_nAllocationCount = m_pMemory->m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    v9 = 0;
    do
    {
      if ( m_nAllocationCount > v9 && v9 <= m_pMemory->m_Tree.m_LastAlloc.index && v9 != 0xFFFF )
      {
        v10 = m_pMemory->m_Tree.m_Elements.m_pMemory;
        if ( v10[v9].m_Left != v9 )
        {
          v11 = 24LL * v9;
          v12 = v10 + v11;
          v13 = *(v12 + 2);
          switch ( *(v12 + 3) )
          {
            case 3:
              nStorageSlotc = *(v12 + 2);
              GoldPerMin = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, m_nPlayerID);
              v16 = 1;
              m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
              v13 = nStorageSlotc;
              v11 = 24LL * v9;
              break;
            case 4:
              nStorageSlotb = *(v12 + 2);
              GoldPerMin = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, m_nPlayerID);
              v16 = 1;
              m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
              v13 = nStorageSlotb;
              v11 = 24LL * v9;
              break;
            case 5:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, m_nPlayerID);
              goto LABEL_11;
            case 6:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, m_nPlayerID);
              goto LABEL_11;
            case 7:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, m_nPlayerID);
              goto LABEL_11;
            case 8:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, m_nPlayerID);
              goto LABEL_11;
            case 0xA:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, m_nPlayerID);
              goto LABEL_11;
            case 0xF:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, m_nPlayerID);
              goto LABEL_11;
            case 0x10:
              nStorageSlota = *(v12 + 2);
              GoldPerMin = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
              v16 = 1;
              m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
              v13 = nStorageSlota;
              v11 = 24LL * v9;
              break;
            case 0x11:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetGoldSpentOnSupport(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
              goto LABEL_11;
            case 0x12:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
              goto LABEL_11;
            case 0x13:
              v17 = 24LL * v9;
              nStorageSlot = *(v12 + 2);
              Kills = CDOTA_PlayerResource::GetHighestKilledPlayerKills(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
LABEL_11:
              GoldPerMin = Kills;
              v13 = nStorageSlot;
              v16 = 1;
              m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
              v11 = v17;
              break;
            default:
              v16 = 0;
              GoldPerMin = 0.0;
              break;
          }
          CDOTA_RealtimeCombatAnalyzer::PerformStorageInternal(
            this,
            pQuery,
            (&m_pMemory->m_Tree.m_Elements.m_pMemory->m_Data.elem + v11),
            v13,
            GoldPerMin,
            v16,
            0);
          m_pMemory = pQuery->m_EventStorageMaps.m_Memory.m_pMemory;
        }
      }
      m_nAllocationCount = m_pMemory->m_Tree.m_Elements.m_nAllocationCount;
      ++v9;
    }
    while ( m_nAllocationCount > v9 );
  }
  return CDOTA_RealtimeCombatAnalyzer::PostTestsPass(this, pQuery);
}


// CDOTA_RealtimeCombatAnalyzer::IsMultiQueryFullyMatched  (line 1619, @0x000000000246cbd0, libserver.so)  // inlines: FStrEq, String, _V_strcmp
// calls: CUtlString::Get, strcmp, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDOTA_RealtimeCombatAnalyzer::QueryFullyMatched
// strings: "MULTI-QUERY %s NOT FULLY MATCHED, WAITING ON EVENT %s.\n"
// globals: LOG_COMBAT_ANALYZER
bool __fastcall CDOTA_RealtimeCombatAnalyzer::IsMultiQueryFullyMatched(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery)
{
  __int64 v4; // r12
  CombatLogQuery *v5; // rbx
  const char *v6; // r14
  const char *v7; // rax
  bool result; // al
  const char *v9; // rbx
  const char *v10; // rax
  const CUtlString *p_m_MultiQueryIdentifier; // [rsp+8h] [rbp-38h]

  v4 = 0;
  p_m_MultiQueryIdentifier = &pQuery->m_MultiQueryIdentifier;
  if ( this->m_vecQueries.m_Size <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = this->m_vecQueries.m_Memory.m_pMemory[v4];
    if ( v5 != 0 && pQuery != v5 && (*(v5 + 340) & 2) != 0 && v5->m_nPlayerID == pQuery->m_nPlayerID )
    {
      v6 = CUtlString::Get(&v5->m_MultiQueryIdentifier);
      v7 = CUtlString::Get(p_m_MultiQueryIdentifier);
      if ( (v6 == v7 || strcmp(v7, v6) == 0)
        && ((*(pQuery + 340) & 8) == 0 || (*(v5 + 340) & 8) == 0 || pQuery->m_nQueryRank == v5->m_nQueryRank) )
      {
        break;
      }
    }
    if ( this->m_vecQueries.m_Size <= ++v4 )
      return 1;
  }
  result = LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1);
  if ( result )
  {
    v9 = CUtlString::Get(&v5->m_Name);
    v10 = CUtlString::Get(p_m_MultiQueryIdentifier);
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "MULTI-QUERY %s NOT FULLY MATCHED, WAITING ON EVENT %s.\n", v10, v9);
    return 0;
  }
  return result;
}


// CDOTA_RealtimeCombatAnalyzer::QueryFullyMatched  (line 1653, @0x000000000246cd00, libserver.so)  // inlines: String
// calls: CDOTA_PlayerResource::GetPlayer, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CDOTA_RealtimeCombatAnalyzer::IsMultiQueryFullyMatched
// callers: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
// strings: "disconnected player", "QUERY %s FULLY MATCHED FOR %s.\n"
// globals: LOG_COMBAT_ANALYZER
void __fastcall CDOTA_RealtimeCombatAnalyzer::QueryFullyMatched(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CDOTA_RealtimeCombatAnalyzer::TempEventToEntryList_t *const tempEventsToEntries,
        CombatLogQuery *pQuery)
{
  CDOTAPlayer *Player; // r12
  const char *v6; // r14
  const char *v7; // rax
  ICombatAnalyzerQueryUpdateNotify *m_pNotify; // rdi

  Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
  {
    v6 = "disconnected player";
    if ( Player != 0 )
      v6 = (*(Player->_vptr_IHandleEntity + 106))(Player);
    v7 = CUtlString::Get(&pQuery->m_Name);
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "QUERY %s FULLY MATCHED FOR %s.\n", v7, v6);
  }
  if ( (*(pQuery + 340) & 2) == 0 || CDOTA_RealtimeCombatAnalyzer::IsMultiQueryFullyMatched(this, pQuery) )
  {
    m_pNotify = pQuery->m_pNotify;
    if ( m_pNotify != 0 )
      (*(m_pNotify->_vptr_ICombatAnalyzerQueryUpdateNotify + 2))(m_pNotify, pQuery->m_nQueryID);
  }
}


// CDOTA_RealtimeCombatAnalyzer::QueryFailed  (line 1684, @0x000000000246cdd0, libserver.so)  // inlines: String
// calls: CDOTA_PlayerResource::GetPlayer, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log
// callers: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis
// strings: "disconnected player", "QUERY %s FAILED FOR %s.\n"
// globals: LOG_COMBAT_ANALYZER
void __fastcall CDOTA_RealtimeCombatAnalyzer::QueryFailed(
        CDOTA_RealtimeCombatAnalyzer *const this,
        CombatLogQuery *pQuery)
{
  CDOTAPlayer *Player; // r12
  const char *v4; // r13
  const char *v5; // rax
  ICombatAnalyzerQueryUpdateNotify *m_pNotify; // rdi

  Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, pQuery->m_nPlayerID);
  if ( LoggingSystem_IsChannelEnabled(LOG_COMBAT_ANALYZER, 1) != 0 )
  {
    v4 = "disconnected player";
    if ( Player != 0 )
      v4 = (*(Player->_vptr_IHandleEntity + 106))(Player);
    v5 = CUtlString::Get(&pQuery->m_Name);
    LoggingSystem_Log(LOG_COMBAT_ANALYZER, 1, "QUERY %s FAILED FOR %s.\n", v5, v4);
  }
  m_pNotify = pQuery->m_pNotify;
  if ( m_pNotify != 0 )
    (*(m_pNotify->_vptr_ICombatAnalyzerQueryUpdateNotify + 1))(m_pNotify, pQuery->m_nQueryID);
}


// CDOTA_RealtimeCombatAnalyzer::GetProgressForQuery  (line 1696, @0x0000000002476ba0, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Find
float __fastcall CDOTA_RealtimeCombatAnalyzer::GetProgressForQuery(
        CDOTA_RealtimeCombatAnalyzer *const this,
        int nIndex)
{
  CombatLogQuery *v2; // rbx
  unsigned __int16 v4; // ax
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  v2 = this->m_vecQueries.m_Memory.m_pMemory[nIndex];
  if ( v2 != 0
    && v2->m_nProgressStorageIndex != 0
    && (search.key = v2->m_nProgressStorageIndex,
        (v4 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                &v2->m_QueryStorage.m_Tree,
                &search)) != 0xFFFF) )
  {
    return v2->m_QueryStorage.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem;
  }
  else
  {
    return 0.0;
  }
}


// CDOTA_RealtimeCombatAnalyzer::FindQueryForID  (line 1711, @0x000000000246ce90, libserver.so)
// callers: CDOTAChallengeSystem::OnQueryFailed, CDOTAChallengeSystem::OnQuerySucceeded, CDOTAChallengeSystem::DebugTestChallenge, CDOTAChallengeSystem::DebugTestQuest
const CombatLogQuery *__fastcall CDOTA_RealtimeCombatAnalyzer::FindQueryForID(
        const CDOTA_RealtimeCombatAnalyzer *const this,
        int nQueryID)
{
  int m_Size; // ecx
  CombatLogQuery **m_pMemory; // rdx
  const CombatLogQuery *result; // rax
  const CombatLogQuery **v5; // rdx
  const CombatLogQuery **v6; // rcx

  m_Size = this->m_vecQueries.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_vecQueries.m_Memory.m_pMemory;
    result = *m_pMemory;
    if ( (*m_pMemory)->m_nQueryID == nQueryID )
      return result;
    v5 = (m_pMemory + 1);
    v6 = &v5[m_Size - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( result->m_nQueryID == nQueryID )
        return result;
    }
  }
  return 0;
}


