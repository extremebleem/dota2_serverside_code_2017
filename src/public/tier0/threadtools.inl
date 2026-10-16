
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CThreadRWLock_FastRead::~CThreadRWLock_FastRead  (line 2307, @0x0000000002373550, libserver.so)  // inlines: ~CThreadEvent
// calls: CThreadSyncObject::~CThreadSyncObject(), CThreadSemaphore::~CThreadSemaphore()
void __fastcall CThreadRWLock_FastRead::~CThreadRWLock_FastRead(CThreadRWLock_FastRead *const this)
{
  *(this + 33) = &off_4094AA0;
  CThreadSyncObject::~CThreadSyncObject((this + 264));
  *(this + 17) = &off_4094AA0;
  CThreadSyncObject::~CThreadSyncObject((this + 136));
  CThreadSemaphore::~CThreadSemaphore((this + 8));
}


// CThreadMutex::~CThreadMutex  (line 3110, @0x0000000001eebc10, libserver.so)
// calls: pthread_mutex_destroy
void __fastcall CThreadMutex::~CThreadMutex(CThreadMutex *const this)
{
  pthread_mutex_destroy(&this->m_Mutex);
}


// CThreadSpinRWLock::LockForWrite  (line 3428, @0x00000000030bf480, libserver.so)  // inlines: AssignIf, ThreadInterlockedAssignIf128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator++
// calls: ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long)
// callers: CEntitySystem::AddEntityIOEvent, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::AddString, CEntitySystem::AllocPooledString, MakeEntitySystemString, CEntitySystem::UnserializeForPrecache
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CThreadSpinRWLock::LockForWrite(CThreadSpinRWLock *const this)
{
  __int64 CurrentId; // rsi
  __int128 v3; // rt0

  CurrentId = ThreadGetCurrentId();
  _InterlockedAdd(&this->m_nWriters.m_value, 1u);
  if ( this->m_lockInfo.m_nReaders > 0
    || this->m_lockInfo.m_writerId != 0 && CurrentId != this->m_lockInfo.m_writerId
    || (v3 = 0u, _InterlockedCompareExchange128(this, 0, CurrentId, &v3) == 0) )
  {
    _mm_pause();
    CThreadSpinRWLock::SpinLockForWrite(this, CurrentId);
  }
}


