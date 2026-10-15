// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_obstruction.cpp:609
class CheckAreaFloors {
private:

	const CNavObstructionManager & m_rObstructionManager;  // +0x0
	const CBaseEntity * m_pBreakable;  // +0x8
	CheckAreaFloors(CNavObstructionManager &, const CBaseEntity *);
	bool operator()(CNavArea *);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ObstacleEdgeCompareByOwningObstacle  (line 27, @0x0000000002ec69d0, libserver.so)
// callers: CNavObstacleMgr::MergeObstacle
int __fastcall ObstacleEdgeCompareByOwningObstacle(CNavObstacleEdge *const *a, CNavObstacleEdge *const *b)
{
  CNavObstacle *m_pOwningObstacle; // rax
  CNavObstacle *v3; // rdx

  if ( a != 0
    && *a != 0
    && (m_pOwningObstacle = (*a)->m_pOwningObstacle) != 0
    && b != 0
    && *b != 0
    && (v3 = (*b)->m_pOwningObstacle) != 0 )
  {
    return -750576809 * ((m_pOwningObstacle - v3) >> 3);
  }
  else
  {
    return 0;
  }
}


// ObstacleCompare  (line 39, @0x0000000002ec6a20, libserver.so)
int __fastcall ObstacleCompare(CNavObstacle *const *a, CNavObstacle *const *b)
{
  return 0xDAB7EC1DD3431B57LL * ((*a - *b) >> 3);
}


// CalcOOBB2d  (line 72, @0x0000000002ef2340, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, FitOBBToPoints, Init, Purge, Purge_FixedGrowable, RemoveAll, RotateVector, Vector2DMultiply, VectorRotate, operator*, operator*=, operator=, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 24ul, int> >::SetCount, CMesh::CMesh, CMesh::InitExternalMesh, FitOBBToMesh, CMesh::~CMesh, VectorRotate, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 24ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CalcOOBB2dFrom3d
void __fastcall CalcOOBB2d(
        Vector2D *pPointsIn,
        int nPoints,
        Vector2D *pCenterOut,
        Vector2D *pExtentAOut,
        Vector2D *pExtentBOut)
{
  Vector *m_pMemory; // r13
  Vector2D *v9; // rax
  Vector *v10; // rcx
  Vector *v11; // rdx
  vec_t y; // xmm1_4
  vec_t x; // xmm0_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  __m128 v16; // xmm5
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float z; // xmm1_4
  vec_t v23; // xmm0_4
  float v24; // xmm2_4
  __m128 v25; // xmm4
  float v26; // xmm2_4
  __m128 v27; // xmm0
  float v28; // xmm1_4
  unsigned __int32 v29; // xmm3_4
  float v30; // xmm1_4
  vec_t v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  __m128 v34; // xmm0
  uint32 v35; // eax
  float v36; // xmm1_4
  vec_t v37; // xmm0_4
  float v38; // xmm0_4
  int nVertexCount; // [rsp+28h] [rbp-358h]
  Vector vExtents; // [rsp+30h] [rbp-350h] BYREF
  float out[4]; // [rsp+40h] [rbp-340h] BYREF
  float flY; // [rsp+50h] [rbp-330h] BYREF
  float v45; // [rsp+54h] [rbp-32Ch]
  float v46; // [rsp+58h] [rbp-328h]
  vec_t v47; // [rsp+5Ch] [rbp-324h]
  float v48; // [rsp+60h] [rbp-320h]
  float v49; // [rsp+64h] [rbp-31Ch]
  float v50; // [rsp+68h] [rbp-318h]
  vec_t v51; // [rsp+6Ch] [rbp-314h]
  float v52; // [rsp+70h] [rbp-310h]
  float v53; // [rsp+74h] [rbp-30Ch]
  float flZ; // [rsp+78h] [rbp-308h]
  CUtlVectorFixedGrowable<Vector,24ul> points3D; // [rsp+80h] [rbp-300h] BYREF
  CMesh inputMesh; // [rsp+1C0h] [rbp-1C0h] BYREF
  unsigned __int64 v57; // [rsp+348h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  points3D.m_Memory.m_pMemory = &points3D.m_Memory.m_FixedMemory;
  nVertexCount = 2 * nPoints;
  points3D.m_Size = 0;
  points3D.m_Memory.m_nAllocationCount = 24;
  points3D.m_Memory.m_nGrowSize = 0x80000000;
  CUtlVectorBase<Vector,CUtlMemoryFixedGrowable<Vector,24ul,int>>::SetCount(&points3D, 2 * nPoints);
  m_pMemory = points3D.m_Memory.m_pMemory;
  if ( nPoints > 0 )
  {
    v9 = pPointsIn;
    v10 = points3D.m_Memory.m_pMemory;
    v11 = &points3D.m_Memory.m_pMemory[nPoints];
    do
    {
      y = v9->y;
      ++v9;
      ++v10;
      x = v9[-1].x;
      v10[-1].z = 0.0;
      ++v11;
      v10[-1].y = y;
      v10[-1].x = x;
      v14 = v9[-1].y;
      v15 = v9[-1].x;
      v11[-1].z = 10.0;
      v11[-1].y = v14;
      v11[-1].x = v15;
    }
    while ( v9 != &pPointsIn[(nPoints - 1) + 1] );
  }
  CMesh::CMesh(&inputMesh);
  CMesh::InitExternalMesh(&inputMesh, &m_pMemory->x, nVertexCount, 0, 0, 3, &g_PositionAttribute, 1);
  FitOBBToMesh(&flY, &vExtents, &inputMesh, 0.03125);
  CMesh::~CMesh(&inputMesh);
  pCenterOut->x = v47;
  pCenterOut->y = v51;
  VectorRotate(&vExtents.x, &flY, out);
  v16.m128_f32[0] = v52;
  v17.m128_f32[0] = v53;
  v18.m128_f32[0] = flZ;
  v19 = fabs(v52);
  v20 = fabs(v53);
  v21 = fabs(flZ);
  if ( v19 > v20 && v19 > v21 )
  {
    z = vExtents.z;
    v23 = vExtents.y * v45;
    v24 = v46;
    v25 = 0xBF800000;
    pExtentAOut->y = v49 * vExtents.y;
    v26 = v24 * z;
    pExtentAOut->x = v23;
    v27 = _mm_cmplt_ss(0LL, v16);
    v28 = z * v50;
    v29 = v27.m128_i32[0] & 0x3F800000;
LABEL_16:
    LODWORD(v38) = _mm_andnot_ps(v27, v25).m128_u32[0] | v29;
    pExtentBOut->x = v26 * v38;
    pExtentBOut->y = v28 * v38;
    goto LABEL_9;
  }
  if ( v20 > v21 )
  {
    v36 = vExtents.z;
    v37 = vExtents.x * flY;
    v26 = v46 * vExtents.z;
    pExtentAOut->y = v48 * vExtents.x;
    v28 = v36 * v50;
    pExtentAOut->x = v37;
    v27 = _mm_cmplt_ss(0LL, v17);
    v25 = 0x3F800000u;
    v29 = v27.m128_i32[0] & 0xBF800000;
    goto LABEL_16;
  }
  v30 = vExtents.y;
  v31 = vExtents.x * flY;
  v32 = v45 * vExtents.y;
  pExtentAOut->y = v48 * vExtents.x;
  v33 = v30 * v49;
  pExtentAOut->x = v31;
  v34 = _mm_cmplt_ss(0LL, v18);
  v34.m128_i32[0] = _mm_andnot_ps(v34, 0xBF800000).m128_u32[0] | v34.m128_i32[0] & 0x3F800000;
  pExtentBOut->x = v32 * v34.m128_f32[0];
  pExtentBOut->y = v33 * v34.m128_f32[0];
LABEL_9:
  points3D.m_Size = 0;
  v35 = points3D.m_Memory.m_nGrowSize & 0xC0000000;
  if ( points3D.m_Memory.m_nAllocationCount < 0 || points3D.m_Memory.m_pMemory == &points3D.m_Memory.m_FixedMemory )
  {
    if ( v35 == 0 )
      CUtlMemory<Vector,int>::Purge(&points3D.m_Memory);
  }
  else if ( points3D.m_Memory.m_pMemory != 0 && v35 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CalcOOBB2dFrom3d  (line 125, @0x0000000002ef2750, libserver.so)  // inlines: Init, Quaternion, RadianEuler, Vector2DAdd, VectorRotate, operator+, operator=
// calls: AngleQuaternion, QuaternionMatrix, VectorRotate, CalcOOBB2d
// callers: CNavObstacleShape::GenerateObstacleVerts
void __fastcall CalcOOBB2dFrom3d(
        Vector2D *pCenterOut,
        Vector2D *pExtentAOut,
        Vector2D *pExtentBOut,
        double a4,
        double a5,
        double a6,
        vec_t a7,
        double a8,
        vec_t a9,
        double a10,
        float a11)
{
  __int64 v12; // r14
  vec_t v13; // xmm0_4
  vec_t v14; // xmm1_4
  Vector vPos; // [rsp+60h] [rbp-F0h] BYREF
  matrix3x4_t mxtRotation; // [rsp+70h] [rbp-E0h] BYREF
  Vector2D vPoints2D[16]; // [rsp+A0h] [rbp-B0h] BYREF

  v12 = 0;
  mxtRotation.m_flMatVal[0][2] = *(&a10 + 1) * 0.017453292;
  mxtRotation.m_flMatVal[0][1] = *&a10 * 0.017453292;
  mxtRotation.m_flMatVal[0][0] = a11 * 0.017453292;
  AngleQuaternion(&mxtRotation, vPoints2D);
  QuaternionMatrix(vPoints2D, &mxtRotation);
  do
  {
    if ( (v12 & 1) != 0 )
    {
      vPos.x = *&a8;
      if ( (v12 & 2) != 0 )
        goto LABEL_3;
    }
    else
    {
      vPos.x = *&a6;
      if ( (v12 & 2) != 0 )
      {
LABEL_3:
        vPos.y = *(&a8 + 1);
        if ( (v12 & 4) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
    vPos.y = *(&a6 + 1);
    if ( (v12 & 4) != 0 )
    {
LABEL_4:
      v13 = a9;
      goto LABEL_5;
    }
LABEL_9:
    v13 = a7;
LABEL_5:
    vPos.z = v13;
    VectorRotate(&vPos.x, &mxtRotation, &vPos.x);
    v14 = *&a4 + vPos.x;
    vPoints2D[v12].y = *(&a4 + 1) + vPos.y;
    vPoints2D[v12++].x = v14;
  }
  while ( v12 != 8 );
  CalcOOBB2d(vPoints2D, 8, pCenterOut, pExtentAOut, pExtentBOut);
}


// CNavObstructionManager::CNavObstructionManager  (line 146, @0x0000000002ee69c0, libserver.so)  // inlines: CNavAreaSet, CNavObstacleMgr, CNavObstacleSplitForest, CUtlHashtable, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CountdownTimer::CountdownTimer, operator new, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::~CUtlHashtable, CUtlMemory<CNavDoorBlocker*, int>::Purge, CUtlMemory<CFuncNavConnectionBlocker*, int>::Purge
// callers: GetNavObstructionMgr
void __fastcall CNavObstructionManager::CNavObstructionManager(CNavObstructionManager *const this)
{
  CountdownTimer *p_m_blockedAreasForceUpdateTimer; // rdi
  CNavObstacleMgr *v3; // rax

  p_m_blockedAreasForceUpdateTimer = &this->m_blockedAreasForceUpdateTimer;
  *&p_m_blockedAreasForceUpdateTimer[-2].m_bUseGlobalsTime = off_47B0D30;
  LODWORD(p_m_blockedAreasForceUpdateTimer[-1]._vptr_CountdownTimer) = 0;
  *&p_m_blockedAreasForceUpdateTimer[-1].m_duration.m_Value = 0;
  *&p_m_blockedAreasForceUpdateTimer[-1].m_bUseGlobalsTime = 0;
  *(&p_m_blockedAreasForceUpdateTimer[-1].m_bUseGlobalsTime + 1) = 0;
  CountdownTimer::CountdownTimer(p_m_blockedAreasForceUpdateTimer);
  this->m_nLastUpdatedBlockedArea = -1;
  this->m_avoidanceObstacleAreas.m_Size = 0;
  this->m_avoidanceObstacleAreas.m_Memory.m_pMemory = 0;
  this->m_avoidanceObstacleAreas.m_Memory.m_nAllocationCount = 0;
  this->m_avoidanceObstacleAreas.m_Memory.m_nGrowSize = 0;
  this->m_avoidanceObstacles.m_table.m_pMemory = 0;
  this->m_avoidanceObstacles.m_table.m_nAllocationCount = 0;
  this->m_avoidanceObstacles.m_table.m_nGrowSize = 0;
  this->m_avoidanceObstacles.m_nUsed = 0;
  this->m_avoidanceObstacles.m_nMinSize = 32;
  this->m_avoidanceObstacles.m_bSizeLocked = 0;
  this->m_nLastUpdatedAvoidanceObstacleArea = -1;
  this->m_connectionBlockers.m_Size = 0;
  this->m_connectionBlockers.m_Memory.m_pMemory = 0;
  this->m_connectionBlockers.m_Memory.m_nAllocationCount = 0;
  this->m_connectionBlockers.m_Memory.m_nGrowSize = 0;
  this->m_doorBlockers.m_Size = 0;
  this->m_doorBlockers.m_Memory.m_pMemory = 0;
  this->m_doorBlockers.m_Memory.m_nAllocationCount = 0;
  this->m_doorBlockers.m_Memory.m_nGrowSize = 0;
  v3 = operator new(0x78u);
  v3->m_Obstacles.m_table.m_pMemory = 0;
  v3->m_Obstacles.m_table.m_nAllocationCount = 0;
  v3->m_Obstacles.m_table.m_nGrowSize = 0;
  v3->m_Obstacles.m_nUsed = 0;
  v3->m_Obstacles.m_nMinSize = 32;
  v3->m_Obstacles.m_bSizeLocked = 0;
  v3->m_AreaToSplitNodeDict.m_table.m_pMemory = 0;
  v3->m_AreaToSplitNodeDict.m_table.m_nAllocationCount = 0;
  v3->m_AreaToSplitNodeDict.m_table.m_nGrowSize = 0;
  v3->m_AreaToSplitNodeDict.m_nUsed = 0;
  v3->m_AreaToSplitNodeDict.m_nMinSize = 32;
  v3->m_AreaToSplitNodeDict.m_bSizeLocked = 0;
  v3->m_SplitNodeForest.m_Roots.m_Size = 0;
  v3->m_SplitNodeForest.m_Roots.m_Memory.m_pMemory = 0;
  v3->m_SplitNodeForest.m_Roots.m_Memory.m_nAllocationCount = 0;
  v3->m_SplitNodeForest.m_Roots.m_Memory.m_nGrowSize = 0;
  v3->m_NewAreasOutsideObstacle.m_Areas.m_table.m_pMemory = 0;
  v3->m_NewAreasOutsideObstacle.m_Areas.m_table.m_nAllocationCount = 0;
  v3->m_NewAreasOutsideObstacle.m_Areas.m_table.m_nGrowSize = 0;
  v3->m_NewAreasOutsideObstacle.m_Areas.m_nUsed = 0;
  v3->m_NewAreasOutsideObstacle.m_Areas.m_nMinSize = 32;
  v3->m_NewAreasOutsideObstacle.m_Areas.m_bSizeLocked = 0;
  this->m_pObstacleMgr = v3;
}


// CNavObstructionManager::RemoveNavArea  (line 155, @0x0000000002ee60b0, libserver.so)
// calls: CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove
void __fastcall CNavObstructionManager::RemoveNavArea(CNavObstructionManager *const this, CNavArea *const rArea)
{
  CNavArea *src[5]; // [rsp+8h] [rbp-28h] BYREF

  src[0] = rArea;
  CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&this->m_avoidanceObstacleAreas, src);
  src[0] = rArea;
  CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&this->m_blockedAreas, src);
}


// CNavObstructionManager::ChangeNavAreaIndex  (line 163, @0x0000000002ef8550, libserver.so)
// calls: CNavObstacleMgr::ChangeNavAreaIndex
void __fastcall CNavObstructionManager::ChangeNavAreaIndex(
        CNavObstructionManager *const this,
        int nOldIndex,
        int nNewIndex)
{
  CNavObstacleMgr::ChangeNavAreaIndex(this->m_pObstacleMgr, nOldIndex, nNewIndex);
}


// CNavObstructionManager::RemoveInvalidNavAreas  (line 171, @0x0000000002ef7840, libserver.so)
// calls: RemoveInvalidNavAreasFromVector<CNavArea>
void __fastcall CNavObstructionManager::RemoveInvalidNavAreas(CNavObstructionManager *const this)
{
  RemoveInvalidNavAreasFromVector<CNavArea>(&this->m_avoidanceObstacleAreas);
  RemoveInvalidNavAreasFromVector<CNavArea>(&this->m_blockedAreas);
}


// CNavObstructionManager::Update  (line 179, @0x0000000002efc730, libserver.so)  // inlines: GetBool, GetInt, Invalidate, IsElapsed, NetworkStateChanged, RemoveAll, Set, UpdatePendingDoorHelpers, operator=<float>
// calls: CountdownTimer::Now, CNavObstructionManager::UpdateBlockedAreas, CNavObstructionManager::UpdateAvoidanceObstacleAreas, CNavObstacleMgr::Update
void __fastcall CNavObstructionManager::Update(CNavObstructionManager *const this)
{
  CountdownTimer *p_m_blockedAreasForceUpdateTimer; // r12
  float v3; // xmm0_4
  float m_Value; // xmm1_4
  bool v5; // si
  CNavObstacleMgr *m_pObstacleMgr; // rdi

  if ( this->m_blockedAreasForceUpdateTimer.m_timestamp.m_Value > 0.0
    && (p_m_blockedAreasForceUpdateTimer = &this->m_blockedAreasForceUpdateTimer,
        v3 = CountdownTimer::Now(&this->m_blockedAreasForceUpdateTimer),
        m_Value = this->m_blockedAreasForceUpdateTimer.m_timestamp.m_Value,
        v3 >= m_Value) )
  {
    if ( m_Value != -1.0 )
    {
      (*(this->m_blockedAreasForceUpdateTimer._vptr_CountdownTimer + 2))(
        p_m_blockedAreasForceUpdateTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      this->m_blockedAreasForceUpdateTimer.m_timestamp.m_Value = -1.0;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  CNavObstructionManager::UpdateBlockedAreas(this, v5);
  CNavObstructionManager::UpdateAvoidanceObstacleAreas(this);
  m_pObstacleMgr = this->m_pObstacleMgr;
  if ( m_pObstacleMgr != 0 )
    CNavObstacleMgr::Update(m_pObstacleMgr);
  if ( nav_obstruction_draw.m_pParent->m_Value.m_nValue != 0 )
    (*(this->_vptr_INavObstructionManager + 10))(this);
  if ( TheNavMesh != 0 )
    this->m_doorBlockers.m_Size = 0;
}


// CNavObstructionManager::DebugDraw  (line 207, @0x0000000002ee0110, libserver.so)
// calls: CNavObstacleMgr::DebugDraw
void __fastcall CNavObstructionManager::DebugDraw(const CNavObstructionManager *const this)
{
  CNavObstacleMgr *m_pObstacleMgr; // rdi

  m_pObstacleMgr = this->m_pObstacleMgr;
  if ( m_pObstacleMgr != 0 )
    CNavObstacleMgr::DebugDraw(m_pObstacleMgr);
}


// CNavObstructionManager::OnNavMeshLoaded  (line 217, @0x0000000002ef8c10, libserver.so)
// calls: CNavObstructionManager::UpdateObstacle
void __fastcall CNavObstructionManager::OnNavMeshLoaded(CNavObstructionManager *const this)
{
  __int64 v2; // r12
  int i; // ebx
  INavObstacle *v4; // rsi

  v2 = 0;
  for ( i = 0; this->m_avoidanceObstacles.m_nUsed > i; ++v2 )
  {
    v4 = *&this->m_avoidanceObstacles.m_table.m_pMemory[v2].data[2];
    if ( v4 != 0 )
      CNavObstructionManager::UpdateObstacle(this, v4);
    ++i;
  }
}


// CNavObstructionManager::OnChangeTheNavMesh  (line 231, @0x0000000002efc040, libserver.so)  // inlines: OnChangeTheNavMesh, RemoveAll
// calls: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::RemoveAll, CNavObstacleMgr::MergeAllObstacles
void __fastcall CNavObstructionManager::OnChangeTheNavMesh(CNavObstructionManager *const this)
{
  CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *p_m_avoidanceObstacles; // rdi
  CNavObstacleMgr *m_pObstacleMgr; // rdi

  p_m_avoidanceObstacles = &this->m_avoidanceObstacles;
  p_m_avoidanceObstacles[-3].m_nUsed = 0;
  p_m_avoidanceObstacles[-1].m_table.m_nAllocationCount = 0;
  CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::RemoveAll(p_m_avoidanceObstacles);
  m_pObstacleMgr = this->m_pObstacleMgr;
  if ( m_pObstacleMgr != 0 )
    CNavObstacleMgr::MergeAllObstacles(m_pObstacleMgr);
}


// CNavObstructionManager::OnNavMeshDestroyed  (line 245, @0x0000000002ee69a0, libserver.so)  // inlines: RemoveAll
// calls: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::RemoveAll
void __fastcall CNavObstructionManager::OnNavMeshDestroyed(CNavObstructionManager *const this)
{
  CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *p_m_avoidanceObstacles; // rdi

  p_m_avoidanceObstacles = &this->m_avoidanceObstacles;
  p_m_avoidanceObstacles[-3].m_nUsed = 0;
  p_m_avoidanceObstacles[-1].m_table.m_nAllocationCount = 0;
  CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::RemoveAll(p_m_avoidanceObstacles);
}


// CNavObstructionManager::ResetNavMesh  (line 259, @0x0000000002ec9a30, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=<float>
void __fastcall CNavObstructionManager::ResetNavMesh(CNavObstructionManager *const this)
{
  if ( this->m_blockedAreasForceUpdateTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_blockedAreasForceUpdateTimer._vptr_CountdownTimer + 2))(
      &this->m_blockedAreasForceUpdateTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    this->m_blockedAreasForceUpdateTimer.m_timestamp.m_Value = -1.0;
  }
}


// CNavObstructionManager::OnRoundRestart  (line 270, @0x0000000002ec9c80, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
void __fastcall CNavObstructionManager::OnRoundRestart(CNavObstructionManager *const this)
{
  CountdownTimer *p_m_blockedAreasForceUpdateTimer; // r12
  float v3; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  p_m_blockedAreasForceUpdateTimer = &this->m_blockedAreasForceUpdateTimer;
  v3 = CountdownTimer::Now(&this->m_blockedAreasForceUpdateTimer) + 1.0;
  if ( v3 != this->m_blockedAreasForceUpdateTimer.m_timestamp.m_Value )
  {
    v4 = v3;
    (*(this->m_blockedAreasForceUpdateTimer._vptr_CountdownTimer + 2))(
      p_m_blockedAreasForceUpdateTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_blockedAreasForceUpdateTimer.m_timestamp.m_Value = v4;
  }
  if ( this->m_blockedAreasForceUpdateTimer.m_duration.m_Value != 1.0 )
  {
    (*(this->m_blockedAreasForceUpdateTimer._vptr_CountdownTimer + 2))(
      p_m_blockedAreasForceUpdateTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_blockedAreasForceUpdateTimer.m_duration.m_Value = 1.0;
  }
}


// CNavObstructionManager::OnAreaBlocked  (line 277, @0x0000000002ee9940, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, HasElement, operator[]
// calls: CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow
void __fastcall CNavObstructionManager::OnAreaBlocked(
        CNavObstructionManager *const this,
        CNavArea *const rArea,
        bool bRecomputeFlow)
{
  __int64 m_Size; // r13
  int v6; // eax
  CNavArea **v7; // rax
  CNavArea *src; // [rsp+8h] [rbp-28h] BYREF

  src = rArea;
  if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&this->m_blockedAreas, &src) < 0 )
  {
    m_Size = this->m_blockedAreas.m_Size;
    v6 = this->m_blockedAreas.m_Size;
    if ( m_Size == this->m_blockedAreas.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&this->m_blockedAreas.m_Memory, 1);
      v6 = this->m_blockedAreas.m_Size;
    }
    this->m_blockedAreas.m_Size = v6 + 1;
    v7 = &this->m_blockedAreas.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = rArea;
  }
}


// CNavObstructionManager::OnAreaUnblocked  (line 287, @0x0000000002ee6100, libserver.so)
// calls: CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove
void __fastcall CNavObstructionManager::OnAreaUnblocked(
        CNavObstructionManager *const this,
        CNavArea *const rArea,
        bool bRecomputeFlow)
{
  CNavArea *src; // [rsp+8h] [rbp-8h] BYREF

  src = rArea;
  CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&this->m_blockedAreas, &src);
}


// CNavObstructionManager::UpdateBlockedAreas  (line 294, @0x0000000002edf2a0, libserver.so)
// calls: CNavObstructionManager::UpdateBlockedArea
// callers: CNavObstructionManager::Update
void __fastcall CNavObstructionManager::UpdateBlockedAreas(CNavObstructionManager *const this, bool bForceAll)
{
  int m_Size; // ecx
  int v4; // r14d
  int v5; // r12d
  __int64 i; // r13
  int v8; // edx

  m_Size = this->m_blockedAreas.m_Size;
  if ( m_Size > 0 )
  {
    if ( bForceAll )
    {
      v4 = m_Size - 1;
      v5 = 0;
    }
    else
    {
      v8 = (this->m_nLastUpdatedBlockedArea + 1) % m_Size;
      v4 = v8 + 2;
      v5 = v8;
      if ( v8 + 2 > m_Size - 1 )
        v4 = m_Size - 1;
      if ( v8 > v4 || m_Size <= v8 )
      {
LABEL_12:
        this->m_nLastUpdatedBlockedArea = v4;
        return;
      }
    }
    for ( i = v5; ; ++i )
    {
      ++v5;
      CNavObstructionManager::UpdateBlockedArea(this, this->m_blockedAreas.m_Memory.m_pMemory[i], bForceAll, -1);
      if ( v4 < v5 )
        break;
      if ( this->m_blockedAreas.m_Size <= v5 )
      {
        this->m_nLastUpdatedBlockedArea = v4;
        return;
      }
    }
    goto LABEL_12;
  }
}


// CNavObstructionManager::RemoveObstacle  (line 319, @0x0000000002efc2b0, libserver.so)  // inlines: Remove, operator()
// calls: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoRemove<int>, CNavObstacleMgr::RemoveObstacle
// callers: CPhysicsProp::UpdateOnRemove, CFuncNavObstruction::UpdateOnRemove, CFuncNavObstruction::InputDisable
void __fastcall CNavObstructionManager::RemoveObstacle(
        CNavObstructionManager *const this,
        INavObstacle *const rObstacle)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  CNavObstacleMgr *m_pObstacleMgr; // rdi

  v4 = (*rObstacle->_vptr_INavObstacle)(rObstacle);
  v5 = 33 * (((4097 * v4 + 2127912214) >> 19) ^ (4097 * v4 + 2127912214) ^ 0xC761C23C);
  v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
  CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoRemove<int>(
    &this->m_avoidanceObstacles,
    v4,
    HIWORD(v6) ^ v6 ^ 0xB55A4F09);
  m_pObstacleMgr = this->m_pObstacleMgr;
  if ( m_pObstacleMgr != 0 )
    CNavObstacleMgr::RemoveObstacle(m_pObstacleMgr, rObstacle);
}


// CNavObstructionManager::OnAvoidanceObstacleEnteredArea  (line 333, @0x0000000002ee97e0, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, HasElement, operator[]
// calls: CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow
// callers: CNavObstructionManager::MarkAreaObstacleToAvoid
void __fastcall CNavObstructionManager::OnAvoidanceObstacleEnteredArea(
        CNavObstructionManager *const this,
        CNavArea *const rArea)
{
  __int64 m_Size; // r13
  int v5; // eax
  CNavArea **v6; // rax
  CNavArea *src; // [rsp+8h] [rbp-28h] BYREF

  src = rArea;
  if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&this->m_avoidanceObstacleAreas, &src) < 0 )
  {
    m_Size = this->m_avoidanceObstacleAreas.m_Size;
    v5 = this->m_avoidanceObstacleAreas.m_Size;
    if ( m_Size == this->m_avoidanceObstacleAreas.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&this->m_avoidanceObstacleAreas.m_Memory, 1);
      v5 = this->m_avoidanceObstacleAreas.m_Size;
    }
    this->m_avoidanceObstacleAreas.m_Size = v5 + 1;
    v6 = &this->m_avoidanceObstacleAreas.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      *v6 = rArea;
  }
}


// CNavObstructionManager::OnAvoidanceObstacleLeftArea  (line 343, @0x0000000002ee6120, libserver.so)
// calls: CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove
void __fastcall CNavObstructionManager::OnAvoidanceObstacleLeftArea(
        CNavObstructionManager *const this,
        CNavArea *const rArea)
{
  CNavArea *src; // [rsp+8h] [rbp-8h] BYREF

  src = rArea;
  CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&this->m_avoidanceObstacleAreas, &src);
}


// CNavObstructionManager::UpdateAvoidanceObstacleAreas  (line 350, @0x0000000002ee6380, libserver.so)
// calls: CNavObstructionManager::UpdateAreaAvoidanceObstacles
// callers: CNavObstructionManager::Update
void __fastcall CNavObstructionManager::UpdateAvoidanceObstacleAreas(CNavObstructionManager *const this)
{
  int m_Size; // ecx
  int v3; // edx
  int v4; // r14d
  int v5; // r12d
  __int64 v6; // r13

  m_Size = this->m_avoidanceObstacleAreas.m_Size;
  if ( m_Size > 0 )
  {
    v3 = (this->m_nLastUpdatedAvoidanceObstacleArea + 1) % m_Size;
    v4 = v3 + 2;
    v5 = v3;
    if ( v3 + 2 > m_Size - 1 )
      v4 = m_Size - 1;
    if ( v3 <= v4 && m_Size > v3 )
    {
      v6 = v3;
      do
      {
        ++v5;
        CNavObstructionManager::UpdateAreaAvoidanceObstacles(
          this,
          this->m_avoidanceObstacleAreas.m_Memory.m_pMemory[v6]);
        if ( v5 > v4 )
          break;
        ++v6;
      }
      while ( this->m_avoidanceObstacleAreas.m_Size > v5 );
    }
    this->m_nLastUpdatedAvoidanceObstacleArea = v4;
  }
}


// CNavObstructionManager::BlockArea  (line 375, @0x0000000002edeb40, libserver.so)  // inlines: AddAttributesDynamic, Color, GetBool, GetDebugName, GetInt, IsBlockedRaw, SetBlockedAnyRaw, SetBlockedRaw, SetColor, entindex
// calls: CEntityInstance::GetEntityIndex, CEntityIdentity::GetDebugName, ConColorMsg(Color const&,char const*,...), Warning, __cxa_guard_acquire, CEntitySystem::FindClassByDesignName, __cxa_guard_release, __stack_chk_fail, __cxa_guard_abort, _Unwind_Resume
// callers: CFuncNavBlocker::BlockArea, CFuncNavBlocker::operator(), CNavObstructionManager::CheckAreaFloor, CNavSplice::BlockBackgroundMesh, CNavSplice::ExpandSpliceMesh
// strings: "DUPE: %s %d blocked area %d\n", "MarkAsBlocked: Area %d is already blocked with a different team id! This may cause flow b, "script_nav_blocker", "func_nav_blocker", "non-entity blocked area %d\n", "DUPE: non-entity blocked area %d\n"
// globals: `guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pFuncNavBlockerEntityClass, `guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pScriptNavBlockerEntityClass, CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pFuncNavBlockerEntityClass, CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pScriptNavBlockerEntityClass
void __fastcall CNavObstructionManager::BlockArea(
        CNavObstructionManager *const this,
        CNavArea *const rArea,
        int teamID,
        const CBaseEntity *pBlockerEntity)
{
  CEntityClass *m_pClass; // rdx
  bool v9; // r10
  int v10; // eax
  uint8 m_isBlockedFlags; // al
  unsigned __int8 v12; // r9
  bool v13; // r13
  uint32 v14; // r15d
  int32 v15; // r13d
  const char *v16; // rax
  uint32 m_AreaId; // r15d
  int32 m_Data; // r14d
  const char *DebugName; // rax
  uint32 v20; // edx
  uint32 v21; // edx
  bool v22; // [rsp+Ch] [rbp-44h]
  unsigned __int8 v23; // [rsp+Ch] [rbp-44h]
  Color v24; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  if ( `guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pFuncNavBlockerEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pFuncNavBlockerEntityClass) != 0 )
  {
    CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pFuncNavBlockerEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, "func_nav_blocker", 0);
    __cxa_guard_release(&`guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pFuncNavBlockerEntityClass);
  }
  if ( `guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pScriptNavBlockerEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pScriptNavBlockerEntityClass) != 0 )
  {
    CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pScriptNavBlockerEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, "script_nav_blocker", 0);
    __cxa_guard_release(&`guard variable for'CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pScriptNavBlockerEntityClass);
  }
  if ( pBlockerEntity != 0 )
  {
    m_pClass = pBlockerEntity->m_pEntity->m_pClass;
    if ( CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pFuncNavBlockerEntityClass == m_pClass
      || (v9 = 0,
          v10 = 8,
          CNavObstructionManager::BlockArea(CNavArea &,int,CBaseEntity const*)::s_pScriptNavBlockerEntityClass == m_pClass) )
    {
      v10 = LOBYTE(pBlockerEntity[1].m_nNextThinkTick.m_Value) == 0 ? 4 : 6;
      v9 = LOBYTE(pBlockerEntity[1].m_nNextThinkTick.m_Value) != 0;
    }
  }
  else
  {
    v10 = 8;
    v9 = 0;
  }
  rArea->m_AttributeDynamicFlags |= v10;
  m_isBlockedFlags = rArea->m_isBlockedFlags;
  v12 = m_isBlockedFlags & 1;
  v13 = (m_isBlockedFlags & 2) != 0;
  if ( teamID == -1 )
    rArea->m_isBlockedFlags = 3;
  else
    rArea->m_isBlockedFlags = (1 << (teamID % 2)) | m_isBlockedFlags;
  if ( (v12 | ((m_isBlockedFlags & 2) != 0)) != 0 )
  {
    if ( nav_debug_blocked.m_pParent->m_Value.m_nValue != 0 )
    {
      v23 = m_isBlockedFlags & 1;
      if ( pBlockerEntity != 0 )
      {
        m_AreaId = rArea->m_AreaId;
        m_Data = CEntityInstance::GetEntityIndex(pBlockerEntity).m_Data;
        DebugName = CEntityIdentity::GetDebugName(pBlockerEntity->m_pEntity);
        v24._color[0] = 0;
        v24._color[1] = -1;
        v24._color[2] = 0x80;
        v24._color[3] = -1;
        ConColorMsg(&v24, "DUPE: %s %d blocked area %d\n", DebugName, m_Data, m_AreaId);
      }
      else
      {
        v21 = rArea->m_AreaId;
        v24._color[0] = 0;
        v24._color[1] = -1;
        v24._color[2] = 0x80;
        v24._color[3] = -1;
        ConColorMsg(&v24, "DUPE: non-entity blocked area %d\n", v21);
      }
      v12 = v23;
    }
    if ( (rArea->m_isBlockedFlags & 1) != v12 || ((rArea->m_isBlockedFlags & 2) != 0) != v13 )
      Warning(
        "MarkAsBlocked: Area %d is already blocked with a different team id! This may cause flow bugs.\n",
        rArea->m_AreaId);
  }
  else
  {
    if ( nav_debug_blocked.m_pParent->m_Value.m_nValue != 0 )
    {
      v22 = v9;
      if ( pBlockerEntity != 0 )
      {
        v14 = rArea->m_AreaId;
        v15 = CEntityInstance::GetEntityIndex(pBlockerEntity).m_Data;
        v16 = CEntityIdentity::GetDebugName(pBlockerEntity->m_pEntity);
        v24._color[0] = 0;
        v24._color[1] = -1;
        v24._color[2] = 0x80;
        v24._color[3] = -1;
        ConColorMsg(&v24, "%s %d blocked area %d\n", v16, v15, v14);
      }
      else
      {
        v20 = rArea->m_AreaId;
        v24._color[0] = 0;
        v24._color[1] = -1;
        v24._color[2] = 0x80;
        v24._color[3] = -1;
        ConColorMsg(&v24, "non-entity blocked area %d\n", v20);
      }
      v9 = v22;
    }
    (*(this->_vptr_INavObstructionManager + 12))(this, rArea, v9);
  }
}


// CNavObstructionManager::UpdateAreaBlockedFromNavBlockers  (line 461, @0x0000000002edef50, libserver.so)  // inlines: AddAttributesDynamic, ClearBlockedAnyRaw, GetExtent, RemoveAttributesDynamic, SetBlockedRaw, operator=
// calls: CFuncNavBlocker::CalculateBlocked
// callers: CNavObstructionManager::UpdateBlockedArea
void __fastcall CNavObstructionManager::UpdateAreaBlockedFromNavBlockers(
        CNavObstructionManager *const this,
        CNavArea *const rArea)
{
  vec_t x; // xmm0_4
  CFuncNavBlocker::BlockageType v4; // eax
  uint32 m_AttributeDynamicFlags; // edx
  bool isBlockedTeam[16]; // [rsp+0h] [rbp-40h] BYREF
  Extent bounds; // [rsp+10h] [rbp-30h] BYREF

  rArea->m_isBlockedFlags = 0;
  x = rArea->m_Extent.lo.x;
  rArea->m_AttributeDynamicFlags &= 0xFFFFFFF9;
  bounds.lo.x = x;
  bounds.lo.y = rArea->m_Extent.lo.y;
  bounds.lo.z = rArea->m_Extent.lo.z;
  bounds.hi = rArea->m_Extent.hi;
  v4 = CFuncNavBlocker::CalculateBlocked(isBlockedTeam, &bounds.lo, &bounds.hi);
  if ( isBlockedTeam[0] )
    rArea->m_isBlockedFlags |= 1u;
  if ( isBlockedTeam[1] )
    rArea->m_isBlockedFlags |= 2u;
  if ( v4 > CFuncNavBlocker::BlockageType::BT_NONE )
  {
    m_AttributeDynamicFlags = rArea->m_AttributeDynamicFlags;
    rArea->m_AttributeDynamicFlags = m_AttributeDynamicFlags | 4;
    if ( v4 == CFuncNavBlocker::BlockageType::BT_NAV_AND_FLOW )
      rArea->m_AttributeDynamicFlags = m_AttributeDynamicFlags | 6;
  }
}


// CNavObstructionManager::UnblockArea  (line 502, @0x0000000002edf010, libserver.so)  // inlines: ClearBlockedAnyRaw, Color, GetBool, GetInt, SetColor
// calls: CNavArea::IsBlocked, ConColorMsg(Color const&,char const*,...), __stack_chk_fail
// strings: "area %d is unblocked by UnblockArea\n"
void __fastcall CNavObstructionManager::UnblockArea(CNavObstructionManager *const this, CNavArea *const rArea)
{
  bool IsBlocked; // al
  uint32 m_AttributeDynamicFlags; // r13d
  uint32 m_AreaId; // edx
  Color v7; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  IsBlocked = CNavArea::IsBlocked(rArea, -1, 0);
  m_AttributeDynamicFlags = rArea->m_AttributeDynamicFlags;
  rArea->m_isBlockedFlags = 0;
  if ( IsBlocked )
  {
    if ( nav_debug_blocked.m_pParent->m_Value.m_nValue != 0 )
    {
      m_AreaId = rArea->m_AreaId;
      v7._color[0] = -1;
      v7._color[1] = 0;
      v7._color[2] = 0x80;
      v7._color[3] = -1;
      ConColorMsg(&v7, "area %d is unblocked by UnblockArea\n", m_AreaId);
    }
    (*(this->_vptr_INavObstructionManager + 13))(this, rArea, (m_AttributeDynamicFlags & 6) == 6);
  }
}


// CNavObstructionManager::UpdateBlockedArea  (line 523, @0x0000000002edf0d0, libserver.so)  // inlines: Color, GetBool, GetInt, HasAttributesDynamic, IsBlockedRaw, SetColor
// calls: CNavArea::IsBlocked, Warning, CNavObstructionManager::UpdateAreaBlockedFromNavBlockers, ConColorMsg(Color const&,char const*,...), __stack_chk_fail
// callers: CNavObstructionManager::UpdateBlockedAreas, CFuncNavBlocker::UpdateBlocked
// strings: "UpdateBlocked: Area %d is already blocked with a different team id! This may cause flow b, "area %d is blocked\n", "area %d is unblocked\n"
void __fastcall CNavObstructionManager::UpdateBlockedArea(
        CNavObstructionManager *const this,
        CNavArea *const rArea,
        bool bForce,
        int teamID)
{
  char IsBlocked; // r13
  bool v8; // r12
  char v9; // al
  __int64 v10; // rdx
  uint32 m_AreaId; // edx
  uint32 v12; // edx
  uint8 m_isBlockedFlags; // [rsp+Fh] [rbp-41h]
  Color v14; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  IsBlocked = CNavArea::IsBlocked(rArea, -1, 0);
  m_isBlockedFlags = rArea->m_isBlockedFlags;
  if ( (rArea->m_AttributeDynamicFlags & 0xC) != 0 )
  {
    v8 = (rArea->m_AttributeDynamicFlags & 2) != 0;
    if ( bForce )
      CNavObstructionManager::UpdateAreaBlockedFromNavBlockers(this, rArea);
  }
  else
  {
    v8 = 0;
  }
  v9 = CNavArea::IsBlocked(rArea, -1, 0);
  if ( v9 != 0 && IsBlocked != 0 )
  {
    if ( (rArea->m_isBlockedFlags & 1) != (m_isBlockedFlags & 1)
      || ((rArea->m_isBlockedFlags & 2) != 0) != ((m_isBlockedFlags & 2) != 0) )
    {
      Warning(
        "UpdateBlocked: Area %d is already blocked with a different team id! This may cause flow bugs.\n",
        rArea->m_AreaId);
    }
  }
  else if ( IsBlocked != v9 )
  {
    if ( v9 != 0 )
    {
      if ( nav_debug_blocked.m_pParent->m_Value.m_nValue != 0 )
      {
        m_AreaId = rArea->m_AreaId;
        v14._color[0] = 0;
        v14._color[1] = -1;
        v14._color[2] = 0x80;
        v14._color[3] = -1;
        ConColorMsg(&v14, "area %d is blocked\n", m_AreaId);
      }
      v10 = 1;
      if ( (rArea->m_AttributeDynamicFlags & 6) != 6 )
        v10 = v8;
      (*(this->_vptr_INavObstructionManager + 12))(this, rArea, v10);
    }
    else
    {
      if ( nav_debug_blocked.m_pParent->m_Value.m_nValue != 0 )
      {
        v12 = rArea->m_AreaId;
        v14._color[0] = 0;
        v14._color[1] = 0x80;
        v14._color[2] = -1;
        v14._color[3] = -1;
        ConColorMsg(&v14, "area %d is unblocked\n", v12);
      }
      (*(this->_vptr_INavObstructionManager + 13))(this, rArea, v8);
    }
  }
}


// CNavObstructionManager::UpdateOnBreakableBreak  (line 632, @0x0000000002ee6c00, libserver.so)  // inlines: CheckAreaFloors, Expand, Extent, Init, InitExtent, WorldSpaceSurroundingBounds, operator+=, operator-=, operator=
// calls: CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>, CBaseEntity::GetAbsOrigin
// callers: CNavMeshGameEventListener::FireGameEvent
void __fastcall CNavObstructionManager::UpdateOnBreakableBreak(
        CNavObstructionManager *const this,
        CBaseEntity *pBrokenBaseEntity)
{
  CCollisionProperty *m_pCollision; // rdi
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  const Vector *AbsOrigin; // rax
  CheckAreaFloors checkFloors; // [rsp+0h] [rbp-40h] BYREF
  Extent brokenExtent; // [rsp+10h] [rbp-30h] BYREF

  if ( pBrokenBaseEntity != 0 )
  {
    m_pCollision = pBrokenBaseEntity->m_pCollision;
    brokenExtent.lo.x = 3.4028235e38;
    brokenExtent.lo.y = 3.4028235e38;
    brokenExtent.lo.z = 3.4028235e38;
    brokenExtent.hi.x = -3.4028235e38;
    brokenExtent.hi.y = -3.4028235e38;
    brokenExtent.hi.z = -3.4028235e38;
    if ( m_pCollision != 0 )
    {
      (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &brokenExtent, &brokenExtent.hi);
      x = brokenExtent.lo.x;
      y = brokenExtent.lo.y;
      z = brokenExtent.lo.z;
      v8 = brokenExtent.hi.x;
      v9 = brokenExtent.hi.y;
      v10 = brokenExtent.hi.z;
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pBrokenBaseEntity);
      v10 = AbsOrigin->z;
      v9 = AbsOrigin->y;
      v8 = AbsOrigin->x;
      z = v10;
      y = v9;
      x = AbsOrigin->x;
    }
    checkFloors.m_rObstructionManager = this;
    checkFloors.m_pBreakable = pBrokenBaseEntity;
    brokenExtent.lo.x = x - 10.0;
    brokenExtent.lo.y = y - 10.0;
    brokenExtent.lo.z = z - 10.0;
    brokenExtent.hi.x = v8 + 10.0;
    brokenExtent.hi.y = v9 + 10.0;
    brokenExtent.hi.z = v10 + 10.0;
    if ( TheNavMesh != 0 )
      CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(TheNavMesh, &checkFloors, &brokenExtent);
  }
}


// CNavObstructionManager::CheckAreaFloor  (line 650, @0x0000000002edf360, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetCenter, GetTraceMaskSolidBrushOnly, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CNavArea::IsBlocked, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CNavObstructionManager::BlockArea
// callers: CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>
void __fastcall CNavObstructionManager::CheckAreaFloor(
        CNavObstructionManager *const this,
        CNavArea *const rArea,
        const CBaseEntity *pIgnore)
{
  float z; // xmm2_4
  float v7; // xmm0_4
  float x; // [rsp+4h] [rbp-18Ch]
  float y; // [rsp+8h] [rbp-188h]
  float v10; // [rsp+Ch] [rbp-184h]
  float flSize; // [rsp+14h] [rbp-17Ch]
  uint64 v12; // [rsp+18h] [rbp-178h]
  CTraceFilterSimple v13; // [rsp+20h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-130h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-E0h] BYREF

  if ( !CNavArea::IsBlocked(rArea, -1, 0) )
  {
    z = rArea->m_vCenter.z;
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    memset(&tr.m_ShapeAttributes, 0, 31);
    x = rArea->m_vCenter.x;
    v10 = z - 64.0;
    y = rArea->m_vCenter.y;
    flSize = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
    CGameTrace::Init(&tr);
    ray.m_Start.w = 0.0;
    ray.m_Delta.w = 0.0;
    ray.m_StartOffset.w = 0.0;
    ray.m_Delta.x = x - x;
    ray.m_Delta.y = y - y;
    ray.m_Delta.z = v10 - v10;
    ray.m_Extents.w = 0.0;
    ray.m_flRadius = 0.0;
    ray.m_StartOffset.z = -37.0;
    v12 = CNavConfig::ms_TraceMaskSolidBrushOnly;
    ray.m_Extents.z = 37.0;
    ray.m_Start.z = v10 + 37.0;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Extents.x = (flSize + flSize) * 0.5;
    ray.m_Extents.y = ray.m_Extents.x;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.x * ray.m_Extents.x)) + 1369.0) < 0.000001;
    v7 = (flSize - flSize) * 0.5;
    ray.m_StartOffset.x = -v7;
    ray.m_StartOffset.y = -v7;
    ray.m_Start.x = x + v7;
    ray.m_Start.y = y + v7;
    CTraceFilterSimple::CTraceFilterSimple(&v13, pIgnore, 11, 0);
    v13.m_attr.m_nInteractsWith |= v12;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v13, &tr);
    if ( !tr.startsolid )
      CNavObstructionManager::BlockArea(this, rArea, -1, 0);
  }
}


// CNavObstructionManager::MarkAreaObstacleToAvoid  (line 690, @0x0000000002ee9870, libserver.so)  // inlines: GetAvoidanceObstacleHeight, SetAvoidanceObstacleHeight
// calls: CNavObstructionManager::OnAvoidanceObstacleEnteredArea, ceilf
// callers: std::_Function_handler<bool(CNavArea*), CNavObstructionManager::UpdateObstacle(INavObstacle&)::__lambda16>::_M_invoke
void __fastcall CNavObstructionManager::MarkAreaObstacleToAvoid(
        CNavObstructionManager *const this,
        CNavArea *const rArea,
        float a3,
        float flObstacleHeight)
{
  float m_nAvoidanceObstacleHeight; // xmm1_4
  float flObstacleHeighta; // [rsp+Ch] [rbp-14h]

  m_nAvoidanceObstacleHeight = rArea->m_nAvoidanceObstacleHeight;
  if ( a3 > m_nAvoidanceObstacleHeight )
  {
    if ( m_nAvoidanceObstacleHeight == 0.0 )
    {
      flObstacleHeighta = a3;
      CNavObstructionManager::OnAvoidanceObstacleEnteredArea(this, rArea);
      a3 = flObstacleHeighta;
      if ( flObstacleHeighta <= 0.0 )
        goto LABEL_9;
    }
    else if ( a3 <= 0.0 )
    {
LABEL_9:
      rArea->m_nAvoidanceObstacleHeight = 0;
      return;
    }
    if ( a3 < 255.0 )
      rArea->m_nAvoidanceObstacleHeight = ceilf(a3);
    else
      rArea->m_nAvoidanceObstacleHeight = -1;
  }
}


// CNavObstructionManager::UpdateObstacle  (line 705, @0x0000000002ef88a0, libserver.so)  // inlines: CUtlKeyValuePair<int, INavObstacle*>, Construct<CUtlKeyValuePair<int, INavObstacle*>, int, INavObstacle*>, DoInsert<int>, DoLookup<int>, Extent, Insert, IsNavObstacleActive, _Function_base, _M_init_functor, function<CNavObstructionManager::UpdateObstacle(INavObstacle&)::__lambda16, void>, operator(), operator=, operator[], ~_Function_base, ~function
// calls: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoInsertUnconstructed, operator new, CNavMesh::ForAllAreasOverlappingExtent<std::function<bool(CNavArea*)> >, CNavObstacleMgr::UpdateObstacle, CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoLookup<int>, __stack_chk_fail, _Unwind_Resume
// callers: CPhysicsProp::VPhysicsUpdate, CPhysicsProp::Spawn, CFuncNavObstruction::Spawn, CFuncNavObstruction::InputEnable, CNavObstructionManager::OnNavMeshLoaded
// globals: std::_Function_handler<bool ()(CNavArea *),CNavObstructionManager::UpdateObstacle(INavObstacle &)::{lambda(CNavArea *)#1}>::_M_invoke(std::_Any_data const&,CNav, std::_Function_base::_Base_manager<CNavObstructionManager::UpdateObstacle(INavObstacle &)::{lambda(CNavArea *)#1}>::_M_manager(std::_Any_data &,std::_Any_data c
void __fastcall CNavObstructionManager::UpdateObstacle(
        CNavObstructionManager *const this,
        INavObstacle *const rObstacle)
{
  int v4; // r14d
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // r13d
  CUtlHashtableEntry<int,INavObstacle*> *v8; // rax
  _QWORD *v9; // rax
  CNavObstacleMgr *m_pObstacleMgr; // rdi
  Vector vMin; // [rsp+0h] [rbp-A0h] BYREF
  Vector vMax; // [rsp+10h] [rbp-90h] BYREF
  Extent obstructionExtent; // [rsp+20h] [rbp-80h] BYREF
  std::function<bool(CNavArea*)> overlapFunc; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( (*(rObstacle->_vptr_INavObstacle + 3))(rObstacle) != 0
    && ((*(rObstacle->_vptr_INavObstacle + 4))(rObstacle) != 0 || (*(rObstacle->_vptr_INavObstacle + 7))(rObstacle) != 0) )
  {
    v4 = (*rObstacle->_vptr_INavObstacle)(rObstacle);
    v5 = 33 * (((4097 * v4 + 2127912214) >> 19) ^ (4097 * v4 + 2127912214) ^ 0xC761C23C);
    v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
    v7 = HIWORD(v6) ^ v6 ^ 0xB55A4F09;
    if ( this->m_avoidanceObstacles.m_nUsed == 0
      || CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoLookup<int>(
           &this->m_avoidanceObstacles,
           v4,
           v7,
           0) == -1 )
    {
      v8 = &this->m_avoidanceObstacles.m_table.m_pMemory[CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoInsertUnconstructed(
                                                           &this->m_avoidanceObstacles,
                                                           v7,
                                                           1)];
      if ( v8 != -4LL )
      {
        v8->data[0] = v4;
        *&v8->data[2] = rObstacle;
      }
    }
    v9 = operator new(0x10u);
    *v9 = this;
    v9[1] = rObstacle;
    overlapFunc._M_functor._M_unused._M_object = v9;
    overlapFunc._M_invoker = std::_Function_handler<bool ()(CNavArea *),CNavObstructionManager::UpdateObstacle(INavObstacle &)::{lambda(CNavArea *)#1}>::_M_invoke;
    overlapFunc._M_manager = std::_Function_base::_Base_manager<CNavObstructionManager::UpdateObstacle(INavObstacle &)::{lambda(CNavArea *)#1}>::_M_manager;
    (*(rObstacle->_vptr_INavObstacle + 1))(rObstacle, &vMin, &vMax);
    vMin.z = vMin.z - 71.0;
    obstructionExtent.lo = vMin;
    obstructionExtent.hi = vMax;
    if ( TheNavMesh != 0 )
      CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(
        TheNavMesh,
        &overlapFunc,
        &obstructionExtent);
    if ( overlapFunc._M_manager != 0 )
      overlapFunc._M_manager(&overlapFunc, &overlapFunc, std::_Manager_operation::__destroy_functor);
  }
  if ( (*(rObstacle->_vptr_INavObstacle + 6))(rObstacle) != 0 )
  {
    m_pObstacleMgr = this->m_pObstacleMgr;
    if ( m_pObstacleMgr != 0 )
      CNavObstacleMgr::UpdateObstacle(m_pObstacleMgr, rObstacle);
  }
}


// CNavObstructionManager::UpdateAreaAvoidanceObstacles  (line 744, @0x0000000002ee6140, libserver.so)  // inlines: Element, FirstHandle, IsNavObstacleActive, Max<float>, NextHandle, OnAvoidanceObstacleLeftArea, SetAvoidanceObstacleHeight, operator[]
// calls: CNavPoly::IsExtentIntersectingBox, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove, ceilf
// callers: CNavObstructionManager::UpdateAvoidanceObstacleAreas
void __fastcall CNavObstructionManager::UpdateAreaAvoidanceObstacles(
        CNavObstructionManager *const this,
        CNavArea *const rArea)
{
  int m_nAllocationCount; // edx
  CUtlHashtableEntry<int,INavObstacle*> *m_pMemory; // rcx
  CUtlHashtableEntry<int,INavObstacle*> *v5; // rax
  int v6; // ebx
  bool v7; // zf
  __int64 v8; // r12
  __int64 v9; // r14
  int v10; // edx
  CUtlHashtableEntry<int,INavObstacle*> *v11; // rax
  float flMaxObstacleHeight; // [rsp+Ch] [rbp-64h]
  Vector vSurroundMins; // [rsp+20h] [rbp-50h] BYREF
  Vector vSurroundMaxs; // [rsp+30h] [rbp-40h] BYREF

  m_nAllocationCount = this->m_avoidanceObstacles.m_table.m_nAllocationCount;
  m_pMemory = this->m_avoidanceObstacles.m_table.m_pMemory;
  if ( m_nAllocationCount <= 0 )
  {
    flMaxObstacleHeight = 0.0;
LABEL_7:
    rArea->m_nAvoidanceObstacleHeight = 0;
LABEL_8:
    v7 = flMaxObstacleHeight == 0.0;
    goto LABEL_21;
  }
  if ( m_pMemory->flags_and_hash >= 0 )
  {
    v6 = 0;
    goto LABEL_11;
  }
  v5 = m_pMemory + 1;
  v6 = 0;
  do
  {
    if ( ++v6 == m_nAllocationCount )
    {
      flMaxObstacleHeight = 0.0;
      goto LABEL_7;
    }
    ++v5;
  }
  while ( v5[-1].flags_and_hash < 0 );
  if ( v6 == -1 )
  {
    flMaxObstacleHeight = 0.0;
    goto LABEL_7;
  }
LABEL_11:
  flMaxObstacleHeight = 0.0;
  do
  {
    v8 = v6;
    v9 = *&m_pMemory[v8].data[2];
    (*(*v9 + 8LL))(v9, &vSurroundMins, &vSurroundMaxs);
    if ( CNavPoly::IsExtentIntersectingBox(rArea, &vSurroundMins, &vSurroundMaxs, 55.0)
      && ((*(*v9 + 32LL))(v9) != 0 || (*(*v9 + 56LL))(v9) != 0) )
    {
      flMaxObstacleHeight = fmaxf(flMaxObstacleHeight, (*(*v9 + 40LL))(v9));
    }
    v10 = this->m_avoidanceObstacles.m_table.m_nAllocationCount;
    ++v6;
    m_pMemory = this->m_avoidanceObstacles.m_table.m_pMemory;
    if ( v6 >= v10 )
      break;
    v11 = &m_pMemory[v6 + 1];
    if ( m_pMemory[v8 + 1].flags_and_hash < 0 )
    {
      while ( ++v6 != v10 )
      {
        ++v11;
        if ( v11[-1].flags_and_hash >= 0 )
          goto LABEL_23;
      }
      break;
    }
LABEL_23:
    ;
  }
  while ( v6 != -1 );
  if ( flMaxObstacleHeight <= 0.0 )
    goto LABEL_7;
  if ( flMaxObstacleHeight < 255.0 )
  {
    rArea->m_nAvoidanceObstacleHeight = ceilf(flMaxObstacleHeight);
    goto LABEL_8;
  }
  v7 = flMaxObstacleHeight == 0.0;
  rArea->m_nAvoidanceObstacleHeight = -1;
LABEL_21:
  if ( v7 )
  {
    *&vSurroundMaxs.x = rArea;
    CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(
      &this->m_avoidanceObstacleAreas,
      &vSurroundMaxs);
  }
}


// CNavObstructionManager::InitConnectionBlockers  (line 779, @0x0000000002ef1060, libserver.so)  // inlines: AddToTail, CopyConstruct<CFuncNavConnectionBlocker*>, Element, GrowMemory, Purge, RemoveAll, operator[]
// calls: CGameEntitySystem::FindEntityByClassname, CUtlMemory<CFuncNavConnectionBlocker*, int>::Grow, Msg, CUtlMemory<CFuncNavConnectionBlocker*, int>::Purge
// callers: CNavGenerator::BeginGeneration
// strings: "func_nav_connection_blocker", "CNavObstructionManager::InitConnectionBlockers: %d connection blockers found\n"
void __fastcall CNavObstructionManager::InitConnectionBlockers(CNavObstructionManager *const this)
{
  CUtlVectorBase<CFuncNavConnectionBlocker*,CUtlMemory<CFuncNavConnectionBlocker*,int> >::CAllocator *p_m_Memory; // r14
  CBaseEntity *EntityByClassname; // rax
  CFuncNavConnectionBlocker **v4; // rdx
  __int64 m_Size; // r12
  int v6; // edx
  CFuncNavConnectionBlocker *pBlockerEntity; // [rsp+8h] [rbp-28h]

  p_m_Memory = &this->m_connectionBlockers.m_Memory;
  this->m_connectionBlockers.m_Size = 0;
  if ( (this->m_connectionBlockers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CFuncNavConnectionBlocker *,int>::Purge(&this->m_connectionBlockers.m_Memory);
  EntityByClassname = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                          g_pGameEntitySystem,
                          EntityByClassname,
                          "func_nav_connection_blocker");
    if ( EntityByClassname == 0 )
      break;
    m_Size = this->m_connectionBlockers.m_Size;
    v6 = this->m_connectionBlockers.m_Size;
    if ( m_Size == this->m_connectionBlockers.m_Memory.m_nAllocationCount )
    {
      pBlockerEntity = EntityByClassname;
      CUtlMemory<CFuncNavConnectionBlocker *,int>::Grow(p_m_Memory, 1);
      v6 = this->m_connectionBlockers.m_Size;
      EntityByClassname = pBlockerEntity;
    }
    this->m_connectionBlockers.m_Size = v6 + 1;
    v4 = &this->m_connectionBlockers.m_Memory.m_pMemory[m_Size];
    if ( v4 != 0 )
      *v4 = EntityByClassname;
  }
  Msg(
    "CNavObstructionManager::InitConnectionBlockers: %d connection blockers found\n",
    this->m_connectionBlockers.m_Size);
}


// CNavObstructionManager::TestRayToConnectionBlockers  (line 796, @0x0000000002ed66c0, libserver.so)  // inlines: end
// calls: CFuncNavConnectionBlocker::CollideWithRay
bool __fastcall CNavObstructionManager::TestRayToConnectionBlockers(
        CNavObstructionManager *const this,
        const Ray_t *const rRay)
{
  CFuncNavConnectionBlocker **m_pMemory; // rbx
  CFuncNavConnectionBlocker **v4; // r12
  bool result; // al

  m_pMemory = this->m_connectionBlockers.m_Memory.m_pMemory;
  v4 = &m_pMemory[this->m_connectionBlockers.m_Size];
  if ( m_pMemory == v4 )
    return 0;
  while ( 1 )
  {
    if ( *m_pMemory != 0 )
    {
      result = CFuncNavConnectionBlocker::CollideWithRay(*m_pMemory, rRay);
      if ( result )
        break;
    }
    if ( v4 == ++m_pMemory )
      return 0;
  }
  return result;
}


// CNavObstructionManager::UpdatePendingDoorHelpers  (line 810, @0x0000000002edf610, libserver.so)  // inlines: RemoveAll
void __fastcall CNavObstructionManager::UpdatePendingDoorHelpers(CNavObstructionManager *const this)
{
  if ( TheNavMesh != 0 )
    this->m_doorBlockers.m_Size = 0;
}


// CNavObstructionManager::AddPendingDoorBlocker  (line 827, @0x0000000002ef1450, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavDoorBlocker*>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<CNavDoorBlocker*, CUtlMemory<CNavDoorBlocker*, int> >::Find, CUtlMemory<CNavDoorBlocker*, int>::Grow
void __fastcall CNavObstructionManager::AddPendingDoorBlocker(
        CNavObstructionManager *const this,
        CNavDoorBlocker *pDoorBlocker)
{
  __int64 m_Size; // r12
  int v4; // eax
  CNavDoorBlocker **v5; // rax
  CNavDoorBlocker *pDoorBlockera; // [rsp+8h] [rbp-18h] BYREF

  pDoorBlockera = pDoorBlocker;
  if ( CUtlVectorBase<CNavDoorBlocker *,CUtlMemory<CNavDoorBlocker *,int>>::Find(&this->m_doorBlockers, &pDoorBlockera) < 0 )
  {
    m_Size = this->m_doorBlockers.m_Size;
    v4 = this->m_doorBlockers.m_Size;
    if ( m_Size == this->m_doorBlockers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavDoorBlocker *,int>::Grow(&this->m_doorBlockers.m_Memory, 1);
      v4 = this->m_doorBlockers.m_Size;
    }
    this->m_doorBlockers.m_Size = v4 + 1;
    v5 = &this->m_doorBlockers.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = pDoorBlockera;
  }
}


// CNavObstructionManager::RemovePendingDoorBlocker  (line 837, @0x0000000002ee6f00, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CUtlVectorBase<CNavDoorBlocker*, CUtlMemory<CNavDoorBlocker*, int> >::Find, memmove
// callers: CNavDoorBlocker::~CNavDoorBlocker
void __fastcall CNavObstructionManager::RemovePendingDoorBlocker(
        CNavObstructionManager *const this,
        CNavDoorBlocker *pDoorBlocker)
{
  CUtlVector<CNavDoorBlocker*,CUtlMemory<CNavDoorBlocker*,int> > *p_m_doorBlockers; // r13
  int v4; // eax
  int m_Size; // ebx
  CNavDoorBlocker **v6; // rsi
  CNavDoorBlocker *pDoorBlockera; // [rsp+8h] [rbp-28h] BYREF

  p_m_doorBlockers = &this->m_doorBlockers;
  pDoorBlockera = pDoorBlocker;
  v4 = CUtlVectorBase<CNavDoorBlocker *,CUtlMemory<CNavDoorBlocker *,int>>::Find(&this->m_doorBlockers, &pDoorBlockera);
  if ( v4 >= 0 )
  {
    m_Size = this->m_doorBlockers.m_Size;
    do
    {
      if ( m_Size - v4 - 1 > 0 )
      {
        v6 = &this->m_doorBlockers.m_Memory.m_pMemory[v4 + 1];
        memmove(v6 - 1, v6, 8LL * (m_Size - v4 - 1));
        m_Size = this->m_doorBlockers.m_Size;
      }
      this->m_doorBlockers.m_Size = --m_Size;
      v4 = CUtlVectorBase<CNavDoorBlocker *,CUtlMemory<CNavDoorBlocker *,int>>::Find(p_m_doorBlockers, &pDoorBlockera);
    }
    while ( v4 >= 0 );
  }
}


// CNavObstacleShape::GenerateObstacleVerts  (line 851, @0x0000000002ef2940, libserver.so)
// calls: CalcOOBB2dFrom3d
// callers: CNavObstacleMgr::SplitObstacle
float __fastcall CNavObstacleShape::GenerateObstacleVerts(const CNavObstacleShape *const this, Vector2D *vObsVertsOut)
{
  float x; // xmm0_4
  float v5; // xmm1_4
  double v6; // xmm6_8
  vec_t z; // eax
  float v8; // xmm7_4
  double v9; // xmm1_8
  vec_t v10; // xmm3_4
  vec_t v11; // eax
  double v12; // xmm0_8
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float y; // xmm0_4
  float v17; // xmm2_4
  vec_t v18; // xmm5_4
  Vector2D vOBBCenter; // [rsp+0h] [rbp-60h] BYREF
  Vector2D vOBBExtentA; // [rsp+10h] [rbp-50h] BYREF
  Vector2D vOBBExtentB; // [rsp+20h] [rbp-40h] BYREF
  double v23; // [rsp+30h] [rbp-30h]
  vec_t v24; // [rsp+38h] [rbp-28h]
  Vector vMaxs; // [rsp+40h] [rbp-20h]

  x = this->m_vMaxs.x;
  v5 = this->m_vMins.x + this->m_vMins.x;
  v6 = *&this->m_Angles.x;
  v23 = *&this->m_vMins.x;
  z = this->m_vMins.z;
  v8 = this->m_Angles.z;
  *&v23 = v5;
  *&v9 = LODWORD(this->m_vCenter.z);
  v24 = z;
  v10 = z;
  *&vMaxs.x = *&this->m_vMaxs.x;
  v11 = this->m_vMaxs.z;
  vMaxs.x = x + x;
  v12 = *&this->m_vCenter.x;
  vMaxs.z = v11;
  CalcOOBB2dFrom3d(&vOBBCenter, &vOBBExtentA, &vOBBExtentB, v12, v9, v23, v10, *&vMaxs.x, v11, v6, v8);
  v13 = vOBBExtentB.x;
  v14 = vOBBCenter.x - vOBBExtentA.x;
  v15 = vOBBCenter.y + vOBBExtentA.y;
  y = vOBBExtentB.y;
  v17 = vOBBCenter.y - vOBBExtentA.y;
  v18 = (vOBBExtentA.x + vOBBCenter.x) - vOBBExtentB.x;
  vObsVertsOut->x = (vOBBExtentA.x + vOBBCenter.x) + vOBBExtentB.x;
  vObsVertsOut[1].x = v18;
  vObsVertsOut[1].y = v15 - y;
  vObsVertsOut->y = v15 + y;
  vObsVertsOut[2].x = v14 - v13;
  vObsVertsOut[3].x = v13 + v14;
  vObsVertsOut[2].y = v17 - y;
  vObsVertsOut[3].y = y + v17;
  return ((this->m_vMaxs.z + this->m_vMins.z) * 0.5) + this->m_vCenter.z;
}


// CNavObstacleShape::DebugDraw  (line 873, @0x0000000002edf630, libserver.so)  // inlines: AngleQuaternion, BoxAngles, ToQuaternion, VertexColor_t
// calls: AngleQuaternion
// callers: CNavObstacleMgr::DebugDraw
void __fastcall CNavObstacleShape::DebugDraw(
        const CNavObstacleShape *const this,
        char r,
        char g,
        char b,
        float flDuration)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v11[16]; // [rsp+10h] [rbp-50h] BYREF
  Quaternion outQuat; // [rsp+20h] [rbp-40h] BYREF

  AngleQuaternion(&this->m_Angles, &outQuat);
  vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
  v11[0] = r;
  v11[1] = g;
  v11[2] = b;
  v11[3] = -1;
  vptr_ISceneViewDebugOverlays[15](debugoverlay, this, &this->m_vMins, &this->m_vMaxs, &outQuat, v11, flDuration, 0);
}


// CNavObstacleEdge::Validate  (line 882, @0x0000000002edf6c0, libserver.so)
void __fastcall CNavObstacleEdge::Validate(const CNavObstacleEdge *const this)
{
  ;
}


// CNavObstacleMgr::CNavObstacleSplitNode::CNavObstacleSplitNode  (line 903, @0x0000000002edf6d0, libserver.so)
void __fastcall CNavObstacleMgr::CNavObstacleSplitNode::CNavObstacleSplitNode(
        CNavObstacleMgr::CNavObstacleSplitNode *const this,
        uint32 nAreaIndex,
        CNavObstacleMgr::CNavObstacleSplitNode *pParent)
{
  this->m_nAreaIndex = nAreaIndex;
  this->m_pParent = pParent;
  this->m_pSplittingEdge = 0;
  this->m_ChildNodes[0] = 0;
  this->m_ChildNodes[1] = 0;
  this->m_ChildNodes[2] = 0;
}


// CNavObstacleMgr::CNavObstacleSplitNode::SplitLeafNode  (line 916, @0x0000000002edf700, libserver.so)  // inlines: CNavObstacleSplitNode
// calls: operator new
// callers: CNavObstacleMgr::SplitEdge
void __fastcall CNavObstacleMgr::CNavObstacleSplitNode::SplitLeafNode(
        CNavObstacleMgr::CNavObstacleSplitNode *const this,
        CNavObstacleEdge *const rSplittingEdge,
        int nNumChildren,
        CNavArea **childAreas)
{
  int v7; // r12d
  __int64 v8; // rax
  uint32 v9; // r15d
  CNavObstacleMgr::CNavObstacleSplitNode *v10; // rax
  __int64 v11; // rdx

  if ( this->m_pSplittingEdge == 0 )
  {
    this->m_pSplittingEdge = rSplittingEdge;
    if ( nNumChildren > 0 )
    {
      v7 = 0;
      do
      {
        v8 = *childAreas++;
        v9 = *(v8 + 208);
        v10 = operator new(0x30u);
        v11 = v7++;
        v10->m_pParent = this;
        v10->m_pSplittingEdge = 0;
        v10->m_nAreaIndex = v9;
        v10->m_ChildNodes[0] = 0;
        v10->m_ChildNodes[1] = 0;
        v10->m_ChildNodes[2] = 0;
        this->m_ChildNodes[v11] = v10;
      }
      while ( v7 <= 2 && nNumChildren > v7 );
    }
  }
}


// CNavObstacleMgr::CNavObstacleSplitNode::MergeLeafNode  (line 933, @0x0000000002edf7b0, libserver.so)
// calls: operator delete
// callers: CNavObstacleMgr::CNavObstacleSplitForest::MergeLeafNode
void __fastcall CNavObstacleMgr::CNavObstacleSplitNode::MergeLeafNode(
        CNavObstacleMgr::CNavObstacleSplitNode *const this)
{
  __int64 v2; // rbx

  v2 = 0;
  if ( this->m_pSplittingEdge != 0 )
  {
    do
    {
      operator delete(this->m_ChildNodes[v2]);
      this->m_ChildNodes[v2++] = 0;
    }
    while ( v2 != 3 );
  }
  this->m_pSplittingEdge = 0;
}


// CNavObstacleMgr::CNavObstacleSplitNode::Validate  (line 951, @0x0000000002edf7f0, libserver.so)
void __fastcall CNavObstacleMgr::CNavObstacleSplitNode::Validate(
        CNavObstacleMgr::CNavObstacleSplitNode *const this,
        bool bRecurse)
{
  ;
}


// CNavObstacleMgr::CNavObstacleSplitForest::AddTree  (line 1006, @0x0000000002ef14e0, libserver.so)  // inlines: AddToTail, CNavObstacleSplitNode, CopyConstruct<CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t>, Element, GrowMemory, operator[]
// calls: operator new, CUtlMemory<CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t, int>::Grow
// callers: CNavObstacleMgr::SplitEdge
CNavObstacleMgr::CNavObstacleSplitNode *__fastcall CNavObstacleMgr::CNavObstacleSplitForest::AddTree(
        CNavObstacleMgr::CNavObstacleSplitForest *const this,
        CNavArea *const rArea)
{
  int32 m_nIndex; // r12d
  CNavObstacleMgr::CNavObstacleSplitNode *result; // rax
  int m_Size; // r12d
  int v6; // edx
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *v7; // rdx
  CNavObstacleMgr::CNavObstacleSplitNode *pNewNode; // [rsp+8h] [rbp-18h]

  m_nIndex = rArea->m_nIndex;
  result = operator new(0x30u);
  result->m_pParent = 0;
  result->m_pSplittingEdge = 0;
  result->m_nAreaIndex = m_nIndex;
  result->m_ChildNodes[0] = 0;
  result->m_ChildNodes[1] = 0;
  result->m_ChildNodes[2] = 0;
  m_Size = this->m_Roots.m_Size;
  v6 = this->m_Roots.m_Size;
  if ( this->m_Roots.m_Size == this->m_Roots.m_Memory.m_nAllocationCount )
  {
    pNewNode = result;
    CUtlMemory<CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t,int>::Grow(&this->m_Roots.m_Memory, 1);
    v6 = this->m_Roots.m_Size;
    result = pNewNode;
  }
  this->m_Roots.m_Size = v6 + 1;
  v7 = &this->m_Roots.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
  {
    v7->m_pNode = result;
    v7->m_bDirty = 0;
  }
  return result;
}


// CNavObstacleMgr::CNavObstacleSplitForest::MarkRootsClean  (line 1022, @0x0000000002edf800, libserver.so)
// callers: CNavObstacleMgr::SplitObstacle, CNavObstacleMgr::MergeObstacle
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::MarkRootsClean(
        CNavObstacleMgr::CNavObstacleSplitForest *const this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( this->m_Roots.m_Size != 0 )
  {
    v1 = 0;
    v2 = 16 * ((this->m_Roots.m_Size - 1) + 1LL);
    do
    {
      this->m_Roots.m_Memory.m_pMemory[v1 / 0x10].m_bDirty = 0;
      v1 += 16LL;
    }
    while ( v1 != v2 );
  }
}


// CNavObstacleMgr::CNavObstacleSplitForest::MarkNodeDirty  (line 1032, @0x0000000002edf840, libserver.so)  // inlines: Element, FindMatching<CNavObstacleMgr::CNavObstacleSplitForest::MarkNodeDirty(CNavObstacleMgr::CNavObstacleSplitNode&)::__lambda17>, operator[]
// callers: CNavObstacleMgr::SplitEdge, CNavObstacleMgr::MergeEdgeRecursive
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::MarkNodeDirty(
        CNavObstacleMgr::CNavObstacleSplitForest *const this,
        CNavObstacleMgr::CNavObstacleSplitNode *const rNode)
{
  int m_Size; // ecx
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *m_pMemory; // rdi
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *v4; // rax
  int v5; // edx

  while ( rNode->m_pParent != 0 )
    rNode = rNode->m_pParent;
  m_Size = this->m_Roots.m_Size;
  if ( this->m_Roots.m_Size > 0 )
  {
    m_pMemory = this->m_Roots.m_Memory.m_pMemory;
    if ( rNode == m_pMemory->m_pNode )
    {
LABEL_11:
      m_pMemory->m_bDirty = 1;
    }
    else
    {
      v4 = m_pMemory + 1;
      v5 = 0;
      while ( ++v5 != m_Size )
      {
        m_pMemory = v4++;
        if ( rNode == v4[-1].m_pNode )
        {
          if ( v5 < 0 )
            return;
          goto LABEL_11;
        }
      }
    }
  }
}


// CNavObstacleMgr::CNavObstacleSplitForest::MergeLeafNode  (line 1049, @0x0000000002edf8a0, libserver.so)  // inlines: Element, FastRemove, FindMatching<CNavObstacleMgr::CNavObstacleSplitForest::MergeLeafNode(CNavObstacleMgr::CNavObstacleSplitNode&)::__lambda18>, memcpy, operator[]
// calls: CNavObstacleMgr::CNavObstacleSplitNode::MergeLeafNode
// callers: CNavObstacleMgr::MergeLeafNode
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::MergeLeafNode(
        CNavObstacleMgr::CNavObstacleSplitForest *const this,
        CNavObstacleMgr::CNavObstacleSplitNode *const rNode)
{
  int m_Size; // ecx
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *m_pMemory; // rsi
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *v6; // rdx
  int v7; // eax
  int v8; // ecx
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *v9; // rcx
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *v10; // rax

  CNavObstacleMgr::CNavObstacleSplitNode::MergeLeafNode(rNode);
  if ( rNode->m_pParent == 0 )
  {
    m_Size = this->m_Roots.m_Size;
    if ( this->m_Roots.m_Size > 0 )
    {
      m_pMemory = this->m_Roots.m_Memory.m_pMemory;
      if ( rNode == m_pMemory->m_pNode )
      {
        v7 = 0;
LABEL_9:
        v8 = m_Size - 1;
        if ( v7 != v8 )
        {
          v9 = &m_pMemory[v8];
          v10 = &m_pMemory[v7];
          v10->m_pNode = v9->m_pNode;
          *&v10->m_bDirty = *&v9->m_bDirty;
          v8 = this->m_Roots.m_Size - 1;
        }
        this->m_Roots.m_Size = v8;
      }
      else
      {
        v6 = m_pMemory + 1;
        v7 = 0;
        while ( ++v7 != m_Size )
        {
          ++v6;
          if ( rNode == v6[-1].m_pNode )
          {
            if ( v7 < 0 )
              return;
            goto LABEL_9;
          }
        }
      }
    }
  }
}


// CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForDirtyRoots  (line 1064, @0x0000000002ef1640, libserver.so)  // inlines: Element, ObstacleCompare, RemoveMultipleFromTail, Sort, SortAndMakeUnique<CNavObstacle*, CUtlMemoryFixedGrowable<CNavObstacle*, 16ul, int> >, V_swap<CNavObstacle*>, operator[]
// calls: CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForNodeRecursive, V_qsort
// callers: CNavObstacleMgr::UpdateBlocked
// globals: ObstacleCompare(CNavObstacle * const*,CNavObstacle * const*)
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForDirtyRoots(
        const CNavObstacleMgr::CNavObstacleSplitForest *const this,
        CNavObstacleMgr::ObstacleVector *const rObstaclesOut)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t *v6; // rax
  CNavObstacleMgr::CNavObstacleSplitNode *m_pNode; // rsi
  bool m_bDirty; // al
  int m_Size; // eax
  CNavObstacle **m_pMemory; // rdi
  __int64 v11; // rsi
  int v12; // r10d
  int v13; // edi
  int v14; // edx
  int v15; // eax
  CNavObstacle **v16; // rcx
  __int64 v17; // r9
  CNavObstacle *v18; // r8
  int v19; // eax
  unsigned int v20; // r11d
  __int64 v21; // rdi
  __int64 v22; // rdx
  CNavObstacle **v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // r8
  __int64 *v26; // rdi
  __int64 v27; // r9

  if ( this->m_Roots.m_Size != 0 )
  {
    v4 = 0;
    v5 = 16 * ((this->m_Roots.m_Size - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v6 = &this->m_Roots.m_Memory.m_pMemory[v4 / 0x10];
        m_pNode = v6->m_pNode;
        m_bDirty = v6->m_bDirty;
        if ( m_pNode != 0 && m_bDirty )
          break;
        v4 += 16LL;
        if ( v4 == v5 )
          goto LABEL_7;
      }
      v4 += 16LL;
      CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForNodeRecursive(this, m_pNode, rObstaclesOut);
    }
    while ( v4 != v5 );
  }
LABEL_7:
  m_Size = rObstaclesOut->m_Size;
  if ( rObstaclesOut->m_Size > 1 )
  {
    m_pMemory = rObstaclesOut->m_Memory.m_pMemory;
    if ( m_pMemory != 0 )
    {
      V_qsort(m_pMemory, m_Size, 8, ObstacleCompare);
    }
    else
    {
      v19 = m_Size - 1;
      do
      {
        v20 = v19 - 1;
        if ( v19 > 0 )
        {
          v21 = 0;
          v22 = 8LL * v20 + 8;
          while ( 1 )
          {
            v23 = rObstaclesOut->m_Memory.m_pMemory;
            v24 = v21 + 8;
            v25 = (v23 + v21 + 8);
            v26 = (v23 + v21);
            v27 = *v26;
            if ( (-750576809 * ((*v26 - *v25) >> 3)) >= 0 )
            {
              if ( v24 == v22 )
                break;
            }
            else
            {
              *v26 = *v25;
              *v25 = v27;
              if ( v24 == v22 )
                break;
            }
            v21 = v24;
          }
        }
        v19 = v20;
      }
      while ( v20 != -1 );
    }
    if ( rObstaclesOut->m_Size > 1 )
    {
      v11 = 1;
      v12 = 0;
      v13 = 0;
      v14 = 1;
      do
      {
        while ( 1 )
        {
          v16 = rObstaclesOut->m_Memory.m_pMemory;
          v17 = v13;
          v18 = v16[v11];
          if ( -750576809 * ((v16[v17] - v18) >> 3) != 0 )
            break;
          v15 = rObstaclesOut->m_Size;
          ++v14;
          ++v12;
          ++v11;
          if ( v14 >= rObstaclesOut->m_Size )
            goto LABEL_17;
        }
        if ( v14 != ++v13 )
          v16[v17 + 1] = v18;
        v15 = rObstaclesOut->m_Size;
        ++v14;
        ++v11;
      }
      while ( v14 < rObstaclesOut->m_Size );
LABEL_17:
      if ( v12 != 0 )
        rObstaclesOut->m_Size = v15 - v12;
    }
  }
}


// CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForNodeRecursive  (line 1079, @0x0000000002ef1580, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavObstacle*>, Element, GrowMemory, Tail, operator[]
// calls: CUtlMemory<CNavObstacle*, int>::Grow
// callers: CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForDirtyRoots
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForNodeRecursive(
        const CNavObstacleMgr::CNavObstacleSplitForest *const this,
        CNavObstacleMgr::CNavObstacleSplitNode *const rNode,
        CNavObstacleMgr::ObstacleVector *const rObstaclesOut)
{
  CNavObstacleEdge *m_pSplittingEdge; // rax
  CNavObstacle *m_pOwningObstacle; // r15
  __int64 m_Size; // rbx
  int v9; // eax
  CNavObstacle **v10; // rax
  __int64 i; // rbx
  CNavObstacleMgr::CNavObstacleSplitNode *v12; // rsi

  m_pSplittingEdge = rNode->m_pSplittingEdge;
  if ( m_pSplittingEdge != 0 )
  {
    m_pOwningObstacle = m_pSplittingEdge->m_pOwningObstacle;
    if ( m_pOwningObstacle != 0 )
    {
      m_Size = rObstaclesOut->m_Size;
      if ( m_Size == 0 || m_pOwningObstacle != rObstaclesOut->m_Memory.m_pMemory[m_Size - 1] )
      {
        if ( m_Size == rObstaclesOut->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavObstacle *,int>::Grow(&rObstaclesOut->m_Memory, 1);
          v9 = rObstaclesOut->m_Size;
        }
        else
        {
          v9 = rObstaclesOut->m_Size;
        }
        rObstaclesOut->m_Size = v9 + 1;
        v10 = &rObstaclesOut->m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
          *v10 = m_pOwningObstacle;
      }
    }
    for ( i = 0; i != 3; ++i )
    {
      v12 = rNode->m_ChildNodes[i];
      if ( v12 != 0 )
        CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForNodeRecursive(this, v12, rObstaclesOut);
    }
  }
}


// CNavObstacleMgr::CNavObstacleSplitForest::Validate  (line 1104, @0x0000000002edf930, libserver.so)
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::Validate(
        const CNavObstacleMgr::CNavObstacleSplitForest *const this)
{
  ;
}


// CNavObstacleMgr::CNavObstacleSplitForest::DebugPrint  (line 1118, @0x0000000002edf9d0, libserver.so)
// calls: Msg, CNavObstacleMgr::CNavObstacleSplitForest::DebugPrintRecursive
// strings: "Forest - Roots = %d\n", "Root %d\n"
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::DebugPrint(
        const CNavObstacleMgr::CNavObstacleSplitForest *const this)
{
  __int64 v2; // rbx
  int m_Size; // r13d
  __int64 v4; // rax

  v2 = 0;
  Msg("Forest - Roots = %d\n", this->m_Roots.m_Size);
  m_Size = this->m_Roots.m_Size;
  if ( this->m_Roots.m_Size != 0 )
  {
    do
    {
      Msg("Root %d\n", v2);
      v4 = v2++;
      CNavObstacleMgr::CNavObstacleSplitForest::DebugPrintRecursive(
        this,
        this->m_Roots.m_Memory.m_pMemory[v4].m_pNode,
        0);
    }
    while ( m_Size != v2 );
  }
}


// CNavObstacleMgr::CNavObstacleSplitForest::DebugPrintRecursive  (line 1131, @0x0000000002edf940, libserver.so)
// calls: Msg
// callers: CNavObstacleMgr::CNavObstacleSplitForest::DebugPrint
// strings: " -", " node = %p, nAreaIndex = %d, pSplittingEdge = %p, owning obstacle %p\n"
void __fastcall CNavObstacleMgr::CNavObstacleSplitForest::DebugPrintRecursive(
        const CNavObstacleMgr::CNavObstacleSplitForest *const this,
        CNavObstacleMgr::CNavObstacleSplitNode *const rNode,
        int nLevel)
{
  int v6; // ebx
  CNavObstacleEdge *m_pSplittingEdge; // rcx
  CNavObstacle *m_pOwningObstacle; // r8
  __int64 v9; // rbx
  int v10; // r12d
  CNavObstacleMgr::CNavObstacleSplitNode *v11; // rsi

  v6 = 0;
  if ( nLevel > 0 )
  {
    do
    {
      ++v6;
      Msg(" -");
    }
    while ( v6 != nLevel );
  }
  m_pSplittingEdge = rNode->m_pSplittingEdge;
  m_pOwningObstacle = 0;
  if ( m_pSplittingEdge != 0 )
    m_pOwningObstacle = m_pSplittingEdge->m_pOwningObstacle;
  v9 = 0;
  v10 = nLevel + 1;
  Msg(
    " node = %p, nAreaIndex = %d, pSplittingEdge = %p, owning obstacle %p\n",
    rNode,
    rNode->m_nAreaIndex,
    m_pSplittingEdge,
    m_pOwningObstacle);
  do
  {
    v11 = rNode->m_ChildNodes[v9];
    if ( v11 != 0 )
      CNavObstacleMgr::CNavObstacleSplitForest::DebugPrintRecursive(this, v11, v10);
    ++v9;
  }
  while ( v9 != 3 );
}


// CNavObstacleMgr::Validate  (line 1155, @0x0000000002edfa40, libserver.so)
void __fastcall CNavObstacleMgr::Validate(CNavObstacleMgr *const this)
{
  ;
}


// CNavObstacleMgr::OnChangeTheNavMesh  (line 1183, @0x0000000002efc030, libserver.so)
// calls: CNavObstacleMgr::MergeAllObstacles
void __fastcall CNavObstacleMgr::OnChangeTheNavMesh(CNavObstacleMgr *const this)
{
  CNavObstacleMgr::MergeAllObstacles(this);
}


// CNavObstacleMgr::OnNavMeshDestroyed  (line 1191, @0x0000000002edfa50, libserver.so)
void __fastcall CNavObstacleMgr::OnNavMeshDestroyed(CNavObstacleMgr *const this)
{
  ;
}


// CNavObstacleMgr::ResetNavMesh  (line 1198, @0x0000000002edfa60, libserver.so)
void __fastcall CNavObstacleMgr::ResetNavMesh(CNavObstacleMgr *const this)
{
  ;
}


// CNavObstacleMgr::ChangeNavAreaIndex  (line 1205, @0x0000000002ef8390, libserver.so)  // inlines: CUtlKeyValuePair<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, Construct<CUtlKeyValuePair<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, DoInsert<unsigned int>, DoLookup<unsigned int>, Find, Insert, Remove, operator(), operator[]
// calls: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoLookup<unsigned int>, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRemove<unsigned int>, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoInsertUnconstructed
// callers: CNavObstructionManager::ChangeNavAreaIndex
void __fastcall CNavObstacleMgr::ChangeNavAreaIndex(CNavObstacleMgr *const this, int nOldIndex, int nNewIndex)
{
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *p_m_AreaToSplitNodeDict; // r14
  unsigned int v7; // edx
  unsigned int v8; // r8d
  UtlHashHandle_t v9; // eax
  __int64 v10; // r15
  unsigned int v11; // edx
  unsigned int v12; // r8d
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  int *v18; // rcx
  UtlHashHandle_t v19; // eax
  unsigned int h; // [rsp+Ch] [rbp-34h]
  unsigned int ha; // [rsp+Ch] [rbp-34h]

  if ( this->m_AreaToSplitNodeDict.m_nUsed != 0 )
  {
    p_m_AreaToSplitNodeDict = &this->m_AreaToSplitNodeDict;
    v7 = 33 * (((4097 * nOldIndex + 2127912214) >> 19) ^ (4097 * nOldIndex + 2127912214) ^ 0xC761C23C);
    v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
    h = HIWORD(v8) ^ v8 ^ 0xB55A4F09;
    v9 = CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
           &this->m_AreaToSplitNodeDict,
           nOldIndex,
           h,
           0);
    if ( v9 != -1 )
    {
      v10 = *&this->m_AreaToSplitNodeDict.m_table.m_pMemory[v9].data[2];
      CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoRemove<unsigned int>(
        p_m_AreaToSplitNodeDict,
        nOldIndex,
        h);
      if ( v10 != 0 )
      {
        *v10 = nNewIndex;
        v11 = 33 * (((4097 * nNewIndex + 2127912214) >> 19) ^ (4097 * nNewIndex + 2127912214) ^ 0xC761C23C);
        v12 = ((9 * ((v11 - 369570787) ^ ((v11 + 374761393) << 9)) - 42973499) >> 16)
            ^ (9 * ((v11 - 369570787) ^ ((v11 + 374761393) << 9)) - 42973499)
            ^ 0xB55A4F09;
        if ( this->m_AreaToSplitNodeDict.m_nUsed == 0
          || (ha = ((9 * ((v11 - 369570787) ^ ((v11 + 374761393) << 9)) - 42973499) >> 16)
                 ^ (9 * ((v11 - 369570787) ^ ((v11 + 374761393) << 9)) - 42973499)
                 ^ 0xB55A4F09,
              v19 = CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
                      p_m_AreaToSplitNodeDict,
                      nNewIndex,
                      v12,
                      0),
              v12 = ha,
              v19 == -1) )
        {
          v13 = &this->m_AreaToSplitNodeDict.m_table.m_pMemory[CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoInsertUnconstructed(
                                                                 p_m_AreaToSplitNodeDict,
                                                                 v12,
                                                                 1)];
          if ( v13 != -4LL )
          {
            v13->data[0] = nNewIndex;
            *&v13->data[2] = v10;
          }
        }
        v14 = *(v10 + 16);
        if ( v14 != 0 )
        {
          v15 = *(v14 + 16);
          if ( v15 != 0 )
          {
            v16 = 4LL * (v15 - 1) + 4;
            v17 = 0;
            do
            {
              v18 = (*(v14 + 24) + v17);
              if ( nOldIndex == *v18 )
                *v18 = nNewIndex;
              v17 += 4;
            }
            while ( v17 != v16 );
          }
        }
      }
    }
  }
}


// CNavObstacleMgr::MergeAllObstacles  (line 1240, @0x0000000002efbf10, libserver.so)  // inlines: FirstHandle, InvalidateCache, NextHandle, operator=, operator[]
// calls: CNavObstacleMgr::MergeObstacle
// callers: CNavObstacleMgr::OnChangeTheNavMesh, CNavObstructionManager::OnChangeTheNavMesh
void __fastcall CNavObstacleMgr::MergeAllObstacles(CNavObstacleMgr *const this)
{
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *m_pMemory; // rsi
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v4; // rdx
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rbx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int v11; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v12; // rdx
  int v13; // r12d

  m_nAllocationCount = this->m_Obstacles.m_table.m_nAllocationCount;
  m_pMemory = this->m_Obstacles.m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    v4 = m_pMemory + 1;
    v5 = 0;
    if ( m_pMemory->flags_and_hash >= 0 )
    {
      v13 = 0;
      goto LABEL_9;
    }
    while ( ++v5 != m_nAllocationCount )
    {
      ++v4;
      if ( v4[-1].flags_and_hash >= 0 )
      {
        if ( v5 != -1 )
        {
          v13 = v5;
          while ( 1 )
          {
LABEL_9:
            v6 = v13;
            v7 = *&m_pMemory[v6].data[2];
            if ( v7 != 0 )
            {
              CNavObstacleMgr::MergeObstacle(this, *&m_pMemory[v6].data[2]);
              *v7 = 1;
              x = vec3_invalid.x;
              y = vec3_invalid.y;
              z = vec3_invalid.z;
              *(v7 + 64) = vec3_invalid.x;
              *(v7 + 68) = y;
              *(v7 + 72) = z;
              *(v7 + 76) = x;
              *(v7 + 80) = y;
              *(v7 + 84) = z;
              m_pMemory = this->m_Obstacles.m_table.m_pMemory;
              m_nAllocationCount = this->m_Obstacles.m_table.m_nAllocationCount;
            }
            v11 = v13 + 1;
            if ( v13 + 1 >= m_nAllocationCount )
              break;
            v12 = &m_pMemory[v11 + 1];
            if ( m_pMemory[v6 + 1].flags_and_hash < 0 )
            {
              while ( ++v11 != m_nAllocationCount )
              {
                ++v12;
                if ( v12[-1].flags_and_hash >= 0 )
                  goto LABEL_17;
              }
              return;
            }
LABEL_17:
            v13 = v11;
            if ( v11 == -1 )
              return;
          }
        }
        return;
      }
    }
  }
}


// CNavObstacleMgr::RemoveObstacle  (line 1257, @0x0000000002efc280, libserver.so)
// calls: CNavObstacleMgr::RemoveObstacle
// callers: CNavObstructionManager::RemoveObstacle
void __fastcall CNavObstacleMgr::RemoveObstacle(CNavObstacleMgr *const this, const INavObstacle *const rObstacle)
{
  int32 v3; // eax

  v3 = (*rObstacle->_vptr_INavObstacle)(rObstacle);
  CNavObstacleMgr::RemoveObstacle(this, v3);
}


// CNavObstacleMgr::UpdateObstacle  (line 1266, @0x0000000002ef8800, libserver.so)  // inlines: CNavObstacleShape
// calls: CNavObstacleMgr::UpdateObstacle
// callers: CNavObstructionManager::UpdateObstacle
void __fastcall CNavObstacleMgr::UpdateObstacle(CNavObstacleMgr *const this, INavObstacle *const rObstacle)
{
  vec_t z; // eax
  vec_t v5; // eax
  vec_t v6; // eax
  int32 v7; // eax
  CNavObstacleShape obstacleShape; // [rsp+0h] [rbp-50h] BYREF

  z = vec3_invalid.z;
  *&obstacleShape.m_vCenter.x = *&vec3_invalid.x;
  obstacleShape.m_vCenter.z = z;
  v5 = vec3_origin.z;
  *&obstacleShape.m_vMins.x = *&vec3_origin.x;
  obstacleShape.m_vMins.z = v5;
  obstacleShape.m_vMaxs.z = v5;
  *&obstacleShape.m_vMaxs.x = *&vec3_origin.x;
  v6 = vec3_angle.z;
  *&obstacleShape.m_Angles.x = *&vec3_angle.x;
  obstacleShape.m_Angles.z = v6;
  (*(rObstacle->_vptr_INavObstacle + 2))(
    rObstacle,
    &obstacleShape,
    &obstacleShape.m_vMins,
    &obstacleShape.m_vMaxs,
    &obstacleShape.m_Angles);
  v7 = (*rObstacle->_vptr_INavObstacle)(rObstacle);
  CNavObstacleMgr::UpdateObstacle(this, v7, &obstacleShape);
}


// CNavObstacleMgr::FindSplitNodeForArea  (line 1276, @0x0000000002edfa70, libserver.so)  // inlines: DoLookup<unsigned int>, Element, Find, GetPtr, operator(), operator[]
// calls: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoLookup<unsigned int>
// callers: CNavObstacleMgr::SplitEdge, CNavObstacleMgr::MergeEdgeRecursive
CNavObstacleMgr::CNavObstacleSplitNode *__fastcall CNavObstacleMgr::FindSplitNodeForArea(
        CNavObstacleMgr *const this,
        uint32 nAreaIndex)
{
  uint32 v4; // edx
  unsigned int v5; // edx
  UtlHashHandle_t v6; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v7; // rax

  if ( this->m_AreaToSplitNodeDict.m_nUsed == 0 )
    return 0;
  v4 = 33 * (((4097 * nAreaIndex + 2127912214) >> 19) ^ (4097 * nAreaIndex + 2127912214) ^ 0xC761C23C);
  v5 = 9 * ((v4 - 369570787) ^ ((v4 + 374761393) << 9)) - 42973499;
  v6 = CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
         &this->m_AreaToSplitNodeDict,
         nAreaIndex,
         HIWORD(v5) ^ v5 ^ 0xB55A4F09,
         0);
  if ( v6 == -1 )
    return 0;
  v7 = &this->m_AreaToSplitNodeDict.m_table.m_pMemory[v6];
  if ( v7 == -12LL )
    return 0;
  else
    return *&v7->data[2];
}


// CNavObstacleMgr::InsertSplitNodeForArea  (line 1287, @0x0000000002ef7870, libserver.so)  // inlines: CUtlKeyValuePair<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, Construct<CUtlKeyValuePair<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, DoInsert<unsigned int>, DoLookup<unsigned int>, Insert, operator(), operator[]
// calls: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoLookup<unsigned int>
void __fastcall CNavObstacleMgr::InsertSplitNodeForArea(
        CNavObstacleMgr *const this,
        const CNavArea *const rArea,
        CNavObstacleMgr::CNavObstacleSplitNode *const rSplitNode)
{
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *p_m_AreaToSplitNodeDict; // r15
  int32 m_nIndex; // r14d
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v10; // rax

  p_m_AreaToSplitNodeDict = &this->m_AreaToSplitNodeDict;
  m_nIndex = rArea->m_nIndex;
  v7 = 33 * (((4097 * m_nIndex + 2127912214) >> 19) ^ (4097 * m_nIndex + 2127912214) ^ 0xC761C23C);
  v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
  v9 = HIWORD(v8) ^ v8 ^ 0xB55A4F09;
  if ( this->m_AreaToSplitNodeDict.m_nUsed == 0
    || CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
         &this->m_AreaToSplitNodeDict,
         m_nIndex,
         v9,
         0) == -1 )
  {
    v10 = &this->m_AreaToSplitNodeDict.m_table.m_pMemory[CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoInsertUnconstructed(
                                                           p_m_AreaToSplitNodeDict,
                                                           v9,
                                                           1)];
    if ( v10 != -4LL )
    {
      v10->data[0] = m_nIndex;
      *&v10->data[2] = rSplitNode;
    }
  }
}


// CNavObstacleMgr::SplitObstacle  (line 1295, @0x0000000002ef8180, libserver.so)  // inlines: AddMultipleToTail, AlignedByteArrayExplicit_t, AlignedByteArray_t, CNavObstacleEdge, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<CNavObstacleEdge>, EnsureCount, GrowVector, InitEdgesFromShape, InsertMultipleBefore, Purge, RemoveAll, operator=, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: CNavObstacleMgr::CNavObstacleSplitForest::MarkRootsClean, CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::RemoveAll, CNavObstacleShape::GenerateObstacleVerts, CNavObstacleMgr::SplitEdge, CNavObstacleMgr::UpdateBlocked, Plat_IsInDebugSessionRaw, CUtlMemory<unsigned int, int>::Purge, _Unwind_Resume
// callers: CNavObstacleMgr::Update
void __fastcall CNavObstacleMgr::SplitObstacle(CNavObstacleMgr *const this, CNavObstacle *const rObstacle)
{
  __int64 v4; // rdi
  float v5; // xmm0_4
  __int64 m_Size; // rax
  int v7; // r14d
  vec_t x; // xmm0_4
  int v9; // r13d
  vec_t y; // xmm0_4
  int v11; // xmm0_4
  int v12; // xmm0_4
  int v13; // r15d
  char *v14; // r13
  char *v15; // r14
  char *v16; // [rsp+0h] [rbp-80h]
  char *v17; // [rsp+8h] [rbp-78h]
  __int64 v18; // [rsp+10h] [rbp-70h]
  int v19; // [rsp+1Ch] [rbp-64h]
  Vector2D vObsVertsOut; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+38h] [rbp-48h]
  int v22; // [rsp+3Ch] [rbp-44h]
  int v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+44h] [rbp-3Ch]
  int v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+4Ch] [rbp-34h]

  CNavObstacleMgr::CNavObstacleSplitForest::MarkRootsClean(&this->m_SplitNodeForest);
  CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::RemoveAll(&this->m_NewAreasOutsideObstacle.m_Areas);
  v5 = CNavObstacleShape::GenerateObstacleVerts(&rObstacle->m_ObsShape, &vObsVertsOut);
  m_Size = rObstacle->m_ObsEdges.m_Size;
  rObstacle->m_flZ = v5;
  v7 = m_Size;
  if ( m_Size <= 3 )
  {
    v13 = 0;
    v19 = 4 - m_Size;
    rObstacle->m_ObsEdges.m_Size = 4;
    v14 = &rObstacle->m_ObsEdges.m_Memory + 176 * m_Size;
    v15 = v14 + 24;
    v16 = v14 + 24;
    v18 = -176 * m_Size - &rObstacle->m_ObsEdges.m_Memory;
    v17 = v14 + 16;
    do
    {
      if ( v14 != 0 )
      {
        v14[8] = 0;
        *&v14[v18 + v17] = 0;
        *v15 = 0;
        *(v15 + 2) = 32;
        *(v15 + 3) = 0x80000000;
        if ( ((v14 + 40) & 3) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
          __debugbreak();
        *&v14[v18 + v16] = v14 + 40;
        *(v14 + 21) = 0;
      }
      ++v13;
      v14 += 176;
      v15 += 176;
    }
    while ( v19 > v13 );
    v7 = rObstacle->m_ObsEdges.m_Size;
  }
  x = vObsVertsOut.x;
  v9 = 0;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[168] = rObstacle;
  *rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data = x;
  y = vObsVertsOut.y;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[344] = rObstacle;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[4] = y;
  v11 = v21;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[520] = rObstacle;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[176] = v11;
  v12 = v22;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[696] = rObstacle;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[180] = v12;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[352] = v23;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[356] = v24;
  *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[528] = v25;
  for ( *&rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[532] = v26; v9 != v7; ++v9 )
    CNavObstacleMgr::SplitEdge(this, rObstacle, v9);
  CNavObstacleMgr::UpdateBlocked(this);
}


// CNavObstacleMgr::RemoveObstacle  (line 1312, @0x0000000002efc090, libserver.so)  // inlines: ConvertToExternalMemory, Destruct<CNavObstacleEdge>, DoLookup<unsigned int>, Find, IsExternallyAllocated, IsValidHandle, Purge, Purge_FixedGrowable, RemoveAll, RemoveByHandle, operator(), operator[], ~CNavObstacle, ~CNavObstacleEdge, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixed, ~CUtlVectorFixedGrowable
// calls: CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoLookup<unsigned int>, CNavObstacleMgr::MergeObstacle, CUtlMemory<unsigned int, int>::Purge, operator delete, CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoRemove<unsigned int>
// callers: CNavObstacleMgr::RemoveObstacle
void __fastcall CNavObstacleMgr::RemoveObstacle(CNavObstacleMgr *const this, int32 nId)
{
  unsigned int v3; // edx
  unsigned int v4; // edx
  UtlHashHandle_t v5; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v6; // rax
  int flags_and_hash; // edx
  _DWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r15
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // [rsp+0h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-48h]
  __int64 v21; // [rsp+10h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-34h]
  int v23; // [rsp+1Ch] [rbp-34h]

  if ( this->m_Obstacles.m_nUsed == 0 )
    return;
  v3 = 33 * (((4097 * nId + 2127912214) >> 19) ^ (4097 * nId + 2127912214) ^ 0xC761C23C);
  v4 = 9 * ((v3 - 369570787) ^ ((v3 + 374761393) << 9)) - 42973499;
  v5 = CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoLookup<unsigned int>(
         &this->m_Obstacles,
         nId,
         HIWORD(v4) ^ v4 ^ 0xB55A4F09,
         0);
  if ( this->m_Obstacles.m_table.m_nAllocationCount <= v5 )
    return;
  v20 = v5;
  v6 = &this->m_Obstacles.m_table.m_pMemory[v20];
  flags_and_hash = v6->flags_and_hash;
  if ( v6->flags_and_hash < 0 )
    return;
  v8 = *&v6->data[2];
  if ( v8 == 0 )
    goto LABEL_19;
  CNavObstacleMgr::MergeObstacle(this, *&v6->data[2]);
  v9 = v8[26];
  v10 = 44LL * v9;
  v11 = &v8[v10 + 6];
  v12 = &v8[v10 - 10];
  v13 = -176LL * v9 - v8;
  while ( --v9 >= 0 )
  {
    *(v11 - 72) = 0;
    v18 = v13 + v11;
    if ( *(v13 + v11 + v12 - 16) < 0 )
    {
      v17 = *(v11 - 52) & 0xC0000000;
LABEL_16:
      if ( v17 == 0 )
      {
        v21 = v12;
        v22 = v9;
        CUtlMemory<unsigned int,int>::Purge((v11 - 64));
        v12 = v21;
        v9 = v22;
      }
      goto LABEL_12;
    }
    v14 = *(v11 - 52);
    v15 = v11 - 48;
    v16 = *(v18 + v12 - 24);
    v17 = v14 & 0xC0000000;
    if ( v16 == v11 - 48 )
      goto LABEL_16;
    if ( v16 != 0 && v17 == 0 )
    {
      v19 = v12;
      v23 = v9;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v12 = v19;
      v15 = v11 - 48;
      v9 = v23;
      v14 = *(v18 + v19 - 12);
    }
    *(v18 + v12 - 24) = v15;
    *(v18 + v12 - 16) = 32;
    *(v18 + v12 - 12) = v14 & 0x3FFFFFFF | 0x80000000;
LABEL_12:
    v11 -= 176;
  }
  v8[26] = 0;
  operator delete(v8);
  v6 = &this->m_Obstacles.m_table.m_pMemory[v20];
  flags_and_hash = v6->flags_and_hash;
LABEL_19:
  CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoRemove<unsigned int>(
    &this->m_Obstacles,
    v6->data[0],
    flags_and_hash & 0x3FFFFFFF);
}


// CNavObstacleMgr::UpdateObstacle  (line 1329, @0x0000000002ef8570, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CNavObstacle, CNavObstacleShape, CUtlKeyValuePair<unsigned int, CNavObstacle*>, CUtlMemoryFixed, CUtlVectorBase, CUtlVectorFixed, Construct<CUtlKeyValuePair<unsigned int, CNavObstacle*>, unsigned int, CNavObstacle*>, DoInsert<unsigned int>, DoLookup<unsigned int>, Element, Find, GetPtr, Insert, operator(), operator=, operator[]
// calls: operator new, CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoLookup<unsigned int>, Plat_IsInDebugSessionRaw, operator delete, _Unwind_Resume
// callers: CNavObstacleMgr::UpdateObstacle
void __fastcall CNavObstacleMgr::UpdateObstacle(
        CNavObstacleMgr *const this,
        int32 nId,
        const CNavObstacleShape *const rObstacleShape)
{
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // r15d
  char *v9; // rax
  __int64 v10; // rdi
  char *v11; // rbx
  __int64 v12; // rdx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v13; // rax
  UtlHashHandle_t v14; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v15; // rax

  v6 = 33 * (((4097 * nId + 2127912214) >> 19) ^ (4097 * nId + 2127912214) ^ 0xC761C23C);
  v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
  v8 = HIWORD(v7) ^ v7 ^ 0xB55A4F09;
  if ( this->m_Obstacles.m_nUsed == 0
    || (v14 = CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoLookup<unsigned int>(
                &this->m_Obstacles,
                nId,
                v8,
                0)) == -1
    || (v15 = &this->m_Obstacles.m_table.m_pMemory[v14]) == -12LL )
  {
    v9 = operator new(0x338u);
    *v9 = 0;
    v11 = v9;
    *(v9 + 4) = *&rObstacleShape->m_vCenter.x;
    *(v9 + 3) = LODWORD(rObstacleShape->m_vCenter.z);
    *(v9 + 2) = *&rObstacleShape->m_vMins.x;
    *(v9 + 6) = LODWORD(rObstacleShape->m_vMins.z);
    *(v9 + 28) = *&rObstacleShape->m_vMaxs.x;
    *(v9 + 9) = LODWORD(rObstacleShape->m_vMaxs.z);
    *(v9 + 5) = *&rObstacleShape->m_Angles.x;
    *(v9 + 12) = LODWORD(rObstacleShape->m_Angles.z);
    *&v9 = vec3_invalid.z;
    *(v11 + 52) = *&vec3_invalid.x;
    *(v11 + 15) = v9;
    v12 = *&vec3_origin.x;
    *&v9 = vec3_origin.z;
    *(v11 + 8) = *&vec3_origin.x;
    *(v11 + 18) = v9;
    *(v11 + 21) = v9;
    *(v11 + 76) = v12;
    *&v9 = vec3_angle.z;
    *(v11 + 11) = *&vec3_angle.x;
    *(v11 + 24) = v9;
    *(v11 + 26) = 0;
    if ( (v11 & 7) != 0 && Plat_IsInDebugSessionRaw(v10) != 0 )
      __debugbreak();
    *(v11 + 204) = 0;
    if ( this->m_Obstacles.m_nUsed == 0
      || CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoLookup<unsigned int>(
           &this->m_Obstacles,
           nId,
           v8,
           0) == -1 )
    {
      v13 = &this->m_Obstacles.m_table.m_pMemory[CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoInsertUnconstructed(
                                                   &this->m_Obstacles,
                                                   v8,
                                                   1)];
      if ( v13 != -4LL )
      {
        v13->data[0] = nId;
        *&v13->data[2] = v11;
      }
    }
  }
  else
  {
    v11 = *&v15->data[2];
  }
  *v11 = 1;
  *(v11 + 1) = LODWORD(rObstacleShape->m_vCenter.x);
  *(v11 + 2) = LODWORD(rObstacleShape->m_vCenter.y);
  *(v11 + 3) = LODWORD(rObstacleShape->m_vCenter.z);
  *(v11 + 4) = LODWORD(rObstacleShape->m_vMins.x);
  *(v11 + 5) = LODWORD(rObstacleShape->m_vMins.y);
  *(v11 + 6) = LODWORD(rObstacleShape->m_vMins.z);
  *(v11 + 7) = LODWORD(rObstacleShape->m_vMaxs.x);
  *(v11 + 8) = LODWORD(rObstacleShape->m_vMaxs.y);
  *(v11 + 9) = LODWORD(rObstacleShape->m_vMaxs.z);
  *(v11 + 10) = LODWORD(rObstacleShape->m_Angles.x);
  *(v11 + 11) = LODWORD(rObstacleShape->m_Angles.y);
  *(v11 + 12) = LODWORD(rObstacleShape->m_Angles.z);
}


// CNavObstacleMgr::SplitEdge  (line 1349, @0x0000000002ef7950, libserver.so)  // inlines: AddToTail, CUtlKeyValuePair<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, CUtlKeyValuePair<unsigned int, bool>, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CUtlKeyValuePair<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, Construct<CUtlKeyValuePair<unsigned int, bool>, unsigned int, bool>, CopyConstruct<unsigned int>, DoInsert<unsigned int>, DoLookup<unsigned int>, Dot, DotProduct2D, Element, Encompass, Extent, FastSqrt, Find, FindSplitNodeForArea, GrowMemory, Insert, InsertSplitNodeForArea, Length, NavAreaCollector, NormalizeInPlace, Purge, RemoveAll, SplitAreaBySegment, SplitLeafNode, Vector, Vector2D, Vector2DLength, Vector2DNormalize, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator(), operator-, operator/=, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>, CNavObstacleMgr::FindSplitNodeForArea, CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoLookup<unsigned int>, CNavPoly::IsOverlappingSegment2D, CNavArea::SplitArea, CNavObstacleMgr::CNavObstacleSplitForest::MarkNodeDirty, CNavObstacleMgr::CNavObstacleSplitNode::SplitLeafNode, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoLookup<unsigned int>, CUtlMemory<CNavArea*, int>::Purge, CNavObstacleMgr::CNavObstacleSplitForest::AddTree (15 total)
// callers: CNavObstacleMgr::SplitObstacle, CNavObstacleMgr::MergeObstacle
void __fastcall CNavObstacleMgr::SplitEdge(CNavObstacleMgr *const this, CNavObstacle *const rObstacle, int nEdge)
{
  float x; // xmm1_4
  float y; // xmm3_4
  int v6; // edx
  vec_t *v7; // rax
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float m_flZ; // xmm5_4
  CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> >::handle_t *v13; // rcx
  unsigned __int64 v14; // rbx
  CNavObstacleMgr::CNavObstacleSplitNode *SplitNodeForArea; // rax
  CNavArea *v16; // r12
  unsigned int m_nIndex; // r13d
  unsigned int v18; // edx
  unsigned int v19; // edx
  CNavArea *v20; // r13
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  int32 v26; // r13d
  __int64 m_Size; // r12
  int v28; // eax
  unsigned int *v29; // rax
  __int64 v30; // r12
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v31; // rax
  CNavArea *v32; // r13
  unsigned int v33; // r15d
  unsigned int v34; // edx
  CUtlHashtableEntry<unsigned int,bool> *v35; // rax
  CNavObstacleMgr::CNavObstacleSplitNode *v36; // r15
  unsigned int v37; // r13d
  unsigned int v38; // edx
  unsigned int v39; // r8d
  UtlHashHandle_t v40; // eax
  int v41; // eax
  CNavObstacleMgr::CNavObstacleSplitNode *v42; // rax
  unsigned int v43; // r15d
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *p_m_AreaToSplitNodeDict; // r9
  unsigned int v45; // edx
  unsigned int v46; // r8d
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v47; // rax
  UtlHashHandle_t v48; // eax
  CNavObstacleEdge *rSplittingEdge; // [rsp+20h] [rbp-100h]
  CNavObstacleMgr::CNavAreaSet *p_m_NewAreasOutsideObstacle; // [rsp+28h] [rbp-F8h]
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *v51; // [rsp+30h] [rbp-F0h]
  unsigned int v52; // [rsp+38h] [rbp-E8h]
  unsigned int v53; // [rsp+38h] [rbp-E8h]
  unsigned int v54; // [rsp+38h] [rbp-E8h]
  float v55; // [rsp+3Ch] [rbp-E4h]
  float v56; // [rsp+48h] [rbp-D8h]
  int nNumChildren; // [rsp+4Ch] [rbp-D4h]
  CNavObstacleMgr::CNavObstacleSplitNode *pSplitNode; // [rsp+50h] [rbp-D0h]
  __int64 v59; // [rsp+58h] [rbp-C8h]
  Vector2D vA; // [rsp+60h] [rbp-C0h] BYREF
  Vector2D vB; // [rsp+70h] [rbp-B0h] BYREF
  Vector vCutNorm; // [rsp+80h] [rbp-A0h] BYREF
  Extent edgeExtent; // [rsp+90h] [rbp-90h] BYREF
  CNavArea *pChildAreas[3]; // [rsp+B0h] [rbp-70h] BYREF
  NavAreaCollector areaCollector; // [rsp+D0h] [rbp-50h] BYREF

  rSplittingEdge = (&rObstacle->m_ObsEdges.m_Memory + 176 * nEdge);
  x = rSplittingEdge->m_vVert.x;
  y = rSplittingEdge->m_vVert.y;
  vA.x = x;
  v6 = (nEdge + 1) % rObstacle->m_ObsEdges.m_Size;
  vA.y = y;
  v7 = &rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[176 * v6];
  v8 = v7[1];
  vB.x = *v7;
  v9 = vB.x - x;
  vB.y = v8;
  v10 = y - v8;
  v11 = fsqrt((v10 * v10) + (v9 * v9));
  if ( v11 == 0.0 )
  {
    v56 = 0.0;
    v55 = 0.0;
  }
  else
  {
    v55 = v10 * (1.0 / v11);
    v56 = v9 * (1.0 / v11);
  }
  m_flZ = rObstacle->m_flZ;
  edgeExtent.hi.y = y;
  edgeExtent.lo.x = x;
  edgeExtent.lo.y = y;
  edgeExtent.hi.x = x;
  *&areaCollector.m_bCheckForDuplicates = vB.x;
  *(&areaCollector.m_bCheckForDuplicates + 1) = v8;
  edgeExtent.lo.z = m_flZ - 100.0;
  edgeExtent.hi.z = m_flZ - 100.0;
  *&areaCollector.m_Areas.m_Size = m_flZ + 100.0;
  if ( x > vB.x )
    edgeExtent.lo.x = vB.x;
  if ( vB.x > edgeExtent.hi.x )
    edgeExtent.hi.x = vB.x;
  if ( edgeExtent.lo.y > *(&areaCollector.m_bCheckForDuplicates + 1) )
    edgeExtent.lo.y = *(&areaCollector.m_bCheckForDuplicates + 1);
  if ( *(&areaCollector.m_bCheckForDuplicates + 1) > edgeExtent.hi.y )
    edgeExtent.hi.y = *(&areaCollector.m_bCheckForDuplicates + 1);
  if ( edgeExtent.lo.z > *&areaCollector.m_Areas.m_Size )
    LODWORD(edgeExtent.lo.z) = areaCollector.m_Areas.m_Size;
  if ( *&areaCollector.m_Areas.m_Size > edgeExtent.hi.z )
    LODWORD(edgeExtent.hi.z) = areaCollector.m_Areas.m_Size;
  areaCollector.m_Areas.m_Size = 0;
  areaCollector.m_bCheckForDuplicates = 1;
  areaCollector.m_Areas.m_Memory.m_pMemory = 0;
  areaCollector.m_Areas.m_Memory.m_nAllocationCount = 0;
  areaCollector.m_Areas.m_Memory.m_nGrowSize = 0;
  CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(TheNavMesh, &areaCollector, &edgeExtent);
  if ( areaCollector.m_Areas.m_Size != 0 )
  {
    v14 = 0;
    p_m_NewAreasOutsideObstacle = &this->m_NewAreasOutsideObstacle;
    v59 = 8LL * (areaCollector.m_Areas.m_Size - 1) + 8;
    do
    {
      while ( 1 )
      {
        v16 = areaCollector.m_Areas.m_Memory.m_pMemory[v14 / 8];
        m_nIndex = v16->m_nIndex;
        if ( this->m_NewAreasOutsideObstacle.m_Areas.m_nUsed == 0 )
          break;
        v18 = 33 * (((4097 * m_nIndex + 2127912214) >> 19) ^ (4097 * m_nIndex + 2127912214) ^ 0xC761C23C);
        v19 = 9 * ((v18 - 369570787) ^ ((v18 + 374761393) << 9)) - 42973499;
        if ( CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoLookup<unsigned int>(
               &p_m_NewAreasOutsideObstacle->m_Areas,
               m_nIndex,
               HIWORD(v19) ^ v19 ^ 0xB55A4F09,
               v13) == -1 )
          break;
        v14 += 8LL;
        if ( v14 == v59 )
          goto LABEL_23;
      }
      SplitNodeForArea = CNavObstacleMgr::FindSplitNodeForArea(this, m_nIndex);
      pSplitNode = SplitNodeForArea;
      if ( SplitNodeForArea == 0 || SplitNodeForArea->m_pSplittingEdge == 0 )
      {
        v20 = areaCollector.m_Areas.m_Memory.m_pMemory[v14 / 8];
        if ( CNavPoly::IsOverlappingSegment2D(v20, &vA, &vB) )
        {
          v21 = vB.x - vA.x;
          v22 = -(vB.y - vA.y);
          v23 = fsqrt((v22 * v22) + (v21 * v21));
          if ( v23 == 0.0 )
          {
            v25 = 0.0;
            v24 = 0.0;
          }
          else
          {
            v24 = v22 * (1.0 / v23);
            v25 = v21 * (1.0 / v23);
          }
          vCutNorm.y = v25;
          vCutNorm.x = v24;
          vCutNorm.z = 0.0;
          nNumChildren = CNavArea::SplitArea(v20, &vCutNorm, (vA.x * v24) + (v25 * vA.y), 0, pChildAreas, 0);
          if ( nNumChildren > 1 )
          {
            if ( pSplitNode == 0 )
            {
              v42 = CNavObstacleMgr::CNavObstacleSplitForest::AddTree(&this->m_SplitNodeForest, v16);
              v43 = v16->m_nIndex;
              pSplitNode = v42;
              p_m_AreaToSplitNodeDict = &this->m_AreaToSplitNodeDict;
              v45 = 33 * (((4097 * v43 + 2127912214) >> 19) ^ (4097 * v43 + 2127912214) ^ 0xC761C23C);
              v46 = ((9 * ((v45 - 369570787) ^ ((v45 + 374761393) << 9)) - 42973499) >> 16)
                  ^ (9 * ((v45 - 369570787) ^ ((v45 + 374761393) << 9)) - 42973499)
                  ^ 0xB55A4F09;
              if ( this->m_AreaToSplitNodeDict.m_nUsed == 0
                || (v54 = ((9 * ((v45 - 369570787) ^ ((v45 + 374761393) << 9)) - 42973499) >> 16)
                        ^ (9 * ((v45 - 369570787) ^ ((v45 + 374761393) << 9)) - 42973499)
                        ^ 0xB55A4F09,
                    v48 = CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
                            &this->m_AreaToSplitNodeDict,
                            v43,
                            v46,
                            0),
                    p_m_AreaToSplitNodeDict = &this->m_AreaToSplitNodeDict,
                    v46 = v54,
                    v48 == -1) )
              {
                v47 = &this->m_AreaToSplitNodeDict.m_table.m_pMemory[CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoInsertUnconstructed(
                                                                       p_m_AreaToSplitNodeDict,
                                                                       v46,
                                                                       1)];
                if ( v47 != -4LL )
                {
                  v47->data[0] = v43;
                  *&v47->data[2] = pSplitNode;
                }
              }
            }
            CNavObstacleMgr::CNavObstacleSplitForest::MarkNodeDirty(&this->m_SplitNodeForest, pSplitNode);
            v26 = v16->m_nIndex;
            m_Size = rSplittingEdge->m_SplitAreas.m_Size;
            v28 = rSplittingEdge->m_SplitAreas.m_Size;
            if ( m_Size == rSplittingEdge->m_SplitAreas.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<unsigned int,int>::Grow(&rSplittingEdge->m_SplitAreas.m_Memory, 1);
              v28 = rSplittingEdge->m_SplitAreas.m_Size;
            }
            rSplittingEdge->m_SplitAreas.m_Size = v28 + 1;
            v29 = &rSplittingEdge->m_SplitAreas.m_Memory.m_pMemory[m_Size];
            if ( v29 != 0 )
              *v29 = v26;
            CNavObstacleMgr::CNavObstacleSplitNode::SplitLeafNode(pSplitNode, rSplittingEdge, nNumChildren, pChildAreas);
            v30 = 0;
            v51 = &this->m_AreaToSplitNodeDict;
            do
            {
              v32 = pChildAreas[v30];
              if ( v32 != 0 )
              {
                if ( (((v32->m_vCenter.x - vA.x) * v55) + ((v32->m_vCenter.y - vA.y) * v56)) >= 0.0 )
                {
                  v33 = v32->m_nIndex;
                  v34 = 33 * (((4097 * v33 + 2127912214) >> 19) ^ (4097 * v33 + 2127912214) ^ 0xC761C23C);
                  v13 = (((9 * ((v34 - 369570787) ^ ((v34 + 374761393) << 9)) - 42973499) >> 16)
                       ^ (9 * ((v34 - 369570787) ^ ((v34 + 374761393) << 9)) - 42973499)
                       ^ 0xB55A4F09);
                  if ( this->m_NewAreasOutsideObstacle.m_Areas.m_nUsed == 0
                    || (v53 = ((9 * ((v34 - 369570787) ^ ((v34 + 374761393) << 9)) - 42973499) >> 16)
                            ^ (9 * ((v34 - 369570787) ^ ((v34 + 374761393) << 9)) - 42973499)
                            ^ 0xB55A4F09,
                        v41 = CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoLookup<unsigned int>(
                                &p_m_NewAreasOutsideObstacle->m_Areas,
                                v33,
                                v13,
                                v13),
                        v13 = v53,
                        v41 == -1) )
                  {
                    v35 = &this->m_NewAreasOutsideObstacle.m_Areas.m_table.m_pMemory[CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoInsertUnconstructed(
                                                                                       &p_m_NewAreasOutsideObstacle->m_Areas,
                                                                                       v13,
                                                                                       1)];
                    if ( v35 != -4LL )
                    {
                      v35->data[0] = v33;
                      LOBYTE(v35->data[1]) = 1;
                    }
                  }
                }
                v36 = pSplitNode->m_ChildNodes[v30];
                if ( v36 != 0 )
                {
                  v37 = v32->m_nIndex;
                  v38 = 33 * (((4097 * v37 + 2127912214) >> 19) ^ (4097 * v37 + 2127912214) ^ 0xC761C23C);
                  v39 = ((9 * ((v38 - 369570787) ^ ((v38 + 374761393) << 9)) - 42973499) >> 16)
                      ^ (9 * ((v38 - 369570787) ^ ((v38 + 374761393) << 9)) - 42973499)
                      ^ 0xB55A4F09;
                  if ( this->m_AreaToSplitNodeDict.m_nUsed == 0
                    || (v52 = ((9 * ((v38 - 369570787) ^ ((v38 + 374761393) << 9)) - 42973499) >> 16)
                            ^ (9 * ((v38 - 369570787) ^ ((v38 + 374761393) << 9)) - 42973499)
                            ^ 0xB55A4F09,
                        v40 = CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
                                v51,
                                v37,
                                v39,
                                0),
                        v39 = v52,
                        v40 == -1) )
                  {
                    v31 = &this->m_AreaToSplitNodeDict.m_table.m_pMemory[CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoInsertUnconstructed(
                                                                           v51,
                                                                           v39,
                                                                           1)];
                    if ( v31 != -4LL )
                    {
                      v31->data[0] = v37;
                      *&v31->data[2] = v36;
                    }
                  }
                }
              }
              ++v30;
            }
            while ( nNumChildren > v30 );
          }
        }
      }
      v14 += 8LL;
    }
    while ( v14 != v59 );
  }
LABEL_23:
  areaCollector.m_Areas.m_Size = 0;
  if ( (areaCollector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&areaCollector.m_Areas.m_Memory);
    if ( (areaCollector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&areaCollector.m_Areas.m_Memory);
  }
}


// CNavObstacleMgr::MergeObstacle  (line 1423, @0x0000000002efbc10, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Element, Purge, Purge_FixedGrowable, RemoveAll, Sort, V_swap<CNavObstacleEdge*>, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CNavObstacleMgr::CNavObstacleSplitForest::MarkRootsClean, CNavObstacleMgr::MergeEdgeRecursive, V_qsort, CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::RemoveAll, CNavObstacleMgr::SplitEdge, CNavObstacleMgr::UpdateBlocked, ObstacleEdgeCompareByOwningObstacle, CUtlMemory<CNavObstacleEdge*, int>::Purge, __stack_chk_fail, CUtlVectorBase<CNavObstacleEdge*, CUtlMemoryFixedGrowable<CNavObstacleEdge*, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavObstacleMgr::MergeAllObstacles, CNavObstacleMgr::RemoveObstacle, CNavObstacleMgr::Update
// globals: ObstacleEdgeCompareByOwningObstacle(CNavObstacleEdge * const*,CNavObstacleEdge * const*)
void __fastcall CNavObstacleMgr::MergeObstacle(CNavObstacleMgr *const this, CNavObstacle *const rObstacle)
{
  int m_Size; // eax
  CNavObstacleEdge *p_m_Memory; // rbx
  unsigned __int8 *v6; // r12
  int v7; // r15d
  unsigned __int64 v8; // rbx
  CNavObstacle *m_pOwningObstacle; // r12
  __int64 v10; // r14
  CNavObstacleEdge *v11; // r15
  CNavObstacle *v12; // rsi
  uint32 v13; // eax
  int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r15
  CNavObstacleEdge **v18; // r14
  CNavObstacleEdge **v19; // rbx
  CNavObstacleEdge *v20; // rax
  int v21; // [rsp+0h] [rbp-260h]
  CNavObstacleMgr::ObstacleEdgeVector edgesToSplit; // [rsp+10h] [rbp-250h] BYREF
  unsigned __int64 v23; // [rsp+228h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  CNavObstacleMgr::CNavObstacleSplitForest::MarkRootsClean(&this->m_SplitNodeForest);
  edgesToSplit.m_Size = 0;
  edgesToSplit.m_Memory.m_pMemory = &edgesToSplit.m_Memory.m_FixedMemory;
  m_Size = rObstacle->m_ObsEdges.m_Size;
  edgesToSplit.m_Memory.m_nAllocationCount = 64;
  edgesToSplit.m_Memory.m_nGrowSize = 0x80000000;
  if ( m_Size == 0 )
    goto LABEL_17;
  p_m_Memory = &rObstacle->m_ObsEdges.m_Memory;
  v6 = &rObstacle->m_ObsEdges.m_Memory.m_Memory.m_Data[176 * (m_Size - 1) + 176];
  do
  {
    p_m_Memory->m_bBeingMerged = 1;
    CNavObstacleMgr::MergeEdgeRecursive(this, p_m_Memory++, &edgesToSplit);
  }
  while ( p_m_Memory != v6 );
  v7 = edgesToSplit.m_Size;
  if ( edgesToSplit.m_Size <= 1 )
    goto LABEL_8;
  if ( edgesToSplit.m_Memory.m_pMemory != 0 )
  {
    V_qsort(edgesToSplit.m_Memory.m_pMemory, edgesToSplit.m_Size, 8, ObstacleEdgeCompareByOwningObstacle);
    goto LABEL_7;
  }
  v14 = edgesToSplit.m_Size - 1;
  while ( 2 )
  {
    v15 = 0;
    v21 = v14 - 1;
    v16 = 8LL * (v14 - 1) + 8;
    while ( 1 )
    {
      v17 = v15 + 8;
      v18 = (edgesToSplit.m_Memory.m_pMemory + v15 + 8);
      v19 = (edgesToSplit.m_Memory.m_pMemory + v15);
      if ( ObstacleEdgeCompareByOwningObstacle(v19, v18) < 0 )
        break;
      if ( v17 == v16 )
        goto LABEL_29;
LABEL_26:
      v15 = v17;
    }
    v20 = *v19;
    *v19 = *v18;
    *v18 = v20;
    if ( v17 != v16 )
      goto LABEL_26;
LABEL_29:
    v14 = v21;
    if ( v21 != -1 )
    {
      while ( v14 <= 0 )
      {
        if ( --v14 == -1 )
          goto LABEL_7;
      }
      continue;
    }
    break;
  }
LABEL_7:
  v7 = edgesToSplit.m_Size;
LABEL_8:
  if ( v7 != 0 )
  {
    v8 = 0;
    m_pOwningObstacle = 0;
    v10 = 8LL * (v7 - 1) + 8;
    do
    {
      v11 = edgesToSplit.m_Memory.m_pMemory[v8 / 8];
      if ( v11 != 0 )
      {
        if ( v11->m_pOwningObstacle != m_pOwningObstacle )
        {
          CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::RemoveAll(&this->m_NewAreasOutsideObstacle.m_Areas);
          m_pOwningObstacle = v11->m_pOwningObstacle;
        }
        if ( !v11->m_bBeingMerged )
        {
          v12 = v11->m_pOwningObstacle;
          if ( v12 != 0 )
            CNavObstacleMgr::SplitEdge(this, v12, -1171354717 * ((v11 - &v12->m_ObsEdges.m_Memory) >> 4));
        }
      }
      v8 += 8LL;
    }
    while ( v8 != v10 );
  }
LABEL_17:
  CNavObstacleMgr::UpdateBlocked(this);
  edgesToSplit.m_Size = 0;
  v13 = edgesToSplit.m_Memory.m_nGrowSize & 0xC0000000;
  if ( edgesToSplit.m_Memory.m_nAllocationCount < 0
    || edgesToSplit.m_Memory.m_pMemory == &edgesToSplit.m_Memory.m_FixedMemory )
  {
    if ( v13 == 0 )
      CUtlMemory<CNavObstacleEdge *,int>::Purge(&edgesToSplit.m_Memory);
  }
  else if ( edgesToSplit.m_Memory.m_pMemory != 0 && v13 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CNavObstacleMgr::MergeLeafNode  (line 1470, @0x0000000002ee84c0, libserver.so)  // inlines: ClearBlockedAnyRaw, Remove, operator(), operator[]
// calls: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRemove<unsigned int>, CNavObstacleMgr::CNavObstacleSplitForest::MergeLeafNode
// callers: CNavObstacleMgr::MergeEdgeRecursive
void __fastcall CNavObstacleMgr::MergeLeafNode(
        CNavObstacleMgr *const this,
        CNavObstacleMgr::CNavObstacleSplitNode *const rNode)
{
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *p_m_AreaToSplitNodeDict; // r12
  __int64 i; // rbx
  CNavObstacleMgr::CNavObstacleSplitNode *v6; // rax
  unsigned int m_nAreaIndex; // esi
  unsigned int v8; // edx
  unsigned int v9; // eax

  p_m_AreaToSplitNodeDict = &this->m_AreaToSplitNodeDict;
  for ( i = 0; i != 3; ++i )
  {
    v6 = rNode->m_ChildNodes[i];
    if ( v6 != 0 )
    {
      m_nAreaIndex = v6->m_nAreaIndex;
      v8 = 33 * (((4097 * v6->m_nAreaIndex + 2127912214) >> 19) ^ (4097 * v6->m_nAreaIndex + 2127912214) ^ 0xC761C23C);
      v9 = 9 * ((v8 - 369570787) ^ ((v8 + 374761393) << 9)) - 42973499;
      CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoRemove<unsigned int>(
        p_m_AreaToSplitNodeDict,
        m_nAreaIndex,
        HIWORD(v9) ^ v9 ^ 0xB55A4F09);
    }
  }
  TheNavMesh->m_NavAreas.m_Memory.m_pMemory[rNode->m_nAreaIndex]->m_isBlockedFlags = 0;
  CNavObstacleMgr::CNavObstacleSplitForest::MergeLeafNode(&this->m_SplitNodeForest, rNode);
}


// CNavObstacleMgr::MergeEdgeRecursive  (line 1496, @0x0000000002efb740, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CNavArea*>, CopyConstruct<CNavObstacleEdge*>, Element, FindSplitNodeForArea, GetBool, GetInt, GrowMemory, Purge, Purge_FixedGrowable, Remove, RemoveAll, operator(), operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CNavObstacleMgr::FindSplitNodeForArea, CNavObstacleMgr::CNavObstacleSplitForest::MarkNodeDirty, CNavObstacleMgr::MergeLeafNode, CNavArea::Disconnect, CUtlMemory<CNavArea*, int>::ConvertToExternalMemory, CUtlMemory<CNavArea*, int>::Purge, CUtlMemory<CNavObstacleEdge*, int>::Grow, CUtlMemory<CNavArea*, int>::Grow, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRemove<unsigned int>, operator delete, _Unwind_Resume, __stack_chk_fail
// callers: CNavObstacleMgr::MergeObstacle
void __fastcall CNavObstacleMgr::MergeEdgeRecursive(
        CNavObstacleMgr *const this,
        CNavObstacleEdge *const rEdge,
        CNavObstacleMgr::ObstacleEdgeVector *const rEdgesToSplitInOut)
{
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  CNavArea *v7; // rax
  CNavObstacleMgr::CNavObstacleSplitNode *SplitNodeForArea; // rax
  __int64 v9; // r13
  CUtlMemory<CNavArea*,int> *v10; // rax
  __int64 v11; // rdx
  CNavObstacleEdge *v12; // r9
  __int64 v13; // rdx
  int v14; // esi
  CNavObstacleEdge **v15; // rdx
  int v16; // eax
  CNavObstacleMgr::CNavObstacleSplitForest *v17; // r14
  CNavArea *v18; // rax
  CNavObstacleMgr::CNavObstacleSplitNode *v19; // r13
  __int64 i; // rbx
  CNavObstacleMgr::CNavObstacleSplitNode *v21; // rax
  int v22; // eax
  CNavArea **v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // r13
  CNavArea *v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // eax
  CUtlVectorBase<CNavObstacleEdge*,CUtlMemoryFixedGrowable<CNavObstacleEdge*,64ul,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-188h]
  int v30; // [rsp+10h] [rbp-180h]
  CUtlMemory<CNavArea*,int> *v31; // [rsp+18h] [rbp-178h]
  CNavObstacleMgr::CNavObstacleSplitForest *p_m_SplitNodeForest; // [rsp+20h] [rbp-170h]
  CNavObstacleMgr::CNavObstacleSplitForest *v33; // [rsp+20h] [rbp-170h]
  __int64 v34; // [rsp+28h] [rbp-168h]
  int v35; // [rsp+28h] [rbp-168h]
  CNavArea *pChildAreaa; // [rsp+30h] [rbp-160h]
  CNavArea *pChildAreac; // [rsp+30h] [rbp-160h]
  CNavArea *pChildArea; // [rsp+30h] [rbp-160h]
  CNavArea *pChildAreab; // [rsp+30h] [rbp-160h]
  CUtlVectorFixedGrowable<CNavArea*,32ul> areasToDestroy; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v42; // [rsp+158h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  m_Size = rEdge->m_SplitAreas.m_Size;
  if ( m_Size == 0 )
  {
    areasToDestroy.m_Memory.m_nAllocationCount = 32;
    areasToDestroy.m_Memory.m_nGrowSize = 0x80000000;
    areasToDestroy.m_Memory.m_pMemory = &areasToDestroy.m_Memory.m_FixedMemory;
LABEL_41:
    rEdge->m_SplitAreas.m_Size = 0;
    goto LABEL_37;
  }
  v6 = 0;
  v34 = 4LL * (m_Size - 1) + 4;
  p_m_SplitNodeForest = &this->m_SplitNodeForest;
  p_m_Memory = &rEdgesToSplitInOut->m_Memory;
  do
  {
    v7 = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[rEdge->m_SplitAreas.m_Memory.m_pMemory[v6 / 4]];
    if ( v7 != 0 )
    {
      SplitNodeForArea = CNavObstacleMgr::FindSplitNodeForArea(this, v7->m_nIndex);
      if ( SplitNodeForArea != 0 )
      {
        v9 = 0;
        pChildAreaa = SplitNodeForArea;
        CNavObstacleMgr::CNavObstacleSplitForest::MarkNodeDirty(p_m_SplitNodeForest, SplitNodeForArea);
        v10 = pChildAreaa;
        do
        {
          v11 = *(&v10[1].m_nAllocationCount + v9);
          if ( v11 != 0 )
          {
            v12 = *(v11 + 16);
            if ( v12 != 0 )
            {
              v13 = rEdgesToSplitInOut->m_Size;
              v14 = rEdgesToSplitInOut->m_Size;
              if ( v13 == rEdgesToSplitInOut->m_Memory.m_nAllocationCount )
              {
                v30 = rEdgesToSplitInOut->m_Size;
                v31 = v10;
                pChildAreab = v12;
                CUtlMemory<CNavObstacleEdge *,int>::Grow(p_m_Memory, 1);
                v14 = rEdgesToSplitInOut->m_Size;
                v13 = v30;
                v10 = v31;
                v12 = pChildAreab;
              }
              rEdgesToSplitInOut->m_Size = v14 + 1;
              v15 = &rEdgesToSplitInOut->m_Memory.m_pMemory[v13];
              if ( v15 != 0 )
                *v15 = v12;
              pChildAreac = v10;
              CNavObstacleMgr::MergeEdgeRecursive(this, v12, rEdgesToSplitInOut);
              v10 = pChildAreac;
            }
          }
          v9 += 8;
        }
        while ( v9 != 24 );
      }
    }
    v6 += 4LL;
  }
  while ( v6 != v34 );
  v16 = rEdge->m_SplitAreas.m_Size;
  areasToDestroy.m_Size = 0;
  areasToDestroy.m_Memory.m_nAllocationCount = 32;
  areasToDestroy.m_Memory.m_nGrowSize = 0x80000000;
  areasToDestroy.m_Memory.m_pMemory = &areasToDestroy.m_Memory.m_FixedMemory;
  if ( v16 == 0 )
    goto LABEL_41;
  v17 = 0;
  v33 = (4LL * (v16 - 1) + 4);
  do
  {
    v18 = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[*(rEdge->m_SplitAreas.m_Memory.m_pMemory + v17)];
    if ( v18 != 0 )
    {
      v19 = CNavObstacleMgr::FindSplitNodeForArea(this, v18->m_nIndex);
      if ( v19 != 0 )
      {
        for ( i = 0; i != 3; ++i )
        {
          v21 = v19->m_ChildNodes[i];
          if ( v21 != 0 )
          {
            pChildArea = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[v21->m_nAreaIndex];
            if ( pChildArea != 0 )
            {
              v22 = areasToDestroy.m_Size;
              v35 = areasToDestroy.m_Size;
              if ( areasToDestroy.m_Size == areasToDestroy.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CNavArea *,int>::Grow(&areasToDestroy.m_Memory, 1);
                v22 = areasToDestroy.m_Size;
              }
              areasToDestroy.m_Size = v22 + 1;
              v23 = &areasToDestroy.m_Memory.m_pMemory[v35];
              if ( v23 != 0 )
                *v23 = pChildArea;
            }
          }
        }
        CNavObstacleMgr::MergeLeafNode(this, v19);
        if ( v19->m_pParent == 0 )
        {
          v27 = 33
              * (((4097 * v19->m_nAreaIndex + 2127912214) >> 19) ^ (4097 * v19->m_nAreaIndex + 2127912214) ^ 0xC761C23C);
          v28 = 9 * ((v27 - 369570787) ^ ((v27 + 374761393) << 9)) - 42973499;
          CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoRemove<unsigned int>(
            &this->m_AreaToSplitNodeDict,
            v19->m_nAreaIndex,
            HIWORD(v28) ^ v28 ^ 0xB55A4F09);
          operator delete(v19);
        }
      }
    }
    v17 = (v17 + 4);
  }
  while ( v17 != v33 );
  rEdge->m_SplitAreas.m_Size = 0;
  if ( areasToDestroy.m_Size != 0 )
  {
    v24 = 0;
    v25 = 8LL * (areasToDestroy.m_Size - 1) + 8;
    while ( 1 )
    {
      v26 = areasToDestroy.m_Memory.m_pMemory[v24 / 8];
      if ( v26 == 0 )
        goto LABEL_33;
      if ( nav_obstacle_allow_delete.m_pParent->m_Value.m_nValue != 0 )
      {
        (*(TheNavMesh->_vptr_CNavMesh + 5))(TheNavMesh, areasToDestroy.m_Memory.m_pMemory[v24 / 8]);
LABEL_33:
        v24 += 8LL;
        if ( v24 == v25 )
          break;
      }
      else
      {
        v26->m_bShouldBeDestroyed = 1;
        CNavArea::Disconnect(v26, -1);
        v24 += 8LL;
        if ( v24 == v25 )
          break;
      }
    }
  }
LABEL_37:
  CUtlMemory<CNavArea *,int>::ConvertToExternalMemory(
    &areasToDestroy.m_Memory,
    &areasToDestroy.m_Memory.m_FixedMemory,
    32,
    0,
    1,
    0x3FFFFFFFu);
  if ( (areasToDestroy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CNavArea *,int>::Purge(&areasToDestroy.m_Memory);
}


// CNavObstacleMgr::UpdateBlocked  (line 1589, @0x0000000002ef17d0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForDirtyRoots, CNavObstacleMgr::UpdateBlockedRecurse, CUtlMemory<CNavObstacle*, int>::Purge, __stack_chk_fail, CUtlVectorBase<CNavObstacle*, CUtlMemoryFixedGrowable<CNavObstacle*, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavObstacleMgr::SplitObstacle, CNavObstacleMgr::MergeObstacle
void __fastcall CNavObstacleMgr::UpdateBlocked(CNavObstacleMgr *const this)
{
  int m_Size; // r13d
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CNavObstacleMgr::CNavObstacleSplitNode *m_pNode; // rsi
  uint32 v6; // eax
  CNavObstacleMgr::ObstacleVector obstaclesTouched; // [rsp+0h] [rbp-C0h] BYREF
  unsigned __int64 v8; // [rsp+98h] [rbp-28h]

  obstaclesTouched.m_Size = 0;
  v8 = __readfsqword(0x28u);
  obstaclesTouched.m_Memory.m_nAllocationCount = 16;
  obstaclesTouched.m_Memory.m_nGrowSize = 0x80000000;
  obstaclesTouched.m_Memory.m_pMemory = &obstaclesTouched.m_Memory.m_FixedMemory;
  CNavObstacleMgr::CNavObstacleSplitForest::GatherObstaclesForDirtyRoots(&this->m_SplitNodeForest, &obstaclesTouched);
  m_Size = this->m_SplitNodeForest.m_Roots.m_Size;
  if ( m_Size != 0 )
  {
    v3 = 0;
    v4 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      m_pNode = this->m_SplitNodeForest.m_Roots.m_Memory.m_pMemory[v3 / 0x10].m_pNode;
      if ( m_pNode != 0 )
        CNavObstacleMgr::UpdateBlockedRecurse(this, m_pNode, &obstaclesTouched);
      v3 += 16LL;
    }
    while ( v3 != v4 );
  }
  obstaclesTouched.m_Size = 0;
  if ( obstaclesTouched.m_Memory.m_nAllocationCount < 0 )
  {
    v6 = obstaclesTouched.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v6 = obstaclesTouched.m_Memory.m_nGrowSize & 0xC0000000;
    if ( obstaclesTouched.m_Memory.m_pMemory != &obstaclesTouched.m_Memory.m_FixedMemory )
    {
      if ( obstaclesTouched.m_Memory.m_pMemory != 0 && v6 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v6 == 0 )
    CUtlMemory<CNavObstacle *,int>::Purge(&obstaclesTouched.m_Memory);
}


// CNavObstacleMgr::UpdateBlockedRecurse  (line 1609, @0x0000000002edfb00, libserver.so)  // inlines: ClearBlockedAnyRaw, Dot, DotProduct2D, GetCenter, IsOverlappingPoint, SetBlockedAnyRaw, Vector2D, Vector2DSubtract, operator-, operator[]
// callers: CNavObstacleMgr::UpdateBlocked
void __fastcall CNavObstacleMgr::UpdateBlockedRecurse(
        CNavObstacleMgr *const this,
        CNavObstacleMgr::CNavObstacleSplitNode *const rNode,
        CNavObstacleMgr::ObstacleVector *const rObstacles)
{
  CNavArea *v5; // r9
  __int64 i; // r12
  CNavObstacleMgr::CNavObstacleSplitNode *v8; // rsi
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  CNavObstacle *v11; // r8
  int m_Size; // edi
  float *m_Data; // r8
  int v14; // ecx
  float *v15; // rsi

  v5 = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[rNode->m_nAreaIndex];
  if ( v5 == 0 )
    return;
  v5->m_isBlockedFlags = 0;
  if ( rNode->m_pSplittingEdge == 0 )
  {
    if ( rObstacles->m_Size == 0 )
      return;
    v9 = 0;
    v10 = 8LL * (rObstacles->m_Size - 1) + 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = rObstacles->m_Memory.m_pMemory[v9 / 8];
        if ( v11 != 0 )
          break;
LABEL_15:
        v9 += 8LL;
        if ( v9 == v10 )
          return;
      }
      m_Size = v11->m_ObsEdges.m_Size;
      if ( m_Size != 0 )
      {
        m_Data = v11->m_ObsEdges.m_Memory.m_Memory.m_Data;
        v14 = 0;
        v15 = m_Data;
        do
        {
          ++v14;
          if ( (((v15[1] - m_Data[44 * (v14 % m_Size) + 1]) * (v5->m_vCenter.x - *v15))
              + ((m_Data[44 * (v14 % m_Size)] - *v15) * (v5->m_vCenter.y - v15[1]))) > 0.0 )
            goto LABEL_15;
          v15 += 44;
        }
        while ( m_Size != v14 );
      }
      v9 += 8LL;
      v5->m_isBlockedFlags = 3;
      if ( v9 == v10 )
        return;
    }
  }
  v5->m_isBlockedFlags = 3;
  for ( i = 0; i != 3; ++i )
  {
    v8 = rNode->m_ChildNodes[i];
    if ( v8 != 0 )
      CNavObstacleMgr::UpdateBlockedRecurse(this, v8, rObstacles);
  }
}


// CNavObstacleMgr::DrawIntersectingAreas  (line 1649, @0x0000000002eebad0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DrawPolyOutline, Encompass, Extent, Line, NavAreaCollector, Purge, RemoveAll, Vector, Vector2D, VertexColor_t, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>, CNavPoly::IsOverlappingSegment2D, CUtlMemory<CNavArea*, int>::Purge, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CNavObstacleMgr::DrawIntersectingAreas(
        CNavObstacleMgr *const this,
        const CNavObstacle *const rObstacle)
{
  int i; // ecx
  float m_flZ; // xmm3_4
  vec_t v5; // xmm2_4
  vec_t *v6; // rax
  vec_t v7; // xmm4_4
  unsigned __int64 v8; // rbx
  float v9; // xmm0_4
  CNavArea *v10; // r12
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  CUtlVectorBase<CNavObstacleEdge,CUtlMemoryFixed<CNavObstacleEdge,4ul> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-108h]
  CUtlVectorBase<CNavObstacleEdge,CUtlMemoryFixed<CNavObstacleEdge,4ul> >::CAllocator *v13; // [rsp+18h] [rbp-F8h]
  int m_Size; // [rsp+20h] [rbp-F0h]
  int v15; // [rsp+24h] [rbp-ECh]
  __int64 v16; // [rsp+48h] [rbp-C8h]
  _BYTE v17[16]; // [rsp+50h] [rbp-C0h] BYREF
  Vector2D vA; // [rsp+60h] [rbp-B0h] BYREF
  Vector2D vB; // [rsp+70h] [rbp-A0h] BYREF
  Vector2D v20; // [rsp+80h] [rbp-90h] BYREF
  float v21; // [rsp+88h] [rbp-88h]
  Vector2D v22; // [rsp+90h] [rbp-80h] BYREF
  float v23; // [rsp+98h] [rbp-78h]
  Extent edgeExtent; // [rsp+A0h] [rbp-70h] BYREF
  NavAreaCollector areaCollector; // [rsp+C0h] [rbp-50h] BYREF

  m_Size = rObstacle->m_ObsEdges.m_Size;
  if ( m_Size != 0 )
  {
    v15 = 0;
    p_m_Memory = &rObstacle->m_ObsEdges.m_Memory;
    v13 = &rObstacle->m_ObsEdges.m_Memory;
    for ( i = rObstacle->m_ObsEdges.m_Size; ; i = rObstacle->m_ObsEdges.m_Size )
    {
      ++v15;
      m_flZ = rObstacle->m_flZ;
      v5 = *&v13->m_Memory.m_Data[4];
      vA.x = *v13->m_Memory.m_Data;
      vA.y = v5;
      edgeExtent.lo.x = vA.x;
      edgeExtent.lo.y = v5;
      edgeExtent.lo.z = m_flZ - 100.0;
      edgeExtent.hi.x = vA.x;
      edgeExtent.hi.y = v5;
      edgeExtent.hi.z = m_flZ - 100.0;
      *&areaCollector.m_Areas.m_Size = m_flZ + 100.0;
      v6 = &p_m_Memory->m_Memory.m_Data[176 * (v15 % i)];
      v7 = v6[1];
      vB.x = *v6;
      vB.y = v7;
      *&areaCollector.m_bCheckForDuplicates = vB.x;
      *(&areaCollector.m_bCheckForDuplicates + 1) = v7;
      if ( vA.x > vB.x )
        edgeExtent.lo.x = vB.x;
      if ( vB.x > edgeExtent.hi.x )
        edgeExtent.hi.x = vB.x;
      if ( edgeExtent.lo.y > *(&areaCollector.m_bCheckForDuplicates + 1) )
        edgeExtent.lo.y = *(&areaCollector.m_bCheckForDuplicates + 1);
      if ( *(&areaCollector.m_bCheckForDuplicates + 1) > edgeExtent.hi.y )
        edgeExtent.hi.y = *(&areaCollector.m_bCheckForDuplicates + 1);
      if ( edgeExtent.lo.z > *&areaCollector.m_Areas.m_Size )
        LODWORD(edgeExtent.lo.z) = areaCollector.m_Areas.m_Size;
      if ( *&areaCollector.m_Areas.m_Size > edgeExtent.hi.z )
        LODWORD(edgeExtent.hi.z) = areaCollector.m_Areas.m_Size;
      areaCollector.m_Areas.m_Size = 0;
      areaCollector.m_Areas.m_Memory.m_pMemory = 0;
      areaCollector.m_Areas.m_Memory.m_nAllocationCount = 0;
      areaCollector.m_Areas.m_Memory.m_nGrowSize = 0;
      areaCollector.m_bCheckForDuplicates = 1;
      CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(TheNavMesh, &areaCollector, &edgeExtent);
      if ( areaCollector.m_Areas.m_Size != 0 )
      {
        v8 = 0;
        v16 = 8LL * (areaCollector.m_Areas.m_Size - 1) + 8;
        do
        {
          v9 = rObstacle->m_flZ;
          v10 = areaCollector.m_Areas.m_Memory.m_pMemory[v8 / 8];
          v22 = vB;
          v23 = v9;
          v21 = v9;
          v20 = vA;
          vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
          v17[0] = -1;
          v17[1] = -1;
          v17[2] = -1;
          v17[3] = -1;
          vptr_ISceneViewDebugOverlays[13](debugoverlay, &v20, &v22, v17, 0, 0.0);
          if ( CNavPoly::IsOverlappingSegment2D(v10, &vA, &vB) && INavDrawArea::ms_pInst != 0 )
            (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
              INavDrawArea::ms_pInst,
              v10,
              4291978420LL,
              1,
              &vec3_origin,
              0.5,
              0.0);
          v8 += 8LL;
        }
        while ( v8 != v16 );
      }
      areaCollector.m_Areas.m_Size = 0;
      if ( (areaCollector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CNavArea *,int>::Purge(&areaCollector.m_Areas.m_Memory);
        if ( (areaCollector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CNavArea *,int>::Purge(&areaCollector.m_Areas.m_Memory);
      }
      v13 = (v13 + 176);
      if ( v15 == m_Size )
        break;
    }
  }
}


// CNavObstacleMgr::Update  (line 1677, @0x0000000002efc3c0, libserver.so)  // inlines: DistSqrFromCache, DistToSqr, FirstHandle, IsFinite, IsValid, LengthSqr, NextHandle, Square<float>, operator!=, operator=, operator[]
// calls: CNavObstacleMgr::MergeObstacle, CNavObstacleMgr::SplitObstacle
// callers: CNavObstructionManager::Update
// globals: CNavObstacleMgr::ms_flMoveThreshold
void __fastcall CNavObstacleMgr::Update(CNavObstacleMgr *const this)
{
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *m_pMemory; // rsi
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v4; // rdx
  int v5; // eax
  int v6; // xmm2_4
  int v7; // xmm3_4
  __int64 v8; // r13
  __int64 v9; // rbx
  float v10; // xmm1_4
  int v11; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v12; // rdx
  int v13; // r14d
  int v14; // [rsp+8h] [rbp-28h]
  int v15; // [rsp+Ch] [rbp-24h]

  m_nAllocationCount = this->m_Obstacles.m_table.m_nAllocationCount;
  m_pMemory = this->m_Obstacles.m_table.m_pMemory;
  if ( m_nAllocationCount <= 0 )
    return;
  v4 = m_pMemory + 1;
  v5 = 0;
  if ( m_pMemory->flags_and_hash >= 0 )
  {
    v13 = 0;
LABEL_9:
    v6 = 2139095039;
    v7 = 2139095039;
    while ( 1 )
    {
      v8 = v13;
      v9 = *&m_pMemory[v8].data[2];
      if ( v9 == 0 || *v9 == 0 )
        goto LABEL_29;
      v10 = *&v6;
      if ( (*(v9 + 16) & 0x7F800000) != 0x7F800000 )
      {
        v10 = *&v7;
        if ( (*(v9 + 20) & 0x7F800000) != 0x7F800000 )
        {
          if ( (*(v9 + 24) & 0x7F800000) == 0x7F800000 || (*(v9 + 28) & 0x7F800000) == 0x7F800000 )
            goto LABEL_37;
          v10 = 3.4028235e38;
          if ( (*(v9 + 32) & 0x7F800000) != 0x7F800000 && (*(v9 + 36) & 0x7F800000) != 0x7F800000 )
            break;
        }
      }
LABEL_26:
      if ( v10 > (CNavObstacleMgr::ms_flMoveThreshold * CNavObstacleMgr::ms_flMoveThreshold) )
      {
        v14 = v7;
        v15 = v6;
        CNavObstacleMgr::MergeObstacle(this, *&m_pMemory[v8].data[2]);
        CNavObstacleMgr::SplitObstacle(this, v9);
        v7 = v14;
        *(v9 + 52) = *(v9 + 4);
        v6 = v15;
        *(v9 + 56) = *(v9 + 8);
        *(v9 + 60) = *(v9 + 12);
        *(v9 + 64) = *(v9 + 16);
        *(v9 + 68) = *(v9 + 20);
        *(v9 + 72) = *(v9 + 24);
        *(v9 + 76) = *(v9 + 28);
        *(v9 + 80) = *(v9 + 32);
        *(v9 + 84) = *(v9 + 36);
        *(v9 + 88) = *(v9 + 40);
        *(v9 + 92) = *(v9 + 44);
        *(v9 + 96) = *(v9 + 48);
      }
      *v9 = 0;
      m_pMemory = this->m_Obstacles.m_table.m_pMemory;
      m_nAllocationCount = this->m_Obstacles.m_table.m_nAllocationCount;
LABEL_29:
      v11 = v13 + 1;
      if ( v13 + 1 >= m_nAllocationCount )
        return;
      v12 = &m_pMemory[v11 + 1];
      if ( m_pMemory[v8 + 1].flags_and_hash < 0 )
      {
        while ( ++v11 != m_nAllocationCount )
        {
          ++v12;
          if ( v12[-1].flags_and_hash >= 0 )
            goto LABEL_35;
        }
        return;
      }
LABEL_35:
      v13 = v11;
      if ( v11 == -1 )
        return;
    }
    if ( (*(v9 + 64) & 0x7F800000) != 0x7F800000
      && (*(v9 + 68) & 0x7F800000) != 0x7F800000
      && (*(v9 + 72) & 0x7F800000) != 0x7F800000
      && (*(v9 + 76) & 0x7F800000) != 0x7F800000
      && (*(v9 + 80) & 0x7F800000) != 0x7F800000
      && (*(v9 + 84) & 0x7F800000) != 0x7F800000 )
    {
      if ( *(v9 + 88) == *(v9 + 40) && *(v9 + 92) == *(v9 + 44) && *(v9 + 96) == *(v9 + 48) )
        v10 = (((*(v9 + 4) - *(v9 + 52)) * (*(v9 + 4) - *(v9 + 52)))
             + ((*(v9 + 8) - *(v9 + 56)) * (*(v9 + 8) - *(v9 + 56))))
            + ((*(v9 + 12) - *(v9 + 60)) * (*(v9 + 12) - *(v9 + 60)));
      else
        v10 = 10000.0;
      goto LABEL_26;
    }
LABEL_37:
    v10 = 3.4028235e38;
    goto LABEL_26;
  }
  do
  {
    if ( ++v5 == m_nAllocationCount )
      return;
    ++v4;
  }
  while ( v4[-1].flags_and_hash < 0 );
  if ( v5 != -1 )
  {
    v13 = v5;
    goto LABEL_9;
  }
}


// CNavObstacleMgr::DebugDraw  (line 1710, @0x0000000002edfd30, libserver.so)  // inlines: DebugDraw, DistSqrFromCache, DistToSqr, Element, FirstHandle, HorzArrow, Init, IsFinite, IsValid, LengthSqr, NextHandle, VertexColor_t, operator!=, operator[]
// calls: CNavObstacleMgr::DebugDrawNodeRecurse, CNavObstacleShape::DebugDraw
// callers: CNavObstructionManager::DebugDraw
void __fastcall CNavObstacleMgr::DebugDraw(const CNavObstacleMgr *const this)
{
  const CNavObstacleMgr *v1; // r12
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *m_pMemory; // rsi
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v4; // rdx
  int v5; // eax
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  CNavObstacleMgr::CNavObstacleSplitNode *m_pNode; // rsi
  __int64 v10; // r12
  int v11; // r13d
  int *v12; // r15
  int v13; // xmm2_4
  int v14; // xmm1_4
  int *v15; // rdx
  int v16; // xmm1_4
  int v17; // xmm2_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rdx
  int v19; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v20; // rdx
  int v22; // [rsp+14h] [rbp-7Ch]
  _BYTE v23[16]; // [rsp+30h] [rbp-60h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-50h] BYREF
  int v25; // [rsp+48h] [rbp-48h]
  _DWORD v26[16]; // [rsp+50h] [rbp-40h] BYREF

  v1 = this;
  m_nAllocationCount = this->m_Obstacles.m_table.m_nAllocationCount;
  m_pMemory = this->m_Obstacles.m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    v4 = m_pMemory + 1;
    v5 = 0;
    if ( m_pMemory->flags_and_hash >= 0 )
    {
      v22 = 0;
      goto LABEL_14;
    }
    while ( ++v5 != m_nAllocationCount )
    {
      ++v4;
      if ( v4[-1].flags_and_hash >= 0 )
      {
        if ( v5 != -1 )
        {
          v22 = v5;
          do
          {
LABEL_14:
            v10 = *&m_pMemory[v22].data[2];
            if ( v10 != 0 )
            {
              v11 = 0;
              v12 = (v10 + 112);
              do
              {
                ++v11;
                v13 = v12[1];
                v14 = *v12;
                v12 += 44;
                v24[1] = v13;
                v24[0] = v14;
                v25 = *(v10 + 816);
                v15 = (v10 + 112 + 176LL * (v11 & 3));
                v16 = *v15;
                v17 = v15[1];
                v26[2] = v25;
                v26[0] = v16;
                v26[1] = v17;
                vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
                v23[0] = 118;
                v23[1] = -51;
                v23[2] = -1;
                v23[3] = -1;
                vptr_ISceneViewDebugOverlays[34](debugoverlay, v24, v26, v23, 0, 1.5, 2.0);
              }
              while ( v11 != 4 );
              CNavObstacleShape::DebugDraw((v10 + 4), 100, 200, 255, 0.0);
              if ( (*(v10 + 64) & 0x7F800000) != 0x7F800000
                && (*(v10 + 68) & 0x7F800000) != 0x7F800000
                && (*(v10 + 72) & 0x7F800000) != 0x7F800000
                && ((*(v10 + 16) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 20) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 24) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 28) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 32) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 36) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 76) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 80) & 0x7F800000) == 0x7F800000
                 || (*(v10 + 84) & 0x7F800000) == 0x7F800000
                 || *(v10 + 88) != *(v10 + 40)
                 || *(v10 + 92) != *(v10 + 44)
                 || *(v10 + 96) != *(v10 + 48)
                 || ((((*(v10 + 4) - *(v10 + 52)) * (*(v10 + 4) - *(v10 + 52)))
                    + ((*(v10 + 8) - *(v10 + 56)) * (*(v10 + 8) - *(v10 + 56))))
                   + ((*(v10 + 12) - *(v10 + 60)) * (*(v10 + 12) - *(v10 + 60)))) >= 0.00000011920929) )
              {
                CNavObstacleShape::DebugDraw((v10 + 52), 200, 200, 200, 0.0);
              }
              m_pMemory = this->m_Obstacles.m_table.m_pMemory;
              m_nAllocationCount = this->m_Obstacles.m_table.m_nAllocationCount;
            }
            v19 = v22 + 1;
            if ( v22 + 1 >= m_nAllocationCount )
              break;
            v20 = &m_pMemory[v19 + 1];
            if ( m_pMemory[v22 + 1].flags_and_hash < 0 )
            {
              while ( ++v19 != m_nAllocationCount )
              {
                ++v20;
                if ( v20[-1].flags_and_hash >= 0 )
                  goto LABEL_38;
              }
              break;
            }
LABEL_38:
            v22 = v19;
          }
          while ( v19 != -1 );
          v1 = this;
        }
        break;
      }
    }
  }
  m_Size = v1->m_SplitNodeForest.m_Roots.m_Size;
  if ( m_Size != 0 )
  {
    v7 = 0;
    v8 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      m_pNode = v1->m_SplitNodeForest.m_Roots.m_Memory.m_pMemory[v7 / 0x10].m_pNode;
      if ( m_pNode != 0 )
        CNavObstacleMgr::DebugDrawNodeRecurse(v1, m_pNode);
      v7 += 16LL;
    }
    while ( v7 != v8 );
  }
}


// CNavObstacleMgr::DebugDrawNodeRecurse  (line 1766, @0x0000000002edfc60, libserver.so)  // inlines: DrawPolyFilled, operator[]
// callers: CNavObstacleMgr::DebugDraw
void __fastcall CNavObstacleMgr::DebugDrawNodeRecurse(
        const CNavObstacleMgr *const this,
        CNavObstacleMgr::CNavObstacleSplitNode *const rNode)
{
  CNavArea *v3; // rsi
  __int64 v4; // rbx
  CNavObstacleMgr::CNavObstacleSplitNode *v6; // rsi

  v3 = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[rNode->m_nAreaIndex];
  if ( v3 != 0 )
  {
    v4 = 0;
    if ( rNode->m_pSplittingEdge != 0 )
    {
      do
      {
        v6 = rNode->m_ChildNodes[v4];
        if ( v6 != 0 )
          CNavObstacleMgr::DebugDrawNodeRecurse(this, v6);
        ++v4;
      }
      while ( v4 != 3 );
    }
    else if ( v3->m_isBlockedFlags != 0 )
    {
      if ( INavDrawArea::ms_pInst != 0 )
        (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
          INavDrawArea::ms_pInst,
          v3,
          4291335935LL,
          1,
          &vec3_origin,
          0.0,
          -2.0);
    }
    else if ( INavDrawArea::ms_pInst != 0 )
    {
      (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
        INavDrawArea::ms_pInst,
        v3,
        4291362710LL,
        1,
        &vec3_origin,
        0.0,
        -2.0);
    }
  }
}


// CNavDoorBlocker::~CNavDoorBlocker  (line 1802, @0x0000000002ee6fa0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: GetNavObstructionMgr, CNavObstructionManager::RemovePendingDoorBlocker
// callers: CBaseDoor::~CBaseDoor, CBaseDoor::CBaseDoor, CBasePropDoor::~CBasePropDoor, CBasePropDoor::CBasePropDoor
void __fastcall CNavDoorBlocker::~CNavDoorBlocker(CNavDoorBlocker *const this)
{
  CNavObstructionManager *NavObstructionMgr; // rax

  NavObstructionMgr = GetNavObstructionMgr();
  CNavObstructionManager::RemovePendingDoorBlocker(NavObstructionMgr, this);
  this->m_blockedAreas.m_Size = 0;
}


// CNavDoorBlocker::UpdateNavBlocking  (line 1809, @0x0000000002ee0140, libserver.so)
// callers: CBaseDoor::Spawn, CBaseDoor::DoorHitTop, CBaseDoor::DoorHitBottom, CBasePropDoor::OnDoorOpened, CBasePropDoor::OnDoorClosed, CPropDoorRotating::OnDoorOpened, CBasePropDoor::Spawn, CPropDoorRotating::Spawn, CPropDoorRotatingBreakable::Spawn
void __fastcall CNavDoorBlocker::UpdateNavBlocking(CNavDoorBlocker *const this, bool bBlocked)
{
  ;
}


