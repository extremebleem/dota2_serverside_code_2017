
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::Run  (line 991, @0x000000000237fbb0, libserver.so)  // inlines: Abort, AtomicAdd, Begin, CAutoLockT, CMemberFuncProxy1, CMemberFuncProxyBase, CMemberFunctor1, CRefCountServiceBase, CRefCounted1, Clamp<int>, CreateFunctor<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >, void, int, int>, Description, End, GetRaw, InitialWorkerCount, IsFinished, Load, Lock, ParallelProcessFinished, ParallelProcessStarting, Process, ProcessingThread, QueueCall<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >, void, int, int>, Store, ThreadInterlockedDecrement, ThreadInterlockedExchangeAdd, ThreadInterlockedExchangeAdd64, ThreadInterlockedIncrement, Unlock, operator QueryCacheUpdateRecord_t*, operator int, operator++, operator+=, operator--, ~CAutoLockT
// calls: pthread_mutex_lock, pthread_mutex_unlock, CThreadMultiWaitEvent::Set(void), operator new, _Unwind_Resume, __stack_chk_fail
// callers: UpdateQueryCache
// globals: CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::ProcessingThread(int)
void __fastcall CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::Run(
        CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> > *const this)
{
  CJob **v2; // rax
  int m_nMaxJobThreads; // edi
  int v4; // r10d
  CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> *m_pController; // rcx
  int v6; // esi
  int m_nChunkSize; // r8d
  QueryCacheUpdateRecord_t *m_pLimit; // r9
  int m_nMaxParallel; // eax
  int v10; // eax
  __int64 v11; // rax
  void (*m_pfnBegin)(void); // rax
  CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> *v13; // rbx
  __int64 v14; // r14
  volatile int v15; // ebx
  CJob *v16; // r12
  void (*m_pfnEnd)(void); // rax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  CThreadMultiWaitEvent *m_pCompleteEvent; // rdi
  QueryCacheUpdateRecord_t *v21; // r14
  unsigned __int64 m_value; // rcx
  volatile int v23; // esi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r12
  QueryCacheUpdateRecord_t *v27; // rdi
  int v28; // eax
  __int64 v29; // r12
  int v30; // ebx
  IThreadPool *m_pThreadPool; // r14
  CJob **v32; // rdx
  int (**vptr_IRefCounted)(...); // rax
  int (*v34)(...); // r15
  _QWORD *v35; // rax
  CJob **v36; // rdx
  void *v37; // rsp
  int v38; // eax
  const char *m_szDescription; // [rsp+8h] [rbp-58h]
  CInterlockedInt *nJobThreads; // [rsp+10h] [rbp-50h] BYREF
  CJob **v41; // [rsp+18h] [rbp-48h]
  unsigned __int64 v42; // [rsp+28h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v2 = 0;
  m_nMaxJobThreads = this->m_nMaxJobThreads;
  v4 = m_nMaxJobThreads + 1;
  if ( m_nMaxJobThreads != 0 )
  {
    v37 = alloca(((8LL * m_nMaxJobThreads + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v2 = (&nJobThreads & 0xFFFFFFFFFFFFFFEFLL);
  }
  m_pController = this->m_pController;
  this->m_pJobs = v2;
  v6 = 1;
  LODWORD(nJobThreads) = 0;
  m_nChunkSize = m_pController->m_nChunkSize;
  m_pLimit = m_pController->m_pLimit;
  if ( m_nChunkSize > 0 )
    v6 = m_pController->m_nChunkSize;
  m_nMaxParallel = (v6 + m_pLimit - m_pController->m_pItems.m_value - 1) / v6;
  if ( m_nMaxParallel > m_pController->m_nMaxParallel )
    m_nMaxParallel = m_pController->m_nMaxParallel;
  v10 = m_nMaxParallel - 1;
  if ( v10 >= 0 )
  {
    if ( v10 <= m_nMaxJobThreads )
      m_nMaxJobThreads = v10;
    LODWORD(nJobThreads) = m_nMaxJobThreads;
  }
  v11 = m_pLimit - m_pController->m_pItems.m_value;
  if ( v4 <= 1 )
  {
    m_pController->m_nChunkSize = v11;
  }
  else if ( m_nChunkSize <= 0 )
  {
    v38 = (16 * v4 + v11 - 1) / (16 * v4);
    m_pController->m_nChunkSize = v38;
    if ( v38 <= 1 )
      m_pController->m_nChunkSize = 1;
    else
      m_pController->m_bReduceFinalChunkSize = 1;
  }
  m_pfnBegin = m_pController->m_ItemProcessor.m_pfnBegin;
  if ( m_pfnBegin != 0 )
    m_pfnBegin();
  if ( nJobThreads != 0 )
  {
    m_szDescription = this->m_pController->m_szDescription;
    v28 = nJobThreads;
    _InterlockedAdd(&this->m_nQueuedJobs.m_value, nJobThreads);
    if ( v28 > 0 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        m_pThreadPool = this->m_pThreadPool;
        v32 = &this->m_pJobs[v29];
        ++v30;
        ++v29;
        vptr_IRefCounted = this->m_pThreadPool->_vptr_IRefCounted;
        v41 = v32;
        v34 = vptr_IRefCounted[22];
        v35 = operator new(0x40u);
        v36 = v41;
        *v35 = off_40A3C30;
        v35[2] = off_40A3C68;
        v35[4] = CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::ProcessingThread;
        *(v35 + 6) = 1;
        v35[5] = 0;
        v35[6] = this;
        *(v35 + 14) = v30;
        v34(m_pThreadPool, v35, v36, m_szDescription, 8);
      }
      while ( v30 != nJobThreads );
    }
  }
  nJobThreads = &this->m_nActiveWorkers;
  _InterlockedAdd(&this->m_nActiveWorkers.m_value, 1u);
  v13 = this->m_pController;
  if ( v13->m_pItems.m_value < v13->m_pLimit )
  {
    _InterlockedAdd(&v13->m_nThreadsWorking.m_value, 1u);
    v21 = v13->m_pLimit;
    LODWORD(v41) = v13->m_nChunkSize;
LABEL_35:
    if ( !v13->m_bReduceFinalChunkSize )
      goto LABEL_46;
LABEL_36:
    if ( v41 <= 1 )
    {
LABEL_46:
      while ( 1 )
      {
        v24 = 32LL * v41;
        v25 = _InterlockedExchangeAdd64(&v13->m_pItems, v24);
        if ( v21 <= v25 )
          break;
LABEL_41:
        v26 = v25 + v24;
        if ( v21 < v26 )
          v26 = v21;
        if ( v25 >= v26 )
          goto LABEL_35;
        do
        {
          v27 = v25;
          v25 += 32LL;
          v13->m_ItemProcessor.m_pfnProcess(v27);
        }
        while ( v26 > v25 );
        if ( v13->m_bReduceFinalChunkSize )
          goto LABEL_36;
      }
    }
    else
    {
      m_value = v13->m_pItems.m_value;
      if ( v21 > m_value )
      {
        v23 = v13->m_nThreadsWorking.m_value;
        if ( m_value >= &v13->m_pLimit[-(v23 * v41)] )
          LODWORD(v41) = (v23 + ((v21 - m_value) >> 5) - 1) / v23;
        v24 = 32LL * v41;
        v25 = _InterlockedExchangeAdd64(&v13->m_pItems, v24);
        goto LABEL_41;
      }
    }
    _InterlockedSub(&v13->m_nThreadsWorking.m_value, 1u);
  }
  _InterlockedSub(&nJobThreads->m_value, 1u);
  if ( this->m_nQueuedJobs.m_value > 0 && this->m_nMaxJobThreads > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = this->m_pJobs[v14];
      if ( v16->m_status.m_value == 1 || v16->m_status.m_value == 2 || v16->m_status.m_value == 4 )
      {
        pthread_mutex_lock(&v16->m_mutex.m_Mutex);
        v18 = v16->m_status.m_value;
        if ( v18 <= 4 )
        {
          v19 = 1LL << v18;
          if ( (v19 & 0xD) == 0 && (v19 & 0x12) != 0 )
          {
            v16->m_status.m_value = (*(v16->_vptr_IRefCounted + 8))(v16, 1);
            (*(v16->_vptr_IRefCounted + 9))(v16);
            _mm_mfence();
            m_pCompleteEvent = v16->m_pCompleteEvent;
            if ( m_pCompleteEvent != 0 )
              CThreadMultiWaitEvent::Set(m_pCompleteEvent);
          }
        }
        pthread_mutex_unlock(&v16->m_mutex.m_Mutex);
      }
      ++v15;
      (*(this->m_pJobs[v14]->_vptr_IRefCounted + 1))(this->m_pJobs[v14]);
      if ( v15 >= this->m_nQueuedJobs.m_value )
        break;
      ++v14;
    }
    while ( this->m_nMaxJobThreads > v15 );
  }
  m_pfnEnd = this->m_pController->m_ItemProcessor.m_pfnEnd;
  if ( m_pfnEnd != 0 )
    m_pfnEnd();
}


// CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::ProcessingThread  (line 1041, @0x0000000002373110, libserver.so)  // inlines: AtomicAdd, Process, ThreadInterlockedDecrement, ThreadInterlockedExchangeAdd64, ThreadInterlockedIncrement, operator QueryCacheUpdateRecord_t*, operator int, operator++, operator--
// local variable allocation has failed, the output may be wrong!
void __fastcall CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::ProcessingThread(
        CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> > *const this,
        int nThreadIndex)
{
  __int64 v2; // rdx
  CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> *m_pController; // rbx
  QueryCacheUpdateRecord_t *m_pLimit; // r13
  int m_nChunkSize; // r14d
  QueryCacheUpdateRecord_t *volatile m_value; // rcx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  CInterlockedInt *p_m_nActiveWorkers; // [rsp+8h] [rbp-38h]

  p_m_nActiveWorkers = &this->m_nActiveWorkers;
  _InterlockedAdd(&this->m_nActiveWorkers.m_value, 1u);
  m_pController = this->m_pController;
  if ( m_pController->m_pItems.m_value < m_pController->m_pLimit )
  {
    _InterlockedAdd(&m_pController->m_nThreadsWorking.m_value, 1u);
    m_pLimit = m_pController->m_pLimit;
    m_nChunkSize = m_pController->m_nChunkSize;
LABEL_4:
    if ( !m_pController->m_bReduceFinalChunkSize )
      goto LABEL_15;
LABEL_5:
    if ( m_nChunkSize <= 1 )
    {
LABEL_15:
      while ( 1 )
      {
        v7 = 32LL * m_nChunkSize;
        v8 = _InterlockedExchangeAdd64(&m_pController->m_pItems, v7);
        if ( m_pLimit <= v8 )
          break;
LABEL_10:
        v9 = v8 + v7;
        if ( m_pLimit < v9 )
          v9 = m_pLimit;
        if ( v8 >= v9 )
          goto LABEL_4;
        do
        {
          v10 = v8;
          v8 += 32LL;
          (m_pController->m_ItemProcessor.m_pfnProcess)(v10, *&nThreadIndex, v2);
        }
        while ( v9 > v8 );
        if ( m_pController->m_bReduceFinalChunkSize )
          goto LABEL_5;
      }
    }
    else
    {
      m_value = m_pController->m_pItems.m_value;
      if ( m_pLimit > m_value )
      {
        *&nThreadIndex = m_pController->m_nThreadsWorking.m_value;
        v2 = 32LL * nThreadIndex * m_nChunkSize;
        if ( m_value >= (m_pController->m_pLimit - v2) )
        {
          v2 = ((nThreadIndex + m_pLimit - m_value - 1) >> 31);
          LODWORD(v2) = (nThreadIndex + m_pLimit - m_value - 1) % nThreadIndex;
          m_nChunkSize = (nThreadIndex + m_pLimit - m_value - 1) / nThreadIndex;
        }
        v7 = 32LL * m_nChunkSize;
        v8 = _InterlockedExchangeAdd64(&m_pController->m_pItems, v7);
        goto LABEL_10;
      }
    }
    _InterlockedSub(&m_pController->m_nThreadsWorking.m_value, 1u);
  }
  _InterlockedSub(&p_m_nActiveWorkers->m_value, 1u);
}


