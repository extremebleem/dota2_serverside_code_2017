
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_utils.cpp  (line 0, @0x0000000001a6de10, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_nav_utils_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// NavUtilsCalcSegmentOverlap  (line 23, @0x00000000032072b0, libserver.so)  // inlines: Clamp<float>, Dot, DotProduct2D, FastSqrt, Init, Length, Vector2DLength, Vector2DSubtract, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator*=, operator+, operator-, operator-=, operator=
// callers: CNavPoly::ComputeOrientedPortal
void __fastcall NavUtilsCalcSegmentOverlap(
        const Vector *const vSrcSegVertA,
        const Vector *const vSrcSegVertB,
        const Vector *const vTargetSegVertA,
        const Vector *const vTargetSegVertB,
        Vector *pOverlapVertAOut,
        Vector *pOverlapVertBOut,
        float *pParamA,
        float *pParamB)
{
  float x; // xmm8_4
  float y; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm9_4
  float v14; // xmm12_4
  float v15; // xmm11_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float z; // xmm6_4
  float v24; // xmm4_4
  vec_t v25; // xmm4_4
  vec_t v26; // xmm0_4

  x = vSrcSegVertA->x;
  y = vSrcSegVertA->y;
  v10 = vSrcSegVertB->x - vSrcSegVertA->x;
  v11 = vSrcSegVertB->y - y;
  v12 = fsqrt((v10 * v10) + (v11 * v11));
  if ( v12 <= 0.00000011920929 )
  {
    v14 = 1.0;
    v15 = 0.0;
    v13 = 0.0;
  }
  else
  {
    v13 = 1.0 / v12;
    v14 = (1.0 / v12) * v10;
    v15 = (1.0 / v12) * v11;
  }
  v16 = ((vTargetSegVertA->x - x) * v14) + ((vTargetSegVertA->y - y) * v15);
  v17 = ((vTargetSegVertB->x - x) * v14) + ((vTargetSegVertB->y - y) * v15);
  v18 = 0.0;
  if ( v16 >= 0.0 )
    v18 = fminf(v12, v16);
  if ( v17 < 0.0 )
    v19 = 0.0;
  else
    v19 = fminf(v12, v17);
  v20 = v18 * v13;
  v21 = v19 * v13;
  if ( v20 <= v21 )
  {
    v22 = v21;
    v21 = v20;
    v20 = v22;
  }
  z = vSrcSegVertA->z;
  v24 = vSrcSegVertB->z - z;
  pOverlapVertAOut->x = (v21 * v10) + x;
  pOverlapVertAOut->y = (v21 * v11) + y;
  pOverlapVertAOut->z = (v21 * v24) + z;
  v25 = (v24 * v20) + vSrcSegVertA->z;
  v26 = (v10 * v20) + vSrcSegVertA->x;
  pOverlapVertBOut->y = (v11 * v20) + vSrcSegVertA->y;
  pOverlapVertBOut->z = v25;
  pOverlapVertBOut->x = v26;
  if ( pParamA != 0 )
    *pParamA = v21;
  if ( pParamB != 0 )
    *pParamB = v20;
}


// ConvertPhysicsTraceToGameTrace  (line 115, @0x0000000003207450, libserver.so)  // inlines: GetContentsMask, SetEndPoint, SetEntityId, SetFraction, SetNormal, SetPhysicsBody, SetShapeAttributes, SetSurfaceProperties, VectorAdd, VectorMultiply, operator*, operator+, operator=
// callers: CNavToolsPhysicsInterface::Nav_TraceHull, CNavToolsPhysicsInterface::Nav_TraceLine
bool __fastcall ConvertPhysicsTraceToGameTrace(
        CGameTrace *pTrace,
        const Vector *const vStart,
        const Vector *const vDelta,
        const PhysicsTrace_t *const trace)
{
  vec_t v5; // xmm1_4
  vec_t v6; // xmm2_4
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  uint64 *v10; // rax
  float m_flFraction; // xmm0_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  uint64 v14; // rax

  if ( trace->m_flFraction < 1.0 )
  {
    v10 = (*(*trace->m_HitShape + 128LL))(trace->m_HitShape);
    pTrace->m_hBody = trace->m_HitObject;
    pTrace->m_pSurfaceProperties = trace->m_pSurfaceProperties;
    pTrace->m_ShapeAttributes.m_nInteractsAs = *v10;
    pTrace->m_ShapeAttributes.m_nInteractsWith = v10[1];
    pTrace->m_ShapeAttributes.m_nInteractsExclude = v10[2];
    *&pTrace->m_ShapeAttributes.m_nEntityId = v10[3];
    pTrace->m_ShapeAttributes.m_nEntityId = 0x8000;
    pTrace->plane.dist = trace->m_flHitOffset;
    m_flFraction = trace->m_flFraction;
    v12 = (vDelta->z * m_flFraction) + vStart->z;
    v13 = (m_flFraction * vDelta->x) + vStart->x;
    pTrace->endpos.y = (trace->m_flFraction * vDelta->y) + vStart->y;
    pTrace->endpos.z = v12;
    pTrace->endpos.x = v13;
    pTrace->plane.normal = trace->m_vHitNormal;
    pTrace->fraction = trace->m_flFraction;
    pTrace->startsolid = trace->m_bStartInSolid;
    v14 = *v10;
    pTrace->m_pEnt = 0;
    pTrace->contents = v14 | 1;
    pTrace->startpos = *vStart;
    return 1;
  }
  else
  {
    pTrace->fraction = 1.0;
    pTrace->startpos = *vStart;
    v5 = vStart->y + vDelta->y;
    v6 = vStart->x + vDelta->x;
    pTrace->endpos.z = vStart->z + vDelta->z;
    x = vec3_origin.x;
    pTrace->startsolid = 0;
    pTrace->endpos.y = v5;
    pTrace->plane.normal.x = x;
    y = vec3_origin.y;
    pTrace->endpos.x = v6;
    pTrace->plane.normal.y = y;
    pTrace->plane.normal.z = vec3_origin.z;
    return 0;
  }
}


// CreateNavTraceQueryAttr  (line 159, @0x0000000003207600, libserver.so)  // inlines: GetTraceMaskSolidBrushOnly, RnQueryAttr_t, RnQueryShapeAttr_t, SetInteractsWith
RnQueryAttr_t *__cdecl CreateNavTraceQueryAttr(RnQueryAttr_t *__return_ptr retstr)
{
  char v2; // dl

  retstr->m_nHierarchyId = 0;
  v2 = *(&retstr->RnQueryShapeAttr_t + 31);
  retstr->m_nInteractsExclude = 0;
  retstr->m_nInteractsAs = 0;
  retstr->m_nEntityIdToIgnore = -1;
  retstr->m_nCollisionGroup = 0;
  retstr->m_nObjectSetMask = RnQueryObjectSet::RNQUERY_OBJECTS_ALL;
  *(&retstr->RnQueryShapeAttr_t + 31) = v2 & 0xF0 | 9;
  retstr->m_nInteractsWith = CNavConfig::ms_TraceMaskSolidBrushOnly;
  return retstr;
}


// GetClosestHit  (line 167, @0x0000000003207650, libserver.so)  // inlines: operator[]
// callers: NavToolsTraceHull, NavToolsTraceLine
PhysicsTrace_t *__fastcall GetClosestHit(PhysicsTrace_t *__return_ptr retstr, const CTraceVector *const traceVector)
{
  PhysicsTrace_t *result; // rax
  int m_Size; // edi
  PhysicsTrace_t *m_pMemory; // r8
  int v5; // edx
  int v6; // esi
  PhysicsTrace_t *v7; // rcx
  PhysicsTrace_t *v8; // rsi

  result = retstr;
  m_Size = traceVector->m_Size;
  if ( traceVector->m_Size <= 0 )
  {
    result->m_HitObject = 0;
    result->m_HitShape = 0;
    result->m_vHitPoint.x = 0.0;
    result->m_vHitPoint.y = 0.0;
    result->m_vHitPoint.z = 0.0;
    result->m_vHitNormal.x = 0.0;
    result->m_vHitNormal.y = 0.0;
    result->m_vHitNormal.z = 0.0;
    result->m_flHitOffset = 0.0;
    result->m_flFraction = 1.0;
    result->m_bStartInSolid = 0;
    result->m_pSurfaceProperties = 0;
  }
  else
  {
    m_pMemory = traceVector->m_Memory.m_pMemory;
    v5 = 0;
    v6 = traceVector->m_Size;
    v7 = m_pMemory;
    do
    {
      if ( v7->m_flFraction < 3.4028235e38 )
        v6 = v5;
      ++v5;
      ++v7;
    }
    while ( v5 != m_Size );
    v8 = &m_pMemory[v6];
    result->m_HitObject = v8->m_HitObject;
    result->m_HitShape = v8->m_HitShape;
    *&result->m_vHitPoint.x = *&v8->m_vHitPoint.x;
    *&result->m_vHitPoint.z = *&v8->m_vHitPoint.z;
    *&result->m_vHitNormal.y = *&v8->m_vHitNormal.y;
    *&result->m_flHitOffset = *&v8->m_flHitOffset;
    *&result->m_bStartInSolid = *&v8->m_bStartInSolid;
    result->m_pSurfaceProperties = v8->m_pSurfaceProperties;
  }
  return result;
}


// NavToolsTraceHull  (line 191, @0x0000000003207730, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CreateNavTraceQueryAttr, GetTraceMaskSolidBrushOnly, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetInteractsWith, VectorMultiply, VectorSubtract, operator*, operator-, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: GetClosestHit, CUtlMemory<PhysicsTrace_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavToolsPhysicsInterface::Nav_TraceHull
PhysicsTrace_t *__fastcall NavToolsTraceHull(
        PhysicsTrace_t *__return_ptr retstr,
        const IVPhysics2World *pPhysWorld,
        const Vector *const vStart,
        const Vector *const vDelta,
        const Vector *const vHullMin,
        const Vector *const vHullMax)
{
  float y; // xmm2_4
  float z; // xmm1_4
  float x; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  void (__fastcall *v13)(const IVPhysics2World *, CTraceVector *, const Vector *const, const Vector *const, float *, RnQueryAttr_t *); // rax
  uint32 v14; // eax
  float v16[4]; // [rsp+0h] [rbp-2070h] BYREF
  RnQueryAttr_t attr; // [rsp+10h] [rbp-2060h] BYREF
  CTraceVector out; // [rsp+40h] [rbp-2030h] BYREF
  unsigned __int64 v19; // [rsp+2058h] [rbp-18h]

  attr.m_nHierarchyId = 0;
  v19 = __readfsqword(0x28u);
  attr.m_nCollisionGroup = 0;
  y = vHullMax->y;
  attr.m_nInteractsExclude = 0;
  z = vHullMax->z;
  attr.m_nInteractsAs = 0;
  x = vHullMax->x;
  attr.m_nEntityIdToIgnore = -1;
  attr.m_nObjectSetMask = RnQueryObjectSet::RNQUERY_OBJECTS_ALL;
  v10 = y - vHullMin->y;
  out.m_Size = 0;
  v11 = z - vHullMin->z;
  out.m_Memory.m_nAllocationCount = 128;
  v12 = x - vHullMin->x;
  out.m_Memory.m_nGrowSize = 0x80000000;
  attr.m_nInteractsWith = CNavConfig::ms_TraceMaskSolidBrushOnly;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  v13 = *(*pPhysWorld + 1016LL);
  v16[1] = v10 * 0.5;
  v16[2] = v11 * 0.5;
  *(&attr.RnQueryShapeAttr_t + 31) = *(&attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  v16[0] = v12 * 0.5;
  v13(pPhysWorld, &out, vStart, vDelta, v16, &attr);
  GetClosestHit(retstr, &out);
  out.m_Size = 0;
  v14 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v14 == 0 )
      CUtlMemory<PhysicsTrace_t,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v14 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return retstr;
}


// NavToolsTraceLine  (line 201, @0x0000000003207980, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CreateNavTraceQueryAttr, GetTraceMaskSolidBrushOnly, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetInteractsWith, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: GetClosestHit, CUtlMemory<PhysicsTrace_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavToolsPhysicsInterface::Nav_TraceLine
PhysicsTrace_t *__fastcall NavToolsTraceLine(
        PhysicsTrace_t *__return_ptr retstr,
        const IVPhysics2World *pPhysWorld,
        const Vector *const vStart,
        const Vector *const vDelta)
{
  __int64 v5; // rax
  uint32 v6; // eax
  RnQueryAttr_t attr; // [rsp+0h] [rbp-2060h] BYREF
  CTraceVector out; // [rsp+30h] [rbp-2030h] BYREF
  unsigned __int64 v10; // [rsp+2048h] [rbp-18h]

  attr.m_nHierarchyId = 0;
  v10 = __readfsqword(0x28u);
  attr.m_nInteractsExclude = 0;
  attr.m_nInteractsAs = 0;
  attr.m_nEntityIdToIgnore = -1;
  attr.m_nCollisionGroup = 0;
  attr.m_nObjectSetMask = RnQueryObjectSet::RNQUERY_OBJECTS_ALL;
  out.m_Size = 0;
  *(&attr.RnQueryShapeAttr_t + 31) = *(&attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  attr.m_nInteractsWith = CNavConfig::ms_TraceMaskSolidBrushOnly;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  v5 = *pPhysWorld;
  out.m_Memory.m_nAllocationCount = 128;
  out.m_Memory.m_nGrowSize = 0x80000000;
  (*(v5 + 1000))(pPhysWorld, &out, vStart, vDelta, &attr, 0.1);
  GetClosestHit(retstr, &out);
  out.m_Size = 0;
  v6 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v6 == 0 )
      CUtlMemory<PhysicsTrace_t,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v6 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return retstr;
}


// CNavToolsPhysicsInterface::Nav_TraceLine  (line 210, @0x0000000003207b00, libserver.so)  // inlines: VectorSubtract, operator-
// calls: NavToolsTraceLine, ConvertPhysicsTraceToGameTrace
void __fastcall CNavToolsPhysicsInterface::Nav_TraceLine(
        CNavToolsPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        uint64 nMask,
        const CBaseEntity *pIgnore,
        int nCollisionGroup,
        trace_t *pTraceOut)
{
  float y; // xmm1_4
  float z; // xmm0_4
  float x; // xmm2_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  vec_t v14; // xmm2_4
  const IVPhysics2World *m_pPhysicsWorld; // rsi
  Vector vDelta; // [rsp+0h] [rbp-70h] BYREF
  PhysicsTrace_t physTrace; // [rsp+10h] [rbp-60h] BYREF

  y = vEnd->y;
  z = vEnd->z;
  x = vEnd->x;
  v12 = y - vStart->y;
  v13 = z - vStart->z;
  v14 = x - vStart->x;
  m_pPhysicsWorld = this->m_pPhysicsWorld;
  vDelta.y = v12;
  vDelta.z = v13;
  vDelta.x = v14;
  NavToolsTraceLine(&physTrace, m_pPhysicsWorld, vStart, &vDelta);
  ConvertPhysicsTraceToGameTrace(pTraceOut, vStart, &vDelta, &physTrace);
}


// CNavToolsPhysicsInterface::Nav_TraceLine  (line 219, @0x00000000032071f0, libserver.so)
void __fastcall CNavToolsPhysicsInterface::Nav_TraceLine(
        CNavToolsPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        uint64 nMask,
        CTraceFilter *pFilter,
        trace_t *pTraceOut)
{
  (*this->_vptr_INavPhysicsInterface)(this, vStart, vEnd, nMask, 0, 0xFFFFFFFFLL, pTraceOut);
}


// CNavToolsPhysicsInterface::Nav_TraceHull  (line 226, @0x0000000003207900, libserver.so)  // inlines: VectorSubtract, operator-
// calls: NavToolsTraceHull, ConvertPhysicsTraceToGameTrace
void __fastcall CNavToolsPhysicsInterface::Nav_TraceHull(
        CNavToolsPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const vHullMin,
        const Vector *const vHullMax,
        uint64 nMask,
        const CBaseEntity *pIgnore,
        int nCollisionGroup,
        trace_t *pTraceOut)
{
  float y; // xmm1_4
  float z; // xmm0_4
  float x; // xmm2_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  vec_t v16; // xmm2_4
  const IVPhysics2World *m_pPhysicsWorld; // rsi
  Vector vDelta; // [rsp+0h] [rbp-70h] BYREF
  PhysicsTrace_t physTrace; // [rsp+10h] [rbp-60h] BYREF

  y = vEnd->y;
  z = vEnd->z;
  x = vEnd->x;
  v14 = y - vStart->y;
  v15 = z - vStart->z;
  v16 = x - vStart->x;
  m_pPhysicsWorld = this->m_pPhysicsWorld;
  vDelta.y = v14;
  vDelta.z = v15;
  vDelta.x = v16;
  NavToolsTraceHull(&physTrace, m_pPhysicsWorld, vStart, &vDelta, vHullMin, vHullMax);
  ConvertPhysicsTraceToGameTrace(pTraceOut, vStart, &vDelta, &physTrace);
}


// CNavToolsPhysicsInterface::Nav_TraceHull  (line 236, @0x0000000003207210, libserver.so)
void __fastcall CNavToolsPhysicsInterface::Nav_TraceHull(
        CNavToolsPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const vHullMin,
        const Vector *const vHullMax,
        uint64 nMask,
        CTraceFilter *pFilter,
        trace_t *pTraceOut)
{
  (*(this->_vptr_INavPhysicsInterface + 2))(this, vStart, vEnd, vHullMin, vHullMax, nMask, 0, -1, pTraceOut);
}


// CNavToolsPhysicsInterface::Nav_PointContents  (line 243, @0x0000000003207240, libserver.so)
uint64 __fastcall CNavToolsPhysicsInterface::Nav_PointContents(
        CNavToolsPhysicsInterface *const this,
        const Vector *const vTestPos,
        uint64 nContentsMask)
{
  return 0;
}


// CNavToolsPhysicsInterface::Nav_CheckAreaOverlappingEntity  (line 249, @0x0000000003207250, libserver.so)
bool __fastcall CNavToolsPhysicsInterface::Nav_CheckAreaOverlappingEntity(
        CNavToolsPhysicsInterface *const this,
        const CNavArea *const rArea,
        const CBaseEntity *const rEtity,
        bool bExtrudeHullHeight)
{
  return 0;
}


// CNavToolsPhysicsInterface::Nav_GetEntityWorldSpaceAABB  (line 256, @0x0000000003207260, libserver.so)
void __fastcall CNavToolsPhysicsInterface::Nav_GetEntityWorldSpaceAABB(
        CNavToolsPhysicsInterface *const this,
        const CBaseEntity *const rEtity,
        Vector *pMinsOut,
        Vector *pMaxsOut)
{
  ;
}


