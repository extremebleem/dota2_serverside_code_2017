
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_triangulatepolygon.cpp  (line 0, @0x0000000001a6d470, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_triangulatepolygon_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// PolgyonArea  (line 182, @0x00000000031d7750, libserver.so)  // inlines: operator[]
// calls: sqrtf
float __fastcall PolgyonArea(const CUtlVector<Vector,CUtlMemory<Vector,int> > *const polyPoints, Vector vNormal)
{
  float z; // xmm5_4
  float x; // xmm2_4
  float y; // xmm3_4
  int v5; // ebx
  int m_Size; // esi
  int v7; // r9d
  __int64 v8; // r8
  int v9; // eax
  float v10; // xmm1_4
  Vector *m_pMemory; // rdi
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rdx
  float v15; // xmm0_4
  float v16; // xmm0_4

  z = vNormal.z;
  x = vNormal.x;
  y = vNormal.y;
  if ( vNormal.x <= 0.0 )
    x = -vNormal.x;
  if ( vNormal.y <= 0.0 )
    y = -vNormal.y;
  if ( vNormal.z <= 0.0 )
    z = -vNormal.z;
  if ( x <= y )
  {
    v5 = 2;
    if ( y > z )
      goto LABEL_9;
  }
  else
  {
    v5 = 1;
    if ( x > z )
      goto LABEL_9;
  }
  v5 = 3;
LABEL_9:
  m_Size = polyPoints->m_Size;
  if ( polyPoints->m_Size > 0 )
  {
    v7 = m_Size + 1;
    v8 = 0;
    v9 = 1;
    v10 = 0.0;
    m_pMemory = polyPoints->m_Memory.m_pMemory;
    while ( 1 )
    {
      v12 = v9 + 1;
      v13 = v9 % m_Size;
      v14 = (v9 + 1) % m_Size;
      if ( v5 == 2 )
        break;
      if ( v5 == 3 )
      {
        v10 = v10 + ((m_pMemory[v14].y - m_pMemory[v8].y) * m_pMemory[v9 % m_Size].x);
LABEL_12:
        ++v8;
        ++v9;
        if ( v12 == v7 )
          goto LABEL_16;
      }
      else
      {
        ++v9;
        v15 = m_pMemory[v14].z - m_pMemory[v8++].z;
        v10 = v10 + (v15 * m_pMemory[v13].y);
        if ( v12 == v7 )
          goto LABEL_16;
      }
    }
    v10 = v10 + ((m_pMemory[v14].z - m_pMemory[v8].z) * m_pMemory[v9 % m_Size].x);
    goto LABEL_12;
  }
  v10 = 0.0;
LABEL_16:
  v16 = fsqrt(((x * x) + (y * y)) + (z * z));
  if ( v5 == 2 )
    return (v16 / (y + y)) * v10;
  if ( v5 == 3 )
    return (v16 / (z + z)) * v10;
  return (v16 / (x + x)) * v10;
}


// InsideTriangle  (line 236, @0x00000000031d7960, libserver.so)  // inlines: Cross, CrossProduct, Dot, DotProduct, VectorSubtract, operator-
// calls: CalcDistanceSqrToLine
// callers: TrySnip, CTriangulatedPolygon::IsPointInPolygon, CTriangulatedPolygon::IntersectLineSegment
bool __fastcall InsideTriangle(
        const Vector *const a,
        const Vector *const b,
        const Vector *const c,
        const Vector *const p,
        const Vector *const vNormal)
{
  float y; // xmm11_4
  float z; // xmm10_4
  float v11; // xmm15_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm14_4
  float v16; // xmm13_4
  float v17; // xmm12_4
  float v19; // [rsp+4h] [rbp-5Ch]
  float v20; // [rsp+8h] [rbp-58h]
  float x; // [rsp+Ch] [rbp-54h]
  float v22; // [rsp+14h] [rbp-4Ch]
  float v23; // [rsp+18h] [rbp-48h]
  float v24; // [rsp+1Ch] [rbp-44h]
  float flParam[13]; // [rsp+2Ch] [rbp-34h] BYREF

  y = c->y;
  x = a->x;
  z = c->z;
  v24 = vNormal->x;
  v11 = p->x;
  v12 = b->x;
  v19 = a->z;
  v13 = b->y;
  v14 = b->z;
  v15 = p->y;
  v16 = p->z;
  v20 = a->y;
  v23 = vNormal->y;
  v17 = c->x;
  v22 = vNormal->z;
  return ((((((y - v13) * (v16 - v14)) - ((z - v14) * (v15 - v13))) * vNormal->x)
         + ((((z - v14) * (v11 - v12)) - ((v16 - v14) * (v17 - v12))) * v23))
        + ((((v15 - v13) * (v17 - v12)) - ((v11 - v12) * (y - v13))) * v22)) > -0.0000001
      && ((((((v20 - y) * (v16 - z)) - ((v19 - z) * (v15 - y))) * v24)
         + ((((v19 - z) * (v11 - v17)) - ((v16 - z) * (x - v17))) * v23))
        + ((((x - v17) * (v15 - y)) - ((v11 - v17) * (v20 - y))) * v22)) > -0.0000001
      && ((((((v13 - v20) * (v16 - v19)) - ((v14 - v19) * (v15 - v20))) * v24)
         + ((((v14 - v19) * (v11 - x)) - ((v16 - v19) * (v12 - x))) * v23))
        + ((((v12 - x) * (v15 - v20)) - ((v13 - v20) * (v11 - x))) * v22)) > -0.0000001
      || CalcDistanceSqrToLine(p, a, b, flParam) < 9.9999998e-15 && flParam[0] >= 0.0 && flParam[0] <= 1.0
      || CalcDistanceSqrToLine(p, b, c, flParam) < 9.9999998e-15 && flParam[0] >= 0.0 && flParam[0] <= 1.0
      || CalcDistanceSqrToLine(p, c, a, flParam) < 9.9999998e-15 && flParam[0] >= 0.0 && flParam[0] <= 1.0;
}


// TrySnip  (line 279, @0x00000000031d7c80, libserver.so)  // inlines: Cross, CrossProduct, Dot, DotProduct, NormalizeInPlace, VectorSubtract, operator!=, operator-
// calls: InsideTriangle, VectorNormalize
// callers: TriangulatePolygon
bool __fastcall TrySnip(
        const Vector *polygonVerts,
        int nCornerTriVert,
        const int *pVertIndicies,
        int nNumVertIndices,
        const Vector *const vNormal,
        float *pOutTriangleFitness)
{
  int v8; // r12d
  float x; // xmm7_4
  float y; // xmm11_4
  float z; // xmm12_4
  float v12; // xmm8_4
  float v13; // xmm10_4
  float v14; // xmm1_4
  const int *v15; // r15
  int v16; // ebx
  const Vector *v17; // rax
  float v18; // xmm0_4
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm5_4
  float v24; // xmm1_4
  const Vector *v26; // rax
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm14_4
  float v30; // xmm0_4
  const Vector *v31; // rax
  float v32; // xmm9_4
  float v33; // xmm1_4
  float v34; // [rsp+0h] [rbp-D0h]
  int v35; // [rsp+4h] [rbp-CCh]
  int b; // [rsp+38h] [rbp-98h]
  float ba; // [rsp+38h] [rbp-98h]
  int flArea; // [rsp+3Ch] [rbp-94h]
  float flAreaa; // [rsp+3Ch] [rbp-94h]
  Vector vA; // [rsp+40h] [rbp-90h] BYREF
  Vector vB; // [rsp+50h] [rbp-80h] BYREF
  Vector vC; // [rsp+60h] [rbp-70h] BYREF
  Vector vAB; // [rsp+70h] [rbp-60h] BYREF
  Vector vAC; // [rsp+80h] [rbp-50h] BYREF
  Vector vBC; // [rsp+90h] [rbp-40h] BYREF

  v35 = nCornerTriVert + nNumVertIndices;
  *pOutTriangleFitness = -1.0;
  v8 = (nCornerTriVert + nNumVertIndices - 1) % nNumVertIndices;
  b = nCornerTriVert % nNumVertIndices;
  flArea = (nCornerTriVert + 1) % nNumVertIndices;
  vA = polygonVerts[pVertIndicies[v8]];
  vB = polygonVerts[pVertIndicies[nCornerTriVert % nNumVertIndices]];
  x = vB.x;
  y = vB.y;
  z = vB.z;
  vC = polygonVerts[pVertIndicies[flArea]];
  vAB.x = vB.x - vA.x;
  v12 = vC.x;
  vAB.z = vB.z - vA.z;
  v13 = vC.z;
  vAB.y = vB.y - vA.y;
  vAC.x = vC.x - vA.x;
  vAC.y = vC.y - vA.y;
  vAC.z = vC.z - vA.z;
  v14 = (((((vB.y - vA.y) * (vC.z - vA.z)) - ((vB.z - vA.z) * (vC.y - vA.y))) * vNormal->x)
       + ((((vB.z - vA.z) * (vC.x - vA.x)) - ((vC.z - vA.z) * (vB.x - vA.x))) * vNormal->y))
      + ((((vC.y - vA.y) * (vB.x - vA.x)) - ((vC.x - vA.x) * (vB.y - vA.y))) * vNormal->z);
  if ( v14 < 0.0000001 )
    return 0;
  if ( nNumVertIndices > 0 )
  {
    v15 = pVertIndicies;
    v16 = 0;
    v34 = (((((vB.y - vA.y) * (vC.z - vA.z)) - ((vB.z - vA.z) * (vC.y - vA.y))) * vNormal->x)
         + ((((vB.z - vA.z) * (vC.x - vA.x)) - ((vC.z - vA.z) * (vB.x - vA.x))) * vNormal->y))
        + ((((vC.y - vA.y) * (vB.x - vA.x)) - ((vC.x - vA.x) * (vB.y - vA.y))) * vNormal->z);
    while ( 1 )
    {
      if ( v16 != v8 && v16 != b && v16 != flArea && InsideTriangle(&vA, &vB, &vC, &polygonVerts[*v15], vNormal) )
      {
        v17 = &polygonVerts[*v15];
        v18 = v17->x;
        if ( (v17->x != vA.x || vA.y != v17->y || vA.z != v17->z)
          && (v18 != vB.x || vB.y != v17->y || vB.z != v17->z)
          && (v18 != vC.x || vC.y != v17->y || vC.z != v17->z) )
        {
          return 0;
        }
      }
      ++v16;
      ++v15;
      if ( v16 == nNumVertIndices )
      {
        v14 = v34;
        x = vB.x;
        y = vB.y;
        z = vB.z;
        v12 = vC.x;
        v19 = vC.y;
        v13 = vC.z;
        if ( v16 > 3 )
        {
          v26 = &polygonVerts[pVertIndicies[(flArea + 1) % v16]];
          v27 = v26->y;
          v28 = v26->z;
          ba = vNormal->z;
          v29 = vNormal->y;
          v14 = fminf(
                  v34,
                  (((((vB.y - v27) * (vC.z - v28)) - ((vB.z - v28) * (vC.y - v27))) * vNormal->x)
                 + ((((vB.z - v28) * (vC.x - v26->x)) - ((vC.z - v28) * (vB.x - v26->x))) * v29))
                + ((((vC.y - v27) * (vB.x - v26->x)) - ((vC.x - v26->x) * (vB.y - v27))) * ba));
          v30 = v14;
          if ( v16 != 4 )
          {
            v31 = &polygonVerts[pVertIndicies[(v35 - 2) % v16]];
            v32 = v31->y;
            v33 = v31->z;
            v14 = fminf(
                    v30,
                    (((((vA.y - v32) * (vB.z - v33)) - ((vA.z - v33) * (vB.y - v32))) * vNormal->x)
                   + ((((vA.z - v33) * (vB.x - v31->x)) - ((vB.z - v33) * (vA.x - v31->x))) * v29))
                  + ((((vA.x - v31->x) * (vB.y - v32)) - ((vA.y - v32) * (vB.x - v31->x))) * ba));
          }
        }
        goto LABEL_13;
      }
    }
  }
  v19 = vC.y;
LABEL_13:
  flAreaa = v14;
  vBC.x = v12 - x;
  vBC.y = v19 - y;
  vBC.z = v13 - z;
  VectorNormalize(&vBC);
  VectorNormalize(&vAB);
  VectorNormalize(&vAC);
  v20 = ((vAB.x * vAC.x) + (vAB.y * vAC.y)) + (vAB.z * vAC.z);
  v21 = ((vAB.x * vBC.x) + (vAB.y * vBC.y)) + (vAB.z * vBC.z);
  v22 = ((vBC.x * vAC.x) + (vBC.y * vAC.y)) + (vBC.z * vAC.z);
  v23 = 1.0;
  if ( flAreaa > 1.0 )
    v23 = 1.0 / flAreaa;
  if ( v21 <= v22 )
  {
    if ( v20 <= v22 )
    {
      if ( v21 <= v22 )
      {
        v24 = 1.0 - v22;
        goto LABEL_29;
      }
      goto LABEL_17;
    }
LABEL_28:
    v24 = 1.0 - v20;
    goto LABEL_29;
  }
  if ( v20 > v21 )
    goto LABEL_28;
LABEL_17:
  v24 = 1.0 - v21;
LABEL_29:
  *pOutTriangleFitness = (v24 + v24) + v23;
  return 1;
}


// PolygonIsConcave  (line 361, @0x00000000031d82f0, libserver.so)  // inlines: Cross, CrossProduct, Dot, DotProduct, VectorSubtract, operator-
// callers: CTriangulatedPolygon::IsConvex
bool __fastcall PolygonIsConcave(const Vector *pPolygonVerts, int nNumVerts, const Vector *const vNormal)
{
  int v3; // ecx
  bool v4; // r10
  int v5; // r8d
  const Vector *v6; // r9
  const Vector *v7; // rax
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm0_4
  float v11; // xmm4_4
  const Vector *v12; // rax
  float v13; // xmm0_4

  if ( nNumVerts > 0 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = v3 + 1;
      v6 = &pPolygonVerts[v3];
      v7 = &pPolygonVerts[(v3 + 1) % nNumVerts];
      x = v7->x;
      y = v7->y;
      z = v7->z;
      v11 = v7->x - v6->x;
      v12 = &pPolygonVerts[(v3 + 2) % nNumVerts];
      v13 = (((((z - v6->z) * (v12->y - y)) - ((y - v6->y) * (v12->z - z))) * vNormal->x)
           + ((((v12->z - z) * v11) - ((z - v6->z) * (v12->x - x))) * vNormal->y))
          + ((((v12->x - x) * (y - v6->y)) - ((v12->y - y) * v11)) * vNormal->z);
      if ( v3 != 0 )
      {
        if ( v4 )
        {
          if ( (v13 + 0.0000001) < 0.0 )
            return 1;
        }
        else if ( (v13 - 0.0000001) > 0.0 )
        {
          return 1;
        }
      }
      else
      {
        v5 = 1;
        v4 = v13 > 0.0;
      }
      if ( nNumVerts <= v5 )
        return 0;
      v3 = v5;
    }
  }
  return 0;
}


// TriangulatePolygon  (line 401, @0x00000000031d8440, libserver.so)  // inlines: V_memmove, memmove
// calls: TrySnip, memmove, __stack_chk_fail
// callers: CTriangulatedPolygon::ConstructPolygon
__int64 __fastcall TriangulatePolygon(
        Vector *pPolygonVerts,
        int nOrigVerts,
        int *pOutIndexList,
        int nMaxIndices,
        double a5,
        vec_t a6)
{
  int v6; // ebx
  void *v8; // rsp
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  void *v11; // rsp
  int v12; // r13d
  unsigned __int64 v13; // r12
  float *v14; // r9
  int v15; // esi
  int *v16; // r10
  float *v17; // r13
  int *v18; // r15
  __int64 v19; // rax
  int v20; // r12d
  float v21; // xmm1_4
  __int64 v22; // rcx
  __int64 v23; // [rsp+10h] [rbp-80h] BYREF
  float *triangleSnipFitnesses; // [rsp+18h] [rbp-78h]
  int v25; // [rsp+24h] [rbp-6Ch]
  Vector *p_vNormala; // [rsp+28h] [rbp-68h]
  int *nCurrentIndex; // [rsp+30h] [rbp-60h]
  Vector *polygonVerts; // [rsp+38h] [rbp-58h]
  Vector vNormala; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-38h]

  v6 = nOrigVerts;
  polygonVerts = pPolygonVerts;
  v30 = __readfsqword(0x28u);
  nCurrentIndex = pOutIndexList;
  v25 = nMaxIndices;
  *&vNormala.x = a5;
  vNormala.z = a6;
  if ( nOrigVerts <= 2 )
    return 0;
  v8 = alloca(((4LL * nOrigVerts + 31) & 0xFFFFFFFFFFFFFFF0LL) + 15);
  v9 = 0;
  v10 = &v23 & 0xFFFFFFFFFFFFFFEFLL;
  do
  {
    *(v10 + 4 * v9) = v9;
    ++v9;
  }
  while ( nOrigVerts > v9 );
  v11 = alloca(((4LL * nOrigVerts + 31) & 0xFFFFFFFFFFFFFFF0LL) + 15);
  p_vNormala = &vNormala;
  triangleSnipFitnesses = (&v23 & 0xFFFFFFFFFFFFFFEFLL);
  v12 = 0;
  v13 = &v23 & 0xFFFFFFFFFFFFFFEFLL;
  do
  {
    v14 = v13;
    v15 = v12++;
    v13 += 4LL;
    TrySnip(polygonVerts, v15, (&v23 & 0xFFFFFFFFFFFFFFEFLL), v6, &vNormala, v14);
  }
  while ( v12 != v6 );
  v16 = nCurrentIndex;
  v17 = triangleSnipFitnesses;
  LODWORD(nCurrentIndex) = 0;
  v18 = v16;
  do
  {
    if ( v25 <= nCurrentIndex + 2 )
      break;
    v19 = 0;
    v20 = -1;
    v21 = 0.0;
    do
    {
      if ( v17[v19] > v21 )
      {
        v21 = v17[v19];
        v20 = v19;
      }
      ++v19;
    }
    while ( v6 > v19 );
    if ( v20 == -1 )
      return 0;
    v22 = 4LL * v20;
    LODWORD(nCurrentIndex) = nCurrentIndex + 3;
    *v18 = *(v10 + 4LL * ((v20 + v6 - 1) % v6));
    v18[1] = *(v10 + v22);
    v18[2] = *(v10 + 4LL * ((v20 + 1) % v6));
    if ( v6 - v20 - 1 > 0 )
    {
      v23 = v22 + 4;
      triangleSnipFitnesses = (4LL * (v6 - v20 - 1));
      memmove((v10 + v22), (v10 + v22 + 4), triangleSnipFitnesses);
      memmove(&v17[v20], v17 + v23, triangleSnipFitnesses);
    }
    --v6;
    v18 += 3;
    TrySnip(polygonVerts, (v20 + v6 - 1) % v6, (&v23 & 0xFFFFFFFFFFFFFFEFLL), v6, p_vNormala, &v17[(v20 + v6 - 1) % v6]);
    TrySnip(polygonVerts, v20 % v6, (&v23 & 0xFFFFFFFFFFFFFFEFLL), v6, p_vNormala, &v17[v20 % v6]);
  }
  while ( v6 != 2 );
  return nCurrentIndex;
}


// CTriangulatedPolygon::CTriangulatedPolygon  (line 486, @0x00000000031d9b70, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<Vector, int>::Purge, _Unwind_Resume, CUtlMemory<int, int>::Purge, CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16ul, int> >::~CUtlVectorBase, CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16ul, int> >::~CUtlVectorBase, CUtlMemory<Vector2D, int>::Purge
void __fastcall CTriangulatedPolygon::CTriangulatedPolygon(CTriangulatedPolygon *const this)
{
  Vector *p_m_FixedMemory; // r12
  __int64 v3; // rdx
  vec_t z; // eax
  int *v5; // r12

  p_m_FixedMemory = &this->m_Vertices.m_Memory.m_FixedMemory;
  this->m_Classification = CTriangulatedPolygon::PolygonClassification_t::POLYGON_TYPE_UKNOWN;
  v3 = *&vec3_origin.x;
  this->m_Vertices.m_Size = 0;
  z = vec3_origin.z;
  this->m_Vertices.m_Memory.m_pMemory = 0;
  this->m_Vertices.m_Memory.m_nAllocationCount = 16;
  this->m_Vertices.m_Memory.m_nGrowSize = 0x80000000;
  *&this->m_vNormal.x = v3;
  this->m_vNormal.z = z;
  *&this->m_vMin.x = v3;
  this->m_vMin.z = z;
  *&this->m_vMax.x = v3;
  this->m_vMax.z = z;
  if ( ((this + 64) & 3) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_Vertices.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_Texcoords.m_Size = 0;
  this->m_Texcoords.m_Memory.m_pMemory = 0;
  this->m_Texcoords.m_Memory.m_nAllocationCount = 16;
  this->m_Texcoords.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 3) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_Texcoords.m_Memory.m_pMemory = &this->m_Texcoords.m_Memory.m_FixedMemory;
  v5 = &this->m_TriangleIndices.m_Memory.m_FixedMemory;
  this->m_TriangleIndices.m_Size = 0;
  this->m_TriangleIndices.m_Memory.m_pMemory = 0;
  this->m_TriangleIndices.m_Memory.m_nAllocationCount = 45;
  this->m_TriangleIndices.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this - 80) & 3) != 0 && Plat_IsInDebugSessionRaw() != 0 )
  {
    __debugbreak();
    this->m_TriangleIndices.m_Memory.m_pMemory = v5;
  }
  else
  {
    this->m_TriangleIndices.m_Memory.m_pMemory = v5;
  }
}


// CTriangulatedPolygon::CTriangulatedPolygon  (line 499, @0x00000000031daa40, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CTriangulatedPolygon::ConstructPolygon, Plat_IsInDebugSessionRaw, CUtlMemory<Vector, int>::Purge, _Unwind_Resume, CUtlMemory<int, int>::Purge, CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16ul, int> >::~CUtlVectorBase, CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16ul, int> >::~CUtlVectorBase, CUtlMemory<Vector2D, int>::Purge, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45ul, int> >::~CUtlVectorBase
// callers: CNavSplice::CalcPerimeter
void __fastcall CTriangulatedPolygon::CTriangulatedPolygon(
        CTriangulatedPolygon *const this,
        const Vector *pPositions,
        const Vector2D *pTexcoords,
        int nNumVertices)
{
  Vector *p_m_FixedMemory; // r15
  __int64 v9; // rdx
  vec_t z; // eax

  p_m_FixedMemory = &this->m_Vertices.m_Memory.m_FixedMemory;
  this->m_Classification = CTriangulatedPolygon::PolygonClassification_t::POLYGON_TYPE_UKNOWN;
  this->m_Vertices.m_Size = 0;
  this->m_Vertices.m_Memory.m_pMemory = 0;
  this->m_Vertices.m_Memory.m_nAllocationCount = 16;
  this->m_Vertices.m_Memory.m_nGrowSize = 0x80000000;
  v9 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&this->m_vNormal.x = *&vec3_origin.x;
  this->m_vNormal.z = z;
  *&this->m_vMin.x = v9;
  this->m_vMin.z = z;
  *&this->m_vMax.x = v9;
  this->m_vMax.z = z;
  if ( ((this + 64) & 3) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_Vertices.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_Texcoords.m_Size = 0;
  this->m_Texcoords.m_Memory.m_pMemory = 0;
  this->m_Texcoords.m_Memory.m_nAllocationCount = 16;
  this->m_Texcoords.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 3) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_Texcoords.m_Memory.m_pMemory = &this->m_Texcoords.m_Memory.m_FixedMemory;
  this->m_TriangleIndices.m_Size = 0;
  this->m_TriangleIndices.m_Memory.m_pMemory = 0;
  this->m_TriangleIndices.m_Memory.m_nAllocationCount = 45;
  this->m_TriangleIndices.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this - 80) & 3) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_TriangleIndices.m_Memory.m_pMemory = &this->m_TriangleIndices.m_Memory.m_FixedMemory;
  CTriangulatedPolygon::ConstructPolygon(this, pPositions, pTexcoords, nNumVertices);
}


// CTriangulatedPolygon::ConstructPolygon  (line 512, @0x00000000031da760, libserver.so)  // inlines: AddMultipleToTail, CopyConstruct<Vector2D>, CopyConstruct<Vector>, GrowMemory, GrowVector, InsertMultipleBefore, Max, Min, RemoveAll, Vector2D, operator=
// calls: CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16ul, int> >::RemoveAll, CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16ul, int> >::RemoveAll, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45ul, int> >::SetCount, PlaneEquation, TriangulatePolygon, CUtlMemory<Vector, int>::Grow, CUtlMemory<Vector2D, int>::Grow
// callers: CTriangulatedPolygon::CTriangulatedPolygon
void __fastcall CTriangulatedPolygon::ConstructPolygon(
        CTriangulatedPolygon *const this,
        const Vector *pPositions,
        const Vector2D *pTexcoords,
        int nNumVertices)
{
  __int64 m_Size; // r13
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  Vector2D *v15; // rdx
  Vector *m_pMemory; // rax
  int v17; // edx
  float v18; // xmm2_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  int m_nAllocationCount; // edx
  int v25; // eax
  const Vector *v26; // rax
  int v27; // ecx
  char *v28; // rsi
  int v29; // [rsp+8h] [rbp-48h]
  int v30; // [rsp+Ch] [rbp-44h]
  float flPlaneDist[13]; // [rsp+1Ch] [rbp-34h] BYREF

  CUtlVectorBase<Vector,CUtlMemoryFixedGrowable<Vector,16ul,int>>::RemoveAll(&this->m_Vertices);
  CUtlVectorBase<Vector2D,CUtlMemoryFixedGrowable<Vector2D,16ul,int>>::RemoveAll(&this->m_Texcoords);
  m_Size = this->m_Vertices.m_Size;
  this->m_TriangleIndices.m_Size = 0;
  if ( nNumVertices != 0 )
  {
    m_nAllocationCount = this->m_Vertices.m_Memory.m_nAllocationCount;
    v25 = nNumVertices + m_Size;
    if ( nNumVertices + m_Size > m_nAllocationCount )
    {
      CUtlMemory<Vector,int>::Grow(&this->m_Vertices.m_Memory, v25 - m_nAllocationCount);
      v25 = nNumVertices + m_Size;
    }
    this->m_Vertices.m_Size = v25;
    if ( pPositions != 0 && nNumVertices > 0 )
    {
      v26 = pPositions;
      v27 = 0;
      do
      {
        v28 = this->m_Vertices.m_Memory.m_pMemory + v26 + 12 * m_Size - pPositions;
        if ( v28 != 0 )
        {
          *v28 = *&v26->x;
          *(v28 + 2) = LODWORD(v26->z);
        }
        ++v27;
        ++v26;
      }
      while ( nNumVertices > v27 );
    }
  }
  CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,45ul,int>>::SetCount(&this->m_TriangleIndices, 3 * nNumVertices - 6);
  if ( pTexcoords != 0 )
  {
    v9 = this->m_Texcoords.m_Size;
    if ( nNumVertices == 0 )
      goto LABEL_4;
    v11 = this->m_Texcoords.m_Memory.m_nAllocationCount;
    v12 = nNumVertices + v9;
    if ( nNumVertices + v9 > v11 )
    {
      v29 = this->m_Texcoords.m_Size;
      v30 = nNumVertices + v9;
      CUtlMemory<Vector2D,int>::Grow(&this->m_Texcoords.m_Memory, v12 - v11);
      v9 = v29;
      v12 = v30;
    }
    this->m_Texcoords.m_Size = v12;
    if ( nNumVertices <= 0 )
    {
LABEL_4:
      this->m_vMin.x = 3.4028235e38;
      this->m_vMin.y = 3.4028235e38;
      this->m_vMin.z = 3.4028235e38;
      this->m_vMax.x = -3.4028235e38;
      this->m_vMax.y = -3.4028235e38;
      this->m_vMax.z = -3.4028235e38;
      goto LABEL_5;
    }
    v13 = v9;
    v14 = 0;
    do
    {
      v15 = &this->m_Texcoords.m_Memory.m_pMemory[v13];
      if ( v15 != 0 )
      {
        v15->x = pTexcoords[v14].x;
        v15->y = pTexcoords[v14].y;
      }
      ++v14;
      ++v13;
    }
    while ( nNumVertices > v14 );
    this->m_vMin.x = 3.4028235e38;
    this->m_vMin.y = 3.4028235e38;
    this->m_vMin.z = 3.4028235e38;
    this->m_vMax.x = -3.4028235e38;
    this->m_vMax.y = -3.4028235e38;
    this->m_vMax.z = -3.4028235e38;
  }
  else
  {
    this->m_vMin.x = 3.4028235e38;
    this->m_vMin.y = 3.4028235e38;
    this->m_vMin.z = 3.4028235e38;
    this->m_vMax.x = -3.4028235e38;
    this->m_vMax.y = -3.4028235e38;
    this->m_vMax.z = -3.4028235e38;
    if ( nNumVertices <= 0 )
      goto LABEL_5;
  }
  m_pMemory = this->m_Vertices.m_Memory.m_pMemory;
  v17 = 0;
  v18 = -3.4028235e38;
  v19 = 3.4028235e38;
  v20 = -3.4028235e38;
  v21 = -3.4028235e38;
  v22 = 3.4028235e38;
  v23 = 3.4028235e38;
  do
  {
    v23 = fminf(v23, m_pMemory->z);
    ++v17;
    ++m_pMemory;
    v22 = fminf(v22, m_pMemory[-1].y);
    v19 = fminf(v19, m_pMemory[-1].x);
    this->m_vMin.z = v23;
    this->m_vMin.y = v22;
    this->m_vMin.x = v19;
    v21 = fmaxf(v21, m_pMemory[-1].z);
    v20 = fmaxf(v20, m_pMemory[-1].y);
    v18 = fmaxf(v18, m_pMemory[-1].x);
    this->m_vMax.z = v21;
    this->m_vMax.y = v20;
    this->m_vMax.x = v18;
  }
  while ( nNumVertices > v17 );
LABEL_5:
  flPlaneDist[0] = 0.0;
  PlaneEquation(pPositions, nNumVertices, &this->m_vNormal, flPlaneDist);
  v10 = TriangulatePolygon(
          pPositions,
          nNumVertices,
          this->m_TriangleIndices.m_Memory.m_pMemory,
          this->m_TriangleIndices.m_Size,
          *&this->m_vNormal.x,
          this->m_vNormal.z);
  CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,45ul,int>>::SetCount(&this->m_TriangleIndices, v10);
  this->m_Classification = CTriangulatedPolygon::PolygonClassification_t::POLYGON_TYPE_UKNOWN;
}


// CTriangulatedPolygon::IsPointInPolygon  (line 555, @0x00000000031d8690, libserver.so)  // inlines: Cross, CrossProduct, Normalized, VectorSubtract, operator-, operator[]
// calls: VectorNormalize, InsideTriangle
// callers: CTriangulatedPolygon::IsPointInPolygon
bool __fastcall CTriangulatedPolygon::IsPointInPolygon(
        const CTriangulatedPolygon *const this,
        const Vector *const vPoint)
{
  float y; // xmm1_4
  float z; // xmm2_4
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rdi
  int *m_pMemory; // rcx
  Vector *v10; // rdx
  const Vector *v11; // r13
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  bool result; // al
  bool v21; // cc
  int m_Size; // [rsp+4h] [rbp-5Ch]
  Vector *b; // [rsp+8h] [rbp-58h]
  Vector *c; // [rsp+10h] [rbp-50h]
  Vector vTriangleNormal; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_vMin.x > vPoint->x )
    return 0;
  y = vPoint->y;
  if ( this->m_vMin.y > y )
    return 0;
  z = vPoint->z;
  if ( this->m_vMin.z > z )
    return 0;
  if ( vPoint->x > this->m_vMax.x )
    return 0;
  if ( y > this->m_vMax.y )
    return 0;
  if ( z > this->m_vMax.z )
    return 0;
  m_Size = this->m_TriangleIndices.m_Size;
  if ( m_Size <= 2 )
    return 0;
  v6 = 0;
  v7 = 5;
  v8 = 2;
  while ( 1 )
  {
    m_pMemory = this->m_TriangleIndices.m_Memory.m_pMemory;
    v10 = this->m_Vertices.m_Memory.m_pMemory;
    v11 = &v10[m_pMemory[v6]];
    b = &v10[m_pMemory[v6 + 1]];
    c = &v10[m_pMemory[v8]];
    v12 = v11->y;
    v13 = b->x - v11->x;
    v14 = c->x - v11->x;
    v15 = v11->z;
    v16 = b->y - v12;
    v17 = c->y - v12;
    v18 = b->z - v15;
    v19 = c->z - v15;
    vTriangleNormal.x = (v16 * v19) - (v18 * v17);
    vTriangleNormal.y = (v18 * v14) - (v19 * v13);
    vTriangleNormal.z = (v17 * v13) - (v14 * v16);
    VectorNormalize(&vTriangleNormal);
    result = InsideTriangle(v11, b, c, vPoint, &vTriangleNormal);
    if ( result )
      break;
    v8 = v7;
    v6 += 3;
    v21 = m_Size <= v7;
    v7 += 3;
    if ( v21 )
      return 0;
  }
  return result;
}


// CTriangulatedPolygon::IsPointInPolygon  (line 586, @0x00000000031d8840, libserver.so)  // inlines: Clamp<float>, Dot, DotProduct, VectorMultiply, VectorSubtract, operator*, operator-
// calls: CTriangulatedPolygon::IsPointInPolygon
// callers: CNavSplice::BlockBackgroundMesh
// local variable allocation has failed, the output may be wrong!
bool __fastcall CTriangulatedPolygon::IsPointInPolygon(
        const CTriangulatedPolygon *const this,
        const Vector *const vPoint,
        float a3,
        float flNormalTolerance)
{
  __int64 v4; // rbp
  bool result; // al
  float v6; // xmm2_4
  float y; // xmm8_4
  float x; // xmm6_4
  float v9; // xmm5_4
  float z; // xmm7_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13[2]; // [rsp-8h] [rbp-18h] BYREF
  __int128 vTestPoint; // [rsp+0h] [rbp-10h] OVERLAPPED

  result = 0;
  if ( this->m_TriangleIndices.m_Size != 0 )
  {
    *(&vTestPoint + 1) = v4;
    v6 = -a3;
    y = vPoint->y;
    x = this->m_vNormal.x;
    v9 = this->m_vNormal.y;
    z = vPoint->z;
    v11 = this->m_vNormal.z;
    v12 = (((vPoint->x - this->m_Vertices.m_Memory.m_pMemory->x) * x)
         + ((y - this->m_Vertices.m_Memory.m_pMemory->y) * v9))
        + ((z - this->m_Vertices.m_Memory.m_pMemory->z) * v11);
    if ( -a3 <= v12 )
      v6 = fminf(a3, v12);
    v13[0] = vPoint->x - (x * v6);
    v13[1] = y - (v9 * v6);
    *&vTestPoint = z - (v6 * v11);
    return CTriangulatedPolygon::IsPointInPolygon(this, v13);
  }
  return result;
}


// CTriangulatedPolygon::IntersectLineSegment  (line 605, @0x00000000031d8900, libserver.so)  // inlines: Cross, CrossProduct, DistTo, Dot, DotProduct, InitFromPointAndNormal, IntersectLineSegment, NormalizeInPlace, Normalized, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator[]
// calls: InsideTriangle, VectorNormalize
bool __fastcall CTriangulatedPolygon::IntersectLineSegment(
        const CTriangulatedPolygon *const this,
        const Vector *const vSegmentPointA,
        const Vector *const vSegmentPointB,
        Vector *pOutIntersection)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  bool result; // al
  int *m_pMemory; // rdi
  Vector *v11; // rcx
  const Vector *v12; // r13
  float y; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float z; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float x; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm10_4
  float v25; // xmm9_4
  float v26; // xmm8_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  int m_Size; // [rsp+10h] [rbp-80h]
  int v32; // [rsp+14h] [rbp-7Ch]
  Vector *b; // [rsp+18h] [rbp-78h]
  Vector *c; // [rsp+20h] [rbp-70h]
  Vector vTriangleNormal; // [rsp+30h] [rbp-60h] BYREF
  Vector vIntersection; // [rsp+40h] [rbp-50h] BYREF
  VPlane vTrianglePlane; // [rsp+50h] [rbp-40h] BYREF

  if ( pOutIntersection != 0 )
    *pOutIntersection = vec3_origin;
  m_Size = this->m_TriangleIndices.m_Size;
  if ( m_Size <= 2 )
    return 0;
  v7 = 0;
  v32 = 5;
  v8 = 2;
  while ( 1 )
  {
    m_pMemory = this->m_TriangleIndices.m_Memory.m_pMemory;
    v11 = this->m_Vertices.m_Memory.m_pMemory;
    v12 = &v11[m_pMemory[v7]];
    b = &v11[m_pMemory[v7 + 1]];
    c = &v11[m_pMemory[v8]];
    y = v12->y;
    v14 = b->x - v12->x;
    v15 = c->x - v12->x;
    z = v12->z;
    v17 = b->y - y;
    v18 = c->y - y;
    v19 = b->z - z;
    v20 = c->z - z;
    vTrianglePlane.m_Normal.x = (v17 * v20) - (v19 * v18);
    vTrianglePlane.m_Normal.y = (v19 * v15) - (v20 * v14);
    vTrianglePlane.m_Normal.z = (v18 * v14) - (v15 * v17);
    VectorNormalize(&vTrianglePlane.m_Normal);
    vTriangleNormal = vTrianglePlane.m_Normal;
    VectorNormalize(&vTrianglePlane.m_Normal);
    x = vSegmentPointA->x;
    v22 = vSegmentPointA->y;
    v23 = vSegmentPointA->z;
    v24 = vSegmentPointB->x;
    v25 = vSegmentPointB->y;
    vTrianglePlane.m_Dist = ((v12->x * vTrianglePlane.m_Normal.x) + (v12->y * vTrianglePlane.m_Normal.y))
                          + (v12->z * vTrianglePlane.m_Normal.z);
    v26 = vSegmentPointB->z;
    v27 = (((vTrianglePlane.m_Normal.x * x) + (vTrianglePlane.m_Normal.y * v22)) + (vTrianglePlane.m_Normal.z * v23))
        - vTrianglePlane.m_Dist;
    v28 = (((vTrianglePlane.m_Normal.x * v24) + (vTrianglePlane.m_Normal.y * v25)) + (vTrianglePlane.m_Normal.z * v26))
        - vTrianglePlane.m_Dist;
    if ( fabs(v27 - v28) < 0.001 )
      break;
    v29 = -v27 / (v28 - v27);
    if ( v29 >= 0.0 && v29 <= 1.0 )
    {
      vIntersection.x = ((v24 - x) * v29) + x;
      vIntersection.y = ((v25 - v22) * v29) + v22;
      vIntersection.z = ((v26 - v23) * v29) + v23;
      goto LABEL_7;
    }
LABEL_8:
    v8 = v32;
    v7 += 3;
    if ( m_Size <= v32 )
      return 0;
    v32 += 3;
  }
  if ( fabs(v27) >= 0.001 )
    goto LABEL_8;
  vIntersection.x = x;
  vIntersection.y = v22;
  vIntersection.z = v23;
LABEL_7:
  result = InsideTriangle(v12, b, c, &vIntersection, &vTriangleNormal);
  if ( !result )
    goto LABEL_8;
  if ( pOutIntersection != 0 )
    *pOutIntersection = vIntersection;
  return result;
}


// CTriangulatedPolygon::ComputeTextureCoordinateForPoint  (line 649, @0x00000000031d97e0, libserver.so)  // inlines: DotProduct, Vector2D, Vector2DAdd, Vector2DMultiply, VectorSubtract, operator*, operator+, operator-, operator[]
// calls: GetBarycentricCoords3D, GetBestThreeTextureBasisVerticies, CalcTextureBasisFromUVs, CTriangulatedPolygon::IsConvex, PointInQuadToBarycentric, TexCoordInQuadFromBarycentric
// local variable allocation has failed, the output may be wrong!
Vector2D *__fastcall CTriangulatedPolygon::ComputeTextureCoordinateForPoint(
        Vector2D *a1,
        const CTriangulatedPolygon *const this,
        const Vector *const vPoint)
{
  int m_Size; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rcx
  vec_t v14; // xmm2_4
  vec_t z; // eax
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  vec_t v20; // xmm0_4
  vec_t v21; // xmm1_4
  Vector2D *m_pMemory; // rdi
  Vector2D *v24; // [rsp+10h] [rbp-D0h]
  int v26; // [rsp+38h] [rbp-A8h]
  int i; // [rsp+3Ch] [rbp-A4h]
  Vector vTextureAxisU; // [rsp+40h] [rbp-A0h] BYREF
  __int64 cA; // [rsp+50h] [rbp-90h] BYREF
  float v30; // [rsp+58h] [rbp-88h]
  float cB; // [rsp+60h] [rbp-80h] BYREF
  float v32; // [rsp+64h] [rbp-7Ch]
  Vector2D cC; // [rsp+80h] [rbp-60h] OVERLAPPED BYREF
  float v34; // [rsp+88h] [rbp-58h]

  m_Size = this->m_Vertices.m_Size;
  if ( this->m_Texcoords.m_Size < m_Size )
  {
    *a1 = vec2_origin;
  }
  else if ( m_Size == 4
         && CTriangulatedPolygon::IsConvex(this)
         && PointInQuadToBarycentric(
              this->m_Vertices.m_Memory.m_pMemory,
              this->m_Vertices.m_Memory.m_pMemory + 1,
              this->m_Vertices.m_Memory.m_pMemory + 2,
              this->m_Vertices.m_Memory.m_pMemory + 3,
              vPoint,
              &cB) == QuadBarycentricRetval_t::BARY_QUADRATIC_TRUE )
  {
    m_pMemory = this->m_Texcoords.m_Memory.m_pMemory;
    cC = vec2_origin;
    TexCoordInQuadFromBarycentric(m_pMemory, m_pMemory + 1, m_pMemory + 2, m_pMemory + 3, &cB, &cC);
    *a1 = cC;
  }
  else
  {
    v26 = this->m_TriangleIndices.m_Size;
    if ( v26 <= 2 )
    {
LABEL_11:
      GetBestThreeTextureBasisVerticies(
        this->m_Vertices.m_Memory.m_pMemory,
        this->m_Texcoords.m_Memory.m_pMemory,
        this->m_Vertices.m_Size,
        &cC,
        &cB);
      z = vec3_origin.z;
      *&vTextureAxisU.x = *&vec3_origin.x;
      cA = *&vec3_origin.x;
      vTextureAxisU.z = z;
      v30 = z;
      CalcTextureBasisFromUVs(&cC, &cB, &vTextureAxisU, &cA);
      v17 = vPoint->x - cC.x;
      v18 = vPoint->y - cC.y;
      v19 = vPoint->z - v34;
      v20 = (((*&cA * v17) + (*(&cA + 1) * v18)) + (v30 * v19)) + v32;
      v21 = (((v17 * vTextureAxisU.x) + (v18 * vTextureAxisU.y)) + (v19 * vTextureAxisU.z)) + cB;
      a1->y = v20;
      a1->x = v21;
    }
    else
    {
      v5 = 0;
      v6 = 2;
      for ( i = 5; ; i += 3 )
      {
        v7 = this->m_TriangleIndices.m_Memory.m_pMemory;
        v8 = v7[v5 + 1];
        v9 = v7[v5];
        v10 = v7[v6];
        v24 = this->m_Texcoords.m_Memory.m_pMemory;
        if ( GetBarycentricCoords3D(
               &this->m_Vertices.m_Memory.m_pMemory[v9],
               &this->m_Vertices.m_Memory.m_pMemory[v8],
               &this->m_Vertices.m_Memory.m_pMemory[v10],
               vPoint,
               &cA,
               &cB,
               &cC) )
        {
          break;
        }
        v6 = i;
        v5 += 3;
        if ( v26 <= i )
          goto LABEL_11;
      }
      v11 = &v24[v9];
      v12 = &v24[v8];
      v13 = &v24[v10];
      v14 = (cC.x * *v13) + ((cB * *v12) + (*&cA * *v11));
      a1->y = (v13[1] * cC.x) + ((v12[1] * cB) + (v11[1] * *&cA));
      a1->x = v14;
    }
  }
  return a1;
}


// ComputeTriangleNormal  (line 709, @0x00000000031d8c50, libserver.so)  // inlines: Cross, CrossProduct, Normalized, VectorSubtract, operator-
// calls: VectorNormalize
// callers: ClipTrianglesToConvexPolygonProjection
Vector __fastcall ComputeTriangleNormal(
        const Vector *const vPositionA,
        const Vector *const vPositionB,
        const Vector *const vPositionC)
{
  float y; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm0_4
  float z; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  Vector vec; // [rsp+10h] [rbp-10h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  y = vPositionA->y;
  v4 = vPositionB->x - vPositionA->x;
  v5 = vPositionC->x - vPositionA->x;
  z = vPositionA->z;
  v7 = vPositionB->y - y;
  v8 = vPositionC->y - y;
  v9 = vPositionB->z - z;
  v10 = vPositionC->z - z;
  vec.x = (v7 * v10) - (v9 * v8);
  vec.y = (v9 * v5) - (v10 * v4);
  vec.z = (v8 * v4) - (v5 * v7);
  VectorNormalize(&vec);
  *&result.x = *&vec.x;
  result.z = vec.z;
  return result;
}


// ClipTriangle  (line 722, @0x00000000031d8cf0, libserver.so)  // inlines: DotProduct, Lerp<Vector>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// callers: ClipTrianglesByPlane
int __fastcall ClipTriangle(const Vector *pVerts, const Vector4D *const vClipPlane, Vector *pClippedVerts)
{
  float x; // xmm4_4
  const Vector *v4; // rcx
  float y; // xmm6_4
  int v6; // r9d
  float z; // xmm5_4
  __int64 v8; // r8
  int result; // eax
  const Vector *v10; // r8
  float w; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm8_4
  __int64 v19; // r8
  float v20; // xmm7_4
  Vector *v21; // r8
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  float v24; // xmm2_4
  __int64 v25; // r10
  Vector *v26; // r10

  x = vClipPlane->x;
  v4 = pVerts;
  y = vClipPlane->y;
  v6 = 0;
  z = vClipPlane->z;
  v8 = 2;
  result = 0;
  while ( 1 )
  {
    v10 = &pVerts[v8];
    w = vClipPlane->w;
    v12 = (((x * v10->x) + (v10->y * y)) + (v10->z * z)) + w;
    v13 = (((v4->x * x) + (v4->y * y)) + (v4->z * z)) + w;
    if ( v12 <= 0.0 )
    {
      v25 = result++;
      v26 = &pClippedVerts[v25];
      v26->x = v10->x;
      v26->y = v10->y;
      v26->z = v10->z;
    }
    if ( (v12 * v13) < 0.0 )
    {
      v14 = v13 - v12;
      v15 = v12;
      v16 = v10->y;
      v17 = v10->z;
      v18 = v10->x;
      v19 = result++;
      v20 = -v15 / v14;
      v21 = &pClippedVerts[v19];
      v22 = ((v4->y - v16) * v20) + v16;
      v23 = ((v4->z - v17) * v20) + v17;
      v24 = v4->x;
      v21->y = v22;
      v21->z = v23;
      v21->x = ((v24 - v18) * v20) + v18;
    }
    ++v4;
    if ( v6 == 2 )
      break;
    v8 = v6++;
  }
  return result;
}


// ClipTrianglesByPlane  (line 759, @0x00000000031d9d10, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ConvertToPlaneEquation, CopyConstruct<Vector>, Element, GrowMemory, InsertMultipleBefore, Purge, RemoveAll, RemoveMultipleFromTail, SetCount, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMemAllocSystemInitialize, ClipTriangle, CUtlMemory<Vector, int>::Grow, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ShiftElementsRight, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: ClipTrianglesToConvexPolygonProjection
void __fastcall ClipTrianglesByPlane(
        const VPlane *const plane,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pInOutTriangleVertices)
{
  vec_t x; // xmm0_4
  int m_Size; // eax
  vec_t y; // xmm0_4
  float m_Dist; // xmm0_4
  int v6; // eax
  Vector *v7; // rbx
  Vector *v8; // r14
  int v9; // r13d
  Vector *v10; // rax
  int v11; // r12d
  int v12; // r12d
  Vector *v13; // rax
  int v14; // eax
  Vector *v15; // rax
  __int64 v16; // r12
  int v17; // r13d
  int v18; // ebx
  int v19; // r12d
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // rdx
  int v27; // [rsp+20h] [rbp-B0h]
  int iVertex; // [rsp+24h] [rbp-ACh]
  __int64 v29; // [rsp+28h] [rbp-A8h]
  Vector4D vClipPlane; // [rsp+40h] [rbp-90h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > resultTriangleVertices; // [rsp+50h] [rbp-80h] BYREF
  Vector clippedVertices[4]; // [rsp+70h] [rbp-60h] BYREF

  x = plane->m_Normal.x;
  resultTriangleVertices.m_Size = 0;
  m_Size = pInOutTriangleVertices->m_Size;
  resultTriangleVertices.m_Memory.m_pMemory = 0;
  vClipPlane.x = x;
  y = plane->m_Normal.y;
  resultTriangleVertices.m_Memory.m_nGrowSize = 0;
  vClipPlane.y = y;
  v27 = m_Size;
  vClipPlane.z = plane->m_Normal.z;
  m_Dist = plane->m_Dist;
  resultTriangleVertices.m_Memory.m_nAllocationCount = m_Size;
  vClipPlane.w = -m_Dist;
  if ( m_Size == 0 )
    goto LABEL_2;
  CMemAllocSystemInitialize(plane);
  resultTriangleVertices.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                g_pMemAlloc,
                                                12LL * resultTriangleVertices.m_Memory.m_nAllocationCount);
  if ( v27 > 2 )
  {
    v29 = 0;
    iVertex = 0;
    do
    {
      v6 = ClipTriangle(&pInOutTriangleVertices->m_Memory.m_pMemory[v29], &vClipPlane, clippedVertices);
      if ( v6 > 2 )
      {
        v7 = &clippedVertices[2];
        v8 = &clippedVertices[(v6 - 3) + 3];
        do
        {
          v16 = resultTriangleVertices.m_Size;
          v17 = resultTriangleVertices.m_Size;
          if ( resultTriangleVertices.m_Size == resultTriangleVertices.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<Vector,int>::Grow(&resultTriangleVertices.m_Memory, 1);
            v17 = resultTriangleVertices.m_Size;
          }
          v9 = v17 + 1;
          resultTriangleVertices.m_Size = v9;
          v10 = &resultTriangleVertices.m_Memory.m_pMemory[v16];
          if ( v10 != 0 )
          {
            *&v10->x = *&clippedVertices[0].x;
            v9 = resultTriangleVertices.m_Size;
            v10->z = clippedVertices[0].z;
          }
          v11 = v9;
          if ( resultTriangleVertices.m_Memory.m_nAllocationCount == v9 )
          {
            CUtlMemory<Vector,int>::Grow(&resultTriangleVertices.m_Memory, 1);
            v11 = resultTriangleVertices.m_Size;
          }
          v12 = v11 + 1;
          resultTriangleVertices.m_Size = v12;
          v13 = &resultTriangleVertices.m_Memory.m_pMemory[v9];
          if ( v13 != 0 )
          {
            *&v13->x = *&v7[-1].x;
            v12 = resultTriangleVertices.m_Size;
            v13->z = v7[-1].z;
          }
          v14 = v12;
          if ( v12 == resultTriangleVertices.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<Vector,int>::Grow(&resultTriangleVertices.m_Memory, 1);
            v14 = resultTriangleVertices.m_Size;
          }
          resultTriangleVertices.m_Size = v14 + 1;
          v15 = &resultTriangleVertices.m_Memory.m_pMemory[v12];
          if ( v15 != 0 )
          {
            *&v15->x = *&v7->x;
            v15->z = v7->z;
          }
          ++v7;
        }
        while ( v7 != v8 );
      }
      iVertex += 3;
      v29 += 3;
    }
    while ( v27 > iVertex + 2 );
  }
  v18 = resultTriangleVertices.m_Size;
  v19 = pInOutTriangleVertices->m_Size;
  v20 = resultTriangleVertices.m_Size - pInOutTriangleVertices->m_Size;
  if ( v20 <= 0 )
  {
    if ( resultTriangleVertices.m_Size != v19 )
      pInOutTriangleVertices->m_Size = resultTriangleVertices.m_Size;
  }
  else
  {
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::GrowVector(pInOutTriangleVertices, v20);
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::ShiftElementsRight(pInOutTriangleVertices, v19, v20);
  }
  if ( v18 <= 0 )
  {
LABEL_2:
    resultTriangleVertices.m_Size = 0;
    if ( (resultTriangleVertices.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
    goto LABEL_28;
  }
  v21 = 0;
  do
  {
    v22 = v21;
    v23 = v21;
    v21 += 12;
    v24 = (&resultTriangleVertices.m_Memory.m_pMemory->x + v22);
    v25 = (&pInOutTriangleVertices->m_Memory.m_pMemory->x + v23);
    *v25 = *v24;
    v25[1] = v24[1];
    v25[2] = v24[2];
  }
  while ( v21 != 4 * (3LL * (v18 - 1) + 3) );
  resultTriangleVertices.m_Size = 0;
  if ( (resultTriangleVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_28:
    CUtlMemory<Vector,int>::Purge(&resultTriangleVertices.m_Memory);
    if ( (resultTriangleVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&resultTriangleVertices.m_Memory);
  }
}


// ClipTrianglesToConvexPolygonProjection  (line 789, @0x00000000031da0c0, libserver.so)  // inlines: AddMultipleToTail, AddVectorToTail<CUtlMemory<Vector, int> >, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<Vector>, Cross, CrossProduct, Dot, DotProduct, EnsureCapacity, InitFromPointAndNormal, InsertMultipleBefore, NormalizeInPlace, Normalized, Purge, RemoveAll, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: ComputeTriangleNormal, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ShiftElementsRight, VectorNormalize, ClipTrianglesByPlane, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=, CUtlMemory<Vector, int>::EnsureCapacity, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CTriangulatedPolygon::ClipTrianglesToPolygonProjection
void __fastcall ClipTrianglesToConvexPolygonProjection(
        const Vector *pVertices,
        int nNumVertices,
        const Vector *const vNormal,
        float flProjectionDistance,
        bool bCullBackfaces,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const triangleVertices,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pOutClippedTriangleVertices)
{
  Vector *m_pMemory; // rbx
  int v10; // r13d
  __int64 v11; // r13
  __int64 i; // rax
  Vector *v13; // rdx
  __m128i v14; // xmm6
  float v15; // xmm3_4
  float v16; // r13d
  __m128i v17; // xmm7
  float v18; // ebx
  int v19; // eax
  const Vector *v20; // rbx
  int j; // r13d
  const Vector *v22; // rax
  vec_t v23; // xmm1_4
  vec_t v24; // xmm0_4
  float v25; // xmm2_4
  vec_t v26; // xmm0_4
  int m_Size; // ebx
  __int64 v28; // r12
  int v29; // esi
  unsigned __int64 v30; // rax
  Vector *v31; // rcx
  Vector *v32; // rdx
  vec_t x; // [rsp+4h] [rbp-9Ch]
  float y; // [rsp+10h] [rbp-90h]
  float z; // [rsp+24h] [rbp-7Ch]
  float v40; // [rsp+24h] [rbp-7Ch]
  float flProjectionDistanceb; // [rsp+28h] [rbp-78h]
  int elem; // [rsp+2Ch] [rbp-74h]
  float elema; // [rsp+2Ch] [rbp-74h]
  int elemb; // [rsp+2Ch] [rbp-74h]
  VPlane nearPlane; // [rsp+30h] [rbp-70h] BYREF
  VPlane vClipPlane; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > clippedTriangleVertices; // [rsp+50h] [rbp-50h] BYREF
  Vector v49; // 0:^14.12

  z = vNormal->z;
  v49.z = -z;
  y = vNormal->y;
  x = vNormal->x;
  v49.y = -y;
  v49.x = -vNormal->x;
  clippedTriangleVertices.m_Size = 0;
  clippedTriangleVertices.m_Memory.m_pMemory = 0;
  clippedTriangleVertices.m_Memory.m_nAllocationCount = 0;
  clippedTriangleVertices.m_Memory.m_nGrowSize = 0;
  if ( bCullBackfaces )
  {
    m_pMemory = triangleVertices->m_Memory.m_pMemory;
    v10 = triangleVertices->m_Size / 3;
    if ( 3 * v10 > 0 )
      CUtlMemory<Vector,int>::EnsureCapacity(&clippedTriangleVertices.m_Memory, 3 * v10);
    if ( v10 > 0 )
    {
      v11 = &m_pMemory[3 * (v10 - 1) + 3];
      do
      {
        while ( 1 )
        {
          vClipPlane.m_Normal = ComputeTriangleNormal(m_pMemory, m_pMemory + 1, m_pMemory + 2);
          if ( (((vClipPlane.m_Normal.x * vNormal->x) + (vClipPlane.m_Normal.y * vNormal->y))
              + (vClipPlane.m_Normal.z * vNormal->z)) > 0.0000099999997 )
          {
            elem = clippedTriangleVertices.m_Size;
            CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::GrowVector(&clippedTriangleVertices, 3);
            CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::ShiftElementsRight(&clippedTriangleVertices, elem, 3);
            if ( m_pMemory != 0 )
              break;
          }
          m_pMemory += 3;
          if ( m_pMemory == v11 )
            goto LABEL_14;
        }
        for ( i = 0; i != 3; ++i )
        {
          v13 = &clippedTriangleVertices.m_Memory.m_pMemory[elem + i];
          if ( v13 != 0 )
          {
            *&v13->x = *&m_pMemory[i].x;
            v13->z = m_pMemory[i].z;
          }
        }
        m_pMemory += 3;
      }
      while ( m_pMemory != v11 );
    }
  }
  else
  {
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::operator=(&clippedTriangleVertices, triangleVertices);
  }
LABEL_14:
  if ( flProjectionDistance > 0.0 )
  {
    nearPlane.m_Normal.x = x;
    nearPlane.m_Normal.z = z;
    nearPlane.m_Normal.y = y;
    VectorNormalize(&nearPlane.m_Normal);
    nearPlane.m_Dist = ((pVertices->x * nearPlane.m_Normal.x) + (pVertices->y * nearPlane.m_Normal.y))
                     + (pVertices->z * nearPlane.m_Normal.z);
    ClipTrianglesByPlane(&nearPlane, &clippedTriangleVertices);
    v14 = LODWORD(flProjectionDistance);
    v15 = pVertices->y;
    vClipPlane.m_Normal = v49;
    *v14.m128i_i32 = (flProjectionDistance * v49.x) + pVertices->x;
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
    v17 = LODWORD(flProjectionDistance);
    elema = v15 + (flProjectionDistance * v49.y);
    *v17.m128i_i32 = (flProjectionDistance * v49.z) + pVertices->z;
    v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    VectorNormalize(&vClipPlane.m_Normal);
    vClipPlane.m_Dist = ((v16 * vClipPlane.m_Normal.x) + (elema * vClipPlane.m_Normal.y))
                      + (v18 * vClipPlane.m_Normal.z);
    ClipTrianglesByPlane(&vClipPlane, &clippedTriangleVertices);
  }
  v19 = nNumVertices - 1;
  if ( nNumVertices > 0 )
  {
    v20 = pVertices;
    for ( j = 0; ; ++j )
    {
      v22 = &pVertices[v19];
      v40 = v22->x;
      v23 = v20->y - v22->y;
      flProjectionDistanceb = v22->y;
      v24 = v20->z - v22->z;
      elemb = SLODWORD(v22->z);
      vClipPlane.m_Normal.x = v20->x - v22->x;
      vClipPlane.m_Normal.y = v23;
      vClipPlane.m_Normal.z = v24;
      VectorNormalize(&vClipPlane.m_Normal);
      v25 = vClipPlane.m_Normal.x;
      vClipPlane.m_Normal.x = (v49.y * vClipPlane.m_Normal.z) - (v49.z * vClipPlane.m_Normal.y);
      v26 = (vClipPlane.m_Normal.y * v49.x) - (v25 * v49.y);
      vClipPlane.m_Normal.y = (v49.z * v25) - (vClipPlane.m_Normal.z * v49.x);
      vClipPlane.m_Normal.z = v26;
      VectorNormalize(&vClipPlane.m_Normal);
      vClipPlane.m_Dist = ((v40 * vClipPlane.m_Normal.x) + (flProjectionDistanceb * vClipPlane.m_Normal.y))
                        + (*&elemb * vClipPlane.m_Normal.z);
      ClipTrianglesByPlane(&vClipPlane, &clippedTriangleVertices);
      ++v20;
      if ( j + 1 == nNumVertices )
        break;
      v19 = j;
    }
  }
  m_Size = clippedTriangleVertices.m_Size;
  v28 = pOutClippedTriangleVertices->m_Size;
  if ( clippedTriangleVertices.m_Size != 0 )
  {
    v29 = v28 + clippedTriangleVertices.m_Size;
    if ( v28 + clippedTriangleVertices.m_Size > pOutClippedTriangleVertices->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<Vector,int>::EnsureCapacity(&pOutClippedTriangleVertices->m_Memory, v29);
      v29 = m_Size + pOutClippedTriangleVertices->m_Size;
    }
    pOutClippedTriangleVertices->m_Size = v29;
    if ( m_Size > 0 )
    {
      v30 = 0;
      do
      {
        v31 = &clippedTriangleVertices.m_Memory.m_pMemory[v30 / 0xC];
        v32 = &pOutClippedTriangleVertices->m_Memory.m_pMemory[v28 + v30 / 0xC];
        if ( v32 != 0 )
        {
          *&v32->x = *&v31->x;
          v32->z = v31->z;
        }
        v30 += 12LL;
      }
      while ( v30 != 4 * (3LL * (m_Size - 1) + 3) );
    }
  }
  clippedTriangleVertices.m_Size = 0;
  if ( (clippedTriangleVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&clippedTriangleVertices.m_Memory);
    if ( (clippedTriangleVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&clippedTriangleVertices.m_Memory);
  }
}


// CTriangulatedPolygon::ClipTrianglesToPolygonProjection  (line 853, @0x00000000031da5f0, libserver.so)  // inlines: operator=, operator[]
// calls: CTriangulatedPolygon::IsConvex, ClipTrianglesToConvexPolygonProjection
void __fastcall CTriangulatedPolygon::ClipTrianglesToPolygonProjection(
        const CTriangulatedPolygon *const this,
        float flProjectionDistance,
        bool bCullBackfaces,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const triangleVertices,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pOutClippedTriangleVertices)
{
  int m_Size; // r12d
  int v9; // ebx
  __int64 v10; // rdx
  const CTriangulatedPolygon *v11; // rax
  __int64 v12; // r13
  const CTriangulatedPolygon *v13; // r15
  int *m_pMemory; // rsi
  Vector *v15; // rcx
  __int64 v16; // rdi
  const Vector *vNormal; // [rsp+8h] [rbp-78h]
  bool v19; // [rsp+18h] [rbp-68h]
  Vector vTriangleVertices[3]; // [rsp+20h] [rbp-60h] BYREF

  if ( CTriangulatedPolygon::IsConvex(this) )
  {
    ClipTrianglesToConvexPolygonProjection(
      this->m_Vertices.m_Memory.m_pMemory,
      this->m_Vertices.m_Size,
      &this->m_vNormal,
      flProjectionDistance,
      bCullBackfaces,
      triangleVertices,
      pOutClippedTriangleVertices);
  }
  else
  {
    m_Size = this->m_TriangleIndices.m_Size;
    if ( m_Size > 2 )
    {
      v9 = 5;
      v19 = bCullBackfaces;
      v10 = 2;
      vNormal = &this->m_vNormal;
      v11 = this;
      v12 = 0;
      v13 = v11;
      do
      {
        m_pMemory = v13->m_TriangleIndices.m_Memory.m_pMemory;
        v15 = v13->m_Vertices.m_Memory.m_pMemory;
        vTriangleVertices[0] = v15[m_pMemory[v12]];
        v16 = m_pMemory[v12 + 1];
        v12 += 3;
        vTriangleVertices[1] = v15[v16];
        vTriangleVertices[2] = v15[m_pMemory[v10]];
        ClipTrianglesToConvexPolygonProjection(
          vTriangleVertices,
          3,
          vNormal,
          flProjectionDistance,
          v19,
          triangleVertices,
          pOutClippedTriangleVertices);
        v10 = v9;
        v9 += 3;
      }
      while ( m_Size > v10 );
    }
  }
}


// CTriangulatedPolygon::IsConvex  (line 879, @0x00000000031d8e60, libserver.so)
// calls: PolygonIsConcave
// callers: CTriangulatedPolygon::ComputeTextureCoordinateForPoint, CTriangulatedPolygon::ClipTrianglesToPolygonProjection
bool __fastcall CTriangulatedPolygon::IsConvex(const CTriangulatedPolygon *const this)
{
  _BOOL4 v2; // eax
  bool IsConcave; // dl

  if ( this->m_Classification != CTriangulatedPolygon::PolygonClassification_t::POLYGON_TYPE_UKNOWN )
  {
    LOBYTE(v2) = this->m_Classification == CTriangulatedPolygon::PolygonClassification_t::POLYGON_TYPE_CONVEX;
  }
  else
  {
    IsConcave = PolygonIsConcave(this->m_Vertices.m_Memory.m_pMemory, this->m_Vertices.m_Size, &this->m_vNormal);
    v2 = !IsConcave;
    this->m_Classification = 2 - !IsConcave;
  }
  return v2;
}


// CTriangulatedPolygon::ComputeCenter  (line 894, @0x00000000031d8eb0, libserver.so)  // inlines: VectorDivide, operator+=, operator/
Vector __fastcall CTriangulatedPolygon::ComputeCenter(const CTriangulatedPolygon *const this)
{
  int m_Size; // ecx
  float x; // xmm2_4
  float y; // xmm0_4
  float z; // xmm1_4
  Vector *m_pMemory; // rax
  __int64 v6; // rdx
  float v7; // xmm3_4
  float v10[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Size = this->m_Vertices.m_Size;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  m_pMemory = this->m_Vertices.m_Memory.m_pMemory;
  if ( m_Size > 0 )
  {
    v6 = &m_pMemory[(m_Size - 1) + 1];
    do
    {
      x = x + m_pMemory->x;
      ++m_pMemory;
      y = y + m_pMemory[-1].y;
      z = z + m_pMemory[-1].z;
    }
    while ( m_pMemory != v6 );
  }
  v7 = 1.0 / m_Size;
  result.z = z * v7;
  v10[1] = y * v7;
  v10[0] = x * v7;
  *&result.x = *v10;
  return result;
}


// CTriangulatedPolygon::GetPlane  (line 912, @0x00000000031d8f30, libserver.so)  // inlines: Dot, DotProduct, InitFromPointAndNormal, NormalizeInPlace, operator=
// calls: VectorNormalize
void __fastcall CTriangulatedPolygon::GetPlane(const CTriangulatedPolygon *const this, VPlane *pOutPlane)
{
  Vector *m_pMemory; // r12

  if ( this->m_Vertices.m_Size > 0 )
  {
    m_pMemory = this->m_Vertices.m_Memory.m_pMemory;
    pOutPlane->m_Normal = this->m_vNormal;
    VectorNormalize(&pOutPlane->m_Normal);
    pOutPlane->m_Dist = ((m_pMemory->x * pOutPlane->m_Normal.x) + (m_pMemory->y * pOutPlane->m_Normal.y))
                      + (m_pMemory->z * pOutPlane->m_Normal.z);
  }
}


// CTriangulatedPolygon::RebaseTextureCoordinates  (line 924, @0x00000000031d8fa0, libserver.so)  // inlines: Max, Min, Vector2D, Vector2DAdd, Vector2DMultiply, operator*, operator+, operator[]
void __fastcall CTriangulatedPolygon::RebaseTextureCoordinates(CTriangulatedPolygon *const this)
{
  int m_Size; // esi
  Vector2D *m_pMemory; // rdx
  float x; // xmm3_4
  float y; // xmm2_4
  Vector2D *v5; // rax
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm1_4
  int v9; // ecx
  int v10; // eax
  float v11; // xmm1_4
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx

  m_Size = this->m_Texcoords.m_Size;
  if ( m_Size != 0 )
  {
    m_pMemory = this->m_Texcoords.m_Memory.m_pMemory;
    x = m_pMemory->x;
    y = m_pMemory->y;
    if ( m_Size <= 1 )
    {
      v9 = ((x + x) * 0.5);
      v10 = ((y + y) * 0.5);
      if ( m_Size <= 0 )
        return;
    }
    else
    {
      v5 = this->m_Texcoords.m_Memory.m_pMemory;
      v6 = m_pMemory->y;
      v7 = m_pMemory->x;
      do
      {
        v8 = v5[1].y;
        ++v5;
        v6 = fminf(v6, v8);
        x = fminf(x, v5->x);
        y = fmaxf(y, v8);
        v7 = fmaxf(v7, v5->x);
      }
      while ( v5 != &m_pMemory[(m_Size - 2) + 1] );
      v9 = ((x + v7) * 0.5);
      v10 = ((y + v6) * 0.5);
    }
    v11 = v10;
    v12 = 0;
    while ( 1 )
    {
      m_pMemory[v12 / 8].x = m_pMemory[v12 / 8].x - v9;
      v13 = v12;
      v12 += 8LL;
      *(&this->m_Texcoords.m_Memory.m_pMemory->y + v13) = *(&this->m_Texcoords.m_Memory.m_pMemory->y + v13) - v11;
      if ( v12 == 8LL * (m_Size - 1) + 8 )
        break;
      m_pMemory = this->m_Texcoords.m_Memory.m_pMemory;
    }
  }
}


// CTriangulatedPolygon::SnapVertices  (line 954, @0x00000000031d90a0, libserver.so)  // inlines: Snap, operator=, operator[]
// calls: floorf
void __fastcall CTriangulatedPolygon::SnapVertices(CTriangulatedPolygon *const this, float a2, float flSnap)
{
  int m_Size; // eax
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rbx
  float *v8; // rbx
  float v9; // [rsp+4h] [rbp-2Ch]
  float v10; // [rsp+8h] [rbp-28h]

  m_Size = this->m_Vertices.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 4 * (3LL * (m_Size - 1) + 3);
    do
    {
      v7 = v5;
      v5 += 12;
      v8 = (&this->m_Vertices.m_Memory.m_pMemory->x + v7);
      v9 = floorf((v8[2] / a2) + 0.5);
      v10 = floorf((v8[1] / a2) + 0.5);
      *v8 = floorf((*v8 / a2) + 0.5) * a2;
      v8[1] = v10 * a2;
      v8[2] = v9 * a2;
    }
    while ( v5 != v6 );
  }
}


// CalcTextureBasisFromUVs  (line 968, @0x00000000031d9180, libserver.so)  // inlines: CrossProduct, Init, LengthSqr, VMatrix, Vector2DSubtract, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: MatrixInverseGeneral
// callers: CTriangulatedPolygon::ComputeTextureCoordinateForPoint
bool __fastcall CalcTextureBasisFromUVs(
        const Vector *vVertPos,
        const Vector2D *vTexCoord,
        Vector *const vOutU,
        Vector *const vOutV)
{
  float y; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float x; // xmm14_4
  float v11; // xmm2_4
  float v12; // xmm10_4
  float v13; // xmm13_4
  float z; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm12_4
  float v17; // xmm6_4
  float v18; // eax
  bool result; // al
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm11_4
  float v23; // xmm12_4
  float v24; // xmm9_4
  float v25; // xmm10_4
  float v26; // xmm6_4
  float v27; // xmm4_4
  VMatrix mTextureToWorld; // [rsp+0h] [rbp-90h] BYREF
  VMatrix mWorldToTexture; // [rsp+40h] [rbp-50h] BYREF

  vOutU->x = 1.0;
  vOutU->y = 0.0;
  vOutU->z = 0.0;
  vOutV->x = 0.0;
  vOutV->y = 1.0;
  vOutV->z = 0.0;
  y = vTexCoord->y;
  v7 = vTexCoord[1].x - vTexCoord->x;
  v8 = vTexCoord[1].y - y;
  v9 = vTexCoord[2].x - vTexCoord->x;
  x = vVertPos->x;
  v11 = vTexCoord[2].y - y;
  v12 = vVertPos[1].y;
  v13 = vVertPos->y;
  z = vVertPos[1].z;
  v15 = vVertPos->z;
  v16 = vVertPos[2].x;
  v17 = vVertPos[2].y;
  v18 = vVertPos[2].z;
  if ( ((v7 * v7) + (v8 * v8)) < 0.000001 && ((v9 * v9) + (v11 * v11)) < 0.000001 )
    return 0;
  v20 = (v7 * v11) - (v8 * v9);
  v21 = 1000000.0;
  if ( fabs(v20) >= 0.000001 )
    v21 = 1.0 / v20;
  v22 = vVertPos[1].x - x;
  mTextureToWorld.m[1][3] = 0.0;
  v23 = v16 - x;
  mTextureToWorld.m[0][3] = 0.0;
  v24 = z - v15;
  *&mTextureToWorld.m[3][0] = 0;
  v25 = v12 - v13;
  *&mTextureToWorld.m[3][2] = 0x3F80000000000000LL;
  v26 = v17 - v13;
  v27 = -v9;
  mTextureToWorld.m[0][0] = ((v22 * v11) - (v23 * v8)) * v21;
  mTextureToWorld.m[2][0] = ((v11 * v24) - (v8 * (v18 - v15))) * v21;
  mTextureToWorld.m[1][0] = ((v25 * v11) - (v26 * v8)) * v21;
  mTextureToWorld.m[1][1] = ((v26 * v7) + (v25 * v27)) * v21;
  mTextureToWorld.m[0][1] = ((v23 * v7) + (v22 * v27)) * v21;
  mTextureToWorld.m[2][1] = ((v7 * (v18 - v15)) + (v27 * v24)) * v21;
  mTextureToWorld.m[0][2] = (mTextureToWorld.m[1][0] * mTextureToWorld.m[2][1])
                          - (mTextureToWorld.m[2][0] * mTextureToWorld.m[1][1]);
  mTextureToWorld.m[1][2] = (mTextureToWorld.m[2][0] * mTextureToWorld.m[0][1])
                          - (mTextureToWorld.m[0][0] * mTextureToWorld.m[2][1]);
  *&mTextureToWorld.m[2][2] = COERCE_UNSIGNED_INT(
                                (mTextureToWorld.m[1][1] * mTextureToWorld.m[0][0])
                              - (mTextureToWorld.m[0][1] * mTextureToWorld.m[1][0]));
  result = MatrixInverseGeneral(&mTextureToWorld, &mWorldToTexture);
  if ( !result )
    return 0;
  *&vOutU->x = *&mWorldToTexture.m[0][0];
  vOutU->z = mWorldToTexture.m[0][2];
  *&vOutV->x = *&mWorldToTexture.m[1][0];
  vOutV->z = mWorldToTexture.m[1][2];
  return result;
}


// GetBestThreeTextureBasisVerticies  (line 1036, @0x00000000031d9460, libserver.so)  // inlines: Dot, DotProduct, LengthSqr, Normalized, VectorSubtract, operator-, operator=
// calls: VectorNormalize
// callers: CTriangulatedPolygon::ComputeTextureCoordinateForPoint
void __fastcall GetBestThreeTextureBasisVerticies(
        const Vector *pPositions,
        const Vector2D *pTexCoords,
        int nNumPositions,
        Vector *pOutPositions,
        Vector2D *pOutTexCoords)
{
  int v6; // r15d
  const Vector *v7; // rbx
  const Vector *v9; // rax
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  const Vector *v13; // rax
  vec_t v14; // xmm5_4
  vec_t v15; // xmm4_4
  const Vector *v16; // rax
  __int64 v17; // rcx
  const Vector *v18; // rax
  __int64 v19; // rdx
  const Vector *v20; // rax
  vec_t v21; // xmm0_4
  const Vector2D *v22; // rax
  vec_t v23; // xmm0_4
  const Vector2D *v24; // rax
  vec_t v25; // xmm0_4
  const Vector2D *v26; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t v30; // xmm1_4
  vec_t v31; // xmm0_4
  int nBestVert0; // [rsp+18h] [rbp-78h]
  int nNumEdgePairs; // [rsp+1Ch] [rbp-74h]
  float flBestHeuristic; // [rsp+20h] [rbp-70h]
  float v38; // [rsp+24h] [rbp-6Ch]
  float v39; // [rsp+28h] [rbp-68h]
  float v40; // [rsp+2Ch] [rbp-64h]
  Vector v43[5]; // [rsp+50h] [rbp-40h] BYREF
  Vector v44; // 0:^30.12
  Vector v45; // 0:^3C.12

  if ( nNumPositions <= 2 )
  {
    y = vec3_origin.y;
    z = vec3_origin.z;
    x = vec3_origin.x;
    pOutPositions->y = y;
    pOutPositions->z = z;
    pOutPositions[1].y = y;
    pOutPositions[1].z = z;
    pOutPositions[2].y = y;
    pOutPositions[2].z = z;
    v30 = vec2_origin.x;
    v31 = vec2_origin.y;
    pOutPositions->x = x;
    pOutPositions[1].x = x;
    pOutPositions[2].x = x;
    pOutTexCoords->x = v30;
    pOutTexCoords->y = v31;
    pOutTexCoords[1].x = v30;
    pOutTexCoords[1].y = v31;
    pOutTexCoords[2].x = v30;
    pOutTexCoords[2].y = v31;
  }
  else
  {
    nNumEdgePairs = nNumPositions - 1;
    v6 = 0;
    v7 = pPositions;
    flBestHeuristic = -1.0;
    nBestVert0 = 0;
    while ( 1 )
    {
      v9 = &pPositions[(v6 + 1) % nNumPositions];
      v10 = v9->x;
      v11 = v9->y;
      v12 = v9->z;
      v45.x = v7->x - v9->x;
      v45.y = v7->y - v11;
      v45.z = v7->z - v12;
      v13 = &pPositions[(v6 + 2) % nNumPositions];
      v14 = v11 - v13->y;
      v15 = v12 - v13->z;
      v43[0].x = v10 - v13->x;
      v38 = v43[0].x;
      v43[0].y = v14;
      v39 = v14;
      v43[0].z = v15;
      v40 = v15;
      VectorNormalize(v43);
      v44 = v43[0];
      v43[0] = v45;
      VectorNormalize(v43);
      if ( (((((v45.x * v45.x) + (v45.y * v45.y)) + (v45.z * v45.z)) * (((v38 * v38) + (v39 * v39)) + (v40 * v40)))
          * (1.0 - (((v43[0].x * v44.x) + (v43[0].y * v44.y)) + (v43[0].z * v44.z)))) > flBestHeuristic )
      {
        flBestHeuristic = ((((v45.x * v45.x) + (v45.y * v45.y)) + (v45.z * v45.z))
                         * (((v38 * v38) + (v39 * v39)) + (v40 * v40)))
                        * (1.0 - (((v43[0].x * v44.x) + (v43[0].y * v44.y)) + (v43[0].z * v44.z)));
        nBestVert0 = v6;
      }
      ++v7;
      if ( nNumEdgePairs == v6 + 1 )
        break;
      ++v6;
    }
    v16 = &pPositions[nBestVert0];
    pOutPositions->x = v16->x;
    pOutPositions->y = v16->y;
    pOutPositions->z = v16->z;
    v17 = (nBestVert0 + 1) % nNumPositions;
    v18 = &pPositions[v17];
    pOutPositions[1].x = v18->x;
    pOutPositions[1].y = v18->y;
    pOutPositions[1].z = v18->z;
    v19 = (nBestVert0 + 2) % nNumPositions;
    v20 = &pPositions[v19];
    pOutPositions[2].x = v20->x;
    pOutPositions[2].y = v20->y;
    v21 = v20->z;
    v22 = &pTexCoords[nBestVert0];
    pOutPositions[2].z = v21;
    pOutTexCoords->x = v22->x;
    v23 = v22->y;
    v24 = &pTexCoords[v17];
    pOutTexCoords->y = v23;
    pOutTexCoords[1].x = v24->x;
    v25 = v24->y;
    v26 = &pTexCoords[v19];
    pOutTexCoords[1].y = v25;
    pOutTexCoords[2].x = v26->x;
    pOutTexCoords[2].y = v26->y;
  }
}


