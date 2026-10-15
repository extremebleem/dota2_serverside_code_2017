
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Insert  (line 200, @0x000000000297cbe0, libserver.so)  // inlines: CEntityHandle, CHandle, CopyConstruct<CDOTA_BaseNPC::sDamageEvent>, EnsureCapacity, Next_Unchecked, V_memmove, memcpy, memmove, operator[], sDamageEvent
// calls: CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int>::Grow, memmove, memcpy
// callers: CDOTA_BaseNPC::OnTakeDamage_Alive
void __fastcall CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Insert(
        CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int> > *const this,
        const CDOTA_BaseNPC::sDamageEvent *const element)
{
  QueueIter_t m_tail; // eax
  int m_nAllocationCount; // r15d
  QueueIter_t v6; // r12d
  __int64 v7; // r14
  CDOTA_BaseNPC::sDamageEvent *m_pMemory; // rdi
  CDOTA_BaseNPC::sDamageEvent *v9; // rax
  uint32 m_nGrowSize; // eax
  __int64 v11; // rax
  CDOTA_BaseNPC::sDamageEvent *v12; // rax
  int v13; // edx
  QueueIter_t v14; // r12d
  QueueIter_t m_head; // eax
  CDOTA_BaseNPC::sDamageEvent *v16; // r12
  CDOTA_BaseNPC::sDamageEvent *v17; // rax
  int v18; // [rsp+Ch] [rbp-34h]

  m_tail = this->m_tail;
  if ( m_tail == QueueIter_t::QUEUE_ITERATOR_INVALID )
  {
    if ( this->m_memory.m_nAllocationCount > 0 || ((m_nGrowSize = this->m_memory.m_nGrowSize) & 0x40000000) != 0 )
    {
      m_pMemory = this->m_memory.m_pMemory;
    }
    else
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        v16 = this->m_memory.m_pMemory;
        v17 = (**g_pMemAlloc)(g_pMemAlloc, 12);
        this->m_memory.m_pMemory = v17;
        m_pMemory = v17;
        if ( v16 != 0 )
        {
          memcpy(v17, v16, 12LL * this->m_memory.m_nAllocationCount);
          m_pMemory = this->m_memory.m_pMemory;
        }
        this->m_memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v11 = *g_pMemAlloc;
        if ( this->m_memory.m_pMemory != 0 )
          v12 = (*(v11 + 8))(g_pMemAlloc, this->m_memory.m_pMemory, 12);
        else
          v12 = (*v11)(g_pMemAlloc, 12);
        this->m_memory.m_pMemory = v12;
        m_pMemory = v12;
      }
      this->m_memory.m_nAllocationCount = 1;
    }
    this->m_tail = 0;
    v7 = 0;
    this->m_head = 0;
  }
  else
  {
    m_nAllocationCount = this->m_memory.m_nAllocationCount;
    v6 = 0;
    if ( m_tail != m_nAllocationCount - 1 )
      v6 = m_tail + 1;
    if ( this->m_head == v6 )
    {
      CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>::Grow(&this->m_memory, 1);
      v13 = this->m_memory.m_nAllocationCount;
      v14 = this->m_tail;
      if ( v14 == v13 - 1 )
      {
        v7 = 0;
        v6 = 0;
      }
      else
      {
        v6 = v14 + 1;
        v7 = v6;
      }
      m_head = this->m_head;
      if ( m_head != 0 )
      {
        v18 = v13 - m_nAllocationCount;
        memmove(
          &this->m_memory.m_pMemory[v13 - m_nAllocationCount + m_head],
          &this->m_memory.m_pMemory[m_head],
          12LL * (m_nAllocationCount - m_head));
        this->m_head += v18;
      }
    }
    else
    {
      v7 = v6;
    }
    m_pMemory = this->m_memory.m_pMemory;
    this->m_tail = v6;
  }
  v9 = &m_pMemory[v7];
  if ( &m_pMemory[v7] != 0 )
  {
    v9->fTime = element->fTime;
    v9->iDamage = element->iDamage;
    v9->hAttacker.m_Index = element->hAttacker.m_Index;
  }
}


// CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> >::Insert  (line 200, @0x00000000029856a0, libserver.so)  // inlines: CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, CopyConstruct<CUnitOrders>, EnsureCapacity, Next_Unchecked, V_memmove, memcpy, memmove, operator[], ~CUtlVector
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount, CUtlMemory<CUnitOrders, int>::Grow, memmove, memcpy, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC::QueueOrder
void __fastcall CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Insert(
        CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int> > *const this,
        const CUnitOrders *const element)
{
  QueueIter_t m_tail; // eax
  int m_nAllocationCount; // r15d
  QueueIter_t v6; // r14d
  __int64 v7; // rbx
  CUnitOrders *m_pMemory; // rdi
  char *v9; // rbx
  int m_nOrderSequenceNumber; // eax
  int m_Size; // r14d
  CEntityIndex *v12; // r13
  unsigned __int64 v13; // rax
  uint32 m_nGrowSize; // eax
  __int64 v15; // rax
  CUnitOrders *v16; // rax
  int v17; // edx
  QueueIter_t v18; // r14d
  QueueIter_t m_head; // eax
  CUnitOrders *v20; // rbx
  CUnitOrders *v21; // rax
  int v22; // [rsp+Ch] [rbp-34h]

  m_tail = this->m_tail;
  if ( m_tail == QueueIter_t::QUEUE_ITERATOR_INVALID )
  {
    if ( this->m_memory.m_nAllocationCount > 0 || ((m_nGrowSize = this->m_memory.m_nGrowSize) & 0x40000000) != 0 )
    {
      m_pMemory = this->m_memory.m_pMemory;
    }
    else
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        v20 = this->m_memory.m_pMemory;
        v21 = (**g_pMemAlloc)(g_pMemAlloc, 64);
        this->m_memory.m_pMemory = v21;
        m_pMemory = v21;
        if ( v20 != 0 )
        {
          memcpy(v21, v20, this->m_memory.m_nAllocationCount << 6);
          m_pMemory = this->m_memory.m_pMemory;
        }
        this->m_memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v15 = *g_pMemAlloc;
        if ( this->m_memory.m_pMemory != 0 )
          v16 = (*(v15 + 8))(g_pMemAlloc, this->m_memory.m_pMemory, 64);
        else
          v16 = (*v15)(g_pMemAlloc, 64);
        this->m_memory.m_pMemory = v16;
        m_pMemory = v16;
      }
      this->m_memory.m_nAllocationCount = 1;
    }
    this->m_tail = 0;
    v7 = 0;
    this->m_head = 0;
  }
  else
  {
    m_nAllocationCount = this->m_memory.m_nAllocationCount;
    v6 = 0;
    if ( m_tail != m_nAllocationCount - 1 )
      v6 = m_tail + 1;
    if ( this->m_head == v6 )
    {
      CUtlMemory<CUnitOrders,int>::Grow(&this->m_memory, 1);
      v17 = this->m_memory.m_nAllocationCount;
      v18 = this->m_tail;
      if ( v18 == v17 - 1 )
      {
        v7 = 0;
        v6 = 0;
      }
      else
      {
        v6 = v18 + 1;
        v7 = v6 << 6;
      }
      m_head = this->m_head;
      if ( m_head != 0 )
      {
        v22 = v17 - m_nAllocationCount;
        memmove(
          &this->m_memory.m_pMemory[(v17 - m_nAllocationCount + m_head)],
          &this->m_memory.m_pMemory[m_head],
          (m_nAllocationCount - m_head) << 6);
        this->m_head += v22;
      }
    }
    else
    {
      v7 = v6 << 6;
    }
    m_pMemory = this->m_memory.m_pMemory;
    this->m_tail = v6;
  }
  v9 = m_pMemory + v7;
  if ( v9 != 0 )
  {
    *v9 = element->m_nIssuerPlayerIndex;
    m_nOrderSequenceNumber = element->m_nOrderSequenceNumber;
    *(v9 + 2) = 0;
    *(v9 + 2) = 0;
    *(v9 + 6) = 0;
    *(v9 + 7) = 0;
    *(v9 + 1) = m_nOrderSequenceNumber;
    m_Size = element->m_nUnits.m_Size;
    v12 = element->m_nUnits.m_Memory.m_pMemory;
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount((v9 + 8), m_Size);
    if ( m_Size > 0 )
    {
      v13 = 0;
      do
      {
        *(*(v9 + 2) + v13) = v12[v13 / 4];
        v13 += 4LL;
      }
      while ( v13 != 4LL * (m_Size - 1) + 4 );
    }
    *(v9 + 8) = element->m_nOrderType;
    *(v9 + 9) = element->m_nTargetIndex.m_Data;
    *(v9 + 10) = element->m_nAbilityIndex.m_Data;
    *(v9 + 44) = *&element->m_vPosition.x;
    *(v9 + 13) = LODWORD(element->m_vPosition.z);
    v9[56] = element->m_bQueue;
  }
}


// CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Next  (line 255, @0x0000000002977700, libserver.so)  // inlines: Next_Unchecked
// calls: CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::IsValid
// callers: CDOTA_BaseNPC::GetEstimatedDeathTime, CDOTA_BaseNPC::GetRecentIncomingDPS, CDOTA_BaseNPC_Hero::Think
QueueIter_t __fastcall CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Next(
        const CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int> > *const this,
        QueueIter_t it)
{
  QueueIter_t v5; // r12d

  if ( it == QueueIter_t::QUEUE_ITERATOR_INVALID
    || this->m_tail == it
    || !CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::IsValid(this, it) )
  {
    return QueueIter_t::QUEUE_ITERATOR_INVALID;
  }
  v5 = 0;
  if ( it != this->m_memory.m_nAllocationCount - 1 )
    return it + 1;
  return v5;
}


// CUtlQueue<Vector, CUtlMemory<Vector, int> >::IsValid  (line 305, @0x000000000286b2e0, libserver.so)
// callers: GetGroundHeight
bool __fastcall CUtlQueue<Vector,CUtlMemory<Vector,int>>::IsValid(
        const CUtlQueue<Vector,CUtlMemory<Vector,int> > *const this,
        QueueIter_t it)
{
  QueueIter_t m_head; // edx
  QueueIter_t m_tail; // ecx
  bool result; // al

  if ( it == QueueIter_t::QUEUE_ITERATOR_INVALID )
    return 0;
  m_head = this->m_head;
  if ( m_head == QueueIter_t::QUEUE_ITERATOR_INVALID )
    return 0;
  m_tail = this->m_tail;
  if ( m_head > m_tail )
  {
    if ( it < m_head || it >= this->m_memory.m_nAllocationCount )
      return it <= m_tail;
    return 1;
  }
  result = 0;
  if ( it >= m_head && it <= m_tail )
    return 1;
  return result;
}


// CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::IsValid  (line 305, @0x00000000029776b0, libserver.so)
// callers: CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Next, CDOTA_BaseNPC::GetEstimatedDeathTime, CDOTA_BaseNPC::GetRecentIncomingDPS, CDOTA_BaseNPC_Hero::Think
bool __fastcall CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::IsValid(
        const CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int> > *const this,
        QueueIter_t it)
{
  QueueIter_t m_head; // edx
  QueueIter_t m_tail; // ecx
  bool result; // al

  if ( it == QueueIter_t::QUEUE_ITERATOR_INVALID )
    return 0;
  m_head = this->m_head;
  if ( m_head == QueueIter_t::QUEUE_ITERATOR_INVALID )
    return 0;
  m_tail = this->m_tail;
  if ( m_head > m_tail )
  {
    if ( it < m_head || it >= this->m_memory.m_nAllocationCount )
      return it <= m_tail;
    return 1;
  }
  result = 0;
  if ( it >= m_head && it <= m_tail )
    return 1;
  return result;
}


// CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Element  (line 320, @0x0000000002977770, libserver.so)  // inlines: CEntityHandle, CHandle, operator[], sDamageEvent
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CDOTA_BaseNPC::GetEstimatedDeathTime, CDOTA_BaseNPC::GetRecentIncomingDPS, CDOTA_BaseNPC_Hero::Think
// globals: `guard variable for'CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy, CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy
CDOTA_BaseNPC::sDamageEvent *__fastcall CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(
        CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int> > *const this,
        QueueIter_t it)
{
  if ( it != QueueIter_t::QUEUE_ITERATOR_INVALID )
    return &this->m_memory.m_pMemory[it];
  if ( `guard variable for'CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy != 0 )
    return &CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy;
  if ( __cxa_guard_acquire(&`guard variable for'CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy) != 0 )
  {
    CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy.hAttacker.m_Index = -1;
    __cxa_guard_release(&`guard variable for'CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy);
  }
  return &CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(QueueIter_t)::dummy;
}


