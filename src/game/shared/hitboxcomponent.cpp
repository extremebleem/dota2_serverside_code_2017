// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/hitboxcomponent.cpp:426
class CEntityComponentHelperFactory_CHitboxComponent : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CHitboxComponent();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IsBoxIntersectingShortenedRay  (line 23, @0x0000000001eb7540, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, DivSIMD<(ESIMDLevel)20u>, LoadAlignedSIMD, LoadAlignedSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, ReplicateX4<(ESIMDLevel)20u>, SetWToZeroSIMD<(ESIMDLevel)20u>, StoreAlignedSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_div_ps, _mm_load_ps, _mm_mul_ps, _mm_set1_ps, _mm_store_ps, _mm_sub_ps
// calls: IsBoxIntersectingRay, IsBoxIntersectingBox
// callers: CHitboxSystem::TestHitboxes, CHitboxSystem::OverlapHitboxes, CHitboxSystem::TestHitboxesMultiple
bool __fastcall IsBoxIntersectingShortenedRay(
        VectorAligned *boxMin,
        VectorAligned *boxMax,
        const Ray_t *const ray,
        __m128 flFraction,
        __m128 flTolerance)
{
  __m128 v5; // xmm1
  bool v6; // zf
  __m128 v7; // xmm4
  __m128 v8; // xmm3
  fltx4_0 v9; // xmm2
  __m128 v10; // xmm0
  VectorAligned v11; // xmm0
  VectorAligned v12; // xmm3
  VectorAligned v14; // xmm0
  VectorAligned v15; // xmm3
  VectorAligned v16; // xmm1
  fltx4_0 rayStart; // [rsp+0h] [rbp-68h] BYREF
  fltx4_0 rayDelta; // [rsp+10h] [rbp-58h] BYREF
  VectorAligned vecBoxMin; // [rsp+20h] [rbp-48h] BYREF
  VectorAligned vecBoxMax; // [rsp+30h] [rbp-38h] BYREF
  VectorAligned vecRayMins; // [rsp+40h] [rbp-28h] BYREF
  VectorAligned vecRayMaxs; // [rsp+50h] [rbp-18h] BYREF

  v5 = _mm_shuffle_ps(flTolerance, flTolerance, 0);
  v6 = !ray->m_IsSwept;
  v7 = _mm_and_ps(ray->m_Start, *g_SIMD_clear_wmask);
  v8 = _mm_and_ps(ray->m_Extents, *g_SIMD_clear_wmask);
  rayStart = v7;
  if ( v6 )
  {
    v14 = _mm_add_ps(_mm_sub_ps(v7, v8), v5);
    v15 = _mm_add_ps(_mm_add_ps(v8, v7), v5);
    vecBoxMin = *boxMin;
    v16 = *boxMax;
    vecRayMins = v14;
    vecBoxMax = v16;
    vecRayMaxs = v15;
    return IsBoxIntersectingBox(&vecBoxMin, &vecBoxMax, &vecRayMins, &vecRayMaxs);
  }
  else
  {
    v9 = _mm_mul_ps(_mm_and_ps(*g_SIMD_clear_wmask, ray->m_Delta), _mm_shuffle_ps(flFraction, flFraction, 0));
    v10 = *boxMin;
    vecRayMaxs = v5;
    v11 = _mm_sub_ps(v10, v8);
    v12 = _mm_add_ps(v8, *boxMax);
    rayDelta = v9;
    vecBoxMin = v11;
    vecBoxMax = v12;
    vecRayMins = _mm_div_ps(Four_Ones, v9);
    return IsBoxIntersectingRay(&vecBoxMin, &vecBoxMax, &rayStart, &rayDelta, &vecRayMins, &vecRayMaxs);
  }
}


// CHitboxSystem::AllocHitbox  (line 56, @0x0000000001ebc920, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CopyConstruct<unsigned int>, Element, FastRemove, GrowMemory, GrowVector, InsertMultipleBefore, NumAllocated, operator[]
// calls: CUtlMemory<__vector(4) float, int>::Grow, CUtlMemory<unsigned int, int>::Grow
// callers: CHitboxComponent::Activate
uint __fastcall CHitboxSystem::AllocHitbox(CHitboxSystem *const this, uint nEntityId)
{
  int v4; // ecx
  uint result; // eax
  int v6; // r12d
  __int64 v7; // rdx
  int m_Size; // r12d
  int v9; // edx
  unsigned int *v10; // rdx
  int m_nAllocationCount; // edx
  int v12; // r13d
  uint nHandle; // [rsp+Ch] [rbp-24h]

  v4 = this->m_nFreeList.m_Size - 1;
  if ( v4 < 0 )
  {
    m_Size = this->m_nEntityIds.m_Size;
    v9 = m_Size;
    if ( m_Size == this->m_nEntityIds.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<unsigned int,int>::Grow(&this->m_nEntityIds.m_Memory, 1);
      v9 = this->m_nEntityIds.m_Size;
    }
    this->m_nEntityIds.m_Size = v9 + 1;
    v10 = &this->m_nEntityIds.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
      *v10 = nEntityId;
    result = m_Size;
    v6 = this->m_fl4Bounds.m_Size;
    m_nAllocationCount = this->m_fl4Bounds.m_Memory.m_nAllocationCount;
    v12 = this->m_fl4Bounds.m_Size + 2;
    if ( v12 > m_nAllocationCount )
    {
      nHandle = result;
      CUtlMemory<float  {__vector},int>::Grow(&this->m_fl4Bounds.m_Memory, v12 - m_nAllocationCount);
      result = nHandle;
    }
    this->m_fl4Bounds.m_Size = v12;
  }
  else
  {
    result = this->m_nFreeList.m_Memory.m_pMemory[v4];
    if ( this->m_nFreeList.m_Size > 0 )
      this->m_nFreeList.m_Size = v4;
    v6 = 2 * result;
    this->m_nEntityIds.m_Memory.m_pMemory[result] = nEntityId;
  }
  v7 = v6;
  this->m_fl4Bounds.m_Memory.m_pMemory[v7] = Four_Zeros;
  this->m_fl4Bounds.m_Memory.m_pMemory[v7 + 1] = Four_Zeros;
  return result;
}


// CHitboxSystem::FreeHitbox  (line 79, @0x0000000001ebc880, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, GrowMemory, operator[]
// calls: CUtlMemory<unsigned int, int>::Grow
// callers: CHitboxComponent::~CHitboxComponent
void __fastcall CHitboxSystem::FreeHitbox(CHitboxSystem *const this, uint nHandle)
{
  __int64 m_Size; // r12
  int v5; // eax
  unsigned int *v6; // rax

  this->m_nEntityIds.m_Memory.m_pMemory[nHandle] = 0;
  m_Size = this->m_nFreeList.m_Size;
  v5 = this->m_nFreeList.m_Size;
  if ( m_Size == this->m_nFreeList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<unsigned int,int>::Grow(&this->m_nFreeList.m_Memory, 1);
    v5 = this->m_nFreeList.m_Size;
  }
  this->m_nFreeList.m_Size = v5 + 1;
  v6 = &this->m_nFreeList.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = nHandle;
}


// CHitboxSystem::UpdateHitbox  (line 86, @0x0000000001eb7610, libserver.so)  // inlines: AndSIMD<(ESIMDLevel)20u>, LoadAlignedSIMD<(ESIMDLevel)20u>, LoadUnaligned3SIMD<(ESIMDLevel)20u>, LoadVector, SetWToZeroSIMD<(ESIMDLevel)20u>, _mm_and_ps, _mm_load_ps, _mm_loadu_ps, operator[]
// callers: CHitboxComponent::UpdateHitboxes
void __fastcall CHitboxSystem::UpdateHitbox(
        CHitboxSystem *const this,
        uint nHandle,
        const Vector *const vMins,
        const Vector *const vMaxs)
{
  uint v4; // esi

  v4 = 2 * nHandle;
  this->m_fl4Bounds.m_Memory.m_pMemory[v4] = _mm_and_ps(*&vMins->x, *g_SIMD_clear_wmask);
  this->m_fl4Bounds.m_Memory.m_pMemory[v4 + 1] = _mm_and_ps(*&vMaxs->x, *g_SIMD_clear_wmask);
}


// CHitboxSystem::GetBounds  (line 92, @0x0000000001eb7650, libserver.so)  // inlines: StoreUnaligned3SIMD<(ESIMDLevel)20u>, _mm_store_ss, operator[]
void __fastcall CHitboxSystem::GetBounds(CHitboxSystem *const this, Vector *pMins, Vector *pMaxs, uint nHandle)
{
  uint v4; // ecx

  v4 = 2 * nHandle;
  *pMins = *this->m_fl4Bounds.m_Memory.m_pMemory[v4].m128_f32;
  *pMaxs = *this->m_fl4Bounds.m_Memory.m_pMemory[v4 + 1].m128_f32;
}


// CHitboxSystem::TestHitboxes  (line 110, @0x0000000001eb76b0, libserver.so)  // inlines: CEntityHandle, CGameTrace, DidHit, EntityFromEntityID, GetComponent<CHitboxComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, GetSkeletonInstance, IndexToIdentity, LookupEntity, RnCollisionAttr_t, operator CBaseEntity*, operator=, operator[]
// calls: IsBoxIntersectingShortenedRay, CPhysicsGameSystem::ShouldHitQuery, CGameTrace::Init, CSkeletonInstance::TraceRayAgainstHitboxes
// callers: CGamePhysicsQueryInterface::TraceRay
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CHitboxSystem::TestHitboxes(
        CHitboxSystem *const this,
        const Ray_t *const ray,
        CGameQueryAttributes *pTraceFilter,
        CUtlStringToken hitboxSetName,
        CGameTrace *pResults)
{
  __int64 v8; // rbx
  CEntityInstance *m_pInstance; // rdx
  vec_t *v10; // rdi
  vec_t v11; // eax
  unsigned int v12; // ecx
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx
  CEntityIdentity *m_pEntity; // rsi
  int (**vptr_IHandleEntity)(...); // r14
  CEntityInstance *v17; // rax
  __int64 m_nBaseOffset; // rsi
  uint64 *v19; // rax
  uint64 v20; // rdx
  uint64 v21; // rax
  CSkeletonInstance *v22; // rax
  float fraction; // xmm0_4
  uint8 type; // al
  vec_t y; // xmm1_4
  uint8 signbits; // al
  vec_t x; // xmm1_4
  __int16 v28; // ax
  vec_t z; // xmm1_4
  uint64 contents; // rax
  vec_t v31; // xmm1_4
  float dist; // xmm1_4
  const CPhysSurfaceProperties *m_pSurfaceProperties; // rax
  const CHitBox *m_pHitbox; // rax
  vec_t v35; // xmm1_4
  IPhysicsBody *m_hBody; // rax
  vec_t v37; // xmm1_4
  IPhysicsShape *m_hShape; // rax
  vec_t v39; // xmm1_4
  uint64 m_nInteractsAs; // rax
  int *pHitgroupTable; // [rsp+0h] [rbp-130h]
  int *pHitgroupTablea; // [rsp+0h] [rbp-130h]
  int nTableCount; // [rsp+10h] [rbp-120h]
  float flCurrentFraction; // [rsp+2Ch] [rbp-104h]
  RnCollisionAttr_t queryAttr; // [rsp+30h] [rbp-100h] BYREF
  CGameTrace results; // [rsp+50h] [rbp-E0h] BYREF

  if ( this->m_nEntityIds.m_Size > 0 )
  {
    v8 = 0;
    flCurrentFraction = 1.0;
    do
    {
      if ( this->m_nEntityIds.m_Memory.m_pMemory[v8] != 0
        && IsBoxIntersectingShortenedRay(
             &this->m_fl4Bounds.m_Memory.m_pMemory[2 * v8],
             &this->m_fl4Bounds.m_Memory.m_pMemory[2 * v8 + 1],
             ray,
             LODWORD(flCurrentFraction),
             0LL) )
      {
        m_pInstance = 0;
        v10 = &this->m_nEntityIds.m_Memory.m_pMemory[v8];
        v11 = *v10;
        v12 = *v10 + 2;
        results.startpos.x = *v10;
        if ( v12 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(results.startpos.x) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[LOWORD(results.startpos.x) & 0x1FF];
            if ( v14 != 0 && LODWORD(v11) == v14->m_EHandle.m_Index )
              m_pInstance = v14->m_pInstance;
          }
        }
        m_pEntity = m_pInstance->m_pEntity;
        vptr_IHandleEntity = m_pInstance[1]._vptr_IHandleEntity;
        v17 = m_pEntity->m_pInstance;
        if ( m_pEntity->m_pInstance != 0 )
        {
          m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
          if ( m_nBaseOffset != 0xFFFF )
          {
            pHitgroupTable = (v17 + m_nBaseOffset);
            if ( (v17 + m_nBaseOffset) != 0 && vptr_IHandleEntity != 0 )
            {
              v19 = m_pInstance[11]._vptr_IHandleEntity;
              queryAttr.m_nInteractsAs = v19[3];
              queryAttr.m_nInteractsWith = v19[4];
              v20 = v19[5];
              v21 = v19[6];
              queryAttr.m_nInteractsExclude = v20;
              *&queryAttr.m_nEntityId = v21;
              *&v21 = *v10;
              queryAttr.m_nCollisionFunctionMask &= ~0x10u;
              queryAttr.m_nEntityId = v21;
              if ( CPhysicsGameSystem::ShouldHitQuery(g_pPhysicsGameSystem, pTraceFilter, &queryAttr) )
              {
                memset(&results.m_ShapeAttributes, 0, 31);
                results.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                CGameTrace::Init(&results);
                nTableCount = pHitgroupTable[1];
                pHitgroupTablea = *(pHitgroupTable + 1);
                v22 = (*(*vptr_IHandleEntity[1] + 72LL))(vptr_IHandleEntity[1]);
                CSkeletonInstance::TraceRayAgainstHitboxes(
                  v22,
                  ray,
                  &results,
                  hitboxSetName,
                  pHitgroupTablea,
                  nTableCount);
                fraction = results.fraction;
                if ( flCurrentFraction > results.fraction )
                {
                  type = results.plane.type;
                  pResults->fraction = results.fraction;
                  pResults->startpos.x = results.startpos.x;
                  y = results.startpos.y;
                  pResults->plane.type = type;
                  signbits = results.plane.signbits;
                  pResults->startpos.y = y;
                  pResults->startpos.z = results.startpos.z;
                  x = results.endpos.x;
                  pResults->plane.signbits = signbits;
                  v28 = *results.plane.pad;
                  pResults->endpos.x = x;
                  pResults->endpos.y = results.endpos.y;
                  z = results.endpos.z;
                  *pResults->plane.pad = v28;
                  contents = results.contents;
                  pResults->endpos.z = z;
                  pResults->plane.normal.x = results.plane.normal.x;
                  v31 = results.plane.normal.y;
                  pResults->contents = contents;
                  LOBYTE(contents) = results.startsolid;
                  pResults->plane.normal.y = v31;
                  pResults->plane.normal.z = results.plane.normal.z;
                  dist = results.plane.dist;
                  pResults->startsolid = contents;
                  m_pSurfaceProperties = results.m_pSurfaceProperties;
                  pResults->plane.dist = dist;
                  pResults->m_pSurfaceProperties = m_pSurfaceProperties;
                  pResults->m_pEnt = results.m_pEnt;
                  m_pHitbox = results.m_pHitbox;
                  flCurrentFraction = fraction;
                  pResults->boneLocalPos.x = results.boneLocalPos.x;
                  v35 = results.boneLocalPos.y;
                  pResults->m_pHitbox = m_pHitbox;
                  m_hBody = results.m_hBody;
                  pResults->boneLocalPos.y = v35;
                  pResults->boneLocalPos.z = results.boneLocalPos.z;
                  v37 = results.boneLocalNormal.x;
                  pResults->m_hBody = m_hBody;
                  m_hShape = results.m_hShape;
                  pResults->boneLocalNormal.x = v37;
                  pResults->boneLocalNormal.y = results.boneLocalNormal.y;
                  v39 = results.boneLocalNormal.z;
                  pResults->m_hShape = m_hShape;
                  m_nInteractsAs = results.m_ShapeAttributes.m_nInteractsAs;
                  pResults->boneLocalNormal.z = v39;
                  pResults->m_ShapeAttributes.m_nInteractsAs = m_nInteractsAs;
                  pResults->m_ShapeAttributes.m_nInteractsWith = results.m_ShapeAttributes.m_nInteractsWith;
                  pResults->m_ShapeAttributes.m_nInteractsExclude = results.m_ShapeAttributes.m_nInteractsExclude;
                  *&pResults->m_ShapeAttributes.m_nEntityId = *&results.m_ShapeAttributes.m_nEntityId;
                  pResults->m_nFaceIndex = results.m_nFaceIndex;
                  pResults->hitboxBoneIndex = results.hitboxBoneIndex;
                  pResults->unused0 = results.unused0;
                }
              }
            }
          }
        }
      }
      ++v8;
    }
    while ( this->m_nEntityIds.m_Size > v8 );
  }
  return pResults->fraction < 1.0 || pResults->startsolid;
}


// CHitboxSystem::TestHitboxes  (line 148, @0x0000000001eb7b30, libserver.so)  // inlines: CEntityHandle, CGameTrace, DidHit, EntityFromEntityID, GetComponent<CHitboxComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, GetSkeletonInstance, IndexToIdentity, LookupEntity, MakeStringToken, RnCollisionAttr_t, operator CBaseEntity*, operator[]
// calls: IsBoxIntersectingShortenedRay, CPhysicsGameSystem::ShouldHitQuery, CGameTrace::Init, CSkeletonInstance::TraceRayAgainstHitboxes, CGameTrace::operator=, CSkeletonInstance::GetHitboxSetName, MurmurHash2LowerCase, RegisterStringToken
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CHitboxSystem::TestHitboxes(
        CHitboxSystem *const this,
        const Ray_t *const ray,
        CTraceFilter *pTraceFilter,
        CUtlStringToken hitboxSetName,
        CGameTrace *pResults)
{
  __int64 v8; // rbx
  vec_t *v9; // rcx
  vec_t v10; // eax
  unsigned int v11; // edx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r9
  CEntityIdentity *m_pEntity; // rdx
  __int64 m_nBaseOffset; // r14
  __int64 v17; // r14
  uint64 *vptr_IHandleEntity; // rax
  uint64 v19; // rdx
  uint64 v20; // rax
  int (**v21)(...); // r8
  int v22; // r9d
  const int *v23; // r14
  CSkeletonInstance *v24; // rax
  const CSkeletonInstance *v26; // rax
  const char *v27; // rax
  uint32 v28; // eax
  int (**v29)(...); // [rsp+0h] [rbp-140h]
  int nTableCount[2]; // [rsp+8h] [rbp-138h]
  int nTableCountb; // [rsp+8h] [rbp-138h]
  int nTableCounta[2]; // [rsp+8h] [rbp-138h]
  CGameQueryAttributes *queryAttribute; // [rsp+20h] [rbp-120h]
  float flCurrentFraction; // [rsp+3Ch] [rbp-104h]
  RnCollisionAttr_t queryAttr; // [rsp+40h] [rbp-100h] BYREF
  CGameTrace results; // [rsp+60h] [rbp-E0h] BYREF

  if ( this->m_nEntityIds.m_Size > 0 )
  {
    v8 = 0;
    flCurrentFraction = 1.0;
    queryAttribute = &pTraceFilter->m_attr;
    do
    {
      if ( this->m_nEntityIds.m_Memory.m_pMemory[v8] != 0
        && IsBoxIntersectingShortenedRay(
             &this->m_fl4Bounds.m_Memory.m_pMemory[2 * v8],
             &this->m_fl4Bounds.m_Memory.m_pMemory[2 * v8 + 1],
             ray,
             LODWORD(flCurrentFraction),
             0LL) )
      {
        v9 = &this->m_nEntityIds.m_Memory.m_pMemory[v8];
        v10 = *v9;
        v11 = *v9 + 2;
        results.startpos.x = *v9;
        if ( v11 > 1 )
        {
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(results.startpos.x) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[LOWORD(results.startpos.x) & 0x1FF];
            if ( v13 != 0 && LODWORD(v10) == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0 )
              {
                m_pEntity = m_pInstance->m_pEntity;
                if ( m_pEntity->m_pInstance != 0 )
                {
                  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
                  if ( m_nBaseOffset != 0xFFFF )
                  {
                    v17 = m_pEntity->m_pInstance + m_nBaseOffset;
                    if ( v17 != 0 && m_pInstance[1]._vptr_IHandleEntity != 0 )
                    {
                      vptr_IHandleEntity = m_pInstance[11]._vptr_IHandleEntity;
                      v29 = m_pInstance[1]._vptr_IHandleEntity;
                      *nTableCount = m_pInstance;
                      queryAttr.m_nInteractsAs = vptr_IHandleEntity[3];
                      queryAttr.m_nInteractsWith = vptr_IHandleEntity[4];
                      v19 = vptr_IHandleEntity[5];
                      v20 = vptr_IHandleEntity[6];
                      queryAttr.m_nInteractsExclude = v19;
                      *&queryAttr.m_nEntityId = v20;
                      *&v20 = *v9;
                      queryAttr.m_nCollisionFunctionMask &= ~0x10u;
                      queryAttr.m_nEntityId = v20;
                      if ( CPhysicsGameSystem::ShouldHitQuery(g_pPhysicsGameSystem, queryAttribute, &queryAttr)
                        && (*(pTraceFilter->_vptr_CTraceFilter + 2))(pTraceFilter, *nTableCount) != 0 )
                      {
                        memset(&results.m_ShapeAttributes, 0, 31);
                        results.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                        CGameTrace::Init(&results);
                        v21 = v29;
                        if ( hitboxSetName.m_nHashCode == 0 )
                        {
                          v26 = (*(*v29[1] + 72LL))(v29[1]);
                          v27 = CSkeletonInstance::GetHitboxSetName(v26);
                          v21 = v29;
                          if ( v27 != 0 && *v27 != 0 )
                          {
                            *nTableCounta = v27;
                            v28 = MurmurHash2LowerCase(v27, 0x31415926u);
                            hitboxSetName.m_nHashCode = v28;
                            v21 = v29;
                            if ( g_bUpdateStringTokenDatabase )
                            {
                              RegisterStringToken(v28, *nTableCounta, 0, 1);
                              v21 = v29;
                            }
                          }
                        }
                        v22 = *(v17 + 4);
                        v23 = *(v17 + 8);
                        nTableCountb = v22;
                        v24 = (*(*v21[1] + 72LL))(v21[1]);
                        CSkeletonInstance::TraceRayAgainstHitboxes(v24, ray, &results, hitboxSetName, v23, nTableCountb);
                        if ( flCurrentFraction > results.fraction )
                        {
                          CGameTrace::operator=(pResults, &results);
                          flCurrentFraction = results.fraction;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v8;
    }
    while ( this->m_nEntityIds.m_Size > v8 );
  }
  return pResults->fraction < 1.0 || pResults->startsolid;
}


// CHitboxSystem::TestHitboxesMultiple  (line 198, @0x0000000001ebf680, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CEntityHandle, CGameTrace, Construct<CGameTrace>, Element, EntityFromEntityID, GetComponent<CHitboxComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, GetSkeletonInstance, GrowMemory, IndexToIdentity, LookupEntity, RnCollisionAttr_t, operator CBaseEntity*, operator[]
// calls: IsBoxIntersectingShortenedRay, CPhysicsGameSystem::ShouldHitQuery, CGameTrace::Init, CSkeletonInstance::TraceRayAgainstHitboxes, CGameTrace::operator=, CUtlMemory<CGameTrace, int>::Grow
// callers: CGamePhysicsQueryInterface::RaycastMultiple, CGamePhysicsQueryInterface::TraceRayWithSortedResults
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CHitboxSystem::TestHitboxesMultiple(
        CHitboxSystem *const this,
        const Ray_t *const ray,
        CGameQueryAttributes *pTraceFilter,
        CUtlStringToken hitboxSetName,
        CGameTraceList *const resultList)
{
  int v7; // r12d
  unsigned __int64 v8; // rbx
  vec_t *v10; // rsi
  vec_t v11; // eax
  unsigned int v12; // edx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *v17; // rax
  __int64 m_nBaseOffset; // rdx
  uint64 *vptr_IHandleEntity; // rax
  uint64 v20; // rdx
  uint64 v21; // rax
  CSkeletonInstance *v22; // rax
  __int64 m_Size; // rax
  int v24; // edx
  CGameTrace *v25; // rdi
  CGameTrace_2 *v26; // rax
  __int64 v28; // [rsp+0h] [rbp-140h]
  int nTableCount[2]; // [rsp+8h] [rbp-138h]
  int nTableCounta; // [rsp+8h] [rbp-138h]
  int *pHitgroupTable; // [rsp+10h] [rbp-130h]
  int *pHitgroupTableb; // [rsp+10h] [rbp-130h]
  __int64 pHitgroupTablea; // [rsp+10h] [rbp-130h]
  int pHitgroupTablec; // [rsp+10h] [rbp-130h]
  CUtlVectorBase<CGameTrace,CUtlMemoryFixedGrowable<CGameTrace,64ul,int> >::CAllocator *p_m_Memory; // [rsp+18h] [rbp-128h]
  RnCollisionAttr_t queryAttr; // [rsp+40h] [rbp-100h] BYREF
  CGameTrace results; // [rsp+60h] [rbp-E0h] BYREF

  v7 = 0;
  v8 = 0;
  if ( this->m_nEntityIds.m_Size > 0 )
  {
    p_m_Memory = &resultList->m_list.m_Memory;
    do
    {
      if ( this->m_nEntityIds.m_Memory.m_pMemory[v8 / 2] != 0
        && IsBoxIntersectingShortenedRay(
             &this->m_fl4Bounds.m_Memory.m_pMemory[v8],
             &this->m_fl4Bounds.m_Memory.m_pMemory[v8 + 1],
             ray,
             0x3F800000u,
             0LL) )
      {
        v10 = &this->m_nEntityIds.m_Memory.m_pMemory[v8 / 2];
        v11 = *v10;
        v12 = *v10 + 2;
        results.startpos.x = *v10;
        if ( v12 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(results.startpos.x) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[LOWORD(results.startpos.x) & 0x1FF];
            if ( v14 != 0 && LODWORD(v11) == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 )
              {
                m_pEntity = m_pInstance->m_pEntity;
                v17 = m_pEntity->m_pInstance;
                if ( m_pEntity->m_pInstance != 0 )
                {
                  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
                  if ( m_nBaseOffset != 0xFFFF )
                  {
                    pHitgroupTable = (v17 + m_nBaseOffset);
                    if ( (v17 + m_nBaseOffset) != 0 && m_pInstance[1]._vptr_IHandleEntity != 0 )
                    {
                      vptr_IHandleEntity = m_pInstance[11]._vptr_IHandleEntity;
                      *nTableCount = m_pInstance[1]._vptr_IHandleEntity;
                      queryAttr.m_nInteractsAs = vptr_IHandleEntity[3];
                      queryAttr.m_nInteractsWith = vptr_IHandleEntity[4];
                      v20 = vptr_IHandleEntity[5];
                      v21 = vptr_IHandleEntity[6];
                      queryAttr.m_nInteractsExclude = v20;
                      *&queryAttr.m_nEntityId = v21;
                      *&v21 = *v10;
                      queryAttr.m_nCollisionFunctionMask &= ~0x10u;
                      queryAttr.m_nEntityId = v21;
                      if ( CPhysicsGameSystem::ShouldHitQuery(g_pPhysicsGameSystem, pTraceFilter, &queryAttr) )
                      {
                        v28 = *nTableCount;
                        memset(&results.m_ShapeAttributes, 0, 31);
                        results.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                        CGameTrace::Init(&results);
                        nTableCounta = pHitgroupTable[1];
                        pHitgroupTableb = *(pHitgroupTable + 1);
                        v22 = (*(**(v28 + 8) + 72LL))(*(v28 + 8));
                        CSkeletonInstance::TraceRayAgainstHitboxes(
                          v22,
                          ray,
                          &results,
                          hitboxSetName,
                          pHitgroupTableb,
                          nTableCounta);
                        if ( results.fraction < 1.0 )
                        {
                          m_Size = resultList->m_list.m_Size;
                          v24 = resultList->m_list.m_Size;
                          if ( m_Size == resultList->m_list.m_Memory.m_nAllocationCount )
                          {
                            pHitgroupTablec = resultList->m_list.m_Size;
                            CUtlMemory<CGameTrace,int>::Grow(p_m_Memory, 1);
                            v24 = resultList->m_list.m_Size;
                            m_Size = pHitgroupTablec;
                          }
                          v25 = 0;
                          resultList->m_list.m_Size = v24 + 1;
                          pHitgroupTablea = m_Size;
                          v26 = &resultList->m_list.m_Memory.m_pMemory[m_Size];
                          if ( v26 != 0 )
                          {
                            v26->m_ShapeAttributes.m_nInteractsAs = 0;
                            v26->m_ShapeAttributes.m_nHierarchyId = 0;
                            v26->m_ShapeAttributes.m_nInteractsWith = 0;
                            v26->m_ShapeAttributes.m_nInteractsExclude = 0;
                            v26->m_ShapeAttributes.m_nCollisionGroup = 0;
                            v26->m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                            v26->m_ShapeAttributes.m_nEntityId = 0;
                            CGameTrace::Init(v26);
                            v25 = &resultList->m_list.m_Memory.m_pMemory[pHitgroupTablea];
                          }
                          CGameTrace::operator=(v25, &results);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v7;
      v8 += 2LL;
    }
    while ( this->m_nEntityIds.m_Size > v7 );
  }
  return resultList->m_list.m_Size != 0;
}


// CHitboxSystem::OverlapHitboxes  (line 246, @0x0000000001ebe920, libserver.so)  // inlines: AddToTail, CEntityHandle, COverlapHit, Construct<COverlapHit>, Element, EntityFromEntityID, GetComponent<CHitboxComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, HitboxComponentForEntity, IndexToIdentity, LookupEntity, RnCollisionAttr_t, SetEntityId, SetHitboxHit, SetHitboxResult, SetPhysicsBody, SetShape, SetShapeAttributes, SetSurfaceProperties, operator CBaseEntity*, operator[]
// calls: IsBoxIntersectingShortenedRay, CPhysicsGameSystem::ShouldHitQuery, CUtlMemory<COverlapHit, int>::Grow
// callers: CGamePhysicsQueryInterface::EntitiesInBox, CGamePhysicsQueryInterface::EntitiesAlongRay
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CHitboxSystem::OverlapHitboxes(
        CHitboxSystem *const this,
        const Ray_t *const ray,
        CGameQueryAttributes *pTraceFilter,
        COverlapList *const results,
        float flTolerance)
{
  int v5; // r15d
  unsigned __int64 v6; // r14
  unsigned int *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // esi
  CEntityIdentity *v13; // rsi
  CEntityIdentity *v14; // rsi
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rsi
  CEntityInstance *v17; // rdi
  __int64 m_nBaseOffset; // rsi
  uint32 v19; // eax
  __int64 m_Size; // rax
  int v21; // edx
  __int64 v22; // rax
  char *v23; // rdx
  char *v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rdx
  CUtlVectorBase<COverlapHit,CUtlMemoryFixedGrowable<COverlapHit,64ul,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-70h]
  int v30; // [rsp+18h] [rbp-58h]
  RnCollisionAttr_t queryAttr; // [rsp+20h] [rbp-50h] BYREF

  v5 = 0;
  v6 = 0;
  if ( this->m_nEntityIds.m_Size > 0 )
  {
    p_m_Memory = &results->m_list.m_Memory;
    do
    {
      if ( this->m_nEntityIds.m_Memory.m_pMemory[v6 / 2] != 0
        && IsBoxIntersectingShortenedRay(
             &this->m_fl4Bounds.m_Memory.m_pMemory[v6],
             &this->m_fl4Bounds.m_Memory.m_pMemory[v6 + 1],
             ray,
             0x3F800000u,
             LODWORD(flTolerance)) )
      {
        v10 = &this->m_nEntityIds.m_Memory.m_pMemory[v6 / 2];
        v11 = *v10;
        v12 = *v10 + 2;
        LODWORD(queryAttr.m_nInteractsAs) = *v10;
        if ( v12 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(queryAttr.m_nInteractsAs) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[queryAttr.m_nInteractsAs & 0x1FF];
            if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 )
              {
                m_pEntity = m_pInstance->m_pEntity;
                v17 = m_pEntity->m_pInstance;
                if ( m_pEntity->m_pInstance != 0 )
                {
                  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
                  if ( m_nBaseOffset != 0xFFFF && (v17 + m_nBaseOffset) != 0 && m_pInstance[1]._vptr_IHandleEntity != 0 )
                  {
                    queryAttr = *(m_pInstance[11]._vptr_IHandleEntity + 3);
                    v19 = *v10;
                    queryAttr.m_nCollisionFunctionMask &= ~0x10u;
                    queryAttr.m_nEntityId = v19;
                    if ( CPhysicsGameSystem::ShouldHitQuery(g_pPhysicsGameSystem, pTraceFilter, &queryAttr) )
                    {
                      m_Size = results->m_list.m_Size;
                      v21 = results->m_list.m_Size;
                      if ( m_Size == results->m_list.m_Memory.m_nAllocationCount )
                      {
                        v30 = results->m_list.m_Size;
                        CUtlMemory<COverlapHit,int>::Grow(p_m_Memory, 1);
                        v21 = results->m_list.m_Size;
                        m_Size = v30;
                      }
                      v22 = m_Size << 6;
                      results->m_list.m_Size = v21 + 1;
                      v23 = results->m_list.m_Memory.m_pMemory + v22;
                      if ( v23 != 0 )
                      {
                        *v23 = 0;
                        *(v23 + 1) = 0;
                        *(v23 + 2) = 0;
                        v23[30] = 0;
                        v23[31] = 7;
                        *(v23 + 6) = 0;
                        *(v23 + 14) = 0;
                        v23[56] = 0;
                        v24 = results->m_list.m_Memory.m_pMemory + v22;
                      }
                      else
                      {
                        v24 = 0;
                      }
                      v25 = this->m_nEntityIds.m_Memory.m_pMemory[v6 / 2];
                      v24[56] = 1;
                      *(v24 + 5) = 0;
                      *(v24 + 6) = 0;
                      *(v24 + 6) = v25;
                      *v24 = queryAttr.m_nInteractsAs;
                      *(v24 + 1) = queryAttr.m_nInteractsWith;
                      *(v24 + 2) = queryAttr.m_nInteractsExclude;
                      v26 = *&queryAttr.m_nEntityId;
                      *(v24 + 4) = 0;
                      *(v24 + 3) = v26;
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v5;
      v6 += 2LL;
    }
    while ( this->m_nEntityIds.m_Size > v5 );
  }
  return results->m_list.m_Size;
}


// CHitboxSystem::OverlapHitboxes  (line 275, @0x0000000001ebe680, libserver.so)  // inlines: AddToTail, CEntityHandle, COverlapHit, Construct<COverlapHit>, Element, EntityFromEntityID, GetComponent<CHitboxComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, HitboxComponentForEntity, IndexToIdentity, LookupEntity, RnCollisionAttr_t, SetEntityId, SetHitboxHit, SetHitboxResult, SetPhysicsBody, SetShape, SetShapeAttributes, SetSurfaceProperties, operator CBaseEntity*, operator[]
// calls: IsBoxIntersectingShortenedRay, CPhysicsGameSystem::ShouldHitQuery, CUtlMemory<COverlapHit, int>::Grow
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CHitboxSystem::OverlapHitboxes(
        CHitboxSystem *const this,
        const Ray_t *const ray,
        CTraceFilter *pTraceFilter,
        COverlapList *const results,
        float flTolerance)
{
  unsigned __int64 v5; // r15
  int v6; // r14d
  unsigned int *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *v17; // rsi
  __int64 m_nBaseOffset; // rax
  uint32 v19; // eax
  __int64 m_Size; // rax
  int v21; // edx
  __int64 v22; // rax
  char *v23; // rdx
  char *v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rdx
  CUtlVectorBase<COverlapHit,CUtlMemoryFixedGrowable<COverlapHit,64ul,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-80h]
  CEntityInstance *v29; // [rsp+8h] [rbp-78h]
  int v30; // [rsp+8h] [rbp-78h]
  CGameQueryAttributes *queryAttribute; // [rsp+10h] [rbp-70h]
  RnCollisionAttr_t queryAttr; // [rsp+30h] [rbp-50h] BYREF

  v5 = 0;
  v6 = 0;
  if ( this->m_nEntityIds.m_Size > 0 )
  {
    queryAttribute = &pTraceFilter->m_attr;
    p_m_Memory = &results->m_list.m_Memory;
    do
    {
      if ( this->m_nEntityIds.m_Memory.m_pMemory[v5 / 2] != 0
        && IsBoxIntersectingShortenedRay(
             &this->m_fl4Bounds.m_Memory.m_pMemory[v5],
             &this->m_fl4Bounds.m_Memory.m_pMemory[v5 + 1],
             ray,
             0x3F800000u,
             LODWORD(flTolerance)) )
      {
        v10 = &this->m_nEntityIds.m_Memory.m_pMemory[v5 / 2];
        v11 = *v10;
        v12 = *v10 + 2;
        LODWORD(queryAttr.m_nInteractsAs) = *v10;
        if ( v12 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(queryAttr.m_nInteractsAs) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[queryAttr.m_nInteractsAs & 0x1FF];
            if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( m_pInstance != 0 )
              {
                m_pEntity = m_pInstance->m_pEntity;
                v17 = m_pEntity->m_pInstance;
                if ( m_pEntity->m_pInstance != 0 )
                {
                  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
                  if ( m_nBaseOffset != 0xFFFF && (v17 + m_nBaseOffset) != 0 && m_pInstance[1]._vptr_IHandleEntity != 0 )
                  {
                    v29 = m_pInstance;
                    queryAttr = *(m_pInstance[11]._vptr_IHandleEntity + 3);
                    v19 = *v10;
                    queryAttr.m_nCollisionFunctionMask &= ~0x10u;
                    queryAttr.m_nEntityId = v19;
                    if ( CPhysicsGameSystem::ShouldHitQuery(g_pPhysicsGameSystem, queryAttribute, &queryAttr)
                      && (*(pTraceFilter->_vptr_CTraceFilter + 2))(pTraceFilter, v29) != 0 )
                    {
                      m_Size = results->m_list.m_Size;
                      v21 = results->m_list.m_Size;
                      if ( m_Size == results->m_list.m_Memory.m_nAllocationCount )
                      {
                        v30 = results->m_list.m_Size;
                        CUtlMemory<COverlapHit,int>::Grow(p_m_Memory, 1);
                        v21 = results->m_list.m_Size;
                        m_Size = v30;
                      }
                      v22 = m_Size << 6;
                      results->m_list.m_Size = v21 + 1;
                      v23 = results->m_list.m_Memory.m_pMemory + v22;
                      if ( v23 != 0 )
                      {
                        *v23 = 0;
                        *(v23 + 1) = 0;
                        *(v23 + 2) = 0;
                        v23[30] = 0;
                        v23[31] = 7;
                        *(v23 + 6) = 0;
                        *(v23 + 14) = 0;
                        v23[56] = 0;
                        v24 = results->m_list.m_Memory.m_pMemory + v22;
                      }
                      else
                      {
                        v24 = 0;
                      }
                      v25 = this->m_nEntityIds.m_Memory.m_pMemory[v5 / 2];
                      v24[56] = 1;
                      *(v24 + 5) = 0;
                      *(v24 + 6) = 0;
                      *(v24 + 6) = v25;
                      *v24 = queryAttr.m_nInteractsAs;
                      *(v24 + 1) = queryAttr.m_nInteractsWith;
                      *(v24 + 2) = queryAttr.m_nInteractsExclude;
                      v26 = *&queryAttr.m_nEntityId;
                      *(v24 + 4) = 0;
                      *(v24 + 3) = v26;
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v6;
      v5 += 2LL;
    }
    while ( this->m_nEntityIds.m_Size > v6 );
  }
  return results->m_list.m_Size;
}


// CHitboxSystem::DebugDrawHitboxes  (line 310, @0x0000000001eb7f00, libserver.so)  // inlines: CEntityHandle, GetComponent<CBodyComponent>, GetEntityIdentity, GetEntryIndex, GetSkeletonInstance, IndexToIdentity, LookupEntity, operator CEntityIdentity*, operator[]
// calls: CSkeletonInstance::DebugShowHitboxes
// callers: CPhysicsGameSystem::UpdateDebugRenderables, CPhysicsGameSystem::PullKinematicTransformsWorker, CPhysicsGameSystem::PushDynamicTransformsWorker
// globals: CEntityHandle::gm_pEntityList
void __fastcall CHitboxSystem::DebugDrawHitboxes(CHitboxSystem *const this)
{
  int v2; // r12d
  unsigned __int64 v3; // rbx
  _0 *m_pMemory; // rax
  unsigned int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v9; // rax
  const CSkeletonInstance *v10; // rax
  Vector vMins; // [rsp+30h] [rbp-50h] BYREF
  Vector vMaxs; // [rsp+40h] [rbp-40h] BYREF

  v2 = 0;
  v3 = 0;
  while ( this->m_nEntityIds.m_Size > v2 )
  {
    while ( 1 )
    {
      if ( this->m_nEntityIds.m_Memory.m_pMemory[v3 / 4] != 0 )
      {
        m_pMemory = this->m_fl4Bounds.m_Memory.m_pMemory;
        vMins = *m_pMemory[v3 / 2].m128_i8;
        vMaxs = *m_pMemory[v3 / 2 + 1].m128_i8;
        (*(*g_pDebugOverlay + 368LL))(g_pDebugOverlay, &vec3_origin, &vMins, &vMaxs, &vec3_angle, 0, 0.0, 255, 0, 0);
        v5 = this->m_nEntityIds.m_Memory.m_pMemory[v3 / 4];
        if ( v5 + 2 > 1 )
        {
          v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[v5 & 0x1FF];
            if ( v7 != 0 && v5 == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
            {
              m_nBaseOffset = v7->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
              if ( m_nBaseOffset != 0xFFFF )
              {
                v9 = *(&v7->m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
                if ( v9 != 0 )
                  break;
              }
            }
          }
        }
      }
      ++v2;
      v3 += 4LL;
      if ( this->m_nEntityIds.m_Size <= v2 )
        return;
    }
    ++v2;
    v3 += 4LL;
    v10 = (*(**(v9 + 8) + 72LL))(*(v9 + 8));
    CSkeletonInstance::DebugShowHitboxes(v10, 0, 0xFFFF);
  }
}


// CHitboxComponent::CHitboxComponent  (line 343, @0x0000000001eb8090, libserver.so)
// callers: CSchemaClassBinding<CHitboxComponent>::Allocate, CSchemaClassBinding<CHitboxComponent>::AllocateAndCopyConstruct, CSchemaClassBinding<CHitboxComponent>::ConstructInPlace, CBaseAnimating::CBaseAnimating
void __fastcall CHitboxComponent::CHitboxComponent(CHitboxComponent *const this)
{
  this->m_nHitboxHandle = -1;
}


// CHitboxComponent::~CHitboxComponent  (line 348, @0x0000000001ebc8f0, libserver.so)
// calls: CHitboxSystem::FreeHitbox
// callers: CBreakableProp::~CBreakableProp, CDevtestHierarchy2::~CDevtestHierarchy2, CDevtestHierarchyChild::~CDevtestHierarchyChild, CDevtestHierarchy::~CDevtestHierarchy, CDynamicPropAlias_prop_dynamic_override::~CDynamicPropAlias_prop_dynamic_override, CDynamicPropAlias_dynamic_prop::~CDynamicPropAlias_dynamic_prop, CRagGib::~CRagGib, CSchemaClassBinding<CHitboxComponent>::Deallocate, CSchemaClassBinding<CHitboxComponent>::DestructInPlace, CBaseAnimating::~CBaseAnimating, CBaseAnimatingOverlay::~CBaseAnimatingOverlay, CBaseProp::~CBaseProp (62 total)
// globals: g_HitboxSystem
void __fastcall CHitboxComponent::~CHitboxComponent(CHitboxComponent *const this)
{
  if ( this->m_nHitboxHandle != -1 )
    CHitboxSystem::FreeHitbox(&g_HitboxSystem, this->m_nHitboxHandle);
}


// CHitboxComponent::SetHitGroupPriority  (line 356, @0x0000000001eb80a0, libserver.so)
void __fastcall CHitboxComponent::SetHitGroupPriority(
        CHitboxComponent *const this,
        const int *pPriorityTable,
        int nTableSize)
{
  this->m_nHitGroupPriorityCount = nTableSize;
  this->m_pHitGroupPriorities = pPriorityTable;
}


// CHitboxComponent::Activate  (line 362, @0x0000000001ebca00, libserver.so)  // inlines: CEntityHandle, GetComponent<CBodyComponent>, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModelData, GetSerialNumber, GetSkeletonInstance, IndexToIdentity, Init, IsValid, LookupEntity, operator CBaseEntity*, operator const RuntimeClass_t*, operator[]
// calls: CModel::GetMeshData, CHitboxSystem::AllocHitbox, CHitboxComponent::UpdateHitboxes
// callers: CHitboxComponent::UpdateHitboxes, CGameEntitySystem::Activate
// globals: CEntityHandle::gm_pEntityList, g_HitboxSystem
bool __fastcall CHitboxComponent::Activate(CHitboxComponent *const this, CEntityInstance *pEntity)
{
  __int64 m_Index_low; // rsi
  CEntityIdentity *v5; // rdx
  __int64 v6; // rcx
  CEntityIdentity *v7; // rdx
  CEntityInstance *v8; // r12
  CEntityIdentity *m_pEntity; // rax
  uint v10; // ebx
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  const CModel *const *v15; // rax
  const CRenderMesh *MeshData; // rax
  int m_NumElements; // edx
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  CUtlVector<CHitBox,CUtlMemory<CHitBox,int> > *p_m_HitBoxes; // rax
  __int64 v20; // rcx
  int v21; // edx
  int (**vptr_IHandleEntity)(...); // rax
  uint v24[12]; // [rsp+0h] [rbp-30h] BYREF

  if ( pEntity == 0 )
    return 1;
  (*(pEntity->_vptr_IHandleEntity + 3))(v24);
  m_Index_low = CEntityHandle::gm_pEntityList;
  if ( v24[0] + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24[0]) >> 9) & 0x3F]) == 0
    || (v6 = v24[0] & 0x1FF, m_Index_low = 8 * v6, (v7 = &v5[v6]) == 0)
    || v24[0] != v7->m_EHandle.m_Index
    || (v8 = v7->m_pInstance, v7->m_pInstance == 0) )
  {
    v8 = 0;
LABEL_7:
    m_pEntity = pEntity->m_pEntity;
    v10 = -1;
    if ( m_pEntity != 0 )
    {
      m_Index_low = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
      {
        m_Index_low = LOWORD(m_pEntity->m_EHandle.m_Index);
        LOWORD(m_Index_low) = m_Index_low & 0x7FFF;
      }
      v10 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | m_Index_low & 0x7FFF;
      v24[0] = v10;
    }
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      v13 = 0;
      if ( m_nBaseOffset != 0xFFFF )
        v13 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
    }
    else
    {
      v13 = 0;
    }
    v14 = (*(**(v13 + 8) + 72LL))(*(v13 + 8), m_Index_low);
    if ( v14 != 0 )
    {
      v15 = *(v14 + 480);
      if ( v15 != 0 && *v15 != 0 )
      {
        MeshData = CModel::GetMeshData(*v15, 0);
        if ( MeshData != 0 )
        {
          m_NumElements = MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
          if ( m_NumElements > 0 )
          {
            m_pMemory = MeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
            p_m_HitBoxes = &m_pMemory->m_Data.elem.m_HitBoxes;
            v20 = &m_pMemory[(m_NumElements - 1) + 1].m_Data.elem.m_HitBoxes;
            v21 = 0;
            do
            {
              v21 += p_m_HitBoxes->m_Size;
              p_m_HitBoxes += 3;
            }
            while ( p_m_HitBoxes != v20 );
            if ( v21 != 0 )
            {
              this->m_nHitboxHandle = CHitboxSystem::AllocHitbox(&g_HitboxSystem, v10);
              CHitboxComponent::UpdateHitboxes(this, v8[11]._vptr_IHandleEntity);
            }
          }
        }
      }
    }
    return 1;
  }
  vptr_IHandleEntity = v8[11]._vptr_IHandleEntity;
  if ( vptr_IHandleEntity == 0 )
    return 1;
  if ( *(vptr_IHandleEntity + 87) != 0 )
    goto LABEL_7;
  return 1;
}


// CHitboxComponent::UpdateHitboxes  (line 398, @0x0000000001ebcbe0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CHitboxSystem::UpdateHitbox, CHitboxComponent::Activate
// callers: CHitboxComponent::Activate, CCollisionProperty::UpdatePartition
// globals: g_HitboxSystem, CEntityHandle::gm_pEntityList
void __fastcall CHitboxComponent::UpdateHitboxes(
        CHitboxComponent *const this,
        const CCollisionProperty *const collisionProp)
{
  __int64 v4; // rax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  Vector vMins; // [rsp+0h] [rbp-40h] BYREF
  Vector vMaxs; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_nHitboxHandle != -1 )
    goto LABEL_2;
  v4 = collisionProp->GetEntity();
  (*(*v4 + 24LL))(&vMaxs, v4);
  m_pInstance = 0;
  if ( (LODWORD(vMaxs.x) + 2) > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vMaxs.x) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[LOWORD(vMaxs.x) & 0x1FF];
      if ( v7 != 0 && LODWORD(vMaxs.x) == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CHitboxComponent::Activate(this, m_pInstance);
  if ( this->m_nHitboxHandle != -1 )
  {
LABEL_2:
    (*(collisionProp->_vptr_ICollideable + 10))(collisionProp, &vMins, &vMaxs);
    CHitboxSystem::UpdateHitbox(&g_HitboxSystem, this->m_nHitboxHandle, &vMins, &vMaxs);
  }
}


// CHitboxComponent::TestRay  (line 411, @0x0000000001eb80b0, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetSkeletonInstance, operator[]
// calls: CSkeletonInstance::TraceRayAgainstHitboxes
// callers: CGamePhysicsQueryInterface::ClipRayToEntity
bool __fastcall CHitboxComponent::TestRay(
        CHitboxComponent *const this,
        CEntityInstance *pEntity,
        const Ray_t *const ray,
        CGameTrace *pResults)
{
  bool result; // al
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rdx
  __int64 v10; // rdx
  int m_nHitGroupPriorityCount; // r13d
  const int *m_pHitGroupPriorities; // r14
  CSkeletonInstance *v13; // rax

  result = 0;
  if ( this->m_nHitboxHandle != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v10 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v10 != 0 )
        {
          m_nHitGroupPriorityCount = this->m_nHitGroupPriorityCount;
          m_pHitGroupPriorities = this->m_pHitGroupPriorities;
          v13 = (*(**(v10 + 8) + 72LL))(*(v10 + 8));
          return CSkeletonInstance::TraceRayAgainstHitboxes(
                   v13,
                   ray,
                   pResults,
                   0,
                   m_pHitGroupPriorities,
                   m_nHitGroupPriorityCount);
        }
      }
    }
  }
  return result;
}


// CHitboxComponent::GetEntComponentInfo  (line 426, @0x0000000001eb8130, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CHitboxComponent
// strings: "CHitboxComponentReferenced", "CHitboxComponentReferencedPtr"
// globals: CHitboxComponent::s_EntComponentInfo, `guard variable for'CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent, CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent
EntComponentInfo_t *__cdecl CHitboxComponent::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CHitboxComponent::s_EntComponentInfo.m_pName != 0 )
    return &CHitboxComponent::s_EntComponentInfo;
  if ( `guard variable for'CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent == 0
    && __cxa_guard_acquire(&`guard variable for'CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent) != 0 )
  {
    CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent.Data1 = 639069226;
    v1 = HashString("CHitboxComponent");
    CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CHitboxComponent", 0x3501A674u);
    CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent);
  }
  CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CHitboxComponent::s_EntComponentInfo.m_nFlags = 1;
  CHitboxComponent::s_EntComponentInfo.m_id = CHitboxComponent::GetEntComponentInfo(void)::UUID_CHitboxComponent;
  CHitboxComponent::s_EntComponentInfo.m_pName = "HitboxComponent";
  CHitboxComponent::s_EntComponentInfo.m_pCPPClassname = "CHitboxComponent";
  CHitboxComponent::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CHitboxComponentReferenced";
  CHitboxComponent::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CHitboxComponentReferencedPtr";
  return &CHitboxComponent::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CHitboxComponent  (line 426, @0x0000000001eb8250, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperContained, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CHitboxComponent::GetEntComponentInfo, CEntityComponentHelperInit_CEntityComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CHitboxComponent::CEntityComponentHelperFactory_CHitboxComponent, _GLOBAL__sub_I__unity_components_01.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper, CEntityComponentHelperInit_CHitboxComponent(void)::s_bIsInitialized, CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CHitboxComponent()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FB5010;
    CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper.m_pInfo = CHitboxComponent::GetEntComponentInfo();
    CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CHitboxComponent(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CHitboxComponent(void)::s_bIsInitialized = 1;
    EntComponentInfo = CHitboxComponent::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CEntityComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper.m_nPriority = 0;
  }
  return &CEntityComponentHelperInit_CHitboxComponent(void)::componentHelper;
}


// CEntityComponentHelperFactory_CHitboxComponent::CEntityComponentHelperFactory_CHitboxComponent  (line 426, @0x0000000001eb8330, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CHitboxComponent
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CHitboxComponent::CEntityComponentHelperFactory_CHitboxComponent(
        CEntityComponentHelperFactory_CHitboxComponent *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CHitboxComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


