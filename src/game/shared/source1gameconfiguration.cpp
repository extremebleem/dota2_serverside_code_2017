
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetDefaultLightstyleString  (line 83, @0x00000000020bc730, libserver.so)
// callers: CLight::Spawn
// globals: g_DefaultLightstyles
const char *__fastcall GetDefaultLightstyleString(int styleIndex)
{
  const char *result; // rax

  result = "m";
  if ( styleIndex <= 0xC )
    return g_DefaultLightstyles[styleIndex];
  return result;
}


// CSource1GameConfiguration::Init  (line 96, @0x00000000020f0a50, libserver.so)
// calls: CGameConfiguration::Init, EventList_RegisterSharedEvents
// callers: CDOTAGameConfiguration::Init
InitReturnVal_t __fastcall CSource1GameConfiguration::Init(CSource1GameConfiguration *const this)
{
  InitReturnVal_t result; // eax

  result = CGameConfiguration::Init(this);
  if ( result == InitReturnVal_t::INIT_OK )
  {
    (*(this->CGameConfiguration::CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem
     + 26))(this);
    EventList_RegisterSharedEvents();
    return InitReturnVal_t::INIT_OK;
  }
  return result;
}


// CSource1GameConfiguration::InitGameSession  (line 115, @0x00000000020f0aa0, libserver.so)  // inlines: ActivityList_Free, ActivityList_Init, AllocPooledString, operator=
// calls: CGameConfiguration::InitGameSession, CEntitySystem::SetGlobals, ResetGlobalState, CServerEventQueue::Init, ConVar::SetValue, EventList_Init, EventList_Free, EventList_RegisterSharedEvents, ResetWindspeed, CEntitySystem::AllocPooledString, COM_TimestampedLog, InitBodyQue
// callers: CDOTAGameConfiguration::InitGameSession
// strings: "func_brush", "InitBodyQue()", "LightStyles"
// globals: g_DefaultLightstyles, g_iszFuncBrushClassname
bool __fastcall CSource1GameConfiguration::InitGameSession(
        CSource1GameConfiguration *const this,
        const GameSessionConfiguration_t *const gameSessionConfig)
{
  bool inited; // r13
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rsi
  const char *v9; // rdx
  UtlSymLargeId_t v10; // [rsp+0h] [rbp-40h]

  inited = CGameConfiguration::InitGameSession(this, gameSessionConfig);
  if ( inited )
  {
    CEntitySystem::SetGlobals(g_pEntitySystem, gpGlobals);
    v6 = *(gameSessionConfig + 25) == 0;
    CBaseEntity::sm_bAccurateTriggerBboxChecks = 1;
    gpGlobals->eLoadType = !v6;
    if ( *(gameSessionConfig + 25) == 0 && *(gameSessionConfig + 85) == 0 )
      ResetGlobalState();
    CServerEventQueue::Init(&g_EventQueue);
    g_fGameOver = 0;
    g_pLastSpawn = 0;
    ConVar::SetValue(&g_Language, 0);
    if ( g_pAnimationSystem != 0 )
    {
      (*(*g_pAnimationSystem + 272LL))(g_pAnimationSystem);
      if ( g_pAnimationSystem != 0 )
        (*(*g_pAnimationSystem + 280LL))(g_pAnimationSystem);
    }
    v7 = 0;
    (*(this->CGameConfiguration::CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem
     + 26))(this);
    EventList_Init();
    EventList_Free();
    EventList_RegisterSharedEvents();
    ResetWindspeed();
    CEntitySystem::AllocPooledString(g_pEntitySystem, "func_brush");
    g_iszFuncBrushClassname.u.m_Id = v10;
    COM_TimestampedLog("InitBodyQue()");
    InitBodyQue();
    COM_TimestampedLog("LightStyles");
    do
    {
      v8 = v7;
      v9 = g_DefaultLightstyles[v7++];
      (*(*engine + 296LL))(engine, v8, v9);
    }
    while ( v7 != 13 );
    (*(*engine + 296LL))(engine, 63, "a");
  }
  return inited;
}


// CSource1GameConfiguration::ShutdownGameSession  (line 197, @0x000000000209d5f0, libserver.so)  // inlines: Clear, Shutdown
// calls: Steam3Server, InvalidateQueryCache, CBaseEntity::SetAllowPrecache
void __fastcall CSource1GameConfiguration::ShutdownGameSession(CSource1GameConfiguration *const this)
{
  CSteam3ServerGameS1 *v1; // rax

  v1 = Steam3Server();
  v1->m_pSteamClient = 0;
  v1->m_pSteamGameServer = 0;
  v1->m_pSteamGameServerUtils = 0;
  v1->m_pSteamGameServerNetworking = 0;
  v1->m_pSteamGameServerStats = 0;
  v1->m_pSteamHTTP = 0;
  v1->m_pSteamInventory = 0;
  v1->m_pSteamUGC = 0;
  v1->m_pSteamApps = 0;
  v1->m_bInitialized = 0;
  InvalidateQueryCache();
  CBaseEntity::SetAllowPrecache(0);
  g_nCurrentChapterIndex = -1;
}


// CSource1GameConfiguration::RegisterGameActivities  (line 259, @0x000000000209d660, libserver.so)
// calls: ActivityList_RegisterSharedActivities
// callers: CDOTAGameConfiguration::RegisterGameActivities
void __fastcall CSource1GameConfiguration::RegisterGameActivities(CSource1GameConfiguration *const this)
{
  ActivityList_RegisterSharedActivities();
}


// OnVguiScreenTableChanged  (line 297, @0x000000000209c820, libserver.so)
void __fastcall OnVguiScreenTableChanged(
        void *object,
        INetworkStringTable *stringTable,
        int stringNumber,
        const char *newString,
        const void *newData)
{
  ;
}


// OnEffectStringTableChanged  (line 298, @0x000000000209c830, libserver.so)
void __fastcall OnEffectStringTableChanged(
        void *object,
        INetworkStringTable *stringTable,
        int stringNumber,
        const char *newString,
        const void *newData)
{
  ;
}


// CSource1GameConfiguration::GetStringTableDefs  (line 301, @0x00000000020f0c40, libserver.so)  // inlines: AddToTail, CopyConstruct<StringTableDef_t>, Element, GrowMemory, operator[]
// calls: CGameConfiguration::GetStringTableDefs, memcpy, CUtlMemory<StringTableDef_t, int>::Grow
// callers: CDOTAGameConfiguration::GetStringTableDefs
// strings: "EffectDispatch"
// globals: DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::dataDesc
void __fastcall CSource1GameConfiguration::GetStringTableDefs(
        CSource1GameConfiguration *const this,
        CUtlVector<StringTableDef_t,CUtlMemory<StringTableDef_t,int> > *const list)
{
  typedescription_t *v2; // r12
  CUtlVectorBase<StringTableDef_t,CUtlMemory<StringTableDef_t,int> >::CAllocator *p_m_Memory; // r14
  __int64 m_Size; // r15
  int v6; // eax

  v2 = CSource1GameConfiguration::GetStringTableDefs(CUtlVector<StringTableDef_t,CUtlMemory<StringTableDef_t,int>> &)::s_pDefs;
  p_m_Memory = &list->m_Memory;
  CGameConfiguration::GetStringTableDefs(this, list);
  do
  {
    m_Size = list->m_Size;
    v6 = list->m_Size;
    if ( m_Size == list->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<StringTableDef_t,int>::Grow(p_m_Memory, 1);
      v6 = list->m_Size;
    }
    list->m_Size = v6 + 1;
    if ( &list->m_Memory.m_pMemory[m_Size] != 0 )
      memcpy(&list->m_Memory.m_pMemory[m_Size], v2, sizeof(list->m_Memory.m_pMemory[m_Size]));
    v2 = (v2 + 176);
  }
  while ( v2 != DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::dataDesc );
}


// CSource1GameConfiguration::IsUserMessage  (line 319, @0x00000000020f0ce0, libserver.so)
// calls: CGameConfiguration::IsUserMessage, EBaseUserMessages_IsValid
// callers: CDOTAGameConfiguration::IsUserMessage
bool __fastcall CSource1GameConfiguration::IsUserMessage(const CSource1GameConfiguration *const this, int nMessageId)
{
  bool result; // al

  result = CGameConfiguration::IsUserMessage(this, nMessageId);
  if ( !result )
    return EBaseUserMessages_IsValid(nMessageId);
  return result;
}


// CSource1GameConfiguration::InstantReplayShouldSkipMessage  (line 327, @0x000000000209d670, libserver.so)
// calls: EBaseEntityMessages_IsValid
bool __fastcall CSource1GameConfiguration::InstantReplayShouldSkipMessage(
        const CSource1GameConfiguration *const this,
        int nMessageId)
{
  return EBaseEntityMessages_IsValid(nMessageId);
}


// CSource1GameConfiguration::InstantReplayShouldIgnoreMessage  (line 337, @0x000000000209c840, libserver.so)
bool __fastcall CSource1GameConfiguration::InstantReplayShouldIgnoreMessage(
        const CSource1GameConfiguration *const this,
        int nMessageId)
{
  return 0;
}


