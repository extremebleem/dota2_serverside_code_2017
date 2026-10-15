
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTSListBase::Detach  (line 227, @0x00000000030bf440, libserver.so)  // inlines: ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause
// callers: CEntitySystem::~CEntitySystem, CEntitySystem::CEntitySystem, CUtlVectorBase<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, int> >::SetCount, GCSDK::CWorkThreadPool::CWorkThreadPool
TSLNodeBase_t *__fastcall CTSListBase::Detach(CTSListBase *const this)
{
  unsigned __int64 v1; // rcx
  TSLNodeBase_t *Next; // rsi
  TSLHead_t m_Head; // rt0

  v1 = 0;
  do
  {
    _mm_pause();
    Next = this->m_Head.value.Next;
    if ( this->m_Head.value.Next == 0 )
      break;
    v1 = *(&this->m_Head.value64x128 + 1) & 0xFFFF0000LL | v1 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_Head;
  }
  while ( _InterlockedCompareExchange128(this, v1, 0, &m_Head) == 0 );
  return Next;
}


// CTSSimpleList<CTempPackedFieldPathVec::SListElement>::~CTSSimpleList  (line 294, @0x0000000003129a10, libserver.so)  // inlines: Detach, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause, ~CTSListBase
void __fastcall CTSSimpleList<CTempPackedFieldPathVec::SListElement>::~CTSSimpleList(
        CTSSimpleList<CTempPackedFieldPathVec::SListElement> *const this)
{
  unsigned __int64 v1; // rcx
  TSLHead_t m_Head; // rt0

  v1 = 0;
  do
  {
    _mm_pause();
    if ( this->m_Head.value.Next == 0 )
      break;
    v1 = *(&this->m_Head.value64x128 + 1) & 0xFFFF0000LL | v1 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_Head;
  }
  while ( _InterlockedCompareExchange128(this, v1, 0, &m_Head) == 0 );
}


// CTSSimpleList<CTempFieldPathList::SListElement>::~CTSSimpleList  (line 294, @0x0000000003129aa0, libserver.so)  // inlines: Detach, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause, ~CTSListBase
void __fastcall CTSSimpleList<CTempFieldPathList::SListElement>::~CTSSimpleList(
        CTSSimpleList<CTempFieldPathList::SListElement> *const this)
{
  unsigned __int64 v1; // rcx
  TSLHead_t m_Head; // rt0

  v1 = 0;
  do
  {
    _mm_pause();
    if ( this->m_Head.value.Next == 0 )
      break;
    v1 = *(&this->m_Head.value64x128 + 1) & 0xFFFF0000LL | v1 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_Head;
  }
  while ( _InterlockedCompareExchange128(this, v1, 0, &m_Head) == 0 );
}


// CTSItemList<CEntityHandle>::Purge  (line 643, @0x00000000021b61b0, libserver.so)  // inlines: Detach, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause
// calls: operator delete
// callers: _GLOBAL__sub_I__unity_base_02.cpp
void __fastcall CTSItemList<CEntityHandle>::Purge(CTSItemList<CEntityHandle> *const this)
{
  unsigned __int64 v1; // rcx
  TSLNodeBase_t *Next; // rdi
  TSLHead_t m_Head; // rt0
  TSLNodeBase_t *v5; // rbx
  unsigned __int64 v6; // rcx
  TSLNodeBase_t *v7; // rdi
  TSLHead_t v8; // rt0
  TSLNodeBase_t *v9; // rbx

  v1 = 0;
  while ( 1 )
  {
    _mm_pause();
    Next = this->m_Head.value.Next;
    if ( this->m_Head.value.Next == 0 )
      break;
    v1 = *(&this->m_Head.value64x128 + 1) & 0xFFFF0000LL | v1 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_Head;
    if ( _InterlockedCompareExchange128(this, v1, 0, &m_Head) != 0 )
    {
      while ( 1 )
      {
        v5 = Next->Next;
        operator delete(Next);
        if ( v5 == 0 )
          break;
        Next = v5;
      }
      break;
    }
  }
  v6 = 0;
  while ( 1 )
  {
    _mm_pause();
    v7 = this->m_FreeList.m_Head.value.Next;
    if ( v7 == 0 )
      break;
    v6 = *(&this->m_FreeList.m_Head.value64x128 + 1) & 0xFFFF0000LL | v6 & 0xFFFFFFFF00000000LL;
    v8 = this->m_FreeList.m_Head;
    if ( _InterlockedCompareExchange128(&this->m_FreeList, v6, 0, &v8) != 0 )
    {
      while ( 1 )
      {
        v9 = v7->Next;
        operator delete(v7);
        if ( v9 == 0 )
          break;
        v7 = v9;
      }
      return;
    }
  }
}


// CTSQueue<CFunctor*, false>::~CTSQueue  (line 777, @0x0000000002095e10, libserver.so)  // inlines: Detach, FinishPush, InterlockedCompareExchangeNodeLink, Pop, Purge, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator--, ~CTSListBase
// calls: operator delete
// callers: CEntitySystem::CEntitySystem
void __fastcall CTSQueue<CFunctor *,false>::~CTSQueue(CTSQueue<CFunctor*,false> *const this)
{
  unsigned __int64 v1; // r14
  intp *p_sequence; // r13
  CTSQueue<CFunctor*,false>::NodeLink_t *i; // r12
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rdi
  CTSQueue<CFunctor*,false> *pNext; // rsi
  CFunctor *sequence; // r10
  __int128 v8; // rt0
  __int128 v9; // rt0
  __int128 v10; // rt0
  signed __int64 *Next; // rdi
  __int64 v12; // rdx
  CTSQueue<CFunctor*,false>::Node_t *v13; // rdi
  unsigned __int64 v14; // rcx
  TSLHead_t m_Head; // rt0

  p_sequence = &this->m_Head.value.sequence;
  for ( i = &this->m_Tail; ; _InterlockedCompareExchange128(i, *(&v9 + 1) + 1LL, pNext, &v9) )
  {
    while ( 1 )
    {
      do
      {
        pNode = this->m_Head.value.pNode;
        pNext = this->m_Head.value.pNode->pNext;
      }
      while ( pNext == 0 );
      if ( pNode == i->value.pNode )
        break;
      if ( this != pNext )
      {
        sequence = pNext->m_Head.value.sequence;
        *&v8 = this->m_Head.value.pNode;
        *(&v8 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(this, *p_sequence + 1, pNext, &v8) != 0 )
        {
          _InterlockedSub(&this->m_Count.m_value, 1u);
          pNode->elem = sequence;
          operator delete(pNode);
        }
      }
    }
    if ( this == pNext )
      break;
    *&v9 = this->m_Head.value.pNode;
    *(&v9 + 1) = i->value.sequence;
  }
  while ( 1 )
  {
    Next = this->m_FreeNodes.m_Head.value.Next;
    v1 = v1;
    v12 = *(&this->m_FreeNodes.m_Head.value64x128 + 1);
    if ( Next == 0 )
      break;
    while ( 1 )
    {
      v1 = (v12 - 1) | v1 & 0xFFFFFFFF00000000LL;
      *&v10 = Next;
      *(&v10 + 1) = v12;
      if ( _InterlockedCompareExchange128(&this->m_FreeNodes, v1, *Next, &v10) != 0 )
        break;
      _mm_pause();
      Next = this->m_FreeNodes.m_Head.value.Next;
      v12 = *(&this->m_FreeNodes.m_Head.value64x128 + 1);
      if ( Next == 0 )
        goto LABEL_13;
    }
    operator delete(Next);
  }
LABEL_13:
  v13 = this->m_Head.value.pNode;
  this->m_Tail.value.sequence = 0;
  this->m_Head.value.sequence = 0;
  operator delete(v13);
  this->m_Head.value.pNode = 0;
  v14 = 0;
  this->m_Tail.value.pNode = 0;
  do
  {
    _mm_pause();
    if ( this->m_FreeNodes.m_Head.value.Next == 0 )
      break;
    v14 = *(&this->m_FreeNodes.m_Head.value64x128 + 1) & 0xFFFF0000LL | v14 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_FreeNodes.m_Head;
  }
  while ( _InterlockedCompareExchange128(&this->m_FreeNodes, v14, 0, &m_Head) == 0 );
}


// CTSQueue<CFunctor*, false>::PushItem  (line 986, @0x00000000030c2440, libserver.so)  // inlines: CopyConstruct<CFunctor*>, FinishPush, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedIncrement, ThreadPause, operator++
// calls: AssertMsg_ConditionFailed, operator new
// callers: CEntitySystem::ExecuteQueuedCreation
// strings: "CTSQueue corruption"
// globals: CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
void __fastcall CTSQueue<CFunctor *,false>::PushItem(
        CTSQueue<CFunctor*,false> *const this,
        CFunctor *const *const init)
{
  unsigned __int64 v2; // rcx
  TSLHead_t m_Head; // rax
  CTSListBase *p_m_FreeNodes; // rdi
  signed __int64 Next; // r14
  TSLHead_t v7; // rt0
  CTSQueue<CFunctor*,false>::NodeLink_t *p_m_Tail; // r13
  int v9; // r12d
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  __int128 v12; // rt0
  __int128 v13; // rt0
  void *v14; // rax
  CFunctor *const *inita; // [rsp+8h] [rbp-38h]

  v2 = 0;
  m_Head = this->m_FreeNodes.m_Head;
  if ( m_Head.value.Next != 0 )
  {
    p_m_FreeNodes = &this->m_FreeNodes;
    Next = m_Head.value.Next;
    while ( 1 )
    {
      v2 = (m_Head.value32.DepthAndSequence - 1) | v2 & 0xFFFFFFFF00000000LL;
      v7 = m_Head;
      if ( _InterlockedCompareExchange128(p_m_FreeNodes, v2, m_Head.value.Next->Next, &v7) != 0 )
        break;
      _mm_pause();
      m_Head = this->m_FreeNodes.m_Head;
      Next = m_Head.value.Next;
      if ( m_Head.value.Next == 0 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    inita = init;
    v14 = operator new(0x10u);
    init = inita;
    Next = v14;
  }
  if ( Next != -8 )
    *(Next + 8) = *init;
  *Next = this;
  p_m_Tail = &this->m_Tail;
  v9 = 0;
  while ( 1 )
  {
    sequence = this->m_Tail.value.sequence;
    pNode = this->m_Tail.value.pNode;
    if ( this == _InterlockedCompareExchange64(pNode, Next, this) )
      break;
    *&v12 = pNode;
    *(&v12 + 1) = sequence;
    _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v12);
    if ( ++v9 > 9999999
      && AssertMsg_ConditionFailed(
           &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
           "CTSQueue corruption") != 0 )
    {
      __debugbreak();
    }
  }
  *&v13 = pNode;
  *(&v13 + 1) = sequence;
  _InterlockedCompareExchange128(p_m_Tail, sequence + 1, Next, &v13);
  _InterlockedAdd(&this->m_Count.m_value, 1u);
}


// CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)>::EndPeek_Replace  (line 1324, @0x0000000002f80690, libserver.so)
void __fastcall CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob,CUtlMemoryPoolBase::CBlob,CUtlMemoryPoolBase::CBlob,&CUtlMemoryPoolBase::CBlob::m_pNext>::EndPeek_Replace(
        CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob,CUtlMemoryPoolBase::CBlob,CUtlMemoryPoolBase::CBlob,((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)> *const this,
        CUtlMemoryPoolBase::CBlob *pPeeked)
{
  if ( pPeeked != 0 )
    this->m_pPop = pPeeked;
}


