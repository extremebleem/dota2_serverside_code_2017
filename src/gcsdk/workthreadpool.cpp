
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_workthreadpool.cpp  (line 0, @0x0000000001a6e7e0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_workthreadpool_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CWorkThread::CWorkThread  (line 23, @0x000000000323fb30, libserver.so)
// calls: CThread::CThread(void)
void __fastcall GCSDK::CWorkThread::CWorkThread(GCSDK::CWorkThread *const this, GCSDK::CWorkThreadPool *pThreadPool)
{
  CThread::CThread(this);
  *(this + 49) = pThreadPool;
  *(this + 400) = 0;
  *this = off_47D0C70;
  *(this + 401) = 0;
}


// GCSDK::CWorkThread::CWorkThread  (line 30, @0x000000000323fb70, libserver.so)
// calls: CThread::CThread(void), CThread::SetName(char const*), CThread::~CThread(), _Unwind_Resume
void __fastcall GCSDK::CWorkThread::CWorkThread(
        GCSDK::CWorkThread *const this,
        GCSDK::CWorkThreadPool *pThreadPool,
        const char *pszName)
{
  CThread::CThread(this);
  *(this + 400) = 0;
  *this = off_47D0C70;
  *(this + 49) = pThreadPool;
  *(this + 401) = 0;
  CThread::SetName(this, pszName);
}


// GCSDK::CWorkThreadPool::SetNeverSetEventOnAdd  (line 41, @0x000000000323fbe0, libserver.so)
// calls: CThreadEvent::Set(void)
void __fastcall GCSDK::CWorkThreadPool::SetNeverSetEventOnAdd(GCSDK::CWorkThreadPool *const this, bool bNeverSet)
{
  char v2; // al

  v2 = *(this + 420);
  *(this + 420) = bNeverSet;
  if ( v2 != 0 && *(this + 420) == 0 )
    CThreadEvent::Set((this + 288));
}


// GCSDK::CWorkThread::Run  (line 57, @0x0000000003241280, libserver.so)  // inlines: Add, BNeverSetEventOnAdd, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, End, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, HasTimedOut, InTargetThread, IsEnabled, PLAT_CPU_TIME, Release, Sample, Start, ThreadInterlockedDecrement, ThreadInterlockedIncrement, operator++, operator--, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CWorkThreadPool::AddWorkItem, GCSDK::CWorkThreadPool::GetNextWorkItemToProcess, ThreadSleep, ThreadGetCurrentId, CThreadSyncObject::Wait(uint), CThreadEvent::Set(void), GCSDK::CJobTime::CServerMicroSecsPassed, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfNode::ExitScope(void), _Unwind_Resume, std::terminate(void) (13 total)
// strings: "CWorkThread -- Sleep", "Sleeping"
int __fastcall GCSDK::CWorkThread::Run(GCSDK::CWorkThread *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  uint64 v4; // rdx
  __int64 v5; // rsi
  GCSDK::CWorkItem *NextWorkItemToProcess; // rax
  GCSDK::CWorkItem *v7; // r15
  unsigned __int64 v8; // r13
  char v9; // al
  char v10; // cl
  unsigned __int64 v11; // rax
  int m_enabled; // r13d
  bool v13; // r15
  unsigned __int64 v14; // r15
  ThreadId_t v15; // r13
  uint64 v16; // rcx
  int v17; // eax
  bool v18; // r13
  unsigned __int64 v19; // r13
  ThreadId_t v20; // r15
  uint64 v21; // rcx
  __int64 v22; // rax
  ThreadId_t m_TargetThreadId; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v27; // rax
  CVProfNode *m_pParent; // rax
  unsigned __int64 v29; // r15
  uint64 v30; // rcx
  CVProfNode *SubNode; // rax
  CVProfile::CBudgetGroup *v32; // rax
  CVProfNode *v33; // rax
  CVProfNode *v34; // rdx
  unsigned __int64 v35; // [rsp+20h] [rbp-40h]
  int nIterations; // [rsp+28h] [rbp-38h]
  ThreadId_t nIterationsa; // [rsp+28h] [rbp-38h]

  _InterlockedAdd((*(this + 49) + 280LL), 1u);
  (*(*this + 72LL))(this);
  v3 = *(this + 49);
LABEL_2:
  if ( *(this + 400) != 0 )
    goto LABEL_32;
  do
  {
    _InterlockedAdd((v3 + 416), 1u);
    nIterations = 0;
LABEL_4:
    if ( *(v3 + 420) != 0 )
    {
LABEL_5:
      if ( nIterations > 3 )
        goto LABEL_26;
      goto LABEL_10;
    }
    while ( nIterations == 0 )
    {
LABEL_10:
      while ( 1 )
      {
        NextWorkItemToProcess = GCSDK::CWorkThreadPool::GetNextWorkItemToProcess(v3);
        v7 = NextWorkItemToProcess;
        if ( NextWorkItemToProcess == 0 )
          break;
        if ( NextWorkItemToProcess->m_jobtimeTimeout.m_lTime != 0
          && GCSDK::CJobTime::CServerMicroSecsPassed(&NextWorkItemToProcess->m_jobtimeTimeout) > 0 )
        {
          v7->m_bCanceled = 1;
        }
        else
        {
          v7->m_bCanceled = 0;
          v7->m_bRunning = 1;
          v8 = __rdtsc();
          v9 = (*(v7->_vptr_CRefCount + 5))(v7, this);
          v7->m_bRunning = 0;
          v10 = v9;
          v11 = __rdtsc();
          v7->m_CycleCount.m_Int64 = (v11 | (HIDWORD(v11) << 32)) - v8;
          if ( v10 != 0 )
          {
            ++*(v3 + 440);
          }
          else if ( v7->m_bResubmit )
          {
            ++*(v3 + 448);
          }
          else
          {
            ++*(v3 + 444);
          }
        }
        if ( v7->m_bResubmit )
        {
          v7->m_bResubmit = 0;
          v7->m_bCanceled = 0;
          GCSDK::CWorkThreadPool::AddWorkItem(v3, v7);
          if ( _InterlockedSub(&v7->m_cRef, 1u) == 0 )
            (*(v7->_vptr_CRefCount + 2))(v7);
          if ( *(this + 400) != 0 )
            break;
        }
        else
        {
          (*(*v3 + 16LL))(v3, v7);
          if ( *(this + 400) != 0 )
            break;
        }
      }
      if ( *(this + 400) != 0 )
        break;
      ++nIterations;
      if ( *(v3 + 420) == 0 || nIterations > 3 )
        goto LABEL_4;
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v13 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
        v35 = __rdtsc();
        if ( m_TargetThreadId == ThreadGetCurrentId(v2) )
        {
          m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
          if ( m_pCurNode->m_pszName != "CWorkThread -- Sleep" )
          {
            m_pCurNode = CVProfNode::GetSubNode(
                           g_VProfCurrentProfile.m_pCurNode,
                           "CWorkThread -- Sleep",
                           0,
                           "Sleeping",
                           4);
            g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
          }
          v27 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v27->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        v4 = m_numTimeBaseTicks - v35 + __rdtsc();
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v4;
      }
      ThreadSleep(2, v5, v4);
      if ( !v13 )
        goto LABEL_4;
      v14 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v15 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v15 == ThreadGetCurrentId(v2) )
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
      v16 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v16 - v14 + __rdtsc();
      if ( *(v3 + 420) != 0 )
        goto LABEL_5;
    }
LABEL_26:
    _InterlockedSub((v3 + 416), 1u);
    v17 = g_VProfCurrentProfile.m_enabled;
    v18 = v17 != 0;
    if ( v17 != 0 )
    {
      v29 = __rdtsc();
      nIterationsa = g_VProfCurrentProfile.m_TargetThreadId;
      if ( nIterationsa == ThreadGetCurrentId(v2) )
      {
        SubNode = g_VProfCurrentProfile.m_pCurNode;
        if ( SubNode->m_pszName != "CWorkThread -- Sleep" )
        {
          SubNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CWorkThread -- Sleep", 0, "Sleeping", 4);
          g_VProfCurrentProfile.m_pCurNode = SubNode;
        }
        v32 = &g_VProfCurrentProfile.m_pBudgetGroups[SubNode->m_BudgetGroupID];
        v32->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      v30 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v30 - v29 + __rdtsc();
    }
    CThreadSyncObject::Wait((v3 + 288), 0x32u);
    if ( !v18 )
      goto LABEL_2;
    v19 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v20 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v20 == ThreadGetCurrentId(v2) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          v33 = g_VProfCurrentProfile.m_pCurNode;
          v34 = v33->m_pParent;
          if ( v34 != 0 )
          {
            g_VProfCurrentProfile.m_pCurNode = v34;
            v33 = v34;
          }
        }
        else
        {
          v33 = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = v33 == &g_VProfCurrentProfile.m_Root;
      }
    }
    v21 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v21 - v19 + __rdtsc();
  }
  while ( *(this + 400) == 0 );
LABEL_32:
  CThreadEvent::Set((v3 + 288));
  v22 = *(this + 49);
  *(this + 401) = 1;
  _InterlockedSub((v22 + 280), 1u);
  return 0;
}


// GCSDK::CWorkThreadPool::CWorkThreadPool  (line 202, @0x000000000323fc20, libserver.so)  // inlines: CInterlockedIntT, CTSListBase, CTSQueue, CThreadMutex, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, SetLimit, ThreadInterlockedExchange, V_strncpy<long unsigned int>, operator=, ~CTSListBase, ~CThreadEvent, ~CThreadMutex, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: pthread_mutexattr_init, pthread_mutexattr_settype, pthread_mutex_init, CThreadEvent::CThreadEvent(bool), _V_strncpy, Plat_TicksAfterMicroSecs, operator new, pthread_mutex_destroy, _Unwind_Resume, CTSListBase::Detach, operator delete, CThreadSyncObject::~CThreadSyncObject() (14 total)
// callers: GCSDK::CJobMgr::CJobMgr
void __fastcall GCSDK::CWorkThreadPool::CWorkThreadPool(GCSDK::CWorkThreadPool *const this, const char *pszThreadName)
{
  pthread_mutexattr_t *v2; // r14
  pthread_mutex_t *v3; // r13
  pthread_mutexattr_t *v6; // r15
  void *v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // rax
  void *v10; // rax
  _QWORD *v11; // r12
  _QWORD *v12; // rax

  v2 = (this + 104);
  v3 = (this + 64);
  v6 = (this + 256);
  *this = off_47D0CD0;
  *(this + 40) = 0;
  pthread_mutexattr_init(this + 26);
  pthread_mutexattr_settype(v2, 1);
  pthread_mutex_init(v3, v2);
  *(this + 152) = 0;
  *(this + 32) = 0;
  *(this + 17) = 0;
  *(this + 36) = 0;
  *(this + 37) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 22) = 0;
  *(this + 184) = 0;
  *(this + 48) = 0;
  *(this + 25) = 0;
  *(this + 52) = 0;
  *(this + 53) = 0;
  pthread_mutexattr_init(v6);
  pthread_mutexattr_settype(v6, 1);
  pthread_mutex_init((this + 216), v6);
  *(this + 70) = 0;
  *(this + 284) = 0;
  CThreadEvent::CThreadEvent((this + 288), 0);
  *(this + 421) = 0;
  *(this + 104) = 0;
  *(this + 420) = 0;
  *(this + 106) = 0;
  *(this + 54) = 0;
  *(this + 110) = 0;
  *(this + 111) = 0;
  _V_strncpy(this + 8, pszThreadName, 32);
  *(this + 57) = Plat_TicksAfterMicroSecs(1);
  v7 = operator new(0x40u);
  *(v7 + 8) = 0;
  v8 = v7;
  *(v7 + 6) = 0;
  *(v7 + 7) = 0;
  _InterlockedExchange(v7 + 8, 0);
  *(v7 + 3) = 0;
  *(v7 + 1) = 0;
  v9 = operator new(0x10u);
  v8[2] = v9;
  *v8 = v9;
  *v9 = v8;
  *(this + 6) = v8;
  v10 = operator new(0x40u);
  *(v10 + 8) = 0;
  v11 = v10;
  *(v10 + 6) = 0;
  *(v10 + 7) = 0;
  _InterlockedExchange(v10 + 8, 0);
  *(v10 + 3) = 0;
  *(v10 + 1) = 0;
  v12 = operator new(0x10u);
  v11[2] = v12;
  *v11 = v12;
  *v12 = v11;
  *(this + 7) = v11;
}


// GCSDK::CWorkThreadPool::~CWorkThreadPool  (line 237, @0x00000000032405b0, libserver.so)  // inlines: Count, Detach, FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Purge, Push, Release, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator int, operator--, ~CTSListBase, ~CTSQueue, ~CThreadEvent, ~CThreadMutex, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GCSDK::EmitWarning, operator delete, GCSDK::CWorkThreadPool::StopWorkThreads, CThreadSyncObject::~CThreadSyncObject(), pthread_mutex_destroy, CUtlMemory<GCSDK::CWorkThread*, int>::Purge, CUtlMemory<GCSDK::CWorkItem*, int>::Purge
// callers: GCSDK::CJobMgr::CJobMgr, GCSDK::CJobMgr::~CJobMgr, GCSDK::CWorkThreadPool::~CWorkThreadPool
// strings: "CWorkThreadPool::~CWorkThreadPool: work complete queue not empty, %d items discarded.\n", "CWorkThreadPool::~CWorkThreadPool: work processing queue not empty: %d items discarded.\n
void __fastcall GCSDK::CWorkThreadPool::~CWorkThreadPool(GCSDK::CWorkThreadPool *const this)
{
  int v1; // ebx
  int v2; // r12d
  unsigned __int64 v3; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  signed __int64 *v7; // r10
  signed __int64 v8; // r8
  volatile signed __int32 *v9; // rdi
  __int128 v10; // rt0
  __int128 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // rt0
  unsigned __int8 v14; // tt
  __int128 v15; // rt0
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  signed __int64 *v18; // r8
  signed __int64 v19; // r9
  volatile signed __int32 *v20; // rdi
  __int128 v21; // rt0
  __int128 v22; // rax
  __int64 v23; // rdx
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  __int128 v26; // rt0
  unsigned __int64 v27; // r14
  int v28; // eax
  unsigned __int64 v29; // r12
  int v30; // r15d
  signed __int64 *v31; // rdi
  signed __int64 v32; // rsi
  signed __int64 v33; // r10
  __int128 v34; // rt0
  __int128 v35; // rt0
  int v36; // eax
  unsigned __int64 v37; // r15
  __int128 v38; // rt0
  signed __int64 *v39; // rdi
  __int64 v40; // rdx
  void *v41; // rdi
  unsigned __int64 v42; // rcx
  __int128 v43; // rt0
  __int64 v44; // r12
  volatile signed __int64 *v45; // r14
  signed __int64 *v46; // rdi
  signed __int64 v47; // rbx
  signed __int64 v48; // r10
  __int128 v49; // rt0
  __int128 v50; // rt0
  unsigned __int64 v51; // r15
  __int128 v52; // rt0
  signed __int64 *v53; // rdi
  __int64 v54; // rdx
  signed __int64 *v55; // rdi
  unsigned __int64 v56; // rcx
  __int128 v57; // rt0
  bool v58; // zf
  unsigned __int64 v59; // [rsp+8h] [rbp-98h]
  _QWORD *v60; // [rsp+8h] [rbp-98h]
  int v61; // [rsp+8h] [rbp-98h]
  _QWORD *v62; // [rsp+20h] [rbp-80h]
  _QWORD *v63; // [rsp+38h] [rbp-68h]
  _QWORD *v64; // [rsp+68h] [rbp-38h]

  *this = off_47D0CD0;
  if ( *(this + 48) != 0 )
    GCSDK::CWorkThreadPool::StopWorkThreads(this);
  v5 = *(this + 7);
  if ( *(v5 + 32) > 0 )
  {
    GCSDK::EmitWarning(
      &GCSDK::SPEW_THREADS,
      2,
      "CWorkThreadPool::~CWorkThreadPool: work complete queue not empty, %d items discarded.\n",
      *(v5 + 32));
    while ( 1 )
    {
      v6 = *(this + 7);
      v62 = (v6 + 8);
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v7 = *v6;
            v8 = **v6;
          }
          while ( v8 == 0 );
          if ( v7 != *(v6 + 16) )
            break;
          if ( v6 == v8 )
            goto LABEL_16;
          *&v15 = *v6;
          *(&v15 + 1) = *(v6 + 24);
          _InterlockedCompareExchange128((v6 + 16), *(&v15 + 1) + 1LL, v8, &v15);
        }
        if ( v6 != v8 )
        {
          v9 = *(v8 + 8);
          *&v10 = *v6;
          *(&v10 + 1) = *v62;
          if ( _InterlockedCompareExchange128(v6, *v62 + 1LL, v8, &v10) != 0 )
            break;
        }
      }
      _InterlockedSub((v6 + 32), 1u);
      v7[1] = v9;
      v3 = v3;
      while ( 1 )
      {
        v11 = *(v6 + 48);
        v3 = (DWORD2(v11) + 65537) | v3 & 0xFFFFFFFF00000000LL;
        *v7 = v11;
        v13 = v11;
        v14 = _InterlockedCompareExchange128((v6 + 48), v3, v7, &v13);
        v12 = *(&v13 + 1);
        if ( v14 != 0 )
          break;
        _mm_pause();
      }
      while ( _InterlockedSub(v9 + 2, 1u) != 0 )
        ;
      (*(*v9 + 16LL))(v9, v6, v12, v3);
    }
  }
LABEL_16:
  v16 = *(this + 6);
  if ( *(v16 + 32) <= 0 )
    goto LABEL_30;
  GCSDK::EmitWarning(
    &GCSDK::SPEW_THREADS,
    2,
    "CWorkThreadPool::~CWorkThreadPool: work processing queue not empty: %d items discarded.\n",
    *(v16 + 32));
LABEL_18:
  v17 = *(this + 6);
  v63 = (v17 + 8);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v18 = *v17;
        v19 = **v17;
      }
      while ( v19 == 0 );
      if ( v18 == *(v17 + 16) )
        break;
      if ( v17 != v19 )
      {
        v20 = *(v19 + 8);
        *&v21 = *v17;
        *(&v21 + 1) = *v63;
        if ( _InterlockedCompareExchange128(v17, *v63 + 1LL, v19, &v21) != 0 )
        {
          _InterlockedSub((v17 + 32), 1u);
          v18[1] = v20;
          v59 = v59;
          while ( 1 )
          {
            v22 = *(v17 + 48);
            v59 = (DWORD2(v22) + 65537) | v59 & 0xFFFFFFFF00000000LL;
            *v18 = v22;
            v24 = v22;
            v25 = _InterlockedCompareExchange128((v17 + 48), v59, v18, &v24);
            v23 = *(&v24 + 1);
            if ( v25 != 0 )
              break;
            _mm_pause();
          }
          while ( _InterlockedSub(v20 + 2, 1u) != 0 )
            ;
          (*(*v20 + 16LL))(v20, v17, v23, v59);
          goto LABEL_18;
        }
      }
    }
    if ( v17 == v19 )
      break;
    *&v26 = *v17;
    *(&v26 + 1) = *(v17 + 24);
    _InterlockedCompareExchange128((v17 + 16), *(&v26 + 1) + 1LL, v19, &v26);
  }
  v16 = *(this + 6);
  if ( v16 != 0 )
  {
LABEL_30:
    v60 = (v16 + 8);
    v27 = v16 + 16;
    v28 = v2;
    v29 = v16;
    v30 = v28;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v31 = *v29;
          v32 = **v29;
        }
        while ( v32 == 0 );
        if ( v31 == *v27 )
          break;
        if ( v29 != v32 )
        {
          v33 = *(v32 + 8);
          *&v34 = *v29;
          *(&v34 + 1) = *v60;
          if ( _InterlockedCompareExchange128(v29, *v60 + 1LL, v32, &v34) != 0 )
          {
            _InterlockedSub((v29 + 32), 1u);
            v31[1] = v33;
            operator delete(v31);
          }
        }
      }
      if ( v29 == v32 )
        break;
      *&v35 = *v29;
      *(&v35 + 1) = *(v27 + 8);
      _InterlockedCompareExchange128(v27, *(&v35 + 1) + 1LL, v32, &v35);
    }
    v36 = v30;
    v37 = v29;
    LODWORD(v29) = v36;
    while ( 1 )
    {
      v39 = *(v37 + 48);
      v29 = v29;
      v40 = *(v37 + 56);
      if ( v39 == 0 )
        break;
      while ( 1 )
      {
        v29 = (v40 - 1) | v29 & 0xFFFFFFFF00000000LL;
        *&v38 = v39;
        *(&v38 + 1) = v40;
        if ( _InterlockedCompareExchange128((v37 + 48), v29, *v39, &v38) != 0 )
          break;
        _mm_pause();
        v39 = *(v37 + 48);
        v40 = *(v37 + 56);
        if ( v39 == 0 )
          goto LABEL_42;
      }
      operator delete(v39);
    }
LABEL_42:
    *(v37 + 24) = 0;
    v41 = *v37;
    *(v37 + 8) = 0;
    operator delete(v41);
    *v37 = 0;
    v42 = 0;
    *(v37 + 16) = 0;
    do
    {
      _mm_pause();
      if ( *(v37 + 48) == 0 )
        break;
      v42 = *(v37 + 56) & 0xFFFF0000LL | v42 & 0xFFFFFFFF00000000LL;
      v43 = *(v37 + 48);
    }
    while ( _InterlockedCompareExchange128((v37 + 48), v42, 0, &v43) == 0 );
    operator delete(v37);
  }
  v44 = *(this + 7);
  if ( v44 != 0 )
  {
    v45 = (v44 + 16);
    v61 = v1;
LABEL_48:
    v64 = (v44 + 8);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v46 = *v44;
          v47 = **v44;
        }
        while ( v47 == 0 );
        if ( v46 == *v45 )
          break;
        if ( v44 != v47 )
        {
          v48 = *(v47 + 8);
          *&v49 = *v44;
          *(&v49 + 1) = *v64;
          if ( _InterlockedCompareExchange128(v44, *v64 + 1LL, v47, &v49) != 0 )
          {
            _InterlockedSub((v44 + 32), 1u);
            v46[1] = v48;
            operator delete(v46);
            goto LABEL_48;
          }
        }
      }
      if ( v44 == v47 )
        break;
      *&v50 = *v44;
      *(&v50 + 1) = *(v44 + 24);
      _InterlockedCompareExchange128(v45, *(&v50 + 1) + 1LL, v47, &v50);
    }
    LODWORD(v51) = v61;
    while ( 1 )
    {
      v53 = *(v44 + 48);
      v51 = v51;
      v54 = *(v44 + 56);
      if ( v53 == 0 )
        break;
      while ( 1 )
      {
        v51 = (v54 - 1) | v51 & 0xFFFFFFFF00000000LL;
        *&v52 = v53;
        *(&v52 + 1) = v54;
        if ( _InterlockedCompareExchange128((v44 + 48), v51, *v53, &v52) != 0 )
          break;
        _mm_pause();
        v53 = *(v44 + 48);
        v54 = *(v44 + 56);
        if ( v53 == 0 )
          goto LABEL_60;
      }
      operator delete(v53);
    }
LABEL_60:
    *(v44 + 24) = 0;
    v55 = *v44;
    *(v44 + 8) = 0;
    operator delete(v55);
    *v44 = 0;
    v56 = 0;
    *(v44 + 16) = 0;
    do
    {
      _mm_pause();
      if ( *(v44 + 48) == 0 )
        break;
      v56 = *(v44 + 56) & 0xFFFF0000LL | v56 & 0xFFFFFFFF00000000LL;
      v57 = *(v44 + 48);
    }
    while ( _InterlockedCompareExchange128((v44 + 48), v56, 0, &v57) == 0 );
    operator delete(v44);
  }
  *(this + 36) = &off_4094AA0;
  CThreadSyncObject::~CThreadSyncObject((this + 288));
  pthread_mutex_destroy((this + 216));
  v58 = (*(this + 53) & 0xC0000000) == 0;
  *(this + 48) = 0;
  if ( v58 )
  {
    CUtlMemory<GCSDK::CWorkThread *,int>::Purge((this + 200));
    if ( (*(this + 53) & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CWorkThread *,int>::Purge((this + 200));
  }
  v58 = (*(this + 37) & 0xC0000000) == 0;
  *(this + 32) = 0;
  if ( v58 )
  {
    CUtlMemory<GCSDK::CWorkItem *,int>::Purge((this + 136));
    if ( (*(this + 37) & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CWorkItem *,int>::Purge((this + 136));
  }
  pthread_mutex_destroy((this + 64));
}


// GCSDK::CWorkThreadPool::~CWorkThreadPool  (line 237, @0x0000000003240c80, libserver.so)
// calls: GCSDK::CWorkThreadPool::~CWorkThreadPool, operator delete
void __fastcall GCSDK::CWorkThreadPool::~CWorkThreadPool(GCSDK::CWorkThreadPool *const this)
{
  GCSDK::CWorkThreadPool::~CWorkThreadPool(this);
  operator delete(this);
}


// GCSDK::CWorkThreadPool::AddWorkThread  (line 298, @0x0000000003240d70, libserver.so)  // inlines: AddToTail, CAutoLockT, CopyConstruct<GCSDK::CWorkThread*>, Element, GrowMemory, Lock, Unlock, operator[], ~CAutoLockT
// calls: pthread_mutex_lock, pthread_mutex_unlock, CUtlMemory<GCSDK::CWorkThread*, int>::Grow, _Unwind_Resume
// callers: GCSDK::CWorkThreadPool::AddWorkItem
int __fastcall GCSDK::CWorkThreadPool::AddWorkThread(GCSDK::CWorkThreadPool *const this, GCSDK::CWorkThread *pThread)
{
  pthread_mutex_t *v3; // r13
  int v5; // r12d
  int v6; // eax
  GCSDK::CWorkThread **v7; // rax

  v3 = (this + 216);
  pthread_mutex_lock((this + 216));
  v5 = *(this + 48);
  v6 = v5;
  if ( v5 == *(this + 52) )
  {
    CUtlMemory<GCSDK::CWorkThread *,int>::Grow((this + 200), 1);
    v6 = *(this + 48);
  }
  *(this + 48) = v6 + 1;
  v7 = (*(this + 25) + 8LL * v5);
  if ( v7 != 0 )
    *v7 = pThread;
  pthread_mutex_unlock(v3);
  return v5;
}


// GCSDK::CWorkThreadPool::StartWorkThread  (line 306, @0x000000000323ff50, libserver.so)
// calls: V_snprintf, CThread::SetName(char const*), GCSDK::EmitError, __stack_chk_fail
// callers: GCSDK::CWorkThreadPool::StartWorkThreads, GCSDK::CWorkThreadPool::AddWorkItem
// strings: "%s:%d", "CWorkThreadPool::StartWorkThread: Thread creation failed.\n"
void __fastcall GCSDK::CWorkThreadPool::StartWorkThread(
        GCSDK::CWorkThreadPool *const this,
        GCSDK::CWorkThread *pWorkThread,
        int iName)
{
  char rgchThreadName[40]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  V_snprintf(rgchThreadName, 32, "%s:%d", this + 8, iName);
  CThread::SetName(pWorkThread, rgchThreadName);
  if ( (*(*pWorkThread + 16LL))(pWorkThread, 0, 0) == 0 )
    GCSDK::EmitError(&GCSDK::SPEW_THREADS, "CWorkThreadPool::StartWorkThread: Thread creation failed.\n");
}


// GCSDK::CWorkThreadPool::StartWorkThreads  (line 316, @0x000000000323ffe0, libserver.so)  // inlines: CAutoLockT, Lock, ThreadInterlockedExchange, Unlock, operator=, operator==, ~CAutoLockT
// calls: pthread_mutex_lock, GCSDK::CWorkThreadPool::StartWorkThread, ThreadSleep, pthread_mutex_unlock, GCSDK::EmitWarning, _Unwind_Resume
// strings: "CWorkThreadPool::StartWorkThreads: called with no threads in the pool, this is probably a
void __fastcall GCSDK::CWorkThreadPool::StartWorkThreads(GCSDK::CWorkThreadPool *const this)
{
  int v2; // esi
  pthread_mutex_t *v3; // r14
  __int64 v4; // r13
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rsi

  v2 = *(this + 48);
  *(this + 40) = 1;
  if ( v2 != 0 )
  {
    *(this + 284) = 0;
    _InterlockedExchange(this + 70, 0);
    v3 = (this + 216);
    v4 = 0;
    v5 = 0;
    pthread_mutex_lock((this + 216));
    if ( *(this + 48) <= 0 )
      goto LABEL_6;
    do
    {
      GCSDK::CWorkThreadPool::StartWorkThread(this, *(*(this + 25) + v4), v5++);
      v4 += 8;
    }
    while ( *(this + 48) > v5 );
    while ( *(this + 70) == 0 )
    {
      ThreadSleep(1, v7, v6);
LABEL_6:
      ;
    }
    pthread_mutex_unlock(v3);
  }
  else
  {
    GCSDK::EmitWarning(
      &GCSDK::SPEW_THREADS,
      2,
      "CWorkThreadPool::StartWorkThreads: called with no threads in the pool, this is probably a bug.\n");
  }
}


// GCSDK::CWorkThreadPool::StopWorkThreads  (line 344, @0x0000000003240470, libserver.so)  // inlines: CAutoLockT, Lock, Unlock, ~CAutoLockT
// calls: pthread_mutex_lock, GCSDK::CWorkThreadPool::BTryDeleteExitedWorkerThreads, CThreadEvent::Set(void), CThread::Join(uint), pthread_mutex_unlock, CThread::GetName(void), GCSDK::EmitWarning, _Unwind_Resume
// callers: GCSDK::CJobMgr::Shutdown, GCSDK::CWorkThreadPool::~CWorkThreadPool
// strings: "Thread \"%s\" (ID %llu) failed to shut down"
void __fastcall GCSDK::CWorkThreadPool::StopWorkThreads(GCSDK::CWorkThreadPool *const this)
{
  pthread_mutex_t *v1; // r14
  int v2; // r13d
  __int64 v3; // r12
  __int64 v5; // r12
  __int64 v6; // r15
  const char *Name; // rax

  v1 = (this + 216);
  v2 = 0;
  v3 = 0;
  *(this + 284) = 1;
  pthread_mutex_lock((this + 216));
  if ( *(this + 48) > 0 )
  {
    do
    {
      *(*(*(this + 25) + v3) + 400LL) = 1;
      (*(**(*(this + 25) + v3) + 64LL))(*(*(this + 25) + v3));
      ++v2;
      v3 += 8;
    }
    while ( *(this + 48) > v2 );
  }
LABEL_3:
  while ( 1 )
  {
    GCSDK::CWorkThreadPool::BTryDeleteExitedWorkerThreads(this);
    if ( *(this + 48) == 0 )
      break;
    while ( 1 )
    {
      CThreadEvent::Set((this + 288));
      v5 = **(this + 25);
      if ( CThread::Join(v5, 0x2710u) == 0 )
        break;
      if ( *(v5 + 401) != 0 )
        goto LABEL_3;
      *(v5 + 401) = 1;
      GCSDK::CWorkThreadPool::BTryDeleteExitedWorkerThreads(this);
      if ( *(this + 48) == 0 )
        goto LABEL_7;
    }
    v6 = *(v5 + 200);
    Name = CThread::GetName(v5);
    GCSDK::EmitWarning(&GCSDK::SPEW_THREADS, 2, "Thread \"%s\" (ID %llu) failed to shut down", Name, v6);
  }
LABEL_7:
  pthread_mutex_unlock(v1);
}


// GCSDK::CWorkThreadPool::HasWorkItemsToProcess  (line 414, @0x00000000032400e0, libserver.so)  // inlines: Count, operator int
// callers: GCSDK::CJobMgr::HasOutstandingThreadPoolWorkItems
bool __fastcall GCSDK::CWorkThreadPool::HasWorkItemsToProcess(const GCSDK::CWorkThreadPool *const this)
{
  bool result; // al

  result = 1;
  if ( *(*(this + 6) + 32LL) <= 0 )
    return *(this + 104) > 0;
  return result;
}


// GCSDK::CWorkThreadPool::SetWorkThreadAutoConstruct  (line 424, @0x0000000003240110, libserver.so)
// callers: GCSDK::CJobMgr::SetThreadPoolSize, GCSDK::CJobMgr::CJobMgr
void __fastcall GCSDK::CWorkThreadPool::SetWorkThreadAutoConstruct(
        GCSDK::CWorkThreadPool *const this,
        int cMaxThreads,
        GCSDK::IWorkThreadFactory *pWorkThreadConstructor)
{
  int v3; // eax

  v3 = 1;
  if ( cMaxThreads > 0 )
    v3 = cMaxThreads;
  *(this + 40) = 1;
  *(this + 421) = 1;
  *(this + 106) = v3;
  *(this + 54) = pWorkThreadConstructor;
}


// GCSDK::CWorkThreadPool::AddWorkItem  (line 440, @0x0000000003240e10, libserver.so)  // inlines: Add, AddRef, BLimitReached, BNeverSetEventOnAdd, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, CWorkThread, CopyConstruct<GCSDK::CWorkItem*>, Count, EnterScope, ExitScope, FinishPush, GetElapsed, GetTimebaseRegister, InTargetThread, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, IsEnabled, PLAT_CPU_TIME, Pop, Push, PushItem, SetLimit, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedIncrement, ThreadPause, operator int, operator++, operator==, ~CMicroProfilerGuard, ~CVProfScope
// calls: Plat_RelativeTicks, GCSDK::CWorkThreadPool::AddWorkThread, GCSDK::CWorkThreadPool::StartWorkThread, Plat_TicksAfterMicroSecs, AssertMsg_ConditionFailed, CThreadEvent::Set(void), ThreadGetCurrentId, operator new, CThread::CThread(void), CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void) (16 total)
// callers: GCSDK::CJobMgr::AddThreadedJobWorkItem, GCSDK::CWorkThread::Run
// strings: "CTSQueue corruption", "SetEvent()", "ThreadingMain"
// globals: CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants
bool __fastcall GCSDK::CWorkThreadPool::AddWorkItem(GCSDK::CWorkThreadPool *const this, GCSDK::CWorkItem *pWorkItem)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GCSDK::CWorkThreadPool *const, __int64, __int64); // rdi
  CThread *v8; // rbx
  int v9; // eax
  bool v10; // bl
  unsigned __int64 v12; // rcx
  uint64 v13; // rax
  signed __int64 v14; // rdi
  __int128 v15; // rax
  _QWORD *v16; // r15
  volatile signed __int64 *v17; // rsi
  unsigned __int64 v18; // rdi
  __int128 v19; // rt0
  int v20; // r13d
  volatile signed __int64 *v21; // r14
  __int64 v22; // rdx
  volatile signed __int64 *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int128 v26; // rt0
  __int128 v27; // rt0
  int m_enabled; // r10d
  __int64 v29; // rdi
  unsigned __int64 v30; // r12
  ThreadId_t v31; // r14
  uint64 v32; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v34; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v38; // rax
  signed __int64 v39; // [rsp+8h] [rbp-38h]

  if ( *(this + 284) != 0 )
    return 0;
  v4 = *(this + 48);
  if ( *(this + 421) == 0 || v4 >= *(this + 106) )
    goto LABEL_13;
  v5 = *(this + 6);
  v6 = *(v5 + 32);
  if ( v4 > 0 )
  {
    v5 = (12 * v4);
    if ( v5 > v6 )
      goto LABEL_16;
    if ( v4 > 1 && Plat_RelativeTicks() < *(this + 57) )
    {
LABEL_12:
      v4 = *(this + 48);
LABEL_13:
      if ( v4 == 0 )
        return 0;
LABEL_16:
      _InterlockedAdd(&pWorkItem->m_cRef, 1u);
      v12 = 0;
      v13 = *(this + 20) + 1LL;
      *(this + 20) = v13;
      pWorkItem->m_ulSequenceNumber = v13;
      v14 = *(this + 6);
      v15 = *(v14 + 48);
      v39 = v14;
      v16 = v15;
      if ( v15 != 0 )
      {
        v17 = (v14 + 48);
        v18 = 0xFFFFFFFF00000000LL;
        while ( 1 )
        {
          v12 = (DWORD2(v15) - 1) | v12 & 0xFFFFFFFF00000000LL;
          v19 = v15;
          if ( _InterlockedCompareExchange128(v17, v12, *v15, &v19) != 0 )
            break;
          _mm_pause();
          v15 = *(v39 + 48);
          v16 = v15;
          if ( v15 == 0 )
            goto LABEL_39;
        }
      }
      else
      {
LABEL_39:
        v16 = operator new(0x10u);
      }
      if ( v16 != -8LL )
        v16[1] = pWorkItem;
      v20 = 0;
      *v16 = v39;
      v21 = (v39 + 16);
      while ( 1 )
      {
        v22 = *(v39 + 24);
        v23 = *(v39 + 16);
        if ( v39 == _InterlockedCompareExchange64(v23, v16, v39) )
          break;
        v24 = v22 + 1;
        *&v26 = v23;
        *(&v26 + 1) = v22;
        _InterlockedCompareExchange128(v21, v22 + 1, *v23, &v26);
        v25 = *(&v26 + 1);
        if ( ++v20 > 9999999
          && AssertMsg_ConditionFailed(
               &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
               "CTSQueue corruption",
               v25,
               v24) != 0 )
        {
          __debugbreak();
        }
      }
      *&v27 = v23;
      *(&v27 + 1) = v22;
      _InterlockedCompareExchange128(v21, v22 + 1, v16, &v27);
      _InterlockedAdd((v39 + 32), 1u);
      if ( *(this + 420) != 0 || *(this + 104) != 0 )
        return 1;
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v10 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
        v34 = __rdtsc();
        if ( m_TargetThreadId == ThreadGetCurrentId(v18) )
        {
          m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
          if ( m_pCurNode->m_pszName != "SetEvent()" )
          {
            m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "SetEvent()", 0, "ThreadingMain", 4);
            g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
          }
          v38 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v38->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v34 + __rdtsc();
      }
      CThreadEvent::Set((this + 288));
      if ( !v10 )
        return 1;
      v30 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v31 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v31 == ThreadGetCurrentId(v29) )
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
      v32 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v32 - v30 + __rdtsc();
      return v10;
    }
  }
  v7 = *(this + 54);
  if ( v7 != 0 )
  {
    v8 = (**v7)(v7, this, v5, v6);
    if ( v8 == 0 )
    {
LABEL_11:
      *(this + 57) = Plat_TicksAfterMicroSecs(250000);
      goto LABEL_12;
    }
  }
  else
  {
    v8 = operator new(0x198u);
    CThread::CThread(v8);
    *(v8 + 400) = 0;
    *v8 = off_47D0C70;
    *(v8 + 49) = this;
    *(v8 + 401) = 0;
  }
  v9 = GCSDK::CWorkThreadPool::AddWorkThread(this, v8);
  GCSDK::CWorkThreadPool::StartWorkThread(this, v8, v9);
  goto LABEL_11;
}


// GCSDK::CWorkThreadPool::GetNextCompletedWorkItem  (line 513, @0x0000000003240140, libserver.so)  // inlines: FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Push, Release, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator--
// callers: GCSDK::CWorkThreadPool::BDispatchCompletedWorkItems
GCSDK::CWorkItem *__fastcall GCSDK::CWorkThreadPool::GetNextCompletedWorkItem(GCSDK::CWorkThreadPool *const this)
{
  unsigned __int64 v1; // r12
  __int64 v3; // rsi
  signed __int64 *v4; // r15
  signed __int64 v5; // r8
  GCSDK::CWorkItem *v6; // rdi
  __int128 v7; // rt0
  __int128 v8; // rax
  __int64 v9; // rdx
  __int128 v10; // rt0
  unsigned __int8 v11; // tt
  int v12; // eax
  __int128 v14; // rt0
  _QWORD *v15; // [rsp+18h] [rbp-38h]

  do
  {
LABEL_1:
    v3 = *(this + 7);
    v15 = (v3 + 8);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v4 = *v3;
          v5 = **v3;
        }
        while ( v5 == 0 );
        if ( v4 != *(v3 + 16) )
          break;
        if ( v3 == v5 )
          return 0;
        *&v14 = *v3;
        *(&v14 + 1) = *(v3 + 24);
        _InterlockedCompareExchange128((v3 + 16), *(&v14 + 1) + 1LL, v5, &v14);
      }
      if ( v3 != v5 )
      {
        v6 = *(v5 + 8);
        *&v7 = *v3;
        *(&v7 + 1) = *v15;
        if ( _InterlockedCompareExchange128(v3, *v15 + 1LL, v5, &v7) != 0 )
          break;
      }
    }
    _InterlockedSub((v3 + 32), 1u);
    v4[1] = v6;
    v1 = v1;
    while ( 1 )
    {
      v8 = *(v3 + 48);
      v1 = (DWORD2(v8) + 65537) | v1 & 0xFFFFFFFF00000000LL;
      *v4 = v8;
      v10 = v8;
      v11 = _InterlockedCompareExchange128((v3 + 48), v1, v4, &v10);
      v9 = *(&v10 + 1);
      if ( v11 != 0 )
        break;
      _mm_pause();
    }
  }
  while ( v6 == 0 );
  v12 = _InterlockedDecrement(&v6->m_cRef);
  if ( v12 == 0 )
  {
    (*(v6->_vptr_CRefCount + 2))(v6, v3, v9, v1);
    goto LABEL_1;
  }
  if ( v12 <= 0 )
    goto LABEL_1;
  return v6;
}


// GCSDK::CWorkThreadPool::GetNextWorkItemToProcess  (line 538, @0x0000000003240280, libserver.so)  // inlines: Count, FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator int, operator--
// callers: GCSDK::CWorkThread::Run
GCSDK::CWorkItem *__fastcall GCSDK::CWorkThreadPool::GetNextWorkItemToProcess(GCSDK::CWorkThreadPool *const this)
{
  __int64 v1; // rsi
  signed __int64 **v3; // r9
  signed __int64 *v4; // r14
  signed __int64 v5; // rdi
  GCSDK::CWorkItem *v6; // r11
  __int128 v7; // rt0
  unsigned __int64 v8; // rcx
  __int128 v9; // rax
  __int128 v10; // rt0
  __int128 v11; // rt0
  __int64 v12; // [rsp-8h] [rbp-8h]

  v1 = *(this + 6);
  if ( *(v1 + 32) == 0 )
    return 0;
  *(&v12 - 5) = v1;
  *(&v12 - 4) = v1 + 16;
  *(&v12 - 3) = v1 + 8;
  v3 = *(&v12 - 4);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v4 = *v1;
        v5 = **v1;
      }
      while ( v5 == 0 );
      if ( v4 != *v3 )
        break;
      if ( v1 == v5 )
        return 0;
      *&v11 = *v1;
      *(&v11 + 1) = *(*(&v12 - 4) + 8);
      _InterlockedCompareExchange128((v1 + 16), *(&v11 + 1) + 1LL, v5, &v11);
    }
    if ( v1 != v5 )
    {
      v6 = *(v5 + 8);
      *&v7 = *v1;
      *(&v7 + 1) = **(&v12 - 3);
      if ( _InterlockedCompareExchange128(*(&v12 - 5), *(&v7 + 1) + 1LL, v5, &v7) != 0 )
        break;
    }
  }
  _InterlockedSub((v1 + 32), 1u);
  v8 = 0;
  v4[1] = v6;
  while ( 1 )
  {
    v9 = *(v1 + 48);
    v8 = (DWORD2(v9) + 65537) | v8 & 0xFFFFFFFF00000000LL;
    *v4 = v9;
    v10 = v9;
    if ( _InterlockedCompareExchange128((v1 + 48), v8, v4, &v10) != 0 )
      break;
    _mm_pause();
  }
  return v6;
}


// GCSDK::CWorkThreadPool::BDispatchCompletedWorkItems  (line 551, @0x0000000003240ca0, libserver.so)  // inlines: BLimitReached, Count, GetCompletedWorkItemCount, operator int
// calls: GCSDK::CWorkThreadPool::BTryDeleteExitedWorkerThreads, GCSDK::CWorkThreadPool::GetNextCompletedWorkItem, GCSDK::EmitWarning, Plat_RelativeTicks
// callers: GCSDK::CJobMgr::BFrameFuncRunYieldingJobs
// strings: "Work Item for Work Pool %s completed but job no longer existed to notify\n"
bool __fastcall GCSDK::CWorkThreadPool::BDispatchCompletedWorkItems(
        GCSDK::CWorkThreadPool *const this,
        CLimitTimer *const limitTimer,
        GCSDK::CJobMgr *pJobMgr)
{
  GCSDK::CWorkItem *NextCompletedWorkItem; // rax
  const char *v7; // r15
  uint64 m_ulSequenceNumber; // r12

  GCSDK::CWorkThreadPool::BTryDeleteExitedWorkerThreads(this);
  NextCompletedWorkItem = GCSDK::CWorkThreadPool::GetNextCompletedWorkItem(this);
  if ( NextCompletedWorkItem != 0 )
  {
    v7 = "UNKNOWN";
    if ( this != -8LL )
      v7 = this + 8;
    do
    {
      m_ulSequenceNumber = NextCompletedWorkItem->m_ulSequenceNumber;
      if ( (*(NextCompletedWorkItem->_vptr_CRefCount + 6))(NextCompletedWorkItem, pJobMgr) == 0 )
        GCSDK::EmitWarning(
          &GCSDK::SPEW_THREADS,
          2,
          "Work Item for Work Pool %s completed but job no longer existed to notify\n",
          v7);
      *(this + 22) = m_ulSequenceNumber;
      if ( Plat_RelativeTicks() >= limitTimer->m_nTickLimit )
        break;
      NextCompletedWorkItem = GCSDK::CWorkThreadPool::GetNextCompletedWorkItem(this);
    }
    while ( NextCompletedWorkItem != 0 );
  }
  return *(*(this + 7) + 32LL) > 0;
}


// GCSDK::CWorkThreadPool::BTryDeleteExitedWorkerThreads  (line 584, @0x0000000003240370, libserver.so)  // inlines: Element, FastRemove, Unlock, memcpy, operator unsigned int, operator[]
// calls: CThreadMutex::TryLock(void), pthread_mutex_unlock
// callers: GCSDK::CWorkThreadPool::StopWorkThreads, GCSDK::CWorkThreadPool::BDispatchCompletedWorkItems
bool __fastcall GCSDK::CWorkThreadPool::BTryDeleteExitedWorkerThreads(GCSDK::CWorkThreadPool *const this)
{
  char v2; // r14
  unsigned int v3; // ebx
  int v4; // ebx
  __int64 v5; // r12
  _BYTE *v6; // r13
  int v7; // eax
  int v8; // eax
  pthread_mutex_t *mutex; // [rsp+8h] [rbp-38h]

  mutex = (this + 216);
  v2 = CThreadMutex::TryLock((this + 216));
  if ( v2 != 0 )
  {
    v3 = *(this + 48);
    if ( v3 > *(this + 70) )
    {
      v4 = v3 - 1;
      if ( v4 >= 0 )
      {
        v5 = 8LL * v4;
        do
        {
          while ( 1 )
          {
            v6 = *(*(this + 25) + v5);
            if ( v6[401] != 0 && (*(*v6 + 56LL))(*(*(this + 25) + v5)) == 0 )
              break;
            --v4;
            v5 -= 8;
            if ( v4 == -1 )
              goto LABEL_13;
          }
          v7 = *(this + 48);
          if ( v7 > 0 )
          {
            v8 = v7 - 1;
            if ( v4 != v8 )
            {
              *(*(this + 25) + v5) = *(*(this + 25) + 8LL * v8);
              v8 = *(this + 48) - 1;
            }
            *(this + 48) = v8;
          }
          --v4;
          v5 -= 8;
          (*(*v6 + 8LL))(v6);
        }
        while ( v4 != -1 );
      }
    }
LABEL_13:
    pthread_mutex_unlock(mutex);
  }
  return v2;
}


// GCSDK::CWorkItem::DispatchCompletedWorkItem  (line 607, @0x000000000323fa70, libserver.so)  // inlines: BRouteWorkItemCompletedIfExists
// calls: GCSDK::CJobMgr::BRouteWorkItemCompletedInternal
bool __fastcall GCSDK::CWorkItem::DispatchCompletedWorkItem(GCSDK::CWorkItem *const this, GCSDK::CJobMgr *pJobMgr)
{
  JobID_t m_JobID; // rsi

  return pJobMgr == 0
      || (m_JobID = this->m_JobID) == -1
      || GCSDK::CJobMgr::BRouteWorkItemCompletedInternal(pJobMgr, m_JobID, this->m_bCanceled, 0, 1);
}


// GCSDK::CWorkThreadPool::OnWorkItemCompleted  (line 635, @0x0000000003241860, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CWorkItem*>, Element, FastRemove, FinishPush, GrowMemory, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Lock, Pop, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedIncrement, ThreadPause, Unlock, memcpy, operator++, operator[]
// calls: pthread_mutex_lock, pthread_mutex_unlock, AssertMsg_ConditionFailed, CUtlMemory<GCSDK::CWorkItem*, int>::Grow, operator new
// strings: "CTSQueue corruption"
// globals: GCSDK::CWorkThreadPool::sm_pWorkItemsCompletedSignal, CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants
void __fastcall GCSDK::CWorkThreadPool::OnWorkItemCompleted(
        GCSDK::CWorkThreadPool *const this,
        GCSDK::CWorkItem *pWorkItem)
{
  __int64 v4; // rax
  int v5; // r12d
  int v6; // eax
  GCSDK::CWorkItem **v7; // rax
  unsigned __int64 v8; // rcx
  signed __int64 v9; // r12
  __int128 v10; // rax
  _QWORD *v11; // r14
  __int128 v12; // rt0
  volatile signed __int64 *v13; // r13
  int v14; // r15d
  __int64 v15; // rdx
  volatile signed __int64 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // rt0
  __int128 v20; // rt0
  signed __int64 v21; // r12
  unsigned __int64 v22; // rcx
  __int128 v23; // rax
  _QWORD *v24; // r15
  __int128 v25; // rt0
  volatile signed __int64 *v26; // r9
  int v27; // r13d
  __int64 v28; // rdx
  volatile signed __int64 *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int128 v32; // rt0
  char v33; // al
  __int128 v34; // rt0
  int v35; // r15d
  int v36; // ecx
  __int64 v37; // r10
  signed __int64 v38; // r12
  __int64 v39; // rax
  signed __int64 v40; // rbx
  __int128 v41; // rax
  signed __int64 *v42; // r13
  __int128 v43; // rt0
  int v44; // r12d
  volatile signed __int64 *v45; // r11
  __int64 v46; // rdx
  volatile signed __int64 *v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int128 v50; // rt0
  char v51; // al
  __int128 v52; // rt0
  signed __int64 *v53; // rax
  unsigned __int64 v54; // [rsp+10h] [rbp-50h]
  __int64 v55; // [rsp+18h] [rbp-48h]
  volatile signed __int64 *v56; // [rsp+20h] [rbp-40h]
  volatile signed __int64 *v57; // [rsp+28h] [rbp-38h]

  if ( GCSDK::CWorkThreadPool::sm_pWorkItemsCompletedSignal != 0 )
    (**GCSDK::CWorkThreadPool::sm_pWorkItemsCompletedSignal)(GCSDK::CWorkThreadPool::sm_pWorkItemsCompletedSignal);
  if ( *(this + 152) != 0 )
  {
    pthread_mutex_lock((this + 64));
    v4 = *(this + 21) + 1LL;
    if ( v4 == pWorkItem->m_ulSequenceNumber )
    {
      v21 = *(this + 7);
      *(this + 21) = v4;
      v22 = 0;
      v23 = *(v21 + 48);
      v24 = v23;
      if ( v23 != 0 )
      {
        while ( 1 )
        {
          v22 = (DWORD2(v23) - 1) | v22 & 0xFFFFFFFF00000000LL;
          v25 = v23;
          if ( _InterlockedCompareExchange128((v21 + 48), v22, *v23, &v25) != 0 )
            break;
          _mm_pause();
          v23 = *(v21 + 48);
          v24 = v23;
          if ( v23 == 0 )
            goto LABEL_53;
        }
      }
      else
      {
LABEL_53:
        v24 = operator new(0x10u);
      }
      if ( v24 != -8LL )
        v24[1] = pWorkItem;
      *v24 = v21;
      v26 = (v21 + 16);
      v27 = 0;
      while ( 1 )
      {
        v28 = *(v21 + 24);
        v29 = *(v21 + 16);
        if ( v21 == _InterlockedCompareExchange64(v29, v24, v21) )
          break;
        v30 = v28 + 1;
        *&v32 = v29;
        *(&v32 + 1) = v28;
        _InterlockedCompareExchange128(v26, v28 + 1, *v29, &v32);
        v31 = *(&v32 + 1);
        if ( ++v27 > 9999999 )
        {
          v57 = v26;
          v33 = AssertMsg_ConditionFailed(
                  &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
                  "CTSQueue corruption",
                  v31,
                  v30);
          v26 = v57;
          if ( v33 != 0 )
            __debugbreak();
        }
      }
      *&v34 = v29;
      *(&v34 + 1) = v28;
      _InterlockedCompareExchange128(v26, v28 + 1, v24, &v34);
      _InterlockedAdd((v21 + 32), 1u);
      v35 = 0;
      v36 = *(this + 32);
      while ( v36 > 0 )
      {
        while ( 1 )
        {
          v37 = 8LL * v35;
          v38 = *(*(this + 17) + v37);
          v39 = *(this + 21) + 1LL;
          if ( v39 == *(v38 + 16) )
            break;
          if ( ++v35 >= v36 )
            goto LABEL_9;
        }
        *(this + 21) = v39;
        v40 = *(this + 7);
        v41 = *(v40 + 48);
        v54 = v54;
        v42 = v41;
        if ( v41 != 0 )
        {
          while ( 1 )
          {
            v54 = (DWORD2(v41) - 1) | v54 & 0xFFFFFFFF00000000LL;
            v43 = v41;
            if ( _InterlockedCompareExchange128((v40 + 48), v54, *v41, &v43) != 0 )
              break;
            _mm_pause();
            v41 = *(v40 + 48);
            v42 = v41;
            if ( v41 == 0 )
              goto LABEL_49;
          }
        }
        else
        {
LABEL_49:
          v53 = operator new(0x10u);
          v37 = 8LL * v35;
          v42 = v53;
        }
        if ( v42 != -8LL )
          v42[1] = v38;
        v44 = 0;
        *v42 = v40;
        v45 = (v40 + 16);
        while ( 1 )
        {
          v46 = *(v40 + 24);
          v47 = *(v40 + 16);
          if ( v40 == _InterlockedCompareExchange64(v47, v42, v40) )
            break;
          v48 = v46 + 1;
          *&v50 = v47;
          *(&v50 + 1) = v46;
          _InterlockedCompareExchange128(v45, v46 + 1, *v47, &v50);
          v49 = *(&v50 + 1);
          if ( ++v44 > 9999999 )
          {
            v55 = v37;
            v56 = v45;
            v51 = AssertMsg_ConditionFailed(
                    &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
                    "CTSQueue corruption",
                    v49,
                    v48);
            v45 = v56;
            v37 = v55;
            if ( v51 != 0 )
              __debugbreak();
          }
        }
        *&v52 = v47;
        *(&v52 + 1) = v46;
        _InterlockedCompareExchange128(v45, v46 + 1, v42, &v52);
        _InterlockedAdd((v40 + 32), 1u);
        v36 = *(this + 32);
        if ( v36 > 0 )
        {
          if ( v35 != --v36 )
          {
            *(*(this + 17) + v37) = *(*(this + 17) + 8LL * v36);
            v36 = *(this + 32) - 1;
          }
          *(this + 32) = v36;
        }
        v35 = 0;
      }
    }
    else
    {
      v5 = *(this + 32);
      v6 = v5;
      if ( v5 == *(this + 36) )
      {
        CUtlMemory<GCSDK::CWorkItem *,int>::Grow((this + 136), 1);
        v6 = *(this + 32);
      }
      *(this + 32) = v6 + 1;
      v7 = (*(this + 17) + 8LL * v5);
      if ( v7 != 0 )
        *v7 = pWorkItem;
    }
LABEL_9:
    pthread_mutex_unlock((this + 64));
  }
  else
  {
    v8 = 0;
    v9 = *(this + 7);
    *(this + 21) = pWorkItem->m_ulSequenceNumber;
    v10 = *(v9 + 48);
    v11 = v10;
    if ( v10 != 0 )
    {
      while ( 1 )
      {
        v8 = (DWORD2(v10) - 1) | v8 & 0xFFFFFFFF00000000LL;
        v12 = v10;
        if ( _InterlockedCompareExchange128((v9 + 48), v8, *v10, &v12) != 0 )
          break;
        _mm_pause();
        v10 = *(v9 + 48);
        v11 = v10;
        if ( v10 == 0 )
          goto LABEL_51;
      }
    }
    else
    {
LABEL_51:
      v11 = operator new(0x10u);
    }
    if ( v11 != -8LL )
      v11[1] = pWorkItem;
    *v11 = v9;
    v13 = (v9 + 16);
    v14 = 0;
    while ( 1 )
    {
      v15 = *(v9 + 24);
      v16 = *(v9 + 16);
      if ( v9 == _InterlockedCompareExchange64(v16, v11, v9) )
        break;
      v17 = v15 + 1;
      *&v19 = v16;
      *(&v19 + 1) = v15;
      _InterlockedCompareExchange128(v13, v15 + 1, *v16, &v19);
      v18 = *(&v19 + 1);
      if ( ++v14 > 9999999
        && AssertMsg_ConditionFailed(
             &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
             "CTSQueue corruption",
             v18,
             v17) != 0 )
      {
        __debugbreak();
      }
    }
    *&v20 = v16;
    *(&v20 + 1) = v15;
    _InterlockedCompareExchange128(v13, v15 + 1, v11, &v20);
    _InterlockedAdd((v9 + 32), 1u);
  }
}


// GCSDK::CWorkThreadPool::GetWorkItemToProcessCount  (line 690, @0x0000000003240d50, libserver.so)  // inlines: Count, operator int
int __fastcall GCSDK::CWorkThreadPool::GetWorkItemToProcessCount(const GCSDK::CWorkThreadPool *const this)
{
  return *(*(this + 6) + 32LL);
}


// GCSDK::CWorkThreadPool::GetCompletedWorkItemCount  (line 699, @0x0000000003240d60, libserver.so)  // inlines: Count, operator int
int __fastcall GCSDK::CWorkThreadPool::GetCompletedWorkItemCount(const GCSDK::CWorkThreadPool *const this)
{
  return *(*(this + 7) + 32LL);
}


