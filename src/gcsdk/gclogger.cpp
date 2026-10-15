
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gclogger.cpp  (line 0, @0x0000000001a6e2e0, libserver.so)  // inlines: CGCEmitGroup, Color, SetColor, __static_initialization_and_destruction_0
// strings: "sql", "sharedobj", "microtxn", "pkgitem", "econ", "threads"
// globals: GCSDK::SPEW_SYSTEM_MISC, GCSDK::SPEW_JOB, GCSDK::SPEW_CONSOLE, UNSPECIFIED_LOGGING_COLOR, GCSDK::SPEW_GC, GCSDK::SPEW_SQL, GCSDK::SPEW_NETWORK, GCSDK::SPEW_SHAREDOBJ (13 total)
void __cdecl GLOBAL__sub_I_gclogger_cpp()
{
  GCSDK::SPEW_SYSTEM_MISC.m_pszGroupName = "system";
  GCSDK::SPEW_JOB.m_pszGroupName = "job";
  GCSDK::SPEW_CONSOLE.m_pszGroupName = "console";
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  GCSDK::SPEW_GC.m_pszGroupName = "gc";
  GCSDK::SPEW_SQL.m_pszGroupName = "sql";
  GCSDK::SPEW_NETWORK.m_pszGroupName = "network";
  GCSDK::SPEW_SHAREDOBJ.m_pszGroupName = "sharedobj";
  GCSDK::SPEW_MICROTXN.m_pszGroupName = "microtxn";
  GCSDK::SPEW_PROMO.m_pszGroupName = "promo";
  GCSDK::SPEW_PKGITEM.m_pszGroupName = "pkgitem";
  GCSDK::SPEW_ECONOMY.m_pszGroupName = "econ";
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  GCSDK::SPEW_THREADS.m_pszGroupName = "threads";
}


// GCSDK::EmitBaseMessageV  (line 29, @0x00000000032205b0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: V_vsnprintf, DevMsg(char const*,...), ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), __stack_chk_fail, CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// callers: GCSDK::EmitBaseMessageV
// strings: "GCHost", "Steam"
void __fastcall GCSDK::EmitBaseMessageV(
        const char *pchGroupName,
        SpewType_t spewType,
        int iSpewLevel,
        int iLevelLog,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  int m_enabled; // esi
  bool v9; // r12
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  ThreadId_t v12; // r13
  uint64 v13; // rcx
  unsigned __int64 v14; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-848h]
  char pchBuf[2056]; // [rsp+10h] [rbp-840h] BYREF
  unsigned __int64 v21; // [rsp+818h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v9 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v14 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(pchGroupName) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "GCHost" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "GCHost", 0, "Steam", 4);
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
  V_vsnprintf(pchBuf, 2048, pchMsg, vaArgs);
  DevMsg("%s", pchBuf);
  if ( v9 )
  {
    v11 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v12 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v12 == ThreadGetCurrentId(v10) )
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
    v13 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v13 - v11 + __rdtsc();
  }
}


// GCSDK::EmitBaseMessageV  (line 64, @0x0000000003220840, libserver.so)
// calls: GCSDK::EmitBaseMessageV
// callers: GCSDK::CGCEmitGroup::Internal_AssertError, GCSDK::CGCEmitGroup::AssertErrorV, GCSDK::CGCEmitGroup::Internal_Error, GCSDK::CGCEmitGroup::ErrorV, GCSDK::CGCEmitGroup::Internal_Warning, GCSDK::CGCEmitGroup::WarningV, GCSDK::CGCEmitGroup::Internal_Msg, GCSDK::CGCEmitGroup::MsgV, GCSDK::CGCEmitGroup::Internal_Verbose, GCSDK::CGCEmitGroup::VerboseV, GCSDK::CGCEmitGroup::Internal_Debug, GCSDK::CGCEmitGroup::DebugV (20 total)
// globals: GCSDK::g_nMaxSpewLevel, GCSDK::g_nMaxLogLevel
void __fastcall GCSDK::EmitBaseMessageV(
        const GCSDK::CGCEmitGroup *const Group,
        SpewType_t spewType,
        int iConsoleLevel,
        int iLogLevel,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  int v6; // eax
  int v7; // r10d
  int v8; // edx
  int v9; // ecx

  v6 = 3;
  v7 = 3;
  if ( GCSDK::g_nMaxSpewLevel <= 3 )
    v7 = GCSDK::g_nMaxSpewLevel;
  if ( iConsoleLevel <= v7 )
  {
    v8 = 1;
    if ( GCSDK::g_nMaxLogLevel <= 3 )
      v6 = GCSDK::g_nMaxLogLevel;
    v9 = 4 * (v6 < iLogLevel) + 1;
    goto LABEL_7;
  }
  if ( GCSDK::g_nMaxLogLevel <= 3 )
    v6 = GCSDK::g_nMaxLogLevel;
  if ( iLogLevel <= v6 )
  {
    v8 = 5;
    v9 = 1;
LABEL_7:
    GCSDK::EmitBaseMessageV(Group->m_pszGroupName, spewType, v8, v9, pchMsg, vaArgs);
  }
}


// GCSDK::CGCEmitGroup::Internal_AssertError  (line 75, @0x00000000032208c0, libserver.so)  // inlines: AssertErrorV
// calls: GCSDK::EmitBaseMessageV
void GCSDK::CGCEmitGroup::Internal_AssertError(const GCSDK::CGCEmitGroup *const this, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_ASSERT, 1, 1, pchMsg, args);
}


// GCSDK::CGCEmitGroup::AssertErrorV  (line 83, @0x0000000003220960, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::CGCEmitGroup::AssertErrorV(
        const GCSDK::CGCEmitGroup *const this,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_ASSERT, 1, 1, pchMsg, vaArgs);
}


// GCSDK::CGCEmitGroup::Internal_Error  (line 91, @0x0000000003220980, libserver.so)  // inlines: ErrorV
// calls: GCSDK::EmitBaseMessageV
void GCSDK::CGCEmitGroup::Internal_Error(const GCSDK::CGCEmitGroup *const this, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_ERROR, 1, 1, pchMsg, args);
}


// GCSDK::CGCEmitGroup::ErrorV  (line 99, @0x0000000003220a20, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::CGCEmitGroup::ErrorV(
        const GCSDK::CGCEmitGroup *const this,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_ERROR, 1, 1, pchMsg, vaArgs);
}


// GCSDK::CGCEmitGroup::Internal_Warning  (line 107, @0x0000000003220a40, libserver.so)  // inlines: WarningV
// calls: GCSDK::EmitBaseMessageV
// callers: GCSDK::CJobMgr::BLaunchJobFromNetworkMsg
void GCSDK::CGCEmitGroup::Internal_Warning(const GCSDK::CGCEmitGroup *const this, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_WARNING, 2, 2, pchMsg, args);
}


// GCSDK::CGCEmitGroup::WarningV  (line 115, @0x0000000003220ae0, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::CGCEmitGroup::WarningV(
        const GCSDK::CGCEmitGroup *const this,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_WARNING, 2, 2, pchMsg, vaArgs);
}


// GCSDK::CGCEmitGroup::Internal_Msg  (line 123, @0x0000000003220b00, libserver.so)  // inlines: MsgV
// calls: GCSDK::EmitBaseMessageV
// callers: GCSDK::CJobMgr::DumpOrphanedMessages, GCSDK::CJobMgr::BLaunchJobFromNetworkMsg, GCSDK::CJobMgr::ProfileJobs, GCSDK::CJobMgr::PassMsgToJob, GCSDK::WaitAnalysisGraph_t::DumpTree, GCSDK::CJobMgr::DumpJobWaitAnalysis, GCSDK::CMessageList::PrintMultiplexStats, GCSDK::CSharedObjectCache::Dump, GCSDK::CSharedObjectTypeCache::Dump, GCSDK::PrintReportTitle, GCSDK::CGCReportPrinter::PrintReport
void GCSDK::CGCEmitGroup::Internal_Msg(const GCSDK::CGCEmitGroup *const this, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 3, 3, pchMsg, args);
}


// GCSDK::CGCEmitGroup::MsgV  (line 131, @0x0000000003220ba0, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::CGCEmitGroup::MsgV(
        const GCSDK::CGCEmitGroup *const this,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 3, 3, pchMsg, vaArgs);
}


// GCSDK::CGCEmitGroup::Internal_Verbose  (line 139, @0x0000000003220bc0, libserver.so)  // inlines: VerboseV
// calls: GCSDK::EmitBaseMessageV
void GCSDK::CGCEmitGroup::Internal_Verbose(const GCSDK::CGCEmitGroup *const this, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 4, 4, pchMsg, args);
}


// GCSDK::CGCEmitGroup::VerboseV  (line 147, @0x0000000003220c60, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::CGCEmitGroup::VerboseV(
        const GCSDK::CGCEmitGroup *const this,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 4, 4, pchMsg, vaArgs);
}


// GCSDK::CGCEmitGroup::Internal_Debug  (line 156, @0x0000000003220c80, libserver.so)  // inlines: DebugV
// calls: GCSDK::EmitBaseMessageV
void GCSDK::CGCEmitGroup::Internal_Debug(const GCSDK::CGCEmitGroup *const this, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 4, 4, pchMsg, args);
}


// GCSDK::CGCEmitGroup::DebugV  (line 164, @0x0000000003220d20, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::CGCEmitGroup::DebugV(
        const GCSDK::CGCEmitGroup *const this,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 4, 4, pchMsg, vaArgs);
}


// GCSDK::CGCEmitGroup::Internal_BoldMsg  (line 175, @0x0000000003220d40, libserver.so)  // inlines: BoldMsgV
// calls: GCSDK::EmitBaseMessageV
void GCSDK::CGCEmitGroup::Internal_BoldMsg(const GCSDK::CGCEmitGroup *const this, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_BOLD_MESSAGE, 1, 1, pchMsg, args);
}


// GCSDK::CGCEmitGroup::BoldMsgV  (line 183, @0x0000000003220de0, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::CGCEmitGroup::BoldMsgV(
        const GCSDK::CGCEmitGroup *const this,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_BOLD_MESSAGE, 1, 1, pchMsg, vaArgs);
}


// GCSDK::CGCEmitGroup::Internal_Emit  (line 193, @0x0000000003220e90, libserver.so)
// calls: GCSDK::CGCEmitGroup::EmitV
void GCSDK::CGCEmitGroup::Internal_Emit(
        const GCSDK::CGCEmitGroup *const this,
        GCSDK::CGCEmitGroup::EMsgLevel eLvl,
        const char *pchMsg,
        ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::CGCEmitGroup::EmitV(this, eLvl, pchMsg, args);
}


// GCSDK::CGCEmitGroup::EmitV  (line 201, @0x0000000003220e00, libserver.so)  // inlines: ErrorV, MsgV, VerboseV, WarningV
// calls: GCSDK::EmitBaseMessageV
// callers: GCSDK::CGCEmitGroup::Internal_Emit
void __fastcall GCSDK::CGCEmitGroup::EmitV(
        const GCSDK::CGCEmitGroup *const this,
        GCSDK::CGCEmitGroup::EMsgLevel eLvl,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  if ( eLvl == GCSDK::CGCEmitGroup::EMsgLevel::kMsg_Warning )
  {
    GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_WARNING, 2, 2, pchMsg, vaArgs);
  }
  else if ( eLvl <= GCSDK::CGCEmitGroup::EMsgLevel::kMsg_Warning )
  {
    if ( eLvl == GCSDK::CGCEmitGroup::EMsgLevel::kMsg_Error )
      GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_ERROR, 1, 1, pchMsg, vaArgs);
  }
  else if ( eLvl == GCSDK::CGCEmitGroup::EMsgLevel::kMsg_Msg )
  {
    GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 3, 3, pchMsg, vaArgs);
  }
  else if ( eLvl == GCSDK::CGCEmitGroup::EMsgLevel::kMsg_Verbose )
  {
    GCSDK::EmitBaseMessageV(this, SpewType_t::SPEW_MESSAGE, 4, 4, pchMsg, vaArgs);
  }
}


// GCSDK::EGInternal_EmitInfo  (line 221, @0x0000000003220f10, libserver.so)
// calls: GCSDK::EmitBaseMessageV
// callers: CGCJobLoadSaveGame::BYieldingRunJob, GCSDK::CLock::Dump, GCSDK::CJobMgr::DumpJob, GCSDK::CJobMgr::DumpJobs, GCSDK::CJobMgr::DumpJobSummary, GCSDK::CProtoBufSharedObjectBase::Dump, CRTime::UpdateRealTime
void GCSDK::EGInternal_EmitInfo(
        const GCSDK::CGCEmitGroup *const Group,
        int iLevel,
        int iLevelLog,
        const char *pchMsg,
        ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(Group, SpewType_t::SPEW_MESSAGE, iLevel, iLevelLog, pchMsg, args);
}


// GCSDK::EmitInfoV  (line 229, @0x0000000003220fa0, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void __fastcall GCSDK::EmitInfoV(
        const GCSDK::CGCEmitGroup *const Group,
        int iLevel,
        int iLevelLog,
        const char *pchMsg,
        ___va_list_tag *vaArgs)
{
  GCSDK::EmitBaseMessageV(Group, SpewType_t::SPEW_MESSAGE, iLevel, iLevelLog, pchMsg, vaArgs);
}


// GCSDK::EmitWarning  (line 234, @0x0000000003220fc0, libserver.so)
// calls: GCSDK::EmitBaseMessageV
// callers: GCSDK::CJob::UnsetLock, GCSDK::CJob::_BYieldingAcquireLock, GCSDK::CWorkThreadPool::StartWorkThreads, GCSDK::CWorkThreadPool::StopWorkThreads, GCSDK::CWorkThreadPool::~CWorkThreadPool, GCSDK::CWorkThreadPool::BDispatchCompletedWorkItems
void GCSDK::EmitWarning(const GCSDK::CGCEmitGroup *const Group, int iLevel, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(Group, SpewType_t::SPEW_WARNING, iLevel, iLevel, pchMsg, args);
}


// GCSDK::EmitError  (line 242, @0x0000000003221050, libserver.so)
// calls: GCSDK::EmitBaseMessageV
// callers: GCSDK::IMsgNetPacketFromCNetPacket, GCSDK::CJob::BYieldingWaitForMsg, GCSDK::CJob::PassLockToJob, GCSDK::CJob::_ReleaseLock, GCSDK::CSharedObject::Create, GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectTypeCache::BParseCacheSubscribedMsg, GCSDK::CWorkThreadPool::StartWorkThread
void GCSDK::EmitError(const GCSDK::CGCEmitGroup *const Group, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(Group, SpewType_t::SPEW_ERROR, 1, 1, pchMsg, args);
}


// GCSDK::EmitAssertError  (line 251, @0x00000000032210f0, libserver.so)
// calls: GCSDK::EmitBaseMessageV
void GCSDK::EmitAssertError(const GCSDK::CGCEmitGroup *const Group, const char *pchMsg, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pchMsg);
  GCSDK::EmitBaseMessageV(Group, SpewType_t::SPEW_ASSERT, 1, 1, pchMsg, args);
}


