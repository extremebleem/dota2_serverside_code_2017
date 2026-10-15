
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathOptimizerStraightener::OptimizePath  (line 27, @0x0000000002ee0580, libserver.so)  // inlines: GetBool, GetInt, GetSegment, Line, SetOrigin, SetToIdentity, Sphere, VectorAdd, VertexColor_t, operator+
// calls: SetIdentityMatrix, CPathData::RemoveSegments
void __fastcall CPathOptimizerStraightener::OptimizePath(
        CPathOptimizerStraightener *const this,
        CPath *const rPath,
        const CPathCostBase *const rCostFunc)
{
  CPath *v3; // r12
  int m_nSegmentCount; // eax
  unsigned int i; // r13d
  int v6; // eax
  CPathSegment *v7; // r15
  ISceneViewDebugOverlays *v8; // r14
  int v9; // r13d
  int v10; // r15d
  CPathSegment *v11; // r13
  float *v12; // r14
  ISceneViewDebugOverlays *v13; // r12
  Vector *p_vPos; // r15
  int v15; // r13d
  float v16; // xmm1_4
  CPathSegment *v17; // r14
  int v18; // ecx
  float *v19; // rdx
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm3_4
  void (__fastcall *v25)(ISceneViewDebugOverlays *, matrix3x4_t *, float *, char *, _QWORD, double); // rax
  int v26; // ebx
  __int64 v27; // rcx
  int v28; // eax
  float *p_x; // r15
  int v30; // ebx
  float v31; // xmm1_4
  CPathSegment *v32; // r14
  int v33; // ecx
  float *v34; // rdx
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm3_4
  void (__fastcall *v40)(ISceneViewDebugOverlays *, matrix3x4_t *, float *, char *, _QWORD, double); // rax
  int nOccluded; // [rsp+28h] [rbp-88h]
  float v45; // [rsp+2Ch] [rbp-84h]
  float v46; // [rsp+2Ch] [rbp-84h]
  char v47; // [rsp+30h] [rbp-80h] BYREF
  char v48; // [rsp+31h] [rbp-7Fh]
  char v49; // [rsp+32h] [rbp-7Eh]
  char v50; // [rsp+33h] [rbp-7Dh]
  float v51; // [rsp+40h] [rbp-70h] BYREF
  float v52; // [rsp+44h] [rbp-6Ch]
  float v53; // [rsp+48h] [rbp-68h]
  matrix3x4_t matrix; // [rsp+50h] [rbp-60h] BYREF

  v3 = rPath;
  m_nSegmentCount = rPath->m_nSegmentCount;
  if ( m_nSegmentCount > 2 )
  {
    if ( nav_path_optimizer_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      for ( i = 0; ; i = nOccluded )
      {
        v6 = (*(this->_vptr_CPathOptimizer + 1))(this, rPath, rCostFunc, i);
        nOccluded = v6;
        if ( v6 < rPath->m_nSegmentCount )
        {
          v7 = 0;
          if ( v6 >= 0 )
            v7 = &rPath->m_path[v6];
          v51 = -2.3686737e38;
          v8 = debugoverlay;
          SetIdentityMatrix(&matrix);
          matrix.m_flMatVal[0][3] = v7->vPos.x;
          matrix.m_flMatVal[1][3] = v7->vPos.y;
          matrix.m_flMatVal[2][3] = v7->vPos.z;
          (*(v8->_vptr_ISceneViewDebugOverlays + 18))(v8, &matrix, &v51, 1, 2.0, 1.0);
        }
        v9 = i + 1;
        if ( v9 < nOccluded - 1 )
        {
          v10 = v9;
          v11 = &rPath->m_path[v9];
          do
          {
            v12 = 0;
            if ( v10 >= 0 && rPath->m_nSegmentCount > v10 )
              v12 = v11;
            v51 = -2.3792763e38;
            ++v10;
            ++v11;
            v13 = debugoverlay;
            SetIdentityMatrix(&matrix);
            matrix.m_flMatVal[0][3] = v12[2];
            matrix.m_flMatVal[1][3] = v12[3];
            matrix.m_flMatVal[2][3] = v12[4];
            (*(v13->_vptr_ISceneViewDebugOverlays + 18))(v13, &matrix, &v51, 1, 1.0, 1.0);
          }
          while ( v10 != nOccluded - 1 );
        }
        m_nSegmentCount = rPath->m_nSegmentCount;
        if ( nOccluded >= m_nSegmentCount )
          break;
      }
      v3 = rPath;
      if ( nav_path_optimizer_debug.m_pParent->m_Value.m_nValue > 1 )
      {
        p_vPos = &rPath->m_path[1].vPos;
        v15 = 0;
        v16 = 0.0;
        v17 = &rPath->m_path[1];
        v18 = m_nSegmentCount - 1;
        while ( v15 < v18 )
        {
          v19 = 0;
          if ( v15 >= 0 && v15 < m_nSegmentCount )
            v19 = &v17[-1];
          if ( ++v15 >= 0 && v15 < m_nSegmentCount && v19 != 0 && v17 != 0 )
          {
            v45 = v16;
            v20 = p_vPos->z + 8.0;
            v21 = p_vPos->x + v16;
            v52 = p_vPos->y + v16;
            v22 = v19[3];
            v53 = v20;
            v51 = v21;
            v23 = v19[4] + 8.0;
            v24 = v16 + v19[2];
            matrix.m_flMatVal[0][1] = v22 + v16;
            matrix.m_flMatVal[0][2] = v23;
            matrix.m_flMatVal[0][0] = v24;
            v25 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
            v47 = 100;
            v48 = -1;
            v49 = -1;
            v50 = -1;
            v25(debugoverlay, &matrix, &v51, &v47, 0, 5.0);
            m_nSegmentCount = rPath->m_nSegmentCount;
            v16 = v45;
            v18 = m_nSegmentCount - 1;
          }
          p_vPos = (p_vPos + 88);
          ++v17;
        }
      }
    }
    v26 = 0;
    while ( v26 < m_nSegmentCount )
    {
      v27 = v26++;
      v28 = (*(this->_vptr_CPathOptimizer + 1))(this, v3, rCostFunc, v27);
      if ( v28 - 1 > v26 )
        CPathData::RemoveSegments(v3, v26, v28 - 2);
      m_nSegmentCount = v3->m_nSegmentCount;
    }
    if ( nav_path_optimizer_debug.m_pParent->m_Value.m_nValue > 1 )
    {
      p_x = &v3->m_path[1].vPos.x;
      v30 = 0;
      v31 = 0.0;
      v32 = &v3->m_path[1];
      v33 = m_nSegmentCount - 1;
      while ( v30 < v33 )
      {
        v34 = 0;
        if ( v30 >= 0 && v30 < m_nSegmentCount )
          v34 = &v32[-1];
        if ( ++v30 >= 0 && v30 < m_nSegmentCount && v34 != 0 && v32 != 0 )
        {
          v46 = v31;
          v35 = p_x[2] + 9.0;
          v36 = *p_x + v31;
          v52 = p_x[1] + v31;
          v37 = v34[3];
          v53 = v35;
          v51 = v36;
          v38 = v34[4] + 9.0;
          v39 = v31 + v34[2];
          matrix.m_flMatVal[0][1] = v37 + v31;
          matrix.m_flMatVal[0][2] = v38;
          matrix.m_flMatVal[0][0] = v39;
          v40 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
          v47 = -1;
          v48 = -1;
          v49 = -1;
          v50 = -1;
          v40(debugoverlay, &matrix, &v51, &v47, 0, 5.0);
          m_nSegmentCount = v3->m_nSegmentCount;
          v31 = v46;
          v33 = m_nSegmentCount - 1;
        }
        p_x += 22;
        ++v32;
      }
    }
  }
}


// CPathOptimizerNavmesh::FindNextOccludedNode  (line 94, @0x0000000002ec96f0, libserver.so)  // inlines: CNavTestRayParams, GetNavHull, GetSegment, NormalizedSafe, TestRayToNavMesh, VectorSubtract, _Function_base, _M_init_functor, function<TestRayToNavMesh(const Vector&, const Vector&, NavHull_t, CNavTraceResult*, CNavTestRayParams*, FuncNavAreaTransition_t*)::__lambda11, void>, operator-, ~_Function_base, ~function
// calls: VectorNormalize, operator new, CNavMesh::TestRayToMesh, __stack_chk_fail, _Unwind_Resume
// globals: std::_Function_handler<bool ()(CNavArea const&,CNavArea const&),TestRayToNavMesh(Vector const&,Vector const&,NavHull_t,CNavTraceResult *,CNavTestRayParams *,std
int __fastcall CPathOptimizerNavmesh::FindNextOccludedNode(
        CPathOptimizerNavmesh *const this,
        CPath *const rPath,
        const CPathCostBase *const rCostFunc,
        int nStartSeg)
{
  int result; // eax
  int v5; // r13d
  char *v7; // rsi
  char *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbx
  float v11; // xmm0_4
  const Vector *v12; // r14
  float v13; // xmm0_4
  _QWORD *v14; // rax
  float v15; // xmm3_4
  bool v16; // r14
  __int128 vStart; // [rsp+0h] [rbp-B0h]
  CNavTestRayParams rayTestParams; // [rsp+30h] [rbp-80h] BYREF
  FuncNavAreaTransition_t v19; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-38h]

  *(&vStart + 1) = rPath;
  v20 = __readfsqword(0x28u);
  if ( nStartSeg < 0 )
    return rPath->m_nSegmentCount;
  result = rPath->m_nSegmentCount;
  if ( nStartSeg < result )
  {
    v5 = nStartSeg + 1;
    v7 = rPath + 88 * nStartSeg;
    v8 = v7 + 8;
    if ( nStartSeg + 1 < result && v5 >= 0 )
    {
      v9 = *(&vStart + 1) + 88LL * v5 + 8;
      if ( *(*(&vStart + 1) + 88LL * v5 + 40) == 0 && *(*(&vStart + 1) + 88LL * v5 + 84) != 0 )
      {
        *&vStart = v7 + 16;
        v10 = *(&vStart + 1) + 88 * (v5 + 1LL) + 8;
        do
        {
          v11 = *(v9 + 12);
          rayTestParams.m_flMaxStepUp = 0.0;
          v12 = (v9 + 8);
          v13 = v11 - *(v8 + 3);
          rayTestParams.m_flBeneathLimit = v12->x - *(v8 + 2);
          rayTestParams.m_flAboveLimit = v13;
          VectorNormalize(&rayTestParams);
          rayTestParams.m_flBeneathLimit = -1.0;
          rayTestParams.m_flAboveLimit = -1.0;
          rayTestParams.m_flMaxStepUp = 20.0;
          rayTestParams.m_flMaxStepDown = 20.0;
          rayTestParams.m_bOnlyOptimizable = 1;
          rayTestParams.m_pPathCost = rCostFunc;
          v19._M_manager = 0;
          v14 = operator new(0x10u);
          v14[1] = 0;
          *v14 = &rayTestParams;
          v19._M_functor._M_unused._M_object = v14;
          v19._M_invoker = std::_Function_handler<bool ()(CNavArea const&,CNavArea const&),TestRayToNavMesh(Vector const&,Vector const&,NavHull_t,CNavTraceResult *,CNavTestRayParams *,std::function<bool ()(CNavArea const&,CNavArea const&)> *)::{lambda(CNavArea const&,CNavArea const&)#1}>::_M_invoke;
          v19._M_manager = std::_Function_base::_Base_manager<TestRayToNavMesh(Vector const&,Vector const&,NavHull_t,CNavTraceResult *,CNavTestRayParams *,std::function<bool ()(CNavArea const&,CNavArea const&)> *)::{lambda(CNavArea const&,CNavArea const&)#1}>::_M_manager;
          v16 = CNavMesh::TestRayToMesh(TheNavMesh, vStart, v12, vStart, 0, &v19, rayTestParams.m_flAboveLimit, v15);
          if ( v19._M_manager != 0 )
            v19._M_manager(&v19, &v19, std::_Manager_operation::__destroy_functor);
          if ( !v16 )
            break;
          ++v5;
          result = *(*(&vStart + 1) + 22536LL);
          if ( result <= v5 )
            return result;
          v9 = v10;
          if ( *(v10 + 32) != 0 )
            break;
          v10 += 88;
        }
        while ( *(v10 - 12) != 0 );
      }
      return v5;
    }
  }
  return result;
}


// CNavPathJumpProcessLandingZone::PostProcessJumps  (line 143, @0x0000000002ee4880, libserver.so)  // inlines: GetSegment
// calls: CNavPathJumpProcessLandingZone::PostProcessJump
void __fastcall CNavPathJumpProcessLandingZone::PostProcessJumps(
        CNavPathJumpProcessLandingZone *const this,
        CPath *const rPath,
        const CPathCostBase *const rPathCost)
{
  CPath *v6; // r12
  int v7; // ebx
  int v8; // ecx

  v6 = rPath;
  v7 = 0;
  if ( rPath->m_nSegmentCount > 0 )
  {
    do
    {
      if ( v6->m_path[0].type == CPathSegment::SegmentType::PATH_SEG_JUMP_DOWN )
      {
        v8 = v7++;
        CNavPathJumpProcessLandingZone::PostProcessJump(this, rPath, rPathCost, v8);
        if ( rPath->m_nSegmentCount <= v7 )
          return;
      }
      else if ( rPath->m_nSegmentCount <= ++v7 )
      {
        return;
      }
      v6 = (v6 + 88);
    }
    while ( v7 >= 0 );
  }
}


// CNavPathJumpProcessLandingZone::PostProcessJump  (line 162, @0x0000000002ee46e0, libserver.so)  // inlines: GetNavHull, GetSegment, operator=
// calls: CNavPathJumpProcessLandingZone::FindLandingBoxExit, CPathData::RemoveSegments, CNavMesh::GetNearestPointOnMeshWithHullClearance
// callers: CNavPathJumpProcessLandingZone::PostProcessJumps
// local variable allocation has failed, the output may be wrong!
void __fastcall CNavPathJumpProcessLandingZone::PostProcessJump(
        CNavPathJumpProcessLandingZone *const this,
        CPath *const rPath,
        const CPathCostBase *const rPathCost,
        int nStartSeg)
{
  int v7; // edx
  CPathSegment *v8; // r15
  int v9; // eax
  int v10; // edx
  uint32 m_hullCategory; // eax
  float m_flHullHeight; // xmm0_4
  NavHull_t v13; // [rsp+0h] [rbp-80h] OVERLAPPED BYREF
  int nExitSeg; // [rsp+Ch] [rbp-74h] BYREF
  Vector vExitPoint; // [rsp+10h] [rbp-70h] BYREF
  Vector vClosestExitPointFront; // [rsp+20h] [rbp-60h] BYREF
  Vector vClosestExitPointFrontOnNav; // [rsp+30h] [rbp-50h] BYREF
  uint32 v18; // [rsp+40h] [rbp-40h]
  float m_flHullRadius; // [rsp+44h] [rbp-3Ch]
  float v20; // [rsp+48h] [rbp-38h]

  if ( CNavPathJumpProcessLandingZone::FindLandingBoxExit(
         rPath,
         nStartSeg,
         this->m_flLandingZoneBuffer,
         this->m_flLandingZoneBuffer,
         &vExitPoint,
         &vClosestExitPointFront,
         &nExitSeg,
         &v13.m_flHullHeight + 3) != 0 )
  {
    v7 = nExitSeg;
    if ( nExitSeg >= 0 && nExitSeg < rPath->m_nSegmentCount )
    {
      v8 = &rPath->m_path[nExitSeg];
      if ( HIBYTE(v13.m_flHullHeight) != 0 )
      {
        rPath->m_path[nExitSeg].vPos = vExitPoint;
      }
      else
      {
        m_hullCategory = rPathCost->m_navHull.m_hullCategory;
        m_flHullHeight = rPathCost->m_navHull.m_flHullHeight;
        m_flHullRadius = rPathCost->m_navHull.m_flHullRadius;
        v18 = m_hullCategory;
        v20 = m_flHullHeight;
        if ( !CNavMesh::GetNearestPointOnMeshWithHullClearance(
                TheNavMesh,
                &vClosestExitPointFront,
                v13,
                &vClosestExitPointFrontOnNav,
                4) )
          return;
        v7 = nExitSeg;
        v8->vPos = vClosestExitPointFrontOnNav;
      }
      if ( nStartSeg + 1 < v7 )
        CPathData::RemoveSegments(rPath, nStartSeg + 1, v7 - 1);
    }
  }
  else
  {
    v9 = nStartSeg + 1;
    if ( nStartSeg + 1 >= 0 && v9 < rPath->m_nSegmentCount )
    {
      rPath->m_path[v9].vPos = vClosestExitPointFront;
      v10 = rPath->m_nSegmentCount - 1;
      if ( v9 < v10 )
        CPathData::RemoveSegments(rPath, nStartSeg + 2, v10);
    }
  }
}


// CNavPathJumpProcessLandingZone::FindLandingBoxExit  (line 212, @0x0000000002ee3a80, libserver.so)  // inlines: Dot, DotProduct, DrawPolyOutline, GetBool, GetInt, GetPrevArea, GetSegment, HorzArrow, Line, Min<float>, Sign, Sphere, VectorAdd, VectorMultiply, VectorSubtract, VertexColor_t, operator*, operator+, operator-, operator=
// calls: CNavPoly::GetEdgeNormalXY, ISceneViewDebugOverlays::Sphere
// callers: CNavPathJumpProcessLandingZone::PostProcessJump
__int64 __fastcall CNavPathJumpProcessLandingZone::FindLandingBoxExit(
        CPath *const rPath,
        int nSegStart,
        float flDepth,
        float flWidth,
        Vector *pExitPointOut,
        Vector *pClosestFrontExitPoint,
        int *pExitSegOut,
        bool *pExitedFrontOut)
{
  char *v12; // rdx
  __int64 v14; // rcx
  CNavArea *v15; // r10
  float z; // xmm11_4
  bool *v18; // r9
  float x; // xmm5_4
  float *v20; // rax
  float v21; // xmm2_4
  uint32 v22; // xmm0_4
  void (__fastcall *v23)(ISceneViewDebugOverlays *, float *, VertexColor_t *, vec_t *, __int64, float, double); // r10
  float v24; // xmm1_4
  float v25; // xmm6_4
  int v26; // eax
  __m128 v27; // xmm15
  CPathSegment *v28; // rax
  float v29; // xmm12_4
  float y; // xmm14_4
  __m128 v31; // xmm6
  float v32; // xmm1_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm4_4
  float v36; // xmm2_4
  void (__fastcall *v37)(ISceneViewDebugOverlays *, vec_t *, VertexColor_t *, char *, __int64, double); // rax
  void (__fastcall *v38)(ISceneViewDebugOverlays *, vec_t *, VertexColor_t *, char *, __int64, double); // rax
  void (__fastcall *v39)(ISceneViewDebugOverlays *, vec_t *, VertexColor_t *, char *, __int64, double); // rax
  int v40; // ebx
  int m_nSegmentCount; // ecx
  float v42; // r8d
  CPathSegment *v43; // rax
  float v44; // edi
  CPathSegment *v45; // rsi
  __m128i x_low; // xmm14
  float v47; // xmm13_4
  float v48; // xmm12_4
  float v49; // xmm9_4
  float v50; // xmm0_4
  __m128 v51; // xmm3
  float v52; // xmm4_4
  int v53; // xmm2_4
  bool v54; // sf
  vec_t v55; // xmm13_4
  int v56; // eax
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm9_4
  __m128 v60; // xmm0
  bool *v61; // [rsp+10h] [rbp-110h]
  float v62; // [rsp+20h] [rbp-100h]
  float v63; // [rsp+24h] [rbp-FCh]
  float v64; // [rsp+30h] [rbp-F0h]
  float v65; // [rsp+34h] [rbp-ECh]
  uint32 color; // [rsp+3Ch] [rbp-E4h]
  float v67; // [rsp+48h] [rbp-D8h]
  vec_t v68; // [rsp+4Ch] [rbp-D4h]
  float v69; // [rsp+50h] [rbp-D0h]
  float v70; // [rsp+54h] [rbp-CCh]
  int v71; // [rsp+58h] [rbp-C8h]
  float v72; // [rsp+60h] [rbp-C0h]
  float v73; // [rsp+60h] [rbp-C0h]
  unsigned __int32 v74; // [rsp+60h] [rbp-C0h]
  float vCur; // [rsp+64h] [rbp-BCh]
  float vCur_4; // [rsp+68h] [rbp-B8h]
  float v77; // [rsp+70h] [rbp-B0h]
  bool *v78; // [rsp+70h] [rbp-B0h]
  float v79; // [rsp+78h] [rbp-A8h]
  float v80; // [rsp+78h] [rbp-A8h]
  bool *v81; // [rsp+80h] [rbp-A0h]
  float v82; // [rsp+80h] [rbp-A0h]
  __int32 v83; // [rsp+80h] [rbp-A0h]
  const CNavArea *vStart; // [rsp+88h] [rbp-98h]
  float vStarta; // [rsp+88h] [rbp-98h]
  float pExitedFrontOutc; // [rsp+90h] [rbp-90h]
  float pExitedFrontOutb; // [rsp+90h] [rbp-90h]
  float *v91; // [rsp+A0h] [rbp-80h]
  float *v92; // [rsp+A0h] [rbp-80h]
  bool *v93; // [rsp+A8h] [rbp-78h]
  char v94; // [rsp+B0h] [rbp-70h] BYREF
  char v95; // [rsp+B1h] [rbp-6Fh]
  char v96; // [rsp+B2h] [rbp-6Eh]
  char v97; // [rsp+B3h] [rbp-6Dh]
  __int64 v98; // [rsp+C0h] [rbp-60h]
  Vector vJumpNormal; // [rsp+C8h] [rbp-58h] BYREF
  float v100; // [rsp+D4h] [rbp-4Ch]
  float v101; // [rsp+D8h] [rbp-48h]
  VertexColor_t vecColor; // [rsp+E0h] [rbp-40h] BYREF
  float v103; // [rsp+E4h] [rbp-3Ch]
  float v104; // [rsp+E8h] [rbp-38h]
  Vector EdgeNormalXY; // 0:kr00_12.12

  if ( nSegStart < 0 )
    return 0;
  if ( nSegStart >= rPath->m_nSegmentCount )
    return 0;
  v12 = rPath + 88 * nSegStart;
  if ( *(v12 + 10) != 1 )
    return 0;
  v14 = *(v12 + 23);
  v91 = (v12 + 8);
  if ( v14 < 0 )
    return 0;
  v15 = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[v14];
  if ( v15 == 0 )
    return 0;
  vStart = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[v14];
  EdgeNormalXY = CNavPoly::GetEdgeNormalXY(v15, v12[8]);
  z = EdgeNormalXY.z;
  vJumpNormal.x = EdgeNormalXY.z;
  v98 = *&EdgeNormalXY.x;
  v18 = pExitedFrontOut;
  x = EdgeNormalXY.x;
  v20 = v91;
  if ( nav_path_jump_process_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( INavDrawArea::ms_pInst != 0 )
    {
      (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
        INavDrawArea::ms_pInst,
        vStart,
        4291348680LL,
        1,
        &vec3_origin,
        5.0,
        0.0);
      v18 = pExitedFrontOut;
      v20 = v91;
      z = EdgeNormalXY.z;
      x = EdgeNormalXY.x;
    }
    v92 = v20;
    v81 = v18;
    pExitedFrontOutc = x;
    v21 = (EdgeNormalXY.y * 30.0) + v20[3];
    *&v22 = (30.0 * x) + v20[2];
    v104 = (z * 30.0) + v20[4];
    v103 = v21;
    vecColor.color = v22;
    v23 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 34);
    vJumpNormal.z = NAN;
    v23(debugoverlay, v20 + 2, &vecColor, &vJumpNormal.z, 1, 2.0, 5.0);
    v18 = v81;
    v20 = v92;
    x = pExitedFrontOutc;
  }
  v24 = v20[4];
  vStarta = v20[2];
  v25 = v20[3];
  v26 = nSegStart + 1;
  v82 = v24;
  pExitedFrontOutb = v25;
  if ( nSegStart + 1 < 0 || v26 >= rPath->m_nSegmentCount )
    return 0;
  v27 = 0x80000000;
  v28 = &rPath->m_path[v26];
  v29 = v28->vPos.x;
  y = v28->vPos.y;
  vCur = v28->vPos.z;
  v31 = 0;
  v32 = (y - pExitedFrontOutb) * x;
  v33 = z * (vCur - v82);
  v34 = (vCur - v82) * 0.0;
  v35 = ((x * (v29 - vStarta)) + (EdgeNormalXY.y * (y - pExitedFrontOutb))) + v33;
  v36 = (((v29 - vStarta) * -EdgeNormalXY.y) + v32) + v34;
  if ( nav_path_jump_process_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v63 = (((v29 - vStarta) * -EdgeNormalXY.y) + v32) + v34;
    v62 = ((x * (v29 - vStarta)) + (EdgeNormalXY.y * (y - pExitedFrontOutb))) + v33;
    v64 = x;
    v61 = v18;
    vJumpNormal.z = vStarta + (-EdgeNormalXY.y * flWidth);
    v65 = flDepth * x;
    v101 = vCur + (flWidth * 0.0);
    v100 = (flWidth * x) + pExitedFrontOutb;
    *&vecColor.color = (flDepth * x) + vJumpNormal.z;
    v72 = flWidth * x;
    color = vecColor.color;
    v69 = (EdgeNormalXY.y * flDepth) + v100;
    v103 = v69;
    v104 = (flDepth * z) + v101;
    v67 = v104;
    v37 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v97 = -1;
    v37(debugoverlay, &vJumpNormal.z, &vecColor, &v94, 1, 5.0);
    vJumpNormal.z = vStarta - (-EdgeNormalXY.y * flWidth);
    v100 = pExitedFrontOutb - v72;
    v103 = (EdgeNormalXY.y * flDepth) + (pExitedFrontOutb - v72);
    v70 = v103;
    v101 = vCur - (flWidth * 0.0);
    v104 = (flDepth * z) + v101;
    *&vecColor.color = v65 + vJumpNormal.z;
    v73 = v104;
    v68 = v65 + vJumpNormal.z;
    v38 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v97 = -1;
    v38(debugoverlay, &vJumpNormal.z, &vecColor, &v94, 1, 5.0);
    v103 = v69;
    vecColor.color = color;
    v104 = v67;
    vJumpNormal.z = v68;
    v100 = v70;
    v101 = v73;
    v39 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v97 = -1;
    v39(debugoverlay, &vJumpNormal.z, &vecColor, &v94, 1, 5.0);
    v18 = v61;
    v27 = 0x80000000;
    v35 = v62;
    v36 = v63;
    v31 = 0u;
    x = v64;
  }
  if ( v35 > flDepth || fabs(v36) > flWidth )
  {
    pExitPointOut->x = v29;
    pExitPointOut->y = y;
    pExitPointOut->z = vCur;
    pClosestFrontExitPoint->z = (v31.m128_f32[0] * v36) + ((z * flDepth) + v82);
    pClosestFrontExitPoint->x = (-EdgeNormalXY.y * v36) + ((flDepth * x) + vStarta);
    pClosestFrontExitPoint->y = (x * v36) + ((EdgeNormalXY.y * flDepth) + pExitedFrontOutb);
    *pExitSegOut = nSegStart;
    *v18 = 1;
    return 1;
  }
  v40 = nSegStart + 2;
  if ( v40 < 0 || (m_nSegmentCount = rPath->m_nSegmentCount, v40 >= m_nSegmentCount) )
  {
    v55 = vCur;
LABEL_28:
    *pExitSegOut = -1;
    pExitPointOut->x = v29;
    pExitPointOut->y = y;
    pExitPointOut->z = v55;
    pClosestFrontExitPoint->z = (v31.m128_f32[0] * v36) + ((z * flDepth) + vCur);
    pClosestFrontExitPoint->x = (-EdgeNormalXY.y * v36) + ((flDepth * x) + vStarta);
    pClosestFrontExitPoint->y = (x * v36) + ((EdgeNormalXY.y * flDepth) + pExitedFrontOutb);
    *v18 = 0;
    return 0;
  }
  vCur_4 = v29;
  v79 = y;
  v77 = vCur;
  v42 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F800000u));
  v43 = &rPath->m_path[v40];
  v44 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_xor_ps(v27, LODWORD(flWidth))));
  v45 = &rPath->m_path[v40 + 1];
  while ( 1 )
  {
    x_low = LODWORD(v43->vPos.x);
    v47 = v43->vPos.y;
    v48 = v43->vPos.z;
    v49 = v43->vPos.x - vCur_4;
    v50 = ((x * v49) + (EdgeNormalXY.y * (v47 - v79))) + (z * (v48 - v77));
    v51.m128_f32[0] = ((-EdgeNormalXY.y * v49) + (x * (v47 - v79))) + ((v48 - v77) * v31.m128_f32[0]);
    if ( v50 <= v31.m128_f32[0] )
    {
      if ( fabs(v51.m128_f32[0]) <= 0.00000011920929 )
        goto LABEL_23;
      v52 = 2.0;
      goto LABEL_33;
    }
    v52 = (flDepth - v35) / v50;
    if ( fabs(v51.m128_f32[0]) <= 0.00000011920929 )
      break;
LABEL_33:
    if ( v51.m128_f32[0] <= v31.m128_f32[0] )
      v57 = (v44 - v36) / v51.m128_f32[0];
    else
      v57 = (flWidth - v36) / v51.m128_f32[0];
    v53 = 1065353216;
    if ( v52 < 1.0 || v57 < 1.0 )
      goto LABEL_37;
LABEL_23:
    v54 = ++v40 < 0;
    v35 = ((x * (*x_low.m128i_i32 - vStarta)) + (EdgeNormalXY.y * (v47 - pExitedFrontOutb))) + (z * (v48 - v82));
    v36 = fabs(
            (((*x_low.m128i_i32 - vStarta) * -EdgeNormalXY.y) + ((v47 - pExitedFrontOutb) * x))
          + ((v48 - v82) * v31.m128_f32[0]));
    if ( v54 || v40 == m_nSegmentCount || (v43 = v45, ++v45, v43 == 0) )
    {
      *&v56 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
      y = v47;
      v55 = v48;
      v29 = *&v56;
      goto LABEL_28;
    }
    vCur_4 = *x_low.m128i_i32;
    v79 = v47;
    v77 = v48;
  }
  v53 = LODWORD(v42);
  if ( v52 >= v42 )
    goto LABEL_23;
  v57 = 2.0;
LABEL_37:
  v58 = fminf(v52, v57);
  *pExitSegOut = v40 - 1;
  v59 = (v49 * v58) + vCur_4;
  pExitPointOut->x = v59;
  pExitPointOut->y = ((v47 - v79) * v58) + v79;
  pExitPointOut->z = ((v48 - v77) * v58) + v77;
  if ( v57 <= v52 )
  {
    if ( nav_path_jump_process_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      *&vecColor.color = NAN;
      v74 = v31.m128_i32[0];
      v71 = v53;
      v78 = v18;
      v80 = x;
      v83 = v51.m128_i32[0];
      ISceneViewDebugOverlays::Sphere(debugoverlay, pExitPointOut, 5.0, &vecColor, 1, 5.0);
      v31 = v74;
      v53 = v71;
      v18 = v78;
      x = v80;
      v51.m128_i32[0] = v83;
    }
    v60 = _mm_cmple_ss(v31, v51);
    v60.m128_i32[0] = _mm_andnot_ps(v60, 0xBF800000).m128_u32[0] | v53 & v60.m128_i32[0];
    pClosestFrontExitPoint->z = ((v31.m128_f32[0] * flWidth) * v60.m128_f32[0]) + ((z * flDepth) + vCur);
    pClosestFrontExitPoint->x = ((-EdgeNormalXY.y * flWidth) * v60.m128_f32[0]) + ((flDepth * x) + vStarta);
    pClosestFrontExitPoint->y = ((x * flWidth) * v60.m128_f32[0]) + ((EdgeNormalXY.y * flDepth) + pExitedFrontOutb);
    *v18 = 0;
    return 1;
  }
  else
  {
    if ( nav_path_jump_process_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      v93 = v18;
      *&vecColor.color = NAN;
      ISceneViewDebugOverlays::Sphere(debugoverlay, pExitPointOut, 5.0, &vecColor, 1, 5.0);
      v18 = v93;
      v59 = pExitPointOut->x;
    }
    pClosestFrontExitPoint->x = v59;
    pClosestFrontExitPoint->y = pExitPointOut->y;
    pClosestFrontExitPoint->z = pExitPointOut->z;
    *v18 = 1;
    return 1;
  }
}


