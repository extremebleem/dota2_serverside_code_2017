
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CGCClientJob::~CGCClientJob  (line 34, @0x000000000249a230, libserver.so)
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientJob::~CGCClientJob(GCSDK::CGCClientJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientJob::~CGCClientJob  (line 34, @0x000000000249a250, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientJob::~CGCClientJob(GCSDK::CGCClientJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientJob::BYieldingRunGCJob  (line 41, @0x0000000002496db0, libserver.so)
bool __fastcall GCSDK::CGCClientJob::BYieldingRunGCJob(
        GCSDK::CGCClientJob *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  return 0;
}


// GCSDK::CGCClientJob::BYieldingRunGCJob  (line 42, @0x0000000002496dc0, libserver.so)
bool __fastcall GCSDK::CGCClientJob::BYieldingRunGCJob(GCSDK::CGCClientJob *const this)
{
  return 0;
}


// GCSDK::CGCClientJob::CHeartbeatsBeforeTimeout  (line 65, @0x0000000002496dd0, libserver.so)
uint32 __fastcall GCSDK::CGCClientJob::CHeartbeatsBeforeTimeout(GCSDK::CGCClientJob *const this)
{
  return this->m_cHeartbeatsBeforeTimeout;
}


// GCSDK::CGCClientJob::BYieldingRunJobFromMsg  (line 72, @0x00000000024997c0, libserver.so)
// calls: GCSDK::CJob::BYieldingWaitOneFrame
bool __fastcall GCSDK::CGCClientJob::BYieldingRunJobFromMsg(
        GCSDK::CGCClientJob *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  if ( this->m_pGCClient != 0 )
    return (*(this->_vptr_CJob + 5))(this, pNetPacket);
  GCSDK::CJob::BYieldingWaitOneFrame(this);
  return 0;
}


// GCSDK::CGCClientJob::BYieldingRunJob  (line 84, @0x00000000024997f0, libserver.so)
// calls: GCSDK::CJob::BYieldingWaitOneFrame
bool __fastcall GCSDK::CGCClientJob::BYieldingRunJob(GCSDK::CGCClientJob *const this, void *pvStartParam)
{
  if ( this->m_pGCClient != 0 )
    return (*(this->_vptr_CJob + 6))(this, pvStartParam);
  GCSDK::CJob::BYieldingWaitOneFrame(this);
  return 0;
}


// GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::~GCClientJobLambda  (line 122, @0x00000000025c3e90, libserver.so)  // inlines: ~<lambda>, ~CGCClientJob
// calls: CMsgServerToGCPostMatchTip::~CMsgServerToGCPostMatchTip, GCSDK::CJob::~CJob
void __fastcall GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int,int)::{lambda(void)#1}>::~GCClientJobLambda(
        GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int,int)::__lambda11> *const this)
{
  CMsgServerToGCPostMatchTip *v2; // rdi

  v2 = (this + 320);
  *(v2 - 40) = &off_40FF050;
  CMsgServerToGCPostMatchTip::~CMsgServerToGCPostMatchTip(v2);
  *this = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::~GCClientJobLambda  (line 122, @0x00000000025c3ed0, libserver.so)  // inlines: ~<lambda>, ~CGCClientJob, ~GCClientJobLambda
// calls: CMsgServerToGCPostMatchTip::~CMsgServerToGCPostMatchTip, GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int,int)::{lambda(void)#1}>::~GCClientJobLambda(
        GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int,int)::__lambda11> *const this)
{
  CMsgServerToGCPostMatchTip *v2; // rdi

  v2 = (this + 320);
  *(v2 - 40) = &off_40FF050;
  CMsgServerToGCPostMatchTip::~CMsgServerToGCPostMatchTip(v2);
  *this = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>::~GCClientJobLambda  (line 122, @0x0000000002990720, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats(void)::{lambda(void)#1}>::~GCClientJobLambda(
        GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>::~GCClientJobLambda  (line 122, @0x0000000002990740, libserver.so)  // inlines: ~CGCClientJob, ~GCClientJobLambda
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats(void)::{lambda(void)#1}>::~GCClientJobLambda(
        GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob  (line 126, @0x00000000025a05a0, libserver.so)  // inlines: AllocProto, BYldSendMessageAndGetReply, CProtoBufMsg, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInstance, IsEnabled, Lock, Unlock, operator(), ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgServerToGCPostMatchTip::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope (25 total)
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool, GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool
bool __fastcall GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int,int)::{lambda(void)#1}>::BYieldingRunJob(
        GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int,int)::__lambda11> *const this,
        void *pvStartParam)
{
  int m_enabled; // r9d
  bool v4; // r14
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip> *v5; // r15
  const google::protobuf::Descriptor *v6; // rax
  const google::protobuf::Descriptor *v7; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse> *v10; // r15
  const google::protobuf::Descriptor *v11; // rax
  const google::protobuf::Descriptor *v12; // rax
  uint32 v13; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v14; // rax
  google::protobuf::Message *v15; // r12
  CEntityInstance *v16; // rax
  CIngameEvent_WM2016 *v17; // r13
  EEvent v18; // r12d
  CDOTAEventSchema *v19; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  google::protobuf::Message *v21; // rsi
  uint32 unTargetHigh; // [rsp+Ch] [rbp-94h]
  uint32 unTargetHigha; // [rsp+Ch] [rbp-94h]
  GCSDK::CProtoBufMsgBase msgOut; // [rsp+10h] [rbp-90h] BYREF
  CMsgServerToGCPostMatchTip *v26; // [rsp+30h] [rbp-70h]
  GCSDK::CProtoBufMsgBase pMsgIn; // [rsp+40h] [rbp-60h] BYREF
  google::protobuf::Message *pObject; // [rsp+60h] [rbp-40h]

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgOut, 0x1FA1u);
  v26 = 0;
  msgOut._vptr_CProtoBufMsgBase = &off_4108C50;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_bRegisteredWithMemoryPoolMgr )
    {
      v5 = operator new(0x28u);
      v6 = CMsgServerToGCPostMatchTip::descriptor();
      unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                       (v6->options_ + 8),
                       msgpool_hard_limit.number_,
                       msgpool_hard_limit.default_value_);
      v7 = CMsgServerToGCPostMatchTip::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v7->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v5, Int32, unTargetHigh);
      v5->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110AD0;
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool = v5;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v5);
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  v26 = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool);
  if ( v4 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&pMsgIn);
  pObject = 0;
  pMsgIn._vptr_CProtoBufMsgBase = &off_4108C90;
  if ( !GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      v10 = operator new(0x28u);
      v11 = CMsgServerToGCPostMatchTipResponse::descriptor();
      unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v11->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v12 = CMsgServerToGCPostMatchTipResponse::descriptor();
      v13 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v12->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v10, v13, unTargetHigha);
      v10->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110B10;
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool = v10;
      v14 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v14, v10);
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  pObject = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool);
  CMsgServerToGCPostMatchTip::CopyFrom(v26, (this + 320));
  if ( GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
         GCSDK::g_pJobCur[1]._vptr_CJob,
         &msgOut,
         &pMsgIn,
         0x1FA2u,
         GCSDK::EExpectedReply::kExpectedReply_Optional,
         0) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
  {
    pMsgIn._vptr_CProtoBufMsgBase = &off_4108C90;
    if ( pObject != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool,
        pObject);
      pObject = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&pMsgIn);
    v21 = v26;
    msgOut._vptr_CProtoBufMsgBase = &off_4108C50;
    if ( v26 != 0 )
      goto LABEL_21;
    goto LABEL_22;
  }
  v15 = pObject;
  if ( *(pObject + 10) != 0 || (v16 = CEntityHandle::operator CEntityInstance *(this + 92), v17 = v16, v16 == 0) )
  {
    pMsgIn._vptr_CProtoBufMsgBase = &off_4108C90;
LABEL_19:
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool, v15);
    pObject = 0;
    goto LABEL_20;
  }
  v18 = (*(v16->_vptr_IHandleEntity + 207))(v16);
  v19 = CDOTAEventSchema::Get();
  EventDefinition = CDOTAEventSchema::GetEventDefinition(v19, v18);
  if ( EventDefinition != 0 )
    CIngameEvent_WM2016::TipValidated(v17, *(pObject + 8), *(pObject + 9), *(EventDefinition + 105));
  v15 = pObject;
  pMsgIn._vptr_CProtoBufMsgBase = &off_4108C90;
  if ( pObject != 0 )
    goto LABEL_19;
LABEL_20:
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&pMsgIn);
  v21 = v26;
  msgOut._vptr_CProtoBufMsgBase = &off_4108C50;
  if ( v26 != 0 )
  {
LABEL_21:
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool, v21);
    v26 = 0;
  }
LABEL_22:
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgOut);
  return 1;
}


// GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>::BYieldingRunJob  (line 126, @0x000000000299d610, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTAFantasyPlayerStats>::TypeHandler>, BYieldingCall, CMsgIDLink, CMsgIDLinkGenericClientToGCResponse, CMsgIDLinkResponse, GetLobby, New, YieldingCallEx, add_stats, operator(), ~CMsgIDLink, ~CMsgIDLinkGenericClientToGCResponse, ~CMsgIDLinkResponse
// calls: CMsgDOTAFantasyLivePlayerStats::CMsgDOTAFantasyLivePlayerStats, CDOTA_PlayerResource::IsValidTeamPlayer, operator new, CMsgDOTAFantasyPlayerStats::CMsgDOTAFantasyPlayerStats, CDOTAGCServerSystem::PopulateFantasyStats, CMsgGenericResult::CMsgGenericResult, GCSDK::YldSendSendMessageGenericClientToGCEx, Warning, CMsgGenericResult::~CMsgGenericResult, CMsgDOTAFantasyLivePlayerStats::~CMsgDOTAFantasyLivePlayerStats, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), _Unwind_Resume (13 total)
// strings: "Error sending CMsgDOTAFantasyLivePlayerStats\n"
bool __fastcall GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats(void)::{lambda(void)#1}>::BYieldingRunJob(
        GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11> *const this,
        void *pvStartParam)
{
  const CDOTALobby *v3; // r14
  int v4; // ebx
  __int64 current_size; // rax
  CMsgDOTAFantasyPlayerStats *v6; // r13
  __int64 v7; // rax
  CMsgDOTAFantasyPlayerStats *v8; // rsi
  _BYTE v10[32]; // [rsp+10h] [rbp-90h] BYREF
  int v11; // [rsp+30h] [rbp-70h]
  _QWORD v12[3]; // [rsp+40h] [rbp-60h] BYREF
  google::protobuf::internal::RepeatedPtrFieldBase v13; // [rsp+58h] [rbp-48h] BYREF

  v3 = *(this->m_lambda.__this + 260);
  if ( v3 != 0 && g_pDOTAPlayerResource != 0 )
  {
    v4 = 0;
    CMsgDOTAFantasyLivePlayerStats::CMsgDOTAFantasyLivePlayerStats(v12);
    v12[0] = &off_4304DD0;
    do
    {
      while ( !CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v4) )
      {
        if ( ++v4 == 24 )
          goto LABEL_11;
      }
      current_size = v13.current_size_;
      if ( v13.current_size_ < v13.allocated_size_ )
      {
        ++v13.current_size_;
        v8 = v13.elements_[current_size];
      }
      else
      {
        if ( v13.allocated_size_ == v13.total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v13, v13.allocated_size_ + 1);
        v6 = operator new(0x70u);
        CMsgDOTAFantasyPlayerStats::CMsgDOTAFantasyPlayerStats(v6);
        v7 = v13.current_size_;
        v8 = v6;
        ++v13.allocated_size_;
        ++v13.current_size_;
        v13.elements_[v7] = v6;
      }
      CDOTAGCServerSystem::PopulateFantasyStats(this->m_lambda.__this, v8, v4++, v3, 0);
    }
    while ( v4 != 24 );
LABEL_11:
    CMsgGenericResult::CMsgGenericResult(v10);
    if ( GCSDK::YldSendSendMessageGenericClientToGCEx(
           v12,
           0x1C8Cu,
           v10,
           0xA13u,
           GCSDK::EExpectedReply::kExpectedReply_Optional) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK
      || v11 != 1 )
    {
      Warning("Error sending CMsgDOTAFantasyLivePlayerStats\n");
    }
    CMsgGenericResult::~CMsgGenericResult(v10);
    v12[0] = &off_4304C50;
    CMsgDOTAFantasyLivePlayerStats::~CMsgDOTAFantasyLivePlayerStats(v12);
  }
  return 1;
}


// GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::~CGCClientProtoJob  (line 164, @0x0000000003217860, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOSingleObject> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::~CGCClientProtoJob  (line 164, @0x0000000003217880, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOSingleObject> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::~CGCClientProtoJob  (line 164, @0x00000000032179a0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::~CGCClientProtoJob  (line 164, @0x00000000032179c0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::~CGCClientProtoJob  (line 164, @0x0000000003217a40, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::~CGCClientProtoJob  (line 164, @0x0000000003217a60, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::~CGCClientProtoJob  (line 164, @0x0000000003217ae0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::~CGCClientProtoJob  (line 164, @0x0000000003217b00, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::~CGCClientProtoJob  (line 164, @0x0000000003217b80, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::~CGCClientProtoJob  (line 164, @0x0000000003217ba0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientProtoJob<CMsgGCClientPing>::~CGCClientProtoJob  (line 164, @0x0000000003217c20, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientProtoJob<CMsgGCClientPing>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgGCClientPing> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientProtoJob<CMsgGCClientPing>::~CGCClientProtoJob  (line 164, @0x0000000003217c40, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientProtoJob<CMsgGCClientPing>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgGCClientPing> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::~CGCClientProtoJob  (line 164, @0x0000000003217cc0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::~CGCClientProtoJob  (line 164, @0x0000000003217ce0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::~CGCClientProtoJob(
        GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest> *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::BYieldingRunGCJob  (line 179, @0x0000000003218b30, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgSOMultipleObjects::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::CProtoBufMsgMemoryPoolBase::Free (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool
bool __fastcall GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::BYieldingRunGCJob(
        GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects> *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  char v10; // r13
  GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::TProtoMsg msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = off_47CFD50;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgSOMultipleObjects::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgSOMultipleObjects::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF190;
      GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool);
  v10 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(&msg, pNetPacket);
  if ( v10 != 0 )
    v10 = (*(this->_vptr_CJob + 7))(this, &msg);
  msg._vptr_CProtoBufMsgBase = off_47CFD50;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v10;
}


// GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::BYieldingRunGCJob  (line 179, @0x0000000003218cc0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGCToClientPollConvarRequest::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::CProtoBufMsgMemoryPoolBase::Free (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool
bool __fastcall GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::BYieldingRunGCJob(
        GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest> *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  char v10; // r13
  GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::TProtoMsg msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = off_47D0290;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgGCToClientPollConvarRequest::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgGCToClientPollConvarRequest::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF090;
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool);
  v10 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(&msg, pNetPacket);
  if ( v10 != 0 )
    v10 = (*(this->_vptr_CJob + 7))(this, &msg);
  msg._vptr_CProtoBufMsgBase = off_47D0290;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v10;
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::BYieldingRunGCJob  (line 179, @0x0000000003218e50, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgSOCacheSubscribed::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::CProtoBufMsgMemoryPoolBase::Free (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool
bool __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::BYieldingRunGCJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed> *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  char v10; // r13
  GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::TProtoMsg msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = off_47CFE50;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgSOCacheSubscribed::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgSOCacheSubscribed::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF150;
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool);
  v10 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(&msg, pNetPacket);
  if ( v10 != 0 )
    v10 = (*(this->_vptr_CJob + 7))(this, &msg);
  msg._vptr_CProtoBufMsgBase = off_47CFE50;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v10;
}


// GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::BYieldingRunGCJob  (line 179, @0x0000000003218fe0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgSOSingleObject::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::CProtoBufMsgMemoryPoolBase::Free (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool
bool __fastcall GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::BYieldingRunGCJob(
        GCSDK::CGCClientProtoJob<CMsgSOSingleObject> *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  char v10; // r13
  GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::TProtoMsg msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = off_47CFB90;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgSOSingleObject::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgSOSingleObject::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF1D0;
      GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool);
  v10 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(&msg, pNetPacket);
  if ( v10 != 0 )
    v10 = (*(this->_vptr_CJob + 7))(this, &msg);
  msg._vptr_CProtoBufMsgBase = off_47CFB90;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool, msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v10;
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::BYieldingRunGCJob  (line 179, @0x0000000003219170, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgSOCacheUnsubscribed::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::CProtoBufMsgMemoryPoolBase::Free (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool
bool __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::BYieldingRunGCJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed> *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  char v10; // r13
  GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::TProtoMsg msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = off_47D0050;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgSOCacheUnsubscribed::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgSOCacheUnsubscribed::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF0D0;
      GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool);
  v10 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(&msg, pNetPacket);
  if ( v10 != 0 )
    v10 = (*(this->_vptr_CJob + 7))(this, &msg);
  msg._vptr_CProtoBufMsgBase = off_47D0050;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v10;
}


// GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::BYieldingRunGCJob  (line 179, @0x0000000003219300, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgSOCacheSubscribedUpToDate::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::CProtoBufMsgMemoryPoolBase::Free (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool
bool __fastcall GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::BYieldingRunGCJob(
        GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate> *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  char v10; // r13
  GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::TProtoMsg msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = off_47CFF50;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgSOCacheSubscribedUpToDate::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgSOCacheSubscribedUpToDate::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF110;
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool);
  v10 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(&msg, pNetPacket);
  if ( v10 != 0 )
    v10 = (*(this->_vptr_CJob + 7))(this, &msg);
  msg._vptr_CProtoBufMsgBase = off_47CFF50;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v10;
}


// GCSDK::CGCClientProtoJob<CMsgGCClientPing>::BYieldingRunGCJob  (line 179, @0x0000000003219a30, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGCClientPing::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::CProtoBufMsgMemoryPoolBase::Free (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool
bool __fastcall GCSDK::CGCClientProtoJob<CMsgGCClientPing>::BYieldingRunGCJob(
        GCSDK::CGCClientProtoJob<CMsgGCClientPing> *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  char v10; // r13
  GCSDK::CGCClientProtoJob<CMsgGCClientPing>::TProtoMsg msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = off_47D0150;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgGCClientPing::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgGCClientPing::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0350;
      GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool);
  v10 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(&msg, pNetPacket);
  if ( v10 != 0 )
    v10 = (*(this->_vptr_CJob + 7))(this, &msg);
  msg._vptr_CProtoBufMsgBase = off_47D0150;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool, msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v10;
}


