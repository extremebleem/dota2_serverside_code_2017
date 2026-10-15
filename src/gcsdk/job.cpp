
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_job.cpp  (line 0, @0x0000000001a6e3e0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_job_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CJob::DeleteJob  (line 57, @0x00000000032218f0, libserver.so)
// calls: GCSDK::CJob::WaitForThreadFuncWorkItemBlocking
// callers: GCSDK::CJob::BRunProxy, GCSDK::CJobMgr::Shutdown
void __fastcall GCSDK::CJob::DeleteJob(GCSDK::CJob *pJob)
{
  GCSDK::CJob::WaitForThreadFuncWorkItemBlocking(pJob);
  if ( pJob != 0 )
    (*(pJob->_vptr_CJob + 1))(pJob);
}


// GCSDK::CJob::CJob  (line 68, @0x0000000003222850, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CCycleCount, CFastTimer, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Init, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: GCSDK::CJobTime::CJobTime, GCSDK::CJobMgr::GetNewJobID, Coroutine_Create, GCSDK::CJobTime::SetToJobTime, GCSDK::CJobTime::SetFromJobTime, GCSDK::CJobMgr::InsertJob, Plat_IsInDebugSessionRaw, CUtlMemory<GCSDK::CLock*, int>::Purge, _Unwind_Resume, CUtlMemory<GCSDK::IMsgNetPacket*, int>::Purge, CUtlVectorBase<GCSDK::CLock*, CUtlMemoryFixedGrowable<GCSDK::CLock*, 2ul, int> >::~CUtlVectorBase, CUtlMemory<unsigned char, int>::Purge (13 total)
// callers: CDOTAChallengeSystem::ClientMsg_ChallengeReroll, CreateJob_CGCUserUpdatedAdditionalItems, CreateJob_CGCTournamentItemEventResponse, CSource2GameClients::HLTVClientFullyConnect, CDOTAGamerules::UpdateFanfareCount, CDOTAGamerules::SERVER_RequestPCBangAdditionalItems, PerformDOTASaveGame, CDOTAGamerules::State_Think_WAIT_FOR_PLAYERS_TO_LOAD, CDOTAGamerules::State_Enter_POST_GAME, CIngameEvent_WM2016::GiveTip, CreateJob_CGCJobRequestBatchPlayerResourcesResponse, CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected (40 total)
// globals: GCSDK::CJob::BRunProxy(void *)
void __fastcall GCSDK::CJob::CJob(GCSDK::CJob *const this, GCSDK::CJobMgr *const jobMgr)
{
  GCSDK::CJobTime *p_m_STimeStarted; // r13
  GCSDK::CJobTime *p_m_STimeSwitched; // r12
  GCSDK::CLock **p_m_FixedMemory; // r15
  JobID_t NewJobID; // rax
  HCoroutine v8; // eax
  GCSDK::CJobMgr *m_JobMgr; // rdi

  p_m_STimeStarted = &this->m_STimeStarted;
  p_m_STimeSwitched = &this->m_STimeSwitched;
  this->_vptr_CJob = off_47D05F0;
  p_m_FixedMemory = &this->m_vecLocks.m_Memory.m_FixedMemory;
  GCSDK::CJobTime::CJobTime(&this->m_STimeStarted);
  GCSDK::CJobTime::CJobTime(p_m_STimeSwitched);
  GCSDK::CJobTime::CJobTime(&this->m_STimeNextHeartbeat);
  this->m_FastTimerDelta.m_Duration.m_Int64 = 0;
  this->m_cyclecountTotal.m_Int64 = 0;
  this->m_vecLocks.m_Size = 0;
  this->m_vecLocks.m_Memory.m_pMemory = 0;
  this->m_vecLocks.m_Memory.m_nAllocationCount = 2;
  this->m_vecLocks.m_Memory.m_nGrowSize = 0x80000000;
  if ( (p_m_FixedMemory & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_vecLocks.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_JobMgr = jobMgr;
  this->m_vecNetPackets.m_Size = 0;
  this->m_vecNetPackets.m_Memory.m_pMemory = 0;
  this->m_vecNetPackets.m_Memory.m_nAllocationCount = 1;
  this->m_vecNetPackets.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 8) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_vecNetPackets.m_Memory.m_pMemory = &this->m_vecNetPackets.m_Memory.m_FixedMemory;
  this->m_memAllocStack.m_pMemory = 0;
  this->m_memAllocStack.m_nAllocationCount = 0;
  this->m_memAllocStack.m_nGrowSize = 0;
  this->m_ePauseReason = GCSDK::EJobPauseReason::k_EJobPauseReasonNotStarted;
  this->m_pszPauseResourceName = 0;
  NewJobID = GCSDK::CJobMgr::GetNewJobID(jobMgr);
  *(this + 8) &= ~2u;
  this->m_JobID = NewJobID;
  this->m_pJobType = 0;
  this->m_pchJobName = "";
  v8 = Coroutine_Create(GCSDK::CJob::BRunProxy, this);
  *(this + 8) &= ~1u;
  this->m_hCoroutine = v8;
  this->m_pvStartParam = 0;
  this->m_pJobPrev = 0;
  this->m_pWaitingOnLock = 0;
  this->m_pJobToNotifyOnLockRelease = 0;
  this->m_pWaitingOnWorkItem = 0;
  GCSDK::CJobTime::SetToJobTime(p_m_STimeStarted);
  GCSDK::CJobTime::SetToJobTime(p_m_STimeSwitched);
  GCSDK::CJobTime::SetFromJobTime(&this->m_STimeNextHeartbeat, 5000000);
  *(this + 8) &= ~4u;
  this->m_cLocksAttempted = 0;
  m_JobMgr = this->m_JobMgr;
  this->m_cLocksWaitedFor = 0;
  this->m_flags.m_uFlags = 0;
  this->m_cyclecountTotal.m_Int64 = 0;
  this->m_unWaitMsgType = 0;
  this->m_nContextMask = 0;
  this->m_pFirstJobWaitingOnThis = 0;
  this->m_jobIDWaitingOn = -1;
  this->m_pJobWaitingOnNext = 0;
  GCSDK::CJobMgr::InsertJob(m_JobMgr, this);
}


// GCSDK::CJob::~CJob  (line 109, @0x0000000003223b20, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, Release, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: GCSDK::CJobMgr::RemoveJob, GCSDK::CJob::ReleaseLocks, CUtlMemory<unsigned char, int>::Purge, CUtlMemory<GCSDK::IMsgNetPacket*, int>::Purge, CUtlMemory<GCSDK::CLock*, int>::Purge
// callers: GCSDK::CGCClientJob::~CGCClientJob, CGCClientJobRerollPlayerChallenge::~CGCClientJobRerollPlayerChallenge, CDOTAChallengeSystem::ClientMsg_ChallengeReroll, CGCTournamentItemEventResponse::~CGCTournamentItemEventResponse, CGCServerJobGetAdditionalItems::~CGCServerJobGetAdditionalItems, CGCUserUpdatedAdditionalItems::~CGCUserUpdatedAdditionalItems, CGCClientJobTeamFanfare::~CGCClientJobTeamFanfare, CGCClientJobGetHLTVChatBanStatus::~CGCClientJobGetHLTVChatBanStatus, CGCClientJobGrantSurveyPermission::~CGCClientJobGrantSurveyPermission, CDOTAGamerules::State_Enter_POST_GAME, CIngameEvent_WM2016::GiveTip, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::~GCClientJobLambda (57 total)
// globals: GCSDK::g_pJobCur
void __fastcall GCSDK::CJob::~CJob(GCSDK::CJob *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  GCSDK::IMsgNetPacket *v4; // rdi
  int m_nAllocationCount; // r13d
  uint32 m_nGrowSize; // edx
  GCSDK::IMsgNetPacket **m_pMemory; // rsi
  uint32 v8; // eax
  int v9; // r12d
  uint32 v10; // edx
  GCSDK::CLock **v11; // rsi
  uint32 v12; // eax

  this->_vptr_CJob = off_47D05F0;
  if ( GCSDK::g_pJobCur == this )
    GCSDK::g_pJobCur = this->m_pJobPrev;
  v2 = 0;
  v3 = 0;
  GCSDK::CJobMgr::RemoveJob(this->m_JobMgr, this);
  GCSDK::CJob::ReleaseLocks(this);
  if ( this->m_vecNetPackets.m_Size > 0 )
  {
    do
    {
      v4 = this->m_vecNetPackets.m_Memory.m_pMemory[v2];
      if ( _InterlockedSub(&v4->m_cRef, 1u) == 0 )
        (*(v4->_vptr_CRefCount + 2))(v4);
      ++v3;
      ++v2;
    }
    while ( this->m_vecNetPackets.m_Size > v3 );
  }
  this->m_vecNetPackets.m_Size = 0;
  CUtlMemory<unsigned char,int>::Purge(&this->m_memAllocStack);
  m_nAllocationCount = this->m_vecNetPackets.m_Memory.m_nAllocationCount;
  this->m_vecNetPackets.m_Size = 0;
  if ( m_nAllocationCount < 0 )
  {
    v8 = this->m_vecNetPackets.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_vecNetPackets.m_Memory.m_nGrowSize;
    m_pMemory = this->m_vecNetPackets.m_Memory.m_pMemory;
    v8 = m_nGrowSize & 0xC0000000;
    if ( &this->m_vecNetPackets.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v8 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_vecNetPackets.m_Memory.m_nGrowSize;
      }
      this->m_vecNetPackets.m_Memory.m_pMemory = &this->m_vecNetPackets.m_Memory.m_FixedMemory;
      this->m_vecNetPackets.m_Memory.m_nAllocationCount = 1;
      this->m_vecNetPackets.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_13;
    }
  }
  if ( v8 == 0 )
    CUtlMemory<GCSDK::IMsgNetPacket *,int>::Purge(&this->m_vecNetPackets.m_Memory);
LABEL_13:
  v9 = this->m_vecLocks.m_Memory.m_nAllocationCount;
  this->m_vecLocks.m_Size = 0;
  if ( v9 < 0 )
  {
    v12 = this->m_vecLocks.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v10 = this->m_vecLocks.m_Memory.m_nGrowSize;
    v11 = this->m_vecLocks.m_Memory.m_pMemory;
    v12 = v10 & 0xC0000000;
    if ( &this->m_vecLocks.m_Memory.m_FixedMemory != v11 )
    {
      if ( v11 != 0 && v12 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v10 = this->m_vecLocks.m_Memory.m_nGrowSize;
      }
      this->m_vecLocks.m_Memory.m_pMemory = &this->m_vecLocks.m_Memory.m_FixedMemory;
      this->m_vecLocks.m_Memory.m_nAllocationCount = 2;
      this->m_vecLocks.m_Memory.m_nGrowSize = v10 & 0x3FFFFFFF | 0x80000000;
      return;
    }
  }
  if ( v12 == 0 )
    CUtlMemory<GCSDK::CLock *,int>::Purge(&this->m_vecLocks.m_Memory);
}


// GCSDK::CJob::~CJob  (line 109, @0x0000000003223d40, libserver.so)
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CJob::~CJob(GCSDK::CJob *const this)
{
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CJob::WaitForThreadFuncWorkItemBlocking  (line 140, @0x0000000003221870, libserver.so)  // inlines: BIsRunning, ForceTimeOut
// calls: GCSDK::CJobTime::SetFromJobTime, ThreadSleep
// callers: GCSDK::CJob::DeleteJob
void __fastcall GCSDK::CJob::WaitForThreadFuncWorkItemBlocking(GCSDK::CJob *const this)
{
  GCSDK::CWorkItem *m_pWaitingOnWorkItem; // rdi
  __int64 v3; // rdx
  __int64 v4; // rsi

  m_pWaitingOnWorkItem = this->m_pWaitingOnWorkItem;
  if ( m_pWaitingOnWorkItem != 0 && this->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonWorkItem )
  {
    GCSDK::CJobTime::SetFromJobTime(&m_pWaitingOnWorkItem->m_jobtimeTimeout, -1);
    while ( this->m_pWaitingOnWorkItem->m_bRunning )
      ThreadSleep(25, v4, v3);
    this->m_pWaitingOnWorkItem = 0;
  }
}


// GCSDK::CJob::GetName  (line 175, @0x00000000032219c0, libserver.so)
// callers: GCSDK::CJobMgr::BIsJobRunning, GCSDK::CJobMgr::TimeoutJob, GCSDK::CJobMgr::DumpJob, GCSDK::CJobMgr::DumpJobs, GCSDK::CJobMgr::PassMsgToJob, GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob, GCSDK::CJobMgr::AccumulateStatsofJob, GCSDK::CJobMgr::DumpJobSummary
const char *__fastcall GCSDK::CJob::GetName(const GCSDK::CJob *const this)
{
  const GCSDK::JobType_t *m_pJobType; // rax

  m_pJobType = this->m_pJobType;
  if ( m_pJobType != 0 )
    return m_pJobType->m_pchName;
  else
    return this->m_pchJobName;
}


// GCSDK::CJob::GetPauseReasonDescription  (line 187, @0x0000000003222b00, libserver.so)  // inlines: GetName
// calls: V_sprintf_safe<255ul>, GCSDK::CMessageList::GetMessage, GCSDK::CLock::GetName
// callers: GCSDK::CLock::Dump, GCSDK::CJob::PassLockToJob, GCSDK::CJobMgr::TimeoutJob, GCSDK::CJobMgr::DumpJob, GCSDK::CJobMgr::PassMsgToJob
// strings: "WOL: 0x%p (%s)", "NetMsg: %s", "%s: %s", "NetMsg: Unknown %d"
// globals: GCSDK::CJob::GetPauseReasonDescription(void)::srgchPauseReason, GCSDK::k_prgchJobPauseReason
const char *__fastcall GCSDK::CJob::GetPauseReasonDescription(const GCSDK::CJob *const this)
{
  const char *result; // rax
  GCSDK::EJobPauseReason m_ePauseReason; // ecx
  __int64 v4; // rdx
  GCSDK::CLock *m_pWaitingOnLock; // rdx
  const char *m_pchConstStr; // rcx
  const char *m_pszPauseResourceName; // rcx
  const char *Name; // rax
  const char *pchMsgType; // [rsp+8h] [rbp-18h] BYREF

  result = "undefined";
  m_ePauseReason = this->m_ePauseReason;
  v4 = m_ePauseReason;
  if ( m_ePauseReason > GCSDK::EJobPauseReason::k_EJobPauseReasonManual )
    return result;
  if ( m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonNetworkMsg )
  {
    if ( GCSDK::CMessageList::GetMessage(&GCSDK::g_theMessageList, this->m_unWaitMsgType, &pchMsgType, 255) )
      V_sprintf_safe<255ul>(
        GCSDK::CJob::GetPauseReasonDescription(void)const::srgchPauseReason,
        "NetMsg: %s",
        pchMsgType);
    else
      V_sprintf_safe<255ul>(
        GCSDK::CJob::GetPauseReasonDescription(void)const::srgchPauseReason,
        "NetMsg: Unknown %d",
        this->m_unWaitMsgType);
    return GCSDK::CJob::GetPauseReasonDescription(void)const::srgchPauseReason;
  }
  if ( m_ePauseReason != GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock )
  {
    m_pszPauseResourceName = this->m_pszPauseResourceName;
    result = GCSDK::k_prgchJobPauseReason[v4];
    if ( m_pszPauseResourceName == 0 )
      return result;
    V_sprintf_safe<255ul>(
      GCSDK::CJob::GetPauseReasonDescription(void)const::srgchPauseReason,
      "%s: %s",
      GCSDK::k_prgchJobPauseReason[v4],
      m_pszPauseResourceName);
    return GCSDK::CJob::GetPauseReasonDescription(void)const::srgchPauseReason;
  }
  m_pWaitingOnLock = this->m_pWaitingOnLock;
  if ( m_pWaitingOnLock != 0 )
  {
    m_pchConstStr = m_pWaitingOnLock->m_pchConstStr;
    if ( m_pchConstStr == 0 )
    {
      Name = GCSDK::CLock::GetName(this->m_pWaitingOnLock);
      m_pWaitingOnLock = this->m_pWaitingOnLock;
      m_pchConstStr = Name;
    }
  }
  else
  {
    m_pchConstStr = "null";
    m_pWaitingOnLock = 0;
  }
  V_sprintf_safe<255ul>(
    GCSDK::CJob::GetPauseReasonDescription(void)const::srgchPauseReason,
    "WOL: 0x%p (%s)",
    m_pWaitingOnLock,
    m_pchConstStr);
  return GCSDK::CJob::GetPauseReasonDescription(void)const::srgchPauseReason;
}


// GCSDK::CJob::GetJobMgr  (line 245, @0x00000000032219f0, libserver.so)
GCSDK::CJobMgr *__fastcall GCSDK::CJob::GetJobMgr(GCSDK::CJob *const this)
{
  return this->m_JobMgr;
}


// GCSDK::CJob::StartJobFromNetworkMsg  (line 257, @0x0000000003223170, libserver.so)  // inlines: AddPacketToList, AddRef, AddToTail, CopyConstruct<GCSDK::IMsgNetPacket*>, Element, GrowMemory, SetFromFromMsg, ThreadInterlockedIncrement, operator[]
// calls: GCSDK::CJob::InitCoroutine, GCSDK::CJob::Continue, CUtlMemory<GCSDK::IMsgNetPacket*, int>::Grow
// callers: GCSDK::CJobMgr::BLaunchJobFromNetworkMsg
void __fastcall GCSDK::CJob::StartJobFromNetworkMsg(
        GCSDK::CJob *const this,
        GCSDK::IMsgNetPacket *pNetPacket,
        uint32 nContextMask)
{
  __int64 m_Size; // r12
  int v6; // eax
  GCSDK::IMsgNetPacket **v7; // rax

  this->m_nContextMask = nContextMask;
  _InterlockedAdd(&pNetPacket->m_cRef, 1u);
  m_Size = this->m_vecNetPackets.m_Size;
  v6 = this->m_vecNetPackets.m_Size;
  if ( m_Size == this->m_vecNetPackets.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<GCSDK::IMsgNetPacket *,int>::Grow(&this->m_vecNetPackets.m_Memory, 1);
    v6 = this->m_vecNetPackets.m_Size;
  }
  this->m_vecNetPackets.m_Size = v6 + 1;
  v7 = &this->m_vecNetPackets.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    *v7 = pNetPacket;
  *(this + 8) |= 1u;
  GCSDK::CJob::InitCoroutine(this);
  GCSDK::CJob::Continue(this);
}


// GCSDK::CJob::StartJob  (line 278, @0x0000000003222050, libserver.so)
// calls: GCSDK::CJob::StartJobImmediate, GCSDK::CJob::StartJobDelayed
// callers: CDOTAChallengeSystem::ClientMsg_ChallengeReroll, CSource2GameClients::HLTVClientFullyConnect, CDOTAGamerules::UpdateFanfareCount, CDOTAGamerules::SERVER_RequestPCBangAdditionalItems, PerformDOTASaveGame, CDOTAGamerules::State_Think_WAIT_FOR_PLAYERS_TO_LOAD, CDOTAGamerules::State_Enter_POST_GAME, CIngameEvent_WM2016::GiveTip, CDOTA_PlayerResource::SetLeaverStatus, server_gc_status, CDOTAGCServerSystem::UpdateLiveFantasyStats, CDOTAGCServerSystem::UpdateRealtimeGameState (14 total)
// globals: GCSDK::CJob::s_bStartDefaultJobsDelayed
void __fastcall GCSDK::CJob::StartJob(GCSDK::CJob *const this, void *pvStartParam)
{
  if ( GCSDK::CJob::s_bStartDefaultJobsDelayed )
    GCSDK::CJob::StartJobDelayed(this, pvStartParam);
  else
    GCSDK::CJob::StartJobImmediate(this, pvStartParam);
}


// GCSDK::CJob::StartJobDelayed  (line 290, @0x0000000003221ba0, libserver.so)  // inlines: SetStartParam
// calls: GCSDK::CJobMgr::CheckThreadID, GCSDK::CJob::InitCoroutine, GCSDK::CJobMgr::AddDelayedJobToYieldList
// callers: sv_dota_crash_sentinel_filename_changed, CDOTACustomGameCache::StartInstallingUGC, GCSDK::CJob::StartJobImmediate, GCSDK::CJob::StartJob
// strings: "DelayedStart"
void __fastcall GCSDK::CJob::StartJobDelayed(GCSDK::CJob *const this, void *pvStartParam)
{
  GCSDK::CJobMgr *m_JobMgr; // rdi

  this->m_pvStartParam = pvStartParam;
  GCSDK::CJobMgr::CheckThreadID(this->m_JobMgr);
  GCSDK::CJob::InitCoroutine(this);
  this->m_ePauseReason = GCSDK::EJobPauseReason::k_EJobPauseReasonYield;
  m_JobMgr = this->m_JobMgr;
  this->m_pszPauseResourceName = "DelayedStart";
  GCSDK::CJobMgr::AddDelayedJobToYieldList(m_JobMgr, this);
}


// GCSDK::CJob::StartJobImmediate  (line 310, @0x0000000003222000, libserver.so)  // inlines: SetStartParam
// calls: GCSDK::CJobMgr::CheckThreadID, GCSDK::CJob::InitCoroutine, GCSDK::CJob::Continue, GCSDK::CJob::StartJobDelayed
// callers: GCSDK::CJob::StartJob
// globals: GCSDK::CJob::s_bStartForceAllJobsDelayed
void __fastcall GCSDK::CJob::StartJobImmediate(GCSDK::CJob *const this, void *pvStartParam)
{
  if ( GCSDK::CJob::s_bStartForceAllJobsDelayed )
  {
    GCSDK::CJob::StartJobDelayed(this, pvStartParam);
  }
  else
  {
    this->m_pvStartParam = pvStartParam;
    GCSDK::CJobMgr::CheckThreadID(this->m_JobMgr);
    GCSDK::CJob::InitCoroutine(this);
    GCSDK::CJob::Continue(this);
  }
}


// GCSDK::CJob::InitCoroutine  (line 330, @0x0000000003221a00, libserver.so)  // inlines: EnsureCapacity, GetName, memcpy, name
// calls: memcpy
// callers: GCSDK::CJob::StartJobDelayed, GCSDK::CJob::StartJobImmediate, GCSDK::CJob::StartJobFromNetworkMsg
void __fastcall GCSDK::CJob::InitCoroutine(GCSDK::CJob *const this)
{
  int v2; // r13d
  uint32 m_nGrowSize; // eax
  unsigned __int8 *v4; // rsi
  __int64 v5; // rax
  unsigned __int8 *m_pMemory; // rax
  const GCSDK::JobType_t *m_pJobType; // rdx
  const char *m_pchName; // rdx
  _BYTE *v9; // rax
  unsigned __int8 *v10; // r14

  if ( (*(*g_pMemAlloc + 232LL))(g_pMemAlloc) == 0 )
  {
    if ( this->m_pJobType != 0 )
      return;
    goto LABEL_14;
  }
  v2 = (*(*g_pMemAlloc + 232LL))(g_pMemAlloc);
  if ( v2 <= this->m_memAllocStack.m_nAllocationCount
    || ((m_nGrowSize = this->m_memAllocStack.m_nGrowSize) & 0x40000000) != 0 )
  {
    m_pMemory = this->m_memAllocStack.m_pMemory;
  }
  else
  {
    if ( (m_nGrowSize & 0xC0000000) != 0 )
    {
      v10 = this->m_memAllocStack.m_pMemory;
      m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, v2);
      this->m_memAllocStack.m_pMemory = m_pMemory;
      if ( v10 != 0 )
      {
        memcpy(m_pMemory, v10, this->m_memAllocStack.m_nAllocationCount);
        m_pMemory = this->m_memAllocStack.m_pMemory;
      }
      this->m_memAllocStack.m_nGrowSize &= 0x3FFFFFFFu;
    }
    else
    {
      v4 = this->m_memAllocStack.m_pMemory;
      v5 = *g_pMemAlloc;
      if ( v4 != 0 )
        m_pMemory = (*(v5 + 8))(g_pMemAlloc, v4, v2);
      else
        m_pMemory = (*v5)(g_pMemAlloc, v2);
      this->m_memAllocStack.m_pMemory = m_pMemory;
    }
    this->m_memAllocStack.m_nAllocationCount = v2;
  }
  m_pJobType = this->m_pJobType;
  if ( m_pJobType != 0 )
    m_pchName = m_pJobType->m_pchName;
  else
    m_pchName = this->m_pchJobName;
  (*(*g_pMemAlloc + 256LL))(g_pMemAlloc, m_pMemory, m_pchName, 0);
  if ( this->m_pJobType == 0 )
  {
LABEL_14:
    if ( *this->m_pchJobName == 0 )
    {
      v9 = *(*(this->_vptr_CJob - 1) + 8LL);
      this->m_pchJobName = &v9[*v9 == 42];
    }
  }
}


// GCSDK::CJob::BRunProxy  (line 363, @0x0000000003221930, libserver.so)  // inlines: BYieldingWaitTime, GetArtificialMsgReceiptLatencyMS, GetJobMgr
// calls: GCSDK::CJobMgr::WakeJobsWaitingOnJob, GCSDK::CJob::DeleteJob, GCSDK::CJobMgr::BYieldingWaitTime
void __fastcall GCSDK::CJob::BRunProxy(void *pvThis)
{
  GCSDK::CJobMgr *v2; // rdi
  int v3; // edx
  char v4; // al
  bool v5; // zf

  if ( (*(pvThis + 8) & 1) != 0 )
  {
    v2 = *(pvThis + 29);
    v3 = *(v2 + 262);
    if ( v3 != 0 )
      GCSDK::CJobMgr::BYieldingWaitTime(v2, pvThis, 1000 * v3);
    v4 = (*(*pvThis + 24LL))(pvThis, **(pvThis + 31));
  }
  else
  {
    v4 = (*(*pvThis + 16LL))(pvThis, *(pvThis + 4));
  }
  v5 = *(pvThis + 27) == 0;
  *(pvThis + 40) = (v4 ^ 1) & 1 | *(pvThis + 40) & 0xFE;
  if ( !v5 )
    GCSDK::CJobMgr::WakeJobsWaitingOnJob(*(pvThis + 29), pvThis);
  GCSDK::CJob::DeleteJob(pvThis);
}


// GCSDK::CJob::AddPacketToList  (line 404, @0x0000000003223200, libserver.so)  // inlines: AddRef, AddToTail, CopyConstruct<GCSDK::IMsgNetPacket*>, Element, GrowMemory, ThreadInterlockedIncrement, operator[]
// calls: CUtlMemory<GCSDK::IMsgNetPacket*, int>::Grow
// callers: GCSDK::CJobMgr::PassMsgToJob
void __fastcall GCSDK::CJob::AddPacketToList(GCSDK::CJob *const this, GCSDK::IMsgNetPacket *pNetPacket)
{
  __int64 m_Size; // r12
  int v5; // eax
  GCSDK::IMsgNetPacket **v6; // rax

  _InterlockedAdd(&pNetPacket->m_cRef, 1u);
  m_Size = this->m_vecNetPackets.m_Size;
  v5 = this->m_vecNetPackets.m_Size;
  if ( m_Size == this->m_vecNetPackets.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<GCSDK::IMsgNetPacket *,int>::Grow(&this->m_vecNetPackets.m_Memory, 1);
    v5 = this->m_vecNetPackets.m_Size;
  }
  this->m_vecNetPackets.m_Size = v5 + 1;
  v6 = &this->m_vecNetPackets.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pNetPacket;
}


// GCSDK::CJob::ReleaseNetPacket  (line 416, @0x0000000003221bf0, libserver.so)  // inlines: Element, Find, Release, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall GCSDK::CJob::ReleaseNetPacket(GCSDK::CJob *const this, GCSDK::IMsgNetPacket *pNetPacket)
{
  int m_Size; // ecx
  GCSDK::IMsgNetPacket **m_pMemory; // rdx
  GCSDK::IMsgNetPacket **v5; // rdx
  int v6; // eax
  int v7; // r12d
  int v8; // edx
  GCSDK::IMsgNetPacket **v9; // rsi

  m_Size = this->m_vecNetPackets.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_vecNetPackets.m_Memory.m_pMemory;
    if ( *m_pMemory == pNetPacket )
    {
      v7 = 0;
LABEL_9:
      if ( _InterlockedSub(&pNetPacket->m_cRef, 1u) == 0 )
        (*(pNetPacket->_vptr_CRefCount + 2))(pNetPacket);
      v8 = this->m_vecNetPackets.m_Size;
      if ( v8 - v7 - 1 > 0 )
      {
        v9 = &this->m_vecNetPackets.m_Memory.m_pMemory[v7 + 1];
        memmove(v9 - 1, v9, 8LL * (this->m_vecNetPackets.m_Size - v7 - 1));
        v8 = this->m_vecNetPackets.m_Size;
      }
      this->m_vecNetPackets.m_Size = v8 - 1;
    }
    else
    {
      v5 = m_pMemory + 1;
      v6 = 0;
      while ( ++v6 != m_Size )
      {
        if ( *v5++ == pNetPacket )
        {
          if ( v6 == -1 )
            return;
          v7 = v6;
          goto LABEL_9;
        }
      }
    }
  }
}


// GCSDK::CJob::Continue  (line 434, @0x0000000003221cb0, libserver.so)  // inlines: Add, BJobNeedsToHeartbeat, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetName, GetTimebaseRegister, Heartbeat, InTargetThread, PLAT_CPU_TIME, Sample, Start, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CJobTime::SetToJobTime, GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::CJobTime::SetFromJobTime, ThreadGetCurrentId, Coroutine_Continue, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, std::terminate(void), CVProfile::ExitScope
// callers: GCSDK::CJob::StartJobImmediate, GCSDK::CJob::StartJobFromNetworkMsg, GCSDK::CJobMgr::ContinueManualJob, GCSDK::CJobMgr::TimeoutJob, GCSDK::CJobMgr::BResumeSleepingJobs, GCSDK::CJobMgr::BResumeYieldingJobsFromList, GCSDK::CJobMgr::BRouteWorkItemCompletedInternal
// strings: "Jobs/Coroutines"
// globals: GCSDK::g_pJobCur
void __fastcall GCSDK::CJob::Continue(GCSDK::CJob *const this)
{
  GCSDK::CJob *v2; // rax
  GCSDK::CJobTime *p_m_STimeSwitched; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rdi
  const GCSDK::JobType_t *m_pJobType; // rax
  unsigned __int64 v8; // r15
  uint64 m_numTimeBaseTicks; // rcx
  __int64 v10; // rdi
  char v11; // r15
  uint64 v12; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v15; // rax
  char *m_pchName; // [rsp+0h] [rbp-40h]
  char *v17; // [rsp+0h] [rbp-40h]
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-38h]
  unsigned __int64 v19; // [rsp+8h] [rbp-38h]

  v2 = GCSDK::g_pJobCur;
  GCSDK::g_pJobCur = this;
  this->m_pJobPrev = v2;
  p_m_STimeSwitched = &this->m_STimeSwitched;
  p_m_STimeSwitched[2].m_lTime = __rdtsc();
  GCSDK::CJobTime::SetToJobTime(p_m_STimeSwitched);
  if ( GCSDK::CJobTime::CServerMicroSecsPassed(&this->m_STimeNextHeartbeat) >= 0 )
    GCSDK::CJobTime::SetFromJobTime(&this->m_STimeNextHeartbeat, 5000000);
  ++*(this->m_JobMgr + 206);
  this->m_ePauseReason = GCSDK::EJobPauseReason::k_EJobPauseReasonNone;
  v4 = g_pMemAlloc;
  this->m_pszPauseResourceName = 0;
  v5 = *(this->m_JobMgr + 129);
  (*(*v4 + 240LL))(v4, v5);
  (*(*g_pMemAlloc + 248LL))(g_pMemAlloc, this->m_memAllocStack.m_pMemory);
  if ( g_VProfCurrentProfile.m_enabled != 0 )
  {
    m_pJobType = this->m_pJobType;
    if ( m_pJobType != 0 )
      m_pchName = m_pJobType->m_pchName;
    else
      m_pchName = this->m_pchJobName;
    v8 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(v6) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pchName != m_pCurNode->m_pszName )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, m_pchName, 0, "Jobs/Coroutines", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v15 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v15->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v8 + __rdtsc();
    v11 = Coroutine_Continue(this->m_hCoroutine, "");
    v19 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v17 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v17 == ThreadGetCurrentId(v10) )
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
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v12 - v19 + __rdtsc();
  }
  else
  {
    v11 = Coroutine_Continue(this->m_hCoroutine, "");
  }
  if ( v11 != 0 )
    (*(*g_pMemAlloc + 240LL))(g_pMemAlloc, this->m_memAllocStack.m_pMemory);
  (*(*g_pMemAlloc + 248LL))(g_pMemAlloc, v5);
}


// GCSDK::CJob::Debug  (line 501, @0x0000000003222070, libserver.so)
// calls: Coroutine_DebugBreak
void __fastcall GCSDK::CJob::Debug(GCSDK::CJob *const this)
{
  Coroutine_DebugBreak(this->m_hCoroutine, 0);
}


// GCSDK::CJob::BeginPause  (line 518, @0x0000000003222080, libserver.so)
// callers: GCSDK::CJobMgr::MarkJobPause
void __fastcall GCSDK::CJob::BeginPause(
        GCSDK::CJob *const this,
        GCSDK::EJobPauseReason eReason,
        const char *pszResourceName)
{
  this->m_ePauseReason = eReason;
  if ( pszResourceName != 0 )
    this->m_pszPauseResourceName = pszResourceName;
}


// GCSDK::CJob::SetWaitingForJob  (line 526, @0x00000000032220a0, libserver.so)
// callers: GCSDK::CJobMgr::BYieldingWaitForJob
void __fastcall GCSDK::CJob::SetWaitingForJob(GCSDK::CJob *const this, GCSDK::CJob *pJobToWaitFor)
{
  this->m_jobIDWaitingOn = pJobToWaitFor->m_JobID;
  this->m_pJobWaitingOnNext = pJobToWaitFor->m_pFirstJobWaitingOnThis;
  pJobToWaitFor->m_pFirstJobWaitingOnThis = this;
}


// GCSDK::CJob::YldPauseCurJob  (line 542, @0x0000000003222140, libserver.so)  // inlines: BeginPause
// calls: GCSDK::CJob::YldPauseCurJob
void __fastcall GCSDK::CJob::YldPauseCurJob(
        GCSDK::CJob *const this,
        GCSDK::EJobPauseReason eReason,
        const char *pszResourceName)
{
  this->m_ePauseReason = eReason;
  if ( pszResourceName != 0 )
    this->m_pszPauseResourceName = pszResourceName;
  GCSDK::CJob::YldPauseCurJob(this);
}


// GCSDK::CJob::YldPauseCurJob  (line 551, @0x00000000032220d0, libserver.so)  // inlines: End, GetMicroseconds64, PLAT_CPU_TIME, Plat_TickDiffMicroSec, Sample, operator+=
// calls: Plat_GetCPUFrequency, Coroutine_YieldToMain
// callers: GCSDK::CJob::YldPauseCurJob, GCSDK::CJob::_BYieldingAcquireLock, GCSDK::CJobMgr::YldPauseCurJob
// globals: GCSDK::g_pJobCur
void __fastcall GCSDK::CJob::YldPauseCurJob(GCSDK::CJob *const this)
{
  unsigned __int64 v2; // rax
  uint64 v3; // rdx
  unsigned __int64 CPUFrequency; // rcx
  __int64 v5; // rdi
  uint64 m_Int64; // rtt
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rtt

  GCSDK::g_pJobCur = this->m_pJobPrev;
  v2 = __rdtsc();
  v3 = (v2 | (HIDWORD(v2) << 32)) - this->m_FastTimerDelta.m_Duration.m_Int64;
  this->m_cyclecountTotal.m_Int64 += v3;
  this->m_FastTimerDelta.m_Duration.m_Int64 = v3;
  CPUFrequency = Plat_GetCPUFrequency();
  m_Int64 = this->m_FastTimerDelta.m_Duration.m_Int64;
  v7 = 1000000 * (m_Int64 / CPUFrequency);
  v9 = 1000000 * (m_Int64 % CPUFrequency);
  v8 = v9 % CPUFrequency;
  if ( v7 + v9 / CPUFrequency > 0xC350 )
    *&this->m_flags.m_bits |= 0x20u;
  Coroutine_YieldToMain(v5, v7, v8);
}


// GCSDK::CJob::GenerateAssert  (line 571, @0x0000000003222160, libserver.so)
void __fastcall GCSDK::CJob::GenerateAssert(GCSDK::CJob *const this, const char *pchMsg)
{
  ;
}


// GCSDK::CJob::BYieldingWaitForMsg  (line 595, @0x0000000003222170, libserver.so)  // inlines: BYieldingWaitTime, GetArtificialMsgReceiptLatencyMS, GetJobMgr, Tail, operator[]
// calls: GCSDK::CJobMgr::BYieldingWaitForMsg, GCSDK::CJobMgr::BYieldingWaitTime
// callers: GCSDK::CGCClient::YldAwaitMsgReply, GCSDK::CJob::BYieldingWaitForMsg
bool __fastcall GCSDK::CJob::BYieldingWaitForMsg(GCSDK::CJob *const this, GCSDK::IMsgNetPacket **ppNetPacket)
{
  bool result; // al
  bool v5; // r12
  GCSDK::CJobMgr *m_JobMgr; // rdi
  int v7; // edx

  *ppNetPacket = 0;
  result = GCSDK::CJobMgr::BYieldingWaitForMsg(this->m_JobMgr, this);
  v5 = result;
  if ( result )
  {
    *ppNetPacket = this->m_vecNetPackets.m_Memory.m_pMemory[this->m_vecNetPackets.m_Size - 1];
    m_JobMgr = this->m_JobMgr;
    v7 = *(m_JobMgr + 262);
    if ( v7 != 0 )
    {
      GCSDK::CJobMgr::BYieldingWaitTime(m_JobMgr, this, 1000 * v7);
      return v5;
    }
  }
  return result;
}


// GCSDK::CJob::BYieldingWaitForMsg  (line 624, @0x0000000003222200, libserver.so)  // inlines: PubVarData, SetPacket
// calls: GCSDK::CJob::BYieldingWaitForMsg
bool __fastcall GCSDK::CJob::BYieldingWaitForMsg(
        GCSDK::CJob *const this,
        GCSDK::CGCMsgBase *pMsg,
        GCSDK::MsgType_t eMsg)
{
  bool result; // al
  GCSDK::IMsgNetPacket *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // rax
  GCSDK::IMsgNetPacket *pNetPacket; // [rsp+8h] [rbp-28h] BYREF

  this->m_unWaitMsgType = eMsg;
  pNetPacket = 0;
  result = GCSDK::CJob::BYieldingWaitForMsg(this, &pNetPacket);
  if ( result )
  {
    v6 = pNetPacket;
    v7 = (*(pNetPacket->_vptr_CRefCount + 5))(pNetPacket);
    v8 = *(pMsg + 7);
    *(pMsg + 1) = v7;
    *(pMsg + 2) = v8 + v7;
    v9 = (*(v6->_vptr_CRefCount + 6))(v6);
    v10 = *(pMsg + 8);
    *(pMsg + 36) = 0;
    v11 = *(pMsg + 7);
    *(pMsg + 6) = v9;
    v12 = *(pMsg + 1);
    *(pMsg + 5) = v12 + v10 + v11;
    return eMsg == *v12;
  }
  return result;
}


// GCSDK::CJob::BYieldingWaitForMsg  (line 647, @0x0000000003222280, libserver.so)  // inlines: GetEMsg, GetName
// calls: GCSDK::CJob::BYieldingWaitForMsg, GCSDK::CProtoBufMsgBase::InitFromPacketSafe, GCSDK::EmitError
// strings: "Job %s was waiting for a response and expected msg %u but received %u\n", "Job %s received a malformed message as a response while waiting for an expected message o
bool __fastcall GCSDK::CJob::BYieldingWaitForMsg(
        GCSDK::CJob *const this,
        GCSDK::CProtoBufMsgBase *pMsg,
        GCSDK::MsgType_t eMsg)
{
  bool v6; // bl
  GCSDK::MsgType_t v8; // r8d
  const GCSDK::JobType_t *m_pJobType; // rax
  const char *m_pchName; // rdx
  const GCSDK::JobType_t *v11; // rax
  const char *m_pchJobName; // rdx
  GCSDK::IMsgNetPacket *pNetPacket; // [rsp+8h] [rbp-28h] BYREF

  this->m_unWaitMsgType = eMsg;
  pNetPacket = 0;
  v6 = GCSDK::CJob::BYieldingWaitForMsg(this, &pNetPacket);
  if ( !v6 )
    return v6;
  v6 = GCSDK::CProtoBufMsgBase::InitFromPacketSafe(pMsg, pNetPacket);
  if ( v6 )
  {
    v8 = pMsg->m_eMsg & 0x7FFFFFFF;
    if ( eMsg == v8 )
      return v6;
    m_pJobType = this->m_pJobType;
    if ( m_pJobType != 0 )
      m_pchName = m_pJobType->m_pchName;
    else
      m_pchName = this->m_pchJobName;
    GCSDK::EmitError(
      &GCSDK::SPEW_GC,
      "Job %s was waiting for a response and expected msg %u but received %u\n",
      m_pchName,
      eMsg,
      v8);
    return 0;
  }
  else
  {
    v11 = this->m_pJobType;
    if ( v11 != 0 )
      m_pchJobName = v11->m_pchName;
    else
      m_pchJobName = this->m_pchJobName;
    GCSDK::EmitError(
      &GCSDK::SPEW_GC,
      "Job %s received a malformed message as a response while waiting for an expected message of %u\n",
      m_pchJobName,
      eMsg);
    return v6;
  }
}


// GCSDK::CJob::BYieldingWaitForWorkItem  (line 718, @0x0000000003222380, libserver.so)
// calls: GCSDK::CJobMgr::BYieldingWaitForWorkItem
bool __fastcall GCSDK::CJob::BYieldingWaitForWorkItem(
        GCSDK::CJob *const this,
        const char *pszWorkItemName,
        JobID_t nJobID)
{
  return GCSDK::CJobMgr::BYieldingWaitForWorkItem(this->m_JobMgr, this, pszWorkItemName, nJobID);
}


// GCSDK::CJobThreadFuncWorkItem::~CJobThreadFuncWorkItem  (line 730, @0x0000000003223f70, libserver.so)  // inlines: ~CRefCount, ~CWorkItem
void __fastcall GCSDK::CJobThreadFuncWorkItem::~CJobThreadFuncWorkItem(GCSDK::CJobThreadFuncWorkItem *const this)
{
  this->_vptr_CRefCount = off_47D0430;
}


// GCSDK::CJobThreadFuncWorkItem::~CJobThreadFuncWorkItem  (line 730, @0x0000000003223f80, libserver.so)  // inlines: ~CJobThreadFuncWorkItem, ~CRefCount, ~CWorkItem
// calls: operator delete
void __fastcall GCSDK::CJobThreadFuncWorkItem::~CJobThreadFuncWorkItem(GCSDK::CJobThreadFuncWorkItem *const this)
{
  this->_vptr_CRefCount = off_47D0430;
  operator delete(this);
}


// GCSDK::CJobThreadFuncWorkItem::GetDispatchCompletedName  (line 733, @0x0000000003223f00, libserver.so)
// strings: "CJobThreadFuncWorkItem::DispatchCompleted"
const char *__fastcall GCSDK::CJobThreadFuncWorkItem::GetDispatchCompletedName(
        const GCSDK::CJobThreadFuncWorkItem *const this)
{
  return "CJobThreadFuncWorkItem::DispatchCompleted";
}


// GCSDK::CJobThreadFuncWorkItem::GetThreadProcessName  (line 733, @0x0000000003223f10, libserver.so)
// strings: "CJobThreadFuncWorkItem::ThreadProcess"
const char *__fastcall GCSDK::CJobThreadFuncWorkItem::GetThreadProcessName(
        const GCSDK::CJobThreadFuncWorkItem *const this)
{
  return "CJobThreadFuncWorkItem::ThreadProcess";
}


// GCSDK::CJobThreadFuncWorkItem::ThreadProcess  (line 741, @0x0000000003223f20, libserver.so)
bool __fastcall GCSDK::CJobThreadFuncWorkItem::ThreadProcess(
        GCSDK::CJobThreadFuncWorkItem *const this,
        GCSDK::CWorkThread *pThread)
{
  void (*pfn)(GCSDK::CJob *); // rax
  _QWORD *v4; // rdi
  CFunctor *m_pFunctor; // rdi

  pfn = this->m_pJobThreadFunc.__pfn;
  if ( pfn != 0 )
  {
    v4 = (&this->m_pJob->_vptr_CJob + this->m_pJobThreadFunc.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v4 - 1);
    (pfn)(v4, pThread);
  }
  m_pFunctor = this->m_pFunctor;
  if ( m_pFunctor != 0 )
    (*(m_pFunctor->_vptr_IRefCounted + 2))(m_pFunctor, pThread);
  return 1;
}


// GCSDK::CJob::BYieldingWaitForThreadFuncWorkItem  (line 761, @0x00000000032223a0, libserver.so)
// calls: GCSDK::CJobMgr::AddThreadedJobWorkItem, GCSDK::CJobMgr::BYieldingWaitForWorkItem
// callers: GCSDK::CJob::BYieldingWaitForThreadFunc
bool __fastcall GCSDK::CJob::BYieldingWaitForThreadFuncWorkItem(GCSDK::CJob *const this, GCSDK::CWorkItem *pItem)
{
  bool result; // al

  this->m_pWaitingOnWorkItem = pItem;
  GCSDK::CJobMgr::AddThreadedJobWorkItem(this->m_JobMgr, pItem);
  result = GCSDK::CJobMgr::BYieldingWaitForWorkItem(this->m_JobMgr, this, 0, 0xFFFFFFFFFFFFFFFFLL);
  this->m_pWaitingOnWorkItem = 0;
  return result;
}


// GCSDK::CJob::BYieldingWaitForThreadFunc  (line 785, @0x00000000032223f0, libserver.so)  // inlines: CCycleCount, CJobThreadFuncWorkItem, CRefCount, CWorkItem, Init, Release, SafeRelease<CFunctor*>, SetLTime, ~CRefCount
// calls: operator new, GCSDK::CJobTime::CJobTime, GCSDK::CJobTime::SetToJobTime, GCSDK::CJob::BYieldingWaitForThreadFuncWorkItem, operator delete, _Unwind_Resume
bool __fastcall GCSDK::CJob::BYieldingWaitForThreadFunc(GCSDK::CJob *const this, CFunctor *jobFunctor)
{
  GCSDK::CJobTime *v4; // rax
  JobID_t m_JobID; // r15
  GCSDK::CWorkItem *v6; // rbx
  bool v7; // r13

  v4 = operator new(0x60u);
  m_JobID = this->m_JobID;
  v6 = v4;
  LODWORD(v4[1].m_lTime) = 1;
  v4[2].m_lTime = 0;
  v4[3].m_lTime = 0;
  LOBYTE(v4[4].m_lTime) = 0;
  BYTE1(v4[4].m_lTime) = 0;
  v4->m_lTime = off_47D0D10;
  BYTE2(v4[4].m_lTime) = 0;
  GCSDK::CJobTime::CJobTime(v4 + 5);
  GCSDK::CJobTime::CJobTime(&v6->m_jobtimeQueued);
  v6->m_JobID = m_JobID;
  v6->m_jobtimeTimeout.m_lTime = 0;
  GCSDK::CJobTime::SetToJobTime(&v6->m_jobtimeQueued);
  v6[1]._vptr_CRefCount = this;
  v6->_vptr_CRefCount = off_47D0630;
  *&v6[1].m_cRef = 0;
  v6[1].m_ulSequenceNumber = 0;
  v6[1].m_CycleCount.m_Int64 = jobFunctor;
  v7 = GCSDK::CJob::BYieldingWaitForThreadFuncWorkItem(this, v6);
  if ( jobFunctor != 0 )
    (*(jobFunctor->_vptr_IRefCounted + 1))(jobFunctor);
  if ( _InterlockedSub(&v6->m_cRef, 1u) == 0 )
    (*(v6->_vptr_CRefCount + 2))(v6);
  return v7;
}


// GCSDK::CJob::CHeartbeatsBeforeTimeout  (line 804, @0x0000000003221710, libserver.so)
uint32 __fastcall GCSDK::CJob::CHeartbeatsBeforeTimeout(GCSDK::CJob *const this)
{
  return 4;
}


// GCSDK::CJob::Heartbeat  (line 815, @0x00000000032224f0, libserver.so)
// calls: GCSDK::CJobTime::SetFromJobTime
// callers: GCSDK::CJobMgr::BResumeSleepingJobs, GCSDK::CJobMgr::CheckForJobTimeouts
void __fastcall GCSDK::CJob::Heartbeat(GCSDK::CJob *const this)
{
  GCSDK::CJobTime::SetFromJobTime(&this->m_STimeNextHeartbeat, 5000000);
}


// GCSDK::CJob::BYieldingWaitTime  (line 826, @0x0000000003222510, libserver.so)
// calls: GCSDK::CJobMgr::BYieldingWaitTime
// callers: CGCTournamentItemEventResponse::BYieldingRunJobFromMsg, CGCClientJobSetLeaverDetected::BYieldingRunJob, CGCSubmitGameserverCrashReportJob::BYieldingRunGCJob, CGCClientJobUploadMatchStats::BYieldingGetPermission, CInstallUGCJob::YldAcquireLock, CInstallUGCJob::BYieldingRunGCJob
bool __fastcall GCSDK::CJob::BYieldingWaitTime(GCSDK::CJob *const this, uint32 cMicrosecondsToSleep)
{
  return GCSDK::CJobMgr::BYieldingWaitTime(this->m_JobMgr, this, cMicrosecondsToSleep);
}


// GCSDK::CJob::BYield  (line 836, @0x0000000003222530, libserver.so)
// calls: GCSDK::CJobMgr::BYield
bool __fastcall GCSDK::CJob::BYield(GCSDK::CJob *const this)
{
  return GCSDK::CJobMgr::BYield(this->m_JobMgr, this);
}


// GCSDK::CJob::BYieldIfNeeded  (line 848, @0x0000000003222550, libserver.so)
// calls: GCSDK::CJobMgr::BYieldIfNeeded
bool __fastcall GCSDK::CJob::BYieldIfNeeded(GCSDK::CJob *const this, bool *pbYielded)
{
  if ( pbYielded != 0 )
    *pbYielded = 0;
  return GCSDK::CJobMgr::BYieldIfNeeded(this->m_JobMgr, this, pbYielded);
}


// GCSDK::CJob::BYieldingWaitOneFrame  (line 866, @0x0000000003222580, libserver.so)  // inlines: BYieldingWaitTime
// calls: GCSDK::CJobMgr::BYieldingWaitTime
// callers: GCSDK::CGCClientJob::BYieldingRunJobFromMsg, GCSDK::CGCClientJob::BYieldingRunJob, CGCSubmitGameserverCrashReportJob::BYieldingRunGCJob, CGCUpdateItemSchema::BYieldingRunGCJob
bool __fastcall GCSDK::CJob::BYieldingWaitOneFrame(GCSDK::CJob *const this)
{
  return GCSDK::CJobMgr::BYieldingWaitTime(this->m_JobMgr, this, 1u);
}


// GCSDK::CJob::BYieldingWaitForJob  (line 875, @0x00000000032225a0, libserver.so)
// calls: GCSDK::CJobMgr::BYieldingWaitForJob
bool __fastcall GCSDK::CJob::BYieldingWaitForJob(GCSDK::CJob *const this, JobID_t jobToWaitFor)
{
  return GCSDK::CJobMgr::BYieldingWaitForJob(this->m_JobMgr, this, jobToWaitFor);
}


// GCSDK::CJob::BYieldingWaitForJobs  (line 885, @0x00000000032225c0, libserver.so)  // inlines: BYieldingWaitForJob
// calls: GCSDK::CJobMgr::BYieldingWaitForJob
bool __fastcall GCSDK::CJob::BYieldingWaitForJobs(
        GCSDK::CJob *const this,
        const CUtlVector<long long unsigned int,CUtlMemory<long long unsigned int,int> > *const vecJobsToWaitFor)
{
  __int64 i; // rbx

  for ( i = 0; i < vecJobsToWaitFor->m_Size; ++i )
    GCSDK::CJobMgr::BYieldingWaitForJob(this->m_JobMgr, this, vecJobsToWaitFor->m_Memory.m_pMemory[i]);
  return 1;
}


// GCSDK::CJob::_BYieldingAcquireLock  (line 902, @0x0000000003223310, libserver.so)  // inlines: AddJobToNotifyOnLockRelease, AddToWaitingQueue, BeginPause, GetName, IncrementReference, YldPauseCurJob
// calls: GCSDK::CJob::YldPauseCurJob, CUtlVectorBase<GCSDK::CLock*, CUtlMemoryFixedGrowable<GCSDK::CLock*, 2ul, int> >::Find, GCSDK::EmitWarning, GCSDK::CLock::GetName, GCSDK::CJob::_SetLock
// callers: GCSDK::CGCAutoLock::_BYieldingAcquireLock
// strings: "Failed to get lock %s at %s(%d) after waiting in %s\n", "(null)", "m_vecLocks.Count(): %d this: 0x%p, pLock: 0x%p pLock->GetJobLocking(): %s (0x%p)\n", "m_vecLocks[%d]: %s (0x%p) %s(%d)\n", "m_vecLocks.Count(): %d, this: 0x%p, pLock->GetJobLocking(): %s (0x%p)\n"
bool __fastcall GCSDK::CJob::_BYieldingAcquireLock(
        GCSDK::CJob *const this,
        GCSDK::CLock *pLock,
        const char *filename,
        int line)
{
  int m_Size; // r11d
  int16 m_nsLockType; // r12
  __int64 i; // rax
  GCSDK::CLock *v9; // r10
  GCSDK::CJob *m_pJobWaitingQueueTail; // rsi
  int v12; // eax
  int v13; // ecx
  const char *v14; // rdx
  const GCSDK::JobType_t *m_pJobType; // rax
  const char *m_pchName; // rbx
  const char *m_pchConstStr; // rax
  int v18; // ecx
  GCSDK::CJob *m_pJob; // rax
  const char *m_pchJobName; // rdx
  const char **p_m_pchName; // rdx
  __int64 v22; // r13
  int v23; // ebx
  GCSDK::CLock **m_pMemory; // rax
  const GCSDK::CLock *v25; // r9
  const char *v26; // r8
  int m_line; // edx
  const char *m_pFilename; // r15
  int v29; // ecx
  const char **v30; // rdx
  const char *v31; // r9
  const char *Name; // rax
  int filenamec; // [rsp+18h] [rbp-48h]
  int filenameb; // [rsp+18h] [rbp-48h]
  const GCSDK::CLock *linec; // [rsp+20h] [rbp-40h]
  const char *lineb; // [rsp+20h] [rbp-40h]
  GCSDK::CLock *pLocka; // [rsp+28h] [rbp-38h] BYREF

  pLocka = pLock;
  if ( pLock->m_pJob == this )
  {
LABEL_32:
    ++pLock->m_nRefCount;
    return 1;
  }
  m_Size = this->m_vecLocks.m_Size;
  if ( m_Size > 0 )
  {
    m_nsLockType = pLock->m_nsLockType;
    for ( i = 0; m_Size > i; ++i )
    {
      v9 = this->m_vecLocks.m_Memory.m_pMemory[i];
      if ( v9->m_nsLockType == m_nsLockType )
      {
        if ( v9->m_unLockSubType <= pLock->m_unLockSubType )
          return 0;
      }
      else if ( v9->m_nsLockType < m_nsLockType )
      {
        return 0;
      }
    }
  }
  if ( this->m_pWaitingOnLock != 0 )
    return 0;
  ++this->m_cLocksAttempted;
  if ( pLock->m_pJob != 0 )
  {
    m_pJobWaitingQueueTail = pLock->m_pJobWaitingQueueTail;
    if ( m_pJobWaitingQueueTail != 0 )
    {
      while ( m_pJobWaitingQueueTail->m_pJobToNotifyOnLockRelease != 0 )
        m_pJobWaitingQueueTail = m_pJobWaitingQueueTail->m_pJobToNotifyOnLockRelease;
      m_pJobWaitingQueueTail->m_pJobToNotifyOnLockRelease = this;
    }
    else
    {
      pLock->m_pJobToNotifyOnLockRelease = this;
    }
    ++pLock->m_nWaitingCount;
    pLock->m_pJobWaitingQueueTail = this;
    this->m_pWaitingOnLockFilename = filename;
    this->m_waitingOnLockLine = line;
    ++this->m_cLocksWaitedFor;
    this->m_pWaitingOnLock = pLock;
    this->m_ePauseReason = GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock;
    GCSDK::CJob::YldPauseCurJob(this);
    this->m_pWaitingOnLock = 0;
    v12 = CUtlVectorBase<GCSDK::CLock *,CUtlMemoryFixedGrowable<GCSDK::CLock *,2ul,int>>::Find(
            &this->m_vecLocks,
            &pLocka);
    v13 = line;
    v14 = filename;
    if ( v12 == -1 || this != pLock->m_pJob )
    {
      m_pJobType = this->m_pJobType;
      *&this->m_flags.m_bits |= 2u;
      if ( m_pJobType != 0 )
        m_pchName = m_pJobType->m_pchName;
      else
        m_pchName = this->m_pchJobName;
      m_pchConstStr = pLock->m_pchConstStr;
      if ( m_pchConstStr == 0 )
      {
        filenameb = line;
        lineb = v14;
        m_pchConstStr = GCSDK::CLock::GetName(pLock);
        v13 = filenameb;
        v14 = lineb;
      }
      GCSDK::EmitWarning(
        &GCSDK::SPEW_JOB,
        1,
        "Failed to get lock %s at %s(%d) after waiting in %s\n",
        m_pchConstStr,
        v14,
        v13,
        m_pchName);
      v18 = this->m_vecLocks.m_Size;
      m_pJob = pLock->m_pJob;
      if ( v18 != 0 )
      {
        m_pchJobName = "(null)";
        if ( m_pJob != 0 )
        {
          p_m_pchName = &m_pJob->m_pJobType->m_pchName;
          if ( p_m_pchName != 0 )
            m_pchJobName = *p_m_pchName;
          else
            m_pchJobName = m_pJob->m_pchJobName;
        }
        GCSDK::EmitWarning(
          &GCSDK::SPEW_JOB,
          1,
          "m_vecLocks.Count(): %d this: 0x%p, pLock: 0x%p pLock->GetJobLocking(): %s (0x%p)\n",
          v18,
          this,
          pLock,
          m_pchJobName,
          pLock->m_pJob);
        if ( this->m_vecLocks.m_Size > 0 )
        {
          v22 = 0;
          v23 = 0;
          do
          {
            m_pMemory = this->m_vecLocks.m_Memory.m_pMemory;
            v25 = m_pMemory[v22];
            v26 = v25->m_pchConstStr;
            m_line = v25->m_line;
            m_pFilename = v25->m_pFilename;
            if ( v26 == 0 )
            {
              filenamec = v25->m_line;
              linec = m_pMemory[v22];
              Name = GCSDK::CLock::GetName(linec);
              m_line = filenamec;
              v26 = Name;
              v25 = linec;
            }
            v29 = v23++;
            ++v22;
            GCSDK::EmitWarning(
              &GCSDK::SPEW_JOB,
              1,
              "m_vecLocks[%d]: %s (0x%p) %s(%d)\n",
              v29,
              v26,
              v25,
              m_pFilename,
              m_line);
          }
          while ( this->m_vecLocks.m_Size > v23 );
        }
      }
      else
      {
        if ( m_pJob != 0 )
        {
          v30 = &m_pJob->m_pJobType->m_pchName;
          if ( v30 != 0 )
            v31 = *v30;
          else
            v31 = m_pJob->m_pchJobName;
        }
        else
        {
          v31 = "(null)";
        }
        GCSDK::EmitWarning(
          &GCSDK::SPEW_JOB,
          1,
          "m_vecLocks.Count(): %d, this: 0x%p, pLock->GetJobLocking(): %s (0x%p)\n",
          0,
          this,
          v31,
          pLock->m_pJob);
      }
      return 0;
    }
    goto LABEL_32;
  }
  ++pLock->m_nRefCount;
  GCSDK::CJob::_SetLock(this, pLock, filename, line);
  return 1;
}


// GCSDK::CJob::_BAcquireLockImmediate  (line 1012, @0x0000000003223630, libserver.so)  // inlines: IncrementReference
// calls: GCSDK::CJob::_SetLock
// callers: GCSDK::CGCAutoLock::_BAcquireLockImmediate
bool __fastcall GCSDK::CJob::_BAcquireLockImmediate(
        GCSDK::CJob *const this,
        GCSDK::CLock *pLock,
        const char *filename,
        int line)
{
  bool result; // al

  ++this->m_cLocksAttempted;
  if ( this == pLock->m_pJob )
  {
    ++pLock->m_nRefCount;
    return 1;
  }
  else
  {
    result = 0;
    if ( pLock->m_pJob == 0 )
    {
      ++pLock->m_nRefCount;
      GCSDK::CJob::_SetLock(this, pLock, filename, line);
      return 1;
    }
  }
  return result;
}


// GCSDK::CJob::_ReleaseLock  (line 1042, @0x00000000032237e0, libserver.so)  // inlines: ClearReference, DecrementReference, GetName
// calls: GCSDK::EmitError, GCSDK::CJob::PassLockToJob, GCSDK::CLock::GetName, GCSDK::CJob::UnsetLock
// callers: GCSDK::CJob::ReleaseLocks, GCSDK::CGCAutoLock::Release
// strings: "[none]", "Job %s trying to release lock %s at %s(%d) though the lock is held by %s\n"
void __fastcall GCSDK::CJob::_ReleaseLock(
        GCSDK::CJob *const this,
        GCSDK::CLock *pLock,
        bool bForce,
        const char *filename,
        int line)
{
  GCSDK::CJob *m_pJob; // r12
  const char *m_pchJobName; // r14
  const char **p_m_pchName; // rax
  const char *m_pchConstStr; // rax
  const GCSDK::JobType_t *m_pJobType; // rdx
  const char *m_pchName; // rdx
  GCSDK::CJob *m_pJobToNotifyOnLockRelease; // rsi
  int32 m_nRefCount; // eax
  int32 v15; // eax
  int linea; // [rsp+14h] [rbp-2Ch]
  const char *filenamea; // [rsp+18h] [rbp-28h]

  if ( pLock != 0 )
  {
    m_pJob = pLock->m_pJob;
    if ( pLock->m_pJob == this )
    {
      if ( bForce )
      {
        pLock->m_nRefCount = 0;
      }
      else
      {
        m_nRefCount = pLock->m_nRefCount;
        if ( m_nRefCount > 0 )
        {
          v15 = m_nRefCount - 1;
          pLock->m_nRefCount = v15;
          if ( v15 != 0 )
            return;
        }
      }
      m_pJobToNotifyOnLockRelease = pLock->m_pJobToNotifyOnLockRelease;
      if ( m_pJobToNotifyOnLockRelease != 0 )
      {
        GCSDK::CJob::PassLockToJob(m_pJob, m_pJobToNotifyOnLockRelease, pLock);
        m_pJob->m_pJobToNotifyOnLockRelease = 0;
      }
      else
      {
        GCSDK::CJob::UnsetLock(m_pJob, pLock);
        pLock->m_pJobWaitingQueueTail = 0;
      }
      return;
    }
    m_pchJobName = "[none]";
    if ( m_pJob != 0 )
    {
      p_m_pchName = &m_pJob->m_pJobType->m_pchName;
      if ( p_m_pchName != 0 )
        m_pchJobName = *p_m_pchName;
      else
        m_pchJobName = m_pJob->m_pchJobName;
    }
    m_pchConstStr = pLock->m_pchConstStr;
    if ( m_pchConstStr == 0 )
    {
      linea = line;
      filenamea = filename;
      m_pchConstStr = GCSDK::CLock::GetName(pLock);
      line = linea;
      filename = filenamea;
    }
    m_pJobType = this->m_pJobType;
    if ( m_pJobType != 0 )
      m_pchName = m_pJobType->m_pchName;
    else
      m_pchName = this->m_pchJobName;
    GCSDK::EmitError(
      &GCSDK::SPEW_JOB,
      "Job %s trying to release lock %s at %s(%d) though the lock is held by %s\n",
      m_pchName,
      m_pchConstStr,
      filename,
      line,
      m_pchJobName);
  }
}


// GCSDK::CJob::ReleaseLocks  (line 1089, @0x0000000003223910, libserver.so)  // inlines: RemoveAll
// calls: GCSDK::CJob::_ReleaseLock
// callers: GCSDK::CJob::ShouldNotHoldAnyLocks, GCSDK::CJob::~CJob
// strings: "job.cpp"
void __fastcall GCSDK::CJob::ReleaseLocks(GCSDK::CJob *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  GCSDK::CLock *v5; // rsi

  v2 = this->m_vecLocks.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 8LL * v2;
    v4 = 8 * (v2 - v2) - 8;
    do
    {
      v5 = this->m_vecLocks.m_Memory.m_pMemory[v3 / 8];
      v3 -= 8LL;
      GCSDK::CJob::_ReleaseLock(this, v5, 1, "job.cpp", 1094);
    }
    while ( v3 != v4 );
  }
  this->m_vecLocks.m_Size = 0;
}


// GCSDK::CJob::ShouldNotHoldAnyLocks  (line 1102, @0x0000000003223990, libserver.so)  // inlines: CUtlString, GetName, ~CUtlString
// calls: CUtlString::Format, CFmtStrN<256, false>::CFmtStrN, CUtlString::Append, GCSDK::CLock::GetName, GCSDK::CJob::ReleaseLocks, CUtlString::FreeMemoryBlock, _Unwind_Resume, __stack_chk_fail
// strings: "Job %s detected and cleaned up leak of %d lock(s):\n", "    Lock %s, acquired %s(%d)\n"
void __fastcall GCSDK::CJob::ShouldNotHoldAnyLocks(GCSDK::CJob *const this)
{
  int m_Size; // ecx
  const GCSDK::JobType_t *m_pJobType; // rax
  const char *m_pchName; // rdx
  int v5; // edx
  unsigned __int64 v6; // rbx
  GCSDK::CLock *v7; // rdi
  const char *m_pchConstStr; // rdx
  int m_line; // r13d
  const char *m_pFilename; // r12
  unsigned __int64 v11; // [rsp+18h] [rbp-168h]
  CUtlString sErrMsg; // [rsp+20h] [rbp-160h] BYREF
  CFmtStrN<256,false> v13; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v14; // [rsp+148h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  m_Size = this->m_vecLocks.m_Size;
  if ( m_Size != 0 )
  {
    m_pJobType = this->m_pJobType;
    sErrMsg.m_pString = 0;
    if ( m_pJobType != 0 )
      m_pchName = m_pJobType->m_pchName;
    else
      m_pchName = this->m_pchJobName;
    CUtlString::Format(&sErrMsg, "Job %s detected and cleaned up leak of %d lock(s):\n", m_pchName, m_Size);
    v5 = this->m_vecLocks.m_Size - 1;
    if ( v5 >= 0 )
    {
      v6 = 8LL * v5;
      v11 = 8 * (v5 - v5) - 8;
      do
      {
        v7 = this->m_vecLocks.m_Memory.m_pMemory[v6 / 8];
        m_pchConstStr = v7->m_pchConstStr;
        m_line = v7->m_line;
        m_pFilename = v7->m_pFilename;
        if ( m_pchConstStr == 0 )
          m_pchConstStr = GCSDK::CLock::GetName(v7);
        CFmtStrN<256,false>::CFmtStrN(&v13, "    Lock %s, acquired %s(%d)\n", m_pchConstStr, m_pFilename, m_line);
        CUtlString::Append(&sErrMsg, v13.m_szBuf);
        v6 -= 8LL;
      }
      while ( v6 != v11 );
    }
    GCSDK::CJob::ReleaseLocks(this);
    if ( sErrMsg.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sErrMsg);
  }
}


// GCSDK::CJob::BJobHoldsLock  (line 1124, @0x0000000003222620, libserver.so)
bool __fastcall GCSDK::CJob::BJobHoldsLock(const GCSDK::CJob *const this, uint16 nType, uint64 nSubType)
{
  int m_Size; // r8d
  __int64 v4; // rax
  GCSDK::CLock *v5; // rcx

  m_Size = this->m_vecLocks.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = this->m_vecLocks.m_Memory.m_pMemory[v4];
    if ( v5->m_nsLockType == nType && v5->m_unLockSubType == nSubType )
      break;
    if ( m_Size <= ++v4 )
      return 0;
  }
  return 1;
}


// GCSDK::CJob::BJobHoldsLock  (line 1135, @0x0000000003222ef0, libserver.so)
// calls: CUtlVectorBase<GCSDK::CLock*, CUtlMemoryFixedGrowable<GCSDK::CLock*, 2ul, int> >::Find
bool __fastcall GCSDK::CJob::BJobHoldsLock(const GCSDK::CJob *const this, const GCSDK::CLock *pLock)
{
  GCSDK::CLock *src; // [rsp+8h] [rbp-8h] BYREF

  src = pLock;
  return CUtlVectorBase<GCSDK::CLock *,CUtlMemoryFixedGrowable<GCSDK::CLock *,2ul,int>>::Find(&this->m_vecLocks, &src) != -1;
}


// GCSDK::CJob::AddJobToNotifyOnLockRelease  (line 1143, @0x0000000003222670, libserver.so)
void __fastcall GCSDK::CJob::AddJobToNotifyOnLockRelease(GCSDK::CJob *const this, GCSDK::CJob *pJob)
{
  while ( this->m_pJobToNotifyOnLockRelease != 0 )
    this = this->m_pJobToNotifyOnLockRelease;
  this->m_pJobToNotifyOnLockRelease = pJob;
}


// GCSDK::CJob::_SetLock  (line 1160, @0x0000000003223280, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CLock*>, Element, GrowMemory, operator[]
// calls: GCSDK::CJobTime::SetToJobTime, CUtlMemory<GCSDK::CLock*, int>::Grow
// callers: GCSDK::CJob::_BYieldingAcquireLock, GCSDK::CJob::_BAcquireLockImmediate, GCSDK::CJob::PassLockToJob
void __fastcall GCSDK::CJob::_SetLock(GCSDK::CJob *const this, GCSDK::CLock *pLock, const char *filename, int line)
{
  __int64 m_Size; // r13
  int v9; // eax
  GCSDK::CLock **v10; // rax

  pLock->m_pJob = this;
  GCSDK::CJobTime::SetToJobTime(&pLock->m_sTimeAcquired);
  pLock->m_pFilename = filename;
  pLock->m_line = line;
  m_Size = this->m_vecLocks.m_Size;
  v9 = this->m_vecLocks.m_Size;
  if ( m_Size == this->m_vecLocks.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<GCSDK::CLock *,int>::Grow(&this->m_vecLocks.m_Memory, 1);
    v9 = this->m_vecLocks.m_Size;
  }
  this->m_vecLocks.m_Size = v9 + 1;
  v10 = &this->m_vecLocks.m_Memory.m_pMemory[m_Size];
  if ( v10 != 0 )
    *v10 = pLock;
}


// GCSDK::CJob::UnsetLock  (line 1176, @0x0000000003222f20, libserver.so)  // inlines: Element, FindAndRemove, GetName, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::EmitWarning, CUtlVectorBase<GCSDK::CLock*, CUtlMemoryFixedGrowable<GCSDK::CLock*, 2ul, int> >::Find, memmove
// callers: GCSDK::CJob::OnLockDeleted, GCSDK::CJob::PassLockToJob, GCSDK::CJob::_ReleaseLock
// strings: "Job of type %s held lock for %.2f seconds while job of type %s was waiting\n", "Job of type %s held lock for %.2f seconds\n"
void __fastcall GCSDK::CJob::UnsetLock(GCSDK::CJob *const this, GCSDK::CLock *pLock)
{
  GCSDK::CJobTime *p_m_sTimeAcquired; // r13
  GCSDK::CJob *m_pJobToNotifyOnLockRelease; // rax
  GCSDK::CJob *v6; // rdx
  const char **p_m_pchName; // rax
  const char *m_pchJobName; // r12
  double v9; // xmm0_8
  const GCSDK::JobType_t *m_pJobType; // rax
  double v11; // xmm0_8
  const char *m_pchName; // rcx
  int v13; // eax
  int m_Size; // ecx
  GCSDK::CLock **v15; // rsi
  double v16; // xmm0_8
  const GCSDK::JobType_t *v17; // rax
  double v18; // xmm0_8
  const char *v19; // rcx
  GCSDK::CLock *pLocka; // [rsp+8h] [rbp-28h] BYREF

  p_m_sTimeAcquired = &pLock->m_sTimeAcquired;
  pLock->m_pJob = 0;
  pLocka = pLock;
  if ( GCSDK::CJobTime::CServerMicroSecsPassed(&pLock->m_sTimeAcquired) > 9999999 )
  {
    *&this->m_flags.m_bits |= 4u;
    m_pJobToNotifyOnLockRelease = pLock->m_pJobToNotifyOnLockRelease;
    if ( m_pJobToNotifyOnLockRelease != 0 )
    {
      *&m_pJobToNotifyOnLockRelease->m_flags.m_bits |= 8u;
      v6 = pLock->m_pJobToNotifyOnLockRelease;
      p_m_pchName = &v6->m_pJobType->m_pchName;
      if ( p_m_pchName != 0 )
        m_pchJobName = *p_m_pchName;
      else
        m_pchJobName = v6->m_pchJobName;
      v9 = GCSDK::CJobTime::CServerMicroSecsPassed(p_m_sTimeAcquired);
      m_pJobType = this->m_pJobType;
      v11 = v9 / 1000000.0;
      if ( m_pJobType != 0 )
        m_pchName = m_pJobType->m_pchName;
      else
        m_pchName = this->m_pchJobName;
      GCSDK::EmitWarning(
        &GCSDK::SPEW_JOB,
        4,
        "Job of type %s held lock for %.2f seconds while job of type %s was waiting\n",
        m_pchName,
        v11,
        m_pchJobName);
    }
    else
    {
      v16 = GCSDK::CJobTime::CServerMicroSecsPassed(p_m_sTimeAcquired);
      v17 = this->m_pJobType;
      v18 = v16 / 1000000.0;
      if ( v17 != 0 )
        v19 = v17->m_pchName;
      else
        v19 = this->m_pchJobName;
      GCSDK::EmitWarning(&GCSDK::SPEW_JOB, 4, "Job of type %s held lock for %.2f seconds\n", v19, v18);
    }
  }
  v13 = CUtlVectorBase<GCSDK::CLock *,CUtlMemoryFixedGrowable<GCSDK::CLock *,2ul,int>>::Find(&this->m_vecLocks, &pLocka);
  if ( v13 != -1 )
  {
    m_Size = this->m_vecLocks.m_Size;
    if ( m_Size - v13 - 1 > 0 )
    {
      v15 = &this->m_vecLocks.m_Memory.m_pMemory[v13 + 1];
      memmove(v15 - 1, v15, 8LL * (this->m_vecLocks.m_Size - v13 - 1));
      m_Size = this->m_vecLocks.m_Size;
    }
    this->m_vecLocks.m_Size = m_Size - 1;
  }
}


// GCSDK::CJob::PassLockToJob  (line 1200, @0x0000000003223670, libserver.so)  // inlines: GetName
// calls: GCSDK::CJob::UnsetLock, GCSDK::CJob::GetPauseReasonDescription, GCSDK::EmitError, GCSDK::CJob::_SetLock, GCSDK::CJobMgr::WakeupLockedJob, GCSDK::CLock::GetName
// callers: GCSDK::CJob::_ReleaseLock
// strings: "Job passed lock it wasn't waiting for. Job: %s, Lock: %s %s(%d), Paused for %s, Waiting o
void __fastcall GCSDK::CJob::PassLockToJob(GCSDK::CJob *const this, GCSDK::CJob *pNewJob, GCSDK::CLock *pLock)
{
  GCSDK::CJob *m_pJobToNotifyOnLockRelease; // rax
  GCSDK::CLock *m_pWaitingOnLock; // rdi
  char *m_pchConstStr; // r13
  const char *PauseReasonDescription; // rax
  const char *v10; // rcx
  const char *v11; // r14
  int m_line; // r9d
  const char *m_pFilename; // r8
  const GCSDK::JobType_t *m_pJobType; // rdx
  const char *m_pchName; // rdx
  const char *Name; // rax
  const char *v17; // [rsp+10h] [rbp-30h]
  int v18; // [rsp+1Ch] [rbp-24h]

  m_pJobToNotifyOnLockRelease = pNewJob->m_pJobToNotifyOnLockRelease;
  pLock->m_pJobToNotifyOnLockRelease = m_pJobToNotifyOnLockRelease;
  if ( m_pJobToNotifyOnLockRelease == 0 )
    pLock->m_pJobWaitingQueueTail = 0;
  pNewJob->m_pJobToNotifyOnLockRelease = 0;
  --pLock->m_nWaitingCount;
  GCSDK::CJob::UnsetLock(this, pLock);
  if ( pNewJob->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock
    && pNewJob->m_pWaitingOnLock == pLock )
  {
    GCSDK::CJob::_SetLock(pNewJob, pLock, pNewJob->m_pWaitingOnLockFilename, pNewJob->m_waitingOnLockLine);
    GCSDK::CJobMgr::WakeupLockedJob(pNewJob->m_JobMgr, pNewJob);
  }
  else
  {
    m_pWaitingOnLock = this->m_pWaitingOnLock;
    m_pchConstStr = "none";
    if ( m_pWaitingOnLock != 0 )
    {
      m_pchConstStr = m_pWaitingOnLock->m_pchConstStr;
      if ( m_pchConstStr == 0 )
        m_pchConstStr = GCSDK::CLock::GetName(m_pWaitingOnLock);
    }
    PauseReasonDescription = GCSDK::CJob::GetPauseReasonDescription(pNewJob);
    v10 = pLock->m_pchConstStr;
    v11 = PauseReasonDescription;
    m_line = pLock->m_line;
    m_pFilename = pLock->m_pFilename;
    if ( v10 == 0 )
    {
      v17 = pLock->m_pFilename;
      v18 = pLock->m_line;
      Name = GCSDK::CLock::GetName(pLock);
      m_pFilename = v17;
      v10 = Name;
      m_line = v18;
    }
    m_pJobType = pNewJob->m_pJobType;
    if ( m_pJobType != 0 )
      m_pchName = m_pJobType->m_pchName;
    else
      m_pchName = pNewJob->m_pchJobName;
    GCSDK::EmitError(
      &GCSDK::SPEW_JOB,
      "Job passed lock it wasn't waiting for. Job: %s, Lock: %s %s(%d), Paused for %s, Waiting on %s\n",
      m_pchName,
      v10,
      m_pFilename,
      m_line,
      v11,
      m_pchConstStr);
  }
}


// GCSDK::CJob::OnLockDeleted  (line 1240, @0x00000000032230b0, libserver.so)
// calls: GCSDK::CJobMgr::WakeupLockedJob, GCSDK::CJob::UnsetLock
// callers: GCSDK::CLock::~CLock
void __fastcall GCSDK::CJob::OnLockDeleted(GCSDK::CJob *const this, GCSDK::CLock *pLock)
{
  GCSDK::CJob *m_pJobToNotifyOnLockRelease; // rbx
  GCSDK::CJob *v5; // rax

  m_pJobToNotifyOnLockRelease = pLock->m_pJobToNotifyOnLockRelease;
  if ( m_pJobToNotifyOnLockRelease != 0 )
  {
    while ( 1 )
    {
      GCSDK::CJobMgr::WakeupLockedJob(m_pJobToNotifyOnLockRelease->m_JobMgr, m_pJobToNotifyOnLockRelease);
      v5 = m_pJobToNotifyOnLockRelease->m_pJobToNotifyOnLockRelease;
      m_pJobToNotifyOnLockRelease->m_pJobToNotifyOnLockRelease = 0;
      if ( v5 == 0 )
        break;
      m_pJobToNotifyOnLockRelease = v5;
    }
  }
  this->m_pJobToNotifyOnLockRelease = 0;
  pLock->m_pJobToNotifyOnLockRelease = 0;
  pLock->m_pJobWaitingQueueTail = 0;
  GCSDK::CJob::UnsetLock(this, pLock);
}


// GCSDK::CLock::CLock  (line 1274, @0x00000000032226a0, libserver.so)
// calls: GCSDK::CJobTime::CJobTime
void __fastcall GCSDK::CLock::CLock(GCSDK::CLock *const this)
{
  GCSDK::CJobTime *p_m_sTimeAcquired; // rdi

  p_m_sTimeAcquired = &this->m_sTimeAcquired;
  p_m_sTimeAcquired[-6].m_lTime = 0;
  p_m_sTimeAcquired[-5].m_lTime = 0;
  p_m_sTimeAcquired[-4].m_lTime = 0;
  p_m_sTimeAcquired[-3].m_lTime = 0;
  p_m_sTimeAcquired[-2].m_lTime = 0;
  LODWORD(p_m_sTimeAcquired[-1].m_lTime) = 0;
  HIDWORD(p_m_sTimeAcquired[-1].m_lTime) = 0;
  GCSDK::CJobTime::CJobTime(p_m_sTimeAcquired);
  this->m_unLockSubType = 0;
  this->m_pFilename = "unknown";
  this->m_line = 0;
  this->m_nsLockType = 0;
}


// GCSDK::CLock::~CLock  (line 1290, @0x0000000003223130, libserver.so)
// calls: GCSDK::CJob::OnLockDeleted, operator delete []
void __fastcall GCSDK::CLock::~CLock(GCSDK::CLock *const this)
{
  GCSDK::CJob *m_pJob; // rdi
  char *m_pchName; // rdi

  m_pJob = this->m_pJob;
  if ( m_pJob != 0 )
    GCSDK::CJob::OnLockDeleted(m_pJob, this);
  m_pchName = this->m_pchName;
  if ( m_pchName != 0 )
    operator delete[](m_pchName);
}


// GCSDK::CLock::AddToWaitingQueue  (line 1304, @0x0000000003222720, libserver.so)  // inlines: AddJobToNotifyOnLockRelease
void __fastcall GCSDK::CLock::AddToWaitingQueue(GCSDK::CLock *const this, GCSDK::CJob *pJob)
{
  GCSDK::CJob *m_pJobWaitingQueueTail; // rdx

  m_pJobWaitingQueueTail = this->m_pJobWaitingQueueTail;
  if ( m_pJobWaitingQueueTail != 0 )
  {
    while ( m_pJobWaitingQueueTail->m_pJobToNotifyOnLockRelease != 0 )
      m_pJobWaitingQueueTail = m_pJobWaitingQueueTail->m_pJobToNotifyOnLockRelease;
    m_pJobWaitingQueueTail->m_pJobToNotifyOnLockRelease = pJob;
    ++this->m_nWaitingCount;
    this->m_pJobWaitingQueueTail = pJob;
  }
  else
  {
    this->m_pJobToNotifyOnLockRelease = pJob;
    ++this->m_nWaitingCount;
    this->m_pJobWaitingQueueTail = pJob;
  }
}


// GCSDK::CLock::SetName  (line 1322, @0x0000000003222760, libserver.so)
void __fastcall GCSDK::CLock::SetName(GCSDK::CLock *const this, const char *pchName)
{
  this->m_pchConstStr = pchName;
}


// GCSDK::CLock::GetName  (line 1327, @0x0000000003221720, libserver.so)  // inlines: GetRender, SOID_t, V_strlen, _V_strcpy, strcpy
// calls: GCSDK::SOIDRender_t::SOIDRender_t, operator new [], strcpy, __stack_chk_fail
// callers: GCSDK::CLock::GetName, GCSDK::CJob::GetPauseReasonDescription, GCSDK::CLock::Dump, GCSDK::CJob::_BYieldingAcquireLock, GCSDK::CJob::PassLockToJob, GCSDK::CJob::_ReleaseLock, GCSDK::CJob::ShouldNotHoldAnyLocks
const char *__fastcall GCSDK::CLock::GetName(const GCSDK::CLock *const this)
{
  const char *result; // rax
  GCSDK::SOIDRender_t *v3; // rdx
  int v4; // ecx
  unsigned int v5; // eax
  char *v6; // rax
  GCSDK::SOIDRender_t v7; // [rsp+0h] [rbp-A0h] BYREF
  unsigned __int64 v8; // [rsp+88h] [rbp-18h]
  GCSDK::SOID_t v9; // 0:rsi.8,8:rdx.8

  v8 = __readfsqword(0x28u);
  result = this->m_pchName;
  if ( result == 0 )
  {
    *&v9.m_type = this->m_nsLockType;
    v9.m_id = this->m_unLockSubType;
    GCSDK::SOIDRender_t::SOIDRender_t(&v7, v9);
    v3 = &v7;
    do
    {
      v4 = *v3->m_buf;
      v3 = (v3 + 4);
      v5 = ~v4 & (v4 - 16843009) & 0x80808080;
    }
    while ( v5 == 0 );
    if ( (~v4 & (v4 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v5) = (~v4 & (v4 - 16843009) & 0x80808080) >> 16;
      LODWORD(v3) = v3 + 2;
    }
    v6 = operator new[]((v3 - (__CFADD__(v5, v5) + 3) - &v7 + 1));
    this->m_pchName = v6;
    strcpy(v6, v7.m_buf);
    return this->m_pchName;
  }
  return result;
}


// GCSDK::CLock::GetName  (line 1327, @0x0000000003222770, libserver.so)
// calls: GCSDK::CLock::GetName
// callers: GCSDK::CJobMgr::DumpJob
const char *__fastcall GCSDK::CLock::GetName(const GCSDK::CLock *const this)
{
  const char *result; // rax

  result = this->m_pchConstStr;
  if ( result == 0 )
    return GCSDK::CLock::GetName(this);
  return result;
}


// GCSDK::CLock::GetTypeName  (line 1343, @0x0000000003222790, libserver.so)
// calls: GCSDK::SOIDRender_t::GetName
// callers: GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob
// strings: "(unknown lock type)"
const char *__fastcall GCSDK::CLock::GetTypeName(const GCSDK::CLock *const this)
{
  const char *result; // rax
  const char *Name; // rdx

  result = this->m_pchConstStr;
  if ( result == 0 )
  {
    Name = GCSDK::SOIDRender_t::GetName(this->m_nsLockType);
    result = "(unknown lock type)";
    if ( Name != 0 )
      return Name;
  }
  return result;
}


// GCSDK::CLock::IncrementReference  (line 1356, @0x00000000032227c0, libserver.so)
void __fastcall GCSDK::CLock::IncrementReference(GCSDK::CLock *const this)
{
  ++this->m_nRefCount;
}


// GCSDK::CLock::DecrementReference  (line 1364, @0x00000000032227d0, libserver.so)
int __fastcall GCSDK::CLock::DecrementReference(GCSDK::CLock *const this)
{
  int result; // eax

  result = this->m_nRefCount;
  if ( result > 0 )
    this->m_nRefCount = --result;
  return result;
}


// GCSDK::CLock::Dump  (line 1374, @0x0000000003222c40, libserver.so)  // inlines: GetName
// calls: GCSDK::CJob::GetPauseReasonDescription, GCSDK::EGInternal_EmitInfo, GCSDK::CLock::GetName
// callers: GCSDK::CJobMgr::DumpJob
// strings: "%s%s: Lock owner: %s (%llu), Reason: %s, Type: %d, %d Waiting\n", "%sLock acquired: %s:%d\n", "%s\tOther jobs waiting for this lock: %s (%llu)\n", "%s\tAt: %s:%d\n", "%s%d out of %d waiting jobs printed.\n", "%s%s: Lock owner: None, Type: %d, %d Waiting\n"
void __fastcall GCSDK::CLock::Dump(
        const GCSDK::CLock *const this,
        const char *pszPrefix,
        int nPrintMax,
        bool bPrintWaiting)
{
  GCSDK::CJob *m_pJob; // rdi
  const char *PauseReasonDescription; // rax
  const char *v9; // r8
  const GCSDK::JobType_t *m_pJobType; // rcx
  JobID_t m_JobID; // r14
  const char *m_pchName; // rbx
  const char *m_pchConstStr; // r9
  int v14; // eax
  GCSDK::CJob *m_pJobToNotifyOnLockRelease; // rbx
  int v16; // r15d
  int v17; // r13d
  bool v18; // r14
  int v19; // r12d
  const char **p_m_pchName; // rax
  const char *m_pchJobName; // r9
  int v22; // r14d
  const char *v23; // r9
  int32 m_nWaitingCount; // r14d
  int v25; // ebx
  const char *Name; // rax
  const char *v27; // [rsp+28h] [rbp-58h]
  int m_nsLockType; // [rsp+34h] [rbp-4Ch]
  const GCSDK::CLock *nPrintMaxb; // [rsp+38h] [rbp-48h]
  int32 Group; // [rsp+40h] [rbp-40h]

  m_pJob = this->m_pJob;
  if ( m_pJob != 0 )
  {
    Group = this->m_nWaitingCount;
    m_nsLockType = this->m_nsLockType;
    PauseReasonDescription = GCSDK::CJob::GetPauseReasonDescription(m_pJob);
    v9 = PauseReasonDescription;
    m_pJobType = this->m_pJob->m_pJobType;
    m_JobID = this->m_pJob->m_JobID;
    if ( m_pJobType != 0 )
      m_pchName = m_pJobType->m_pchName;
    else
      m_pchName = this->m_pJob->m_pchJobName;
    m_pchConstStr = this->m_pchConstStr;
    if ( m_pchConstStr == 0 )
    {
      v27 = PauseReasonDescription;
      Name = GCSDK::CLock::GetName(this);
      v9 = v27;
      m_pchConstStr = Name;
    }
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_JOB,
      1,
      1,
      "%s%s: Lock owner: %s (%llu), Reason: %s, Type: %d, %d Waiting\n",
      pszPrefix,
      m_pchConstStr,
      m_pchName,
      m_JobID,
      v9,
      m_nsLockType,
      Group);
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_JOB,
      1,
      1,
      "%sLock acquired: %s:%d\n",
      pszPrefix,
      this->m_pFilename,
      this->m_line);
  }
  else
  {
    v23 = this->m_pchConstStr;
    m_nWaitingCount = this->m_nWaitingCount;
    v25 = this->m_nsLockType;
    if ( v23 == 0 )
      v23 = GCSDK::CLock::GetName(this);
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_JOB,
      1,
      1,
      "%s%s: Lock owner: None, Type: %d, %d Waiting\n",
      pszPrefix,
      v23,
      v25,
      m_nWaitingCount);
  }
  v14 = nPrintMax;
  m_pJobToNotifyOnLockRelease = this->m_pJobToNotifyOnLockRelease;
  if ( nPrintMax > 0 && m_pJobToNotifyOnLockRelease != 0 )
  {
    nPrintMaxb = this;
    v16 = 0;
    v17 = 0;
    v18 = bPrintWaiting;
    v19 = v14;
    do
    {
      if ( v18 )
      {
        p_m_pchName = &m_pJobToNotifyOnLockRelease->m_pJobType->m_pchName;
        if ( p_m_pchName != 0 )
          m_pchJobName = *p_m_pchName;
        else
          m_pchJobName = m_pJobToNotifyOnLockRelease->m_pchJobName;
        GCSDK::EGInternal_EmitInfo(
          &GCSDK::SPEW_JOB,
          1,
          1,
          "%s\tOther jobs waiting for this lock: %s (%llu)\n",
          pszPrefix,
          m_pchJobName,
          m_pJobToNotifyOnLockRelease->m_JobID);
        if ( m_pJobToNotifyOnLockRelease->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock
          && m_pJobToNotifyOnLockRelease->m_pWaitingOnLock == nPrintMaxb )
        {
          GCSDK::EGInternal_EmitInfo(
            &GCSDK::SPEW_CONSOLE,
            1,
            3,
            "%s\tAt: %s:%d\n",
            pszPrefix,
            m_pJobToNotifyOnLockRelease->m_pWaitingOnLockFilename,
            m_pJobToNotifyOnLockRelease->m_waitingOnLockLine);
        }
        ++v16;
      }
      ++v17;
      m_pJobToNotifyOnLockRelease = m_pJobToNotifyOnLockRelease->m_pJobToNotifyOnLockRelease;
    }
    while ( v16 < v19 && m_pJobToNotifyOnLockRelease != 0 );
    v22 = v17;
    goto LABEL_20;
  }
  if ( bPrintWaiting )
  {
    v22 = 0;
    v16 = 0;
LABEL_20:
    GCSDK::EGInternal_EmitInfo(&GCSDK::SPEW_JOB, 1, 1, "%s%d out of %d waiting jobs printed.\n", pszPrefix, v16, v22);
  }
}


// GCSDK::CGCAutoLock::operator=  (line 1423, @0x0000000003223da0, libserver.so)  // inlines: Acquire, IncrementReference
// calls: GCSDK::CGCAutoLock::Release
GCSDK::CGCAutoLock *__fastcall GCSDK::CGCAutoLock::operator=(
        GCSDK::CGCAutoLock *const this,
        const GCSDK::CGCAutoLock *const rhs)
{
  GCSDK::CLock *m_pLock; // rax
  bool v5; // zf

  if ( this->m_pLock != rhs->m_pLock )
  {
    GCSDK::CGCAutoLock::Release(this);
    m_pLock = rhs->m_pLock;
    v5 = rhs->m_pLock == 0;
    this->m_pLock = rhs->m_pLock;
    if ( !v5 )
      ++m_pLock->m_nRefCount;
  }
  return this;
}


// GCSDK::CGCAutoLock::_BYieldingAcquireLock  (line 1433, @0x0000000003223de0, libserver.so)  // inlines: GJobCur, IncrementReference, IsLocked
// calls: GCSDK::CGCAutoLock::Release, GCSDK::CJob::_BYieldingAcquireLock
// globals: GCSDK::g_pJobCur
bool __fastcall GCSDK::CGCAutoLock::_BYieldingAcquireLock(
        GCSDK::CGCAutoLock *const this,
        GCSDK::CLock *const lock,
        const char *pszFile,
        uint32 nLine)
{
  GCSDK::CGCAutoLock::Release(this);
  if ( lock->m_pJob == GCSDK::g_pJobCur )
  {
    ++lock->m_nRefCount;
    this->m_pLock = lock;
    return lock != 0;
  }
  else if ( GCSDK::CJob::_BYieldingAcquireLock(GCSDK::g_pJobCur, lock, pszFile, nLine) )
  {
    this->m_pLock = lock;
    return lock != 0;
  }
  else
  {
    return this->m_pLock != 0;
  }
}


// GCSDK::CGCAutoLock::_BAcquireLockImmediate  (line 1452, @0x0000000003223e60, libserver.so)  // inlines: GJobCur, IncrementReference, IsLocked
// calls: GCSDK::CGCAutoLock::Release, GCSDK::CJob::_BAcquireLockImmediate
// globals: GCSDK::g_pJobCur
bool __fastcall GCSDK::CGCAutoLock::_BAcquireLockImmediate(
        GCSDK::CGCAutoLock *const this,
        GCSDK::CLock *const lock,
        const char *pszFile,
        uint32 nLine)
{
  GCSDK::CGCAutoLock::Release(this);
  if ( lock->m_pJob == GCSDK::g_pJobCur )
  {
    ++lock->m_nRefCount;
    this->m_pLock = lock;
    return lock != 0;
  }
  else if ( GCSDK::CJob::_BAcquireLockImmediate(GCSDK::g_pJobCur, lock, pszFile, nLine) )
  {
    this->m_pLock = lock;
    return lock != 0;
  }
  else
  {
    return this->m_pLock != 0;
  }
}


// GCSDK::CGCAutoLock::Release  (line 1471, @0x0000000003223d60, libserver.so)
// calls: GCSDK::CJob::_ReleaseLock
// callers: GCSDK::CGCAutoLock::operator=, GCSDK::CGCAutoLock::_BYieldingAcquireLock, GCSDK::CGCAutoLock::_BAcquireLockImmediate
// strings: "job.cpp"
// globals: GCSDK::g_pJobCur
void __fastcall GCSDK::CGCAutoLock::Release(GCSDK::CGCAutoLock *const this)
{
  if ( this->m_pLock != 0 )
  {
    GCSDK::CJob::_ReleaseLock(GCSDK::g_pJobCur, this->m_pLock, 0, "job.cpp", 1475);
    this->m_pLock = 0;
  }
}


// GCSDK::CGCAutoLock::Acquire  (line 1480, @0x00000000032227f0, libserver.so)  // inlines: IncrementReference
void __fastcall GCSDK::CGCAutoLock::Acquire(GCSDK::CGCAutoLock *const this, GCSDK::CLock *pLock)
{
  this->m_pLock = pLock;
  if ( pLock != 0 )
    ++pLock->m_nRefCount;
}


// GCSDK::CDoNotYieldScopeImpl::InternalPush  (line 1493, @0x0000000003222810, libserver.so)  // inlines: GJobCur
// calls: GCSDK::CJobMgr::PushDoNotYield
// globals: GCSDK::g_pJobCur
void __fastcall GCSDK::CDoNotYieldScopeImpl::InternalPush(const char *pchLocation)
{
  GCSDK::CJobMgr::PushDoNotYield(GCSDK::g_pJobCur->m_JobMgr, GCSDK::g_pJobCur, pchLocation);
}


// GCSDK::CDoNotYieldScopeImpl::InternalPop  (line 1498, @0x0000000003222830, libserver.so)  // inlines: GJobCur
// calls: GCSDK::CJobMgr::PopDoNotYield
// globals: GCSDK::g_pJobCur
void __cdecl GCSDK::CDoNotYieldScopeImpl::InternalPop()
{
  GCSDK::CJobMgr::PopDoNotYield(GCSDK::g_pJobCur->m_JobMgr, GCSDK::g_pJobCur);
}


