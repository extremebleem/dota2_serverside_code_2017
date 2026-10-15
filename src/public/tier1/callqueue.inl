
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCallQueueT<CTSQueue<CFunctor*, false> >::Flush  (line 173, @0x0000000002095f90, libserver.so)  // inlines: CopyConstruct<CFunctor*>, FinishPush, FreeNode, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, operator++, operator--
// calls: AssertMsg_ConditionFailed, operator new
// callers: CEntitySystem::~CEntitySystem, CEntitySystem::CEntitySystem
// strings: "CTSQueue corruption"
// globals: CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
void __fastcall CCallQueueT<CTSQueue<CFunctor *,false>>::Flush(CCallQueueT<CTSQueue<CFunctor*,false> > *const this)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rcx
  TSLHead_t m_Head; // rax
  _QWORD *p_Next; // r15
  TSLHead_t v5; // rt0
  int v6; // r13d
  CTSQueue<CFunctor*,false>::NodeLink_t *p_m_Tail; // r14
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  intp v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // rt0
  __int128 v13; // rt0
  intp *p_sequence; // r13
  CTSQueue<CFunctor*,false>::Node_t *v15; // rsi
  CCallQueueT<CTSQueue<CFunctor*,false> > *pNext; // r8
  CFunctor *v17; // rdi
  __int128 v18; // rt0
  TSLHead_t v19; // rax
  __int64 v20; // rdx
  TSLHead_t v21; // rt0
  unsigned __int8 v22; // tt
  __int128 v23; // rt0

  v2 = 0;
  m_Head = this->m_queue.m_FreeNodes.m_Head;
  if ( m_Head.value.Next != 0 )
  {
    p_Next = &this->m_queue.m_FreeNodes.m_Head.value.Next->Next;
    while ( 1 )
    {
      v2 = (m_Head.value32.DepthAndSequence - 1) | v2 & 0xFFFFFFFF00000000LL;
      v5 = m_Head;
      if ( _InterlockedCompareExchange128(&this->m_queue.m_FreeNodes, v2, m_Head.value.Next->Next, &v5) != 0 )
        break;
      _mm_pause();
      m_Head = this->m_queue.m_FreeNodes.m_Head;
      p_Next = &m_Head.value.Next->Next;
      if ( m_Head.value.Next == 0 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    p_Next = operator new(0x10u);
  }
  if ( p_Next != -8LL )
    p_Next[1] = 0;
  v6 = 0;
  *p_Next = this;
  p_m_Tail = &this->m_queue.m_Tail;
  while ( 1 )
  {
    sequence = this->m_queue.m_Tail.value.sequence;
    pNode = this->m_queue.m_Tail.value.pNode;
    if ( this == _InterlockedCompareExchange64(pNode, p_Next, this) )
      break;
    v10 = sequence + 1;
    *&v12 = pNode;
    *(&v12 + 1) = sequence;
    _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v12);
    v11 = *(&v12 + 1);
    if ( ++v6 > 9999999
      && AssertMsg_ConditionFailed(
           &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
           "CTSQueue corruption",
           v11,
           v10) != 0 )
    {
      __debugbreak();
    }
  }
  *&v13 = pNode;
  *(&v13 + 1) = sequence;
  _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v13);
  _InterlockedAdd(&this->m_queue.m_Count.m_value, 1u);
  p_sequence = &this->m_queue.m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v15 = this->m_queue.m_Head.value.pNode;
          pNext = this->m_queue.m_Head.value.pNode->pNext;
        }
        while ( pNext == 0 );
        if ( v15 != p_m_Tail->value.pNode )
          break;
        if ( this == pNext )
          return;
        *&v23 = this->m_queue.m_Head.value.pNode;
        *(&v23 + 1) = this->m_queue.m_Tail.value.sequence;
        _InterlockedCompareExchange128(&this->m_queue.m_Tail, *(&v23 + 1) + 1LL, pNext, &v23);
      }
      if ( this != pNext )
      {
        v17 = pNext->m_queue.m_Head.value.sequence;
        *&v18 = this->m_queue.m_Head.value.pNode;
        *(&v18 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(this, *p_sequence + 1, pNext, &v18) != 0 )
          break;
      }
    }
    _InterlockedSub(&this->m_queue.m_Count.m_value, 1u);
    v15->elem = v17;
    v1 = v1;
    while ( 1 )
    {
      v19 = this->m_queue.m_FreeNodes.m_Head;
      v1 = (v19.value32.DepthAndSequence + 65537) | v1 & 0xFFFFFFFF00000000LL;
      v15->pNext = v19.value.Next;
      v21 = v19;
      v22 = _InterlockedCompareExchange128(&this->m_queue.m_FreeNodes, v1, v15, &v21);
      v20 = *(&v21.value64x128 + 1);
      if ( v22 != 0 )
        break;
      _mm_pause();
    }
    if ( v17 == 0 )
      break;
    (*(v17->_vptr_IRefCounted + 1))(v17, v15, v20, v1);
  }
}


// CCallQueueT<CTSQueue<CFunctor*, false> >::QueueFunctorInternal  (line 206, @0x00000000020961b0, libserver.so)  // inlines: CopyConstruct<CFunctor*>, FinishPush, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedIncrement, ThreadPause, operator++
// calls: AssertMsg_ConditionFailed, operator new
// callers: CEntity2SaveRestore::EntityPatchWrite
// strings: "CTSQueue corruption"
// globals: CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
void __fastcall CCallQueueT<CTSQueue<CFunctor *,false>>::QueueFunctorInternal(
        CCallQueueT<CTSQueue<CFunctor*,false> > *const this,
        CFunctor *pFunctor)
{
  CTSListBase value64x128; // rax
  unsigned __int64 v5; // rcx
  _QWORD *p_Next; // r14
  TSLHead_t m_Head; // rt0
  CTSQueue<CFunctor*,false>::NodeLink_t *p_m_Tail; // r13
  int v9; // r12d
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  intp v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // rt0
  __int128 v15; // rt0

  if ( this->m_bNoQueue )
  {
    (*(pFunctor->_vptr_IRefCounted + 2))(pFunctor);
    (*(pFunctor->_vptr_IRefCounted + 1))(pFunctor);
  }
  else
  {
    value64x128 = this->m_queue.m_FreeNodes.m_Head.value64x128;
    v5 = 0;
    p_Next = &value64x128.m_Head.value.Next->Next;
    if ( value64x128.m_Head.value.Next != 0 )
    {
      while ( 1 )
      {
        v5 = (value64x128.m_Head.value32.DepthAndSequence - 1) | v5 & 0xFFFFFFFF00000000LL;
        m_Head = value64x128.m_Head;
        if ( _InterlockedCompareExchange128(
               &this->m_queue.m_FreeNodes,
               v5,
               value64x128.m_Head.value.Next->Next,
               &m_Head) != 0 )
          break;
        _mm_pause();
        value64x128 = this->m_queue.m_FreeNodes.m_Head.value64x128;
        p_Next = &value64x128.m_Head.value.Next->Next;
        if ( value64x128.m_Head.value.Next == 0 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      p_Next = operator new(0x10u);
    }
    if ( p_Next != -8LL )
      p_Next[1] = pFunctor;
    *p_Next = this;
    p_m_Tail = &this->m_queue.m_Tail;
    v9 = 0;
    while ( 1 )
    {
      sequence = this->m_queue.m_Tail.value.sequence;
      pNode = this->m_queue.m_Tail.value.pNode;
      if ( this == _InterlockedCompareExchange64(pNode, p_Next, this) )
        break;
      v12 = sequence + 1;
      *&v14 = pNode;
      *(&v14 + 1) = sequence;
      _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v14);
      v13 = *(&v14 + 1);
      if ( ++v9 > 9999999
        && AssertMsg_ConditionFailed(
             &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
             "CTSQueue corruption",
             v13,
             v12) != 0 )
      {
        __debugbreak();
      }
    }
    *&v15 = pNode;
    *(&v15 + 1) = sequence;
    _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v15);
    _InterlockedAdd(&this->m_queue.m_Count.m_value, 1u);
  }
}


// CCallQueue::~CCallQueue  (line 229, @0x00000000023093f0, libserver.so)  // inlines: CopyConstruct<CFunctor*>, Detach, FinishPush, Flush, FreeNode, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Purge, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, operator++, operator--, ~CCallQueueT, ~CTSListBase, ~CTSQueue
// calls: AssertMsg_ConditionFailed, operator delete, operator new
// strings: "CTSQueue corruption"
// globals: CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
void __fastcall CCallQueue::~CCallQueue(CCallQueue *const this)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rcx
  TSLHead_t m_Head; // rax
  _QWORD *p_Next; // r14
  TSLHead_t v6; // rt0
  int v7; // r13d
  CTSQueue<CFunctor*,false>::NodeLink_t *p_m_Tail; // r9
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  __int128 v11; // rt0
  char v12; // al
  __int128 v13; // rt0
  CInterlockedInt *p_m_Count; // r13
  intp *p_sequence; // r14
  CTSQueue<CFunctor*,false>::Node_t *v16; // rsi
  CCallQueue *pNext; // r8
  CFunctor *v18; // rdi
  __int128 v19; // rt0
  TSLHead_t v20; // rax
  __int64 v21; // rdx
  TSLHead_t v22; // rt0
  unsigned __int8 v23; // tt
  CFunctor *v24; // r11
  __int128 v25; // rt0
  CTSQueue<CFunctor*,false>::Node_t *v26; // rdi
  CCallQueue *v27; // rsi
  __int128 v28; // rt0
  __int128 v29; // rt0
  __int128 v30; // rt0
  signed __int64 *Next; // rdi
  __int64 v32; // rdx
  CTSQueue<CFunctor*,false>::Node_t *v33; // rdi
  unsigned __int64 v34; // rcx
  TSLHead_t v35; // rt0
  CTSQueue<CFunctor*,false>::NodeLink_t *v36; // [rsp+0h] [rbp-70h]
  CTSQueue<CFunctor*,false>::NodeLink_t *v37; // [rsp+0h] [rbp-70h]
  CTSQueue<CFunctor*,false>::NodeLink_t *v38; // [rsp+0h] [rbp-70h]

  v3 = 0;
  m_Head = this->m_queue.m_FreeNodes.m_Head;
  if ( m_Head.value.Next != 0 )
  {
    p_Next = &this->m_queue.m_FreeNodes.m_Head.value.Next->Next;
    while ( 1 )
    {
      v3 = (m_Head.value32.DepthAndSequence - 1) | v3 & 0xFFFFFFFF00000000LL;
      v6 = m_Head;
      if ( _InterlockedCompareExchange128(&this->m_queue.m_FreeNodes, v3, m_Head.value.Next->Next, &v6) != 0 )
        break;
      _mm_pause();
      m_Head = this->m_queue.m_FreeNodes.m_Head;
      p_Next = &m_Head.value.Next->Next;
      if ( m_Head.value.Next == 0 )
        goto LABEL_39;
    }
  }
  else
  {
LABEL_39:
    p_Next = operator new(0x10u);
  }
  if ( p_Next != -8LL )
    p_Next[1] = 0;
  v7 = 0;
  *p_Next = this;
  p_m_Tail = &this->m_queue.m_Tail;
  while ( 1 )
  {
    sequence = this->m_queue.m_Tail.value.sequence;
    pNode = this->m_queue.m_Tail.value.pNode;
    if ( this == _InterlockedCompareExchange64(pNode, p_Next, this) )
      break;
    *&v11 = pNode;
    *(&v11 + 1) = sequence;
    _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v11);
    if ( ++v7 > 9999999 )
    {
      v36 = p_m_Tail;
      v12 = AssertMsg_ConditionFailed(
              &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
              "CTSQueue corruption");
      p_m_Tail = v36;
      if ( v12 != 0 )
        __debugbreak();
    }
  }
  *&v13 = pNode;
  *(&v13 + 1) = sequence;
  _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v13);
  p_m_Count = &this->m_queue.m_Count;
  _InterlockedAdd(&this->m_queue.m_Count.m_value, 1u);
  p_sequence = &this->m_queue.m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v16 = this->m_queue.m_Head.value.pNode;
          pNext = this->m_queue.m_Head.value.pNode->pNext;
        }
        while ( pNext == 0 );
        if ( v16 != p_m_Tail->value.pNode )
          break;
        if ( this == pNext )
          goto LABEL_24;
        *&v28 = this->m_queue.m_Head.value.pNode;
        *(&v28 + 1) = p_m_Tail->value.sequence;
        _InterlockedCompareExchange128(p_m_Tail, *(&v28 + 1) + 1LL, pNext, &v28);
      }
      if ( this != pNext )
      {
        v18 = pNext->m_queue.m_Head.value.sequence;
        *&v19 = this->m_queue.m_Head.value.pNode;
        *(&v19 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(this, *p_sequence + 1, pNext, &v19) != 0 )
          break;
      }
    }
    _InterlockedSub(&p_m_Count->m_value, 1u);
    v16->elem = v18;
    v2 = v2;
    while ( 1 )
    {
      v20 = this->m_queue.m_FreeNodes.m_Head;
      v2 = (v20.value32.DepthAndSequence + 65537) | v2 & 0xFFFFFFFF00000000LL;
      v16->pNext = v20.value.Next;
      v22 = v20;
      v23 = _InterlockedCompareExchange128(&this->m_queue.m_FreeNodes, v2, v16, &v22);
      v21 = *(&v22.value64x128 + 1);
      if ( v23 != 0 )
        break;
      _mm_pause();
    }
    if ( v18 == 0 )
      break;
    v37 = p_m_Tail;
    (*(v18->_vptr_IRefCounted + 1))(v18, v16, v21, v2);
    p_m_Tail = v37;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
LABEL_24:
        v26 = this->m_queue.m_Head.value.pNode;
        v27 = this->m_queue.m_Head.value.pNode->pNext;
      }
      while ( v27 == 0 );
      if ( v26 == p_m_Tail->value.pNode )
        break;
      if ( this != v27 )
      {
        v24 = v27->m_queue.m_Head.value.sequence;
        *&v25 = this->m_queue.m_Head.value.pNode;
        *(&v25 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(this, *p_sequence + 1, v27, &v25) != 0 )
        {
          v38 = p_m_Tail;
          _InterlockedSub(&p_m_Count->m_value, 1u);
          v26->elem = v24;
          operator delete(v26);
          p_m_Tail = v38;
        }
      }
    }
    if ( this == v27 )
      break;
    *&v29 = this->m_queue.m_Head.value.pNode;
    *(&v29 + 1) = p_m_Tail->value.sequence;
    _InterlockedCompareExchange128(p_m_Tail, *(&v29 + 1) + 1LL, v27, &v29);
  }
  while ( 1 )
  {
    v1 = v1;
    Next = this->m_queue.m_FreeNodes.m_Head.value.Next;
    v32 = *(&this->m_queue.m_FreeNodes.m_Head.value64x128 + 1);
    if ( Next == 0 )
      break;
    while ( 1 )
    {
      v1 = (v32 - 1) | v1 & 0xFFFFFFFF00000000LL;
      *&v30 = Next;
      *(&v30 + 1) = v32;
      if ( _InterlockedCompareExchange128(&this->m_queue.m_FreeNodes, v1, *Next, &v30) != 0 )
        break;
      _mm_pause();
      Next = this->m_queue.m_FreeNodes.m_Head.value.Next;
      v32 = *(&this->m_queue.m_FreeNodes.m_Head.value64x128 + 1);
      if ( Next == 0 )
        goto LABEL_34;
    }
    operator delete(Next);
  }
LABEL_34:
  v33 = this->m_queue.m_Head.value.pNode;
  this->m_queue.m_Tail.value.sequence = 0;
  this->m_queue.m_Head.value.sequence = 0;
  operator delete(v33);
  this->m_queue.m_Head.value.pNode = 0;
  v34 = 0;
  this->m_queue.m_Tail.value.pNode = 0;
  do
  {
    _mm_pause();
    if ( this->m_queue.m_FreeNodes.m_Head.value.Next == 0 )
      break;
    v34 = *(&this->m_queue.m_FreeNodes.m_Head.value64x128 + 1) & 0xFFFF0000LL | v34 & 0xFFFFFFFF00000000LL;
    v35 = this->m_queue.m_FreeNodes.m_Head;
  }
  while ( _InterlockedCompareExchange128(&this->m_queue.m_FreeNodes, v34, 0, &v35) == 0 );
}


