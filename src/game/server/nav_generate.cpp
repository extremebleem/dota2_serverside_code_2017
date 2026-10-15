// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_generate.cpp:85
class CNavVtxEdgeLink {
	int m_edge;  // +0x0
	int m_edgeVtxIdx;  // +0x4

	// sizeof = 8
};

// src/game/server/nav_generate.cpp:94
class CNavVtx {
	bool m_bDeleted;  // +0x0

	float m_lenSq;  // +0x10

	CNavVtx();

	// sizeof = 48
};

// src/game/server/nav_generate.cpp:150
class JumpConnector {
	bool operator()(CNavArea *);

private:

	void TryToConnect(CNavArea *, const CNavConnectVector &, const CNavConnectVector &, NavDirType);
	void TryToConnect(CNavArea *, CNavArea *, const CNavConnectVector &, NavDirType);

	// sizeof = 1
};

// src/game/server/nav_generate.cpp:2545
class TestOverlapping {
private:

	TestOverlapping(const Vector &, const Vector &, const Vector &, const Vector &);
	float GetZ(const Vector &);
	bool OverlapsExistingArea();

	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CmpNavVtxs  (line 109, @0x0000000002ed7900, libserver.so)
int __fastcall CmpNavVtxs(CNavVtx *const *ppV0, CNavVtx *const *ppV1)
{
  float m_lenSq; // xmm1_4
  float v3; // xmm0_4
  __int64 v4; // rax

  m_lenSq = (*ppV0)->m_lenSq;
  v3 = (*ppV1)->m_lenSq;
  if ( v3 > m_lenSq )
    LODWORD(v4) = -1;
  else
    return m_lenSq > v3;
  return v4;
}


// JumpConnector::TryToConnect  (line 178, @0x0000000002f07a00, libserver.so)  // inlines: ComputeOrientedPortal, Count, NavDirOpposite, TryToConnect
// calls: CNavArea::IsConnectedOnEdge, CNavPoly::ComputeOrientedPortal, CNavOrientedPortal::GetCenter, CNavPoly::GetClosestPointOnPoly, TestJumpDown, IsValidJumpDownConnection, CNavArea::ConnectTo
// callers: CNavGenerator::StichAndRemoveJumpAreas
void __fastcall JumpConnector::TryToConnect(
        JumpConnector *const this,
        CNavArea *pJumpArea,
        const CNavConnectVector *const rSource,
        const CNavConnectVector *const rDest,
        NavDirType outgoingDir)
{
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  CNavArea *m_pArea; // rbx
  int v7; // r14d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  CNavArea *v11; // r15
  int *v12; // rax
  int v13; // edx
  __int64 v14; // rbx
  int v15; // r15d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  CNavArea *v19; // r14
  int *v20; // rax
  int v21; // edx
  __int64 v22; // rbx
  int v23; // r15d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  CNavArea *v27; // r14
  int v28; // r12d
  int *v29; // rax
  int v30; // edx
  __int64 v31; // rbx
  int v32; // r15d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  CNavArea *v36; // r13
  int **v38; // [rsp+10h] [rbp-E0h]
  __int64 v39; // [rsp+18h] [rbp-D8h]
  __int64 v40; // [rsp+20h] [rbp-D0h]
  int **v42; // [rsp+30h] [rbp-C0h]
  int sourceIt; // [rsp+38h] [rbp-B8h]
  int v44; // [rsp+3Ch] [rbp-B4h]
  int **v45; // [rsp+48h] [rbp-A8h]
  int v47; // [rsp+54h] [rbp-9Ch]
  __int32 nBackEdge; // [rsp+68h] [rbp-88h]
  Vector vFromPos; // [rsp+70h] [rbp-80h] BYREF
  Vector vToPos; // [rsp+80h] [rbp-70h] BYREF
  Vector vPos; // [rsp+90h] [rbp-60h] BYREF
  CNavOrientedPortal pPortalOut; // [rsp+A0h] [rbp-50h] BYREF
  Vector v55; // 0:kr34_12.12
  Vector v56; // 0:kr74_12.12
  Vector v57; // 0:krB4_12.12
  Vector ClosestPointOnPoly; // 0:krF4_12.12

  sourceIt = 0;
  nBackEdge = (outgoingDir + 2) % 4;
  v40 = 8LL * nBackEdge + 240;
  m_pData = rSource->m_pData;
  if ( rSource->m_pData == 0 )
    goto LABEL_17;
  while ( sourceIt < m_pData->m_Size )
  {
    while ( 1 )
    {
      m_pArea = m_pData->m_Elements[sourceIt].m_pArea;
      if ( CNavArea::IsConnectedOnEdge(m_pArea, pJumpArea, outgoingDir) )
      {
        if ( (m_pArea->m_AreaAttributes.m_Flags & 2) != 0 )
        {
          v38 = (m_pArea + v40);
          JumpConnector::TryToConnect(this, pJumpArea, &m_pArea->m_incomingConnect[nBackEdge], rDest, outgoingDir);
          v44 = 0;
          v39 = 8LL * nBackEdge + 272;
          v12 = *(&m_pArea->_vptr_CNavPoly + v40);
          if ( v12 != 0 )
          {
LABEL_21:
            v13 = *v12;
            goto LABEL_22;
          }
          while ( 1 )
          {
            v13 = 0;
LABEL_22:
            if ( v44 >= v13 )
              break;
            v14 = *&v12[4 * v44 + 2];
            if ( CNavArea::IsConnectedOnEdge(v14, pJumpArea, outgoingDir) )
            {
              if ( (*(v14 + 216) & 2) != 0 )
              {
                v42 = (v14 + v40);
                JumpConnector::TryToConnect(this, pJumpArea, (v14 + v39), rDest, outgoingDir);
                v47 = 0;
                v20 = *(v14 + v40);
                if ( v20 != 0 )
                {
LABEL_40:
                  v21 = *v20;
                  goto LABEL_41;
                }
                while ( 1 )
                {
                  v21 = 0;
LABEL_41:
                  if ( v47 >= v21 )
                    break;
                  v22 = *&v20[4 * v47 + 2];
                  if ( CNavArea::IsConnectedOnEdge(v22, pJumpArea, outgoingDir) )
                  {
                    if ( (*(v22 + 216) & 2) != 0 )
                    {
                      v28 = 0;
                      v45 = (v22 + v40);
                      JumpConnector::TryToConnect(this, pJumpArea, (v22 + v39), rDest, outgoingDir);
                      v29 = *(v22 + v40);
                      if ( v29 != 0 )
                      {
LABEL_59:
                        v30 = *v29;
                        goto LABEL_60;
                      }
                      while ( 1 )
                      {
                        v30 = 0;
LABEL_60:
                        if ( v28 >= v30 )
                          break;
                        v31 = *&v29[4 * v28 + 2];
                        if ( CNavArea::IsConnectedOnEdge(v31, pJumpArea, outgoingDir) )
                        {
                          if ( (*(v31 + 216) & 2) != 0 )
                          {
                            JumpConnector::TryToConnect(this, pJumpArea, (v31 + v39), rDest, outgoingDir);
                            JumpConnector::TryToConnect(this, pJumpArea, (v31 + v40), rDest, outgoingDir);
                          }
                          else
                          {
                            v32 = 0;
                            v33 = rDest->m_pData;
                            while ( 1 )
                            {
                              v34 = v33 != 0 ? v33->m_Size : 0;
                              if ( v32 >= v34 )
                                break;
                              v35 = v32;
                              v36 = v33->m_Elements[v35].m_pArea;
                              if ( (v36->m_AreaAttributes.m_Flags & 2) == 0 )
                              {
                                CNavPoly::ComputeOrientedPortal(
                                  v31,
                                  v33->m_Elements[v35].m_pArea,
                                  outgoingDir,
                                  nBackEdge,
                                  -1.0,
                                  &pPortalOut);
                                if ( pPortalOut.m_flWidth > 0.0 )
                                {
                                  vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                                  vFromPos = CNavPoly::GetClosestPointOnPoly(v31, &vPos);
                                  vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                                  ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(v36, &vPos);
                                  vToPos = ClosestPointOnPoly;
                                  if ( ((*(v31 + 217) & 0x10) == 0 || ClosestPointOnPoly.z <= (vFromPos.z + 18.0))
                                    && TestJumpDown(&vFromPos, &vToPos)
                                    && IsValidJumpDownConnection(v31, v36, outgoingDir, nBackEdge) )
                                  {
                                    CNavArea::ConnectTo(v31, v36, outgoingDir, nBackEdge, 1);
                                  }
                                }
                                v33 = rDest->m_pData;
                              }
                              ++v32;
                            }
                          }
                        }
                        ++v28;
                        v29 = *v45;
                        if ( *v45 != 0 )
                          goto LABEL_59;
                      }
                    }
                    else
                    {
                      v23 = 0;
                      v24 = rDest->m_pData;
                      while ( 1 )
                      {
                        v25 = v24 != 0 ? v24->m_Size : 0;
                        if ( v23 >= v25 )
                          break;
                        v26 = v23;
                        v27 = v24->m_Elements[v26].m_pArea;
                        if ( (v27->m_AreaAttributes.m_Flags & 2) == 0 )
                        {
                          CNavPoly::ComputeOrientedPortal(
                            v22,
                            v24->m_Elements[v26].m_pArea,
                            outgoingDir,
                            nBackEdge,
                            -1.0,
                            &pPortalOut);
                          if ( pPortalOut.m_flWidth > 0.0 )
                          {
                            vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                            vFromPos = CNavPoly::GetClosestPointOnPoly(v22, &vPos);
                            vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                            v57 = CNavPoly::GetClosestPointOnPoly(v27, &vPos);
                            vToPos = v57;
                            if ( ((*(v22 + 217) & 0x10) == 0 || v57.z <= (vFromPos.z + 18.0))
                              && TestJumpDown(&vFromPos, &vToPos)
                              && IsValidJumpDownConnection(v22, v27, outgoingDir, nBackEdge) )
                            {
                              CNavArea::ConnectTo(v22, v27, outgoingDir, nBackEdge, 1);
                            }
                          }
                          v24 = rDest->m_pData;
                        }
                        ++v23;
                      }
                    }
                  }
                  ++v47;
                  v20 = *v42;
                  if ( *v42 != 0 )
                    goto LABEL_40;
                }
              }
              else
              {
                v15 = 0;
                v16 = rDest->m_pData;
                while ( 1 )
                {
                  v17 = v16 != 0 ? v16->m_Size : 0;
                  if ( v15 >= v17 )
                    break;
                  v18 = v15;
                  v19 = v16->m_Elements[v18].m_pArea;
                  if ( (v19->m_AreaAttributes.m_Flags & 2) == 0 )
                  {
                    CNavPoly::ComputeOrientedPortal(
                      v14,
                      v16->m_Elements[v18].m_pArea,
                      outgoingDir,
                      nBackEdge,
                      -1.0,
                      &pPortalOut);
                    if ( pPortalOut.m_flWidth > 0.0 )
                    {
                      vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                      vFromPos = CNavPoly::GetClosestPointOnPoly(v14, &vPos);
                      vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                      v56 = CNavPoly::GetClosestPointOnPoly(v19, &vPos);
                      vToPos = v56;
                      if ( ((*(v14 + 217) & 0x10) == 0 || v56.z <= (vFromPos.z + 18.0))
                        && TestJumpDown(&vFromPos, &vToPos)
                        && IsValidJumpDownConnection(v14, v19, outgoingDir, nBackEdge) )
                      {
                        CNavArea::ConnectTo(v14, v19, outgoingDir, nBackEdge, 1);
                      }
                    }
                    v16 = rDest->m_pData;
                  }
                  ++v15;
                }
              }
            }
            ++v44;
            v12 = *v38;
            if ( *v38 != 0 )
              goto LABEL_21;
          }
        }
        else
        {
          v7 = 0;
          v8 = rDest->m_pData;
          while ( 1 )
          {
            v9 = v8 != 0 ? v8->m_Size : 0;
            if ( v7 >= v9 )
              break;
            v10 = v7;
            v11 = v8->m_Elements[v10].m_pArea;
            if ( (v11->m_AreaAttributes.m_Flags & 2) == 0 )
            {
              CNavPoly::ComputeOrientedPortal(
                m_pArea,
                v8->m_Elements[v10].m_pArea,
                outgoingDir,
                nBackEdge,
                -1.0,
                &pPortalOut);
              if ( pPortalOut.m_flWidth > 0.0 )
              {
                vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                vFromPos = CNavPoly::GetClosestPointOnPoly(m_pArea, &vPos);
                vPos = CNavOrientedPortal::GetCenter(&pPortalOut);
                v55 = CNavPoly::GetClosestPointOnPoly(v11, &vPos);
                vToPos = v55;
                if ( ((m_pArea->m_AreaAttributes.m_Flags & 0x1000) == 0 || v55.z <= (vFromPos.z + 18.0))
                  && TestJumpDown(&vFromPos, &vToPos)
                  && IsValidJumpDownConnection(m_pArea, v11, outgoingDir, nBackEdge) )
                {
                  CNavArea::ConnectTo(m_pArea, v11, outgoingDir, nBackEdge, 1);
                }
              }
              v8 = rDest->m_pData;
            }
            ++v7;
          }
        }
      }
      ++sourceIt;
      m_pData = rSource->m_pData;
      if ( rSource->m_pData != 0 )
        break;
LABEL_17:
      if ( sourceIt >= 0 )
        return;
    }
  }
}


// IsStairs  (line 260, @0x0000000002ecaa30, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, DistTo, EnableInteractsExclude, FastSqrt, GetFloat, GetTraceMaskSolid, IgnoreOneEntitySkipPlayersAndNPCs, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, UTIL_TraceHull, Vector, Vector2DLength, Vector2DSubtract, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, abs<float>, operator*, operator*=, operator+, operator-, operator=
// calls: acos, tan, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, SafeGetViewVectors, CGamePhysicsQueryInterface::TraceRay
// callers: IsStairs, CNavGenerator::TestAreaForStairs
StairTestType __fastcall IsStairs(const Vector *const vStart, const Vector *const vEnd, StairTestType stairTypeOut)
{
  double v6; // xmm0_8
  float v7; // xmm1_4
  float v8; // xmm0_4
  uint16 v9; // ax
  float x; // xmm1_4
  float y; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  const CViewVectors *ViewVectors; // rax
  float z; // xmm2_4
  float v16; // xmm8_4
  float v17; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm11_4
  vec_t v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float flLength; // [rsp+10h] [rbp-1B0h]
  float traceIncrement; // [rsp+30h] [rbp-190h]
  float v38; // [rsp+34h] [rbp-18Ch]
  float v39; // [rsp+3Ch] [rbp-184h]
  float v40; // [rsp+40h] [rbp-180h]
  float v41; // [rsp+44h] [rbp-17Ch]
  double v42; // [rsp+48h] [rbp-178h]
  float v43; // [rsp+50h] [rbp-170h]
  float v44; // [rsp+50h] [rbp-170h]
  float flPriorHeight; // [rsp+54h] [rbp-16Ch]
  float flPriorHeighta; // [rsp+54h] [rbp-16Ch]
  float t; // [rsp+58h] [rbp-168h]
  float ta; // [rsp+58h] [rbp-168h]
  float v49; // [rsp+5Ch] [rbp-164h]
  float v50; // [rsp+5Ch] [rbp-164h]
  CGameQueryAttributes filter; // [rsp+60h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-130h] BYREF
  CGameTrace_2 v53; // [rsp+E0h] [rbp-E0h] BYREF

  v6 = acos(nav_slope_limit.m_pParent->m_Value.m_fValue);
  v42 = tan(v6);
  v7 = vStart->y - vEnd->y;
  v8 = vStart->x - vEnd->x;
  memset(&v53.m_ShapeAttributes, 0, 31);
  v53.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  flLength = fsqrt((v8 * v8) + (v7 * v7));
  CGameTrace::Init(&v53);
  filter.m_nHierarchyId = 0;
  filter.m_nInteractsExclude = 0;
  filter.m_nInteractsAs = 0;
  filter.m_nCollisionGroup = 3;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 7;
  filter.m_nInteractsWith = CNavConfig::ms_TraceMaskSolid;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  v9 = HierarchyIDFromBaseEntity(0);
  x = vStart->x;
  filter.m_nCollisionGroup = 11;
  y = vStart->y;
  filter.m_nHierarchyId = v9;
  v12 = x - vEnd->x;
  v13 = y - vEnd->y;
  filter.m_nInteractsExclude = 786432;
  if ( fabs(v12) <= fabs(v13) )
  {
    v49 = 8.0;
    t = 2.5;
    flPriorHeight = -8.0;
    v43 = -2.5;
  }
  else
  {
    v49 = 2.5;
    t = 8.0;
    flPriorHeight = -2.5;
    v43 = -8.0;
  }
  ViewVectors = SafeGetViewVectors();
  z = vStart->z;
  v16 = ViewVectors->m_vDuckHullMax.z;
  v17 = z - vEnd->z;
  if ( v17 < 0.0 )
    v17 = -v17;
  if ( v17 <= 18.0 )
    return stairTypeOut;
  v19 = vStart->x;
  v20 = vStart->y;
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  v21 = v43;
  ray.m_flRadius = 0.0;
  ray.m_Delta.z = (z - v16) - (v16 + z);
  v22 = (v16 + z) + 0.5;
  ray.m_Delta.x = v19 - (v19 + 0.0);
  ray.m_Delta.y = v20 - (v20 + 0.0);
  ray.m_Extents.z = 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v44 = 0.5 * (t - v43);
  ray.m_Extents.x = v44;
  v41 = 0.5 * (v49 - flPriorHeight);
  ray.m_Extents.y = v41;
  v40 = 0.5 * (t + v21);
  ray.m_Start.x = (v19 + 0.0) + v40;
  v23 = 0.5 * (v49 + flPriorHeight);
  ray.m_IsRay = (((v44 * v44) + (v41 * v41)) + 0.25) < 0.000001;
  v39 = v23;
  ray.m_Start.y = (v20 + 0.0) + v23;
  ray.m_Start.z = v22;
  ray.m_StartOffset.x = -v40;
  v38 = -v23;
  ray.m_StartOffset.y = -v23;
  ray.m_StartOffset.z = -0.5;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &v53);
  v24 = 0.0;
  if ( !v53.startsolid )
  {
    v25 = 0.0;
    flPriorHeighta = v53.endpos.z;
    traceIncrement = 5.0 / flLength;
    while ( 1 )
    {
      v26 = vStart->x;
      v27 = vEnd->x;
      ta = v25;
      v28 = vStart->y;
      ray.m_Start.w = v24;
      v29 = vStart->z;
      ray.m_Delta.w = v24;
      ray.m_StartOffset.w = v24;
      ray.m_Extents.w = v24;
      ray.m_flRadius = v24;
      v50 = v24;
      ray.m_Extents.z = 0.5;
      ray.m_IsRay = (((v44 * v44) + (v41 * v41)) + 0.25) < 0.000001;
      v30 = ((v27 - v26) * v25) + v26;
      v31 = ((vEnd->y - v28) * v25) + v28;
      v32 = vEnd->z;
      ray.m_Delta.x = v30 - (v30 + v24);
      ray.m_Start.x = (v30 + v24) + v40;
      v33 = ((v32 - v29) * v25) + v29;
      ray.m_Delta.y = v31 - (v31 + v24);
      ray.m_Start.y = (v31 + v24) + v39;
      ray.m_StartOffset.x = -v40;
      ray.m_Extents.x = v44;
      ray.m_Extents.y = v41;
      ray.m_Delta.z = (v33 - v16) - (v16 + v33);
      ray.m_Start.z = (v16 + v33) + 0.5;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != v24;
      ray.m_StartOffset.y = v38;
      ray.m_StartOffset.z = -0.5;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &v53);
      if ( v53.startsolid )
        break;
      v24 = v50;
      if ( ta == v50 && fabs(v53.endpos.z - vStart->z) > 18.0 )
        break;
      if ( ta == 1.0 && fabs(v53.endpos.z - vEnd->z) > 18.0 || v53.plane.normal.z < 0.97000003 )
        break;
      v34 = v53.endpos.z - flPriorHeighta;
      if ( v50 > (v53.endpos.z - flPriorHeighta) )
        v34 = -v34;
      v35 = 5.0 * v42;
      if ( v34 < v35 || v34 > 18.0 )
      {
        if ( v34 > 18.0 )
          return StairTestType::STAIRS_NO;
      }
      else
      {
        stairTypeOut = StairTestType::STAIRS_YES;
      }
      v25 = ta + traceIncrement;
      if ( (ta + traceIncrement) > 1.0 )
        return stairTypeOut;
      flPriorHeighta = v53.endpos.z;
    }
  }
  return StairTestType::STAIRS_NO;
}


// IsStairs  (line 260, @0x0000000002ed7930, libserver.so)
// calls: IsStairs
StairTestType __fastcall IsStairs(const Vector *const vStart, const Vector *const vEnd, StairTestType stairTypeOut)
{
  if ( stairTypeOut != StairTestType::STAIRS_NO )
    return IsStairs(vStart, vEnd, stairTypeOut);
  else
    return StairTestType::STAIRS_NO;
}


// CNavGenerator::TestAreaForStairs  (line 380, @0x0000000002ed7950, libserver.so)  // inlines: AddAttributes, AddFlags, Dot, DotProduct, GetCorner, GetVert, IsStairs, RemoveAttributes, RemoveFlags, VectorAdd, VectorDivide, operator+, operator/, operator=
// calls: CNavPoly::ComputeNormal_Old, IsStairs
// callers: CNavGenerator::MarkStairAreas
bool __fastcall CNavGenerator::TestAreaForStairs(CNavGenerator *const this, CNavArea *const rArea)
{
  float m_flDiameterMin; // xmm1_4
  StairTestType v4; // eax
  float y; // xmm4_4
  float x; // xmm5_4
  vec_t v7; // xmm5_4
  vec_t v8; // xmm6_4
  StairTestType v9; // eax
  float v10; // xmm6_4
  float v11; // xmm4_4
  float z; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm9_4
  vec_t v15; // xmm8_4
  float v16; // xmm8_4
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm8_4
  float v25; // xmm13_4
  float v26; // xmm11_4
  float v27; // xmm15_4
  float v28; // xmm12_4
  float v29; // xmm10_4
  float v30; // xmm3_4
  float v31; // xmm7_4
  Vector vFirstNormal; // [rsp+10h] [rbp-60h] BYREF
  Vector vSecondNormal; // [rsp+20h] [rbp-50h] BYREF
  Vector vFrom; // [rsp+30h] [rbp-40h] BYREF
  Vector vTo; // [rsp+40h] [rbp-30h] BYREF

  m_flDiameterMin = rArea->m_flDiameterMin;
  rArea->m_AreaAttributes.m_Flags &= ~0x1000uLL;
  if ( CNavGeneratorBase::sm_flGenerationStepSize >= (m_flDiameterMin * 0.5) )
    goto LABEL_2;
  CNavPoly::ComputeNormal_Old(rArea, &vFirstNormal, 0);
  CNavPoly::ComputeNormal_Old(rArea, &vSecondNormal, 1);
  if ( (((vFirstNormal.x * vSecondNormal.x) + (vFirstNormal.y * vSecondNormal.y)) + (vFirstNormal.z * vSecondNormal.z)) < 0.94999999 )
    goto LABEL_2;
  y = rArea->m_vVerts[0].y;
  x = rArea->m_vVerts[0].x;
  vFrom.z = rArea->m_vVerts[0].z + 0.0;
  vFrom.y = y + 5.0;
  vFrom.x = x + 5.0;
  v7 = rArea->m_vVerts[1].y + 5.0;
  v8 = rArea->m_vVerts[1].x + -5.0;
  vTo.z = rArea->m_vVerts[1].z + 0.0;
  vTo.y = v7;
  vTo.x = v8;
  v9 = IsStairs(&vFrom, &vTo, StairTestType::STAIRS_MAYBE);
  v10 = rArea->m_vVerts[3].x + 5.0;
  v11 = rArea->m_vVerts[3].y + -5.0;
  z = rArea->m_vVerts[2].z;
  v13 = rArea->m_vVerts[3].z + 0.0;
  v14 = rArea->m_vVerts[2].x;
  v15 = rArea->m_vVerts[2].y + -5.0;
  vFrom.x = v10;
  vFrom.y = v11;
  vFrom.z = v13;
  vTo.y = v15;
  vTo.z = z + 0.0;
  vTo.x = v14 + -5.0;
  if ( v9 != StairTestType::STAIRS_NO )
  {
    v9 = IsStairs(&vFrom, &vTo, v9);
    v10 = rArea->m_vVerts[3].x + 5.0;
    v11 = rArea->m_vVerts[3].y - 5.0;
    v13 = rArea->m_vVerts[3].z + 0.0;
  }
  v16 = rArea->m_vVerts[0].y;
  vTo.x = v10;
  v17 = rArea->m_vVerts[0].z;
  vTo.y = v11;
  v18 = rArea->m_vVerts[0].x;
  vTo.z = v13;
  vFrom.y = v16 + 5.0;
  vFrom.z = v17 + 0.0;
  vFrom.x = v18 + 5.0;
  if ( v9 != StairTestType::STAIRS_NO )
    v9 = IsStairs(&vFrom, &vTo, v9);
  v19 = rArea->m_vVerts[1].x;
  v20 = rArea->m_vVerts[1].y;
  v21 = rArea->m_vVerts[1].z;
  v22 = rArea->m_vVerts[2].x;
  v23 = rArea->m_vVerts[2].y;
  v24 = rArea->m_vVerts[2].z;
  vFrom.x = v19 + -5.0;
  vFrom.y = v20 + 5.0;
  vFrom.z = v21 + 0.0;
  vTo.x = v22 + -5.0;
  vTo.y = v23 + -5.0;
  vTo.z = v24 + 0.0;
  if ( v9 != StairTestType::STAIRS_NO )
  {
    v9 = IsStairs(&vFrom, &vTo, v9);
    v19 = rArea->m_vVerts[1].x;
    v20 = rArea->m_vVerts[1].y;
    v21 = rArea->m_vVerts[1].z;
    v22 = rArea->m_vVerts[2].x;
    v23 = rArea->m_vVerts[2].y;
    v24 = rArea->m_vVerts[2].z;
  }
  v25 = rArea->m_vVerts[0].x;
  v26 = rArea->m_vVerts[0].y;
  v27 = rArea->m_vVerts[0].z;
  v28 = rArea->m_vVerts[3].y;
  v29 = rArea->m_vVerts[3].z;
  vFrom.x = ((v25 + v19) * 0.5) + 0.0;
  vFrom.y = ((v26 + v20) * 0.5) + 5.0;
  vFrom.z = ((v27 + v21) * 0.5) + 0.0;
  v30 = rArea->m_vVerts[3].x;
  vTo.x = ((v30 + v22) * 0.5) + 0.0;
  vTo.y = ((v28 + v23) * 0.5) - 5.0;
  vTo.z = ((v29 + v24) * 0.5) + 0.0;
  v31 = v27;
  if ( v9 != StairTestType::STAIRS_NO )
  {
    v9 = IsStairs(&vFrom, &vTo, v9);
    v22 = rArea->m_vVerts[2].x;
    v23 = rArea->m_vVerts[2].y;
    v24 = rArea->m_vVerts[2].z;
    v19 = rArea->m_vVerts[1].x;
    v20 = rArea->m_vVerts[1].y;
    v21 = rArea->m_vVerts[1].z;
    v30 = rArea->m_vVerts[3].x;
    v28 = rArea->m_vVerts[3].y;
    v29 = rArea->m_vVerts[3].z;
    v25 = rArea->m_vVerts[0].x;
    v26 = rArea->m_vVerts[0].y;
    v31 = rArea->m_vVerts[0].z;
  }
  vTo.x = ((v30 + v25) * 0.5) + 5.0;
  vFrom.x = ((v19 + v22) * 0.5) - 5.0;
  vFrom.y = ((v20 + v23) * 0.5) + 0.0;
  vFrom.z = ((v21 + v24) * 0.5) + 0.0;
  vTo.z = ((v29 + v31) * 0.5) + 0.0;
  vTo.y = ((v28 + v26) * 0.5) + 0.0;
  if ( v9 != StairTestType::STAIRS_NO && (v4 = IsStairs(&vFrom, &vTo, v9)) == StairTestType::STAIRS_YES )
    rArea->m_AreaAttributes.m_Flags |= 0x1000uLL;
  else
LABEL_2:
    LOBYTE(v4) = 0;
  return v4;
}


// ShowViewPortPanelToAll  (line 519, @0x0000000002f03c60, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CUserMessageVGUIMenu_Keys>::TypeHandler>, CEventPosterBase, CNetMessagePB, CUserMessagePB, CUserMessageVGUIMenu_t, FindGameEvent<CUserMessageVGUIMenu_t>, FindOrCreateGameEvent<CUserMessageVGUIMenu_t>, New, PostEvent<CUserMessageVGUIMenu_t>, add_keys, assign, length, set_has_name, set_has_show, set_has_value, set_name, set_show, set_value, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageVGUIMenu_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, KeyValues::GetFirstSubKey, CUserMessageVGUIMenu::CUserMessageVGUIMenu, strlen, std::string::assign(char const*,ulong), operator new, CUserMessageVGUIMenu_Keys::CUserMessageVGUIMenu_Keys, KeyValues::GetName, KeyValues::GetString, KeyValues::GetNextKey (19 total)
// callers: AnalysisProgress, CNavGenerator::UpdateGeneration
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent
void __fastcall ShowViewPortPanelToAll(const char *pName, bool bShow, KeyValues *pData)
{
  KeyValues *FirstSubKey; // r12
  size_t v7; // rax
  std::string **v8; // rbx
  __int64 v9; // rax
  const char *Name; // rax
  const char *v11; // r15
  size_t v12; // rax
  const char *String; // rax
  const char *v14; // r15
  size_t v15; // rax
  __int64 current_size; // rax
  IGameEventSystem *v17; // rbx
  void (__fastcall *v18)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r12
  __int64 v19; // [rsp+8h] [rbp-1D8h]
  unsigned int v20; // [rsp+14h] [rbp-1CCh]
  _QWORD v21[2]; // [rsp+28h] [rbp-1B8h] BYREF
  int v22; // [rsp+38h] [rbp-1A8h]
  std::string *v23; // [rsp+40h] [rbp-1A0h]
  google::protobuf::internal::RepeatedPtrFieldBase v24; // [rsp+48h] [rbp-198h] BYREF
  bool i; // [rsp+60h] [rbp-180h]
  unsigned int v26; // [rsp+68h] [rbp-178h]
  CRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v28; // [rsp+1A8h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  if ( pData != 0 )
    FirstSubKey = KeyValues::GetFirstSubKey(pData);
  else
    FirstSubKey = 0;
  CUserMessageVGUIMenu::CUserMessageVGUIMenu(v21);
  v26 = 0;
  v22 |= 1u;
  v21[0] = off_4073AF0;
  v7 = strlen(pName);
  std::string::assign(v23, pName, v7);
  v22 |= 2u;
  for ( i = bShow; FirstSubKey != 0; FirstSubKey = KeyValues::GetNextKey(FirstSubKey) )
  {
    current_size = v24.current_size_;
    if ( v24.current_size_ >= v24.allocated_size_ )
    {
      if ( v24.allocated_size_ == v24.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v24, v24.allocated_size_ + 1);
      v8 = operator new(0x28u);
      CUserMessageVGUIMenu_Keys::CUserMessageVGUIMenu_Keys(v8);
      v9 = v24.current_size_;
      ++v24.allocated_size_;
      ++v24.current_size_;
      v24.elements_[v9] = v8;
    }
    else
    {
      ++v24.current_size_;
      v8 = v24.elements_[current_size];
    }
    Name = KeyValues::GetName(FirstSubKey);
    *(v8 + 4) |= 1u;
    v11 = Name;
    v12 = strlen(Name);
    std::string::assign(v8[3], v11, v12);
    String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    *(v8 + 4) |= 2u;
    v14 = String;
    v15 = strlen(String);
    std::string::assign(v8[4], v14, v15);
  }
  v17 = g_pGameEventSystem;
  v19 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent;
  v20 = v26;
  v18 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent);
  v18(v17, v20, 0, &filter, v19, v21, 64);
  v21[0] = &off_4073970;
  CUserMessageVGUIMenu::~CUserMessageVGUIMenu(v21);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// AnalysisProgress  (line 545, @0x0000000002f03f30, libserver.so)
// calls: Plat_FloatTime, Msg, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetString, KeyValues::SetInt, ShowViewPortPanelToAll, KeyValues::deleteThis, KeyValues::operator delete, _Unwind_Resume
// callers: CNavGeneratorAAQuad::SampleWalkableSpace, CNavGenerator::UpdateGeneration
// strings: "total", "nav_progress", "%s %.0f%%\n"
// globals: lastMsgTime
void __fastcall AnalysisProgress(const char *msg, int ticks, int current, bool showPercent)
{
  __m128d v8; // xmm0
  float v9; // xmm2_4
  float v10; // xmm2_4
  KeyValues *v11; // rbx
  float flNow; // [rsp+Ch] [rbp-24h]

  v8.m128d_f64[0] = Plat_FloatTime();
  v9 = _mm_movedup_pd(v8).m128d_f64[0];
  if ( v9 > (lastMsgTime + 10.0) )
  {
    flNow = v9;
    if ( ticks != 0 && showPercent )
    {
      Msg("%s %.0f%%\n", msg, ((current * 100.0) / ticks));
      v10 = flNow;
    }
    else
    {
      Msg("%s\n", msg);
      v10 = flNow;
    }
    lastMsgTime = v10;
  }
  v11 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v11, "data");
  KeyValues::SetString(v11, "msg", msg);
  KeyValues::SetInt(v11, "total", ticks);
  KeyValues::SetInt(v11, "current", current);
  ShowViewPortPanelToAll("nav_progress", 1, v11);
  KeyValues::deleteThis(v11);
}


// CNavGenerator::CNavGenerator  (line 588, @0x0000000002ed7e80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Extent, Init
// calls: CNavGeneratorBase::CNavGeneratorBase, CNavGenerator::ResetNavMesh
// callers: NavMeshFactory
void __fastcall CNavGenerator::CNavGenerator(CNavGenerator *const this, CNavMesh *const rNavMesh)
{
  CNavGeneratorBase::CNavGeneratorBase(this, rNavMesh);
  this->m_navGenMarkup.m_Size = 0;
  this->m_simplifyGenerationExtent.lo.x = 3.4028235e38;
  this->m_simplifyGenerationExtent.lo.y = 3.4028235e38;
  this->m_simplifyGenerationExtent.lo.z = 3.4028235e38;
  this->_vptr_CNavGeneratorBase = off_47B0BF0;
  this->m_navGenMarkup.m_Memory.m_pMemory = 0;
  this->m_navGenMarkup.m_Memory.m_nAllocationCount = 0;
  this->m_navGenMarkup.m_Memory.m_nGrowSize = 0;
  this->m_simplifyGenerationExtent.hi.x = -3.4028235e38;
  this->m_simplifyGenerationExtent.hi.y = -3.4028235e38;
  this->m_simplifyGenerationExtent.hi.z = -3.4028235e38;
  this->m_pSpawnName = 0;
  CNavGenerator::ResetNavMesh(this);
}


// CNavGenerator::~CNavGenerator  (line 597, @0x0000000002ee68c0, libserver.so)  // inlines: Purge, RemoveAll, ~CNavGeneratorBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete [], CUtlVectorBase<NavGenDataMarkup_t, CUtlMemory<NavGenDataMarkup_t, int> >::RemoveAll, CUtlMemory<NavGenDataMarkup_t, int>::Purge, CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int>::Purge
// callers: CNavGenerator::OnNavMeshDestroy
void __fastcall CNavGenerator::~CNavGenerator(CNavGenerator *const this)
{
  char *m_pSpawnName; // rdi
  bool v3; // zf

  this->_vptr_CNavGeneratorBase = off_47B0BF0;
  m_pSpawnName = this->m_pSpawnName;
  if ( m_pSpawnName != 0 )
    operator delete[](m_pSpawnName);
  CUtlVectorBase<NavGenDataMarkup_t,CUtlMemory<NavGenDataMarkup_t,int>>::RemoveAll(&this->m_navGenMarkup);
  if ( (this->m_navGenMarkup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<NavGenDataMarkup_t,int>::Purge(&this->m_navGenMarkup.m_Memory);
    if ( (this->m_navGenMarkup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NavGenDataMarkup_t,int>::Purge(&this->m_navGenMarkup.m_Memory);
  }
  this->m_walkableSeeds.m_Size = 0;
  v3 = (this->m_walkableSeeds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CNavGeneratorBase = &off_47CE290;
  if ( v3 )
  {
    CUtlMemory<CNavGeneratorBase::WalkableSeedSpot,int>::Purge(&this->m_walkableSeeds.m_Memory);
    if ( (this->m_walkableSeeds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavGeneratorBase::WalkableSeedSpot,int>::Purge(&this->m_walkableSeeds.m_Memory);
  }
}


// CNavGenerator::OnNavMeshDestroy  (line 604, @0x0000000002ee6970, libserver.so)
// calls: CNavGenerator::~CNavGenerator, operator delete
void __fastcall CNavGenerator::OnNavMeshDestroy(CNavGenerator *const this)
{
  if ( this != 0 )
  {
    CNavGenerator::~CNavGenerator(this);
    operator delete(this);
  }
}


// CNavGenerator::ResetNavMesh  (line 611, @0x0000000002ec9610, libserver.so)  // inlines: ClearWalkableSeeds, RemoveAll
// calls: operator delete []
// callers: CNavGenerator::CNavGenerator
void __fastcall CNavGenerator::ResetNavMesh(CNavGenerator *const this)
{
  char *m_pSpawnName; // rdi

  this->m_currentNode = 0;
  this->m_walkableSeeds.m_Size = 0;
  m_pSpawnName = this->m_pSpawnName;
  if ( m_pSpawnName != 0 )
    operator delete[](m_pSpawnName);
  this->m_pSpawnName = 0;
}


// CNavGenerator::SampleWalkableSpace  (line 621, @0x0000000002ec69a0, libserver.so)
__int64 __fastcall CNavGenerator::SampleWalkableSpace(
        CNavGenerator *const this,
        double a2,
        float flStartTime,
        float flMaxTime)
{
  return 1;
}


// CNavGenerator::RemoveJumpAreas  (line 628, @0x0000000002ee9d70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Element, GetBool, GetInt, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CNavArea*, int>::Purge, CUtlMemory<CNavArea*, int>::Grow, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavGenerator::StichAndRemoveJumpAreas
void __fastcall CNavGenerator::RemoveJumpAreas(CNavGenerator *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  __int64 v2; // r12
  __int64 v3; // r13
  int v4; // ebx
  CNavArea *v5; // r15
  int m_Size; // edx
  CNavArea **v7; // rax
  __int64 v8; // r12
  int v9; // ebx
  CNavArea *v10; // r13
  INavEditor *m_pEditor; // rdi
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > unusedAreas; // [rsp+20h] [rbp-50h] BYREF

  if ( nav_generate_fixup_jump_areas.m_pParent->m_Value.m_nValue == 0 )
    return;
  m_rNavAreas = this->m_rNavAreas;
  unusedAreas.m_Size = 0;
  unusedAreas.m_Memory.m_pMemory = 0;
  unusedAreas.m_Memory.m_nAllocationCount = 0;
  unusedAreas.m_Memory.m_nGrowSize = 0;
  if ( m_rNavAreas->m_Size <= 0 )
    goto LABEL_15;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = m_rNavAreas->m_Memory.m_pMemory[v2];
    m_Size = v3;
    if ( (v5->m_AreaAttributes.m_Flags & 2) != 0 )
    {
      if ( unusedAreas.m_Memory.m_nAllocationCount == v3 )
      {
        CUtlMemory<CNavArea *,int>::Grow(&unusedAreas.m_Memory, 1);
        m_Size = unusedAreas.m_Size;
      }
      unusedAreas.m_Size = ++m_Size;
      v7 = &unusedAreas.m_Memory.m_pMemory[v3];
      if ( v7 != 0 )
        break;
      m_rNavAreas = this->m_rNavAreas;
    }
    ++v4;
    ++v2;
    if ( m_rNavAreas->m_Size <= v4 )
      goto LABEL_12;
LABEL_6:
    v3 = m_Size;
  }
  *v7 = v5;
  ++v4;
  ++v2;
  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size > v4 )
    goto LABEL_6;
LABEL_12:
  if ( m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = unusedAreas.m_Memory.m_pMemory[v8];
      (*(TheNavMesh->_vptr_CNavMesh + 25))(TheNavMesh, v10);
      (*(TheNavMesh->_vptr_CNavMesh + 5))(TheNavMesh, v10);
      ++v9;
      ++v8;
    }
    while ( unusedAreas.m_Size > v9 );
  }
LABEL_15:
  (*(this->m_rNavMesh->_vptr_CNavMesh + 27))(this->m_rNavMesh);
  m_pEditor = this->m_rNavMesh->m_pEditor;
  if ( m_pEditor != 0 )
    (*(m_pEditor->_vptr_INavEditor + 2))(m_pEditor, 0, 0);
  if ( (unusedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&unusedAreas.m_Memory);
    if ( (unusedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&unusedAreas.m_Memory);
  }
}


// CNavGenerator::Update  (line 665, @0x0000000002ec8e00, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: NDebugOverlay::Line
// callers: CNavGenerator::Update
bool __fastcall CNavGenerator::Update(CNavGenerator *const this)
{
  int m_Size; // eax
  float v3; // xmm1_4
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  CNavGeneratorBase::WalkableSeedSpot *m_pMemory; // rax
  __int64 v7; // rax
  float v9; // [rsp+Ch] [rbp-74h]
  Vector v10; // [rsp+10h] [rbp-70h] BYREF
  Vector target; // [rsp+20h] [rbp-60h] BYREF
  CNavGeneratorBase::WalkableSeedSpot spot; // [rsp+30h] [rbp-50h] BYREF

  m_Size = this->m_walkableSeeds.m_Size;
  if ( m_Size != 0 )
  {
    v3 = 50.0;
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      m_pMemory = this->m_walkableSeeds.m_Memory.m_pMemory;
      v9 = v3;
      *&spot.vPos.x = *&m_pMemory[v4 / 0x18].vPos.x;
      *&spot.vPos.z = *&m_pMemory[v4 / 0x18].vPos.z;
      v7 = *&m_pMemory[v4 / 0x18].vNormal.y;
      v4 += 24LL;
      *&spot.vNormal.y = v7;
      target.x = (v3 * spot.vNormal.x) + spot.vPos.x;
      target.z = (*(&v7 + 1) * v3) + spot.vPos.z;
      target.y = (*&v7 * v3) + spot.vPos.y;
      NDebugOverlay::Line(&spot.vPos, &target, 255, 0, 255, 1, 0.1);
      target.z = (spot.vNormal.z * v9) + spot.vPos.z;
      target.y = (spot.vNormal.y * v9) + spot.vPos.y;
      target.x = (spot.vNormal.x * v9) + spot.vPos.x;
      v10.y = spot.vPos.y + 0.0;
      v10.z = spot.vPos.z + 0.0;
      v10.x = spot.vPos.x + 25.0;
      NDebugOverlay::Line(&v10, &target, 255, 0, 255, 1, 0.1);
      target.z = (spot.vNormal.z * v9) + spot.vPos.z;
      target.y = (spot.vNormal.y * v9) + spot.vPos.y;
      target.x = (spot.vNormal.x * v9) + spot.vPos.x;
      v10.y = spot.vPos.y + 0.0;
      v10.z = spot.vPos.z + 0.0;
      v10.x = spot.vPos.x - 25.0;
      NDebugOverlay::Line(&v10, &target, 255, 0, 255, 1, 0.1);
      target.z = (spot.vNormal.z * v9) + spot.vPos.z;
      target.y = (spot.vNormal.y * v9) + spot.vPos.y;
      target.x = (spot.vNormal.x * v9) + spot.vPos.x;
      v10.z = spot.vPos.z + 0.0;
      v10.x = spot.vPos.x + 0.0;
      v10.y = spot.vPos.y + 25.0;
      NDebugOverlay::Line(&v10, &target, 255, 0, 255, 1, 0.1);
      target.z = (spot.vNormal.z * v9) + spot.vPos.z;
      target.y = (spot.vNormal.y * v9) + spot.vPos.y;
      target.x = (spot.vNormal.x * v9) + spot.vPos.x;
      v10.y = spot.vPos.y - 25.0;
      v10.x = spot.vPos.x + 0.0;
      v10.z = spot.vPos.z + 0.0;
      NDebugOverlay::Line(&v10, &target, 255, 0, 255, 1, 0.1);
      v3 = v9;
    }
    while ( v4 != v5 );
  }
  return 0;
}


// CNavGenerator::Update  (line 665, @0x0000000002f04af0, libserver.so)
// calls: CNavGenerator::Update, CNavGenerator::UpdateGeneration
bool __fastcall CNavGenerator::Update(CNavGenerator *const this)
{
  float v1; // xmm1_4
  float v2; // xmm2_4

  if ( this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_NONE )
    return CNavGenerator::Update(this);
  CNavGenerator::UpdateGeneration(this, COERCE_DOUBLE(1036831949), v1, v2);
  return 1;
}


// CNavGenerator::BeginGeneration  (line 693, @0x0000000002ef1140, libserver.so)  // inlines: AddToTail, BuildLadders, ClearSet, CopyConstruct<NavGenDataMarkup_t>, Element, GetFloat, GrowMemory, Next, RemoveAll, TypedEntityInstanceByClassIter_t, operator[]
// calls: CUtlVectorBase<NavGenDataMarkup_t, CUtlMemory<NavGenDataMarkup_t, int> >::RemoveAll, EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next, CMarkupVolumeTagged::HasTag, CMarkupVolume::GetOBBBounds, CNavMesh::DestroyNavigationMesh, GetNavObstructionMgr, CNavObstructionManager::InitConnectionBlockers, CNavMesh::DestroyLadders, CNavGenerator::AddWalkableSeedsFromMarkup, Msg, Plat_FloatTime (14 total)
// strings: "markup_volume_tagged", "WALKABLESEED", "bot_kick\n", "Generating Navigation Mesh...\n", "No valid walkable seed positions.  Cannot generate Navigation Mesh.\n"
// globals: lastMsgTime, nav_quicksave
void __fastcall CNavGenerator::BeginGeneration(CNavGenerator *const this, bool bIncremental)
{
  const CMarkupVolumeTagged *v3; // r14
  int m_Size; // r14d
  int v5; // edx
  NavGenDataMarkup_t *v6; // rax
  ConVar *m_pParent; // rax
  CNavMesh *v8; // rdi
  CNavObstructionManager *v9; // rax
  int v10; // r10d
  __m128d v11; // xmm0
  CNavMesh *m_rNavMesh; // rdi
  CNavObstructionManager *NavObstructionMgr; // rax
  TypedEntityInstanceByClassIter_t<CMarkupVolumeTagged> iter; // [rsp+20h] [rbp-B0h] BYREF
  NavGenDataMarkup_t navGenMarkup; // [rsp+50h] [rbp-80h] BYREF

  CUtlVectorBase<NavGenDataMarkup_t,CUtlMemory<NavGenDataMarkup_t,int>>::RemoveAll(&this->m_navGenMarkup);
  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    "markup_volume_tagged",
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  v3 = EntityInstanceByClassIter_t::Next(&iter);
  if ( v3 != 0 )
  {
    while ( 1 )
    {
      navGenMarkup.m_nFlags = 0;
      if ( CMarkupVolumeTagged::HasTag(v3, "WALKABLESEED") )
      {
        navGenMarkup.m_nFlags |= 1u;
LABEL_7:
        CMarkupVolume::GetOBBBounds(v3, &navGenMarkup.m_bbMin, &navGenMarkup.m_bbMax, &navGenMarkup.m_transform);
        m_Size = this->m_navGenMarkup.m_Size;
        v5 = m_Size;
        if ( m_Size == this->m_navGenMarkup.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<NavGenDataMarkup_t,int>::Grow(&this->m_navGenMarkup.m_Memory, 1);
          v5 = this->m_navGenMarkup.m_Size;
        }
        this->m_navGenMarkup.m_Size = v5 + 1;
        v6 = &this->m_navGenMarkup.m_Memory.m_pMemory[m_Size];
        if ( v6 == 0 )
          goto LABEL_4;
        *v6 = navGenMarkup;
        v3 = EntityInstanceByClassIter_t::Next(&iter);
        if ( v3 == 0 )
          break;
      }
      else
      {
        if ( navGenMarkup.m_nFlags != 0 )
          goto LABEL_7;
LABEL_4:
        v3 = EntityInstanceByClassIter_t::Next(&iter);
        if ( v3 == 0 )
          break;
      }
    }
  }
  m_pParent = nav_area_res.m_pParent;
  this->m_bIncrementalSelection = 0;
  CNavGeneratorBase::sm_flGenerationStepSize = m_pParent->m_Value.m_fValue;
  (*(*engine + 280LL))(engine, "bot_kick\n");
  if ( bIncremental )
  {
    ConVar::SetValue(&nav_quicksave, 1);
    m_rNavMesh = this->m_rNavMesh;
    this->m_generationState = CNavGenerator::GenerationStateType::SAMPLE_WALKABLE_SPACE;
    this->m_nSampleTick = 0;
    this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL;
    lastMsgTime = 0.0;
    CNavOrientedPortal::ms_flMinAllowedWidth = 1.0;
    CNavMesh::DestroyNavigationMesh(m_rNavMesh, 1);
    (*(this->_vptr_CNavGeneratorBase + 5))(this);
    NavObstructionMgr = GetNavObstructionMgr();
    CNavObstructionManager::InitConnectionBlockers(NavObstructionMgr);
  }
  else
  {
    lastMsgTime = 0.0;
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    v8 = this->m_rNavMesh;
    this->m_generationState = CNavGenerator::GenerationStateType::SAMPLE_WALKABLE_SPACE;
    this->m_nSampleTick = 0;
    this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_FULL;
    CNavOrientedPortal::ms_flMinAllowedWidth = 1.0;
    CNavMesh::DestroyNavigationMesh(v8, 0);
    (*(this->_vptr_CNavGeneratorBase + 5))(this);
    v9 = GetNavObstructionMgr();
    CNavObstructionManager::InitConnectionBlockers(v9);
    CNavMesh::DestroyLadders(this->m_rNavMesh);
    (*(this->_vptr_CNavGeneratorBase + 11))(this);
  }
  CNavGenerator::AddWalkableSeedsFromMarkup(this);
  v10 = this->m_walkableSeeds.m_Size;
  this->m_currentNode = 0;
  if ( v10 != 0 )
  {
    this->m_nWalkableSeedIdx = 0;
    Msg("Generating Navigation Mesh...\n");
    v11.m128d_f64[0] = Plat_FloatTime();
    this->m_flGenerationStartTime = _mm_movedup_pd(v11).m128d_f64[0];
  }
  else
  {
    this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_NONE;
    Msg("No valid walkable seed positions.  Cannot generate Navigation Mesh.\n");
  }
}


// CNavGenerator::UpdateGeneration  (line 790, @0x0000000002f041c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ClearWalkableSeeds, CopyConstruct<CNavArea*>, Element, GetBool, GetCenter, GetFloat, GetInt, GrowMemory, HideAnalysisProgress, Invalidate, IsElapsed, MakeNewMarker, RemoveAll, Set, SetAnalyzed, SetLoaded, Start, operator=<float>, operator[]
// calls: Plat_FloatTime, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, CountdownTimer::CountdownTimer, Msg, KeyValues::operator new, KeyValues::KeyValues, ShowViewPortPanelToAll, KeyValues::deleteThis, CNavMesh::SaveNavMesh, CNavMesh::GetFilename (26 total)
// callers: CNavGenerator::Update
// strings: "Generation complete!  %0.1f seconds elapsed.\n", "nav_progress", "Navigation map '%s' saved.\n", "Creating navigation areas from sampled data...\n", "Finding light intensity...", "-skipcustomnavmeshgeneration" (18 total)
// globals: `guard variable for'CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer, `guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitAreas, `guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas, jpt_2F04221, CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas, __dso_handle, CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>::~CUtlVector(), CNavGenerator::UpdateGeneration(float)::s_unlitAreas (10 total)
__int64 __fastcall CNavGenerator::UpdateGeneration(CNavGenerator *const this, double a2, float flMaxTime, float a4)
{
  double v5; // xmm0_8
  float v6; // xmm1_4
  float v7; // xmm2_4
  CNavGeneratorBase::GenerationModeType m_generationMode; // eax
  bool v9; // r13
  float v10; // xmm0_4
  KeyValues *v11; // r12
  bool v12; // zf
  bool v13; // al
  const CNavMesh *v14; // rdi
  const char *mapname; // rsi
  const char *Filename; // rax
  __int64 result; // rax
  CBasePlayer *ListenServerHost; // r13
  int i; // esi
  CNavArea *v20; // r14
  const CNavMesh *m_rNavMesh; // rdi
  vec_t z; // xmm1_4
  vec_t x; // xmm0_4
  __m128d v24; // xmm0
  float v25; // xmm0_4
  __int64 v26; // rax
  int m_nGenerationIndex; // eax
  CNavArea *v28; // rdi
  double v29; // xmm0_8
  float v30; // xmm1_4
  float v31; // xmm2_4
  const NavAreaVector *v32; // rdx
  unsigned int v33; // eax
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // r14
  CNavArea **v38; // rax
  __int64 v39; // r13
  CNavArea **v40; // r15
  int v41; // eax
  CNavArea **v42; // rax
  CNavArea **v43; // r15
  int m_Size; // eax
  const char *v45; // rax
  const char *v46; // rsi
  __int64 v47; // r13
  int v48; // r12d
  CNavArea *v49; // rax
  float flMaxTimea; // [rsp+4h] [rbp-5Ch]
  double flStartTime; // [rsp+8h] [rbp-58h]
  _BOOL4 flStartTimea; // [rsp+8h] [rbp-58h]
  unsigned int flHeight; // [rsp+1Ch] [rbp-44h] BYREF
  Vector vEyePos; // [rsp+20h] [rbp-40h] BYREF

  flMaxTimea = *&a2;
  v5 = Plat_FloatTime(a2, flMaxTime, a4);
  flStartTime = v5;
  if ( `guard variable for'CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer == 0
    && __cxa_guard_acquire(&`guard variable for'CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer) != 0 )
  {
    CountdownTimer::CountdownTimer(&CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer);
    __cxa_guard_release(&`guard variable for'CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer);
  }
  if ( `guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitAreas == 0
    && __cxa_guard_acquire(&`guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitAreas) != 0 )
  {
    CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size = 0;
    CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory.m_pMemory = 0;
    CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory.m_nAllocationCount = 0;
    CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitAreas);
    __cxa_atexit(
      CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>::~CUtlVector,
      &CNavGenerator::UpdateGeneration(float)::s_unlitAreas,
      &_dso_handle);
  }
  if ( `guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas == 0
    && __cxa_guard_acquire(&`guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas) != 0 )
  {
    CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Size = 0;
    CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Memory.m_pMemory = 0;
    CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Memory.m_nAllocationCount = 0;
    CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas);
    __cxa_atexit(
      CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>>::~CUtlVector,
      &CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas,
      &_dso_handle);
  }
  switch ( this->m_generationState )
  {
    case CNavGenerator::GenerationStateType::SAMPLE_WALKABLE_SPACE:
      result = (*(this->_vptr_CNavGeneratorBase + 8))(this, flStartTime, flMaxTimea);
      if ( result == 0 )
        return 1;
      this->m_generationState = CNavGenerator::GenerationStateType::CREATE_AREAS_FROM_SAMPLES;
      return result;
    case CNavGenerator::GenerationStateType::CREATE_AREAS_FROM_SAMPLES:
      Msg("Creating navigation areas from sampled data...\n");
      (*(this->_vptr_CNavGeneratorBase + 7))(this);
      this->m_generationState = CNavGenerator::GenerationStateType::PRE_ANALYSIS_STEP;
      this->m_nGenerationIndex = 0;
      return 1;
    case CNavGenerator::GenerationStateType::PRE_ANALYSIS_STEP:
      Msg("Starting analysis steps.\n");
      if ( this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL
        || (*(*engine + 160LL))(engine) != 0 )
      {
        goto LABEL_69;
      }
      this->m_generationState = CNavGenerator::GenerationStateType::FIND_LIGHT_INTENSITY;
      if ( CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer.m_timestamp.m_Value != -1.0 )
        CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer.m_timestamp.m_Value = -1.0;
      v33 = 1;
      CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size = 0;
      if ( CNavArea::ms_nMasterMarker != -1 )
        v33 = CNavArea::ms_nMasterMarker + 1;
      CNavArea::ms_nMasterMarker = v33;
      m_rNavAreas = this->m_rNavAreas;
      if ( m_rNavAreas->m_Size != 0 )
      {
        v35 = 0;
        v36 = 0;
        v37 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
        while ( 1 )
        {
          v43 = &m_rNavAreas->m_Memory.m_pMemory[v35 / 8];
          m_Size = v36;
          if ( v36 == CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CNavArea *,int>::Grow(&CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory, 1);
            m_Size = CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size;
          }
          CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size = m_Size + 1;
          v38 = &CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory.m_pMemory[v36];
          if ( v38 != 0 )
            *v38 = *v43;
          v39 = CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Size;
          v40 = &this->m_rNavAreas->m_Memory.m_pMemory[v35 / 8];
          v41 = CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Size;
          if ( CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Size == CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CNavArea *,int>::Grow(&CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Memory, 1);
            v41 = CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Size;
          }
          CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Size = v41 + 1;
          v42 = &CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Memory.m_pMemory[v39];
          if ( v42 != 0 )
            *v42 = *v40;
          v35 += 8LL;
          if ( v35 == v37 )
            break;
          m_rNavAreas = this->m_rNavAreas;
          v36 = CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size;
        }
      }
      goto LABEL_70;
    case CNavGenerator::GenerationStateType::FIND_LIGHT_INTENSITY:
      ListenServerHost = UTIL_GetListenServerHost();
      if ( CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size == 0 || ListenServerHost == 0 )
        goto LABEL_68;
      if ( CountdownTimer::Now(&CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer) < CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer.m_timestamp.m_Value )
        return 1;
      for ( i = CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size;
            CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size > 0;
            i = CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size )
      {
        *&vEyePos.x = *CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory.m_pMemory;
        CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(
          &CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas,
          &vEyePos);
        CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FastRemove(
          &CNavGenerator::UpdateGeneration(float)::s_unlitAreas,
          0);
      }
      if ( i == 0 )
        goto LABEL_68;
      if ( CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Size != 0 )
      {
        v20 = *CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas.m_Memory.m_pMemory;
        CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FastRemove(
          &CNavGenerator::UpdateGeneration(float)::s_unlitSeedAreas,
          0);
        m_rNavMesh = this->m_rNavMesh;
        z = v20->m_vCenter.z;
        x = v20->m_vCenter.x;
        vEyePos.y = v20->m_vCenter.y;
        vEyePos.z = z;
        vEyePos.x = x;
        if ( CNavMesh::GetGroundHeight(m_rNavMesh, &vEyePos, &flHeight, 0) )
        {
          v24 = _mm_cvtps_pd(flHeight);
          v24.m128d_f64[0] = v24.m128d_f64[0] + 35.5 - 18.0;
          vEyePos.z = _mm_movedup_pd(v24).m128d_f64[0];
        }
        else
        {
          vEyePos.z = vEyePos.z + 17.5;
        }
        CBaseEntity::SetAbsOrigin(ListenServerHost, &vEyePos);
        AnalysisProgress(
          "Finding light intensity...",
          100,
          100
        * (this->m_rNavMesh->m_NavAreas.m_Size - CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size)
        / this->m_rNavMesh->m_NavAreas.m_Size,
          1);
        CNavGenerator::UpdateGeneration(float)::s_movedPlayerToArea = v20->m_AreaId;
        v25 = CountdownTimer::Now(&CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer) + 0.1;
        if ( v25 != CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer.m_timestamp.m_Value )
          CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer.m_timestamp.m_Value = v25;
        if ( CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer.m_duration.m_Value != 0.1 )
          CNavGenerator::UpdateGeneration(float)::s_playerSettleTimer.m_duration.m_Value = 0.1;
      }
      else
      {
        Msg("Finding light intensity...DONE (%d unlit areas)\n", i);
        if ( CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size != 0 )
        {
          Warning("To see unlit areas:\n");
          if ( CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size > 0 )
          {
            v47 = 0;
            v48 = 0;
            do
            {
              ++v48;
              v49 = CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Memory.m_pMemory[v47++];
              Warning("nav_unmark; nav_mark %d; nav_warp_to_mark;\n", v49->m_AreaId);
            }
            while ( CNavGenerator::UpdateGeneration(float)::s_unlitAreas.m_Size > v48 );
          }
        }
        this->m_generationState = CNavGenerator::GenerationStateType::CUSTOM;
        this->m_nGenerationIndex = 0;
LABEL_68:
        Msg("Finding light intensity...DONE\n");
LABEL_69:
        this->m_generationState = CNavGenerator::GenerationStateType::CUSTOM;
LABEL_70:
        this->m_nGenerationIndex = 0;
      }
      return 1;
    case CNavGenerator::GenerationStateType::CUSTOM:
      v26 = CommandLine();
      if ( (*(*v26 + 64LL))(v26, "-skipcustomnavmeshgeneration") != 0 )
        goto LABEL_46;
      m_nGenerationIndex = this->m_nGenerationIndex;
      if ( m_nGenerationIndex == 0 )
      {
        (*(this->_vptr_CNavGeneratorBase + 9))(
          this,
          this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL);
        Msg("Start custom...\n ");
        m_nGenerationIndex = this->m_nGenerationIndex;
      }
      break;
    case CNavGenerator::GenerationStateType::SAVE_NAV_MESH:
      m_generationMode = this->m_generationMode;
      if ( m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_FULL
        || m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_ANALYSIS_ONLY )
      {
        this->m_rNavMesh->m_bIsAnalyzed = 1;
      }
      v9 = 0;
      v10 = Plat_FloatTime(v5, v6, v7) - this->m_flGenerationStartTime;
      Msg("Generation complete!  %0.1f seconds elapsed.\n", v10);
      if ( this->m_generationMode != CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
        v9 = nav_generate_no_restart.m_pParent->m_Value.m_nValue == 0;
      this->m_rNavMesh->m_bIsLoaded = 1;
      this->m_walkableSeeds.m_Size = 0;
      v11 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v11, "data");
      ShowViewPortPanelToAll("nav_progress", 0, v11);
      KeyValues::deleteThis(v11);
      v12 = !this->m_bIncrementalSelection;
      CNavGeneratorBase::sm_flGenerationStepSize = nav_area_res.m_pParent->m_Value.m_fValue;
      if ( !v12 )
      {
        CNavEditor::CommandNavToggleSelectionSet(this->m_rNavMesh->m_pEditor);
        this->m_bIncrementalSelection = 0;
      }
      this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_NONE;
      v13 = CNavMesh::SaveNavMesh(this->m_rNavMesh, gpGlobals->mapname);
      v14 = this->m_rNavMesh;
      mapname = gpGlobals->mapname;
      if ( v13 )
      {
        Filename = CNavMesh::GetFilename(v14, mapname);
        Msg("Navigation map '%s' saved.\n", Filename);
      }
      else
      {
        v45 = CNavMesh::GetFilename(v14, mapname);
        v46 = "(null)";
        if ( v45 != 0 )
          v46 = v45;
        Msg("ERROR: Cannot save navigation map '%s'.\n", v46);
      }
      if ( this->m_bQuitWhenFinished )
      {
        (*(*engine + 280LL))(engine, "quit\n");
        return 0;
      }
      else
      {
        flStartTimea = this->m_bQuitWhenFinished;
        if ( v9 )
          (*(*engine + 144LL))(engine, gpGlobals->mapname, 0);
        else
          (*(this->_vptr_CNavGeneratorBase + 5))(this);
        return flStartTimea;
      }
    default:
      return 0;
  }
  while ( 1 )
  {
    v32 = this->m_rNavAreas;
    if ( v32->m_Size <= m_nGenerationIndex )
      break;
    v12 = this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL;
    v28 = v32->m_Memory.m_pMemory[m_nGenerationIndex];
    this->m_nGenerationIndex = m_nGenerationIndex + 1;
    v29 = (*(v28->_vptr_CNavPoly + 28))(v28, v12);
    if ( Plat_FloatTime(v29, v30, v31) - flStartTime > flMaxTimea )
    {
      AnalysisProgress("Custom game-specific analysis...", this->m_rNavAreas->m_Size, this->m_nGenerationIndex, 1);
      return 1;
    }
    m_nGenerationIndex = this->m_nGenerationIndex;
  }
  Msg("Post custom...\n ");
  (*(this->_vptr_CNavGeneratorBase + 15))(this);
  (*(this->_vptr_CNavGeneratorBase + 10))(this);
  Msg("Custom game-specific analysis...DONE\n");
LABEL_46:
  this->m_generationState = CNavGenerator::GenerationStateType::SAVE_NAV_MESH;
  this->m_nGenerationIndex = 0;
  return 1;
}


// CNavGenerator::CreateNavAreasFromSamples  (line 1088, @0x0000000002ec69b0, libserver.so)
void __fastcall CNavGenerator::CreateNavAreasFromSamples(CNavGenerator *const this)
{
  ;
}


// CNavGenerator::BeginAnalysis  (line 1096, @0x0000000002ec6c60, libserver.so)
// calls: Plat_FloatTime
// globals: lastMsgTime
void __fastcall CNavGenerator::BeginAnalysis(CNavGenerator *const this, bool bQuitWhenFinished)
{
  __m128d v3; // xmm0

  this->m_generationState = CNavGenerator::GenerationStateType::PRE_ANALYSIS_STEP;
  this->m_nGenerationIndex = 0;
  this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_ANALYSIS_ONLY;
  this->m_bQuitWhenFinished = bQuitWhenFinished;
  lastMsgTime = 0.0;
  v3.m128d_f64[0] = Plat_FloatTime();
  this->m_flGenerationStartTime = _mm_movedup_pd(v3).m128d_f64[0];
}


// CNavGenerator::ConnectGeneratedAreas  (line 1136, @0x0000000002ec69c0, libserver.so)
void __fastcall CNavGenerator::ConnectGeneratedAreas(CNavGenerator *const this)
{
  ;
}


// CNavGenerator::PostCreateNavAreas  (line 1143, @0x0000000002ed8580, libserver.so)  // inlines: Encompass, End, Extent, GetExtent, GetMilliseconds64, GetSeconds, Init, PLAT_CPU_TIME, Plat_TickDiffMilliSec, Sample, Start, operator=
// calls: CNavMesh::AllocateGrid, Plat_GetCPUFrequency, LoggingSystem_IsChannelEnabled, CNavGenerator::MarkJumpAreas, CNavMesh::RebuildGrid, LoggingSystem_Log, CCycleCount::GetMilliseconds64, CCycleCount::GetMicroseconds64
// callers: CNavGeneratorAAQuad::CreateNavAreasFromSamples
// strings: "Took %0.2f seconds to PostCreateNavAreas", "ConnectGeneratedAreas()", "%s took %llu miliseconds\n", "MarkJumpAreas()", "MarkPlayerClipAreas()", "%s took %0.2f seconds\n" (7 total)
void __fastcall CNavGenerator::PostCreateNavAreas(CNavGenerator *const this)
{
  float v1; // xmm4_4
  unsigned __int64 v3; // rax
  __int64 v4; // r13
  const NavAreaVector *m_rNavAreas; // rdx
  __int64 v6; // r12
  int m_Size; // eax
  CNavArea **m_pMemory; // rdx
  __int64 v9; // rsi
  float v10; // xmm3_4
  CNavArea *v11; // rcx
  float x; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  const NavAreaVector *v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r15
  CNavArea *v19; // rsi
  uint64 v20; // rdx
  int (**vptr_CNavGeneratorBase)(...); // rax
  uint64 v22; // rbx
  __int64 CPUFrequency; // rax
  double v24; // xmm1_8
  double v25; // xmm0_8
  unsigned __int64 v26; // rax
  uint64 v27; // rbx
  __int64 v28; // rax
  double v29; // xmm1_8
  double v30; // xmm0_8
  uint64 v31; // rbx
  __int64 v32; // rax
  double v33; // xmm1_8
  double v34; // xmm0_8
  __int64 v35; // rax
  __int64 v36; // r13
  double v37; // xmm0_8
  double v38; // xmm1_8
  unsigned __int64 v39; // rax
  uint64 Milliseconds64; // rax
  unsigned __int64 v41; // rax
  uint64 v42; // rax
  unsigned __int64 v43; // rax
  uint64 v44; // rax
  double m_Int64_low; // xmm0_8
  __int64 v46; // rax
  double v47; // xmm1_8
  double v48; // xmm0_8
  __int64 v49; // rax
  double v50; // xmm1_8
  double v51; // xmm0_8
  __int64 v52; // rax
  double v53; // xmm1_8
  uint64 v54; // rax
  uint64 v55; // rax
  uint64 Microseconds64; // rax
  double v57; // [rsp+8h] [rbp-78h]
  double v58; // [rsp+8h] [rbp-78h]
  double v59; // [rsp+8h] [rbp-78h]
  float meshExtent; // [rsp+10h] [rbp-70h]
  float meshExtent_4; // [rsp+14h] [rbp-6Ch]
  float meshExtent_8; // [rsp+18h] [rbp-68h]
  float meshExtent_12; // [rsp+1Ch] [rbp-64h]
  float meshExtent_16; // [rsp+20h] [rbp-60h]
  float meshExtent_20; // [rsp+24h] [rbp-5Ch]
  CFastTimer functionTimer; // [rsp+30h] [rbp-50h] BYREF
  float z; // [rsp+38h] [rbp-48h]
  float v68; // [rsp+3Ch] [rbp-44h]
  float y; // [rsp+40h] [rbp-40h]
  float v70; // [rsp+44h] [rbp-3Ch]

  v3 = __rdtsc();
  v4 = HIDWORD(v3);
  m_rNavAreas = this->m_rNavAreas;
  v6 = v3;
  m_Size = m_rNavAreas->m_Size;
  if ( m_rNavAreas->m_Size == 0 )
  {
    CNavMesh::AllocateGrid(this->m_rNavMesh, 0.0, 0.0, 0.0, v1);
    return;
  }
  meshExtent_12 = -3.4028235e38;
  m_pMemory = m_rNavAreas->m_Memory.m_pMemory;
  v9 = 0;
  v10 = 3.4028235e38;
  meshExtent_16 = -3.4028235e38;
  meshExtent_20 = -3.4028235e38;
  meshExtent = 3.4028235e38;
  meshExtent_4 = 3.4028235e38;
  meshExtent_8 = 3.4028235e38;
  while ( 1 )
  {
    v11 = m_pMemory[v9];
    x = v11->m_Extent.lo.x;
    *&functionTimer.m_Duration.m_Int64 = x;
    HIDWORD(functionTimer.m_Duration.m_Int64) = LODWORD(v11->m_Extent.lo.y);
    z = v11->m_Extent.lo.z;
    v13 = v11->m_Extent.hi.x;
    v68 = v13;
    y = v11->m_Extent.hi.y;
    v70 = v11->m_Extent.hi.z;
    if ( v10 > x )
      meshExtent = x;
    if ( x > meshExtent_12 )
      meshExtent_12 = x;
    v14 = meshExtent_4;
    if ( meshExtent_4 > *(&functionTimer.m_Duration.m_Int64 + 1) )
    {
      meshExtent_4 = *(&functionTimer.m_Duration.m_Int64 + 1);
      v14 = *(&functionTimer.m_Duration.m_Int64 + 1);
    }
    if ( *(&functionTimer.m_Duration.m_Int64 + 1) > meshExtent_16 )
      meshExtent_16 = *(&functionTimer.m_Duration.m_Int64 + 1);
    v15 = meshExtent_8;
    if ( meshExtent_8 > z )
    {
      meshExtent_8 = z;
      v15 = z;
    }
    if ( z > meshExtent_20 )
      meshExtent_20 = z;
    if ( meshExtent > v13 )
      meshExtent = v13;
    if ( v13 > meshExtent_12 )
      meshExtent_12 = v13;
    if ( v14 > y )
      meshExtent_4 = y;
    if ( y > meshExtent_16 )
      meshExtent_16 = y;
    if ( v15 > v70 )
      meshExtent_8 = v70;
    if ( v70 > meshExtent_20 )
      meshExtent_20 = v70;
    if ( m_Size == ++v9 )
      break;
    v10 = meshExtent;
  }
  CNavMesh::AllocateGrid(this->m_rNavMesh, meshExtent_12, meshExtent_4, meshExtent_16, v1);
  v16 = this->m_rNavAreas;
  if ( v16->m_Size != 0 )
  {
    v17 = 0;
    v18 = 8LL * (v16->m_Size - 1) + 8;
    while ( 1 )
    {
      v19 = v16->m_Memory.m_pMemory[v17 / 8];
      v17 += 8LL;
      (*(this->m_rNavMesh->_vptr_CNavMesh + 28))(this->m_rNavMesh, v19);
      if ( v17 == v18 )
        break;
      v16 = this->m_rNavAreas;
    }
  }
  v20 = __rdtsc();
  vptr_CNavGeneratorBase = this->_vptr_CNavGeneratorBase;
  functionTimer.m_Duration.m_Int64 = v20;
  vptr_CNavGeneratorBase[13](this);
  v22 = __rdtsc() - functionTimer.m_Duration.m_Int64;
  functionTimer.m_Duration.m_Int64 = v22;
  CPUFrequency = Plat_GetCPUFrequency();
  if ( (v22 & 0x8000000000000000LL) != 0LL )
  {
    v24 = (v22 & 1 | (v22 >> 1)) + (v22 & 1 | (v22 >> 1));
    if ( CPUFrequency >= 0 )
      goto LABEL_35;
  }
  else
  {
    v24 = v22;
    if ( CPUFrequency >= 0 )
    {
LABEL_35:
      v25 = CPUFrequency;
      goto LABEL_36;
    }
  }
  v25 = (CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1));
LABEL_36:
  if ( v24 / v25 < 1.0 )
  {
    v39 = Plat_GetCPUFrequency();
    if ( -1000LL * (functionTimer.m_Duration.m_Int64 / v39) == 1000 * (functionTimer.m_Duration.m_Int64 % v39) / v39 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        Microseconds64 = CCycleCount::GetMicroseconds64(&functionTimer.m_Duration);
        LoggingSystem_Log(LOG_NAV, 1, "%s took %llu microseconds\n", "ConnectGeneratedAreas()", Microseconds64);
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      Milliseconds64 = CCycleCount::GetMilliseconds64(&functionTimer.m_Duration);
      LoggingSystem_Log(LOG_NAV, 1, "%s took %llu miliseconds\n", "ConnectGeneratedAreas()", Milliseconds64);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    if ( (functionTimer.m_Duration.m_Int64 & 0x8000000000000000LL) != 0LL )
      m_Int64_low = (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1))
                  + (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1));
    else
      m_Int64_low = SLODWORD(functionTimer.m_Duration.m_Int64);
    v57 = m_Int64_low;
    v46 = Plat_GetCPUFrequency();
    if ( v46 < 0 )
      v47 = (v46 & 1 | (v46 >> 1)) + (v46 & 1 | (v46 >> 1));
    else
      v47 = v46;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "ConnectGeneratedAreas()", v57 / v47);
  }
  v26 = __rdtsc();
  v27 = __rdtsc() - (v26 | (HIDWORD(v26) << 32));
  functionTimer.m_Duration.m_Int64 = v27;
  v28 = Plat_GetCPUFrequency();
  if ( (v27 & 0x8000000000000000LL) != 0LL )
  {
    v29 = (v27 & 1 | (v27 >> 1)) + (v27 & 1 | (v27 >> 1));
    if ( v28 >= 0 )
      goto LABEL_40;
  }
  else
  {
    v29 = v27;
    if ( v28 >= 0 )
    {
LABEL_40:
      v30 = v28;
      goto LABEL_41;
    }
  }
  v30 = (v28 & 1 | (v28 >> 1)) + (v28 & 1 | (v28 >> 1));
LABEL_41:
  if ( v29 / v30 < 1.0 )
  {
    v43 = Plat_GetCPUFrequency();
    if ( -1000LL * (functionTimer.m_Duration.m_Int64 / v43) == 1000 * (functionTimer.m_Duration.m_Int64 % v43) / v43 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v54 = CCycleCount::GetMicroseconds64(&functionTimer.m_Duration);
        LoggingSystem_Log(LOG_NAV, 1, "%s took %llu microseconds\n", "MarkPlayerClipAreas()", v54);
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v44 = CCycleCount::GetMilliseconds64(&functionTimer.m_Duration);
      LoggingSystem_Log(LOG_NAV, 1, "%s took %llu miliseconds\n", "MarkPlayerClipAreas()", v44);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    if ( (functionTimer.m_Duration.m_Int64 & 0x8000000000000000LL) != 0LL )
      v48 = (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1))
          + (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1));
    else
      v48 = SLODWORD(functionTimer.m_Duration.m_Int64);
    v58 = v48;
    v49 = Plat_GetCPUFrequency();
    if ( v49 < 0 )
      v50 = (v49 & 1 | (v49 >> 1)) + (v49 & 1 | (v49 >> 1));
    else
      v50 = v49;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "MarkPlayerClipAreas()", v58 / v50);
  }
  functionTimer.m_Duration.m_Int64 = __rdtsc();
  CNavGenerator::MarkJumpAreas(this);
  v31 = __rdtsc() - functionTimer.m_Duration.m_Int64;
  functionTimer.m_Duration.m_Int64 = v31;
  v32 = Plat_GetCPUFrequency();
  if ( (v31 & 0x8000000000000000LL) != 0LL )
  {
    v33 = (v31 & 1 | (v31 >> 1)) + (v31 & 1 | (v31 >> 1));
    if ( v32 >= 0 )
      goto LABEL_45;
LABEL_87:
    v34 = (v32 & 1 | (v32 >> 1)) + (v32 & 1 | (v32 >> 1));
    goto LABEL_46;
  }
  v33 = v31;
  if ( v32 < 0 )
    goto LABEL_87;
LABEL_45:
  v34 = v32;
LABEL_46:
  if ( v33 / v34 < 1.0 )
  {
    v41 = Plat_GetCPUFrequency();
    if ( -1000LL * (functionTimer.m_Duration.m_Int64 / v41) == 1000 * (functionTimer.m_Duration.m_Int64 % v41) / v41 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v55 = CCycleCount::GetMicroseconds64(&functionTimer.m_Duration);
        LoggingSystem_Log(LOG_NAV, 1, "%s took %llu microseconds\n", "MarkJumpAreas()", v55);
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v42 = CCycleCount::GetMilliseconds64(&functionTimer.m_Duration);
      LoggingSystem_Log(LOG_NAV, 1, "%s took %llu miliseconds\n", "MarkJumpAreas()", v42);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    if ( (functionTimer.m_Duration.m_Int64 & 0x8000000000000000LL) != 0LL )
      v51 = (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1))
          + (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1));
    else
      v51 = SLODWORD(functionTimer.m_Duration.m_Int64);
    v59 = v51;
    v52 = Plat_GetCPUFrequency();
    if ( v52 < 0 )
      v53 = (v52 & 1 | (v52 >> 1)) + (v52 & 1 | (v52 >> 1));
    else
      v53 = v52;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "MarkJumpAreas()", v59 / v53);
  }
  (*(this->_vptr_CNavGeneratorBase + 12))(this);
  CNavMesh::RebuildGrid(this->m_rNavMesh);
  if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    v35 = Plat_GetCPUFrequency();
    v36 = v6 | (v4 << 32);
    if ( v36 < 0 )
      v37 = (v36 & 1 | (v36 >> 1)) + (v36 & 1 | (v36 >> 1));
    else
      v37 = v36;
    if ( v35 < 0 )
      v38 = (v35 & 1 | (v35 >> 1)) + (v35 & 1 | (v35 >> 1));
    else
      v38 = v35;
    LoggingSystem_Log(LOG_NAV, 1, "Took %0.2f seconds to PostCreateNavAreas", v37 / v38);
  }
}


// CNavGenerator::CreateNavAreasFromRecastData  (line 1198, @0x0000000002ed7f20, libserver.so)
void __fastcall CNavGenerator::CreateNavAreasFromRecastData(CNavGenerator *const this)
{
  ;
}


// CNavGenerator::AddWalkableSeedsFromMarkup  (line 1205, @0x0000000002ee8a40, libserver.so)  // inlines: AddToTail, AddWalkableSeed, CopyConstruct<CNavGeneratorBase::WalkableSeedSpot>, Element, GrowMemory, RoundToUnits, operator=, operator[]
// calls: CNavMesh::SnapToGrid, CNavMesh::FindGroundForNode, CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int>::Grow
// callers: CNavGenerator::BeginGeneration
void __fastcall CNavGenerator::AddWalkableSeedsFromMarkup(CNavGenerator *const this)
{
  __int64 v2; // r12
  int i; // ebx
  NavGenDataMarkup_t *v4; // rax
  vec_t v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  vec_t v8; // xmm0_4
  CNavMesh *m_rNavMesh; // rdi
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 m_Size; // r14
  vec_t z; // xmm5_4
  vec_t x; // xmm4_4
  int v16; // eax
  vec_t y; // xmm3_4
  float v18; // xmm1_4
  int v19; // eax
  float v20; // xmm1_4
  vec_t v21; // xmm0_4
  CNavGeneratorBase::WalkableSeedSpot *v22; // rdx
  vec_t v23; // [rsp+8h] [rbp-58h]
  vec_t v24; // [rsp+Ch] [rbp-54h]
  vec_t v25; // [rsp+10h] [rbp-50h]
  vec_t v26; // [rsp+14h] [rbp-4Ch]
  float v27; // [rsp+18h] [rbp-48h]
  float v28; // [rsp+1Ch] [rbp-44h]
  Vector pos; // [rsp+20h] [rbp-40h] BYREF
  Vector normal; // [rsp+30h] [rbp-30h] BYREF

  v2 = 0;
  for ( i = 0; this->m_navGenMarkup.m_Size > i; v22->vNormal.z = v21 )
  {
    while ( 1 )
    {
      v4 = &this->m_navGenMarkup.m_Memory.m_pMemory[v2];
      if ( (v4->m_nFlags & 1) != 0 )
      {
        v5 = v4->m_transform.m_flMatVal[1][3];
        v6 = v4->m_transform.m_flMatVal[2][3];
        pos.x = v4->m_transform.m_flMatVal[0][3];
        pos.y = v5;
        pos.z = v6;
        pos.x = CNavMesh::SnapToGrid(TheNavMesh, v6, 0);
        v8 = CNavMesh::SnapToGrid(TheNavMesh, v7, 0);
        m_rNavMesh = this->m_rNavMesh;
        pos.y = v8;
        if ( CNavMesh::FindGroundForNode(m_rNavMesh, &pos, &normal) )
        {
          v10 = pos.x < 0.0
              ? -CNavGeneratorBase::sm_flGenerationStepSize * 0.5
              : 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
          v11 = ((pos.x + v10) / CNavGeneratorBase::sm_flGenerationStepSize)
              * CNavGeneratorBase::sm_flGenerationStepSize;
          v12 = pos.y < 0.0
              ? -CNavGeneratorBase::sm_flGenerationStepSize * 0.5
              : 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
          m_Size = this->m_walkableSeeds.m_Size;
          z = pos.z;
          x = normal.x;
          v16 = (pos.y + v12);
          y = normal.y;
          v18 = (v16 / CNavGeneratorBase::sm_flGenerationStepSize);
          v19 = this->m_walkableSeeds.m_Size;
          v20 = v18 * CNavGeneratorBase::sm_flGenerationStepSize;
          v21 = normal.z;
          if ( m_Size == this->m_walkableSeeds.m_Memory.m_nAllocationCount )
          {
            v23 = normal.z;
            v24 = normal.y;
            v25 = normal.x;
            v26 = pos.z;
            v27 = v20;
            v28 = v11;
            CUtlMemory<CNavGeneratorBase::WalkableSeedSpot,int>::Grow(&this->m_walkableSeeds.m_Memory, 1);
            v19 = this->m_walkableSeeds.m_Size;
            v21 = v23;
            y = v24;
            x = v25;
            z = v26;
            v20 = v27;
            v11 = v28;
          }
          this->m_walkableSeeds.m_Size = v19 + 1;
          v22 = &this->m_walkableSeeds.m_Memory.m_pMemory[m_Size];
          if ( v22 != 0 )
            break;
        }
      }
      ++i;
      ++v2;
      if ( this->m_navGenMarkup.m_Size <= i )
        return;
    }
    v22->vPos.x = v11;
    ++i;
    ++v2;
    v22->vPos.y = v20;
    v22->vPos.z = z;
    v22->vNormal.x = x;
    v22->vNormal.y = y;
  }
}


// CNavGenerator::AddWalkableSeedsForMarkup  (line 1228, @0x0000000002ee8e60, libserver.so)  // inlines: AddToTail, AddWalkableSeed, CopyConstruct<CNavGeneratorBase::WalkableSeedSpot>, Element, GetColumn, GrowMemory, RoundToUnits, operator=, operator[]
// calls: DoesPosOverlapNavMarkup, CNavMesh::SnapToGrid, CNavMesh::FindGroundForNode, CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int>::Grow
int __fastcall CNavGenerator::AddWalkableSeedsForMarkup(CNavGenerator *const this, const NavGenDataMarkup_t *pMarkup)
{
  __int64 v4; // r15
  int v5; // ebx
  NavGenDataMarkup_t *v6; // rax
  float v7; // xmm1_4
  vec_t v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  vec_t v11; // xmm0_4
  CNavMesh *m_rNavMesh; // rdi
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  __int64 m_Size; // r12
  vec_t z; // xmm5_4
  vec_t x; // xmm4_4
  int v20; // eax
  vec_t y; // xmm3_4
  float v22; // xmm1_4
  int v23; // eax
  float v24; // xmm1_4
  vec_t v25; // xmm0_4
  CNavGeneratorBase::WalkableSeedSpot *v26; // rdx
  vec_t v28; // [rsp+4h] [rbp-6Ch]
  vec_t v29; // [rsp+8h] [rbp-68h]
  vec_t v30; // [rsp+Ch] [rbp-64h]
  vec_t v31; // [rsp+10h] [rbp-60h]
  float v32; // [rsp+14h] [rbp-5Ch]
  float v33; // [rsp+18h] [rbp-58h]
  int nNumAdded; // [rsp+1Ch] [rbp-54h]
  Vector pos; // [rsp+20h] [rbp-50h] BYREF
  Vector normal; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_navGenMarkup.m_Size <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  nNumAdded = 0;
  do
  {
    while ( 1 )
    {
      v6 = &this->m_navGenMarkup.m_Memory.m_pMemory[v4];
      if ( (v6->m_nFlags & 1) != 0 )
      {
        v7 = v6->m_transform.m_flMatVal[1][3];
        v8 = v6->m_transform.m_flMatVal[0][3];
        pos.z = v6->m_transform.m_flMatVal[2][3];
        pos.y = v7;
        pos.x = v8;
        if ( DoesPosOverlapNavMarkup(pMarkup, &pos, v7) )
        {
          pos.x = CNavMesh::SnapToGrid(TheNavMesh, v9, 0);
          v11 = CNavMesh::SnapToGrid(TheNavMesh, v10, 0);
          m_rNavMesh = this->m_rNavMesh;
          pos.y = v11;
          if ( CNavMesh::FindGroundForNode(m_rNavMesh, &pos, &normal) && DoesPosOverlapNavMarkup(pMarkup, &pos, v13) )
            break;
        }
      }
      ++v5;
      ++v4;
      if ( this->m_navGenMarkup.m_Size <= v5 )
        return nNumAdded;
    }
    if ( pos.x < 0.0 )
      v14 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
    else
      v14 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
    v15 = ((v14 + pos.x) / CNavGeneratorBase::sm_flGenerationStepSize) * CNavGeneratorBase::sm_flGenerationStepSize;
    if ( pos.y < 0.0 )
      v16 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
    else
      v16 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
    m_Size = this->m_walkableSeeds.m_Size;
    z = pos.z;
    x = normal.x;
    v20 = (pos.y + v16);
    y = normal.y;
    v22 = (v20 / CNavGeneratorBase::sm_flGenerationStepSize);
    v23 = this->m_walkableSeeds.m_Size;
    v24 = v22 * CNavGeneratorBase::sm_flGenerationStepSize;
    v25 = normal.z;
    if ( m_Size == this->m_walkableSeeds.m_Memory.m_nAllocationCount )
    {
      v28 = normal.z;
      v29 = normal.y;
      v30 = normal.x;
      v31 = pos.z;
      v32 = v24;
      v33 = v15;
      CUtlMemory<CNavGeneratorBase::WalkableSeedSpot,int>::Grow(&this->m_walkableSeeds.m_Memory, 1);
      v23 = this->m_walkableSeeds.m_Size;
      v25 = v28;
      y = v29;
      x = v30;
      z = v31;
      v24 = v32;
      v15 = v33;
    }
    this->m_walkableSeeds.m_Size = v23 + 1;
    v26 = &this->m_walkableSeeds.m_Memory.m_pMemory[m_Size];
    if ( v26 != 0 )
    {
      v26->vPos.x = v15;
      v26->vPos.y = v24;
      v26->vPos.z = z;
      v26->vNormal.x = x;
      v26->vNormal.y = y;
      v26->vNormal.z = v25;
    }
    ++nNumAdded;
    ++v5;
    ++v4;
  }
  while ( this->m_navGenMarkup.m_Size > v5 );
  return nNumAdded;
}


// CNavGenerator::FindAreasInNavGenMarkup  (line 1258, @0x0000000002ee96f0, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, operator[]
// calls: CNavPoly::IsOverlappingOBB, CUtlMemory<CNavArea*, int>::Grow
void __fastcall CNavGenerator::FindAreasInNavGenMarkup(
        CNavGenerator *const this,
        CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *pAreas,
        NavGenDataMarkup_t *pMarkup)
{
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v7; // r15
  const CNavPoly *v8; // rbx
  __int64 m_Size; // rax
  int v10; // edx
  CNavArea **v11; // rax
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-58h]
  int v13; // [rsp+14h] [rbp-4Ch]
  __int64 v14; // [rsp+20h] [rbp-40h]

  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size != 0 )
  {
    v7 = 0;
    v14 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
    p_m_Memory = &pAreas->m_Memory;
    while ( 1 )
    {
      v8 = m_rNavAreas->m_Memory.m_pMemory[v7 / 8];
      if ( !CNavPoly::IsOverlappingOBB(v8, &pMarkup->m_bbMin, &pMarkup->m_bbMax, &pMarkup->m_transform) )
        goto LABEL_3;
      m_Size = pAreas->m_Size;
      v10 = pAreas->m_Size;
      if ( m_Size == pAreas->m_Memory.m_nAllocationCount )
      {
        v13 = pAreas->m_Size;
        CUtlMemory<CNavArea *,int>::Grow(p_m_Memory, 1);
        v10 = pAreas->m_Size;
        m_Size = v13;
      }
      pAreas->m_Size = v10 + 1;
      v11 = &pAreas->m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
      {
        v7 += 8LL;
        *v11 = v8;
        if ( v7 == v14 )
          return;
      }
      else
      {
LABEL_3:
        v7 += 8LL;
        if ( v7 == v14 )
          return;
      }
      m_rNavAreas = this->m_rNavAreas;
    }
  }
}


// CNavGenerator::BuildLadders  (line 1274, @0x0000000002ed7f30, libserver.so)
// calls: CNavMesh::DestroyLadders
void __fastcall CNavGenerator::BuildLadders(CNavGenerator *const this)
{
  CNavMesh::DestroyLadders(this->m_rNavMesh);
}


// CNavGenerator::AddWalkableSeeds  (line 1292, @0x0000000002ee8c60, libserver.so)  // inlines: AddToTail, AddWalkableSeed, CopyConstruct<CNavGeneratorBase::WalkableSeedSpot>, Element, GetPlayerSpawnName, GrowMemory, RoundToUnits, operator=, operator[]
// calls: CGameEntitySystem::FindEntityByClassname, CBaseEntity::GetAbsOrigin, CNavMesh::SnapToGrid, CNavMesh::FindGroundForNode, CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int>::Grow
// strings: "info_player_start"
void __fastcall CNavGenerator::AddWalkableSeeds(CNavGenerator *const this)
{
  char *m_pSpawnName; // rdx
  CBaseEntity *EntityByClassname; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4
  vec_t v6; // xmm0_4
  CNavMesh *m_rNavMesh; // rdi
  float v8; // xmm2_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  __int64 m_Size; // r12
  vec_t z; // xmm5_4
  vec_t x; // xmm4_4
  int v14; // eax
  vec_t y; // xmm3_4
  float v16; // xmm1_4
  int v17; // eax
  float v18; // xmm1_4
  vec_t v19; // xmm0_4
  CNavGeneratorBase::WalkableSeedSpot *v20; // rcx
  vec_t v21; // [rsp+8h] [rbp-48h]
  vec_t v22; // [rsp+Ch] [rbp-44h]
  vec_t v23; // [rsp+10h] [rbp-40h]
  vec_t v24; // [rsp+14h] [rbp-3Ch]
  float v25; // [rsp+18h] [rbp-38h]
  float v26; // [rsp+1Ch] [rbp-34h]
  Vector vPos; // [rsp+20h] [rbp-30h] BYREF
  Vector vNormal; // [rsp+30h] [rbp-20h] BYREF

  m_pSpawnName = "info_player_start";
  if ( this->m_pSpawnName != 0 )
    m_pSpawnName = this->m_pSpawnName;
  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, m_pSpawnName);
  if ( EntityByClassname != 0 )
  {
    vPos = *CBaseEntity::GetAbsOrigin(EntityByClassname);
    vPos.x = CNavMesh::SnapToGrid(TheNavMesh, v4, 0);
    v6 = CNavMesh::SnapToGrid(TheNavMesh, v5, 0);
    m_rNavMesh = this->m_rNavMesh;
    vPos.y = v6;
    if ( CNavMesh::FindGroundForNode(m_rNavMesh, &vPos, &vNormal) )
    {
      if ( vPos.x < 0.0 )
        v8 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
      else
        v8 = CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
      v9 = ((vPos.x + v8) / CNavGeneratorBase::sm_flGenerationStepSize) * CNavGeneratorBase::sm_flGenerationStepSize;
      if ( vPos.y < 0.0 )
        v10 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
      else
        v10 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
      m_Size = this->m_walkableSeeds.m_Size;
      z = vPos.z;
      x = vNormal.x;
      v14 = (vPos.y + v10);
      y = vNormal.y;
      v16 = (v14 / CNavGeneratorBase::sm_flGenerationStepSize);
      v17 = this->m_walkableSeeds.m_Size;
      v18 = v16 * CNavGeneratorBase::sm_flGenerationStepSize;
      v19 = vNormal.z;
      if ( m_Size == this->m_walkableSeeds.m_Memory.m_nAllocationCount )
      {
        v21 = vNormal.z;
        v22 = vNormal.y;
        v23 = vNormal.x;
        v24 = vPos.z;
        v25 = v18;
        v26 = v9;
        CUtlMemory<CNavGeneratorBase::WalkableSeedSpot,int>::Grow(&this->m_walkableSeeds.m_Memory, 1);
        v17 = this->m_walkableSeeds.m_Size;
        v19 = v21;
        y = v22;
        x = v23;
        z = v24;
        v18 = v25;
        v9 = v26;
      }
      this->m_walkableSeeds.m_Size = v17 + 1;
      v20 = &this->m_walkableSeeds.m_Memory.m_pMemory[m_Size];
      if ( v20 != 0 )
      {
        v20->vPos.x = v9;
        v20->vPos.y = v18;
        v20->vPos.z = z;
        v20->vNormal.x = x;
        v20->vNormal.y = y;
        v20->vNormal.z = v19;
      }
    }
  }
}


// CNavGenerator::MarkPlayerClipAreas  (line 1312, @0x0000000002ed7f40, libserver.so)
void __fastcall CNavGenerator::MarkPlayerClipAreas(CNavGenerator *const this)
{
  ;
}


// CNavGenerator::SplitAreasUnderOverhangs  (line 1338, @0x0000000002ed7f50, libserver.so)  // inlines: Count, GetExtent, NavDirOpposite, operator=, operator[]
// calls: CNavPoly::IsOverlappingPoly, CNavArea::IsConnectedOnEdge, CNavArea::SplitEditWrapper_Old, CNavArea::Disconnect, CNavArea::ConnectTo
// callers: CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGenerator::SplitAreasUnderOverhangs(CNavGenerator *const this)
{
  char v1; // al
  const NavAreaVector *m_rNavAreas; // rcx
  int m_Size; // edx
  int v4; // r15d
  CNavArea *v5; // rax
  CNavArea *v6; // r13
  float z; // xmm6_4
  int *m_pData; // rax
  int v9; // r14d
  CNavArea *v10; // rbx
  CNavArea *v11; // r15
  int v12; // r11d
  float x; // xmm6_4
  float y; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm8_4
  char v21; // r12
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  bool IsConnectedOnEdge; // al
  int v26; // r11d
  float v27; // xmm0_4
  bool v28; // al
  int v29; // r11d
  float v30; // xmm0_4
  bool v31; // si
  char v32; // r12
  CNavArea *v33; // rax
  char v34; // al
  int it; // [rsp+8h] [rbp-78h]
  int v37; // [rsp+Ch] [rbp-74h]
  float v38; // [rsp+10h] [rbp-70h]
  int v39; // [rsp+14h] [rbp-6Ch]
  bool bConnectionFromAbove; // [rsp+1Ah] [rbp-66h]
  bool bConnectionFromBelow; // [rsp+1Bh] [rbp-65h]
  float splitCoord; // [rsp+1Ch] [rbp-64h]
  float splitCoorda; // [rsp+1Ch] [rbp-64h]
  NavEdgeIndex nEdge[4]; // [rsp+20h] [rbp-60h]
  NavEdgeIndex nEdgea[4]; // [rsp+20h] [rbp-60h]
  NavEdgeIndex nEdgeb[4]; // [rsp+20h] [rbp-60h]
  int dir; // [rsp+24h] [rbp-5Ch]
  float pNewNonoverlappedArea; // [rsp+28h] [rbp-58h]
  bool pNewNonoverlappedAreaa; // [rsp+28h] [rbp-58h]
  CNavArea *pNewNonoverlappedAreab; // [rsp+28h] [rbp-58h]
  CNavArea *pAreaAbove; // [rsp+30h] [rbp-50h]
  float pNewAlpha; // [rsp+38h] [rbp-48h]
  NavEdgeIndex pNewAlphaa; // [rsp+38h] [rbp-48h]
  float pNewAlpha_4; // [rsp+3Ch] [rbp-44h]
  CNavArea *ppAreaAlphaOut; // [rsp+40h] [rbp-40h] BYREF
  CNavArea *pNewBeta; // [rsp+48h] [rbp-38h] BYREF

  v1 = 0;
  m_rNavAreas = this->m_rNavAreas;
  it = 0;
  m_Size = m_rNavAreas->m_Size;
  while ( 1 )
  {
    while ( it < m_Size )
    {
      if ( v1 != 0 )
        goto LABEL_50;
      v4 = 0;
      v5 = m_rNavAreas->m_Memory.m_pMemory[it];
      pAreaAbove = v5;
      v6 = v5;
      pNewAlpha_4 = v5->m_Extent.lo.z;
      z = v5->m_Extent.hi.z;
      m_pData = v5->m_connect[0].m_pData;
      v38 = z;
      if ( m_pData != 0 )
      {
LABEL_7:
        v9 = 0;
        if ( *m_pData <= 0 )
          goto LABEL_39;
        dir = v4;
        v39 = (v4 + 2) & 3;
        v37 = (((v4 + 2) & 3) + 2) & 3;
        while ( 1 )
        {
          v10 = *&m_pData[4 * v9 + 2];
          pNewNonoverlappedArea = v10->m_Extent.lo.z;
          pNewAlpha = v10->m_Extent.hi.z;
          if ( !CNavPoly::IsOverlappingPoly(pAreaAbove, v10)
            || pNewAlpha_4 <= (pNewAlpha + 55.0) && pNewNonoverlappedArea <= (v38 + 55.0) )
          {
LABEL_40:
            v32 = 0;
            goto LABEL_33;
          }
          if ( pNewAlpha_4 > pNewNonoverlappedArea )
          {
            v12 = v37;
            v11 = pAreaAbove;
          }
          else
          {
            v11 = v10;
            v12 = v39;
            v10 = pAreaAbove;
          }
          x = v10->m_Extent.lo.x;
          pNewNonoverlappedAreaa = v12 == 3;
          y = v10->m_Extent.lo.y;
          v15 = v10->m_Extent.hi.x;
          v16 = v10->m_Extent.hi.y;
          v17 = v11->m_Extent.lo.x;
          v18 = v11->m_Extent.hi.x;
          v19 = v11->m_Extent.hi.y;
          if ( (v12 & 0xFFFFFFFD) == 1 )
          {
            v20 = v15 - x;
            if ( v15 <= v18 )
            {
              v22 = v15 - v17;
              v21 = 0;
            }
            else
            {
              v17 = v11->m_Extent.hi.x;
              v21 = 0;
              v22 = v18 - x;
            }
          }
          else
          {
            v20 = v16 - y;
            if ( v16 <= v19 )
            {
              v17 = v11->m_Extent.lo.y;
              v21 = 1;
              v22 = v16 - v17;
            }
            else
            {
              v17 = v11->m_Extent.hi.y;
              v21 = 1;
              v22 = v19 - y;
            }
          }
          if ( CNavGeneratorBase::sm_flGenerationStepSize > v22 )
          {
            if ( CNavGeneratorBase::sm_flGenerationStepSize * 0.3 > v22
              || (CNavGeneratorBase::sm_flGenerationStepSize + CNavGeneratorBase::sm_flGenerationStepSize) >= v20 )
            {
              goto LABEL_40;
            }
            v23 = CNavGeneratorBase::sm_flGenerationStepSize - v22;
            if ( v12 == 0 || (v24 = 1.0, v12 == 3) )
              v24 = -1.0;
            v17 = v17 + (v23 * v24);
          }
          pNewAlphaa = (v12 + 2) & 3;
          splitCoord = v17;
          *nEdge = v12;
          IsConnectedOnEdge = CNavArea::IsConnectedOnEdge(v10, v11, pNewAlphaa);
          bConnectionFromBelow = 0;
          v26 = *nEdge;
          v27 = splitCoord;
          if ( IsConnectedOnEdge )
          {
            CNavArea::Disconnect(v10, v11);
            bConnectionFromBelow = 1;
            v27 = splitCoord;
            v26 = *nEdge;
          }
          splitCoorda = v27;
          *nEdgea = v26;
          v28 = CNavArea::IsConnectedOnEdge(v11, v10, v26);
          bConnectionFromAbove = 0;
          v29 = *nEdgea;
          v30 = splitCoorda;
          if ( v28 )
          {
            CNavArea::Disconnect(v11, v10);
            bConnectionFromAbove = 1;
            v30 = splitCoorda;
            v29 = *nEdgea;
          }
          v31 = v21;
          *nEdgeb = v29;
          ppAreaAlphaOut = 0;
          v32 = 0;
          pNewBeta = 0;
          if ( !CNavArea::SplitEditWrapper_Old(v10, v31, v30, &ppAreaAlphaOut, &pNewBeta) )
            goto LABEL_33;
          if ( *nEdgeb != 0 && !pNewNonoverlappedAreaa )
          {
            v33 = pNewBeta;
            if ( bConnectionFromAbove )
            {
LABEL_47:
              pNewNonoverlappedAreab = v33;
              CNavArea::ConnectTo(v11, v33, nEdgeb[0], -1, 1);
              v32 = 1;
              v33 = pNewNonoverlappedAreab;
              if ( !bConnectionFromBelow )
                goto LABEL_33;
              goto LABEL_48;
            }
          }
          else
          {
            v33 = ppAreaAlphaOut;
            if ( bConnectionFromAbove )
              goto LABEL_47;
          }
          v32 = 1;
          if ( bConnectionFromBelow )
LABEL_48:
            CNavArea::ConnectTo(v10, v33, pNewAlphaa, -1, 1);
LABEL_33:
          m_pData = v6->m_connect[0].m_pData;
          ++v9;
          if ( m_pData == 0 || v9 >= *m_pData )
          {
            v4 = dir;
            v34 = v32 ^ 1;
            goto LABEL_36;
          }
          if ( v32 != 0 )
            goto LABEL_3;
        }
      }
LABEL_39:
      while ( 1 )
      {
        v32 = 0;
        v34 = 1;
LABEL_36:
        ++v4;
        v6 = (v6 + 8);
        if ( v34 == 0 || v4 > 3 )
          break;
        m_pData = v6->m_connect[0].m_pData;
        if ( m_pData != 0 )
          goto LABEL_7;
      }
LABEL_3:
      ++it;
      m_rNavAreas = this->m_rNavAreas;
      v1 = v32;
      m_Size = m_rNavAreas->m_Size;
    }
    if ( v1 == 0 )
      break;
LABEL_50:
    it = 0;
    v1 = 0;
  }
}


// GetPolySizeX  (line 1501, @0x0000000002ed83b0, libserver.so)
float __fastcall GetPolySizeX(const CNavPoly *const rPoly)
{
  return fabs(rPoly->m_vVerts[0].x - rPoly->m_vVerts[2].x);
}


// GetPolySizeY  (line 1509, @0x0000000002ed83d0, libserver.so)
float __fastcall GetPolySizeY(const CNavPoly *const rPoly)
{
  return fabs(rPoly->m_vVerts[0].y - rPoly->m_vVerts[2].y);
}


// splitX  (line 1520, @0x0000000002ec6f40, libserver.so)  // inlines: GetPolySizeX, GetVert
// calls: CNavPoly::HasLowAspectRatio, CNavMesh::SnapToGrid, CNavArea::SplitEditWrapper_Old
// callers: CNavGeneratorAAQuad::SquareUpAreas
void __fastcall splitX(CNavArea *pArea)
{
  float v2; // xmm0_4
  CNavArea *pAreaAlpha; // [rsp+10h] [rbp-20h] BYREF
  CNavArea *pAreaBeta; // [rsp+18h] [rbp-18h] BYREF

  if ( !CNavPoly::HasLowAspectRatio(pArea) )
  {
    v2 = CNavMesh::SnapToGrid(TheNavMesh, pArea->m_vVerts[0].x, 0);
    if ( fabs(v2 - pArea->m_vVerts[0].x) >= 0.1
      && fabs(v2 - pArea->m_vVerts[2].x) >= 0.1
      && CNavArea::SplitEditWrapper_Old(pArea, 0, v2, &pAreaAlpha, &pAreaBeta) )
    {
      splitX(pAreaAlpha);
      splitX(pAreaBeta);
    }
  }
}


// splitY  (line 1555, @0x0000000002ec7000, libserver.so)  // inlines: GetPolySizeY, GetVert
// calls: CNavPoly::HasLowAspectRatio, CNavMesh::SnapToGrid, CNavArea::SplitEditWrapper_Old
// callers: CNavGeneratorAAQuad::SquareUpAreas
void __fastcall splitY(CNavArea *pArea)
{
  float v2; // xmm0_4
  CNavArea *pAreaAlpha; // [rsp+10h] [rbp-20h] BYREF
  CNavArea *pAreaBeta; // [rsp+18h] [rbp-18h] BYREF

  if ( !CNavPoly::HasLowAspectRatio(pArea) )
  {
    v2 = CNavMesh::SnapToGrid(TheNavMesh, pArea->m_vVerts[0].y, 0);
    if ( fabs(v2 - pArea->m_vVerts[0].y) >= 0.1
      && fabs(v2 - pArea->m_vVerts[2].y) >= 0.1
      && CNavArea::SplitEditWrapper_Old(pArea, 1, v2, &pAreaAlpha, &pAreaBeta) )
    {
      splitY(pAreaAlpha);
      splitY(pAreaBeta);
    }
  }
}


// CNavGenerator::MarkStairAreas  (line 1585, @0x0000000002ed83f0, libserver.so)
// calls: CNavGenerator::TestAreaForStairs
// callers: CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGenerator::MarkStairAreas(CNavGenerator *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CNavArea *v5; // rsi

  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size != 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
    while ( 1 )
    {
      v5 = m_rNavAreas->m_Memory.m_pMemory[v3 / 8];
      v3 += 8LL;
      CNavGenerator::TestAreaForStairs(this, v5);
      if ( v3 == v4 )
        break;
      m_rNavAreas = this->m_rNavAreas;
    }
  }
}


// CNavGenerator::MarkJumpAreas  (line 1596, @0x0000000002ed8450, libserver.so)  // inlines: AddAttributes, AddFlags, GetCenter, GetFloat, GetNormal_New
// calls: CNavMesh::GetSimpleGroundHeight
// callers: CNavGenerator::PostCreateNavAreas, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGenerator::MarkJumpAreas(CNavGenerator *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CNavArea *v5; // r12
  float z; // xmm0_4
  float m_fValue; // xmm1_4
  const CNavMesh *m_rNavMesh; // rdi
  vec_t v9; // xmm1_4
  vec_t x; // xmm3_4
  float flNormalZ; // [rsp+Ch] [rbp-64h]
  float flDummy; // [rsp+1Ch] [rbp-54h] BYREF
  Vector vTestPos; // [rsp+20h] [rbp-50h] BYREF
  Vector vGroundNormal; // [rsp+30h] [rbp-40h] BYREF

  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size != 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
    while ( 1 )
    {
      v5 = m_rNavAreas->m_Memory.m_pMemory[v3 / 8];
      z = v5->m_vNormal_New.z;
      m_fValue = nav_slope_limit.m_pParent->m_Value.m_fValue;
      if ( m_fValue <= z )
      {
        if ( (m_fValue + nav_slope_tolerance.m_pParent->m_Value.m_fValue) <= z
          || (m_rNavMesh = this->m_rNavMesh,
              flNormalZ = v5->m_vNormal_New.z,
              v9 = v5->m_vCenter.z + 35.5,
              x = v5->m_vCenter.x,
              vTestPos.y = v5->m_vCenter.y,
              vTestPos.x = x,
              vTestPos.z = v9,
              !CNavMesh::GetSimpleGroundHeight(m_rNavMesh, &vTestPos, &flDummy, &vGroundNormal))
          || fabs(vGroundNormal.z - flNormalZ) <= nav_slope_tolerance.m_pParent->m_Value.m_fValue )
        {
          v3 += 8LL;
          if ( v3 == v4 )
            return;
          goto LABEL_5;
        }
        v5->m_AreaAttributes.m_Flags |= 0x2002uLL;
      }
      else
      {
        v5->m_AreaAttributes.m_Flags |= 0x2002uLL;
      }
      v3 += 8LL;
      if ( v3 == v4 )
        return;
LABEL_5:
      m_rNavAreas = this->m_rNavAreas;
    }
  }
}


// CNavGenerator::StichAndRemoveJumpAreas  (line 1631, @0x0000000002ee9f50, libserver.so)  // inlines: ComputeOrientedPortal, Count, ForAllAreas<JumpConnector>, NavDirOpposite, TryToConnect, operator()
// calls: JumpConnector::TryToConnect, CNavArea::IsConnectedOnEdge, CNavPoly::ComputeOrientedPortal, CNavOrientedPortal::GetCenter, CNavPoly::GetClosestPointOnPoly, TestJumpDown, CNavGenerator::RemoveJumpAreas, IsValidJumpDownConnection, CNavArea::ConnectTo
// callers: CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGenerator::StichAndRemoveJumpAreas(CNavGenerator *const this)
{
  int m_Size; // eax
  int v2; // r12d
  NavDirType v3; // r13d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  CNavArea *m_pArea; // rbx
  int v6; // r15d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rdx
  int v8; // eax
  CNavArea *v9; // r12
  bool v10; // zf
  __int64 v12; // [rsp+10h] [rbp-F0h]
  CNavMesh *m_rNavMesh; // [rsp+18h] [rbp-E8h]
  unsigned __int64 v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+2Ch] [rbp-D4h]
  int v16; // [rsp+48h] [rbp-B8h]
  unsigned __int8 nBackEdge; // [rsp+4Ch] [rbp-B4h]
  CNavConnectVector *rSource; // [rsp+50h] [rbp-B0h]
  CNavArea *pJumpArea; // [rsp+58h] [rbp-A8h]
  CNavConnectVector *rDest; // [rsp+68h] [rbp-98h]
  JumpConnector connector; // [rsp+7Fh] [rbp-81h] BYREF
  Vector vFromPos; // [rsp+80h] [rbp-80h] BYREF
  Vector vToPos; // [rsp+90h] [rbp-70h] BYREF
  Vector vPos; // [rsp+A0h] [rbp-60h] BYREF
  CNavOrientedPortal v25[2]; // [rsp+B0h] [rbp-50h] BYREF
  Vector ClosestPointOnPoly; // 0:kr34_12.12

  m_rNavMesh = this->m_rNavMesh;
  m_Size = m_rNavMesh->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v14 = 0;
    v12 = 8LL * (m_Size - 1) + 8;
    while ( 1 )
    {
      pJumpArea = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v14 / 8];
      if ( (pJumpArea->m_AreaAttributes.m_Flags & 2) != 0 )
        break;
LABEL_25:
      v14 += 8LL;
      if ( v14 == v12 )
        goto LABEL_26;
    }
    v15 = 2;
    rSource = pJumpArea->m_incomingConnect;
    while ( 1 )
    {
      v2 = 0;
      v3 = v15 & 3;
      rDest = &pJumpArea->m_connect[v15 & 3];
      JumpConnector::TryToConnect(&connector, pJumpArea, rSource, rDest, v3);
      nBackEdge = (v3 + 2) & 3;
      m_pData = rSource[-4].m_pData;
      if ( m_pData == 0 )
      {
        while ( 2 )
        {
          if ( v2 >= 0 )
            goto LABEL_24;
LABEL_7:
          m_pArea = m_pData->m_Elements[v2].m_pArea;
          if ( CNavArea::IsConnectedOnEdge(m_pArea, pJumpArea, v3) )
          {
            if ( (m_pArea->m_AreaAttributes.m_Flags & 2) != 0 )
            {
              ++v2;
              JumpConnector::TryToConnect(&connector, pJumpArea, &m_pArea->m_incomingConnect[nBackEdge], rDest, v3);
              JumpConnector::TryToConnect(&connector, pJumpArea, &m_pArea->m_connect[nBackEdge], rDest, v3);
              goto LABEL_22;
            }
            v6 = 0;
            v16 = v2;
            v7 = rDest->m_pData;
            while ( 1 )
            {
              v8 = v7 != 0 ? v7->m_Size : 0;
              if ( v6 >= v8 )
                break;
              v9 = v7->m_Elements[v6].m_pArea;
              if ( (v9->m_AreaAttributes.m_Flags & 2) == 0 )
              {
                CNavPoly::ComputeOrientedPortal(m_pArea, v9, v3, nBackEdge, -1.0, v25);
                if ( v25[0].m_flWidth > 0.0 )
                {
                  vPos = CNavOrientedPortal::GetCenter(v25);
                  vFromPos = CNavPoly::GetClosestPointOnPoly(m_pArea, &vPos);
                  vPos = CNavOrientedPortal::GetCenter(v25);
                  ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(v9, &vPos);
                  v10 = (m_pArea->m_AreaAttributes.m_Flags & 0x1000) == 0;
                  vToPos = ClosestPointOnPoly;
                  if ( (v10 || ClosestPointOnPoly.z <= (vFromPos.z + 18.0))
                    && TestJumpDown(&vFromPos, &vToPos)
                    && IsValidJumpDownConnection(m_pArea, v9, v3, nBackEdge) )
                  {
                    CNavArea::ConnectTo(m_pArea, v9, v3, nBackEdge, 1);
                  }
                }
                v7 = rDest->m_pData;
              }
              ++v6;
            }
            v2 = v16;
          }
          ++v2;
LABEL_22:
          m_pData = rSource[-4].m_pData;
          if ( m_pData == 0 )
            continue;
          break;
        }
      }
      if ( v2 < m_pData->m_Size )
        goto LABEL_7;
LABEL_24:
      ++v15;
      ++rSource;
      if ( v15 == 6 )
        goto LABEL_25;
    }
  }
LABEL_26:
  CNavGenerator::RemoveJumpAreas(this);
}


// CNavGenerator::RemoveOrthogonalConnectionsForArea  (line 1641, @0x0000000002ed8e20, libserver.so)
// calls: CNavArea::Disconnect
// callers: CNavGeneratorAAQuad::RaiseAreasWithInternalObstacles
// globals: CSWTCH.10059, CSWTCH.10061
void __fastcall CNavGenerator::RemoveOrthogonalConnectionsForArea(
        CNavGenerator *const this,
        CNavArea *const rArea,
        NavDirType dir)
{
  __int64 v4; // r12

  if ( dir > NavDirType::WEST )
  {
    CNavArea::Disconnect(rArea, 0);
    CNavArea::Disconnect(rArea, 0);
  }
  else
  {
    v4 = dir;
    CNavArea::Disconnect(rArea, CSWTCH_10059[4 * dir]);
    CNavArea::Disconnect(rArea, CSWTCH_10061[4 * v4]);
  }
}


// CNavGenerator::SetPlayerSpawnName  (line 1651, @0x0000000002ed8e80, libserver.so)  // inlines: V_strlen, strcpy
// calls: operator delete [], strlen, operator new [], strcpy
void __fastcall CNavGenerator::SetPlayerSpawnName(CNavGenerator *const this, const char *pName)
{
  char *m_pSpawnName; // rdi
  size_t v5; // rdi
  char *v6; // rax

  m_pSpawnName = this->m_pSpawnName;
  if ( m_pSpawnName != 0 )
    operator delete[](m_pSpawnName);
  if ( pName != 0 )
    v5 = (strlen(pName) + 1);
  else
    v5 = 1;
  v6 = operator new[](v5);
  this->m_pSpawnName = v6;
  strcpy(v6, pName);
}


// CNavGenerator::GetPlayerSpawnName  (line 1664, @0x0000000002ed8ee0, libserver.so)
// strings: "info_player_start"
const char *__fastcall CNavGenerator::GetPlayerSpawnName(const CNavGenerator *const this)
{
  const char *result; // rax

  result = "info_player_start";
  if ( this->m_pSpawnName != 0 )
    return this->m_pSpawnName;
  return result;
}


// CNavGeneratorAAQuad::SampleWalkableSpace  (line 1684, @0x0000000002f04070, libserver.so)
// calls: AnalysisProgress, Plat_FloatTime, CNavGeneratorAAQuad::GenerationSampleStep, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Sampling walkable space...", "Took %0.2f seconds to sample walkable space\n"
// globals: CNavGeneratorAAQuad::SampleWalkableSpace(float,float)::flFirstWalkTime
__int64 __fastcall CNavGeneratorAAQuad::SampleWalkableSpace(
        CNavGeneratorAAQuad *const this,
        float a2,
        float flStartTime,
        float flMaxTime)
{
  double v5; // xmm0_8
  float v6; // xmm1_4
  float v7; // xmm2_4
  unsigned int IsChannelEnabled; // ebx
  double flMaxTimeb; // [rsp+0h] [rbp-20h]
  double flStartTimeb; // [rsp+8h] [rbp-18h]

  if ( CNavGeneratorAAQuad::SampleWalkableSpace(float,float)::flFirstWalkTime < 0.0 )
    CNavGeneratorAAQuad::SampleWalkableSpace(float,float)::flFirstWalkTime = Plat_FloatTime(0.0, flStartTime, flMaxTime);
  AnalysisProgress("Sampling walkable space...", 100, this->m_nSampleTick / 10, 0);
  this->m_nSampleTick = (this->m_nSampleTick + 1) % 1000;
  while ( CNavGeneratorAAQuad::GenerationSampleStep(this) )
  {
    if ( Plat_FloatTime(v5, v6, v7) - a2 > flStartTime )
      return 0;
  }
  flStartTimeb = Plat_FloatTime(v5, v6, v7);
  flMaxTimeb = CNavGeneratorAAQuad::SampleWalkableSpace(float,float)::flFirstWalkTime;
  IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_NAV, 1);
  if ( IsChannelEnabled == 0 )
    return 1;
  LoggingSystem_Log(LOG_NAV, 1, "Took %0.2f seconds to sample walkable space\n", flStartTimeb - flMaxTimeb);
  return IsChannelEnabled;
}


// CNavGeneratorAAQuad::TestNodeForValidCrouchArea  (line 1712, @0x0000000002ed8f00, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, EnableInteractsExclude, EnableInteractsWith, GetPosition, GetTraceMaskSolidBrushOnly, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CTraceFilterSimple::CTraceFilterSimple, CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay
// callers: CNavGeneratorAAQuad::TestArea
bool __fastcall CNavGeneratorAAQuad::TestNodeForValidCrouchArea(CNavGeneratorAAQuad *const this, CNavNode *const rNode)
{
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  float v6; // xmm0_4
  CTraceFilterWalkableEntities filter; // [rsp+0h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-120h] BYREF
  trace_t tr; // [rsp+A0h] [rbp-D0h] BYREF

  CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 11, 0);
  filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  filter._vptr_CTraceFilter = off_3FE6A50;
  filter.m_flags = 15;
  memset(&tr.m_ShapeAttributes, 0, 31);
  CGameTrace::Init(&tr);
  x = rNode->m_pos.x;
  y = rNode->m_pos.y;
  ray.m_Start.w = 0.0;
  z = rNode->m_pos.z;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_Delta.x = x - x;
  ray.m_Delta.y = y - y;
  ray.m_flRadius = 0.0;
  ray.m_StartOffset.z = -27.5;
  ray.m_Delta.z = (z + 64.0) - z;
  ray.m_Extents.z = 27.5;
  ray.m_Start.z = z + 27.5;
  ray.m_Extents.x = CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
  ray.m_Extents.y = CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
  v6 = (CNavGeneratorBase::sm_flGenerationStepSize + 0.0) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.x = x + v6;
  ray.m_Start.y = y + v6;
  ray.m_StartOffset.x = -v6;
  ray.m_IsRay = ((((CNavGeneratorBase::sm_flGenerationStepSize * 0.5)
                 * (CNavGeneratorBase::sm_flGenerationStepSize * 0.5))
                + ((CNavGeneratorBase::sm_flGenerationStepSize * 0.5)
                 * (CNavGeneratorBase::sm_flGenerationStepSize * 0.5)))
               + 756.25) < 0.000001;
  ray.m_StartOffset.y = -v6;
  filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &tr);
  return !tr.startsolid;
}


// CNavGeneratorAAQuad::LadderEndSearch  (line 1735, @0x0000000002ed9120, libserver.so)  // inlines: AddDirectionVector, CGameTrace, EnableInteractsWith, GetTraceMaskSolidBrushOnly, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator+
// calls: CNavMesh::SnapToGrid, CNavMesh::GetGroundHeight, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CNavNode::GetNode, operator new, CNavNode::CNavNode, operator delete, _Unwind_Resume
// callers: CNavGeneratorAAQuad::GenerationSampleStep
CNavNode *__fastcall CNavGeneratorAAQuad::LadderEndSearch(
        CNavGeneratorAAQuad *const this,
        const Vector *vPos,
        NavDirType mountDir)
{
  int i; // ebx
  float v4; // xmm1_4
  float v5; // xmm10_4
  float v6; // xmm1_4
  float v7; // xmm9_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  CNavNode *v12; // rbx
  float v14; // xmm0_4
  uint64 v15; // [rsp+10h] [rbp-1B0h]
  float y; // [rsp+24h] [rbp-19Ch]
  float z; // [rsp+28h] [rbp-198h]
  float x; // [rsp+2Ch] [rbp-194h]
  Vector tryPos; // [rsp+30h] [rbp-190h] BYREF
  Vector tryNormal; // [rsp+40h] [rbp-180h] BYREF
  CTraceFilterSimple v21; // [rsp+50h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-130h] BYREF
  trace_t v23; // [rsp+E0h] [rbp-E0h] BYREF

  x = vPos->x;
  z = vPos->z;
  y = vPos->y;
  if ( mountDir == NavDirType::EAST )
  {
    x = x + 16.0;
  }
  else if ( mountDir <= NavDirType::EAST )
  {
    if ( mountDir == NavDirType::NORTH )
      y = y - 16.0;
  }
  else if ( mountDir == NavDirType::SOUTH )
  {
    y = y + 16.0;
  }
  else if ( mountDir == NavDirType::WEST )
  {
    x = x - 16.0;
  }
  for ( i = -1; i != 8; ++i )
  {
    tryPos.x = x;
    tryPos.y = y;
    tryPos.z = z;
    if ( i > 3 )
    {
      v14 = CNavGeneratorBase::sm_flGenerationStepSize + CNavGeneratorBase::sm_flGenerationStepSize;
      switch ( i )
      {
        case 6:
          tryPos.y = v14 + y;
          break;
        case 7:
          tryPos.x = x - v14;
          break;
        case 5:
          tryPos.x = v14 + x;
          break;
        default:
          tryPos.y = y - v14;
          break;
      }
    }
    else if ( i != -1 )
    {
      switch ( i )
      {
        case 2:
          tryPos.y = y + CNavGeneratorBase::sm_flGenerationStepSize;
          break;
        case 3:
          tryPos.x = x - CNavGeneratorBase::sm_flGenerationStepSize;
          break;
        case 1:
          tryPos.x = x + CNavGeneratorBase::sm_flGenerationStepSize;
          break;
        default:
          tryPos.y = y - CNavGeneratorBase::sm_flGenerationStepSize;
          break;
      }
    }
    tryPos.z = CNavGeneratorBase::sm_flGenerationStepSize + z;
    tryPos.x = CNavMesh::SnapToGrid(TheNavMesh, CNavGeneratorBase::sm_flGenerationStepSize + z, 0);
    tryPos.y = CNavMesh::SnapToGrid(TheNavMesh, v4, 0);
    if ( CNavMesh::GetGroundHeight(TheNavMesh, &tryPos, &tryPos.z, &tryNormal) )
    {
      memset(&v23.m_ShapeAttributes, 0, 31);
      v23.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&v23);
      ray.m_Start.w = 0.0;
      ray.m_Delta.w = 0.0;
      ray.m_StartOffset.w = 0.0;
      ray.m_Extents.w = 0.0;
      ray.m_flRadius = 0.0;
      ray.m_Delta.x = (tryPos.x + 0.0) - (x + 0.0);
      ray.m_Delta.y = (tryPos.y + 0.0) - (y + 0.0);
      ray.m_Delta.z = (tryPos.z + 4.0) - (z + 4.0);
      v15 = CNavConfig::ms_TraceMaskSolidBrushOnly;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      v5 = NavTraceMaxs.y;
      v6 = NavTraceMins.y;
      v7 = NavTraceMaxs.z;
      v8 = NavTraceMins.z;
      ray.m_Extents.x = (NavTraceMaxs.x - NavTraceMins.x) * 0.5;
      ray.m_Extents.y = (v5 - v6) * 0.5;
      ray.m_Extents.z = (v7 - v8) * 0.5;
      v9 = (NavTraceMins.x + NavTraceMaxs.x) * 0.5;
      v10 = (v6 + v5) * 0.5;
      v11 = (v8 + v7) * 0.5;
      ray.m_StartOffset.x = -v9;
      ray.m_StartOffset.y = -v10;
      ray.m_Start.x = (x + 0.0) + v9;
      ray.m_Start.y = (y + 0.0) + v10;
      ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                   + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
      ray.m_StartOffset.z = -v11;
      ray.m_Start.z = (z + 4.0) + v11;
      CTraceFilterSimple::CTraceFilterSimple(&v21, 0, 4, 0);
      v21.m_attr.m_nInteractsWith |= v15;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v21, &v23);
      if ( v23.fraction == 1.0 && !v23.startsolid && CNavNode::GetNode(&tryPos) == 0 )
      {
        v12 = operator new(0xB8u);
        CNavNode::CNavNode(v12, &tryPos, &tryNormal, 0);
        return v12;
      }
    }
  }
  return 0;
}


// CNavGeneratorAAQuad::GetNextWalkableSeedNode  (line 1782, @0x0000000002ed9720, libserver.so)  // inlines: operator[]
// calls: CNavNode::GetNode, operator new, CNavNode::CNavNode, operator delete, _Unwind_Resume
// callers: CNavGeneratorAAQuad::GenerationSampleStep
CNavNode *__fastcall CNavGeneratorAAQuad::GetNextWalkableSeedNode(CNavGeneratorAAQuad *const this)
{
  int m_nWalkableSeedIdx; // edx
  CNavGeneratorBase::WalkableSeedSpot *v2; // rax
  __int64 v3; // rax
  CNavNode *Node; // rdx
  CNavNode *result; // rax
  CNavNode *v6; // r12
  __int64 v7; // [rsp-8h] [rbp-38h] BYREF
  CNavGeneratorBase::WalkableSeedSpot spot; // [rsp+0h] [rbp-30h] BYREF

  m_nWalkableSeedIdx = this->m_nWalkableSeedIdx;
  if ( m_nWalkableSeedIdx >= this->m_walkableSeeds.m_Size )
    return 0;
  v2 = &this->m_walkableSeeds.m_Memory.m_pMemory[m_nWalkableSeedIdx];
  v7 = *&v2->vPos.x;
  *&spot.vPos.x = *&v2->vPos.z;
  v3 = *&v2->vNormal.y;
  this->m_nWalkableSeedIdx = m_nWalkableSeedIdx + 1;
  *&spot.vPos.z = v3;
  Node = CNavNode::GetNode(&v7);
  result = 0;
  if ( Node == 0 )
  {
    v6 = operator new(0xB8u);
    CNavNode::CNavNode(v6, &v7, &spot.vPos.y, 0);
    return v6;
  }
  return result;
}


// IsNodeOverlapped  (line 1802, @0x0000000002eccaf0, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, EnableInteractsExclude, EnableInteractsWith, GetTraceMaskSolidBrushOnly, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator+, operator=
// calls: CNavMesh::GetNavArea, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CNavGeneratorAAQuad::GenerationSampleStep
// globals: g_NavHullAAQuad
bool __fastcall IsNodeOverlapped(const Vector *const vPos, const Vector *const vOffset)
{
  char startsolid; // r14
  vec_t v5; // xmm2_4
  vec_t v6; // xmm1_4
  float x; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // [rsp+Ch] [rbp-194h]
  float v13; // [rsp+10h] [rbp-190h]
  float v14; // [rsp+14h] [rbp-18Ch]
  float y; // [rsp+18h] [rbp-188h]
  float v16; // [rsp+1Ch] [rbp-184h]
  CTraceFilterWalkableEntities filter; // [rsp+20h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-130h] BYREF
  trace_t trace; // [rsp+C0h] [rbp-E0h] BYREF

  startsolid = 1;
  v5 = vPos->z + 35.5;
  v6 = vPos->x + vOffset->x;
  trace.startpos.y = vPos->y + vOffset->y;
  trace.startpos.z = v5;
  trace.startpos.x = v6;
  if ( CNavMesh::GetNavArea(TheNavMesh, &trace.startpos, g_NavHullAAQuad, 71, 120.0, 5.0, 0) == 0 )
  {
    x = vOffset->x;
    v9 = vPos->x;
    memset(&trace.m_ShapeAttributes, 0, 31);
    v13 = v9;
    y = vPos->y;
    v10 = CNavGeneratorBase::sm_flGenerationStepSize * vOffset->y;
    v11 = vPos->z + 35.5;
    trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    v12 = v11;
    v14 = (x * CNavGeneratorBase::sm_flGenerationStepSize) + v9;
    v16 = v10 + y;
    CGameTrace::Init(&trace);
    CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 4, 0);
    ray.m_Start.w = 0.0;
    filter._vptr_CTraceFilter = off_3FE6A50;
    ray.m_Delta.w = 0.0;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    ray.m_Delta.y = v16 - y;
    ray.m_Delta.x = v14 - v13;
    ray.m_flRadius = 0.0;
    ray.m_Delta.z = v12 - v12;
    filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
    ray.m_Start.x = v13 + 0.0;
    ray.m_Start.y = y + 0.0;
    filter.m_flags = 15;
    ray.m_Extents.x = 0.5;
    ray.m_Extents.y = 0.5;
    ray.m_IsRay = 0;
    ray.m_Start.z = v12 + 0.0;
    ray.m_Extents.z = 0.5;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_StartOffset.x = -0.0;
    ray.m_StartOffset.y = -0.0;
    ray.m_StartOffset.z = -0.0;
    filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &trace);
    if ( trace.startsolid )
      return 1;
    if ( trace.fraction < 0.1 )
      return 1;
    ray.m_Start.w = 0.0;
    ray.m_Delta.w = 0.0;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    ray.m_flRadius = 0.0;
    ray.m_Delta.x = v14 - trace.endpos.x;
    ray.m_Delta.y = v16 - trace.endpos.y;
    ray.m_Extents.x = 0.5;
    ray.m_Extents.y = 0.5;
    ray.m_Extents.z = 0.5;
    ray.m_Delta.z = (v12 - 71.0) - trace.endpos.z;
    ray.m_IsRay = 0;
    ray.m_Start.x = trace.endpos.x + 0.0;
    ray.m_Start.y = trace.endpos.y + 0.0;
    ray.m_StartOffset.x = -0.0;
    ray.m_StartOffset.y = -0.0;
    ray.m_StartOffset.z = -0.0;
    ray.m_Start.z = trace.endpos.z + 0.0;
    filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &trace);
    startsolid = trace.startsolid;
    if ( trace.startsolid || trace.fraction == 1.0 || trace.plane.normal.z < 0.69999999 )
      return 1;
  }
  return startsolid;
}


// CNavGeneratorAAQuad::GenerationSampleStep  (line 1851, @0x0000000002ed9b30, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, Contains, EnableInteractsExclude, EnableInteractsWith, FastSqrt, GetFloat, GetInt, GetPosition, GetTraceMaskSolidBrushOnly, HasVisited, Init, IsLengthLessThan, Length, LengthSqr, MarkAsVisited, Ray_t, RnCollisionAttr_t, Square<float>, TraceRay, UTIL_TraceHull, Vector, VectorAdd, VectorAligned, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator+, operator-, operator=
// calls: CNavGeneratorAAQuad::GetNextWalkableSeedNode, CNavGeneratorAAQuad::LadderEndSearch, CNavMesh::SnapToGrid, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, TraceAdjacentNode, CGamePhysicsQueryInterface::TraceRay, IsNodeOverlapped, UTIL_TraceHull, CNavGeneratorAAQuad::AddNode, StayOnFloor
// callers: CNavGeneratorAAQuad::GenerateNodes, CNavGeneratorAAQuad::SampleWalkableSpace
bool __fastcall CNavGeneratorAAQuad::GenerationSampleStep(CNavGeneratorAAQuad *const this)
{
  CNavNode *m_currentNode; // rax
  int m_visited; // edx
  unsigned __int32 i; // r12d
  const NavLadderVector *m_rNavLadders; // rax
  __int64 v6; // r13
  int v7; // r14d
  CNavLadder *v8; // r12
  const CNavMesh *m_rNavMesh; // rdi
  vec_t y; // xmm2_4
  float z; // xmm1_4
  int v13; // r13d
  float v14; // xmm1_4
  int v15; // eax
  CNavNode *v16; // rdx
  float v17; // xmm4_4
  float v18; // xmm3_4
  float m_fValue; // xmm6_4
  CNavGeneratorBase::GenerationModeType m_generationMode; // eax
  CNavNode *v21; // rax
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  int v24; // xmm1_4
  bool v25; // zf
  float v26; // xmm10_4
  float v27; // xmm9_4
  float v28; // xmm8_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm11_4
  float v35; // xmm10_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  double v38; // xmm2_8
  bool v39; // cf
  float v40; // xmm3_4
  float v41; // xmm4_4
  float v42; // xmm2_4
  int m_Size; // edx
  CNavGeneratorBase::WalkableSeedSpot *m_pMemory; // rax
  float v45; // xmm6_4
  __int64 v46; // rdx
  bool v47; // al
  bool v48; // r14
  bool v49; // r15
  bool v50; // al
  bool v51; // r13
  bool v52; // al
  int m_nValue; // edx
  int v54; // eax
  float v55; // xmm1_4
  CNavNode *v56; // r8
  int v57; // esi
  int v58; // ecx
  CNavGeneratorBase::WalkableSeedSpot *v59; // rax
  float v60; // xmm2_4
  CNavGeneratorBase::WalkableSeedSpot *v61; // rsi
  float v62; // xmm0_4
  float obstacleStartDist; // [rsp+2Ch] [rbp-2C4h]
  float obstacleEndDist; // [rsp+30h] [rbp-2C0h]
  float v65; // [rsp+34h] [rbp-2BCh]
  int v66; // [rsp+50h] [rbp-2A0h]
  float flZLimit; // [rsp+58h] [rbp-298h]
  float flHeight; // [rsp+5Ch] [rbp-294h]
  Vector vPos; // [rsp+60h] [rbp-290h] BYREF
  Vector vFrom; // [rsp+70h] [rbp-280h] BYREF
  Vector vTo; // [rsp+80h] [rbp-270h] BYREF
  Vector vToNormal; // [rsp+90h] [rbp-260h] BYREF
  Vector vStart; // [rsp+A0h] [rbp-250h] BYREF
  Vector vEnd; // [rsp+B0h] [rbp-240h] BYREF
  CTraceFilterWalkableEntities filter; // [rsp+C0h] [rbp-230h] BYREF
  Vector vStart_0; // [rsp+110h] [rbp-1E0h] BYREF
  int v77; // [rsp+11Ch] [rbp-1D4h]
  float v78; // [rsp+120h] [rbp-1D0h]
  float v79; // [rsp+124h] [rbp-1CCh]
  float v80; // [rsp+128h] [rbp-1C8h]
  int v81; // [rsp+12Ch] [rbp-1C4h]
  float v82; // [rsp+130h] [rbp-1C0h]
  float v83; // [rsp+134h] [rbp-1BCh]
  float v84; // [rsp+138h] [rbp-1B8h]
  int v85; // [rsp+13Ch] [rbp-1B4h]
  float v86; // [rsp+140h] [rbp-1B0h]
  float v87; // [rsp+144h] [rbp-1ACh]
  float v88; // [rsp+148h] [rbp-1A8h]
  int v89; // [rsp+14Ch] [rbp-1A4h]
  int v90; // [rsp+150h] [rbp-1A0h]
  bool v91; // [rsp+154h] [rbp-19Ch]
  bool v92; // [rsp+155h] [rbp-19Bh]
  trace_t ptr; // [rsp+160h] [rbp-190h] BYREF
  Vector vEnd_0; // [rsp+210h] [rbp-E0h] BYREF
  Vector v95; // [rsp+21Ch] [rbp-D4h]
  Vector v96; // [rsp+228h] [rbp-C8h]
  float v97; // [rsp+23Ch] [rbp-B4h]
  char v98; // [rsp+248h] [rbp-A8h]
  __int64 v99; // [rsp+278h] [rbp-78h]
  __int64 v100; // [rsp+280h] [rbp-70h]
  __int64 v101; // [rsp+288h] [rbp-68h]
  int v102; // [rsp+290h] [rbp-60h]
  __int16 v103; // [rsp+294h] [rbp-5Ch]
  char v104; // [rsp+296h] [rbp-5Ah]
  char v105; // [rsp+297h] [rbp-59h]

  m_currentNode = this->m_currentNode;
  if ( m_currentNode == 0 )
    goto LABEL_6;
  do
  {
LABEL_2:
    while ( 2 )
    {
      for ( i = 0; i != 4; ++i )
      {
        m_visited = m_currentNode->m_visited;
        if ( !_bittest(&m_visited, i) )
        {
          m_rNavMesh = this->m_rNavMesh;
          y = m_currentNode->m_pos.y;
          z = m_currentNode->m_pos.z;
          vPos.x = m_currentNode->m_pos.x;
          vPos.y = y;
          vPos.z = z;
          v13 = CNavMesh::SnapToGrid(m_rNavMesh, z, 0);
          v15 = CNavMesh::SnapToGrid(this->m_rNavMesh, v14, 0);
          switch ( i )
          {
            case 2u:
              v15 = (v15 + CNavGeneratorBase::sm_flGenerationStepSize);
              break;
            case 3u:
              v13 = (v13 - CNavGeneratorBase::sm_flGenerationStepSize);
              break;
            case 1u:
              v13 = (v13 + CNavGeneratorBase::sm_flGenerationStepSize);
              break;
            default:
              v15 = (v15 - CNavGeneratorBase::sm_flGenerationStepSize);
              break;
          }
          v16 = this->m_currentNode;
          v17 = v15;
          this->m_generationDir = i;
          v18 = v13;
          v16->m_visited |= 1 << i;
          vPos.y = v15;
          vPos.x = v13;
          m_fValue = nav_generate_incremental_range.m_pParent->m_Value.m_fValue;
          m_generationMode = this->m_generationMode;
          if ( m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
          {
            if ( m_fValue > 0.0 )
            {
              m_Size = this->m_walkableSeeds.m_Size;
              if ( m_Size <= 0 )
                return 1;
              m_pMemory = this->m_walkableSeeds.m_Memory.m_pMemory;
              v45 = m_fValue * m_fValue;
              v46 = &m_pMemory[(m_Size - 1) + 1];
              while ( v45 <= ((((m_pMemory->vPos.x - v18) * (m_pMemory->vPos.x - v18))
                             + ((m_pMemory->vPos.y - v17) * (m_pMemory->vPos.y - v17)))
                            + ((m_pMemory->vPos.z - vPos.z) * (m_pMemory->vPos.z - vPos.z))) )
              {
                if ( ++m_pMemory == v46 )
                  return 1;
              }
            }
          }
          else if ( m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_SIMPLIFY
                 && (v18 < this->m_simplifyGenerationExtent.lo.x
                  || this->m_simplifyGenerationExtent.hi.x < v18
                  || v17 < this->m_simplifyGenerationExtent.lo.y
                  || this->m_simplifyGenerationExtent.hi.y < v17
                  || vPos.z < this->m_simplifyGenerationExtent.lo.z
                  || this->m_simplifyGenerationExtent.hi.z < vPos.z) )
          {
            return 1;
          }
          memset(&ptr.m_ShapeAttributes, 0, 31);
          ptr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
          CGameTrace::Init(&ptr);
          v21 = this->m_currentNode;
          v22 = v21->m_pos.y;
          v23 = v21->m_pos.z;
          vFrom.x = v21->m_pos.x;
          vFrom.y = v22;
          vFrom.z = v23;
          CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 4, 0);
          filter._vptr_CTraceFilter = off_3FE6A50;
          filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
          filter.m_flags = 15;
          obstacleEndDist = CNavGeneratorBase::sm_flGenerationStepSize;
          if ( TraceAdjacentNode(0, &vFrom, &vPos, &ptr, 400.0) )
          {
            vTo = ptr.endpos;
            obstacleStartDist = 0.0;
            flHeight = 0.0;
            vToNormal = ptr.plane.normal;
          }
          else
          {
            flHeight = 18.0;
            obstacleStartDist = 0.0;
            v66 = 183;
            *&v24 = 0.5;
            while ( 1 )
            {
              flZLimit = *&v24;
              v103 = 0;
              v99 = 0;
              v100 = 0;
              v101 = 0;
              v104 = 0;
              v105 = 7;
              v102 = 0;
              CGameTrace::Init(&vEnd_0);
              v77 = 0;
              v81 = 0;
              v26 = NavTraceMaxs.y;
              v85 = 0;
              v89 = 0;
              vStart = vFrom;
              v90 = 0;
              v27 = NavTraceMins.y;
              v28 = NavTraceMaxs.z;
              *&vEnd.x = *&vPos.x;
              vStart.z = vFrom.z + flHeight;
              v78 = vPos.x - vFrom.x;
              v79 = vPos.y - vFrom.y;
              vEnd.z = flHeight + vPos.z;
              v80 = (flHeight + vPos.z) - (vFrom.z + flHeight);
              v29 = NavTraceMins.z;
              v92 = (((v78 * v78) + (v79 * v79)) + (v80 * v80)) != 0.0;
              v86 = (NavTraceMaxs.x - NavTraceMins.x) * flZLimit;
              v87 = (v26 - v27) * flZLimit;
              v88 = (v28 - v29) * flZLimit;
              v30 = (v26 + v27) * flZLimit;
              v91 = (((v86 * v86) + (v87 * v87)) + (v88 * v88)) < 0.000001;
              filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
              v83 = -v30;
              v31 = (NavTraceMaxs.x + NavTraceMins.x) * flZLimit;
              v32 = (v28 + v29) * flZLimit;
              vStart_0.y = vFrom.y + v30;
              v82 = -v31;
              v84 = -v32;
              vStart_0.x = vFrom.x + v31;
              vStart_0.z = (vFrom.z + flHeight) + v32;
              CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vStart_0, &filter, &vEnd_0);
              *&v24 = flZLimit;
              if ( v98 == 0 && v97 == 1.0 )
                break;
              v33 = (v95.y - vStart.y) * (v95.y - vStart.y);
              if ( (CNavGeneratorBase::sm_flGenerationStepSize * CNavGeneratorBase::sm_flGenerationStepSize) >= ((((v95.x - vStart.x) * (v95.x - vStart.x)) + v33) + ((v95.z - vStart.z) * (v95.z - vStart.z))) )
              {
                v65 = (((v95.x - vStart.x) * (v95.x - vStart.x)) + v33) + ((v95.z - vStart.z) * (v95.z - vStart.z));
                v77 = 0;
                v81 = 0;
                v34 = NavTraceMaxs.y;
                v85 = 0;
                v78 = vStart.x - vEnd.x;
                v89 = 0;
                v79 = vStart.y - vEnd.y;
                v35 = NavTraceMins.y;
                v80 = vStart.z - vEnd.z;
                v90 = 0;
                v86 = (NavTraceMaxs.x - NavTraceMins.x) * flZLimit;
                v36 = NavTraceMaxs.z;
                v37 = NavTraceMins.z;
                v87 = (v34 - v35) * flZLimit;
                v92 = (((v78 * v78) + (v79 * v79)) + (v80 * v80)) != 0.0;
                v88 = (v36 - v37) * flZLimit;
                v38 = (((v86 * v86) + (v87 * v87)) + (v88 * v88));
                v39 = v38 > 0.000001;
                v25 = v38 == 0.000001;
                v40 = (v34 + v35) * flZLimit;
                *&v38 = (v36 + v37) * flZLimit;
                v91 = !v39 && !v25;
                v41 = (NavTraceMaxs.x + NavTraceMins.x) * flZLimit;
                vStart_0.y = vEnd.y + v40;
                vStart_0.z = vEnd.z + *&v38;
                v82 = -v41;
                vStart_0.x = vEnd.x + v41;
                v83 = -v40;
                v84 = -*&v38;
                filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
                CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vStart_0, &filter, &vEnd_0);
                *&v24 = flZLimit;
                if ( v98 == 0 && v97 < 1.0 )
                {
                  v42 = (((v95.x - vStart.x) * (v95.x - vStart.x)) + ((v95.y - vStart.y) * (v95.y - vStart.y)))
                      + ((v95.z - vStart.z) * (v95.z - vStart.z));
                  if ( (CNavGeneratorBase::sm_flGenerationStepSize * CNavGeneratorBase::sm_flGenerationStepSize) >= v42 )
                  {
                    obstacleStartDist = fsqrt(v65);
                    obstacleEndDist = fsqrt(v42);
                    if ( obstacleEndDist == 0.0 )
                      obstacleEndDist = CNavGeneratorBase::sm_flGenerationStepSize;
                  }
                }
              }
              v25 = v66-- == 1;
              flHeight = flHeight + 1.0;
              if ( v25 )
                return 1;
            }
            if ( !StayOnFloor(&vEnd_0, flZLimit) )
              return 1;
            vTo = v95;
            vEnd.x = vFrom.x;
            vToNormal = v96;
            vStart = vFrom;
            vEnd.y = vFrom.y;
            vEnd.z = vFrom.z + flHeight;
            UTIL_TraceHull(
              &vStart,
              &vEnd,
              &NavTraceMins,
              &NavTraceMaxs,
              CNavConfig::ms_TraceMaskSolidBrushOnly,
              &filter,
              &vEnd_0);
            if ( v97 < 1.0 )
              return 1;
          }
          if ( (ptr.m_ShapeAttributes.m_nInteractsAs & 8) == 0 )
          {
            vEnd_0.x = 1.0;
            vEnd_0.y = 1.0;
            vEnd_0.z = 35.5;
            vEnd = vTo;
            v47 = IsNodeOverlapped(&vEnd, &vEnd_0);
            vEnd_0.x = -1.0;
            v48 = v47;
            vEnd_0.y = 1.0;
            vEnd_0.z = 35.5;
            v49 = IsNodeOverlapped(&vEnd, &vEnd_0);
            vEnd_0.x = 1.0;
            vEnd_0.y = -1.0;
            vEnd_0.z = 35.5;
            v50 = IsNodeOverlapped(&vEnd, &vEnd_0);
            vEnd_0.x = -1.0;
            v51 = v50;
            vEnd_0.y = -1.0;
            vEnd_0.z = 35.5;
            v52 = IsNodeOverlapped(&vEnd, &vEnd_0);
            if ( !v48
              || !v49
              || !v51
              || !v52
              || this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_SIMPLIFY )
            {
              m_nValue = nav_generate_incremental_tolerance.m_pParent->m_Value.m_nValue;
              if ( m_nValue > 0 && this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
              {
                v57 = this->m_walkableSeeds.m_Size;
                v58 = vTo.z;
                if ( v57 <= 0 )
                  return 1;
                v59 = this->m_walkableSeeds.m_Memory.m_pMemory;
                v60 = m_nValue;
                if ( v58 > (v59->vPos.z + m_nValue) || v58 < (v59->vPos.z - v60) )
                {
                  v61 = &v59[v57 - 1];
                  while ( v59 != v61 )
                  {
                    v62 = v59[1].vPos.z;
                    ++v59;
                    if ( v58 <= (v60 + v62) && v58 >= (v62 - v60) )
                      goto LABEL_52;
                  }
                  return 1;
                }
              }
LABEL_52:
              v54 = nav_displacement_test.m_pParent->m_Value.m_nValue;
              if ( v54 <= 0
                || (vStart_0 = vTo,
                    vEnd_0.y = vTo.y + 0.0,
                    vEnd_0.z = v54 + vTo.z,
                    vEnd_0.x = vTo.x + 0.0,
                    UTIL_TraceHull(
                      &vStart_0,
                      &vEnd_0,
                      &NavTraceMins,
                      &NavTraceMaxs,
                      CNavConfig::ms_TraceMaskSolidBrushOnly,
                      &filter,
                      &ptr),
                    ptr.fraction <= 0.0) )
              {
                v55 = vTo.z;
LABEL_62:
                v56 = this->m_currentNode;
                if ( flHeight < 18.0 || (v55 - v56->m_pos.z) > (flHeight - 2.0) )
                {
                  obstacleStartDist = 0.0;
                  flHeight = 0.0;
                  obstacleEndDist = CNavGeneratorBase::sm_flGenerationStepSize;
                }
                CNavGeneratorAAQuad::AddNode(
                  this,
                  &vTo,
                  &vToNormal,
                  this->m_generationDir,
                  v56,
                  flHeight,
                  obstacleStartDist,
                  obstacleEndDist);
                return 1;
              }
              vEnd_0 = vStart_0;
              vStart_0 = ptr.endpos;
              UTIL_TraceHull(
                &vStart_0,
                &vEnd_0,
                &NavTraceMins,
                &NavTraceMaxs,
                CNavConfig::ms_TraceMaskSolidBrushOnly,
                &filter,
                &ptr);
              v55 = vTo.z;
              if ( ptr.fraction >= 1.0 || ptr.endpos.z <= (vTo.z + 18.0) )
                goto LABEL_62;
            }
          }
          return 1;
        }
      }
      m_currentNode = m_currentNode->m_parent;
      this->m_currentNode = m_currentNode;
      if ( m_currentNode != 0 )
        continue;
      break;
    }
LABEL_6:
    m_currentNode = CNavGeneratorAAQuad::GetNextWalkableSeedNode(this);
    this->m_currentNode = m_currentNode;
  }
  while ( m_currentNode != 0 );
  if ( (this->m_generationMode - 2) > 1 )
  {
    m_rNavLadders = this->m_rNavLadders;
    if ( m_rNavLadders->m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = m_rNavLadders->m_Memory.m_pMemory[v6];
        m_currentNode = CNavGeneratorAAQuad::LadderEndSearch(this, &v8->m_vBottom, v8->m_dir);
        this->m_currentNode = m_currentNode;
        if ( m_currentNode != 0 )
          break;
        m_currentNode = CNavGeneratorAAQuad::LadderEndSearch(this, &v8->m_vTop, v8->m_dir);
        this->m_currentNode = m_currentNode;
        if ( m_currentNode != 0 )
          break;
        m_rNavLadders = this->m_rNavLadders;
        ++v7;
        ++v6;
        if ( m_rNavLadders->m_Size <= v7 )
          return 0;
      }
      goto LABEL_2;
    }
  }
  return 0;
}


// CheckCliff  (line 2129, @0x0000000002ed97d0, libserver.so)  // inlines: AddDirectionVector, CGameTrace, RnCollisionAttr_t, Vector
// calls: CGameTrace::Init, TraceAdjacentNode
// callers: CNavGeneratorAAQuad::AddNode
bool __fastcall CheckCliff(const Vector *const vFromPos, NavDirType dir, bool bExhaustive)
{
  float y; // xmm1_4
  float x; // xmm0_4
  bool result; // al
  float v9; // xmm0_4
  Vector toPos; // [rsp+0h] [rbp-E0h] BYREF
  trace_t trace; // [rsp+10h] [rbp-D0h] BYREF

  y = vFromPos->y;
  x = vFromPos->x;
  toPos.z = vFromPos->z;
  toPos.y = y;
  toPos.x = x;
  if ( dir == NavDirType::EAST )
  {
    toPos.x = x + CNavGeneratorBase::sm_flGenerationStepSize;
  }
  else if ( dir <= NavDirType::EAST )
  {
    if ( dir == NavDirType::NORTH )
      toPos.y = y - CNavGeneratorBase::sm_flGenerationStepSize;
  }
  else if ( dir == NavDirType::SOUTH )
  {
    toPos.y = y + CNavGeneratorBase::sm_flGenerationStepSize;
  }
  else if ( dir == NavDirType::WEST )
  {
    toPos.x = x - CNavGeneratorBase::sm_flGenerationStepSize;
  }
  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  result = TraceAdjacentNode(0, vFromPos, &toPos, &trace, 4000.0);
  if ( result )
  {
    if ( trace.startsolid )
    {
      return 0;
    }
    else
    {
      v9 = vFromPos->z - trace.endpos.z;
      if ( v9 <= 300.0 )
      {
        result = 0;
        if ( (dir - 1) <= 1 && fabs(v9) < 18.0 && bExhaustive )
          return CheckCliff(&trace.endpos, dir, 0);
      }
    }
  }
  return result;
}


// CNavGeneratorAAQuad::AddNode  (line 2159, @0x0000000002ed9980, libserver.so)  // inlines: GetPosition, MarkAsVisited, Max<float>, NavDirOpposite
// calls: CNavNode::GetNode, CNavNode::ConnectTo, CNavNode::CheckCrouch, CheckCliff, operator new, CNavNode::CNavNode, operator delete, _Unwind_Resume
// callers: CNavGeneratorAAQuad::GenerationSampleStep
CNavNode *__fastcall CNavGeneratorAAQuad::AddNode(
        CNavGeneratorAAQuad *const this,
        const Vector *const vDestPos,
        const Vector *const vNormal,
        NavDirType dir,
        CNavNode *pSource,
        float flObstacleHeight,
        float flObstacleStartDist,
        float flObstacleEndDist)
{
  char v8; // r15
  CNavNode *Node; // rbx
  float v13; // xmm0_4
  NavDirType v14; // r14d
  NavDirType v15; // r12d
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  Vector vFromPos; // [rsp+20h] [rbp-40h] BYREF

  v8 = 0;
  Node = CNavNode::GetNode(vDestPos);
  if ( Node == 0 )
  {
    Node = operator new(0xB8u);
    CNavNode::CNavNode(Node, vDestPos, vNormal, pSource);
    v8 = 1;
  }
  CNavNode::ConnectTo(pSource, Node, dir, flObstacleHeight, flObstacleStartDist, flObstacleEndDist);
  v13 = pSource->m_pos.z - vDestPos->z;
  if ( fabs(v13) < 50.0 )
  {
    if ( flObstacleHeight > 0.0 )
      flObstacleHeight = fmaxf(v13 + flObstacleHeight, 0.0);
    v14 = (dir + 2) % 4;
    CNavNode::ConnectTo(
      Node,
      pSource,
      v14,
      flObstacleHeight,
      CNavGeneratorBase::sm_flGenerationStepSize - flObstacleEndDist,
      CNavGeneratorBase::sm_flGenerationStepSize - flObstacleStartDist);
    Node->m_visited |= 1 << v14;
  }
  if ( v8 != 0 )
    this->m_currentNode = Node;
  v15 = NavDirType::NORTH;
  CNavNode::CheckCrouch(Node);
  while ( 1 )
  {
    y = Node->m_pos.y;
    z = Node->m_pos.z;
    vFromPos.x = Node->m_pos.x;
    vFromPos.y = y;
    vFromPos.z = z;
    if ( CheckCliff(&vFromPos, v15, 1) )
      break;
    if ( ++v15 == NavDirType::NUM_DIRECTIONS )
      return Node;
  }
  Node->m_attributeFlags |= 0x8000u;
  return Node;
}


// CNavGeneratorAAQuad::CreateNavAreasFromSamples  (line 2236, @0x0000000002ee99d0, libserver.so)  // inlines: AddToSet, AddToTail, ClearSet, CopyConstruct<CNavArea*>, Element, GrowMemory, RemoveAll, operator[]
// calls: CNavGeneratorAAQuad::CreateNavAreasFromNodes, CNavGenerator::PostCreateNavAreas, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow
void __fastcall CNavGeneratorAAQuad::CreateNavAreasFromSamples(CNavGeneratorAAQuad *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  CNavMesh *m_rNavMesh; // r15
  CNavArea *v6; // r13
  __int64 m_Size; // rax
  int v8; // ecx
  CNavArea **m_pMemory; // rdx
  CNavArea **v10; // rax
  int v11; // [rsp+4h] [rbp-4Ch]
  CNavArea *v12; // [rsp+18h] [rbp-38h] BYREF

  if ( this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
  {
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    m_rNavAreas = this->m_rNavAreas;
    if ( m_rNavAreas->m_Size != 0 )
    {
      v3 = 0;
      v4 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
      while ( 1 )
      {
        m_rNavMesh = this->m_rNavMesh;
        v12 = m_rNavAreas->m_Memory.m_pMemory[v3 / 8];
        v6 = v12;
        if ( v12 == 0
          || CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &v12) != -1 )
        {
          goto LABEL_5;
        }
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        v8 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
          CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v8 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
          m_Size = v11;
        }
        m_pMemory = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory;
        m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v8 + 1;
        v10 = &m_pMemory[m_Size];
        if ( v10 != 0 )
        {
          v3 += 8LL;
          *v10 = v6;
          if ( v3 == v4 )
            break;
        }
        else
        {
LABEL_5:
          v3 += 8LL;
          if ( v3 == v4 )
            break;
        }
        m_rNavAreas = this->m_rNavAreas;
      }
    }
    this->m_bIncrementalSelection = 1;
  }
  CNavGeneratorAAQuad::CreateNavAreasFromNodes(this);
  CNavGenerator::PostCreateNavAreas(this);
}


// CNavGeneratorAAQuad::CreateNavAreasFromNodes  (line 2256, @0x0000000002edd400, libserver.so)  // inlines: GetFirst, GetInt, GetListLength, GetSeconds, LeafCodeInfo_t, PLAT_CPU_TIME, Sample, Start
// calls: CNavGeneratorAAQuad::TestArea, CNavGeneratorAAQuad::BuildArea, LoggingSystem_IsChannelEnabled, Plat_GetCPUFrequency, LoggingSystem_Log, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CNavGeneratorAAQuad::CreateNavAreasFromSamples
// strings: "Took %0.2f seconds to create nav areas from nodes", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/nav_gener, "CreateNavAreasFromNodes", "Generate: Error - Data corrupt.\n"
void __fastcall CNavGeneratorAAQuad::CreateNavAreasFromNodes(CNavGeneratorAAQuad *const this)
{
  unsigned __int64 v1; // rax
  int m_nValue; // ebx
  int v4; // r12d
  int v5; // r14d
  CNavNode *i; // r15
  int v7; // eax
  __int64 CPUFrequency; // rax
  double v9; // xmm0_8
  double v10; // xmm1_8
  __int64 v11; // [rsp+0h] [rbp-60h]
  __int64 v12; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v13; // [rsp+10h] [rbp-50h] BYREF

  v1 = __rdtsc();
  v12 = v1;
  v11 = HIDWORD(v1);
  m_nValue = nav_area_max_size.m_pParent->m_Value.m_nValue;
  v4 = m_nValue;
  v5 = CNavNode::m_listLength;
  if ( CNavNode::m_listLength > 0 )
  {
    do
    {
      for ( i = CNavNode::m_list; i != 0; v5 -= v7 )
      {
        while ( i->m_isCovered || !CNavGeneratorAAQuad::TestArea(this, i, m_nValue, v4) )
        {
          i = i->m_next;
          if ( i == 0 )
            goto LABEL_9;
        }
        v7 = CNavGeneratorAAQuad::BuildArea(this, i, m_nValue, v4);
        if ( v7 < 0 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v13.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/nav_generate.cpp";
            v13.m_szFunction = "CreateNavAreasFromNodes";
            v13.m_nLine = 2280;
            LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v13, "Generate: Error - Data corrupt.\n");
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
          JUMPOUT(0x2EDD5D7);
        }
        i = i->m_next;
      }
LABEL_9:
      if ( m_nValue < v4 )
        --v4;
      else
        --m_nValue;
    }
    while ( m_nValue > 0 && v4 > 0 && v5 > 0 );
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    CPUFrequency = Plat_GetCPUFrequency();
    if ( (v12 | (v11 << 32)) < 0 )
    {
      v9 = (v12 & 1 | ((v12 | (v11 << 32)) >> 1)) + (v12 & 1 | ((v12 | (v11 << 32)) >> 1));
      if ( CPUFrequency >= 0 )
        goto LABEL_19;
    }
    else
    {
      v9 = v12;
      if ( CPUFrequency >= 0 )
      {
LABEL_19:
        v10 = CPUFrequency;
LABEL_20:
        LoggingSystem_Log(LOG_NAV, 1, "Took %0.2f seconds to create nav areas from nodes", v9 / v10);
        return;
      }
    }
    v10 = (CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1));
    goto LABEL_20;
  }
}


// CNavGeneratorAAQuad::PostCreateNavAreasCustomStep  (line 2302, @0x0000000002eef5e0, libserver.so)  // inlines: End, FixUpGeneratedAreas, GetBool, GetInt, GetMicroseconds64, GetMilliseconds64, GetSeconds, HandleObstacleTopAreas, PLAT_CPU_TIME, Plat_TickDiffMicroSec, Plat_TickDiffMilliSec, Sample, Start
// calls: CNavGeneratorAAQuad::MergeGeneratedAreas, Plat_GetCPUFrequency, LoggingSystem_IsChannelEnabled, CNavGenerator::SplitAreasUnderOverhangs, CNavGeneratorAAQuad::SquareUpAreas, CNavGenerator::MarkStairAreas, CNavGeneratorAAQuad::FixCornerOnCornerAreas, CNavGeneratorAAQuad::FixConnections, CNavLadder::ConnectGeneratedLadder, CNavGenerator::StichAndRemoveJumpAreas, LoggingSystem_Log, CNavGeneratorAAQuad::HandleObstacleTopAreas
// strings: "StichAndRemoveJumpAreas()", "%s took %0.2f seconds\n", "MarkStairAreas()", "%s took %llu miliseconds\n", "SquareUpAreas()", "HandleObstacleTopAreas()" (10 total)
void __fastcall CNavGeneratorAAQuad::PostCreateNavAreasCustomStep(CNavGeneratorAAQuad *const this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r12
  __int64 CPUFrequency; // rax
  double v7; // xmm0_8
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  double v13; // xmm0_8
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  double v19; // xmm0_8
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  double v25; // xmm0_8
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  double v31; // xmm0_8
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  double v37; // xmm0_8
  float v38; // xmm1_4
  const NavLadderVector *m_rNavLadders; // rax
  __int64 v40; // r12
  int v41; // ebx
  CNavLadder *v42; // rdi
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // r12
  __int64 v47; // rax
  double v48; // xmm0_8
  __int64 v49; // rax
  double v50; // xmm0_8
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  double v64; // xmm0_8
  __int64 v65; // rax
  double v66; // xmm0_8
  __int64 v67; // rax
  double v68; // xmm0_8
  __int64 v69; // rax
  double v70; // xmm0_8
  __int64 v71; // rax
  double v72; // xmm0_8
  __int64 v73; // rax
  double v74; // xmm0_8
  double v75; // xmm7_8
  double v76; // xmm6_8
  double v77; // xmm1_8
  double v78; // xmm3_8
  double v79; // xmm6_8
  double v80; // xmm5_8
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  double v89; // xmm3_8
  unsigned __int64 v90; // rax
  double v91; // [rsp+8h] [rbp-28h]
  double v92; // [rsp+8h] [rbp-28h]
  double v93; // [rsp+8h] [rbp-28h]
  double v94; // [rsp+8h] [rbp-28h]
  double v95; // [rsp+8h] [rbp-28h]
  double v96; // [rsp+8h] [rbp-28h]
  double v97; // [rsp+8h] [rbp-28h]

  v2 = __rdtsc();
  CNavGeneratorAAQuad::MergeGeneratedAreas(this);
  v3 = __rdtsc();
  v4 = (v3 | (HIDWORD(v3) << 32)) - v2;
  v5 = v4;
  if ( v4 < 0 )
  {
    v76 = (v4 & 1 | (v4 >> 1));
    v91 = v76 + v76;
    CPUFrequency = Plat_GetCPUFrequency();
    if ( CPUFrequency >= 0 )
      goto LABEL_3;
  }
  else
  {
    v91 = (v3 - v2);
    CPUFrequency = Plat_GetCPUFrequency();
    if ( CPUFrequency >= 0 )
    {
LABEL_3:
      v7 = CPUFrequency;
      goto LABEL_4;
    }
  }
  v7 = (CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1));
LABEL_4:
  if ( v91 / v7 < 1.0 )
  {
    v61 = Plat_GetCPUFrequency();
    if ( -1000LL * (v5 / v61) == 1000 * (v5 % v61) / v61 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v81 = Plat_GetCPUFrequency();
        LoggingSystem_Log(
          LOG_NAV,
          1,
          "%s took %llu microseconds\n",
          "MergeGeneratedAreas()",
          1000000 * (v5 % v81) / v81 + 1000000 * (v5 / v81));
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v62 = Plat_GetCPUFrequency();
      LoggingSystem_Log(
        LOG_NAV,
        1,
        "%s took %llu miliseconds\n",
        "MergeGeneratedAreas()",
        1000 * (v5 % v62) / v62 + 1000 * (v5 / v62));
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    v63 = Plat_GetCPUFrequency();
    if ( v63 < 0 )
      v64 = (v63 & 1 | (v63 >> 1)) + (v63 & 1 | (v63 >> 1));
    else
      v64 = v63;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "MergeGeneratedAreas()", v91 / v64);
  }
  v8 = __rdtsc();
  CNavGenerator::SplitAreasUnderOverhangs(this);
  v9 = __rdtsc();
  v10 = (v9 | (HIDWORD(v9) << 32)) - v8;
  v11 = v10;
  if ( v10 < 0 )
  {
    v75 = (v10 & 1 | (v10 >> 1));
    v92 = v75 + v75;
    v12 = Plat_GetCPUFrequency();
    if ( v12 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v92 = v10;
    v12 = Plat_GetCPUFrequency();
    if ( v12 >= 0 )
    {
LABEL_8:
      v13 = v12;
      goto LABEL_9;
    }
  }
  v13 = (v12 & 1 | (v12 >> 1)) + (v12 & 1 | (v12 >> 1));
LABEL_9:
  if ( v92 / v13 < 1.0 )
  {
    v59 = Plat_GetCPUFrequency();
    if ( -1000LL * (v11 / v59) == 1000 * (v11 % v59) / v59 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v82 = Plat_GetCPUFrequency();
        LoggingSystem_Log(
          LOG_NAV,
          1,
          "%s took %llu microseconds\n",
          "SplitAreasUnderOverhangs()",
          1000000 * (v11 % v82) / v82 + 1000000 * (v11 / v82));
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v60 = Plat_GetCPUFrequency();
      LoggingSystem_Log(
        LOG_NAV,
        1,
        "%s took %llu miliseconds\n",
        "SplitAreasUnderOverhangs()",
        1000 * (v11 % v60) / v60 + 1000 * (v11 / v60));
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    v67 = Plat_GetCPUFrequency();
    if ( v67 < 0 )
      v68 = (v67 & 1 | (v67 >> 1)) + (v67 & 1 | (v67 >> 1));
    else
      v68 = v67;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "SplitAreasUnderOverhangs()", v92 / v68);
  }
  v14 = __rdtsc();
  CNavGeneratorAAQuad::SquareUpAreas(this);
  v15 = __rdtsc();
  v16 = (v15 | (HIDWORD(v15) << 32)) - v14;
  v17 = v16;
  if ( v16 < 0 )
  {
    v79 = (v16 & 1 | (v16 >> 1));
    v93 = v79 + v79;
  }
  else
  {
    v93 = v16;
  }
  v18 = Plat_GetCPUFrequency();
  if ( v18 < 0 )
    v19 = (v18 & 1 | (v18 >> 1)) + (v18 & 1 | (v18 >> 1));
  else
    v19 = v18;
  if ( v93 / v19 < 1.0 )
  {
    v53 = Plat_GetCPUFrequency();
    if ( -1000LL * (v17 / v53) == 1000 * (v17 % v53) / v53 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v85 = Plat_GetCPUFrequency();
        LoggingSystem_Log(
          LOG_NAV,
          1,
          "%s took %llu microseconds\n",
          "SquareUpAreas()",
          1000000 * (v17 % v85) / v85 + 1000000 * (v17 / v85));
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v54 = Plat_GetCPUFrequency();
      LoggingSystem_Log(
        LOG_NAV,
        1,
        "%s took %llu miliseconds\n",
        "SquareUpAreas()",
        1000 * (v17 % v54) / v54 + 1000 * (v17 / v54));
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    v71 = Plat_GetCPUFrequency();
    if ( v71 < 0 )
      v72 = (v71 & 1 | (v71 >> 1)) + (v71 & 1 | (v71 >> 1));
    else
      v72 = v71;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "SquareUpAreas()", v93 / v72);
  }
  v20 = __rdtsc();
  CNavGenerator::MarkStairAreas(this);
  v21 = __rdtsc();
  v22 = (v21 | (HIDWORD(v21) << 32)) - v20;
  v23 = v22;
  if ( v22 < 0 )
  {
    v77 = (v22 & 1 | (v22 >> 1));
    v94 = v77 + v77;
    v24 = Plat_GetCPUFrequency();
    if ( v24 >= 0 )
      goto LABEL_19;
  }
  else
  {
    v94 = v22;
    v24 = Plat_GetCPUFrequency();
    if ( v24 >= 0 )
    {
LABEL_19:
      v25 = v24;
      goto LABEL_20;
    }
  }
  v25 = (v24 & 1 | (v24 >> 1)) + (v24 & 1 | (v24 >> 1));
LABEL_20:
  if ( v94 / v25 < 1.0 )
  {
    v51 = Plat_GetCPUFrequency();
    if ( -1000LL * (v23 / v51) == 1000 * (v23 % v51) / v51 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v86 = Plat_GetCPUFrequency();
        LoggingSystem_Log(
          LOG_NAV,
          1,
          "%s took %llu microseconds\n",
          "MarkStairAreas()",
          1000000 * (v23 % v86) / v86 + 1000000 * (v23 / v86));
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v52 = Plat_GetCPUFrequency();
      LoggingSystem_Log(
        LOG_NAV,
        1,
        "%s took %llu miliseconds\n",
        "MarkStairAreas()",
        1000 * (v23 % v52) / v52 + 1000 * (v23 / v52));
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    v73 = Plat_GetCPUFrequency();
    if ( v73 < 0 )
      v74 = (v73 & 1 | (v73 >> 1)) + (v73 & 1 | (v73 >> 1));
    else
      v74 = v73;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "MarkStairAreas()", v94 / v74);
  }
  if ( nav_generate_remove_jump_areas.m_pParent->m_Value.m_nValue != 0 )
  {
    v43 = __rdtsc();
    CNavGenerator::StichAndRemoveJumpAreas(this);
    v44 = __rdtsc();
    v45 = (v44 | (HIDWORD(v44) << 32)) - v43;
    v46 = v45;
    if ( v45 < 0 )
    {
      v89 = (v45 & 1 | (v45 >> 1));
      v97 = v89 + v89;
    }
    else
    {
      v97 = v45;
    }
    v47 = Plat_GetCPUFrequency();
    if ( v47 < 0 )
      v48 = (v47 & 1 | (v47 >> 1)) + (v47 & 1 | (v47 >> 1));
    else
      v48 = v47;
    if ( v97 / v48 < 1.0 )
    {
      v87 = Plat_GetCPUFrequency();
      if ( -1000LL * (v46 / v87) == 1000 * (v46 % v87) / v87 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
        {
          v90 = Plat_GetCPUFrequency();
          LoggingSystem_Log(
            LOG_NAV,
            1,
            "%s took %llu microseconds\n",
            "StichAndRemoveJumpAreas()",
            1000000 * (v46 % v90) / v90 + 1000000 * (v46 / v90));
        }
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v88 = Plat_GetCPUFrequency();
        LoggingSystem_Log(
          LOG_NAV,
          1,
          "%s took %llu miliseconds\n",
          "StichAndRemoveJumpAreas()",
          1000 * (v46 % v88) / v88 + 1000 * (v46 / v88));
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v49 = Plat_GetCPUFrequency();
      if ( v49 < 0 )
        v50 = (v49 & 1 | (v49 >> 1)) + (v49 & 1 | (v49 >> 1));
      else
        v50 = v49;
      LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "StichAndRemoveJumpAreas()", v97 / v50);
    }
  }
  v26 = __rdtsc();
  if ( nav_generate_fencetops.m_pParent->m_Value.m_nValue != 0 )
    CNavGeneratorAAQuad::HandleObstacleTopAreas(this);
  v27 = __rdtsc();
  v28 = (v27 | (HIDWORD(v27) << 32)) - v26;
  v29 = v28;
  if ( v28 < 0 )
  {
    v78 = (v28 & 1 | (v28 >> 1));
    v95 = v78 + v78;
    v30 = Plat_GetCPUFrequency();
    if ( v30 >= 0 )
      goto LABEL_27;
  }
  else
  {
    v95 = v28;
    v30 = Plat_GetCPUFrequency();
    if ( v30 >= 0 )
    {
LABEL_27:
      v31 = v30;
      goto LABEL_28;
    }
  }
  v31 = (v30 & 1 | (v30 >> 1)) + (v30 & 1 | (v30 >> 1));
LABEL_28:
  if ( v95 / v31 < 1.0 )
  {
    v55 = Plat_GetCPUFrequency();
    if ( -1000LL * (v29 / v55) == 1000 * (v29 % v55) / v55 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v84 = Plat_GetCPUFrequency();
        LoggingSystem_Log(
          LOG_NAV,
          1,
          "%s took %llu microseconds\n",
          "HandleObstacleTopAreas()",
          1000000 * (v29 % v84) / v84 + 1000000 * (v29 / v84));
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v56 = Plat_GetCPUFrequency();
      LoggingSystem_Log(
        LOG_NAV,
        1,
        "%s took %llu miliseconds\n",
        "HandleObstacleTopAreas()",
        1000 * (v29 % v56) / v56 + 1000 * (v29 / v56));
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    v69 = Plat_GetCPUFrequency();
    if ( v69 < 0 )
      v70 = (v69 & 1 | (v69 >> 1)) + (v69 & 1 | (v69 >> 1));
    else
      v70 = v69;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "HandleObstacleTopAreas()", v95 / v70);
  }
  v32 = __rdtsc();
  CNavGeneratorAAQuad::FixCornerOnCornerAreas(this);
  CNavGeneratorAAQuad::FixConnections(this);
  v33 = __rdtsc();
  v34 = (v33 | (HIDWORD(v33) << 32)) - v32;
  v35 = v34;
  if ( v34 < 0 )
  {
    v80 = (v34 & 1 | (v34 >> 1));
    v96 = v80 + v80;
    v36 = Plat_GetCPUFrequency();
    if ( v36 >= 0 )
      goto LABEL_32;
  }
  else
  {
    v96 = v34;
    v36 = Plat_GetCPUFrequency();
    if ( v36 >= 0 )
    {
LABEL_32:
      v37 = v36;
      goto LABEL_33;
    }
  }
  v37 = (v36 & 1 | (v36 >> 1)) + (v36 & 1 | (v36 >> 1));
LABEL_33:
  if ( v96 / v37 < 1.0 )
  {
    v57 = Plat_GetCPUFrequency();
    if ( -1000LL * (v35 / v57) == 1000 * (v35 % v57) / v57 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
      {
        v83 = Plat_GetCPUFrequency();
        LoggingSystem_Log(
          LOG_NAV,
          1,
          "%s took %llu microseconds\n",
          "FixUpGeneratedAreas()",
          1000000 * (v35 % v83) / v83 + 1000000 * (v35 / v83));
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      v58 = Plat_GetCPUFrequency();
      LoggingSystem_Log(
        LOG_NAV,
        1,
        "%s took %llu miliseconds\n",
        "FixUpGeneratedAreas()",
        1000 * (v35 % v58) / v58 + 1000 * (v35 / v58));
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    v65 = Plat_GetCPUFrequency();
    if ( v65 < 0 )
      v66 = (v65 & 1 | (v65 >> 1)) + (v65 & 1 | (v65 >> 1));
    else
      v66 = v65;
    LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "FixUpGeneratedAreas()", v96 / v66);
  }
  if ( this->m_generationMode != CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
  {
    m_rNavLadders = this->m_rNavLadders;
    if ( m_rNavLadders->m_Size > 0 )
    {
      v40 = 0;
      v41 = 0;
      do
      {
        ++v41;
        v42 = m_rNavLadders->m_Memory.m_pMemory[v40++];
        CNavLadder::ConnectGeneratedLadder(v42, v38);
        m_rNavLadders = this->m_rNavLadders;
      }
      while ( m_rNavLadders->m_Size > v41 );
    }
  }
}


// CNavGeneratorAAQuad::FindClosestNode  (line 2338, @0x0000000002eeece0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DistToSqr, LengthSqr, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CNavGeneratorAAQuad::AreaHasNodes, CNavGeneratorAAQuad::GetNodes, CUtlMemory<CNavNode*, int>::Purge, _Unwind_Resume
// callers: CNavGeneratorAAQuad::FixConnections
CNavNode *__fastcall CNavGeneratorAAQuad::FindClosestNode(
        CNavGeneratorAAQuad *const this,
        const CNavArea *const rArea,
        const Vector *const vPos,
        NavDirType dir)
{
  __int64 v8; // rsi
  CNavNode *result; // rax
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v13; // xmm3_4
  CNavNode *v14; // rdx
  CNavNode *v15; // [rsp+8h] [rbp-58h]
  CUtlVector<CNavNode*,CUtlMemory<CNavNode*,int> > nodes; // [rsp+10h] [rbp-50h] BYREF

  if ( !CNavGeneratorAAQuad::AreaHasNodes(this, rArea) )
    return 0;
  nodes.m_Size = 0;
  nodes.m_Memory.m_pMemory = 0;
  nodes.m_Memory.m_nAllocationCount = 0;
  nodes.m_Memory.m_nGrowSize = 0;
  CNavGeneratorAAQuad::GetNodes(this, rArea, dir, &nodes);
  if ( nodes.m_Size <= 0 )
  {
    result = 0;
  }
  else
  {
    v8 = 0;
    result = 0;
    v13 = 3.4028235e38;
    do
    {
      while ( 1 )
      {
        v14 = nodes.m_Memory.m_pMemory[v8];
        z = vPos->z;
        y = vPos->y;
        x = vPos->x;
        if ( v13 > ((((x - v14->m_pos.x) * (x - v14->m_pos.x)) + ((y - v14->m_pos.y) * (y - v14->m_pos.y)))
                  + ((z - v14->m_pos.z) * (z - v14->m_pos.z))) )
          break;
        if ( nodes.m_Size <= ++v8 )
          goto LABEL_7;
      }
      ++v8;
      v13 = (((x - v14->m_pos.x) * (x - v14->m_pos.x)) + ((y - v14->m_pos.y) * (y - v14->m_pos.y)))
          + ((z - v14->m_pos.z) * (z - v14->m_pos.z));
      result = v14;
    }
    while ( nodes.m_Size > v8 );
  }
LABEL_7:
  nodes.m_Size = 0;
  if ( (nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v15 = result;
    CUtlMemory<CNavNode *,int>::Purge(&nodes.m_Memory);
    result = v15;
    if ( (nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CNavNode *,int>::Purge(&nodes.m_Memory);
      return v15;
    }
  }
  return result;
}


// CNavGeneratorAAQuad::GetNodes  (line 2366, @0x0000000002eeeb70, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavNode*>, Element, GetConnectedNode, GrowMemory, RemoveAll, operator[]
// calls: CUtlMemory<CNavNode*, int>::Grow
// callers: CNavGeneratorAAQuad::FindClosestNode
void __fastcall CNavGeneratorAAQuad::GetNodes(
        CNavGeneratorAAQuad *const this,
        const CNavArea *const rArea,
        NavDirType dir,
        CUtlVector<CNavNode*,CUtlMemory<CNavNode*,int> > *nodes)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 m_Size; // rbx
  CNavNode **v9; // rax
  __int64 v10; // rax
  CNavNode *v11; // rbx
  CNavNode **v12; // r15
  CNavNode *v13; // r13
  CNavNode **v14; // rax
  __int64 v15; // r13
  int v16; // eax

  if ( nodes != 0 )
  {
    nodes->m_Size = 0;
    if ( dir == NavDirType::EAST )
    {
      v5 = 1;
      v6 = 2;
      v7 = 2;
    }
    else if ( dir <= NavDirType::EAST )
    {
      if ( dir != NavDirType::NORTH )
        return;
      v5 = 0;
      v6 = 1;
      v7 = 1;
    }
    else if ( dir == NavDirType::SOUTH )
    {
      v5 = 3;
      v6 = 1;
      v7 = 2;
    }
    else
    {
      if ( dir != NavDirType::WEST )
        return;
      v5 = 0;
      v6 = 2;
      v7 = 3;
    }
    v10 = (*(this->_vptr_CNavGeneratorBase + 14))(this, rArea);
    v11 = *(v10 + 8 * v5);
    if ( v11 != 0 )
    {
      v12 = (v10 + 8 * v7);
      v13 = *v12;
      if ( v11 == *v12 )
      {
LABEL_7:
        m_Size = nodes->m_Size;
        if ( m_Size == nodes->m_Memory.m_nAllocationCount )
          CUtlMemory<CNavNode *,int>::Grow(&nodes->m_Memory, 1);
        ++nodes->m_Size;
        v9 = &nodes->m_Memory.m_pMemory[m_Size];
        if ( v9 != 0 )
          *v9 = v13;
      }
      else
      {
        while ( 1 )
        {
          v15 = nodes->m_Size;
          v16 = nodes->m_Size;
          if ( v15 == nodes->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CNavNode *,int>::Grow(&nodes->m_Memory, 1);
            v16 = nodes->m_Size;
          }
          nodes->m_Size = v16 + 1;
          v14 = &nodes->m_Memory.m_pMemory[v15];
          if ( v14 != 0 )
            *v14 = v11;
          v11 = v11->m_to[v6];
          if ( v11 == 0 )
            break;
          v13 = *v12;
          if ( *v12 == v11 )
            goto LABEL_7;
        }
      }
    }
  }
}


// CNavGeneratorAAQuad::BuildArea  (line 2422, @0x0000000002edd180, libserver.so)  // inlines: AddAttributes, AddFlags, Cover, GetConnectedNode, LeafCodeInfo_t, RemoveAttributes, RemoveFlags
// calls: CNavGeneratorAAQuad::BuildAreaFromNodes, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CNavGeneratorAAQuad::CreateNavAreasFromNodes
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/nav_gener, "BuildArea", "BuildArea: Out of memory.\n", "BuildArea - nullptr node.\n"
int __fastcall CNavGeneratorAAQuad::BuildArea(
        CNavGeneratorAAQuad *const this,
        CNavNode *pNode,
        int nWidth,
        int nHeight)
{
  CNavNode *v4; // r8
  CNavNode *v6; // rbx
  int v7; // eax
  CNavNode *v8; // r12
  int v9; // r13d
  int i; // r10d
  __int64 v11; // rcx
  CNavNode *v12; // r15
  int j; // eax
  CNavArea *v14; // rax
  CNavGeneratorAAQuad *v15; // rdi
  uint64 m_Flags; // rdx
  CNavArea *pAreaa; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v20; // [rsp+10h] [rbp-50h] BYREF

  v6 = pNode;
  if ( nHeight <= 0 )
  {
    v11 = 1;
    v9 = 0;
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      v4 = v6;
      if ( nWidth > 0 )
      {
        for ( i = 0; i != nWidth; ++i )
        {
          v4->m_isCovered = 1;
          v4 = v4->m_to[1];
        }
        v9 += nWidth;
      }
      v6 = v6->m_to[2];
      if ( v7 == 0 )
        v8 = v4;
      ++v7;
    }
    while ( v7 != nHeight );
    LOBYTE(nHeight) = v8 == 0;
    LOBYTE(v7) = pNode == 0;
    v11 = v7 | nHeight;
  }
  v12 = v6;
  if ( nWidth > 0 )
  {
    for ( j = 0; j != nWidth; ++j )
      v12 = v12->m_to[1];
  }
  if ( v11 != 0 || v12 == 0 || v6 == 0 )
    goto LABEL_38;
  v14 = (*(this->m_rNavMesh->_vptr_CNavMesh + 4))(this->m_rNavMesh, pNode, nWidth, v11, v4);
  if ( v14 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v20.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/nav_generate.cpp";
      v20.m_szFunction = "BuildArea";
      v20.m_nLine = 2470;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v20, "BuildArea: Out of memory.\n");
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_38:
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v20.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/nav_generate.cpp";
        v20.m_szFunction = "BuildArea";
        v20.m_nLine = 2463;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v20, "BuildArea - nullptr node.\n");
      }
    }
  }
  v15 = this;
  pAreaa = v14;
  v14->m_AreaAttributes.m_Flags = pNode->m_attributeFlags;
  CNavGeneratorAAQuad::BuildAreaFromNodes(v15, v14, pNode, v8, v12, v6);
  if ( pNode->m_obstacleHeight[2] > 18.0
    || pNode->m_obstacleHeight[1] > 18.0
    || v8->m_obstacleHeight[3] > 18.0
    || v8->m_obstacleHeight[2] > 18.0
    || v12->m_obstacleHeight[0] > 18.0
    || v12->m_obstacleHeight[3] > 18.0
    || v6->m_obstacleHeight[1] > 18.0
    || v6->m_obstacleHeight[0] > 18.0 )
  {
    m_Flags = pAreaa->m_AreaAttributes.m_Flags;
    BYTE1(m_Flags) |= 0x20u;
    pAreaa->m_AreaAttributes.m_Flags = m_Flags;
  }
  else
  {
    m_Flags = pAreaa->m_AreaAttributes.m_Flags;
  }
  if ( (m_Flags & 1) != 0 && !pNode->m_crouch[2] )
    pAreaa->m_AreaAttributes.m_Flags = m_Flags & 0xFFFFFFFFFFFFFFFELL;
  return v9;
}


// CNavGeneratorAAQuad::BuildAreaFromNodes  (line 2504, @0x0000000002edd080, libserver.so)  // inlines: GetPosition
// calls: CNavPoly::SetCorners, CNavGeneratorAAQuad::AssignNodes
// callers: CNavGeneratorAAQuad::BuildArea
void __fastcall CNavGeneratorAAQuad::BuildAreaFromNodes(
        CNavGeneratorAAQuad *const this,
        CNavArea *const rArea,
        CNavNode *nwNode,
        CNavNode *neNode,
        CNavNode *seNode,
        CNavNode *swNode)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v14; // xmm0_4
  vec_t v15; // xmm2_4
  vec_t v16; // xmm1_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm2_4
  vec_t v19; // xmm1_4
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  CNavNode **v22; // rax
  Vector nwCorner; // [rsp+10h] [rbp-70h] BYREF
  Vector neCorner; // [rsp+20h] [rbp-60h] BYREF
  Vector seCorner; // [rsp+30h] [rbp-50h] BYREF
  Vector swCorner; // [rsp+40h] [rbp-40h] BYREF

  z = swNode->m_pos.z;
  x = swNode->m_pos.x;
  swCorner.y = swNode->m_pos.y;
  swCorner.z = z;
  y = seNode->m_pos.y;
  v14 = seNode->m_pos.z;
  swCorner.x = x;
  v15 = seNode->m_pos.x;
  seCorner.y = y;
  v16 = neNode->m_pos.y;
  seCorner.z = v14;
  seCorner.x = v15;
  v17 = neNode->m_pos.z;
  v18 = neNode->m_pos.x;
  neCorner.y = v16;
  v19 = nwNode->m_pos.y;
  neCorner.z = v17;
  neCorner.x = v18;
  v20 = nwNode->m_pos.z;
  v21 = nwNode->m_pos.x;
  nwCorner.y = v19;
  nwCorner.z = v20;
  nwCorner.x = v21;
  CNavPoly::SetCorners(rArea, &nwCorner, &neCorner, &seCorner, &swCorner);
  v22 = (*(this->_vptr_CNavGeneratorBase + 14))(this, rArea);
  *v22 = nwNode;
  v22[1] = neNode;
  v22[2] = seNode;
  v22[3] = swNode;
  CNavGeneratorAAQuad::AssignNodes(this, rArea, rArea);
}


// CNavGeneratorAAQuad::CheckObstacles  (line 2521, @0x0000000002edab70, libserver.so)
// callers: CNavGeneratorAAQuad::TestArea
bool __fastcall CNavGeneratorAAQuad::CheckObstacles(
        CNavGeneratorAAQuad *const this,
        CNavNode *pNode,
        int nWidth,
        int nHeight,
        int x,
        int y)
{
  bool result; // al

  result = nWidth > 1 || nHeight > 1;
  if ( !result )
    return 1;
  if ( x > 0 && pNode->m_obstacleHeight[3] > 18.0
    || y > 0 && pNode->m_obstacleHeight[0] > 18.0
    || x < nWidth - 1 && pNode->m_obstacleHeight[1] > 18.0
    || y < nHeight - 1 && pNode->m_obstacleHeight[2] > 18.0 )
  {
    return 0;
  }
  return result;
}


// TestOverlapping::OverlapsExistingArea  (line 2587, @0x0000000002f08350, libserver.so)  // inlines: GetZ
// calls: CNavMesh::FindNavAreaOrLadderAlongRay
// callers: CNavGeneratorAAQuad::TestArea
// globals: g_NavHullAAQuad
bool __fastcall TestOverlapping::OverlapsExistingArea(TestOverlapping *const this)
{
  float v1; // xmm3_4
  float v3; // xmm0_4
  float v4; // xmm4_4
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float z; // xmm0_4
  bool result; // al
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float x; // [rsp+18h] [rbp-90h]
  float nw; // [rsp+1Ch] [rbp-8Ch]
  float y; // [rsp+38h] [rbp-70h]
  float v18; // [rsp+3Ch] [rbp-6Ch]
  CNavArea *pOverlappingArea; // [rsp+40h] [rbp-68h] BYREF
  CNavLadder *pOverlappingLadder; // [rsp+48h] [rbp-60h] BYREF
  Vector start; // [rsp+50h] [rbp-58h] BYREF
  Vector end; // [rsp+60h] [rbp-48h] BYREF

  v1 = 0.0;
  pOverlappingArea = 0;
  pOverlappingLadder = 0;
  start.z = this->m_nw.z;
  v3 = CNavGeneratorBase::sm_flGenerationStepSize;
  nw = this->m_nw.y;
  y = this->m_se.y;
  x = this->m_se.x;
  start.x = (0.5 * CNavGeneratorBase::sm_flGenerationStepSize) + this->m_nw.x;
  if ( x <= start.x )
    return 0;
  while ( 1 )
  {
    v4 = (0.5 * v3) + nw;
    start.y = v4;
    if ( y > v4 )
      break;
LABEL_17:
    start.x = start.x + v3;
    if ( x <= start.x )
      return 0;
  }
  while ( 1 )
  {
    v12 = this->m_nw.y;
    v13 = this->m_se.y - v12;
    v14 = this->m_se.x - this->m_nw.x;
    if ( v13 == v1 || v14 == v1 )
    {
      z = this->m_ne.z;
    }
    else
    {
      v5 = (v4 - v12) / v13;
      v6 = (start.x - this->m_nw.x) / v14;
      v7 = v1 > v6 ? v1 : fminf(1.0, v6);
      v8 = v1 > v5 ? v1 : fminf(1.0, v5);
      v9 = ((this->m_ne.z - this->m_nw.z) * v7) + this->m_nw.z;
      z = (((((this->m_se.z - this->m_sw.z) * v7) + this->m_sw.z) - v9) * v8) + v9;
    }
    v18 = v1;
    *&end.x = *&start.x;
    start.z = z - 18.0;
    end.z = z + 35.5;
    result = CNavMesh::FindNavAreaOrLadderAlongRay(
               TheNavMesh,
               &start,
               &end,
               &g_NavHullAAQuad,
               0,
               &pOverlappingArea,
               &pOverlappingLadder,
               0);
    v1 = v18;
    if ( result && pOverlappingArea != 0 )
      return result;
    v3 = CNavGeneratorBase::sm_flGenerationStepSize;
    v4 = start.y + CNavGeneratorBase::sm_flGenerationStepSize;
    start.y = v4;
    if ( y <= v4 )
      goto LABEL_17;
  }
}


// CNavGeneratorAAQuad::TestArea  (line 2626, @0x0000000002edac00, libserver.so)  // inlines: DotProduct, GetConnectedNode, GetNormal, GetPosition, IsBlockedInAnyDirection, TestOverlapping
// calls: CNavNode::IsClosedCell, CNavGeneratorAAQuad::CheckObstacles, CNavGeneratorAAQuad::TestNodeForValidCrouchArea, TestOverlapping::OverlapsExistingArea
// callers: CNavGeneratorAAQuad::CreateNavAreasFromNodes
bool __fastcall CNavGeneratorAAQuad::TestArea(CNavGeneratorAAQuad *const this, CNavNode *pNode, int width, int height)
{
  CNavNode *v4; // r12
  int v5; // ebx
  int v6; // r13d
  int v7; // r12d
  CNavNode *v8; // r14
  char v9; // al
  bool result; // al
  __int64 v11; // rdx
  bool v12; // cl
  __int64 v13; // rdx
  bool v14; // cl
  int v15; // r15d
  CNavNode *v16; // r12
  bool v17; // al
  int v18; // r14d
  CNavNode *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // r15d
  char v23; // r12
  int v24; // ebx
  CNavNode *v25; // r13
  vec_t v26; // xmm11_4
  CNavNode *v27; // rax
  vec_t v28; // xmm10_4
  vec_t v29; // xmm9_4
  int i; // edx
  vec_t v31; // xmm5_4
  vec_t v32; // xmm4_4
  vec_t v33; // xmm3_4
  int j; // eax
  vec_t v35; // xmm8_4
  vec_t v36; // xmm7_4
  vec_t v37; // xmm6_4
  int k; // eax
  vec_t v39; // xmm2_4
  vec_t v40; // xmm1_4
  vec_t v41; // xmm0_4
  int v43; // [rsp+Ch] [rbp-A4h]
  CNavNode *pHorizNode; // [rsp+10h] [rbp-A0h]
  float v45; // [rsp+1Ch] [rbp-94h]
  int v46; // [rsp+20h] [rbp-90h]
  float x; // [rsp+24h] [rbp-8Ch]
  float z; // [rsp+28h] [rbp-88h]
  CNavNode *v49; // [rsp+28h] [rbp-88h]
  float v51; // [rsp+38h] [rbp-78h]
  char bNodeCrouch; // [rsp+3Ch] [rbp-74h]
  int bNodeCroucha; // [rsp+3Ch] [rbp-74h]
  unsigned int y_0; // [rsp+40h] [rbp-70h]
  CNavNode *y_0a; // [rsp+40h] [rbp-70h]
  int y_0b; // [rsp+40h] [rbp-70h]
  int y; // [rsp+48h] [rbp-68h]
  CNavNode *ya; // [rsp+48h] [rbp-68h]
  TestOverlapping test; // [rsp+50h] [rbp-60h] BYREF

  v4 = pNode;
  x = pNode->m_normal.x;
  v51 = pNode->m_normal.y;
  z = pNode->m_normal.z;
  bNodeCrouch = pNode->m_crouch[2];
  if ( pNode->m_isBlocked[2] )
    return 0;
  v5 = width;
  v6 = height;
  y_0 = pNode->m_attributeFlags & 0xFFFFFFFE;
  v45 = (pNode->m_pos.z * z) + ((pNode->m_pos.y * v51) + (pNode->m_pos.x * x));
  if ( height > 0 )
  {
    pHorizNode = pNode;
    v46 = width - 1;
    y = 0;
    v43 = height - 1;
LABEL_4:
    if ( v5 <= 0 )
    {
      v16 = pHorizNode;
      v15 = 0;
      goto LABEL_51;
    }
    v7 = 0;
    v8 = pHorizNode;
    while ( 1 )
    {
      if ( v7 != 0 || y != 0 )
      {
        if ( v46 == v7 && y == 0 )
        {
LABEL_38:
          v9 = 1;
          if ( !v8->m_crouch[2] )
            v9 = v8->m_crouch[3];
          if ( v8->m_isBlocked[2] || v8->m_isBlocked[3] )
            return 0;
          goto LABEL_8;
        }
        if ( v7 == 0 && v43 == y )
        {
LABEL_23:
          v9 = 1;
          if ( !v8->m_crouch[2] )
            v9 = v8->m_crouch[1];
          if ( v8->m_isBlocked[2] || v8->m_isBlocked[1] )
            return 0;
          goto LABEL_8;
        }
        if ( v46 == v7 && v43 == y )
        {
          v13 = 0;
          v14 = 0;
          v9 = v8->m_attributeFlags & 1;
          do
          {
            if ( !v14 )
              v14 = v8->m_isBlocked[v13];
            ++v13;
          }
          while ( v13 != 4 );
          if ( v14 )
            return 0;
          goto LABEL_8;
        }
        if ( y == 0 )
          goto LABEL_38;
        if ( v43 == y )
        {
          v11 = 0;
          v12 = 0;
          v9 = v8->m_attributeFlags & 1;
          do
          {
            if ( !v12 )
              v12 = v8->m_isBlocked[v11];
            ++v11;
          }
          while ( v11 != 4 );
        }
        else if ( v46 == v7 )
        {
          v21 = 0;
          v12 = 0;
          v9 = v8->m_attributeFlags & 1;
          do
          {
            if ( !v12 )
              v12 = v8->m_isBlocked[v21];
            ++v21;
          }
          while ( v21 != 4 );
        }
        else
        {
          if ( v7 == 0 )
            goto LABEL_23;
          v20 = 0;
          v12 = 0;
          v9 = v8->m_attributeFlags & 1;
          do
          {
            if ( !v12 )
              v12 = v8->m_isBlocked[v20];
            ++v20;
          }
          while ( v20 != 4 );
        }
        if ( v12 )
          return 0;
      }
      else
      {
        v9 = v8->m_crouch[2];
        if ( v8->m_isBlocked[2] )
          return 0;
      }
LABEL_8:
      if ( bNodeCrouch != v9 )
        return 0;
      if ( (v8->m_attributeFlags & 0xFFFFFFFE) != y_0 )
        return 0;
      if ( v8->m_isCovered )
        return 0;
      if ( !CNavNode::IsClosedCell(v8) )
        return 0;
      if ( !CNavGeneratorAAQuad::CheckObstacles(this, v8, v5, v6, v7, y) )
        return 0;
      v8 = v8->m_to[1];
      if ( v8 == 0 )
        return 0;
      if ( (v6 > 1 || v5 > 1) && fabs((((x * v8->m_pos.x) + (v51 * v8->m_pos.y)) + (z * v8->m_pos.z)) - v45) > 5.0 )
        return 0;
      if ( ++v7 == v5 )
      {
        v15 = v7;
        v16 = v8;
LABEL_51:
        if ( CNavGeneratorAAQuad::CheckObstacles(this, v16, v5, v6, v15, y) )
        {
          pHorizNode = pHorizNode->m_to[2];
          if ( pHorizNode != 0 )
          {
            v17 = v6 > 1 || v5 > 1;
            if ( !v17
              || fabs((((x * pHorizNode->m_pos.x) + (v51 * pHorizNode->m_pos.y)) + (z * pHorizNode->m_pos.z)) - v45) <= 5.0 )
            {
              if ( ++y == v6 )
              {
                v4 = pNode;
                goto LABEL_57;
              }
              goto LABEL_4;
            }
          }
        }
        return 0;
      }
    }
  }
  pHorizNode = pNode;
  v17 = width > 1;
  y = 0;
LABEL_57:
  if ( v17 )
  {
    v18 = 0;
    if ( v5 > 0 )
    {
      y_0a = v4;
      v19 = pHorizNode;
      while ( CNavGeneratorAAQuad::CheckObstacles(this, v19, v5, v6, v18, y) )
      {
        v19 = v19->m_to[1];
        if ( v19 == 0 || fabs((((x * v19->m_pos.x) + (v51 * v19->m_pos.y)) + (z * v19->m_pos.z)) - v45) > 5.0 )
          break;
        if ( ++v18 == v5 )
        {
          pHorizNode = v19;
          v4 = y_0a;
          goto LABEL_80;
        }
      }
      return 0;
    }
LABEL_80:
    if ( !CNavGeneratorAAQuad::CheckObstacles(this, pHorizNode, v5, v6, v18, y) )
      return 0;
  }
  if ( v6 > 0 )
  {
    ya = v4;
    v22 = v5;
    v49 = v4;
    v23 = bNodeCrouch;
    y_0b = 0;
    bNodeCroucha = v6;
    while ( 1 )
    {
      v24 = 0;
      v25 = ya;
      if ( v22 > 0 )
        break;
LABEL_89:
      ++y_0b;
      ya = ya->m_to[2];
      if ( y_0b == bNodeCroucha )
      {
        v4 = v49;
        v5 = v22;
        v6 = bNodeCroucha;
        goto LABEL_91;
      }
    }
    while ( v23 == 0 || CNavGeneratorAAQuad::TestNodeForValidCrouchArea(this, v25) )
    {
      ++v24;
      v25 = v25->m_to[1];
      if ( v24 == v22 )
        goto LABEL_89;
    }
    return 0;
  }
LABEL_91:
  result = 1;
  if ( this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
  {
    v26 = v4->m_pos.x;
    v27 = v4;
    v28 = v4->m_pos.y;
    v29 = v4->m_pos.z;
    if ( v6 > 0 )
    {
      for ( i = 0; i != v6; ++i )
        v27 = v27->m_to[2];
    }
    v31 = v27->m_pos.x;
    v32 = v27->m_pos.y;
    v33 = v27->m_pos.z;
    if ( v5 > 0 )
    {
      for ( j = 0; j != v5; ++j )
        v4 = v4->m_to[1];
    }
    v35 = v4->m_pos.x;
    v36 = v4->m_pos.y;
    v37 = v4->m_pos.z;
    if ( v6 > 0 )
    {
      for ( k = 0; k != v6; ++k )
        v4 = v4->m_to[2];
    }
    v39 = v4->m_pos.x;
    test.m_nw.x = v26;
    v40 = v4->m_pos.y;
    test.m_nw.y = v28;
    v41 = v4->m_pos.z;
    test.m_nw.z = v29;
    test.m_ne.x = v35;
    test.m_ne.y = v36;
    test.m_ne.z = v37;
    test.m_sw.x = v31;
    test.m_sw.y = v32;
    test.m_sw.z = v33;
    test.m_se.x = v39;
    test.m_se.y = v40;
    test.m_se.z = v41;
    return !TestOverlapping::OverlapsExistingArea(&test);
  }
  return result;
}


// IsHeightDifferenceValid  (line 2891, @0x0000000002edb2d0, libserver.so)
bool __fastcall IsHeightDifferenceValid(float a1, float test, float other1, float other2, float other3)
{
  bool result; // al

  result = 1;
  if ( fabs(test - other1) <= 9.0 && fabs(test - other2) <= 9.0 && fabs(other1 - other2) <= 9.0 )
  {
    result = 0;
    if ( fabs(a1 - test) <= 18.0 && fabs(a1 - other1) <= 18.0 )
      return fabs(a1 - other2) <= 18.0;
  }
  return result;
}


// CNavGeneratorAAQuad::TestNodeForValidJumpArea  (line 2926, @0x0000000002edb370, libserver.so)
bool __fastcall CNavGeneratorAAQuad::TestNodeForValidJumpArea(CNavGeneratorAAQuad *const this, CNavNode *const rNode)
{
  return 1;
}


// CNavGeneratorAAQuad::FixUpGeneratedAreas  (line 2972, @0x0000000002eef5c0, libserver.so)
// calls: CNavGeneratorAAQuad::FixCornerOnCornerAreas, CNavGeneratorAAQuad::FixConnections
void __fastcall CNavGeneratorAAQuad::FixUpGeneratedAreas(CNavGeneratorAAQuad *const this)
{
  CNavGeneratorAAQuad::FixCornerOnCornerAreas(this);
  CNavGeneratorAAQuad::FixConnections(this);
}


// CNavGeneratorAAQuad::FixConnections  (line 2980, @0x0000000002eeee70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Count, Element, GetCorner, GetCornerTypesInDirection, GetPosition, GetVert, GrowMemory, NavDirOpposite, Purge, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CNavGeneratorAAQuad::AreaHasNodes, CNavPoly::ComputePortal_Old, CNavPoly::GetClosestPointOnPoly, CNavGeneratorAAQuad::FindClosestNode, CNavNode::GetGroundHeightAboveNode, CNavArea::IsConnectedOnEdge, CUtlMemory<CNavArea*, int>::Grow, CNavArea::Disconnect, CUtlMemory<CNavArea*, int>::Purge, _Unwind_Resume
// callers: CNavGeneratorAAQuad::FixUpGeneratedAreas, CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGeneratorAAQuad::FixConnections(CNavGeneratorAAQuad *const this)
{
  const NavAreaVector *m_rNavAreas; // rbx
  CNavArea *v2; // rax
  CNavArea *v3; // rbx
  NavDirType v4; // r15d
  int *m_pData; // r13
  const CNavArea *v6; // r12
  CNavNode *ClosestNode; // r14
  CNavNode *v8; // r13
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  float GroundHeightAboveNode; // xmm0_4
  float v14; // xmm0_4
  CNavArea *v15; // r15
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v16; // rdx
  int v17; // ebx
  int **v18; // r14
  int *v19; // rdx
  const CNavArea *v20; // r12
  __int64 v21; // r13
  int v22; // eax
  CNavArea **v23; // rax
  __int64 v24; // r12
  int j; // ebx
  __int64 v26; // r13
  int i; // r12d
  __int64 m_Size; // r13
  int v29; // eax
  CNavArea **v30; // rax
  __int64 v31; // [rsp+18h] [rbp-D8h]
  float v32; // [rsp+24h] [rbp-CCh]
  NavDirType v33; // [rsp+28h] [rbp-C8h]
  NavCornerType v34; // [rsp+2Ch] [rbp-C4h]
  float v35; // [rsp+2Ch] [rbp-C4h]
  unsigned __int64 v36; // [rsp+30h] [rbp-C0h]
  __int64 v37; // [rsp+30h] [rbp-C0h]
  NavCornerType cornerType; // [rsp+38h] [rbp-B8h]
  NavCornerType cornerTypea[2]; // [rsp+38h] [rbp-B8h]
  NavCornerType adjCornerType; // [rsp+48h] [rbp-A8h]
  int nConnectedArea; // [rsp+50h] [rbp-A0h]
  __int64 nConnectedAreaa; // [rsp+50h] [rbp-A0h]
  NavCornerType v44; // [rsp+58h] [rbp-98h]
  CNavArea *pArea; // [rsp+60h] [rbp-90h]
  int pAreaa; // [rsp+60h] [rbp-90h]
  float flWidth; // [rsp+7Ch] [rbp-74h] BYREF
  Vector vPos; // [rsp+80h] [rbp-70h] BYREF
  Vector vAdjPos; // [rsp+90h] [rbp-60h] BYREF
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > areasToDisconnect; // [rsp+A0h] [rbp-50h] BYREF

  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size == 0 )
    return;
  v36 = 0;
  v31 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
  while ( 2 )
  {
    v2 = m_rNavAreas->m_Memory.m_pMemory[v36 / 8];
    pArea = v2;
    if ( (v2->m_AreaAttributes.m_Flags & 0x1000) == 0 || !CNavGeneratorAAQuad::AreaHasNodes(this, v2) )
      goto LABEL_3;
    v3 = pArea;
    v4 = NavDirType::NORTH;
    v44 = NavCornerType::NORTH_EAST;
    cornerType = NavCornerType::NORTH_WEST;
    while ( 2 )
    {
      if ( fabs(pArea->m_vVerts[cornerType].z - pArea->m_vVerts[v44].z) < 18.0 )
        goto LABEL_7;
      areasToDisconnect.m_Size = 0;
      areasToDisconnect.m_Memory.m_pMemory = 0;
      areasToDisconnect.m_Memory.m_nAllocationCount = 0;
      areasToDisconnect.m_Memory.m_nGrowSize = 0;
      m_pData = v3->m_connect[0].m_pData;
      nConnectedArea = 0;
      v33 = (v4 + 2) & 3;
      while ( m_pData != 0 )
      {
        if ( nConnectedArea >= *m_pData )
          goto LABEL_55;
LABEL_16:
        v6 = *&m_pData[4 * nConnectedArea + 2];
        if ( CNavGeneratorAAQuad::AreaHasNodes(this, v6) )
        {
          CNavPoly::ComputePortal_Old(pArea, v6, v4, &vPos, &flWidth);
          vAdjPos = CNavPoly::GetClosestPointOnPoly(v6, &vPos);
          ClosestNode = CNavGeneratorAAQuad::FindClosestNode(this, pArea, &vPos, v4);
          v8 = CNavGeneratorAAQuad::FindClosestNode(this, v6, &vAdjPos, v33);
          y = ClosestNode->m_pos.y;
          z = ClosestNode->m_pos.z;
          vPos.x = ClosestNode->m_pos.x;
          vPos.y = y;
          vPos.z = z;
          v11 = v8->m_pos.y;
          v12 = v8->m_pos.z;
          vAdjPos.x = v8->m_pos.x;
          vAdjPos.y = v11;
          vAdjPos.z = v12;
          if ( v33 == NavDirType::SOUTH )
          {
            adjCornerType = NavCornerType::SOUTH_EAST;
            v34 = NavCornerType::SOUTH_WEST;
          }
          else if ( v33 == NavDirType::WEST )
          {
            adjCornerType = NavCornerType::SOUTH_WEST;
            v34 = NavCornerType::NORTH_WEST;
          }
          else
          {
            adjCornerType = (v33 == NavDirType::EAST) + 1;
            v34 = v33 == NavDirType::EAST;
          }
          if ( CNavNode::GetGroundHeightAboveNode(ClosestNode, cornerType) > 18.0
            || CNavNode::GetGroundHeightAboveNode(ClosestNode, v44) > 18.0
            || (v32 = vAdjPos.z,
                ((GroundHeightAboveNode = CNavNode::GetGroundHeightAboveNode(v8, v34)) + v32) > (vPos.z + 18.0))
            || (v35 = vAdjPos.z, ((v14 = CNavNode::GetGroundHeightAboveNode(v8, adjCornerType)) + v35) > (vPos.z + 18.0)) )
          {
            m_Size = areasToDisconnect.m_Size;
            v29 = areasToDisconnect.m_Size;
            if ( areasToDisconnect.m_Size == areasToDisconnect.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CNavArea *,int>::Grow(&areasToDisconnect.m_Memory, 1);
              v29 = areasToDisconnect.m_Size;
            }
            areasToDisconnect.m_Size = v29 + 1;
            v30 = &areasToDisconnect.m_Memory.m_pMemory[m_Size];
            if ( v30 != 0 )
              *v30 = v6;
          }
          m_pData = v3->m_connect[0].m_pData;
        }
        ++nConnectedArea;
      }
      if ( nConnectedArea < 0 )
        goto LABEL_16;
LABEL_55:
      v26 = 0;
      for ( i = 0; areasToDisconnect.m_Size > i; ++v26 )
      {
        CNavArea::Disconnect(pArea, areasToDisconnect.m_Memory.m_pMemory[v26]);
        ++i;
      }
      areasToDisconnect.m_Size = 0;
      if ( (areasToDisconnect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CNavArea *,int>::Purge(&areasToDisconnect.m_Memory);
        if ( (areasToDisconnect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CNavArea *,int>::Purge(&areasToDisconnect.m_Memory);
      }
LABEL_7:
      if ( ++v4 != NavDirType::NUM_DIRECTIONS )
      {
        if ( v4 == NavDirType::SOUTH )
        {
          v44 = NavCornerType::SOUTH_EAST;
          cornerType = NavCornerType::SOUTH_WEST;
        }
        else
        {
          v44 = (v4 == NavDirType::WEST) + 2;
          cornerType = v4 != NavDirType::WEST;
        }
        v3 = (v3 + 8);
        continue;
      }
      break;
    }
    m_rNavAreas = this->m_rNavAreas;
LABEL_3:
    v36 += 8LL;
    if ( v36 != v31 )
      continue;
    break;
  }
  if ( m_rNavAreas->m_Size == 0 )
    return;
  *cornerTypea = 0;
  v37 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
  while ( 2 )
  {
    nConnectedAreaa = 0;
    v15 = *(m_rNavAreas->m_Memory.m_pMemory + *cornerTypea);
    areasToDisconnect.m_Size = 0;
    areasToDisconnect.m_Memory.m_pMemory = 0;
    areasToDisconnect.m_Memory.m_nAllocationCount = 0;
    areasToDisconnect.m_Memory.m_nGrowSize = 0;
    while ( 2 )
    {
      pAreaa = 0;
LABEL_30:
      v16 = v15->m_connect[nConnectedAreaa].m_pData;
      if ( v16 != 0 )
      {
        if ( pAreaa >= v16->m_Size )
          goto LABEL_44;
      }
      else if ( pAreaa >= 0 )
      {
LABEL_44:
        if ( ++nConnectedAreaa != 4 )
          continue;
        break;
      }
      v17 = 0;
      v18 = &v16->m_Elements[pAreaa].m_pArea->m_connect[nConnectedAreaa];
      while ( 1 )
      {
        v19 = *v18;
        if ( *v18 != 0 )
        {
          if ( v17 >= *v19 )
            goto LABEL_42;
        }
        else if ( v17 >= 0 )
        {
LABEL_42:
          ++pAreaa;
          goto LABEL_30;
        }
        v20 = *&v19[4 * v17 + 2];
        if ( CNavArea::IsConnectedOnEdge(v15, v20, nConnectedAreaa) )
        {
          v21 = areasToDisconnect.m_Size;
          v22 = areasToDisconnect.m_Size;
          if ( areasToDisconnect.m_Size == areasToDisconnect.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CNavArea *,int>::Grow(&areasToDisconnect.m_Memory, 1);
            v22 = areasToDisconnect.m_Size;
          }
          areasToDisconnect.m_Size = v22 + 1;
          v23 = &areasToDisconnect.m_Memory.m_pMemory[v21];
          if ( v23 != 0 )
            *v23 = v20;
        }
        ++v17;
      }
    }
    v24 = 0;
    for ( j = 0; areasToDisconnect.m_Size > j; ++v24 )
    {
      CNavArea::Disconnect(v15, areasToDisconnect.m_Memory.m_pMemory[v24]);
      ++j;
    }
    areasToDisconnect.m_Size = 0;
    if ( (areasToDisconnect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CNavArea *,int>::Purge(&areasToDisconnect.m_Memory);
      if ( (areasToDisconnect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CNavArea *,int>::Purge(&areasToDisconnect.m_Memory);
    }
    *cornerTypea += 8LL;
    if ( *cornerTypea != v37 )
    {
      m_rNavAreas = this->m_rNavAreas;
      continue;
    }
    break;
  }
}


// CNavGeneratorAAQuad::ClassifyCorners  (line 3094, @0x0000000002edb380, libserver.so)  // inlines: operator=
// callers: CNavGeneratorAAQuad::FixCornerOnCornerAreas
void __fastcall CNavGeneratorAAQuad::ClassifyCorners(
        CNavGeneratorAAQuad *const this,
        Vector *vec,
        Vector *const vNW,
        Vector *const vNE,
        Vector *const vSE,
        Vector *const vSW)
{
  float x; // xmm1_4
  int v7; // eax
  float v8; // xmm0_4

  x = vec->x;
  v7 = 4;
  *vSW = *vec;
  vSE->x = x;
  vSE->y = vSW->y;
  vSE->z = vSW->z;
  vNE->x = x;
  vNE->y = vSE->y;
  vNE->z = vSE->z;
  vNW->x = x;
  vNW->y = vNE->y;
  vNW->z = vNE->z;
  v8 = vec->x;
  if ( x < vec->x )
    goto LABEL_4;
LABEL_2:
  if ( vNW->y >= vec->y )
  {
    vNW->x = v8;
    vNW->y = vec->y;
    vNW->z = vec->z;
    v8 = vec->x;
  }
  while ( 1 )
  {
LABEL_4:
    if ( v8 >= vNE->x && vNE->y >= vec->y )
    {
      vNE->x = v8;
      vNE->y = vec->y;
      vNE->z = vec->z;
      v8 = vec->x;
    }
    if ( v8 >= vSE->x && vec->y >= vSE->y )
    {
      vSE->x = v8;
      vSE->y = vec->y;
      vSE->z = vec->z;
      v8 = vec->x;
    }
    if ( vSW->x >= v8 && vec->y >= vSW->y )
    {
      vSW->x = v8;
      vSW->y = vec->y;
      vSW->z = vec->z;
    }
    ++vec;
    if ( --v7 == 0 )
      break;
    v8 = vec->x;
    if ( vNW->x >= vec->x )
      goto LABEL_2;
  }
}


// CNavGeneratorAAQuad::FixCornerOnCornerAreas  (line 3121, @0x0000000002edb4e0, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, Count, DirectionToVector2D, EnableInteractsExclude, GetCorner, GetVert, NavDirOpposite, RnCollisionAttr_t, SetAttributes, VectorAdd, operator!=, operator*=, operator+, operator=
// calls: CNavMesh::GetNavArea, CGameTrace::Init, TraceAdjacentNode, CTraceFilterSimple::CTraceFilterSimple, CNavGeneratorAAQuad::ClassifyCorners, CNavPoly::SetCorners, CNavArea::ConnectTo
// callers: CNavGeneratorAAQuad::FixUpGeneratedAreas, CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
// globals: CSWTCH.10061, CSWTCH.10059, g_NavHullAAQuad
void __fastcall CNavGeneratorAAQuad::FixCornerOnCornerAreas(CNavGeneratorAAQuad *const this)
{
  CNavGeneratorAAQuad *v1; // r15
  const NavAreaVector *m_rNavAreas; // rax
  __int64 v3; // r14
  CNavGeneratorAAQuad *v4; // r13
  __int64 v5; // rcx
  int *m_pData; // rdx
  int *v7; // rdx
  int *v8; // rdx
  int *v9; // rdx
  NavDirType v10; // r15d
  __int64 v11; // rbx
  NavDirType v12; // edx
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm3_4
  NavDirType v16; // ecx
  bool v17; // cc
  const CNavMesh *m_rNavMesh; // rdi
  CNavArea *NavArea; // r14
  float *v20; // rax
  float v21; // xmm4_4
  CNavMesh *v22; // rdi
  CNavArea *v23; // r12
  __int64 v24; // [rsp+20h] [rbp-250h]
  __int64 v25; // [rsp+30h] [rbp-240h]
  __int64 v26; // [rsp+40h] [rbp-230h]
  float v27; // [rsp+4Ch] [rbp-224h]
  unsigned __int64 v28; // [rsp+50h] [rbp-220h]
  float v29; // [rsp+58h] [rbp-218h]
  NavDirType v30; // [rsp+5Ch] [rbp-214h]
  float neCorner; // [rsp+60h] [rbp-210h]
  vec_t *p_x; // [rsp+68h] [rbp-208h]
  CNavArea *pArea; // [rsp+70h] [rbp-200h]
  CNavArea *v34; // [rsp+78h] [rbp-1F8h]
  float v35; // [rsp+88h] [rbp-1E8h]
  float v36; // [rsp+8Ch] [rbp-1E4h]
  _DWORD dirsAlongOtherEdge[4]; // [rsp+90h] [rbp-1E0h]
  _DWORD dirsAlongOurEdge[4]; // [rsp+A0h] [rbp-1D0h]
  Vector cornerPos; // [rsp+B0h] [rbp-1C0h] BYREF
  Vector vOtherEdgePos; // [rsp+C0h] [rbp-1B0h] BYREF
  Vector vNW; // [rsp+D0h] [rbp-1A0h] BYREF
  Vector vNE; // [rsp+E0h] [rbp-190h] BYREF
  Vector vSE; // [rsp+F0h] [rbp-180h] BYREF
  Vector vSW; // [rsp+100h] [rbp-170h] BYREF
  Vector vCorner[4]; // [rsp+110h] [rbp-160h] BYREF
  CTraceFilterWalkableEntities filter; // [rsp+140h] [rbp-130h] BYREF
  trace_t result; // [rsp+190h] [rbp-E0h] BYREF

  v1 = this;
  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size != 0 )
  {
    v28 = 0;
    v24 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
    while ( 1 )
    {
      v3 = 0;
      pArea = m_rNavAreas->m_Memory.m_pMemory[v28 / 8];
      v34 = pArea;
      v4 = v1;
      p_x = &pArea->m_vVerts[0].x;
      do
      {
        v5 = (v3 + 3) & 3;
        m_pData = pArea->m_connect[v5].m_pData;
        if ( m_pData == 0 || *m_pData <= 0 )
        {
          v7 = v34->m_connect[0].m_pData;
          if ( v7 == 0 || *v7 <= 0 )
          {
            v8 = pArea->m_incomingConnect[v5].m_pData;
            if ( v8 == 0 || *v8 <= 0 )
            {
              v9 = v34->m_incomingConnect[0].m_pData;
              if ( v9 == 0 || *v9 <= 0 )
              {
                v10 = (v3 + 3) & 3;
                dirsAlongOtherEdge[0] = v10;
                v11 = 0;
                v12 = *&CSWTCH_10061[4 * v3];
                dirsAlongOtherEdge[1] = v3;
                x = *p_x;
                v25 = v3;
                y = p_x[1];
                z = p_x[2];
                v26 = (v3 + 2) & 3;
                v16 = *&CSWTCH_10059[4 * ((v3 + 3) & 3)];
                v17 = v10 <= NavDirType::EAST;
                cornerPos.x = *p_x;
                cornerPos.y = y;
                cornerPos.z = z;
                v30 = v16;
                dirsAlongOurEdge[0] = v16;
                dirsAlongOurEdge[1] = v12;
                if ( v10 != NavDirType::EAST )
                {
LABEL_16:
                  if ( v17 )
                  {
                    if ( v10 == NavDirType::NORTH )
                    {
                      v35 = 0.0;
                      v36 = -1.0;
                    }
                  }
                  else if ( v10 == NavDirType::SOUTH )
                  {
                    v35 = 0.0;
                    v36 = 1.0;
                  }
                  else if ( v10 == NavDirType::WEST )
                  {
                    v36 = 0.0;
                    v35 = -1.0;
                  }
                  goto LABEL_20;
                }
                while ( 1 )
                {
                  v36 = 0.0;
                  v35 = 1.0;
LABEL_20:
                  m_rNavMesh = v4->m_rNavMesh;
                  v35 = v35 * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
                  v36 = v36 * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
                  neCorner = (0.5 * CNavGeneratorBase::sm_flGenerationStepSize) * 0.0;
                  vOtherEdgePos.x = x + v35;
                  vOtherEdgePos.y = y + v36;
                  vOtherEdgePos.z = z + neCorner;
                  NavArea = CNavMesh::GetNavArea(m_rNavMesh, &vOtherEdgePos, g_NavHullAAQuad, 2, 120.0, 5.0, 0);
                  if ( NavArea != 0 )
                  {
                    memset(&result.m_ShapeAttributes, 0, 31);
                    result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                    CGameTrace::Init(&result);
                    if ( TraceAdjacentNode(0, &cornerPos, &vOtherEdgePos, &result, 18.0) )
                    {
                      v20 = (NavArea + 12 * v26);
                      if ( cornerPos.x == v20[2] && v20[3] == cornerPos.y && v20[4] == cornerPos.z )
                      {
                        if ( v30 == NavDirType::EAST )
                        {
                          v29 = 0.0;
                          v27 = 1.0;
                        }
                        else if ( v30 <= NavDirType::EAST )
                        {
                          if ( v30 == NavDirType::NORTH )
                          {
                            v27 = 0.0;
                            v29 = -1.0;
                          }
                        }
                        else if ( v30 == NavDirType::SOUTH )
                        {
                          v27 = 0.0;
                          v29 = 1.0;
                        }
                        else if ( v30 == NavDirType::WEST )
                        {
                          v29 = 0.0;
                          v27 = -1.0;
                        }
                        vCorner[2] = cornerPos;
                        vCorner[1].x = v35 + cornerPos.x;
                        vCorner[1].y = v36 + cornerPos.y;
                        v27 = v27 * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
                        v29 = v29 * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
                        v21 = 0.0 * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
                        vCorner[0].x = v27 + (v35 + cornerPos.x);
                        vCorner[3].x = cornerPos.x + v27;
                        vCorner[3].y = cornerPos.y + v29;
                        vCorner[0].y = v29 + (v36 + cornerPos.y);
                        vCorner[1].z = neCorner + cornerPos.z;
                        vCorner[3].z = cornerPos.z + v21;
                        vCorner[0].z = v21 + (neCorner + cornerPos.z);
                        CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 4, 0);
                        filter._vptr_CTraceFilter = off_3FE6A50;
                        filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
                        filter.m_flags = 15;
                        if ( TraceAdjacentNode(0, &vCorner[1], vCorner, &result, 18.0)
                          && TraceAdjacentNode(0, &vCorner[3], vCorner, &result, 18.0)
                          && CNavMesh::GetNavArea(v4->m_rNavMesh, vCorner, g_NavHullAAQuad, 2, 120.0, 5.0, 0) == 0 )
                        {
                          v22 = v4->m_rNavMesh;
                          vCorner[0] = result.endpos;
                          v23 = (*(v22->_vptr_CNavMesh + 4))(v22);
                          CNavGeneratorAAQuad::ClassifyCorners(v4, vCorner, &vNW, &vNE, &vSE, &vSW);
                          CNavPoly::SetCorners(v23, &vNW, &vNE, &vSE, &vSW);
                          (*(v4->m_rNavMesh->_vptr_CNavMesh + 28))(v4->m_rNavMesh, v23);
                          v23->m_AreaAttributes.m_Flags = pArea->m_AreaAttributes.m_Flags;
                          CNavArea::ConnectTo(pArea, v23, v10, -1, 1);
                          CNavArea::ConnectTo(v23, pArea, (v10 + 2) % 4, -1, 1);
                          CNavArea::ConnectTo(NavArea, v23, v30, -1, 1);
                          CNavArea::ConnectTo(v23, NavArea, (v30 + 2) % 4, -1, 1);
                        }
                      }
                    }
                  }
                  if ( ++v11 == 2 )
                    break;
                  v10 = dirsAlongOtherEdge[v11];
                  x = cornerPos.x;
                  y = cornerPos.y;
                  v17 = v10 <= NavDirType::EAST;
                  z = cornerPos.z;
                  v30 = dirsAlongOurEdge[v11];
                  if ( v10 != NavDirType::EAST )
                    goto LABEL_16;
                }
                v3 = v25;
              }
            }
          }
        }
        v34 = (v34 + 8);
        ++v3;
        p_x += 3;
      }
      while ( v3 != 4 );
      v28 += 8LL;
      v1 = v4;
      if ( v28 == v24 )
        break;
      m_rNavAreas = v4->m_rNavAreas;
    }
  }
}


// CNavGeneratorAAQuad::MergeGeneratedAreas  (line 3250, @0x0000000002edd950, libserver.so)  // inlines: End, GetMilliseconds64, GetSeconds, PLAT_CPU_TIME, Plat_TickDiffMilliSec, Sample, Start
// calls: Msg, CNavArea::IsValidArea, CNavGeneratorAAQuad::AreaHasNodes, CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea, CNavMesh::PerformDeferredDeletion, Plat_GetCPUFrequency, LoggingSystem_IsChannelEnabled, CCycleCount::GetMilliseconds64, LoggingSystem_Log, CCycleCount::GetMicroseconds64
// callers: CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
// strings: "Merging navigation areas...\n", "m_rNavMesh.PerformDeferredDeletion()", "%s took %llu miliseconds\n", "%s took %0.2f seconds\n", "%s took %llu microseconds\n"
void __fastcall CNavGeneratorAAQuad::MergeGeneratedAreas(CNavGeneratorAAQuad *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v3; // rbx
  CNavArea *v4; // r12
  NavDirType v5; // r14d
  char i; // r15
  CNavMesh *m_rNavMesh; // rdi
  uint64 v8; // rbx
  __int64 CPUFrequency; // rax
  double v10; // xmm1_8
  unsigned __int64 v11; // rax
  uint64 Milliseconds64; // rax
  double m_Int64_low; // xmm0_8
  __int64 v14; // rax
  double v15; // xmm1_8
  uint64 Microseconds64; // rax
  __int64 v17; // [rsp+8h] [rbp-48h]
  double v18; // [rsp+8h] [rbp-48h]
  CFastTimer functionTimer; // [rsp+10h] [rbp-40h] BYREF

  Msg("Merging navigation areas...\n");
  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size != 0 )
  {
    v3 = 0;
    v17 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
    while ( 1 )
    {
      v4 = m_rNavAreas->m_Memory.m_pMemory[v3 / 8];
      if ( CNavArea::IsValidArea(v4)
        && CNavGeneratorAAQuad::AreaHasNodes(this, v4)
        && (v4->m_AreaAttributes.m_Flags & 0x2000) == 0 )
      {
        v5 = NavDirType::NORTH;
        for ( i = 0; ; i = 0 )
        {
          do
          {
            if ( CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea(this, v4, v5) )
              i = 1;
            ++v5;
          }
          while ( v5 <= NavDirType::WEST );
          if ( i == 0 )
            break;
          v5 = NavDirType::NORTH;
        }
      }
      v3 += 8LL;
      if ( v3 == v17 )
        break;
      m_rNavAreas = this->m_rNavAreas;
    }
  }
  m_rNavMesh = this->m_rNavMesh;
  functionTimer.m_Duration.m_Int64 = __rdtsc();
  CNavMesh::PerformDeferredDeletion(m_rNavMesh);
  v8 = __rdtsc() - functionTimer.m_Duration.m_Int64;
  functionTimer.m_Duration.m_Int64 = v8;
  CPUFrequency = Plat_GetCPUFrequency();
  if ( (v8 & 0x8000000000000000LL) != 0LL )
  {
    v10 = (v8 & 1 | (v8 >> 1)) + (v8 & 1 | (v8 >> 1));
    if ( CPUFrequency >= 0 )
    {
LABEL_17:
      if ( v10 / CPUFrequency >= 1.0 )
        goto LABEL_18;
      goto LABEL_22;
    }
  }
  else
  {
    v10 = v8;
    if ( CPUFrequency >= 0 )
      goto LABEL_17;
  }
  if ( v10 / ((CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1))) >= 1.0 )
  {
LABEL_18:
    if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      if ( (functionTimer.m_Duration.m_Int64 & 0x8000000000000000LL) != 0LL )
        m_Int64_low = (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1))
                    + (functionTimer.m_Duration.m_Int64 & 1 | (functionTimer.m_Duration.m_Int64 >> 1));
      else
        m_Int64_low = SLODWORD(functionTimer.m_Duration.m_Int64);
      v18 = m_Int64_low;
      v14 = Plat_GetCPUFrequency();
      if ( v14 < 0 )
        v15 = (v14 & 1 | (v14 >> 1)) + (v14 & 1 | (v14 >> 1));
      else
        v15 = v14;
      LoggingSystem_Log(LOG_NAV, 1, "%s took %0.2f seconds\n", "m_rNavMesh.PerformDeferredDeletion()", v18 / v15);
    }
    return;
  }
LABEL_22:
  v11 = Plat_GetCPUFrequency();
  if ( -1000LL * (functionTimer.m_Duration.m_Int64 / v11) == 1000 * (functionTimer.m_Duration.m_Int64 % v11) / v11 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
    {
      Microseconds64 = CCycleCount::GetMicroseconds64(&functionTimer.m_Duration);
      LoggingSystem_Log(
        LOG_NAV,
        1,
        "%s took %llu microseconds\n",
        "m_rNavMesh.PerformDeferredDeletion()",
        Microseconds64);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_NAV, 1) != 0 )
  {
    Milliseconds64 = CCycleCount::GetMilliseconds64(&functionTimer.m_Duration);
    LoggingSystem_Log(LOG_NAV, 1, "%s took %llu miliseconds\n", "m_rNavMesh.PerformDeferredDeletion()", Milliseconds64);
  }
}


// CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea  (line 3302, @0x0000000002edd5e0, libserver.so)  // inlines: Count, GetInt, GetPolySizeX, GetPolySizeY, GetPosition, MarkAreaForDeletion
// calls: CNavGeneratorAAQuad::AreaHasNodes, CNavPoly::IsCoplanar, CNavPoly::SetCorners, CNavGeneratorAAQuad::AssignNodes, CNavArea::MergeAdjacentConnections
// callers: CNavGeneratorAAQuad::MergeGeneratedAreas
// globals: CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea(CNavArea &,NavDirType)::cornerCompareTable
bool __fastcall CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea(
        CNavGeneratorAAQuad *const this,
        CNavArea *const rArea,
        NavDirType direction)
{
  int v5; // r12d
  CNavConnectVector *v6; // r15
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int v8; // edx
  CNavArea *m_pArea; // rbx
  __int64 v10; // rax
  float v11; // xmm1_4
  CNavNodesForArea *v12; // r8
  vec_t *v13; // rax
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  vec_t *v16; // rax
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  vec_t *v19; // rax
  vec_t v20; // xmm1_4
  vec_t v21; // xmm0_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  __int64 v25; // [rsp+0h] [rbp-C0h]
  NavCornerType v26; // [rsp+8h] [rbp-B8h]
  __int64 v27; // [rsp+8h] [rbp-B8h]
  NavCornerType v28; // [rsp+10h] [rbp-B0h]
  CNavNode **v29; // [rsp+10h] [rbp-B0h]
  NavCornerType pAreaAdjNodes; // [rsp+18h] [rbp-A8h]
  CNavNodesForArea *pAreaAdjNodesa; // [rsp+18h] [rbp-A8h]
  NavCornerType v32; // [rsp+20h] [rbp-A0h]
  vec_t **v33; // [rsp+20h] [rbp-A0h]
  __int64 v34; // [rsp+30h] [rbp-90h]
  CNavNodesForArea *pAreaNodes; // [rsp+40h] [rbp-80h]
  CNavNodesForArea *pAreaNodesa; // [rsp+40h] [rbp-80h]
  float flMaxAreaSize; // [rsp+48h] [rbp-78h]
  char bMerged; // [rsp+4Fh] [rbp-71h]
  Vector nwCorner; // [rsp+50h] [rbp-70h] BYREF
  Vector neCorner; // [rsp+60h] [rbp-60h] BYREF
  Vector seCorner; // [rsp+70h] [rbp-50h] BYREF
  Vector swCorner; // [rsp+80h] [rbp-40h] BYREF

  v5 = 0;
  bMerged = 0;
  v6 = &rArea->m_connect[direction];
  v34 = direction;
  flMaxAreaSize = nav_area_max_size.m_pParent->m_Value.m_nValue * CNavGeneratorBase::sm_flGenerationStepSize;
  while ( 1 )
  {
    m_pData = v6->m_pData;
    v8 = v6->m_pData != 0 ? m_pData->m_Size : 0;
    if ( v5 >= v8 )
      return bMerged;
    m_pArea = m_pData->m_Elements[v5].m_pArea;
    if ( (*(rArea->_vptr_CNavPoly + 26))(rArea, m_pArea) != 0
      && CNavGeneratorAAQuad::AreaHasNodes(this, rArea)
      && CNavGeneratorAAQuad::AreaHasNodes(this, m_pArea) )
    {
      v32 = CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea(CNavArea &,NavDirType)::cornerCompareTable[v34][0];
      pAreaAdjNodes = CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea(CNavArea &,NavDirType)::cornerCompareTable[v34][1];
      v28 = CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea(CNavArea &,NavDirType)::cornerCompareTable[v34][2];
      v26 = CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea(CNavArea &,NavDirType)::cornerCompareTable[v34][3];
      if ( (direction & 0xFFFFFFFD) != 0 )
      {
        if ( (fabs(rArea->m_vVerts[0].x - rArea->m_vVerts[2].x) + fabs(m_pArea->m_vVerts[0].x - m_pArea->m_vVerts[2].x)) > flMaxAreaSize )
          goto LABEL_2;
      }
      else if ( (fabs(rArea->m_vVerts[0].y - rArea->m_vVerts[2].y)
               + fabs(m_pArea->m_vVerts[0].y - m_pArea->m_vVerts[2].y)) > flMaxAreaSize )
      {
        goto LABEL_2;
      }
      pAreaNodes = (*(this->_vptr_CNavGeneratorBase + 14))(this, rArea);
      v10 = (*(this->_vptr_CNavGeneratorBase + 14))(this, m_pArea);
      v12 = (pAreaNodes + 8 * v32);
      if ( v12->m_Nodes[0] == *(v10 + 8LL * pAreaAdjNodes)
        && pAreaNodes->m_Nodes[v28] == *(v10 + 8LL * v26)
        && m_pArea->m_AreaAttributes.m_Flags == rArea->m_AreaAttributes.m_Flags )
      {
        v25 = v28;
        v27 = v32;
        v29 = &pAreaNodes->m_Nodes[v28];
        pAreaAdjNodesa = v10;
        v33 = pAreaNodes;
        pAreaNodesa = v12;
        if ( CNavPoly::IsCoplanar(rArea, m_pArea, v11) )
        {
          pAreaNodesa->m_Nodes[0] = pAreaAdjNodesa->m_Nodes[v27];
          *v29 = pAreaAdjNodesa->m_Nodes[v25];
          v13 = v33[3];
          v14 = v13[1];
          v15 = v13[2];
          swCorner.x = *v13;
          v16 = v33[2];
          swCorner.y = v14;
          swCorner.z = v15;
          v17 = *v16;
          v18 = v16[1];
          seCorner.z = v16[2];
          v19 = v33[1];
          seCorner.x = v17;
          seCorner.y = v18;
          v20 = v19[1];
          v21 = v19[2];
          neCorner.x = *v19;
          neCorner.y = v20;
          neCorner.z = v21;
          v22 = (*v33)[1];
          v23 = (*v33)[2];
          nwCorner.x = **v33;
          nwCorner.y = v22;
          nwCorner.z = v23;
          CNavPoly::SetCorners(rArea, &nwCorner, &neCorner, &seCorner, &swCorner);
          CNavGeneratorAAQuad::AssignNodes(this, m_pArea, rArea);
          CNavArea::MergeAdjacentConnections(rArea, m_pArea);
          bMerged = 1;
          m_pArea->m_nIndex = -1;
        }
      }
    }
LABEL_2:
    ++v5;
  }
}


// CNavGeneratorAAQuad::ConnectGeneratedAreas  (line 3385, @0x0000000002edc500, libserver.so)  // inlines: GetCorner, GetVert, IncrementallyGeneratedAreas, NavHullAny, NormalizeInPlace, StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, StitchGeneratedAreas, StitchMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, VectorAdd, VectorMultiply, VectorSubtract, operator(), operator*, operator+, operator-
// calls: Msg, CNavGeneratorAAQuad::ConnectAreaEdge, CNavGeneratorAAQuad::AreaHasNodes, CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, VectorNormalize, CNavPoly::GetZ, TestStitchConnection, CNavArea::ConnectTo, NavHull_t::NavHull_t, CNavMesh::GetNavArea, FindJumpDownArea
// strings: "Connecting navigation areas...\n"
void __fastcall CNavGeneratorAAQuad::ConnectGeneratedAreas(CNavGeneratorAAQuad *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // r15
  NavDirType v5; // ebx
  CNavArea *v6; // r13
  CNavMesh *m_rNavMesh; // rax
  int m_Size; // eax
  const CNavGeneratorAAQuad *v9; // rdi
  CNavArea *v10; // r12
  CNavGeneratorAAQuad::StitchGeneratedAreas::IncrementallyGeneratedAreas *v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm1_4
  CNavGeneratorAAQuad::StitchGeneratedAreas::IncrementallyGeneratedAreas *const v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm1_4
  CNavGeneratorAAQuad::StitchGeneratedAreas::IncrementallyGeneratedAreas *const v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float y; // xmm6_4
  vec_t v22; // xmm1_4
  float v23; // xmm0_4
  bool v24; // cc
  const CNavArea *NavArea; // rax
  CNavArea *v26; // rbx
  float v27; // xmm2_4
  CNavArea *JumpDownArea; // rax
  CNavArea *v29; // rbx
  __int64 v30; // [rsp+0h] [rbp-C0h]
  CNavMesh *v31; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+10h] [rbp-B0h]
  float z; // [rsp+1Ch] [rbp-A4h]
  float v34; // [rsp+20h] [rbp-A0h]
  float v35; // [rsp+24h] [rbp-9Ch]
  float v36; // [rsp+28h] [rbp-98h]
  float v37; // [rsp+2Ch] [rbp-94h]
  NavDirType dir[2]; // [rsp+30h] [rbp-90h] BYREF
  Vector vec; // [rsp+40h] [rbp-80h] BYREF
  Vector vSourcePos; // [rsp+50h] [rbp-70h] BYREF
  _BYTE x[32]; // [rsp+60h] [rbp-60h] BYREF
  NavHull_t v42; // [rsp+80h] [rbp-40h] BYREF

  Msg("Connecting navigation areas...\n");
  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size != 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
    while ( 1 )
    {
      v5 = NavDirType::NORTH;
      v6 = m_rNavAreas->m_Memory.m_pMemory[v3 / 8];
      do
        CNavGeneratorAAQuad::ConnectAreaEdge(this, v6, v5++);
      while ( v5 != NavDirType::NUM_DIRECTIONS );
      v3 += 8LL;
      if ( v3 == v4 )
        break;
      m_rNavAreas = this->m_rNavAreas;
    }
  }
  if ( this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
  {
    m_rNavMesh = this->m_rNavMesh;
    *dir = this;
    v31 = m_rNavMesh;
    m_Size = m_rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v9 = this;
      v32 = 0;
      v30 = 8LL * (m_Size - 1) + 8;
      while ( 1 )
      {
        v10 = v31->m_NavAreas.m_Memory.m_pMemory[v32 / 8];
        if ( CNavGeneratorAAQuad::AreaHasNodes(v9, v10) )
        {
          CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas(void)::IncrementallyGeneratedAreas>(
            v10,
            0,
            dir,
            v11,
            v12,
            v13);
          CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas(void)::IncrementallyGeneratedAreas>(
            v10,
            &loc_2,
            dir,
            v14,
            v15,
            v16);
          CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas(void)::IncrementallyGeneratedAreas>(
            v10,
            (&loc_0 + 1),
            dir,
            v17,
            v18,
            v19);
          v20 = v10->m_vVerts[0].x;
          y = v10->m_vVerts[0].y;
          vec.z = 0.0;
          v35 = v20;
          v34 = y;
          v22 = v10->m_vVerts[3].x - v20;
          z = v10->m_vVerts[0].z;
          vec.y = v10->m_vVerts[3].y - y;
          vec.x = v22;
          v36 = VectorNormalize(&vec) - 1.0;
          if ( v36 > 0.0 )
          {
            v37 = 0.0;
            v23 = CNavGeneratorBase::sm_flGenerationStepSize;
            do
            {
              vSourcePos.x = (vec.x * (v37 + 0.5)) + v35;
              vSourcePos.y = (vec.y * (v37 + 0.5)) + v34;
              vSourcePos.z = (((v37 + 0.5) * vec.z) + z) + 35.5;
              *&x[4] = vSourcePos.y;
              *x = vSourcePos.x - (v23 * 0.5);
              *&x[8] = vSourcePos.z;
              NavHull_t::NavHull_t(&v42, -1.0, *x, 7u);
              *&x[16] = v42;
              NavArea = CNavMesh::GetNavArea(TheNavMesh, x, v42, 2, 120.0, 5.0, 0);
              v26 = NavArea;
              if ( NavArea != 0 && !CNavGeneratorAAQuad::AreaHasNodes(*dir, NavArea) )
              {
                *&x[8] = CNavPoly::GetZ(v26, *&x[4], v27) + 35.5;
                if ( TestStitchConnection(v10, v26, &vSourcePos, x) )
                  CNavArea::ConnectTo(v10, v26, 3, -1, 1);
                if ( TestStitchConnection(v26, v10, x, &vSourcePos) )
                  CNavArea::ConnectTo(v26, v10, 1, -1, 1);
              }
              else
              {
                vSourcePos.z = (vSourcePos.z - 35.5) + 1.0;
                JumpDownArea = FindJumpDownArea(&vSourcePos, v10, 3, &v42);
                v29 = JumpDownArea;
                if ( v10 != JumpDownArea && JumpDownArea != 0 && !CNavGeneratorAAQuad::AreaHasNodes(*dir, JumpDownArea) )
                  CNavArea::ConnectTo(v10, v29, 3, v42.m_hullCategory, 1);
              }
              v23 = CNavGeneratorBase::sm_flGenerationStepSize;
              v24 = v36 <= (v37 + CNavGeneratorBase::sm_flGenerationStepSize);
              v37 = v37 + CNavGeneratorBase::sm_flGenerationStepSize;
            }
            while ( !v24 );
          }
        }
        v32 += 8LL;
        if ( v32 == v30 )
          break;
        v9 = *dir;
      }
    }
  }
}


// CNavGeneratorAAQuad::StitchGeneratedAreas  (line 3409, @0x0000000002edc920, libserver.so)  // inlines: GetCorner, GetVert, IncrementallyGeneratedAreas, NavHullAny, NormalizeInPlace, StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, StitchMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, VectorAdd, VectorMultiply, VectorSubtract, operator(), operator*, operator+, operator-
// calls: CNavGeneratorAAQuad::AreaHasNodes, VectorNormalize, CNavPoly::GetZ, TestStitchConnection, CNavArea::ConnectTo, NavHull_t::NavHull_t, CNavMesh::GetNavArea, FindJumpDownArea, CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>
void __fastcall CNavGeneratorAAQuad::StitchGeneratedAreas(CNavGeneratorAAQuad *const this)
{
  int m_Size; // eax
  CNavArea *v2; // rbx
  float v3; // xmm1_4
  vec_t v4; // xmm0_4
  float z; // xmm4_4
  CNavGeneratorAAQuad::StitchGeneratedAreas::IncrementallyGeneratedAreas *v6; // rcx
  float v7; // xmm0_4
  float v8; // xmm1_4
  const CNavArea *NavArea; // rax
  CNavArea *v10; // r12
  float v11; // xmm2_4
  CNavArea *JumpDownArea; // rax
  CNavArea *v13; // r12
  CNavGeneratorAAQuad::StitchGeneratedAreas::IncrementallyGeneratedAreas *const v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm1_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  const CNavArea *v21; // rax
  CNavArea *v22; // r12
  float v23; // xmm2_4
  CNavArea *v24; // rax
  CNavArea *v25; // r12
  __int64 v26; // [rsp-48h] [rbp-F0h]
  CNavMesh *m_rNavMesh; // [rsp-40h] [rbp-E8h]
  unsigned __int64 v28; // [rsp-38h] [rbp-E0h]
  float v29; // [rsp-2Ch] [rbp-D4h]
  float v30; // [rsp-2Ch] [rbp-D4h]
  float y; // [rsp-28h] [rbp-D0h]
  float v32; // [rsp-28h] [rbp-D0h]
  float x; // [rsp-24h] [rbp-CCh]
  float v34; // [rsp-24h] [rbp-CCh]
  float v35; // [rsp-20h] [rbp-C8h]
  float v36; // [rsp-20h] [rbp-C8h]
  float v37; // [rsp-8h] [rbp-B0h]
  float v38; // [rsp-8h] [rbp-B0h]
  CNavGeneratorAAQuad::StitchGeneratedAreas::IncrementallyGeneratedAreas incrementalAreas; // [rsp+0h] [rbp-A8h] BYREF
  NavHull_t v40; // [rsp+10h] [rbp-98h]
  Vector v41; // [rsp+20h] [rbp-88h] BYREF
  Vector v42; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v43[32]; // [rsp+40h] [rbp-68h] BYREF
  NavHull_t v44[6]; // [rsp+60h] [rbp-48h] BYREF

  if ( this->m_generationMode == CNavGeneratorBase::GenerationModeType::GENERATE_INCREMENTAL )
  {
    incrementalAreas.m_rGeneratorAAQuad = this;
    m_rNavMesh = this->m_rNavMesh;
    m_Size = m_rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v28 = 0;
      v26 = 8LL * (m_Size - 1) + 8;
      while ( 1 )
      {
        v2 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v28 / 8];
        if ( CNavGeneratorAAQuad::AreaHasNodes(this, v2) )
        {
          x = v2->m_vVerts[0].x;
          v3 = v2->m_vVerts[1].x;
          y = v2->m_vVerts[0].y;
          v4 = v2->m_vVerts[1].y - y;
          z = v2->m_vVerts[0].z;
          v41.z = 0.0;
          v29 = z;
          v41.y = v4;
          v41.x = v3 - x;
          v7 = VectorNormalize(&v41);
          v35 = v7 - 1.0;
          if ( (v7 - 1.0) > 0.0 )
          {
            v37 = 0.0;
            v7 = CNavGeneratorBase::sm_flGenerationStepSize;
            do
            {
              v42.y = (v41.y * (v37 + 0.5)) + y;
              v42.x = ((v37 + 0.5) * v41.x) + x;
              v42.z = ((v41.z * (v37 + 0.5)) + v29) + 35.5;
              *v43 = v42.x;
              *&v43[4] = v42.y - (v7 * 0.5);
              *&v43[8] = v42.z;
              NavHull_t::NavHull_t(v44, -1.0, *&v43[4], 7u);
              v40 = v44[0];
              NavArea = CNavMesh::GetNavArea(TheNavMesh, v43, v44[0], 2, 120.0, 5.0, 0);
              v10 = NavArea;
              if ( NavArea != 0 && !CNavGeneratorAAQuad::AreaHasNodes(incrementalAreas.m_rGeneratorAAQuad, NavArea) )
              {
                *&v43[8] = CNavPoly::GetZ(v10, *&v43[4], v11) + 35.5;
                if ( TestStitchConnection(v2, v10, &v42, v43) )
                  CNavArea::ConnectTo(v2, v10, 0, -1, 1);
                if ( TestStitchConnection(v10, v2, v43, &v42) )
                  CNavArea::ConnectTo(v10, v2, 2, -1, 1);
              }
              else
              {
                v42.z = (v42.z - 35.5) + 1.0;
                JumpDownArea = FindJumpDownArea(&v42, v2, 0, v44);
                v13 = JumpDownArea;
                if ( v2 != JumpDownArea
                  && JumpDownArea != 0
                  && !CNavGeneratorAAQuad::AreaHasNodes(incrementalAreas.m_rGeneratorAAQuad, JumpDownArea) )
                {
                  CNavArea::ConnectTo(v2, v13, 0, v44[0].m_hullCategory, 1);
                }
              }
              v7 = CNavGeneratorBase::sm_flGenerationStepSize;
              v37 = v37 + CNavGeneratorBase::sm_flGenerationStepSize;
            }
            while ( v35 > v37 );
          }
          CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas(void)::IncrementallyGeneratedAreas>(
            v2,
            &loc_2,
            &incrementalAreas.m_rGeneratorAAQuad,
            v6,
            v7,
            v8);
          CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas(void)::IncrementallyGeneratedAreas>(
            v2,
            (&loc_0 + 1),
            &incrementalAreas.m_rGeneratorAAQuad,
            v14,
            v15,
            v16);
          v34 = v2->m_vVerts[0].x;
          v32 = v2->m_vVerts[0].y;
          v17 = v2->m_vVerts[3].y - v32;
          v18 = v2->m_vVerts[3].x - v34;
          v19 = v2->m_vVerts[0].z;
          v41.z = 0.0;
          v30 = v19;
          v41.x = v18;
          v41.y = v17;
          v36 = VectorNormalize(&v41) - 1.0;
          if ( v36 > 0.0 )
          {
            v38 = 0.0;
            v20 = CNavGeneratorBase::sm_flGenerationStepSize;
            do
            {
              v42.x = (v41.x * (v38 + 0.5)) + v34;
              v42.y = (v41.y * (v38 + 0.5)) + v32;
              v42.z = (((v38 + 0.5) * v41.z) + v30) + 35.5;
              *&v43[4] = v42.y;
              *v43 = v42.x - (v20 * 0.5);
              *&v43[8] = v42.z;
              NavHull_t::NavHull_t(v44, -1.0, *v43, 7u);
              *&v43[16] = v44[0];
              v21 = CNavMesh::GetNavArea(TheNavMesh, v43, v44[0], 2, 120.0, 5.0, 0);
              v22 = v21;
              if ( v21 != 0 && !CNavGeneratorAAQuad::AreaHasNodes(incrementalAreas.m_rGeneratorAAQuad, v21) )
              {
                *&v43[8] = CNavPoly::GetZ(v22, *&v43[4], v23) + 35.5;
                if ( TestStitchConnection(v2, v22, &v42, v43) )
                  CNavArea::ConnectTo(v2, v22, 3, -1, 1);
                if ( TestStitchConnection(v22, v2, v43, &v42) )
                  CNavArea::ConnectTo(v22, v2, 1, -1, 1);
              }
              else
              {
                v42.z = (v42.z - 35.5) + 1.0;
                v24 = FindJumpDownArea(&v42, v2, 3, v44);
                v25 = v24;
                if ( v2 != v24
                  && v24 != 0
                  && !CNavGeneratorAAQuad::AreaHasNodes(incrementalAreas.m_rGeneratorAAQuad, v24) )
                {
                  CNavArea::ConnectTo(v2, v25, 3, v44[0].m_hullCategory, 1);
                }
              }
              v20 = CNavGeneratorBase::sm_flGenerationStepSize;
              v38 = v38 + CNavGeneratorBase::sm_flGenerationStepSize;
            }
            while ( v36 > v38 );
          }
        }
        v28 += 8LL;
        if ( v28 == v26 )
          break;
        this = incrementalAreas.m_rGeneratorAAQuad;
      }
    }
  }
}


// CNavGeneratorAAQuad::ConnectAreaEdge  (line 3437, @0x0000000002edbd50, libserver.so)  // inlines: GetConnectedNode, GetPosition, IsBlockedInDirection, NavDirOpposite
// calls: FindJumpDownArea, CNavArea::ConnectTo
// callers: CNavGeneratorAAQuad::ConnectGeneratedAreas
// globals: CNavGeneratorAAQuad::ConnectAreaEdge(CNavArea &,NavDirType)::startCorner, CNavGeneratorAAQuad::ConnectAreaEdge(CNavArea &,NavDirType)::endCorner, CNavGeneratorAAQuad::ConnectAreaEdge(CNavArea &,NavDirType)::stepDir, CNavNode::IsBlockedInDirection(NavDirType)::s_TestType
void __fastcall CNavGeneratorAAQuad::ConnectAreaEdge(
        CNavGeneratorAAQuad *const this,
        CNavArea *const rArea,
        NavDirType dir)
{
  bool v3; // r13
  __int32 v4; // r15d
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r15
  CNavArea *v10; // rsi
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  CNavArea *JumpDownArea; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+10h] [rbp-70h]
  __int64 v16; // [rsp+10h] [rbp-70h]
  __int64 v17; // [rsp+18h] [rbp-68h]
  __int64 v18; // [rsp+18h] [rbp-68h]
  NavEdgeIndex nBackEdge; // [rsp+3Fh] [rbp-41h] BYREF
  Vector v22; // [rsp+40h] [rbp-40h] BYREF

  v3 = dir == NavDirType::NORTH || dir == NavDirType::WEST;
  v4 = (dir + 2) % 4;
  v5 = (*(this->_vptr_CNavGeneratorBase + 14))(this);
  v6 = *(v5 + 8LL * CNavGeneratorAAQuad::ConnectAreaEdge(CNavArea &,NavDirType)::startCorner[dir]);
  if ( v6 != *(v5 + 8LL * CNavGeneratorAAQuad::ConnectAreaEdge(CNavArea &,NavDirType)::endCorner[dir]) )
  {
    v7 = CNavGeneratorAAQuad::ConnectAreaEdge(CNavArea &,NavDirType)::stepDir[dir];
    v8 = v4;
    v9 = CNavGeneratorAAQuad::ConnectAreaEdge(CNavArea &,NavDirType)::endCorner[dir];
    do
    {
      v14 = *(v6 + 8LL * dir + 24);
      if ( v14 != 0 )
        v10 = *(v14 + 152);
      else
        v10 = 0;
      if ( !v3 )
        v10 = *(v6 + 152);
      if ( v10 != 0 && v14 != 0 && v6 == *(v14 + 8 * v8 + 24) )
      {
        v16 = v8;
        v18 = v7;
        CNavArea::ConnectTo(rArea, v10, dir, -1, 1);
        v7 = v18;
        v8 = v16;
      }
      else if ( *(v6 + CNavNode::IsBlockedInDirection(NavDirType)const::s_TestType[2 * dir] + 160) == 0
             && *(v6 + CNavNode::IsBlockedInDirection(NavDirType)const::s_TestType[2 * dir + 1] + 160) == 0
             && (v14 == 0
              || *(v14 + CNavNode::IsBlockedInDirection(NavDirType)const::s_TestType[2 * v8] + 160) == 0
              && *(v14 + CNavNode::IsBlockedInDirection(NavDirType)const::s_TestType[2 * v8 + 1] + 160) == 0) )
      {
        v15 = v8;
        v17 = v7;
        v11 = *(v6 + 4);
        v12 = *(v6 + 8);
        v22.x = *v6;
        v22.y = v11;
        v22.z = v12;
        JumpDownArea = FindJumpDownArea(&v22, rArea, dir, &nBackEdge);
        v7 = v17;
        v8 = v15;
        if ( rArea != JumpDownArea && JumpDownArea != 0 )
        {
          CNavArea::ConnectTo(rArea, JumpDownArea, dir, nBackEdge, 1);
          v8 = v15;
          v7 = v17;
        }
      }
      v6 = *(v6 + 8 * v7 + 24);
    }
    while ( *(v5 + 8 * v9) != v6 );
  }
}


// CNavGeneratorAAQuad::ReduceToComponentAreas  (line 3485, @0x0000000002eead00, libserver.so)  // inlines: AddToSet, AddToTail, CopyConstruct<CNavArea*>, Element, GetCorner, GetPolySizeX, GetPolySizeY, GetVert, GrowMemory, RoundToUnits, operator[]
// calls: CNavArea::SplitEditWrapper_Old, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow
// callers: nav_chop_selected, CNavGeneratorAAQuad::SimplifySelectedAreas
bool __fastcall CNavGeneratorAAQuad::ReduceToComponentAreas(
        CNavGeneratorAAQuad *const this,
        CNavArea *const rArea,
        bool bAddToSelectedSet)
{
  bool v3; // cl
  float x; // xmm3_4
  float y; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  bool v13; // al
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  bool v17; // bl
  CNavArea *v19; // r14
  CNavMesh *m_rNavMesh; // rbx
  CNavArea *v21; // r14
  CNavArea *v22; // r14
  CNavArea *v23; // r14
  __int64 v24; // r15
  int v25; // eax
  CNavArea **v26; // rax
  __int64 v27; // r15
  int v28; // eax
  CNavArea **v29; // rax
  __int64 v30; // r15
  int v31; // eax
  CNavArea **v32; // rax
  __int64 m_Size; // r15
  int v34; // eax
  CNavArea **v35; // rax
  float flSplitEdge; // [rsp+Ch] [rbp-74h]
  float flSplitEdgea; // [rsp+Ch] [rbp-74h]
  CNavArea *pFirstArea; // [rsp+10h] [rbp-70h] BYREF
  CNavArea *pSecondArea; // [rsp+18h] [rbp-68h] BYREF
  CNavArea *pThirdArea; // [rsp+20h] [rbp-60h] BYREF
  CNavArea *pFourthArea; // [rsp+28h] [rbp-58h] BYREF
  CNavArea *src; // [rsp+30h] [rbp-50h] BYREF
  CNavArea *v43; // [rsp+38h] [rbp-48h] BYREF
  CNavArea *v44; // [rsp+40h] [rbp-40h] BYREF
  CNavArea *v45; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0;
  pFirstArea = 0;
  x = rArea->m_vVerts[0].x;
  pSecondArea = 0;
  y = rArea->m_vVerts[0].y;
  pThirdArea = 0;
  pFourthArea = 0;
  v9 = fabs(y - rArea->m_vVerts[2].y);
  v10 = CNavGeneratorBase::sm_flGenerationStepSize;
  if ( fabs(x - rArea->m_vVerts[2].x) > CNavGeneratorBase::sm_flGenerationStepSize )
  {
    if ( x < 0.0 )
      v11 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
    else
      v11 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
    v12 = ((v11 + x) / CNavGeneratorBase::sm_flGenerationStepSize) * CNavGeneratorBase::sm_flGenerationStepSize;
    if ( (x + 2.0) > v12 )
      v12 = v12 + CNavGeneratorBase::sm_flGenerationStepSize;
    flSplitEdge = v9;
    v13 = CNavArea::SplitEditWrapper_Old(rArea, 0, v12, &pFirstArea, &pSecondArea);
    v10 = CNavGeneratorBase::sm_flGenerationStepSize;
    v9 = flSplitEdge;
    v3 = v13;
  }
  if ( v9 > v10 )
  {
    v14 = rArea->m_vVerts[0].y;
    if ( v14 < 0.0 )
      v15 = -v10 * 0.5;
    else
      v15 = 0.5 * v10;
    v16 = ((v15 + v14) / v10) * v10;
    if ( (v14 + 2.0) > v16 )
      v16 = v16 + v10;
    if ( v3 )
    {
      flSplitEdgea = v16;
      CNavArea::SplitEditWrapper_Old(pFirstArea, 1, v16, &pThirdArea, &pFourthArea);
      v3 = CNavArea::SplitEditWrapper_Old(pSecondArea, 1, flSplitEdgea, &pFirstArea, &pSecondArea);
    }
    else
    {
      v3 = CNavArea::SplitEditWrapper_Old(rArea, 1, v16, &pFirstArea, &pSecondArea);
    }
  }
  v17 = 0;
  if ( v3 )
  {
    if ( bAddToSelectedSet )
    {
      v19 = pFirstArea;
      m_rNavMesh = this->m_rNavMesh;
      src = pFirstArea;
      if ( pFirstArea != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &src) == -1 )
      {
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        v34 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v34 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v34 + 1;
        v35 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[m_Size];
        if ( v35 != 0 )
          *v35 = v19;
        m_rNavMesh = this->m_rNavMesh;
      }
      v21 = pSecondArea;
      v43 = pSecondArea;
      if ( pSecondArea != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &v43) == -1 )
      {
        v30 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        v31 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( v30 == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v31 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v31 + 1;
        v32 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v30];
        if ( v32 != 0 )
          *v32 = v21;
        m_rNavMesh = this->m_rNavMesh;
      }
      v22 = pThirdArea;
      v44 = pThirdArea;
      if ( pThirdArea != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &v44) == -1 )
      {
        v27 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        v28 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( v27 == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v28 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v28 + 1;
        v29 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v27];
        if ( v29 != 0 )
          *v29 = v22;
        m_rNavMesh = this->m_rNavMesh;
      }
      v23 = pFourthArea;
      v45 = pFourthArea;
      if ( pFourthArea != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &v45) == -1 )
      {
        v24 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        v25 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( v24 == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v25 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v25 + 1;
        v26 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v24];
        if ( v26 != 0 )
          *v26 = v23;
      }
    }
    if ( pFirstArea != 0 )
      CNavGeneratorAAQuad::ReduceToComponentAreas(this, pFirstArea, bAddToSelectedSet);
    if ( pSecondArea != 0 )
      CNavGeneratorAAQuad::ReduceToComponentAreas(this, pSecondArea, bAddToSelectedSet);
    if ( pThirdArea != 0 )
      CNavGeneratorAAQuad::ReduceToComponentAreas(this, pThirdArea, bAddToSelectedSet);
    v17 = 1;
    if ( pFourthArea != 0 )
      CNavGeneratorAAQuad::ReduceToComponentAreas(this, pFourthArea, bAddToSelectedSet);
  }
  return v17;
}


// CNavGeneratorAAQuad::SimplifySelectedAreas  (line 3552, @0x0000000002ef04e0, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, AddWalkableSeed, CUtlMemory, CUtlVector, CUtlVectorBase, ClearSelectionSet, ClearSet, ClearWalkableSeeds, CopyConstruct<CNavArea*>, CopyConstruct<CNavGeneratorBase::WalkableSeedSpot>, Element, Encompass, Extent, FixUpGeneratedAreas, ForAllSetAreas<NavAreaCollector>, GetBool, GetCenter, GetConnectedNode, GetCorner, GetExtent, GetFloat, GetInt, GetVert, GrowMemory, HandleObstacleTopAreas, HasElement, Init, Min<float>, NavAreaCollector, Purge, RemoveAll, RoundToUnits, SetValue, operator(), operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: __cxa_guard_acquire, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CNavMesh::SnapToGrid, CNavMesh::FindGroundForNode, CNavGeneratorAAQuad::GenerateNodes, CNavGeneratorAAQuad::ReduceToComponentAreas, CNavNode::GetNode, CNavGeneratorAAQuad::AssignNodes, Warning, CNavGeneratorAAQuad::MergeGeneratedAreas, CNavGeneratorAAQuad::SquareUpAreas, CNavGenerator::MarkJumpAreas (27 total)
// callers: nav_simplify_selected
// strings: "Area %d didn't get any nodes!\n", "nav_split_place_on_ground", "nav_snap_to_grid", "nav_coplanar_slope_limit"
// globals: `guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground, `guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit, CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground, CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit, `guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid, CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid
void __fastcall CNavGeneratorAAQuad::SimplifySelectedAreas(CNavGeneratorAAQuad *const this)
{
  ConVar *m_pConVarState; // rax
  __m128 m_fValue_low; // xmm6
  __m128 v4; // xmm0
  CNavMesh *m_rNavMesh; // r14
  INavEditor *m_pEditor; // rax
  int m_Size; // eax
  Vector *v8; // rbx
  __int64 v9; // r13
  int v10; // eax
  int v11; // eax
  CNavArea **v12; // rdx
  CNavArea *v13; // r12
  bool v14; // zf
  float v15; // xmm4_4
  Vector *v16; // rbx
  CNavArea *v17; // rax
  float x; // xmm0_4
  float v19; // xmm1_4
  float z; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  const CNavMesh *v24; // rdi
  vec_t v25; // xmm2_4
  float v26; // xmm1_4
  vec_t v27; // xmm0_4
  const CNavMesh *v28; // rdi
  float v29; // xmm1_4
  vec_t v30; // xmm0_4
  CNavMesh *v31; // rdi
  float v32; // xmm4_4
  float v33; // xmm2_4
  __int64 v34; // r14
  int v35; // eax
  CNavGeneratorBase::WalkableSeedSpot *v36; // rax
  __int64 v37; // rax
  float v38; // xmm0_4
  int v39; // eax
  unsigned __int64 v40; // rbx
  __int64 v41; // r12
  CNavArea *v42; // rsi
  CNavMesh *v43; // r14
  int v44; // eax
  CNavArea **v45; // r13
  CNavArea *v46; // rbx
  __int64 v47; // rax
  CNavMesh *v48; // rdi
  _QWORD *v49; // r12
  vec_t v50; // xmm1_4
  vec_t v51; // xmm0_4
  CNavNode *Node; // rax
  CNavNode *v53; // rdx
  CNavNode *v54; // rax
  CNavNode *v55; // rax
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v57; // rbx
  __int64 v58; // r13
  const CNavArea *v59; // r12
  const CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> > *vptr_INavEditor; // r14
  int v61; // eax
  const CNavArea **v62; // rax
  IConVar *m_pConVar; // rdi
  unsigned int v64; // [rsp+8h] [rbp-108h]
  float savedCoplanarSlopeLimit; // [rsp+Ch] [rbp-104h]
  INavEditor *v66; // [rsp+10h] [rbp-100h]
  int m_nValue; // [rsp+20h] [rbp-F0h]
  vec_t v68; // [rsp+24h] [rbp-ECh]
  vec_t v69; // [rsp+28h] [rbp-E8h]
  vec_t v70; // [rsp+2Ch] [rbp-E4h]
  vec_t v71; // [rsp+30h] [rbp-E0h]
  float v72; // [rsp+38h] [rbp-D8h]
  float src; // [rsp+40h] [rbp-D0h]
  CNavArea **srca; // [rsp+40h] [rbp-D0h]
  int srcb; // [rsp+40h] [rbp-D0h]
  Vector *vPos; // [rsp+48h] [rbp-C8h]
  Vector *vPosa; // [rsp+48h] [rbp-C8h]
  CNavArea *v78; // [rsp+58h] [rbp-B8h] BYREF
  Vector vCenter; // [rsp+60h] [rbp-B0h] BYREF
  Vector vCorner; // [rsp+70h] [rbp-A0h] BYREF
  Extent bounds; // [rsp+80h] [rbp-90h] BYREF
  Vector vNormal; // [rsp+A0h] [rbp-70h] BYREF
  float v83; // [rsp+ACh] [rbp-64h]
  float y; // [rsp+B0h] [rbp-60h]
  float v85; // [rsp+B4h] [rbp-5Ch]
  NavAreaCollector collector; // [rsp+C0h] [rbp-50h] BYREF

  if ( `guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground == 0
    && __cxa_guard_acquire(&`guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground,
      "nav_split_place_on_ground");
    __cxa_guard_release(&`guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground);
  }
  if ( `guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit == 0
    && __cxa_guard_acquire(&`guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit,
      "nav_coplanar_slope_limit");
    __cxa_guard_release(&`guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit);
  }
  m_pConVarState = CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground.m_pConVarState;
  this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_SIMPLIFY;
  m_nValue = m_pConVarState->m_Value.m_nValue;
  (*(CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground.m_pConVar->_vptr_IConVar + 2))(
    CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground.m_pConVar,
    1);
  m_fValue_low = LODWORD(CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit.m_pConVarState->m_Value.m_fValue);
  v4 = _mm_cmplt_ss(0x3F000000u, m_fValue_low);
  savedCoplanarSlopeLimit = CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit.m_pConVarState->m_Value.m_fValue;
  (*(CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit.m_pConVar->_vptr_IConVar + 1))(
    CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit.m_pConVar,
    COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*_mm_andnot_ps(v4, m_fValue_low).m128_u64) | v4.m128_i32[0] & 0x3F000000));
  if ( `guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid == 0
    && __cxa_guard_acquire(&`guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid) != 0 )
  {
    ConVarRef::ConVarRef(&CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid, "nav_snap_to_grid");
    __cxa_guard_release(&`guard variable for'CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid);
  }
  v64 = CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid.m_pConVarState->m_Value.m_nValue;
  (*(CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid.m_pConVar->_vptr_IConVar + 2))(
    CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid.m_pConVar,
    1);
  (*(this->m_rNavMesh->_vptr_CNavMesh + 27))(this->m_rNavMesh);
  m_rNavMesh = this->m_rNavMesh;
  m_pEditor = m_rNavMesh->m_pEditor;
  v66 = m_pEditor;
  if ( m_pEditor != 0 )
  {
    (*(m_pEditor->_vptr_INavEditor + 7))(m_rNavMesh->m_pEditor);
    m_rNavMesh = this->m_rNavMesh;
  }
  m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
  collector.m_Areas.m_Size = 0;
  collector.m_Areas.m_Memory.m_pMemory = 0;
  collector.m_Areas.m_Memory.m_nAllocationCount = 0;
  collector.m_Areas.m_Memory.m_nGrowSize = 0;
  collector.m_bCheckForDuplicates = 0;
  if ( m_Size != 0 )
  {
    v8 = 0;
    v9 = 0;
    vPos = (8LL * (m_Size - 1) + 8);
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *(m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory + v8);
        v14 = !v13->m_bShouldBeDestroyed;
        v78 = v13;
        if ( v14 )
          break;
LABEL_16:
        v8 = (v8 + 8);
        if ( v8 == vPos )
          goto LABEL_21;
      }
      if ( !collector.m_bCheckForDuplicates
        || CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&collector.m_Areas, &v78) < 0 )
      {
        if ( collector.m_Areas.m_Memory.m_nAllocationCount == v9 )
        {
          CUtlMemory<CNavArea *,int>::Grow(&collector.m_Areas.m_Memory, 1);
          v10 = collector.m_Areas.m_Size;
        }
        else
        {
          v10 = v9;
        }
        v11 = v10 + 1;
        collector.m_Areas.m_Size = v11;
        v12 = &collector.m_Areas.m_Memory.m_pMemory[v9];
        if ( v12 != 0 )
        {
          *v12 = v13;
          v9 = collector.m_Areas.m_Size;
        }
        else
        {
          v9 = v11;
        }
        goto LABEL_16;
      }
      v8 = (v8 + 8);
      if ( v8 == vPos )
        goto LABEL_21;
    }
  }
  LODWORD(v9) = 0;
LABEL_21:
  v15 = 3.4028235e38;
  this->m_walkableSeeds.m_Size = 0;
  bounds.hi.x = -3.4028235e38;
  bounds.lo.x = 3.4028235e38;
  bounds.lo.y = 3.4028235e38;
  bounds.lo.z = 3.4028235e38;
  bounds.hi.y = -3.4028235e38;
  bounds.hi.z = -3.4028235e38;
  if ( v9 != 0 )
  {
    v16 = 0;
    vPosa = (8LL * (v9 - 1) + 8);
    while ( 1 )
    {
      v17 = *(collector.m_Areas.m_Memory.m_pMemory + v16);
      x = v17->m_Extent.lo.x;
      vNormal.x = x;
      vNormal.y = v17->m_Extent.lo.y;
      v19 = v17->m_Extent.hi.x;
      z = v17->m_Extent.lo.z;
      v83 = v19;
      y = v17->m_Extent.hi.y;
      v21 = v17->m_Extent.hi.z;
      vNormal.z = z - 35.5;
      v85 = v21 + 142.0;
      if ( v15 > x )
        bounds.lo.x = x;
      if ( x > bounds.hi.x )
        bounds.hi.x = x;
      v22 = bounds.lo.y;
      if ( bounds.lo.y > vNormal.y )
      {
        bounds.lo.y = vNormal.y;
        v22 = vNormal.y;
      }
      if ( vNormal.y > bounds.hi.y )
        bounds.hi.y = vNormal.y;
      v23 = bounds.lo.z;
      if ( bounds.lo.z > vNormal.z )
      {
        bounds.lo.z = vNormal.z;
        v23 = vNormal.z;
      }
      if ( vNormal.z > bounds.hi.z )
        bounds.hi.z = vNormal.z;
      if ( bounds.lo.x > v19 )
        bounds.lo.x = v19;
      if ( v19 > bounds.hi.x )
        bounds.hi.x = v19;
      if ( v22 > y )
        bounds.lo.y = y;
      if ( y > bounds.hi.y )
        bounds.hi.y = y;
      if ( v23 > v85 )
        bounds.lo.z = v85;
      if ( v85 > bounds.hi.z )
        bounds.hi.z = v85;
      v24 = this->m_rNavMesh;
      v25 = v17->m_vCenter.y;
      v26 = v17->m_vCenter.z;
      vCenter.x = v17->m_vCenter.x;
      vCenter.y = v25;
      vCenter.z = v26;
      v27 = CNavMesh::SnapToGrid(v24, v26, 0);
      v28 = this->m_rNavMesh;
      vCenter.x = v27;
      v30 = CNavMesh::SnapToGrid(v28, v29, 0);
      v31 = this->m_rNavMesh;
      vCenter.y = v30;
      if ( CNavMesh::FindGroundForNode(v31, &vCenter, &vCorner) )
      {
        if ( vCenter.x < 0.0 )
          v32 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
        else
          v32 = CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
        src = ((vCenter.x + v32) / CNavGeneratorBase::sm_flGenerationStepSize)
            * CNavGeneratorBase::sm_flGenerationStepSize;
        if ( vCenter.y < 0.0 )
          v33 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
        else
          v33 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
        v34 = this->m_walkableSeeds.m_Size;
        v71 = vCenter.z;
        v70 = vCorner.x;
        v68 = vCorner.z;
        v35 = v34;
        v69 = vCorner.y;
        v72 = CNavGeneratorBase::sm_flGenerationStepSize
            * ((vCenter.y + v33) / CNavGeneratorBase::sm_flGenerationStepSize);
        if ( v34 == this->m_walkableSeeds.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavGeneratorBase::WalkableSeedSpot,int>::Grow(&this->m_walkableSeeds.m_Memory, 1);
          v35 = this->m_walkableSeeds.m_Size;
        }
        this->m_walkableSeeds.m_Size = v35 + 1;
        v36 = &this->m_walkableSeeds.m_Memory.m_pMemory[v34];
        if ( v36 != 0 )
        {
          v36->vPos.x = src;
          v36->vPos.y = v72;
          v36->vPos.z = v71;
          v36->vNormal.x = v70;
          v36->vNormal.y = v69;
          v36->vNormal.z = v68;
        }
        v37 = 0;
        vCenter.z = vCenter.z + 71.0;
        do
        {
          v38 = *(&vCenter.x + v37);
          if ( *(&bounds.lo.x + v37) > v38 )
            *(&bounds.lo.x + v37) = v38;
          if ( v38 > *(&bounds.hi.x + v37) )
            *(&bounds.hi.x + v37) = v38;
          v37 += 4;
        }
        while ( v37 != 12 );
        v16 = (v16 + 8);
        if ( v16 == vPosa )
          break;
      }
      else
      {
        v16 = (v16 + 8);
        if ( v16 == vPosa )
          break;
      }
      v15 = bounds.lo.x;
    }
  }
  (*(this->_vptr_CNavGeneratorBase + 5))(this);
  CNavGeneratorAAQuad::GenerateNodes(this, &bounds);
  v39 = collector.m_Areas.m_Size;
  this->m_walkableSeeds.m_Size = 0;
  if ( v39 != 0 )
  {
    v40 = 0;
    v41 = 8LL * (v39 - 1) + 8;
    do
    {
      v42 = collector.m_Areas.m_Memory.m_pMemory[v40 / 8];
      if ( v42 != 0 )
        CNavGeneratorAAQuad::ReduceToComponentAreas(this, v42, 1);
      v40 += 8LL;
    }
    while ( v40 != v41 );
  }
  v43 = this->m_rNavMesh;
  v44 = v43->m_SelectionSet.m_SetAreas.m_Size;
  if ( v44 != 0 )
  {
    v45 = 0;
    srca = (8LL * (v44 - 1) + 8);
    while ( 1 )
    {
      v46 = *(v43->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory + v45);
      v47 = (*(this->_vptr_CNavGeneratorBase + 14))(this, v46);
      v48 = this->m_rNavMesh;
      v49 = v47;
      v50 = v46->m_vVerts[1].z;
      v51 = v46->m_vVerts[1].x;
      vCorner.y = v46->m_vVerts[1].y;
      vCorner.z = v50;
      vCorner.x = v51;
      if ( CNavMesh::FindGroundForNode(v48, &vCorner, &vNormal) )
      {
        Node = CNavNode::GetNode(&vCorner);
        v49[1] = Node;
        if ( Node == 0 )
          goto LABEL_83;
        v53 = Node->m_to[3];
        *v49 = v53;
        v54 = Node->m_to[2];
        v49[2] = v54;
        if ( v54 != 0 )
        {
          v55 = v54->m_to[3];
          v49[3] = v55;
          if ( v53 != 0 && v55 != 0 )
          {
            CNavGeneratorAAQuad::AssignNodes(this, v46, v46);
            if ( v49[1] == 0 )
              goto LABEL_83;
          }
        }
LABEL_73:
        if ( *v49 == 0 || v49[2] == 0 || v49[3] == 0 )
          goto LABEL_83;
        if ( ++v45 == srca )
          break;
      }
      else
      {
        if ( v49[1] != 0 )
          goto LABEL_73;
LABEL_83:
        Warning("Area %d didn't get any nodes!\n", v46->m_AreaId);
        if ( ++v45 == srca )
          break;
      }
    }
  }
  CNavGeneratorAAQuad::MergeGeneratedAreas(this);
  CNavGeneratorAAQuad::SquareUpAreas(this);
  CNavGenerator::MarkJumpAreas(this);
  CNavGenerator::SplitAreasUnderOverhangs(this);
  CNavGenerator::MarkStairAreas(this);
  CNavGenerator::StichAndRemoveJumpAreas(this);
  if ( nav_generate_fencetops.m_pParent->m_Value.m_nValue != 0 )
    CNavGeneratorAAQuad::HandleObstacleTopAreas(this);
  CNavGeneratorAAQuad::FixCornerOnCornerAreas(this);
  CNavGeneratorAAQuad::FixConnections(this);
  if ( v66 != 0 )
  {
    *(v66[1]._vptr_INavEditor + 24) = 0;
    m_rNavAreas = this->m_rNavAreas;
    if ( m_rNavAreas->m_Size != 0 )
    {
      v57 = 0;
      v58 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
      while ( 1 )
      {
        v59 = m_rNavAreas->m_Memory.m_pMemory[v57 / 8];
        if ( !CNavGeneratorAAQuad::AreaHasNodes(this, v59) )
          goto LABEL_89;
        vptr_INavEditor = v66[1]._vptr_INavEditor;
        *&vNormal.x = v59;
        if ( v59 == 0
          || CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(vptr_INavEditor + 4, &vNormal) != -1 )
        {
          goto LABEL_89;
        }
        v61 = vptr_INavEditor[4].m_Size;
        srcb = v61;
        if ( v61 == vptr_INavEditor[4].m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&vptr_INavEditor[4].m_Memory, 1);
          v61 = vptr_INavEditor[4].m_Size;
        }
        vptr_INavEditor[4].m_Size = v61 + 1;
        v62 = &vptr_INavEditor[4].m_Memory.m_pMemory[srcb];
        if ( v62 != 0 )
        {
          v57 += 8LL;
          *v62 = v59;
          if ( v57 == v58 )
            break;
        }
        else
        {
LABEL_89:
          v57 += 8LL;
          if ( v57 == v58 )
            break;
        }
        m_rNavAreas = this->m_rNavAreas;
      }
    }
  }
  (*(this->_vptr_CNavGeneratorBase + 5))(this);
  m_pConVar = CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_split_place_on_ground.m_pConVar;
  this->m_generationMode = CNavGeneratorBase::GenerationModeType::GENERATE_NONE;
  (*(m_pConVar->_vptr_IConVar + 2))(m_pConVar, m_nValue != 0);
  (*(CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit.m_pConVar->_vptr_IConVar + 1))(
    CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_coplanar_slope_limit.m_pConVar,
    savedCoplanarSlopeLimit);
  (*(CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid.m_pConVar->_vptr_IConVar + 2))(
    CNavGeneratorAAQuad::SimplifySelectedAreas(void)::nav_snap_to_grid.m_pConVar,
    v64);
  collector.m_Areas.m_Size = 0;
  if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
    if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
  }
}


// CNavGeneratorAAQuad::GetNodesForArea  (line 3696, @0x0000000002ef7730, libserver.so)  // inlines: CUtlKeyValuePair<unsigned int, CNavNodesForArea>, Construct<CUtlKeyValuePair<unsigned int, CNavNodesForArea>, unsigned int, CNavNodesForArea>, DoInsert<unsigned int>, DoLookup<unsigned int>, Element, Find, Insert, operator(), operator[]
// calls: CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoLookup<unsigned int>
CNavNodesForArea *__fastcall CNavGeneratorAAQuad::GetNodesForArea(
        CNavGeneratorAAQuad *const this,
        const CNavArea *const rArea)
{
  CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> >::handle_t *v2; // rcx
  CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> > *p_m_NodesForAreas; // r14
  uint32 m_AreaId; // r13d
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // r12d
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *m_pMemory; // rcx
  __int64 v10; // rax
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v11; // rdx

  p_m_NodesForAreas = &this->m_NodesForAreas;
  m_AreaId = rArea->m_AreaId;
  v6 = 33 * (((4097 * m_AreaId + 2127912214) >> 19) ^ (4097 * m_AreaId + 2127912214) ^ 0xC761C23C);
  v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
  v8 = HIWORD(v7) ^ v7 ^ 0xB55A4F09;
  if ( this->m_NodesForAreas.m_nUsed == 0
    || (LODWORD(v10) = CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoLookup<unsigned int>(
                         &this->m_NodesForAreas,
                         m_AreaId,
                         v8,
                         v2),
        v10 == -1) )
  {
    LODWORD(v10) = CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoInsertUnconstructed(
                     p_m_NodesForAreas,
                     v8,
                     1);
    m_pMemory = this->m_NodesForAreas.m_table.m_pMemory;
    v10 = v10;
    v11 = &m_pMemory[v10];
    if ( v11 != -4LL )
    {
      v11->data[0] = m_AreaId;
      *&v11->data[2] = 0;
      *&v11->data[4] = 0;
      *&v11->data[6] = 0;
      *&v11->data[8] = 0;
      m_pMemory = this->m_NodesForAreas.m_table.m_pMemory;
    }
  }
  else
  {
    m_pMemory = this->m_NodesForAreas.m_table.m_pMemory;
    v10 = v10;
  }
  return &m_pMemory[v10].data[2];
}


// CNavGeneratorAAQuad::AreaHasNodes  (line 3711, @0x0000000002edbf60, libserver.so)  // inlines: DoLookup<unsigned int>, Element, Find, HasNodes, operator(), operator[]
// calls: CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoLookup<unsigned int>
// callers: CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, CNavGeneratorAAQuad::ConnectGeneratedAreas, CNavGeneratorAAQuad::StitchGeneratedAreas, CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea, CNavGeneratorAAQuad::MergeGeneratedAreas, CNavGeneratorAAQuad::FinishSplitEdit, CNavGeneratorAAQuad::SquareUpAreas, CNavGeneratorAAQuad::FindClosestNode, CNavGeneratorAAQuad::FixConnections, CNavGeneratorAAQuad::SimplifySelectedAreas
bool __fastcall CNavGeneratorAAQuad::AreaHasNodes(const CNavGeneratorAAQuad *const this, const CNavArea *pArea)
{
  CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> >::handle_t *v2; // rcx
  bool v3; // bl
  uint32 m_AreaId; // esi
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = 0;
  if ( pArea != 0 )
  {
    m_AreaId = pArea->m_AreaId;
    if ( this->m_NodesForAreas.m_nUsed != 0 )
    {
      v7 = 33 * (((4097 * m_AreaId + 2127912214) >> 19) ^ (4097 * m_AreaId + 2127912214) ^ 0xC761C23C);
      v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
      v9 = CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoLookup<unsigned int>(
             &this->m_NodesForAreas,
             m_AreaId,
             HIWORD(v8) ^ v8 ^ 0xB55A4F09,
             v2);
      if ( v9 != -1 )
      {
        v10 = v9;
        v11 = 0;
        while ( *&this->m_NodesForAreas.m_table.m_pMemory[v10].data[v11 + 2] == 0 )
        {
          v11 += 2;
          if ( v11 == 8 )
            return 0;
        }
        return 1;
      }
    }
  }
  return v3;
}


// CNavGeneratorAAQuad::AssignNodes  (line 3729, @0x0000000002edd020, libserver.so)  // inlines: AssignArea, GetConnectedNode
// callers: CNavGeneratorAAQuad::BuildAreaFromNodes, CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea, CNavGeneratorAAQuad::FinishSplitEdit, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGeneratorAAQuad::AssignNodes(
        CNavGeneratorAAQuad *const this,
        CNavArea *const rSrcArea,
        CNavArea *const rDstArea)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 i; // rsi
  __int64 v7; // rcx

  v4 = (*(this->_vptr_CNavGeneratorBase + 14))(this, rSrcArea);
  v5 = *v4;
  for ( i = v4[1]; v4[3] != v5; i = *(i + 40) )
  {
    if ( v5 != i )
    {
      v7 = v5;
      do
      {
        *(v7 + 152) = rDstArea;
        v7 = *(v7 + 32);
      }
      while ( v7 != i );
    }
    v5 = *(v5 + 40);
  }
}


// CNavGeneratorAAQuad::ResetGeneratorData  (line 3749, @0x0000000002ec9590, libserver.so)  // inlines: Reset
// calls: CNavNode::CleanupGeneration
void __fastcall CNavGeneratorAAQuad::ResetGeneratorData(CNavGeneratorAAQuad *const this)
{
  CNavMesh *m_rNavMesh; // r14
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  CNavArea *v6; // rsi
  _QWORD *v7; // rax

  m_rNavMesh = this->m_rNavMesh;
  m_Size = m_rNavMesh->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v4 = 0;
    v5 = 8LL * (m_Size - 1) + 8;
    do
    {
      v6 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v4 / 8];
      v4 += 8LL;
      v7 = (*(this->_vptr_CNavGeneratorBase + 14))(this, v6);
      *v7 = 0;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 0;
    }
    while ( v4 != v5 );
  }
  CNavNode::CleanupGeneration();
}


// CNavGeneratorAAQuad::GenerateNodes  (line 3778, @0x0000000002edde20, libserver.so)  // inlines: operator=
// calls: CNavGeneratorAAQuad::GenerationSampleStep
// callers: CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGeneratorAAQuad::GenerateNodes(CNavGeneratorAAQuad *const this, const Extent *const rBounds)
{
  vec_t z; // xmm0_4

  this->m_simplifyGenerationExtent.lo = rBounds->lo;
  this->m_simplifyGenerationExtent.hi.x = rBounds->hi.x;
  this->m_simplifyGenerationExtent.hi.y = rBounds->hi.y;
  z = rBounds->hi.z;
  this->m_nWalkableSeedIdx = 0;
  this->m_simplifyGenerationExtent.hi.z = z;
  while ( CNavGeneratorAAQuad::GenerationSampleStep(this) )
    ;
}


// CNavGeneratorAAQuad::SquareUpAreas  (line 3792, @0x0000000002eddea0, libserver.so)  // inlines: GetPolySizeX, GetPolySizeY
// calls: CNavGeneratorAAQuad::AreaHasNodes, CNavPoly::HasLowAspectRatio, splitX, splitY
// callers: CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGeneratorAAQuad::SquareUpAreas(CNavGeneratorAAQuad *const this)
{
  __int64 v2; // rbx
  const NavAreaVector *m_rNavAreas; // r13
  int m_Size; // r14d
  CNavArea *v5; // r12

  v2 = 0;
  m_rNavAreas = this->m_rNavAreas;
  m_Size = m_rNavAreas->m_Size;
  while ( m_Size > v2 )
  {
    v5 = m_rNavAreas->m_Memory.m_pMemory[v2];
    if ( CNavGeneratorAAQuad::AreaHasNodes(this, v5) )
    {
      if ( !CNavPoly::HasLowAspectRatio(v5) )
      {
        if ( fabs(v5->m_vVerts[0].x - v5->m_vVerts[2].x) > fabs(v5->m_vVerts[0].y - v5->m_vVerts[2].y) )
        {
          splitX(v5);
          m_rNavAreas = this->m_rNavAreas;
          m_Size = m_rNavAreas->m_Size;
          goto LABEL_2;
        }
        splitY(v5);
      }
      m_rNavAreas = this->m_rNavAreas;
      m_Size = m_rNavAreas->m_Size;
    }
LABEL_2:
    ++v2;
  }
}


// CNavGeneratorAAQuad::HandleObstacleTopAreas  (line 3820, @0x0000000002eed3c0, libserver.so)
// calls: CNavGeneratorAAQuad::RaiseAreasWithInternalObstacles, CNavGeneratorAAQuad::CreateObstacleTopAreas, CNavGeneratorAAQuad::RemoveOverlappingObstacleTopAreas
// callers: CNavGeneratorAAQuad::HandleObstacleTopAreas, CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavGeneratorAAQuad::SimplifySelectedAreas
void __fastcall CNavGeneratorAAQuad::HandleObstacleTopAreas(CNavGeneratorAAQuad *const this)
{
  CNavGeneratorAAQuad::RaiseAreasWithInternalObstacles(this);
  CNavGeneratorAAQuad::CreateObstacleTopAreas(this);
  CNavGeneratorAAQuad::RemoveOverlappingObstacleTopAreas(this);
}


// CNavGeneratorAAQuad::HandleObstacleTopAreas  (line 3820, @0x0000000002eed3f0, libserver.so)  // inlines: GetBool, GetInt
// calls: CNavGeneratorAAQuad::HandleObstacleTopAreas
void __fastcall CNavGeneratorAAQuad::HandleObstacleTopAreas(CNavGeneratorAAQuad *const this)
{
  if ( nav_generate_fencetops.m_pParent->m_Value.m_nValue != 0 )
    CNavGeneratorAAQuad::HandleObstacleTopAreas(this);
}


// AdjustObstacleDistances  (line 3841, @0x0000000002eddf60, libserver.so)  // inlines: Max<float>
// callers: CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CNavGeneratorAAQuad::RaiseAreasWithInternalObstacles
void __fastcall AdjustObstacleDistances(
        float *pObstacleStartDist,
        float *pObstacleEndDist,
        float a3,
        float maxAllowedDist)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm2_4

  v4 = 10.0;
  v5 = *pObstacleEndDist - *pObstacleStartDist;
  if ( v5 < 10.0 )
  {
    v6 = *pObstacleStartDist - (0.5 * (10.0 - v5));
    if ( v6 <= 0.0 )
      v6 = 0.0;
    else
      v4 = v6 + 10.0;
    *pObstacleStartDist = v6;
    *pObstacleEndDist = v4;
    if ( v4 > a3 )
    {
      v7 = v4 - a3;
      *pObstacleStartDist = *pObstacleStartDist - v7;
      *pObstacleEndDist = *pObstacleEndDist - v7;
    }
  }
}


// CNavGeneratorAAQuad::RaiseAreasWithInternalObstacles  (line 3865, @0x0000000002eecce0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Count, Element, GetCorner, GetPolySizeX, GetPolySizeY, GetVert, GrowMemory, Max<float>, Min<float>, Purge, RemoveAll, RemoveAttributes, RemoveFlags, Reset, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: AdjustObstacleDistances, CNavPoly::SetCorners, CNavGenerator::RemoveOrthogonalConnectionsForArea, CUtlMemory<CNavArea*, int>::Grow, CUtlMemory<CNavArea*, int>::Purge, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavGeneratorAAQuad::HandleObstacleTopAreas
void __fastcall CNavGeneratorAAQuad::RaiseAreasWithInternalObstacles(CNavGeneratorAAQuad *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  CNavArea *v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbx
  NavCornerType v6; // r13d
  __int64 v7; // rax
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  int v12; // eax
  CNavConnect *i; // rdx
  float *v14; // rax
  int *m_vVerts; // rdx
  int v16; // xmm0_4
  int v17; // xmm2_4
  int v18; // xmm1_4
  float v19; // xmm0_4
  float x; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 m_Size; // rbx
  int v27; // eax
  CNavArea **v28; // rax
  float v29; // xmm0_4
  __int64 v30; // r12
  int j; // ebx
  __int64 v32; // [rsp+8h] [rbp-E8h]
  vec_t v33; // [rsp+10h] [rbp-E0h]
  vec_t v34; // [rsp+14h] [rbp-DCh]
  NavDirType obstacleDir; // [rsp+18h] [rbp-D8h]
  bool bIsStairNeighbor; // [rsp+1Fh] [rbp-D1h]
  float flObstacleZMax; // [rsp+28h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+30h] [rbp-C0h]
  __int64 v39; // [rsp+40h] [rbp-B0h]
  int nEdgesBlocked; // [rsp+48h] [rbp-A8h]
  float obstacleStartDistThisDir; // [rsp+4Ch] [rbp-A4h]
  float flObstacleStartDist; // [rsp+58h] [rbp-98h] BYREF
  float flObstacleEndDist; // [rsp+5Ch] [rbp-94h] BYREF
  _DWORD corner_0[4]; // [rsp+60h] [rbp-90h]
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > areasToDelete; // [rsp+70h] [rbp-80h] BYREF
  float obstacleZThisDir[2]; // [rsp+90h] [rbp-60h] BYREF
  vec_t v47; // [rsp+98h] [rbp-58h]
  Vector v48; // [rsp+9Ch] [rbp-54h] BYREF
  Vector v49; // [rsp+A8h] [rbp-48h] BYREF
  Vector v50; // [rsp+B4h] [rbp-3Ch] BYREF
  char v51; // [rsp+C0h] [rbp-30h] BYREF

  areasToDelete.m_Size = 0;
  m_rNavAreas = this->m_rNavAreas;
  areasToDelete.m_Memory.m_pMemory = 0;
  areasToDelete.m_Memory.m_nAllocationCount = 0;
  areasToDelete.m_Memory.m_nGrowSize = 0;
  if ( m_rNavAreas->m_Size == 0 )
    goto LABEL_57;
  v38 = 0;
  v32 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
  while ( 2 )
  {
    v3 = m_rNavAreas->m_Memory.m_pMemory[v38 / 8];
    if ( CNavGeneratorBase::sm_flGenerationStepSize != fabs(v3->m_vVerts[0].x - v3->m_vVerts[2].x)
      || CNavGeneratorBase::sm_flGenerationStepSize != fabs(v3->m_vVerts[0].y - v3->m_vVerts[2].y) )
    {
      goto LABEL_31;
    }
    flObstacleStartDist = CNavGeneratorBase::sm_flGenerationStepSize;
    v4 = 0;
    flObstacleEndDist = 0.0;
    obstacleStartDistThisDir = CNavGeneratorBase::sm_flGenerationStepSize;
    v34 = -3.4028235e38;
    v33 = -3.4028235e38;
    bIsStairNeighbor = 0;
    obstacleDir = NavDirType::NORTH;
    flObstacleZMax = -3.4028235e38;
    while ( 2 )
    {
      v5 = 0;
      obstacleZThisDir[0] = -3.4028235e38;
      corner_0[1] = (v4 + 2) & 3;
      v6 = (v4 + 3) & 3;
      corner_0[0] = v6;
      obstacleZThisDir[1] = -3.4028235e38;
      nEdgesBlocked = 0;
      v39 = 4LL * v4;
      while ( 1 )
      {
        v7 = *((*(this->_vptr_CNavGeneratorBase + 14))(this, v3) + 8LL * v6);
        if ( v7 != 0 )
        {
          v9 = *(v7 + v39 + 56);
          if ( v9 > 18.0 )
          {
            v10 = v9 + *(v7 + 8);
            ++nEdgesBlocked;
            if ( v10 > obstacleZThisDir[v5] )
              obstacleZThisDir[v5] = v10;
            obstacleStartDistThisDir = fminf(*(v7 + v39 + 72), obstacleStartDistThisDir);
          }
        }
        if ( ++v5 == 2 )
          break;
        v6 = corner_0[v5];
      }
      m_pData = v3->m_connect[v4].m_pData;
      v12 = 0;
      for ( i = m_pData->m_Elements; ; ++i )
      {
        if ( m_pData != 0 )
        {
          if ( v12 >= m_pData->m_Size )
            goto LABEL_21;
        }
        else if ( v12 >= 0 )
        {
LABEL_21:
          if ( nEdgesBlocked >= 2 )
            goto LABEL_25;
          goto LABEL_22;
        }
        if ( i->m_pArea != 0 && (i->m_pArea->m_AreaAttributes.m_Flags & 0x1000) != 0 )
          break;
        ++v12;
      }
      bIsStairNeighbor = 1;
      if ( nEdgesBlocked < 1 )
        goto LABEL_22;
LABEL_25:
      v8 = obstacleZThisDir[0];
      if ( obstacleZThisDir[0] <= obstacleZThisDir[1] )
      {
        if ( obstacleZThisDir[1] > flObstacleZMax )
        {
          if ( obstacleZThisDir[0] <= obstacleZThisDir[1] )
            flObstacleZMax = obstacleZThisDir[1];
          else
LABEL_35:
            flObstacleZMax = obstacleZThisDir[0];
          v33 = obstacleZThisDir[1];
          v34 = obstacleZThisDir[0];
          flObstacleStartDist = obstacleStartDistThisDir;
          flObstacleEndDist = obstacleStartDistThisDir;
          obstacleDir = v4;
        }
LABEL_22:
        if ( ++v4 == 4 )
          goto LABEL_28;
LABEL_23:
        obstacleStartDistThisDir = CNavGeneratorBase::sm_flGenerationStepSize;
        continue;
      }
      break;
    }
    if ( obstacleZThisDir[0] > flObstacleZMax )
      goto LABEL_35;
    if ( ++v4 != 4 )
      goto LABEL_23;
LABEL_28:
    if ( bIsStairNeighbor && flObstacleZMax > -3.4028235e38 )
    {
      m_Size = areasToDelete.m_Size;
      v27 = areasToDelete.m_Size;
      if ( areasToDelete.m_Size == areasToDelete.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CNavArea *,int>::Grow(&areasToDelete.m_Memory, 1);
        v27 = areasToDelete.m_Size;
      }
      areasToDelete.m_Size = v27 + 1;
      v28 = &areasToDelete.m_Memory.m_pMemory[m_Size];
      if ( v28 != 0 )
        *v28 = v3;
    }
    else
    {
      if ( flObstacleZMax <= -3.4028235e38 )
        goto LABEL_31;
      AdjustObstacleDistances(&flObstacleStartDist, &flObstacleEndDist, CNavGeneratorBase::sm_flGenerationStepSize, v8);
      v14 = obstacleZThisDir;
      m_vVerts = v3->m_vVerts;
      do
      {
        v16 = *m_vVerts;
        v14 += 3;
        m_vVerts += 3;
        v17 = *(m_vVerts - 2);
        v18 = *(m_vVerts - 1);
        *(v14 - 3) = v16;
        *(v14 - 2) = v17;
        *(v14 - 1) = v18;
      }
      while ( v14 != &v51 );
      if ( obstacleDir == NavDirType::EAST )
      {
        v19 = flObstacleEndDist;
        v21 = v50.x + flObstacleEndDist;
        x = obstacleZThisDir[0] + flObstacleEndDist;
LABEL_44:
        v22 = x - v19;
        v50.x = v21 - v19;
        v23 = v34;
        obstacleZThisDir[0] = v22;
        v34 = v33;
        v48.x = x - flObstacleStartDist;
        v49.x = v21 - flObstacleStartDist;
        v33 = v23;
      }
      else if ( obstacleDir <= NavDirType::EAST )
      {
        if ( obstacleDir == NavDirType::NORTH )
        {
          obstacleZThisDir[1] = v50.y - flObstacleEndDist;
          v48.y = v49.y - flObstacleEndDist;
          v50.y = v50.y - flObstacleStartDist;
          v49.y = v49.y - flObstacleStartDist;
        }
      }
      else if ( obstacleDir == NavDirType::SOUTH )
      {
        v50.y = obstacleZThisDir[1] + flObstacleEndDist;
        v49.y = flObstacleEndDist + v48.y;
        obstacleZThisDir[1] = obstacleZThisDir[1] + flObstacleStartDist;
        v48.y = flObstacleStartDist + v48.y;
        v29 = v34;
        v34 = v33;
        v33 = v29;
      }
      else if ( obstacleDir == NavDirType::WEST )
      {
        v19 = flObstacleEndDist;
        x = v48.x;
        v21 = v49.x;
        goto LABEL_44;
      }
      v47 = v34;
      v48.z = v33;
      v49.z = v33;
      v50.z = v34;
      CNavPoly::SetCorners(v3, obstacleZThisDir, &v48, &v49, &v50);
      CNavGenerator::RemoveOrthogonalConnectionsForArea(this, v3, obstacleDir);
      v24 = v3->m_AreaAttributes.m_Flags & 0xFFFFFFFFFFFFFFFDLL;
      BYTE1(v24) |= 0x60u;
      v3->m_AreaAttributes.m_Flags = v24;
      v25 = (*(this->_vptr_CNavGeneratorBase + 14))(this, v3);
      *v25 = 0;
      v25[1] = 0;
      v25[2] = 0;
      v25[3] = 0;
    }
LABEL_31:
    v38 += 8LL;
    if ( v38 != v32 )
    {
      m_rNavAreas = this->m_rNavAreas;
      continue;
    }
    break;
  }
  v30 = 0;
  for ( j = 0; areasToDelete.m_Size > j; ++v30 )
  {
    (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, areasToDelete.m_Memory.m_pMemory[v30]);
    ++j;
  }
LABEL_57:
  areasToDelete.m_Size = 0;
  if ( (areasToDelete.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&areasToDelete.m_Memory);
    if ( (areasToDelete.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&areasToDelete.m_Memory);
  }
}


// CNavGeneratorAAQuad::RemoveOverlappingObstacleTopAreas  (line 4036, @0x0000000002eec830, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Element, GetFloat, GrowMemory, Purge, RemoveAll, RemoveFromSet, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CNavPoly::IsOverlappingPoly, CNavPoly::ContainsPoly, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove, CUtlMemory<CNavArea*, int>::Grow, CUtlMemory<CNavArea*, int>::Purge, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavGeneratorAAQuad::HandleObstacleTopAreas
void __fastcall CNavGeneratorAAQuad::RemoveOverlappingObstacleTopAreas(CNavGeneratorAAQuad *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r14
  CNavArea *v5; // r13
  int m_Size; // edx
  int v7; // edx
  CNavArea **v8; // rax
  __int64 v9; // rbx
  const CNavPoly *v10; // r14
  __int64 v11; // rbx
  int v12; // r12d
  int v13; // eax
  const CNavPoly *v14; // r13
  int v15; // eax
  CNavArea **v16; // rax
  int v17; // eax
  CNavGeneratorAAQuad *v18; // r14
  CNavSelectionSet *p_m_SelectionSet; // rdi
  __int64 v20; // r13
  int v21; // eax
  CNavArea **v22; // rax
  __int64 v23; // r12
  int v24; // eax
  CNavArea **v25; // rax
  __int64 v27; // [rsp+10h] [rbp-A0h]
  int v28; // [rsp+18h] [rbp-98h]
  int it2; // [rsp+1Ch] [rbp-94h]
  int v30; // [rsp+20h] [rbp-90h]
  CNavArea *pAreaToDelete; // [rsp+30h] [rbp-80h] BYREF
  CNavArea *src; // [rsp+38h] [rbp-78h] BYREF
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > vecObstacleTopAreas; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > vecAreasToRemove; // [rsp+60h] [rbp-50h] BYREF

  vecObstacleTopAreas.m_Size = 0;
  m_rNavAreas = this->m_rNavAreas;
  vecObstacleTopAreas.m_Memory.m_pMemory = 0;
  vecObstacleTopAreas.m_Memory.m_nAllocationCount = 0;
  vecObstacleTopAreas.m_Memory.m_nGrowSize = 0;
  if ( m_rNavAreas->m_Size == 0 )
  {
    vecAreasToRemove.m_Memory.m_pMemory = 0;
    vecAreasToRemove.m_Memory.m_nAllocationCount = 0;
    vecAreasToRemove.m_Memory.m_nGrowSize = 0;
    goto LABEL_26;
  }
  v2 = 0;
  v3 = 0;
  v4 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
  while ( 1 )
  {
    v28 = v3;
    v5 = m_rNavAreas->m_Memory.m_pMemory[v2 / 8];
    if ( (v5->m_AreaAttributes.m_Flags & 0x4000) != 0 )
    {
      m_Size = v3;
      if ( vecObstacleTopAreas.m_Memory.m_nAllocationCount == v3 )
      {
        CUtlMemory<CNavArea *,int>::Grow(&vecObstacleTopAreas.m_Memory, 1);
        m_Size = vecObstacleTopAreas.m_Size;
      }
      v7 = m_Size + 1;
      vecObstacleTopAreas.m_Size = v7;
      v8 = &vecObstacleTopAreas.m_Memory.m_pMemory[v3];
      if ( v8 != 0 )
        break;
      v28 = v7;
    }
    v2 += 8LL;
    if ( v2 == v4 )
      goto LABEL_10;
LABEL_4:
    v3 = v28;
    m_rNavAreas = this->m_rNavAreas;
  }
  *v8 = v5;
  v2 += 8LL;
  v28 = vecObstacleTopAreas.m_Size;
  if ( v2 != v4 )
    goto LABEL_4;
LABEL_10:
  vecAreasToRemove.m_Size = 0;
  vecAreasToRemove.m_Memory.m_pMemory = 0;
  vecAreasToRemove.m_Memory.m_nAllocationCount = 0;
  vecAreasToRemove.m_Memory.m_nGrowSize = 0;
  if ( v28 == 0 )
    goto LABEL_26;
  it2 = 0;
  v9 = 0;
  while ( 2 )
  {
    v10 = *(vecObstacleTopAreas.m_Memory.m_pMemory + v9);
    if ( nav_slope_limit.m_pParent->m_Value.m_fValue > v10->m_vNormal_New.z )
    {
      v23 = vecAreasToRemove.m_Size;
      v24 = vecAreasToRemove.m_Size;
      if ( vecAreasToRemove.m_Size == vecAreasToRemove.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CNavArea *,int>::Grow(&vecAreasToRemove.m_Memory, 1);
        v24 = vecAreasToRemove.m_Size;
      }
      vecAreasToRemove.m_Size = v24 + 1;
      v25 = &vecAreasToRemove.m_Memory.m_pMemory[v23];
      if ( v25 != 0 )
        *v25 = v10;
    }
    ++it2;
    v27 = v9 + 8;
    if ( it2 < vecObstacleTopAreas.m_Size )
    {
      v11 = v9 + 8;
      v12 = it2 + 1;
      while ( 2 )
      {
        while ( 1 )
        {
          v14 = *(vecObstacleTopAreas.m_Memory.m_pMemory + v11);
          if ( CNavPoly::IsOverlappingPoly(v10, v14) )
            break;
LABEL_15:
          v13 = v12;
          v11 += 8;
          ++v12;
          if ( vecObstacleTopAreas.m_Size <= v13 )
            goto LABEL_21;
        }
        if ( CNavPoly::ContainsPoly(v10, v14) )
        {
          v15 = vecAreasToRemove.m_Size;
          v30 = vecAreasToRemove.m_Size;
          if ( vecAreasToRemove.m_Size != vecAreasToRemove.m_Memory.m_nAllocationCount )
          {
LABEL_19:
            vecAreasToRemove.m_Size = v15 + 1;
            v16 = &vecAreasToRemove.m_Memory.m_pMemory[v30];
            if ( v16 == 0 )
              goto LABEL_15;
            *v16 = v14;
            v17 = v12;
            v11 += 8;
            ++v12;
            if ( vecObstacleTopAreas.m_Size <= v17 )
              goto LABEL_21;
            continue;
          }
        }
        else
        {
          if ( CNavPoly::ContainsPoly(v14, v10) )
          {
            v20 = vecAreasToRemove.m_Size;
            v21 = vecAreasToRemove.m_Size;
            if ( vecAreasToRemove.m_Size == vecAreasToRemove.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CNavArea *,int>::Grow(&vecAreasToRemove.m_Memory, 1);
              v21 = vecAreasToRemove.m_Size;
            }
            vecAreasToRemove.m_Size = v21 + 1;
            v22 = &vecAreasToRemove.m_Memory.m_pMemory[v20];
            if ( v22 != 0 )
              *v22 = v10;
            goto LABEL_15;
          }
          v15 = vecAreasToRemove.m_Size;
          if ( v10->m_flSurfaceArea <= v14->m_flSurfaceArea )
            v14 = v10;
          v30 = vecAreasToRemove.m_Size;
          if ( vecAreasToRemove.m_Size != vecAreasToRemove.m_Memory.m_nAllocationCount )
            goto LABEL_19;
        }
        break;
      }
      CUtlMemory<CNavArea *,int>::Grow(&vecAreasToRemove.m_Memory, 1);
      v15 = vecAreasToRemove.m_Size;
      goto LABEL_19;
    }
LABEL_21:
    v9 = v27;
    if ( it2 != v28 )
      continue;
    break;
  }
  while ( vecAreasToRemove.m_Size > 0 )
  {
    v18 = this;
    p_m_SelectionSet = &this->m_rNavMesh->m_SelectionSet;
    pAreaToDelete = *vecAreasToRemove.m_Memory.m_pMemory;
    src = pAreaToDelete;
    CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&p_m_SelectionSet->m_SetAreas, &src);
    (*(v18->m_rNavMesh->_vptr_CNavMesh + 25))(v18->m_rNavMesh, pAreaToDelete);
    (*(v18->m_rNavMesh->_vptr_CNavMesh + 5))(v18->m_rNavMesh, pAreaToDelete);
    while ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&vecAreasToRemove, &pAreaToDelete) )
      ;
  }
LABEL_26:
  vecAreasToRemove.m_Size = 0;
  if ( (vecAreasToRemove.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CNavArea *,int>::Purge(&vecAreasToRemove.m_Memory),
        (vecAreasToRemove.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    vecObstacleTopAreas.m_Size = 0;
    if ( (vecObstacleTopAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
LABEL_45:
      CUtlMemory<CNavArea *,int>::Purge(&vecObstacleTopAreas.m_Memory);
      if ( (vecObstacleTopAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CNavArea *,int>::Purge(&vecObstacleTopAreas.m_Memory);
    }
  }
  else
  {
    CUtlMemory<CNavArea *,int>::Purge(&vecAreasToRemove.m_Memory);
    vecObstacleTopAreas.m_Size = 0;
    if ( (vecObstacleTopAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      goto LABEL_45;
  }
}


// CNavGeneratorAAQuad::CreateObstacleTopAreas  (line 4107, @0x0000000002ede970, libserver.so)  // inlines: Begin, CNavConnectOutIterator, Count, GetAdjacentAreas, GetArea, GetEdgeIndex, Next, operator[]
// calls: CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary
// callers: CNavGeneratorAAQuad::HandleObstacleTopAreas
void __fastcall CNavGeneratorAAQuad::CreateObstacleTopAreas(CNavGeneratorAAQuad *const this)
{
  const NavAreaVector *m_rNavAreas; // rax
  __int64 v2; // r14
  CNavArea *v3; // r13
  int m_nVerts; // ecx
  int i; // ebx
  int *m_pData; // rax
  int v7; // r12d
  int v8; // esi
  NavEdgeIndex v9; // r15
  CNavConnectVector *v10; // r14
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *j; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+0h] [rbp-50h]
  __int64 v15; // [rsp+8h] [rbp-48h]
  CNavArea *pAreaOther; // [rsp+10h] [rbp-40h]

  m_rNavAreas = this->m_rNavAreas;
  if ( m_rNavAreas->m_Size != 0 )
  {
    v2 = 0;
    v15 = 8LL * (m_rNavAreas->m_Size - 1) + 8;
    while ( 1 )
    {
      v3 = *(m_rNavAreas->m_Memory.m_pMemory + v2);
      if ( (v3->m_AreaAttributes.m_Flags & 0x4002) != 0 )
      {
        v2 += 8;
        if ( v2 == v15 )
          return;
      }
      else
      {
        m_nVerts = v3->m_nVerts;
        if ( m_nVerts != 0 )
        {
          for ( i = 0; i != m_nVerts; ++i )
          {
            m_pData = v3->m_connect[i].m_pData;
            if ( m_pData != 0 && *m_pData > 0 )
            {
              v7 = 0;
              goto LABEL_12;
            }
          }
          v7 = -1;
        }
        else
        {
          v7 = -1;
          i = 0;
        }
LABEL_12:
        v8 = v3->m_nVerts;
        v14 = v2;
LABEL_13:
        while ( v8 != i )
        {
          while ( 2 )
          {
            v9 = i;
            v10 = &v3->m_connect[i];
            j = v10->m_pData;
            v12 = v7;
            if ( (v10->m_pData->m_Elements[v12].m_pArea->m_AreaAttributes.m_Flags & 0x4002) != 0 )
              goto LABEL_23;
            pAreaOther = v10->m_pData->m_Elements[v12].m_pArea;
            if ( !CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary(this, v3, pAreaOther, i, 0) )
            {
              if ( v3->m_nVerts == i )
                v9 = -1;
              CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary(this, v3, pAreaOther, v9, 1);
            }
            v8 = v3->m_nVerts;
            if ( v8 != i )
            {
              for ( j = v10->m_pData; ; j = v3->m_connect[i].m_pData )
              {
LABEL_23:
                v13 = -1;
                if ( j != 0 )
                  v13 = j->m_Size - 1;
                if ( v7 < v13 )
                  break;
                if ( ++i == v8 )
                {
                  v7 = -1;
                  goto LABEL_13;
                }
                v7 = -1;
              }
              ++v7;
              if ( v8 != i )
                continue;
              goto LABEL_27;
            }
            break;
          }
          v8 = i;
        }
LABEL_27:
        v2 = v14 + 8;
        if ( v14 + 8 == v15 )
          return;
      }
      m_rNavAreas = this->m_rNavAreas;
    }
  }
}


// CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary  (line 4144, @0x0000000002eddfe0, libserver.so)  // inlines: AddAttributes, AddDirectionVector, AddFlags, GetConnectedNode, GetPosition, Init, IsLengthLessThan, LengthSqr, Max<float>, Min<float>, NavDirOpposite, V_swap<float>, VectorSubtract, operator-
// calls: CNavPoly::ComputePortal_Old, CNavPoly::ContainsPoint, CNavPoly::GetZ, AdjustObstacleDistances, CNavPoly::SetCorners, Msg, CNavArea::Disconnect, CNavArea::ConnectTo, CNavArea::IsConnectedOnEdge
// callers: CNavGeneratorAAQuad::CreateObstacleTopAreas
// strings: "Created new fencetop area %d(%x) between %d(%x) and %d(%x)\n"
bool __fastcall CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary(
        CNavGeneratorAAQuad *const this,
        CNavArea *pArea,
        CNavArea *pAreaOther,
        NavEdgeIndex nEdge,
        bool bMultiNode)
{
  __int64 v5; // r15
  int v6; // r14d
  __int64 v10; // rax
  __int64 v11; // rcx
  vec_t *v12; // rdx
  float v13; // xmm3_4
  vec_t *v14; // r13
  __int64 v15; // rbx
  float v16; // xmm8_4
  bool v17; // r14
  float v18; // xmm6_4
  float v19; // xmm13_4
  float v20; // xmm9_4
  float v21; // xmm12_4
  vec_t *v22; // r12
  __int64 v23; // r15
  float v24; // xmm4_4
  vec_t v25; // xmm7_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm11_4
  bool v29; // al
  vec_t *v30; // r10
  float v31; // xmm6_4
  float v32; // xmm0_4
  __int64 v33; // r10
  float v34; // xmm6_4
  CNavArea *v35; // rbx
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  vec_t v43; // xmm1_4
  float v44; // xmm4_4
  bool v45; // al
  vec_t *v46; // r10
  float v47; // xmm4_4
  vec_t v48; // xmm1_4
  bool v49; // al
  float v50; // xmm1_4
  CNavArea *v51; // r12
  uint64 m_Flags; // rax
  int v53; // r15d
  float v54; // [rsp+10h] [rbp-F8h]
  CNavArea *v55; // [rsp+20h] [rbp-E8h]
  int pAreaa; // [rsp+28h] [rbp-E0h]
  __int64 v58; // [rsp+30h] [rbp-D8h]
  float this_4; // [rsp+44h] [rbp-C4h]
  float v62; // [rsp+4Ch] [rbp-BCh]
  float v63; // [rsp+4Ch] [rbp-BCh]
  float flObstacleHeightMin; // [rsp+54h] [rbp-B4h]
  float flObstacleHeightMina; // [rsp+54h] [rbp-B4h]
  float flObstacleHeightMinb; // [rsp+54h] [rbp-B4h]
  __int64 flObstacleDistEndCur; // [rsp+58h] [rbp-B0h]
  vec_t *flObstacleDistEndCura; // [rsp+58h] [rbp-B0h]
  CNavArea *zEnd; // [rsp+60h] [rbp-A8h]
  float zEnda; // [rsp+60h] [rbp-A8h]
  float v71; // [rsp+6Ch] [rbp-9Ch]
  float zStart; // [rsp+74h] [rbp-94h] BYREF
  float v73; // [rsp+78h] [rbp-90h] BYREF
  float flObstacleDistMin; // [rsp+7Ch] [rbp-8Ch] BYREF
  float flObstacleDistMax; // [rsp+80h] [rbp-88h] BYREF
  float flHalfPortalWidth; // [rsp+84h] [rbp-84h]
  Vector vCenter; // [rsp+88h] [rbp-80h] BYREF
  float v78; // [rsp+94h] [rbp-74h]
  Vector cornerNW; // [rsp+98h] [rbp-70h] BYREF
  float v80; // [rsp+A4h] [rbp-64h]
  Vector cornerNE; // [rsp+A8h] [rbp-60h] BYREF
  float v82; // [rsp+B4h] [rbp-54h]
  Vector cornerSE; // [rsp+B8h] [rbp-50h] BYREF
  float v84; // [rsp+C4h] [rbp-44h]
  Vector cornerSW; // [rsp+C8h] [rbp-40h]

  v5 = nEdge;
  v6 = nEdge;
  v73 = 0.0;
  v71 = 0.0;
  zStart = CNavGeneratorBase::sm_flGenerationStepSize;
  CNavPoly::ComputePortal_Old(pArea, pAreaOther, nEdge, &flObstacleDistMax, &flObstacleDistMin);
  if ( flObstacleDistMin <= 0.0 )
    return 0;
  v10 = (*(this->_vptr_CNavGeneratorBase + 14))(this, pArea);
  v11 = (v6 + 1) % 4;
  v12 = *(v10 + 8LL * v6);
  v58 = v6;
  if ( v12 == 0 )
    return 0;
  v13 = 0.0;
  v55 = pArea;
  zEnd = pAreaOther;
  v14 = *(v10 + 8 * v11);
  v15 = v5;
  pAreaa = v6;
  v16 = 0.0;
  v17 = bMultiNode;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 3.4028235e38;
  v21 = 0.0;
  v22 = v12;
  v23 = v11;
  do
  {
    v24 = v22[1];
    v25 = v22[2];
    v26 = (flObstacleDistMin + 1.0) * (flObstacleDistMin + 1.0);
    if ( v26 <= ((((*v22 - flObstacleDistMax) * (*v22 - flObstacleDistMax))
                + ((v24 - flHalfPortalWidth) * (v24 - flHalfPortalWidth)))
               + v13) )
      goto LABEL_7;
    v27 = v22[v15 + 18];
    v28 = v22[v15 + 22];
    if ( !v17 )
    {
      v18 = v22[v15 + 14];
      v19 = v22[2];
      goto LABEL_5;
    }
    cornerSE.z = *v22;
    v84 = v24;
    this_4 = v13;
    flObstacleHeightMin = v27;
    cornerSW.x = v25;
    v29 = CNavPoly::ContainsPoint(zEnd, &cornerSE.z);
    v27 = flObstacleHeightMin;
    v13 = this_4;
    if ( v29 )
      goto LABEL_16;
    v30 = *&v22[2 * v58 + 6];
    if ( v30 == 0 )
      goto LABEL_16;
    v19 = v22[2];
    v31 = v30[2] - v19;
    if ( v31 <= 18.0 )
      goto LABEL_14;
    v62 = flObstacleHeightMin;
    v43 = *v30;
    flObstacleDistEndCur = *&v22[2 * v58 + 6];
    v44 = v30[1];
    cornerSW.x = v30[2];
    flObstacleHeightMina = v31;
    cornerSE.z = v43;
    v84 = v44;
    v45 = CNavPoly::ContainsPoint(zEnd, &cornerSE.z);
    v33 = flObstacleDistEndCur;
    v34 = flObstacleHeightMina;
    v27 = v62;
    v13 = this_4;
    if ( v45 )
    {
      v32 = CNavPoly::GetZ(zEnd, *(flObstacleDistEndCur + 4), v62);
      v33 = flObstacleDistEndCur;
      v34 = flObstacleHeightMina;
      v27 = v62;
      v26 = fabs(*(flObstacleDistEndCur + 8) - v32);
      v13 = this_4;
      if ( v26 < 2.0 )
        goto LABEL_16;
    }
    v46 = *(v33 + 8 * v58 + 24);
    if ( v46 == 0 )
    {
LABEL_16:
      v19 = v22[2];
      v18 = v13;
    }
    else
    {
      v54 = v13;
      v63 = v27;
      flObstacleHeightMinb = v34;
      v47 = v46[1];
      flObstacleDistEndCura = v46;
      v48 = v46[2];
      cornerSE.z = *v46;
      v84 = v47;
      cornerSW.x = v48;
      v49 = CNavPoly::ContainsPoint(zEnd, &cornerSE.z);
      v19 = v22[2];
      v18 = flObstacleHeightMinb;
      v27 = v63;
      v13 = v54;
      if ( !v49 || (v26 = 18.0, fabs(v19 - flObstacleDistEndCura[2]) > 18.0) )
      {
LABEL_14:
        v18 = v13;
        goto LABEL_5;
      }
      v28 = CNavGeneratorBase::sm_flGenerationStepSize + 5.0;
      v27 = CNavGeneratorBase::sm_flGenerationStepSize - 5.0;
    }
LABEL_5:
    zStart = fminf(v27, zStart);
    v20 = fminf(v18, v20);
    v16 = fmaxf(v18, v16);
    v73 = fmaxf(v28, v73);
    if ( v21 == v13 )
    {
      v71 = v19;
      v21 = v18;
    }
LABEL_7:
    if ( v22 == v14 )
      break;
    v22 = *&v22[2 * v23 + 6];
  }
  while ( v22 != 0 );
  v35 = zEnd;
  if ( v16 <= 18.0 || v20 <= 18.0 )
    return 0;
  if ( v16 > v21 && v16 > v18 )
  {
    v18 = v16;
    v21 = v16;
  }
  if ( (pAreaa - 2) <= 1 )
  {
    v41 = v71;
    v71 = v19;
    v19 = v41;
    v42 = v21;
    v21 = v18;
    v18 = v42;
  }
  v37 = CNavGeneratorBase::sm_flGenerationStepSize;
  if ( bMultiNode )
    v37 = CNavGeneratorBase::sm_flGenerationStepSize + CNavGeneratorBase::sm_flGenerationStepSize;
  zEnda = v18;
  AdjustObstacleDistances(&zStart, &v73, v37, v26);
  v38 = (v73 - zStart) * 0.5;
  v39 = zStart + v38;
  if ( nEdge != 1 )
  {
    if ( nEdge <= 1 )
    {
      if ( nEdge != 0 )
        goto LABEL_40;
      flHalfPortalWidth = flHalfPortalWidth - v39;
      v50 = flHalfPortalWidth;
    }
    else
    {
      if ( nEdge != 2 )
      {
        if ( nEdge == 3 )
        {
          flObstacleDistMax = flObstacleDistMax - v39;
          v40 = flObstacleDistMax;
          goto LABEL_44;
        }
        goto LABEL_40;
      }
      v50 = v39 + flHalfPortalWidth;
      flHalfPortalWidth = v50;
    }
    cornerNE.x = zEnda + v19;
    v78 = v50 - v38;
    v80 = v50 - v38;
    vCenter.z = flObstacleDistMax - flObstacleDistMin;
    cornerNW.x = v21 + v71;
    cornerNW.z = flObstacleDistMin + flObstacleDistMax;
    cornerNE.z = flObstacleDistMin + flObstacleDistMax;
    v82 = v38 + v50;
    cornerSE.x = zEnda + v19;
    cornerSE.z = flObstacleDistMax - flObstacleDistMin;
    v84 = v38 + v50;
    cornerSW.x = v21 + v71;
    goto LABEL_40;
  }
  v40 = v39 + flObstacleDistMax;
  flObstacleDistMax = v40;
LABEL_44:
  cornerNE.x = zEnda + v19;
  vCenter.z = v40 - v38;
  cornerNW.z = v38 + v40;
  v78 = flHalfPortalWidth - flObstacleDistMin;
  cornerNW.x = v21 + v71;
  v80 = flHalfPortalWidth - flObstacleDistMin;
  cornerNE.z = v38 + v40;
  v82 = flObstacleDistMin + flHalfPortalWidth;
  cornerSE.x = zEnda + v19;
  cornerSE.z = v40 - v38;
  v84 = flObstacleDistMin + flHalfPortalWidth;
  cornerSW.x = v21 + v71;
LABEL_40:
  v51 = (*(this->m_rNavMesh->_vptr_CNavMesh + 4))(this->m_rNavMesh);
  CNavPoly::SetCorners(v51, &vCenter.z, &cornerNW.z, &cornerNE.z, &cornerSE.z);
  (*(this->m_rNavMesh->_vptr_CNavMesh + 28))(this->m_rNavMesh, v51);
  Msg(
    "Created new fencetop area %d(%x) between %d(%x) and %d(%x)\n",
    v51->m_AreaId,
    v51->m_nIndex,
    v55->m_AreaId,
    v55->m_nIndex,
    v35->m_AreaId,
    v35->m_nIndex);
  m_Flags = v55->m_AreaAttributes.m_Flags;
  BYTE1(m_Flags) |= 0x60u;
  v51->m_AreaAttributes.m_Flags = m_Flags;
  CNavArea::Disconnect(v55, v35);
  CNavArea::ConnectTo(v55, v51, pAreaa, -1, 1);
  v53 = (pAreaa + 2) % 4;
  CNavArea::ConnectTo(v51, v55, v53, -1, 1);
  CNavArea::ConnectTo(v51, v35, pAreaa, -1, 1);
  if ( CNavArea::IsConnectedOnEdge(v35, v55, v53) )
  {
    CNavArea::Disconnect(v35, v55);
    CNavArea::ConnectTo(v35, v51, v53, -1, 1);
  }
  return 1;
}


// CNavGeneratorAAQuad::FinishSplitEdit  (line 4340, @0x0000000002eddc10, libserver.so)  // inlines: GetConnectedNode, GetPosition, GetVert, IsOverlappingPoint, operator=
// calls: CNavGeneratorAAQuad::AreaHasNodes, CNavPoly::IsOverlappingPoint, CNavGeneratorAAQuad::AssignNodes, CNavPoly::SetCorners
void __fastcall CNavGeneratorAAQuad::FinishSplitEdit(
        CNavGeneratorAAQuad *const this,
        CNavArea *const rArea,
        CNavArea *const rNewArea,
        NavEdgeIndex ignoreEdge)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  int v11; // ecx
  vec_t **v12; // r15
  _QWORD *i; // rbx
  __int64 v14; // rax
  vec_t v15; // xmm2_4
  float v16; // xmm1_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm2_4
  vec_t v25; // xmm1_4
  vec_t v26; // xmm0_4
  vec_t v27; // xmm2_4
  NavDirType dir; // [rsp+4h] [rbp-7Ch]
  Vector vNW; // [rsp+10h] [rbp-70h] BYREF
  Vector vNE; // [rsp+20h] [rbp-60h] BYREF
  Vector vSE; // [rsp+30h] [rbp-50h] BYREF
  Vector vSW; // [rsp+40h] [rbp-40h] BYREF

  if ( CNavGeneratorAAQuad::AreaHasNodes(this, rArea) )
  {
    v8 = (*(this->_vptr_CNavGeneratorBase + 14))(this, rArea);
    v9 = (*(this->_vptr_CNavGeneratorBase + 14))(this, rNewArea);
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    if ( ignoreEdge == 2 )
    {
      v10 = 3;
      v11 = 2;
      dir = NavDirType::NORTH;
    }
    else if ( ignoreEdge == 3 )
    {
      v10 = 0;
      v11 = 3;
      dir = NavDirType::EAST;
    }
    else
    {
      v10 = ignoreEdge == 1;
      v11 = v10 + 1;
      dir = v10 + 2;
    }
    v12 = &v9[v10];
    for ( i = &v9[v11]; ; *i = *(*i + 8 * v14 + 8) )
    {
      v15 = (*v12)[1];
      v16 = (*v12)[2];
      vSW.x = **v12;
      vSW.y = v15;
      vSW.z = v16;
      if ( CNavPoly::IsOverlappingPoint(rNewArea, &vSW, v16) )
        break;
      v14 = dir + 2LL;
      *v12 = *&(*v12)[2 * v14 + 2];
    }
    CNavGeneratorAAQuad::AssignNodes(this, rNewArea, rNewArea);
    z = rNewArea->m_vVerts[0].z;
    x = rNewArea->m_vVerts[0].x;
    vNW.y = rNewArea->m_vVerts[0].y;
    y = rNewArea->m_vVerts[1].y;
    vNW.z = z;
    vNW.x = x;
    v20 = rNewArea->m_vVerts[1].z;
    v21 = rNewArea->m_vVerts[1].x;
    vNE.y = y;
    vNE.z = v20;
    v22 = rNewArea->m_vVerts[2].y;
    v23 = rNewArea->m_vVerts[2].z;
    vNE.x = v21;
    vSE.y = v22;
    v24 = rNewArea->m_vVerts[2].x;
    vSE.z = v23;
    v25 = rNewArea->m_vVerts[3].y;
    vSE.x = v24;
    v26 = rNewArea->m_vVerts[3].z;
    v27 = rNewArea->m_vVerts[3].x;
    vSW.y = v25;
    vSW.z = v26;
    vSW.x = v27;
    CNavPoly::SetCorners(rNewArea, &vNW, &vNE, &vSE, &vSW);
  }
}


