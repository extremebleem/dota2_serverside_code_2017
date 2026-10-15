// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamephysicsquery.cpp:393
class CQueryObjectSet {
private:

	CQueryObjectSet();
	void QuerySphere(const Vector &, float, CGameQueryAttributes *, COverlapList &);
	void QueryBox(const Vector &, const Vector &, CGameQueryAttributes *, COverlapList &);
	locatehandle_t AddEntity(CBaseEntity *);
	void RemoveEntity(locatehandle_t, CBaseEntity *);
	void UpdateEntity(locatehandle_t, CBaseEntity *);
	uint32 ToKey(CBaseEntity *);
	CBaseEntity * FromKey(uint32);
	int FindEntry(uint32);
	int FindOrAddEntry(uint32);
	void AddResult(COverlapList &, int, CGameQueryAttributes *);
	~CQueryObjectSet();

	// sizeof = 72
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ConvertOverlapMultiple  (line 33, @0x00000000020d9fd0, libserver.so)  // inlines: AddMultipleToTail, COverlapHit, Construct<COverlapHit>, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, RnCollisionAttr_t, SetEntityId, SetHitboxHit, SetPhysicsBody, SetShape, SetShapeAttributes, SetSurfaceProperties
// calls: CUtlMemory<COverlapHit, int>::Grow
// callers: CGamePhysicsQueryInterface::EntitiesInBox, CGamePhysicsQueryInterface::EntitiesInSphere
int __fastcall ConvertOverlapMultiple(COverlapList *const hitBuffer, const CQueryResult *const result)
{
  int m_Size; // ebx
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rbx
  IPhysicsShape *v8; // rdi
  IPhysicsBody *v9; // r14
  IPhysicsShape *v10; // rdi
  const CPhysSurfaceProperties *v11; // r15
  IPhysicsShape *v12; // rdi
  uint64 *v13; // rax
  __int64 v14; // rdx
  COverlapHit *m_pMemory; // rcx
  int v16; // r15d
  int m_nAllocationCount; // eax
  int v18; // ecx
  __int64 i; // rdx
  char *v20; // rax
  uint32 nEntityID; // [rsp+Ch] [rbp-34h]

  m_Size = result->m_Size;
  v5 = hitBuffer->m_list.m_Size;
  v6 = result->m_Size;
  if ( result->m_Size > hitBuffer->m_list.m_Size )
  {
    v16 = m_Size - v5;
    if ( m_Size != v5 )
    {
      m_nAllocationCount = hitBuffer->m_list.m_Memory.m_nAllocationCount;
      if ( m_Size > m_nAllocationCount )
        CUtlMemory<COverlapHit,int>::Grow(&hitBuffer->m_list.m_Memory, m_Size - m_nAllocationCount);
      v18 = 0;
      hitBuffer->m_list.m_Size = m_Size;
      for ( i = v5 << 6; v16 > v18; i += 64 )
      {
        v20 = hitBuffer->m_list.m_Memory.m_pMemory + i;
        if ( v20 != 0 )
        {
          *v20 = 0;
          *(v20 + 1) = 0;
          *(v20 + 2) = 0;
          v20[30] = 0;
          v20[31] = 7;
          *(v20 + 6) = 0;
          *(v20 + 14) = 0;
          v20[56] = 0;
        }
        ++v18;
      }
      v6 = result->m_Size;
    }
  }
  if ( v6 > 0 )
  {
    v7 = 0;
    do
    {
      v8 = result->m_Memory.m_pMemory[v7];
      v9 = (*(*v8 + 16LL))(v8);
      v10 = result->m_Memory.m_pMemory[v7];
      v11 = *((*(*v10 + 88LL))(v10) + 16);
      nEntityID = (*(*v9 + 1328LL))(v9);
      v12 = result->m_Memory.m_pMemory[v7];
      v13 = (*(*v12 + 128LL))(v12);
      v14 = v7 << 6;
      *(&hitBuffer->m_list.m_Memory.m_pMemory->m_hBody + v14) = v9;
      *(&hitBuffer->m_list.m_Memory.m_pMemory->m_hShape + v14) = 0;
      m_pMemory = hitBuffer->m_list.m_Memory.m_pMemory;
      *(&m_pMemory->m_ShapeAttributes.m_nInteractsAs + v14) = *v13;
      *(&m_pMemory->m_ShapeAttributes.m_nInteractsWith + v14) = v13[1];
      *(&m_pMemory->m_ShapeAttributes.m_nInteractsExclude + v14) = v13[2];
      *(&m_pMemory->m_ShapeAttributes.m_nEntityId + v14) = v13[3];
      *(&hitBuffer->m_list.m_Memory.m_pMemory->m_ShapeAttributes.m_nEntityId + v14) = nEntityID;
      *(&hitBuffer->m_list.m_Memory.m_pMemory->m_pSurfaceProperties + v14) = v11;
      *(&hitBuffer->m_list.m_Memory.m_pMemory->m_bHitboxHit + v14) = 0;
      ++v7;
      v6 = result->m_Size;
    }
    while ( result->m_Size > v7 );
  }
  return v6;
}


// ConvertSweepToTrace  (line 61, @0x00000000020acde0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetOrigin, IndexToIdentity, LookupEntity, SetEntityId, SetNormal, SetPhysicsBody, SetPhysicsShape, SetShapeAttributes, SetSurfaceProperties, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CGamePhysicsQueryInterface::ContactPlane
// callers: CGamePhysicsQueryInterface::SweepCollideable, UTIL_TraceCapsule
// globals: g_pPhysicsQuery, CEntityHandle::gm_pEntityList
void __fastcall ConvertSweepToTrace(
        trace_t *pTraceOut,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        const CSweepResult *const result)
{
  vec_t v6; // xmm1_4
  vec_t z; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  vec_t v11; // xmm0_4
  IPhysicsBody *m_hBody; // r15
  IPhysicsShape *m_hShape; // r13
  uint32 v14; // r14d
  __int64 v15; // rax
  const CTransform *v16; // rsi
  uint64 *v17; // r12
  const CTransform *v18; // rdx
  uint64 v19; // rax
  CBaseEntity *m_pInstance; // rdx
  CConcreteEntityList *v21; // rsi
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  float x; // [rsp+1Ch] [rbp-74h]
  vec_t v27; // [rsp+20h] [rbp-70h]
  float y; // [rsp+24h] [rbp-6Ch]
  const CTransform *xform2a; // [rsp+28h] [rbp-68h]
  const CTransform *xform1a; // [rsp+30h] [rbp-60h]
  vec_t v31; // [rsp+38h] [rbp-58h]
  float flAlpha; // [rsp+3Ch] [rbp-54h]
  vec_t flAlphaa; // [rsp+3Ch] [rbp-54h]
  RnPlane_t v34; // 0:kr00_16.16

  if ( result->m_flAlpha < 1.0 )
  {
    m_hBody = result->m_hBody;
    m_hShape = result->m_hShape;
    xform2a = xform2;
    xform1a = xform1;
    flAlpha = result->m_flAlpha;
    v14 = (*(*result->m_hBody + 1328LL))(result->m_hBody);
    v15 = (*(*m_hShape + 128LL))(m_hShape);
    v16 = xform1a;
    v17 = v15;
    v18 = xform2a;
    *&xform2a = flAlpha;
    x = xform1a->m_vPosition.x;
    y = xform1a->m_vPosition.y;
    *&xform1a = xform1a->m_vPosition.z;
    v27 = (flAlpha * v18->m_vPosition.x) + ((1.0 - flAlpha) * x);
    v31 = (v18->m_vPosition.y * flAlpha) + ((1.0 - flAlpha) * y);
    flAlphaa = (flAlpha * v18->m_vPosition.z) + ((1.0 - flAlpha) * *&xform1a);
    v34 = CGamePhysicsQueryInterface::ContactPlane(g_pPhysicsQuery, v16, v18, capsule, result);
    pTraceOut->m_hBody = m_hBody;
    pTraceOut->m_hShape = m_hShape;
    pTraceOut->m_pSurfaceProperties = *((*(*m_hShape + 88LL))(m_hShape) + 16);
    pTraceOut->m_ShapeAttributes.m_nInteractsAs = *v17;
    pTraceOut->m_ShapeAttributes.m_nInteractsWith = v17[1];
    pTraceOut->m_ShapeAttributes.m_nInteractsExclude = v17[2];
    v19 = v17[3];
    pTraceOut->plane.normal.x = v34.m_vNormal.x;
    pTraceOut->startpos.x = x;
    pTraceOut->startpos.y = y;
    pTraceOut->plane.normal.y = v34.m_vNormal.y;
    *&pTraceOut->m_ShapeAttributes.m_nEntityId = v19;
    pTraceOut->plane.normal.z = v34.m_vNormal.z;
    pTraceOut->m_ShapeAttributes.m_nEntityId = v14;
    pTraceOut->plane.dist = v34.m_flOffset;
    LODWORD(pTraceOut->startpos.z) = xform1a;
    pTraceOut->endpos.x = v27;
    pTraceOut->endpos.y = v31;
    pTraceOut->endpos.z = flAlphaa;
    m_pInstance = 0;
    LODWORD(pTraceOut->fraction) = xform2a;
    pTraceOut->startsolid = *&xform2a == 0.0;
    v21 = CEntityHandle::gm_pEntityList;
    pTraceOut->contents = *v17;
    if ( v14 + 2 > 1 )
    {
      v22 = v21->m_pIdentityChunks[(v14 >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = &v22[v14 & 0x1FF];
        if ( v23 != 0 && v14 == v23->m_EHandle.m_Index )
          m_pInstance = v23->m_pInstance;
      }
    }
    pTraceOut->m_pEnt = m_pInstance;
  }
  else
  {
    pTraceOut->fraction = 1.0;
    v6 = xform1->m_vPosition.y;
    z = xform1->m_vPosition.z;
    pTraceOut->startpos.x = xform1->m_vPosition.x;
    pTraceOut->startpos.y = v6;
    pTraceOut->startpos.z = z;
    v8 = xform2->m_vPosition.x;
    v9 = xform2->m_vPosition.y;
    pTraceOut->endpos.z = xform2->m_vPosition.z;
    v10 = vec3_origin.x;
    pTraceOut->endpos.x = v8;
    pTraceOut->endpos.y = v9;
    pTraceOut->plane.normal.x = v10;
    v11 = vec3_origin.y;
    pTraceOut->startsolid = 0;
    pTraceOut->plane.normal.y = v11;
    pTraceOut->plane.normal.z = vec3_origin.z;
  }
}


// ConvertSweepToTrace  (line 105, @0x00000000020ac2d0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetOrigin, IndexToIdentity, LookupEntity, SetEntityId, SetNormal, SetPhysicsBody, SetPhysicsShape, SetShapeAttributes, SetSurfaceProperties, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CGamePhysicsQueryInterface::ContactPlane
// globals: g_pPhysicsQuery, CEntityHandle::gm_pEntityList
void __fastcall ConvertSweepToTrace(
        trace_t *pTraceOut,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        const CSweepResult *const result)
{
  vec_t v6; // xmm1_4
  vec_t z; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  vec_t v11; // xmm0_4
  IPhysicsBody *m_hBody; // r15
  IPhysicsShape *m_hShape; // r13
  uint32 v14; // r14d
  __int64 v15; // rax
  const CTransform *v16; // rsi
  uint64 *v17; // r12
  const CTransform *v18; // rdx
  uint64 v19; // rax
  CBaseEntity *m_pInstance; // rdx
  CConcreteEntityList *v21; // rsi
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  float x; // [rsp+1Ch] [rbp-74h]
  vec_t v27; // [rsp+20h] [rbp-70h]
  float y; // [rsp+24h] [rbp-6Ch]
  const CTransform *xform2a; // [rsp+28h] [rbp-68h]
  const CTransform *xform1a; // [rsp+30h] [rbp-60h]
  vec_t v31; // [rsp+38h] [rbp-58h]
  float flAlpha; // [rsp+3Ch] [rbp-54h]
  vec_t flAlphaa; // [rsp+3Ch] [rbp-54h]
  RnPlane_t v34; // 0:kr00_16.16

  if ( result->m_flAlpha < 1.0 )
  {
    m_hBody = result->m_hBody;
    m_hShape = result->m_hShape;
    xform2a = xform2;
    xform1a = xform1;
    flAlpha = result->m_flAlpha;
    v14 = (*(*result->m_hBody + 1328LL))(result->m_hBody);
    v15 = (*(*m_hShape + 128LL))(m_hShape);
    v16 = xform1a;
    v17 = v15;
    v18 = xform2a;
    *&xform2a = flAlpha;
    x = xform1a->m_vPosition.x;
    y = xform1a->m_vPosition.y;
    *&xform1a = xform1a->m_vPosition.z;
    v27 = (flAlpha * v18->m_vPosition.x) + ((1.0 - flAlpha) * x);
    v31 = (v18->m_vPosition.y * flAlpha) + ((1.0 - flAlpha) * y);
    flAlphaa = (flAlpha * v18->m_vPosition.z) + ((1.0 - flAlpha) * *&xform1a);
    v34 = CGamePhysicsQueryInterface::ContactPlane(g_pPhysicsQuery, v16, v18, sphere, result);
    pTraceOut->m_hBody = m_hBody;
    pTraceOut->m_hShape = m_hShape;
    pTraceOut->m_pSurfaceProperties = *((*(*m_hShape + 88LL))(m_hShape) + 16);
    pTraceOut->m_ShapeAttributes.m_nInteractsAs = *v17;
    pTraceOut->m_ShapeAttributes.m_nInteractsWith = v17[1];
    pTraceOut->m_ShapeAttributes.m_nInteractsExclude = v17[2];
    v19 = v17[3];
    pTraceOut->plane.normal.x = v34.m_vNormal.x;
    pTraceOut->startpos.x = x;
    pTraceOut->startpos.y = y;
    pTraceOut->plane.normal.y = v34.m_vNormal.y;
    *&pTraceOut->m_ShapeAttributes.m_nEntityId = v19;
    pTraceOut->plane.normal.z = v34.m_vNormal.z;
    pTraceOut->m_ShapeAttributes.m_nEntityId = v14;
    pTraceOut->plane.dist = v34.m_flOffset;
    LODWORD(pTraceOut->startpos.z) = xform1a;
    pTraceOut->endpos.x = v27;
    pTraceOut->endpos.y = v31;
    pTraceOut->endpos.z = flAlphaa;
    m_pInstance = 0;
    LODWORD(pTraceOut->fraction) = xform2a;
    pTraceOut->startsolid = *&xform2a == 0.0;
    v21 = CEntityHandle::gm_pEntityList;
    pTraceOut->contents = *v17;
    if ( v14 + 2 > 1 )
    {
      v22 = v21->m_pIdentityChunks[(v14 >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = &v22[v14 & 0x1FF];
        if ( v23 != 0 && v14 == v23->m_EHandle.m_Index )
          m_pInstance = v23->m_pInstance;
      }
    }
    pTraceOut->m_pEnt = m_pInstance;
  }
  else
  {
    pTraceOut->fraction = 1.0;
    v6 = xform1->m_vPosition.y;
    z = xform1->m_vPosition.z;
    pTraceOut->startpos.x = xform1->m_vPosition.x;
    pTraceOut->startpos.y = v6;
    pTraceOut->startpos.z = z;
    v8 = xform2->m_vPosition.x;
    v9 = xform2->m_vPosition.y;
    pTraceOut->endpos.z = xform2->m_vPosition.z;
    v10 = vec3_origin.x;
    pTraceOut->endpos.x = v8;
    pTraceOut->endpos.y = v9;
    pTraceOut->plane.normal.x = v10;
    v11 = vec3_origin.y;
    pTraceOut->startsolid = 0;
    pTraceOut->plane.normal.y = v11;
    pTraceOut->plane.normal.z = vec3_origin.z;
  }
}


// ConvertCastToTrace  (line 148, @0x00000000020a8910, libserver.so)  // inlines: CEntityHandle, Dot, DotProduct, EndPos, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, SetEntityId, SetNormal, SetPhysicsBody, SetPhysicsShape, SetShapeAttributes, SetSurfaceProperties, StartInSolid, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// callers: CGamePhysicsQueryInterface::SweepCollideable
// globals: CEntityHandle::gm_pEntityList
void __fastcall ConvertCastToTrace(
        CGameTrace *pTraceOut,
        const Vector *const vStart,
        const Vector *const vEnd,
        const CLinearSweepResult *const result)
{
  vec_t v5; // xmm1_4
  vec_t v6; // xmm0_4
  IPhysicsBody *m_hBody; // r14
  IPhysicsShape *m_hShape; // r12
  uint32 v9; // r13d
  uint64 *v10; // rax
  CConcreteEntityList *v11; // rdi
  float m_flAlpha; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  vec_t v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  CBaseEntity *m_pInstance; // rdx
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax

  if ( result->m_flAlpha < 1.0 )
  {
    m_hBody = result->m_hBody;
    m_hShape = result->m_hShape;
    v9 = (*(*result->m_hBody + 1328LL))(result->m_hBody);
    v10 = (*(*m_hShape + 128LL))(m_hShape);
    pTraceOut->m_hBody = m_hBody;
    pTraceOut->m_hShape = m_hShape;
    pTraceOut->m_ShapeAttributes.m_nInteractsAs = *v10;
    pTraceOut->m_ShapeAttributes.m_nInteractsWith = v10[1];
    pTraceOut->m_ShapeAttributes.m_nInteractsExclude = v10[2];
    *&pTraceOut->m_ShapeAttributes.m_nEntityId = v10[3];
    pTraceOut->contents = *v10;
    pTraceOut->m_pSurfaceProperties = *((*(*m_hShape + 88LL))(m_hShape) + 16);
    pTraceOut->startpos.x = vStart->x;
    pTraceOut->startpos.y = vStart->y;
    v11 = CEntityHandle::gm_pEntityList;
    pTraceOut->startpos.z = vStart->z;
    m_flAlpha = result->m_flAlpha;
    v13 = vStart->z * (1.0 - m_flAlpha);
    v14 = (1.0 - m_flAlpha) * vStart->x;
    v15 = (m_flAlpha * vEnd->y) + (vStart->y * (1.0 - m_flAlpha));
    v16 = vEnd->z * m_flAlpha;
    v17 = m_flAlpha * vEnd->x;
    pTraceOut->endpos.y = v15;
    pTraceOut->endpos.z = v16 + v13;
    pTraceOut->endpos.x = v17 + v14;
    pTraceOut->fraction = result->m_flAlpha;
    m_pInstance = 0;
    pTraceOut->startsolid = result->m_flAlpha == 0.0;
    x = result->m_vHitNormal.x;
    y = result->m_vHitNormal.y;
    z = result->m_vHitNormal.z;
    pTraceOut->m_ShapeAttributes.m_nEntityId = v9;
    if ( v9 + 2 > 1 )
    {
      v22 = v11->m_pIdentityChunks[(v9 >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = &v22[v9 & 0x1FF];
        if ( v23 != 0 && v9 == v23->m_EHandle.m_Index )
          m_pInstance = v23->m_pInstance;
      }
    }
    pTraceOut->m_pEnt = m_pInstance;
    pTraceOut->plane.normal.x = x;
    pTraceOut->plane.normal.y = y;
    pTraceOut->plane.normal.z = z;
    pTraceOut->plane.dist = ((x * result->m_vHitPoint.x) + (y * result->m_vHitPoint.y)) + (z * result->m_vHitPoint.z);
  }
  else
  {
    pTraceOut->startpos = *vStart;
    pTraceOut->endpos.x = vEnd->x;
    pTraceOut->endpos.y = vEnd->y;
    v5 = vEnd->z;
    pTraceOut->fraction = 1.0;
    v6 = vec3_origin.x;
    pTraceOut->startsolid = 0;
    pTraceOut->endpos.z = v5;
    pTraceOut->plane.normal.x = v6;
    pTraceOut->plane.normal.y = vec3_origin.y;
    pTraceOut->plane.normal.z = vec3_origin.z;
  }
}


// ConvertSweep  (line 190, @0x00000000020a8b60, libserver.so)  // inlines: CEntityHandle, CTransform, GetEntityIdentity, GetEntryIndex, GetInstance, GetNormal, IndexToIdentity, LookupEntity, VectorAligned, VectorSubtract, operator CBaseEntity*, operator-, operator=
// calls: TransformLerp, VectorNormalize
// callers: CGamePhysicsQueryInterface::SweepShapeAgainstEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall ConvertSweep(
        CGameSweep *pGameSweepOut,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const rSphere,
        CSweepResult *const rSweepResultIn)
{
  vec_t v10; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  HPhysicsShape m_hShape; // rdi
  float m_flAlpha; // xmm0_4
  __int64 v16; // r14
  float y; // xmm0_4
  float v18; // xmm1_4
  float z; // xmm2_4
  vec_t v20; // xmm1_4
  float v21; // xmm0_4
  float x; // xmm3_4
  vec_t v23; // xmm0_4
  float v24; // xmm2_4
  IVPhysics2 *v25; // rdi
  void (__fastcall *v26)(RnDistanceQueryResult_t *, IVPhysics2 *, Vector *, HPhysicsShape, CTransform *, __int64); // [rsp+10h] [rbp-A0h]
  HPhysicsShape v27; // [rsp+18h] [rbp-98h]
  RnDistanceQueryResult_t query; // [rsp+20h] [rbp-90h] BYREF
  CTransform xFormSphere; // [rsp+40h] [rbp-70h] BYREF
  Vector vec; // [rsp+60h] [rbp-50h] BYREF

  LODWORD(v10) = (*(*rSweepResultIn->m_hBody + 1328LL))(rSweepResultIn->m_hBody);
  m_pInstance = 0;
  vec.x = v10;
  if ( (LODWORD(v10) + 2) > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vec.x) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[LOWORD(vec.x) & 0x1FF];
      if ( v13 != 0 && LODWORD(v10) == v13->m_EHandle.m_Index )
        m_pInstance = v13->m_pInstance;
    }
  }
  m_hShape = pGameSweepOut->m_hShape;
  pGameSweepOut->m_pEntity = m_pInstance;
  pGameSweepOut->m_pSurfaceProperties = *((*(*m_hShape + 88LL))(m_hShape) + 16);
  pGameSweepOut->m_hBody = rSweepResultIn->m_hBody;
  pGameSweepOut->m_hShape = rSweepResultIn->m_hShape;
  pGameSweepOut->m_flHitTime = rSweepResultIn->m_flAlpha;
  if ( rSweepResultIn->m_flAlpha > 0.0 && (*(*rSweepResultIn->m_hShape + 40LL))(rSweepResultIn->m_hShape) != 3 )
  {
    m_flAlpha = rSweepResultIn->m_flAlpha;
    xFormSphere.m_vPosition.w = 0.0;
    TransformLerp(xform1, xform2, m_flAlpha, &xFormSphere);
    v16 = (*(g_pVPhysics2->_vptr_IAppSystem + 20))(g_pVPhysics2, rSphere, 0.0);
    v27 = rSweepResultIn->m_hShape;
    v26 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*rSweepResultIn->m_hBody + 440LL))(&vec);
    v26(&query, g_pVPhysics2, &vec, v27, &xFormSphere, v16);
    y = query.m_vPoint1.y;
    v18 = query.m_vPoint2.y;
    z = query.m_vPoint1.z;
    pGameSweepOut->m_vHitPoint.y = query.m_vPoint1.y;
    v20 = v18 - y;
    v21 = query.m_vPoint2.z;
    x = query.m_vPoint1.x;
    pGameSweepOut->m_vHitPoint.z = z;
    v23 = v21 - z;
    v24 = query.m_vPoint2.x;
    pGameSweepOut->m_vHitPoint.x = x;
    vec.y = v20;
    vec.z = v23;
    vec.x = v24 - x;
    VectorNormalize(&vec);
    v25 = g_pVPhysics2;
    pGameSweepOut->m_vHitNormal = vec;
    (*(v25->_vptr_IAppSystem + 24))(v25, v16);
  }
}


// ConvertSweep  (line 225, @0x00000000020a8d80, libserver.so)  // inlines: CEntityHandle, CTransform, GetEntityIdentity, GetEntryIndex, GetInstance, GetNormal, IndexToIdentity, LookupEntity, VectorAligned, VectorSubtract, operator CBaseEntity*, operator-, operator=
// calls: TransformLerp, VectorNormalize
// callers: CGamePhysicsQueryInterface::SweepShapeAgainstEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall ConvertSweep(
        CGameSweep *pGameSweepOut,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const rCapsule,
        CSweepResult *const rSweepResultIn)
{
  vec_t v10; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  float m_flAlpha; // xmm0_4
  __int64 v15; // r14
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t v19; // xmm0_4
  IVPhysics2 *v20; // rdi
  void (__fastcall *v21)(RnDistanceQueryResult_t *, IVPhysics2 *, Vector *, HPhysicsShape, CTransform *, __int64); // [rsp+10h] [rbp-A0h]
  HPhysicsShape m_hShape; // [rsp+18h] [rbp-98h]
  RnDistanceQueryResult_t query; // [rsp+20h] [rbp-90h] BYREF
  CTransform xFormCapsule; // [rsp+40h] [rbp-70h] BYREF
  Vector vec; // [rsp+60h] [rbp-50h] BYREF

  LODWORD(v10) = (*(*rSweepResultIn->m_hBody + 1328LL))(rSweepResultIn->m_hBody);
  m_pInstance = 0;
  vec.x = v10;
  if ( (LODWORD(v10) + 2) > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vec.x) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[LOWORD(vec.x) & 0x1FF];
      if ( v13 != 0 && LODWORD(v10) == v13->m_EHandle.m_Index )
        m_pInstance = v13->m_pInstance;
    }
  }
  pGameSweepOut->m_pEntity = m_pInstance;
  pGameSweepOut->m_pSurfaceProperties = *((*(*rSweepResultIn->m_hShape + 88LL))(rSweepResultIn->m_hShape) + 16);
  pGameSweepOut->m_hBody = rSweepResultIn->m_hBody;
  pGameSweepOut->m_hShape = rSweepResultIn->m_hShape;
  pGameSweepOut->m_flHitTime = rSweepResultIn->m_flAlpha;
  if ( rSweepResultIn->m_flAlpha > 0.0 && (*(*rSweepResultIn->m_hShape + 40LL))(rSweepResultIn->m_hShape) != 3 )
  {
    m_flAlpha = rSweepResultIn->m_flAlpha;
    xFormCapsule.m_vPosition.w = 0.0;
    TransformLerp(xform1, xform2, m_flAlpha, &xFormCapsule);
    v15 = (*(g_pVPhysics2->_vptr_IAppSystem + 21))(g_pVPhysics2, rCapsule, &rCapsule->m_vCenter[1], 0.0);
    m_hShape = rSweepResultIn->m_hShape;
    v21 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*rSweepResultIn->m_hBody + 440LL))(&vec);
    v21(&query, g_pVPhysics2, &vec, m_hShape, &xFormCapsule, v15);
    x = query.m_vPoint2.x;
    y = query.m_vPoint2.y;
    z = query.m_vPoint2.z;
    pGameSweepOut->m_vHitPoint.x = query.m_vPoint2.x;
    pGameSweepOut->m_vHitPoint.y = y;
    v19 = x - query.m_vPoint1.x;
    pGameSweepOut->m_vHitPoint.z = z;
    vec.x = v19;
    vec.y = y - query.m_vPoint1.y;
    vec.z = z - query.m_vPoint1.z;
    VectorNormalize(&vec);
    v20 = g_pVPhysics2;
    pGameSweepOut->m_vHitNormal = vec;
    (*(v20->_vptr_IAppSystem + 24))(v20, v15);
  }
}


// ConvertSweep  (line 259, @0x00000000020a8f90, libserver.so)  // inlines: CEntityHandle, CTransform, GetEntityIdentity, GetEntryIndex, GetInstance, GetNormal, IndexToIdentity, LookupEntity, VectorAligned, VectorSubtract, operator CBaseEntity*, operator-, operator=
// calls: TransformLerp, VectorNormalize
// callers: CGamePhysicsQueryInterface::SweepShapeAgainstEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall ConvertSweep(
        CGameSweep *pGameSweepOut,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const rHull,
        CSweepResult *const rSweepResultIn)
{
  vec_t v10; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  float m_flAlpha; // xmm0_4
  __int64 v15; // r14
  float y; // xmm0_4
  float v17; // xmm1_4
  float z; // xmm2_4
  vec_t v19; // xmm1_4
  float v20; // xmm0_4
  float x; // xmm3_4
  vec_t v22; // xmm0_4
  float v23; // xmm2_4
  IVPhysics2 *v24; // rdi
  void (__fastcall *v25)(RnDistanceQueryResult_t *, IVPhysics2 *, Vector *, HPhysicsShape, CTransform *, __int64); // [rsp+10h] [rbp-A0h]
  HPhysicsShape m_hShape; // [rsp+18h] [rbp-98h]
  RnDistanceQueryResult_t query; // [rsp+20h] [rbp-90h] BYREF
  CTransform xFormHull; // [rsp+40h] [rbp-70h] BYREF
  Vector vec; // [rsp+60h] [rbp-50h] BYREF

  LODWORD(v10) = (*(*rSweepResultIn->m_hBody + 1328LL))(rSweepResultIn->m_hBody);
  m_pInstance = 0;
  vec.x = v10;
  if ( (LODWORD(v10) + 2) > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vec.x) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[LOWORD(vec.x) & 0x1FF];
      if ( v13 != 0 && LODWORD(v10) == v13->m_EHandle.m_Index )
        m_pInstance = v13->m_pInstance;
    }
  }
  pGameSweepOut->m_pEntity = m_pInstance;
  pGameSweepOut->m_pSurfaceProperties = *((*(*rSweepResultIn->m_hShape + 88LL))(rSweepResultIn->m_hShape) + 16);
  pGameSweepOut->m_hBody = rSweepResultIn->m_hBody;
  pGameSweepOut->m_hShape = rSweepResultIn->m_hShape;
  pGameSweepOut->m_flHitTime = rSweepResultIn->m_flAlpha;
  if ( rSweepResultIn->m_flAlpha > 0.0 && (*(*rSweepResultIn->m_hShape + 40LL))(rSweepResultIn->m_hShape) != 3 )
  {
    m_flAlpha = rSweepResultIn->m_flAlpha;
    xFormHull.m_vPosition.w = 0.0;
    TransformLerp(xform1, xform2, m_flAlpha, &xFormHull);
    v15 = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, rHull);
    m_hShape = rSweepResultIn->m_hShape;
    v25 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*rSweepResultIn->m_hBody + 440LL))(&vec);
    v25(&query, g_pVPhysics2, &vec, m_hShape, &xFormHull, v15);
    y = query.m_vPoint1.y;
    v17 = query.m_vPoint2.y;
    z = query.m_vPoint1.z;
    pGameSweepOut->m_vHitPoint.y = query.m_vPoint1.y;
    v19 = v17 - y;
    v20 = query.m_vPoint2.z;
    x = query.m_vPoint1.x;
    pGameSweepOut->m_vHitPoint.z = z;
    v22 = v20 - z;
    v23 = query.m_vPoint2.x;
    pGameSweepOut->m_vHitPoint.x = x;
    vec.y = v19;
    vec.z = v22;
    vec.x = v23 - x;
    VectorNormalize(&vec);
    v24 = g_pVPhysics2;
    pGameSweepOut->m_vHitNormal = vec;
    (*(v24->_vptr_IAppSystem + 24))(v24, v15);
  }
}


// PassServerEntityFilter  (line 315, @0x00000000020a91a0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: FilterSimpleShouldHitEntity, CTraceFilterSkipTwoEntities::ShouldHitEntity, CTraceFilterDoor::ShouldHitEntity, CTracePassFilter::ShouldHitEntity
bool __fastcall PassServerEntityFilter(const CBaseEntity *pTouch, const CBaseEntity *pPass)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // r9d
  int v5; // eax
  CEntitySystem *v6; // r8
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // ecx
  unsigned __int16 v10; // dx
  int v11; // esi
  int v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  __int64 v16; // [rsp-8h] [rbp-8h]

  if ( pPass == 0 )
    return 1;
  if ( pTouch == pPass )
    return 0;
  v2 = pTouch->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( pTouch->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = pTouch->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  *(&v16 - 8) = v3 | *(&v16 - 2) & 0x8000;
  v5 = (v2 << 15) | *(&v16 - 2) & 0x7FFF;
  *(&v16 - 4) = v5;
  v6 = g_pEntitySystem;
  if ( (v5 + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v4 & 0x1FF];
      if ( v8 != 0 && v5 == v8->m_EHandle.m_Index && pPass == v8->m_pInstance )
        return 0;
    }
  }
  v9 = pPass->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( pPass->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v10 = 0x7FFF;
    v11 = 0x7FFF;
  }
  else
  {
    v10 = pPass->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v11 = v10;
  }
  *(&v16 - 8) = v10 | *(&v16 - 2) & 0x8000;
  v12 = (v9 << 15) | *(&v16 - 2) & 0x7FFF;
  *(&v16 - 4) = v12;
  return (v12 + 2) <= 1
      || (v13 = v6->m_EntityList.m_pIdentityChunks[v11 >> 9]) == 0
      || (v14 = &v13[v11 & 0x1FF]) == 0
      || v12 != v14->m_EHandle.m_Index
      || pTouch != v14->m_pInstance;
}


// StandardFilterRules  (line 337, @0x00000000020a9320, libserver.so)  // inlines: CWeakHandle, Init
// calls: CBaseEntity::GetModel
// callers: FilterSimpleShouldHitEntity, CTraceFilterDoor::ShouldHitEntity, CTracePassFilter::ShouldHitEntity
bool __fastcall StandardFilterRules(const CBaseEntity *pCollide, uint64 nContentsMask)
{
  char v3; // bh
  bool result; // al
  __int64 (__fastcall *v5)(IGameModelInfo *, _QWORD *); // rax
  char v6; // r15
  unsigned __int8 (__fastcall *v7)(IGameModelInfo *, _QWORD *); // rax
  HModel hModel; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v9[8]; // [rsp+10h] [rbp-40h] BYREF

  v3 = BYTE1(nContentsMask);
  if ( (pCollide->m_fFlags.m_Value & 0x1000000) != 0 || (result = 0, (nContentsMask & 0x80000) != 0) )
  {
    if ( (nContentsMask & 0x1000) != 0
      || (CBaseEntity::GetModel(&hModel, pCollide),
          v5 = *(modelinfo->_vptr_IAppSystem + 20),
          v9[0] = hModel.m_pBinding,
          v6 = v5(modelinfo, v9),
          v7 = *(modelinfo->_vptr_IAppSystem + 21),
          v9[0] = hModel.m_pBinding,
          v7(modelinfo, v9) == 1)
      || (result = 0, v6 == 0) )
    {
      result = 1;
      if ( (v3 & 0x40) == 0 )
        return HIBYTE(pCollide->m_fFlags.m_Value) & 1;
    }
  }
  return result;
}


// EntityFromEntityHandle  (line 374, @0x00000000020a93e0, libserver.so)
const CBaseEntity *__fastcall EntityFromEntityHandle(const IHandleEntity *pConstHandleEntity)
{
  return pConstHandleEntity;
}


// EntityFromEntityHandle  (line 383, @0x00000000020a93f0, libserver.so)
// callers: CNavEntityInterface::FindLadderTeam, CNavDrawLadder::DrawLadder, CNavEditor::DrawEditMode
CBaseEntity *__fastcall EntityFromEntityHandle(IHandleEntity *pHandleEntity)
{
  return pHandleEntity;
}


// CQueryObjectSet::~CQueryObjectSet  (line 393, @0x00000000020fdbe0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<Vector, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CQueryObjectSet::~CQueryObjectSet(CQueryObjectSet *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_nFreeList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nFreeList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_nFreeList.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_nFreeList.m_Memory);
    if ( (this->m_nFreeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_vPositionList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vPositionList.m_Size = 0;
  if ( !v2
    || (CUtlMemory<Vector,int>::Purge(&this->m_vPositionList.m_Memory),
        (this->m_vPositionList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_nEntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_nEntityList.m_Size = 0;
    if ( !v2 )
      return;
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&this->m_vPositionList.m_Memory);
    v2 = (this->m_nEntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_nEntityList.m_Size = 0;
    if ( !v2 )
      return;
  }
  CUtlMemory<unsigned int,int>::Purge(&this->m_nEntityList.m_Memory);
  if ( (this->m_nEntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned int,int>::Purge(&this->m_nEntityList.m_Memory);
}


// CTraceFilterSimple::CTraceFilterSimple  (line 521, @0x00000000020a9800, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, HierarchyIDFromBaseEntity, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, SetObjectSetMask
// calls: EntityIDFromBaseEntity
// callers: CPathFollower::FindBlocker, CPathFollower::Avoid
void __fastcall CTraceFilterSimple::CTraceFilterSimple(
        CTraceFilterSimple *const this,
        RnQueryObjectSet_0 traceType,
        const CBaseEntity *passedict,
        int collisionGroup,
        ShouldHitFunc_t pExtraShouldHitFunc)
{
  uint8 v6; // r13
  char v9; // al
  CCollisionProperty *m_pCollision; // rax

  v6 = collisionGroup;
  this->_vptr_CTraceFilter = off_3FE6970;
  this->m_attr.m_nHierarchyId = 0;
  v9 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsWith = 0;
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nCollisionGroup = 0;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v9 & 0xF0 | 9;
  this->m_attr.m_nObjectSetMask = traceType;
  if ( passedict != 0 )
  {
    this->m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(passedict);
    m_pCollision = passedict->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    this->m_attr.m_nHierarchyId = m_pCollision;
  }
  this->m_pPassEnt = passedict;
  this->m_attr.m_nCollisionGroup = v6;
  this->m_pExtraShouldHitCheckFunction = pExtraShouldHitFunc;
  this->_vptr_CTraceFilter = off_3FF7810;
}


// CTraceFilterSimple::CTraceFilterSimple  (line 531, @0x00000000020a98a0, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, HierarchyIDFromBaseEntity, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity
// calls: EntityIDFromBaseEntity
// callers: CBaseEntity::TraceBleed, Script_TraceHull, Script_TraceLine, ent_grab, NavMeshFactory, CBaseAnimatingController::CalculateIKLocks, MaterialFootstepSound, CBreakableProp::HandleFirstCollisionInteractions, CDecal::GetDecalEntityAndPosition, CBaseCombatCharacter::GetGroundSurface, CBaseEntity::FVisible, CBaseCombatCharacter::GetDeathActivity (135 total)
void __fastcall CTraceFilterSimple::CTraceFilterSimple(
        CTraceFilterSimple *const this,
        const CBaseEntity *passentity,
        int collisionGroup,
        ShouldHitFunc_t pExtraShouldHitCheckFn)
{
  uint8 v5; // r13
  char v8; // al
  CCollisionProperty *m_pCollision; // rax

  v5 = collisionGroup;
  this->_vptr_CTraceFilter = off_3FE6970;
  this->m_attr.m_nHierarchyId = 0;
  v8 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsWith = 0;
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nCollisionGroup = 0;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v8 & 0xF0 | 9;
  this->m_attr.m_nObjectSetMask = 7;
  if ( passentity != 0 )
  {
    this->m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(passentity);
    m_pCollision = passentity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    this->m_attr.m_nHierarchyId = m_pCollision;
  }
  this->m_pPassEnt = passentity;
  this->m_attr.m_nCollisionGroup = v5;
  this->m_pExtraShouldHitCheckFunction = pExtraShouldHitCheckFn;
  this->_vptr_CTraceFilter = off_3FF7810;
}


// FilterSimpleShouldHitEntity  (line 540, @0x00000000020a9400, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: StandardFilterRules, PassServerEntityFilter, CGameRules::ShouldCollide
// callers: CTraceFilterSimple::ShouldHitEntity
bool __fastcall FilterSimpleShouldHitEntity(
        const CBaseEntity *pHandleEntity,
        const CBaseEntity *pPassEnt,
        uint64 contentsMask,
        IntersectionLayerIndex nFilterCollisionGroup)
{
  bool v7; // bl
  CCollisionProperty *m_pCollision; // rax
  int v9; // edx

  v7 = StandardFilterRules(pHandleEntity, contentsMask);
  if ( !v7 || pPassEnt != 0 && !PassServerEntityFilter(pHandleEntity, pPassEnt) )
    return 0;
  if ( pHandleEntity != 0 )
  {
    m_pCollision = pHandleEntity->m_pCollision;
    v9 = m_pCollision != 0 ? m_pCollision->m_CollisionGroup.m_Value : 4;
    if ( !CGameRules::ShouldCollide(g_pGameRules, nFilterCollisionGroup, v9) )
      return 0;
  }
  return v7;
}


// CTraceFilterSimple::ShouldHitEntity  (line 564, @0x00000000020a9480, libserver.so)  // inlines: GetCollisionGroup
// calls: FilterSimpleShouldHitEntity
// callers: CTraceFilterGroundEntities::ShouldHitEntity, CTraceFilterWalkableEntities::ShouldHitEntity, CTraceFilterSkipNPCsAndPlayers::ShouldHitEntity, CTraceFilterNoNPCsOrPlayer::ShouldHitEntity, CTraceFilterSkipTwoEntities::ShouldHitEntity, CTraceFilterLOS::ShouldHitEntity, CTraceFilterSimpleClassnameList::ShouldHitEntity, CTraceFilterSimpleList::ShouldHitEntity, CTraceFilterEntity::ShouldHitEntity, CTraceFilterEntityIgnoreOther::ShouldHitEntity, CTraceFilterValidForDecal::ShouldHitEntity, CTraceFilterNoCombatCharacters::ShouldHitEntity (17 total)
bool __fastcall CTraceFilterSimple::ShouldHitEntity(CTraceFilterSimple *const this, CBaseEntity *pHandleEntity)
{
  bool ShouldHitEntity; // r12
  ShouldHitFunc_t m_pExtraShouldHitCheckFunction; // rax

  ShouldHitEntity = FilterSimpleShouldHitEntity(
                      pHandleEntity,
                      this->m_pPassEnt,
                      this->m_attr.m_nInteractsWith,
                      this->m_attr.m_nCollisionGroup);
  if ( ShouldHitEntity )
  {
    m_pExtraShouldHitCheckFunction = this->m_pExtraShouldHitCheckFunction;
    if ( m_pExtraShouldHitCheckFunction != 0
      && !m_pExtraShouldHitCheckFunction(pHandleEntity, this->m_attr.m_nInteractsWith) )
    {
      return 0;
    }
  }
  return ShouldHitEntity;
}


// CTraceFilterNoNPCsOrPlayer::ShouldHitEntity  (line 583, @0x00000000020a94e0, libserver.so)
// calls: CTraceFilterSimple::ShouldHitEntity
bool __fastcall CTraceFilterNoNPCsOrPlayer::ShouldHitEntity(
        CTraceFilterNoNPCsOrPlayer *const this,
        CBaseEntity *pHandleEntity)
{
  bool result; // al

  if ( !CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity)
    || pHandleEntity == 0
    || (*(pHandleEntity->_vptr_IHandleEntity + 47))(pHandleEntity) == 2 )
  {
    return 0;
  }
  result = 0;
  if ( !pHandleEntity->m_bIsNPC )
    return (*(pHandleEntity->_vptr_IHandleEntity + 140))(pHandleEntity) ^ 1;
  return result;
}


// CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities  (line 609, @0x00000000020a9950, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, CTraceFilterSimple, HierarchyIDFromBaseEntity, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity
// calls: EntityIDFromBaseEntity
// callers: CBaseCombatCharacter::IsLineOfSightClear, UTIL_ItemCanBeTouchedByPlayer, _GLOBAL__sub_I__unity_base_06.cpp, CBasePlayer::AutoaimDeflection
void __fastcall CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities(
        CTraceFilterSkipTwoEntities *const this,
        const CBaseEntity *passentity,
        const CBaseEntity *passentity2,
        int collisionGroup)
{
  uint8 v4; // r14
  char v8; // al
  CCollisionProperty *m_pCollision; // rax

  v4 = collisionGroup;
  this->_vptr_CTraceFilter = off_3FE6970;
  this->m_attr.m_nHierarchyId = 0;
  v8 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsWith = 0;
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nCollisionGroup = 0;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v8 & 0xF0 | 9;
  this->m_attr.m_nObjectSetMask = 7;
  if ( passentity != 0 )
  {
    this->m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(passentity);
    m_pCollision = passentity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    this->m_attr.m_nHierarchyId = m_pCollision;
  }
  this->m_pPassEnt = passentity;
  this->m_attr.m_nCollisionGroup = v4;
  this->m_pPassEnt2 = passentity2;
  this->m_pExtraShouldHitCheckFunction = 0;
  this->_vptr_CTraceFilter = off_3FF7890;
}


// CTraceFilterSkipTwoEntities::ShouldHitEntity  (line 616, @0x00000000020a9540, libserver.so)
// calls: PassServerEntityFilter, CTraceFilterSimple::ShouldHitEntity
// callers: CTraceFilterSkipTwoEntitiesAndTeammates::ShouldHitEntity
bool __fastcall CTraceFilterSkipTwoEntities::ShouldHitEntity(
        CTraceFilterSkipTwoEntities *const this,
        CBaseEntity *pHandleEntity)
{
  return PassServerEntityFilter(pHandleEntity, this->m_pPassEnt2)
      && CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
}


// CTraceFilterSimpleList::CTraceFilterSimpleList  (line 629, @0x00000000020a9ab0, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, CTraceFilterSimple, CUtlMemory, CUtlVector, CUtlVectorBase, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup
// callers: CBaseEntity::FireBullets
void __fastcall CTraceFilterSimpleList::CTraceFilterSimpleList(CTraceFilterSimpleList *const this, int collisionGroup)
{
  char v2; // al

  this->m_attr.m_nHierarchyId = 0;
  v2 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsWith = 0;
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nObjectSetMask = 7;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v2 & 0xF0 | 9;
  this->m_pPassEnt = 0;
  this->m_attr.m_nCollisionGroup = collisionGroup;
  this->m_pExtraShouldHitCheckFunction = 0;
  this->_vptr_CTraceFilter = off_3FF78D0;
  this->m_PassEntities.m_Size = 0;
  this->m_PassEntities.m_Memory.m_pMemory = 0;
  this->m_PassEntities.m_Memory.m_nAllocationCount = 0;
  this->m_PassEntities.m_Memory.m_nGrowSize = 0;
}


// CTraceFilterSimpleList::ShouldHitEntity  (line 638, @0x00000000020a9630, libserver.so)  // inlines: Find
// calls: CTraceFilterSimple::ShouldHitEntity
bool __fastcall CTraceFilterSimpleList::ShouldHitEntity(CTraceFilterSimpleList *const this, CBaseEntity *pHandleEntity)
{
  int m_Size; // ecx
  CBaseEntity **m_pMemory; // rdx
  CBaseEntity **v4; // rdx
  int v5; // eax

  m_Size = this->m_PassEntities.m_Size;
  if ( m_Size <= 0 )
    return CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
  m_pMemory = this->m_PassEntities.m_Memory.m_pMemory;
  if ( *m_pMemory != pHandleEntity )
  {
    v4 = m_pMemory + 1;
    v5 = 0;
    while ( ++v5 != m_Size )
    {
      if ( *v4++ == pHandleEntity )
      {
        if ( v5 == -1 )
          return CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
        return 0;
      }
    }
    return CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
  }
  return 0;
}


// CTraceFilterSimpleList::AddEntityToIgnore  (line 650, @0x00000000020da540, libserver.so)  // inlines: AddToTail, CopyConstruct<CBaseEntity*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CBaseEntity*, int>::Grow
// callers: CBaseEntity::FireBullets
void __fastcall CTraceFilterSimpleList::AddEntityToIgnore(CTraceFilterSimpleList *const this, CBaseEntity *pEntity)
{
  __int64 m_Size; // r12
  int v5; // eax
  CBaseEntity **v6; // rax

  m_Size = this->m_PassEntities.m_Size;
  v5 = this->m_PassEntities.m_Size;
  if ( m_Size == this->m_PassEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CBaseEntity *,int>::Grow(&this->m_PassEntities.m_Memory, 1);
    v5 = this->m_PassEntities.m_Size;
  }
  this->m_PassEntities.m_Size = v5 + 1;
  v6 = &this->m_PassEntities.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pEntity;
}


// CTraceFilterSimpleList::AddEntitiesToIgnore  (line 657, @0x00000000020daa90, libserver.so)  // inlines: AddMultipleToTail, InsertMultipleBefore, memcpy, operator[]
// calls: CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::GrowVector, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::ShiftElementsRight, memcpy
void __fastcall CTraceFilterSimpleList::AddEntitiesToIgnore(
        CTraceFilterSimpleList *const this,
        int nCount,
        CBaseEntity **ppEntities)
{
  __int64 v5; // rbx
  __int64 m_Size; // r13
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *p_m_PassEntities; // r15

  v5 = nCount;
  m_Size = this->m_PassEntities.m_Size;
  if ( nCount != 0 )
  {
    p_m_PassEntities = &this->m_PassEntities;
    CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::GrowVector(&this->m_PassEntities, nCount);
    CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::ShiftElementsRight(p_m_PassEntities, m_Size, v5);
  }
  memcpy(&this->m_PassEntities.m_Memory.m_pMemory[m_Size], ppEntities, 8 * v5);
}


// CTraceFilterLOS::CTraceFilterLOS  (line 667, @0x00000000020a9a00, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, CTraceFilterSimple, CTraceFilterSkipTwoEntities, HierarchyIDFromBaseEntity, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity
// calls: EntityIDFromBaseEntity
// callers: CBaseEntity::FVisible
void __fastcall CTraceFilterLOS::CTraceFilterLOS(
        CTraceFilterLOS *const this,
        CBaseEntity *pHandleEntity,
        int collisionGroup,
        CBaseEntity *pHandleEntity2)
{
  uint8 v5; // r13
  char v8; // al
  CCollisionProperty *m_pCollision; // rax

  v5 = collisionGroup;
  this->_vptr_CTraceFilter = off_3FE6970;
  this->m_attr.m_nHierarchyId = 0;
  v8 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsWith = 0;
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nCollisionGroup = 0;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v8 & 0xF0 | 9;
  this->m_attr.m_nObjectSetMask = 7;
  if ( pHandleEntity != 0 )
  {
    this->m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(pHandleEntity);
    m_pCollision = pHandleEntity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    this->m_attr.m_nHierarchyId = m_pCollision;
  }
  this->m_pPassEnt = pHandleEntity;
  this->m_attr.m_nCollisionGroup = v5;
  this->m_pPassEnt2 = pHandleEntity2;
  this->m_pExtraShouldHitCheckFunction = 0;
  this->_vptr_CTraceFilter = off_3FF7910;
}


// CTraceFilterLOS::ShouldHitEntity  (line 679, @0x00000000020a9580, libserver.so)
// calls: CBaseEntity::BlocksLOS, CTraceFilterSimple::ShouldHitEntity
bool __fastcall CTraceFilterLOS::ShouldHitEntity(CTraceFilterLOS *const this, CBaseEntity *pHandleEntity)
{
  return CBaseEntity::BlocksLOS(pHandleEntity) && CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
}


// CTraceFilterSkipClassname::CTraceFilterSkipClassname  (line 693, @0x00000000020a9760, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, HierarchyIDFromBaseEntity, Init, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, SetInteractsWith
// calls: EntityIDFromBaseEntity
void __fastcall CTraceFilterSkipClassname::CTraceFilterSkipClassname(
        CTraceFilterSkipClassname *const this,
        const CBaseEntity *passentity,
        uint64 nInteractsWith,
        const char *pchClassname,
        int nCollisionGroup)
{
  char v8; // al
  CCollisionProperty *m_pCollision; // rax

  this->_vptr_CTraceFilter = off_3FE6970;
  v8 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nHierarchyId = 0;
  this->m_attr.m_nObjectSetMask = 7;
  this->m_attr.m_nCollisionGroup = nCollisionGroup;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v8 & 0xF0 | 9;
  this->m_attr.m_nInteractsWith = nInteractsWith;
  if ( passentity != 0 )
  {
    this->m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(passentity);
    m_pCollision = passentity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    this->m_attr.m_nHierarchyId = m_pCollision;
  }
  this->m_pchClassname = pchClassname;
  this->_vptr_CTraceFilter = off_3FF7950;
}


// CTraceFilterSkipClassname::ShouldHitEntity  (line 702, @0x000000000209cf30, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches
bool __fastcall CTraceFilterSkipClassname::ShouldHitEntity(CTraceFilterSkipClassname *const this, CBaseEntity *pEntity)
{
  return pEntity != 0 && !CEntityIdentity::ClassMatches(pEntity->m_pEntity, this->m_pchClassname);
}


// CTraceFilterSimpleClassnameList::CTraceFilterSimpleClassnameList  (line 713, @0x00000000020a9b30, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, CTraceFilterSimple, CUtlMemory, CUtlVector, CUtlVectorBase, HierarchyIDFromBaseEntity, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity
// calls: EntityIDFromBaseEntity
void __fastcall CTraceFilterSimpleClassnameList::CTraceFilterSimpleClassnameList(
        CTraceFilterSimpleClassnameList *const this,
        const CBaseEntity *passentity,
        int collisionGroup)
{
  uint8 v3; // r13
  char v6; // al
  CCollisionProperty *m_pCollision; // rax

  v3 = collisionGroup;
  this->_vptr_CTraceFilter = off_3FE6970;
  this->m_attr.m_nHierarchyId = 0;
  v6 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsWith = 0;
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nCollisionGroup = 0;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v6 & 0xF0 | 9;
  this->m_attr.m_nObjectSetMask = 7;
  if ( passentity != 0 )
  {
    this->m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(passentity);
    m_pCollision = passentity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    this->m_attr.m_nHierarchyId = m_pCollision;
  }
  this->m_pPassEnt = passentity;
  this->m_attr.m_nCollisionGroup = v3;
  this->m_pExtraShouldHitCheckFunction = 0;
  this->_vptr_CTraceFilter = off_3FF7990;
  this->m_PassClassnames.m_Size = 0;
  this->m_PassClassnames.m_Memory.m_pMemory = 0;
  this->m_PassClassnames.m_Memory.m_nAllocationCount = 0;
  this->m_PassClassnames.m_Memory.m_nGrowSize = 0;
}


// CTraceFilterSimpleClassnameList::ShouldHitEntity  (line 722, @0x00000000020a95b0, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches, CTraceFilterSimple::ShouldHitEntity
bool __fastcall CTraceFilterSimpleClassnameList::ShouldHitEntity(
        CTraceFilterSimpleClassnameList *const this,
        CBaseEntity *pHandleEntity)
{
  __int64 v3; // rbx

  if ( pHandleEntity == 0 )
    return 0;
  v3 = 0;
  if ( this->m_PassClassnames.m_Size > 0 )
  {
    while ( !CEntityIdentity::ClassMatches(pHandleEntity->m_pEntity, this->m_PassClassnames.m_Memory.m_pMemory[v3]) )
    {
      if ( this->m_PassClassnames.m_Size <= ++v3 )
        return CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
    }
    return 0;
  }
  return CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
}


// CTraceFilterSimpleClassnameList::AddClassnameToIgnore  (line 741, @0x00000000020dac40, libserver.so)  // inlines: AddToTail, CopyConstruct<char const*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<char const*, int>::Grow
void __fastcall CTraceFilterSimpleClassnameList::AddClassnameToIgnore(
        CTraceFilterSimpleClassnameList *const this,
        const char *pchClassname)
{
  __int64 m_Size; // r12
  int v5; // eax
  const char **v6; // rax

  m_Size = this->m_PassClassnames.m_Size;
  v5 = this->m_PassClassnames.m_Size;
  if ( m_Size == this->m_PassClassnames.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<char const*,int>::Grow(&this->m_PassClassnames.m_Memory, 1);
    v5 = this->m_PassClassnames.m_Size;
  }
  this->m_PassClassnames.m_Size = v5 + 1;
  v6 = &this->m_PassClassnames.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pchClassname;
}


// CTraceFilterChain::CTraceFilterChain  (line 748, @0x00000000020a9680, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, GetCollisionGroup, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup
void __fastcall CTraceFilterChain::CTraceFilterChain(
        CTraceFilterChain *const this,
        CTraceFilter *pTraceFilter1,
        CTraceFilter *pTraceFilter2)
{
  char v3; // al
  uint8 m_nCollisionGroup; // al

  v3 = *(&this->m_attr.RnQueryShapeAttr_t + 31);
  this->m_attr.m_nInteractsWith = 0;
  this->m_attr.m_nInteractsExclude = 0;
  this->m_attr.m_nInteractsAs = 0;
  this->m_attr.m_nEntityIdToIgnore = -1;
  this->m_attr.m_nHierarchyId = 0;
  *(&this->m_attr.RnQueryShapeAttr_t + 31) = v3 & 0xF0 | 9;
  this->m_attr.m_nCollisionGroup = 0;
  this->m_attr.m_nObjectSetMask = 7;
  this->_vptr_CTraceFilter = off_3FF79D0;
  this->m_pTraceFilter1 = pTraceFilter1;
  this->m_pTraceFilter2 = pTraceFilter2;
  if ( pTraceFilter1 != 0 )
    m_nCollisionGroup = pTraceFilter1->m_attr.m_nCollisionGroup;
  else
    m_nCollisionGroup = pTraceFilter2->m_attr.m_nCollisionGroup;
  this->m_attr.m_nCollisionGroup = m_nCollisionGroup;
}


// CTraceFilterChain::ShouldHitEntity  (line 758, @0x000000000209bfe0, libserver.so)
bool __fastcall CTraceFilterChain::ShouldHitEntity(CTraceFilterChain *const this, CBaseEntity *pHandleEntity)
{
  char v3; // r12
  CTraceFilter *m_pTraceFilter1; // rdi
  CTraceFilter *m_pTraceFilter2; // rdi
  char v7; // al

  v3 = 1;
  m_pTraceFilter1 = this->m_pTraceFilter1;
  if ( m_pTraceFilter1 != 0 )
    v3 = (*(m_pTraceFilter1->_vptr_CTraceFilter + 2))(m_pTraceFilter1);
  m_pTraceFilter2 = this->m_pTraceFilter2;
  v7 = 1;
  if ( m_pTraceFilter2 != 0 )
    v7 = (*(m_pTraceFilter2->_vptr_CTraceFilter + 2))(m_pTraceFilter2, pHandleEntity);
  return v3 & v7;
}


// EntityIDFromBaseEntity  (line 772, @0x00000000020a9700, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
// callers: CLightQueryVisibilityTest::QueryVisibility, CDecalGameSystem::TraceDebugRay, CEntityDebugGameSystem::AddDebugLine, GetLightForTrace, ray_bench, CDecalSaveRestoreBlockHandler::Restore, CTraceFilterSimple::SetPassEntity, CTraceFilterSkipClassname::CTraceFilterSkipClassname, CTraceFilterSimple::CTraceFilterSimple, CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities, CTraceFilterLOS::CTraceFilterLOS, CTraceFilterSimpleClassnameList::CTraceFilterSimpleClassnameList (42 total)
uint32 __fastcall EntityIDFromBaseEntity(const CBaseEntity *pEntity)
{
  uint32 result; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx
  __int64 v5; // [rsp-8h] [rbp-8h]

  result = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *(&v5 - 8) = v4 | *(&v5 - 2) & 0x8000;
      return (v3 << 15) | *(&v5 - 2) & 0x7FFF;
    }
  }
  return result;
}


// HierarchyIDFromBaseEntity  (line 777, @0x00000000020a9c00, libserver.so)
// callers: CLightQueryVisibilityTest::QueryVisibility, CDecalGameSystem::TraceDebugRay, CEntityDebugGameSystem::AddDebugLine, GetLightForTrace, ray_bench, CDecalSaveRestoreBlockHandler::Restore, CTraceFilterSimple::SetPassEntity, CBaseCombatCharacter::FindHealthItem, CBaseCombatCharacter::FindMissTarget, PerformMeleeAttackTest, CBaseEntity::TraceAttackToTriggers, CEnvShake::ApplyShake (30 total)
uint16 __fastcall HierarchyIDFromBaseEntity(const CBaseEntity *pEntity)
{
  CCollisionProperty *m_pCollision; // rax

  if ( pEntity != 0 )
  {
    m_pCollision = pEntity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  else
  {
    LOWORD(m_pCollision) = 0;
  }
  return m_pCollision;
}


// CGameQueryAttributes::SetQueryAttributesFromEntity  (line 789, @0x00000000020a9c30, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, SetEntityToIgnore
void __fastcall CGameQueryAttributes::SetQueryAttributesFromEntity(
        CGameQueryAttributes *const this,
        const CBaseModelEntity *const rEntity)
{
  uint32 v2; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx

  v2 = -1;
  m_pEntity = rEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v2 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
  }
  this->m_nEntityIdToIgnore = v2;
  this->m_nInteractsWith = rEntity->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  this->m_nInteractsAs = rEntity->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  this->m_nInteractsExclude = rEntity->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
}


// CGamePhysicsQueryInterface::SetWorld  (line 802, @0x00000000020a9cb0, libserver.so)
// callers: CPhysicsGameSystem::GameShutdown, CPhysicsGameSystem::CreateLevelWorld
void __fastcall CGamePhysicsQueryInterface::SetWorld(CGamePhysicsQueryInterface *const this, IVPhysics2World *pWorld)
{
  this->m_pWorld = pWorld;
}


// CGamePhysicsQueryInterface::GetWorld  (line 807, @0x00000000020a9cc0, libserver.so)
// callers: CPhysicsGameSystem::GameShutdown
IVPhysics2World *__fastcall CGamePhysicsQueryInterface::GetWorld(CGamePhysicsQueryInterface *const this)
{
  return this->m_pWorld;
}


// CGamePhysicsQueryInterface::TraceRay  (line 813, @0x00000000020ad640, libserver.so)  // inlines: CGameTrace, GetBool, GetInt, PhysicsTrace_t, RnCollisionAttr_t, SetEndPoint, UpdateEntitiesBeforeQuery, Vector, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::ConvertTrace, CGameTrace::Init, CHitboxSystem::TestHitboxes
// callers: CGamePhysicsQueryInterface::TraceRay
bool __fastcall CGamePhysicsQueryInterface::TraceRay(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        CGameQueryAttributes *pTraceFilter,
        CGameTrace *pTraceOut)
{
  bool v8; // zf
  IVPhysics2World *m_pWorld; // rdi
  char v10; // r15
  float fraction; // xmm3_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm0_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  __int64 v18; // r9
  uint8 type; // al
  vec_t y; // xmm0_4
  uint8 signbits; // al
  vec_t x; // xmm0_4
  __int16 v24; // ax
  vec_t z; // xmm0_4
  uint64 contents; // rax
  vec_t v27; // xmm0_4
  float dist; // xmm0_4
  const CPhysSurfaceProperties *m_pSurfaceProperties; // rax
  const CHitBox *m_pHitbox; // rax
  vec_t v31; // xmm0_4
  IPhysicsBody *m_hBody; // rax
  vec_t v33; // xmm0_4
  IPhysicsShape *m_hShape; // rax
  vec_t v35; // xmm0_4
  uint64 m_nInteractsAs; // rax
  CGameTrace hitboxResults; // [rsp+10h] [rbp-E0h] BYREF

  UpdateDirtySpatialPartitionEntities();
  v8 = !ray->m_IsRay;
  LOBYTE(hitboxResults.contents) = 0;
  memset(&hitboxResults, 0, 44);
  hitboxResults.fraction = 1.0;
  *&hitboxResults.startsolid = 0;
  m_pWorld = this->m_pWorld;
  if ( v8 )
    (*(*m_pWorld + 1008LL))(m_pWorld, &hitboxResults, ray, &ray->m_Delta, &ray->m_Extents, pTraceFilter);
  else
    (*(*m_pWorld + 992LL))(m_pWorld, &hitboxResults, ray, &ray->m_Delta, pTraceFilter, ray->m_flRadius);
  v10 = CGamePhysicsQueryInterface::ConvertTrace(this, pTraceOut, &ray->m_Start, &ray->m_Delta, &hitboxResults);
  if ( (pTraceFilter->m_nInteractsWith & 2) == 0
    || (memset(&hitboxResults.m_ShapeAttributes, 0, 31),
        hitboxResults.m_ShapeAttributes.m_nCollisionFunctionMask = 7,
        CGameTrace::Init(&hitboxResults),
        !CHitboxSystem::TestHitboxes(&g_HitboxSystem, ray, pTraceFilter, 0, &hitboxResults)) )
  {
    fraction = pTraceOut->fraction;
    goto LABEL_5;
  }
  if ( v10 != 0 )
  {
    fraction = pTraceOut->fraction;
    if ( fraction <= hitboxResults.fraction )
      goto LABEL_5;
    fraction = hitboxResults.fraction;
  }
  else
  {
    fraction = hitboxResults.fraction;
  }
  type = hitboxResults.plane.type;
  pTraceOut->fraction = fraction;
  v10 = 1;
  pTraceOut->startpos.x = hitboxResults.startpos.x;
  y = hitboxResults.startpos.y;
  pTraceOut->plane.type = type;
  signbits = hitboxResults.plane.signbits;
  pTraceOut->startpos.y = y;
  pTraceOut->startpos.z = hitboxResults.startpos.z;
  x = hitboxResults.endpos.x;
  pTraceOut->plane.signbits = signbits;
  v24 = *hitboxResults.plane.pad;
  pTraceOut->endpos.x = x;
  pTraceOut->endpos.y = hitboxResults.endpos.y;
  z = hitboxResults.endpos.z;
  *pTraceOut->plane.pad = v24;
  contents = hitboxResults.contents;
  pTraceOut->endpos.z = z;
  pTraceOut->plane.normal.x = hitboxResults.plane.normal.x;
  v27 = hitboxResults.plane.normal.y;
  pTraceOut->contents = contents;
  LOBYTE(contents) = hitboxResults.startsolid;
  pTraceOut->plane.normal.y = v27;
  pTraceOut->plane.normal.z = hitboxResults.plane.normal.z;
  dist = hitboxResults.plane.dist;
  pTraceOut->startsolid = contents;
  m_pSurfaceProperties = hitboxResults.m_pSurfaceProperties;
  pTraceOut->plane.dist = dist;
  pTraceOut->m_pSurfaceProperties = m_pSurfaceProperties;
  pTraceOut->m_pEnt = hitboxResults.m_pEnt;
  m_pHitbox = hitboxResults.m_pHitbox;
  pTraceOut->boneLocalPos.x = hitboxResults.boneLocalPos.x;
  v31 = hitboxResults.boneLocalPos.y;
  pTraceOut->m_pHitbox = m_pHitbox;
  m_hBody = hitboxResults.m_hBody;
  pTraceOut->boneLocalPos.y = v31;
  pTraceOut->boneLocalPos.z = hitboxResults.boneLocalPos.z;
  v33 = hitboxResults.boneLocalNormal.x;
  pTraceOut->m_hBody = m_hBody;
  m_hShape = hitboxResults.m_hShape;
  pTraceOut->boneLocalNormal.x = v33;
  pTraceOut->boneLocalNormal.y = hitboxResults.boneLocalNormal.y;
  v35 = hitboxResults.boneLocalNormal.z;
  pTraceOut->m_hShape = m_hShape;
  m_nInteractsAs = hitboxResults.m_ShapeAttributes.m_nInteractsAs;
  pTraceOut->boneLocalNormal.z = v35;
  pTraceOut->m_ShapeAttributes.m_nInteractsAs = m_nInteractsAs;
  pTraceOut->m_ShapeAttributes.m_nInteractsWith = hitboxResults.m_ShapeAttributes.m_nInteractsWith;
  pTraceOut->m_ShapeAttributes.m_nInteractsExclude = hitboxResults.m_ShapeAttributes.m_nInteractsExclude;
  *&pTraceOut->m_ShapeAttributes.m_nEntityId = *&hitboxResults.m_ShapeAttributes.m_nEntityId;
  pTraceOut->m_nFaceIndex = hitboxResults.m_nFaceIndex;
  pTraceOut->hitboxBoneIndex = hitboxResults.hitboxBoneIndex;
  pTraceOut->unused0 = hitboxResults.unused0;
LABEL_5:
  v12 = ray->m_Start.y + ray->m_StartOffset.y;
  v13 = ray->m_Start.x + ray->m_StartOffset.x;
  v14 = ray->m_Start.z + ray->m_StartOffset.z;
  pTraceOut->startpos.y = v12;
  pTraceOut->startpos.x = v13;
  pTraceOut->startpos.z = v14;
  v15 = (ray->m_Delta.y * fraction) + v12;
  v16 = ray->m_Delta.z * fraction;
  v17 = fraction * ray->m_Delta.x;
  pTraceOut->endpos.y = v15;
  pTraceOut->endpos.z = v16 + v14;
  pTraceOut->endpos.x = v17 + v13;
  if ( phys_visualize_traces.m_pParent->m_Value.m_nValue != 0 )
  {
    v18 = 0;
    if ( ray->m_flRadius > 0.0 )
      v18 = 255;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
      debugoverlay,
      pTraceOut,
      &pTraceOut->endpos,
      255,
      -ray->m_IsRay,
      v18,
      -1.0,
      1);
  }
  return v10;
}


// CGamePhysicsQueryInterface::TraceRay  (line 813, @0x00000000020adab0, libserver.so)
// calls: CGamePhysicsQueryInterface::TraceRay, CGameTrace::Init
// callers: CLightQueryVisibilityTest::QueryVisibility, CDecalGameSystem::TraceDebugRay, CEntityDebugGameSystem::AddDebugLine, GetLightForTrace, ray_bench, CDecalSaveRestoreBlockHandler::Restore, CGamePhysicsQueryInterface::SweepCollideable, CLoopModeGameToolHooks::OnToolTraceRayServer, UTIL_TraceEntity, CEnvBeam::UpdateThink, CGridNav::ShowGridNavSectors, CGridNavBase::ShowGridNav (20 total)
bool __fastcall CGamePhysicsQueryInterface::TraceRay(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        CGameQueryAttributes *pTraceFilter,
        CGameTrace *pTraceOut)
{
  if ( this->m_pWorld != 0 )
    return CGamePhysicsQueryInterface::TraceRay(this, ray, pTraceFilter, pTraceOut);
  if ( pTraceOut != 0 )
    CGameTrace::Init(pTraceOut);
  return 0;
}


// CGamePhysicsQueryInterface::TraceRay  (line 868, @0x00000000020e3e50, libserver.so)  // inlines: CGameTraceList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, SetEndPoint, VectorAdd, VectorMultiply, operator*, operator+, operator=, operator[], ~CGameTraceList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGamePhysicsQueryInterface::TraceRayWithSortedResults, CGameTrace::Init, CUtlMemory<CGameTrace, int>::Purge, __stack_chk_fail, CUtlVectorBase<CGameTrace, CUtlMemoryFixedGrowable<CGameTrace, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseEntity::HandleShotImpactingWater, CBaseEntity::FireBullets, CBaseEntity::TraceBleed, Script_TraceHull, Script_TraceLine, ent_grab, IKTraceRay, MaterialFootstepSound, CBreakableProp::HandleFirstCollisionInteractions, CGamePhysicsQueryInterface::SweepCollideable, UTIL_TraceLineFilterEntity, UTIL_IsSpaceEmpty (149 total)
bool __fastcall CGamePhysicsQueryInterface::TraceRay(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        CTraceFilter *pTraceFilter,
        trace_t *pTrace)
{
  __int64 v7; // rbx
  int v8; // r12d
  bool result; // al
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  float fraction; // xmm4_4
  vec_t v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  uint32 v17; // edx
  CGameTrace *v18; // rbx
  bool v19; // [rsp+4h] [rbp-2A5Ch]
  bool v20; // [rsp+8h] [rbp-2A58h]
  CGameTraceList results; // [rsp+10h] [rbp-2A50h] BYREF
  unsigned __int64 v22; // [rsp+2A28h] [rbp-38h]

  results.m_list.m_Size = 0;
  v22 = __readfsqword(0x28u);
  results.m_list.m_Memory.m_nAllocationCount = 64;
  results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
  if ( CGamePhysicsQueryInterface::TraceRayWithSortedResults(this, ray, &pTraceFilter->m_attr, &results)
    && results.m_list.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( results.m_list.m_Memory.m_pMemory[v7].m_pEnt != 0 )
      {
        result = (*(pTraceFilter->_vptr_CTraceFilter + 2))(pTraceFilter);
        if ( result )
          break;
      }
      ++v8;
      ++v7;
      if ( v8 >= results.m_list.m_Size )
        goto LABEL_7;
    }
    v18 = &results.m_list.m_Memory.m_pMemory[v7];
    pTrace->startpos.x = v18->startpos.x;
    pTrace->startpos.y = v18->startpos.y;
    pTrace->startpos.z = v18->startpos.z;
    pTrace->endpos.x = v18->endpos.x;
    pTrace->endpos.y = v18->endpos.y;
    pTrace->endpos.z = v18->endpos.z;
    pTrace->plane.normal.x = v18->plane.normal.x;
    pTrace->plane.normal.y = v18->plane.normal.y;
    pTrace->plane.normal.z = v18->plane.normal.z;
    pTrace->plane.dist = v18->plane.dist;
    pTrace->plane.type = v18->plane.type;
    pTrace->plane.signbits = v18->plane.signbits;
    *pTrace->plane.pad = *v18->plane.pad;
    pTrace->fraction = v18->fraction;
    pTrace->contents = v18->contents;
    pTrace->startsolid = v18->startsolid;
    pTrace->m_pSurfaceProperties = v18->m_pSurfaceProperties;
    pTrace->m_pEnt = v18->m_pEnt;
    pTrace->m_pHitbox = v18->m_pHitbox;
    pTrace->m_hBody = v18->m_hBody;
    pTrace->m_hShape = v18->m_hShape;
    pTrace->m_ShapeAttributes.m_nInteractsAs = v18->m_ShapeAttributes.m_nInteractsAs;
    pTrace->m_ShapeAttributes.m_nInteractsWith = v18->m_ShapeAttributes.m_nInteractsWith;
    pTrace->m_ShapeAttributes.m_nInteractsExclude = v18->m_ShapeAttributes.m_nInteractsExclude;
    *&pTrace->m_ShapeAttributes.m_nEntityId = *&v18->m_ShapeAttributes.m_nEntityId;
    pTrace->boneLocalPos.x = v18->boneLocalPos.x;
    pTrace->boneLocalPos.y = v18->boneLocalPos.y;
    pTrace->boneLocalPos.z = v18->boneLocalPos.z;
    pTrace->boneLocalNormal.x = v18->boneLocalNormal.x;
    pTrace->boneLocalNormal.y = v18->boneLocalNormal.y;
    pTrace->boneLocalNormal.z = v18->boneLocalNormal.z;
    pTrace->m_nFaceIndex = v18->m_nFaceIndex;
    pTrace->hitboxBoneIndex = v18->hitboxBoneIndex;
    pTrace->unused0 = v18->unused0;
  }
  else
  {
LABEL_7:
    CGameTrace::Init(pTrace);
    result = 0;
    v10 = ray->m_Start.y + ray->m_StartOffset.y;
    v11 = ray->m_Start.z + ray->m_StartOffset.z;
    v12 = ray->m_Start.x + ray->m_StartOffset.x;
    pTrace->startpos.y = v10;
    fraction = pTrace->fraction;
    pTrace->startpos.z = v11;
    pTrace->startpos.x = v12;
    v14 = (ray->m_Delta.y * fraction) + v10;
    v15 = ray->m_Delta.z * fraction;
    v16 = fraction * ray->m_Delta.x;
    pTrace->endpos.y = v14;
    pTrace->endpos.z = v15 + v11;
    pTrace->endpos.x = v16 + v12;
  }
  results.m_list.m_Size = 0;
  v17 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( results.m_list.m_Memory.m_nAllocationCount < 0
    || results.m_list.m_Memory.m_pMemory == &results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v17 == 0 )
    {
      v19 = result;
      CUtlMemory<CGameTrace,int>::Purge(&results.m_list.m_Memory);
      return v19;
    }
  }
  else if ( results.m_list.m_Memory.m_pMemory != 0 && v17 == 0 )
  {
    v20 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    return v20;
  }
  return result;
}


// CGamePhysicsQueryInterface::RaycastMultiple  (line 895, @0x00000000020e18a0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Init, LengthSqr, Purge, Purge_FixedGrowable, Ray_t, RemoveAll, UpdateEntitiesBeforeQuery, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator-, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::ConvertTraceList, CHitboxSystem::TestHitboxesMultiple, CUtlMemory<PhysicsTrace_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::RaycastMultiple, CBaseEntity::TraceAttackToTriggers
int __fastcall CGamePhysicsQueryInterface::RaycastMultiple(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        CGameQueryAttributes *pTraceFilter,
        CGameTraceList *const hitBuffer)
{
  IVPhysics2World *m_pWorld; // rdi
  float x; // xmm2_4
  float y; // xmm1_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  void (__fastcall *v15)(IVPhysics2World *, CTraceVector *, const Vector *const, Ray_t *, CGameQueryAttributes *); // rax
  vec_t v16; // xmm0_4
  vec_t v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float z; // xmm4_4
  float v23; // xmm2_4
  int m_Size; // ebx
  uint32 v25; // edx
  Ray_t ray; // [rsp+10h] [rbp-20A0h] BYREF
  CTraceVector out; // [rsp+60h] [rbp-2050h] BYREF
  unsigned __int64 v30; // [rsp+2078h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_pWorld = this->m_pWorld;
  out.m_Size = 0;
  x = vEnd->x;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  y = vEnd->y;
  out.m_Memory.m_nAllocationCount = 128;
  v12 = x - vStart->x;
  out.m_Memory.m_nGrowSize = 0x80000000;
  v13 = y - vStart->y;
  v14 = vEnd->z - vStart->z;
  v15 = *(*m_pWorld + 944LL);
  ray.m_Start.x = v12;
  ray.m_Start.y = v13;
  ray.m_Start.z = v14;
  v15(m_pWorld, &out, vStart, &ray, pTraceFilter);
  v16 = vEnd->z - vStart->z;
  v17 = vEnd->x - vStart->x;
  ray.m_Start.y = vEnd->y - vStart->y;
  ray.m_Start.z = v16;
  ray.m_Start.x = v17;
  CGamePhysicsQueryInterface::ConvertTraceList(this, hitBuffer, vStart, &ray.m_Start, &out);
  if ( (pTraceFilter->m_nInteractsWith & 2) != 0 )
  {
    v18 = vStart->x;
    v19 = vStart->y;
    ray.m_Start.w = 0.0;
    v20 = vEnd->x;
    memset(&ray.m_Delta.w, 0, 40);
    v21 = vEnd->y;
    z = vStart->z;
    ray.m_IsRay = 1;
    v23 = vEnd->z;
    ray.m_Delta.x = v20 - v18;
    ray.m_Delta.y = v21 - v19;
    ray.m_Delta.z = v23 - z;
    ray.m_Start.x = v18;
    ray.m_Start.y = v19;
    ray.m_Start.z = z;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CHitboxSystem::TestHitboxesMultiple(&g_HitboxSystem, &ray, pTraceFilter, 0, hitBuffer);
  }
  out.m_Size = 0;
  m_Size = hitBuffer->m_list.m_Size;
  v25 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v25 == 0 )
      CUtlMemory<PhysicsTrace_t,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v25 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return m_Size;
}


// CGamePhysicsQueryInterface::RaycastMultiple  (line 914, @0x00000000020e2060, libserver.so)
// calls: CGamePhysicsQueryInterface::RaycastMultiple, CGamePhysicsQueryInterface::FilterTraceResults
int __fastcall CGamePhysicsQueryInterface::RaycastMultiple(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        CTraceFilter *pTraceFilter,
        CGameTraceList *const hitBuffer)
{
  CGamePhysicsQueryInterface::RaycastMultiple(this, vStart, vEnd, &pTraceFilter->m_attr, hitBuffer);
  return CGamePhysicsQueryInterface::FilterTraceResults(this, hitBuffer, pTraceFilter);
}


// CGamePhysicsQueryInterface::SphereCastSingle  (line 923, @0x00000000020ae310, libserver.so)  // inlines: PhysicsTrace_t, UpdateEntitiesBeforeQuery, Vector
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::ConvertTrace
void __fastcall CGamePhysicsQueryInterface::SphereCastSingle(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vRayStart,
        const Vector *const vRayDelta,
        float flRadius,
        CGameQueryAttributes *pTraceFilter,
        CGameTrace *pTrace)
{
  IVPhysics2World *m_pWorld; // rdi
  PhysicsTrace_t trace; // [rsp+10h] [rbp-70h] BYREF

  UpdateDirtySpatialPartitionEntities();
  m_pWorld = this->m_pWorld;
  memset(&trace, 0, 44);
  trace.m_flFraction = 1.0;
  trace.m_bStartInSolid = 0;
  trace.m_pSurfaceProperties = 0;
  (*(*m_pWorld + 992LL))(m_pWorld, &trace, vRayStart, vRayDelta, pTraceFilter, flRadius);
  CGamePhysicsQueryInterface::ConvertTrace(this, pTrace, vRayStart, vRayDelta, &trace);
}


// CGamePhysicsQueryInterface::SweepBodyMultiple  (line 933, @0x00000000020a9cd0, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CGamePhysicsQueryInterface::SweepBodyMultipleAndProcess
int __fastcall CGamePhysicsQueryInterface::SweepBodyMultiple(
        CGamePhysicsQueryInterface *const this,
        CSweepResultVector *const hitBuffer,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const HPhysicsBody *const body,
        CGameQueryAttributes *pFilter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1080LL))(this->m_pWorld, hitBuffer, xform1, xform2, body, pFilter, bIgnoreStartInSolid);
  return hitBuffer->m_Size;
}


// CGamePhysicsQueryInterface::SweepShapeMultiple  (line 942, @0x00000000020a9d40, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
int __fastcall CGamePhysicsQueryInterface::SweepShapeMultiple(
        CGamePhysicsQueryInterface *const this,
        CSweepResultVector *const hitBuffer,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const HPhysicsShape *const shape,
        CGameQueryAttributes *const filter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1096LL))(this->m_pWorld, hitBuffer, xform1, xform2, shape, filter, bIgnoreStartInSolid);
  return hitBuffer->m_Size;
}


// CGamePhysicsQueryInterface::SweepShapeMultiple  (line 952, @0x00000000020a9db0, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CGamePhysicsQueryInterface::SweepShape
int __fastcall CGamePhysicsQueryInterface::SweepShapeMultiple(
        CGamePhysicsQueryInterface *const this,
        CSweepResultVector *const hitBuffer,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        CGameQueryAttributes *const filter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1112LL))(this->m_pWorld, hitBuffer, xform1, xform2, sphere, filter, bIgnoreStartInSolid);
  return hitBuffer->m_Size;
}


// CGamePhysicsQueryInterface::SweepShapeMultiple  (line 963, @0x00000000020a9e20, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CGamePhysicsQueryInterface::SweepShape
int __fastcall CGamePhysicsQueryInterface::SweepShapeMultiple(
        CGamePhysicsQueryInterface *const this,
        CSweepResultVector *const hitBuffer,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        CGameQueryAttributes *const filter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1136LL))(this->m_pWorld, hitBuffer, xform1, xform2, capsule, filter, bIgnoreStartInSolid);
  return hitBuffer->m_Size;
}


// CGamePhysicsQueryInterface::SweepShapeMultiple  (line 974, @0x00000000020a9e90, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CGamePhysicsQueryInterface::SweepShape
int __fastcall CGamePhysicsQueryInterface::SweepShapeMultiple(
        CGamePhysicsQueryInterface *const this,
        CSweepResultVector *const hitBuffer,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const hull,
        CGameQueryAttributes *const filter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1160LL))(this->m_pWorld, hitBuffer, xform1, xform2, hull, filter, bIgnoreStartInSolid);
  return hitBuffer->m_Size;
}


// Backoff  (line 985, @0x000000000209d1e0, libserver.so)  // inlines: DotProduct, FastSqrt, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, fpmax, operator-, operator/=
// callers: CGamePhysicsQueryInterface::LinearCast
void __fastcall Backoff(
        CLinearSweepResult *const out,
        const Vector *const v1,
        const Vector *const v2,
        float flBackOffDistance)
{
  float m_flAlpha; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  __int64 v10; // [rsp-8h] [rbp-8h]

  m_flAlpha = out->m_flAlpha;
  if ( m_flAlpha < 1.0 && flBackOffDistance > 0.0 )
  {
    v5 = v2->x - v1->x;
    v6 = v2->y - v1->y;
    v7 = v2->z - v1->z;
    *(&v10 - 1) = ((v5 * v5) + (v6 * v6)) + (v7 * v7);
    v8 = fsqrt(*(&v10 - 1));
    if ( (v8 * v8) > 1.1754944e-35 )
    {
      v9 = (((v5 * (1.0 / v8)) * out->m_vHitNormal.x) + ((v6 * (1.0 / v8)) * out->m_vHitNormal.y))
         + (((1.0 / v8) * v7) * out->m_vHitNormal.z);
      if ( v9 < 0.0 )
        out->m_flAlpha = fmaxf(0.0, ((flBackOffDistance / v9) + (m_flAlpha * v8)) / v8);
    }
  }
}


// CGamePhysicsQueryInterface::LinearCastMultiple  (line 1008, @0x00000000020e1230, libserver.so)  // inlines: CTransform, Init, QuaternionAligned, VectorAligned, VectorSubtract, __final_insertion_sort<CLinearSweepResult*>, __lg, __unguarded_insertion_sort<CLinearSweepResult*>, end, operator-, sort<CLinearSweepResult*>
// calls: std::__introsort_loop<CLinearSweepResult*, long int>, std::__insertion_sort<CLinearSweepResult*>, std::__unguarded_linear_insert<CLinearSweepResult*>
// callers: CGamePhysicsQueryInterface::LinearCast
__int64 __fastcall CGamePhysicsQueryInterface::LinearCastMultiple(
        CGamePhysicsQueryInterface *const this,
        CLinearSweepResultVector *const results,
        const Vector *const v1,
        const Vector *const v2,
        const RnSphere_t *const sphere,
        CGameQueryAttributes *pFilter,
        float flBackOffDistance)
{
  IVPhysics2World *m_pWorld; // rdi
  float y; // xmm0_4
  vec_t w; // xmm1_4
  float x; // xmm3_4
  vec_t z; // xmm4_4
  vec_t v13; // xmm5_4
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  void (__fastcall *v19)(IVPhysics2World *, CLinearSweepResultVector *const, CTransform *, const RnSphere_t *const, float *, CGameQueryAttributes *, _DWORD); // rax
  __int64 result; // rax
  CLinearSweepResult *m_pMemory; // r13
  CLinearSweepResult *v22; // r12
  CLinearSweepResult *v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  CLinearSweepResult *v26; // rbx
  CLinearSweepResult *v27; // rdi
  float v28[4]; // [rsp+10h] [rbp-50h] BYREF
  CTransform xform; // [rsp+20h] [rbp-40h] BYREF

  xform.m_vPosition.w = 0.0;
  m_pWorld = this->m_pWorld;
  y = v1->y;
  w = quat_identity.w;
  xform.m_vPosition.z = v1->z;
  x = v1->x;
  xform.m_vPosition.y = y;
  z = quat_identity.z;
  xform.m_orientation.w = w;
  v13 = quat_identity.y;
  xform.m_vPosition.x = x;
  xform.m_orientation.z = z;
  v14 = v2->y;
  xform.m_orientation.y = v13;
  xform.m_orientation.x = quat_identity.x;
  v15 = *m_pWorld;
  v16 = v14 - y;
  v17 = v2->z - xform.m_vPosition.z;
  v18 = v2->x;
  v28[1] = v16;
  v19 = *(v15 + 1032);
  v28[2] = v17;
  v28[0] = v18 - x;
  v19(m_pWorld, results, &xform, sphere, v28, pFilter, 0);
  result = results->m_Size;
  m_pMemory = results->m_Memory.m_pMemory;
  v22 = &m_pMemory[result];
  if ( m_pMemory == v22 )
    return result;
  v23 = &m_pMemory[result];
  v24 = 48LL * result;
  _BitScanReverse64(&v25, 0xAAAAAAAAAAAAAAABLL * (v24 >> 4));
  std::__introsort_loop<CLinearSweepResult *,long>(results->m_Memory.m_pMemory, v23, 2 * (63LL - (v25 ^ 0x3F)));
  if ( v24 <= 815 )
  {
    std::__insertion_sort<CLinearSweepResult *>(m_pMemory, v22);
    return results->m_Size;
  }
  v26 = m_pMemory + 16;
  std::__insertion_sort<CLinearSweepResult *>(m_pMemory, m_pMemory + 16);
  if ( v22 == &m_pMemory[16] )
    return results->m_Size;
  do
  {
    v27 = v26++;
    std::__unguarded_linear_insert<CLinearSweepResult *>(v27);
  }
  while ( v22 != v26 );
  return results->m_Size;
}


// CGamePhysicsQueryInterface::LinearCastMultiple  (line 1017, @0x00000000020e0f30, libserver.so)  // inlines: CTransform, Init, QuaternionAligned, VectorAligned, VectorSubtract, __final_insertion_sort<CLinearSweepResult*>, __lg, __unguarded_insertion_sort<CLinearSweepResult*>, end, operator-, sort<CLinearSweepResult*>
// calls: std::__introsort_loop<CLinearSweepResult*, long int>, std::__insertion_sort<CLinearSweepResult*>, std::__unguarded_linear_insert<CLinearSweepResult*>
// callers: CGamePhysicsQueryInterface::LinearCast
__int64 __fastcall CGamePhysicsQueryInterface::LinearCastMultiple(
        CGamePhysicsQueryInterface *const this,
        CLinearSweepResultVector *const results,
        const Vector *const v1,
        const Vector *const v2,
        const RnHull_t *const hull,
        CGameQueryAttributes *pFilter,
        float flBackOffDistance)
{
  IVPhysics2World *m_pWorld; // rdi
  float y; // xmm0_4
  vec_t w; // xmm1_4
  float x; // xmm3_4
  vec_t z; // xmm4_4
  vec_t v13; // xmm5_4
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  void (__fastcall *v19)(IVPhysics2World *, CLinearSweepResultVector *const, CTransform *, const RnHull_t *const, float *, CGameQueryAttributes *, _DWORD); // rax
  __int64 result; // rax
  CLinearSweepResult *m_pMemory; // r13
  CLinearSweepResult *v22; // r12
  CLinearSweepResult *v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  CLinearSweepResult *v26; // rbx
  CLinearSweepResult *v27; // rdi
  float v28[4]; // [rsp+10h] [rbp-50h] BYREF
  CTransform xform; // [rsp+20h] [rbp-40h] BYREF

  xform.m_vPosition.w = 0.0;
  m_pWorld = this->m_pWorld;
  y = v1->y;
  w = quat_identity.w;
  xform.m_vPosition.z = v1->z;
  x = v1->x;
  xform.m_vPosition.y = y;
  z = quat_identity.z;
  xform.m_orientation.w = w;
  v13 = quat_identity.y;
  xform.m_vPosition.x = x;
  xform.m_orientation.z = z;
  v14 = v2->y;
  xform.m_orientation.y = v13;
  xform.m_orientation.x = quat_identity.x;
  v15 = *m_pWorld;
  v16 = v14 - y;
  v17 = v2->z - xform.m_vPosition.z;
  v18 = v2->x;
  v28[1] = v16;
  v19 = *(v15 + 1064);
  v28[2] = v17;
  v28[0] = v18 - x;
  v19(m_pWorld, results, &xform, hull, v28, pFilter, 0);
  result = results->m_Size;
  m_pMemory = results->m_Memory.m_pMemory;
  v22 = &m_pMemory[result];
  if ( m_pMemory == v22 )
    return result;
  v23 = &m_pMemory[result];
  v24 = 48LL * result;
  _BitScanReverse64(&v25, 0xAAAAAAAAAAAAAAABLL * (v24 >> 4));
  std::__introsort_loop<CLinearSweepResult *,long>(results->m_Memory.m_pMemory, v23, 2 * (63LL - (v25 ^ 0x3F)));
  if ( v24 <= 815 )
  {
    std::__insertion_sort<CLinearSweepResult *>(m_pMemory, v22);
    return results->m_Size;
  }
  v26 = m_pMemory + 16;
  std::__insertion_sort<CLinearSweepResult *>(m_pMemory, m_pMemory + 16);
  if ( v22 == &m_pMemory[16] )
    return results->m_Size;
  do
  {
    v27 = v26++;
    std::__unguarded_linear_insert<CLinearSweepResult *>(v27);
  }
  while ( v22 != v26 );
  return results->m_Size;
}


// CGamePhysicsQueryInterface::LinearCastMultiple  (line 1027, @0x00000000020e10b0, libserver.so)  // inlines: CTransform, Init, QuaternionAligned, VectorAligned, VectorSubtract, __final_insertion_sort<CLinearSweepResult*>, __lg, __unguarded_insertion_sort<CLinearSweepResult*>, end, operator-, sort<CLinearSweepResult*>
// calls: std::__introsort_loop<CLinearSweepResult*, long int>, std::__insertion_sort<CLinearSweepResult*>, std::__unguarded_linear_insert<CLinearSweepResult*>
// callers: CGamePhysicsQueryInterface::LinearCast
__int64 __fastcall CGamePhysicsQueryInterface::LinearCastMultiple(
        CGamePhysicsQueryInterface *const this,
        CLinearSweepResultVector *const results,
        const Vector *const v1,
        const Vector *const v2,
        const RnCapsule_t *const capsule,
        CGameQueryAttributes *pFilter,
        float flBackOffDistance)
{
  IVPhysics2World *m_pWorld; // rdi
  float y; // xmm0_4
  vec_t w; // xmm1_4
  float x; // xmm3_4
  vec_t z; // xmm4_4
  vec_t v13; // xmm5_4
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  void (__fastcall *v19)(IVPhysics2World *, CLinearSweepResultVector *const, CTransform *, const RnCapsule_t *const, float *, CGameQueryAttributes *, _DWORD); // rax
  __int64 result; // rax
  CLinearSweepResult *m_pMemory; // r13
  CLinearSweepResult *v22; // r12
  CLinearSweepResult *v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  CLinearSweepResult *v26; // rbx
  CLinearSweepResult *v27; // rdi
  float v28[4]; // [rsp+10h] [rbp-50h] BYREF
  CTransform xform; // [rsp+20h] [rbp-40h] BYREF

  xform.m_vPosition.w = 0.0;
  m_pWorld = this->m_pWorld;
  y = v1->y;
  w = quat_identity.w;
  xform.m_vPosition.z = v1->z;
  x = v1->x;
  xform.m_vPosition.y = y;
  z = quat_identity.z;
  xform.m_orientation.w = w;
  v13 = quat_identity.y;
  xform.m_vPosition.x = x;
  xform.m_orientation.z = z;
  v14 = v2->y;
  xform.m_orientation.y = v13;
  xform.m_orientation.x = quat_identity.x;
  v15 = *m_pWorld;
  v16 = v14 - y;
  v17 = v2->z - xform.m_vPosition.z;
  v18 = v2->x;
  v28[1] = v16;
  v19 = *(v15 + 1048);
  v28[2] = v17;
  v28[0] = v18 - x;
  v19(m_pWorld, results, &xform, capsule, v28, pFilter, 0);
  result = results->m_Size;
  m_pMemory = results->m_Memory.m_pMemory;
  v22 = &m_pMemory[result];
  if ( m_pMemory == v22 )
    return result;
  v23 = &m_pMemory[result];
  v24 = 48LL * result;
  _BitScanReverse64(&v25, 0xAAAAAAAAAAAAAAABLL * (v24 >> 4));
  std::__introsort_loop<CLinearSweepResult *,long>(results->m_Memory.m_pMemory, v23, 2 * (63LL - (v25 ^ 0x3F)));
  if ( v24 <= 815 )
  {
    std::__insertion_sort<CLinearSweepResult *>(m_pMemory, v22);
    return results->m_Size;
  }
  v26 = m_pMemory + 16;
  std::__insertion_sort<CLinearSweepResult *>(m_pMemory, m_pMemory + 16);
  if ( v22 == &m_pMemory[16] )
    return results->m_Size;
  do
  {
    v27 = v26++;
    std::__unguarded_linear_insert<CLinearSweepResult *>(v27);
  }
  while ( v22 != v26 );
  return results->m_Size;
}


// CGamePhysicsQueryInterface::LinearCast  (line 1037, @0x00000000020e2b50, libserver.so)  // inlines: CGJKShapeProxy, CLinearSweepResult, CSweepResult, CTransform, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetBool, GetInt, Init, Purge, Purge_FixedGrowable, QuaternionAligned, RemoveAll, SetOrigin, SetToIdentity, UpdateEntitiesBeforeQuery, VectorAdd, VectorAligned, VectorMultiply, operator*, operator+, operator=, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::LinearCastMultiple, CGamePhysicsQueryInterface::FilterLinearSweepResults, Backoff, CGamePhysicsQueryInterface::SweepShape, SetIdentityMatrix, CGamePhysicsQueryInterface::LinearCast, CUtlMemory<CLinearSweepResult, int>::Purge, __stack_chk_fail, CUtlVectorBase<CLinearSweepResult, CUtlMemoryFixedGrowable<CLinearSweepResult, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
CLinearSweepResult *__fastcall CGamePhysicsQueryInterface::LinearCast(
        CLinearSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const v1,
        const Vector *const v2,
        const RnSphere_t *const sphere,
        CTraceFilter *pFilter,
        float flBackOffDistance)
{
  __int64 v11; // rdx
  vec_t z; // eax
  CLinearSweepResult *m_pMemory; // rdi
  IPhysicsBody *m_hBody; // rax
  vec_t v15; // xmm0_4
  IPhysicsShape *m_hShape; // rax
  vec_t y; // xmm0_4
  __int64 v18; // rax
  uint32 v19; // eax
  vec_t v21; // xmm1_4
  vec_t v22; // xmm1_4
  int y_low; // xmm2_4
  vec_t x; // xmm6_4
  vec_t v25; // xmm4_4
  vec_t v26; // xmm5_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  IPhysicsBody *v31; // rax
  vec_t v32; // xmm0_4
  IPhysicsShape *v33; // rax
  vec_t v34; // xmm0_4
  __int64 v35; // rax
  vec_t v36; // xmm0_4
  float v37; // [rsp+14h] [rbp-191Ch]
  float v38; // [rsp+28h] [rbp-1908h]
  float sphereb; // [rsp+30h] [rbp-1900h]
  CSweepResult sweep; // [rsp+40h] [rbp-18F0h] BYREF
  CGJKShapeProxy sweep_proxy; // [rsp+60h] [rbp-18D0h] BYREF
  matrix3x4_t sweep_xform; // [rsp+80h] [rbp-18B0h] BYREF
  CLinearSweepResult xform2; // [rsp+B0h] [rbp-1880h] BYREF
  CLinearSweepResultVector resultVector; // [rsp+E0h] [rbp-1850h] BYREF
  unsigned __int64 v48; // [rsp+18F8h] [rbp-38h]

  retstr->m_hBody = 0;
  v48 = __readfsqword(0x28u);
  retstr->m_hShape = 0;
  retstr->m_flAlpha = 1.0;
  retstr->m_nTriangle = -1;
  v11 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&retstr->m_vHitPoint.x = *&vec3_origin.x;
  retstr->m_vHitPoint.z = z;
  retstr->m_vHitNormal.z = z;
  *&retstr->m_vHitNormal.x = v11;
  UpdateDirtySpatialPartitionEntities();
  if ( phys_specialized_linear_sweep.m_pParent->m_Value.m_nValue != 0 )
  {
    resultVector.m_Size = 0;
    resultVector.m_Memory.m_nAllocationCount = 128;
    resultVector.m_Memory.m_nGrowSize = 0x80000000;
    resultVector.m_Memory.m_pMemory = &resultVector.m_Memory.m_FixedMemory;
    CGamePhysicsQueryInterface::LinearCastMultiple(
      this,
      &resultVector,
      v1,
      v2,
      sphere,
      &pFilter->m_attr,
      flBackOffDistance);
    if ( CGamePhysicsQueryInterface::FilterLinearSweepResults(this, &resultVector, pFilter) != 0 )
    {
      m_pMemory = resultVector.m_Memory.m_pMemory;
      m_hBody = resultVector.m_Memory.m_pMemory->m_hBody;
      retstr->m_vHitPoint.x = resultVector.m_Memory.m_pMemory->m_vHitPoint.x;
      retstr->m_vHitPoint.y = m_pMemory->m_vHitPoint.y;
      v15 = m_pMemory->m_vHitPoint.z;
      retstr->m_hBody = m_hBody;
      m_hShape = m_pMemory->m_hShape;
      retstr->m_vHitPoint.z = v15;
      retstr->m_vHitNormal.x = m_pMemory->m_vHitNormal.x;
      y = m_pMemory->m_vHitNormal.y;
      retstr->m_hShape = m_hShape;
      v18 = *&m_pMemory->m_flAlpha;
      retstr->m_vHitNormal.y = y;
      retstr->m_vHitNormal.z = m_pMemory->m_vHitNormal.z;
      *&retstr->m_flAlpha = v18;
      Backoff(m_pMemory, v1, v2, flBackOffDistance);
    }
    resultVector.m_Size = 0;
    v19 = resultVector.m_Memory.m_nGrowSize & 0xC0000000;
    if ( resultVector.m_Memory.m_nAllocationCount < 0
      || resultVector.m_Memory.m_pMemory == &resultVector.m_Memory.m_FixedMemory )
    {
      if ( v19 == 0 )
        CUtlMemory<CLinearSweepResult,int>::Purge(&resultVector.m_Memory);
    }
    else if ( resultVector.m_Memory.m_pMemory != 0 && v19 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
  else
  {
    v21 = v2->y;
    xform2.m_hShape = LODWORD(v2->z);
    xform2.m_hBody = __PAIR64__(LODWORD(v21), LODWORD(v2->x));
    v22 = quat_identity.z;
    y_low = LODWORD(quat_identity.y);
    xform2.m_vHitPoint.y = quat_identity.w;
    x = v1->x;
    v25 = v1->z;
    xform2.m_flAlpha = quat_identity.x;
    v26 = v1->y;
    xform2.m_nTriangle = y_low;
    xform2.m_vHitPoint.x = v22;
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v26), LODWORD(x));
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v25);
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(y_low, LODWORD(quat_identity.x));
    *&sweep_xform.m_flMatVal[1][2] = __PAIR64__(LODWORD(xform2.m_vHitPoint.y), LODWORD(v22));
    CGamePhysicsQueryInterface::SweepShape(&sweep, this, &sweep_xform, &xform2, sphere, pFilter, 0);
    if ( sweep.m_flAlpha < 1.0 )
    {
      v27 = v2->x;
      v28 = v1->x;
      sweep_proxy.m_nVertexCount = 1;
      v29 = v1->y;
      sweep_proxy.m_flScale = 1.0;
      v30 = (1.0 - sweep.m_flAlpha) * v1->z;
      sweep_proxy.m_pVertexBuffer = &sphere->m_vCenter;
      v37 = (v27 * sweep.m_flAlpha) + (v28 * (1.0 - sweep.m_flAlpha));
      v38 = (v2->y * sweep.m_flAlpha) + (v29 * (1.0 - sweep.m_flAlpha));
      sphereb = (sweep.m_flAlpha * v2->z) + v30;
      SetIdentityMatrix(&sweep_xform);
      sweep_xform.m_flMatVal[2][3] = sphereb;
      sweep_xform.m_flMatVal[0][3] = v37;
      sweep_xform.m_flMatVal[1][3] = v38;
      CGamePhysicsQueryInterface::LinearCast(
        &xform2,
        this,
        v1,
        v2,
        &sweep_xform,
        &sweep_proxy,
        flBackOffDistance,
        &sweep);
      v31 = xform2.m_hBody;
      retstr->m_vHitPoint.x = xform2.m_vHitPoint.x;
      v32 = xform2.m_vHitPoint.y;
      retstr->m_hBody = v31;
      v33 = xform2.m_hShape;
      retstr->m_vHitPoint.y = v32;
      retstr->m_vHitPoint.z = xform2.m_vHitPoint.z;
      v34 = xform2.m_vHitNormal.x;
      retstr->m_hShape = v33;
      v35 = *&xform2.m_flAlpha;
      retstr->m_vHitNormal.x = v34;
      retstr->m_vHitNormal.y = xform2.m_vHitNormal.y;
      v36 = xform2.m_vHitNormal.z;
      *&retstr->m_flAlpha = v35;
      retstr->m_vHitNormal.z = v36;
    }
  }
  return retstr;
}


// CGamePhysicsQueryInterface::LinearCast  (line 1072, @0x00000000020e34f0, libserver.so)  // inlines: CGJKShapeProxy, CLinearSweepResult, CSweepResult, CTransform, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetBool, GetInt, Init, Purge, Purge_FixedGrowable, QuaternionAligned, RemoveAll, SetOrigin, SetToIdentity, UpdateEntitiesBeforeQuery, VectorAdd, VectorAligned, VectorMultiply, operator*, operator+, operator=, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::LinearCastMultiple, CGamePhysicsQueryInterface::FilterLinearSweepResults, Backoff, CGamePhysicsQueryInterface::SweepShape, SetIdentityMatrix, CGamePhysicsQueryInterface::LinearCast, CUtlMemory<CLinearSweepResult, int>::Purge, __stack_chk_fail, CUtlVectorBase<CLinearSweepResult, CUtlMemoryFixedGrowable<CLinearSweepResult, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::SweepCollideable
CLinearSweepResult *__fastcall CGamePhysicsQueryInterface::LinearCast(
        CLinearSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const v1,
        const Vector *const v2,
        const RnCapsule_t *const capsule,
        CTraceFilter *pFilter,
        float flBackOffDistance)
{
  __int64 v11; // rdx
  vec_t z; // eax
  uint32 v13; // eax
  vec_t v15; // xmm0_4
  vec_t x; // xmm2_4
  vec_t w; // xmm0_4
  vec_t v18; // xmm1_4
  int y_low; // xmm2_4
  vec_t v20; // xmm6_4
  vec_t y; // xmm5_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  IPhysicsBody *m_hBody; // rax
  vec_t v27; // xmm0_4
  IPhysicsShape *m_hShape; // rax
  vec_t v29; // xmm0_4
  __int64 v30; // rax
  vec_t v31; // xmm0_4
  float v32; // [rsp+14h] [rbp-191Ch]
  float v33; // [rsp+28h] [rbp-1908h]
  float capsuleb; // [rsp+30h] [rbp-1900h]
  CSweepResult sweep; // [rsp+40h] [rbp-18F0h] BYREF
  CGJKShapeProxy sweep_proxy; // [rsp+60h] [rbp-18D0h] BYREF
  matrix3x4_t sweep_xform; // [rsp+80h] [rbp-18B0h] BYREF
  CLinearSweepResult xform2; // [rsp+B0h] [rbp-1880h] BYREF
  CLinearSweepResultVector resultVector; // [rsp+E0h] [rbp-1850h] BYREF
  unsigned __int64 v43; // [rsp+18F8h] [rbp-38h]

  retstr->m_hBody = 0;
  v43 = __readfsqword(0x28u);
  retstr->m_hShape = 0;
  retstr->m_flAlpha = 1.0;
  retstr->m_nTriangle = -1;
  v11 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&retstr->m_vHitPoint.x = *&vec3_origin.x;
  retstr->m_vHitPoint.z = z;
  retstr->m_vHitNormal.z = z;
  *&retstr->m_vHitNormal.x = v11;
  UpdateDirtySpatialPartitionEntities();
  if ( phys_specialized_linear_sweep.m_pParent->m_Value.m_nValue != 0 )
  {
    resultVector.m_Size = 0;
    resultVector.m_Memory.m_nAllocationCount = 128;
    resultVector.m_Memory.m_nGrowSize = 0x80000000;
    resultVector.m_Memory.m_pMemory = &resultVector.m_Memory.m_FixedMemory;
    CGamePhysicsQueryInterface::LinearCastMultiple(
      this,
      &resultVector,
      v1,
      v2,
      capsule,
      &pFilter->m_attr,
      flBackOffDistance);
    if ( CGamePhysicsQueryInterface::FilterLinearSweepResults(this, &resultVector, pFilter) != 0 )
    {
      *retstr = *resultVector.m_Memory.m_pMemory;
      Backoff(retstr, v1, v2, flBackOffDistance);
    }
    resultVector.m_Size = 0;
    v13 = resultVector.m_Memory.m_nGrowSize & 0xC0000000;
    if ( resultVector.m_Memory.m_nAllocationCount < 0
      || resultVector.m_Memory.m_pMemory == &resultVector.m_Memory.m_FixedMemory )
    {
      if ( v13 == 0 )
        CUtlMemory<CLinearSweepResult,int>::Purge(&resultVector.m_Memory);
    }
    else if ( resultVector.m_Memory.m_pMemory != 0 && v13 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
  else
  {
    v15 = v2->z;
    x = v2->x;
    HIDWORD(xform2.m_hBody) = LODWORD(v2->y);
    *&xform2.m_hBody = x;
    xform2.m_hShape = LODWORD(v15);
    w = quat_identity.w;
    v18 = quat_identity.z;
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v1->z);
    y_low = LODWORD(quat_identity.y);
    xform2.m_vHitPoint.y = w;
    v20 = v1->x;
    y = v1->y;
    xform2.m_flAlpha = quat_identity.x;
    xform2.m_nTriangle = y_low;
    xform2.m_vHitPoint.x = v18;
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(y), LODWORD(v20));
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(y_low, LODWORD(quat_identity.x));
    *&sweep_xform.m_flMatVal[1][2] = __PAIR64__(LODWORD(w), LODWORD(v18));
    CGamePhysicsQueryInterface::SweepShape(&sweep, this, &sweep_xform, &xform2, capsule, pFilter, 0);
    if ( sweep.m_flAlpha < 1.0 )
    {
      v22 = v2->x;
      v23 = v1->x;
      sweep_proxy.m_nVertexCount = 2;
      v24 = v1->y;
      sweep_proxy.m_flScale = 1.0;
      v25 = (1.0 - sweep.m_flAlpha) * v1->z;
      sweep_proxy.m_pVertexBuffer = capsule;
      v32 = (v22 * sweep.m_flAlpha) + (v23 * (1.0 - sweep.m_flAlpha));
      v33 = (v2->y * sweep.m_flAlpha) + (v24 * (1.0 - sweep.m_flAlpha));
      capsuleb = (sweep.m_flAlpha * v2->z) + v25;
      SetIdentityMatrix(&sweep_xform);
      sweep_xform.m_flMatVal[2][3] = capsuleb;
      sweep_xform.m_flMatVal[0][3] = v32;
      sweep_xform.m_flMatVal[1][3] = v33;
      CGamePhysicsQueryInterface::LinearCast(
        &xform2,
        this,
        v1,
        v2,
        &sweep_xform,
        &sweep_proxy,
        flBackOffDistance,
        &sweep);
      m_hBody = xform2.m_hBody;
      retstr->m_vHitPoint.x = xform2.m_vHitPoint.x;
      v27 = xform2.m_vHitPoint.y;
      retstr->m_hBody = m_hBody;
      m_hShape = xform2.m_hShape;
      retstr->m_vHitPoint.y = v27;
      retstr->m_vHitPoint.z = xform2.m_vHitPoint.z;
      v29 = xform2.m_vHitNormal.x;
      retstr->m_hShape = m_hShape;
      v30 = *&xform2.m_flAlpha;
      retstr->m_vHitNormal.x = v29;
      retstr->m_vHitNormal.y = xform2.m_vHitNormal.y;
      v31 = xform2.m_vHitNormal.z;
      *&retstr->m_flAlpha = v30;
      retstr->m_vHitNormal.z = v31;
    }
  }
  return retstr;
}


// CGamePhysicsQueryInterface::LinearCast  (line 1106, @0x00000000020e3010, libserver.so)  // inlines: Base, CGJKShapeProxy, CLinearSweepResult, CSweepResult, CTransform, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetBool, GetInt, GetRawPtr, Init, Purge, Purge_FixedGrowable, QuaternionAligned, RemoveAll, ResolveOffset, SetOrigin, SetToIdentity, UpdateEntitiesBeforeQuery, VectorAdd, VectorAligned, VectorMultiply, operator*, operator+, operator=, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::LinearCastMultiple, CGamePhysicsQueryInterface::FilterLinearSweepResults, Backoff, CGamePhysicsQueryInterface::SweepShape, SetIdentityMatrix, CGamePhysicsQueryInterface::LinearCast, CUtlMemory<CLinearSweepResult, int>::Purge, __stack_chk_fail, CUtlVectorBase<CLinearSweepResult, CUtlMemoryFixedGrowable<CLinearSweepResult, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
CLinearSweepResult *__fastcall CGamePhysicsQueryInterface::LinearCast(
        CLinearSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const v1,
        const Vector *const v2,
        const RnHull_t *const hull,
        CTraceFilter *pFilter,
        float flBackOffDistance)
{
  __int64 v11; // rdx
  vec_t z; // eax
  uint32 v13; // eax
  vec_t v15; // xmm0_4
  vec_t x; // xmm2_4
  vec_t w; // xmm0_4
  vec_t v18; // xmm1_4
  int y_low; // xmm2_4
  vec_t v20; // xmm6_4
  vec_t y; // xmm5_4
  __int64 m_nOffset; // rdx
  const Vector *v23; // rax
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  IPhysicsBody *m_hBody; // rax
  vec_t v31; // xmm0_4
  IPhysicsShape *m_hShape; // rax
  vec_t v33; // xmm0_4
  __int64 v34; // rax
  vec_t v35; // xmm0_4
  float v36; // [rsp+14h] [rbp-191Ch]
  float v37; // [rsp+28h] [rbp-1908h]
  float hullb; // [rsp+30h] [rbp-1900h]
  CSweepResult sweep; // [rsp+40h] [rbp-18F0h] BYREF
  CGJKShapeProxy sweep_proxy; // [rsp+60h] [rbp-18D0h] BYREF
  matrix3x4_t sweep_xform; // [rsp+80h] [rbp-18B0h] BYREF
  CLinearSweepResult xform2; // [rsp+B0h] [rbp-1880h] BYREF
  CLinearSweepResultVector resultVector; // [rsp+E0h] [rbp-1850h] BYREF
  unsigned __int64 v47; // [rsp+18F8h] [rbp-38h]

  retstr->m_hBody = 0;
  v47 = __readfsqword(0x28u);
  retstr->m_hShape = 0;
  retstr->m_flAlpha = 1.0;
  retstr->m_nTriangle = -1;
  v11 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&retstr->m_vHitPoint.x = *&vec3_origin.x;
  retstr->m_vHitPoint.z = z;
  retstr->m_vHitNormal.z = z;
  *&retstr->m_vHitNormal.x = v11;
  UpdateDirtySpatialPartitionEntities();
  if ( phys_specialized_linear_sweep.m_pParent->m_Value.m_nValue != 0 )
  {
    resultVector.m_Size = 0;
    resultVector.m_Memory.m_nAllocationCount = 128;
    resultVector.m_Memory.m_nGrowSize = 0x80000000;
    resultVector.m_Memory.m_pMemory = &resultVector.m_Memory.m_FixedMemory;
    CGamePhysicsQueryInterface::LinearCastMultiple(
      this,
      &resultVector,
      v1,
      v2,
      hull,
      &pFilter->m_attr,
      flBackOffDistance);
    if ( CGamePhysicsQueryInterface::FilterLinearSweepResults(this, &resultVector, pFilter) != 0 )
    {
      *retstr = *resultVector.m_Memory.m_pMemory;
      Backoff(retstr, v1, v2, flBackOffDistance);
    }
    resultVector.m_Size = 0;
    v13 = resultVector.m_Memory.m_nGrowSize & 0xC0000000;
    if ( resultVector.m_Memory.m_nAllocationCount < 0
      || resultVector.m_Memory.m_pMemory == &resultVector.m_Memory.m_FixedMemory )
    {
      if ( v13 == 0 )
        CUtlMemory<CLinearSweepResult,int>::Purge(&resultVector.m_Memory);
    }
    else if ( resultVector.m_Memory.m_pMemory != 0 && v13 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
  else
  {
    v15 = v2->z;
    x = v2->x;
    HIDWORD(xform2.m_hBody) = LODWORD(v2->y);
    *&xform2.m_hBody = x;
    xform2.m_hShape = LODWORD(v15);
    w = quat_identity.w;
    v18 = quat_identity.z;
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v1->z);
    y_low = LODWORD(quat_identity.y);
    xform2.m_vHitPoint.y = w;
    v20 = v1->x;
    y = v1->y;
    xform2.m_flAlpha = quat_identity.x;
    xform2.m_nTriangle = y_low;
    xform2.m_vHitPoint.x = v18;
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(y), LODWORD(v20));
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(y_low, LODWORD(quat_identity.x));
    *&sweep_xform.m_flMatVal[1][2] = __PAIR64__(LODWORD(w), LODWORD(v18));
    CGamePhysicsQueryInterface::SweepShape(&sweep, this, &sweep_xform, &xform2, hull, pFilter, 0);
    if ( sweep.m_flAlpha < 1.0 )
    {
      m_nOffset = hull->m_Vertices.m_nOffset;
      v23 = 0;
      if ( m_nOffset != 0 )
        v23 = (&hull->m_Vertices + m_nOffset);
      v24 = v2->x;
      sweep_proxy.m_pVertexBuffer = v23;
      sweep_proxy.m_flScale = 1.0;
      v25 = v1->y * (1.0 - sweep.m_flAlpha);
      v26 = (1.0 - sweep.m_flAlpha) * v1->z;
      v27 = (v24 * sweep.m_flAlpha) + (v1->x * (1.0 - sweep.m_flAlpha));
      v28 = v2->y * sweep.m_flAlpha;
      v29 = sweep.m_flAlpha * v2->z;
      sweep_proxy.m_nVertexCount = hull->m_Vertices.m_nCount;
      v36 = v27;
      v37 = v28 + v25;
      hullb = v29 + v26;
      SetIdentityMatrix(&sweep_xform);
      sweep_xform.m_flMatVal[2][3] = hullb;
      sweep_xform.m_flMatVal[0][3] = v36;
      sweep_xform.m_flMatVal[1][3] = v37;
      CGamePhysicsQueryInterface::LinearCast(
        &xform2,
        this,
        v1,
        v2,
        &sweep_xform,
        &sweep_proxy,
        flBackOffDistance,
        &sweep);
      m_hBody = xform2.m_hBody;
      retstr->m_vHitPoint.x = xform2.m_vHitPoint.x;
      v31 = xform2.m_vHitPoint.y;
      retstr->m_hBody = m_hBody;
      m_hShape = xform2.m_hShape;
      retstr->m_vHitPoint.y = v31;
      retstr->m_vHitPoint.z = xform2.m_vHitPoint.z;
      v33 = xform2.m_vHitNormal.x;
      retstr->m_hShape = m_hShape;
      v34 = *&xform2.m_flAlpha;
      retstr->m_vHitNormal.x = v33;
      retstr->m_vHitNormal.y = xform2.m_vHitNormal.y;
      v35 = xform2.m_vHitNormal.z;
      *&retstr->m_flAlpha = v34;
      retstr->m_vHitNormal.z = v35;
    }
  }
  return retstr;
}


// CGamePhysicsQueryInterface::LinearCast  (line 1143, @0x00000000020aab00, libserver.so)  // inlines: CGJKShapeProxy, CLinearSweepResult, CSweepResult, CTransform, GetBool, GetInt, Init, QuaternionAligned, SetOrigin, SetToIdentity, UpdateEntitiesBeforeQuery, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::SweepShape, Backoff, SetIdentityMatrix, CGamePhysicsQueryInterface::LinearCast
CLinearSweepResult *__fastcall CGamePhysicsQueryInterface::LinearCast(
        CLinearSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const v1,
        const Vector *const v2,
        const RnSphere_t *const sphere,
        CGameQueryAttributes *pFilter,
        float flBackOffDistance)
{
  __int64 v12; // rcx
  vec_t z; // edx
  vec_t v14; // xmm0_4
  vec_t v15; // xmm1_4
  int y_low; // xmm2_4
  vec_t v17; // xmm1_4
  vec_t v18; // xmm4_4
  vec_t v19; // xmm5_4
  vec_t v20; // xmm6_4
  IVPhysics2World *m_pWorld; // rsi
  float x; // xmm5_4
  float y; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  void (__fastcall *v27)(CLinearSweepResult *, IVPhysics2World *, matrix3x4_t *, const RnSphere_t *const, CGJKShapeProxy *, CGameQueryAttributes *, _DWORD); // rbx
  float v28; // xmm0_4
  vec_t v29; // xmm2_4
  IPhysicsBody *m_hBody; // rdx
  vec_t v31; // xmm0_4
  IPhysicsShape *m_hShape; // rdx
  vec_t v33; // xmm0_4
  __int64 v34; // rdx
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm4_4
  IPhysicsBody *v38; // rdx
  vec_t v39; // xmm0_4
  IPhysicsShape *v40; // rdx
  vec_t v41; // xmm0_4
  __int64 v42; // rdx
  vec_t v43; // xmm0_4
  float v44; // [rsp+10h] [rbp-100h]
  float v45; // [rsp+14h] [rbp-FCh]
  float v46; // [rsp+30h] [rbp-E0h]
  CSweepResult sweep; // [rsp+40h] [rbp-D0h] BYREF
  CGJKShapeProxy sweep_proxy; // [rsp+60h] [rbp-B0h] BYREF
  matrix3x4_t sweep_xform; // [rsp+80h] [rbp-90h] BYREF
  CLinearSweepResult xform2[2]; // [rsp+B0h] [rbp-60h] BYREF

  retstr->m_hBody = 0;
  retstr->m_hShape = 0;
  retstr->m_flAlpha = 1.0;
  retstr->m_nTriangle = -1;
  v12 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&retstr->m_vHitPoint.x = *&vec3_origin.x;
  retstr->m_vHitPoint.z = z;
  retstr->m_vHitNormal.z = z;
  *&retstr->m_vHitNormal.x = v12;
  UpdateDirtySpatialPartitionEntities();
  if ( phys_specialized_linear_sweep.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pWorld = this->m_pWorld;
    x = v1->x;
    y = v1->y;
    v25 = v2->x;
    v26 = v2->y - y;
    v27 = *(*this->m_pWorld + 1024LL);
    v28 = v2->z - v1->z;
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v1->z);
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(y), LODWORD(x));
    *(&sweep_proxy.m_nVertexCount + 1) = v26;
    *&sweep_proxy.m_pVertexBuffer = v28;
    *&sweep_proxy.m_nVertexCount = v25 - x;
    v29 = quat_identity.y;
    *&sweep_xform.m_flMatVal[1][2] = *&quat_identity.z;
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(LODWORD(v29), LODWORD(quat_identity.x));
    v27(xform2, m_pWorld, &sweep_xform, sphere, &sweep_proxy, pFilter, 0);
    m_hBody = xform2[0].m_hBody;
    retstr->m_vHitPoint.x = xform2[0].m_vHitPoint.x;
    retstr->m_vHitPoint.y = xform2[0].m_vHitPoint.y;
    v31 = xform2[0].m_vHitPoint.z;
    retstr->m_hBody = m_hBody;
    m_hShape = xform2[0].m_hShape;
    retstr->m_vHitPoint.z = v31;
    retstr->m_vHitNormal.x = xform2[0].m_vHitNormal.x;
    v33 = xform2[0].m_vHitNormal.y;
    retstr->m_hShape = m_hShape;
    v34 = *&xform2[0].m_flAlpha;
    retstr->m_vHitNormal.y = v33;
    retstr->m_vHitNormal.z = xform2[0].m_vHitNormal.z;
    *&retstr->m_flAlpha = v34;
    Backoff(retstr, v1, v2, flBackOffDistance);
  }
  else
  {
    v14 = v2->z;
    v15 = v2->y;
    *&xform2[0].m_hBody = v2->x;
    xform2[0].m_hShape = LODWORD(v14);
    y_low = LODWORD(quat_identity.y);
    *(&xform2[0].m_hBody + 1) = v15;
    v17 = quat_identity.z;
    v18 = v1->z;
    xform2[0].m_vHitPoint.y = quat_identity.w;
    v19 = v1->y;
    v20 = v1->x;
    xform2[0].m_flAlpha = quat_identity.x;
    xform2[0].m_nTriangle = y_low;
    xform2[0].m_vHitPoint.x = v17;
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v19), LODWORD(v20));
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v18);
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(y_low, LODWORD(quat_identity.x));
    *&sweep_xform.m_flMatVal[1][2] = __PAIR64__(LODWORD(xform2[0].m_vHitPoint.y), LODWORD(v17));
    CGamePhysicsQueryInterface::SweepShape(&sweep, this, &sweep_xform, xform2, sphere, pFilter, 0);
    if ( sweep.m_flAlpha < 1.0 )
    {
      v35 = v2->x;
      sweep_proxy.m_pVertexBuffer = &sphere->m_vCenter;
      v36 = v1->x;
      sweep_proxy.m_nVertexCount = 1;
      v37 = v1->y;
      sweep_proxy.m_flScale = 1.0;
      v44 = (v35 * sweep.m_flAlpha) + (v36 * (1.0 - sweep.m_flAlpha));
      v45 = (v2->y * sweep.m_flAlpha) + (v37 * (1.0 - sweep.m_flAlpha));
      v46 = (sweep.m_flAlpha * v2->z) + ((1.0 - sweep.m_flAlpha) * v1->z);
      SetIdentityMatrix(&sweep_xform);
      sweep_xform.m_flMatVal[2][3] = v46;
      sweep_xform.m_flMatVal[0][3] = v44;
      sweep_xform.m_flMatVal[1][3] = v45;
      CGamePhysicsQueryInterface::LinearCast(
        xform2,
        this,
        v1,
        v2,
        &sweep_xform,
        &sweep_proxy,
        flBackOffDistance,
        &sweep);
      v38 = xform2[0].m_hBody;
      retstr->m_vHitPoint.x = xform2[0].m_vHitPoint.x;
      v39 = xform2[0].m_vHitPoint.y;
      retstr->m_hBody = v38;
      v40 = xform2[0].m_hShape;
      retstr->m_vHitPoint.y = v39;
      retstr->m_vHitPoint.z = xform2[0].m_vHitPoint.z;
      v41 = xform2[0].m_vHitNormal.x;
      retstr->m_hShape = v40;
      v42 = *&xform2[0].m_flAlpha;
      retstr->m_vHitNormal.x = v41;
      retstr->m_vHitNormal.y = xform2[0].m_vHitNormal.y;
      v43 = xform2[0].m_vHitNormal.z;
      *&retstr->m_flAlpha = v42;
      retstr->m_vHitNormal.z = v43;
    }
  }
  return retstr;
}


// CGamePhysicsQueryInterface::LinearCast  (line 1176, @0x00000000020ab010, libserver.so)  // inlines: CGJKShapeProxy, CLinearSweepResult, CSweepResult, CTransform, GetBool, GetInt, Init, QuaternionAligned, SetOrigin, SetToIdentity, UpdateEntitiesBeforeQuery, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::SweepShape, Backoff, SetIdentityMatrix, CGamePhysicsQueryInterface::LinearCast
CLinearSweepResult *__fastcall CGamePhysicsQueryInterface::LinearCast(
        CLinearSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const v1,
        const Vector *const v2,
        const RnCapsule_t *const capsule,
        CGameQueryAttributes *pFilter,
        float flBackOffDistance)
{
  __int64 v12; // rcx
  vec_t z; // edx
  vec_t v14; // xmm0_4
  vec_t v15; // xmm1_4
  int y_low; // xmm2_4
  vec_t v17; // xmm1_4
  vec_t v18; // xmm4_4
  vec_t v19; // xmm5_4
  vec_t v20; // xmm6_4
  IVPhysics2World *m_pWorld; // rsi
  float x; // xmm5_4
  float y; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  void (__fastcall *v27)(CLinearSweepResult *, IVPhysics2World *, matrix3x4_t *, const RnCapsule_t *const, CGJKShapeProxy *, CGameQueryAttributes *, _DWORD); // rbx
  float v28; // xmm0_4
  vec_t v29; // xmm2_4
  IPhysicsBody *m_hBody; // rdx
  vec_t v31; // xmm0_4
  IPhysicsShape *m_hShape; // rdx
  vec_t v33; // xmm0_4
  __int64 v34; // rdx
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm4_4
  IPhysicsBody *v38; // rdx
  vec_t v39; // xmm0_4
  IPhysicsShape *v40; // rdx
  vec_t v41; // xmm0_4
  __int64 v42; // rdx
  vec_t v43; // xmm0_4
  float v44; // [rsp+10h] [rbp-100h]
  float v45; // [rsp+14h] [rbp-FCh]
  float v46; // [rsp+30h] [rbp-E0h]
  CSweepResult sweep; // [rsp+40h] [rbp-D0h] BYREF
  CGJKShapeProxy sweep_proxy; // [rsp+60h] [rbp-B0h] BYREF
  matrix3x4_t sweep_xform; // [rsp+80h] [rbp-90h] BYREF
  CLinearSweepResult xform2[2]; // [rsp+B0h] [rbp-60h] BYREF

  retstr->m_hBody = 0;
  retstr->m_hShape = 0;
  retstr->m_flAlpha = 1.0;
  retstr->m_nTriangle = -1;
  v12 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&retstr->m_vHitPoint.x = *&vec3_origin.x;
  retstr->m_vHitPoint.z = z;
  *&retstr->m_vHitNormal.x = v12;
  retstr->m_vHitNormal.z = z;
  UpdateDirtySpatialPartitionEntities();
  if ( phys_specialized_linear_sweep.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pWorld = this->m_pWorld;
    x = v1->x;
    y = v1->y;
    v25 = v2->x;
    v26 = v2->y - y;
    v27 = *(*this->m_pWorld + 1040LL);
    v28 = v2->z - v1->z;
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v1->z);
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(y), LODWORD(x));
    *(&sweep_proxy.m_nVertexCount + 1) = v26;
    *&sweep_proxy.m_pVertexBuffer = v28;
    *&sweep_proxy.m_nVertexCount = v25 - x;
    v29 = quat_identity.y;
    *&sweep_xform.m_flMatVal[1][2] = *&quat_identity.z;
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(LODWORD(v29), LODWORD(quat_identity.x));
    v27(xform2, m_pWorld, &sweep_xform, capsule, &sweep_proxy, pFilter, 0);
    m_hBody = xform2[0].m_hBody;
    retstr->m_vHitPoint.x = xform2[0].m_vHitPoint.x;
    retstr->m_vHitPoint.y = xform2[0].m_vHitPoint.y;
    v31 = xform2[0].m_vHitPoint.z;
    retstr->m_hBody = m_hBody;
    m_hShape = xform2[0].m_hShape;
    retstr->m_vHitPoint.z = v31;
    retstr->m_vHitNormal.x = xform2[0].m_vHitNormal.x;
    v33 = xform2[0].m_vHitNormal.y;
    retstr->m_hShape = m_hShape;
    v34 = *&xform2[0].m_flAlpha;
    retstr->m_vHitNormal.y = v33;
    retstr->m_vHitNormal.z = xform2[0].m_vHitNormal.z;
    *&retstr->m_flAlpha = v34;
    Backoff(retstr, v1, v2, flBackOffDistance);
  }
  else
  {
    v14 = v2->z;
    v15 = v2->y;
    *&xform2[0].m_hBody = v2->x;
    xform2[0].m_hShape = LODWORD(v14);
    y_low = LODWORD(quat_identity.y);
    *(&xform2[0].m_hBody + 1) = v15;
    v17 = quat_identity.z;
    v18 = v1->z;
    xform2[0].m_vHitPoint.y = quat_identity.w;
    v19 = v1->y;
    v20 = v1->x;
    xform2[0].m_flAlpha = quat_identity.x;
    xform2[0].m_nTriangle = y_low;
    xform2[0].m_vHitPoint.x = v17;
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v19), LODWORD(v20));
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v18);
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(y_low, LODWORD(quat_identity.x));
    *&sweep_xform.m_flMatVal[1][2] = __PAIR64__(LODWORD(xform2[0].m_vHitPoint.y), LODWORD(v17));
    CGamePhysicsQueryInterface::SweepShape(&sweep, this, &sweep_xform, xform2, capsule, pFilter, 0);
    if ( sweep.m_flAlpha < 1.0 )
    {
      v35 = v2->x;
      sweep_proxy.m_pVertexBuffer = capsule;
      v36 = v1->x;
      sweep_proxy.m_nVertexCount = 2;
      v37 = v1->y;
      sweep_proxy.m_flScale = 1.0;
      v44 = (v35 * sweep.m_flAlpha) + (v36 * (1.0 - sweep.m_flAlpha));
      v45 = (v2->y * sweep.m_flAlpha) + (v37 * (1.0 - sweep.m_flAlpha));
      v46 = (sweep.m_flAlpha * v2->z) + ((1.0 - sweep.m_flAlpha) * v1->z);
      SetIdentityMatrix(&sweep_xform);
      sweep_xform.m_flMatVal[2][3] = v46;
      sweep_xform.m_flMatVal[0][3] = v44;
      sweep_xform.m_flMatVal[1][3] = v45;
      CGamePhysicsQueryInterface::LinearCast(
        xform2,
        this,
        v1,
        v2,
        &sweep_xform,
        &sweep_proxy,
        flBackOffDistance,
        &sweep);
      v38 = xform2[0].m_hBody;
      retstr->m_vHitPoint.x = xform2[0].m_vHitPoint.x;
      v39 = xform2[0].m_vHitPoint.y;
      retstr->m_hBody = v38;
      v40 = xform2[0].m_hShape;
      retstr->m_vHitPoint.y = v39;
      retstr->m_vHitPoint.z = xform2[0].m_vHitPoint.z;
      v41 = xform2[0].m_vHitNormal.x;
      retstr->m_hShape = v40;
      v42 = *&xform2[0].m_flAlpha;
      retstr->m_vHitNormal.x = v41;
      retstr->m_vHitNormal.y = xform2[0].m_vHitNormal.y;
      v43 = xform2[0].m_vHitNormal.z;
      *&retstr->m_flAlpha = v42;
      retstr->m_vHitNormal.z = v43;
    }
  }
  return retstr;
}


// CGamePhysicsQueryInterface::LinearCast  (line 1209, @0x00000000020ab4b0, libserver.so)  // inlines: Base, CGJKShapeProxy, CLinearSweepResult, CSweepResult, CTransform, GetBool, GetInt, GetRawPtr, Init, QuaternionAligned, ResolveOffset, SetOrigin, SetToIdentity, UpdateEntitiesBeforeQuery, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::SweepShape, Backoff, SetIdentityMatrix, CGamePhysicsQueryInterface::LinearCast
CLinearSweepResult *__fastcall CGamePhysicsQueryInterface::LinearCast(
        CLinearSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const v1,
        const Vector *const v2,
        const RnHull_t *const hull,
        CGameQueryAttributes *pFilter,
        float flBackOffDistance)
{
  __int64 v12; // rcx
  vec_t z; // edx
  vec_t v14; // xmm1_4
  vec_t v15; // xmm2_4
  vec_t w; // xmm0_4
  vec_t v17; // xmm1_4
  int y_low; // xmm2_4
  vec_t v19; // xmm4_4
  vec_t v20; // xmm5_4
  vec_t v21; // xmm6_4
  IVPhysics2World *m_pWorld; // rsi
  float x; // xmm5_4
  float y; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  void (__fastcall *v28)(CLinearSweepResult *, IVPhysics2World *, matrix3x4_t *, const RnHull_t *const, CGJKShapeProxy *, CGameQueryAttributes *, _DWORD); // r12
  float v29; // xmm0_4
  vec_t v30; // xmm2_4
  IPhysicsBody *m_hBody; // rdx
  vec_t v32; // xmm0_4
  IPhysicsShape *m_hShape; // rdx
  vec_t v34; // xmm0_4
  __int64 v35; // rdx
  __int64 m_nOffset; // rcx
  const Vector *v37; // rdx
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm4_4
  float v41; // xmm1_4
  IPhysicsBody *v42; // rdx
  vec_t v43; // xmm0_4
  IPhysicsShape *v44; // rdx
  vec_t v45; // xmm0_4
  __int64 v46; // rdx
  vec_t v47; // xmm0_4
  float v48; // [rsp+10h] [rbp-100h]
  float v49; // [rsp+14h] [rbp-FCh]
  float v50; // [rsp+30h] [rbp-E0h]
  CSweepResult sweep; // [rsp+40h] [rbp-D0h] BYREF
  CGJKShapeProxy sweep_proxy; // [rsp+60h] [rbp-B0h] BYREF
  matrix3x4_t sweep_xform; // [rsp+80h] [rbp-90h] BYREF
  CLinearSweepResult xform2[2]; // [rsp+B0h] [rbp-60h] BYREF

  retstr->m_hBody = 0;
  retstr->m_hShape = 0;
  retstr->m_flAlpha = 1.0;
  retstr->m_nTriangle = -1;
  v12 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&retstr->m_vHitPoint.x = *&vec3_origin.x;
  retstr->m_vHitPoint.z = z;
  retstr->m_vHitNormal.z = z;
  *&retstr->m_vHitNormal.x = v12;
  UpdateDirtySpatialPartitionEntities();
  if ( phys_specialized_linear_sweep.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pWorld = this->m_pWorld;
    x = v1->x;
    y = v1->y;
    v26 = v2->x;
    v27 = v2->y - y;
    v28 = *(*this->m_pWorld + 1056LL);
    v29 = v2->z - v1->z;
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v1->z);
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(y), LODWORD(x));
    *(&sweep_proxy.m_nVertexCount + 1) = v27;
    *&sweep_proxy.m_pVertexBuffer = v29;
    *&sweep_proxy.m_nVertexCount = v26 - x;
    v30 = quat_identity.y;
    *&sweep_xform.m_flMatVal[1][2] = *&quat_identity.z;
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(LODWORD(v30), LODWORD(quat_identity.x));
    v28(xform2, m_pWorld, &sweep_xform, hull, &sweep_proxy, pFilter, 0);
    m_hBody = xform2[0].m_hBody;
    retstr->m_vHitPoint.x = xform2[0].m_vHitPoint.x;
    retstr->m_vHitPoint.y = xform2[0].m_vHitPoint.y;
    v32 = xform2[0].m_vHitPoint.z;
    retstr->m_hBody = m_hBody;
    m_hShape = xform2[0].m_hShape;
    retstr->m_vHitPoint.z = v32;
    retstr->m_vHitNormal.x = xform2[0].m_vHitNormal.x;
    v34 = xform2[0].m_vHitNormal.y;
    retstr->m_hShape = m_hShape;
    v35 = *&xform2[0].m_flAlpha;
    retstr->m_vHitNormal.y = v34;
    retstr->m_vHitNormal.z = xform2[0].m_vHitNormal.z;
    *&retstr->m_flAlpha = v35;
    Backoff(retstr, v1, v2, flBackOffDistance);
  }
  else
  {
    v14 = v2->y;
    v15 = v2->x;
    xform2[0].m_hShape = LODWORD(v2->z);
    w = quat_identity.w;
    xform2[0].m_hBody = __PAIR64__(LODWORD(v14), LODWORD(v15));
    v17 = quat_identity.z;
    y_low = LODWORD(quat_identity.y);
    v19 = v1->z;
    xform2[0].m_vHitPoint.y = w;
    v20 = v1->y;
    v21 = v1->x;
    xform2[0].m_flAlpha = quat_identity.x;
    xform2[0].m_nTriangle = y_low;
    xform2[0].m_vHitPoint.x = v17;
    *&sweep_xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v20), LODWORD(v21));
    *&sweep_xform.m_flMatVal[0][2] = LODWORD(v19);
    *&sweep_xform.m_flMatVal[1][0] = __PAIR64__(y_low, LODWORD(quat_identity.x));
    *&sweep_xform.m_flMatVal[1][2] = __PAIR64__(LODWORD(w), LODWORD(v17));
    CGamePhysicsQueryInterface::SweepShape(&sweep, this, &sweep_xform, xform2, hull, pFilter, 0);
    if ( sweep.m_flAlpha < 1.0 )
    {
      m_nOffset = hull->m_Vertices.m_nOffset;
      v37 = 0;
      if ( m_nOffset != 0 )
        v37 = (&hull->m_Vertices + m_nOffset);
      sweep_proxy.m_pVertexBuffer = v37;
      v38 = v2->x;
      sweep_proxy.m_flScale = 1.0;
      v39 = v1->x * (1.0 - sweep.m_flAlpha);
      v40 = v1->y * (1.0 - sweep.m_flAlpha);
      v41 = (1.0 - sweep.m_flAlpha) * v1->z;
      sweep_proxy.m_nVertexCount = hull->m_Vertices.m_nCount;
      v48 = (v38 * sweep.m_flAlpha) + v39;
      v49 = (v2->y * sweep.m_flAlpha) + v40;
      v50 = (sweep.m_flAlpha * v2->z) + v41;
      SetIdentityMatrix(&sweep_xform);
      sweep_xform.m_flMatVal[2][3] = v50;
      sweep_xform.m_flMatVal[0][3] = v48;
      sweep_xform.m_flMatVal[1][3] = v49;
      CGamePhysicsQueryInterface::LinearCast(
        xform2,
        this,
        v1,
        v2,
        &sweep_xform,
        &sweep_proxy,
        flBackOffDistance,
        &sweep);
      v42 = xform2[0].m_hBody;
      retstr->m_vHitPoint.x = xform2[0].m_vHitPoint.x;
      v43 = xform2[0].m_vHitPoint.y;
      retstr->m_hBody = v42;
      v44 = xform2[0].m_hShape;
      retstr->m_vHitPoint.y = v43;
      retstr->m_vHitPoint.z = xform2[0].m_vHitPoint.z;
      v45 = xform2[0].m_vHitNormal.x;
      retstr->m_hShape = v44;
      v46 = *&xform2[0].m_flAlpha;
      retstr->m_vHitNormal.x = v45;
      retstr->m_vHitNormal.y = xform2[0].m_vHitNormal.y;
      v47 = xform2[0].m_vHitNormal.z;
      *&retstr->m_flAlpha = v46;
      retstr->m_vHitNormal.z = v47;
    }
  }
  return retstr;
}


// CGamePhysicsQueryInterface::LinearCast  (line 1242, @0x00000000020a9f00, libserver.so)  // inlines: Base, CGJKCapsuleProxy, CGJKShapeProxy, CGJKSphereProxy, CLinearSweepResult, CSweepResult, DotProduct, FastSqrt, GetPtr, GetRawPtr, GetTriangle, Normalized, ResolveOffset, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, fpmax, operator*, operator+, operator-, operator/=, operator=, operator[]
// calls: Distance, VectorNormalize
// callers: CGamePhysicsQueryInterface::LinearCast
// local variable allocation has failed, the output may be wrong!
CLinearSweepResult *__fastcall CGamePhysicsQueryInterface::LinearCast(
        CLinearSweepResult *__return_ptr retstr,
        const CGamePhysicsQueryInterface *const this,
        const Vector *const v1,
        const Vector *const v2,
        const matrix3x4_t *const sweep_xform,
        const CGJKShapeProxy *const sweep_proxy,
        float flBackOffDistance,
        const CSweepResult *const sweep)
{
  float x; // xmm4_4
  float y; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  __int64 v14; // rdi
  vec_t z; // esi
  float v16; // xmm7_4
  IPhysicsBody *m_hBody; // r12
  IPhysicsShape *m_hShape; // r15
  double v19; // xmm0_8
  double v20; // xmm1_8
  int v21; // eax
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  float v28; // xmm4_4
  double v30; // xmm0_8
  float v31; // xmm1_4
  __int64 v32; // rcx
  __int64 v33; // rdx
  char *v34; // rsi
  char *v35; // rdi
  __int64 v36; // rax
  int *v37; // rdx
  float *v38; // rcx
  float v39; // xmm8_4
  vec_t v40; // xmm6_4
  __int64 v41; // rcx
  char *v42; // rsi
  float v43; // xmm7_4
  float v44; // xmm6_4
  float v45; // xmm8_4
  float *v46; // rax
  vec_t v47; // xmm5_4
  vec_t v48; // xmm1_4
  vec_t v49; // xmm0_4
  vec_t v50; // xmm0_4
  __int64 v51; // rdx
  __int64 v52; // rcx
  float v53; // eax
  float *v54; // rax
  double v55; // xmm0_8
  vec_t v56; // xmm1_4
  float v57; // xmm7_4
  float v58; // xmm9_4
  double v59; // xmm0_8
  int v60; // xmm1_4
  double v61; // xmm0_8
  vec_t v62; // xmm1_4
  float v63; // [rsp-Ch] [rbp-13Ch]
  float v65; // [rsp-4h] [rbp-134h]
  _BYTE sweep_xforma[12]; // [rsp+10h] [rbp-120h]
  const matrix3x4_t *sweep_xformc; // [rsp+10h] [rbp-120h]
  const matrix3x4_t *sweep_xformb; // [rsp+10h] [rbp-120h]
  const matrix3x4_t *sweep_xform_4; // [rsp+14h] [rbp-11Ch]
  float vDirectiona; // [rsp+18h] [rbp-118h]
  float vDirection; // [rsp+18h] [rbp-118h]
  int vDirection_4; // [rsp+1Ch] [rbp-114h]
  float vDirection_8; // [rsp+20h] [rbp-110h]
  __int64 nTriangle; // [rsp+24h] [rbp-10Ch]
  int nTrianglea; // [rsp+24h] [rbp-10Ch]
  float nTriangleb; // [rsp+24h] [rbp-10Ch]
  float nTrianglec; // [rsp+24h] [rbp-10Ch]
  __int64 flHitTime; // [rsp+28h] [rbp-108h]
  __int64 flHitTimea; // [rsp+28h] [rbp-108h]
  float pPhysicsMesh; // [rsp+30h] [rbp-100h]
  const IPhysicsMesh *pPhysicsMesha; // [rsp+30h] [rbp-100h]
  const IPhysicsMesh *pPhysicsMeshb; // [rsp+30h] [rbp-100h]
  const IPhysicsMesh *pPhysicsMeshc; // [rsp+30h] [rbp-100h]
  const IPhysicsMesh *pPhysicsMeshd; // [rsp+30h] [rbp-100h]
  _BYTE pMesh[24]; // [rsp+38h] [rbp-F8h] OVERLAPPED BYREF
  Vector vCapsuleCenter2; // [rsp+50h] [rbp-E0h] BYREF
  float v89; // [rsp+5Ch] [rbp-D4h]
  CGJKShapeProxy shape_proxy; // [rsp+60h] [rbp-D0h]
  float v91; // [rsp+78h] [rbp-B8h] BYREF
  float v92; // [rsp+7Ch] [rbp-B4h]
  DistanceQueryResult_t query; // [rsp+80h] [rbp-B0h] BYREF
  matrix3x4_t shape_transform; // [rsp+A0h] [rbp-90h] BYREF
  Vector vTriangle[3]; // [rsp+D0h] [rbp-60h] BYREF

  x = v2->x;
  retstr->m_hBody = 0;
  y = v2->y;
  retstr->m_hShape = 0;
  v11 = x - v1->x;
  retstr->m_nTriangle = -1;
  v12 = y - v1->y;
  v13 = v2->z - v1->z;
  retstr->m_flAlpha = 1.0;
  v14 = *&vec3_origin.x;
  z = vec3_origin.z;
  *&retstr->m_vHitPoint.x = *&vec3_origin.x;
  retstr->m_vHitPoint.z = z;
  *&retstr->m_vHitNormal.x = v14;
  retstr->m_vHitNormal.z = z;
  v16 = fsqrt(((v11 * v11) + (v12 * v12)) + (v13 * v13));
  v65 = v16;
  if ( v16 > 0.0 )
  {
    v11 = v11 * (1.0 / v16);
    v12 = v12 * (1.0 / v16);
    v13 = v13 * (1.0 / v16);
  }
  m_hBody = sweep->m_hBody;
  *sweep_xforma = v11;
  *&sweep_xforma[4] = __PAIR64__(LODWORD(v13), LODWORD(v12));
  m_hShape = sweep->m_hShape;
  vDirection_8 = sweep->m_flAlpha;
  (*(*sweep->m_hBody + 416LL))(&query.m_flDistance, sweep->m_hBody);
  nTriangle = *&vec3_origin.x;
  pPhysicsMesh = vec3_origin.z;
  vDirection_4 = sweep->m_nTriangle;
  if ( (*(*m_hShape + 40LL))(m_hShape) == 3 )
  {
    flHitTime = (*(*m_hShape + 72LL))(m_hShape);
    pPhysicsMesha = (*(*flHitTime + 16LL))(flHitTime);
    v30 = (*(*flHitTime + 24LL))(flHitTime);
    v32 = 0;
    v33 = *(pPhysicsMesha + 10);
    if ( v33 != 0 )
      v32 = pPhysicsMesha + v33 + 40;
    v34 = pPhysicsMesha + 32;
    v35 = 0;
    v36 = *(pPhysicsMesha + 8);
    v37 = (v32 + 12LL * vDirection_4);
    if ( v36 != 0 )
      v35 = &v34[v36];
    v38 = &v35[12 * *v37];
    v39 = *v38 * *&v30;
    v40 = v38[2] * v31;
    shape_transform.m_flMatVal[2][3] = v38[1] * *(&v30 + 1);
    shape_transform.m_flMatVal[2][2] = v39;
    vTriangle[0].x = v40;
    v41 = v37[1];
    if ( v36 != 0 )
    {
      v42 = &v34[v36];
      v54 = &v42[12 * v41];
      v43 = v54[1];
      v44 = v54[2];
      v45 = *v54;
    }
    else
    {
      v42 = 0;
      v43 = *(&loc_2 + 12 * v41 + 2);
      v44 = *(&stru_8.gap0 + 3 * v41);
      v45 = *(12 * v41);
    }
    vTriangle[0].z = v43 * *(&v30 + 1);
    vTriangle[1].x = v44 * v31;
    vTriangle[0].y = v45 * *&v30;
    v46 = &v42[12 * v37[2]];
    v47 = *(&v30 + 1) * v46[1];
    v48 = v31 * v46[2];
    v49 = *&v30 * *v46;
    LODWORD(vCapsuleCenter2.z) = 3;
    vTriangle[1].z = v47;
    vTriangle[2].x = v48;
    vTriangle[1].y = v49;
    *&shape_proxy.m_nVertexCount = &shape_transform.m_flMatVal[2][2];
    LODWORD(shape_proxy.m_pVertexBuffer) = 1065353216;
    Distance(&v91, sweep_xform, sweep_proxy, &query.m_flDistance, &vCapsuleCenter2.z, 32);
    nTriangle = *&query.m_vPoint1.y;
    pPhysicsMesh = query.m_vPoint2.x;
    vCapsuleCenter2.x = query.m_vPoint1.x - query.m_vPoint2.x;
    *&pMesh[16] = v91 - query.m_vPoint1.y;
    *&pMesh[20] = v92 - query.m_vPoint1.z;
    VectorNormalize(&pMesh[16]);
    v27 = *&pMesh[16];
    v26 = *&pMesh[20];
    v25 = vCapsuleCenter2.x;
    v22 = *&sweep_xforma[8];
    v23 = *&sweep_xforma[4];
    v24 = *sweep_xforma;
  }
  else
  {
    v21 = (*(*m_hShape + 40LL))(m_hShape, v19, v20, *&sweep_xforma[8], *&sweep_xforma[4], *sweep_xforma);
    v22 = *&sweep_xforma[8];
    v23 = *&sweep_xforma[4];
    v24 = *sweep_xforma;
    if ( v21 == 1 )
    {
      v63 = *sweep_xforma;
      sweep_xformb = *&sweep_xforma[4];
      pPhysicsMeshd = (*(*m_hShape + 56LL))(m_hShape);
      v59 = (*(*pPhysicsMeshd + 16LL))(pPhysicsMeshd);
      *&pMesh[8] = v60;
      *pMesh = v59;
      v61 = (*(*pPhysicsMeshd + 24LL))(pPhysicsMeshd);
      vCapsuleCenter2.x = v62;
      *&pMesh[16] = v61;
      nTrianglec = (*(*pPhysicsMeshd + 32LL))(pPhysicsMeshd);
      *&vTriangle[0].x = &vTriangle[1];
      LODWORD(shape_transform.m_flMatVal[2][2]) = 2;
      vTriangle[1] = *pMesh;
      vTriangle[0].z = 1.0;
      *&vTriangle[2].x = *&pMesh[16];
      vTriangle[2].z = vCapsuleCenter2.x;
      Distance(&v91, sweep_xform, sweep_proxy, &query.m_flDistance, &shape_transform.m_flMatVal[2][2], 32);
      *&pPhysicsMeshd = query.m_vPoint1.y;
      HIDWORD(nTriangle) = LODWORD(query.m_vPoint1.z);
      vDirection = query.m_vPoint2.x;
      v89 = v92 - query.m_vPoint1.z;
      *&shape_proxy.m_nVertexCount = query.m_vPoint1.x - query.m_vPoint2.x;
      vCapsuleCenter2.z = v91 - query.m_vPoint1.y;
      VectorNormalize(&vCapsuleCenter2.z);
      v27 = vCapsuleCenter2.z;
      v26 = v89;
      v25 = *&shape_proxy.m_nVertexCount;
      v57 = nTrianglec * *&shape_proxy.m_nVertexCount;
      v58 = *(&nTriangle + 1) + (nTrianglec * v89);
      *&nTriangle = *&pPhysicsMeshd + (nTrianglec * vCapsuleCenter2.z);
LABEL_23:
      *(&nTriangle + 1) = v58;
      v22 = *(&sweep_xformb + 1);
      v23 = *&sweep_xformb;
      v24 = v63;
      pPhysicsMesh = vDirection + v57;
      goto LABEL_8;
    }
    if ( v21 != 2 )
    {
      if ( v21 != 0 )
      {
        v25 = pPhysicsMesh;
        v26 = *(&nTriangle + 1);
        v27 = *&nTriangle;
        goto LABEL_8;
      }
      sweep_xformb = *&sweep_xforma[4];
      v63 = v24;
      pPhysicsMeshc = (*(*m_hShape + 48LL))(m_hShape);
      v55 = (*(*pPhysicsMeshc + 16LL))(pPhysicsMeshc);
      vCapsuleCenter2.x = v56;
      *&pMesh[16] = v55;
      nTriangleb = (*(*pPhysicsMeshc + 24LL))(pPhysicsMeshc);
      *&vTriangle[0].x = &vTriangle[1];
      LODWORD(shape_transform.m_flMatVal[2][2]) = 1;
      *&vTriangle[1].x = *&pMesh[16];
      vTriangle[0].z = 1.0;
      vTriangle[1].z = vCapsuleCenter2.x;
      Distance(&v91, sweep_xform, sweep_proxy, &query.m_flDistance, &shape_transform.m_flMatVal[2][2], 32);
      *&pPhysicsMeshc = query.m_vPoint1.y;
      HIDWORD(nTriangle) = LODWORD(query.m_vPoint1.z);
      vDirection = query.m_vPoint2.x;
      v89 = v92 - query.m_vPoint1.z;
      *&shape_proxy.m_nVertexCount = query.m_vPoint1.x - query.m_vPoint2.x;
      vCapsuleCenter2.z = v91 - query.m_vPoint1.y;
      VectorNormalize(&vCapsuleCenter2.z);
      v27 = vCapsuleCenter2.z;
      v26 = v89;
      v25 = *&shape_proxy.m_nVertexCount;
      v57 = nTriangleb * *&shape_proxy.m_nVertexCount;
      v58 = *(&nTriangle + 1) + (nTriangleb * v89);
      *&nTriangle = *&pPhysicsMeshc + (nTriangleb * vCapsuleCenter2.z);
      goto LABEL_23;
    }
    sweep_xform_4 = *sweep_xforma;
    nTrianglea = LODWORD(v22);
    flHitTimea = (*(*m_hShape + 64LL))(m_hShape);
    pPhysicsMeshb = (*(*flHitTimea + 16LL))(flHitTimea);
    (*(*flHitTimea + 24LL))(flHitTimea);
    v51 = 0;
    v52 = *(pPhysicsMeshb + 4);
    if ( v52 != 0 )
      v51 = pPhysicsMeshb + v52 + 16;
    v53 = *(pPhysicsMeshb + 5);
    *&query.m_vPoint1.x = v51;
    sweep_xformc = sweep_xform_4;
    vDirectiona = *&nTrianglea;
    v91 = v53;
    query.m_vPoint1.z = v50;
    Distance(&shape_transform.m_flMatVal[2][2], sweep_xform, sweep_proxy, &query.m_flDistance, &v91, 32);
    nTriangle = *&vTriangle[0].y;
    pPhysicsMesh = vTriangle[1].x;
    v89 = shape_transform.m_flMatVal[2][3] - vTriangle[0].z;
    *&shape_proxy.m_nVertexCount = vTriangle[0].x - vTriangle[1].x;
    vCapsuleCenter2.z = shape_transform.m_flMatVal[2][2] - vTriangle[0].y;
    VectorNormalize(&vCapsuleCenter2.z);
    v27 = vCapsuleCenter2.z;
    v26 = v89;
    v25 = *&shape_proxy.m_nVertexCount;
    v22 = vDirectiona;
    v23 = *(&sweep_xformc + 1);
    v24 = *&sweep_xformc;
  }
LABEL_8:
  v28 = ((v24 * v27) + (v23 * v26)) + (v22 * v25);
  if ( v28 < 0.0 )
    vDirection_8 = fmaxf(0.0, ((sweep->m_flAlpha * v65) + (flBackOffDistance / v28)) / v65);
  retstr->m_hBody = m_hBody;
  retstr->m_hShape = m_hShape;
  retstr->m_flAlpha = vDirection_8;
  retstr->m_vHitNormal.x = v27;
  LODWORD(retstr->m_vHitPoint.x) = nTriangle;
  retstr->m_nTriangle = vDirection_4;
  retstr->m_vHitPoint.y = *(&nTriangle + 1);
  retstr->m_vHitPoint.z = pPhysicsMesh;
  retstr->m_vHitNormal.y = v26;
  retstr->m_vHitNormal.z = v25;
  return retstr;
}


// CGamePhysicsQueryInterface::SphereCastMultiple  (line 1367, @0x00000000020e1b80, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, UpdateEntitiesBeforeQuery, VectorSubtract, operator-, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::ConvertTraceList, CUtlMemory<PhysicsTrace_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
__int64 __fastcall CGamePhysicsQueryInterface::SphereCastMultiple(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        float flRadius,
        CGameQueryAttributes *pTraceFilter,
        CGameTraceList *const hitBuffer)
{
  IVPhysics2World *m_pWorld; // rdi
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm3_4
  void (__fastcall *v16)(IVPhysics2World *, CTraceVector *, const Vector *const, Vector *, CGameQueryAttributes *, float); // rax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm2_4
  unsigned int m_Size; // ebx
  uint32 v20; // edx
  Vector v24; // [rsp+10h] [rbp-2060h] BYREF
  CTraceVector out; // [rsp+20h] [rbp-2050h] BYREF
  unsigned __int64 v26; // [rsp+2038h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_pWorld = this->m_pWorld;
  out.m_Size = 0;
  x = vEnd->x;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  y = vEnd->y;
  out.m_Memory.m_nAllocationCount = 128;
  z = vEnd->z;
  out.m_Memory.m_nGrowSize = 0x80000000;
  v14 = z - vStart->z;
  v15 = x - vStart->x;
  v16 = *(*m_pWorld + 1000LL);
  v24.y = y - vStart->y;
  v24.z = v14;
  v24.x = v15;
  v16(m_pWorld, &out, vStart, &v24, pTraceFilter, flRadius);
  v17 = vEnd->z - vStart->z;
  v18 = vEnd->x - vStart->x;
  v24.y = vEnd->y - vStart->y;
  v24.z = v17;
  v24.x = v18;
  CGamePhysicsQueryInterface::ConvertTraceList(this, hitBuffer, vStart, &v24, &out);
  out.m_Size = 0;
  m_Size = hitBuffer->m_list.m_Size;
  v20 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v20 == 0 )
      CUtlMemory<PhysicsTrace_t,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v20 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return m_Size;
}


// CGamePhysicsQueryInterface::EntitiesInBox  (line 1388, @0x00000000020daca0, libserver.so)  // inlines: AABB_t, AddResult, AddToTail, CEntityHandle, COverlapHit, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<COverlapHit>, Element, FromKey, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, HeapSort<COverlapHit, RemoveDuplicates(COverlapList&)::__lambda11>, HeapSort<COverlapList, RemoveDuplicates(COverlapList&)::__lambda11>, IndexToIdentity, Init, LengthSqr, LookupEntity, QueryBox, Ray_t, RemoveDuplicates, RnCollisionAttr_t, SetShapeAttributes, UpdateEntitiesBeforeQuery, VectorAdd, VectorAligned, VectorSubtract, operator CBaseEntity*, operator*=, operator=, operator[], ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, Swap<COverlapHit>, RemoveDuplicates<COverlapList, RemoveDuplicates(COverlapList&)::__lambda12>, IsPointInBounds, CPhysicsGameSystem::ShouldHitQuery, CHitboxSystem::OverlapHitboxes, ConvertOverlapMultiple, CUtlVectorBase<IPhysicsShape*, CUtlMemoryFixedGrowable<IPhysicsShape*, 128ul, int> >::~CUtlVectorBase, CUtlMemory<COverlapHit, int>::Grow, _Unwind_Resume, __stack_chk_fail
// callers: UTIL_EntitiesInBox, CGamePhysicsQueryInterface::EnumerateElementsInBox, CBaseCombatCharacter::FindHealthItem, CBaseCombatCharacter::FindMissTarget, CEnvShake::ApplyShake, CFire::Update, CBreakable::ResetOnGroundFlags, CPhysicsPushedEntities::GenerateBlockingEntityList
// globals: CEntityHandle::gm_pEntityList
int __fastcall CGamePhysicsQueryInterface::EntitiesInBox(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        CGameQueryAttributes *const filter,
        OverlapTest_t nTest,
        COverlapList *const results)
{
  __int64 m_Size; // rsi
  RnQueryObjectSet_0 m_nObjectSetMask; // r15d
  int v13; // r13d
  int v14; // r14d
  COverlapHit *m_pMemory; // r12
  __int64 i; // rsi
  int v17; // eax
  int v18; // r15d
  COverlapHit *v19; // rdi
  __int64 v20; // rax
  int v21; // r13d
  COverlapHit *v22; // r15
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rdi
  uint32 v26; // edx
  COverlapHit *v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v31; // r14
  int v32; // r15d
  vec_t v33; // eax
  CEntityIdentity *v34; // rdx
  char *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  char *v40; // rax
  VectorAligned *v41; // rax
  float v42; // xmm12_4
  float y; // xmm10_4
  float v44; // xmm11_4
  float v45; // xmm5_4
  float z; // xmm4_4
  float v47; // xmm9_4
  float v48; // xmm8_4
  float v49; // xmm7_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  IVPhysics2World *m_pWorld; // rdi
  vec_t x; // xmm0_4
  void (__fastcall *v55)(IVPhysics2World *, CQueryResult *, Ray_t *, CGameQueryAttributes *const, _QWORD); // rax
  int v56; // [rsp+4h] [rbp-4BCh]
  Ray_t ray; // [rsp+20h] [rbp-4A0h] BYREF
  CQueryResult out; // [rsp+70h] [rbp-450h] BYREF
  unsigned __int64 v61; // [rsp+488h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_nObjectSetMask = filter->m_nObjectSetMask;
  if ( (m_nObjectSetMask & 3) != 0 )
  {
    m_pWorld = this->m_pWorld;
    out.m_Size = 0;
    out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
    x = vMins->x;
    out.m_Memory.m_nAllocationCount = 128;
    out.m_Memory.m_nGrowSize = 0x80000000;
    v55 = *(*m_pWorld + 1184LL);
    ray.m_Start.x = x;
    ray.m_Start.y = vMins->y;
    ray.m_Start.z = vMins->z;
    ray.m_Start.w = vMaxs->x;
    ray.m_Delta.x = vMaxs->y;
    ray.m_Delta.y = vMaxs->z;
    v55(m_pWorld, &out, &ray, filter, nTest);
    ConvertOverlapMultiple(results, &out);
    CUtlVectorBase<IPhysicsShape *,CUtlMemoryFixedGrowable<IPhysicsShape *,128ul,int>>::~CUtlVectorBase(&out);
  }
  if ( (filter->m_nInteractsWith & 2) != 0 )
  {
    v42 = vMaxs->x;
    ray.m_Start.w = 0.0;
    y = vMaxs->y;
    ray.m_Delta.w = 0.0;
    v44 = vMins->x;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    v45 = vec3_origin.y;
    ray.m_flRadius = 0.0;
    z = vec3_origin.z;
    v47 = vMins->y;
    v48 = vMaxs->z;
    v49 = vMins->z;
    ray.m_Delta.x = vec3_origin.x - vec3_origin.x;
    ray.m_Delta.y = v45 - v45;
    ray.m_Delta.z = z - z;
    ray.m_Extents.y = (y - v47) * 0.5;
    ray.m_Extents.z = (v48 - v49) * 0.5;
    ray.m_Extents.x = (v42 - v44) * 0.5;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    v50 = (v42 + v44) * 0.5;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    v51 = (y + v47) * 0.5;
    v52 = (v48 + v49) * 0.5;
    ray.m_Start.x = vec3_origin.x + v50;
    ray.m_StartOffset.x = -v50;
    ray.m_StartOffset.y = -v51;
    ray.m_StartOffset.z = -v52;
    ray.m_Start.y = v45 + v51;
    ray.m_Start.z = z + v52;
    CHitboxSystem::OverlapHitboxes(&g_HitboxSystem, &ray, filter, results, 0.03125);
  }
  if ( (m_nObjectSetMask & 4) != 0 )
  {
    m_Size = g_LocatableEntities.m_vPositionList.m_Size;
    if ( g_LocatableEntities.m_vPositionList.m_Size > 0 )
    {
      v31 = 0;
      v32 = 0;
      do
      {
        if ( IsPointInBounds(&g_LocatableEntities.m_vPositionList.m_Memory.m_pMemory[v31], vMins, vMaxs) )
        {
          LODWORD(ray.m_Start.x) = g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory[v31];
          v33 = ray.m_Start.x;
          if ( (LODWORD(ray.m_Start.x) + 2) > 1 )
          {
            m_Size = LOWORD(ray.m_Start.x);
            v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(ray.m_Start.x) >> 9) & 0x3F];
            if ( v34 != 0 )
            {
              m_Size = 120LL * (LOWORD(ray.m_Start.x) & 0x1FF);
              v35 = v34 + m_Size;
              if ( v35 != 0 && LODWORD(ray.m_Start.x) == *(v35 + 4) )
              {
                v36 = *v35;
                if ( v36 != 0 && *(v36 + 528) != 0 )
                {
                  ray.m_Start = *(v36 + 864);
                  *&ray.m_Delta.x = *(v36 + 880);
                  LODWORD(ray.m_Delta.w) = HIDWORD(*(v36 + 888));
                  ray.m_Delta.z = v33;
                  if ( CPhysicsGameSystem::ShouldHitQuery(g_pPhysicsGameSystem, filter, &ray) )
                  {
                    v37 = results->m_list.m_Size;
                    v38 = results->m_list.m_Size;
                    if ( v37 == results->m_list.m_Memory.m_nAllocationCount )
                    {
                      v56 = results->m_list.m_Size;
                      CUtlMemory<COverlapHit,int>::Grow(&results->m_list.m_Memory, 1);
                      v38 = results->m_list.m_Size;
                      v37 = v56;
                    }
                    v39 = v37 << 6;
                    results->m_list.m_Size = v38 + 1;
                    v40 = results->m_list.m_Memory.m_pMemory + v39;
                    if ( v40 != 0 )
                    {
                      *v40 = 0;
                      *(v40 + 1) = 0;
                      *(v40 + 2) = 0;
                      v40[30] = 0;
                      v40[31] = 7;
                      *(v40 + 6) = 0;
                      *(v40 + 14) = 0;
                      v40[56] = 0;
                      v41 = (results->m_list.m_Memory.m_pMemory + v39);
                    }
                    else
                    {
                      v41 = 0;
                    }
                    *v41 = ray.m_Start;
                    v41[1] = ray.m_Delta;
                  }
                }
              }
            }
          }
        }
        ++v32;
        ++v31;
      }
      while ( v32 < g_LocatableEntities.m_vPositionList.m_Size );
    }
  }
  v13 = results->m_list.m_Size;
  v14 = 1;
  m_pMemory = results->m_list.m_Memory.m_pMemory;
  if ( results->m_list.m_Size > 1 )
  {
    do
    {
      for ( i = v14; ; i = v18 )
      {
        v17 = i + 1;
        m_Size = &m_pMemory[i];
        v18 = v17 / 2 - 1;
        v19 = &m_pMemory[v18];
        if ( v19->m_ShapeAttributes.m_nEntityId >= *(m_Size + 24) )
          break;
        Swap<COverlapHit>(v19, m_Size);
        if ( v18 <= 0 )
          break;
      }
      ++v14;
    }
    while ( v14 != v13 );
  }
  v20 = v13;
  v21 = v13 - 1;
  v22 = &m_pMemory[v20 - 1];
  if ( v21 + 1 > 1 )
  {
    while ( 1 )
    {
      v23 = 1;
      Swap<COverlapHit>(m_pMemory, v22);
      v24 = 0;
      v25 = 0;
      if ( v21 > 1 )
        break;
LABEL_22:
      --v21;
      --v22;
      if ( v21 + 1 <= 1 )
        goto LABEL_23;
    }
    while ( 1 )
    {
      v28 = v24 + 2;
      if ( v21 <= v28 )
        break;
      v29 = (v23 + 1LL) << 6;
      m_Size = &m_pMemory[-1] + v29;
      if ( *(m_Size + 24) >= *(&m_pMemory->m_ShapeAttributes.m_nEntityId + v29) )
      {
        v26 = *(m_Size + 24);
LABEL_16:
        v27 = &m_pMemory[v25];
        if ( v26 <= v27->m_ShapeAttributes.m_nEntityId )
          goto LABEL_22;
        goto LABEL_17;
      }
      v23 = v28;
      v27 = &m_pMemory[v25];
      m_Size = &m_pMemory[v28];
      if ( *(m_Size + 24) <= v27->m_ShapeAttributes.m_nEntityId )
        goto LABEL_22;
LABEL_17:
      Swap<COverlapHit>(v27, m_Size);
      v24 = 2 * v23;
      if ( v21 <= 2 * v23 + 1 )
        goto LABEL_22;
      v25 = v23;
      v23 = 2 * v23 + 1;
    }
    m_Size = &m_pMemory[v23];
    v26 = *(m_Size + 24);
    goto LABEL_16;
  }
LABEL_23:
  RemoveDuplicates<COverlapList,RemoveDuplicates(COverlapList&)::{lambda(COverlapHit const&,COverlapHit const&)#2}>(
    results,
    m_Size);
  return results->m_list.m_Size;
}


// CGamePhysicsQueryInterface::EntitiesInSphere  (line 1421, @0x00000000020dbab0, libserver.so)  // inlines: AddResult, AddToTail, CEntityHandle, COverlapHit, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<COverlapHit>, DistToSqr, Element, FromKey, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, HeapSort<COverlapHit, RemoveDuplicates(COverlapList&)::__lambda11>, HeapSort<COverlapList, RemoveDuplicates(COverlapList&)::__lambda11>, IndexToIdentity, LengthSqr, LookupEntity, QuerySphere, RemoveDuplicates, RnCollisionAttr_t, SetShapeAttributes, UpdateEntitiesBeforeQuery, operator CBaseEntity*, operator[], ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, Swap<COverlapHit>, RemoveDuplicates<COverlapList, RemoveDuplicates(COverlapList&)::__lambda12>, CPhysicsGameSystem::ShouldHitQuery, ConvertOverlapMultiple, CUtlVectorBase<IPhysicsShape*, CUtlMemoryFixedGrowable<IPhysicsShape*, 128ul, int> >::~CUtlVectorBase, CUtlMemory<COverlapHit, int>::Grow, _Unwind_Resume, __stack_chk_fail
// callers: CEntitySphereQuery::CEntitySphereQuery, FireSystem_GetFiresInSphere, CPointPush::PushThink, CPhysMagnet::DoMagnetSuck
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CGamePhysicsQueryInterface::EntitiesInSphere(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vCenter,
        float flRadius,
        CGameQueryAttributes *const filter,
        unsigned int nTest,
        COverlapList *const results)
{
  __int64 m_nInteractsAs_low; // rsi
  RnQueryObjectSet_0 m_nObjectSetMask; // r14d
  int v12; // r13d
  int v13; // r14d
  COverlapHit *m_pMemory; // rbx
  __int64 i; // rsi
  int v16; // eax
  int v17; // r15d
  COverlapHit *v18; // rdi
  __int64 v19; // rax
  int v20; // r13d
  COverlapHit *v21; // r15
  int v22; // r14d
  int v23; // eax
  __int64 v24; // rdi
  uint32 v25; // edx
  COverlapHit *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  float v30; // xmm3_4
  __int64 v31; // r14
  int v32; // r15d
  Vector *v33; // rax
  uint32 m_nInteractsAs; // eax
  CEntityIdentity *v35; // rdx
  char *v36; // rdx
  _QWORD *v37; // rdx
  bool ShouldHitQuery; // al
  __int64 m_Size; // rdx
  int v40; // eax
  __int64 v41; // rdx
  char *v42; // rax
  RnCollisionAttr_t *v43; // rax
  IVPhysics2World *m_pWorld; // rdi
  int v46; // [rsp+18h] [rbp-478h]
  float flRadiusb; // [rsp+1Ch] [rbp-474h]
  RnCollisionAttr_t v49; // [rsp+20h] [rbp-470h] BYREF
  CQueryResult out; // [rsp+40h] [rbp-450h] BYREF
  unsigned __int64 v51; // [rsp+458h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_nObjectSetMask = filter->m_nObjectSetMask;
  if ( (m_nObjectSetMask & 3) != 0 )
  {
    m_pWorld = this->m_pWorld;
    out.m_Size = 0;
    out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
    out.m_Memory.m_nAllocationCount = 128;
    out.m_Memory.m_nGrowSize = 0x80000000;
    (*(*m_pWorld + 1176LL))(m_pWorld, &out, vCenter, filter, nTest, flRadius);
    ConvertOverlapMultiple(results, &out);
    CUtlVectorBase<IPhysicsShape *,CUtlMemoryFixedGrowable<IPhysicsShape *,128ul,int>>::~CUtlVectorBase(&out);
  }
  if ( (m_nObjectSetMask & 4) != 0 )
  {
    v30 = flRadius * flRadius;
    if ( g_LocatableEntities.m_vPositionList.m_Size > 0 )
    {
      v31 = 0;
      v32 = 0;
      do
      {
        v33 = &g_LocatableEntities.m_vPositionList.m_Memory.m_pMemory[v31];
        if ( v30 > ((((vCenter->x - v33->x) * (vCenter->x - v33->x)) + ((vCenter->y - v33->y) * (vCenter->y - v33->y)))
                  + ((vCenter->z - v33->z) * (vCenter->z - v33->z))) )
        {
          LODWORD(v49.m_nInteractsAs) = g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory[v31];
          m_nInteractsAs = v49.m_nInteractsAs;
          if ( (LODWORD(v49.m_nInteractsAs) + 2) > 1 )
          {
            m_nInteractsAs_low = LOWORD(v49.m_nInteractsAs);
            v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v49.m_nInteractsAs) >> 9) & 0x3F];
            if ( v35 != 0 )
            {
              m_nInteractsAs_low = 120LL * (v49.m_nInteractsAs & 0x1FF);
              v36 = v35 + m_nInteractsAs_low;
              if ( v36 != 0 && LODWORD(v49.m_nInteractsAs) == *(v36 + 4) )
              {
                v37 = *v36;
                if ( v37 != 0 && v37[66] != 0 )
                {
                  flRadiusb = v30;
                  v49.m_nInteractsAs = v37[108];
                  v49.m_nInteractsWith = v37[109];
                  v49.m_nInteractsExclude = v37[110];
                  *&v49.m_nHierarchyId = HIDWORD(v37[111]);
                  v49.m_nEntityId = m_nInteractsAs;
                  ShouldHitQuery = CPhysicsGameSystem::ShouldHitQuery(g_pPhysicsGameSystem, filter, &v49);
                  v30 = flRadiusb;
                  if ( ShouldHitQuery )
                  {
                    m_Size = results->m_list.m_Size;
                    v40 = results->m_list.m_Size;
                    if ( m_Size == results->m_list.m_Memory.m_nAllocationCount )
                    {
                      v46 = results->m_list.m_Size;
                      CUtlMemory<COverlapHit,int>::Grow(&results->m_list.m_Memory, 1);
                      v40 = results->m_list.m_Size;
                      m_Size = v46;
                      v30 = flRadiusb;
                    }
                    v41 = m_Size << 6;
                    results->m_list.m_Size = v40 + 1;
                    v42 = results->m_list.m_Memory.m_pMemory + v41;
                    if ( v42 != 0 )
                    {
                      *v42 = 0;
                      *(v42 + 1) = 0;
                      *(v42 + 2) = 0;
                      v42[30] = 0;
                      v42[31] = 7;
                      *(v42 + 6) = 0;
                      *(v42 + 14) = 0;
                      v42[56] = 0;
                      v43 = (&results->m_list.m_Memory.m_pMemory->m_ShapeAttributes + v41);
                    }
                    else
                    {
                      v43 = 0;
                    }
                    *v43 = v49;
                  }
                }
              }
            }
          }
        }
        ++v32;
        ++v31;
      }
      while ( v32 < g_LocatableEntities.m_vPositionList.m_Size );
    }
  }
  v12 = results->m_list.m_Size;
  v13 = 1;
  m_pMemory = results->m_list.m_Memory.m_pMemory;
  if ( results->m_list.m_Size > 1 )
  {
    do
    {
      for ( i = v13; ; i = v17 )
      {
        v16 = i + 1;
        m_nInteractsAs_low = &m_pMemory[i];
        v17 = v16 / 2 - 1;
        v18 = &m_pMemory[v17];
        if ( v18->m_ShapeAttributes.m_nEntityId >= *(m_nInteractsAs_low + 24) )
          break;
        Swap<COverlapHit>(v18, m_nInteractsAs_low);
        if ( v17 <= 0 )
          break;
      }
      ++v13;
    }
    while ( v13 != v12 );
  }
  v19 = v12;
  v20 = v12 - 1;
  v21 = &m_pMemory[v19 - 1];
  if ( v20 + 1 > 1 )
  {
    while ( 1 )
    {
      v22 = 1;
      Swap<COverlapHit>(m_pMemory, v21);
      v23 = 0;
      v24 = 0;
      if ( v20 > 1 )
        break;
LABEL_20:
      --v20;
      --v21;
      if ( v20 + 1 <= 1 )
        goto LABEL_21;
    }
    while ( 1 )
    {
      v27 = v23 + 2;
      if ( v20 <= v27 )
        break;
      v28 = (v22 + 1LL) << 6;
      m_nInteractsAs_low = &m_pMemory[-1] + v28;
      if ( *(m_nInteractsAs_low + 24) >= *(&m_pMemory->m_ShapeAttributes.m_nEntityId + v28) )
      {
        v25 = *(m_nInteractsAs_low + 24);
LABEL_14:
        v26 = &m_pMemory[v24];
        if ( v25 <= v26->m_ShapeAttributes.m_nEntityId )
          goto LABEL_20;
        goto LABEL_15;
      }
      v22 = v27;
      v26 = &m_pMemory[v24];
      m_nInteractsAs_low = &m_pMemory[v27];
      if ( *(m_nInteractsAs_low + 24) <= v26->m_ShapeAttributes.m_nEntityId )
        goto LABEL_20;
LABEL_15:
      Swap<COverlapHit>(v26, m_nInteractsAs_low);
      v23 = 2 * v22;
      if ( v20 <= 2 * v22 + 1 )
        goto LABEL_20;
      v24 = v22;
      v22 = 2 * v22 + 1;
    }
    m_nInteractsAs_low = &m_pMemory[v22];
    v25 = *(m_nInteractsAs_low + 24);
    goto LABEL_14;
  }
LABEL_21:
  RemoveDuplicates<COverlapList,RemoveDuplicates(COverlapList&)::{lambda(COverlapHit const&,COverlapHit const&)#2}>(
    results,
    m_nInteractsAs_low);
  return results->m_list.m_Size;
}


// CGamePhysicsQueryInterface::EntitiesAlongRay  (line 1448, @0x00000000020db5f0, libserver.so)  // inlines: AddMultipleToTail, COverlapHit, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<COverlapHit>, ConvertOverlapMultiple, ConvertToExternalMemory, EnsureCount, GrowMemory, GrowVector, HeapSort<COverlapHit, RemoveDuplicates(COverlapList&)::__lambda11>, HeapSort<COverlapList, RemoveDuplicates(COverlapList&)::__lambda11>, InsertMultipleBefore, Purge, Purge_FixedGrowable, RemoveAll, RemoveDuplicates, RnCollisionAttr_t, SetEntityId, SetHitboxHit, SetPhysicsBody, SetShape, SetShapeAttributes, SetSurfaceProperties, UpdateEntitiesBeforeQuery, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CHitboxSystem::OverlapHitboxes, Swap<COverlapHit>, RemoveDuplicates<COverlapList, RemoveDuplicates(COverlapList&)::__lambda12>, CUtlMemory<IPhysicsShape*, int>::Purge, CUtlMemory<COverlapHit, int>::Grow, __stack_chk_fail, CUtlVectorBase<IPhysicsShape*, CUtlMemoryFixedGrowable<IPhysicsShape*, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::EnumerateElementsAlongRay, PerformMeleeAttackTest
int __fastcall CGamePhysicsQueryInterface::EntitiesAlongRay(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        CGameQueryAttributes *const filter,
        COverlapList *const results)
{
  IVPhysics2World *m_pWorld; // rdi
  bool v8; // zf
  __int64 v9; // rax
  COverlapHit *v10; // rsi
  int m_Size; // ebx
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rbx
  int v15; // r14d
  IPhysicsBody *v16; // r13
  uint32 v17; // r15d
  uint64 *v18; // rax
  __int64 v19; // rdx
  COverlapHit *m_pMemory; // rcx
  bool v21; // cc
  int v22; // r13d
  int v23; // r14d
  COverlapHit *v24; // rbx
  __int64 i; // rsi
  int v26; // eax
  int v27; // r15d
  COverlapHit *v28; // rdi
  __int64 v29; // rax
  int v30; // r13d
  COverlapHit *v31; // r14
  int v32; // r15d
  int v33; // eax
  __int64 v34; // rdi
  uint32 m_nEntityId; // edx
  COverlapHit *v36; // rdi
  int v37; // eax
  __int64 v38; // rdx
  int v39; // ebx
  uint32 v40; // edx
  int v42; // r14d
  int m_nAllocationCount; // eax
  __int64 v44; // r13
  int v45; // edx
  char *v46; // rax
  const CPhysSurfaceProperties *v49; // [rsp+18h] [rbp-458h]
  CQueryResult out; // [rsp+20h] [rbp-450h] BYREF
  unsigned __int64 v51; // [rsp+438h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_pWorld = this->m_pWorld;
  v8 = !ray->m_IsRay;
  out.m_Size = 0;
  out.m_Memory.m_nAllocationCount = 128;
  out.m_Memory.m_nGrowSize = 0x80000000;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  v9 = *m_pWorld;
  if ( v8 )
    (*(v9 + 1192))(m_pWorld, &out, ray, &ray->m_Delta, &ray->m_Extents, filter);
  else
    (*(v9 + 1200))(m_pWorld, &out, ray, &ray->m_Delta, filter);
  m_Size = out.m_Size;
  v12 = results->m_list.m_Size;
  v13 = out.m_Size;
  if ( out.m_Size > v12 )
  {
    v42 = out.m_Size - v12;
    if ( out.m_Size != v12 )
    {
      m_nAllocationCount = results->m_list.m_Memory.m_nAllocationCount;
      if ( out.m_Size > m_nAllocationCount )
        CUtlMemory<COverlapHit,int>::Grow(&results->m_list.m_Memory, out.m_Size - m_nAllocationCount);
      v44 = v12 << 6;
      v45 = 0;
      for ( results->m_list.m_Size = m_Size; v42 > v45; v44 += 64 )
      {
        v46 = results->m_list.m_Memory.m_pMemory + v44;
        if ( v46 != 0 )
        {
          *v46 = 0;
          *(v46 + 1) = 0;
          *(v46 + 2) = 0;
          v46[30] = 0;
          v46[31] = 7;
          *(v46 + 6) = 0;
          *(v46 + 14) = 0;
          v46[56] = 0;
        }
        ++v45;
      }
      v13 = out.m_Size;
    }
  }
  v14 = 0;
  v15 = 0;
  if ( v13 > 0 )
  {
    do
    {
      v16 = (*(*out.m_Memory.m_pMemory[v14] + 16LL))(out.m_Memory.m_pMemory[v14]);
      v49 = *((*(*out.m_Memory.m_pMemory[v14] + 88LL))(out.m_Memory.m_pMemory[v14]) + 16);
      v17 = (*(*v16 + 1328LL))(v16);
      v18 = (*(*out.m_Memory.m_pMemory[v14] + 128LL))(out.m_Memory.m_pMemory[v14]);
      v19 = 1 * v14;
      ++v15;
      *(&results->m_list.m_Memory.m_pMemory->m_hBody + v19) = v16;
      *(&results->m_list.m_Memory.m_pMemory->m_hShape + v19) = 0;
      m_pMemory = results->m_list.m_Memory.m_pMemory;
      m_pMemory[v14++].m_ShapeAttributes.m_nInteractsAs = *v18;
      v21 = v15 < out.m_Size;
      *(&m_pMemory->m_ShapeAttributes.m_nInteractsWith + v19) = v18[1];
      v10 = v18[2];
      *(&m_pMemory->m_ShapeAttributes.m_nInteractsExclude + v19) = v10;
      *(&m_pMemory->m_ShapeAttributes.m_nEntityId + v19) = v18[3];
      *(&results->m_list.m_Memory.m_pMemory->m_ShapeAttributes.m_nEntityId + v19) = v17;
      *(&results->m_list.m_Memory.m_pMemory->m_pSurfaceProperties + v19) = v49;
      *(&results->m_list.m_Memory.m_pMemory->m_bHitboxHit + v19) = 0;
    }
    while ( v21 );
  }
  if ( (filter->m_nInteractsWith & 2) != 0 )
    CHitboxSystem::OverlapHitboxes(&g_HitboxSystem, ray, filter, results, 0.03125);
  v22 = results->m_list.m_Size;
  v23 = 1;
  v24 = results->m_list.m_Memory.m_pMemory;
  if ( results->m_list.m_Size > 1 )
  {
    do
    {
      for ( i = v23; ; i = v27 )
      {
        v26 = i + 1;
        v10 = &v24[i];
        v27 = v26 / 2 - 1;
        v28 = &v24[v27];
        if ( v28->m_ShapeAttributes.m_nEntityId >= v10->m_ShapeAttributes.m_nEntityId )
          break;
        Swap<COverlapHit>(v28, v10);
        if ( v27 <= 0 )
          break;
      }
      ++v23;
    }
    while ( v23 != v22 );
  }
  v29 = v22;
  v30 = v22 - 1;
  v31 = &v24[v29 - 1];
  if ( v30 + 1 > 1 )
  {
    while ( 1 )
    {
      v32 = 1;
      Swap<COverlapHit>(v24, v31);
      v33 = 0;
      v34 = 0;
      if ( v30 > 1 )
        break;
LABEL_24:
      --v30;
      --v31;
      if ( v30 + 1 <= 1 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      v37 = v33 + 2;
      if ( v30 <= v37 )
        break;
      v38 = (v32 + 1LL) << 6;
      v10 = (v24 + v38 - 64);
      if ( v10->m_ShapeAttributes.m_nEntityId >= *(&v24->m_ShapeAttributes.m_nEntityId + v38) )
      {
        m_nEntityId = v10->m_ShapeAttributes.m_nEntityId;
LABEL_18:
        v36 = &v24[v34];
        if ( v36->m_ShapeAttributes.m_nEntityId >= m_nEntityId )
          goto LABEL_24;
        goto LABEL_19;
      }
      v32 = v37;
      v36 = &v24[v34];
      v10 = &v24[v37];
      if ( v36->m_ShapeAttributes.m_nEntityId >= v10->m_ShapeAttributes.m_nEntityId )
        goto LABEL_24;
LABEL_19:
      Swap<COverlapHit>(v36, v10);
      v33 = 2 * v32;
      if ( v30 <= 2 * v32 + 1 )
        goto LABEL_24;
      v34 = v32;
      v32 = 2 * v32 + 1;
    }
    v10 = &v24[v32];
    m_nEntityId = v10->m_ShapeAttributes.m_nEntityId;
    goto LABEL_18;
  }
LABEL_25:
  RemoveDuplicates<COverlapList,RemoveDuplicates(COverlapList&)::{lambda(COverlapHit const&,COverlapHit const&)#2}>(
    results,
    v10);
  out.m_Size = 0;
  v39 = results->m_list.m_Size;
  v40 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v40 == 0 )
      CUtlMemory<IPhysicsShape *,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v40 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v39;
}


// CGamePhysicsQueryInterface::CheckOverlap  (line 1474, @0x00000000020aa9b0, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: CBaseEntity::VPhysicsGetAggregate, UpdateDirtySpatialPartitionEntities
// callers: CChangeLevel::InTransitionVolume
bool __fastcall CGamePhysicsQueryInterface::CheckOverlap(
        CGamePhysicsQueryInterface *const this,
        const CBaseEntity *pEntity1,
        const CBaseEntity *pEntity2)
{
  IPhysAggregateInstance *Aggregate; // r12
  IPhysAggregateInstance *v6; // rbx

  if ( pEntity1 == 0 )
    return 0;
  if ( pEntity2 == 0 )
    return 0;
  Aggregate = CBaseEntity::VPhysicsGetAggregate(pEntity1);
  v6 = CBaseEntity::VPhysicsGetAggregate(pEntity2);
  if ( v6 == 0 || Aggregate == 0 )
    return 0;
  UpdateDirtySpatialPartitionEntities();
  return (*(Aggregate->_vptr_IPhysAggregateInstance + 77))(Aggregate, v6);
}


// CGamePhysicsQueryInterface::FilterTraceResults  (line 1500, @0x00000000020e1d60, libserver.so)  // inlines: AddMultipleToTail, CGameTrace, Construct<CGameTrace>, GrowMemory, GrowVector, InsertMultipleBefore, RemoveMultipleFromTail, RnCollisionAttr_t, SetCount, operator=, operator[]
// calls: CUtlMemory<CGameTrace, int>::Grow, CGameTrace::Init
// callers: CGamePhysicsQueryInterface::RaycastMultiple
int __fastcall CGamePhysicsQueryInterface::FilterTraceResults(
        CGamePhysicsQueryInterface *const this,
        CGameTraceList *const results,
        CTraceFilter *pFilter)
{
  __int64 m_Size; // r15
  __int64 v5; // r12
  int v6; // ebx
  int v7; // r14d
  CGameTrace *v8; // rcx
  char v9; // al
  CGameTrace *m_pMemory; // rcx
  CGameTrace *v11; // r8
  vec_t x; // xmm0_4
  CGameTrace *v13; // rcx
  int m_nAllocationCount; // eax
  __int64 v16; // rbx
  CGameTrace_2 *v17; // rdi
  CTraceFilter *v18; // [rsp+8h] [rbp-38h]

  m_Size = results->m_list.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = &results->m_list.m_Memory.m_pMemory[v5];
      if ( v8->m_ShapeAttributes.m_nEntityId == 0x8000 )
        goto LABEL_6;
      if ( v8->m_pEnt != 0 )
        break;
LABEL_10:
      ++v6;
      ++v5;
      if ( v6 >= m_Size )
        goto LABEL_11;
    }
    v18 = pFilter;
    v9 = (*(pFilter->_vptr_CTraceFilter + 2))(pFilter);
    pFilter = v18;
    if ( v9 != 0 )
    {
LABEL_6:
      if ( v7 != v6 )
      {
        m_pMemory = results->m_list.m_Memory.m_pMemory;
        v11 = &m_pMemory[v5];
        x = m_pMemory[v5].startpos.x;
        v13 = &m_pMemory[v7];
        v13->startpos.x = x;
        v13->startpos.y = v11->startpos.y;
        v13->startpos.z = v11->startpos.z;
        v13->endpos.x = v11->endpos.x;
        v13->endpos.y = v11->endpos.y;
        v13->endpos.z = v11->endpos.z;
        v13->plane.normal.x = v11->plane.normal.x;
        v13->plane.normal.y = v11->plane.normal.y;
        v13->plane.normal.z = v11->plane.normal.z;
        v13->plane.dist = v11->plane.dist;
        v13->plane.type = v11->plane.type;
        v13->plane.signbits = v11->plane.signbits;
        *v13->plane.pad = *v11->plane.pad;
        v13->fraction = v11->fraction;
        v13->contents = v11->contents;
        v13->startsolid = v11->startsolid;
        v13->m_pSurfaceProperties = v11->m_pSurfaceProperties;
        v13->m_pEnt = v11->m_pEnt;
        v13->m_pHitbox = v11->m_pHitbox;
        v13->m_hBody = v11->m_hBody;
        v13->m_hShape = v11->m_hShape;
        v13->m_ShapeAttributes.m_nInteractsAs = v11->m_ShapeAttributes.m_nInteractsAs;
        v13->m_ShapeAttributes.m_nInteractsWith = v11->m_ShapeAttributes.m_nInteractsWith;
        v13->m_ShapeAttributes.m_nInteractsExclude = v11->m_ShapeAttributes.m_nInteractsExclude;
        *&v13->m_ShapeAttributes.m_nEntityId = *&v11->m_ShapeAttributes.m_nEntityId;
        v13->boneLocalPos.x = v11->boneLocalPos.x;
        v13->boneLocalPos.y = v11->boneLocalPos.y;
        v13->boneLocalPos.z = v11->boneLocalPos.z;
        v13->boneLocalNormal.x = v11->boneLocalNormal.x;
        v13->boneLocalNormal.y = v11->boneLocalNormal.y;
        v13->boneLocalNormal.z = v11->boneLocalNormal.z;
        v13->m_nFaceIndex = v11->m_nFaceIndex;
        v13->hitboxBoneIndex = v11->hitboxBoneIndex;
        v13->unused0 = v11->unused0;
      }
      ++v7;
    }
    m_Size = results->m_list.m_Size;
    goto LABEL_10;
  }
  v7 = 0;
LABEL_11:
  if ( v7 - m_Size > 0 )
  {
    m_nAllocationCount = results->m_list.m_Memory.m_nAllocationCount;
    if ( m_nAllocationCount < v7 )
      CUtlMemory<CGameTrace,int>::Grow(&results->m_list.m_Memory, v7 - m_nAllocationCount);
    results->m_list.m_Size = v7;
    v16 = m_Size;
    do
    {
      v17 = &results->m_list.m_Memory.m_pMemory[v16];
      if ( v17 != 0 )
      {
        v17->m_ShapeAttributes.m_nInteractsAs = 0;
        v17->m_ShapeAttributes.m_nInteractsWith = 0;
        v17->m_ShapeAttributes.m_nInteractsExclude = 0;
        v17->m_ShapeAttributes.m_nCollisionGroup = 0;
        v17->m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        v17->m_ShapeAttributes.m_nEntityId = 0;
        v17->m_ShapeAttributes.m_nHierarchyId = 0;
        CGameTrace::Init(v17);
      }
      ++v16;
    }
    while ( v16 != m_Size + (v7 - m_Size - 1) + 1 );
  }
  else if ( v7 != m_Size )
  {
    results->m_list.m_Size = v7;
  }
  return v7;
}


// CGamePhysicsQueryInterface::FilterOverlapResults  (line 1523, @0x00000000020da160, libserver.so)  // inlines: AddMultipleToTail, CEntityHandle, COverlapHit, Construct<COverlapHit>, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, GrowMemory, GrowVector, IndexToIdentity, InsertMultipleBefore, LookupEntity, RnCollisionAttr_t, SetCount, operator CBaseEntity*, operator[]
// calls: CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::RemoveMultipleFromTail, CUtlMemory<COverlapHit, int>::Grow
// callers: CPhysicsPushedEntities::GenerateBlockingEntityList
// globals: CEntityHandle::gm_pEntityList
int __fastcall CGamePhysicsQueryInterface::FilterOverlapResults(
        CGamePhysicsQueryInterface *const this,
        COverlapList *const results,
        CTraceFilter *pFilter)
{
  __int64 m_Size; // r15
  __int64 v5; // rbx
  int v6; // r12d
  int v7; // r14d
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 m_nEntityId; // ecx
  COverlapHit *m_pMemory; // rcx
  COverlapHit *v12; // rax
  int m_nAllocationCount; // eax
  __int64 v15; // rdx
  char *v16; // rax
  CEntityIdentity *v17; // rax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v19; // rax
  char v20; // al
  CTraceFilter *v21; // [rsp+8h] [rbp-48h]

  m_Size = results->m_list.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        m_nEntityId = results->m_list.m_Memory.m_pMemory[v5].m_ShapeAttributes.m_nEntityId;
        if ( m_nEntityId != 0x8000 )
          break;
LABEL_9:
        if ( v7 != v6 )
        {
          m_pMemory = results->m_list.m_Memory.m_pMemory;
          v12 = &m_pMemory[v7];
          v12->m_ShapeAttributes.m_nInteractsAs = m_pMemory[v5].m_ShapeAttributes.m_nInteractsAs;
          v12->m_ShapeAttributes.m_nInteractsWith = m_pMemory[v5].m_ShapeAttributes.m_nInteractsWith;
          v12->m_ShapeAttributes.m_nInteractsExclude = m_pMemory[v5].m_ShapeAttributes.m_nInteractsExclude;
          *&v12->m_ShapeAttributes.m_nEntityId = *&m_pMemory[v5].m_ShapeAttributes.m_nEntityId;
          v12->m_pSurfaceProperties = m_pMemory[v5].m_pSurfaceProperties;
          v12->m_hBody = m_pMemory[v5].m_hBody;
          v12->m_hShape = m_pMemory[v5].m_hShape;
          v12->m_bHitboxHit = m_pMemory[v5].m_bHitboxHit;
        }
        ++v7;
LABEL_12:
        m_Size = results->m_list.m_Size;
        ++v6;
        ++v5;
        if ( v6 >= m_Size )
          goto LABEL_13;
      }
      if ( m_nEntityId + 2 > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_nEntityId >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[m_nEntityId & 0x1FF];
          if ( v9 != 0 && m_nEntityId == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          {
            v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_nEntityId >> 9) & 0x3F];
            if ( v17 != 0 )
            {
              m_pInstance = 0;
              v19 = &v17[m_nEntityId & 0x1FF];
              if ( v19 != 0 && m_nEntityId == v19->m_EHandle.m_Index )
                m_pInstance = v19->m_pInstance;
            }
            else
            {
              m_pInstance = 0;
            }
            v21 = pFilter;
            v20 = (*(pFilter->_vptr_CTraceFilter + 2))(pFilter, m_pInstance);
            pFilter = v21;
            if ( v20 == 0 )
              goto LABEL_12;
            goto LABEL_9;
          }
        }
      }
      ++v6;
      ++v5;
      if ( v6 >= m_Size )
        goto LABEL_13;
    }
  }
  v7 = 0;
LABEL_13:
  if ( v7 - m_Size > 0 )
  {
    m_nAllocationCount = results->m_list.m_Memory.m_nAllocationCount;
    if ( m_nAllocationCount < v7 )
      CUtlMemory<COverlapHit,int>::Grow(&results->m_list.m_Memory, v7 - m_nAllocationCount);
    results->m_list.m_Size = v7;
    v15 = m_Size << 6;
    do
    {
      v16 = results->m_list.m_Memory.m_pMemory + v15;
      if ( v16 != 0 )
      {
        *v16 = 0;
        *(v16 + 1) = 0;
        *(v16 + 2) = 0;
        v16[30] = 0;
        v16[31] = 7;
        *(v16 + 6) = 0;
        *(v16 + 14) = 0;
        v16[56] = 0;
      }
      v15 += 64;
    }
    while ( v15 != (m_Size + (v7 - m_Size - 1) + 1) << 6 );
  }
  else if ( v7 != m_Size )
  {
    CUtlVectorBase<COverlapHit,CUtlMemoryFixedGrowable<COverlapHit,64ul,int>>::RemoveMultipleFromTail(
      &results->m_list,
      m_Size - v7);
  }
  return v7;
}


// CGamePhysicsQueryInterface::FilterSweepResults  (line 1545, @0x00000000020e20a0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*, operator[]
// calls: CUtlVectorBase<CSweepResult, CUtlMemoryFixedGrowable<CSweepResult, 128ul, int> >::SetCount
// callers: CGamePhysicsQueryInterface::ProcessSweepResults
// globals: CEntityHandle::gm_pEntityList
int __fastcall CGamePhysicsQueryInterface::FilterSweepResults(
        CGamePhysicsQueryInterface *const this,
        CSweepResultVector *const results,
        CTraceFilter *pFilter)
{
  __int64 v4; // r12
  int v5; // ebx
  int v6; // r13d
  CSweepResult *m_pMemory; // rax
  CSweepResult *v8; // rdx
  HPhysicsBody m_hBody; // rdi
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // r14

  if ( results->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        m_hBody = results->m_Memory.m_pMemory[v4].m_hBody;
        if ( m_hBody == 0 )
          break;
        v10 = (*(*m_hBody + 1328LL))(m_hBody);
        if ( (v10 + 2) <= 1 )
          break;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
        if ( v11 == 0 )
          break;
        v12 = &v11[v10 & 0x1FF];
        if ( v12 == 0 )
          break;
        if ( v10 != v12->m_EHandle.m_Index )
          break;
        m_pInstance = v12->m_pInstance;
        if ( v12->m_pInstance == 0
          || (*(m_pInstance->_vptr_IHandleEntity + 143))(v12->m_pInstance) != 0
          || (*(pFilter->_vptr_CTraceFilter + 2))(pFilter, m_pInstance) != 0 )
        {
          break;
        }
        ++v5;
        ++v4;
        if ( results->m_Size <= v5 )
          goto LABEL_15;
      }
      if ( v6 != v5 )
      {
        m_pMemory = results->m_Memory.m_pMemory;
        v8 = &m_pMemory[v6];
        v8->m_hBody = m_pMemory[v4].m_hBody;
        v8->m_hShape = m_pMemory[v4].m_hShape;
        *&v8->m_flAlpha = *&m_pMemory[v4].m_flAlpha;
      }
      ++v5;
      ++v6;
      ++v4;
    }
    while ( results->m_Size > v5 );
  }
LABEL_15:
  CUtlVectorBase<CSweepResult,CUtlMemoryFixedGrowable<CSweepResult,128ul,int>>::SetCount(results, v6);
  return v6;
}


// CGamePhysicsQueryInterface::FilterLinearSweepResults  (line 1572, @0x00000000020e29b0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*, operator=, operator[]
// calls: CUtlVectorBase<CLinearSweepResult, CUtlMemoryFixedGrowable<CLinearSweepResult, 128ul, int> >::SetCount
// callers: CGamePhysicsQueryInterface::LinearCast
// globals: CEntityHandle::gm_pEntityList
int __fastcall CGamePhysicsQueryInterface::FilterLinearSweepResults(
        CGamePhysicsQueryInterface *const this,
        CLinearSweepResultVector *const results,
        CTraceFilter *pFilter)
{
  __int64 v4; // r12
  int v5; // ebx
  int v6; // r13d
  CLinearSweepResult *m_pMemory; // rcx
  CLinearSweepResult *v8; // rax
  HPhysicsBody m_hBody; // rdi
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // r14

  if ( results->m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        m_hBody = results->m_Memory.m_pMemory[v4].m_hBody;
        if ( m_hBody == 0 )
          break;
        v10 = (*(*m_hBody + 1328LL))(m_hBody);
        if ( (v10 + 2) <= 1 )
          break;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
        if ( v11 == 0 )
          break;
        v12 = &v11[v10 & 0x1FF];
        if ( v12 == 0 )
          break;
        if ( v10 != v12->m_EHandle.m_Index )
          break;
        m_pInstance = v12->m_pInstance;
        if ( v12->m_pInstance == 0
          || (*(m_pInstance->_vptr_IHandleEntity + 143))(v12->m_pInstance) != 0
          || (*(pFilter->_vptr_CTraceFilter + 2))(pFilter, m_pInstance) != 0 )
        {
          break;
        }
        ++v5;
        ++v4;
        if ( results->m_Size <= v5 )
          goto LABEL_15;
      }
      if ( v6 != v5 )
      {
        m_pMemory = results->m_Memory.m_pMemory;
        v8 = &m_pMemory[v6];
        v8->m_hBody = m_pMemory[v4].m_hBody;
        v8->m_hShape = m_pMemory[v4].m_hShape;
        *&v8->m_flAlpha = *&m_pMemory[v4].m_flAlpha;
        v8->m_vHitPoint.x = m_pMemory[v4].m_vHitPoint.x;
        v8->m_vHitPoint.y = m_pMemory[v4].m_vHitPoint.y;
        v8->m_vHitPoint.z = m_pMemory[v4].m_vHitPoint.z;
        v8->m_vHitNormal.x = m_pMemory[v4].m_vHitNormal.x;
        v8->m_vHitNormal.y = m_pMemory[v4].m_vHitNormal.y;
        v8->m_vHitNormal.z = m_pMemory[v4].m_vHitNormal.z;
      }
      ++v5;
      ++v6;
      ++v4;
    }
    while ( results->m_Size > v5 );
  }
LABEL_15:
  CUtlVectorBase<CLinearSweepResult,CUtlMemoryFixedGrowable<CLinearSweepResult,128ul,int>>::SetCount(results, v6);
  return v6;
}


// CGamePhysicsQueryInterface::FilterCollideResults  (line 1599, @0x00000000020e39b0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*, operator=, operator[]
// calls: CUtlVectorBase<CRnPlaneResult, CUtlMemoryFixedGrowable<CRnPlaneResult, 32ul, int> >::SetCount
// globals: CEntityHandle::gm_pEntityList
int __fastcall CGamePhysicsQueryInterface::FilterCollideResults(
        CGamePhysicsQueryInterface *const this,
        PlaneBuffer *const results,
        int nFirstToFilter,
        CTraceFilter *pFilter)
{
  int v5; // r13d
  int v6; // ebx
  __int64 v7; // r12
  CRnPlaneResult *m_pMemory; // rax
  CRnPlaneResult *v9; // rdx
  vec_t x; // xmm0_4
  CRnPlaneResult *v11; // rax
  HPhysicsShape m_hShape; // rdi
  __int64 v13; // rax
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r15

  v5 = nFirstToFilter;
  if ( nFirstToFilter < results->m_Size )
  {
    v6 = nFirstToFilter;
    v7 = nFirstToFilter;
    do
    {
      while ( 1 )
      {
        m_hShape = results->m_Memory.m_pMemory[v7].m_hShape;
        if ( m_hShape == 0 )
          break;
        v13 = (*(*m_hShape + 16LL))(m_hShape);
        if ( v13 == 0 )
          break;
        v14 = (*(*v13 + 1328LL))(v13);
        if ( (v14 + 2) <= 1 )
          break;
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v14 >> 9) & 0x3F];
        if ( v15 == 0 )
          break;
        v16 = &v15[v14 & 0x1FF];
        if ( v16 == 0 )
          break;
        if ( v14 != v16->m_EHandle.m_Index )
          break;
        m_pInstance = v16->m_pInstance;
        if ( v16->m_pInstance == 0
          || (*(m_pInstance->_vptr_IHandleEntity + 143))(v16->m_pInstance) != 0
          || (*(pFilter->_vptr_CTraceFilter + 2))(pFilter, m_pInstance) != 0 )
        {
          break;
        }
        ++v6;
        ++v7;
        if ( results->m_Size <= v6 )
          goto LABEL_16;
      }
      if ( v5 != v6 )
      {
        m_pMemory = results->m_Memory.m_pMemory;
        v9 = &m_pMemory[v7];
        x = m_pMemory[v7].m_Plane.m_vNormal.x;
        v11 = &m_pMemory[v5];
        v11->m_Plane.m_vNormal.x = x;
        v11->m_Plane.m_vNormal.y = v9->m_Plane.m_vNormal.y;
        v11->m_Plane.m_vNormal.z = v9->m_Plane.m_vNormal.z;
        v11->m_Plane.m_flOffset = v9->m_Plane.m_flOffset;
        v11->m_hShape = v9->m_hShape;
      }
      ++v6;
      ++v5;
      ++v7;
    }
    while ( results->m_Size > v6 );
  }
LABEL_16:
  CUtlVectorBase<CRnPlaneResult,CUtlMemoryFixedGrowable<CRnPlaneResult,32ul,int>>::SetCount(results, v5);
  return v5;
}


// CGamePhysicsQueryInterface::GetPointContents  (line 1630, @0x00000000020cf5a0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, EnableInteractsWith, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, UpdateEntitiesBeforeQuery, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CUtlMemory<IPhysicsShape*, int>::Purge, __stack_chk_fail, CUtlVectorBase<IPhysicsShape*, CUtlMemoryFixedGrowable<IPhysicsShape*, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseEntity::HandleShotImpactingWater, CBaseEntity::FireBullets, CBaseCombatCharacter::Weapon_Drop, CEnvSplash::InputSplash, CEnvExplosion::InputExplode, CGameMovement::LadderMove, CGameMovement::GetWaterContentsForPointCached, CGameRules::RadiusDamage, CBaseEntity::UpdateWaterState, UTIL_CheckBottom, UTIL_WaterLevel, UTIL_EntityInSolid (13 total)
uint64 __fastcall CGamePhysicsQueryInterface::GetPointContents(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vAbsPosition,
        uint64 contentsMask)
{
  int v3; // r15d
  IVPhysics2World *m_pWorld; // rdi
  __int64 v7; // r12
  int v8; // ebx
  unsigned int v9; // r13d
  uint64 v10; // r13
  uint32 v11; // edx
  RnQueryAttr_t_0 attr; // [rsp+0h] [rbp-480h] BYREF
  CQueryResult out; // [rsp+30h] [rbp-450h] BYREF
  unsigned __int64 v15; // [rsp+448h] [rbp-38h]

  v3 = contentsMask;
  v15 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_pWorld = this->m_pWorld;
  attr.m_nHierarchyId = 0;
  attr.m_nEntityIdToIgnore = -1;
  attr.m_nInteractsExclude = 0;
  attr.m_nInteractsAs = 0;
  attr.m_nCollisionGroup = 3;
  *(&attr.RnQueryShapeAttr_t + 31) = *(&attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  attr.m_nObjectSetMask = 7;
  attr.m_nInteractsWith = 0x8000;
  out.m_Size = 0;
  out.m_Memory.m_nAllocationCount = 128;
  out.m_Memory.m_nGrowSize = 0x80000000;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  (*(*m_pWorld + 1176LL))(m_pWorld, &out, vAbsPosition, &attr, 1, 0.5);
  if ( out.m_Size <= 0 )
  {
    v10 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      ++v8;
      v9 |= *(*(*out.m_Memory.m_pMemory[v7] + 128LL))(out.m_Memory.m_pMemory[v7]);
      ++v7;
    }
    while ( out.m_Size > v8 );
    v10 = v3 & v9;
  }
  out.m_Size = 0;
  v11 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v11 == 0 )
      CUtlMemory<IPhysicsShape *,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v11 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v10;
}


// CGamePhysicsQueryInterface::GetPointContents_WorldOnly  (line 1656, @0x00000000020cf770, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, EnableInteractsWith, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetObjectSetMask, UpdateEntitiesBeforeQuery, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CUtlMemory<IPhysicsShape*, int>::Purge, __stack_chk_fail, CUtlVectorBase<IPhysicsShape*, CUtlMemoryFixedGrowable<IPhysicsShape*, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
uint64 __fastcall CGamePhysicsQueryInterface::GetPointContents_WorldOnly(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vAbsPosition,
        uint64 nContentsMask)
{
  int v3; // r15d
  IVPhysics2World *m_pWorld; // rdi
  __int64 v7; // r12
  int v8; // ebx
  unsigned int v9; // r13d
  uint64 v10; // r13
  uint32 v11; // edx
  RnQueryAttr_t_0 attr; // [rsp+0h] [rbp-480h] BYREF
  CQueryResult out; // [rsp+30h] [rbp-450h] BYREF
  unsigned __int64 v15; // [rsp+448h] [rbp-38h]

  v3 = nContentsMask;
  v15 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_pWorld = this->m_pWorld;
  attr.m_nHierarchyId = 0;
  attr.m_nEntityIdToIgnore = -1;
  attr.m_nObjectSetMask = 1;
  attr.m_nInteractsExclude = 0;
  attr.m_nCollisionGroup = 3;
  attr.m_nInteractsAs = 0;
  *(&attr.RnQueryShapeAttr_t + 31) = *(&attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  attr.m_nInteractsWith = 0x8000;
  out.m_Size = 0;
  out.m_Memory.m_nAllocationCount = 128;
  out.m_Memory.m_nGrowSize = 0x80000000;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  (*(*m_pWorld + 1176LL))(m_pWorld, &out, vAbsPosition, &attr, 1, 0.5);
  if ( out.m_Size <= 0 )
  {
    v10 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      ++v8;
      v9 |= *(*(*out.m_Memory.m_pMemory[v7] + 128LL))(out.m_Memory.m_pMemory[v7]);
      ++v7;
    }
    while ( out.m_Size > v8 );
    v10 = v3 & v9;
  }
  out.m_Size = 0;
  v11 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v11 == 0 )
      CUtlMemory<IPhysicsShape *,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v11 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v10;
}


// CGamePhysicsQueryInterface::ClipRayToEntity  (line 1682, @0x00000000020ae650, libserver.so)  // inlines: CGameTrace, GetComponent<CHitboxComponent>, RnCollisionAttr_t, RnQueryShapeAttr_t, SetInteractsWith, UpdateEntitiesBeforeQuery, VectorAdd, operator+, operator=, operator[]
// calls: UpdateDirtySpatialPartitionEntities, CGameTrace::Init, CHitboxComponent::TestRay, CBaseEntity::VPhysicsGetAggregate, CGamePhysicsQueryInterface::ClipRayToAggregate
// callers: Script_TraceCollideable, UTIL_TraceModel, UTIL_ClipTraceToPlayers, CMarkupVolume::OverlapsExtent, CChangeLevel::InTransitionVolume, CDOTAGamerules::DoesRayIntersectBadResultPosition, CDOTAGamerules::DoesRayIntersectRoshanPosition, CFuncNavConnectionBlocker::CollideWithRay
void __fastcall CGamePhysicsQueryInterface::ClipRayToEntity(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        uint64 nContentsMask,
        CBaseEntity *pEntity,
        trace_t *pTrace)
{
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  IPhysAggregateInstance *Aggregate; // rax
  uint8 v17; // al
  vec_t v18; // xmm0_4
  uint8 v19; // al
  vec_t v20; // xmm0_4
  __int16 v21; // ax
  vec_t v22; // xmm0_4
  uint64 v23; // rax
  vec_t v24; // xmm0_4
  float v25; // xmm0_4
  const CPhysSurfaceProperties *v26; // rax
  CBaseEntity *v27; // rax
  vec_t v28; // xmm0_4
  const CHitBox *v29; // rax
  vec_t v30; // xmm0_4
  IPhysicsBody *v31; // rax
  vec_t v32; // xmm0_4
  IPhysicsShape *v33; // rax
  CHitboxComponent *v34; // [rsp+8h] [rbp-F8h]
  vec_t v35; // [rsp+14h] [rbp-ECh]
  vec_t v36; // [rsp+18h] [rbp-E8h]
  vec_t v37; // [rsp+1Ch] [rbp-E4h]
  RnQueryShapeAttr_t attr; // [rsp+20h] [rbp-E0h] BYREF
  vec_t v39; // [rsp+40h] [rbp-C0h]
  float v40; // [rsp+44h] [rbp-BCh]
  uint8 v41; // [rsp+48h] [rbp-B8h]
  uint8 v42; // [rsp+49h] [rbp-B7h]
  __int16 v43; // [rsp+4Ah] [rbp-B6h]
  float v44; // [rsp+4Ch] [rbp-B4h]
  uint64 v45; // [rsp+50h] [rbp-B0h]
  char v46; // [rsp+58h] [rbp-A8h]
  const CPhysSurfaceProperties *v47; // [rsp+60h] [rbp-A0h]
  CBaseEntity *v48; // [rsp+68h] [rbp-98h]
  const CHitBox *v49; // [rsp+70h] [rbp-90h]
  IPhysicsBody *v50; // [rsp+78h] [rbp-88h]
  IPhysicsShape *v51; // [rsp+80h] [rbp-80h]
  uint64 v52; // [rsp+88h] [rbp-78h]
  uint64 v53; // [rsp+90h] [rbp-70h]
  uint64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  vec_t v56; // [rsp+A8h] [rbp-58h]
  float v57; // [rsp+ACh] [rbp-54h]
  vec_t v58; // [rsp+B0h] [rbp-50h]
  float v59; // [rsp+B4h] [rbp-4Ch]
  vec_t v60; // [rsp+B8h] [rbp-48h]
  float v61; // [rsp+BCh] [rbp-44h]
  uint v62; // [rsp+C0h] [rbp-40h]
  __int16 v63; // [rsp+C4h] [rbp-3Ch]
  __int16 v64; // [rsp+C6h] [rbp-3Ah]

  UpdateDirtySpatialPartitionEntities();
  CGameTrace::Init(pTrace);
  v10 = ray->m_Start.x + ray->m_Delta.x;
  v11 = ray->m_Start.y + ray->m_Delta.y;
  v12 = ray->m_Start.z + ray->m_Delta.z;
  pTrace->endpos.x = v10;
  pTrace->endpos.y = v11;
  pTrace->endpos.z = v12;
  if ( (nContentsMask & 2) != 0
    && pEntity->m_pCollision != 0
    && HIBYTE(pEntity[1].m_NetworkTransmitComponent.m_PhysicalSpawnGroupHandle) != 0
    && (m_pEntity = pEntity->m_pEntity, m_pInstance = m_pEntity->m_pInstance, m_pEntity->m_pInstance != 0)
    && (v35 = v12,
        v36 = v11,
        v37 = v10,
        (m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset) != 0xFFFF)
    && (v34 = (m_pInstance + m_nBaseOffset), (m_pInstance + m_nBaseOffset) != 0) )
  {
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0x700000000000000LL;
    CGameTrace::Init(&attr);
    if ( CHitboxComponent::TestRay(v34, pEntity, ray, &attr) )
    {
      v17 = v41;
      pTrace->startpos.x = *&attr.m_nInteractsWith;
      v18 = *(&attr.m_nInteractsWith + 1);
      pTrace->plane.type = v17;
      v19 = v42;
      pTrace->startpos.y = v18;
      pTrace->startpos.z = *&attr.m_nInteractsExclude;
      v20 = *(&attr.m_nInteractsExclude + 1);
      pTrace->plane.signbits = v19;
      v21 = v43;
      pTrace->endpos.x = v20;
      pTrace->endpos.y = *&attr.m_nInteractsAs;
      v22 = *(&attr.m_nInteractsAs + 1);
      *pTrace->plane.pad = v21;
      v23 = v45;
      pTrace->endpos.z = v22;
      LODWORD(pTrace->plane.normal.x) = attr.m_nEntityIdToIgnore;
      v24 = *&attr.m_nHierarchyId;
      pTrace->contents = v23;
      LOBYTE(v23) = v46;
      pTrace->plane.normal.y = v24;
      pTrace->plane.normal.z = v39;
      v25 = v40;
      pTrace->startsolid = v23;
      v26 = v47;
      pTrace->plane.dist = v25;
      pTrace->fraction = v44;
      pTrace->m_pSurfaceProperties = v26;
      v27 = v48;
      pTrace->boneLocalPos.x = v56;
      v28 = v57;
      pTrace->m_pEnt = v27;
      v29 = v49;
      pTrace->boneLocalPos.y = v28;
      pTrace->boneLocalPos.z = v58;
      v30 = v59;
      pTrace->m_pHitbox = v29;
      v31 = v50;
      pTrace->boneLocalNormal.x = v30;
      pTrace->boneLocalNormal.y = v60;
      v32 = v61;
      pTrace->m_hBody = v31;
      v33 = v51;
      pTrace->boneLocalNormal.z = v32;
      pTrace->m_hShape = v33;
      pTrace->m_ShapeAttributes.m_nInteractsAs = v52;
      pTrace->m_ShapeAttributes.m_nInteractsWith = v53;
      pTrace->m_ShapeAttributes.m_nInteractsExclude = v54;
      *&pTrace->m_ShapeAttributes.m_nEntityId = v55;
      pTrace->m_nFaceIndex = v62;
      pTrace->hitboxBoneIndex = v63;
      pTrace->unused0 = v64;
    }
    else
    {
      pTrace->endpos.x = v37;
      pTrace->endpos.y = v36;
      pTrace->endpos.z = v35;
    }
  }
  else
  {
    Aggregate = CBaseEntity::VPhysicsGetAggregate(pEntity);
    if ( Aggregate != 0 )
    {
      attr.m_nInteractsExclude = 0;
      attr.m_nInteractsAs = 0;
      attr.m_nHierarchyId = 0;
      attr.m_nCollisionGroup = 0;
      *(&attr + 31) = *(&attr + 31) & 0xF0 | 9;
      attr.m_nEntityIdToIgnore = -1;
      attr.m_nInteractsWith = nContentsMask;
      CGamePhysicsQueryInterface::ClipRayToAggregate(this, ray, Aggregate, &attr, pTrace);
    }
  }
}


// CGamePhysicsQueryInterface::SweepBody  (line 1717, @0x00000000020aaa20, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CPropVRHand::IsSafeLocationForObject
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepBody(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const HPhysicsBody *const body,
        CGameQueryAttributes *pFilter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1072LL))(retstr, this->m_pWorld, xform1, xform2, body, pFilter, bIgnoreStartInSolid);
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShape  (line 1729, @0x00000000020aaa90, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CGamePhysicsQueryInterface::LinearCast
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepShape(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        CGameQueryAttributes *pFilter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1104LL))(retstr, this->m_pWorld, xform1, xform2, sphere, pFilter, bIgnoreStartInSolid);
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShape  (line 1740, @0x00000000020e22c0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, UpdateEntitiesBeforeQuery, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::SweepShapeMultiple, CGamePhysicsQueryInterface::ProcessSweepResults, CUtlMemory<CSweepResult, int>::Purge, __stack_chk_fail, CUtlVectorBase<CSweepResult, CUtlMemoryFixedGrowable<CSweepResult, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::LinearCast
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepShape(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        CTraceFilter *pFilter,
        bool bIgnoreStartInSolid)
{
  uint32 v11; // eax
  CSweepResultVector sweepResults; // [rsp+20h] [rbp-C50h] BYREF
  unsigned __int64 v16; // [rsp+C38h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  sweepResults.m_Memory.m_pMemory = &sweepResults.m_Memory.m_FixedMemory;
  sweepResults.m_Size = 0;
  sweepResults.m_Memory.m_nAllocationCount = 128;
  sweepResults.m_Memory.m_nGrowSize = 0x80000000;
  CGamePhysicsQueryInterface::SweepShapeMultiple(
    this,
    &sweepResults,
    xform1,
    xform2,
    sphere,
    &pFilter->m_attr,
    bIgnoreStartInSolid);
  CGamePhysicsQueryInterface::ProcessSweepResults(
    retstr,
    this,
    &xform1->m_vPosition,
    &xform2->m_vPosition,
    pFilter,
    &sweepResults);
  sweepResults.m_Size = 0;
  v11 = sweepResults.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sweepResults.m_Memory.m_nAllocationCount < 0
    || sweepResults.m_Memory.m_pMemory == &sweepResults.m_Memory.m_FixedMemory )
  {
    if ( v11 == 0 )
      CUtlMemory<CSweepResult,int>::Purge(&sweepResults.m_Memory);
  }
  else if ( sweepResults.m_Memory.m_pMemory != 0 && v11 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShape  (line 1756, @0x00000000020aaf30, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepShape(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const HPhysicsShape *const shape,
        CGameQueryAttributes *pFilter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1088LL))(retstr, this->m_pWorld, xform1, xform2, shape, pFilter, bIgnoreStartInSolid);
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShape  (line 1768, @0x00000000020aafa0, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CGamePhysicsQueryInterface::LinearCast, CGamePhysicsQueryInterface::SweepCollideable, UTIL_TraceCapsule
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepShape(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        CGameQueryAttributes *pFilter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1128LL))(retstr, this->m_pWorld, xform1, xform2, capsule, pFilter, bIgnoreStartInSolid);
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShape  (line 1780, @0x00000000020e2420, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGamePhysicsQueryInterface::SweepShapeMultiple, CGamePhysicsQueryInterface::ProcessSweepResults, CUtlMemory<CSweepResult, int>::Purge, __stack_chk_fail, CUtlVectorBase<CSweepResult, CUtlMemoryFixedGrowable<CSweepResult, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: UTIL_TraceCapsule, CGamePhysicsQueryInterface::LinearCast
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepShape(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        CTraceFilter *pFilter,
        bool bIgnoreStartInSolid)
{
  uint32 v11; // eax
  CSweepResultVector sweepResults; // [rsp+10h] [rbp-C50h] BYREF
  unsigned __int64 v15; // [rsp+C28h] [rbp-38h]

  sweepResults.m_Size = 0;
  v15 = __readfsqword(0x28u);
  sweepResults.m_Memory.m_nAllocationCount = 128;
  sweepResults.m_Memory.m_pMemory = &sweepResults.m_Memory.m_FixedMemory;
  sweepResults.m_Memory.m_nGrowSize = 0x80000000;
  CGamePhysicsQueryInterface::SweepShapeMultiple(
    this,
    &sweepResults,
    xform1,
    xform2,
    capsule,
    &pFilter->m_attr,
    bIgnoreStartInSolid);
  CGamePhysicsQueryInterface::ProcessSweepResults(
    retstr,
    this,
    &xform1->m_vPosition,
    &xform2->m_vPosition,
    pFilter,
    &sweepResults);
  sweepResults.m_Size = 0;
  v11 = sweepResults.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sweepResults.m_Memory.m_nAllocationCount < 0
    || sweepResults.m_Memory.m_pMemory == &sweepResults.m_Memory.m_FixedMemory )
  {
    if ( v11 == 0 )
      CUtlMemory<CSweepResult,int>::Purge(&sweepResults.m_Memory);
  }
  else if ( sweepResults.m_Memory.m_pMemory != 0 && v11 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShape  (line 1790, @0x00000000020ab440, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CGamePhysicsQueryInterface::LinearCast
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepShape(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const hull,
        CGameQueryAttributes *pFilter,
        bool bIgnoreStartInSolid)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1152LL))(retstr, this->m_pWorld, xform1, xform2, hull, pFilter, bIgnoreStartInSolid);
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShape  (line 1802, @0x00000000020e2840, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, UpdateEntitiesBeforeQuery, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::SweepShapeMultiple, CGamePhysicsQueryInterface::ProcessSweepResults, CUtlMemory<CSweepResult, int>::Purge, __stack_chk_fail, CUtlVectorBase<CSweepResult, CUtlMemoryFixedGrowable<CSweepResult, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::LinearCast
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepShape(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const hull,
        CTraceFilter *pFilter,
        bool bIgnoreStartInSolid)
{
  uint32 v11; // eax
  CSweepResultVector sweepResults; // [rsp+20h] [rbp-C50h] BYREF
  unsigned __int64 v16; // [rsp+C38h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  sweepResults.m_Memory.m_pMemory = &sweepResults.m_Memory.m_FixedMemory;
  sweepResults.m_Size = 0;
  sweepResults.m_Memory.m_nAllocationCount = 128;
  sweepResults.m_Memory.m_nGrowSize = 0x80000000;
  CGamePhysicsQueryInterface::SweepShapeMultiple(
    this,
    &sweepResults,
    xform1,
    xform2,
    hull,
    &pFilter->m_attr,
    bIgnoreStartInSolid);
  CGamePhysicsQueryInterface::ProcessSweepResults(
    retstr,
    this,
    &xform1->m_vPosition,
    &xform2->m_vPosition,
    pFilter,
    &sweepResults);
  sweepResults.m_Size = 0;
  v11 = sweepResults.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sweepResults.m_Memory.m_nAllocationCount < 0
    || sweepResults.m_Memory.m_pMemory == &sweepResults.m_Memory.m_FixedMemory )
  {
    if ( v11 == 0 )
      CUtlMemory<CSweepResult,int>::Purge(&sweepResults.m_Memory);
  }
  else if ( sweepResults.m_Memory.m_pMemory != 0 && v11 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return retstr;
}


// CGamePhysicsQueryInterface::SweepShapeAgainstEntity  (line 1817, @0x00000000020e9550, libserver.so)  // inlines: CGameSweep, GetAggregate, GetSkeletonInstance, UpdateEntitiesBeforeQuery, operator=
// calls: UpdateDirtySpatialPartitionEntities, CSkeletonInstance::SweepShapeAgainstHitboxes, ConvertSweep
void __fastcall CGamePhysicsQueryInterface::SweepShapeAgainstEntity(
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        CGameQueryAttributes *pFilter,
        CBaseEntity *pEntity,
        CGameSweep *const sweep)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  CSkeletonInstance *v16; // rax
  CSweepResult result; // [rsp+10h] [rbp-50h] BYREF

  UpdateDirtySpatialPartitionEntities();
  sweep->m_pEntity = 0;
  x = vec3_origin.x;
  sweep->m_pSurfaceProperties = 0;
  sweep->m_hBody = 0;
  y = vec3_origin.y;
  z = vec3_origin.z;
  sweep->m_vHitPoint.x = x;
  sweep->m_hShape = 0;
  sweep->m_pHitbox = 0;
  sweep->m_nHitboxBone = -1;
  sweep->m_flHitTime = 1.0;
  sweep->m_vHitPoint.y = y;
  sweep->m_vHitPoint.z = z;
  sweep->m_vHitNormal.x = x;
  sweep->m_vHitNormal.y = y;
  sweep->m_vHitNormal.z = z;
  if ( pEntity != 0 )
  {
    m_CBodyComponent = pEntity->m_CBodyComponent;
    if ( m_CBodyComponent != 0 )
    {
      v14 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
      if ( v14 != 0 )
      {
        v15 = *(v14 + 536);
        if ( v15 != 0 )
        {
          v16 = (*(pEntity->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(pEntity->m_CBodyComponent->m_pSceneNode);
          if ( v16 != 0 && (pFilter->m_nInteractsWith & 2) != 0 )
            CSkeletonInstance::SweepShapeAgainstHitboxes(v16, xform1, xform2, sphere, sweep, 0);
          if ( sweep->m_flHitTime >= 1.0 )
          {
            (*(*v15 + 560LL))(&result, v15, xform1, xform2, sphere, pFilter);
            if ( result.m_flAlpha < 1.0 )
              ConvertSweep(sweep, xform1, xform2, sphere, &result);
          }
        }
      }
    }
  }
}


// CGamePhysicsQueryInterface::SweepShapeAgainstEntity  (line 1854, @0x00000000020eada0, libserver.so)  // inlines: CGameSweep, GetAggregate, GetSkeletonInstance, UpdateEntitiesBeforeQuery, operator=
// calls: UpdateDirtySpatialPartitionEntities, CSkeletonInstance::SweepShapeAgainstHitboxes, ConvertSweep
void __fastcall CGamePhysicsQueryInterface::SweepShapeAgainstEntity(
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        CGameQueryAttributes *pFilter,
        CBaseEntity *pEntity,
        CGameSweep *const sweep)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  CSkeletonInstance *v16; // rax
  CSweepResult result; // [rsp+10h] [rbp-50h] BYREF

  UpdateDirtySpatialPartitionEntities();
  sweep->m_pEntity = 0;
  x = vec3_origin.x;
  sweep->m_pSurfaceProperties = 0;
  sweep->m_hBody = 0;
  y = vec3_origin.y;
  z = vec3_origin.z;
  sweep->m_vHitPoint.x = x;
  sweep->m_hShape = 0;
  sweep->m_pHitbox = 0;
  sweep->m_nHitboxBone = -1;
  sweep->m_flHitTime = 1.0;
  sweep->m_vHitPoint.y = y;
  sweep->m_vHitPoint.z = z;
  sweep->m_vHitNormal.x = x;
  sweep->m_vHitNormal.y = y;
  sweep->m_vHitNormal.z = z;
  if ( pEntity != 0 )
  {
    m_CBodyComponent = pEntity->m_CBodyComponent;
    if ( m_CBodyComponent != 0 )
    {
      v14 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
      if ( v14 != 0 )
      {
        v15 = *(v14 + 536);
        if ( v15 != 0 )
        {
          v16 = (*(pEntity->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(pEntity->m_CBodyComponent->m_pSceneNode);
          if ( v16 != 0 && (pFilter->m_nInteractsWith & 2) != 0 )
            CSkeletonInstance::SweepShapeAgainstHitboxes(v16, xform1, xform2, capsule, sweep, 0);
          if ( sweep->m_flHitTime >= 1.0 )
          {
            (*(*v15 + 568LL))(&result, v15, xform1, xform2, capsule, pFilter);
            if ( result.m_flAlpha < 1.0 )
              ConvertSweep(sweep, xform1, xform2, capsule, &result);
          }
        }
      }
    }
  }
}


// CGamePhysicsQueryInterface::SweepShapeAgainstEntity  (line 1891, @0x00000000020ec520, libserver.so)  // inlines: CGameSweep, GetAggregate, GetSkeletonInstance, UpdateEntitiesBeforeQuery, operator=
// calls: UpdateDirtySpatialPartitionEntities, CSkeletonInstance::SweepShapeAgainstHitboxes, ConvertSweep
void __fastcall CGamePhysicsQueryInterface::SweepShapeAgainstEntity(
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const hull,
        CGameQueryAttributes *pFilter,
        CBaseEntity *pEntity,
        CGameSweep *const sweep)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  CSkeletonInstance *v16; // rax
  CSweepResult result; // [rsp+10h] [rbp-50h] BYREF

  UpdateDirtySpatialPartitionEntities();
  sweep->m_pEntity = 0;
  x = vec3_origin.x;
  sweep->m_pSurfaceProperties = 0;
  sweep->m_hBody = 0;
  y = vec3_origin.y;
  z = vec3_origin.z;
  sweep->m_vHitPoint.x = x;
  sweep->m_hShape = 0;
  sweep->m_pHitbox = 0;
  sweep->m_nHitboxBone = -1;
  sweep->m_flHitTime = 1.0;
  sweep->m_vHitPoint.y = y;
  sweep->m_vHitPoint.z = z;
  sweep->m_vHitNormal.x = x;
  sweep->m_vHitNormal.y = y;
  sweep->m_vHitNormal.z = z;
  if ( pEntity != 0 )
  {
    m_CBodyComponent = pEntity->m_CBodyComponent;
    if ( m_CBodyComponent != 0 )
    {
      v14 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
      if ( v14 != 0 )
      {
        v15 = *(v14 + 536);
        if ( v15 != 0 )
        {
          v16 = (*(pEntity->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(pEntity->m_CBodyComponent->m_pSceneNode);
          if ( v16 != 0 && (pFilter->m_nInteractsWith & 2) != 0 )
            CSkeletonInstance::SweepShapeAgainstHitboxes(v16, xform1, xform2, hull, sweep, 0);
          if ( sweep->m_flHitTime >= 1.0 )
          {
            (*(*v15 + 576LL))(&result, v15, xform1, xform2, hull, pFilter);
            if ( result.m_flAlpha < 1.0 )
              ConvertSweep(sweep, xform1, xform2, hull, &result);
          }
        }
      }
    }
  }
}


// CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity  (line 1928, @0x00000000020ab900, libserver.so)  // inlines: GetAggregate, GetSkeletonInstance, UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
bool __fastcall CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity(
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform,
        const RnSphere_t *const sphere,
        CGameQueryAttributes *pFilter,
        const CBaseEntity *pEntity)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v10; // rax
  __int64 v11; // rdi

  UpdateDirtySpatialPartitionEntities();
  return pEntity != 0
      && (m_CBodyComponent = pEntity->m_CBodyComponent) != 0
      && (v10 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode)) != 0
      && (v11 = *(v10 + 536)) != 0
      && (*(*v11 + 592LL))(v11, xform, sphere, pFilter);
}


// CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity  (line 1945, @0x00000000020ab980, libserver.so)  // inlines: GetAggregate, GetSkeletonInstance, UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
bool __fastcall CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity(
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform,
        const RnCapsule_t *const capsule,
        CGameQueryAttributes *pFilter,
        const CBaseEntity *pEntity)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v10; // rax
  __int64 v11; // rdi

  UpdateDirtySpatialPartitionEntities();
  return pEntity != 0
      && (m_CBodyComponent = pEntity->m_CBodyComponent) != 0
      && (v10 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode)) != 0
      && (v11 = *(v10 + 536)) != 0
      && (*(*v11 + 600LL))(v11, xform, capsule, pFilter);
}


// CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity  (line 1962, @0x00000000020aba00, libserver.so)  // inlines: GetAggregate, GetSkeletonInstance, UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
// callers: CNavPhysicsInterface::Nav_CheckAreaOverlappingEntity
bool __fastcall CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity(
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform,
        const RnHull_t *const hull,
        CGameQueryAttributes *pFilter,
        const CBaseEntity *pEntity)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v10; // rax
  __int64 v11; // rdi

  UpdateDirtySpatialPartitionEntities();
  return pEntity != 0
      && (m_CBodyComponent = pEntity->m_CBodyComponent) != 0
      && (v10 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode)) != 0
      && (v11 = *(v10 + 536)) != 0
      && (*(*v11 + 608LL))(v11, xform, hull, pFilter);
}


// CGamePhysicsQueryInterface::ContactPlane  (line 1979, @0x00000000020aba80, libserver.so)  // inlines: CResourceArray, CResourceArrayBase, CTransform, CrossProduct, DotProduct, GetNormal, GetPtr, GetRawPtr, GetTriangle, GetVertex, Init, ResolveOffset, RnHullTriangle_t, RnHull_t, RnPlane_t, V_memset, VectorAdd, VectorAligned, VectorDivide, VectorMax, VectorMin, VectorSubtract, WriteDirect, fpmax, fpmin, memset, operator+, operator-, operator/, operator=, operator[]
// calls: TransformLerp, VectorNormalize
// callers: ConvertSweepToTrace
RnPlane_t __fastcall CGamePhysicsQueryInterface::ContactPlane(
        const CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        const CSweepResult *const result)
{
  float m_flAlpha; // xmm0_4
  HPhysicsShape m_hShape; // r12
  HPhysicsBody m_hBody; // r13
  __int64 v10; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  int *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  float *v21; // rax
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float *v25; // rax
  float v26; // xmm10_4
  float v27; // xmm9_4
  float v28; // xmm8_4
  float *v29; // rax
  float v30; // xmm6_4
  float v31; // xmm12_4
  __int64 v32; // r12
  float y; // [rsp+Ch] [rbp-1F4h]
  float v34; // [rsp+10h] [rbp-1F0h]
  float v1; // [rsp+18h] [rbp-1E8h]
  float v36; // [rsp+30h] [rbp-1D0h]
  float v37; // [rsp+30h] [rbp-1D0h]
  float v38; // [rsp+30h] [rbp-1D0h]
  void (__fastcall *v39)(RnDistanceQueryResult_t *, IVPhysics2 *, CTransform *, __int64, RnHullTriangle_t *, HPhysicsShape); // [rsp+40h] [rbp-1C0h]
  float v40; // [rsp+40h] [rbp-1C0h]
  float v41; // [rsp+40h] [rbp-1C0h]
  void (__fastcall *v42)(RnDistanceQueryResult_t *, IVPhysics2 *, CTransform *, __int64, RnDistanceQueryResult_t *, __int64); // [rsp+40h] [rbp-1C0h]
  float z; // [rsp+40h] [rbp-1C0h]
  float v44; // [rsp+48h] [rbp-1B8h]
  float x; // [rsp+48h] [rbp-1B8h]
  __int64 out; // [rsp+60h] [rbp-1A0h]
  __int64 out_8; // [rsp+68h] [rbp-198h]
  RnDistanceQueryResult_t query_result_0; // [rsp+70h] [rbp-190h] BYREF
  CTransform sphere_xform; // [rsp+90h] [rbp-170h] BYREF
  RnDistanceQueryResult_t query_result; // [rsp+B0h] [rbp-150h] BYREF
  RnHullTriangle_t hull_triangle; // [rsp+D0h] [rbp-130h] BYREF
  RnPlane_t v52; // 0:xmm0_8.8,8:xmm1_8.8

  m_flAlpha = result->m_flAlpha;
  out = 0;
  out_8 = 0;
  m_hShape = result->m_hShape;
  sphere_xform.m_vPosition.w = 0.0;
  m_hBody = result->m_hBody;
  TransformLerp(xform1, xform2, m_flAlpha, &sphere_xform);
  v10 = (*(g_pVPhysics2->_vptr_IAppSystem + 20))(g_pVPhysics2, sphere, 0.0);
  if ( (*(*m_hShape + 40LL))(m_hShape) == 3 )
  {
    v13 = (*(*m_hShape + 72LL))(m_hShape);
    v14 = (*(*v13 + 16LL))(v13);
    v15 = 0;
    v16 = *(v14 + 40);
    if ( v16 != 0 )
      v15 = v14 + v16 + 40;
    v17 = (v15 + 12LL * result->m_nTriangle);
    v18 = *(v14 + 32);
    v19 = *v17;
    if ( v18 != 0 )
    {
      v20 = v14 + v18 + 32;
      v21 = (v20 + 12 * v19);
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v25 = (v20 + 12LL * v17[1]);
      v26 = *v25;
      v27 = v25[1];
      v28 = v25[2];
    }
    else
    {
      v20 = 0;
      v22 = *(12 * v19);
      v23 = *(&loc_2 + 12 * v19 + 2);
      v24 = *(&stru_8.gap0 + 3 * v19);
      v26 = *(12LL * v17[1]);
      v27 = *(&loc_2 + 12 * v17[1] + 2);
      v28 = *(&stru_8.gap0 + 3 * v17[1]);
    }
    v1 = v22;
    v29 = (v20 + 12LL * v17[2]);
    v37 = v23;
    v30 = v29[2];
    v31 = *v29;
    hull_triangle.m_TriangleVertices[2].y = v29[1];
    hull_triangle.m_TriangleVertices[2].z = v30;
    hull_triangle.m_TriangleVertices[2].x = v31;
    hull_triangle.m_TriangleVertices[0].x = v22;
    hull_triangle.m_TriangleVertices[0].y = v23;
    hull_triangle.m_vCentroid.x = ((v26 + v22) + v31) * 0.33333334;
    hull_triangle.m_TriangleVertices[0].z = v24;
    hull_triangle.m_TriangleVertices[1].x = v26;
    hull_triangle.m_TriangleVertices[1].y = v27;
    y = hull_triangle.m_TriangleVertices[2].y;
    hull_triangle.m_TriangleVertices[1].z = v28;
    v34 = v30;
    v41 = v24;
    memset(&hull_triangle.m_Planes, 0, 24);
    hull_triangle.m_vCentroid.y = ((v23 + v27) + hull_triangle.m_TriangleVertices[2].y) * 0.33333334;
    hull_triangle.m_Vertices.m_nOffset = 132;
    hull_triangle.m_Vertices.m_nCount = 3;
    hull_triangle.m_vCentroid.z = ((v28 + v24) + v30) * 0.33333334;
    query_result.m_flDistance = ((v30 - v24) * (v27 - v23))
                              - ((hull_triangle.m_TriangleVertices[2].y - v23) * (v28 - v24));
    query_result.m_vPoint1.x = ((v28 - v24) * (v31 - v22)) - ((v30 - v24) * (v26 - v22));
    query_result.m_vPoint1.y = ((v26 - v22) * (hull_triangle.m_TriangleVertices[2].y - v23))
                             - ((v27 - v23) * (v31 - v22));
    VectorNormalize(&query_result);
    hull_triangle.m_Planes.m_nOffset = 160;
    hull_triangle.m_TriangleEdges[0].m_nNext = 2;
    hull_triangle.m_TriangleEdges[0].m_nTwin = 1;
    hull_triangle.m_TriangleEdges[0].m_nOrigin = 0;
    hull_triangle.m_TriangleEdges[0].m_nFace = 0;
    hull_triangle.m_TrianglePlanes[0].m_vNormal.x = query_result.m_flDistance;
    hull_triangle.m_TrianglePlanes[0].m_vNormal.y = query_result.m_vPoint1.x;
    hull_triangle.m_TrianglePlanes[0].m_vNormal.z = query_result.m_vPoint1.y;
    hull_triangle.m_Planes.m_nCount = 2;
    hull_triangle.m_TriangleEdges[1].m_nNext = 5;
    hull_triangle.m_TriangleEdges[1].m_nTwin = 0;
    hull_triangle.m_TriangleEdges[1].m_nOrigin = 1;
    hull_triangle.m_TriangleEdges[1].m_nFace = 1;
    hull_triangle.m_TriangleEdges[2].m_nNext = 4;
    hull_triangle.m_TriangleEdges[2].m_nTwin = 3;
    hull_triangle.m_TriangleEdges[2].m_nOrigin = 1;
    hull_triangle.m_TriangleEdges[2].m_nFace = 0;
    hull_triangle.m_TrianglePlanes[0].m_flOffset = ((v1 * query_result.m_flDistance) + (v37 * query_result.m_vPoint1.x))
                                                 + (v41 * query_result.m_vPoint1.y);
    hull_triangle.m_TrianglePlanes[1].m_vNormal.x = -query_result.m_flDistance;
    hull_triangle.m_TrianglePlanes[1].m_vNormal.y = -query_result.m_vPoint1.x;
    hull_triangle.m_TrianglePlanes[1].m_vNormal.z = -query_result.m_vPoint1.y;
    hull_triangle.m_TriangleEdges[3].m_nNext = 1;
    hull_triangle.m_TriangleEdges[3].m_nTwin = 2;
    hull_triangle.m_TriangleEdges[3].m_nOrigin = 2;
    hull_triangle.m_TrianglePlanes[1].m_flOffset = ((-query_result.m_flDistance * v1) + (-query_result.m_vPoint1.x * v37))
                                                 + (-query_result.m_vPoint1.y * v41);
    hull_triangle.m_TriangleEdges[3].m_nFace = 1;
    hull_triangle.m_TriangleEdges[4].m_nNext = 0;
    hull_triangle.m_TriangleEdges[4].m_nTwin = 5;
    hull_triangle.m_TriangleEdges[4].m_nOrigin = 2;
    hull_triangle.m_TriangleEdges[4].m_nFace = 0;
    hull_triangle.m_TriangleEdges[5].m_nNext = 3;
    hull_triangle.m_TriangleEdges[5].m_nTwin = 4;
    hull_triangle.m_TriangleEdges[5].m_nOrigin = 0;
    hull_triangle.m_TriangleEdges[5].m_nFace = 1;
    hull_triangle.m_TriangleFaces[0].m_nEdge = 0;
    hull_triangle.m_TriangleFaces[1].m_nEdge = 1;
    hull_triangle.m_Bounds.m_vMinBounds.z = fminf(v41, fminf(v28, v34));
    hull_triangle.m_Edges.m_nOffset = 184;
    hull_triangle.m_Edges.m_nCount = 6;
    hull_triangle.m_Bounds.m_vMinBounds.y = fminf(v37, fminf(v27, y));
    hull_triangle.m_Bounds.m_vMaxBounds.z = fmaxf(v41, fmaxf(v28, v34));
    hull_triangle.m_Faces.m_nOffset = 200;
    hull_triangle.m_Bounds.m_vMinBounds.x = fminf(v1, fminf(v26, v31));
    hull_triangle.m_Bounds.m_vMaxBounds.y = fmaxf(v37, fmaxf(v27, y));
    hull_triangle.m_Bounds.m_vMaxBounds.x = fmaxf(v1, fmaxf(v26, v31));
    hull_triangle.m_Faces.m_nCount = 2;
    v32 = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, &hull_triangle);
    v42 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*m_hBody + 440LL))(&query_result, m_hBody);
    v42(&query_result_0, g_pVPhysics2, &sphere_xform, v10, &query_result, v32);
    if ( query_result_0.m_flDistance != 0.0 )
    {
      x = query_result_0.m_vPoint2.x;
      v38 = query_result_0.m_vPoint2.y;
      z = query_result_0.m_vPoint2.z;
      query_result.m_flDistance = query_result_0.m_vPoint2.x - query_result_0.m_vPoint1.x;
      query_result.m_vPoint1.x = query_result_0.m_vPoint2.y - query_result_0.m_vPoint1.y;
      query_result.m_vPoint1.y = query_result_0.m_vPoint2.z - query_result_0.m_vPoint1.z;
      VectorNormalize(&query_result);
      *&out = -query_result.m_flDistance;
      *(&out + 1) = -query_result.m_vPoint1.x;
      *&out_8 = -query_result.m_vPoint1.y;
      *(&out_8 + 1) = ((-query_result.m_flDistance * x) + (-query_result.m_vPoint1.x * v38))
                    + (-query_result.m_vPoint1.y * z);
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, v32);
  }
  else
  {
    v39 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*m_hBody + 440LL))(&hull_triangle, m_hBody);
    v39(&query_result, g_pVPhysics2, &sphere_xform, v10, &hull_triangle, m_hShape);
    if ( query_result.m_flDistance != 0.0 )
    {
      v44 = query_result.m_vPoint2.x;
      v36 = query_result.m_vPoint2.y;
      v40 = query_result.m_vPoint2.z;
      hull_triangle.m_vCentroid.x = query_result.m_vPoint2.x - query_result.m_vPoint1.x;
      hull_triangle.m_vCentroid.y = query_result.m_vPoint2.y - query_result.m_vPoint1.y;
      hull_triangle.m_vCentroid.z = query_result.m_vPoint2.z - query_result.m_vPoint1.z;
      VectorNormalize(&hull_triangle.m_vCentroid);
      *&out = -hull_triangle.m_vCentroid.x;
      *(&out + 1) = -hull_triangle.m_vCentroid.y;
      *&out_8 = -hull_triangle.m_vCentroid.z;
      *(&out_8 + 1) = ((-hull_triangle.m_vCentroid.x * v44) + (-hull_triangle.m_vCentroid.y * v36))
                    + (-hull_triangle.m_vCentroid.z * v40);
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, v10);
  }
  *&v52.m_vNormal.x = out;
  *&v52.m_vNormal.z = out_8;
  return v52;
}


// CGamePhysicsQueryInterface::ContactPlane  (line 2033, @0x00000000020ac590, libserver.so)  // inlines: CResourceArray, CResourceArrayBase, CTransform, CrossProduct, DotProduct, GetNormal, GetPtr, GetRawPtr, GetTriangle, GetVertex, Init, ResolveOffset, RnHullTriangle_t, RnHull_t, RnPlane_t, V_memset, VectorAdd, VectorAligned, VectorDivide, VectorMax, VectorMin, VectorSubtract, WriteDirect, fpmax, fpmin, memset, operator+, operator-, operator/, operator=, operator[]
// calls: TransformLerp, VectorNormalize
// callers: ConvertSweepToTrace
RnPlane_t __fastcall CGamePhysicsQueryInterface::ContactPlane(
        const CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        const CSweepResult *const result)
{
  float m_flAlpha; // xmm0_4
  HPhysicsShape m_hShape; // r13
  HPhysicsBody m_hBody; // r14
  __int64 v10; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  int *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  float *v21; // rax
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float *v25; // rax
  float v26; // xmm10_4
  float v27; // xmm9_4
  float v28; // xmm8_4
  float *v29; // rax
  float v30; // xmm6_4
  float v31; // xmm12_4
  __int64 v32; // r13
  float y; // [rsp+Ch] [rbp-1F4h]
  float v34; // [rsp+10h] [rbp-1F0h]
  float v1; // [rsp+18h] [rbp-1E8h]
  float v36; // [rsp+30h] [rbp-1D0h]
  float v37; // [rsp+30h] [rbp-1D0h]
  float v38; // [rsp+30h] [rbp-1D0h]
  void (__fastcall *v39)(RnDistanceQueryResult_t *, IVPhysics2 *, CTransform *, __int64, RnHullTriangle_t *, HPhysicsShape); // [rsp+40h] [rbp-1C0h]
  float v40; // [rsp+40h] [rbp-1C0h]
  float v41; // [rsp+40h] [rbp-1C0h]
  void (__fastcall *v42)(RnDistanceQueryResult_t *, IVPhysics2 *, CTransform *, __int64, RnDistanceQueryResult_t *, __int64); // [rsp+40h] [rbp-1C0h]
  float z; // [rsp+40h] [rbp-1C0h]
  float v44; // [rsp+48h] [rbp-1B8h]
  float x; // [rsp+48h] [rbp-1B8h]
  __int64 out; // [rsp+60h] [rbp-1A0h]
  __int64 out_8; // [rsp+68h] [rbp-198h]
  RnDistanceQueryResult_t query_result_0; // [rsp+70h] [rbp-190h] BYREF
  CTransform capsule_xform; // [rsp+90h] [rbp-170h] BYREF
  RnDistanceQueryResult_t query_result; // [rsp+B0h] [rbp-150h] BYREF
  RnHullTriangle_t hull_triangle; // [rsp+D0h] [rbp-130h] BYREF
  RnPlane_t v52; // 0:xmm0_8.8,8:xmm1_8.8

  m_flAlpha = result->m_flAlpha;
  out = 0;
  out_8 = 0;
  m_hShape = result->m_hShape;
  capsule_xform.m_vPosition.w = 0.0;
  m_hBody = result->m_hBody;
  TransformLerp(xform1, xform2, m_flAlpha, &capsule_xform);
  v10 = (*(g_pVPhysics2->_vptr_IAppSystem + 21))(g_pVPhysics2, capsule, &capsule->m_vCenter[1], 0.0);
  if ( (*(*m_hShape + 40LL))(m_hShape) == 3 )
  {
    v13 = (*(*m_hShape + 72LL))(m_hShape);
    v14 = (*(*v13 + 16LL))(v13);
    v15 = 0;
    v16 = *(v14 + 40);
    if ( v16 != 0 )
      v15 = v14 + v16 + 40;
    v17 = (v15 + 12LL * result->m_nTriangle);
    v18 = *(v14 + 32);
    v19 = *v17;
    if ( v18 != 0 )
    {
      v20 = v14 + v18 + 32;
      v21 = (v20 + 12 * v19);
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v25 = (v20 + 12LL * v17[1]);
      v26 = *v25;
      v27 = v25[1];
      v28 = v25[2];
    }
    else
    {
      v20 = 0;
      v22 = *(12 * v19);
      v23 = *(&loc_2 + 12 * v19 + 2);
      v24 = *(&stru_8.gap0 + 3 * v19);
      v26 = *(12LL * v17[1]);
      v27 = *(&loc_2 + 12 * v17[1] + 2);
      v28 = *(&stru_8.gap0 + 3 * v17[1]);
    }
    v1 = v22;
    v29 = (v20 + 12LL * v17[2]);
    v37 = v23;
    v30 = v29[2];
    v31 = *v29;
    hull_triangle.m_TriangleVertices[2].y = v29[1];
    hull_triangle.m_TriangleVertices[2].z = v30;
    hull_triangle.m_TriangleVertices[2].x = v31;
    hull_triangle.m_TriangleVertices[0].x = v22;
    hull_triangle.m_TriangleVertices[0].y = v23;
    hull_triangle.m_vCentroid.x = ((v26 + v22) + v31) * 0.33333334;
    hull_triangle.m_TriangleVertices[0].z = v24;
    hull_triangle.m_TriangleVertices[1].x = v26;
    hull_triangle.m_TriangleVertices[1].y = v27;
    y = hull_triangle.m_TriangleVertices[2].y;
    hull_triangle.m_TriangleVertices[1].z = v28;
    v34 = v30;
    v41 = v24;
    memset(&hull_triangle.m_Planes, 0, 24);
    hull_triangle.m_vCentroid.y = ((v23 + v27) + hull_triangle.m_TriangleVertices[2].y) * 0.33333334;
    hull_triangle.m_Vertices.m_nOffset = 132;
    hull_triangle.m_Vertices.m_nCount = 3;
    hull_triangle.m_vCentroid.z = ((v28 + v24) + v30) * 0.33333334;
    query_result.m_flDistance = ((v30 - v24) * (v27 - v23))
                              - ((hull_triangle.m_TriangleVertices[2].y - v23) * (v28 - v24));
    query_result.m_vPoint1.x = ((v28 - v24) * (v31 - v22)) - ((v30 - v24) * (v26 - v22));
    query_result.m_vPoint1.y = ((v26 - v22) * (hull_triangle.m_TriangleVertices[2].y - v23))
                             - ((v27 - v23) * (v31 - v22));
    VectorNormalize(&query_result);
    hull_triangle.m_Planes.m_nOffset = 160;
    hull_triangle.m_TriangleEdges[0].m_nNext = 2;
    hull_triangle.m_TriangleEdges[0].m_nTwin = 1;
    hull_triangle.m_TriangleEdges[0].m_nOrigin = 0;
    hull_triangle.m_TriangleEdges[0].m_nFace = 0;
    hull_triangle.m_TrianglePlanes[0].m_vNormal.x = query_result.m_flDistance;
    hull_triangle.m_TrianglePlanes[0].m_vNormal.y = query_result.m_vPoint1.x;
    hull_triangle.m_TrianglePlanes[0].m_vNormal.z = query_result.m_vPoint1.y;
    hull_triangle.m_Planes.m_nCount = 2;
    hull_triangle.m_TriangleEdges[1].m_nNext = 5;
    hull_triangle.m_TriangleEdges[1].m_nTwin = 0;
    hull_triangle.m_TriangleEdges[1].m_nOrigin = 1;
    hull_triangle.m_TriangleEdges[1].m_nFace = 1;
    hull_triangle.m_TriangleEdges[2].m_nNext = 4;
    hull_triangle.m_TriangleEdges[2].m_nTwin = 3;
    hull_triangle.m_TriangleEdges[2].m_nOrigin = 1;
    hull_triangle.m_TriangleEdges[2].m_nFace = 0;
    hull_triangle.m_TrianglePlanes[0].m_flOffset = ((v1 * query_result.m_flDistance) + (v37 * query_result.m_vPoint1.x))
                                                 + (v41 * query_result.m_vPoint1.y);
    hull_triangle.m_TrianglePlanes[1].m_vNormal.x = -query_result.m_flDistance;
    hull_triangle.m_TrianglePlanes[1].m_vNormal.y = -query_result.m_vPoint1.x;
    hull_triangle.m_TrianglePlanes[1].m_vNormal.z = -query_result.m_vPoint1.y;
    hull_triangle.m_TriangleEdges[3].m_nNext = 1;
    hull_triangle.m_TriangleEdges[3].m_nTwin = 2;
    hull_triangle.m_TriangleEdges[3].m_nOrigin = 2;
    hull_triangle.m_TrianglePlanes[1].m_flOffset = ((-query_result.m_flDistance * v1) + (-query_result.m_vPoint1.x * v37))
                                                 + (-query_result.m_vPoint1.y * v41);
    hull_triangle.m_TriangleEdges[3].m_nFace = 1;
    hull_triangle.m_TriangleEdges[4].m_nNext = 0;
    hull_triangle.m_TriangleEdges[4].m_nTwin = 5;
    hull_triangle.m_TriangleEdges[4].m_nOrigin = 2;
    hull_triangle.m_TriangleEdges[4].m_nFace = 0;
    hull_triangle.m_TriangleEdges[5].m_nNext = 3;
    hull_triangle.m_TriangleEdges[5].m_nTwin = 4;
    hull_triangle.m_TriangleEdges[5].m_nOrigin = 0;
    hull_triangle.m_TriangleEdges[5].m_nFace = 1;
    hull_triangle.m_TriangleFaces[0].m_nEdge = 0;
    hull_triangle.m_TriangleFaces[1].m_nEdge = 1;
    hull_triangle.m_Bounds.m_vMinBounds.z = fminf(v41, fminf(v28, v34));
    hull_triangle.m_Edges.m_nOffset = 184;
    hull_triangle.m_Edges.m_nCount = 6;
    hull_triangle.m_Bounds.m_vMinBounds.y = fminf(v37, fminf(v27, y));
    hull_triangle.m_Bounds.m_vMaxBounds.z = fmaxf(v41, fmaxf(v28, v34));
    hull_triangle.m_Faces.m_nOffset = 200;
    hull_triangle.m_Bounds.m_vMinBounds.x = fminf(v1, fminf(v26, v31));
    hull_triangle.m_Bounds.m_vMaxBounds.y = fmaxf(v37, fmaxf(v27, y));
    hull_triangle.m_Bounds.m_vMaxBounds.x = fmaxf(v1, fmaxf(v26, v31));
    hull_triangle.m_Faces.m_nCount = 2;
    v32 = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, &hull_triangle);
    v42 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*m_hBody + 440LL))(&query_result, m_hBody);
    v42(&query_result_0, g_pVPhysics2, &capsule_xform, v10, &query_result, v32);
    if ( query_result_0.m_flDistance != 0.0 )
    {
      x = query_result_0.m_vPoint2.x;
      v38 = query_result_0.m_vPoint2.y;
      z = query_result_0.m_vPoint2.z;
      query_result.m_flDistance = query_result_0.m_vPoint2.x - query_result_0.m_vPoint1.x;
      query_result.m_vPoint1.x = query_result_0.m_vPoint2.y - query_result_0.m_vPoint1.y;
      query_result.m_vPoint1.y = query_result_0.m_vPoint2.z - query_result_0.m_vPoint1.z;
      VectorNormalize(&query_result);
      *&out = -query_result.m_flDistance;
      *(&out + 1) = -query_result.m_vPoint1.x;
      *&out_8 = -query_result.m_vPoint1.y;
      *(&out_8 + 1) = ((-query_result.m_flDistance * x) + (-query_result.m_vPoint1.x * v38))
                    + (-query_result.m_vPoint1.y * z);
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, v32);
  }
  else
  {
    v39 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*m_hBody + 440LL))(&hull_triangle, m_hBody);
    v39(&query_result, g_pVPhysics2, &capsule_xform, v10, &hull_triangle, m_hShape);
    if ( query_result.m_flDistance != 0.0 )
    {
      v44 = query_result.m_vPoint2.x;
      v36 = query_result.m_vPoint2.y;
      v40 = query_result.m_vPoint2.z;
      hull_triangle.m_vCentroid.x = query_result.m_vPoint2.x - query_result.m_vPoint1.x;
      hull_triangle.m_vCentroid.y = query_result.m_vPoint2.y - query_result.m_vPoint1.y;
      hull_triangle.m_vCentroid.z = query_result.m_vPoint2.z - query_result.m_vPoint1.z;
      VectorNormalize(&hull_triangle.m_vCentroid);
      *&out = -hull_triangle.m_vCentroid.x;
      *(&out + 1) = -hull_triangle.m_vCentroid.y;
      *&out_8 = -hull_triangle.m_vCentroid.z;
      *(&out_8 + 1) = ((-hull_triangle.m_vCentroid.x * v44) + (-hull_triangle.m_vCentroid.y * v36))
                    + (-hull_triangle.m_vCentroid.z * v40);
    }
  }
  (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, v10);
  *&v52.m_vNormal.x = out;
  *&v52.m_vNormal.z = out_8;
  return v52;
}


// CGamePhysicsQueryInterface::ContactPlane  (line 2088, @0x00000000020ad0a0, libserver.so)  // inlines: CTransform, DotProduct, GetNormal, RnPlane_t, V_memset, VectorAligned, VectorSubtract, memset, operator-, operator=
// calls: TransformLerp, VectorNormalize
RnPlane_t __fastcall CGamePhysicsQueryInterface::ContactPlane(
        const CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const hull,
        const CSweepResult *const result)
{
  HPhysicsShape m_hShape; // rbx
  HPhysicsBody m_hBody; // r14
  float y; // [rsp+8h] [rbp-C8h]
  float z; // [rsp+Ch] [rbp-C4h]
  void (__fastcall *v12)(RnDistanceQueryResult_t *, IVPhysics2 *, CTransform *, HPhysicsShape, Vector *, HPhysicsShape); // [rsp+10h] [rbp-C0h]
  float x; // [rsp+10h] [rbp-C0h]
  HPhysicsShape hHullShape; // [rsp+18h] [rbp-B8h]
  __int64 out; // [rsp+30h] [rbp-A0h]
  __int64 out_8; // [rsp+38h] [rbp-98h]
  RnDistanceQueryResult_t query_result; // [rsp+40h] [rbp-90h] BYREF
  CTransform hull_xform; // [rsp+60h] [rbp-70h] BYREF
  Vector vec; // [rsp+80h] [rbp-50h] BYREF
  RnPlane_t v20; // 0:xmm0_8.8,8:xmm1_8.8

  hull_xform.m_vPosition.w = 0.0;
  m_hShape = result->m_hShape;
  out = 0;
  out_8 = 0;
  m_hBody = result->m_hBody;
  TransformLerp(xform1, xform2, result->m_flAlpha, &hull_xform);
  if ( (*(*m_hShape + 40LL))(m_hShape) != 3 )
  {
    hHullShape = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, hull);
    v12 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
    (*(*m_hBody + 440LL))(&vec, m_hBody);
    v12(&query_result, g_pVPhysics2, &hull_xform, hHullShape, &vec, m_hShape);
    if ( query_result.m_flDistance != 0.0 )
    {
      x = query_result.m_vPoint2.x;
      y = query_result.m_vPoint2.y;
      z = query_result.m_vPoint2.z;
      vec.x = query_result.m_vPoint2.x - query_result.m_vPoint1.x;
      vec.y = query_result.m_vPoint2.y - query_result.m_vPoint1.y;
      vec.z = query_result.m_vPoint2.z - query_result.m_vPoint1.z;
      VectorNormalize(&vec);
      *&out = -vec.x;
      *(&out + 1) = -vec.y;
      *&out_8 = -vec.z;
      *(&out_8 + 1) = ((-vec.x * x) + (-vec.y * y)) + (-vec.z * z);
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hHullShape);
  }
  *&v20.m_vNormal.x = out;
  *&v20.m_vNormal.z = out_8;
  return v20;
}


// CGamePhysicsQueryInterface::CollideShape  (line 2122, @0x00000000020ad290, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
void __fastcall CGamePhysicsQueryInterface::CollideShape(
        CGamePhysicsQueryInterface *const this,
        PlaneBuffer *const out,
        const CTransform *const xform,
        const RnSphere_t *const sphere,
        CGameQueryAttributes *pFilter,
        bool bShiftToOrigin)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1120LL))(this->m_pWorld, out, xform, sphere, pFilter, bShiftToOrigin);
}


// CGamePhysicsQueryInterface::CollideShape  (line 2133, @0x00000000020ad2f0, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
void __fastcall CGamePhysicsQueryInterface::CollideShape(
        CGamePhysicsQueryInterface *const this,
        PlaneBuffer *const out,
        const CTransform *const xform,
        const RnCapsule_t *const capsule,
        CGameQueryAttributes *pFilter,
        bool bShiftToOrigin)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1144LL))(this->m_pWorld, out, xform, capsule, pFilter, bShiftToOrigin);
}


// CGamePhysicsQueryInterface::CollideShape  (line 2144, @0x00000000020ad350, libserver.so)  // inlines: UpdateEntitiesBeforeQuery
// calls: UpdateDirtySpatialPartitionEntities
void __fastcall CGamePhysicsQueryInterface::CollideShape(
        CGamePhysicsQueryInterface *const this,
        PlaneBuffer *const out,
        const CTransform *const xform,
        const RnHull_t *const hull,
        CGameQueryAttributes *pFilter,
        bool bShiftToOrigin)
{
  UpdateDirtySpatialPartitionEntities();
  (*(*this->m_pWorld + 1168LL))(this->m_pWorld, out, xform, hull, pFilter, bShiftToOrigin);
}


// CGamePhysicsQueryInterface::SweepCollideable  (line 2155, @0x00000000020adae0, libserver.so)  // inlines: CTransform, Init, LengthSqr, QuaternionAligned, Ray_t, TraceRay, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGamePhysicsQueryInterface::TraceRay, CCollisionProperty::GetCapsule, CGamePhysicsQueryInterface::SweepShape, ConvertSweepToTrace
// globals: g_pPhysicsQuery
void __fastcall CGamePhysicsQueryInterface::SweepCollideable(
        CGamePhysicsQueryInterface *const this,
        CBaseEntity *pEntity,
        const Vector *const vAbsStart,
        const Vector *const vAbsEnd,
        CGameQueryAttributes *const traceFilter,
        CGameTrace *pTrace)
{
  CCollisionProperty *m_pCollision; // rbx
  float *v10; // r12
  float *v11; // rax
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  vec_t v21; // xmm5_4
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  vec_t w; // xmm0_4
  vec_t v26; // xmm1_4
  vec_t v27; // xmm2_4
  vec_t v28; // xmm4_4
  vec_t v29; // xmm5_4
  vec_t v30; // xmm6_4
  CSweepResult result; // [rsp+20h] [rbp-E0h] BYREF
  RnCapsule_t capsule; // [rsp+40h] [rbp-C0h] BYREF
  CTransform xform1; // [rsp+60h] [rbp-A0h] BYREF
  CTransform xform2; // [rsp+80h] [rbp-80h] BYREF
  float v37; // [rsp+A0h] [rbp-60h]
  float v38; // [rsp+A4h] [rbp-5Ch]
  float v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  float v41; // [rsp+B0h] [rbp-50h]
  float v42; // [rsp+B4h] [rbp-4Ch]
  float v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  int v45; // [rsp+C0h] [rbp-40h]
  bool v46; // [rsp+C4h] [rbp-3Ch]
  bool v47; // [rsp+C5h] [rbp-3Bh]

  m_pCollision = pEntity->m_pCollision;
  if ( m_pCollision != 0 )
  {
    if ( (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision) == 7 )
    {
      CCollisionProperty::GetCapsule(&capsule, 1.0);
      z = vAbsStart->z;
      y = vAbsStart->y;
      xform2.m_vPosition.w = 0.0;
      x = vAbsStart->x;
      xform1.m_vPosition.z = z;
      xform1.m_vPosition.y = y;
      w = quat_identity.w;
      xform1.m_vPosition.x = x;
      v26 = quat_identity.z;
      xform1.m_vPosition.w = 0.0;
      v27 = quat_identity.y;
      xform1.m_orientation.w = w;
      xform2.m_orientation.z = v26;
      v28 = vAbsEnd->z;
      v29 = vAbsEnd->y;
      xform1.m_orientation.x = quat_identity.x;
      v30 = vAbsEnd->x;
      xform1.m_orientation.y = v27;
      xform1.m_orientation.z = v26;
      xform2.m_vPosition.x = v30;
      xform2.m_vPosition.y = v29;
      xform2.m_vPosition.z = v28;
      xform2.m_orientation.x = quat_identity.x;
      xform2.m_orientation.y = v27;
      xform2.m_orientation.w = w;
      CGamePhysicsQueryInterface::SweepShape(&result, g_pPhysicsQuery, &xform1, &xform2, &capsule, traceFilter, 1);
      ConvertSweepToTrace(pTrace, &xform1, &xform2, &capsule, &result);
    }
    else
    {
      v10 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
      v11 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
      v12 = vAbsStart->x;
      v13 = vAbsStart->y;
      xform2.m_vPosition.w = 0.0;
      v14 = vAbsEnd->x;
      xform2.m_orientation.w = 0.0;
      v15 = vAbsEnd->y;
      v40 = 0;
      v16 = vAbsStart->z;
      v44 = 0;
      v17 = vAbsEnd->z;
      v45 = 0;
      xform2.m_orientation.x = v14 - v12;
      xform2.m_orientation.y = v15 - v13;
      xform2.m_orientation.z = v17 - v16;
      v47 = (((xform2.m_orientation.x * xform2.m_orientation.x) + (xform2.m_orientation.y * xform2.m_orientation.y))
           + (xform2.m_orientation.z * xform2.m_orientation.z)) != 0.0;
      v41 = *v10 - *v11;
      v42 = v10[1] - v11[1];
      v18 = v10[2] - v11[2];
      v41 = v41 * 0.5;
      v42 = v42 * 0.5;
      v43 = v18 * 0.5;
      v46 = (((v41 * v41) + (v42 * v42)) + (v43 * v43)) < 0.000001;
      v37 = *v11 + *v10;
      v38 = v11[1] + v10[1];
      v19 = v11[2] + v10[2];
      xform2.m_vPosition.x = v12 + (v37 * 0.5);
      v20 = v19 * 0.5;
      v21 = v13 + (v38 * 0.5);
      v37 = -(v37 * 0.5);
      v38 = -(v38 * 0.5);
      xform2.m_vPosition.y = v21;
      v39 = -v20;
      xform2.m_vPosition.z = v16 + v20;
      CGamePhysicsQueryInterface::TraceRay(this, &xform2, traceFilter, pTrace);
    }
  }
}


// CGamePhysicsQueryInterface::SweepCollideable  (line 2183, @0x00000000020e41f0, libserver.so)  // inlines: Init, LengthSqr, Ray_t, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGamePhysicsQueryInterface::TraceRay, CCollisionProperty::GetCapsule, CGamePhysicsQueryInterface::LinearCast, ConvertCastToTrace
// callers: UTIL_TraceEntityAABB, UTIL_TraceEntity, CPushBlockerEnum::ShouldHitEntity
// globals: g_pPhysicsQuery
void __fastcall CGamePhysicsQueryInterface::SweepCollideable(
        CGamePhysicsQueryInterface *const this,
        CBaseEntity *pEntity,
        const Vector *const vAbsStart,
        const Vector *const vAbsEnd,
        CTraceFilter *pTraceFilter,
        CGameTrace *pTrace)
{
  CCollisionProperty *m_pCollision; // r15
  float *v11; // rax
  float x; // xmm6_4
  float y; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float z; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float *v22; // [rsp+0h] [rbp-B0h]
  RnCapsule_t capsule; // [rsp+10h] [rbp-A0h] BYREF
  CLinearSweepResult result; // [rsp+30h] [rbp-80h] BYREF
  float v26; // [rsp+60h] [rbp-50h]
  float v27; // [rsp+64h] [rbp-4Ch]
  float v28; // [rsp+68h] [rbp-48h]
  int v29; // [rsp+6Ch] [rbp-44h]
  int v30; // [rsp+70h] [rbp-40h]
  bool v31; // [rsp+74h] [rbp-3Ch]
  bool v32; // [rsp+75h] [rbp-3Bh]

  m_pCollision = pEntity->m_pCollision;
  if ( (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision) == 7 )
  {
    CCollisionProperty::GetCapsule(&capsule, 1.0);
    CGamePhysicsQueryInterface::LinearCast(&result, g_pPhysicsQuery, vAbsStart, vAbsEnd, &capsule, pTraceFilter, 0.0625);
    ConvertCastToTrace(pTrace, vAbsStart, vAbsEnd, &result);
  }
  else
  {
    v22 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
    v11 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
    x = vAbsStart->x;
    y = vAbsStart->y;
    HIDWORD(result.m_hShape) = 0;
    v14 = vAbsEnd->x;
    result.m_vHitPoint.y = 0.0;
    v15 = vAbsEnd->y;
    result.m_vHitNormal.z = 0.0;
    z = vAbsStart->z;
    v29 = 0;
    v17 = vAbsEnd->z;
    v30 = 0;
    result.m_flAlpha = v14 - x;
    *&result.m_nTriangle = v15 - y;
    result.m_vHitPoint.x = v17 - z;
    v32 = (((result.m_flAlpha * result.m_flAlpha) + (*&result.m_nTriangle * *&result.m_nTriangle))
         + (result.m_vHitPoint.x * result.m_vHitPoint.x)) != 0.0;
    v26 = *v22 - *v11;
    v27 = v22[1] - v11[1];
    v18 = v22[2] - v11[2];
    v26 = v26 * 0.5;
    v27 = v27 * 0.5;
    v28 = v18 * 0.5;
    v31 = (((v26 * v26) + (v27 * v27)) + (v28 * v28)) < 0.000001;
    result.m_vHitPoint.z = *v11 + *v22;
    result.m_vHitNormal.x = v11[1] + v22[1];
    v19 = v11[2] + v22[2];
    *&result.m_hBody = x + (result.m_vHitPoint.z * 0.5);
    v20 = v19 * 0.5;
    v21 = y + (result.m_vHitNormal.x * 0.5);
    result.m_vHitPoint.z = -(result.m_vHitPoint.z * 0.5);
    result.m_vHitNormal.x = -(result.m_vHitNormal.x * 0.5);
    *(&result.m_hBody + 1) = v21;
    result.m_vHitNormal.y = -v20;
    *&result.m_hShape = z + v20;
    CGamePhysicsQueryInterface::TraceRay(this, &result, pTraceFilter, pTrace);
  }
}


// CGamePhysicsQueryInterface::PointOutsideWorld  (line 2204, @0x00000000020ad3b0, libserver.so)
bool __fastcall CGamePhysicsQueryInterface::PointOutsideWorld(
        CGamePhysicsQueryInterface *const this,
        const Vector *const ptTest)
{
  return 0;
}


// CGamePhysicsQueryInterface::AddLocatableEntity  (line 2221, @0x00000000020d93b0, libserver.so)  // inlines: AddEntity, AddToTail, CEntityHandle, FastRemove, FindEntry, FindOrAddEntry, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Init, ToKey, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin, CUtlMemory<Vector, int>::Grow, CUtlMemory<unsigned int, int>::Grow
// callers: CCollisionProperty::UpdateLocateHandle
// globals: g_LocatableEntities
locatehandle_t __fastcall CGamePhysicsQueryInterface::AddLocatableEntity(
        CGamePhysicsQueryInterface *const this,
        CBaseEntity *pEntity)
{
  int v3; // ebx
  CEntityIdentity *m_pEntity; // rax
  __int16 v5; // cx
  __int64 m_Size; // r12
  unsigned int *m_pMemory; // r8
  unsigned int *v8; // rcx
  __int64 i; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // r13d
  __int64 v13; // r12
  __int64 v15; // rdx

  v3 = -1;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v5 = 0x7FFF;
    else
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v3 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
  }
  m_Size = g_LocatableEntities.m_nEntityList.m_Size;
  if ( g_LocatableEntities.m_nEntityList.m_Size > 0 )
  {
    m_pMemory = g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory;
    if ( v3 == *g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory )
    {
      v13 = 0;
      LOWORD(v12) = 0;
      goto LABEL_17;
    }
    v8 = g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory + 1;
    for ( i = 1; g_LocatableEntities.m_nEntityList.m_Size > i; ++i )
    {
      m_pMemory = v8++;
      if ( *m_pMemory == v3 )
      {
        LOWORD(v12) = i;
        v13 = i;
        goto LABEL_17;
      }
    }
  }
  if ( g_LocatableEntities.m_nFreeList.m_Size != 0 )
  {
    v15 = g_LocatableEntities.m_nFreeList.m_Memory.m_pMemory[g_LocatableEntities.m_nFreeList.m_Size - 1];
    v12 = g_LocatableEntities.m_nFreeList.m_Memory.m_pMemory[g_LocatableEntities.m_nFreeList.m_Size - 1];
    if ( g_LocatableEntities.m_nFreeList.m_Size <= 0 )
    {
      v13 = v15;
      m_pMemory = &g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory[v15];
    }
    else
    {
      --g_LocatableEntities.m_nFreeList.m_Size;
      v13 = v15;
      m_pMemory = &g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory[v15];
    }
  }
  else
  {
    v10 = g_LocatableEntities.m_nEntityList.m_Size;
    if ( g_LocatableEntities.m_nEntityList.m_Size == g_LocatableEntities.m_nEntityList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<unsigned int,int>::Grow(&g_LocatableEntities.m_nEntityList.m_Memory, 1);
      v10 = g_LocatableEntities.m_nEntityList.m_Size;
    }
    g_LocatableEntities.m_nEntityList.m_Size = v10 + 1;
    v11 = g_LocatableEntities.m_vPositionList.m_Size;
    if ( g_LocatableEntities.m_vPositionList.m_Size == g_LocatableEntities.m_vPositionList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<Vector,int>::Grow(&g_LocatableEntities.m_vPositionList.m_Memory, 1);
      v11 = g_LocatableEntities.m_vPositionList.m_Size;
    }
    LOWORD(v12) = m_Size;
    g_LocatableEntities.m_vPositionList.m_Size = v11 + 1;
    m_pMemory = &g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory[m_Size];
    v13 = m_Size;
  }
LABEL_17:
  *m_pMemory = v3;
  g_LocatableEntities.m_vPositionList.m_Memory.m_pMemory[v13] = *CBaseEntity::GetAbsOrigin(pEntity);
  return v12;
}


// CGamePhysicsQueryInterface::RemoveLocatableEntity  (line 2228, @0x00000000020d6c70, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveEntity, operator[]
// calls: CUtlMemory<int, int>::Grow
// callers: CCollisionProperty::Shutdown, CCollisionProperty::UpdateLocateHandle
void __fastcall CGamePhysicsQueryInterface::RemoveLocatableEntity(
        CGamePhysicsQueryInterface *const this,
        locatehandle_t hEntity,
        CBaseEntity *pEntity)
{
  int m_Data; // r12d
  __int64 m_Size; // rbx
  int v5; // eax
  int *v6; // rax

  if ( hEntity.m_Data != 0xFFFF )
  {
    m_Data = hEntity.m_Data;
    g_LocatableEntities.m_nEntityList.m_Memory.m_pMemory[hEntity.m_Data] = 0;
    m_Size = g_LocatableEntities.m_nFreeList.m_Size;
    v5 = g_LocatableEntities.m_nFreeList.m_Size;
    if ( g_LocatableEntities.m_nFreeList.m_Size == g_LocatableEntities.m_nFreeList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&g_LocatableEntities.m_nFreeList.m_Memory, 1);
      v5 = g_LocatableEntities.m_nFreeList.m_Size;
    }
    g_LocatableEntities.m_nFreeList.m_Size = v5 + 1;
    v6 = &g_LocatableEntities.m_nFreeList.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      *v6 = m_Data;
  }
}


// CGamePhysicsQueryInterface::UpdateLocatableEntity  (line 2235, @0x00000000020ad3c0, libserver.so)  // inlines: UpdateEntity, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin
// callers: CCollisionProperty::UpdateLocateHandle
void __fastcall CGamePhysicsQueryInterface::UpdateLocatableEntity(
        CGamePhysicsQueryInterface *const this,
        locatehandle_t hEntity,
        CBaseEntity *pEntity)
{
  if ( hEntity.m_Data != 0xFFFF )
    g_LocatableEntities.m_vPositionList.m_Memory.m_pMemory[hEntity.m_Data] = *CBaseEntity::GetAbsOrigin(pEntity);
}


// CGamePhysicsQueryInterface::FindClosestPointToTarget  (line 2260, @0x00000000020cfa70, libserver.so)  // inlines: CTransform, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, DistToSqr, Distance, DotProduct, Init, LengthSqr, Purge, Purge_FixedGrowable, QuaternionAligned, RemoveAll, SolvePlaneConstraints, UpdateEntitiesBeforeQuery, VectorAligned, VectorMultiply, operator*, operator-=, operator=, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CUtlVectorBase<CRnPlaneResult, CUtlMemoryFixedGrowable<CRnPlaneResult, 32ul, int> >::AddVectorToTail<CUtlMemoryFixedGrowable<CRnPlaneResult, 32ul, int> >, TransformLerp, CUtlMemory<CRnPlaneResult, int>::Purge, CUtlVectorBase<CRnPlaneResult, CUtlMemoryFixedGrowable<CRnPlaneResult, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
Vector __fastcall CGamePhysicsQueryInterface::FindClosestPointToTarget(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vStart,
        const Vector *const vTarget,
        const RnSphere_t *const sphere,
        const RnQueryAttr_t_0 *const attributes,
        const PlaneBuffer *pAdditionalPlanes)
{
  IVPhysics2World *m_pWorld; // rdi
  vec_t x; // xmm7_4
  vec_t y; // xmm6_4
  vec_t w; // xmm0_4
  vec_t z; // xmm1_4
  vec_t v15; // xmm2_4
  void (__fastcall *v16)(IVPhysics2World *, PlaneBuffer *, CTransform *, const RnSphere_t *const, const RnQueryAttr_t_0 *const, __int64); // rax
  __int64 v17; // rcx
  CRnPlaneResult *v18; // rdx
  CRnPlaneResult *m_pMemory; // rax
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  vec_t v24; // xmm0_4
  vec_t v25; // xmm1_4
  vec_t v26; // xmm2_4
  IVPhysics2World *v27; // rsi
  vec_t v28; // xmm1_4
  vec_t v29; // xmm2_4
  vec_t v30; // xmm0_4
  uint32 v31; // eax
  int v34; // [rsp+20h] [rbp-410h]
  float v35; // [rsp+24h] [rbp-40Ch]
  float q; // [rsp+28h] [rbp-408h]
  float vLastPosition; // [rsp+40h] [rbp-3F0h]
  float vLastPosition_4; // [rsp+44h] [rbp-3ECh]
  float vLastPosition_8; // [rsp+48h] [rbp-3E8h]
  float v42; // [rsp+4Ch] [rbp-3E4h]
  CSweepResult sweep; // [rsp+60h] [rbp-3D0h] BYREF
  CTransform xform1; // [rsp+80h] [rbp-3B0h] BYREF
  CTransform xform2; // [rsp+A0h] [rbp-390h] BYREF
  CTransform xform; // [rsp+C0h] [rbp-370h] BYREF
  PlaneBuffer planes; // [rsp+E0h] [rbp-350h] BYREF
  unsigned __int64 v48; // [rsp+3F8h] [rbp-38h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v48 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  m_pWorld = this->m_pWorld;
  planes.m_Size = 0;
  x = vStart->x;
  planes.m_Memory.m_nAllocationCount = 32;
  planes.m_Memory.m_pMemory = &planes.m_Memory.m_FixedMemory;
  vLastPosition = x;
  y = vStart->y;
  planes.m_Memory.m_nGrowSize = 0x80000000;
  v35 = y;
  w = quat_identity.w;
  q = vStart->z;
  z = quat_identity.z;
  v15 = quat_identity.y;
  v16 = *(*m_pWorld + 1120LL);
  xform.m_vPosition.x = x;
  xform.m_vPosition.y = y;
  xform.m_vPosition.z = q;
  xform.m_vPosition.w = 0.0;
  xform.m_orientation.x = quat_identity.x;
  xform.m_orientation.y = v15;
  xform.m_orientation.z = z;
  xform.m_orientation.w = w;
  v16(m_pWorld, &planes, &xform, sphere, attributes, 1);
  if ( pAdditionalPlanes != 0 )
    CUtlVectorBase<CRnPlaneResult,CUtlMemoryFixedGrowable<CRnPlaneResult,32ul,int>>::AddVectorToTail<CUtlMemoryFixedGrowable<CRnPlaneResult,32ul,int>>(
      &planes,
      pAdditionalPlanes);
  v34 = 16;
  while ( 1 )
  {
    LODWORD(v17) = 16;
    vLastPosition_8 = vTarget->x;
    vLastPosition_4 = vTarget->y;
    v42 = vTarget->z;
    v18 = &planes.m_Memory.m_pMemory[(planes.m_Size - 1) + 1];
    do
    {
      if ( planes.m_Size > 0 )
      {
        m_pMemory = planes.m_Memory.m_pMemory;
        do
        {
          while ( 1 )
          {
            v20 = m_pMemory->m_Plane.m_vNormal.x;
            v21 = m_pMemory->m_Plane.m_vNormal.y;
            v22 = m_pMemory->m_Plane.m_vNormal.z;
            v23 = ((((vLastPosition_8 * m_pMemory->m_Plane.m_vNormal.x) + (vLastPosition_4 * v21)) + (v42 * v22))
                 - m_pMemory->m_Plane.m_flOffset)
                + 0.03125;
            if ( v23 < 0.0 )
              break;
            if ( ++m_pMemory == v18 )
              goto LABEL_10;
          }
          ++m_pMemory;
          vLastPosition_8 = vLastPosition_8 - (v20 * v23);
          vLastPosition_4 = vLastPosition_4 - (v21 * v23);
          v42 = v42 - (v23 * v22);
        }
        while ( m_pMemory != v18 );
      }
LABEL_10:
      v17 = (v17 - 1);
    }
    while ( v17 != 0 );
    if ( ((((vLastPosition - vLastPosition_8) * (vLastPosition - vLastPosition_8))
         + ((v35 - vLastPosition_4) * (v35 - vLastPosition_4)))
        + ((q - v42) * (q - v42))) < 0.0009765625 )
      break;
    v24 = vStart->z;
    xform2.m_vPosition.x = vLastPosition_8;
    v25 = vStart->y;
    xform2.m_vPosition.y = vLastPosition_4;
    v26 = vStart->x;
    v27 = this->m_pWorld;
    xform1.m_vPosition.y = v25;
    xform1.m_vPosition.x = v26;
    v28 = quat_identity.z;
    xform1.m_vPosition.z = v24;
    v29 = quat_identity.y;
    v30 = quat_identity.w;
    xform1.m_vPosition.w = 0.0;
    xform1.m_orientation.y = v29;
    xform1.m_orientation.z = v28;
    xform1.m_orientation.x = quat_identity.x;
    xform1.m_orientation.w = v30;
    xform2.m_vPosition.z = v42;
    xform2.m_vPosition.w = 0.0;
    xform2.m_orientation.x = quat_identity.x;
    xform2.m_orientation.y = v29;
    xform2.m_orientation.z = v28;
    xform2.m_orientation.w = v30;
    (*(*v27 + 1104LL))(&sweep, v27, &xform1, &xform2, sphere, attributes, 1);
    xform.m_vPosition.w = 0.0;
    TransformLerp(&xform1, &xform2, sweep.m_flAlpha, &xform);
    (*(*this->m_pWorld + 1120LL))(this->m_pWorld, &planes, &xform, sphere, attributes, 1);
    if ( --v34 == 0 )
      break;
    q = v42;
    v35 = vLastPosition_4;
    vLastPosition = vLastPosition_8;
  }
  planes.m_Size = 0;
  xform.m_vPosition.x = vLastPosition_8;
  xform.m_vPosition.y = vLastPosition_4;
  v31 = planes.m_Memory.m_nGrowSize & 0xC0000000;
  xform.m_vPosition.z = v42;
  if ( planes.m_Memory.m_nAllocationCount < 0 || planes.m_Memory.m_pMemory == &planes.m_Memory.m_FixedMemory )
  {
    if ( v31 == 0 )
      CUtlMemory<CRnPlaneResult,int>::Purge(&planes.m_Memory);
  }
  else if ( planes.m_Memory.m_pMemory != 0 && v31 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, planes.m_Memory.m_pMemory, &planes.m_Memory.m_FixedMemory, v17);
  }
  *&result.x = *&xform.m_vPosition.x;
  result.z = xform.m_vPosition.z;
  return result;
}


// CGamePhysicsQueryInterface::UpdateEntitiesBeforeQuery  (line 2307, @0x00000000020ad410, libserver.so)
// calls: UpdateDirtySpatialPartitionEntities
void __fastcall CGamePhysicsQueryInterface::UpdateEntitiesBeforeQuery(CGamePhysicsQueryInterface *const this)
{
  UpdateDirtySpatialPartitionEntities();
}


// CGamePhysicsQueryInterface::ClipRayToAggregate  (line 2314, @0x00000000020ae3d0, libserver.so)  // inlines: PhysicsTrace_t, UpdateEntitiesBeforeQuery, Vector, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::ConvertTrace
// callers: CGamePhysicsQueryInterface::ClipRayToEntity
bool __fastcall CGamePhysicsQueryInterface::ClipRayToAggregate(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        IPhysAggregateInstance *pAgg,
        const RnQueryShapeAttr_t *const attr,
        trace_t *pTrace)
{
  bool v6; // bl
  vec_t z; // eax
  unsigned int i; // ebx
  __int64 v12; // rax
  bool v13; // zf
  IVPhysics2World *m_pWorld; // rdi
  float fraction; // xmm3_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm1_4
  vec_t v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  int nPartCount; // [rsp+14h] [rbp-ACh]
  Vector vStart; // [rsp+30h] [rbp-90h] BYREF
  Vector vDelta; // [rsp+40h] [rbp-80h] BYREF
  PhysicsTrace_t tmp; // [rsp+50h] [rbp-70h] BYREF

  v6 = 0;
  if ( pAgg != 0 )
  {
    UpdateDirtySpatialPartitionEntities();
    nPartCount = (*(pAgg->_vptr_IPhysAggregateInstance + 9))(pAgg);
    vStart = ray->m_Start.Vector;
    *&vDelta.x = *&ray->m_Delta.x;
    z = ray->m_Delta.z;
    pTrace->fraction = 1.0;
    pTrace->m_pEnt = 0;
    vDelta.z = z;
    if ( nPartCount <= 0 )
    {
      fraction = 1.0;
    }
    else
    {
      for ( i = 0; i != nPartCount; ++i )
      {
        while ( 1 )
        {
          v12 = (*(pAgg->_vptr_IPhysAggregateInstance + 10))(pAgg, i);
          v13 = !ray->m_IsRay;
          memset(&tmp, 0, 44);
          m_pWorld = this->m_pWorld;
          tmp.m_flFraction = 1.0;
          tmp.m_bStartInSolid = 0;
          tmp.m_pSurfaceProperties = 0;
          if ( v13 )
            (*(*m_pWorld + 440LL))(m_pWorld, &tmp, &vStart, &vDelta, &ray->m_Extents, v12);
          else
            (*(*m_pWorld + 432LL))(m_pWorld, &tmp, &vStart, &vDelta, v12);
          if ( tmp.m_HitObject != 0 && pTrace->fraction > tmp.m_flFraction )
            break;
          if ( ++i == nPartCount )
            goto LABEL_11;
        }
        CGamePhysicsQueryInterface::ConvertTrace(this, pTrace, &vStart, &vDelta, &tmp);
      }
LABEL_11:
      fraction = pTrace->fraction;
      v6 = fraction < 1.0;
    }
    v16 = ray->m_Start.y + ray->m_StartOffset.y;
    v17 = ray->m_Start.x + ray->m_StartOffset.x;
    v18 = ray->m_Start.z + ray->m_StartOffset.z;
    pTrace->startpos.y = v16;
    pTrace->startpos.x = v17;
    pTrace->startpos.z = v18;
    v19 = (ray->m_Delta.y * fraction) + v16;
    v20 = ray->m_Delta.z * fraction;
    v21 = fraction * ray->m_Delta.x;
    pTrace->endpos.y = v19;
    pTrace->endpos.z = v20 + v18;
    pTrace->endpos.x = v21 + v17;
  }
  return v6;
}


// CGamePhysicsQueryInterface::SweepBodyMultipleAndProcess  (line 2356, @0x00000000020cf940, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGamePhysicsQueryInterface::SweepBodyMultiple, CGamePhysicsQueryInterface::ProcessSweepResults, CUtlMemory<CSweepResult, int>::Purge, __stack_chk_fail, CUtlVectorBase<CSweepResult, CUtlMemoryFixedGrowable<CSweepResult, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
CSweepResult *__fastcall CGamePhysicsQueryInterface::SweepBodyMultipleAndProcess(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const HPhysicsBody *const body,
        CGameQueryAttributes *pFilter,
        bool bIgnoreStartInSolid)
{
  uint32 v11; // eax
  CSweepResultVector sweepResults; // [rsp+10h] [rbp-C50h] BYREF
  unsigned __int64 v14; // [rsp+C28h] [rbp-38h]

  sweepResults.m_Size = 0;
  v14 = __readfsqword(0x28u);
  sweepResults.m_Memory.m_nAllocationCount = 128;
  sweepResults.m_Memory.m_pMemory = &sweepResults.m_Memory.m_FixedMemory;
  sweepResults.m_Memory.m_nGrowSize = 0x80000000;
  CGamePhysicsQueryInterface::SweepBodyMultiple(this, &sweepResults, xform1, xform2, body, pFilter, bIgnoreStartInSolid);
  CGamePhysicsQueryInterface::ProcessSweepResults(
    retstr,
    this,
    &xform1->m_vPosition,
    &xform2->m_vPosition,
    &sweepResults);
  sweepResults.m_Size = 0;
  v11 = sweepResults.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sweepResults.m_Memory.m_nAllocationCount < 0
    || sweepResults.m_Memory.m_pMemory == &sweepResults.m_Memory.m_FixedMemory )
  {
    if ( v11 == 0 )
      CUtlMemory<CSweepResult,int>::Purge(&sweepResults.m_Memory);
  }
  else if ( sweepResults.m_Memory.m_pMemory != 0 && v11 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return retstr;
}


// CGamePhysicsQueryInterface::ConvertTraceList  (line 2363, @0x00000000020e1760, libserver.so)  // inlines: AddMultipleToTail, CGameTrace, Construct<CGameTrace>, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, RnCollisionAttr_t, operator[]
// calls: CGamePhysicsQueryInterface::ConvertTrace, CUtlMemory<CGameTrace, int>::Grow, CGameTrace::Init
// callers: CGamePhysicsQueryInterface::RaycastMultiple, CGamePhysicsQueryInterface::SphereCastMultiple, CGamePhysicsQueryInterface::TraceRayWithSortedResults
void __fastcall CGamePhysicsQueryInterface::ConvertTraceList(
        CGamePhysicsQueryInterface *const this,
        CGameTraceList *pOutput,
        const Vector *const vStart,
        const Vector *const vDelta,
        const CTraceVector *const input)
{
  int m_Size; // r14d
  int v8; // r12d
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r8
  CGameTrace *v14; // rsi
  int m_nAllocationCount; // ecx
  int v16; // r15d
  __int64 v17; // r12
  CGameTrace_2 *v18; // rdi
  int v19; // [rsp+4h] [rbp-4Ch]

  m_Size = input->m_Size;
  v8 = pOutput->m_list.m_Size;
  if ( input->m_Size > pOutput->m_list.m_Size )
  {
    v19 = m_Size - v8;
    if ( m_Size != v8 )
    {
      m_nAllocationCount = pOutput->m_list.m_Memory.m_nAllocationCount;
      if ( m_Size > m_nAllocationCount )
        CUtlMemory<CGameTrace,int>::Grow(&pOutput->m_list.m_Memory, m_Size - m_nAllocationCount);
      pOutput->m_list.m_Size = m_Size;
      if ( v19 > 0 )
      {
        v16 = 0;
        v17 = v8;
        do
        {
          v18 = &pOutput->m_list.m_Memory.m_pMemory[v17];
          if ( v18 != 0 )
          {
            v18->m_ShapeAttributes.m_nInteractsAs = 0;
            v18->m_ShapeAttributes.m_nInteractsWith = 0;
            v18->m_ShapeAttributes.m_nInteractsExclude = 0;
            v18->m_ShapeAttributes.m_nCollisionGroup = 0;
            v18->m_ShapeAttributes.m_nCollisionFunctionMask = 7;
            v18->m_ShapeAttributes.m_nEntityId = 0;
            v18->m_ShapeAttributes.m_nHierarchyId = 0;
            CGameTrace::Init(v18);
          }
          ++v16;
          ++v17;
        }
        while ( v19 > v16 );
      }
    }
  }
  if ( m_Size > 0 )
  {
    v9 = (m_Size - 1);
    v10 = 0;
    v11 = 0;
    v12 = (v9 + 1) << 6;
    do
    {
      v13 = v11;
      v14 = &pOutput->m_list.m_Memory.m_pMemory[v10];
      v11 += 64;
      ++v10;
      CGamePhysicsQueryInterface::ConvertTrace(this, v14, vStart, vDelta, (input->m_Memory.m_pMemory + v13));
    }
    while ( v11 != v12 );
  }
}


// CGamePhysicsQueryInterface::ConvertAndSortTraceList  (line 2373, @0x00000000020e13b0, libserver.so)  // inlines: AddMultipleToTail, CGameTrace, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<CGameTrace>, ConvertToExternalMemory, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, RnCollisionAttr_t, __final_insertion_sort<int*, CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList*, const Vector&, const Vector&, const CTraceVector&)::__lambda13>, __lg, __unguarded_insertion_sort<int*, CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList*, const Vector&, const Vector&, const CTraceVector&)::__lambda13>, operator[], sort<int*, CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList*, const Vector&, const Vector&, const CTraceVector&)::__lambda13>, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 128ul, int> >::SetCount, std::__introsort_loop<int*, long int, CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList*, const Vector&, const Vector&, const CTraceVector&)::__lambda13>, std::__insertion_sort<int*, CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList*, const Vector&, const Vector&, const CTraceVector&)::__lambda13>, std::__unguarded_linear_insert<int*, CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList*, const Vector&, const Vector&, const CTraceVector&)::__lambda13>, CGamePhysicsQueryInterface::ConvertTrace, CUtlMemory<CGameTrace, int>::Grow, CGameTrace::Init, CUtlMemory<int, int>::Purge, __stack_chk_fail, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::TraceRayWithSortedResults
void __fastcall CGamePhysicsQueryInterface::ConvertAndSortTraceList(
        CGamePhysicsQueryInterface *const this,
        CGameTraceList *pOutput,
        const Vector *const vStart,
        const Vector *const vDelta,
        const CTraceVector *const input)
{
  int m_Size; // ebx
  __int64 v10; // rax
  __int64 i; // rax
  unsigned __int64 v12; // rax
  int *v13; // rdi
  int *v14; // rax
  __int64 v15; // rax
  int *v16; // rbx
  uint32 v17; // eax
  int m_nAllocationCount; // edx
  int v19; // edx
  __int64 v20; // rax
  CGameTrace_2 *v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-278h]
  int v23; // [rsp+10h] [rbp-270h]
  int *__last; // [rsp+18h] [rbp-268h]
  int __lasta; // [rsp+18h] [rbp-268h]
  int *__first; // [rsp+20h] [rbp-260h]
  int *__firstb; // [rsp+20h] [rbp-260h]
  int *__firstc; // [rsp+20h] [rbp-260h]
  int *__firsta; // [rsp+20h] [rbp-260h]
  int __firstd; // [rsp+20h] [rbp-260h]
  int *__firste; // [rsp+20h] [rbp-260h]
  CUtlVectorFixedGrowable<int,128ul> resultIndex; // [rsp+30h] [rbp-250h] BYREF
  unsigned __int64 v34; // [rsp+248h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  m_Size = input->m_Size;
  v10 = pOutput->m_list.m_Size;
  if ( input->m_Size > v10 )
  {
    v23 = m_Size - v10;
    if ( m_Size != v10 )
    {
      m_nAllocationCount = pOutput->m_list.m_Memory.m_nAllocationCount;
      if ( m_Size > m_nAllocationCount )
      {
        __firstd = pOutput->m_list.m_Size;
        CUtlMemory<CGameTrace,int>::Grow(&pOutput->m_list.m_Memory, m_Size - m_nAllocationCount);
        v10 = __firstd;
      }
      pOutput->m_list.m_Size = m_Size;
      if ( v23 > 0 )
      {
        v19 = 0;
        v20 = 168 * v10;
        do
        {
          v21 = (pOutput->m_list.m_Memory.m_pMemory + v20);
          if ( v21 != 0 )
          {
            v21->m_ShapeAttributes.m_nInteractsAs = 0;
            v21->m_ShapeAttributes.m_nInteractsWith = 0;
            v21->m_ShapeAttributes.m_nInteractsExclude = 0;
            v21->m_ShapeAttributes.m_nCollisionGroup = 0;
            v21->m_ShapeAttributes.m_nCollisionFunctionMask = 7;
            v21->m_ShapeAttributes.m_nEntityId = 0;
            v21->m_ShapeAttributes.m_nHierarchyId = 0;
            __lasta = v19;
            __firste = v20;
            CGameTrace::Init(v21);
            v19 = __lasta;
            v20 = __firste;
          }
          ++v19;
          v20 += 168;
        }
        while ( v23 > v19 );
      }
    }
  }
  if ( m_Size != 0 )
  {
    resultIndex.m_Size = 0;
    resultIndex.m_Memory.m_nAllocationCount = 128;
    resultIndex.m_Memory.m_nGrowSize = 0x80000000;
    resultIndex.m_Memory.m_pMemory = &resultIndex.m_Memory.m_FixedMemory;
    CUtlVectorBase<int,CUtlMemoryFixedGrowable<int,128ul,int>>::SetCount(&resultIndex, m_Size);
    for ( i = 0; m_Size > i; ++i )
      resultIndex.m_Memory.m_pMemory[i] = i;
    __last = &resultIndex.m_Memory.m_pMemory[resultIndex.m_Size];
    if ( __last != resultIndex.m_Memory.m_pMemory )
    {
      __first = resultIndex.m_Memory.m_pMemory;
      v22 = 4LL * resultIndex.m_Size;
      _BitScanReverse64(&v12, v22 >> 2);
      std::__introsort_loop<int *,long,CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList *,Vector const&,Vector const&,CUtlVectorFixedGrowable<PhysicsTrace_t,128ul> const&)::{lambda(int const&,int const&)#1}>(
        resultIndex.m_Memory.m_pMemory,
        __last,
        2 * (63LL - (v12 ^ 0x3F)),
        input);
      if ( v22 <= 67 )
      {
        std::__insertion_sort<int *,CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList *,Vector const&,Vector const&,CUtlVectorFixedGrowable<PhysicsTrace_t,128ul> const&)::{lambda(int const&,int const&)#1}>(
          __first,
          __last,
          input);
      }
      else
      {
        v13 = __first;
        __firstb = __first + 16;
        std::__insertion_sort<int *,CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList *,Vector const&,Vector const&,CUtlVectorFixedGrowable<PhysicsTrace_t,128ul> const&)::{lambda(int const&,int const&)#1}>(
          v13,
          __firstb,
          input);
        v14 = __firstb;
        if ( __last != __firstb )
        {
          do
          {
            __firstc = v14;
            std::__unguarded_linear_insert<int *,CGamePhysicsQueryInterface::ConvertAndSortTraceList(CGameTraceList *,Vector const&,Vector const&,CUtlVectorFixedGrowable<PhysicsTrace_t,128ul> const&)::{lambda(int const&,int const&)#1}>(
              v14,
              input);
            v14 = __firstc + 1;
          }
          while ( __last != __firstc + 1 );
        }
      }
    }
    if ( m_Size > 0 )
    {
      v15 = 4LL * (m_Size - 1) + 4;
      v16 = 0;
      __firsta = v15;
      do
      {
        CGamePhysicsQueryInterface::ConvertTrace(
          this,
          (pOutput->m_list.m_Memory.m_pMemory + 42 * v16),
          vStart,
          vDelta,
          &input->m_Memory.m_pMemory[*(resultIndex.m_Memory.m_pMemory + v16)]);
        ++v16;
      }
      while ( v16 != __firsta );
    }
    resultIndex.m_Size = 0;
    if ( resultIndex.m_Memory.m_nAllocationCount < 0 )
    {
      v17 = resultIndex.m_Memory.m_nGrowSize & 0xC0000000;
    }
    else
    {
      v17 = resultIndex.m_Memory.m_nGrowSize & 0xC0000000;
      if ( resultIndex.m_Memory.m_pMemory != &resultIndex.m_Memory.m_FixedMemory )
      {
        if ( resultIndex.m_Memory.m_pMemory != 0 && v17 == 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        return;
      }
    }
    if ( v17 == 0 )
      CUtlMemory<int,int>::Purge(&resultIndex.m_Memory);
  }
}


// CGamePhysicsQueryInterface::SweepBoxMultiple  (line 2398, @0x00000000020dc060, libserver.so)  // inlines: AddToTail, CGameTraceList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<PhysicsTrace_t>, Element, GrowMemory, PhysicsTrace_t, Purge, Purge_FixedGrowable, RemoveAll, SetObjectSetMask, Vector, operator[], ~CGameTraceList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<CGameTrace, int>::Purge, CUtlVectorBase<CGameTrace, CUtlMemoryFixedGrowable<CGameTrace, 64ul, int> >::~CUtlVectorBase, CUtlMemory<PhysicsTrace_t, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::TraceRayWithSortedResults
bool __fastcall CGamePhysicsQueryInterface::SweepBoxMultiple(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        const RnQueryAttr_t_0 *const queryAttr,
        CTraceVector *const results)
{
  RnQueryObjectSet_0 m_nObjectSetMask; // eax
  bool m_bStartInSolid; // r13
  uint64 m_nInteractsWith; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  uint32 v13; // eax
  IVPhysics2World *m_pWorld; // rdi
  int m_Size; // ebx
  int v16; // eax
  PhysicsTrace_t *v17; // rax
  int v18; // ebx
  int v19; // eax
  PhysicsTrace_t *v20; // rax
  VectorAligned *p_m_Extents; // [rsp+10h] [rbp-2AD0h]
  VectorAligned *p_m_Delta; // [rsp+18h] [rbp-2AC8h]
  RnQueryAttr_t_0 staticAttr; // [rsp+20h] [rbp-2AC0h] BYREF
  PhysicsTrace_t staticTrace; // [rsp+50h] [rbp-2A90h] BYREF
  CGameTraceList list; // [rsp+90h] [rbp-2A50h] BYREF
  unsigned __int64 v26; // [rsp+2AA8h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  m_nObjectSetMask = queryAttr->m_nObjectSetMask;
  if ( (m_nObjectSetMask & 3) != 3 )
  {
    (*(*this->m_pWorld + 1016LL))(this->m_pWorld, results, ray, &ray->m_Delta, &ray->m_Extents, queryAttr);
    return results->m_Size != 0;
  }
  m_nInteractsWith = queryAttr->m_nInteractsWith;
  memset(&staticTrace, 0, 44);
  staticAttr.m_nInteractsWith = m_nInteractsWith;
  staticAttr.m_nInteractsExclude = queryAttr->m_nInteractsExclude;
  staticAttr.m_nInteractsAs = queryAttr->m_nInteractsAs;
  v11 = *&queryAttr->m_nEntityIdToIgnore;
  v12 = *&queryAttr->m_nObjectSetMask;
  staticTrace.m_bStartInSolid = 0;
  staticTrace.m_flFraction = 1.0;
  staticTrace.m_pSurfaceProperties = 0;
  *&staticAttr.m_nEntityIdToIgnore = v11;
  *&staticAttr.m_nObjectSetMask = v12;
  list.m_list.m_Size = 0;
  list.m_list.m_Memory.m_nAllocationCount = 64;
  list.m_list.m_Memory.m_nGrowSize = 0x80000000;
  list.m_list.m_Memory.m_pMemory = &list.m_list.m_Memory.m_FixedMemory;
  if ( (m_nObjectSetMask & 1) == 0 )
  {
    p_m_Extents = &ray->m_Extents;
    p_m_Delta = &ray->m_Delta;
LABEL_7:
    (*(*this->m_pWorld + 1016LL))(this->m_pWorld, results, ray, p_m_Delta, p_m_Extents, &staticAttr);
    if ( staticTrace.m_flFraction < 1.0 )
    {
      m_Size = results->m_Size;
      v16 = results->m_Size;
      if ( results->m_Size == results->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<PhysicsTrace_t,int>::Grow(&results->m_Memory, 1);
        v16 = results->m_Size;
      }
      results->m_Size = v16 + 1;
      v17 = &results->m_Memory.m_pMemory[m_Size];
      if ( v17 != 0 )
        *v17 = staticTrace;
    }
    list.m_list.m_Size = 0;
    v13 = list.m_list.m_Memory.m_nGrowSize & 0xC0000000;
    if ( list.m_list.m_Memory.m_nAllocationCount < 0
      || list.m_list.m_Memory.m_pMemory == &list.m_list.m_Memory.m_FixedMemory )
    {
      if ( v13 == 0 )
        CUtlMemory<CGameTrace,int>::Purge(&list.m_list.m_Memory);
    }
    else if ( list.m_list.m_Memory.m_pMemory != 0 && v13 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
    return results->m_Size != 0;
  }
  m_pWorld = this->m_pWorld;
  staticAttr.m_nObjectSetMask = 1;
  p_m_Extents = &ray->m_Extents;
  p_m_Delta = &ray->m_Delta;
  (*(*m_pWorld + 1008LL))(m_pWorld, &staticTrace, ray, &ray->m_Delta, &ray->m_Extents, &staticAttr);
  m_bStartInSolid = staticTrace.m_bStartInSolid;
  if ( !staticTrace.m_bStartInSolid )
  {
    staticAttr.m_nObjectSetMask = 2;
    goto LABEL_7;
  }
  v18 = results->m_Size;
  v19 = results->m_Size;
  if ( results->m_Size == results->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<PhysicsTrace_t,int>::Grow(&results->m_Memory, 1);
    v19 = results->m_Size;
  }
  results->m_Size = v19 + 1;
  v20 = &results->m_Memory.m_pMemory[v18];
  if ( v20 != 0 )
    *v20 = staticTrace;
  CUtlVectorBase<CGameTrace,CUtlMemoryFixedGrowable<CGameTrace,64ul,int>>::~CUtlVectorBase(&list.m_list);
  return m_bStartInSolid;
}


// CGamePhysicsQueryInterface::TraceRayWithSortedResults  (line 2439, @0x00000000020e3b30, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, UpdateEntitiesBeforeQuery, VectorAdd, __final_insertion_sort<CGameTrace*>, __lg, __unguarded_insertion_sort<CGameTrace*>, operator+, sort<CGameTrace*>, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UpdateDirtySpatialPartitionEntities, CGamePhysicsQueryInterface::ConvertTraceList, CHitboxSystem::TestHitboxesMultiple, std::__introsort_loop<CGameTrace*, long int>, std::__insertion_sort<CGameTrace*>, std::__unguarded_linear_insert<CGameTrace*>, CGamePhysicsQueryInterface::ConvertAndSortTraceList, CGamePhysicsQueryInterface::SweepBoxMultiple, CUtlMemory<PhysicsTrace_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGamePhysicsQueryInterface::TraceRay
bool __fastcall CGamePhysicsQueryInterface::TraceRayWithSortedResults(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        const RnQueryAttr_t_0 *const queryAttr,
        CGameTraceList *const results)
{
  bool v8; // zf
  int m_Size; // eax
  CGameTrace *m_pMemory; // r15
  CGameTrace *v11; // r12
  CGameTrace *v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  CGameTrace *v15; // rbx
  CGameTrace *v16; // rdi
  bool v17; // bl
  uint32 v18; // edx
  float v20; // xmm0_4
  float v21; // xmm2_4
  VectorAligned *vDelta; // [rsp+8h] [rbp-2088h]
  CGameQueryAttributes hitboxFilter; // [rsp+10h] [rbp-2080h] BYREF
  CTraceVector out; // [rsp+40h] [rbp-2050h] BYREF
  unsigned __int64 v25; // [rsp+2058h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  UpdateDirtySpatialPartitionEntities();
  v8 = !ray->m_IsRay;
  out.m_Size = 0;
  out.m_Memory.m_nAllocationCount = 128;
  out.m_Memory.m_nGrowSize = 0x80000000;
  out.m_Memory.m_pMemory = &out.m_Memory.m_FixedMemory;
  if ( v8 )
  {
    CGamePhysicsQueryInterface::SweepBoxMultiple(this, ray, queryAttr, &out);
    vDelta = &ray->m_Delta;
  }
  else
  {
    vDelta = &ray->m_Delta;
    (*(*this->m_pWorld + 1000LL))(this->m_pWorld, &out, ray, &ray->m_Delta, queryAttr, ray->m_flRadius);
  }
  if ( (queryAttr->m_nInteractsWith & 2) == 0 )
  {
    v20 = ray->m_Start.z + ray->m_StartOffset.z;
    v21 = ray->m_Start.x + ray->m_StartOffset.x;
    *(&hitboxFilter.m_nInteractsWith + 1) = ray->m_Start.y + ray->m_StartOffset.y;
    *&hitboxFilter.m_nInteractsExclude = v20;
    *&hitboxFilter.m_nInteractsWith = v21;
    CGamePhysicsQueryInterface::ConvertAndSortTraceList(this, results, &hitboxFilter, vDelta, &out);
    goto LABEL_16;
  }
  CGamePhysicsQueryInterface::ConvertTraceList(this, results, &ray->m_Start, vDelta, &out);
  hitboxFilter = *queryAttr;
  CHitboxSystem::TestHitboxesMultiple(&g_HitboxSystem, ray, &hitboxFilter, 0, results);
  m_Size = results->m_list.m_Size;
  m_pMemory = results->m_list.m_Memory.m_pMemory;
  v11 = &m_pMemory[results->m_list.m_Size];
  if ( v11 == m_pMemory )
    goto LABEL_9;
  v12 = &m_pMemory[m_Size];
  v13 = 168LL * m_Size;
  _BitScanReverse64(&v14, 0xCF3CF3CF3CF3CF3DLL * (v13 >> 3));
  std::__introsort_loop<CGameTrace *,long>(results->m_list.m_Memory.m_pMemory, v12, 2 * (63LL - (v14 ^ 0x3F)));
  if ( v13 <= 2855 )
  {
    std::__insertion_sort<CGameTrace *>(m_pMemory, v11);
    m_Size = results->m_list.m_Size;
    goto LABEL_9;
  }
  v15 = m_pMemory + 16;
  std::__insertion_sort<CGameTrace *>(m_pMemory, m_pMemory + 16);
  if ( v11 == &m_pMemory[16] )
  {
LABEL_16:
    m_Size = results->m_list.m_Size;
    goto LABEL_9;
  }
  do
  {
    v16 = v15++;
    std::__unguarded_linear_insert<CGameTrace *>(v16);
  }
  while ( v11 != v15 );
  m_Size = results->m_list.m_Size;
LABEL_9:
  out.m_Size = 0;
  v17 = m_Size != 0;
  v18 = out.m_Memory.m_nGrowSize & 0xC0000000;
  if ( out.m_Memory.m_nAllocationCount < 0 || out.m_Memory.m_pMemory == &out.m_Memory.m_FixedMemory )
  {
    if ( v18 == 0 )
      CUtlMemory<PhysicsTrace_t,int>::Purge(&out.m_Memory);
  }
  else if ( out.m_Memory.m_pMemory != 0 && v18 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v17;
}


// CGamePhysicsQueryInterface::ConvertTrace  (line 2476, @0x00000000020ad420, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, SetEndPoint, SetEntityId, SetFraction, SetNormal, SetPhysicsBody, SetPhysicsShape, SetShapeAttributes, SetSurfaceProperties, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CGameTrace::Init
// callers: CGamePhysicsQueryInterface::TraceRay, CGamePhysicsQueryInterface::SphereCastSingle, CGamePhysicsQueryInterface::ClipRayToAggregate, CGamePhysicsQueryInterface::ConvertAndSortTraceList, CGamePhysicsQueryInterface::ConvertTraceList
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CGamePhysicsQueryInterface::ConvertTrace(
        CGamePhysicsQueryInterface *const this,
        CGameTrace *pTrace,
        const Vector *const vStart,
        const Vector *const vDelta,
        const PhysicsTrace_t *const trace)
{
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  uint32 v11; // r14d
  uint64 *v12; // rax
  float m_flFraction; // xmm0_4
  vec_t v14; // xmm2_4
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  CConcreteEntityList *v17; // rsi
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax

  if ( trace->m_flFraction < 1.0 )
  {
    v11 = (*(*trace->m_HitObject + 1328LL))(trace->m_HitObject);
    v12 = (*(*trace->m_HitShape + 128LL))(trace->m_HitShape);
    pTrace->m_hBody = trace->m_HitObject;
    pTrace->m_hShape = trace->m_HitShape;
    pTrace->m_pSurfaceProperties = trace->m_pSurfaceProperties;
    pTrace->m_ShapeAttributes.m_nInteractsAs = *v12;
    pTrace->m_ShapeAttributes.m_nInteractsWith = v12[1];
    pTrace->m_ShapeAttributes.m_nInteractsExclude = v12[2];
    *&pTrace->m_ShapeAttributes.m_nEntityId = v12[3];
    pTrace->m_ShapeAttributes.m_nEntityId = v11;
    pTrace->plane.dist = trace->m_flHitOffset;
    m_flFraction = trace->m_flFraction;
    v14 = (vDelta->y * m_flFraction) + vStart->y;
    v15 = (vDelta->z * m_flFraction) + vStart->z;
    v16 = (m_flFraction * vDelta->x) + vStart->x;
    pTrace->endpos.y = v14;
    pTrace->endpos.z = v15;
    pTrace->endpos.x = v16;
    pTrace->plane.normal = trace->m_vHitNormal;
    v17 = CEntityHandle::gm_pEntityList;
    pTrace->fraction = trace->m_flFraction;
    pTrace->startsolid = trace->m_bStartInSolid;
    m_pInstance = 0;
    pTrace->contents = *v12;
    if ( v11 + 2 > 1 )
    {
      v19 = v17->m_pIdentityChunks[(v11 >> 9) & 0x3F];
      if ( v19 != 0 )
      {
        v20 = &v19[v11 & 0x1FF];
        if ( v20 != 0 && v11 == v20->m_EHandle.m_Index )
          m_pInstance = v20->m_pInstance;
      }
    }
    pTrace->m_pEnt = m_pInstance;
    pTrace->startpos.x = vStart->x;
    pTrace->startpos.y = vStart->y;
    pTrace->startpos.z = vStart->z;
    return 1;
  }
  else
  {
    CGameTrace::Init(pTrace);
    pTrace->startpos.x = vStart->x;
    pTrace->startpos.y = vStart->y;
    pTrace->startpos.z = vStart->z;
    v9 = vStart->z + vDelta->z;
    v10 = vStart->x + vDelta->x;
    pTrace->endpos.y = vStart->y + vDelta->y;
    pTrace->endpos.z = v9;
    pTrace->endpos.x = v10;
    return 0;
  }
}


// CGamePhysicsQueryInterface::ProcessSweepResults  (line 2524, @0x00000000020e21f0, libserver.so)  // inlines: CSweepResult, operator[]
// calls: CGamePhysicsQueryInterface::FilterSweepResults
// callers: CGamePhysicsQueryInterface::SweepShape
CSweepResult *__fastcall CGamePhysicsQueryInterface::ProcessSweepResults(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        CTraceFilter *pFilter,
        CSweepResultVector *const rResultsIn)
{
  int m_Size; // r8d
  int v9; // eax
  CSweepResult *m_pMemory; // rcx
  int v11; // edx
  float v12; // xmm1_4
  float m_flAlpha; // xmm0_4
  CSweepResult *v15; // rax
  IPhysicsShape *m_hShape; // rdx
  __int64 v17; // rax

  CGamePhysicsQueryInterface::FilterSweepResults(this, rResultsIn, pFilter);
  m_Size = rResultsIn->m_Size;
  v9 = rResultsIn->m_Size + 1;
  if ( rResultsIn->m_Size > 0 )
  {
    m_pMemory = rResultsIn->m_Memory.m_pMemory;
    v11 = 0;
    v12 = 2.0;
    do
    {
      while ( 1 )
      {
        m_flAlpha = m_pMemory->m_flAlpha;
        if ( v12 > m_flAlpha )
          break;
        ++v11;
        ++m_pMemory;
        if ( v11 == m_Size )
          goto LABEL_6;
      }
      v9 = v11++;
      ++m_pMemory;
      v12 = m_flAlpha;
    }
    while ( v11 != m_Size );
  }
LABEL_6:
  if ( m_Size > v9 )
  {
    v15 = &rResultsIn->m_Memory.m_pMemory[v9];
    retstr->m_hBody = v15->m_hBody;
    m_hShape = v15->m_hShape;
    v17 = *&v15->m_flAlpha;
    retstr->m_hShape = m_hShape;
    *&retstr->m_flAlpha = v17;
    return retstr;
  }
  else
  {
    retstr->m_hBody = 0;
    retstr->m_hShape = 0;
    retstr->m_flAlpha = 1.0;
    retstr->m_nTriangle = -1;
    return retstr;
  }
}


// CGamePhysicsQueryInterface::ProcessSweepResults  (line 2555, @0x00000000020ae9e0, libserver.so)  // inlines: CSweepResult, operator[]
// callers: CGamePhysicsQueryInterface::SweepBodyMultipleAndProcess
CSweepResult *__fastcall CGamePhysicsQueryInterface::ProcessSweepResults(
        CSweepResult *__return_ptr retstr,
        CGamePhysicsQueryInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        CSweepResultVector *const rResultsIn)
{
  int m_Size; // esi
  CSweepResult *result; // rax
  int v7; // edi
  CSweepResult *m_pMemory; // rcx
  int v9; // edx
  float v10; // xmm1_4
  float m_flAlpha; // xmm0_4
  CSweepResult *v12; // rdx
  IPhysicsShape *m_hShape; // rcx
  __int64 v14; // rdx

  m_Size = rResultsIn->m_Size;
  result = retstr;
  v7 = rResultsIn->m_Size + 1;
  if ( rResultsIn->m_Size > 0 )
  {
    m_pMemory = rResultsIn->m_Memory.m_pMemory;
    v9 = 0;
    v10 = 2.0;
    do
    {
      while ( 1 )
      {
        m_flAlpha = m_pMemory->m_flAlpha;
        if ( v10 > m_flAlpha )
          break;
        ++v9;
        ++m_pMemory;
        if ( v9 == m_Size )
          goto LABEL_6;
      }
      v7 = v9++;
      ++m_pMemory;
      v10 = m_flAlpha;
    }
    while ( v9 != m_Size );
  }
LABEL_6:
  if ( m_Size > v7 )
  {
    v12 = &rResultsIn->m_Memory.m_pMemory[v7];
    result->m_hBody = v12->m_hBody;
    m_hShape = v12->m_hShape;
    v14 = *&v12->m_flAlpha;
    result->m_hShape = m_hShape;
    *&result->m_flAlpha = v14;
  }
  else
  {
    result->m_hBody = 0;
    result->m_hShape = 0;
    result->m_flAlpha = 1.0;
    result->m_nTriangle = -1;
  }
  return result;
}


