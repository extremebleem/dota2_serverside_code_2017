// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_gc_server.cpp:144
class CClientLobbyWatcher : public ISharedObjectListener {
public:

private:

	const CDOTALobby * * m_ppCachedLobby;  // +0x10
	CClientLobbyWatcher(const CClientLobbyWatcher &);
	CClientLobbyWatcher(CGCClient *, const CDOTALobby * *);
	~CClientLobbyWatcher();
	virtual void SOCreated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOUpdated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SODestroyed(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOCacheSubscribed(SOID_t, ESOCacheEvent);
	virtual void SOCacheUnsubscribed(SOID_t, ESOCacheEvent);

	// vtable[0] SOCreated
	// vtable[1] SOUpdated
	// vtable[2] SODestroyed
	// vtable[3] SOCacheSubscribed
	// vtable[4] SOCacheUnsubscribed
	// sizeof = 24
};

// src/game/server/dota/dota_gc_server.cpp:204
class CGCSubmitGameserverCrashReportJob : public CGCClientJob {
public:

	CGCSubmitGameserverCrashReportJob(CGCSubmitGameserverCrashReportJob &);
	CGCSubmitGameserverCrashReportJob(CGCSubmitGameserverCrashReportJob &);
	CGCSubmitGameserverCrashReportJob(CGCClient *, CMsgGameserverCrash &);
	virtual bool BYieldingRunGCJob();
	virtual ~CGCSubmitGameserverCrashReportJob();

	// vtable[6] BYieldingRunGCJob
	// sizeof = 360
};

// src/game/server/dota/dota_gc_server.cpp:413
struct CSOCacheFindLobby : public ISharedObjectListener {
public:

	const CDOTALobby * m_pCachedDotaLobby;  // +0x8
	CSOCacheFindLobby(const CSOCacheFindLobby &);
	CSOCacheFindLobby(CGCClient *);
	~CSOCacheFindLobby();
	virtual void SOCreated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOUpdated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SODestroyed(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOCacheSubscribed(SOID_t, ESOCacheEvent);
	virtual void SOCacheUnsubscribed(SOID_t, ESOCacheEvent);

	// vtable[0] SOCreated
	// vtable[1] SOUpdated
	// vtable[2] SODestroyed
	// vtable[3] SOCacheSubscribed
	// vtable[4] SOCacheUnsubscribed
	// sizeof = 24
};

// src/game/server/dota/dota_gc_server.cpp:849
struct PlayerDisconnectInfo {
	int nPlayerID;  // +0x0
	float flLastRecievedTime;  // +0x4

	// sizeof = 8
};

// src/game/server/dota/dota_gc_server.cpp:1589
class CGCServerJobSendRealtimeStats : public CGCClientJob {
public:

private:

	CGCServerJobSendRealtimeStats(CGCServerJobSendRealtimeStats &);
	CGCServerJobSendRealtimeStats(CGCServerJobSendRealtimeStats &);
	CGCServerJobSendRealtimeStats(CGCClient *, const CMsgDOTARealtimeGameStatsTerse *, const CMsgDOTARealtimeGameStats *);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCServerJobSendRealtimeStats();

	// vtable[2] BYieldingRunJob
	// sizeof = 360
};

// src/game/server/dota/dota_gc_server.cpp:2296
class CGCClientJobRealtimeStateStartStop : public CGCClientJob {
public:

	CGCClientJobRealtimeStateStartStop(CGCClientJobRealtimeStateStartStop &);
	CGCClientJobRealtimeStateStartStop(CGCClientJobRealtimeStateStartStop &);
	CGCClientJobRealtimeStateStartStop(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobRealtimeStateStartStop();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:2935
class CGCServerJobSendFantasyMatch : public CGCClientJob {
public:

private:

	MatchID_t m_unMatchID;  // +0x140
	uint32 m_unLeagueID;  // +0x148
	uint32 m_unSeriesID;  // +0x14c
	RTime32 m_unStartTime;  // +0x150
	uint32 m_unSeriesType;  // +0x154
	uint32 m_unTeam1;  // +0x158
	uint32 m_unTeam2;  // +0x15c
	CGCServerJobSendFantasyMatch(CGCServerJobSendFantasyMatch &);
	CGCServerJobSendFantasyMatch(CGCServerJobSendFantasyMatch &);
	CGCServerJobSendFantasyMatch(CGCClient *, MatchID_t, uint32, uint32, RTime32, uint32, uint32, uint32);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCServerJobSendFantasyMatch();

	// vtable[2] BYieldingRunJob
	// sizeof = 352
};

// src/game/server/dota/dota_gc_server.cpp:3052
class CGCClientJobUploadMatchStats : public CGCClientJob {
public:

private:

	uint m_unTotalPermissionAttempt;  // +0x13c
	double m_flStartTime;  // +0x140
	bool m_bStatsSubmitted;  // +0x150
	CGCClientJobUploadMatchStats(CGCClientJobUploadMatchStats &);
	CGCClientJobUploadMatchStats(CGCClient *, CProtoBufMsg<CMsgGameMatchSignOut> *);
	virtual ~CGCClientJobUploadMatchStats();
	void YieldingWaitTime(int);
	bool BYieldingGetPermission(double);
	bool ValidateLocalBotMatchSignout();
	virtual bool BYieldingRunJob(void *);

	// vtable[2] BYieldingRunJob
	// sizeof = 344
};

// src/game/server/dota/dota_gc_server.cpp:5735
class CGCClientJobServerWelcome : public CGCClientJob {
public:

	CGCClientJobServerWelcome(CGCClientJobServerWelcome &);
	CGCClientJobServerWelcome(CGCClientJobServerWelcome &);
	CGCClientJobServerWelcome(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobServerWelcome();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5755
class CGCClientJobServerUpdateVersion : public CGCClientJob {
public:

	CGCClientJobServerUpdateVersion(CGCClientJobServerUpdateVersion &);
	CGCClientJobServerUpdateVersion(CGCClientJobServerUpdateVersion &);
	CGCClientJobServerUpdateVersion(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobServerUpdateVersion();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5770
class CGCClientJobGetGCStatus : public CGCClientJob {
public:

	CGCClientJobGetGCStatus(CGCClientJobGetGCStatus &);
	CGCClientJobGetGCStatus(CGCClientJobGetGCStatus &);
	CGCClientJobGetGCStatus(CGCClient *);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCClientJobGetGCStatus();

	// vtable[2] BYieldingRunJob
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5804
class CGCClientJobDOTABroadcastNotificationServer : public CGCClientJob {
public:

	CGCClientJobDOTABroadcastNotificationServer(CGCClientJobDOTABroadcastNotificationServer &);
	CGCClientJobDOTABroadcastNotificationServer(CGCClientJobDOTABroadcastNotificationServer &);
	CGCClientJobDOTABroadcastNotificationServer(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobDOTABroadcastNotificationServer();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5824
class CGCClientJobDOTAGCToRelayConnect : public CGCClientJob {
public:

	CGCClientJobDOTAGCToRelayConnect(CGCClientJobDOTAGCToRelayConnect &);
	CGCClientJobDOTAGCToRelayConnect(CGCClientJobDOTAGCToRelayConnect &);
	CGCClientJobDOTAGCToRelayConnect(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobDOTAGCToRelayConnect();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5875
class CGCClientJobLANServerRelayConnect : public CGCClientJob {
public:

	CGCClientJobLANServerRelayConnect(CGCClientJobLANServerRelayConnect &);
	CGCClientJobLANServerRelayConnect(CGCClientJobLANServerRelayConnect &);
	CGCClientJobLANServerRelayConnect(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobLANServerRelayConnect();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5891
class CGCItemAcknowledged : public CGCClientJob {
public:

	CGCItemAcknowledged(CGCItemAcknowledged &);
	CGCItemAcknowledged(CGCItemAcknowledged &);
	CGCItemAcknowledged(CGCClient *);
	virtual bool BYieldingRunGCJob(IMsgNetPacket *);
	virtual ~CGCItemAcknowledged();

	// vtable[5] BYieldingRunGCJob
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5949
class CGCClientJobGCToServerPingRequest : public CGCClientJob {
public:

	CGCClientJobGCToServerPingRequest(CGCClientJobGCToServerPingRequest &);
	CGCClientJobGCToServerPingRequest(CGCClientJobGCToServerPingRequest &);
	CGCClientJobGCToServerPingRequest(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobGCToServerPingRequest();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5972
class CGCClientJobGCToServerConsoleCommand : public CGCClientJob {
public:

	CGCClientJobGCToServerConsoleCommand(CGCClientJobGCToServerConsoleCommand &);
	CGCClientJobGCToServerConsoleCommand(CGCClientJobGCToServerConsoleCommand &);
	CGCClientJobGCToServerConsoleCommand(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobGCToServerConsoleCommand();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// src/game/server/dota/dota_gc_server.cpp:5991
class CGCClientJobGCToServerPredictionResult : public CGCClientJob {
public:

	CGCClientJobGCToServerPredictionResult(CGCClientJobGCToServerPredictionResult &);
	CGCClientJobGCToServerPredictionResult(CGCClientJobGCToServerPredictionResult &);
	CGCClientJobGCToServerPredictionResult(CGCClient *);
	virtual bool BYieldingRunJobFromMsg(IMsgNetPacket *);
	virtual ~CGCClientJobGCToServerPredictionResult();

	// vtable[3] BYieldingRunJobFromMsg
	// sizeof = 320
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GDOTAGCClientSystem  (line 120, @0x0000000002991d40, libserver.so)
// callers: CSource2Server::GetServerGCLobby, CSource2Server::ServerHibernationUpdate, BuildPlayerPartyGroups, CGCServerJobGetAdditionalItems::BYieldingRunJob, CSource2GameClients::CanHLTVClientConnect, CDOTAGamerules::GetLobbyForGame, CDOTAGamerules::IsTournamentGame, CVoiceGameMgrHelper::CanPlayerHearPlayer, CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::OnGGCallMade, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::CheckIdleAndDisconnectedPlayers (85 total)
// globals: s_DOTAGCServerSystem
CDOTAGCServerSystem *__cdecl GDOTAGCClientSystem()
{
  return &s_DOTAGCServerSystem;
}


// CDOTAGCServerSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 125, @0x0000000002991d50, libserver.so)
void __cdecl CDOTAGCServerSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DeleteCrashSentinel  (line 136, @0x0000000002991d60, libserver.so)  // inlines: GetString
// calls: remove
// callers: QuitServer, sv_dota_crash_sentinel_filename_changed, CDOTAGCServerSystem::Shutdown, CDOTAGCServerSystem::UpdateCrashSentinel
// strings: "FCVAR_NEVER_AS_STRING"
void __cdecl DeleteCrashSentinel()
{
  char *m_pszString; // rdi

  if ( (sv_dota_crash_sentinel_filename.m_nFlags & 0x1000) != 0 )
  {
    m_pszString = "FCVAR_NEVER_AS_STRING";
LABEL_6:
    remove(m_pszString);
    return;
  }
  m_pszString = sv_dota_crash_sentinel_filename.m_pParent->m_Value.m_pszString;
  if ( m_pszString != 0 && *m_pszString != 0 )
    goto LABEL_6;
}


// CClientLobbyWatcher::SOCreated  (line 172, @0x00000000029a75d0, libserver.so)
void __fastcall CClientLobbyWatcher::SOCreated(
        CClientLobbyWatcher *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        __int64 eEvent)
{
  (*(this->_vptr_ISharedObjectListener + 1))(this, owner.m_id, *&owner.m_type, pObject, eEvent);
}


// CClientLobbyWatcher::SOUpdated  (line 177, @0x00000000029a75e0, libserver.so)
void __fastcall CClientLobbyWatcher::SOUpdated(
        CClientLobbyWatcher *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  ;
}


// CClientLobbyWatcher::SODestroyed  (line 179, @0x00000000029a9eb0, libserver.so)
void __fastcall CClientLobbyWatcher::SODestroyed(
        CClientLobbyWatcher *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  const CDOTALobby **m_ppCachedLobby; // rax

  if ( (*(pObject->_vptr_CSharedObject + 2))(pObject, owner.m_id, *&owner.m_type, pObject, eEvent) == 2004 )
  {
    m_ppCachedLobby = this->m_ppCachedLobby;
    if ( *m_ppCachedLobby != 0 )
      *m_ppCachedLobby = 0;
  }
}


// CClientLobbyWatcher::SOCacheSubscribed  (line 191, @0x00000000029a75f0, libserver.so)
void __fastcall CClientLobbyWatcher::SOCacheSubscribed(
        CClientLobbyWatcher *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  ;
}


// CClientLobbyWatcher::SOCacheUnsubscribed  (line 193, @0x00000000029a7600, libserver.so)
void __fastcall CClientLobbyWatcher::SOCacheUnsubscribed(
        CClientLobbyWatcher *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  const CDOTALobby **m_ppCachedLobby; // rax

  m_ppCachedLobby = this->m_ppCachedLobby;
  if ( *m_ppCachedLobby != 0 )
    *m_ppCachedLobby = 0;
}


// CGCSubmitGameserverCrashReportJob::~CGCSubmitGameserverCrashReportJob  (line 204, @0x00000000029ab8a0, libserver.so)  // inlines: FreeProto, ~CGCClientJob, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, GCSDK::CJob::~CJob
// globals: GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool
void __fastcall CGCSubmitGameserverCrashReportJob::~CGCSubmitGameserverCrashReportJob(
        CGCSubmitGameserverCrashReportJob *const this)
{
  CMsgGameserverCrash *m_pProtoBufBody; // rsi

  this->_vptr_CJob = off_43042F0;  // vptr: CGCSubmitGameserverCrashReportJob
  m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
  this->m_msg._vptr_CProtoBufMsgBase = &off_43042B0;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool, m_pProtoBufBody);
    this->m_msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&this->m_msg);
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCSubmitGameserverCrashReportJob::~CGCSubmitGameserverCrashReportJob  (line 204, @0x00000000029aba50, libserver.so)  // inlines: FreeProto, ~CGCClientJob, ~CGCSubmitGameserverCrashReportJob, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, GCSDK::CJob::~CJob, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool
void __fastcall CGCSubmitGameserverCrashReportJob::~CGCSubmitGameserverCrashReportJob(
        CGCSubmitGameserverCrashReportJob *const this)
{
  CMsgGameserverCrash *m_pProtoBufBody; // rsi

  this->_vptr_CJob = off_43042F0;  // vptr: CGCSubmitGameserverCrashReportJob
  m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
  this->m_msg._vptr_CProtoBufMsgBase = &off_43042B0;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool, m_pProtoBufBody);
    this->m_msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&this->m_msg);
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCSubmitGameserverCrashReportJob::BYieldingRunGCJob  (line 214, @0x00000000029abf60, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetConnectionStatus, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, RTime32TimeCur, Unlock, YldSendMessageAndGetReplyEx, ~CProtoBufMsg
// calls: GCSDK::CJob::BYieldingWaitOneFrame, Msg, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGenericResult::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc (20 total)
// strings: "Submitting crash report message\n", "Crash report message send failed with result code %d.  Will retry in %d seconds\n", "Crash report has been pending to submit for %d seconds\n", "Crash report message send failed with result code %d.  GIVING UP!\n", "Crash report message acknowledge by GC\n"
// globals: GCSDK::CProtoBufMsg<CMsgGenericResult>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool
bool __fastcall CGCSubmitGameserverCrashReportJob::BYieldingRunGCJob(CGCSubmitGameserverCrashReportJob *const this)
{
  GCSDK::CProtoBufMsg<CMsgGameserverCrash> *p_m_msg; // r15
  RTime32 v2; // r13d
  RTime32 v4; // r14d
  const google::protobuf::Descriptor *v5; // rax
  const google::protobuf::Descriptor *v6; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  CMsgGenericResult *v9; // rax
  GCSDK::CGCClient *m_pGCClient; // rdi
  GCSDK::ESendMessageAndGetReply Reply; // eax
  uint32 unTargetHigh; // [rsp+4h] [rbp-6Ch]
  GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult> *nWaited; // [rsp+8h] [rbp-68h]
  RTime32 nWaiteda; // [rsp+8h] [rbp-68h]
  GCSDK::CProtoBufMsg<CMsgGenericResult> msgReply; // [rsp+10h] [rbp-60h] BYREF

  p_m_msg = &this->m_msg;
  v2 = 0;
  v4 = CRTime::sm_nTimeCur;
  while ( 1 )
  {
    GCSDK::CJob::BYieldingWaitOneFrame(this);
    if ( *(this->m_pGCClient + 327) != 0 )
      goto LABEL_12;
    Msg("Submitting crash report message\n");
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgReply);
    msgReply._vptr_CProtoBufMsgBase = &off_4304350;
    msgReply.m_pProtoBufBody = 0;
    if ( !GCSDK::CProtoBufMsg<CMsgGenericResult>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgGenericResult>::s_bRegisteredWithMemoryPoolMgr )
      {
        nWaited = operator new(0x28u);
        v5 = CMsgGenericResult::descriptor();
        unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                         (v5->options_ + 8),
                         msgpool_hard_limit.number_,
                         msgpool_hard_limit.default_value_);
        v6 = CMsgGenericResult::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v6->options_ + 8),
                  msgpool_soft_limit.number_,
                  msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(nWaited, Int32, unTargetHigh);
        nWaited->_vptr_CProtoBufMsgMemoryPoolBase = &off_43062D0;
        GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool = nWaited;
        v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, nWaited);
        GCSDK::CProtoBufMsg<CMsgGenericResult>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    v9 = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool);
    m_pGCClient = this->m_pGCClient;
    msgReply.m_pProtoBufBody = v9;
    Reply = GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
              m_pGCClient,
              p_m_msg,
              &msgReply,
              0x1D9Cu,
              GCSDK::EExpectedReply::kExpectedReply_Optional,
              0x1Eu);
    if ( Reply == GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
      break;
    if ( Reply > GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_Timeout )
    {
      Warning("Crash report message send failed with result code %d.  GIVING UP!\n", Reply);
      goto LABEL_15;
    }
    Msg("Crash report message send failed with result code %d.  Will retry in %d seconds\n", Reply, 5);
    GCSDK::CJob::BYieldingWaitTime(this, 0x4C4B40u);
    msgReply._vptr_CProtoBufMsgBase = &off_4304350;
    if ( msgReply.m_pProtoBufBody != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool,
        msgReply.m_pProtoBufBody);
      msgReply.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgReply);
LABEL_12:
    if ( (CRTime::sm_nTimeCur - v4) > (v2 + 9) )
    {
      nWaiteda = CRTime::sm_nTimeCur - v4;
      Warning("Crash report has been pending to submit for %d seconds\n", CRTime::sm_nTimeCur - v4);
      v2 = nWaiteda;
    }
  }
  Msg("Crash report message acknowledge by GC\n");
LABEL_15:
  msgReply._vptr_CProtoBufMsgBase = &off_4304350;
  if ( msgReply.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool,
      msgReply.m_pProtoBufBody);
    msgReply.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgReply);
  return 1;
}


// sv_dota_crash_sentinel_filename_changed  (line 261, @0x0000000002997ac0, libserver.so)  // inlines: AllocProto, CGCClientJob, CGCSubmitGameserverCrashReportJob, CProtoBufMsg, CVProfScope, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetString, IsEnabled, Lock, Unlock, _Alloc_hider, basic_string, operator=, ~CGCClientJob, ~CUtlBuffer, ~CUtlMemory, ~CVProfScope, ~basic_string
// calls: CUtlBuffer::CUtlBuffer, Warning, std::string::assign(char const*,ulong), CMsgGameserverCrash::CMsgGameserverCrash, google::protobuf::TextFormat::ParseFromString(std::string const&,google::protobuf::Message *), CMsgGameserverCrash::~CMsgGameserverCrash, std::string::_Rep::_M_dispose(std::allocator<char> const&), DeleteCrashSentinel, CUtlMemory<unsigned char, int>::Purge, google::protobuf::Message::ShortDebugString(void), Msg, operator new (31 total)
// strings: "FCVAR_NEVER_AS_STRING", "Crash detection sentinel file '%s' file is present!\n", "  Failed to parse protobuf data\n", "  Parsed crash data: %s\n", "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool
void __fastcall sv_dota_crash_sentinel_filename_changed(
        IConVar *var,
        const char *pOldValue,
        double a3,
        float flOldValue)
{
  char *m_pszString; // r12
  google::protobuf::Message *v5; // rdx
  void *v6; // r12
  int m_enabled; // r11d
  const google::protobuf::Descriptor *v8; // rax
  const google::protobuf::Descriptor *v9; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v11; // rax
  CMsgGameserverCrash *v12; // rax
  GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash> *pPool; // [rsp+10h] [rbp-120h]
  uint32 unTargetHigh; // [rsp+18h] [rbp-118h]
  bool v15; // [rsp+1Fh] [rbp-111h]
  char v16; // [rsp+2Fh] [rbp-101h] BYREF
  std::string sCrashData; // [rsp+30h] [rbp-100h] BYREF
  const char *v18[2]; // [rsp+40h] [rbp-F0h] BYREF
  CUtlBuffer bufCrashData; // [rsp+50h] [rbp-E0h] BYREF
  std::string v20; // [rsp+A0h] [rbp-90h] BYREF

  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (sv_dota_crash_sentinel_filename.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( sv_dota_crash_sentinel_filename.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = sv_dota_crash_sentinel_filename.m_pParent->m_Value.m_pszString;
  }
  if ( *m_pszString != 0 )
  {
    CUtlBuffer::CUtlBuffer(&bufCrashData, 0, 0, 0);
    if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
           &g_pFullFileSystem->IBaseFileSystem,
           m_pszString,
           0,
           &bufCrashData,
           0,
           0,
           0) != 0 )
    {
      Warning("Crash detection sentinel file '%s' file is present!\n", m_pszString);
      sCrashData._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
      std::string::assign(&sCrashData, bufCrashData.m_Memory.m_pMemory, bufCrashData.m_Put);
      CMsgGameserverCrash::CMsgGameserverCrash(&v20);
      if ( google::protobuf::TextFormat::ParseFromString(&sCrashData, &v20, v5) != 0 )
      {
        google::protobuf::Message::ShortDebugString(v18);
        Msg("  Parsed crash data: %s\n", v18[0]);
        std::string::_Rep::_M_dispose(v18[0] - 24, &v16);
        v6 = operator new(0x168u);
        GCSDK::CJob::CJob(v6, &jobMgr);
        *(v6 + 78) = 4;
        *(v6 + 38) = &unk_4C49E98;
        *v6 = off_43042F0;
        GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(v6 + 10, 0x1D9Bu);
        *(v6 + 44) = 0;
        *(v6 + 40) = &off_43042B0;
        m_enabled = g_VProfCurrentProfile.m_enabled;
        v15 = m_enabled != 0;
        if ( m_enabled != 0 )
          CVProfile::EnterScope(
            &g_VProfCurrentProfile,
            "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
            0,
            "Networking",
            0,
            4);
        if ( !GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_bRegisteredWithMemoryPoolMgr )
        {
          pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
          if ( !GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_bRegisteredWithMemoryPoolMgr )
          {
            pPool = operator new(0x28u);
            v8 = CMsgGameserverCrash::descriptor();
            unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                             (v8->options_ + 8),
                             msgpool_hard_limit.number_,
                             msgpool_hard_limit.default_value_);
            v9 = CMsgGameserverCrash::descriptor();
            Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                      (v9->options_ + 8),
                      msgpool_soft_limit.number_,
                      msgpool_soft_limit.default_value_);
            GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(pPool, Int32, unTargetHigh);
            pPool->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306290;
            GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool = pPool;
            v11 = GCSDK::GProtoBufMsgMemoryPoolMgr();
            GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v11, pPool);
            GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_bRegisteredWithMemoryPoolMgr = 1;
          }
          pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
        }
        v12 = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool);
        *(v6 + 44) = v12;
        if ( v15 )
        {
          CVProfile::ExitScope(&g_VProfCurrentProfile);
          v12 = *(v6 + 44);
        }
        CMsgGameserverCrash::CopyFrom(v12, &v20);
        GCSDK::CJob::StartJobDelayed(v6, 0);
      }
      else
      {
        Warning("  Failed to parse protobuf data\n");
      }
      CMsgGameserverCrash::~CMsgGameserverCrash(&v20);
      std::string::_Rep::_M_dispose(sCrashData._M_dataplus._M_p - 24, v18);
    }
    DeleteCrashSentinel();
    CUtlMemory<unsigned char,int>::Purge(&bufCrashData.m_Memory);
  }
}


// QuitServer  (line 293, @0x0000000002991da0, libserver.so)
// calls: DeleteCrashSentinel, Warning, AppIsDedicatedServer
// callers: CDOTAGamerules::State_Think_DISCONNECT, UpdateServerVersion, CDOTAGCServerSystem::ShouldHibernate, CDOTAGCServerSystem::FinishActivateServerFromLobby, CDOTAGCServerSystem::OnCustomGameInstallStatus, CGCClientJobUploadMatchStats::BYieldingRunJob, CDOTAGCServerSystem::SetHibernation
// strings: "Server is shutting down while still trying to setup UGC\n", "QuitServer() executing \"quit\"\n", "quit\n", "QuitServer() called while already terminating\n", "QuitServer() executing \"disconnect\"\n", "disconnect QuitServer\n"
// globals: s_bIsTerminating
void __cdecl QuitServer()
{
  DeleteCrashSentinel();
  if ( g_CustomGameCache.m_pInstallJob != 0 )
    Warning("Server is shutting down while still trying to setup UGC\n");
  if ( s_bIsTerminating )
  {
    Warning("QuitServer() called while already terminating\n");
  }
  else if ( AppIsDedicatedServer() )
  {
    Warning("QuitServer() executing \"quit\"\n");
    (*(*engine + 280LL))(engine, "quit\n");
    s_bIsTerminating = 1;
  }
  else
  {
    Warning("QuitServer() executing \"disconnect\"\n");
    (*(*engine + 280LL))(engine, "disconnect QuitServer\n");
  }
}


// CDOTAGCServerSystem::CDOTAGCServerSystem  (line 330, @0x000000000299b8c0, libserver.so)  // inlines: CGameEventListener, CSteamID, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, StopListeningForAllEvents, _Alloc_hider, _M_initialize, _Rb_tree, _Rb_tree_impl, basic_string, map, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2, ~_Rb_tree, ~basic_string, ~map
// calls: CGCClientSystem::CGCClientSystem, CMsgPoorNetworkConditions::CMsgPoorNetworkConditions, CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints, CMsgTimedRewardContainer::CMsgTimedRewardContainer, CDOTAMatchMetadataFile::CDOTAMatchMetadataFile, SetGCClientSystem, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, std::_Rb_tree<unsigned int, std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats>, std::_Select1st<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats> > >::_M_erase, CGCClientSystem::~CGCClientSystem, _Unwind_Resume, CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile, std::string::_Rep::_M_dispose(std::allocator<char> const&) (17 total)
// callers: _GLOBAL__sub_I__unity_gc_01.cpp
void __fastcall CDOTAGCServerSystem::CDOTAGCServerSystem(CDOTAGCServerSystem *const this)
{
  CMsgPoorNetworkConditions *v2; // r12

  v2 = (this + 1760);
  CGCClientSystem::CGCClientSystem(this);
  *this = off_4304390;
  *(this + 198) = off_4304558;
  *(this + 199) = &off_4304590;
  *(this + 200) = off_43045D0;
  *(this + 1608) = 0;
  *(this + 408) = 0;
  *(this + 205) = 0;
  *(this + 208) = 0;
  *(this + 206) = this + 1632;
  *(this + 207) = this + 1632;
  *(this + 418) = 0;
  *(this + 210) = 0;
  *(this + 422) = 0;
  *(this + 423) = 0;
  CMsgPoorNetworkConditions::CMsgPoorNetworkConditions(v2);
  *(this + 1895) = 0;
  *(this + 472) = 0;
  *(this + 1892) = 0;
  *(this + 1893) = 0;
  *(this + 1894) = 0;
  *(this + 474) = 0;
  *(this + 1903) = 0;
  *(this + 1900) = 0;
  *(this + 1901) = 0;
  *(this + 1902) = 0;
  CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints((this + 1960));
  CMsgTimedRewardContainer::CMsgTimedRewardContainer((this + 2032));
  *(this + 526) = 0;
  *(this + 264) = 0;
  *(this + 530) = 0;
  *(this + 531) = 0;
  *(this + 532) = 0;
  *(this + 262) = &std::string::_Rep::_S_empty_rep_storage + 24;
  *(this + 267) = 0;
  *(this + 536) = 0;
  *(this + 537) = 0;
  CDOTAMatchMetadataFile::CDOTAMatchMetadataFile((this + 2160));
  SetGCClientSystem(this);
  *(this + 458) = 0;
  *(this + 424) = 0;
  *(this + 459) = 0;
  *(this + 460) = 0;
  *(this + 213) = 0;
  *(this + 214) = 0;
  *(this + 216) = 0;
  *(this + 217) = 0;
  *(this + 437) = 0;
  *(this + 1752) = 0;
  *(this + 436) = 0;
  *(this + 430) = 11;
  *(this + 1724) = 0;
  *(this + 456) = 0;
  *(this + 457) = 0;
  *(this + 476) = 0;
  *(this + 482) = 0;
  *(this + 483) = 0;
  *(this + 242) = 0;
  *(this + 1944) = 0;
  *(this + 487) = 0;
  *(this + 1952) = 0;
  *(this + 260) = 0;
  *(this + 261) = 0;
  *(this + 227) = 0;
  *(this + 231) = 0;
  *(this + 464) = 0;
  *(this + 465) = 0;
  *(this + 466) = 0;
}


// CDOTAGCServerSystem::~CDOTAGCServerSystem  (line 368, @0x000000000299bd10, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2, ~_Rb_tree, ~basic_string, ~map
// calls: SetGCClientSystem, CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile, CMsgTimedRewardContainer::~CMsgTimedRewardContainer, CMsgDOTAAwardEventPoints::~CMsgDOTAAwardEventPoints, CMsgPoorNetworkConditions::~CMsgPoorNetworkConditions, std::_Rb_tree<unsigned int, std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats>, std::_Select1st<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats> > >::_M_erase, CGCClientSystem::~CGCClientSystem, CUtlMemory<CSteamID, int>::Purge, CUtlMemory<CMsgDOTARealtimeGameStats*, int>::Purge, CUtlMemory<int, int>::Purge, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTAGCServerSystem::~CDOTAGCServerSystem
void __fastcall CDOTAGCServerSystem::~CDOTAGCServerSystem(CDOTAGCServerSystem *const this)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  int v6; // edx
  _BYTE v7[17]; // [rsp+Fh] [rbp-11h] BYREF

  *this = off_4304390;
  *(this + 198) = off_4304558;
  *(this + 199) = &off_4304590;
  *(this + 200) = off_43045D0;
  SetGCClientSystem(0);
  CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile((this + 2160));
  v2 = (*(this + 537) & 0xC0000000) == 0;
  *(this + 532) = 0;
  if ( v2 )
  {
    CUtlMemory<CMsgDOTARealtimeGameStats *,int>::Purge((this + 2136));
    if ( (*(this + 537) & 0xC0000000) == 0 )
      CUtlMemory<CMsgDOTARealtimeGameStats *,int>::Purge((this + 2136));
  }
  v2 = (*(this + 531) & 0xC0000000) == 0;
  *(this + 526) = 0;
  if ( v2 )
  {
    CUtlMemory<CSteamID,int>::Purge(this + 132);
    if ( (*(this + 531) & 0xC0000000) == 0 )
      CUtlMemory<CSteamID,int>::Purge(this + 132);
  }
  v3 = *(this + 262);
  v4 = v3 - 24;
  if ( (v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v5 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
    }
    else
    {
      v6 = *(v3 - 8);
      *(v3 - 8) = v6 - 1;
      v5 = v6;
    }
    if ( v5 <= 0 )
      std::string::_Rep::_M_destroy(v4, v7);
  }
  CMsgTimedRewardContainer::~CMsgTimedRewardContainer((this + 2032));
  CMsgDOTAAwardEventPoints::~CMsgDOTAAwardEventPoints((this + 1960));
  CMsgPoorNetworkConditions::~CMsgPoorNetworkConditions((this + 1760));
  v2 = (*(this + 423) & 0xC0000000) == 0;
  *(this + 418) = 0;
  if ( v2 )
  {
    CUtlMemory<int,int>::Purge(this + 105);
    if ( (*(this + 423) & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(this + 105);
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>,std::_Select1st<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>>::_M_erase(
    (this + 1624),
    *(this + 205));
  v2 = *(this + 1608) == 0;
  *(this + 200) = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this + 1600);
    *(this + 1608) = 0;
  }
  *(this + 200) = off_3FB3150;
  CGCClientSystem::~CGCClientSystem(this);
}


// CDOTAGCServerSystem::~CDOTAGCServerSystem  (line 368, @0x000000000299bf40, libserver.so)
// calls: CDOTAGCServerSystem::~CDOTAGCServerSystem, operator delete
void __fastcall CDOTAGCServerSystem::~CDOTAGCServerSystem(CDOTAGCServerSystem *const this)
{
  CDOTAGCServerSystem::~CDOTAGCServerSystem(this);
  operator delete(this);
}


// CDOTAGCServerSystem::Init  (line 375, @0x0000000002990770, libserver.so)  // inlines: ListenForGameEvent
// calls: Plat_GetCPUUsage, GCSDK::CSharedObject::RegisterFactory
// strings: "Update(CDOTALobby)", "Create(CDOTALobby)", "BuildCacheSubscribed(CDOTALobby)", "CDOTALobby", "Update(CDOTAPlayerChallenge)", "Create(CDOTAPlayerChallenge)" (11 total)
// globals: GCSDK::CreateSharedObjectSubclass<CDOTALobby>(void), GCSDK::CreateSharedObjectSubclass<CDOTAPlayerChallenge>(void)
bool __fastcall CDOTAGCServerSystem::Init(CDOTAGCServerSystem *const this)
{
  char *v2; // r12
  int v3; // eax
  IGameEventManager2 *v4; // rdi
  int v5; // eax
  IGameEventManager2 *v6; // rdi

  v2 = this + 1600;
  Plat_GetCPUUsage();
  GCSDK::CSharedObject::RegisterFactory(
    2004,
    GCSDK::CreateSharedObjectSubclass<CDOTALobby>,
    0,
    "CDOTALobby",
    "BuildCacheSubscribed(CDOTALobby)",
    "Create(CDOTALobby)",
    "Update(CDOTALobby)");
  GCSDK::CSharedObject::RegisterFactory(
    2010,
    GCSDK::CreateSharedObjectSubclass<CDOTAPlayerChallenge>,
    0,
    "CDOTAPlayerChallenge",
    "BuildCacheSubscribed(CDOTAPlayerChallenge)",
    "Create(CDOTAPlayerChallenge)",
    "Update(CDOTAPlayerChallenge)");
  *(this + 481) = 0;
  *(this + 1608) = 1;
  v3 = (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, v2, "player_full_update", 1);
  v4 = gameeventmanager;
  *(this + 1608) = 1;
  *(this + 403) = v3;
  v5 = (*(v4->_vptr_IBaseInterface + 4))(v4, v2, "player_connect_full", 1);
  v6 = gameeventmanager;
  *(this + 1608) = 1;
  *(this + 404) = v5;
  *(this + 405) = (*(v6->_vptr_IBaseInterface + 4))(v6, v2, "player_disconnect", 1);
  return 1;
}


// CDOTAGCServerSystem::PostInit  (line 392, @0x0000000002990890, libserver.so)
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::Initialize, CDOTACompendiumSchema::Get, CDOTACompendiumSchema::Initialize
void __fastcall CDOTAGCServerSystem::PostInit(CDOTAGCServerSystem *const this)
{
  CDOTAEventSchema *v1; // rax
  CDOTACompendiumSchema_0 *v2; // rax

  v1 = CDOTAEventSchema::Get();
  CDOTAEventSchema::Initialize(v1);
  v2 = CDOTACompendiumSchema::Get();
  CDOTACompendiumSchema::Initialize(v2);
}


// CDOTAGCServerSystem::PreInitGC  (line 404, @0x00000000029a40f0, libserver.so)
// calls: CDOTAGCServerSystem::SetSessionNeed
void __fastcall CDOTAGCServerSystem::PreInitGC(CDOTAGCServerSystem *const this)
{
  CDOTAGCServerSystem::SetSessionNeed(this);
}


// CSOCacheFindLobby::SOCreated  (line 436, @0x00000000029a7620, libserver.so)
void __fastcall CSOCacheFindLobby::SOCreated(
        CSOCacheFindLobby *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        __int64 eEvent)
{
  (*(this->_vptr_ISharedObjectListener + 1))(this, owner.m_id, *&owner.m_type, pObject, eEvent);
}


// CSOCacheFindLobby::SOUpdated  (line 441, @0x00000000029a7630, libserver.so)
void __fastcall CSOCacheFindLobby::SOUpdated(
        CSOCacheFindLobby *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  if ( (*(pObject->_vptr_CSharedObject + 2))(pObject, owner.m_id, *&owner.m_type, pObject, eEvent) == 2004 )
    this->m_pCachedDotaLobby = pObject;
}


// CSOCacheFindLobby::SODestroyed  (line 449, @0x00000000029a7660, libserver.so)
void __fastcall CSOCacheFindLobby::SODestroyed(
        CSOCacheFindLobby *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  if ( (*(pObject->_vptr_CSharedObject + 2))(pObject, owner.m_id, *&owner.m_type, pObject, eEvent) == 2004 )
    this->m_pCachedDotaLobby = 0;
}


// CSOCacheFindLobby::SOCacheSubscribed  (line 457, @0x00000000029a7690, libserver.so)
void __fastcall CSOCacheFindLobby::SOCacheSubscribed(
        CSOCacheFindLobby *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  ;
}


// CSOCacheFindLobby::SOCacheUnsubscribed  (line 461, @0x00000000029a76a0, libserver.so)
void __fastcall CSOCacheFindLobby::SOCacheUnsubscribed(
        CSOCacheFindLobby *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  this->m_pCachedDotaLobby = 0;
}


// CDOTAGCServerSystem::SetSessionNeed  (line 468, @0x00000000029a3cf0, libserver.so)  // inlines: Add, AllocProto, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufMsg, CVProfScope, DOTAGameRules, EnterScope, FreeProto, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetLobby, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, Unlock, set_has_lobby_id, set_lobby_id, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: AppIsDedicatedServer, GCSDK::CGCClient::SetSessionNeed, Plat_FloatTime, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, operator new, CMsgLANServerAvailable::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool (25 total)
// callers: CDOTAGCServerSystem::PreInitGC, CDOTAGCServerSystem::UpdateGCServerInfo, CDOTAGCServerSystem::SetUploadingMatchStats, CDOTAGCServerSystem::GameShutdown, CDOTAGCServerSystem::GameInit, CDOTAGCServerSystem::OnStatsSubmitted, CDOTAGCServerSystem::MatchSignOut
// strings: "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool
void __fastcall CDOTAGCServerSystem::SetSessionNeed(CDOTAGCServerSystem *const this)
{
  __int64 v2; // rax
  __m128d v3; // xmm0
  int v4; // eax
  int m_enabled; // eax
  bool v6; // r14
  unsigned __int64 v7; // r15
  uint64 m_numTimeBaseTicks; // rcx
  GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable> *v9; // r15
  const google::protobuf::Descriptor *v10; // rax
  const google::protobuf::Descriptor *v11; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v13; // rax
  __int64 v14; // rax
  CMsgLANServerAvailable *m_pProtoBufBody; // rdx
  CGCClientSystem *v16; // rax
  char v17; // al
  GCSDK::CGCClient *v18; // rdi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v20; // rax
  uint32 unTargetHigh[2]; // [rsp+8h] [rbp-68h]
  uint32 unTargetHigha; // [rsp+8h] [rbp-68h]
  GCSDK::CProtoBufMsg<CMsgLANServerAvailable> msg; // [rsp+10h] [rbp-60h] BYREF

  v2 = (*(*g_pNetworkServerService + 192LL))(g_pNetworkServerService);
  if ( v2 != 0 && (*(*v2 + 240LL))(v2) == 0 )
  {
    if ( AppIsDedicatedServer() )
    {
      v17 = (*(*engine + 168LL))(engine);
      v18 = (this + 24);
      if ( v17 != 0 )
      {
        GCSDK::CGCClient::SetSessionNeed(v18, 0xCBu, 1);
      }
      else
      {
        GCSDK::CGCClient::SetSessionNeed(v18, 0xC8u, 1);
        CDOTAGCServerSystem::ActivateServerFromLobby(this);
      }
    }
    else
    {
      GCSDK::CGCClient::SetSessionNeed((this + 24), 0xC8u, 1);
      if ( *(this + 261) != 0 )
      {
        if ( *(this + 260) != 0
          && g_pDOTAPlayerResource != 0
          && g_pGameRules != 0
          && Plat_FloatTime() - *(this + 487) >= 5.0 )
        {
          v3.m128d_f64[0] = Plat_FloatTime();
          v4 = *(this + 333);
          *(this + 487) = _mm_movedup_pd(v3).m128d_f64[0];
          if ( v4 == 0 )
          {
            GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x119Fu);
            msg._vptr_CProtoBufMsgBase = &off_4304650;
            msg.m_pProtoBufBody = 0;
            m_enabled = g_VProfCurrentProfile.m_enabled;
            v6 = m_enabled != 0;
            if ( m_enabled != 0 )
            {
              v7 = __rdtsc();
              *unTargetHigh = g_VProfCurrentProfile.m_TargetThreadId;
              if ( *unTargetHigh == ThreadGetCurrentId() )
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
                v20 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
                v20->m_BudgetFlags |= 4u;
                CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
                g_VProfCurrentProfile.m_fAtRoot = 0;
              }
              m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
              ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
              g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v7 + __rdtsc();
            }
            if ( !GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_bRegisteredWithMemoryPoolMgr )
            {
              pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
              if ( !GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_bRegisteredWithMemoryPoolMgr )
              {
                v9 = operator new(0x28u);
                v10 = CMsgLANServerAvailable::descriptor();
                unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                                  (v10->options_ + 8),
                                  msgpool_hard_limit.number_,
                                  msgpool_hard_limit.default_value_);
                v11 = CMsgLANServerAvailable::descriptor();
                Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                          (v11->options_ + 8),
                          msgpool_soft_limit.number_,
                          msgpool_soft_limit.default_value_);
                GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v9, Int32, unTargetHigha);
                v9->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306310;
                GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool = v9;
                v13 = GCSDK::GProtoBufMsgMemoryPoolMgr();
                GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v13, v9);
                GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_bRegisteredWithMemoryPoolMgr = 1;
              }
              pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
            }
            msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool);
            if ( v6 )
              CVProfile::ExitScope(&g_VProfCurrentProfile);
            v14 = (*(**(this + 260) + 88LL))(*(this + 260));
            m_pProtoBufBody = msg.m_pProtoBufBody;
            *(msg.m_pProtoBufBody + 4) |= 1u;
            *(m_pProtoBufBody + 3) = v14;
            v16 = GCClientSystem();
            CGCClientSystem::BSendMessage(v16, &msg);
            msg._vptr_CProtoBufMsgBase = &off_4304650;
            if ( msg.m_pProtoBufBody != 0 )
            {
              GCSDK::CProtoBufMsgMemoryPoolBase::Free(
                GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool,
                msg.m_pProtoBufBody);
              msg.m_pProtoBufBody = 0;
            }
            GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
          }
        }
      }
      else if ( *(this + 260) != 0 && *(this + 1952) == 0 )
      {
        CDOTAGCServerSystem::ActivateServerFromLobby(this);
      }
    }
  }
}


// WriteSaveGameToFile  (line 535, @0x0000000002997f20, libserver.so)  // inlines: GetLobby, GetString, V_strncpy<long unsigned int>
// calls: KeyValues::GetInt, V_snprintf, _V_strncpy, V_StripFilename, KeyValues::SaveToFile, CFmtStrN<256, false>::CFmtStrN, UTIL_ClientPrintAll, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __stack_chk_fail, __cxa_guard_abort (13 total)
// callers: CGCJobUploadSaveGame::BYieldingRunJob
// strings: "savenumber", "%s/%u/Dota2_Save_%llx_Slot%d.sav", "Save Game saved to %s\n", "sv_savedir", "sv_savewritedir"
// globals: `guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savedir, `guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savewritedir, WriteSaveGameToFile(KeyValues *)::sv_savedir, WriteSaveGameToFile(KeyValues *)::sv_savewritedir
void __fastcall WriteSaveGameToFile(KeyValues *pSaveGameKV)
{
  __int64 v2; // rbx
  char *m_pszString; // r12
  int v4; // r14d
  __int64 v5; // r15
  int Int; // eax
  IBaseFileSystem *v7; // rsi
  char szSaveName[272]; // [rsp+10h] [rbp-370h] BYREF
  char path[272]; // [rsp+120h] [rbp-260h] BYREF
  CFmtStrN<256,false> v10; // [rsp+230h] [rbp-150h] BYREF
  unsigned __int64 v11; // [rsp+348h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( `guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savedir == 0
    && __cxa_guard_acquire(&`guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savedir) != 0 )
  {
    ConVarRef::ConVarRef(&WriteSaveGameToFile(KeyValues *)::sv_savedir, "sv_savedir");
    __cxa_guard_release(&`guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savedir);
  }
  if ( `guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savewritedir == 0
    && __cxa_guard_acquire(&`guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savewritedir) != 0 )
  {
    ConVarRef::ConVarRef(&WriteSaveGameToFile(KeyValues *)::sv_savewritedir, "sv_savewritedir");
    __cxa_guard_release(&`guard variable for'WriteSaveGameToFile(KeyValues *)::sv_savewritedir);
  }
  v2 = qword_4C4A6A0;
  if ( qword_4C4A6A0 != 0 )
  {
    m_pszString = WriteSaveGameToFile(KeyValues *)::sv_savewritedir.m_pConVarState->m_Value.m_pszString;
    if ( *m_pszString == 0 )
      m_pszString = WriteSaveGameToFile(KeyValues *)::sv_savedir.m_pConVarState->m_Value.m_pszString;
    v4 = (*(*qword_4C4A6A0 + 176LL))(qword_4C4A6A0);
    v5 = (*(*v2 + 88LL))(v2);
    Int = KeyValues::GetInt(pSaveGameKV, "savenumber", 0);
    V_snprintf(szSaveName, 260, "%s/%u/Dota2_Save_%llx_Slot%d.sav", m_pszString, v4, v5, Int);
    _V_strncpy(path, szSaveName, 260);
    V_StripFilename(path);
    (*(filesystem->_vptr_IAppSystem + 27))(filesystem, path, "GAME");
    v7 = 0;
    if ( filesystem != 0 )
      v7 = &filesystem->IBaseFileSystem;
    KeyValues::SaveToFile(pSaveGameKV, v7, szSaveName, "GAME", 0);
    CFmtStrN<256,false>::CFmtStrN(&v10, "Save Game saved to %s\n", szSaveName);
    UTIL_ClientPrintAll(2, v10.m_szBuf, 0, 0, 0, 0);
  }
}


// CGCJobUploadSaveGame::BYieldingRunJob  (line 569, @0x000000000299c940, libserver.so)  // inlines: Add, BYieldingCall, CMsgGameServerSaveGameResult_Result_Name, CMsgIDLink, CMsgIDLinkGenericClientToGCResponse, CMsgIDLinkResponse, CopyArray, MoveArray, Reserve, YieldingCallEx, add_player_steam_ids, memcpy, mutable_save_game_data, operator(), set_game_time, set_has_game_time, set_has_lobby_id, set_has_save_game_data, set_lobby_id, ~CMsgIDLink, ~CMsgIDLinkGenericClientToGCResponse, ~CMsgIDLinkResponse, ~CUtlBuffer, ~CUtlMemory
// calls: CMsgGameServerUploadSaveGame::CMsgGameServerUploadSaveGame, KeyValues::GetInt, KeyValues::GetUint64, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, operator new [], memcpy, operator delete [], CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinaryFiltered, snappy::Compress (22 total)
// strings: "dotatime", "lobbyid", "steamid", "Save Game:  Error %s, writing to file\n", "Save Game:  Failed to get reply from the GC for save game, writing to file\n"
bool __fastcall CGCJobUploadSaveGame::BYieldingRunJob(CGCJobUploadSaveGame *const this, void *pvStartParam)
{
  KeyValues *v3; // rdi
  int Int; // eax
  uint64 Uint64; // rax
  KeyValues *v6; // rdi
  KeyValues *Key; // rax
  KeyValues *i; // rax
  void *v9; // rax
  const KeyValues *v10; // rbx
  uint64 v11; // r12
  __int64 v12; // rdx
  int v13; // edx
  void *v14; // r14
  unsigned int v15; // r14d
  google::protobuf::internal *v17; // rax
  int v18; // edx
  const char **v19; // rax
  _BYTE v20[24]; // [rsp+0h] [rbp-E0h] BYREF
  google::protobuf::EnumDescriptor *v21; // [rsp+18h] [rbp-C8h]
  _QWORD v22[2]; // [rsp+20h] [rbp-C0h] BYREF
  int v23; // [rsp+30h] [rbp-B0h]
  snappy::string *compressed; // [rsp+38h] [rbp-A8h]
  uint64 v25; // [rsp+40h] [rbp-A0h]
  void *src; // [rsp+48h] [rbp-98h]
  int v27; // [rsp+50h] [rbp-90h]
  int v28; // [rsp+54h] [rbp-8Ch]
  int v29; // [rsp+58h] [rbp-88h]
  CUtlBuffer saveGameData; // [rsp+60h] [rbp-80h] BYREF

  CMsgGameServerUploadSaveGame::CMsgGameServerUploadSaveGame(v22);
  v3 = *(&this->m_cHeartbeatsBeforeTimeout + 1);
  v22[0] = &off_4304810;
  Int = KeyValues::GetInt(v3, "dotatime", 0);
  v23 |= 1u;
  v29 = Int;
  if ( BYTE4(this->m_pSaveGameKV.m_pKeyValues) != 0 )
  {
    Uint64 = KeyValues::GetUint64(*(&this->m_cHeartbeatsBeforeTimeout + 1), "lobbyid", 0);
    v6 = *(&this->m_cHeartbeatsBeforeTimeout + 1);
    v25 = Uint64;
    v23 |= 4u;
    Key = KeyValues::FindKey(v6, "Players", 0);
    if ( Key != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(Key); ; i = KeyValues::GetNextKey(v10) )
      {
        v10 = i;
        if ( i == 0 )
          break;
        v11 = KeyValues::GetUint64(i, "steamid", 0);
        if ( v11 != 0 )
        {
          v12 = v27;
          if ( v27 == v28 )
          {
            v13 = 2 * v27;
            v14 = src;
            if ( v27 + 1 >= 2 * v27 )
              v13 = v27 + 1;
            if ( v13 < 4 )
              v13 = 4;
            v28 = v13;
            v9 = operator new[](8LL * v13);
            src = v9;
            v12 = v27;
            if ( v14 != 0 )
            {
              memcpy(v9, v14, 8LL * v27);
              operator delete[](v14);
              v9 = src;
              v12 = v27;
            }
          }
          else
          {
            v9 = src;
          }
          v27 = v12 + 1;
          *(v9 + v12) = v11;
        }
      }
    }
  }
  CUtlBuffer::CUtlBuffer(&saveGameData, 0, 0, 0);
  KeyValues::WriteAsBinaryFiltered(*(&this->m_cHeartbeatsBeforeTimeout + 1), &saveGameData);
  v23 |= 2u;
  snappy::Compress(saveGameData.m_Memory.m_pMemory, saveGameData.m_Put, compressed);
  CMsgGameServerSaveGameResult::CMsgGameServerSaveGameResult(v20);
  if ( GCSDK::YldSendSendMessageGenericClientToGCEx(
         v22,
         0x1BF6u,
         v20,
         0x1BF7u,
         GCSDK::EExpectedReply::kExpectedReply_Optional) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
  {
    Msg("Save Game:  Failed to get reply from the GC for save game, writing to file\n");
    goto LABEL_20;
  }
  v15 = v21;
  if ( v21 != 0 )
  {
    v17 = CMsgGameServerSaveGameResult_Result_descriptor();
    v19 = google::protobuf::internal::NameOfEnum(v17, v15, v18);
    Msg("Save Game:  Error %s, writing to file\n", *v19);
LABEL_20:
    WriteSaveGameToFile(*(&this->m_cHeartbeatsBeforeTimeout + 1));
  }
  CMsgGameServerSaveGameResult::~CMsgGameServerSaveGameResult(v20);
  CUtlMemory<unsigned char,int>::Purge(&saveGameData.m_Memory);
  v22[0] = &off_4304690;
  CMsgGameServerUploadSaveGame::~CMsgGameServerUploadSaveGame(v22);
  return 1;
}


// CGCJobLoadSaveGame::BYieldingRunJob  (line 628, @0x000000000299cc00, libserver.so)  // inlines: BYieldingCall, CMsgIDLink, CMsgIDLinkGenericClientToGCResponse, CMsgIDLinkResponse, DOTAGameRules, Get, NetworkStateChanged, Set, SetStableMode, YieldingCallEx, _M_data, _M_rep, empty, operator CEntityInstance*, operator=<bool>, set_has_save_id, set_save_id, size, ~CMsgIDLink, ~CMsgIDLinkGenericClientToGCResponse, ~CMsgIDLinkResponse, ~CUtlBuffer, ~CUtlMemory
// calls: CMsgGameServerGetLoadGame::CMsgGameServerGetLoadGame, CMsgGameServerGetLoadGameResult::CMsgGameServerGetLoadGameResult, GCSDK::YldSendSendMessageGenericClientToGCEx, Msg, CMsgGameServerGetLoadGameResult::~CMsgGameServerGetLoadGameResult, CMsgGameServerGetLoadGame::~CMsgGameServerGetLoadGame, snappy::GetUncompressedLength, CUtlBuffer::CUtlBuffer, CUtlBuffer::EnsureCapacity, snappy::RawUncompress, GCSDK::EGInternal_EmitInfo, CUtlMemory<unsigned char, int>::Purge (23 total)
// strings: "Save Game:  GC returned no save game for saveid %u\n", "Error decompressing save game data in save game id=%u\n", "Load Game:  Failed to get reply from the GC for save game %u\n", "Unable to get uncompressed data size in save game id=%u\n", "Dota 2 Saved Game", "savenumber" (8 total)
bool __fastcall CGCJobLoadSaveGame::BYieldingRunJob(CGCJobLoadSaveGame *const this, void *pvStartParam)
{
  uint32 m_saveID; // eax
  size_t v4; // rsi
  char v5; // r14
  CGameRules *v7; // r13
  int (**vptr_CGameRules)(...); // rdi
  int Int; // eax
  char v10; // [rsp+7h] [rbp-219h]
  size_t uDecompressedLen; // [rsp+18h] [rbp-208h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-200h] BYREF
  int v13; // [rsp+30h] [rbp-1F0h]
  uint32 v14; // [rsp+38h] [rbp-1E8h]
  _BYTE v15[24]; // [rsp+40h] [rbp-1E0h] BYREF
  const char **v16; // [rsp+58h] [rbp-1C8h]
  CUtlBuffer saveGameData; // [rsp+60h] [rbp-1C0h] BYREF
  KeyValues kvRootLoadGameKeys; // [rsp+B0h] [rbp-170h] BYREF
  CFmtStrN<256,false> v19; // [rsp+D0h] [rbp-150h] BYREF
  unsigned __int64 v20; // [rsp+1E8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  CMsgGameServerGetLoadGame::CMsgGameServerGetLoadGame(v12);
  v12[0] = &off_4304AB0;
  CMsgGameServerGetLoadGameResult::CMsgGameServerGetLoadGameResult(v15);
  m_saveID = this->m_saveID;
  v13 |= 1u;
  v14 = m_saveID;
  if ( GCSDK::YldSendSendMessageGenericClientToGCEx(
         v12,
         0x1BF8u,
         v15,
         0x1BF9u,
         GCSDK::EExpectedReply::kExpectedReply_Critical) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
  {
    Msg("Load Game:  Failed to get reply from the GC for save game %u\n", this->m_saveID);
    goto LABEL_4;
  }
  v4 = *(*v16 - 3);
  if ( v4 == 0 )
  {
    Msg("Save Game:  GC returned no save game for saveid %u\n", this->m_saveID);
LABEL_4:
    v5 = 1;
    goto LABEL_5;
  }
  if ( !snappy::GetUncompressedLength(*v16, v4, &uDecompressedLen) )
  {
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_GC,
      1,
      1,
      "Unable to get uncompressed data size in save game id=%u\n",
      this->m_saveID);
    goto LABEL_10;
  }
  CUtlBuffer::CUtlBuffer(&saveGameData, 0, uDecompressedLen, 0);
  CUtlBuffer::EnsureCapacity(&saveGameData, uDecompressedLen);
  if ( !snappy::RawUncompress(*v16, *(*v16 - 3), saveGameData.m_Memory.m_pMemory) )
  {
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_GC,
      1,
      1,
      "Error decompressing save game data in save game id=%u\n",
      this->m_saveID);
LABEL_9:
    CUtlMemory<unsigned char,int>::Purge(&saveGameData.m_Memory);
LABEL_10:
    v5 = 0;
    goto LABEL_5;
  }
  CUtlBuffer::SeekPut(&saveGameData, CUtlBuffer::SeekType_t::SEEK_HEAD, uDecompressedLen);
  KeyValues::KeyValues(&kvRootLoadGameKeys, "Dota 2 Saved Game");
  v5 = KeyValues::ReadAsBinaryFiltered(&kvRootLoadGameKeys, &saveGameData);
  if ( v5 == 0 )
  {
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_GC,
      1,
      1,
      "Error parsing keyvalues save game data in save game id=%u\n",
      this->m_saveID);
    KeyValues::~KeyValues(&kvRootLoadGameKeys);
    goto LABEL_9;
  }
  PerformDOTALoadGame(&kvRootLoadGameKeys);
  v10 = IsStableMode();
  v7 = g_pGameRules;
  if ( v10 != g_pGameRules[19].m_szQuestName[28] )
  {
    vptr_CGameRules = g_pGameRules[5]._vptr_CGameRules;
    if ( vptr_CGameRules != 0 && (*(vptr_CGameRules[1] + 49) & 4) == 0 )
      (*(*vptr_CGameRules + 22))(vptr_CGameRules, 2772, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
    v7[19].m_szQuestName[28] = v10;
  }
  Int = KeyValues::GetInt(&kvRootLoadGameKeys, "savenumber", 0);
  CFmtStrN<256,false>::CFmtStrN(&v19, "Load Game %d Successful\n", Int);
  UTIL_ClientPrintAll(2, v19.m_szBuf, 0, 0, 0, 0);
  KeyValues::~KeyValues(&kvRootLoadGameKeys);
  CUtlMemory<unsigned char,int>::Purge(&saveGameData.m_Memory);
LABEL_5:
  CMsgGameServerGetLoadGameResult::~CMsgGameServerGetLoadGameResult(v15);
  v12[0] = &off_4304930;
  CMsgGameServerGetLoadGame::~CMsgGameServerGetLoadGame(v12);
  return v5;
}


// CDOTAGCServerSystem::PostInitGC  (line 689, @0x0000000002991a20, libserver.so)  // inlines: IsValid
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, GCClientSystem, GCSDK::CGCClient::AddSOCacheListener
// strings: "SV:  CDOTAGCServerSystem - adding listener\n", "SV:  CDOTAGCServerSystem - couldn't add listener because Steam wasn't ready\n"
void __fastcall CDOTAGCServerSystem::PostInitGC(CDOTAGCServerSystem *const this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  char v4; // dl
  CGCClientSystem *v5; // rax

  v2 = (*(*engine + 704LL))(engine);
  *(this + 236) = v2;
  v3 = HIWORD(v2);
  v4 = v3 & 0xF0;
  if ( (v3 & 0xF0) == 0 || v3 > 0xAFu || (*(this + 1895) - 1) > 3u )
    goto LABEL_12;
  if ( v4 == 16 )
  {
    if ( *(this + 472) != 0 && (*(this + 946) | ((*(this + 1894) & 0xF) << 16)) <= 4u )
      goto LABEL_7;
LABEL_12:
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(LOG_SERVER, 2, "SV:  CDOTAGCServerSystem - couldn't add listener because Steam wasn't ready\n");
    return;
  }
  if ( v4 == 112 )
  {
    if ( *(this + 472) != 0 && (*(this + 946) | ((*(this + 1894) & 0xF) << 16)) == 0 )
      goto LABEL_7;
    goto LABEL_12;
  }
  if ( v4 == 48 && *(this + 472) == 0 )
    goto LABEL_12;
LABEL_7:
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    LoggingSystem_Log(LOG_SERVER, 0, "SV:  CDOTAGCServerSystem - adding listener\n");
  v5 = GCClientSystem();
  GCSDK::CGCClient::AddSOCacheListener((v5 + 24), this + 198);
}


// ResetConVarsFromFile  (line 706, @0x0000000002997970, libserver.so)  // inlines: strchr, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::EatWhiteSpace, CUtlBuffer::EatCPPComment, CUtlBuffer::GetLine, strchr, CUtlMemory<unsigned char, int>::Purge, ConVar::Revert, _Unwind_Resume, __stack_chk_fail
// callers: CDOTAGCServerSystem::Shutdown
void __fastcall ResetConVarsFromFile(const char *filename)
{
  __int64 v1; // r12
  char *v2; // rax
  ConVar *v3; // rax
  CUtlBuffer buf; // [rsp+0h] [rbp-180h] BYREF
  char sz[264]; // [rsp+50h] [rbp-130h] BYREF
  unsigned __int64 v6; // [rsp+158h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  v1 = (*(filesystem->_vptr_IBaseFileSystem + 2))(&filesystem->IBaseFileSystem, filename, "rb", "GAME");
  if ( v1 != 0 )
  {
    CUtlBuffer::CUtlBuffer(&buf, 0, 0, 1);
    (*(filesystem->_vptr_IAppSystem + 90))(filesystem, v1, &buf, 0, 0);
    (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem, v1);
    while ( buf.m_Error == 0 )
    {
      CUtlBuffer::EatWhiteSpace(&buf);
      CUtlBuffer::EatCPPComment(&buf);
      CUtlBuffer::GetLine(&buf, sz, 260);
      v2 = strchr(sz, 32);
      if ( v2 != 0 )
        *v2 = 0;
      v3 = (*(*g_pCVar + 144LL))(g_pCVar, sz);
      if ( v3 != 0 )
        ConVar::Revert(v3);
    }
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  }
}


// CDOTAGCServerSystem::GameShutdown  (line 741, @0x00000000029a4a50, libserver.so)  // inlines: SetUploadingMatchStats
// calls: CDOTAGCServerSystem::SetSessionNeed
void __fastcall CDOTAGCServerSystem::GameShutdown(
        CDOTAGCServerSystem *const this,
        const EventGameShutdown_t *const msg)
{
  if ( *(this + 457) != 0 )
  {
    *(this + 457) = 0;
    CDOTAGCServerSystem::SetSessionNeed(this);
  }
}


// CDOTAGCServerSystem::Shutdown  (line 751, @0x000000000299cf90, libserver.so)  // inlines: IsValid, Purge, PurgeAndDeleteElements, RemoveAll, StopListeningForAllEvents, ~CClientLobbyWatcher
// calls: GCSDK::CGCClient::RemoveSOCacheListener, operator delete, DeleteCrashSentinel, ResetConVarsFromFile, CUtlMemory<CMsgDOTARealtimeGameStats*, int>::Purge, CGCClientSystem::Shutdown
// strings: "cfg/lan_server.cfg"
void __fastcall CDOTAGCServerSystem::Shutdown(CDOTAGCServerSystem *const this)
{
  GCSDK::ISharedObjectListener *v2; // r12
  GCSDK::CGCClient *vptr_ISharedObjectListener; // rdi
  char v4; // dl
  __int64 v5; // r13
  int i; // r12d
  __int64 v7; // rdi
  bool v8; // zf

  v2 = *(this + 261);
  if ( v2 != 0 )
  {
    vptr_ISharedObjectListener = v2[1]._vptr_ISharedObjectListener;
    v2->_vptr_ISharedObjectListener = off_4304270;  // vptr: CClientLobbyWatcher
    if ( vptr_ISharedObjectListener != 0 )
      GCSDK::CGCClient::RemoveSOCacheListener(vptr_ISharedObjectListener, v2);
    operator delete(v2);
    *(this + 261) = 0;
  }
  DeleteCrashSentinel();
  *(this + 1952) = 0;
  ResetConVarsFromFile("cfg/lan_server.cfg");
  v4 = *(this + 1894) & 0xF0;
  if ( v4 != 0 && *(this + 1894) <= 0xAFu && (*(this + 1895) - 1) <= 3u )
  {
    if ( v4 == 16 )
    {
      if ( *(this + 472) != 0 && (*(this + 946) | ((*(this + 1894) & 0xF) << 16)) <= 4u )
        goto LABEL_11;
    }
    else
    {
      if ( v4 != 112 )
      {
        if ( v4 == 48 && *(this + 472) == 0 )
          goto LABEL_12;
LABEL_11:
        GCSDK::CGCClient::RemoveSOCacheListener((this + 24), this + 198);
        goto LABEL_12;
      }
      if ( *(this + 472) != 0 && (*(this + 946) | ((*(this + 1894) & 0xF) << 16)) == 0 )
        goto LABEL_11;
    }
  }
LABEL_12:
  if ( *(this + 1608) != 0 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this + 1600);
    *(this + 1608) = 0;
  }
  v5 = 0;
  for ( i = 0; i < *(this + 532); v5 += 8 )
  {
    v7 = *(*(this + 267) + v5);
    if ( v7 != 0 )
      (*(*v7 + 8LL))(v7);
    ++i;
  }
  v8 = (*(this + 537) & 0xC0000000) == 0;
  *(this + 532) = 0;
  if ( v8 )
    CUtlMemory<CMsgDOTARealtimeGameStats *,int>::Purge((this + 2136));
  CGCClientSystem::Shutdown(this);
}


// CDOTAGCServerSystem::GameInit  (line 778, @0x00000000029a4a80, libserver.so)  // inlines: SetUploadingMatchStats
// calls: CDOTAGCServerSystem::SetSessionNeed, Warning
// strings: "Error, changed level while waiting for match stats to upload!\n"
void __fastcall CDOTAGCServerSystem::GameInit(CDOTAGCServerSystem *const this, const EventGameInit_t *const msg)
{
  int v3; // eax

  v3 = *(this + 457);
  if ( v3 == 1 )
  {
    Warning("Error, changed level while waiting for match stats to upload!\n", msg);
  }
  else
  {
    if ( v3 != 0 )
    {
      *(this + 457) = 0;
      CDOTAGCServerSystem::SetSessionNeed(this);
    }
    *(this + 477) = 0;
    *(this + 478) = 0;
    *(this + 479) = 0;
    *(this + 1920) = 0;
    *(this + 1921) = 0;
  }
}


// CDOTAGCServerSystem::FrameUpdatePostEntityThink  (line 800, @0x00000000029a2ff0, libserver.so)  // inlines: DOTAGameRules, Get, GetGameVersion, GetLobby, NetworkStateChanged, Set, SetStableMode, game_version, operator CEntityInstance*, operator=<bool>
// calls: CRTime::UpdateRealTime, CDOTAGCServerSystem::CheckUpdateConnectedPlayers, CDOTAGCServerSystem::UpdateLiveFantasyStats, CDOTAGCServerSystem::UpdateRealtimeGameState, IsStableMode, Plat_FloatTime, CDOTAGCServerSystem::CheckPoorNetworkConditions, SetStableMode
void __fastcall CDOTAGCServerSystem::FrameUpdatePostEntityThink(
        CDOTAGCServerSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  __int64 v3; // rax
  int v4; // eax
  char v5; // al
  CGameRules *v6; // r12
  int (**vptr_CGameRules)(...); // rdi
  char v8; // [rsp+8h] [rbp-18h]
  double v9; // [rsp+8h] [rbp-18h]

  CRTime::UpdateRealTime();
  CDOTAGCServerSystem::CheckUpdateConnectedPlayers(this);
  CDOTAGCServerSystem::UpdateLiveFantasyStats(this);
  CDOTAGCServerSystem::UpdateRealtimeGameState(this);
  v3 = *(this + 260);
  if ( v3 != 0 )
  {
    v4 = *(v3 + 228);
    if ( *(this + 481) != v4 )
    {
      *(this + 481) = v4;
      if ( v4 != 0 )
      {
        if ( v4 == 1 )
          SetStableMode(1);
      }
      else
      {
        SetStableMode(0);
      }
    }
  }
  if ( g_pGameRules != 0 )
  {
    v5 = IsStableMode();
    v6 = g_pGameRules;
    if ( v5 != g_pGameRules[19].m_szQuestName[28] )
    {
      vptr_CGameRules = g_pGameRules[5]._vptr_CGameRules;
      if ( vptr_CGameRules != 0 && (*(vptr_CGameRules[1] + 49) & 4) == 0 )
      {
        v8 = v5;
        (*(*vptr_CGameRules + 22))(vptr_CGameRules, 2772, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
        v5 = v8;
      }
      v6[19].m_szQuestName[28] = v5;
    }
  }
  v9 = *(this + 437);
  if ( Plat_FloatTime() > v9 )
    CDOTAGCServerSystem::CheckPoorNetworkConditions(this, 0);
}


// CDOTAGCServerSystem::FrameBoundary  (line 842, @0x00000000029a4980, libserver.so)
// calls: CDOTAGCServerSystem::UpdateGCServerInfo, CGCClientSystem::FrameBoundary
void __fastcall CDOTAGCServerSystem::FrameBoundary(
        CDOTAGCServerSystem *const this,
        const EventGameFrameBoundary_t *const msg)
{
  CDOTAGCServerSystem::UpdateGCServerInfo(this, 0);
  CGCClientSystem::FrameBoundary(this, msg);
}


// PlayerDisconnectInfo_Compare  (line 855, @0x0000000002990360, libserver.so)
bool __fastcall PlayerDisconnectInfo_Compare(
        const PlayerDisconnectInfo *const info1,
        const PlayerDisconnectInfo *const info2,
        void *pLessContext)
{
  return info2->flLastRecievedTime > info1->flLastRecievedTime;
}


// CDOTAGCServerSystem::CheckPoorNetworkConditions  (line 865, @0x000000000299bf70, libserver.so)  // inlines: Add, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, ENetworkDisconnectionReason_Name, GetFloat, GetInt, GetLobby, Max<float>, State_Get, State_IsAfter, State_IsAfterGameInProgress, State_Order, add_players, entindex, operator=, operator[], set_account_id, set_detection_type, set_disconnect_reason, set_has_account_id, set_has_detection_type, set_has_disconnect_reason, set_has_peak_loss_pct, set_num_bad_intervals, set_peak_loss_pct, ~CUtlVector
// calls: IsAppDota2Experimental, Plat_FloatTime, CMsgPoorNetworkConditions::CMsgPoorNetworkConditions, CDOTA_PlayerResource::IsFakeClient, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetPlayer, CEntityInstance::GetEntityIndex, CUtlVectorBase<PlayerDisconnectInfo, CUtlMemory<PlayerDisconnectInfo, int> >::~CUtlVectorBase, CMsgPoorNetworkConditions::~CMsgPoorNetworkConditions, Msg, CMsgPoorNetworkConditions::CopyFrom, CDOTA_PlayerResource::GetTimeLastRecieved (19 total)
// callers: CDOTA_PlayerResource::SetLeaverStatus, CDOTAGCServerSystem::FrameUpdatePostEntityThink, CDOTAGCServerSystem::MatchSignOut
// strings: "Poor network detection: ** POOR NETWORK CONDITIONS DETECTED: %d radiant %d dire bad inter, "Poor network detection: Player %d Team %d Last Time received %6.1f\n", "Poor network detection: ** DETECTED MASS DISCONNECT **\n", "Poor network detection: %d radiant %d dire bad intervals.  Quorum not reached; poor netwo, "Poor network detection: %d players currently timed out.\n", "Poor network detection: No players timed out; poor network conditions / mass disconnect n (14 total)
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING, PlayerDisconnectInfo_Compare(PlayerDisconnectInfo const&,PlayerDisconnectInfo const&,void *)
void __fastcall CDOTAGCServerSystem::CheckPoorNetworkConditions(CDOTAGCServerSystem *const this, bool bSpew)
{
  int m_nValue; // r14d
  int v5; // eax
  __m128d v6; // xmm0
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rsi
  int Team; // r13d
  CDOTAPlayer *Player; // rax
  CEntityIndex v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  int m_Size; // eax
  __int64 v21; // r12
  int i; // r13d
  unsigned int v23; // eax
  __int64 v24; // r13
  int v25; // r12d
  float *v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  double v29; // xmm0_8
  int v30; // eax
  float v31; // xmm0_4
  __int64 v32; // rax
  AccountID_t SteamAccountID; // eax
  _DWORD *v34; // rcx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  const char *v39; // rax
  google::protobuf::internal *v40; // rax
  int v41; // edx
  const char **v42; // rax
  float TimeLastRecieved; // xmm0_4
  float v44; // xmm7_4
  AccountID_t v45; // eax
  int v46; // edx
  double v47; // [rsp+0h] [rbp-110h]
  INetChannelInfo *nci; // [rsp+8h] [rbp-108h]
  __int64 v49; // [rsp+10h] [rbp-100h]
  const char *pszGoodBad; // [rsp+18h] [rbp-F8h]
  int pMsgPlayer; // [rsp+20h] [rbp-F0h]
  CMsgPoorNetworkConditions_Player *pMsgPlayera; // [rsp+20h] [rbp-F0h]
  int v53; // [rsp+28h] [rbp-E8h]
  double v54; // [rsp+28h] [rbp-E8h]
  __int64 flAgeSinceReceived; // [rsp+38h] [rbp-D8h]
  int flAgeSinceReceivedb; // [rsp+38h] [rbp-D8h]
  float flAgeSinceReceiveda; // [rsp+38h] [rbp-D8h]
  int reason; // [rsp+40h] [rbp-D0h]
  int reasona; // [rsp+40h] [rbp-D0h]
  _DWORD *reasonc; // [rsp+40h] [rbp-D0h]
  unsigned int reasonb; // [rsp+40h] [rbp-D0h]
  int nBadIntervalsBadGuys; // [rsp+48h] [rbp-C8h]
  __int64 nBadIntervalsBadGuysa; // [rsp+48h] [rbp-C8h]
  char j; // [rsp+58h] [rbp-B8h]
  __int64 (__fastcall *jd)(IVEngineServer2 *, _QWORD); // [rsp+58h] [rbp-B8h]
  int ja; // [rsp+58h] [rbp-B8h]
  int jb; // [rsp+58h] [rbp-B8h]
  float jc; // [rsp+58h] [rbp-B8h]
  unsigned int v69; // [rsp+60h] [rbp-B0h]
  int nTeamID; // [rsp+64h] [rbp-ACh]
  int nTeamIDa; // [rsp+64h] [rbp-ACh]
  double flMaxTime; // [rsp+68h] [rbp-A8h]
  double flMaxTimeb; // [rsp+68h] [rbp-A8h]
  float flMaxTimea; // [rsp+68h] [rbp-A8h]
  PlayerDisconnectInfo info; // [rsp+70h] [rbp-A0h] BYREF
  CUtlVector<PlayerDisconnectInfo,CUtlMemory<PlayerDisconnectInfo,int> > vDCInfo; // [rsp+80h] [rbp-90h] BYREF
  _BYTE v77[24]; // [rsp+A0h] [rbp-70h] BYREF
  google::protobuf::internal::RepeatedPtrFieldBase v78[3]; // [rsp+B8h] [rbp-58h] BYREF

  if ( IsAppDota2Experimental() )
    return;
  flMaxTime = Plat_FloatTime();
  m_nValue = dota_poor_network_detection_debug_level.m_pParent->m_Value.m_nValue;
  if ( bSpew )
  {
    v5 = m_nValue + 1;
    m_nValue = 2;
    if ( v5 >= 2 )
      m_nValue = v5;
  }
  v6 = *&flMaxTime;
  v7 = *(this + 1752) == 0;
  v6.m128d_f64[0] = flMaxTime + 5.0;
  *(this + 437) = _mm_movedup_pd(v6).m128d_f64[0];
  if ( !v7 )
    return;
  v8 = *(this + 260);
  if ( v8 == 0 )
    return;
  if ( *(v8 + 349) != 0 )
    return;
  v9 = *(v8 + 152);
  if ( v9 > 8 || ((1LL << v9) & 0x1D1) == 0 || *(v8 + 400) != 0 )
    return;
  if ( g_pGameRules != 0 )
  {
    v10 = *&g_pGameRules[6].m_szQuestName[28];
    v11 = 0;
    if ( v10 <= 0xA )
      v11 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v10];
    if ( dword_491AD14 < v11 )
      return;
  }
  v12 = 0;
  CMsgPoorNetworkConditions::CMsgPoorNetworkConditions(v77);
  vDCInfo.m_Size = 0;
  vDCInfo.m_Memory.m_nAllocationCount = 0;
  vDCInfo.m_Memory.m_pMemory = 0;
  vDCInfo.m_Memory.m_nGrowSize = 0;
  j = 0;
  nBadIntervalsBadGuys = 0;
  nTeamID = 0;
  do
  {
    if ( CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v12) )
      goto LABEL_17;
    Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v12);
    if ( (Team - 2) > 1 )
      goto LABEL_17;
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v12);
    if ( Player != 0 )
    {
      j = 1;
      if ( !Player->m_bFullyJoinedServer )
        goto LABEL_17;
      jd = *(*engine + 240LL);
      v16.m_Data = CEntityInstance::GetEntityIndex(Player).m_Data;
      v17 = jd(engine, v16.m_Data);
      nci = v17;
      if ( v17 == 0 || (*(*v17 + 48LL))(v17) != 0 || (*(nci->_vptr_INetChannelInfo + 7))(nci) != 0 )
        goto LABEL_24;
      v49 = (*(nci->_vptr_INetChannelInfo + 30))(nci, 1);
      if ( *(v49 + 60) <= 0 )
      {
        reasona = 0;
      }
      else
      {
        v69 = 0;
        jc = 0.0;
        reason = 0;
        flAgeSinceReceived = v49;
        do
        {
          v53 = *(flAgeSinceReceived + 68);
          pMsgPlayer = *(flAgeSinceReceived + 66);
          v31 = v53 / (pMsgPlayer + 2.0);
          jc = fmaxf(jc, v31);
          if ( v31 > dota_poor_network_detection_loss_pct.m_pParent->m_Value.m_fValue )
          {
            ++v69;
            pszGoodBad = "BAD";
            v30 = 3;
          }
          else
          {
            pszGoodBad = "OK";
            v30 = 4;
          }
          if ( m_nValue >= v30 )
          {
            v47 = (v31 * 100.0);
            v32 = (*(nci->_vptr_INetChannelInfo + 1))(nci);
            Msg(
              "Poor network detection: Player %d (%s) %d/%d (%.1f%%) packets lost => interval %s\n",
              v12,
              v32,
              v53,
              pMsgPlayer,
              pszGoodBad,
              v47);
          }
          ++reason;
          flAgeSinceReceived += 6;
        }
        while ( *(v49 + 60) > reason );
        reasona = v69;
        if ( v69 != 0 )
        {
          reasonc = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgPoorNetworkConditions_Player>::TypeHandler>(v78);
          SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v12);
          v34 = reasonc;
          v13 = v69;
          v35 = reasonc[4];
          reasonc[6] = SteamAccountID;
          reasonc[8] = v69;
          reasona = v69;
          v34[4] = v35 | 0xD;
          v34[9] = (jc * 100.0);
        }
      }
      if ( dota_poor_network_detection_min_intervals_player.m_pParent->m_Value.m_nValue > reasona )
        goto LABEL_82;
      v36 = dota_poor_network_detection_max_intervals_player.m_pParent->m_Value.m_nValue;
      if ( reasona <= v36 )
        v36 = reasona;
      v37 = v36;
      jb = v36;
      v38 = 2;
      if ( v37 == 0 )
      {
LABEL_82:
        jb = 0;
        v38 = 3;
      }
      if ( m_nValue >= v38 )
      {
        flAgeSinceReceivedb = *(v49 + 60);
        v39 = (*(nci->_vptr_INetChannelInfo + 1))(nci);
        Msg(
          "Poor network detection: Player %d (%s): %d/%d intervals (counting as %d) bad\n",
          v12,
          v39,
          reasona,
          flAgeSinceReceivedb,
          jb);
      }
      goto LABEL_61;
    }
    if ( CDOTA_PlayerResource::GetTimeLastRecieved(g_pDOTAPlayerResource, v12) != 0.0 )
    {
      reasonb = CDOTA_PlayerResource::GetDisconnectionReason(g_pDOTAPlayerResource, v12);
      if ( reasonb - 2 <= 1 )
      {
        if ( m_nValue > 1 )
        {
          v40 = ENetworkDisconnectionReason_descriptor();
          v42 = google::protobuf::internal::NameOfEnum(v40, reasonb, v41);
          Msg("Poor network detection: Player %d disconnected for reason %s.  Not checking for timeout\n", v12, *v42);
        }
LABEL_24:
        j = 1;
        goto LABEL_17;
      }
      TimeLastRecieved = CDOTA_PlayerResource::GetTimeLastRecieved(g_pDOTAPlayerResource, v12);
      v54 = TimeLastRecieved;
      v44 = flMaxTime - TimeLastRecieved;
      flAgeSinceReceiveda = v44;
      if ( v44 >= sv_timeout_when_fully_connected.m_pParent->m_Value.m_fValue )
      {
        if ( v44 < 300.0 )
        {
          info.nPlayerID = v12;
          info.flLastRecievedTime = TimeLastRecieved;
          jb = dota_poor_network_detection_min_intervals_player.m_pParent->m_Value.m_nValue;
          CUtlVectorBase<PlayerDisconnectInfo,CUtlMemory<PlayerDisconnectInfo,int>>::SortedInsert(
            &vDCInfo,
            &info,
            PlayerDisconnectInfo_Compare,
            0);
          pMsgPlayera = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgPoorNetworkConditions_Player>::TypeHandler>(v78);
          v45 = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v12);
          v46 = *(pMsgPlayera + 4);
          *(pMsgPlayera + 6) = v45;
          *(pMsgPlayera + 4) = v46 | 3;
          *(pMsgPlayera + 7) = reasonb;
          if ( m_nValue > 1 )
            Msg(
              "Poor network detection: Player %d timed out at time %.2f (%.1fs ago).  Recent enough to count as recent bad interval.\n",
              v12,
              v54,
              flAgeSinceReceiveda);
          goto LABEL_61;
        }
        if ( m_nValue > 1 )
          Msg(
            "Poor network detection: Player %d timed out at time %.2f (%.1fs ago).  Not recent enough to count as recent bad interval\n",
            v12,
            v54,
            v44);
      }
    }
    jb = 0;
LABEL_61:
    if ( Team == 2 )
      nTeamID += jb;
    else
      nBadIntervalsBadGuys += jb;
    j = 1;
LABEL_17:
    ++v12;
  }
  while ( v12 != 24 );
  v18 = (nBadIntervalsBadGuys + nTeamID);
  if ( nBadIntervalsBadGuys + nTeamID == 0 && vDCInfo.m_Size == 0 )
  {
    if ( j != 0 && m_nValue > 2 )
      Msg("Poor network detection: No bad intervals and no players timed out.\n", v13, v18);
    goto LABEL_30;
  }
  v19 = dota_poor_network_detection_num_intervals_team.m_pParent->m_Value.m_nValue;
  if ( nTeamID >= v19
    && nBadIntervalsBadGuys >= v19
    && v18 >= dota_poor_network_detection_num_intervals_total.m_pParent->m_Value.m_nValue )
  {
    if ( m_nValue >= 0 )
      Msg(
        "Poor network detection: ** POOR NETWORK CONDITIONS DETECTED: %d radiant %d dire bad intervals **\n",
        nTeamID,
        nBadIntervalsBadGuys);
    *(this + 1752) = 1;
    CMsgPoorNetworkConditions::CopyFrom((this + 1760), v77);
    *(this + 444) |= 1u;
    *(this + 452) = 3;
    goto LABEL_30;
  }
  if ( m_nValue > 1 )
  {
    *&v29 = Msg(
              "Poor network detection: %d radiant %d dire bad intervals.  Quorum not reached; poor network conditions not"
              " detected based on bad QoS intervals\n",
              nTeamID,
              nBadIntervalsBadGuys).m128_u64[0];
    if ( vDCInfo.m_Size == 0 )
    {
      Msg("Poor network detection: No players timed out; poor network conditions / mass disconnect not detected\n", v29);
      goto LABEL_30;
    }
    Msg("Poor network detection: %d players currently timed out.\n", vDCInfo.m_Size);
  }
  else if ( vDCInfo.m_Size == 0 )
  {
    goto LABEL_30;
  }
  m_Size = vDCInfo.m_Size;
  v21 = 0;
  for ( i = 0; m_Size > i; ++v21 )
  {
    if ( m_nValue > 1 )
    {
      flMaxTimeb = vDCInfo.m_Memory.m_pMemory[v21].flLastRecievedTime;
      v23 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, vDCInfo.m_Memory.m_pMemory[v21].nPlayerID);
      Msg(
        "Poor network detection: Player %d Team %d Last Time received %6.1f\n",
        vDCInfo.m_Memory.m_pMemory[v21].nPlayerID,
        v23,
        flMaxTimeb);
      m_Size = vDCInfo.m_Size;
    }
    ++i;
  }
  ja = 0;
  v24 = 0;
  while ( 2 )
  {
    if ( ja >= m_Size )
    {
      if ( m_nValue > 1 )
        Msg("Poor network detection: Poor network conditions / mass disconnect not detected\n", v13, v18);
      goto LABEL_30;
    }
    flMaxTimea = *(&vDCInfo.m_Memory.m_pMemory->flLastRecievedTime + v24) + 5.0;
    ++ja;
    nTeamIDa = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, *(&vDCInfo.m_Memory.m_pMemory->nPlayerID + v24));
    v18 = vDCInfo.m_Size;
    v25 = ja;
    if ( vDCInfo.m_Size <= ja )
    {
      m_Size = vDCInfo.m_Size;
      nBadIntervalsBadGuysa = v24 + 8;
      goto LABEL_55;
    }
    nBadIntervalsBadGuysa = v24 + 8;
    v26 = (&vDCInfo.m_Memory.m_pMemory[1] + v24);
    if ( v26[1] > flMaxTimea )
    {
LABEL_54:
      m_Size = v18;
LABEL_55:
      v24 = nBadIntervalsBadGuysa;
      continue;
    }
    break;
  }
  v27 = v24 + 16;
  while ( nTeamIDa == CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, *v26) )
  {
    v18 = vDCInfo.m_Size;
    if ( vDCInfo.m_Size > ++v25 )
    {
      v28 = v27;
      v27 += 8;
      v26 = (vDCInfo.m_Memory.m_pMemory + v28);
      if ( v26[1] <= flMaxTimea )
        continue;
    }
    goto LABEL_54;
  }
  if ( m_nValue >= 0 )
    Msg("Poor network detection: ** DETECTED MASS DISCONNECT **\n");
  *(this + 1752) = 1;
  CMsgPoorNetworkConditions::CopyFrom((this + 1760), v77);
  *(this + 444) |= 1u;
  *(this + 452) = 2;
LABEL_30:
  CUtlVectorBase<PlayerDisconnectInfo,CUtlMemory<PlayerDisconnectInfo,int>>::~CUtlVectorBase(&vDCInfo);
  CMsgPoorNetworkConditions::~CMsgPoorNetworkConditions(v77);
}


// CDOTAGCServerSystem::FireGameEvent  (line 1119, @0x0000000002999940, libserver.so)  // inlines: CPeerToPeerAddress, CSteamID, Clear, IsValid, SetFromSteamID, SetFromString, ToDOTAPlayer, _M_destroy_node, _M_erase_aux, _M_put_node, deallocate, end, entindex, erase, find, insert<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats>&, void>, netadr_t, ns_address, pair<unsigned int&, CDOTAGCServerSystem::SCachedLatencyStats&, void>, ~ns_address
// calls: UTIL_PlayerByUserId, CEntityInstance::GetEntityIndex, CDOTA_PlayerResource::GetSteamAccountID, std::_Rb_tree<unsigned int, std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats>, std::_Select1st<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats> > >::find, std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&), operator delete, netadr_t::SetIP, netadr_t::SetPort, netadr_t::SetType, netadr_t::Clear, netadr_t::SetFromString, netadr_t::GetIPHostByteOrder (19 total)
void __fastcall CDOTAGCServerSystem::FireGameEvent(CDOTAGCServerSystem *const this, IGameEvent *event)
{
  int v4; // eax
  int v5; // eax
  CBasePlayer *v6; // rax
  const CEntityInstance *v7; // rbx
  __int64 (__fastcall *v8)(IVEngineServer2 *, _QWORD); // r13
  CEntityIndex v9; // eax
  __int64 v10; // r13
  int v11; // eax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>,std::_Select1st<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats> > >::iterator v12; // rax
  void *v13; // rax
  __int64 v14; // r15
  unsigned int IPHostByteOrder; // r15d
  int v16; // eax
  int FullUpdateCount; // ebx
  const void *v18; // rax
  const void *v19; // rax
  int v20; // eax
  CBasePlayer *v21; // rax
  CBasePlayer *v22; // rbx
  int v23; // eax
  int v24; // eax
  CBasePlayer *v25; // rax
  const CEntityInstance *v26; // rbx
  int v27; // eax
  __int64 (__fastcall *v28)(IVEngineServer2 *, _QWORD); // r13
  CEntityIndex v29; // eax
  __int64 v30; // rbx
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>,std::_Select1st<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats> > >::iterator v31; // r12
  __int64 v32; // rax
  void *v33; // rax
  char v34; // al
  NetworkSystemAddressType_t v35; // eax
  char v36; // [rsp+7h] [rbp-489h]
  AccountID_t accountID; // [rsp+1Ch] [rbp-474h] BYREF
  CSteamID v38; // [rsp+20h] [rbp-470h] BYREF
  _DWORD src[2]; // [rsp+30h] [rbp-460h] BYREF
  _BYTE dest[248]; // [rsp+38h] [rbp-458h] BYREF
  _BYTE v41[256]; // [rsp+130h] [rbp-360h] BYREF
  AccountID_t accountID_0; // [rsp+230h] [rbp-260h] BYREF
  _BYTE v43[504]; // [rsp+238h] [rbp-258h] BYREF
  ns_address address; // [rsp+430h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+458h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v4 = (*(event->_vptr_IGameEvent + 3))(event);
  if ( v4 == *(this + 403) )
  {
    v20 = (*(event->_vptr_IGameEvent + 8))(event, "userid", 0);
    v21 = UTIL_PlayerByUserId(v20);
    v22 = v21;
    if ( v21 != 0 && (*(v21->_vptr_IHandleEntity + 140))(v21) != 0 && g_pDOTAPlayerResource != 0 )
    {
      v23 = (*(v22->_vptr_IHandleEntity + 393))(v22);
      CDOTA_PlayerResource::IncrementFullUpdateCount(g_pDOTAPlayerResource, v23);
    }
  }
  else if ( v4 == *(this + 404) )
  {
    v24 = (*(event->_vptr_IGameEvent + 8))(event, "userid", 0);
    v25 = UTIL_PlayerByUserId(v24);
    v26 = v25;
    if ( v25 != 0 && (*(v25->_vptr_IHandleEntity + 140))(v25) != 0 && g_pDOTAPlayerResource != 0 )
    {
      v27 = (*(v26->_vptr_IHandleEntity + 393))(v26);
      accountID_0 = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v27);
      if ( accountID_0 != 0 )
      {
        v28 = *(*engine + 240LL);
        v29.m_Data = CEntityInstance::GetEntityIndex(v26).m_Data;
        v30 = v28(engine, v29.m_Data);
        if ( v30 != 0 )
        {
          v31._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>,std::_Select1st<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>>::find(
                          (this + 1624),
                          &accountID_0)._M_node;
          v32 = *v30;
          if ( v31._M_node == (this + 1632) )
          {
            (*(v32 + 232))(v30, 0);
            (*(*v30 + 232LL))(v30, 1);
          }
          else
          {
            (*(v32 + 248))(v30, 0, &v31._M_node[9]._M_parent);
            (*(*v30 + 248LL))(v30, 1, &v31._M_node[1]._M_left);
            v33 = std::_Rb_tree_rebalance_for_erase(v31._M_node, this + 51);
            operator delete(v33);
            --*(this + 208);
          }
        }
      }
    }
  }
  else if ( v4 == *(this + 405) )
  {
    v5 = (*(event->_vptr_IGameEvent + 8))(event, "userid", 0);
    v6 = UTIL_PlayerByUserId(v5);
    v7 = v6;
    if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 140))(v6) != 0 )
    {
      v8 = *(*engine + 240LL);
      v9.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
      v10 = v8(engine, v9.m_Data);
      if ( v10 != 0 && g_pDOTAPlayerResource != 0 )
      {
        v11 = (*(v7->_vptr_IHandleEntity + 393))(v7);
        accountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v11);
        if ( accountID != 0 )
        {
          v12._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>,std::_Select1st<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>>::find(
                          (this + 1624),
                          &accountID)._M_node;
          if ( v12._M_node != (this + 1632) )
          {
            v13 = std::_Rb_tree_rebalance_for_erase(v12._M_node, this + 51);
            operator delete(v13);
            --*(this + 208);
          }
          netadr_t::SetIP(&address.m_adr, 0);
          netadr_t::SetPort(&address.m_adr, 0);
          netadr_t::SetType(&address.m_adr, NA_IP);
          HIWORD(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits) = BYTE6(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits)
                                                                      & 0xF;
          address.m_steamID.m_steamID.m_steamid.m_unAll64Bits &= 0xFFF0000000000000LL;
          address.m_steamID.m_steamChannel = 0;
          address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
          address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
          v14 = (*(*v10 + 8LL))(v10);
          address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
          netadr_t::Clear(&address.m_adr);
          HIWORD(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits) = BYTE6(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits)
                                                                      & 0xF;
          address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
          address.m_steamID.m_steamID.m_steamid.m_unAll64Bits &= 0xFFF0000000000000LL;
          address.m_steamID.m_steamChannel = 0;
          if ( v14 == 0 )
            goto LABEL_42;
          if ( *v14 == 61 )
          {
            if ( *(v14 + 1) != 91 )
              goto LABEL_42;
            ++v14;
            v36 = 1;
          }
          else
          {
            if ( *v14 != 91 )
            {
              if ( netadr_t::SetFromString(&address.m_adr, v14, 1) )
              {
                address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
LABEL_17:
                IPHostByteOrder = netadr_t::GetIPHostByteOrder(&address.m_adr);
LABEL_18:
                v16 = (*(v7->_vptr_IHandleEntity + 393))(v7);
                FullUpdateCount = CDOTA_PlayerResource::GetFullUpdateCount(g_pDOTAPlayerResource, v16);
                v18 = (*(*v10 + 240LL))(v10, 1);
                memcpy(dest, v18, sizeof(dest));
                v19 = (*(*v10 + 240LL))(v10, 0);
                memcpy(v41, v19, 0xF8u);
                src[0] = IPHostByteOrder;
                src[1] = FullUpdateCount;
                accountID_0 = accountID;
                memcpy(v43, src, sizeof(v43));
                std::_Rb_tree<unsigned int,std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>,std::_Select1st<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>>>::_M_insert_unique<std::pair<unsigned int const,CDOTAGCServerSystem::SCachedLatencyStats>&>(
                  (this + 1624),
                  &accountID_0);
                address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
                netadr_t::Clear(&address.m_adr);
                return;
              }
              goto LABEL_42;
            }
            v36 = 0;
          }
          CSteamID::CSteamID(&v38, v14, EUniverse::k_EUniverseInvalid);
          v34 = BYTE6(v38.m_steamid.m_unAll64Bits) & 0xF0;
          if ( (v38.m_steamid.m_unAll64Bits & 0xF0000000000000LL) != 0
            && BYTE6(v38.m_steamid.m_unAll64Bits) <= 0xAFu
            && (HIBYTE(v38.m_steamid.m_unAll64Bits) - 1) <= 3u )
          {
            if ( v34 == 16 )
            {
              if ( v38.m_steamid.m_comp == 0 || (*(&v38.m_steamid.m_comp + 1) & 0xFFFFFu) > 4 )
                goto LABEL_42;
            }
            else if ( v34 == 112 )
            {
              if ( v38.m_steamid.m_comp == 0 || (*(&v38.m_steamid.m_comp + 1) & 0xFFFFF) != 0 )
                goto LABEL_42;
            }
            else if ( v34 == 48 && v38.m_steamid.m_comp == 0 )
            {
              goto LABEL_42;
            }
            if ( v36 != 0 )
            {
              if ( v34 == 64 || v34 == 48 )
              {
                address.m_AddrType = NetworkSystemAddressType_t::NSAT_PROXIED_GAMESERVER;
                address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
                address.m_steamID.m_steamChannel = 1;
                address.m_steamID.m_steamID = v38;
                goto LABEL_42;
              }
              v35 = NetworkSystemAddressType_t::NSAT_PROXIED_CLIENT;
            }
            else
            {
              v35 = NetworkSystemAddressType_t::NSAT_P2P;
            }
            address.m_AddrType = v35;
            address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
            address.m_steamID.m_steamChannel = 0;
            address.m_steamID.m_steamID = v38;
          }
LABEL_42:
          IPHostByteOrder = 0;
          if ( address.m_AddrType != NetworkSystemAddressType_t::NSAT_NETADR )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
    }
  }
}


// CDOTAGCServerSystem::UpdateCrashSentinel  (line 1223, @0x000000000299d190, libserver.so)  // inlines: ConvertToUint64, DOTAGameRules, ExtendedServerInfo_t, GetInt, GetLobby, GetString, ServerInfo_t, State_Get, _M_data, _M_rep, clear_has_tournament_id, clear_tournament_id, length, netadr_t, set_custom_game_id, set_engine, set_game_state, set_has_custom_game_id, set_has_engine, set_has_lobby_id, set_has_match_id, set_has_pid, set_has_sentinel_save_time, set_has_server_cluster, set_has_server_port, set_has_server_public_ip_addr, set_has_server_steam_id, set_lobby_id, set_match_id, set_pid, set_sentinel_save_time, set_server_cluster, set_server_port, set_server_public_ip_addr, set_server_steam_id, set_tournament_id, ~basic_string
// calls: CMsgGameserverCrash::Clear, netadr_t::SetIP, netadr_t::SetPort, netadr_t::SetType, netadr_t::GetIPHostByteOrder, __cxa_guard_acquire, getpid, time, google::protobuf::Message::ShortDebugString(void), Msg, std::string::_Rep::_M_dispose(std::allocator<char> const&), CMsgGameserverCrash::CMsgGameserverCrash (19 total)
// callers: CDOTAGCServerSystem::UpdateGCServerInfo
// strings: "FCVAR_NEVER_AS_STRING", "Saving crash sentinel: %s\n", "wt", "sv_cluster"
// globals: `guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState, CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState, `guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::sv_cluster, __dso_handle, CDOTAGCServerSystem::UpdateCrashSentinel(void)::sv_cluster
void __fastcall CDOTAGCServerSystem::UpdateCrashSentinel(CDOTAGCServerSystem *const this)
{
  char *m_pszString; // rax
  __int64 v3; // rbx
  DOTA_GameState v4; // r13d
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  double v12; // xmm0_8
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // [rsp+Fh] [rbp-A1h] BYREF
  std::string sState; // [rsp+10h] [rbp-A0h] BYREF
  INetSupport::ServerInfo_t serverInfo; // [rsp+20h] [rbp-90h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (sv_dota_crash_sentinel_filename.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( sv_dota_crash_sentinel_filename.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = sv_dota_crash_sentinel_filename.m_pParent->m_Value.m_pszString;
  }
  if ( *m_pszString != 0 )
  {
    if ( `guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState) != 0 )
    {
      CMsgGameserverCrash::CMsgGameserverCrash(&CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState);
      __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState);
      __cxa_atexit(
        CMsgGameserverCrash::~CMsgGameserverCrash,
        &CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState,
        &_dso_handle);
    }
    v3 = *(this + 260);
    if ( v3 != 0 )
    {
      if ( g_pGameRules != 0 )
        v4 = *&g_pGameRules[6].m_szQuestName[28];
      else
        v4 = DOTA_GameState::DOTA_GAMERULES_STATE_INIT;
      v5 = qword_4C49AE0;
      if ( v5 != (*(*v3 + 88LL))(*(this + 260)) || v4 != dword_4C49AE8 || qword_4C49AD8 != *(v3 + 216) )
      {
        CMsgGameserverCrash::Clear(&CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState);
        v6 = (*(*v3 + 88LL))(v3);
        v7 = dword_4C49AD0;
        dword_4C49AE8 = v4;
        qword_4C49AE0 = v6;
        qword_4C49AD8 = *(v3 + 216);
        v8 = *(v3 + 188);
        dword_4C49AD0 |= 7u;
        if ( v8 != 0 )
        {
          dword_4C49B00 = v8;
          v9 = v7 | 0x27;
        }
        else
        {
          dword_4C49B00 = 0;
          v9 = v7 & 0xFFFFFFD8 | 7;
        }
        dword_4C49B14 = 1;
        v10 = v9;
        BYTE1(v10) = BYTE1(v9) | 8;
        dword_4C49AD0 = v10;
        if ( *(v3 + 392) != 0 )
        {
          qword_4C49AF0 = *(v3 + 392);
          dword_4C49AD0 = v9 | 0x810;
        }
        if ( netsupport != 0 )
        {
          netadr_t::SetIP(&serverInfo.m_netAdr, 0);
          netadr_t::SetPort(&serverInfo.m_netAdr, 0);
          netadr_t::SetType(&serverInfo.m_netAdr, NA_IP);
          netadr_t::SetIP(&serverInfo.m_netAdrOnline, 0);
          netadr_t::SetPort(&serverInfo.m_netAdrOnline, 0);
          netadr_t::SetType(&serverInfo.m_netAdrOnline, NA_IP);
          (*(*netsupport + 112LL))(netsupport, &serverInfo);
          dword_4C49B04 = netadr_t::GetIPHostByteOrder(&serverInfo.m_netAdrOnline);
          dword_4C49AD0 |= 0x180u;
          dword_4C49B08 = serverInfo.m_nPort;
        }
        if ( `guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::sv_cluster == 0
          && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::sv_cluster) != 0 )
        {
          ConVarRef::ConVarRef(&CDOTAGCServerSystem::UpdateCrashSentinel(void)::sv_cluster, "sv_cluster");
          __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateCrashSentinel(void)::sv_cluster);
        }
        dword_4C49AD0 |= 0x200u;
        dword_4C49B0C = CDOTAGCServerSystem::UpdateCrashSentinel(void)::sv_cluster.m_pConVarState->m_Value.m_nValue;
        dword_4C49B10 = getpid();
        v11 = *(this + 236);
        dword_4C49AD0 |= 0x440u;
        qword_4C49AF8 = v11;
        dword_4C49AEC = time(0);
        dword_4C49AD0 |= 8u;
        google::protobuf::Message::ShortDebugString(&sState);
        *&v12 = Msg("Saving crash sentinel: %s\n", sState._M_dataplus._M_p).m128_u64[0];
        v13 = "FCVAR_NEVER_AS_STRING";
        if ( (sv_dota_crash_sentinel_filename.m_nFlags & 0x1000) == 0 )
        {
          v13 = "";
          if ( sv_dota_crash_sentinel_filename.m_pParent->m_Value.m_pszString != 0 )
            v13 = sv_dota_crash_sentinel_filename.m_pParent->m_Value.m_pszString;
        }
        v14 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, v13, "wt", 0, v12);
        v15 = v14;
        if ( v14 != 0 )
        {
          (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
            &g_pFullFileSystem->IBaseFileSystem,
            sState._M_dataplus._M_p,
            *(sState._M_dataplus._M_p - 6),
            v14);
          (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v15);
        }
        std::string::_Rep::_M_dispose(sState._M_dataplus._M_p - 24, &v16);
      }
    }
    else if ( (dword_4C49AD0 & 2) != 0 )
    {
      CMsgGameserverCrash::Clear(&CDOTAGCServerSystem::UpdateCrashSentinel(void)::msgState);
      DeleteCrashSentinel();
    }
  }
}


// CDOTAGCServerSystem::UpdateGCServerInfo  (line 1298, @0x00000000029a4100, libserver.so)  // inlines: ConvertToUint64, DOTAGameRules, ExtendedServerInfo_t, FreeProto, GetBuildVersionForGCMessage, GetFloat, GetInt, GetString, State_Get, State_IsAfter, State_IsAfterInitState, State_Order, _V_strcmp, server_type, set_allow_custom_games, set_assigned_server_tv_port, set_has_allow_custom_games, set_has_assigned_server_tv_port, set_has_parent_relay_count, set_has_relay_clients_connected, set_has_relay_slots_max, set_has_relayed_game_server_steam_id, set_has_relays_connected, set_has_server_cluster, set_has_server_game_time, set_has_server_hibernation, set_has_server_key, set_has_server_loadavg, set_has_server_port, set_has_server_private_ip_addr, set_has_server_public_ip_addr, set_has_server_region, set_has_server_relay_connected_steam_id, set_has_server_steamdatagram_port, set_has_server_tv_broadcast_time, set_has_server_tv_port, set_has_server_type, set_has_server_version, set_has_tv_secret_code, set_parent_relay_count, set_relay_clients_connected, set_relay_slots_max, set_relayed_game_server_steam_id, set_relays_connected, set_server_cluster, set_server_game_time, set_server_hibernation, set_server_key, set_server_loadavg, set_server_port, set_server_private_ip_addr, set_server_public_ip_addr, set_server_region, set_server_relay_connected_steam_id, set_server_steamdatagram_port, set_server_tv_broadcast_time, set_server_tv_port, set_server_type, set_server_version, set_tv_secret_code, ~CProtoBufMsg
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, CMsgGameServerInfo::CMsgGameServerInfo, __cxa_atexit, IsBackgroundMap, CDOTAGCServerSystem::SetSessionNeed, CDOTAGCServerSystem::UpdateCrashSentinel, GCClientSystem, Plat_FloatTime, CDOTAGamerules::GetDOTATime, strcmp (28 total)
// callers: CDOTAGCServerSystem::FrameBoundary, CDOTAGCServerSystem::UpdateServerDetails, CDOTAGCServerSystem::ReceivedWelcome, CDOTAGCServerSystem::GameRules_State_Enter, CDOTAGCServerSystem::SetHibernation
// strings: "sv_search_key", "tv_delay", "sv_region", "sv_steamdatagramtransport_port", "sv_cluster", "tv_port"
// globals: `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key, `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_region, `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_delay, `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg, s_bIsTerminating, CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key, CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg, __dso_handle (19 total)
void __fastcall CDOTAGCServerSystem::UpdateGCServerInfo(CDOTAGCServerSystem *const this, bool forced)
{
  double v4; // xmm0_8
  double v5; // xmm2_8
  __int64 v6; // rdx
  int v7; // eax
  __m128i v8; // xmm0
  float v9; // r15d
  int v10; // eax
  __m128d v11; // xmm1
  float v12; // xmm4_4
  unsigned int IPHostByteOrder; // eax
  CMsgGameServerInfo *m_pProtoBufBody; // rdx
  unsigned int v15; // eax
  CMsgGameServerInfo *v16; // rdx
  CMsgGameServerInfo *v17; // rax
  CMsgGameServerInfo *v18; // rax
  CMsgGameServerInfo *v19; // rax
  CMsgGameServerInfo *v20; // rax
  char *m_pszString; // rsi
  CMsgGameServerInfo *v22; // rax
  bool m_bIsHibernating; // dl
  CMsgGameServerInfo *v24; // rax
  int m_nValue; // edx
  CMsgGameServerInfo *v26; // rax
  uint64 m_nTVSecretCode; // rdx
  CMsgGameServerInfo *v28; // rax
  CMsgGameServerInfo *v29; // rax
  CMsgGameServerInfo *v30; // rax
  CHLTVDirector *v31; // rax
  CHLTVDirector *v32; // rax
  float BroadcastTime; // xmm0_4
  CMsgGameServerInfo *v34; // rax
  CMsgGameServerInfo *v35; // rax
  uint64 m_serverSteamID; // rax
  CMsgGameServerInfo *v37; // rdx
  CMsgGameServerInfo *v38; // rax
  __int64 v39; // rdx
  CMsgGameServerInfo *v40; // rax
  CMsgGameServerInfo *v41; // rax
  CMsgGameServerInfo *v42; // rax
  int m_nRelaySlotsMax; // edx
  CMsgGameServerInfo *v44; // rax
  int m_nRelaysConnected; // edx
  CMsgGameServerInfo *v46; // rax
  int m_nRelayClientsConnected; // edx
  int v48; // eax
  CMsgGameServerInfo *v49; // rdx
  bool IsValid; // al
  int v51; // edx
  CMsgGameServerInfo *v52; // rax
  CGCClientSystem *v53; // rax
  bool v54; // zf
  CMsgGameServerInfo *v55; // rax
  CMsgGameServerInfo *v56; // rax
  float v57; // xmm0_4
  double cpuUsageb; // [rsp+8h] [rbp-D8h]
  double cpuUsage; // [rsp+8h] [rbp-D8h]
  float cpuUsagea; // [rsp+8h] [rbp-D8h]
  INetSupport::BaseServerInfo_t baseServerInfo; // [rsp+10h] [rbp-D0h] BYREF
  GCSDK::CProtoBufMsg<CMsgGameServerInfo> msg; // [rsp+40h] [rbp-A0h] BYREF
  INetSupport::ExtendedServerInfo_t extendedServerInfo; // [rsp+70h] [rbp-70h] BYREF
  unsigned __int64 v64; // [rsp+A8h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  if ( `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key) != 0 )
  {
    ConVarRef::ConVarRef(&CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key, "sv_search_key");
    __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key);
  }
  if ( `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_region == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_region) != 0 )
  {
    ConVarRef::ConVarRef(&CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_region, "sv_region");
    __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_region);
  }
  if ( `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_delay == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_delay) != 0 )
  {
    ConVarRef::ConVarRef(&CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_delay, "tv_delay");
    __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_delay);
  }
  if ( `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg) != 0 )
  {
    CMsgGameServerInfo::CMsgGameServerInfo(&CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg);
    __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg);
    __cxa_atexit(
      CMsgGameServerInfo::~CMsgGameServerInfo,
      &CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg,
      &_dso_handle);
  }
  if ( netsupport != 0 && !s_bIsTerminating && !IsBackgroundMap() )
  {
    CDOTAGCServerSystem::SetSessionNeed(this);
    CDOTAGCServerSystem::UpdateCrashSentinel(this);
    if ( *(GCClientSystem() + 333) == 0 )
    {
      (*(*netsupport + 96LL))(netsupport, &baseServerInfo);
      if ( (*(&baseServerInfo + 32) & 1) != 0 || (*(&baseServerInfo + 32) & 2) != 0 )
      {
        v4 = Plat_FloatTime();
        v5 = v4;
        if ( g_pGameRules == 0 )
          goto LABEL_49;
        v6 = *&g_pGameRules[6].m_szQuestName[28];
        v7 = 0;
        if ( v6 <= 0xA )
          v7 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v6];
        if ( DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[0] < v7 )
        {
          cpuUsageb = v4;
          *v8.m128i_i32 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
          v5 = cpuUsageb;
          v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
        }
        else
        {
LABEL_49:
          v9 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
        }
        if ( dword_4C49A1C != 0 )
        {
          if ( dword_4C49A1C != 1 || (*(&baseServerInfo + 32) & 1) != 0 )
          {
LABEL_27:
            if ( !forced )
            {
              cpuUsage = v5;
              v10 = strcmp(
                      *qword_4C49A10,
                      CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key.m_pConVarState->m_Value.m_pszString);
              v5 = cpuUsage;
              if ( v10 == 0
                && byte_4C49A18 == g_pSource2ServerInternal->m_bIsHibernating
                && dword_4C49A3C == baseServerInfo.m_nRelaysConnected
                && dword_4C49A48 == baseServerInfo.m_nRelayClientsConnected
                && qword_4C49A30 == baseServerInfo.m_serverSteamID
                && dword_4C49A04 == baseServerInfo.m_nHLTVPort
                && cpuUsage <= *(this + 456)
                && (CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_flGCGameTime != 0.0 || v9 == 0.0) )
              {
                CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_flGCGameTime = v9;
                return;
              }
            }
          }
        }
        else if ( (*(&baseServerInfo + 32) & 1) == 0 )
        {
          goto LABEL_27;
        }
        CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_flGCGameTime = v9;
        v11 = _mm_cvtps_pd(LODWORD(dota_update_gc_server_info.m_pParent->m_Value.m_fValue));
        v11.m128d_f64[0] = v11.m128d_f64[0] + v5;
        v12 = _mm_movedup_pd(v11).m128d_f64[0];
        *(this + 456) = v12;
        cpuUsagea = Plat_GetCPUUsage();
        if ( `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_cluster == 0
          && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_cluster) != 0 )
        {
          ConVarRef::ConVarRef(&CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_cluster, "sv_cluster");
          __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_cluster);
        }
        if ( `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_steamdatagramtransport_port == 0
          && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_steamdatagramtransport_port) != 0 )
        {
          ConVarRef::ConVarRef(
            &CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_steamdatagramtransport_port,
            "sv_steamdatagramtransport_port");
          __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_steamdatagramtransport_port);
        }
        if ( `guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_port == 0
          && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_port) != 0 )
        {
          ConVarRef::ConVarRef(&CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_port, "tv_port");
          __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_port);
        }
        netadr_t::netadr_t(&extendedServerInfo.m_netAdr);
        netadr_t::netadr_t(&extendedServerInfo.m_netAdrOnline);
        (*(*netsupport + 104LL))(netsupport, &extendedServerInfo);
        GCSDK::CProtoBufMsg<CMsgGameServerInfo>::CProtoBufMsg(&msg, 0x119Cu);
        IPHostByteOrder = netadr_t::GetIPHostByteOrder(&extendedServerInfo.m_netAdrOnline);
        m_pProtoBufBody = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 1u;
        *(m_pProtoBufBody + 6) = IPHostByteOrder;
        v15 = netadr_t::GetIPHostByteOrder(&extendedServerInfo.m_netAdr);
        v16 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 2u;
        *(v16 + 7) = v15;
        v17 = msg.m_pProtoBufBody;
        LODWORD(v16) = baseServerInfo.m_nPort;
        *(msg.m_pProtoBufBody + 4) |= 4u;
        *(v17 + 8) = v16;
        v18 = msg.m_pProtoBufBody;
        LODWORD(v16) = baseServerInfo.m_nHLTVPort;
        *(msg.m_pProtoBufBody + 4) |= 8u;
        *(v18 + 9) = v16;
        LODWORD(v16) = CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_port.m_pConVarState->m_Value.m_nValue;
        v19 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x10u;
        *(v19 + 10) = v16;
        LODWORD(v16) = CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_steamdatagramtransport_port.m_pConVarState->m_Value.m_nValue;
        v20 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x20u;
        *(v20 + 11) = v16;
        m_pszString = CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_search_key.m_pConVarState->m_Value.m_pszString;
        v22 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x40u;
        std::string::assign(*(v22 + 6), m_pszString);
        m_bIsHibernating = g_pSource2ServerInternal->m_bIsHibernating;
        v24 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x80u;
        *(v24 + 56) = m_bIsHibernating;
        m_nValue = 0;
        if ( CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_region.m_pConVarState->m_Value.m_nValue != -1 )
          m_nValue = CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_region.m_pConVarState->m_Value.m_nValue;
        v26 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x200u;
        *(v26 + 16) = m_nValue;
        m_nTVSecretCode = baseServerInfo.m_nTVSecretCode;
        v28 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x400u;
        *(v28 + 17) = cpuUsagea;
        v29 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x80000u;
        *(v29 + 14) = m_nTVSecretCode;
        LODWORD(m_nTVSecretCode) = CDOTAGCServerSystem::UpdateGCServerInfo(bool)::sv_cluster.m_pConVarState->m_Value.m_nValue;
        v30 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x200000u;
        *(v30 + 31) = m_nTVSecretCode;
        if ( HLTVDirector() != 0 && (v31 = HLTVDirector(), (*(v31->_vptr_IGameEventListener2 + 8))(v31) != 0) )
        {
          v32 = HLTVDirector();
          BroadcastTime = CHLTVDirector::GetBroadcastTime(v32);
          v34 = msg.m_pProtoBufBody;
          *(msg.m_pProtoBufBody + 4) |= 0x800u;
          *(v34 + 18) = BroadcastTime;
        }
        else
        {
          v56 = msg.m_pProtoBufBody;
          v57 = -CDOTAGCServerSystem::UpdateGCServerInfo(bool)::tv_delay.m_pConVarState->m_Value.m_fValue;
          *(msg.m_pProtoBufBody + 4) |= 0x800u;
          *(v56 + 18) = v57;
        }
        v35 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x1000u;
        *(v35 + 19) = v9;
        m_serverSteamID = baseServerInfo.m_serverSteamID;
        if ( baseServerInfo.m_serverSteamID != 0 )
        {
          v37 = msg.m_pProtoBufBody;
          *(msg.m_pProtoBufBody + 4) |= 0x2000u;
          *(v37 + 10) = m_serverSteamID;
          v38 = msg.m_pProtoBufBody;
          v39 = *(this + 237);
          *(msg.m_pProtoBufBody + 4) |= 0x20000u;
          *(v38 + 12) = v39;
          v40 = msg.m_pProtoBufBody;
          LODWORD(v39) = *(this + 476);
          *(msg.m_pProtoBufBody + 4) |= 0x40000u;
          *(v40 + 27) = v39;
        }
        if ( (*(&baseServerInfo + 32) & 2) != 0 )
        {
          v41 = msg.m_pProtoBufBody;
          *(msg.m_pProtoBufBody + 4) |= 0x100u;
          *(v41 + 15) = 2;
        }
        else
        {
          v54 = (*(&baseServerInfo + 32) & 1) == 0;
          v55 = msg.m_pProtoBufBody;
          *(msg.m_pProtoBufBody + 4) |= 0x100u;
          *(v55 + 15) = !v54;
        }
        v42 = msg.m_pProtoBufBody;
        m_nRelaySlotsMax = baseServerInfo.m_nRelaySlotsMax;
        *(msg.m_pProtoBufBody + 4) |= 0x4000u;
        *(v42 + 22) = m_nRelaySlotsMax;
        v44 = msg.m_pProtoBufBody;
        m_nRelaysConnected = baseServerInfo.m_nRelaysConnected;
        *(msg.m_pProtoBufBody + 4) |= 0x8000u;
        *(v44 + 23) = m_nRelaysConnected;
        v46 = msg.m_pProtoBufBody;
        m_nRelayClientsConnected = baseServerInfo.m_nRelayClientsConnected;
        *(msg.m_pProtoBufBody + 4) |= 0x10000u;
        *(v46 + 26) = m_nRelayClientsConnected;
        v48 = (*(*engine + 712LL))(engine);
        v49 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x100000u;
        *(v49 + 30) = v48;
        IsValid = CMsgGameServerInfo_CustomGames_IsValid(dota_server_allow_custom_games.m_pParent->m_Value.m_nValue);
        v51 = 0;
        if ( IsValid )
          v51 = dota_server_allow_custom_games.m_pParent->m_Value.m_nValue;
        v52 = msg.m_pProtoBufBody;
        *(msg.m_pProtoBufBody + 4) |= 0x400000u;
        *(v52 + 32) = v51;
        CMsgGameServerInfo::CopyFrom(&CDOTAGCServerSystem::UpdateGCServerInfo(bool)::s_lastMsg, msg.m_pProtoBufBody);
        v53 = GCClientSystem();
        CGCClientSystem::BSendMessage(v53, &msg);
        msg._vptr_CProtoBufMsgBase = &off_4304BD0;
        if ( msg.m_pProtoBufBody != 0 )
        {
          GCSDK::CProtoBufMsgMemoryPoolBase::Free(
            GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool,
            msg.m_pProtoBufBody);
          msg.m_pProtoBufBody = 0;
        }
        GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
      }
    }
  }
}


// CDOTAGCServerSystem::UpdateServerDetails  (line 1453, @0x00000000029a49b0, libserver.so)
// calls: CDOTAGCServerSystem::UpdateGCServerInfo
void __fastcall CDOTAGCServerSystem::UpdateServerDetails(CDOTAGCServerSystem *const this)
{
  CDOTAGCServerSystem::UpdateGCServerInfo(this, 0);
}


// CDOTAGCServerSystem::SendLoadFailure  (line 1458, @0x0000000002992030, libserver.so)  // inlines: Add, AllocProto, CProtoBufMsg, CVProfScope, ConvertToUint64, CopyArray, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsEnabled, Lock, MoveArray, Reserve, Unlock, add_abandoned_loaders, add_failed_loaders, memcpy, operator(), ~CProtoBufMsg, ~CVProfScope, ~basic_string
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgDOTAPlayerFailedToConnect::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope (25 total)
// callers: CDOTAGamerules::State_Think_DISCONNECT, CDOTAGamerules::WaitForPlayersFailure
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Sending PlayerFailedToConnect to the GC\n"
// globals: GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool
void __fastcall CDOTAGCServerSystem::SendLoadFailure(
        CDOTAGCServerSystem *const this,
        const CUtlVector<CSteamID,CUtlMemory<CSteamID,int> > *const failedLoaders,
        const CUtlVector<CSteamID,CUtlMemory<CSteamID,int> > *const abandonedLoaders)
{
  int m_enabled; // ebx
  bool v6; // zf
  bool v7; // bl
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect> *v8; // r12
  const google::protobuf::Descriptor *v9; // rax
  const google::protobuf::Descriptor *v10; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v12; // rax
  __int64 v13; // r13
  int i; // r12d
  CMsgDOTAPlayerFailedToConnect *m_pProtoBufBody; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // edx
  __int64 v20; // r13
  int j; // r12d
  CMsgDOTAPlayerFailedToConnect *v22; // rbx
  __int64 v23; // rdx
  CSteamID::SteamID_t v24; // r15
  CSteamID::SteamID_t *v25; // rax
  int v26; // eax
  int v27; // edx
  CGCClientSystem *v28; // rax
  void *src; // [rsp+10h] [rbp-90h]
  uint32 unTargetHighb; // [rsp+18h] [rbp-88h]
  uint32 unTargetHigh[2]; // [rsp+18h] [rbp-88h]
  void *unTargetHigha; // [rsp+18h] [rbp-88h]
  char v33; // [rsp+2Fh] [rbp-71h] BYREF
  const char *v34; // [rsp+30h] [rbp-70h] BYREF
  GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect> msg; // [rsp+40h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1BB0u);
  msg._vptr_CProtoBufMsgBase = &off_4304C10;
  msg.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v6 = m_enabled == 0;
  v7 = m_enabled != 0;
  if ( !v6 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_bRegisteredWithMemoryPoolMgr )
    {
      v8 = operator new(0x28u);
      v9 = CMsgDOTAPlayerFailedToConnect::descriptor();
      unTargetHighb = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v9->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v10 = CMsgDOTAPlayerFailedToConnect::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v10->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v8, Int32, unTargetHighb);
      v8->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306390;
      GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool = v8;
      v12 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v12, v8);
      GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool);
  if ( v7 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  v13 = 0;
  for ( i = 0; failedLoaders->m_Size > i; v17[v16] = *unTargetHigh )
  {
    m_pProtoBufBody = msg.m_pProtoBufBody;
    v16 = *(msg.m_pProtoBufBody + 8);
    *unTargetHigh = failedLoaders->m_Memory.m_pMemory[v13].m_steamid.m_unAll64Bits;
    v17 = *(msg.m_pProtoBufBody + 3);
    if ( v16 == *(msg.m_pProtoBufBody + 9) )
    {
      src = *(msg.m_pProtoBufBody + 3);
      v18 = v16 + 1;
      v19 = 2 * v16;
      if ( v18 >= v19 )
        v19 = v18;
      if ( v19 < 4 )
        v19 = 4;
      *(msg.m_pProtoBufBody + 9) = v19;
      v17 = operator new[](8LL * v19);
      *(m_pProtoBufBody + 3) = v17;
      v16 = *(m_pProtoBufBody + 8);
      if ( src != 0 )
      {
        memcpy(v17, src, 8 * v16);
        operator delete[](src);
        v17 = *(m_pProtoBufBody + 3);
        v16 = *(m_pProtoBufBody + 8);
      }
    }
    ++i;
    *(m_pProtoBufBody + 8) = v16 + 1;
    ++v13;
  }
  v20 = 0;
  for ( j = 0; abandonedLoaders->m_Size > j; v25[v23] = v24 )
  {
    v22 = msg.m_pProtoBufBody;
    v23 = *(msg.m_pProtoBufBody + 12);
    v24.m_comp = abandonedLoaders->m_Memory.m_pMemory[v20].m_steamid;
    v25 = *(msg.m_pProtoBufBody + 5);
    if ( v23 == *(msg.m_pProtoBufBody + 13) )
    {
      unTargetHigha = *(msg.m_pProtoBufBody + 5);
      v26 = v23 + 1;
      v27 = 2 * v23;
      if ( v26 >= v27 )
        v27 = v26;
      if ( v27 < 4 )
        v27 = 4;
      *(msg.m_pProtoBufBody + 13) = v27;
      v25 = operator new[](8LL * v27);
      *(v22 + 5) = v25;
      v23 = *(v22 + 12);
      if ( unTargetHigha != 0 )
      {
        memcpy(v25, unTargetHigha, 8 * v23);
        operator delete[](unTargetHigha);
        v25 = *(v22 + 5);
        v23 = *(v22 + 12);
      }
    }
    ++j;
    ++v20;
    *(v22 + 12) = v23 + 1;
  }
  Msg("Sending PlayerFailedToConnect to the GC\n");
  google::protobuf::Message::ShortDebugString(&v34);
  Msg("  %s\n", v34);
  std::string::_Rep::_M_dispose(v34 - 24, &v33);
  v28 = GCClientSystem();
  CGCClientSystem::BSendMessage(v28, &msg);
  msg._vptr_CProtoBufMsgBase = &off_4304C10;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
}


// CDOTAGCServerSystem::ShouldHibernate  (line 1476, @0x0000000002991ef0, libserver.so)  // inlines: DOTAGameRules, GetBool, GetFloat, GetInt, GetLobby
// calls: Plat_FloatTime, Msg, GCClientSystem, GCSDK::CGCClient::SendHello, QuitServer
// strings: "Sending keepalive hello to GC\n", "Terminating due to %d missing responses from the GC\n"
bool __fastcall CDOTAGCServerSystem::ShouldHibernate(CDOTAGCServerSystem *const this)
{
  __int64 v1; // rbx
  bool result; // al
  double v3; // xmm0_8
  ConVar *m_pParent; // rax
  __m128d v5; // xmm0
  int v6; // esi
  CGCClientSystem *v7; // rax

  v1 = *(this + 260);
  if ( g_pSource2ServerInternal->m_bIsHibernating && Plat_FloatTime() >= *(this + 482) )
  {
    v3 = Plat_FloatTime();
    m_pParent = dota_update_gc_connection_check_count.m_pParent;
    v5.m128d_f64[0] = v3 + dota_update_gc_connection_check_time.m_pParent->m_Value.m_fValue;
    *(this + 482) = _mm_movedup_pd(v5).m128d_f64[0];
    if ( m_pParent->m_Value.m_nValue != 0 )
    {
      v6 = *(this + 483);
      *(this + 483) = v6 + 1;
      if ( v6 == m_pParent->m_Value.m_nValue )
      {
        Msg("Terminating due to %d missing responses from the GC\n", v6);
        QuitServer();
      }
      else
      {
        Msg("Sending keepalive hello to GC\n");
        v7 = GCClientSystem();
        GCSDK::CGCClient::SendHello((v7 + 24));
      }
    }
  }
  result = 0;
  if ( g_pGameRules != 0
    && *&g_pGameRules[6].m_szQuestName[28] == 0
    && v1 == 0
    && dota_force_bot_cycle.m_pParent->m_Value.m_nValue == 0 )
  {
    return g_CustomGameCache.m_pInstallJob == 0;
  }
  return result;
}


// CDOTAGCServerSystem::ReceivedWelcome  (line 1508, @0x00000000029a49d0, libserver.so)  // inlines: operator=
// calls: std::string::assign(std::string const&), CDOTAGCServerSystem::UpdateGCServerInfo
// callers: CGCClientJobServerWelcome::BYieldingRunJobFromMsg
// globals: s_DOTAGCServerSystem
void __fastcall CDOTAGCServerSystem::ReceivedWelcome(
        CDOTAGCServerSystem *const this,
        const std::string *const save_game_key)
{
  std::string::assign(this + 262, save_game_key);
  if ( *(this + 483) != 0 )
    *(this + 483) = 0;
  CDOTAGCServerSystem::UpdateGCServerInfo(s_DOTAGCServerSystem, 1);
}


// CDOTAGCServerSystem::UpdateLiveFantasyStats  (line 1521, @0x0000000002992f10, libserver.so)  // inlines: CGCClientJob, DOTAGameRules, GCClientJobLambda, GetFloat, SetJobName, StartLambdaJob<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>
// calls: CDOTAGCServerSystem::IsValidFantasyGame, GCSDK::CGCClient::Get, operator new, GCSDK::CJob::CJob, GCSDK::CJob::StartJob, operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::FrameUpdatePostEntityThink
// strings: "UpdateLiveFantasyStats"
void __fastcall CDOTAGCServerSystem::UpdateLiveFantasyStats(CDOTAGCServerSystem *const this)
{
  CGameRules *v2; // rax
  GCSDK::CGCClient *v3; // r13
  GCSDK::CJob *v4; // r12

  if ( *(this + 477) <= gpGlobals->realtime && g_pDOTAPlayerResource != 0 )
  {
    v2 = g_pGameRules;
    if ( g_pGameRules != 0 )
    {
      *(this + 477) = gpGlobals->realtime + dota_fantasy_stat_update_interval_s.m_pParent->m_Value.m_fValue;
      if ( *&v2[6].m_szQuestName[28] == 5 && CDOTAGCServerSystem::IsValidFantasyGame(this) )
      {
        v3 = GCSDK::CGCClient::Get();
        v4 = operator new(0x148u);
        GCSDK::CJob::CJob(v4, (v3 + 48));
        v4->_vptr_CJob = &off_43029B0;
        v4[1]._vptr_CJob = v3;
        *(&v4[1] + 2) = 4;
        v4[1].m_JobID = this;
        v4->m_pchJobName = "UpdateLiveFantasyStats";
        GCSDK::CJob::StartJob(v4, 0);
      }
    }
  }
}


// CDOTAGCServerSystem::PopulateFantasyStats  (line 1566, @0x0000000002992410, libserver.so)  // inlines: GetTVDelay, set_camps_stacked, set_cs, set_deaths, set_delay, set_first_blood, set_gpm, set_has_camps_stacked, set_has_cs, set_has_deaths, set_has_delay, set_has_first_blood, set_has_gpm, set_has_kills, set_has_league_id, set_has_match_completed, set_has_match_id, set_has_player_account_id, set_has_roshan_kills, set_has_runes_grabbed, set_has_stuns, set_has_team_id, set_has_teamfight_participation, set_has_tower_kills, set_has_wards_placed, set_kills, set_league_id, set_match_completed, set_match_id, set_player_account_id, set_roshan_kills, set_runes_grabbed, set_stuns, set_team_id, set_teamfight_participation, set_tower_kills, set_wards_placed
// calls: CDOTA_PlayerResource::GetSteamAccountID, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetKills, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetDenies, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_PlayerResource::GetTowerKills, CDOTA_PlayerResource::GetRoshanKills, CDOTA_PlayerResource::GetTeamFightParticipation, CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetCampsStacked (15 total)
// callers: GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>::BYieldingRunJob, CDOTAGCServerSystem::MatchSignOut
void __fastcall CDOTAGCServerSystem::PopulateFantasyStats(
        CDOTAGCServerSystem *const this,
        CMsgDOTAFantasyPlayerStats *pStats,
        int nPlayerID,
        const CDOTALobby *pLobby,
        bool bCompleted)
{
  AccountID_t SteamAccountID; // eax
  int v10; // edx
  CDOTA_PlayerResource *v11; // rdi
  __int64 v12; // rax
  int Team; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  const CDOTA_PlayerResource *v18; // rdi
  int Kills; // eax
  const CDOTA_PlayerResource *v20; // rdi
  int Deaths; // eax
  CDOTA_PlayerResource *v22; // rdi
  int LastHits; // r14d
  int Denies; // eax
  CDOTA_PlayerResource *v25; // rdi
  float GoldPerMin; // xmm0_4
  const CDOTA_PlayerResource *v27; // rdi
  int TowerKills; // eax
  const CDOTA_PlayerResource *v29; // rdi
  int RoshanKills; // eax
  CDOTA_PlayerResource *v31; // rdi
  float TeamFightParticipation; // xmm0_4
  CDOTA_PlayerResource *v33; // rdi
  int ObserverWardsPlaced; // eax
  CDOTA_PlayerResource *v35; // rdi
  int CampsStacked; // eax
  CDOTA_PlayerResource *v37; // rdi
  int RunePickups; // eax
  CDOTA_PlayerResource *v39; // rdi
  bool FirstBloodClaimed; // al
  const CDOTA_PlayerResource *v41; // rdi
  float Stuns; // xmm0_4

  SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, nPlayerID);
  v10 = *(pStats + 4);
  *(pStats + 8) = SteamAccountID;
  v11 = g_pDOTAPlayerResource;
  *(pStats + 36) = bCompleted;
  *(pStats + 4) = v10 | 5;
  v12 = *(this + 242);
  *(pStats + 4) = v10 | 7;
  *(pStats + 3) = v12;
  Team = CDOTA_PlayerResource::GetTeam(v11, nPlayerID);
  v14 = *(pStats + 4);
  *(pStats + 10) = Team;
  *(pStats + 4) = v14 | 8;
  v15 = *(pLobby + 66);
  *(pStats + 4) = v14 | 0x18;
  *(pStats + 11) = v15;
  v16 = 10;
  v17 = *(pLobby + 75);
  if ( v17 != 0 )
  {
    LOBYTE(v16) = 120;
    if ( v17 == 2 )
      v16 = 300;
  }
  v18 = g_pDOTAPlayerResource;
  *(pStats + 4) = v14 | 0x38;
  *(pStats + 12) = v16;
  Kills = CDOTA_PlayerResource::GetKills(v18, nPlayerID);
  v20 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x100u;
  *(pStats + 15) = Kills;
  Deaths = CDOTA_PlayerResource::GetDeaths(v20, nPlayerID);
  v22 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x200u;
  *(pStats + 16) = Deaths;
  LastHits = CDOTA_PlayerResource::GetLastHits(v22, nPlayerID);
  Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, nPlayerID);
  v25 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x400u;
  *(pStats + 17) = Denies + LastHits;
  GoldPerMin = CDOTA_PlayerResource::GetGoldPerMin(v25, nPlayerID);
  v27 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x800u;
  *(pStats + 18) = GoldPerMin;
  TowerKills = CDOTA_PlayerResource::GetTowerKills(v27, nPlayerID);
  v29 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x1000u;
  *(pStats + 19) = TowerKills;
  RoshanKills = CDOTA_PlayerResource::GetRoshanKills(v29, nPlayerID);
  v31 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x2000u;
  *(pStats + 20) = RoshanKills;
  TeamFightParticipation = CDOTA_PlayerResource::GetTeamFightParticipation(v31, nPlayerID);
  v33 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x4000u;
  *(pStats + 21) = TeamFightParticipation;
  ObserverWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(v33, nPlayerID);
  v35 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x8000u;
  *(pStats + 22) = ObserverWardsPlaced;
  CampsStacked = CDOTA_PlayerResource::GetCampsStacked(v35, nPlayerID);
  v37 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x10000u;
  *(pStats + 23) = CampsStacked;
  RunePickups = CDOTA_PlayerResource::GetRunePickups(v37, nPlayerID);
  v39 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x20000u;
  *(pStats + 24) = RunePickups;
  FirstBloodClaimed = CDOTA_PlayerResource::GetFirstBloodClaimed(v39, nPlayerID);
  v41 = g_pDOTAPlayerResource;
  *(pStats + 4) |= 0x40000u;
  *(pStats + 25) = FirstBloodClaimed;
  Stuns = CDOTA_PlayerResource::GetStuns(v41, nPlayerID);
  *(pStats + 4) |= 0x80000u;
  *(pStats + 26) = Stuns;
}


// CGCServerJobSendRealtimeStats::~CGCServerJobSendRealtimeStats  (line 1589, @0x00000000029ab910, libserver.so)  // inlines: FreeProto, ~CGCClientJob, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, GCSDK::CJob::~CJob
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool
void __fastcall CGCServerJobSendRealtimeStats::~CGCServerJobSendRealtimeStats(
        CGCServerJobSendRealtimeStats *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CJob = off_4304ED0;  // vptr: CGCServerJobSendRealtimeStats
  m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
  this->m_msg._vptr_CProtoBufMsgBase = &off_4304E90;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&this->m_msg);
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCServerJobSendRealtimeStats::~CGCServerJobSendRealtimeStats  (line 1589, @0x00000000029ab9d0, libserver.so)  // inlines: FreeProto, ~CGCClientJob, ~CGCServerJobSendRealtimeStats, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, GCSDK::CJob::~CJob, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool
void __fastcall CGCServerJobSendRealtimeStats::~CGCServerJobSendRealtimeStats(
        CGCServerJobSendRealtimeStats *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CJob = off_4304ED0;  // vptr: CGCServerJobSendRealtimeStats
  m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
  this->m_msg._vptr_CProtoBufMsgBase = &off_4304E90;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&this->m_msg);
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCServerJobSendRealtimeStats::CGCServerJobSendRealtimeStats  (line 1593, @0x00000000029aee50, libserver.so)  // inlines: Add, AllocProto, CGCClientJob, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufMsg, CVProfScope, EnterScope, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, Unlock, mutable_current, mutable_delayed, set_has_current, set_has_delayed, ~CGCClientJob, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CJob::CJob, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope, CMsgDOTARealtimeGameStatsTerse::CopyFrom, CMsgDOTARealtimeGameStats::CopyFrom, operator new, CMsgServerToGCRealtimeStats::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int) (25 total)
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
// strings: "Server Simulation", "CGCServerJobSendRealtimeStats", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool
void __fastcall CGCServerJobSendRealtimeStats::CGCServerJobSendRealtimeStats(
        CGCServerJobSendRealtimeStats *const this,
        GCSDK::CGCClient *pGCClient,
        const CMsgDOTARealtimeGameStatsTerse *pMsgStatsDelayed,
        const CMsgDOTARealtimeGameStats *pMsgStatsCurrent)
{
  int m_enabled; // eax
  bool v9; // r13
  uint64 m_numTimeBaseTicks; // rcx
  int v11; // r13d
  CMsgServerToGCRealtimeStats *m_pProtoBufBody; // r13
  CMsgDOTARealtimeGameStatsTerse *v13; // rdi
  CMsgServerToGCRealtimeStats *v14; // r13
  CMsgDOTARealtimeGameStats *v15; // rdi
  const google::protobuf::Descriptor *v16; // rax
  const google::protobuf::Descriptor *v17; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v19; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v21; // rax
  CMsgDOTARealtimeGameStats *v22; // r14
  uint32 unTargetHigh[2]; // [rsp+8h] [rbp-48h]
  uint32 unTargetHigha; // [rsp+8h] [rbp-48h]
  CMsgDOTARealtimeGameStatsTerse *unTargetHighb; // [rsp+8h] [rbp-48h]
  unsigned __int64 VProf_1597; // [rsp+18h] [rbp-38h]
  bool VProf_1597a; // [rsp+18h] [rbp-38h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats> *VProf_1597b; // [rsp+18h] [rbp-38h]

  GCSDK::CJob::CJob(this, (pGCClient + 48));
  this->_vptr_CJob = off_4304ED0;  // vptr: CGCServerJobSendRealtimeStats
  this->m_pGCClient = pGCClient;
  this->m_cHeartbeatsBeforeTimeout = 4;
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&this->m_msg, 0x1F69u);
  this->m_msg.m_pProtoBufBody = 0;
  this->m_msg._vptr_CProtoBufMsgBase = &off_4304E90;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v9 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    VProf_1597 = __rdtsc();
    *unTargetHigh = g_VProfCurrentProfile.m_TargetThreadId;
    if ( *unTargetHigh == ThreadGetCurrentId() )
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
      v21 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v21->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - VProf_1597 + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_bRegisteredWithMemoryPoolMgr )
    {
      VProf_1597b = operator new(0x28u);
      v16 = CMsgServerToGCRealtimeStats::descriptor();
      unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v16->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v17 = CMsgServerToGCRealtimeStats::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v17->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(VProf_1597b, Int32, unTargetHigha);
      VProf_1597b->_vptr_CProtoBufMsgMemoryPoolBase = &off_43063D0;
      GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool = VProf_1597b;
      v19 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v19, VProf_1597b);
      GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  this->m_msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool);
  if ( v9 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  v11 = g_VProfCurrentProfile.m_enabled;
  VProf_1597a = v11 != 0;
  if ( v11 != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CGCServerJobSendRealtimeStats", 0, "Server Simulation", 0, 4);
  if ( pMsgStatsDelayed != 0 )
  {
    m_pProtoBufBody = this->m_msg.m_pProtoBufBody;
    v13 = *(m_pProtoBufBody + 3);
    *(m_pProtoBufBody + 4) |= 1u;
    if ( v13 == 0 )
    {
      unTargetHighb = operator new(0x60u);
      CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse(unTargetHighb);
      *(m_pProtoBufBody + 3) = unTargetHighb;
      v13 = unTargetHighb;
    }
    CMsgDOTARealtimeGameStatsTerse::CopyFrom(v13, pMsgStatsDelayed);
  }
  if ( pMsgStatsCurrent != 0 )
  {
    v14 = this->m_msg.m_pProtoBufBody;
    v15 = *(v14 + 4);
    *(v14 + 4) |= 2u;
    if ( v15 == 0 )
    {
      v22 = operator new(0x60u);
      CMsgDOTARealtimeGameStats::CMsgDOTARealtimeGameStats(v22);
      *(v14 + 4) = v22;
      v15 = v22;
    }
    CMsgDOTARealtimeGameStats::CopyFrom(v15, pMsgStatsCurrent);
  }
  if ( VProf_1597a )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CGCServerJobSendRealtimeStats::BYieldingRunJob  (line 1609, @0x00000000029a8a70, libserver.so)
// calls: GCSDK::CGCClient::BSendMessage
bool __fastcall CGCServerJobSendRealtimeStats::BYieldingRunJob(
        CGCServerJobSendRealtimeStats *const this,
        void *pvStartParam)
{
  GCSDK::CGCClient::BSendMessage(this->m_pGCClient, &this->m_msg);
  return 1;
}


// CDOTAGCServerSystem::SetRealtimeStatsCurrent  (line 1622, @0x00000000029925f0, libserver.so)
void __fastcall CDOTAGCServerSystem::SetRealtimeStatsCurrent(CDOTAGCServerSystem *const this, bool bActive)
{
  *(this + 1920) = bActive;
  if ( bActive )
    *(this + 479) = 0;
}


// CDOTAGCServerSystem::SetRealtimeStatsDelayed  (line 1632, @0x0000000002992610, libserver.so)
void __fastcall CDOTAGCServerSystem::SetRealtimeStatsDelayed(CDOTAGCServerSystem *const this, bool bActive)
{
  *(this + 1921) = bActive;
  if ( bActive )
    *(this + 479) = 0;
}


// CDOTAGCServerSystem::ConvertRealtimeStatsToTerse  (line 1642, @0x0000000002992630, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_BuildingDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_PlayerDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_TeamDetails>::TypeHandler>, CopyArray, Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_BuildingDetails>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PlayerDetails>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_TeamDetails>::TypeHandler>, MoveArray, New, Reserve, add_buildings, add_graph_gold, add_players, add_teams, buildings, graph_data, graph_gold, match, memcpy, mutable_graph_data, operator(), players, set_accountid, set_assists_count, set_death_count, set_denies_count, set_destroyed, set_game_mode, set_game_time, set_gold, set_has_accountid, set_has_assists_count, set_has_death_count, set_has_denies_count, set_has_destroyed, set_has_game_mode, set_has_game_time, set_has_gold, set_has_graph_data, set_has_heading, set_has_heroid, set_has_kill_count, set_has_lane, set_has_league_id, set_has_level, set_has_lh_count, set_has_matchid, set_has_name, set_has_playerid, set_has_score, set_has_server_steam_id, set_has_team, set_has_team_id, set_has_team_logo, set_has_team_name, set_has_team_number, set_has_tier, set_has_timestamp, set_has_type, set_has_x, set_has_y, set_heading, set_heroid, set_kill_count, set_lane, set_league_id, set_level, set_lh_count, set_matchid, set_name, set_playerid, set_score, set_server_steam_id, set_team, set_team_id, set_team_logo, set_team_name, set_team_number, set_tier, set_timestamp, set_type, set_x, set_y, teams
// calls: CMsgDOTARealtimeGameStatsTerse::mutable_match, operator new, CMsgDOTARealtimeGameStatsTerse_TeamDetails::CMsgDOTARealtimeGameStatsTerse_TeamDetails, std::string::assign(std::string const&), CMsgDOTARealtimeGameStatsTerse_PlayerDetails::CMsgDOTARealtimeGameStatsTerse_PlayerDetails, CMsgDOTARealtimeGameStatsTerse_BuildingDetails::CMsgDOTARealtimeGameStatsTerse_BuildingDetails, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new [], memcpy, operator delete [], CMsgDOTARealtimeGameStatsTerse_GraphData::CMsgDOTARealtimeGameStatsTerse_GraphData, operator delete (13 total)
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
void __fastcall CDOTAGCServerSystem::ConvertRealtimeStatsToTerse(
        CDOTAGCServerSystem *const this,
        const CMsgDOTARealtimeGameStats *const stats,
        CMsgDOTARealtimeGameStatsTerse *pTerse)
{
  const google::protobuf::Descriptor *containing_type; // rax
  const google::protobuf::Descriptor *v5; // r12
  CMsgDOTARealtimeGameStatsTerse_MatchDetails *v6; // rax
  const google::protobuf::Descriptor *v7; // rax
  const google::protobuf::MessageOptions *options; // r12
  CMsgDOTARealtimeGameStatsTerse_MatchDetails *v9; // rax
  const google::protobuf::Descriptor *v10; // rax
  int v11; // r12d
  CMsgDOTARealtimeGameStatsTerse_MatchDetails *v12; // rax
  const google::protobuf::Descriptor *v13; // rax
  int fields; // r12d
  CMsgDOTARealtimeGameStatsTerse_MatchDetails *v15; // rax
  const google::protobuf::Descriptor *v16; // rax
  int v17; // r12d
  CMsgDOTARealtimeGameStatsTerse_MatchDetails *v18; // rax
  const google::protobuf::Descriptor *v19; // rax
  __int64 v20; // r13
  int containing_type_high; // r12d
  CMsgDOTARealtimeGameStatsTerse_MatchDetails *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  int *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  int v29; // r15d
  std::string *v30; // rdi
  int v31; // eax
  int v32; // edx
  const std::string *v33; // rsi
  int v34; // eax
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rdx
  CMsgDOTARealtimeGameStatsTerse_PlayerDetails *v38; // rdx
  std::string *v39; // rdi
  int v40; // eax
  int v41; // ecx
  const std::string *v42; // rsi
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // esi
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // xmm0_4
  __int64 v54; // rcx
  int v55; // xmm0_4
  __int64 v56; // rax
  int v57; // esi
  __int64 v58; // rdx
  __int64 v59; // r12
  int i; // r13d
  CMsgDOTARealtimeGameStatsTerse_BuildingDetails *v61; // r14
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  int v65; // xmm0_4
  int v66; // edx
  int v67; // edx
  int v68; // edx
  int v69; // xmm0_4
  int v70; // xmm0_4
  int v71; // edx
  __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // rdx
  google::protobuf::Descriptor *nested_types; // rax
  __int64 v78; // r12
  int v79; // r13d
  CMsgDOTARealtimeGameStatsTerse_GraphData *v80; // r15
  __int64 v81; // rdx
  void *v82; // rax
  int v83; // eax
  int v84; // edx
  void *v85; // r14
  CMsgDOTARealtimeGameStatsTerse_GraphData *v86; // r14
  int iTeam; // [rsp+1Ch] [rbp-44h]
  CMsgDOTARealtimeGameStatsTerse_PlayerDetails *pMem; // [rsp+28h] [rbp-38h]
  CMsgDOTARealtimeGameStatsTerse_PlayerDetails *pMema; // [rsp+28h] [rbp-38h]

  (*(*pTerse + 32LL))(pTerse);
  containing_type = *(stats + 3);
  if ( containing_type == 0 )
    containing_type = CMsgDOTARealtimeGameStats::default_instance_->containing_type_;
  v5 = containing_type->containing_type_;
  v6 = CMsgDOTARealtimeGameStatsTerse::mutable_match(pTerse);
  *(v6 + 4) |= 1u;
  *(v6 + 3) = v5;
  v7 = *(stats + 3);
  if ( v7 == 0 )
    v7 = CMsgDOTARealtimeGameStats::default_instance_->containing_type_;
  options = v7->options_;
  v9 = CMsgDOTARealtimeGameStatsTerse::mutable_match(pTerse);
  *(v9 + 4) |= 2u;
  *(v9 + 4) = options;
  v10 = *(stats + 3);
  if ( v10 == 0 )
    v10 = CMsgDOTARealtimeGameStats::default_instance_->containing_type_;
  v11 = *&v10->is_placeholder_;
  v12 = CMsgDOTARealtimeGameStatsTerse::mutable_match(pTerse);
  *(v12 + 4) |= 4u;
  *(v12 + 10) = v11;
  v13 = *(stats + 3);
  if ( v13 == 0 )
    v13 = CMsgDOTARealtimeGameStats::default_instance_->containing_type_;
  fields = v13->fields_;
  v15 = CMsgDOTARealtimeGameStatsTerse::mutable_match(pTerse);
  *(v15 + 4) |= 8u;
  *(v15 + 11) = fields;
  v16 = *(stats + 3);
  if ( v16 == 0 )
    v16 = CMsgDOTARealtimeGameStats::default_instance_->containing_type_;
  v17 = v16[1].containing_type_;
  v18 = CMsgDOTARealtimeGameStatsTerse::mutable_match(pTerse);
  *(v18 + 4) |= 0x20u;
  *(v18 + 16) = v17;
  v19 = *(stats + 3);
  if ( v19 == 0 )
    v19 = CMsgDOTARealtimeGameStats::default_instance_->containing_type_;
  v20 = 0;
  containing_type_high = HIDWORD(v19[1].containing_type_);
  v22 = CMsgDOTARealtimeGameStatsTerse::mutable_match(pTerse);
  iTeam = 0;
  *(v22 + 4) |= 0x40u;
  *(v22 + 17) = containing_type_high;
  if ( *(stats + 10) > 0 )
  {
    do
    {
      v23 = *(pTerse + 10);
      v24 = *(pTerse + 11);
      if ( v23 < v24 )
      {
        v76 = *(pTerse + 4);
        *(pTerse + 10) = v23 + 1;
        v25 = *(v76 + 8 * v23);
      }
      else
      {
        if ( v24 == *(pTerse + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((pTerse + 32), v24 + 1);
        v25 = operator new(0x50u);
        CMsgDOTARealtimeGameStatsTerse_TeamDetails::CMsgDOTARealtimeGameStatsTerse_TeamDetails(v25);
        v26 = *(pTerse + 10);
        v27 = *(pTerse + 4);
        ++*(pTerse + 11);
        *(pTerse + 10) = v26 + 1;
        *(v27 + 8 * v26) = v25;
      }
      v28 = 0;
      v29 = 0;
      v30 = *(v25 + 4);
      v31 = v25[4];
      v25[6] = *(*(*(stats + 4) + v20) + 24LL);
      v25[4] = v31 | 1;
      v32 = *(*(*(stats + 4) + v20) + 28LL);
      v25[4] = v31 | 3;
      v25[7] = v32;
      v33 = *(*(*(stats + 4) + v20) + 32LL);
      v25[4] = v31 | 7;
      std::string::assign(v30, v33);
      v34 = v25[4];
      *(v25 + 5) = *(*(*(stats + 4) + v20) + 40LL);
      v25[4] = v34 | 8;
      v35 = *(*(*(stats + 4) + v20) + 72LL);
      v25[4] = v34 | 0x18;
      v25[18] = v35;
      if ( *(*(*(stats + 4) + v20) + 56LL) > 0 )
      {
        do
        {
          v56 = v25[14];
          v57 = v25[15];
          if ( v56 >= v57 )
          {
            if ( v57 == v25[16] )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v25 + 2, v57 + 1);
            pMem = operator new(0x58u);
            CMsgDOTARealtimeGameStatsTerse_PlayerDetails::CMsgDOTARealtimeGameStatsTerse_PlayerDetails(pMem);
            v36 = v25[14];
            v37 = *(v25 + 6);
            ++v25[15];
            v25[14] = v36 + 1;
            *(v37 + 8 * v36) = pMem;
            v38 = pMem;
          }
          else
          {
            v58 = *(v25 + 6);
            v25[14] = v56 + 1;
            v38 = *(v58 + 8 * v56);
          }
          pMema = v38;
          ++v29;
          v39 = *(v38 + 4);
          v40 = *(v38 + 4);
          *(v38 + 6) = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 24LL);
          *(v38 + 4) = v40 | 1;
          v41 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 28LL);
          *(v38 + 4) = v40 | 3;
          *(v38 + 7) = v41;
          v42 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 32LL);
          *(v38 + 4) = v40 | 7;
          std::string::assign(v39, v42);
          v43 = *(pMema + 4);
          *(pMema + 10) = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 40LL);
          *(pMema + 4) = v43 | 8;
          v44 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 44LL);
          *(pMema + 4) = v43 | 0x18;
          *(pMema + 11) = v44;
          v45 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 152LL);
          *(pMema + 4) = v43 | 0x38;
          *(pMema + 12) = v45;
          v46 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 156LL);
          *(pMema + 4) = v43 | 0x78;
          v47 = v43;
          LOBYTE(v47) = v43 | 0xF8;
          *(pMema + 13) = v46;
          v48 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 160LL);
          *(pMema + 4) = v47;
          *(pMema + 14) = v48;
          v49 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 164LL);
          *(pMema + 4) = v43 | 0x1F8;
          *(pMema + 15) = v49;
          v50 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 168LL);
          *(pMema + 4) = v43 | 0x3F8;
          *(pMema + 16) = v50;
          v51 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 172LL);
          *(pMema + 4) = v43 | 0x7F8;
          *(pMema + 17) = v51;
          v52 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 192LL);
          *(pMema + 4) = v43 | 0xFF8;
          *(pMema + 18) = v52;
          v53 = *(*(*(*(*(stats + 4) + v20) + 48LL) + v28) + 196LL);
          *(pMema + 4) = v43 | 0x1FF8;
          *(pMema + 19) = v53;
          v54 = *(*(*(*(stats + 4) + v20) + 48LL) + v28);
          v28 += 8;
          v55 = *(v54 + 200);
          *(pMema + 4) = v43 | 0x3FF8;
          *(pMema + 20) = v55;
        }
        while ( v29 < *(*(*(stats + 4) + v20) + 56LL) );
      }
      ++iTeam;
      v20 += 8;
    }
    while ( iTeam < *(stats + 10) );
  }
  v59 = 0;
  for ( i = 0; i < *(stats + 16); *(v61 + 52) = v72 )
  {
    v73 = *(pTerse + 16);
    v74 = *(pTerse + 17);
    if ( v73 >= v74 )
    {
      if ( v74 == *(pTerse + 18) )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((pTerse + 56), v74 + 1);
      v61 = operator new(0x38u);
      CMsgDOTARealtimeGameStatsTerse_BuildingDetails::CMsgDOTARealtimeGameStatsTerse_BuildingDetails(v61);
      v62 = *(pTerse + 16);
      v63 = *(pTerse + 7);
      ++*(pTerse + 17);
      *(pTerse + 16) = v62 + 1;
      *(v63 + 8 * v62) = v61;
    }
    else
    {
      v75 = *(pTerse + 7);
      *(pTerse + 16) = v73 + 1;
      v61 = *(v75 + 8 * v73);
    }
    ++i;
    v64 = *(v61 + 4);
    *(v61 + 6) = *(*(*(stats + 7) + v59) + 24LL);
    *(v61 + 4) = v64 | 1;
    v65 = *(*(*(stats + 7) + v59) + 28LL);
    *(v61 + 4) = v64 | 3;
    *(v61 + 7) = v65;
    v66 = *(*(*(stats + 7) + v59) + 40LL);
    *(v61 + 4) = v64 | 7;
    *(v61 + 8) = v66;
    v67 = *(*(*(stats + 7) + v59) + 32LL);
    *(v61 + 4) = v64 | 0xF;
    *(v61 + 9) = v67;
    v68 = *(*(*(stats + 7) + v59) + 36LL);
    *(v61 + 4) = v64 | 0x1F;
    *(v61 + 10) = v68;
    v69 = *(*(*(stats + 7) + v59) + 44LL);
    *(v61 + 4) = v64 | 0x3F;
    *(v61 + 11) = v69;
    v70 = *(*(*(stats + 7) + v59) + 48LL);
    v71 = v64;
    LOBYTE(v64) = -1;
    *(v61 + 4) = v71 | 0x7F;
    *(v61 + 12) = v70;
    v72 = *(*(stats + 7) + v59);
    v59 += 8;
    LOBYTE(v72) = *(v72 + 52);
    *(v61 + 4) = v64;
  }
  nested_types = *(stats + 10);
  v78 = 0;
  if ( nested_types == 0 )
    goto LABEL_43;
  while ( v78 < SLODWORD(nested_types->options_) )
  {
    while ( 1 )
    {
      v79 = *(&nested_types->containing_type_->name_ + v78);
      v80 = *(pTerse + 10);
      *(pTerse + 4) |= 8u;
      if ( v80 == 0 )
      {
        v86 = operator new(0x28u);
        CMsgDOTARealtimeGameStatsTerse_GraphData::CMsgDOTARealtimeGameStatsTerse_GraphData(v86);
        v80 = v86;
        *(pTerse + 10) = v86;
      }
      v81 = *(v80 + 8);
      if ( v81 == *(v80 + 9) )
      {
        v83 = v81 + 1;
        v84 = 2 * v81;
        v85 = *(v80 + 3);
        if ( v83 >= v84 )
          v84 = v83;
        if ( v84 < 4 )
          v84 = 4;
        *(v80 + 9) = v84;
        v82 = operator new[](4LL * v84);
        v81 = *(v80 + 8);
        *(v80 + 3) = v82;
        if ( v85 != 0 )
        {
          memcpy(v82, v85, 4 * v81);
          operator delete[](v85);
          v82 = *(v80 + 3);
          v81 = *(v80 + 8);
        }
      }
      else
      {
        v82 = *(v80 + 3);
      }
      ++v78;
      *(v80 + 8) = v81 + 1;
      *(v82 + v81) = v79;
      nested_types = *(stats + 10);
      if ( nested_types != 0 )
        break;
LABEL_43:
      nested_types = CMsgDOTARealtimeGameStats::default_instance_->nested_types_;
      if ( v78 >= SLODWORD(nested_types->options_) )
        return;
    }
  }
}


// CDOTAGCServerSystem::UpdateRealtimeGameState  (line 1704, @0x000000000299d7f0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityList>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_BroadcasterDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_BuildingDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_LocationStats>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_HeroToHeroStats>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_KillDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PlayerDetails>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_TeamDetails>::TypeHandler>, CEntityHandle, CVProfScope, ConvertToUint64, CopyArray, DEG2RAD, DOTAGameRules, Get, Get<google::protobuf::RepeatedPtrField<CLobbyTeamDetails>::TypeHandler>, GetAbilityData, GetAbilityName, GetBool, GetCurrentCharges, GetEntryIndex, GetFloat, GetGameTime, GetGlobalDOTATeam, GetHandleEntity, GetInstance, GetItemPurchased, GetItemPurchasedTime, GetLobby, GetMatchID, GetSerialNumber, GetTeamDetails, GetTimeOfDay, GridPosToWorldCenterX, GridPosToWorldCenterY, IndexToIdentity, Init, IsEnabled, IsNightstalkerNight, IsPassive, IsUpdatingRealtimeGameStats, LookupEntity, MoveArray, New, RemapValClamped, Reserve, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, V_memset, add_abilities, add_bans, add_broadcasters, add_buildings, add_graph_gold, add_graph_kill, add_graph_rax, add_graph_tower, add_graph_xp, add_hero_to_hero_stats, add_id, add_items, add_itemshoppinglist, add_kills, add_levelpoints, add_loc_stats, add_picks, add_players, add_stashitems, add_stats, add_team_loc_stats, add_teams, assign, clamp<float, float>, curtime, end, graph_data, length, memcpy, memset, mutable_graph_data, mutable_match, operator CBaseEntity*, operator(), operator[], set_accountid, set_agility, set_armor, set_assists, set_assists_count, set_base_agility, set_base_armor, set_base_damage, set_base_intelligence, set_base_movespeed, set_base_strength, set_cooldown, set_cooldown_max, set_damage, set_death_count, set_death_time, set_delta_frame, set_denies_count, set_destroyed, set_game_mode, set_game_time, set_gold, set_gold_per_min, set_has_accountid, set_has_agility, set_has_armor, set_has_assists, set_has_assists_count, set_has_base_agility, set_has_base_armor, set_has_base_damage, set_has_base_intelligence, set_has_base_movespeed, set_has_base_strength, set_has_buyback, set_has_cooldown, set_has_cooldown_max, set_has_damage, set_has_death_count, set_has_death_time, set_has_delta_frame, set_has_denies_count, set_has_destroyed, set_has_game_mode, set_has_game_time, set_has_gold, set_has_gold_per_min, set_has_graph_data, set_has_has_buyback, set_has_has_ultimate, set_has_has_ultimate_mana, set_has_heading, set_has_healthpoints, set_has_healthregenrate, set_has_hero, set_has_hero_damage, set_has_hero_healing, set_has_heroid, set_has_id, set_has_intelligence, set_has_is_nightstalker_night, set_has_kill_count, set_has_killer_player_id, set_has_kills, set_has_lane, set_has_league_id, set_has_level, set_has_lh_count, set_has_manapoints, set_has_manaregenrate, set_has_match, set_has_matchid, set_has_maxhealthpoints, set_has_maxmanapoints, set_has_movespeed, set_has_name, set_has_net_gold, set_has_player_id, set_has_playerid, set_has_respawn_time, set_has_score, set_has_selected_graph, set_has_selected_hero, set_has_server_steam_id, set_has_sold, set_has_stackcount, set_has_strength, set_has_team, set_has_team_id, set_has_team_logo, set_has_team_name, set_has_team_number, set_has_teamid_dire, set_has_teamid_radiant, set_has_time, set_has_time_of_day, set_has_timestamp, set_has_tower_damage, set_has_type, set_has_ultimate, set_has_ultimate_cooldown, set_has_ultimate_mana, set_has_victimid, set_has_x, set_has_xp_per_min, set_has_y, set_heading, set_healthpoints, set_healthregenrate, set_hero, set_hero_damage, set_hero_healing, set_heroid, set_id, set_intelligence, set_is_nightstalker_night, set_kill_count, set_killer_player_id, set_kills, set_lane, set_league_id, set_level, set_lh_count, set_manapoints, set_manaregenrate, set_matchid, set_maxhealthpoints, set_maxmanapoints, set_movespeed, set_name, set_net_gold, set_player_id, set_playerid, set_respawn_time, set_score, set_selected_graph, set_selected_hero, set_server_steam_id, set_sold, set_stackcount, set_strength, set_team, set_team_id, set_team_logo, set_team_name, set_team_number, set_teamid_dire, set_teamid_radiant, set_tier, set_time, set_time_of_day, set_timestamp, set_tower_damage, set_type, set_ultimate_cooldown, set_victimid, set_x, set_xp_per_min, set_y, team_details, ~CVProfScope
// calls: CVProfile::EnterScope, CDOTAGamerules::GetDOTATime, CMsgDOTARealtimeGameStats_GraphData::CopyFrom, CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse, GCClientSystem, operator new, CGCServerJobSendRealtimeStats::CGCServerJobSendRealtimeStats, GCSDK::CJob::StartJob, CMsgDOTARealtimeGameStatsTerse::~CMsgDOTARealtimeGameStatsTerse, CVProfile::ExitScope, CDOTA_PlayerResource::IsValidPlayer, CDOTA_PlayerResource::GetTeam (90 total)
// callers: CDOTAGCServerSystem::FrameUpdatePostEntityThink
// strings: "Server Simulation", "CDOTAGCServerSystem::UpdateRealtimeGameState", "<NoAbilityName>", "ItemRecipe"
void __fastcall CDOTAGCServerSystem::UpdateRealtimeGameState(CDOTAGCServerSystem *const this)
{
  int m_enabled; // ecx
  CGlobalVars *v2; // rax
  float realtime; // xmm0_4
  __int64 v4; // rcx
  int v5; // eax
  signed int v6; // edx
  CMsgDOTARealtimeGameStats_MatchDetails *v7; // rax
  CGlobalVars *v8; // rbx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  CDOTAGamerules *v12; // rdi
  __int64 v13; // rdx
  void (__fastcall *m_pfnWarningFunc)(__int64); // rdx
  int m_flCurrentTime; // edx
  float v16; // xmm1_4
  float v17; // xmm0_4
  bool m_Value; // dl
  float DOTATime; // xmm0_4
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int i; // edx
  int v25; // edi
  google::protobuf::Descriptor *nested_types; // r12
  CMsgDOTARealtimeGameStats_GraphData *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r15
  GCSDK::CGCClient *v31; // r12
  const CMsgDOTARealtimeGameStats *v32; // rbx
  CGCServerJobSendRealtimeStats *v33; // r13
  unsigned int *v34; // rdx
  int v35; // ebx
  int v36; // edx
  __int64 v37; // rax
  CMsgDOTARealtimeGameStats_TeamDetails *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  CTeam *GlobalTeam; // rax
  int m_pEntity_high; // eax
  __int64 v43; // rax
  _QWORD *v44; // rbx
  int v45; // edx
  int v46; // eax
  std::string *v47; // rdi
  const std::string *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // edx
  int v52; // eax
  std::string *v53; // rdi
  const std::string *v54; // rsi
  __int64 v55; // rax
  int NthPlayerIDOnTeam; // r14d
  __int64 v57; // rdx
  int v58; // eax
  CMsgDOTARealtimeGameStats_PlayerDetails *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdx
  AccountID_t SteamAccountID; // eax
  const char *PlayerName; // rax
  const char *v64; // rax
  char *v65; // rbx
  size_t v66; // rax
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC_Hero *v68; // r15
  const CBaseEntity *v69; // rdi
  int m_pEntity; // eax
  int Health; // eax
  int v72; // eax
  float v73; // xmm0_4
  int v74; // eax
  int v75; // edx
  float v76; // xmm4_4
  float v77; // xmm5_4
  float v78; // xmm0_4
  int v79; // eax
  int v80; // edx
  int v81; // ecx
  float v82; // xmm1_4
  int v83; // ecx
  float v84; // xmm2_4
  float v85; // xmm3_4
  __m128i v86; // xmm0
  float v87; // ebx
  float v88; // xmm0_4
  float v89; // xmm0_4
  int v90; // ebx
  int v91; // eax
  float v92; // xmm0_4
  float v93; // xmm0_4
  float v94; // xmm0_4
  float v95; // xmm0_4
  float v96; // xmm0_4
  int v97; // ebx
  int v98; // eax
  int RawPlayerDamage; // eax
  int RawTowerDamage; // eax
  int RawHealing; // eax
  int v102; // eax
  int v103; // eax
  int Kills; // eax
  int Deaths; // eax
  int Assists; // eax
  int Denies; // eax
  int LastHits; // eax
  float GoldPerMin; // xmm0_4
  float XPPerMin; // xmm0_4
  int NetWorth; // eax
  float m_flEdgeSize; // xmm1_4
  float m_flOffsetX; // xmm0_4
  float x; // xmm1_4
  __m128 v115; // xmm1
  __m128 v116; // xmm0
  float v117; // xmm0_4
  float v118; // xmm1_4
  float m_flOffsetY; // xmm0_4
  float y; // xmm1_4
  __m128 v121; // xmm1
  __m128 v122; // xmm0
  float v123; // xmm0_4
  float m_flTimeUntilRespawn; // xmm0_4
  bool v125; // al
  int v126; // r12d
  CMsgDOTARealtimeGameStats_HeroToHeroStats *v127; // rbx
  __int64 v128; // rax
  __int64 v129; // rdx
  int AssistsDoneToHero; // eax
  int v131; // r13d
  __int64 v132; // rax
  int v133; // edx
  __int64 v134; // rdx
  int v135; // ebx
  float v136; // xmm0_4
  int v137; // r14d
  int NumTeamTowers; // r15d
  int v139; // r14d
  CMsgDOTARealtimeGameStats_BuildingDetails *v140; // r12
  __int64 v141; // rax
  __int64 v142; // rdx
  int v143; // eax
  float v144; // xmm0_4
  int v145; // eax
  int v146; // edx
  int v147; // ecx
  DOTA_LANE m_Lane; // edx
  int v149; // edx
  float v150; // xmm1_4
  float v151; // xmm0_4
  float v152; // xmm1_4
  __m128 v153; // xmm1
  __m128 v154; // xmm0
  float v155; // xmm0_4
  float v156; // xmm1_4
  float v157; // xmm0_4
  float v158; // xmm1_4
  __m128 v159; // xmm1
  __m128 v160; // xmm0
  float v161; // xmm0_4
  CDOTA_BaseNPC_Tower *TeamTower; // r13
  __int64 v163; // rdx
  int v164; // eax
  __int64 v165; // rax
  int NumTeamBarracks; // r15d
  int v167; // r14d
  CMsgDOTARealtimeGameStats_BuildingDetails *v168; // r12
  __int64 v169; // rax
  __int64 v170; // rdx
  int v171; // eax
  float v172; // xmm0_4
  int v173; // eax
  int v174; // edx
  int v175; // ecx
  DOTA_LANE v176; // edx
  int v177; // edx
  float v178; // xmm1_4
  float v179; // xmm0_4
  float v180; // xmm1_4
  __m128 v181; // xmm1
  __m128 v182; // xmm0
  float v183; // xmm0_4
  float v184; // xmm1_4
  float v185; // xmm0_4
  float v186; // xmm1_4
  __m128 v187; // xmm1
  __m128 v188; // xmm0
  float v189; // xmm0_4
  CDOTA_BaseNPC_Building *TeamBarracks; // r13
  __int64 v191; // rdx
  int v192; // eax
  __int64 v193; // rax
  CDOTA_BaseNPC_Building *Fort; // r13
  __int64 v195; // rdx
  int v196; // eax
  CMsgDOTARealtimeGameStats_BuildingDetails *v197; // r12
  __int64 v198; // rax
  __int64 v199; // rdx
  int v200; // eax
  const QAngle *AbsAngles; // rax
  int v202; // edx
  float v203; // xmm0_4
  float v204; // xmm1_4
  float v205; // xmm0_4
  float v206; // xmm1_4
  float v207; // xmm1_4
  float v208; // xmm0_4
  float v209; // xmm1_4
  float v210; // xmm0_4
  float v211; // xmm1_4
  float v212; // xmm1_4
  float v213; // xmm0_4
  __int64 v214; // r12
  __int64 k; // r13
  CMsgDOTARealtimeGameStats_KillDetails *v216; // rbx
  __int64 v217; // rax
  __int64 v218; // rdx
  int v219; // eax
  int v220; // edx
  __int64 v221; // rdx
  int v222; // eax
  __int64 v223; // rax
  CDOTABaseAbility *UltimateAbility; // rax
  CDOTABaseAbility *v225; // rbx
  float CooldownTimeRemaining; // xmm0_4
  bool v227; // al
  int v228; // r13d
  void *v229; // rbx
  __int64 v230; // rax
  __int64 v231; // rdx
  int ItemID; // eax
  int v233; // edx
  const char *v234; // r14
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  size_t v237; // rax
  int v238; // eax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r12
  int v241; // edx
  __int64 v242; // rax
  __int64 v243; // rdx
  void *v244; // rbx
  __int64 v245; // rax
  __int64 v246; // rdx
  int v247; // eax
  int v248; // edx
  const char *v249; // r14
  DOTAAbilityData_t *v250; // rax
  const char *v251; // rax
  size_t v252; // rax
  int v253; // eax
  CDOTA_UnitInventory *v254; // rax
  CDOTA_Item *v255; // r12
  int v256; // edx
  __int64 v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rbx
  int v260; // r12d
  std::string **v261; // r14
  __int64 v262; // rax
  __int64 v263; // rdx
  const char *Name; // rax
  const char *v265; // r13
  size_t v266; // rax
  int v267; // eax
  float m_fGameTime; // xmm0_4
  int m_unID; // r14d
  CDOTAGameManager *v270; // rax
  KeyValues *ItemDataByItemID; // rax
  const KeyValues *v272; // r13
  __int64 v273; // rax
  int v274; // edx
  __int64 v275; // rdx
  std::string **v276; // r12
  __int64 v277; // rax
  __int64 v278; // rdx
  DOTAAbilityData_t *v279; // rax
  int m_iAbilityID; // edx
  const char *v281; // r13
  int v282; // eax
  DOTAAbilityData_t *v283; // rdx
  const char *v284; // rdx
  size_t v285; // rax
  int v286; // eax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v288; // rbx
  __int64 v289; // rax
  int v290; // edx
  __int64 v291; // rdx
  float v292; // xmm0_4
  __m128i v293; // xmm0
  float v294; // xmm0_4
  __int64 v295; // rax
  int v296; // edx
  CMsgDOTARealtimeGameStats_AbilityList *v297; // rbx
  __int64 v298; // rax
  __int64 v299; // rdx
  int j; // r12d
  uint32 AbilitySkilled; // r13d
  __int64 v302; // rdx
  void *v303; // rax
  int v304; // eax
  int v305; // edx
  __int64 v306; // rdx
  float v307; // xmm1_4
  float v308; // xmm1_4
  __int64 v309; // rax
  float v310; // xmm1_4
  float v311; // xmm1_4
  float v312; // xmm1_4
  float v313; // xmm1_4
  __m128 v314; // xmm1
  __m128 v315; // xmm0
  __m128 v316; // xmm1
  __m128 v317; // xmm0
  __int64 v318; // rax
  __int64 v319; // rdx
  int v320; // edi
  CMsgDOTARealtimeGameStats_MatchDetails *v321; // r12
  int m; // r12d
  float v323; // xmm1_4
  __int64 v324; // rdx
  int v325; // eax
  CMsgDOTARealtimeGameStats_BroadcasterDetails *v326; // rbx
  __int64 v327; // rax
  __int64 v328; // rdx
  CDOTAPlayer *Player; // rax
  unsigned __int16 v330; // cx
  int v331; // edi
  int v332; // edx
  CEntityIdentity *v333; // rsi
  CEntityIdentity *v334; // rcx
  int v335; // edx
  int v336; // eax
  _DWORD *v337; // rbx
  _DWORD *v338; // r12
  _DWORD *v339; // rax
  int v340; // esi
  int v341; // ecx
  _DWORD *v342; // rax
  int v343; // esi
  int v344; // ecx
  float v345; // ebx
  __m128i v346; // xmm0
  int KillSnapshot; // r13d
  char *v348; // r12
  float v349; // xmm1_4
  int TowerSnapshot; // r13d
  char *v351; // r12
  float v352; // xmm1_4
  int BarracksSnapshot; // r13d
  char *v354; // r12
  float v355; // xmm1_4
  int GoldSnapshot; // r13d
  char *v357; // r12
  float v358; // xmm1_4
  int XPSnapshot; // r12d
  char *v360; // rbx
  float v361; // xmm0_4
  float v362; // xmm2_4
  int *v363; // rbx
  __int64 v364; // rdx
  int v365; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v366; // r15
  __int64 v367; // rax
  __int64 v368; // rdx
  int n; // r13d
  __int64 current_size; // rax
  int allocated_size; // edx
  CMsgDOTARealtimeGameStats_GraphData_LocationStats *v372; // r12
  __int64 v373; // rax
  void **v374; // rdx
  int ii; // ebx
  int TeamLocationPerformanceSnapshot; // eax
  __int64 v377; // rdx
  int v378; // r14d
  _DWORD *v379; // rcx
  __int64 v380; // rax
  CEntityInstance *m_pInstance; // rdx
  int vptr_IHandleEntity; // ecx
  int v383; // edx
  int v384; // eax
  int v385; // edx
  _DWORD *v386; // rax
  void **elements; // rdx
  __int64 v388; // rax
  __m128i v389; // xmm5
  GCSDK::CGCClient *v390; // r14
  CGCServerJobSendRealtimeStats *v391; // r13
  const CMsgDOTARealtimeGameStatsTerse *v392; // rax
  const CMsgDOTARealtimeGameStats *v393; // rcx
  CMsgDOTARealtimeGameStats_GraphData *v394; // rbx
  CMsgDOTARealtimeGameStats *msgStatsPrev; // [rsp+8h] [rbp-238h]
  float v396; // [rsp+10h] [rbp-230h]
  float v397; // [rsp+10h] [rbp-230h]
  bool bKeyframe; // [rsp+1Eh] [rbp-222h]
  bool VProf_1706; // [rsp+1Fh] [rbp-221h]
  __int64 v400; // [rsp+20h] [rbp-220h]
  CMsgDOTARealtimeGameStats_TeamDetails *v401; // [rsp+30h] [rbp-210h]
  float v402; // [rsp+30h] [rbp-210h]
  int iPlayer; // [rsp+38h] [rbp-208h]
  CMsgDOTARealtimeGameStats_MatchDetails *iSnapshot; // [rsp+40h] [rbp-200h]
  int iSnapshota; // [rsp+40h] [rbp-200h]
  CMsgDOTARealtimeGameStats *msgStats; // [rsp+50h] [rbp-1F0h]
  float iEnemyTeam; // [rsp+58h] [rbp-1E8h]
  int iIndex; // [rsp+5Ch] [rbp-1E4h]
  float iIndexa; // [rsp+5Ch] [rbp-1E4h]
  CMsgDOTARealtimeGameStats_PlayerDetails *nTeam; // [rsp+60h] [rbp-1E0h]
  float nTeama; // [rsp+60h] [rbp-1E0h]
  float nTeamb; // [rsp+60h] [rbp-1E0h]
  float nTeamc; // [rsp+60h] [rbp-1E0h]
  float nTeamd; // [rsp+60h] [rbp-1E0h]
  float nTeame; // [rsp+60h] [rbp-1E0h]
  float nTeamf; // [rsp+60h] [rbp-1E0h]
  int nTeamg; // [rsp+60h] [rbp-1E0h]
  float unItemID; // [rsp+68h] [rbp-1D8h]
  float unItemIDa; // [rsp+68h] [rbp-1D8h]
  float unItemIDb; // [rsp+68h] [rbp-1D8h]
  float unItemIDc; // [rsp+68h] [rbp-1D8h]
  float unItemIDd; // [rsp+68h] [rbp-1D8h]
  float unItemIDe; // [rsp+68h] [rbp-1D8h]
  float unItemIDf; // [rsp+68h] [rbp-1D8h]
  float unItemIDg; // [rsp+68h] [rbp-1D8h]
  int unItemIDh; // [rsp+68h] [rbp-1D8h]
  void *unItemIDi; // [rsp+68h] [rbp-1D8h]
  float unItemIDk; // [rsp+68h] [rbp-1D8h]
  void *unItemIDj; // [rsp+68h] [rbp-1D8h]
  signed int unItemIDl; // [rsp+68h] [rbp-1D8h]
  int value; // [rsp+7Ch] [rbp-1C4h] BYREF
  int v433; // [rsp+80h] [rbp-1C0h] BYREF
  int v434; // [rsp+84h] [rbp-1BCh] BYREF
  int v435; // [rsp+88h] [rbp-1B8h] BYREF
  int v436; // [rsp+8Ch] [rbp-1B4h] BYREF
  _BYTE v437[16]; // [rsp+90h] [rbp-1B0h] BYREF
  int v438; // [rsp+A0h] [rbp-1A0h]
  char v439; // [rsp+E8h] [rbp-158h]
  _BYTE v440[16]; // [rsp+F0h] [rbp-150h] BYREF
  int v441; // [rsp+100h] [rbp-140h]
  char v442; // [rsp+148h] [rbp-F8h]
  _BYTE v443[96]; // [rsp+150h] [rbp-F0h] BYREF
  unsigned int rgAbilityLevels[24]; // [rsp+1B0h] [rbp-90h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1706 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(
      &g_VProfCurrentProfile,
      "CDOTAGCServerSystem::UpdateRealtimeGameState",
      0,
      "Server Simulation",
      0,
      4);
  if ( g_pDOTAPlayerResource == 0 )
    goto LABEL_46;
  if ( g_pGameRules == 0 )
    goto LABEL_46;
  v2 = gpGlobals;
  realtime = gpGlobals->realtime;
  if ( *(this + 478) > gpGlobals->realtime || *(this + 532) == 0 )
    goto LABEL_46;
  bKeyframe = realtime > *(this + 479);
  if ( realtime > *(this + 479) )
  {
    *(this + 479) = realtime + dota_realtime_stat_keyframe_interval_s.m_pParent->m_Value.m_fValue;
    realtime = v2->realtime;
  }
  v4 = *(this + 267);
  v400 = *(this + 260);
  v5 = *(this + 538);
  *(this + 478) = realtime + dota_realtime_stat_update_interval_s.m_pParent->m_Value.m_fValue;
  v6 = (v5 + 1) % *(this + 539);
  msgStatsPrev = *(v4 + 8LL * v5);
  *(this + 538) = v6;
  msgStats = *(v4 + 8LL * v6);
  (*(*msgStats + 32LL))(msgStats);
  v7 = *(msgStats + 3);
  *(msgStats + 4) |= 1u;
  iSnapshot = v7;
  if ( v7 == 0 )
  {
    v321 = operator new(0xB0u);
    CMsgDOTARealtimeGameStats_MatchDetails::CMsgDOTARealtimeGameStats_MatchDetails(v321);
    iSnapshot = v321;
    *(msgStats + 3) = v321;
  }
  v8 = gpGlobals;
  v9 = *(iSnapshot + 4);
  *(iSnapshot + 3) = *(this + 236);
  v10 = v9;
  v11 = v9 | 3;
  *(iSnapshot + 4) = v10 | 1;
  v12 = g_pGameRules;
  v13 = *&g_pGameRules[16].m_szQuestName[88];
  *(iSnapshot + 4) = v11;
  *(iSnapshot + 4) = v13;
  if ( v8 != 0 )
  {
    if ( !v8->m_bEnableAssertions && !v8->m_bInSimulation )
    {
      m_pfnWarningFunc = v8->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(1);
        v11 = *(iSnapshot + 4);
        v12 = g_pGameRules;
      }
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0;
  }
  v16 = 0.0;
  *(iSnapshot + 4) = v11 | 4;
  *(iSnapshot + 10) = m_flCurrentTime;
  v17 = v12->m_iNetTimeOfDay.m_Value / 65535.0;
  if ( v17 >= 0.0 )
  {
    v16 = 1.0;
    if ( v17 <= 1.0 )
      v16 = v17 + 0.0;
  }
  *(iSnapshot + 4) = v11 | 0xC;
  *(iSnapshot + 11) = v16;
  m_Value = v12->m_bIsNightstalkerNight.m_Value;
  *(iSnapshot + 4) = v11 | 0x1C;
  *(iSnapshot + 84) = m_Value;
  DOTATime = CDOTAGamerules::GetDOTATime(v12, 0, 1, 0.0);
  v20 = *(iSnapshot + 4);
  *(iSnapshot + 12) = DOTATime;
  *(iSnapshot + 4) = v20 | 0x20;
  if ( v400 != 0 )
  {
    v21 = *(v400 + 128);
    *(iSnapshot + 4) = v20 | 0x1020;
    *(iSnapshot + 40) = v21;
    v22 = *(v400 + 264);
    *(iSnapshot + 4) = v20 | 0x3020;
    v23 = 2;
    *(iSnapshot + 41) = v22;
    for ( i = 3; ; ++i )
    {
      if ( v23 == 2 )
      {
        if ( *(v400 + 168) > 0 )
        {
          v25 = *(**(v400 + 160) + 64LL);
          if ( v25 != 0 )
          {
            *(iSnapshot + 4) |= 0x40u;
            *(iSnapshot + 13) = v25;
          }
        }
      }
      else if ( v23 == 3 )
      {
        if ( *(v400 + 168) > 1 )
        {
          v320 = *(*(*(v400 + 160) + 8LL) + 64LL);
          if ( v320 != 0 )
          {
            *(iSnapshot + 4) |= 0x80u;
            *(iSnapshot + 20) = v320;
          }
        }
      }
      else if ( i == 14 )
      {
        goto LABEL_51;
      }
      ++v23;
    }
  }
  *(iSnapshot + 40) = 0;
  *(iSnapshot + 4) = v20 | 0x3020;
  *(iSnapshot + 41) = 0;
LABEL_51:
  for ( iIndex = 2; iIndex != 14; ++iIndex )
  {
    while ( 1 )
    {
      v35 = 0;
      while ( !CDOTA_PlayerResource::IsValidPlayer(g_pDOTAPlayerResource, v35)
           || iIndex != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v35) )
      {
        if ( ++v35 == 64 )
          goto LABEL_162;
      }
      v36 = *(msgStats + 11);
      v37 = *(msgStats + 10);
      if ( v37 < v36 )
      {
        v319 = *(msgStats + 4);
        *(msgStats + 10) = v37 + 1;
        v401 = *(v319 + 8 * v37);
      }
      else
      {
        if ( v36 == *(msgStats + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((msgStats + 32), v36 + 1);
        v38 = operator new(0x58u);
        CMsgDOTARealtimeGameStats_TeamDetails::CMsgDOTARealtimeGameStats_TeamDetails(v38);
        v401 = v38;
        v39 = *(msgStats + 10);
        v40 = *(msgStats + 4);
        ++*(msgStats + 11);
        *(msgStats + 10) = v39 + 1;
        *(v40 + 8 * v39) = v38;
      }
      *(v401 + 4) |= 1u;
      *(v401 + 6) = iIndex;
      GlobalTeam = GetGlobalTeam(iIndex);
      if ( GlobalTeam != 0 )
      {
        m_pEntity_high = HIDWORD(GlobalTeam[1].m_pEntity);
        *(v401 + 4) |= 0x10u;
        *(v401 + 18) = m_pEntity_high;
      }
      if ( iIndex == 2 && v400 != 0 && *(v400 + 168) > 0 )
      {
        v43 = *(v400 + 160);
        v44 = *v43;
        v45 = *(*v43 + 64LL);
        if ( v45 != 0 )
        {
          v46 = *(v401 + 4);
          *(v401 + 7) = v45;
          *(v401 + 4) = v46 | 2;
          v47 = *(v401 + 4);
          v48 = v44[3];
          *(v401 + 4) = v46 | 6;
          std::string::assign(v47, v48);
          v49 = v44[5];
          if ( v49 == 0 )
            v49 = v44[6];
          *(v401 + 4) |= 8u;
          *(v401 + 5) = v49;
        }
      }
      if ( iIndex == 3 && v400 != 0 && *(v400 + 168) > 1 )
      {
        v50 = *(*(v400 + 160) + 8LL);
        v51 = *(v50 + 64);
        if ( v51 != 0 )
        {
          v52 = *(v401 + 4);
          *(v401 + 7) = v51;
          *(v401 + 4) = v52 | 2;
          v53 = *(v401 + 4);
          v54 = *(v50 + 24);
          *(v401 + 4) = v52 | 6;
          std::string::assign(v53, v54);
          v55 = *(v50 + 40);
          if ( v55 == 0 )
            v55 = *(v50 + 48);
          *(v401 + 4) |= 8u;
          *(v401 + 5) = v55;
        }
      }
      for ( iPlayer = 1; iPlayer != 25; ++iPlayer )
      {
        NthPlayerIDOnTeam = CDOTA_PlayerResource::GetNthPlayerIDOnTeam(g_pDOTAPlayerResource, iIndex, iPlayer);
        if ( NthPlayerIDOnTeam != -1 )
        {
          v57 = *(v401 + 14);
          v58 = *(v401 + 15);
          if ( v57 < v58 )
          {
            v309 = *(v401 + 6);
            *(v401 + 14) = v57 + 1;
            nTeam = *(v309 + 8 * v57);
          }
          else
          {
            if ( v58 == *(v401 + 16) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v401 + 2, v58 + 1);
            v59 = operator new(0x158u);
            CMsgDOTARealtimeGameStats_PlayerDetails::CMsgDOTARealtimeGameStats_PlayerDetails(v59);
            nTeam = v59;
            v60 = *(v401 + 14);
            v61 = *(v401 + 6);
            ++*(v401 + 15);
            *(v401 + 14) = v60 + 1;
            *(v61 + 8 * v60) = v59;
          }
          *(nTeam + 4) |= 2u;
          *(nTeam + 7) = NthPlayerIDOnTeam;
          SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
          *(nTeam + 4) |= 1u;
          *(nTeam + 6) = SteamAccountID;
          PlayerName = CDOTA_PlayerResource::GetPlayerName(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
          v64 = V_AddBackSlashesToSpecialChars(PlayerName);
          *(nTeam + 4) |= 4u;
          v65 = v64;
          v66 = strlen(v64);
          std::string::assign(*(nTeam + 4), v65, v66);
          if ( v65 != 0 )
            operator delete[](v65);
          *(nTeam + 4) |= 8u;
          *(nTeam + 10) = iIndex;
          CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(rgAbilityLevels, g_pDOTAPlayerResource, NthPlayerIDOnTeam);
          v67 = CEntityHandle::operator CEntityInstance *(rgAbilityLevels);
          v68 = v67;
          if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 && (v67[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v69 = v67;
            m_pEntity = v67[100].m_pEntity;
            *(nTeam + 4) |= 0x10u;
            *(nTeam + 11) = m_pEntity;
            Health = CBaseEntity::GetHealth(v69);
            *(nTeam + 4) |= 0x20u;
            *(nTeam + 12) = Health;
            v72 = (*(v68->_vptr_IHandleEntity + 156))(v68);
            *(nTeam + 4) |= 0x40u;
            *(nTeam + 13) = v72;
            v73 = (*(v68->_vptr_IHandleEntity + 430))(v68);
            v74 = *(nTeam + 4);
            *(nTeam + 14) = v73;
            v75 = v74;
            LOBYTE(v75) = v74 | 0x80;
            *(nTeam + 4) = v75;
            v76 = v68->m_flMana.m_Value;
            *(nTeam + 4) = v74 | 0x180;
            *(nTeam + 15) = v76;
            v77 = v68->m_flMaxMana.m_Value;
            *(nTeam + 4) = v74 | 0x380;
            *(nTeam + 16) = v77;
            v78 = (*(v68->_vptr_IHandleEntity + 431))(v68);
            v79 = *(nTeam + 4);
            *(nTeam + 17) = v78;
            v80 = v79;
            v81 = v79;
            BYTE1(v80) = BYTE1(v79) | 4;
            BYTE1(v81) = BYTE1(v79) | 0xC;
            *(nTeam + 4) = v80;
            v82 = v68->m_flStrength.m_Value;
            *(nTeam + 4) = v81;
            v83 = v79;
            BYTE1(v83) = BYTE1(v79) | 0x1C;
            BYTE1(v79) |= 0x3Cu;
            *(nTeam + 18) = v82;
            v84 = v68->m_flAgility.m_Value;
            *(nTeam + 4) = v83;
            *(nTeam + 19) = v84;
            v85 = v68->m_flIntellect.m_Value;
            *(nTeam + 4) = v79;
            *(nTeam + 20) = v85;
            *v86.m128i_i64 = (*(v68->_vptr_IHandleEntity + 418))(v68);
            v87 = COERCE_FLOAT(_mm_cvtsi128_si32(v86));
            v88 = (*(v68->_vptr_IHandleEntity + 420))(v68);
            *(nTeam + 4) |= 0x4000u;
            *(nTeam + 21) = (v87 - v88);
            v89 = (*(v68->_vptr_IHandleEntity + 433))(v68);
            *(nTeam + 4) |= 0x8000u;
            *(nTeam + 22) = v89;
            v90 = (*(v68->_vptr_IHandleEntity + 416))(v68);
            v91 = (*(v68->_vptr_IHandleEntity + 417))(v68);
            *(nTeam + 4) |= 0x10000u;
            *(nTeam + 23) = (v91 + v90) / 2;
            v92 = (*(v68->_vptr_IHandleEntity + 496))(v68);
            *(nTeam + 4) |= 0x20000u;
            *(nTeam + 24) = v92;
            v93 = (*(v68->_vptr_IHandleEntity + 497))(v68);
            *(nTeam + 4) |= 0x40000u;
            *(nTeam + 25) = v93;
            v94 = (*(v68->_vptr_IHandleEntity + 498))(v68);
            *(nTeam + 4) |= 0x80000u;
            *(nTeam + 26) = v94;
            v95 = (*(v68->_vptr_IHandleEntity + 418))(v68);
            *(nTeam + 4) |= 0x100000u;
            *(nTeam + 27) = v95;
            v96 = (*(v68->_vptr_IHandleEntity + 386))(v68);
            *(nTeam + 4) |= 0x200000u;
            *(nTeam + 28) = v96;
            v97 = (*(v68->_vptr_IHandleEntity + 416))(v68);
            v98 = (*(v68->_vptr_IHandleEntity + 417))(v68);
            *(nTeam + 4) |= 0x400000u;
            *(nTeam + 29) = (v98 + v97) / 2;
            if ( CDOTA_PlayerResource::GetRawPlayerDamage(g_pDOTAPlayerResource, NthPlayerIDOnTeam) > 100000 )
            {
              RawPlayerDamage = 100000;
            }
            else if ( CDOTA_PlayerResource::GetRawPlayerDamage(g_pDOTAPlayerResource, NthPlayerIDOnTeam) < 0 )
            {
              RawPlayerDamage = 0;
            }
            else
            {
              RawPlayerDamage = CDOTA_PlayerResource::GetRawPlayerDamage(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            }
            *(nTeam + 4) |= 0x800000u;
            *(nTeam + 30) = RawPlayerDamage;
            if ( CDOTA_PlayerResource::GetRawTowerDamage(g_pDOTAPlayerResource, NthPlayerIDOnTeam) > 100000 )
            {
              RawTowerDamage = 100000;
            }
            else if ( CDOTA_PlayerResource::GetRawTowerDamage(g_pDOTAPlayerResource, NthPlayerIDOnTeam) < 0 )
            {
              RawTowerDamage = 0;
            }
            else
            {
              RawTowerDamage = CDOTA_PlayerResource::GetRawTowerDamage(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            }
            *(nTeam + 4) |= 0x1000000u;
            *(nTeam + 31) = RawTowerDamage;
            if ( CDOTA_PlayerResource::GetRawHealing(g_pDOTAPlayerResource, NthPlayerIDOnTeam) > 50000 )
            {
              RawHealing = 50000;
            }
            else if ( CDOTA_PlayerResource::GetRawHealing(g_pDOTAPlayerResource, NthPlayerIDOnTeam) < 0 )
            {
              RawHealing = 0;
            }
            else
            {
              RawHealing = CDOTA_PlayerResource::GetRawHealing(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            }
            *(nTeam + 5) |= 1u;
            *(nTeam + 44) = RawHealing;
            v102 = v68->m_iCurrentLevel.m_Value;
            *(nTeam + 4) |= 0x4000000u;
            *(nTeam + 38) = v102;
            v103 = (*(v68->_vptr_IHandleEntity + 397))(v68);
            *(nTeam + 5) |= 0x10u;
            *(nTeam + 48) = v103;
            Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 4) |= 0x8000000u;
            *(nTeam + 39) = Kills;
            Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 4) |= 0x10000000u;
            *(nTeam + 40) = Deaths;
            Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 4) |= 0x20000000u;
            *(nTeam + 41) = Assists;
            Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 4) |= 0x40000000u;
            *(nTeam + 42) = Denies;
            LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 4) |= 0x80000000;
            *(nTeam + 43) = LastHits;
            GoldPerMin = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 5) |= 2u;
            *(nTeam + 45) = GoldPerMin;
            XPPerMin = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 5) |= 4u;
            *(nTeam + 46) = XPPerMin;
            NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
            *(nTeam + 5) |= 8u;
            *(nTeam + 47) = NetWorth;
            m_flEdgeSize = g_GridNav.m_flEdgeSize;
            m_flOffsetX = g_GridNav.m_flOffsetX;
            unItemID = (g_GridNav.m_nMaxX * m_flEdgeSize) + m_flOffsetX;
            v396 = m_flOffsetX + (m_flEdgeSize * g_GridNav.m_nMinX);
            x = CBaseEntity::GetAbsOrigin(v68)->x;
            if ( unItemID == v396 )
            {
              v115.m128_f32[0] = x - unItemID;
              v116 = _mm_cmple_ss(0LL, v115);
              LODWORD(v117) = _mm_andnot_ps(v116, 0xBF000000).m128_u32[0] | v116.m128_i32[0] & 0x3F000000;
            }
            else
            {
              v311 = (x - v396) / (unItemID - v396);
              if ( v311 < 0.0 )
              {
                v117 = -0.5;
              }
              else
              {
                v117 = 0.5;
                if ( v311 <= 1.0 )
                  v117 = v311 - 0.5;
              }
            }
            v118 = g_GridNav.m_flEdgeSize;
            *(nTeam + 5) |= 0x20u;
            *(nTeam + 49) = v117;
            m_flOffsetY = g_GridNav.m_flOffsetY;
            unItemIDa = (g_GridNav.m_nMaxY * v118) + m_flOffsetY;
            v397 = m_flOffsetY + (v118 * g_GridNav.m_nMinY);
            y = CBaseEntity::GetAbsOrigin(v68)->y;
            if ( unItemIDa == v397 )
            {
              v121.m128_f32[0] = y - unItemIDa;
              v122 = _mm_cmple_ss(0LL, v121);
              LODWORD(v123) = _mm_andnot_ps(v122, 0xBF000000).m128_u32[0] | v122.m128_i32[0] & 0x3F000000;
            }
            else
            {
              v310 = (y - v397) / (unItemIDa - v397);
              v123 = -0.5;
              if ( v310 >= 0.0 )
              {
                v123 = 0.5;
                if ( v310 <= 1.0 )
                  v123 = v310 - 0.5;
              }
            }
            *(nTeam + 5) |= 0x40u;
            *(nTeam + 50) = v123;
            if ( (*(v68->_vptr_IHandleEntity + 408))(v68) == 0 )
            {
              m_flTimeUntilRespawn = v68->m_flTimeUntilRespawn;
              *(nTeam + 5) |= 0x80u;
              *(nTeam + 51) = m_flTimeUntilRespawn;
            }
            if ( v68->m_bBuybackDisabled
              || (v135 = (*(v68->_vptr_IHandleEntity + 397))(v68)) < CDOTA_BaseNPC_Hero::GetBuybackCost(v68) )
            {
              v125 = 0;
            }
            else
            {
              v136 = 0.0;
              if ( g_pGameRules != 0 )
                v136 = *&g_pGameRules[18].m_szQuestName[20];
              v125 = v136 >= v68->m_fBuybackCooldown;
            }
            v126 = 1;
            *(nTeam + 5) |= 0x200u;
            *(nTeam + 284) = v125;
            do
            {
              v131 = CDOTA_PlayerResource::GetNthPlayerIDOnTeam(g_pDOTAPlayerResource, (iIndex == 2) + 2, v126);
              if ( v131 != -1 )
              {
                v132 = *(nTeam + 80);
                v133 = *(nTeam + 81);
                if ( v132 >= v133 )
                {
                  if ( v133 == *(nTeam + 82) )
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(nTeam + 13, v133 + 1);
                  v127 = operator new(0x28u);
                  CMsgDOTARealtimeGameStats_HeroToHeroStats::CMsgDOTARealtimeGameStats_HeroToHeroStats(v127);
                  v128 = *(nTeam + 80);
                  v129 = *(nTeam + 39);
                  ++*(nTeam + 81);
                  *(nTeam + 80) = v128 + 1;
                  *(v129 + 8 * v128) = v127;
                }
                else
                {
                  v134 = *(nTeam + 39);
                  *(nTeam + 80) = v132 + 1;
                  v127 = *(v134 + 8 * v132);
                }
                *(v127 + 6) = v131;
                *(v127 + 4) |= 1u;
                *(v127 + 7) = CDOTA_PlayerResource::GetKillsDoneToHero(g_pDOTAPlayerResource, NthPlayerIDOnTeam, v131);
                *(v127 + 4) |= 2u;
                AssistsDoneToHero = CDOTA_PlayerResource::GetAssistsDoneToHero(
                                      g_pDOTAPlayerResource,
                                      NthPlayerIDOnTeam,
                                      v131);
                *(v127 + 4) |= 4u;
                *(v127 + 8) = AssistsDoneToHero;
              }
              ++v126;
            }
            while ( v126 != 25 );
            UltimateAbility = CDOTA_BaseNPC::GetUltimateAbility(v68);
            v225 = UltimateAbility;
            if ( UltimateAbility != 0 )
            {
              if ( UltimateAbility->m_iLevel.m_Value <= 0 )
              {
                *(nTeam + 5) |= 0x8000u;
                *(nTeam + 285) = 0;
              }
              else
              {
                *(nTeam + 5) |= 0x8000u;
                *(nTeam + 285) = 1;
              }
              if ( UltimateAbility->m_iLevel.m_Value > 0 )
              {
                CooldownTimeRemaining = CDOTABaseAbility::GetCooldownTimeRemaining(UltimateAbility);
                *(nTeam + 5) |= 0x100u;
                *(nTeam + 70) = CooldownTimeRemaining;
                v227 = v68->m_flMana.m_Value >= (*(v225->_vptr_IHandleEntity + 274))(v225, 0xFFFFFFFFLL);
                *(nTeam + 5) |= 0x10000u;
                *(nTeam + 286) = v227;
              }
            }
            else
            {
              *(nTeam + 5) |= 0x8000u;
              *(nTeam + 285) = 0;
            }
            v228 = 0;
            while ( 1 )
            {
              Inventory = CDOTA_BaseNPC::GetInventory(v68);
              ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v228);
              v241 = *(nTeam + 55);
              v242 = *(nTeam + 54);
              if ( v242 >= v241 )
                break;
              v243 = *(nTeam + 26);
              *(nTeam + 54) = v242 + 1;
              v229 = *(v243 + 8 * v242);
              if ( ItemInSlot != 0 )
              {
LABEL_184:
                ItemID = CDOTA_Item::GetItemID(ItemInSlot);
                v233 = *(v229 + 4);
                *(v229 + 8) = ItemID;
                v234 = "<NoAbilityName>";
                *(v229 + 4) = v233 | 1;
                m_pAbilityData = ItemInSlot->m_pAbilityData;
                if ( m_pAbilityData != 0 )
                {
                  m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
                  if ( m_pszAbilityName != 0 )
                    v234 = m_pszAbilityName;
                }
                *(v229 + 4) = v233 | 3;
                v237 = strlen(v234);
                std::string::assign(*(v229 + 3), v234, v237);
                v238 = ItemInSlot->m_iCurrentCharges.m_Value;
                if ( v238 > 0 )
                {
                  *(v229 + 4) |= 0x10u;
                  *(v229 + 11) = v238;
                }
                if ( ++v228 == 9 )
                {
LABEL_203:
                  while ( 1 )
                  {
                    v254 = CDOTA_BaseNPC::GetInventory(v68);
                    v255 = CDOTA_UnitInventory::GetItemInSlot(v254, v228);
                    v256 = *(nTeam + 61);
                    v257 = *(nTeam + 60);
                    if ( v257 >= v256 )
                      break;
                    v258 = *(nTeam + 29);
                    *(nTeam + 60) = v257 + 1;
                    v244 = *(v258 + 8 * v257);
                    if ( v255 != 0 )
                    {
LABEL_197:
                      v247 = CDOTA_Item::GetItemID(v255);
                      v248 = *(v244 + 4);
                      *(v244 + 8) = v247;
                      v249 = "<NoAbilityName>";
                      *(v244 + 4) = v248 | 1;
                      v250 = v255->m_pAbilityData;
                      if ( v250 != 0 )
                      {
                        v251 = v250->m_pszAbilityName;
                        if ( v251 != 0 )
                          v249 = v251;
                      }
                      *(v244 + 4) = v248 | 3;
                      v252 = strlen(v249);
                      std::string::assign(*(v244 + 3), v249, v252);
                      v253 = v255->m_iCurrentCharges.m_Value;
                      if ( v253 > 0 )
                      {
                        *(v244 + 4) |= 0x10u;
                        *(v244 + 11) = v253;
                      }
                      if ( ++v228 == 16 )
                      {
LABEL_206:
                        if ( v68->m_vecItemPurchaseHistory.m_Size > 0 )
                        {
                          v259 = 0;
                          v260 = 0;
                          do
                          {
                            m_unID = v68->m_vecItemPurchaseHistory.m_Memory.m_pMemory[v259].m_unID;
                            unItemIDh = m_unID;
                            v270 = DOTAGameManager();
                            ItemDataByItemID = CDOTAGameManager::GetItemDataByItemID(v270, m_unID);
                            v272 = ItemDataByItemID;
                            if ( ItemDataByItemID != 0 && KeyValues::GetInt(ItemDataByItemID, "ItemRecipe", 0) == 0 )
                            {
                              v273 = *(nTeam + 66);
                              v274 = *(nTeam + 67);
                              if ( v273 >= v274 )
                              {
                                if ( v274 == *(nTeam + 68) )
                                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve((nTeam + 256), v274 + 1);
                                v261 = operator new(0x30u);
                                CMsgDOTARealtimeGameStats_ItemDetails::CMsgDOTARealtimeGameStats_ItemDetails(v261);
                                v262 = *(nTeam + 66);
                                v263 = *(nTeam + 32);
                                ++*(nTeam + 67);
                                *(nTeam + 66) = v262 + 1;
                                *(v263 + 8 * v262) = v261;
                              }
                              else
                              {
                                v275 = *(nTeam + 32);
                                *(nTeam + 66) = v273 + 1;
                                v261 = *(v275 + 8 * v273);
                              }
                              if ( v261 != 0 )
                              {
                                *(v261 + 4) |= 1u;
                                *(v261 + 8) = unItemIDh;
                                Name = KeyValues::GetName(v272);
                                *(v261 + 4) |= 2u;
                                v265 = Name;
                                v266 = strlen(Name);
                                std::string::assign(v261[3], v265, v266);
                                v267 = *(v261 + 4);
                                m_fGameTime = v68->m_vecItemPurchaseHistory.m_Memory.m_pMemory[v259].m_fGameTime;
                                *(v261 + 40) = 0;
                                *(v261 + 4) = v267 | 0xC;
                                *(v261 + 9) = m_fGameTime;
                              }
                            }
                            ++v260;
                            ++v259;
                          }
                          while ( v260 < v68->m_vecItemPurchaseHistory.m_Size );
                        }
                        v137 = 0;
                        while ( 2 )
                        {
                          while ( 1 )
                          {
                            AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v68, v137);
                            v288 = AbilityByIndex;
                            if ( AbilityByIndex != 0 && !AbilityByIndex->m_bHidden.m_Value )
                              break;
LABEL_226:
                            if ( ++v137 == 24 )
                              goto LABEL_236;
                          }
                          v289 = *(nTeam + 34);
                          v290 = *(nTeam + 35);
                          if ( v289 >= v290 )
                          {
                            if ( v290 == *(nTeam + 36) )
                              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((nTeam + 128), v290 + 1);
                            v276 = operator new(0x30u);
                            CMsgDOTARealtimeGameStats_AbilityDetails::CMsgDOTARealtimeGameStats_AbilityDetails(v276);
                            v277 = *(nTeam + 34);
                            v278 = *(nTeam + 16);
                            ++*(nTeam + 35);
                            *(nTeam + 34) = v277 + 1;
                            *(v278 + 8 * v277) = v276;
                            v279 = v288->m_pAbilityData;
                            if ( v279 == 0 )
                            {
LABEL_231:
                              CDOTABaseAbility::LoadAbilityData(v288, 0);
                              v279 = v288->m_pAbilityData;
                            }
                          }
                          else
                          {
                            v291 = *(nTeam + 16);
                            *(nTeam + 34) = v289 + 1;
                            v276 = *(v291 + 8 * v289);
                            v279 = v288->m_pAbilityData;
                            if ( v279 == 0 )
                              goto LABEL_231;
                          }
                          m_iAbilityID = v279->m_iAbilityID;
                          v281 = "<NoAbilityName>";
                          v282 = *(v276 + 4);
                          *(v276 + 8) = m_iAbilityID;
                          *(v276 + 4) = v282 | 1;
                          v283 = v288->m_pAbilityData;
                          if ( v283 != 0 )
                          {
                            v284 = v283->m_pszAbilityName;
                            if ( v284 != 0 )
                              v281 = v284;
                          }
                          *(v276 + 4) = v282 | 3;
                          v285 = strlen(v281);
                          std::string::assign(v276[3], v281, v285);
                          v286 = v288->m_iLevel.m_Value;
                          *(v276 + 4) |= 4u;
                          *(v276 + 9) = v286;
                          if ( ((*(v288->_vptr_IHandleEntity + 251))(v288) & 2) != 0
                            || (*(v288->_vptr_IHandleEntity + 245))(v288) != 0 )
                          {
                            goto LABEL_226;
                          }
                          v292 = CDOTABaseAbility::GetCooldownTimeRemaining(v288);
                          *(v276 + 4) |= 8u;
                          *(v276 + 10) = v292;
                          *v293.m128i_i32 = CDOTABaseAbility::GetCooldownTimeRemaining(v288);
                          if ( COERCE_FLOAT(_mm_cvtsi128_si32(v293)) <= (*(v288->_vptr_IHandleEntity + 242))(
                                                                          v288,
                                                                          v288->m_iLevel.m_Value) )
                            (*(v288->_vptr_IHandleEntity + 242))(v288, v288->m_iLevel.m_Value);
                          else
                            v294 = CDOTABaseAbility::GetCooldownTimeRemaining(v288);
                          ++v137;
                          *(v276 + 11) = v294;
                          *(v276 + 4) |= 0x10u;
                          if ( v137 == 24 )
                          {
LABEL_236:
                            memset(rgAbilityLevels, 0, 24);
                            if ( v68->m_iCurrentLevel.m_Value > 0 )
                            {
                              LOBYTE(v137) = 0;
                              do
                              {
                                if ( CDOTA_BaseNPC_Hero::NumAbilitiesSkilled(v68, v137) > 0 )
                                {
                                  v295 = *(nTeam + 74);
                                  v296 = *(nTeam + 75);
                                  if ( v295 < v296 )
                                  {
                                    v306 = *(nTeam + 36);
                                    *(nTeam + 74) = v295 + 1;
                                    v297 = *(v306 + 8 * v295);
                                  }
                                  else
                                  {
                                    if ( v296 == *(nTeam + 76) )
                                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(nTeam + 12, v296 + 1);
                                    v297 = operator new(0x28u);
                                    CMsgDOTARealtimeGameStats_AbilityList::CMsgDOTARealtimeGameStats_AbilityList(v297);
                                    v298 = *(nTeam + 74);
                                    v299 = *(nTeam + 36);
                                    ++*(nTeam + 75);
                                    *(nTeam + 74) = v298 + 1;
                                    *(v299 + 8 * v298) = v297;
                                  }
                                  for ( j = 0; j < CDOTA_BaseNPC_Hero::NumAbilitiesSkilled(v68, v137); ++j )
                                  {
                                    AbilitySkilled = CDOTA_BaseNPC_Hero::GetAbilitySkilled(v68, v137, j);
                                    if ( AbilitySkilled == 0 )
                                      break;
                                    v302 = *(v297 + 8);
                                    v303 = *(v297 + 3);
                                    if ( v302 == *(v297 + 9) )
                                    {
                                      unItemIDi = *(v297 + 3);
                                      v304 = v302 + 1;
                                      v305 = 2 * v302;
                                      if ( v304 >= v305 )
                                        v305 = v304;
                                      if ( v305 < 4 )
                                        v305 = 4;
                                      *(v297 + 9) = v305;
                                      v303 = operator new[](4LL * v305);
                                      *(v297 + 3) = v303;
                                      v302 = *(v297 + 8);
                                      if ( unItemIDi != 0 )
                                      {
                                        memcpy(v303, unItemIDi, 4 * v302);
                                        operator delete[](unItemIDi);
                                        v303 = *(v297 + 3);
                                        v302 = *(v297 + 8);
                                      }
                                    }
                                    *(v297 + 8) = v302 + 1;
                                    *(v303 + v302) = AbilitySkilled;
                                  }
                                }
                                ++v137;
                              }
                              while ( v137 < v68->m_iCurrentLevel.m_Value );
                            }
                            goto LABEL_118;
                          }
                          continue;
                        }
                      }
                    }
                    else
                    {
LABEL_205:
                      *(v244 + 4) |= 1u;
                      ++v228;
                      *(v244 + 8) = 0;
                      if ( v228 == 16 )
                        goto LABEL_206;
                    }
                  }
                  if ( v256 == *(nTeam + 62) )
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve((nTeam + 232), v256 + 1);
                  v244 = operator new(0x30u);
                  CMsgDOTARealtimeGameStats_ItemDetails::CMsgDOTARealtimeGameStats_ItemDetails(v244);
                  v245 = *(nTeam + 60);
                  v246 = *(nTeam + 29);
                  ++*(nTeam + 61);
                  *(nTeam + 60) = v245 + 1;
                  *(v246 + 8 * v245) = v244;
                  if ( v255 == 0 )
                    goto LABEL_205;
                  goto LABEL_197;
                }
              }
              else
              {
LABEL_192:
                *(v229 + 4) |= 1u;
                ++v228;
                *(v229 + 8) = 0;
                if ( v228 == 9 )
                  goto LABEL_203;
              }
            }
            if ( v241 == *(nTeam + 56) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((nTeam + 208), v241 + 1);
            v229 = operator new(0x30u);
            CMsgDOTARealtimeGameStats_ItemDetails::CMsgDOTARealtimeGameStats_ItemDetails(v229);
            v230 = *(nTeam + 54);
            v231 = *(nTeam + 26);
            ++*(nTeam + 55);
            *(nTeam + 54) = v230 + 1;
            *(v231 + 8 * v230) = v229;
            if ( ItemInSlot == 0 )
              goto LABEL_192;
            goto LABEL_184;
          }
        }
LABEL_118:
        ;
      }
      NumTeamTowers = CDOTAGamerules::GetNumTeamTowers(g_pGameRules, iIndex);
      if ( NumTeamTowers > 0 )
      {
        v139 = 0;
        while ( 1 )
        {
          TeamTower = CDOTAGamerules::GetTeamTower(g_pGameRules, iIndex, v139);
          v163 = *(msgStats + 16);
          v164 = *(msgStats + 17);
          if ( v163 >= v164 )
          {
            if ( v164 == *(msgStats + 18) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((msgStats + 56), v164 + 1);
            v140 = operator new(0x38u);
            CMsgDOTARealtimeGameStats_BuildingDetails::CMsgDOTARealtimeGameStats_BuildingDetails(v140);
            v141 = *(msgStats + 16);
            v142 = *(msgStats + 7);
            ++*(msgStats + 17);
            *(msgStats + 16) = v141 + 1;
            *(v142 + 8 * v141) = v140;
            if ( TeamTower == 0 )
              goto LABEL_132;
          }
          else
          {
            v165 = *(msgStats + 7);
            *(msgStats + 16) = v163 + 1;
            v140 = *(v165 + 8 * v163);
            if ( TeamTower == 0 )
              goto LABEL_132;
          }
          if ( (*(TeamTower->_vptr_IHandleEntity + 408))(TeamTower) != 0 )
          {
            v143 = *(v140 + 4);
            *(v140 + 10) = 0;
            *(v140 + 6) = iIndex;
            *(v140 + 4) = v143 | 0x11;
            v144 = 0.017453292 * CBaseEntity::GetAbsAngles(TeamTower)->y;
            v145 = *(v140 + 4);
            *(v140 + 7) = v144;
            v146 = v145;
            v147 = v145;
            LOBYTE(v145) = v145 | 0x8E;
            *(v140 + 4) = v146 | 2;
            m_Lane = TeamTower->m_Lane;
            *(v140 + 4) = v147 | 6;
            *(v140 + 8) = m_Lane;
            v149 = TeamTower->m_iCurrentLevel.m_Value;
            *(v140 + 4) = v145;
            v150 = g_GridNav.m_flEdgeSize;
            *(v140 + 52) = 0;
            v151 = g_GridNav.m_flOffsetX;
            *(v140 + 9) = v149;
            unItemIDb = (g_GridNav.m_nMaxX * v150) + v151;
            nTeama = v151 + (v150 * g_GridNav.m_nMinX);
            v152 = CBaseEntity::GetAbsOrigin(TeamTower)->x;
            if ( unItemIDb == nTeama )
            {
              v153.m128_f32[0] = v152 - unItemIDb;
              v154 = _mm_cmple_ss(0LL, v153);
              LODWORD(v155) = _mm_andnot_ps(v154, 0xBF000000).m128_u32[0] | v154.m128_i32[0] & 0x3F000000;
            }
            else
            {
              v307 = (v152 - nTeama) / (unItemIDb - nTeama);
              if ( v307 < 0.0 )
              {
                v155 = -0.5;
              }
              else
              {
                v155 = 0.5;
                if ( v307 <= 1.0 )
                  v155 = v307 - 0.5;
              }
            }
            *(v140 + 4) |= 0x20u;
            *(v140 + 11) = v155;
            v156 = g_GridNav.m_flEdgeSize;
            v157 = g_GridNav.m_flOffsetY;
            unItemIDc = (g_GridNav.m_nMaxY * v156) + v157;
            nTeamb = v157 + (v156 * g_GridNav.m_nMinY);
            v158 = CBaseEntity::GetAbsOrigin(TeamTower)->y;
            if ( unItemIDc == nTeamb )
            {
              v159.m128_f32[0] = v158 - unItemIDc;
              v160 = _mm_cmple_ss(0LL, v159);
              LODWORD(v161) = _mm_andnot_ps(v160, 0xBF000000).m128_u32[0] | v160.m128_i32[0] & 0x3F000000;
            }
            else
            {
              v308 = (v158 - nTeamb) / (unItemIDc - nTeamb);
              v161 = -0.5;
              if ( v308 >= 0.0 )
              {
                v161 = 0.5;
                if ( v308 <= 1.0 )
                  v161 = v308 - 0.5;
              }
            }
            ++v139;
            *(v140 + 12) = v161;
            *(v140 + 4) |= 0x40u;
            if ( v139 == NumTeamTowers )
              break;
          }
          else
          {
LABEL_132:
            ++v139;
            *(v140 + 52) = 1;
            *(v140 + 4) |= 0x80u;
            if ( v139 == NumTeamTowers )
              break;
          }
        }
      }
      NumTeamBarracks = CDOTAGamerules::GetNumTeamBarracks(g_pGameRules, iIndex);
      if ( NumTeamBarracks > 0 )
      {
        v167 = 0;
        while ( 1 )
        {
          TeamBarracks = CDOTAGamerules::GetTeamBarracks(g_pGameRules, iIndex, v167);
          v191 = *(msgStats + 16);
          v192 = *(msgStats + 17);
          if ( v191 >= v192 )
          {
            if ( v192 == *(msgStats + 18) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((msgStats + 56), v192 + 1);
            v168 = operator new(0x38u);
            CMsgDOTARealtimeGameStats_BuildingDetails::CMsgDOTARealtimeGameStats_BuildingDetails(v168);
            v169 = *(msgStats + 16);
            v170 = *(msgStats + 7);
            ++*(msgStats + 17);
            *(msgStats + 16) = v169 + 1;
            *(v170 + 8 * v169) = v168;
            if ( TeamBarracks == 0 )
              goto LABEL_146;
          }
          else
          {
            v193 = *(msgStats + 7);
            *(msgStats + 16) = v191 + 1;
            v168 = *(v193 + 8 * v191);
            if ( TeamBarracks == 0 )
              goto LABEL_146;
          }
          if ( (*(TeamBarracks->_vptr_IHandleEntity + 408))(TeamBarracks) != 0 )
          {
            v171 = *(v168 + 4);
            *(v168 + 10) = 1;
            *(v168 + 6) = iIndex;
            *(v168 + 4) = v171 | 0x11;
            v172 = 0.017453292 * CBaseEntity::GetAbsAngles(TeamBarracks)->y;
            v173 = *(v168 + 4);
            *(v168 + 7) = v172;
            v174 = v173;
            v175 = v173;
            LOBYTE(v173) = v173 | 0x8E;
            *(v168 + 4) = v174 | 2;
            v176 = TeamBarracks->m_Lane;
            *(v168 + 4) = v175 | 6;
            *(v168 + 8) = v176;
            v177 = TeamBarracks->m_iCurrentLevel.m_Value;
            *(v168 + 4) = v173;
            v178 = g_GridNav.m_flEdgeSize;
            *(v168 + 52) = 0;
            v179 = g_GridNav.m_flOffsetX;
            *(v168 + 9) = v177;
            unItemIDd = (g_GridNav.m_nMaxX * v178) + v179;
            nTeamc = v179 + (v178 * g_GridNav.m_nMinX);
            v180 = CBaseEntity::GetAbsOrigin(TeamBarracks)->x;
            if ( unItemIDd == nTeamc )
            {
              v181.m128_f32[0] = v180 - unItemIDd;
              v182 = _mm_cmple_ss(0LL, v181);
              LODWORD(v183) = _mm_andnot_ps(v182, 0xBF000000).m128_u32[0] | v182.m128_i32[0] & 0x3F000000;
            }
            else
            {
              v313 = (v180 - nTeamc) / (unItemIDd - nTeamc);
              if ( v313 < 0.0 )
              {
                v183 = -0.5;
              }
              else
              {
                v183 = 0.5;
                if ( v313 <= 1.0 )
                  v183 = v313 - 0.5;
              }
            }
            *(v168 + 4) |= 0x20u;
            *(v168 + 11) = v183;
            v184 = g_GridNav.m_flEdgeSize;
            v185 = g_GridNav.m_flOffsetY;
            unItemIDe = (g_GridNav.m_nMaxY * v184) + v185;
            nTeamd = v185 + (v184 * g_GridNav.m_nMinY);
            v186 = CBaseEntity::GetAbsOrigin(TeamBarracks)->y;
            if ( unItemIDe == nTeamd )
            {
              v187.m128_f32[0] = v186 - unItemIDe;
              v188 = _mm_cmple_ss(0LL, v187);
              LODWORD(v189) = _mm_andnot_ps(v188, 0xBF000000).m128_u32[0] | v188.m128_i32[0] & 0x3F000000;
            }
            else
            {
              v312 = (v186 - nTeamd) / (unItemIDe - nTeamd);
              v189 = -0.5;
              if ( v312 >= 0.0 )
              {
                v189 = 0.5;
                if ( v312 <= 1.0 )
                  v189 = v312 - 0.5;
              }
            }
            ++v167;
            *(v168 + 12) = v189;
            *(v168 + 4) |= 0x40u;
            if ( v167 == NumTeamBarracks )
              break;
          }
          else
          {
LABEL_146:
            ++v167;
            *(v168 + 52) = 1;
            *(v168 + 4) |= 0x80u;
            if ( v167 == NumTeamBarracks )
              break;
          }
        }
      }
      Fort = CDOTAGamerules::GetFort(g_pGameRules, iIndex);
      v195 = *(msgStats + 16);
      v196 = *(msgStats + 17);
      if ( v195 < v196 )
      {
        v318 = *(msgStats + 7);
        *(msgStats + 16) = v195 + 1;
        v197 = *(v318 + 8 * v195);
      }
      else
      {
        if ( v196 == *(msgStats + 18) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((msgStats + 56), v196 + 1);
        v197 = operator new(0x38u);
        CMsgDOTARealtimeGameStats_BuildingDetails::CMsgDOTARealtimeGameStats_BuildingDetails(v197);
        v198 = *(msgStats + 16);
        v199 = *(msgStats + 7);
        ++*(msgStats + 17);
        *(msgStats + 16) = v198 + 1;
        *(v199 + 8 * v198) = v197;
      }
      if ( Fort != 0 && (*(Fort->_vptr_IHandleEntity + 408))(Fort) != 0 )
        break;
      ++iIndex;
      *(v197 + 52) = 1;
      *(v197 + 4) |= 0x80u;
      if ( iIndex == 14 )
        goto LABEL_163;
    }
    v200 = *(v197 + 4);
    *(v197 + 10) = 2;
    *(v197 + 6) = iIndex;
    *(v197 + 4) = v200 | 0x11;
    AbsAngles = CBaseEntity::GetAbsAngles(Fort);
    v202 = *(v197 + 4);
    v203 = 0.017453292 * AbsAngles->y;
    *(v197 + 52) = 0;
    *(v197 + 8) = 0;
    *(v197 + 9) = 0;
    LOBYTE(v202) = v202 | 0x8E;
    *(v197 + 4) = v202;
    *(v197 + 7) = v203;
    v204 = g_GridNav.m_flEdgeSize;
    v205 = g_GridNav.m_flOffsetX;
    unItemIDf = (g_GridNav.m_nMaxX * v204) + v205;
    nTeame = v205 + (v204 * g_GridNav.m_nMinX);
    v206 = CBaseEntity::GetAbsOrigin(Fort)->x;
    if ( unItemIDf == nTeame )
    {
      v316.m128_f32[0] = v206 - unItemIDf;
      v317 = _mm_cmple_ss(0LL, v316);
      LODWORD(v208) = _mm_andnot_ps(v317, 0xBF000000).m128_u32[0] | v317.m128_i32[0] & 0x3F000000;
    }
    else
    {
      v207 = (v206 - nTeame) / (unItemIDf - nTeame);
      if ( v207 < 0.0 )
      {
        v208 = -0.5;
      }
      else
      {
        v208 = 0.5;
        if ( v207 <= 1.0 )
          v208 = v207 - 0.5;
      }
    }
    *(v197 + 4) |= 0x20u;
    *(v197 + 11) = v208;
    v209 = g_GridNav.m_flEdgeSize;
    v210 = g_GridNav.m_flOffsetY;
    unItemIDg = (g_GridNav.m_nMaxY * v209) + v210;
    nTeamf = v210 + (v209 * g_GridNav.m_nMinY);
    v211 = CBaseEntity::GetAbsOrigin(Fort)->y;
    if ( unItemIDg == nTeamf )
    {
      v314.m128_f32[0] = v211 - unItemIDg;
      v315 = _mm_cmple_ss(0LL, v314);
      LODWORD(v213) = _mm_andnot_ps(v315, 0xBF000000).m128_u32[0] | v315.m128_i32[0] & 0x3F000000;
    }
    else
    {
      v212 = (v211 - nTeamf) / (unItemIDg - nTeamf);
      if ( v212 < 0.0 )
      {
        v213 = -0.5;
      }
      else
      {
        v213 = 0.5;
        if ( v212 <= 1.0 )
          v213 = v212 - 0.5;
      }
    }
    *(v197 + 4) |= 0x40u;
    *(v197 + 12) = v213;
LABEL_162:
    ;
  }
LABEL_163:
  if ( g_pGameRules != -7632LL )
  {
    v214 = *g_pGameRules[53].m_szQuestName;
    for ( k = v214 + 12LL * SLODWORD(g_pGameRules[53]._vptr_CGameRules); k != v214; v214 += 12 )
    {
      v221 = *(iSnapshot + 30);
      v222 = *(iSnapshot + 31);
      if ( v221 >= v222 )
      {
        if ( v222 == *(iSnapshot + 32) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((iSnapshot + 112), v222 + 1);
        v216 = operator new(0x28u);
        CMsgDOTARealtimeGameStats_KillDetails::CMsgDOTARealtimeGameStats_KillDetails(v216);
        v217 = *(iSnapshot + 30);
        v218 = *(iSnapshot + 14);
        ++*(iSnapshot + 31);
        *(iSnapshot + 30) = v217 + 1;
        *(v218 + 8 * v217) = v216;
      }
      else
      {
        v223 = *(iSnapshot + 14);
        *(iSnapshot + 30) = v221 + 1;
        v216 = *(v223 + 8 * v221);
      }
      if ( v216 != 0 )
      {
        v219 = *(v216 + 4);
        *(v216 + 7) = *(v214 + 8);
        *(v216 + 4) = v219 | 2;
        v220 = *(v214 + 4);
        *(v216 + 4) = v219 | 3;
        *(v216 + 6) = v220;
        if ( *v214 != 0 )
        {
          *(v216 + 8) = *v214;
          *(v216 + 4) = v219 | 7;
        }
      }
    }
  }
  for ( m = 0; m != 64; ++m )
  {
    while ( 1 )
    {
      if ( CDOTA_PlayerResource::IsBroadcaster(g_pDOTAPlayerResource, m) )
      {
        v324 = *(iSnapshot + 36);
        v325 = *(iSnapshot + 37);
        if ( v324 < v325 )
        {
          v380 = *(iSnapshot + 17);
          *(iSnapshot + 36) = v324 + 1;
          v326 = *(v380 + 8 * v324);
        }
        else
        {
          if ( v325 == *(iSnapshot + 38) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve((iSnapshot + 136), v325 + 1);
          v326 = operator new(0x28u);
          CMsgDOTARealtimeGameStats_BroadcasterDetails::CMsgDOTARealtimeGameStats_BroadcasterDetails(v326);
          v327 = *(iSnapshot + 36);
          v328 = *(iSnapshot + 17);
          ++*(iSnapshot + 37);
          *(iSnapshot + 36) = v327 + 1;
          *(v328 + 8 * v327) = v326;
        }
        if ( v326 != 0 )
        {
          *(v326 + 6) = m;
          *(v326 + 4) |= 1u;
          Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, m);
          if ( Player != 0 )
            break;
        }
      }
      if ( ++m == 64 )
        goto LABEL_316;
    }
    if ( Player->m_hSpectatorQueryUnit.m_Value.m_Index == -1 )
    {
      v330 = 0x7FFF;
      v331 = 0x7FFF;
    }
    else
    {
      v330 = Player->m_hSpectatorQueryUnit.m_Value.m_Index & 0x7FFF;
      v331 = v330;
    }
    v332 = (Player->m_hSpectatorQueryUnit.m_Value.m_Index >> 15 << 15) | v330 & 0x7FFF;
    rgAbilityLevels[0] = v332;
    if ( (v332 + 2) > 1
      && (v333 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v331 >> 9]) != 0
      && (v334 = &v333[v331 & 0x1FF]) != 0
      && v332 == v334->m_EHandle.m_Index
      && (m_pInstance = v334->m_pInstance, v334->m_pInstance != 0)
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
    {
      vptr_IHandleEntity = m_pInstance[100]._vptr_IHandleEntity;
      v383 = *(v326 + 4);
      *(v326 + 7) = vptr_IHandleEntity;
      v335 = v383 | 2;
      *(v326 + 4) = v335;
    }
    else
    {
      v335 = *(v326 + 4);
    }
    v336 = Player->m_iStatsPanel.m_Value;
    *(v326 + 4) = v335 | 4;
    *(v326 + 8) = v336;
  }
LABEL_316:
  if ( g_pGameRules != -7568LL )
  {
    v337 = *&g_pGameRules[52].m_szQuestName[80];
    v338 = &v337[3 * *&g_pGameRules[52].m_szQuestName[72]];
    while ( v338 != v337 )
    {
LABEL_321:
      if ( *v337 != 0 )
      {
        if ( *v337 != 1 )
          goto LABEL_320;
      }
      else
      {
        v339 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails>::TypeHandler>((iSnapshot + 56));
        v340 = v339[4];
        v339[6] = v337[1];
        v339[4] = v340 | 1;
        v341 = v337[2];
        v339[4] = v340 | 3;
        v339[7] = v341;
        if ( *v337 != 1 )
        {
LABEL_320:
          v337 += 3;
          if ( v338 == v337 )
            break;
          goto LABEL_321;
        }
      }
      v342 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails>::TypeHandler>((iSnapshot + 88));
      v337 += 3;
      v343 = v342[4];
      v342[6] = *(v337 - 2);
      v342[4] = v343 | 1;
      v344 = *(v337 - 1);
      v342[4] = v343 | 3;
      v342[7] = v344;
    }
  }
  if ( bKeyframe )
  {
    iSnapshota = 0;
    v402 = 0;
    do
    {
      v346 = 0x3C000000u;
      v345 = 0.0;
      *v346.m128i_i32 = 0.0078125 * v402;
      if ( (0.0078125 * v402) >= 0.0 )
      {
        v345 = 1.0;
        if ( *v346.m128i_i32 <= 1.0 )
        {
          v389 = v346;
          *v389.m128i_i32 = *v346.m128i_i32 + 0.0;
          v345 = COERCE_FLOAT(_mm_cvtsi128_si32(v389));
        }
      }
      KillSnapshot = CDOTA_CombatLog::GetKillSnapshot(&g_DOTACombatLog, v345, v323);
      v348 = *(msgStats + 10);
      *(msgStats + 4) |= 8u;
      if ( v348 == 0 )
      {
        v348 = operator new(0x80u);
        CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData(v348);
        *(msgStats + 10) = v348;
      }
      value = KillSnapshot;
      google::protobuf::RepeatedField<int>::Add((v348 + 56), &value);
      TowerSnapshot = CDOTA_CombatLog::GetTowerSnapshot(&g_DOTACombatLog, v345, v349);
      v351 = *(msgStats + 10);
      *(msgStats + 4) |= 8u;
      if ( v351 == 0 )
      {
        v351 = operator new(0x80u);
        CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData(v351);
        *(msgStats + 10) = v351;
      }
      v433 = TowerSnapshot;
      google::protobuf::RepeatedField<int>::Add((v351 + 72), &v433);
      BarracksSnapshot = CDOTA_CombatLog::GetBarracksSnapshot(&g_DOTACombatLog, v345, v352);
      v354 = *(msgStats + 10);
      *(msgStats + 4) |= 8u;
      if ( v354 == 0 )
      {
        v354 = operator new(0x80u);
        CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData(v354);
        *(msgStats + 10) = v354;
      }
      v434 = BarracksSnapshot;
      google::protobuf::RepeatedField<int>::Add((v354 + 88), &v434);
      GoldSnapshot = CDOTA_CombatLog::GetGoldSnapshot(&g_DOTACombatLog, v345, v355);
      v357 = *(msgStats + 10);
      *(msgStats + 4) |= 8u;
      if ( v357 == 0 )
      {
        v357 = operator new(0x80u);
        CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData(v357);
        *(msgStats + 10) = v357;
      }
      v435 = GoldSnapshot;
      google::protobuf::RepeatedField<int>::Add((v357 + 24), &v435);
      XPSnapshot = CDOTA_CombatLog::GetXPSnapshot(&g_DOTACombatLog, v345, v358);
      v360 = *(msgStats + 10);
      *(msgStats + 4) |= 8u;
      if ( v360 == 0 )
      {
        v360 = operator new(0x80u);
        CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData(v360);
        *(msgStats + 10) = v360;
      }
      v436 = XPSnapshot;
      google::protobuf::RepeatedField<int>::Add((v360 + 40), &v436);
      iIndexa = 0.0;
      v361 = v402 / 129.0;
      if ( (v402 / 129.0) >= 0.0 )
      {
        iIndexa = 1.0;
        if ( v361 <= 1.0 )
          iIndexa = v361 + 0.0;
      }
      ++iSnapshota;
      iEnemyTeam = 0.0;
      v402 = iSnapshota;
      v362 = iSnapshota / 129.0;
      if ( v362 >= 0.0 )
      {
        iEnemyTeam = 1.0;
        if ( v362 <= 1.0 )
          iEnemyTeam = v362 + 0.0;
      }
      for ( nTeamg = 2; nTeamg != 4; ++nTeamg )
      {
        v363 = *(msgStats + 10);
        *(msgStats + 4) |= 8u;
        if ( v363 == 0 )
        {
          v363 = operator new(0x80u);
          CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData(v363);
          *(msgStats + 10) = v363;
        }
        v364 = v363[28];
        v365 = v363[29];
        if ( v364 < v365 )
        {
          v388 = *(v363 + 13);
          v363[28] = v364 + 1;
          v366 = *(v388 + 8 * v364);
        }
        else
        {
          if ( v365 == v363[30] )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v363 + 26), v365 + 1);
          v366 = operator new(0x30u);
          CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats::CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats(v366);
          v367 = v363[28];
          v368 = *(v363 + 13);
          ++v363[29];
          v363[28] = v367 + 1;
          *(v368 + 8 * v367) = v366;
        }
        for ( n = 0; n != 6; ++n )
        {
          current_size = v366[1].current_size_;
          allocated_size = v366[1].allocated_size_;
          if ( current_size < allocated_size )
          {
            elements = v366[1].elements_;
            v366[1].current_size_ = current_size + 1;
            v372 = elements[current_size];
          }
          else
          {
            if ( allocated_size == v366[1].total_size_ )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v366 + 1, allocated_size + 1);
            v372 = operator new(0x28u);
            CMsgDOTARealtimeGameStats_GraphData_LocationStats::CMsgDOTARealtimeGameStats_GraphData_LocationStats(v372);
            v373 = v366[1].current_size_;
            v374 = v366[1].elements_;
            ++v366[1].allocated_size_;
            v366[1].current_size_ = v373 + 1;
            v374[v373] = v372;
          }
          for ( ii = 0; ii != 4; ++ii )
          {
            unItemIDk = CDOTA_CombatLog::GetTeamLocationPerformanceSnapshot(&g_DOTACombatLog, iIndexa, nTeamg, n, ii);
            TeamLocationPerformanceSnapshot = CDOTA_CombatLog::GetTeamLocationPerformanceSnapshot(
                                                &g_DOTACombatLog,
                                                iEnemyTeam,
                                                nTeamg,
                                                n,
                                                ii);
            v377 = *(v372 + 8);
            v378 = (TeamLocationPerformanceSnapshot - unItemIDk);
            if ( v377 == *(v372 + 9) )
            {
              unItemIDj = *(v372 + 3);
              v384 = v377 + 1;
              v385 = 2 * v377;
              if ( v384 < v385 )
                v384 = v385;
              if ( v384 < 4 )
                v384 = 4;
              *(v372 + 9) = v384;
              v386 = operator new[](4LL * v384);
              *(v372 + 3) = v386;
              v379 = v386;
              v377 = *(v372 + 8);
              if ( unItemIDj != 0 )
              {
                memcpy(v386, unItemIDj, 4 * v377);
                operator delete[](unItemIDj);
                v379 = *(v372 + 3);
                v377 = *(v372 + 8);
              }
            }
            else
            {
              v379 = *(v372 + 3);
            }
            *(v372 + 8) = v377 + 1;
            v379[v377] = v378;
          }
        }
      }
    }
    while ( iSnapshota != 128 );
  }
  else
  {
    nested_types = *(msgStatsPrev + 10);
    if ( nested_types == 0 )
      nested_types = CMsgDOTARealtimeGameStats::default_instance_->nested_types_;
    v27 = *(msgStats + 10);
    *(msgStats + 4) |= 8u;
    if ( v27 == 0 )
    {
      v394 = operator new(0x80u);
      CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData(v394);
      v27 = v394;
      *(msgStats + 10) = v394;
    }
    CMsgDOTARealtimeGameStats_GraphData::CopyFrom(v27, nested_types);
  }
  if ( *(this + 1920) != 0 || *(this + 1921) != 0 || (v28 = *(this + 260)) != 0 && *(v28 + 264) != 0 )
  {
    v29 = *(this + 538);
    v30 = ((v29 + 2) % *(this + 539));
    if ( bKeyframe )
    {
      CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse(rgAbilityLevels);
      if ( *(this + 1921) != 0 )
        CDOTAGCServerSystem::ConvertRealtimeStatsToTerse(this, *(*(this + 267) + 8 * v30), rgAbilityLevels);
      v31 = (GCClientSystem() + 24);
      v32 = 0;
      if ( *(this + 1920) != 0 )
        v32 = *(*(this + 267) + 8 * v29);
      v33 = operator new(0x168u);
      v34 = 0;
      if ( *(this + 1921) != 0 )
        v34 = rgAbilityLevels;
      CGCServerJobSendRealtimeStats::CGCServerJobSendRealtimeStats(v33, v31, v34, v32);
      GCSDK::CJob::StartJob(v33, 0);
      CMsgDOTARealtimeGameStatsTerse::~CMsgDOTARealtimeGameStatsTerse(rgAbilityLevels);
    }
    else
    {
      CMsgDOTARealtimeGameStats::CMsgDOTARealtimeGameStats(v437);
      CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse(v440);
      if ( *(this + 1921) != 0 )
      {
        unItemIDl = (*(this + 539) + v30 - 1) % *(this + 539);
        CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse(v443);
        CDOTAGCServerSystem::ConvertRealtimeStatsToTerse(this, *(*(this + 267) + 8LL * unItemIDl), v443);
        CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse(rgAbilityLevels);
        CDOTAGCServerSystem::ConvertRealtimeStatsToTerse(this, *(*(this + 267) + 8 * v30), rgAbilityLevels);
        ProtoBufHelper::GenerateDeltaMsg(v443, rgAbilityLevels, v440, 0);
        v442 = 1;
        v441 |= 0x10u;
        CMsgDOTARealtimeGameStatsTerse::~CMsgDOTARealtimeGameStatsTerse(rgAbilityLevels);
        CMsgDOTARealtimeGameStatsTerse::~CMsgDOTARealtimeGameStatsTerse(v443);
      }
      if ( *(this + 1920) != 0 )
      {
        ProtoBufHelper::GenerateDeltaMsg(
          *(*(this + 267) + 8LL * ((v29 + *(this + 539) - 1) % *(this + 539))),
          *(*(this + 267) + 8LL * v29),
          v437,
          0);
        v438 |= 0x10u;
        v439 = 1;
      }
      v390 = (GCClientSystem() + 24);
      v391 = operator new(0x168u);
      v392 = 0;
      v393 = 0;
      if ( *(this + 1920) != 0 )
        v393 = v437;
      if ( *(this + 1921) != 0 )
        v392 = v440;
      CGCServerJobSendRealtimeStats::CGCServerJobSendRealtimeStats(v391, v390, v392, v393);
      GCSDK::CJob::StartJob(v391, 0);
      CMsgDOTARealtimeGameStatsTerse::~CMsgDOTARealtimeGameStatsTerse(v440);
      CMsgDOTARealtimeGameStats::~CMsgDOTARealtimeGameStats(v437);
    }
  }
LABEL_46:
  if ( VProf_1706 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CGCClientJobRealtimeStateStartStop::~CGCClientJobRealtimeStateStartStop  (line 2296, @0x00000000029a85d0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobRealtimeStateStartStop::~CGCClientJobRealtimeStateStartStop(
        CGCClientJobRealtimeStateStartStop *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobRealtimeStateStartStop::~CGCClientJobRealtimeStateStartStop  (line 2296, @0x00000000029a85f0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobRealtimeStateStartStop
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobRealtimeStateStartStop::~CGCClientJobRealtimeStateStartStop(
        CGCClientJobRealtimeStateStartStop *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobRealtimeStateStartStop::BYieldingRunJobFromMsg  (line 2301, @0x00000000029aa240, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, SetRealtimeStatsCurrent, SetRealtimeStatsDelayed, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGCToServerRealtimeStatsStartStop::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, GCSDK::CProtoBufMsgMemoryPoolBase::Free (15 total)
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool
bool __fastcall CGCClientJobRealtimeStateStartStop::BYieldingRunJobFromMsg(
        CGCClientJobRealtimeStateStartStop *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop> *v3; // r14
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  int v9; // eax
  GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop> msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4304F90;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_bRegisteredWithMemoryPoolMgr )
    {
      v3 = operator new(0x28u);
      v4 = CMsgGCToServerRealtimeStatsStartStop::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v4->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v6 = CMsgGCToServerRealtimeStatsStartStop::descriptor();
      v7 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v6->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
      v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306410;
      GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool = v3;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
      GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  v9 = *(msg.m_pProtoBufBody + 4);
  if ( (v9 & 1) != 0 )
  {
    byte_4C4A601 = *(msg.m_pProtoBufBody + 24);
    if ( byte_4C4A601 != 0 )
      dword_4C4A5FC = 0;
    v9 = *(msg.m_pProtoBufBody + 4);
  }
  if ( (v9 & 2) != 0 )
  {
    byte_4C4A600 = *(msg.m_pProtoBufBody + 25);
    if ( byte_4C4A600 != 0 )
      dword_4C4A5FC = 0;
  }
  msg._vptr_CProtoBufMsgBase = &off_4304F90;
  GCSDK::CProtoBufMsgMemoryPoolBase::Free(
    GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool,
    msg.m_pProtoBufBody);
  msg.m_pProtoBufBody = 0;
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobRealtimeStateStartStop  (line 2317, @0x0000000002990930, libserver.so)  // inlines: AllocateJob<CGCClientJobRealtimeStateStartStop, GCSDK::CGCClient>, CGCClientJob, CGCClientJobRealtimeStateStartStop, JobMgrAllocateJobClass<CGCClientJobRealtimeStateStartStop, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobRealtimeStateStartStop
GCSDK::CJob *__fastcall CreateJob_CGCClientJobRealtimeStateStartStop(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobRealtimeStateStartStop (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4304F30;  // vptr: CGCClientJobRealtimeStateStartStop
  v2->m_pJobType = &g_JobType_CGCClientJobRealtimeStateStartStop;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CDOTAGCServerSystem::IsUpdatingRealtimeGameStats  (line 2319, @0x0000000002992e40, libserver.so)  // inlines: GetLobby
bool __fastcall CDOTAGCServerSystem::IsUpdatingRealtimeGameStats(CDOTAGCServerSystem *const this)
{
  bool result; // al
  __int64 v2; // rdx

  result = *(this + 1920);
  if ( !result )
  {
    result = *(this + 1921);
    if ( !result )
    {
      v2 = *(this + 260);
      if ( v2 != 0 )
        return *(v2 + 264) != 0;
    }
  }
  return result;
}


// CDOTAGCServerSystem::IsValidFantasyGame  (line 2329, @0x0000000002992e80, libserver.so)  // inlines: GetLobby
// calls: IsAppDota2Main, ItemSystem, GEconItemSchema, CDOTAItemSchema::GetTierForLeagueID
// callers: CDOTAGCServerSystem::UpdateLiveFantasyStats, CDOTAGCServerSystem::MatchSignOut, CDOTAGCServerSystem::GameRules_State_Enter
bool __fastcall CDOTAGCServerSystem::IsValidFantasyGame(CDOTAGCServerSystem *const this)
{
  __int64 v1; // rbx
  int v2; // eax
  bool result; // al
  CEconItemSystem *v4; // rdx
  uint32 v5; // ebx
  const CDOTAItemSchema *v6; // rax

  v1 = *(this + 260);
  if ( v1 == 0 )
    return 0;
  v2 = *(v1 + 128);
  if ( v2 != 2 && v2 != 16 && (!IsAppDota2Main() || *(v1 + 128) != 1) )
    return 0;
  if ( *(v1 + 264) == 0 )
    return 0;
  v4 = ItemSystem();
  result = 1;
  if ( v4 != -8LL )
  {
    v5 = *(v1 + 264);
    v6 = GEconItemSchema();
    return CDOTAItemSchema::GetTierForLeagueID(v6, v5) != 1;
  }
  return result;
}


// CDOTAGCServerSystem::SOCacheSubscribed  (line 2354, @0x0000000002990380, libserver.so)
void __fastcall CDOTAGCServerSystem::SOCacheSubscribed(
        CDOTAGCServerSystem *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  ;
}


// CDOTAGCServerSystem::SOCacheUnsubscribed  (line 2359, @0x00000000029911f0, libserver.so)  // inlines: ~CClientLobbyWatcher
// calls: GCSDK::CGCClient::RemoveSOCacheListener, operator delete
void __fastcall CDOTAGCServerSystem::SOCacheUnsubscribed(
        CDOTAGCServerSystem *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  GCSDK::ISharedObjectListener *v4; // r12
  GCSDK::CGCClient *vptr_ISharedObjectListener; // rdi

  if ( owner.m_type == 3 )
  {
    v4 = *(this + 261);
    *(this + 260) = 0;
    if ( v4 != 0 )
    {
      vptr_ISharedObjectListener = v4[1]._vptr_ISharedObjectListener;
      v4->_vptr_ISharedObjectListener = off_4304270;  // vptr: CClientLobbyWatcher
      if ( vptr_ISharedObjectListener != 0 )
        GCSDK::CGCClient::RemoveSOCacheListener(vptr_ISharedObjectListener, v4);
      operator delete(v4);
      *(this + 261) = 0;
    }
  }
}


// CDOTAGCServerSystem::SOCreated  (line 2374, @0x00000000029a0dc0, libserver.so)
// calls: CDOTAGCServerSystem::SOChanged
void __fastcall CDOTAGCServerSystem::SOCreated(
        CDOTAGCServerSystem *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  CDOTAGCServerSystem::SOChanged(this, owner, pObject, SOChangeType_t::SOChanged_Create);
}


// CDOTAGCServerSystem::SOUpdated  (line 2380, @0x00000000029a0de0, libserver.so)
// calls: CDOTAGCServerSystem::SOChanged
void __fastcall CDOTAGCServerSystem::SOUpdated(
        CDOTAGCServerSystem *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  CDOTAGCServerSystem::SOChanged(this, owner, pObject, SOChangeType_t::SOChanged_Update);
}


// CDOTAGCServerSystem::SODestroyed  (line 2386, @0x00000000029a0e00, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, DOTAGameRules, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsEnabled, Lock, State_Get, State_IsBefore, State_IsBeforePostGame, State_Order, Unlock, mutable_owner_soid, set_has_owner_soid, ~CProtoBufMsg, ~CVProfScope
// calls: CDOTAGCServerSystem::SOChanged, Msg, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgSOCacheSubscriptionRefresh::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock (23 total)
// strings: "LOBBY ERROR!  Lobby being destroyed when not in POST GAME.  Trying to refresh cache\n", "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool, DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTAGCServerSystem::SODestroyed(
        CDOTAGCServerSystem *const this,
        GCSDK::SOID_t::ID_t a2,
        __int64 a3,
        const GCSDK::CSharedObject *pObject,
        __int64 eEvent)
{
  int (**vptr_CSharedObject)(...); // rax
  __int64 v8; // rdx
  int m_enabled; // r9d
  bool v10; // r15
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *v11; // r12
  const google::protobuf::Descriptor *v12; // rax
  const google::protobuf::Descriptor *v13; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v15; // rax
  google::protobuf::Message *m_pProtoBufBody; // r12
  CMsgSOIDOwner *v17; // rsi
  CGCClientSystem *v18; // rax
  CMsgSOIDOwner *v19; // r15
  uint32 unTargetHigh; // [rsp+Ch] [rbp-74h]
  GCSDK::SOID_t ownera; // [rsp+10h] [rbp-70h] BYREF
  GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> msg; // [rsp+20h] [rbp-60h] BYREF

  ownera.m_id = a2;
  vptr_CSharedObject = pObject->_vptr_CSharedObject;
  *&ownera.m_type = a3;
  if ( vptr_CSharedObject[2](pObject, a2, a3, pObject, eEvent) == 2004 && g_pGameRules != 0 )
  {
    v8 = *&g_pGameRules[6].m_szQuestName[28];
    if ( v8 <= 0xA )
    {
      if ( dword_491AD18 <= DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v8] )
        goto LABEL_2;
    }
    else if ( dword_491AD18 <= 0 )
    {
      goto LABEL_2;
    }
    Msg("LOBBY ERROR!  Lobby being destroyed when not in POST GAME.  Trying to refresh cache\n");
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1Cu);
    msg.m_pProtoBufBody = 0;
    msg._vptr_CProtoBufMsgBase = &off_4304FD0;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v10 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr )
      {
        v11 = operator new(0x28u);
        v12 = CMsgSOCacheSubscriptionRefresh::descriptor();
        unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                         (v12->options_ + 8),
                         msgpool_hard_limit.number_,
                         msgpool_hard_limit.default_value_);
        v13 = CMsgSOCacheSubscriptionRefresh::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v13->options_ + 8),
                  msgpool_soft_limit.number_,
                  msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v11, Int32, unTargetHigh);
        v11->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306450;
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool = v11;
        v15 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v15, v11);
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool);
    msg.m_pProtoBufBody = m_pProtoBufBody;
    if ( v10 )
    {
      CVProfile::ExitScope(&g_VProfCurrentProfile);
      m_pProtoBufBody = msg.m_pProtoBufBody;
    }
    v17 = *(m_pProtoBufBody + 3);
    *(m_pProtoBufBody + 4) |= 1u;
    if ( v17 == 0 )
    {
      v19 = operator new(0x28u);
      CMsgSOIDOwner::CMsgSOIDOwner(v19);
      *(m_pProtoBufBody + 3) = v19;
      v17 = v19;
    }
    GCSDK::SOID_t::ToMsgSOIDOwner(&ownera, v17);
    v18 = GCClientSystem();
    CGCClientSystem::BSendMessage(v18, &msg);
    msg._vptr_CProtoBufMsgBase = &off_4304FD0;
    if ( msg.m_pProtoBufBody != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool,
        msg.m_pProtoBufBody);
      msg.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  }
LABEL_2:
  CDOTAGCServerSystem::SOChanged(this, ownera, pObject, SOChangeType_t::SOChanged_Destroy);
}


// CDOTAGCServerSystem::SOChanged  (line 2402, @0x00000000029a08b0, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, DOTAGameRules, DOTA_GameMode_Name, Purge, PurgeAndDeleteElements, RemoveAll, SetValue, _Alloc_hider, basic_string, operator char const*, ~CClientLobbyWatcher, ~CUtlMemory, ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~basic_string
// calls: __cxa_guard_acquire, CDOTAGamerules::OnGCObjectUpdated, GCSDK::CGCClient::RemoveSOCacheListener, operator delete, Msg, DOTA_GameMode_descriptor, google::protobuf::internal::NameOfEnum(google::protobuf::EnumDescriptor const*,int), MinidumpUserStreamInfoAppend, CUtlString::Format, CUtlString::Get, CUtlString::FreeMemoryBlock, CSODOTALobby::Clear (27 total)
// callers: CDOTAGCServerSystem::SOCreated, CDOTAGCServerSystem::SOUpdated, CDOTAGCServerSystem::SODestroyed
// strings: "Received lobby with new match ID.  lobby_id=%llu, match_id=%llu\n", "MatchID:%llu GameMode:%s Addons:%s\n", ".%llu", "con_logfile_suffix", "Lobby object destroyed, previous lobby_id=%llu, match_id=%llu\n"
// globals: `guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby, `guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix, CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix, CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby, __dso_handle
void __fastcall CDOTAGCServerSystem::SOChanged(
        CDOTAGCServerSystem *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        SOChangeType_t changeType)
{
  GCSDK::SOID_t::ID_t m_id; // r15
  GCSDK::ISharedObjectListener *v8; // r12
  GCSDK::CGCClient *vptr_ISharedObjectListener; // rdi
  int (**vptr_CSharedObject)(...); // rbx
  __int64 v11; // rax
  double v12; // xmm0_8
  const char *v13; // rbx
  unsigned int v14; // r12d
  google::protobuf::internal *v15; // rax
  int v16; // edx
  const char **v17; // rax
  __int64 v18; // rdx
  const char *v19; // rax
  const GCSDK::CSharedObject *v20; // rsi
  __int64 v21; // r12
  int i; // ebx
  __int64 v23; // r14
  int v24; // r12d
  char *v25; // rsi
  IConVar *m_pConVar; // rdi
  __int64 ownera; // [rsp+8h] [rbp-68h]
  std::string output; // [rsp+10h] [rbp-60h] BYREF
  CUtlStringList lines; // [rsp+20h] [rbp-50h] BYREF
  GCSDK::SOID_t v30; // 0:rsi.8,8:rdx.8

  m_id = owner.m_id;
  ownera = *&owner.m_type;
  if ( `guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby) != 0 )
  {
    CSODOTALobby::CSODOTALobby(&CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby);
    __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby);
    __cxa_atexit(
      CSODOTALobby::~CSODOTALobby,
      &CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby,
      &_dso_handle);
  }
  if ( (*(pObject->_vptr_CSharedObject + 2))(pObject) == 2004 )
  {
    if ( `guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix) != 0 )
    {
      ConVarRef::ConVarRef(
        &CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix,
        "con_logfile_suffix");
      __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix);
    }
    v8 = *(this + 261);
    if ( v8 != 0 )
    {
      vptr_ISharedObjectListener = v8[1]._vptr_ISharedObjectListener;
      v8->_vptr_ISharedObjectListener = off_4304270;  // vptr: CClientLobbyWatcher
      if ( vptr_ISharedObjectListener != 0 )
        GCSDK::CGCClient::RemoveSOCacheListener(vptr_ISharedObjectListener, v8);
      operator delete(v8);
      *(this + 261) = 0;
    }
    if ( changeType == SOChangeType_t::SOChanged_Destroy )
    {
      Msg("Lobby object destroyed, previous lobby_id=%llu, match_id=%llu\n", qword_4C497A0, qword_4C49850);
      *(this + 260) = 0;
      CSODOTALobby::Clear(&CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby);
      *(this + 1752) = 0;
      *(this + 437) = 0;
      CMsgPoorNetworkConditions::Clear((this + 1760));
      m_pConVar = CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix.m_pConVar;
      *(this + 242) = 0;
      m_pConVar->SetValue("");
    }
    else
    {
      *(this + 260) = pObject;
      *(this + 1944) = LODWORD(pObject[33]._vptr_CSharedObject) != 0;
      vptr_CSharedObject = pObject[27]._vptr_CSharedObject;
      if ( *(this + 242) == vptr_CSharedObject )
      {
        v20 = pObject;
      }
      else
      {
        v11 = (*(pObject->_vptr_CSharedObject + 11))(pObject);
        *&v12 = Msg("Received lobby with new match ID.  lobby_id=%llu, match_id=%llu\n", v11, vptr_CSharedObject).m128_u64[0];
        *(this + 242) = *(*(this + 260) + 216LL);
        v13 = (*(*g_pEngineServiceMgr + 336LL))(g_pEngineServiceMgr, v12);
        v14 = *(*(this + 260) + 128LL);
        v15 = DOTA_GameMode_descriptor();
        v17 = google::protobuf::internal::NameOfEnum(v15, v14, v16);
        MinidumpUserStreamInfoAppend("MatchID:%llu GameMode:%s Addons:%s\n", *(this + 242), *v17, v13);
        v18 = *(this + 242);
        if ( v18 != 0 )
        {
          *&lines.m_Size = 0;
          CUtlString::Format(&lines, ".%llu", v18);
          v19 = CUtlString::Get(&lines);
          (*CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix.m_pConVar->_vptr_IConVar)(
            CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix.m_pConVar,
            v19);
          if ( *&lines.m_Size != 0 )
            CUtlString::FreeMemoryBlock(&lines);
        }
        else
        {
          (*CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix.m_pConVar->_vptr_IConVar)(
            CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::con_logfile_suffix.m_pConVar,
            "");
        }
        CSODOTALobby::Clear(&CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby);
        if ( g_pDOTAPlayerResource != 0 )
          CDOTA_PlayerResource::PrintRanks(g_pDOTAPlayerResource);
        *(this + 1752) = 0;
        *(this + 437) = 0;
        CMsgPoorNetworkConditions::Clear((this + 1760));
        (*(*engine + 744LL))(engine);
        v20 = *(this + 260);
      }
      output._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
      if ( ProtoBufHelper::GenerateMessageChangeString(
             &CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby,
             &v20[1],
             &output) )
      {
        lines.m_Size = 0;
        lines.m_Memory.m_pMemory = 0;
        lines.m_Memory.m_nAllocationCount = 0;
        lines.m_Memory.m_nGrowSize = 0;
        V_SplitString(output._M_dataplus._M_p, "\n", &lines);
        v21 = 0;
        for ( i = 0; lines.m_Size > i; ++v21 )
        {
          Msg("%s\n", lines.m_Memory.m_pMemory[v21]);
          ++i;
        }
        CSODOTALobby::CopyFrom(
          &CDOTAGCServerSystem::SOChanged(GCSDK::SOID_t,GCSDK::CSharedObject const*,SOChangeType_t)::s_previousLobby,
          (*(this + 260) + 8LL));
        if ( lines.m_Size > 0 )
        {
          v23 = 0;
          v24 = 0;
          do
          {
            ++v24;
            v25 = lines.m_Memory.m_pMemory[v23++];
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v25);
          }
          while ( v24 < lines.m_Size );
        }
        lines.m_Size = 0;
        if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char *,int>::Purge(&lines.m_Memory);
          if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char *,int>::Purge(&lines.m_Memory);
        }
      }
      std::string::_Rep::_M_dispose(output._M_dataplus._M_p - 24, &lines);
    }
  }
  if ( g_pGameRules != 0 )
  {
    *&v30.m_type = ownera;
    v30.m_id = m_id;
    CDOTAGamerules::OnGCObjectUpdated(g_pGameRules, v30, pObject);
  }
}


// CDOTAGCServerSystem::UseLobbyFromClient  (line 2492, @0x0000000002993010, libserver.so)  // inlines: CClientLobbyWatcher, CSOCacheFindLobby, ~CSOCacheFindLobby
// calls: GCSDK::CGCClient::AddSOCacheListener, GCSDK::CGCClient::RemoveSOCacheListener, operator new, _Unwind_Resume, operator delete
// callers: CDOTAGamerules::GameInit
// strings: "DOTA_CLIENT_GCCLIENT"
void __fastcall CDOTAGCServerSystem::UseLobbyFromClient(CDOTAGCServerSystem *const this, uint64 ulExpectedLobbyID)
{
  GCSDK::CGCClient *v4; // rax
  GCSDK::CGCClient *v5; // rbx
  const CDOTALobby *m_pCachedDotaLobby; // r12
  bool v7; // zf
  GCSDK::ISharedObjectListener *v8; // r12
  CSOCacheFindLobby SOCacheFindLobby; // [rsp+0h] [rbp-50h] BYREF

  v4 = (*(g_pApplication->_vptr_IAppSystem + 18))(g_pApplication, "DOTA_CLIENT_GCCLIENT");
  v5 = v4;
  if ( v4 != 0 )
  {
    SOCacheFindLobby.m_pCachedDotaLobby = 0;
    SOCacheFindLobby.m_pSourceClient = v4;
    SOCacheFindLobby._vptr_ISharedObjectListener = off_4304610;
    GCSDK::CGCClient::AddSOCacheListener(v4, &SOCacheFindLobby);
    m_pCachedDotaLobby = SOCacheFindLobby.m_pCachedDotaLobby;
    if ( SOCacheFindLobby.m_pCachedDotaLobby != 0
      && *(SOCacheFindLobby.m_pCachedDotaLobby + 33) != 3
      && (*(*SOCacheFindLobby.m_pCachedDotaLobby + 88LL))(SOCacheFindLobby.m_pCachedDotaLobby) == ulExpectedLobbyID )
    {
      v7 = *(this + 261) == 0;
      *(this + 260) = m_pCachedDotaLobby;
      if ( v7 )
      {
        v8 = operator new(0x18u);  // new CClientLobbyWatcher (size matches)
        v8[1]._vptr_ISharedObjectListener = v5;
        v8->_vptr_ISharedObjectListener = off_4304270;  // vptr: CClientLobbyWatcher
        v8[2]._vptr_ISharedObjectListener = (this + 2080);
        GCSDK::CGCClient::AddSOCacheListener(v5, v8);
        *(this + 261) = v8;
      }
    }
    SOCacheFindLobby._vptr_ISharedObjectListener = off_4304610;
    if ( SOCacheFindLobby.m_pSourceClient != 0 )
      GCSDK::CGCClient::RemoveSOCacheListener(SOCacheFindLobby.m_pSourceClient, &SOCacheFindLobby);
  }
}


// CDOTAGCServerSystem::DumpLobby  (line 2516, @0x0000000002993150, libserver.so)  // inlines: GetLobby
// calls: Msg
// callers: dota_server_lobby_debug
// strings: "Failed to find lobby shared object\n"
void __fastcall CDOTAGCServerSystem::DumpLobby(CDOTAGCServerSystem *const this)
{
  __int64 v1; // rdi

  v1 = *(this + 260);
  if ( v1 != 0 )
    (*(*v1 + 168LL))(v1);
  else
    Msg("Failed to find lobby shared object\n");
}


// CDOTAGCServerSystem::HasLobby  (line 2528, @0x00000000029903a0, libserver.so)
bool __fastcall CDOTAGCServerSystem::HasLobby(const CDOTAGCServerSystem *const this)
{
  return *(this + 260) != 0;
}


// CDOTAGCServerSystem::LobbyAllowsCheats  (line 2534, @0x00000000029903d0, libserver.so)  // inlines: GetLobby
bool __fastcall CDOTAGCServerSystem::LobbyAllowsCheats(const CDOTAGCServerSystem *const this)
{
  __int64 v1; // rax

  v1 = *(this + 260);
  if ( v1 != 0 )
    return *(v1 + 156);
  else
    return 1;
}


// CDOTAGCServerSystem::OnCustomGameInstallStatus  (line 2546, @0x000000000299a4c0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetLobby, GetLobbyToActivate, GetState, IsEnabled, Lock, Unlock, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, mutable_custom_game_install_status, operator=, set_has_custom_game_install_status, state, ~CProtoBufMsg, ~CVProfScope, ~basic_string
// calls: Warning, QuitServer, google::protobuf::Message::ShortDebugString(void), Msg, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope, CMsgCustomGameInstallStatus::CopyFrom, GCClientSystem (29 total)
// strings: "CDOTAGCServerSystem::OnCustomGameInstallStatus() - lobby no longer present.\n", "CDOTAGCServerSystem::OnCustomGameInstallStatus: Sending CMsgServerAvailable %s\n", "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "UGC install is not sending us frequent enough install status callbacks!  Last message was
// globals: GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool
bool __fastcall CDOTAGCServerSystem::OnCustomGameInstallStatus(
        CDOTAGCServerSystem *const this,
        const CMsgCustomGameInstallStatus *const status)
{
  char v3; // bl
  __int64 v4; // rax
  int v6; // eax
  int (**v7)(...); // rdi
  int m_enabled; // edi
  google::protobuf::Message *m_pProtoBufBody; // r13
  CMsgCustomGameInstallStatus *v10; // rdi
  CGCClientSystem *v11; // rax
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable> *v13; // r13
  const google::protobuf::Descriptor *v14; // rax
  const google::protobuf::Descriptor *v15; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  double v22; // xmm0_8
  float v23; // xmm0_4
  int v24; // eax
  int v25; // edx
  uint32 unTargetHigh; // [rsp+4h] [rbp-7Ch]
  bool pMem; // [rsp+8h] [rbp-78h]
  CMsgCustomGameInstallStatus *pMema; // [rsp+8h] [rbp-78h]
  char v29; // [rsp+1Fh] [rbp-61h] BYREF
  GCSDK::CProtoBufMsg<CMsgServerAvailable> msg; // [rsp+20h] [rbp-60h] BYREF

  v3 = *(this + 1952);
  if ( v3 == 0 )
    return 0;
  v4 = *(this + 260);
  if ( v4 == 0 || (v6 = *(v4 + 132)) != 1 && v6 != 6 )
  {
    Warning("CDOTAGCServerSystem::OnCustomGameInstallStatus() - lobby no longer present.\n");
    if ( *(status + 8) != 2 )
      QuitServer();
    return 0;
  }
  if ( *(status + 8) == 2 )
  {
    v18 = Plat_USTime();
    v19 = *(this + 227);
    v20 = v18;
    if ( v19 != 0 )
    {
      v21 = v18 - v19;
      if ( v21 < 0 )
        v22 = (v21 & 1 | (v21 >> 1)) + (v21 & 1 | (v21 >> 1));
      else
        v22 = v21;
      v23 = v22 * 0.000001;
      if ( v23 < 5.0 )
        return v3;
      if ( v23 > 10.0 )
        Warning(
          "UGC install is not sending us frequent enough install status callbacks!  Last message was sent %.1f seconds ago.\n",
          v23);
    }
    *(this + 227) = v20;
  }
  google::protobuf::Message::ShortDebugString(&msg);
  Msg("CDOTAGCServerSystem::OnCustomGameInstallStatus: Sending CMsgServerAvailable %s\n", msg._vptr_CProtoBufMsgBase);
  v7 = msg._vptr_CProtoBufMsgBase - 3;
  if ( msg._vptr_CProtoBufMsgBase - 3 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v24 = _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF);
    }
    else
    {
      v25 = *(msg._vptr_CProtoBufMsgBase - 2);
      *(msg._vptr_CProtoBufMsgBase - 2) = v25 - 1;
      v24 = v25;
    }
    if ( v24 <= 0 )
      std::string::_Rep::_M_destroy(v7, &v29);
  }
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x119Au);
  msg.m_pProtoBufBody = 0;
  msg._vptr_CProtoBufMsgBase = &off_4305010;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  pMem = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr )
    {
      v13 = operator new(0x28u);
      v14 = CMsgServerAvailable::descriptor();
      unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                       (v14->options_ + 8),
                       msgpool_hard_limit.number_,
                       msgpool_hard_limit.default_value_);
      v15 = CMsgServerAvailable::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v15->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v13, Int32, unTargetHigh);
      v13->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306490;
      GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool = v13;
      v17 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v17, v13);
      GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool);
  msg.m_pProtoBufBody = m_pProtoBufBody;
  if ( pMem )
  {
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    m_pProtoBufBody = msg.m_pProtoBufBody;
  }
  v10 = *(m_pProtoBufBody + 3);
  *(m_pProtoBufBody + 4) |= 1u;
  if ( v10 == 0 )
  {
    pMema = operator new(0x28u);
    CMsgCustomGameInstallStatus::CMsgCustomGameInstallStatus(pMema);
    *(m_pProtoBufBody + 3) = pMema;
    v10 = pMema;
  }
  CMsgCustomGameInstallStatus::CopyFrom(v10, status);
  v11 = GCClientSystem();
  CGCClientSystem::BSendMessage(v11, &msg);
  if ( *(status + 8) == 1 )
    CDOTAGCServerSystem::FinishActivateServerFromLobby(this);
  msg._vptr_CProtoBufMsgBase = &off_4305010;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v3;
}


// CDOTAGCServerSystem::GetLobbyToActivate  (line 2605, @0x00000000029931a0, libserver.so)  // inlines: GetLobby, GetState, state
const CDOTALobby *__fastcall CDOTAGCServerSystem::GetLobbyToActivate(CDOTAGCServerSystem *const this)
{
  const CDOTALobby *result; // rax
  int v2; // edx

  result = *(this + 260);
  if ( result != 0 )
  {
    v2 = *(result + 33);
    if ( v2 != 1 && v2 != 6 )
      return 0;
  }
  return result;
}


// CDOTAGCServerSystem::ActivateServerFromLobby  (line 2614, @0x00000000029a3b10, libserver.so)  // inlines: GetLobby, GetLobbyToActivate, GetState, _Bind, _Function_base, _Head_base<CDOTAGCServerSystem*, void>, _M_init_functor, _Tuple_impl, function<std::_Bind<std::_Mem_fn<bool (CDOTAGCServerSystem::*)(const CMsgCustomGameInstallStatus&)>(CDOTAGCServerSystem*, std::_Placeholder<1>)>, void>, state, tuple, ~_Function_base, ~function
// calls: AssertMsg_ConditionFailed, ConVar::SetValue, CDOTA_PlayerResource::InitLobbySteamIDs, CDOTAGCServerSystem::FinishActivateServerFromLobby, operator new, CDOTACustomGameCache::StartInstallingUGC, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAGCServerSystem::SetSessionNeed, CDOTAGCServerSystem::SetHibernation
// strings: "Trying to active a server while UGC installation in progress?!"
// globals: CDOTAGCServerSystem::ActivateServerFromLobby(void)::_assertionConstants, CDOTAGCServerSystem::OnCustomGameInstallStatus(CMsgCustomGameInstallStatus const&), g_CustomGameCache, std::_Function_handler<bool ()(CMsgCustomGameInstallStatus const&),std::_Bind<std::_Mem_fn<bool (CDOTAGCServerSystem::*)(CMsgCustomGameInstallStatus const&)> ()
void __fastcall CDOTAGCServerSystem::ActivateServerFromLobby(CDOTAGCServerSystem *const this)
{
  __int64 v2; // r12
  int v3; // eax
  _QWORD *v4; // rax
  uint64 v5; // rcx
  uint32 v6; // edx
  PublishedFileId_t v7; // rsi
  std::function<bool(const CMsgCustomGameInstallStatus&)> v8; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  if ( *(this + 1952) == 0 )
  {
    v2 = *(this + 260);
    if ( v2 != 0 )
    {
      v3 = *(v2 + 132);
      if ( v3 == 1 || v3 == 6 )
      {
        if ( g_CustomGameCache.m_pInstallJob != 0
          && AssertMsg_ConditionFailed(
               &CDOTAGCServerSystem::ActivateServerFromLobby(void)::_assertionConstants,
               "Trying to active a server while UGC installation in progress?!") != 0 )
        {
          __debugbreak();
        }
        *(this + 1952) = 1;
        ConVar::SetValue(&dota_server_wait_for_lobby, 0);
        ConVar::SetValue(&dota_tutorial_game, 0);
        CDOTA_PlayerResource::InitLobbySteamIDs(v2);
        if ( *(v2 + 349) == 0 && *(v2 + 392) != 0 && (*(*engine + 160LL))(engine) != 0 )
        {
          *(this + 227) = 0;
          v8._M_manager = 0;
          v4 = operator new(0x18u);
          v4[2] = this;
          *v4 = CDOTAGCServerSystem::OnCustomGameInstallStatus;
          v8._M_functor._M_unused._M_object = v4;
          v4[1] = 0;
          v8._M_invoker = std::_Function_handler<bool ()(CMsgCustomGameInstallStatus const&),std::_Bind<std::_Mem_fn<bool (CDOTAGCServerSystem::*)(CMsgCustomGameInstallStatus const&)> ()(CDOTAGCServerSystem*,std::_Placeholder<1>)>>::_M_invoke;
          v5 = *(v2 + 440);
          v6 = *(v2 + 460);
          v7 = *(v2 + 392);
          v8._M_manager = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (CDOTAGCServerSystem::*)(CMsgCustomGameInstallStatus const&)> ()(CDOTAGCServerSystem*,std::_Placeholder<1>)>>::_M_manager;
          CDOTACustomGameCache::StartInstallingUGC(&g_CustomGameCache, v7, v6, v5, &v8);
          if ( v8._M_manager != 0 )
            v8._M_manager(&v8, &v8, std::_Manager_operation::__destroy_functor);
        }
        else
        {
          CDOTAGCServerSystem::FinishActivateServerFromLobby(this);
        }
      }
    }
  }
}


// CDOTAGCServerSystem::FinishActivateServerFromLobby  (line 2644, @0x0000000002999f40, libserver.so)  // inlines: AddToTail, AllocProto, CProtoBufMsg, CVProfScope, CopyConstruct<CMsgDOTARealtimeGameStats*>, DOTAGameRules, Element, FreeProto, Get, GetCustomGameMode, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetFloat, GetLobby, GetLobbyToActivate, GetState, GetTVDelay, GrowMemory, IsEnabled, Lock, SetValue, Unlock, V_strcat_safe<256ul>, _M_data, c_str, operator[], state, ~CProtoBufMsg, ~CVProfScope
// calls: Warning, QuitServer, CDOTA_PlayerResource::InitPlayersWithLobby, CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby, CDOTAPlayer::GetPlayerBySteamID, CDOTAGCServerSystem::GetTeamForLobbyMember, CDOTAGamerules::ResetToInit, operator new, CMsgDOTARealtimeGameStats::CMsgDOTARealtimeGameStats, CUtlMemory<CMsgDOTARealtimeGameStats*, int>::Grow, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope (38 total)
// callers: CDOTAGCServerSystem::OnCustomGameInstallStatus, CDOTAGCServerSystem::ActivateServerFromLobby
// strings: "CDOTAGCServerSystem::FinishActivateServerFromlobby() - lobby no longer present.  Shutting, "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "changelevel %s lobby=%llu", "tv_delay", " gamemode=%d customgamemode=%s" (7 total)
// globals: `guard variable for'CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay, CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay, GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool
void __fastcall CDOTAGCServerSystem::FinishActivateServerFromLobby(CDOTAGCServerSystem *const this)
{
  __int64 v2; // r12
  int v3; // eax
  int v4; // eax
  __int64 v5; // xmm0_8
  int v6; // r13d
  CDOTAPlayer *PlayerBySteamID; // rax
  CDOTAPlayer *v8; // r14
  void (__fastcall *v9)(CDOTAPlayer *, _QWORD); // r15
  unsigned int TeamForLobbyMember; // eax
  ConVar *m_pConVarState; // rax
  int v12; // edx
  int v13; // eax
  unsigned int v14; // r13d
  CMsgDOTARealtimeGameStats **v15; // rax
  CMsgDOTARealtimeGameStats *v16; // r14
  __int64 v17; // r12
  int v18; // eax
  int m_enabled; // esi
  bool v20; // r13
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable> *v21; // r14
  const google::protobuf::Descriptor *v22; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v24; // rax
  uint32 v25; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v26; // rax
  CGCClientSystem *v27; // rax
  char *MapNameForGameMode; // r14
  int v29; // eax
  __int64 v30; // rax
  const char **v31; // rax
  CSteamID memberID; // [rsp+10h] [rbp-1F0h] BYREF
  google::protobuf::Message *pObject; // [rsp+30h] [rbp-1D0h]
  char szOpt[128]; // [rsp+40h] [rbp-1C0h] BYREF
  char szChangeLevel[264]; // [rsp+C0h] [rbp-140h] BYREF
  unsigned __int64 v36; // [rsp+1C8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v2 = *(this + 260);
  if ( v2 != 0 && ((v3 = *(v2 + 132)) == 1 || v3 == 6) )
  {
    if ( `guard variable for'CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay) != 0 )
    {
      ConVarRef::ConVarRef(&CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay, "tv_delay");
      __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay);
    }
    v4 = *(v2 + 300);
    if ( v4 != 0 )
    {
      v5 = 1133903872;
      if ( v4 != 2 )
        v5 = 1123024896;
    }
    else
    {
      v5 = 1092616192;
    }
    (*(CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay.m_pConVar->_vptr_IConVar + 1))(
      CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay.m_pConVar,
      *&v5);
    if ( *(v2 + 349) != 0 )
    {
      CDOTA_PlayerResource::InitPlayersWithLobby(g_pDOTAPlayerResource, v2);
      v6 = 0;
      CDOTA_PlayerResource::InitBroadcasterChannelsWithLobby(g_pDOTAPlayerResource, v2);
      while ( v6 < (*(*v2 + 96LL))(v2) )
      {
        memberID.m_steamid.m_comp = (*(*v2 + 104LL))(v2, v6);
        PlayerBySteamID = CDOTAPlayer::GetPlayerBySteamID(&memberID);
        v8 = PlayerBySteamID;
        if ( PlayerBySteamID != 0 )
        {
          v9 = *(PlayerBySteamID->_vptr_IHandleEntity + 70);
          TeamForLobbyMember = CDOTAGCServerSystem::GetTeamForLobbyMember(this, &memberID);
          v9(v8, TeamForLobbyMember);
        }
        ++v6;
      }
      CDOTAGamerules::ResetToInit(g_pGameRules);
    }
    else
    {
      MapNameForGameMode = GetMapNameForGameMode(v2);
      if ( V_stricmp_fast(gpGlobals->mapname, "start") == 0 )
      {
        v29 = *(v2 + 128);
        if ( v29 != 15 && v29 != 19 )
          MapNameForGameMode = "start";
      }
      v30 = (*(*v2 + 88LL))(v2);
      V_snprintf(szChangeLevel, 256, "changelevel %s lobby=%llu", MapNameForGameMode, v30);
      v31 = *(v2 + 304);
      if ( **v31 != 0 )
      {
        V_sprintf_safe<128ul>(szOpt, " gamemode=%d customgamemode=%s", *(v2 + 128), *v31);
        _V_strncat(szChangeLevel, szOpt, 256, 0xFFFFFFFFLL);
        _V_strncat(szChangeLevel, " nomapvalidation=1", 256, 0xFFFFFFFFLL);
      }
      _V_strncat(szChangeLevel, "\n", 256, 0xFFFFFFFFLL);
      (*(*engine + 280LL))(engine, szChangeLevel);
    }
    m_pConVarState = CDOTAGCServerSystem::FinishActivateServerFromLobby(void)::tv_delay.m_pConVarState;
    *(this + 538) = 0;
    v12 = (m_pConVarState->m_Value.m_fValue / dota_realtime_stat_update_interval_s.m_pParent->m_Value.m_fValue);
    v13 = 1;
    if ( v12 > 0 )
      v13 = v12;
    v14 = 0;
    *(this + 539) = v13;
    do
    {
      v16 = operator new(0x60u);
      CMsgDOTARealtimeGameStats::CMsgDOTARealtimeGameStats(v16);
      v17 = *(this + 532);
      v18 = *(this + 532);
      if ( v17 == *(this + 536) )
      {
        CUtlMemory<CMsgDOTARealtimeGameStats *,int>::Grow((this + 2136), 1);
        v18 = *(this + 532);
      }
      *(this + 532) = v18 + 1;
      v15 = (*(this + 267) + 8 * v17);
      if ( v15 != 0 )
        *v15 = v16;
      ++v14;
    }
    while ( *(this + 539) > v14 );
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&memberID, 0x119Au);
    memberID.m_steamid.m_comp = &off_4305010;
    pObject = 0;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v20 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr )
      {
        v21 = operator new(0x28u);
        v22 = CMsgServerAvailable::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v22->options_ + 8),
                  msgpool_hard_limit.number_,
                  msgpool_hard_limit.default_value_);
        v24 = CMsgServerAvailable::descriptor();
        v25 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v24->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v21, v25, Int32);
        v21->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306490;
        GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool = v21;
        v26 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v26, v21);
        GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    pObject = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool);
    if ( v20 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    v27 = GCClientSystem();
    CGCClientSystem::BSendMessage(v27, &memberID);
    memberID.m_steamid.m_comp = &off_4305010;
    if ( pObject != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool, pObject);
      pObject = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&memberID);
  }
  else
  {
    Warning("CDOTAGCServerSystem::FinishActivateServerFromlobby() - lobby no longer present.  Shutting down server\n");
    QuitServer();
  }
}


// CDOTAGCServerSystem::SetHibernation  (line 2714, @0x00000000029a7120, libserver.so)  // inlines: GetBool, GetBuildVersionForGCMessage, GetFloat, GetInt
// calls: AssertMsg_ConditionFailed, Msg, QuitServer, CDOTA_PlayerResource::ClearLobbySteamIDs, Plat_FloatTime, CDOTAGCServerSystem::UpdateGCServerInfo, CDOTAGCServerSystem::ActivateServerFromLobby
// callers: CSource2Server::ServerHibernationUpdate
// strings: "Tried to hibernate while installing UGC", "Terminating after lobby was present.\n", "Version out of date (GC wants %d, we are %d), terminating!\n"
// globals: CDOTAGCServerSystem::SetHibernation(bool)::_assertionConstants, g_gcServerVersion
void __fastcall CDOTAGCServerSystem::SetHibernation(CDOTAGCServerSystem *const this, bool bHibernating)
{
  double v3; // xmm0_8
  IVEngineServer2 *v4; // rdi
  __m128d v5; // xmm0
  float v6; // xmm2_4
  int v7; // eax
  int v8; // eax

  if ( bHibernating )
  {
    if ( g_CustomGameCache.m_pInstallJob != 0
      && AssertMsg_ConditionFailed(
           &CDOTAGCServerSystem::SetHibernation(bool)::_assertionConstants,
           "Tried to hibernate while installing UGC") != 0 )
    {
      __debugbreak();
    }
    if ( dota_quit_on_hibernate_after_lobby.m_pParent->m_Value.m_nValue != 0 && *(this + 1952) != 0 )
    {
      Msg("Terminating after lobby was present.\n");
LABEL_8:
      QuitServer();
      return;
    }
    *(this + 1952) = 0;
    CDOTA_PlayerResource::ClearLobbySteamIDs();
    v3 = Plat_FloatTime();
    v4 = engine;
    v5.m128d_f64[0] = v3 + dota_update_gc_connection_check_time.m_pParent->m_Value.m_fValue;
    v6 = _mm_movedup_pd(v5).m128d_f64[0];
    *(this + 482) = v6;
    v7 = (*(*v4 + 712LL))(v4);
    if ( v7 != 0 && g_gcServerVersion != 0 && g_gcServerVersion != v7 )
    {
      v8 = (*(*engine + 712LL))(engine);
      Msg("Version out of date (GC wants %d, we are %d), terminating!\n", g_gcServerVersion, v8);
      goto LABEL_8;
    }
    CDOTAGCServerSystem::UpdateGCServerInfo(this, 0);
  }
  else
  {
    CDOTAGCServerSystem::ActivateServerFromLobby(this);
    CDOTAGCServerSystem::UpdateGCServerInfo(this, 0);
  }
}


// CDOTAGCServerSystem::SteamIDAllowedToConnect  (line 2756, @0x0000000002999340, libserver.so)  // inlines: BGameServerAccount, DOTAGameRules, GetLobby, State_IsGameOver
// calls: CUtlVectorBase<CSteamID, CUtlMemory<CSteamID, int> >::Find, CDOTA_PlayerResource::SeenSteamID, AppIsDedicatedServer
bool __fastcall CDOTAGCServerSystem::SteamIDAllowedToConnect(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  bool result; // al
  __int64 v3; // rdi

  result = (BYTE6(steamId->m_steamid.m_unAll64Bits) & 0xF0) == 64
        || (BYTE6(steamId->m_steamid.m_unAll64Bits) & 0xF0) == 48;
  if ( result )
    return CUtlVectorBase<CSteamID,CUtlMemory<CSteamID,int>>::Find((this + 2104), steamId) != -1;
  if ( g_pGameRules == 0 || (*&g_pGameRules[6].m_szQuestName[28] - 6) > 1 )
  {
    v3 = *(this + 260);
    if ( v3 != 0 )
    {
      return (*(*v3 + 112LL))(v3) != -1;
    }
    else
    {
      result = CDOTA_PlayerResource::SeenSteamID(steamId->m_steamid.m_comp);
      if ( !result )
        return !AppIsDedicatedServer();
    }
  }
  return result;
}


// CDOTAGCServerSystem::SteamIDAllowedToP2PConnect  (line 2792, @0x00000000029993e0, libserver.so)  // inlines: BGameServerAccount, GetLobby
// calls: CUtlVectorBase<CSteamID, CUtlMemory<CSteamID, int> >::Find, CDOTA_PlayerResource::SeenSteamID
bool __fastcall CDOTAGCServerSystem::SteamIDAllowedToP2PConnect(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  char v4; // al
  __int64 v5; // rdi
  INetSupport::BaseServerInfo_t baseServerInfo; // [rsp+0h] [rbp-40h] BYREF

  if ( steamId->m_steamid.m_unAll64Bits == *(this + 237) )
    return 1;
  if ( netsupport == 0 )
    return 0;
  (*(*netsupport + 96LL))(netsupport, &baseServerInfo);
  if ( (*(&baseServerInfo + 32) & 1) == 0 || (*(&baseServerInfo + 32) & 4) != 0 )
    return 0;
  v4 = BYTE6(steamId->m_steamid.m_unAll64Bits) & 0xF0;
  if ( v4 == 64 || v4 == 48 )
    return CUtlVectorBase<CSteamID,CUtlMemory<CSteamID,int>>::Find((this + 2104), steamId) != -1;
  v5 = *(this + 260);
  if ( v5 != 0 )
    return (*(*v5 + 112LL))(v5, steamId) != -1;
  else
    return CDOTA_PlayerResource::SeenSteamID(steamId->m_steamid.m_comp);
}


// CDOTAGCServerSystem::GetTeamForLobbyMember  (line 2842, @0x00000000029931d0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, GetGameMode, GetLobby, GetMemberTeam, IsAddOnGame, members, team
// calls: DOTAGCTeamToGameTeam
// callers: CDOTAGamerules::PlayerSpawn, CDOTAGamerules::State_Leave_HERO_SELECTION, CDOTA_PlayerResource::DataTeamSpawn, CDOTAGCServerSystem::FinishActivateServerFromLobby
int __fastcall CDOTAGCServerSystem::GetTeamForLobbyMember(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  _QWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  DOTA_GC_TEAM v5; // edi

  v2 = *(this + 260);
  if ( v2 == 0 )
    return 5;
  v3 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v3 == 15 || v3 == 19 )
    return 5;
  v4 = (*(*v2 + 112LL))(*(this + 260), steamId);
  v5 = DOTA_GC_TEAM::DOTA_GC_TEAM_NOTEAM;
  if ( v4 != -1 )
    v5 = *(*(v2[6] + 8LL * v4) + 36LL);
  return DOTAGCTeamToGameTeam(v5);
}


// CDOTAGCServerSystem::IsLobbyMemberBroadcaster  (line 2860, @0x0000000002993240, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, GetLobby, GetMemberTeam, members
bool __fastcall CDOTAGCServerSystem::IsLobbyMemberBroadcaster(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  bool v2; // r12
  _QWORD *v3; // rbx
  int v4; // eax

  v2 = 0;
  v3 = *(this + 260);
  if ( v3 != 0 )
  {
    v4 = (*(*v3 + 112LL))(*(this + 260), steamId);
    if ( v4 != -1 )
      return *(*(v3[6] + 8LL * v4) + 36LL) == 2;
  }
  return v2;
}


// CDOTAGCServerSystem::IsLobbyMemberCameraman  (line 2872, @0x0000000002993280, libserver.so)  // inlines: GetLobby
bool __fastcall CDOTAGCServerSystem::IsLobbyMemberCameraman(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, _QWORD); // r12
  unsigned int v4; // eax
  __int64 v5; // rax

  v2 = *(this + 260);
  if ( v2 != 0 && (v3 = *(*v2 + 136LL), v4 = (*(*v2 + 112LL))(*(this + 260), steamId), (v5 = v3(v2, v4)) != 0) )
    return *(v5 + 184);
  else
    return 0;
}


// CDOTAGCServerSystem::GetLobbyMemberBroadcastChannel  (line 2889, @0x00000000029932d0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, GetLobby, GetMemberBroadcastChannel, GetMemberTeam, members
int __fastcall CDOTAGCServerSystem::GetLobbyMemberBroadcastChannel(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  _QWORD *v2; // rbx
  int v4; // eax
  int result; // eax
  __int64 v6; // rdx

  v2 = *(this + 260);
  if ( v2 == 0 )
    return 6;
  v4 = (*(*v2 + 112LL))(*(this + 260));
  if ( v4 == -1 || *(*(v2[6] + 8LL * v4) + 36LL) != 2 )
    return 6;
  v6 = (*(*v2 + 112LL))(v2, steamId);
  result = 6;
  if ( v6 != -1 )
    return *(*(v2[6] + 8 * v6) + 80LL);
  return result;
}


// CDOTAGCServerSystem::GetLobbyMemberBroadcastChannelSlot  (line 2904, @0x0000000002993340, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, GetLobby, GetMemberBroadcastChannelSlot, GetMemberTeam, members
int __fastcall CDOTAGCServerSystem::GetLobbyMemberBroadcastChannelSlot(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  _QWORD *v2; // rbx
  int v4; // eax
  int result; // eax
  __int64 v6; // rdx

  v2 = *(this + 260);
  if ( v2 == 0 )
    return 6;
  v4 = (*(*v2 + 112LL))(*(this + 260));
  if ( v4 == -1 || *(*(v2[6] + 8LL * v4) + 36LL) != 2 )
    return 6;
  v6 = (*(*v2 + 112LL))(v2, steamId);
  result = 6;
  if ( v6 != -1 )
    return *(*(v2[6] + 8 * v6) + 56LL);
  return result;
}


// CDOTAGCServerSystem::GetPartyIDForLobbyMember  (line 2919, @0x00000000029955a0, libserver.so)  // inlines: GetLobby, GetMemberPartyID
// calls: CDOTALobby::FindFullMemberDetails
// callers: CDOTA_OGS::LogHeroResults, CDOTAPlayer::GetCoachedTeamNum, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients
GCSDK::PlayerGroupID_t __fastcall CDOTAGCServerSystem::GetPartyIDForLobbyMember(
        const CDOTAGCServerSystem *const this,
        const CSteamID *const steamId)
{
  const CDOTALobby *v2; // rdi
  const CDOTALobbyMember *FullMemberDetails; // rax

  v2 = *(this + 260);
  if ( v2 == 0 )
    return 0;
  FullMemberDetails = CDOTALobby::FindFullMemberDetails(v2, steamId->m_steamid.m_unAll64Bits);
  if ( FullMemberDetails != 0 )
    return *(FullMemberDetails + 6);
  else
    return 0;
}


// dota_server_lobby_debug  (line 2930, @0x0000000002993180, libserver.so)
// calls: CDOTAGCServerSystem::DumpLobby
// globals: s_DOTAGCServerSystem
void __fastcall dota_server_lobby_debug(const CCommandContext *const ctx, const CCommand *const args)
{
  CDOTAGCServerSystem::DumpLobby(s_DOTAGCServerSystem);
}


// CGCServerJobSendFantasyMatch::~CGCServerJobSendFantasyMatch  (line 2935, @0x00000000029a8580, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCServerJobSendFantasyMatch::~CGCServerJobSendFantasyMatch(CGCServerJobSendFantasyMatch *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCServerJobSendFantasyMatch::~CGCServerJobSendFantasyMatch  (line 2935, @0x00000000029a85a0, libserver.so)  // inlines: ~CGCClientJob, ~CGCServerJobSendFantasyMatch
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCServerJobSendFantasyMatch::~CGCServerJobSendFantasyMatch(CGCServerJobSendFantasyMatch *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCServerJobSendFantasyMatch::BYieldingRunJob  (line 2952, @0x00000000029b3000, libserver.so)  // inlines: BYieldingCall, CMsgIDLink, CMsgIDLinkGenericClientToGCResponse, CMsgIDLinkResponse, YieldingCallEx, set_has_match_id, set_has_team_2, set_league_id, set_match_id, set_series_id, set_series_type, set_start_time, set_team_1, set_team_2, ~CMsgIDLink, ~CMsgIDLinkGenericClientToGCResponse, ~CMsgIDLinkResponse
// calls: CMsgDOTAFantasyMatch::CMsgDOTAFantasyMatch, CMsgGenericResult::CMsgGenericResult, GCSDK::YldSendSendMessageGenericClientToGCEx, Warning, CMsgGenericResult::~CMsgGenericResult, CMsgDOTAFantasyMatch::~CMsgDOTAFantasyMatch, _Unwind_Resume
// strings: "Failed to get a response from GC for fantasy match\n"
bool __fastcall CGCServerJobSendFantasyMatch::BYieldingRunJob(
        CGCServerJobSendFantasyMatch *const this,
        void *pvStartParam)
{
  MatchID_t m_unMatchID; // rdx
  _BYTE v5[32]; // [rsp+0h] [rbp-90h] BYREF
  int v6; // [rsp+20h] [rbp-70h]
  _QWORD v7[2]; // [rsp+30h] [rbp-60h] BYREF
  int v8; // [rsp+40h] [rbp-50h]
  MatchID_t v9; // [rsp+48h] [rbp-48h]
  int v10; // [rsp+50h] [rbp-40h]
  uint32 m_unSeriesID; // [rsp+54h] [rbp-3Ch]
  RTime32 m_unStartTime; // [rsp+58h] [rbp-38h]
  uint32 m_unSeriesType; // [rsp+5Ch] [rbp-34h]
  uint32 m_unTeam1; // [rsp+60h] [rbp-30h]
  uint32 m_unTeam2; // [rsp+64h] [rbp-2Ch]

  CMsgDOTAFantasyMatch::CMsgDOTAFantasyMatch(v7);
  m_unMatchID = this->m_unMatchID;
  v7[0] = &off_4305230;
  v9 = m_unMatchID;
  LODWORD(m_unMatchID) = this->m_unLeagueID;
  v8 |= 0x7Fu;
  v10 = m_unMatchID;
  m_unSeriesID = this->m_unSeriesID;
  m_unStartTime = this->m_unStartTime;
  m_unSeriesType = this->m_unSeriesType;
  m_unTeam1 = this->m_unTeam1;
  m_unTeam2 = this->m_unTeam2;
  CMsgGenericResult::CMsgGenericResult(v5);
  if ( GCSDK::YldSendSendMessageGenericClientToGCEx(
         v7,
         0x1C8Eu,
         v5,
         0xA13u,
         GCSDK::EExpectedReply::kExpectedReply_Optional) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK
    || v6 != 1 )
  {
    Warning("Failed to get a response from GC for fantasy match\n");
  }
  CMsgGenericResult::~CMsgGenericResult(v5);
  v7[0] = &off_43050B0;
  CMsgDOTAFantasyMatch::~CMsgDOTAFantasyMatch(v7);
  return 1;
}


// CDOTAGCServerSystem::GameRules_State_Enter  (line 2985, @0x00000000029a6ef0, libserver.so)  // inlines: CGCClientJob, CGCServerJobSendFantasyMatch, DOTAGameRules, GetLobby, GetTeamDetails, RTime32TimeCur, State_IsAfter, State_IsAfterPreGame, State_Order
// calls: CDOTAGCServerSystem::UpdateGCServerInfo, CDOTAGCServerSystem::IsValidFantasyGame, GCClientSystem, operator new, GCSDK::CJob::CJob, GCSDK::CJob::StartJob, RecordSocialFeedPostGameMatchEvents, CDOTAGamerules::Rules_ShouldUploadMatchStats, CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis, CDOTAGCServerSystem::MatchSignOut, CDOTAGCServerSystem::SendConnectionStats, operator delete (13 total)
// callers: CDOTAGamerules::State_Enter
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTAGCServerSystem::GameRules_State_Enter(CDOTAGCServerSystem *const this, DOTA_GameState newState)
{
  __int64 v4; // r13
  int v5; // eax
  _QWORD *v6; // rdx
  int v7; // r14d
  GCSDK::CJob *v8; // r13
  CGCClientSystem *v9; // [rsp+8h] [rbp-58h]
  int v10; // [rsp+14h] [rbp-4Ch]
  HCoroutine v11; // [rsp+18h] [rbp-48h]
  HCoroutine v12; // [rsp+1Ch] [rbp-44h]
  JobID_t v13; // [rsp+20h] [rbp-40h]
  uint32 v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+2Ch] [rbp-34h]

  if ( newState != DOTA_GameState::DOTA_GAMERULES_STATE_PRE_GAME )
  {
    if ( newState <= DOTA_GameState::DOTA_GAMERULES_STATE_WAIT_FOR_MAP_TO_LOAD )
    {
      if ( dword_491AD10 >= DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[newState] )
        goto LABEL_4;
    }
    else if ( dword_491AD10 >= 0 )
    {
      goto LABEL_4;
    }
  }
  if ( *(this + 424) != 0
    || (*(this + 424) = CRTime::sm_nTimeCur, !CDOTAGCServerSystem::IsValidFantasyGame(this))
    || (v4 = *(this + 260)) == 0 )
  {
LABEL_4:
    if ( newState != DOTA_GameState::DOTA_GAMERULES_STATE_POST_GAME )
      goto LABEL_5;
    goto LABEL_13;
  }
  v5 = *(v4 + 168);
  if ( v5 <= 0 )
  {
    v14 = 0;
    v7 = 0;
  }
  else
  {
    v6 = *(v4 + 160);
    v14 = *(*v6 + 64LL);
    if ( v5 <= 1 )
      v7 = 0;
    else
      v7 = *(v6[1] + 64LL);
  }
  v9 = GCClientSystem();
  v10 = *(v4 + 280);
  v12 = *(v4 + 264);
  v11 = *(v4 + 356);
  v13 = *(v4 + 216);
  v8 = operator new(0x160u);  // new CGCServerJobSendFantasyMatch (size matches)
  v15 = *(this + 424);
  GCSDK::CJob::CJob(v8, (v9 + 72));
  v8[1]._vptr_CJob = (v9 + 24);
  v8->_vptr_CJob = off_4305050;  // vptr: CGCServerJobSendFantasyMatch
  v8[1].m_cLocksAttempted = v7;
  *(&v8[1] + 2) = 4;
  v8[1].m_JobID = v13;
  LODWORD(v8[1].m_pvStartParam) = v15;
  HIDWORD(v8[1].m_pvStartParam) = v10;
  v8[1].m_hCoroutine = v12;
  *(&v8[1].m_hCoroutine + 1) = v11;
  v8[1].m_flags.m_uFlags = v14;
  GCSDK::CJob::StartJob(v8, 0);
  if ( newState == DOTA_GameState::DOTA_GAMERULES_STATE_POST_GAME )
  {
LABEL_13:
    RecordSocialFeedPostGameMatchEvents();
    if ( g_pGameRules != 0 && CDOTAGamerules::Rules_ShouldUploadMatchStats(g_pGameRules) )
    {
      CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis(&g_DOTARealtimeCombatAnalyzer);
      CDOTAGCServerSystem::MatchSignOut(this);
      CDOTAGCServerSystem::SendConnectionStats(this);
    }
  }
LABEL_5:
  CDOTAGCServerSystem::UpdateGCServerInfo(this, 0);
}


// CDOTAGCServerSystem::FindItemID  (line 3041, @0x00000000029933b0, libserver.so)
// calls: CDOTA_Item::GetItemID, Warning
// strings: "FindItemID called with a NULL item\n"
uint16 __fastcall CDOTAGCServerSystem::FindItemID(CDOTAGCServerSystem *const this, CDOTA_Item *pItem)
{
  if ( pItem != 0 )
    return CDOTA_Item::GetItemID(pItem);
  Warning("FindItemID called with a NULL item\n");
  return 0;
}


// CGCClientJobUploadMatchStats::~CGCClientJobUploadMatchStats  (line 3064, @0x00000000029b3110, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob, CDOTAGCServerSystem::OnFailedToSubmitStats
// globals: s_DOTAGCServerSystem
void __fastcall CGCClientJobUploadMatchStats::~CGCClientJobUploadMatchStats(CGCClientJobUploadMatchStats *const this)
{
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *m_pMsgSignOut; // rdi

  this->_vptr_CJob = off_43052F0;  // vptr: CGCClientJobUploadMatchStats
  if ( !this->m_bStatsSubmitted )
    CDOTAGCServerSystem::OnFailedToSubmitStats(s_DOTAGCServerSystem);
  m_pMsgSignOut = this->m_pMsgSignOut;
  if ( m_pMsgSignOut != 0 )
    (*(m_pMsgSignOut->_vptr_CProtoBufMsgBase + 1))(m_pMsgSignOut);
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobUploadMatchStats::~CGCClientJobUploadMatchStats  (line 3064, @0x00000000029b3170, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobUploadMatchStats
// calls: GCSDK::CJob::~CJob, operator delete, CDOTAGCServerSystem::OnFailedToSubmitStats
// globals: s_DOTAGCServerSystem
void __fastcall CGCClientJobUploadMatchStats::~CGCClientJobUploadMatchStats(CGCClientJobUploadMatchStats *const this)
{
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *m_pMsgSignOut; // rdi

  this->_vptr_CJob = off_43052F0;  // vptr: CGCClientJobUploadMatchStats
  if ( !this->m_bStatsSubmitted )
    CDOTAGCServerSystem::OnFailedToSubmitStats(s_DOTAGCServerSystem);
  m_pMsgSignOut = this->m_pMsgSignOut;
  if ( m_pMsgSignOut != 0 )
    (*(m_pMsgSignOut->_vptr_CProtoBufMsgBase + 1))(m_pMsgSignOut);
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobUploadMatchStats::BYieldingGetPermission  (line 3082, @0x00000000029af250, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, FreeProto, Get, GetBuildVersionForGCMessage, GetEMsg, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsEnabled, Lock, Unlock, YieldingWaitTime, YldSendMessageAndGetReplyEx, set_has_local_attempt, set_has_seconds_waited, set_has_server_version, set_has_total_attempt, set_local_attempt, set_seconds_waited, set_server_version, set_total_attempt, ~CProtoBufMsg, ~CVProfScope
// calls: Plat_FloatTime, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgGameMatchSignOutPermissionRequest::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc (24 total)
// callers: CGCClientJobUploadMatchStats::BYieldingRunJob
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "SIGNOUT: No reply(%d) for permission request, retrying\n", "SIGNOUT: Told to wait by GC for %d seconds\n", "SIGNOUT: Failed to get permission in the given amount of time.\n", "SIGNOUT: Permission granted by GC.\n" (7 total)
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool, GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool
__int64 __fastcall CGCClientJobUploadMatchStats::BYieldingGetPermission(
        CGCClientJobUploadMatchStats *const this,
        double a2,
        double flFailureTimeoutTime)
{
  int v3; // r12d
  int v5; // esi
  int m_enabled; // edx
  const google::protobuf::Descriptor *v7; // rax
  const google::protobuf::Descriptor *v8; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v10; // rax
  int v11; // eax
  CMsgGameMatchSignOutPermissionRequest *m_pProtoBufBody; // rdx
  CMsgGameMatchSignOutPermissionRequest *v13; // rax
  CMsgGameMatchSignOutPermissionRequest *v14; // rax
  double v15; // xmm0_8
  CMsgGameMatchSignOutPermissionRequest *v16; // rax
  int v17; // edx
  const google::protobuf::Descriptor *v18; // rax
  const google::protobuf::Descriptor *v19; // rax
  uint32 v20; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v21; // rax
  google::protobuf::Message *v22; // rax
  GCSDK::CGCClient *m_pGCClient; // rdi
  GCSDK::ESendMessageAndGetReply Reply; // r13d
  int v25; // r13d
  uint32 unTargetHigh; // [rsp+8h] [rbp-A8h]
  bool bBotMatch; // [rsp+Fh] [rbp-A1h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest> *pPool; // [rsp+10h] [rbp-A0h]
  uint32 pPoola; // [rsp+10h] [rbp-A0h]
  bool unWaitTime; // [rsp+18h] [rbp-98h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse> *unWaitTimee; // [rsp+18h] [rbp-98h]
  unsigned __int8 unWaitTimea; // [rsp+18h] [rbp-98h]
  int unWaitTimeb; // [rsp+18h] [rbp-98h]
  double unWaitTimec; // [rsp+18h] [rbp-98h]
  double unWaitTimed; // [rsp+18h] [rbp-98h]
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest> msgPermission; // [rsp+20h] [rbp-90h] BYREF
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse> msgPermissionResponse; // [rsp+50h] [rbp-60h] BYREF

  v3 = 0;
  while ( 1 )
  {
    if ( a2 <= Plat_FloatTime() )
    {
      Msg("SIGNOUT: Failed to get permission in the given amount of time.\n");
      return 0;
    }
    ++this->m_unTotalPermissionAttempt;
    ++v3;
    bBotMatch = (this->m_pMsgSignOut->m_eMsg & 0x7FFFFFFF) == 7530;
    v5 = -((this->m_pMsgSignOut->m_eMsg & 0x7FFFFFFF) != 7530);
    LOBYTE(v5) = v5 & 0x6A;
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgPermission, v5 + 7531);
    msgPermission.m_pProtoBufBody = 0;
    msgPermission._vptr_CProtoBufMsgBase = &off_4305390;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    unWaitTime = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_bRegisteredWithMemoryPoolMgr )
      {
        pPool = operator new(0x28u);
        v7 = CMsgGameMatchSignOutPermissionRequest::descriptor();
        unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                         (v7->options_ + 8),
                         msgpool_hard_limit.number_,
                         msgpool_hard_limit.default_value_);
        v8 = CMsgGameMatchSignOutPermissionRequest::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v8->options_ + 8),
                  msgpool_soft_limit.number_,
                  msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(pPool, Int32, unTargetHigh);
        pPool->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306510;
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool = pPool;
        v10 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v10, pPool);
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    msgPermission.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool);
    if ( unWaitTime )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    v11 = (*(*engine + 712LL))(engine);
    m_pProtoBufBody = msgPermission.m_pProtoBufBody;
    *(msgPermission.m_pProtoBufBody + 4) |= 1u;
    *(m_pProtoBufBody + 6) = v11;
    v13 = msgPermission.m_pProtoBufBody;
    *(msgPermission.m_pProtoBufBody + 4) |= 2u;
    *(v13 + 7) = v3;
    v14 = msgPermission.m_pProtoBufBody;
    LODWORD(m_pProtoBufBody) = this->m_unTotalPermissionAttempt;
    *(msgPermission.m_pProtoBufBody + 4) |= 4u;
    *(v14 + 8) = m_pProtoBufBody;
    v15 = Plat_FloatTime();
    v16 = msgPermission.m_pProtoBufBody;
    v17 = (v15 - this->m_flStartTime);
    *(msgPermission.m_pProtoBufBody + 4) |= 8u;
    *(v16 + 9) = v17;
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgPermissionResponse);
    msgPermissionResponse.m_pProtoBufBody = 0;
    msgPermissionResponse._vptr_CProtoBufMsgBase = &off_43053D0;
    if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_bRegisteredWithMemoryPoolMgr )
      {
        unWaitTimee = operator new(0x28u);
        v18 = CMsgGameMatchSignOutPermissionResponse::descriptor();
        pPoola = google::protobuf::internal::ExtensionSet::GetInt32(
                   (v18->options_ + 8),
                   msgpool_hard_limit.number_,
                   msgpool_hard_limit.default_value_);
        v19 = CMsgGameMatchSignOutPermissionResponse::descriptor();
        v20 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v19->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(unWaitTimee, v20, pPoola);
        unWaitTimee->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306550;
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool = unWaitTimee;
        v21 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v21, unWaitTimee);
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    v22 = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool);
    m_pGCClient = this->m_pGCClient;
    msgPermissionResponse.m_pProtoBufBody = v22;
    Reply = GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
              m_pGCClient,
              &msgPermission,
              &msgPermissionResponse,
              0x1CD6u,
              GCSDK::EExpectedReply::kExpectedReply_Optional,
              5u);
    if ( Reply != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
      goto LABEL_19;
    unWaitTimea = *(msgPermissionResponse.m_pProtoBufBody + 24);
    if ( unWaitTimea != 0 )
    {
      Msg("SIGNOUT: Permission granted by GC.\n");
      goto LABEL_39;
    }
    if ( *(msgPermissionResponse.m_pProtoBufBody + 25) != 0 )
      break;
    if ( (*(msgPermissionResponse.m_pProtoBufBody + 16) & 4) != 0 )
    {
      Msg("SIGNOUT: Told to wait by GC for %d seconds\n", *(msgPermissionResponse.m_pProtoBufBody + 7));
      v25 = *(msgPermissionResponse.m_pProtoBufBody + 7);
      unWaitTimed = v25 + Plat_FloatTime();
      while ( unWaitTimed > Plat_FloatTime() )
        GCSDK::CJob::BYieldingWaitTime(this, 0xF4240u);
      goto LABEL_27;
    }
LABEL_19:
    Msg("SIGNOUT: No reply(%d) for permission request, retrying\n", Reply);
    unWaitTimeb = 10;
    if ( AppIsDedicatedServer()
      && (Reply != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_SendFailed || !bBotMatch || v3 != 1) )
    {
      unWaitTimeb = 180;
    }
    unWaitTimec = unWaitTimeb + Plat_FloatTime();
    while ( unWaitTimec > Plat_FloatTime() )
      GCSDK::CJob::BYieldingWaitTime(this, 0xF4240u);
LABEL_27:
    msgPermissionResponse._vptr_CProtoBufMsgBase = &off_43053D0;
    if ( msgPermissionResponse.m_pProtoBufBody != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool,
        msgPermissionResponse.m_pProtoBufBody);
      msgPermissionResponse.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgPermissionResponse);
    msgPermission._vptr_CProtoBufMsgBase = &off_4305390;
    if ( msgPermission.m_pProtoBufBody != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool,
        msgPermission.m_pProtoBufBody);
      msgPermission.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgPermission);
  }
  Msg("SIGNOUT: Told to abandon signout by GC.\n");
LABEL_39:
  msgPermissionResponse._vptr_CProtoBufMsgBase = &off_43053D0;
  if ( msgPermissionResponse.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool,
      msgPermissionResponse.m_pProtoBufBody);
    msgPermissionResponse.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgPermissionResponse);
  msgPermission._vptr_CProtoBufMsgBase = &off_4305390;
  if ( msgPermission.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool,
      msgPermission.m_pProtoBufBody);
    msgPermission.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgPermission);
  return unWaitTimea;
}


// CGCClientJobUploadMatchStats::BYieldingRunJob  (line 3186, @0x00000000029b3710, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, AllocProto, CProtoBufMsg, CSteamID, CreateEvent, FreeProto, Get, Get<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg>::TypeHandler>, GetEMsg, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, New, SaveTimedRewardForMetadata, Set, Unlock, YldSendMessageAndGetReplyEx, add_timed_reward_details, additional_msgs, award_points, timed_reward_details, xp_reward_details, ~CProtoBufMsg
// calls: Plat_FloatTime, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CGCClient::YldSendMessageAndGetReplyEx, Msg, CGCClientJobUploadMatchStats::BYieldingGetPermission, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator new, CMsgGameMatchSignoutResponse::descriptor (39 total)
// strings: "SIGNOUT: Failed to sign out, asking for permission again.\n", "SIGNOUT: Match signout message successfully sent.\n", "==== TIMED REWARD REPORT ====\n", "Item %i\n", " Account ID: %i\n", " Def Index: %i\n" (8 total)
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool, s_DOTAGCServerSystem
bool __fastcall CGCClientJobUploadMatchStats::BYieldingRunJob(
        CGCClientJobUploadMatchStats *const this,
        void *pvStartParam)
{
  double v3; // xmm0_8
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *m_pMsgSignOut; // rdx
  double v5; // rbx
  double v6; // xmm1_8
  GCSDK::ESendMessageAndGetReply Reply; // eax
  char Permission; // al
  char matched; // r13
  GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse> *v11; // r13
  const google::protobuf::Descriptor *v12; // rax
  uint32 Int32; // r14d
  const google::protobuf::Descriptor *v14; // rax
  uint32 v15; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v16; // rax
  double v17; // xmm0_8
  CMsgGameMatchSignoutResponse *m_pProtoBufBody; // rax
  __int64 v19; // r13
  CLobbyTimedRewardDetails *v20; // r14
  __int64 v21; // rax
  CLobbyTimedRewardDetails *v22; // rdi
  __int64 v23; // r14
  double v24; // xmm0_8
  unsigned __int64 v25; // rax
  int PlayerIDBySteamID; // eax
  const CLobbyTimedRewardDetails *v27; // r15
  __int64 current_size; // rax
  __int64 v29; // r12
  __int64 v30; // r13
  int v31; // eax
  int v32; // ecx
  __int64 v33; // r13
  int i; // r14d
  int PlayerIDByAccountID; // r12d
  uint32 unWagerTokensRemaining; // r15d
  uint32 EventEffectsMaskForPlayerID; // eax
  __int64 v38; // rax
  __int64 nExtraMsg; // [rsp+38h] [rbp-C8h]
  uint32 nWagerTokensMax; // [rsp+40h] [rbp-C0h]
  uint32 nPremiumPoints; // [rsp+44h] [rbp-BCh]
  bool bIsOwneda; // [rsp+48h] [rbp-B8h]
  double bIsOwned; // [rsp+48h] [rbp-B8h]
  GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse> msgResponse; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v46[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+A0h] [rbp-60h]

  this->m_unTotalPermissionAttempt = 0;
  this->m_flStartTime = Plat_FloatTime();
  v3 = Plat_FloatTime();
  m_pMsgSignOut = this->m_pMsgSignOut;
  if ( (m_pMsgSignOut->m_eMsg & 0x7FFFFFFF) == 0x1D6A )
  {
    bIsOwned = v3;
    matched = BBotMatchValidForSignOut(m_pMsgSignOut->m_pProtoBufBody);
    if ( matched == 0 )
      return matched;
    v5 = bIsOwned + 600.0;
  }
  else
  {
    v5 = v3 + 64800.0;
  }
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgResponse);
  msgResponse._vptr_CProtoBufMsgBase = &off_4305410;
  msgResponse.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      v11 = operator new(0x28u);
      v12 = CMsgGameMatchSignoutResponse::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v12->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v14 = CMsgGameMatchSignoutResponse::descriptor();
      v15 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v14->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v11, v15, Int32);
      v11->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306590;
      GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool = v11;
      v16 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v16, v11);
      GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msgResponse.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool);
  while ( 1 )
  {
    Permission = CGCClientJobUploadMatchStats::BYieldingGetPermission(this, v5, v6);
    if ( dword_4C4A5A4 != 1 )
      goto LABEL_13;
    if ( Permission == 0 )
    {
      QuitServer();
LABEL_13:
      matched = 0;
      goto LABEL_14;
    }
    Reply = GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
              this->m_pGCClient,
              this->m_pMsgSignOut,
              &msgResponse,
              0x1B5Du,
              GCSDK::EExpectedReply::kExpectedReply_Optional,
              0x3Cu);
    if ( dword_4C4A5A4 != 1 )
      goto LABEL_13;
    if ( Reply == GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
      break;
    Msg("SIGNOUT: Failed to sign out, asking for permission again.\n");
  }
  *&v17 = Msg("SIGNOUT: Match signout message successfully sent.\n").m128_u64[0];
  Msg("==== TIMED REWARD REPORT ====\n", v17);
  CDOTA_PlayerResource::ClearTimedRewards(g_pDOTAPlayerResource);
  m_pProtoBufBody = msgResponse.m_pProtoBufBody;
  if ( *(msgResponse.m_pProtoBufBody + 10) > 0 )
  {
    v19 = 0;
    do
    {
      v23 = *(*(m_pProtoBufBody + 4) + 8 * v19);
      Msg("Item %i\n", v19);
      Msg(" Account ID: %i\n", *(v23 + 32));
      Msg(" Def Index: %i\n", *(v23 + 24));
      *&v24 = Msg(" Supply Crate? %i\n", *(v23 + 28)).m128_u64[0];
      v25 = (*(*engine + 704LL))(engine, v24);
      PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(
                            g_pDOTAPlayerResource,
                            (HIBYTE(v25) << 56) | *(v23 + 32) | 0x10000100000000LL);
      CDOTA_PlayerResource::AddTimedReward(g_pDOTAPlayerResource, PlayerIDBySteamID, v23);
      v27 = *(*(msgResponse.m_pProtoBufBody + 4) + 8 * v19);
      current_size = stru_4C4A688.current_size_;
      if ( stru_4C4A688.current_size_ >= stru_4C4A688.allocated_size_ )
      {
        if ( stru_4C4A688.allocated_size_ == stru_4C4A688.total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&stru_4C4A688, stru_4C4A688.allocated_size_ + 1);
        v20 = operator new(0x28u);
        CLobbyTimedRewardDetails::CLobbyTimedRewardDetails(v20);
        v21 = stru_4C4A688.current_size_;
        v22 = v20;
        ++stru_4C4A688.allocated_size_;
        ++stru_4C4A688.current_size_;
        stru_4C4A688.elements_[v21] = v20;
      }
      else
      {
        ++stru_4C4A688.current_size_;
        v22 = stru_4C4A688.elements_[current_size];
      }
      CLobbyTimedRewardDetails::CopyFrom(v22, v27);
      m_pProtoBufBody = msgResponse.m_pProtoBufBody;
      ++v19;
    }
    while ( *(msgResponse.m_pProtoBufBody + 10) > v19 );
  }
  if ( *(m_pProtoBufBody + 18) > 0 )
  {
    v29 = 0;
    do
    {
      v30 = *(*(m_pProtoBufBody + 8) + 8 * v29);
      v31 = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, *(v30 + 24));
      CDOTA_PlayerResource::SetMetaExperience(g_pDOTAPlayerResource, v31, *(v30 + 60), *(v30 + 64), *(v30 + 68));
      m_pProtoBufBody = msgResponse.m_pProtoBufBody;
      ++v29;
    }
    while ( *(msgResponse.m_pProtoBufBody + 18) > v29 );
  }
  if ( *(m_pProtoBufBody + 24) > 0 )
  {
    nExtraMsg = 0;
    do
    {
      if ( *(*(*(m_pProtoBufBody + 11) + 8 * nExtraMsg) + 32LL) == 7384 )
      {
        CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints(v46);
        if ( google::protobuf::MessageLite::ParseFromString(
               v46,
               *(*(*(msgResponse.m_pProtoBufBody + 11) + 8 * nExtraMsg) + 24LL)) != 0
          && v48 > 0 )
        {
          v33 = 0;
          for ( i = 0; i < v48; ++i )
          {
            PlayerIDByAccountID = CDOTA_PlayerResource::GetPlayerIDByAccountID(
                                    g_pDOTAPlayerResource,
                                    *(*(v47 + v33) + 24LL));
            bIsOwneda = CDOTA_PlayerResource::IsEventOwnedForPlayerID(g_pDOTAPlayerResource, PlayerIDByAccountID);
            nPremiumPoints = CDOTA_PlayerResource::GetEventPremiumPoints(g_pDOTAPlayerResource, PlayerIDByAccountID);
            unWagerTokensRemaining = CDOTA_PlayerResource::GetEventWagerTokensRemaining(
                                       g_pDOTAPlayerResource,
                                       PlayerIDByAccountID);
            nWagerTokensMax = CDOTA_PlayerResource::GetEventWagerTokensMax(g_pDOTAPlayerResource, PlayerIDByAccountID);
            EventEffectsMaskForPlayerID = CDOTA_PlayerResource::GetEventEffectsMaskForPlayerID(
                                            g_pDOTAPlayerResource,
                                            PlayerIDByAccountID);
            CDOTA_PlayerResource::SetEventPoints(
              g_pDOTAPlayerResource,
              PlayerIDByAccountID,
              bIsOwneda,
              *(*(v47 + v33) + 28LL),
              nPremiumPoints,
              0,
              unWagerTokensRemaining,
              nWagerTokensMax,
              EventEffectsMaskForPlayerID);
            v33 += 8;
          }
        }
        CMsgDOTAAwardEventPoints::~CMsgDOTAAwardEventPoints(v46);
        m_pProtoBufBody = msgResponse.m_pProtoBufBody;
      }
      v32 = nExtraMsg++;
    }
    while ( *(m_pProtoBufBody + 24) > v32 + 1 );
  }
  CDOTAGCServerSystem::OnStatsSubmitted(s_DOTAGCServerSystem, &msgResponse, this->m_pMsgSignOut);
  v38 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_match_signout", 0, 0);
  if ( v38 != 0 )
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v38, 0);
  matched = 1;
  this->m_bStatsSubmitted = 1;
LABEL_14:
  msgResponse._vptr_CProtoBufMsgBase = &off_4305410;
  if ( msgResponse.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool,
      msgResponse.m_pProtoBufBody);
    msgResponse.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgResponse);
  return matched;
}


// CDOTAGCServerSystem::SetUploadingMatchStats  (line 3323, @0x00000000029a4a20, libserver.so)
// calls: CDOTAGCServerSystem::SetSessionNeed
void __fastcall CDOTAGCServerSystem::SetUploadingMatchStats(
        CDOTAGCServerSystem *const this,
        EDOTA_Uploading_Match_Stats nUploadingMatchStats)
{
  if ( *(this + 457) != nUploadingMatchStats )
  {
    *(this + 457) = nUploadingMatchStats;
    CDOTAGCServerSystem::SetSessionNeed(this);
  }
}


// CDOTAGCServerSystem::OnFailedToSubmitStats  (line 3333, @0x00000000029a1b80, libserver.so)
// calls: CDOTAGCServerSystem::SendMatchMetadataToClients, CDOTAGCServerSystem::SendMatchDetailsToClients
// callers: CGCClientJobUploadMatchStats::~CGCClientJobUploadMatchStats
void __fastcall CDOTAGCServerSystem::OnFailedToSubmitStats(CDOTAGCServerSystem *const this)
{
  CDOTAGCServerSystem::SendMatchMetadataToClients(this);
  CDOTAGCServerSystem::SendMatchDetailsToClients(this, *(this + 231));
}


// CDOTAGCServerSystem::OnStatsSubmitted  (line 3345, @0x00000000029a4b00, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_MatchDetails_t, CNetMessagePB, CUserMessagePB, DOTAGameRules, FindGameEvent<CDOTAUserMsg_MatchDetails_t>, FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>, Get, NetworkStateChanged, PostEvent<CDOTAUserMsg_MatchDetails_t>, SendUserMessage<CDOTAUserMsg_MatchDetails_t>, Set, SetMatchID, SetMatchSignoutComplete, SetUploadingMatchStats, match_details, operator CEntityInstance*, operator=<bool>, operator=<long long unsigned int>, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_MatchDetails_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAGCServerSystem::SetSessionNeed, Msg, CDOTAGCServerSystem::SendMatchMetadataToClients, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CMsgDOTAMatch::CMsgDOTAMatch, CMsgDOTAMatch::CopyFrom, CMsgDOTAMatch::~CMsgDOTAMatch, CRecipientFilter::~CRecipientFilter, CDOTAGCServerSystem::SendMatchDetailsToClients, __stack_chk_fail, _Unwind_Resume
// callers: CGCClientJobUploadMatchStats::BYieldingRunJob
// strings: "CDOTAGCServerSystem:: Finished submitting MatchSignOutStats.  MatchID = %llu\n"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent
void __fastcall CDOTAGCServerSystem::OnStatsSubmitted(
        CDOTAGCServerSystem *const this,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse> *pMatchSignoutResponse,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMatchSignout)
{
  __int64 v5; // r14
  bool v6; // zf
  CGameRules *v7; // r13
  CGameRules *v8; // r15
  int (**vptr_CGameRules)(...); // rdi
  int (**v10)(...); // rdi
  google::protobuf::Descriptor::ExtensionRange *extension_ranges; // rax
  google::protobuf::Descriptor::ExtensionRange *v12; // rsi
  __int64 v13; // r14
  IGameEventSystem *v14; // r12
  void (__fastcall *v15)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v16[42]; // [rsp+10h] [rbp-2C0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+160h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+298h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v5 = *(pMatchSignoutResponse->m_pProtoBufBody + 3);
  *(this + 231) = v5;
  *(this + 465) = *(pMatchSignoutResponse->m_pProtoBufBody + 14);
  *(this + 464) = *(pMatchSignoutResponse->m_pProtoBufBody + 15);
  *(this + 466) = *(pMatchSignoutResponse->m_pProtoBufBody + 36);
  *(this + 235) = pMatchSignoutResponse;
  v6 = *(this + 457) == 2;
  *(this + 234) = pMatchSignout;
  if ( !v6 )
  {
    *(this + 457) = 2;
    CDOTAGCServerSystem::SetSessionNeed(this);
    v5 = *(this + 231);
  }
  v7 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v8 = g_pGameRules;
    if ( v5 != *&g_pGameRules[16].m_szQuestName[88] )
    {
      vptr_CGameRules = g_pGameRules[5]._vptr_CGameRules;
      if ( vptr_CGameRules != 0 )
      {
        if ( (*(vptr_CGameRules[1] + 49) & 4) == 0 )
        {
          (*(*vptr_CGameRules + 22))(vptr_CGameRules, 2400, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
          v8 = g_pGameRules;
        }
      }
      else
      {
        v8 = g_pGameRules;
      }
      *&v7[16].m_szQuestName[88] = v5;
    }
    if ( v8[16].m_szQuestName[96] == 0 )
    {
      v10 = v8[5]._vptr_CGameRules;
      if ( v10 != 0 && (*(v10[1] + 49) & 4) == 0 )
        (*(*v10 + 22))(v10, 2408, 0xFFFFFFFFLL, *v8[5].m_szQuestName);
      v8[16].m_szQuestName[96] = 1;
    }
    v5 = *(this + 231);
  }
  Msg("CDOTAGCServerSystem:: Finished submitting MatchSignOutStats.  MatchID = %llu\n", v5);
  CDOTAGCServerSystem::SendMatchMetadataToClients(this);
  extension_ranges = *(pMatchSignoutResponse->m_pProtoBufBody + 14);
  if ( extension_ranges == 0 )
    extension_ranges = CMsgGameMatchSignoutResponse::default_instance_->extension_ranges_;
  if ( (extension_ranges[2].start & 1) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    CMsgDOTAMatch::CMsgDOTAMatch(v16);
    v16[0] = off_4303F10;
    v12 = *(pMatchSignoutResponse->m_pProtoBufBody + 14);
    if ( v12 == 0 )
      v12 = CMsgGameMatchSignoutResponse::default_instance_->extension_ranges_;
    CMsgDOTAMatch::CopyFrom(v16, v12);
    v13 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent;
    v14 = g_pGameEventSystem;
    v15 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent);
    v15(v14, 0, 0, &filter, v13, v16, 336);
    v16[0] = &off_4303D90;
    CMsgDOTAMatch::~CMsgDOTAMatch(v16);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CDOTAGCServerSystem::SendMatchDetailsToClients(this, *(this + 231));
  }
}


// CDOTAGCServerSystem::SerializeLastMatchMetadataToString  (line 3383, @0x00000000029a1480, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char>, GrowMemory, InsertMultipleBefore, Purge, RemoveAll, _M_data, _M_rep, empty, set_has_private_metadata, set_private_metadata, size, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGCServerSystem::EnsureLastMatchMetadata, CDOTAMatchMetadataFile::CDOTAMatchMetadataFile, CDOTAMatchMetadataFile::CopyFrom, CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount, BZ2_bzBuffToBuffCompress, Msg, CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile, google::protobuf::MessageLite::SerializeToString(std::string *), CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector, CUtlVectorBase<char, CUtlMemory<char, int> >::ShiftElementsRight, CUtlVectorBase<char, CUtlMemory<char, int> >::AddVectorToTail<CUtlMemory<char, int> >, CUtlMemory<char, int>::Grow (20 total)
// callers: CDOTAHLTVDirector::UploadReplay
// strings: "CDOTAGCServerSystem:: Failed to BZ2 compress private metadata.\n"
void __fastcall CDOTAGCServerSystem::SerializeLastMatchMetadataToString(
        CDOTAGCServerSystem *const this,
        std::string *pStrOutSerialized,
        uint32 unMetadataPrivateKey)
{
  std::string *v6; // rbx
  int v7; // eax
  bool v8; // zf
  char *v9; // rbx
  __int64 m_Size; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // rbx
  uint nPrivateBytesCompressedLength; // [rsp+2Ch] [rbp-D4h] BYREF
  unsigned int unKey[4]; // [rsp+30h] [rbp-D0h] BYREF
  IceKey_0 ice; // [rsp+40h] [rbp-C0h] BYREF
  CUtlVector<char,CUtlMemory<char,int> > vecPrivateBytesCompressed; // [rsp+50h] [rbp-B0h] BYREF
  CUtlVector<char,CUtlMemory<char,int> > vecPrivateBytesMessage; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[16]; // [rsp+90h] [rbp-70h] BYREF
  int v21; // [rsp+A0h] [rbp-60h]
  std::string *v22; // [rsp+B8h] [rbp-48h]

  CDOTAGCServerSystem::EnsureLastMatchMetadata(this);
  if ( (*(this + 2176) & 8) != 0 && *(**(this + 275) - 24LL) != 0 )
  {
    CDOTAMatchMetadataFile::CDOTAMatchMetadataFile(v20);
    CDOTAMatchMetadataFile::CopyFrom(v20, (this + 2160));
    v6 = v22;
    vecPrivateBytesCompressed.m_Size = 0;
    vecPrivateBytesCompressed.m_Memory.m_pMemory = 0;
    vecPrivateBytesCompressed.m_Memory.m_nAllocationCount = 0;
    vecPrivateBytesCompressed.m_Memory.m_nGrowSize = 0;
    nPrivateBytesCompressedLength = 2 * *(v22->_M_dataplus._M_p - 3) + 1024;
    CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(&vecPrivateBytesCompressed, nPrivateBytesCompressedLength);
    if ( BZ2_bzBuffToBuffCompress(
           vecPrivateBytesCompressed.m_Memory.m_pMemory,
           &nPrivateBytesCompressedLength,
           v6->_M_dataplus._M_p,
           *(v6->_M_dataplus._M_p - 3),
           9,
           0,
           0) != 0 )
    {
      Msg("CDOTAGCServerSystem:: Failed to BZ2 compress private metadata.\n");
      vecPrivateBytesCompressed.m_Size = 0;
      if ( (vecPrivateBytesCompressed.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_5;
      CUtlMemory<char,int>::Purge(&vecPrivateBytesCompressed.m_Memory);
      if ( (vecPrivateBytesCompressed.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_5;
    }
    else
    {
      CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(&vecPrivateBytesCompressed, nPrivateBytesCompressedLength);
      vecPrivateBytesMessage.m_Size = 0;
      vecPrivateBytesMessage.m_Memory.m_nAllocationCount = 0;
      vecPrivateBytesMessage.m_Memory.m_pMemory = 0;
      vecPrivateBytesMessage.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<char,CUtlMemory<char,int>>::GrowVector(&vecPrivateBytesMessage, 4);
      CUtlVectorBase<char,CUtlMemory<char,int>>::ShiftElementsRight(&vecPrivateBytesMessage, 0, 4);
      *vecPrivateBytesMessage.m_Memory.m_pMemory = vecPrivateBytesCompressed.m_Size;
      CUtlVectorBase<char,CUtlMemory<char,int>>::AddVectorToTail<CUtlMemory<char,int>>(
        &vecPrivateBytesMessage,
        &vecPrivateBytesCompressed);
      while ( 1 )
      {
        m_Size = vecPrivateBytesMessage.m_Size;
        if ( (vecPrivateBytesMessage.m_Size & 7) == 0 )
          break;
        while ( 1 )
        {
          v11 = m_Size;
          if ( m_Size == vecPrivateBytesMessage.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<char,int>::Grow(&vecPrivateBytesMessage.m_Memory, 1);
            v11 = vecPrivateBytesMessage.m_Size;
          }
          v7 = v11 + 1;
          v8 = &vecPrivateBytesMessage.m_Memory.m_pMemory[m_Size] == 0;
          v9 = &vecPrivateBytesMessage.m_Memory.m_pMemory[m_Size];
          vecPrivateBytesMessage.m_Size = v7;
          if ( !v8 )
            break;
          m_Size = v7;
          if ( (v7 & 7) == 0 )
            goto LABEL_14;
        }
        *v9 = 0;
      }
LABEL_14:
      unKey[1] = unMetadataPrivateKey ^ 0x633A998;
      unKey[0] = unMetadataPrivateKey ^ 0x4E6C32B9;
      IceKey::IceKey(&ice, 1);
      IceKey::set(&ice, unKey);
      v12 = m_Size >> 3;
      if ( v12 != 0 )
      {
        v13 = 8LL * (v12 - 1) + 8;
        v14 = 0;
        do
        {
          IceKey::encrypt(
            &ice,
            &vecPrivateBytesMessage.m_Memory.m_pMemory[v14],
            &vecPrivateBytesMessage.m_Memory.m_pMemory[v14]);
          v14 += 8;
        }
        while ( v14 != v13 );
      }
      v21 |= 8u;
      std::string::assign(v22, vecPrivateBytesMessage.m_Memory.m_pMemory, vecPrivateBytesMessage.m_Size);
      google::protobuf::MessageLite::SerializeToString(v20, pStrOutSerialized);
      IceKey::~IceKey(&ice);
      vecPrivateBytesMessage.m_Size = 0;
      if ( (vecPrivateBytesMessage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<char,int>::Purge(&vecPrivateBytesMessage.m_Memory);
        if ( (vecPrivateBytesMessage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<char,int>::Purge(&vecPrivateBytesMessage.m_Memory);
      }
      vecPrivateBytesCompressed.m_Size = 0;
      if ( (vecPrivateBytesCompressed.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_5;
      CUtlMemory<char,int>::Purge(&vecPrivateBytesCompressed.m_Memory);
      if ( (vecPrivateBytesCompressed.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_5;
    }
    CUtlMemory<char,int>::Purge(&vecPrivateBytesCompressed.m_Memory);
LABEL_5:
    CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile(v20);
    return;
  }
  google::protobuf::MessageLite::SerializeToString((this + 2160), pStrOutSerialized);
}


// send_match_metadata  (line 3461, @0x00000000029a1bb0, libserver.so)  // inlines: DevSendMatchMetadataToClients
// calls: CDOTAGCServerSystem::SendMatchMetadataToClients
// globals: s_DOTAGCServerSystem
void __fastcall send_match_metadata(const CCommandContext *const ctx, const CCommand *const args)
{
  ++qword_4C4A5B8;
  CDOTAGCServerSystem::SendMatchMetadataToClients(s_DOTAGCServerSystem);
}


// CDOTAGCServerSystem::SendMatchMetadataToClients  (line 3469, @0x00000000029a1840, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_MatchMetadata_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_MatchMetadata_t>, FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>, GetEventIDForEventPoints, PostEvent<CDOTAUserMsg_MatchMetadata_t>, SendUserMessage<CDOTAUserMsg_MatchMetadata_t>, ToDOTAPlayer, clear, clear_has_private_metadata, clear_private_metadata, size, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_MatchMetadata_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAGCServerSystem::EnsureLastMatchMetadata, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, UTIL_PlayerByIndex, CDOTA_PlayerResource::IsEventOwnedForPlayerID, CRecipientFilter::RemoveRecipient, CRecipientFilter::AddRecipient, CDOTAMatchMetadataFile::CDOTAMatchMetadataFile, CDOTAMatchMetadataFile::CopyFrom, std::string::_M_mutate(ulong,ulong,ulong), CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile (16 total)
// callers: CDOTAGCServerSystem::OnFailedToSubmitStats, send_match_metadata, CDOTAGCServerSystem::OnStatsSubmitted
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent
void __fastcall CDOTAGCServerSystem::SendMatchMetadataToClients(CDOTAGCServerSystem *const this)
{
  int v1; // r14d
  int v2; // r12d
  CBasePlayer *v3; // rax
  const CEntityInstance *v4; // rbx
  int v5; // eax
  __int64 v6; // r14
  IGameEventSystem *v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r13
  __int64 v9; // r13
  IGameEventSystem *v10; // r12
  void (__fastcall *v11)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r14
  _QWORD v13[2]; // [rsp+20h] [rbp-2F0h] BYREF
  int v14; // [rsp+30h] [rbp-2E0h]
  std::string *v15; // [rsp+48h] [rbp-2C8h]
  CBroadcastRecipientFilter filterPublic; // [rsp+60h] [rbp-2B0h] BYREF
  CRecipientFilter filterPrivate; // [rsp+1A0h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+2D8h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( *(this + 231) == 0 && *(this + 260) == 0 && !IsDedicatedServer() )
    *(this + 231) = -1;
  CDOTAGCServerSystem::EnsureLastMatchMetadata(this);
  CRecipientFilter::CRecipientFilter(&filterPublic);
  filterPublic._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterPublic);
  CRecipientFilter::MakeReliable(&filterPublic);
  CRecipientFilter::CRecipientFilter(&filterPrivate);
  CRecipientFilter::MakeReliable(&filterPrivate);
  v1 = *(g_pDOTAPlayerResource + 248);
  if ( gpGlobals->maxClients > 0 )
  {
    v2 = 1;
    do
    {
      while ( 1 )
      {
        v3 = UTIL_PlayerByIndex(v2);
        v4 = v3;
        if ( v3 != 0 && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0 && v1 != 0 )
        {
          v5 = (*(v4->_vptr_IHandleEntity + 393))(v4);
          if ( CDOTA_PlayerResource::IsEventOwnedForPlayerID(g_pDOTAPlayerResource, v5) )
            break;
        }
        if ( gpGlobals->maxClients < ++v2 )
          goto LABEL_11;
      }
      CRecipientFilter::RemoveRecipient(&filterPublic, v4);
      CRecipientFilter::AddRecipient(&filterPrivate, v4);
      ++v2;
    }
    while ( gpGlobals->maxClients >= v2 );
  }
LABEL_11:
  CDOTAMatchMetadataFile::CDOTAMatchMetadataFile(v13);
  v13[0] = off_4303CD0;
  CDOTAMatchMetadataFile::CopyFrom(v13, (this + 2160));
  v6 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent);
  v8(v7, 0, 0, &filterPrivate, v6, v13, 56);
  std::string::_M_mutate(v15, 0, *(v15->_M_dataplus._M_p - 3), 0);
  v14 &= ~8u;
  v9 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent;
  v10 = g_pGameEventSystem;
  v11 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchMetadata_t>(bool)::s_hEvent);
  v11(v10, 0, 0, &filterPublic, v9, v13, 56);
  v13[0] = &off_4303B50;
  CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile(v13);
  CRecipientFilter::~CRecipientFilter(&filterPrivate);
  filterPublic._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterPublic);
}


// CDOTAGCServerSystem::SendMatchDetailsToClients  (line 3515, @0x000000000299aa00, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMatchAdditionalUnitInventory>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMatchHeroSelectEvent>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMatchPlayerAbilityUpgrade>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMatchPlayerPermanentBuff>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTAMatch_Player>::TypeHandler>, CDOTAUserMsg_MatchDetails_t, CNetMessagePB, CSteamID, CUserMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, DOTAGameRules, FindGameEvent<CDOTAUserMsg_MatchDetails_t>, FindItemID, FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>, Get, GetGameMode, GetGameWinner, GetInstance, GetUnitLabel, IsAddOnGame, MoveArray, New, PostEvent<CDOTAUserMsg_MatchDetails_t>, Purge, RemoveAll, Reserve, SendUserMessage<CDOTAUserMsg_MatchDetails_t>, SetFromUint64, ToDOTABaseNPC, ToDOTABaseNPCHero, add_ability_upgrades, add_additional_units_inventory, add_items, add_permanent_buffs, add_picks_bans, add_players, assign, length, memcpy, memset, operator CBaseEntity*, operator char const*, operator(), set_ability, set_account_id, set_active_battle_pass, set_assists, set_bot_difficulty, set_deaths, set_denies, set_dire_team_score, set_duration, set_engine, set_game_mode, set_gold, set_gold_per_min, set_has_ability, set_has_account_id, set_has_active_battle_pass, set_has_assists, set_has_bot_difficulty, set_has_deaths, set_has_denies, set_has_dire_team_score, set_has_duration, set_has_engine, set_has_game_mode, set_has_gold, set_has_hero_damage, set_has_hero_healing, set_has_hero_id, set_has_is_pick, set_has_item_0, set_has_item_5, set_has_kills, set_has_last_hits, set_has_level, set_has_match_flags, set_has_match_outcome, set_has_net_worth, set_has_party_id, set_has_permanent_buff, set_has_player_name, set_has_player_slot, set_has_pre_game_duration, set_has_radiant_team_score, set_has_stack_count, set_has_team, set_has_time, set_has_tower_damage, set_has_unit_name, set_has_xp_per_min, set_hero_damage, set_hero_healing, set_hero_id, set_is_pick, set_item_0, set_item_1, set_item_2, set_item_3, set_item_4, set_item_5, set_kills, set_last_hits, set_level, set_lobby_type, set_match_flags, set_match_id, set_match_outcome, set_net_worth, set_party_id, set_permanent_buff, set_player_name, set_player_slot, set_pre_game_duration, set_radiant_team_score, set_stack_count, set_starttime, set_team, set_time, set_tower_damage, set_unit_name, set_xp_per_min, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_MatchDetails_t, ~CNetMessagePB, ~CUserMessagePB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBroadcastRecipientFilter::CBroadcastRecipientFilter, CMsgDOTAMatch::CMsgDOTAMatch, CDOTAGamerules::GetDOTATime, operator new, CMatchHeroSelectEvent::CMatchHeroSelectEvent, CMsgDOTAMatch::~CMsgDOTAMatch, CRecipientFilter::~CRecipientFilter, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), CDOTAGamerules::GetPreGameDuration, CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass, CDOTAGamerules::GetTeamScore, CDOTA_PlayerResource::IsValidTeamPlayerID (54 total)
// callers: CDOTAGCServerSystem::OnFailedToSubmitStats, CDOTAGCServerSystem::OnStatsSubmitted
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTAGCServerSystem::SendMatchDetailsToClients(CDOTAGCServerSystem *const this, MatchID_t unMatchID)
{
  int v2; // eax
  float DOTATime; // xmm0_4
  int v5; // edx
  CGameRules *v6; // r12
  int v7; // eax
  __int64 v8; // rbx
  int v9; // r14d
  CMatchHeroSelectEvent *v10; // r15
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  _BOOL4 v14; // edx
  _DWORD *v15; // r13
  __int64 current_size; // rdx
  __int64 v17; // r12
  IGameEventSystem *v18; // rbx
  void (__fastcall *v19)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r13
  CDOTAGamerules *v20; // rdi
  float PreGameDuration; // xmm0_4
  bool v22; // al
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  bool i; // al
  __int64 v27; // rdx
  int *v28; // r13
  __int64 v29; // rax
  AccountID_t SteamAccountID; // eax
  int TeamSlot; // ebx
  CEntityInstance *v32; // rax
  __int64 v33; // rbx
  CDOTA_UnitInventory *Inventory; // r12
  CDOTA_Item *ItemInSlot; // rax
  int v36; // r9d
  int v37; // r8d
  int v38; // edi
  int v39; // esi
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  int m_Value; // edx
  int v44; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v46; // r12
  int v47; // r14d
  __int64 v48; // rax
  int v49; // edx
  CMatchPlayerPermanentBuff *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  CDOTA_Bot *m_pBot; // rax
  int m_iDifficulty; // eax
  CDOTA_BaseNPC *v57; // r14
  int Kills; // eax
  int Deaths; // eax
  int Assists; // eax
  int Gold; // eax
  int v62; // edx
  int v63; // edx
  int v64; // ebx
  int TotalEarnedXP; // eax
  int v66; // eax
  int LastHits; // eax
  int Denies; // eax
  CDOTAPlayer *Player; // rax
  const char *v70; // rax
  const char *v71; // rbx
  size_t v72; // rax
  __int64 v73; // rbx
  CMatchPlayerAbilityUpgrade *v74; // r12
  __int64 v75; // rax
  __int64 v76; // rdx
  int v77; // eax
  int v78; // edx
  bool v79; // cc
  __int64 v80; // rax
  int v81; // edx
  __int64 v82; // rdx
  __int64 v83; // r12
  CDOTA_UnitInventory *v84; // r15
  int v85; // edx
  __int64 v86; // rax
  std::string **v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rdx
  const char *v90; // rax
  const char *v91; // r12
  size_t v92; // rax
  int v93; // r12d
  CDOTA_Item *v94; // rdi
  unsigned __int16 ItemID; // ax
  __int64 v96; // rdx
  int v97; // r14d
  std::string *v98; // rax
  int v99; // eax
  int v100; // edx
  CDOTA_PlayerResource *v101; // rdi
  int v102; // edx
  bool IsEventOwnedForPlayerID; // al
  __int64 v104; // rdx
  float flDurationMinutes; // [rsp+40h] [rbp-310h]
  int iPlayerID; // [rsp+44h] [rbp-30Ch]
  std::string *src; // [rsp+48h] [rbp-308h]
  int iUnits; // [rsp+50h] [rbp-300h]
  CDOTA_BaseNPC *v110; // [rsp+58h] [rbp-2F8h]
  CDOTA_BaseNPC *v111; // [rsp+58h] [rbp-2F8h]
  int nUpgradeCount; // [rsp+64h] [rbp-2ECh] BYREF
  const int *pAbilityIDs; // [rsp+68h] [rbp-2E8h] BYREF
  _BYTE nItemIDs[20]; // [rsp+70h] [rbp-2E0h] OVERLAPPED BYREF
  int v115; // [rsp+84h] [rbp-2CCh]
  _QWORD v116[2]; // [rsp+90h] [rbp-2C0h] BYREF
  int v117; // [rsp+A0h] [rbp-2B0h]
  int v118; // [rsp+A4h] [rbp-2ACh]
  int v119; // [rsp+A8h] [rbp-2A8h]
  int v120; // [rsp+ACh] [rbp-2A4h]
  google::protobuf::internal::RepeatedPtrFieldBase v121; // [rsp+B0h] [rbp-2A0h] BYREF
  MatchID_t unMatchIDa; // [rsp+C8h] [rbp-288h]
  int vptr_CGameRules; // [rsp+104h] [rbp-24Ch]
  google::protobuf::internal::RepeatedPtrFieldBase v124; // [rsp+150h] [rbp-200h] BYREF
  int v125; // [rsp+168h] [rbp-1E8h]
  int v126; // [rsp+1B8h] [rbp-198h]
  _BOOL4 unMatchFlags; // [rsp+1BCh] [rbp-194h]
  int TeamScore; // [rsp+1C4h] [rbp-18Ch]
  int v129; // [rsp+1C8h] [rbp-188h]
  int v130; // [rsp+1CCh] [rbp-184h]
  int v131; // [rsp+1D8h] [rbp-178h]
  CBroadcastRecipientFilter filter; // [rsp+1E0h] [rbp-170h] BYREF
  unsigned __int64 v133; // [rsp+318h] [rbp-38h]

  v133 = __readfsqword(0x28u);
  v2 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v2 != 15 && v2 != 19 )
  {
    CBroadcastRecipientFilter::CBroadcastRecipientFilter(&filter);
    CMsgDOTAMatch::CMsgDOTAMatch(v116);
    v116[0] = off_4303F10;
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    unMatchIDa = unMatchID;
    v119 = DOTATime;
    v5 = *(this + 424);
    v117 |= 0x400080Bu;
    v120 = v5;
    v6 = g_pGameRules;
    v7 = *&g_pGameRules[52].m_szQuestName[72];
    vptr_CGameRules = g_pGameRules[116]._vptr_CGameRules;
    v125 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v7 <= 0 )
    {
      v20 = g_pGameRules;
    }
    else
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v15 = (*&v6[52].m_szQuestName[80] + v8);
        if ( v15 != 0 )
        {
          current_size = v124.current_size_;
          if ( v124.current_size_ >= v124.allocated_size_ )
          {
            if ( v124.allocated_size_ == v124.total_size_ )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v124, v124.allocated_size_ + 1);
            v10 = operator new(0x28u);
            CMatchHeroSelectEvent::CMatchHeroSelectEvent(v10);
            v11 = v124.current_size_;
            ++v124.allocated_size_;
            ++v124.current_size_;
            v124.elements_[v11] = v10;
          }
          else
          {
            ++v124.current_size_;
            v10 = v124.elements_[current_size];
          }
          v12 = *(v10 + 4);
          *(v10 + 24) = *v15 == 0;
          *(v10 + 4) = v12 | 1;
          v13 = v15[1];
          *(v10 + 4) = v12 | 5;
          *(v10 + 8) = v13;
          v14 = v15[2] == 3;
          *(v10 + 4) = v12 | 7;
          *(v10 + 7) = v14;
        }
        ++v9;
        v8 += 12;
      }
      while ( *&v6[52].m_szQuestName[72] > v9 );
      v20 = g_pGameRules;
    }
    v118 |= 0x20u;
    v126 = 1;
    PreGameDuration = CDOTAGamerules::GetPreGameDuration(v20);
    v118 |= 0x4000u;
    v131 = PreGameDuration;
    v22 = CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass(g_pDOTAPlayerResource);
    v118 |= 0x80u;
    unMatchFlags = v22;
    TeamScore = CDOTAGamerules::GetTeamScore(g_pGameRules, 2);
    v118 |= 0x200u;
    v129 = CDOTAGamerules::GetTeamScore(g_pGameRules, 3);
    v23 = v118;
    v24 = v118;
    BYTE1(v24) = BYTE1(v118) | 4;
    v118 = v24;
    v25 = *&g_pGameRules[16].m_szQuestName[80];
    if ( v25 == 2 )
    {
      v130 = 2;
      BYTE1(v23) |= 0xCu;
      v118 = v23;
    }
    else if ( v25 == 3 )
    {
      v130 = 3;
      BYTE1(v23) |= 0xCu;
      v118 = v23;
    }
    iPlayerID = 0;
    flDurationMinutes = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) / 60.0;
    for ( i = CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, 0);
          ;
          i = CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, iPlayerID) )
    {
      if ( i )
      {
        v27 = v121.current_size_;
        if ( v121.current_size_ < v121.allocated_size_ )
        {
          ++v121.current_size_;
          v28 = v121.elements_[v27];
        }
        else
        {
          if ( v121.allocated_size_ == v121.total_size_ )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v121, v121.allocated_size_ + 1);
          v28 = operator new(0x148u);
          CMsgDOTAMatch_Player::CMsgDOTAMatch_Player(v28);
          v29 = v121.current_size_;
          ++v121.allocated_size_;
          ++v121.current_size_;
          v121.elements_[v29] = v28;
        }
        SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 1u;
        v28[6] = SteamAccountID;
        TeamSlot = CDOTA_PlayerResource::GetTeamSlot(g_pDOTAPlayerResource, iPlayerID);
        if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, iPlayerID) == 3 )
          TeamSlot += 128;
        v28[4] |= 2u;
        v28[7] = TeamSlot;
        v28[8] = CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 4u;
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(nItemIDs, g_pDOTAPlayerResource, iPlayerID);
        v32 = CEntityHandle::operator CEntityInstance *(nItemIDs);
        v110 = v32;
        if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 && (v32[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          memset(nItemIDs, 0, 18);
          v33 = 0;
          Inventory = CDOTA_BaseNPC::GetInventory(v32);
          if ( Inventory != 0 )
          {
            do
            {
              ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v33);
              if ( ItemInSlot != 0 )
                *&nItemIDs[2 * v33] = CDOTA_Item::GetItemID(ItemInSlot);
              ++v33;
            }
            while ( v33 != 9 );
            v36 = *nItemIDs;
            v37 = *&nItemIDs[2];
            v38 = *&nItemIDs[4];
            v39 = *&nItemIDs[6];
            v40 = *&nItemIDs[8];
            v41 = *&nItemIDs[10];
          }
          else
          {
            v41 = 0;
            v40 = 0;
            v39 = 0;
            v38 = 0;
            v37 = 0;
            v36 = 0;
          }
          v42 = v28[4];
          v28[12] = v39;
          v28[13] = v40;
          v28[9] = v36;
          v28[10] = v37;
          v28[11] = v38;
          v28[14] = v41;
          v28[4] = v42 | 0x1F8;
          m_Value = v110->m_iCurrentLevel.m_Value;
          v28[4] = v42 | 0x800001F8;
          v28[35] = m_Value;
          if ( v110->m_ModifierManager.m_bufflist.m_Size > 0 )
          {
            v44 = 0;
            do
            {
              BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&v110->m_ModifierManager, v44, 0);
              v46 = BuffByIndex;
              if ( BuffByIndex != 0 )
              {
                v47 = (*(BuffByIndex->_vptr_CDOTA_Buff + 53))(BuffByIndex);
                if ( v47 != 0 )
                {
                  v48 = v28[72];
                  v49 = v28[73];
                  if ( v48 < v49 )
                  {
                    v54 = *(v28 + 35);
                    v28[72] = v48 + 1;
                    v50 = *(v54 + 8 * v48);
                  }
                  else
                  {
                    if ( v49 == v28[74] )
                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v28 + 70), v49 + 1);
                    v50 = operator new(0x20u);
                    CMatchPlayerPermanentBuff::CMatchPlayerPermanentBuff(v50);
                    v51 = v28[72];
                    v52 = *(v28 + 35);
                    ++v28[73];
                    v28[72] = v51 + 1;
                    *(v52 + 8 * v51) = v50;
                  }
                  *(v50 + 4) |= 1u;
                  *(v50 + 6) = v47;
                  v53 = (*(v46->_vptr_CDOTA_Buff + 27))(v46);
                  *(v50 + 4) |= 2u;
                  *(v50 + 7) = v53;
                }
              }
              ++v44;
            }
            while ( v44 < v110->m_ModifierManager.m_bufflist.m_Size );
          }
          m_pBot = v110->m_pBot;
          if ( m_pBot != 0 )
          {
            m_iDifficulty = m_pBot->m_iDifficulty;
            v28[5] |= 0x4000000u;
            v28[79] = m_iDifficulty;
          }
          v57 = v110;
        }
        else
        {
          v57 = 0;
        }
        Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x40000u;
        v28[22] = Kills;
        Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x80000u;
        v28[23] = Deaths;
        Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x100000u;
        v28[24] = Assists;
        Gold = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, iPlayerID);
        v62 = v28[4];
        v28[26] = Gold;
        v63 = v62 | 0x400000;
        v28[4] = v63;
        if ( flDurationMinutes <= 0.0 )
        {
          v66 = 0;
          v64 = 0;
        }
        else
        {
          v64 = (CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, iPlayerID) / flDurationMinutes);
          TotalEarnedXP = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, iPlayerID);
          v63 = v28[4];
          v66 = (TotalEarnedXP / flDurationMinutes);
        }
        v28[30] = v66;
        v28[29] = v64;
        v28[4] = v63 | 0x6000000;
        LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x800000u;
        v28[27] = LastHits;
        Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x1000000u;
        v28[28] = Denies;
        v28[32] = CDOTA_PlayerResource::GetRawPlayerDamage(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x10000000u;
        v28[33] = CDOTA_PlayerResource::GetRawTowerDamage(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x20000000u;
        v28[34] = CDOTA_PlayerResource::GetRawHealing(g_pDOTAPlayerResource, iPlayerID);
        v28[4] |= 0x40000000u;
        Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, iPlayerID);
        if ( Player != 0 )
        {
          v70 = (*(Player->_vptr_IHandleEntity + 106))(Player);
          v28[5] |= 2u;
          v71 = v70;
          v72 = strlen(v70);
          std::string::assign(*(v28 + 19), v71, v72);
        }
        *nItemIDs = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, iPlayerID);
        *(v28 + 22) = CDOTAGCServerSystem::GetPartyIDForLobbyMember(this, nItemIDs);
        v28[5] |= 0x100u;
        CDOTA_PlayerResource::GetAbilityUpgradesForPlayer(
          g_pDOTAPlayerResource,
          iPlayerID,
          &nUpgradeCount,
          &pAbilityIDs,
          nItemIDs);
        v73 = 0;
        if ( nUpgradeCount > 0 )
        {
          do
          {
            v80 = v28[60];
            v81 = v28[61];
            if ( v80 >= v81 )
            {
              if ( v81 == v28[62] )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v28 + 58), v81 + 1);
              v74 = operator new(0x20u);
              CMatchPlayerAbilityUpgrade::CMatchPlayerAbilityUpgrade(v74);
              v75 = v28[60];
              v76 = *(v28 + 29);
              ++v28[61];
              v28[60] = v75 + 1;
              *(v76 + 8 * v75) = v74;
            }
            else
            {
              v82 = *(v28 + 29);
              v28[60] = v80 + 1;
              v74 = *(v82 + 8 * v80);
            }
            v77 = *(v74 + 4);
            *(v74 + 6) = pAbilityIDs[v73];
            *(v74 + 4) = v77 | 1;
            v78 = *(*nItemIDs + 4 * v73);
            *(v74 + 4) = v77 | 3;
            v79 = ++v73 < nUpgradeCount;
            *(v74 + 7) = v78;
          }
          while ( v79 );
        }
        *nItemIDs = 0;
        *&nItemIDs[8] = 0;
        *&nItemIDs[16] = 0;
        v115 = 0;
        if ( v57 != 0 )
        {
          (*(v57->_vptr_IHandleEntity + 499))(v57, nItemIDs);
          if ( *nItemIDs > 0 )
          {
            v111 = 0;
            iUnits = 0;
            while ( 1 )
            {
              v83 = *(&v111->_vptr_IHandleEntity + *&nItemIDs[8]);
              if ( v83 != 0 && *(v83 + 3884) != 0 )
                break;
LABEL_84:
              ++iUnits;
              v111 = (v111 + 8);
              if ( *nItemIDs <= iUnits )
                goto LABEL_85;
            }
            v84 = CDOTA_BaseNPC::GetInventory(*(&v111->_vptr_IHandleEntity + *&nItemIDs[8]));
            v85 = v28[67];
            v86 = v28[66];
            if ( v86 < v85 )
            {
              v104 = *(v28 + 32);
              v28[66] = v86 + 1;
              v87 = *(v104 + 8 * v86);
            }
            else
            {
              if ( v85 == v28[68] )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v28 + 64), v85 + 1);
              v87 = operator new(0x30u);
              CMatchAdditionalUnitInventory::CMatchAdditionalUnitInventory(v87);
              v88 = v28[66];
              v89 = *(v28 + 32);
              ++v28[67];
              v28[66] = v88 + 1;
              *(v89 + 8 * v88) = v87;
            }
            v90 = CUtlString::Get((v83 + 3424));
            *(v87 + 4) |= 1u;
            v91 = v90;
            v92 = strlen(v90);
            std::string::assign(v87[3], v91, v92);
            v93 = 0;
            while ( 2 )
            {
              if ( v84 != 0 && (v94 = CDOTA_UnitInventory::GetItemInSlot(v84, v93)) != 0 )
              {
                ItemID = CDOTA_Item::GetItemID(v94);
                v96 = *(v87 + 10);
                v97 = ItemID;
                v98 = v87[4];
                if ( v96 != *(v87 + 11) )
                  goto LABEL_75;
LABEL_78:
                src = v98;
                v99 = v96 + 1;
                v100 = 2 * v96;
                if ( v99 >= v100 )
                  v100 = v99;
                if ( v100 < 4 )
                  v100 = 4;
                *(v87 + 11) = v100;
                v98 = operator new[](4LL * v100);
                v87[4] = v98;
                v96 = *(v87 + 10);
                if ( src != 0 )
                {
                  memcpy(v98, src, 4 * v96);
                  operator delete[](src);
                  v98 = v87[4];
                  v96 = *(v87 + 10);
                }
              }
              else
              {
                v96 = *(v87 + 10);
                v97 = 0;
                v98 = v87[4];
                if ( v96 == *(v87 + 11) )
                  goto LABEL_78;
              }
LABEL_75:
              ++v93;
              *(v87 + 10) = v96 + 1;
              *(&v98->_M_dataplus._M_p + v96) = v97;
              if ( v93 == 9 )
                goto LABEL_84;
              continue;
            }
          }
        }
LABEL_85:
        v28[78] = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, iPlayerID);
        v101 = g_pDOTAPlayerResource;
        v102 = v28[5] | 0x2000000;
        v28[5] = v102;
        if ( *(v101 + 248) != 0 )
        {
          IsEventOwnedForPlayerID = CDOTA_PlayerResource::IsEventOwnedForPlayerID(v101, iPlayerID);
          v102 = v28[5];
        }
        else
        {
          IsEventOwnedForPlayerID = 0;
        }
        *(v28 + 147) = IsEventOwnedForPlayerID;
        v28[5] = v102 | 0x1000000;
        *nItemIDs = 0;
        if ( (v115 & 0xC0000000) == 0 )
        {
          CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&nItemIDs[8]);
          if ( (v115 & 0xC0000000) == 0 )
            CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&nItemIDs[8]);
        }
      }
      if ( ++iPlayerID == 64 )
        break;
    }
    v17 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent;
    v18 = g_pGameEventSystem;
    v19 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MatchDetails_t>(bool)::s_hEvent);
    v19(v18, 0, 0, &filter, v17, v116, 336);
    v116[0] = &off_4303D90;
    CMsgDOTAMatch::~CMsgDOTAMatch(v116);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTAGCServerSystem::EnsureLastMatchMetadata  (line 3719, @0x00000000029a10e0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, DOTAGameRules, Get, Get<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, GetLobby, New, _Alloc_hider, add_item_rewards, add_teams, basic_string, mutable_metadata, set_event_game_custom_table, set_has_event_game_custom_table, set_has_lobby_id, set_has_metadata, set_has_private_metadata, set_has_report_until_time, set_has_version, set_lobby_id, set_match_id, set_private_metadata, set_report_until_time, set_version, timed_reward_details, ~CUtlBuffer, ~CUtlMemory, ~basic_string
// calls: CDOTAMatchMetadataFile::Clear, operator new, CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team, CDOTAGCServerSystem::WriteMatchMetadataTeam, CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata, CDOTAGCServerSystem::WriteMatchPrivateMetadata, google::protobuf::MessageLite::SerializeToString(std::string *), std::string::assign(std::string const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata, CLobbyTimedRewardDetails::CLobbyTimedRewardDetails, CLobbyTimedRewardDetails::CopyFrom (20 total)
// callers: CDOTAGCServerSystem::SerializeLastMatchMetadataToString, CDOTAGCServerSystem::SendMatchMetadataToClients
void __fastcall CDOTAGCServerSystem::EnsureLastMatchMetadata(CDOTAGCServerSystem *const this)
{
  int v2; // eax
  int *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  int v8; // r13d
  int m_nValue; // eax
  __int64 v10; // rax
  int v11; // esi
  CDOTAMatchMetadata_Team *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  CDOTAMatchMetadata_Team *v15; // rdx
  int v16; // esi
  __int64 v17; // r14
  __int64 v18; // rdx
  CLobbyTimedRewardDetails *v19; // r15
  __int64 v20; // rax
  CLobbyTimedRewardDetails *v21; // rdi
  __int64 v22; // rdx
  const CLobbyTimedRewardDetails *v23; // rsi
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rdx
  KeyValues *v27; // rdi
  unsigned __int64 m_Put; // rdx
  unsigned __int8 *m_pMemory; // rsi
  std::string *v30; // rdi
  char v31; // [rsp+1Fh] [rbp-91h] BYREF
  std::string strPrivateMetadata; // [rsp+20h] [rbp-90h] BYREF
  CUtlBuffer bufEventMetadata; // [rsp+30h] [rbp-80h] BYREF

  if ( *(this + 273) != *(this + 231) )
  {
    CDOTAMatchMetadataFile::Clear((this + 2160));
    v2 = *(this + 544);
    *(this + 552) = 1;
    v3 = *(this + 274);
    v4 = *(this + 231);
    *(this + 544) = v2 | 7;
    *(this + 273) = v4;
    if ( v3 == 0 )
    {
      v3 = operator new(0x60u);
      CDOTAMatchMetadata::CDOTAMatchMetadata(v3);
      *(this + 274) = v3;
    }
    v5 = *(this + 260);
    v6 = 0;
    if ( v5 != 0 )
      v6 = (*(*v5 + 88LL))(v5);
    v7 = v3[4];
    *(v3 + 9) = v6;
    v8 = 0;
    v3[4] = v7 | 4;
    m_nValue = dota_post_game_report_time.m_pParent->m_Value.m_nValue;
    v3[4] = v7 | 0xC;
    *(v3 + 10) = CRTime::sm_nTimeCur + m_nValue;
    while ( ++v8 != 14 )
    {
      while ( (v8 - 6) <= 7 || (v8 - 2) <= 1 )
      {
        v10 = v3[8];
        v11 = v3[9];
        if ( v10 < v11 )
        {
          v18 = *(v3 + 3);
          v3[8] = v10 + 1;
          v15 = *(v18 + 8 * v10);
        }
        else
        {
          if ( v11 == v3[10] )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v3 + 1, v11 + 1);
          v12 = operator new(0x90u);
          CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team(v12);
          v13 = v3[8];
          v14 = *(v3 + 3);
          ++v3[9];
          v3[8] = v13 + 1;
          *(v14 + 8 * v13) = v12;
          v15 = v12;
        }
        v16 = v8++;
        CDOTAGCServerSystem::WriteMatchMetadataTeam(this, v16, v15);
        if ( v8 == 14 )
          goto LABEL_15;
      }
    }
LABEL_15:
    v17 = 0;
    LOBYTE(v8) = 0;
    if ( *(this + 516) > 0 )
    {
      do
      {
        v24 = v3[14];
        v25 = v3[15];
        if ( v24 >= v25 )
        {
          if ( v25 == v3[16] )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v3 + 2, v25 + 1);
          v19 = operator new(0x28u);
          CLobbyTimedRewardDetails::CLobbyTimedRewardDetails(v19);
          v20 = v3[14];
          v21 = v19;
          v22 = *(v3 + 6);
          ++v3[15];
          v3[14] = v20 + 1;
          *(v22 + 8 * v20) = v19;
        }
        else
        {
          v26 = *(v3 + 6);
          v3[14] = v24 + 1;
          v21 = *(v26 + 8 * v24);
        }
        ++v8;
        v23 = *(*(this + 257) + v17);
        v17 += 8;
        CLobbyTimedRewardDetails::CopyFrom(v21, v23);
      }
      while ( v8 < *(this + 516) );
    }
    if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 19 )
    {
      CUtlBuffer::CUtlBuffer(&bufEventMetadata, 0, 0, 0);
      v27 = *&g_pGameRules[19].m_szQuestName[56];
      if ( v27 != 0 && KeyValues::WriteAsBinary(v27, &bufEventMetadata) )
      {
        m_Put = bufEventMetadata.m_Put;
        m_pMemory = bufEventMetadata.m_Memory.m_pMemory;
        v30 = *(v3 + 11);
        v3[4] |= 0x10u;
        std::string::assign(v30, m_pMemory, m_Put);
      }
      CUtlMemory<unsigned char,int>::Purge(&bufEventMetadata.m_Memory);
    }
    CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata(&bufEventMetadata);
    CDOTAGCServerSystem::WriteMatchPrivateMetadata(this, &bufEventMetadata);
    strPrivateMetadata._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
    google::protobuf::MessageLite::SerializeToString(&bufEventMetadata, &strPrivateMetadata);
    *(this + 544) |= 8u;
    std::string::assign(*(this + 275), &strPrivateMetadata);
    std::string::_Rep::_M_dispose(strPrivateMetadata._M_dataplus._M_p - 24, &v31);
    CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata(&bufEventMetadata);
  }
}


// CDOTAGCServerSystem::WriteMatchPrivateMetadata  (line 3779, @0x0000000002993580, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, New, add_teams
// calls: operator new, CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team, CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::EnsureLastMatchMetadata
void __fastcall CDOTAGCServerSystem::WriteMatchPrivateMetadata(
        CDOTAGCServerSystem *const this,
        CDOTAMatchPrivateMetadata *const msgPrivateMetadata)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  int v5; // ebx
  __int64 v6; // rax
  int v7; // esi
  CDOTAMatchPrivateMetadata_Team *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  CDOTAMatchPrivateMetadata_Team *v11; // rdx
  int v12; // esi
  __int64 v13; // rdx

  v2 = (msgPrivateMetadata + 24);
  v5 = 0;
  while ( ++v5 != 14 )
  {
    while ( (v5 - 6) <= 7 || (v5 - 2) <= 1 )
    {
      v6 = *(msgPrivateMetadata + 8);
      v7 = *(msgPrivateMetadata + 9);
      if ( v6 < v7 )
      {
        v13 = *(msgPrivateMetadata + 3);
        *(msgPrivateMetadata + 8) = v6 + 1;
        v11 = *(v13 + 8 * v6);
      }
      else
      {
        if ( v7 == *(msgPrivateMetadata + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v2, v7 + 1);
        v8 = operator new(0x50u);
        CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team(v8);
        v9 = *(msgPrivateMetadata + 8);
        v10 = *(msgPrivateMetadata + 3);
        ++*(msgPrivateMetadata + 9);
        *(msgPrivateMetadata + 8) = v9 + 1;
        *(v10 + 8 * v9) = v8;
        v11 = v8;
      }
      v12 = v5++;
      CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam(this, v12, v11);
      if ( v5 == 14 )
        return;
    }
  }
}


// CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam  (line 3792, @0x0000000002993470, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, New, add_players, set_dota_team, set_has_dota_team
// calls: CDOTAHeatmapManager::Get, CDOTAHeatmapManager::SerializeBuildingData, CDOTA_PlayerResource::GetTeam, operator new, CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player, CDOTAGCServerSystem::WriteMatchPrivateMetadataTeamPlayer, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::WriteMatchPrivateMetadata
void __fastcall CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam(
        CDOTAGCServerSystem *const this,
        int nTeam,
        CDOTAMatchPrivateMetadata_Team *const msgTeam)
{
  int v5; // ebx
  CDOTAHeatmapManager *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  CDOTAMatchPrivateMetadata_Team_Player *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  CDOTAMatchPrivateMetadata_Team_Player *v12; // rdx
  int v13; // esi
  __int64 v14; // rdx

  v5 = 0;
  *(msgTeam + 4) |= 1u;
  *(msgTeam + 18) = nTeam;
  v6 = CDOTAHeatmapManager::Get();
  CDOTAHeatmapManager::SerializeBuildingData(v6, nTeam, msgTeam);
  do
  {
    while ( nTeam != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5) )
    {
      if ( ++v5 == 64 )
        return;
    }
    v7 = *(msgTeam + 8);
    v8 = *(msgTeam + 9);
    if ( v7 < v8 )
    {
      v14 = *(msgTeam + 3);
      *(msgTeam + 8) = v7 + 1;
      v12 = *(v14 + 8 * v7);
    }
    else
    {
      if ( v8 == *(msgTeam + 10) )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msgTeam + 1, v8 + 1);
      v9 = operator new(0x28u);
      CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player(v9);
      v10 = *(msgTeam + 8);
      v11 = *(msgTeam + 3);
      ++*(msgTeam + 9);
      *(msgTeam + 8) = v10 + 1;
      *(v11 + 8 * v10) = v9;
      v12 = v9;
    }
    v13 = v5++;
    CDOTAGCServerSystem::WriteMatchPrivateMetadataTeamPlayer(this, v13, v12);
  }
  while ( v5 != 64 );
}


// CDOTAGCServerSystem::WriteMatchPrivateMetadataTeamPlayer  (line 3810, @0x00000000029933e0, libserver.so)  // inlines: set_account_id, set_has_account_id, set_has_player_slot, set_player_slot
// calls: CDOTA_PlayerResource::GetSteamAccountID, CDOTA_PlayerResource::GetTeamSlot, CDOTA_PlayerResource::GetTeam, CDOTAHeatmapManager::Get, CDOTAHeatmapManager::SerializePlayerData
// callers: CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam
void __fastcall CDOTAGCServerSystem::WriteMatchPrivateMetadataTeamPlayer(
        CDOTAGCServerSystem *const this,
        int nPlayerID,
        CDOTAMatchPrivateMetadata_Team_Player *const msgPlayer)
{
  AccountID_t SteamAccountID; // r15d
  int TeamSlot; // r13d
  int Team; // eax
  int v8; // edx
  CDOTAHeatmapManager *v9; // rax

  SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, nPlayerID);
  TeamSlot = CDOTA_PlayerResource::GetTeamSlot(g_pDOTAPlayerResource, nPlayerID);
  Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerID);
  *(msgPlayer + 6) = SteamAccountID;
  if ( Team == 3 )
    TeamSlot += 128;
  v8 = *(msgPlayer + 4);
  *(msgPlayer + 7) = TeamSlot;
  *(msgPlayer + 4) = v8 | 3;
  v9 = CDOTAHeatmapManager::Get();
  CDOTAHeatmapManager::SerializePlayerData(v9, nPlayerID, msgPlayer);
}


// CDOTAGCServerSystem::WriteMatchMetadataTeam  (line 3828, @0x0000000002994350, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, CopyArray, DOTAGameRules, GetGameMode, MoveArray, New, Reserve, add_graph_experience, add_graph_gold_earned, add_graph_net_worth, add_players, memcpy, operator(), set_cm_captain_player_id, set_cm_first_pick, set_cm_penalty, set_dota_team, set_has_cm_captain_player_id, set_has_cm_first_pick, set_has_cm_penalty, set_has_dota_team
// calls: CDOTA_PlayerResource::GetTeam, operator new, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer, CDotaStatManager::GetTotalEarnedXPTimeline, CTimeline::GetValue, operator new [], memcpy, operator delete [], CDotaStatManager::GetTotalEarnedGoldTimeline, CDotaStatManager::GetTotalNetWorthTimeline, CDOTAGamerules::CM_GetCaptain (16 total)
// callers: CDOTAGCServerSystem::EnsureLastMatchMetadata
void __fastcall CDOTAGCServerSystem::WriteMatchMetadataTeam(
        CDOTAGCServerSystem *const this,
        int nTeam,
        CDOTAMatchMetadata_Team *const msgTeam)
{
  int v5; // ebx
  __int64 v6; // rax
  int v7; // edx
  CDOTAMatchMetadata_Team_Player *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  CDOTAMatchMetadata_Team_Player *v11; // rdx
  int v12; // esi
  CTimeline *TotalEarnedXPTimeline; // rax
  const CTimeline *v14; // rbx
  int v15; // r15d
  void *v16; // rax
  float Value; // xmm0_4
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx
  void *v21; // r14
  __int64 v22; // rdx
  CTimeline *TotalEarnedGoldTimeline; // rax
  const CTimeline *v24; // rbx
  int v25; // r15d
  void *v26; // rax
  float v27; // xmm0_4
  __int64 v28; // rdx
  int v29; // eax
  int v30; // edx
  void *v31; // r14
  CTimeline *TotalNetWorthTimeline; // rax
  const CTimeline *v33; // rbx
  int v34; // r15d
  void *v35; // rax
  float v36; // xmm0_4
  __int64 v37; // rdx
  int v38; // eax
  int v39; // edx
  void *v40; // r14
  CDOTAGamerules *v41; // rdi
  int v42; // eax
  bool v43; // al
  int Captain; // eax
  CDOTAGamerules *v45; // rdi
  int PenaltyLevel; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v47; // [rsp+0h] [rbp-40h]
  float flValuea; // [rsp+8h] [rbp-38h]
  float flValueb; // [rsp+8h] [rbp-38h]
  float flValuec; // [rsp+8h] [rbp-38h]

  v5 = 0;
  *(msgTeam + 4) |= 1u;
  v47 = (msgTeam + 24);
  *(msgTeam + 16) = nTeam;
  do
  {
    while ( nTeam != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5) )
    {
      if ( ++v5 == 64 )
        goto LABEL_9;
    }
    v6 = *(msgTeam + 8);
    v7 = *(msgTeam + 9);
    if ( v6 < v7 )
    {
      v22 = *(msgTeam + 3);
      *(msgTeam + 8) = v6 + 1;
      v11 = *(v22 + 8 * v6);
    }
    else
    {
      if ( v7 == *(msgTeam + 10) )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v47, v7 + 1);
      v8 = operator new(0x108u);
      CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player(v8);
      v9 = *(msgTeam + 8);
      v10 = *(msgTeam + 3);
      ++*(msgTeam + 9);
      *(msgTeam + 8) = v9 + 1;
      *(v10 + 8 * v9) = v8;
      v11 = v8;
    }
    v12 = v5++;
    CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer(this, v12, v11);
  }
  while ( v5 != 64 );
LABEL_9:
  TotalEarnedXPTimeline = CDotaStatManager::GetTotalEarnedXPTimeline(g_pDotaStatManager, nTeam);
  v14 = TotalEarnedXPTimeline;
  if ( TotalEarnedXPTimeline != 0 && TotalEarnedXPTimeline->m_nBucketCount.m_Value > 0 )
  {
    v15 = 0;
    do
    {
      Value = CTimeline::GetValue(v14, v15);
      v18 = *(msgTeam + 14);
      if ( v18 == *(msgTeam + 15) )
      {
        v19 = v18 + 1;
        v20 = 2 * v18;
        v21 = *(msgTeam + 6);
        flValuea = Value;
        if ( v19 >= v20 )
          v20 = v19;
        if ( v20 < 4 )
          v20 = 4;
        *(msgTeam + 15) = v20;
        v16 = operator new[](4LL * v20);
        Value = flValuea;
        *(msgTeam + 6) = v16;
        if ( v21 != 0 )
        {
          memcpy(v16, v21, 4LL * *(msgTeam + 14));
          operator delete[](v21);
          v16 = *(msgTeam + 6);
          v18 = *(msgTeam + 14);
          Value = flValuea;
        }
        else
        {
          v18 = *(msgTeam + 14);
        }
      }
      else
      {
        v16 = *(msgTeam + 6);
      }
      ++v15;
      *(msgTeam + 14) = v18 + 1;
      *(v16 + v18) = Value;
    }
    while ( v15 < v14->m_nBucketCount.m_Value );
  }
  TotalEarnedGoldTimeline = CDotaStatManager::GetTotalEarnedGoldTimeline(g_pDotaStatManager, nTeam);
  v24 = TotalEarnedGoldTimeline;
  if ( TotalEarnedGoldTimeline != 0 && TotalEarnedGoldTimeline->m_nBucketCount.m_Value > 0 )
  {
    v25 = 0;
    do
    {
      v27 = CTimeline::GetValue(v24, v25);
      v28 = *(msgTeam + 20);
      if ( v28 == *(msgTeam + 21) )
      {
        v29 = v28 + 1;
        v30 = 2 * v28;
        v31 = *(msgTeam + 9);
        flValueb = v27;
        if ( v29 >= v30 )
          v30 = v29;
        if ( v30 < 4 )
          v30 = 4;
        *(msgTeam + 21) = v30;
        v26 = operator new[](4LL * v30);
        v27 = flValueb;
        *(msgTeam + 9) = v26;
        if ( v31 != 0 )
        {
          memcpy(v26, v31, 4LL * *(msgTeam + 20));
          operator delete[](v31);
          v26 = *(msgTeam + 9);
          v28 = *(msgTeam + 20);
          v27 = flValueb;
        }
        else
        {
          v28 = *(msgTeam + 20);
        }
      }
      else
      {
        v26 = *(msgTeam + 9);
      }
      ++v25;
      *(msgTeam + 20) = v28 + 1;
      *(v26 + v28) = v27;
    }
    while ( v25 < v24->m_nBucketCount.m_Value );
  }
  TotalNetWorthTimeline = CDotaStatManager::GetTotalNetWorthTimeline(g_pDotaStatManager, nTeam);
  v33 = TotalNetWorthTimeline;
  if ( TotalNetWorthTimeline != 0 && TotalNetWorthTimeline->m_nBucketCount.m_Value > 0 )
  {
    v34 = 0;
    do
    {
      v36 = CTimeline::GetValue(v33, v34);
      v37 = *(msgTeam + 24);
      if ( v37 == *(msgTeam + 25) )
      {
        v38 = v37 + 1;
        v39 = 2 * v37;
        v40 = *(msgTeam + 11);
        flValuec = v36;
        if ( v38 >= v39 )
          v39 = v38;
        if ( v39 < 4 )
          v39 = 4;
        *(msgTeam + 25) = v39;
        v35 = operator new[](4LL * v39);
        v36 = flValuec;
        *(msgTeam + 11) = v35;
        if ( v40 != 0 )
        {
          memcpy(v35, v40, 4LL * *(msgTeam + 24));
          operator delete[](v40);
          v35 = *(msgTeam + 11);
          v37 = *(msgTeam + 24);
          v36 = flValuec;
        }
        else
        {
          v37 = *(msgTeam + 24);
        }
      }
      else
      {
        v35 = *(msgTeam + 11);
      }
      ++v34;
      *(msgTeam + 24) = v37 + 1;
      *(v35 + v37) = v36;
    }
    while ( v34 < v33->m_nBucketCount.m_Value );
  }
  v41 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v42 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v42 == 2 || v42 == 8 || v42 == 16 )
    {
      v43 = nTeam == *&g_pGameRules[11].m_szQuestName[36];
      *(msgTeam + 4) |= 0x20u;
      *(msgTeam + 68) = v43;
      Captain = CDOTAGamerules::CM_GetCaptain(v41, nTeam);
      v45 = g_pGameRules;
      *(msgTeam + 4) |= 0x40u;
      *(msgTeam + 30) = Captain;
      PenaltyLevel = CDOTAGamerules::CM_GetPenaltyLevel(v45, nTeam);
      *(msgTeam + 4) |= 0x200u;
      *(msgTeam + 31) = PenaltyLevel;
    }
  }
}


// CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer  (line 3902, @0x0000000002993660, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, CopyArray, FirstCriteria, FirstHandle, Get, Get<google::protobuf::RepeatedPtrField<CMsgGameMatchSignoutResponse_PlayerMetadata>::TypeHandler>, GetCriteria, GetEntityIdentity, GetEntryIndex, GetInstance, GetItemPurchased, GetItemPurchasedTime, GetWearable, IndexToIdentity, IsValid, Key, LookupEntity, MoveArray, New, NextCriteria, NextHandle, Reserve, add_ability_upgrades, add_auto_style_criteria, add_equipped_econ_items, add_graph_net_worth, add_inventory_snapshot, add_item_id, add_items, add_kills, add_level_up_times, end, memcpy, operator CEconWearable*, operator CEntityInstance*, operator(), operator[], players_metadata, set_account_id, set_assists, set_avg_assists_x16, set_avg_deaths_x16, set_avg_gpm_x16, set_avg_kills_x16, set_avg_stats_calibrated, set_avg_xpm_x16, set_best_assists_x16, set_best_gpm_x16, set_best_kills_x16, set_best_win_streak, set_best_xpm_x16, set_count, set_deaths, set_game_time, set_has_account_id, set_has_assists, set_has_avg_assists_x16, set_has_avg_deaths_x16, set_has_avg_gpm_x16, set_has_avg_kills_x16, set_has_avg_stats_calibrated, set_has_avg_xpm_x16, set_has_best_assists_x16, set_has_best_gpm_x16, set_has_best_kills_x16, set_has_best_win_streak, set_has_best_xpm_x16, set_has_count, set_has_deaths, set_has_game_time, set_has_item_id, set_has_kills, set_has_level, set_has_name_token, set_has_player_slot, set_has_purchase_time, set_has_value, set_has_victim_slot, set_has_win_streak, set_item_id, set_kills, set_level, set_name_token, set_player_slot, set_purchase_time, set_value, set_victim_slot, set_win_streak
// calls: CDOTA_PlayerResource::GetSteamAccountID, CDOTA_PlayerResource::GetTeamSlot, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetAbilityUpgradesForPlayer, operator new [], memcpy, operator delete [], CDOTA_PlayerResource::GetKillListForPlayer, operator new, CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill, CDOTA_PlayerResource::GetLevel, CDOTA_PlayerResource::GetHeroLevelUpTime (32 total)
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeam
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer(
        CDOTAGCServerSystem *const this,
        int nPlayerID,
        CDOTAMatchMetadata_Team_Player *const msgPlayer)
{
  AccountID_t SteamAccountID; // r12d
  int TeamSlot; // ebx
  int Team; // eax
  int v8; // esi
  __int64 v9; // r14
  int v10; // r13d
  int v11; // edx
  CDOTA_PlayerResource *v12; // rdi
  void *v13; // rax
  __int64 v14; // rdx
  int v15; // r12d
  int v16; // eax
  int v17; // edx
  void *v18; // rbx
  __int64 v19; // rbx
  CDOTAMatchMetadata_Team_PlayerKill *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // edx
  int v25; // r12d
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rdx
  int v29; // r14d
  int Level; // ebx
  float HeroLevelUpTime; // xmm0_4
  __int64 v32; // rcx
  int v33; // r13d
  void *v34; // rax
  int v35; // eax
  int v36; // ecx
  CTimeline *PlayerNetWorthTimeline; // rax
  const CTimeline *v38; // rbx
  int v39; // r14d
  void *v40; // rax
  float Value; // xmm0_4
  __int64 v42; // rdx
  int v43; // eax
  int v44; // edx
  void *v45; // r12
  CEntityInstance *v46; // rax
  const CDOTA_BaseNPC *v47; // rax
  const CAutoStyleCriteria *AutoStyleCriteria; // rax
  const CAutoStyleCriteria *v49; // r14
  int m_nAllocationCount; // edx
  int *p_flags_and_hash; // rcx
  int *v52; // rax
  int v53; // ebx
  __int64 v54; // rbx
  int i; // r12d
  CDOTAMatchMetadata_Team_ItemPurchase *v56; // r13
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  float v60; // xmm0_4
  __int64 v61; // rax
  int v62; // edx
  __int64 v63; // rdx
  CDOTASpectatorGraphManager *DOTASpectatorGraphManager; // rax
  const CUtlVector<sPlayerSnapshot,CUtlMemory<sPlayerSnapshot,int> > *PlayerSnapshotsForPlayerID; // rax
  sPlayerSnapshot *m_pMemory; // rbx
  __int64 m_Size; // r14
  __int64 v68; // rax
  int v69; // edx
  CDOTAMatchMetadata_Team_InventorySnapshot *v70; // r12
  __int64 v71; // rax
  CDOTAMatchMetadata_Team_InventorySnapshot *v72; // r14
  __int64 v73; // rdx
  float m_fGameTime; // xmm0_4
  __int64 v75; // r12
  int v76; // r13d
  __int64 v77; // rdx
  void *v78; // rax
  int v79; // eax
  int unDeaths; // edx
  int unAssists; // edx
  int unLevel; // edx
  __int64 j; // rbx
  CHandle<CEconWearable> *v84; // rdx
  uint32 m_Index; // eax
  __int16 v86; // cx
  CEntityIdentity *v87; // rdx
  CEntityIdentity *v88; // rdx
  CEconItemView *Item; // rax
  const CEconItemView *v90; // r12
  CEconItem *SOCData; // r12
  __int64 v92; // rax
  int v93; // edx
  CSOEconItem *v94; // r13
  __int64 v95; // rax
  CSOEconItem *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // rax
  int v102; // edx
  int v103; // eax
  int v104; // ecx
  int v105; // edx
  int v106; // edx
  int v107; // edx
  int v108; // edx
  int v109; // edx
  int v110; // edx
  int v111; // edx
  int v112; // edx
  int v113; // edx
  int v114; // edx
  __int64 v115; // rdx
  int v116; // eax
  int v117; // edx
  int v118; // edx
  __int64 v119; // r12
  int *v120; // rcx
  __int64 v121; // rax
  CDOTAMatchMetadata_Team_AutoStyleCriteria *v122; // r13
  __int64 v123; // rax
  __int64 v124; // rdx
  int v125; // eax
  int v126; // edx
  int *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rdx
  void *src; // [rsp+18h] [rbp-68h]
  int srca; // [rsp+18h] [rbp-68h]
  CUtlVectorBase<sPlayerSnapshot,CUtlMemory<sPlayerSnapshot,int> >::const_iterator __for_end; // [rsp+20h] [rbp-60h]
  int __for_enda; // [rsp+20h] [rbp-60h]
  CUtlArray<int,24ul> *flValue; // [rsp+28h] [rbp-58h]
  void *flValuea; // [rsp+28h] [rbp-58h]
  float flValueb; // [rsp+28h] [rbp-58h]
  const CDOTA_BaseNPC *flValuec; // [rsp+28h] [rbp-58h]
  int upgradeCount; // [rsp+34h] [rbp-4Ch] BYREF
  const int *pAbilityIDs; // [rsp+38h] [rbp-48h] BYREF
  const int *pAbilityTimes; // [rsp+40h] [rbp-40h] BYREF

  SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, nPlayerID);
  TeamSlot = CDOTA_PlayerResource::GetTeamSlot(g_pDOTAPlayerResource, nPlayerID);
  Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerID);
  v8 = nPlayerID;
  *(msgPlayer + 10) = SteamAccountID;
  if ( Team == 3 )
    TeamSlot += 128;
  v9 = 0;
  v10 = 0;
  v11 = *(msgPlayer + 4);
  *(msgPlayer + 11) = TeamSlot;
  v12 = g_pDOTAPlayerResource;
  *(msgPlayer + 4) = v11 | 5;
  CDOTA_PlayerResource::GetAbilityUpgradesForPlayer(v12, v8, &upgradeCount, &pAbilityIDs, &pAbilityTimes);
  if ( upgradeCount > 0 )
  {
    do
    {
      v14 = *(msgPlayer + 8);
      v15 = pAbilityIDs[v9];
      if ( v14 == *(msgPlayer + 9) )
      {
        v16 = v14 + 1;
        v17 = 2 * v14;
        v18 = *(msgPlayer + 3);
        if ( v16 >= v17 )
          v17 = v16;
        if ( v17 < 4 )
          v17 = 4;
        *(msgPlayer + 9) = v17;
        v13 = operator new[](4LL * v17);
        v14 = *(msgPlayer + 8);
        *(msgPlayer + 3) = v13;
        if ( v18 != 0 )
        {
          memcpy(v13, v18, 4 * v14);
          operator delete[](v18);
          v13 = *(msgPlayer + 3);
          v14 = *(msgPlayer + 8);
        }
      }
      else
      {
        v13 = *(msgPlayer + 3);
      }
      ++v10;
      ++v9;
      *(msgPlayer + 8) = v14 + 1;
      *(v13 + v14) = v15;
    }
    while ( upgradeCount > v10 );
  }
  v19 = 0;
  flValue = CDOTA_PlayerResource::GetKillListForPlayer(g_pDOTAPlayerResource, nPlayerID);
  if ( flValue != 0 )
  {
    do
    {
      v25 = flValue->m_Memory[v19];
      if ( v25 > 0 )
      {
        v26 = *(msgPlayer + 20);
        v27 = *(msgPlayer + 21);
        if ( v26 >= v27 )
        {
          if ( v27 == *(msgPlayer + 22) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msgPlayer + 3, v27 + 1);
          v20 = operator new(0x20u);
          CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill(v20);
          v21 = *(msgPlayer + 20);
          v22 = *(msgPlayer + 9);
          ++*(msgPlayer + 21);
          *(msgPlayer + 20) = v21 + 1;
          *(v22 + 8 * v21) = v20;
        }
        else
        {
          v28 = *(msgPlayer + 9);
          *(msgPlayer + 20) = v26 + 1;
          v20 = *(v28 + 8 * v26);
        }
        v23 = CDOTA_PlayerResource::GetTeamSlot(g_pDOTAPlayerResource, v19);
        v24 = *(v20 + 4);
        *(v20 + 7) = v25;
        *(v20 + 6) = v23;
        *(v20 + 4) = v24 | 3;
      }
      ++v19;
    }
    while ( v19 != 24 );
  }
  v29 = 2;
  Level = CDOTA_PlayerResource::GetLevel(g_pDOTAPlayerResource, nPlayerID);
  if ( Level > 1 )
  {
    do
    {
      HeroLevelUpTime = CDOTA_PlayerResource::GetHeroLevelUpTime(g_pDOTAPlayerResource, nPlayerID, v29);
      v32 = *(msgPlayer + 46);
      v33 = HeroLevelUpTime;
      v34 = *(msgPlayer + 22);
      if ( v32 == *(msgPlayer + 47) )
      {
        flValuea = *(msgPlayer + 22);
        v35 = v32 + 1;
        v36 = 2 * v32;
        if ( v35 >= v36 )
          v36 = v35;
        if ( v36 < 4 )
          v36 = 4;
        *(msgPlayer + 47) = v36;
        v34 = operator new[](4LL * v36);
        *(msgPlayer + 22) = v34;
        if ( flValuea != 0 )
        {
          memcpy(v34, flValuea, 4LL * *(msgPlayer + 46));
          operator delete[](flValuea);
          v34 = *(msgPlayer + 22);
        }
        v32 = *(msgPlayer + 46);
      }
      ++v29;
      *(msgPlayer + 46) = v32 + 1;
      *(v34 + v32) = v33;
    }
    while ( Level >= v29 );
  }
  PlayerNetWorthTimeline = CDotaStatManager::GetPlayerNetWorthTimeline(g_pDotaStatManager, nPlayerID);
  v38 = PlayerNetWorthTimeline;
  if ( PlayerNetWorthTimeline != 0 && PlayerNetWorthTimeline->m_nBucketCount.m_Value > 0 )
  {
    v39 = 0;
    do
    {
      Value = CTimeline::GetValue(v38, v39);
      v42 = *(msgPlayer + 50);
      if ( v42 == *(msgPlayer + 51) )
      {
        v43 = v42 + 1;
        v44 = 2 * v42;
        v45 = *(msgPlayer + 24);
        flValueb = Value;
        if ( v43 >= v44 )
          v44 = v43;
        if ( v44 < 4 )
          v44 = 4;
        *(msgPlayer + 51) = v44;
        v40 = operator new[](4LL * v44);
        Value = flValueb;
        *(msgPlayer + 24) = v40;
        if ( v45 != 0 )
        {
          memcpy(v40, v45, 4LL * *(msgPlayer + 50));
          operator delete[](v45);
          v40 = *(msgPlayer + 24);
          v42 = *(msgPlayer + 50);
          Value = flValueb;
        }
        else
        {
          v42 = *(msgPlayer + 50);
        }
      }
      else
      {
        v40 = *(msgPlayer + 24);
      }
      ++v39;
      *(msgPlayer + 50) = v42 + 1;
      *(v40 + v42) = Value;
    }
    while ( v39 < v38->m_nBucketCount.m_Value );
  }
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&pAbilityTimes, g_pDOTAPlayerResource, nPlayerID);
  v46 = CEntityHandle::operator CEntityInstance *(&pAbilityTimes);
  if ( v46 != 0 )
  {
    v47 = __dynamic_cast(v46, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
    flValuec = v47;
    if ( v47 != 0 )
    {
      AutoStyleCriteria = CDOTA_BaseNPC::GetAutoStyleCriteria(v47);
      v49 = AutoStyleCriteria;
      if ( AutoStyleCriteria != 0 )
      {
        m_nAllocationCount = AutoStyleCriteria->m_criteria.m_table.m_nAllocationCount;
        p_flags_and_hash = &AutoStyleCriteria->m_criteria.m_table.m_pMemory->flags_and_hash;
        if ( m_nAllocationCount > 0 )
        {
          v52 = p_flags_and_hash + 3;
          v53 = 0;
          if ( *p_flags_and_hash >= 0 )
          {
            v53 = 0;
            goto LABEL_108;
          }
          while ( ++v53 != m_nAllocationCount )
          {
            v52 += 3;
            if ( *(v52 - 3) >= 0 )
            {
              if ( v53 != -1 )
              {
                while ( 1 )
                {
LABEL_108:
                  v118 = *(msgPlayer + 63);
                  v119 = 3LL * v53;
                  v120 = &p_flags_and_hash[v119];
                  srca = v120[2];
                  __for_enda = v120[1];
                  v121 = *(msgPlayer + 62);
                  if ( v121 < v118 )
                  {
                    v128 = *(msgPlayer + 30);
                    *(msgPlayer + 62) = v121 + 1;
                    v122 = *(v128 + 8 * v121);
                  }
                  else
                  {
                    if ( v118 == *(msgPlayer + 64) )
                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msgPlayer + 10, v118 + 1);
                    v122 = operator new(0x20u);
                    CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria(v122);
                    v123 = *(msgPlayer + 62);
                    v124 = *(msgPlayer + 30);
                    ++*(msgPlayer + 63);
                    *(msgPlayer + 62) = v123 + 1;
                    *(v124 + 8 * v123) = v122;
                  }
                  ++v53;
                  v125 = *(v122 + 4) | 3;
                  *(v122 + 7) = srca;
                  *(v122 + 6) = __for_enda;
                  *(v122 + 4) = v125;
                  v126 = v49->m_criteria.m_table.m_nAllocationCount;
                  p_flags_and_hash = &v49->m_criteria.m_table.m_pMemory->flags_and_hash;
                  if ( v53 >= v126 )
                    break;
                  v127 = &p_flags_and_hash[3 * v53 + 3];
                  if ( p_flags_and_hash[v119 + 3] < 0 )
                  {
                    while ( ++v53 != v126 )
                    {
                      v127 += 3;
                      if ( *(v127 - 3) >= 0 )
                        goto LABEL_118;
                    }
                    goto LABEL_55;
                  }
LABEL_118:
                  if ( v53 == -1 )
                    goto LABEL_55;
                }
              }
              break;
            }
          }
        }
      }
LABEL_55:
      v54 = 0;
      for ( i = 0; i < SLODWORD(flValuec[1].m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc); *(v56 + 7) = v60 )
      {
        v61 = *(msgPlayer + 26);
        v62 = *(msgPlayer + 27);
        if ( v61 >= v62 )
        {
          if ( v62 == *(msgPlayer + 28) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msgPlayer + 4, v62 + 1);
          v56 = operator new(0x20u);
          CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase(v56);
          v57 = *(msgPlayer + 26);
          v58 = *(msgPlayer + 12);
          ++*(msgPlayer + 27);
          *(msgPlayer + 26) = v57 + 1;
          *(v58 + 8 * v57) = v56;
        }
        else
        {
          v63 = *(msgPlayer + 12);
          *(msgPlayer + 26) = v61 + 1;
          v56 = *(v63 + 8 * v61);
        }
        ++i;
        v59 = *(v56 + 4);
        *(v56 + 6) = *(&flValuec[1].m_LocalToGlobal.m_Tree.m_Elements.m_pMemory->m_Left + v54);
        *(v56 + 4) = v59 | 1;
        v60 = *(&flValuec[1].m_LocalToGlobal.m_Tree.m_Elements.m_pMemory->m_Data.key + v54);
        *(v56 + 4) = v59 | 3;
        v54 += 12;
      }
      DOTASpectatorGraphManager = GetDOTASpectatorGraphManager();
      if ( DOTASpectatorGraphManager != 0 )
      {
        PlayerSnapshotsForPlayerID = CDOTASpectatorGraphManager::GetPlayerSnapshotsForPlayerID(
                                       DOTASpectatorGraphManager,
                                       nPlayerID);
        if ( PlayerSnapshotsForPlayerID != 0 )
        {
          m_pMemory = PlayerSnapshotsForPlayerID->m_Memory.m_pMemory;
          m_Size = PlayerSnapshotsForPlayerID->m_Size;
          for ( __for_end = &m_pMemory[m_Size]; m_pMemory != __for_end; *(v72 + 14) = unLevel )
          {
            v68 = *(msgPlayer + 56);
            v69 = *(msgPlayer + 57);
            if ( v68 < v69 )
            {
              v115 = *(msgPlayer + 27);
              *(msgPlayer + 56) = v68 + 1;
              v72 = *(v115 + 8 * v68);
            }
            else
            {
              if ( v69 == *(msgPlayer + 58) )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msgPlayer + 9, v69 + 1);
              v70 = operator new(0x40u);
              CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot(v70);
              v71 = *(msgPlayer + 56);
              v72 = v70;
              v73 = *(msgPlayer + 27);
              ++*(msgPlayer + 57);
              *(msgPlayer + 56) = v71 + 1;
              *(v73 + 8 * v71) = v70;
            }
            m_fGameTime = m_pMemory->m_fGameTime;
            v75 = 0;
            *(v72 + 4) |= 2u;
            *(v72 + 10) = m_fGameTime;
            do
            {
              while ( 1 )
              {
                v76 = m_pMemory->m_nItemID[v75];
                if ( v76 != 0 )
                  break;
                if ( ++v75 == 6 )
                  goto LABEL_76;
              }
              v77 = *(v72 + 8);
              v78 = *(v72 + 3);
              if ( v77 == *(v72 + 9) )
              {
                src = *(v72 + 3);
                v116 = v77 + 1;
                v117 = 2 * v77;
                if ( v116 >= v117 )
                  v117 = v116;
                if ( v117 < 4 )
                  v117 = 4;
                *(v72 + 9) = v117;
                v78 = operator new[](4LL * v117);
                *(v72 + 3) = v78;
                v77 = *(v72 + 8);
                if ( src != 0 )
                {
                  memcpy(v78, src, 4 * v77);
                  operator delete[](src);
                  v78 = *(v72 + 3);
                  v77 = *(v72 + 8);
                }
              }
              ++v75;
              *(v72 + 8) = v77 + 1;
              *(v78 + v77) = v76;
            }
            while ( v75 != 6 );
LABEL_76:
            v79 = *(v72 + 4);
            ++m_pMemory;
            *(v72 + 11) = m_pMemory[-1].unKills;
            *(v72 + 4) = v79 | 4;
            unDeaths = m_pMemory[-1].unDeaths;
            *(v72 + 4) = v79 | 0xC;
            *(v72 + 12) = unDeaths;
            unAssists = m_pMemory[-1].unAssists;
            *(v72 + 4) = v79 | 0x1C;
            *(v72 + 13) = unAssists;
            unLevel = m_pMemory[-1].unLevel;
            *(v72 + 4) = v79 | 0x3C;
          }
        }
      }
      for ( j = 0; flValuec->m_hMyWearables.m_Vector.m_Size > j; ++j )
      {
        v84 = &flValuec->m_hMyWearables.m_Vector.m_Memory.m_pMemory[j];
        m_Index = v84->m_Index;
        if ( v84->m_Index + 2 > 1 )
        {
          v86 = v84->m_Index;
          v87 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v84->m_Index) >> 9) & 0x3F];
          if ( v87 != 0 )
          {
            v88 = &v87[v86 & 0x1FF];
            if ( v88 != 0 && m_Index == v88->m_EHandle.m_Index && v88->m_pInstance != 0 )
            {
              Item = CEconEntity::GetItem(v88->m_pInstance);
              v90 = Item;
              if ( Item != 0 && !CEconItemView::IsBaseItem(Item) )
              {
                SOCData = CEconItemView::GetSOCData(v90);
                if ( SOCData != 0 )
                {
                  v92 = *(msgPlayer + 14);
                  v93 = *(msgPlayer + 15);
                  if ( v92 < v93 )
                  {
                    v129 = *(msgPlayer + 6);
                    *(msgPlayer + 14) = v92 + 1;
                    v96 = *(v129 + 8 * v92);
                  }
                  else
                  {
                    if ( v93 == *(msgPlayer + 16) )
                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msgPlayer + 2, v93 + 1);
                    v94 = operator new(0x88u);
                    CSOEconItem::CSOEconItem(v94);
                    v95 = *(msgPlayer + 14);
                    v96 = v94;
                    v97 = *(msgPlayer + 6);
                    ++*(msgPlayer + 15);
                    *(msgPlayer + 14) = v95 + 1;
                    *(v97 + 8 * v95) = v94;
                  }
                  CEconItem::SerializeToProtoBufItem(SOCData, v96);
                }
              }
            }
          }
        }
      }
      v98 = *(this + 235);
      if ( v98 != 0 )
      {
        v99 = *(v98 + 32);
        if ( *(v99 + 128) > 0 )
        {
          v100 = 0;
          do
          {
            v101 = *(*(v99 + 120) + 8 * v100);
            if ( *(v101 + 24) == LODWORD(flValuec[1].m_pfnMoveDone.__pfn) )
            {
              v102 = *(v101 + 28);
              v103 = *(msgPlayer + 4);
              *(msgPlayer + 30) = v102;
              *(msgPlayer + 4) = v103 | 0x40;
              v104 = v103;
              LOBYTE(v104) = v103 | 0xC0;
              v105 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 32LL);
              *(msgPlayer + 4) = v104;
              *(msgPlayer + 31) = v105;
              v106 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 36LL);
              *(msgPlayer + 4) = v103 | 0x1C0;
              *(msgPlayer + 32) = v106;
              v107 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 40LL);
              *(msgPlayer + 4) = v103 | 0x3C0;
              *(msgPlayer + 33) = v107;
              v108 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 44LL);
              *(msgPlayer + 4) = v103 | 0x7C0;
              *(msgPlayer + 34) = v108;
              v109 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 48LL);
              *(msgPlayer + 4) = v103 | 0xFC0;
              *(msgPlayer + 35) = v109;
              v110 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 52LL);
              *(msgPlayer + 4) = v103 | 0x1FC0;
              *(msgPlayer + 36) = v110;
              v111 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 56LL);
              *(msgPlayer + 4) = v103 | 0x3FC0;
              *(msgPlayer + 37) = v111;
              v112 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 60LL);
              *(msgPlayer + 4) = v103 | 0x7FC0;
              *(msgPlayer + 38) = v112;
              v113 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 64LL);
              *(msgPlayer + 4) = v103 | 0xFFC0;
              *(msgPlayer + 39) = v113;
              v114 = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 68LL);
              *(msgPlayer + 4) = v103 | 0x1FFC0;
              *(msgPlayer + 40) = v114;
              LOBYTE(v114) = *(*(*(*(*(this + 235) + 32LL) + 120LL) + 8 * v100) + 72LL) >= dota_metadata_min_games_for_avg_stats.m_pParent->m_Value.m_nValue;
              *(msgPlayer + 4) = v103 | 0x101FFC0;
              *(msgPlayer + 212) = v114;
              CDOTA_PlayerResource::AddStatsResultToMetadata(g_pDOTAPlayerResource, msgPlayer, nPlayerID);
              v98 = *(this + 235);
            }
            v99 = *(v98 + 32);
            ++v100;
          }
          while ( *(v99 + 128) > v100 );
        }
      }
    }
  }
}


// CDOTAGCServerSystem::FillMatchDetailsForTeam  (line 4111, @0x0000000002998150, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMatchAdditionalUnitInventory>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMatchPlayerAbilityUpgrade>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMatchPlayerPermanentBuff>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam_CPlayer>::TypeHandler>, AddPlayerAbilityUpgrades, CSteamID, CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, DOTAGameRules, FindItemID, Get, GetAssists, GetDeaths, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetKills, GetUnitLabel, IndexToIdentity, IsAddOnGame, IsValid, LookupEntity, MoveArray, New, Purge, RemoveAll, Reserve, SetFromUint64, __find<int const*, int>, add_ability_upgrades, add_additional_units_inventory, add_items, add_num_players, add_permanent_buffs, add_players, add_talent_ability_ids, add_teams, assign, find<int const*, int>, length, memcpy, mutable_custom_game_data, operator CEntityInstance*, operator char const*, operator(), set_ability, set_assists, set_claimed_denies, set_claimed_farm_gold, set_claimed_misses, set_deaths, set_denies, set_dota_team, set_gold, set_gold_per_min, set_gold_spent, set_has_ability, set_has_assists, set_has_claimed_denies, set_has_claimed_farm_gold, set_has_claimed_misses, set_has_custom_game_data, set_has_deaths, set_has_denies, set_has_dota_team, set_has_gold, set_has_gold_spent, set_has_hero_damage, set_has_hero_healing, set_has_hero_id, set_has_kills, set_has_last_hits, set_has_leaver_status, set_has_level, set_has_match_player_flags, set_has_misses, set_has_net_worth, set_has_party_id, set_has_permanent_buff, set_has_scaled_assists, set_has_scaled_deaths, set_has_scaled_hero_damage, set_has_scaled_hero_healing, set_has_scaled_kills, set_has_scaled_tower_damage, set_has_stack_count, set_has_steam_id, set_has_support_ability_value, set_has_support_gold, set_has_time, set_has_time_last_seen, set_has_tower_damage, set_has_unit_name, set_has_winner, set_has_xp_per_minute, set_hero_damage, set_hero_healing, set_hero_id, set_kills, set_last_hits, set_leaver_status, set_level, set_match_player_flags, set_misses, set_net_worth, set_party_id, set_permanent_buff, set_scaled_assists, set_scaled_deaths, set_scaled_hero_damage, set_scaled_hero_healing, set_scaled_kills, set_scaled_tower_damage, set_stack_count, set_steam_id, set_support_ability_value, set_support_gold, set_time, set_time_last_seen, set_tower_damage, set_unit_name, set_winner, set_xp_per_minute, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator new, CMsgGameMatchSignOut_CTeam::CMsgGameMatchSignOut_CTeam, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CMsgGameMatchSignOut_CTeam_CPlayer::CMsgGameMatchSignOut_CTeam_CPlayer, CDOTA_PlayerResource::GetSteamIDIgnoringBot, CDOTA_PlayerResource::GetTotalEarnedXP, CDOTA_PlayerResource::GetTotalEarnedGold, Msg, CDOTA_PlayerResource::GetLeaverStatus, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetDenies (69 total)
// callers: CDOTAGCServerSystem::MatchSignOut
// strings: "   Player %llu Account %u TotalGold = %f TotalXP = %f nGoldPerMinute = %d nXPPerMinute = , "Ability%d"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTAGCServerSystem::FillMatchDetailsForTeam(
        CDOTAGCServerSystem *const this,
        float flDurationMinutes,
        CMsgGameMatchSignOut *const signOut,
        int nGameTeam)
{
  __int64 v4; // rdx
  int v5; // eax
  CMsgGameMatchSignOut_CTeam *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  __int64 current_size; // rdx
  int allocated_size; // eax
  CMsgGameMatchSignOut_CTeam_CPlayer *v14; // rbx
  CMsgGameMatchSignOut_CTeam_CPlayer *v15; // r15
  __int64 v16; // rax
  void **v17; // rdx
  CDOTA_BaseNPC_Hero *v18; // rax
  int m_iHeroID; // eax
  int v20; // r14d
  int v21; // r8d
  unsigned int v22; // r12d
  uint64 SteamIDIgnoringBot; // rbx
  int TotalEarnedXP; // r13d
  int TotalEarnedGold; // eax
  DOTALeaverStatus_t LeaverStatus; // eax
  int LastHits; // eax
  int Denies; // eax
  int ClaimedDenies; // eax
  int ClaimedMisses; // eax
  int Misses; // eax
  int v32; // edx
  int RawPlayerDamage; // eax
  int RawTowerDamage; // eax
  int RawHealing; // eax
  int TotalGoldSpent; // eax
  int ScaledPlayerDamage; // eax
  int ScaledTowerDamage; // eax
  int ScaledHealing; // eax
  int TimeLastSeen; // eax
  int SupportAbilityValue; // eax
  int v42; // r12d
  float ClaimedFarm; // xmm0_4
  float v44; // xmm0_4
  int GoldSpentOnSupport; // eax
  int NetWorth; // eax
  __int64 v47; // rbx
  CMatchPlayerAbilityUpgrade *v48; // r12
  __int64 v49; // rax
  __int64 v50; // rdx
  const int *v51; // rax
  int v52; // ecx
  int v53; // esi
  int v54; // ecx
  int v55; // r12d
  CDOTAGameManager *v56; // rax
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // rdx
  float ScaledAssists; // xmm0_4
  int SelectedHeroID; // r12d
  CDOTAGameManager *v63; // rax
  KeyValues *HeroDataByHeroID; // r13
  int v65; // ebx
  int v66; // r14d
  KeyValues *Key; // rax
  const char *String; // r12
  CDOTAGameManager *v69; // rax
  KeyValues *AbilityByName; // rax
  int Int; // ecx
  const int *v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  const int *v75; // rdx
  int v76; // eax
  int v77; // ecx
  CGameRules *v78; // rdx
  int v79; // eax
  CDOTA_BaseNPC *v80; // r12
  CDOTA_UnitInventory *Inventory; // r14
  int v82; // edx
  __int64 v83; // rax
  std::string **v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rdx
  const char *v87; // rax
  const char *v88; // r12
  size_t v89; // rax
  int v90; // r12d
  CDOTA_Item *ItemInSlot; // rdi
  unsigned __int16 ItemID; // ax
  __int64 v93; // rdx
  int v94; // r13d
  std::string *v95; // rax
  int v96; // eax
  int v97; // edx
  CDOTA_UnitInventory *v98; // r13
  int j; // ebx
  CDOTA_Item *v100; // rdi
  unsigned __int16 v101; // ax
  __int64 v102; // rdx
  int v103; // r12d
  _DWORD *v104; // rcx
  int v105; // eax
  int v106; // edx
  void *v107; // r14
  _DWORD *v108; // rax
  __int64 v109; // rdx
  const int *v110; // rdi
  __int64 v111; // rdx
  _DWORD *v112; // rsi
  int m_Value; // eax
  int v114; // eax
  int Kills; // eax
  int Deaths; // eax
  int Assists; // eax
  int v118; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v120; // r12
  int v121; // r13d
  __int64 v122; // rax
  int v123; // edx
  CMatchPlayerPermanentBuff *v124; // r14
  __int64 v125; // rax
  __int64 v126; // rdx
  int v127; // eax
  __int64 v128; // rdx
  void *v129; // r12
  int v130; // eax
  int v131; // edx
  void *v132; // rax
  CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData *v133; // rbx
  int v134; // eax
  bool v135; // dl
  void **elements; // rax
  __int64 v137; // rax
  unsigned int unHumanPlayers; // [rsp+20h] [rbp-1E0h]
  unsigned int unPlayer; // [rsp+24h] [rbp-1DCh]
  google::protobuf::internal::RepeatedPtrFieldBase *v143; // [rsp+38h] [rbp-1C8h]
  int i; // [rsp+5Ch] [rbp-1A4h]
  CDOTA_BaseNPC_Hero *pHero; // [rsp+60h] [rbp-1A0h]
  unsigned int src; // [rsp+68h] [rbp-198h]
  std::string *srca; // [rsp+68h] [rbp-198h]
  int srcb; // [rsp+68h] [rbp-198h]
  unsigned int iUnits; // [rsp+70h] [rbp-190h]
  int iUnitsa; // [rsp+70h] [rbp-190h]
  unsigned int nXPPerMinuteb; // [rsp+78h] [rbp-188h]
  const int *nXPPerMinute; // [rsp+78h] [rbp-188h]
  __int64 nXPPerMinutea; // [rsp+78h] [rbp-188h]
  int upgradeCount; // [rsp+84h] [rbp-17Ch] BYREF
  const int *v156; // [rsp+88h] [rbp-178h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vecOwnedUnits; // [rsp+90h] [rbp-170h] BYREF
  CFmtStrN<256,false> v158; // [rsp+B0h] [rbp-150h] BYREF
  unsigned __int64 v159; // [rsp+1C8h] [rbp-38h]

  v4 = *(signOut + 16);
  v159 = __readfsqword(0x28u);
  v5 = *(signOut + 17);
  if ( v4 < v5 )
  {
    v137 = *(signOut + 7);
    *(signOut + 16) = v4 + 1;
    v143 = *(v137 + 8 * v4);
  }
  else
  {
    if ( v5 == *(signOut + 18) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve((signOut + 56), v5 + 1);
    v6 = operator new(0x30u);
    CMsgGameMatchSignOut_CTeam::CMsgGameMatchSignOut_CTeam(v6);
    v143 = v6;
    v7 = *(signOut + 16);
    v8 = *(signOut + 7);
    ++*(signOut + 17);
    *(signOut + 16) = v7 + 1;
    *(v8 + 8 * v7) = v6;
  }
  i = 0;
  unHumanPlayers = 0;
  unPlayer = 0;
  do
  {
    iUnits = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, i);
    if ( iUnits != nGameTeam && nGameTeam != -1 )
      goto LABEL_32;
    if ( nGameTeam == -1 )
    {
      v9 = 16332;
      if ( !_bittest(&v9, iUnits) )
        goto LABEL_32;
    }
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&vecOwnedUnits, g_pDOTAPlayerResource, i);
    pHero = 0;
    if ( (vecOwnedUnits.m_Size + 2) > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vecOwnedUnits.m_Size) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[vecOwnedUnits.m_Size & 0x1FF];
        if ( v11 != 0 && vecOwnedUnits.m_Size == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
          pHero = __dynamic_cast(v11->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
      }
    }
    current_size = v143[1].current_size_;
    allocated_size = v143[1].allocated_size_;
    if ( current_size < allocated_size )
    {
      elements = v143[1].elements_;
      v143[1].current_size_ = current_size + 1;
      v15 = elements[current_size];
      v18 = pHero;
      if ( pHero == 0 )
        goto LABEL_137;
    }
    else
    {
      if ( allocated_size == v143[1].total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v143 + 1, allocated_size + 1);
      v14 = operator new(0x118u);
      CMsgGameMatchSignOut_CTeam_CPlayer::CMsgGameMatchSignOut_CTeam_CPlayer(v14);
      v15 = v14;
      v16 = v143[1].current_size_;
      v17 = v143[1].elements_;
      ++v143[1].allocated_size_;
      v143[1].current_size_ = v16 + 1;
      v17[v16] = v14;
      v18 = pHero;
      if ( pHero == 0 )
      {
LABEL_137:
        m_iHeroID = 0;
        goto LABEL_19;
      }
    }
    m_iHeroID = v18->m_iHeroID;
LABEL_19:
    *(v15 + 12) = m_iHeroID;
    *(v15 + 4) |= 2u;
    if ( flDurationMinutes > 0.0 )
    {
      v22 = (CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, i) / flDurationMinutes);
      src = v22;
      v21 = (CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, i) / flDurationMinutes);
      v20 = v21;
    }
    else
    {
      v20 = 0;
      v21 = 0;
      v22 = 0;
      src = 0;
    }
    nXPPerMinuteb = v21;
    SteamIDIgnoringBot = CDOTA_PlayerResource::GetSteamIDIgnoringBot(g_pDOTAPlayerResource, i);
    TotalEarnedXP = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, i);
    TotalEarnedGold = CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, i);
    Msg(
      "   Player %llu Account %u TotalGold = %f TotalXP = %f nGoldPerMinute = %d nXPPerMinute = %d\n",
      SteamIDIgnoringBot,
      SteamIDIgnoringBot,
      v22,
      nXPPerMinuteb,
      TotalEarnedGold,
      TotalEarnedXP);
    *(v15 + 3) = SteamIDIgnoringBot;
    *(v15 + 4) |= 1u;
    LeaverStatus = CDOTA_PlayerResource::GetLeaverStatus(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x80u;
    *(v15 + 17) = LeaverStatus;
    LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x100u;
    *(v15 + 18) = LastHits;
    Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x200u;
    *(v15 + 19) = Denies;
    ClaimedDenies = CDOTA_PlayerResource::GetClaimedDenies(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x2000000u;
    *(v15 + 36) = ClaimedDenies;
    ClaimedMisses = CDOTA_PlayerResource::GetClaimedMisses(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x4000000u;
    *(v15 + 37) = ClaimedMisses;
    Misses = CDOTA_PlayerResource::GetMisses(g_pDOTAPlayerResource, i);
    v32 = *(v15 + 4);
    *(v15 + 38) = Misses;
    *(v15 + 21) = v20;
    *(v15 + 20) = src;
    *(v15 + 4) = v32 | 0x8000C00;
    RawPlayerDamage = CDOTA_PlayerResource::GetRawPlayerDamage(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x20000000u;
    *(v15 + 40) = RawPlayerDamage;
    RawTowerDamage = CDOTA_PlayerResource::GetRawTowerDamage(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x40000000u;
    *(v15 + 41) = RawTowerDamage;
    RawHealing = CDOTA_PlayerResource::GetRawHealing(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x80000000;
    *(v15 + 54) = RawHealing;
    TotalGoldSpent = CDOTA_PlayerResource::GetTotalGoldSpent(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x1000u;
    *(v15 + 22) = TotalGoldSpent;
    ScaledPlayerDamage = CDOTA_PlayerResource::GetScaledPlayerDamage(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x4000u;
    *(v15 + 24) = ScaledPlayerDamage;
    ScaledTowerDamage = CDOTA_PlayerResource::GetScaledTowerDamage(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x8000u;
    *(v15 + 25) = ScaledTowerDamage;
    ScaledHealing = CDOTA_PlayerResource::GetScaledHealing(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x10000u;
    *(v15 + 26) = ScaledHealing;
    TimeLastSeen = CDOTA_PlayerResource::GetTimeLastSeen(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x20000u;
    *(v15 + 27) = TimeLastSeen;
    SupportAbilityValue = CDOTA_PlayerResource::GetSupportAbilityValue(g_pDOTAPlayerResource, i);
    v42 = *(v15 + 4);
    *(v15 + 30) = SupportAbilityValue;
    *(v15 + 4) = v42 | 0x40000;
    *&vecOwnedUnits.m_Size = SteamIDIgnoringBot;
    *(v15 + 14) = CDOTAGCServerSystem::GetPartyIDForLobbyMember(this, &vecOwnedUnits);
    *(v15 + 4) = v42 | 0xC0000;
    ClaimedFarm = CDOTA_PlayerResource::GetClaimedFarm(g_pDOTAPlayerResource, i, 0);
    v44 = floorf(ClaimedFarm);
    *(v15 + 4) |= 0x800000u;
    *(v15 + 34) = v44;
    GoldSpentOnSupport = CDOTA_PlayerResource::GetGoldSpentOnSupport(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x1000000u;
    *(v15 + 35) = GoldSpentOnSupport;
    NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x10000000u;
    *(v15 + 39) = NetWorth;
    unHumanPlayers += !CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, i);
    v47 = 0;
    CDOTA_PlayerResource::GetAbilityUpgradesForPlayer(g_pDOTAPlayerResource, i, &upgradeCount, &v156, &vecOwnedUnits);
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v15 + 7, upgradeCount);
    if ( upgradeCount > 0 )
    {
      do
      {
        v57 = *(v15 + 44);
        v58 = *(v15 + 45);
        if ( v57 >= v58 )
        {
          if ( v58 == *(v15 + 46) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v15 + 7, v58 + 1);
          v48 = operator new(0x20u);
          CMatchPlayerAbilityUpgrade::CMatchPlayerAbilityUpgrade(v48);
          v49 = *(v15 + 44);
          v50 = *(v15 + 21);
          ++*(v15 + 45);
          *(v15 + 44) = v49 + 1;
          *(v50 + 8 * v49) = v48;
        }
        else
        {
          v59 = *(v15 + 21);
          *(v15 + 44) = v57 + 1;
          v48 = *(v59 + 8 * v57);
        }
        v51 = &v156[v47];
        v52 = *v51;
        v53 = *(v48 + 4);
        *(v48 + 4) = v53 | 1;
        *(v48 + 6) = v52;
        v54 = *(*&vecOwnedUnits.m_Size + 4 * v47);
        *(v48 + 4) = v53 | 3;
        *(v48 + 7) = v54;
        v55 = *v51;
        v56 = DOTAGameManager();
        CDOTAGameManager::GetAbilityDataByID(v56, v55);
        ++v47;
      }
      while ( upgradeCount > v47 );
    }
    SelectedHeroID = CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, i);
    v63 = DOTAGameManager();
    HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v63, SelectedHeroID);
    if ( HeroDataByHeroID != 0 )
    {
      v65 = 10;
      v66 = 24;
      nXPPerMinute = &v156[upgradeCount];
      if ( SelectedHeroID == 74 )
        v65 = 17;
      else
        v66 = 17;
      do
      {
        CFmtStrN<256,false>::CFmtStrN(&v158, "Ability%d", v65);
        Key = KeyValues::FindKey(HeroDataByHeroID, v158.m_szBuf, 0);
        if ( Key == 0 )
          goto LABEL_56;
        String = KeyValues::GetString(Key, 0, "", 0, 0);
        v69 = DOTAGameManager();
        AbilityByName = CDOTAGameManager::GetAbilityByName(v69, String);
        if ( AbilityByName == 0 )
          goto LABEL_56;
        Int = KeyValues::GetInt(AbilityByName, "ID", 0);
        v72 = v156;
        v73 = (nXPPerMinute - v156) >> 4;
        v74 = nXPPerMinute - v156;
        if ( v73 > 0 )
        {
          if ( Int == *v156 )
          {
            v75 = v156;
          }
          else if ( Int == v156[1] )
          {
            v75 = v156 + 1;
          }
          else if ( Int == v156[2] )
          {
            v110 = v156;
LABEL_118:
            v75 = v110 + 2;
          }
          else if ( Int == v156[3] )
          {
            v110 = v156;
LABEL_100:
            v75 = v110 + 3;
          }
          else
          {
            while ( 1 )
            {
              v75 = v72 + 4;
              --v73;
              v110 = v72 + 4;
              if ( v73 == 0 )
              {
                v74 = nXPPerMinute - v110;
                goto LABEL_53;
              }
              if ( Int == v72[4] )
                goto LABEL_101;
              if ( Int == v72[5] )
                break;
              if ( Int == v72[6] )
                goto LABEL_118;
              if ( Int == v72[7] )
                goto LABEL_100;
              v72 += 4;
            }
            v75 = v72 + 5;
          }
          goto LABEL_101;
        }
        v110 = v156;
LABEL_53:
        if ( v74 != 2 )
        {
          if ( v74 != 3 )
          {
            if ( v74 != 1 )
              goto LABEL_56;
            goto LABEL_130;
          }
          if ( Int == *v110 )
            goto LABEL_131;
          ++v110;
        }
        if ( Int == *v110 )
          goto LABEL_131;
        ++v110;
LABEL_130:
        if ( Int == *v110 )
        {
LABEL_131:
          v75 = v110;
LABEL_101:
          if ( nXPPerMinute != v75 )
          {
            v111 = *(v15 + 66);
            if ( v111 == *(v15 + 67) )
            {
              srcb = Int;
              v129 = *(v15 + 32);
              v130 = v111 + 1;
              v131 = 2 * v111;
              if ( v130 < v131 )
                v130 = v131;
              if ( v130 < 4 )
                v130 = 4;
              *(v15 + 67) = v130;
              v132 = operator new[](4LL * v130);
              Int = srcb;
              *(v15 + 32) = v132;
              if ( v129 != 0 )
              {
                memcpy(v132, v129, 4LL * *(v15 + 66));
                operator delete[](v129);
                v112 = *(v15 + 32);
                v111 = *(v15 + 66);
                Int = srcb;
              }
              else
              {
                v111 = *(v15 + 66);
                v112 = v132;
              }
            }
            else
            {
              v112 = *(v15 + 32);
            }
            *(v15 + 66) = v111 + 1;
            v112[v111] = Int;
          }
        }
LABEL_56:
        ++v65;
      }
      while ( v65 <= v66 );
    }
    if ( *(g_pDOTAPlayerResource + 248) != 0 && CDOTA_PlayerResource::IsEventOwnedForPlayerID(g_pDOTAPlayerResource, i) )
      v76 = 32;
    else
      v76 = 0;
    v77 = *(v15 + 5);
    *(v15 + 55) = v76;
    *(v15 + 5) = v77 | 0x10;
    v78 = g_pGameRules;
    v79 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v79 == 15 || v79 == 19 )
    {
      v133 = *(v15 + 31);
      *(v15 + 5) = v77 | 0x18;
      if ( v133 == 0 )
      {
        v133 = operator new(0x20u);
        CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData::CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData(v133);
        *(v15 + 31) = v133;
        v78 = g_pGameRules;
      }
      v134 = *(v133 + 4);
      *(v133 + 6) = iUnits;
      *(v133 + 4) = v134 | 1;
      v135 = iUnits == *&v78[16].m_szQuestName[80];
      *(v133 + 4) = v134 | 3;
      *(v133 + 28) = v135;
    }
    vecOwnedUnits.m_Size = 0;
    vecOwnedUnits.m_Memory.m_pMemory = 0;
    vecOwnedUnits.m_Memory.m_nAllocationCount = 0;
    vecOwnedUnits.m_Memory.m_nGrowSize = 0;
    if ( pHero != 0 )
    {
      (*(pHero->_vptr_IHandleEntity + 499))(pHero, &vecOwnedUnits);
      if ( vecOwnedUnits.m_Size > 0 )
      {
        nXPPerMinutea = 0;
        iUnitsa = 0;
        while ( 1 )
        {
          v80 = vecOwnedUnits.m_Memory.m_pMemory[nXPPerMinutea];
          if ( v80 != 0 && v80->m_bHasInventory )
            break;
LABEL_84:
          ++iUnitsa;
          ++nXPPerMinutea;
          if ( vecOwnedUnits.m_Size <= iUnitsa )
            goto LABEL_85;
        }
        Inventory = CDOTA_BaseNPC::GetInventory(vecOwnedUnits.m_Memory.m_pMemory[nXPPerMinutea]);
        v82 = *(v15 + 51);
        v83 = *(v15 + 50);
        if ( v83 < v82 )
        {
          v109 = *(v15 + 24);
          *(v15 + 50) = v83 + 1;
          v84 = *(v109 + 8 * v83);
        }
        else
        {
          if ( v82 == *(v15 + 52) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v15 + 8, v82 + 1);
          v84 = operator new(0x30u);
          CMatchAdditionalUnitInventory::CMatchAdditionalUnitInventory(v84);
          v85 = *(v15 + 50);
          v86 = *(v15 + 24);
          ++*(v15 + 51);
          *(v15 + 50) = v85 + 1;
          *(v86 + 8 * v85) = v84;
        }
        v87 = CUtlString::Get(&v80->m_szUnitLabel);
        *(v84 + 4) |= 1u;
        v88 = v87;
        v89 = strlen(v87);
        std::string::assign(v84[3], v88, v89);
        v90 = 0;
        while ( 1 )
        {
          if ( Inventory != 0 && (ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v90)) != 0 )
          {
            ItemID = CDOTA_Item::GetItemID(ItemInSlot);
            v93 = *(v84 + 10);
            v94 = ItemID;
            v95 = v84[4];
            if ( v93 == *(v84 + 11) )
              goto LABEL_76;
          }
          else
          {
            v93 = *(v84 + 10);
            v94 = 0;
            v95 = v84[4];
            if ( v93 == *(v84 + 11) )
            {
LABEL_76:
              srca = v95;
              v96 = v93 + 1;
              v97 = 2 * v93;
              if ( v96 >= v97 )
                v97 = v96;
              if ( v97 < 4 )
                v97 = 4;
              *(v84 + 11) = v97;
              v95 = operator new[](4LL * v97);
              v84[4] = v95;
              v93 = *(v84 + 10);
              if ( srca != 0 )
              {
                memcpy(v95, srca, 4 * v93);
                operator delete[](srca);
                v95 = v84[4];
                v93 = *(v84 + 10);
              }
            }
          }
          ++v90;
          *(v84 + 10) = v93 + 1;
          *(&v95->_M_dataplus._M_p + v93) = v94;
          if ( v90 == 9 )
            goto LABEL_84;
        }
      }
LABEL_85:
      v98 = CDOTA_BaseNPC::GetInventory(pHero);
    }
    else
    {
      v98 = 0;
    }
    for ( j = 0; j != 9; ++j )
    {
      if ( v98 != 0 && (v100 = CDOTA_UnitInventory::GetItemInSlot(v98, j)) != 0 )
      {
        v101 = CDOTA_Item::GetItemID(v100);
        v102 = *(v15 + 10);
        v103 = v101;
        if ( v102 != *(v15 + 11) )
          goto LABEL_89;
      }
      else
      {
        v102 = *(v15 + 10);
        v103 = 0;
        if ( v102 != *(v15 + 11) )
        {
LABEL_89:
          v104 = *(v15 + 4);
          goto LABEL_90;
        }
      }
      v105 = v102 + 1;
      v106 = 2 * v102;
      v107 = *(v15 + 4);
      if ( v105 < v106 )
        v105 = v106;
      if ( v105 < 4 )
        v105 = 4;
      *(v15 + 11) = v105;
      v108 = operator new[](4LL * v105);
      *(v15 + 4) = v108;
      v102 = *(v15 + 10);
      v104 = v108;
      if ( v107 != 0 )
      {
        memcpy(v108, v107, 4 * v102);
        operator delete[](v107);
        v104 = *(v15 + 4);
        v102 = *(v15 + 10);
      }
LABEL_90:
      *(v15 + 10) = v102 + 1;
      v104[v102] = v103;
    }
    if ( pHero != 0 )
    {
      m_Value = pHero->m_iCurrentLevel.m_Value;
      *(v15 + 4) |= 0x2000u;
      *(v15 + 23) = m_Value;
      v114 = (*(pHero->_vptr_IHandleEntity + 397))(pHero);
      *(v15 + 4) |= 8u;
      *(v15 + 13) = v114;
      Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, pHero->m_iPlayerID.m_Value);
      *(v15 + 4) |= 0x10u;
      *(v15 + 14) = Kills;
      Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, pHero->m_iPlayerID.m_Value);
      *(v15 + 4) |= 0x20u;
      *(v15 + 15) = Deaths;
      Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, pHero->m_iPlayerID.m_Value);
      *(v15 + 4) |= 0x40u;
      *(v15 + 16) = Assists;
      if ( pHero->m_ModifierManager.m_bufflist.m_Size > 0 )
      {
        v118 = 0;
        do
        {
          BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&pHero->m_ModifierManager, v118, 0);
          v120 = BuffByIndex;
          if ( BuffByIndex != 0 )
          {
            v121 = (*(BuffByIndex->_vptr_CDOTA_Buff + 53))(BuffByIndex);
            if ( v121 != 0 )
            {
              v122 = *(v15 + 58);
              v123 = *(v15 + 59);
              if ( v122 < v123 )
              {
                v128 = *(v15 + 28);
                *(v15 + 58) = v122 + 1;
                v124 = *(v128 + 8 * v122);
              }
              else
              {
                if ( v123 == *(v15 + 60) )
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v15 + 224), v123 + 1);
                v124 = operator new(0x20u);
                CMatchPlayerPermanentBuff::CMatchPlayerPermanentBuff(v124);
                v125 = *(v15 + 58);
                v126 = *(v15 + 28);
                ++*(v15 + 59);
                *(v15 + 58) = v125 + 1;
                *(v126 + 8 * v125) = v124;
              }
              *(v124 + 4) |= 1u;
              *(v124 + 6) = v121;
              v127 = (*(v120->_vptr_CDOTA_Buff + 27))(v120);
              *(v124 + 4) |= 2u;
              *(v124 + 7) = v127;
            }
          }
          ++v118;
        }
        while ( v118 < pHero->m_ModifierManager.m_bufflist.m_Size );
      }
    }
    *(v15 + 31) = CDOTA_PlayerResource::GetScaledKills(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x100000u;
    *(v15 + 32) = CDOTA_PlayerResource::GetScaledDeaths(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x200000u;
    ScaledAssists = CDOTA_PlayerResource::GetScaledAssists(g_pDOTAPlayerResource, i);
    *(v15 + 4) |= 0x400000u;
    *(v15 + 33) = ScaledAssists;
    ++unPlayer;
    vecOwnedUnits.m_Size = 0;
    if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
      if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
    }
LABEL_32:
    ++i;
  }
  while ( i != 64 );
  vecOwnedUnits.m_Size = unPlayer;
  google::protobuf::RepeatedField<unsigned int>::Add((signOut + 40), &vecOwnedUnits);
  return unHumanPlayers;
}


// CDOTAGCServerSystem::MatchSignOut  (line 4465, @0x00000000029a4e20, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMatchHeroSelectEvent>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTAFantasyPlayerStats>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgServerToGCVictoryPredictions_Record>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSignOutCommunicationSummary_PlayerCommunication>::TypeHandler>, AllocProto, CGCClientJob, CGCClientJobUploadMatchStats, CProtoBufMsg, CVProfScope, CopyArray, Count, CreateEvent, CreateStrangeCounterAdjustment, DOTAGameRules, Element, ExtendedServerInfo_t, FirstInorder, Get, Get<google::protobuf::RepeatedPtrField<CMsgServerToGCVictoryPredictions_Record>::TypeHandler>, GetBool, GetBuildVersionForGCMessage, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetGameMode, GetGameWinner, GetInt, GetLobby, GetPoorNetworkConditionsDetected, GetPoorNetworkConditionsMsg, GetRaw, IsAddOnGame, IsEnabled, IsEventGame, Key, LeftChild, Lock, MoveArray, Mutable, Mutable<google::protobuf::RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment>::TypeHandler>, Mutable<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam>::TypeHandler>, Mutable<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam_CPlayer>::TypeHandler>, New, NextInorder, Reserve, ServerInfo_t, SetUploadingMatchStats, Unlock, add_additional_msgs, add_barracks_status, add_fantasy_stats, add_item_ids, add_picks_bans, add_player_strange_count_adjustments, add_players, add_records, add_strange_count_adjustments, add_team_scores, add_tower_status, assign, entindex, length, memcpy, memset, mutable_player_strange_count_adjustments, mutable_players, mutable_poor_network_conditions, mutable_teams, netadr_t, operator(), operator=, operator[], records, set_account_id, set_adjustment, set_all_chat_messages, set_allow_cheats, set_automatic_surrender, set_average_experience_delta, set_average_networth_delta, set_bonus_gold_loser_min10, set_bonus_gold_loser_min20, set_bonus_gold_loser_total, set_bonus_gold_winner_min10, set_bonus_gold_winner_min20, set_bonus_gold_winner_total, set_bot_difficulty_dire, set_bot_difficulty_radiant, set_chat_mutes, set_chat_wheel_messages, set_cluster, set_contents, set_created_lobby, set_date, set_dire_captain_account_id, set_duration, set_event_type, set_experience_delta_min10, set_experience_delta_min20, set_first_blood_time, set_game_balance, set_good_guys_win, set_has_account_id, set_has_adjustment, set_has_all_chat_messages, set_has_allow_cheats, set_has_automatic_surrender, set_has_average_experience_delta, set_has_average_networth_delta, set_has_bonus_gold_loser_min10, set_has_bonus_gold_loser_min20, set_has_bonus_gold_loser_total, set_has_bonus_gold_winner_min10, set_has_bonus_gold_winner_min20, set_has_bonus_gold_winner_total, set_has_bot_difficulty_dire, set_has_bot_difficulty_radiant, set_has_chat_mutes, set_has_chat_wheel_messages, set_has_cluster, set_has_contents, set_has_date, set_has_dire_captain_account_id, set_has_duration, set_has_event_type, set_has_experience_delta_min10, set_has_experience_delta_min20, set_has_first_blood_time, set_has_game_balance, set_has_good_guys_win, set_has_hero_id, set_has_id, set_has_is_pick, set_has_item_id, set_has_lines_drawn, set_has_match_flags, set_has_max_pings_per_interval, set_has_max_teammate_pings_per_interval, set_has_maximum_losing_networth_lead, set_has_networth_delta_min10, set_has_networth_delta_min20, set_has_pauses, set_has_pings, set_has_poor_network_conditions, set_has_pre_game_duration, set_has_radiant_captain_account_id, set_has_server_addr, set_has_server_version, set_has_team, set_has_team_chat_messages, set_has_teammate_pings, set_has_unpauses, set_has_voice_chat_seconds, set_has_voice_mutes, set_hero_id, set_id, set_is_pick, set_item_id, set_lines_drawn, set_match_flags, set_max_pings_per_interval, set_max_teammate_pings_per_interval, set_maximum_losing_networth_lead, set_networth_delta_min10, set_networth_delta_min20, set_pauses, set_pings, set_pre_game_duration, set_radiant_captain_account_id, set_server_addr, set_server_version, set_team, set_team_chat_messages, set_teammate_pings, set_unpauses, set_voice_chat_seconds, set_voice_mutes, ~CGCClientJob, ~CVProfScope, ~basic_string
// calls: AppIsDedicatedServer, Warning, operator new, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope, CDOTAGamerules::GetDOTATime, Msg, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGamerules::GetPreGameDuration (100 total)
// callers: CDOTAGCServerSystem::GameRules_State_Enter
// strings: "CDOTAGCServerSystem::MatchSignOut no GC connection for local bot match, not performing Ma, "CDOTAGCServerSystem::MatchSignOut gathering sign out stats. Duration in minutes = %f\n", "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Match signout:  duration = %u (%f) good guys win = %d\n", "  Match start date: %s\n" (23 total)
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_pMemoryPool, `guard variable for'CDOTAGCServerSystem::MatchSignOut(void)::sv_cluster, CDOTAGCServerSystem::MatchSignOut(void)::sv_cluster
void __fastcall CDOTAGCServerSystem::MatchSignOut(CDOTAGCServerSystem *const this)
{
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *v1; // rax
  GCSDK::MsgType_t v2; // esi
  int m_enabled; // r11d
  bool v4; // r14
  int v5; // r13d
  int v6; // eax
  int v7; // r12d
  int v8; // eax
  int v9; // r12d
  int v10; // r14d
  float DOTATime; // xmm0_4
  float PreGameDuration; // xmm0_4
  CDOTA_PlayerResource *v13; // rdi
  int v14; // eax
  int v15; // edx
  int i; // r15d
  int Team; // eax
  int v18; // esi
  int v19; // eax
  int v20; // r15d
  int v21; // edx
  int v22; // eax
  int AverageExperienceDelta; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  CGameRules *v27; // rax
  int v28; // eax
  const CMsgPoorNetworkConditions *v29; // r13
  CMsgPoorNetworkConditions *v30; // rdi
  int matched; // eax
  __int64 v32; // r12
  int v33; // r15d
  CMatchHeroSelectEvent *v34; // r14
  __int64 v35; // rax
  int v36; // eax
  int v37; // edx
  _BOOL4 v38; // edx
  _DWORD *v39; // r13
  __int64 total_size; // rdx
  int Captain; // eax
  int SteamID; // r12d
  int v43; // eax
  std::string **v44; // rax
  std::string **v45; // r12
  int j; // r12d
  __int64 v47; // rax
  int v48; // edx
  CMsgDOTAFantasyPlayerStats *v49; // r13
  CMsgDOTAFantasyPlayerStats *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // edx
  bool IsCheatMode; // al
  int v55; // edx
  int v56; // eax
  CMsgGameMatchSignOut *m_pProtoBufBody; // rax
  int v58; // r14d
  int k; // r12d
  std::string **v60; // rax
  std::string **v61; // r12
  unsigned int v62; // r12d
  float v63; // xmm0_4
  const char *v64; // rax
  int v65; // eax
  int v66; // r13d
  CMsgGameMatchSignOut *v67; // rax
  __int64 v68; // r15
  __int64 v69; // r12
  unsigned int v70; // ecx
  __int64 v71; // r14
  _DWORD *v72; // rax
  __int64 v73; // rdx
  CGameRules *v74; // r15
  unsigned __int16 Inorder; // r15
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned __int16 v78; // si
  __int64 v79; // r14
  int v80; // r13d
  __int64 v81; // rcx
  void **v82; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v83; // r12
  void **v84; // rax
  void **v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rdx
  int v90; // eax
  _DWORD *v91; // r13
  __int64 v92; // rax
  void **v93; // rdx
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // r14
  int m_nValue; // edx
  CMsgGameMatchSignOut *v98; // rax
  const char *v99; // rax
  CMsgGameMatchSignOut *v100; // r12
  int v101; // r15d
  const char *v102; // r13
  size_t v103; // rax
  __int64 v104; // rsi
  __int64 v105; // r13
  int *v106; // r12
  void **v107; // rax
  __int64 v108; // rax
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // r13
  _QWORD *v112; // rcx
  std::string **v113; // rax
  std::string **v114; // r12
  int v115; // eax
  int m; // r12d
  CDOTAChallengeSystem *v117; // rax
  bool v118; // al
  CMsgGameMatchSignOut *v119; // rdx
  CGCClientSystem *v120; // rax
  int (**v121)(...); // r13
  CGCClientSystem *v122; // r12
  GCSDK::CJob *v123; // rbx
  int v124; // eax
  int v125; // edx
  _QWORD *v126; // rax
  int v127; // r12d
  CDOTAPlayer *Player; // rax
  const CEntityInstance *v129; // r14
  const PlayerCommunicationStats_t *PlayerCommunicationSummary; // r15
  __int64 current_size; // rdx
  CMsgSignOutCommunicationSummary_PlayerCommunication *v132; // r13
  __int64 v133; // rax
  AccountID_t SteamAccountID; // eax
  int v135; // edx
  uint32 unTotalPings; // eax
  uint32 unMaxIntervalPings; // eax
  uint32 v138; // eax
  uint32 v139; // eax
  uint32 unTeamChatCount; // eax
  uint32 unAllChatCount; // eax
  int v142; // ecx
  uint32 unChatWheelCount; // eax
  uint32 unPauseCount; // eax
  uint32 unUnpauseCount; // eax
  uint32 unLinesDrawnCount; // eax
  int32 m_Data; // r15d
  CPlayerVoiceListener *v148; // rax
  float PlayerSpeechTotalDuration; // xmm0_4
  int32 v150; // r15d
  CVoiceGameMgr *VoiceGameMgr; // rax
  int v152; // eax
  CEntityIndex v153; // r14d
  CVoiceGameMgr *v154; // rax
  int v155; // eax
  std::string **v156; // rax
  std::string **v157; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut> *v158; // r12
  const google::protobuf::Descriptor *v159; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v161; // rax
  uint32 v162; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v163; // rax
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *v164; // rax
  double v165; // xmm0_8
  __int64 v166; // rax
  std::string **v167; // rax
  std::string **v168; // r12
  int v169; // edx
  int v170; // eax
  int v171; // edx
  int v172; // eax
  int v173; // eax
  int v174; // edx
  CDOTA_PlayerResource *v175; // rdi
  int v176; // eax
  int v177; // edx
  int v178; // edx
  int v179; // eax
  int v180; // edx
  int v181; // eax
  int TeamBonusGoldEarnedAtTime; // eax
  int v183; // edx
  CDOTA_PlayerResource *v184; // rdi
  int v185; // eax
  int v186; // edx
  int v187; // eax
  int v188; // edx
  CMsgPoorNetworkConditions *v189; // r12
  int allocated_size; // eax
  void **elements; // rax
  __int64 v192; // rax
  int v193; // eax
  int v194; // eax
  int v195; // edx
  int v196; // edx
  int v197; // eax
  int v198; // eax
  int v199; // edx
  int v200; // edx
  int unHumanPlayers; // [rsp+34h] [rbp-18Ch]
  char v202; // [rsp+48h] [rbp-178h]
  float src; // [rsp+58h] [rbp-168h]
  int srca; // [rsp+58h] [rbp-168h]
  CGameRules *srcb; // [rsp+58h] [rbp-168h]
  char *srcc; // [rsp+58h] [rbp-168h]
  CGameRules *srcd; // [rsp+58h] [rbp-168h]
  void *srce; // [rsp+58h] [rbp-168h]
  CDOTALobby *pLobby; // [rsp+68h] [rbp-158h]
  GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMsgSignOut; // [rsp+70h] [rbp-150h]
  CMsgGameMatchSignOut *signOut; // [rsp+78h] [rbp-148h]
  CMsgGameMatchSignOut *signOuta; // [rsp+78h] [rbp-148h]
  unsigned int value; // [rsp+88h] [rbp-138h] BYREF
  unsigned int TowerStatus; // [rsp+8Ch] [rbp-134h] BYREF
  unsigned int BarracksStatus; // [rsp+90h] [rbp-130h] BYREF
  unsigned int v217; // [rsp+94h] [rbp-12Ch] BYREF
  unsigned int TeamScore; // [rsp+98h] [rbp-128h] BYREF
  unsigned int v219; // [rsp+9Ch] [rbp-124h] BYREF
  std::string v220[2]; // [rsp+A0h] [rbp-120h] BYREF
  ConVarRef dota_bot_match_difficulty; // [rsp+B0h] [rbp-110h] BYREF
  _BYTE v222[16]; // [rsp+C0h] [rbp-100h] BYREF
  int v223; // [rsp+D0h] [rbp-F0h]
  google::protobuf::internal::RepeatedPtrFieldBase v224; // [rsp+D8h] [rbp-E8h] BYREF
  int v225; // [rsp+F0h] [rbp-D0h]
  char timeBuf[25]; // [rsp+100h] [rbp-C0h] BYREF
  INetSupport::ServerInfo_t serverInfo; // [rsp+120h] [rbp-A0h] BYREF
  unsigned __int64 v228; // [rsp+188h] [rbp-38h]

  v228 = __readfsqword(0x28u);
  if ( g_pDOTAPlayerResource == 0 )
  {
    Warning("CDOTAGCServerSystem::MatchSignOut failed, no g_pDOTAPlayerResource\n");
    return;
  }
  pLobby = *(this + 260);
  if ( AppIsDedicatedServer() || pLobby != 0 && *(pLobby + 349) != 0 )
  {
    v1 = operator new(0x28u);
    v202 = 0;
    v2 = 7004;
    pMsgSignOut = v1;
  }
  else
  {
    if ( *(this + 333) != 0 )
    {
      Warning("CDOTAGCServerSystem::MatchSignOut no GC connection for local bot match, not performing MatchSignout\n");
      return;
    }
    v164 = operator new(0x28u);
    v202 = 1;
    v2 = 7530;
    pMsgSignOut = v164;
  }
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(pMsgSignOut, v2);
  pMsgSignOut->m_pProtoBufBody = 0;
  pMsgSignOut->_vptr_CProtoBufMsgBase = &off_4305350;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_bRegisteredWithMemoryPoolMgr )
    {
      v158 = operator new(0x28u);
      v159 = CMsgGameMatchSignOut::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v159->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v161 = CMsgGameMatchSignOut::descriptor();
      v162 = google::protobuf::internal::ExtensionSet::GetInt32(
               (v161->options_ + 8),
               msgpool_soft_limit.number_,
               msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v158, v162, Int32);
      v158->_vptr_CProtoBufMsgMemoryPoolBase = &off_43064D0;
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_pMemoryPool = v158;
      v163 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v163, v158);
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  pMsgSignOut->m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_pMemoryPool);
  if ( v4 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  src = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) / 60.0;
  Msg("CDOTAGCServerSystem::MatchSignOut gathering sign out stats. Duration in minutes = %f\n", src);
  signOut = pMsgSignOut->m_pProtoBufBody;
  v5 = *&g_pGameRules[16].m_szQuestName[80];
  v6 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v6 == 15 || v6 == 19 )
  {
    matched = CDOTAGCServerSystem::FillMatchDetailsForTeam(this, src, signOut, -1);
    *(signOut + 160) = 1;
    *(signOut + 4) |= 4u;
    unHumanPlayers = matched;
  }
  else
  {
    v7 = CDOTAGCServerSystem::FillMatchDetailsForTeam(this, src, signOut, 2);
    v8 = CDOTAGCServerSystem::FillMatchDetailsForTeam(this, src, signOut, 3);
    *(signOut + 4) |= 4u;
    unHumanPlayers = v7 + v8;
    *(signOut + 160) = v5 == 2;
  }
  v9 = 0;
  v10 = 0;
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  *(signOut + 4) |= 2u;
  *(signOut + 8) = DOTATime;
  PreGameDuration = CDOTAGamerules::GetPreGameDuration(g_pGameRules);
  v13 = g_pDOTAPlayerResource;
  *(signOut + 5) |= 0x40u;
  *(signOut + 88) = PreGameDuration;
  v14 = *(signOut + 4);
  *(signOut + 9) = *(this + 424);
  *(signOut + 4) = v14 | 8;
  v15 = *&g_pGameRules[61].m_szQuestName[116];
  *(signOut + 4) = v14 | 0x408;
  *(signOut + 31) = v15;
  *(signOut + 32) = CDOTA_PlayerResource::GetGameBalance(v13);
  *(signOut + 4) |= 0x800u;
  for ( i = 0; i != 64; ++i )
  {
    while ( 1 )
    {
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, i);
      v18 = i;
      if ( Team == v5 )
        break;
      ++i;
      v9 += CDOTA_PlayerResource::GetBonusGoldEarned(g_pDOTAPlayerResource, v18);
      if ( i == 64 )
        goto LABEL_23;
    }
    v10 += CDOTA_PlayerResource::GetBonusGoldEarned(g_pDOTAPlayerResource, v18);
  }
LABEL_23:
  v19 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v19 != 15 && v19 != 19 )
  {
    srca = (v5 == 2) + 2;
    v20 = 2 * (v5 == 2) - 1;
    v21 = v20 * CDOTA_PlayerResource::GetAverageNetworthDelta(g_pDOTAPlayerResource);
    v22 = 0x7FFF;
    if ( v21 <= 0x7FFF )
    {
      v188 = v20 * CDOTA_PlayerResource::GetAverageNetworthDelta(g_pDOTAPlayerResource);
      v22 = -32768;
      if ( v188 >= -32768 )
        v22 = v20 * CDOTA_PlayerResource::GetAverageNetworthDelta(g_pDOTAPlayerResource);
    }
    *(signOut + 4) |= 0x400000u;
    *(signOut + 68) = v22;
    AverageExperienceDelta = CDOTA_PlayerResource::GetAverageExperienceDelta(g_pDOTAPlayerResource);
    v24 = 0x7FFF;
    if ( v20 * AverageExperienceDelta <= 0x7FFF )
    {
      v187 = CDOTA_PlayerResource::GetAverageExperienceDelta(g_pDOTAPlayerResource);
      v24 = -32768;
      if ( v20 * v187 >= -32768 )
        v24 = v20 * CDOTA_PlayerResource::GetAverageExperienceDelta(g_pDOTAPlayerResource);
    }
    v25 = *(signOut + 4);
    *(signOut + 72) = v24;
    *(signOut + 5) |= 4u;
    *(signOut + 82) = v9;
    *(signOut + 77) = v10;
    *(signOut + 4) = v25 | 0x84000000;
    *(signOut + 71) = CDOTA_PlayerResource::GetLosingTeamNetworthLead(g_pDOTAPlayerResource);
    *(signOut + 4) |= 0x2000000u;
    if ( CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) >= 600.0 )
    {
      v178 = v20 * CDOTA_PlayerResource::GetNetworthDeltaAtTime(g_pDOTAPlayerResource, 10);
      v179 = 0x7FFF;
      if ( v178 <= 0x7FFF )
      {
        v196 = v20 * CDOTA_PlayerResource::GetNetworthDeltaAtTime(g_pDOTAPlayerResource, 10);
        v179 = -32768;
        if ( v196 >= -32768 )
          v179 = v20 * CDOTA_PlayerResource::GetNetworthDeltaAtTime(g_pDOTAPlayerResource, 10);
      }
      *(signOut + 4) |= 0x800000u;
      *(signOut + 69) = v179;
      v180 = v20 * CDOTA_PlayerResource::GetExperienceDeltaAtTime(g_pDOTAPlayerResource, 10);
      v181 = 0x7FFF;
      if ( v180 <= 0x7FFF )
      {
        v195 = v20 * CDOTA_PlayerResource::GetExperienceDeltaAtTime(g_pDOTAPlayerResource, 10);
        v181 = -32768;
        if ( v195 >= -32768 )
          v181 = v20 * CDOTA_PlayerResource::GetExperienceDeltaAtTime(g_pDOTAPlayerResource, 10);
      }
      *(signOut + 4) |= 0x8000000u;
      *(signOut + 73) = v181;
      TeamBonusGoldEarnedAtTime = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 10, v5);
      v183 = 0x7FFF;
      if ( TeamBonusGoldEarnedAtTime <= 0x7FFF )
      {
        v194 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 10, v5);
        v183 = -32768;
        if ( v194 >= -32768 )
          v183 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 10, v5);
      }
      v184 = g_pDOTAPlayerResource;
      *(signOut + 4) |= 0x20000000u;
      *(signOut + 75) = v183;
      v185 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(v184, 10, srca);
      v186 = 0x7FFF;
      if ( v185 <= 0x7FFF )
      {
        v193 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 10, srca);
        v186 = -32768;
        if ( v193 >= -32768 )
          v186 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 10, srca);
      }
      *(signOut + 5) |= 1u;
      *(signOut + 78) = v186;
    }
    if ( CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) >= 1200.0 )
    {
      v169 = v20 * CDOTA_PlayerResource::GetNetworthDeltaAtTime(g_pDOTAPlayerResource, 20);
      v170 = 0x7FFF;
      if ( v169 <= 0x7FFF )
      {
        v200 = v20 * CDOTA_PlayerResource::GetNetworthDeltaAtTime(g_pDOTAPlayerResource, 20);
        v170 = -32768;
        if ( v200 >= -32768 )
          v170 = v20 * CDOTA_PlayerResource::GetNetworthDeltaAtTime(g_pDOTAPlayerResource, 20);
      }
      *(signOut + 4) |= 0x1000000u;
      *(signOut + 70) = v170;
      v171 = v20 * CDOTA_PlayerResource::GetExperienceDeltaAtTime(g_pDOTAPlayerResource, 20);
      v172 = 0x7FFF;
      if ( v171 <= 0x7FFF )
      {
        v199 = v20 * CDOTA_PlayerResource::GetExperienceDeltaAtTime(g_pDOTAPlayerResource, 20);
        v172 = -32768;
        if ( v199 >= -32768 )
          v172 = v20 * CDOTA_PlayerResource::GetExperienceDeltaAtTime(g_pDOTAPlayerResource, 20);
      }
      *(signOut + 4) |= 0x10000000u;
      *(signOut + 74) = v172;
      v173 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 20, v5);
      v174 = 0x7FFF;
      if ( v173 <= 0x7FFF )
      {
        v198 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 20, v5);
        v174 = -32768;
        if ( v198 >= -32768 )
          v174 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 20, v5);
      }
      v175 = g_pDOTAPlayerResource;
      *(signOut + 4) |= 0x40000000u;
      *(signOut + 76) = v174;
      v176 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(v175, 20, srca);
      v177 = 0x7FFF;
      if ( v176 <= 0x7FFF )
      {
        v197 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 20, srca);
        v177 = -32768;
        if ( v197 >= -32768 )
          v177 = CDOTA_PlayerResource::GetTeamBonusGoldEarnedAtTime(g_pDOTAPlayerResource, 20, srca);
      }
      *(signOut + 5) |= 2u;
      *(signOut + 79) = v177;
    }
    value = CDOTAGamerules::GetTowerStatus(g_pGameRules, 2);
    google::protobuf::RepeatedField<unsigned int>::Add(signOut + 5, &value);
    TowerStatus = CDOTAGamerules::GetTowerStatus(g_pGameRules, 3);
    google::protobuf::RepeatedField<unsigned int>::Add(signOut + 5, &TowerStatus);
    BarracksStatus = CDOTAGamerules::GetBarracksStatus(g_pGameRules, 2);
    google::protobuf::RepeatedField<unsigned int>::Add(signOut + 6, &BarracksStatus);
    v217 = CDOTAGamerules::GetBarracksStatus(g_pGameRules, 3);
    google::protobuf::RepeatedField<unsigned int>::Add(signOut + 6, &v217);
    TeamScore = CDOTAGamerules::GetTeamScore(g_pGameRules, 2);
    google::protobuf::RepeatedField<unsigned int>::Add(signOut + 21, &TeamScore);
    v219 = CDOTAGamerules::GetTeamScore(g_pGameRules, 3);
    google::protobuf::RepeatedField<unsigned int>::Add(signOut + 21, &v219);
  }
  *(signOut + 41) = (*(*engine + 712LL))(engine);
  v26 = *(signOut + 4);
  v27 = g_pGameRules;
  *(signOut + 4) = v26 | 0x20000;
  if ( *&v27[71].m_szQuestName[64] != 0 )
  {
    *(signOut + 161) = 1;
    v28 = v26 | 0x30000;
    *(signOut + 4) = v26 | 0x30000;
    if ( *(this + 1752) != 0 )
    {
LABEL_32:
      v29 = 0;
      if ( byte_4C4A558 != 0 )
        v29 = &unk_4C4A560;
      *(signOut + 4) = v28 | 0x80000;
      v30 = *(signOut + 27);
      if ( v30 == 0 )
      {
        v189 = operator new(0x38u);
        CMsgPoorNetworkConditions::CMsgPoorNetworkConditions(v189);
        v30 = v189;
        *(signOut + 27) = v189;
      }
      CMsgPoorNetworkConditions::CopyFrom(v30, v29);
      goto LABEL_39;
    }
    CDOTAGCServerSystem::CheckPoorNetworkConditions(this, 1);
    if ( *(this + 1752) != 0 )
    {
      v28 = *(signOut + 4);
      goto LABEL_32;
    }
  }
  else
  {
    *(signOut + 4) = v26 | 0x30000;
    *(signOut + 161) = 0;
  }
LABEL_39:
  PopulateMatchSignOutSocialFeedEvents(signOut);
  srcb = g_pGameRules;
  if ( g_pGameRules != -7568LL && *&g_pGameRules[52].m_szQuestName[72] != 0 )
  {
    CMsgSignOutDraftInfo::CMsgSignOutDraftInfo(v222);
    if ( *&srcb[52].m_szQuestName[72] > 0 )
    {
      v32 = 0;
      v33 = 0;
      do
      {
        v39 = (*&srcb[52].m_szQuestName[80] + v32);
        if ( v39 != 0 )
        {
          total_size = v224.total_size_;
          if ( v224.total_size_ >= *(&v224.total_size_ + 1) )
          {
            if ( *(&v224.total_size_ + 1) == v225 )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                &v224.current_size_,
                *(&v224.total_size_ + 1) + 1);
            v34 = operator new(0x28u);
            CMatchHeroSelectEvent::CMatchHeroSelectEvent(v34);
            v35 = v224.total_size_;
            ++*(&v224.total_size_ + 1);
            ++v224.total_size_;
            *(*&v224.current_size_ + 8 * v35) = v34;
          }
          else
          {
            ++v224.total_size_;
            v34 = *(*&v224.current_size_ + 8 * total_size);
          }
          v36 = *(v34 + 4);
          *(v34 + 24) = *v39 == 0;
          *(v34 + 4) = v36 | 1;
          v37 = v39[1];
          *(v34 + 4) = v36 | 5;
          *(v34 + 8) = v37;
          v38 = v39[2] == 3;
          *(v34 + 4) = v36 | 7;
          *(v34 + 7) = v38;
        }
        ++v33;
        v32 += 12;
      }
      while ( *&srcb[52].m_szQuestName[72] > v33 );
    }
    Captain = CDOTAGamerules::CM_GetCaptain(g_pGameRules, 2);
    SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, Captain);
    v43 = CDOTAGamerules::CM_GetCaptain(g_pGameRules, 3);
    HIDWORD(v224.elements_) = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v43);
    LODWORD(v224.elements_) = SteamID;
    v223 |= 3u;
    v44 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
    *(v44 + 4) |= 1u;
    v45 = v44;
    *(v44 + 8) = 7502;
    google::protobuf::MessageLite::SerializeAsString(&dota_bot_match_difficulty);
    *(v45 + 4) |= 2u;
    std::string::assign(v45[3], &dota_bot_match_difficulty);
    std::string::_Rep::_M_dispose(&dota_bot_match_difficulty.m_pConVar[-3], v220);
    CMsgSignOutDraftInfo::~CMsgSignOutDraftInfo(v222);
  }
  if ( CDOTAGCServerSystem::IsValidFantasyGame(this) )
  {
    for ( j = 0; j != 64; ++j )
    {
      while ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, j) != 2
           && CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, j) != 3 )
      {
        if ( ++j == 64 )
          goto LABEL_62;
      }
      v47 = *(signOut + 44);
      v48 = *(signOut + 45);
      if ( v47 < v48 )
      {
        v73 = *(signOut + 21);
        *(signOut + 44) = v47 + 1;
        v50 = *(v73 + 8 * v47);
      }
      else
      {
        if ( v48 == *(signOut + 46) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(signOut + 7, v48 + 1);
        v49 = operator new(0x70u);
        CMsgDOTAFantasyPlayerStats::CMsgDOTAFantasyPlayerStats(v49);
        v50 = v49;
        v51 = *(signOut + 44);
        v52 = *(signOut + 21);
        ++*(signOut + 45);
        *(signOut + 44) = v51 + 1;
        *(v52 + 8 * v51) = v49;
      }
      v53 = j;
      CDOTAGCServerSystem::PopulateFantasyStats(this, v50, v53, pLobby, 1);
    }
  }
LABEL_62:
  if ( v202 != 0 )
  {
    CMsgSignOutBotInfo::CMsgSignOutBotInfo(v222);
    IsCheatMode = CDOTAGamerules::IsCheatMode();
    v55 = v223;
    BYTE4(v224.elements_) = IsCheatMode;
    v223 |= 1u;
    if ( pLobby != 0 )
    {
      BYTE5(v224.elements_) = 1;
      LODWORD(v224.elements_) = *(pLobby + 56);
      v56 = *(pLobby + 131);
      v223 = v55 | 0xF;
      v224.current_size_ = v56;
    }
    else
    {
      ConVarRef::ConVarRef(&dota_bot_match_difficulty, "dota_bot_match_difficulty");
      LODWORD(v224.elements_) = dota_bot_match_difficulty.m_pConVarState->m_Value.m_nValue;
      v224.current_size_ = v224.elements_;
      v223 |= 0xAu;
    }
    m_pProtoBufBody = pMsgSignOut->m_pProtoBufBody;
    if ( *(m_pProtoBufBody + 16) > 0 )
    {
      v58 = 0;
      do
      {
        for ( k = 0; k != 64; ++k )
        {
          while ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, k) != v58 + 2 )
          {
            if ( ++k == 64 )
              goto LABEL_71;
          }
          CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, k);
        }
LABEL_71:
        ++v58;
        m_pProtoBufBody = pMsgSignOut->m_pProtoBufBody;
      }
      while ( v58 < *(m_pProtoBufBody + 16) );
    }
    v60 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((m_pProtoBufBody + 224));
    *(v60 + 4) |= 1u;
    v61 = v60;
    *(v60 + 8) = 7532;
    google::protobuf::MessageLite::SerializeAsString(&dota_bot_match_difficulty);
    *(v61 + 4) |= 2u;
    std::string::assign(v61[3], &dota_bot_match_difficulty);
    std::string::_Rep::_M_dispose(&dota_bot_match_difficulty.m_pConVar[-3], v220);
    CMsgSignOutBotInfo::~CMsgSignOutBotInfo(v222);
  }
  else
  {
    v127 = 0;
    CMsgSignOutCommunicationSummary::CMsgSignOutCommunicationSummary(v222);
    do
    {
      while ( 1 )
      {
        Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v127);
        v129 = Player;
        if ( Player != 0 && (*(Player->_vptr_IHandleEntity + 391))(Player) == 0 )
        {
          CDOTAGamerules::FinalizePlayerCommunicationSummary(g_pGameRules, v127);
          PlayerCommunicationSummary = CDOTAGamerules::GetPlayerCommunicationSummary(g_pGameRules, v127);
          if ( PlayerCommunicationSummary != 0 )
          {
            current_size = v224.current_size_;
            if ( v224.current_size_ < v224.allocated_size_ )
            {
              ++v224.current_size_;
              v132 = v224.elements_[current_size];
            }
            else
            {
              if ( v224.allocated_size_ == v224.total_size_ )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v224, v224.allocated_size_ + 1);
              v132 = operator new(0x50u);
              CMsgSignOutCommunicationSummary_PlayerCommunication::CMsgSignOutCommunicationSummary_PlayerCommunication(v132);
              v133 = v224.current_size_;
              ++v224.allocated_size_;
              ++v224.current_size_;
              v224.elements_[v133] = v132;
            }
            SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v127);
            v135 = *(v132 + 4);
            *(v132 + 6) = SteamAccountID;
            *(v132 + 4) = v135 | 1;
            unTotalPings = PlayerCommunicationSummary->pings.unTotalPings;
            *(v132 + 4) = v135 | 3;
            *(v132 + 7) = unTotalPings;
            unMaxIntervalPings = PlayerCommunicationSummary->pings.unMaxIntervalPings;
            *(v132 + 4) = v135 | 7;
            *(v132 + 8) = unMaxIntervalPings;
            v138 = PlayerCommunicationSummary->teammatePings.unTotalPings;
            *(v132 + 4) = v135 | 0xF;
            *(v132 + 9) = v138;
            v139 = PlayerCommunicationSummary->teammatePings.unMaxIntervalPings;
            *(v132 + 4) = v135 | 0x1F;
            *(v132 + 10) = v139;
            unTeamChatCount = PlayerCommunicationSummary->unTeamChatCount;
            *(v132 + 4) = v135 | 0x3F;
            *(v132 + 11) = unTeamChatCount;
            unAllChatCount = PlayerCommunicationSummary->unAllChatCount;
            *(v132 + 4) = v135 | 0x7F;
            v142 = v135;
            LOBYTE(v142) = -1;
            *(v132 + 12) = unAllChatCount;
            unChatWheelCount = PlayerCommunicationSummary->unChatWheelCount;
            *(v132 + 4) = v142;
            *(v132 + 13) = unChatWheelCount;
            unPauseCount = PlayerCommunicationSummary->unPauseCount;
            *(v132 + 4) = v135 | 0x1FF;
            *(v132 + 14) = unPauseCount;
            unUnpauseCount = PlayerCommunicationSummary->unUnpauseCount;
            *(v132 + 4) = v135 | 0x3FF;
            *(v132 + 15) = unUnpauseCount;
            unLinesDrawnCount = PlayerCommunicationSummary->unLinesDrawnCount;
            *(v132 + 4) = v135 | 0x7FF;
            *(v132 + 16) = unLinesDrawnCount;
            m_Data = CEntityInstance::GetEntityIndex(v129).m_Data;
            v148 = PlayerVoiceListener();
            PlayerSpeechTotalDuration = CPlayerVoiceListener::GetPlayerSpeechTotalDuration(v148, m_Data);
            *(v132 + 4) |= 0x800u;
            *(v132 + 17) = PlayerSpeechTotalDuration;
            if ( GetVoiceGameMgr() != 0 )
              break;
          }
        }
        if ( ++v127 == 64 )
          goto LABEL_161;
      }
      v150 = CEntityInstance::GetEntityIndex(v129).m_Data;
      VoiceGameMgr = GetVoiceGameMgr();
      v152 = CVoiceGameMgr::CountPlayersIgnoringPlayerChat(VoiceGameMgr, v150);
      *(v132 + 4) |= 0x1000u;
      *(v132 + 18) = v152;
      v153.m_Data = CEntityInstance::GetEntityIndex(v129).m_Data;
      v154 = GetVoiceGameMgr();
      v155 = CVoiceGameMgr::CountPlayersIgnoringPlayerVoice(v154, v153);
      *(v132 + 4) |= 0x2000u;
      ++v127;
      *(v132 + 19) = v155;
    }
    while ( v127 != 64 );
LABEL_161:
    v156 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
    *(v156 + 4) |= 1u;
    v157 = v156;
    *(v156 + 8) = 7545;
    google::protobuf::MessageLite::SerializeAsString(&dota_bot_match_difficulty);
    *(v157 + 4) |= 2u;
    std::string::assign(v157[3], &dota_bot_match_difficulty);
    std::string::_Rep::_M_dispose(&dota_bot_match_difficulty.m_pConVar[-3], v220);
    CMsgSignOutCommunicationSummary::~CMsgSignOutCommunicationSummary(v222);
  }
  v62 = *(pMsgSignOut->m_pProtoBufBody + 160);
  v63 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  Msg("Match signout:  duration = %u (%f) good guys win = %d\n", *(pMsgSignOut->m_pProtoBufBody + 8), v62, v63);
  v64 = CRTime::Render(*(pMsgSignOut->m_pProtoBufBody + 9), timeBuf);
  Msg("  Match start date: %s\n", v64);
  v65 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v65 != 15 && v65 != 19 )
    Msg(
      "  Num players on teams:  Good: %u  Bad: %u\n",
      **(pMsgSignOut->m_pProtoBufBody + 5),
      *(*(pMsgSignOut->m_pProtoBufBody + 5) + 4LL));
  v66 = 0;
  srcc = 0;
  v67 = pMsgSignOut->m_pProtoBufBody;
  if ( *(v67 + 16) > 0 )
  {
    while ( 1 )
    {
      v68 = 0;
      v69 = *&srcc[*(v67 + 7)];
      if ( *(v69 + 32) > 0 )
        break;
LABEL_88:
      srcc += 8;
      if ( ++v66 >= *(v67 + 16) )
        goto LABEL_89;
    }
    while ( 1 )
    {
      v71 = *(*(v69 + 24) + 8 * v68);
      if ( v71 == 0 )
        goto LABEL_81;
      Msg("Team %d Player %d m_unAccountID = %lld", v66, v68, *(v71 + 24));
      if ( *(v71 + 40) <= 8 )
      {
        v70 = *(v71 + 108);
        if ( v70 != 0 )
          goto LABEL_85;
      }
      else
      {
        v72 = *(v71 + 32);
        Msg(
          "  Items: %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
          *v72,
          v72[1],
          v72[2],
          v72[3],
          v72[4],
          v72[5],
          v72[6],
          v72[7],
          v72[8]);
        v70 = *(v71 + 108);
        if ( v70 != 0 )
LABEL_85:
          Msg("*** Left at time %d:%02d ***\n", v70 / 0x3C, v70 % 0x3C);
      }
      Msg(
        "  LastHit = %d  Deny = %d  ClaimedMiss = %d  ClaimedDeny = %d  Miss = %d\n",
        *(v71 + 72),
        *(v71 + 76),
        *(v71 + 148),
        *(v71 + 144),
        *(v71 + 152));
      Msg("  Level: %d Gold: %d  KDA: %d / %d / %d\n", *(v71 + 92), *(v71 + 52), *(v71 + 56), *(v71 + 60), *(v71 + 64));
      Msg(
        "  Actual Player Damage: %d Actual Building Damage: %d Actual Healing: %d\n",
        *(v71 + 160),
        *(v71 + 164),
        *(v71 + 216));
      Msg(
        "  Scaled Player Damage: %d Scaled Building Damage: %d Scaled Healing: %d\n",
        *(v71 + 96),
        *(v71 + 100),
        *(v71 + 104));
      Msg(
        "  XP per min: %u  Gold per min: %u  Claimed Farm: %u  Support Gold %u\n",
        *(v71 + 80),
        *(v71 + 84),
        *(v71 + 136),
        *(v71 + 140));
LABEL_81:
      if ( *(v69 + 32) <= ++v68 )
      {
        v67 = pMsgSignOut->m_pProtoBufBody;
        goto LABEL_88;
      }
    }
  }
LABEL_89:
  v74 = g_pGameRules;
  srcd = g_pGameRules;
  Msg("KILLEATER: Signing out with %d adjustments\n", *&g_pGameRules[52].m_szQuestName[122]);
  Inorder = *&v74[52].m_szQuestName[120];
  if ( Inorder != 0xFFFF )
  {
    v76 = *&srcd[52].m_szQuestName[104];
    v77 = Inorder;
    v78 = *(v76 + 32LL * Inorder);
    if ( v78 != 0xFFFF )
    {
      while ( 1 )
      {
        v77 = v78;
        if ( *(v76 + 32LL * v78) == 0xFFFF )
          break;
        v78 = *(v76 + 32LL * v78);
      }
      Inorder = v78;
    }
    while ( 1 )
    {
      v79 = v76 + 32 * v77;
      v80 = *(v79 + 8);
      v81 = *(signOut + 50);
      if ( v81 <= 0 )
        goto LABEL_100;
      v82 = *(signOut + 24);
      v83 = *v82;
      if ( v80 != *(*v82 + 12) )
        break;
LABEL_190:
      v89 = v83[1].current_size_;
      allocated_size = v83[1].allocated_size_;
      if ( v89 >= allocated_size )
      {
        if ( allocated_size == v83[1].total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v83 + 1, allocated_size + 1);
        goto LABEL_107;
      }
LABEL_194:
      elements = v83[1].elements_;
      v83[1].current_size_ = v89 + 1;
      v91 = elements[v89];
LABEL_108:
      v94 = v91[4];
      v91[8] = *(v79 + 12);
      v91[4] = v94 | 1;
      v95 = *(v79 + 16);
      v91[4] = v94 | 3;
      *(v91 + 3) = v95;
      LODWORD(v95) = *(v79 + 24);
      v91[4] = v94 | 7;
      v91[9] = v95;
      Inorder = CUtlRBTree<CUtlMap<KillCountAdjustmentKey_t,KillCountAdjustmentValue_t,unsigned short,bool (*)(KillCountAdjustmentKey_t const&,KillCountAdjustmentKey_t const&)>::Node_t,unsigned short,CUtlMap<KillCountAdjustmentKey_t,KillCountAdjustmentValue_t,unsigned short,bool (*)(KillCountAdjustmentKey_t const&,KillCountAdjustmentKey_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<KillCountAdjustmentKey_t,KillCountAdjustmentValue_t,unsigned short,bool (*)(KillCountAdjustmentKey_t const&,KillCountAdjustmentKey_t const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                  &srcd[52].m_szQuestName[96],
                  Inorder);
      if ( Inorder == 0xFFFF )
        goto LABEL_110;
      v76 = *&srcd[52].m_szQuestName[104];
      v77 = Inorder;
    }
    v84 = v82 + 1;
    v85 = &v84[(v81 - 1)];
    while ( v84 != v85 )
    {
      v83 = *v84++;
      if ( v80 == LODWORD(v83[2].elements_) )
        goto LABEL_190;
    }
LABEL_100:
    v86 = *(signOut + 51);
    if ( v81 < v86 )
    {
      v192 = *(signOut + 24);
      *(signOut + 50) = v81 + 1;
      v83 = *(v192 + 8 * v81);
    }
    else
    {
      if ( v86 == *(signOut + 52) )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(signOut + 8, v86 + 1);
      v83 = operator new(0x38u);
      CMsgEconPlayerStrangeCountAdjustment::CMsgEconPlayerStrangeCountAdjustment(v83);
      v87 = *(signOut + 50);
      v88 = *(signOut + 24);
      ++*(signOut + 51);
      *(signOut + 50) = v87 + 1;
      *(v88 + 8 * v87) = v83;
    }
    v89 = v83[1].current_size_;
    LODWORD(v83[2].elements_) = v80;
    v90 = v83[1].allocated_size_;
    v83->total_size_ |= 1u;
    if ( v89 >= v90 )
    {
      if ( v90 == v83[1].total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v83 + 1, v90 + 1);
LABEL_107:
      v91 = operator new(0x28u);
      CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment::CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment(v91);
      v92 = v83[1].current_size_;
      v93 = v83[1].elements_;
      ++v83[1].allocated_size_;
      v83[1].current_size_ = v92 + 1;
      v93[v92] = v91;
      goto LABEL_108;
    }
    goto LABEL_194;
  }
LABEL_110:
  Msg("KILLEATER: Message has %d player blocks\n", *(signOut + 50));
  netadr_t::SetIP(&serverInfo.m_netAdr, 0);
  netadr_t::SetPort(&serverInfo.m_netAdr, 0);
  netadr_t::SetType(&serverInfo.m_netAdr, NA_IP);
  netadr_t::netadr_t(&serverInfo.m_netAdrOnline);
  memset(&serverInfo, 0, sizeof(serverInfo));
  if ( netsupport != 0 )
    (*(*netsupport + 112LL))(netsupport, &serverInfo);
  if ( `guard variable for'CDOTAGCServerSystem::MatchSignOut(void)::sv_cluster == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::MatchSignOut(void)::sv_cluster) != 0 )
  {
    ConVarRef::ConVarRef(&CDOTAGCServerSystem::MatchSignOut(void)::sv_cluster, "sv_cluster");
    __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::MatchSignOut(void)::sv_cluster);
  }
  v96 = 0;
  m_nValue = CDOTAGCServerSystem::MatchSignOut(void)::sv_cluster.m_pConVarState->m_Value.m_nValue;
  v98 = pMsgSignOut->m_pProtoBufBody;
  *(v98 + 4) |= 0x100u;
  *(v98 + 30) = m_nValue;
  v99 = netadr_t::ToString(&serverInfo.m_netAdrOnline, 0);
  v100 = pMsgSignOut->m_pProtoBufBody;
  v101 = 0;
  v102 = v99;
  *(v100 + 4) |= 0x200u;
  v103 = strlen(v99);
  std::string::assign(*(v100 + 14), v102, v103);
  CMsgServerToGCVictoryPredictions::CMsgServerToGCVictoryPredictions(v222);
  signOuta = g_pGameRules;
  if ( *&g_pGameRules[53].m_szQuestName[16] > 0 )
  {
    while ( 1 )
    {
      v104 = v224.current_size_;
      v105 = *(signOuta + 958) + v96;
      if ( v224.current_size_ <= 0 )
        goto LABEL_121;
      v106 = *v224.elements_;
      if ( *(*v224.elements_ + 12) != *v105 )
        break;
LABEL_126:
      v110 = v106[10];
      v111 = *(v105 + 8);
      if ( v110 == v106[11] )
      {
        srce = *(v106 + 4);
        v124 = v110 + 1;
        v125 = 2 * v110;
        if ( v124 < v125 )
          v124 = v125;
        if ( v124 < 4 )
          v124 = 4;
        v106[11] = v124;
        v126 = operator new[](8LL * v124);
        *(v106 + 4) = v126;
        v112 = v126;
        v110 = v106[10];
        if ( srce != 0 )
        {
          memcpy(v126, srce, 8 * v110);
          operator delete[](srce);
          v112 = *(v106 + 4);
          v110 = v106[10];
        }
      }
      else
      {
        v112 = *(v106 + 4);
      }
      ++v101;
      v96 += 24;
      v106[10] = v110 + 1;
      v112[v110] = v111;
      if ( *(signOuta + 1914) <= v101 )
        goto LABEL_129;
    }
    v107 = v224.elements_ + 1;
    while ( v107 != &v224.elements_[(v224.current_size_ - 1) + 1] )
    {
      v106 = *v107++;
      if ( v106[12] == *v105 )
        goto LABEL_126;
    }
LABEL_121:
    if ( v224.allocated_size_ > v224.current_size_ )
    {
      ++v224.current_size_;
      v106 = v224.elements_[v104];
    }
    else
    {
      if ( v224.allocated_size_ == v224.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v224, v224.allocated_size_ + 1);
      v106 = operator new(0x38u);
      CMsgServerToGCVictoryPredictions_Record::CMsgServerToGCVictoryPredictions_Record(v106);
      v108 = v224.current_size_;
      ++v224.allocated_size_;
      ++v224.current_size_;
      v224.elements_[v108] = v106;
    }
    v109 = *v105;
    v106[4] |= 1u;
    v106[12] = v109;
    goto LABEL_126;
  }
LABEL_129:
  if ( v224.current_size_ > 0 )
  {
    v113 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
    *(v113 + 4) |= 1u;
    *(v113 + 8) = 7540;
    v114 = v113;
    google::protobuf::MessageLite::SerializeAsString(v220);
    *(v114 + 4) |= 2u;
    std::string::assign(v114[3], v220);
    std::string::_Rep::_M_dispose(v220[0]._M_dataplus._M_p - 24, &dota_bot_match_difficulty);
  }
  if ( *&g_pGameRules[6].m_szQuestName[68] == 19 && *(this + 251) != 0 )
  {
    v167 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
    *(v167 + 4) |= 1u;
    v168 = v167;
    *(v167 + 8) = 7384;
    google::protobuf::MessageLite::SerializeAsString(&dota_bot_match_difficulty);
    *(v168 + 4) |= 2u;
    std::string::assign(v168[3], &dota_bot_match_difficulty);
    std::string::_Rep::_M_dispose(&dota_bot_match_difficulty.m_pConVar[-3], v220);
  }
  if ( pLobby != 0 )
  {
    v115 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v115 != 15 && v115 != 19 )
    {
      CDOTAGamerules::IngameEvents_AddResultToSignout(g_pGameRules, pLobby, pMsgSignOut);
      for ( m = 0; m != 24; ++m )
        CDOTA_PlayerResource::AddStatsResultToSignout(g_pDOTAPlayerResource, pLobby, pMsgSignOut, m);
      v117 = GDOTAChallengeSystem();
      CDOTAChallengeSystem::AddResultToSignout(v117, pLobby, pMsgSignOut);
    }
  }
  v118 = CDOTA_PlayerResource::BHasAnyPlayerWithBattlePass(g_pDOTAPlayerResource);
  v119 = pMsgSignOut->m_pProtoBufBody;
  *(v119 + 5) |= 0x10u;
  *(v119 + 83) = v118;
  if ( unHumanPlayers > 0
    || dota_force_upload_match_stats.m_pParent->m_Value.m_nValue != 0
    || pLobby != 0
    || *&g_pGameRules[6].m_szQuestName[68] == 19 )
  {
    if ( *(this + 457) != 1 )
    {
      *(this + 457) = 1;
      CDOTAGCServerSystem::SetSessionNeed(this);
    }
    v120 = GCClientSystem();
    v121 = (v120 + 24);
    v122 = v120;
    v123 = operator new(0x158u);  // new CGCClientJobUploadMatchStats (size matches)
    GCSDK::CJob::CJob(v123, (v122 + 72));
    v123[1]._vptr_CJob = v121;
    v123->_vptr_CJob = off_43052F0;  // vptr: CGCClientJobUploadMatchStats
    *(&v123[1] + 2) = 4;
    LOBYTE(v123[1].m_pvStartParam) = 0;
    *&v123[1].m_hCoroutine = pMsgSignOut;
    Msg("SIGNOUT: Job created, Protobuf:\n");
    ProtoBufHelper::MsgMultilineDebugString(pMsgSignOut->m_pProtoBufBody);
    GCSDK::CJob::StartJob(v123, 0);
  }
  else
  {
    *&v165 = Msg("Not submitting stats. Both teams must have human players.\n").m128_u64[0];
    (*(pMsgSignOut->_vptr_CProtoBufMsgBase + 1))(pMsgSignOut, v165);
    if ( *(this + 457) != 0 )
    {
      *(this + 457) = 0;
      CDOTAGCServerSystem::SetSessionNeed(this);
    }
    v166 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_match_signout", 0, 0);
    if ( v166 != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v166, 0);
  }
  CMsgServerToGCVictoryPredictions::~CMsgServerToGCVictoryPredictions(v222);
}


// dota_dump_connection_stats  (line 4925, @0x0000000002990f90, libserver.so)  // inlines: Mean, RoundFloatToInt, StandardDeviation, ToDOTAPlayer, Variance, _mm_cvt_ss2si, _mm_cvtss_si32, _mm_load_ss, _mm_set_ss
// calls: Msg, UTIL_PlayerByIndex, CDOTA_PlayerResource::GetFullUpdateCount, sqrt
// strings: "Player           Ping PingDev  Loss FullUp\n", "%-16.16s %4d %7.2f %4.1f%% %6d\n"
void __fastcall dota_dump_connection_stats(const CCommandContext *const ctx, const CCommand *const args)
{
  unsigned int v2; // r12d
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // rbx
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // r13
  float v12; // xmm0_4
  unsigned int v13; // r15d
  float v14; // xmm1_4
  int FullUpdateCount; // eax
  double v16; // xmm2_8
  double v17; // xmm1_8
  double v18; // xmm0_8
  float v19; // xmm2_4
  double v20; // xmm0_8
  unsigned int v21; // r13d
  __int64 v22; // rax
  double v23; // [rsp+8h] [rbp-48h]
  double v24; // [rsp+10h] [rbp-40h]
  float loss; // [rsp+18h] [rbp-38h]

  v2 = 0;
  Msg("Player           Ping PingDev  Loss FullUp\n", args);
  do
  {
    v3 = UTIL_PlayerByIndex(++v2);
    v4 = v3;
    if ( v3 != 0 && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0 )
    {
      v5 = (*(v4->_vptr_IHandleEntity + 393))(v4);
      v6 = (*(*engine + 240LL))(engine, v2);
      v7 = v6;
      if ( v6 != 0 )
      {
        v8 = (*(*v6 + 240LL))(v6, 1);
        v9 = (*(*v7 + 240LL))(v7, 0);
        v10 = *(v8 + 44);
        v11 = v9;
        v12 = *(v8 + 52);
        v13 = 0;
        v14 = v10 / (v12 + v10);
        if ( g_pDOTAPlayerResource != 0 )
        {
          loss = v14;
          FullUpdateCount = CDOTA_PlayerResource::GetFullUpdateCount(g_pDOTAPlayerResource, v5);
          v14 = loss;
          v13 = FullUpdateCount;
        }
        v16 = 0.0;
        v17 = (v14 * 100.0);
        if ( *v11 > 1 )
          v16 = *(v11 + 32) / (*v11 - 1);
        v18 = sqrt(v16);
        v19 = 0.0;
        v20 = v18 * 1000.0;
        if ( *v11 > 0 )
          v19 = 1000.0 * *(v11 + 16);
        v23 = v20;
        v21 = v19;
        v24 = v17;
        v22 = (*(v4->_vptr_IHandleEntity + 106))(v4);
        Msg("%-16.16s %4d %7.2f %4.1f%% %6d\n", v22, v21, v13, v23, v24);
      }
    }
  }
  while ( v2 != 64 );
}


// AddConnectionStats  (line 4967, @0x0000000002991870, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgServerToGCMatchConnectionStats_Player>::TypeHandler>, Mean, New, StandardDeviation, Variance, add_players, set_account_id, set_avg_ping_ms, set_full_resends, set_has_account_id, set_has_avg_ping_ms, set_has_full_resends, set_has_ip, set_has_ping_deviation, set_ip, set_packet_loss, set_ping_deviation
// calls: operator new, CMsgServerToGCMatchConnectionStats_Player::CMsgServerToGCMatchConnectionStats_Player, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), sqrt, operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::SendConnectionStats
void __fastcall AddConnectionStats(
        CMsgServerToGCMatchConnectionStats *const stats,
        AccountID_t accountID,
        uint32 ip_0,
        int fullUpdateCount,
        const SNetChannelLatencyStats *const incoming,
        const SNetChannelLatencyStats *const a6,
        double a7,
        __m128d a8,
        const SNetChannelLatencyStats *const outgoing)
{
  __int64 v12; // rax
  int v13; // esi
  CMsgServerToGCMatchConnectionStats_Player *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  CMsgServerToGCMatchConnectionStats_Player *v17; // rbx
  int v18; // edx
  int v19; // eax
  int v20; // edx
  double v21; // xmm0_8
  int v22; // edx
  float m_n; // xmm1_4
  float v24; // xmm0_4
  __int64 v25; // rdx

  v12 = *(stats + 12);
  v13 = *(stats + 13);
  if ( v12 < v13 )
  {
    v25 = *(stats + 5);
    *(stats + 12) = v12 + 1;
    v17 = *(v25 + 8 * v12);
  }
  else
  {
    if ( v13 == *(stats + 14) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve((stats + 40), v13 + 1);
    v14 = operator new(0x30u);
    CMsgServerToGCMatchConnectionStats_Player::CMsgServerToGCMatchConnectionStats_Player(v14);
    v15 = *(stats + 12);
    v16 = *(stats + 5);
    ++*(stats + 13);
    *(stats + 12) = v15 + 1;
    v17 = v14;
    *(v16 + 8 * v15) = v14;
  }
  v18 = *(v17 + 4);
  v19 = v18 | 1;
  *(v17 + 6) = accountID;
  *(v17 + 4) = v18 | 1;
  if ( ip_0 != 0 )
  {
    *(v17 + 7) = ip_0;
    v19 = v18 | 3;
    *(v17 + 4) = v18 | 3;
  }
  if ( outgoing->totallatency.m_n <= 0 )
    v20 = 0;
  else
    v20 = (outgoing->totallatency.m_newM * 1000.0);
  *(v17 + 8) = v20;
  v21 = 0.0;
  *(v17 + 4) = v19 | 4;
  if ( outgoing->totallatency.m_n > 1 )
    v21 = outgoing->totallatency.m_newS / (outgoing->totallatency.m_n - 1);
  a8.m128d_f64[0] = sqrt(v21) * 1000.0;
  v22 = *(v17 + 4);
  *(v17 + 4) = v22 | 0x10;
  *(v17 + 10) = _mm_movedup_pd(a8).m128d_f64[0];
  m_n = incoming->totallatency.m_n;
  v24 = a6->totallatency.m_n;
  *(v17 + 4) = v22 | 0x38;
  *(v17 + 11) = fullUpdateCount;
  *(v17 + 9) = m_n / (v24 + m_n);
}


// CDOTAGCServerSystem::SendConnectionStats  (line 4985, @0x00000000029947c0, libserver.so)  // inlines: AllocProto, CPeerToPeerAddress, CProtoBufMsg, CSteamID, CVProfScope, Clear, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInt, IsEnabled, IsValid, Lock, SetFromSteamID, SetFromString, ToDOTAPlayer, Unlock, end, netadr_t, ns_address, operator++, set_cluster_id, set_has_cluster_id, set_has_league_id, set_has_match_id, set_has_region_id, set_league_id, set_match_id, set_region_id, ~CVProfScope, ~ns_address
// calls: operator new, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, CMsgServerToGCMatchConnectionStats::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope (32 total)
// callers: CDOTAGCServerSystem::GameRules_State_Enter
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "sv_region", "sv_cluster"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_pMemoryPool
void __fastcall CDOTAGCServerSystem::SendConnectionStats(CDOTAGCServerSystem *const this)
{
  int m_enabled; // eax
  bool v2; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats> *v3; // r13
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r14d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  int v9; // eax
  ConVar *m_pConVarState; // rdx
  __int64 v11; // rdx
  int v12; // edx
  unsigned int v13; // ebx
  CBasePlayer *v14; // rax
  double v15; // xmm0_8
  __m128d v16; // xmm1
  CBasePlayer *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r14
  const SNetChannelLatencyStats *v21; // r15
  __int64 v22; // r13
  uint32 IPHostByteOrder; // r13d
  AccountID_t SteamAccountID; // eax
  double v25; // xmm0_8
  __m128d v26; // xmm1
  __int64 v27; // rbx
  CGCClientSystem *v28; // rax
  char v29; // dl
  NetworkSystemAddressType_t v30; // eax
  GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats> *pConnectionStatsMsg; // [rsp+10h] [rbp-B0h]
  google::protobuf::Message *stats; // [rsp+20h] [rbp-A0h]
  int fullUpdateCount; // [rsp+28h] [rbp-98h]
  char fullUpdateCounta; // [rsp+28h] [rbp-98h]
  int playerID; // [rsp+2Ch] [rbp-94h]
  CSteamID v37; // [rsp+30h] [rbp-90h] BYREF
  ConVarRef sv_region; // [rsp+40h] [rbp-80h] BYREF
  ConVarRef sv_cluster; // [rsp+50h] [rbp-70h] BYREF
  ns_address address; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  pConnectionStatsMsg = operator new(0x28u);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(pConnectionStatsMsg, 0x1D46u);
  pConnectionStatsMsg->m_pProtoBufBody = 0;
  pConnectionStatsMsg->_vptr_CProtoBufMsgBase = &off_4305450;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v2 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_bRegisteredWithMemoryPoolMgr )
    {
      v3 = operator new(0x28u);
      v4 = CMsgServerToGCMatchConnectionStats::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v4->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v6 = CMsgServerToGCMatchConnectionStats::descriptor();
      v7 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v6->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
      v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_43065D0;
      GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_pMemoryPool = v3;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
      GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  stats = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_pMemoryPool);
  pConnectionStatsMsg->m_pProtoBufBody = stats;
  if ( v2 )
  {
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    stats = pConnectionStatsMsg->m_pProtoBufBody;
  }
  ConVarRef::ConVarRef(&sv_region, "sv_region");
  ConVarRef::ConVarRef(&sv_cluster, "sv_cluster");
  v9 = *(stats + 4);
  *(stats + 3) = *(this + 242);
  m_pConVarState = sv_region.m_pConVarState;
  *(stats + 4) = v9 | 1;
  LODWORD(m_pConVarState) = m_pConVarState->m_Value.m_nValue;
  *(stats + 4) = v9 | 3;
  *(stats + 8) = m_pConVarState;
  LODWORD(m_pConVarState) = sv_cluster.m_pConVarState->m_Value.m_nValue;
  *(stats + 4) = v9 | 0x13;
  *(stats + 16) = m_pConVarState;
  v11 = *(this + 260);
  if ( v11 != 0 )
  {
    v12 = *(v11 + 264);
    if ( v12 != 0 )
    {
      *(stats + 4) = v9 | 0x17;
      *(stats + 9) = v12;
    }
  }
  v13 = 0;
  do
  {
    v14 = UTIL_PlayerByIndex(++v13);
    v17 = v14;
    if ( v14 == 0 )
      continue;
    if ( (*(v14->_vptr_IHandleEntity + 140))(v14) == 0 )
      continue;
    playerID = (*(v17->_vptr_IHandleEntity + 393))(v17);
    v18 = (*(*engine + 240LL))(engine, v13);
    v19 = v18;
    if ( v18 == 0 )
      continue;
    v20 = (*(*v18 + 240LL))(v18, 1);
    v21 = (*(*v19 + 240LL))(v19, 0);
    netadr_t::SetIP(&address.m_adr, 0);
    netadr_t::SetPort(&address.m_adr, 0);
    netadr_t::SetType(&address.m_adr, NA_IP);
    HIWORD(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits) = BYTE6(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits)
                                                                & 0xF;
    address.m_steamID.m_steamID.m_steamid.m_unAll64Bits &= 0xFFF0000000000000LL;
    address.m_steamID.m_steamChannel = 0;
    address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
    address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
    v22 = (*(*v19 + 8LL))(v19);
    address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
    netadr_t::Clear(&address.m_adr);
    HIWORD(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits) = BYTE6(address.m_steamID.m_steamID.m_steamid.m_unAll64Bits)
                                                                & 0xF;
    address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
    address.m_steamID.m_steamID.m_steamid.m_unAll64Bits &= 0xFFF0000000000000LL;
    address.m_steamID.m_steamChannel = 0;
    if ( v22 != 0 )
    {
      if ( *v22 == 61 )
      {
        if ( *(v22 + 1) != 91 )
          goto LABEL_21;
        ++v22;
        fullUpdateCounta = 1;
      }
      else
      {
        if ( *v22 != 91 )
        {
          if ( netadr_t::SetFromString(&address.m_adr, v22, 1) )
            address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
          goto LABEL_21;
        }
        fullUpdateCounta = 0;
      }
      CSteamID::CSteamID(&v37, v22, EUniverse::k_EUniverseInvalid);
      v29 = BYTE6(v37.m_steamid.m_unAll64Bits) & 0xF0;
      if ( (v37.m_steamid.m_unAll64Bits & 0xF0000000000000LL) != 0
        && BYTE6(v37.m_steamid.m_unAll64Bits) <= 0xAFu
        && (HIBYTE(v37.m_steamid.m_unAll64Bits) - 1) <= 3u )
      {
        if ( v29 == 16 )
        {
          if ( v37.m_steamid.m_comp == 0 || (*(&v37.m_steamid.m_comp + 1) & 0xFFFFFu) > 4 )
            goto LABEL_21;
        }
        else if ( v29 == 112 )
        {
          if ( v37.m_steamid.m_comp == 0 || (*(&v37.m_steamid.m_comp + 1) & 0xFFFFF) != 0 )
            goto LABEL_21;
        }
        else if ( v29 == 48 && v37.m_steamid.m_comp == 0 )
        {
          goto LABEL_21;
        }
        v30 = NetworkSystemAddressType_t::NSAT_P2P;
        if ( fullUpdateCounta != 0 )
        {
          if ( v29 == 64 || v29 == 48 )
          {
            address.m_AddrType = NetworkSystemAddressType_t::NSAT_PROXIED_GAMESERVER;
            address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
            address.m_steamID.m_steamChannel = 1;
            address.m_steamID.m_steamID = v37;
            goto LABEL_21;
          }
          v30 = NetworkSystemAddressType_t::NSAT_PROXIED_CLIENT;
        }
        address.m_AddrType = v30;
        address.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
        address.m_steamID.m_steamChannel = 0;
        address.m_steamID.m_steamID = v37;
      }
    }
LABEL_21:
    if ( g_pDOTAPlayerResource != 0 )
      fullUpdateCount = CDOTA_PlayerResource::GetFullUpdateCount(g_pDOTAPlayerResource, playerID);
    else
      fullUpdateCount = 0;
    if ( address.m_AddrType != NetworkSystemAddressType_t::NSAT_NETADR )
      IPHostByteOrder = 0;
    else
      IPHostByteOrder = netadr_t::GetIPHostByteOrder(&address.m_adr);
    SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, playerID);
    AddConnectionStats(stats, SteamAccountID, IPHostByteOrder, fullUpdateCount, (v20 + 44), (v20 + 52), v25, v26, v21);
    address.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
    netadr_t::Clear(&address.m_adr);
  }
  while ( v13 != 64 );
  v27 = *(this + 206);
  if ( v27 != (this + 1632) )
  {
    do
    {
      AddConnectionStats(stats, *(v27 + 32), *(v27 + 40), *(v27 + 44), (v27 + 92), (v27 + 100), v15, v16, (v27 + 296));
      v27 = std::_Rb_tree_increment(v27);
    }
    while ( (this + 1632) != v27 );
  }
  ProtoBufHelper::MsgMultilineDebugString(pConnectionStatsMsg->m_pProtoBufBody);
  v28 = GCClientSystem();
  CGCClientSystem::BSendMessage(v28, pConnectionStatsMsg);
  (*(pConnectionStatsMsg->_vptr_CProtoBufMsgBase + 1))(pConnectionStatsMsg);
}


// CDOTAGCServerSystem::GetMatchStartTimeString  (line 5048, @0x0000000002994e40, libserver.so)  // inlines: V_strlen
// calls: CRTime::Render
// globals: CDOTAGCServerSystem::GetMatchStartTimeString(void)::szStartTime
const char *__fastcall CDOTAGCServerSystem::GetMatchStartTimeString(CDOTAGCServerSystem *const this)
{
  int v1; // ecx
  char *v2; // rax
  char *v3; // rcx

  CRTime::Render(*(this + 424), CDOTAGCServerSystem::GetMatchStartTimeString(void)::szStartTime);
  v1 = strlen(CDOTAGCServerSystem::GetMatchStartTimeString(void)::szStartTime);
  if ( v1 > 0 )
  {
    v2 = CDOTAGCServerSystem::GetMatchStartTimeString(void)::szStartTime;
    v3 = &CDOTAGCServerSystem::GetMatchStartTimeString(void)::szStartTime[v1 - 1 + 1];
    do
    {
      if ( *v2 == 10 || *v2 == 58 )
        *v2 = 95;
      ++v2;
    }
    while ( v2 != v3 );
  }
  return CDOTAGCServerSystem::GetMatchStartTimeString(void)::szStartTime;
}


// CDOTAGCServerSystem::CheckUpdateConnectedPlayers  (line 5067, @0x00000000029a1bd0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgConnectedPlayers_Player>::TypeHandler>, AllocProto, CEntityHandle, CMicroProfilerGuard, CMicroProfilerSample, CMsgConnectedPlayers_SendReason_Name, CProtoBufMsg, CVProfScope, DOTAGameRules, DOTALeaverStatus_t_Name, DOTA_GameState_Name, EnterScope, FreeProto, Get, GetAssignedHero, GetBool, GetClassNameAsCStr, GetClassname, GetElapsed, GetEntryIndex, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetFloat, GetHandleEntity, GetInstance, GetInt, GetLobby, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, IsEnabled, Lock, LookupEntity, Max<double>, New, PLAT_CPU_TIME, State_Get, String, ToDOTABaseNPC, ToDOTABaseNPCHero, Unlock, _M_data, add_connected_players, add_disconnected_players, c_str, mutable_leaver_state, mutable_poor_network_conditions, operator CBaseEntity*, operator=, set_building_state, set_dire_kills, set_disconnect_reason, set_first_blood_happened, set_game_state, set_has_building_state, set_has_dire_kills, set_has_disconnect_reason, set_has_first_blood_happened, set_has_game_state, set_has_hero_id, set_has_leaver_state, set_has_poor_network_conditions, set_has_radiant_kills, set_has_radiant_lead, set_has_send_reason, set_has_spectator_count, set_has_steam_id, set_hero_id, set_radiant_kills, set_radiant_lead, set_send_reason, set_spectator_count, set_steam_id, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: GCClientSystem, Plat_FloatTime, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope, IsPermanentLeaverState, CDOTA_PlayerResource::GetPlayerIDBySteamID, CDOTA_PlayerResource::GetPlayer, operator new, CMsgConnectedPlayers_Player::CMsgConnectedPlayers_Player (54 total)
// callers: CDOTAGamerules::State_Think_DISCONNECT, CDOTAGCServerSystem::FrameUpdatePostEntityThink
// strings: " Member[%d] Player[%d]: %s %s CONNECTED lobby state %s changed hero\n", "  Adding to connected_players\n", "Player %s in lobby not found in player resource?\n", " Member[%d] Player[%d]: %s %s CONNECTED lobby state %s connected\n", "Sending a lobby update for reason %s\n", " Member[%d] Player[%d]: %s DISCONNECTED lobby state %s\n" (16 total)
// globals: GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool, GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool
bool __fastcall CDOTAGCServerSystem::CheckUpdateConnectedPlayers(CDOTAGCServerSystem *const this)
{
  __int64 v1; // rbx
  double v2; // xmm0_8
  __m128d v3; // xmm0
  int v4; // r10d
  bool v5; // r13
  unsigned int i; // r12d
  __int64 v7; // r13
  CDOTAPlayer *Player; // rax
  unsigned __int64 v9; // xmm0_8
  CDOTAPlayer *v10; // r15
  unsigned __int16 v11; // dx
  int v12; // esi
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  unsigned int v16; // r14d
  ConVar *m_pParent; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v18; // r13
  __int64 v19; // rax
  int v20; // edx
  CSteamID::SteamID_t *v21; // r14
  __int64 current_size; // rax
  void **v23; // rdx
  CSteamID::SteamID_t v24; // rdx
  unsigned int v26; // r13d
  google::protobuf::internal *v27; // rax
  int v28; // edx
  const char *v29; // r13
  const char *v30; // r14
  const char *v31; // rax
  int m_nValue; // eax
  void **elements; // rdx
  const char *v34; // rax
  const CMsgLeaverState *LeaverState; // r14
  google::protobuf::Message *v36; // r14
  __int64 v37; // rax
  int v38; // edx
  CMsgLeaverState **v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  CMsgLeaverState *v42; // rdi
  CSteamID::SteamID_t v43; // rdx
  int DisconnectionReason; // eax
  uint32 v45; // eax
  google::protobuf::internal *v46; // rax
  int v47; // edx
  const char *v48; // r14
  const char *v49; // rax
  CGameRules *v50; // rdx
  google::protobuf::Message *v51; // rax
  int v52; // ecx
  unsigned int v53; // r12d
  google::protobuf::Message *v54; // rax
  unsigned __int8 v55; // al
  google::protobuf::Message *v56; // rbx
  CMsgPoorNetworkConditions *v57; // rdi
  int TeamNetWorth; // ebx
  int v59; // eax
  google::protobuf::Message *v60; // rdx
  google::protobuf::Message *v61; // rax
  int vptr_CProtoBufMsgBase; // edx
  int v63; // esi
  int DeathsForTeam; // ebx
  google::protobuf::Message *v65; // rax
  int v66; // esi
  int v67; // r12d
  google::protobuf::Message *v68; // rax
  int v69; // esi
  google::protobuf::Message *v70; // rax
  google::protobuf::internal *v71; // rax
  int v72; // edx
  const char **v73; // rax
  CGCClientSystem *v74; // rax
  google::protobuf::Message *v75; // rsi
  char v76; // al
  char v77; // al
  google::protobuf::internal *v78; // rax
  int v79; // edx
  const char *v80; // r14
  const char *v81; // rax
  GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers> *v82; // r15
  const google::protobuf::Descriptor *v83; // rax
  const google::protobuf::Descriptor *v84; // rax
  uint32 v85; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v86; // rax
  google::protobuf::internal *v87; // rax
  int v88; // edx
  const char *v89; // r12
  unsigned int v90; // r13d
  google::protobuf::internal *v91; // rax
  int v92; // edx
  const char **v93; // rax
  __int64 v94; // rdx
  CHLTVDirector *v95; // rax
  CHLTVDirector *v96; // rax
  int v97; // r15d
  __int64 v98; // rax
  int m_enabled; // r13d
  ThreadId_t m_TargetThreadId; // r13
  unsigned __int64 v101; // r14
  uint64 m_numTimeBaseTicks; // rcx
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount> *v103; // r13
  const google::protobuf::Descriptor *v104; // rax
  const google::protobuf::Descriptor *v105; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v107; // rax
  google::protobuf::Message *m_pProtoBufBody; // rax
  CGCClientSystem *v109; // rax
  google::protobuf::Message *v110; // rsi
  CMsgLeaverState *v111; // r14
  CMsgPoorNetworkConditions *v112; // r13
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v114; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r14
  CDOTAGameManager *v118; // rax
  int HeroIDByName; // eax
  float flLastMessageSendAge; // [rsp+4h] [rbp-FCh]
  double now; // [rsp+18h] [rbp-E8h]
  unsigned __int8 bFirstBloodHappened; // [rsp+2Bh] [rbp-D5h]
  unsigned int v123; // [rsp+2Ch] [rbp-D4h]
  float flUrgency; // [rsp+38h] [rbp-C8h]
  const char *flUrgencya; // [rsp+38h] [rbp-C8h]
  uint32 flUrgencyb; // [rsp+38h] [rbp-C8h]
  float flUrgency_0; // [rsp+40h] [rbp-C0h]
  uint32 unHeroID; // [rsp+44h] [rbp-BCh]
  float unHeroIDa; // [rsp+44h] [rbp-BCh]
  bool unHeroIDb; // [rsp+44h] [rbp-BCh]
  int iPlayerID; // [rsp+48h] [rbp-B8h]
  float iPlayerIDa; // [rsp+48h] [rbp-B8h]
  char iPlayerIDc; // [rsp+48h] [rbp-B8h]
  bool iPlayerIDd; // [rsp+48h] [rbp-B8h]
  uint32 iPlayerIDb; // [rsp+48h] [rbp-B8h]
  int proxies; // [rsp+5Ch] [rbp-A4h] BYREF
  CSteamID playerSteamID; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall **specs)(GCSDK::CProtoBufMsgBase *); // [rsp+70h] [rbp-90h] BYREF
  google::protobuf::Message *pObject; // [rsp+90h] [rbp-70h]
  GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount> leaverStateToUse; // [rsp+A0h] [rbp-60h] BYREF

  v1 = *(this + 260);
  if ( *(GCClientSystem() + 333) != 0 || g_pDOTAPlayerResource == 0 || g_pGameRules == 0 || v1 == 0 )
    return 0;
  v2 = Plat_FloatTime();
  now = v2;
  if ( (*(this + 1895) != 1 || *(v1 + 264) != 0) && v2 > *(this + 216) )
  {
    CDOTAGCServerSystem::SendScoreboardUpdate(this, v1);
    *(this + 216) = now + 5.0;
  }
  if ( now > *(this + 217) )
  {
    if ( HLTVDirector() != 0 )
    {
      v95 = HLTVDirector();
      if ( (*(v95->_vptr_IGameEventListener2 + 8))(v95) != 0 )
      {
        v96 = HLTVDirector();
        v97 = 0;
        v98 = (*(v96->_vptr_IGameEventListener2 + 8))(v96);
        (*(*v98 + 56LL))(v98, &proxies, &playerSteamID, &specs);
        if ( specs - proxies >= 0 )
          v97 = specs - proxies;
        if ( *(this + 436) != v97 )
        {
          if ( g_pGameRules != 0 )
            CDOTAGamerules::OnNumSpectatorsChanged(g_pGameRules, v97);
          GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&leaverStateToUse, 0x1D49u);
          leaverStateToUse._vptr_CProtoBufMsgBase = &off_4305490;
          leaverStateToUse.m_pProtoBufBody = 0;
          m_enabled = g_VProfCurrentProfile.m_enabled;
          unHeroIDb = m_enabled != 0;
          if ( m_enabled != 0 )
          {
            m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
            v101 = __rdtsc();
            if ( m_TargetThreadId == ThreadGetCurrentId() )
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
              v114 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
              v114->m_BudgetFlags |= 4u;
              CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
              g_VProfCurrentProfile.m_fAtRoot = 0;
            }
            m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
            ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
            g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v101 + __rdtsc();
          }
          if ( !GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_bRegisteredWithMemoryPoolMgr )
          {
            pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
            if ( !GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_bRegisteredWithMemoryPoolMgr )
            {
              v103 = operator new(0x28u);
              v104 = CMsgServerGCUpdateSpectatorCount::descriptor();
              flUrgencyb = google::protobuf::internal::ExtensionSet::GetInt32(
                             (v104->options_ + 8),
                             msgpool_hard_limit.number_,
                             msgpool_hard_limit.default_value_);
              v105 = CMsgServerGCUpdateSpectatorCount::descriptor();
              Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v105->options_ + 8),
                        msgpool_soft_limit.number_,
                        msgpool_soft_limit.default_value_);
              GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v103, Int32, flUrgencyb);
              v103->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306610;
              GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool = v103;
              v107 = GCSDK::GProtoBufMsgMemoryPoolMgr();
              GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v107, v103);
              GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_bRegisteredWithMemoryPoolMgr = 1;
            }
            pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
          }
          m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool);
          leaverStateToUse.m_pProtoBufBody = m_pProtoBufBody;
          if ( unHeroIDb )
          {
            CVProfile::ExitScope(&g_VProfCurrentProfile);
            m_pProtoBufBody = leaverStateToUse.m_pProtoBufBody;
          }
          *(m_pProtoBufBody + 4) |= 1u;
          *(m_pProtoBufBody + 6) = v97;
          v109 = GCClientSystem();
          CGCClientSystem::BSendMessage(v109, &leaverStateToUse);
          v110 = leaverStateToUse.m_pProtoBufBody;
          *(this + 436) = v97;
          leaverStateToUse._vptr_CProtoBufMsgBase = &off_4305490;
          if ( v110 != 0 )
          {
            GCSDK::CProtoBufMsgMemoryPoolBase::Free(
              GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool,
              v110);
            leaverStateToUse.m_pProtoBufBody = 0;
          }
          GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&leaverStateToUse);
        }
      }
    }
    *(this + 217) = now + 60.0;
  }
  v3 = *&now;
  flUrgency = dota_update_connected_players_urgency_heartbeat.m_pParent->m_Value.m_fValue;
  v3.m128d_f64[0] = now - *(this + 213);
  if ( v3.m128d_f64[0] < 0.0 )
    flLastMessageSendAge = 0.0;
  else
    flLastMessageSendAge = _mm_movedup_pd(v3).m128d_f64[0];
  bFirstBloodHappened = g_pGameRules[61].m_szQuestName[114] ^ 1;
  if ( *(this + 430) == *&g_pGameRules[6].m_szQuestName[28] )
  {
    if ( *(this + 1724) != bFirstBloodHappened )
    {
      v123 = 3;
      flUrgency = 0.0;
      goto LABEL_13;
    }
    if ( *(this + 214) <= now - dota_update_connected_players_check_time.m_pParent->m_Value.m_fValue
      && dota_update_connected_players_send_time.m_pParent->m_Value.m_fValue <= flLastMessageSendAge )
    {
      v123 = 1;
      goto LABEL_13;
    }
    return 0;
  }
  v123 = 2;
  flUrgency = 0.0;
LABEL_13:
  *(this + 214) = now;
  if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
    Msg("UpdateConnectedPlayers ======================================\n");
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&specs, 0x1B7Au);
  specs = &off_43054D0;
  pObject = 0;
  v4 = g_VProfCurrentProfile.m_enabled;
  v5 = v4 != 0;
  if ( v4 != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_bRegisteredWithMemoryPoolMgr )
    {
      v82 = operator new(0x28u);
      v83 = CMsgConnectedPlayers::descriptor();
      iPlayerIDb = google::protobuf::internal::ExtensionSet::GetInt32(
                     (v83->options_ + 8),
                     msgpool_hard_limit.number_,
                     msgpool_hard_limit.default_value_);
      v84 = CMsgConnectedPlayers::descriptor();
      v85 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v84->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v82, v85, iPlayerIDb);
      v82->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306650;
      GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool = v82;
      v86 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v86, v82);
      GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  pObject = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool);
  if ( v5 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  for ( i = 0; i < (*(*v1 + 96LL))(v1); ++i )
  {
    playerSteamID.m_steamid.m_comp = (*(*v1 + 104LL))(v1, i);
    v7 = (*(*v1 + 136LL))(v1, i);
    if ( IsPermanentLeaverState(*(v7 + 72)) )
      continue;
    iPlayerID = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, playerSteamID.m_steamid.m_unAll64Bits);
    if ( iPlayerID < 0 )
    {
      v34 = CSteamID::Render(&playerSteamID);
      Msg("Player %s in lobby not found in player resource?\n", v34);
    }
    else
    {
      Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, iPlayerID);
      v10 = Player;
      if ( Player != 0 )
      {
        if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
        {
          v11 = 0x7FFF;
          v12 = 0x7FFF;
        }
        else
        {
          v11 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
          v12 = v11;
        }
        v13 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
        LODWORD(leaverStateToUse._vptr_CProtoBufMsgBase) = v13;
        if ( (v13 + 2) > 1
          && (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) != 0
          && (v15 = &v14[v12 & 0x1FF]) != 0
          && v13 == v15->m_EHandle.m_Index
          && (m_pInstance = v15->m_pInstance, v15->m_pInstance != 0)
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          m_pEntity = m_pInstance->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          v118 = DOTAGameManager();
          HeroIDByName = CDOTAGameManager::GetHeroIDByName(v118, m_pAsString);
          if ( HeroIDByName <= 0 )
            HeroIDByName = 0;
          unHeroID = HeroIDByName;
        }
        else
        {
          unHeroID = 0;
        }
        v16 = *(v7 + 72);
        if ( v16 == 0 )
        {
          if ( unHeroID == *(v7 + 32) )
            continue;
          m_pParent = dota_spew_connected_players.m_pParent;
          flUrgency_0 = flUrgency;
LABEL_39:
          flUrgency = dota_update_connected_players_urgency_herochanged.m_pParent->m_Value.m_fValue;
          if ( flUrgency_0 > flUrgency )
          {
            v123 = 5;
            if ( m_pParent->m_Value.m_nValue != 0 )
              goto LABEL_52;
          }
          else
          {
            flUrgency = flUrgency_0;
            if ( m_pParent->m_Value.m_nValue == 0 )
              goto LABEL_41;
LABEL_52:
            v26 = *(v7 + 72);
            v27 = DOTALeaverStatus_t_descriptor();
            v29 = *google::protobuf::internal::NameOfEnum(v27, v26, v28);
            v30 = (*(v10->_vptr_IHandleEntity + 106))(v10);
            v31 = CSteamID::Render(&playerSteamID);
            v9 = Msg(
                   " Member[%d] Player[%d]: %s %s CONNECTED lobby state %s changed hero\n",
                   i,
                   iPlayerID,
                   v31,
                   v30,
                   v29).m128_u64[0];
            m_nValue = dota_spew_connected_players.m_pParent->m_Value.m_nValue;
LABEL_53:
            if ( m_nValue != 0 )
            {
              Msg("  Adding to connected_players\n", *&v9);
              v18 = pObject;
              v19 = *(pObject + 8);
              v20 = *(pObject + 9);
              if ( v19 < v20 )
              {
LABEL_55:
                elements = v18[1].elements_;
                v18[1].current_size_ = v19 + 1;
                v21 = elements[v19];
LABEL_45:
                v24.m_comp = playerSteamID.m_steamid.m_comp;
                *&v21[2].m_comp |= 3u;
                v21[3].m_comp = v24.m_comp;
                *&v21[5].m_comp = unHeroID;
                continue;
              }
LABEL_42:
              if ( v20 == v18[1].total_size_ )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v18 + 1, v20 + 1);
              v21 = operator new(0x30u);
              CMsgConnectedPlayers_Player::CMsgConnectedPlayers_Player(v21);
              current_size = v18[1].current_size_;
              v23 = v18[1].elements_;
              ++v18[1].allocated_size_;
              v18[1].current_size_ = current_size + 1;
              v23[current_size] = v21;
              goto LABEL_45;
            }
          }
LABEL_41:
          v18 = pObject;
          v19 = *(pObject + 8);
          v20 = *(pObject + 9);
          if ( v19 < v20 )
            goto LABEL_55;
          goto LABEL_42;
        }
        flUrgency_0 = dota_update_connected_players_urgency_connect.m_pParent->m_Value.m_fValue;
        if ( flUrgency > flUrgency_0 )
        {
          m_pParent = dota_spew_connected_players.m_pParent;
          v123 = 4;
          if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue == 0 )
            goto LABEL_49;
        }
        else
        {
          m_pParent = dota_spew_connected_players.m_pParent;
          flUrgency_0 = flUrgency;
          if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue == 0 )
          {
LABEL_49:
            if ( unHeroID != *(v7 + 32) )
              goto LABEL_39;
LABEL_81:
            m_nValue = m_pParent->m_Value.m_nValue;
            flUrgency = flUrgency_0;
            goto LABEL_53;
          }
        }
        v46 = DOTALeaverStatus_t_descriptor();
        flUrgencya = *google::protobuf::internal::NameOfEnum(v46, v16, v47);
        v48 = (*(v10->_vptr_IHandleEntity + 106))(v10);
        v49 = CSteamID::Render(&playerSteamID);
        v9 = Msg(
               " Member[%d] Player[%d]: %s %s CONNECTED lobby state %s connected\n",
               i,
               iPlayerID,
               v49,
               v48,
               flUrgencya).m128_u64[0];
        m_pParent = dota_spew_connected_players.m_pParent;
        if ( unHeroID != *(v7 + 32) )
          goto LABEL_39;
        goto LABEL_81;
      }
    }
    if ( *(v7 + 72) == 0 )
    {
      if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
      {
        v78 = DOTALeaverStatus_t_descriptor();
        v80 = *google::protobuf::internal::NameOfEnum(v78, 0, v79);
        v81 = CSteamID::Render(&playerSteamID);
        Msg(" Member[%d] Player[%d]: %s DISCONNECTED lobby state %s\n", i, iPlayerID, v81, v80);
      }
      LeaverState = CDOTA_PlayerResource::GetLeaverState(g_pDOTAPlayerResource, iPlayerID);
      CMsgLeaverState::CMsgLeaverState(&leaverStateToUse);
      if ( LeaverState != 0 )
      {
        CMsgLeaverState::CopyFrom(&leaverStateToUse, LeaverState);
      }
      else
      {
        Warning(
          "CDOTAGCServerSystem::CheckUpdateConnectedPlayers: Need to tell GC player is not longer connected, but we don't"
          " have a leaver state?\n");
        CDOTALobby::GetCurrentLeaverState(v1, &leaverStateToUse);
      }
      v36 = pObject;
      v37 = *(pObject + 14);
      v38 = *(pObject + 15);
      if ( v37 < v38 )
      {
        v94 = *(pObject + 6);
        *(pObject + 14) = v37 + 1;
        v39 = *(v94 + 8 * v37);
      }
      else
      {
        if ( v38 == *(pObject + 16) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(pObject + 2, v38 + 1);
        v39 = operator new(0x30u);
        CMsgConnectedPlayers_Player::CMsgConnectedPlayers_Player(v39);
        v40 = *(v36 + 14);
        v41 = *(v36 + 6);
        ++*(v36 + 15);
        *(v36 + 14) = v40 + 1;
        *(v41 + 8 * v40) = v39;
      }
      v42 = v39[4];
      v43.m_comp = playerSteamID.m_steamid.m_comp;
      *(v39 + 4) |= 5u;
      v39[3] = v43.m_unAll64Bits;
      if ( v42 == 0 )
      {
        v111 = operator new(0x28u);
        CMsgLeaverState::CMsgLeaverState(v111);
        v39[4] = v111;
        v42 = v111;
      }
      CMsgLeaverState::CopyFrom(v42, &leaverStateToUse);
      DisconnectionReason = CDOTA_PlayerResource::GetDisconnectionReason(g_pDOTAPlayerResource, iPlayerID);
      if ( DisconnectionReason != 0 )
      {
        *(v39 + 4) |= 8u;
        *(v39 + 11) = DisconnectionReason;
      }
      v45 = CDOTALobby::CalculateLeaverActionsForMember(v1, v7, &leaverStateToUse) & 0xFFFFFFF8;
      if ( BYTE3(leaverStateToUse.m_pProtoBufBody) == 0 || *(v1 + 448) != 0 )
      {
        if ( v45 != 0 )
        {
          if ( flUrgency > dota_update_connected_players_urgency_disconnect_consequences.m_pParent->m_Value.m_fValue )
          {
            flUrgency = dota_update_connected_players_urgency_disconnect_consequences.m_pParent->m_Value.m_fValue;
            v123 = 6;
          }
        }
        else if ( flUrgency > dota_update_connected_players_urgency_disconnect_noconsequences.m_pParent->m_Value.m_fValue )
        {
          flUrgency = dota_update_connected_players_urgency_disconnect_noconsequences.m_pParent->m_Value.m_fValue;
          v123 = 7;
        }
      }
      else if ( flUrgency > dota_update_connected_players_urgency_mass_disconnect.m_pParent->m_Value.m_fValue )
      {
        flUrgency = dota_update_connected_players_urgency_mass_disconnect.m_pParent->m_Value.m_fValue;
        v123 = 11;
      }
      CMsgLeaverState::~CMsgLeaverState(&leaverStateToUse);
    }
  }
  v50 = g_pGameRules;
  v51 = pObject;
  v52 = *&g_pGameRules[6].m_szQuestName[28];
  *(pObject + 4) |= 4u;
  *(v51 + 18) = v52;
  v53 = *&v50[6].m_szQuestName[28];
  if ( *(v1 + 200) != v53 )
  {
    if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
    {
      v87 = DOTA_GameState_descriptor();
      v89 = *google::protobuf::internal::NameOfEnum(v87, v53, v88);
      v90 = *(v1 + 200);
      v91 = DOTA_GameState_descriptor();
      v93 = google::protobuf::internal::NameOfEnum(v91, v90, v92);
      Msg(" GameState changed from %s to %s\n", *v93, v89);
    }
    if ( flUrgency > dota_update_connected_players_urgency_gamestate_timeout.m_pParent->m_Value.m_fValue )
    {
      flUrgency = dota_update_connected_players_urgency_gamestate_timeout.m_pParent->m_Value.m_fValue;
      v123 = 10;
    }
  }
  v54 = pObject;
  *(pObject + 4) |= 8u;
  *(v54 + 76) = bFirstBloodHappened;
  v55 = *(v1 + 351);
  if ( bFirstBloodHappened != v55 )
  {
    if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
      Msg(" FirstBloodHappened changed from %d to %d\n", v55, bFirstBloodHappened);
    if ( flUrgency > dota_update_connected_players_urgency_gamestate_timeout.m_pParent->m_Value.m_fValue )
    {
      flUrgency = dota_update_connected_players_urgency_gamestate_timeout.m_pParent->m_Value.m_fValue;
      v123 = 10;
    }
  }
  if ( *(this + 1752) != 0 && *(v1 + 448) == 0 )
  {
    v56 = pObject;
    v57 = *(pObject + 10);
    *(pObject + 4) |= 0x20u;
    if ( v57 == 0 )
    {
      v112 = operator new(0x38u);
      CMsgPoorNetworkConditions::CMsgPoorNetworkConditions(v112);
      *(v56 + 10) = v112;
      v57 = v112;
    }
    CMsgPoorNetworkConditions::CopyFrom(v57, (this + 1760));
    if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
      Msg(" Lobby doesn't know about poor network conditions\n");
    if ( flUrgency > dota_update_connected_players_urgency_mass_disconnect.m_pParent->m_Value.m_fValue )
    {
      flUrgency = dota_update_connected_players_urgency_mass_disconnect.m_pParent->m_Value.m_fValue;
      v123 = 11;
    }
  }
  LODWORD(leaverStateToUse._vptr_CProtoBufMsgBase) = 0;
  CDOTAGCServerSystem::GenerateBuildingState(this, &leaverStateToUse);
  TeamNetWorth = CDOTA_PlayerResource::GetTeamNetWorth(g_pDOTAPlayerResource, 2);
  v59 = CDOTA_PlayerResource::GetTeamNetWorth(g_pDOTAPlayerResource, 3);
  v60 = pObject;
  *(pObject + 4) |= 0x200u;
  *(v60 + 25) = TeamNetWorth - v59;
  v61 = pObject;
  vptr_CProtoBufMsgBase = leaverStateToUse._vptr_CProtoBufMsgBase;
  *(pObject + 4) |= 0x400u;
  *(v61 + 26) = vptr_CProtoBufMsgBase;
  v63 = *(this + 458);
  if ( vptr_CProtoBufMsgBase == v63 )
  {
    unHeroIDa = flUrgency;
  }
  else
  {
    if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
      Msg(" Building State changed from %u to %u\n", v63, vptr_CProtoBufMsgBase);
    unHeroIDa = dota_update_connected_players_urgency_building_state.m_pParent->m_Value.m_fValue;
    if ( flUrgency <= unHeroIDa )
      unHeroIDa = flUrgency;
    else
      v123 = 14;
  }
  DeathsForTeam = CDOTA_PlayerResource::GetDeathsForTeam(g_pDOTAPlayerResource, 3);
  v65 = pObject;
  *(pObject + 4) |= 0x80u;
  *(v65 + 23) = DeathsForTeam;
  v66 = *(this + 459);
  if ( DeathsForTeam == v66 )
    goto LABEL_124;
  if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
    Msg(" Radiant Kills State changed from %d to %d\n", v66, DeathsForTeam);
  iPlayerIDa = dota_update_connected_players_urgency_kills.m_pParent->m_Value.m_fValue;
  if ( unHeroIDa <= iPlayerIDa )
LABEL_124:
    iPlayerIDa = unHeroIDa;
  else
    v123 = 13;
  v67 = CDOTA_PlayerResource::GetDeathsForTeam(g_pDOTAPlayerResource, 2);
  v68 = pObject;
  *(pObject + 4) |= 0x100u;
  *(v68 + 24) = v67;
  v69 = *(this + 460);
  if ( v67 != v69 )
  {
    if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
      Msg(" Dire Kills State changed from %d to %d\n", v69, v67);
    if ( iPlayerIDa > dota_update_connected_players_urgency_kills.m_pParent->m_Value.m_fValue )
    {
      iPlayerIDa = dota_update_connected_players_urgency_kills.m_pParent->m_Value.m_fValue;
      v123 = 13;
    }
  }
  if ( flLastMessageSendAge < iPlayerIDa )
  {
    v75 = pObject;
    specs = &off_43054D0;
    v77 = 0;
    if ( pObject != 0 )
      goto LABEL_119;
  }
  else
  {
    v70 = pObject;
    *(pObject + 4) |= 0x40u;
    *(v70 + 22) = v123;
    if ( dota_spew_connected_players.m_pParent->m_Value.m_nValue != 0 )
    {
      v71 = CMsgConnectedPlayers_SendReason_descriptor();
      v73 = google::protobuf::internal::NameOfEnum(v71, v123, v72);
      Msg("Sending a lobby update for reason %s\n", *v73);
    }
    v74 = GCClientSystem();
    CGCClientSystem::BSendMessage(v74, &specs);
    v75 = pObject;
    *(this + 213) = now;
    *(this + 430) = *(v75 + 18);
    v76 = *(v75 + 76);
    *(this + 459) = DeathsForTeam;
    *(this + 460) = v67;
    *(this + 1724) = v76;
    *(this + 458) = leaverStateToUse._vptr_CProtoBufMsgBase;
    specs = &off_43054D0;
    v77 = 1;
LABEL_119:
    iPlayerIDc = v77;
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool, v75);
    v77 = iPlayerIDc;
    pObject = 0;
  }
  iPlayerIDd = v77;
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&specs);
  return iPlayerIDd;
}


// CDOTAGCServerSystem::GenerateBuildingState  (line 5382, @0x0000000002994ee0, libserver.so)  // inlines: GetLevel
// calls: CDOTAGamerules::GetNumTeamTowers, CDOTAGamerules::GetTeamTower, CDOTAGamerules::GetCreepUpgradeState
// callers: CDOTAGCServerSystem::CheckUpdateConnectedPlayers
// globals: ._1061, ._1062, CSWTCH.12313
void __fastcall CDOTAGCServerSystem::GenerateBuildingState(CDOTAGCServerSystem *const this, uint32 *pBuildingState)
{
  int v2; // r15d
  int NumTeamTowers; // r12d
  char v4; // al
  __int32 v5; // r13d
  char v6; // al
  int v7; // ebx
  CDOTA_BaseNPC_Tower *TeamTower; // rax
  CDOTA_BaseNPC_Tower *v9; // r13
  int m_Value; // eax
  __int64 v11; // r15
  int v12; // edx
  uint32 v13; // eax
  int v14; // ebx
  int v15; // r13d
  CDOTA_BaseNPC_Tower *v16; // rax
  int v17; // r15d
  int v18; // r13d
  int v19; // ebx
  int v20; // r13d
  bool CreepUpgradeState; // al
  bool v22; // al
  uint32 v23; // r15d
  char v24; // [rsp+Ch] [rbp-64h]
  int *__for_begin; // [rsp+10h] [rbp-60h]
  char nShift; // [rsp+18h] [rbp-58h]
  char v27; // [rsp+1Ch] [rbp-54h]
  int iTeam; // [rsp+28h] [rbp-48h]
  char nShift_0; // [rsp+2Ch] [rbp-44h]
  std::initializer_list<DOTA_LANE>::const_iterator __for_begin_0; // [rsp+30h] [rbp-40h]
  int nLaneTowerStanding; // [rsp+38h] [rbp-38h]
  DOTA_LANE iLane; // [rsp+3Ch] [rbp-34h]
  DOTA_LANE iLanea; // [rsp+3Ch] [rbp-34h]

  __for_begin = &_1061;
  do
  {
    v2 = *__for_begin;
    NumTeamTowers = CDOTAGamerules::GetNumTeamTowers(g_pGameRules, *__for_begin);
    v4 = 0;
    iTeam = v2;
    if ( v2 != 2 )
      v4 = 16;
    nShift = v4;
    v24 = v4 + 6;
    v27 = v4 + 3;
    __for_begin_0 = &_1062;
    do
    {
      v5 = *__for_begin_0;
      nShift_0 = v27;
      if ( *__for_begin_0 != DOTA_LANE::DOTA_LANE_MIDDLE )
      {
        v6 = nShift;
        if ( v5 == 3 )
          v6 = v24;
        nShift_0 = v6;
      }
      v7 = 0;
      nLaneTowerStanding = 4;
      if ( NumTeamTowers <= 0 )
        goto LABEL_31;
      iLane = *__for_begin_0;
      do
      {
        while ( 1 )
        {
          TeamTower = CDOTAGamerules::GetTeamTower(g_pGameRules, iTeam, v7);
          v9 = TeamTower;
          if ( TeamTower != 0 && (*(TeamTower->_vptr_IHandleEntity + 408))(TeamTower) != 0 && iLane == v9->m_Lane )
            break;
          if ( ++v7 == NumTeamTowers )
            goto LABEL_18;
        }
        m_Value = v9->m_iCurrentLevel.m_Value;
        if ( nLaneTowerStanding <= m_Value )
          m_Value = nLaneTowerStanding;
        ++v7;
        nLaneTowerStanding = m_Value;
      }
      while ( v7 != NumTeamTowers );
LABEL_18:
      v5 = iLane;
      v11 = (nLaneTowerStanding - 1);
      if ( v11 > 2 || (v12 = CSWTCH_12313[v11]) == 0 )
      {
LABEL_31:
        v17 = 0;
        if ( iTeam == 2 )
          v17 = 32;
        if ( v5 == 1 )
        {
          v19 = 32;
          v18 = 16;
        }
        else if ( v5 == 2 )
        {
          v19 = 8;
          v18 = 4;
        }
        else
        {
          v18 = v5 == 3;
          v19 = 2 * v18;
        }
        v20 = v17 | v18;
        CreepUpgradeState = CDOTAGamerules::GetCreepUpgradeState(g_pGameRules, v19 | v20);
        v12 = 7;
        if ( !CreepUpgradeState )
        {
          v22 = CDOTAGamerules::GetCreepUpgradeState(g_pGameRules, v20);
          v12 = 5;
          if ( !v22 )
            v12 = !CDOTAGamerules::GetCreepUpgradeState(g_pGameRules, v17 | v19) ? 4 : 6;
        }
      }
      ++__for_begin_0;
      v13 = *pBuildingState | (v12 << nShift_0);
      *pBuildingState = v13;
    }
    while ( __for_begin_0 != &_1061 );
    if ( NumTeamTowers <= 0 )
    {
      v23 = v13;
      goto LABEL_41;
    }
    v14 = -1;
    v15 = 0;
    iLanea = -1;
    do
    {
      while ( 1 )
      {
        v16 = CDOTAGamerules::GetTeamTower(g_pGameRules, iTeam, v15);
        if ( v16 != 0 && v16->m_iCurrentLevel.m_Value == 4 )
        {
          if ( iLanea != -1 )
            break;
          iLanea = (*(v16->_vptr_IHandleEntity + 408))(v16);
        }
        if ( ++v15 == NumTeamTowers )
          goto LABEL_28;
      }
      ++v15;
      v14 = (*(v16->_vptr_IHandleEntity + 408))(v16);
    }
    while ( v15 != NumTeamTowers );
LABEL_28:
    if ( v14 == 1 )
    {
      if ( iLanea != DOTA_LANE::DOTA_LANE_TOP )
        *pBuildingState |= 0x400u;
    }
    else
    {
      if ( iLanea == DOTA_LANE::DOTA_LANE_TOP )
      {
        *pBuildingState |= 0x200u;
        goto LABEL_42;
      }
      v23 = *pBuildingState;
LABEL_41:
      *pBuildingState = v23 | 0x600;
    }
LABEL_42:
    ++__for_begin;
  }
  while ( __for_begin != &unk_341CFC4 );
}


// CDOTAGCServerSystem::SendScoreboardUpdate  (line 5507, @0x00000000029955e0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility>::TypeHandler>, AllocProto, CProtoBufMsg, CVProfScope, CopyArray, DOTAGameRules, Element, FreeProto, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInstance, GetInt, IndexToIdentity, IsEnabled, IsTrained, IsValid, Lock, LookupEntity, MoveArray, New, Reserve, ToDOTABaseNPC, ToDOTABaseNPCHero, Unlock, _M_data, add_abilities, add_hero_bans, add_hero_picks, add_players, assign, c_str, length, memcpy, mutable_team_bad, mutable_team_good, operator CBaseEntity*, operator CEntityInstance*, operator(), operator[], set_ability_id, set_ability_level, set_account_id, set_assists, set_barracks_state, set_deaths, set_denies, set_duration, set_gold, set_gold_per_min, set_has_ability_id, set_has_ability_level, set_has_account_id, set_has_assists, set_has_barracks_state, set_has_deaths, set_has_denies, set_has_duration, set_has_gold, set_has_gold_per_min, set_has_hero_id, set_has_hero_name, set_has_hltv_delay, set_has_item0, set_has_item1, set_has_item2, set_has_item3, set_has_item4, set_has_item5, set_has_kills, set_has_last_hits, set_has_league_id, set_has_level, set_has_match_id, set_has_net_worth, set_has_player_name, set_has_player_slot, set_has_position_x, set_has_position_y, set_has_respawn_timer, set_has_roshan_respawn_timer, set_has_score, set_has_team_bad, set_has_team_good, set_has_tournament_game_id, set_has_tournament_id, set_has_tower_state, set_has_ultimate_cooldown, set_has_ultimate_state, set_has_xp_per_min, set_hero_id, set_hero_name, set_hltv_delay, set_item0, set_item1, set_item2, set_item3, set_item4, set_item5, set_kills, set_last_hits, set_league_id, set_level, set_match_id, set_net_worth, set_player_name, set_player_slot, set_position_x, set_position_y, set_respawn_timer, set_roshan_respawn_timer, set_score, set_tournament_game_id, set_tournament_id, set_tower_state, set_ultimate_cooldown, set_ultimate_state, set_xp_per_min, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgDOTALiveScoreboardUpdate::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CDOTAGamerules::GetDOTATime (60 total)
// callers: CDOTAGCServerSystem::CheckUpdateConnectedPlayers
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "tv_delay"
// globals: GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool, `guard variable for'CDOTAGCServerSystem::SendScoreboardUpdate(CDOTALobby const*)::tv_delay, CEntityHandle::gm_pEntityList, CDOTAGCServerSystem::SendScoreboardUpdate(CDOTALobby const*)::tv_delay
void __fastcall CDOTAGCServerSystem::SendScoreboardUpdate(CDOTAGCServerSystem *const this, const CDOTALobby *pLobby)
{
  int m_enabled; // edx
  bool v3; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  google::protobuf::Message *m_pProtoBufBody; // r13
  CMsgDOTALiveScoreboardUpdate_Team *v11; // rbx
  CMsgDOTALiveScoreboardUpdate *v12; // r13
  CMsgDOTALiveScoreboardUpdate_Team *v13; // r14
  CMsgDOTALiveScoreboardUpdate *v14; // rax
  int v15; // edx
  int v16; // edx
  CMsgDOTALiveScoreboardUpdate *v17; // rax
  float DOTATime; // xmm0_4
  CMsgDOTALiveScoreboardUpdate *v19; // rax
  CMsgDOTALiveScoreboardUpdate *v20; // rax
  int v21; // edx
  CMsgDOTALiveScoreboardUpdate *v22; // rax
  __int64 v23; // rdx
  CDOTA_RoshanSpawner *RoshanSpawner; // rax
  float RoshanRespawnTimeSeconds; // xmm0_4
  CMsgDOTALiveScoreboardUpdate *v26; // rax
  int m_nValue; // edx
  CMsgDOTALiveScoreboardUpdate *v28; // rax
  CGameRules *v29; // r15
  CDOTAGamerules *v30; // rdi
  uint32 TowerStatus; // eax
  uint32 BarracksStatus; // eax
  __int64 v33; // r12
  int v34; // ebx
  _DWORD *v35; // rax
  int v36; // r13d
  __int64 total_size; // rdx
  void *v38; // rax
  int NthPlayerIDOnTeam; // r12d
  lambda *v40; // rax
  _DWORD *v41; // rax
  int nDeaths; // edx
  _DWORD *v43; // rax
  int v44; // edx
  CGCClientSystem *v45; // rax
  __int64 current_size; // rdx
  void **v47; // rax
  __int64 v48; // rax
  int allocated_size; // edx
  int *v50; // rbx
  __int64 v51; // rax
  void **v52; // rdx
  AccountID_t SteamAccountID; // r13d
  const CDOTALobbyMember *FullMemberDetails; // rax
  const char *v55; // r14
  size_t v56; // rax
  const char *SelectedHeroName; // rax
  const char *v58; // r14
  size_t v59; // rax
  int Kills; // eax
  int Deaths; // eax
  int Assists; // eax
  int LastHits; // eax
  int Denies; // eax
  int v65; // edx
  CDOTA_PlayerResource *v66; // rdi
  int NetWorth; // eax
  int RespawnSeconds; // eax
  int TotalEarnedGold; // eax
  int TotalEarnedXP; // eax
  CEntityIdentity *v71; // rdx
  CEntityIdentity *v72; // rdx
  int v73; // eax
  int v74; // ecx
  int pfn; // edx
  int v76; // xmm0_4
  int v77; // xmm0_4
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_UnitInventory *v79; // r12
  CDOTA_Item *ItemInSlot; // rax
  int ItemID; // eax
  CDOTA_Item *v82; // rax
  int v83; // eax
  CDOTA_Item *v84; // rax
  int v85; // eax
  CDOTA_Item *v86; // rax
  int v87; // eax
  CDOTA_Item *v88; // rax
  int v89; // eax
  CDOTA_Item *v90; // rax
  int v91; // eax
  int v92; // r13d
  CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility *v93; // r14
  __int64 v94; // rax
  __int64 v95; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // edx
  int v98; // eax
  int m_Value; // edx
  CDOTABaseAbility *v100; // r12
  CDOTABaseAbility *AbilityByIndex; // rax
  __int64 v102; // rax
  int v103; // esi
  __int64 v104; // rdx
  int v105; // eax
  int v106; // edx
  void *v107; // r14
  int v108; // eax
  int v109; // edx
  void **elements; // r14
  void **v111; // rdx
  float CooldownTimeRemaining; // xmm0_4
  char *v113; // [rsp+10h] [rbp-100h]
  float flGameTimeMinutes; // [rsp+3Ch] [rbp-D4h]
  lambda *v116; // [rsp+48h] [rbp-C8h]
  CDOTABaseAbility *pUltimate; // [rsp+50h] [rbp-C0h]
  CDOTA_BaseNPC *m_pInstance; // [rsp+58h] [rbp-B8h]
  google::protobuf::internal::RepeatedPtrFieldBase *pTeam; // [rsp+60h] [rbp-B0h]
  int iPlayer; // [rsp+68h] [rbp-A8h]
  int nTeam; // [rsp+6Ch] [rbp-A4h]
  int v122[4]; // [rsp+70h] [rbp-A0h] BYREF
  GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate> msg; // [rsp+80h] [rbp-90h] BYREF
  lambda rgTeams[2]; // [rsp+B0h] [rbp-60h] BYREF
  char v125; // [rsp+E0h] [rbp-30h] BYREF

  if ( pLobby == 0 || g_pGameRules == 0 )
    return;
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1B91u);
  msg._vptr_CProtoBufMsgBase = &off_4305510;
  msg.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgDOTALiveScoreboardUpdate::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgDOTALiveScoreboardUpdate::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306690;
      GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool);
  msg.m_pProtoBufBody = m_pProtoBufBody;
  if ( v3 )
  {
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    m_pProtoBufBody = msg.m_pProtoBufBody;
  }
  v11 = *(m_pProtoBufBody + 5);
  *(m_pProtoBufBody + 4) |= 0x10u;
  memset(rgTeams, 0, sizeof(rgTeams));
  rgTeams[0].nTeamID = 2;
  rgTeams[1].nTeamID = 3;
  if ( v11 == 0 )
  {
    v11 = operator new(0x60u);
    CMsgDOTALiveScoreboardUpdate_Team::CMsgDOTALiveScoreboardUpdate_Team(v11);
    *(m_pProtoBufBody + 5) = v11;
  }
  v12 = msg.m_pProtoBufBody;
  rgTeams[0].pTeam = v11;
  v13 = *(msg.m_pProtoBufBody + 6);
  *(msg.m_pProtoBufBody + 4) |= 0x20u;
  if ( v13 == 0 )
  {
    v13 = operator new(0x60u);
    CMsgDOTALiveScoreboardUpdate_Team::CMsgDOTALiveScoreboardUpdate_Team(v13);
    *(v12 + 6) = v13;
  }
  rgTeams[1].pTeam = v13;
  v14 = msg.m_pProtoBufBody;
  v15 = *(pLobby + 47);
  *(msg.m_pProtoBufBody + 4) |= 1u;
  *(v14 + 6) = v15;
  v16 = *(pLobby + 48);
  v17 = msg.m_pProtoBufBody;
  *(msg.m_pProtoBufBody + 4) |= 2u;
  *(v17 + 7) = v16;
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  v19 = msg.m_pProtoBufBody;
  flGameTimeMinutes = DOTATime / 60.0;
  *(msg.m_pProtoBufBody + 4) |= 4u;
  *(v19 + 8) = DOTATime;
  v20 = msg.m_pProtoBufBody;
  v21 = *(pLobby + 66);
  *(msg.m_pProtoBufBody + 4) |= 0x80u;
  *(v20 + 15) = v21;
  v22 = msg.m_pProtoBufBody;
  v23 = *(pLobby + 27);
  *(msg.m_pProtoBufBody + 4) |= 0x100u;
  *(v22 + 8) = v23;
  RoshanSpawner = GetRoshanSpawner();
  if ( RoshanSpawner != 0 )
  {
    RoshanRespawnTimeSeconds = CDOTA_RoshanSpawner::GetRoshanRespawnTimeSeconds(RoshanSpawner);
    v26 = msg.m_pProtoBufBody;
    *(msg.m_pProtoBufBody + 4) |= 0x40u;
    *(v26 + 14) = RoshanRespawnTimeSeconds;
  }
  if ( `guard variable for'CDOTAGCServerSystem::SendScoreboardUpdate(CDOTALobby const*)::tv_delay == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGCServerSystem::SendScoreboardUpdate(CDOTALobby const*)::tv_delay) != 0 )
  {
    ConVarRef::ConVarRef(&CDOTAGCServerSystem::SendScoreboardUpdate(CDOTALobby const*)::tv_delay, "tv_delay");
    __cxa_guard_release(&`guard variable for'CDOTAGCServerSystem::SendScoreboardUpdate(CDOTALobby const*)::tv_delay);
  }
  pTeam = v11;
  nTeam = 2;
  m_nValue = CDOTAGCServerSystem::SendScoreboardUpdate(CDOTALobby const*)::tv_delay.m_pConVarState->m_Value.m_nValue;
  v28 = msg.m_pProtoBufBody;
  *(msg.m_pProtoBufBody + 4) |= 8u;
  *(v28 + 9) = m_nValue;
  v29 = g_pGameRules;
  v30 = g_pGameRules;
  v113 = &g_pGameRules[52].m_szQuestName[72];
  v116 = &rgTeams[1];
  while ( 2 )
  {
    TowerStatus = CDOTAGamerules::GetTowerStatus(v30, nTeam);
    pTeam->total_size_ |= 4u;
    HIDWORD(pTeam[2].elements_) = TowerStatus;
    BarracksStatus = CDOTAGamerules::GetBarracksStatus(g_pGameRules, nTeam);
    pTeam->total_size_ |= 8u;
    pTeam[3].total_size_ = BarracksStatus;
    if ( v113 != 0 && *&v29[52].m_szQuestName[72] > 0 )
    {
      v33 = 0;
      v34 = 0;
      do
      {
        while ( 1 )
        {
          v35 = (*&v29[52].m_szQuestName[80] + v33);
          if ( v35[2] == nTeam )
            break;
LABEL_22:
          ++v34;
          v33 += 12;
          if ( *&v29[52].m_szQuestName[72] <= v34 )
            goto LABEL_28;
        }
        v36 = v35[1];
        if ( *v35 != 0 )
        {
          current_size = pTeam[3].current_size_;
          if ( current_size == pTeam[3].allocated_size_ )
          {
            v108 = current_size + 1;
            v109 = 2 * current_size;
            if ( v108 >= v109 )
              v109 = v108;
            elements = pTeam[3].elements_;
            if ( v109 < 4 )
              v109 = 4;
            pTeam[3].allocated_size_ = v109;
            v47 = operator new[](4LL * v109);
            pTeam[3].elements_ = v47;
            if ( elements != 0 )
            {
              memcpy(v47, elements, 4LL * pTeam[3].current_size_);
              operator delete[](elements);
              v47 = pTeam[3].elements_;
            }
            current_size = pTeam[3].current_size_;
          }
          else
          {
            v47 = pTeam[3].elements_;
          }
          pTeam[3].current_size_ = current_size + 1;
          *(v47 + current_size) = v36;
          goto LABEL_22;
        }
        total_size = pTeam[2].total_size_;
        if ( total_size == *(&pTeam[2].total_size_ + 1) )
        {
          v105 = total_size + 1;
          v106 = 2 * total_size;
          if ( v105 >= v106 )
            v106 = v105;
          v107 = *&pTeam[2].current_size_;
          if ( v106 < 4 )
            v106 = 4;
          *(&pTeam[2].total_size_ + 1) = v106;
          v38 = operator new[](4LL * v106);
          *&pTeam[2].current_size_ = v38;
          if ( v107 != 0 )
          {
            memcpy(v38, v107, 4LL * pTeam[2].total_size_);
            operator delete[](v107);
            v38 = *&pTeam[2].current_size_;
          }
          total_size = pTeam[2].total_size_;
        }
        else
        {
          v38 = *&pTeam[2].current_size_;
        }
        ++v34;
        v33 += 12;
        pTeam[2].total_size_ = total_size + 1;
        *(v38 + total_size) = v36;
      }
      while ( *&v29[52].m_szQuestName[72] > v34 );
    }
LABEL_28:
    for ( iPlayer = 1; iPlayer != 6; ++iPlayer )
    {
      NthPlayerIDOnTeam = CDOTA_PlayerResource::GetNthPlayerIDOnTeam(g_pDOTAPlayerResource, nTeam, iPlayer);
      if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, NthPlayerIDOnTeam) )
      {
        v48 = pTeam[1].current_size_;
        allocated_size = pTeam[1].allocated_size_;
        if ( v48 < allocated_size )
        {
          v111 = pTeam[1].elements_;
          pTeam[1].current_size_ = v48 + 1;
          v50 = v111[v48];
        }
        else
        {
          if ( allocated_size == pTeam[1].total_size_ )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(pTeam + 1, allocated_size + 1);
          v50 = operator new(0xA0u);
          CMsgDOTALiveScoreboardUpdate_Team_Player::CMsgDOTALiveScoreboardUpdate_Team_Player(v50);
          v51 = pTeam[1].current_size_;
          v52 = pTeam[1].elements_;
          ++pTeam[1].allocated_size_;
          pTeam[1].current_size_ = v51 + 1;
          v52[v51] = v50;
        }
        SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        FullMemberDetails = CDOTALobby::FindFullMemberDetails(pLobby, SteamAccountID);
        if ( FullMemberDetails != 0 )
        {
          v55 = **(FullMemberDetails + 5);
          v50[4] |= 2u;
          v56 = strlen(v55);
          std::string::assign(*(v50 + 3), v55, v56);
        }
        v50[4] |= 1u;
        v50[8] = iPlayer;
        SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v50[4] |= 4u;
        v58 = SelectedHeroName;
        v59 = strlen(SelectedHeroName);
        std::string::assign(*(v50 + 5), v58, v59);
        Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v50[4] |= 0x10u;
        v50[12] = Kills;
        Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v50[4] |= 0x20u;
        v50[13] = Deaths;
        Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v50[4] |= 0x40u;
        v50[14] = Assists;
        LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v50[4] |= 0x80u;
        v50[15] = LastHits;
        Denies = CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v50[4] |= 0x100u;
        v50[16] = Denies;
        v50[17] = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v65 = v50[4];
        v50[30] = SteamAccountID;
        v66 = g_pDOTAPlayerResource;
        v50[4] = v65 | 0x400200;
        NetWorth = CDOTA_PlayerResource::GetNetWorth(v66, NthPlayerIDOnTeam);
        v50[4] |= 0x2000000u;
        v50[33] = NetWorth;
        RespawnSeconds = CDOTA_PlayerResource::GetRespawnSeconds(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        v50[4] |= 0x200000u;
        if ( RespawnSeconds < 0 )
          RespawnSeconds = 0;
        v50[29] = RespawnSeconds;
        v116[-1].nDeaths += CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        if ( flGameTimeMinutes > 0.25 )
        {
          TotalEarnedGold = CDOTA_PlayerResource::GetTotalEarnedGold(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
          v50[4] |= 0x800u;
          *(v50 + 19) = TotalEarnedGold / flGameTimeMinutes;
          TotalEarnedXP = CDOTA_PlayerResource::GetTotalEarnedXP(g_pDOTAPlayerResource, NthPlayerIDOnTeam);
          v50[4] |= 0x1000u;
          *(v50 + 20) = TotalEarnedXP / flGameTimeMinutes;
        }
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v122, g_pDOTAPlayerResource, NthPlayerIDOnTeam);
        if ( (v122[0] + 2) > 1 )
        {
          v71 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v122[0]) >> 9) & 0x3F];
          if ( v71 != 0 )
          {
            v72 = &v71[v122[0] & 0x1FF];
            if ( v72 != 0 && v122[0] == v72->m_EHandle.m_Index )
            {
              m_pInstance = v72->m_pInstance;
              if ( v72->m_pInstance != 0
                && BYTE3(v72->m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance->m_iUnitType & 1) != 0 )
              {
                v73 = v50[4];
                v50[18] = m_pInstance->m_iCurrentLevel.m_Value;
                v74 = v73;
                BYTE1(v74) = BYTE1(v73) | 4;
                v50[4] = v74;
                pfn = m_pInstance[1].m_pfnMoveDone.__pfn;
                v50[4] = v73 | 0x408;
                v50[9] = pfn;
                v76 = *(*(m_pInstance->_vptr_INextBotEventResponder + 73))(&m_pInstance->INextBot);
                v50[4] |= 0x800000u;
                v50[31] = v76;
                v77 = *((*(m_pInstance->_vptr_INextBotEventResponder + 73))(&m_pInstance->INextBot) + 4);
                v50[4] |= 0x1000000u;
                v50[32] = v77;
                Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
                v79 = Inventory;
                if ( Inventory != 0 )
                {
                  ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, 0);
                  if ( ItemInSlot != 0 )
                  {
                    ItemID = CDOTA_Item::GetItemID(ItemInSlot);
                    v50[4] |= 0x8000u;
                    v50[23] = ItemID;
                  }
                  v82 = CDOTA_UnitInventory::GetItemInSlot(v79, 1);
                  if ( v82 != 0 )
                  {
                    v83 = CDOTA_Item::GetItemID(v82);
                    v50[4] |= 0x10000u;
                    v50[24] = v83;
                  }
                  v84 = CDOTA_UnitInventory::GetItemInSlot(v79, 2);
                  if ( v84 != 0 )
                  {
                    v85 = CDOTA_Item::GetItemID(v84);
                    v50[4] |= 0x20000u;
                    v50[25] = v85;
                  }
                  v86 = CDOTA_UnitInventory::GetItemInSlot(v79, 3);
                  if ( v86 != 0 )
                  {
                    v87 = CDOTA_Item::GetItemID(v86);
                    v50[4] |= 0x40000u;
                    v50[26] = v87;
                  }
                  v88 = CDOTA_UnitInventory::GetItemInSlot(v79, 4);
                  if ( v88 != 0 )
                  {
                    v89 = CDOTA_Item::GetItemID(v88);
                    v50[4] |= 0x80000u;
                    v50[27] = v89;
                  }
                  v90 = CDOTA_UnitInventory::GetItemInSlot(v79, 5);
                  if ( v90 != 0 )
                  {
                    v91 = CDOTA_Item::GetItemID(v90);
                    v50[4] |= 0x100000u;
                    v50[28] = v91;
                  }
                }
                v92 = 0;
                pUltimate = 0;
                while ( 1 )
                {
                  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v92);
                  v100 = AbilityByIndex;
                  if ( AbilityByIndex == 0 )
                    goto LABEL_77;
                  if ( AbilityByIndex->m_pAbilityData != 0
                    || (CDOTABaseAbility::LoadAbilityData(AbilityByIndex, 0), v100->m_pAbilityData != 0) )
                  {
                    if ( CDOTABaseAbility::GetEffectiveLevel(v100) >= 0 )
                    {
                      v102 = v50[36];
                      v103 = v50[37];
                      if ( v102 >= v103 )
                      {
                        if ( v103 == v50[38] )
                          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v50 + 34), v103 + 1);
                        v93 = operator new(0x20u);
                        CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility::CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility(v93);
                        v94 = v50[36];
                        v95 = *(v50 + 17);
                        ++v50[37];
                        v50[36] = v94 + 1;
                        *(v95 + 8 * v94) = v93;
                        m_pAbilityData = v100->m_pAbilityData;
                        if ( m_pAbilityData == 0 )
                        {
LABEL_83:
                          CDOTABaseAbility::LoadAbilityData(v100, 0);
                          m_pAbilityData = v100->m_pAbilityData;
                        }
                      }
                      else
                      {
                        v104 = *(v50 + 17);
                        v50[36] = v102 + 1;
                        v93 = *(v104 + 8 * v102);
                        m_pAbilityData = v100->m_pAbilityData;
                        if ( m_pAbilityData == 0 )
                          goto LABEL_83;
                      }
                      m_iAbilityID = m_pAbilityData->m_iAbilityID;
                      v98 = *(v93 + 4);
                      *(v93 + 6) = m_iAbilityID;
                      *(v93 + 4) = v98 | 1;
                      m_Value = v100->m_iLevel.m_Value;
                      *(v93 + 4) = v98 | 3;
                      *(v93 + 7) = m_Value;
                      if ( (*(v100->_vptr_IHandleEntity + 214))(v100) != 1 )
                        v100 = pUltimate;
                      pUltimate = v100;
                    }
LABEL_77:
                    if ( ++v92 == 24 )
                      goto LABEL_105;
                  }
                  else if ( ++v92 == 24 )
                  {
LABEL_105:
                    if ( pUltimate != 0 )
                    {
                      if ( (*(pUltimate->_vptr_IHandleEntity + 245))(pUltimate) != 0 )
                      {
                        if ( (*(pUltimate->_vptr_IHandleEntity + 274))(pUltimate, 0xFFFFFFFFLL) <= m_pInstance->m_flMana.m_Value )
                        {
                          v50[4] |= 0x2000u;
                          v50[21] = 3;
                        }
                        else
                        {
                          v50[4] |= 0x2000u;
                          v50[21] = 2;
                        }
                      }
                      else
                      {
                        v50[4] |= 0x2000u;
                        v50[21] = 1;
                        CooldownTimeRemaining = CDOTABaseAbility::GetCooldownTimeRemaining(pUltimate);
                        v50[4] |= 0x4000u;
                        *(v50 + 22) = CooldownTimeRemaining;
                      }
                    }
                    else
                    {
                      v50[4] |= 0x2000u;
                      v50[21] = 0;
                    }
                    break;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v116 != &v125 )
    {
      v40 = v116++;
      nTeam = v40->nTeamID;
      pTeam = v40->pTeam;
      v30 = g_pGameRules;
      continue;
    }
    break;
  }
  v41 = rgTeams[0].pTeam;
  nDeaths = rgTeams[1].nDeaths;
  *(rgTeams[0].pTeam + 4) |= 2u;
  v41[12] = nDeaths;
  v43 = rgTeams[1].pTeam;
  v44 = rgTeams[0].nDeaths;
  *(rgTeams[1].pTeam + 4) |= 2u;
  v43[12] = v44;
  v45 = GCClientSystem();
  CGCClientSystem::BSendMessage(v45, &msg);
  msg._vptr_CProtoBufMsgBase = &off_4305510;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
}


// CDOTAGCServerSystem::AddRelaySteamID  (line 5680, @0x000000000299a8b0, libserver.so)  // inlines: AddToTail, CopyConstruct<CSteamID>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CSteamID, int>::Grow
// callers: CGCClientJobLANServerRelayConnect::BYieldingRunJobFromMsg
void __fastcall CDOTAGCServerSystem::AddRelaySteamID(CDOTAGCServerSystem *const this, CSteamID relayID)
{
  __int64 v4; // r12
  int v5; // eax
  CSteamID *v6; // rax

  v4 = *(this + 526);
  v5 = *(this + 526);
  if ( v4 == *(this + 530) )
  {
    CUtlMemory<CSteamID,int>::Grow(this + 132, 1);
    v5 = *(this + 526);
  }
  *(this + 526) = v5 + 1;
  v6 = (*(this + 264) + 8 * v4);
  if ( v6 != 0 )
    v6->m_steamid.m_comp = relayID.m_steamid.m_comp;
  (*(*engine + 744LL))(engine);
}


// CDOTAGCServerSystem::IsCompetitiveGame  (line 5687, @0x00000000029951f0, libserver.so)  // inlines: GetLobby
// callers: CDOTAGamerules::StartItemRestockTimers, DOTA_ExecuteOrders
bool __fastcall CDOTAGCServerSystem::IsCompetitiveGame(CDOTAGCServerSystem *const this)
{
  return qword_4C4A6A0 != 0 && (*(qword_4C4A6A0 + 152) - 1) <= 1;
}


// CDOTAGCServerSystem::SaveTimedRewardForMetadata  (line 5699, @0x0000000002995220, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, New, add_timed_reward_details
// calls: operator new, CLobbyTimedRewardDetails::CLobbyTimedRewardDetails, CLobbyTimedRewardDetails::CopyFrom, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
void __fastcall CDOTAGCServerSystem::SaveTimedRewardForMetadata(
        CDOTAGCServerSystem *const this,
        const CLobbyTimedRewardDetails *const msg)
{
  __int64 v4; // rax
  int v5; // edx
  CLobbyTimedRewardDetails *v6; // r12
  __int64 v7; // rax
  CLobbyTimedRewardDetails *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx

  v4 = *(this + 516);
  v5 = *(this + 517);
  if ( v4 < v5 )
  {
    v10 = *(this + 257);
    *(this + 516) = v4 + 1;
    v8 = *(v10 + 8 * v4);
  }
  else
  {
    if ( v5 == *(this + 518) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 2056), v5 + 1);
    v6 = operator new(0x28u);
    CLobbyTimedRewardDetails::CLobbyTimedRewardDetails(v6);
    v7 = *(this + 516);
    v8 = v6;
    v9 = *(this + 257);
    ++*(this + 517);
    *(this + 516) = v7 + 1;
    *(v9 + 8 * v7) = v6;
  }
  CLobbyTimedRewardDetails::CopyFrom(v8, msg);
}


// UpdateServerVersion  (line 5710, @0x0000000002991e50, libserver.so)  // inlines: GetBuildVersionForGCMessage
// calls: Msg, Warning, QuitServer
// callers: CGCClientJobServerUpdateVersion::BYieldingRunJobFromMsg, CGCClientJobServerWelcome::BYieldingRunJobFromMsg
// strings: "Version out of date (GC wants %d, we are %d)!\n", "Terminating immediately since server is hibernating\n"
// globals: g_gcServerVersion
bool __fastcall UpdateServerVersion(uint32 nVersion)
{
  int v2; // eax
  __int64 v3; // rsi
  char m_bIsHibernating; // dl
  int v5; // eax
  double v6; // xmm0_8

  v2 = (*(*engine + 712LL))(engine);
  g_gcServerVersion = nVersion;
  m_bIsHibernating = 1;
  if ( v2 != 0 && nVersion != 0 && nVersion != v2 )
  {
    v5 = (*(*engine + 712LL))(engine, v3, 1);
    *&v6 = Msg("Version out of date (GC wants %d, we are %d)!\n", g_gcServerVersion, v5).m128_u64[0];
    m_bIsHibernating = g_pSource2ServerInternal->m_bIsHibernating;
    if ( m_bIsHibernating != 0 )
    {
      Warning("Terminating immediately since server is hibernating\n", v6);
      QuitServer();
      return 0;
    }
  }
  return m_bIsHibernating;
}


// CGCClientJobServerWelcome::~CGCClientJobServerWelcome  (line 5735, @0x00000000029a8530, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobServerWelcome::~CGCClientJobServerWelcome(CGCClientJobServerWelcome *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobServerWelcome::~CGCClientJobServerWelcome  (line 5735, @0x00000000029a8550, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobServerWelcome
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobServerWelcome::~CGCClientJobServerWelcome(CGCClientJobServerWelcome *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobServerWelcome::BYieldingRunJobFromMsg  (line 5740, @0x00000000029b3540, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetBuildVersionForGCMessage, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, UpdateServerVersion, Msg, CDOTAGCServerSystem::ReceivedWelcome, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator new, CMsgClientWelcome::descriptor (19 total)
// strings: "GC Connection established for server version %d\n"
// globals: GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool, s_DOTAGCServerSystem
bool __fastcall CGCClientJobServerWelcome::BYieldingRunJobFromMsg(
        CGCClientJobServerWelcome *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  int v3; // eax
  GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *v5; // r14
  const google::protobuf::Descriptor *v6; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v8; // rax
  uint32 v9; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v10; // rax
  GCSDK::CProtoBufMsg<CMsgClientWelcome> msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_43055B0;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr )
    {
      v5 = operator new(0x28u);
      v6 = CMsgClientWelcome::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v6->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v8 = CMsgClientWelcome::descriptor();
      v9 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v8->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v5, v9, Int32);
      v5->_vptr_CProtoBufMsgMemoryPoolBase = &off_43066D0;
      GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool = v5;
      v10 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v10, v5);
      GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  if ( UpdateServerVersion(*(msg.m_pProtoBufBody + 20)) )
  {
    v3 = (*(*engine + 712LL))(engine);
    Msg("GC Connection established for server version %d\n", v3);
    CDOTAGCServerSystem::ReceivedWelcome(s_DOTAGCServerSystem, *(msg.m_pProtoBufBody + 12));
  }
  msg._vptr_CProtoBufMsgBase = &off_43055B0;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool, msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobServerWelcome  (line 5753, @0x00000000029909a0, libserver.so)  // inlines: AllocateJob<CGCClientJobServerWelcome, GCSDK::CGCClient>, CGCClientJob, CGCClientJobServerWelcome, JobMgrAllocateJobClass<CGCClientJobServerWelcome, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobServerWelcome
GCSDK::CJob *__fastcall CreateJob_CGCClientJobServerWelcome(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobServerWelcome (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4305550;  // vptr: CGCClientJobServerWelcome
  v2->m_pJobType = &g_JobType_CGCClientJobServerWelcome;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CGCClientJobServerUpdateVersion::~CGCClientJobServerUpdateVersion  (line 5755, @0x00000000029a84e0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobServerUpdateVersion::~CGCClientJobServerUpdateVersion(
        CGCClientJobServerUpdateVersion *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobServerUpdateVersion::~CGCClientJobServerUpdateVersion  (line 5755, @0x00000000029a8500, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobServerUpdateVersion
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobServerUpdateVersion::~CGCClientJobServerUpdateVersion(
        CGCClientJobServerUpdateVersion *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobServerUpdateVersion::BYieldingRunJobFromMsg  (line 5760, @0x00000000029aecc0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGCServerVersionUpdated::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, UpdateServerVersion (17 total)
// globals: GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool
bool __fastcall CGCClientJobServerUpdateVersion::BYieldingRunJobFromMsg(
        CGCClientJobServerUpdateVersion *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated> *v3; // r14
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated> msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305650;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_bRegisteredWithMemoryPoolMgr )
    {
      v3 = operator new(0x28u);
      v4 = CMsgGCServerVersionUpdated::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v4->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v6 = CMsgGCServerVersionUpdated::descriptor();
      v7 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v6->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
      v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306710;
      GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool = v3;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
      GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  UpdateServerVersion(*(msg.m_pProtoBufBody + 6));
  msg._vptr_CProtoBufMsgBase = &off_4305650;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobServerUpdateVersion  (line 5767, @0x0000000002990a10, libserver.so)  // inlines: AllocateJob<CGCClientJobServerUpdateVersion, GCSDK::CGCClient>, CGCClientJob, CGCClientJobServerUpdateVersion, JobMgrAllocateJobClass<CGCClientJobServerUpdateVersion, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobServerUpdateVersion
GCSDK::CJob *__fastcall CreateJob_CGCClientJobServerUpdateVersion(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobServerUpdateVersion (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_43055F0;  // vptr: CGCClientJobServerUpdateVersion
  v2->m_pJobType = &g_JobType_CGCClientJobServerUpdateVersion;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CGCClientJobGetGCStatus::~CGCClientJobGetGCStatus  (line 5770, @0x00000000029a8490, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobGetGCStatus::~CGCClientJobGetGCStatus(CGCClientJobGetGCStatus *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobGetGCStatus::~CGCClientJobGetGCStatus  (line 5770, @0x00000000029a84b0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobGetGCStatus
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobGetGCStatus::~CGCClientJobGetGCStatus(CGCClientJobGetGCStatus *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobGetGCStatus::BYieldingRunJob  (line 5777, @0x00000000029b31e0, libserver.so)  // inlines: BYieldingCall, CMsgIDLink, CMsgIDLinkGenericClientToGCResponse, CMsgIDLinkResponse, YieldingCallEx, ~CMsgIDLink, ~CMsgIDLinkGenericClientToGCResponse, ~CMsgIDLinkResponse
// calls: Msg, CMsgServerToGCRequestStatus::CMsgServerToGCRequestStatus, CMsgServerToGCRequestStatus_Response::CMsgServerToGCRequestStatus_Response, GCSDK::YldSendSendMessageGenericClientToGCEx, CMsgServerToGCRequestStatus_Response::~CMsgServerToGCRequestStatus_Response, CMsgServerToGCRequestStatus::~CMsgServerToGCRequestStatus, _Unwind_Resume
// strings: "Requesting GC status...\n", "OKAY", "Server received reply from the GC: %s (%u)\n", "Server failed to get reply from the GC\n"
bool __fastcall CGCClientJobGetGCStatus::BYieldingRunJob(CGCClientJobGetGCStatus *const this, void *pvStartParam)
{
  char *v2; // rsi
  _QWORD v4[4]; // [rsp+0h] [rbp-60h] BYREF
  _BYTE v5[24]; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+38h] [rbp-28h]

  Msg("Requesting GC status...\n", pvStartParam);
  CMsgServerToGCRequestStatus::CMsgServerToGCRequestStatus(v4);
  v4[0] = &off_4305870;
  CMsgServerToGCRequestStatus_Response::CMsgServerToGCRequestStatus_Response(v5);
  if ( GCSDK::YldSendSendMessageGenericClientToGCEx(
         v4,
         0x1B72u,
         v5,
         0x1D7Au,
         GCSDK::EExpectedReply::kExpectedReply_Critical) != GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
  {
    Msg("Server failed to get reply from the GC\n");
  }
  else
  {
    v2 = "OKAY";
    if ( v6 != 0 )
      v2 = "UNKNOWN";
    Msg("Server received reply from the GC: %s (%u)\n", v2);
  }
  CMsgServerToGCRequestStatus_Response::~CMsgServerToGCRequestStatus_Response(v5);
  v4[0] = &off_43056F0;
  CMsgServerToGCRequestStatus::~CMsgServerToGCRequestStatus(v4);
  return 1;
}


// server_gc_status  (line 5797, @0x00000000029908b0, libserver.so)  // inlines: CGCClientJob, CGCClientJobGetGCStatus
// calls: GCClientSystem, operator new, GCSDK::CJob::CJob, GCSDK::CJob::StartJob, operator delete, _Unwind_Resume
void __fastcall server_gc_status(const CCommandContext *const ctx, const CCommand *const args)
{
  CGCClientSystem *v2; // rax
  int (**v3)(...); // r13
  CGCClientSystem *v4; // r12
  GCSDK::CJob *v5; // rbx

  v2 = GCClientSystem();
  v3 = (v2 + 24);
  v4 = v2;
  v5 = operator new(0x140u);  // new CGCClientJobGetGCStatus (size matches)
  GCSDK::CJob::CJob(v5, (v4 + 72));
  v5[1]._vptr_CJob = v3;
  *(&v5[1] + 2) = 4;
  v5->_vptr_CJob = off_4305690;  // vptr: CGCClientJobGetGCStatus
  GCSDK::CJob::StartJob(v5, 0);
}


// CGCClientJobDOTABroadcastNotificationServer::~CGCClientJobDOTABroadcastNotificationServer  (line 5804, @0x00000000029a8440, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobDOTABroadcastNotificationServer::~CGCClientJobDOTABroadcastNotificationServer(
        CGCClientJobDOTABroadcastNotificationServer *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobDOTABroadcastNotificationServer::~CGCClientJobDOTABroadcastNotificationServer  (line 5804, @0x00000000029a8460, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobDOTABroadcastNotificationServer
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobDOTABroadcastNotificationServer::~CGCClientJobDOTABroadcastNotificationServer(
        CGCClientJobDOTABroadcastNotificationServer *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg  (line 5809, @0x00000000029abad0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, Unlock, _M_data, c_str, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, CCommand::CCommand, CCommand::Tokenize, Host_Say, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator new, CMsgDOTABroadcastNotification::descriptor (20 total)
// globals: GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool
bool __fastcall CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg(
        CGCClientJobDOTABroadcastNotificationServer *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification> msg; // [rsp+0h] [rbp-670h] BYREF
  CCommand args; // [rsp+30h] [rbp-640h] BYREF
  unsigned __int64 v12; // [rsp+638h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305990;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgDOTABroadcastNotification::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgDOTABroadcastNotification::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306750;
      GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  CCommand::CCommand(&args);
  CCommand::Tokenize(&args, **(msg.m_pProtoBufBody + 3), 0);
  Host_Say(0, &args, 0, 0, 0);
  msg._vptr_CProtoBufMsgBase = &off_4305990;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobDOTABroadcastNotificationServer  (line 5821, @0x0000000002990a80, libserver.so)  // inlines: AllocateJob<CGCClientJobDOTABroadcastNotificationServer, GCSDK::CGCClient>, CGCClientJob, CGCClientJobDOTABroadcastNotificationServer, JobMgrAllocateJobClass<CGCClientJobDOTABroadcastNotificationServer, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobDOTABroadcastNotificationServer
GCSDK::CJob *__fastcall CreateJob_CGCClientJobDOTABroadcastNotificationServer(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobDOTABroadcastNotificationServer (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4305930;  // vptr: CGCClientJobDOTABroadcastNotificationServer
  v2->m_pJobType = &g_JobType_CGCClientJobDOTABroadcastNotificationServer;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CGCClientJobDOTAGCToRelayConnect::~CGCClientJobDOTAGCToRelayConnect  (line 5824, @0x00000000029a83f0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobDOTAGCToRelayConnect::~CGCClientJobDOTAGCToRelayConnect(
        CGCClientJobDOTAGCToRelayConnect *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobDOTAGCToRelayConnect::~CGCClientJobDOTAGCToRelayConnect  (line 5824, @0x00000000029a8410, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobDOTAGCToRelayConnect
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobDOTAGCToRelayConnect::~CGCClientJobDOTAGCToRelayConnect(
        CGCClientJobDOTAGCToRelayConnect *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg  (line 5828, @0x00000000029afcb0, libserver.so)  // inlines: AllocProto, CPeerToPeerAddress, CProtoBufMsg, CSteamID, CUtlString, Clear, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, SetFromSteamID, SetParentRelayCount, SetRelayedGameServerSteamID, ToString, Unlock, netadr_t, ns_address, ns_address_render, ~CProtoBufMsg, ~CUtlString, ~ns_address
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, netadr_t::SetIP, netadr_t::SetPort, netadr_t::SetType, netadr_t::Clear, CUtlString::Format, CUtlString::Get, netadr_t::ToString (31 total)
// strings: "password %llu\n", "tv_relay %s\n", "Unable to determine address for proxy at public:%s private:%s\n", "=%s", "%s:%d"
// globals: GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool
bool __fastcall CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg(
        CGCClientJobDOTAGCToRelayConnect *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // bx
  CSteamID::SteamID_t v5; // r12
  __int64 v6; // rdx
  void (__fastcall *v7)(IVEngineServer2 *, const char *); // r15
  const char *v8; // rax
  void (__fastcall *v9)(IVEngineServer2 *, const char *); // r15
  const char *v10; // rax
  bool v11; // r13
  unsigned int IPHostByteOrder; // r15d
  const char *v14; // r13
  const char *v15; // rax
  const char *v16; // rdx
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect> *v17; // r13
  const google::protobuf::Descriptor *v18; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v20; // rax
  uint32 v21; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v22; // rax
  const char *v23; // rdx
  int m_steamChannel; // r12d
  CUtlString cmd; // [rsp+0h] [rbp-100h] BYREF
  GCSDK::CProtoBufMsg<CMsgGCToRelayConnect> msg; // [rsp+10h] [rbp-F0h] BYREF
  netadr_t serverPublicIPAddr; // [rsp+40h] [rbp-C0h] BYREF
  netadr_t serverPrivateIPAddr; // [rsp+50h] [rbp-B0h] BYREF
  ns_address addr; // [rsp+60h] [rbp-A0h] BYREF
  char pchBuffer[64]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v31; // [rsp+C8h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305A30;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_bRegisteredWithMemoryPoolMgr )
    {
      v17 = operator new(0x28u);
      v18 = CMsgGCToRelayConnect::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v18->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v20 = CMsgGCToRelayConnect::descriptor();
      v21 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v20->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v17, v21, Int32);
      v17->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306790;
      GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool = v17;
      v22 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v22, v17);
      GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  v3 = *(msg.m_pProtoBufBody + 20);
  netadr_t::SetIP(&serverPublicIPAddr, *(msg.m_pProtoBufBody + 6));
  netadr_t::SetPort(&serverPublicIPAddr, v3);
  netadr_t::SetType(&serverPublicIPAddr, NA_IP);
  v4 = *(msg.m_pProtoBufBody + 20);
  netadr_t::SetIP(&serverPrivateIPAddr, *(msg.m_pProtoBufBody + 7));
  netadr_t::SetPort(&serverPrivateIPAddr, v4);
  netadr_t::SetType(&serverPrivateIPAddr, NA_IP);
  netadr_t::SetIP(&addr.m_adr, 0);
  netadr_t::SetPort(&addr.m_adr, 0);
  netadr_t::SetType(&addr.m_adr, NA_IP);
  HIWORD(addr.m_steamID.m_steamID.m_steamid.m_unAll64Bits) = BYTE6(addr.m_steamID.m_steamID.m_steamid.m_unAll64Bits)
                                                           & 0xF;
  addr.m_steamID.m_steamChannel = 0;
  addr.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
  addr.m_steamID.m_steamID.m_steamid.m_unAll64Bits &= 0xFFF0000000000000LL;
  addr.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
  if ( (*(msg.m_pProtoBufBody + 16) & 0x40) != 0 )
  {
    v5.m_comp = *(msg.m_pProtoBufBody + 56);
    netadr_t::Clear(&addr.m_adr);
    addr.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
    addr.m_AddrType = NetworkSystemAddressType_t::NSAT_P2P;
    addr.m_steamID.m_steamID.m_steamid = v5;
    addr.m_steamID.m_steamChannel = 2;
  }
  else if ( !netadr_t::IsValid(&serverPublicIPAddr) || netadr_t::IsLocalhost(&serverPublicIPAddr) )
  {
    IPHostByteOrder = netadr_t::GetIPHostByteOrder(&serverPublicIPAddr);
    if ( IPHostByteOrder == netadr_t::GetIPHostByteOrder(&serverPrivateIPAddr)
      || !netadr_t::IsValid(&serverPrivateIPAddr)
      || netadr_t::IsLocalhost(&serverPrivateIPAddr) )
    {
      v14 = netadr_t::ToString(&serverPrivateIPAddr, 0);
      v15 = netadr_t::ToString(&serverPublicIPAddr, 0);
      Msg("Unable to determine address for proxy at public:%s private:%s\n", v15, v14);
      v11 = 0;
      goto LABEL_15;
    }
    addr.m_adr = serverPrivateIPAddr;
  }
  else
  {
    addr.m_adr = serverPublicIPAddr;
  }
  cmd.m_pString = 0;
  qword_4C4A5E8 = *(msg.m_pProtoBufBody + 4);
  dword_4C4A5F0 = *(msg.m_pProtoBufBody + 11);
  v6 = *(msg.m_pProtoBufBody + 6);
  if ( v6 != 0 )
  {
    CUtlString::Format(&cmd, "password %llu\n", v6);
    v7 = *(*engine + 280LL);
    v8 = CUtlString::Get(&cmd);
    v7(engine, v8);
  }
  if ( addr.m_AddrType == NetworkSystemAddressType_t::NSAT_P2P )
  {
    v23 = "";
    m_steamChannel = addr.m_steamID.m_steamChannel;
    if ( addr.m_steamID.m_AddrType == PeerToPeerAddressType_t::P2P_STEAMID )
      v23 = CSteamID::Render(&addr.m_steamID.m_steamID);
    V_sprintf_safe<64ul>(pchBuffer, "%s:%d", v23, m_steamChannel);
    goto LABEL_13;
  }
  if ( addr.m_AddrType > NetworkSystemAddressType_t::NSAT_P2P )
  {
    if ( addr.m_AddrType <= NetworkSystemAddressType_t::NSAT_PROXIED_CLIENT )
    {
      v16 = "";
      if ( addr.m_steamID.m_AddrType == PeerToPeerAddressType_t::P2P_STEAMID )
        v16 = CSteamID::Render(&addr.m_steamID.m_steamID);
      V_sprintf_safe<64ul>(pchBuffer, "=%s", v16);
      goto LABEL_13;
    }
  }
  else if ( addr.m_AddrType == NetworkSystemAddressType_t::NSAT_NETADR )
  {
    netadr_t::ToString(&addr.m_adr, pchBuffer, 0x40u, 0);
    goto LABEL_13;
  }
  pchBuffer[0] = 0;
LABEL_13:
  CUtlString::Format(&cmd, "tv_relay %s\n", pchBuffer);
  v9 = *(*engine + 280LL);
  v10 = CUtlString::Get(&cmd);
  v9(engine, v10);
  v11 = 1;
  if ( cmd.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&cmd);
LABEL_15:
  addr.m_AddrType = NetworkSystemAddressType_t::NSAT_NETADR;
  netadr_t::Clear(&addr.m_adr);
  HIWORD(addr.m_steamID.m_steamID.m_steamid.m_unAll64Bits) = BYTE6(addr.m_steamID.m_steamID.m_steamid.m_unAll64Bits)
                                                           & 0xF;
  addr.m_steamID.m_AddrType = PeerToPeerAddressType_t::P2P_STEAMID;
  addr.m_steamID.m_steamID.m_steamid.m_unAll64Bits &= 0xFFF0000000000000LL;
  addr.m_steamID.m_steamChannel = 0;
  msg._vptr_CProtoBufMsgBase = &off_4305A30;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return v11;
}


// CreateJob_CGCClientJobDOTAGCToRelayConnect  (line 5872, @0x0000000002990af0, libserver.so)  // inlines: AllocateJob<CGCClientJobDOTAGCToRelayConnect, GCSDK::CGCClient>, CGCClientJob, CGCClientJobDOTAGCToRelayConnect, JobMgrAllocateJobClass<CGCClientJobDOTAGCToRelayConnect, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobDOTAGCToRelayConnect
GCSDK::CJob *__fastcall CreateJob_CGCClientJobDOTAGCToRelayConnect(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobDOTAGCToRelayConnect (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_43059D0;  // vptr: CGCClientJobDOTAGCToRelayConnect
  v2->m_pJobType = &g_JobType_CGCClientJobDOTAGCToRelayConnect;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CGCClientJobLANServerRelayConnect::~CGCClientJobLANServerRelayConnect  (line 5875, @0x00000000029a83a0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobLANServerRelayConnect::~CGCClientJobLANServerRelayConnect(
        CGCClientJobLANServerRelayConnect *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobLANServerRelayConnect::~CGCClientJobLANServerRelayConnect  (line 5875, @0x00000000029a83c0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobLANServerRelayConnect
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobLANServerRelayConnect::~CGCClientJobLANServerRelayConnect(
        CGCClientJobLANServerRelayConnect *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobLANServerRelayConnect::BYieldingRunJobFromMsg  (line 5879, @0x00000000029b2b80, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CSteamID, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, SetFromUint64, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGCGCToLANServerRelayConnect::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, CDOTAGCServerSystem::AddRelaySteamID (17 total)
// globals: GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool, s_DOTAGCServerSystem
bool __fastcall CGCClientJobLANServerRelayConnect::BYieldingRunJobFromMsg(
        CGCClientJobLANServerRelayConnect *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect> *v3; // r14
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect> msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305AD0;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_bRegisteredWithMemoryPoolMgr )
    {
      v3 = operator new(0x28u);
      v4 = CMsgGCGCToLANServerRelayConnect::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v4->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v6 = CMsgGCGCToLANServerRelayConnect::descriptor();
      v7 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v6->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
      v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_43067D0;
      GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool = v3;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
      GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  CDOTAGCServerSystem::AddRelaySteamID(s_DOTAGCServerSystem, *(msg.m_pProtoBufBody + 24));
  msg._vptr_CProtoBufMsgBase = &off_4305AD0;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobLANServerRelayConnect  (line 5887, @0x0000000002990b60, libserver.so)  // inlines: AllocateJob<CGCClientJobLANServerRelayConnect, GCSDK::CGCClient>, CGCClientJob, CGCClientJobLANServerRelayConnect, JobMgrAllocateJobClass<CGCClientJobLANServerRelayConnect, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobLANServerRelayConnect
GCSDK::CJob *__fastcall CreateJob_CGCClientJobLANServerRelayConnect(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobLANServerRelayConnect (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4305A70;  // vptr: CGCClientJobLANServerRelayConnect
  v2->m_pJobType = &g_JobType_CGCClientJobLANServerRelayConnect;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CGCItemAcknowledged::~CGCItemAcknowledged  (line 5891, @0x00000000029a8350, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCItemAcknowledged::~CGCItemAcknowledged(CGCItemAcknowledged *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCItemAcknowledged::~CGCItemAcknowledged  (line 5891, @0x00000000029a8370, libserver.so)  // inlines: ~CGCClientJob, ~CGCItemAcknowledged
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCItemAcknowledged::~CGCItemAcknowledged(CGCItemAcknowledged *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCItemAcknowledged::BYieldingRunGCJob  (line 5896, @0x00000000029ad380, libserver.so)  // inlines: AllocProto, CBroadcastRecipientFilter, CDOTAUserMsg_ItemFound_t, CNetMessagePB, CProtoBufMsg, CSteamID, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ItemFound_t>, FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetUnacknowledgedReason, Lock, PostEvent<CDOTAUserMsg_ItemFound_t>, SendUserMessage<CDOTAUserMsg_ItemFound_t>, ToBaseMultiplayerPlayer, Unlock, set_has_itemdef, set_has_player, set_itemdef, set_player, set_quality, set_rarity, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ItemFound_t, ~CNetMessagePB, ~CProtoBufMsg, ~CUserMessagePB
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, UTIL_PlayerByIndex, CBaseMultiplayerPlayer::GetSteamID, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator new, CMsgItemAcknowledged::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int) (24 total)
// globals: GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>(bool)::s_hEvent
bool __fastcall CGCItemAcknowledged::BYieldingRunGCJob(
        CGCItemAcknowledged *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi
  int v4; // r14d
  CEntityIndex v5; // ebx
  CBasePlayer *v6; // rax
  CBaseMultiplayerPlayer *v7; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged> *v9; // r13
  const google::protobuf::Descriptor *v10; // rax
  uint32 Int32; // r14d
  const google::protobuf::Descriptor *v12; // rax
  uint32 v13; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v14; // rax
  __int64 v15; // r14
  int v16; // ecx
  IGameEventSystem *v17; // r12
  void (__fastcall *v18)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CSteamID steamID; // [rsp+10h] [rbp-1E0h] BYREF
  GCSDK::CProtoBufMsg<CMsgItemAcknowledged> msg; // [rsp+20h] [rbp-1D0h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-1A0h] BYREF
  int v22; // [rsp+60h] [rbp-190h]
  int v23; // [rsp+68h] [rbp-188h]
  int v24; // [rsp+6Ch] [rbp-184h]
  int v25; // [rsp+70h] [rbp-180h]
  int v26; // [rsp+74h] [rbp-17Ch]
  int v27; // [rsp+78h] [rbp-178h]
  CBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v29; // [rsp+1B8h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305B70;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_bRegisteredWithMemoryPoolMgr )
    {
      v9 = operator new(0x28u);
      v10 = CMsgItemAcknowledged::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v10->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v12 = CMsgItemAcknowledged::descriptor();
      v13 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v12->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v9, v13, Int32);
      v9->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306810;
      GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool = v9;
      v14 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v14, v9);
      GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  m_pProtoBufBody = msg.m_pProtoBufBody;
  if ( *(msg.m_pProtoBufBody + 11) == 0
    || (HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF,
        steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL),
        v4 = *(msg.m_pProtoBufBody + 6),
        gpGlobals->maxClients <= 0) )
  {
    msg._vptr_CProtoBufMsgBase = &off_4305B70;
LABEL_14:
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool, m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
    goto LABEL_15;
  }
  v5.m_Data = 1;
  while ( 1 )
  {
    v6 = UTIL_PlayerByIndex(v5);
    v7 = v6;
    if ( v6 != 0
      && ((*(v6->_vptr_IHandleEntity + 140))(v6) == 0 || CBaseMultiplayerPlayer::GetSteamID(v7, &steamID))
      && v4 == steamID.m_steamid.m_comp )
    {
      break;
    }
    if ( gpGlobals->maxClients < ++v5.m_Data )
      goto LABEL_13;
  }
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  CDOTAUserMsg_ItemFound::CDOTAUserMsg_ItemFound(v21);
  v21[0] = off_4303A90;
  v23 = (*(v7->_vptr_IHandleEntity + 393))(v7);
  v15 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>(bool)::s_hEvent;
  v16 = *(msg.m_pProtoBufBody + 9);
  v22 |= 0x1Fu;
  v24 = v16;
  v25 = *(msg.m_pProtoBufBody + 10);
  v26 = (*(msg.m_pProtoBufBody + 7) & 0x1FFFFFFF) - 1;
  v27 = *(msg.m_pProtoBufBody + 8);
  v17 = g_pGameEventSystem;
  v18 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemFound_t>(bool)::s_hEvent);
  v18(v17, 0, 0, &filter, v15, v21, 48);
  v21[0] = &off_4303910;
  CDOTAUserMsg_ItemFound::~CDOTAUserMsg_ItemFound(v21);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
LABEL_13:
  m_pProtoBufBody = msg.m_pProtoBufBody;
  msg._vptr_CProtoBufMsgBase = &off_4305B70;
  if ( msg.m_pProtoBufBody != 0 )
    goto LABEL_14;
LABEL_15:
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCItemAcknowledged  (line 5940, @0x0000000002990bd0, libserver.so)  // inlines: AllocateJob<CGCItemAcknowledged, GCSDK::CGCClient>, CGCClientJob, CGCItemAcknowledged, JobMgrAllocateJobClass<CGCItemAcknowledged, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCItemAcknowledged
GCSDK::CJob *__fastcall CreateJob_CGCItemAcknowledged(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCItemAcknowledged (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4305B10;  // vptr: CGCItemAcknowledged
  v2->m_pJobType = &g_JobType_CGCItemAcknowledged;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CDOTAGCServerSystem::GetBuildVersionForGCMessage  (line 5943, @0x00000000029952f0, libserver.so)
uint32 __fastcall CDOTAGCServerSystem::GetBuildVersionForGCMessage(CDOTAGCServerSystem *const this)
{
  return (*(*engine + 712LL))(engine);
}


// CGCClientJobGCToServerPingRequest::~CGCClientJobGCToServerPingRequest  (line 5949, @0x00000000029a8300, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobGCToServerPingRequest::~CGCClientJobGCToServerPingRequest(
        CGCClientJobGCToServerPingRequest *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobGCToServerPingRequest::~CGCClientJobGCToServerPingRequest  (line 5949, @0x00000000029a8320, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobGCToServerPingRequest
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobGCToServerPingRequest::~CGCClientJobGCToServerPingRequest(
        CGCClientJobGCToServerPingRequest *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg  (line 5953, @0x00000000029ae850, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInt, IsEnabled, Lock, Unlock, set_cluster, set_has_cluster, set_has_request_id, set_has_request_time, set_request_id, set_request_time, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGCToServerPingRequest::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, CVProfile::EnterScope (26 total)
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "sv_cluster"
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool, GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool, `guard variable for'CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster, CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster
bool __fastcall CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(
        CGCClientJobGCToServerPingRequest *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest> *v3; // r14
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  int m_enabled; // edx
  bool v10; // r14
  __int64 v11; // rdx
  CMsgGCToServerPingResponse *m_pProtoBufBody; // rax
  __int64 v13; // rdx
  CMsgGCToServerPingResponse *v14; // rax
  int m_nValue; // edx
  CMsgGCToServerPingResponse *v16; // rax
  CGCClientSystem *v17; // rax
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse> *v19; // r15
  const google::protobuf::Descriptor *v20; // rax
  const google::protobuf::Descriptor *v21; // rax
  uint32 v22; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v23; // rax
  uint32 unTargetHigh; // [rsp+Ch] [rbp-94h]
  GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest> msg; // [rsp+10h] [rbp-90h] BYREF
  GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse> msgResponse; // [rsp+40h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305C10;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_bRegisteredWithMemoryPoolMgr )
    {
      v3 = operator new(0x28u);
      v4 = CMsgGCToServerPingRequest::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v4->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v6 = CMsgGCToServerPingRequest::descriptor();
      v7 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v6->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
      v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306850;
      GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool = v3;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
      GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgResponse, 0x1CF9u);
  msgResponse.m_pProtoBufBody = 0;
  msgResponse._vptr_CProtoBufMsgBase = &off_4305C50;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v10 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      v19 = operator new(0x28u);
      v20 = CMsgGCToServerPingResponse::descriptor();
      unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                       (v20->options_ + 8),
                       msgpool_hard_limit.number_,
                       msgpool_hard_limit.default_value_);
      v21 = CMsgGCToServerPingResponse::descriptor();
      v22 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v21->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v19, v22, unTargetHigh);
      v19->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306890;
      GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool = v19;
      v23 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v23, v19);
      GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msgResponse.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool);
  if ( v10 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( `guard variable for'CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster == 0
    && __cxa_guard_acquire(&`guard variable for'CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster) != 0 )
  {
    ConVarRef::ConVarRef(
      &CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster,
      "sv_cluster");
    __cxa_guard_release(&`guard variable for'CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster);
  }
  v11 = *(msg.m_pProtoBufBody + 3);
  m_pProtoBufBody = msgResponse.m_pProtoBufBody;
  *(msgResponse.m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 3) = v11;
  v13 = *(msg.m_pProtoBufBody + 4);
  v14 = msgResponse.m_pProtoBufBody;
  *(msgResponse.m_pProtoBufBody + 4) |= 2u;
  *(v14 + 4) = v13;
  m_nValue = 0;
  if ( CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster.m_pConVarState->m_Value.m_nValue >= 0 )
    m_nValue = CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg(GCSDK::IMsgNetPacket *)::sv_cluster.m_pConVarState->m_Value.m_nValue;
  v16 = msgResponse.m_pProtoBufBody;
  *(msgResponse.m_pProtoBufBody + 4) |= 4u;
  *(v16 + 10) = m_nValue;
  v17 = GCClientSystem();
  CGCClientSystem::BSendMessage(v17, &msgResponse);
  msgResponse._vptr_CProtoBufMsgBase = &off_4305C50;
  if ( msgResponse.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool,
      msgResponse.m_pProtoBufBody);
    msgResponse.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgResponse);
  msg._vptr_CProtoBufMsgBase = &off_4305C10;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobGCToServerPingRequest  (line 5969, @0x0000000002990c40, libserver.so)  // inlines: AllocateJob<CGCClientJobGCToServerPingRequest, GCSDK::CGCClient>, CGCClientJob, CGCClientJobGCToServerPingRequest, JobMgrAllocateJobClass<CGCClientJobGCToServerPingRequest, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobGCToServerPingRequest
GCSDK::CJob *__fastcall CreateJob_CGCClientJobGCToServerPingRequest(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobGCToServerPingRequest (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4305BB0;  // vptr: CGCClientJobGCToServerPingRequest
  v2->m_pJobType = &g_JobType_CGCClientJobGCToServerPingRequest;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CGCClientJobGCToServerConsoleCommand::~CGCClientJobGCToServerConsoleCommand  (line 5972, @0x00000000029a82b0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobGCToServerConsoleCommand::~CGCClientJobGCToServerConsoleCommand(
        CGCClientJobGCToServerConsoleCommand *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobGCToServerConsoleCommand::~CGCClientJobGCToServerConsoleCommand  (line 5972, @0x00000000029a82d0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobGCToServerConsoleCommand
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobGCToServerConsoleCommand::~CGCClientJobGCToServerConsoleCommand(
        CGCClientJobGCToServerConsoleCommand *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobGCToServerConsoleCommand::BYieldingRunJobFromMsg  (line 5976, @0x00000000029ad130, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsValid, Lock, Unlock, _M_data, c_str, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgGCToServerConsoleCommand::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, Msg (17 total)
// strings: "Executing remote console command from GC: '%s'\n"
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool
bool __fastcall CGCClientJobGCToServerConsoleCommand::BYieldingRunJobFromMsg(
        CGCClientJobGCToServerConsoleCommand *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand> *v3; // r14
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  unsigned __int64 v9; // rax
  double v10; // xmm0_8
  GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand> msg; // [rsp+0h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305CF0;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_bRegisteredWithMemoryPoolMgr )
    {
      v3 = operator new(0x28u);
      v4 = CMsgGCToServerConsoleCommand::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v4->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v6 = CMsgGCToServerConsoleCommand::descriptor();
      v7 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v6->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
      v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_43068D0;
      GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool = v3;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
      GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  v9 = *(msg.m_pProtoBufHdr + 3);
  if ( (v9 & 0xF0000000000000LL) == 0 || ((v9 >> 52) & 0xF) > 0xA || (HIBYTE(v9) - 1) > 3u )
    goto LABEL_12;
  if ( (BYTE6(v9) & 0xF0) == 0x10 )
  {
    if ( v9 == 0 || (HIDWORD(v9) & 0xFFFFFu) > 4 )
      goto LABEL_12;
  }
  else if ( (BYTE6(v9) & 0xF0) == 0x70 )
  {
    if ( v9 == 0 || (v9 & 0xFFFFF00000000LL) != 0 )
      goto LABEL_12;
  }
  else if ( (BYTE6(v9) & 0xF0) == 0x30 && v9 == 0 )
  {
LABEL_12:
    *&v10 = Msg("Executing remote console command from GC: '%s'\n", **(msg.m_pProtoBufBody + 3)).m128_u64[0];
    (*(*engine + 280LL))(engine, **(msg.m_pProtoBufBody + 3), v10);
  }
  msg._vptr_CProtoBufMsgBase = &off_4305CF0;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobGCToServerConsoleCommand  (line 5988, @0x0000000002990cb0, libserver.so)  // inlines: AllocateJob<CGCClientJobGCToServerConsoleCommand, GCSDK::CGCClient>, CGCClientJob, CGCClientJobGCToServerConsoleCommand, JobMgrAllocateJobClass<CGCClientJobGCToServerConsoleCommand, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobGCToServerConsoleCommand
GCSDK::CJob *__fastcall CreateJob_CGCClientJobGCToServerConsoleCommand(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobGCToServerConsoleCommand (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4305C90;  // vptr: CGCClientJobGCToServerConsoleCommand
  v2->m_pJobType = &g_JobType_CGCClientJobGCToServerConsoleCommand;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CGCClientJobGCToServerPredictionResult::~CGCClientJobGCToServerPredictionResult  (line 5991, @0x00000000029a8260, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCClientJobGCToServerPredictionResult::~CGCClientJobGCToServerPredictionResult(
        CGCClientJobGCToServerPredictionResult *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
}


// CGCClientJobGCToServerPredictionResult::~CGCClientJobGCToServerPredictionResult  (line 5991, @0x00000000029a8280, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientJobGCToServerPredictionResult
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCClientJobGCToServerPredictionResult::~CGCClientJobGCToServerPredictionResult(
        CGCClientJobGCToServerPredictionResult *const this)
{
  this->_vptr_CJob = off_40DB690;  // vptr: GCSDK::CGCClientJob
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCClientJobGCToServerPredictionResult::BYieldingRunJobFromMsg  (line 5996, @0x00000000029abcd0, libserver.so)  // inlines: AllocProto, CBroadcastRecipientFilter, CProtoBufMsg, FindGameEvent<CDOTAUserMsg_PredictionResult_t>, FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, Lock, PostEvent<CDOTAUserMsg_PredictionResult_t>, SendUserMessage<CDOTAUserMsg_PredictionResult_t>, Unlock, ~CBroadcastRecipientFilter, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator new, CMsgGCToServerPredictionResult::descriptor (20 total)
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>(bool)::s_hEvent
bool __fastcall CGCClientJobGCToServerPredictionResult::BYieldingRunJobFromMsg(
        CGCClientJobGCToServerPredictionResult *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, CMsgGCToServerPredictionResult *, __int64); // r15
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult> *v7; // r14
  const google::protobuf::Descriptor *v8; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v10; // rax
  uint32 v11; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v12; // rax
  CMsgGCToServerPredictionResult *m_pProtoBufBody; // [rsp+8h] [rbp-1A8h]
  GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult> msg; // [rsp+10h] [rbp-1A0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+178h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_4305D90;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_bRegisteredWithMemoryPoolMgr )
    {
      v7 = operator new(0x28u);
      v8 = CMsgGCToServerPredictionResult::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v8->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v10 = CMsgGCToServerPredictionResult::descriptor();
      v11 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v10->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v7, v11, Int32);
      v7->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306910;
      GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool = v7;
      v12 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v12, v7);
      GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>(bool)::s_hEvent;
  m_pProtoBufBody = msg.m_pProtoBufBody;
  v4 = g_pGameEventSystem;
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_PredictionResult_t>(bool)::s_hEvent);
  v5(v4, 0, 0, &filter, v3, m_pProtoBufBody, 64);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  msg._vptr_CProtoBufMsgBase = &off_4305D90;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCClientJobGCToServerPredictionResult  (line 6008, @0x0000000002990d20, libserver.so)  // inlines: AllocateJob<CGCClientJobGCToServerPredictionResult, GCSDK::CGCClient>, CGCClientJob, CGCClientJobGCToServerPredictionResult, JobMgrAllocateJobClass<CGCClientJobGCToServerPredictionResult, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCClientJobGCToServerPredictionResult
GCSDK::CJob *__fastcall CreateJob_CGCClientJobGCToServerPredictionResult(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);  // new CGCClientJobGCToServerPredictionResult (size matches)
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_4305D30;  // vptr: CGCClientJobGCToServerPredictionResult
  v2->m_pJobType = &g_JobType_CGCClientJobGCToServerPredictionResult;
  *(&v2[1] + 2) = 4;
  return v2;
}


