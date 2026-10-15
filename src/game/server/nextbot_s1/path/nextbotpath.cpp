
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathOptimizerNextbot::FindNextOccludedNode  (line 20, @0x0000000002f39100, libserver.so)  // inlines: GetArea, GetSegment, HasAnyFlags, HasAttributes, operator[]
// calls: CLocomotionBase::HasPotentialGap
int __fastcall CPathOptimizerNextbot::FindNextOccludedNode(
        CPathOptimizerNextbot *const this,
        CPath *const rPath,
        const CPathCostBase *const rCostFunc,
        int nAnchorSeg)
{
  __int64 v5; // rbx
  const CLocomotionBase *v6; // r12
  int result; // eax
  int v8; // r15d
  CPathSegment *v9; // rdx
  Vector *p_vPos; // r14
  CPathSegment *v11; // rbx
  Vector *vDesiredTo; // [rsp+8h] [rbp-38h]

  v5 = nAnchorSeg;
  v6 = (*(this->m_rNextBot->_vptr_INextBotEventResponder + 68))(this->m_rNextBot, rPath, rCostFunc);
  result = rPath->m_nSegmentCount;
  if ( v6 != 0 && v5 >= 0 && v5 < result )
  {
    v8 = v5 + 1;
    if ( v5 + 1 < result && v8 >= 0 )
    {
      v9 = &rPath->m_path[v8];
      result = v5 + 1;
      if ( rPath->m_path[v8].type == CPathSegment::SegmentType::PATH_SEG_ON_GROUND )
      {
        result = v5 + 1;
        if ( (TheNavMesh->m_NavAreas.m_Memory.m_pMemory[rPath->m_path[v8].m_nAreaIndex]->m_AreaAttributes.m_Flags & 4) == 0 )
        {
          p_vPos = &rPath->m_path[v5].vPos;
          v11 = &rPath->m_path[v8 + 1];
          do
          {
            vDesiredTo = &v9->vPos;
            if ( (*(v6->_vptr_INextBotEventResponder + 109))(v6, p_vPos, &v9->vPos, 0, 0) == 0
              || CLocomotionBase::HasPotentialGap(v6, p_vPos, vDesiredTo, 0) )
            {
              break;
            }
            result = rPath->m_nSegmentCount;
            if ( result <= ++v8 )
              return result;
            v9 = v11;
            if ( v11->type != CPathSegment::SegmentType::PATH_SEG_ON_GROUND )
              break;
            ++v11;
          }
          while ( (TheNavMesh->m_NavAreas.m_Memory.m_pMemory[v9->m_nAreaIndex]->m_AreaAttributes.m_Flags & 4) == 0 );
          return v8;
        }
      }
    }
  }
  return result;
}


