// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_gameinterface.cpp:37
class CGCClientJobGetHLTVChatBanStatus : public CGCClientJob {
public:

private:

	int m_nUserID;  // +0x144
	CGCClientJobGetHLTVChatBanStatus(CGCClientJobGetHLTVChatBanStatus &);
	CGCClientJobGetHLTVChatBanStatus(CGCClientJobGetHLTVChatBanStatus &);
	CGCClientJobGetHLTVChatBanStatus(CGCClient *, int, const CSteamID &);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCClientJobGetHLTVChatBanStatus();

	// vtable[2] BYieldingRunJob
	// sizeof = 328
} __attribute__((__packed__));

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSource2GameClients::ClientCanPause  (line 31, @0x00000000024c5040, libserver.so)
bool __fastcall CSource2GameClients::ClientCanPause(CSource2GameClients *const this, CEntityIndex nEntityIndex)
{
  return 0;
}


// CGCClientJobGetHLTVChatBanStatus::~CGCClientJobGetHLTVChatBanStatus  (line 37, @0x0000000002555c90, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobGetHLTVChatBanStatus::~CGCClientJobGetHLTVChatBanStatus(
        CGCClientJobGetHLTVChatBanStatus *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobGetHLTVChatBanStatus::~CGCClientJobGetHLTVChatBanStatus  (line 37, @0x0000000002555cb0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobGetHLTVChatBanStatus
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobGetHLTVChatBanStatus::~CGCClientJobGetHLTVChatBanStatus(
        CGCClientJobGetHLTVChatBanStatus *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob  (line 44, @0x0000000002565030, libserver.so)  // inlines: Add, AllocProto, BYldSendMessageAndGetReply, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufMsg, CVProfScope, EnterScope, ExitScope, FreeProto, Get, GetAccountID, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, Unlock, set_account_id, set_has_account_id, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, operator new, CMsgGCBanStatusRequest::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CGCClient::YldSendMessageAndGetReplyEx (26 total)
// strings: "CGCClientJobGetHLTVClientBanStatus failed to get ban status for %s Result = %u\n", "CGCClientJobGetHLTVClientBanStatus failed to get ban status response for %s\n", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool, GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool
bool __fastcall CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob(
        CGCClientJobGetHLTVChatBanStatus *const this,
        void *pvStartParam)
{
  int m_enabled; // r11d
  bool v4; // r15
  unsigned __int64 v5; // r14
  uint64 m_numTimeBaseTicks; // rcx
  const google::protobuf::Descriptor *v7; // rax
  const google::protobuf::Descriptor *v8; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v10; // rax
  CMsgGCBanStatusRequest *m_pProtoBufBody; // rax
  int v12; // edx
  int v13; // r14d
  const char *v14; // rax
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse> *v16; // r15
  const google::protobuf::Descriptor *v17; // rax
  const google::protobuf::Descriptor *v18; // rax
  uint32 v19; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v20; // rax
  unsigned __int64 v21; // r14
  ThreadId_t m_TargetThreadId; // r15
  uint64 v23; // rcx
  const char *v24; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v26; // rax
  CVProfNode *m_pParent; // rax
  uint32 unTargetHigh; // [rsp+4h] [rbp-9Ch]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPool; // [rsp+8h] [rbp-98h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest> *pPoola; // [rsp+8h] [rbp-98h]
  uint32 pPoolb; // [rsp+8h] [rbp-98h]
  GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest> msg; // [rsp+10h] [rbp-90h] BYREF
  GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse> msgResponse; // [rsp+40h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1BB5u);
  msg._vptr_CProtoBufMsgBase = &off_40F9650;
  msg.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v5 = __rdtsc();
    pPool = g_VProfCurrentProfile.m_TargetThreadId;
    if ( pPool == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v26 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v26->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v5 + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_bRegisteredWithMemoryPoolMgr )
    {
      pPoola = operator new(0x28u);
      v7 = CMsgGCBanStatusRequest::descriptor();
      unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                       (v7->options_ + 8),
                       msgpool_hard_limit.number_,
                       msgpool_hard_limit.default_value_);
      v8 = CMsgGCBanStatusRequest::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v8->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(pPoola, Int32, unTargetHigh);
      pPoola->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDB50;
      GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool = pPoola;
      v10 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v10, pPoola);
      GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool);
  if ( v4 )
  {
    v21 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      if ( m_TargetThreadId == ThreadGetCurrentId() )
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
    v23 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v23 - v21 + __rdtsc();
  }
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgResponse);
  msgResponse.m_pProtoBufBody = 0;
  msgResponse._vptr_CProtoBufMsgBase = &off_40F9690;
  if ( !GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      v16 = operator new(0x28u);
      v17 = CMsgGCBanStatusResponse::descriptor();
      pPoolb = google::protobuf::internal::ExtensionSet::GetInt32(
                 (v17->options_ + 8),
                 msgpool_hard_limit.number_,
                 msgpool_hard_limit.default_value_);
      v18 = CMsgGCBanStatusResponse::descriptor();
      v19 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v18->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v16, v19, pPoolb);
      v16->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDB90;
      GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool = v16;
      v20 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v20, v16);
      GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msgResponse.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool);
  m_pProtoBufBody = msg.m_pProtoBufBody;
  v12 = *(&this->m_cHeartbeatsBeforeTimeout + 1);
  *(msg.m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 6) = v12;
  if ( GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
         this->m_pGCClient,
         &msg,
         &msgResponse,
         0x1BB6u,
         GCSDK::EExpectedReply::kExpectedReply_Optional,
         0) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
  {
    v24 = CSteamID::Render((&this->m_cHeartbeatsBeforeTimeout + 1));
    Msg("CGCClientJobGetHLTVClientBanStatus failed to get ban status response for %s\n", v24);
  }
  else
  {
    v13 = *(msgResponse.m_pProtoBufBody + 6);
    if ( v13 == 1 )
    {
      (*(*engine + 344LL))(
        engine,
        HIDWORD(this->m_SteamID.m_steamid.m_unAll64Bits),
        *(msgResponse.m_pProtoBufBody + 29));
    }
    else
    {
      v14 = CSteamID::Render((&this->m_cHeartbeatsBeforeTimeout + 1));
      Msg("CGCClientJobGetHLTVClientBanStatus failed to get ban status for %s Result = %u\n", v14, v13);
    }
  }
  msgResponse._vptr_CProtoBufMsgBase = &off_40F9690;
  if ( msgResponse.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool,
      msgResponse.m_pProtoBufBody);
    msgResponse.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgResponse);
  msg._vptr_CProtoBufMsgBase = &off_40F9650;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CSource2GameClients::HLTVClientFullyConnect  (line 74, @0x00000000024c5050, libserver.so)  // inlines: CGCClientJob, CGCClientJobGetHLTVChatBanStatus, GetEAccountType, IsValid
// calls: GCClientSystem, operator new, GCSDK::CJob::CJob, GCSDK::CJob::StartJob, operator delete, _Unwind_Resume
void __fastcall CSource2GameClients::HLTVClientFullyConnect(
        CSource2GameClients *const this,
        int nUserID,
        const CSteamID *const steamID)
{
  unsigned __int8 v4; // al
  char v5; // dl
  unsigned __int8 v6; // al
  CGCClientSystem *v8; // rax
  char *v9; // r14
  CGCClientSystem *v10; // r15
  char *v11; // r12
  CSteamID::SteamID_t v12; // rax

  v4 = BYTE6(steamID->m_steamid.m_unAll64Bits);
  v5 = v4 & 0xF0;
  if ( (v4 & 0xF0) != 0 )
  {
    v6 = v4 >> 4;
    if ( v6 <= 0xAu && (HIBYTE(steamID->m_steamid.m_unAll64Bits) - 1) <= 3u )
    {
      if ( v5 == 16 )
      {
        if ( steamID->m_steamid.m_comp != 0
          && (WORD2(steamID->m_steamid.m_unAll64Bits) | ((BYTE6(steamID->m_steamid.m_unAll64Bits) & 0xF) << 16)) <= 4u )
        {
          goto LABEL_7;
        }
      }
      else
      {
        if ( v5 != 112 )
        {
          if ( v5 == 48 && steamID->m_steamid.m_comp == 0 )
            return;
LABEL_7:
          if ( v6 == 1 )
          {
            v8 = GCClientSystem();
            v9 = v8 + 24;
            v10 = v8;
            v11 = operator new(0x148u);
            GCSDK::CJob::CJob(v11, (v10 + 72));
            *(v11 + 38) = v9;
            *(v11 + 78) = 4;
            *v11 = off_40F95F0;
            v12.m_comp = steamID->m_steamid;
            *(v11 + 81) = nUserID;
            *(v11 + 316) = v12;
            GCSDK::CJob::StartJob(v11, 0);
          }
          return;
        }
        if ( steamID->m_steamid.m_comp != 0
          && (WORD2(steamID->m_steamid.m_unAll64Bits) | ((BYTE6(steamID->m_steamid.m_unAll64Bits) & 0xF) << 16)) == 0 )
        {
          goto LABEL_7;
        }
      }
    }
  }
}


// CSource2GameClients::CanHLTVClientConnect  (line 84, @0x00000000024c51c0, libserver.so)  // inlines: GetLobby
// calls: GDOTAGCClientSystem
bool __fastcall CSource2GameClients::CanHLTVClientConnect(
        CSource2GameClients *const this,
        int nUserID,
        const CSteamID *const steamID,
        ENetworkDisconnectionReason *pReason)
{
  __int64 v5; // rax
  bool result; // al

  v5 = *(GDOTAGCClientSystem() + 260);
  if ( v5 != 0 )
  {
    result = *(v5 + 159);
    if ( result )
      return result;
    if ( pReason != 0 )
    {
      *pReason = ENetworkDisconnectionReason::NETWORK_DISCONNECT_NOSPECTATORS;
      return result;
    }
  }
  return 1;
}


