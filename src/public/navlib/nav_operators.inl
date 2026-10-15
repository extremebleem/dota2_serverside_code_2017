
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RemoveInvalidNavAreasFromVector<CNavArea>  (line 182, @0x0000000002f0d610, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Element, EnsureCapacity, GrowMemory, Purge, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::SetCount, CNavArea::IsValidArea, CUtlMemory<CNavArea*, int>::Grow, CUtlMemory<CNavArea*, int>::Purge, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavObstructionManager::RemoveInvalidNavAreas
void __fastcall RemoveInvalidNavAreasFromVector<CNavArea>(CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *pAreas)
{
  int v2; // ebx
  int m_Size; // r12d
  unsigned __int64 v4; // rax
  CNavArea **v5; // rax
  unsigned __int64 v6; // rbx
  const CNavArea *v7; // r12
  __int64 v8; // r14
  int v9; // eax
  CNavArea **v10; // rax
  __int64 v11; // [rsp+10h] [rbp-60h]
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > validAreas; // [rsp+20h] [rbp-50h] BYREF

  v2 = 0;
  validAreas.m_Size = 0;
  m_Size = pAreas->m_Size;
  validAreas.m_Memory.m_pMemory = 0;
  validAreas.m_Memory.m_nAllocationCount = 0;
  validAreas.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    v5 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_Size);
    validAreas.m_Memory.m_nAllocationCount = m_Size;
    v6 = 0;
    validAreas.m_Memory.m_pMemory = v5;
    v11 = 8LL * (m_Size - 1) + 8;
    do
    {
      while ( 1 )
      {
        v7 = pAreas->m_Memory.m_pMemory[v6 / 8];
        if ( CNavArea::IsValidArea(v7) )
        {
          v8 = validAreas.m_Size;
          v9 = validAreas.m_Size;
          if ( validAreas.m_Size == validAreas.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CNavArea *,int>::Grow(&validAreas.m_Memory, 1);
            v9 = validAreas.m_Size;
          }
          validAreas.m_Size = v9 + 1;
          v10 = &validAreas.m_Memory.m_pMemory[v8];
          if ( v10 != 0 )
            break;
        }
        v6 += 8LL;
        if ( v6 == v11 )
          goto LABEL_14;
      }
      v6 += 8LL;
      *v10 = v7;
    }
    while ( v6 != v11 );
LABEL_14:
    v2 = validAreas.m_Size;
  }
  CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::SetCount(pAreas, v2);
  if ( v2 > 0 )
  {
    v4 = 0;
    do
    {
      pAreas->m_Memory.m_pMemory[v4 / 8] = validAreas.m_Memory.m_pMemory[v4 / 8];
      v4 += 8LL;
    }
    while ( v4 != 8LL * (v2 - 1) + 8 );
  }
  if ( (validAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&validAreas.m_Memory);
    if ( (validAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&validAreas.m_Memory);
  }
}


