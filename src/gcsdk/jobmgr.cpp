
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_jobmgr.cpp  (line 0, @0x0000000001a6e410, libserver.so)  // inlines: CGCEmitGroup, Color, SetColor, __static_initialization_and_destruction_0
// strings: "jobmsgcontext"
// globals: UNSPECIFIED_LOGGING_COLOR, GCSDK::g_EGJobMsgContext
void __cdecl GLOBAL__sub_I_jobmgr_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  GCSDK::g_EGJobMsgContext.m_pszGroupName = "jobmsgcontext";
}


// GCSDK::CJobMgr::CJobMgr  (line 35, @0x000000000322b430, libserver.so)  // inlines: CBitVecT, CLargeVarBitVec, CUtlHashMapLarge, CUtlLinkedList, CUtlMemory, CUtlPriorityQueue, CUtlVector, CUtlVectorBase, CVarBitVecBase, ClearAll, ConstructList, EnsureCapacity, JobStats_t, Purge, RemoveAll, ResetDbgInfo, memcpy, memset, ~CUtlLinkedList, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase
// calls: memset, GCSDK::CWorkThreadPool::CWorkThreadPool, GCSDK::CWorkThreadPool::SetWorkThreadAutoConstruct, CommandLine, memcpy, CUtlMemory<unsigned char, int>::Purge, CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::~CUtlHashMapLarge, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::~CUtlHashMapLarge, GCSDK::CWorkThreadPool::~CWorkThreadPool, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::~CUtlHashMapLarge, CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int>::Purge (18 total)
// callers: GCSDK::CGCClient::CGCClient
// strings: "CJobMgr::m_WorkThreadPool", "-slowmsgreceipt"
// globals: GCSDK::CJobMgr::JobSleepingLessFunc(GCSDK::CJobMgr::JobSleeping_t const&,GCSDK::CJobMgr::JobSleeping_t const&)
void __fastcall GCSDK::CJobMgr::CJobMgr(GCSDK::CJobMgr *const this)
{
  GCSDK::CWorkThreadPool *v2; // r12
  int v3; // r14d
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  const void *v9; // r15
  void *v10; // rax

  v2 = (this + 320);
  *this = 0;
  *(this + 1) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  memset(0, 0, 0);
  *(this + 21) = GCSDK::CJobMgr::JobSleepingLessFunc;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  *(this + 19) = -1;
  *(this + 20) = -1;
  *(this + 16) = -1;
  *(this + 11) = 0;
  *(this + 24) = 0;
  *(this + 25) = 0;
  *(this + 31) = -1;
  *(this + 26) = -1;
  *(this + 27) = -1;
  *(this + 28) = -1;
  *(this + 29) = 0;
  *(this + 30) = 0;
  *(this + 16) = 0;
  *(this + 36) = 0;
  *(this + 19) = 0;
  *(this + 40) = 0;
  *(this + 41) = 0;
  *(this + 22) = 0;
  *(this + 46) = 0;
  *(this + 47) = 0;
  *(this + 53) = -1;
  *(this + 48) = -1;
  *(this + 49) = -1;
  *(this + 50) = -1;
  *(this + 51) = 0;
  *(this + 52) = 0;
  *(this + 27) = 0;
  *(this + 56) = 0;
  *(this + 29) = 0;
  *(this + 60) = 0;
  *(this + 61) = 0;
  *(this + 31) = 0;
  *(this + 32) = 0;
  *(this + 33) = 0;
  memset(0, 0, 0);
  *(this + 34) = 0;
  *(this + 70) = 0;
  *(this + 71) = 0;
  *(this + 73) = 0;
  *(this + 74) = 0;
  *(this + 75) = -1;
  *(this + 76) = -1;
  *(this + 72) = -1;
  GCSDK::CWorkThreadPool::CWorkThreadPool(v2, "CJobMgr::m_WorkThreadPool");
  memset(this + 784, 0, 0x30u);
  *(this + 104) = 0;
  *(this + 214) = 0;
  *(this + 108) = 0;
  *(this + 218) = 0;
  *(this + 219) = 0;
  *(this + 110) = 0;
  *(this + 111) = 0;
  *(this + 112) = 0;
  memset(0, 0, 0);
  *(this + 113) = 0;
  *(this + 228) = 0;
  *(this + 229) = 0;
  *(this + 231) = 0;
  *(this + 232) = 0;
  *(this + 233) = -1;
  *(this + 234) = -1;
  *(this + 230) = -1;
  *(this + 236) = 0;
  *(this + 119) = 0;
  *(this + 240) = 0;
  *(this + 241) = 0;
  *(this + 121) = 0;
  *(this + 122) = 0;
  *(this + 123) = 0;
  memset(0, 0, 0);
  *(this + 312) = 0;
  *(this + 124) = 0;
  *(this + 250) = 0;
  *(this + 251) = 0;
  *(this + 253) = 0;
  *(this + 254) = 0;
  *(this + 255) = -1;
  *(this + 256) = -1;
  *(this + 252) = -1;
  *(this + 129) = 0;
  *(this + 260) = 0;
  *(this + 261) = 0;
  *(this + 264) = 0;
  *(this + 133) = 0;
  *(this + 268) = 0;
  *(this + 269) = 0;
  *(this + 34) = 0;
  *(this + 844) = 0;
  *(this + 845) = 0;
  *(this + 212) = 0;
  *(this + 210) = 0;
  GCSDK::CWorkThreadPool::SetWorkThreadAutoConstruct(v2, 1, 0);
  if ( (*(*g_pMemAlloc + 232LL))(g_pMemAlloc) != 0 )
  {
    v3 = (*(*g_pMemAlloc + 232LL))(g_pMemAlloc);
    if ( v3 > *(this + 260) )
    {
      v4 = *(this + 261);
      if ( (v4 & 0x40000000) == 0 )
      {
        if ( (v4 & 0xC0000000) != 0 )
        {
          v9 = *(this + 129);
          v10 = (**g_pMemAlloc)(g_pMemAlloc, v3);
          *(this + 129) = v10;
          if ( v9 != 0 )
            memcpy(v10, v9, *(this + 260));
          *(this + 261) &= 0x3FFFFFFFu;
        }
        else
        {
          v5 = *(this + 129);
          v6 = *g_pMemAlloc;
          if ( v5 != 0 )
            v7 = (*(v6 + 8))(g_pMemAlloc, v5, v3);
          else
            v7 = (*v6)(g_pMemAlloc, v3);
          *(this + 129) = v7;
        }
        *(this + 260) = v3;
      }
    }
  }
  *(this + 262) = 0;
  v8 = CommandLine();
  if ( (*(*v8 + 32LL))(v8, "-slowmsgreceipt") != 0 )
    *(this + 262) = 1000;
}


// GCSDK::CJobMgr::~CJobMgr  (line 73, @0x000000000322ba60, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlHashMapLarge, ~CUtlLinkedList, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: GCSDK::CJobMgr::Shutdown, CUtlMemory<unsigned char, int>::Purge, CVarBitVecBase<int, 32>::Resize, memset, GCSDK::CWorkThreadPool::~CWorkThreadPool, CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int>::Purge, CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int>::Purge, CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int>::Purge, CUtlMemory<CUtlPair<long long unsigned int, char const*>, int>::Purge, CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::HashBucket_t, int>::Purge (15 total)
// callers: GCSDK::CGCClient::~CGCClient
void __fastcall GCSDK::CJobMgr::~CJobMgr(GCSDK::CJobMgr *const this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  GCSDK::CJobMgr::Shutdown(this);
  v2 = (*(this + 269) & 0xC0000000) == 0;
  *(this + 264) = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlPair<unsigned long long,char const*>,int>::Purge((this + 1064));
    if ( (*(this + 269) & 0xC0000000) == 0 )
      CUtlMemory<CUtlPair<unsigned long long,char const*>,int>::Purge((this + 1064));
  }
  CUtlMemory<unsigned char,int>::Purge((this + 1032));
  v3 = *(this + 236);
  *(this + 253) = 0;
  *(this + 254) = 0;
  *(this + 252) = -1;
  *(this + 255) = v3;
  *(this + 256) = -1;
  CVarBitVecBase<int,32>::Resize((this + 968), 0, 0);
  memset(*(this + 119), 255, 4LL * *(this + 236));
  if ( (*(this + 251) & 0xC0000000) == 0 )
  {
    if ( *(this + 124) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      *(this + 124) = 0;
    }
    *(this + 250) = 0;
  }
  if ( *(this + 243) > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(this + 122));
  v2 = (*(this + 241) & 0xC0000000) == 0;
  *(this + 122) = 0;
  *(this + 236) = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge((this + 952));
    if ( (*(this + 241) & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge((this + 952));
  }
  v4 = *(this + 214);
  *(this + 231) = 0;
  *(this + 232) = 0;
  *(this + 230) = -1;
  *(this + 233) = v4;
  *(this + 234) = -1;
  CVarBitVecBase<int,32>::Resize((this + 880), 0, 0);
  memset(*(this + 108), 255, 4LL * *(this + 214));
  if ( (*(this + 229) & 0xC0000000) == 0 )
  {
    if ( *(this + 113) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      *(this + 113) = 0;
    }
    *(this + 228) = 0;
  }
  if ( *(this + 221) > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(this + 111));
  v2 = (*(this + 219) & 0xC0000000) == 0;
  *(this + 111) = 0;
  *(this + 214) = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::HashBucket_t,int>::Purge(this + 54);
    if ( (*(this + 219) & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::HashBucket_t,int>::Purge(this + 54);
  }
  GCSDK::CWorkThreadPool::~CWorkThreadPool((this + 320));
  v5 = *(this + 56);
  *(this + 73) = 0;
  *(this + 74) = 0;
  *(this + 72) = -1;
  *(this + 75) = v5;
  *(this + 76) = -1;
  CVarBitVecBase<int,32>::Resize((this + 248), 0, 0);
  memset(*(this + 29), 255, 4LL * *(this + 56));
  if ( (*(this + 71) & 0xC0000000) == 0 )
  {
    if ( *(this + 34) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      *(this + 34) = 0;
    }
    *(this + 70) = 0;
  }
  if ( *(this + 63) > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(this + 32));
  v2 = (*(this + 61) & 0xC0000000) == 0;
  *(this + 32) = 0;
  *(this + 56) = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge((this + 232));
    if ( (*(this + 61) & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge((this + 232));
  }
  CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::RemoveAll((this + 176));
  CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>::Purge(this + 11);
  v2 = (*(this + 41) & 0xC0000000) == 0;
  *(this + 36) = 0;
  if ( v2 )
  {
    CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>::Purge((this + 152));
    if ( (*(this + 41) & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>::Purge((this + 152));
  }
  CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::RemoveAll((this + 88));
  CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>::Purge((this + 88));
  v6 = *this;
  *(this + 17) = 0;
  *(this + 18) = 0;
  *(this + 16) = -1;
  *(this + 19) = v6;
  *(this + 20) = -1;
  CVarBitVecBase<int,32>::Resize(this + 1, 0, 0);
  memset(*(this + 1), 255, 4LL * *this);
  if ( (*(this + 15) & 0xC0000000) == 0 )
  {
    if ( *(this + 6) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      *(this + 6) = 0;
    }
    *(this + 14) = 0;
  }
  if ( *(this + 7) > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(this + 4));
  v2 = (*(this + 5) & 0xC0000000) == 0;
  *(this + 4) = 0;
  *this = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge((this + 8));
    if ( (*(this + 5) & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge((this + 8));
  }
}


// GCSDK::CJobMgr::Shutdown  (line 82, @0x0000000003224a20, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: GCSDK::CWorkThreadPool::StopWorkThreads, GCSDK::CJob::DeleteJob
// callers: GCSDK::CGCClient::Uninit, GCSDK::CJobMgr::~CJobMgr
void __fastcall GCSDK::CJobMgr::Shutdown(GCSDK::CJobMgr *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // rax

  v2 = 0;
  v3 = 0;
  GCSDK::CWorkThreadPool::StopWorkThreads((this + 320));
  if ( *(this + 18) > 0 )
  {
    do
    {
      v4 = *(this + 6) + v2;
      if ( *(v4 + 16) >= -1 )
        GCSDK::CJob::DeleteJob(*(v4 + 8));
      ++v3;
      v2 += 24;
    }
    while ( *(this + 18) > v3 );
  }
}


// GCSDK::CJobMgr::SetThreadPoolSize  (line 101, @0x0000000003224a80, libserver.so)
// calls: GCSDK::CWorkThreadPool::SetWorkThreadAutoConstruct
// callers: GCSDK::CGCClient::BInit
void __fastcall GCSDK::CJobMgr::SetThreadPoolSize(GCSDK::CJobMgr *const this, uint cThreads)
{
  GCSDK::CWorkThreadPool::SetWorkThreadAutoConstruct((this + 320), cThreads, 0);
}


// GCSDK::CJobMgr::GetNewJobID  (line 110, @0x0000000003224aa0, libserver.so)
// callers: GCSDK::CJob::CJob
JobID_t __fastcall GCSDK::CJobMgr::GetNewJobID(GCSDK::CJobMgr *const this)
{
  JobID_t result; // rax

  result = *(this + 104) + 1LL;
  *(this + 104) = result;
  return result;
}


// GCSDK::CJobMgr::BFrameFuncRunSleepingJobs  (line 128, @0x0000000003227400, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, CheckThreadID, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, GCSDK::CJobMgr::BResumeSleepingJobs, GCSDK::CJobMgr::CheckForJobTimeouts, CVProfile::ExitScope, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: GCSDK::CGCClient::BMainLoop
// strings: "CJobMgr::CheckForJobTimeouts", "Jobs/Coroutines", "CJobMgr::BResumeSleepingJobs"
bool __fastcall GCSDK::CJobMgr::BFrameFuncRunSleepingJobs(GCSDK::CJobMgr *const this, CLimitTimer *const limitTimer)
{
  int CurrentId; // eax
  __int64 v5; // rdi
  int m_enabled; // r9d
  bool v7; // r15
  __int64 v8; // rdi
  bool v9; // r13
  int v10; // r8d
  bool v11; // r15
  uint64 v13; // rcx
  unsigned __int64 v14; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *SubNode; // rax
  CVProfile::CBudgetGroup *v17; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v19; // rax
  ThreadId_t v20; // [rsp+0h] [rbp-40h]
  unsigned __int64 v21; // [rsp+8h] [rbp-38h]
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-38h]

  CurrentId = ThreadGetCurrentId(this);
  if ( *(this + 210) == 0 )
    *(this + 210) = CurrentId;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v7 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v14 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(v5) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CJobMgr::BResumeSleepingJobs" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CJobMgr::BResumeSleepingJobs",
                       0,
                       "Jobs/Coroutines",
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
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v14 + __rdtsc();
  }
  v9 = GCSDK::CJobMgr::BResumeSleepingJobs(this, limitTimer);
  if ( v7 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  v10 = g_VProfCurrentProfile.m_enabled;
  v11 = v10 != 0;
  if ( v10 != 0 )
  {
    v21 = __rdtsc();
    v20 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v20 == ThreadGetCurrentId(v8) )
    {
      SubNode = g_VProfCurrentProfile.m_pCurNode;
      if ( SubNode->m_pszName != "CJobMgr::CheckForJobTimeouts" )
      {
        SubNode = CVProfNode::GetSubNode(
                    g_VProfCurrentProfile.m_pCurNode,
                    "CJobMgr::CheckForJobTimeouts",
                    0,
                    "Jobs/Coroutines",
                    4);
        g_VProfCurrentProfile.m_pCurNode = SubNode;
      }
      v17 = &g_VProfCurrentProfile.m_pBudgetGroups[SubNode->m_BudgetGroupID];
      v17->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    v13 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v13 - v21 + __rdtsc();
  }
  GCSDK::CJobMgr::CheckForJobTimeouts(this, limitTimer);
  if ( v11 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  *(this + 196) = *(this + 17);
  return v9;
}


// GCSDK::CJobMgr::BFrameFuncRunYieldingJobs  (line 158, @0x0000000003225b50, libserver.so)  // inlines: Add, BResumeYieldingJobs, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, CheckThreadID, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, GCSDK::CJobMgr::BResumeYieldingJobsFromList, GCSDK::CWorkThreadPool::BDispatchCompletedWorkItems, CVProfile::ExitScope, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: GCSDK::CGCClient::BMainLoop
// strings: "CJobMgr -- Dispatch completed work items", "Jobs/Coroutines", "CJobMgr::BResumeYieldingJobs"
bool __fastcall GCSDK::CJobMgr::BFrameFuncRunYieldingJobs(GCSDK::CJobMgr *const this, CLimitTimer *const limitTimer)
{
  int CurrentId; // eax
  __int64 v5; // rdi
  int m_enabled; // r15d
  bool v7; // r14
  uint v8; // edx
  __int64 v9; // rdi
  bool v10; // r15
  bool v11; // r14
  bool result; // al
  uint64 v13; // rcx
  unsigned __int64 v14; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *SubNode; // rax
  CVProfile::CBudgetGroup *v17; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v19; // rax
  ThreadId_t m_TargetThreadId; // [rsp+0h] [rbp-40h]
  bool bWorkRemaininga; // [rsp+8h] [rbp-38h]
  unsigned __int64 bWorkRemaining; // [rsp+8h] [rbp-38h]
  ThreadId_t bWorkRemainingb; // [rsp+8h] [rbp-38h]

  CurrentId = ThreadGetCurrentId(this);
  if ( *(this + 210) == 0 )
    *(this + 210) = CurrentId;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v7 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v14 = __rdtsc();
    bWorkRemainingb = g_VProfCurrentProfile.m_TargetThreadId;
    if ( bWorkRemainingb == ThreadGetCurrentId(v5) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CJobMgr::BResumeYieldingJobs" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CJobMgr::BResumeYieldingJobs",
                       0,
                       "Jobs/Coroutines",
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
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v14 + __rdtsc();
  }
  v8 = *(this + 34);
  *(this + 34) = v8 + 1;
  v10 = GCSDK::CJobMgr::BResumeYieldingJobsFromList(this, (this + 88), v8, limitTimer);
  if ( v7 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  v11 = g_VProfCurrentProfile.m_enabled != 0;
  if ( g_VProfCurrentProfile.m_enabled != 0 )
  {
    bWorkRemaining = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(v9) )
    {
      SubNode = g_VProfCurrentProfile.m_pCurNode;
      if ( SubNode->m_pszName != "CJobMgr -- Dispatch completed work items" )
      {
        SubNode = CVProfNode::GetSubNode(
                    g_VProfCurrentProfile.m_pCurNode,
                    "CJobMgr -- Dispatch completed work items",
                    0,
                    "Jobs/Coroutines",
                    4);
        g_VProfCurrentProfile.m_pCurNode = SubNode;
      }
      v17 = &g_VProfCurrentProfile.m_pBudgetGroups[SubNode->m_BudgetGroupID];
      v17->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    v13 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v13 - bWorkRemaining + __rdtsc();
  }
  result = v10 | GCSDK::CWorkThreadPool::BDispatchCompletedWorkItems((this + 320), limitTimer, this);
  if ( v11 )
  {
    bWorkRemaininga = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    result = bWorkRemaininga;
  }
  *(this + 196) = *(this + 17);
  return result;
}


// GCSDK::CJobMgr::InsertJob  (line 188, @0x00000000032283a0, libserver.so)  // inlines: AllocNode, Bitvec_Set, CopyConstruct<GCSDK::CJob*>, CopyConstruct<long long unsigned int>, FindInBucket, FreeNodeIDToIndex, Get, IncrementalRehash, Insert, InsertInternal, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, RehashNodesInBucket, Set, operator(), operator[]
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::EnsureCapacity, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket, MurmurHash3_32, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket, CUtlMemory<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::Node_t, int>::Grow, CVarBitVecBase<int, 32>::Resize
// callers: GCSDK::CJob::CJob
void __fastcall GCSDK::CJobMgr::InsertJob(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // r9d
  _DWORD *v10; // rax
  int v11; // eax
  bool v12; // cc
  int v13; // r13d
  __int64 i; // rax
  int v15; // ebx
  _DWORD *v16; // rdi
  int v17; // r12d
  uint32 v18; // r14d
  int v19; // edx
  __int64 v20; // rax
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // esi
  JobID_t *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  uint32 v32; // [rsp+8h] [rbp-48h]
  int v33; // [rsp+Ch] [rbp-44h]
  JobID_t key[7]; // [rsp+18h] [rbp-38h] BYREF

  v3 = *this;
  key[0] = job->m_JobID;
  v4 = *(this + 17);
  if ( v4 >= v3 )
  {
    v5 = 2 * v3;
    v6 = 16;
    if ( v5 > 15 )
      v6 = v5;
    CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::EnsureCapacity(
      this,
      v6);
    v4 = *(this + 17);
  }
  v7 = *(this + 14);
  if ( v7 <= v4 )
    CUtlMemory<CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Node_t,int>::Grow(
      this + 3,
      2 * v7);
  v8 = *(this + 19);
  v9 = *(this + 20);
  if ( v8 < v9 )
  {
    v10 = (*(this + 1) + 4LL * v8);
    while ( *v10 == -1 || ((1 << v8) & *(*(this + 4) + 4LL * (v8 >> 5))) != 0 )
    {
      ++v8;
      ++v10;
      *(this + 19) = v8;
      if ( v8 == v9 )
        goto LABEL_36;
    }
    CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::RehashNodesInBucket(
      this,
      v8);
    v11 = *(this + 19) + 1;
    v12 = v11 < *(this + 20);
    *(this + 19) = v11;
    if ( v12 )
      goto LABEL_13;
LABEL_36:
    v30 = *this;
    *(this + 20) = -1;
    *(this + 19) = v30;
    CVarBitVecBase<int,32>::Resize(this + 1, 0, 0);
  }
LABEL_13:
  v32 = MurmurHash3_32(key, 8u, 0x417u, 0);
  v33 = *this >> 1;
  v13 = v32 & (v33 - 1);
  if ( v13 >= *(this + 19) )
  {
    for ( i = *(this + 4); ((1 << v13) & *(i + 4LL * (v13 >> 5))) == 0; i = *(this + 4) )
    {
      *(i + 4LL * (v13 >> 5)) |= 1 << v13;
      v15 = *(*(this + 1) + 4LL * v13);
      if ( v15 != -1 )
      {
        while ( 1 )
        {
          v16 = (*(this + 6) + 24LL * v15);
          v17 = v16[4];
          v18 = (*this - 1) & MurmurHash3_32(v16, 8u, 0x417u, 0);
          if ( v13 != v18 )
          {
            CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
              this,
              v13,
              v15);
            CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
              this,
              v18,
              v15);
          }
          if ( v17 == -1 )
            break;
          v15 = v17;
        }
      }
      v33 >>= 1;
      v13 = v32 & (v33 - 1);
      if ( v13 < *(this + 19) )
        break;
    }
  }
  v19 = *(this + 17);
  if ( v19 == 0 || (v27 = *(*(this + 1) + 4LL * (v32 & (*this - 1)))) == -1 )
  {
    v20 = *(this + 6);
  }
  else
  {
    v20 = *(this + 6);
    v28 = v20 + 24 * v27;
    if ( key[0] == *v28 )
    {
LABEL_35:
      *(v28 + 8) = job;
      return;
    }
    while ( 1 )
    {
      v29 = *(v28 + 16);
      if ( v29 == -1 )
        break;
      v28 = v20 + 24 * v29;
      if ( key[0] == *v28 )
        goto LABEL_35;
    }
  }
  if ( v19 == *(this + 18) )
  {
    *(this + 17) = v19 + 1;
    *(this + 18) = v19 + 1;
    v22 = 24LL * v19;
    *(v22 + v20 + 16) = -1;
    v25 = (*(this + 6) + v22);
    if ( v25 != 0 )
      goto LABEL_27;
LABEL_38:
    v26 = 0;
    goto LABEL_28;
  }
  v21 = *(this + 16);
  v22 = 24LL * v21;
  v23 = v22 + v20;
  v24 = -3 - *(v23 + 16);
  *(this + 17) = v19 + 1;
  v19 = v21;
  *(this + 16) = v24;
  *(v23 + 16) = -1;
  v25 = (*(this + 6) + v22);
  if ( v25 == 0 )
    goto LABEL_38;
LABEL_27:
  *v25 = key[0];
  v26 = *(this + 6) + v22;
LABEL_28:
  if ( v26 != -8 )
    *(v26 + 8) = job;
  CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
    this,
    v32 & (*this - 1),
    v19);
}


// GCSDK::CJobMgr::AccumulateStatsofJob  (line 201, @0x00000000032286d0, libserver.so)  // inlines: AllocNode, Bitvec_Set, CopyConstruct<GCSDK::JobStatsBucket_t>, CopyConstruct<long long int>, Element, End, Find, FindInBucket, FreeNodeIDToIndex, Get, GetCycles64, GetMicroseconds64, IncrementalRehash, Insert, InsertInternal, JobStatsBucket_t, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long int>, PLAT_CPU_TIME, Plat_TickDiffMicroSec, RehashNodesInBucket, Sample, Set, UnlinkNodeFromBucket, V_strcpy_safe<64ul>, memset, operator(), operator+=, operator[]
// calls: GCSDK::CJob::GetName, MurmurHash3_32, GCSDK::CJobTime::CServerMicroSecsPassed, Plat_GetCPUFrequency, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::RehashNodesInBucket, CVarBitVecBase<int, 32>::Resize, memcpy, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::LinkNodeIntoBucket, _V_strncpy, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::EnsureCapacity, CUtlMemory<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::Node_t, int>::Grow, __stack_chk_fail
// callers: GCSDK::CJobMgr::RemoveJob
void __fastcall GCSDK::CJobMgr::AccumulateStatsofJob(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  GCSDK::CJobMgr *v2; // r14
  GCSDK::CJob *v3; // r13
  unsigned __int64 v4; // rax
  uint64 v5; // rdx
  const char *Name; // rax
  int v7; // r11d
  uint32 v8; // eax
  int v9; // r9d
  __int64 v10; // r12
  __int64 v11; // rdx
  intp v12; // rdi
  intp v13; // rsi
  intp v14; // rdx
  __int64 v15; // rdx
  int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  uint64 m_Int64; // rax
  unsigned __int64 CPUFrequency; // rax
  int v24; // edx
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // r8d
  _DWORD *v29; // rax
  int v30; // eax
  bool v31; // cc
  int v32; // eax
  int v33; // ebx
  __int64 v34; // rax
  int v35; // r12d
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // edx
  intp *v41; // rax
  __int64 v42; // rax
  const char *v43; // rax
  int v44; // eax
  int v45; // esi
  int v46; // r12d
  GCSDK::CJobMgr *v47; // r13
  int i; // r14d
  _DWORD *v49; // rdi
  int v50; // ebx
  uint32 v51; // eax
  __int64 v52; // rdi
  int *v53; // rcx
  int v54; // esi
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  GCSDK::CJob *joba; // [rsp+10h] [rbp-150h]
  uint32 v63; // [rsp+18h] [rbp-148h]
  int v64; // [rsp+1Ch] [rbp-144h]
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >_0 *v65; // [rsp+28h] [rbp-138h]
  intp eBucket; // [rsp+38h] [rbp-128h] BYREF
  _QWORD v67[36]; // [rsp+40h] [rbp-120h] BYREF

  v2 = this;
  v3 = job;
  v67[29] = __readfsqword(0x28u);
  if ( *(this + 844) != 0 )
  {
    if ( job->m_flags.m_uFlags == 0 )
      goto LABEL_5;
    goto LABEL_25;
  }
  if ( job->m_flags.m_uFlags != 0 )
  {
LABEL_25:
    ++*(this + 212);
LABEL_5:
    v4 = __rdtsc();
    eBucket = 0;
    v5 = (v4 | (HIDWORD(v4) << 32)) - job->m_FastTimerDelta.m_Duration.m_Int64;
    job->m_cyclecountTotal.m_Int64 += v5;
    job->m_FastTimerDelta.m_Duration.m_Int64 = v5;
    Name = GCSDK::CJob::GetName(job);
    v7 = *(v2 + 231);
    eBucket = Name;
    if ( v7 != 0 )
    {
      v8 = MurmurHash3_32(&eBucket, 8u, 0x417u, 0);
      v9 = *(v2 + 214);
      v10 = *(v2 + 108);
      v11 = *(v10 + 4LL * (v8 & (v9 - 1)));
      if ( v11 != -1 )
      {
        v12 = *(v2 + 113);
        v13 = eBucket;
        v14 = v12 + 240 * v11;
        if ( eBucket == *v14 )
        {
LABEL_19:
          v21 = v14;
          goto LABEL_20;
        }
        while ( 1 )
        {
          v15 = *(v14 + 232);
          if ( v15 == -1 )
            break;
          v14 = v12 + 240 * v15;
          if ( *v14 == eBucket )
            goto LABEL_19;
        }
      }
      v16 = *(v2 + 233);
      v13 = (v9 >> 1);
      if ( v13 >= v16 )
      {
        v12 = eBucket;
        do
        {
          v17 = v8 & (v13 - 1);
          if ( ((1 << (v8 & (v13 - 1))) & *(*(v2 + 111) + 4LL * (v17 >> 5))) == 0 )
          {
            v18 = *(v10 + 4LL * v17);
            if ( v18 != -1 )
            {
              v19 = *(v2 + 113);
              v14 = v19 + 240 * v18;
              if ( eBucket == *v14 )
                goto LABEL_19;
              while ( 1 )
              {
                v20 = *(v14 + 232);
                if ( v20 == -1 )
                  break;
                v14 = v19 + 240 * v20;
                if ( *v14 == eBucket )
                  goto LABEL_19;
              }
            }
          }
          v13 = (v13 >> 1);
        }
        while ( v13 >= v16 );
      }
      v24 = *(v2 + 231);
      v25 = *(v2 + 214);
    }
    else
    {
      v25 = *(v2 + 214);
      v24 = 0;
    }
    v65 = (v2 + 856);
    memset(v67, 0, 0xE0u);
    if ( v24 >= v25 )
    {
      v44 = 2 * v25;
      v45 = 16;
      if ( v44 > 15 )
        v45 = v44;
      CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::EnsureCapacity(
        v65,
        v45);
      v24 = *(v2 + 231);
    }
    v26 = *(v2 + 228);
    if ( v26 <= v24 )
      CUtlMemory<CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::Node_t,int>::Grow(
        (v2 + 904),
        2 * v26);
    v27 = *(v2 + 233);
    v28 = *(v2 + 234);
    if ( v27 < v28 )
    {
      v29 = (*(v2 + 108) + 4LL * v27);
      while ( *v29 == -1 || ((1 << v27) & *(*(v2 + 111) + 4LL * (v27 >> 5))) != 0 )
      {
        ++v27;
        ++v29;
        *(v2 + 233) = v27;
        if ( v27 == v28 )
          goto LABEL_36;
      }
      CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::RehashNodesInBucket(
        v65,
        v27);
      v30 = *(v2 + 233) + 1;
      v31 = v30 < *(v2 + 234);
      *(v2 + 233) = v30;
      if ( v31 )
        goto LABEL_37;
LABEL_36:
      v32 = *(v2 + 214);
      *(v2 + 234) = -1;
      *(v2 + 233) = v32;
      CVarBitVecBase<int,32>::Resize((v2 + 880), 0, 0);
    }
LABEL_37:
    v63 = MurmurHash3_32(&eBucket, 8u, 0x417u, 0);
    v64 = *(v2 + 214) >> 1;
    v33 = v63 & (v64 - 1);
    if ( v33 < *(v2 + 233) || (v34 = *(v2 + 111), ((1 << v33) & *(v34 + 4LL * (v33 >> 5))) != 0) )
    {
      v35 = *(v2 + 231);
      if ( v35 == 0 )
        goto LABEL_40;
    }
    else
    {
      v46 = v63 & (v64 - 1);
      joba = v3;
      do
      {
        *(v34 + 4LL * (v46 >> 5)) |= 1 << v46;
        if ( *(*(v2 + 108) + 4LL * v46) != -1 )
        {
          v47 = v2;
          for ( i = *(*(v2 + 108) + 4LL * v46); ; i = v50 )
          {
            v49 = (*(v47 + 113) + 240LL * i);
            v50 = v49[58];
            v51 = (*(v47 + 214) - 1) & MurmurHash3_32(v49, 8u, 0x417u, 0);
            if ( v46 != v51 )
            {
              v52 = *(v47 + 113);
              v53 = (*(v47 + 108) + 4LL * v46);
              v54 = *(v52 + 240LL * i + 232);
              v55 = *v53;
              if ( i == v55 )
              {
                *v53 = v54;
              }
              else if ( v55 != -1 )
              {
                v56 = v52 + 240 * v55;
                v57 = *(v56 + 232);
                if ( i == v57 )
                {
LABEL_66:
                  *(v56 + 232) = v54;
                }
                else
                {
                  while ( v57 != -1 )
                  {
                    v56 = v52 + 240 * v57;
                    v57 = *(v56 + 232);
                    if ( i == v57 )
                      goto LABEL_66;
                  }
                }
              }
              CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::LinkNodeIntoBucket(
                v65,
                v51,
                i);
            }
            if ( v50 == -1 )
              break;
          }
          v2 = v47;
        }
        v64 >>= 1;
        v46 = v63 & (v64 - 1);
        if ( v46 < *(v2 + 233) )
          break;
        v34 = *(v2 + 111);
      }
      while ( ((1 << v46) & *(v34 + 4LL * (v46 >> 5))) == 0 );
      v35 = *(v2 + 231);
      v3 = joba;
      if ( v35 == 0 )
        goto LABEL_40;
    }
    v58 = *(*(v2 + 108) + 4LL * (v63 & (*(v2 + 214) - 1)));
    if ( v58 != -1 )
    {
      v59 = *(v2 + 113);
      v38 = 240 * v58;
      v60 = v59 + v38;
      if ( eBucket == *(v59 + v38) )
      {
LABEL_79:
        memcpy((v60 + 8), v67, 0xE0u);
LABEL_48:
        v43 = GCSDK::CJob::GetName(v3);
        _V_strncpy(*(v2 + 113) + v38 + 8, v43, 64);
        v21 = (*(v2 + 113) + v38);
LABEL_20:
        ++v21[9];
        v21[13] += v3->m_cLocksAttempted;
        v21[14] += v3->m_cLocksWaitedFor;
        v21[15] += (*&v3->m_flags.m_bits & 2) != 0;
        v21[16] += (*&v3->m_flags.m_bits & 4) != 0;
        v21[17] += (*&v3->m_flags.m_bits & 8) != 0;
        v21[18] += (*&v3->m_flags.m_bits & 0x10) != 0;
        v21[21] += *&v3->m_flags.m_bits & 1;
        v21[12] += (*&v3->m_flags.m_bits & 0x20) != 0;
        v21[11] += (*&v3->m_flags.m_bits & 0x40) != 0;
        v21[22] += v3->m_cyclecountTotal.m_Int64;
        m_Int64 = v3->m_cyclecountTotal.m_Int64;
        if ( v21[10] < m_Int64 )
        {
          v21[10] = m_Int64;
          if ( v3->m_STimeStarted.m_lTime != v3->m_STimeSwitched.m_lTime )
            goto LABEL_22;
        }
        else if ( v3->m_STimeStarted.m_lTime != v3->m_STimeSwitched.m_lTime )
        {
LABEL_22:
          ++v21[20];
          v21[19] += GCSDK::CJobTime::CServerMicroSecsPassed(&v3->m_STimeStarted);
          return;
        }
        CPUFrequency = Plat_GetCPUFrequency(v12, v13, v14);
        v21[19] += 1000000 * (v3->m_cyclecountTotal.m_Int64 / CPUFrequency)
                 + 1000000 * (v3->m_cyclecountTotal.m_Int64 % CPUFrequency) / CPUFrequency;
        return;
      }
      while ( 1 )
      {
        v61 = *(v60 + 232);
        if ( v61 == -1 )
          break;
        v38 = 240 * v61;
        v60 = v59 + v38;
        if ( eBucket == *(v59 + v38) )
          goto LABEL_79;
      }
      v36 = *(v2 + 113);
LABEL_41:
      if ( v35 == *(v2 + 232) )
      {
        *(v2 + 231) = v35 + 1;
        *(v2 + 232) = v35 + 1;
        v38 = 240LL * v35;
        v39 = v38 + v36;
      }
      else
      {
        v37 = *(v2 + 230);
        v38 = 240LL * v37;
        v39 = v38 + v36;
        v40 = -3 - *(v39 + 232);
        *(v2 + 231) = v35 + 1;
        v35 = v37;
        *(v2 + 230) = v40;
      }
      *(v39 + 232) = -1;
      v41 = (*(v2 + 113) + v38);
      if ( v41 != 0 )
      {
        *v41 = eBucket;
        v42 = *(v2 + 113) + v38;
      }
      else
      {
        v42 = 0;
      }
      if ( v42 != -8 )
        memcpy((v42 + 8), v67, 0xE0u);
      CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::LinkNodeIntoBucket(
        v65,
        v63 & (*(v2 + 214) - 1),
        v35);
      goto LABEL_48;
    }
LABEL_40:
    v36 = *(v2 + 113);
    goto LABEL_41;
  }
}


// GCSDK::CJobMgr::RecordOrphanedMessage  (line 254, @0x0000000003229bc0, libserver.so)  // inlines: AllocNode, Bitvec_Set, CopyConstruct<int>, CopyConstruct<unsigned int>, Find, FindInBucket, FreeNodeIDToIndex, Get, IncrementalRehash, Insert, InsertInternal, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, RehashNodesInBucket, Set, UnlinkNodeFromBucket, operator(), operator[]
// calls: LoggingSystem_IsChannelEnabled, GCSDK::PchMsgNameFromEMsg, LoggingSystem_Log, CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::EnsureCapacity, CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket, CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket, CUtlMemory<CUtlHashMapLarge<unsigned int, int>::Node_t, int>::Grow, CVarBitVecBase<int, 32>::Resize
// callers: GCSDK::CJobMgr::BRouteMsgToJob
// strings: "Message %s arrived responding to job %lld which no longer exists, dropping message\n"
void __fastcall GCSDK::CJobMgr::RecordOrphanedMessage(
        GCSDK::CJobMgr *const this,
        GCSDK::MsgType_t eMsg,
        JobID_t jobIDTarget)
{
  int v6; // r11d
  GCSDK::MsgType_t v7; // eax
  int v8; // ebx
  __int64 v9; // r12
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rax
  int v15; // esi
  int i; // edx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  const char *v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  int v28; // eax
  _DWORD *v29; // rax
  bool v30; // cc
  int v31; // r13d
  __int64 j; // rax
  int v33; // edx
  __int64 v34; // rdi
  _DWORD *v35; // rax
  int v36; // ebx
  int v37; // esi
  int *v38; // r11
  __int64 v39; // rax
  __int64 v40; // r11
  int v41; // edx
  __int64 v42; // rax
  int v43; // esi
  __int64 v44; // r12
  __int64 v45; // rax
  int v46; // ecx
  GCSDK::MsgType_t *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // edx
  __int64 v50; // rax
  _DWORD *v51; // rax
  int v52; // eax
  int v53; // [rsp+0h] [rbp-40h]
  int v54; // [rsp+4h] [rbp-3Ch]
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *v55; // [rsp+8h] [rbp-38h]

  if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 1) != 0 )
  {
    v21 = GCSDK::PchMsgNameFromEMsg(eMsg);
    LoggingSystem_Log(
      LOG_CONSOLE,
      1,
      "Message %s arrived responding to job %lld which no longer exists, dropping message\n",
      v21,
      jobIDTarget);
  }
  v6 = *(this + 253);
  v7 = (-2048144789 * (eMsg ^ HIWORD(eMsg))) ^ ((-2048144789 * (eMsg ^ HIWORD(eMsg))) >> 13);
  if ( v6 != 0 )
  {
    v8 = *(this + 236);
    v9 = *(this + 119);
    v10 = (-1028477387 * v7) ^ ((-1028477387 * v7) >> 16);
    v11 = *(v9 + 4LL * (v10 & (v8 - 1)));
    if ( v11 != -1 )
    {
      v12 = *(this + 124);
      v13 = (v12 + 12 * v11);
      if ( eMsg == *v13 )
        goto LABEL_17;
      while ( 1 )
      {
        v14 = v13[2];
        if ( v14 == -1 )
          break;
        v13 = (v12 + 12 * v14);
        if ( eMsg == *v13 )
          goto LABEL_17;
      }
    }
    v15 = *(this + 255);
    for ( i = v8 >> 1; i >= v15; i >>= 1 )
    {
      v17 = v10 & (i - 1);
      if ( ((1 << (v10 & (i - 1))) & *(*(this + 122) + 4LL * (v17 >> 5))) == 0 )
      {
        v18 = *(v9 + 4LL * v17);
        if ( v18 != -1 )
        {
          v19 = *(this + 124);
          v13 = (v19 + 12 * v18);
          if ( eMsg == *v13 )
            goto LABEL_17;
          while ( 1 )
          {
            v20 = v13[2];
            if ( v20 == -1 )
              break;
            v13 = (v19 + 12 * v20);
            if ( eMsg == *v13 )
              goto LABEL_17;
          }
        }
      }
    }
    v53 = v10;
    v22 = *(this + 236);
  }
  else
  {
    v49 = -1028477387 * v7;
    v22 = *(this + 236);
    v53 = v49 ^ HIWORD(v49);
  }
  v55 = (this + 944);
  if ( v6 >= v22 )
  {
    v23 = 2 * v22;
    v24 = 16;
    if ( v23 > 15 )
      v24 = v23;
    CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::EnsureCapacity(
      v55,
      v24);
    v6 = *(this + 253);
  }
  v25 = *(this + 250);
  if ( v25 <= v6 )
    CUtlMemory<CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Node_t,int>::Grow(
      this + 62,
      2 * v25);
  v26 = *(this + 255);
  v27 = *(this + 256);
  v28 = v26;
  if ( v26 < v27 )
  {
    v29 = (*(this + 119) + 4LL * v26);
    while ( *v29 == -1 || ((1 << v26) & *(*(this + 122) + 4LL * (v26 >> 5))) != 0 )
    {
      ++v26;
      ++v29;
      *(this + 255) = v26;
      if ( v26 == v27 )
        goto LABEL_62;
    }
    CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::RehashNodesInBucket(
      v55,
      v26);
    v28 = *(this + 255) + 1;
    v30 = v28 < *(this + 256);
    *(this + 255) = v28;
    if ( v30 )
      goto LABEL_31;
LABEL_62:
    v52 = *(this + 236);
    *(this + 256) = -1;
    *(this + 255) = v52;
    CVarBitVecBase<int,32>::Resize((this + 968), 0, 0);
    v28 = *(this + 255);
  }
LABEL_31:
  v54 = *(this + 236) >> 1;
  v31 = v53 & (v54 - 1);
  if ( v31 >= v28 )
  {
    for ( j = *(this + 122); ((1 << v31) & *(j + 4LL * (v31 >> 5))) == 0; j = *(this + 122) )
    {
      *(j + 4LL * (v31 >> 5)) |= 1 << v31;
      v33 = *(*(this + 119) + 4LL * v31);
      if ( v33 != -1 )
      {
        while ( 1 )
        {
          v34 = *(this + 124);
          v35 = (v34 + 12LL * v33);
          v36 = v35[2];
          LODWORD(v35) = -1028477387
                       * ((-2048144789 * (*v35 ^ HIWORD(*v35))) ^ ((-2048144789 * (*v35 ^ HIWORD(*v35))) >> 13));
          v37 = (*(this + 236) - 1) & (v35 ^ (v35 >> 16));
          if ( v31 != v37 )
          {
            v38 = (*(this + 119) + 4LL * v31);
            v39 = *v38;
            if ( v33 == v39 )
            {
              *v38 = v36;
            }
            else
            {
              while ( v39 != -1 )
              {
                v40 = v34 + 12 * v39;
                v39 = *(v40 + 8);
                if ( v33 == v39 )
                {
                  *(v40 + 8) = v36;
                  break;
                }
              }
            }
            CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
              v55,
              v37,
              v33);
          }
          if ( v36 == -1 )
            break;
          v33 = v36;
        }
      }
      v54 >>= 1;
      v31 = v53 & (v54 - 1);
      if ( v31 < *(this + 255) )
        break;
    }
  }
  v41 = *(this + 253);
  if ( v41 == 0 || (v50 = *(*(this + 119) + 4LL * (v53 & (*(this + 236) - 1)))) == -1 )
  {
    v42 = *(this + 124);
  }
  else
  {
    do
    {
      v44 = 12 * v50;
      v51 = (*(this + 124) + 12 * v50);
      if ( eMsg == *v51 )
      {
        v51[1] = 0;
        goto LABEL_53;
      }
      v50 = v51[2];
    }
    while ( v50 != -1 );
    v42 = *(this + 124);
  }
  if ( v41 == *(this + 254) )
  {
    *(this + 253) = v41 + 1;
    *(this + 254) = v41 + 1;
    v44 = 12LL * v41;
    v45 = v44 + v42;
  }
  else
  {
    v43 = *(this + 252);
    v44 = 12LL * v43;
    v45 = v44 + v42;
    v46 = -3 - *(v45 + 8);
    *(this + 253) = v41 + 1;
    v41 = v43;
    *(this + 252) = v46;
  }
  *(v45 + 8) = -1;
  v47 = (*(this + 124) + v44);
  if ( v47 != 0 )
  {
    *v47 = eMsg;
    v48 = *(this + 124) + v44;
  }
  else
  {
    v48 = 0;
  }
  if ( v48 != -4 )
    *(v48 + 4) = 0;
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
    v55,
    v53 & (*(this + 236) - 1),
    v41);
LABEL_53:
  v13 = (*(this + 124) + v44);
LABEL_17:
  ++v13[1];
}


// GCSDK::CJobMgr::RemoveJob  (line 271, @0x0000000003228f00, libserver.so)  // inlines: FreeNodeIndexToID, Get, IsValidIndex, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, Remove, RemoveAt, RemoveNodeFromBucket, operator(), operator[]
// calls: CUtlVectorBase<CUtlPair<long long unsigned int, char const*>, CUtlMemory<CUtlPair<long long unsigned int, char const*>, int> >::Remove, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find, GCSDK::CJobMgr::AccumulateStatsofJob, GCSDK::CJobTime::CServerMicroSecsPassed, MurmurHash3_32, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket
// callers: GCSDK::CJob::~CJob
void __fastcall GCSDK::CJobMgr::RemoveJob(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  int v4; // ebx
  JobID_t m_JobID; // rax
  __int64 v6; // r12
  CUtlVectorBase<CUtlPair<long long unsigned int,char const*>,CUtlMemory<CUtlPair<long long unsigned int,char const*>,int> > *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdx
  int v10; // esi
  int v11; // eax
  int v12; // r12d
  unsigned __int64 v13; // rax
  double v14; // xmm0_8
  bool v15; // cc
  int *v16; // rdi
  uint32 v17; // eax
  __int64 v18; // r9
  int v19; // esi
  __int64 v20; // rbx
  int v21; // esi
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  bool v25; // zf
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::KeyType_t key[7]; // [rsp+8h] [rbp-38h] BYREF

  v4 = *(this + 264) - 1;
  if ( v4 >= 0 )
  {
    m_JobID = job->m_JobID;
    v6 = 16LL * v4;
    if ( *(*(this + 133) + v6) != m_JobID )
      goto LABEL_7;
    v7 = (this + 1056);
    v8 = v6 - 16;
    while ( 1 )
    {
      v10 = v4--;
      CUtlVectorBase<CUtlPair<unsigned long long,char const*>,CUtlMemory<CUtlPair<unsigned long long,char const*>,int>>::Remove(
        v7,
        v10);
      if ( v4 == -1 )
        break;
      v9 = *(*(this + 133) + v8);
      v8 -= 16;
      m_JobID = job->m_JobID;
      if ( v9 != m_JobID )
        goto LABEL_7;
    }
  }
  m_JobID = job->m_JobID;
LABEL_7:
  key[0] = m_JobID;
  v11 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
          this,
          key);
  v12 = v11;
  if ( v11 < 0 )
    goto LABEL_9;
  if ( v11 >= *(this + 18) )
    goto LABEL_9;
  v16 = (*(this + 6) + 24LL * v11);
  if ( v16[4] < -1 )
    goto LABEL_9;
  v17 = MurmurHash3_32(v16, 8u, 0x417u, 0);
  v18 = *(this + 1);
  v19 = v17 & (*this - 1);
  v20 = *(v18 + 4LL * v19);
  if ( v20 != -1 )
  {
    if ( v12 == v20 )
    {
LABEL_34:
      v24 = v12;
      goto LABEL_31;
    }
    while ( 1 )
    {
      LODWORD(v20) = *(*(this + 6) + 24 * v20 + 16);
      if ( v20 == -1 )
        break;
      if ( v12 == v20 )
        goto LABEL_34;
    }
  }
  v21 = *(this + 19);
  v22 = *this >> 1;
  if ( v22 < v21 )
    goto LABEL_9;
  while ( 1 )
  {
    v23 = v17 & (v22 - 1);
    if ( ((1 << (v17 & (v22 - 1))) & *(*(this + 4) + 4LL * (v23 >> 5))) == 0 )
    {
      v20 = *(v18 + 4LL * v23);
      if ( v20 != -1 )
        break;
    }
LABEL_24:
    v22 >>= 1;
    if ( v22 < v21 )
      goto LABEL_9;
  }
  while ( v12 != v20 )
  {
    LODWORD(v20) = *(*(this + 6) + 24 * v20 + 16);
    if ( v20 == -1 )
      goto LABEL_24;
  }
  v24 = v12;
  v19 = v23;
LABEL_31:
  CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
    this,
    v19,
    v24);
  *(*(this + 6) + 24LL * v20 + 16) = -3 - *(this + 16);
  v25 = (*(this + 17))-- == 1;
  *(this + 16) = v20;
  if ( v25 )
    *(this + 19) = *this;
LABEL_9:
  GCSDK::CJobMgr::AccumulateStatsofJob(this, job);
  ++*(this + 197);
  if ( (*&job->m_flags.m_bits & 1) != 0 )
    ++*(this + 198);
  v13 = GCSDK::CJobTime::CServerMicroSecsPassed(&job->m_STimeStarted);
  if ( (v13 & 0x8000000000000000LL) != 0LL )
    v14 = (v13 & 1 | (v13 >> 1)) + (v13 & 1 | (v13 >> 1));
  else
    v14 = v13;
  v15 = v13 <= *(this + 102);
  *(this + 101) = v14 + *(this + 101);
  if ( !v15 )
    *(this + 102) = v13;
}


// GCSDK::CJobMgr::BIsJobRunning  (line 630, @0x0000000003224ac0, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: GCSDK::CJob::GetName, V_stricmp_fast
bool __fastcall GCSDK::CJobMgr::BIsJobRunning(GCSDK::CJobMgr *const this, const char *pchJobName)
{
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rax
  const char *Name; // rax

  v4 = 0;
  v5 = 0;
  if ( *(this + 18) <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = *(this + 6) + v5;
    if ( *(v6 + 16) >= -1 )
    {
      Name = GCSDK::CJob::GetName(*(v6 + 8));
      if ( V_stricmp_fast(Name, pchJobName) == 0 )
        break;
    }
    ++v4;
    v5 += 24;
    if ( *(this + 18) <= v4 )
      return 0;
  }
  return 1;
}


// GCSDK::CJobMgr::BJobExists  (line 644, @0x0000000003225100, libserver.so)
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find
bool __fastcall GCSDK::CJobMgr::BJobExists(const GCSDK::CJobMgr *const this, JobID_t jobID)
{
  JobID_t jobIDa; // [rsp+8h] [rbp-8h] BYREF

  jobIDa = jobID;
  return CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
           this,
           &jobIDa) != -1;
}


// GCSDK::CJobMgr::GetPJob  (line 653, @0x0000000003225120, libserver.so)  // inlines: Element, operator[]
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find
// callers: GCSDK::CJobMgr::DumpJob
const GCSDK::CJob *__fastcall GCSDK::CJobMgr::GetPJob(const GCSDK::CJobMgr *const this, JobID_t jobID)
{
  int v3; // eax
  JobID_t jobIDa[3]; // [rsp+8h] [rbp-18h] BYREF

  jobIDa[0] = jobID;
  v3 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
         this,
         jobIDa);
  if ( v3 == -1 )
    return 0;
  else
    return *(*(this + 6) + 24LL * v3 + 8);
}


// GCSDK::CJobMgr::GetPJob  (line 663, @0x00000000032253d0, libserver.so)  // inlines: Element, operator[]
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find
// callers: GCSDK::CJobMgr::SetWaitForWorkItemJobOwner, GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob, GCSDK::CJobMgr::BYieldingWaitForJob
GCSDK::CJob *__fastcall GCSDK::CJobMgr::GetPJob(GCSDK::CJobMgr *const this, JobID_t jobID)
{
  int v3; // eax
  JobID_t jobIDa[3]; // [rsp+8h] [rbp-18h] BYREF

  jobIDa[0] = jobID;
  v3 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
         this,
         jobIDa);
  if ( v3 == -1 )
    return 0;
  else
    return *(*(this + 6) + 24LL * v3 + 8);
}


// GCSDK::CJobMgr::BRouteMsgToJob  (line 678, @0x000000000322a100, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Element, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find, GCSDK::CJobMgr::PassMsgToJob, CVProfile::ExitScope, GCSDK::CJobMgr::BLaunchJobFromNetworkMsg, GCSDK::CJobMgr::RecordOrphanedMessage, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: GCSDK::CGCClient::DispatchPacket
// strings: "CJobMgr::BRouteMsgToJob() - job", "Jobs/Coroutines", "CJobMgr::BRouteMsgToJob() - continue job"
bool __fastcall GCSDK::CJobMgr::BRouteMsgToJob(
        GCSDK::CJobMgr *const this,
        void *pParent,
        GCSDK::IMsgNetPacket *pNetPacket,
        GCSDK::EGCMsgContext nCreateContext)
{
  __int64 v8; // rdi
  int v9; // ecx
  bool v10; // r14
  int v11; // eax
  bool result; // al
  int m_enabled; // eax
  GCSDK::MsgType_t v14; // eax
  unsigned __int64 v15; // r15
  uint64 v16; // rcx
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v19; // rax
  CVProfNode *SubNode; // rax
  CVProfile::CBudgetGroup *v21; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-58h]
  unsigned __int64 v23; // [rsp+10h] [rbp-50h]
  bool VProf_709a; // [rsp+18h] [rbp-48h]
  bool VProf_709; // [rsp+18h] [rbp-48h]
  bool VProf_709b; // [rsp+18h] [rbp-48h]
  ThreadId_t VProf_709c; // [rsp+18h] [rbp-48h]
  JobID_t jobIDTarget[7]; // [rsp+28h] [rbp-38h] BYREF

  if ( pNetPacket == 0 )
    return 0;
  jobIDTarget[0] = (*(pNetPacket->_vptr_CRefCount + 9))(pNetPacket);
  if ( jobIDTarget[0] == -1 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    VProf_709 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      v23 = __rdtsc();
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      if ( m_TargetThreadId == ThreadGetCurrentId(v8) )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "CJobMgr::BRouteMsgToJob() - job" )
        {
          m_pCurNode = CVProfNode::GetSubNode(
                         g_VProfCurrentProfile.m_pCurNode,
                         "CJobMgr::BRouteMsgToJob() - job",
                         0,
                         "Jobs/Coroutines",
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
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v23 + __rdtsc();
    }
    if ( !GCSDK::CJobMgr::BLaunchJobFromNetworkMsg(this, pParent, pNetPacket, nCreateContext) )
    {
      if ( jobIDTarget[0] == -1 )
      {
        result = 0;
LABEL_14:
        if ( VProf_709 )
        {
          VProf_709b = result;
          CVProfile::ExitScope(&g_VProfCurrentProfile);
          return VProf_709b;
        }
        return result;
      }
      v14 = (*(pNetPacket->_vptr_CRefCount + 7))(pNetPacket);
      GCSDK::CJobMgr::RecordOrphanedMessage(this, v14, jobIDTarget[0]);
    }
    result = 1;
    goto LABEL_14;
  }
  v9 = g_VProfCurrentProfile.m_enabled;
  v10 = v9 != 0;
  if ( v9 != 0 )
  {
    v15 = __rdtsc();
    VProf_709c = g_VProfCurrentProfile.m_TargetThreadId;
    if ( VProf_709c == ThreadGetCurrentId(v8) )
    {
      SubNode = g_VProfCurrentProfile.m_pCurNode;
      if ( SubNode->m_pszName != "CJobMgr::BRouteMsgToJob() - continue job" )
      {
        SubNode = CVProfNode::GetSubNode(
                    g_VProfCurrentProfile.m_pCurNode,
                    "CJobMgr::BRouteMsgToJob() - continue job",
                    0,
                    "Jobs/Coroutines",
                    4);
        g_VProfCurrentProfile.m_pCurNode = SubNode;
      }
      v21 = &g_VProfCurrentProfile.m_pBudgetGroups[SubNode->m_BudgetGroupID];
      v21->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    v16 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v16 - v15 + __rdtsc();
  }
  v11 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
          this,
          jobIDTarget);
  if ( v11 != -1 )
  {
    GCSDK::CJobMgr::PassMsgToJob(this, *(*(this + 6) + 24LL * v11 + 8), pNetPacket);
    result = 1;
    if ( !v10 )
      return result;
LABEL_8:
    VProf_709a = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return VProf_709a;
  }
  result = 0;
  if ( v10 )
    goto LABEL_8;
  return result;
}


// GCSDK::CJobMgr::PassMsgToJob  (line 727, @0x0000000003226980, libserver.so)  // inlines: AddToTail, AddToYieldList
// calls: GCSDK::CJob::GetPauseReasonDescription, GCSDK::PchMsgNameFromEMsg, GCSDK::CJob::GetName, GCSDK::CGCEmitGroup::Internal_Msg, GCSDK::CJob::AddPacketToList, CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore
// callers: GCSDK::CJobMgr::BRouteMsgToJob
// strings: "CJobMgr::PassMsgToJob() job %s received unexpected message %s when paused for %s\n", "WakeRecvMsg"
// globals: GCSDK::g_EGJobMsgContext
void __fastcall GCSDK::CJobMgr::PassMsgToJob(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const job,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  const char *PauseReasonDescription; // r13
  GCSDK::MsgType_t v6; // eax
  const char *v7; // r12
  const char *Name; // rax
  GCSDK::CJobMgr::JobYielding_t src; // [rsp+0h] [rbp-30h] BYREF

  if ( job->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonNetworkMsg )
  {
    GCSDK::CJob::AddPacketToList(job, pNetPacket);
    job->m_ePauseReason = GCSDK::EJobPauseReason::k_EJobPauseReasonYield;
    job->m_pszPauseResourceName = "WakeRecvMsg";
    src.m_JobID = job->m_JobID;
    src.m_nIteration = *(this + 34);
    CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
      (this + 88),
      -1,
      &src);
  }
  else
  {
    PauseReasonDescription = GCSDK::CJob::GetPauseReasonDescription(job);
    v6 = (*(pNetPacket->_vptr_CRefCount + 7))(pNetPacket);
    v7 = GCSDK::PchMsgNameFromEMsg(v6);
    Name = GCSDK::CJob::GetName(job);
    GCSDK::CGCEmitGroup::Internal_Msg(
      &GCSDK::g_EGJobMsgContext,
      "CJobMgr::PassMsgToJob() job %s received unexpected message %s when paused for %s\n",
      Name,
      v7,
      PauseReasonDescription);
  }
}


// GCSDK::CJobMgr::BYieldingWaitForMsg  (line 750, @0x000000000322a9f0, libserver.so)
// calls: GCSDK::CJobMgr::YldPauseCurJob
// callers: GCSDK::CJob::BYieldingWaitForMsg
bool __fastcall GCSDK::CJobMgr::BYieldingWaitForMsg(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  GCSDK::CJobMgr::YldPauseCurJob(this, job, GCSDK::EJobPauseReason::k_EJobPauseReasonNetworkMsg, 0);
  return *(this + 312) ^ 1;
}


// GCSDK::CJobMgr::BYieldingWaitForJob  (line 760, @0x000000000322aa20, libserver.so)
// calls: GCSDK::CJobMgr::GetPJob, GCSDK::CJob::SetWaitingForJob, GCSDK::CJobMgr::YldPauseCurJob
// callers: GCSDK::CJob::BYieldingWaitForJob, GCSDK::CJob::BYieldingWaitForJobs
bool __fastcall GCSDK::CJobMgr::BYieldingWaitForJob(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const jobCur,
        JobID_t nJobIDToWaitFor)
{
  GCSDK::CJob *PJob; // rsi
  bool result; // al

  PJob = GCSDK::CJobMgr::GetPJob(this, nJobIDToWaitFor);
  result = 1;
  if ( PJob != 0 )
  {
    GCSDK::CJob::SetWaitingForJob(jobCur, PJob);
    GCSDK::CJobMgr::YldPauseCurJob(this, jobCur, GCSDK::EJobPauseReason::k_EJobPauseReasonJob, 0);
    return *(this + 312) ^ 1;
  }
  return result;
}


// GCSDK::CJobMgr::SetWaitForWorkItemJobOwner  (line 779, @0x0000000003225420, libserver.so)
// calls: GCSDK::CJobMgr::GetPJob
void __fastcall GCSDK::CJobMgr::SetWaitForWorkItemJobOwner(
        GCSDK::CJobMgr *const this,
        JobID_t nJobIDWaiting,
        JobID_t nJobIDDoingWorkItem)
{
  GCSDK::CJob *PJob; // rax

  PJob = GCSDK::CJobMgr::GetPJob(this, nJobIDWaiting);
  if ( PJob != 0 && PJob->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonWorkItem )
    PJob->m_jobIDWaitingOn = nJobIDDoingWorkItem;
}


// GCSDK::CJobMgr::BGetIJob  (line 804, @0x0000000003225450, libserver.so)  // inlines: Element, operator[]
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find
// callers: GCSDK::CJobMgr::BRouteWorkItemCompletedInternal
bool __fastcall GCSDK::CJobMgr::BGetIJob(
        GCSDK::CJobMgr *const this,
        JobID_t jobID,
        GCSDK::EJobPauseReason eJobPauseReason,
        bool bShouldExist,
        int *pIJob)
{
  int v8; // eax
  JobID_t jobIDa[5]; // [rsp+8h] [rbp-28h] BYREF

  jobIDa[0] = jobID;
  if ( jobID == -1 )
    return 0;
  v8 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
         this,
         jobIDa);
  if ( v8 == -1 || *(*(*(this + 6) + 24LL * v8 + 8) + 52LL) != eJobPauseReason )
    return 0;
  *pIJob = v8;
  return 1;
}


// GCSDK::CJobMgr::BYieldingWaitTime  (line 833, @0x000000000322aa70, libserver.so)  // inlines: AddToTail, Construct<GCSDK::CJobMgr::JobSleeping_t>, Element, GrowMemory, Insert, JobSleeping_t, PercolateUp, Swap, operator(), operator[]
// calls: GCSDK::CJobTime::CJobTime, GCSDK::CJobTime::SetFromJobTime, GCSDK::CJobTime::SetToJobTime, GCSDK::CJobMgr::YldPauseCurJob, CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int>::Grow
// callers: GCSDK::CJob::BRunProxy, GCSDK::CJob::BYieldingWaitForMsg, GCSDK::CJob::BYieldingWaitTime, GCSDK::CJob::BYieldingWaitOneFrame
bool __fastcall GCSDK::CJobMgr::BYieldingWaitTime(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const job,
        uint32 cMicrosecondsToSleep)
{
  int v6; // r15d
  int v7; // eax
  __int64 v8; // r12
  GCSDK::CJobMgr::JobSleeping_t *v9; // rax
  GCSDK::CJobTime *v10; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // r12
  __int64 v18; // r13
  __int64 v19; // r12
  GCSDK::CJobTime *v21; // [rsp+8h] [rbp-58h]
  __int64 v22; // [rsp+8h] [rbp-58h]
  GCSDK::CJobMgr::JobSleeping_t jobSleeping; // [rsp+10h] [rbp-50h] BYREF

  GCSDK::CJobTime::CJobTime(&jobSleeping.m_SWakeupTime);
  GCSDK::CJobTime::CJobTime(&jobSleeping.m_STimeTouched);
  jobSleeping.m_JobID = job->m_JobID;
  GCSDK::CJobTime::SetFromJobTime(&jobSleeping.m_SWakeupTime, cMicrosecondsToSleep);
  GCSDK::CJobTime::SetToJobTime(&jobSleeping.m_STimeTouched);
  v6 = *(this + 36);
  v7 = v6;
  if ( v6 == *(this + 40) )
  {
    CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>::Grow((this + 152), 1);
    v7 = *(this + 36);
  }
  v8 = v6;
  *(this + 36) = v7 + 1;
  v9 = 0;
  v10 = (*(this + 19) + 24LL * v6);
  if ( v10 != 0 )
  {
    v21 = (*(this + 19) + 24LL * v6);
    GCSDK::CJobTime::CJobTime(v10 + 1);
    GCSDK::CJobTime::CJobTime(v21 + 2);
    v9 = (*(this + 19) + 24LL * v6);
  }
  *v9 = jobSleeping;
  if ( *(this + 36) > v6 && v6 != 0 )
  {
    while ( 1 )
    {
      v18 = 3 * v8;
      v19 = 24 * v8;
      v6 = (v6 + 1) / 2 - 1;
      v22 = 24LL * v6;
      if ( (*(this + 21))(v19 + *(this + 19), *(this + 19) + v22) != 0 )
        break;
      v12 = *(this + 19);
      v13 = (v12 + v22);
      v14 = *(v12 + 24LL * v6);
      v15 = *(v12 + v22 + 8);
      *v13 = *(v12 + 8 * v18);
      v16 = *(v12 + v22 + 16);
      v13[1] = *(v12 + v19 + 8);
      v13[2] = *(v12 + v19 + 16);
      v17 = (*(this + 19) + v19);
      *v17 = v14;
      v17[1] = v15;
      v17[2] = v16;
      if ( v6 == 0 )
        break;
      v8 = v6;
    }
  }
  GCSDK::CJobMgr::YldPauseCurJob(this, job, GCSDK::EJobPauseReason::k_EJobPauseReasonSleepForTime, 0);
  return *(this + 312) ^ 1;
}


// GCSDK::CJobMgr::BYieldingWaitForWorkItem  (line 1022, @0x000000000322ac50, libserver.so)
// calls: GCSDK::CJobMgr::YldPauseCurJob
// callers: GCSDK::CJob::BYieldingWaitForWorkItem, GCSDK::CJob::BYieldingWaitForThreadFuncWorkItem
bool __fastcall GCSDK::CJobMgr::BYieldingWaitForWorkItem(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const job,
        const char *pszWorkItemName,
        JobID_t nJobID)
{
  bool result; // al

  job->m_jobIDWaitingOn = nJobID;
  GCSDK::CJobMgr::YldPauseCurJob(this, job, GCSDK::EJobPauseReason::k_EJobPauseReasonWorkItem, pszWorkItemName);
  result = 0;
  if ( *(this + 312) == 0 )
    return ((*(job + 8) >> 1) ^ 1) & 1;
  return result;
}


// GCSDK::CJobMgr::AddThreadedJobWorkItem  (line 1037, @0x0000000003224b30, libserver.so)
// calls: GCSDK::CWorkThreadPool::AddWorkItem
// callers: GCSDK::CJob::BYieldingWaitForThreadFuncWorkItem
void __fastcall GCSDK::CJobMgr::AddThreadedJobWorkItem(GCSDK::CJobMgr *const this, GCSDK::CWorkItem *pWorkItem)
{
  GCSDK::CWorkThreadPool::AddWorkItem((this + 320), pWorkItem);
}


// GCSDK::CJobMgr::HasOutstandingThreadPoolWorkItems  (line 1046, @0x0000000003224b50, libserver.so)
// calls: GCSDK::CWorkThreadPool::HasWorkItemsToProcess
bool __fastcall GCSDK::CJobMgr::HasOutstandingThreadPoolWorkItems(GCSDK::CJobMgr *const this)
{
  return GCSDK::CWorkThreadPool::HasWorkItemsToProcess((this + 320));
}


// GCSDK::CJobMgr::BRouteWorkItemCompletedInternal  (line 1059, @0x0000000003226a40, libserver.so)  // inlines: AddToTail, AddToYieldList, CheckThreadID, Element, operator[]
// calls: ThreadGetCurrentId, GCSDK::CJobMgr::BGetIJob, CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore, GCSDK::CJob::Continue, Msg
// callers: GCSDK::CWorkItem::DispatchCompletedWorkItem
// strings: "WakeAfterCompletedWorkItem", "BRouteWorkItemCompleted called for a job that could not be found!\n"
bool __fastcall GCSDK::CJobMgr::BRouteWorkItemCompletedInternal(
        GCSDK::CJobMgr *const this,
        JobID_t jobID,
        bool bWorkItemCanceled,
        bool bShouldExist,
        bool bResumeImmediately)
{
  int CurrentId; // eax
  bool v11; // r15
  __int64 v12; // r12
  char v13; // cl
  int iJob; // [rsp+Ch] [rbp-44h] BYREF
  GCSDK::CJobMgr::JobYielding_t src; // [rsp+10h] [rbp-40h] BYREF

  CurrentId = ThreadGetCurrentId(this);
  if ( *(this + 210) == 0 )
    *(this + 210) = CurrentId;
  v11 = GCSDK::CJobMgr::BGetIJob(this, jobID, GCSDK::EJobPauseReason::k_EJobPauseReasonWorkItem, bShouldExist, &iJob);
  if ( v11 )
  {
    v12 = *(*(this + 6) + 24LL * iJob + 8);
    v13 = *(v12 + 8);
    *(v12 + 208) = -1;
    *(v12 + 8) = (2 * bWorkItemCanceled) | v13 & 0xFD;
    if ( bResumeImmediately )
    {
      GCSDK::CJob::Continue(v12);
    }
    else
    {
      src.m_JobID = *(v12 + 16);
      src.m_nIteration = *(this + 34);
      CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
        (this + 88),
        -1,
        &src);
      *(v12 + 52) = 5;
      *(v12 + 56) = "WakeAfterCompletedWorkItem";
    }
  }
  else
  {
    Msg(GCSDK::SPEW_JOB.m_pszGroupName, 2, "BRouteWorkItemCompleted called for a job that could not be found!\n");
  }
  return v11;
}


// GCSDK::CJobMgr::AddToYieldList  (line 1098, @0x0000000003226950, libserver.so)  // inlines: AddToTail
// calls: CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore
void __fastcall GCSDK::CJobMgr::AddToYieldList(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  char *v2; // rdi
  GCSDK::CJobMgr::JobYielding_t jobYielding; // [rsp+0h] [rbp-10h] BYREF

  v2 = this + 88;
  jobYielding.m_JobID = job->m_JobID;
  jobYielding.m_nIteration = *(v2 + 12);
  CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
    v2,
    -1,
    &jobYielding);
}


// GCSDK::CJobMgr::AddDelayedJobToYieldList  (line 1117, @0x0000000003226b60, libserver.so)  // inlines: AddToTail, AddToYieldList
// calls: CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore
// callers: GCSDK::CJob::StartJobDelayed
void __fastcall GCSDK::CJobMgr::AddDelayedJobToYieldList(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  char *v2; // rdi
  GCSDK::CJobMgr::JobYielding_t src; // [rsp+0h] [rbp-10h] BYREF

  v2 = this + 88;
  src.m_JobID = job->m_JobID;
  src.m_nIteration = *(v2 + 12);
  CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
    v2,
    -1,
    &src);
}


// GCSDK::CJobMgr::BYield  (line 1130, @0x000000000322ac90, libserver.so)  // inlines: AddToTail, AddToYieldList
// calls: CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore, GCSDK::CJobMgr::YldPauseCurJob
// callers: GCSDK::CJob::BYield, GCSDK::CJobMgr::BYieldIfNeeded
// strings: "BYield"
bool __fastcall GCSDK::CJobMgr::BYield(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  char *v4; // rdi
  GCSDK::CJobMgr::JobYielding_t src; // [rsp+0h] [rbp-20h] BYREF

  v4 = this + 88;
  src.m_JobID = job->m_JobID;
  src.m_nIteration = *(v4 + 12);
  CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
    v4,
    -1,
    &src);
  GCSDK::CJobMgr::YldPauseCurJob(this, job, GCSDK::EJobPauseReason::k_EJobPauseReasonYield, "BYield");
  return *(this + 312) ^ 1;
}


// GCSDK::CJobMgr::BYieldIfNeeded  (line 1149, @0x000000000322acf0, libserver.so)  // inlines: GetDurationInProgress, GetMicroseconds64, GetMicrosecondsRun, PLAT_CPU_TIME, Plat_TickDiffMicroSec, Sample
// calls: Plat_GetCPUFrequency, GCSDK::CJobMgr::BYield
// callers: GCSDK::CJob::BYieldIfNeeded
bool __fastcall GCSDK::CJobMgr::BYieldIfNeeded(GCSDK::CJobMgr *const this, GCSDK::CJob *const job, bool *pbYielded)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 CPUFrequency; // rax
  unsigned __int64 v9; // rbx
  bool result; // al

  if ( pbYielded != 0 )
    *pbYielded = 0;
  v6 = __rdtsc();
  v7 = v6 - job->m_FastTimerDelta.m_Duration.m_Int64;
  CPUFrequency = Plat_GetCPUFrequency(this, job, HIDWORD(v6) << 32);
  v9 = 1000000 * (v7 % CPUFrequency) / CPUFrequency + 1000000 * (v7 / CPUFrequency);
  result = 1;
  if ( v9 > 0x9C4 )
  {
    result = GCSDK::CJobMgr::BYield(this, job);
    if ( pbYielded != 0 )
      *pbYielded = result;
  }
  return result;
}


// GCSDK::CJobMgr::BYieldUntilManualResume  (line 1171, @0x000000000322ad80, libserver.so)
// calls: GCSDK::CJobMgr::YldPauseCurJob
bool __fastcall GCSDK::CJobMgr::BYieldUntilManualResume(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const job,
        const char *pszReason)
{
  GCSDK::CJobMgr::YldPauseCurJob(this, job, GCSDK::EJobPauseReason::k_EJobPauseReasonManual, pszReason);
  return *(this + 312) ^ 1;
}


// GCSDK::CJobMgr::ContinueManualJob  (line 1186, @0x0000000003224b70, libserver.so)
// calls: GCSDK::CJob::Continue
void __fastcall GCSDK::CJobMgr::ContinueManualJob(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  GCSDK::CJob::Continue(job);
}


// GCSDK::CJobMgr::BResumeYieldingJobsFromList  (line 1202, @0x0000000003225a60, libserver.so)  // inlines: BLimitReached, Element, Free, Remove, operator[]
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find, CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::Unlink, Plat_RelativeTicks, GCSDK::CJob::Continue
// callers: GCSDK::CJobMgr::BResumeYieldingJobs, GCSDK::CJobMgr::BFrameFuncRunYieldingJobs
bool __fastcall GCSDK::CJobMgr::BResumeYieldingJobsFromList(
        GCSDK::CJobMgr *const this,
        CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int> > *const listJobsYielding,
        uint nCurrentIteration,
        CLimitTimer *const limitTimer)
{
  int m_Head; // r12d
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *v7; // rsi
  int v8; // r15d
  int m_ElementCount; // ecx
  __int64 v11; // rdi

  while ( 1 )
  {
    m_ElementCount = listJobsYielding->m_ElementCount;
    if ( m_ElementCount == 0 )
      break;
    m_Head = listJobsYielding->m_Head;
    v7 = &listJobsYielding->m_Memory.m_pMemory[m_Head];
    if ( v7->m_Element.m_nIteration > nCurrentIteration )
      break;
    v8 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
           this,
           &v7->m_Element.m_JobID);
    CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::Unlink(
      listJobsYielding,
      m_Head);
    listJobsYielding->m_Memory.m_pMemory[m_Head].m_Next = listJobsYielding->m_FirstFree;
    listJobsYielding->m_FirstFree = m_Head;
    if ( v8 != -1 )
    {
      v11 = *(*(this + 6) + 24LL * v8 + 8);
      if ( *(v11 + 52) == 5 )
        GCSDK::CJob::Continue(v11);
      if ( Plat_RelativeTicks() >= limitTimer->m_nTickLimit )
      {
        m_ElementCount = listJobsYielding->m_ElementCount;
        return m_ElementCount > 0;
      }
    }
  }
  return m_ElementCount > 0;
}


// GCSDK::CJobMgr::BResumeYieldingJobs  (line 1243, @0x0000000003225b30, libserver.so)
// calls: GCSDK::CJobMgr::BResumeYieldingJobsFromList
bool __fastcall GCSDK::CJobMgr::BResumeYieldingJobs(GCSDK::CJobMgr *const this, CLimitTimer *const limitTimer)
{
  uint v2; // edx

  v2 = *(this + 34);
  *(this + 34) = v2 + 1;
  return GCSDK::CJobMgr::BResumeYieldingJobsFromList(this, (this + 88), v2, limitTimer);
}


// GCSDK::CJobMgr::BResumeSleepingJobs  (line 1254, @0x00000000032257b0, libserver.so)  // inlines: BLimitReached, Element, PercolateDown, RemoveAtHead, Swap, operator(), operator[]
// calls: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find, CUtlVectorBase<GCSDK::CJobMgr::JobSleeping_t, CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int> >::FastRemove, Plat_RelativeTicks, GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::CJob::Heartbeat, GCSDK::CJob::Continue
// callers: GCSDK::CJobMgr::BFrameFuncRunSleepingJobs
bool __fastcall GCSDK::CJobMgr::BResumeSleepingJobs(GCSDK::CJobMgr *const this, CLimitTimer *const limitTimer)
{
  const GCSDK::CJobTime *v3; // rsi
  int v4; // r14d
  int v5; // r13d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  int v14; // r12d
  __int64 v15; // rdi
  int v16; // eax
  int v18; // eax
  CUtlVectorBase<GCSDK::CJobMgr::JobSleeping_t,CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int> > *v20; // [rsp+8h] [rbp-48h]
  int iJob; // [rsp+14h] [rbp-3Ch]
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::KeyType_t *key; // [rsp+18h] [rbp-38h]

  v20 = (this + 144);
  while ( 1 )
  {
    if ( *(this + 36) == 0 )
    {
      v16 = 0;
      return v16 > 0;
    }
    v3 = *(this + 19);
    if ( v3[1].m_lTime > GCSDK::CJobTime::sm_lTimeCur )
      break;
    v4 = 0;
    iJob = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
             this,
             &v3->m_lTime);
    CUtlVectorBase<GCSDK::CJobMgr::JobSleeping_t,CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>>::FastRemove(v20, 0);
    v5 = *(this + 36);
    if ( v5 / 2 > 0 )
    {
      while ( 1 )
      {
        v14 = 2 * v4 + 2;
        v6 = 2 * v4 + 1;
        if ( v5 <= v6 )
        {
          v6 = v4;
          if ( v5 <= v14 )
            goto LABEL_7;
        }
        else
        {
          if ( (*(this + 21))(*(this + 19) + 24LL * v4, *(this + 19) + 24LL * v6) == 0 )
            v6 = v4;
          if ( v5 <= v14 )
          {
LABEL_7:
            if ( v4 == v6 )
              break;
            goto LABEL_8;
          }
        }
        if ( (*(this + 21))(*(this + 19) + 24LL * v6, *(this + 19) + 24LL * v14) != 0 )
          v6 = 2 * v4 + 2;
        if ( v4 == v6 )
          break;
LABEL_8:
        v7 = *(this + 19);
        v8 = 24LL * v6;
        v9 = (v7 + 24LL * v4);
        v10 = *v9;
        v11 = v9[1];
        v12 = v9[2];
        *v9 = *(v7 + v8);
        v9[1] = *(v7 + v8 + 8);
        v9[2] = *(v7 + v8 + 16);
        v13 = (*(this + 19) + v8);
        *v13 = v10;
        v13[1] = v11;
        v13[2] = v12;
        if ( v5 / 2 <= v6 )
          break;
        v4 = v6;
      }
    }
    if ( iJob != -1 )
    {
      v15 = *(*(this + 6) + 24LL * iJob + 8);
      if ( *(v15 + 52) == 3 )
        GCSDK::CJob::Continue(v15);
      if ( Plat_RelativeTicks() >= limitTimer->m_nTickLimit )
      {
        v16 = *(this + 36);
        return v16 > 0;
      }
    }
  }
  key = *(this + 19);
  if ( GCSDK::CJobTime::CServerMicroSecsPassed(v3 + 2) <= 4999999 )
    return 0;
  v18 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
          this,
          key);
  if ( v18 == -1 )
    return 0;
  GCSDK::CJob::Heartbeat(*(*(this + 6) + 24LL * v18 + 8));
  return 0;
}


// GCSDK::CJobMgr::JobSleepingLessFunc  (line 1302, @0x00000000032243e0, libserver.so)
bool __fastcall GCSDK::CJobMgr::JobSleepingLessFunc(
        const GCSDK::CJobMgr::JobSleeping_t *const lhs,
        const GCSDK::CJobMgr::JobSleeping_t *const rhs)
{
  return lhs->m_SWakeupTime.m_lTime > rhs->m_SWakeupTime.m_lTime;
}


// GCSDK::CJobMgr::CheckForJobTimeouts  (line 1312, @0x0000000003226cc0, libserver.so)  // inlines: BJobNeedsToHeartbeat, BLimitReached, Element, Find, FindInBucket, Free, FreeNodeIndexToID, Get, InternalElement, IsValidIndex, LinkToTail, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, PercolateUp, Remove, RemoveAt, RemoveNodeFromBucket, RevaluateElement, Swap, operator(), operator[]
// calls: Plat_RelativeTicks, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find, GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::CJob::Heartbeat, MurmurHash3_32, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket, CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::Unlink, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Remove, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find, GCSDK::CJobMgr::TimeoutJob, GCSDK::CJobTime::SetToJobTime, CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::LinkBefore (14 total)
// callers: GCSDK::CJobMgr::BFrameFuncRunSleepingJobs
void __fastcall GCSDK::CJobMgr::CheckForJobTimeouts(GCSDK::CJobMgr *const this, CLimitTimer *const limitTimer)
{
  CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *v3; // r13
  int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  GCSDK::CJob *v10; // r15
  uint32 v11; // eax
  int v12; // edi
  __int64 v13; // r11
  int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  int v19; // edi
  int v20; // ecx
  __int64 v21; // rcx
  int *v22; // rdi
  uint32 v23; // eax
  int v24; // edx
  __int64 v25; // rdi
  int v26; // esi
  int v27; // ebx
  __int64 v28; // r8
  int v29; // esi
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  bool v33; // zf
  int v34; // ebx
  int v35; // eax
  int *v36; // rdi
  uint32 v37; // eax
  int v38; // edx
  __int64 v39; // r10
  int v40; // esi
  __int64 v41; // rbx
  __int64 v42; // rdi
  int v43; // esi
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  int v47; // ebx
  GCSDK::EJobPauseReason m_ePauseReason; // eax
  int v49; // ecx
  _QWORD *v50; // rdi
  int v51; // eax
  JobID_t m_JobID; // rsi
  int v53; // eax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // rsi
  _QWORD *v59; // rbx
  __int64 v60; // r13
  int v61; // r12d
  __int64 v62; // rbx
  __int64 v63; // r15
  int v64; // ebx
  CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *v65; // [rsp+0h] [rbp-60h]
  GCSDK::CJob *pJob; // [rsp+8h] [rbp-58h]
  int cIter; // [rsp+14h] [rbp-4Ch]
  int cItera; // [rsp+14h] [rbp-4Ch]
  CUtlPriorityQueue<GCSDK::CJobMgr::JobSleeping_t,CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>,CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>,CDefUtlPriorityQueueSetIndexFunc<GCSDK::CJobMgr::JobSleeping_t> > *v69; // [rsp+18h] [rbp-48h]
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *v71; // [rsp+28h] [rbp-38h]

  v3 = (this + 176);
  v4 = 0;
  v71 = (this + 224);
  v69 = (this + 144);
LABEL_2:
  v5 = *(this + 48);
  if ( v5 == -1 )
    return;
  do
  {
    if ( ++v4 != 1 )
    {
      if ( Plat_RelativeTicks() >= limitTimer->m_nTickLimit )
        return;
      v5 = *(this + 48);
    }
    v6 = 5 * v5;
    v7 = *(this + 22);
    v8 = v7 + 8 * v6;
    if ( *(this + 845) != 0 )
    {
      v9 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
             this,
             (v7 + 8 * v6));
      if ( v9 == -1 )
        goto LABEL_49;
    }
    else
    {
      if ( GCSDK::CJobTime::CServerMicroSecsPassed((v8 + 16)) <= 4999999 )
        return;
      v9 = CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
             this,
             v8);
      if ( v9 == -1 )
      {
LABEL_49:
        CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Remove(
          v71,
          v8);
        goto LABEL_45;
      }
    }
    v10 = *(*(this + 6) + 24LL * v9 + 8);
    if ( v10->m_STimeSwitched.m_lTime == *(v8 + 8) )
    {
      --*(v8 + 24);
      GCSDK::CJob::Heartbeat(v10);
      if ( *(this + 845) == 0 && *(v8 + 24) != 0 )
      {
        GCSDK::CJobTime::SetToJobTime((v8 + 16));
        CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::LinkBefore(
          v3,
          -1,
          *(this + 48));
        v53 = CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
                v71,
                v8);
        if ( v53 != -1 )
          *(*(this + 34) + 16LL * v53 + 8) = *(this + 49);
        goto LABEL_2;
      }
      v35 = CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
              v71,
              v8);
      if ( v35 < 0 )
        goto LABEL_71;
      if ( v35 >= *(this + 74) )
        goto LABEL_71;
      v36 = (*(this + 34) + 16LL * v35);
      if ( v36[3] < -1 )
        goto LABEL_71;
      cIter = v35;
      v37 = MurmurHash3_32(v36, 8u, 0x417u, 0);
      v38 = *(this + 56);
      v39 = *(this + 29);
      v40 = v37 & (v38 - 1);
      LODWORD(v41) = *(v39 + 4LL * v40);
      if ( v41 != -1 )
      {
        if ( cIter != v41 )
        {
          v42 = v41;
          do
          {
            LODWORD(v42) = *(*(this + 34) + 16 * v42 + 12);
            if ( v42 == -1 )
              goto LABEL_60;
          }
          while ( cIter != v42 );
          LODWORD(v41) = v42;
        }
        v46 = cIter;
        goto LABEL_69;
      }
LABEL_60:
      v43 = *(this + 75);
      v44 = v38 >> 1;
      if ( v43 > v44 )
        goto LABEL_71;
      while ( 1 )
      {
        v45 = v37 & (v44 - 1);
        if ( ((1 << (v37 & (v44 - 1))) & *(*(this + 32) + 4LL * (v45 >> 5))) == 0 )
        {
          v41 = *(v39 + 4LL * v45);
          if ( v41 != -1 )
          {
            if ( cIter == v41 )
            {
LABEL_68:
              v46 = cIter;
              v40 = v45;
LABEL_69:
              CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
                v71,
                v40,
                v46);
              *(*(this + 34) + 16LL * v41 + 12) = -3 - *(this + 72);
              v33 = (*(this + 73))-- == 1;
              *(this + 72) = v41;
              if ( v33 )
                *(this + 75) = *(this + 56);
LABEL_71:
              v47 = *(this + 48);
              CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::Unlink(
                v3,
                v47);
              *(*(this + 22) + 40LL * v47 + 36) = *(this + 50);
              *(this + 50) = v47;
              m_ePauseReason = v10->m_ePauseReason;
              if ( m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonNetworkMsg )
              {
LABEL_79:
                GCSDK::CJobMgr::TimeoutJob(this, v10);
              }
              else if ( m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonSleepForTime && *(this + 845) != 0 )
              {
                v49 = *(this + 36);
                if ( v49 != 0 )
                {
                  v50 = *(this + 19);
                  v51 = 0;
                  m_JobID = v10->m_JobID;
                  if ( *v50 == m_JobID )
                  {
                    v64 = 0;
LABEL_87:
                    CUtlVectorBase<GCSDK::CJobMgr::JobSleeping_t,CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>>::FastRemove(
                      &v69->m_heap,
                      v64);
                    if ( v64 == CUtlPriorityQueue<GCSDK::CJobMgr::JobSleeping_t,CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>,CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>,CDefUtlPriorityQueueSetIndexFunc<GCSDK::CJobMgr::JobSleeping_t>>::PercolateDown(
                                  v69,
                                  v64)
                      && *(this + 36) > v64
                      && v64 != 0 )
                    {
                      cItera = v4;
                      pJob = v10;
                      v65 = v3;
                      while ( 1 )
                      {
                        v60 = 3LL * v64;
                        v61 = (v64 + 1) / 2 - 1;
                        v62 = 24LL * v64;
                        v63 = 24LL * v61;
                        if ( (*(this + 21))(*(this + 19) + v62, *(this + 19) + v63) != 0 )
                          break;
                        v54 = *(this + 19);
                        v55 = (v54 + v63);
                        v56 = *(v54 + 24LL * v61);
                        v57 = *(v54 + v63 + 8);
                        v58 = *(v54 + v63 + 16);
                        *v55 = *(v54 + 8 * v60);
                        v55[1] = *(v54 + v62 + 8);
                        v55[2] = *(v54 + v62 + 16);
                        v59 = (*(this + 19) + v62);
                        *v59 = v56;
                        v59[1] = v57;
                        v59[2] = v58;
                        if ( v61 == 0 )
                          break;
                        v64 = v61;
                      }
                      v4 = cItera;
                      v10 = pJob;
                      v3 = v65;
                    }
                  }
                  else
                  {
                    while ( v49 != ++v51 )
                    {
                      if ( v50[3 * v51] == m_JobID )
                      {
                        v64 = v51;
                        goto LABEL_87;
                      }
                    }
                  }
                }
                goto LABEL_79;
              }
              goto LABEL_2;
            }
            while ( 1 )
            {
              LODWORD(v41) = *(*(this + 34) + 16 * v41 + 12);
              if ( v41 == -1 )
                break;
              if ( cIter == v41 )
                goto LABEL_68;
            }
          }
        }
        v44 >>= 1;
        if ( v43 > v44 )
          goto LABEL_71;
      }
    }
    if ( GCSDK::CJobTime::CServerMicroSecsPassed(&v10->m_STimeNextHeartbeat) >= 0 )
      GCSDK::CJob::Heartbeat(v10);
    if ( *(this + 73) == 0 )
      goto LABEL_45;
    v11 = MurmurHash3_32(v8, 8u, 0x417u, 0);
    v12 = *(this + 56);
    v13 = *(this + 29);
    v14 = *(v13 + 4LL * (v11 & (v12 - 1)));
    if ( v14 == -1 )
    {
LABEL_17:
      v18 = *(this + 75);
      v19 = v12 >> 1;
      if ( v19 < v18 )
        goto LABEL_45;
      while ( 1 )
      {
        v20 = v11 & (v19 - 1);
        if ( ((1 << (v11 & (v19 - 1))) & *(*(this + 32) + 4LL * (v20 >> 5))) == 0 )
        {
          v17 = *(v13 + 4LL * v20);
          if ( v17 != -1 )
          {
            v15 = *(this + 34);
            v21 = v15 + 16LL * v17;
            if ( *v8 == *v21 )
              goto LABEL_25;
            while ( 1 )
            {
              v17 = *(v21 + 12);
              if ( v17 == -1 )
                break;
              v21 = v15 + 16LL * v17;
              if ( *v8 == *v21 )
                goto LABEL_25;
            }
          }
        }
        v19 >>= 1;
        if ( v19 < v18 )
          goto LABEL_45;
      }
    }
    v15 = *(this + 34);
    v16 = v15 + 16LL * v14;
    if ( *v8 != *v16 )
    {
      do
      {
        v17 = *(v16 + 12);
        if ( v17 == -1 )
          goto LABEL_17;
        v16 = v15 + 16LL * v17;
      }
      while ( *v8 != *v16 );
LABEL_25:
      v14 = v17;
    }
    if ( v14 < 0 )
      goto LABEL_45;
    if ( *(this + 74) <= v14 )
      goto LABEL_45;
    v22 = (v15 + 16LL * v14);
    if ( v22[3] < -1 )
      goto LABEL_45;
    v23 = MurmurHash3_32(v22, 8u, 0x417u, 0);
    v24 = *(this + 56);
    v25 = *(this + 29);
    v26 = v23 & (v24 - 1);
    v27 = *(v25 + 4LL * v26);
    if ( v27 != -1 )
    {
      if ( v27 != v14 )
      {
        v28 = v27;
        do
        {
          LODWORD(v28) = *(*(this + 34) + 16 * v28 + 12);
          if ( v28 == -1 )
            goto LABEL_34;
        }
        while ( v28 != v14 );
        v27 = v28;
      }
      v32 = v14;
      goto LABEL_43;
    }
LABEL_34:
    v29 = *(this + 75);
    v30 = v24 >> 1;
    if ( v30 < v29 )
      goto LABEL_45;
    while ( 1 )
    {
      v31 = v23 & (v30 - 1);
      if ( ((1 << (v23 & (v30 - 1))) & *(*(this + 32) + 4LL * (v31 >> 5))) == 0 )
      {
        v27 = *(v25 + 4LL * v31);
        if ( v27 != -1 )
          break;
      }
LABEL_36:
      v30 >>= 1;
      if ( v30 < v29 )
        goto LABEL_45;
    }
    while ( v27 != v14 )
    {
      v27 = *(*(this + 34) + 16LL * v27 + 12);
      if ( v27 == -1 )
        goto LABEL_36;
    }
    v32 = v14;
    v26 = v31;
LABEL_43:
    CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
      v71,
      v26,
      v32);
    *(*(this + 34) + 16LL * v27 + 12) = -3 - *(this + 72);
    v33 = (*(this + 73))-- == 1;
    *(this + 72) = v27;
    if ( v33 )
      *(this + 75) = *(this + 56);
LABEL_45:
    v34 = *(this + 48);
    CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::Unlink(
      v3,
      v34);
    *(*(this + 22) + 40LL * v34 + 36) = *(this + 50);
    v5 = *(this + 48);
    *(this + 50) = v34;
  }
  while ( v5 != -1 );
}


// GCSDK::CJobMgr::TimeoutJob  (line 1472, @0x0000000003224b80, libserver.so)
// calls: GCSDK::CJob::Continue, LoggingSystem_IsChannelEnabled, GCSDK::CJob::GetPauseReasonDescription, GCSDK::CJob::GetName, LoggingSystem_Log
// callers: GCSDK::CJobMgr::CheckForJobTimeouts
// strings: "job warning: Resuming job '%s (id: %lld)' due to timeout while paused for %s\n"
void __fastcall GCSDK::CJobMgr::TimeoutJob(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  const char *PauseReasonDescription; // rax
  JobID_t m_JobID; // r14
  const char *v6; // r15
  const char *Name; // rax

  if ( job->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonNetworkMsg )
  {
    *&job->m_flags.m_bits |= 0x40u;
  }
  else
  {
    if ( *(this + 845) == 0 && LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 2) != 0 )
    {
      PauseReasonDescription = GCSDK::CJob::GetPauseReasonDescription(job);
      m_JobID = job->m_JobID;
      v6 = PauseReasonDescription;
      Name = GCSDK::CJob::GetName(job);
      LoggingSystem_Log(
        LOG_CONSOLE,
        2,
        "job warning: Resuming job '%s (id: %lld)' due to timeout while paused for %s\n",
        Name,
        m_JobID,
        v6);
    }
    *&job->m_flags.m_bits |= 0x80u;
  }
  ++*(this + 100);
  *(this + 312) = 1;
  GCSDK::CJob::Continue(job);
  *(this + 312) = 0;
}


// GCSDK::CJobMgr::WakeupLockedJob  (line 1499, @0x0000000003226b90, libserver.so)  // inlines: AddToTail, AddToYieldList
// calls: CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore
// callers: GCSDK::CJob::OnLockDeleted, GCSDK::CJob::PassLockToJob
// strings: "WakeGotLock"
void __fastcall GCSDK::CJobMgr::WakeupLockedJob(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  char *v3; // rdi
  GCSDK::CJobMgr::JobYielding_t src; // [rsp+0h] [rbp-20h] BYREF

  if ( job->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock )
  {
    v3 = this + 88;
    src.m_JobID = job->m_JobID;
    src.m_nIteration = *(v3 + 12);
    CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
      v3,
      -1,
      &src);
    job->m_ePauseReason = GCSDK::EJobPauseReason::k_EJobPauseReasonYield;
    job->m_pszPauseResourceName = "WakeGotLock";
  }
}


// GCSDK::CJobMgr::WakeJobsWaitingOnJob  (line 1521, @0x0000000003226bf0, libserver.so)  // inlines: AddToTail, AddToYieldList
// calls: CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore
// callers: GCSDK::CJob::BRunProxy
// strings: "WakeDependentJobFinished"
void __fastcall GCSDK::CJobMgr::WakeJobsWaitingOnJob(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  GCSDK::CJob *m_pFirstJobWaitingOnThis; // rbx
  JobID_t m_JobID; // rax
  GCSDK::CJob *m_pJobWaitingOnNext; // r12
  CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int> > *v7; // [rsp+8h] [rbp-48h]
  GCSDK::CJobMgr::JobYielding_t src; // [rsp+10h] [rbp-40h] BYREF

  m_pFirstJobWaitingOnThis = job->m_pFirstJobWaitingOnThis;
  if ( m_pFirstJobWaitingOnThis != 0 )
  {
    job->m_pFirstJobWaitingOnThis = 0;
    v7 = (this + 88);
    if ( m_pFirstJobWaitingOnThis->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonJob )
    {
      do
      {
        if ( m_pFirstJobWaitingOnThis->m_jobIDWaitingOn != job->m_JobID )
          break;
        m_JobID = m_pFirstJobWaitingOnThis->m_JobID;
        m_pFirstJobWaitingOnThis->m_jobIDWaitingOn = -1;
        m_pJobWaitingOnNext = m_pFirstJobWaitingOnThis->m_pJobWaitingOnNext;
        m_pFirstJobWaitingOnThis->m_pJobWaitingOnNext = 0;
        src.m_JobID = m_JobID;
        src.m_nIteration = *(this + 34);
        CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
          v7,
          -1,
          &src);
        m_pFirstJobWaitingOnThis->m_ePauseReason = GCSDK::EJobPauseReason::k_EJobPauseReasonYield;
        m_pFirstJobWaitingOnThis->m_pszPauseResourceName = "WakeDependentJobFinished";
        if ( m_pJobWaitingOnNext == 0 )
          break;
        m_pFirstJobWaitingOnThis = m_pJobWaitingOnNext;
      }
      while ( m_pJobWaitingOnNext->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonJob );
    }
  }
}


// GCSDK::CJobMgr::YldPauseCurJob  (line 1554, @0x000000000322a950, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<CUtlPair<long long unsigned int, char const*>, CUtlMemory<CUtlPair<long long unsigned int, char const*>, int> >::Remove, GCSDK::CJobMgr::MarkJobPause, GCSDK::CJob::YldPauseCurJob
// callers: GCSDK::CJobMgr::BYieldingWaitForMsg, GCSDK::CJobMgr::BYieldingWaitForJob, GCSDK::CJobMgr::BYieldingWaitTime, GCSDK::CJobMgr::BYieldingWaitForWorkItem, GCSDK::CJobMgr::BYield, GCSDK::CJobMgr::BYieldUntilManualResume
void __fastcall GCSDK::CJobMgr::YldPauseCurJob(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const job,
        GCSDK::EJobPauseReason eJobPauseReason,
        const char *pszPauseResourceName)
{
  int v6; // ebx
  __int64 v7; // rax
  CUtlVectorBase<CUtlPair<long long unsigned int,char const*>,CUtlMemory<CUtlPair<long long unsigned int,char const*>,int> > *v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  int v11; // esi

  v6 = *(this + 264) - 1;
  if ( v6 >= 0 )
  {
    v7 = 16LL * v6;
    if ( *(*(this + 133) + v7) == job->m_JobID )
    {
      v8 = (this + 1056);
      v9 = v7 - 16;
      do
      {
        v11 = v6--;
        CUtlVectorBase<CUtlPair<unsigned long long,char const*>,CUtlMemory<CUtlPair<unsigned long long,char const*>,int>>::Remove(
          v8,
          v11);
        if ( v6 == -1 )
          break;
        v10 = *(*(this + 133) + v9);
        v9 -= 16;
      }
      while ( v10 == job->m_JobID );
    }
  }
  GCSDK::CJobMgr::MarkJobPause(this, job, eJobPauseReason, pszPauseResourceName);
  GCSDK::CJob::YldPauseCurJob(job);
}


// GCSDK::CJobMgr::MarkJobPause  (line 1579, @0x000000000322a450, libserver.so)  // inlines: AddToTail, AllocNode, Bitvec_Set, Construct<GCSDK::CJobMgr::JobTimeout_t>, CopyConstruct<int>, CopyConstruct<long long unsigned int>, Element, FindInBucket, FreeNodeIDToIndex, Get, IncrementalRehash, Insert, InsertBefore, InsertInternal, JobTimeout_t, LinkToTail, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, RehashNodesInBucket, Set, operator(), operator[]
// calls: CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find, CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::LinkBefore, GCSDK::CJobTime::SetToJobTime, GCSDK::CJob::BeginPause, CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::AllocInternal, GCSDK::CJobTime::CJobTime, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::EnsureCapacity, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket, MurmurHash3_32, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket, CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::Node_t, int>::Grow (13 total)
// callers: GCSDK::CJobMgr::YldPauseCurJob
void __fastcall GCSDK::CJobMgr::MarkJobPause(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const job,
        GCSDK::EJobPauseReason eJobPauseReason,
        const char *pszPauseResourceName)
{
  GCSDK::CJobMgr *v4; // r15
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *v5; // r14
  int v6; // eax
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rax
  uint32 v10; // eax
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // r12
  GCSDK::CJobTime *v14; // r13
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // edx
  int v20; // ecx
  int v21; // r9d
  _DWORD *v22; // rax
  int v23; // eax
  bool v24; // cc
  int v25; // r13d
  __int64 v26; // rax
  GCSDK::CJobMgr *v27; // r14
  int v28; // ebx
  _DWORD *v29; // rdi
  int v30; // r12d
  uint32 v31; // r15d
  int v32; // edx
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // esi
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  int v45; // [rsp+8h] [rbp-68h]
  uint32 v46; // [rsp+Ch] [rbp-64h]
  GCSDK::CJobMgr::JobTimeout_t *pJobTimeout; // [rsp+10h] [rbp-60h]
  int v50; // [rsp+24h] [rbp-4Ch]
  CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *v51; // [rsp+28h] [rbp-48h]
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::KeyType_t key[7]; // [rsp+38h] [rbp-38h] BYREF

  v4 = this;
  v5 = (this + 224);
  key[0] = job->m_JobID;
  v6 = CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
         (this + 224),
         key);
  v7 = v6;
  if ( v6 != -1 )
  {
    v8 = *(v4 + 34) + 16LL * v6;
    CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::LinkBefore(
      (v4 + 176),
      -1,
      *(v8 + 8));
    v9 = *(v4 + 49);
    *(v8 + 8) = v9;
    pJobTimeout = (*(v4 + 22) + 40 * v9);
    goto LABEL_3;
  }
  v11 = CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::AllocInternal(
          (v4 + 176),
          0);
  v12 = v11;
  if ( v11 == -1 )
  {
    pJobTimeout = (*(v4 + 22) - 40LL);
  }
  else
  {
    CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::LinkBefore(
      (v4 + 176),
      v7,
      v11);
    pJobTimeout = 0;
    v13 = 40 * v12;
    v14 = (*(v4 + 22) + 40 * v12);
    if ( v14 != 0 )
    {
      GCSDK::CJobTime::CJobTime(v14 + 1);
      GCSDK::CJobTime::CJobTime(v14 + 2);
      pJobTimeout = (*(v4 + 22) + v13);
    }
  }
  v15 = *(v4 + 56);
  v45 = *(v4 + 49);
  key[0] = job->m_JobID;
  v16 = *(v4 + 73);
  if ( v16 >= v15 )
  {
    v17 = 2 * v15;
    v18 = 16;
    if ( v17 > 15 )
      v18 = v17;
    CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::EnsureCapacity(
      v5,
      v18);
    v16 = *(v4 + 73);
  }
  v19 = *(v4 + 70);
  if ( v19 <= v16 )
    CUtlMemory<CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Node_t,int>::Grow(
      v4 + 17,
      2 * v19);
  v20 = *(v4 + 75);
  v21 = *(v4 + 76);
  if ( v20 < v21 )
  {
    v22 = (*(v4 + 29) + 4LL * v20);
    while ( *v22 == -1 || ((1 << v20) & *(*(v4 + 32) + 4LL * (v20 >> 5))) != 0 )
    {
      ++v20;
      ++v22;
      *(v4 + 75) = v20;
      if ( v20 == v21 )
        goto LABEL_51;
    }
    CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::RehashNodesInBucket(
      v5,
      v20);
    v23 = *(v4 + 75) + 1;
    v24 = v23 < *(v4 + 76);
    *(v4 + 75) = v23;
    if ( v24 )
      goto LABEL_22;
LABEL_51:
    v43 = *(v4 + 56);
    *(v4 + 76) = -1;
    *(v4 + 75) = v43;
    CVarBitVecBase<int,32>::Resize((v4 + 248), 0, 0);
  }
LABEL_22:
  v46 = MurmurHash3_32(key, 8u, 0x417u, 0);
  v50 = *(v4 + 56) >> 1;
  v25 = v46 & (v50 - 1);
  if ( v25 >= *(v4 + 75) )
  {
    v26 = *(v4 + 32);
    if ( ((1 << v25) & *(v26 + 4LL * (v25 >> 5))) == 0 )
    {
      v51 = v5;
      do
      {
        v27 = v4;
        *(v26 + 4LL * (v25 >> 5)) |= 1 << v25;
        v28 = *(*(v4 + 29) + 4LL * v25);
        if ( v28 != -1 )
        {
          while ( 1 )
          {
            v29 = (*(v27 + 34) + 16LL * v28);
            v30 = v29[3];
            v31 = (*(v27 + 56) - 1) & MurmurHash3_32(v29, 8u, 0x417u, 0);
            if ( v25 != v31 )
            {
              CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
                v51,
                v25,
                v28);
              CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
                v51,
                v31,
                v28);
            }
            if ( v30 == -1 )
              break;
            v28 = v30;
          }
          v4 = v27;
        }
        v50 >>= 1;
        v25 = v46 & (v50 - 1);
        if ( v25 < *(v4 + 75) )
          break;
        v26 = *(v4 + 32);
      }
      while ( ((1 << v25) & *(v26 + 4LL * (v25 >> 5))) == 0 );
      v5 = v51;
    }
  }
  v32 = *(v4 + 73);
  if ( v32 == 0 || (v40 = *(*(v4 + 29) + 4LL * (v46 & (*(v4 + 56) - 1)))) == -1 )
  {
    v33 = *(v4 + 34);
  }
  else
  {
    v33 = *(v4 + 34);
    v41 = v33 + 16 * v40;
    if ( key[0] == *v41 )
    {
LABEL_50:
      *(v41 + 8) = v45;
      goto LABEL_3;
    }
    while ( 1 )
    {
      v42 = *(v41 + 12);
      if ( v42 == -1 )
        break;
      v41 = v33 + 16 * v42;
      if ( *v41 == key[0] )
        goto LABEL_50;
    }
  }
  if ( v32 == *(v4 + 74) )
  {
    *(v4 + 73) = v32 + 1;
    *(v4 + 74) = v32 + 1;
    v35 = 16LL * v32;
    v36 = v35 + v33;
  }
  else
  {
    v34 = *(v4 + 72);
    v35 = 16LL * v34;
    v36 = v35 + v33;
    v37 = -3 - *(v36 + 12);
    *(v4 + 73) = v32 + 1;
    v32 = v34;
    *(v4 + 72) = v37;
  }
  *(v36 + 12) = -1;
  v38 = (*(v4 + 34) + v35);
  if ( v38 != 0 )
  {
    *v38 = key[0];
    v39 = *(v4 + 34) + v35;
  }
  else
  {
    v39 = 0;
  }
  if ( v39 != -8 )
    *(v39 + 8) = v45;
  CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
    v5,
    v46 & (*(v4 + 56) - 1),
    v32);
LABEL_3:
  pJobTimeout->m_JobID = job->m_JobID;
  GCSDK::CJobTime::SetToJobTime(&pJobTimeout->m_STimePaused);
  GCSDK::CJobTime::SetToJobTime(&pJobTimeout->m_STimeTouched);
  if ( eJobPauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonWorkItem )
  {
    pJobTimeout->m_cHeartbeatsBeforeTimeout = 4320;
  }
  else
  {
    v10 = (*(job->_vptr_CJob + 4))(job);
    pJobTimeout->m_cHeartbeatsBeforeTimeout = v10;
    if ( v10 == 0 )
      pJobTimeout->m_cHeartbeatsBeforeTimeout = 4;
  }
  GCSDK::CJob::BeginPause(job, eJobPauseReason, pszPauseResourceName);
}


// GCSDK::CJobMgr::PushDoNotYield  (line 1637, @0x0000000003225e10, libserver.so)  // inlines: AddToTail, CopyConstruct<CUtlPair<long long unsigned int, char const*> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CUtlPair<long long unsigned int, char const*>, int>::Grow
// callers: GCSDK::CDoNotYieldScopeImpl::InternalPush
void __fastcall GCSDK::CJobMgr::PushDoNotYield(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *const job,
        const char *pchFileAndLine)
{
  int v4; // r12d
  JobID_t m_JobID; // r13
  int v6; // eax
  JobID_t *v7; // rax
  const char *pchFileAndLinea; // [rsp+8h] [rbp-28h]

  v4 = *(this + 264);
  m_JobID = job->m_JobID;
  v6 = v4;
  if ( v4 == *(this + 268) )
  {
    pchFileAndLinea = pchFileAndLine;
    CUtlMemory<CUtlPair<unsigned long long,char const*>,int>::Grow((this + 1064), 1);
    v6 = *(this + 264);
    pchFileAndLine = pchFileAndLinea;
  }
  *(this + 264) = v6 + 1;
  v7 = (*(this + 133) + 16LL * v4);
  if ( v7 != 0 )
  {
    *v7 = m_JobID;
    v7[1] = pchFileAndLine;
  }
}


// GCSDK::CJobMgr::PopDoNotYield  (line 1646, @0x00000000032250c0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<CUtlPair<long long unsigned int, char const*>, CUtlMemory<CUtlPair<long long unsigned int, char const*>, int> >::Remove
// callers: GCSDK::CDoNotYieldScopeImpl::InternalPop
void __fastcall GCSDK::CJobMgr::PopDoNotYield(GCSDK::CJobMgr *const this, GCSDK::CJob *const job)
{
  int v2; // eax

  v2 = *(this + 264);
  if ( v2 > 0 && *(*(this + 133) + 16LL * (v2 - 1)) == job->m_JobID )
    CUtlVectorBase<CUtlPair<unsigned long long,char const*>,CUtlMemory<CUtlPair<unsigned long long,char const*>,int>>::Remove(
      this + 44,
      v2 - 1);
}


// GCSDK::CJobMgr::DumpJobSummary  (line 1663, @0x0000000003229160, libserver.so)  // inlines: AddToTail, AllocNode, Bitvec_Set, CUtlVector, CUtlVectorBase, CopyConstruct<GCSDK::JobStatsBucket_t>, CopyConstruct<int>, CopyConstruct<long long int>, Element, Find, FindInBucket, FreeNodeIDToIndex, Get, GrowMemory, IncrementalRehash, Insert, InsertInternal, IsValidIndex, JobStatsBucket_t, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long int>, Purge, RehashNodesInBucket, RemoveAll, Set, UnlinkNodeFromBucket, V_strcpy_safe<64ul>, memset, operator(), operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::CUtlHashMapLarge, GCSDK::CJob::GetName, MurmurHash3_32, GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::EGInternal_EmitInfo, CUtlMemory<int, int>::CUtlMemory, CUtlMemory<int, int>::Grow, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::EnsureCapacity, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::RehashNodesInBucket, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::LinkNodeIntoBucket, memcpy, _V_strncpy (20 total)
// strings: "%50s --- running jobs (usec)-- -- locks held -- ----- pause reasons ---------------------, "%50s    count      aveduration                    netmsg      sql    sleep waitlock    yi, "%50s %8lld %16lld %13lld %11lld %8lld %8lld %8lld %8lld %8lld \n"
// globals: jpt_32293BD, GCSDK::CJobMgr::ProfileSortFunc(void *,int const*,int const*)
int __fastcall GCSDK::CJobMgr::DumpJobSummary(GCSDK::CJobMgr *const this)
{
  __int64 v2; // rax
  uint32 v3; // eax
  int m_Size; // r13d
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v5; // rbx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v6; // rsi
  __int64 v7; // rsi
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *k; // rcx
  __int64 v12; // rcx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_nMaxElement; // eax
  __int64 v14; // r13
  __int64 v15; // r12
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t v16; // ebx
  int v17; // eax
  int v18; // edx
  int *v19; // rax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_cElements; // edx
  int v21; // r13d
  int v22; // esi
  unsigned int m_nMinRehashedBucket; // ecx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::HashBucket_t *v24; // rax
  int v25; // r14d
  uint32 *j; // rax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_iNode; // ebx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v28; // rdi
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_iNextNode; // r13d
  uint32 v30; // eax
  int v31; // eax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t v32; // esi
  __int64 v33; // rcx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v34; // rcx
  __int64 v35; // rdx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t v36; // eax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *m_pMemory; // rdx
  intp v38; // rcx
  __int64 m_iNodeFreeListHead; // rbx
  __int64 v40; // rsi
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v41; // rdx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v42; // rsi
  const char *Name; // rax
  __int64 v44; // rbx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v45; // rdx
  __int64 v46; // r12
  int m; // ebx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v48; // rcx
  int v49; // ebx
  GCSDK::CJob *job; // [rsp+60h] [rbp-1E0h]
  uint32 v52; // [rsp+68h] [rbp-1D8h]
  int v53; // [rsp+6Ch] [rbp-1D4h]
  __int64 v54; // [rsp+70h] [rbp-1D0h]
  int i; // [rsp+78h] [rbp-1C8h]
  GCSDK::JobProfileStats_t jobprofilestats; // [rsp+90h] [rbp-1B0h] BYREF
  intp eBucket; // [rsp+A0h] [rbp-1A0h] BYREF
  CUtlMemory<int,int> v59; // [rsp+A8h] [rbp-198h] BYREF
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >_0 mapStatsBucket; // [rsp+C0h] [rbp-180h] BYREF
  _QWORD v61[36]; // [rsp+120h] [rbp-120h] BYREF

  v61[29] = __readfsqword(0x28u);
  CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::CUtlHashMapLarge(&mapStatsBucket);
  if ( *(this + 18) <= 0 )
    goto LABEL_22;
  v54 = 0;
  i = 0;
  do
  {
    v2 = *(this + 6) + v54;
    if ( *(v2 + 16) < -1 )
      goto LABEL_21;
    job = *(v2 + 8);
    eBucket = GCSDK::CJob::GetName(job);
    if ( mapStatsBucket.m_cElements == 0 )
    {
      m_Size = mapStatsBucket.m_vecHashBuckets.m_Size;
      m_cElements = 0;
LABEL_40:
      memset(v61, 0, 0xE0u);
      if ( m_cElements >= m_Size )
      {
        v21 = 2 * m_Size;
        v22 = 16;
        if ( v21 > 15 )
          v22 = v21;
        CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::EnsureCapacity(
          &mapStatsBucket,
          v22);
        m_cElements = mapStatsBucket.m_cElements;
      }
      if ( mapStatsBucket.m_memNodes.m_nAllocationCount <= m_cElements )
        CUtlMemory<CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::Node_t,int>::Grow(
          &mapStatsBucket.m_memNodes,
          2 * mapStatsBucket.m_memNodes.m_nAllocationCount);
      m_nMinRehashedBucket = mapStatsBucket.m_nMinRehashedBucket;
      if ( mapStatsBucket.m_nMinRehashedBucket < mapStatsBucket.m_nMaxRehashedBucket )
      {
        v24 = &mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[mapStatsBucket.m_nMinRehashedBucket];
        while ( v24->m_iNode == -1
             || ((1 << m_nMinRehashedBucket) & mapStatsBucket.m_bitsMigratedBuckets.m_pInt[m_nMinRehashedBucket >> 5]) != 0 )
        {
          ++m_nMinRehashedBucket;
          ++v24;
          mapStatsBucket.m_nMinRehashedBucket = m_nMinRehashedBucket;
          if ( m_nMinRehashedBucket == mapStatsBucket.m_nMaxRehashedBucket )
            goto LABEL_88;
        }
        CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::RehashNodesInBucket(
          &mapStatsBucket,
          m_nMinRehashedBucket);
        if ( ++mapStatsBucket.m_nMinRehashedBucket < mapStatsBucket.m_nMaxRehashedBucket )
          goto LABEL_52;
LABEL_88:
        mapStatsBucket.m_nMaxRehashedBucket = -1;
        mapStatsBucket.m_nMinRehashedBucket = mapStatsBucket.m_vecHashBuckets.m_Size;
        CVarBitVecBase<int,32>::Resize(&mapStatsBucket.m_bitsMigratedBuckets, 0, 0);
      }
LABEL_52:
      v52 = MurmurHash3_32(&eBucket, 8u, 0x417u, 0);
      v53 = mapStatsBucket.m_vecHashBuckets.m_Size >> 1;
      v25 = v52 & ((mapStatsBucket.m_vecHashBuckets.m_Size >> 1) - 1);
      if ( mapStatsBucket.m_nMinRehashedBucket <= v25 )
      {
        for ( j = mapStatsBucket.m_bitsMigratedBuckets.m_pInt;
              ((1 << v25) & mapStatsBucket.m_bitsMigratedBuckets.m_pInt[v25 >> 5]) == 0;
              j = mapStatsBucket.m_bitsMigratedBuckets.m_pInt )
        {
          j[v25 >> 5] |= 1 << v25;
          m_iNode = mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[v25].m_iNode;
          if ( m_iNode != -1 )
          {
            while ( 1 )
            {
              v28 = &mapStatsBucket.m_memNodes.m_pMemory[m_iNode];
              m_iNextNode = v28->m_iNextNode;
              v30 = MurmurHash3_32(v28, 8u, 0x417u, 0);
              v31 = (mapStatsBucket.m_vecHashBuckets.m_Size - 1) & v30;
              if ( v25 != v31 )
              {
                v32 = mapStatsBucket.m_memNodes.m_pMemory[m_iNode].m_iNextNode;
                v33 = mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[v25].m_iNode;
                if ( m_iNode == v33 )
                {
                  mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[v25].m_iNode = v32;
                }
                else if ( v33 != -1 )
                {
                  v34 = &mapStatsBucket.m_memNodes.m_pMemory[v33];
                  v35 = v34->m_iNextNode;
                  if ( m_iNode == v35 )
                  {
LABEL_65:
                    v34->m_iNextNode = v32;
                  }
                  else
                  {
                    while ( v35 != -1 )
                    {
                      v34 = &mapStatsBucket.m_memNodes.m_pMemory[v35];
                      v35 = v34->m_iNextNode;
                      if ( m_iNode == v35 )
                        goto LABEL_65;
                    }
                  }
                }
                CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::LinkNodeIntoBucket(
                  &mapStatsBucket,
                  v31,
                  m_iNode);
              }
              if ( m_iNextNode == -1 )
                break;
              m_iNode = m_iNextNode;
            }
          }
          v53 >>= 1;
          v25 = v52 & (v53 - 1);
          if ( v25 < mapStatsBucket.m_nMinRehashedBucket )
            break;
        }
      }
      v36 = mapStatsBucket.m_cElements;
      if ( mapStatsBucket.m_cElements == 0
        || (m_iNodeFreeListHead = mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[v52
                                                                                   & (mapStatsBucket.m_vecHashBuckets.m_Size
                                                                                    - 1)].m_iNode) == -1 )
      {
        m_pMemory = mapStatsBucket.m_memNodes.m_pMemory;
        v38 = eBucket;
        if ( mapStatsBucket.m_cElements == mapStatsBucket.m_nMaxElement )
        {
LABEL_83:
          m_iNodeFreeListHead = mapStatsBucket.m_cElements++;
          mapStatsBucket.m_nMaxElement = v36 + 1;
          v40 = v36;
          v41 = &m_pMemory[v40];
          goto LABEL_71;
        }
      }
      else
      {
        v38 = eBucket;
        v45 = &mapStatsBucket.m_memNodes.m_pMemory[m_iNodeFreeListHead];
        if ( eBucket == v45->m_key )
        {
LABEL_90:
          memcpy(&v45->m_elem, v61, sizeof(v45->m_elem));
LABEL_74:
          Name = GCSDK::CJob::GetName(job);
          v44 = m_iNodeFreeListHead;
          _V_strncpy(&mapStatsBucket.m_memNodes.m_pMemory[v44].m_elem, Name, 64);
          v5 = &mapStatsBucket.m_memNodes.m_pMemory[v44];
          goto LABEL_19;
        }
        while ( 1 )
        {
          m_iNodeFreeListHead = v45->m_iNextNode;
          if ( m_iNodeFreeListHead == -1 )
            break;
          v45 = &mapStatsBucket.m_memNodes.m_pMemory[m_iNodeFreeListHead];
          if ( v45->m_key == eBucket )
            goto LABEL_90;
        }
        m_pMemory = mapStatsBucket.m_memNodes.m_pMemory;
        if ( mapStatsBucket.m_cElements == mapStatsBucket.m_nMaxElement )
          goto LABEL_83;
      }
      m_iNodeFreeListHead = mapStatsBucket.m_iNodeFreeListHead;
      ++mapStatsBucket.m_cElements;
      v40 = mapStatsBucket.m_iNodeFreeListHead;
      v41 = &m_pMemory[v40];
      mapStatsBucket.m_iNodeFreeListHead = -3 - v41->m_iNextNode;
LABEL_71:
      v41->m_key = v38;
      v42 = &mapStatsBucket.m_memNodes.m_pMemory[v40];
      v41->m_iNextNode = -1;
      if ( v42 != -8LL )
        memcpy(&v42->m_elem, v61, sizeof(v42->m_elem));
      CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::LinkNodeIntoBucket(
        &mapStatsBucket,
        v52 & (mapStatsBucket.m_vecHashBuckets.m_Size - 1),
        m_iNodeFreeListHead);
      goto LABEL_74;
    }
    v3 = MurmurHash3_32(&eBucket, 8u, 0x417u, 0);
    m_Size = mapStatsBucket.m_vecHashBuckets.m_Size;
    if ( mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[v3 & (mapStatsBucket.m_vecHashBuckets.m_Size - 1)].m_iNode != -1 )
    {
      v5 = &mapStatsBucket.m_memNodes.m_pMemory[mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[v3
                                                                                                 & (mapStatsBucket.m_vecHashBuckets.m_Size
                                                                                                  - 1)].m_iNode];
      v6 = v5;
      if ( eBucket == v5->m_key )
        goto LABEL_19;
      while ( 1 )
      {
        v7 = v6->m_iNextNode;
        if ( v7 == -1 )
          break;
        v6 = &mapStatsBucket.m_memNodes.m_pMemory[v7];
        if ( v6->m_key == eBucket )
        {
          v5 = v6;
          goto LABEL_19;
        }
      }
    }
    v8 = mapStatsBucket.m_vecHashBuckets.m_Size >> 1;
    if ( mapStatsBucket.m_nMinRehashedBucket > mapStatsBucket.m_vecHashBuckets.m_Size >> 1 )
    {
LABEL_39:
      m_cElements = mapStatsBucket.m_cElements;
      goto LABEL_40;
    }
    while ( 1 )
    {
      v9 = v3 & (v8 - 1);
      if ( ((1 << (v3 & (v8 - 1))) & mapStatsBucket.m_bitsMigratedBuckets.m_pInt[v9 >> 5]) == 0 )
      {
        v10 = mapStatsBucket.m_vecHashBuckets.m_Memory.m_pMemory[v9].m_iNode;
        if ( v10 != -1 )
          break;
      }
LABEL_12:
      v8 >>= 1;
      if ( mapStatsBucket.m_nMinRehashedBucket > v8 )
        goto LABEL_39;
    }
    for ( k = &mapStatsBucket.m_memNodes.m_pMemory[v10]; k->m_key != eBucket; k = &mapStatsBucket.m_memNodes.m_pMemory[v12] )
    {
      v12 = k->m_iNextNode;
      if ( v12 == -1 )
        goto LABEL_12;
    }
    v5 = k;
LABEL_19:
    ++v5->m_elem.m_cCompletes;
    v5->m_elem.m_cLocksAttempted += job->m_vecLocks.m_Size;
    v5->m_elem.m_u64JobDuration += GCSDK::CJobTime::CServerMicroSecsPassed(&job->m_STimeStarted);
    switch ( job->m_ePauseReason )
    {
      case GCSDK::EJobPauseReason::k_EJobPauseReasonNetworkMsg:
        ++v5->m_elem.m_cPauseReasonNetworkMsg;
        break;
      case GCSDK::EJobPauseReason::k_EJobPauseReasonSleepForTime:
        ++v5->m_elem.m_cPauseReasonSleepForTime;
        break;
      case GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock:
        ++v5->m_elem.m_cPauseReasonWaitingForLock;
        break;
      case GCSDK::EJobPauseReason::k_EJobPauseReasonYield:
        ++v5->m_elem.m_cPauseReasonYield;
        break;
      case GCSDK::EJobPauseReason::k_EJobPauseReasonSQL:
        ++v5->m_elem.m_cPauseReasonSQL;
        break;
      case GCSDK::EJobPauseReason::k_EJobPauseReasonWorkItem:
      case GCSDK::EJobPauseReason::k_EJobPauseReasonJob:
        ++v5->m_elem.m_cPauseReasonWorkItem;
        break;
      default:
        break;
    }
LABEL_21:
    ++i;
    v54 += 24;
  }
  while ( *(this + 18) > i );
LABEL_22:
  GCSDK::EGInternal_EmitInfo(
    &GCSDK::SPEW_CONSOLE,
    1,
    1,
    "%50s --- running jobs (usec)-- -- locks held -- ----- pause reasons ---------------------------------\n",
    " ");
  GCSDK::EGInternal_EmitInfo(
    &GCSDK::SPEW_CONSOLE,
    1,
    1,
    "%50s    count      aveduration                    netmsg      sql    sleep waitlock    yield workitem\n",
    "name");
  jobprofilestats.m_iJobProfileSort = 1;
  LODWORD(eBucket) = 0;
  jobprofilestats.pmapStatsBucket = &mapStatsBucket;
  CUtlMemory<int,int>::CUtlMemory(&v59, 0, mapStatsBucket.m_cElements);
  m_nMaxElement = mapStatsBucket.m_nMaxElement;
  LODWORD(v14) = eBucket;
  if ( mapStatsBucket.m_nMaxElement > 0 )
  {
    v14 = eBucket;
    v15 = 0;
    v16 = 0;
    do
    {
      if ( m_nMaxElement > v16 && mapStatsBucket.m_memNodes.m_pMemory[v15].m_iNextNode >= -1 )
      {
        if ( v59.m_nAllocationCount == v14 )
        {
          CUtlMemory<int,int>::Grow(&v59, 1);
          v17 = eBucket;
        }
        else
        {
          v17 = v14;
        }
        v18 = v17 + 1;
        LODWORD(eBucket) = v17 + 1;
        v19 = &v59.m_pMemory[v14];
        if ( v19 != 0 )
        {
          *v19 = v16;
          v14 = eBucket;
        }
        else
        {
          v14 = v18;
        }
        m_nMaxElement = mapStatsBucket.m_nMaxElement;
      }
      ++v16;
      ++v15;
    }
    while ( m_nMaxElement > v16 );
  }
  V_qsort_s(v59.m_pMemory, v14, 4, GCSDK::CJobMgr::ProfileSortFunc, &jobprofilestats);
  v46 = 0;
  for ( m = 0; eBucket > m; ++v46 )
  {
    v48 = &mapStatsBucket.m_memNodes.m_pMemory[v59.m_pMemory[v46]];
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_CONSOLE,
      1,
      1,
      "%50s %8lld %16lld %13lld %11lld %8lld %8lld %8lld %8lld %8lld \n",
      v48->m_elem.m_rgchName,
      v48->m_elem.m_cCompletes,
      v48->m_elem.m_u64JobDuration / v48->m_elem.m_cCompletes,
      v48->m_elem.m_cLocksAttempted,
      v48->m_elem.m_cPauseReasonNetworkMsg,
      v48->m_elem.m_cPauseReasonSQL,
      v48->m_elem.m_cPauseReasonSleepForTime,
      v48->m_elem.m_cPauseReasonWaitingForLock,
      v48->m_elem.m_cPauseReasonYield,
      v48->m_elem.m_cPauseReasonWorkItem);
    ++m;
  }
  LODWORD(eBucket) = 0;
  v49 = *(this + 17);
  if ( (v59.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&v59);
    if ( (v59.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&v59);
  }
  CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::~CUtlHashMapLarge(&mapStatsBucket);
  return v49;
}


// GCSDK::WaitAnalysisNode_t::WaitAnalysisNode_t  (line 1749, @0x000000000322e3b0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorAutoPurge, CUtlVectorBase, CopyConstruct<GCSDK::WaitAnalysisNode_t*>, Element, GrowMemory, V_strcpy_safe<100ul>, operator[], ~CUtlVector, ~CUtlVectorAutoPurge
// calls: _V_strncpy, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int>::Grow, CUtlVectorBase<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >::PurgeAndDeleteElements, CUtlVectorBase<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: GCSDK::CJobMgr::DumpJobWaitAnalysis
void __fastcall GCSDK::WaitAnalysisNode_t::WaitAnalysisNode_t(
        GCSDK::WaitAnalysisNode_t *const this,
        const char *pszName,
        GCSDK::WaitAnalysisNode_t *pParent)
{
  GCSDK::WaitAnalysisNode_t *m_pParent; // r12
  __int64 m_Size; // r13
  int v6; // eax
  GCSDK::WaitAnalysisNode_t **v7; // rax

  memset(this, 0, 0x60u);
  *&this->m_szName[96] = 0;
  this->m_pParent = pParent;
  this->m_vecChildren.m_Size = 0;
  this->m_vecChildren.m_Memory.m_pMemory = 0;
  this->m_vecChildren.m_Memory.m_nAllocationCount = 0;
  this->m_vecChildren.m_Memory.m_nGrowSize = 0;
  this->m_nCountHier = 0;
  this->m_nCountSelf = 0;
  this->m_usecTotalWaitSelf = 0;
  this->m_usecTotalWaitHier = 0;
  this->m_usecTotalDurationSelf = 0;
  _V_strncpy(this, pszName, 100);
  m_pParent = this->m_pParent;
  if ( m_pParent != 0 )
  {
    m_Size = m_pParent->m_vecChildren.m_Size;
    v6 = m_pParent->m_vecChildren.m_Size;
    if ( m_Size == m_pParent->m_vecChildren.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>::Grow(&m_pParent->m_vecChildren.m_Memory, 1);
      v6 = m_pParent->m_vecChildren.m_Size;
    }
    m_pParent->m_vecChildren.m_Size = v6 + 1;
    v7 = &m_pParent->m_vecChildren.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = this;
  }
}


// GCSDK::WaitAnalysisNode_t::FindOrAddChild  (line 1767, @0x000000000322e4c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorAutoPurge, CUtlVectorBase, CopyConstruct<GCSDK::WaitAnalysisNode_t*>, Element, GrowMemory, V_strcpy_safe<100ul>, V_strlen, WaitAnalysisNode_t, end, operator[], ~CUtlVector, ~CUtlVectorAutoPurge
// calls: strlen, _V_strncpy, V_stricmp_fast, operator new, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int>::Grow, __stack_chk_fail, CUtlVectorBase<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >::PurgeAndDeleteElements, CUtlVectorBase<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume
// callers: GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob, GCSDK::CJobMgr::DumpJobWaitAnalysis
GCSDK::WaitAnalysisNode_t *__fastcall GCSDK::WaitAnalysisNode_t::FindOrAddChild(
        GCSDK::WaitAnalysisNode_t *const this,
        const char *pszName)
{
  void *v3; // r13
  void *v4; // rsi
  GCSDK::WaitAnalysisNode_t **m_pMemory; // rbx
  GCSDK::WaitAnalysisNode_t **i; // r14
  GCSDK::WaitAnalysisNode_t *v7; // r12
  GCSDK::WaitAnalysisNode_t *m_pParent; // rbx
  __int64 m_Size; // r13
  int v11; // eax
  GCSDK::WaitAnalysisNode_t **v12; // rax
  char szTemp[100]; // [rsp+0h] [rbp-A0h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-38h]

  v3 = pszName;
  v14 = __readfsqword(0x28u);
  if ( pszName != 0 && strlen(pszName) > 99 )
  {
    v4 = v3;
    v3 = szTemp;
    _V_strncpy(szTemp, v4, 100);
  }
  m_pMemory = this->m_vecChildren.m_Memory.m_pMemory;
  for ( i = &m_pMemory[this->m_vecChildren.m_Size]; i != m_pMemory; ++m_pMemory )
  {
    v7 = *m_pMemory;
    if ( V_stricmp_fast(*m_pMemory, v3) == 0 )
      return v7;
  }
  v7 = operator new(0xA8u);
  memset(v7, 0, 0x60u);
  *&v7->m_szName[96] = 0;
  v7->m_pParent = this;
  v7->m_vecChildren.m_Size = 0;
  v7->m_vecChildren.m_Memory.m_pMemory = 0;
  v7->m_vecChildren.m_Memory.m_nAllocationCount = 0;
  v7->m_vecChildren.m_Memory.m_nGrowSize = 0;
  v7->m_nCountHier = 0;
  v7->m_nCountSelf = 0;
  v7->m_usecTotalWaitSelf = 0;
  v7->m_usecTotalWaitHier = 0;
  v7->m_usecTotalDurationSelf = 0;
  _V_strncpy(v7, v3, 100);
  m_pParent = v7->m_pParent;
  if ( m_pParent == 0 )
    return v7;
  m_Size = m_pParent->m_vecChildren.m_Size;
  v11 = m_pParent->m_vecChildren.m_Size;
  if ( m_Size == m_pParent->m_vecChildren.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>::Grow(&m_pParent->m_vecChildren.m_Memory, 1);
    v11 = m_pParent->m_vecChildren.m_Size;
  }
  m_pParent->m_vecChildren.m_Size = v11 + 1;
  v12 = &m_pParent->m_vecChildren.m_Memory.m_pMemory[m_Size];
  if ( v12 == 0 )
    return v7;
  *v12 = v7;
  return v7;
}


// GCSDK::WaitAnalysisGraph_t::~WaitAnalysisGraph_t  (line 1804, @0x000000000322d1b0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorAutoPurge, ~CUtlVectorBase, ~WaitAnalysisNode_t
// calls: CUtlVectorBase<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >::PurgeAndDeleteElements, operator delete, CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int>::Purge, CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int>::Purge, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int>::Purge
// callers: GCSDK::CJobMgr::DumpJobWaitAnalysis
void __fastcall GCSDK::WaitAnalysisGraph_t::~WaitAnalysisGraph_t(GCSDK::WaitAnalysisGraph_t *const this)
{
  GCSDK::WaitAnalysisNode_t *m_pRoot; // r12
  bool v3; // zf

  m_pRoot = this->m_pRoot;
  if ( this->m_pRoot != 0 )
  {
    CUtlVectorBase<GCSDK::WaitAnalysisNode_t *,CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>>::PurgeAndDeleteElements(&m_pRoot->m_vecChildren);
    v3 = (m_pRoot->m_vecChildren.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pRoot->m_vecChildren.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>::Purge(&m_pRoot->m_vecChildren.m_Memory);
      if ( (m_pRoot->m_vecChildren.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>::Purge(&m_pRoot->m_vecChildren.m_Memory);
    }
    operator delete(m_pRoot);
  }
  CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(&this->m_mapJobID);
  if ( (this->m_mapJobID.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&this->m_mapJobID.m_table);
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(&this->m_mapNetMsg);
  if ( (this->m_mapNetMsg.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&this->m_mapNetMsg.m_table);
}


// GCSDK::WaitAnalysisGraph_t::DumpTree  (line 1840, @0x00000000032303b0, libserver.so)  // inlines: DumpTree, SortPredicate<GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t*, int, char const*, char const*)::__lambda6>, __final_insertion_sort<GCSDK::WaitAnalysisNode_t**, GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t*, int, char const*, char const*)::__lambda6>, __lg, __unguarded_insertion_sort<GCSDK::WaitAnalysisNode_t**, GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t*, int, char const*, char const*)::__lambda6>, sort<GCSDK::WaitAnalysisNode_t**, GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t*, int, char const*, char const*)::__lambda6>
// calls: GCSDK::CGCEmitGroup::Internal_Msg, std::__introsort_loop<GCSDK::WaitAnalysisNode_t**, long int, GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t*, int, char const*, char const*)::__lambda6>, std::__insertion_sort<GCSDK::WaitAnalysisNode_t**, GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t*, int, char const*, char const*)::__lambda6>, std::__unguarded_linear_insert<GCSDK::WaitAnalysisNode_t**, GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t*, int, char const*, char const*)::__lambda6>
// callers: GCSDK::CJobMgr::DumpJobWaitAnalysis
void __fastcall GCSDK::WaitAnalysisGraph_t::DumpTree(
        GCSDK::WaitAnalysisGraph_t *const this,
        GCSDK::WaitAnalysisNode_t *pNode,
        int nIndent,
        const char *pszFmtCategory,
        const char *pszFmtJob)
{
  unsigned int m_nCountHier; // edi
  int64 v9; // rax
  __int64 v10; // rsi
  __int64 m_nCountSelf; // rcx
  int64 v12; // rax
  double v13; // xmm2_8
  double v14; // xmm2_8
  int64 v15; // rax
  double v16; // xmm1_8
  double v17; // xmm1_8
  double v18; // xmm0_8
  GCSDK::WaitAnalysisNode_t **m_pMemory; // rcx
  __int64 m_Size; // rax
  GCSDK::WaitAnalysisNode_t **v21; // rbx
  GCSDK::WaitAnalysisNode_t **v22; // rsi
  __int64 v23; // r15
  GCSDK::WaitAnalysisNode_t **v24; // r15
  GCSDK::WaitAnalysisNode_t **v25; // rdi
  GCSDK::WaitAnalysisNode_t **v26; // rax
  GCSDK::WaitAnalysisNode_t *v27; // r12
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  double v33; // xmm2_8
  double v34; // xmm2_8
  __int64 v35; // rax
  double v36; // xmm1_8
  double v37; // xmm0_8
  GCSDK::WaitAnalysisNode_t **v38; // rcx
  __int64 v39; // rax
  GCSDK::WaitAnalysisNode_t **v40; // rbx
  GCSDK::WaitAnalysisNode_t **v41; // rsi
  __int64 v42; // r15
  GCSDK::WaitAnalysisNode_t **v43; // r15
  GCSDK::WaitAnalysisNode_t **v44; // rdi
  GCSDK::WaitAnalysisNode_t **v45; // rax
  GCSDK::WaitAnalysisNode_t *v46; // rbx
  int v47; // esi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rax
  double v52; // xmm2_8
  double v53; // xmm2_8
  __int64 v54; // rax
  double v55; // xmm1_8
  double v56; // xmm1_8
  double v57; // xmm0_8
  GCSDK::WaitAnalysisNode_t **v58; // r15
  __int64 v59; // r12
  unsigned __int64 v60; // rax
  GCSDK::WaitAnalysisNode_t **v61; // r12
  GCSDK::WaitAnalysisNode_t **v62; // rdi
  GCSDK::WaitAnalysisNode_t **v63; // rax
  GCSDK::WaitAnalysisNode_t *v64; // rbx
  int v65; // esi
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rax
  double v70; // xmm2_8
  double v71; // xmm2_8
  __int64 v72; // rax
  double v73; // xmm1_8
  double v74; // xmm3_8
  GCSDK::WaitAnalysisNode_t **v75; // rax
  __int64 v76; // rdx
  GCSDK::WaitAnalysisNode_t **v77; // r15
  GCSDK::WaitAnalysisNode_t **v78; // rsi
  __int64 v79; // r12
  GCSDK::WaitAnalysisNode_t **v80; // r12
  GCSDK::WaitAnalysisNode_t **v81; // rdi
  GCSDK::WaitAnalysisNode_t **v82; // rax
  GCSDK::WaitAnalysisNode_t *v83; // r15
  int v84; // esi
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rax
  double v89; // xmm2_8
  double v90; // xmm2_8
  __int64 v91; // rax
  double v92; // xmm1_8
  double v93; // xmm1_8
  double v94; // xmm0_8
  int v95; // r12d
  GCSDK::WaitAnalysisNode_t **v96; // rcx
  __int64 v97; // rbx
  unsigned __int64 v98; // rax
  GCSDK::WaitAnalysisNode_t **v99; // rbx
  GCSDK::WaitAnalysisNode_t **v100; // r12
  GCSDK::WaitAnalysisNode_t **v101; // rdi
  GCSDK::WaitAnalysisNode_t **v102; // rax
  GCSDK::WaitAnalysisNode_t **v103; // rbx
  GCSDK::WaitAnalysisNode_t **v104; // r15
  GCSDK::WaitAnalysisNode_t *v105; // rsi
  double v106; // xmm0_8
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rdx
  double v110; // xmm0_8
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rdx
  double v114; // xmm0_8
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rdx
  double v118; // xmm0_8
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rdx
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rdx
  double v124; // xmm0_8
  __int64 v125; // [rsp+0h] [rbp-B0h]
  GCSDK::WaitAnalysisNode_t **__for_begin; // [rsp+18h] [rbp-98h]
  CUtlVectorBase<GCSDK::WaitAnalysisNode_t*,CUtlMemory<GCSDK::WaitAnalysisNode_t*,int> >::iterator __for_end; // [rsp+20h] [rbp-90h]
  GCSDK::WaitAnalysisNode_t **v128; // [rsp+28h] [rbp-88h]
  unsigned int v129; // [rsp+30h] [rbp-80h]
  unsigned int nIndenta; // [rsp+34h] [rbp-7Ch]
  GCSDK::WaitAnalysisNode_t **v131; // [rsp+38h] [rbp-78h]
  GCSDK::WaitAnalysisNode_t **v132; // [rsp+40h] [rbp-70h]
  GCSDK::WaitAnalysisNode_t **v133; // [rsp+48h] [rbp-68h]
  GCSDK::WaitAnalysisNode_t **v134; // [rsp+50h] [rbp-60h]
  int v135; // [rsp+50h] [rbp-60h]
  GCSDK::WaitAnalysisNode_t **v136; // [rsp+58h] [rbp-58h]
  unsigned int v137; // [rsp+60h] [rbp-50h]
  unsigned int v138; // [rsp+64h] [rbp-4Ch]
  GCSDK::WaitAnalysisNode_t **__last; // [rsp+68h] [rbp-48h]
  GCSDK::WaitAnalysisNode_t **__first; // [rsp+70h] [rbp-40h]
  GCSDK::WaitAnalysisNode_t **__firsta; // [rsp+70h] [rbp-40h]
  GCSDK::WaitAnalysisNode_t **__firstb; // [rsp+70h] [rbp-40h]
  GCSDK::WaitAnalysisNode_t **__firstc; // [rsp+70h] [rbp-40h]
  GCSDK::WaitAnalysisNode_t **__firstd; // [rsp+70h] [rbp-40h]

  nIndenta = nIndent;
  m_nCountHier = pNode->m_nCountHier;
  if ( m_nCountHier != 0 )
  {
    v9 = pNode->m_usecTotalWaitHier / m_nCountHier;
    v10 = v9;
    if ( this->m_pRoot != pNode )
    {
      m_nCountSelf = pNode->m_nCountSelf;
      if ( m_nCountSelf <= 0 )
      {
        if ( v9 < 0 )
          v124 = (v9 & 1 | (v9 >> 1)) + (v9 & 1 | (v9 >> 1));
        else
          v124 = v9;
        GCSDK::CGCEmitGroup::Internal_Msg(
          &GCSDK::SPEW_CONSOLE,
          pszFmtCategory,
          m_nCountHier,
          "",
          "",
          "",
          v124 * 0.001,
          nIndent,
          "",
          pNode);
      }
      else
      {
        v12 = pNode->m_usecTotalDurationSelf / m_nCountSelf;
        if ( v12 < 0 )
        {
          v123 = (pNode->m_usecTotalDurationSelf / m_nCountSelf) & 1
               | ((pNode->m_usecTotalDurationSelf / m_nCountSelf) >> 1);
          v13 = v123 + v123;
        }
        else
        {
          v13 = v12;
        }
        v14 = v13 * 0.001;
        v15 = pNode->m_usecTotalWaitSelf / m_nCountSelf;
        if ( v15 < 0 )
        {
          v122 = (pNode->m_usecTotalWaitSelf / m_nCountSelf) & 1 | ((pNode->m_usecTotalWaitSelf / m_nCountSelf) >> 1);
          v16 = v122 + v122;
        }
        else
        {
          v16 = v15;
        }
        v17 = v16 * 0.001;
        if ( v10 < 0 )
          v18 = (v10 & 1 | (v10 >> 1)) + (v10 & 1 | (v10 >> 1));
        else
          v18 = v10;
        GCSDK::CGCEmitGroup::Internal_Msg(
          &GCSDK::SPEW_CONSOLE,
          pszFmtJob,
          m_nCountHier,
          m_nCountSelf,
          nIndenta,
          "",
          v18 * 0.001,
          v17,
          v14,
          pNode);
      }
      nIndenta += 2;
    }
    m_pMemory = pNode->m_vecChildren.m_Memory.m_pMemory;
    m_Size = pNode->m_vecChildren.m_Size;
    v21 = &m_pMemory[m_Size];
    if ( m_pMemory != v21 )
    {
      v22 = &m_pMemory[m_Size];
      v23 = 8 * m_Size;
      __first = pNode->m_vecChildren.m_Memory.m_pMemory;
      _BitScanReverse64(&m_Size, (8 * m_Size) >> 3);
      std::__introsort_loop<GCSDK::WaitAnalysisNode_t **,long,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
        __first,
        v22,
        2 * (63LL - (m_Size ^ 0x3F)));
      if ( v23 <= 135 )
      {
        std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
          __first,
          v21);
      }
      else
      {
        v24 = __first + 16;
        std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
          __first,
          __first + 16);
        if ( v21 != __first + 16 )
        {
          do
          {
            v25 = v24++;
            std::__unguarded_linear_insert<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(v25);
          }
          while ( v21 != v24 );
        }
      }
      v26 = pNode->m_vecChildren.m_Memory.m_pMemory;
      __for_end = &v26[pNode->m_vecChildren.m_Size];
      if ( v26 != __for_end )
      {
        for ( __for_begin = pNode->m_vecChildren.m_Memory.m_pMemory; __for_end != __for_begin; ++__for_begin )
        {
          v27 = *__for_begin;
          v28 = (*__for_begin)->m_nCountHier;
          if ( v28 == 0 )
            continue;
          v29 = v27->m_usecTotalWaitHier / v28;
          v30 = v29;
          if ( v27 == this->m_pRoot )
          {
            v129 = nIndenta;
            goto LABEL_28;
          }
          v31 = v27->m_nCountSelf;
          if ( v31 <= 0 )
          {
            if ( v29 < 0 )
              v118 = (v29 & 1 | (v29 >> 1)) + (v29 & 1 | (v29 >> 1));
            else
              v118 = v29;
            LODWORD(v125) = nIndenta;
            GCSDK::CGCEmitGroup::Internal_Msg(
              &GCSDK::SPEW_CONSOLE,
              pszFmtCategory,
              v28,
              "",
              "",
              "",
              v118 * 0.001,
              v125,
              "",
              v27);
            goto LABEL_27;
          }
          v32 = v27->m_usecTotalDurationSelf / v31;
          if ( v32 < 0 )
          {
            v121 = (v27->m_usecTotalDurationSelf / v31) & 1 | ((v27->m_usecTotalDurationSelf / v31) >> 1);
            v33 = v121 + v121;
          }
          else
          {
            v33 = v32;
          }
          v34 = v33 * 0.001;
          v35 = v27->m_usecTotalWaitSelf / v31;
          if ( v35 < 0 )
          {
            v119 = (v27->m_usecTotalWaitSelf / v31) & 1 | ((v27->m_usecTotalWaitSelf / v31) >> 1);
            v36 = (v119 + v119) * 0.001;
            if ( v30 < 0 )
            {
LABEL_127:
              v120 = (v27->m_usecTotalWaitHier / v28) & 1 | ((v27->m_usecTotalWaitHier / v28) >> 1);
              v37 = v120 + v120;
              goto LABEL_26;
            }
          }
          else
          {
            v36 = v35 * 0.001;
            if ( v30 < 0 )
              goto LABEL_127;
          }
          v37 = v30;
LABEL_26:
          GCSDK::CGCEmitGroup::Internal_Msg(
            &GCSDK::SPEW_CONSOLE,
            pszFmtJob,
            v28,
            v31,
            nIndenta,
            "",
            v37 * 0.001,
            v36,
            v34,
            *__for_begin);
LABEL_27:
          v129 = nIndenta + 2;
LABEL_28:
          v38 = v27->m_vecChildren.m_Memory.m_pMemory;
          v39 = v27->m_vecChildren.m_Size;
          v40 = &v38[v39];
          if ( v38 != v40 )
          {
            v41 = &v38[v39];
            v42 = 8 * v39;
            __firsta = v27->m_vecChildren.m_Memory.m_pMemory;
            _BitScanReverse64(&v39, (8 * v39) >> 3);
            std::__introsort_loop<GCSDK::WaitAnalysisNode_t **,long,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
              __firsta,
              v41,
              2 * (63LL - (v39 ^ 0x3F)));
            if ( v42 <= 135 )
            {
              std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                __firsta,
                v40);
            }
            else
            {
              v43 = __firsta + 16;
              std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                __firsta,
                __firsta + 16);
              if ( v40 != __firsta + 16 )
              {
                do
                {
                  v44 = v43++;
                  std::__unguarded_linear_insert<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(v44);
                }
                while ( v40 != v43 );
              }
            }
            v45 = v27->m_vecChildren.m_Memory.m_pMemory;
            v128 = &v45[v27->m_vecChildren.m_Size];
            if ( v45 != v128 )
            {
              v131 = v27->m_vecChildren.m_Memory.m_pMemory;
              while ( 1 )
              {
                v46 = *v131;
                v47 = (*v131)->m_nCountHier;
                if ( v47 != 0 )
                {
                  v48 = v46->m_usecTotalWaitHier / v47;
                  v49 = v48;
                  if ( v46 == this->m_pRoot )
                  {
                    v137 = v129;
                  }
                  else
                  {
                    v50 = v46->m_nCountSelf;
                    if ( v50 <= 0 )
                    {
                      v114 = v48 < 0 ? (v48 & 1 | (v48 >> 1)) + (v48 & 1 | (v48 >> 1)) : v48;
                      LODWORD(v125) = v129;
                      GCSDK::CGCEmitGroup::Internal_Msg(
                        &GCSDK::SPEW_CONSOLE,
                        pszFmtCategory,
                        v47,
                        "",
                        "",
                        "",
                        v114 * 0.001,
                        v125,
                        "",
                        v46);
                    }
                    else
                    {
                      v51 = v46->m_usecTotalDurationSelf / v50;
                      if ( v51 < 0 )
                      {
                        v115 = (v46->m_usecTotalDurationSelf / v50) & 1 | ((v46->m_usecTotalDurationSelf / v50) >> 1);
                        v52 = v115 + v115;
                      }
                      else
                      {
                        v52 = v51;
                      }
                      v53 = v52 * 0.001;
                      v54 = v46->m_usecTotalWaitSelf / v50;
                      if ( v54 < 0 )
                      {
                        v117 = (v46->m_usecTotalWaitSelf / v50) & 1 | ((v46->m_usecTotalWaitSelf / v50) >> 1);
                        v55 = v117 + v117;
                      }
                      else
                      {
                        v55 = v54;
                      }
                      v56 = v55 * 0.001;
                      if ( v49 < 0 )
                      {
                        v116 = (v46->m_usecTotalWaitHier / v47) & 1 | ((v46->m_usecTotalWaitHier / v47) >> 1);
                        v57 = v116 + v116;
                      }
                      else
                      {
                        v57 = v49;
                      }
                      GCSDK::CGCEmitGroup::Internal_Msg(
                        &GCSDK::SPEW_CONSOLE,
                        pszFmtJob,
                        v47,
                        v50,
                        v129,
                        "",
                        v57 * 0.001,
                        v56,
                        v53,
                        *v131);
                    }
                    v137 = v129 + 2;
                  }
                  v58 = v46->m_vecChildren.m_Memory.m_pMemory;
                  __firstb = &v58[v46->m_vecChildren.m_Size];
                  if ( v58 != __firstb )
                  {
                    v59 = 8LL * v46->m_vecChildren.m_Size;
                    _BitScanReverse64(&v60, v59 >> 3);
                    std::__introsort_loop<GCSDK::WaitAnalysisNode_t **,long,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                      v58,
                      &v58[v59 / 8],
                      2 * (63LL - (v60 ^ 0x3F)));
                    if ( v59 <= 135 )
                    {
                      std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                        v58,
                        __firstb);
                    }
                    else
                    {
                      v61 = v58 + 16;
                      std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                        v58,
                        v58 + 16);
                      if ( __firstb != v58 + 16 )
                      {
                        do
                        {
                          v62 = v61++;
                          std::__unguarded_linear_insert<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(v62);
                        }
                        while ( __firstb != v61 );
                      }
                    }
                    v63 = v46->m_vecChildren.m_Memory.m_pMemory;
                    v132 = &v63[v46->m_vecChildren.m_Size];
                    if ( v63 != v132 )
                      break;
                  }
                }
LABEL_89:
                if ( v128 == ++v131 )
                  goto LABEL_90;
              }
              v133 = v46->m_vecChildren.m_Memory.m_pMemory;
              while ( 2 )
              {
                v64 = *v133;
                v65 = (*v133)->m_nCountHier;
                if ( v65 == 0 )
                  goto LABEL_88;
                v66 = v64->m_usecTotalWaitHier / v65;
                v67 = v66;
                if ( v64 == this->m_pRoot )
                {
                  v138 = v137;
                }
                else
                {
                  v68 = v64->m_nCountSelf;
                  if ( v68 <= 0 )
                  {
                    v110 = v66 < 0 ? (v66 & 1 | (v66 >> 1)) + (v66 & 1 | (v66 >> 1)) : v66;
                    LODWORD(v125) = v137;
                    GCSDK::CGCEmitGroup::Internal_Msg(
                      &GCSDK::SPEW_CONSOLE,
                      pszFmtCategory,
                      v65,
                      "",
                      "",
                      "",
                      v110 * 0.001,
                      v125,
                      "",
                      v64);
                  }
                  else
                  {
                    v69 = v64->m_usecTotalDurationSelf / v68;
                    if ( v69 < 0 )
                    {
                      v113 = (v64->m_usecTotalDurationSelf / v68) & 1 | ((v64->m_usecTotalDurationSelf / v68) >> 1);
                      v70 = v113 + v113;
                    }
                    else
                    {
                      v70 = v69;
                    }
                    v71 = v70 * 0.001;
                    v72 = v64->m_usecTotalWaitSelf / v68;
                    if ( v72 < 0 )
                    {
                      v111 = (v64->m_usecTotalWaitSelf / v68) & 1 | ((v64->m_usecTotalWaitSelf / v68) >> 1);
                      v73 = (v111 + v111) * 0.001;
                      if ( v67 < 0 )
                        goto LABEL_108;
LABEL_58:
                      v74 = v67;
                    }
                    else
                    {
                      v73 = v72 * 0.001;
                      if ( v67 >= 0 )
                        goto LABEL_58;
LABEL_108:
                      v112 = (v64->m_usecTotalWaitHier / v65) & 1 | ((v64->m_usecTotalWaitHier / v65) >> 1);
                      v74 = v112 + v112;
                    }
                    GCSDK::CGCEmitGroup::Internal_Msg(
                      &GCSDK::SPEW_CONSOLE,
                      pszFmtJob,
                      v65,
                      v68,
                      v137,
                      "",
                      0.001 * v74,
                      v73,
                      v71,
                      *v133);
                  }
                  v138 = v137 + 2;
                }
                v75 = v64->m_vecChildren.m_Memory.m_pMemory;
                v76 = v64->m_vecChildren.m_Size;
                v77 = &v75[v76];
                if ( v75 == v77 )
                  goto LABEL_88;
                v78 = &v75[v76];
                v79 = 8 * v76;
                __firstc = v64->m_vecChildren.m_Memory.m_pMemory;
                _BitScanReverse64(&v76, (8 * v76) >> 3);
                std::__introsort_loop<GCSDK::WaitAnalysisNode_t **,long,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                  __firstc,
                  v78,
                  2 * (63LL - (v76 ^ 0x3F)));
                if ( v79 <= 135 )
                {
                  std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                    __firstc,
                    v77);
                }
                else
                {
                  v80 = __firstc + 16;
                  std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                    __firstc,
                    __firstc + 16);
                  if ( v77 != __firstc + 16 )
                  {
                    do
                    {
                      v81 = v80++;
                      std::__unguarded_linear_insert<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(v81);
                    }
                    while ( v77 != v80 );
                  }
                }
                v82 = v64->m_vecChildren.m_Memory.m_pMemory;
                v136 = &v82[v64->m_vecChildren.m_Size];
                if ( v82 == v136 )
                {
LABEL_88:
                  if ( v132 == ++v133 )
                    goto LABEL_89;
                  continue;
                }
                break;
              }
              __firstd = v64->m_vecChildren.m_Memory.m_pMemory;
              while ( 2 )
              {
                v83 = *__firstd;
                v84 = (*__firstd)->m_nCountHier;
                if ( v84 != 0 )
                {
                  v85 = v83->m_usecTotalWaitHier / v84;
                  v86 = v85;
                  if ( v83 == this->m_pRoot )
                  {
                    v95 = v138;
                  }
                  else
                  {
                    v87 = v83->m_nCountSelf;
                    if ( v87 <= 0 )
                    {
                      v106 = v85 < 0 ? (v85 & 1 | (v85 >> 1)) + (v85 & 1 | (v85 >> 1)) : v85;
                      LODWORD(v125) = v138;
                      GCSDK::CGCEmitGroup::Internal_Msg(
                        &GCSDK::SPEW_CONSOLE,
                        pszFmtCategory,
                        v84,
                        "",
                        "",
                        "",
                        v106 * 0.001,
                        v125,
                        "",
                        v83);
                    }
                    else
                    {
                      v88 = v83->m_usecTotalDurationSelf / v87;
                      if ( v88 < 0 )
                      {
                        v107 = (v83->m_usecTotalDurationSelf / v87) & 1 | ((v83->m_usecTotalDurationSelf / v87) >> 1);
                        v89 = v107 + v107;
                      }
                      else
                      {
                        v89 = v88;
                      }
                      v90 = v89 * 0.001;
                      v91 = v83->m_usecTotalWaitSelf / v87;
                      if ( v91 < 0 )
                      {
                        v109 = (v83->m_usecTotalWaitSelf / v87) & 1 | ((v83->m_usecTotalWaitSelf / v87) >> 1);
                        v92 = v109 + v109;
                      }
                      else
                      {
                        v92 = v91;
                      }
                      v93 = v92 * 0.001;
                      if ( v86 < 0 )
                      {
                        v108 = (v83->m_usecTotalWaitHier / v84) & 1 | ((v83->m_usecTotalWaitHier / v84) >> 1);
                        v94 = v108 + v108;
                      }
                      else
                      {
                        v94 = v86;
                      }
                      GCSDK::CGCEmitGroup::Internal_Msg(
                        &GCSDK::SPEW_CONSOLE,
                        pszFmtJob,
                        v84,
                        v87,
                        v138,
                        "",
                        v94 * 0.001,
                        v93,
                        v90,
                        *__firstd);
                    }
                    v95 = v138 + 2;
                  }
                  v96 = v83->m_vecChildren.m_Memory.m_pMemory;
                  __last = &v96[v83->m_vecChildren.m_Size];
                  if ( v96 != __last )
                  {
                    v97 = 8LL * v83->m_vecChildren.m_Size;
                    v134 = v83->m_vecChildren.m_Memory.m_pMemory;
                    _BitScanReverse64(&v98, v97 >> 3);
                    std::__introsort_loop<GCSDK::WaitAnalysisNode_t **,long,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                      v96,
                      &v96[v97 / 8],
                      2 * (63LL - (v98 ^ 0x3F)));
                    if ( v97 <= 135 )
                    {
                      std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                        v134,
                        __last);
                    }
                    else
                    {
                      v99 = v134 + 16;
                      std::__insertion_sort<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(
                        v134,
                        v134 + 16);
                      if ( __last != v134 + 16 )
                      {
                        v135 = v95;
                        v100 = v99;
                        do
                        {
                          v101 = v100++;
                          std::__unguarded_linear_insert<GCSDK::WaitAnalysisNode_t **,GCSDK::WaitAnalysisGraph_t::DumpTree(GCSDK::WaitAnalysisNode_t *,int,char const*,char const*)::{lambda(GCSDK::WaitAnalysisNode_t *,GCSDK::WaitAnalysisNode_t *)#1}>(v101);
                        }
                        while ( __last != v100 );
                        v102 = v83->m_vecChildren.m_Memory.m_pMemory;
                        v95 = v135;
                        v103 = &v102[v83->m_vecChildren.m_Size];
                        goto LABEL_84;
                      }
                    }
                    v102 = v83->m_vecChildren.m_Memory.m_pMemory;
                    v103 = &v102[v83->m_vecChildren.m_Size];
LABEL_84:
                    if ( v102 != v103 )
                    {
                      v104 = v102;
                      do
                      {
                        v105 = *v104++;
                        GCSDK::WaitAnalysisGraph_t::DumpTree(this, v105, v95, pszFmtCategory, pszFmtJob);
                      }
                      while ( v103 != v104 );
                    }
                  }
                }
                if ( v136 == ++__firstd )
                  goto LABEL_88;
                continue;
              }
            }
          }
LABEL_90:
          ;
        }
      }
    }
  }
}


// GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob  (line 1888, @0x00000000032276a0, libserver.so)  // inlines: AddToTail, CUtlKeyValuePair<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, CUtlKeyValuePair<unsigned int, GCSDK::WaitAnalysisNode_t*>, CUtlMemory, CUtlVector, CUtlVectorAutoPurge, CUtlVectorBase, Construct<CUtlKeyValuePair<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, long long unsigned int, GCSDK::WaitAnalysisNode_t*>, Construct<CUtlKeyValuePair<unsigned int, GCSDK::WaitAnalysisNode_t*>, unsigned int, GCSDK::WaitAnalysisNode_t*>, CopyConstruct<GCSDK::WaitAnalysisNode_t*>, DoInsert<long long unsigned int>, DoInsert<unsigned int>, DoLookup<long long unsigned int>, DoLookup<unsigned int>, Element, Find, FindNetMsg, GetLockFilenameForDebug, GrowMemory, Insert, V_strcpy_safe<100ul>, WaitAnalysisNode_t, operator(), operator[], ~CUtlVector, ~CUtlVectorAutoPurge
// calls: GCSDK::CJobMgr::GetPJob, GCSDK::WaitAnalysisNode_t::FindOrAddChild, GCSDK::CJob::GetName, CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed, V_UnqualifiedFileName, GCSDK::CLock::GetTypeName, V_sprintf_safe<100ul>, GCSDK::CMessageList::GetMessage, operator new, _V_strncpy, CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed, CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoLookup<long long unsigned int> (19 total)
// callers: GCSDK::CJobMgr::DumpJobWaitAnalysis
// strings: "lock:%s locked line %d %s", "waiting line %d %s", "unknown job", "UnknownMsg%d"
// globals: jpt_32276FE
GCSDK::WaitAnalysisNode_t *__fastcall GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob(
        GCSDK::CJobMgr *const this,
        GCSDK::CJob *pJob,
        GCSDK::WaitAnalysisGraph_t *const graph)
{
  CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> >::handle_t *v3; // rcx
  CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *p_m_mapJobID; // r13
  JobID_t m_JobID; // rsi
  GCSDK::CJob *v9; // rax
  GCSDK::WaitAnalysisNode_t *m_pSleep; // r14
  const char *v11; // rsi
  GCSDK::CWorkItem *m_pWaitingOnWorkItem; // rdi
  const char *m_pszPauseResourceName; // rsi
  const char *Name; // rax
  GCSDK::WaitAnalysisNode_t *v15; // rax
  JobID_t v16; // r12
  GCSDK::WaitAnalysisNode_t *v17; // r14
  unsigned __int64 v18; // rcx
  unsigned int v19; // r15d
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v20; // rax
  GCSDK::CLock *m_pWaitingOnLock; // r15
  const char *m_pFilename; // rdi
  char *v24; // r8
  const char *TypeName; // rax
  GCSDK::WaitAnalysisNode_t *m_pLock; // rdi
  GCSDK::WaitAnalysisNode_t *v27; // rax
  const char *m_pWaitingOnLockFilename; // rdi
  const char *v29; // rax
  GCSDK::MsgType_t m_unWaitMsgType; // r15d
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> >::handle_t *m_nUsed; // rcx
  unsigned int v32; // edx
  unsigned int v33; // edx
  GCSDK::WaitAnalysisNode_t *v34; // rax
  GCSDK::WaitAnalysisNode_t *m_pNetMsg; // rdx
  char *v36; // rsi
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> >::handle_t *v37; // rcx
  GCSDK::WaitAnalysisNode_t *m_pParent; // rax
  GCSDK::WaitAnalysisNode_t *v39; // rdi
  int m_Size; // eax
  GCSDK::WaitAnalysisNode_t **v41; // rax
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v42; // rax
  int v43; // eax
  int v44; // eax
  int v45; // [rsp+4h] [rbp-CCh]
  const char *v46; // [rsp+8h] [rbp-C8h]
  GCSDK::WaitAnalysisNode_t *v47; // [rsp+8h] [rbp-C8h]
  int m_line; // [rsp+10h] [rbp-C0h]
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *p_m_mapNetMsg; // [rsp+10h] [rbp-C0h]
  unsigned int pszName; // [rsp+18h] [rbp-B8h]
  char *ppMsgName; // [rsp+28h] [rbp-A8h] BYREF
  char szTempName[100]; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+98h] [rbp-38h]

  p_m_mapJobID = &graph->m_mapJobID;
  v53 = __readfsqword(0x28u);
  m_JobID = pJob->m_JobID;
  if ( graph->m_mapJobID.m_nUsed != 0 )
  {
    v43 = CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoLookup<unsigned long long>(
            &graph->m_mapJobID,
            m_JobID,
            -2147483647
          * ((21
            * ((265 * ((0x1FFFFF * m_JobID - 1) ^ ((0x1FFFFF * m_JobID - 1) >> 24)))
             ^ ((265 * ((0x1FFFFF * m_JobID - 1) ^ ((0x1FFFFF * m_JobID - 1) >> 24))) >> 14)))
           ^ ((21
             * ((265 * ((0x1FFFFF * m_JobID - 1) ^ ((0x1FFFFF * m_JobID - 1) >> 24)))
              ^ ((265 * ((0x1FFFFF * m_JobID - 1) ^ ((0x1FFFFF * m_JobID - 1) >> 24))) >> 14))) >> 28)),
            v3);
    if ( v43 != -1 )
      return *&graph->m_mapJobID.m_table.m_pMemory[v43].data[2];
  }
  switch ( pJob->m_ePauseReason )
  {
    case GCSDK::EJobPauseReason::k_EJobPauseReasonNetworkMsg:
      m_unWaitMsgType = pJob->m_unWaitMsgType;
      p_m_mapNetMsg = &graph->m_mapNetMsg;
      m_nUsed = graph->m_mapNetMsg.m_nUsed;
      v32 = 33 * (((4097 * m_unWaitMsgType + 2127912214) >> 19) ^ (4097 * m_unWaitMsgType + 2127912214) ^ 0xC761C23C);
      v33 = 9 * ((v32 - 369570787) ^ ((v32 + 374761393) << 9)) - 42973499;
      pszName = HIWORD(v33) ^ v33 ^ 0xB55A4F09;
      if ( m_nUsed == 0
        || (v44 = CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoLookup<unsigned int>(
                    p_m_mapNetMsg,
                    m_unWaitMsgType,
                    pszName,
                    m_nUsed)) == -1 )
      {
        if ( !GCSDK::CMessageList::GetMessage(&GCSDK::g_theMessageList, m_unWaitMsgType, &ppMsgName, 255) )
        {
          V_sprintf_safe<100ul>(szTempName, "UnknownMsg%d", m_unWaitMsgType);
          ppMsgName = szTempName;
        }
        v34 = operator new(0xA8u);
        m_pNetMsg = graph->m_pNetMsg;
        m_pSleep = v34;
        v36 = ppMsgName;
        memset(v34, 0, 0x60u);
        *&v34->m_szName[96] = 0;
        v34->m_pParent = m_pNetMsg;
        v34->m_vecChildren.m_Size = 0;
        v34->m_vecChildren.m_Memory.m_pMemory = 0;
        v34->m_vecChildren.m_Memory.m_nAllocationCount = 0;
        v34->m_vecChildren.m_Memory.m_nGrowSize = 0;
        v34->m_nCountHier = 0;
        v34->m_nCountSelf = 0;
        v34->m_usecTotalWaitSelf = 0;
        v34->m_usecTotalWaitHier = 0;
        v34->m_usecTotalDurationSelf = 0;
        _V_strncpy(v34, v36, 100);
        m_pParent = m_pSleep->m_pParent;
        v39 = m_pParent;
        v47 = m_pParent;
        if ( m_pParent != 0 )
        {
          m_Size = m_pParent->m_vecChildren.m_Size;
          v45 = m_Size;
          if ( m_Size == v39->m_vecChildren.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>::Grow(&v39->m_vecChildren.m_Memory, 1);
            m_Size = v47->m_vecChildren.m_Size;
          }
          v47->m_vecChildren.m_Size = m_Size + 1;
          v41 = &v47->m_vecChildren.m_Memory.m_pMemory[v45];
          if ( v41 != 0 )
            *v41 = m_pSleep;
        }
        if ( graph->m_mapNetMsg.m_nUsed == 0
          || CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoLookup<unsigned int>(
               p_m_mapNetMsg,
               m_unWaitMsgType,
               pszName,
               v37) == -1 )
        {
          v42 = &graph->m_mapNetMsg.m_table.m_pMemory[CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoInsertUnconstructed(
                                                        p_m_mapNetMsg,
                                                        pszName,
                                                        1)];
          if ( v42 != -4LL )
          {
            v42->data[0] = m_unWaitMsgType;
            *&v42->data[2] = m_pSleep;
          }
        }
      }
      else
      {
        m_pSleep = *&graph->m_mapNetMsg.m_table.m_pMemory[v44].data[2];
      }
      break;
    case GCSDK::EJobPauseReason::k_EJobPauseReasonSleepForTime:
      m_pSleep = graph->m_pSleep;
      break;
    case GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock:
      m_pWaitingOnLock = pJob->m_pWaitingOnLock;
      if ( m_pWaitingOnLock != 0 )
      {
        m_pFilename = m_pWaitingOnLock->m_pFilename;
        v24 = "(unknown)";
        if ( m_pFilename != 0 )
          v24 = V_UnqualifiedFileName(m_pFilename);
        v46 = v24;
        m_line = m_pWaitingOnLock->m_line;
        TypeName = GCSDK::CLock::GetTypeName(m_pWaitingOnLock);
        V_sprintf_safe<100ul>(szTempName, "lock:%s locked line %d %s", TypeName, m_line, v46);
        if ( m_pWaitingOnLock->m_pJob != 0 )
          m_pLock = GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob(this, m_pWaitingOnLock->m_pJob, graph);
        else
          m_pLock = graph->m_pLock;
        v27 = GCSDK::WaitAnalysisNode_t::FindOrAddChild(m_pLock, szTempName);
        m_pWaitingOnLockFilename = pJob->m_pWaitingOnLockFilename;
        m_pSleep = v27;
        if ( m_pWaitingOnLockFilename != 0 )
        {
          v29 = V_UnqualifiedFileName(m_pWaitingOnLockFilename);
          V_sprintf_safe<100ul>(szTempName, "waiting line %d %s", pJob->m_waitingOnLockLine, v29);
          m_pSleep = GCSDK::WaitAnalysisNode_t::FindOrAddChild(m_pSleep, szTempName);
        }
      }
      else
      {
        m_pSleep = graph->m_pLock;
      }
      break;
    case GCSDK::EJobPauseReason::k_EJobPauseReasonYield:
      m_pszPauseResourceName = pJob->m_pszPauseResourceName;
      if ( m_pszPauseResourceName == 0 )
        m_pszPauseResourceName = "other";
      m_pSleep = GCSDK::WaitAnalysisNode_t::FindOrAddChild(graph->m_pYield, m_pszPauseResourceName);
      break;
    case GCSDK::EJobPauseReason::k_EJobPauseReasonWorkItem:
      v9 = GCSDK::CJobMgr::GetPJob(this, pJob->m_jobIDWaitingOn);
      if ( v9 != 0 )
        goto LABEL_4;
      v11 = pJob->m_pszPauseResourceName;
      if ( v11 == 0 || *v11 == 0 )
      {
        m_pWaitingOnWorkItem = pJob->m_pWaitingOnWorkItem;
        if ( m_pWaitingOnWorkItem != 0 )
          v11 = (*(m_pWaitingOnWorkItem->_vptr_CRefCount + 4))(m_pWaitingOnWorkItem);
        if ( v11 != 0 )
        {
          if ( *v11 == 0 )
            v11 = "other";
        }
        else
        {
          v11 = "other";
        }
      }
      m_pSleep = GCSDK::WaitAnalysisNode_t::FindOrAddChild(graph->m_pWorkItem, v11);
      break;
    case GCSDK::EJobPauseReason::k_EJobPauseReasonJob:
      v9 = GCSDK::CJobMgr::GetPJob(this, pJob->m_jobIDWaitingOn);
      if ( v9 != 0 )
LABEL_4:
        m_pSleep = GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob(this, v9, graph);
      else
        m_pSleep = GCSDK::WaitAnalysisNode_t::FindOrAddChild(graph->m_pRoot, "unknown job");
      break;
    default:
      m_pSleep = graph->m_pOther;
      break;
  }
  Name = GCSDK::CJob::GetName(pJob);
  v15 = GCSDK::WaitAnalysisNode_t::FindOrAddChild(m_pSleep, Name);
  v16 = pJob->m_JobID;
  v17 = v15;
  v18 = (21
       * ((265 * ((0x1FFFFF * v16 - 1) ^ ((0x1FFFFF * v16 - 1) >> 24)))
        ^ ((265 * ((0x1FFFFF * v16 - 1) ^ ((0x1FFFFF * v16 - 1) >> 24))) >> 14)))
      ^ ((21
        * ((265 * ((0x1FFFFF * v16 - 1) ^ ((0x1FFFFF * v16 - 1) >> 24)))
         ^ ((265 * ((0x1FFFFF * v16 - 1) ^ ((0x1FFFFF * v16 - 1) >> 24))) >> 14))) >> 28);
  v19 = -2147483647 * v18;
  if ( graph->m_mapJobID.m_nUsed != 0
    && CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoLookup<unsigned long long>(
         p_m_mapJobID,
         v16,
         v19,
         v18) != -1 )
  {
    return v17;
  }
  v20 = &graph->m_mapJobID.m_table.m_pMemory[CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoInsertUnconstructed(
                                               p_m_mapJobID,
                                               v19,
                                               1)];
  if ( v20 == -4LL )
    return v17;
  *v20->data = v16;
  *&v20->data[2] = v17;
  return v17;
}


// GCSDK::CJobMgr::DumpJobWaitAnalysis  (line 2030, @0x0000000003227f70, libserver.so)  // inlines: CUtlHashtable, CUtlMemory, Dump, IsValidIndex, Purge, RemoveAll, WaitAnalysisGraph_t, operator[], ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorAutoPurge, ~CUtlVectorBase, ~WaitAnalysisGraph_t, ~WaitAnalysisNode_t
// calls: operator new, GCSDK::WaitAnalysisNode_t::WaitAnalysisNode_t, GCSDK::WaitAnalysisNode_t::FindOrAddChild, GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob, GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::CGCEmitGroup::Internal_Msg, GCSDK::WaitAnalysisGraph_t::DumpTree, CUtlVectorBase<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >::PurgeAndDeleteElements, operator delete, CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int>::Purge, CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll (18 total)
// strings: "(root)", "SQL", "netmsg", "webapi", "yield", "workitem" (16 total)
void __fastcall GCSDK::CJobMgr::DumpJobWaitAnalysis(GCSDK::CJobMgr *const this)
{
  GCSDK::WaitAnalysisNode_t *v2; // rbx
  GCSDK::WaitAnalysisNode_t *v3; // rax
  int v4; // r8d
  __int64 v5; // r13
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r12
  GCSDK::WaitAnalysisNode_t *v9; // rbx
  int64 v10; // r12
  GCSDK::WaitAnalysisNode_t *m_pRoot; // rbx
  GCSDK::CJob *pJob; // [rsp+18h] [rbp-C8h]
  GCSDK::WaitAnalysisGraph_t graph; // [rsp+20h] [rbp-C0h] BYREF

  memset(&graph.m_mapNetMsg, 0, 20);
  graph.m_mapNetMsg.m_nMinSize = 32;
  graph.m_mapNetMsg.m_bSizeLocked = 0;
  memset(&graph.m_mapJobID, 0, 20);
  graph.m_mapJobID.m_nMinSize = 32;
  graph.m_mapJobID.m_bSizeLocked = 0;
  v2 = operator new(0xA8u);
  GCSDK::WaitAnalysisNode_t::WaitAnalysisNode_t(v2, "(root)", 0);
  graph.m_pRoot = v2;
  graph.m_pSQL = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "SQL");
  graph.m_pNetMsg = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "netmsg");
  graph.m_pWebAPI = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "webapi");
  graph.m_pSleep = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "sleep");
  graph.m_pYield = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "yield");
  graph.m_pOther = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "other");
  graph.m_pLock = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "lock");
  v3 = GCSDK::WaitAnalysisNode_t::FindOrAddChild(v2, "workitem");
  v4 = *(this + 18);
  graph.m_pWorkItem = v3;
  if ( v4 > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *(this + 6) + v5;
      if ( *(v7 + 16) >= -1 )
      {
        pJob = *(v7 + 8);
        if ( pJob != GCSDK::g_pJobCur )
        {
          v8 = *(v7 + 8);
          v9 = GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob(this, pJob, &graph);
          if ( *(v8 + 72) == *(v8 + 80) )
            v10 = 0;
          else
            v10 = GCSDK::CJobTime::CServerMicroSecsPassed(&pJob->m_STimeSwitched);
          ++v9->m_nCountSelf;
          v9->m_usecTotalDurationSelf += GCSDK::CJobTime::CServerMicroSecsPassed(&pJob->m_STimeStarted);
          v9->m_usecTotalWaitSelf += v10;
          do
          {
            ++v9->m_nCountHier;
            v9->m_usecTotalWaitHier += v10;
            v9 = v9->m_pParent;
          }
          while ( v9 != 0 );
        }
      }
      ++v6;
      v5 += 24;
    }
    while ( *(this + 18) > v6 );
  }
  GCSDK::CGCEmitGroup::Internal_Msg(
    &GCSDK::SPEW_CONSOLE,
    "%5s%9s%8s%9s%10s   %s\n",
    "Hier",
    "Hier Avg",
    "Num",
    "Job Avg",
    "Avg Job",
    "");
  GCSDK::CGCEmitGroup::Internal_Msg(
    &GCSDK::SPEW_CONSOLE,
    "%5s%9s%8s%9s%10s   %s\n",
    "Jobs",
    "Wait ms",
    "Jobs",
    "Wait ms",
    "Dur ms",
    "Name");
  GCSDK::CGCEmitGroup::Internal_Msg(
    &GCSDK::SPEW_CONSOLE,
    "%5s%9s%8s%9s%10s   %s\n",
    "-----",
    "--------",
    "-----",
    "--------",
    "--------",
    "-----------------------------------------");
  GCSDK::WaitAnalysisGraph_t::DumpTree(
    &graph,
    graph.m_pRoot,
    0,
    "%5d%9.0f%8s%9s%10s   %*s%s\n",
    "%5d%9.0f%8d%9.0f%10.0f   %*s%s\n");
  m_pRoot = graph.m_pRoot;
  if ( graph.m_pRoot != 0 )
  {
    CUtlVectorBase<GCSDK::WaitAnalysisNode_t *,CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>>::PurgeAndDeleteElements(&graph.m_pRoot->m_vecChildren);
    m_pRoot->m_vecChildren.m_Size = 0;
    if ( (m_pRoot->m_vecChildren.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>::Purge(&m_pRoot->m_vecChildren.m_Memory);
      if ( (m_pRoot->m_vecChildren.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<GCSDK::WaitAnalysisNode_t *,int>::Purge(&m_pRoot->m_vecChildren.m_Memory);
    }
    operator delete(m_pRoot);
  }
  CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(&graph.m_mapJobID);
  if ( (graph.m_mapJobID.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&graph.m_mapJobID.m_table);
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(&graph.m_mapNetMsg);
  if ( (graph.m_mapNetMsg.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&graph.m_mapNetMsg.m_table);
}


// GCSDK::CJobMgr::DumpJob  (line 2072, @0x0000000003225170, libserver.so)
// calls: GCSDK::CJobMgr::GetPJob, GCSDK::CJob::GetPauseReasonDescription, GCSDK::CJob::GetName, GCSDK::EGInternal_EmitInfo, GCSDK::CLock::GetName, GCSDK::CLock::Dump
// callers: GCSDK::CJobMgr::DumpJobs
// strings: "%llu\t%12s %12s\n", "\tHolding lock %s:\n", "\t ", "\tWaiting for lock %s from: %s line %d\n", "Invalid job ID %llu\n"
void __fastcall GCSDK::CJobMgr::DumpJob(const GCSDK::CJobMgr *const this, JobID_t jobID, int nPrintLocksMax)
{
  const GCSDK::CJob *PJob; // rax
  const GCSDK::CJob *v6; // r13
  const char *PauseReasonDescription; // rbx
  const char *Name; // rax
  __int64 i; // rbx
  const GCSDK::CLock *v10; // r12
  const char *v11; // rax
  const GCSDK::CLock *m_pWaitingOnLock; // rdi
  int m_waitingOnLockLine; // r12d
  const char *m_pWaitingOnLockFilename; // rbx
  const char *v15; // rax

  PJob = GCSDK::CJobMgr::GetPJob(this, jobID);
  v6 = PJob;
  if ( PJob != 0 )
  {
    PauseReasonDescription = GCSDK::CJob::GetPauseReasonDescription(PJob);
    Name = GCSDK::CJob::GetName(v6);
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_CONSOLE,
      1,
      1,
      "%llu\t%12s %12s\n",
      v6->m_JobID,
      Name,
      PauseReasonDescription);
    if ( v6->m_ePauseReason == GCSDK::EJobPauseReason::k_EJobPauseReasonWaitingForLock )
    {
      m_pWaitingOnLock = v6->m_pWaitingOnLock;
      if ( m_pWaitingOnLock != 0 )
      {
        m_waitingOnLockLine = v6->m_waitingOnLockLine;
        m_pWaitingOnLockFilename = v6->m_pWaitingOnLockFilename;
        v15 = GCSDK::CLock::GetName(m_pWaitingOnLock);
        GCSDK::EGInternal_EmitInfo(
          &GCSDK::SPEW_CONSOLE,
          1,
          1,
          "\tWaiting for lock %s from: %s line %d\n",
          v15,
          m_pWaitingOnLockFilename,
          m_waitingOnLockLine);
        GCSDK::CLock::Dump(v6->m_pWaitingOnLock, "\t ", nPrintLocksMax, 1);
      }
    }
    for ( i = 0; v6->m_vecLocks.m_Size > i; ++i )
    {
      v10 = v6->m_vecLocks.m_Memory.m_pMemory[i];
      v11 = GCSDK::CLock::GetName(v10);
      GCSDK::EGInternal_EmitInfo(&GCSDK::SPEW_CONSOLE, 1, 1, "\tHolding lock %s:\n", v11);
      GCSDK::CLock::Dump(v10, "\t ", nPrintLocksMax, 1);
    }
  }
  else
  {
    GCSDK::EGInternal_EmitInfo(&GCSDK::SPEW_CONSOLE, 1, 1, "Invalid job ID %llu\n", jobID);
  }
}


// GCSDK::CJobMgr::CountJobs  (line 2105, @0x0000000003224c50, libserver.so)
int __fastcall GCSDK::CJobMgr::CountJobs(const GCSDK::CJobMgr *const this)
{
  return *(this + 17);
}


// GCSDK::CJobMgr::CheckThreadID  (line 2114, @0x0000000003224c60, libserver.so)
// calls: ThreadGetCurrentId
// callers: GCSDK::CJob::StartJobDelayed, GCSDK::CJob::StartJobImmediate
void __fastcall GCSDK::CJobMgr::CheckThreadID(GCSDK::CJobMgr *const this)
{
  int CurrentId; // eax

  CurrentId = ThreadGetCurrentId(this);
  if ( *(this + 210) == 0 )
    *(this + 210) = CurrentId;
}


// GCSDK::GMapJobTypesByMsg  (line 2133, @0x0000000003224c90, libserver.so)  // inlines: CBitVecT, CLargeVarBitVec, CUtlHashMapLarge, CUtlMemory, CUtlVector, CUtlVectorBase, CVarBitVecBase, memset
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: GCSDK::CJobMgr::BIsJobCurrentlyRegistered, GCSDK::CJobMgr::GetJobInfoForMsg, GCSDK::CJobMgr::UnregisterJobByID, GCSDK::CJobMgr::UnregisterJobByName, GCSDK::CJobMgr::RegisterJobType
// globals: `guard variable for'GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg, GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg, __dso_handle, CUtlHashMapLarge<uint,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<uint>,MurmurHash3Functor<uint>>::~CUtlHashMapLarge()
GCSDK::TJobTypeByMsg *__cdecl GCSDK::GMapJobTypesByMsg()
{
  if ( `guard variable for'GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg != 0 )
    return &GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg;
  if ( __cxa_guard_acquire(&`guard variable for'GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg) != 0 )
  {
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_vecHashBuckets.m_Size = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_vecHashBuckets.m_Memory.m_pMemory = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
    *&GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_bitsMigratedBuckets.m_numBits = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_bitsMigratedBuckets.m_pInt = 0;
    *GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_bitsMigratedBuckets.m_FixedStorage = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_memNodes.m_pMemory = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_memNodes.m_nAllocationCount = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_memNodes.m_nGrowSize = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_cElements = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_nMaxElement = 0;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_nMinRehashedBucket = -1;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_nMaxRehashedBucket = -1;
    GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg.m_iNodeFreeListHead = -1;
    __cxa_guard_release(&`guard variable for'GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg);
    __cxa_atexit(
      CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::~CUtlHashMapLarge,
      &GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg,
      &_dso_handle);
  }
  return &GCSDK::GMapJobTypesByMsg(void)::s_MapJobTypesByMsg;
}


// GCSDK::GMapJobTypesByName  (line 2141, @0x0000000003224d90, libserver.so)  // inlines: CBitVecT, CLargeVarBitVec, CUtlHashMapLarge, CUtlMemory, CUtlVector, CUtlVectorBase, CVarBitVecBase, memset
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: GCSDK::CJobMgr::BIsJobCurrentlyRegistered, GCSDK::CJobMgr::GetJobInfoForMsg, GCSDK::CJobMgr::UnregisterJobByID, GCSDK::CJobMgr::UnregisterJobByName, GCSDK::CJobMgr::RegisterJobType
// globals: `guard variable for'GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName, GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName, __dso_handle, CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::~CUtlHashMapLarge()
GCSDK::TJobTypeByName *__cdecl GCSDK::GMapJobTypesByName()
{
  if ( `guard variable for'GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName != 0 )
    return &GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName;
  if ( __cxa_guard_acquire(&`guard variable for'GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName) != 0 )
  {
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_vecHashBuckets.m_Size = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_vecHashBuckets.m_Memory.m_pMemory = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
    *&GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_bitsMigratedBuckets.m_numBits = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_bitsMigratedBuckets.m_pInt = 0;
    *GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_bitsMigratedBuckets.m_FixedStorage = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_memNodes.m_pMemory = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_memNodes.m_nAllocationCount = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_memNodes.m_nGrowSize = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_cElements = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_nMaxElement = 0;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_nMinRehashedBucket = -1;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_nMaxRehashedBucket = -1;
    GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName.m_iNodeFreeListHead = -1;
    __cxa_guard_release(&`guard variable for'GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName);
    __cxa_atexit(
      CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::~CUtlHashMapLarge,
      &GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName,
      &_dso_handle);
  }
  return &GCSDK::GMapJobTypesByName(void)::s_MapJobTypesByName;
}


// GCSDK::CJobMgr::RegisterJobType  (line 2159, @0x000000000322adb0, libserver.so)  // inlines: AllocNode, Bitvec_Set, CopyConstruct<char const*>, CopyConstruct<const GCSDK::JobType_t*>, CopyConstruct<unsigned int>, FindInBucket, FreeNodeIDToIndex, Get, IncrementalRehash, Insert, InsertInternal, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, MurmurHash3String, RehashNodesInBucket, Set, operator(), operator[]
// calls: GCSDK::GMapJobTypesByName, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::EnsureCapacity, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::RehashNodesInBucket, strlen, MurmurHash3_32, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::LinkNodeIntoBucket, GCSDK::GMapJobTypesByMsg, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::EnsureCapacity, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::UnlinkNodeFromBucket, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket (16 total)
// callers: _GLOBAL__sub_I__unity_dota_03.cpp, _GLOBAL__sub_I__unity_dota_06.cpp, _GLOBAL__sub_I__unity_gc_01.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_economy_02.cpp, _GLOBAL__sub_I_gcclient.cpp
void __fastcall GCSDK::CJobMgr::RegisterJobType(const GCSDK::JobType_t *pJobType)
{
  GCSDK::TJobTypeByName *v1; // rax
  int v2; // edx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr> *v3; // r15
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t v4; // eax
  int v5; // edx
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t v9; // r9d
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t *v10; // rax
  int v11; // eax
  bool v12; // cc
  const char *m_pchName; // rbx
  size_t v14; // rax
  int v15; // r13d
  uint32 *j; // rax
  int v17; // ebx
  __int64 v18; // rax
  const char *v19; // r14
  int v20; // r12d
  size_t v21; // rax
  uint32 v22; // r14d
  int v23; // ebx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v24; // r13
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t v25; // ecx
  __int64 v26; // rax
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v27; // r13
  int v28; // edx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v29; // rdx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v30; // rax
  GCSDK::TJobTypeByMsg *v31; // rax
  int m_Size; // edx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *v33; // r15
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_cElements; // eax
  int v35; // edx
  int v36; // esi
  int m_nAllocationCount; // edx
  int m_nMinRehashedBucket; // ecx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMaxRehashedBucket; // r8d
  int v40; // esi
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v41; // rax
  GCSDK::MsgType_t v42; // edx
  int v43; // r14d
  uint32 *i; // rax
  int m_iNode; // r13d
  __int64 v46; // rdx
  int v47; // r12d
  int v48; // ebx
  int v49; // edx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *m_pMemory; // rax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNodeFreeListHead; // edi
  __int64 v52; // rcx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v53; // rax
  int v54; // esi
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v55; // rax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v56; // rcx
  __int64 v57; // rax
  const char *v58; // r12
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v59; // r14
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t v60; // eax
  __int64 v61; // rcx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v62; // rcx
  GCSDK::MsgType_t m_eCreationMsg; // esi
  __int64 m_iNextNode; // rcx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v65; // eax
  uint32 v67; // [rsp+8h] [rbp-38h]
  unsigned int v68; // [rsp+8h] [rbp-38h]
  int v69; // [rsp+Ch] [rbp-34h]
  int v70; // [rsp+Ch] [rbp-34h]

  if ( pJobType->m_eCreationMsg != 0 )
  {
    v31 = GCSDK::GMapJobTypesByMsg();
    m_Size = v31->m_vecHashBuckets.m_Size;
    v33 = v31;
    m_cElements = v31->m_cElements;
    if ( m_cElements >= m_Size )
    {
      v35 = 2 * m_Size;
      v36 = 16;
      if ( v35 > 15 )
        v36 = v35;
      CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::EnsureCapacity(
        v33,
        v36);
      m_cElements = v33->m_cElements;
    }
    m_nAllocationCount = v33->m_memNodes.m_nAllocationCount;
    if ( m_nAllocationCount <= m_cElements )
      CUtlMemory<CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Node_t,int>::Grow(
        &v33->m_memNodes,
        2 * m_nAllocationCount);
    m_nMinRehashedBucket = v33->m_nMinRehashedBucket;
    m_nMaxRehashedBucket = v33->m_nMaxRehashedBucket;
    v40 = m_nMinRehashedBucket;
    if ( m_nMinRehashedBucket < m_nMaxRehashedBucket )
    {
      v41 = &v33->m_vecHashBuckets.m_Memory.m_pMemory[m_nMinRehashedBucket];
      while ( v41->m_iNode == -1
           || ((1 << m_nMinRehashedBucket) & v33->m_bitsMigratedBuckets.m_pInt[m_nMinRehashedBucket >> 5]) != 0 )
      {
        ++m_nMinRehashedBucket;
        ++v41;
        v33->m_nMinRehashedBucket = m_nMinRehashedBucket;
        if ( m_nMinRehashedBucket == m_nMaxRehashedBucket )
          goto LABEL_78;
      }
      CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::RehashNodesInBucket(
        v33,
        m_nMinRehashedBucket);
      v40 = v33->m_nMinRehashedBucket + 1;
      v12 = v40 < v33->m_nMaxRehashedBucket;
      v33->m_nMinRehashedBucket = v40;
      if ( v12 )
        goto LABEL_45;
LABEL_78:
      v65 = v33->m_vecHashBuckets.m_Size;
      v33->m_nMaxRehashedBucket = -1;
      v33->m_nMinRehashedBucket = v65;
      CVarBitVecBase<int,32>::Resize(&v33->m_bitsMigratedBuckets, 0, 0);
      v40 = v33->m_nMinRehashedBucket;
    }
LABEL_45:
    v70 = v33->m_vecHashBuckets.m_Size >> 1;
    v42 = -2048144789 * (pJobType->m_eCreationMsg ^ HIWORD(pJobType->m_eCreationMsg));
    v68 = (-1028477387 * (v42 ^ (v42 >> 13))) ^ ((-1028477387 * (v42 ^ (v42 >> 13))) >> 16);
    v43 = v68 & (v70 - 1);
    if ( v43 >= v40 )
    {
      for ( i = v33->m_bitsMigratedBuckets.m_pInt; ((1 << v43) & i[v43 >> 5]) == 0; i = v33->m_bitsMigratedBuckets.m_pInt )
      {
        i[v43 >> 5] |= 1 << v43;
        m_iNode = v33->m_vecHashBuckets.m_Memory.m_pMemory[v43].m_iNode;
        if ( m_iNode != -1 )
        {
          while ( 1 )
          {
            v46 = &v33->m_memNodes.m_pMemory[m_iNode];
            v47 = *(v46 + 16);
            LODWORD(v46) = -2048144789 * (*v46 ^ HIWORD(*v46));
            v48 = (v33->m_vecHashBuckets.m_Size - 1)
                & ((-1028477387 * (v46 ^ (v46 >> 13)))
                 ^ ((-1028477387 * (v46 ^ (v46 >> 13))) >> 16));
            if ( v43 != v48 )
            {
              CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::UnlinkNodeFromBucket(
                v33,
                v43,
                m_iNode);
              CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
                v33,
                v48,
                m_iNode);
            }
            if ( v47 == -1 )
              break;
            m_iNode = v47;
          }
        }
        v70 >>= 1;
        v43 = v68 & (v70 - 1);
        if ( v43 < v33->m_nMinRehashedBucket )
          break;
      }
    }
    v49 = v33->m_cElements;
    if ( v49 != 0 )
    {
      v61 = v33->m_vecHashBuckets.m_Memory.m_pMemory[v68 & (v33->m_vecHashBuckets.m_Size - 1)].m_iNode;
      m_pMemory = v33->m_memNodes.m_pMemory;
      if ( v61 != -1 )
      {
        v62 = &m_pMemory[v61];
        m_eCreationMsg = pJobType->m_eCreationMsg;
        if ( m_eCreationMsg == v62->m_key )
        {
LABEL_76:
          v62->m_elem = pJobType;
          goto LABEL_2;
        }
        while ( 1 )
        {
          m_iNextNode = v62->m_iNextNode;
          if ( m_iNextNode == -1 )
            break;
          v62 = &m_pMemory[m_iNextNode];
          if ( m_eCreationMsg == v62->m_key )
            goto LABEL_76;
        }
      }
    }
    else
    {
      m_pMemory = v33->m_memNodes.m_pMemory;
    }
    if ( v49 == v33->m_nMaxElement )
    {
      v33->m_cElements = v49 + 1;
      v33->m_nMaxElement = v49 + 1;
      v52 = v49;
      v53 = &m_pMemory[v52];
    }
    else
    {
      m_iNodeFreeListHead = v33->m_iNodeFreeListHead;
      v52 = m_iNodeFreeListHead;
      v53 = &m_pMemory[v52];
      v54 = -3 - v53->m_iNextNode;
      v33->m_cElements = v49 + 1;
      v49 = m_iNodeFreeListHead;
      v33->m_iNodeFreeListHead = v54;
    }
    v53->m_iNextNode = -1;
    v55 = &v33->m_memNodes.m_pMemory[v52];
    if ( v55 != 0 )
    {
      v55->m_key = pJobType->m_eCreationMsg;
      v56 = &v33->m_memNodes.m_pMemory[v52];
    }
    else
    {
      v56 = 0;
    }
    if ( v56 != -8LL )
      v56->m_elem = pJobType;
    CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
      v33,
      v68 & (v33->m_vecHashBuckets.m_Size - 1),
      v49);
  }
LABEL_2:
  v1 = GCSDK::GMapJobTypesByName();
  v2 = v1->m_vecHashBuckets.m_Size;
  v3 = v1;
  v4 = v1->m_cElements;
  if ( v4 >= v2 )
  {
    v5 = 2 * v2;
    v6 = 16;
    if ( v5 > 15 )
      v6 = v5;
    CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::EnsureCapacity(
      v3,
      v6);
    v4 = v3->m_cElements;
  }
  v7 = v3->m_memNodes.m_nAllocationCount;
  if ( v7 <= v4 )
    CUtlMemory<CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t,int>::Grow(
      &v3->m_memNodes,
      2 * v7);
  v8 = v3->m_nMinRehashedBucket;
  v9 = v3->m_nMaxRehashedBucket;
  if ( v8 < v9 )
  {
    v10 = &v3->m_vecHashBuckets.m_Memory.m_pMemory[v8];
    while ( v10->m_iNode == -1 || ((1 << v8) & v3->m_bitsMigratedBuckets.m_pInt[v8 >> 5]) != 0 )
    {
      ++v8;
      ++v10;
      v3->m_nMinRehashedBucket = v8;
      if ( v8 == v9 )
        goto LABEL_69;
    }
    CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::RehashNodesInBucket(
      v3,
      v8);
    v11 = v3->m_nMinRehashedBucket + 1;
    v12 = v11 < v3->m_nMaxRehashedBucket;
    v3->m_nMinRehashedBucket = v11;
    if ( v12 )
      goto LABEL_14;
LABEL_69:
    v60 = v3->m_vecHashBuckets.m_Size;
    v3->m_nMaxRehashedBucket = -1;
    v3->m_nMinRehashedBucket = v60;
    CVarBitVecBase<int,32>::Resize(&v3->m_bitsMigratedBuckets, 0, 0);
  }
LABEL_14:
  m_pchName = pJobType->m_pchName;
  v14 = strlen(pJobType->m_pchName);
  v67 = MurmurHash3_32(m_pchName, v14, 0x417u, 0);
  v69 = v3->m_vecHashBuckets.m_Size >> 1;
  v15 = v67 & (v69 - 1);
  if ( v15 >= v3->m_nMinRehashedBucket )
  {
    for ( j = v3->m_bitsMigratedBuckets.m_pInt; ((1 << v15) & j[v15 >> 5]) == 0; j = v3->m_bitsMigratedBuckets.m_pInt )
    {
      j[v15 >> 5] |= 1 << v15;
      v17 = v3->m_vecHashBuckets.m_Memory.m_pMemory[v15].m_iNode;
      if ( v17 != -1 )
      {
        while ( 1 )
        {
          v18 = &v3->m_memNodes.m_pMemory[v17];
          v19 = *v18;
          v20 = *(v18 + 16);
          v21 = strlen(*v18);
          v22 = (v3->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v19, v21, 0x417u, 0);
          if ( v15 != v22 )
          {
            CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket(
              v3,
              v15,
              v17);
            CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::LinkNodeIntoBucket(
              v3,
              v22,
              v17);
          }
          if ( v20 == -1 )
            break;
          v17 = v20;
        }
      }
      v69 >>= 1;
      v15 = v67 & (v69 - 1);
      if ( v15 < v3->m_nMinRehashedBucket )
        break;
    }
  }
  v23 = v3->m_cElements;
  if ( v23 == 0 )
  {
    v24 = v3->m_memNodes.m_pMemory;
LABEL_26:
    if ( v23 == v3->m_nMaxElement )
    {
      v3->m_cElements = v23 + 1;
      v3->m_nMaxElement = v23 + 1;
      v26 = v23;
      v27 = &v24[v26];
    }
    else
    {
      v25 = v3->m_iNodeFreeListHead;
      v26 = v25;
      v27 = &v24[v26];
      v28 = -3 - v27->m_iNextNode;
      v3->m_cElements = v23 + 1;
      v23 = v25;
      v3->m_iNodeFreeListHead = v28;
    }
    v27->m_iNextNode = -1;
    v29 = &v3->m_memNodes.m_pMemory[v26];
    if ( v29 != 0 )
    {
      v29->m_key = pJobType->m_pchName;
      v30 = &v3->m_memNodes.m_pMemory[v26];
    }
    else
    {
      v30 = 0;
    }
    if ( v30 != -8LL )
      v30->m_elem = pJobType;
    CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::LinkNodeIntoBucket(
      v3,
      v67 & (v3->m_vecHashBuckets.m_Size - 1),
      v23);
    return;
  }
  v24 = v3->m_memNodes.m_pMemory;
  v57 = v3->m_vecHashBuckets.m_Memory.m_pMemory[v67 & (v3->m_vecHashBuckets.m_Size - 1)].m_iNode;
  if ( v57 == -1 )
    goto LABEL_26;
  v58 = pJobType->m_pchName;
  while ( 1 )
  {
    v59 = &v24[v57];
    if ( strcmp(v58, v59->m_key) == 0 )
      break;
    v57 = v59->m_iNextNode;
    if ( v57 == -1 )
      goto LABEL_26;
  }
  v59->m_elem = pJobType;
}


// GCSDK::CJobMgr::UnregisterJobByID  (line 2175, @0x0000000003226270, libserver.so)  // inlines: Find, FindInBucket, FreeNodeIndexToID, Get, IsValidIndex, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, MurmurHash3String, Remove, RemoveAt, RemoveNodeFromBucket, operator(), operator[]
// calls: GCSDK::GMapJobTypesByMsg, GCSDK::GMapJobTypesByName, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Find, strlen, MurmurHash3_32, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::UnlinkNodeFromBucket
bool __fastcall GCSDK::CJobMgr::UnregisterJobByID(GCSDK::CJobMgr *const this, GCSDK::MsgType_t unMsgID)
{
  GCSDK::TJobTypeByMsg *v3; // rax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *v4; // r13
  int m_Size; // esi
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r10
  GCSDK::MsgType_t v7; // eax
  int m_iNode; // r14d
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v9; // rdi
  __int64 v10; // rbx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v11; // rcx
  int m_iNextNode; // edx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // edi
  int i; // esi
  int v15; // ecx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v16; // r11
  const CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::KeyType_t *p_m_pchName; // r12
  int v18; // eax
  int v19; // r15d
  __int64 v20; // rax
  const char *v21; // r12
  size_t v22; // rax
  uint32 v23; // eax
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t *v24; // r10
  int v25; // esi
  __int64 v26; // r12
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t v27; // esi
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  bool v31; // zf
  bool result; // al
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v33; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v34; // rbx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v35; // r8
  int v36; // ecx
  unsigned int v37; // edi
  int v38; // esi
  __int64 v39; // rbx
  int v40; // edx
  int v41; // r9d
  int v42; // esi
  int v43; // ecx
  GCSDK::TJobTypeByName *v44; // [rsp+8h] [rbp-38h]

  v3 = GCSDK::GMapJobTypesByMsg();
  v4 = v3;
  if ( v3->m_cElements == 0 )
    return 0;
  m_Size = v3->m_vecHashBuckets.m_Size;
  m_pMemory = v3->m_vecHashBuckets.m_Memory.m_pMemory;
  v7 = (-1028477387 * ((-2048144789 * (unMsgID ^ HIWORD(unMsgID))) ^ ((-2048144789 * (unMsgID ^ HIWORD(unMsgID))) >> 13)))
     ^ ((-1028477387
       * ((-2048144789 * (unMsgID ^ HIWORD(unMsgID))) ^ ((-2048144789 * (unMsgID ^ HIWORD(unMsgID))) >> 13))) >> 16);
  m_iNode = m_pMemory[v7 & (m_Size - 1)].m_iNode;
  if ( m_iNode == -1 )
  {
LABEL_7:
    m_nMinRehashedBucket = v4->m_nMinRehashedBucket;
    for ( i = m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
    {
      v15 = v7 & (i - 1);
      if ( ((1 << (((53 * ((107 * (unMsgID ^ BYTE2(unMsgID))) ^ ((-2048144789 * (unMsgID ^ HIWORD(unMsgID))) >> 13)))
                  ^ ((-1028477387
                    * ((-2048144789 * (unMsgID ^ HIWORD(unMsgID))) ^ ((-2048144789 * (unMsgID ^ HIWORD(unMsgID))) >> 13))) >> 16))
                 & (i - 1)))
          & v4->m_bitsMigratedBuckets.m_pInt[v15 >> 5]) == 0 )
      {
        m_iNode = m_pMemory[v15].m_iNode;
        if ( m_iNode != -1 )
        {
          v16 = v4->m_memNodes.m_pMemory;
          v10 = m_iNode;
          v11 = &v16[v10];
          if ( v16[v10].m_key == unMsgID )
            goto LABEL_16;
          while ( 1 )
          {
            m_iNextNode = v11->m_iNextNode;
            if ( m_iNextNode == -1 )
              break;
            v10 = m_iNextNode;
            v11 = &v16[v10];
            if ( v16[v10].m_key == unMsgID )
              goto LABEL_15;
          }
        }
      }
    }
    return 0;
  }
  v9 = v4->m_memNodes.m_pMemory;
  v10 = m_iNode;
  v11 = &v9[v10];
  if ( v9[v10].m_key != unMsgID )
  {
    do
    {
      m_iNextNode = v11->m_iNextNode;
      if ( m_iNextNode == -1 )
        goto LABEL_7;
      v10 = m_iNextNode;
      v11 = &v9[v10];
    }
    while ( v9[v10].m_key != unMsgID );
LABEL_15:
    m_iNode = m_iNextNode;
  }
LABEL_16:
  p_m_pchName = &v11->m_elem->m_pchName;
  v44 = GCSDK::GMapJobTypesByName();
  v18 = CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Find(
          v44,
          p_m_pchName);
  v19 = v18;
  if ( v18 < 0 )
    goto LABEL_35;
  if ( v18 >= v44->m_nMaxElement )
    goto LABEL_35;
  v20 = &v44->m_memNodes.m_pMemory[v18];
  if ( *(v20 + 16) < -1 )
    goto LABEL_35;
  v21 = *v20;
  v22 = strlen(*v20);
  v23 = MurmurHash3_32(v21, v22, 0x417u, 0);
  v24 = v44->m_vecHashBuckets.m_Memory.m_pMemory;
  v25 = v23 & (v44->m_vecHashBuckets.m_Size - 1);
  v26 = v24[v25].m_iNode;
  if ( v26 != -1 )
  {
    if ( v19 == v26 )
    {
LABEL_57:
      v30 = v19;
      goto LABEL_33;
    }
    while ( 1 )
    {
      LODWORD(v26) = v44->m_memNodes.m_pMemory[v26].m_iNextNode;
      if ( v26 == -1 )
        break;
      if ( v19 == v26 )
        goto LABEL_57;
    }
  }
  v27 = v44->m_nMinRehashedBucket;
  v28 = v44->m_vecHashBuckets.m_Size >> 1;
  if ( v27 > v28 )
    goto LABEL_35;
  while ( 1 )
  {
    v29 = v23 & (v28 - 1);
    if ( ((1 << (v23 & (v28 - 1))) & v44->m_bitsMigratedBuckets.m_pInt[v29 >> 5]) == 0 )
    {
      v26 = v24[v29].m_iNode;
      if ( v26 != -1 )
        break;
    }
LABEL_26:
    v28 >>= 1;
    if ( v27 > v28 )
      goto LABEL_35;
  }
  while ( v19 != v26 )
  {
    LODWORD(v26) = v44->m_memNodes.m_pMemory[v26].m_iNextNode;
    if ( v26 == -1 )
      goto LABEL_26;
  }
  v30 = v19;
  v25 = v29;
LABEL_33:
  CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket(
    v44,
    v25,
    v30);
  v44->m_memNodes.m_pMemory[v26].m_iNextNode = -3 - v44->m_iNodeFreeListHead;
  v31 = v44->m_cElements-- == 1;
  v44->m_iNodeFreeListHead = v26;
  if ( v31 )
    v44->m_nMinRehashedBucket = v44->m_vecHashBuckets.m_Size;
LABEL_35:
  result = 1;
  if ( m_iNode >= 0 && v4->m_nMaxElement > m_iNode )
  {
    v33 = v4->m_memNodes.m_pMemory;
    v34 = &v33[v10];
    if ( v34->m_iNextNode >= -1 )
    {
      v35 = v4->m_vecHashBuckets.m_Memory.m_pMemory;
      v36 = v4->m_vecHashBuckets.m_Size;
      v37 = (-1028477387
           * ((-2048144789 * (v34->m_key ^ HIWORD(v34->m_key)))
            ^ ((-2048144789 * (v34->m_key ^ HIWORD(v34->m_key))) >> 13)))
          ^ ((-1028477387
            * ((-2048144789 * (v34->m_key ^ HIWORD(v34->m_key)))
             ^ ((-2048144789 * (v34->m_key ^ HIWORD(v34->m_key))) >> 13))) >> 16);
      v38 = v37 & (v4->m_vecHashBuckets.m_Size - 1);
      v39 = v35[v38].m_iNode;
      if ( v39 == -1 )
      {
LABEL_48:
        v41 = v4->m_nMinRehashedBucket;
        v42 = v36 >> 1;
        if ( v36 >> 1 >= v41 )
        {
          while ( 1 )
          {
            v43 = v37 & (v42 - 1);
            if ( ((1 << (v37 & (v42 - 1))) & v4->m_bitsMigratedBuckets.m_pInt[v43 >> 5]) == 0 )
            {
              v39 = v35[v43].m_iNode;
              if ( v39 != -1 )
                break;
            }
LABEL_50:
            v42 >>= 1;
            if ( v42 < v41 )
              return 1;
          }
          while ( v39 != m_iNode )
          {
            LODWORD(v39) = v33[v39].m_iNextNode;
            if ( v39 == -1 )
              goto LABEL_50;
          }
          v40 = m_iNode;
          v38 = v37 & (v42 - 1);
          goto LABEL_43;
        }
      }
      else
      {
        while ( v39 != m_iNode )
        {
          LODWORD(v39) = v33[v39].m_iNextNode;
          if ( v39 == -1 )
            goto LABEL_48;
        }
        v40 = m_iNode;
LABEL_43:
        CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::UnlinkNodeFromBucket(
          v4,
          v38,
          v40);
        v4->m_memNodes.m_pMemory[v39].m_iNextNode = -3 - v4->m_iNodeFreeListHead;
        v31 = v4->m_cElements-- == 1;
        v4->m_iNodeFreeListHead = v39;
        if ( v31 )
          v4->m_nMinRehashedBucket = v4->m_vecHashBuckets.m_Size;
      }
      return 1;
    }
  }
  return result;
}


// GCSDK::CJobMgr::UnregisterJobByName  (line 2187, @0x0000000003226660, libserver.so)  // inlines: Element, FreeNodeIndexToID, Get, IsValidIndex, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, MurmurHash3String, Remove, RemoveAt, RemoveNodeFromBucket, operator(), operator[]
// calls: GCSDK::GMapJobTypesByName, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Find, GCSDK::GMapJobTypesByMsg, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::Find, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::UnlinkNodeFromBucket, strlen, MurmurHash3_32, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket
bool __fastcall GCSDK::CJobMgr::UnregisterJobByName(GCSDK::CJobMgr *const this, const char *pszName)
{
  GCSDK::TJobTypeByName *v2; // r14
  int v3; // r12d
  bool result; // al
  __int64 v5; // r13
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::ElemType_t m_elem; // rbx
  GCSDK::TJobTypeByMsg *v7; // r15
  int v8; // eax
  int v9; // edx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *m_pMemory; // r8
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v11; // rax
  unsigned int v12; // eax
  int v13; // esi
  __int64 m_iNode; // rbx
  bool v15; // zf
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v16; // r13
  const char *m_key; // rbx
  size_t v18; // rax
  uint32 v19; // eax
  int m_Size; // edi
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t *v21; // r8
  int v22; // esi
  __int64 v23; // rbx
  int v24; // r9d
  int v25; // esi
  int v26; // ecx
  int v27; // edx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // edi
  int v29; // esi
  int v30; // ecx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v31; // [rsp+0h] [rbp-40h]
  const char *pszNamea; // [rsp+8h] [rbp-38h] BYREF

  pszNamea = pszName;
  v2 = GCSDK::GMapJobTypesByName();
  v3 = CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Find(
         v2,
         &pszNamea);
  result = 0;
  if ( v3 == -1 )
    return result;
  v5 = v3;
  m_elem = v2->m_memNodes.m_pMemory[v5].m_elem;
  v7 = GCSDK::GMapJobTypesByMsg();
  v8 = CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Find(
         v7,
         &m_elem->m_eCreationMsg);
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_11;
  if ( v8 >= v7->m_nMaxElement )
    goto LABEL_11;
  m_pMemory = v7->m_memNodes.m_pMemory;
  v11 = &m_pMemory[v8];
  if ( v11->m_iNextNode < -1 )
    goto LABEL_11;
  v12 = (-1028477387
       * ((-2048144789 * (v11->m_key ^ HIWORD(v11->m_key))) ^ ((-2048144789 * (v11->m_key ^ HIWORD(v11->m_key))) >> 13)))
      ^ ((-1028477387
        * ((-2048144789 * (v11->m_key ^ HIWORD(v11->m_key))) ^ ((-2048144789 * (v11->m_key ^ HIWORD(v11->m_key))) >> 13))) >> 16);
  v13 = v12 & (v7->m_vecHashBuckets.m_Size - 1);
  v31 = v7->m_vecHashBuckets.m_Memory.m_pMemory;
  m_iNode = v31[v13].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( v9 != m_iNode )
    {
      LODWORD(m_iNode) = m_pMemory[m_iNode].m_iNextNode;
      if ( m_iNode == -1 )
        goto LABEL_33;
    }
    goto LABEL_9;
  }
LABEL_33:
  m_nMinRehashedBucket = v7->m_nMinRehashedBucket;
  v29 = v7->m_vecHashBuckets.m_Size >> 1;
  if ( v29 >= m_nMinRehashedBucket )
  {
    while ( 1 )
    {
      v30 = v12 & (v29 - 1);
      if ( ((1 << (v12 & (v29 - 1))) & v7->m_bitsMigratedBuckets.m_pInt[v30 >> 5]) == 0 )
      {
        m_iNode = v31[v30].m_iNode;
        if ( m_iNode != -1 )
          break;
      }
LABEL_35:
      v29 >>= 1;
      if ( v29 < m_nMinRehashedBucket )
        goto LABEL_11;
    }
    while ( v9 != m_iNode )
    {
      LODWORD(m_iNode) = m_pMemory[m_iNode].m_iNextNode;
      if ( m_iNode == -1 )
        goto LABEL_35;
    }
    v13 = v12 & (v29 - 1);
LABEL_9:
    CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::UnlinkNodeFromBucket(
      v7,
      v13,
      v9);
    v7->m_memNodes.m_pMemory[m_iNode].m_iNextNode = -3 - v7->m_iNodeFreeListHead;
    v15 = v7->m_cElements-- == 1;
    v7->m_iNodeFreeListHead = m_iNode;
    if ( v15 )
      v7->m_nMinRehashedBucket = v7->m_vecHashBuckets.m_Size;
  }
LABEL_11:
  if ( v3 < 0 )
    return 1;
  if ( v3 >= v2->m_nMaxElement )
    return 1;
  v16 = &v2->m_memNodes.m_pMemory[v5];
  if ( v16->m_iNextNode < -1 )
    return 1;
  m_key = v16->m_key;
  v18 = strlen(v16->m_key);
  v19 = MurmurHash3_32(m_key, v18, 0x417u, 0);
  m_Size = v2->m_vecHashBuckets.m_Size;
  v21 = v2->m_vecHashBuckets.m_Memory.m_pMemory;
  v22 = v19 & (v2->m_vecHashBuckets.m_Size - 1);
  v23 = v21[v22].m_iNode;
  if ( v23 != -1 )
  {
    if ( v3 == v23 )
    {
LABEL_32:
      v27 = v3;
      goto LABEL_28;
    }
    while ( 1 )
    {
      LODWORD(v23) = v2->m_memNodes.m_pMemory[v23].m_iNextNode;
      if ( v23 == -1 )
        break;
      if ( v3 == v23 )
        goto LABEL_32;
    }
  }
  v24 = v2->m_nMinRehashedBucket;
  v25 = m_Size >> 1;
  if ( m_Size >> 1 < v24 )
    return 1;
  while ( 1 )
  {
    v26 = v19 & (v25 - 1);
    if ( ((1 << (v19 & (v25 - 1))) & v2->m_bitsMigratedBuckets.m_pInt[v26 >> 5]) == 0 )
    {
      v23 = v21[v26].m_iNode;
      if ( v23 != -1 )
        break;
    }
LABEL_21:
    v25 >>= 1;
    if ( v25 < v24 )
      return 1;
  }
  while ( v3 != v23 )
  {
    LODWORD(v23) = v2->m_memNodes.m_pMemory[v23].m_iNextNode;
    if ( v23 == -1 )
      goto LABEL_21;
  }
  v27 = v3;
  v22 = v19 & (v25 - 1);
LABEL_28:
  CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket(
    v2,
    v22,
    v27);
  v2->m_memNodes.m_pMemory[v23].m_iNextNode = -3 - v2->m_iNodeFreeListHead;
  v15 = v2->m_cElements-- == 1;
  v2->m_iNodeFreeListHead = v23;
  if ( v15 )
    v2->m_nMinRehashedBucket = v2->m_vecHashBuckets.m_Size;
  return 1;
}


// GCSDK::CJobMgr::BIsJobCurrentlyRegistered  (line 2213, @0x0000000003224e90, libserver.so)  // inlines: Find, FindInBucket, Get, HasElement, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, operator(), operator[]
// calls: GCSDK::GMapJobTypesByMsg
bool __fastcall GCSDK::CJobMgr::BIsJobCurrentlyRegistered(GCSDK::MsgType_t eMsgID)
{
  GCSDK::TJobTypeByMsg *v2; // rax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r8
  GCSDK::MsgType_t v4; // edi
  __int64 m_iNode; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v6; // rcx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v7; // rdx
  __int64 m_iNextNode; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int i; // esi
  int v11; // ecx
  __int64 v12; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v13; // rcx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v14; // rdx
  __int64 v15; // rdx

  v2 = GCSDK::GMapJobTypesByMsg();
  if ( v2->m_cElements != 0 )
  {
    m_pMemory = v2->m_vecHashBuckets.m_Memory.m_pMemory;
    v4 = (-1028477387 * ((-2048144789 * (eMsgID ^ HIWORD(eMsgID))) ^ ((-2048144789 * (eMsgID ^ HIWORD(eMsgID))) >> 13)))
       ^ ((-1028477387 * ((-2048144789 * (eMsgID ^ HIWORD(eMsgID))) ^ ((-2048144789 * (eMsgID ^ HIWORD(eMsgID))) >> 13))) >> 16);
    m_iNode = m_pMemory[v4 & (v2->m_vecHashBuckets.m_Size - 1)].m_iNode;
    if ( m_iNode != -1 )
    {
      v6 = v2->m_memNodes.m_pMemory;
      v7 = &v6[m_iNode];
      if ( v7->m_key == eMsgID )
        return 1;
      while ( 1 )
      {
        m_iNextNode = v7->m_iNextNode;
        if ( m_iNextNode == -1 )
          break;
        v7 = &v6[m_iNextNode];
        if ( v7->m_key == eMsgID )
          return 1;
      }
    }
    m_nMinRehashedBucket = v2->m_nMinRehashedBucket;
    for ( i = v2->m_vecHashBuckets.m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
    {
      v11 = v4 & (i - 1);
      if ( ((1 << (((53 * ((107 * (eMsgID ^ BYTE2(eMsgID))) ^ ((-2048144789 * (eMsgID ^ HIWORD(eMsgID))) >> 13)))
                  ^ ((-1028477387
                    * ((-2048144789 * (eMsgID ^ HIWORD(eMsgID))) ^ ((-2048144789 * (eMsgID ^ HIWORD(eMsgID))) >> 13))) >> 16))
                 & (i - 1)))
          & v2->m_bitsMigratedBuckets.m_pInt[v11 >> 5]) == 0 )
      {
        v12 = m_pMemory[v11].m_iNode;
        if ( v12 != -1 )
        {
          v13 = v2->m_memNodes.m_pMemory;
          v14 = &v13[v12];
          if ( v14->m_key == eMsgID )
            return 1;
          while ( 1 )
          {
            v15 = v14->m_iNextNode;
            if ( v15 == -1 )
              break;
            v14 = &v13[v15];
            if ( v14->m_key == eMsgID )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}


// GCSDK::CJobMgr::BIsJobCurrentlyRegistered  (line 2218, @0x00000000032254c0, libserver.so)  // inlines: HasElement
// calls: GCSDK::GMapJobTypesByName, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Find
bool __fastcall GCSDK::CJobMgr::BIsJobCurrentlyRegistered(const char *pszName)
{
  GCSDK::TJobTypeByName *v1; // rax
  const char *pszNamea; // [rsp+8h] [rbp-8h] BYREF

  pszNamea = pszName;
  v1 = GCSDK::GMapJobTypesByName();
  return CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Find(
           v1,
           &pszNamea) != -1;
}


// GCSDK::CJobMgr::GetJobInfoForMsg  (line 2227, @0x00000000032254f0, libserver.so)  // inlines: BIsValidSystemMsg, Element, Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, operator(), operator[]
// calls: GCSDK::GMapJobTypesByMsg, GCSDK::CMessageList::GetMessage, GCSDK::GMapJobTypesByName, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Find
// callers: GCSDK::CJobMgr::BLaunchJobFromNetworkMsg
const GCSDK::JobType_t *__fastcall GCSDK::CJobMgr::GetJobInfoForMsg(
        const GCSDK::CJobMgr *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::TJobTypeByMsg *v3; // rbx
  unsigned int v4; // esi
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r8
  unsigned int v6; // eax
  __int64 m_iNode; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v8; // rcx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v9; // rdx
  __int64 m_iNextNode; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int i; // edi
  int v13; // ecx
  __int64 v14; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v15; // rcx
  __int64 v16; // rdx
  GCSDK::MsgType_t v18; // eax
  GCSDK::TJobTypeByName *v19; // rbx
  int v20; // eax
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::KeyType_t key; // [rsp+8h] [rbp-18h] BYREF

  if ( pNetPacket != 0 )
  {
    if ( (*(pNetPacket->_vptr_CRefCount + 15))(pNetPacket) != 0
      && (v18 = (*(pNetPacket->_vptr_CRefCount + 7))(pNetPacket),
          GCSDK::CMessageList::GetMessage(&GCSDK::g_theMessageList, v18, 0, 2)) )
    {
      v19 = GCSDK::GMapJobTypesByName();
      key = (*(pNetPacket->_vptr_CRefCount + 16))(pNetPacket);
      v20 = CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Find(
              v19,
              &key);
      if ( v20 != -1 )
        return v19->m_memNodes.m_pMemory[v20].m_elem;
    }
    else
    {
      v3 = GCSDK::GMapJobTypesByMsg();
      v4 = (*(pNetPacket->_vptr_CRefCount + 7))(pNetPacket);
      if ( v3->m_cElements != 0 )
      {
        m_pMemory = v3->m_vecHashBuckets.m_Memory.m_pMemory;
        v6 = (-1028477387 * ((-2048144789 * (v4 ^ HIWORD(v4))) ^ ((-2048144789 * (v4 ^ HIWORD(v4))) >> 13)))
           ^ ((-1028477387 * ((-2048144789 * (v4 ^ HIWORD(v4))) ^ ((-2048144789 * (v4 ^ HIWORD(v4))) >> 13))) >> 16);
        m_iNode = m_pMemory[v6 & (v3->m_vecHashBuckets.m_Size - 1)].m_iNode;
        if ( m_iNode != -1 )
        {
          v8 = v3->m_memNodes.m_pMemory;
          v9 = &v8[m_iNode];
          if ( v4 == v9->m_key )
            return v9->m_elem;
          while ( 1 )
          {
            m_iNextNode = v9->m_iNextNode;
            if ( m_iNextNode == -1 )
              break;
            v9 = &v8[m_iNextNode];
            if ( v4 == v9->m_key )
              return v9->m_elem;
          }
        }
        m_nMinRehashedBucket = v3->m_nMinRehashedBucket;
        for ( i = v3->m_vecHashBuckets.m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
        {
          v13 = v6 & (i - 1);
          if ( ((1 << (((53 * ((107 * (v4 ^ BYTE2(v4))) ^ ((-2048144789 * (v4 ^ HIWORD(v4))) >> 13)))
                      ^ ((-1028477387 * ((-2048144789 * (v4 ^ HIWORD(v4))) ^ ((-2048144789 * (v4 ^ HIWORD(v4))) >> 13))) >> 16))
                     & (i - 1)))
              & v3->m_bitsMigratedBuckets.m_pInt[v13 >> 5]) == 0 )
          {
            v14 = m_pMemory[v13].m_iNode;
            if ( v14 != -1 )
            {
              v15 = v3->m_memNodes.m_pMemory;
              v9 = &v15[v14];
              if ( v4 == v9->m_key )
                return v9->m_elem;
              while ( 1 )
              {
                v16 = v9->m_iNextNode;
                if ( v16 == -1 )
                  break;
                v9 = &v15[v16];
                if ( v4 == v9->m_key )
                  return v9->m_elem;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// GCSDK::CJobMgr::BLaunchJobFromNetworkMsg  (line 2262, @0x00000000032256b0, libserver.so)
// calls: GCSDK::CJobMgr::GetJobInfoForMsg, CSteamID::Render, GCSDK::CGCEmitGroup::Internal_Warning, GCSDK::CGCEmitGroup::Internal_Msg, GCSDK::CJob::StartJobFromNetworkMsg
// callers: GCSDK::CJobMgr::BRouteMsgToJob
// strings: "Encountered message for job %s (message ID %d) sent by %s called within an invalid contex
// globals: GCSDK::g_EGJobMsgContext
bool __fastcall GCSDK::CJobMgr::BLaunchJobFromNetworkMsg(
        GCSDK::CJobMgr *const this,
        void *pParent,
        GCSDK::IMsgNetPacket *pNetPacket,
        GCSDK::EGCMsgContext nCreateContext)
{
  const GCSDK::JobType_t *JobInfoForMsg; // rax
  const GCSDK::JobType_t *v8; // rbx
  int (**vptr_CRefCount)(...); // rax
  const char *v10; // rax
  const char *v12; // rax
  GCSDK::CJob *v13; // rax
  CSteamID v14; // [rsp+0h] [rbp-30h] BYREF

  JobInfoForMsg = GCSDK::CJobMgr::GetJobInfoForMsg(this, pNetPacket);
  v8 = JobInfoForMsg;
  if ( JobInfoForMsg == 0 )
    return 0;
  if ( (nCreateContext & JobInfoForMsg->m_nValidContexts) == 0 )
  {
    vptr_CRefCount = pNetPacket->_vptr_CRefCount;
    if ( nCreateContext != GCSDK::EGCMsgContext::k_eGCMsgContext_Client )
    {
      v14.m_steamid.m_comp = (vptr_CRefCount[11])(pNetPacket);
      v10 = CSteamID::Render(&v14);
      GCSDK::CGCEmitGroup::Internal_Warning(
        &GCSDK::g_EGJobMsgContext,
        "Encountered message for job %s (message ID %d) sent by %s called within an invalid context of %d. Dropping the message.\n",
        v8->m_pchName,
        v8->m_eCreationMsg,
        v10,
        nCreateContext);
      return 0;
    }
    v14.m_steamid.m_comp = (vptr_CRefCount[11])(pNetPacket);
    v12 = CSteamID::Render(&v14);
    GCSDK::CGCEmitGroup::Internal_Msg(
      &GCSDK::g_EGJobMsgContext,
      "Encountered message for job %s (message ID %d) sent by %s called within an invalid context of %d. Dropping the message.\n",
      v8->m_pchName,
      v8->m_eCreationMsg,
      v12,
      1);
    return 0;
  }
  v13 = JobInfoForMsg->m_pJobFactory(pParent);
  if ( v13 == 0 )
    return 0;
  GCSDK::CJob::StartJobFromNetworkMsg(v13, pNetPacket, nCreateContext & v8->m_nValidContexts);
  return 1;
}


// GCSDK::CJobMgr::ProfileSortFunc  (line 2299, @0x0000000003224400, libserver.so)  // inlines: Element
// calls: V_stricmp_fast
int __fastcall GCSDK::CJobMgr::ProfileSortFunc(void *pCtx, const int *lhs, const int *rhs)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *pCtx == 1 )
  {
    v5 = *(*(*(pCtx + 1) + 48LL) + 240LL * *rhs + 72) - *(*(*(pCtx + 1) + 48LL) + 240LL * *lhs + 72);
  }
  else
  {
    v3 = *(*(pCtx + 1) + 48LL);
    v4 = *rhs;
    if ( *pCtx != 2 )
      return V_stricmp_fast(v3 + 240LL * *lhs + 8, v3 + 240 * v4 + 8);
    v5 = *(v3 + 240 * v4 + 176) - *(v3 + 240LL * *lhs + 176);
  }
  if ( v5 < 0 )
    return -1;
  else
    return v5 != 0;
}


// GCSDK::CJobMgr::ProfileJobs  (line 2329, @0x0000000003225e90, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GetMicroseconds64, GrowMemory, IsValidIndex, Plat_TickDiffMicroSec, Purge, RemoveAll, memset, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, GCSDK::CGCEmitGroup::Internal_Msg, CUtlMemory<int, int>::CUtlMemory, V_qsort_s, Plat_GetCPUFrequency, CUtlMemory<int, int>::Purge, CUtlMemory<int, int>::Grow, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "%44s  --- completed jobs (usec)----------------------------------  ------ lock counts----, "%44s        count   averuntime   maxruntime  aveduration #yielded  attempted waited   fai, "%44s %12lld %12lld %12lld %12lld %8lld %8lld %8lld %8lld %8lld %8lld %8lld %8lld %8lld %8
// globals: GCSDK::CJobMgr::ProfileSortFunc(void *,int const*,int const*)
void __fastcall GCSDK::CJobMgr::ProfileJobs(
        GCSDK::CJobMgr *const this,
        GCSDK::EJobProfileAction ejobProfileAction,
        GCSDK::EJobProfileSortOrder iSortOrder)
{
  char v6; // al
  int v7; // eax
  int v8; // edx
  int v9; // edx
  __int64 m_Size; // r12
  __int64 v11; // rbx
  int v12; // edx
  int v13; // edx
  int *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r13
  int i; // r12d
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r15
  unsigned __int64 CPUFrequency; // rax
  unsigned __int64 v23; // rt2
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // [rsp+68h] [rbp-68h]
  GCSDK::JobProfileStats_t jobprofilestats; // [rsp+70h] [rbp-60h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecSort; // [rsp+80h] [rbp-50h] BYREF

  switch ( ejobProfileAction )
  {
    case GCSDK::EJobProfileAction::k_EJobProfileAction_Start:
      v6 = *(this + 844);
      *(this + 844) = 1;
      if ( v6 != 0 )
        return;
LABEL_7:
      v7 = *(this + 214);
      *(this + 231) = 0;
      *(this + 232) = 0;
      *(this + 230) = -1;
      *(this + 233) = v7;
      *(this + 234) = -1;
      CVarBitVecBase<int,32>::Resize((this + 880), 0, 0);
      memset(*(this + 108), 255, 4LL * *(this + 214));
      if ( ejobProfileAction != GCSDK::EJobProfileAction::k_EJobProfileAction_Dump )
        return;
      goto LABEL_8;
    case GCSDK::EJobProfileAction::k_EJobProfileAction_Stop:
      *(this + 844) = 0;
      return;
    case GCSDK::EJobProfileAction::k_EJobProfileAction_Clear:
      goto LABEL_7;
    default:
      break;
  }
  if ( ejobProfileAction != GCSDK::EJobProfileAction::k_EJobProfileAction_Dump )
    return;
LABEL_8:
  GCSDK::CGCEmitGroup::Internal_Msg(
    &GCSDK::SPEW_CONSOLE,
    "%44s  --- completed jobs (usec)----------------------------------  ------ lock counts-------------------------------"
    "---  ------ failures -----------\n",
    " ");
  GCSDK::CGCEmitGroup::Internal_Msg(
    &GCSDK::SPEW_CONSOLE,
    "%44s        count   averuntime   maxruntime  aveduration #yielded  attempted waited   failed longheld longwait wait-"
    "t/o  t/o-msg jobfailed longslice\n",
    "name");
  v8 = *(this + 231);
  jobprofilestats.pmapStatsBucket = (this + 856);
  jobprofilestats.m_iJobProfileSort = iSortOrder;
  vecSort.m_Size = 0;
  CUtlMemory<int,int>::CUtlMemory(&vecSort.m_Memory, 0, v8);
  v9 = *(this + 232);
  LODWORD(m_Size) = 0;
  if ( v9 > 0 )
  {
    m_Size = vecSort.m_Size;
    v11 = 0;
    do
    {
      if ( v11 < v9 && *(*(this + 113) + 240 * v11 + 232) >= -1 )
      {
        if ( vecSort.m_Memory.m_nAllocationCount == m_Size )
        {
          CUtlMemory<int,int>::Grow(&vecSort.m_Memory, 1);
          v12 = vecSort.m_Size;
        }
        else
        {
          v12 = m_Size;
        }
        v13 = v12 + 1;
        vecSort.m_Size = v13;
        v14 = &vecSort.m_Memory.m_pMemory[m_Size];
        if ( v14 != 0 )
        {
          *v14 = v11;
          m_Size = vecSort.m_Size;
        }
        else
        {
          m_Size = v13;
        }
        v9 = *(this + 232);
      }
      ++v11;
    }
    while ( v9 > v11 );
  }
  V_qsort_s(vecSort.m_Memory.m_pMemory, m_Size, 4, GCSDK::CJobMgr::ProfileSortFunc, &jobprofilestats);
  v17 = 0;
  for ( i = 0; vecSort.m_Size > i; ++v17 )
  {
    while ( 1 )
    {
      v19 = *(this + 113) + 240LL * vecSort.m_Memory.m_pMemory[v17];
      v20 = *(v19 + 72);
      if ( v20 != 0 )
        break;
      ++i;
      ++v17;
      if ( vecSort.m_Size <= i )
        goto LABEL_23;
    }
    v21 = *(v19 + 176) / v20;
    CPUFrequency = Plat_GetCPUFrequency(v15, v16, *(v19 + 176) % v20);
    v23 = 1000000 * (v21 % CPUFrequency) % CPUFrequency;
    v24 = 1000000 * (v21 / CPUFrequency) + 1000000 * (v21 % CPUFrequency) / CPUFrequency;
    v25 = *(v19 + 80);
    v29 = v24;
    v28 = Plat_GetCPUFrequency(v26, v27, v23);
    GCSDK::CGCEmitGroup::Internal_Msg(
      &GCSDK::SPEW_CONSOLE,
      "%44s %12lld %12lld %12lld %12lld %8lld %8lld %8lld %8lld %8lld %8lld %8lld %8lld %8lld %8lld\n",
      (v19 + 8),
      *(v19 + 72),
      v29,
      1000000 * (v25 / v28) + 1000000 * (v25 % v28) / v28,
      *(v19 + 152) / *(v19 + 72),
      *(v19 + 160),
      *(v19 + 104),
      *(v19 + 112),
      *(v19 + 120),
      *(v19 + 128),
      *(v19 + 136),
      *(v19 + 144),
      *(v19 + 88),
      *(v19 + 168),
      *(v19 + 96));
    ++i;
  }
LABEL_23:
  vecSort.m_Size = 0;
  if ( (vecSort.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&vecSort.m_Memory);
    if ( (vecSort.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vecSort.m_Memory);
  }
}


// GCSDK::CJobMgr::DumpOrphanedMessages  (line 2410, @0x0000000003224fa0, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: GCSDK::CGCEmitGroup::Internal_Msg, GCSDK::PchMsgNameFromEMsg
// strings: "%40s %10s\n", "---------------------------------------- ----------\n", "%40s %10d\n"
void __fastcall GCSDK::CJobMgr::DumpOrphanedMessages(const GCSDK::CJobMgr *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  GCSDK::MsgType_t *v4; // rax
  GCSDK::MsgType_t v5; // r15d
  const char *v6; // rax

  v2 = 0;
  v3 = 0;
  GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "%40s %10s\n", "Message", "Count");
  GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "---------------------------------------- ----------\n");
  if ( *(this + 254) > 0 )
  {
    do
    {
      v4 = (*(this + 124) + v2);
      if ( v4[2] >= -1 )
      {
        v5 = v4[1];
        v6 = GCSDK::PchMsgNameFromEMsg(*v4);
        GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "%40s %10d\n", v6, v5);
      }
      ++v3;
      v2 += 12;
    }
    while ( *(this + 254) > v3 );
  }
  GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "---------------------------------------- ----------\n");
}


// GCSDK::CJobMgr::ClearOrphanedMessages  (line 2421, @0x0000000003225a00, libserver.so)  // inlines: RemoveAll, memset
// calls: CVarBitVecBase<int, 32>::Resize, memset
void __fastcall GCSDK::CJobMgr::ClearOrphanedMessages(GCSDK::CJobMgr *const this)
{
  CVarBitVecBase<int,32> *v2; // rdi
  int m_numBits; // eax

  v2 = (this + 968);
  v2[1].m_FixedStorage[1] = 0;
  m_numBits = v2[-1].m_numBits;
  v2[2].m_numBits = 0;
  v2[1].m_FixedStorage[0] = -1;
  LODWORD(v2[2].m_pInt) = -1;
  v2[2].m_numInts = m_numBits;
  CVarBitVecBase<int,32>::Resize(v2, 0, 0);
  memset(*(this + 119), 255, 4LL * *(this + 236));
}


// GCSDK::CJobMgr::DumpJobs  (line 2431, @0x0000000003225300, libserver.so)  // inlines: IsValidIndex, _V_strcmp, operator[]
// calls: GCSDK::CJob::GetName, strcmp, GCSDK::CJobMgr::DumpJob, GCSDK::EGInternal_EmitInfo
// strings: "Total job count: %d\n"
void __fastcall GCSDK::CJobMgr::DumpJobs(
        const GCSDK::CJobMgr *const this,
        const char *pszJobName,
        int nMax,
        int nPrintLocksMax)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  const char *Name; // rax

  v7 = 0;
  if ( *(this + 18) > 0 )
  {
    while ( 1 )
    {
      v8 = *(this + 6) + 24 * v7;
      if ( *(v8 + 16) >= -1 )
      {
        if ( nMax <= 0 )
          goto LABEL_9;
        --nMax;
        if ( pszJobName == 0 )
          goto LABEL_7;
        Name = GCSDK::CJob::GetName(*(v8 + 8));
        if ( strcmp(pszJobName, Name) == 0 )
          break;
      }
LABEL_8:
      if ( ++v7 >= *(this + 18) )
        goto LABEL_9;
    }
    v8 = *(this + 6) + 24 * v7;
LABEL_7:
    GCSDK::CJobMgr::DumpJob(this, *v8, nPrintLocksMax);
    goto LABEL_8;
  }
LABEL_9:
  GCSDK::EGInternal_EmitInfo(&GCSDK::SPEW_CONSOLE, 1, 1, "Total job count: %d\n", *(this + 17));
}


// GCSDK::CJobMgr::DebugJob  (line 2451, @0x0000000003225070, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Job debugging disabled\n"
void __fastcall GCSDK::CJobMgr::DebugJob(int iJob)
{
  if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 1) != 0 )
    LoggingSystem_Log(LOG_CONSOLE, 1, "Job debugging disabled\n");
}


