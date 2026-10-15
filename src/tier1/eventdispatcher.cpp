
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_eventdispatcher.cpp  (line 0, @0x0000000001a67060, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_eventdispatcher_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CEventDispatcher_Base::CEventDispatcher_Base  (line 12, @0x0000000002f71640, libserver.so)  // inlines: CThreadFastMutex
// callers: CRenderGameSystem::CRenderGameSystem
void __fastcall CEventDispatcher_Base::CEventDispatcher_Base(CEventDispatcher_Base *const this)
{
  this->m_Lock.m_ownerID = 0;
  this->m_Lock.m_depth = 0;
  this->m_pActiveIterators = 0;
}


// CEventDispatcher_Base::IterateListeners_Start  (line 18, @0x0000000002f71660, libserver.so)  // inlines: IsValidIndex
bool __fastcall CEventDispatcher_Base::IterateListeners_Start(
        CEventDispatcher_Base *const this,
        CEventDispatcher_Base::DelegateIterator_Base_t *const iterationStruct,
        bool bForward)
{
  const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t,CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int> > *pListeners; // rax
  int v4; // edx

  iterationStruct->pNext = this->m_pActiveIterators;
  this->m_pActiveIterators = iterationStruct;
  pListeners = iterationStruct->pListeners;
  iterationStruct->bIteratingForward = bForward;
  iterationStruct->bIsInListenerTelemetryScope = 0;
  if ( pListeners != 0 )
  {
    if ( bForward )
    {
      iterationStruct->nCurrent = 0;
      v4 = 0;
      return v4 < pListeners->m_Size;
    }
    v4 = pListeners->m_Size - 1;
    iterationStruct->nCurrent = v4;
    if ( v4 >= 0 )
      return v4 < pListeners->m_Size;
  }
  return 0;
}


// CEventDispatcher_Base::IterateListener  (line 46, @0x0000000002f716b0, libserver.so)  // inlines: Element, Find, IsValidIndex, operator[]
const CEventDispatcher_Base::EventListenerInfo_t *__fastcall CEventDispatcher_Base::IterateListener(
        CEventDispatcher_Base *const this,
        CEventDispatcher_Base::DelegateIterator_Base_t *const iterationStruct)
{
  int nCurrent; // edi
  const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t,CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int> > *pListeners; // rax
  bool bIteratingForward; // r9
  int m_Size; // r8d
  const CEventDispatcher_Base::EventListenerInfo_t *result; // rax
  int v7; // edi
  int *m_pMemory; // rcx
  int *v9; // rcx
  int v10; // edx

  nCurrent = iterationStruct->nCurrent;
  pListeners = iterationStruct->pListeners;
  if ( nCurrent < 0 || nCurrent >= pListeners->m_Size )
  {
    iterationStruct->bIsInListenerTelemetryScope = 0;
    return 0;
  }
  else
  {
    bIteratingForward = iterationStruct->bIteratingForward;
    m_Size = iterationStruct->skipListeners.m_Size;
    result = &pListeners->m_Memory.m_pMemory[nCurrent];
LABEL_4:
    while ( 1 )
    {
      v7 = bIteratingForward ? nCurrent + 1 : nCurrent - 1;
      iterationStruct->nCurrent = v7;
      if ( m_Size <= 0 )
        break;
      m_pMemory = iterationStruct->skipListeners.m_Memory.m_pMemory;
      nCurrent = iterationStruct->nCurrent;
      if ( *m_pMemory != nCurrent )
      {
        v9 = m_pMemory + 1;
        v10 = 0;
        while ( ++v10 != m_Size )
        {
          if ( *v9++ == nCurrent )
          {
            if ( v10 >= 0 )
              goto LABEL_4;
            goto LABEL_11;
          }
        }
        break;
      }
    }
LABEL_11:
    iterationStruct->bIsInListenerTelemetryScope = result->m_pszName != 0;
  }
  return result;
}


// CEventDispatcher_Base::IterateListeners_End  (line 86, @0x0000000002f71750, libserver.so)
void __fastcall CEventDispatcher_Base::IterateListeners_End(
        CEventDispatcher_Base *const this,
        CEventDispatcher_Base::DelegateIterator_Base_t *const iterationStruct)
{
  this->m_pActiveIterators = iterationStruct->pNext;
}


// CEventDispatcher_Base::FindInsertionPoint  (line 97, @0x0000000002f71760, libserver.so)  // inlines: operator[]
// callers: CEventDispatcher_Base::RegisterEventListener_Base
int __fastcall CEventDispatcher_Base::FindInsertionPoint(
        CEventDispatcher_Base *const this,
        const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t,CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int> > *const listeners,
        int nPriority)
{
  int v3; // edi
  int result; // eax
  int v5; // ecx

  v3 = listeners->m_Size - 1;
  if ( v3 < 0 )
    return 0;
  result = 0;
  do
  {
    while ( 1 )
    {
      v5 = (result + v3) >> 1;
      if ( listeners->m_Memory.m_pMemory[v5].m_nPriority < nPriority )
        break;
      result = v5 + 1;
      if ( v3 < v5 + 1 )
        return result;
    }
    v3 = v5 - 1;
  }
  while ( v5 - 1 >= result );
  return result;
}


// CEventDispatcher_Base::RegisterEventListener_Base  (line 116, @0x0000000002f71a10, libserver.so)  // inlines: AddToHead, InsertAfter, SetMementoFrom, operator=, operator[]
// calls: CEventDispatcher_Base::FindInsertionPoint, CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >::InsertBefore, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4ul, int> >::InsertBefore
// callers: CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract
void __fastcall CEventDispatcher_Base::RegisterEventListener_Base(
        CEventDispatcher_Base *const this,
        const CUtlAbstractDelegate *const delegate,
        unsigned int nDelegateParamCount,
        bool bDelegateReturnsVoid,
        CUtlVector<CEventDispatcher_Base::EventListenerInfo_t,CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int> > *const listeners,
        int nPriority,
        const char *pszName)
{
  uint8 v8; // r14
  int InsertionPoint; // eax
  __int64 v13; // rcx
  CEventDispatcher_Base::EventListenerInfo_t *v14; // rcx
  __int64 delta; // rdx
  __int64 v16; // rax
  CEventDispatcher_Base::DelegateIterator_Base_t *m_pActiveIterators; // rbx
  int nCurrent; // eax
  int v19; // edi
  int m_Size; // esi
  int *v21; // rcx
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rcx
  int j[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v8 = nDelegateParamCount;
  InsertionPoint = CEventDispatcher_Base::FindInsertionPoint(this, listeners, nPriority);
  j[0] = CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t,CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>>::InsertBefore(
           listeners,
           InsertionPoint);
  v13 = j[0];
  listeners->m_Memory.m_pMemory[v13].m_nPriority = nPriority;
  v14 = &listeners->m_Memory.m_pMemory[v13];
  delta = delegate->m_pFunction.__delta;
  v14->m_Delegate.m_pFunction.__pfn = delegate->m_pFunction.__pfn;
  v14->m_Delegate.m_pFunction.__delta = delta;
  v14->m_Delegate.m_pthis = delegate->m_pthis;
  v16 = j[0];
  listeners->m_Memory.m_pMemory[v16].m_nDelegateParamCount = v8;
  listeners->m_Memory.m_pMemory[v16].m_bDelegateReturnsVoid = bDelegateReturnsVoid;
  listeners->m_Memory.m_pMemory[v16].m_pszName = pszName;
  m_pActiveIterators = this->m_pActiveIterators;
  if ( m_pActiveIterators != 0 )
  {
    while ( 1 )
    {
      if ( m_pActiveIterators->pListeners != listeners )
        goto LABEL_3;
      nCurrent = m_pActiveIterators->nCurrent;
      v19 = j[0];
      if ( nCurrent >= j[0] )
        m_pActiveIterators->nCurrent = nCurrent + 1;
      m_Size = m_pActiveIterators->skipListeners.m_Size - 1;
      if ( m_Size < 0 )
      {
LABEL_13:
        CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,4ul,int>>::InsertBefore(&m_pActiveIterators->skipListeners, 0, j);
        m_pActiveIterators = m_pActiveIterators->pNext;
        if ( m_pActiveIterators == 0 )
          return;
      }
      else
      {
        v21 = &m_pActiveIterators->skipListeners.m_Memory.m_pMemory[m_Size];
        v22 = *v21;
        if ( v19 <= *v21 )
        {
          v23 = 4LL * m_Size - 4;
          while ( 1 )
          {
            *v21 = v22 + 1;
            if ( m_Size == 0 )
              goto LABEL_13;
            v24 = v23;
            v23 -= 4;
            v21 = (m_pActiveIterators->skipListeners.m_Memory.m_pMemory + v24);
            v22 = *v21;
            if ( *v21 < j[0] )
              goto LABEL_16;
            --m_Size;
          }
        }
        m_Size = m_pActiveIterators->skipListeners.m_Size;
LABEL_16:
        CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,4ul,int>>::InsertBefore(
          &m_pActiveIterators->skipListeners,
          m_Size,
          j);
LABEL_3:
        m_pActiveIterators = m_pActiveIterators->pNext;
        if ( m_pActiveIterators == 0 )
          return;
      }
    }
  }
}


// CEventDispatcher_Base::UnregisterEventListener_Base  (line 177, @0x0000000002f717b0, libserver.so)  // inlines: Element, IsEqual, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
// callers: CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >::SlotDeletionHandler, EventMapRegister
bool __fastcall CEventDispatcher_Base::UnregisterEventListener_Base(
        CEventDispatcher_Base *const this,
        const CUtlAbstractDelegate *const delegate,
        CUtlVector<CEventDispatcher_Base::EventListenerInfo_t,CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int> > *const listeners)
{
  int m_Size; // edx
  int v6; // ebx
  CEventDispatcher_Base::EventListenerInfo_t *i; // rdi
  void (*pfn)(detail::GenericClass *); // r8
  CEventDispatcher_Base::DelegateIterator_Base_t *j; // r12
  int nCurrent; // eax
  int v11; // r13d
  __int64 k; // rcx
  int *m_pMemory; // rsi
  __int64 v14; // r14
  int *v15; // rdi
  int v16; // eax
  int v17; // eax

  m_Size = listeners->m_Size;
  if ( m_Size <= 0 )
    return 0;
  v6 = 0;
  for ( i = listeners->m_Memory.m_pMemory; ; ++i )
  {
    if ( delegate->m_pthis == i->m_Delegate.m_pthis )
    {
      pfn = i->m_Delegate.m_pFunction.__pfn;
      if ( pfn == delegate->m_pFunction.__pfn
        && (i->m_Delegate.m_pFunction.__delta == delegate->m_pFunction.__delta || pfn == 0) )
      {
        break;
      }
    }
    if ( ++v6 == m_Size )
      return 0;
  }
  if ( m_Size - v6 - 1 > 0 )
  {
    memmove(i, &listeners->m_Memory.m_pMemory[v6 + 1], 40LL * (m_Size - v6 - 1));
    m_Size = listeners->m_Size;
  }
  listeners->m_Size = m_Size - 1;
  for ( j = this->m_pActiveIterators; j != 0; j = j->pNext )
  {
    if ( j->pListeners == listeners )
    {
      nCurrent = j->nCurrent;
      if ( nCurrent >= v6 )
        j->nCurrent = nCurrent - 1;
      v11 = j->skipListeners.m_Size;
      for ( k = 4LL * v11; --v11 >= 0; k = v14 )
      {
        m_pMemory = j->skipListeners.m_Memory.m_pMemory;
        v14 = k - 4;
        v15 = (m_pMemory + k - 4);
        v16 = *v15;
        if ( *v15 < v6 )
          break;
        if ( v6 == v16 )
        {
          v17 = j->skipListeners.m_Size;
          if ( v17 - v11 - 1 > 0 )
          {
            memmove(v15, m_pMemory + k, 4LL * (j->skipListeners.m_Size - v11 - 1));
            v17 = j->skipListeners.m_Size;
          }
          j->skipListeners.m_Size = v17 - 1;
        }
        else
        {
          *v15 = v16 - 1;
        }
      }
    }
  }
  return 1;
}


// CEventDispatcher_Base::GetListenerNames_Base  (line 227, @0x0000000002f71910, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
void __fastcall CEventDispatcher_Base::GetListenerNames_Base(
        CEventDispatcher_Base *const this,
        const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t,CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int> > *const listeners,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pResult)
{
  unsigned __int64 v5; // r12
  CUtlString *v6; // r13
  const char *v7; // rax
  CEventDispatcher_Base::EventListenerInfo_t *m_pMemory; // rax
  __int64 m_Size; // r13
  int v10; // eax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-50h]
  __int64 v12; // [rsp+8h] [rbp-48h]
  CUtlString v13; // [rsp+10h] [rbp-40h] BYREF

  if ( listeners->m_Size > 0 )
  {
    v5 = 0;
    v12 = 8 * (5LL * (listeners->m_Size - 1) + 5);
    p_m_Memory = &pResult->m_Memory;
    do
    {
      m_pMemory = listeners->m_Memory.m_pMemory;
      v13.m_pString = 0;
      CUtlString::Set(&v13, m_pMemory[v5 / 0x28].m_pszName);
      m_Size = pResult->m_Size;
      v10 = pResult->m_Size;
      if ( m_Size == pResult->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
        v10 = pResult->m_Size;
      }
      pResult->m_Size = v10 + 1;
      v6 = &pResult->m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
      {
        v6->m_pString = 0;
        v7 = CUtlString::Get(&v13);
        CUtlString::Set(v6, v7);
      }
      if ( v13.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v13);
      v5 += 40LL;
    }
    while ( v5 != v12 );
  }
}


