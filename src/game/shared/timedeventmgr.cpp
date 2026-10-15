
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEventRegister::CEventRegister  (line 18, @0x00000000023ca270, libserver.so)
// callers: CNetworkTransmitComponent::SetUpdateInterval
void __fastcall CEventRegister::CEventRegister(CEventRegister *const this)
{
  this->m_bRegistered = 0;
  this->m_pEventMgr = 0;
}


// CEventRegister::~CEventRegister  (line 25, @0x00000000023dd970, libserver.so)
// calls: CEventRegister::Term
// callers: CNetworkTransmitComponent::~CNetworkTransmitComponent, CNetworkTransmitComponent::SetUpdateInterval
void __fastcall CEventRegister::~CEventRegister(CEventRegister *const this)
{
  CEventRegister::Term(this);
}


// CEventRegister::Init  (line 31, @0x00000000023dd980, libserver.so)
// calls: CEventRegister::Term
// callers: CNetworkTransmitComponent::SetUpdateInterval
void __fastcall CEventRegister::Init(
        CEventRegister *const this,
        CTimedEventMgr *pMgr,
        IEventRegisterCallback *pCallback)
{
  CEventRegister::Term(this);
  this->m_pEventMgr = pMgr;
  this->m_pCallback = pCallback;
}


// CEventRegister::Term  (line 39, @0x00000000023dd940, libserver.so)  // inlines: RemoveEvent
// calls: CTimedEventMgr::RemoveEvent
// callers: CEventRegister::~CEventRegister, CEventRegister::Init
void __fastcall CEventRegister::Term(CEventRegister *const this)
{
  if ( this->m_pEventMgr != 0 && this->m_bRegistered )
    CTimedEventMgr::RemoveEvent(this->m_pEventMgr, this);
}


// CEventRegister::SetUpdateInterval  (line 49, @0x00000000023e31c0, libserver.so)  // inlines: curtime
// calls: CTimedEventMgr::RegisterForNextEvent
// callers: CNetworkTransmitComponent::SetUpdateInterval
void __fastcall CEventRegister::SetUpdateInterval(CEventRegister *const this, double a2, float interval)
{
  CEventRegister *v3; // rsi
  CTimedEventMgr *m_pEventMgr; // rdi
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CEventRegister *v8; // [rsp-20h] [rbp-20h]

  v3 = this;
  m_pEventMgr = this->m_pEventMgr;
  if ( m_pEventMgr != 0 )
  {
    m_flCurrentTime = 0.0;
    v3->m_flUpdateInterval = *&a2;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v8 = v3;
          (m_pfnWarningFunc)(1, a2, 0.0);
          v3 = v8;
          *&a2 = v8->m_flUpdateInterval;
          m_pEventMgr = v8->m_pEventMgr;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    v3->m_flNextEventTime = *&a2 + m_flCurrentTime;
    CTimedEventMgr::RegisterForNextEvent(m_pEventMgr, v3);
  }
}


// CEventRegister::StopUpdates  (line 64, @0x00000000023dd9b0, libserver.so)  // inlines: RemoveEvent
// calls: CTimedEventMgr::RemoveEvent
// callers: CNetworkTransmitComponent::SetUpdateInterval
void __fastcall CEventRegister::StopUpdates(CEventRegister *const this)
{
  if ( this->m_pEventMgr != 0 && this->m_bRegistered )
    CTimedEventMgr::RemoveEvent(this->m_pEventMgr, this);
}


// CEventRegister::Reregister  (line 74, @0x00000000023e3250, libserver.so)  // inlines: curtime
// calls: CTimedEventMgr::RegisterForNextEvent
// callers: CTimedEventMgr::FireEvents
void __fastcall CEventRegister::Reregister(CEventRegister *const this)
{
  double v2; // xmm0_8
  CGlobalVars *v3; // rbx
  float m_flCurrentTime; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v6; // [rsp+Ch] [rbp-24h]

  if ( this->m_flUpdateInterval > 0.000001 && this->m_pEventMgr != 0 )
  {
    *&v2 = LODWORD(this->m_flNextEventTime);
    while ( 1 )
    {
      v3 = gpGlobals;
      m_flCurrentTime = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            v6 = LODWORD(v2);
            (m_pfnWarningFunc)(1, v2, 0.0);
            LODWORD(v2) = v6;
          }
        }
        m_flCurrentTime = v3->m_flCurrentTime;
      }
      if ( m_flCurrentTime < *&v2 )
        break;
      *&v2 = LODWORD(this->m_flNextEventTime);
      *&v2 = *&v2 + this->m_flUpdateInterval;
      this->m_flNextEventTime = *&v2;
    }
    CTimedEventMgr::RegisterForNextEvent(this->m_pEventMgr, this);
  }
}


// TimedEventMgr_LessFunc  (line 92, @0x00000000023bb150, libserver.so)
bool __fastcall TimedEventMgr_LessFunc(CEventRegister *const *const a, CEventRegister *const *const b)
{
  return (*a)->m_flNextEventTime > (*b)->m_flNextEventTime;
}


// CTimedEventMgr::CTimedEventMgr  (line 98, @0x00000000023ca290, libserver.so)  // inlines: CUtlMemory, CUtlPriorityQueue, CUtlVector, CUtlVectorBase, SetLessFunc
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// globals: TimedEventMgr_LessFunc(CEventRegister * const&,CEventRegister * const&)
void __fastcall CTimedEventMgr::CTimedEventMgr(CTimedEventMgr *const this)
{
  this->m_Events.m_heap.m_Size = 0;
  this->m_Events.m_heap.m_Memory.m_pMemory = 0;
  this->m_Events.m_heap.m_Memory.m_nAllocationCount = 0;
  this->m_Events.m_heap.m_Memory.m_nGrowSize = 0;
  this->m_Events.m_LessFunc = TimedEventMgr_LessFunc;
}


// CTimedEventMgr::FireEvents  (line 104, @0x00000000023e3310, libserver.so)  // inlines: PercolateDown, RemoveAtHead, Swap, curtime, operator(), operator[]
// calls: CUtlVectorBase<CEventRegister*, CUtlMemory<CEventRegister*, int> >::FastRemove, CEventRegister::Reregister
// callers: CSource2Server::GameFrame
void __fastcall CTimedEventMgr::FireEvents(CTimedEventMgr *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 v5; // r12
  int m_Size; // r14d
  int v7; // ebx
  CEventRegister **m_pMemory; // rsi
  CEventRegister **v9; // rdx
  CEventRegister *v10; // rdi
  int v11; // r13d
  CEventRegister *pEvent; // [rsp+0h] [rbp-40h]
  int v13; // [rsp+Ch] [rbp-34h]

  while ( this->m_Events.m_heap.m_Size != 0 )
  {
    m_flCurrentTime = 0.0;
    pEvent = *this->m_Events.m_heap.m_Memory.m_pMemory;
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v3->m_flCurrentTime;
    }
    if ( m_flCurrentTime < pEvent->m_flNextEventTime )
      break;
    v5 = 0;
    CUtlVectorBase<CEventRegister *,CUtlMemory<CEventRegister *,int>>::FastRemove(&this->m_Events.m_heap, 0);
    m_Size = this->m_Events.m_heap.m_Size;
    v13 = this->m_Events.m_heap.m_Size / 2;
    if ( v13 > 0 )
    {
      while ( 1 )
      {
        v11 = 2 * v5 + 2;
        v7 = 2 * v5 + 1;
        if ( m_Size <= v7 )
        {
          v7 = v5;
          if ( m_Size <= v11 )
            goto LABEL_12;
        }
        else
        {
          if ( !this->m_Events.m_LessFunc(
                  &this->m_Events.m_heap.m_Memory.m_pMemory[v5],
                  &this->m_Events.m_heap.m_Memory.m_pMemory[v7]) )
            v7 = v5;
          if ( m_Size <= v11 )
          {
LABEL_12:
            if ( v5 == v7 )
              break;
            goto LABEL_13;
          }
        }
        if ( this->m_Events.m_LessFunc(
               &this->m_Events.m_heap.m_Memory.m_pMemory[v7],
               &this->m_Events.m_heap.m_Memory.m_pMemory[v11]) )
        {
          v7 = 2 * v5 + 2;
        }
        if ( v5 == v7 )
          break;
LABEL_13:
        m_pMemory = this->m_Events.m_heap.m_Memory.m_pMemory;
        v9 = &m_pMemory[v5];
        v10 = *v9;
        *v9 = m_pMemory[v7];
        this->m_Events.m_heap.m_Memory.m_pMemory[v7] = v10;
        if ( v13 <= v7 )
          break;
        v5 = v7;
      }
    }
    pEvent->m_bRegistered = 0;
    CEventRegister::Reregister(pEvent);
    (*pEvent->m_pCallback->_vptr_IEventRegisterCallback)(pEvent->m_pCallback);
  }
}


// CTimedEventMgr::RegisterForNextEvent  (line 128, @0x00000000023e30e0, libserver.so)  // inlines: AddToTail, GrowMemory, Insert, PercolateUp, RemoveEvent, Swap, operator(), operator[]
// calls: CTimedEventMgr::RemoveEvent, CUtlMemory<CEventRegister*, int>::Grow
// callers: CEventRegister::SetUpdateInterval, CEventRegister::Reregister
void __fastcall CTimedEventMgr::RegisterForNextEvent(CTimedEventMgr *const this, CEventRegister *pEvent)
{
  int m_Size; // r13d
  int v4; // eax
  __int64 v5; // r12
  CEventRegister **m_pMemory; // rax
  CEventRegister **v7; // r15
  CEventRegister *v8; // rcx
  __int64 v9; // r15

  if ( pEvent->m_bRegistered )
    CTimedEventMgr::RemoveEvent(this, pEvent);
  m_Size = this->m_Events.m_heap.m_Size;
  v4 = this->m_Events.m_heap.m_Size;
  if ( this->m_Events.m_heap.m_Size == this->m_Events.m_heap.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEventRegister *,int>::Grow(&this->m_Events.m_heap.m_Memory, 1);
    v4 = this->m_Events.m_heap.m_Size;
  }
  v5 = m_Size;
  this->m_Events.m_heap.m_Size = v4 + 1;
  this->m_Events.m_heap.m_Memory.m_pMemory[m_Size] = pEvent;
  if ( this->m_Events.m_heap.m_Size > m_Size && m_Size != 0 )
  {
    while ( 1 )
    {
      m_Size = (m_Size + 1) / 2 - 1;
      v9 = m_Size;
      if ( this->m_Events.m_LessFunc(
             &this->m_Events.m_heap.m_Memory.m_pMemory[v5],
             &this->m_Events.m_heap.m_Memory.m_pMemory[v9]) )
      {
        break;
      }
      m_pMemory = this->m_Events.m_heap.m_Memory.m_pMemory;
      v7 = &m_pMemory[v9];
      v8 = *v7;
      *v7 = m_pMemory[v5];
      this->m_Events.m_heap.m_Memory.m_pMemory[v5] = v8;
      if ( m_Size == 0 )
        break;
      v5 = m_Size;
    }
  }
  pEvent->m_bRegistered = 1;
}


// CTimedEventMgr::RemoveEvent  (line 136, @0x00000000023dd780, libserver.so)  // inlines: PercolateDown, PercolateUp, RemoveAt, RevaluateElement, Swap, operator(), operator[]
// calls: CUtlVectorBase<CEventRegister*, CUtlMemory<CEventRegister*, int> >::FastRemove
// callers: CTimedEventMgr::RemoveEvent, CEventRegister::Term, CEventRegister::StopUpdates, CTimedEventMgr::RegisterForNextEvent
void __fastcall CTimedEventMgr::RemoveEvent(CTimedEventMgr *const this, CEventRegister *pEvent)
{
  CEventRegister **m_pMemory; // rax
  CEventRegister **v4; // rax
  int v5; // r12d
  int m_Size; // r15d
  __int64 i; // r13
  int v8; // ebx
  CEventRegister **v9; // rcx
  CEventRegister **v10; // rdx
  CEventRegister *v11; // rsi
  int v12; // edx
  bool v13; // al
  int v14; // r8d
  CEventRegister **v15; // rax
  CEventRegister **v16; // r13
  CEventRegister *v17; // rdx
  __int64 v18; // r13
  int v19; // [rsp+8h] [rbp-38h]
  int v20; // [rsp+Ch] [rbp-34h]

  if ( this->m_Events.m_heap.m_Size <= 0 )
    return;
  m_pMemory = this->m_Events.m_heap.m_Memory.m_pMemory;
  if ( *m_pMemory == pEvent )
  {
    v5 = 0;
  }
  else
  {
    v4 = m_pMemory + 1;
    v5 = 0;
    do
    {
      if ( ++v5 == this->m_Events.m_heap.m_Size )
        return;
      ++v4;
    }
    while ( *(v4 - 1) != pEvent );
  }
  CUtlVectorBase<CEventRegister *,CUtlMemory<CEventRegister *,int>>::FastRemove(&this->m_Events.m_heap, v5);
  m_Size = this->m_Events.m_heap.m_Size;
  v20 = this->m_Events.m_heap.m_Size / 2;
  if ( v20 > v5 )
  {
    for ( i = v5; ; i = v8 )
    {
      v12 = 2 * i + 2;
      v8 = 2 * i + 1;
      if ( m_Size <= v8 )
      {
        v8 = i;
        if ( m_Size <= v12 )
          goto LABEL_11;
      }
      else
      {
        v13 = this->m_Events.m_LessFunc(
                &this->m_Events.m_heap.m_Memory.m_pMemory[i],
                &this->m_Events.m_heap.m_Memory.m_pMemory[v8]);
        v12 = 2 * i + 2;
        if ( !v13 )
          v8 = i;
        if ( m_Size <= v12 )
        {
LABEL_11:
          if ( i == v8 )
            goto LABEL_21;
          goto LABEL_12;
        }
      }
      v19 = v12;
      if ( this->m_Events.m_LessFunc(
             &this->m_Events.m_heap.m_Memory.m_pMemory[v8],
             &this->m_Events.m_heap.m_Memory.m_pMemory[v12]) )
      {
        v8 = v19;
      }
      if ( i == v8 )
      {
LABEL_21:
        if ( v5 == i )
        {
          v14 = this->m_Events.m_heap.m_Size;
          goto LABEL_23;
        }
        return;
      }
LABEL_12:
      v9 = this->m_Events.m_heap.m_Memory.m_pMemory;
      v10 = &v9[i];
      v11 = *v10;
      *v10 = v9[v8];
      this->m_Events.m_heap.m_Memory.m_pMemory[v8] = v11;
      if ( v20 <= v8 )
        return;
    }
  }
  v14 = this->m_Events.m_heap.m_Size;
LABEL_23:
  if ( v14 > v5 && v5 != 0 )
  {
    while ( 1 )
    {
      v18 = (v5 + 1) / 2 - 1;
      if ( this->m_Events.m_LessFunc(
             &this->m_Events.m_heap.m_Memory.m_pMemory[v5],
             &this->m_Events.m_heap.m_Memory.m_pMemory[v18]) )
      {
        break;
      }
      v15 = this->m_Events.m_heap.m_Memory.m_pMemory;
      v16 = &v15[v18];
      v17 = *v16;
      *v16 = v15[v5];
      this->m_Events.m_heap.m_Memory.m_pMemory[v5] = v17;
      if ( (v5 + 1) / 2 == 1 )
        break;
      v5 = (v5 + 1) / 2 - 1;
    }
  }
}


// CTimedEventMgr::RemoveEvent  (line 136, @0x00000000023dd920, libserver.so)
// calls: CTimedEventMgr::RemoveEvent
void __fastcall CTimedEventMgr::RemoveEvent(CTimedEventMgr *const this, CEventRegister *pEvent)
{
  if ( pEvent->m_bRegistered )
    CTimedEventMgr::RemoveEvent(this, pEvent);
}


