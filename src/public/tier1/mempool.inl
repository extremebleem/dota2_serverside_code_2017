
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlMemoryPool<groundlink_t>::~CUtlMemoryPool  (line 131, @0x0000000002305fc0, libserver.so)
// calls: CUtlMemoryPoolBase::~CUtlMemoryPoolBase
void __fastcall CUtlMemoryPool<groundlink_t>::~CUtlMemoryPool(CUtlMemoryPool<groundlink_t> *const this)
{
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(this);
}


// CUtlMemoryPool<touchlink_t>::~CUtlMemoryPool  (line 131, @0x0000000002305fd0, libserver.so)
// calls: CUtlMemoryPoolBase::~CUtlMemoryPoolBase
void __fastcall CUtlMemoryPool<touchlink_t>::~CUtlMemoryPool(CUtlMemoryPool<touchlink_t> *const this)
{
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(this);
}


// CUtlMemoryPool<SoundCommand_t>::~CUtlMemoryPool  (line 131, @0x00000000023aa9f0, libserver.so)
// calls: CUtlMemoryPoolBase::~CUtlMemoryPoolBase
void __fastcall CUtlMemoryPool<SoundCommand_t>::~CUtlMemoryPool(CUtlMemoryPool<SoundCommand_t> *const this)
{
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(this);
}


// CUtlMemoryPool<CSoundPatch>::~CUtlMemoryPool  (line 131, @0x00000000023aaa00, libserver.so)
// calls: CUtlMemoryPoolBase::~CUtlMemoryPoolBase
void __fastcall CUtlMemoryPool<CSoundPatch>::~CUtlMemoryPool(CUtlMemoryPool<CSoundPatch> *const this)
{
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(this);
}


// CUtlMemoryPool<CShortPathProbe>::~CUtlMemoryPool  (line 131, @0x00000000026a0680, libserver.so)
// calls: CUtlMemoryPoolBase::~CUtlMemoryPoolBase
void __fastcall CUtlMemoryPool<CShortPathProbe>::~CUtlMemoryPool(CUtlMemoryPool<CShortPathProbe> *const this)
{
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(this);
}


// CUtlMemoryPool<TSPointerListNode_t>::~CUtlMemoryPool  (line 131, @0x0000000002f806a0, libserver.so)  // inlines: ~CUtlMemoryPoolBase
// calls: CUtlMemoryPoolBase::Clear
void __fastcall CUtlMemoryPool<TSPointerListNode_t>::~CUtlMemoryPool(CUtlMemoryPool<TSPointerListNode_t> *const this)
{
  CUtlMemoryPoolBase::Clear(this);
}


// CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> >::~CClassMemoryPool  (line 165, @0x0000000002e68b30, libserver.so)  // inlines: AlignValue<char*>, BeginPeek, CUtlMemory, CUtlRBTree, CallFunctor<CUtlMemoryPoolBase::CBlob, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda5&>, CallFunctor<CUtlMemoryPoolBase::FreeList_t, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4&>, Clear, Destruct<CDOTAItemDefinition>, Detach, Element, EndPeek_Detach, Find, FindInsertionPosition, Insert, InsertAt, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4; T = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE = CUtlMemoryPoolBase::FreeList_t; CONTAINER_TYPE = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::FreeList_t* volatile CUtlMemoryPoolBase::FreeList_t::*)&CUtlMemoryPoolBase::FreeList_t::pNext)]::__lambda0>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda4>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda5&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda5; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda0>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CDOTAItemDefinition; BASEMEMPOOL = CUtlMemoryPool<CDOTAItemDefinition>]::__lambda5>, LeftChild, Purge, ResetDbgInfo, RightChild, SetDefLessFunc<CUtlRBTree<void*, int> >, SetLessFunc, ThreadInterlockedExchangePointer, operator(), operator[], ~CUtlMemory, ~CUtlMemoryPool, ~CUtlRBTree
// calls: ThreadInterlockedExchange64, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::RemoveAll, CUtlMemoryPoolBase::InternalClear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemoryPoolBase::ResetAllocationCounts, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::NewNode, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::LinkToParent, CUtlMemory<UtlRBTreeNode_t<void*, int>, int>::Purge, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::~CUtlRBTree, std::terminate(void)
// globals: CDefOps<void *>::LessFunc(void * const&,void * const&)
void __fastcall CClassMemoryPool<CDOTAItemDefinition,CUtlMemoryPool<CDOTAItemDefinition>>::~CClassMemoryPool(
        CClassMemoryPool<CDOTAItemDefinition,CUtlMemoryPool<CDOTAItemDefinition> > *const this)
{
  volatile CUtlMemoryPoolBase::CBlob *p_m_pPop; // rbx
  _QWORD *v3; // rax
  CUtlMemoryPoolBase::CBlob *v4; // rdx
  CUtlMemoryPoolBase::FreeList_t *v5; // rax
  int i; // r13d
  CUtlMemoryPoolBase::FreeList_t *pNext; // rcx
  int m_Left; // eax
  int v9; // eax
  bool v10; // bl
  _QWORD *v11; // rax
  CUtlMemoryPoolBase::FreeList_t *v12; // rdx
  CUtlMemoryPoolBase::CBlob *j; // rax
  unsigned __int64 v14; // r14
  __int64 m_Root; // rax
  UtlRBTreeNode_t<void*,int> *m_pMemory; // rdx
  __int64 v17; // rbx
  __int64 v18; // r12
  CUtlMemoryPoolBase::CBlob *pDetachedBlobList; // [rsp+10h] [rbp-90h]
  CUtlMemoryPoolBase::FreeList_t *pDetachedFreeList; // [rsp+18h] [rbp-88h]
  CUtlMemoryPoolBase::CBlob *m_pNext; // [rsp+20h] [rbp-80h]
  CUtlMemoryPoolBase::FreeList_t *v22; // [rsp+28h] [rbp-78h]
  unsigned __int64 k; // [rsp+28h] [rbp-78h]
  void *pCopyFrom; // [rsp+30h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-68h] BYREF
  CUtlRBTree<void*,int,bool (*)(void* const&,void* const&),CUtlMemory<UtlRBTreeNode_t<void*,int>,int> > v26[2]; // [rsp+40h] [rbp-60h] BYREF

  p_m_pPop = &this->m_Blobs.m_pPop;
  while ( 1 )
  {
    pDetachedBlobList = ThreadInterlockedExchange64(p_m_pPop, 0);
    if ( pDetachedBlobList != 0 )
      break;
    if ( this->m_Blobs.m_pPush == p_m_pPop )
    {
      v26[0].m_Elements.m_pMemory = 0;
      v26[0].m_LessFunc = CDefOps<void *>::LessFunc;
      v26[0].m_Elements.m_nAllocationCount = 0;
      v26[0].m_Elements.m_nGrowSize = 0;
      v26[0].m_Root = -1;
      v26[0].m_NumElements = 0;
      v26[0].m_FirstFree = -1;
      v26[0].m_LastAlloc.index = -1;
      v26[0].m_pElements = 0;
      pDetachedFreeList = 0;
      goto LABEL_5;
    }
  }
  while ( 1 )
  {
    pDetachedFreeList = ThreadInterlockedExchange64(&this->m_FreeList.m_pPop, 0);
    if ( pDetachedFreeList != 0 )
      break;
    if ( this->m_FreeList.m_pPush == &this->m_FreeList.m_pPop )
      goto LABEL_9;
  }
  v11 = ThreadInterlockedExchange64(&this->m_FreeList, &this->m_FreeList.m_pPop);
  v12 = pDetachedFreeList;
  *v11 = 1;
  while ( 1 )
  {
    while ( v12->pNext == 0 )
      ;
    if ( v12->pNext == (&loc_0 + 1) )
      break;
    v12 = v12->pNext;
  }
  v12->pNext = 0;
LABEL_9:
  CUtlMemoryPoolBase::ResetAllocationCounts(this);
  v3 = ThreadInterlockedExchange64(&this->m_Blobs, p_m_pPop);
  v4 = pDetachedBlobList;
  *v3 = 1;
  while ( 1 )
  {
    while ( v4->m_pNext == 0 )
      ;
    if ( v4->m_pNext == (&loc_0 + 1) )
      break;
    v4 = v4->m_pNext;
  }
  v4->m_pNext = 0;
  v26[0].m_Elements.m_pMemory = 0;
  v26[0].m_Elements.m_nAllocationCount = 0;
  v26[0].m_Elements.m_nGrowSize = 0;
  v26[0].m_Root = -1;
  v26[0].m_NumElements = 0;
  v26[0].m_FirstFree = -1;
  v26[0].m_LastAlloc.index = -1;
  v26[0].m_pElements = 0;
  v26[0].m_LessFunc = CDefOps<void *>::LessFunc;
  if ( pDetachedFreeList != 0 )
  {
    v5 = pDetachedFreeList;
    for ( i = -1; ; i = v26[0].m_Root )
    {
      pNext = v5->pNext;
      pCopyFrom = v5;
      v22 = pNext;
      if ( i != -1 )
      {
        while ( 1 )
        {
          if ( v26[0].m_LessFunc(&pCopyFrom, &v26[0].m_Elements.m_pMemory[i].m_Data) != 0 )
          {
            m_Left = v26[0].m_Elements.m_pMemory[i].m_Left;
            v10 = 1;
            if ( m_Left == -1 )
              goto LABEL_21;
          }
          else
          {
            m_Left = v26[0].m_Elements.m_pMemory[i].m_Right;
            v10 = 0;
            if ( m_Left == -1 )
              goto LABEL_21;
          }
          i = m_Left;
        }
      }
      v10 = 0;
LABEL_21:
      v9 = CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::NewNode(
             v26,
             &pCopyFrom);
      CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::LinkToParent(
        v26,
        v9,
        i,
        v10);
      v5 = v22;
      ++v26[0].m_NumElements;
      if ( v22 == 0 )
        break;
    }
  }
  for ( j = pDetachedBlobList; ; j = m_pNext )
  {
    v14 = -this->m_nAlignment & (&j->m_NumBytes + this->m_nAlignment + 3);
    m_pNext = j->m_pNext;
    for ( k = v14 + j->m_NumBytes; k > v14; v14 += this->m_BlockSize )
    {
      m_Root = v26[0].m_Root;
      v25 = v14;
      if ( v26[0].m_Root == -1 )
      {
LABEL_38:
        (*(*v14 + 168LL))(v14);
      }
      else
      {
        m_pMemory = v26[0].m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = m_Root;
            v18 = m_Root;
            if ( v26[0].m_LessFunc(&v25, &m_pMemory[m_Root].m_Data) == 0 )
              break;
            m_pMemory = v26[0].m_Elements.m_pMemory;
            m_Root = v26[0].m_Elements.m_pMemory[v17].m_Left;
            if ( m_Root == -1 )
              goto LABEL_38;
          }
          if ( v26[0].m_LessFunc(&v26[0].m_Elements.m_pMemory[v18].m_Data, &v25) == 0 )
            break;
          m_pMemory = v26[0].m_Elements.m_pMemory;
          m_Root = v26[0].m_Elements.m_pMemory[v18].m_Right;
          if ( m_Root == -1 )
            goto LABEL_38;
        }
      }
    }
    if ( m_pNext == 0 )
      break;
  }
LABEL_5:
  CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::RemoveAll(v26);
  v26[0].m_FirstFree = -1;
  if ( (v26[0].m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<void *,int>,int>::Purge(&v26[0].m_Elements);
    v26[0].m_LastAlloc.index = -1;
    if ( (v26[0].m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<void *,int>,int>::Purge(&v26[0].m_Elements);
  }
  CUtlMemoryPoolBase::InternalClear(this, pDetachedBlobList, pDetachedFreeList);
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(this);
}


// CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> >::~CClassMemoryPool  (line 165, @0x0000000003236d50, libserver.so)  // inlines: AlignValue<char*>, BeginPeek, CUtlMemory, CUtlRBTree, CallFunctor<CUtlMemoryPoolBase::CBlob, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda5&>, CallFunctor<CUtlMemoryPoolBase::FreeList_t, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda4&>, Clear, Destruct<GCSDK::CNetPacket>, Detach, Element, EndPeek_Detach, Find, FindInsertionPosition, Insert, InsertAt, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda4&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda4; T = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE = CUtlMemoryPoolBase::FreeList_t; CONTAINER_TYPE = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::FreeList_t* volatile CUtlMemoryPoolBase::FreeList_t::*)&CUtlMemoryPoolBase::FreeList_t::pNext)]::__lambda0>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda4>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda5&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda5; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda0>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = GCSDK::CNetPacket; BASEMEMPOOL = CUtlMemoryPool<GCSDK::CNetPacket>]::__lambda5>, LeftChild, Purge, ResetDbgInfo, RightChild, SetDefLessFunc<CUtlRBTree<void*, int> >, SetLessFunc, ThreadInterlockedExchangePointer, operator(), operator[], ~CUtlMemory, ~CUtlMemoryPool, ~CUtlRBTree
// calls: ThreadInterlockedExchange64, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::RemoveAll, CUtlMemoryPoolBase::InternalClear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemoryPoolBase::ResetAllocationCounts, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::NewNode, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::LinkToParent, CUtlMemory<UtlRBTreeNode_t<void*, int>, int>::Purge, GCSDK::CNetPacket::~CNetPacket, std::terminate(void)
// globals: CDefOps<void *>::LessFunc(void * const&,void * const&)
void __fastcall CClassMemoryPool<GCSDK::CNetPacket,CUtlMemoryPool<GCSDK::CNetPacket>>::~CClassMemoryPool(
        CClassMemoryPool<GCSDK::CNetPacket,CUtlMemoryPool<GCSDK::CNetPacket> > *const this)
{
  volatile CUtlMemoryPoolBase::CBlob *p_m_pPop; // rbx
  _QWORD *v3; // rax
  CUtlMemoryPoolBase::CBlob *v4; // rdx
  CUtlMemoryPoolBase::FreeList_t *v5; // rax
  int i; // r13d
  CUtlMemoryPoolBase::FreeList_t *pNext; // rcx
  int m_Left; // eax
  int v9; // eax
  bool v10; // bl
  _QWORD *v11; // rax
  CUtlMemoryPoolBase::FreeList_t *v12; // rdx
  CUtlMemoryPoolBase::CBlob *j; // rax
  GCSDK::CNetPacket *v14; // r14
  __int64 m_Root; // rax
  UtlRBTreeNode_t<void*,int> *m_pMemory; // rdx
  __int64 v17; // rbx
  __int64 v18; // r12
  CUtlMemoryPoolBase::CBlob *pDetachedBlobList; // [rsp+10h] [rbp-90h]
  CUtlMemoryPoolBase::FreeList_t *pDetachedFreeList; // [rsp+18h] [rbp-88h]
  CUtlMemoryPoolBase::CBlob *m_pNext; // [rsp+20h] [rbp-80h]
  CUtlMemoryPoolBase::FreeList_t *v22; // [rsp+28h] [rbp-78h]
  char *k; // [rsp+28h] [rbp-78h]
  void *pCopyFrom; // [rsp+30h] [rbp-70h] BYREF
  GCSDK::CNetPacket *v25; // [rsp+38h] [rbp-68h] BYREF
  CUtlRBTree<void*,int,bool (*)(void* const&,void* const&),CUtlMemory<UtlRBTreeNode_t<void*,int>,int> > v26[2]; // [rsp+40h] [rbp-60h] BYREF

  p_m_pPop = &this->m_Blobs.m_pPop;
  while ( 1 )
  {
    pDetachedBlobList = ThreadInterlockedExchange64(p_m_pPop, 0);
    if ( pDetachedBlobList != 0 )
      break;
    if ( this->m_Blobs.m_pPush == p_m_pPop )
    {
      v26[0].m_Elements.m_pMemory = 0;
      v26[0].m_LessFunc = CDefOps<void *>::LessFunc;
      v26[0].m_Elements.m_nAllocationCount = 0;
      v26[0].m_Elements.m_nGrowSize = 0;
      v26[0].m_Root = -1;
      v26[0].m_NumElements = 0;
      v26[0].m_FirstFree = -1;
      v26[0].m_LastAlloc.index = -1;
      v26[0].m_pElements = 0;
      pDetachedFreeList = 0;
      goto LABEL_5;
    }
  }
  while ( 1 )
  {
    pDetachedFreeList = ThreadInterlockedExchange64(&this->m_FreeList.m_pPop, 0);
    if ( pDetachedFreeList != 0 )
      break;
    if ( this->m_FreeList.m_pPush == &this->m_FreeList.m_pPop )
      goto LABEL_9;
  }
  v11 = ThreadInterlockedExchange64(&this->m_FreeList, &this->m_FreeList.m_pPop);
  v12 = pDetachedFreeList;
  *v11 = 1;
  while ( 1 )
  {
    while ( v12->pNext == 0 )
      ;
    if ( v12->pNext == (&loc_0 + 1) )
      break;
    v12 = v12->pNext;
  }
  v12->pNext = 0;
LABEL_9:
  CUtlMemoryPoolBase::ResetAllocationCounts(this);
  v3 = ThreadInterlockedExchange64(&this->m_Blobs, p_m_pPop);
  v4 = pDetachedBlobList;
  *v3 = 1;
  while ( 1 )
  {
    while ( v4->m_pNext == 0 )
      ;
    if ( v4->m_pNext == (&loc_0 + 1) )
      break;
    v4 = v4->m_pNext;
  }
  v4->m_pNext = 0;
  v26[0].m_Elements.m_pMemory = 0;
  v26[0].m_Elements.m_nAllocationCount = 0;
  v26[0].m_Elements.m_nGrowSize = 0;
  v26[0].m_Root = -1;
  v26[0].m_NumElements = 0;
  v26[0].m_FirstFree = -1;
  v26[0].m_LastAlloc.index = -1;
  v26[0].m_pElements = 0;
  v26[0].m_LessFunc = CDefOps<void *>::LessFunc;
  if ( pDetachedFreeList != 0 )
  {
    v5 = pDetachedFreeList;
    for ( i = -1; ; i = v26[0].m_Root )
    {
      pNext = v5->pNext;
      pCopyFrom = v5;
      v22 = pNext;
      if ( i != -1 )
      {
        while ( 1 )
        {
          if ( v26[0].m_LessFunc(&pCopyFrom, &v26[0].m_Elements.m_pMemory[i].m_Data) != 0 )
          {
            m_Left = v26[0].m_Elements.m_pMemory[i].m_Left;
            v10 = 1;
            if ( m_Left == -1 )
              goto LABEL_21;
          }
          else
          {
            m_Left = v26[0].m_Elements.m_pMemory[i].m_Right;
            v10 = 0;
            if ( m_Left == -1 )
              goto LABEL_21;
          }
          i = m_Left;
        }
      }
      v10 = 0;
LABEL_21:
      v9 = CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::NewNode(
             v26,
             &pCopyFrom);
      CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::LinkToParent(
        v26,
        v9,
        i,
        v10);
      v5 = v22;
      ++v26[0].m_NumElements;
      if ( v22 == 0 )
        break;
    }
  }
  for ( j = pDetachedBlobList; ; j = m_pNext )
  {
    v14 = (-this->m_nAlignment & (&j->m_NumBytes + this->m_nAlignment + 3));
    m_pNext = j->m_pNext;
    for ( k = v14 + j->m_NumBytes; k > v14; v14 = (v14 + this->m_BlockSize) )
    {
      m_Root = v26[0].m_Root;
      v25 = v14;
      if ( v26[0].m_Root == -1 )
      {
LABEL_38:
        GCSDK::CNetPacket::~CNetPacket(v14);
      }
      else
      {
        m_pMemory = v26[0].m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = m_Root;
            v18 = m_Root;
            if ( v26[0].m_LessFunc(&v25, &m_pMemory[m_Root].m_Data) == 0 )
              break;
            m_pMemory = v26[0].m_Elements.m_pMemory;
            m_Root = v26[0].m_Elements.m_pMemory[v17].m_Left;
            if ( m_Root == -1 )
              goto LABEL_38;
          }
          if ( v26[0].m_LessFunc(&v26[0].m_Elements.m_pMemory[v18].m_Data, &v25) == 0 )
            break;
          m_pMemory = v26[0].m_Elements.m_pMemory;
          m_Root = v26[0].m_Elements.m_pMemory[v18].m_Right;
          if ( m_Root == -1 )
            goto LABEL_38;
        }
      }
    }
    if ( m_pNext == 0 )
      break;
  }
LABEL_5:
  CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::RemoveAll(v26);
  v26[0].m_FirstFree = -1;
  if ( (v26[0].m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<void *,int>,int>::Purge(&v26[0].m_Elements);
    v26[0].m_LastAlloc.index = -1;
    if ( (v26[0].m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<void *,int>,int>::Purge(&v26[0].m_Elements);
  }
  CUtlMemoryPoolBase::InternalClear(this, pDetachedBlobList, pDetachedFreeList);
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(this);
}


// CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> >::Clear  (line 223, @0x00000000031c12a0, libserver.so)  // inlines: AlignValue<char*>, BeginPeek, CUtlMemory, CUtlRBTree, CallFunctor<CUtlMemoryPoolBase::CBlob, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda5&>, CallFunctor<CUtlMemoryPoolBase::FreeList_t, CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda4&>, Destruct<CHullTri>, Detach, Element, EndPeek_Detach, Find, FindInsertionPosition, Insert, InsertAt, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda4&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda4; T = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE = CUtlMemoryPoolBase::FreeList_t; CONTAINER_TYPE = CUtlMemoryPoolBase::FreeList_t; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::FreeList_t* volatile CUtlMemoryPoolBase::FreeList_t::*)&CUtlMemoryPoolBase::FreeList_t::pNext)]::__lambda0>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda4>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda5&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda5; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda0>, IterateDetachedList<CClassMemoryPool<T, BASEMEMPOOL>::Clear() [with T = CHullTri; BASEMEMPOOL = CUtlMemoryPool<CHullTri>]::__lambda5>, LeftChild, Purge, RemoveAll, ResetDbgInfo, RightChild, SetDefLessFunc<CUtlRBTree<void*, int> >, SetLessFunc, ThreadInterlockedExchangePointer, operator(), operator[], ~CHullTri, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: ThreadInterlockedExchange64, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::RemoveAll, CUtlMemoryPoolBase::InternalClear, CUtlMemoryPoolBase::ResetAllocationCounts, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::NewNode, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::LinkToParent, CUtlMemory<UtlRBTreeNode_t<void*, int>, int>::Purge, CUtlMemory<float const*, int>::Purge, CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >::~CUtlRBTree, _Unwind_Resume
// callers: CConvexHullBuilder::~CConvexHullBuilder, ConvexHull3DFromVerts, FitOBBToMesh
// globals: CDefOps<void *>::LessFunc(void * const&,void * const&)
void __fastcall CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri>>::Clear(
        CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> > *const this)
{
  volatile CUtlMemoryPoolBase::CBlob *p_m_pPop; // rbx
  _QWORD *v3; // rax
  CUtlMemoryPoolBase::CBlob *v4; // rdx
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> >::Clear::__lambda4::operator()::FreeList_t *v5; // rax
  int i; // r13d
  CUtlMemoryPoolBase::FreeList_t *pNext; // rcx
  int m_Left; // eax
  int v9; // eax
  bool v10; // bl
  _QWORD *v11; // rax
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> >::Clear::__lambda4::operator()::FreeList_t *v12; // rdx
  CUtlMemoryPoolBase::CBlob *j; // rax
  _DWORD *v14; // r14
  __int64 m_Root; // rax
  UtlRBTreeNode_t<void*,int> *m_pMemory; // rdx
  __int64 v17; // rbx
  __int64 v18; // r12
  bool v19; // zf
  CUtlMemoryPoolBase::CBlob *pDetachedBlobList; // [rsp+10h] [rbp-90h]
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> >::Clear::__lambda4::operator()::FreeList_t *pFreeList; // [rsp+18h] [rbp-88h]
  CUtlMemoryPoolBase::CBlob *m_pNext; // [rsp+20h] [rbp-80h]
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> >::Clear::__lambda4::operator()::FreeList_t *v23; // [rsp+28h] [rbp-78h]
  char *k; // [rsp+28h] [rbp-78h]
  void *pCopyFrom; // [rsp+30h] [rbp-70h] BYREF
  void *v26; // [rsp+38h] [rbp-68h] BYREF
  CUtlRBTree<void*,int,bool (*)(void* const&,void* const&),CUtlMemory<UtlRBTreeNode_t<void*,int>,int> > freeBlocks; // [rsp+40h] [rbp-60h] BYREF

  p_m_pPop = &this->m_Blobs.m_pPop;
  while ( 1 )
  {
    pDetachedBlobList = ThreadInterlockedExchange64(p_m_pPop, 0);
    if ( pDetachedBlobList != 0 )
      break;
    if ( this->m_Blobs.m_pPush == p_m_pPop )
    {
      freeBlocks.m_Elements.m_pMemory = 0;
      freeBlocks.m_LessFunc = CDefOps<void *>::LessFunc;
      freeBlocks.m_Elements.m_nAllocationCount = 0;
      freeBlocks.m_Elements.m_nGrowSize = 0;
      freeBlocks.m_Root = -1;
      freeBlocks.m_NumElements = 0;
      freeBlocks.m_FirstFree = -1;
      freeBlocks.m_LastAlloc.index = -1;
      freeBlocks.m_pElements = 0;
      pFreeList = 0;
      goto LABEL_5;
    }
  }
  while ( 1 )
  {
    pFreeList = ThreadInterlockedExchange64(&this->m_FreeList.m_pPop, 0);
    if ( pFreeList != 0 )
      break;
    if ( this->m_FreeList.m_pPush == &this->m_FreeList.m_pPop )
      goto LABEL_9;
  }
  v11 = ThreadInterlockedExchange64(&this->m_FreeList, &this->m_FreeList.m_pPop);
  v12 = pFreeList;
  *v11 = 1;
  while ( 1 )
  {
    while ( v12->pNext == 0 )
      ;
    if ( v12->pNext == (&loc_0 + 1) )
      break;
    v12 = v12->pNext;
  }
  v12->pNext = 0;
LABEL_9:
  CUtlMemoryPoolBase::ResetAllocationCounts(this);
  v3 = ThreadInterlockedExchange64(&this->m_Blobs, p_m_pPop);
  v4 = pDetachedBlobList;
  *v3 = 1;
  while ( 1 )
  {
    while ( v4->m_pNext == 0 )
      ;
    if ( v4->m_pNext == (&loc_0 + 1) )
      break;
    v4 = v4->m_pNext;
  }
  v4->m_pNext = 0;
  freeBlocks.m_Elements.m_pMemory = 0;
  freeBlocks.m_Elements.m_nAllocationCount = 0;
  freeBlocks.m_Elements.m_nGrowSize = 0;
  freeBlocks.m_Root = -1;
  freeBlocks.m_NumElements = 0;
  freeBlocks.m_FirstFree = -1;
  freeBlocks.m_LastAlloc.index = -1;
  freeBlocks.m_pElements = 0;
  freeBlocks.m_LessFunc = CDefOps<void *>::LessFunc;
  if ( pFreeList != 0 )
  {
    v5 = pFreeList;
    for ( i = -1; ; i = freeBlocks.m_Root )
    {
      pNext = v5->pNext;
      pCopyFrom = v5;
      v23 = pNext;
      if ( i != -1 )
      {
        while ( 1 )
        {
          if ( freeBlocks.m_LessFunc(&pCopyFrom, &freeBlocks.m_Elements.m_pMemory[i].m_Data) != 0 )
          {
            m_Left = freeBlocks.m_Elements.m_pMemory[i].m_Left;
            v10 = 1;
            if ( m_Left == -1 )
              goto LABEL_21;
          }
          else
          {
            m_Left = freeBlocks.m_Elements.m_pMemory[i].m_Right;
            v10 = 0;
            if ( m_Left == -1 )
              goto LABEL_21;
          }
          i = m_Left;
        }
      }
      v10 = 0;
LABEL_21:
      v9 = CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::NewNode(
             &freeBlocks,
             &pCopyFrom);
      CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::LinkToParent(
        &freeBlocks,
        v9,
        i,
        v10);
      v5 = v23;
      ++freeBlocks.m_NumElements;
      if ( v23 == 0 )
        break;
    }
  }
  for ( j = pDetachedBlobList; ; j = m_pNext )
  {
    v14 = (-this->m_nAlignment & (&j->m_NumBytes + this->m_nAlignment + 3));
    m_pNext = j->m_pNext;
    for ( k = v14 + j->m_NumBytes; k > v14; v14 = (v14 + this->m_BlockSize) )
    {
      m_Root = freeBlocks.m_Root;
      v26 = v14;
      if ( freeBlocks.m_Root == -1 )
      {
LABEL_38:
        v19 = (v14[5] & 0xC0000000) == 0;
        *v14 = 0;
        if ( v19 )
        {
          CUtlMemory<float const*,int>::Purge((v14 + 2));
          if ( (v14[5] & 0xC0000000) == 0 )
            CUtlMemory<float const*,int>::Purge((v14 + 2));
        }
      }
      else
      {
        m_pMemory = freeBlocks.m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = m_Root;
            v18 = m_Root;
            if ( freeBlocks.m_LessFunc(&v26, &m_pMemory[m_Root].m_Data) == 0 )
              break;
            m_pMemory = freeBlocks.m_Elements.m_pMemory;
            m_Root = freeBlocks.m_Elements.m_pMemory[v17].m_Left;
            if ( m_Root == -1 )
              goto LABEL_38;
          }
          if ( freeBlocks.m_LessFunc(&freeBlocks.m_Elements.m_pMemory[v18].m_Data, &v26) == 0 )
            break;
          m_pMemory = freeBlocks.m_Elements.m_pMemory;
          m_Root = freeBlocks.m_Elements.m_pMemory[v18].m_Right;
          if ( m_Root == -1 )
            goto LABEL_38;
        }
      }
    }
    if ( m_pNext == 0 )
      break;
  }
LABEL_5:
  CUtlRBTree<void *,int,bool (*)(void * const&,void * const&),CUtlMemory<UtlRBTreeNode_t<void *,int>,int>>::RemoveAll(&freeBlocks);
  freeBlocks.m_FirstFree = -1;
  if ( (freeBlocks.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<void *,int>,int>::Purge(&freeBlocks.m_Elements);
    freeBlocks.m_LastAlloc.index = -1;
    if ( (freeBlocks.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<void *,int>,int>::Purge(&freeBlocks.m_Elements);
  }
  CUtlMemoryPoolBase::InternalClear(this, pDetachedBlobList, pFreeList);
}


