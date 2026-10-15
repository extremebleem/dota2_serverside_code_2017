
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RemoveDuplicates<COverlapList, RemoveDuplicates(COverlapList&)::__lambda12>  (line 148, @0x00000000020da3a0, libserver.so)  // inlines: AddMultipleToTail, COverlapHit, Construct<COverlapHit>, GrowMemory, GrowVector, InsertMultipleBefore, RnCollisionAttr_t, SetCountNonDestructively, operator[]
// calls: CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::RemoveMultipleFromTail, CUtlMemory<COverlapHit, int>::Grow
// callers: CGamePhysicsQueryInterface::EntitiesInBox, CGamePhysicsQueryInterface::EntitiesAlongRay, CGamePhysicsQueryInterface::EntitiesInSphere
void __fastcall RemoveDuplicates<COverlapList,RemoveDuplicates(COverlapList&)::{lambda(COverlapHit const&,COverlapHit const&)#2}>(
        COverlapList *const arr,
        const RemoveDuplicates::__lambda12 *const eq)
{
  __int64 m_Size; // r12
  COverlapHit *m_pMemory; // rdx
  int v5; // ebx
  uint32 *p_m_nEntityId; // rax
  uint32 v7; // ecx
  int v8; // esi
  __int64 v9; // r8
  char *v10; // rcx
  __int64 v11; // rax
  int m_nAllocationCount; // eax
  __int64 v13; // rdx
  char *v14; // rax

  m_Size = arr->m_list.m_Size;
  if ( m_Size > 1 )
  {
    m_pMemory = arr->m_list.m_Memory.m_pMemory;
    v5 = 1;
    p_m_nEntityId = &m_pMemory[2].m_ShapeAttributes.m_nEntityId;
    if ( m_pMemory[1].m_ShapeAttributes.m_nEntityId == m_pMemory->m_ShapeAttributes.m_nEntityId )
    {
      v8 = 2;
LABEL_7:
      if ( v8 < m_Size )
      {
        v9 = v8 << 6;
        while ( 1 )
        {
          v10 = m_pMemory + v9;
          v11 = (v5 - 1) << 6;
          if ( *(&m_pMemory->m_ShapeAttributes.m_nEntityId + v11) != *(&m_pMemory->m_ShapeAttributes.m_nEntityId + v9) )
          {
            ++v5;
            *(&m_pMemory[1].m_ShapeAttributes.m_nInteractsAs + v11) = *v10;
            *(&m_pMemory[1].m_ShapeAttributes.m_nInteractsWith + v11) = *(v10 + 1);
            *(&m_pMemory[1].m_ShapeAttributes.m_nInteractsExclude + v11) = *(v10 + 2);
            *(&m_pMemory[1].m_ShapeAttributes.m_nEntityId + v11) = *(v10 + 3);
            *(&m_pMemory[1].m_pSurfaceProperties + v11) = *(v10 + 4);
            *(&m_pMemory[1].m_hBody + v11) = *(v10 + 5);
            *(&m_pMemory[1].m_hShape + v11) = *(v10 + 6);
            *(&m_pMemory[1].m_bHitboxHit + v11) = v10[56];
            m_Size = arr->m_list.m_Size;
          }
          ++v8;
          v9 += 64;
          if ( v8 >= m_Size )
            break;
          m_pMemory = arr->m_list.m_Memory.m_pMemory;
        }
      }
      if ( v5 - m_Size > 0 )
      {
        m_nAllocationCount = arr->m_list.m_Memory.m_nAllocationCount;
        if ( m_nAllocationCount < v5 )
          CUtlMemory<COverlapHit,int>::Grow(&arr->m_list.m_Memory, v5 - m_nAllocationCount);
        arr->m_list.m_Size = v5;
        v13 = m_Size << 6;
        do
        {
          v14 = arr->m_list.m_Memory.m_pMemory + v13;
          if ( v14 != 0 )
          {
            *v14 = 0;
            *(v14 + 1) = 0;
            *(v14 + 2) = 0;
            v14[30] = 0;
            v14[31] = 7;
            *(v14 + 6) = 0;
            *(v14 + 14) = 0;
            v14[56] = 0;
          }
          v13 += 64;
        }
        while ( v13 != (m_Size + (v5 - m_Size - 1) + 1) << 6 );
      }
      else if ( v5 != m_Size )
      {
        CUtlVectorBase<COverlapHit,CUtlMemoryFixedGrowable<COverlapHit,64ul,int>>::RemoveMultipleFromTail(
          &arr->m_list,
          m_Size - v5);
      }
    }
    else
    {
      while ( ++v5 != m_Size )
      {
        v7 = *p_m_nEntityId;
        p_m_nEntityId += 16;
        if ( v7 == *(p_m_nEntityId - 32) )
        {
          v8 = v5 + 1;
          goto LABEL_7;
        }
      }
    }
  }
}


