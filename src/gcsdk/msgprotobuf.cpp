
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_msgprotobuf.cpp  (line 0, @0x0000000001a6e4d0, libserver.so)  // inlines: CThreadMutex, Color, SetColor, __static_initialization_and_destruction_0
// calls: pthread_mutexattr_init, pthread_mutexattr_settype, pthread_mutex_init, __cxa_atexit
// globals: UNSPECIFIED_LOGGING_COLOR, GCSDK::CProtoBufMsgBase::s_PoolRegMutex, __dso_handle, CThreadMutex::~CThreadMutex()
void __cdecl GLOBAL__sub_I_msgprotobuf_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  pthread_mutexattr_init(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Attr);
  pthread_mutexattr_settype(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Attr, 1);
  pthread_mutex_init(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex, &GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Attr);
  __cxa_atexit(CThreadMutex::~CThreadMutex, &GCSDK::CProtoBufMsgBase::s_PoolRegMutex, &_dso_handle);
}


// GCSDK::GProtoBufMsgMemoryPoolMgr  (line 29, @0x00000000032361c0, libserver.so)
// calls: __cxa_guard_acquire, GCSDK::CProtoBufMsgMemoryPoolMgr::CProtoBufMsgMemoryPoolMgr, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: CGCClientJobGrantSurveyPermission::BYieldingRunJob, CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CGCServerJobGetAdditionalItems::BYieldingRunJob, CGCClientJobTeamFanfare::BYieldingRunJob, TournamentItemEvent, CDOTAGamerules::State_Enter_POST_GAME, GetFrostyTimeElapsedMsg, CDOTAInGamePredictionGameSystem::PostPredictionResults, RequestIngameEventDataFromGC, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob (69 total)
// globals: `guard variable for'GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr, GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr, __dso_handle, GCSDK::CProtoBufMsgMemoryPoolMgr::~CProtoBufMsgMemoryPoolMgr()
GCSDK::CProtoBufMsgMemoryPoolMgr *__cdecl GCSDK::GProtoBufMsgMemoryPoolMgr()
{
  if ( `guard variable for'GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr != 0 )
    return &GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr;
  if ( __cxa_guard_acquire(&`guard variable for'GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr) != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolMgr::CProtoBufMsgMemoryPoolMgr(&GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr);
    __cxa_guard_release(&`guard variable for'GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr);
    __cxa_atexit(
      GCSDK::CProtoBufMsgMemoryPoolMgr::~CProtoBufMsgMemoryPoolMgr,
      &GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr,
      &_dso_handle);
  }
  return &GCSDK::GProtoBufMsgMemoryPoolMgr(void)::s_ProtoBufMsgMemoryPoolMgr;
}


// GCSDK::CProtoBufNetPacket::CProtoBufNetPacket  (line 41, @0x0000000003236260, libserver.so)  // inlines: AllocProtoBufHdr, CRefCount, GetFixedHeader, IMsgNetPacket, set_client_steam_id, set_gc_dir_index_source, set_gc_msg_src, set_has_client_steam_id, set_has_gc_dir_index_source, set_has_gc_msg_src, ~CRefCount, ~IMsgNetPacket
// calls: GCSDK::CNetPacket::AddRef, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, google::protobuf::MessageLite::ParseFromArray(void const*,int), _Unwind_Resume
// callers: GCSDK::IMsgNetPacketFromCNetPacket
void __fastcall GCSDK::CProtoBufNetPacket::CProtoBufNetPacket(
        GCSDK::CProtoBufNetPacket *const this,
        GCSDK::CNetPacket *pNetPacket,
        GCProtoBufMsgSrc eMsgSrc,
        const CSteamID steamID,
        uint32 nGCDirIndex,
        GCSDK::MsgType_t msgType)
{
  GCSDK::CProtoBufMsgMemoryPoolMgr *v11; // rax
  unsigned int v12; // edx
  CMsgProtoBufHeader *m_pHeader; // rax
  CMsgProtoBufHeader *v14; // rax
  CMsgProtoBufHeader *v15; // rax

  this->m_cRef = 1;
  this->_vptr_CRefCount = off_47D0770;  // vptr: GCSDK::CProtoBufNetPacket
  this->m_steamID = steamID;
  this->m_msgType = msgType;
  this->m_bIsValid = 0;
  this->m_pNetPacket = pNetPacket;
  GCSDK::CNetPacket::AddRef(pNetPacket);
  v11 = GCSDK::GProtoBufMsgMemoryPoolMgr();
  this->m_pHeader = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(&v11->m_PoolHeaders);
  v12 = *((*(this->_vptr_CRefCount + 5))(this) + 4);
  if ( v12 + 8 <= pNetPacket->m_cubData
    && google::protobuf::MessageLite::ParseFromArray(this->m_pHeader, pNetPacket->m_pubData + 8, v12) != 0 )
  {
    m_pHeader = this->m_pHeader;
    if ( *(m_pHeader + 19) == 0 )
    {
      *(m_pHeader + 4) |= 1u;
      *(m_pHeader + 3) = steamID;
      v14 = this->m_pHeader;
      *(v14 + 4) |= 0x200u;
      *(v14 + 20) = nGCDirIndex;
      v15 = this->m_pHeader;
      *(v15 + 4) |= 0x100u;
      *(v15 + 19) = eMsgSrc;
    }
    this->m_bIsValid = 1;
  }
}


// GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket  (line 88, @0x0000000003236360, libserver.so)  // inlines: FreeProtoBufHdr, ~CRefCount, ~IMsgNetPacket
// calls: GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CNetPacket::Release
// callers: GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket
void __fastcall GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket(GCSDK::CProtoBufNetPacket *const this)
{
  google::protobuf::Message *m_pHeader; // r12
  GCSDK::CProtoBufMsgMemoryPoolMgr *v3; // rax

  m_pHeader = this->m_pHeader;
  this->_vptr_CRefCount = off_47D0770;  // vptr: GCSDK::CProtoBufNetPacket
  v3 = GCSDK::GProtoBufMsgMemoryPoolMgr();
  GCSDK::CProtoBufMsgMemoryPoolBase::Free(&v3->m_PoolHeaders, m_pHeader);
  GCSDK::CNetPacket::Release(this->m_pNetPacket);
  this->_vptr_CRefCount = off_47D0430;  // vptr: GCSDK::CRefCount
}


// GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket  (line 88, @0x00000000032363a0, libserver.so)
// calls: GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket, operator delete
void __fastcall GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket(GCSDK::CProtoBufNetPacket *const this)
{
  GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket(this);
  operator delete(this);
}


// GCSDK::CProtoBufNetPacket::GetMsgBody  (line 97, @0x0000000003234340, libserver.so)  // inlines: GetFixedHeader
// callers: GCSDK::CProtoBufNetPacket::GetMsgBody, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, GCSDK::CProtoBufMsgBase::InitFromPacketSafe
bool __fastcall GCSDK::CProtoBufNetPacket::GetMsgBody(
        const GCSDK::CProtoBufNetPacket *const this,
        const uint8 **const pubData,
        uint32 *const cubData)
{
  unsigned int v6; // r12d

  v6 = *((*(this->_vptr_CRefCount + 5))(this) + 4) + 8;
  *pubData = (v6 + (*(this->_vptr_CRefCount + 5))(this));
  *cubData = (*(this->_vptr_CRefCount + 6))(this) - v6;
  return 1;
}


// GCSDK::CProtoBufNetPacket::GetMsgBody  (line 97, @0x00000000032348c0, libserver.so)
// calls: GCSDK::CProtoBufNetPacket::GetMsgBody
bool __fastcall GCSDK::CProtoBufNetPacket::GetMsgBody(
        const GCSDK::CProtoBufNetPacket *const this,
        const uint8 **const pubData,
        uint32 *const cubData)
{
  if ( this->m_bIsValid )
    return GCSDK::CProtoBufNetPacket::GetMsgBody(this, pubData, cubData);
  *pubData = 0;
  *cubData = 0;
  return 0;
}


// GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase  (line 117, @0x00000000032348f0, libserver.so)  // inlines: CInterlockedIntT, CTSListBase, Detach, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedExchange, ThreadPause, operator=, ~CTSListBase
// calls: operator new, operator delete, _Unwind_Resume
// callers: CGCClientJobGrantSurveyPermission::BYieldingRunJob, CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CGCServerJobGetAdditionalItems::BYieldingRunJob, CGCClientJobTeamFanfare::BYieldingRunJob, TournamentItemEvent, CDOTAGamerules::State_Enter_POST_GAME, GetFrostyTimeElapsedMsg, CDOTAInGamePredictionGameSystem::PostPredictionResults, RequestIngameEventDataFromGC, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob (66 total)
void __fastcall GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(
        GCSDK::CProtoBufMsgMemoryPoolBase *const this,
        uint32 unTargetLow,
        uint32 unTargetHigh)
{
  void *v4; // rax
  CTSQueue<google::protobuf::Message*,false> *v5; // r12
  CTSQueue<google::protobuf::Message*,false>::Node_t *v6; // rax

  this->m_unAllocHitCounter.m_value = 0;
  this->_vptr_CProtoBufMsgMemoryPoolBase = off_47D0810;  // vptr: GCSDK::CProtoBufMsgMemoryPoolBase
  this->m_unAllocMissCounter.m_value = 0;
  this->m_unTargetCountHigh = unTargetHigh;
  this->m_unAllocated.m_value = 0;
  this->m_unTargetCountLow = unTargetLow;
  _InterlockedExchange(&this->m_unAllocHitCounter.m_value, 0);
  _InterlockedExchange(&this->m_unAllocMissCounter.m_value, 0);
  _InterlockedExchange(&this->m_unAllocated.m_value, 0);
  v4 = operator new(0x40u);
  *(v4 + 8) = 0;
  v5 = v4;
  *(v4 + 6) = 0;
  *(v4 + 7) = 0;
  _InterlockedExchange(v4 + 8, 0);
  *(v4 + 3) = 0;
  *(v4 + 1) = 0;
  v6 = operator new(0x10u);
  v5->m_Tail.value.pNode = v6;
  v5->m_Head.value.pNode = v6;
  v6->pNext = v5;
  this->m_pTSQueueFreeObjects = v5;
}


// GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase  (line 131, @0x0000000003234420, libserver.so)  // inlines: Detach, FinishPush, InterlockedCompareExchangeNodeLink, Pop, Purge, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator--, ~CTSListBase, ~CTSQueue
// calls: operator delete
// callers: GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsgMemoryPool (68 total)
void __fastcall GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(
        GCSDK::CProtoBufMsgMemoryPoolBase *const this)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r14
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // rax
  CTSQueue<google::protobuf::Message*,false>::NodeLink_t *p_m_Tail; // r13
  intp *p_sequence; // r15
  signed __int64 *pNode; // rdi
  signed __int64 pNext; // rsi
  signed __int64 v8; // r10
  __int128 v9; // rt0
  __int128 v10; // rt0
  __int128 v11; // rt0
  signed __int64 *Next; // rdi
  __int64 v13; // rdx
  CTSQueue<google::protobuf::Message*,false> *v14; // r13
  volatile signed __int64 *v15; // r15
  signed __int64 *v16; // rdi
  signed __int64 v17; // rsi
  signed __int64 v18; // r10
  __int128 v19; // rt0
  __int128 v20; // rt0
  __int128 v21; // rt0
  signed __int64 *v22; // rdi
  __int64 v23; // rdx
  CTSQueue<google::protobuf::Message*,false>::Node_t *v24; // rdi
  unsigned __int64 v25; // rcx
  TSLHead_t m_Head; // rt0
  CTSQueue<google::protobuf::Message*,false> *v28; // [rsp+8h] [rbp-68h]
  intp *v29; // [rsp+38h] [rbp-38h]

  m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
  this->_vptr_CProtoBufMsgMemoryPoolBase = off_47D0810;  // vptr: GCSDK::CProtoBufMsgMemoryPoolBase
  v28 = m_pTSQueueFreeObjects;
  p_m_Tail = &m_pTSQueueFreeObjects->m_Tail;
  p_sequence = &m_pTSQueueFreeObjects->m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        pNode = v28->m_Head.value.pNode;
        pNext = v28->m_Head.value.pNode->pNext;
      }
      while ( pNext == 0 );
      if ( pNode == p_m_Tail->value.pNode )
        break;
      if ( v28 != pNext )
      {
        v8 = *(pNext + 8);
        *&v9 = v28->m_Head.value.pNode;
        *(&v9 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(v28, *p_sequence + 1, pNext, &v9) != 0 )
        {
          _InterlockedSub(&v28->m_Count.m_value, 1u);
          pNode[1] = v8;
          operator delete(pNode);
        }
      }
    }
    if ( v28 == pNext )
      break;
    *&v10 = v28->m_Head.value.pNode;
    *(&v10 + 1) = p_m_Tail->value.sequence;
    _InterlockedCompareExchange128(p_m_Tail, *(&v10 + 1) + 1LL, pNext, &v10);
  }
  while ( 1 )
  {
    v2 = v2;
    Next = v28->m_FreeNodes.m_Head.value.Next;
    v13 = *(&v28->m_FreeNodes.m_Head.value64x128 + 1);
    if ( Next == 0 )
      break;
    while ( 1 )
    {
      v2 = (v13 - 1) | v2 & 0xFFFFFFFF00000000LL;
      *&v11 = Next;
      *(&v11 + 1) = v13;
      if ( _InterlockedCompareExchange128(&v28->m_FreeNodes, v2, *Next, &v11) != 0 )
        break;
      _mm_pause();
      Next = v28->m_FreeNodes.m_Head.value.Next;
      v13 = *(&v28->m_FreeNodes.m_Head.value64x128 + 1);
      if ( Next == 0 )
        goto LABEL_13;
    }
    operator delete(Next);
  }
LABEL_13:
  v28->m_Head.value.sequence = 0;
  v28->m_Tail.value.sequence = 0;
  v14 = this->m_pTSQueueFreeObjects;
  v15 = &v14->m_Tail;
  if ( v14 != 0 )
  {
LABEL_14:
    v29 = &v14->m_Head.value.sequence;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v16 = v14->m_Head.value.pNode;
          v17 = v14->m_Head.value.pNode->pNext;
        }
        while ( v17 == 0 );
        if ( v16 == *v15 )
          break;
        if ( v14 != v17 )
        {
          v18 = *(v17 + 8);
          *&v19 = v14->m_Head.value.pNode;
          *(&v19 + 1) = *v29;
          if ( _InterlockedCompareExchange128(v14, *v29 + 1, v17, &v19) != 0 )
          {
            _InterlockedSub(&v14->m_Count.m_value, 1u);
            v16[1] = v18;
            operator delete(v16);
            goto LABEL_14;
          }
        }
      }
      if ( v14 == v17 )
        break;
      *&v20 = v14->m_Head.value.pNode;
      *(&v20 + 1) = v14->m_Tail.value.sequence;
      _InterlockedCompareExchange128(v15, *(&v20 + 1) + 1LL, v17, &v20);
    }
    while ( 1 )
    {
      v22 = v14->m_FreeNodes.m_Head.value.Next;
      v1 = v1;
      v23 = *(&v14->m_FreeNodes.m_Head.value64x128 + 1);
      if ( v22 == 0 )
        break;
      while ( 1 )
      {
        v1 = (v23 - 1) | v1 & 0xFFFFFFFF00000000LL;
        *&v21 = v22;
        *(&v21 + 1) = v23;
        if ( _InterlockedCompareExchange128(&v14->m_FreeNodes, v1, *v22, &v21) != 0 )
          break;
        _mm_pause();
        v22 = v14->m_FreeNodes.m_Head.value.Next;
        v23 = *(&v14->m_FreeNodes.m_Head.value64x128 + 1);
        if ( v22 == 0 )
          goto LABEL_26;
      }
      operator delete(v22);
    }
LABEL_26:
    v24 = v14->m_Head.value.pNode;
    v14->m_Tail.value.sequence = 0;
    v14->m_Head.value.sequence = 0;
    operator delete(v24);
    v14->m_Head.value.pNode = 0;
    v25 = 0;
    v14->m_Tail.value.pNode = 0;
    do
    {
      _mm_pause();
      if ( v14->m_FreeNodes.m_Head.value.Next == 0 )
        break;
      v25 = *(&v14->m_FreeNodes.m_Head.value64x128 + 1) & 0xFFFF0000LL | v25 & 0xFFFFFFFF00000000LL;
      m_Head = v14->m_FreeNodes.m_Head;
    }
    while ( _InterlockedCompareExchange128(&v14->m_FreeNodes, v25, 0, &m_Head) == 0 );
    operator delete(v14);
  }
}


// GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase  (line 131, @0x00000000032346f0, libserver.so)
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(
        GCSDK::CProtoBufMsgMemoryPoolBase *const this)
{
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPoolBase::Alloc  (line 143, @0x0000000003234a10, libserver.so)  // inlines: Count, FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, operator int, operator%, operator++, operator--
// callers: CGCClientJobGrantSurveyPermission::BYieldingRunJob, CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CGCServerJobGetAdditionalItems::BYieldingRunJob, CGCClientJobTeamFanfare::BYieldingRunJob, TournamentItemEvent, CDOTAGamerules::State_Enter_POST_GAME, GetFrostyTimeElapsedMsg, CDOTAInGamePredictionGameSystem::PostPredictionResults, RequestIngameEventDataFromGC, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob (67 total)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(
        GCSDK::CProtoBufMsgMemoryPoolBase *const this)
{
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // rsi
  intp v3; // rdx
  signed __int64 *pNode; // r11
  signed __int64 pNext; // r8
  unsigned __int64 sequence; // rcx
  google::protobuf::Message *v7; // r13
  __int128 v8; // rt0
  TSLHead_t m_Head; // rax
  TSLHead_t v10; // rt0
  unsigned __int8 v11; // tt
  CTSQueue<google::protobuf::Message*,false> *v12; // rdi
  uint32 m_value; // eax
  signed __int64 *v14; // r14
  signed __int64 v15; // r8
  signed __int64 v16; // rsi
  __int128 v17; // rt0
  unsigned __int64 v18; // rcx
  volatile signed __int64 *p_m_FreeNodes; // r8
  TSLHead_t v20; // rax
  __int64 v21; // rdx
  TSLHead_t v22; // rt0
  unsigned __int8 v23; // tt
  __int128 v25; // rt0
  __int128 v26; // rt0
  intp *p_sequence; // [rsp+10h] [rbp-40h]
  CTSQueue<google::protobuf::Message*,false> *v28; // [rsp+18h] [rbp-38h]
  intp *v29; // [rsp+28h] [rbp-28h]

  m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
  p_sequence = &m_pTSQueueFreeObjects->m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v3 = *p_sequence;
        pNode = m_pTSQueueFreeObjects->m_Head.value.pNode;
        pNext = m_pTSQueueFreeObjects->m_Head.value.pNode->pNext;
        sequence = m_pTSQueueFreeObjects->m_Tail.value.sequence;
      }
      while ( pNext == 0 );
      if ( pNode != m_pTSQueueFreeObjects->m_Tail.value.pNode )
        break;
      if ( m_pTSQueueFreeObjects == pNext )
        goto LABEL_23;
      *&v25 = m_pTSQueueFreeObjects->m_Head.value.pNode;
      *(&v25 + 1) = m_pTSQueueFreeObjects->m_Tail.value.sequence;
      _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_Tail, sequence + 1, pNext, &v25);
    }
    if ( m_pTSQueueFreeObjects != pNext )
    {
      v7 = *(pNext + 8);
      *&v8 = m_pTSQueueFreeObjects->m_Head.value.pNode;
      *(&v8 + 1) = *p_sequence;
      if ( _InterlockedCompareExchange128(m_pTSQueueFreeObjects, v3 + 1, pNext, &v8) != 0 )
        break;
    }
  }
  _InterlockedSub(&m_pTSQueueFreeObjects->m_Count.m_value, 1u);
  sequence = 0;
  pNext = 0xFFFFFFFF00000000LL;
  pNode[1] = v7;
  while ( 1 )
  {
    m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
    sequence = (m_Head.value32.DepthAndSequence + 65537) | sequence & 0xFFFFFFFF00000000LL;
    *pNode = m_Head.value.Next;
    v10 = m_Head;
    v11 = _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_FreeNodes, sequence, pNode, &v10);
    v3 = *(&v10.value64x128 + 1);
    if ( v11 != 0 )
      break;
    _mm_pause();
  }
  if ( v7 == 0 )
  {
LABEL_23:
    _InterlockedAdd(&this->m_unAllocMissCounter.m_value, 1u);
    v7 = (*(this->_vptr_CProtoBufMsgMemoryPoolBase + 3))(this, m_pTSQueueFreeObjects, v3, sequence, pNext);
    goto LABEL_19;
  }
  _InterlockedAdd(&this->m_unAllocHitCounter.m_value, 1u);
  v12 = this->m_pTSQueueFreeObjects;
  m_value = v12->m_Count.m_value;
  if ( m_value > this->m_unTargetCountHigh
    || m_value > this->m_unTargetCountLow
    && this->m_unAllocHitCounter.m_value == 6 * (this->m_unAllocHitCounter.m_value / 6) )
  {
    v28 = this->m_pTSQueueFreeObjects;
    v29 = &v12->m_Head.value.sequence;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v14 = v12->m_Head.value.pNode;
          v15 = v12->m_Head.value.pNode->pNext;
        }
        while ( v15 == 0 );
        if ( v14 != v12->m_Tail.value.pNode )
          break;
        if ( v12 == v15 )
          goto LABEL_19;
        *&v26 = v12->m_Head.value.pNode;
        *(&v26 + 1) = v12->m_Tail.value.sequence;
        _InterlockedCompareExchange128(&v12->m_Tail, *(&v26 + 1) + 1LL, v15, &v26);
      }
      if ( v12 != v15 )
      {
        v16 = *(v15 + 8);
        *&v17 = v12->m_Head.value.pNode;
        *(&v17 + 1) = *v29;
        if ( _InterlockedCompareExchange128(v28, *v29 + 1, v15, &v17) != 0 )
          break;
      }
    }
    _InterlockedSub(&v12->m_Count.m_value, 1u);
    v18 = 0;
    v14[1] = v16;
    p_m_FreeNodes = &v12->m_FreeNodes;
    while ( 1 )
    {
      v20 = v12->m_FreeNodes.m_Head;
      v18 = (v20.value32.DepthAndSequence + 65537) | v18 & 0xFFFFFFFF00000000LL;
      *v14 = v20.value.Next;
      v22 = v20;
      v23 = _InterlockedCompareExchange128(p_m_FreeNodes, v18, v14, &v22);
      v21 = *(&v22.value64x128 + 1);
      if ( v23 != 0 )
        break;
      _mm_pause();
    }
    if ( v16 != 0 )
      (*(this->_vptr_CProtoBufMsgMemoryPoolBase + 4))(this, v16, v21, v18, p_m_FreeNodes, 0xFFFFFFFF00000000LL);
  }
LABEL_19:
  _InterlockedAdd(&this->m_unAllocated.m_value, 1u);
  return v7;
}


// GCSDK::CProtoBufMsgMemoryPoolBase::Free  (line 180, @0x0000000003234c70, libserver.so)  // inlines: CopyConstruct<google::protobuf::Message*>, FinishPush, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, operator++, operator--
// calls: AssertMsg_ConditionFailed, operator new
// callers: GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgTeamFanfare>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::~CProtoBufMsg, CGCClientJobGrantSurveyPermission::~CGCClientJobGrantSurveyPermission, CGCClientJobGrantSurveyPermission::BYieldingRunJob (129 total)
// strings: "CTSQueue corruption"
// globals: CTSQueue<google::protobuf::Message *,false>::Push(CTSQueue<google::protobuf::Message *,false>::Node_t *)::_assertionConstants
void __fastcall GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsgMemoryPoolBase *const this,
        google::protobuf::Message *pObject)
{
  unsigned __int64 v4; // rcx
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // r15
  TSLHead_t m_Head; // rax
  _QWORD *p_Next; // r14
  TSLHead_t v8; // rt0
  volatile signed __int64 *p_m_Tail; // r13
  int v10; // r12d
  intp sequence; // rdx
  volatile signed __int64 *pNode; // rsi
  __int128 v13; // rt0
  __int128 v14; // rt0

  (*(*pObject + 32LL))(pObject);
  _InterlockedSub(&this->m_unAllocated.m_value, 1u);
  v4 = 0;
  m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
  m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
  if ( m_Head.value.Next != 0 )
  {
    p_Next = &m_pTSQueueFreeObjects->m_FreeNodes.m_Head.value.Next->Next;
    while ( 1 )
    {
      v4 = (m_Head.value32.DepthAndSequence - 1) | v4 & 0xFFFFFFFF00000000LL;
      v8 = m_Head;
      if ( _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_FreeNodes, v4, m_Head.value.Next->Next, &v8) != 0 )
        break;
      _mm_pause();
      m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
      p_Next = &m_Head.value.Next->Next;
      if ( m_Head.value.Next == 0 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    p_Next = operator new(0x10u);
  }
  if ( p_Next != -8LL )
    p_Next[1] = pObject;
  *p_Next = m_pTSQueueFreeObjects;
  p_m_Tail = &m_pTSQueueFreeObjects->m_Tail;
  v10 = 0;
  while ( 1 )
  {
    sequence = m_pTSQueueFreeObjects->m_Tail.value.sequence;
    pNode = m_pTSQueueFreeObjects->m_Tail.value.pNode;
    if ( m_pTSQueueFreeObjects == _InterlockedCompareExchange64(pNode, p_Next, m_pTSQueueFreeObjects) )
      break;
    *&v13 = pNode;
    *(&v13 + 1) = sequence;
    _InterlockedCompareExchange128(p_m_Tail, sequence + 1, *pNode, &v13);
    if ( ++v10 > 9999999
      && AssertMsg_ConditionFailed(
           &CTSQueue<google::protobuf::Message *,false>::Push(CTSQueue<google::protobuf::Message *,false>::Node_t *)::_assertionConstants,
           "CTSQueue corruption") != 0 )
    {
      __debugbreak();
    }
  }
  *&v14 = pNode;
  *(&v14 + 1) = sequence;
  _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v14);
  _InterlockedAdd(&m_pTSQueueFreeObjects->m_Count.m_value, 1u);
}


// GCSDK::CProtoBufMsgMemoryPoolBase::GetEstimatedSize  (line 193, @0x0000000003235ab0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<google::protobuf::Message*>, Count, Element, EnsureCapacity, FinishPush, FreeNode, GrowMemory, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Purge, Push, PushItem, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, operator int, operator++, operator--, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: AssertMsg_ConditionFailed, CUtlMemory<google::protobuf::Message*, int>::Grow, operator new, CUtlMemory<google::protobuf::Message*, int>::Purge, _Unwind_Resume
// callers: GCSDK::CProtoBufMsgMemoryPoolMgr::DumpPoolInfo
// strings: "CTSQueue corruption"
// globals: CTSQueue<google::protobuf::Message *,false>::Push(CTSQueue<google::protobuf::Message *,false>::Node_t *)::_assertionConstants
uint32 __fastcall GCSDK::CProtoBufMsgMemoryPoolBase::GetEstimatedSize(GCSDK::CProtoBufMsgMemoryPoolBase *const this)
{
  unsigned __int64 v1; // r14
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // rsi
  int v4; // r12d
  google::protobuf::Message **v5; // rax
  signed __int64 *pNode; // rdi
  signed __int64 pNext; // r8
  google::protobuf::Message *v8; // r13
  __int128 v9; // rt0
  TSLHead_t m_Head; // rax
  TSLHead_t v11; // rt0
  __int64 m_Size; // r12
  int v13; // eax
  google::protobuf::Message **v14; // rax
  google::protobuf::Message **v15; // r12
  CTSQueue<google::protobuf::Message*,false> *v16; // rcx
  TSLHead_t v17; // rax
  _QWORD *p_Next; // r13
  TSLHead_t v19; // rt0
  int v20; // r12d
  volatile signed __int64 *v21; // r15
  __int64 v22; // rdx
  volatile signed __int64 *v23; // rsi
  __int128 v24; // rt0
  __int128 v25; // rt0
  __int128 v26; // rt0
  int v27; // eax
  int unEstimate; // [rsp+0h] [rbp-A0h]
  uint32 unEstimatea; // [rsp+0h] [rbp-A0h]
  __int64 i; // [rsp+20h] [rbp-80h]
  unsigned __int64 v33; // [rsp+28h] [rbp-78h]
  signed __int64 v34; // [rsp+28h] [rbp-78h]
  intp *p_sequence; // [rsp+48h] [rbp-58h]
  CUtlVector<google::protobuf::Message*,CUtlMemory<google::protobuf::Message*,int> > vecTemp; // [rsp+50h] [rbp-50h] BYREF

  m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
  vecTemp.m_Size = 0;
  vecTemp.m_Memory.m_pMemory = 0;
  vecTemp.m_Memory.m_nAllocationCount = 0;
  vecTemp.m_Memory.m_nGrowSize = 0;
  v4 = 2 * m_pTSQueueFreeObjects->m_Count.m_value;
  if ( v4 > 0 )
  {
    v5 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v4);
    m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
    vecTemp.m_Memory.m_pMemory = v5;
    vecTemp.m_Memory.m_nAllocationCount = v4;
  }
  for ( ; m_pTSQueueFreeObjects->m_Count.m_value > 0; m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects )
  {
    p_sequence = &m_pTSQueueFreeObjects->m_Head.value.sequence;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          pNode = m_pTSQueueFreeObjects->m_Head.value.pNode;
          pNext = m_pTSQueueFreeObjects->m_Head.value.pNode->pNext;
        }
        while ( pNext == 0 );
        if ( pNode != m_pTSQueueFreeObjects->m_Tail.value.pNode )
          break;
        if ( m_pTSQueueFreeObjects == pNext )
        {
          v8 = 0;
          goto LABEL_11;
        }
        *&v25 = m_pTSQueueFreeObjects->m_Head.value.pNode;
        *(&v25 + 1) = m_pTSQueueFreeObjects->m_Tail.value.sequence;
        _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_Tail, *(&v25 + 1) + 1LL, pNext, &v25);
      }
      if ( m_pTSQueueFreeObjects != pNext )
      {
        v8 = *(pNext + 8);
        *&v9 = m_pTSQueueFreeObjects->m_Head.value.pNode;
        *(&v9 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(m_pTSQueueFreeObjects, *p_sequence + 1, pNext, &v9) != 0 )
          break;
      }
    }
    _InterlockedSub(&m_pTSQueueFreeObjects->m_Count.m_value, 1u);
    pNode[1] = v8;
    v33 = v33;
    while ( 1 )
    {
      m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
      v33 = (m_Head.value32.DepthAndSequence + 65537) | v33 & 0xFFFFFFFF00000000LL;
      *pNode = m_Head.value.Next;
      v11 = m_Head;
      if ( _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_FreeNodes, v33, pNode, &v11) != 0 )
        break;
      _mm_pause();
    }
LABEL_11:
    m_Size = vecTemp.m_Size;
    v13 = vecTemp.m_Size;
    if ( vecTemp.m_Size == vecTemp.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<google::protobuf::Message *,int>::Grow(&vecTemp.m_Memory, 1);
      v13 = vecTemp.m_Size;
    }
    vecTemp.m_Size = v13 + 1;
    v14 = &vecTemp.m_Memory.m_pMemory[m_Size];
    if ( v14 != 0 )
      *v14 = v8;
  }
  if ( vecTemp.m_Size <= 0 )
  {
    unEstimatea = 0;
  }
  else
  {
    i = 0;
    unEstimate = 0;
    do
    {
      unEstimate += (*(*vecTemp.m_Memory.m_pMemory[i] + 128LL))(vecTemp.m_Memory.m_pMemory[i]);
      v1 = v1;
      v15 = &vecTemp.m_Memory.m_pMemory[i];
      v16 = this->m_pTSQueueFreeObjects;
      v17 = v16->m_FreeNodes.m_Head;
      v34 = v16;
      p_Next = &v17.value.Next->Next;
      if ( v17.value.Next != 0 )
      {
        while ( 1 )
        {
          v1 = (v17.value32.DepthAndSequence - 1) | v1 & 0xFFFFFFFF00000000LL;
          v19 = v17;
          if ( _InterlockedCompareExchange128(&v16->m_FreeNodes, v1, v17.value.Next->Next, &v19) != 0 )
            break;
          _mm_pause();
          v17 = v16->m_FreeNodes.m_Head;
          p_Next = &v17.value.Next->Next;
          if ( v17.value.Next == 0 )
            goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        p_Next = operator new(0x10u);
      }
      if ( p_Next != -8LL )
        p_Next[1] = *v15;
      v20 = 0;
      *p_Next = v34;
      v21 = (v34 + 16);
      while ( 1 )
      {
        v22 = *(v34 + 24);
        v23 = *(v34 + 16);
        if ( v34 == _InterlockedCompareExchange64(v23, p_Next, v34) )
          break;
        *&v24 = v23;
        *(&v24 + 1) = v22;
        _InterlockedCompareExchange128(v21, v22 + 1, *v23, &v24);
        if ( ++v20 > 9999999
          && AssertMsg_ConditionFailed(
               &CTSQueue<google::protobuf::Message *,false>::Push(CTSQueue<google::protobuf::Message *,false>::Node_t *)::_assertionConstants,
               "CTSQueue corruption") != 0 )
        {
          __debugbreak();
        }
      }
      *&v26 = v23;
      *(&v26 + 1) = v22;
      _InterlockedCompareExchange128(v21, v22 + 1, p_Next, &v26);
      _InterlockedAdd((v34 + 32), 1u);
      v27 = i++;
    }
    while ( vecTemp.m_Size > v27 + 1 );
    unEstimatea = (unEstimate * ((this->m_unAllocated.m_value + vecTemp.m_Size) / vecTemp.m_Size));
  }
  if ( (vecTemp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<google::protobuf::Message *,int>::Purge(&vecTemp.m_Memory);
    if ( (vecTemp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<google::protobuf::Message *,int>::Purge(&vecTemp.m_Memory);
  }
  return unEstimatea;
}


// GCSDK::CProtoBufMsgMemoryPoolBase::PopItem  (line 234, @0x0000000003234da0, libserver.so)  // inlines: FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator--
// callers: GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsgMemoryPool, GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsgMemoryPool (65 total)
bool __fastcall GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(
        GCSDK::CProtoBufMsgMemoryPoolBase *const this,
        google::protobuf::Message **ppMsg)
{
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // rdi
  signed __int64 *pNode; // r14
  signed __int64 pNext; // r8
  google::protobuf::Message *v5; // r11
  __int128 v6; // rt0
  unsigned __int64 v7; // rcx
  TSLHead_t m_Head; // rax
  TSLHead_t v9; // rt0
  unsigned __int8 v10; // tt
  bool result; // al
  __int128 v12; // rt0
  intp *p_sequence; // [rsp+10h] [rbp-28h]

  m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
  p_sequence = &m_pTSQueueFreeObjects->m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        pNode = m_pTSQueueFreeObjects->m_Head.value.pNode;
        pNext = m_pTSQueueFreeObjects->m_Head.value.pNode->pNext;
      }
      while ( pNext == 0 );
      if ( pNode != m_pTSQueueFreeObjects->m_Tail.value.pNode )
        break;
      if ( m_pTSQueueFreeObjects == pNext )
        return 0;
      *&v12 = m_pTSQueueFreeObjects->m_Head.value.pNode;
      *(&v12 + 1) = m_pTSQueueFreeObjects->m_Tail.value.sequence;
      _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_Tail, *(&v12 + 1) + 1LL, pNext, &v12);
    }
    if ( m_pTSQueueFreeObjects != pNext )
    {
      v5 = *(pNext + 8);
      *&v6 = m_pTSQueueFreeObjects->m_Head.value.pNode;
      *(&v6 + 1) = *p_sequence;
      if ( _InterlockedCompareExchange128(m_pTSQueueFreeObjects, *p_sequence + 1, pNext, &v6) != 0 )
        break;
    }
  }
  _InterlockedSub(&m_pTSQueueFreeObjects->m_Count.m_value, 1u);
  v7 = 0;
  pNode[1] = v5;
  *ppMsg = v5;
  while ( 1 )
  {
    m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
    v7 = (m_Head.value32.DepthAndSequence + 65537) | v7 & 0xFFFFFFFF00000000LL;
    *pNode = m_Head.value.Next;
    v9 = m_Head;
    v10 = _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_FreeNodes, v7, pNode, &v9);
    result = v10 != 0;
    if ( v10 != 0 )
      break;
    _mm_pause();
  }
  return result;
}


// GCSDK::CProtoBufMsgMemoryPoolMgr::CProtoBufMsgMemoryPoolMgr  (line 242, @0x00000000032360d0, libserver.so)  // inlines: AddToTail, CProtoBufMsgMemoryPool, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<GCSDK::CProtoBufMsgMemoryPoolBase*>, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GrowMemory, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMsgProtoBufHeader::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int>::Grow, GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::~CProtoBufMsgMemoryPool, _Unwind_Resume, CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int>::Purge
// callers: GCSDK::GProtoBufMsgMemoryPoolMgr
void __fastcall GCSDK::CProtoBufMsgMemoryPoolMgr::CProtoBufMsgMemoryPoolMgr(
        GCSDK::CProtoBufMsgMemoryPoolMgr *const this)
{
  const google::protobuf::Descriptor *v2; // rax
  uint32 Int32; // r12d
  const google::protobuf::Descriptor *v4; // rax
  uint32 v5; // eax
  GCSDK::CProtoBufMsgMemoryPoolBase **m_pMemory; // rax

  v2 = CMsgProtoBufHeader::descriptor();
  Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
            (v2->options_ + 8),
            msgpool_hard_limit.number_,
            msgpool_hard_limit.default_value_);
  v4 = CMsgProtoBufHeader::descriptor();
  v5 = google::protobuf::internal::ExtensionSet::GetInt32(
         (v4->options_ + 8),
         msgpool_soft_limit.number_,
         msgpool_soft_limit.default_value_);
  GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(&this->m_PoolHeaders, v5, Int32);
  this->m_PoolHeaders._vptr_CProtoBufMsgMemoryPoolBase = &off_47D0730;
  this->m_vecMsgPools.m_Size = 0;
  this->m_vecMsgPools.m_Memory.m_pMemory = 0;
  this->m_vecMsgPools.m_Memory.m_nAllocationCount = 0;
  this->m_vecMsgPools.m_Memory.m_nGrowSize = 0;
  CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase *,int>::Grow(&this->m_vecMsgPools.m_Memory, 1);
  m_pMemory = this->m_vecMsgPools.m_Memory.m_pMemory;
  ++this->m_vecMsgPools.m_Size;
  if ( m_pMemory != 0 )
    *m_pMemory = &this->m_PoolHeaders;
}


// GCSDK::CProtoBufMsgMemoryPoolMgr::~CProtoBufMsgMemoryPoolMgr  (line 251, @0x0000000003234710, libserver.so)  // inlines: Destruct<CMsgProtoBufHeader>, FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, InternalFree, Pop, PopItem, Purge, Push, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator--, ~CProtoBufMsgMemoryPool, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int>::Purge, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPoolMgr::~CProtoBufMsgMemoryPoolMgr(
        GCSDK::CProtoBufMsgMemoryPoolMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 i; // rbx
  GCSDK::CProtoBufMsgMemoryPoolMgr *v4; // rdi
  bool v5; // zf
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // r8
  signed __int64 *pNode; // rdi
  signed __int64 pNext; // r9
  void (__fastcall ***v9)(_QWORD, volatile signed __int64 *, __int64, unsigned __int64); // r15
  __int128 v10; // rt0
  volatile signed __int64 *p_m_FreeNodes; // rsi
  TSLHead_t m_Head; // rax
  __int64 v13; // rdx
  TSLHead_t v14; // rt0
  unsigned __int8 v15; // tt
  __int128 v16; // rt0
  intp *p_sequence; // [rsp+18h] [rbp-38h]

  for ( i = 0; this->m_vecMsgPools.m_Size > i; ++i )
  {
    v4 = this->m_vecMsgPools.m_Memory.m_pMemory[i];
    if ( v4 != this && v4 != 0 )
      (*(v4->m_PoolHeaders._vptr_CProtoBufMsgMemoryPoolBase + 1))(v4);
  }
  v5 = (this->m_vecMsgPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecMsgPools.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase *,int>::Purge(&this->m_vecMsgPools.m_Memory);
    if ( (this->m_vecMsgPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase *,int>::Purge(&this->m_vecMsgPools.m_Memory);
  }
  this->m_PoolHeaders._vptr_CProtoBufMsgMemoryPoolBase = &off_47D0730;
LABEL_8:
  m_pTSQueueFreeObjects = this->m_PoolHeaders.m_pTSQueueFreeObjects;
  p_sequence = &m_pTSQueueFreeObjects->m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        pNode = m_pTSQueueFreeObjects->m_Head.value.pNode;
        pNext = m_pTSQueueFreeObjects->m_Head.value.pNode->pNext;
      }
      while ( pNext == 0 );
      if ( pNode == m_pTSQueueFreeObjects->m_Tail.value.pNode )
        break;
      if ( m_pTSQueueFreeObjects != pNext )
      {
        v9 = *(pNext + 8);
        *&v10 = m_pTSQueueFreeObjects->m_Head.value.pNode;
        *(&v10 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(m_pTSQueueFreeObjects, *p_sequence + 1, pNext, &v10) != 0 )
        {
          _InterlockedSub(&m_pTSQueueFreeObjects->m_Count.m_value, 1u);
          pNode[1] = v9;
          p_m_FreeNodes = &m_pTSQueueFreeObjects->m_FreeNodes;
          v1 = v1;
          while ( 1 )
          {
            m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
            v1 = (m_Head.value32.DepthAndSequence + 65537) | v1 & 0xFFFFFFFF00000000LL;
            *pNode = m_Head.value.Next;
            v14 = m_Head;
            v15 = _InterlockedCompareExchange128(p_m_FreeNodes, v1, pNode, &v14);
            v13 = *(&v14.value64x128 + 1);
            if ( v15 != 0 )
              break;
            _mm_pause();
          }
          if ( v9 != 0 )
          {
            (**v9)(v9, p_m_FreeNodes, v13, v1);
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
          }
          goto LABEL_8;
        }
      }
    }
    if ( m_pTSQueueFreeObjects == pNext )
      break;
    *&v16 = m_pTSQueueFreeObjects->m_Head.value.pNode;
    *(&v16 + 1) = m_pTSQueueFreeObjects->m_Tail.value.sequence;
    _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_Tail, *(&v16 + 1) + 1LL, pNext, &v16);
  }
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(&this->m_PoolHeaders);
}


// GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool  (line 264, @0x00000000032364b0, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CProtoBufMsgMemoryPoolBase*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int>::Grow
// callers: CGCClientJobGrantSurveyPermission::BYieldingRunJob, CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CGCServerJobGetAdditionalItems::BYieldingRunJob, CGCClientJobTeamFanfare::BYieldingRunJob, TournamentItemEvent, CDOTAGamerules::State_Enter_POST_GAME, GetFrostyTimeElapsedMsg, CDOTAInGamePredictionGameSystem::PostPredictionResults, RequestIngameEventDataFromGC, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob (65 total)
void __fastcall GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(
        GCSDK::CProtoBufMsgMemoryPoolMgr *const this,
        GCSDK::CProtoBufMsgMemoryPoolBase *pPool)
{
  __int64 m_Size; // r12
  int v5; // eax
  GCSDK::CProtoBufMsgMemoryPoolBase **v6; // rax

  m_Size = this->m_vecMsgPools.m_Size;
  v5 = this->m_vecMsgPools.m_Size;
  if ( m_Size == this->m_vecMsgPools.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase *,int>::Grow(&this->m_vecMsgPools.m_Memory, 1);
    v5 = this->m_vecMsgPools.m_Size;
  }
  this->m_vecMsgPools.m_Size = v5 + 1;
  v6 = &this->m_vecMsgPools.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pPool;
}


// GCSDK::CProtoBufMsgMemoryPoolMgr::DumpPoolInfo  (line 273, @0x0000000003235ea0, libserver.so)  // inlines: Count, GetAllocHitCount, GetAllocMissCount, GetAllocated, GetFree, String, operator int, ~CUtlString
// calls: Msg, GCSDK::CProtoBufMsgMemoryPoolBase::GetEstimatedSize, CFmtStrN<256, false>::CFmtStrN, V_pretifymem, CUtlString::Get, CUtlString::FreeMemoryBlock, __stack_chk_fail, _Unwind_Resume
// strings: "CProtoBufMsgMemoryPoolMgr:\n", "  PoolName                                   Allocated        Free   Est. Size    Hit Rat, "  ----------------------------------------- ----------- ----------- ----------- ---------, "%f%%", "%43s%12d%12d%12s%12s\n", "  --------------------------------------------------------------------------------------- (7 total)
void __fastcall GCSDK::CProtoBufMsgMemoryPoolMgr::DumpPoolInfo(GCSDK::CProtoBufMsgMemoryPoolMgr *const this)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  unsigned __int64 v4; // xmm0_8
  __int64 v5; // rbx
  float v6; // xmm0_4
  GCSDK::CProtoBufMsgMemoryPoolBase *v7; // rdi
  signed int EstimatedSize; // r13d
  GCSDK::CProtoBufMsgMemoryPoolBase *v9; // rsi
  volatile int m_value; // r15d
  const char *v11; // rax
  const char *v12; // rax
  signed int unTotalSize; // [rsp+10h] [rbp-170h]
  volatile int v14; // [rsp+14h] [rbp-16Ch]
  float flHitRate; // [rsp+18h] [rbp-168h]
  const char *flHitRatea; // [rsp+18h] [rbp-168h]
  CUtlString v17; // [rsp+20h] [rbp-160h] BYREF
  CFmtStrN<256,false> v18; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v19; // [rsp+148h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  *&v2 = Msg("CProtoBufMsgMemoryPoolMgr:\n").m128_u64[0];
  *&v3 = Msg("  PoolName                                   Allocated        Free   Est. Size    Hit Rate\n", v2).m128_u64[0];
  v4 = Msg("  ----------------------------------------- ----------- ----------- ----------- -----------\n", v3).m128_u64[0];
  if ( this->m_vecMsgPools.m_Size <= 0 )
  {
    unTotalSize = 0;
  }
  else
  {
    v5 = 0;
    unTotalSize = 0;
    do
    {
      v6 = 0.0;
      v7 = this->m_vecMsgPools.m_Memory.m_pMemory[v5];
      if ( *&v7->m_unAllocHitCounter.m_value != 0 )
        v6 = (v7->m_unAllocHitCounter.m_value / (v7->m_unAllocMissCounter.m_value + v7->m_unAllocHitCounter.m_value))
           * 100.0;
      flHitRate = v6;
      EstimatedSize = GCSDK::CProtoBufMsgMemoryPoolBase::GetEstimatedSize(v7);
      CFmtStrN<256,false>::CFmtStrN(&v18, "%f%%", flHitRate);
      flHitRatea = V_pretifymem(2, 1, EstimatedSize);
      v9 = this->m_vecMsgPools.m_Memory.m_pMemory[v5];
      m_value = v9->m_pTSQueueFreeObjects->m_Count.m_value;
      v14 = v9->m_unAllocated.m_value;
      (*(v9->_vptr_CProtoBufMsgMemoryPoolBase + 2))(&v17);
      v11 = CUtlString::Get(&v17);
      v4 = Msg("%43s%12d%12d%12s%12s\n", v11, v14, m_value, flHitRatea, v18.m_szBuf).m128_u64[0];
      if ( v17.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v17);
      unTotalSize += EstimatedSize;
      ++v5;
    }
    while ( this->m_vecMsgPools.m_Size > v5 );
  }
  Msg("  -----------------------------------------------------------------------------------------\n", *&v4);
  v12 = V_pretifymem(2, 1, unTotalSize);
  Msg("  Total: %s\n", v12);
}


// GCSDK::CProtoBufMsgBase::CProtoBufMsgBase  (line 303, @0x0000000003234e90, libserver.so)
// callers: CGCClientJobGrantSurveyPermission::BYieldingRunJob, CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CGCServerJobGetAdditionalItems::BYieldingRunJob, CGCClientJobTeamFanfare::BYieldingRunJob, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob, CGCClientJobSetLeaverDetected::BYieldingRunJob, CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob, CGCClientJobRealtimeStateStartStop::BYieldingRunJobFromMsg, CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg, CGCClientJobGCToServerPredictionResult::BYieldingRunJobFromMsg (33 total)
void __fastcall GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(GCSDK::CProtoBufMsgBase *const this)
{
  this->_vptr_CProtoBufMsgBase = off_47D0850;  // vptr: GCSDK::CProtoBufMsgBase
  this->m_pNetPacket = 0;
  this->m_pProtoBufHdr = 0;
  this->m_eMsg = 0;
}


// GCSDK::CProtoBufMsgBase::CProtoBufMsgBase  (line 314, @0x00000000032363c0, libserver.so)  // inlines: AllocProtoBufHdr
// calls: GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc
// callers: CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CGCServerJobGetAdditionalItems::BYieldingRunJob, CGCClientJobTeamFanfare::BYieldingRunJob, TournamentItemEvent, CDOTAGamerules::State_Enter_POST_GAME, GetFrostyTimeElapsedMsg, CDOTAInGamePredictionGameSystem::PostPredictionResults, RequestIngameEventDataFromGC, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob, CIngameEvent_FM2015::OnGameStarted, SendFrostyPointsMessageToGC, CDOTAInGamePredictionGameSystem::SelectInGamePredictions (41 total)
void __fastcall GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(GCSDK::CProtoBufMsgBase *const this, GCSDK::MsgType_t eMsg)
{
  GCSDK::CProtoBufMsgMemoryPoolMgr *v3; // rax

  this->m_eMsg = eMsg;
  this->_vptr_CProtoBufMsgBase = off_47D0850;  // vptr: GCSDK::CProtoBufMsgBase
  this->m_pNetPacket = 0;
  this->m_pProtoBufHdr = 0;
  v3 = GCSDK::GProtoBufMsgMemoryPoolMgr();
  this->m_pProtoBufHdr = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(&v3->m_PoolHeaders);
}


// GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase  (line 326, @0x0000000003236410, libserver.so)  // inlines: FreeProtoBufHdr, Release
// calls: GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolBase::Free
// callers: GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgTeamFanfare>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::~CProtoBufMsg, GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::~CProtoBufMsg, CGCClientJobGrantSurveyPermission::~CGCClientJobGrantSurveyPermission, CGCClientJobGrantSurveyPermission::BYieldingRunJob (140 total)
void __fastcall GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(GCSDK::CProtoBufMsgBase *const this)
{
  GCSDK::CProtoBufNetPacket *m_pNetPacket; // rdi
  google::protobuf::Message *m_pProtoBufHdr; // r12
  GCSDK::CProtoBufMsgMemoryPoolMgr *v4; // rax

  this->_vptr_CProtoBufMsgBase = off_47D0850;  // vptr: GCSDK::CProtoBufMsgBase
  m_pNetPacket = this->m_pNetPacket;
  if ( m_pNetPacket != 0 )
  {
    if ( _InterlockedSub(&m_pNetPacket->m_cRef, 1u) == 0 )
      (*(m_pNetPacket->_vptr_CRefCount + 2))(m_pNetPacket);
    this->m_pNetPacket = 0;
    goto LABEL_5;
  }
  m_pProtoBufHdr = this->m_pProtoBufHdr;
  if ( m_pProtoBufHdr == 0 )
  {
LABEL_5:
    this->m_pProtoBufHdr = 0;
    return;
  }
  v4 = GCSDK::GProtoBufMsgMemoryPoolMgr();
  GCSDK::CProtoBufMsgMemoryPoolBase::Free(&v4->m_PoolHeaders, m_pProtoBufHdr);
  this->m_pProtoBufHdr = 0;
}


// GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase  (line 326, @0x0000000003236490, libserver.so)
// calls: GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
void __fastcall GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(GCSDK::CProtoBufMsgBase *const this)
{
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgBase::InitFromPacketInternal  (line 347, @0x0000000003234ec0, libserver.so)  // inlines: Add, AddRef, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetFixedHeader, GetMsgBody, GetProtoHeader, GetTimebaseRegister, InTargetThread, IsEnabled, IsValid, PLAT_CPU_TIME, ThreadInterlockedIncrement, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, GCSDK::CProtoBufNetPacket::GetMsgBody, google::protobuf::MessageLite::ParseFromArray(void const*,int), CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// callers: CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob, CGCClientJobRealtimeStateStartStop::BYieldingRunJobFromMsg, CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg, CGCClientJobGCToServerPredictionResult::BYieldingRunJobFromMsg, CGCClientJobGCToServerConsoleCommand::BYieldingRunJobFromMsg, CGCItemAcknowledged::BYieldingRunGCJob, CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg, CGCClientJobServerUpdateVersion::BYieldingRunJobFromMsg, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, CGCClientJobLANServerRelayConnect::BYieldingRunJobFromMsg (16 total)
// strings: "CProtoBufMsg::InitFromPacket( IMsgNetPacket )", "Networking"
bool __fastcall GCSDK::CProtoBufMsgBase::InitFromPacketInternal(
        GCSDK::CProtoBufMsgBase *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  int m_enabled; // edi
  bool v5; // r14
  GCSDK::MsgType_t *v6; // rax
  GCSDK::CProtoBufNetPacket *m_pNetPacket; // rdi
  char m_bIsValid; // r13
  unsigned __int64 v10; // r12
  ThreadId_t v11; // r14
  uint64 v12; // rcx
  google::protobuf::MessageLite *v13; // rax
  unsigned __int64 v14; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-48h]
  uint32 cubData; // [rsp+14h] [rbp-3Ch] BYREF
  const uint8 *pubData; // [rsp+18h] [rbp-38h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v14 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::InitFromPacket( IMsgNetPacket )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::InitFromPacket( IMsgNetPacket )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v14 + __rdtsc();
  }
  (*(pNetPacket->_vptr_CRefCount + 3))(pNetPacket);
  this->m_pNetPacket = pNetPacket;
  _InterlockedAdd(&pNetPacket->m_cRef, 1u);
  v6 = (*(this->m_pNetPacket->_vptr_CRefCount + 5))(this->m_pNetPacket);
  m_pNetPacket = this->m_pNetPacket;
  this->m_eMsg = *v6;
  this->m_pProtoBufHdr = m_pNetPacket->m_pHeader;
  m_bIsValid = m_pNetPacket->m_bIsValid;
  if ( m_bIsValid != 0 )
  {
    m_bIsValid = GCSDK::CProtoBufNetPacket::GetMsgBody(m_pNetPacket, &pubData, &cubData);
    if ( m_bIsValid != 0 )
    {
      v13 = (*(this->_vptr_CProtoBufMsgBase + 2))(this);
      m_bIsValid = google::protobuf::MessageLite::ParseFromArray(v13, pubData, cubData);
    }
  }
  else
  {
    pubData = 0;
    cubData = 0;
  }
  if ( v5 )
  {
    v10 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v11 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v11 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v12 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v12 - v10 + __rdtsc();
  }
  return m_bIsValid;
}


// GCSDK::CProtoBufMsgBase::InitFromPacketSafe  (line 383, @0x0000000003235170, libserver.so)  // inlines: Add, AddRef, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetFixedHeader, GetMsgBody, GetProtoHeader, GetTimebaseRegister, InTargetThread, IsEnabled, IsValid, PLAT_CPU_TIME, ThreadInterlockedIncrement, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), GCSDK::CProtoBufNetPacket::GetMsgBody, google::protobuf::MessageLite::ParseFromArray(void const*,int), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// callers: GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::BYieldingRunGCJob, GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::BYieldingRunGCJob, GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::BYieldingRunGCJob, GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::BYieldingRunGCJob, GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::BYieldingRunGCJob, GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::BYieldingRunGCJob, GCSDK::CGCClientProtoJob<CMsgGCClientPing>::BYieldingRunGCJob, GCSDK::CGCClient::YldSendMessageAndGetReplyEx, GCSDK::CJob::BYieldingWaitForMsg
// strings: "CProtoBufMsg::InitFromPacket( IMsgNetPacket )", "Networking"
bool __fastcall GCSDK::CProtoBufMsgBase::InitFromPacketSafe(
        GCSDK::CProtoBufMsgBase *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  int m_enabled; // r9d
  bool v5; // r13
  char m_bIsValid; // r12
  unsigned __int64 v8; // r13
  ThreadId_t v9; // r14
  uint64 v10; // rcx
  unsigned __int64 v11; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  GCSDK::MsgType_t *v14; // rax
  GCSDK::CProtoBufNetPacket *m_pNetPacket; // rdi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v17; // rax
  google::protobuf::MessageLite *v18; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-48h]
  uint32 cubData; // [rsp+14h] [rbp-3Ch] BYREF
  const uint8 *pubData; // [rsp+18h] [rbp-38h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v11 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::InitFromPacket( IMsgNetPacket )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::InitFromPacket( IMsgNetPacket )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v17 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v17->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v11 + __rdtsc();
  }
  if ( (*(pNetPacket->_vptr_CRefCount + 3))(pNetPacket) != 3 )
    goto LABEL_3;
  this->m_pNetPacket = pNetPacket;
  _InterlockedAdd(&pNetPacket->m_cRef, 1u);
  v14 = (*(this->m_pNetPacket->_vptr_CRefCount + 5))(this->m_pNetPacket);
  m_pNetPacket = this->m_pNetPacket;
  this->m_eMsg = *v14;
  this->m_pProtoBufHdr = m_pNetPacket->m_pHeader;
  m_bIsValid = m_pNetPacket->m_bIsValid;
  if ( m_bIsValid != 0 )
  {
    if ( !GCSDK::CProtoBufNetPacket::GetMsgBody(m_pNetPacket, &pubData, &cubData) )
    {
LABEL_3:
      m_bIsValid = 0;
      goto LABEL_4;
    }
    v18 = (*(this->_vptr_CProtoBufMsgBase + 2))(this);
    m_bIsValid = google::protobuf::MessageLite::ParseFromArray(v18, pubData, cubData);
  }
  else
  {
    pubData = 0;
    cubData = 0;
  }
LABEL_4:
  if ( v5 )
  {
    v8 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v9 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v9 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v10 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v10 - v8 + __rdtsc();
  }
  return m_bIsValid;
}


// GCSDK::CProtoBufMsgBase::BAsyncSend  (line 421, @0x0000000003235740, libserver.so)  // inlines: GetEMsg
// calls: GCSDK::CProtoBufMsgBase::BAsyncSendProto
// callers: GCSDK::CGCPingJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCToClientPollConvarJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::BSendMessage, GCSDK::CGCClient::SendHello, GCSDK::CGCClient::YldSendMessageAndGetReplyEx, GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg
bool __fastcall GCSDK::CProtoBufMsgBase::BAsyncSend(
        const GCSDK::CProtoBufMsgBase *const this,
        GCSDK::CProtoBufMsgBase::IProtoBufSendHandler *const sender)
{
  const google::protobuf::Message *v4; // rax

  v4 = (*(this->_vptr_CProtoBufMsgBase + 2))(this);
  return GCSDK::CProtoBufMsgBase::BAsyncSendProto(sender, this->m_eMsg & 0x7FFFFFFF, this->m_pProtoBufHdr, v4);
}


// GCSDK::CProtoBufMsgBase::BAsyncSendProto  (line 430, @0x00000000032354b0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, FreeMessageMemory, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::AllocateMessageMemory, CThreadSafeMultiMemoryPool::Free, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// callers: GCSDK::CProtoBufMsgBase::BAsyncSend
// strings: "CProtoBufMsg::BAsyncSendProto", "Networking"
bool __fastcall GCSDK::CProtoBufMsgBase::BAsyncSendProto(
        GCSDK::CProtoBufMsgBase::IProtoBufSendHandler *const sender,
        GCSDK::MsgType_t eMsgType,
        const CMsgProtoBufHeader *const hdr,
        const google::protobuf::Message *const proto)
{
  int m_enabled; // r11d
  uint32 v8; // eax
  __int64 v9; // r15
  uint8 *MessageMemory; // r13
  char v11; // r12
  unsigned __int64 v13; // r13
  ThreadId_t v14; // r14
  uint64 v15; // rcx
  unsigned __int64 v16; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v20; // rax
  ThreadId_t m_TargetThreadId; // [rsp+0h] [rbp-50h]
  bool VProf_432; // [rsp+Bh] [rbp-45h]
  uint32 cubTotalSize[13]; // [rsp+1Ch] [rbp-34h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_432 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v16 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::BAsyncSendProto" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::BAsyncSendProto",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v20 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v20->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v16 + __rdtsc();
  }
  v8 = (*(*proto + 72LL))(proto);
  v9 = v8;
  cubTotalSize[0] = 0;
  MessageMemory = GCSDK::CProtoBufMsgBase::AllocateMessageMemory(eMsgType, hdr, v8, cubTotalSize);
  (*(*proto + 88LL))(proto, &MessageMemory[cubTotalSize[0] - v9]);
  v11 = (*sender->_vptr_IProtoBufSendHandler)(sender, eMsgType, MessageMemory, cubTotalSize[0]);
  CThreadSafeMultiMemoryPool::Free(&GCSDK::g_MemPoolMsg, MessageMemory);
  if ( VProf_432 )
  {
    v13 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v14 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v14 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v15 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v15 - v13 + __rdtsc();
  }
  return v11;
}


// GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody  (line 451, @0x0000000003235a00, libserver.so)  // inlines: GetEMsg
// calls: GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody
bool __fastcall GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody(
        const GCSDK::CProtoBufMsgBase *const this,
        GCSDK::CProtoBufMsgBase::IProtoBufSendHandler *const pSender,
        const void *pubBody,
        uint32 cubBody)
{
  return GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody(
           pSender,
           this->m_eMsg & 0x7FFFFFFF,
           this->m_pProtoBufHdr,
           pubBody,
           cubBody);
}


// GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody  (line 459, @0x0000000003235770, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, FreeMessageMemory, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, V_memcpy, memcpy, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::AllocateMessageMemory, memcpy, CThreadSafeMultiMemoryPool::Free, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// callers: GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody
// strings: "CProtoBufMsg::BAsyncSendWithPreSerializedBody", "Networking"
bool __fastcall GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody(
        GCSDK::CProtoBufMsgBase::IProtoBufSendHandler *const sender,
        GCSDK::MsgType_t eMsgType,
        const CMsgProtoBufHeader *const hdr,
        const void *pubBody,
        uint32 cubBody)
{
  int m_enabled; // eax
  uint8 *MessageMemory; // r12
  char v11; // r13
  unsigned __int64 v13; // r12
  ThreadId_t v14; // r14
  uint64 v15; // rcx
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v19; // rax
  ThreadId_t m_TargetThreadId; // [rsp+0h] [rbp-60h]
  unsigned __int64 v21; // [rsp+8h] [rbp-58h]
  bool VProf_461; // [rsp+1Fh] [rbp-41h]
  uint32 cubTotalSize[13]; // [rsp+2Ch] [rbp-34h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_461 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v21 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::BAsyncSendWithPreSerializedBody" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::BAsyncSendWithPreSerializedBody",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v19 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v19->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v21 + __rdtsc();
  }
  cubTotalSize[0] = 0;
  MessageMemory = GCSDK::CProtoBufMsgBase::AllocateMessageMemory(eMsgType, hdr, cubBody, cubTotalSize);
  memcpy(&MessageMemory[cubTotalSize[0] - cubBody], pubBody, cubBody);
  v11 = (*sender->_vptr_IProtoBufSendHandler)(sender, eMsgType, MessageMemory, cubTotalSize[0]);
  CThreadSafeMultiMemoryPool::Free(&GCSDK::g_MemPoolMsg, MessageMemory);
  if ( VProf_461 )
  {
    v13 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v14 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v14 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v15 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v15 - v13 + __rdtsc();
  }
  return v11;
}


// GCSDK::CProtoBufMsgBase::AllocateMessageMemory  (line 481, @0x0000000003235430, libserver.so)  // inlines: ProtoBufMsgHeader_t, V_memcpy, memcpy
// calls: CThreadSafeMultiMemoryPool::Alloc
// callers: GCSDK::CProtoBufMsgBase::BAsyncSendProto, GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody
uint8 *__fastcall GCSDK::CProtoBufMsgBase::AllocateMessageMemory(
        GCSDK::MsgType_t eMsgType,
        const CMsgProtoBufHeader *const hdr,
        uint32 cubBodySize,
        uint32 *pCubTotalSizeOut)
{
  __int64 v6; // r13
  __int64 v8; // rax
  uint32 v9; // r15d
  __int64 v10; // r13
  uint8 *v11; // rax
  uint8 *v12; // r12

  v6 = eMsgType | 0x80000000;
  v8 = (*(*hdr + 72LL))(hdr);
  v9 = v8 + cubBodySize + 8;
  v10 = (v8 << 32) | v6;
  v11 = CThreadSafeMultiMemoryPool::Alloc(&GCSDK::g_MemPoolMsg, v9);
  *v11 = v10;
  v12 = v11;
  (*(*hdr + 88LL))(hdr, v11 + 1);
  if ( pCubTotalSizeOut != 0 )
    *pCubTotalSizeOut = v9;
  return v12;
}


// GCSDK::CProtoBufMsgBase::FreeMessageMemory  (line 510, @0x0000000003235a30, libserver.so)
// calls: CThreadSafeMultiMemoryPool::Free
void __fastcall GCSDK::CProtoBufMsgBase::FreeMessageMemory(uint8 *pMemory)
{
  CThreadSafeMultiMemoryPool::Free(&GCSDK::g_MemPoolMsg, pMemory);
}


// GCSDK::EncodeProtobufSHA1Digest  (line 515, @0x0000000003235a50, libserver.so)  // inlines: set_block1, set_block2, set_block3, set_has_block1, set_has_block2, set_has_block3
void __fastcall GCSDK::EncodeProtobufSHA1Digest(unsigned __int8 (*const digest)[20], CMsgSHA1Digest *const msgDigest)
{
  int v2; // eax
  __int64 v3; // rdx

  v2 = *(msgDigest + 4);
  *(msgDigest + 3) = *digest;
  *(msgDigest + 4) = v2 | 1;
  v3 = *&(*digest)[8];
  *(msgDigest + 4) = v2 | 3;
  *(msgDigest + 4) = v3;
  LODWORD(v3) = *&(*digest)[16];
  *(msgDigest + 4) = v2 | 7;
  *(msgDigest + 10) = v3;
}


// GCSDK::DecodeProtobufSHA1Digest  (line 535, @0x0000000003235a90, libserver.so)
void __fastcall GCSDK::DecodeProtobufSHA1Digest(const CMsgSHA1Digest *const msgDigest, SHADigest_t *const digest)
{
  *digest = *(msgDigest + 3);
  *&(*digest)[8] = *(msgDigest + 4);
  *&(*digest)[16] = *(msgDigest + 10);
}


