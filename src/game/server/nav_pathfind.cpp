
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NavAreaBuildPath  (line 29, @0x0000000002ef4d20, libserver.so)  // inlines: AddArea, AddToClosedList, AddToTail, CNavHandle, CNavNeighborIterator, CNavOpenListElement, CVProfScope, Construct<CNavOpenListElement>, Cross, Cross3D, DistTo, DrawPolyOutline, Element, FastRSqrtFast, FastRemove, FastSqrt, FastSqrtEst, Get, GetArea, GetBool, GetCenter, GetElevatorEntity, GetFloat, GetInt, GetOpenList, GrowMemory, HorzArrow, Insert, IsClosed, IsEnabled, IsInCurrentNavMesh, Length, LengthSqr, Line, Mark, Max<float>, NavPathCalcTotalCost, NavPathUpdateAreaParentAndCostAndOpenList, NavPathUpdateStartAreaCostAndAddToOpenList, PercolateDown, PercolateUp, PopElement, RemoveAll, RemoveAtHead, Reset, RevaluateElement, SetCostSoFar, SetIndex, SetOrigin, SetPathLengthSoFar, SetPathParentArea, SetPathfindingPos, SetToIdentity, SetTotalCost, Sphere, StartAreaCost, Swap, Text, TraverseCost, UpdateAreaCost, Vector, VectorAdd, VectorDivide, VectorLength, VectorSubtract, VertexColor_t, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, _mm_sqrt_ss, memcpy, operator(), operator+, operator-, operator/, operator=, operator[], ~CVProfScope
// calls: CNavArea::IsBlocked, CNavArea::ClearSearchLists, CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::Insert, ISceneViewDebugOverlays::Sphere, CVProfile::ExitScope, CNavNeighborIterator::Next, CNavArea::GetOpenListCost, CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::PercolateUp, CNavPoly::ContainsPoint, SetIdentityMatrix, V_sprintf_safe<256ul>, CVProfile::EnterScope (15 total)
// callers: CPath::ComputePathCore, CPath::ComputePathMultiGoalCore
// strings: "%0.2f", "NextBot", "NavAreaBuildPath"
__int64 __fastcall NavAreaBuildPath(
        CNavArea *pStartArea,
        const CNavArea *pGoalArea,
        const Vector *pStartPos,
        const Vector *pGoalPos,
        const CPathCostBase *const rCostFunc,
        CNavArea **ppClosestAreaOut,
        float flMaxPathLength,
        const CUtlDelegate<bool(const CNavArea&)> *pClosestDelegate,
        int teamID,
        bool bIgnoreNavBlockers,
        float *pPathLengthOut)
{
  int m_enabled; // edx
  char v13; // al
  CNavOpenList *v14; // r15
  float v15; // xmm6_4
  float y; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  char v20; // al
  const CNavMesh *m_rNavMesh; // rax
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (**v23)(...); // rax
  int (**v24)(...); // rax
  int m_Size; // r14d
  CNavOpenListElement *m_pMemory; // rax
  CNavOpenListElement *v27; // rax
  CNavOpenListElement *v28; // r14
  CNavArea *m_pData; // rax
  CNavOpenListElement *v30; // rdx
  int i; // r12d
  int v32; // ebx
  CNavOpenListElement *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  CNavOpenListElement *v36; // rax
  CNavArea *v37; // r8
  const CNavMesh *m_pAssociatedNavMesh; // rdi
  float m_flTotalCost; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  CNavArea *v42; // rcx
  CNavOpenListElement *v43; // rax
  CNavOpenListElement *v44; // rsi
  CNavMesh *v45; // rax
  CNavArea *v46; // rcx
  CNavOpenListElement *v47; // rdx
  int v48; // r13d
  CNavArea *v49; // r14
  CNavOpenListElement *v50; // rax
  CNavOpenListElement *v51; // rax
  CNavOpenListElement *v52; // rdx
  CNavArea *v53; // rax
  CNavOpenListElement *v54; // rdx
  int j; // r12d
  int v56; // ebx
  CNavOpenListElement *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rsi
  CNavOpenListElement *v60; // rax
  CNavArea *v61; // r8
  const CNavMesh *v62; // rdi
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  CNavArea *v66; // rcx
  CNavOpenListElement *v67; // rax
  CNavOpenListElement *v68; // rsi
  CNavMesh *v69; // rax
  CNavArea *v70; // rcx
  CNavOpenListElement *v71; // rdx
  int v72; // r13d
  int (**v73)(...); // rax
  CNavArea *pArea; // rbx
  vec_t v76; // xmm0_4
  vec_t v77; // xmm2_4
  int (**v78)(...); // rax
  vec_t v79; // xmm5_4
  vec_t v80; // xmm4_4
  vec_t v81; // xmm3_4
  float v82; // xmm0_4
  char how; // cl
  float v84; // xmm2_4
  char v85; // al
  float v86; // xmm1_4
  NavEdgeIndex nInEdge; // dl
  int v88; // eax
  __int64 v89; // r12
  __int64 v90; // rdx
  CNavOpenListElement *v91; // rax
  CNavOpenListElement *v92; // rax
  CNavArea *v93; // rax
  CNavOpenListElement *v94; // rdx
  int (**v95)(...); // rax
  int (**v96)(...); // rax
  int (*v97)(...); // rax
  vec_t v98; // xmm2_4
  vec_t v99; // xmm1_4
  int (**v100)(...); // rax
  int (**v101)(...); // rax
  vec_t v102; // xmm2_4
  vec_t v103; // xmm1_4
  int (**v104)(...); // rax
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v106; // rdi
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rdx
  float *v108; // rax
  __int64 v109; // rax
  int v110; // r12d
  int v111; // eax
  CNavOpenListElement *v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rsi
  CNavOpenListElement *v115; // rax
  CNavArea *v116; // r8
  const CNavMesh *v117; // rdi
  float v118; // xmm2_4
  float v119; // xmm1_4
  float v120; // xmm0_4
  CNavArea *v121; // rcx
  CNavOpenListElement *v122; // rax
  CNavOpenListElement *v123; // rsi
  CNavMesh *v124; // rax
  CNavArea *v125; // rcx
  CNavOpenListElement *v126; // rdx
  bool v127; // zf
  int v128; // eax
  CNavArea *v129; // rax
  __int64 v130; // r12
  CNavOpenListElement *v131; // rdx
  CNavOpenListElement *v132; // rax
  CNavArea *v133; // rsi
  const CNavMesh *v134; // rcx
  float v135; // xmm2_4
  float v136; // xmm1_4
  float v137; // xmm0_4
  CNavArea *v138; // rdx
  CNavOpenListElement *v139; // rax
  CNavOpenListElement *v140; // rcx
  CNavMesh *v141; // rax
  CNavArea *v142; // rdx
  CNavOpenListElement *v143; // r12
  vec_t v144; // xmm6_4
  vec_t v145; // xmm5_4
  vec_t v146; // r14d
  ISceneViewDebugOverlays *v147; // r12
  float v148; // xmm0_4
  float v149; // xmm2_4
  int (**v150)(...); // rax
  unsigned int v151; // xmm0_4
  unsigned int v152; // xmm2_4
  int (**v153)(...); // rax
  float v154; // xmm0_4
  vec_t v155; // xmm0_4
  vec_t v156; // xmm2_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  int v159; // [rsp+18h] [rbp-398h]
  int m_nValue; // [rsp+1Ch] [rbp-394h]
  bool VProf_34; // [rsp+3Ah] [rbp-376h]
  unsigned __int8 v163; // [rsp+3Bh] [rbp-375h]
  float flClosestAreaCost; // [rsp+3Ch] [rbp-374h]
  float m_fValue; // [rsp+58h] [rbp-358h]
  float flNewTotalCost; // [rsp+68h] [rbp-348h]
  int v171; // [rsp+6Ch] [rbp-344h]
  bool IsBlocked; // [rsp+79h] [rbp-337h]
  float m_flPathLengthSoFar; // [rsp+7Ch] [rbp-334h]
  float m_flCostSoFar; // [rsp+80h] [rbp-330h]
  float flNewCost; // [rsp+84h] [rbp-32Ch]
  int flRemainingDistFromNew; // [rsp+90h] [rbp-320h]
  float flRemainingDistFromNewc; // [rsp+90h] [rbp-320h]
  CNavMesh *flRemainingDistFromNewa; // [rsp+90h] [rbp-320h]
  int flRemainingDistFromNewb; // [rsp+90h] [rbp-320h]
  CNavMesh *flRemainingDistFromOpenList; // [rsp+98h] [rbp-318h]
  float flRemainingDistFromOpenListc; // [rsp+98h] [rbp-318h]
  int flRemainingDistFromOpenLista; // [rsp+98h] [rbp-318h]
  int flRemainingDistFromOpenListb; // [rsp+98h] [rbp-318h]
  int v185; // [rsp+A0h] [rbp-310h]
  float flDebugVisTime; // [rsp+A4h] [rbp-30Ch]
  CNavArea *flNewPathLength; // [rsp+A8h] [rbp-308h]
  char flNewPathLengtha; // [rsp+A8h] [rbp-308h]
  float flNewPathLengthb; // [rsp+A8h] [rbp-308h]
  double flNewPathLengthc; // [rsp+A8h] [rbp-308h]
  int flNewPathLengthd; // [rsp+A8h] [rbp-308h]
  __int64 flNewPathLengthe; // [rsp+A8h] [rbp-308h]
  float v193; // [rsp+B0h] [rbp-300h]
  bool bFlowComputation[4]; // [rsp+B4h] [rbp-2FCh]
  vec_t v195; // [rsp+B8h] [rbp-2F8h]
  VertexColor_t v196; // [rsp+C0h] [rbp-2F0h] BYREF
  _BYTE v197[16]; // [rsp+D0h] [rbp-2E0h] BYREF
  _BYTE v198[16]; // [rsp+E0h] [rbp-2D0h] BYREF
  _BYTE v199[16]; // [rsp+F0h] [rbp-2C0h] BYREF
  _BYTE v200[16]; // [rsp+100h] [rbp-2B0h] BYREF
  _BYTE v201[16]; // [rsp+110h] [rbp-2A0h] BYREF
  _BYTE v202[16]; // [rsp+120h] [rbp-290h] BYREF
  _BYTE v203[16]; // [rsp+130h] [rbp-280h] BYREF
  _BYTE v204[16]; // [rsp+140h] [rbp-270h] BYREF
  _BYTE v205[16]; // [rsp+150h] [rbp-260h] BYREF
  _BYTE v206[16]; // [rsp+160h] [rbp-250h] BYREF
  _BYTE v207[16]; // [rsp+170h] [rbp-240h] BYREF
  VertexColor_t vecColor; // [rsp+180h] [rbp-230h] BYREF
  VertexColor_t v209; // [rsp+190h] [rbp-220h] BYREF
  _BYTE v210[16]; // [rsp+1A0h] [rbp-210h] BYREF
  _BYTE v211[16]; // [rsp+1B0h] [rbp-200h] BYREF
  Vector vActualStartPos; // [rsp+1C0h] [rbp-1F0h] BYREF
  Vector vActualGoalPos; // [rsp+1D0h] [rbp-1E0h] BYREF
  _DWORD v214[4]; // [rsp+1E0h] [rbp-1D0h] BYREF
  _DWORD v215[4]; // [rsp+1F0h] [rbp-1C0h] BYREF
  PathCostResult_t costResult; // [rsp+200h] [rbp-1B0h] BYREF
  CNavOpenListElement element; // [rsp+210h] [rbp-1A0h] BYREF
  CNavNeighborIterator neighborIter; // [rsp+230h] [rbp-180h] BYREF
  char visBuffer[256]; // [rsp+270h] [rbp-140h] BYREF
  unsigned __int64 v220; // [rsp+378h] [rbp-38h]

  v220 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_34 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "NavAreaBuildPath", 0, "NextBot", 0, 4);
  flDebugVisTime = nav_pathfind_debug.m_pParent->m_Value.m_fValue;
  v193 = fmaxf(flDebugVisTime, nav_pathfind_debug_errors.m_pParent->m_Value.m_fValue);
  m_nValue = nav_pathfind_debug_draw_costs.m_pParent->m_Value.m_nValue;
  v159 = nav_pathfind_debug_draw_total_costs.m_pParent->m_Value.m_nValue;
  m_fValue = nav_pathfind_inadmissable_heuristic_factor.m_pParent->m_Value.m_fValue;
  if ( pPathLengthOut != 0 )
    *pPathLengthOut = -1.0;
  if ( ppClosestAreaOut != 0 )
    *ppClosestAreaOut = pStartArea;
  if ( pStartArea == 0 )
  {
    if ( pStartPos != 0 && v193 > 0.0 )
    {
      v196.color = -13487361;
      ISceneViewDebugOverlays::Sphere(debugoverlay, pStartPos, 8.0, &v196, 0, v193);
    }
    goto LABEL_94;
  }
  if ( pGoalArea != 0 && (IsBlocked = CNavArea::IsBlocked(pGoalArea, teamID, bIgnoreNavBlockers)) )
    pGoalArea = 0;
  else
    IsBlocked = pGoalArea == 0;
  v163 = IsBlocked && pGoalPos == 0;
  if ( v163 != 0 )
  {
LABEL_94:
    v163 = 0;
    goto LABEL_95;
  }
  if ( pStartPos != 0 )
  {
    vActualStartPos = *pStartPos;
  }
  else
  {
    z = pStartArea->m_vCenter.z;
    x = pStartArea->m_vCenter.x;
    vActualStartPos.y = pStartArea->m_vCenter.y;
    vActualStartPos.z = z;
    vActualStartPos.x = x;
  }
  if ( pGoalPos != 0 )
  {
    vActualGoalPos = *pGoalPos;
  }
  else
  {
    v155 = pGoalArea->m_vCenter.z;
    v156 = pGoalArea->m_vCenter.x;
    vActualGoalPos.y = pGoalArea->m_vCenter.y;
    vActualGoalPos.z = v155;
    vActualGoalPos.x = v156;
  }
  v13 = *(pStartArea + 328);
  pStartArea->m_nPathInEdge = -1;
  pStartArea->m_pPathParent = 0;
  *(pStartArea + 328) = v13 & 0xF0 | 4;
  if ( pStartArea == pGoalArea )
  {
    if ( pPathLengthOut != 0 )
    {
      if ( pStartPos != 0 && pGoalPos != 0 )
        v154 = fsqrt(
                 (((pStartPos->x - pGoalPos->x) * (pStartPos->x - pGoalPos->x))
                + ((pStartPos->y - pGoalPos->y) * (pStartPos->y - pGoalPos->y)))
               + ((pStartPos->z - pGoalPos->z) * (pStartPos->z - pGoalPos->z)));
      else
        v154 = 0.0;
      *pPathLengthOut = v154;
    }
    goto LABEL_209;
  }
  costResult.m_flSegmentCost = 0.0;
  costResult.m_vPos = vActualStartPos;
  v14 = CNavArea::ms_pOpenList;
  CNavArea::ClearSearchLists();
  v15 = vActualStartPos.x;
  y = vActualStartPos.y;
  v17 = vActualStartPos.z;
  v18 = (((v15 - vActualGoalPos.x) * (v15 - vActualGoalPos.x)) + ((y - vActualGoalPos.y) * (y - vActualGoalPos.y)))
      + ((v17 - vActualGoalPos.z) * (v17 - vActualGoalPos.z));
  v19 = 0.0;
  if ( v18 > 0.0 )
    v19 = (1.0 / fsqrt(v18)) * v18;
  element.m_flCostSoFar = 0.0;
  element.m_flPathLengthSoFar = 0.0;
  v20 = *(pStartArea + 328);
  pStartArea->m_nPathInEdge = -1;
  pStartArea->m_vPathfindingPos.x = v15;
  pStartArea->m_pPathParent = 0;
  pStartArea->m_vPathfindingPos.y = y;
  pStartArea->m_vPathfindingPos.z = v17;
  element.m_pNavArea.m_pData = pStartArea;
  *(pStartArea + 328) = v20 & 0xF0 | 4;
  m_rNavMesh = pStartArea->m_rNavMesh;
  element.m_flTotalCost = (v19 * m_fValue) + 0.0;
  element.m_pNavArea.m_pAssociatedNavMesh = m_rNavMesh;
  CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::Insert(
    &v14->m_PriorityQueue,
    &element);
  if ( flDebugVisTime > 0.0 )
  {
    *(&neighborIter.m_Info.pArea + 1) = vActualStartPos.y + 0.0;
    *&neighborIter.m_Info.pLadder = vActualStartPos.z + 150.0;
    *&neighborIter.m_Info.pArea = vActualStartPos.x + 0.0;
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    v197[0] = -1;
    memset(&v197[1], 50, 2);
    v197[3] = -1;
    vptr_ISceneViewDebugOverlays[13](debugoverlay, &vActualStartPos, &neighborIter, v197, 1, flDebugVisTime);
    *(&neighborIter.m_Info.pArea + 1) = vActualGoalPos.y + 0.0;
    *&neighborIter.m_Info.pLadder = vActualGoalPos.z + 150.0;
    *&neighborIter.m_Info.pArea = vActualGoalPos.x + 0.0;
    v23 = debugoverlay->_vptr_ISceneViewDebugOverlays;
    v198[0] = 50;
    v198[1] = -1;
    v198[2] = 50;
    v198[3] = -1;
    v23[13](debugoverlay, &vActualGoalPos, &neighborIter, v198, 1, flDebugVisTime);
    *(&neighborIter.m_Info.pArea + 1) = vActualGoalPos.y + 0.0;
    *&neighborIter.m_Info.pLadder = vActualGoalPos.z + 150.0;
    *&neighborIter.m_Info.pArea = vActualGoalPos.x + 0.0;
    *(&element.m_pNavArea.m_pData + 1) = vActualStartPos.y + 0.0;
    *&element.m_pNavArea.m_pAssociatedNavMesh = vActualStartPos.z + 150.0;
    *&element.m_pNavArea.m_pData = vActualStartPos.x + 0.0;
    v24 = debugoverlay->_vptr_ISceneViewDebugOverlays;
    v199[0] = -56;
    v199[1] = -56;
    v199[2] = -56;
    v199[3] = -1;
    v24[34](debugoverlay, &element, &neighborIter, v199, 1, 3.0, flDebugVisTime);
  }
  flClosestAreaCost = costResult.m_flSegmentCost;
LABEL_22:
  while ( 1 )
  {
    m_Size = v14->m_PriorityQueue.m_heap.m_Size;
    if ( v14->m_PriorityQueue.m_heap.m_Size <= 0 )
      break;
    while ( 1 )
    {
      m_pMemory = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
      m_flCostSoFar = m_pMemory->m_flCostSoFar;
      flNewPathLength = m_pMemory->m_pNavArea.m_pData;
      m_flPathLengthSoFar = m_pMemory->m_flPathLengthSoFar;
      flRemainingDistFromOpenList = m_pMemory->m_pNavArea.m_pAssociatedNavMesh;
      if ( TheNavMesh != flRemainingDistFromOpenList
        || flNewPathLength == 0
        || (flNewPathLength->m_nOpenListHeapIndex = -1,
            m_Size = v14->m_PriorityQueue.m_heap.m_Size,
            v14->m_PriorityQueue.m_heap.m_Size > 0) )
      {
        if ( --m_Size != 0 )
        {
          v27 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          v28 = &v27[m_Size];
          v27->m_pNavArea.m_pData = v28->m_pNavArea.m_pData;
          v27->m_pNavArea.m_pAssociatedNavMesh = v28->m_pNavArea.m_pAssociatedNavMesh;
          *&v27->m_flTotalCost = *&v28->m_flTotalCost;
          *&v27->m_flPathLengthSoFar = *&v28->m_flPathLengthSoFar;
          m_Size = v14->m_PriorityQueue.m_heap.m_Size - 1;
        }
        v14->m_PriorityQueue.m_heap.m_Size = m_Size;
        if ( m_Size > 0 )
        {
          m_pData = 0;
          v30 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          if ( v30->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
            m_pData = v30->m_pNavArea.m_pData;
          m_pData->m_nOpenListHeapIndex = 0;
          m_Size = v14->m_PriorityQueue.m_heap.m_Size;
        }
      }
      if ( m_Size / 2 > 0 )
      {
        for ( i = 0; ; i = v32 )
        {
          v48 = 2 * i + 2;
          v32 = 2 * i + 1;
          if ( m_Size <= v32 )
          {
            v32 = i;
            if ( m_Size <= v48 )
              goto LABEL_33;
          }
          else
          {
            if ( !v14->m_PriorityQueue.m_LessFunc(
                    &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[i],
                    &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v32]) )
              v32 = i;
            if ( m_Size <= v48 )
            {
LABEL_33:
              if ( i == v32 )
                break;
              goto LABEL_34;
            }
          }
          if ( v14->m_PriorityQueue.m_LessFunc(
                 &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v32],
                 &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v48]) )
          {
            v32 = 2 * i + 2;
          }
          if ( i == v32 )
            break;
LABEL_34:
          v33 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          v34 = v32;
          v35 = i;
          v36 = &v33[v35];
          v37 = v33[v35].m_pNavArea.m_pData;
          m_pAssociatedNavMesh = v33[v35].m_pNavArea.m_pAssociatedNavMesh;
          m_flTotalCost = v33[v35].m_flTotalCost;
          v36->m_pNavArea.m_pData = v33[v34].m_pNavArea.m_pData;
          v40 = v33[v35].m_flCostSoFar;
          v41 = v33[v35].m_flPathLengthSoFar;
          v36->m_pNavArea.m_pAssociatedNavMesh = v33[v34].m_pNavArea.m_pAssociatedNavMesh;
          *&v36->m_flTotalCost = *&v33[v34].m_flTotalCost;
          v36->m_flPathLengthSoFar = v33[v34].m_flPathLengthSoFar;
          v42 = 0;
          v43 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v34];
          v43->m_pNavArea.m_pData = v37;
          v43->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
          v43->m_flTotalCost = m_flTotalCost;
          v43->m_flCostSoFar = v40;
          v43->m_flPathLengthSoFar = v41;
          v44 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v35];
          v45 = TheNavMesh;
          if ( v44->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
            v42 = v44->m_pNavArea.m_pData;
          v42->m_nOpenListHeapIndex = i;
          v46 = 0;
          v47 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v34];
          if ( v45 == v47->m_pNavArea.m_pAssociatedNavMesh )
            v46 = v47->m_pNavArea.m_pData;
          v46->m_nOpenListHeapIndex = v32;
          if ( m_Size / 2 <= v32 )
            goto LABEL_48;
        }
      }
      v45 = TheNavMesh;
LABEL_48:
      v49 = 0;
      if ( v45 == flRemainingDistFromOpenList )
        v49 = flNewPathLength;
      v49->m_nMarker = CNavArea::ms_nMasterMarker;
      if ( flDebugVisTime > 0.0 && INavDrawArea::ms_pInst != 0 )
        (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
          INavDrawArea::ms_pInst,
          v49,
          4281479880LL,
          1,
          &vec3_origin,
          flDebugVisTime,
          -6.0);
      if ( !CNavArea::IsBlocked(v49, teamID, bIgnoreNavBlockers) )
        break;
      if ( v193 <= 0.0 )
        goto LABEL_22;
      neighborIter.m_Info.pArea = 0;
      LODWORD(neighborIter.m_Info.pLadder) = 1065353216;
      if ( INavDrawArea::ms_pInst == 0 )
        goto LABEL_22;
      (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
        INavDrawArea::ms_pInst,
        v49,
        4281479935LL,
        0,
        &neighborIter,
        v193,
        0.0);
      m_Size = v14->m_PriorityQueue.m_heap.m_Size;
      if ( v14->m_PriorityQueue.m_heap.m_Size <= 0 )
        goto LABEL_57;
    }
    if ( pGoalArea == v49 || IsBlocked && pGoalPos != 0 && CNavPoly::ContainsPoint(v49, pGoalPos) )
    {
      if ( ppClosestAreaOut != 0 )
        *ppClosestAreaOut = v49;
      if ( pPathLengthOut != 0 )
        *pPathLengthOut = m_flPathLengthSoFar;
      if ( flDebugVisTime > 0.0 )
      {
        v144 = v49->m_vCenter.y;
        v145 = v49->m_vCenter.x;
        v200[0] = 50;
        v195 = v144;
        v146 = v49->m_vCenter.z;
        *bFlowComputation = v145;
        v147 = debugoverlay;
        v200[1] = -1;
        v200[2] = 50;
        v200[3] = -1;
        SetIdentityMatrix(&neighborIter);
        HIDWORD(neighborIter.m_Info.pLadder) = *bFlowComputation;
        *(&neighborIter.m_rNavArea + 1) = v195;
        *(&neighborIter.m_nEdgeIndex + 1) = v146;
        (*(v147->_vptr_ISceneViewDebugOverlays + 18))(v147, &neighborIter, v200, 1, 10.0, flDebugVisTime);
      }
      m_Size = v14->m_PriorityQueue.m_heap.m_Size;
      flNewPathLengtha = 1;
      goto LABEL_58;
    }
    if ( flMaxPathLength <= 0.0 || m_flPathLengthSoFar <= flMaxPathLength )
    {
      neighborIter.m_rNavArea = v49;
      neighborIter.m_nEdgeIndex = 0;
      neighborIter.m_SearchWhere = CNavNeighborIterator::SearchWhere::SEARCH_FLOOR;
      neighborIter.m_nSearchIndex = -1;
      neighborIter.m_pFloorList = v49->m_connect;
      neighborIter.m_bLadderUp = 1;
      neighborIter.m_nLadderTopDir = 0;
      neighborIter.m_Info.pArea = 0;
      neighborIter.m_Info.how = NavTraverseType::NUM_TRAVERSE_TYPES;
      neighborIter.m_Info.nInEdge = -1;
      neighborIter.m_Info.pLadder = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            if ( !CNavNeighborIterator::Next(&neighborIter) )
              goto LABEL_22;
            pArea = neighborIter.m_Info.pArea;
          }
          while ( neighborIter.m_Info.pArea == v49
               || neighborIter.m_Info.pArea == 0
               || neighborIter.m_Info.pArea->m_nMarker == CNavArea::ms_nMasterMarker
               && neighborIter.m_Info.pArea->m_nOpenListHeapIndex < 0 );
          if ( !CNavArea::IsBlocked(neighborIter.m_Info.pArea, teamID, bIgnoreNavBlockers) )
            break;
          if ( v193 > 0.0 )
          {
            element.m_pNavArea.m_pData = 0;
            LODWORD(element.m_pNavArea.m_pAssociatedNavMesh) = 1065353216;
            if ( INavDrawArea::ms_pInst != 0 )
              (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
                INavDrawArea::ms_pInst,
                v49,
                4281479935LL,
                0,
                &element,
                v193,
                0.0);
          }
        }
        if ( (*(rCostFunc->_vptr_CPathCostBase + 2))(rCostFunc, neighborIter.m_Info.pArea, v49) == 0 )
          break;
        if ( neighborIter.m_Info.how <= NavTraverseType::GO_WEST )
        {
          (*(rCostFunc->_vptr_CPathCostBase + 5))(
            rCostFunc,
            &costResult,
            v49,
            neighborIter.m_Info.pArea,
            SLOBYTE(neighborIter.m_Info.how),
            neighborIter.m_Info.nInEdge,
            &vActualGoalPos);
        }
        else if ( neighborIter.m_Info.how > NavTraverseType::GO_LADDER_DOWN )
        {
          m_pLaddersAndElevators = v49->m_pLaddersAndElevators;
          if ( m_pLaddersAndElevators != 0
            && neighborIter.m_Info.how == NavTraverseType::GO_ELEVATOR
            && m_pLaddersAndElevators->m_pElevatorEntity != 0 )
          {
            (*(rCostFunc->_vptr_CPathCostBase + 7))(rCostFunc, &costResult, v49, neighborIter.m_Info.pArea);
          }
        }
        else if ( neighborIter.m_Info.pLadder != 0 )
        {
          (*(rCostFunc->_vptr_CPathCostBase + 6))(rCostFunc, &costResult, v49, neighborIter.m_Info.pArea);
        }
        if ( costResult.m_flSegmentCost < 0.0 )
        {
LABEL_149:
          if ( v193 > 0.0 )
          {
            element.m_pNavArea.m_pData = 0;
            LODWORD(element.m_pNavArea.m_pAssociatedNavMesh) = 1065353216;
            if ( INavDrawArea::ms_pInst != 0 )
            {
              (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
                INavDrawArea::ms_pInst,
                v49,
                4284809215LL,
                0,
                &element,
                v193,
                0.0);
              element.m_pNavArea.m_pData = 0;
              LODWORD(element.m_pNavArea.m_pAssociatedNavMesh) = 1065353216;
              if ( INavDrawArea::ms_pInst != 0 )
                (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
                  INavDrawArea::ms_pInst,
                  pArea,
                  4284769535LL,
                  0,
                  &element,
                  v193,
                  0.0);
            }
          }
        }
        else
        {
          flNewPathLengthb = 0.0;
          flNewCost = costResult.m_flSegmentCost + m_flCostSoFar;
          if ( flMaxPathLength > 0.0 )
            flNewPathLengthb = fsqrt(
                                 (((costResult.m_vPos.x - v49->m_vPathfindingPos.x)
                                 * (costResult.m_vPos.x - v49->m_vPathfindingPos.x))
                                + ((costResult.m_vPos.y - v49->m_vPathfindingPos.y)
                                 * (costResult.m_vPos.y - v49->m_vPathfindingPos.y)))
                               + ((costResult.m_vPos.z - v49->m_vPathfindingPos.z)
                                * (costResult.m_vPos.z - v49->m_vPathfindingPos.z)))
                             + m_flPathLengthSoFar;
          if ( flDebugVisTime > 0.0 )
          {
            if ( pArea->m_nOpenListHeapIndex < 0 )
            {
              if ( INavDrawArea::ms_pInst == 0 )
              {
LABEL_127:
                flRemainingDistFromNew = pArea->m_nOpenListHeapIndex;
                goto LABEL_128;
              }
              (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
                INavDrawArea::ms_pInst,
                pArea,
                4294927460LL,
                1,
                &vec3_origin,
                flDebugVisTime,
                0.0);
            }
            else
            {
              v76 = pArea->m_vCenter.x;
              v77 = pArea->m_vCenter.y;
              *&element.m_pNavArea.m_pAssociatedNavMesh = pArea->m_vCenter.z;
              element.m_pNavArea.m_pData = __PAIR64__(LODWORD(v77), LODWORD(v76));
              v78 = debugoverlay->_vptr_ISceneViewDebugOverlays;
              v201[0] = -1;
              v201[1] = 50;
              v201[2] = -1;
              v201[3] = -1;
              v78[28](debugoverlay, &element, v201, 1, 10.0, flDebugVisTime);
            }
          }
          flRemainingDistFromNew = pArea->m_nOpenListHeapIndex;
          if ( flRemainingDistFromNew < 0 )
          {
LABEL_128:
            v79 = costResult.m_vPos.x;
            v80 = costResult.m_vPos.y;
            v81 = costResult.m_vPos.z;
            v82 = (costResult.m_vPos.x - vActualGoalPos.x) * (costResult.m_vPos.x - vActualGoalPos.x);
            how = neighborIter.m_Info.how;
            v84 = (costResult.m_vPos.y - vActualGoalPos.y) * (costResult.m_vPos.y - vActualGoalPos.y);
            v85 = *(pArea + 328);
            v86 = (costResult.m_vPos.z - vActualGoalPos.z) * (costResult.m_vPos.z - vActualGoalPos.z);
            nInEdge = neighborIter.m_Info.nInEdge;
            pArea->m_pPathParent = v49;
            pArea->m_vPathfindingPos.x = v79;
            pArea->m_vPathfindingPos.y = v80;
            pArea->m_vPathfindingPos.z = v81;
            *(pArea + 328) = how & 0xF | v85 & 0xF0;
            pArea->m_nPathInEdge = nInEdge;
            flNewTotalCost = ((((v82 + v84) + v86) * (1.0 / fsqrt((v82 + v84) + v86))) * m_fValue) + flNewCost;
            if ( flRemainingDistFromNew < 0 )
            {
              flRemainingDistFromNewa = pArea->m_rNavMesh;
              v88 = v14->m_PriorityQueue.m_heap.m_Size;
              flRemainingDistFromOpenLista = v14->m_PriorityQueue.m_heap.m_Size;
              if ( v14->m_PriorityQueue.m_heap.m_Size == v14->m_PriorityQueue.m_heap.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CNavOpenListElement,int>::Grow(&v14->m_PriorityQueue.m_heap.m_Memory, 1);
                v88 = v14->m_PriorityQueue.m_heap.m_Size;
              }
              v89 = flRemainingDistFromOpenLista;
              v14->m_PriorityQueue.m_heap.m_Size = v88 + 1;
              v90 = flRemainingDistFromOpenLista;
              v91 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v90];
              if ( v91 != 0 )
              {
                v91->m_pNavArea.m_pData = 0;
                v91->m_pNavArea.m_pAssociatedNavMesh = 0;
                v91->m_flTotalCost = 0.0;
                v91->m_flCostSoFar = 0.0;
                v91->m_flPathLengthSoFar = 0.0;
                v92 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v90];
              }
              else
              {
                v92 = 0;
              }
              v92->m_pNavArea.m_pData = pArea;
              v92->m_flTotalCost = flNewTotalCost;
              v92->m_pNavArea.m_pAssociatedNavMesh = flRemainingDistFromNewa;
              v92->m_flCostSoFar = flNewCost;
              v92->m_flPathLengthSoFar = flNewPathLengthb;
              v93 = 0;
              v94 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v90];
              if ( v94->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
                v93 = v94->m_pNavArea.m_pData;
              v93->m_nOpenListHeapIndex = flRemainingDistFromOpenLista;
              if ( v14->m_PriorityQueue.m_heap.m_Size > flRemainingDistFromOpenLista
                && flRemainingDistFromOpenLista != 0 )
              {
                while ( 1 )
                {
                  v130 = v89;
                  flRemainingDistFromNewb = (flRemainingDistFromOpenLista + 1) / 2 - 1;
                  flNewPathLengthe = flRemainingDistFromNewb;
                  if ( v14->m_PriorityQueue.m_LessFunc(
                         &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v130],
                         &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[flNewPathLengthe]) )
                  {
                    break;
                  }
                  v131 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
                  v132 = &v131[flNewPathLengthe];
                  v133 = v131[flRemainingDistFromNewb].m_pNavArea.m_pData;
                  v132->m_pNavArea.m_pData = v131[v130].m_pNavArea.m_pData;
                  v134 = v131[flNewPathLengthe].m_pNavArea.m_pAssociatedNavMesh;
                  v135 = v131[flNewPathLengthe].m_flTotalCost;
                  v136 = v131[flNewPathLengthe].m_flCostSoFar;
                  v137 = v131[flNewPathLengthe].m_flPathLengthSoFar;
                  v132->m_pNavArea.m_pAssociatedNavMesh = v131[v130].m_pNavArea.m_pAssociatedNavMesh;
                  *&v132->m_flTotalCost = *&v131[v130].m_flTotalCost;
                  v132->m_flPathLengthSoFar = v131[v130].m_flPathLengthSoFar;
                  v138 = 0;
                  v139 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v130];
                  v139->m_pNavArea.m_pData = v133;
                  v139->m_pNavArea.m_pAssociatedNavMesh = v134;
                  v139->m_flTotalCost = v135;
                  v139->m_flCostSoFar = v136;
                  v139->m_flPathLengthSoFar = v137;
                  v140 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[flNewPathLengthe];
                  v141 = TheNavMesh;
                  if ( v140->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
                    v138 = v140->m_pNavArea.m_pData;
                  v138->m_nOpenListHeapIndex = flRemainingDistFromNewb;
                  v142 = 0;
                  v143 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v130];
                  if ( v141 == v143->m_pNavArea.m_pAssociatedNavMesh )
                    v142 = v143->m_pNavArea.m_pData;
                  v142->m_nOpenListHeapIndex = flRemainingDistFromOpenLista;
                  if ( (flRemainingDistFromOpenLista + 1) / 2 == 1 )
                    break;
                  flRemainingDistFromOpenLista = (flRemainingDistFromOpenLista + 1) / 2 - 1;
                  v89 = flRemainingDistFromNewb;
                }
              }
              goto LABEL_136;
            }
            v108 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[flRemainingDistFromNew];
            v108[4] = flNewTotalCost;
            v108[5] = flNewCost;
            v108[6] = flNewPathLengthb;
            v185 = v14->m_PriorityQueue.m_heap.m_Size;
            v171 = v14->m_PriorityQueue.m_heap.m_Size / 2;
            if ( flRemainingDistFromNew >= v171 )
            {
              v128 = v14->m_PriorityQueue.m_heap.m_Size;
              goto LABEL_180;
            }
            flNewPathLengthd = flRemainingDistFromNew;
            do
            {
              v110 = 2 * flNewPathLengthd + 1;
              flRemainingDistFromOpenListb = 2 * flNewPathLengthd + 2;
              if ( v185 <= v110 )
              {
                v109 = flRemainingDistFromOpenListb;
                v110 = flNewPathLengthd;
                if ( v185 <= flRemainingDistFromOpenListb )
                  goto LABEL_165;
              }
              else
              {
                v127 = !v14->m_PriorityQueue.m_LessFunc(
                          &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[flNewPathLengthd],
                          &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v110]);
                v109 = flRemainingDistFromOpenListb;
                if ( v127 )
                  v110 = flNewPathLengthd;
                if ( v185 <= flRemainingDistFromOpenListb )
                {
LABEL_165:
                  v111 = flNewPathLengthd;
                  if ( flNewPathLengthd == v110 )
                    break;
                  goto LABEL_166;
                }
              }
              v127 = !v14->m_PriorityQueue.m_LessFunc(
                        &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v110],
                        &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v109]);
              v111 = flNewPathLengthd;
              if ( !v127 )
                v110 = 2 * flNewPathLengthd + 2;
              if ( flNewPathLengthd == v110 )
                break;
LABEL_166:
              v112 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
              v113 = v110;
              v114 = v111;
              v115 = &v112[v114];
              v116 = v112[v114].m_pNavArea.m_pData;
              v117 = v112[v114].m_pNavArea.m_pAssociatedNavMesh;
              v118 = v112[v114].m_flTotalCost;
              v115->m_pNavArea.m_pData = v112[v113].m_pNavArea.m_pData;
              v119 = v112[v114].m_flCostSoFar;
              v120 = v112[v114].m_flPathLengthSoFar;
              v115->m_pNavArea.m_pAssociatedNavMesh = v112[v113].m_pNavArea.m_pAssociatedNavMesh;
              *&v115->m_flTotalCost = *&v112[v113].m_flTotalCost;
              v115->m_flPathLengthSoFar = v112[v113].m_flPathLengthSoFar;
              v121 = 0;
              v122 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v113];
              v122->m_pNavArea.m_pData = v116;
              v122->m_pNavArea.m_pAssociatedNavMesh = v117;
              v122->m_flTotalCost = v118;
              v122->m_flCostSoFar = v119;
              v122->m_flPathLengthSoFar = v120;
              v123 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v114];
              v124 = TheNavMesh;
              if ( v123->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
                v121 = v123->m_pNavArea.m_pData;
              v121->m_nOpenListHeapIndex = flNewPathLengthd;
              v125 = 0;
              v126 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v113];
              if ( v124 == v126->m_pNavArea.m_pAssociatedNavMesh )
                v125 = v126->m_pNavArea.m_pData;
              v125->m_nOpenListHeapIndex = v110;
              flNewPathLengthd = v110;
            }
            while ( v171 > v110 );
            if ( flRemainingDistFromNew == flNewPathLengthd )
            {
              v128 = v14->m_PriorityQueue.m_heap.m_Size;
LABEL_180:
              if ( flRemainingDistFromNew < v128 )
                CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::PercolateUp(
                  &v14->m_PriorityQueue,
                  flRemainingDistFromNew);
            }
LABEL_136:
            if ( flDebugVisTime > 0.0 )
            {
              flNewPathLengthc = flDebugVisTime;
              v95 = debugoverlay->_vptr_ISceneViewDebugOverlays;
              memset(v202, 100, 3);
              v202[3] = -1;
              v95[13](debugoverlay, &v49->m_vPathfindingPos, &costResult.m_vPos, v202, 1, flDebugVisTime);
              v96 = debugoverlay->_vptr_ISceneViewDebugOverlays;
              v211[0] = -106;
              v211[1] = -6;
              v211[2] = -106;
              v211[3] = -1;
              v97 = v96[29];
              v215[0] = 1084227584;
              v215[1] = 1084227584;
              v215[2] = 1084227584;
              v214[0] = -1063256064;
              v214[1] = -1063256064;
              v214[2] = -1063256064;
              v97(debugoverlay, &costResult.m_vPos, v214, v215, v211, 1, flDebugVisTime);
              v98 = v49->m_vCenter.y;
              v99 = v49->m_vCenter.z;
              *&element.m_pNavArea.m_pData = v49->m_vCenter.x;
              *(&element.m_pNavArea.m_pData + 1) = v98;
              *&element.m_pNavArea.m_pAssociatedNavMesh = v99;
              v100 = debugoverlay->_vptr_ISceneViewDebugOverlays;
              memset(v203, 100, 3);
              v203[3] = -1;
              v100[13](debugoverlay, &element, &v49->m_vPathfindingPos, v203, 1, flDebugVisTime);
              v101 = debugoverlay->_vptr_ISceneViewDebugOverlays;
              memset(v204, 100, 3);
              v204[3] = -1;
              v101[34](debugoverlay, &v49->m_vPathfindingPos, &costResult.m_vPos, v204, 1, 3.0, flDebugVisTime);
              v102 = pArea->m_vCenter.y;
              v103 = pArea->m_vCenter.z;
              *&element.m_pNavArea.m_pData = pArea->m_vCenter.x;
              *(&element.m_pNavArea.m_pData + 1) = v102;
              *&element.m_pNavArea.m_pAssociatedNavMesh = v103;
              v104 = debugoverlay->_vptr_ISceneViewDebugOverlays;
              memset(v205, 100, 3);
              v205[3] = -1;
              v104[13](debugoverlay, &costResult.m_vPos, &element, v205, 1, flDebugVisTime);
              if ( m_nValue != 0 )
              {
                V_sprintf_safe<256ul>(visBuffer, "%0.2f", flNewCost);
                *&v151 = (v49->m_vPathfindingPos.x + costResult.m_vPos.x) * 0.5;
                *&v152 = (v49->m_vPathfindingPos.y + costResult.m_vPos.y) * 0.5;
                *&element.m_pNavArea.m_pAssociatedNavMesh = (v49->m_vPathfindingPos.z + costResult.m_vPos.z) * 0.5;
                element.m_pNavArea.m_pData = __PAIR64__(v152, v151);
                v153 = debugoverlay->_vptr_ISceneViewDebugOverlays;
                v206[0] = -1;
                v206[1] = -1;
                v206[2] = -1;
                v206[3] = -1;
                v153[25](debugoverlay, &element, 0, visBuffer, v206, 0.0, flNewPathLengthc);
              }
              if ( v159 != 0 )
              {
                V_sprintf_safe<256ul>(visBuffer, "%0.2f", flNewTotalCost);
                v148 = ((v49->m_vPathfindingPos.z + costResult.m_vPos.z) * 0.5) + 10.0;
                v149 = ((v49->m_vPathfindingPos.x + costResult.m_vPos.x) * 0.5) + 0.0;
                *(&element.m_pNavArea.m_pData + 1) = ((v49->m_vPathfindingPos.y + costResult.m_vPos.y) * 0.5) + 0.0;
                *&element.m_pNavArea.m_pAssociatedNavMesh = v148;
                *&element.m_pNavArea.m_pData = v149;
                v150 = debugoverlay->_vptr_ISceneViewDebugOverlays;
                v207[0] = -1;
                v207[1] = -1;
                v207[2] = -1;
                v207[3] = -1;
                v150[25](debugoverlay, &element, 0, visBuffer, v207, 0.0, flNewPathLengthc);
              }
            }
            if ( ppClosestAreaOut != 0 && flClosestAreaCost > flNewTotalCost )
            {
              if ( pClosestDelegate == 0 )
                goto LABEL_147;
              pfn = pClosestDelegate->m_Closure.m_pFunction.__pfn;
              v106 = (pClosestDelegate->m_Closure.m_pthis + pClosestDelegate->m_Closure.m_pFunction.__delta);
              if ( (pfn & 1) != 0 )
                pfn = *(pfn + *v106 - 1);
              if ( (pfn)(v106, pArea) != 0 )
              {
LABEL_147:
                flClosestAreaCost = flNewTotalCost;
                *ppClosestAreaOut = pArea;
              }
            }
          }
          else
          {
            flRemainingDistFromOpenListc = (((pArea->m_vPathfindingPos.x - vActualGoalPos.x)
                                           * (pArea->m_vPathfindingPos.x - vActualGoalPos.x))
                                          + ((pArea->m_vPathfindingPos.y - vActualGoalPos.y)
                                           * (pArea->m_vPathfindingPos.y - vActualGoalPos.y)))
                                         + ((pArea->m_vPathfindingPos.z - vActualGoalPos.z)
                                          * (pArea->m_vPathfindingPos.z - vActualGoalPos.z));
            flRemainingDistFromNewc = (((costResult.m_vPos.x - vActualGoalPos.x)
                                      * (costResult.m_vPos.x - vActualGoalPos.x))
                                     + ((costResult.m_vPos.y - vActualGoalPos.y)
                                      * (costResult.m_vPos.y - vActualGoalPos.y)))
                                    + ((costResult.m_vPos.z - vActualGoalPos.z)
                                     * (costResult.m_vPos.z - vActualGoalPos.z));
            if ( ((flRemainingDistFromNewc * (1.0 / fsqrt(flRemainingDistFromNewc))) + flNewCost) <= (CNavArea::GetOpenListCost(pArea) + (flRemainingDistFromOpenListc * (1.0 / fsqrt(flRemainingDistFromOpenListc)))) )
              goto LABEL_127;
          }
        }
      }
      costResult.m_flSegmentCost = -1.0;
      goto LABEL_149;
    }
  }
LABEL_57:
  flNewPathLengtha = 0;
LABEL_58:
  if ( m_Size <= 0 )
    goto LABEL_84;
  do
  {
    v50 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
    if ( v50->m_pNavArea.m_pAssociatedNavMesh != TheNavMesh
      || (v129 = v50->m_pNavArea.m_pData) == 0
      || (v129->m_nOpenListHeapIndex = -1,
          m_Size = v14->m_PriorityQueue.m_heap.m_Size,
          v14->m_PriorityQueue.m_heap.m_Size > 0) )
    {
      if ( --m_Size != 0 )
      {
        v51 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        v52 = &v51[m_Size];
        v51->m_pNavArea.m_pData = v52->m_pNavArea.m_pData;
        v51->m_pNavArea.m_pAssociatedNavMesh = v52->m_pNavArea.m_pAssociatedNavMesh;
        *&v51->m_flTotalCost = *&v52->m_flTotalCost;
        *&v51->m_flPathLengthSoFar = *&v52->m_flPathLengthSoFar;
        m_Size = v14->m_PriorityQueue.m_heap.m_Size - 1;
      }
      v14->m_PriorityQueue.m_heap.m_Size = m_Size;
      if ( m_Size > 0 )
      {
        v53 = 0;
        v54 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        if ( v54->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
          v53 = v54->m_pNavArea.m_pData;
        v53->m_nOpenListHeapIndex = 0;
        m_Size = v14->m_PriorityQueue.m_heap.m_Size;
      }
    }
    if ( m_Size / 2 <= 0 )
      goto LABEL_58;
    for ( j = 0; ; j = v56 )
    {
      v72 = 2 * j + 2;
      v56 = 2 * j + 1;
      if ( v56 < m_Size )
        break;
      v56 = j;
      if ( v72 < m_Size )
        goto LABEL_80;
LABEL_69:
      if ( j == v56 )
        goto LABEL_83;
LABEL_70:
      v57 = v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
      v58 = v56;
      v59 = j;
      v60 = &v57[v59];
      v61 = v57[v59].m_pNavArea.m_pData;
      v62 = v57[v59].m_pNavArea.m_pAssociatedNavMesh;
      v63 = v57[v59].m_flTotalCost;
      v60->m_pNavArea.m_pData = v57[v58].m_pNavArea.m_pData;
      v64 = v57[v59].m_flCostSoFar;
      v65 = v57[v59].m_flPathLengthSoFar;
      v60->m_pNavArea.m_pAssociatedNavMesh = v57[v58].m_pNavArea.m_pAssociatedNavMesh;
      *&v60->m_flTotalCost = *&v57[v58].m_flTotalCost;
      v60->m_flPathLengthSoFar = v57[v58].m_flPathLengthSoFar;
      v66 = 0;
      v67 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v58];
      v67->m_pNavArea.m_pData = v61;
      v67->m_pNavArea.m_pAssociatedNavMesh = v62;
      v67->m_flTotalCost = v63;
      v67->m_flCostSoFar = v64;
      v67->m_flPathLengthSoFar = v65;
      v68 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v59];
      v69 = TheNavMesh;
      if ( v68->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
        v66 = v68->m_pNavArea.m_pData;
      v66->m_nOpenListHeapIndex = j;
      v70 = 0;
      v71 = &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v58];
      if ( v69 == v71->m_pNavArea.m_pAssociatedNavMesh )
        v70 = v71->m_pNavArea.m_pData;
      v70->m_nOpenListHeapIndex = v56;
      if ( m_Size / 2 <= v56 )
        goto LABEL_83;
    }
    if ( !v14->m_PriorityQueue.m_LessFunc(
            &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[j],
            &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v56]) )
      v56 = j;
    if ( v72 >= m_Size )
      goto LABEL_69;
LABEL_80:
    if ( v14->m_PriorityQueue.m_LessFunc(
           &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v56],
           &v14->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v72]) )
    {
      v56 = 2 * j + 2;
    }
    if ( j != v56 )
      goto LABEL_70;
LABEL_83:
    m_Size = v14->m_PriorityQueue.m_heap.m_Size;
  }
  while ( v14->m_PriorityQueue.m_heap.m_Size > 0 );
LABEL_84:
  if ( flNewPathLengtha != 0 )
  {
LABEL_209:
    v163 = 1;
    goto LABEL_95;
  }
  if ( v193 <= 0.0 )
    goto LABEL_94;
  vecColor.color = -13448961;
  ISceneViewDebugOverlays::Sphere(debugoverlay, &vActualStartPos, 6.0, &vecColor, 0, v193);
  v209.color = -13448961;
  ISceneViewDebugOverlays::Sphere(debugoverlay, &vActualGoalPos, 6.0, &v209, 0, v193);
  v73 = debugoverlay->_vptr_ISceneViewDebugOverlays;
  v210[0] = -1;
  v210[1] = -56;
  v210[2] = 50;
  v210[3] = -1;
  v73[13](debugoverlay, &vActualStartPos, &vActualGoalPos, v210, 0, v193);
  neighborIter.m_Info.pArea = 0;
  LODWORD(neighborIter.m_Info.pLadder) = 1065353216;
  if ( INavDrawArea::ms_pInst != 0 )
    (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
      INavDrawArea::ms_pInst,
      pStartArea,
      0xFFFFFFFFLL,
      0,
      &neighborIter,
      v193,
      0.0);
  if ( pGoalArea == 0 )
    goto LABEL_94;
  neighborIter.m_Info.pArea = 0;
  LODWORD(neighborIter.m_Info.pLadder) = 1065353216;
  if ( INavDrawArea::ms_pInst != 0 )
    (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
      INavDrawArea::ms_pInst,
      pGoalArea,
      0xFFFFFFFFLL,
      0,
      &neighborIter,
      v193,
      0.0);
LABEL_95:
  if ( VProf_34 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return v163;
}


// CNavOpenList::DebugPrint  (line 324, @0x0000000002ee4900, libserver.so)  // inlines: Element, Get, GetArea, operator[]
// calls: Msg
// strings: "-- COpenList open list\n", "i = %d, area = %p, cost = %0.2f, heuristic = %0.2f, total cost = %0.2f, path length = %0., "-- end\n"
void __fastcall CNavOpenList::DebugPrint(const CNavOpenList *const this)
{
  unsigned __int64 v2; // xmm0_8
  __int64 v3; // r12
  int v4; // ebx
  int v5; // esi
  CNavArea *m_pData; // rdx
  CNavOpenListElement *v7; // rax
  float m_flCostSoFar; // xmm0_4
  float m_flTotalCost; // xmm1_4
  double v10; // xmm2_8
  float v11; // xmm1_4
  double v12; // xmm0_8
  double v13; // xmm1_8

  v2 = Msg("-- COpenList open list\n").m128_u64[0];
  if ( this->m_PriorityQueue.m_heap.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      m_pData = 0;
      v7 = &this->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v3];
      m_flCostSoFar = v7->m_flCostSoFar;
      m_flTotalCost = v7->m_flTotalCost;
      v10 = m_flTotalCost;
      v11 = m_flTotalCost - m_flCostSoFar;
      v12 = m_flCostSoFar;
      v13 = v11;
      if ( v7->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
        m_pData = v7->m_pNavArea.m_pData;
      v5 = v4++;
      ++v3;
      v2 = Msg(
             "i = %d, area = %p, cost = %0.2f, heuristic = %0.2f, total cost = %0.2f, path length = %0.2f\n",
             v5,
             m_pData,
             v12,
             v13,
             v10,
             v7->m_flPathLengthSoFar).m128_u64[0];
    }
    while ( v4 < this->m_PriorityQueue.m_heap.m_Size );
  }
  Msg("-- end\n", *&v2);
}


// CNavBreadthFirstSearch::BreadthFirstSearchCore  (line 342, @0x0000000002ef9810, libserver.so)  // inlines: CVProfScope, Convert16bitFloatTo32bits, DoLookup<int>, Element, FastRemove, Find, Get, GetArea, GetFloat, GetOpenList, IsEnabled, IsInCurrentNavMesh, IsInfinity, IsNaN, NavSearchAreaInfo_t, PercolateDown, PopElement, RemoveAtHead, SetIndex, Swap, memcpy, operator(), operator[], ~CVProfScope
// calls: CNavBreadthFirstSearch::IterateAdjacentAreas, CVProfile::ExitScope, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoLookup<int>, CVProfile::EnterScope, _Unwind_Resume
// callers: CNavBreadthFirstSearch::BreadthFirstSearch
// strings: "Server Simulation", "CNavBreadthFirstSearch:BreadthFirstSearchCore"
void __fastcall CNavBreadthFirstSearch::BreadthFirstSearchCore(
        CNavBreadthFirstSearch *const this,
        __m128 m_flPathLengthSoFar_low,
        float flTravelCostLimit)
{
  int m_enabled; // r9d
  CNavOpenList *v4; // r13
  int m_Size; // r15d
  CNavOpenListElement *m_pMemory; // rax
  CNavOpenListElement *v7; // rax
  CNavOpenListElement *v8; // r15
  CNavArea *m_pData; // rax
  CNavOpenListElement *v10; // rdx
  int i; // r12d
  int v12; // ebx
  CNavOpenListElement *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  CNavOpenListElement *v16; // rax
  CNavArea *v17; // r8
  const CNavMesh *v18; // rdi
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  CNavArea *v21; // rcx
  CNavOpenListElement *v22; // rax
  CNavOpenListElement *v23; // rsi
  CNavMesh *v24; // rax
  CNavArea *v25; // rcx
  CNavOpenListElement *v26; // rdx
  int v27; // r14d
  CNavArea *v28; // rbx
  __int64 v29; // rcx
  int m_AreaId; // esi
  char *v31; // rcx
  unsigned __int16 v32; // ax
  float v33; // xmm1_4
  unsigned int v34; // edx
  const CNavArea *v35; // r12
  bool v36; // zf
  NavSearchAreaResult_t v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // edx
  bool VProf_344; // [rsp+Fh] [rbp-61h]
  CNavMesh *m_pAssociatedNavMesh; // [rsp+10h] [rbp-60h]
  CNavArea *rArea; // [rsp+18h] [rbp-58h]
  float flTravelCostLimita; // [rsp+28h] [rbp-48h]
  unsigned __int32 v45; // [rsp+2Ch] [rbp-44h]
  NavSearchAreaInfo_t searchAreaInfo; // [rsp+30h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_344 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v45 = m_flPathLengthSoFar_low.m128_i32[0];
    CVProfile::EnterScope(
      &g_VProfCurrentProfile,
      "CNavBreadthFirstSearch:BreadthFirstSearchCore",
      0,
      "Server Simulation",
      0,
      4);
    m_flPathLengthSoFar_low = v45;
  }
  v4 = CNavArea::ms_pOpenList;
  flTravelCostLimita = m_flPathLengthSoFar_low.m128_f32[0]
                     + COERCE_FLOAT(_mm_cmplt_ss(0LL, m_flPathLengthSoFar_low).m128_u32[0] & 0x43C80000);
LABEL_4:
  m_Size = v4->m_PriorityQueue.m_heap.m_Size;
  if ( v4->m_PriorityQueue.m_heap.m_Size > 0 )
  {
    while ( 1 )
    {
      m_pMemory = v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
      rArea = m_pMemory->m_pNavArea.m_pData;
      m_pAssociatedNavMesh = m_pMemory->m_pNavArea.m_pAssociatedNavMesh;
      if ( TheNavMesh != m_pAssociatedNavMesh
        || rArea == 0
        || (rArea->m_nOpenListHeapIndex = -1,
            m_Size = v4->m_PriorityQueue.m_heap.m_Size,
            v4->m_PriorityQueue.m_heap.m_Size > 0) )
      {
        if ( --m_Size != 0 )
        {
          v7 = v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          v8 = &v7[m_Size];
          v7->m_pNavArea.m_pData = v8->m_pNavArea.m_pData;
          v7->m_pNavArea.m_pAssociatedNavMesh = v8->m_pNavArea.m_pAssociatedNavMesh;
          *&v7->m_flTotalCost = *&v8->m_flTotalCost;
          *&v7->m_flPathLengthSoFar = *&v8->m_flPathLengthSoFar;
          m_Size = v4->m_PriorityQueue.m_heap.m_Size - 1;
        }
        v4->m_PriorityQueue.m_heap.m_Size = m_Size;
        if ( m_Size > 0 )
        {
          m_pData = 0;
          v10 = v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          if ( v10->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
            m_pData = v10->m_pNavArea.m_pData;
          m_pData->m_nOpenListHeapIndex = 0;
          m_Size = v4->m_PriorityQueue.m_heap.m_Size;
        }
      }
      if ( m_Size / 2 > 0 )
      {
        for ( i = 0; ; i = v12 )
        {
          v27 = 2 * i + 2;
          v12 = 2 * i + 1;
          if ( v12 >= m_Size )
          {
            v12 = i;
            if ( v27 >= m_Size )
              goto LABEL_15;
          }
          else
          {
            if ( !v4->m_PriorityQueue.m_LessFunc(
                    &v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory[i],
                    &v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v12]) )
              v12 = i;
            if ( v27 >= m_Size )
            {
LABEL_15:
              if ( i == v12 )
                break;
              goto LABEL_16;
            }
          }
          if ( v4->m_PriorityQueue.m_LessFunc(
                 &v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v12],
                 &v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v27]) )
          {
            v12 = 2 * i + 2;
          }
          if ( i == v12 )
            break;
LABEL_16:
          v13 = v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          v14 = v12;
          v15 = i;
          v16 = &v13[v15];
          v17 = v13[v15].m_pNavArea.m_pData;
          v18 = v13[v15].m_pNavArea.m_pAssociatedNavMesh;
          m_flTotalCost = v13[v15].m_flTotalCost;
          v16->m_pNavArea.m_pData = v13[v14].m_pNavArea.m_pData;
          m_flCostSoFar = v13[v15].m_flCostSoFar;
          m_flPathLengthSoFar_low = LODWORD(v13[v15].m_flPathLengthSoFar);
          v16->m_pNavArea.m_pAssociatedNavMesh = v13[v14].m_pNavArea.m_pAssociatedNavMesh;
          *&v16->m_flTotalCost = *&v13[v14].m_flTotalCost;
          v16->m_flPathLengthSoFar = v13[v14].m_flPathLengthSoFar;
          v21 = 0;
          v22 = &v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v14];
          v22->m_pNavArea.m_pData = v17;
          v22->m_pNavArea.m_pAssociatedNavMesh = v18;
          v22->m_flTotalCost = m_flTotalCost;
          v22->m_flCostSoFar = m_flCostSoFar;
          LODWORD(v22->m_flPathLengthSoFar) = m_flPathLengthSoFar_low.m128_i32[0];
          v23 = &v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v15];
          v24 = TheNavMesh;
          if ( v23->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
            v21 = v23->m_pNavArea.m_pData;
          v21->m_nOpenListHeapIndex = i;
          v25 = 0;
          v26 = &v4->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v14];
          if ( v24 == v26->m_pNavArea.m_pAssociatedNavMesh )
            v25 = v26->m_pNavArea.m_pData;
          v25->m_nOpenListHeapIndex = v12;
          if ( m_Size / 2 <= v12 )
            goto LABEL_30;
        }
      }
      v24 = TheNavMesh;
LABEL_30:
      v28 = 0;
      v29 = -28;
      if ( m_pAssociatedNavMesh == v24 )
        v28 = rArea;
      m_AreaId = v28->m_AreaId;
      if ( this->m_SearchHash.m_nUsed != 0 )
      {
        v38 = 33 * (((4097 * m_AreaId + 2127912214) >> 19) ^ (4097 * m_AreaId + 2127912214) ^ 0xC761C23C);
        v39 = 9 * ((v38 - 369570787) ^ ((v38 + 374761393) << 9)) - 42973499;
        v29 = 28LL
            * CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoLookup<int>(
                &this->m_SearchHash,
                m_AreaId,
                HIWORD(v39) ^ v39 ^ 0xB55A4F09,
                0xFFFFFFFFFFFFFFE4LL);
      }
      v31 = this->m_SearchHash.m_table.m_pMemory + v29;
      v32 = *(v31 + 7);
      if ( (v32 & 0x7FFF) == 0x7C00 )
      {
        m_flPathLengthSoFar_low = 0x477FE000u;
        if ( (v32 & 0x8000u) != 0 )
          m_flPathLengthSoFar_low = 0xC77FE000;
        goto LABEL_42;
      }
      if ( (HIBYTE(v32) & 0x7C) != 0x7C )
        break;
      m_flPathLengthSoFar_low = 0;
      if ( (v32 & 0x3FF) == 0 )
        goto LABEL_52;
LABEL_42:
      if ( flTravelCostLimita >= 0.0 && m_flPathLengthSoFar_low.m128_f32[0] > flTravelCostLimita )
        goto LABEL_4;
      LODWORD(searchAreaInfo.m_flCostSoFar) = m_flPathLengthSoFar_low.m128_i32[0];
      v35 = *(v31 + 20);
      v36 = this->m_funcOnSearchArea._M_manager == 0;
      searchAreaInfo.m_pParent = v35;
      if ( !v36 )
      {
        v37 = this->m_funcOnSearchArea._M_invoker(&this->m_funcOnSearchArea, v28, &searchAreaInfo);
        if ( v37 != NavSearchAreaResult_t::NAV_SEARCH_HALT )
        {
          if ( v37 != NavSearchAreaResult_t::NAV_SEARCH_INCLUDE )
            goto LABEL_4;
          CNavBreadthFirstSearch::IterateAdjacentAreas(this, v28, v35);
          m_Size = v4->m_PriorityQueue.m_heap.m_Size;
          if ( v4->m_PriorityQueue.m_heap.m_Size > 0 )
            continue;
        }
      }
      goto LABEL_48;
    }
    if ( (v32 & 0x7C00) != 0 || (v32 & 0x3FF) == 0 )
    {
LABEL_52:
      v34 = (((((v32 >> 10) & 0x1F) + 112) * (((v32 >> 10) & 0x1F) != 0)) << 23)
          | (((v32 & 0x8000u) != 0) << 31)
          | ((v32 & 0x3FF) << 13);
    }
    else
    {
      v33 = 1.0;
      if ( (v32 & 0x8000u) != 0 )
        v33 = -1.0;
      m_flPathLengthSoFar_low.m128_f32[0] = (((v32 & 0x3FF) * 0.0009765625) * v33) * 0.000061035156;
      v34 = _mm_cvtsi128_si32(m_flPathLengthSoFar_low);
    }
    m_flPathLengthSoFar_low = _mm_cvtsi32_si128(v34);
    goto LABEL_42;
  }
LABEL_48:
  if ( VProf_344 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CNavBreadthFirstSearch::BreadthFirstSearch  (line 400, @0x0000000002efa620, libserver.so)  // inlines: DistTo, FastSqrt, Length, Max<float>, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CNavMesh::GetNearestNavArea, CNavPoly::GetClosestPointOnPoly, CNavBreadthFirstSearch::BreadthFirstSearch
// callers: CNavSearchHexLattice::DoSearch
void __fastcall CNavBreadthFirstSearch::BreadthFirstSearch(
        CNavBreadthFirstSearch *const this,
        const Vector *const vStartPos,
        float a3,
        float flTravelCostLimit)
{
  CNavArea *NearestNavArea; // rax
  float z; // xmm1_4
  CNavArea *v8; // r13
  float v9; // xmm3_4
  Vector ClosestPointOnPoly; // 0:kr00_12.12

  NearestNavArea = CNavMesh::GetNearestNavArea(TheNavMesh, vStartPos, this->m_NavHull, 12, 10000.0);
  v8 = NearestNavArea;
  if ( NearestNavArea != 0 )
  {
    v9 = a3;
    if ( a3 >= 0.0 )
    {
      ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(NearestNavArea, vStartPos);
      z = ClosestPointOnPoly.z;
      v9 = fmaxf(
             0.0,
             a3
           - fsqrt(
               (((vStartPos->x - ClosestPointOnPoly.x) * (vStartPos->x - ClosestPointOnPoly.x))
              + ((vStartPos->y - ClosestPointOnPoly.y) * (vStartPos->y - ClosestPointOnPoly.y)))
             + ((vStartPos->z - z) * (vStartPos->z - z))));
    }
    CNavBreadthFirstSearch::BreadthFirstSearch(this, v8, v9, z);
  }
}


// CNavBreadthFirstSearch::BreadthFirstSearch  (line 423, @0x0000000002ef9d20, libserver.so)  // inlines: Element, FastRemove, Get, GetArea, GetOpenList, IsInCurrentNavMesh, PercolateDown, RemoveAll, RemoveAtHead, SetIndex, Swap, memcpy, operator(), operator[]
// calls: CNavBreadthFirstSearch::IncludeInSearch, CNavBreadthFirstSearch::BreadthFirstSearchCore, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll
// callers: CPathCostRecorder::DebugDraw, CNavBreadthFirstSearch::BreadthFirstSearch, NavBreadthFirstSearch<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >, NavBreadthFirstSearch<DrawSelectionSet>, NavBreadthFirstSearch<ClusterMarker>, CNavVolumeBreadthFirstSearch::DoSearch, nav_flood_select
// write access to const memory has been detected, the output may be wrong!
void __fastcall CNavBreadthFirstSearch::BreadthFirstSearch(
        CNavBreadthFirstSearch *const this,
        CNavArea *const rStartArea,
        float a3,
        float flTravelCostLimit)
{
  CNavOpenList *v5; // r14
  float v6; // xmm1_4
  int m_Size; // r15d
  int v8; // r8d
  CNavOpenListElement *m_pMemory; // rax
  int v10; // r8d
  CNavOpenListElement *v11; // rax
  CNavOpenListElement *v12; // r8
  CNavArea *m_pData; // rax
  CNavOpenListElement *v14; // rdx
  int v15; // r13d
  int v16; // r12d
  int v17; // ebx
  CNavOpenListElement *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  CNavOpenListElement *v21; // rax
  CNavArea *v22; // r9
  const CNavMesh *m_pAssociatedNavMesh; // rdi
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  CNavArea *v27; // rcx
  CNavOpenListElement *v28; // rax
  CNavOpenListElement *v29; // rsi
  CNavMesh *v30; // rax
  CNavOpenListElement *v31; // rdx
  int v32; // r15d
  CNavArea *v33; // rax
  int flTravelCostLimita; // [rsp+Ch] [rbp-34h]

  v5 = CNavArea::ms_pOpenList;
  CNavBreadthFirstSearch::IncludeInSearch(this, rStartArea, 0);
  CNavBreadthFirstSearch::BreadthFirstSearchCore(this, LODWORD(a3), v6);
LABEL_2:
  m_Size = v5->m_PriorityQueue.m_heap.m_Size;
  while ( 2 )
  {
    if ( m_Size > 0 )
    {
LABEL_4:
      v8 = m_Size;
      m_pMemory = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
      if ( m_pMemory->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh
        && (v33 = m_pMemory->m_pNavArea.m_pData) != 0
        && (v33->m_nOpenListHeapIndex = -1,
            v8 = v5->m_PriorityQueue.m_heap.m_Size,
            v5->m_PriorityQueue.m_heap.m_Size <= 0) )
      {
        m_Size = v5->m_PriorityQueue.m_heap.m_Size;
      }
      else
      {
        v10 = v8 - 1;
        if ( v10 != 0 )
        {
          v11 = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          v12 = &v11[v10];
          v11->m_pNavArea.m_pData = v12->m_pNavArea.m_pData;
          v11->m_pNavArea.m_pAssociatedNavMesh = v12->m_pNavArea.m_pAssociatedNavMesh;
          *&v11->m_flTotalCost = *&v12->m_flTotalCost;
          *&v11->m_flPathLengthSoFar = *&v12->m_flPathLengthSoFar;
          v10 = v5->m_PriorityQueue.m_heap.m_Size - 1;
        }
        v5->m_PriorityQueue.m_heap.m_Size = v10;
        m_Size = v10;
        if ( v10 > 0 )
        {
          m_pData = 0;
          v14 = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          if ( v14->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
            m_pData = v14->m_pNavArea.m_pData;
          m_pData->m_nOpenListHeapIndex = 0;
          m_Size = v5->m_PriorityQueue.m_heap.m_Size;
        }
      }
      flTravelCostLimita = m_Size / 2;
      if ( m_Size / 2 <= 0 )
        continue;
      v15 = 0;
      v16 = m_Size;
      while ( 1 )
      {
        v32 = 2 * v15 + 2;
        v17 = 2 * v15 + 1;
        if ( v17 >= v16 )
          break;
        if ( !v5->m_PriorityQueue.m_LessFunc(
                &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v15],
                &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v17]) )
          v17 = v15;
        if ( v32 < v16 )
          goto LABEL_24;
LABEL_14:
        if ( v15 == v17 )
          goto LABEL_2;
        v18 = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        v19 = v17;
        v20 = v15;
        v21 = &v18[v20];
        v22 = v18[v20].m_pNavArea.m_pData;
        m_pAssociatedNavMesh = v18[v20].m_pNavArea.m_pAssociatedNavMesh;
        m_flTotalCost = v18[v20].m_flTotalCost;
        v21->m_pNavArea.m_pData = v18[v19].m_pNavArea.m_pData;
        m_flCostSoFar = v18[v20].m_flCostSoFar;
        m_flPathLengthSoFar = v18[v20].m_flPathLengthSoFar;
        v21->m_pNavArea.m_pAssociatedNavMesh = v18[v19].m_pNavArea.m_pAssociatedNavMesh;
        *&v21->m_flTotalCost = *&v18[v19].m_flTotalCost;
        v21->m_flPathLengthSoFar = v18[v19].m_flPathLengthSoFar;
        v27 = 0;
        v28 = &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v19];
        v28->m_pNavArea.m_pData = v22;
        v28->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
        v28->m_flTotalCost = m_flTotalCost;
        v28->m_flCostSoFar = m_flCostSoFar;
        v28->m_flPathLengthSoFar = m_flPathLengthSoFar;
        v29 = &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v20];
        v30 = TheNavMesh;
        if ( v29->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
          v27 = v29->m_pNavArea.m_pData;
        v27->m_nOpenListHeapIndex = v15;
        v31 = &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v19];
        if ( v30 == v31->m_pNavArea.m_pAssociatedNavMesh )
        {
          v31->m_pNavArea.m_pData->m_nOpenListHeapIndex = v17;
          if ( flTravelCostLimita <= v17 )
          {
LABEL_28:
            m_Size = v5->m_PriorityQueue.m_heap.m_Size;
            if ( v5->m_PriorityQueue.m_heap.m_Size <= 0 )
              goto LABEL_29;
            goto LABEL_4;
          }
        }
        else
        {
          HIDWORD(stru_10.m_pIdentityChunks[20]) = v17;
          if ( flTravelCostLimita <= v17 )
            goto LABEL_28;
        }
        v15 = v17;
      }
      v17 = v15;
      if ( v32 >= v16 )
        goto LABEL_14;
LABEL_24:
      if ( v5->m_PriorityQueue.m_LessFunc(
             &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v17],
             &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v32]) )
      {
        v17 = 2 * v15 + 2;
      }
      goto LABEL_14;
    }
    break;
  }
LABEL_29:
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&this->m_SearchHash);
}


// CNavBreadthFirstSearch::BreadthFirstSearch  (line 444, @0x0000000002efb460, libserver.so)  // inlines: Element, FastRemove, Get, GetArea, GetOpenList, IsInCurrentNavMesh, PercolateDown, RemoveAll, RemoveAtHead, SetIndex, Swap, memcpy, operator(), operator[]
// calls: CNavBreadthFirstSearch::IncludeInSearch, CNavBreadthFirstSearch::BreadthFirstSearchCore, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll
// write access to const memory has been detected, the output may be wrong!
void __fastcall CNavBreadthFirstSearch::BreadthFirstSearch(
        CNavBreadthFirstSearch *const this,
        NavAreaVector *const rStartAreas,
        __m128i a3,
        float flTravelCostLimit)
{
  unsigned int v4; // r13d
  CNavOpenList *v5; // r14
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  CNavArea *v9; // rsi
  int m_Size; // r15d
  int v11; // r8d
  CNavOpenListElement *m_pMemory; // rax
  int v13; // r8d
  CNavOpenListElement *v14; // rax
  CNavOpenListElement *v15; // r8
  CNavArea *m_pData; // rax
  CNavOpenListElement *v17; // rdx
  int v18; // r13d
  int v19; // r12d
  int v20; // ebx
  CNavOpenListElement *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  CNavOpenListElement *v24; // rax
  CNavArea *v25; // r9
  const CNavMesh *m_pAssociatedNavMesh; // rdi
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  CNavArea *v30; // rcx
  CNavOpenListElement *v31; // rax
  CNavOpenListElement *v32; // rsi
  CNavMesh *v33; // rax
  CNavOpenListElement *v34; // rdx
  int v35; // r15d
  CNavArea *v36; // rax
  CNavOpenList *v38; // [rsp+8h] [rbp-38h]
  int v39; // [rsp+8h] [rbp-38h]

  v4 = _mm_cvtsi128_si32(a3);
  v5 = CNavArea::ms_pOpenList;
  if ( rStartAreas->m_Size != 0 )
  {
    v38 = CNavArea::ms_pOpenList;
    v6 = 8LL * (rStartAreas->m_Size - 1) + 8;
    v7 = 0;
    do
    {
      v9 = rStartAreas->m_Memory.m_pMemory[v7 / 8];
      v7 += 8LL;
      CNavBreadthFirstSearch::IncludeInSearch(this, v9, 0);
    }
    while ( v7 != v6 );
    v5 = v38;
  }
  CNavBreadthFirstSearch::BreadthFirstSearchCore(this, _mm_cvtsi32_si128(v4), flTravelCostLimit);
LABEL_6:
  m_Size = v5->m_PriorityQueue.m_heap.m_Size;
  while ( 2 )
  {
    if ( m_Size > 0 )
    {
LABEL_8:
      v11 = m_Size;
      m_pMemory = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
      if ( m_pMemory->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh
        && (v36 = m_pMemory->m_pNavArea.m_pData) != 0
        && (v36->m_nOpenListHeapIndex = -1,
            v11 = v5->m_PriorityQueue.m_heap.m_Size,
            v5->m_PriorityQueue.m_heap.m_Size <= 0) )
      {
        m_Size = v5->m_PriorityQueue.m_heap.m_Size;
      }
      else
      {
        v13 = v11 - 1;
        if ( v13 != 0 )
        {
          v14 = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          v15 = &v14[v13];
          v14->m_pNavArea.m_pData = v15->m_pNavArea.m_pData;
          v14->m_pNavArea.m_pAssociatedNavMesh = v15->m_pNavArea.m_pAssociatedNavMesh;
          *&v14->m_flTotalCost = *&v15->m_flTotalCost;
          *&v14->m_flPathLengthSoFar = *&v15->m_flPathLengthSoFar;
          v13 = v5->m_PriorityQueue.m_heap.m_Size - 1;
        }
        v5->m_PriorityQueue.m_heap.m_Size = v13;
        m_Size = v13;
        if ( v13 > 0 )
        {
          m_pData = 0;
          v17 = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
          if ( v17->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
            m_pData = v17->m_pNavArea.m_pData;
          m_pData->m_nOpenListHeapIndex = 0;
          m_Size = v5->m_PriorityQueue.m_heap.m_Size;
        }
      }
      v39 = m_Size / 2;
      if ( m_Size / 2 <= 0 )
        continue;
      v18 = 0;
      v19 = m_Size;
      while ( 1 )
      {
        v35 = 2 * v18 + 2;
        v20 = 2 * v18 + 1;
        if ( v20 >= v19 )
          break;
        if ( !v5->m_PriorityQueue.m_LessFunc(
                &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v18],
                &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v20]) )
          v20 = v18;
        if ( v35 < v19 )
          goto LABEL_28;
LABEL_18:
        if ( v18 == v20 )
          goto LABEL_6;
        v21 = v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        v22 = v20;
        v23 = v18;
        v24 = &v21[v23];
        v25 = v21[v23].m_pNavArea.m_pData;
        m_pAssociatedNavMesh = v21[v23].m_pNavArea.m_pAssociatedNavMesh;
        m_flTotalCost = v21[v23].m_flTotalCost;
        v24->m_pNavArea.m_pData = v21[v22].m_pNavArea.m_pData;
        m_flCostSoFar = v21[v23].m_flCostSoFar;
        m_flPathLengthSoFar = v21[v23].m_flPathLengthSoFar;
        v24->m_pNavArea.m_pAssociatedNavMesh = v21[v22].m_pNavArea.m_pAssociatedNavMesh;
        *&v24->m_flTotalCost = *&v21[v22].m_flTotalCost;
        v24->m_flPathLengthSoFar = v21[v22].m_flPathLengthSoFar;
        v30 = 0;
        v31 = &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v22];
        v31->m_pNavArea.m_pData = v25;
        v31->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
        v31->m_flTotalCost = m_flTotalCost;
        v31->m_flCostSoFar = m_flCostSoFar;
        v31->m_flPathLengthSoFar = m_flPathLengthSoFar;
        v32 = &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v23];
        v33 = TheNavMesh;
        if ( v32->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
          v30 = v32->m_pNavArea.m_pData;
        v30->m_nOpenListHeapIndex = v18;
        v34 = &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v22];
        if ( v33 == v34->m_pNavArea.m_pAssociatedNavMesh )
        {
          v34->m_pNavArea.m_pData->m_nOpenListHeapIndex = v20;
          if ( v39 <= v20 )
          {
LABEL_32:
            m_Size = v5->m_PriorityQueue.m_heap.m_Size;
            if ( v5->m_PriorityQueue.m_heap.m_Size <= 0 )
              goto LABEL_33;
            goto LABEL_8;
          }
        }
        else
        {
          HIDWORD(stru_10.m_pIdentityChunks[20]) = v20;
          if ( v39 <= v20 )
            goto LABEL_32;
        }
        v18 = v20;
      }
      v20 = v18;
      if ( v35 >= v19 )
        goto LABEL_18;
LABEL_28:
      if ( v5->m_PriorityQueue.m_LessFunc(
             &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v20],
             &v5->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v35]) )
      {
        v20 = 2 * v18 + 2;
      }
      goto LABEL_18;
    }
    break;
  }
LABEL_33:
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&this->m_SearchHash);
}


// CollectAdjacentAreas  (line 470, @0x0000000002ee90d0, libserver.so)  // inlines: AddToTail, Begin, CNavConnectInOnlyIterator, CNavConnectOutIterator, CopyConstruct<CNavArea*>, Count, Element, GetArea, GetElevatorAreas, GetLadders, GrowMemory, Indices, Next, operator[]
// calls: CUtlMemory<CNavArea*, int>::Grow, CNavArea::IsConnectedOnAny
// callers: CNavBreadthFirstSearch::IterateAdjacentAreas
void __fastcall CollectAdjacentAreas(
        CUtlVectorFixedGrowable<CNavArea*,16ul> *const rAreasOut,
        const CNavArea *const rArea,
        const CNavArea *pPriorArea,
        int nFlags)
{
  _BOOL4 v4; // r11d
  const CNavArea *v6; // r13
  int v7; // r10d
  int m_nVerts; // ecx
  int i; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int v11; // r12d
  int v12; // r10d
  CNavConnectVector *v13; // r15
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *j; // rax
  const CNavArea *m_pArea; // r9
  __int64 m_Size; // rax
  int v17; // edx
  CNavArea **v18; // rax
  int v19; // edx
  int k; // ebx
  int *v21; // rax
  int v22; // r12d
  CNavConnectVector *v23; // r8
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m; // rdx
  CNavArea *v25; // r9
  __int64 v26; // rax
  int v27; // edx
  CNavArea **v28; // rax
  int v29; // eax
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // r12
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v31; // rax
  int v32; // ecx
  int v33; // r15d
  NavLaddersAndElevators_t *n; // r13
  _QWORD *p_x; // rbx
  __int64 v36; // r12
  int v37; // eax
  CNavArea **v38; // rax
  __int64 v39; // r12
  int v40; // eax
  CNavArea **v41; // rax
  __int64 v42; // r12
  int v43; // eax
  CNavArea **v44; // rax
  NavLaddersAndElevators_t *v45; // r13
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v46; // rdx
  NavLaddersAndElevators_t *v47; // rcx
  int v48; // ebx
  int v49; // r13d
  CNavArea **v50; // rax
  CNavArea *v51; // r15
  __int64 v52; // r12
  int v53; // eax
  CNavArea *v54; // rcx
  int *v55; // rax
  int v56; // r8d
  CUtlVectorBase<CNavArea*,CUtlMemoryFixedGrowable<CNavArea*,16ul,int> >::CAllocator *v57; // r9
  int v58; // ebx
  __int64 v59; // r12
  __int64 v60; // r15
  int v61; // eax
  CNavArea **v62; // rax
  bool IsConnectedOnAny; // al
  int v64; // [rsp+4h] [rbp-5Ch]
  CUtlVectorBase<CNavArea*,CUtlMemoryFixedGrowable<CNavArea*,16ul,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-58h]
  bool bIncludeIncoming; // [rsp+13h] [rbp-4Dh]
  int v67; // [rsp+14h] [rbp-4Ch]
  _BOOL4 v68; // [rsp+14h] [rbp-4Ch]
  int v69; // [rsp+14h] [rbp-4Ch]
  int v70; // [rsp+14h] [rbp-4Ch]
  int v71; // [rsp+14h] [rbp-4Ch]
  int v72; // [rsp+14h] [rbp-4Ch]
  int v73; // [rsp+14h] [rbp-4Ch]
  CNavArea *pIncomingArea; // [rsp+18h] [rbp-48h]
  _BOOL4 pIncomingAreac; // [rsp+18h] [rbp-48h]
  int pIncomingAread; // [rsp+18h] [rbp-48h]
  CNavArea *pIncomingAreab; // [rsp+18h] [rbp-48h]
  CNavArea *pIncomingAreaa; // [rsp+18h] [rbp-48h]
  CUtlVectorBase<CNavArea*,CUtlMemoryFixedGrowable<CNavArea*,16ul,int> >::CAllocator *pAdjArea; // [rsp+20h] [rbp-40h]
  CNavArea *pAdjAreab; // [rsp+20h] [rbp-40h]
  CNavArea *pAdjAreac; // [rsp+20h] [rbp-40h]
  CNavArea *pAdjAreaa; // [rsp+20h] [rbp-40h]
  char nFlagsa; // [rsp+28h] [rbp-38h]
  NavLaddersAndElevators_t *nFlagsb; // [rsp+28h] [rbp-38h]

  v4 = (nFlags & 0x40) != 0;
  v6 = rArea;
  v7 = nFlags & 1;
  nFlagsa = nFlags;
  bIncludeIncoming = (nFlags & 2) != 0;
  if ( (nFlags & 1) == 0 && (nFlags & 2) == 0 && (nFlags & 0x40) == 0 )
    goto LABEL_48;
  m_nVerts = rArea->m_nVerts;
  if ( m_nVerts != 0 )
  {
    for ( i = 0; i != m_nVerts; ++i )
    {
      m_pData = rArea->m_connect[i].m_pData;
      if ( m_pData != 0 && m_pData->m_Size > 0 )
      {
        v11 = 0;
        goto LABEL_10;
      }
    }
    v11 = -1;
  }
  else
  {
    v11 = -1;
    i = 0;
  }
LABEL_10:
  v12 = v7 ^ 1;
  p_m_Memory = &rAreasOut->m_Memory;
LABEL_11:
  while ( i != m_nVerts )
  {
    while ( 2 )
    {
      v13 = &v6->m_connect[i];
      j = v13->m_pData;
      m_pArea = v13->m_pData->m_Elements[v11].m_pArea;
      if ( m_pArea == 0 )
        goto LABEL_23;
      if ( v12 != 0 || v4 )
      {
        v67 = v12;
        pIncomingAreac = v4;
        pAdjAreab = v13->m_pData->m_Elements[v11].m_pArea;
        IsConnectedOnAny = CNavArea::IsConnectedOnAny(m_pArea, v6, 0, 0, 0);
        m_pArea = pAdjAreab;
        v4 = pIncomingAreac;
        v12 = v67;
        if ( !IsConnectedOnAny )
          goto LABEL_19;
        m_Size = rAreasOut->m_Size;
        if ( m_Size != rAreasOut->m_Memory.m_nAllocationCount )
        {
LABEL_16:
          v17 = m_Size;
          goto LABEL_17;
        }
      }
      else
      {
        m_Size = rAreasOut->m_Size;
        if ( m_Size != rAreasOut->m_Memory.m_nAllocationCount )
          goto LABEL_16;
      }
      v64 = v12;
      v68 = v4;
      pIncomingAread = m_Size;
      pAdjAreac = m_pArea;
      CUtlMemory<CNavArea *,int>::Grow(p_m_Memory, 1);
      v17 = rAreasOut->m_Size;
      v12 = v64;
      v4 = v68;
      m_Size = pIncomingAread;
      m_pArea = pAdjAreac;
LABEL_17:
      rAreasOut->m_Size = v17 + 1;
      v18 = &rAreasOut->m_Memory.m_pMemory[m_Size];
      if ( v18 != 0 )
        *v18 = m_pArea;
LABEL_19:
      m_nVerts = v6->m_nVerts;
      if ( m_nVerts != i )
      {
        for ( j = v13->m_pData; ; j = v6->m_connect[i].m_pData )
        {
LABEL_23:
          v19 = -1;
          if ( j != 0 )
            v19 = j->m_Size - 1;
          if ( v19 > v11 )
            break;
          if ( ++i == m_nVerts )
          {
            v11 = -1;
            goto LABEL_11;
          }
          v11 = -1;
        }
        ++v11;
        if ( i != m_nVerts )
          continue;
        goto LABEL_27;
      }
      break;
    }
    m_nVerts = i;
  }
LABEL_27:
  if ( bIncludeIncoming )
  {
    if ( m_nVerts != 0 )
    {
      for ( k = 0; k != m_nVerts; ++k )
      {
        v21 = v6->m_incomingConnect[k].m_pData;
        if ( v21 != 0 && *v21 > 0 )
        {
          v22 = 0;
          goto LABEL_34;
        }
      }
      v22 = -1;
    }
    else
    {
      v22 = -1;
      k = 0;
    }
LABEL_34:
    while ( k != m_nVerts )
    {
      while ( 2 )
      {
        v23 = &v6->m_incomingConnect[k];
        m = v23->m_pData;
        v25 = v23->m_pData->m_Elements[v22].m_pArea;
        if ( v25 == 0 )
          goto LABEL_44;
        v26 = rAreasOut->m_Size;
        v27 = rAreasOut->m_Size;
        if ( v26 == rAreasOut->m_Memory.m_nAllocationCount )
        {
          v73 = rAreasOut->m_Size;
          pIncomingAreaa = v23->m_pData->m_Elements[v22].m_pArea;
          CUtlMemory<CNavArea *,int>::Grow(&rAreasOut->m_Memory, 1);
          v27 = rAreasOut->m_Size;
          v26 = v73;
          v25 = pIncomingAreaa;
          v23 = &v6->m_incomingConnect[k];
        }
        rAreasOut->m_Size = v27 + 1;
        v28 = &rAreasOut->m_Memory.m_pMemory[v26];
        if ( v28 != 0 )
          *v28 = v25;
        m_nVerts = v6->m_nVerts;
        if ( k != m_nVerts )
        {
          for ( m = v23->m_pData; ; m = v6->m_incomingConnect[k].m_pData )
          {
LABEL_44:
            v29 = -1;
            if ( m != 0 )
              v29 = m->m_Size - 1;
            if ( v29 > v22 )
              break;
            if ( ++k == m_nVerts )
            {
              v22 = -1;
              goto LABEL_34;
            }
            v22 = -1;
          }
          ++v22;
          if ( k != m_nVerts )
            continue;
          goto LABEL_48;
        }
        break;
      }
      m_nVerts = k;
    }
  }
LABEL_48:
  if ( (nFlagsa & 4) != 0 )
  {
    m_pLaddersAndElevators = v6->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 )
    {
      v31 = m_pLaddersAndElevators->m_ladders[0].m_pData;
      if ( m_pLaddersAndElevators->m_ladders[0].m_pData != 0 )
      {
        v32 = v31->m_Size;
        if ( v31->m_Size != 0 )
        {
          pIncomingArea = v6;
          v33 = 0;
          pAdjArea = &rAreasOut->m_Memory;
          for ( n = v6->m_pLaddersAndElevators; ; v31 = n->m_ladders[0].m_pData )
          {
            p_x = &v31->m_Elements[v33].pLadder->m_vTop.x;
            if ( p_x != 0 )
            {
              if ( p_x[4] != 0 )
              {
                v36 = rAreasOut->m_Size;
                v37 = rAreasOut->m_Size;
                if ( v36 == rAreasOut->m_Memory.m_nAllocationCount )
                {
                  v69 = v32;
                  CUtlMemory<CNavArea *,int>::Grow(pAdjArea, 1);
                  v37 = rAreasOut->m_Size;
                  v32 = v69;
                }
                rAreasOut->m_Size = v37 + 1;
                v38 = &rAreasOut->m_Memory.m_pMemory[v36];
                if ( v38 != 0 )
                  *v38 = p_x[4];
              }
              if ( p_x[5] != 0 )
              {
                v39 = rAreasOut->m_Size;
                v40 = rAreasOut->m_Size;
                if ( v39 == rAreasOut->m_Memory.m_nAllocationCount )
                {
                  v71 = v32;
                  CUtlMemory<CNavArea *,int>::Grow(pAdjArea, 1);
                  v40 = rAreasOut->m_Size;
                  v32 = v71;
                }
                rAreasOut->m_Size = v40 + 1;
                v41 = &rAreasOut->m_Memory.m_pMemory[v39];
                if ( v41 != 0 )
                  *v41 = p_x[5];
              }
              if ( p_x[6] != 0 )
              {
                v42 = rAreasOut->m_Size;
                v43 = rAreasOut->m_Size;
                if ( v42 == rAreasOut->m_Memory.m_nAllocationCount )
                {
                  v70 = v32;
                  CUtlMemory<CNavArea *,int>::Grow(pAdjArea, 1);
                  v43 = rAreasOut->m_Size;
                  v32 = v70;
                }
                rAreasOut->m_Size = v43 + 1;
                v44 = &rAreasOut->m_Memory.m_pMemory[v42];
                if ( v44 != 0 )
                  *v44 = p_x[6];
              }
            }
            if ( ++v33 == v32 )
              break;
          }
          v6 = pIncomingArea;
        }
      }
    }
  }
  if ( (nFlagsa & 8) == 0
    || (v54 = v6->m_pLaddersAndElevators) == 0
    || (v55 = *&v54->m_vVerts[0].x) == 0
    || (v56 = *v55, *v55 == 0) )
  {
    if ( (nFlagsa & 0x10) == 0 )
      return;
    goto LABEL_74;
  }
  v57 = &rAreasOut->m_Memory;
  v58 = 0;
  while ( 1 )
  {
    v59 = *&v55[2 * v58 + 2];
    if ( v59 != 0 && *(v59 + 64) != 0 )
    {
      v60 = rAreasOut->m_Size;
      v61 = rAreasOut->m_Size;
      if ( v60 == rAreasOut->m_Memory.m_nAllocationCount )
      {
        v72 = v56;
        pIncomingAreab = v54;
        pAdjAreaa = v57;
        CUtlMemory<CNavArea *,int>::Grow(v57, 1);
        v61 = rAreasOut->m_Size;
        v56 = v72;
        v54 = pIncomingAreab;
        v57 = pAdjAreaa;
      }
      rAreasOut->m_Size = v61 + 1;
      v62 = &rAreasOut->m_Memory.m_pMemory[v60];
      if ( v62 != 0 )
        *v62 = *(v59 + 64);
    }
    if ( ++v58 == v56 )
      break;
    v55 = *&v54->m_vVerts[0].x;
  }
  if ( (nFlagsa & 0x10) != 0 )
  {
LABEL_74:
    v45 = v6->m_pLaddersAndElevators;
    if ( v45 != 0 && v45->m_pElevatorEntity != 0 )
    {
      v46 = v45->m_elevatorAreas.m_pData;
      if ( v46 != 0 && v46->m_Size != 0 )
      {
        v47 = v45;
        v48 = 0;
        v49 = v46->m_Size;
        while ( 1 )
        {
          v51 = v46->m_Elements[v48].m_pArea;
          if ( v51 != 0 )
          {
            v52 = rAreasOut->m_Size;
            v53 = rAreasOut->m_Size;
            if ( v52 == rAreasOut->m_Memory.m_nAllocationCount )
            {
              nFlagsb = v47;
              CUtlMemory<CNavArea *,int>::Grow(&rAreasOut->m_Memory, 1);
              v53 = rAreasOut->m_Size;
              v47 = nFlagsb;
            }
            rAreasOut->m_Size = v53 + 1;
            v50 = &rAreasOut->m_Memory.m_pMemory[v52];
            if ( v50 != 0 )
              *v50 = v51;
          }
          if ( ++v48 == v49 )
            break;
          v46 = v47->m_elevatorAreas.m_pData;
        }
      }
    }
  }
}


// CNavBreadthFirstSearch::IterateAdjacentAreas  (line 567, @0x0000000002ef96c0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, Purge_FixedGrowable, RemoveAll, end, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CollectAdjacentAreas, CNavBreadthFirstSearch::IncludeInSearch, CUtlMemory<CNavArea*, int>::ConvertToExternalMemory, CUtlMemory<CNavArea*, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CNavBreadthFirstSearch::BreadthFirstSearchCore
void __fastcall CNavBreadthFirstSearch::IterateAdjacentAreas(
        CNavBreadthFirstSearch *const this,
        CNavArea *const rArea,
        const CNavArea *pPriorArea)
{
  uint32 m_nConnectionFlags; // ecx
  CNavArea **m_pMemory; // rbx
  CNavArea **v7; // r12
  CUtlVectorFixedGrowable<CNavArea*,16ul> neighborAreas; // [rsp+0h] [rbp-D0h] BYREF
  unsigned __int64 v9; // [rsp+98h] [rbp-38h]

  neighborAreas.m_Size = 0;
  v9 = __readfsqword(0x28u);
  m_nConnectionFlags = this->m_nConnectionFlags;
  neighborAreas.m_Memory.m_nAllocationCount = 16;
  neighborAreas.m_Memory.m_nGrowSize = 0x80000000;
  neighborAreas.m_Memory.m_pMemory = &neighborAreas.m_Memory.m_FixedMemory;
  CollectAdjacentAreas(&neighborAreas, rArea, pPriorArea, m_nConnectionFlags);
  m_pMemory = neighborAreas.m_Memory.m_pMemory;
  v7 = &neighborAreas.m_Memory.m_pMemory[neighborAreas.m_Size];
  if ( neighborAreas.m_Memory.m_pMemory != v7 )
  {
    do
      CNavBreadthFirstSearch::IncludeInSearch(this, *m_pMemory++, rArea);
    while ( v7 != m_pMemory );
  }
  neighborAreas.m_Size = 0;
  CUtlMemory<CNavArea *,int>::ConvertToExternalMemory(
    &neighborAreas.m_Memory,
    &neighborAreas.m_Memory.m_FixedMemory,
    16,
    0,
    1,
    0x3FFFFFFFu);
  if ( (neighborAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CNavArea *,int>::Purge(&neighborAreas.m_Memory);
}


// CNavBreadthFirstSearch::IncludeInSearch  (line 580, @0x0000000002ef8c60, libserver.so)  // inlines: AddArea, AddToTail, CNavHandle, CNavOpenListElement, CNavSearchElement, CUtlKeyValuePair<int, CNavSearchElement>, CUtlKeyValuePair<int>, Construct<CNavOpenListElement>, Construct<CUtlKeyValuePair<int, CNavSearchElement>, int, CNavSearchElement>, Construct<CUtlKeyValuePair<int, CNavSearchElement>, int>, Convert16bitFloatTo32bits, ConvertFloatTo16bits, DoInsert<int>, DoLookup<int>, Element, FastSqrt, Get, GetArea, GetFloat, GetOpenList, GrowMemory, Insert, IsInCurrentNavMesh, IsInfinity, IsNaN, Length, PercolateUp, Set, SetFloat, SetIndex, SetPathParentArea, Swap, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator(), operator-, operator[]
// calls: CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoInsertUnconstructed, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoLookup<int>, CNavArea::IsBlocked, CUtlMemory<CNavOpenListElement, int>::Grow
// callers: CNavBreadthFirstSearch::IterateAdjacentAreas, CNavBreadthFirstSearch::BreadthFirstSearch
// write access to const memory has been detected, the output may be wrong!
void __fastcall CNavBreadthFirstSearch::IncludeInSearch(
        CNavBreadthFirstSearch *const this,
        CNavArea *const rArea,
        CNavArea *pPriorArea)
{
  CNavSearchHash *p_m_SearchHash; // r14
  CNavArea *v4; // r12
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> >::handle_t *m_AreaId; // rcx
  uint32 v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  int inserted; // eax
  CUtlHashtableEntry<int,CNavSearchElement> *m_pMemory; // rdx
  __int64 v12; // r15
  CUtlHashtableEntry<int,CNavSearchElement> *v13; // rax
  CUtlHashtableEntry<int,CNavSearchElement> *v14; // r15
  uint32 v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // eax
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> >::handle_t *v18; // rcx
  __m128i v19; // xmm0
  CUtlHashtableEntry<int,CNavSearchElement> *v20; // rcx
  __int64 v21; // rax
  CUtlHashtableEntry<int,CNavSearchElement> *v22; // rdx
  unsigned __int16 v23; // ax
  float v24; // xmm1_4
  unsigned int v25; // edx
  float v26; // xmm0_4
  __m128i v27; // xmm1
  unsigned int v28; // edx
  unsigned int v29; // ecx
  int v30; // edi
  __int16 v31; // ax
  __int16 v32; // si
  CNavMesh *m_rNavMesh; // r13
  CNavOpenList *v34; // rbx
  int m_Size; // r14d
  int v36; // eax
  __int64 v37; // r15
  __int64 v38; // rdx
  CNavOpenListElement *v39; // rax
  CNavOpenListElement *v40; // rax
  CNavArea *m_pData; // rax
  CNavOpenListElement *v42; // rdx
  int v43; // edi
  int v44; // esi
  int v45; // eax
  int v46; // r12d
  __int64 v47; // r15
  int v48; // r14d
  __int64 v49; // r13
  CNavOpenListElement *v50; // rdx
  CNavOpenListElement *v51; // rax
  CNavArea *v52; // rdi
  const CNavMesh *m_pAssociatedNavMesh; // rsi
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  CNavArea *v57; // rdx
  CNavOpenListElement *v58; // rax
  CNavOpenListElement *v59; // r13
  CNavMesh *v60; // rax
  CNavOpenListElement *v61; // r15
  unsigned __int64 v62; // xmm2_8
  float (*m_pCostFunc)(const CNavArea *, const CNavArea *, float); // rax
  float v64; // xmm0_4
  float v65; // xmm0_4
  unsigned int v66; // [rsp+Ch] [rbp-44h]
  int rAreaa; // [rsp+10h] [rbp-40h]
  uint32 rAreab; // [rsp+10h] [rbp-40h]
  uint32 rAreae; // [rsp+10h] [rbp-40h]
  CNavArea *rAreac; // [rsp+10h] [rbp-40h]
  int rAreaf; // [rsp+10h] [rbp-40h]
  uint32 rAreag; // [rsp+10h] [rbp-40h]
  float rAread; // [rsp+10h] [rbp-40h]

  p_m_SearchHash = &this->m_SearchHash;
  v4 = rArea;
  m_AreaId = rArea->m_AreaId;
  v7 = 33 * (((4097 * rArea->m_AreaId + 2127912214) >> 19) ^ (4097 * rArea->m_AreaId + 2127912214) ^ 0xC761C23C);
  v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
  v9 = HIWORD(v8) ^ v8 ^ 0xB55A4F09;
  if ( this->m_SearchHash.m_nUsed == 0
    || (rAreae = rArea->m_AreaId,
        v45 = CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoLookup<int>(
                &this->m_SearchHash,
                m_AreaId,
                v9,
                m_AreaId),
        LODWORD(m_AreaId) = rAreae,
        v45 == -1) )
  {
    rAreaa = m_AreaId;
    inserted = CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoInsertUnconstructed(
                 p_m_SearchHash,
                 v9,
                 1);
    m_pMemory = this->m_SearchHash.m_table.m_pMemory;
    v12 = inserted;
    v13 = &m_pMemory[inserted];
    if ( v13 != -4LL )
    {
      LOWORD(v13->data[2]) = 0;
      HIWORD(v13->data[2]) = 0;
      LOWORD(v13->data[3]) = 0;
      v13->data[0] = rAreaa;
      *&v13->data[4] = 0;
      m_pMemory = this->m_SearchHash.m_table.m_pMemory;
    }
  }
  else
  {
    m_pMemory = this->m_SearchHash.m_table.m_pMemory;
    v12 = v45;
  }
  v14 = &m_pMemory[v12];
  if ( LOWORD(v14->data[2]) == 1
    || (this->m_nConnectionFlags & 0x20) == 0 && CNavArea::IsBlocked(v4, this->m_nTeamIdForBlockedCheck, 0) )
  {
    return;
  }
  if ( pPriorArea == 0 )
  {
    v26 = 0.0;
    *&v14->data[4] = 0;
    LOWORD(v14->data[2]) = 1;
    v27 = 0;
    goto LABEL_18;
  }
  v15 = pPriorArea->m_AreaId;
  v16 = 33 * (((4097 * v15 + 2127912214) >> 19) ^ (4097 * v15 + 2127912214) ^ 0xC761C23C);
  v17 = 9 * ((v16 - 369570787) ^ ((v16 + 374761393) << 9)) - 42973499;
  v18 = (HIWORD(v17) ^ v17 ^ 0xB55A4F09);
  if ( this->m_SearchHash.m_nUsed == 0
    || (v66 = HIWORD(v17) ^ v17 ^ 0xB55A4F09,
        rAreag = pPriorArea->m_AreaId,
        LODWORD(v21) = CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoLookup<int>(
                         p_m_SearchHash,
                         v15,
                         v18,
                         v18),
        v15 = rAreag,
        LODWORD(v18) = v66,
        v21 == -1) )
  {
    rAreab = v15;
    LODWORD(v21) = CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoInsertUnconstructed(
                     p_m_SearchHash,
                     v18,
                     1);
    v20 = this->m_SearchHash.m_table.m_pMemory;
    v21 = v21;
    v22 = &v20[v21];
    if ( v22 != -4LL )
    {
      LOWORD(v22->data[2]) = 0;
      *&v22->data[4] = 0;
      HIWORD(v22->data[2]) = 0;
      v22->data[0] = rAreab;
      LOWORD(v22->data[3]) = 0;
      v20 = this->m_SearchHash.m_table.m_pMemory;
    }
  }
  else
  {
    v20 = this->m_SearchHash.m_table.m_pMemory;
    v21 = v21;
  }
  v23 = HIWORD(v20[v21].data[2]);
  if ( (v23 & 0x7FFF) == 0x7C00 )
  {
    v62 = 3347046400LL;
    if ( (v23 & 0x8000u) == 0 )
      v62 = 1199562752;
    goto LABEL_59;
  }
  if ( (HIBYTE(v23) & 0x7C) != 0x7C )
  {
    if ( (v23 & 0x7C00) == 0 && (v23 & 0x3FF) != 0 )
    {
      v24 = 1.0;
      if ( (v23 & 0x8000u) != 0 )
        v24 = -1.0;
      *v19.m128i_i32 = (((v23 & 0x3FF) * 0.0009765625) * v24) * 0.000061035156;
      v25 = _mm_cvtsi128_si32(v19);
      goto LABEL_58;
    }
LABEL_57:
    v25 = (((((v23 >> 10) & 0x1F) + 112) * (((v23 >> 10) & 0x1F) != 0)) << 23)
        | (((v23 & 0x8000u) != 0) << 31)
        | ((v23 & 0x3FF) << 13);
LABEL_58:
    v62 = _mm_cvtsi32_si128(v25).m128i_u64[0];
    goto LABEL_59;
  }
  v62 = 0;
  if ( (v23 & 0x3FF) == 0 )
    goto LABEL_57;
LABEL_59:
  m_pCostFunc = this->m_pCostFunc;
  if ( m_pCostFunc != 0 )
  {
    rAreaf = v62;
    m_pCostFunc(pPriorArea, v4, *&v62);
    LODWORD(v62) = rAreaf;
  }
  else
  {
    v65 = v4->m_vCenter.z - pPriorArea->m_vCenter.z;
    v64 = fsqrt(
            (((v4->m_vCenter.x - pPriorArea->m_vCenter.x) * (v4->m_vCenter.x - pPriorArea->m_vCenter.x))
           + ((v4->m_vCenter.y - pPriorArea->m_vCenter.y) * (v4->m_vCenter.y - pPriorArea->m_vCenter.y)))
          + (v65 * v65));
  }
  if ( v64 < 0.0 )
    return;
  v26 = v64 + *&v62;
  v27 = 0x477FE000u;
  LOWORD(v14->data[2]) = 1;
  *&v14->data[4] = pPriorArea;
  if ( v26 <= 65504.0 )
  {
    v27 = 0xC77FE000;
    *v27.m128i_i32 = fmaxf(-65504.0, v26);
  }
LABEL_18:
  v28 = _mm_cvtsi128_si32(v27);
  v29 = v28 >> 31 << 15;
  v30 = v28 & 0x7FFFFFFF;
  v31 = v28 >> 31 << 15;
  if ( (v28 & 0x7FFFFFFF) != 0 )
  {
    v32 = (_mm_cvtsi128_si32(v27) >> 16) & 0x7F80;
    if ( v32 != 0 )
    {
      if ( v30 == 2139095040 )
        goto LABEL_69;
      if ( v32 == 32640 && (v28 & 0x7FFFFF) != 0 )
        goto LABEL_23;
LABEL_35:
      v43 = (v28 >> 23);
      v44 = v43 - 127;
      if ( v43 - 127 < -24 )
      {
        v31 = v28 >> 31 << 15;
      }
      else if ( v44 >= -14 )
      {
        if ( v44 <= 15 )
        {
          v31 = ((v28 & 0x7FFFFF) >> 13) | v29 | (((v44 + 15) & 0x1F) << 10);
          goto LABEL_24;
        }
LABEL_69:
        v31 = v29 | 0x7BFF;
        goto LABEL_24;
      }
      HIBYTE(v31) &= 0x83u;
      if ( (113 - v43 - 1) <= 9 )
        v31 = ((1 << (10 - (113 - v43))) + ((v28 & 0x7FFFFF) >> (113 - v43 + 13))) & 0x3FF | v31 & 0xFC00;
      goto LABEL_24;
    }
    if ( (v28 & 0x7FFFFF) == 0 )
    {
      if ( v30 == 2139095040 )
        goto LABEL_69;
      goto LABEL_35;
    }
  }
LABEL_23:
  v31 = v28 >> 31 << 15;
LABEL_24:
  HIWORD(v14->data[2]) = v31;
  LOWORD(v14->data[3]) = v31;
  m_rNavMesh = v4->m_rNavMesh;
  v34 = CNavArea::ms_pOpenList;
  m_Size = CNavArea::ms_pOpenList->m_PriorityQueue.m_heap.m_Size;
  v36 = CNavArea::ms_pOpenList->m_PriorityQueue.m_heap.m_Size;
  if ( CNavArea::ms_pOpenList->m_PriorityQueue.m_heap.m_Size == CNavArea::ms_pOpenList->m_PriorityQueue.m_heap.m_Memory.m_nAllocationCount )
  {
    rAread = v26;
    CUtlMemory<CNavOpenListElement,int>::Grow(&CNavArea::ms_pOpenList->m_PriorityQueue.m_heap.m_Memory, 1);
    v36 = v34->m_PriorityQueue.m_heap.m_Size;
    v26 = rAread;
  }
  v37 = m_Size;
  v34->m_PriorityQueue.m_heap.m_Size = v36 + 1;
  v38 = m_Size;
  v39 = &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v38];
  if ( v39 != 0 )
  {
    v39->m_pNavArea.m_pData = 0;
    v39->m_pNavArea.m_pAssociatedNavMesh = 0;
    v39->m_flTotalCost = 0.0;
    v39->m_flCostSoFar = 0.0;
    v39->m_flPathLengthSoFar = 0.0;
    v40 = &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v38];
  }
  else
  {
    v40 = 0;
  }
  v40->m_pNavArea.m_pData = v4;
  v40->m_pNavArea.m_pAssociatedNavMesh = m_rNavMesh;
  v40->m_flTotalCost = v26;
  v40->m_flCostSoFar = -1.0;
  v40->m_flPathLengthSoFar = -1.0;
  m_pData = 0;
  v42 = &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v38];
  if ( v42->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
    m_pData = v42->m_pNavArea.m_pData;
  m_pData->m_nOpenListHeapIndex = m_Size;
  if ( v34->m_PriorityQueue.m_heap.m_Size > m_Size && m_Size != 0 )
  {
    rAreac = v4;
    v46 = m_Size;
    while ( 1 )
    {
      v47 = v37;
      v48 = (v46 + 1) / 2 - 1;
      v49 = v48;
      if ( v34->m_PriorityQueue.m_LessFunc(
             &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v47],
             &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v49]) )
      {
        break;
      }
      v50 = v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
      v51 = &v50[v49];
      v52 = v50[v48].m_pNavArea.m_pData;
      m_pAssociatedNavMesh = v50[v49].m_pNavArea.m_pAssociatedNavMesh;
      m_flTotalCost = v50[v49].m_flTotalCost;
      v51->m_pNavArea.m_pData = v50[v47].m_pNavArea.m_pData;
      m_flCostSoFar = v50[v49].m_flCostSoFar;
      m_flPathLengthSoFar = v50[v49].m_flPathLengthSoFar;
      v51->m_pNavArea.m_pAssociatedNavMesh = v50[v47].m_pNavArea.m_pAssociatedNavMesh;
      *&v51->m_flTotalCost = *&v50[v47].m_flTotalCost;
      v51->m_flPathLengthSoFar = v50[v47].m_flPathLengthSoFar;
      v57 = 0;
      v58 = &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v47];
      v58->m_pNavArea.m_pData = v52;
      v58->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
      v58->m_flTotalCost = m_flTotalCost;
      v58->m_flCostSoFar = m_flCostSoFar;
      v58->m_flPathLengthSoFar = m_flPathLengthSoFar;
      v59 = &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v49];
      v60 = TheNavMesh;
      if ( v59->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
        v57 = v59->m_pNavArea.m_pData;
      v57->m_nOpenListHeapIndex = v48;
      v61 = &v34->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v47];
      if ( v60 == v61->m_pNavArea.m_pAssociatedNavMesh )
      {
        v61->m_pNavArea.m_pData->m_nOpenListHeapIndex = v46;
        if ( (v46 + 1) / 2 == 1 )
          break;
      }
      else
      {
        HIDWORD(stru_10.m_pIdentityChunks[20]) = v46;
        if ( (v46 + 1) / 2 == 1 )
          break;
      }
      v46 = (v46 + 1) / 2 - 1;
      v37 = v48;
    }
    v4 = rAreac;
  }
  v4->m_nPathInEdge = -1;
  v4->m_pPathParent = pPriorArea;
  *(v4 + 328) = *(v4 + 328) & 0xF0 | 4;
}


// CNavBreadthFirstSearchLattice::operator()  (line 645, @0x0000000002ee49c0, libserver.so)  // inlines: GetExtent, IsOverlappingPoint, Max<float>, Min<float>, Sign, Square<float>, Vector, operator(), operator=
// calls: ceilf, floorf, CNavPoly::GetZ, CNavPoly::IsOverlappingPoint
NavSearchAreaResult_t __fastcall CNavBreadthFirstSearchLattice::operator()(
        CNavBreadthFirstSearchLattice *const this,
        CNavArea *const rArea,
        NavSearchAreaInfo_t *pAreaInfo)
{
  float v5; // xmm6_4
  __m128 x_low; // xmm5
  __m128 v7; // xmm3
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128i v10; // xmm5
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  __m128 v14; // xmm7
  float v15; // ebx
  __m128 v16; // xmm2
  __m128 v17; // xmm4
  __m128 v18; // xmm1
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  int v25; // eax
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm5_4
  int v29; // eax
  float v30; // xmm4_4
  float v31; // xmm4_4
  int v32; // r9d
  int v33; // eax
  int v34; // r12d
  int v35; // ebx
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm7_4
  int v42; // r9d
  int v43; // r12d
  int v44; // ebx
  float v45; // xmm2_4
  float j; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v51; // xmm0_4
  int nRA; // [rsp+0h] [rbp-9Ch]
  float v53; // [rsp+4h] [rbp-98h]
  float flExtentMaxY; // [rsp+Ch] [rbp-90h]
  int nRMax; // [rsp+10h] [rbp-8Ch]
  float flExtentMaxX; // [rsp+14h] [rbp-88h]
  float flExtentMinY; // [rsp+1Ch] [rbp-80h]
  int nRB; // [rsp+20h] [rbp-7Ch]
  float v59; // [rsp+28h] [rbp-74h]
  float v60; // [rsp+2Ch] [rbp-70h]
  float flR; // [rsp+3Ch] [rbp-60h]
  float flRa; // [rsp+3Ch] [rbp-60h]
  int nR; // [rsp+40h] [rbp-5Ch]
  int i; // [rsp+44h] [rbp-58h]
  int ia; // [rsp+44h] [rbp-58h]
  float v67; // [rsp+48h] [rbp-54h]
  float v68; // [rsp+48h] [rbp-54h]
  float v69; // [rsp+48h] [rbp-54h]
  float v70; // [rsp+48h] [rbp-54h]
  float v71; // [rsp+4Ch] [rbp-50h]
  float v72; // [rsp+4Ch] [rbp-50h]
  float v73; // [rsp+4Ch] [rbp-50h]
  float v74; // [rsp+4Ch] [rbp-50h]
  vec_t v75; // [rsp+4Ch] [rbp-50h]
  float v76; // [rsp+50h] [rbp-4Ch]
  float v77; // [rsp+50h] [rbp-4Ch]
  float v78; // [rsp+50h] [rbp-4Ch]
  float v79; // [rsp+50h] [rbp-4Ch]
  Vector vPos; // [rsp+54h] [rbp-48h] BYREF

  flExtentMaxY = rArea->m_Extent.hi.y;
  v5 = *(this + 36);
  x_low = LODWORD(rArea->m_Extent.lo.x);
  v59 = x_low.m128_f32[0];
  flExtentMinY = rArea->m_Extent.lo.y;
  x_low.m128_f32[0] = x_low.m128_f32[0] - v5;
  v71 = v5;
  flExtentMaxX = rArea->m_Extent.hi.x;
  v7.m128_f32[0] = flExtentMaxX - v5;
  v8 = _mm_cmple_ss(0LL, x_low);
  v9 = _mm_cmple_ss(0LL, v7);
  if ( COERCE_FLOAT(_mm_andnot_ps(v8, 0xBF800000).m128_u32[0] | v8.m128_i32[0] & 0x3F800000) == COERCE_FLOAT(
                                                                                                  COERCE_UNSIGNED_INT(_mm_andnot_ps(v9, 0xBF800000).m128_f32[0])
                                                                                                | v9.m128_i32[0]
                                                                                                & 0x3F800000) )
  {
    v11 = fabs(v7.m128_f32[0]);
    v10 = _mm_and_ps(x_low, 0x7FFFFFFFu);
    v12 = v11;
    if ( v11 > *v10.m128i_i32 )
      v11 = *v10.m128i_i32;
  }
  else
  {
    v10 = _mm_and_ps(x_low, 0x7FFFFFFFu);
    v11 = 0.0;
    v12 = fabs(flExtentMaxX - v5);
  }
  *v10.m128i_i32 = fmaxf(*v10.m128i_i32, v12);
  v13 = *(this + 37);
  v14.m128_f32[0] = flExtentMinY - v13;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  v16.m128_f32[0] = flExtentMaxY - v13;
  v17 = _mm_cmple_ss(0LL, v14);
  v18 = _mm_cmple_ss(0LL, v16);
  if ( COERCE_FLOAT(_mm_andnot_ps(v17, 0xBF800000).m128_u32[0] | v17.m128_i32[0] & 0x3F800000) == COERCE_FLOAT(_mm_andnot_ps(v18, 0xBF800000).m128_u32[0] | v18.m128_i32[0] & 0x3F800000) )
  {
    v20 = fabs(v16.m128_f32[0]);
    v22 = fabs(v14.m128_f32[0]);
    v21 = v20;
    if ( v20 > v22 )
      v20 = v22;
  }
  else
  {
    v19 = v16.m128_f32[0];
    v20 = 0.0;
    v21 = fabs(v19);
    v22 = fabs(v14.m128_f32[0]);
  }
  flR = v11;
  *&i = v20;
  v76 = fmaxf(v22, v21);
  v67 = *(this + 40);
  nR = ceilf(fminf(v11, v20) / v67);
  v23 = floorf(fmaxf(v15, v76) / v67);
  v24 = v67;
  nRMax = v23;
  if ( *&i < flR )
  {
    v51 = v76;
    v68 = flR;
    v77 = v24;
    v25 = floorf(v51 / v24);
  }
  else
  {
    v68 = *&i;
    v77 = v24;
    v25 = floorf(v15 / v24);
  }
  nRA = v25;
  v26 = ceilf(v68 / v77);
  v27 = v77;
  nRB = v26;
  if ( nR > nRMax )
    return NavSearchAreaResult_t::NAV_SEARCH_INCLUDE;
  v28 = v71;
LABEL_9:
  v29 = nR;
  flRa = v27 * nR;
  if ( nRB > nR )
  {
    if ( nRA < nR )
      v29 = nRB;
    nR = v29;
  }
  ia = 0;
  while ( 1 )
  {
    v30 = ia + ia;
    if ( (ia & 1) != 0 && flRa == 0.0 )
    {
      v31 = (v30 * flRa) - flRa;
    }
    else
    {
      v31 = (v30 * flRa) - flRa;
      v41 = *(this + 37) + v31;
      v79 = v41;
      if ( v41 >= flExtentMinY && flExtentMaxY >= v41 )
      {
        v60 = v31;
        v70 = v28;
        v74 = *(this + 40);
        v42 = ceilf((v59 - v28) / v74);
        v43 = -nR;
        if ( v42 >= -nR )
          v43 = v42;
        v44 = floorf((flExtentMaxX - v70) / v74);
        v28 = v70;
        v31 = v60;
        if ( v44 > nR )
          v44 = nR;
        if ( v44 >= v43 )
        {
          for ( j = v74; ; j = *(this + 40) )
          {
            v47 = v43 * j;
            v48 = *(this + 39);
            if ( v48 < 0.0 || (v45 = (v47 * v47) + (v60 * v60), (v48 * v48) > v45) )
            {
              v75 = v28 + v47;
              vPos.z = CNavPoly::GetZ(rArea, v79, v45);
              vPos.x = v75;
              vPos.y = v79;
              if ( CNavPoly::IsOverlappingPoint(rArea, &vPos, v49)
                && (*(this + 16) == 0 || (*(this + 17))(this + 112, rArea, pAreaInfo, &vPos) == 0) )
              {
                return NavSearchAreaResult_t::NAV_SEARCH_HALT;
              }
              v28 = *(this + 36);
            }
            if ( ++v43 > v44 )
              break;
          }
          v31 = v60;
        }
      }
    }
    v78 = v28 + v31;
    if ( (v28 + v31) >= v59 && flExtentMaxX >= v78 )
    {
      v53 = v31;
      v72 = *(this + 37);
      v69 = *(this + 40);
      v32 = ceilf((flExtentMinY - v72) / v69);
      v33 = 1 - nR;
      if ( v32 >= 1 - nR )
        v33 = v32;
      v34 = v33;
      v35 = floorf((flExtentMaxY - v72) / v69);
      if ( v35 > nR - 1 )
        v35 = nR - 1;
      if ( v35 >= v34 )
        break;
    }
LABEL_32:
    if ( ++ia == 2 )
    {
      if ( nRMax < ++nR )
        return NavSearchAreaResult_t::NAV_SEARCH_INCLUDE;
      v27 = *(this + 40);
      v28 = *(this + 36);
      goto LABEL_9;
    }
    v28 = *(this + 36);
  }
  v36 = v72;
  v37 = v69;
  while ( 1 )
  {
    v38 = v34 * v37;
    v39 = *(this + 39);
    if ( v39 < 0.0 || (v39 * v39) > ((v53 * v53) + (v38 * v38)) )
    {
      v73 = v38 + v36;
      vPos.z = CNavPoly::GetZ(rArea, v73, v73);
      vPos.x = v78;
      vPos.y = v73;
      if ( CNavPoly::IsOverlappingPoint(rArea, &vPos, v40)
        && (*(this + 16) == 0 || (*(this + 17))(this + 112, rArea, pAreaInfo, &vPos) == 0) )
      {
        return NavSearchAreaResult_t::NAV_SEARCH_HALT;
      }
    }
    if ( v35 < ++v34 )
      goto LABEL_32;
    v37 = *(this + 40);
    v36 = *(this + 37);
  }
}


// CNavHexLattice::DebugDrawHex  (line 765, @0x0000000002ee5060, libserver.so)  // inlines: CalcHexPos, VectorAdd, VectorSubtract, VertexColor_t, operator+, operator-
void __fastcall CNavHexLattice::DebugDrawHex(
        const CNavHexLattice *const this,
        HexIndex_t hexIndex,
        VertexColor_t c,
        float flMargin)
{
  float m_nX; // xmm1_4
  float m_flLatticeRadius; // xmm2_4
  float z; // xmm12_4
  float v7; // xmm1_4
  void (__fastcall *v8)(ISceneViewDebugOverlays *, float *, float *, VertexColor_t *, __int64, double); // rax
  void (__fastcall *v9)(ISceneViewDebugOverlays *, float *, float *, VertexColor_t *, __int64, double); // rax
  void (__fastcall *v10)(ISceneViewDebugOverlays *, float *, float *, VertexColor_t *, __int64, double); // rax
  void (__fastcall *v11)(ISceneViewDebugOverlays *, float *, float *, VertexColor_t *, __int64, double); // rax
  void (__fastcall *v12)(ISceneViewDebugOverlays *, float *, float *, VertexColor_t *, __int64, double); // rax
  void (__fastcall *v13)(ISceneViewDebugOverlays *, float *, float *, VertexColor_t *, __int64, double); // rax
  float v14; // [rsp+0h] [rbp-84h]
  float v15; // [rsp+4h] [rbp-80h]
  float vO2d; // [rsp+8h] [rbp-7Ch]
  float vO2d_4; // [rsp+Ch] [rbp-78h]
  float v18; // [rsp+10h] [rbp-74h]
  float flR; // [rsp+18h] [rbp-6Ch]
  float flRa; // [rsp+18h] [rbp-6Ch]
  float v21; // [rsp+20h] [rbp-64h]
  float v22; // [rsp+20h] [rbp-64h]
  float v23; // [rsp+28h] [rbp-5Ch]
  float v24; // [rsp+28h] [rbp-5Ch]
  float v25; // [rsp+2Ch] [rbp-58h]
  VertexColor_t vc; // [rsp+34h] [rbp-50h] BYREF
  float v27; // [rsp+44h] [rbp-40h] BYREF
  float v28; // [rsp+48h] [rbp-3Ch]
  float v29; // [rsp+4Ch] [rbp-38h]
  float v30; // [rsp+54h] [rbp-30h] BYREF
  float v31; // [rsp+58h] [rbp-2Ch]
  float v32; // [rsp+5Ch] [rbp-28h]

  m_nX = hexIndex.m_nX;
  m_flLatticeRadius = this->m_flLatticeRadius;
  vc.color = c.color;
  flR = flMargin + m_flLatticeRadius;
  z = this->m_vLatticeCenter.z;
  v15 = (1.7320508 * (flMargin + m_flLatticeRadius)) * 0.5;
  v14 = -(flMargin + m_flLatticeRadius) * 0.5;
  v23 = ((m_flLatticeRadius * 1.5) * m_nX) + this->m_vLatticeCenter.x;
  v25 = 0.5 * (flMargin + m_flLatticeRadius);
  v7 = (((m_nX * (m_flLatticeRadius * 1.7320508)) * 0.5) + this->m_vLatticeCenter.y)
     + (hexIndex.m_nY * (m_flLatticeRadius * 1.7320508));
  v8 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v30 = v14 + v23;
  v31 = v15 + v7;
  v21 = v15 + v7;
  v32 = z + 0.0;
  vO2d = v7;
  v27 = v23 - (flMargin + m_flLatticeRadius);
  vO2d_4 = v27;
  v28 = v7 + 0.0;
  v18 = v7 + 0.0;
  v29 = z + 0.0;
  v8(debugoverlay, &v27, &v30, &vc, 1, 0.0);
  v9 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v27 = v14 + v23;
  v30 = v25 + v23;
  v31 = v21;
  v32 = z + 0.0;
  v28 = v21;
  v29 = z + 0.0;
  v9(debugoverlay, &v27, &v30, &vc, 1, 0.0);
  flRa = flR + v23;
  v10 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v32 = z;
  v27 = v25 + v23;
  v30 = flRa;
  v31 = vO2d;
  v28 = v21;
  v29 = z + 0.0;
  v10(debugoverlay, &v27, &v30, &vc, 1, 0.0);
  v11 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v22 = v23 - v14;
  v30 = v23 - v14;
  v31 = vO2d - v15;
  v27 = flRa;
  v28 = vO2d;
  v32 = z;
  v29 = z;
  v11(debugoverlay, &v27, &v30, &vc, 1, 0.0);
  v24 = v23 - v25;
  v12 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v30 = v24;
  v31 = vO2d - v15;
  v32 = z;
  v27 = v22;
  v28 = vO2d - v15;
  v29 = z;
  v12(debugoverlay, &v27, &v30, &vc, 1, 0.0);
  v13 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v32 = z + 0.0;
  v30 = vO2d_4;
  v31 = v18;
  v27 = v24;
  v28 = vO2d - v15;
  v29 = z;
  v13(debugoverlay, &v27, &v30, &vc, 1, 0.0);
}


// CNavSearchHexLattice::CNavSearchHexLattice  (line 793, @0x0000000002ee6fd0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CNavBreadthFirstSearch, CNavBreadthFirstSearch<CNavSearchHexLattice>, CNavHexLattice, CNavSearchHash, CUtlHashtable, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, _Function_base, function, operator=<CNavSearchHexLattice>, swap, swap<NavSearchAreaResult_t (*)(const std::_Any_data&, CNavArea&, NavSearchAreaInfo_t*)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~_Function_base, ~function
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<HexIndex_t, int>::Purge, CNavBreadthFirstSearch::~CNavBreadthFirstSearch, _Unwind_Resume, __stack_chk_fail
// callers: CNavEditor::UpdateSelection, NavSearch::GetNearestNav
// globals: std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<CNavSearchHexLattice>>::_M_invoke(std::_Any_data const&
void __fastcall CNavSearchHexLattice::CNavSearchHexLattice(
        CNavSearchHexLattice *const this,
        FuncNavOnSearchPosSimple_t *const rFunc,
        NavHull_t navHull,
        const Vector *const vSearchCenter,
        bool bBigSearch,
        __m128i flHexRadius,
        float flMaxSearchDist)
{
  float v7; // r15d
  FuncNavOnSearchPosSimple_t *p_m_funcOnSearchPos; // r14
  __int64 v12; // rdi
  vec_t z; // eax
  float v14; // xmm0_4
  __int64 v16; // [rsp+1Ch] [rbp-58h]

  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(flHexRadius));
  p_m_funcOnSearchPos = &this->m_funcOnSearchPos;
  this->m_NavHull.m_hullCategory = navHull.m_hullCategory;
  this->m_SearchHash.m_table.m_pMemory = 0;
  this->m_SearchHash.m_table.m_nAllocationCount = 0;
  this->m_SearchHash.m_table.m_nGrowSize = 0;
  this->m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta = v16;
  this->m_SearchHash.m_nUsed = 0;
  this->m_SearchHash.m_nMinSize = 1024;
  this->m_SearchHash.m_bSizeLocked = 0;
  this->m_nTeamIdForBlockedCheck = -1;
  this->m_pCostFunc = 0;
  this->m_NavHull.m_flHullRadius = navHull.m_flHullRadius;
  this->m_NavHull.m_flHullHeight = navHull.m_flHullHeight;
  this->m_nConnectionFlags = 29;
  this->m_funcOnSearchArea._M_functor._M_unused._M_object = this;
  this->m_funcOnSearchArea._M_manager = std::_Function_base::_Ref_manager<CNavSearchHexLattice>::_M_manager;
  this->m_funcOnSearchArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<CNavSearchHexLattice>>::_M_invoke;
  v12 = 0;
  this->_vptr_CNavBreadthFirstSearch = off_47AE230;  // vptr: CNavSearchHexLattice
  this->m_funcOnSearchPos._M_manager = 0;
  if ( rFunc->_M_manager != 0 )
  {
    this->m_funcOnSearchPos._M_invoker = rFunc->_M_invoker;
    this->m_funcOnSearchPos._M_manager = rFunc->_M_manager;
    rFunc->_M_manager(p_m_funcOnSearchPos, rFunc, std::_Manager_operation::__clone_functor);
  }
  *&this->m_HexLattice.m_vLatticeCenter.x = *&vSearchCenter->x;
  z = vSearchCenter->z;
  this->m_HexLattice.m_flLatticeRadius = v7;
  this->m_flMaxSearchDist = flMaxSearchDist;
  this->m_Hexes.m_Size = 0;
  this->m_Hexes.m_Memory.m_pMemory = 0;
  this->m_HexLattice.m_vLatticeCenter.z = z;
  this->m_Hexes.m_Memory.m_nAllocationCount = 1024;
  this->m_Hexes.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this - 64) & 1) != 0 && Plat_IsInDebugSessionRaw(v12) != 0 )
    __debugbreak();
  this->m_Hexes.m_Memory.m_pMemory = &this->m_Hexes.m_Memory.m_FixedMemory;
  if ( !bBigSearch )
  {
    v14 = 50.0 * this->m_HexLattice.m_flLatticeRadius;
    if ( v14 <= this->m_flMaxSearchDist )
      this->m_flMaxSearchDist = v14;
  }
}


// CNavSearchHexLattice::DoSearch  (line 812, @0x0000000002efe170, libserver.so)  // inlines: CalcHexPos, Sort, Vector, __final_insertion_sort<HexIndex_t*>, __lg, __unguarded_insertion_sort<HexIndex_t*>, operator(), sort<HexIndex_t*>
// calls: CNavBreadthFirstSearch::BreadthFirstSearch, std::__introsort_loop<HexIndex_t*, long int>, std::__insertion_sort<HexIndex_t*>, CNavMesh::GetNearestNav, std::__unguarded_linear_insert<HexIndex_t*>
// callers: CNavEditor::UpdateSelection, NavSearch::GetNearestNav
void __fastcall CNavSearchHexLattice::DoSearch(CNavSearchHexLattice *const this)
{
  float v1; // xmm1_4
  HexIndex_t *m_pMemory; // r13
  __int64 m_Size; // rax
  HexIndex_t *v5; // r12
  HexIndex_t *v6; // rsi
  __int64 v7; // rbx
  HexIndex_t *v8; // r10
  HexIndex_t *v9; // r14
  float m_flLatticeRadius; // xmm1_4
  float m_nX; // xmm3_4
  int m_nY; // eax
  float v13; // xmm0_4
  HexIndex_t *v14; // rbx
  HexIndex_t *v15; // rdi
  CUtlVectorBase<HexIndex_t,CUtlMemoryFixedGrowable<HexIndex_t,1024ul,int> >::iterator __for_end; // [rsp+8h] [rbp-58h]
  Vector vSearchPos; // [rsp+10h] [rbp-50h] BYREF
  Vector vPos; // [rsp+20h] [rbp-40h] BYREF
  NavHull_t v19; // 0:rdx.8,8:xmm0_4.4

  CNavBreadthFirstSearch::BreadthFirstSearch(this, &this->m_HexLattice.m_vLatticeCenter, this->m_flMaxSearchDist, v1);
  m_pMemory = this->m_Hexes.m_Memory.m_pMemory;
  m_Size = this->m_Hexes.m_Size;
  v5 = &m_pMemory[m_Size];
  if ( m_pMemory != v5 )
  {
    v6 = &m_pMemory[m_Size];
    v7 = 4 * m_Size;
    _BitScanReverse64(&m_Size, (4 * m_Size) >> 2);
    std::__introsort_loop<HexIndex_t *,long>(this->m_Hexes.m_Memory.m_pMemory, v6, 2 * (63LL - (m_Size ^ 0x3F)));
    if ( v7 > 67 )
    {
      v14 = m_pMemory + 16;
      std::__insertion_sort<HexIndex_t *>(m_pMemory, m_pMemory + 16);
      if ( v5 != &m_pMemory[16] )
      {
        do
        {
          v15 = v14++;
          std::__unguarded_linear_insert<HexIndex_t *>(v15);
        }
        while ( v5 != v14 );
      }
    }
    else
    {
      std::__insertion_sort<HexIndex_t *>(m_pMemory, v5);
    }
    v8 = this->m_Hexes.m_Memory.m_pMemory;
    __for_end = &v8[this->m_Hexes.m_Size];
    if ( v8 != __for_end )
    {
      v9 = this->m_Hexes.m_Memory.m_pMemory;
      do
      {
        m_flLatticeRadius = this->m_HexLattice.m_flLatticeRadius;
        *&v19.m_hullCategory = *&this->m_NavHull.m_hullCategory;
        m_nX = v9->m_nX;
        m_nY = v9->m_nY;
        v13 = (((1.7320508 * m_flLatticeRadius) * m_nX) * 0.5) + this->m_HexLattice.m_vLatticeCenter.y;
        vPos.x = ((m_flLatticeRadius * 1.5) * m_nX) + this->m_HexLattice.m_vLatticeCenter.x;
        vPos.z = this->m_HexLattice.m_vLatticeCenter.z;
        vPos.y = v13 + (m_nY * (1.7320508 * m_flLatticeRadius));
        v19.m_flHullHeight = this->m_NavHull.m_flHullHeight;
        if ( CNavMesh::GetNearestNav(TheNavMesh, &vPos, v19, 8, &vSearchPos, 10000.0) != 0
          && (this->m_funcOnSearchPos._M_manager == 0
           || this->m_funcOnSearchPos._M_invoker(&this->m_funcOnSearchPos, &vSearchPos) == NavSearchPosResult_t::NAV_SEARCH_POS_HALT) )
        {
          break;
        }
        ++v9;
      }
      while ( __for_end != v9 );
    }
  }
}


// CNavSearchHexLattice::operator()  (line 836, @0x0000000002ef22b0, libserver.so)
// calls: CNavSearchHexLattice::AddHexesForArea
NavSearchAreaResult_t __fastcall CNavSearchHexLattice::operator()(
        CNavSearchHexLattice *const this,
        CNavArea *const rArea,
        NavSearchAreaInfo_t *pAreaInfo)
{
  CNavSearchHexLattice::AddHexesForArea(this, rArea);
  return NavSearchAreaResult_t::NAV_SEARCH_INCLUDE;
}


// CNavSearchHexLattice::AddHexesForArea  (line 844, @0x0000000002ef1f60, libserver.so)  // inlines: AddToTail, CalcHexPos, CopyConstruct<HexIndex_t>, DistToSqr, Element, GetExtent, GrowMemory, HexIndex_t, LengthSqr, Square<float>, Vector2D, Vector2DSubtract, operator=, operator[]
// calls: floorf, CNavPoly::IsOverlappingPoint, CUtlMemory<HexIndex_t, int>::Grow
// callers: CNavSearchHexLattice::operator(), std::_Function_handler<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*), std::reference_wrapper<CNavSearchHexLattice> >::_M_invoke
void __fastcall CNavSearchHexLattice::AddHexesForArea(CNavSearchHexLattice *const this, const CNavArea *const rArea)
{
  float m_flLatticeRadius; // xmm1_4
  int v5; // ebx
  float v6; // xmm0_4
  float v7; // xmm7_4
  int v8; // r12d
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  int v12; // r13d
  int16 v13; // r14
  float x; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  bool IsOverlappingPoint; // al
  __int64 m_Size; // rax
  int v19; // ecx
  HexIndex_t *v20; // rax
  float v21; // [rsp+14h] [rbp-7Ch]
  float v22; // [rsp+18h] [rbp-78h]
  float y; // [rsp+1Ch] [rbp-74h]
  int nXMax; // [rsp+20h] [rbp-70h]
  float flH; // [rsp+38h] [rbp-58h]
  float v27; // [rsp+44h] [rbp-4Ch]
  float v28; // [rsp+44h] [rbp-4Ch]
  float flYBasea; // [rsp+48h] [rbp-48h]
  float flYBaseb; // [rsp+48h] [rbp-48h]
  float flYBase; // [rsp+48h] [rbp-48h]
  float flYBasec; // [rsp+48h] [rbp-48h]
  float flSa; // [rsp+4Ch] [rbp-44h]
  float flS; // [rsp+4Ch] [rbp-44h]
  float flSb; // [rsp+4Ch] [rbp-44h]
  int flSc; // [rsp+4Ch] [rbp-44h]
  Vector2D vHexPos; // [rsp+50h] [rbp-40h] BYREF

  m_flLatticeRadius = this->m_HexLattice.m_flLatticeRadius;
  flYBasea = this->m_HexLattice.m_vLatticeCenter.x;
  y = rArea->m_Extent.lo.y;
  flH = m_flLatticeRadius * 1.7320508;
  v22 = rArea->m_Extent.hi.y;
  flSa = m_flLatticeRadius * 1.5;
  v5 = floorf((rArea->m_Extent.lo.x - flYBasea) / (m_flLatticeRadius * 1.5)) - 1;
  v6 = floorf((rArea->m_Extent.hi.x - flYBasea) / flSa);
  v7 = 0.5;
  nXMax = v6 + 1;
  if ( v5 <= nXMax )
  {
    v21 = this->m_flMaxSearchDist * this->m_flMaxSearchDist;
    do
    {
      v27 = v7;
      flS = this->m_HexLattice.m_vLatticeCenter.y;
      flYBaseb = (v5 * flH) * v7;
      v8 = floorf(((y - flS) - flYBaseb) / flH);
      v9 = floorf(((v22 - flS) - flYBaseb) / flH);
      v7 = v27;
      if ( v8 <= v9 )
      {
        v10 = flS;
        v11 = v5;
        v12 = v9;
        while ( 1 )
        {
          v13 = v8;
          x = this->m_HexLattice.m_vLatticeCenter.x;
          v15 = this->m_HexLattice.m_flLatticeRadius * 1.7320508;
          vHexPos.x = ((this->m_HexLattice.m_flLatticeRadius * 1.5) * v11) + x;
          vHexPos.y = (((v15 * v11) * v7) + v10) + (v8 * v15);
          v16 = ((vHexPos.x - x) * (vHexPos.x - x)) + ((vHexPos.y - v10) * (vHexPos.y - v10));
          if ( v21 <= v16 )
            goto LABEL_5;
          flYBase = v7;
          flSb = v11;
          IsOverlappingPoint = CNavPoly::IsOverlappingPoint(rArea, &vHexPos, v16);
          v11 = flSb;
          v7 = flYBase;
          if ( !IsOverlappingPoint )
            goto LABEL_5;
          m_Size = this->m_Hexes.m_Size;
          v19 = this->m_Hexes.m_Size;
          if ( m_Size == this->m_Hexes.m_Memory.m_nAllocationCount )
          {
            flSc = this->m_Hexes.m_Size;
            v28 = flYBase;
            flYBasec = v11;
            CUtlMemory<HexIndex_t,int>::Grow(&this->m_Hexes.m_Memory, 1);
            v19 = this->m_Hexes.m_Size;
            v7 = v28;
            v11 = flYBasec;
            m_Size = flSc;
          }
          this->m_Hexes.m_Size = v19 + 1;
          v20 = &this->m_Hexes.m_Memory.m_pMemory[m_Size];
          if ( v20 != 0 )
          {
            ++v8;
            v20->m_nY = v13;
            v20->m_nX = v5;
            if ( v12 < v8 )
              break;
          }
          else
          {
LABEL_5:
            if ( v12 < ++v8 )
              break;
          }
          v10 = this->m_HexLattice.m_vLatticeCenter.y;
        }
      }
      ++v5;
    }
    while ( nXMax >= v5 );
  }
}


// NavSearch::GetNearestNav  (line 880, @0x0000000002f032f0, libserver.so)  // inlines: Purge, Purge_FixedGrowable, _Function_base, _M_init_functor, function<NavSearch::GetNearestNav(NavSearch::FuncNavTestPos_t&, const Vector&, NavHull_t, Vector*, float, float)::__lambda19, void>, operator!=, operator=, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CNavSearchHexLattice, ~CUtlHashtable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~_Function_base, ~function
// calls: operator new, CNavSearchHexLattice::CNavSearchHexLattice, CNavSearchHexLattice::DoSearch, CUtlVectorBase<HexIndex_t, CUtlMemoryFixedGrowable<HexIndex_t, 1024ul, int> >::RemoveAll, CUtlMemory<HexIndex_t, int>::ConvertToExternalMemory, CUtlMemory<HexIndex_t, int>::Purge, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, __stack_chk_fail, _Unwind_Resume, CNavSearchHexLattice::~CNavSearchHexLattice
// globals: std::_Function_handler<NavSearchPosResult_t ()(Vector const&),NavSearch::GetNearestNav(std::function<bool ()(Vector const&)> &,Vector const&,NavHull_t,Vector*,f, std::_Function_base::_Base_manager<NavSearch::GetNearestNav(std::function<bool ()(Vector const&)> &,Vector const&,NavHull_t,Vector*,float,float)::{lambda(Vector
__int64 __fastcall NavSearch::GetNearestNav(
        NavSearch::FuncNavTestPos_t *const rFunc,
        const Vector *const vPos,
        NavHull_t navHull,
        Vector *pNearestPosOut,
        float flSamplingRadius,
        float flMaxDist)
{
  _QWORD *v9; // rax
  unsigned int v10; // r12d
  Vector vNearestPos; // [rsp+20h] [rbp-1130h] BYREF
  FuncNavOnSearchPosSimple_t funcWrapper; // [rsp+30h] [rbp-1120h] BYREF
  CNavSearchHexLattice latticeSearch; // [rsp+50h] [rbp-1100h] BYREF
  unsigned __int64 v17; // [rsp+1118h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  funcWrapper._M_manager = 0;
  vNearestPos = vec3_invalid;
  v9 = operator new(0x10u);
  *v9 = rFunc;
  v9[1] = &vNearestPos;
  funcWrapper._M_functor._M_unused._M_object = v9;
  funcWrapper._M_invoker = std::_Function_handler<NavSearchPosResult_t ()(Vector const&),NavSearch::GetNearestNav(std::function<bool ()(Vector const&)> &,Vector const&,NavHull_t,Vector*,float,float)::{lambda(Vector const&)#1}>::_M_invoke;
  funcWrapper._M_manager = std::_Function_base::_Base_manager<NavSearch::GetNearestNav(std::function<bool ()(Vector const&)> &,Vector const&,NavHull_t,Vector*,float,float)::{lambda(Vector const&)#1}>::_M_manager;
  CNavSearchHexLattice::CNavSearchHexLattice(
    &latticeSearch,
    &funcWrapper,
    navHull,
    vPos,
    0,
    LODWORD(flSamplingRadius),
    flMaxDist);
  CNavSearchHexLattice::DoSearch(&latticeSearch);
  if ( vNearestPos.x == vec3_invalid.x && vec3_invalid.y == vNearestPos.y && vec3_invalid.z == vNearestPos.z )
  {
    v10 = 0;
  }
  else
  {
    if ( pNearestPosOut != 0 )
      *pNearestPosOut = vNearestPos;
    v10 = 1;
  }
  latticeSearch._vptr_CNavBreadthFirstSearch = off_47AE230;
  CUtlVectorBase<HexIndex_t,CUtlMemoryFixedGrowable<HexIndex_t,1024ul,int>>::RemoveAll(&latticeSearch.m_Hexes);
  CUtlMemory<HexIndex_t,int>::ConvertToExternalMemory(
    &latticeSearch.m_Hexes.m_Memory,
    &latticeSearch.m_Hexes.m_Memory.m_FixedMemory,
    1024,
    0,
    1,
    0x3FFFFFFFu);
  if ( (latticeSearch.m_Hexes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<HexIndex_t,int>::Purge(&latticeSearch.m_Hexes.m_Memory);
  if ( latticeSearch.m_funcOnSearchPos._M_manager != 0 )
    latticeSearch.m_funcOnSearchPos._M_manager(
      &latticeSearch.m_funcOnSearchPos,
      &latticeSearch.m_funcOnSearchPos,
      std::_Manager_operation::__destroy_functor);
  latticeSearch._vptr_CNavBreadthFirstSearch = off_47AE210;
  if ( latticeSearch.m_funcOnSearchArea._M_manager != 0 )
    latticeSearch.m_funcOnSearchArea._M_manager(
      &latticeSearch.m_funcOnSearchArea,
      &latticeSearch.m_funcOnSearchArea,
      std::_Manager_operation::__destroy_functor);
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&latticeSearch.m_SearchHash);
  if ( (latticeSearch.m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&latticeSearch.m_SearchHash.m_table);
  if ( funcWrapper._M_manager != 0 )
    funcWrapper._M_manager(&funcWrapper, &funcWrapper, std::_Manager_operation::__destroy_functor);
  return v10;
}


