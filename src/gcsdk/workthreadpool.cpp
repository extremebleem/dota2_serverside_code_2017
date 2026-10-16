
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
  __int64 v2; // rbx
  uint64 v3; // rdx
  __int64 v4; // rsi
  GCSDK::CWorkItem *NextWorkItemToProcess; // rax
  GCSDK::CWorkItem *v6; // r15
  unsigned __int64 v7; // r13
  char v8; // al
  char v9; // cl
  unsigned __int64 v10; // rax
  int m_enabled; // r13d
  bool v12; // r15
  unsigned __int64 v13; // r15
  ThreadId_t v14; // r13
  uint64 v15; // rcx
  int v16; // eax
  bool v17; // r13
  unsigned __int64 v18; // r13
  ThreadId_t v19; // r15
  uint64 v20; // rcx
  __int64 v21; // rax
  ThreadId_t m_TargetThreadId; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v26; // rax
  CVProfNode *m_pParent; // rax
  unsigned __int64 v28; // r15
  uint64 v29; // rcx
  CVProfNode *SubNode; // rax
  CVProfile::CBudgetGroup *v31; // rax
  CVProfNode *v32; // rax
  CVProfNode *v33; // rdx
  unsigned __int64 v34; // [rsp+20h] [rbp-40h]
  int nIterations; // [rsp+28h] [rbp-38h]
  ThreadId_t nIterationsa; // [rsp+28h] [rbp-38h]

  _InterlockedAdd((*(this + 49) + 280LL), 1u);
  (*(*this + 72LL))(this);
  v2 = *(this + 49);
LABEL_2:
  if ( *(this + 400) != 0 )
    goto LABEL_32;
  do
  {
    _InterlockedAdd((v2 + 416), 1u);
    nIterations = 0;
LABEL_4:
    if ( *(v2 + 420) != 0 )
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
        NextWorkItemToProcess = GCSDK::CWorkThreadPool::GetNextWorkItemToProcess(v2);
        v6 = NextWorkItemToProcess;
        if ( NextWorkItemToProcess == 0 )
          break;
        if ( NextWorkItemToProcess->m_jobtimeTimeout.m_lTime != 0
          && GCSDK::CJobTime::CServerMicroSecsPassed(&NextWorkItemToProcess->m_jobtimeTimeout) > 0 )
        {
          v6->m_bCanceled = 1;
        }
        else
        {
          v6->m_bCanceled = 0;
          v6->m_bRunning = 1;
          v7 = __rdtsc();
          v8 = (*(v6->_vptr_CRefCount + 5))(v6, this);
          v6->m_bRunning = 0;
          v9 = v8;
          v10 = __rdtsc();
          v6->m_CycleCount.m_Int64 = (v10 | (HIDWORD(v10) << 32)) - v7;
          if ( v9 != 0 )
          {
            ++*(v2 + 440);
          }
          else if ( v6->m_bResubmit )
          {
            ++*(v2 + 448);
          }
          else
          {
            ++*(v2 + 444);
          }
        }
        if ( v6->m_bResubmit )
        {
          v6->m_bResubmit = 0;
          v6->m_bCanceled = 0;
          GCSDK::CWorkThreadPool::AddWorkItem(v2, v6);
          if ( _InterlockedSub(&v6->m_cRef, 1u) == 0 )
            (*(v6->_vptr_CRefCount + 2))(v6);
          if ( *(this + 400) != 0 )
            break;
        }
        else
        {
          (*(*v2 + 16LL))(v2, v6);
          if ( *(this + 400) != 0 )
            break;
        }
      }
      if ( *(this + 400) != 0 )
        break;
      ++nIterations;
      if ( *(v2 + 420) == 0 || nIterations > 3 )
        goto LABEL_4;
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v12 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
        v34 = __rdtsc();
        if ( m_TargetThreadId == ThreadGetCurrentId() )
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
          v26 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v26->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        v3 = m_numTimeBaseTicks - v34 + __rdtsc();
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v3;
      }
      ThreadSleep(2, v4, v3);
      if ( !v12 )
        goto LABEL_4;
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
      if ( *(v2 + 420) != 0 )
        goto LABEL_5;
    }
LABEL_26:
    _InterlockedSub((v2 + 416), 1u);
    v16 = g_VProfCurrentProfile.m_enabled;
    v17 = v16 != 0;
    if ( v16 != 0 )
    {
      v28 = __rdtsc();
      nIterationsa = g_VProfCurrentProfile.m_TargetThreadId;
      if ( nIterationsa == ThreadGetCurrentId() )
      {
        SubNode = g_VProfCurrentProfile.m_pCurNode;
        if ( SubNode->m_pszName != "CWorkThread -- Sleep" )
        {
          SubNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CWorkThread -- Sleep", 0, "Sleeping", 4);
          g_VProfCurrentProfile.m_pCurNode = SubNode;
        }
        v31 = &g_VProfCurrentProfile.m_pBudgetGroups[SubNode->m_BudgetGroupID];
        v31->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      v29 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v29 - v28 + __rdtsc();
    }
    CThreadSyncObject::Wait((v2 + 288), 0x32u);
    if ( !v17 )
      goto LABEL_2;
    v18 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v19 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v19 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          v32 = g_VProfCurrentProfile.m_pCurNode;
          v33 = v32->m_pParent;
          if ( v33 != 0 )
          {
            g_VProfCurrentProfile.m_pCurNode = v33;
            v32 = v33;
          }
        }
        else
        {
          v32 = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = v32 == &g_VProfCurrentProfile.m_Root;
      }
    }
    v20 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v20 - v18 + __rdtsc();
  }
  while ( *(this + 400) == 0 );
LABEL_32:
  CThreadEvent::Set((v2 + 288));
  v21 = *(this + 49);
  *(this + 401) = 1;
  _InterlockedSub((v21 + 280), 1u);
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
  __int128 v17; // rt0
  int v18; // r13d
  volatile signed __int64 *v19; // r14
  __int64 v20; // rdx
  volatile signed __int64 *v21; // r8
  __int128 v22; // rt0
  __int128 v23; // rt0
  int m_enabled; // r10d
  unsigned __int64 v25; // r12
  ThreadId_t v26; // r14
  uint64 v27; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v29; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v33; // rax
  signed __int64 v34; // [rsp+8h] [rbp-38h]

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
      v34 = v14;
      v16 = v15;
      if ( v15 != 0 )
      {
        while ( 1 )
        {
          v12 = (DWORD2(v15) - 1) | v12 & 0xFFFFFFFF00000000LL;
          v17 = v15;
          if ( _InterlockedCompareExchange128((v14 + 48), v12, *v15, &v17) != 0 )
            break;
          _mm_pause();
          v15 = *(v14 + 48);
          v16 = v15;
          if ( v15 == 0 )
            goto LABEL_38;
        }
      }
      else
      {
LABEL_38:
        v16 = operator new(0x10u);
      }
      if ( v16 != -8LL )
        v16[1] = pWorkItem;
      v18 = 0;
      *v16 = v34;
      v19 = (v34 + 16);
      while ( 1 )
      {
        v20 = *(v34 + 24);
        v21 = *(v34 + 16);
        if ( v34 == _InterlockedCompareExchange64(v21, v16, v34) )
          break;
        *&v22 = v21;
        *(&v22 + 1) = v20;
        _InterlockedCompareExchange128(v19, v20 + 1, *v21, &v22);
        if ( ++v18 > 9999999
          && AssertMsg_ConditionFailed(
               &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
               "CTSQueue corruption") != 0 )
        {
          __debugbreak();
        }
      }
      *&v23 = v21;
      *(&v23 + 1) = v20;
      _InterlockedCompareExchange128(v19, v20 + 1, v16, &v23);
      _InterlockedAdd((v34 + 32), 1u);
      if ( *(this + 420) != 0 || *(this + 104) != 0 )
        return 1;
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v10 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
        v29 = __rdtsc();
        if ( m_TargetThreadId == ThreadGetCurrentId() )
        {
          m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
          if ( m_pCurNode->m_pszName != "SetEvent()" )
          {
            m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "SetEvent()", 0, "ThreadingMain", 4);
            g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
          }
          v33 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v33->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v29 + __rdtsc();
      }
      CThreadEvent::Set((this + 288));
      if ( !v10 )
        return 1;
      v25 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v26 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v26 == ThreadGetCurrentId() )
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
      v27 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v27 - v25 + __rdtsc();
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
  __int128 v17; // rt0
  __int128 v18; // rt0
  signed __int64 v19; // r12
  unsigned __int64 v20; // rcx
  __int128 v21; // rax
  _QWORD *v22; // r15
  __int128 v23; // rt0
  volatile signed __int64 *v24; // r9
  int v25; // r13d
  __int64 v26; // rdx
  volatile signed __int64 *v27; // rsi
  __int128 v28; // rt0
  char v29; // al
  __int128 v30; // rt0
  int v31; // r15d
  int v32; // ecx
  __int64 v33; // r10
  signed __int64 v34; // r12
  __int64 v35; // rax
  signed __int64 v36; // rbx
  __int128 v37; // rax
  signed __int64 *v38; // r13
  __int128 v39; // rt0
  int v40; // r12d
  volatile signed __int64 *v41; // r11
  __int64 v42; // rdx
  volatile signed __int64 *v43; // rsi
  __int128 v44; // rt0
  char v45; // al
  __int128 v46; // rt0
  signed __int64 *v47; // rax
  unsigned __int64 v48; // [rsp+10h] [rbp-50h]
  __int64 v49; // [rsp+18h] [rbp-48h]
  volatile signed __int64 *v50; // [rsp+20h] [rbp-40h]
  volatile signed __int64 *v51; // [rsp+28h] [rbp-38h]

  if ( GCSDK::CWorkThreadPool::sm_pWorkItemsCompletedSignal != 0 )
    (**GCSDK::CWorkThreadPool::sm_pWorkItemsCompletedSignal)(GCSDK::CWorkThreadPool::sm_pWorkItemsCompletedSignal);
  if ( *(this + 152) != 0 )
  {
    pthread_mutex_lock((this + 64));
    v4 = *(this + 21) + 1LL;
    if ( v4 == pWorkItem->m_ulSequenceNumber )
    {
      v19 = *(this + 7);
      *(this + 21) = v4;
      v20 = 0;
      v21 = *(v19 + 48);
      v22 = v21;
      if ( v21 != 0 )
      {
        while ( 1 )
        {
          v20 = (DWORD2(v21) - 1) | v20 & 0xFFFFFFFF00000000LL;
          v23 = v21;
          if ( _InterlockedCompareExchange128((v19 + 48), v20, *v21, &v23) != 0 )
            break;
          _mm_pause();
          v21 = *(v19 + 48);
          v22 = v21;
          if ( v21 == 0 )
            goto LABEL_53;
        }
      }
      else
      {
LABEL_53:
        v22 = operator new(0x10u);
      }
      if ( v22 != -8LL )
        v22[1] = pWorkItem;
      *v22 = v19;
      v24 = (v19 + 16);
      v25 = 0;
      while ( 1 )
      {
        v26 = *(v19 + 24);
        v27 = *(v19 + 16);
        if ( v19 == _InterlockedCompareExchange64(v27, v22, v19) )
          break;
        *&v28 = v27;
        *(&v28 + 1) = v26;
        _InterlockedCompareExchange128(v24, v26 + 1, *v27, &v28);
        if ( ++v25 > 9999999 )
        {
          v51 = v24;
          v29 = AssertMsg_ConditionFailed(
                  &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
                  "CTSQueue corruption");
          v24 = v51;
          if ( v29 != 0 )
            __debugbreak();
        }
      }
      *&v30 = v27;
      *(&v30 + 1) = v26;
      _InterlockedCompareExchange128(v24, v26 + 1, v22, &v30);
      _InterlockedAdd((v19 + 32), 1u);
      v31 = 0;
      v32 = *(this + 32);
      while ( v32 > 0 )
      {
        while ( 1 )
        {
          v33 = 8LL * v31;
          v34 = *(*(this + 17) + v33);
          v35 = *(this + 21) + 1LL;
          if ( v35 == *(v34 + 16) )
            break;
          if ( ++v31 >= v32 )
            goto LABEL_9;
        }
        *(this + 21) = v35;
        v36 = *(this + 7);
        v37 = *(v36 + 48);
        v48 = v48;
        v38 = v37;
        if ( v37 != 0 )
        {
          while ( 1 )
          {
            v48 = (DWORD2(v37) - 1) | v48 & 0xFFFFFFFF00000000LL;
            v39 = v37;
            if ( _InterlockedCompareExchange128((v36 + 48), v48, *v37, &v39) != 0 )
              break;
            _mm_pause();
            v37 = *(v36 + 48);
            v38 = v37;
            if ( v37 == 0 )
              goto LABEL_49;
          }
        }
        else
        {
LABEL_49:
          v47 = operator new(0x10u);
          v33 = 8LL * v31;
          v38 = v47;
        }
        if ( v38 != -8LL )
          v38[1] = v34;
        v40 = 0;
        *v38 = v36;
        v41 = (v36 + 16);
        while ( 1 )
        {
          v42 = *(v36 + 24);
          v43 = *(v36 + 16);
          if ( v36 == _InterlockedCompareExchange64(v43, v38, v36) )
            break;
          *&v44 = v43;
          *(&v44 + 1) = v42;
          _InterlockedCompareExchange128(v41, v42 + 1, *v43, &v44);
          if ( ++v40 > 9999999 )
          {
            v49 = v33;
            v50 = v41;
            v45 = AssertMsg_ConditionFailed(
                    &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
                    "CTSQueue corruption");
            v41 = v50;
            v33 = v49;
            if ( v45 != 0 )
              __debugbreak();
          }
        }
        *&v46 = v43;
        *(&v46 + 1) = v42;
        _InterlockedCompareExchange128(v41, v42 + 1, v38, &v46);
        _InterlockedAdd((v36 + 32), 1u);
        v32 = *(this + 32);
        if ( v32 > 0 )
        {
          if ( v31 != --v32 )
          {
            *(*(this + 17) + v33) = *(*(this + 17) + 8LL * v32);
            v32 = *(this + 32) - 1;
          }
          *(this + 32) = v32;
        }
        v31 = 0;
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
      *&v17 = v16;
      *(&v17 + 1) = v15;
      _InterlockedCompareExchange128(v13, v15 + 1, *v16, &v17);
      if ( ++v14 > 9999999
        && AssertMsg_ConditionFailed(
             &CTSQueue<GCSDK::CWorkItem *,false>::Push(CTSQueue<GCSDK::CWorkItem *,false>::Node_t *)::_assertionConstants,
             "CTSQueue corruption") != 0 )
      {
        __debugbreak();
      }
    }
    *&v18 = v16;
    *(&v18 + 1) = v15;
    _InterlockedCompareExchange128(v13, v15 + 1, v11, &v18);
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


