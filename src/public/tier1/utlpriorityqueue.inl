
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlPriorityQueue<CShortPathProbe*, CDefUtlPriorityQueueLessFunc<CShortPathProbe*>, CUtlMemory<CShortPathProbe*, int>, CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*> >::RevaluateElement  (line 132, @0x00000000026abce0, libserver.so)  // inlines: PercolateDown, PercolateUp, Swap, operator(), operator[]
// callers: CShortPathProbe::Advance
void __fastcall CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::RevaluateElement(
        CUtlPriorityQueue<CShortPathProbe*,CDefUtlPriorityQueueLessFunc<CShortPathProbe*>,CUtlMemory<CShortPathProbe*,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*> > *const this,
        const int nStartingIndex)
{
  int m_Size; // r15d
  __int64 i; // r12
  int v5; // ebx
  CShortPathProbe **m_pMemory; // rcx
  CShortPathProbe **v7; // rdx
  CShortPathProbe *v8; // rsi
  int v9; // r14d
  int v10; // r8d
  __int64 v11; // r15
  CShortPathProbe **v12; // rax
  CShortPathProbe **v13; // r12
  CShortPathProbe *v14; // rdx
  int v15; // ebx
  __int64 v16; // r12
  int v18; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_heap.m_Size;
  v18 = this->m_heap.m_Size / 2;
  if ( nStartingIndex >= v18 )
  {
    v10 = this->m_heap.m_Size;
    goto LABEL_18;
  }
  for ( i = nStartingIndex; ; i = v5 )
  {
    v9 = 2 * i + 2;
    v5 = 2 * i + 1;
    if ( m_Size <= v5 )
    {
      v5 = i;
      if ( m_Size <= v9 )
        goto LABEL_4;
    }
    else
    {
      if ( !this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[i], &this->m_heap.m_Memory.m_pMemory[v5]) )
        v5 = i;
      if ( m_Size <= v9 )
      {
LABEL_4:
        if ( i == v5 )
          goto LABEL_14;
        goto LABEL_5;
      }
    }
    if ( this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v5], &this->m_heap.m_Memory.m_pMemory[v9]) )
      v5 = 2 * i + 2;
    if ( i == v5 )
    {
LABEL_14:
      if ( nStartingIndex != i )
        return;
      goto LABEL_17;
    }
LABEL_5:
    m_pMemory = this->m_heap.m_Memory.m_pMemory;
    v7 = &m_pMemory[i];
    v8 = *v7;
    *v7 = m_pMemory[v5];
    this->m_heap.m_Memory.m_pMemory[v5] = v8;
    if ( v18 <= v5 )
      break;
  }
  if ( nStartingIndex != v5 )
    return;
LABEL_17:
  v10 = this->m_heap.m_Size;
LABEL_18:
  if ( nStartingIndex < v10 )
  {
    v11 = nStartingIndex;
    if ( nStartingIndex != 0 )
    {
      while ( 1 )
      {
        v15 = (v11 + 1) / 2 - 1;
        v16 = v15;
        if ( this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v11], &this->m_heap.m_Memory.m_pMemory[v16]) )
          break;
        v12 = this->m_heap.m_Memory.m_pMemory;
        v13 = &v12[v16];
        v14 = *v13;
        *v13 = v12[v11];
        this->m_heap.m_Memory.m_pMemory[v11] = v14;
        if ( (v11 + 1) / 2 == 1 )
          break;
        v11 = v15;
      }
    }
  }
}


// CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::PercolateDown  (line 161, @0x0000000002f09860, libserver.so)  // inlines: Get, GetArea, IsInCurrentNavMesh, SetIndex, Swap, operator(), operator[]
// callers: CPath::ComputePathWithOpenGoalCore
int __fastcall CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::PercolateDown(
        CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t> *const this,
        int index)
{
  int v3; // r12d
  int m_Size; // r15d
  int v5; // ebx
  CNavOpenListElement *m_pMemory; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  CNavOpenListElement *v9; // rax
  CNavArea *m_pData; // r9
  const CNavMesh *m_pAssociatedNavMesh; // rdi
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  CNavArea *v15; // rcx
  CNavOpenListElement *v16; // rax
  CNavOpenListElement *v17; // rsi
  CNavMesh *v18; // rax
  CNavArea *v19; // rcx
  CNavOpenListElement *v20; // rdx
  int v21; // r13d
  int half; // [rsp+Ch] [rbp-34h]

  v3 = index;
  half = this->m_heap.m_Size / 2;
  if ( half > index )
  {
    m_Size = this->m_heap.m_Size;
    do
    {
      v21 = 2 * v3 + 2;
      v5 = 2 * v3 + 1;
      if ( v5 >= m_Size )
      {
        v5 = v3;
        if ( v21 >= m_Size )
          goto LABEL_4;
      }
      else
      {
        if ( !this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v3], &this->m_heap.m_Memory.m_pMemory[v5]) )
          v5 = v3;
        if ( v21 >= m_Size )
        {
LABEL_4:
          if ( v5 == v3 )
            return v3;
          goto LABEL_5;
        }
      }
      if ( this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v5], &this->m_heap.m_Memory.m_pMemory[v21]) )
        v5 = 2 * v3 + 2;
      if ( v5 == v3 )
        return v3;
LABEL_5:
      m_pMemory = this->m_heap.m_Memory.m_pMemory;
      v7 = v5;
      v8 = v3;
      v9 = &m_pMemory[v8];
      m_pData = m_pMemory[v8].m_pNavArea.m_pData;
      m_pAssociatedNavMesh = m_pMemory[v8].m_pNavArea.m_pAssociatedNavMesh;
      m_flTotalCost = m_pMemory[v8].m_flTotalCost;
      v9->m_pNavArea.m_pData = m_pMemory[v7].m_pNavArea.m_pData;
      m_flCostSoFar = m_pMemory[v8].m_flCostSoFar;
      m_flPathLengthSoFar = m_pMemory[v8].m_flPathLengthSoFar;
      v9->m_pNavArea.m_pAssociatedNavMesh = m_pMemory[v7].m_pNavArea.m_pAssociatedNavMesh;
      *&v9->m_flTotalCost = *&m_pMemory[v7].m_flTotalCost;
      v9->m_flPathLengthSoFar = m_pMemory[v7].m_flPathLengthSoFar;
      v15 = 0;
      v16 = &this->m_heap.m_Memory.m_pMemory[v7];
      v16->m_pNavArea.m_pData = m_pData;
      v16->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
      v16->m_flTotalCost = m_flTotalCost;
      v16->m_flCostSoFar = m_flCostSoFar;
      v16->m_flPathLengthSoFar = m_flPathLengthSoFar;
      v17 = &this->m_heap.m_Memory.m_pMemory[v8];
      v18 = TheNavMesh;
      if ( v17->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
        v15 = v17->m_pNavArea.m_pData;
      v15->m_nOpenListHeapIndex = v3;
      v19 = 0;
      v20 = &this->m_heap.m_Memory.m_pMemory[v7];
      if ( v18 == v20->m_pNavArea.m_pAssociatedNavMesh )
        v19 = v20->m_pNavArea.m_pData;
      v19->m_nOpenListHeapIndex = v5;
      v3 = v5;
    }
    while ( v5 < half );
  }
  return v3;
}


// CUtlPriorityQueue<GCSDK::CJobMgr::JobSleeping_t, CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>, CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int>, CDefUtlPriorityQueueSetIndexFunc<GCSDK::CJobMgr::JobSleeping_t> >::PercolateDown  (line 161, @0x000000000322c760, libserver.so)  // inlines: Swap, operator(), operator[]
// callers: GCSDK::CJobMgr::CheckForJobTimeouts
int __fastcall CUtlPriorityQueue<GCSDK::CJobMgr::JobSleeping_t,CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>,CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>,CDefUtlPriorityQueueSetIndexFunc<GCSDK::CJobMgr::JobSleeping_t>>::PercolateDown(
        CUtlPriorityQueue<GCSDK::CJobMgr::JobSleeping_t,CDefUtlPriorityQueueLessFunc<GCSDK::CJobMgr::JobSleeping_t>,CUtlMemory<GCSDK::CJobMgr::JobSleeping_t,int>,CDefUtlPriorityQueueSetIndexFunc<GCSDK::CJobMgr::JobSleeping_t> > *const this,
        int index)
{
  __int64 v3; // r12
  int m_Size; // r13d
  int v5; // ebx
  GCSDK::CJobMgr::JobSleeping_t *m_pMemory; // rdx
  unsigned __int64 v7; // rcx
  GCSDK::CJobMgr::JobSleeping_t *v8; // rax
  JobID_t m_JobID; // r10
  uint64 m_lTime; // r9
  uint64 v11; // rdi
  GCSDK::CJobMgr::JobSleeping_t *v12; // rax
  int v13; // r14d
  int half; // [rsp+Ch] [rbp-34h]

  v3 = index;
  m_Size = this->m_heap.m_Size;
  half = this->m_heap.m_Size / 2;
  if ( half > index )
  {
    while ( 1 )
    {
      v13 = 2 * v3 + 2;
      v5 = 2 * v3 + 1;
      if ( v5 >= m_Size )
      {
        v5 = v3;
        if ( v13 >= m_Size )
          goto LABEL_4;
      }
      else
      {
        if ( !this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v3], &this->m_heap.m_Memory.m_pMemory[v5]) )
          v5 = v3;
        if ( v13 >= m_Size )
        {
LABEL_4:
          if ( v5 == v3 )
            return v3;
          goto LABEL_5;
        }
      }
      if ( this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v5], &this->m_heap.m_Memory.m_pMemory[v13]) )
        v5 = 2 * v3 + 2;
      if ( v5 == v3 )
        return v3;
LABEL_5:
      m_pMemory = this->m_heap.m_Memory.m_pMemory;
      v7 = v5;
      v8 = &m_pMemory[v3];
      m_JobID = v8->m_JobID;
      m_lTime = v8->m_SWakeupTime.m_lTime;
      v11 = v8->m_STimeTouched.m_lTime;
      v8->m_JobID = m_pMemory[v7].m_JobID;
      v8->m_SWakeupTime.m_lTime = m_pMemory[v7].m_SWakeupTime.m_lTime;
      v8->m_STimeTouched.m_lTime = m_pMemory[v7].m_STimeTouched.m_lTime;
      v12 = &this->m_heap.m_Memory.m_pMemory[v7];
      v12->m_JobID = m_JobID;
      v12->m_SWakeupTime.m_lTime = m_lTime;
      v12->m_STimeTouched.m_lTime = v11;
      if ( v5 >= half )
      {
        LODWORD(v3) = v5;
        return v3;
      }
      v3 = v5;
    }
  }
  return v3;
}


// CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::PercolateUp  (line 201, @0x0000000002ec9ef0, libserver.so)  // inlines: Get, GetArea, IsInCurrentNavMesh, SetIndex, Swap, operator(), operator[]
// callers: CPath::ComputePathWithOpenGoalCore, NavAreaBuildPath
// write access to const memory has been detected, the output may be wrong!
int __fastcall CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::PercolateUp(
        CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t> *const this,
        int index)
{
  int v2; // r15d
  __int64 v4; // rbx
  int v5; // r14d
  unsigned __int64 v6; // r13
  CNavOpenListElement *m_pMemory; // rcx
  CNavOpenListElement *v8; // rdx
  CNavArea *m_pData; // rsi
  const CNavMesh *m_pAssociatedNavMesh; // rax
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  CNavOpenListElement *v14; // rdx
  CNavMesh *v15; // rax
  CNavArea *v16; // rdx
  CNavOpenListElement *v17; // r13
  CNavOpenListElement *v18; // rbx

  v2 = index;
  if ( index == 0 )
    return 0;
  while ( 1 )
  {
    v4 = v2;
    v5 = (v2 + 1) / 2 - 1;
    v6 = v5;
    if ( this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v4], &this->m_heap.m_Memory.m_pMemory[v6]) )
      break;
    m_pMemory = this->m_heap.m_Memory.m_pMemory;
    v8 = &m_pMemory[v6];
    m_pData = m_pMemory[v5].m_pNavArea.m_pData;
    m_pAssociatedNavMesh = m_pMemory[v6].m_pNavArea.m_pAssociatedNavMesh;
    m_flTotalCost = m_pMemory[v6].m_flTotalCost;
    v8->m_pNavArea.m_pData = m_pMemory[v2].m_pNavArea.m_pData;
    m_flCostSoFar = m_pMemory[v6].m_flCostSoFar;
    m_flPathLengthSoFar = m_pMemory[v6].m_flPathLengthSoFar;
    v8->m_pNavArea.m_pAssociatedNavMesh = m_pMemory[v4].m_pNavArea.m_pAssociatedNavMesh;
    *&v8->m_flTotalCost = *&m_pMemory[v4].m_flTotalCost;
    v8->m_flPathLengthSoFar = m_pMemory[v4].m_flPathLengthSoFar;
    v14 = &this->m_heap.m_Memory.m_pMemory[v4];
    v14->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
    v14->m_pNavArea.m_pData = m_pData;
    v14->m_flTotalCost = m_flTotalCost;
    v14->m_flCostSoFar = m_flCostSoFar;
    v14->m_flPathLengthSoFar = m_flPathLengthSoFar;
    v15 = TheNavMesh;
    v16 = 0;
    v17 = &this->m_heap.m_Memory.m_pMemory[v6];
    if ( v17->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
      v16 = v17->m_pNavArea.m_pData;
    v16->m_nOpenListHeapIndex = v5;
    v18 = &this->m_heap.m_Memory.m_pMemory[v4];
    if ( v15 == v18->m_pNavArea.m_pAssociatedNavMesh )
    {
      v18->m_pNavArea.m_pData->m_nOpenListHeapIndex = v2;
      if ( (v2 + 1) / 2 == 1 )
        return 0;
    }
    else
    {
      HIDWORD(stru_10.m_pIdentityChunks[20]) = v2;
      if ( (v2 + 1) / 2 == 1 )
        return 0;
    }
    v2 = (v2 + 1) / 2 - 1;
  }
  return v2;
}


// CUtlPriorityQueue<CShortPathProbe*, CDefUtlPriorityQueueLessFunc<CShortPathProbe*>, CUtlMemory<CShortPathProbe*, int>, CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*> >::Insert  (line 222, @0x00000000026b7470, libserver.so)  // inlines: AddToTail, GrowMemory, PercolateUp, Swap, operator(), operator[]
// calls: CUtlMemory<CShortPathProbe*, int>::Grow
// callers: CShortPathProbe::Advance
void __fastcall CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::Insert(
        CUtlPriorityQueue<CShortPathProbe*,CDefUtlPriorityQueueLessFunc<CShortPathProbe*>,CUtlMemory<CShortPathProbe*,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*> > *const this,
        CShortPathProbe *const *const element)
{
  int m_Size; // r13d
  int v5; // eax
  CShortPathProbe *v6; // rdx
  __int64 v7; // r12
  CShortPathProbe **m_pMemory; // rax
  CShortPathProbe **v9; // r14
  CShortPathProbe *v10; // rdx
  __int64 v11; // r14

  m_Size = this->m_heap.m_Size;
  v5 = this->m_heap.m_Size;
  if ( this->m_heap.m_Size == this->m_heap.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CShortPathProbe *,int>::Grow(&this->m_heap.m_Memory, 1);
    v5 = this->m_heap.m_Size;
  }
  this->m_heap.m_Size = v5 + 1;
  v6 = *element;
  v7 = m_Size;
  this->m_heap.m_Memory.m_pMemory[m_Size] = v6;
  if ( this->m_heap.m_Size > m_Size && m_Size != 0 )
  {
    while ( 1 )
    {
      m_Size = (m_Size + 1) / 2 - 1;
      v11 = m_Size;
      if ( this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v7], &this->m_heap.m_Memory.m_pMemory[v11]) )
        break;
      m_pMemory = this->m_heap.m_Memory.m_pMemory;
      v9 = &m_pMemory[v11];
      v10 = *v9;
      *v9 = m_pMemory[v7];
      this->m_heap.m_Memory.m_pMemory[v7] = v10;
      if ( m_Size == 0 )
        break;
      v7 = m_Size;
    }
  }
}


// CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::Insert  (line 222, @0x0000000002f0c400, libserver.so)  // inlines: AddToTail, CNavHandle, CNavOpenListElement, Construct<CNavOpenListElement>, Element, Get, GetArea, GrowMemory, IsInCurrentNavMesh, PercolateUp, SetIndex, Swap, operator(), operator[]
// calls: CUtlMemory<CNavOpenListElement, int>::Grow
// callers: CPath::ComputePathWithOpenGoalCore, NavAreaBuildPath
void __fastcall CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::Insert(
        CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t> *const this,
        const CNavOpenListElement *const element)
{
  int m_Size; // r15d
  int v5; // eax
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  CNavOpenListElement *v8; // rax
  CNavOpenListElement *v9; // rax
  CNavMesh *v10; // rsi
  CNavArea *m_pData; // rax
  CNavOpenListElement *v12; // rdx
  unsigned __int64 v13; // r12
  int v14; // r14d
  unsigned __int64 v15; // r13
  CNavOpenListElement *m_pMemory; // rdx
  CNavOpenListElement *v17; // rax
  CNavArea *v18; // rdi
  const CNavMesh *m_pAssociatedNavMesh; // rsi
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  CNavArea *v23; // rdx
  CNavOpenListElement *v24; // rax
  CNavOpenListElement *v25; // r13
  CNavMesh *v26; // rax
  CNavArea *v27; // rdx
  CNavOpenListElement *v28; // r12

  m_Size = this->m_heap.m_Size;
  v5 = this->m_heap.m_Size;
  if ( this->m_heap.m_Size == this->m_heap.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CNavOpenListElement,int>::Grow(&this->m_heap.m_Memory, 1);
    v5 = this->m_heap.m_Size;
  }
  v6 = m_Size;
  this->m_heap.m_Size = v5 + 1;
  v7 = m_Size;
  v8 = &this->m_heap.m_Memory.m_pMemory[v7];
  if ( v8 != 0 )
  {
    v8->m_pNavArea.m_pData = 0;
    v8->m_pNavArea.m_pAssociatedNavMesh = 0;
    v8->m_flTotalCost = 0.0;
    v8->m_flCostSoFar = 0.0;
    v8->m_flPathLengthSoFar = 0.0;
    v9 = &this->m_heap.m_Memory.m_pMemory[v7];
  }
  else
  {
    v9 = 0;
  }
  v9->m_pNavArea.m_pData = element->m_pNavArea.m_pData;
  v10 = TheNavMesh;
  v9->m_pNavArea.m_pAssociatedNavMesh = element->m_pNavArea.m_pAssociatedNavMesh;
  *&v9->m_flTotalCost = *&element->m_flTotalCost;
  v9->m_flPathLengthSoFar = element->m_flPathLengthSoFar;
  m_pData = 0;
  v12 = &this->m_heap.m_Memory.m_pMemory[v7];
  if ( v12->m_pNavArea.m_pAssociatedNavMesh == v10 )
    m_pData = v12->m_pNavArea.m_pData;
  m_pData->m_nOpenListHeapIndex = m_Size;
  if ( this->m_heap.m_Size > m_Size && m_Size != 0 )
  {
    while ( 1 )
    {
      v13 = v6;
      v14 = (m_Size + 1) / 2 - 1;
      v15 = v14;
      if ( this->m_LessFunc(&this->m_heap.m_Memory.m_pMemory[v13], &this->m_heap.m_Memory.m_pMemory[v15]) )
        break;
      m_pMemory = this->m_heap.m_Memory.m_pMemory;
      v17 = &m_pMemory[v15];
      v18 = m_pMemory[v14].m_pNavArea.m_pData;
      m_pAssociatedNavMesh = m_pMemory[v15].m_pNavArea.m_pAssociatedNavMesh;
      m_flTotalCost = m_pMemory[v15].m_flTotalCost;
      v17->m_pNavArea.m_pData = m_pMemory[v13].m_pNavArea.m_pData;
      m_flCostSoFar = m_pMemory[v15].m_flCostSoFar;
      m_flPathLengthSoFar = m_pMemory[v15].m_flPathLengthSoFar;
      v17->m_pNavArea.m_pAssociatedNavMesh = m_pMemory[v13].m_pNavArea.m_pAssociatedNavMesh;
      *&v17->m_flTotalCost = *&m_pMemory[v13].m_flTotalCost;
      v17->m_flPathLengthSoFar = m_pMemory[v13].m_flPathLengthSoFar;
      v23 = 0;
      v24 = &this->m_heap.m_Memory.m_pMemory[v13];
      v24->m_pNavArea.m_pData = v18;
      v24->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
      v24->m_flTotalCost = m_flTotalCost;
      v24->m_flCostSoFar = m_flCostSoFar;
      v24->m_flPathLengthSoFar = m_flPathLengthSoFar;
      v25 = &this->m_heap.m_Memory.m_pMemory[v15];
      v26 = TheNavMesh;
      if ( v25->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
        v23 = v25->m_pNavArea.m_pData;
      v23->m_nOpenListHeapIndex = v14;
      v27 = 0;
      v28 = &this->m_heap.m_Memory.m_pMemory[v13];
      if ( v26 == v28->m_pNavArea.m_pAssociatedNavMesh )
        v27 = v28->m_pNavArea.m_pData;
      v27->m_nOpenListHeapIndex = m_Size;
      if ( (m_Size + 1) / 2 == 1 )
        break;
      m_Size = (m_Size + 1) / 2 - 1;
      v6 = v14;
    }
  }
}


