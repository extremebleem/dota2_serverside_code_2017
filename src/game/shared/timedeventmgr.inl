
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTimedEventMgr::~CTimedEventMgr  (line 70, @0x0000000002248160, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CEventRegister*, int>::Purge
void __fastcall CTimedEventMgr::~CTimedEventMgr(CTimedEventMgr *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEventRegister*,CUtlMemory<CEventRegister*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Events.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Events.m_heap.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Events.m_heap.m_Memory;
    CUtlMemory<CEventRegister *,int>::Purge(&this->m_Events.m_heap.m_Memory);
    if ( (this->m_Events.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEventRegister *,int>::Purge(p_m_Memory);
  }
}


