
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlSlot::~CUtlSlot  (line 604, @0x0000000001ec4800, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoLockT, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT
// calls: ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CUtlSignaller_Base*, int>::Purge
// callers: CLightComponent::CLightComponent, CDecalGameSystem::~CDecalGameSystem, CSoundOpGameSystem::~CSoundOpGameSystem, CSoundOpGameSystem::CSoundOpGameSystem, CEntityDebugGameSystem::CEntityDebugGameSystem, CEntityDebugGameSystem::~CEntityDebugGameSystem, CRenderGameSystem::~CRenderGameSystem, CDecalGameSystem::CDecalGameSystem, CRenderGameSystem::CRenderGameSystem, CLoopModeGameToolHooks::CLoopModeGameToolHooks, CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::CreateGameSystem, CDOTAChallengeSystem::~CDOTAChallengeSystem (52 total)
void __fastcall CUtlSlot::~CUtlSlot(CUtlSlot *const this)
{
  CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u> *v1; // r14
  signed __int64 CurrentId; // rsi
  __int64 v4; // r13
  int i; // r12d
  CUtlSignaller_Base *v6; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v8; // rdi
  bool v9; // zf

  v1 = &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>;
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_ConnectedSignallers.m_ownerID && _InterlockedCompareExchange64(v1, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(v1, CurrentId, 0);
  }
  else
  {
    ++this->m_ConnectedSignallers.m_depth;
  }
  v4 = 0;
  for ( i = 0; this->m_ConnectedSignallers.m_Size > i; ++i )
  {
    v6 = this->m_ConnectedSignallers.m_Memory.m_pMemory[v4];
    pfn = v6->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v8 = (v6->m_SlotDeletionDelegate.m_Closure.m_pthis + v6->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v8 - 1);
    ++v4;
    (pfn)(v8, this);
  }
  if ( --this->m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(v1, 0);
  v9 = (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignallers.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
    if ( (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
  }
}


// CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >::~CUtlSignaller_Identified  (line 648, @0x0000000001f89350, libserver.so)  // inlines: AssignIf, CAutoLockT, Destruct<CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t>, Destruct<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t>, Element, FastRemove, IsIdxValid, IsValidIndex, LeftChild, Lock, LockForWrite, Next, OnSignallerDeleted, OnSignallerDisconnectFromSlot, Purge, RemoveAll, SetLeftChild, SetRightChild, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, TryLockInline, Unlock, memcpy, operator++, operator==, operator[], ~CAutoLockT, ~CCopyableUtlVector, ~CEventDispatcher, ~CEventDispatcher_Identified, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT, ~ConnectedSlot_t, ~Node_t
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, CThreadSpinRWLock::SpinLockForWrite(ulong long), CThreadSpinRWLock::UnlockWrite(void), CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t, int>::Purge, operator delete, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, unsigned int>, unsigned int>::Purge, CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, int>::Purge, CUtlMemory<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, int>::Purge
// callers: CRenderGameSystem::~CRenderGameSystem, CRenderGameSystem::CRenderGameSystem
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::~CUtlSignaller_Identified(
        CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> > *const this)
{
  CThreadFastMutex *v2; // rbx
  CUtlSignaller_Base **m_pMemory; // rdi
  signed __int64 CurrentId; // rsi
  __int64 i; // r13
  CUtlSlot *pSlot; // r14
  signed __int64 v7; // rsi
  int m_Size; // ecx
  __int64 v9; // rax
  int j; // edx
  __int64 v11; // rdi
  signed __int64 v12; // rsi
  __int64 v13; // r13
  int k; // r12d
  CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> > *v15; // r14
  __int64 v16; // rsi
  int v17; // ecx
  volatile signed __int32 **v18; // r10
  int v19; // edx
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 **v21; // rax
  bool v22; // zf
  int v23; // r12d
  __int64 m; // r13
  CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t,int> *v25; // rbx
  int v26; // ecx
  CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::RefCountedSignallerPointer_t **v27; // rsi
  int v28; // ecx
  ThreadId_t m_writerId; // rax
  __int128 v30; // rt0
  unsigned int index; // esi
  __int64 m_nAllocationCount; // rdx
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // r12
  UtlRBTreeNode_t<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int> *v36; // r13
  uint32 m_nGrowSize; // eax
  CThreadFastMutex *generated_id_662; // [rsp+0h] [rbp-40h]
  CThreadFastMutex *generated_id_652; // [rsp+8h] [rbp-38h]
  CThreadSpinRWLock *generated_id_652a; // [rsp+8h] [rbp-38h]

  v2 = &this->m_ConnectedSlots.CThreadFastMutex;
  generated_id_652 = &this->m_ConnectedSlots.CThreadFastMutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_ConnectedSlots.m_ownerID && _InterlockedCompareExchange64(v2, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_652, CurrentId, 0);
  }
  else
  {
    ++this->m_ConnectedSlots.m_depth;
  }
  for ( i = 0; this->m_ConnectedSlots.m_Size > i; ++i )
  {
    pSlot = this->m_ConnectedSlots.m_Memory.m_pMemory[i].pSlot;
    v7 = ThreadGetCurrentId(m_pMemory);
    if ( v7 == pSlot->m_ConnectedSignallers.m_ownerID
      || _InterlockedCompareExchange64(
           &pSlot->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
           v7,
           0) == 0 )
    {
      ++pSlot->m_ConnectedSignallers.m_depth;
    }
    else
    {
      _mm_pause();
      CThreadFastMutex::Lock(&pSlot->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>, v7, 0);
    }
    m_Size = pSlot->m_ConnectedSignallers.m_Size;
    v9 = 0;
    for ( j = 0; j < m_Size; ++v9 )
    {
      m_pMemory = pSlot->m_ConnectedSignallers.m_Memory.m_pMemory;
      if ( m_pMemory[v9] == this && m_Size > 0 )
      {
        v26 = m_Size - 1;
        if ( j != v26 )
          m_pMemory[v9] = m_pMemory[v26];
        m_Size = pSlot->m_ConnectedSignallers.m_Size - 1;
        pSlot->m_ConnectedSignallers.m_Size = m_Size;
      }
      else
      {
        m_Size = pSlot->m_ConnectedSignallers.m_Size;
      }
      ++j;
    }
    if ( --pSlot->m_ConnectedSignallers.m_depth == 0 )
      ThreadInterlockedExchange64(
        &pSlot->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
        0);
  }
  if ( --this->m_ConnectedSlots.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_652, 0);
  generated_id_662 = &this->m_ConnectedSignalQueues.CThreadFastMutex;
  v12 = ThreadGetCurrentId(m_pMemory);
  if ( v12 != this->m_ConnectedSignalQueues.m_ownerID
    && _InterlockedCompareExchange64(&this->m_ConnectedSignalQueues.CThreadFastMutex, v12, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_662, v12, 0);
  }
  else
  {
    ++this->m_ConnectedSignalQueues.m_depth;
  }
  v13 = 0;
  for ( k = 0; this->m_ConnectedSignalQueues.m_Size > k; ++k )
  {
    v15 = this->m_ConnectedSignalQueues.m_Memory.m_pMemory[v13];
    generated_id_652a = &v15->m_ConnectedSignallers.CThreadSpinRWLock;
    v16 = ThreadGetCurrentId(v11);
    _InterlockedAdd(&v15->m_ConnectedSignallers.m_nWriters.m_value, 1u);
    if ( v15->m_ConnectedSignallers.m_lockInfo.m_nReaders > 0
      || (m_writerId = v15->m_ConnectedSignallers.m_lockInfo.m_writerId) != 0 && v16 != m_writerId
      || (v30 = 0u, _InterlockedCompareExchange128(generated_id_652a, 0, v16, &v30) == 0) )
    {
      _mm_pause();
      CThreadSpinRWLock::SpinLockForWrite(generated_id_652a, v16);
    }
    v17 = v15->m_ConnectedSignallers.m_Size;
    if ( v17 > 0 )
    {
      v18 = v15->m_ConnectedSignallers.m_Memory.m_pMemory;
      v19 = 0;
      v20 = *v18;
      v21 = v18 + 1;
      if ( this == **v18 )
      {
        v27 = v15->m_ConnectedSignallers.m_Memory.m_pMemory;
        v19 = 0;
LABEL_43:
        v28 = v17 - 1;
        if ( v19 != v28 )
        {
          *v27 = v18[v28];
          v28 = v15->m_ConnectedSignallers.m_Size - 1;
        }
        v15->m_ConnectedSignallers.m_Size = v28;
        *v20 = 0;
        if ( _InterlockedSub(v20 + 2, 1u) == 0 )
          operator delete(v20);
      }
      else
      {
        while ( ++v19 != v17 )
        {
          v20 = *v21;
          v27 = v21++;
          if ( this == *v20 )
            goto LABEL_43;
        }
      }
    }
    ++v13;
    CThreadSpinRWLock::UnlockWrite(generated_id_652a);
  }
  if ( --this->m_ConnectedSignalQueues.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_662, 0);
  v22 = (this->m_ConnectedSignalQueues.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignalQueues.m_Size = 0;
  if ( v22 )
  {
    CUtlMemory<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>> *,int>::Purge(&this->m_ConnectedSignalQueues.m_Memory);
    if ( (this->m_ConnectedSignalQueues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>> *,int>::Purge(&this->m_ConnectedSignalQueues.m_Memory);
  }
  v23 = this->m_ConnectedSlots.m_Size;
  for ( m = 32LL * v23 - 32; --v23 >= 0; m -= 32 )
  {
    v25 = (this->m_ConnectedSlots.m_Memory.m_pMemory + m);
    v22 = (v25[1].m_nGrowSize & 0xC0000000) == 0;
    v25->m_nAllocationCount = 0;
    if ( v22 )
    {
      CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::EventAndDelegate_t,int>::Purge(v25 + 1);
      if ( (v25[1].m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::EventAndDelegate_t,int>::Purge(v25 + 1);
    }
  }
  v22 = (this->m_ConnectedSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSlots.m_Size = 0;
  if ( v22 )
  {
    CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::ConnectedSlot_t,int>::Purge(&this->m_ConnectedSlots.m_Memory);
    if ( (this->m_ConnectedSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::ConnectedSlot_t,int>::Purge(&this->m_ConnectedSlots.m_Memory);
  }
  index = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LastAlloc.index;
  if ( index != -1 )
  {
    m_nAllocationCount = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount;
    v33 = 0;
    v34 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v34 < m_nAllocationCount && index >= v33 )
        {
          v35 = v34;
          v36 = &this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v34];
          if ( v33 != v36->m_Left )
          {
            v22 = (v36->m_Data.elem.m_Memory.m_nGrowSize & 0xC0000000) == 0;
            v36->m_Data.elem.m_Size = 0;
            if ( v22 )
            {
              CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&v36->m_Data.elem.m_Memory);
              if ( (v36->m_Data.elem.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&v36->m_Data.elem.m_Memory);
            }
            this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v35].m_Right = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_FirstFree;
            this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v35].m_Left = v33;
            index = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LastAlloc.index;
            this->m_Dispatcher.m_EventListenerMap.m_Tree.m_FirstFree = v33;
          }
        }
        if ( index == v33 )
          break;
        m_nAllocationCount = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount;
        v34 = ++v33;
        if ( v33 >= m_nAllocationCount )
          break;
      }
      while ( v33 != -1 );
    }
    this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Root = -1;
    this->m_Dispatcher.m_EventListenerMap.m_Tree.m_NumElements = 0;
  }
  v22 = (this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_Dispatcher.m_EventListenerMap.m_Tree.m_FirstFree = -1;
  if ( v22 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int>,unsigned int>::Purge(&this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements);
    m_nGrowSize = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_nGrowSize;
    this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LastAlloc.index = -1;
    if ( (m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int>,unsigned int>::Purge(&this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements);
  }
  else
  {
    this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LastAlloc.index = -1;
  }
}


// CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >::SlotDeletionHandler  (line 683, @0x0000000001f7a140, libserver.so)  // inlines: CAutoLockT, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t>, Element, FastRemove, Find, IsIdxValid, IsValidIndex, LeftChild, Lock, Node_t, Purge, RemoveAll, RightChild, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, UnregisterEventListener_Abstract, memcpy, operator(), operator[], ~CAutoLockT, ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ConnectedSlot_t, ~Node_t
// calls: ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), CEventDispatcher_Base::UnregisterEventListener_Base, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Purge, CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t, int>::Purge, _Unwind_Resume
void __fastcall CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::SlotDeletionHandler(
        CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> > *const this,
        CUtlSlot *pSlot)
{
  CThreadFastMutex *v2; // r15
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::ConnectedSlot_t *v5; // rdi
  signed __int64 CurrentId; // rsi
  int m_Size; // ecx
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::ConnectedSlot_t *m_pMemory; // rdx
  int v9; // esi
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::ConnectedSlot_t *v10; // rax
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::ConnectedSlot_t *v11; // r8
  signed __int64 v12; // r8
  int m_pthis; // ebx
  signed __int64 v14; // rsi
  unsigned int m_Root; // r14d
  UtlRBTreeNode_t<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int> *v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  uint32 v19; // eax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int> *v20; // rdx
  CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t,int> *v21; // rbx
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::ConnectedSlot_t *v25; // rcx
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::ConnectedSlot_t *v26; // rax
  CUtlSlot **v27; // rdx
  __int64 v28; // [rsp+0h] [rbp-90h]
  CThreadFastMutex *generated_id_685; // [rsp+8h] [rbp-88h]
  CUtlAbstractDelegate *delegate; // [rsp+18h] [rbp-78h]
  CEventDispatcher<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> > *p_m_Dispatcher; // [rsp+20h] [rbp-70h]
  __int64 v32; // [rsp+28h] [rbp-68h]
  int v33; // [rsp+30h] [rbp-60h]
  int j; // [rsp+34h] [rbp-5Ch]
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::ConnectedSlot_t *v35; // [rsp+38h] [rbp-58h]
  int v36; // [rsp+40h] [rbp-50h] BYREF
  int v37; // [rsp+48h] [rbp-48h]
  CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int> v38[4]; // [rsp+50h] [rbp-40h] BYREF

  v2 = &this->m_ConnectedSlots.CThreadFastMutex;
  generated_id_685 = &this->m_ConnectedSlots.CThreadFastMutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_ConnectedSlots.m_ownerID && _InterlockedCompareExchange64(v2, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_685, CurrentId, 0);
  }
  else
  {
    ++this->m_ConnectedSlots.m_depth;
  }
  m_Size = this->m_ConnectedSlots.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_ConnectedSlots.m_Memory.m_pMemory;
    v9 = 0;
    v10 = m_pMemory + 1;
    if ( m_pMemory->pSlot == pSlot )
    {
      v35 = this->m_ConnectedSlots.m_Memory.m_pMemory;
      v28 = 0;
      v33 = 0;
LABEL_14:
      if ( v35->registeredDelegates.m_Size > 0 )
      {
        v32 = 0;
        p_m_Dispatcher = &this->m_Dispatcher;
        j = 0;
        do
        {
          delegate = &v35->registeredDelegates.m_Memory.m_pMemory[v32].abstractDelegate;
          m_pthis = delegate[1].m_pthis;
          v14 = ThreadGetCurrentId(v5);
          if ( v14 == this->m_Dispatcher.m_Lock.m_ownerID || _InterlockedCompareExchange64(p_m_Dispatcher, v14, 0) == 0 )
          {
            ++this->m_Dispatcher.m_Lock.m_depth;
          }
          else
          {
            _mm_pause();
            CThreadFastMutex::Lock(p_m_Dispatcher, v14, 0);
          }
          m_Root = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Root;
          v37 = 0;
          v38[0].m_pMemory = 0;
          v38[0].m_nAllocationCount = 0;
          v38[0].m_nGrowSize = 0;
          v36 = m_pthis;
          if ( m_Root == -1 )
          {
            v17 = 0xFFFFFFFFLL;
            v19 = 0;
          }
          else
          {
            v16 = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
            while ( 1 )
            {
              while ( 1 )
              {
                v17 = m_Root;
                v18 = m_Root;
                if ( !this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(&v36, &v16[v18].m_Data) )
                  break;
                v16 = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
                m_Root = v16[m_Root].m_Left;
                if ( m_Root == -1 )
                  goto LABEL_25;
              }
              if ( !this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(
                      &this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v18].m_Data,
                      &v36) )
                break;
              v16 = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
              m_Root = v16[v18].m_Right;
              if ( m_Root == -1 )
              {
LABEL_25:
                v17 = 0xFFFFFFFFLL;
                v19 = v38[0].m_nGrowSize & 0xC0000000;
                goto LABEL_26;
              }
            }
            v19 = v38[0].m_nGrowSize & 0xC0000000;
          }
LABEL_26:
          v37 = 0;
          if ( v19 == 0 )
          {
            CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(v38);
            if ( (v38[0].m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(v38);
          }
          if ( v17 < this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount
            && this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LastAlloc.index >= m_Root
            && m_Root != -1 )
          {
            v20 = &this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory[m_Root];
            if ( v20->m_Left != m_Root )
              CEventDispatcher_Base::UnregisterEventListener_Base(p_m_Dispatcher, delegate, &v20->m_Data.elem);
          }
          if ( --this->m_Dispatcher.m_Lock.m_depth == 0 )
            ThreadInterlockedExchange64(p_m_Dispatcher, 0);
          ++j;
          ++v32;
        }
        while ( v35->registeredDelegates.m_Size > j );
        m_pMemory = this->m_ConnectedSlots.m_Memory.m_pMemory;
      }
      v21 = (m_pMemory + v28);
      v22 = (*(&m_pMemory->registeredDelegates.m_Memory.m_nGrowSize + v28) & 0xC0000000) == 0;
      *(&m_pMemory->registeredDelegates.m_Size + v28) = 0;
      if ( v22 )
      {
        CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::EventAndDelegate_t,int>::Purge(v21 + 1);
        if ( (v21[1].m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::EventAndDelegate_t,int>::Purge(v21 + 1);
      }
      v23 = this->m_ConnectedSlots.m_Size;
      if ( v23 > 0 )
      {
        v24 = v23 - 1;
        if ( v33 != v24 )
        {
          v25 = this->m_ConnectedSlots.m_Memory.m_pMemory;
          v26 = &v25[v24];
          v27 = (&v25->pSlot + v28);
          *v27 = v26->pSlot;
          v27[1] = *&v26->registeredDelegates.m_Size;
          v27[2] = v26->registeredDelegates.m_Memory.m_pMemory;
          v27[3] = *&v26->registeredDelegates.m_Memory.m_nAllocationCount;
          v24 = this->m_ConnectedSlots.m_Size - 1;
        }
        this->m_ConnectedSlots.m_Size = v24;
      }
    }
    else
    {
      while ( ++v9 != m_Size )
      {
        v11 = v10;
        v5 = v10++;
        v12 = v11 - m_pMemory;
        if ( v10[-1].pSlot == pSlot )
        {
          v33 = v9;
          v35 = v5;
          v28 = v12;
          goto LABEL_14;
        }
      }
    }
  }
  if ( --this->m_ConnectedSlots.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_685, 0);
}


