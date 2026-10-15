// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamemovement.cpp:4795
class CEntityTemporaryMover {
	struct MovedEntity_t {
		MovedEntity_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CEntityTemporaryMover();
	~CEntityTemporaryMover();
	void Push(CBaseEntity *);

	// sizeof = 24
};

// src/game/shared/gamemovement.cpp:5259
class CTraceFilterIgnoreWeapons : public CTraceFilterSkipTwoEntities {
public:

	CTraceFilterIgnoreWeapons(const CBaseEntity *, const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterIgnoreWeapons();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DiffPrint  (line 248, @0x000000000225de30, libserver.so)
void DiffPrint(bool bServer, int nCommandNumber, const char *fmt, ...)
{
  ;
}


// CGameMovement::DiffPrint  (line 262, @0x0000000002253410, libserver.so)
void CGameMovement::DiffPrint(CGameMovement *const this, const char *fmt, ...)
{
  ;
}


// COM_Log  (line 268, @0x000000000225de40, libserver.so)
// calls: V_vsnprintf, __stack_chk_fail
// strings: "hllog.txt", "a+t"
void COM_Log(char *pszFile, char *fmt, ...)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  va_list argptr; // [rsp+8h] [rbp-4F8h] BYREF
  char string[1032]; // [rsp+20h] [rbp-4E0h] BYREF
  unsigned __int64 v7; // [rsp+428h] [rbp-D8h]

  v2 = pszFile;
  v7 = __readfsqword(0x28u);
  argptr[0].gp_offset = 16;
  if ( pszFile == 0 )
    v2 = "hllog.txt";
  va_start(argptr, fmt);
  V_vsnprintf(string, 1024, fmt, argptr);
  v3 = (*(filesystem->_vptr_IBaseFileSystem + 2))(&filesystem->IBaseFileSystem, v2, "a+t", 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(filesystem->_vptr_IAppSystem + 34))(filesystem, v3, "%s", string);
    (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem, v4);
  }
}


// DrawDispCollPlane  (line 299, @0x000000000225df90, libserver.so)  // inlines: Cross, CrossProduct, Init, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator+=, operator-, operator=
// calls: VectorNormalize, NDebugOverlay::Triangle, NDebugOverlay::Line
void __fastcall DrawDispCollPlane(CBaseTrace *pTrace)
{
  int v1; // eax
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  float fraction; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  vec_t v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm15_4
  float v18; // xmm14_4
  float v19; // xmm13_4
  float z; // [rsp+14h] [rbp-9Ch]
  float y; // [rsp+18h] [rbp-98h]
  float x; // [rsp+1Ch] [rbp-94h]
  Vector vecBasisU; // [rsp+20h] [rbp-90h] BYREF
  Vector vecBasisV; // [rsp+30h] [rbp-80h] BYREF
  Vector vecImpactPoint; // [rsp+40h] [rbp-70h] BYREF
  Vector target; // [rsp+50h] [rbp-60h] BYREF
  Vector vecPlanePoints[4]; // [rsp+60h] [rbp-50h] BYREF

  v1 = 1;
  x = pTrace->plane.normal.x;
  v3 = fabs(x);
  y = pTrace->plane.normal.y;
  v4 = fabs(y);
  z = pTrace->plane.normal.z;
  if ( v4 <= v3 )
  {
    v4 = v3;
    LOBYTE(v1) = 0;
  }
  if ( fabs(z) > v4 || (v1 - 1) <= 1 )
  {
    v5 = 1.0;
    v6 = 0.0;
    vecBasisU.y = 0.0;
    vecBasisU.x = 1.0;
    vecBasisU.z = 0.0;
  }
  else
  {
    v6 = 1.0;
    v5 = 0.0;
    vecBasisU.x = 0.0;
    vecBasisU.y = 1.0;
    vecBasisU.z = 0.0;
  }
  vecBasisV.x = (y * 0.0) - (z * v6);
  vecBasisV.y = (z * v5) - (0.0 * x);
  vecBasisV.z = (v6 * x) - (v5 * y);
  VectorNormalize(&vecBasisV);
  vecBasisU.x = (z * vecBasisV.y) - (y * vecBasisV.z);
  vecBasisU.y = (vecBasisV.z * x) - (z * vecBasisV.x);
  vecBasisU.z = (vecBasisV.x * y) - (vecBasisV.y * x);
  VectorNormalize(&vecBasisU);
  fraction = pTrace->fraction;
  v8 = pTrace->startpos.z;
  v9 = pTrace->startpos.x;
  v10 = (pTrace->endpos.z - v8) * fraction;
  vecImpactPoint.y = (((pTrace->endpos.y - pTrace->startpos.y) * fraction) + pTrace->startpos.y) + y;
  v11 = v10 + v8;
  v12 = pTrace->endpos.x;
  vecImpactPoint.z = v11 + z;
  v13 = (((v12 - v9) * fraction) + v9) + x;
  v14 = (vecBasisU.x * -30.0) + v13;
  vecImpactPoint.x = v13;
  v15 = (vecBasisU.y * -30.0) + vecImpactPoint.y;
  v16 = (-30.0 * vecBasisU.z) + (v11 + z);
  vecPlanePoints[0].x = (vecBasisV.x * -30.0) + v14;
  vecPlanePoints[0].y = (vecBasisV.y * -30.0) + v15;
  vecPlanePoints[0].z = (vecBasisV.z * -30.0) + v16;
  v17 = (vecBasisU.x * 30.0) + v13;
  v18 = (vecBasisU.y * 30.0) + vecImpactPoint.y;
  v19 = (vecBasisU.z * 30.0) + (v11 + z);
  vecPlanePoints[1].x = v14 + (vecBasisV.x * 30.0);
  vecPlanePoints[1].y = v15 + (vecBasisV.y * 30.0);
  vecPlanePoints[1].z = v16 + (vecBasisV.z * 30.0);
  vecPlanePoints[2].x = (vecBasisV.x * 30.0) + v17;
  vecPlanePoints[2].y = (vecBasisV.y * 30.0) + v18;
  vecPlanePoints[2].z = (vecBasisV.z * 30.0) + v19;
  vecPlanePoints[3].x = v17 + (vecBasisV.x * -30.0);
  vecPlanePoints[3].y = v18 + (vecBasisV.y * -30.0);
  vecPlanePoints[3].z = v19 + (vecBasisV.z * -30.0);
  NDebugOverlay::Triangle(vecPlanePoints, &vecPlanePoints[1], &vecPlanePoints[2], 0x7Du, 0x7Du, 125, 5.0, 125, 0);
  NDebugOverlay::Triangle(vecPlanePoints, &vecPlanePoints[2], &vecPlanePoints[3], 0x7Du, 0x7Du, 125, 5.0, 125, 0);
  NDebugOverlay::Line(vecPlanePoints, &vecPlanePoints[1], 0xFFu, 0xFFu, 0xFFu, 0, 5.0);
  NDebugOverlay::Line(&vecPlanePoints[1], &vecPlanePoints[2], 0xFFu, 0xFFu, 0xFFu, 0, 5.0);
  NDebugOverlay::Line(&vecPlanePoints[2], &vecPlanePoints[3], 0xFFu, 0xFFu, 0xFFu, 0, 5.0);
  NDebugOverlay::Line(&vecPlanePoints[3], vecPlanePoints, 0xFFu, 0xFFu, 0xFFu, 0, 5.0);
  target.z = (z * 30.0) + vecImpactPoint.z;
  target.y = (y * 30.0) + vecImpactPoint.y;
  target.x = (30.0 * x) + vecImpactPoint.x;
  NDebugOverlay::Line(&vecImpactPoint, &target, 0xFFu, 0, 0, 0, 5.0);
}


// CGameMovement::CGameMovement  (line 365, @0x000000000225e470, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, Init, ResetDbgInfo, V_memset, memset
// calls: memset
// callers: CDOTAGameMovement::CDOTAGameMovement, _GLOBAL__sub_I__unity_dota_03.cpp
// globals: CDefOps<CEntityIndex>::LessFunc(CEntityIndex const&,CEntityIndex const&)
void __fastcall CGameMovement::CGameMovement(CGameMovement *const this)
{
  float *v2; // rdi

  this->_vptr_IGameMovement = off_404F270;
  this->m_flWaterEntryTime = 0.0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_LessFunc.m_LessFunc = CDefOps<CEntityIndex>::LessFunc;
  this->m_mapLastVelocitySpewTime.m_Tree.m_NumElements = 0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree = -1;
  this->mv = 0;
  v2 = this->m_flStuckCheckTime[0];
  *(v2 - 998) = 0.0;
  *(v2 - 996) = 0.0;
  *(v2 - 43) = 0;
  *(v2 - 4) = 0;
  *(v2 - 6) = 0.0;
  *(v2 - 5) = 0.0;
  *(v2 - 8) = -1;
  *(v2 - 5) = -1;
  *(v2 - 1) = 0;
  memset(v2, 0, 0x210u);
  this->m_vecGroundUp.z = 1.0;
  this->m_vecGroundUp.x = 0.0;
  this->m_vecGroundUp.y = 0.0;
}


// CGameMovement::LockTraceFilter  (line 391, @0x0000000002258de0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, SetCollisionGroup, operator CBaseEntity*
// globals: s_nTraceFilterCount, s_TraceFilter, CEntityHandle::gm_pEntityList
CTraceFilter *__fastcall CGameMovement::LockTraceFilter(CGameMovement *const this, int collisionGroup)
{
  __int64 v2; // rdx
  CTraceFilter *result; // rax
  uint8 v4; // r12
  CEntityInstance *m_pInstance; // rsi
  CConcreteEntityList *v6; // r8
  CTraceFilterSkipTwoEntities *v7; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  __int64 v10; // rdi

  v2 = s_nTraceFilterCount;
  result = 0;
  if ( s_nTraceFilterCount <= 7 )
  {
    v4 = collisionGroup;
    m_pInstance = 0;
    ++s_nTraceFilterCount;
    v6 = CEntityHandle::gm_pEntityList;
    v7 = &s_TraceFilter[v2];
    m_Index = this->mv->m_nPlayerHandle.m_Index;
    v9 = (m_Index + 2);
    if ( v9 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = m_Index & 0x1FF;
        v6 = (8 * v10);
        v9 += v10;
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    (*(v7->_vptr_CTraceFilter + 3))(v7, m_pInstance, v9, *(v7->_vptr_CTraceFilter + 3), v6);
    v7->m_attr.m_nCollisionGroup = v4;
    return v7;
  }
  return result;
}


// CGameMovement::UnlockTraceFilter  (line 408, @0x0000000002253420, libserver.so)
// globals: s_nTraceFilterCount
void __fastcall CGameMovement::UnlockTraceFilter(CGameMovement *const this, CTraceFilter **const pFilter)
{
  --s_nTraceFilterCount;
  *pFilter = 0;
}


// CGameMovement::PlayerSolidMask  (line 420, @0x0000000002253440, libserver.so)
uint64 __fastcall CGameMovement::PlayerSolidMask(
        const CGameMovement *const this,
        bool brushOnly,
        CBasePlayer *testPlayer)
{
  return !brushOnly ? 552977LL : 28689LL;
}


// CGameMovement::GetMinGroundNormalZ  (line 428, @0x0000000002253460, libserver.so)
float __fastcall CGameMovement::GetMinGroundNormalZ(const CGameMovement *const this)
{
  return 0.69999999;
}


// CGameMovement::GetCheckInterval  (line 438, @0x0000000002256d40, libserver.so)
int __fastcall CGameMovement::GetCheckInterval(CGameMovement *const this, CGameMovement::IntervalType_t type)
{
  int result; // eax

  if ( type != STUCK )
  {
    if ( type <= STUCK )
    {
      if ( type == GROUND )
        return (0.30000001 / gpGlobals->interval_per_tick);
    }
    else
    {
      result = 2;
      if ( type == LADDER )
        return result;
      if ( type == LADDER_WEDGE )
        return (0.5 / gpGlobals->interval_per_tick);
    }
    return 1;
  }
  result = 1;
  if ( this->player->m_StuckLast == 0 )
  {
    if ( gpGlobals->maxClients == 1 )
      return (0.2 / gpGlobals->interval_per_tick);
    else
      return (1.0 / gpGlobals->interval_per_tick);
  }
  return result;
}


// CGameMovement::CheckInterval  (line 482, @0x000000000225e550, libserver.so)  // inlines: CurrentCommandNumber, entindex
// calls: CEntityInstance::GetEntityIndex
// callers: CGameMovement::LadderMove, CGameMovement::PlayerMove
// globals: g_bMovementOptimizations
bool __fastcall CGameMovement::CheckInterval(CGameMovement *const this, CGameMovement::IntervalType_t type)
{
  int v3; // r12d
  bool result; // al
  CBasePlayer *player; // rdi
  CUserCmd *m_pCurrentCommand; // rax
  int command_number; // ebx

  v3 = (*(this->_vptr_IGameMovement + 33))(this, type);
  result = 1;
  if ( g_bMovementOptimizations )
  {
    player = this->player;
    m_pCurrentCommand = player->m_pCurrentCommand;
    if ( m_pCurrentCommand != 0 )
      command_number = m_pCurrentCommand->command_number;
    else
      command_number = 0;
    return (command_number + CEntityInstance::GetEntityIndex(player).m_Data) % v3 == 0;
  }
  return result;
}


// CGameMovement::GetPlayerMins  (line 498, @0x0000000002254760, libserver.so)
// calls: SafeGetViewVectors
const Vector *__fastcall CGameMovement::GetPlayerMins(const CGameMovement *const this)
{
  CBasePlayer *player; // rax

  player = this->player;
  if ( (player->m_afPhysicsFlags & 8) != 0 )
    return &SafeGetViewVectors()->m_vObsHullMin;
  if ( player->m_Local.m_bDucked.m_Value )
    return &SafeGetViewVectors()->m_vDuckHullMin;
  return &SafeGetViewVectors()->m_vHullMin;
}


// CGameMovement::GetPlayerMaxs  (line 512, @0x00000000022547b0, libserver.so)
// calls: SafeGetViewVectors
const Vector *__fastcall CGameMovement::GetPlayerMaxs(const CGameMovement *const this)
{
  CBasePlayer *player; // rax

  player = this->player;
  if ( (player->m_afPhysicsFlags & 8) != 0 )
    return &SafeGetViewVectors()->m_vObsHullMax;
  if ( player->m_Local.m_bDucked.m_Value )
    return &SafeGetViewVectors()->m_vDuckHullMax;
  return &SafeGetViewVectors()->m_vHullMax;
}


// CGameMovement::GetPlayerViewOffset  (line 527, @0x0000000002254640, libserver.so)  // inlines: operator=
// calls: SafeGetViewVectors, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CGameMovement::GetPlayerViewOffset(bool)::crouchedView, `guard variable for'CGameMovement::GetPlayerViewOffset(bool)::standingView, CGameMovement::GetPlayerViewOffset(bool)::standingView, CGameMovement::GetPlayerViewOffset(bool)::crouchedView
const Vector *__fastcall CGameMovement::GetPlayerViewOffset(const CGameMovement *const this, bool bDucked)
{
  int (**vptr_IHandleEntity)(...); // rax

  if ( `guard variable for'CGameMovement::GetPlayerViewOffset(bool)::crouchedView == 0
    && __cxa_guard_acquire(&`guard variable for'CGameMovement::GetPlayerViewOffset(bool)::crouchedView) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CGameMovement::GetPlayerViewOffset(bool)::crouchedView);
  }
  if ( `guard variable for'CGameMovement::GetPlayerViewOffset(bool)::standingView == 0
    && __cxa_guard_acquire(&`guard variable for'CGameMovement::GetPlayerViewOffset(bool)::standingView) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CGameMovement::GetPlayerViewOffset(bool)::standingView);
  }
  vptr_IHandleEntity = this->player->_vptr_IHandleEntity;
  if ( bDucked )
  {
    CGameMovement::GetPlayerViewOffset(bool)const::crouchedView = *(vptr_IHandleEntity[171])();
    CGameMovement::GetPlayerViewOffset(bool)const::crouchedView.z = SafeGetViewVectors()->m_vDuckView.z;
    return &CGameMovement::GetPlayerViewOffset(bool)const::crouchedView;
  }
  else
  {
    CGameMovement::GetPlayerViewOffset(bool)const::standingView = *(vptr_IHandleEntity[171])();
    CGameMovement::GetPlayerViewOffset(bool)const::standingView.z = SafeGetViewVectors()->m_vView.z;
    return &CGameMovement::GetPlayerViewOffset(bool)const::standingView;
  }
}


// CGameMovement::TestPlayerPosition  (line 547, @0x000000000225b200, libserver.so)  // inlines: CEntityHandle, EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, UTIL_TraceRay, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGamePhysicsQueryInterface::TraceRay
_DWORD *__fastcall CGameMovement::TestPlayerPosition(
        _DWORD *a1,
        CGameMovement *const this,
        const Vector *const pos,
        unsigned int collisionGroup,
        trace_t *const pm)
{
  float *v9; // r12
  float *v10; // r9
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  int (**vptr_IGameMovement)(...); // rax
  float v17; // xmm0_4
  CTraceFilter *v18; // r12
  uint64 contents; // r12
  CBaseEntity *m_pEnt; // rsi
  CTraceFilter *filter; // [rsp+18h] [rbp-88h] BYREF
  Ray_t ray; // [rsp+20h] [rbp-80h] BYREF

  ++this->m_nTraceCount;
  v9 = (*(this->_vptr_IGameMovement + 32))(this);
  v10 = (*(this->_vptr_IGameMovement + 31))(this);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  x = pos->x;
  ray.m_Extents.w = 0.0;
  y = pos->y;
  ray.m_flRadius = 0.0;
  z = pos->z;
  ray.m_Delta.x = x - x;
  ray.m_Delta.y = y - y;
  ray.m_Delta.z = z - z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.x = *v9 - *v10;
  ray.m_Extents.y = v9[1] - v10[1];
  v14 = v9[2] - v10[2];
  ray.m_Extents.x = ray.m_Extents.x * 0.5;
  ray.m_Extents.y = ray.m_Extents.y * 0.5;
  ray.m_Extents.z = v14 * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.x = *v10 + *v9;
  ray.m_StartOffset.y = v10[1] + v9[1];
  v15 = v10[2] + v9[2];
  ray.m_Start.x = x + (ray.m_StartOffset.x * 0.5);
  vptr_IGameMovement = this->_vptr_IGameMovement;
  v17 = v15 * 0.5;
  ray.m_StartOffset.x = -(ray.m_StartOffset.x * 0.5);
  ray.m_Start.y = y + (ray.m_StartOffset.y * 0.5);
  ray.m_StartOffset.y = -(ray.m_StartOffset.y * 0.5);
  ray.m_StartOffset.z = -v17;
  ray.m_Start.z = z + v17;
  v18 = (vptr_IGameMovement[77])(this, collisionGroup);
  filter = v18;
  v18->m_attr.m_nInteractsWith |= (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, v18, pm);
  (*(this->_vptr_IGameMovement + 78))(this, &filter);
  contents = pm->contents;
  if ( (contents & (*(this->_vptr_IGameMovement + 14))(this, 0, 0)) != 0 && (m_pEnt = pm->m_pEnt) != 0 )
    (*(m_pEnt->_vptr_IHandleEntity + 3))(a1);
  else
    *a1 = -1;
  return a1;
}


// CGameMovement::CategorizeGroundSurface  (line 561, @0x0000000002253470, libserver.so)  // inlines: operator=
void __fastcall CGameMovement::CategorizeGroundSurface(CGameMovement *const this, trace_t *const pm)
{
  CBasePlayer *player; // rax
  CBasePlayer *v3; // rax

  player = this->player;
  this->m_vecGroundUp = pm->plane.normal;
  player->m_surfaceProps.m_nHashCode = pm->m_pSurfaceProperties->m_nameHash;
  this->player->m_pSurfaceData = pm->m_pSurfaceProperties;
  this->player->m_surfaceFriction = pm->m_pSurfaceProperties->m_physics.m_friction;
  this->player->m_surfaceFriction = 1.25 * this->player->m_surfaceFriction;
  v3 = this->player;
  if ( v3->m_surfaceFriction > 1.0 )
  {
    v3->m_surfaceFriction = 1.0;
    v3 = this->player;
  }
  v3->m_chTextureType = v3->m_pSurfaceData->m_gameProperties.m_nMaterial;
}


// CGameMovement::IsDead  (line 582, @0x000000000225ef90, libserver.so)
// calls: CBaseEntity::GetHealth
bool __fastcall CGameMovement::IsDead(const CGameMovement *const this)
{
  return CBaseEntity::GetHealth(this->player) <= 0;
}


// CGameMovement::ComputeConstraintSpeedFactor  (line 590, @0x000000000225efb0, libserver.so)  // inlines: DistToSqr, DotProduct, LengthSqr, Lerp<float>, VectorMA, VectorMultiply, VectorSubtract
// calls: AngleVectors, VectorNormalize, sqrt
// callers: CGameMovement::CheckParameters
float __fastcall CGameMovement::ComputeConstraintSpeedFactor(CGameMovement *const this)
{
  CMoveData *mv; // rax
  float m_flConstraintRadius; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  CMoveData *v6; // rax
  float m_flForwardMove; // xmm3_4
  float m_flSideMove; // xmm5_4
  float m_flUpMove; // xmm4_4
  CMoveData *v10; // rax
  float v11; // xmm1_4
  float result; // xmm0_4
  float flDistSq; // [rsp+Ch] [rbp-64h]
  Vector vecDesired; // [rsp+10h] [rbp-60h] BYREF
  Vector viewForward; // [rsp+20h] [rbp-50h] BYREF
  Vector viewRight; // [rsp+30h] [rbp-40h] BYREF
  Vector viewUp; // [rsp+40h] [rbp-30h] BYREF
  Vector vecDelta; // [rsp+50h] [rbp-20h] BYREF

  mv = this->mv;
  if ( mv == 0 )
    return 1.0;
  m_flConstraintRadius = mv->m_flConstraintRadius;
  if ( m_flConstraintRadius == 0.0 )
    return 1.0;
  v4 = mv->m_vecAbsOrigin.z - mv->m_vecConstraintCenter.z;
  v5 = (((mv->m_vecAbsOrigin.x - mv->m_vecConstraintCenter.x) * (mv->m_vecAbsOrigin.x - mv->m_vecConstraintCenter.x))
      + ((mv->m_vecAbsOrigin.y - mv->m_vecConstraintCenter.y) * (mv->m_vecAbsOrigin.y - mv->m_vecConstraintCenter.y)))
     + (v4 * v4);
  if ( ((m_flConstraintRadius - mv->m_flConstraintWidth) * (m_flConstraintRadius - mv->m_flConstraintWidth)) >= v5
    || v5 >= (m_flConstraintRadius * m_flConstraintRadius) && !mv->m_bConstraintPastRadius )
  {
    return 1.0;
  }
  flDistSq = (((mv->m_vecAbsOrigin.x - mv->m_vecConstraintCenter.x)
             * (mv->m_vecAbsOrigin.x - mv->m_vecConstraintCenter.x))
            + ((mv->m_vecAbsOrigin.y - mv->m_vecConstraintCenter.y)
             * (mv->m_vecAbsOrigin.y - mv->m_vecConstraintCenter.y)))
           + (v4 * v4);
  AngleVectors(&mv->m_vecViewAngles, &viewForward, &viewRight, &viewUp);
  v6 = this->mv;
  m_flForwardMove = v6->m_flForwardMove;
  m_flSideMove = v6->m_flSideMove;
  m_flUpMove = v6->m_flUpMove;
  vecDesired.x = ((m_flForwardMove * viewForward.x) + (m_flSideMove * viewRight.x)) + (viewUp.x * m_flUpMove);
  vecDesired.y = ((viewForward.y * m_flForwardMove) + (viewRight.y * m_flSideMove)) + (viewUp.y * m_flUpMove);
  vecDesired.z = ((viewForward.z * m_flForwardMove) + (viewRight.z * m_flSideMove)) + (m_flUpMove * viewUp.z);
  if ( (((vecDesired.x * vecDesired.x) + (vecDesired.y * vecDesired.y)) + (vecDesired.z * vecDesired.z)) == 0.0 )
    return 1.0;
  vecDelta.x = v6->m_vecAbsOrigin.x - v6->m_vecConstraintCenter.x;
  vecDelta.y = v6->m_vecAbsOrigin.y - v6->m_vecConstraintCenter.y;
  vecDelta.z = v6->m_vecAbsOrigin.z - v6->m_vecConstraintCenter.z;
  VectorNormalize(&vecDelta);
  VectorNormalize(&vecDesired);
  if ( (((vecDelta.x * vecDesired.x) + (vecDelta.y * vecDesired.y)) + (vecDelta.z * vecDesired.z)) < 0.0 )
    return 1.0;
  v10 = this->mv;
  v11 = (((sqrt(flDistSq) - (v10->m_flConstraintRadius - v10->m_flConstraintWidth)) / v10->m_flConstraintWidth)
       * (v10->m_flConstraintSpeedFactor - 1.0))
      + 1.0;
  if ( v11 >= 0.15000001 )
    return v11;
  result = 0.0;
  if ( !v10->m_bConstraintPastRadius )
    return v11;
  return result;
}


// CGameMovement::CheckParameters  (line 643, @0x000000000225f250, libserver.so)  // inlines: GetFloat, GetMoveType, IsDead, operator+, operator=
// calls: CGameMovement::ComputeConstraintSpeedFactor, CBaseEntity::GetHealth, SafeGetViewVectors, sqrtf, sqrt
// globals: g_bMovementOptimizations
void __fastcall CGameMovement::CheckParameters(CGameMovement *const this)
{
  CBasePlayer *player; // rdi
  MoveType_t m_Value; // al
  CMoveData *mv; // rax
  float v5; // xmm1_4
  float m_flClientMaxSpeed; // xmm0_4
  const CPhysSurfaceProperties *m_pSurfaceData; // rax
  float v8; // xmm0_4
  bool v9; // zf
  CMoveData *v10; // rax
  float v11; // xmm2_4
  CMoveData *v12; // r12
  float x; // xmm0_4
  float y; // xmm1_4
  vec_t v15; // xmm2_4
  CBasePlayer *v16; // rax
  MoveType_t v17; // al
  vec_t v18; // xmm0_4
  CMoveData *v19; // rax
  float v20; // xmm0_4
  CMoveData *v21; // rax
  void (__fastcall *v22)(CBasePlayer *, Vector *); // r12
  const CViewVectors *ViewVectors; // rax
  float v24; // xmm0_4
  CMoveData *v25; // rax
  float m_flMaxSpeed; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float spd; // [rsp+8h] [rbp-28h]
  float flSpeedFactor; // [rsp+Ch] [rbp-24h]
  QAngle v_angle; // [rsp+10h] [rbp-20h] BYREF

  player = this->player;
  m_Value = player->m_MoveType.m_Value;
  if ( m_Value != MoveType_t::MOVETYPE_ISOMETRIC && (m_Value & 0xFD) != 8 )
  {
    mv = this->mv;
    v5 = ((mv->m_flForwardMove * mv->m_flForwardMove) + (mv->m_flSideMove * mv->m_flSideMove))
       + (mv->m_flUpMove * mv->m_flUpMove);
    m_flClientMaxSpeed = mv->m_flClientMaxSpeed;
    if ( m_flClientMaxSpeed != 0.0 )
    {
      mv->m_flMaxSpeed = fminf(m_flClientMaxSpeed, mv->m_flMaxSpeed);
      player = this->player;
    }
    m_pSurfaceData = player->m_pSurfaceData;
    if ( m_pSurfaceData != 0 )
      flSpeedFactor = m_pSurfaceData->m_gameProperties.m_flMaxSpeedFactor;
    else
      flSpeedFactor = 1.0;
    spd = v5;
    v8 = CGameMovement::ComputeConstraintSpeedFactor(this);
    v9 = !g_bMovementOptimizations;
    this->mv->m_flMaxSpeed = fminf(v8, flSpeedFactor) * this->mv->m_flMaxSpeed;
    if ( v9 )
    {
      v24 = fsqrt(spd);
      if ( v24 != 0.0 )
      {
        v25 = this->mv;
        m_flMaxSpeed = v25->m_flMaxSpeed;
        if ( v24 > m_flMaxSpeed )
        {
          v27 = m_flMaxSpeed / v24;
          v25->m_flForwardMove = v25->m_flForwardMove * v27;
          this->mv->m_flSideMove = this->mv->m_flSideMove * v27;
          this->mv->m_flUpMove = v27 * this->mv->m_flUpMove;
        }
      }
    }
    else if ( spd != 0.0 )
    {
      v10 = this->mv;
      v11 = v10->m_flMaxSpeed;
      if ( spd > (v11 * v11) )
      {
        v28 = v11 / sqrt(spd);
        v10->m_flForwardMove = v10->m_flForwardMove * v28;
        this->mv->m_flSideMove = this->mv->m_flSideMove * v28;
        this->mv->m_flUpMove = v28 * this->mv->m_flUpMove;
        player = this->player;
        goto LABEL_11;
      }
    }
    player = this->player;
  }
LABEL_11:
  if ( (player->m_fFlags.m_Value & 0x28) != 0 || CBaseEntity::GetHealth(player) <= 0 )
  {
    this->mv->m_flForwardMove = 0.0;
    this->mv->m_flSideMove = 0.0;
    this->mv->m_flUpMove = 0.0;
  }
  (*(this->_vptr_IGameMovement + 17))(this);
  if ( CBaseEntity::GetHealth(this->player) <= 0 )
  {
    v21 = this->mv;
    v21->m_vecAngles.x = v21->m_vecOldAngles.x;
    v21->m_vecAngles.y = v21->m_vecOldAngles.y;
    v21->m_vecAngles.z = v21->m_vecOldAngles.z;
    if ( CBaseEntity::GetHealth(this->player) > 0 )
      goto LABEL_18;
    goto LABEL_23;
  }
  v12 = this->mv;
  x = v12->m_vecAngles.x + vec3_angle.x;
  y = v12->m_vecAngles.y + vec3_angle.y;
  v15 = v12->m_vecAngles.z + vec3_angle.z;
  v16 = this->player;
  v_angle.x = x;
  v_angle.y = y;
  v_angle.z = v15;
  v17 = v16->m_MoveType.m_Value;
  if ( v17 == MoveType_t::MOVETYPE_ISOMETRIC || v17 == MoveType_t::MOVETYPE_NOCLIP )
  {
    v12->m_vecAngles.z = 0.0;
  }
  else
  {
    v18 = (*(this->_vptr_IGameMovement + 16))(
            this,
            &v_angle,
            &v12->m_vecVelocity,
            sv_rollangle.m_pParent->m_Value.m_fValue,
            sv_rollspeed.m_pParent->m_Value.m_fValue);
    y = v_angle.y;
    v12->m_vecAngles.z = v18;
    x = v_angle.x;
  }
  this->mv->m_vecAngles.x = x;
  this->mv->m_vecAngles.y = y;
  if ( CBaseEntity::GetHealth(this->player) <= 0 )
  {
LABEL_23:
    v22 = *(this->player->_vptr_IHandleEntity + 211);
    ViewVectors = SafeGetViewVectors();
    v22(this->player, &ViewVectors->m_vDeadViewHeight);
  }
LABEL_18:
  v19 = this->mv;
  v20 = v19->m_vecAngles.y;
  if ( v20 > 180.0 )
    v19->m_vecAngles.y = v20 - 360.0;
}


// CGameMovement::ReduceTimers  (line 750, @0x0000000002258aa0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<unsigned int>, operator><unsigned int>
void __fastcall CGameMovement::ReduceTimers(CGameMovement *const this)
{
  CBasePlayer *player; // rbx
  float v3; // xmm0_4
  unsigned int m_Value; // eax
  int v5; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // eax
  bool v10; // sf
  unsigned int v11; // edx
  unsigned int v12; // r12d
  float m_flSwimSoundTime; // xmm2_4
  CBasePlayer *v14; // rax
  float frame_msec; // [rsp+Ch] [rbp-24h]
  float frame_mseca; // [rsp+Ch] [rbp-24h]
  float frame_msecb; // [rsp+Ch] [rbp-24h]

  player = this->player;
  v3 = 1000.0 * gpGlobals->frametime;
  m_Value = player->m_Local.m_nDuckTimeMsecs.m_Value;
  v5 = v3;
  if ( m_Value != 0 )
  {
    v6 = m_Value - v5;
    if ( (m_Value - v5) < 0 )
    {
      v6 = 0;
    }
    else if ( v6 == m_Value )
    {
      goto LABEL_4;
    }
    frame_mseca = 1000.0 * gpGlobals->frametime;
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_nDuckTimeMsecs.m_Value = v6;
    v3 = frame_mseca;
    player = this->player;
  }
LABEL_4:
  v7 = player->m_Local.m_nDuckJumpTimeMsecs.m_Value;
  if ( v7 != 0 )
  {
    v8 = v7 - v5;
    if ( (v7 - v5) < 0 )
    {
      v8 = 0;
    }
    else if ( v8 == v7 )
    {
      goto LABEL_7;
    }
    frame_msec = v3;
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 116, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_nDuckJumpTimeMsecs.m_Value = v8;
    v3 = frame_msec;
    player = this->player;
  }
LABEL_7:
  v9 = player->m_Local.m_nJumpTimeMsecs.m_Value;
  if ( v9 != 0 )
  {
    v10 = (v9 - v5) < 0;
    v11 = v9 - v5;
    v12 = v9 - v5;
    if ( v10 )
    {
      v12 = 0;
    }
    else if ( v11 == v9 )
    {
      goto LABEL_10;
    }
    frame_msecb = v3;
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 120, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_nJumpTimeMsecs.m_Value = v12;
    v3 = frame_msecb;
    player = this->player;
  }
LABEL_10:
  m_flSwimSoundTime = player->m_flSwimSoundTime;
  if ( m_flSwimSoundTime > 0.0 )
  {
    player->m_flSwimSoundTime = m_flSwimSoundTime - v3;
    v14 = this->player;
    if ( v14->m_flSwimSoundTime < 0.0 )
      v14->m_flSwimSoundTime = 0.0;
  }
}


// CGameMovement::ProcessMovement  (line 782, @0x0000000002254aa0, libserver.so)  // inlines: CVProfCounter, FinishMove, GetFloat, Increment, Init, ResetGetWaterContentsForPointCache
// calls: __cxa_guard_acquire, CVProfile::FindOrCreateCounter(char const*,CounterGroup_t), __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "start %f %f %f", "forward %f\n", "pa start %f", "pa end %f", "end %f %f %f", "PlayerMovementTraces"
// globals: `guard variable for'CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter, CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter, __dso_handle, CVProfCounter::~CVProfCounter()
void __fastcall CGameMovement::ProcessMovement(CGameMovement *const this, CBasePlayer *pPlayer, CMoveData *pMove)
{
  unsigned __int64 *v4; // r8
  unsigned __int64 *v5; // rdi
  float frametime; // xmm3_4
  unsigned __int64 *v7; // rax
  CMoveData *mv; // rax
  int (**vptr_IGameMovement)(...); // rdx
  CBasePlayer *player; // rdi
  float flStoreFrametime; // [rsp+4h] [rbp-1Ch]
  double x; // [rsp+8h] [rbp-18h]

  v4 = this->m_CachedGetPointContents[1];
  this->m_nTraceCount = 0;
  v5 = this->m_CachedGetPointContents[0];
  frametime = gpGlobals->frametime;
  gpGlobals->frametime = pPlayer->m_flLaggedMovementValue.m_Value * frametime;
  *(v5 + 1119) = 0;
  *(v5 + 1120) = 0;
  *(v5 + 1121) = 1065353216;
  do
  {
    v7 = v5;
    do
    {
      *v7 = -1;
      v7 += 3;
    }
    while ( v7 != v5 + 195 );
    ++v5;
  }
  while ( v5 != v4 );
  this->mv = pMove;
  this->player = pPlayer;
  this->m_bSpeedCropped = 0;
  flStoreFrametime = frametime;
  pMove->m_flMaxSpeed = sv_maxspeed.m_pParent->m_Value.m_fValue;
  mv = this->mv;
  this->m_bProcessingMovement = 1;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  this->m_bInStuckTest = 0;
  (vptr_IGameMovement[8])(this, "start %f %f %f", mv->m_vecAbsOrigin.x, mv->m_vecAbsOrigin.y, mv->m_vecAbsOrigin.z);
  (*(this->_vptr_IGameMovement + 8))(this, "forward %f\n", this->mv->m_flForwardMove);
  x = vec3_angle.x;
  (*(this->_vptr_IGameMovement + 8))(this, "pa start %f", vec3_angle.x);
  (*(this->_vptr_IGameMovement + 15))(this);
  this->mv->m_nOldButtons = this->mv->m_nButtons;
  (*(this->_vptr_IGameMovement + 8))(this, "pa end %f", x);
  (*(this->_vptr_IGameMovement + 8))(
    this,
    "end %f %f %f",
    this->mv->m_vecAbsOrigin.x,
    this->mv->m_vecAbsOrigin.y,
    this->mv->m_vecAbsOrigin.z);
  gpGlobals->frametime = flStoreFrametime;
  player = this->player;
  this->m_bProcessingMovement = 0;
  if ( (*(player->_vptr_IHandleEntity + 521))(player) == 0 )
  {
    if ( `guard variable for'CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter == 0
      && __cxa_guard_acquire(&`guard variable for'CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter) != 0 )
    {
      CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter.m_pCounter = CVProfile::FindOrCreateCounter(
                                                                                         &g_VProfCurrentProfile,
                                                                                         "PlayerMovementTraces",
                                                                                         CounterGroup_t::COUNTER_GROUP_DEFAULT);
      __cxa_guard_release(&`guard variable for'CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter);
      __cxa_atexit(
        CVProfCounter::~CVProfCounter,
        &CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter,
        &_dso_handle);
    }
    *CGameMovement::ProcessMovement(CBasePlayer *,CMoveData *)::_counter.m_pCounter += this->m_nTraceCount;
  }
}


// CGameMovement::StartTrackPredictionErrors  (line 843, @0x0000000002253530, libserver.so)
void __fastcall CGameMovement::StartTrackPredictionErrors(CGameMovement *const this, CBasePlayer *pPlayer)
{
  if ( (*(pPlayer->_vptr_IHandleEntity + 521))(pPlayer) == 0 )
    this->player = pPlayer;
}


// CGameMovement::FinishTrackPredictionErrors  (line 855, @0x0000000002253560, libserver.so)
void __fastcall CGameMovement::FinishTrackPredictionErrors(CGameMovement *const this, CBasePlayer *pPlayer)
{
  (*(pPlayer->_vptr_IHandleEntity + 521))(pPlayer);
}


// CGameMovement::FinishMove  (line 873, @0x000000000225f600, libserver.so)
void __fastcall CGameMovement::FinishMove(CGameMovement *const this)
{
  this->mv->m_nOldButtons = this->mv->m_nButtons;
}


// CGameMovement::DecayPunchAngle  (line 886, @0x0000000002253580, libserver.so)
void __fastcall CGameMovement::DecayPunchAngle(CGameMovement *const this)
{
  ;
}


// CGameMovement::StartGravity  (line 931, @0x0000000002277a60, libserver.so)  // inlines: GetFloat, NetworkStateChanged, Set, SetBaseVelocity, operator!=, operator=, operator[]
// calls: CGameMovement::CheckVelocity
// strings: "StartGravity"
void __fastcall CGameMovement::StartGravity(CGameMovement *const this)
{
  float m_flGravity; // xmm0_4
  CGlobalVars *v3; // rdx
  CMoveData *mv; // rax
  __m128d v5; // xmm1
  CBasePlayer *player; // r12
  vec_t x; // [rsp-18h] [rbp-20h]
  vec_t y; // [rsp-14h] [rbp-1Ch]

  m_flGravity = this->player->m_flGravity;
  if ( m_flGravity == 0.0 )
    m_flGravity = 1.0;
  v3 = gpGlobals;
  mv = this->mv;
  v5 = _mm_cvtps_pd(LODWORD(mv->m_vecVelocity.z));
  v5.m128d_f64[0] = v5.m128d_f64[0]
                  - (m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * 0.5 * gpGlobals->frametime;
  mv->m_vecVelocity.z = _mm_movedup_pd(v5).m128d_f64[0];
  this->mv->m_vecVelocity.z = (v3->frametime * this->player->m_vecBaseVelocity.m_Value.z) + this->mv->m_vecVelocity.z;
  player = this->player;
  if ( player->m_vecBaseVelocity.m_Value.z != 0.0 )
  {
    x = player->m_vecBaseVelocity.m_Value.x;
    y = player->m_vecBaseVelocity.m_Value.y;
    (*(player->_vptr_IHandleEntity + 22))(player, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_vecBaseVelocity.m_Value.z = 0.0;
    player->m_vecBaseVelocity.m_Value.x = x;
    player->m_vecBaseVelocity.m_Value.y = y;
  }
  CGameMovement::CheckVelocity(this, "StartGravity");
}


// CGameMovement::CheckWaterJump  (line 955, @0x0000000002254d10, libserver.so)  // inlines: CGameTrace, DotProduct, RnCollisionAttr_t, VectorAdd, VectorCopy, VectorMA, VectorMultiply, operator*, operator+, operator=
// calls: VectorNormalize, CGameTrace::Init, CBaseEntity::VPhysicsGetObject, CBaseEntity::AddFlag
void __fastcall CGameMovement::CheckWaterJump(CGameMovement *const this)
{
  CMoveData *mv; // rax
  float v3; // xmm0_4
  __m128i v4; // xmm0
  float v5; // r12d
  double v6; // xmm0_8
  float *v7; // r12
  float *v8; // rax
  CMoveData *v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  vec_t v14; // xmm0_4
  void (__fastcall *v15)(CGameMovement *const, vec_t *, vec_t *, __int64, __int64, vec_t *); // r15
  __int64 v16; // rax
  IPhysicsObject *Object; // rax
  float v18; // xmm1_4
  CBasePlayer *player; // rax
  vec_t v20; // xmm1_4
  void (__fastcall *v21)(CGameMovement *const, vec_t *, vec_t *, __int64, __int64, vec_t *); // r15
  __int64 v22; // rax
  int (**vptr_IGameMovement)(...); // rax
  int (*v24)(...); // r15
  __int64 v25; // rax
  float v26; // r12d
  vec_t x; // [rsp-8h] [rbp-134h]
  vec_t y; // [rsp-4h] [rbp-130h]
  Vector forward; // [rsp+0h] [rbp-12Ch] BYREF
  Vector flatforward; // [rsp+Ch] [rbp-120h] BYREF
  float v31; // [rsp+18h] [rbp-114h]
  Vector flatvelocity; // [rsp+1Ch] [rbp-110h] BYREF
  float v33; // [rsp+28h] [rbp-104h]
  Vector vecStart; // [rsp+2Ch] [rbp-100h] BYREF
  float v35; // [rsp+38h] [rbp-F4h]
  Vector vecEnd; // [rsp+3Ch] [rbp-F0h] BYREF
  trace_t tr; // [rsp+4Ch] [rbp-E0h] BYREF

  if ( this->player->m_flWaterJumpTime == 0.0 )
  {
    mv = this->mv;
    if ( mv->m_vecVelocity.z >= -180.0 )
    {
      x = this->m_vecForward.x;
      y = this->m_vecForward.y;
      flatforward.z = mv->m_vecVelocity.x;
      v3 = mv->m_vecVelocity.y;
      flatvelocity.x = 0.0;
      v31 = v3;
      *v4.m128i_i32 = VectorNormalize(&flatforward.z);
      v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      flatforward.x = 0.0;
      forward.y = x;
      forward.z = y;
      *&v6 = VectorNormalize(&forward.y);
      if ( v5 == 0.0
        || (*&v6 = LODWORD(flatforward.z),
            *&v6 = ((flatforward.z * forward.y) + (v31 * forward.z)) + (flatvelocity.x * flatforward.x),
            *&v6 >= 0.0) )
      {
        v7 = (*(this->_vptr_IGameMovement + 32))(this, v6);
        v8 = (*(this->_vptr_IGameMovement + 31))(this);
        v9 = this->mv;
        v10 = *v8 + *v7;
        v11 = v8[1] + v7[1];
        v12 = v8[2] + v7[2];
        memset(&tr.m_hShape, 0, 24);
        tr.m_ShapeAttributes.m_nInteractsExclude = 0x700000000000000LL;
        v13 = (v11 * 0.5) + v9->m_vecAbsOrigin.y;
        v14 = (v12 * 0.5) + v9->m_vecAbsOrigin.z;
        flatvelocity.z = (v10 * 0.5) + v9->m_vecAbsOrigin.x;
        v33 = v13;
        vecStart.x = v14;
        vecStart.z = (forward.y * 24.0) + flatvelocity.z;
        v35 = (forward.z * 24.0) + v13;
        vecEnd.x = (24.0 * flatforward.x) + v14;
        CGameTrace::Init(&vecEnd.z);
        v15 = *(this->_vptr_IGameMovement + 13);
        v16 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
        v15(this, &flatvelocity.z, &vecStart.z, v16, 11, &vecEnd.z);
        if ( tr.plane.dist < 1.0 )
        {
          Object = CBaseEntity::VPhysicsGetObject(tr.m_pSurfaceProperties);
          if ( Object == 0 || ((*(*Object + 1296LL))(Object) & 4) == 0 )
          {
            forward.x = this->mv->m_vecAbsOrigin.z;
            v18 = forward.x + *((*(this->player->_vptr_IHandleEntity + 171))(this->player) + 8);
            player = this->player;
            vecStart.z = (forward.y * 24.0) + flatvelocity.z;
            vecStart.x = v18 + 8.0;
            v35 = (forward.z * 24.0) + v33;
            vecEnd.x = (24.0 * flatforward.x) + (v18 + 8.0);
            player->m_vecWaterJumpVel.x = (tr.endpos.y * -50.0) + vec3_origin.x;
            v20 = (-50.0 * tr.plane.normal.x) + vec3_origin.z;
            player->m_vecWaterJumpVel.y = (tr.endpos.z * -50.0) + vec3_origin.y;
            player->m_vecWaterJumpVel.z = v20;
            v21 = *(this->_vptr_IGameMovement + 13);
            v22 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
            v21(this, &flatvelocity.z, &vecStart.z, v22, 11, &vecEnd.z);
            if ( tr.plane.dist == 1.0 )
            {
              vptr_IGameMovement = this->_vptr_IGameMovement;
              flatvelocity.z = vecStart.z;
              v33 = v35;
              v24 = vptr_IGameMovement[13];
              vecStart.x = vecEnd.x;
              vecEnd.x = vecEnd.x - 1024.0;
              v25 = (vptr_IGameMovement[14])(this, 0, 0);
              v24(this, &flatvelocity.z, &vecStart.z, v25, 11, &vecEnd.z);
              if ( tr.plane.dist < 1.0 )
              {
                v26 = tr.plane.normal.x;
                if ( v26 >= (*(this->_vptr_IGameMovement + 12))(this) )
                {
                  this->mv->m_vecVelocity.z = 256.0;
                  this->mv->m_nOldButtons |= 2u;
                  CBaseEntity::AddFlag(this->player, 4);
                  this->player->m_flWaterJumpTime = 2000.0;
                }
              }
            }
          }
        }
      }
    }
  }
}


// CGameMovement::WaterJump  (line 1032, @0x0000000002257290, libserver.so)
// calls: CBaseEntity::RemoveFlag
void __fastcall CGameMovement::WaterJump(CGameMovement *const this)
{
  CBasePlayer *player; // rax
  float m_flWaterJumpTime; // xmm0_4
  CBasePlayer *v4; // rax

  player = this->player;
  m_flWaterJumpTime = player->m_flWaterJumpTime;
  if ( m_flWaterJumpTime > 10000.0 )
  {
    player->m_flWaterJumpTime = 10000.0;
    player = this->player;
    m_flWaterJumpTime = player->m_flWaterJumpTime;
  }
  if ( m_flWaterJumpTime != 0.0 )
  {
    player->m_flWaterJumpTime = m_flWaterJumpTime - (1000.0 * gpGlobals->frametime);
    v4 = this->player;
    if ( v4->m_flWaterJumpTime <= 0.0 || v4->m_nWaterLevel.m_Value == 0 )
    {
      v4->m_flWaterJumpTime = 0.0;
      CBaseEntity::RemoveFlag(this->player, 4);
      v4 = this->player;
    }
    this->mv->m_vecVelocity.x = v4->m_vecWaterJumpVel.x;
    this->mv->m_vecVelocity.y = this->player->m_vecWaterJumpVel.y;
  }
}


// CGameMovement::WaterMove  (line 1055, @0x00000000022555a0, libserver.so)  // inlines: CGameTrace, GetFloat, RnCollisionAttr_t, SetAbsOrigin, VectorAdd, VectorCopy, VectorMA, VectorMultiply, VectorScale, VectorSubtract, operator=, operator[]
// calls: CGameTrace::Init, AngleVectors, VectorNormalize, CBaseEntity::GetGroundEntity
void __fastcall CGameMovement::WaterMove(CGameMovement *const this)
{
  CMoveData *mv; // rax
  bool v3; // zf
  float v4; // xmm1_4
  vec_t v5; // xmm0_4
  float v6; // xmm1_4
  float z; // xmm1_4
  float v8; // xmm0_4
  CMoveData *v9; // rax
  float m_flMaxSpeed; // xmm1_4
  float v11; // xmm5_4
  __m128d v12; // xmm0
  float v13; // xmm2_4
  __m128 v14; // xmm0
  __m128 v15; // xmm6
  CMoveData *v16; // rax
  __m128 v17; // rt1
  float v18; // xmm1_4
  float v19; // xmm7_4
  vec_t v20; // xmm3_4
  vec_t v21; // xmm0_4
  float y; // xmm3_4
  __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  float *v26; // rdx
  CMoveData *v27; // rax
  CBasePlayer *player; // rdx
  vec_t v29; // xmm0_4
  CGlobalVars *v30; // rdx
  CMoveData *v31; // rax
  float frametime; // xmm0_4
  vec_t v33; // xmm1_4
  vec_t v34; // xmm0_4
  int (**vptr_IGameMovement)(...); // rax
  int (*v36)(...); // r14
  __int64 v37; // rax
  double v38; // xmm0_8
  CBasePlayer *v39; // rax
  void (__fastcall *v40)(CGameMovement *const, Vector *, Vector *, __int64, __int64, trace_t *); // r14
  __int64 v41; // rax
  vec_t v42; // xmm1_4
  CMoveData *v43; // rax
  vec_t v44; // xmm0_4
  CMoveData *v45; // rax
  CBasePlayer *v46; // rdx
  CMoveData *v47; // rax
  float m_flClientMaxSpeed; // xmm1_4
  __m128 m_flForwardMove_low; // xmm0
  int (**v50)(...); // rax
  __m128 v51; // rt1
  float wishspeed; // [rsp+8h] [rbp-158h]
  float addspeed; // [rsp+Ch] [rbp-154h]
  Vector wishvel; // [rsp+10h] [rbp-150h] BYREF
  Vector wishdir; // [rsp+20h] [rbp-140h] BYREF
  Vector start; // [rsp+30h] [rbp-130h] BYREF
  Vector dest; // [rsp+40h] [rbp-120h] BYREF
  Vector temp; // [rsp+50h] [rbp-110h] BYREF
  Vector forward; // [rsp+60h] [rbp-100h] BYREF
  Vector right; // [rsp+70h] [rbp-F0h] BYREF
  Vector up; // [rsp+80h] [rbp-E0h] BYREF
  trace_t pm; // [rsp+90h] [rbp-D0h] BYREF

  memset(&pm.m_ShapeAttributes, 0, 31);
  pm.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&pm);
  AngleVectors(&this->mv->m_vecViewAngles, &forward, &right, &up);
  mv = this->mv;
  v3 = (mv->m_nButtons & 2) == 0;
  v4 = right.y * mv->m_flSideMove;
  wishvel.x = (forward.x * mv->m_flForwardMove) + (right.x * mv->m_flSideMove);
  v5 = (forward.y * mv->m_flForwardMove) + v4;
  v6 = right.z * mv->m_flSideMove;
  wishvel.y = v5;
  wishvel.z = (forward.z * mv->m_flForwardMove) + v6;
  if ( v3 || (v3 = (*(this->_vptr_IGameMovement + 20))(this) == 0, mv = this->mv, v3) )
  {
    if ( mv->m_flForwardMove == 0.0 && mv->m_flSideMove == 0.0 && mv->m_flUpMove == 0.0
      || (*(this->_vptr_IGameMovement + 20))(this) == 0 )
    {
      z = -60.0;
      wishvel.z = -60.0;
    }
    else if ( (*(this->_vptr_IGameMovement + 20))(this) != 0 )
    {
      v47 = this->mv;
      m_flForwardMove_low = LODWORD(v47->m_flForwardMove);
      m_flClientMaxSpeed = v47->m_flClientMaxSpeed;
      m_flForwardMove_low.m128_f32[0] = (m_flForwardMove_low.m128_f32[0] * forward.z)
                                      + (m_flForwardMove_low.m128_f32[0] * forward.z);
      if ( m_flForwardMove_low.m128_f32[0] <= m_flClientMaxSpeed )
      {
        v51.m128_i32[0] = 0;
        m_flClientMaxSpeed = _mm_andnot_ps(_mm_cmplt_ss(m_flForwardMove_low, v51), m_flForwardMove_low).m128_f32[0];
      }
      z = (m_flClientMaxSpeed + v47->m_flUpMove) + wishvel.z;
      wishvel.z = z;
    }
    else
    {
      z = wishvel.z;
    }
  }
  else
  {
    z = wishvel.z + mv->m_flClientMaxSpeed;
    wishvel.z = z;
  }
  wishdir.z = z;
  wishdir.x = wishvel.x;
  wishdir.y = wishvel.y;
  v8 = VectorNormalize(&wishdir);
  v9 = this->mv;
  m_flMaxSpeed = v9->m_flMaxSpeed;
  if ( v8 > m_flMaxSpeed )
  {
    v11 = m_flMaxSpeed / v8;
    wishvel.x = wishvel.x * (m_flMaxSpeed / v8);
    wishvel.z = (m_flMaxSpeed / v8) * wishvel.z;
    v8 = m_flMaxSpeed;
    wishvel.y = wishvel.y * v11;
  }
  v12.m128d_f64[1] = v8;
  v12.m128d_f64[0] = v8 * 0.8;
  v13 = _mm_movedup_pd(v12).m128d_f64[0];
  wishspeed = v13;
  temp = v9->m_vecVelocity;
  v14.m128_f32[0] = VectorNormalize(&temp);
  if ( v14.m128_f32[0] == 0.0 )
  {
    v18 = 0.0;
  }
  else
  {
    v15 = v14;
    v16 = this->mv;
    v15.m128_f32[0] = v14.m128_f32[0]
                    - (((gpGlobals->frametime * v14.m128_f32[0]) * sv_friction.m_pParent->m_Value.m_fValue)
                     * this->player->m_surfaceFriction);
    v17.m128_i32[0] = 1036831949;
    LODWORD(v18) = v15.m128_i32[0] & _mm_cmpge_ss(v15, v17).m128_u32[0];
    v19 = v18 / v14.m128_f32[0];
    v20 = v16->m_vecVelocity.x * (v18 / v14.m128_f32[0]);
    v21 = (v18 / v14.m128_f32[0]) * v16->m_vecVelocity.z;
    v16->m_vecVelocity.x = v20;
    y = v16->m_vecVelocity.y;
    v16->m_vecVelocity.z = v21;
    v16->m_vecVelocity.y = y * v19;
  }
  if ( wishspeed >= 0.1 )
  {
    addspeed = wishspeed - v18;
    if ( (wishspeed - v18) > 0.0 )
    {
      VectorNormalize(&wishvel);
      v23 = 0;
      v24 = fminf(
              addspeed,
              ((wishspeed * sv_accelerate.m_pParent->m_Value.m_fValue) * gpGlobals->frametime)
            * this->player->m_surfaceFriction);
      do
      {
        v25 = *(&wishvel.x + v23) * v24;
        *(&this->mv->m_vecVelocity.x + v23) = *(&this->mv->m_vecVelocity.x + v23) + v25;
        v26 = (&this->mv->m_outWishVel.x + v23);
        v23 += 4;
        *v26 = v25 + *v26;
      }
      while ( v23 != 12 );
    }
  }
  v27 = this->mv;
  player = this->player;
  v27->m_vecVelocity.x = v27->m_vecVelocity.x + player->m_vecBaseVelocity.m_Value.x;
  v27->m_vecVelocity.y = v27->m_vecVelocity.y + player->m_vecBaseVelocity.m_Value.y;
  v29 = v27->m_vecVelocity.z + player->m_vecBaseVelocity.m_Value.z;
  v30 = gpGlobals;
  v27->m_vecVelocity.z = v29;
  v31 = this->mv;
  frametime = v30->frametime;
  dest.x = (v31->m_vecVelocity.x * frametime) + v31->m_vecAbsOrigin.x;
  v33 = (v31->m_vecVelocity.y * frametime) + v31->m_vecAbsOrigin.y;
  v34 = (frametime * v31->m_vecVelocity.z) + v31->m_vecAbsOrigin.z;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  dest.y = v33;
  dest.z = v34;
  v36 = vptr_IGameMovement[13];
  v37 = (vptr_IGameMovement[14])(this, 0, 0);
  v36(this, &this->mv->m_vecAbsOrigin, &dest, v37, 11, &pm);
  *&v38 = 1065353216;
  if ( pm.fraction == 1.0 )
  {
    v39 = this->player;
    start.x = dest.x;
    v3 = !v39->m_Local.m_bAllowAutoMovement.m_Value;
    start.y = dest.y;
    start.z = dest.z;
    if ( !v3 )
    {
      *&v38 = (v39->m_Local.m_flStepSize.m_Value + 1.0) + dest.z;
      start.z = *&v38;
    }
    v40 = *(this->_vptr_IGameMovement + 13);
    v41 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0, v38);
    v40(this, &start, &dest, v41, 11, &pm);
    if ( pm.startsolid )
    {
      (*(this->_vptr_IGameMovement + 42))(this, 0, 0);
    }
    else
    {
      v42 = pm.endpos.z;
      this->mv->m_outStepHeight = (pm.endpos.z - this->mv->m_vecAbsOrigin.z) + this->mv->m_outStepHeight;
      v43 = this->mv;
      v43->m_vecAbsOrigin.x = pm.endpos.x;
      v44 = pm.endpos.y;
      v43->m_vecAbsOrigin.z = v42;
      v43->m_vecAbsOrigin.y = v44;
    }
  }
  else
  {
    v3 = CBaseEntity::GetGroundEntity(this->player) == 0;
    v50 = this->_vptr_IGameMovement;
    if ( v3 )
      v50[42](this, 0, 0);
    else
      v50[76](this, &dest, &pm);
  }
  v45 = this->mv;
  v46 = this->player;
  v45->m_vecVelocity.x = v45->m_vecVelocity.x - v46->m_vecBaseVelocity.m_Value.x;
  v45->m_vecVelocity.y = v45->m_vecVelocity.y - v46->m_vecBaseVelocity.m_Value.y;
  v45->m_vecVelocity.z = v45->m_vecVelocity.z - v46->m_vecBaseVelocity.m_Value.z;
}


// CGameMovement::StepMove  (line 1205, @0x0000000002253590, libserver.so)  // inlines: SetAbsOrigin, VectorCopy, operator=
void __fastcall CGameMovement::StepMove(CGameMovement *const this, Vector *const vecDestination, trace_t *const trace)
{
  CMoveData *mv; // rax
  vec_t x; // xmm4_4
  vec_t y; // xmm5_4
  vec_t v8; // xmm1_4
  vec_t z; // r14d
  int (**vptr_IGameMovement)(...); // rax
  CMoveData *v11; // rax
  __m128i x_low; // xmm7
  vec_t v13; // xmm3_4
  float v14; // r15d
  vec_t v15; // xmm3_4
  CMoveData *v16; // rax
  CMoveData *v17; // rax
  float v18; // xmm0_4
  CBasePlayer *player; // rax
  __m128d v20; // xmm0
  void (__fastcall *v21)(CGameMovement *const, Vector *, vec_t *, __int64, __int64, trace_t *const); // r14
  __int64 v22; // rax
  CMoveData *v23; // rax
  CMoveData *v24; // rax
  float v25; // xmm0_4
  CBasePlayer *v26; // rax
  __m128d v27; // xmm0
  void (__fastcall *v28)(CGameMovement *const, Vector *, vec_t *, __int64, __int64, trace_t *const); // r14
  __int64 v29; // rax
  CMoveData *v30; // rax
  CMoveData *v31; // rax
  CMoveData *v32; // rax
  float v33; // xmm0_4
  CMoveData *v34; // rax
  CMoveData *v35; // rax
  vec_t v36; // [rsp+8h] [rbp-68h]
  vec_t v37; // [rsp+Ch] [rbp-64h]
  vec_t v38; // [rsp+10h] [rbp-60h]
  vec_t vecVel; // [rsp+14h] [rbp-5Ch]
  vec_t vecVel_4; // [rsp+18h] [rbp-58h]
  vec_t vecVel_8; // [rsp+1Ch] [rbp-54h]
  float vecVel_8a; // [rsp+1Ch] [rbp-54h]
  float v43; // [rsp+20h] [rbp-50h]
  float v44; // [rsp+24h] [rbp-4Ch]
  float v45; // [rsp+28h] [rbp-48h]
  Vector vecEndPos; // [rsp+2Ch] [rbp-44h] BYREF
  float v47; // [rsp+38h] [rbp-38h]

  mv = this->mv;
  vecEndPos.y = vecDestination->x;
  x = mv->m_vecAbsOrigin.x;
  y = mv->m_vecAbsOrigin.y;
  vecEndPos.z = vecDestination->y;
  v45 = x;
  v44 = y;
  v8 = mv->m_vecVelocity.y;
  vecEndPos.x = mv->m_vecAbsOrigin.z;
  z = mv->m_vecVelocity.z;
  vecVel = mv->m_vecVelocity.x;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  vecVel_8 = v8;
  v47 = vecDestination->z;
  vptr_IGameMovement[42](this, &vecEndPos.y);
  v11 = this->mv;
  x_low = LODWORD(v11->m_vecAbsOrigin.x);
  v11->m_vecAbsOrigin.x = v45;
  v13 = v11->m_vecAbsOrigin.y;
  v11->m_vecAbsOrigin.y = v44;
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  x_low.m128i_i32[0] = LODWORD(v11->m_vecAbsOrigin.z);
  v11->m_vecAbsOrigin.z = vecEndPos.x;
  v43 = v13;
  v38 = *x_low.m128i_i32;
  x_low.m128i_i32[0] = LODWORD(v11->m_vecVelocity.y);
  v37 = v11->m_vecVelocity.x;
  v15 = v11->m_vecVelocity.z;
  v16 = this->mv;
  v36 = *x_low.m128i_i32;
  vecVel_4 = v15;
  v16->m_vecVelocity.x = vecVel;
  v16->m_vecVelocity.y = vecVel_8;
  v16->m_vecVelocity.z = z;
  v17 = this->mv;
  vecEndPos.y = v17->m_vecAbsOrigin.x;
  vecEndPos.z = v17->m_vecAbsOrigin.y;
  v18 = v17->m_vecAbsOrigin.z;
  player = this->player;
  v47 = v18;
  if ( player->m_Local.m_bAllowAutoMovement.m_Value )
  {
    v20.m128d_f64[1] = v18;
    v20.m128d_f64[0] = v18 + player->m_Local.m_flStepSize.m_Value + 0.03125;
    v47 = _mm_movedup_pd(v20).m128d_f64[0];
  }
  v21 = *(this->_vptr_IGameMovement + 13);
  v22 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
  v21(this, &this->mv->m_vecAbsOrigin, &vecEndPos.y, v22, 11, trace);
  if ( !trace->startsolid )
  {
    v23 = this->mv;
    v23->m_vecAbsOrigin.x = trace->endpos.x;
    v23->m_vecAbsOrigin.y = trace->endpos.y;
    v23->m_vecAbsOrigin.z = trace->endpos.z;
  }
  (*(this->_vptr_IGameMovement + 42))(this, 0, 0);
  v24 = this->mv;
  vecEndPos.y = v24->m_vecAbsOrigin.x;
  vecEndPos.z = v24->m_vecAbsOrigin.y;
  v25 = v24->m_vecAbsOrigin.z;
  v26 = this->player;
  v47 = v25;
  if ( v26->m_Local.m_bAllowAutoMovement.m_Value )
  {
    v27.m128d_f64[1] = v25;
    v27.m128d_f64[0] = v25 - (v26->m_Local.m_flStepSize.m_Value + 0.0625);
    v47 = _mm_movedup_pd(v27).m128d_f64[0];
  }
  v28 = *(this->_vptr_IGameMovement + 13);
  v29 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
  v28(this, &this->mv->m_vecAbsOrigin, &vecEndPos.y, v29, 11, trace);
  vecVel_8a = trace->plane.normal.z;
  if ( (*(this->_vptr_IGameMovement + 12))(this) > vecVel_8a )
  {
    v30 = this->mv;
    v30->m_vecAbsOrigin.x = v14;
    v30->m_vecAbsOrigin.y = v43;
    v30->m_vecAbsOrigin.z = v38;
    v31 = this->mv;
    v31->m_vecVelocity.x = v37;
    v31->m_vecVelocity.y = v36;
LABEL_9:
    v31->m_vecVelocity.z = vecVel_4;
    goto LABEL_10;
  }
  if ( !trace->startsolid )
  {
    v34 = this->mv;
    v34->m_vecAbsOrigin.x = trace->endpos.x;
    v34->m_vecAbsOrigin.y = trace->endpos.y;
    v34->m_vecAbsOrigin.z = trace->endpos.z;
  }
  v31 = this->mv;
  if ( (((v14 - v45) * (v14 - v45)) + ((v43 - v44) * (v43 - v44))) <= (((v31->m_vecAbsOrigin.x - v45)
                                                                      * (v31->m_vecAbsOrigin.x - v45))
                                                                     + ((v31->m_vecAbsOrigin.y - v44)
                                                                      * (v31->m_vecAbsOrigin.y - v44))) )
    goto LABEL_9;
  v31->m_vecAbsOrigin.x = v14;
  v31->m_vecAbsOrigin.y = v43;
  v31->m_vecAbsOrigin.z = v38;
  v35 = this->mv;
  v35->m_vecVelocity.x = v37;
  v35->m_vecVelocity.y = v36;
  v35->m_vecVelocity.z = vecVel_4;
LABEL_10:
  v32 = this->mv;
  v33 = v32->m_vecAbsOrigin.z - vecEndPos.x;
  if ( v33 > 0.0 )
    v32->m_outStepHeight = v33 + v32->m_outStepHeight;
}


// CGameMovement::Friction  (line 1312, @0x0000000002255c70, libserver.so)  // inlines: FastSqrt, GetFloat, VectorLength, VectorMultiply, VectorScale, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-=
// calls: CBaseEntity::GetGroundEntity
void __fastcall CGameMovement::Friction(CGameMovement *const this)
{
  CBasePlayer *player; // rdi
  CMoveData *mv; // rax
  float v4; // xmm1_4
  CBaseEntity *GroundEntity; // rax
  float v6; // xmm1_4
  float v7; // xmm2_4
  CBasePlayer *v8; // rdi
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  CMoveData *v12; // rax
  CMoveData *v13; // rax
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // [rsp-18h] [rbp-20h]
  float v17; // [rsp-14h] [rbp-1Ch]
  float v18; // [rsp-14h] [rbp-1Ch]

  player = this->player;
  if ( player->m_flWaterJumpTime == 0.0 )
  {
    mv = this->mv;
    v4 = fsqrt(
           ((mv->m_vecVelocity.x * mv->m_vecVelocity.x) + (mv->m_vecVelocity.y * mv->m_vecVelocity.y))
         + (mv->m_vecVelocity.z * mv->m_vecVelocity.z));
    if ( v4 >= 0.1 )
    {
      v17 = v4;
      GroundEntity = CBaseEntity::GetGroundEntity(player);
      v6 = v17;
      v7 = 0.0;
      if ( GroundEntity != 0 )
      {
        v8 = this->player;
        v16 = v17;
        v18 = v8->m_surfaceFriction * sv_friction.m_pParent->m_Value.m_fValue;
        v9 = (*(v8->_vptr_IHandleEntity + 168))(v8);
        v6 = v16;
        v7 = ((fmaxf(sv_stopspeed.m_pParent->m_Value.m_fValue, v16) * (v9 * v18)) * gpGlobals->frametime) + 0.0;
      }
      v10 = fmaxf(0.0, v6 - v7);
      v11 = v10;
      if ( v10 != v6 )
      {
        v11 = v10 / v6;
        v12 = this->mv;
        v12->m_vecVelocity.x = v12->m_vecVelocity.x * (v10 / v6);
        v12->m_vecVelocity.y = v12->m_vecVelocity.y * (v10 / v6);
        v12->m_vecVelocity.z = v12->m_vecVelocity.z * (v10 / v6);
      }
      v13 = this->mv;
      v14 = v13->m_vecVelocity.y * (1.0 - v11);
      v15 = v13->m_vecVelocity.z * (1.0 - v11);
      v13->m_outWishVel.x = v13->m_outWishVel.x - ((1.0 - v11) * v13->m_vecVelocity.x);
      v13->m_outWishVel.y = v13->m_outWishVel.y - v14;
      v13->m_outWishVel.z = v13->m_outWishVel.z - v15;
    }
  }
}


// CGameMovement::FinishGravity  (line 1385, @0x0000000002277bb0, libserver.so)  // inlines: GetFloat
// calls: CGameMovement::CheckVelocity
// strings: "FinishGravity"
void __fastcall CGameMovement::FinishGravity(CGameMovement *const this)
{
  CBasePlayer *player; // rax
  float m_flGravity; // xmm1_4
  CMoveData *mv; // rax
  __m128d v4; // xmm0
  vec_t v5; // xmm2_4

  player = this->player;
  if ( player->m_flWaterJumpTime == 0.0 )
  {
    m_flGravity = player->m_flGravity;
    if ( m_flGravity == 0.0 )
      m_flGravity = 1.0;
    mv = this->mv;
    v4 = _mm_cvtps_pd(LODWORD(mv->m_vecVelocity.z));
    v4.m128d_f64[0] = v4.m128d_f64[0]
                    - ((m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * gpGlobals->frametime) * 0.5;
    v5 = _mm_movedup_pd(v4).m128d_f64[0];
    mv->m_vecVelocity.z = v5;
    CGameMovement::CheckVelocity(this, "FinishGravity");
  }
}


// CGameMovement::AirAccelerate  (line 1408, @0x0000000002253980, libserver.so)  // inlines: Dot, DotProduct, operator[]
void __fastcall CGameMovement::AirAccelerate(
        CGameMovement *const this,
        Vector *const wishdir,
        __m128 a3,
        float wishspeed,
        float accel)
{
  CBasePlayer *player; // rax
  CMoveData *mv; // rdx
  __m128 v7; // xmm2
  float v8; // xmm2_4
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm2_4
  float v12; // xmm0_4
  float *v13; // rdx

  player = this->player;
  if ( !player->m_pl.deadflag && player->m_flWaterJumpTime == 0.0 )
  {
    mv = this->mv;
    v7 = _mm_cmplt_ss(0x41F00000u, a3);
    v8 = COERCE_FLOAT(_mm_andnot_ps(v7, a3).m128_u32[0] | v7.m128_i32[0] & 0x41F00000)
       - (((mv->m_vecVelocity.x * wishdir->x) + (mv->m_vecVelocity.y * wishdir->y)) + (mv->m_vecVelocity.z * wishdir->z));
    if ( v8 > 0.0 )
    {
      v9 = ((a3.m128_f32[0] * wishspeed) * gpGlobals->frametime) * player->m_surfaceFriction;
      v10 = 0;
      v11 = fminf(v8, v9);
      while ( 1 )
      {
        *(&mv->m_vecVelocity.x + v10) = (*(&wishdir->x + v10) * v11) + *(&mv->m_vecVelocity.x + v10);
        v12 = *(&wishdir->x + v10);
        v13 = (&this->mv->m_outWishVel.x + v10);
        v10 += 4;
        *v13 = (v12 * v11) + *v13;
        if ( v10 == 12 )
          break;
        mv = this->mv;
      }
    }
  }
}


// CGameMovement::AirMove  (line 1454, @0x0000000002254910, libserver.so)  // inlines: GetFloat, VectorAdd, VectorCopy, VectorSubtract
// calls: AngleVectors, VectorNormalize
void __fastcall CGameMovement::AirMove(CGameMovement *const this)
{
  CMoveData *mv; // rax
  double v3; // xmm0_8
  double v4; // xmm1_8
  CMoveData *v5; // rax
  CBasePlayer *player; // rdx
  CMoveData *v7; // rax
  CBasePlayer *v8; // rdx
  float fmove; // [rsp+8h] [rbp-68h]
  float smove; // [rsp+Ch] [rbp-64h]
  Vector wishdir; // [rsp+10h] [rbp-60h] BYREF
  Vector forward; // [rsp+20h] [rbp-50h] BYREF
  Vector right; // [rsp+30h] [rbp-40h] BYREF
  Vector up; // [rsp+40h] [rbp-30h] BYREF

  AngleVectors(&this->mv->m_vecViewAngles, &forward, &right, &up);
  mv = this->mv;
  forward.z = 0.0;
  right.z = 0.0;
  fmove = mv->m_flForwardMove;
  smove = mv->m_flSideMove;
  VectorNormalize(&forward);
  VectorNormalize(&right);
  wishdir.z = 0.0;
  wishdir.y = (forward.y * fmove) + (right.y * smove);
  wishdir.x = (fmove * forward.x) + (smove * right.x);
  *&v3 = VectorNormalize(&wishdir);
  if ( *&v3 != 0.0 )
  {
    *&v4 = LODWORD(this->mv->m_flMaxSpeed);
    *&v4 = fminf(*&v4, *&v3);
    v3 = v4;
  }
  (*(this->_vptr_IGameMovement + 23))(this, &wishdir, v3, sv_airaccelerate.m_pParent->m_Value.m_fValue);
  v5 = this->mv;
  player = this->player;
  v5->m_vecVelocity.x = v5->m_vecVelocity.x + player->m_vecBaseVelocity.m_Value.x;
  v5->m_vecVelocity.y = v5->m_vecVelocity.y + player->m_vecBaseVelocity.m_Value.y;
  v5->m_vecVelocity.z = v5->m_vecVelocity.z + player->m_vecBaseVelocity.m_Value.z;
  (*(this->_vptr_IGameMovement + 43))(this);
  v7 = this->mv;
  v8 = this->player;
  v7->m_vecVelocity.x = v7->m_vecVelocity.x - v8->m_vecBaseVelocity.m_Value.x;
  v7->m_vecVelocity.y = v7->m_vecVelocity.y - v8->m_vecBaseVelocity.m_Value.y;
  v7->m_vecVelocity.z = v7->m_vecVelocity.z - v8->m_vecBaseVelocity.m_Value.z;
}


// CGameMovement::CanAccelerate  (line 1504, @0x0000000002253a70, libserver.so)
bool __fastcall CGameMovement::CanAccelerate(CGameMovement *const this)
{
  CBasePlayer *player; // rdx
  bool result; // al

  player = this->player;
  result = 0;
  if ( !player->m_pl.deadflag )
    return player->m_flWaterJumpTime == 0.0;
  return result;
}


// CGameMovement::Accelerate  (line 1524, @0x000000000225f620, libserver.so)  // inlines: Dot, DotProduct, operator[]
// callers: CGameMovement::WalkMove, CGameMovement::FullNoClipMove, CGameMovement::FullObserverMove, CGameMovement::FullTossMove
void __fastcall CGameMovement::Accelerate(
        CGameMovement *const this,
        Vector *const wishdir,
        double a3,
        float wishspeed,
        float accel)
{
  CMoveData *mv; // rdx
  float v8; // xmm4_4
  __int64 v9; // rax
  float v10; // xmm2_4
  float v11; // xmm0_4
  float *v12; // rdx
  float wishspeeda; // [rsp+Ch] [rbp-14h]

  wishspeeda = *&a3;
  if ( (*(this->_vptr_IGameMovement + 25))(this, a3, wishspeed, accel) != 0 )
  {
    mv = this->mv;
    v8 = wishspeeda
       - (((mv->m_vecVelocity.x * wishdir->x) + (mv->m_vecVelocity.y * wishdir->y)) + (mv->m_vecVelocity.z * wishdir->z));
    if ( v8 > 0.0 )
    {
      v9 = 0;
      v10 = fminf(v8, ((wishspeed * gpGlobals->frametime) * wishspeeda) * this->player->m_surfaceFriction);
      while ( 1 )
      {
        v11 = *(&wishdir->x + v9);
        v12 = (&mv->m_vecVelocity.x + v9);
        v9 += 4;
        *v12 = (v11 * v10) + *v12;
        if ( v9 == 12 )
          break;
        mv = this->mv;
      }
    }
  }
}


// CGameMovement::StayOnGround  (line 1561, @0x00000000022553a0, libserver.so)  // inlines: CGameTrace, GetStepSize, RnCollisionAttr_t, SetAbsOrigin, operator=
// calls: CGameTrace::Init
void __fastcall CGameMovement::StayOnGround(CGameMovement *const this)
{
  CMoveData *mv; // rax
  __int64 v3; // rdx
  vec_t v4; // xmm0_4
  CBasePlayer *player; // rax
  vec_t v6; // xmm0_4
  int (**vptr_IGameMovement)(...); // rax
  int (*v8)(...); // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int (**v13)(...); // rax
  int (*v14)(...); // r14
  __int64 v15; // rax
  float z; // r12d
  CMoveData *v17; // rax
  vec_t x; // xmm0_4
  Vector start; // [rsp+0h] [rbp-F0h] BYREF
  Vector end; // [rsp+10h] [rbp-E0h] BYREF
  trace_t trace; // [rsp+20h] [rbp-D0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  mv = this->mv;
  v3 = *&mv->m_vecAbsOrigin.x;
  *&mv = mv->m_vecAbsOrigin.z;
  *&start.x = v3;
  LODWORD(start.z) = mv;
  v4 = *&mv + 2.0;
  LODWORD(end.z) = mv;
  player = this->player;
  *&end.x = v3;
  start.z = v4;
  v6 = end.z - player->m_Local.m_flStepSize.m_Value;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  end.z = v6;
  v8 = vptr_IGameMovement[13];
  v12 = (vptr_IGameMovement[14])(this, 0, 0, v9, v10, v11, v3, LODWORD(start.z), v3, LODWORD(v6));
  v8(this, &this->mv->m_vecAbsOrigin, &start, v12, 11, &trace);
  v13 = this->_vptr_IGameMovement;
  start.x = trace.endpos.x;
  start.y = trace.endpos.y;
  v14 = v13[13];
  start.z = trace.endpos.z;
  v15 = (v13[14])(this, 0, 0);
  v14(this, &start, &end, v15, 11, &trace);
  if ( trace.fraction > 0.0 && trace.fraction < 1.0 && !trace.startsolid )
  {
    z = trace.plane.normal.z;
    if ( z >= (*(this->_vptr_IGameMovement + 12))(this) )
    {
      v17 = this->mv;
      if ( fabs(v17->m_vecAbsOrigin.z - trace.endpos.z) > 0.015625 )
      {
        x = trace.endpos.x;
        v17->m_vecAbsOrigin.z = trace.endpos.z;
        v17->m_vecAbsOrigin.x = x;
        v17->m_vecAbsOrigin.y = trace.endpos.y;
      }
    }
  }
}


// CGameMovement::WalkMove  (line 1597, @0x000000000225f700, libserver.so)  // inlines: CEntityHandle, CGameTrace, CHandle, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, RnCollisionAttr_t, Set, SetAbsOrigin, VectorAdd, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator*, operator+=, operator=, operator==<CBaseEntity>
// calls: CGameTrace::Init, AngleVectors, CBaseEntity::GetGroundEntity, VectorNormalize, CGameMovement::Accelerate
// globals: g_bMovementOptimizations, CEntityHandle::gm_pEntityList
void __fastcall CGameMovement::WalkMove(CGameMovement *const this)
{
  CBaseEntity *GroundEntity; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  CMoveData *mv; // rax
  float m_flForwardMove; // xmm1_4
  float m_flSideMove; // xmm2_4
  double v8; // xmm0_8
  CMoveData *v9; // rax
  double v10; // xmm2_8
  CMoveData *v11; // rax
  CBasePlayer *player; // rdx
  CMoveData *v13; // rax
  float x; // xmm4_4
  float y; // xmm3_4
  float frametime; // xmm0_4
  vec_t v17; // xmm4_4
  vec_t v18; // xmm3_4
  int (**vptr_IGameMovement)(...); // rax
  int (*v20)(...); // r14
  __int64 v21; // rax
  double v22; // xmm3_8
  double v23; // xmm4_8
  double v24; // xmm5_8
  double v25; // xmm6_8
  CMoveData *v26; // rax
  bool v27; // zf
  double v28; // xmm1_8
  double v29; // xmm0_8
  double v30; // xmm2_8
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CBasePlayer *v33; // rdx
  CMoveData *v34; // rax
  double v35; // xmm0_8
  CMoveData *v36; // rax
  CBasePlayer *v37; // rdx
  float wishspeed; // [rsp+4h] [rbp-13Ch]
  float wishspeedb; // [rsp+4h] [rbp-13Ch]
  float wishspeeda; // [rsp+4h] [rbp-13Ch]
  float wishspeedc; // [rsp+4h] [rbp-13Ch]
  float fmovea; // [rsp+8h] [rbp-138h]
  float fmove; // [rsp+8h] [rbp-138h]
  float fmoveb; // [rsp+8h] [rbp-138h]
  int oldground; // [rsp+10h] [rbp-130h]
  Vector wishdir; // [rsp+20h] [rbp-120h] BYREF
  Vector dest; // [rsp+30h] [rbp-110h] BYREF
  Vector forward; // [rsp+40h] [rbp-100h] BYREF
  Vector right; // [rsp+50h] [rbp-F0h] BYREF
  Vector up; // [rsp+60h] [rbp-E0h] BYREF
  trace_t pm; // [rsp+70h] [rbp-D0h] BYREF

  memset(&pm.m_ShapeAttributes, 0, 31);
  pm.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&pm);
  AngleVectors(&this->mv->m_vecViewAngles, &forward, &right, &up);
  oldground = -1;
  GroundEntity = CBaseEntity::GetGroundEntity(this->player);
  if ( GroundEntity != 0 )
  {
    m_pEntity = GroundEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      oldground = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  mv = this->mv;
  m_flForwardMove = mv->m_flForwardMove;
  m_flSideMove = mv->m_flSideMove;
  if ( g_bMovementOptimizations )
  {
    if ( forward.z != 0.0 )
    {
      wishspeeda = mv->m_flSideMove;
      fmove = mv->m_flForwardMove;
      forward.z = 0.0;
      VectorNormalize(&forward);
      m_flSideMove = wishspeeda;
      m_flForwardMove = fmove;
    }
    if ( right.z != 0.0 )
    {
      wishspeedb = m_flSideMove;
      fmovea = m_flForwardMove;
      right.z = 0.0;
      VectorNormalize(&right);
      m_flForwardMove = fmovea;
      m_flSideMove = wishspeedb;
    }
  }
  else
  {
    wishspeedc = mv->m_flSideMove;
    fmoveb = mv->m_flForwardMove;
    forward.z = 0.0;
    right.z = 0.0;
    VectorNormalize(&forward);
    VectorNormalize(&right);
    m_flSideMove = wishspeedc;
    m_flForwardMove = fmoveb;
  }
  wishdir.z = 0.0;
  wishdir.y = (forward.y * m_flForwardMove) + (right.y * m_flSideMove);
  wishdir.x = (m_flForwardMove * forward.x) + (m_flSideMove * right.x);
  *&v8 = VectorNormalize(&wishdir);
  v9 = this->mv;
  v10 = v8;
  if ( *&v8 != 0.0 )
  {
    *&v35 = LODWORD(v9->m_flMaxSpeed);
    *&v35 = fminf(*&v35, *&v10);
    v10 = v35;
  }
  v9->m_vecVelocity.z = 0.0;
  wishspeed = *&v10;
  CGameMovement::Accelerate(this, &wishdir, v10, sv_accelerate.m_pParent->m_Value.m_fValue, *&v10);
  this->mv->m_vecVelocity.z = 0.0;
  v11 = this->mv;
  player = this->player;
  v11->m_vecVelocity.x = v11->m_vecVelocity.x + player->m_vecBaseVelocity.m_Value.x;
  v11->m_vecVelocity.y = v11->m_vecVelocity.y + player->m_vecBaseVelocity.m_Value.y;
  v11->m_vecVelocity.z = v11->m_vecVelocity.z + player->m_vecBaseVelocity.m_Value.z;
  v13 = this->mv;
  x = v13->m_vecVelocity.x;
  y = v13->m_vecVelocity.y;
  if ( fsqrt(((x * x) + (y * y)) + (v13->m_vecVelocity.z * v13->m_vecVelocity.z)) < 1.0 )
  {
    v13->m_vecVelocity.x = 0.0;
    v13->m_vecVelocity.y = 0.0;
    v13->m_vecVelocity.z = 0.0;
    v33 = this->player;
    goto LABEL_20;
  }
  frametime = gpGlobals->frametime;
  dest.z = v13->m_vecAbsOrigin.z;
  v17 = (x * frametime) + v13->m_vecAbsOrigin.x;
  v18 = (y * frametime) + v13->m_vecAbsOrigin.y;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  dest.x = v17;
  dest.y = v18;
  v20 = vptr_IGameMovement[13];
  v21 = (vptr_IGameMovement[14])(this, 0, 0);
  v20(this, &this->mv->m_vecAbsOrigin, &dest, v21, 11, &pm);
  *&v30 = LODWORD(wishspeed);
  *&v28 = LODWORD(wishdir.y);
  *&v29 = LODWORD(wishdir.z);
  v26 = this->mv;
  v27 = pm.fraction == 1.0;
  *&v28 = (wishdir.y * wishspeed) + v26->m_outWishVel.y;
  *&v29 = (wishdir.z * wishspeed) + v26->m_outWishVel.z;
  *&v30 = (wishspeed * wishdir.x) + v26->m_outWishVel.x;
  v26->m_outWishVel.y = *&v28;
  v26->m_outWishVel.z = *&v29;
  v26->m_outWishVel.x = *&v30;
  if ( v27 )
  {
    this->mv->m_vecAbsOrigin = pm.endpos;
    goto LABEL_29;
  }
  if ( (oldground + 2) > 1
    && (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(oldground >> 9) & 0x3F]) != 0
    && (v32 = &v31[oldground & 0x1FF]) != 0
    && oldground == v32->m_EHandle.m_Index
    && v32->m_pInstance != 0 )
  {
    v33 = this->player;
  }
  else
  {
    v33 = this->player;
    if ( v33->m_nWaterLevel.m_Value == 0 )
    {
LABEL_20:
      v34 = this->mv;
      v34->m_vecVelocity.x = v34->m_vecVelocity.x - v33->m_vecBaseVelocity.m_Value.x;
      v34->m_vecVelocity.y = v34->m_vecVelocity.y - v33->m_vecBaseVelocity.m_Value.y;
      v34->m_vecVelocity.z = v34->m_vecVelocity.z - v33->m_vecBaseVelocity.m_Value.z;
      return;
    }
  }
  if ( v33->m_flWaterJumpTime != 0.0 )
    goto LABEL_20;
  (*(this->_vptr_IGameMovement + 76))(this, &dest, &pm, v29, v28, v30, v22, v23, v24, v25, 0.0);
LABEL_29:
  v36 = this->mv;
  v37 = this->player;
  v36->m_vecVelocity.x = v36->m_vecVelocity.x - v37->m_vecBaseVelocity.m_Value.x;
  v36->m_vecVelocity.y = v36->m_vecVelocity.y - v37->m_vecBaseVelocity.m_Value.y;
  v36->m_vecVelocity.z = v36->m_vecVelocity.z - v37->m_vecBaseVelocity.m_Value.z;
  (*(this->_vptr_IGameMovement + 28))(this);
}


// CGameMovement::FullWalkMove  (line 1727, @0x0000000002277c50, libserver.so)  // inlines: GetWaterLevel, NetworkStateChanged, Set, operator=<float>
// calls: CBaseEntity::GetGroundEntity, CGameMovement::CheckVelocity
// strings: "FullWalkMovePreMove", "FullWalkMovePostMove"
void __fastcall CGameMovement::FullWalkMove(CGameMovement *const this)
{
  CBasePlayer *player; // rax
  unsigned __int8 m_Value; // al
  CMoveData *v4; // rax
  CBasePlayer *v5; // rax
  CMoveData *mv; // rax
  CBasePlayer *v7; // r12
  bool v8; // zf
  int (**vptr_IGameMovement)(...); // rax
  unsigned __int8 v10; // r12
  __int64 v11; // rsi
  CBasePlayer *v12; // rdx

  if ( (*(this->_vptr_IGameMovement + 53))(this) == 0 )
    (*(this->_vptr_IGameMovement + 34))(this);
  player = this->player;
  if ( player->m_flWaterJumpTime == 0.0 )
  {
    m_Value = player->m_nWaterLevel.m_Value;
    if ( m_Value <= 1u )
    {
      mv = this->mv;
      if ( (mv->m_nButtons & 2) != 0 )
        (*(this->_vptr_IGameMovement + 37))(this);
      else
        mv->m_nOldButtons &= ~2u;
      (*(this->_vptr_IGameMovement + 38))(this);
      if ( CBaseEntity::GetGroundEntity(this->player) != 0 )
      {
        this->mv->m_vecVelocity.z = 0.0;
        v7 = this->player;
        if ( v7->m_Local.m_flFallVelocity.m_Value != 0.0 )
        {
          (*(v7->m_Local._vptr_CPlayerLocalData + 2))(&v7->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v7->m_Local.m_flFallVelocity.m_Value = 0.0;
        }
        (*(this->_vptr_IGameMovement + 22))(this);
      }
      CGameMovement::CheckVelocity(this, "FullWalkMovePreMove");
      v8 = CBaseEntity::GetGroundEntity(this->player) == 0;
      vptr_IGameMovement = this->_vptr_IGameMovement;
      if ( v8 )
      {
        vptr_IGameMovement[24](this);
        v11 = 0;
      }
      else
      {
        v10 = vptr_IGameMovement[27](this);
        (*(this->_vptr_IGameMovement + 26))(this);
        v11 = v10;
      }
      (*(this->_vptr_IGameMovement + 55))(this, v11);
      CGameMovement::CheckVelocity(this, "FullWalkMovePostMove");
      if ( (*(this->_vptr_IGameMovement + 53))(this) == 0 )
        (*(this->_vptr_IGameMovement + 35))(this);
      if ( CBaseEntity::GetGroundEntity(this->player) != 0 )
        this->mv->m_vecVelocity.z = 0.0;
      (*(this->_vptr_IGameMovement + 58))(this);
    }
    else
    {
      if ( m_Value == 2 )
        (*(this->_vptr_IGameMovement + 18))(this);
      v4 = this->mv;
      if ( v4->m_vecVelocity.z < 0.0 )
      {
        v12 = this->player;
        if ( v12->m_flWaterJumpTime != 0.0 )
        {
          v12->m_flWaterJumpTime = 0.0;
          v4 = this->mv;
        }
      }
      if ( (v4->m_nButtons & 2) != 0 )
        (*(this->_vptr_IGameMovement + 37))(this);
      else
        v4->m_nOldButtons &= ~2u;
      (*(this->_vptr_IGameMovement + 38))(this);
      (*(this->_vptr_IGameMovement + 19))(this);
      (*(this->_vptr_IGameMovement + 55))(this, 0);
      if ( CBaseEntity::GetGroundEntity(this->player) != 0 )
        this->mv->m_vecVelocity.z = 0.0;
    }
    v5 = this->player;
    if ( this->m_nOldWaterLevel != 0 )
    {
      if ( v5->m_nWaterLevel.m_Value == 0 )
      {
LABEL_14:
        (*(this->_vptr_IGameMovement + 74))(this);
        (*(this->player->_vptr_IHandleEntity + 184))(this->player);
      }
    }
    else if ( v5->m_nWaterLevel.m_Value != 0 )
    {
      goto LABEL_14;
    }
  }
  else
  {
    (*(this->_vptr_IGameMovement + 21))(this);
    (*(this->_vptr_IGameMovement + 42))(this, 0, 0);
    (*(this->_vptr_IGameMovement + 53))(this);
  }
}


// CGameMovement::FullObserverMove  (line 1857, @0x0000000002277fa0, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetBool, GetFloat, GetInt, Init, SetAbsOrigin, VectorCopy, VectorLength, VectorMultiply, VectorScale, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: AngleVectors, VectorNormalize, CGameMovement::Accelerate, CGameMovement::CheckVelocity, CGameMovement::FullNoClipMove, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::CalcAbsoluteVelocity
// callers: CGameMovement::PlayerMove
// strings: "FullObserverMove"
void __fastcall CGameMovement::FullObserverMove(CGameMovement *const this)
{
  int v2; // eax
  float v3; // xmm2_4
  float m_fValue; // xmm3_4
  CMoveData *mv; // rax
  CMoveData *v6; // rax
  vec_t v7; // xmm0_4
  float v8; // xmm1_4
  double v9; // xmm0_8
  float v10; // xmm2_4
  CMoveData *v11; // rax
  float x; // xmm4_4
  float y; // xmm3_4
  float z; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  const CBaseEntity *v17; // rax
  CBaseEntity *v18; // r12
  CMoveData *v19; // rax
  float fmove; // [rsp+8h] [rbp-68h]
  float smove; // [rsp+Ch] [rbp-64h]
  Vector forward; // [rsp+10h] [rbp-60h] BYREF
  Vector right; // [rsp+20h] [rbp-50h] BYREF
  Vector up; // [rsp+30h] [rbp-40h] BYREF
  Vector wishdir; // [rsp+40h] [rbp-30h] BYREF

  v2 = (*(this->player->_vptr_IHandleEntity + 436))(this->player);
  if ( (v2 - 4) > 1 )
  {
    if ( v2 != 6 )
      return;
    goto LABEL_3;
  }
  v17 = (*(this->player->_vptr_IHandleEntity + 439))(this->player);
  v18 = v17;
  if ( v17 == 0 )
  {
LABEL_3:
    if ( sv_specnoclip.m_pParent->m_Value.m_nValue != 0 )
    {
      CGameMovement::FullNoClipMove(
        this,
        sv_specspeed.m_pParent->m_Value.m_fValue,
        sv_specaccelerate.m_pParent->m_Value.m_fValue,
        v3);
    }
    else
    {
      AngleVectors(&this->mv->m_vecViewAngles, &forward, &right, &up);
      m_fValue = sv_specspeed.m_pParent->m_Value.m_fValue;
      mv = this->mv;
      if ( (mv->m_nButtons & 0x10000) != 0 )
        m_fValue = m_fValue * 0.5;
      fmove = mv->m_flForwardMove * m_fValue;
      smove = m_fValue * mv->m_flSideMove;
      VectorNormalize(&forward);
      VectorNormalize(&right);
      v6 = this->mv;
      wishdir.y = (forward.y * fmove) + (right.y * smove);
      v7 = ((forward.z * fmove) + (right.z * smove)) + v6->m_flUpMove;
      wishdir.x = (fmove * forward.x) + (smove * right.x);
      wishdir.z = v7;
      v8 = VectorNormalize(&wishdir);
      *&v9 = LODWORD(sv_maxvelocity.m_pParent->m_Value.m_fValue);
      *&v9 = fminf(*&v9, v8);
      CGameMovement::Accelerate(this, &wishdir, v9, sv_specaccelerate.m_pParent->m_Value.m_fValue, v10);
      v11 = this->mv;
      x = v11->m_vecVelocity.x;
      y = v11->m_vecVelocity.y;
      z = v11->m_vecVelocity.z;
      v15 = fsqrt(((x * x) + (y * y)) + (z * z));
      if ( v15 < 1.0 )
      {
        v11->m_vecVelocity.x = 0.0;
        v11->m_vecVelocity.y = 0.0;
        v11->m_vecVelocity.z = 0.0;
      }
      else
      {
        v16 = fmaxf(0.0, v15 - ((sv_friction.m_pParent->m_Value.m_fValue * v15) * gpGlobals->frametime)) / v15;
        v11->m_vecVelocity.x = x * v16;
        v11->m_vecVelocity.y = y * v16;
        v11->m_vecVelocity.z = v16 * z;
        CGameMovement::CheckVelocity(this, "FullObserverMove");
        (*(this->_vptr_IGameMovement + 42))(this, 0, 0);
      }
    }
    return;
  }
  this->mv->m_vecAbsOrigin = *CBaseEntity::GetAbsOrigin(v17);
  this->mv->m_vecViewAngles = *CBaseEntity::GetAbsAngles(v18);
  if ( (v18->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(v18);
  v19 = this->mv;
  v19->m_vecVelocity.x = v18->m_vecAbsVelocity.m_Value.x;
  v19->m_vecVelocity.y = v18->m_vecAbsVelocity.m_Value.y;
  v19->m_vecVelocity.z = v18->m_vecAbsVelocity.m_Value.z;
}


// CGameMovement::FullNoClipMove  (line 1970, @0x000000000225fd00, libserver.so)  // inlines: FastSqrt, GetFloat, Init, SetAbsOrigin, VectorCopy, VectorLength, VectorMA, VectorMultiply, VectorScale, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: AngleVectors, VectorNormalize, CGameMovement::Accelerate
// callers: CGameMovement::FullObserverMove, CGameMovement::PlayerMove
void __fastcall CGameMovement::FullNoClipMove(CGameMovement *const this, float a2, float factor, float maxacceleration)
{
  CMoveData *mv; // rax
  float v6; // xmm2_4
  float m_flForwardMove; // xmm6_4
  float m_flSideMove; // xmm5_4
  bool v9; // r13
  float v10; // xmm2_4
  double v11; // xmm0_8
  float z; // xmm2_4
  float y; // xmm1_4
  float x; // xmm3_4
  float v15; // xmm7_4
  CMoveData *v16; // rax
  __m128 v17; // xmm4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  double v23; // xmm5_8
  float v24; // xmm5_4
  __m128 v25; // xmm6
  CGlobalVars *v26; // rdx
  float v27; // xmm6_4
  CMoveData *v28; // rax
  float frametime; // xmm2_4
  vec_t v30; // xmm1_4
  vec_t v31; // xmm0_4
  vec_t v32; // xmm2_4
  CMoveData *v33; // rax
  float fmovea; // [rsp+Ch] [rbp-74h]
  float v35; // [rsp+10h] [rbp-70h]
  float smovea; // [rsp+14h] [rbp-6Ch]
  float smoveb; // [rsp+14h] [rbp-6Ch]
  float maxspeed; // [rsp+1Ch] [rbp-64h]
  Vector forward; // [rsp+20h] [rbp-60h] BYREF
  Vector right; // [rsp+30h] [rbp-50h] BYREF
  Vector up; // [rsp+40h] [rbp-40h] BYREF
  Vector wishdir; // [rsp+50h] [rbp-30h] BYREF
  Vector fmove; // 0:^C.12

  maxspeed = a2 * sv_maxspeed.m_pParent->m_Value.m_fValue;
  AngleVectors(&this->mv->m_vecViewAngles, &forward, &right, &up);
  mv = this->mv;
  v6 = a2;
  if ( (mv->m_nButtons & 0x10000) != 0 )
    v6 = a2 * 0.5;
  m_flForwardMove = mv->m_flForwardMove;
  m_flSideMove = mv->m_flSideMove;
  v9 = m_flForwardMove != 0.0 || m_flSideMove != 0.0;
  v35 = v6;
  fmovea = m_flForwardMove * v6;
  smovea = m_flSideMove * v6;
  VectorNormalize(&forward);
  VectorNormalize(&right);
  v10 = v35 * this->mv->m_flUpMove;
  wishdir.x = (forward.x * fmovea) + (right.x * smovea);
  wishdir.y = (forward.y * fmovea) + (right.y * smovea);
  wishdir.z = v10 + ((fmovea * forward.z) + (smovea * right.z));
  fmove = wishdir;
  *&v11 = VectorNormalize(&wishdir);
  z = fmove.z;
  y = fmove.y;
  x = fmove.x;
  if ( *&v11 > maxspeed )
  {
    v15 = maxspeed / *&v11;
    *&v11 = LODWORD(maxspeed);
    x = fmove.x * v15;
    y = fmove.y * v15;
    z = fmove.z * v15;
  }
  if ( factor <= 0.0 )
  {
    v33 = this->mv;
    v33->m_vecVelocity.x = x;
    v33->m_vecVelocity.y = y;
    v33->m_vecVelocity.z = z;
    v26 = gpGlobals;
  }
  else
  {
    CGameMovement::Accelerate(this, &wishdir, v11, factor, z);
    v16 = this->mv;
    v17.m128_i32[0] = 0;
    v18 = v16->m_vecVelocity.x;
    v19 = v16->m_vecVelocity.y;
    v20 = v16->m_vecVelocity.z;
    smoveb = ((v18 * v18) + (v19 * v19)) + (v20 * v20);
    v21 = LODWORD(smoveb);
    v21.m128_f32[0] = fsqrt(smoveb);
    if ( v21.m128_f32[0] < 1.0 )
    {
LABEL_18:
      v16->m_vecVelocity.x = 0.0;
      v16->m_vecVelocity.y = 0.0;
      v16->m_vecVelocity.z = 0.0;
      return;
    }
    v22 = _mm_unpacklo_ps(v21, v21);
    v23 = maxspeed * 0.25;
    if ( v23 <= v22.m128_f32[0] )
      v24 = v22.m128_f32[0];
    else
      v24 = v23;
    v25 = v22;
    v26 = gpGlobals;
    if ( !v9 )
    {
      v25.m128_f32[0] = v22.m128_f32[0] - ((v24 * sv_noclipfriction.m_pParent->m_Value.m_fValue) * gpGlobals->frametime);
      v25.m128_i32[0] &= _mm_cmpge_ss(v25, v17).m128_u32[0];
    }
    v27 = v25.m128_f32[0] / v22.m128_f32[0];
    v16->m_vecVelocity.x = v18 * v27;
    v16->m_vecVelocity.y = v19 * v27;
    v16->m_vecVelocity.z = v20 * v27;
  }
  v28 = this->mv;
  frametime = v26->frametime;
  v30 = (v28->m_vecVelocity.y * frametime) + v28->m_vecAbsOrigin.y;
  v31 = (v28->m_vecVelocity.z * frametime) + v28->m_vecAbsOrigin.z;
  v32 = (frametime * v28->m_vecVelocity.x) + v28->m_vecAbsOrigin.x;
  v28->m_vecAbsOrigin.y = v30;
  v28->m_vecAbsOrigin.z = v31;
  v28->m_vecAbsOrigin.x = v32;
  if ( factor < 0.0 )
  {
    v16 = this->mv;
    goto LABEL_18;
  }
}


// CGameMovement::PlaySwimSound  (line 2076, @0x0000000002253aa0, libserver.so)  // inlines: GetSingleton, MoveHelper
// strings: "Player.Swim"
void __fastcall CGameMovement::PlaySwimSound(CGameMovement *const this)
{
  (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 8))(
    IMoveHelper::sm_pSingleton,
    &this->mv->m_vecAbsOrigin,
    "Player.Swim");
}


// CGameMovement::CheckJumpButton  (line 2085, @0x0000000002257f10, libserver.so)  // inlines: GetFloat, GetSingleton, GetWaterLevel, MoveHelper, NetworkStateChanged, Set, operator=<bool>, operator=<int>
// calls: CBaseEntity::GetWaterType, CBaseEntity::GetGroundEntity, sqrtf
// globals: g_bMovementOptimizations
bool __fastcall CGameMovement::CheckJumpButton(CGameMovement *const this)
{
  CBasePlayer *player; // rdi
  char deadflag; // bl
  float m_flWaterJumpTime; // xmm1_4
  CBasePlayer *v5; // rax
  CBasePlayer *v7; // rax
  CBasePlayer *v8; // rax
  CBasePlayer *v9; // rbx
  const CPhysSurfaceProperties *m_pSurfaceData; // rax
  float m_flJumpFactor; // xmm2_4
  float v12; // xmm0_4
  CMoveData *mv; // rax
  float z; // xmm1_4
  CBasePlayer *v15; // rbx
  float startz; // [rsp+Ch] [rbp-14h]

  player = this->player;
  deadflag = player->m_pl.deadflag;
  if ( deadflag != 0 )
  {
    this->mv->m_nOldButtons |= 2u;
    return 0;
  }
  else
  {
    m_flWaterJumpTime = player->m_flWaterJumpTime;
    if ( m_flWaterJumpTime == 0.0 )
    {
      if ( player->m_nWaterLevel.m_Value <= 1u )
      {
        if ( CBaseEntity::GetGroundEntity(player) != 0 )
        {
          v8 = this->player;
          if ( !v8->m_Local.m_bSlowMovement.m_Value
            && (this->mv->m_nOldButtons & 2) == 0
            && (!v8->m_Local.m_bDucking.m_Value || (v8->m_fFlags.m_Value & 2) == 0)
            && v8->m_Local.m_nDuckJumpTimeMsecs.m_Value == 0 )
          {
            (*(this->_vptr_IGameMovement + 75))(this, 0);
            (*(this->player->_vptr_IHandleEntity + 419))(
              this->player,
              &this->mv->m_vecAbsOrigin,
              this->player->m_pSurfaceData,
              1,
              1.0);
            (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 11))(IMoveHelper::sm_pSingleton, 2);
            v9 = this->player;
            m_pSurfaceData = v9->m_pSurfaceData;
            if ( m_pSurfaceData != 0 )
              m_flJumpFactor = m_pSurfaceData->m_gameProperties.m_flJumpFactor;
            else
              m_flJumpFactor = 1.0;
            v12 = 268.32816;
            if ( !g_bMovementOptimizations )
              v12 = fsqrt((sv_gravity.m_pParent->m_Value.m_fValue + sv_gravity.m_pParent->m_Value.m_fValue) * 21.0);
            mv = this->mv;
            z = mv->m_vecVelocity.z;
            if ( v9->m_Local.m_bDucking.m_Value || (v9->m_fFlags.m_Value & 2) != 0 )
              mv->m_vecVelocity.z = v12 * m_flJumpFactor;
            else
              mv->m_vecVelocity.z = (v12 * m_flJumpFactor) + z;
            startz = z;
            (*(this->_vptr_IGameMovement + 35))(this);
            this->mv->m_outJumpVel.z = (this->mv->m_vecVelocity.z - startz) + this->mv->m_outJumpVel.z;
            this->mv->m_outStepHeight = this->mv->m_outStepHeight + 0.15000001;
            if ( gpGlobals->maxClients == 1 )
            {
              v15 = this->player;
              if ( v15->m_Local.m_nJumpTimeMsecs.m_Value != 510 )
              {
                (*(v15->m_Local._vptr_CPlayerLocalData + 2))(&v15->m_Local, 120, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                v15->m_Local.m_nJumpTimeMsecs.m_Value = 510;
                v15 = this->player;
              }
              if ( !v15->m_Local.m_bInDuckJump.m_Value )
              {
                (*(v15->m_Local._vptr_CPlayerLocalData + 2))(&v15->m_Local, 110, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                v15->m_Local.m_bInDuckJump.m_Value = 1;
              }
            }
            deadflag = 1;
            this->mv->m_nOldButtons |= 2u;
          }
        }
        else
        {
          this->mv->m_nOldButtons |= 2u;
        }
      }
      else
      {
        (*(this->_vptr_IGameMovement + 75))(this, 0);
        if ( CBaseEntity::GetWaterType(this->player) == 0x8000 )
        {
          this->mv->m_vecVelocity.z = 100.0;
        }
        else if ( CBaseEntity::GetWaterType(this->player) == 0x10000 )
        {
          this->mv->m_vecVelocity.z = 80.0;
        }
        v7 = this->player;
        if ( v7->m_flSwimSoundTime <= 0.0 )
        {
          v7->m_flSwimSoundTime = 1000.0;
          (*(this->_vptr_IGameMovement + 74))(this);
        }
      }
    }
    else
    {
      player->m_flWaterJumpTime = m_flWaterJumpTime - gpGlobals->frametime;
      v5 = this->player;
      if ( v5->m_flWaterJumpTime < 0.0 )
        v5->m_flWaterJumpTime = 0.0;
    }
    return deadflag;
  }
}


// CGameMovement::FullLadderMove  (line 2280, @0x0000000002253ad0, libserver.so)  // inlines: VectorAdd, VectorSubtract
void __fastcall CGameMovement::FullLadderMove(CGameMovement *const this)
{
  CMoveData *mv; // rax
  CMoveData *v3; // rax
  CBasePlayer *player; // rdx
  CMoveData *v5; // rax
  CBasePlayer *v6; // rdx

  (*(this->_vptr_IGameMovement + 53))(this);
  mv = this->mv;
  if ( (mv->m_nButtons & 2) != 0 )
    (*(this->_vptr_IGameMovement + 37))(this);
  else
    mv->m_nOldButtons &= ~2u;
  (*(this->_vptr_IGameMovement + 38))(this);
  v3 = this->mv;
  player = this->player;
  v3->m_vecVelocity.x = v3->m_vecVelocity.x + player->m_vecBaseVelocity.m_Value.x;
  v3->m_vecVelocity.y = v3->m_vecVelocity.y + player->m_vecBaseVelocity.m_Value.y;
  v3->m_vecVelocity.z = v3->m_vecVelocity.z + player->m_vecBaseVelocity.m_Value.z;
  (*(this->_vptr_IGameMovement + 42))(this, 0, 0);
  v5 = this->mv;
  v6 = this->player;
  v5->m_vecVelocity.x = v5->m_vecVelocity.x - v6->m_vecBaseVelocity.m_Value.x;
  v5->m_vecVelocity.y = v5->m_vecVelocity.y - v6->m_vecBaseVelocity.m_Value.y;
  v5->m_vecVelocity.z = v5->m_vecVelocity.z - v6->m_vecBaseVelocity.m_Value.z;
}


// CGameMovement::TryPlayerMove  (line 2307, @0x000000000225bee0, libserver.so)  // inlines: CGameTrace, CrossProduct, Dot, DotProduct, FastSqrt, GetFloat, GetSingleton, Init, Length, Length2D, MoveHelper, NormalizeInPlace, RnCollisionAttr_t, SetAbsOrigin, VectorCopy, VectorLength, VectorMA, VectorMultiply, VectorScale, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=, operator==
// calls: CGameTrace::Init, CBaseEntity::GetGroundEntity, VectorNormalize
// globals: g_bMovementOptimizations
int __fastcall CGameMovement::TryPlayerMove(CGameMovement *const this, Vector *pFirstDest, trace_t *pFirstTrace)
{
  int v3; // r15d
  float v5; // xmm2_4
  CMoveData *mv; // rdx
  vec_t z; // xmm7_4
  float x; // xmm4_4
  float v9; // xmm1_4
  float frametime; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  void (__fastcall *v15)(CGameMovement *const, Vector *, Vector *, __int64, __int64, trace_t *); // r13
  __int64 v16; // rax
  float fraction; // xmm0_4
  float v18; // r12d
  float v19; // xmm0_4
  int v20; // eax
  bool v21; // cc
  vec_t v22; // xmm0_4
  int v23; // edi
  int v24; // eax
  __int64 v25; // rax
  Vector *v26; // rax
  vec_t v27; // xmm1_4
  Vector *v28; // r12
  int v29; // r14d
  Vector *v30; // rax
  int v31; // ecx
  uint8 type; // al
  vec_t v33; // xmm0_4
  uint8 signbits; // al
  vec_t v35; // xmm0_4
  __int16 v36; // ax
  vec_t v37; // xmm0_4
  uint64 contents; // rax
  vec_t v39; // xmm0_4
  float dist; // xmm0_4
  const CPhysSurfaceProperties *m_pSurfaceProperties; // rax
  CBaseEntity *m_pEnt; // rax
  vec_t v43; // xmm1_4
  const CHitBox *m_pHitbox; // rax
  vec_t v45; // xmm1_4
  IPhysicsBody *m_hBody; // rax
  vec_t v47; // xmm1_4
  IPhysicsShape *m_hShape; // rax
  float v49; // xmm1_4
  void (__fastcall *v51)(CGameMovement *const, Vector *, Vector *, __int64, __int64, trace_t *); // r13
  __int64 v52; // rax
  int (**vptr_IGameMovement)(...); // rax
  Vector *p_m_vecAbsOrigin; // rsi
  CBasePlayer *player; // rdi
  CBaseEntity *GroundEntity; // rax
  float v57; // xmm0_4
  int (**v58)(...); // rax
  vec_t v59; // xmm0_4
  vec_t v60; // xmm1_4
  vec_t v61; // xmm3_4
  CMoveData *v62; // rax
  void (__fastcall *v63)(CGameMovement *const, Vector *, Vector *, __int64, __int64, trace_t *); // r12
  __int64 v64; // rax
  CMoveData *v65; // rax
  float v66; // xmm0_4
  vec_t v67; // xmm4_4
  vec_t v68; // xmm3_4
  vec_t v69; // xmm0_4
  float v71; // [rsp+Ch] [rbp-254h]
  float y; // [rsp+10h] [rbp-250h]
  float v73; // [rsp+14h] [rbp-24Ch]
  int v75; // [rsp+20h] [rbp-240h]
  float v76; // [rsp+24h] [rbp-23Ch]
  float time_left; // [rsp+30h] [rbp-230h]
  float allFraction; // [rsp+34h] [rbp-22Ch]
  int blocked; // [rsp+38h] [rbp-228h]
  float v80; // [rsp+44h] [rbp-21Ch]
  float v81; // [rsp+44h] [rbp-21Ch]
  float v82; // [rsp+48h] [rbp-218h]
  float v83; // [rsp+48h] [rbp-218h]
  float v84; // [rsp+48h] [rbp-218h]
  Vector dir; // [rsp+50h] [rbp-210h] BYREF
  Vector original_velocity; // [rsp+60h] [rbp-200h] BYREF
  Vector new_velocity; // [rsp+70h] [rbp-1F0h] BYREF
  Vector end; // [rsp+80h] [rbp-1E0h] BYREF
  Vector planes[5]; // [rsp+90h] [rbp-1D0h] BYREF
  trace_t pm; // [rsp+D0h] [rbp-190h] BYREF
  trace_t stuck; // [rsp+180h] [rbp-E0h] BYREF

  v3 = 0;
  memset(&pm.m_ShapeAttributes, 0, 31);
  pm.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&pm);
  v5 = 0.0;
  mv = this->mv;
  new_velocity.x = 0.0;
  new_velocity.y = 0.0;
  new_velocity.z = 0.0;
  v75 = 4;
  allFraction = 0.0;
  blocked = 0;
  z = mv->m_vecVelocity.z;
  x = mv->m_vecVelocity.x;
  y = mv->m_vecVelocity.y;
  v9 = y;
  frametime = gpGlobals->frametime;
  original_velocity.y = y;
  v11 = z;
  v73 = x;
  original_velocity.x = x;
  v71 = z;
  original_velocity.z = z;
  time_left = frametime;
  while ( fsqrt(((x * x) + (v9 * v9)) + (v11 * v11)) != v5 )
  {
    v12 = (x * time_left) + mv->m_vecAbsOrigin.x;
    v13 = (v9 * time_left) + mv->m_vecAbsOrigin.y;
    v14 = (v11 * time_left) + mv->m_vecAbsOrigin.z;
    end.x = v12;
    end.y = v13;
    end.z = v14;
    if ( g_bMovementOptimizations )
    {
      if ( pFirstDest != 0 && v12 == pFirstDest->x && v13 == pFirstDest->y && v14 == pFirstDest->z )
      {
        type = pFirstTrace->plane.type;
        pm.startpos.x = pFirstTrace->startpos.x;
        v33 = pFirstTrace->startpos.y;
        pm.plane.type = type;
        signbits = pFirstTrace->plane.signbits;
        pm.startpos.y = v33;
        pm.startpos.z = pFirstTrace->startpos.z;
        v35 = pFirstTrace->endpos.x;
        pm.plane.signbits = signbits;
        v36 = *pFirstTrace->plane.pad;
        pm.endpos.x = v35;
        pm.endpos.y = pFirstTrace->endpos.y;
        v37 = pFirstTrace->endpos.z;
        *pm.plane.pad = v36;
        contents = pFirstTrace->contents;
        pm.endpos.z = v37;
        pm.plane.normal.x = pFirstTrace->plane.normal.x;
        v39 = pFirstTrace->plane.normal.y;
        pm.contents = contents;
        LOBYTE(contents) = pFirstTrace->startsolid;
        pm.plane.normal.y = v39;
        pm.plane.normal.z = pFirstTrace->plane.normal.z;
        dist = pFirstTrace->plane.dist;
        pm.startsolid = contents;
        m_pSurfaceProperties = pFirstTrace->m_pSurfaceProperties;
        pm.plane.dist = dist;
        fraction = pFirstTrace->fraction;
        pm.fraction = fraction;
        pm.m_pSurfaceProperties = m_pSurfaceProperties;
        m_pEnt = pFirstTrace->m_pEnt;
        pm.boneLocalPos.x = pFirstTrace->boneLocalPos.x;
        v43 = pFirstTrace->boneLocalPos.y;
        pm.m_pEnt = m_pEnt;
        m_pHitbox = pFirstTrace->m_pHitbox;
        pm.boneLocalPos.y = v43;
        pm.boneLocalPos.z = pFirstTrace->boneLocalPos.z;
        v45 = pFirstTrace->boneLocalNormal.x;
        pm.m_pHitbox = m_pHitbox;
        m_hBody = pFirstTrace->m_hBody;
        pm.boneLocalNormal.x = v45;
        pm.boneLocalNormal.y = pFirstTrace->boneLocalNormal.y;
        v47 = pFirstTrace->boneLocalNormal.z;
        pm.m_hBody = m_hBody;
        m_hShape = pFirstTrace->m_hShape;
        pm.boneLocalNormal.z = v47;
        pm.m_hShape = m_hShape;
        pm.m_ShapeAttributes = pFirstTrace->m_ShapeAttributes;
        pm.m_nFaceIndex = pFirstTrace->m_nFaceIndex;
        pm.hitboxBoneIndex = pFirstTrace->hitboxBoneIndex;
        pm.unused0 = pFirstTrace->unused0;
        goto LABEL_7;
      }
      v82 = v5;
      v15 = *(this->_vptr_IGameMovement + 13);
      v16 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
      v15(this, &this->mv->m_vecAbsOrigin, &end, v16, 11, &pm);
      fraction = pm.fraction;
      v5 = v82;
      if ( !pm.startsolid && pm.fraction < 1.0 )
      {
        vptr_IGameMovement = this->_vptr_IGameMovement;
        p_m_vecAbsOrigin = &this->mv->m_vecAbsOrigin;
        goto LABEL_54;
      }
    }
    else
    {
      v82 = v5;
      v51 = *(this->_vptr_IGameMovement + 13);
      v52 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
      v51(this, &this->mv->m_vecAbsOrigin, &end, v52, 11, &pm);
      fraction = pm.fraction;
      v5 = v82;
      if ( !pm.startsolid && pm.fraction < 1.0 )
      {
        vptr_IGameMovement = this->_vptr_IGameMovement;
        p_m_vecAbsOrigin = &this->mv->m_vecAbsOrigin;
LABEL_54:
        vptr_IGameMovement[44](this, p_m_vecAbsOrigin, &end, &pm);
        fraction = pm.fraction;
        v5 = v82;
      }
    }
LABEL_7:
    allFraction = allFraction + fraction;
    if ( fraction > 0.03125 )
    {
      if ( fraction == 1.0 )
      {
        v84 = v5;
        memset(&stuck.m_ShapeAttributes, 0, 31);
        stuck.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&stuck);
        v63 = *(this->_vptr_IGameMovement + 13);
        v64 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
        v63(this, &pm.endpos, &pm.endpos, v64, 11, &stuck);
        v5 = v84;
        if ( stuck.startsolid || stuck.fraction != 1.0 )
          goto LABEL_31;
        fraction = pm.fraction;
      }
      v3 = 0;
      this->mv->m_vecAbsOrigin = pm.endpos;
      mv = this->mv;
      original_velocity = mv->m_vecVelocity;
    }
    else
    {
      mv = this->mv;
    }
    if ( fraction == 1.0 )
      break;
    v83 = v5;
    (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 3))(IMoveHelper::sm_pSingleton, &pm, &mv->m_vecVelocity);
    v18 = pm.plane.normal.z;
    v19 = (*(this->_vptr_IGameMovement + 12))(this);
    v5 = v83;
    v20 = blocked | 1;
    v21 = v18 <= v19;
    v22 = pm.plane.normal.z;
    if ( v21 )
      v20 = blocked;
    v23 = v20;
    v24 = v20 | 2;
    if ( pm.plane.normal.z != v83 )
      v24 = v23;
    blocked = v24;
    v76 = pm.fraction;
    if ( v3 > 4 )
    {
LABEL_31:
      this->mv->m_vecVelocity = vec3_origin;
      mv = this->mv;
      break;
    }
    v25 = v3++;
    v26 = &planes[v25];
    v26->x = pm.plane.normal.x;
    v27 = pm.plane.normal.y;
    v26->z = v22;
    v26->y = v27;
    if ( v3 == 1
      && (player = this->player)->m_MoveType.m_Value == MoveType_t::MOVETYPE_WALK
      && (GroundEntity = CBaseEntity::GetGroundEntity(player), v5 = v83, GroundEntity == 0) )
    {
      v81 = planes[0].z;
      v57 = (*(this->_vptr_IGameMovement + 12))(this);
      v58 = this->_vptr_IGameMovement;
      if ( v81 <= v57 )
      {
        v58[51](
          this,
          &original_velocity,
          planes,
          &new_velocity,
          ((1.0 - this->player->m_surfaceFriction) * sv_bounce.m_pParent->m_Value.m_fValue) + 1.0);
        v61 = new_velocity.x;
        v60 = new_velocity.y;
        v59 = new_velocity.z;
      }
      else
      {
        v58[51](this, &original_velocity, planes, &new_velocity, 1.0);
        v59 = new_velocity.z;
        v60 = new_velocity.y;
        v61 = new_velocity.x;
      }
      v5 = v83;
      v62 = this->mv;
      original_velocity.x = v61;
      original_velocity.y = v60;
      original_velocity.z = v59;
      v62->m_vecVelocity.x = v61;
      v62->m_vecVelocity.y = v60;
      v62->m_vecVelocity.z = v59;
      mv = this->mv;
    }
    else
    {
      v28 = planes;
      v29 = 0;
      do
      {
        v80 = v5;
        (*(this->_vptr_IGameMovement + 51))(this, &original_velocity, v28, &this->mv->m_vecVelocity, 1.0);
        v30 = planes;
        v31 = 0;
        v5 = v80;
        do
        {
          if ( v31 != v29
            && v80 > (((this->mv->m_vecVelocity.x * v30->x) + (this->mv->m_vecVelocity.y * v30->y))
                    + (this->mv->m_vecVelocity.z * v30->z)) )
          {
            break;
          }
          ++v31;
          ++v30;
        }
        while ( v3 > v31 );
        if ( v31 == v3 )
          break;
        ++v29;
        ++v28;
      }
      while ( v3 > v29 );
      if ( v29 == v3 )
      {
        if ( v29 != 2 )
          goto LABEL_31;
        dir.x = (planes[0].y * planes[1].z) - (planes[0].z * planes[1].y);
        dir.y = (planes[0].z * planes[1].x) - (planes[1].z * planes[0].x);
        dir.z = (planes[0].x * planes[1].y) - (planes[1].x * planes[0].y);
        VectorNormalize(&dir);
        v65 = this->mv;
        v5 = v80;
        v66 = ((v65->m_vecVelocity.x * dir.x) + (v65->m_vecVelocity.y * dir.y)) + (v65->m_vecVelocity.z * dir.z);
        v67 = dir.x * v66;
        v68 = dir.y * v66;
        v69 = v66 * dir.z;
        v65->m_vecVelocity.x = v67;
        v65->m_vecVelocity.y = v68;
        v65->m_vecVelocity.z = v69;
      }
      mv = this->mv;
      if ( v5 >= (((v73 * mv->m_vecVelocity.x) + (y * mv->m_vecVelocity.y)) + (v71 * mv->m_vecVelocity.z)) )
      {
        mv->m_vecVelocity = vec3_origin;
        mv = this->mv;
        break;
      }
    }
    if ( --v75 == 0 )
      break;
    x = mv->m_vecVelocity.x;
    v9 = mv->m_vecVelocity.y;
    v11 = mv->m_vecVelocity.z;
    time_left = time_left - (v76 * time_left);
  }
  if ( allFraction == v5 )
  {
    mv->m_vecVelocity = vec3_origin;
    mv = this->mv;
  }
  v49 = fsqrt((v73 * v73) + (y * y))
      - fsqrt((mv->m_vecVelocity.x * mv->m_vecVelocity.x) + (mv->m_vecVelocity.y * mv->m_vecVelocity.y));
  if ( v49 > 1160.0 )
  {
    (*(this->_vptr_IGameMovement + 59))(this, 1.0);
  }
  else if ( v49 > 580.0 )
  {
    (*(this->_vptr_IGameMovement + 59))(this, 0.85000002);
  }
  return blocked;
}


// CGameMovement::OnLadder  (line 2575, @0x000000000227ca20, libserver.so)
bool __fastcall CGameMovement::OnLadder(CGameMovement *const this, trace_t *const trace)
{
  bool result; // al
  const CPhysSurfaceProperties *m_pSurfaceProperties; // rax

  result = 1;
  if ( (trace->contents & 0x100) == 0 )
  {
    m_pSurfaceProperties = trace->m_pSurfaceProperties;
    return m_pSurfaceProperties != 0 && m_pSurfaceProperties->m_gameProperties.m_bClimbable;
  }
  return result;
}


// CGameMovement::LadderMove  (line 2598, @0x000000000225e5b0, libserver.so)  // inlines: CGameTrace, CrossProduct, Dot, DotProduct, GetAbsVelocity, GetMoveType, Init, NetworkStateChanged, RnCollisionAttr_t, Set, SetGravity, SetMoveCollide, VectorCopy, VectorMA, VectorMultiply, VectorScale, VectorSubtract, operator!=, operator*=, operator+=, operator-, operator=, operator=<CUtlStringToken>, operator=<MoveCollide_t>
// calls: CGameTrace::Init, VectorNormalize, CGameMovement::CheckInterval, VectorVectors, CBaseEntity::SetMoveType, CGamePhysicsQueryInterface::GetPointContents, CBaseEntity::GetGroundEntity, CBaseEntity::CalcAbsoluteVelocity
bool __fastcall CGameMovement::LadderMove(CGameMovement *const this)
{
  char v2; // r13
  CBasePlayer *player; // rax
  CMoveData *mv; // rax
  float m_flForwardMove; // xmm2_4
  float m_flSideMove; // xmm3_4
  __int64 i; // rdx
  double v8; // xmm0_8
  float v9; // xmm0_4
  CMoveData *v10; // rax
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  int (**vptr_IGameMovement)(...); // rax
  int (*v14)(...); // r15
  __int64 v15; // rax
  double v16; // xmm0_8
  double v17; // xmm1_8
  double v18; // xmm2_8
  double v19; // xmm3_8
  double v20; // xmm4_8
  double v21; // xmm5_8
  double v22; // xmm6_8
  char v23; // r15
  float v24; // xmm0_4
  CMoveData *v25; // rax
  vec_t v26; // xmm1_4
  vec_t v27; // xmm0_4
  int (**v28)(...); // rax
  __int64 v29; // rax
  double v30; // xmm0_8
  double v31; // xmm1_8
  double v32; // xmm2_8
  double v33; // xmm3_8
  CBasePlayer *v34; // r12
  double v35; // xmm0_8
  uint32 m_nameHash; // r14d
  CMoveData *v37; // rax
  vec_t z; // xmm0_4
  int (**v39)(...); // rax
  __int64 v40; // rax
  bool v41; // r12
  float v42; // xmm0_4
  CMoveData *v43; // rdx
  float v44; // xmm2_4
  ButtonBitMask_t m_nButtons; // rax
  float v46; // xmm1_4
  CBaseEntity *m_pEnt; // r12
  CMoveData *v48; // rax
  float y; // xmm2_4
  float x; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm6_4
  float v54; // xmm5_4
  CMoveData *v55; // rax
  float v56; // xmm4_4
  float v57; // xmm10_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm11_4
  float v61; // xmm3_4
  CMoveData *v62; // rax
  vec_t v63; // xmm5_4
  vec_t v64; // xmm4_4
  CBaseEntity *v65; // r12
  CMoveData *v66; // rax
  CBasePlayer *v67; // r12
  CMoveData *v68; // rax
  vec_t v69; // xmm0_4
  int (*v70)(...); // [rsp+8h] [rbp-138h]
  float v71; // [rsp+8h] [rbp-138h]
  float vAbsPosition; // [rsp+10h] [rbp-130h]
  float v73; // [rsp+18h] [rbp-128h]
  Vector wishdir; // [rsp+20h] [rbp-120h] BYREF
  Vector end; // [rsp+30h] [rbp-110h] BYREF
  Vector right; // [rsp+40h] [rbp-100h] BYREF
  Vector perp; // [rsp+50h] [rbp-F0h] BYREF
  trace_t pm; // [rsp+60h] [rbp-E0h] BYREF

  memset(&pm.m_ShapeAttributes, 0, 31);
  pm.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&pm);
  if ( this->player->m_MoveType.m_Value == MoveType_t::MOVETYPE_NOCLIP )
    return 0;
  v2 = (*(this->_vptr_IGameMovement + 79))(this);
  if ( v2 == 0 )
    return 0;
  player = this->player;
  if ( player->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER )
  {
    *&v8 = 0x80000000LL;
    y = player->m_vecLadderNormal.m_Value.y;
    x = player->m_vecLadderNormal.m_Value.x;
    wishdir.z = -player->m_vecLadderNormal.m_Value.z;
    wishdir.y = -y;
    wishdir.x = -x;
  }
  else
  {
    mv = this->mv;
    m_flForwardMove = mv->m_flForwardMove;
    m_flSideMove = mv->m_flSideMove;
    if ( m_flForwardMove == 0.0 && m_flSideMove == 0.0 )
      return 0;
    for ( i = 0; i != 12; i += 4 )
      *(&wishdir.x + i) = (*(&this->m_vecForward.x + i) * m_flForwardMove) + (*(&this->m_vecRight.x + i) * m_flSideMove);
    *&v8 = VectorNormalize(&wishdir);
  }
  v9 = (*(this->_vptr_IGameMovement + 47))(this, v8);
  v10 = this->mv;
  end.x = (wishdir.x * v9) + v10->m_vecAbsOrigin.x;
  v11 = (wishdir.y * v9) + v10->m_vecAbsOrigin.y;
  v12 = (v9 * wishdir.z) + v10->m_vecAbsOrigin.z;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  end.y = v11;
  end.z = v12;
  v14 = vptr_IGameMovement[13];
  v15 = (vptr_IGameMovement[48])(this);
  v14(this, &this->mv->m_vecAbsOrigin, &end, v15, 11, &pm);
  if ( pm.fraction == 1.0 )
    return 0;
  v23 = (*(this->_vptr_IGameMovement + 46))(this, &pm, v16, v17, v18, v19, v20, v21, v22, 1.0);
  if ( v23 != 0 )
    goto LABEL_17;
  if ( this->player->m_MoveType.m_Value != MoveType_t::MOVETYPE_LADDER
    && CGameMovement::CheckInterval(this, LADDER_WEDGE) )
  {
    VectorVectors(&pm.plane.normal, &right, &perp);
    if ( (((wishdir.x * right.x) + (wishdir.y * right.y)) + (wishdir.z * right.z)) < 0.0 )
    {
      right.x = -right.x;
      right.y = -right.y;
      right.z = -right.z;
    }
    v24 = (*(this->_vptr_IGameMovement + 47))(this);
    v25 = this->mv;
    end.x = (right.x * v24) + v25->m_vecAbsOrigin.x;
    v26 = (right.y * v24) + v25->m_vecAbsOrigin.y;
    v27 = (v24 * right.z) + v25->m_vecAbsOrigin.z;
    v28 = this->_vptr_IGameMovement;
    end.y = v26;
    end.z = v27;
    v70 = v28[13];
    v29 = (v28[48])(this);
    v70(this, &this->mv->m_vecAbsOrigin, &end, v29, 11, &pm);
    if ( pm.fraction != 1.0 && (*(this->_vptr_IGameMovement + 46))(this, &pm, v30, v31, v32, v33, 1.0) != 0 )
    {
LABEL_17:
      CBaseEntity::SetMoveType(this->player, MoveType_t::MOVETYPE_LADDER, MoveCollide_t::MOVECOLLIDE_DEFAULT);
      v34 = this->player;
      if ( v34->m_MoveCollide.m_Value != MoveCollide_t::MOVECOLLIDE_DEFAULT )
      {
        (*(v34->_vptr_IHandleEntity + 22))(this->player, 340, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v34->m_MoveCollide.m_Value = MoveCollide_t::MOVECOLLIDE_DEFAULT;
        v34 = this->player;
      }
      *&v35 = LODWORD(pm.plane.normal.x);
      if ( pm.plane.normal.x != v34->m_vecLadderNormal.m_Value.x
        || (*&v35 = LODWORD(pm.plane.normal.y), pm.plane.normal.y != v34->m_vecLadderNormal.m_Value.y)
        || (*&v35 = LODWORD(pm.plane.normal.z), pm.plane.normal.z != v34->m_vecLadderNormal.m_Value.z) )
      {
        (*(v34->_vptr_IHandleEntity + 22))(v34, 3744, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v35);
        v34->m_vecLadderNormal.m_Value.x = pm.plane.normal.x;
        v34->m_vecLadderNormal.m_Value.y = pm.plane.normal.y;
        *&v35 = LODWORD(pm.plane.normal.z);
        v34->m_vecLadderNormal.m_Value.z = pm.plane.normal.z;
        v34 = this->player;
      }
      m_nameHash = pm.m_pSurfaceProperties->m_nameHash;
      if ( m_nameHash != v34->m_ladderSurfaceProps.m_Value.m_nHashCode )
      {
        (*(v34->_vptr_IHandleEntity + 22))(v34, 3740, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v35);
        v34->m_ladderSurfaceProps.m_Value.m_nHashCode = m_nameHash;
      }
      v37 = this->mv;
      right.x = v37->m_vecAbsOrigin.x;
      right.y = v37->m_vecAbsOrigin.y;
      z = v37->m_vecAbsOrigin.z;
      v39 = this->_vptr_IGameMovement;
      right.z = z;
      v40 = (v39[31])(this);
      right.z = (*(v40 + 8) - 1.0) + right.z;
      v41 = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &right, 0xFFFFFFFFFFFFFFFFLL) == 1
         || CBaseEntity::GetGroundEntity(this->player) != 0;
      this->player->m_flGravity = 0.0;
      (*(this->_vptr_IGameMovement + 49))(this);
      v43 = this->mv;
      v44 = 0.0;
      m_nButtons = v43->m_nButtons;
      if ( (m_nButtons & 0x10) != 0 )
        v44 = 0.0 - v42;
      if ( (m_nButtons & 8) != 0 )
        v44 = v44 + v42;
      v46 = 0.0;
      if ( (m_nButtons & 0x200) != 0 )
        v46 = 0.0 - v42;
      if ( (m_nButtons & 0x400) != 0 )
        v46 = v46 + v42;
      if ( (v43->m_nOldButtons & 2) == 0 && (m_nButtons & 2) != 0 )
      {
        CBaseEntity::SetMoveType(this->player, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
        v67 = this->player;
        if ( v67->m_MoveCollide.m_Value != MoveCollide_t::MOVECOLLIDE_DEFAULT )
        {
          (*(v67->_vptr_IHandleEntity + 22))(this->player, 340, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v67->m_MoveCollide.m_Value = MoveCollide_t::MOVECOLLIDE_DEFAULT;
        }
        v23 = v2;
        v68 = this->mv;
        v68->m_vecVelocity.x = pm.plane.normal.x * 270.0;
        v69 = 270.0 * pm.plane.normal.z;
        v68->m_vecVelocity.y = pm.plane.normal.y * 270.0;
        v68->m_vecVelocity.z = v69;
      }
      else
      {
        v23 = v44 != 0.0 || v46 != 0.0;
        if ( v23 == 0 )
        {
          v43->m_vecVelocity.x = 0.0;
          v43->m_vecVelocity.y = 0.0;
          m_pEnt = pm.m_pEnt;
          v43->m_vecVelocity.z = 0.0;
          if ( m_pEnt != 0 )
          {
            if ( (m_pEnt->m_iEFlags & 0x1000) != 0 )
              CBaseEntity::CalcAbsoluteVelocity(m_pEnt);
            v48 = this->mv;
            v48->m_vecVelocity.x = v48->m_vecVelocity.x + m_pEnt->m_vecAbsVelocity.m_Value.x;
            v48->m_vecVelocity.y = v48->m_vecVelocity.y + m_pEnt->m_vecAbsVelocity.m_Value.y;
            v48->m_vecVelocity.z = v48->m_vecVelocity.z + m_pEnt->m_vecAbsVelocity.m_Value.z;
          }
          return v2;
        }
        v52 = vec3_origin.y;
        v73 = (this->m_vecForward.x * v44) + (this->m_vecRight.x * v46);
        v71 = (this->m_vecForward.y * v44) + (this->m_vecRight.y * v46);
        vAbsPosition = (v44 * this->m_vecForward.z) + (v46 * this->m_vecRight.z);
        perp.x = (v52 * pm.plane.normal.z) - pm.plane.normal.y;
        perp.y = pm.plane.normal.x - (pm.plane.normal.z * vec3_origin.x);
        perp.z = (pm.plane.normal.y * vec3_origin.x) - (pm.plane.normal.x * v52);
        VectorNormalize(&perp);
        v53 = pm.plane.normal.x;
        v54 = pm.plane.normal.y;
        v55 = this->mv;
        v56 = pm.plane.normal.z;
        v57 = perp.x;
        v58 = ((v73 * pm.plane.normal.x) + (v71 * pm.plane.normal.y)) + (vAbsPosition * pm.plane.normal.z);
        v59 = perp.y * pm.plane.normal.x;
        v60 = perp.z * pm.plane.normal.x;
        v61 = pm.plane.normal.y * v58;
        v55->m_vecVelocity.x = (v73 - (pm.plane.normal.x * v58))
                             + (((pm.plane.normal.y * perp.z) - (pm.plane.normal.z * perp.y)) * -v58);
        v55->m_vecVelocity.y = (v71 - v61) + (((v56 * v57) - v60) * -v58);
        v55->m_vecVelocity.z = (vAbsPosition - (v56 * v58)) + ((v59 - (v57 * v54)) * -v58);
        if ( v41 && v58 > 0.0 )
        {
          v62 = this->mv;
          v63 = (v54 * 200.0) + v62->m_vecVelocity.y;
          v64 = (v56 * 200.0) + v62->m_vecVelocity.z;
          v62->m_vecVelocity.x = (v53 * 200.0) + v62->m_vecVelocity.x;
          v62->m_vecVelocity.y = v63;
          v62->m_vecVelocity.z = v64;
          return v23;
        }
        v65 = pm.m_pEnt;
        if ( pm.m_pEnt == 0 )
          return v2;
        if ( (pm.m_pEnt->m_iEFlags & 0x1000) != 0 )
          CBaseEntity::CalcAbsoluteVelocity(pm.m_pEnt);
        v66 = this->mv;
        v66->m_vecVelocity.x = v66->m_vecVelocity.x + v65->m_vecAbsVelocity.m_Value.x;
        v66->m_vecVelocity.y = v66->m_vecVelocity.y + v65->m_vecAbsVelocity.m_Value.y;
        v66->m_vecVelocity.z = v66->m_vecVelocity.z + v65->m_vecAbsVelocity.m_Value.z;
      }
    }
  }
  return v23;
}


// DescribeAxisFlags  (line 2939, @0x0000000002260050, libserver.so)  // inlines: CUtlString, DescribeAxis
// calls: CUtlString::operator+=, CUtlString::TrimRight, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CGameMovement::CheckVelocity
// globals: DescribeAxis(int)::s_pAxes
CUtlString __fastcall DescribeAxisFlags(CUtlString *a1, int flags)
{
  __int64 v4; // rbx

  v4 = 0;
  a1->m_pString = 0;
  do
  {
    if ( _bittest(&flags, v4) )
    {
      CUtlString::operator+=(a1, *(&DescribeAxis(int)::s_pAxes + v4));
      CUtlString::operator+=(a1, ",");
    }
    ++v4;
  }
  while ( v4 != 3 );
  CUtlString::TrimRight(a1, ",");
  return a1;
}


// CGameMovement::CheckVelocity  (line 2957, @0x0000000002277490, libserver.so)  // inlines: Element, Find, FindInsertionPosition, GetFloat, Insert, InsertAt, LeftChild, RightChild, SetAbsOrigin, String, entindex, operator(), operator=, operator[], ~CUtlString
// calls: CEntityInstance::GetEntityIndex, Plat_FloatTime, CUtlRBTree<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int, CUtlMap<CEntityIndex, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int, CUtlMap<CEntityIndex, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, DescribeAxisFlags, CUtlString::Get, DevMsg, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CGameMovement::StartGravity, CGameMovement::FinishGravity, CGameMovement::FullWalkMove, CGameMovement::FullObserverMove, CGameMovement::AddGravity, CGameMovement::FullTossMove
// strings: "CGameMovement(%s):  %d/%s Got a velocity too high (>%.2f) on %s\n", "CGameMovement(%s):  %d/%s Got a NaN origin on %s\n", "CGameMovement(%s):  %d/%s Got a velocity too low (<%.2f) on %s\n", "CGameMovement(%s):  %d/%s Got a NaN velocity on %s\n"
void __fastcall CGameMovement::CheckVelocity(CGameMovement *const this, const char *pContext)
{
  __m128d v3; // xmm0
  int m_Root; // r13d
  UtlRBTreeNode_t<CUtlMap<CEntityIndex,float>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v6; // r14
  unsigned __int16 v7; // r14
  char v8; // cl
  unsigned __int16 m_Left; // ax
  char v10; // dl
  bool v11; // zf
  UtlRBTreeNode_t<CUtlMap<CEntityIndex,float>::Node_t,short unsigned int> *v12; // rax
  unsigned __int16 v13; // ax
  UtlRBTreeNode_t<CUtlMap<CEntityIndex,float>::Node_t,short unsigned int> *v14; // r15
  Vector *p_m_vecVelocity; // r14
  __int64 v16; // rcx
  int v17; // esi
  char v18; // di
  CMoveData *mv; // rax
  int v20; // esi
  __int64 v21; // rax
  int v22; // r12d
  int v23; // esi
  float v24; // xmm1_4
  float m_fValue; // xmm0_4
  float v26; // xmm0_4
  const char *v27; // r12
  double v28; // r13
  __int64 v29; // rax
  const char *v30; // r12
  const char *v31; // rax
  const char *v32; // r14
  __int64 v33; // rax
  const char *v34; // rax
  double v35; // [rsp+8h] [rbp-78h]
  const char *v36; // [rsp+10h] [rbp-70h]
  CEntityIndex nPlayerEntityIndex; // [rsp+24h] [rbp-5Ch]
  float t; // [rsp+28h] [rbp-58h]
  bool bCanSpewa; // [rsp+2Ch] [rbp-54h]
  bool bCanSpew; // [rsp+2Ch] [rbp-54h]
  CUtlString v42; // [rsp+30h] [rbp-50h] BYREF
  Vector org; // [rsp+40h] [rbp-40h] BYREF

  nPlayerEntityIndex.m_Data = CEntityInstance::GetEntityIndex(this->player).m_Data;
  v3.m128d_f64[0] = Plat_FloatTime();
  m_Root = this->m_mapLastVelocitySpewTime.m_Tree.m_Root;
  LODWORD(org.x) = nPlayerEntityIndex.m_Data;
  t = _mm_movedup_pd(v3).m128d_f64[0];
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory;
    do
    {
      while ( 1 )
      {
        v6 = m_Root;
        if ( !this->m_mapLastVelocitySpewTime.m_Tree.m_LessFunc.m_LessFunc(&org, &m_pMemory[v6].m_Data) )
          break;
        m_pMemory = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_7;
      }
      if ( !this->m_mapLastVelocitySpewTime.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory[v6].m_Data,
              &org) )
        goto LABEL_16;
      m_pMemory = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v6].m_Right;
    }
    while ( m_Root != 0xFFFF );
LABEL_7:
    LOWORD(m_Root) = this->m_mapLastVelocitySpewTime.m_Tree.m_Root;
  }
  org.y = -1.0;
  LODWORD(org.x) = nPlayerEntityIndex.m_Data;
  if ( m_Root == 0xFFFF )
  {
    v7 = -1;
    v8 = 0;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v11 = !this->m_mapLastVelocitySpewTime.m_Tree.m_LessFunc.m_LessFunc(
             &org,
             &this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
    v12 = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory;
    if ( v11 )
      break;
    m_Left = v12[m_Root].m_Left;
    v10 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_14;
LABEL_11:
    LOWORD(m_Root) = m_Left;
  }
  m_Left = v12[m_Root].m_Right;
  v10 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_11;
LABEL_14:
  v8 = v10;
  v7 = m_Root;
LABEL_15:
  bCanSpewa = v8;
  v13 = CUtlRBTree<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short,CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_mapLastVelocitySpewTime.m_Tree,
          &org);
  m_Root = v13;
  CUtlRBTree<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short,CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_mapLastVelocitySpewTime.m_Tree,
    v13,
    v7,
    bCanSpewa);
  ++this->m_mapLastVelocitySpewTime.m_Tree.m_NumElements;
LABEL_16:
  v14 = &this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory[m_Root];
  p_m_vecVelocity = &this->mv->m_vecVelocity;
  bCanSpew = (t - v14->m_Data.elem) > 2.0;
  v16 = 0;
  v17 = 0;
  do
  {
    if ( (*(&p_m_vecVelocity->x + v16) & 0x7F800000) == 0x7F800000 )
    {
      *(&p_m_vecVelocity->x + v16) = 0;
      v17 |= 1 << v16;
    }
    ++v16;
  }
  while ( v16 != 3 );
  if ( v17 != 0 )
  {
    v18 = 1;
    if ( bCanSpew )
    {
      DescribeAxisFlags(&org, v17);
      v36 = CUtlString::Get(&org);
      v34 = (*(this->player->_vptr_IHandleEntity + 106))(this->player);
      DevMsg(1, "CGameMovement(%s):  %d/%s Got a NaN velocity on %s\n", pContext, nPlayerEntityIndex.m_Data, v34, v36);
      if ( *&org.x != 0 )
        CUtlString::FreeMemoryBlock(&org);
      v18 = 1;
    }
  }
  else
  {
    v18 = 0;
  }
  mv = this->mv;
  v20 = 0;
  org = mv->m_vecAbsOrigin;
  if ( (LODWORD(org.x) & 0x7F800000) == 0x7F800000 )
  {
    org.x = 0.0;
    LOBYTE(v20) = 1;
  }
  if ( (LODWORD(org.y) & 0x7F800000) == 0x7F800000 )
  {
    org.y = 0.0;
    v20 |= 2u;
  }
  if ( (LODWORD(org.z) & 0x7F800000) == 0x7F800000 )
  {
    org.z = 0.0;
    v20 |= 4u;
  }
  else if ( v20 == 0 )
  {
    goto LABEL_28;
  }
  v18 = 1;
  mv->m_vecAbsOrigin = org;
  if ( bCanSpew )
  {
    DescribeAxisFlags(&v42, v20);
    v30 = CUtlString::Get(&v42);
    v31 = (*(this->player->_vptr_IHandleEntity + 106))(this->player);
    DevMsg(1, "CGameMovement(%s):  %d/%s Got a NaN origin on %s\n", pContext, nPlayerEntityIndex.m_Data, v31, v30);
    if ( v42.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v42);
    v18 = 1;
  }
LABEL_28:
  v21 = 0;
  v22 = 0;
  v23 = 0;
  do
  {
    v24 = *(&p_m_vecVelocity->x + v21);
    m_fValue = sv_maxvelocity.m_pParent->m_Value.m_fValue;
    if ( v24 <= m_fValue )
    {
      v26 = -m_fValue;
      if ( v26 > v24 )
      {
        *(&p_m_vecVelocity->x + v21) = v26;
        v23 |= 1 << v21;
      }
    }
    else
    {
      *(&p_m_vecVelocity->x + v21) = m_fValue;
      v22 |= 1 << v21;
    }
    ++v21;
  }
  while ( v21 != 3 );
  if ( v23 != 0 )
  {
    if ( !bCanSpew )
      return;
    DescribeAxisFlags(&v42, v23);
    v32 = CUtlString::Get(&v42);
    v35 = -sv_maxvelocity.m_pParent->m_Value.m_fValue;
    v33 = (*(this->player->_vptr_IHandleEntity + 106))(this->player);
    DevMsg(
      1,
      "CGameMovement(%s):  %d/%s Got a velocity too low (<%.2f) on %s\n",
      pContext,
      nPlayerEntityIndex.m_Data,
      v33,
      v32,
      v35);
    if ( v42.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v42);
    if ( v22 != 0 )
    {
LABEL_39:
      DescribeAxisFlags(&v42, v22);
      v27 = CUtlString::Get(&v42);
      v28 = sv_maxvelocity.m_pParent->m_Value.m_fValue;
      v29 = (*(this->player->_vptr_IHandleEntity + 106))(this->player);
      DevMsg(
        1,
        "CGameMovement(%s):  %d/%s Got a velocity too high (>%.2f) on %s\n",
        pContext,
        nPlayerEntityIndex.m_Data,
        v29,
        v27,
        v28);
      if ( v42.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v42);
      goto LABEL_44;
    }
LABEL_43:
    if ( bCanSpew )
LABEL_44:
      v14->m_Data.elem = t;
  }
  else if ( v22 != 0 )
  {
    if ( bCanSpew )
      goto LABEL_39;
  }
  else if ( v18 != 0 )
  {
    goto LABEL_43;
  }
}


// CGameMovement::AddGravity  (line 3070, @0x0000000002278750, libserver.so)  // inlines: GetFloat, NetworkStateChanged, Set, SetBaseVelocity, operator!=, operator=, operator[]
// calls: CGameMovement::CheckVelocity
// strings: "AddGravity"
void __fastcall CGameMovement::AddGravity(CGameMovement *const this)
{
  CBasePlayer *player; // rax
  float m_flGravity; // xmm0_4
  CGlobalVars *v4; // rdx
  CBasePlayer *v5; // r12
  vec_t x; // [rsp-18h] [rbp-20h]
  vec_t y; // [rsp-14h] [rbp-1Ch]

  player = this->player;
  if ( player->m_flWaterJumpTime == 0.0 )
  {
    m_flGravity = player->m_flGravity;
    if ( m_flGravity == 0.0 )
      m_flGravity = 1.0;
    v4 = gpGlobals;
    this->mv->m_vecVelocity.z = this->mv->m_vecVelocity.z
                              - ((m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * gpGlobals->frametime);
    this->mv->m_vecVelocity.z = (v4->frametime * this->player->m_vecBaseVelocity.m_Value.z) + this->mv->m_vecVelocity.z;
    v5 = this->player;
    if ( v5->m_vecBaseVelocity.m_Value.z != 0.0 )
    {
      x = v5->m_vecBaseVelocity.m_Value.x;
      y = v5->m_vecBaseVelocity.m_Value.y;
      (*(v5->_vptr_IHandleEntity + 22))(v5, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v5->m_vecBaseVelocity.m_Value.z = 0.0;
      v5->m_vecBaseVelocity.m_Value.x = x;
      v5->m_vecBaseVelocity.m_Value.y = y;
    }
    CGameMovement::CheckVelocity(this, "AddGravity");
  }
}


// CGameMovement::PushEntity  (line 3098, @0x00000000022600e0, libserver.so)  // inlines: GetSingleton, MoveHelper, SetAbsOrigin, VectorAdd, operator=
// callers: CGameMovement::PerformFlyCollisionResolution, CGameMovement::FullTossMove
void __fastcall CGameMovement::PushEntity(CGameMovement *const this, Vector *const push, trace_t *pTrace)
{
  CMoveData *mv; // rax
  float z; // xmm0_4
  int (**vptr_IGameMovement)(...); // rax
  int (*v8)(...); // r13
  __int64 v9; // rax
  Vector end; // [rsp+0h] [rbp-30h] BYREF

  mv = this->mv;
  end.x = mv->m_vecAbsOrigin.x + push->x;
  end.y = mv->m_vecAbsOrigin.y + push->y;
  z = mv->m_vecAbsOrigin.z;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  end.z = z + push->z;
  v8 = vptr_IGameMovement[13];
  v9 = (vptr_IGameMovement[14])(this, 0, 0);
  v8(this, &this->mv->m_vecAbsOrigin, &end, v9, 11, pTrace);
  this->mv->m_vecAbsOrigin = pTrace->endpos;
  if ( pTrace->fraction < 1.0 && !pTrace->startsolid )
    (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 3))(IMoveHelper::sm_pSingleton, pTrace, &this->mv->m_vecVelocity);
}


// CGameMovement::ClipVelocity  (line 3123, @0x0000000002253bc0, libserver.so)  // inlines: DotProduct, VectorMultiply, operator*, operator-=
__int64 __fastcall CGameMovement::ClipVelocity(
        CGameMovement *const this,
        Vector *const in,
        Vector *const normal,
        Vector *const out,
        float overbounce)
{
  float z; // xmm2_4
  __int64 result; // rax
  __int64 v7; // rdi
  float v8; // xmm1_4
  float y; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4

  z = normal->z;
  result = z > 0.0;
  if ( z == 0.0 )
    result = result | 2;
  v7 = 0;
  v8 = (((in->x * normal->x) + (in->y * normal->y)) + (z * in->z)) * overbounce;
  do
  {
    *(&out->x + v7) = *(&in->x + v7) - (*(&normal->x + v7) * v8);
    v7 += 4;
  }
  while ( v7 != 12 );
  y = out->y;
  v10 = normal->y;
  v11 = out->z;
  v12 = normal->z;
  v13 = ((out->x * normal->x) + (y * v10)) + (v11 * v12);
  if ( v13 < 1.0 )
  {
    v14 = fminf(v13, -1.0);
    out->x = out->x - (normal->x * v14);
    out->y = y - (v10 * v14);
    out->z = v11 - (v14 * v12);
  }
  return result;
}


// CGameMovement::CalcRoll  (line 3169, @0x0000000002254870, libserver.so)  // inlines: DotProduct
// calls: AngleVectors
float __fastcall CGameMovement::CalcRoll(
        CGameMovement *const this,
        const QAngle *const angles,
        const Vector *const velocity,
        float rollangle,
        float rollspeed)
{
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  Vector forward; // [rsp+10h] [rbp-40h] BYREF
  Vector right; // [rsp+20h] [rbp-30h] BYREF
  Vector up; // [rsp+30h] [rbp-20h] BYREF

  AngleVectors(angles, &forward, &right, &up);
  v6 = rollangle;
  v7 = ((velocity->x * right.x) + (velocity->y * right.y)) + (velocity->z * right.z);
  if ( v7 < 0.0 )
    v8 = -1.0;
  else
    v8 = 1.0;
  v9 = fabs(v7);
  if ( rollspeed > v9 )
    v6 = (rollangle * v9) / rollspeed;
  return v6 * v8;
}


// CreateStuckTable  (line 3271, @0x00000000022601e0, libserver.so)  // inlines: memset
// calls: memset
// callers: CGameMovement::CheckStuck
// globals: CreateStuckTable(void)::firsttime, rgv3tStuckTable
void __cdecl CreateStuckTable()
{
  __int64 v0; // rbp
  float v1; // xmm0_4
  int v2; // edx
  Vector *v3; // rax
  float v4; // xmm1_4
  Vector *v5; // rax
  int v6; // ecx
  float v7; // xmm1_4
  int v8; // ecx
  float v9; // xmm1_4
  Vector *v10; // rax
  int v11; // ecx
  Vector *v12; // rax
  int v13; // r8d
  vec_t v14; // xmm3_4
  __int64 v15; // r10
  __int64 v16; // rax
  Vector *v17; // rdx
  float *v18; // rsi
  vec_t i; // xmm0_4
  int v20; // esi
  int v21; // r8d
  Vector *v22; // rax
  float v23; // xmm0_4
  int v24; // edx
  float v25; // xmm0_4
  Vector *v26; // rax
  float *j; // r11
  int v28; // r8d
  float v29; // xmm2_4
  Vector *v30; // r9
  int v31; // ecx
  Vector *v32; // rax
  int v33; // edx
  float v34; // xmm0_4
  float zi[3]; // [rsp+0h] [rbp-18h] BYREF
  _BYTE v36[12]; // [rsp+Ch] [rbp-Ch] BYREF

  if ( CreateStuckTable(void)::firsttime != 0 )
  {
    *&v36[4] = v0;
    CreateStuckTable(void)::firsttime = 0;
    memset(rgv3tStuckTable, 0, sizeof(rgv3tStuckTable));
    v1 = -0.125;
    v2 = 0;
    v3 = rgv3tStuckTable;
    v4 = -0.125;
    do
    {
      ++v2;
      v3->z = v4;
      ++v3;
      v3[-1].x = 0.0;
      v4 = v4 + 0.125;
      v3[-1].y = 0.0;
    }
    while ( v2 != 3 );
    v5 = &rgv3tStuckTable[3];
    v6 = 3;
    v7 = -0.125;
    do
    {
      v5->y = v7;
      ++v2;
      ++v5;
      v5[-1].x = 0.0;
      v7 = v7 + 0.125;
      v5[-1].z = 0.0;
      --v6;
    }
    while ( v6 != 0 );
    v8 = 3;
    v9 = -0.125;
    v10 = &rgv3tStuckTable[v2];
    do
    {
      v10->x = v9;
      ++v2;
      ++v10;
      v10[-1].y = 0.0;
      v9 = v9 + 0.125;
      v10[-1].z = 0.0;
      --v8;
    }
    while ( v8 != 0 );
    v11 = 2;
    v12 = &rgv3tStuckTable[v2];
    do
    {
      v12->x = v1;
      v13 = v2 + 4;
      v12 += 4;
      v12[-3].x = v1;
      v2 += 4;
      v12[-2].x = v1;
      v12[-1].x = v1;
      v1 = v1 + 0.25;
      v12[-4].y = -0.125;
      v12[-4].z = -0.125;
      v12[-3].y = -0.125;
      v12[-3].z = 0.125;
      v12[-2].y = 0.125;
      v12[-2].z = -0.125;
      v12[-1].y = 0.125;
      v12[-1].z = 0.125;
      --v11;
    }
    while ( v11 != 0 );
    v14 = 0.0;
    zi[1] = 1.0;
    v15 = v13;
    zi[2] = 6.0;
    v16 = 0;
    v17 = &rgv3tStuckTable[v15];
    v18 = &zi[1];
    for ( i = 0.0; ; i = *v18++ )
    {
      v17[v16].x = 0.0;
      v17[v16].y = 0.0;
      v17[v16++].z = i;
      if ( v16 == 3 )
        break;
    }
    v20 = v13 + 3;
    v21 = v13 + 6;
    v22 = &rgv3tStuckTable[v15 + 3];
    v23 = -2.0;
    do
    {
      ++v20;
      v22->y = v23;
      ++v22;
      v22[-1].x = 0.0;
      v23 = v23 + 2.0;
      v22[-1].z = 0.0;
    }
    while ( v20 != v21 );
    v24 = 3;
    v25 = -2.0;
    v26 = &rgv3tStuckTable[v20];
    do
    {
      v26->x = v25;
      ++v20;
      ++v26;
      v26[-1].y = 0.0;
      v25 = v25 + 2.0;
      v26[-1].z = 0.0;
      --v24;
    }
    while ( v24 != 0 );
    for ( j = &zi[1]; ; ++j )
    {
      v28 = 0;
      v29 = -2.0;
      v30 = &rgv3tStuckTable[v20];
      do
      {
        v31 = v28 + v20;
        v32 = v30;
        v33 = 3;
        v34 = -2.0;
        do
        {
          v32->y = v34;
          ++v31;
          ++v32;
          v32[-1].x = v29;
          v34 = v34 + 2.0;
          v32[-1].z = v14;
          --v33;
        }
        while ( v33 != 0 );
        v28 += 3;
        v29 = v29 + 2.0;
        v30 += 3;
      }
      while ( v28 != 9 );
      if ( j == v36 )
        break;
      v14 = *j;
      v20 = v31;
    }
  }
}


// GetRandomStuckOffsets  (line 3407, @0x00000000022604b0, libserver.so)  // inlines: VectorCopy
// globals: rgv3tStuckTable
int __fastcall GetRandomStuckOffsets(CBasePlayer *pPlayer, Vector *const offset)
{
  int m_StuckLast; // ecx
  Vector *v3; // rax
  vec_t z; // xmm0_4

  m_StuckLast = pPlayer->m_StuckLast;
  pPlayer->m_StuckLast = m_StuckLast + 1;
  m_StuckLast %= 54;
  v3 = &rgv3tStuckTable[m_StuckLast];
  offset->x = v3->x;
  offset->y = v3->y;
  z = v3->z;
  offset->z = z;
  return m_StuckLast;
}


// ResetStuckOffsets  (line 3423, @0x0000000002260520, libserver.so)
void __fastcall ResetStuckOffsets(CBasePlayer *pPlayer)
{
  pPlayer->m_StuckLast = 0;
}


// CGameMovement::CheckStuck  (line 3463, @0x0000000002260530, libserver.so)  // inlines: CGameTrace, GetRandomStuckOffsets, GetSingleton, MoveHelper, ResetStuckOffsets, RnCollisionAttr_t, SetAbsOrigin, VectorAdd, VectorCopy, entindex, operator=
// calls: CGameTrace::Init, CreateStuckTable, CEntityInstance::GetEntityIndex, Plat_FloatTime
// callers: CGameMovement::PlayerMove
// globals: rgv3tStuckTable
int __fastcall CGameMovement::CheckStuck(CGameMovement *const this)
{
  CEntityIndex v2; // eax
  CMoveData *mv; // rsi
  __int64 m_Data; // rbx
  int (**vptr_IGameMovement)(...); // rax
  double v6; // xmm0_8
  bool v7; // zf
  double v8; // xmm0_8
  CMoveData *v9; // rdx
  float *v10; // rcx
  float v11; // xmm0_4
  int result; // eax
  int v13; // ebx
  CBasePlayer *player; // rax
  int m_StuckLast; // ecx
  Vector *v16; // rax
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  vec_t v19; // xmm0_4
  int (**v20)(...); // rax
  CBasePlayer *v21; // rax
  float z; // [rsp+14h] [rbp-10Ch]
  float y; // [rsp+18h] [rbp-108h]
  float x; // [rsp+1Ch] [rbp-104h]
  _DWORD v25[4]; // [rsp+20h] [rbp-100h] BYREF
  Vector test; // [rsp+30h] [rbp-F0h] BYREF
  trace_t traceresult; // [rsp+40h] [rbp-E0h] BYREF

  memset(&traceresult.m_ShapeAttributes, 0, 31);
  traceresult.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&traceresult);
  CreateStuckTable();
  v2.m_Data = CEntityInstance::GetEntityIndex(this->player).m_Data;
  mv = this->mv;
  m_Data = v2.m_Data;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  this->m_bInStuckTest = 1;
  vptr_IGameMovement[73](&test, this, &mv->m_vecAbsOrigin, 11, &traceresult);
  v7 = LODWORD(test.x) == -1;
  this->m_bInStuckTest = 0;
  if ( v7 )
  {
    this->player->m_StuckLast = 0;
    return 0;
  }
  else
  {
    v8 = Plat_FloatTime(v6);
    v9 = this->mv;
    v10 = (&this->_vptr_IGameMovement + m_Data);
    v11 = v8;
    result = 1;
    x = v9->m_vecAbsOrigin.x;
    y = v9->m_vecAbsOrigin.y;
    z = v9->m_vecAbsOrigin.z;
    if ( v10[1004] < v11 - 0.05 )
    {
      v10[1004] = v11;
      v13 = 27;
      (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 3))(
        IMoveHelper::sm_pSingleton,
        &traceresult,
        &v9->m_vecVelocity);
      this->m_bInStuckTest = 1;
      do
      {
        player = this->player;
        m_StuckLast = player->m_StuckLast;
        player->m_StuckLast = m_StuckLast + 1;
        v16 = &rgv3tStuckTable[m_StuckLast % 54];
        v17 = x + v16->x;
        v18 = v16->y + y;
        v19 = v16->z + z;
        v20 = this->_vptr_IGameMovement;
        test.x = v17;
        test.y = v18;
        test.z = v19;
        v20[73](v25, this, &test, 11, &traceresult);
        if ( v25[0] == -1 )
        {
          v21 = this->player;
          this->m_bInStuckTest = 0;
          v21->m_StuckLast = 0;
          this->mv->m_vecAbsOrigin = test;
          return 0;
        }
        --v13;
      }
      while ( v13 != 0 );
      this->m_bInStuckTest = 0;
      return 1;
    }
  }
  return result;
}


// CGameMovement::InWater  (line 3657, @0x0000000002253ca0, libserver.so)  // inlines: GetWaterLevel
bool __fastcall CGameMovement::InWater(CGameMovement *const this)
{
  return this->player->m_nWaterLevel.m_Value > 1u;
}


// CGameMovement::ResetGetWaterContentsForPointCache  (line 3662, @0x00000000022607e0, libserver.so)
void __fastcall CGameMovement::ResetGetWaterContentsForPointCache(CGameMovement *const this)
{
  unsigned __int64 *v1; // rcx
  unsigned __int64 *v2; // rax

  v1 = this->m_CachedGetPointContents[0];
  do
  {
    v2 = v1;
    do
    {
      *v2 = -1;
      v2 += 3;
    }
    while ( v2 != v1 + 195 );
    ++v1;
  }
  while ( v1 != this->m_CachedGetPointContents[1] );
}


// CGameMovement::GetWaterContentsForPointCached  (line 3674, @0x0000000002260820, libserver.so)  // inlines: DistToSqr, LengthSqr, entindex, operator=
// calls: CEntityInstance::GetEntityIndex, CGamePhysicsQueryInterface::GetPointContents
// callers: CGameMovement::CheckWater
// globals: g_bMovementOptimizations
uint64 __fastcall CGameMovement::GetWaterContentsForPointCached(
        CGameMovement *const this,
        const Vector *const point,
        int slot)
{
  CEntityIndex v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // r13
  uint64 result; // rax
  Vector *v11; // r12

  if ( !g_bMovementOptimizations )
    return CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, point, 0x1C000u);
  v6.m_Data = CEntityInstance::GetEntityIndex(this->player).m_Data;
  v7 = slot;
  v8 = v6.m_Data - 1;
  v9 = this + 24 * v8 + 8 * slot;
  result = *(v9 + 9);
  if ( result == -1 )
  {
    v11 = &this->m_CachedGetPointContentsPoint[v8][v7];
  }
  else
  {
    v11 = &this->m_CachedGetPointContentsPoint[v8][v7];
    if ( ((((point->x - v11->x) * (point->x - v11->x)) + ((point->y - v11->y) * (point->y - v11->y)))
        + ((point->z - v11->z) * (point->z - v11->z))) <= 1.0 )
      return result;
  }
  *(v9 + 9) = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, point, 0x1C000u);
  v11->x = point->x;
  v11->y = point->y;
  v11->z = point->z;
  return *(v9 + 9);
}


// CGameMovement::GetWaterCheckPosition  (line 3708, @0x0000000002253cc0, libserver.so)  // inlines: operator[]
void __fastcall CGameMovement::GetWaterCheckPosition(CGameMovement *const this, int waterLevel, Vector *pos)
{
  __m128d v6; // xmm0
  vec_t v7; // xmm2_4
  __m128d v8; // xmm0
  CMoveData *mv; // rax
  float v10; // r13d
  __m128d v11; // xmm0
  float v12; // [rsp+4h] [rbp-2Ch]
  float v13; // [rsp+4h] [rbp-2Ch]
  float v14; // [rsp+4h] [rbp-2Ch]
  double x; // [rsp+8h] [rbp-28h]
  double y; // [rsp+8h] [rbp-28h]
  float v17; // [rsp+8h] [rbp-28h]
  double z; // [rsp+8h] [rbp-28h]

  x = this->mv->m_vecAbsOrigin.x;
  v12 = *(*(this->_vptr_IGameMovement + 31))();
  v6.m128d_f64[1] = (v12 + *(*(this->_vptr_IGameMovement + 32))(this));
  v6.m128d_f64[0] = v6.m128d_f64[1] * 0.5 + x;
  v7 = _mm_movedup_pd(v6).m128d_f64[0];
  pos->x = v7;
  y = this->mv->m_vecAbsOrigin.y;
  v13 = *((*(this->_vptr_IGameMovement + 31))(this) + 4);
  v8.m128d_f64[1] = (v13 + *((*(this->_vptr_IGameMovement + 32))(this) + 4));
  v8.m128d_f64[0] = v8.m128d_f64[1] * 0.5 + y;
  pos->y = _mm_movedup_pd(v8).m128d_f64[0];
  mv = this->mv;
  if ( waterLevel == 2 )
  {
    z = mv->m_vecAbsOrigin.z;
    v14 = *((*(this->_vptr_IGameMovement + 31))(this) + 8);
    v11.m128d_f64[1] = (v14 + *((*(this->_vptr_IGameMovement + 32))(this) + 8));
    v11.m128d_f64[0] = v11.m128d_f64[1] * 0.5 + z;
    pos->z = _mm_movedup_pd(v11).m128d_f64[0];
  }
  else if ( waterLevel == 3 )
  {
    v10 = mv->m_vecAbsOrigin.z;
    pos->z = v10 + *((*(this->player->_vptr_IHandleEntity + 171))(this->player) + 8);
  }
  else
  {
    v17 = mv->m_vecAbsOrigin.z;
    pos->z = (v17 + *((*(this->_vptr_IGameMovement + 31))(this) + 8)) + 1.0;
  }
}


// CGameMovement::CheckWater  (line 3733, @0x0000000002260950, libserver.so)  // inlines: NetworkStateChanged, Set, SetWaterLevel, curtime, operator=<int>
// calls: CBaseEntity::SetWaterType, CGameMovement::GetWaterContentsForPointCached
bool __fastcall CGameMovement::CheckWater(CGameMovement *const this)
{
  CBasePlayer *player; // r12
  uint64 WaterContentsForPointCached; // rax
  CBasePlayer *v4; // r12
  int m_Value; // eax
  CGlobalVars *v6; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  CBasePlayer *v10; // r12
  uint64 v11; // rax
  uint64 v12; // rax
  Vector point; // [rsp+0h] [rbp-30h] BYREF

  (*(this->_vptr_IGameMovement + 54))(this, 1, &point);
  player = this->player;
  if ( player->m_nWaterLevel.m_Value != 0 )
  {
    (*(player->_vptr_IHandleEntity + 22))(this->player, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_nWaterLevel.m_Value = 0;
    player = this->player;
  }
  CBaseEntity::SetWaterType(player, 0);
  WaterContentsForPointCached = CGameMovement::GetWaterContentsForPointCached(this, &point, 0);
  if ( (WaterContentsForPointCached & 0x1C000) == 0 )
    goto LABEL_4;
  CBaseEntity::SetWaterType(this->player, WaterContentsForPointCached);
  v10 = this->player;
  if ( v10->m_nWaterLevel.m_Value != 1 )
  {
    (*(v10->_vptr_IHandleEntity + 22))(this->player, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v10->m_nWaterLevel.m_Value = 1;
  }
  (*(this->_vptr_IGameMovement + 54))(this, 2, &point);
  v11 = CGameMovement::GetWaterContentsForPointCached(this, &point, 1);
  v4 = this->player;
  if ( (v11 & 0x1C000) == 0 )
    goto LABEL_5;
  if ( v4->m_nWaterLevel.m_Value != 2 )
  {
    (*(v4->_vptr_IHandleEntity + 22))(this->player, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_nWaterLevel.m_Value = 2;
  }
  (*(this->_vptr_IGameMovement + 54))(this, 3, &point);
  v12 = CGameMovement::GetWaterContentsForPointCached(this, &point, 2);
  v4 = this->player;
  if ( (v12 & 0x1C000) == 0 )
  {
LABEL_5:
    m_Value = v4->m_nWaterLevel.m_Value;
    if ( this->m_nOldWaterLevel != 0 || m_Value == 0 )
      return m_Value > 1;
    goto LABEL_7;
  }
  if ( v4->m_nWaterLevel.m_Value != 3 )
  {
    (*(v4->_vptr_IHandleEntity + 22))(this->player, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_nWaterLevel.m_Value = 3;
LABEL_4:
    v4 = this->player;
    goto LABEL_5;
  }
  if ( this->m_nOldWaterLevel != 0 )
  {
    m_Value = 3;
    return m_Value > 1;
  }
LABEL_7:
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v4 = this->player;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  this->m_flWaterEntryTime = m_flCurrentTime;
  m_Value = v4->m_nWaterLevel.m_Value;
  return m_Value > 1;
}


// CGameMovement::SetGroundEntity  (line 3810, @0x0000000002258350, libserver.so)  // inlines: GetAbsVelocity, GetSingleton, Init, MoveHelper, NetworkStateChanged, Set, SetBaseVelocity, operator!=, operator+=, operator-=, operator=
// calls: CBaseEntity::GetGroundEntity, CBaseEntity::SetGroundEntity, CBaseEntity::CalcAbsoluteVelocity
void __fastcall CGameMovement::SetGroundEntity(CGameMovement *const this, trace_t *pm)
{
  CBaseEntity *m_pEnt; // r13
  CBaseEntity *GroundEntity; // rax
  CBasePlayer *player; // rbx
  CBasePlayer *v7; // rdx
  float x; // xmm3_4
  float y; // xmm0_4
  float z; // xmm1_4
  float v11; // xmm2_4
  bool v12; // zf
  bool v13; // cl
  float v14; // [rsp+0h] [rbp-30h]
  float v15; // [rsp+0h] [rbp-30h]
  float v16; // [rsp+0h] [rbp-30h]
  float v17; // [rsp+4h] [rbp-2Ch]
  float v18; // [rsp+4h] [rbp-2Ch]
  float v19; // [rsp+4h] [rbp-2Ch]
  float v20; // [rsp+4h] [rbp-2Ch]
  float v21; // [rsp+4h] [rbp-2Ch]
  float oldGroundb; // [rsp+8h] [rbp-28h]
  float oldGround; // [rsp+8h] [rbp-28h]
  float oldGroundc; // [rsp+8h] [rbp-28h]
  CBaseEntity *oldGrounda; // [rsp+8h] [rbp-28h]

  if ( pm != 0 )
  {
    m_pEnt = pm->m_pEnt;
    GroundEntity = CBaseEntity::GetGroundEntity(this->player);
    player = this->player;
    v7 = player;
    x = player->m_vecBaseVelocity.m_Value.x;
    y = player->m_vecBaseVelocity.m_Value.y;
    z = player->m_vecBaseVelocity.m_Value.z;
    if ( GroundEntity == 0 && m_pEnt != 0 )
    {
      if ( (m_pEnt->m_iEFlags & 0x1000) != 0 )
      {
        v18 = player->m_vecBaseVelocity.m_Value.y;
        oldGround = player->m_vecBaseVelocity.m_Value.x;
        CBaseEntity::CalcAbsoluteVelocity(m_pEnt);
        y = v18 - m_pEnt->m_vecAbsVelocity.m_Value.y;
        v11 = oldGround - m_pEnt->m_vecAbsVelocity.m_Value.x;
        if ( (m_pEnt->m_iEFlags & 0x1000) != 0 )
        {
          v19 = oldGround - m_pEnt->m_vecAbsVelocity.m_Value.x;
          oldGroundc = y;
          CBaseEntity::CalcAbsoluteVelocity(m_pEnt);
          player = this->player;
          v11 = v19;
          y = oldGroundc;
        }
        else
        {
          player = this->player;
        }
        x = player->m_vecBaseVelocity.m_Value.x;
      }
      else
      {
        y = y - m_pEnt->m_vecAbsVelocity.m_Value.y;
        v11 = x - m_pEnt->m_vecAbsVelocity.m_Value.x;
      }
      z = m_pEnt->m_vecAbsVelocity.m_Value.z;
      goto LABEL_7;
    }
    v13 = m_pEnt == 0;
  }
  else
  {
    m_pEnt = 0;
    GroundEntity = CBaseEntity::GetGroundEntity(this->player);
    v7 = this->player;
    v13 = 1;
    x = v7->m_vecBaseVelocity.m_Value.x;
    y = v7->m_vecBaseVelocity.m_Value.y;
    z = v7->m_vecBaseVelocity.m_Value.z;
  }
  if ( GroundEntity == 0 || !v13 )
  {
    player = v7;
    v11 = x;
LABEL_7:
    v12 = v11 == x;
    goto LABEL_8;
  }
  if ( (GroundEntity->m_iEFlags & 0x1000) != 0 )
  {
    v15 = y;
    v20 = x;
    oldGrounda = GroundEntity;
    CBaseEntity::CalcAbsoluteVelocity(GroundEntity);
    GroundEntity = oldGrounda;
    v11 = v20 + oldGrounda->m_vecAbsVelocity.m_Value.x;
    y = v15 + oldGrounda->m_vecAbsVelocity.m_Value.y;
    if ( (oldGrounda->m_iEFlags & 0x1000) != 0 )
    {
      v16 = v20 + oldGrounda->m_vecAbsVelocity.m_Value.x;
      v21 = y;
      CBaseEntity::CalcAbsoluteVelocity(oldGrounda);
      v7 = this->player;
      v11 = v16;
      y = v21;
      GroundEntity = oldGrounda;
    }
    else
    {
      v7 = this->player;
    }
  }
  else
  {
    y = y + GroundEntity->m_vecAbsVelocity.m_Value.y;
    v11 = GroundEntity->m_vecAbsVelocity.m_Value.x + x;
  }
  player = v7;
  z = GroundEntity->m_vecAbsVelocity.m_Value.z;
  v12 = v11 == v7->m_vecBaseVelocity.m_Value.x;
LABEL_8:
  if ( !v12 || y != player->m_vecBaseVelocity.m_Value.y || z != player->m_vecBaseVelocity.m_Value.z )
  {
    v14 = v11;
    v17 = y;
    oldGroundb = z;
    (*(player->_vptr_IHandleEntity + 22))(player, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_vecBaseVelocity.m_Value.x = v14;
    player->m_vecBaseVelocity.m_Value.y = v17;
    player->m_vecBaseVelocity.m_Value.z = oldGroundb;
    CBaseEntity::SetGroundEntity(this->player, m_pEnt);
    if ( m_pEnt != 0 )
      goto LABEL_12;
LABEL_22:
    this->m_vecGroundUp.x = 0.0;
    this->m_vecGroundUp.y = 0.0;
    this->m_vecGroundUp.z = 1.0;
    return;
  }
  CBaseEntity::SetGroundEntity(player, m_pEnt);
  if ( m_pEnt == 0 )
    goto LABEL_22;
LABEL_12:
  (*(this->_vptr_IGameMovement + 71))(this, pm);
  this->player->m_flWaterJumpTime = 0.0;
  if ( pm->m_ShapeAttributes.m_nEntityId != 0x8000 )
    (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 3))(IMoveHelper::sm_pSingleton, pm, &this->mv->m_vecVelocity);
  (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 4))(IMoveHelper::sm_pSingleton, &pm->plane);
}


// TracePlayerBBoxForGround  (line 3882, @0x0000000002260b80, libserver.so)  // inlines: DoTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator=
// calls: CGamePhysicsQueryInterface::TraceRay
// callers: CGameMovement::CategorizePosition
void __fastcall TracePlayerBBoxForGround(
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const minsSrc,
        const Vector *const maxsSrc,
        uint64 fMask,
        CTraceFilter *filter,
        vec_t minGroundNormalZ,
        trace_t *const pm,
        bool overwriteEndpos,
        int *pCounter)
{
  __m128 y_low; // xmm1
  float x; // xmm9_4
  float y; // xmm8_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  __m128 x_low; // xmm1
  float v20; // xmm13_4
  float v21; // xmm6_4
  float v22; // xmm12_4
  vec_t z; // xmm7_4
  float v24; // xmm11_4
  float v25; // xmm10_4
  float v26; // xmm7_4
  vec_t v27; // xmm2_4
  vec_t v28; // xmm4_4
  vec_t v29; // xmm3_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm10_4
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  float v35; // xmm10_4
  float v36; // xmm5_4
  float v37; // xmm9_4
  float v38; // xmm8_4
  float v39; // xmm6_4
  __m128 v40; // xmm3
  vec_t v41; // xmm4_4
  float v42; // xmm14_4
  float v43; // xmm13_4
  float v44; // xmm11_4
  float v45; // xmm12_4
  float v46; // xmm7_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm6_4
  bool v50; // zf
  float v51; // xmm11_4
  float v52; // xmm7_4
  CGamePhysicsQueryInterface *v53; // rdi
  __m128 v54; // xmm3
  float v55; // xmm10_4
  float v56; // xmm5_4
  float v57; // xmm9_4
  float v58; // xmm8_4
  float v59; // xmm6_4
  __m128 v60; // xmm3
  vec_t v61; // xmm4_4
  float v62; // xmm13_4
  float v63; // xmm14_4
  float v64; // xmm11_4
  float v65; // xmm7_4
  float v66; // xmm12_4
  float v67; // xmm5_4
  float v68; // xmm4_4
  float v69; // xmm6_4
  float v70; // xmm11_4
  float v71; // xmm7_4
  CGamePhysicsQueryInterface *v72; // rdi
  __m128 v73; // xmm0
  __m128 v74; // xmm3
  float v75; // xmm9_4
  float v76; // xmm8_4
  float v77; // xmm7_4
  float v78; // xmm6_4
  __m128 v79; // xmm3
  vec_t v80; // xmm4_4
  float v81; // xmm13_4
  float v82; // xmm12_4
  float v83; // xmm10_4
  float v84; // xmm5_4
  float v85; // xmm11_4
  float v86; // xmm4_4
  float v87; // xmm5_4
  vec_t v88; // xmm0_4
  float v89; // xmm6_4
  float v90; // xmm10_4
  CGamePhysicsQueryInterface *v91; // rdi
  float fraction; // [rsp+14h] [rbp-BCh]
  Ray_t ray; // [rsp+50h] [rbp-80h] BYREF
  Vector v99; // 0:^8.12

  y_low = LODWORD(maxsSrc->y);
  ray.m_Start.w = 0.0;
  x = vStart->x;
  ray.m_Delta.w = 0.0;
  y = vStart->y;
  ray.m_StartOffset.w = 0.0;
  v17 = vEnd->y;
  ray.m_Extents.w = 0.0;
  v18 = _mm_andnot_ps(_mm_cmplt_ss(0LL, y_low), y_low).m128_f32[0];
  x_low = LODWORD(maxsSrc->x);
  ray.m_flRadius = 0.0;
  fraction = pm->fraction;
  v20 = minsSrc->x;
  v21 = _mm_andnot_ps(_mm_cmplt_ss(0LL, x_low), x_low).m128_f32[0];
  v99.x = pm->endpos.x;
  v22 = minsSrc->y;
  v99.y = pm->endpos.y;
  z = pm->endpos.z;
  v24 = maxsSrc->z;
  v25 = minsSrc->z;
  ray.m_Delta.x = vEnd->x - x;
  v99.z = z;
  ray.m_Delta.y = v17 - y;
  v26 = vStart->z;
  ray.m_Delta.z = vEnd->z - v26;
  v27 = (v21 - v20) * 0.5;
  v28 = (v18 - v22) * 0.5;
  v29 = (v24 - v25) * 0.5;
  ray.m_Extents.x = v27;
  ray.m_Extents.y = v28;
  ray.m_Extents.z = v29;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v30 = (v21 + v20) * 0.5;
  v31 = (v18 + v22) * 0.5;
  v32 = (v25 + v24) * 0.5;
  ray.m_Start.x = x + v30;
  ray.m_Start.y = y + v31;
  ray.m_IsRay = (((v27 * v27) + (v28 * v28)) + (v29 * v29)) < 0.000001;
  ++*pCounter;
  ray.m_Start.z = v26 + v32;
  ray.m_StartOffset.x = -v30;
  filter->m_attr.m_nInteractsWith |= fMask;
  ray.m_StartOffset.y = -v31;
  ray.m_StartOffset.z = -v32;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, filter, pm);
  v33.m128_i32[0] = 0;
  if ( pm->m_pEnt == 0 || pm->plane.normal.z < minGroundNormalZ )
  {
    v34 = LODWORD(minsSrc->y);
    v35 = vStart->x;
    v36 = vEnd->y;
    v37 = vStart->y;
    v38 = vStart->z;
    ray.m_flRadius = 0.0;
    v39 = _mm_andnot_ps(_mm_cmplt_ss(v34, v33), v34).m128_f32[0];
    v40 = LODWORD(minsSrc->x);
    v41 = vEnd->z - v38;
    v42 = maxsSrc->x;
    ray.m_Delta.y = v36 - v37;
    v43 = maxsSrc->y;
    v44 = maxsSrc->z;
    ray.m_Delta.z = v41;
    v45 = minsSrc->z;
    v46 = _mm_andnot_ps(_mm_cmplt_ss(v40, v33), v40).m128_f32[0];
    ray.m_Delta.x = vEnd->x - v35;
    v47 = v43 - v39;
    v40.m128_f32[0] = ((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (v41 * v41);
    v48 = v44 - v45;
    v49 = (v39 + v43) * 0.5;
    v50 = v40.m128_f32[0] == 0.0;
    ray.m_Extents.y = v47 * 0.5;
    v51 = (v44 + v45) * 0.5;
    v40.m128_f32[0] = (v42 - v46) * 0.5;
    ray.m_StartOffset.y = -v49;
    ray.m_Extents.z = v48 * 0.5;
    ray.m_Start.y = v37 + v49;
    ray.m_StartOffset.z = -v51;
    ray.m_Extents.x = v40.m128_f32[0];
    ray.m_IsSwept = !v50;
    v52 = (v46 + v42) * 0.5;
    ray.m_Start.z = v38 + v51;
    ray.m_StartOffset.x = -v52;
    ray.m_Start.x = v35 + v52;
    ray.m_IsRay = (((v40.m128_f32[0] * v40.m128_f32[0]) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    ++*pCounter;
    v53 = g_pPhysicsQuery;
    filter->m_attr.m_nInteractsWith |= fMask;
    CGamePhysicsQueryInterface::TraceRay(v53, &ray, filter, pm);
    if ( pm->m_pEnt != 0 && pm->plane.normal.z >= minGroundNormalZ )
    {
      if ( !overwriteEndpos )
        return;
      pm->fraction = fraction;
    }
    else
    {
      v54 = LODWORD(minsSrc->y);
      v55 = vStart->x;
      v56 = vEnd->y;
      v57 = vStart->y;
      v58 = vStart->z;
      ray.m_flRadius = 0.0;
      v59 = _mm_andnot_ps(_mm_cmplt_ss(v54, 0), v54).m128_f32[0];
      v60 = LODWORD(maxsSrc->x);
      v61 = vEnd->z - v58;
      v62 = maxsSrc->y;
      ray.m_Delta.y = v56 - v57;
      v63 = minsSrc->x;
      ray.m_Delta.z = v61;
      v64 = maxsSrc->z;
      v65 = _mm_andnot_ps(_mm_cmplt_ss(0, v60), v60).m128_f32[0];
      v66 = minsSrc->z;
      ray.m_Delta.x = vEnd->x - v55;
      v67 = v62 - v59;
      v60.m128_f32[0] = ((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (v61 * v61);
      v68 = v64 - v66;
      v69 = (v59 + v62) * 0.5;
      v50 = v60.m128_f32[0] == 0.0;
      ray.m_Extents.y = v67 * 0.5;
      v70 = (v64 + v66) * 0.5;
      v60.m128_f32[0] = (v65 - v63) * 0.5;
      ray.m_StartOffset.y = -v69;
      ray.m_Extents.z = v68 * 0.5;
      ray.m_Start.y = v57 + v69;
      ray.m_StartOffset.z = -v70;
      ray.m_Extents.x = v60.m128_f32[0];
      ray.m_IsSwept = !v50;
      v71 = (v65 + v63) * 0.5;
      ray.m_Start.z = v58 + v70;
      ray.m_StartOffset.x = -v71;
      ray.m_Start.x = v55 + v71;
      ray.m_IsRay = (((v60.m128_f32[0] * v60.m128_f32[0]) + (ray.m_Extents.y * ray.m_Extents.y))
                   + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
      ++*pCounter;
      v72 = g_pPhysicsQuery;
      filter->m_attr.m_nInteractsWith |= fMask;
      CGamePhysicsQueryInterface::TraceRay(v72, &ray, filter, pm);
      v73.m128_i32[0] = 0;
      if ( pm->m_pEnt == 0 || pm->plane.normal.z < 0.7 )
      {
        v74 = LODWORD(minsSrc->x);
        v75 = vStart->x;
        ray.m_flRadius = 0.0;
        v76 = vStart->y;
        v77 = vStart->z;
        v78 = _mm_andnot_ps(_mm_cmplt_ss(v74, v73), v74).m128_f32[0];
        v79 = LODWORD(maxsSrc->y);
        v80 = vEnd->z - v77;
        v81 = maxsSrc->x;
        ray.m_Delta.y = vEnd->y - v76;
        v82 = minsSrc->y;
        ray.m_Delta.z = v80;
        v83 = maxsSrc->z;
        v84 = _mm_andnot_ps(_mm_cmplt_ss(0, v79), v79).m128_f32[0];
        v85 = minsSrc->z;
        ray.m_Delta.x = vEnd->x - v75;
        v79.m128_f32[0] = ((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (v80 * v80);
        v86 = v84 - v82;
        v50 = v79.m128_f32[0] == 0.0;
        v87 = (v84 + v82) * 0.5;
        v88 = (v81 - v78) * 0.5;
        v79.m128_f32[0] = (v83 - v85) * 0.5;
        ray.m_Extents.y = v86 * 0.5;
        ray.m_StartOffset.y = -v87;
        ray.m_Extents.x = v88;
        ray.m_Extents.z = v79.m128_f32[0];
        ray.m_IsSwept = !v50;
        v89 = (v78 + v81) * 0.5;
        ray.m_Start.y = v76 + v87;
        v90 = (v83 + v85) * 0.5;
        ray.m_StartOffset.x = -v89;
        ray.m_StartOffset.z = -v90;
        ray.m_Start.x = v75 + v89;
        ray.m_Start.z = v77 + v90;
        ray.m_IsRay = (((v88 * v88) + (ray.m_Extents.y * ray.m_Extents.y)) + (v79.m128_f32[0] * v79.m128_f32[0])) < 0.000001;
        ++*pCounter;
        v91 = g_pPhysicsQuery;
        filter->m_attr.m_nInteractsWith |= fMask;
        CGamePhysicsQueryInterface::TraceRay(v91, &ray, filter, pm);
        if ( pm->m_pEnt != 0 && pm->plane.normal.z >= minGroundNormalZ )
        {
          if ( !overwriteEndpos )
            return;
          pm->fraction = fraction;
        }
        else
        {
          if ( !overwriteEndpos )
            return;
          pm->fraction = fraction;
        }
        pm->endpos = v99;
        return;
      }
      if ( !overwriteEndpos )
        return;
      pm->fraction = fraction;
    }
    pm->endpos = v99;
    return;
  }
  if ( overwriteEndpos )
  {
    pm->fraction = fraction;
    pm->endpos = v99;
  }
}


// CGameMovement::CategorizePosition  (line 3964, @0x00000000022614a0, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, GameMovementTraceHull, GetAbsVelocity, GetMoveType, GetWaterLevel, Init, LengthSqr, Ray_t, RnCollisionAttr_t, SetAbsOrigin, TraceRay, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-, operator=
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetGroundEntity, TracePlayerBBoxForGround, CEnvPlayerSurfaceTrigger::SetPlayerSurface, CBaseEntity::CalcAbsoluteVelocity
void __fastcall CGameMovement::CategorizePosition(CGameMovement *const this, bool bStayOnGround)
{
  CBasePlayer *player; // rdi
  MoveType_t m_Value; // dl
  CMoveData *mv; // rax
  bool v7; // r13
  float v8; // xmm0_4
  float z; // xmm1_4
  float x; // xmm3_4
  vec_t v11; // xmm5_4
  float v12; // xmm0_4
  vec_t v13; // xmm4_4
  float v14; // xmm0_4
  vec_t v15; // xmm6_4
  float v16; // xmm0_4
  unsigned __int8 v17; // r15
  CTraceFilter *v18; // r15
  __int64 v19; // r13
  float *v20; // rax
  float *v21; // rax
  float v22; // xmm7_4
  float v23; // xmm6_4
  float y; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  CGamePhysicsQueryInterface *v28; // rdi
  float v29; // xmm3_4
  CBasePlayer *v30; // rdi
  CMoveData *v31; // rax
  CBaseEntity *GroundEntity; // rax
  uint64 v33; // r15
  const Vector *v34; // rax
  char v35; // bl
  CBasePlayer *v36; // rdi
  CBaseEntity *v37; // rax
  float minGroundNormalZ; // [rsp+2Ch] [rbp-174h]
  vec_t minGroundNormalZa; // [rsp+2Ch] [rbp-174h]
  float filter; // [rsp+30h] [rbp-170h]
  CTraceFilter *filterb; // [rsp+30h] [rbp-170h]
  float filtera; // [rsp+30h] [rbp-170h]
  float grounda; // [rsp+38h] [rbp-168h]
  float groundb; // [rsp+38h] [rbp-168h]
  float ground; // [rsp+38h] [rbp-168h]
  CBaseEntity *groundd; // [rsp+38h] [rbp-168h]
  float grounde; // [rsp+38h] [rbp-168h]
  float groundf; // [rsp+38h] [rbp-168h]
  CBaseEntity *groundc; // [rsp+38h] [rbp-168h]
  CTraceFilter *pFilter; // [rsp+48h] [rbp-158h] BYREF
  Vector point; // [rsp+50h] [rbp-150h] BYREF
  Vector vBumpOrigin; // [rsp+60h] [rbp-140h] BYREF
  CTraceFilter *pFilter_0; // [rsp+70h] [rbp-130h] BYREF
  float v54; // [rsp+78h] [rbp-128h]
  int v55; // [rsp+7Ch] [rbp-124h]
  float v56; // [rsp+80h] [rbp-120h]
  float v57; // [rsp+84h] [rbp-11Ch]
  float v58; // [rsp+88h] [rbp-118h]
  int v59; // [rsp+8Ch] [rbp-114h]
  float v60; // [rsp+90h] [rbp-110h]
  float v61; // [rsp+94h] [rbp-10Ch]
  float v62; // [rsp+98h] [rbp-108h]
  int v63; // [rsp+9Ch] [rbp-104h]
  float v64; // [rsp+A0h] [rbp-100h]
  float v65; // [rsp+A4h] [rbp-FCh]
  float v66; // [rsp+A8h] [rbp-F8h]
  int v67; // [rsp+ACh] [rbp-F4h]
  int v68; // [rsp+B0h] [rbp-F0h]
  bool v69; // [rsp+B4h] [rbp-ECh]
  bool v70; // [rsp+B5h] [rbp-EBh]
  const CPhysSurfaceProperties *pSurfaceProp; // [rsp+C0h] [rbp-E0h] BYREF
  vec_t v72; // [rsp+CCh] [rbp-D4h]
  vec_t v73; // [rsp+D0h] [rbp-D0h]
  vec_t v74; // [rsp+D4h] [rbp-CCh]
  float v75; // [rsp+E0h] [rbp-C0h]
  float v76; // [rsp+ECh] [rbp-B4h]
  char v77; // [rsp+F8h] [rbp-A8h]
  __int64 v78; // [rsp+100h] [rbp-A0h]
  __int64 v79; // [rsp+108h] [rbp-98h]
  __int64 v80; // [rsp+128h] [rbp-78h]
  __int64 v81; // [rsp+130h] [rbp-70h]
  __int64 v82; // [rsp+138h] [rbp-68h]
  int v83; // [rsp+140h] [rbp-60h]
  __int16 v84; // [rsp+144h] [rbp-5Ch]
  char v85; // [rsp+146h] [rbp-5Ah]
  char v86; // [rsp+147h] [rbp-59h]

  v84 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v85 = 0;
  v86 = 7;
  v83 = 0;
  CGameTrace::Init(&pSurfaceProp);
  this->player->m_surfaceFriction = 1.0;
  (*(this->_vptr_IGameMovement + 53))(this);
  player = this->player;
  if ( (player->m_afPhysicsFlags & 8) != 0 )
  {
    if ( (*(player->_vptr_IHandleEntity + 369))(player) == 0 )
      return;
    player = this->player;
  }
  m_Value = player->m_MoveType.m_Value;
  if ( m_Value == MoveType_t::MOVETYPE_NOCLIP )
    goto LABEL_19;
  mv = this->mv;
  v7 = 0;
  v8 = this->m_vecGroundUp.y + this->m_vecGroundUp.y;
  z = mv->m_vecAbsOrigin.z;
  x = mv->m_vecAbsOrigin.x;
  vBumpOrigin.y = mv->m_vecAbsOrigin.y;
  v11 = vBumpOrigin.y - v8;
  vBumpOrigin.z = z;
  v12 = this->m_vecGroundUp.z;
  vBumpOrigin.x = x;
  point.y = v11;
  v13 = z - (v12 + v12);
  v14 = this->m_vecGroundUp.x + this->m_vecGroundUp.x;
  point.z = v13;
  v15 = x - v14;
  v16 = mv->m_vecVelocity.z;
  point.x = v15;
  if ( v16 > 140.0 )
  {
    ground = v16;
    GroundEntity = CBaseEntity::GetGroundEntity(player);
    v16 = ground;
    if ( GroundEntity != 0 )
    {
      if ( (GroundEntity->m_iEFlags & 0x1000) != 0 )
      {
        filtera = ground;
        groundc = GroundEntity;
        CBaseEntity::CalcAbsoluteVelocity(GroundEntity);
        v16 = filtera;
        GroundEntity = groundc;
      }
      player = this->player;
      m_Value = player->m_MoveType.m_Value;
      v7 = (v16 - GroundEntity->m_vecAbsVelocity.m_Value.z) > 140.0;
    }
    else
    {
      player = this->player;
      v7 = 1;
      m_Value = player->m_MoveType.m_Value;
    }
  }
  v17 = player->m_nWaterLevel.m_Value;
  if ( m_Value == MoveType_t::MOVETYPE_WALK
    && (groundf = v16, v37 = CBaseEntity::GetGroundEntity(player), v16 = groundf, v37 != 0)
    && v17 <= 2u
    || bStayOnGround )
  {
    bStayOnGround = 1;
    point.z = point.z - this->player->m_Local.m_flStepSize.m_Value;
  }
  if ( v7 || v16 > 0.0 && this->player->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER )
  {
LABEL_19:
    (*(this->_vptr_IGameMovement + 75))(this, 0);
  }
  else
  {
    v18 = (*(this->_vptr_IGameMovement + 77))(this, 11);
    pFilter = v18;
    v19 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
    v20 = (*(this->_vptr_IGameMovement + 32))(this);
    minGroundNormalZ = *v20;
    filter = v20[1];
    grounda = v20[2] - 4.0;
    v21 = (*(this->_vptr_IGameMovement + 31))(this);
    v22 = vBumpOrigin.x + 0.0;
    v23 = vBumpOrigin.y + 0.0;
    v55 = 0;
    y = point.y;
    v59 = 0;
    v25 = point.x - (vBumpOrigin.x + 0.0);
    v26 = point.z;
    v63 = 0;
    ++this->m_nTraceCount;
    v67 = 0;
    v68 = 0;
    v56 = v25;
    v57 = y - v23;
    v58 = v26 - (vBumpOrigin.z + 4.0);
    v70 = (((v25 * v25) + (v57 * v57)) + (v58 * v58)) != 0.0;
    v64 = minGroundNormalZ - *v21;
    v65 = filter - v21[1];
    v27 = grounda - v21[2];
    v64 = v64 * 0.5;
    v65 = v65 * 0.5;
    v66 = v27 * 0.5;
    v69 = (((v64 * v64) + (v65 * v65)) + (v66 * v66)) < 0.000001;
    v60 = *v21 + minGroundNormalZ;
    v61 = v21[1] + filter;
    v28 = g_pPhysicsQuery;
    v29 = grounda + v21[2];
    *&pFilter_0 = v22 + (v60 * 0.5);
    v60 = -(v60 * 0.5);
    *(&pFilter_0 + 1) = v23 + (v61 * 0.5);
    v61 = -(v61 * 0.5);
    v62 = -(v29 * 0.5);
    v54 = (vBumpOrigin.z + 4.0) + (v29 * 0.5);
    v18->m_attr.m_nInteractsWith |= v19;
    CGamePhysicsQueryInterface::TraceRay(v28, &pFilter_0, v18, &pSurfaceProp);
    (*(this->_vptr_IGameMovement + 78))(this, &pFilter);
    if ( v79 != 0 )
    {
      groundb = v75;
      if ( (*(this->_vptr_IGameMovement + 12))(this) <= groundb )
        goto LABEL_12;
    }
    pFilter_0 = (*(this->_vptr_IGameMovement + 77))(this, 11);
    minGroundNormalZa = (*(this->_vptr_IGameMovement + 12))(this);
    filterb = pFilter_0;
    v33 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
    groundd = (*(this->_vptr_IGameMovement + 32))(this);
    v34 = (*(this->_vptr_IGameMovement + 31))(this);
    TracePlayerBBoxForGround(
      &vBumpOrigin,
      &point,
      v34,
      groundd,
      v33,
      filterb,
      minGroundNormalZa,
      &pSurfaceProp,
      1,
      &this->m_nTraceCount);
    (*(this->_vptr_IGameMovement + 78))(this, &pFilter_0);
    if ( v79 == 0 )
      goto LABEL_29;
    grounde = v75;
    if ( (*(this->_vptr_IGameMovement + 12))(this) <= grounde )
    {
LABEL_12:
      (*(this->_vptr_IGameMovement + 75))(this, &pSurfaceProp);
      v30 = this->player;
    }
    else
    {
LABEL_29:
      (*(this->_vptr_IGameMovement + 75))(this, 0);
      v30 = this->player;
      if ( this->mv->m_vecVelocity.z <= 0.0 || v30->m_MoveType.m_Value == MoveType_t::MOVETYPE_NOCLIP )
      {
        bStayOnGround = 0;
      }
      else
      {
        v30->m_surfaceFriction = 0.25;
        bStayOnGround = 0;
        v30 = this->player;
      }
    }
    if ( (*(v30->_vptr_IHandleEntity + 346))(v30) == 0 )
    {
      if ( CBaseEntity::GetGroundEntity(this->player) != 0 && (v76 < 1.0 || v77 != 0) )
        v35 = *(v78 + 176);
      else
        v35 = 0;
      v36 = this->player;
      if ( v36->m_chPreviousTextureType != v35 )
      {
        CEnvPlayerSurfaceTrigger::SetPlayerSurface(v36, v35);
        v36 = this->player;
      }
      v36->m_chPreviousTextureType = v35;
    }
    if ( bStayOnGround && v77 == 0 && v76 > 0.0 && v76 < 1.0 )
    {
      v31 = this->mv;
      v31->m_vecAbsOrigin.x = v72;
      v31->m_vecAbsOrigin.y = v73;
      v31->m_vecAbsOrigin.z = v74;
    }
  }
}


// CGameMovement::CheckFalling  (line 4130, @0x000000000225db20, libserver.so)  // inlines: GetAbsVelocity, GetSingleton, IsDead, MoveHelper, NetworkStateChanged, Set, operator+=<float>, operator-=<int>, operator=<float>, operator=<int>, operator>=<float>
// calls: CBaseEntity::GetGroundEntity, CBaseEntity::GetHealth, CBaseEntity::IsFloating, CBaseEntity::CalcAbsoluteVelocity, CPlayerLocalData::NetworkVar_m_flFallVelocity::NetworkStateChanged
void __fastcall CGameMovement::CheckFalling(CGameMovement *const this)
{
  CBasePlayer *player; // rdi
  __m128 v3; // xmm1
  unsigned __int64 v4; // xmm0_8
  CBasePlayer *v5; // rbx
  CBaseEntity *GroundEntity; // rax
  bool IsFloating; // al
  CBasePlayer *v8; // r12
  CBaseEntity *v9; // rax
  float m_Value; // xmm1_4
  char v11; // al
  CBaseEntity *v12; // rax
  CBasePlayer *v13; // r12
  CNetworkVarBase<float,CPlayerLocalData::NetworkVar_m_flFallVelocity> *p_m_flFallVelocity; // rdi
  unsigned int fvol; // [rsp+8h] [rbp-18h]
  CBaseEntity *fvolb; // [rsp+8h] [rbp-18h]
  float fvola; // [rsp+8h] [rbp-18h]
  float fvold; // [rsp+8h] [rbp-18h]
  CBaseEntity *fvolc; // [rsp+8h] [rbp-18h]

  if ( CBaseEntity::GetGroundEntity(this->player) != 0 && CBaseEntity::GetHealth(this->player) > 0 )
  {
    player = this->player;
    v3.m128_i32[0] = LODWORD(player->m_Local.m_flFallVelocity.m_Value);
    if ( v3.m128_f32[0] < 350.0 )
    {
      v4 = _mm_cmplt_ss(0LL, v3).m128_u64[0] & 0x3F000000;
    }
    else
    {
      LODWORD(v4) = 0;
      if ( player->m_nWaterLevel.m_Value == 0 )
      {
        GroundEntity = CBaseEntity::GetGroundEntity(player);
        IsFloating = CBaseEntity::IsFloating(GroundEntity);
        v8 = this->player;
        if ( IsFloating && v8->m_Local.m_flFallVelocity.m_Value != (v8->m_Local.m_flFallVelocity.m_Value - 200.0) )
        {
          fvola = v8->m_Local.m_flFallVelocity.m_Value - 200.0;
          CPlayerLocalData::NetworkVar_m_flFallVelocity::NetworkStateChanged(&v8->m_Local.m_flFallVelocity, -1, -1);
          v8->m_Local.m_flFallVelocity.m_Value = fvola;
          v8 = this->player;
        }
        v9 = CBaseEntity::GetGroundEntity(v8);
        if ( (v9->m_iEFlags & 0x1000) != 0 )
        {
          fvolb = v9;
          CBaseEntity::CalcAbsoluteVelocity(v9);
          v9 = fvolb;
        }
        LODWORD(v4) = 0;
        if ( v9->m_vecAbsVelocity.m_Value.z < 0.0 )
        {
          v12 = CBaseEntity::GetGroundEntity(this->player);
          LODWORD(v4) = 0;
          if ( (v12->m_iEFlags & 0x1000) != 0 )
          {
            fvolc = v12;
            CBaseEntity::CalcAbsoluteVelocity(v12);
            LODWORD(v4) = 0;
            v12 = fvolc;
          }
          v13 = this->player;
          m_Value = v13->m_Local.m_flFallVelocity.m_Value;
          p_m_flFallVelocity = &v13->m_Local.m_flFallVelocity;
          if ( m_Value != (v12->m_vecAbsVelocity.m_Value.z + m_Value) )
          {
            fvold = v12->m_vecAbsVelocity.m_Value.z + m_Value;
            CPlayerLocalData::NetworkVar_m_flFallVelocity::NetworkStateChanged(p_m_flFallVelocity, -1, -1);
            LODWORD(v4) = 0;
            v13->m_Local.m_flFallVelocity.m_Value = fvold;
            v13 = this->player;
            m_Value = v13->m_Local.m_flFallVelocity.m_Value;
            p_m_flFallVelocity = &v13->m_Local.m_flFallVelocity;
          }
          if ( m_Value < 0.1 )
          {
            CPlayerLocalData::NetworkVar_m_flFallVelocity::NetworkStateChanged(p_m_flFallVelocity, -1, -1);
            LODWORD(v4) = 0;
            v13->m_Local.m_flFallVelocity.m_Value = 0.1;
            m_Value = this->player->m_Local.m_flFallVelocity.m_Value;
          }
        }
        else
        {
          m_Value = this->player->m_Local.m_flFallVelocity.m_Value;
        }
        if ( m_Value > 580.0 )
        {
          v11 = (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 10))(IMoveHelper::sm_pSingleton);
          v4 = 1065353216;
          if ( v11 == 0 )
            goto LABEL_7;
        }
        else if ( m_Value > 290.0 )
        {
          LODWORD(v4) = 1062836634;
        }
      }
      fvol = v4;
      (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 11))(IMoveHelper::sm_pSingleton, 1);
      v4 = fvol;
    }
LABEL_7:
    (*(this->_vptr_IGameMovement + 59))(this, *&v4);
  }
  if ( CBaseEntity::GetGroundEntity(this->player) != 0 )
  {
    v5 = this->player;
    if ( v5->m_Local.m_flFallVelocity.m_Value != 0.0 )
    {
      (*(v5->m_Local._vptr_CPlayerLocalData + 2))(&v5->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
      v5->m_Local.m_flFallVelocity.m_Value = 0.0;
    }
  }
}


// CGameMovement::PlayerRoughLandingEffects  (line 4217, @0x0000000002253e90, libserver.so)
void __fastcall CGameMovement::PlayerRoughLandingEffects(CGameMovement *const this, __m128 a2, float fvol)
{
  unsigned __int64 v3; // xmm1_8
  __m128 v5; // xmm0
  float fvola; // [rsp+0h] [rbp-1Ch]

  v3 = a2.m128_u64[0];
  if ( a2.m128_f32[0] > 0.0 )
  {
    fvola = a2.m128_f32[0];
    this->player->m_flStepSoundTime = 400.0;
    v5 = _mm_cmplt_ss(0x3DCCCCCDu, a2);
    (*(this->player->_vptr_IHandleEntity + 419))(
      this->player,
      &this->mv->m_vecAbsOrigin,
      this->player->m_pSurfaceData,
      1,
      COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*_mm_andnot_ps(v5, 0x3DCCCCCDu).m128_u64) | v3 & v5.m128_u64[0]));
    if ( fvola > 0.85000002 )
      (*(this->player->_vptr_IHandleEntity + 408))(this->player, 18, 0, 0);
  }
}


// CGameMovement::SplineFraction  (line 4260, @0x0000000002261c50, libserver.so)
float __fastcall CGameMovement::SplineFraction(CGameMovement *const this, float a2, float value, float scale)
{
  return (3.0 * ((value * a2) * (value * a2)))
       - ((((value * a2) * (value * a2)) + ((value * a2) * (value * a2))) * (value * a2));
}


// CGameMovement::FixPlayerCrouchStuck  (line 4275, @0x0000000002255230, libserver.so)  // inlines: CGameTrace, RnCollisionAttr_t, SetAbsOrigin, VectorCopy, operator=
// calls: CGameTrace::Init
void __fastcall CGameMovement::FixPlayerCrouchStuck(CGameMovement *const this, bool upward)
{
  unsigned int *mv; // rax
  float v5; // xmm4_4
  int v6; // ebx
  float v7; // xmm0_4
  int v8; // r15d
  float v9; // [rsp+4h] [rbp-FCh]
  unsigned int v10; // [rsp+8h] [rbp-F8h]
  float v11; // [rsp+Ch] [rbp-F4h]
  _DWORD v12[4]; // [rsp+10h] [rbp-F0h] BYREF
  trace_t dummy; // [rsp+20h] [rbp-E0h] BYREF

  memset(&dummy.m_ShapeAttributes, 0, 31);
  dummy.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&dummy);
  (*(this->_vptr_IGameMovement + 73))(v12, this, &this->mv->m_vecAbsOrigin, 11, &dummy);
  if ( v12[0] != -1 )
  {
    mv = this->mv;
    v5 = upward;
    v6 = 36;
    v11 = v5;
    v9 = *(mv + 43);
    v7 = v9;
    v8 = _mm_cvtsi128_si32(mv[41]);
    v10 = mv[42];
    while ( 1 )
    {
      *(mv + 43) = v7 + v11;
      (*(this->_vptr_IGameMovement + 73))(v12, this, &this->mv->m_vecAbsOrigin, 11, &dummy);
      if ( v12[0] == -1 )
        break;
      --v6;
      mv = this->mv;
      if ( v6 == 0 )
      {
        mv[41] = v8;
        mv[42] = v10;
        *(mv + 43) = v9;
        return;
      }
      v7 = *(mv + 43);
    }
  }
}


// CGameMovement::CanUnduck  (line 4302, @0x00000000022590e0, libserver.so)  // inlines: CGameTrace, NetworkStateChanged, RnCollisionAttr_t, Set, VectorAdd, VectorCopy, VectorSubtract, operator-, operator=<bool>, operator[]
// calls: CGameTrace::Init, CBaseEntity::GetGroundEntity, SafeGetViewVectors
bool __fastcall CGameMovement::CanUnduck(CGameMovement *const this)
{
  CBasePlayer *player; // rdi
  __int64 i; // rbx
  CBasePlayer *v4; // rbx
  bool m_Value; // r15
  void (__fastcall *v6)(CGameMovement *const, Vector *, Vector *, __int64, __int64, trace_t *); // rbx
  __int64 v7; // rax
  CBasePlayer *v8; // rbx
  bool result; // al
  const CViewVectors *ViewVectors; // rbx
  const CViewVectors *v11; // rax
  const CViewVectors *v12; // rbx
  const CViewVectors *v13; // rax
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // [rsp+4h] [rbp-FCh]
  float v17; // [rsp+8h] [rbp-F8h]
  float v18; // [rsp+Ch] [rbp-F4h]
  float v19; // [rsp+Ch] [rbp-F4h]
  Vector newOrigin; // [rsp+10h] [rbp-F0h] BYREF
  trace_t trace; // [rsp+20h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  player = this->player;
  newOrigin = this->mv->m_vecAbsOrigin;
  if ( CBaseEntity::GetGroundEntity(player) != 0 )
  {
    for ( i = 0; i != 12; i += 4 )
    {
      v18 = *(&SafeGetViewVectors()->m_vDuckHullMin.x + i);
      *(&newOrigin.x + i) = (v18 - *(&SafeGetViewVectors()->m_vHullMin.x + i)) + *(&newOrigin.x + i);
    }
  }
  else
  {
    ViewVectors = SafeGetViewVectors();
    v11 = SafeGetViewVectors();
    v16 = v11->m_vHullMax.x - ViewVectors->m_vHullMin.x;
    v17 = v11->m_vHullMax.y - ViewVectors->m_vHullMin.y;
    v19 = v11->m_vHullMax.z - ViewVectors->m_vHullMin.z;
    v12 = SafeGetViewVectors();
    v13 = SafeGetViewVectors();
    v14 = v17 - (v13->m_vDuckHullMax.y - v12->m_vDuckHullMin.y);
    v15 = v19 - (v13->m_vDuckHullMax.z - v12->m_vDuckHullMin.z);
    newOrigin.x = newOrigin.x - (v16 - (v13->m_vDuckHullMax.x - v12->m_vDuckHullMin.x));
    newOrigin.y = newOrigin.y - v14;
    newOrigin.z = newOrigin.z - v15;
  }
  v4 = this->player;
  m_Value = v4->m_Local.m_bDucked.m_Value;
  if ( m_Value )
  {
    (*(v4->m_Local._vptr_CPlayerLocalData + 2))(&v4->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_Local.m_bDucked.m_Value = 0;
  }
  v6 = *(this->_vptr_IGameMovement + 13);
  v7 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
  v6(this, &this->mv->m_vecAbsOrigin, &newOrigin, v7, 11, &trace);
  v8 = this->player;
  if ( m_Value != v8->m_Local.m_bDucked.m_Value )
  {
    (*(v8->m_Local._vptr_CPlayerLocalData + 2))(&v8->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8->m_Local.m_bDucked.m_Value = m_Value;
  }
  result = 0;
  if ( !trace.startsolid )
    return trace.fraction == 1.0;
  return result;
}


// CGameMovement::FinishUnDuck  (line 4341, @0x00000000022596b0, libserver.so)  // inlines: CGameTrace, NetworkStateChanged, RnCollisionAttr_t, Set, SetAbsOrigin, VectorAdd, VectorCopy, VectorSubtract, operator-, operator=, operator=<bool>, operator=<int>, operator[]
// calls: CGameTrace::Init, CBaseEntity::GetGroundEntity, SafeGetViewVectors, CBaseEntity::RemoveFlag
void __fastcall CGameMovement::FinishUnDuck(CGameMovement *const this)
{
  CMoveData *mv; // rax
  CBasePlayer *player; // rdi
  vec_t y; // ebx
  vec_t z; // r13d
  vec_t x; // xmm0_4
  __int64 i; // rbx
  vec_t v8; // r13d
  int v9; // r14d
  int v10; // r15d
  CBasePlayer *v11; // rbx
  CBasePlayer *v12; // rbx
  void (__fastcall *v13)(CBasePlayer *, __int64); // rbx
  __int64 v14; // rax
  CBasePlayer *v15; // rbx
  CMoveData *v16; // rax
  const CViewVectors *ViewVectors; // r14
  const CViewVectors *v18; // rax
  const CViewVectors *v19; // r14
  const CViewVectors *v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  float v24; // [rsp+0h] [rbp-100h]
  float v25; // [rsp+4h] [rbp-FCh]
  float v26; // [rsp+8h] [rbp-F8h]
  float v27; // [rsp+8h] [rbp-F8h]
  float v28; // [rsp+Ch] [rbp-F4h]
  float v29; // [rsp+Ch] [rbp-F4h]
  Vector newOrigin; // [rsp+10h] [rbp-F0h]
  trace_t trace; // [rsp+20h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  mv = this->mv;
  player = this->player;
  y = mv->m_vecAbsOrigin.y;
  z = mv->m_vecAbsOrigin.z;
  x = mv->m_vecAbsOrigin.x;
  newOrigin.y = y;
  newOrigin.x = x;
  v28 = x;
  newOrigin.z = z;
  if ( CBaseEntity::GetGroundEntity(player) != 0 )
  {
    for ( i = 0; ; v28 = *(&newOrigin.x + i) )
    {
      v26 = *(&SafeGetViewVectors()->m_vDuckHullMin.x + i);
      *(&newOrigin.x + i) = (v26 - *(&SafeGetViewVectors()->m_vHullMin.x + i)) + v28;
      i += 4;
      if ( i == 12 )
        break;
    }
    v8 = newOrigin.z;
    v9 = _mm_cvtsi128_si32(LODWORD(newOrigin.x));
    v10 = _mm_cvtsi128_si32(LODWORD(newOrigin.y));
  }
  else
  {
    v24 = v28;
    ViewVectors = SafeGetViewVectors();
    v18 = SafeGetViewVectors();
    v25 = v18->m_vHullMax.x - ViewVectors->m_vHullMin.x;
    v27 = v18->m_vHullMax.y - ViewVectors->m_vHullMin.y;
    v29 = v18->m_vHullMax.z - ViewVectors->m_vHullMin.z;
    v19 = SafeGetViewVectors();
    v20 = SafeGetViewVectors();
    v21 = LODWORD(v24);
    v22 = _mm_cvtsi32_si128(LODWORD(y));
    *v22.m128i_i32 = *v22.m128i_i32 - (v27 - (v20->m_vDuckHullMax.y - v19->m_vDuckHullMin.y));
    *v21.m128i_i32 = v24 - (v25 - (v20->m_vDuckHullMax.x - v19->m_vDuckHullMin.x));
    v23 = _mm_cvtsi32_si128(LODWORD(z));
    *v23.m128i_i32 = *v23.m128i_i32 - (v29 - (v20->m_vDuckHullMax.z - v19->m_vDuckHullMin.z));
    LODWORD(newOrigin.y) = v22.m128i_i32[0];
    v10 = _mm_cvtsi128_si32(v22);
    LODWORD(newOrigin.x) = v21.m128i_i32[0];
    v9 = _mm_cvtsi128_si32(v21);
    LODWORD(newOrigin.z) = v23.m128i_i32[0];
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
  }
  v11 = this->player;
  if ( v11->m_Local.m_bDucked.m_Value )
  {
    (*(v11->m_Local._vptr_CPlayerLocalData + 2))(&v11->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v11->m_Local.m_bDucked.m_Value = 0;
    v11 = this->player;
  }
  CBaseEntity::RemoveFlag(v11, 2);
  v12 = this->player;
  if ( v12->m_Local.m_bDucking.m_Value )
  {
    (*(v12->m_Local._vptr_CPlayerLocalData + 2))(&v12->m_Local, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12->m_Local.m_bDucking.m_Value = 0;
    v12 = this->player;
  }
  if ( v12->m_Local.m_bInDuckJump.m_Value )
  {
    (*(v12->m_Local._vptr_CPlayerLocalData + 2))(&v12->m_Local, 110, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12->m_Local.m_bInDuckJump.m_Value = 0;
    v12 = this->player;
  }
  v13 = *(v12->_vptr_IHandleEntity + 211);
  v14 = (*(this->_vptr_IGameMovement + 11))(this, 0);
  v13(this->player, v14);
  v15 = this->player;
  if ( v15->m_Local.m_nDuckTimeMsecs.m_Value != 0 )
  {
    (*(v15->m_Local._vptr_CPlayerLocalData + 2))(&v15->m_Local, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v15->m_Local.m_nDuckTimeMsecs.m_Value = 0;
  }
  v16 = this->mv;
  LODWORD(v16->m_vecAbsOrigin.x) = v9;
  LODWORD(v16->m_vecAbsOrigin.y) = v10;
  v16->m_vecAbsOrigin.z = v8;
  (*(this->_vptr_IGameMovement + 55))(this, 0);
}


// CGameMovement::UpdateDuckJumpEyeOffset  (line 4383, @0x00000000022588d0, libserver.so)  // inlines: FractionUnDucked, NetworkStateChanged, Set, operator!=<unsigned int>, operator=<unsigned int>
void __fastcall CGameMovement::UpdateDuckJumpEyeOffset(CGameMovement *const this)
{
  __int64 v1; // rsi
  CBasePlayer *player; // r12
  unsigned int m_Value; // eax
  __int64 v5; // rdx
  __int64 v6; // xmm0_8
  float v7; // xmm1_4

  player = this->player;
  m_Value = player->m_Local.m_nDuckJumpTimeMsecs.m_Value;
  if ( m_Value != 0 )
  {
    v5 = 1000 - m_Value;
    if ( (1000 - m_Value) < 0 )
    {
      v6 = 1065353216;
    }
    else
    {
      if ( v5 > 200 )
      {
        (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 116, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        player->m_Local.m_nDuckJumpTimeMsecs.m_Value = 0;
        (*(this->_vptr_IGameMovement + 69))(this, 0.0);
        return;
      }
      v6 = 0;
      v7 = v5 / 200.0;
      if ( v7 <= 1.0 )
      {
        v6 = 1065353216;
        if ( v7 >= 0.0 )
        {
          HIDWORD(v6) = 0;
          *&v6 = (3.0 * ((1.0 - v7) * (1.0 - v7)))
               - ((((1.0 - v7) * (1.0 - v7)) + ((1.0 - v7) * (1.0 - v7))) * (1.0 - v7));
        }
      }
    }
    (*(this->_vptr_IGameMovement + 69))(this, v1, v5, *&v6);
  }
}


// CGameMovement::FinishUnDuckJump  (line 4404, @0x0000000002259390, libserver.so)  // inlines: NetworkStateChanged, Set, SetAbsOrigin, VectorCopy, VectorSubtract, operator-, operator=, operator=<bool>, operator=<int>
// calls: SafeGetViewVectors, CBaseEntity::RemoveFlag
void __fastcall CGameMovement::FinishUnDuckJump(CGameMovement *const this, trace_t *const trace)
{
  CMoveData *mv; // rax
  float v5; // r14d
  float v6; // r15d
  const CViewVectors *ViewVectors; // rbx
  const CViewVectors *v8; // rax
  const CViewVectors *v9; // rbx
  const CViewVectors *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm1_4
  CBasePlayer *player; // rbx
  Vector *v14; // rax
  CBasePlayer *v15; // rdi
  CMoveData *v16; // rax
  float z; // [rsp+Ch] [rbp-54h]
  float flDeltaZ; // [rsp+10h] [rbp-50h]
  float hullSizeNormala; // [rsp+14h] [rbp-4Ch]
  float hullSizeNormal; // [rsp+14h] [rbp-4Ch]
  float hullSizeNormal_4a; // [rsp+18h] [rbp-48h]
  float hullSizeNormal_4; // [rsp+18h] [rbp-48h]
  float hullSizeNormal_8a; // [rsp+1Ch] [rbp-44h]
  float hullSizeNormal_8; // [rsp+1Ch] [rbp-44h]
  Vector vecViewOffset; // [rsp+20h] [rbp-40h] BYREF

  mv = this->mv;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(mv->m_vecAbsOrigin.x)));
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(mv->m_vecAbsOrigin.y)));
  z = mv->m_vecAbsOrigin.z;
  ViewVectors = SafeGetViewVectors();
  v8 = SafeGetViewVectors();
  hullSizeNormal_8a = v8->m_vHullMax.x - ViewVectors->m_vHullMin.x;
  hullSizeNormal_4a = v8->m_vHullMax.y - ViewVectors->m_vHullMin.y;
  hullSizeNormala = v8->m_vHullMax.z - ViewVectors->m_vHullMin.z;
  v9 = SafeGetViewVectors();
  v10 = SafeGetViewVectors();
  hullSizeNormal_8 = hullSizeNormal_8a - (v10->m_vDuckHullMax.x - v9->m_vDuckHullMin.x);
  v11 = v10->m_vDuckHullMax.z - v9->m_vDuckHullMin.z;
  hullSizeNormal_4 = hullSizeNormal_4a - (v10->m_vDuckHullMax.y - v9->m_vDuckHullMin.y);
  v12 = (hullSizeNormala - v11) - (trace->fraction * (hullSizeNormala - v11));
  hullSizeNormal = trace->fraction * (hullSizeNormala - v11);
  flDeltaZ = v12;
  CBaseEntity::RemoveFlag(this->player, 2);
  player = this->player;
  if ( player->m_Local.m_bDucked.m_Value )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_bDucked.m_Value = 0;
    player = this->player;
  }
  if ( player->m_Local.m_bDucking.m_Value )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_bDucking.m_Value = 0;
    player = this->player;
  }
  if ( player->m_Local.m_bInDuckJump.m_Value )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 110, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_bInDuckJump.m_Value = 0;
    player = this->player;
  }
  if ( player->m_Local.m_nDuckTimeMsecs.m_Value != 0 )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_nDuckTimeMsecs.m_Value = 0;
    player = this->player;
  }
  if ( player->m_Local.m_nDuckJumpTimeMsecs.m_Value != 0 )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 116, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_nDuckJumpTimeMsecs.m_Value = 0;
    player = this->player;
  }
  if ( player->m_Local.m_nJumpTimeMsecs.m_Value != 0 )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 120, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_nJumpTimeMsecs.m_Value = 0;
  }
  v14 = (*(this->_vptr_IGameMovement + 11))(this, 0);
  v15 = this->player;
  vecViewOffset = *v14;
  vecViewOffset.z = vecViewOffset.z - flDeltaZ;
  (*(v15->_vptr_IHandleEntity + 211))(v15, &vecViewOffset);
  v16 = this->mv;
  v16->m_vecAbsOrigin.x = v5 - hullSizeNormal_8;
  v16->m_vecAbsOrigin.y = v6 - hullSizeNormal_4;
  v16->m_vecAbsOrigin.z = z - hullSizeNormal;
  (*(this->_vptr_IGameMovement + 55))(this, 0);
}


// CGameMovement::FinishDuck  (line 4440, @0x0000000002258e90, libserver.so)  // inlines: NetworkStateChanged, Set, SetAbsOrigin, VectorAdd, VectorSubtract, operator-, operator=, operator=<bool>, operator[]
// calls: CBaseEntity::AddFlag, CBaseEntity::GetGroundEntity, SafeGetViewVectors
void __fastcall CGameMovement::FinishDuck(CGameMovement *const this)
{
  CBasePlayer *player; // rbx
  void (__fastcall *v3)(CBasePlayer *, __int64); // rbx
  __int64 v4; // rax
  __int64 i; // rbx
  CMoveData *mv; // rax
  __int64 v7; // rdx
  float v8; // xmm1_4
  CMoveData *v9; // rax
  const CViewVectors *ViewVectors; // rbx
  const CViewVectors *v11; // rax
  const CViewVectors *v12; // rbx
  const CViewVectors *v13; // rax
  CMoveData *v14; // rdx
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // [rsp+4h] [rbp-3Ch]
  float v18; // [rsp+8h] [rbp-38h]
  float v19; // [rsp+Ch] [rbp-34h]
  float v20; // [rsp+Ch] [rbp-34h]
  Vector org; // [rsp+10h] [rbp-30h]

  CBaseEntity::AddFlag(this->player, 2);
  player = this->player;
  if ( !player->m_Local.m_bDucked.m_Value )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_bDucked.m_Value = 1;
    player = this->player;
  }
  if ( player->m_Local.m_bDucking.m_Value )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_bDucking.m_Value = 0;
    player = this->player;
  }
  v3 = *(player->_vptr_IHandleEntity + 211);
  v4 = (*(this->_vptr_IGameMovement + 11))(this, 1);
  v3(this->player, v4);
  if ( CBaseEntity::GetGroundEntity(this->player) != 0 )
  {
    for ( i = 0; i != 12; i += 4 )
    {
      mv = this->mv;
      v7 = *&mv->m_vecAbsOrigin.x;
      *&mv = mv->m_vecAbsOrigin.z;
      *&org.x = v7;
      LODWORD(org.z) = mv;
      v19 = *(&SafeGetViewVectors()->m_vDuckHullMin.x + i);
      v8 = v19 - *(&SafeGetViewVectors()->m_vHullMin.x + i);
      v9 = this->mv;
      *(&org.x + i) = *(&org.x + i) - v8;
      v9->m_vecAbsOrigin = org;
    }
  }
  else
  {
    ViewVectors = SafeGetViewVectors();
    v11 = SafeGetViewVectors();
    v17 = v11->m_vHullMax.x - ViewVectors->m_vHullMin.x;
    v18 = v11->m_vHullMax.y - ViewVectors->m_vHullMin.y;
    v20 = v11->m_vHullMax.z - ViewVectors->m_vHullMin.z;
    v12 = SafeGetViewVectors();
    v13 = SafeGetViewVectors();
    v14 = this->mv;
    v15 = v20 - (v13->m_vDuckHullMax.z - v12->m_vDuckHullMin.z);
    v16 = v13->m_vDuckHullMax.x - v12->m_vDuckHullMin.x;
    v14->m_vecAbsOrigin.y = (v18 - (v13->m_vDuckHullMax.y - v12->m_vDuckHullMin.y)) + v14->m_vecAbsOrigin.y;
    v14->m_vecAbsOrigin.z = v15 + v14->m_vecAbsOrigin.z;
    v14->m_vecAbsOrigin.x = (v17 - v16) + v14->m_vecAbsOrigin.x;
  }
  (*(this->_vptr_IGameMovement + 70))(this, 1);
  (*(this->_vptr_IGameMovement + 55))(this, 0);
}


// CGameMovement::StartUnDuckJump  (line 4480, @0x0000000002258c30, libserver.so)  // inlines: NetworkStateChanged, Set, SetAbsOrigin, VectorAdd, VectorSubtract, operator-, operator=, operator=<bool>
// calls: CBaseEntity::AddFlag, SafeGetViewVectors
void __fastcall CGameMovement::StartUnDuckJump(CGameMovement *const this)
{
  CBasePlayer *player; // r12
  void (__fastcall *v3)(CBasePlayer *, __int64); // r12
  __int64 v4; // rax
  const CViewVectors *ViewVectors; // r12
  const CViewVectors *v6; // rax
  const CViewVectors *v7; // r12
  const CViewVectors *v8; // rax
  CMoveData *mv; // rdx
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // [rsp+4h] [rbp-1Ch]
  float v13; // [rsp+8h] [rbp-18h]
  float v14; // [rsp+Ch] [rbp-14h]

  CBaseEntity::AddFlag(this->player, 2);
  player = this->player;
  if ( !player->m_Local.m_bDucked.m_Value )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_bDucked.m_Value = 1;
    player = this->player;
  }
  if ( player->m_Local.m_bDucking.m_Value )
  {
    (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_Local.m_bDucking.m_Value = 0;
    player = this->player;
  }
  v3 = *(player->_vptr_IHandleEntity + 211);
  v4 = (*(this->_vptr_IGameMovement + 11))(this, 1);
  v3(this->player, v4);
  ViewVectors = SafeGetViewVectors();
  v6 = SafeGetViewVectors();
  v12 = v6->m_vHullMax.x - ViewVectors->m_vHullMin.x;
  v13 = v6->m_vHullMax.y - ViewVectors->m_vHullMin.y;
  v14 = v6->m_vHullMax.z - ViewVectors->m_vHullMin.z;
  v7 = SafeGetViewVectors();
  v8 = SafeGetViewVectors();
  mv = this->mv;
  v10 = v14 - (v8->m_vDuckHullMax.z - v7->m_vDuckHullMin.z);
  v11 = v8->m_vDuckHullMax.x - v7->m_vDuckHullMin.x;
  mv->m_vecAbsOrigin.y = (v13 - (v8->m_vDuckHullMax.y - v7->m_vDuckHullMin.y)) + mv->m_vecAbsOrigin.y;
  mv->m_vecAbsOrigin.z = v10 + mv->m_vecAbsOrigin.z;
  mv->m_vecAbsOrigin.x = (v12 - v11) + mv->m_vecAbsOrigin.x;
  (*(this->_vptr_IGameMovement + 70))(this, 1);
  (*(this->_vptr_IGameMovement + 55))(this, 0);
}


// CGameMovement::SetDuckedEyeOffset  (line 4507, @0x0000000002256e10, libserver.so)
void __fastcall CGameMovement::SetDuckedEyeOffset(CGameMovement *const this, double a2, float duckFraction)
{
  _QWORD *v4; // rax
  CBasePlayer *player; // rdi
  float v6; // [rsp+0h] [rbp-30h]
  float v7; // [rsp+4h] [rbp-2Ch]
  float fMore; // [rsp+8h] [rbp-28h]
  float fMorea; // [rsp+8h] [rbp-28h]
  float duckFractiona; // [rsp+Ch] [rbp-24h]
  Vector temp; // [rsp+10h] [rbp-20h] BYREF

  duckFractiona = *&a2;
  if ( (*(this->player->_vptr_IHandleEntity + 139))(this->player, a2, duckFraction) != 0 )
  {
    fMore = *((*(this->_vptr_IGameMovement + 9))(this, 1) + 8);
    fMorea = fMore - *((*(this->_vptr_IGameMovement + 9))(this, 0) + 8);
    v6 = *((*(this->_vptr_IGameMovement + 11))(this, 1) + 8);
    v7 = *((*(this->_vptr_IGameMovement + 11))(this, 0) + 8);
    v4 = (*(this->player->_vptr_IHandleEntity + 171))(this->player);
    player = this->player;
    *&temp.x = *v4;
    temp.z = ((v6 - fMorea) * duckFractiona) + ((1.0 - duckFractiona) * v7);
    (*(player->_vptr_IHandleEntity + 211))(player, &temp);
  }
}


// CGameMovement::HandleDuckingSpeedCrop  (line 4532, @0x0000000002257370, libserver.so)
// calls: CBaseEntity::GetGroundEntity
void __fastcall CGameMovement::HandleDuckingSpeedCrop(CGameMovement *const this)
{
  CBasePlayer *player; // rdi

  if ( !this->m_bSpeedCropped )
  {
    player = this->player;
    if ( (player->m_fFlags.m_Value & 2) != 0 && CBaseEntity::GetGroundEntity(player) != 0 )
    {
      this->mv->m_flForwardMove = this->mv->m_flForwardMove * 0.33333334;
      this->mv->m_flSideMove = this->mv->m_flSideMove * 0.33333334;
      this->mv->m_flUpMove = 0.33333334 * this->mv->m_flUpMove;
      this->m_bSpeedCropped = 1;
    }
  }
}


// CGameMovement::CanUnDuckJump  (line 4547, @0x0000000002259a40, libserver.so)  // inlines: CGameTrace, NetworkStateChanged, RnCollisionAttr_t, Set, operator=<bool>
// calls: CGameTrace::Init
bool __fastcall CGameMovement::CanUnDuckJump(CGameMovement *const this, trace_t *const trace)
{
  CMoveData *mv; // rax
  __int64 v5; // rdx
  int (**vptr_IGameMovement)(...); // rax
  void (__fastcall *v7)(CGameMovement *const, Vector *, Vector *, __int64, __int64, trace_t *const); // r14
  __int64 v8; // rax
  float fraction; // xmm0_4
  bool result; // al
  CMoveData *v11; // rax
  vec_t v12; // xmm0_4
  CBasePlayer *player; // r15
  bool m_Value; // r12
  void (__fastcall *v15)(CGameMovement *const, Vector *, Vector *, __int64, __int64, trace_t *); // r15
  __int64 v16; // rax
  CBasePlayer *v17; // rbx
  Vector vecEnd; // [rsp+0h] [rbp-F0h] BYREF
  trace_t traceUp; // [rsp+10h] [rbp-E0h] BYREF

  mv = this->mv;
  v5 = *&mv->m_vecAbsOrigin.x;
  *&mv = mv->m_vecAbsOrigin.z;
  *&vecEnd.x = v5;
  LODWORD(vecEnd.z) = mv;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  v7 = *(this->_vptr_IGameMovement + 13);
  vecEnd.z = vecEnd.z - 36.0;
  v8 = (vptr_IGameMovement[14])(this, 0, 0);
  v7(this, &this->mv->m_vecAbsOrigin, &vecEnd, v8, 11, trace);
  fraction = trace->fraction;
  result = 0;
  if ( fraction < 1.0 )
  {
    v11 = this->mv;
    memset(&traceUp.m_ShapeAttributes, 0, 31);
    v12 = (fraction * -36.0) + v11->m_vecAbsOrigin.z;
    traceUp.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    vecEnd.z = v12;
    CGameTrace::Init(&traceUp);
    player = this->player;
    m_Value = player->m_Local.m_bDucked.m_Value;
    if ( m_Value )
    {
      (*(player->m_Local._vptr_CPlayerLocalData + 2))(&player->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      player->m_Local.m_bDucked.m_Value = 0;
    }
    v15 = *(this->_vptr_IGameMovement + 13);
    v16 = (*(this->_vptr_IGameMovement + 14))(this, 0, 0);
    v15(this, &vecEnd, &vecEnd, v16, 11, &traceUp);
    v17 = this->player;
    if ( m_Value != v17->m_Local.m_bDucked.m_Value )
    {
      (*(v17->m_Local._vptr_CPlayerLocalData + 2))(&v17->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17->m_Local.m_bDucked.m_Value = m_Value;
    }
    return !traceUp.startsolid;
  }
  return result;
}


// CGameMovement::Duck  (line 4574, @0x000000000225d2e0, libserver.so)  // inlines: CGameTrace, FractionDucked, FractionUnDucked, GetFlags, IsDead, NetworkStateChanged, RnCollisionAttr_t, Set, operator=<bool>, operator=<int>, operator=<unsigned int>, operator><unsigned int>
// calls: CBaseEntity::GetGroundEntity, CBaseEntity::GetHealth, CGameTrace::Init, CPlayerLocalData::NetworkVar_m_bDucking::NetworkStateChanged, CPlayerLocalData::NetworkVar_m_nDuckTimeMsecs::NetworkStateChanged, CPlayerLocalData::NetworkVar_m_nDuckJumpTimeMsecs::NetworkStateChanged, CBaseEntity::AddFlag
void __fastcall CGameMovement::Duck(CGameMovement *const this)
{
  CMoveData *mv; // rax
  ButtonBitMask_t m_nButtons; // rbx
  CBaseEntity *GroundEntity; // r15
  CBasePlayer *player; // rax
  unsigned int m_Value; // ecx
  unsigned int v7; // r14d
  unsigned int v8; // r13d
  CMoveData *v9; // rax
  bool v10; // r14
  bool v11; // r13
  CBasePlayer *v12; // rax
  CBasePlayer *v13; // rbx
  bool v14; // zf
  CBasePlayer *v15; // rax
  int v16; // edx
  double v17; // xmm0_8
  float v18; // xmm1_4
  CBasePlayer *v19; // rbx
  CBasePlayer *v20; // rdi
  CBasePlayer *v21; // rdi
  int v22; // edx
  CBasePlayer *v23; // rbx
  int v24; // r12d
  CBasePlayer *v25; // rbx
  int v26; // r14d
  CBasePlayer *v27; // rbx
  unsigned int v28; // eax
  int v29; // r13d
  float v30; // xmm0_4
  unsigned __int8 v31; // [rsp+10h] [rbp-F0h]
  char v32; // [rsp+14h] [rbp-ECh]
  int m_nOldButtons; // [rsp+18h] [rbp-E8h]
  CBasePlayer *v34; // [rsp+18h] [rbp-E8h]
  CBasePlayer *v35; // [rsp+18h] [rbp-E8h]
  float v36; // [rsp+18h] [rbp-E8h]
  trace_t trace; // [rsp+20h] [rbp-E0h] BYREF

  mv = this->mv;
  m_nButtons = mv->m_nButtons;
  m_nOldButtons = mv->m_nOldButtons;
  GroundEntity = CBaseEntity::GetGroundEntity(this->player);
  player = this->player;
  m_Value = player->m_fFlags.m_Value;
  v7 = player->m_Local.m_nJumpTimeMsecs.m_Value;
  v8 = player->m_Local.m_nDuckJumpTimeMsecs.m_Value;
  v9 = this->mv;
  v32 = m_Value;
  if ( (v9->m_nButtons & 4) != 0 )
    v9->m_nOldButtons |= 4u;
  else
    v9->m_nOldButtons &= ~4u;
  if ( CBaseEntity::GetHealth(this->player) <= 0 )
    return;
  v31 = m_nButtons ^ m_nOldButtons;
  v10 = v7 != 0;
  v11 = v8 != 0;
  (*(this->_vptr_IGameMovement + 61))(this);
  v12 = this->player;
  if ( (this->mv->m_nButtons & 4) != 0 )
    goto LABEL_5;
  if ( v12->m_Local.m_bDucking.m_Value || (v32 & 2) != 0 )
  {
    if ( v10 )
      goto LABEL_5;
    if ( v12->m_Local.m_bInDuckJump.m_Value )
    {
      memset(&trace.m_ShapeAttributes, 0, 31);
      trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&trace);
      if ( (*(this->_vptr_IGameMovement + 66))(this, &trace) != 0 )
      {
        (*(this->_vptr_IGameMovement + 68))(this, &trace);
        if ( trace.fraction < 1.0 )
        {
          v25 = this->player;
          v26 = (((1.0 - trace.fraction) * 200.0) + 800.0);
          if ( v26 != v25->m_Local.m_nDuckJumpTimeMsecs.m_Value )
          {
            CPlayerLocalData::NetworkVar_m_nDuckJumpTimeMsecs::NetworkStateChanged(
              &v25->m_Local.m_nDuckJumpTimeMsecs,
              -1,
              -1);
            v25->m_Local.m_nDuckJumpTimeMsecs.m_Value = v26;
          }
        }
      }
    }
    if ( v11 )
      return;
    v13 = this->player;
    if ( !v13->m_Local.m_bAllowAutoMovement.m_Value && GroundEntity != 0 && !v13->m_Local.m_bDucking.m_Value )
      return;
    if ( (m_nOldButtons & 4 & v31) != 0 )
    {
      if ( (v32 & 2) != 0 )
      {
        if ( v13->m_Local.m_nDuckTimeMsecs.m_Value != 1000 )
        {
          CPlayerLocalData::NetworkVar_m_nDuckTimeMsecs::NetworkStateChanged(&v13->m_Local.m_nDuckTimeMsecs, -1, -1);
          v13->m_Local.m_nDuckTimeMsecs.m_Value = 1000;
        }
      }
      else if ( v13->m_Local.m_bDucking.m_Value && !v13->m_Local.m_bDucked.m_Value )
      {
        v28 = v13->m_Local.m_nDuckTimeMsecs.m_Value;
        v29 = 1000;
        v30 = (1000 - v28) / 400.0;
        if ( v30 <= 1.0 )
        {
          v29 = 800;
          if ( v30 >= 0.0 )
            v29 = (v30 * 200.0) + 800;
        }
        if ( v28 != v29 )
        {
          CPlayerLocalData::NetworkVar_m_nDuckTimeMsecs::NetworkStateChanged(&v13->m_Local.m_nDuckTimeMsecs, -1, -1);
          v13->m_Local.m_nDuckTimeMsecs.m_Value = v29;
        }
      }
    }
    v14 = (*(this->_vptr_IGameMovement + 64))(this) == 0;
    v15 = this->player;
    if ( v14 )
    {
      if ( v15->m_Local.m_nDuckTimeMsecs.m_Value != 1000 )
      {
        (*(this->_vptr_IGameMovement + 69))(this, 1.0);
        v27 = this->player;
        if ( v27->m_Local.m_nDuckTimeMsecs.m_Value != 1000 )
        {
          (*(v27->m_Local._vptr_CPlayerLocalData + 2))(&v27->m_Local, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v27->m_Local.m_nDuckTimeMsecs.m_Value = 1000;
          v27 = this->player;
        }
        if ( !v27->m_Local.m_bDucked.m_Value )
        {
          (*(v27->m_Local._vptr_CPlayerLocalData + 2))(&v27->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v27->m_Local.m_bDucked.m_Value = 1;
          v27 = this->player;
        }
        if ( v27->m_Local.m_bDucking.m_Value )
        {
          CPlayerLocalData::NetworkVar_m_bDucking::NetworkStateChanged(&v27->m_Local.m_bDucking, -1, -1);
          v27->m_Local.m_bDucking.m_Value = 0;
          v27 = this->player;
        }
        CBaseEntity::AddFlag(v27, 2);
      }
      return;
    }
    if ( !v15->m_Local.m_bDucking.m_Value && !v15->m_Local.m_bDucked.m_Value )
      return;
    v16 = 1000 - v15->m_Local.m_nDuckTimeMsecs.m_Value;
    if ( v16 < 0 )
    {
      v16 = 0;
    }
    else if ( v16 > 200 )
    {
      goto LABEL_77;
    }
    if ( GroundEntity != 0 )
    {
      v17 = 0.0;
      v18 = v16 / 200.0;
      if ( v18 <= 1.0 )
      {
        *&v17 = 1065353216;
        if ( v18 >= 0.0 )
        {
          HIDWORD(v17) = 0;
          *&v17 = (3.0 * ((1.0 - v18) * (1.0 - v18)))
                - ((((1.0 - v18) * (1.0 - v18)) + ((1.0 - v18) * (1.0 - v18))) * (1.0 - v18));
        }
      }
      (*(this->_vptr_IGameMovement + 69))(this, v17);
      v19 = this->player;
      if ( !v19->m_Local.m_bDucking.m_Value )
      {
        CPlayerLocalData::NetworkVar_m_bDucking::NetworkStateChanged(&v19->m_Local.m_bDucking, -1, -1);
        v19->m_Local.m_bDucking.m_Value = 1;
      }
      return;
    }
LABEL_77:
    (*(this->_vptr_IGameMovement + 62))(this);
    return;
  }
  if ( !v10 )
  {
    if ( CBaseEntity::GetHealth(this->player) > 0 )
    {
      v20 = this->player;
      if ( (v20->m_afPhysicsFlags & 8) == 0 && (*(v20->_vptr_IHandleEntity + 346))(v20) == 0 )
      {
        v21 = this->player;
        if ( v21->m_Local.m_nDuckJumpTimeMsecs.m_Value == 0 )
        {
          v36 = *((*(v21->_vptr_IHandleEntity + 171))(v21) + 8);
          if ( fabs(v36 - *((*(this->_vptr_IGameMovement + 11))(this, 0) + 8)) > 0.1 )
            (*(this->_vptr_IGameMovement + 69))(this, 0.0);
        }
      }
    }
    return;
  }
LABEL_5:
  if ( (v31 & m_nButtons & 4) == 0 || (v32 & 2) != 0 || v10 || v11 )
  {
LABEL_13:
    if ( !v12->m_Local.m_bDucking.m_Value )
      goto LABEL_14;
    goto LABEL_46;
  }
  if ( v12->m_Local.m_nDuckTimeMsecs.m_Value != 1000 )
  {
    v34 = this->player;
    (*(v12->m_Local._vptr_CPlayerLocalData + 2))(&v12->m_Local, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v34->m_Local.m_nDuckTimeMsecs.m_Value = 1000;
    v12 = this->player;
  }
  if ( !v12->m_Local.m_bDucking.m_Value )
  {
    v35 = v12;
    (*(v12->m_Local._vptr_CPlayerLocalData + 2))(&v12->m_Local, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v35->m_Local.m_bDucking.m_Value = 1;
    v12 = this->player;
    goto LABEL_13;
  }
LABEL_46:
  if ( v10 || v11 )
  {
LABEL_14:
    if ( v10 )
    {
      if ( (v32 & 2) != 0 )
      {
        if ( (this->mv->m_nButtons & 4) == 0 )
        {
          memset(&trace.m_ShapeAttributes, 0, 31);
          trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
          CGameTrace::Init(&trace);
          if ( (*(this->_vptr_IGameMovement + 66))(this, &trace) != 0 )
          {
            (*(this->_vptr_IGameMovement + 68))(this, &trace);
            v23 = this->player;
            v24 = (((1.0 - trace.fraction) * 200.0) + 800.0);
            if ( v24 != v23->m_Local.m_nDuckJumpTimeMsecs.m_Value )
            {
              CPlayerLocalData::NetworkVar_m_nDuckJumpTimeMsecs::NetworkStateChanged(
                &v23->m_Local.m_nDuckJumpTimeMsecs,
                -1,
                -1);
              v23->m_Local.m_nDuckJumpTimeMsecs.m_Value = v24;
            }
          }
        }
      }
      else
      {
        (*(this->_vptr_IGameMovement + 67))(this);
      }
    }
    return;
  }
  v22 = 0;
  if ( (1000 - v12->m_Local.m_nDuckTimeMsecs.m_Value) >= 0 )
    v22 = 1000 - v12->m_Local.m_nDuckTimeMsecs.m_Value;
  if ( v22 > 400 || (v32 & 2) != 0 || GroundEntity == 0 )
    (*(this->_vptr_IGameMovement + 63))(this);
  else
    (*(this->_vptr_IGameMovement + 69))(this);
}


// CEntityTemporaryMover::CEntityTemporaryMover  (line 4816, @0x0000000002261c80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CEntityTemporaryMover::CEntityTemporaryMover(CEntityTemporaryMover *const this)
{
  this->m_List.m_Size = 0;
  this->m_List.m_Memory.m_pMemory = 0;
  this->m_List.m_Memory.m_nAllocationCount = 0;
  this->m_List.m_Memory.m_nGrowSize = 0;
}


// CEntityTemporaryMover::~CEntityTemporaryMover  (line 4820, @0x0000000002261cb0, libserver.so)  // inlines: Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::SetAbsOrigin, CUtlMemory<CEntityTemporaryMover::MovedEntity_t, int>::Purge
// callers: CGameMovement::PlayerMove
void __fastcall CEntityTemporaryMover::~CEntityTemporaryMover(CEntityTemporaryMover *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // rax
  bool v5; // zf

  if ( this->m_List.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = v2;
      ++v3;
      v2 += 24;
      CBaseEntity::SetAbsOrigin(
        *(&this->m_List.m_Memory.m_pMemory->m_pEntity + v4),
        (&this->m_List.m_Memory.m_pMemory->m_vOriginalAbsPosition + v4));
    }
    while ( this->m_List.m_Size > v3 );
  }
  v5 = (this->m_List.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_List.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CEntityTemporaryMover::MovedEntity_t,int>::Purge(&this->m_List.m_Memory);
    if ( (this->m_List.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityTemporaryMover::MovedEntity_t,int>::Purge(&this->m_List.m_Memory);
  }
}


// CEntityTemporaryMover::Push  (line 4829, @0x0000000002274fe0, libserver.so)  // inlines: AddToTail, GrowMemory, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin, CUtlMemory<CEntityTemporaryMover::MovedEntity_t, int>::Grow
void __fastcall CEntityTemporaryMover::Push(CEntityTemporaryMover *const this, CBaseEntity *pEntity)
{
  __int64 m_Size; // r12
  int v5; // eax
  CEntityTemporaryMover::MovedEntity_t *v6; // rbx

  m_Size = this->m_List.m_Size;
  v5 = this->m_List.m_Size;
  if ( m_Size == this->m_List.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityTemporaryMover::MovedEntity_t,int>::Grow(&this->m_List.m_Memory, 1);
    v5 = this->m_List.m_Size;
  }
  this->m_List.m_Size = v5 + 1;
  v6 = &this->m_List.m_Memory.m_pMemory[m_Size];
  v6->m_pEntity = pEntity;
  v6->m_vOriginalAbsPosition = *CBaseEntity::GetAbsOrigin(pEntity);
}


// CGameMovement::PlayerMove  (line 4849, @0x00000000022782e0, libserver.so)  // inlines: CEntityTemporaryMover, CUtlMemory, CUtlVector, CUtlVectorBase, GetBool, GetFloat, GetInt, GetMoveType, GetSingleton, GetWaterLevel, Init, MoveHelper, NetworkStateChanged, Set, SetMoveCollide, fpmax, operator=<MoveCollide_t>, operator=<float>, operator><int>
// calls: AngleVectors, CBaseEntity::GetGroundEntity, CBaseEntity::SetMoveType, DevMsg, CEntityTemporaryMover::~CEntityTemporaryMover, CGameMovement::CheckInterval, CGameMovement::CheckStuck, CGameMovement::FullNoClipMove, CGameMovement::FullObserverMove, _Unwind_Resume
// strings: "Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n"
// globals: jpt_22784B4
void __fastcall CGameMovement::PlayerMove(CGameMovement *const this)
{
  int (**vptr_IGameMovement)(...); // rax
  CMoveData *mv; // rax
  CMoveData *v4; // rax
  CBasePlayer *player; // rdi
  MoveType_t m_Value; // al
  CBaseEntity *GroundEntity; // rax
  CBasePlayer *v8; // r12
  CMoveData *v9; // rdx
  float v10; // xmm2_4
  unsigned __int8 *v11; // rax
  CBasePlayer *v12; // rdi
  int v13; // edx
  CBasePlayer *v14; // r12
  CMoveData *v15; // rax
  float v16; // xmm0_4
  __m128i v17; // xmm3
  int v18; // r14d
  float v19; // [rsp+Ch] [rbp-44h]
  CEntityTemporaryMover movedEntities; // [rsp+10h] [rbp-40h] BYREF

  movedEntities.m_List.m_Size = 0;
  vptr_IGameMovement = this->_vptr_IGameMovement;
  movedEntities.m_List.m_Memory.m_pMemory = 0;
  movedEntities.m_List.m_Memory.m_nAllocationCount = 0;
  movedEntities.m_List.m_Memory.m_nGrowSize = 0;
  vptr_IGameMovement[56](this);
  mv = this->mv;
  mv->m_outWishVel.x = 0.0;
  mv->m_outWishVel.y = 0.0;
  mv->m_outWishVel.z = 0.0;
  v4 = this->mv;
  v4->m_outJumpVel.x = 0.0;
  v4->m_outJumpVel.y = 0.0;
  v4->m_outJumpVel.z = 0.0;
  (*(IMoveHelper::sm_pSingleton->_vptr_IMoveHelper + 2))(IMoveHelper::sm_pSingleton);
  (*(this->_vptr_IGameMovement + 57))(this);
  AngleVectors(&this->mv->m_vecViewAngles, &this->m_vecForward, &this->m_vecRight, &this->m_vecUp);
  player = this->player;
  m_Value = player->m_MoveType.m_Value;
  if ( (m_Value & 0xFD) == 8 || m_Value <= MoveType_t::MOVETYPE_ISOMETRIC || player->m_pl.deadflag )
  {
    if ( m_Value != MoveType_t::MOVETYPE_WALK )
    {
LABEL_4:
      (*(this->_vptr_IGameMovement + 55))(this, 0);
LABEL_5:
      player = this->player;
      goto LABEL_6;
    }
  }
  else
  {
    if ( (*(this->_vptr_IGameMovement + 52))(this) != 0
      && CGameMovement::CheckInterval(this, STUCK)
      && CGameMovement::CheckStuck(this) != 0 )
    {
      goto LABEL_18;
    }
    player = this->player;
    if ( player->m_MoveType.m_Value != MoveType_t::MOVETYPE_WALK )
      goto LABEL_4;
  }
  v15 = this->mv;
  if ( (*v15 & 2) != 0 || sv_optimizedmovement.m_pParent->m_Value.m_nValue == 0 )
    goto LABEL_4;
  if ( v15->m_vecVelocity.z > 250.0 )
  {
    (*(this->_vptr_IGameMovement + 75))(this, 0);
    goto LABEL_5;
  }
LABEL_6:
  this->m_nOldWaterLevel = player->m_nWaterLevel.m_Value;
  GroundEntity = CBaseEntity::GetGroundEntity(player);
  v8 = this->player;
  if ( GroundEntity != 0 )
  {
LABEL_7:
    v9 = this->mv;
    goto LABEL_8;
  }
  v16 = v8->m_Local.m_flFallVelocity.m_Value;
  if ( v16 <= 0.0 || v8->m_MoveType.m_Value != MoveType_t::MOVETYPE_WALK )
  {
    v9 = this->mv;
    v17 = _mm_xor_ps(LODWORD(v9->m_vecVelocity.z), 0x80000000);
    v18 = _mm_cvtsi128_si32(v17);
    if ( *v17.m128i_i32 == v16 )
      goto LABEL_8;
    (*(v8->m_Local._vptr_CPlayerLocalData + 2))(&v8->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(v8->m_Local.m_flFallVelocity.m_Value) = v18;
    v8 = this->player;
    goto LABEL_7;
  }
  v9 = this->mv;
  v19 = fmaxf(v16, -v9->m_vecVelocity.z);
  if ( v16 != v19 )
  {
    (*(v8->m_Local._vptr_CPlayerLocalData + 2))(&v8->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8->m_Local.m_flFallVelocity.m_Value = v19;
    v8 = this->player;
    v9 = this->mv;
  }
LABEL_8:
  this->m_nOnLadder = 0;
  (*(v8->_vptr_IHandleEntity + 418))(v8, v8->m_pSurfaceData, &v9->m_vecAbsOrigin, &v9->m_vecVelocity);
  (*(this->_vptr_IGameMovement + 65))(this);
  (*(this->_vptr_IGameMovement + 60))(this);
  v11 = this->player;
  if ( v11[2520] != 0 || (v11[440] & 8) != 0 )
    goto LABEL_15;
  if ( (*(this->_vptr_IGameMovement + 45))(this) != 0 )
  {
LABEL_14:
    v11 = this->player;
LABEL_15:
    v13 = v11[341];
    goto LABEL_16;
  }
  v12 = this->player;
  v13 = v12->m_MoveType.m_Value;
  if ( v13 == 9 )
  {
    CBaseEntity::SetMoveType(v12, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    v14 = this->player;
    if ( v14->m_MoveCollide.m_Value != MoveCollide_t::MOVECOLLIDE_DEFAULT )
    {
      (*(v14->_vptr_IHandleEntity + 22))(this->player, 340, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v14->m_MoveCollide.m_Value = MoveCollide_t::MOVECOLLIDE_DEFAULT;
      goto LABEL_14;
    }
    v13 = v14->m_MoveType.m_Value;
  }
LABEL_16:
  switch ( v13 )
  {
    case 0:
    case 7:
      break;
    case 1:
    case 2:
      (*(this->_vptr_IGameMovement + 29))(this);
      break;
    case 4:
    case 5:
      (*(this->_vptr_IGameMovement + 39))(this);
      break;
    case 8:
      CGameMovement::FullNoClipMove(
        this,
        sv_noclipspeed.m_pParent->m_Value.m_fValue,
        sv_noclipaccelerate.m_pParent->m_Value.m_fValue,
        v10);
      break;
    case 9:
      (*(this->_vptr_IGameMovement + 40))(this);
      break;
    case 10:
      CGameMovement::FullObserverMove(this);
      break;
    case 11:
      (*(this->_vptr_IGameMovement + 41))(this);
      break;
    default:
      DevMsg(1, "Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n", v13, 1);
      break;
  }
LABEL_18:
  CEntityTemporaryMover::~CEntityTemporaryMover(&movedEntities);
}


// CGameMovement::PerformFlyCollisionResolution  (line 5033, @0x0000000002261d40, libserver.so)  // inlines: DotProduct, GetFloat, GetMoveCollide, Init, VectorMultiply, VectorScale
// calls: CGameMovement::PushEntity
// callers: CGameMovement::FullTossMove
void __fastcall CGameMovement::PerformFlyCollisionResolution(
        CGameMovement *const this,
        trace_t *const pm,
        Vector *const move)
{
  CBasePlayer *player; // rax
  double v7; // xmm0_8
  CMoveData *mv; // rax
  float v9; // xmm3_4
  float x; // xmm2_4
  CMoveData *v11; // rax
  float v12; // xmm0_4
  float z; // [rsp+Ch] [rbp-24h]

  player = this->player;
  if ( player->m_MoveCollide.m_Value <= MoveCollide_t::MOVECOLLIDE_FLY_BOUNCE )
  {
    *&v7 = 1065353216;
    if ( player->m_MoveCollide.m_Value == MoveCollide_t::MOVECOLLIDE_FLY_BOUNCE )
    {
      HIDWORD(v7) = 0;
      *&v7 = 2.0 - player->m_surfaceFriction;
    }
    (*(this->_vptr_IGameMovement + 51))(this, &this->mv->m_vecVelocity, &pm->plane, &this->mv->m_vecVelocity, v7);
  }
  z = pm->plane.normal.z;
  if ( z > (*(this->_vptr_IGameMovement + 12))(this) )
  {
    mv = this->mv;
    v9 = mv->m_vecVelocity.z;
    if ( (gpGlobals->frametime * sv_gravity.m_pParent->m_Value.m_fValue) > v9 )
    {
      (*(this->_vptr_IGameMovement + 75))(this, pm);
      this->mv->m_vecVelocity.z = 0.0;
      mv = this->mv;
      v9 = mv->m_vecVelocity.z;
    }
    x = mv->m_vecVelocity.x;
    if ( (((x * x) + (mv->m_vecVelocity.y * mv->m_vecVelocity.y)) + (v9 * v9)) >= 900.0
      && this->player->m_MoveCollide.m_Value == MoveCollide_t::MOVECOLLIDE_FLY_BOUNCE )
    {
      v12 = (1.0 - pm->fraction) * gpGlobals->frametime * 0.9;
      move->x = x * v12;
      move->y = mv->m_vecVelocity.y * v12;
      move->z = v12 * mv->m_vecVelocity.z;
      CGameMovement::PushEntity(this, move, pm);
    }
    else
    {
      (*(this->_vptr_IGameMovement + 75))(this, pm);
      v11 = this->mv;
      v11->m_vecVelocity.x = 0.0;
      v11->m_vecVelocity.y = 0.0;
      v11->m_vecVelocity.z = 0.0;
    }
  }
}


// CGameMovement::FullTossMove  (line 5102, @0x00000000022788a0, libserver.so)  // inlines: CGameTrace, GetFloat, RnCollisionAttr_t, VectorAdd, VectorCompare, VectorCopy, VectorMultiply, VectorScale, VectorSubtract, operator==
// calls: CGameTrace::Init, AngleVectors, VectorNormalize, CGameMovement::Accelerate, CBaseEntity::GetGroundEntity, CGameMovement::CheckVelocity, CGameMovement::PushEntity, CGameMovement::PerformFlyCollisionResolution
// strings: "FullTossMovePreGravity", "FullTossMoveBaseVelocity", "FullTossMovePush"
void __fastcall CGameMovement::FullTossMove(CGameMovement *const this)
{
  CMoveData *mv; // rax
  CMoveData *v3; // rax
  vec_t v4; // xmm0_4
  float v5; // xmm1_4
  double v6; // xmm0_8
  float v7; // xmm2_4
  CBasePlayer *v8; // rax
  float v9; // xmm1_4
  float v10; // xmm2_4
  CMoveData *v11; // rax
  CBasePlayer *player; // rdx
  CMoveData *v13; // rax
  CBasePlayer *v14; // rdx
  float frametime; // xmm0_4
  CMoveData *v16; // rax
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  __int64 v20; // xmm0_8
  float fmove; // [rsp+8h] [rbp-118h]
  float smove; // [rsp+Ch] [rbp-114h]
  Vector forward; // [rsp+10h] [rbp-110h] BYREF
  Vector right; // [rsp+20h] [rbp-100h] BYREF
  Vector up; // [rsp+30h] [rbp-F0h] BYREF
  Vector wishdir; // [rsp+40h] [rbp-E0h] BYREF
  trace_t pm; // [rsp+50h] [rbp-D0h] BYREF

  memset(&pm.m_ShapeAttributes, 0, 31);
  pm.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&pm);
  (*(this->_vptr_IGameMovement + 53))(this);
  mv = this->mv;
  if ( mv->m_flForwardMove != 0.0 || mv->m_flSideMove != 0.0 || mv->m_flUpMove != 0.0 )
  {
    AngleVectors(&mv->m_vecViewAngles, &forward, &right, &up);
    v3 = this->mv;
    fmove = v3->m_flForwardMove;
    smove = v3->m_flSideMove;
    VectorNormalize(&forward);
    VectorNormalize(&right);
    v4 = ((forward.z * fmove) + (right.z * smove)) + this->mv->m_flUpMove;
    wishdir.y = (forward.y * fmove) + (right.y * smove);
    wishdir.x = (fmove * forward.x) + (smove * right.x);
    wishdir.z = v4;
    v5 = VectorNormalize(&wishdir);
    *&v6 = LODWORD(this->mv->m_flMaxSpeed);
    *&v6 = fminf(*&v6, v5);
    CGameMovement::Accelerate(this, &wishdir, v6, sv_accelerate.m_pParent->m_Value.m_fValue, v7);
    mv = this->mv;
  }
  if ( mv->m_vecVelocity.z > 0.0 )
    (*(this->_vptr_IGameMovement + 75))(this, 0);
  if ( CBaseEntity::GetGroundEntity(this->player) == 0
    || (v8 = this->player, vec3_origin.x != v8->m_vecBaseVelocity.m_Value.x)
    || (v9 = vec3_origin.y) != v8->m_vecBaseVelocity.m_Value.y
    || (v10 = vec3_origin.z) != v8->m_vecBaseVelocity.m_Value.z
    || (v11 = this->mv, vec3_origin.x != v11->m_vecVelocity.x)
    || v9 != v11->m_vecVelocity.y
    || v10 != v11->m_vecVelocity.z )
  {
    CGameMovement::CheckVelocity(this, "FullTossMovePreGravity");
    player = this->player;
    if ( player->m_MoveType.m_Value == MoveType_t::MOVETYPE_FLYGRAVITY )
    {
      (*(this->_vptr_IGameMovement + 36))(this);
      player = this->player;
    }
    v13 = this->mv;
    v13->m_vecVelocity.x = v13->m_vecVelocity.x + player->m_vecBaseVelocity.m_Value.x;
    v13->m_vecVelocity.y = v13->m_vecVelocity.y + player->m_vecBaseVelocity.m_Value.y;
    v13->m_vecVelocity.z = v13->m_vecVelocity.z + player->m_vecBaseVelocity.m_Value.z;
    CGameMovement::CheckVelocity(this, "FullTossMoveBaseVelocity");
    v14 = this->player;
    frametime = gpGlobals->frametime;
    v16 = this->mv;
    x = v16->m_vecVelocity.x;
    wishdir.x = frametime * x;
    y = v16->m_vecVelocity.y;
    wishdir.y = frametime * y;
    z = v16->m_vecVelocity.z;
    wishdir.z = frametime * z;
    v16->m_vecVelocity.x = x - v14->m_vecBaseVelocity.m_Value.x;
    v16->m_vecVelocity.y = y - v14->m_vecBaseVelocity.m_Value.y;
    v16->m_vecVelocity.z = z - v14->m_vecBaseVelocity.m_Value.z;
    CGameMovement::PushEntity(this, &wishdir, &pm);
    CGameMovement::CheckVelocity(this, "FullTossMovePush");
    v20 = 1065353216;
    if ( pm.fraction != 1.0 )
      CGameMovement::PerformFlyCollisionResolution(this, &pm, &wishdir);
    (*(this->_vptr_IGameMovement + 53))(this, *&v20);
  }
}


// CGameMovement::IsometricMove  (line 5199, @0x0000000002261f20, libserver.so)  // inlines: Init, SetAbsOrigin, VectorMA, operator=
// calls: AngleVectors, VectorNormalize
void __fastcall CGameMovement::IsometricMove(CGameMovement *const this)
{
  CMoveData *mv; // rax
  float frametime; // xmm4_4
  CMoveData *v4; // rax
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  CMoveData *v7; // rax
  float fmove; // [rsp+4h] [rbp-5Ch]
  float smove; // [rsp+8h] [rbp-58h]
  Vector forward; // [rsp+10h] [rbp-50h] BYREF
  Vector right; // [rsp+20h] [rbp-40h] BYREF
  Vector up; // [rsp+30h] [rbp-30h] BYREF

  AngleVectors(&this->mv->m_vecViewAngles, &forward, &right, &up);
  mv = this->mv;
  forward.z = 0.0;
  right.z = 0.0;
  fmove = mv->m_flForwardMove;
  smove = mv->m_flSideMove;
  VectorNormalize(&forward);
  VectorNormalize(&right);
  frametime = gpGlobals->frametime;
  v4 = this->mv;
  v5 = (((forward.z * fmove) + (right.z * smove)) * frametime) + v4->m_vecAbsOrigin.z;
  v6 = (((fmove * forward.x) + (smove * right.x)) * frametime) + v4->m_vecAbsOrigin.x;
  v4->m_vecAbsOrigin.y = (((forward.y * fmove) + (right.y * smove)) * frametime) + v4->m_vecAbsOrigin.y;
  v4->m_vecAbsOrigin.z = v5;
  v4->m_vecAbsOrigin.x = v6;
  v7 = this->mv;
  v7->m_vecVelocity.x = 0.0;
  v7->m_vecVelocity.y = 0.0;
  v7->m_vecVelocity.z = 0.0;
}


// CGameMovement::GameHasLadders  (line 5235, @0x0000000002253f40, libserver.so)
bool __fastcall CGameMovement::GameHasLadders(const CGameMovement *const this)
{
  return 1;
}


