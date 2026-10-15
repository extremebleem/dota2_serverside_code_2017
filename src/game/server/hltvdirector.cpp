
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GameEventLessFunc  (line 25, @0x00000000022541d0, libserver.so)
bool __fastcall GameEventLessFunc(const CHLTVGameEvent *const e1, const CHLTVGameEvent *const e2)
{
  return e1->m_Tick < e2->m_Tick;
}


// InitRandomOrder  (line 32, @0x0000000002256010, libserver.so)
// calls: RandomInt
// callers: CHLTVDirector::AnalyzeCameras, CHLTVDirector::AnalyzePlayers
// globals: s_RndOrder
void __fastcall InitRandomOrder(int nFields)
{
  int v1; // r13d
  __int64 v2; // rax
  int v3; // r14d
  unsigned int v4; // r13d
  int v5; // r12d
  int v6; // r15d
  int v7; // eax
  int v8; // esi

  v1 = 256;
  if ( nFields <= 256 )
    v1 = nFields;
  if ( v1 > 0 )
  {
    v2 = 0;
    do
    {
      s_RndOrder[v2] = v2;
      ++v2;
    }
    while ( v2 != (v1 - 1) + 1LL );
  }
  v3 = v1 / 2;
  if ( v1 / 2 > 0 )
  {
    v4 = v1 - 1;
    v5 = 0;
    do
    {
      ++v5;
      v6 = RandomInt(0, v4);
      v7 = RandomInt(0, v4);
      v8 = s_RndOrder[v6];
      s_RndOrder[v6] = s_RndOrder[v7];
      s_RndOrder[v7] = v8;
    }
    while ( v5 != v3 );
  }
}


// WeightedAngle  (line 56, @0x0000000002254800, libserver.so)  // inlines: DotProduct
// calls: VectorNormalize
// callers: CHLTVDirector::AnalyzeCameras, CHLTVDirector::AnalyzePlayers
float __cdecl WeightedAngle(Vector vec1, Vector vec2)
{
  float v2; // xmm0_4
  Vector vec2a; // [rsp+0h] [rbp-20h] BYREF
  Vector vec1a; // [rsp+10h] [rbp-10h] BYREF

  vec1a = vec1;
  vec2a = vec2;
  VectorNormalize(&vec1a);
  VectorNormalize(&vec2a);
  v2 = ((((vec1a.x * vec2a.x) + (vec1a.y * vec2a.y)) + (vec1a.z * vec2a.z)) + 1.0) * 0.5;
  return v2 * v2;
}


// CHLTVDirector::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 91, @0x000000000226a190, libserver.so)
void __cdecl CHLTVDirector::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CHLTVDirector::CHLTVDirector  (line 97, @0x000000000226a1a0, libserver.so)  // inlines: CGameEventListener, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetLessFunc
// callers: CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::CreateGameSystem, CDOTAHLTVDirector::CDOTAHLTVDirector
// globals: GameEventLessFunc(CHLTVGameEvent const&,CHLTVGameEvent const&)
void __fastcall CHLTVDirector::CHLTVDirector(CHLTVDirector *const this)
{
  this->_vptr_IGameEventListener2 = off_4052AF0;
  this->_vptr_IGameSystem = &off_4052C50;
  this->_vptr_IHLTVDirector = off_4052DA0;
  this->m_EventHistory.m_Root = -1;
  this->m_EventHistory.m_NumElements = 0;
  this->m_EventHistory.m_FirstFree = -1;
  this->m_EventHistory.m_LastAlloc.index = -1;
  this->m_bRegisteredForEvents = 0;
  this->m_EventHistory.m_Elements.m_pMemory = 0;
  this->m_EventHistory.m_Elements.m_nAllocationCount = 0;
  this->m_EventHistory.m_Elements.m_nGrowSize = 0;
  this->m_EventHistory.m_pElements = 0;
  this->m_iPVSEntity.m_Data = 0;
  this->m_fDelay = 10.0;
  this->m_iLastPlayer = 1;
  this->m_pHLTVServer = 0;
  this->m_pHLTVClient = 0;
  this->m_iCameraMan.m_Data = 0;
  this->m_nNumFixedCameras = 0;
  this->m_EventHistory.m_LessFunc = GameEventLessFunc;
  this->m_nNextAnalyzeTick = 0;
  this->m_iCameraManIndex.m_Data = 0;
  this->m_iRunningIndex = 0;
  this->m_pLastCameraEvent = 0;
}


// CHLTVDirector::~CHLTVDirector  (line 113, @0x000000000226f400, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CGameEventListener, ~CUtlMemory, ~CUtlRBTree, ~IGameEventListener2, ~IHLTVDirector
// calls: CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem
// callers: CHLTVDirector::~CHLTVDirector, CDOTAHLTVDirector::~CDOTAHLTVDirector, CDOTAHLTVDirector::CDOTAHLTVDirector
void __fastcall CHLTVDirector::~CHLTVDirector(CHLTVDirector *const this)
{
  CUtlRBTree<CHLTVGameEvent,short unsigned int,bool (*)(const CHLTVGameEvent&,const CHLTVGameEvent&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int>,short unsigned int> > *p_m_EventHistory; // rdi
  bool v3; // zf

  p_m_EventHistory = &this->m_EventHistory;
  p_m_EventHistory[-29].m_LessFunc = off_4052AF0;
  *&p_m_EventHistory[-29].m_Elements.m_nAllocationCount = &off_4052C50;
  p_m_EventHistory[-29].m_pElements = off_4052DA0;
  CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::Purge(p_m_EventHistory);
  if ( (this->m_EventHistory.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>::Purge(&this->m_EventHistory.m_Elements);
  this->_vptr_IHLTVDirector = off_404F150;
  IGameSystem::~IGameSystem(&this->IGameSystem);
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CHLTVDirector::~CHLTVDirector  (line 113, @0x000000000226f4d0, libserver.so)
// calls: CHLTVDirector::~CHLTVDirector, operator delete
void __fastcall CHLTVDirector::~CHLTVDirector(CHLTVDirector *const this)
{
  CHLTVDirector::~CHLTVDirector(this);
  operator delete(this);
}


// CHLTVDirector::Init  (line 117, @0x00000000022541e0, libserver.so)
bool __fastcall CHLTVDirector::Init(CHLTVDirector *const this)
{
  return 1;
}


// CHLTVDirector::Shutdown  (line 122, @0x0000000002276b60, libserver.so)
// calls: CHLTVDirector::RemoveEventsFromHistory
void __fastcall CHLTVDirector::Shutdown(CHLTVDirector *const this)
{
  Source1LegacyGameEvent_t *m_pLastCameraEvent; // rdi

  m_pLastCameraEvent = this->m_pLastCameraEvent;
  if ( m_pLastCameraEvent != 0 )
    (*(*m_pLastCameraEvent + 8LL))(m_pLastCameraEvent);
  this->m_pLastCameraEvent = 0;
  CHLTVDirector::RemoveEventsFromHistory(this, -1);
  this->m_iRunningIndex = 0;
}


// CHLTVDirector::FireGameEvent  (line 131, @0x00000000022768a0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator[]
// calls: CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::LinkToParent
void __fastcall CHLTVDirector::FireGameEvent(CHLTVDirector *const this, IGameEvent *event)
{
  int v4; // eax
  unsigned __int16 m_Root; // r13
  int v6; // edx
  unsigned __int16 m_Right; // ax
  char v8; // cl
  bool v9; // zf
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *m_pMemory; // rax
  bool v11; // bl
  unsigned __int16 v12; // ax
  int (**vptr_IGameEventListener2)(...); // rax
  CHLTVGameEvent gameevent; // [rsp+0h] [rbp-50h] BYREF

  if ( this->m_pHLTVServer != 0 )
  {
    gameevent.m_Event = (*(gameeventmanager->_vptr_IBaseInterface + 10))(gameeventmanager);
    v4 = (*(event->_vptr_IGameEvent + 8))(event, "priority", 0xFFFFFFFFLL);
    m_Root = this->m_EventHistory.m_Root;
    gameevent.m_Priority = v4;
    gameevent.m_Tick = gpGlobals->tickcount;
    v6 = this->m_iRunningIndex + 1;
    gameevent.m_Index = this->m_iRunningIndex;
    this->m_iRunningIndex = v6;
    if ( m_Root != 0xFFFF )
    {
      while ( 1 )
      {
        v9 = !this->m_EventHistory.m_LessFunc(&gameevent, &this->m_EventHistory.m_Elements.m_pMemory[m_Root].m_Data);
        m_pMemory = this->m_EventHistory.m_Elements.m_pMemory;
        if ( v9 )
        {
          m_Right = m_pMemory[m_Root].m_Right;
          v8 = 0;
          if ( m_Right == 0xFFFF )
          {
LABEL_8:
            v11 = v8;
            goto LABEL_9;
          }
        }
        else
        {
          m_Right = m_pMemory[m_Root].m_Left;
          v8 = 1;
          if ( m_Right == 0xFFFF )
            goto LABEL_8;
        }
        m_Root = m_Right;
      }
    }
    m_Root = -1;
    v11 = 0;
LABEL_9:
    v12 = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NewNode(
            &this->m_EventHistory,
            &gameevent);
    CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::LinkToParent(
      &this->m_EventHistory,
      v12,
      m_Root,
      v11);
    vptr_IGameEventListener2 = this->_vptr_IGameEventListener2;
    ++this->m_EventHistory.m_NumElements;
    vptr_IGameEventListener2[41](this, &gameevent);
  }
}


// CHLTVDirector::GetHLTVServer  (line 150, @0x0000000002254200, libserver.so)
IHLTVServer *__fastcall CHLTVDirector::GetHLTVServer(CHLTVDirector *const this)
{
  return this->m_pHLTVServer;
}


// CHLTVDirector::SetHLTVServer  (line 155, @0x0000000002276bc0, libserver.so)  // inlines: LeafCodeInfo_t, ListenForGameEvent
// calls: CHLTVDirector::RemoveEventsFromHistory, UTIL_PlayerByIndex, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAHLTVDirector::SetHLTVServer
// strings: "player_hurt", "player_death", "round_end", "hltv_cameraman", "hltv_rank_entity", "hltv_rank_camera" (9 total)
void __fastcall CHLTVDirector::SetHLTVServer(CHLTVDirector *const this, IHLTVServer *hltv)
{
  CHLTVDirector *v3; // rbx
  int v4; // eax
  CBasePlayer *v5; // rax
  IGameEventManager2 *v6; // rdi
  IGameEventManager2 *v7; // rdi
  IGameEventManager2 *v8; // rdi
  IGameEventManager2 *v9; // rdi
  IGameEventManager2 *v10; // rdi
  IGameEventManager2 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  LeafCodeInfo_t v18; // [rsp+0h] [rbp-30h] BYREF

  v3 = this;
  CHLTVDirector::RemoveEventsFromHistory(this, -1);
  if ( hltv != 0 )
  {
    v4 = (*(hltv->_vptr_IBaseInterface + 4))(hltv);
    v5 = UTIL_PlayerByIndex((v4 + 1));
    v3->m_pHLTVClient = v5;
    if ( v5 != 0 && v5->m_pl.hltv )
    {
      v3->m_pHLTVServer = hltv;
      v3->m_bRegisteredForEvents = 1;
      (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, v3, "player_hurt", 1);
      v6 = gameeventmanager;
      v3->m_bRegisteredForEvents = 1;
      (*(v6->_vptr_IBaseInterface + 4))(v6, v3, "player_death", 1);
      v7 = gameeventmanager;
      v3->m_bRegisteredForEvents = 1;
      (*(v7->_vptr_IBaseInterface + 4))(v7, v3, "round_end", 1);
      v8 = gameeventmanager;
      v3->m_bRegisteredForEvents = 1;
      (*(v8->_vptr_IBaseInterface + 4))(v8, v3, "round_start", 1);
      v9 = gameeventmanager;
      v3->m_bRegisteredForEvents = 1;
      (*(v9->_vptr_IBaseInterface + 4))(v9, v3, "hltv_cameraman", 1);
      v10 = gameeventmanager;
      v3->m_bRegisteredForEvents = 1;
      (*(v10->_vptr_IBaseInterface + 4))(v10, v3, "hltv_rank_entity", 1);
      v11 = gameeventmanager;
      v3->m_bRegisteredForEvents = 1;
      (*(v11->_vptr_IBaseInterface + 4))(v11, v3, "hltv_rank_camera", 1);
      return;
    }
    v3->m_pHLTVServer = 0;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v18.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/hltvdirector.cpp";
      v18.m_szFunction = "SetHLTVServer";
      v18.m_nLine = 170;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v18, "Couldn't find HLTV client player.", v16, v17);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
  }
  v3->m_pHLTVServer = 0;
}


// CHLTVDirector::BroadcastEventInternal  (line 189, @0x000000000226a290, libserver.so)  // inlines: CNetMessagePB, FindOrCreateNetMessage<Source1LegacyGameEvent_t>, Source1LegacyGameEvent_t, ~CNetMessagePB, ~Source1LegacyGameEvent_t
// calls: CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, DevMsg(char const*,...), CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent, CMsgSource1LegacyGameEvent::CopyFrom, operator new, _Unwind_Resume, operator delete
// callers: CSource2GameClients::SendHLTVStatusMessage, CHLTVDirector::OnStartRecording, CHLTVDirector::StartDelayMessage, CHLTVDirector::StartFixedCameraShot, CHLTVDirector::StartChaseCameraShot, CHLTVDirector::BroadcastScreenMessage, CHLTVDirector::FinishCameraManShot, CHLTVDirector::StartCameraManShot, CHLTVDirector::StartInstantBroadcastShot, CHLTVDirector::StartNewShot, CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CDOTAHLTVDirector::StartChaseCameraShot
// strings: "CHLTVServer: failed to serialize event '%s'.\n", "CHLTVServer, BroadcastEventInternal %s not possible without hltv server pointer\n"
// globals: INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5,(NetChannelBufType_t)1,true>::s_ProtobufBinding
void __fastcall CHLTVDirector::BroadcastEventInternal(
        CHLTVDirector *const this,
        IGameEvent *event,
        IHLTVServer *pServer)
{
  IHLTVServer *m_pHLTVServer; // r13
  bool v6; // zf
  int (**vptr_IGameEvent)(...); // rax
  const char *v8; // rax
  int v9; // r15d
  NetMessageHandle_t v10; // r14
  void (__fastcall *v11)(IHLTVServer *, __int64, NetMessageHandle_t, _QWORD *, CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5u,(NetChannelBufType_t)1,true>::CProtobufBinding *); // r15
  __int64 v12; // rax
  Source1LegacyGameEvent_t *m_pLastCameraEvent; // r15
  const char *v14; // rax
  CMsgSource1LegacyGameEvent *v15; // [rsp+8h] [rbp-78h]
  _QWORD v16[14]; // [rsp+10h] [rbp-70h] BYREF

  m_pHLTVServer = pServer;
  if ( pServer == 0 )
    m_pHLTVServer = this->m_pHLTVServer;
  CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v16);
  v16[0] = off_3FF70D0;
  v6 = (*(gameeventmanager->_vptr_IBaseInterface + 12))(gameeventmanager, event, v16) == 0;
  vptr_IGameEvent = event->_vptr_IGameEvent;
  if ( v6 )
  {
    v8 = (vptr_IGameEvent[2])(event);
    DevMsg("CHLTVServer: failed to serialize event '%s'.\n", v8);
  }
  else
  {
    v9 = vptr_IGameEvent[3](event);
    if ( v9 == (*(this->_vptr_IGameEventListener2 + 15))(this) )
    {
      m_pLastCameraEvent = this->m_pLastCameraEvent;
      if ( m_pLastCameraEvent == 0 )
      {
        v15 = operator new(0x40u);
        memset(v15, 0, 0x40u);
        m_pLastCameraEvent = v15;
        CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v15);
        *v15 = off_3FF70D0;
        this->m_pLastCameraEvent = v15;
      }
      CMsgSource1LegacyGameEvent::CopyFrom(m_pLastCameraEvent, v16);
    }
    if ( INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 207, &CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
    v10 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( m_pHLTVServer != 0 )
    {
      v11 = *(m_pHLTVServer->_vptr_IBaseInterface + 12);
      v12 = (*(event->_vptr_IGameEvent + 2))(event);
      v11(
        m_pHLTVServer,
        v12,
        v10,
        v16,
        &CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5,(NetChannelBufType_t)1,true>::s_ProtobufBinding);
    }
    else
    {
      v14 = (*(event->_vptr_IGameEvent + 2))(event);
      DevMsg("CHLTVServer, BroadcastEventInternal %s not possible without hltv server pointer\n", v14);
    }
  }
  v16[0] = &off_3FF7010;
  CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(v16);
}


// CHLTVDirector::OnStartRecording  (line 226, @0x000000000226a480, libserver.so)
// calls: CHLTVDirector::BroadcastEventInternal
// strings: "hltv_versioninfo"
void __fastcall CHLTVDirector::OnStartRecording(CHLTVDirector *const this)
{
  __int64 v2; // rax
  IGameEvent *v3; // rbx

  v2 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_versioninfo", 1, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*v2 + 112LL))(v2, "version", 1);
    CHLTVDirector::BroadcastEventInternal(this, v3, 0);
    (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v3);
  }
}


// CHLTVDirector::IsActive  (line 238, @0x0000000002254220, libserver.so)
bool __fastcall CHLTVDirector::IsActive(CHLTVDirector *const this)
{
  return this->m_pHLTVServer != 0;
}


// CHLTVDirector::GetDelay  (line 243, @0x0000000002254240, libserver.so)
float __fastcall CHLTVDirector::GetDelay(CHLTVDirector *const this)
{
  return this->m_fDelay;
}


// CHLTVDirector::GetDirectorTick  (line 248, @0x0000000002254260, libserver.so)
int __fastcall CHLTVDirector::GetDirectorTick(CHLTVDirector *const this)
{
  return this->m_nBroadcastTick;
}


// CHLTVDirector::GetBroadcastTime  (line 254, @0x000000000226a8b0, libserver.so)  // inlines: GetFloat
// callers: CDOTAGCServerSystem::UpdateGCServerInfo
float __fastcall CHLTVDirector::GetBroadcastTime(CHLTVDirector *const this)
{
  int m_nBroadcastTick; // eax

  m_nBroadcastTick = this->m_nBroadcastTick;
  if ( m_nBroadcastTick <= 0 )
    return (gpGlobals->tickcount - ((tv_delay.m_pParent->m_Value.m_fValue / gpGlobals->interval_per_tick) + 0.5))
         * gpGlobals->interval_per_tick;
  else
    return m_nBroadcastTick * gpGlobals->interval_per_tick;
}


// CHLTVDirector::GetPVSEntity  (line 266, @0x0000000002254280, libserver.so)
CEntityIndex __fastcall CHLTVDirector::GetPVSEntity(CHLTVDirector *const this)
{
  return this->m_iPVSEntity.m_Data;
}


// CHLTVDirector::GetPVSOrigin  (line 271, @0x00000000022542a0, libserver.so)
Vector __fastcall CHLTVDirector::GetPVSOrigin(CHLTVDirector *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vPVSOrigin.x;
  result.z = this->m_vPVSOrigin.z;
  return result;
}


// CHLTVDirector::UpdateSettings  (line 276, @0x000000000227a100, libserver.so)  // inlines: GetFloat
// calls: UTIL_PlayerByIndex, CHLTVDirector::SetCameraMan
void __fastcall CHLTVDirector::UpdateSettings(CHLTVDirector *const this)
{
  float m_fValue; // xmm0_4
  int tickcount; // r12d
  CBasePlayer *v4; // rax
  int v5; // eax

  m_fValue = tv_delay.m_pParent->m_Value.m_fValue;
  this->m_fDelay = m_fValue;
  tickcount = gpGlobals->tickcount;
  if ( m_fValue >= 6.0 )
    tickcount -= ((m_fValue / gpGlobals->interval_per_tick) + 0.5);
  else
    this->m_fDelay = 0.0;
  if ( this->m_nBroadcastTick == 0 && tickcount > 0 )
    this->m_nNextShotTick = 0;
  if ( this->m_iCameraManIndex.m_Data > 0 )
  {
    v4 = UTIL_PlayerByIndex(this->m_iCameraManIndex);
    if ( v4 == 0 || v4->m_iTeamNum.m_Value != 1 )
      CHLTVDirector::SetCameraMan(this, 0);
  }
  v5 = 0;
  if ( tickcount >= 0 )
    v5 = tickcount;
  this->m_nBroadcastTick = v5;
}


// CHLTVDirector::GetModEvents  (line 313, @0x00000000022542d0, libserver.so)
// globals: CHLTVDirector::GetModEvents(void)::s_modevents
const char **__fastcall CHLTVDirector::GetModEvents(CHLTVDirector *const this)
{
  return CHLTVDirector::GetModEvents(void)::s_modevents;
}


// CHLTVDirector::BuildCameraList  (line 335, @0x000000000226a910, libserver.so)  // inlines: String, ToCStr, VectorSubtract, memset, operator-
// calls: CGameEntitySystem::FindEntityByClassname, CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, VectorAngles, CBaseEntity::SetAbsAngles
// callers: CHLTVDirector::PostSpawnGroupLoad
void __fastcall CHLTVDirector::BuildCameraList(CHLTVDirector *const this)
{
  const char *v2; // rax
  CBaseEntity *i; // rbx
  const char *m_pAsString; // rdx
  CBaseEntity *EntityByName; // r14
  const Vector *AbsOrigin; // r15
  const Vector *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  int m_nNumFixedCameras; // eax
  const char *v11; // rax
  QAngle angles; // [rsp+20h] [rbp-50h] BYREF
  Vector v13; // [rsp+30h] [rbp-40h] BYREF

  this->m_nNumFixedCameras = 0;
  memset(this->m_pFixedCameras, 0, sizeof(this->m_pFixedCameras));
  v2 = (*(this->_vptr_IGameEventListener2 + 24))(this);
  for ( i = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, v2);
        i != 0 && this->m_nNumFixedCameras <= 63;
        i = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, i, v11) )
  {
    m_pAsString = "";
    if ( i->m_target.u.m_Id != 0 )
      m_pAsString = i->m_target.u.m_pAsString;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pAsString, 0, 0, 0, 0);
    if ( EntityByName != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(i);
      v7 = CBaseEntity::GetAbsOrigin(EntityByName);
      v8 = v7->y - AbsOrigin->y;
      v9 = v7->z - AbsOrigin->z;
      v13.x = v7->x - AbsOrigin->x;
      v13.y = v8;
      v13.z = v9;
      VectorAngles(&v13, &angles);
      CBaseEntity::SetAbsAngles(i, &angles);
    }
    m_nNumFixedCameras = this->m_nNumFixedCameras;
    this->m_pFixedCameras[m_nNumFixedCameras] = i;
    this->m_nNumFixedCameras = m_nNumFixedCameras + 1;
    v11 = (*(this->_vptr_IGameEventListener2 + 24))(this);
  }
}


// CHLTVDirector::PostSpawnGroupLoad  (line 363, @0x0000000002276d90, libserver.so)  // inlines: Init
// calls: CHLTVDirector::BuildCameraList, CHLTVDirector::RemoveEventsFromHistory
void __fastcall CHLTVDirector::PostSpawnGroupLoad(
        CHLTVDirector *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  CHLTVDirector::BuildCameraList(this);
  this->m_vPVSOrigin.x = 0.0;
  this->m_vPVSOrigin.y = 0.0;
  this->m_vPVSOrigin.z = 0.0;
  this->m_iPVSEntity.m_Data = 0;
  this->m_nNextShotTick = 0;
  this->m_nNextAnalyzeTick = 0;
  this->m_iCameraManIndex.m_Data = 0;
  this->m_iRunningIndex = 0;
  CHLTVDirector::RemoveEventsFromHistory(this, -1);
}


// CHLTVDirector::FrameUpdatePostEntityThink  (line 379, @0x00000000022542f0, libserver.so)
// callers: CDOTAHLTVDirector::FrameUpdatePostEntityThink
void __fastcall CHLTVDirector::FrameUpdatePostEntityThink(
        CHLTVDirector *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int tickcount; // eax
  int m_nBroadcastTick; // eax

  if ( this->m_pHLTVServer != 0 )
  {
    (*(this->_vptr_IGameEventListener2 + 32))(this, msg);
    tickcount = gpGlobals->tickcount;
    if ( this->m_nNextAnalyzeTick < tickcount && this->m_fDelay >= 6.0 )
    {
      this->m_nNextAnalyzeTick = ((0.5 / gpGlobals->interval_per_tick) + 0.5) + tickcount;
      (*(this->_vptr_IGameEventListener2 + 33))(this);
      (*(this->_vptr_IGameEventListener2 + 34))(this);
    }
    m_nBroadcastTick = this->m_nBroadcastTick;
    if ( m_nBroadcastTick <= 0 )
    {
      (*(this->_vptr_IGameEventListener2 + 27))(this);
    }
    else if ( m_nBroadcastTick >= this->m_nNextShotTick )
    {
      (*(this->_vptr_IGameEventListener2 + 25))(this);
    }
  }
}


// CHLTVDirector::StartDelayMessage  (line 409, @0x000000000226a520, libserver.so)
// calls: CHLTVDirector::BroadcastEventInternal
// strings: "hltv_message", "Please wait for broadcast to start ..."
void __fastcall CHLTVDirector::StartDelayMessage(CHLTVDirector *const this)
{
  int tickcount; // eax
  __int64 v3; // rax
  IGameEvent *v4; // r12

  tickcount = gpGlobals->tickcount;
  if ( this->m_nNextShotTick <= tickcount )
  {
    this->m_nNextShotTick = ((5.0 / gpGlobals->interval_per_tick) + 0.5) + tickcount;
    v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_message", 1, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
      (*(*v3 + 136LL))(v3, "text", "Please wait for broadcast to start ...");
      CHLTVDirector::BroadcastEventInternal(this, v4, 0);
      (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v4);
    }
    (*(this->_vptr_IGameEventListener2 + 28))(this, 1);
  }
}


// CHLTVDirector::StartBestPlayerCameraShot  (line 432, @0x000000000226d7a0, libserver.so)  // inlines: Element, _V_strcmp, memset, operator[]
// calls: CHLTVDirector::FindFirstEvent, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder, RandomFloat
// strings: "hltv_rank_entity", "rank"
void __fastcall CHLTVDirector::StartBestPlayerCameraShot(CHLTVDirector *const this)
{
  int FirstEvent; // eax
  unsigned __int16 v3; // r12
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v4; // r15
  unsigned __int16 Inorder; // ax
  int v6; // eax
  float v7; // xmm0_4
  void (__fastcall *v8)(CHLTVDirector *const, _QWORD, _QWORD, __int64, __int64, __int64, _DWORD); // r12
  float v9; // xmm0_4
  __int64 v10; // r9
  int indexInner; // [rsp+10h] [rbp-150h]
  unsigned int iBestTarget; // [rsp+14h] [rbp-14Ch]
  float flBestRank; // [rsp+18h] [rbp-148h]
  unsigned int iBestCamera; // [rsp+1Ch] [rbp-144h]
  float flPlayerRanking[80]; // [rsp+20h] [rbp-140h] BYREF

  memset(flPlayerRanking, 0, 260);
  FirstEvent = CHLTVDirector::FindFirstEvent(this, this->m_nBroadcastTick);
  if ( FirstEvent == 0xFFFF )
    goto LABEL_14;
  v3 = FirstEvent;
  v4 = &this->m_EventHistory.m_Elements.m_pMemory[FirstEvent];
  if ( this->m_nNextShotTick <= v4->m_Data.m_Tick )
    goto LABEL_14;
  iBestTarget = -1;
  iBestCamera = -1;
  flBestRank = -1.0;
  do
  {
    if ( strcmp((*(v4->m_Data.m_Event->_vptr_IGameEvent + 2))(v4->m_Data.m_Event), "hltv_rank_entity") == 0 )
    {
      v6 = (*(v4->m_Data.m_Event->_vptr_IGameEvent + 8))(v4->m_Data.m_Event, "index", 0);
      if ( v6 <= 64 )
      {
        indexInner = v6;
        v7 = (*(v4->m_Data.m_Event->_vptr_IGameEvent + 10))(v4->m_Data.m_Event, "rank", 0.0) + flPlayerRanking[v6];
        flPlayerRanking[indexInner] = v7;
        if ( v7 > flBestRank )
        {
          flBestRank = v7;
          iBestCamera = indexInner;
          iBestTarget = (*(v4->m_Data.m_Event->_vptr_IGameEvent + 8))(v4->m_Data.m_Event, "target", 0);
        }
      }
    }
    Inorder = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                &this->m_EventHistory,
                v3);
    if ( Inorder == 0xFFFF )
      break;
    v3 = Inorder;
    v4 = &this->m_EventHistory.m_Elements.m_pMemory[Inorder];
  }
  while ( v4->m_Data.m_Tick < this->m_nNextShotTick );
  if ( iBestCamera == -1 )
  {
LABEL_14:
    (*(this->_vptr_IGameEventListener2 + 28))(this, 1);
  }
  else
  {
    v8 = *(this->_vptr_IGameEventListener2 + 31);
    v9 = RandomFloat(0.0, 1.0);
    v10 = 20;
    if ( v9 <= 0.5 )
      v10 = 4294967276LL;
    v8(this, iBestCamera, iBestTarget, 112, 20, v10, 0);
  }
}


// CHLTVDirector::StartFixedCameraShot  (line 488, @0x000000000226a5f0, libserver.so)  // inlines: operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, RandomFloat, CHLTVDirector::BroadcastEventInternal
// strings: "hltv_fixed", "posx", "posy", "posz", "theta", "phi"
void __fastcall CHLTVDirector::StartFixedCameraShot(CHLTVDirector *const this, int iCamera, int iTarget)
{
  const CBaseEntity *v5; // rbx
  const QAngle *AbsAngles; // rax
  IGameEventManager2 *v7; // rdi
  vec_t x; // xmm5_4
  vec_t y; // xmm6_4
  __int64 v10; // rax
  IGameEvent *v11; // r13
  void (__fastcall *v12)(IGameEvent *, char *, float); // r12
  float v13; // xmm0_4
  float v14; // [rsp+Ch] [rbp-34h]
  float aViewAngle; // [rsp+10h] [rbp-30h]
  Vector aViewAngle_4; // [rsp+14h] [rbp-2Ch]

  v5 = this->m_pFixedCameras[iCamera];
  aViewAngle_4 = *CBaseEntity::GetAbsOrigin(v5);
  AbsAngles = CBaseEntity::GetAbsAngles(v5);
  v7 = gameeventmanager;
  x = AbsAngles->x;
  y = AbsAngles->y;
  this->m_iPVSEntity.m_Data = 0;
  this->m_vPVSOrigin = aViewAngle_4;
  v14 = x;
  aViewAngle = y;
  v10 = (*(v7->_vptr_IBaseInterface + 7))(v7, "hltv_fixed", 1, 0);
  v11 = v10;
  if ( v10 != 0 )
  {
    (*(*v10 + 112LL))(v10, "posx", aViewAngle_4.x);
    (*(v11->_vptr_IGameEvent + 14))(v11, "posy", aViewAngle_4.y);
    (*(v11->_vptr_IGameEvent + 14))(v11, "posz", aViewAngle_4.z);
    (*(v11->_vptr_IGameEvent + 14))(v11, "theta", v14);
    (*(v11->_vptr_IGameEvent + 14))(v11, "phi", aViewAngle);
    (*(v11->_vptr_IGameEvent + 14))(v11, "target", iTarget);
    v12 = *(v11->_vptr_IGameEvent + 16);
    v13 = RandomFloat(50.0, 110.0);
    v12(v11, "fov", v13);
    CHLTVDirector::BroadcastEventInternal(this, v11, 0);
    (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v11);
  }
}


// CHLTVDirector::StartChaseCameraShot  (line 517, @0x000000000226a7a0, libserver.so)  // inlines: SetInt
// calls: CHLTVDirector::BroadcastEventInternal
// strings: "hltv_chase", "phi", "theta", "ineye"
void __fastcall CHLTVDirector::StartChaseCameraShot(
        CHLTVDirector *const this,
        CEntityIndex iTarget1,
        CEntityIndex iTarget2,
        int distance,
        int phi,
        int theta,
        bool bInEye)
{
  __int64 v10; // rax
  IGameEvent *v11; // r14

  v10 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_chase", 1, 0);
  v11 = v10;
  if ( v10 != 0 )
  {
    (*(*v10 + 112LL))(v10, "target1", iTarget1.m_Data);
    (*(v11->_vptr_IGameEvent + 14))(v11, "target2", iTarget2.m_Data);
    (*(v11->_vptr_IGameEvent + 14))(v11, "distance", distance);
    (*(v11->_vptr_IGameEvent + 14))(v11, "phi", phi);
    (*(v11->_vptr_IGameEvent + 14))(v11, "theta", theta);
    (*(v11->_vptr_IGameEvent + 14))(v11, "ineye", bInEye);
    this->m_iPVSEntity = iTarget1;
    CHLTVDirector::BroadcastEventInternal(this, v11, 0);
    (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v11);
  }
}


// CHLTVDirector::StartBestFixedCameraShot  (line 538, @0x000000000226d9c0, libserver.so)  // inlines: Element, _V_strcmp, memset, operator[]
// calls: CHLTVDirector::FindFirstEvent, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder
// strings: "hltv_rank_camera", "rank"
void __fastcall CHLTVDirector::StartBestFixedCameraShot(CHLTVDirector *const this, bool bForce)
{
  int m_nBroadcastTick; // esi
  int FirstEvent; // eax
  unsigned __int16 v5; // r12
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v6; // r15
  unsigned __int16 Inorder; // ax
  float v8; // xmm0_4
  unsigned int iBestTarget; // [rsp+10h] [rbp-140h]
  unsigned int iBestCamera; // [rsp+14h] [rbp-13Ch]
  float flBestRank; // [rsp+18h] [rbp-138h]
  int indexInner; // [rsp+1Ch] [rbp-134h]
  float flCameraRanking[76]; // [rsp+20h] [rbp-130h] BYREF

  if ( this->m_nNumFixedCameras > 0 )
  {
    m_nBroadcastTick = this->m_nBroadcastTick;
    memset(flCameraRanking, 0, 0x100u);
    FirstEvent = CHLTVDirector::FindFirstEvent(this, m_nBroadcastTick);
    if ( FirstEvent != 0xFFFF )
    {
      v5 = FirstEvent;
      v6 = &this->m_EventHistory.m_Elements.m_pMemory[FirstEvent];
      if ( v6->m_Data.m_Tick < this->m_nNextShotTick )
      {
        iBestTarget = -1;
        iBestCamera = -1;
        flBestRank = -1.0;
        do
        {
          if ( strcmp((*(v6->m_Data.m_Event->_vptr_IGameEvent + 2))(v6->m_Data.m_Event), "hltv_rank_camera") == 0 )
          {
            indexInner = (*(v6->m_Data.m_Event->_vptr_IGameEvent + 8))(v6->m_Data.m_Event, "index", 0);
            v8 = (*(v6->m_Data.m_Event->_vptr_IGameEvent + 10))(v6->m_Data.m_Event, "rank", 0.0)
               + flCameraRanking[indexInner];
            flCameraRanking[indexInner] = v8;
            if ( v8 > flBestRank )
            {
              flBestRank = v8;
              iBestTarget = (*(v6->m_Data.m_Event->_vptr_IGameEvent + 8))(v6->m_Data.m_Event, "target", 0);
              iBestCamera = indexInner;
            }
          }
          Inorder = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                      &this->m_EventHistory,
                      v5);
          if ( Inorder == 0xFFFF )
            break;
          v5 = Inorder;
          v6 = &this->m_EventHistory.m_Elements.m_pMemory[Inorder];
        }
        while ( v6->m_Data.m_Tick < this->m_nNextShotTick );
        if ( flBestRank != 0.0 || bForce )
        {
          if ( iBestCamera != -1 )
            (*(this->_vptr_IGameEventListener2 + 30))(this, iBestCamera, iBestTarget);
        }
        else
        {
          (*(this->_vptr_IGameEventListener2 + 29))(this);
        }
      }
    }
  }
}


// CHLTVDirector::StartRandomShot  (line 594, @0x0000000002257040, libserver.so)  // inlines: GetBool, GetInt
// calls: RandomFloat
void __fastcall CHLTVDirector::StartRandomShot(CHLTVDirector *const this)
{
  int m_nNextShotTick; // eax

  m_nNextShotTick = this->m_nBroadcastTick + ((5.0 / gpGlobals->interval_per_tick) + 0.5);
  if ( m_nNextShotTick > this->m_nNextShotTick )
    m_nNextShotTick = this->m_nNextShotTick;
  this->m_nNextShotTick = m_nNextShotTick;
  if ( RandomFloat(0.0, 1.0) < 0.25 && tv_allow_static_shots.m_pParent->m_Value.m_nValue != 0 )
    (*(this->_vptr_IGameEventListener2 + 28))(this, 0);
  else
    (*(this->_vptr_IGameEventListener2 + 29))(this);
}


// CHLTVDirector::CreateShotFromEvent  (line 611, @0x0000000002256520, libserver.so)  // inlines: _V_strcmp, entindex
// calls: DevMsg(char const*,...), UTIL_PlayerByUserId, RandomFloat, CEntityInstance::GetEntityIndex
// strings: "player_hurt", "player_death", "round_end", "No known TV shot for event %s\n"
void __fastcall CHLTVDirector::CreateShotFromEvent(CHLTVDirector *const this, CHLTVGameEvent *event)
{
  const char *v4; // rax
  bool v5; // r13
  bool v6; // r14
  __int64 v7; // rcx
  const char *v8; // rdi
  const char *v9; // rsi
  unsigned int v10; // edx
  unsigned int v11; // r8d
  bool v12; // cf
  bool v13; // zf
  unsigned int v14; // r8d
  __int64 v15; // r8
  int v16; // eax
  CBasePlayer *v17; // r15
  int v18; // eax
  CBasePlayer *v19; // rax
  CBasePlayer *v20; // rcx
  int v21; // r13d
  float v22; // xmm0_4
  CBasePlayer *v23; // rcx
  float v24; // xmm1_4
  CBasePlayer *v25; // rax
  void (__fastcall *v26)(CHLTVDirector *const, _QWORD, _QWORD, __int64, __int64, _QWORD, int); // r14
  float v27; // xmm0_4
  int v28; // r9d
  unsigned int m_Data; // r15d
  CEntityIndex v30; // eax
  int m_nNextShotTick; // eax
  void (__fastcall *v32)(CHLTVDirector *const, _QWORD, _QWORD, __int64, __int64, _QWORD, _DWORD); // r13
  CEntityIndex v33; // eax
  float v34; // xmm0_4
  float v35; // xmm0_4
  CBaseEntity *victim; // [rsp+10h] [rbp-40h]
  CBaseEntity *attacker; // [rsp+18h] [rbp-38h]
  unsigned int attackera; // [rsp+18h] [rbp-38h]
  CBaseEntity *attackerb; // [rsp+18h] [rbp-38h]
  CBaseEntity *attackerc; // [rsp+18h] [rbp-38h]
  CBaseEntity *attackerd; // [rsp+18h] [rbp-38h]

  v4 = (*(event->m_Event->_vptr_IGameEvent + 2))(event->m_Event);
  v5 = strcmp("player_hurt", v4) == 0;
  v6 = strcmp("player_death", v4) == 0;
  v7 = 10;
  v8 = v4;
  v9 = "round_end";
  LOBYTE(v10) = 0;
  LOBYTE(v11) = strcmp("round_start", v4) != 0;
  v12 = v11 < v10;
  v14 = v11 - v10;
  v13 = v14 == 0;
  do
  {
    if ( v7 == 0 )
      break;
    v12 = *v9 < *v8;
    v13 = *v9++ == *v8++;
    --v7;
  }
  while ( v13 );
  v15 = v14;
  LOBYTE(v7) = v12;
  if ( v6 || v5 )
  {
    v16 = (*(event->m_Event->_vptr_IGameEvent + 8))(event->m_Event, "userid", 0, v7, v15);
    v17 = UTIL_PlayerByUserId(v16);
    v18 = (*(event->m_Event->_vptr_IGameEvent + 8))(event->m_Event, "attacker", 0);
    v19 = UTIL_PlayerByUserId(v18);
    v20 = v19;
    if ( v17 != 0 )
    {
      if ( v19 == 0 || v17 == v19 )
      {
        v32 = *(this->_vptr_IGameEventListener2 + 31);
        v33.m_Data = CEntityInstance::GetEntityIndex(v17).m_Data;
        v32(this, v33.m_Data, 0, 96, 20, 0, 0);
      }
      else
      {
        if ( v6 && (attackerb = v19, v34 = RandomFloat(0.0, 1.0), v20 = attackerb, v34 > 0.33)
          || v5 && (attackerd = v20, v35 = RandomFloat(0.0, 1.0), v20 = attackerd, v35 > 0.66) )
        {
          attackerc = v20;
          v21 = 1;
          v22 = RandomFloat(0.0, 1.0);
          v24 = 0.30000001;
          v23 = attackerc;
        }
        else
        {
          attacker = v20;
          v21 = 0;
          v22 = RandomFloat(0.0, 1.0);
          v23 = attacker;
          v24 = 0.69999999;
        }
        if ( v22 <= v24 )
        {
          v25 = v23;
          v23 = v17;
          v17 = v25;
        }
        victim = v23;
        v26 = *(this->_vptr_IGameEventListener2 + 31);
        v27 = RandomFloat(0.0, 1.0);
        v28 = -30;
        if ( v27 > 0.5 )
          v28 = 30;
        attackera = v28;
        m_Data = CEntityInstance::GetEntityIndex(v17).m_Data;
        v30.m_Data = CEntityInstance::GetEntityIndex(victim).m_Data;
        v26(this, v30.m_Data, m_Data, 96, 4294967276LL, attackera, v21);
      }
      m_nNextShotTick = event->m_Tick + ((2.0 / gpGlobals->interval_per_tick) + 0.5);
      if ( m_nNextShotTick > this->m_nNextShotTick )
        m_nNextShotTick = this->m_nNextShotTick;
      this->m_nNextShotTick = m_nNextShotTick;
    }
  }
  else if ( (!v12 && !v13) == v12 || v15 == 0 )
  {
    (*(this->_vptr_IGameEventListener2 + 28))(this, 0, ((!v12 && !v13) - v12), v7, v15);
  }
  else
  {
    DevMsg("No known TV shot for event %s\n", v4);
  }
}


// CHLTVDirector::CheckHistory  (line 665, @0x000000000226d670, libserver.so)  // inlines: FirstInorder, LeftChild, operator[]
// calls: CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder
void __fastcall CHLTVDirector::CheckHistory(CHLTVDirector *const this)
{
  unsigned __int16 m_Root; // si
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx
  CUtlRBTree<CHLTVGameEvent,short unsigned int,bool (*)(const CHLTVGameEvent&,const CHLTVGameEvent&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int>,short unsigned int> > *p_m_EventHistory; // rbx

  m_Root = this->m_EventHistory.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_EventHistory.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    p_m_EventHistory = &this->m_EventHistory;
    do
      m_Root = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                 p_m_EventHistory,
                 m_Root);
    while ( m_Root != 0xFFFF );
  }
}


// CHLTVDirector::RemoveEventsFromHistory  (line 681, @0x00000000022769e0, libserver.so)  // inlines: Element, FirstInorder, FreeNode, LeftChild, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::Unlink
// callers: CHLTVDirector::Shutdown, CHLTVDirector::SetHLTVServer, CHLTVDirector::PostSpawnGroupLoad, CHLTVDirector::StartInstantBroadcastShot, CHLTVDirector::StartNewShot
void __fastcall CHLTVDirector::RemoveEventsFromHistory(CHLTVDirector *const this, int tick)
{
  int m_Root; // r14d
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *m_pMemory; // rax
  unsigned __int16 m_Left; // cx
  unsigned __int64 v7; // r15
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v8; // r12
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v9; // rcx
  unsigned __int16 v10; // dx
  CUtlRBTree<CHLTVGameEvent,short unsigned int,bool (*)(const CHLTVGameEvent&,const CHLTVGameEvent&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int>,short unsigned int> > *p_m_EventHistory; // [rsp+8h] [rbp-38h]

  m_Root = this->m_EventHistory.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_EventHistory.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    p_m_EventHistory = &this->m_EventHistory;
    while ( 1 )
    {
      v7 = m_Root;
      v8 = &m_pMemory[v7];
      if ( m_pMemory[v7].m_Data.m_Tick < tick || tick == -1 )
      {
        (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v8->m_Data.m_Event);
        v8->m_Data.m_Event = 0;
        CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::Unlink(
          p_m_EventHistory,
          m_Root);
        this->m_EventHistory.m_Elements.m_pMemory[m_Root].m_Left = m_Root;
        this->m_EventHistory.m_Elements.m_pMemory[v7].m_Right = this->m_EventHistory.m_FirstFree;
        this->m_EventHistory.m_FirstFree = m_Root;
        m_Root = this->m_EventHistory.m_Root;
        --this->m_EventHistory.m_NumElements;
        if ( m_Root != 0xFFFF )
        {
          v9 = this->m_EventHistory.m_Elements.m_pMemory;
          v10 = v9[m_Root].m_Left;
          if ( v10 != 0xFFFF )
          {
            while ( v9[v10].m_Left != 0xFFFF )
              v10 = v9[v10].m_Left;
            m_Root = v10;
          }
        }
      }
      else
      {
        m_Root = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                   p_m_EventHistory,
                   m_Root);
      }
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_EventHistory.m_Elements.m_pMemory;
    }
  }
}


// CHLTVDirector::FindFirstEvent  (line 707, @0x000000000226d6f0, libserver.so)  // inlines: Element, FirstInorder, LeftChild, operator[]
// calls: CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder
// callers: CHLTVDirector::StartBestPlayerCameraShot, CHLTVDirector::StartBestFixedCameraShot, CHLTVDirector::FinishCameraManShot, CHLTVDirector::StartCameraManShot, CHLTVDirector::FindBestGameEvent, CHLTVDirector::StartNewShot, CDOTAHLTVDirector::FindBestGameEvent
int __fastcall CHLTVDirector::FindFirstEvent(CHLTVDirector *const this, int tick)
{
  int v3; // esi
  __int64 m_Root; // rax
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *m_pMemory; // r13
  unsigned __int16 m_Left; // dx
  CUtlRBTree<CHLTVGameEvent,short unsigned int,bool (*)(const CHLTVGameEvent&,const CHLTVGameEvent&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int>,short unsigned int> > *p_m_EventHistory; // r12
  unsigned __int16 Inorder; // ax

  v3 = 0xFFFF;
  m_Root = this->m_EventHistory.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_EventHistory.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    v3 = m_Root;
    if ( m_Root != 0xFFFF && tick > m_pMemory[m_Root].m_Data.m_Tick )
    {
      p_m_EventHistory = &this->m_EventHistory;
      do
      {
        Inorder = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                    p_m_EventHistory,
                    v3);
        v3 = Inorder;
      }
      while ( Inorder != 0xFFFF && m_pMemory[Inorder].m_Data.m_Tick < tick );
    }
  }
  return v3;
}


// CHLTVDirector::SetCameraMan  (line 731, @0x0000000002279ec0, libserver.so)  // inlines: CreateEvent, GetBool, GetInt, SetInt, operator==
// calls: UTIL_PlayerByIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, V_snprintf, UTIL_ClientPrintFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CHLTVDirector::UpdateSettings
// strings: "hltv_cameraman", "SourceTV camera is now controlled by %s.", "SourceTV camera switched to auto-director mode."
bool __fastcall CHLTVDirector::SetCameraMan(CHLTVDirector *const this, CEntityIndex iPlayerIndex)
{
  int32 m_Data; // eax
  CBasePlayer *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ebx
  CBasePlayer *v10; // rax
  const CEntityInstance *v11; // r12
  const char *v12; // rax
  CBasePlayer *pPlayerOuter; // [rsp+8h] [rbp-248h]
  char szText[208]; // [rsp+10h] [rbp-240h] BYREF
  CRecipientFilter filter; // [rsp+E0h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+218h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( tv_allow_camera_man.m_pParent->m_Value.m_nValue == 0 )
    return 0;
  m_Data = this->m_iCameraManIndex.m_Data;
  if ( iPlayerIndex.m_Data == m_Data )
    return 1;
  if ( m_Data != 0 )
  {
    if ( iPlayerIndex.m_Data != 0 )
      return 0;
  }
  else if ( iPlayerIndex.m_Data > 0 )
  {
    v6 = UTIL_PlayerByIndex(iPlayerIndex);
    pPlayerOuter = v6;
    if ( v6 == 0 || v6->m_iTeamNum.m_Value != 1 )
      return 0;
    goto LABEL_9;
  }
  pPlayerOuter = 0;
LABEL_9:
  this->m_iCameraManIndex = iPlayerIndex;
  v7 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_cameraman", 0, 0);
  v8 = v7;
  if ( v7 != 0 )
  {
    (*(*v7 + 112LL))(v7, "index", iPlayerIndex.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v8, 0);
  }
  v9 = 1;
  CRecipientFilter::CRecipientFilter(&filter);
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      while ( 1 )
      {
        v10 = UTIL_PlayerByIndex(v9);
        v11 = v10;
        if ( v10 != 0 && v10->m_iTeamNum.m_Value == 1 && (*(v10->_vptr_IHandleEntity + 391))(v10) == 0 )
          break;
        if ( gpGlobals->maxClients < ++v9 )
          goto LABEL_18;
      }
      CRecipientFilter::AddRecipient(&filter, v11);
      ++v9;
    }
    while ( gpGlobals->maxClients >= v9 );
  }
LABEL_18:
  CRecipientFilter::MakeReliable(&filter);
  if ( iPlayerIndex.m_Data <= 0 )
  {
    UTIL_ClientPrintFilter(&filter, 3, "SourceTV camera switched to auto-director mode.", 0, 0, 0, 0);
  }
  else
  {
    v12 = (*(pPlayerOuter->_vptr_IHandleEntity + 106))(pPlayerOuter);
    V_snprintf(szText, 200, "SourceTV camera is now controlled by %s.", v12);
    UTIL_ClientPrintFilter(&filter, 3, szText, 0, 0, 0, 0);
  }
  CRecipientFilter::~CRecipientFilter(&filter);
  return 1;
}


// CHLTVDirector::FinishCameraManShot  (line 792, @0x000000000226dbe0, libserver.so)  // inlines: Element, SetInt, _V_strcmp, operator[]
// calls: CHLTVDirector::FindFirstEvent, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder, CHLTVDirector::BroadcastEventInternal
// strings: "hltv_cameraman"
void __fastcall CHLTVDirector::FinishCameraManShot(CHLTVDirector *const this)
{
  int m_nBroadcastTick; // ebx
  int FirstEvent; // eax
  int m_nNextShotTick; // esi
  unsigned __int16 v5; // r12
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v6; // rbx
  __int64 v7; // rax
  IGameEvent *v8; // rbx
  int m_Tick; // eax

  m_nBroadcastTick = this->m_nBroadcastTick;
  FirstEvent = CHLTVDirector::FindFirstEvent(this, m_nBroadcastTick);
  if ( FirstEvent == 0xFFFF )
  {
    this->m_nNextShotTick = m_nBroadcastTick + 1;
  }
  else
  {
    m_nNextShotTick = m_nBroadcastTick + ((4.0 / gpGlobals->interval_per_tick) + 0.5);
    for ( this->m_nNextShotTick = m_nNextShotTick; ; m_nNextShotTick = this->m_nNextShotTick )
    {
      v5 = FirstEvent;
      v6 = &this->m_EventHistory.m_Elements.m_pMemory[FirstEvent];
      if ( v6->m_Data.m_Tick >= m_nNextShotTick )
        break;
      if ( strcmp((*(v6->m_Data.m_Event->_vptr_IGameEvent + 2))(v6->m_Data.m_Event), "hltv_cameraman") == 0
        && (*(v6->m_Data.m_Event->_vptr_IGameEvent + 8))(v6->m_Data.m_Event, "index", 0) == 0 )
      {
        m_Tick = v6->m_Data.m_Tick;
        this->m_iCameraMan.m_Data = 0;
        this->m_nNextShotTick = m_Tick + 1;
        return;
      }
      LOWORD(FirstEvent) = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                             &this->m_EventHistory,
                             v5);
      if ( FirstEvent == 0xFFFF )
        break;
    }
    v7 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_cameraman", 1, 0);
    v8 = v7;
    if ( v7 != 0 )
    {
      (*(*v7 + 112LL))(v7, "index", this->m_iCameraMan.m_Data);
      CHLTVDirector::BroadcastEventInternal(this, v8, 0);
      (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v8);
    }
  }
}


// CHLTVDirector::StartCameraManShot  (line 842, @0x000000000226dd30, libserver.so)  // inlines: Element, _V_strcmp, operator[]
// calls: CHLTVDirector::FindFirstEvent, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder, CHLTVDirector::BroadcastEventInternal
// strings: "hltv_cameraman"
bool __fastcall CHLTVDirector::StartCameraManShot(CHLTVDirector *const this)
{
  int FirstEvent; // eax
  unsigned __int16 v3; // r13
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v4; // rbx
  unsigned __int16 Inorder; // ax
  int32 v7; // eax

  FirstEvent = CHLTVDirector::FindFirstEvent(this, this->m_nNextShotTick);
  if ( FirstEvent == 0xFFFF )
    return 0;
  v3 = FirstEvent;
  v4 = &this->m_EventHistory.m_Elements.m_pMemory[FirstEvent];
  if ( v4->m_Data.m_Tick > this->m_nBroadcastTick )
    return 0;
  while ( strcmp((*(v4->m_Data.m_Event->_vptr_IGameEvent + 2))(v4->m_Data.m_Event), "hltv_cameraman") != 0
       || (*(v4->m_Data.m_Event->_vptr_IGameEvent + 8))(v4->m_Data.m_Event, "index", 0) <= 0 )
  {
    Inorder = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                &this->m_EventHistory,
                v3);
    if ( Inorder != 0xFFFF )
    {
      v3 = Inorder;
      v4 = &this->m_EventHistory.m_Elements.m_pMemory[Inorder];
      if ( v4->m_Data.m_Tick <= this->m_nBroadcastTick )
        continue;
    }
    return 0;
  }
  v7 = (*(v4->m_Data.m_Event->_vptr_IGameEvent + 8))(v4->m_Data.m_Event, "index", 0);
  this->m_iCameraMan.m_Data = v7;
  this->m_iPVSEntity.m_Data = v7;
  this->m_nNextShotTick = this->m_nBroadcastTick + 1;
  CHLTVDirector::BroadcastEventInternal(this, v4->m_Data.m_Event, 0);
  return 1;
}


// CHLTVDirector::StartInstantBroadcastShot  (line 879, @0x0000000002276e00, libserver.so)  // inlines: SetInt
// calls: CHLTVDirector::BroadcastEventInternal, CHLTVDirector::RemoveEventsFromHistory
// strings: "hltv_cameraman"
void __fastcall CHLTVDirector::StartInstantBroadcastShot(CHLTVDirector *const this)
{
  int32 m_Data; // esi
  __int64 v3; // rax
  IGameEvent *v4; // r12

  m_Data = this->m_iCameraManIndex.m_Data;
  this->m_nNextShotTick = this->m_nBroadcastTick + ((6.0 / gpGlobals->interval_per_tick) + 0.5);
  if ( m_Data <= 0 )
  {
    CHLTVDirector::RemoveEventsFromHistory(this, -1);
    (*(this->_vptr_IGameEventListener2 + 33))(this);
    (*(this->_vptr_IGameEventListener2 + 34))(this);
    (*(this->_vptr_IGameEventListener2 + 26))(this);
  }
  else
  {
    v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_cameraman", 1, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
      (*(*v3 + 112LL))(v3, "index", this->m_iCameraManIndex.m_Data);
      CHLTVDirector::BroadcastEventInternal(this, v4, 0);
      (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v4);
      this->m_iPVSEntity.m_Data = this->m_iCameraManIndex.m_Data;
      this->m_nNextShotTick = this->m_nBroadcastTick + ((4.0 / gpGlobals->interval_per_tick) + 0.5);
    }
  }
}


// CHLTVDirector::StartNewShot  (line 909, @0x0000000002276f10, libserver.so)  // inlines: Element, _V_strcmp, operator[]
// calls: CHLTVDirector::RemoveEventsFromHistory, CHLTVDirector::FindFirstEvent, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder, CHLTVDirector::BroadcastEventInternal
// strings: "hltv_cameraman", "hltv_message", "Please wait for broadcast to start ..."
void __fastcall CHLTVDirector::StartNewShot(CHLTVDirector *const this)
{
  int v2; // esi
  int m_nBroadcastTick; // r14d
  CGlobalVars *v4; // rdx
  int m_nNextShotTick; // r15d
  int FirstEvent; // eax
  __int64 v7; // rsi
  CGlobalVars *v8; // rdx
  unsigned __int16 v9; // r12
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v10; // r13
  unsigned __int16 Inorder; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  IGameEvent *v14; // r12
  CGlobalVars *v15; // [rsp+8h] [rbp-38h]

  v2 = gpGlobals->tickcount - ((360.0 / gpGlobals->interval_per_tick) + 0.5);
  if ( v2 < 0 )
    v2 = 0;
  CHLTVDirector::RemoveEventsFromHistory(this, v2);
  if ( this->m_fDelay < 6.0 )
  {
    (*(this->_vptr_IGameEventListener2 + 36))(this);
  }
  else if ( this->m_iCameraMan.m_Data <= 0 )
  {
    if ( (*(this->_vptr_IGameEventListener2 + 35))(this) == 0 )
    {
      m_nBroadcastTick = this->m_nBroadcastTick;
      v4 = gpGlobals;
      m_nNextShotTick = m_nBroadcastTick + ((6.0 / gpGlobals->interval_per_tick) + 0.5);
      this->m_nNextShotTick = m_nNextShotTick;
      if ( m_nBroadcastTick <= 0 )
      {
        v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_message", 1, 0);
        v14 = v13;
        if ( v13 != 0 )
        {
          (*(*v13 + 136LL))(v13, "text", "Please wait for broadcast to start ...");
          CHLTVDirector::BroadcastEventInternal(this, v14, 0);
          (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v14);
        }
        (*(this->_vptr_IGameEventListener2 + 28))(this, 1);
      }
      else
      {
        v15 = v4;
        FirstEvent = CHLTVDirector::FindFirstEvent(this, m_nBroadcastTick);
        v8 = v15;
        if ( FirstEvent != 0xFFFF )
        {
          v9 = FirstEvent;
          v10 = &this->m_EventHistory.m_Elements.m_pMemory[FirstEvent];
          if ( m_nNextShotTick > v10->m_Data.m_Tick )
          {
            while ( strcmp(
                      (*(v10->m_Data.m_Event->_vptr_IGameEvent + 2))(v10->m_Data.m_Event, v7, v8),
                      "hltv_cameraman") != 0
                 || (*(v10->m_Data.m_Event->_vptr_IGameEvent + 8))(v10->m_Data.m_Event, "index", 0) <= 0 )
            {
              Inorder = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                          &this->m_EventHistory,
                          v9);
              if ( Inorder != 0xFFFF )
              {
                v9 = Inorder;
                v10 = &this->m_EventHistory.m_Elements.m_pMemory[Inorder];
                if ( v10->m_Data.m_Tick < this->m_nNextShotTick )
                  continue;
              }
              m_nNextShotTick = this->m_nNextShotTick;
              m_nBroadcastTick = this->m_nBroadcastTick;
              v8 = gpGlobals;
              goto LABEL_16;
            }
            m_nNextShotTick = v10->m_Data.m_Tick;
            m_nBroadcastTick = this->m_nBroadcastTick;
            this->m_nNextShotTick = m_nNextShotTick;
            v8 = gpGlobals;
          }
        }
LABEL_16:
        if ( ((m_nNextShotTick - m_nBroadcastTick) * v8->interval_per_tick) >= 4.0 )
        {
          v12 = (*(this->_vptr_IGameEventListener2 + 39))(this);
          if ( v12 != 0 )
            (*(this->_vptr_IGameEventListener2 + 40))(this, v12);
          else
            (*(this->_vptr_IGameEventListener2 + 26))(this);
        }
      }
    }
  }
  else
  {
    (*(this->_vptr_IGameEventListener2 + 37))(this);
  }
}


// CHLTVDirector::FindBestGameEvent  (line 1005, @0x000000000226de50, libserver.so)  // inlines: Element, V_memset, memset, operator[]
// calls: CHLTVDirector::FindFirstEvent, CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> >::NextInorder
CHLTVGameEvent *__fastcall CHLTVDirector::FindBestGameEvent(CHLTVDirector *const this)
{
  __int64 v1; // r15
  int m_nBroadcastTick; // ebx
  int v3; // esi
  int FirstEvent; // ecx
  int v6; // r12d
  unsigned __int16 v7; // si
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *m_pMemory; // r13
  UtlRBTreeNode_t<CHLTVGameEvent,short unsigned int> *v9; // rdx
  int v10; // edi
  int m_Priority; // eax
  unsigned __int16 Inorder; // ax
  int v13; // edx
  int v14; // ecx
  int m_nNextShotTick; // [rsp+4h] [rbp-6Ch]
  float interval_per_tick; // [rsp+8h] [rbp-68h]
  int v18; // [rsp+Ch] [rbp-64h]
  int bestEvent[4]; // [rsp+20h] [rbp-50h] BYREF
  int bestEventPrio[16]; // [rsp+30h] [rbp-40h] BYREF

  v1 = 0;
  m_nBroadcastTick = this->m_nBroadcastTick;
  memset(bestEvent, 0, sizeof(bestEvent));
  memset(bestEventPrio, 0, 16);
  v3 = m_nBroadcastTick;
  v18 = m_nBroadcastTick;
  FirstEvent = CHLTVDirector::FindFirstEvent(this, v3);
  interval_per_tick = gpGlobals->interval_per_tick;
  m_nNextShotTick = this->m_nNextShotTick;
  do
  {
    bestEventPrio[v1] = 0;
    bestEvent[v1] = 0;
    v6 = v18 + ((((v1 + 1.0) + (v1 + 1.0)) / interval_per_tick) + 0.5);
    if ( v6 > m_nNextShotTick )
      break;
    if ( FirstEvent == 0xFFFF )
      goto LABEL_11;
    v7 = FirstEvent;
    m_pMemory = this->m_EventHistory.m_Elements.m_pMemory;
    v9 = &m_pMemory[FirstEvent];
    if ( v6 >= v9->m_Data.m_Tick )
    {
      v10 = 0;
      while ( 1 )
      {
        m_Priority = v9->m_Data.m_Priority;
        if ( m_Priority > v10 )
        {
          bestEventPrio[v1] = m_Priority;
          bestEvent[v1] = FirstEvent;
        }
        Inorder = CUtlRBTree<CHLTVGameEvent,unsigned short,bool (*)(CHLTVGameEvent const&,CHLTVGameEvent const&),CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent,unsigned short>,unsigned short>>::NextInorder(
                    &this->m_EventHistory,
                    v7);
        FirstEvent = Inorder;
        if ( Inorder == 0xFFFF )
          break;
        v9 = &m_pMemory[Inorder];
        if ( v6 < v9->m_Data.m_Tick )
          goto LABEL_12;
        v10 = bestEventPrio[v1];
        v7 = Inorder;
      }
LABEL_11:
      FirstEvent = 0xFFFF;
    }
LABEL_12:
    ++v1;
  }
  while ( v1 != 4 );
  if ( bestEventPrio[0] != 0 )
  {
    v13 = bestEventPrio[1];
  }
  else
  {
    v13 = bestEventPrio[1];
    if ( bestEventPrio[1] == 0 )
    {
      v14 = bestEventPrio[2];
      if ( bestEventPrio[2] != 0 )
        goto LABEL_16;
      return 0;
    }
  }
  v14 = bestEventPrio[2];
  if ( bestEventPrio[0] <= v13 )
  {
LABEL_16:
    if ( v13 < v14 )
      goto LABEL_23;
    if ( bestEventPrio[3] <= v13 )
      return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[1])].m_Data;
  }
  else
  {
    if ( bestEventPrio[0] > bestEventPrio[2] )
      return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[0])].m_Data;
LABEL_23:
    if ( v14 > bestEventPrio[3] )
      return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[2])].m_Data;
  }
  if ( bestEvent[0] == 0 )
    return 0;
  return &this->m_EventHistory.m_Elements.m_pMemory[LOWORD(bestEvent[0])].m_Data;
}


// CHLTVDirector::AnalyzeCameras  (line 1076, @0x000000000225a340, libserver.so)  // inlines: CEntityIndex, CGameTrace, CreateEvent, EnableInteractsWith, FastSqrt, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, SetInt, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator+=, operator-
// calls: InitRandomOrder, CBaseEntity::GetAbsOrigin, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, AngleVectors, VectorNormalize, WeightedAngle, CEntityInstance::GetEntityIndex, sqrt
// strings: "hltv_rank_camera", "rank"
// globals: s_RndOrder
// local variable allocation has failed, the output may be wrong!
void __fastcall CHLTVDirector::AnalyzeCameras(CHLTVDirector *const this)
{
  int ebx4; // ebx
  const CBaseEntity *const *m_pActivePlayers; // r12
  const CBaseEntity *v4; // r13
  const Vector *AbsOrigin; // rax
  float y; // xmm4_4
  float z; // xmm3_4
  float v8; // xmm0_4
  const Vector *v9; // rax
  float m_fValue; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  const QAngle *v16; // rax
  float v17; // xmm0_4
  __m128d v18; // xmm1
  float v19; // xmm7_4
  __int64 v20; // rax
  __int64 v21; // rbx
  CEntityIndex v22; // eax
  unsigned int iCameraIndex; // [rsp+8h] [rbp-1C8h]
  int i; // [rsp+Ch] [rbp-1C4h]
  int *v25; // [rsp+10h] [rbp-1C0h]
  unsigned int iClosestPlayer; // [rsp+18h] [rbp-1B8h]
  int nCount; // [rsp+1Ch] [rbp-1B4h]
  float flClosestPlayerDist; // [rsp+20h] [rbp-1B0h]
  float v29; // [rsp+24h] [rbp-1ACh]
  float v30; // [rsp+28h] [rbp-1A8h]
  float vDistribution; // [rsp+2Ch] [rbp-1A4h]
  float vDistribution_4; // [rsp+30h] [rbp-1A0h]
  float vDistribution_4a; // [rsp+30h] [rbp-1A0h]
  float vDistribution_8; // [rsp+34h] [rbp-19Ch]
  float vDistribution_8a; // [rsp+34h] [rbp-19Ch]
  float dist; // [rsp+38h] [rbp-198h]
  float dista; // [rsp+38h] [rbp-198h]
  float v38; // [rsp+3Ch] [rbp-194h]
  float v39; // [rsp+3Ch] [rbp-194h]
  float flRank; // [rsp+48h] [rbp-188h]
  Vector v41; // [rsp+4Ch] [rbp-184h]
  __int128 v1; // [rsp+60h] [rbp-170h] OVERLAPPED BYREF
  Vector v2; // [rsp+A0h] [rbp-130h] BYREF
  int v44; // [rsp+ACh] [rbp-124h]
  float v45; // [rsp+B0h] [rbp-120h]
  float v46; // [rsp+B4h] [rbp-11Ch]
  float v47; // [rsp+B8h] [rbp-118h]
  int v48; // [rsp+BCh] [rbp-114h]
  int v49; // [rsp+C0h] [rbp-110h]
  int v50; // [rsp+C4h] [rbp-10Ch]
  int v51; // [rsp+C8h] [rbp-108h]
  int v52; // [rsp+CCh] [rbp-104h]
  int v53; // [rsp+D0h] [rbp-100h]
  int v54; // [rsp+D4h] [rbp-FCh]
  int v55; // [rsp+D8h] [rbp-F8h]
  int v56; // [rsp+DCh] [rbp-F4h]
  float v57; // [rsp+E0h] [rbp-F0h]
  char v58; // [rsp+E4h] [rbp-ECh]
  bool v59; // [rsp+E5h] [rbp-EBh]
  trace_t tr; // [rsp+F0h] [rbp-E0h] BYREF

  InitRandomOrder(this->m_nNumFixedCameras);
  if ( this->m_nNumFixedCameras > 0 )
  {
    i = 0;
    v25 = s_RndOrder;
    do
    {
      iCameraIndex = *v25;
      v41 = *CBaseEntity::GetAbsOrigin(this->m_pFixedCameras[*v25]);
      if ( this->m_nNumActivePlayers <= 0 )
      {
        iClosestPlayer = 0;
        flRank = 0.0;
      }
      else
      {
        ebx4 = 0;
        v30 = 0.0;
        m_pActivePlayers = this->m_pActivePlayers;
        v29 = 0.0;
        iClosestPlayer = 0;
        vDistribution = 0.0;
        nCount = 0;
        flClosestPlayerDist = 100000.0;
        flRank = 0.0;
        do
        {
          while ( 1 )
          {
            v4 = *m_pActivePlayers;
            AbsOrigin = CBaseEntity::GetAbsOrigin(*m_pActivePlayers);
            y = AbsOrigin->y;
            z = AbsOrigin->z;
            v8 = fsqrt(
                   (((AbsOrigin->x - v41.x) * (AbsOrigin->x - v41.x)) + ((y - v41.y) * (y - v41.y)))
                 + ((z - v41.z) * (z - v41.z)));
            if ( v8 <= 1024.0 && v8 >= 4.0 )
            {
              vDistribution_8 = y;
              v38 = v8;
              vDistribution_4 = AbsOrigin->x;
              dist = z;
              memset(&tr.m_ShapeAttributes, 0, 31);
              tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
              CGameTrace::Init(&tr);
              v9 = CBaseEntity::GetAbsOrigin(v4);
              m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
              v44 = 0;
              v48 = 0;
              v52 = 0;
              v56 = 0;
              v57 = m_fValue;
              v45 = v9->x - v41.x;
              v46 = v9->y - v41.y;
              v11 = v9->z;
              v2 = v41;
              v55 = 0;
              v54 = 0;
              v47 = v11 - v41.z;
              v53 = 0;
              v58 = 1;
              v51 = 0;
              v50 = 0;
              v49 = 0;
              v59 = (((v45 * v45) + (v46 * v46)) + (v47 * v47)) != 0.0;
              CTraceFilterSimple::CTraceFilterSimple(&v1, v4, 4, 0);
              *(&v1 + 1) |= 0x87001uLL;
              CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v2, &v1, &tr);
              if ( tr.fraction >= 1.0 )
                break;
            }
            ++ebx4;
            ++m_pActivePlayers;
            if ( this->m_nNumActivePlayers <= ebx4 )
              goto LABEL_12;
          }
          v12 = v38;
          ++nCount;
          v13 = dist;
          v14 = vDistribution_8;
          v15 = vDistribution_4;
          if ( flClosestPlayerDist > v38 )
          {
            v22.m_Data = CEntityInstance::GetEntityIndex(v4).m_Data;
            v12 = v38;
            iClosestPlayer = v22.m_Data;
            v15 = vDistribution_4;
            flClosestPlayerDist = v38;
            v14 = vDistribution_8;
            v13 = dist;
          }
          v39 = v12;
          vDistribution_4a = v15;
          vDistribution_8a = v14;
          dista = v13;
          v16 = (*(v4->_vptr_IHandleEntity + 165))(v4);
          AngleVectors(v16, &v1, 0, 0);
          v2.x = v41.x - vDistribution_4a;
          v2.y = v41.y - vDistribution_8a;
          v2.z = v41.z - dista;
          VectorNormalize(&v2);
          ++ebx4;
          ++m_pActivePlayers;
          v17 = WeightedAngle(v1, v2);
          v18 = _mm_cvtps_pd(LODWORD(flRank));
          v30 = v30 + v2.x;
          v29 = v29 + v2.z;
          v18.m128d_f64[0] = v18.m128d_f64[0] + 1.0 / sqrt(v39) * v17;
          v19 = _mm_movedup_pd(v18).m128d_f64[0];
          flRank = v19;
          vDistribution = vDistribution + v2.y;
        }
        while ( this->m_nNumActivePlayers > ebx4 );
LABEL_12:
        if ( nCount != 0 )
          flRank = (fsqrt(((v30 * v30) + (vDistribution * vDistribution)) + (v29 * v29)) / nCount) * flRank;
      }
      v20 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_rank_camera", 0, 0);
      v21 = v20;
      if ( v20 != 0 )
      {
        (*(*v20 + 128LL))(v20, "rank", flRank);
        (*(*v21 + 112LL))(v21, "index", iCameraIndex);
        (*(*v21 + 112LL))(v21, "target", iClosestPlayer);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v21, 0);
      }
      ++i;
      ++v25;
    }
    while ( this->m_nNumFixedCameras > i );
  }
}


// CHLTVDirector::BuildActivePlayerList  (line 1150, @0x00000000022563b0, libserver.so)  // inlines: GetTeamNumber
// calls: UTIL_PlayerByIndex
void __fastcall CHLTVDirector::BuildActivePlayerList(CHLTVDirector *const this)
{
  int v2; // ebx
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // r12
  int m_nNumActivePlayers; // eax

  v2 = 1;
  this->m_nNumActivePlayers = 0;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v3 = UTIL_PlayerByIndex(v2);
      v4 = v3;
      if ( v3 != 0
        && (*(v3->_vptr_IHandleEntity + 139))(v3) != 0
        && (v4->m_afPhysicsFlags & 8) == 0
        && v4->m_iTeamNum.m_Value > 1u )
      {
        m_nNumActivePlayers = this->m_nNumActivePlayers;
        this->m_pActivePlayers[m_nNumActivePlayers] = v4;
        this->m_nNumActivePlayers = m_nNumActivePlayers + 1;
      }
      ++v2;
    }
    while ( gpGlobals->maxClients >= v2 );
  }
}


// CHLTVDirector::AnalyzePlayers  (line 1177, @0x000000000225a9f0, libserver.so)  // inlines: CEntityIndex, CGameTrace, CreateEvent, EnableInteractsWith, FastSqrt, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, SetInt, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator*=, operator+=, operator-
// calls: InitRandomOrder, CBaseEntity::GetAbsOrigin, AngleVectors, CEntityInstance::GetEntityIndex, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, WeightedAngle, sqrt
// strings: "hltv_rank_entity", "rank"
// globals: s_RndOrder
void __fastcall CHLTVDirector::AnalyzePlayers(CHLTVDirector *const this)
{
  int r12d3; // r12d
  CBasePlayer *v3; // rbx
  const QAngle *v4; // rax
  int m_nNumActivePlayers; // eax
  CHLTVDirector *v6; // r13
  int v7; // r15d
  const CBaseEntity *v8; // rbx
  const Vector *AbsOrigin; // rax
  float v10; // xmm0_4
  __int64 v11; // rbx
  CEntityIndex v12; // eax
  const Vector *v13; // rax
  float m_fValue; // xmm0_4
  float z; // xmm1_4
  const QAngle *v16; // rax
  float v17; // xmm0_4
  float v18; // xmm3_4
  double v19; // xmm0_8
  __m128d v20; // xmm2
  CEntityIndex v21; // eax
  float dist; // [rsp+10h] [rbp-1D0h]
  float flBestFacingPlayer; // [rsp+14h] [rbp-1CCh]
  CEntityInstance *v24; // [rsp+18h] [rbp-1C8h]
  unsigned int iBestFacingPlayer; // [rsp+20h] [rbp-1C0h]
  int i; // [rsp+24h] [rbp-1BCh]
  int *v27; // [rsp+28h] [rbp-1B8h]
  int nCount; // [rsp+38h] [rbp-1A8h]
  float vDistribution; // [rsp+3Ch] [rbp-1A4h]
  float vDistribution_4; // [rsp+40h] [rbp-1A0h]
  float vDistribution_8; // [rsp+44h] [rbp-19Ch]
  float flRank; // [rsp+48h] [rbp-198h]
  Vector v33; // [rsp+4Ch] [rbp-194h]
  float facing; // [rsp+58h] [rbp-188h]
  Vector v1; // [rsp+60h] [rbp-180h] BYREF
  CTraceFilterSimple v36; // [rsp+70h] [rbp-170h] BYREF
  Vector v2; // [rsp+B0h] [rbp-130h] BYREF
  int v38; // [rsp+BCh] [rbp-124h]
  float v39; // [rsp+C0h] [rbp-120h]
  float v40; // [rsp+C4h] [rbp-11Ch]
  float v41; // [rsp+C8h] [rbp-118h]
  int v42; // [rsp+CCh] [rbp-114h]
  int v43; // [rsp+D0h] [rbp-110h]
  int v44; // [rsp+D4h] [rbp-10Ch]
  int v45; // [rsp+D8h] [rbp-108h]
  int v46; // [rsp+DCh] [rbp-104h]
  int v47; // [rsp+E0h] [rbp-100h]
  int v48; // [rsp+E4h] [rbp-FCh]
  int v49; // [rsp+E8h] [rbp-F8h]
  int v50; // [rsp+ECh] [rbp-F4h]
  float v51; // [rsp+F0h] [rbp-F0h]
  char v52; // [rsp+F4h] [rbp-ECh]
  bool v53; // [rsp+F5h] [rbp-EBh]
  trace_t tr; // [rsp+100h] [rbp-E0h] BYREF

  (*(this->_vptr_IGameEventListener2 + 38))(this);
  InitRandomOrder(this->m_nNumActivePlayers);
  if ( this->m_nNumActivePlayers > 0 )
  {
    i = 0;
    v27 = s_RndOrder;
    do
    {
      r12d3 = *v27;
      v3 = this->m_pActivePlayers[*v27];
      v24 = v3;
      v33 = *CBaseEntity::GetAbsOrigin(v3);
      v4 = (*(v3->_vptr_IHandleEntity + 165))(v3);
      AngleVectors(v4, &v1, 0, 0);
      m_nNumActivePlayers = this->m_nNumActivePlayers;
      v1.x = -v1.x;
      v1.y = -v1.y;
      v1.z = -v1.z;
      if ( m_nNumActivePlayers <= 0 )
      {
        iBestFacingPlayer = 0;
        flRank = 0.0;
      }
      else
      {
        v6 = this;
        v7 = 0;
        vDistribution_4 = 0.0;
        vDistribution = 0.0;
        iBestFacingPlayer = 0;
        vDistribution_8 = 0.0;
        nCount = 0;
        flBestFacingPlayer = 0.0;
        flRank = 0.0;
        do
        {
          if ( r12d3 != v7 )
          {
            v8 = v6->m_pActivePlayers[0];
            AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
            v10 = fsqrt(
                    (((AbsOrigin->x - v33.x) * (AbsOrigin->x - v33.x))
                   + ((AbsOrigin->y - v33.y) * (AbsOrigin->y - v33.y)))
                  + ((AbsOrigin->z - v33.z) * (AbsOrigin->z - v33.z)));
            if ( v10 <= 1024.0 && v10 >= 4.0 )
            {
              dist = v10;
              memset(&tr.m_ShapeAttributes, 0, 31);
              tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
              CGameTrace::Init(&tr);
              v13 = CBaseEntity::GetAbsOrigin(v8);
              m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
              v38 = 0;
              v42 = 0;
              v46 = 0;
              v50 = 0;
              v51 = m_fValue;
              v39 = v13->x - v33.x;
              v40 = v13->y - v33.y;
              z = v13->z;
              v2 = v33;
              v49 = 0;
              v48 = 0;
              v41 = z - v33.z;
              v47 = 0;
              v52 = 1;
              v45 = 0;
              v44 = 0;
              v43 = 0;
              v53 = (((v39 * v39) + (v40 * v40)) + (v41 * v41)) != 0.0;
              CTraceFilterSimple::CTraceFilterSimple(&v36, v8, 4, 0);
              v36.m_attr.m_nInteractsWith |= 0x87001uLL;
              CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v2, &v36, &tr);
              if ( tr.fraction >= 1.0 )
              {
                ++nCount;
                v16 = (*(v8->_vptr_IHandleEntity + 165))(v8);
                AngleVectors(v16, &v2, 0, 0);
                v17 = WeightedAngle(v1, v2);
                v18 = v17;
                if ( v17 > flBestFacingPlayer )
                {
                  facing = v17;
                  v21.m_Data = CEntityInstance::GetEntityIndex(v8).m_Data;
                  v18 = facing;
                  iBestFacingPlayer = v21.m_Data;
                  v19 = sqrt(dist);
                  flBestFacingPlayer = facing;
                }
                else
                {
                  v19 = sqrt(dist);
                }
                v20 = _mm_cvtps_pd(LODWORD(flRank));
                vDistribution_4 = vDistribution_4 + v2.x;
                vDistribution_8 = vDistribution_8 + v2.z;
                v20.m128d_f64[0] = v20.m128d_f64[0] + 1.0 / v19 * v18;
                vDistribution = vDistribution + v2.y;
                flRank = _mm_movedup_pd(v20).m128d_f64[0];
              }
            }
          }
          ++v7;
          v6 = (v6 + 8);
        }
        while ( this->m_nNumActivePlayers > v7 );
        if ( nCount != 0 )
          flRank = (fsqrt(
                      ((vDistribution_4 * vDistribution_4) + (vDistribution * vDistribution))
                    + (vDistribution_8 * vDistribution_8))
                  / nCount)
                 * flRank;
      }
      v11 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_rank_entity", 0, 0);
      if ( v11 != 0 )
      {
        v12.m_Data = CEntityInstance::GetEntityIndex(v24).m_Data;
        (*(*v11 + 112LL))(v11, "index", v12.m_Data);
        (*(*v11 + 128LL))(v11, "rank", flRank);
        (*(*v11 + 112LL))(v11, "target", iBestFacingPlayer);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v11, 0);
      }
      ++i;
      ++v27;
    }
    while ( this->m_nNumActivePlayers > i );
  }
}


// CHLTVDirector::BroadcastLocalTitle  (line 1263, @0x000000000227a1b0, libserver.so)  // inlines: CNetMessagePB, FindGameEvent<Source1LegacyGameEvent_t>, FindOrCreateGameEvent<Source1LegacyGameEvent_t>, GetString, PostEvent<Source1LegacyGameEvent_t>, Source1LegacyGameEvent_t, ~CNetMessagePB, ~Source1LegacyGameEvent_t
// calls: CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, CRecipientFilter::CRecipientFilter, CRecipientFilter::MakeReliable, UTIL_PlayerByIndex, CRecipientFilter::AddRecipient, CRecipientFilter::~CRecipientFilter, DevMsg(char const*,...), CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, CRecipientFilter::AddRecipientByPlayerIndex (15 total)
// strings: "hltv_title", "CHLTVServer: failed to serialize title '%s'.\n"
// globals: `guard variable for'CHLTVDirector::BroadcastLocalTitle(CEntityIndex)::tv_title, IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent, CHLTVDirector::BroadcastLocalTitle(CEntityIndex)::tv_title
void __fastcall CHLTVDirector::BroadcastLocalTitle(CHLTVDirector *const this, CEntityIndex nClientEntity)
{
  __int64 v3; // r13
  int v4; // ebx
  CBasePlayer *v5; // rax
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  const char *v8; // rax
  void (__fastcall *v9)(IGameEventSystem *, __int64, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-1C0h]
  _QWORD v10[8]; // [rsp+20h] [rbp-1B0h] BYREF
  CRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+198h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_title", 1, 0);
  if ( v3 != 0 )
  {
    if ( `guard variable for'CHLTVDirector::BroadcastLocalTitle(CEntityIndex)::tv_title == 0
      && __cxa_guard_acquire(&`guard variable for'CHLTVDirector::BroadcastLocalTitle(CEntityIndex)::tv_title) != 0 )
    {
      ConVarRef::ConVarRef(&CHLTVDirector::BroadcastLocalTitle(CEntityIndex)::tv_title, "tv_title");
      __cxa_guard_release(&`guard variable for'CHLTVDirector::BroadcastLocalTitle(CEntityIndex)::tv_title);
    }
    (*(*v3 + 136LL))(
      v3,
      "text",
      CHLTVDirector::BroadcastLocalTitle(CEntityIndex)::tv_title.m_pConVarState->m_Value.m_pszString);
    CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v10);
    v10[0] = off_3FF70D0;
    if ( (*(gameeventmanager->_vptr_IBaseInterface + 12))(gameeventmanager, v3, v10) != 0 )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      CRecipientFilter::MakeReliable(&filter);
      if ( nClientEntity.m_Data == -1 )
      {
        v4 = 1;
        if ( gpGlobals->maxClients > 0 )
        {
          do
          {
            while ( 1 )
            {
              v5 = UTIL_PlayerByIndex(v4);
              if ( v5 != 0 && !v5->m_pl.hltv )
                break;
              if ( gpGlobals->maxClients < ++v4 )
                goto LABEL_11;
            }
            CRecipientFilter::AddRecipient(&filter, v5);
            ++v4;
          }
          while ( gpGlobals->maxClients >= v4 );
        }
      }
      else
      {
        CRecipientFilter::AddRecipientByPlayerIndex(&filter, nClientEntity);
      }
LABEL_11:
      v6 = IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent;
      v7 = g_pGameEventSystem;
      v9 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent);
      v9(v7, 0xFFFFFFFFLL, 0, &filter, v6, v10, 64);
      CRecipientFilter::~CRecipientFilter(&filter);
    }
    else
    {
      v8 = (*(*v3 + 16LL))(v3);
      DevMsg("CHLTVServer: failed to serialize title '%s'.\n", v8);
    }
    (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v3);
    v10[0] = &off_3FF7010;
    CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(v10);
  }
}


// CHLTVDirector::CreateLocalChatMessage  (line 1310, @0x000000000226d4f0, libserver.so)  // inlines: CNetMessagePB, FindOrCreateGameEvent<Source1LegacyGameEvent_t>, Source1LegacyGameEvent_t
// calls: operator new, CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, DevMsg(char const*,...), operator delete, _Unwind_Resume
// strings: "hltv_chat", "steamID", "CHLTVServer: failed to serialize chat '%s'.\n"
// globals: IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent
void __fastcall CHLTVDirector::CreateLocalChatMessage(
        CHLTVDirector *const this,
        const CSteamID *const steamIDTalker,
        const char *pszName,
        const char *pszChat,
        NetMessageHandle_t *const outId,
        void **const pMsg)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  CMsgSource1LegacyGameEvent *v11; // r13
  const char *v12; // rax
  char *pszNameb; // [rsp+8h] [rbp-38h]

  v9 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_chat", 1, 0);
  v10 = v9;
  if ( v9 != 0 )
  {
    (*(*v9 + 136LL))(v9, "name", pszName);
    (*(*v10 + 136LL))(v10, "text", pszChat);
    (*(*v10 + 120LL))(v10, "steamID", steamIDTalker->m_steamid);
    v11 = operator new(0x40u);
    CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v11);
    *v11 = off_3FF70D0;
    if ( (*(gameeventmanager->_vptr_IBaseInterface + 12))(gameeventmanager, v10, v11) != 0 )
    {
      pszNameb = IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent;
      if ( (*(*g_pNetworkMessages + 96LL))(
             g_pNetworkMessages,
             IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent) != 0 )
      {
        *outId = pszNameb;
        *pMsg = v11;
LABEL_5:
        (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v10);
        return;
      }
    }
    else
    {
      v12 = (*(*v10 + 16LL))(v10);
      DevMsg("CHLTVServer: failed to serialize chat '%s'.\n", v12);
      (*(*v11 + 8LL))(v11);
    }
    *pMsg = 0;
    goto LABEL_5;
  }
}


// CHLTVDirector::BroadcastScreenMessage  (line 1349, @0x000000000226aa80, libserver.so)
// calls: CHLTVDirector::BroadcastEventInternal, ConMsg(char const*,...)
// callers: tv_msg
// strings: "hltv_message", "SourceTV not active.\n"
void __fastcall CHLTVDirector::BroadcastScreenMessage(CHLTVDirector *const this, const char *pMessage)
{
  __int64 v4; // rax
  IGameEvent *v5; // rbx

  if ( this->m_pHLTVServer != 0 )
  {
    v4 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_message", 1, 0);
    v5 = v4;
    if ( v4 != 0 )
    {
      (*(*v4 + 136LL))(v4, "text", pMessage);
      CHLTVDirector::BroadcastEventInternal(this, v5, 0);
      (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v5);
    }
  }
  else
  {
    ConMsg("SourceTV not active.\n", pMessage);
  }
}


// tv_msg  (line 1366, @0x000000000226ab30, libserver.so)  // inlines: ArgS
// calls: HLTVDirector, CHLTVDirector::BroadcastScreenMessage
void __fastcall tv_msg(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  __int64 m_nArgv0Size; // rax
  CHLTVDirector *v4; // rax

  v2 = "";
  m_nArgv0Size = args->m_nArgv0Size;
  if ( m_nArgv0Size != 0 )
    v2 = &args->m_pArgSBuffer[m_nArgv0Size];
  v4 = HLTVDirector();
  CHLTVDirector::BroadcastScreenMessage(v4, v2);
}


// CHLTVDirector::OnHLTVUncompressedSnapshot  (line 1371, @0x0000000002258820, libserver.so)  // inlines: FindOrCreateNetMessage<Source1LegacyGameEvent_t>, Serialize<Source1LegacyGameEvent_t>
// globals: INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5,(NetChannelBufType_t)1,true>::s_ProtobufBinding
void __fastcall CHLTVDirector::OnHLTVUncompressedSnapshot(CHLTVDirector *const this, int nUserID, bf_write *const msg)
{
  Source1LegacyGameEvent_t *m_pLastCameraEvent; // rbx
  NetMessageHandle_t v5; // rdx
  INetworkMessages *v6; // r12

  m_pLastCameraEvent = this->m_pLastCameraEvent;
  if ( m_pLastCameraEvent != 0 )
  {
    v5 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    v6 = g_pNetworkMessages;
    if ( INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 207, &CNetMessagePB<207,CMsgSource1LegacyGameEvent,(SignonGroup_t)5,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 64, 0, 1, 0);
      v5 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    (*(*v6 + 32LL))(v6, msg, v5, m_pLastCameraEvent);
  }
}


// CHLTVDirector::OnHLTVNetMessage  (line 1381, @0x0000000002256460, libserver.so)  // inlines: CNetMessagePB
// calls: CMsgSource1LegacyGameEvent::CopyFrom, operator new, CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, operator delete, _Unwind_Resume
void __fastcall CHLTVDirector::OnHLTVNetMessage(
        CHLTVDirector *const this,
        NetMessageHandle_t nId,
        const NetMessageInfo_t *pInfo,
        const void *pMsg)
{
  int v6; // r13d
  Source1LegacyGameEvent_t *m_pLastCameraEvent; // r13
  _QWORD *v8; // r14

  if ( pInfo->m_nMessageId == 207 )
  {
    v6 = *(pMsg + 14);
    if ( v6 == (*(this->_vptr_IGameEventListener2 + 15))(this, nId) )
    {
      m_pLastCameraEvent = this->m_pLastCameraEvent;
      if ( m_pLastCameraEvent == 0 )
      {
        v8 = operator new(0x40u);
        memset(v8, 0, 0x40u);
        m_pLastCameraEvent = v8;
        CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v8);
        *v8 = off_3FF70D0;
        this->m_pLastCameraEvent = v8;
      }
      CMsgSource1LegacyGameEvent::CopyFrom(m_pLastCameraEvent, pMsg);
    }
  }
}


