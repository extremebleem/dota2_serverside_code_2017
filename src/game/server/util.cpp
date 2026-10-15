// Reconstructed from DWARF by pahole; not original source.

// src/game/server/util.cpp:105
class CTracePassFilter : public CTraceFilter {
public:

private:

	CTracePassFilter(CTracePassFilter &);
	CTracePassFilter(const CTracePassFilter &);
	CTracePassFilter(CBaseEntity *);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTracePassFilter();

	// vtable[2] ShouldHitEntity
	// sizeof = 56
};

// src/game/server/util.cpp:1297
class CWaterTraceFilter : public CTraceFilter {
public:

	CWaterTraceFilter(CWaterTraceFilter &);
	CWaterTraceFilter(const CWaterTraceFilter &);
	CWaterTraceFilter();
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CWaterTraceFilter();

	// vtable[2] ShouldHitEntity
	// sizeof = 48
};

// src/game/server/util.cpp:1669
class CCheckClient : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	unsigned char m_checkPVS[1024];  // +0x11

	unsigned char m_checkVisibilityPVS[1024];  // +0x430

	int m_checkCluster;  // +0x848
	int m_lastcheck;  // +0x84c
	float m_lastchecktime;  // +0x850
	typedef CAutoGameSystem BaseClass;
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CCheckClient *);
	CCheckClient();
	virtual void GameInit(const EventGameInit_t &);
	virtual ~CCheckClient();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// sizeof = 2136
};

// src/game/server/util.cpp:2558
struct convartracker_modifiedconvars_t {
	static datamap_t m_DataMap;

	char pszConvar[256];  // +0x0
	char pszCurrentValue[256];  // +0x100
	char pszOrgValue[256];  // +0x200
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 768
};

// src/game/server/util.cpp:2567
class CGlobalConvarTrackerAndReverter {
private:

	int m_ID;  // +0x0
	bool m_bTracking;  // +0x4

	CGlobalConvarTrackerAndReverter(int);
	void SetTracking(bool);
	int GetID();
	void ConvarChanged(IConVar *, const char *, float);
	void RevertConvars();
	~CGlobalConvarTrackerAndReverter();

	// sizeof = 32
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// UTIL_PrecacheDecal  (line 65, @0x0000000002400a30, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, PrecacheMaterial, Warning
// callers: CDecal::Precache, CProjectedDecal::Precache
// strings: "Late precache of %s\n"
int __fastcall UTIL_PrecacheDecal(const char *name, const CEntityPrecacheContext *pContext, bool preload)
{
  if ( !CBaseEntity::IsPrecacheAllowed() && (*(*engine + 192LL))(engine, name) == 0 )
    Warning("Late precache of %s\n", name);
  PrecacheMaterial(name, pContext);
  return (*(*engine + 184LL))(engine, name, preload);
}


// UTIL_GetPrecachedDecalIndex  (line 86, @0x0000000002400ab0, libserver.so)
// callers: CProjectedDecal::Spawn, CDecal::Spawn
int __fastcall UTIL_GetPrecachedDecalIndex(const char *name)
{
  return (*(*engine + 200LL))(engine, name);
}


// UTIL_GetSimulationInterval  (line 94, @0x0000000002400ad0, libserver.so)
// calls: CBaseEntity::IsSimulatingOnAlternateTicks
float __cdecl UTIL_GetSimulationInterval()
{
  bool IsSimulatingOnAlternateTicks; // al
  float result; // xmm0_4

  IsSimulatingOnAlternateTicks = CBaseEntity::IsSimulatingOnAlternateTicks();
  result = gpGlobals->interval_per_tick;
  if ( IsSimulatingOnAlternateTicks )
    return result + result;
  return result;
}


// CTracePassFilter::~CTracePassFilter  (line 105, @0x0000000002410570, libserver.so)  // inlines: ~CTraceFilter
void __fastcall CTracePassFilter::~CTracePassFilter(CTracePassFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTracePassFilter::~CTracePassFilter  (line 105, @0x0000000002410750, libserver.so)  // inlines: ~CTraceFilter, ~CTracePassFilter
// calls: operator delete
void __fastcall CTracePassFilter::~CTracePassFilter(CTracePassFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTracePassFilter::ShouldHitEntity  (line 110, @0x0000000002411710, libserver.so)
// calls: StandardFilterRules, PassServerEntityFilter
bool __fastcall CTracePassFilter::ShouldHitEntity(CTracePassFilter *const this, CBaseEntity *pHandleEntity)
{
  return StandardFilterRules(pHandleEntity, this->m_attr.m_nInteractsWith)
      && PassServerEntityFilter(pHandleEntity, this->m_pPassEnt);
}


// UTIL_DropToFloor  (line 129, @0x0000000002400b00, libserver.so)  // inlines: CGameTrace, GetCollisionGroup, GetCollisionGroup_Inline, RnCollisionAttr_t, VectorAdd, VectorSubtract, operator+, operator-
// calls: CBaseEntity::SetGroundEntity, CGameTrace::Init, CBaseEntity::GetAbsOrigin, UTIL_TraceEntity, CBaseEntity::SetAbsOrigin
// callers: OnEntityCreatedFromConCommand, CBaseCombatWeapon::Respawn, CItem::CreateItemVPhysicsObject, CItem::Respawn
int __fastcall UTIL_DropToFloor(CBaseEntity *pEntity, uint64 mask, CBaseEntity *pIgnore)
{
  double v6; // xmm0_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // r9d
  const Vector *AbsOrigin; // r15
  const Vector *v12; // rax
  CCollisionProperty *v13; // rax
  int v14; // r9d
  const Vector *v15; // r15
  const Vector *v16; // rax
  vec_t v17; // xmm1_4
  vec_t v18; // xmm0_4
  int result; // eax
  int v20; // r9d
  const Vector *v21; // rax
  vec_t v22; // xmm0_4
  vec_t y; // xmm1_4
  const Vector *v24; // rax
  CCollisionProperty *v25; // rax
  int v26; // r9d
  const Vector *v27; // rax
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  int v30; // [rsp+10h] [rbp-100h]
  float flDownTraceHeight; // [rsp+14h] [rbp-FCh]
  int nCollisionGroup; // [rsp+18h] [rbp-F8h]
  int nCollisionGroupa; // [rsp+18h] [rbp-F8h]
  int nCollisionGroupb; // [rsp+18h] [rbp-F8h]
  const Vector *nCollisionGroupc; // [rsp+18h] [rbp-F8h]
  Vector vecAbsStart; // [rsp+20h] [rbp-F0h] BYREF
  trace_t trace; // [rsp+30h] [rbp-E0h] BYREF

  CBaseEntity::SetGroundEntity(pEntity, 0);
  if ( *((*(pEntity->_vptr_IHandleEntity + 171))(pEntity) + 8) == 0.0 )
    flDownTraceHeight = 256.0;
  else
    flDownTraceHeight = *((*(pEntity->_vptr_IHandleEntity + 171))(pEntity, v6, v7, v8, 0.0) + 8);
  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  m_pCollision = pEntity->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  nCollisionGroup = m_Value;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
  v12 = CBaseEntity::GetAbsOrigin(pEntity);
  UTIL_TraceEntity(pEntity, v12, AbsOrigin, mask, pIgnore, nCollisionGroup, &trace);
  v13 = pEntity->m_pCollision;
  if ( trace.fraction != 0.0 )
  {
    if ( v13 != 0 )
      v20 = v13->m_CollisionGroup.m_Value;
    else
      v20 = 4;
    nCollisionGroupb = v20;
    v21 = CBaseEntity::GetAbsOrigin(pEntity);
    v22 = v21->z - 256.0;
    y = v21->y;
    vecAbsStart.x = v21->x;
    vecAbsStart.z = v22;
    vecAbsStart.y = y;
    v24 = CBaseEntity::GetAbsOrigin(pEntity);
    UTIL_TraceEntity(pEntity, v24, &vecAbsStart, mask, pIgnore, nCollisionGroupb, &trace);
    if ( trace.fraction == 1.0 )
    {
      v25 = pEntity->m_pCollision;
      v26 = v25 != 0 ? v25->m_CollisionGroup.m_Value : 4;
      v30 = v26;
      nCollisionGroupc = CBaseEntity::GetAbsOrigin(pEntity);
      v27 = CBaseEntity::GetAbsOrigin(pEntity);
      v28 = flDownTraceHeight + v27->z;
      v29 = v27->x + 0.0;
      vecAbsStart.y = v27->y + 0.0;
      vecAbsStart.z = v28;
      vecAbsStart.x = v29;
      UTIL_TraceEntity(pEntity, &vecAbsStart, nCollisionGroupc, mask, pIgnore, v30, &trace);
      if ( trace.startsolid )
        return 0;
    }
    goto LABEL_9;
  }
  if ( v13 != 0 )
    v14 = v13->m_CollisionGroup.m_Value;
  else
    v14 = 4;
  nCollisionGroupa = v14;
  v15 = CBaseEntity::GetAbsOrigin(pEntity);
  v16 = CBaseEntity::GetAbsOrigin(pEntity);
  v17 = flDownTraceHeight + v16->z;
  v18 = v16->x + 0.0;
  vecAbsStart.y = v16->y + 0.0;
  vecAbsStart.z = v17;
  vecAbsStart.x = v18;
  UTIL_TraceEntity(pEntity, &vecAbsStart, v15, mask, pIgnore, nCollisionGroupa, &trace);
  result = -1;
  if ( !trace.startsolid )
  {
LABEL_9:
    CBaseEntity::SetAbsOrigin(pEntity, &trace.endpos);
    CBaseEntity::SetGroundEntity(pEntity, trace.m_pEnt);
    return 1;
  }
  return result;
}


// UTIL_CheckBottom  (line 179, @0x0000000002400e60, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CTraceFilter, CTracePassFilter, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, WorldAlignMaxs, WorldAlignMins
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CGamePhysicsQueryInterface::GetPointContents, CGamePhysicsQueryInterface::TraceRay
__int64 __fastcall UTIL_CheckBottom(CBaseEntity *pEntity, CTracePassFilter *pTraceFilter, float a3, float flStepSize)
{
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v7; // rax
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v9; // r15
  const Vector *AbsOrigin; // rax
  CCollisionProperty *v11; // rdi
  const Vector *v12; // r15
  int v13; // r14d
  const Vector *v14; // rax
  float v15; // xmm0_4
  uint64 PointContents; // rax
  vec_t v17; // xmm1_4
  float v18; // xmm5_4
  ConVar *m_pParent; // rax
  float m_fValue; // xmm4_4
  CGamePhysicsQueryInterface *v21; // rdi
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  int v25; // r14d
  float v26; // xmm7_4
  float v27; // xmm3_4
  CGamePhysicsQueryInterface *v28; // rdi
  float v29; // xmm1_4
  uint64 v31; // rax
  uint64 v32; // rax
  float mid; // [rsp+8h] [rbp-1B8h]
  float v34; // [rsp+Ch] [rbp-1B4h]
  float v35; // [rsp+10h] [rbp-1B0h]
  int x; // [rsp+14h] [rbp-1ACh]
  float v37; // [rsp+18h] [rbp-1A8h]
  float v38; // [rsp+1Ch] [rbp-1A4h]
  float v39; // [rsp+20h] [rbp-1A0h]
  float v40; // [rsp+24h] [rbp-19Ch]
  float v41; // [rsp+28h] [rbp-198h]
  uint64 mask; // [rsp+30h] [rbp-190h]
  float v44; // [rsp+38h] [rbp-188h]
  float v45; // [rsp+38h] [rbp-188h]
  float v46; // [rsp+38h] [rbp-188h]
  float v47; // [rsp+3Ch] [rbp-184h]
  float v48; // [rsp+3Ch] [rbp-184h]
  float v49; // [rsp+3Ch] [rbp-184h]
  float v50; // [rsp+3Ch] [rbp-184h]
  Vector start; // [rsp+40h] [rbp-180h] BYREF
  CTracePassFilter traceFilter; // [rsp+50h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-130h] BYREF
  trace_t trace; // [rsp+E0h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  traceFilter.m_attr.m_nHierarchyId = 0;
  memset(&traceFilter.m_attr, 0, 24);
  traceFilter.m_attr.m_nEntityIdToIgnore = -1;
  *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter._vptr_CTraceFilter = off_40D0510;
  if ( pTraceFilter == 0 )
    pTraceFilter = &traceFilter;
  vptr_IHandleEntity = pEntity->_vptr_IHandleEntity;
  traceFilter.m_attr.m_nCollisionGroup = 0;
  traceFilter.m_attr.m_nObjectSetMask = 7;
  traceFilter.m_pPassEnt = pEntity;
  v7 = (vptr_IHandleEntity[123])(pEntity);
  m_pCollision = pEntity->m_pCollision;
  mask = v7;
  if ( m_pCollision != 0 )
    v9 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
  else
    v9 = &vec3_origin;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
  v11 = pEntity->m_pCollision;
  v41 = AbsOrigin->x + v9->x;
  v39 = AbsOrigin->y + v9->y;
  v44 = AbsOrigin->z + v9->z;
  if ( v11 != 0 )
    v12 = (*(v11->_vptr_ICollideable + 2))(v11);
  else
    v12 = &vec3_origin;
  v13 = 0;
  v14 = CBaseEntity::GetAbsOrigin(pEntity);
  v40 = v14->x + v12->x;
  v15 = v14->y + v12->y;
  start.z = v44 - 1.0;
  while ( 1 )
  {
    if ( v13 != 0 )
    {
      v47 = v15;
      start.x = v40;
      start.y = v39;
      PointContents = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &start, 0xFFFFFFFFFFFFFFFFLL);
      v15 = v47;
      if ( PointContents != 1 )
        break;
      v17 = v40;
    }
    else
    {
      v49 = v15;
      start.x = v41;
      start.y = v39;
      v31 = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &start, 0xFFFFFFFFFFFFFFFFLL);
      v15 = v49;
      if ( v31 != 1 )
        break;
      v17 = v41;
    }
    start.y = v15;
    v50 = v15;
    start.x = v17;
    v32 = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &start, 0xFFFFFFFFFFFFFFFFLL);
    v15 = v50;
    if ( v32 != 1 )
      break;
    if ( ++v13 == 2 )
      return 1;
  }
  v18 = v44;
  v45 = v15;
  m_pParent = phys_traceline_radius.m_pParent;
  start.z = v18 + a3;
  start.x = (v41 + v40) * 0.5;
  v34 = (v18 + a3) - (a3 + a3);
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_IsRay = 1;
  ray.m_flRadius = m_fValue;
  ray.m_Delta.y = ((v39 + v15) * 0.5) - ((v39 + v15) * 0.5);
  ray.m_Delta.z = (start.z - (a3 + a3)) - start.z;
  ray.m_Start.w = 0.0;
  ray.m_Delta.x = start.x - start.x;
  memset(&ray.m_Delta.w, 0, 36);
  start.y = (v39 + v15) * 0.5;
  ray.m_Start.x = start.x;
  ray.m_Start.y = start.y;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.z = v18 + a3;
  v21 = g_pPhysicsQuery;
  pTraceFilter->m_attr.m_nInteractsWith |= mask;
  CGamePhysicsQueryInterface::TraceRay(v21, &ray, pTraceFilter, &trace);
  v22 = v45;
  v23 = 0.0;
  if ( trace.fraction != 1.0 )
  {
    x = 0;
    mid = trace.endpos.z;
    while ( 2 )
    {
      v24 = v41;
      if ( x != 0 )
        v24 = v40;
      v25 = 0;
      v26 = v24 - v24;
      v35 = v26 * v26;
      do
      {
        start.x = v24;
        if ( v25 != 0 )
          v27 = v22;
        else
          v27 = v39;
        v37 = v22;
        v38 = v26;
        v46 = v23;
        v28 = g_pPhysicsQuery;
        v48 = v24;
        v29 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        ray.m_Delta.x = v26;
        ray.m_flRadius = v29;
        ray.m_Delta.z = v34 - start.z;
        ray.m_Start.x = v24;
        start.y = v27;
        ray.m_Delta.y = v27 - v27;
        ray.m_Start.w = 0.0;
        memset(&ray.m_Delta.w, 0, 36);
        ray.m_IsRay = 1;
        ray.m_Start.y = v27;
        ray.m_Start.z = start.z;
        ray.m_IsSwept = (((ray.m_Delta.y * ray.m_Delta.y) + v35) + (ray.m_Delta.z * ray.m_Delta.z)) != v23;
        pTraceFilter->m_attr.m_nInteractsWith |= mask;
        CGamePhysicsQueryInterface::TraceRay(v28, &ray, pTraceFilter, &trace);
        v24 = v48;
        v26 = v38;
        v23 = v46;
        v22 = v37;
        if ( trace.fraction == 1.0 )
          return 0;
        if ( (mid - trace.endpos.z) > a3 )
          return 0;
        ++v25;
      }
      while ( v25 != 2 );
      if ( ++x != 2 )
        continue;
      break;
    }
    return 1;
  }
  return 0;
}


// UTIL_PlayerByIndex  (line 254, @0x0000000002401530, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer
// callers: CTonemapController2::Enable, CTonemapController2::Disable, CTonemapController2::UpdateOnRemove, Script_UTIL_MessageText, Script_UTIL_ResetMessageText, PlayerInstanceFromIndex, Script_GetListenServerHost, CEntityDebugGameSystem::DrawDebugSelect, Script_UTIL_MessageText_WithContext, UTIL_GetCommandClient, UTIL_ClipTraceToPlayers, CRecipientFilter::RemoveRecipientsByTeamNumber (145 total)
CBasePlayer *__fastcall UTIL_PlayerByIndex(CEntityIndex playerIndex)
{
  CBasePlayer *v1; // rbx
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rax
  CBasePlayer *m_pInstance; // r12

  v1 = 0;
  if ( gpGlobals != 0
    && playerIndex.m_Data > 0
    && gpGlobals->maxClients >= playerIndex.m_Data
    && playerIndex.m_Data <= 0x7FFE )
  {
    v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[playerIndex.m_Data >> 9];
    if ( v2 != 0 )
    {
      v3 = &v2[playerIndex.m_Data & 0x1FF];
      if ( v3 != 0 && playerIndex.m_Data == (v3->m_EHandle.m_Index & 0x7FFF) )
      {
        m_pInstance = v3->m_pInstance;
        if ( v3->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
          return m_pInstance;
      }
    }
  }
  return v1;
}


// UTIL_PlayerBySlot  (line 269, @0x00000000024015d0, libserver.so)
// calls: UTIL_PlayerByIndex
// callers: CFogSystem::InitMasterController, CBaseAnimatingController::UpdateGameAnimations, Script_EmitAnnouncerSoundForPlayer
CBasePlayer *__fastcall UTIL_PlayerBySlot(CPlayerSlot playerSlot)
{
  return UTIL_PlayerByIndex((playerSlot.m_Data + 1));
}


// UTIL_PlayerByName  (line 274, @0x00000000024015e0, libserver.so)
// calls: UTIL_PlayerByIndex, V_stricmp_fast
CBasePlayer *__fastcall UTIL_PlayerByName(const char *name)
{
  CEntityIndex v2; // ebx
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // r12
  __int64 v5; // rax

  if ( name == 0 || *name == 0 || gpGlobals->maxClients <= 0 )
    return 0;
  v2.m_Data = 1;
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(v2);
    v4 = v3;
    if ( v3 != 0 && v3->m_iConnected != PlayerConnectedState::PlayerDisconnected )
    {
      v5 = (*(v3->_vptr_IHandleEntity + 106))(v3);
      if ( V_stricmp_fast(v5, name) == 0 )
        break;
    }
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 0;
  }
  return v4;
}


// UTIL_PlayerByUserId  (line 298, @0x0000000002401680, libserver.so)  // inlines: GetUserID, entindex
// calls: UTIL_PlayerByIndex, CEntityInstance::GetEntityIndex
// callers: CSteamWorksGameStatsServer::AddSessionIDsToTable, CEventLog::PrintPlayerEvent, CFishPool::FireGameEvent, CHLTVDirector::CreateShotFromEvent, CDOTAGamerules::ShouldTimeoutClient, CDOTAGCServerSystem::FireGameEvent
CBasePlayer *__fastcall UTIL_PlayerByUserId(int userID)
{
  CEntityIndex v2; // ebx
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // r12
  CEntityIndex v5; // eax

  v2.m_Data = 1;
  if ( gpGlobals->maxClients <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(v2);
    v4 = v3;
    if ( v3 != 0 && v3->m_iConnected != PlayerConnectedState::PlayerDisconnected )
    {
      v5.m_Data = CEntityInstance::GetEntityIndex(v3).m_Data;
      if ( userID == (*(*engine + 224LL))(engine, (v5.m_Data - 1)) )
        break;
    }
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 0;
  }
  return v4;
}


// UTIL_GetLocalPlayer  (line 323, @0x0000000002401720, libserver.so)
// calls: UTIL_PlayerByIndex
// callers: CBaseEntity::DrawAutoAimOverlay, SendToConsole, CBaseModelEntity::SUB_AllowedToFade, CBaseEntity::GatherCriteria, CBaseCombatCharacter::FindMissTarget, CColorCorrectionVolume::PassesTriggerFilters, CColorCorrectionSystem::PostSpawnGroupLoad, GetCommentaryPlayer, CEnvDOFController::UpdateParamBlend, CEnvInstructorHint::InputShowHint, CBlood::BloodPosition, CEnvZoom::InputUnZoom (43 total)
CBasePlayer *__cdecl UTIL_GetLocalPlayer()
{
  CBasePlayer *result; // rax

  result = 0;
  if ( gpGlobals->maxClients <= 1 )
    return UTIL_PlayerByIndex(1);
  return result;
}


// UTIL_GetNearestPlayer  (line 346, @0x0000000002401750, libserver.so)  // inlines: DistToSqr, LengthSqr
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin
CBasePlayer *__fastcall UTIL_GetNearestPlayer(const Vector *const vecPos)
{
  int v2; // ebx
  CBasePlayer *v3; // r14
  CBasePlayer *v4; // rax
  CBasePlayer *v5; // r15
  const Vector *AbsOrigin; // rax
  float flNearestDistToSq; // [rsp+Ch] [rbp-34h]

  if ( gpGlobals->maxClients <= 0 )
    return 0;
  v2 = 1;
  v3 = 0;
  flNearestDistToSq = 3.4028235e38;
  do
  {
    v4 = UTIL_PlayerByIndex(v2);
    v5 = v4;
    if ( v4 != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      if ( flNearestDistToSq > ((((vecPos->x - AbsOrigin->x) * (vecPos->x - AbsOrigin->x))
                               + ((vecPos->y - AbsOrigin->y) * (vecPos->y - AbsOrigin->y)))
                              + ((vecPos->z - AbsOrigin->z) * (vecPos->z - AbsOrigin->z))) )
      {
        v3 = v5;
        flNearestDistToSq = (((vecPos->x - AbsOrigin->x) * (vecPos->x - AbsOrigin->x))
                           + ((vecPos->y - AbsOrigin->y) * (vecPos->y - AbsOrigin->y)))
                          + ((vecPos->z - AbsOrigin->z) * (vecPos->z - AbsOrigin->z));
      }
    }
    ++v2;
  }
  while ( gpGlobals->maxClients >= v2 );
  return v3;
}


// UTIL_GetListenServerHost  (line 373, @0x0000000002401820, libserver.so)
// calls: AppIsDedicatedServer, UTIL_PlayerByIndex, Warning
// callers: SendToConsole, CEntFireAutoCompletionFunctor::CommandCallback, GetLocalPlayer, NDebugOverlay::Circle, NDebugOverlay::Cross, CEnvSoundscape::DrawEntityDebugOverlays, soundscape_flush, CDOTA_TeamCommander::DrawDebugGrid, CNavEditor::GetEditVectors, nav_shift, CommandNavCenterInWorld, CNavDrawLadder::DrawLadder (74 total)
// strings: "UTIL_GetListenServerHost() called from a dedicated server or single-player game.\n"
CBasePlayer *__cdecl UTIL_GetListenServerHost()
{
  if ( !AppIsDedicatedServer() )
    return UTIL_PlayerByIndex(1);
  Warning("UTIL_GetListenServerHost() called from a dedicated server or single-player game.\n");
  return 0;
}


// UTIL_IsCommandIssuedByServerAdmin  (line 392, @0x0000000002401860, libserver.so)
// calls: UTIL_GetCommandClientIndex, AppIsDedicatedServer
// callers: rr_reloadresponsesystems, CC_GroundList_f, ClientCommand, CC_ResetGameStats, PhysicsCommand, surfaceprop, mp_disable_autokick, sv_soundscape_printdebuginfo, TestTutorialUI, tutorial_start_lesson, dota_bot_populate, CommandNavStrip (90 total)
bool __cdecl UTIL_IsCommandIssuedByServerAdmin()
{
  CEntityIndex v0; // ebx
  bool result; // al

  v0.m_Data = UTIL_GetCommandClientIndex().m_Data;
  if ( !AppIsDedicatedServer() )
    return v0.m_Data <= 1;
  result = 0;
  if ( v0.m_Data <= 0 )
    return v0.m_Data <= 1;
  return result;
}


// UTIL_EntityByIndex  (line 410, @0x00000000024018a0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// callers: CServerAchievementManager::FireGameEvent, CDOTAGamerules::PlayerSpawn, DOTA_ExecuteOrders, CDOTAHLTVDirector::StartChaseCameraShot, Modifier_Create_Test, CDOTAPlayer::FindPickerEntity, CDOTAPlayerMove::RunCommand, CDOTAPlayer::CreateSpectatorClicks, CDOTA_QuestSystem::FireGameEvent, CDOTA_ScriptedSpawner::FireGameEvent, CDOTA_Modifier_Nian_Dive::OnCreated, CNavMeshGameEventListener::FireGameEvent
CBaseEntity *__fastcall UTIL_EntityByIndex(CEntityIndex entityIndex)
{
  CBaseEntity *result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rdx
  __int64 v4; // [rsp-8h] [rbp-8h]

  if ( entityIndex.m_Data <= 0 )
    return 0;
  result = 0;
  if ( entityIndex.m_Data <= 0x7FFE )
  {
    v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[entityIndex.m_Data >> 9];
    if ( v2 != 0 )
    {
      v3 = &v2[entityIndex.m_Data & 0x1FF];
      if ( v3 != 0 )
      {
        *(&v4 - 8) = v3->m_EHandle.m_Index;
        if ( (*(&v4 - 2) & 0x7FFF) == entityIndex.m_Data )
          return v3->m_pInstance;
      }
    }
  }
  return result;
}


// UTIL_GetPlayerConnectionInfo  (line 429, @0x0000000002401920, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSplitScreenPlayerOwner, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBasePlayer*, operator CEntityInstance*
// calls: UTIL_PlayerByIndex, CEntityInstance::GetEntityIndex
// callers: CPlayerResource::UpdatePlayerData, dota_ping
// globals: CEntityHandle::gm_pEntityList
void __fastcall UTIL_GetPlayerConnectionInfo(CEntityIndex playerIndex, int *const ping, int *const packetloss)
{
  unsigned int m_Data; // r12d
  CBasePlayer *v6; // rax
  const CEntityInstance *m_pInstance; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  __int64 v11; // r12
  float v12; // xmm0_4
  int v13; // edx
  int v14; // eax

  m_Data = playerIndex.m_Data;
  v6 = UTIL_PlayerByIndex(playerIndex);
  m_pInstance = v6;
  if ( v6->m_bSplitScreenPlayer )
  {
    m_Index = v6->m_hSplitOwner.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pInstance[92].m_hPrivateScope.m_hScope) >> 9)
                                                          & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[m_pInstance[92].m_hPrivateScope.m_hScope & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
        {
          m_pInstance = v10->m_pInstance;
          m_Data = CEntityInstance::GetEntityIndex(v10->m_pInstance).m_Data;
        }
      }
    }
  }
  v11 = (*(*engine + 240LL))(engine, m_Data);
  if ( v11 == 0 || (*(m_pInstance->_vptr_IHandleEntity + 521))(m_pInstance) != 0 )
  {
    *ping = 0;
    *packetloss = 0;
  }
  else
  {
    *ping = ((*(*v11 + 88LL))(v11, 0) * 1000.0);
    v12 = (*(*v11 + 112LL))(v11, 1);
    v13 = 0;
    v14 = (v12 * 100.0);
    if ( v14 < 0 )
      v14 = 0;
    LOBYTE(v13) = 100;
    if ( v14 <= 100 )
      v13 = v14;
    *packetloss = v13;
  }
}


// TransmitShakeEvent  (line 497, @0x0000000002412370, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUserMessageShake_t, FindGameEvent<CUserMessageShake_t>, FindOrCreateGameEvent<CUserMessageShake_t>, PostEvent<CUserMessageShake_t>, set_amplitude, set_command, set_duration, set_frequency, set_has_command, set_has_duration, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUserMessageShake_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageShake::CUserMessageShake, CUserMessageShake::~CUserMessageShake, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: UTIL_ScreenShake, UTIL_ScreenShakeObject, UTIL_ScreenShakePlayer
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageShake_t>(bool)::s_hEvent
void __fastcall TransmitShakeEvent(
        CBasePlayer *pPlayer,
        __m128i a2,
        __m128i localAmplitude,
        float frequency,
        float duration,
        ShakeCommand_t eCommand)
{
  float v6; // r15d
  int v7; // r14d
  __int64 v10; // r14
  IGameEventSystem *v11; // r12
  void (__fastcall *v12)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v14[2]; // [rsp+18h] [rbp-1A8h] BYREF
  int v15; // [rsp+28h] [rbp-198h]
  ShakeCommand_t eCommanda; // [rsp+30h] [rbp-190h]
  float localAmplitudea; // [rsp+34h] [rbp-18Ch]
  int frequencya; // [rsp+38h] [rbp-188h]
  float v19; // [rsp+3Ch] [rbp-184h]
  int v20; // [rsp+40h] [rbp-180h]
  CSingleUserRecipientFilter user; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+188h] [rbp-38h]

  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  v7 = _mm_cvtsi128_si32(localAmplitude);
  v22 = __readfsqword(0x28u);
  if ( v6 > 0.0 )
  {
    if ( eCommand != ShakeCommand_t::SHAKE_STOP )
    {
LABEL_3:
      CRecipientFilter::CRecipientFilter(&user);
      user._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::AddRecipient(&user, pPlayer);
      CRecipientFilter::MakeReliable(&user);
      CUserMessageShake::CUserMessageShake(v14);
      eCommanda = eCommand;
      v14[0] = off_40CF6D0;
      v19 = frequency;
      localAmplitudea = v6;
      frequencya = v7;
      v10 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageShake_t>(bool)::s_hEvent;
      v20 = 0;
      v15 |= 0xFu;
      v11 = g_pGameEventSystem;
      v12 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CUserMessageShake_t>(bool)::s_hEvent);
      v12(v11, 0, 0, &user, v10, v14, 40);
      v14[0] = &off_40CF550;
      CUserMessageShake::~CUserMessageShake(v14);
      user._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::~CRecipientFilter(&user);
      return;
    }
LABEL_6:
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    goto LABEL_3;
  }
  if ( eCommand == ShakeCommand_t::SHAKE_STOP )
    goto LABEL_6;
}


// UTIL_ScreenShake  (line 535, @0x0000000002401a70, libserver.so)  // inlines: ComputeShakeAmplitude, FastSqrt, Find, HasElement, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: UTIL_PlayerByIndex, TransmitShakeEvent
// callers: Script_ScreenShake, CEnvAirStrikeIndoorEffect::CrumbleThink, CEnvAirStrikeOutdoorEffect::CrumbleThink, CC_Shake, CEnvShake::ApplyShake, PhysCollisionScreenShake, CBaseServerVehicle::PlayCrashSound
void __fastcall UTIL_ScreenShake(
        const Vector *const center,
        float amplitude,
        float frequency,
        float duration,
        float radius,
        ShakeCommand_t eCommand,
        bool bAirShake,
        CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > *ignore)
{
  int v8; // r15d
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  bool v13; // r13
  CBasePlayer *v14; // rax
  CBasePlayer **m_pMemory; // rcx
  CBasePlayer **v16; // rcx
  int v17; // edx
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  __m128i v21; // xmm0
  CBasePlayer *pPlayer; // [rsp+10h] [rbp-50h]
  float amplitudea; // [rsp+18h] [rbp-48h]
  double v28; // [rsp+20h] [rbp-40h]

  v8 = 1;
  v9.m128_f32[0] = amplitude;
  v10 = _mm_cmpge_ss(0x41800000u, v9);
  LODWORD(amplitudea) = _mm_andnot_ps(v10, 0x41800000u).m128_u32[0] | LODWORD(amplitude) & v10.m128_i32[0];
  if ( gpGlobals->maxClients > 0 )
  {
    v13 = !bAirShake;
    do
    {
      v14 = UTIL_PlayerByIndex(v8);
      if ( v14 == 0 || v13 && eCommand == ShakeCommand_t::SHAKE_START && (v14->m_fFlags.m_Value & 1) == 0 )
        goto LABEL_18;
      if ( ignore != 0 && ignore->m_Size > 0 )
      {
        m_pMemory = ignore->m_Memory.m_pMemory;
        if ( v14 == *m_pMemory )
          goto LABEL_18;
        v16 = m_pMemory + 1;
        v17 = 0;
        while ( ++v17 != ignore->m_Size )
        {
          if ( v14 == *v16++ )
          {
            if ( v17 >= 0 )
              goto LABEL_18;
            break;
          }
        }
      }
      pPlayer = v14;
      v28 = (*(v14->_vptr_IHandleEntity + 62))(v14);
      if ( radius <= 0.0 )
      {
        v21 = LODWORD(amplitudea);
LABEL_16:
        if ( *v21.m128i_i32 >= 0.0 )
          TransmitShakeEvent(pPlayer, v21, LODWORD(frequency), duration, 0.0, eCommand);
        goto LABEL_18;
      }
      v19 = fsqrt(
              (((center->x - *&v28) * (center->x - *&v28)) + ((center->y - *(&v28 + 1)) * (center->y - *(&v28 + 1))))
            + ((center->z - v18) * (center->z - v18)));
      if ( radius >= v19 )
      {
        v20 = 1.0 - (v19 / radius);
        v21 = LODWORD(amplitudea);
        *v21.m128i_i32 = amplitudea * v20;
        goto LABEL_16;
      }
LABEL_18:
      ++v8;
    }
    while ( gpGlobals->maxClients >= v8 );
  }
}


// UTIL_ScreenShakeObject  (line 583, @0x0000000002401c40, libserver.so)  // inlines: ComputeShakeAmplitude, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetRootMoveParent, UTIL_PlayerByIndex, CBaseEntity::GetGroundEntity, TransmitShakeEvent
void __fastcall UTIL_ScreenShakeObject(
        CBaseEntity *pEnt,
        const Vector *const center,
        float amplitude,
        float frequency,
        float duration,
        float radius,
        ShakeCommand_t eCommand,
        bool bAirShake)
{
  int v9; // ebx
  CBaseEntity *RootMoveParent; // r14
  CBasePlayer *v11; // rax
  CBasePlayer *v12; // r15
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  __m128i v17; // xmm0
  CBaseEntity *GroundEntity; // rax
  double v25; // [rsp+20h] [rbp-40h]

  v9 = 1;
  RootMoveParent = CBaseEntity::GetRootMoveParent(pEnt);
  if ( gpGlobals->maxClients > 0 )
  {
    while ( 1 )
    {
      v11 = UTIL_PlayerByIndex(v9);
      v12 = v11;
      if ( v11 == 0 )
        goto LABEL_11;
      if ( RootMoveParent == CBaseEntity::GetRootMoveParent(v11)
        || (v12->m_fFlags.m_Value & 1) != 0
        && CBaseEntity::GetGroundEntity(v12) != 0
        && (GroundEntity = CBaseEntity::GetGroundEntity(v12),
            RootMoveParent == CBaseEntity::GetRootMoveParent(GroundEntity)) )
      {
        v17 = LODWORD(amplitude);
        goto LABEL_16;
      }
      if ( !bAirShake && (v12->m_fFlags.m_Value & 1) == 0 )
        goto LABEL_11;
      v25 = (*(v12->_vptr_IHandleEntity + 62))(v12);
      if ( radius <= 0.0 )
      {
        v17 = LODWORD(amplitude);
LABEL_10:
        if ( *v17.m128i_i32 < 0.0 )
          goto LABEL_11;
LABEL_16:
        ++v9;
        TransmitShakeEvent(v12, v17, LODWORD(frequency), duration, v13, eCommand);
        if ( gpGlobals->maxClients < v9 )
          return;
      }
      else
      {
        v15 = fsqrt(
                (((center->x - *&v25) * (center->x - *&v25)) + ((center->y - *(&v25 + 1)) * (center->y - *(&v25 + 1))))
              + ((center->z - v14) * (center->z - v14)));
        if ( radius >= v15 )
        {
          v16 = 1.0 - (v15 / radius);
          v17 = LODWORD(amplitude);
          *v17.m128i_i32 = amplitude * v16;
          goto LABEL_10;
        }
LABEL_11:
        if ( gpGlobals->maxClients < ++v9 )
          return;
      }
    }
  }
}


// UTIL_ScreenShakePlayer  (line 630, @0x0000000002401e00, libserver.so)
// calls: TransmitShakeEvent
void __fastcall UTIL_ScreenShakePlayer(
        CBasePlayer *pPlayer,
        __m128i a2,
        __m128i amplitude,
        float frequency,
        float duration,
        ShakeCommand_t eCommand)
{
  TransmitShakeEvent(pPlayer, a2, amplitude, frequency, duration, eCommand);
}


// TransmitTiltEvent  (line 638, @0x0000000002412550, libserver.so)  // inlines: CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUserMessageScreenTilt_t, FindGameEvent<CUserMessageScreenTilt_t>, FindOrCreateGameEvent<CUserMessageScreenTilt_t>, PostEvent<CUserMessageScreenTilt_t>, SendUserMessage<CUserMessageScreenTilt_t>, mutable_angle, set_command, set_duration, set_ease_in_out, set_has_angle, set_has_command, set_has_duration, set_has_time, set_has_x, set_has_y, set_has_z, set_time, set_x, set_y, set_z, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUserMessageScreenTilt_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageScreenTilt::CUserMessageScreenTilt, CUserMessageScreenTilt::~CUserMessageScreenTilt, CRecipientFilter::~CRecipientFilter, operator new, CMsgVector::CMsgVector, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: UTIL_ScreenTilt
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageScreenTilt_t>(bool)::s_hEvent
void __fastcall TransmitTiltEvent(
        CBasePlayer *pPlayer,
        ShakeCommand_t eCommand,
        bool bEaseInOut,
        double a4,
        float a5,
        __m128i a6,
        float duration,
        float tiltTime)
{
  int v8; // r15d
  CMsgVector *v12; // r13
  CMsgVector *v13; // r13
  CMsgVector *v14; // r13
  __int64 v15; // r14
  IGameEventSystem *v16; // r13
  void (__fastcall *v17)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v21[2]; // [rsp+20h] [rbp-1A0h] BYREF
  int v22; // [rsp+30h] [rbp-190h]
  ShakeCommand_t eCommanda; // [rsp+38h] [rbp-188h]
  bool v24; // [rsp+3Ch] [rbp-184h]
  CMsgVector *v25; // [rsp+40h] [rbp-180h]
  int durationa; // [rsp+48h] [rbp-178h]
  float v27; // [rsp+4Ch] [rbp-174h]
  CSingleUserRecipientFilter user; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v29; // [rsp+188h] [rbp-38h]

  v8 = _mm_cvtsi128_si32(a6);
  v29 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&user);
  user._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&user, pPlayer);
  CRecipientFilter::MakeReliable(&user);
  CUserMessageScreenTilt::CUserMessageScreenTilt(v21);
  eCommanda = eCommand;
  v12 = v25;
  v21[0] = off_40CFD90;
  v24 = bEaseInOut;
  v22 |= 7u;
  if ( v25 == 0 )
  {
    v12 = operator new(0x28u);
    CMsgVector::CMsgVector(v12);
    v25 = v12;
  }
  *(v12 + 4) |= 1u;
  *(v12 + 6) = LODWORD(a4);
  v13 = v25;
  v22 |= 4u;
  if ( v25 == 0 )
  {
    v13 = operator new(0x28u);
    CMsgVector::CMsgVector(v13);
    v25 = v13;
  }
  *(v13 + 4) |= 2u;
  *(v13 + 7) = HIDWORD(a4);
  v14 = v25;
  v22 |= 4u;
  if ( v25 == 0 )
  {
    v14 = operator new(0x28u);
    CMsgVector::CMsgVector(v14);
    v25 = v14;
  }
  *(v14 + 4) |= 4u;
  *(v14 + 8) = a5;
  durationa = v8;
  v15 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageScreenTilt_t>(bool)::s_hEvent;
  v27 = duration;
  v22 |= 0x18u;
  v16 = g_pGameEventSystem;
  v17 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageScreenTilt_t>(bool)::s_hEvent);
  v17(v16, 0, 0, &user, v15, v21, 48);
  v21[0] = &off_40CFC10;
  CUserMessageScreenTilt::~CUserMessageScreenTilt(v21);
  user._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&user);
}


// UTIL_ScreenTilt  (line 670, @0x0000000002401e10, libserver.so)  // inlines: DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: TransmitTiltEvent, UTIL_PlayerByIndex
// callers: CEnvTilt::ApplyTilt
void __fastcall UTIL_ScreenTilt(
        const Vector *const center,
        const QAngle *const tiltAngle,
        float duration,
        float radius,
        float tiltTime,
        ShakeCommand_t eCommand,
        bool bEaseInOut)
{
  CEntityIndex v10; // ebx
  CBasePlayer *v11; // rax
  float v12; // xmm4_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  CBaseEntity *pPlayer; // [rsp+0h] [rbp-60h]

  v10.m_Data = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    while ( 1 )
    {
      v11 = UTIL_PlayerByIndex(v10);
      if ( v11 == 0 )
        goto LABEL_5;
      v12 = radius;
      if ( radius == 0.0
        || (pPlayer = v11,
            v13 = (*(v11->_vptr_IHandleEntity + 62))(v11),
            v11 = pPlayer,
            fsqrt(
              (((*&v13 - center->x) * (*&v13 - center->x)) + ((*(&v13 + 1) - center->y) * (*(&v13 + 1) - center->y)))
            + ((v14 - center->z) * (v14 - center->z))) <= radius) )
      {
        TransmitTiltEvent(v11, eCommand, bEaseInOut, *&tiltAngle->x, tiltAngle->z, LODWORD(duration), tiltTime, v12);
LABEL_5:
        if ( gpGlobals->maxClients < ++v10.m_Data )
          return;
      }
      else if ( gpGlobals->maxClients < ++v10.m_Data )
      {
        return;
      }
    }
  }
}


// UTIL_ViewPunch  (line 703, @0x0000000002401f40, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator-
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, CBaseEntity::ViewPunch
// callers: CEnvViewPunch::DoViewPunch
void __fastcall UTIL_ViewPunch(const Vector *const center, bool bInAir, double a3, vec_t a4, float a5, float radius)
{
  CEntityIndex v6; // ebx
  CBasePlayer *v9; // rax
  CBaseEntity *v10; // r15
  const Vector *AbsOrigin; // rax
  float v12; // xmm0_4
  float v13; // xmm6_4
  QAngle angTemp; // [rsp+20h] [rbp-40h] BYREF
  QAngle angPuncha; // 0:^10.12

  v6.m_Data = 1;
  *&angPuncha.x = a3;
  angPuncha.z = a4;
  if ( gpGlobals->maxClients > 0 )
  {
    while ( 1 )
    {
      v9 = UTIL_PlayerByIndex(v6);
      v10 = v9;
      if ( v9 != 0 && (bInAir || (v9->m_fFlags.m_Value & 1) != 0) )
      {
        angTemp = angPuncha;
        if ( a5 <= 0.0 )
          goto LABEL_8;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
        v12 = fsqrt(
                (((center->x - AbsOrigin->x) * (center->x - AbsOrigin->x))
               + ((center->y - AbsOrigin->y) * (center->y - AbsOrigin->y)))
              + ((center->z - AbsOrigin->z) * (center->z - AbsOrigin->z)));
        if ( a5 >= v12 )
          break;
      }
LABEL_9:
      if ( gpGlobals->maxClients < ++v6.m_Data )
        return;
    }
    v13 = 1.0 - (v12 / a5);
    angTemp.x = angTemp.x * v13;
    angTemp.z = v13 * angTemp.z;
    angTemp.y = angTemp.y * v13;
LABEL_8:
    CBaseEntity::ViewPunch(v10, &angTemp);
    goto LABEL_9;
  }
}


// UTIL_ScreenFadeBuild  (line 741, @0x0000000002402090, libserver.so)  // inlines: FixedUnsigned16, GetRawColor, SetRawColor, operator=
void __fastcall UTIL_ScreenFadeBuild(
        ScreenFade_t *const fade,
        const Color *const color,
        float fadeTime,
        float fadeHold,
        __int16 flags)
{
  unsigned __int16 v5; // ax
  int v6; // ecx
  unsigned __int16 v7; // ax
  int v8; // ecx
  Color v9; // eax

  v5 = 0;
  v6 = (fadeTime * 512.0);
  if ( v6 >= 0 )
  {
    v5 = -1;
    if ( v6 <= 0xFFFF )
      v5 = (fadeTime * 512.0);
  }
  fade->duration = v5;
  v7 = 0;
  v8 = (512.0 * fadeHold);
  if ( v8 >= 0 )
  {
    v7 = -1;
    if ( v8 <= 0xFFFF )
      v7 = (512.0 * fadeHold);
  }
  fade->holdTime = v7;
  v9 = *color;
  fade->fadeFlags = flags;
  fade->m_Color = v9;
}


// UTIL_ScreenFadeWrite  (line 750, @0x00000000024020f0, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageFade_t, CUserMessagePB, FindGameEvent<CUserMessageFade_t>, FindOrCreateGameEvent<CUserMessageFade_t>, PostEvent<CUserMessageFade_t>, set_color, set_duration, set_has_color, set_has_duration, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageFade_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageFade::CUserMessageFade, CUserMessageFade::~CUserMessageFade, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: UTIL_ScreenFadeAll, UTIL_ScreenFade
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageFade_t>(bool)::s_hEvent
void __fastcall UTIL_ScreenFadeWrite(const ScreenFade_t *const fade, CBaseEntity *pEntity)
{
  int duration; // edx
  __int64 v5; // r14
  int holdTime; // edx
  Color m_Color; // edx
  IGameEventSystem *v8; // r12
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v10[2]; // [rsp+18h] [rbp-1A8h] BYREF
  int v11; // [rsp+28h] [rbp-198h]
  int v12; // [rsp+30h] [rbp-190h]
  int v13; // [rsp+34h] [rbp-18Ch]
  int fadeFlags; // [rsp+38h] [rbp-188h]
  Color v15; // [rsp+3Ch] [rbp-184h]
  int v16; // [rsp+40h] [rbp-180h]
  CSingleUserRecipientFilter user; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+188h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( pEntity != 0 && (*(pEntity->_vptr_IHandleEntity + 100))(pEntity) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, pEntity);
    CRecipientFilter::MakeReliable(&user);
    CUserMessageFade::CUserMessageFade(v10);
    duration = fade->duration;
    v10[0] = off_40CF910;
    v16 = 0;
    v5 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageFade_t>(bool)::s_hEvent;
    v12 = duration;
    holdTime = fade->holdTime;
    v11 |= 0xFu;
    v13 = holdTime;
    fadeFlags = fade->fadeFlags;
    m_Color = fade->m_Color;
    v8 = g_pGameEventSystem;
    v15 = m_Color;
    v9 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageFade_t>(bool)::s_hEvent);
    v9(v8, 0, 0, &user, v5, v10, 40);
    v10[0] = &off_40CF790;
    CUserMessageFade::~CUserMessageFade(v10);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// UTIL_ScreenFadeAll  (line 776, @0x00000000024022c0, libserver.so)  // inlines: FixedUnsigned16, SetRawColor, UTIL_ScreenFadeBuild, operator=
// calls: UTIL_PlayerByIndex, UTIL_ScreenFadeWrite, __stack_chk_fail
// callers: CEnvFade::InputFade, CRevertSaved::Use, CRevertSaved::InputReload
void __fastcall UTIL_ScreenFadeAll(const Color *const color, float a2, float fadeTime, float fadeHold, __int16 flags)
{
  unsigned __int16 v5; // ax
  int v6; // edx
  unsigned __int16 v7; // ax
  int v8; // edx
  int v9; // ebx
  Color v10; // eax
  CEntityIndex v11; // edi
  CBasePlayer *v12; // rax
  ScreenFade_t fade; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v5 = 0;
  v6 = (a2 * 512.0);
  if ( v6 >= 0 )
  {
    v5 = -1;
    if ( v6 <= 0xFFFF )
      v5 = (a2 * 512.0);
  }
  fade.duration = v5;
  v7 = 0;
  v8 = (512.0 * fadeTime);
  if ( v8 >= 0 )
  {
    v7 = -1;
    if ( v8 <= 0xFFFF )
      v7 = (512.0 * fadeTime);
  }
  fade.holdTime = v7;
  v9 = 1;
  v10 = *color;
  fade.fadeFlags = flags;
  fade.m_Color = v10;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v11.m_Data = v9++;
      v12 = UTIL_PlayerByIndex(v11);
      UTIL_ScreenFadeWrite(&fade, v12);
    }
    while ( gpGlobals->maxClients >= v9 );
  }
}


// UTIL_ScreenFade  (line 793, @0x0000000002402390, libserver.so)  // inlines: FixedUnsigned16, SetRawColor, UTIL_ScreenFadeBuild, operator=
// calls: UTIL_ScreenFadeWrite, __stack_chk_fail
// callers: ClientCommand, CommentarySystem_PePlayerRunCommand, CC_FadeOut, CC_FadeIn, CEnvFade::InputFade, CMoveHelperServer::PlayerFallingDamage, CBasePlayer::DamageEffect, CBasePlayer::PostThink, CBasePlayer::SetOrResetInitialState, CC_RespawnPlayer
void __fastcall UTIL_ScreenFade(
        CBaseEntity *pEntity,
        const Color *const color,
        float fadeTime,
        float fadeHold,
        __int16 flags)
{
  unsigned __int16 v5; // ax
  int v6; // ecx
  unsigned __int16 v7; // ax
  int v8; // ecx
  Color v9; // eax
  ScreenFade_t fade; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  v5 = 0;
  v6 = (fadeTime * 512.0);
  if ( v6 >= 0 )
  {
    v5 = -1;
    if ( v6 <= 0xFFFF )
      v5 = (fadeTime * 512.0);
  }
  fade.duration = v5;
  v7 = 0;
  v8 = (512.0 * fadeHold);
  if ( v8 >= 0 )
  {
    v7 = -1;
    if ( v8 <= 0xFFFF )
      v7 = (512.0 * fadeHold);
  }
  fade.holdTime = v7;
  v9 = *color;
  fade.fadeFlags = flags;
  fade.m_Color = v9;
  UTIL_ScreenFadeWrite(&fade, pEntity);
}


// UTIL_HudMessage  (line 802, @0x000000000240fc60, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CUserMessageHudMsg_t, CUserMessagePB, FindGameEvent<CUserMessageHudMsg_t>, FindOrCreateGameEvent<CUserMessageHudMsg_t>, PostEvent<CUserMessageHudMsg_t>, SetTextParams, assign, length, set_channel, set_color1, set_color2, set_fade_in_time, set_fade_out_time, set_fx_time, set_has_channel, set_has_message, set_hold_time, set_message, set_x, set_y, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessageHudMsg_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageHudMsg::CUserMessageHudMsg, strlen, std::string::assign(char const*,ulong), CUserMessageHudMsg::~CUserMessageHudMsg, CRecipientFilter::~CRecipientFilter, CRecipientFilter::AddAllPlayers, __stack_chk_fail, _Unwind_Resume
// callers: CGameText::Display, UTIL_HudMessageAll
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudMsg_t>(bool)::s_hEvent
void __fastcall UTIL_HudMessage(CBasePlayer *pToPlayer, const hudtextparms_t *const textparms, const char *pMessage)
{
  int channel; // edx
  float32 x; // xmm0_4
  float32 y; // xmm0_4
  Color color1; // edx
  float32 fadeoutTime; // xmm0_4
  Color color2; // edx
  float32 holdTime; // xmm0_4
  float32 fxTime; // xmm0_4
  int effect; // edx
  size_t v15; // rax
  IGameEventSystem *v16; // rbx
  void (__fastcall *v17)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 v18; // [rsp+10h] [rbp-1E0h]
  unsigned int v19; // [rsp+18h] [rbp-1D8h]
  _QWORD v20[2]; // [rsp+28h] [rbp-1C8h] BYREF
  int v21; // [rsp+38h] [rbp-1B8h]
  int v22; // [rsp+40h] [rbp-1B0h]
  float32 v23; // [rsp+44h] [rbp-1ACh]
  float32 v24; // [rsp+48h] [rbp-1A8h]
  Color v25; // [rsp+4Ch] [rbp-1A4h]
  Color v26; // [rsp+50h] [rbp-1A0h]
  int v27; // [rsp+54h] [rbp-19Ch]
  float32 fadeinTime; // [rsp+58h] [rbp-198h]
  float32 v29; // [rsp+5Ch] [rbp-194h]
  float32 v30; // [rsp+60h] [rbp-190h]
  float32 v31; // [rsp+64h] [rbp-18Ch]
  std::string *v32; // [rsp+68h] [rbp-188h]
  unsigned int v33; // [rsp+70h] [rbp-180h]
  CRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v35; // [rsp+1B8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  if ( pToPlayer != 0 )
    CRecipientFilter::AddRecipient(&filter, pToPlayer);
  else
    CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  CUserMessageHudMsg::CUserMessageHudMsg(v20);
  channel = textparms->channel;
  x = textparms->x;
  v20[0] = off_40D0210;
  v33 = 0;
  v23 = x;
  y = textparms->y;
  v22 = channel;
  color1 = textparms->color1;
  v24 = y;
  fadeinTime = textparms->fadeinTime;
  fadeoutTime = textparms->fadeoutTime;
  v25 = color1;
  color2 = textparms->color2;
  v29 = fadeoutTime;
  holdTime = textparms->holdTime;
  v21 |= 0x7FFu;
  v30 = holdTime;
  fxTime = textparms->fxTime;
  v26 = color2;
  effect = textparms->effect;
  v31 = fxTime;
  v27 = effect;
  v15 = strlen(pMessage);
  std::string::assign(v32, pMessage, v15);
  v16 = g_pGameEventSystem;
  v18 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudMsg_t>(bool)::s_hEvent;
  v19 = v33;
  v17 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudMsg_t>(bool)::s_hEvent);
  v17(v16, v19, 0, &filter, v18, v20, 72);
  v20[0] = &off_40D0090;
  CUserMessageHudMsg::~CUserMessageHudMsg(v20);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_HudMessageAll  (line 823, @0x000000000240ff00, libserver.so)
// calls: UTIL_HudMessage
// callers: CGameText::Display, CSceneEntity::StartEvent
void __fastcall UTIL_HudMessageAll(const hudtextparms_t *const textparms, const char *pMessage)
{
  UTIL_HudMessage(0, textparms, pMessage);
}


// UTIL_HudHintText  (line 828, @0x000000000240d8b0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageKeyHintText_t, CUserMessagePB, FindGameEvent<CUserMessageKeyHintText_t>, FindOrCreateGameEvent<CUserMessageKeyHintText_t>, PostEvent<CUserMessageKeyHintText_t>, add_messages, assign, length, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageKeyHintText_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageKeyHintText::CUserMessageKeyHintText, google::protobuf::internal::StringTypeHandlerBase::New(void), strlen, std::string::assign(char const*,ulong), CUserMessageKeyHintText::~CUserMessageKeyHintText, CRecipientFilter::~CRecipientFilter, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), __stack_chk_fail, _Unwind_Resume
// callers: CBaseCombatWeapon::RescindAltFireHudHint, CBaseCombatWeapon::DisplayReloadHudHint, CBaseCombatWeapon::RescindReloadHudHint, CBaseCombatWeapon::DisplayAltFireHudHint, CBaseServerVehicle::HandlePassengerExit
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent
void __fastcall UTIL_HudHintText(CBaseEntity *pEntity, const char *pMessage)
{
  google::protobuf::internal::StringTypeHandlerBase *v4; // rdi
  __int64 current_size; // rax
  std::string *v6; // rax
  __int64 v7; // rdx
  std::string *v8; // r14
  size_t v9; // rax
  IGameEventSystem *v10; // r13
  void (__fastcall *v11)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 v12; // [rsp+10h] [rbp-1C0h]
  unsigned int v13; // [rsp+18h] [rbp-1B8h]
  _QWORD v14[3]; // [rsp+28h] [rbp-1A8h] BYREF
  google::protobuf::internal::RepeatedPtrFieldBase v15; // [rsp+40h] [rbp-190h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-178h]
  CSingleUserRecipientFilter user; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+198h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( pEntity != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, pEntity);
    CRecipientFilter::MakeReliable(&user);
    CUserMessageKeyHintText::CUserMessageKeyHintText(v14);
    v16 = 0;
    v14[0] = off_402A610;
    current_size = v15.current_size_;
    if ( v15.current_size_ < v15.allocated_size_ )
    {
      ++v15.current_size_;
      v8 = v15.elements_[current_size];
    }
    else
    {
      if ( v15.allocated_size_ == v15.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v15, v15.allocated_size_ + 1);
      v6 = google::protobuf::internal::StringTypeHandlerBase::New(v4);
      v7 = v15.current_size_;
      v8 = v6;
      ++v15.allocated_size_;
      ++v15.current_size_;
      v15.elements_[v7] = v6;
    }
    v9 = strlen(pMessage);
    std::string::assign(v8, pMessage, v9);
    v10 = g_pGameEventSystem;
    v12 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent;
    v13 = v16;
    v11 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent);
    v11(v10, v13, 0, &user, v12, v14, 48);
    v14[0] = &off_402A490;
    CUserMessageKeyHintText::~CUserMessageKeyHintText(v14);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// UTIL_ClientPrintFilter  (line 841, @0x000000000240df80, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, CEventPosterBase, CNetMessagePB, CUserMessagePB, CUserMessageTextMsg_t, FindGameEvent<CUserMessageTextMsg_t>, FindOrCreateGameEvent<CUserMessageTextMsg_t>, PostEvent<CUserMessageTextMsg_t>, add_param, assign, length, set_dest, set_has_dest, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageTextMsg_t
// calls: CUserMessageTextMsg::CUserMessageTextMsg, google::protobuf::internal::StringTypeHandlerBase::New(void), strlen, std::string::assign(char const*,ulong), CUserMessageTextMsg::~CUserMessageTextMsg, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), _Unwind_Resume
// callers: CHLTVDirector::SetCameraMan, UTIL_ClientPrintAll, ClientPrint
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageTextMsg_t>(bool)::s_hEvent
void __fastcall UTIL_ClientPrintFilter(
        IRecipientFilter *const filter,
        int msg_dest,
        const char *msg_name,
        const char *param1,
        const char *param2,
        const char *param3,
        const char *param4)
{
  google::protobuf::internal::StringTypeHandlerBase *v11; // rdi
  __int64 current_size; // rax
  std::string *v13; // rax
  __int64 v14; // rdx
  size_t v15; // rax
  google::protobuf::internal::StringTypeHandlerBase *v16; // rdi
  __int64 v17; // rax
  std::string *v18; // rax
  __int64 v19; // rdx
  std::string *v20; // r15
  size_t v21; // rax
  __int64 v22; // rax
  std::string *v23; // rax
  __int64 v24; // rdx
  std::string *v25; // r13
  size_t v26; // rax
  __int64 v27; // rax
  std::string *v28; // rax
  __int64 v29; // rdx
  std::string *v30; // r12
  size_t v31; // rax
  __int64 v32; // rax
  std::string *v33; // rax
  __int64 v34; // rdx
  std::string *v35; // rbx
  size_t v36; // rax
  __int64 v37; // r12
  IGameEventSystem *v38; // rbx
  void (__fastcall *v39)(IGameEventSystem *, _QWORD, _QWORD, IRecipientFilter *const, __int64, _QWORD *, __int64); // r13
  std::string *msg_desta; // [rsp+18h] [rbp-88h]
  unsigned int msg_destc; // [rsp+18h] [rbp-88h]
  _QWORD v44[2]; // [rsp+28h] [rbp-78h] BYREF
  int v45; // [rsp+38h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase v46; // [rsp+40h] [rbp-60h] BYREF
  int v47; // [rsp+58h] [rbp-48h]
  unsigned int v48; // [rsp+60h] [rbp-40h]

  CUserMessageTextMsg::CUserMessageTextMsg(v44);
  v45 |= 1u;
  v44[0] = off_40CFB50;
  current_size = v46.current_size_;
  v48 = 0;
  v47 = msg_dest;
  if ( v46.current_size_ < v46.allocated_size_ )
  {
    ++v46.current_size_;
    msg_desta = v46.elements_[current_size];
  }
  else
  {
    if ( v46.allocated_size_ == v46.total_size_ )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v46, v46.allocated_size_ + 1);
    v13 = google::protobuf::internal::StringTypeHandlerBase::New(v11);
    v14 = v46.current_size_;
    msg_desta = v13;
    ++v46.allocated_size_;
    ++v46.current_size_;
    v46.elements_[v14] = v13;
  }
  v15 = strlen(msg_name);
  std::string::assign(msg_desta, msg_name, v15);
  if ( param1 != 0 )
  {
    v17 = v46.current_size_;
    if ( v46.current_size_ < v46.allocated_size_ )
    {
      ++v46.current_size_;
      v20 = v46.elements_[v17];
    }
    else
    {
      if ( v46.allocated_size_ == v46.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v46, v46.allocated_size_ + 1);
      v18 = google::protobuf::internal::StringTypeHandlerBase::New(v16);
      v19 = v46.current_size_;
      v20 = v18;
      ++v46.allocated_size_;
      ++v46.current_size_;
      v46.elements_[v19] = v18;
    }
    v21 = strlen(param1);
    std::string::assign(v20, param1, v21);
  }
  if ( param2 != 0 )
  {
    v22 = v46.current_size_;
    if ( v46.current_size_ < v46.allocated_size_ )
    {
      ++v46.current_size_;
      v25 = v46.elements_[v22];
    }
    else
    {
      if ( v46.allocated_size_ == v46.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v46, v46.allocated_size_ + 1);
      v23 = google::protobuf::internal::StringTypeHandlerBase::New(v16);
      v24 = v46.current_size_;
      v25 = v23;
      ++v46.allocated_size_;
      ++v46.current_size_;
      v46.elements_[v24] = v23;
    }
    v26 = strlen(param2);
    std::string::assign(v25, param2, v26);
  }
  if ( param3 != 0 )
  {
    v27 = v46.current_size_;
    if ( v46.current_size_ < v46.allocated_size_ )
    {
      ++v46.current_size_;
      v30 = v46.elements_[v27];
    }
    else
    {
      if ( v46.allocated_size_ == v46.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v46, v46.allocated_size_ + 1);
      v28 = google::protobuf::internal::StringTypeHandlerBase::New(v16);
      v29 = v46.current_size_;
      v30 = v28;
      ++v46.allocated_size_;
      ++v46.current_size_;
      v46.elements_[v29] = v28;
    }
    v31 = strlen(param3);
    std::string::assign(v30, param3, v31);
  }
  if ( param4 != 0 )
  {
    v32 = v46.current_size_;
    if ( v46.current_size_ < v46.allocated_size_ )
    {
      ++v46.current_size_;
      v35 = v46.elements_[v32];
    }
    else
    {
      if ( v46.allocated_size_ == v46.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v46, v46.allocated_size_ + 1);
      v33 = google::protobuf::internal::StringTypeHandlerBase::New(v16);
      v34 = v46.current_size_;
      v35 = v33;
      ++v46.allocated_size_;
      ++v46.current_size_;
      v46.elements_[v34] = v33;
    }
    v36 = strlen(param4);
    std::string::assign(v35, param4, v36);
  }
  v37 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageTextMsg_t>(bool)::s_hEvent;
  v38 = g_pGameEventSystem;
  msg_destc = v48;
  v39 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageTextMsg_t>(bool)::s_hEvent);
  v39(v38, msg_destc, 0, filter, v37, v44, 56);
  v44[0] = &off_40CF9D0;
  CUserMessageTextMsg::~CUserMessageTextMsg(v44);
}


// UTIL_ClientPrintAll  (line 865, @0x000000000240e370, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, UTIL_ClientPrintFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CGameRules::ClientSettingsChanged, CDOTA_CombatLog::DoCombatAnalysis, DOTAStartAutoSaveTest, CDOTA_AutoSaveGameSystem::FrameUpdatePostEntityThink, CDOTA_ModifierManager::Think, WriteSaveGameToFile, CGCJobLoadSaveGame::BYieldingRunJob
void __fastcall UTIL_ClientPrintAll(
        int msg_dest,
        const char *msg_name,
        const char *param1,
        const char *param2,
        const char *param3,
        const char *param4)
{
  CReliableBroadcastRecipientFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+158h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  UTIL_ClientPrintFilter(&filter, msg_dest, msg_name, param1, param2, param3, param4);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// ClientPrint  (line 872, @0x000000000240e480, libserver.so)  // inlines: CSingleUserRecipientFilter, ~CSingleUserRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, UTIL_ClientPrintFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: ent_setname, CBaseMultiplayerPlayer::ClientCommand, CC_Ent_Info, CEntFireAutoCompletionFunctor::CommandCallback, CC_God_f, CC_Notarget_f, CC_setang_f, setang_exact, ent_setpos, ent_setang, setpos_player, setpos (17 total)
void __fastcall ClientPrint(
        CBasePlayer *player,
        int msg_dest,
        const char *msg_name,
        const char *param1,
        const char *param2,
        const char *param3,
        const char *param4)
{
  CSingleUserRecipientFilter user; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+158h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( player != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, player);
    CRecipientFilter::MakeReliable(&user);
    UTIL_ClientPrintFilter(&user, msg_dest, msg_name, param1, param2, param3, param4);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// UTIL_SayTextFilter  (line 883, @0x000000000240e5a0, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CUserMessagePB, CUserMessageSayText_t, FindGameEvent<CUserMessageSayText_t>, FindOrCreateGameEvent<CUserMessageSayText_t>, PostEvent<CUserMessageSayText_t>, assign, entindex, length, set_chat, set_has_chat, set_has_playerindex, set_has_text, set_playerindex, set_text, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageSayText_t
// calls: CUserMessageSayText::CUserMessageSayText, CEntityInstance::GetEntityIndex, strlen, std::string::assign(char const*,ulong), CUserMessageSayText::~CUserMessageSayText, _Unwind_Resume
// callers: Host_Say, UTIL_SayText, UTIL_SayTextAll
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText_t>(bool)::s_hEvent
void __fastcall UTIL_SayTextFilter(IRecipientFilter *const filter, const char *pText, CBasePlayer *pPlayer, bool bChat)
{
  CEntityIndex v7; // eax
  size_t v8; // rax
  __int64 v9; // r13
  IGameEventSystem *v10; // r12
  void (__fastcall *v11)(IGameEventSystem *, _QWORD, _QWORD, IRecipientFilter *const, __int64, _QWORD *, __int64); // r14
  unsigned int v12; // [rsp+18h] [rbp-78h]
  _QWORD v14[2]; // [rsp+28h] [rbp-68h] BYREF
  int v15; // [rsp+38h] [rbp-58h]
  std::string *v16; // [rsp+40h] [rbp-50h]
  int32 m_Data; // [rsp+48h] [rbp-48h]
  bool v18; // [rsp+4Ch] [rbp-44h]
  unsigned int v19; // [rsp+50h] [rbp-40h]

  CUserMessageSayText::CUserMessageSayText(v14);
  v14[0] = off_40CEDD0;
  v19 = 0;
  if ( pPlayer != 0 )
    v7.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  else
    v7.m_Data = 0;
  m_Data = v7.m_Data;
  v15 |= 3u;
  v8 = strlen(pText);
  std::string::assign(v16, pText, v8);
  v18 = bChat;
  v15 |= 4u;
  v9 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText_t>(bool)::s_hEvent;
  v10 = g_pGameEventSystem;
  v12 = v19;
  v11 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText_t>(bool)::s_hEvent);
  v11(v10, v12, 0, filter, v9, v14, 40);
  v14[0] = &off_40CEC50;
  CUserMessageSayText::~CUserMessageSayText(v14);
}


// UTIL_SayText2Filter  (line 892, @0x000000000240e900, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CUserMessagePB, CUserMessageSayText2_t, FindGameEvent<CUserMessageSayText2_t>, FindOrCreateGameEvent<CUserMessageSayText2_t>, PostEvent<CUserMessageSayText2_t>, assign, entindex, length, set_chat, set_entityindex, set_has_entityindex, set_has_messagename, set_has_param1, set_has_param2, set_has_param3, set_has_param4, set_messagename, set_param1, set_param2, set_param3, set_param4, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageSayText2_t
// calls: CUserMessageSayText2::CUserMessageSayText2, CEntityInstance::GetEntityIndex, strlen, std::string::assign(char const*,ulong), CUserMessageSayText2::~CUserMessageSayText2, _Unwind_Resume
// callers: Host_Say
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent
void __fastcall UTIL_SayText2Filter(
        IRecipientFilter *const filter,
        CBasePlayer *pEntity,
        bool bChat,
        const char *msg_name,
        const char *param1,
        const char *param2,
        const char *param3,
        const char *param4)
{
  CEntityIndex v12; // eax
  size_t v13; // rax
  const char *v14; // r14
  size_t v15; // rax
  const char *v16; // r13
  size_t v17; // rax
  const char *v18; // r12
  size_t v19; // rax
  const char *v20; // r12
  size_t v21; // rax
  __int64 v22; // r13
  IGameEventSystem *v23; // r12
  void (__fastcall *v24)(IGameEventSystem *, _QWORD, _QWORD, IRecipientFilter *const, __int64, _QWORD *, __int64); // r14
  unsigned int pEntityb; // [rsp+18h] [rbp-98h]
  _QWORD v28[2]; // [rsp+28h] [rbp-88h] BYREF
  int v29; // [rsp+38h] [rbp-78h]
  int32 m_Data; // [rsp+40h] [rbp-70h]
  bool v31; // [rsp+44h] [rbp-6Ch]
  std::string *v32; // [rsp+48h] [rbp-68h]
  std::string *v33; // [rsp+50h] [rbp-60h]
  std::string *v34; // [rsp+58h] [rbp-58h]
  std::string *v35; // [rsp+60h] [rbp-50h]
  std::string *v36; // [rsp+68h] [rbp-48h]
  unsigned int v37; // [rsp+70h] [rbp-40h]

  CUserMessageSayText2::CUserMessageSayText2(v28);
  v28[0] = off_40CF010;
  v37 = 0;
  if ( pEntity != 0 )
    v12.m_Data = CEntityInstance::GetEntityIndex(pEntity).m_Data;
  else
    v12.m_Data = 0;
  m_Data = v12.m_Data;
  v31 = bChat;
  v29 |= 7u;
  v13 = strlen(msg_name);
  std::string::assign(v32, msg_name, v13);
  v14 = "";
  if ( param1 != 0 )
    v14 = param1;
  v29 |= 8u;
  v15 = strlen(v14);
  std::string::assign(v33, v14, v15);
  v16 = "";
  if ( param2 != 0 )
    v16 = param2;
  v29 |= 0x10u;
  v17 = strlen(v16);
  std::string::assign(v34, v16, v17);
  v18 = "";
  if ( param3 != 0 )
    v18 = param3;
  v29 |= 0x20u;
  v19 = strlen(v18);
  std::string::assign(v35, v18, v19);
  v20 = "";
  if ( param4 != 0 )
    v20 = param4;
  v29 |= 0x40u;
  v21 = strlen(v20);
  std::string::assign(v36, v20, v21);
  v22 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent;
  v23 = g_pGameEventSystem;
  pEntityb = v37;
  v24 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent);
  v24(v23, pEntityb, 0, filter, v22, v28, 72);
  v28[0] = &off_40CEE90;
  CUserMessageSayText2::~CUserMessageSayText2(v28);
}


// UTIL_SayText  (line 905, @0x000000000240e720, libserver.so)  // inlines: CSingleUserRecipientFilter, ~CSingleUserRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, UTIL_SayTextFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall UTIL_SayText(const char *pText, CBasePlayer *pToPlayer)
{
  CSingleUserRecipientFilter user; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+138h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( (*(pToPlayer->_vptr_IHandleEntity + 100))(pToPlayer) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, pToPlayer);
    CRecipientFilter::MakeReliable(&user);
    UTIL_SayTextFilter(&user, pText, pToPlayer, 0);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// UTIL_SayTextAll  (line 916, @0x000000000240e810, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, UTIL_SayTextFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall UTIL_SayTextAll(const char *pText, CBasePlayer *pPlayer, bool bChat)
{
  CReliableBroadcastRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v7; // [rsp+138h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  UTIL_SayTextFilter(&filter, pText, pPlayer, bChat);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_SayTextChannel  (line 922, @0x000000000240eb70, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CUserMessagePB, CUserMessageSayTextChannel_t, FindGameEvent<CUserMessageSayTextChannel_t>, FindOrCreateGameEvent<CUserMessageSayTextChannel_t>, PostEvent<CUserMessageSayTextChannel_t>, assign, entindex, length, set_channel, set_has_player, set_has_text, set_player, set_text, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageSayTextChannel_t
// calls: CUserMessageSayTextChannel::CUserMessageSayTextChannel, CEntityInstance::GetEntityIndex, strlen, std::string::assign(char const*,ulong), CUserMessageSayTextChannel::~CUserMessageSayTextChannel, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayTextChannel_t>(bool)::s_hEvent
void __fastcall UTIL_SayTextChannel(
        IRecipientFilter *const filter,
        int channel,
        CBasePlayer *pPlayer,
        const char *pText)
{
  size_t v7; // rax
  __int64 v8; // r12
  IGameEventSystem *v9; // rbx
  void (__fastcall *v10)(IGameEventSystem *, _QWORD, _QWORD, IRecipientFilter *const, __int64, _QWORD *, __int64); // r14
  unsigned int v11; // [rsp+18h] [rbp-78h]
  _QWORD v13[2]; // [rsp+28h] [rbp-68h] BYREF
  int v14; // [rsp+38h] [rbp-58h]
  CEntityIndex v15; // [rsp+40h] [rbp-50h]
  int v16; // [rsp+44h] [rbp-4Ch]
  std::string *v17; // [rsp+48h] [rbp-48h]
  unsigned int v18; // [rsp+50h] [rbp-40h]

  if ( pPlayer != 0 )
  {
    CUserMessageSayTextChannel::CUserMessageSayTextChannel(v13);
    v13[0] = off_40CF490;
    v18 = 0;
    v15.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
    v16 = channel;
    v14 |= 7u;
    v7 = strlen(pText);
    std::string::assign(v17, pText, v7);
    v8 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayTextChannel_t>(bool)::s_hEvent;
    v9 = g_pGameEventSystem;
    v11 = v18;
    v10 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayTextChannel_t>(bool)::s_hEvent);
    v10(v9, v11, 0, filter, v8, v13, 40);
    v13[0] = &off_40CF310;
    CUserMessageSayTextChannel::~CUserMessageSayTextChannel(v13);
  }
}


// UTIL_ShowMessage  (line 934, @0x000000000240ff20, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CUserMessageHudText_t, CUserMessagePB, FindGameEvent<CUserMessageHudText_t>, FindOrCreateGameEvent<CUserMessageHudText_t>, PostEvent<CUserMessageHudText_t>, assign, length, set_has_message, set_message, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessageHudText_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageHudText::CUserMessageHudText, strlen, std::string::assign(char const*,ulong), CUserMessageHudText::~CUserMessageHudText, CRecipientFilter::~CRecipientFilter, CRecipientFilter::AddAllPlayers, __stack_chk_fail, CEventPosterBase<CUserMessageHudText_t, 255>::~CEventPosterBase, _Unwind_Resume
// callers: CMessage::InputShowMessage, UTIL_ShowMessageAll
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent
void __fastcall UTIL_ShowMessage(const char *pString, CBasePlayer *pPlayer)
{
  size_t v4; // rax
  IGameEventSystem *v5; // r13
  void (__fastcall *v6)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 v7; // [rsp+10h] [rbp-1B0h]
  unsigned int v8; // [rsp+1Ch] [rbp-1A4h]
  _QWORD v9[2]; // [rsp+28h] [rbp-198h] BYREF
  int v10; // [rsp+38h] [rbp-188h]
  std::string *v11; // [rsp+40h] [rbp-180h]
  unsigned int v12; // [rsp+48h] [rbp-178h]
  CRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+188h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  if ( pPlayer != 0 )
    CRecipientFilter::AddRecipient(&filter, pPlayer);
  else
    CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  CUserMessageHudText::CUserMessageHudText(v9);
  v12 = 0;
  v10 |= 1u;
  v9[0] = off_40D0450;
  v4 = strlen(pString);
  std::string::assign(v11, pString, v4);
  v5 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent;
  v8 = v12;
  v6 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent);
  v6(v5, v8, 0, &filter, v7, v9, 32);
  v9[0] = &off_40D02D0;
  CUserMessageHudText::~CUserMessageHudText(v9);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_ShowMessageAll  (line 955, @0x00000000024100c0, libserver.so)
// calls: UTIL_ShowMessage
// callers: CMessage::InputShowMessage
void __fastcall UTIL_ShowMessageAll(const char *pString)
{
  UTIL_ShowMessage(pString, 0);
}


// UTIL_MessageTextAll  (line 962, @0x000000000240f430, libserver.so)
// calls: UTIL_MessageTextAll_WithContext
// callers: Script_UTIL_MessageTextAll
void __fastcall UTIL_MessageTextAll(const char *text, Color color)
{
  UTIL_MessageTextAll_WithContext(text, color, -1, -1, -1);
}


// UTIL_MessageTextAll_WithContext  (line 968, @0x000000000240f220, libserver.so)  // inlines: CBroadcastRecipientFilter, CEventPosterBase, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessageColoredText_t, CUserMessagePB, FindGameEvent<CUserMessageColoredText_t>, FindOrCreateGameEvent<CUserMessageColoredText_t>, PostEvent<CUserMessageColoredText_t>, assign, length, set_color, set_context_player_id, set_context_team_id, set_context_value, set_has_context_player_id, set_has_context_team_id, set_has_reset, set_has_text, set_reset, set_text, ~CBroadcastRecipientFilter, ~CEventPosterBase, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessageColoredText_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CUserMessageColoredText::CUserMessageColoredText, strlen, std::string::assign(char const*,ulong), CUserMessageColoredText::~CUserMessageColoredText, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CEventPosterBase<CUserMessageColoredText_t, 255>::~CEventPosterBase, _Unwind_Resume
// callers: Script_UTIL_MessageTextAll_WithContext, UTIL_MessageTextAll
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent
void __fastcall UTIL_MessageTextAll_WithContext(
        const char *text,
        Color color,
        int nContextPlayerID,
        int nContextValue,
        int nContexTeamID)
{
  size_t v8; // rax
  IGameEventSystem *v9; // r13
  void (__fastcall *v10)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 nContextValueb; // [rsp+10h] [rbp-1D0h]
  unsigned int nContextPlayerIDb; // [rsp+1Ch] [rbp-1C4h]
  _QWORD v15[2]; // [rsp+28h] [rbp-1B8h] BYREF
  int v16; // [rsp+38h] [rbp-1A8h]
  std::string *v17; // [rsp+40h] [rbp-1A0h]
  Color v18; // [rsp+48h] [rbp-198h]
  char v19; // [rsp+4Ch] [rbp-194h]
  int v20; // [rsp+50h] [rbp-190h]
  int v21; // [rsp+54h] [rbp-18Ch]
  int nContexTeamIDa; // [rsp+58h] [rbp-188h]
  unsigned int v23; // [rsp+60h] [rbp-180h]
  CReliableBroadcastRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v25; // [rsp+1A8h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CUserMessageColoredText::CUserMessageColoredText(v15);
  v23 = 0;
  v15[0] = off_40CF250;
  v19 = 0;
  v18 = color;
  v16 |= 7u;
  v8 = strlen(text);
  std::string::assign(v17, text, v8);
  nContexTeamIDa = nContexTeamID;
  v16 |= 0x38u;
  v20 = nContextPlayerID;
  v21 = nContextValue;
  nContextValueb = IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent;
  v9 = g_pGameEventSystem;
  nContextPlayerIDb = v23;
  v10 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent);
  v10(v9, nContextPlayerIDb, 0, &filter, nContextValueb, v15, 56);
  v15[0] = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(v15);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_MessageText  (line 983, @0x000000000240f200, libserver.so)
// calls: UTIL_MessageText_WithContext
// callers: Script_UTIL_MessageText, AddDebugTextLine
void __fastcall UTIL_MessageText(CBasePlayer *player, const char *text, Color color)
{
  UTIL_MessageText_WithContext(player, text, color, -1, -1, -1);
}


// UTIL_MessageText_WithContext  (line 989, @0x000000000240eff0, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageColoredText_t, CUserMessagePB, FindGameEvent<CUserMessageColoredText_t>, FindOrCreateGameEvent<CUserMessageColoredText_t>, PostEvent<CUserMessageColoredText_t>, assign, length, set_color, set_context_player_id, set_context_team_id, set_context_value, set_has_context_player_id, set_has_context_team_id, set_has_reset, set_has_text, set_reset, set_text, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageColoredText_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageColoredText::CUserMessageColoredText, strlen, std::string::assign(char const*,ulong), CUserMessageColoredText::~CUserMessageColoredText, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CEventPosterBase<CUserMessageColoredText_t, 255>::~CEventPosterBase, _Unwind_Resume
// callers: Script_UTIL_MessageText_WithContext, UTIL_MessageText
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent
void __fastcall UTIL_MessageText_WithContext(
        CBasePlayer *player,
        const char *text,
        Color color,
        int nContextPlayerID,
        int nContextValue,
        int nContextTeamID)
{
  size_t v10; // rax
  IGameEventSystem *v11; // r13
  void (__fastcall *v12)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 nContextPlayerIDb; // [rsp+10h] [rbp-1D0h]
  unsigned int v16; // [rsp+1Ch] [rbp-1C4h]
  _QWORD v17[2]; // [rsp+28h] [rbp-1B8h] BYREF
  int v18; // [rsp+38h] [rbp-1A8h]
  std::string *v19; // [rsp+40h] [rbp-1A0h]
  Color v20; // [rsp+48h] [rbp-198h]
  char v21; // [rsp+4Ch] [rbp-194h]
  int v22; // [rsp+50h] [rbp-190h]
  int nContextValuea; // [rsp+54h] [rbp-18Ch]
  int nContextTeamIDa; // [rsp+58h] [rbp-188h]
  unsigned int v25; // [rsp+60h] [rbp-180h]
  CSingleUserRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v27; // [rsp+1A8h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, player);
  CRecipientFilter::MakeReliable(&filter);
  CUserMessageColoredText::CUserMessageColoredText(v17);
  v17[0] = off_40CF250;
  v25 = 0;
  v21 = 0;
  v20 = color;
  v18 |= 7u;
  v10 = strlen(text);
  std::string::assign(v19, text, v10);
  nContextValuea = nContextValue;
  nContextTeamIDa = nContextTeamID;
  v18 |= 0x38u;
  v22 = nContextPlayerID;
  nContextPlayerIDb = IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent;
  v11 = g_pGameEventSystem;
  v16 = v25;
  v12 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent);
  v12(v11, v16, 0, &filter, nContextPlayerIDb, v17, 56);
  v17[0] = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(v17);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_ResetMessageTextAll  (line 1006, @0x000000000240ee60, libserver.so)  // inlines: CBroadcastRecipientFilter, CEventPosterBase, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessageColoredText_t, CUserMessagePB, FindGameEvent<CUserMessageColoredText_t>, FindOrCreateGameEvent<CUserMessageColoredText_t>, PostEvent<CUserMessageColoredText_t>, set_has_reset, set_reset, ~CBroadcastRecipientFilter, ~CEventPosterBase, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessageColoredText_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CUserMessageColoredText::CUserMessageColoredText, CUserMessageColoredText::~CUserMessageColoredText, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent
void __cdecl UTIL_ResetMessageTextAll()
{
  __int64 v0; // r14
  IGameEventSystem *v1; // r13
  void (__fastcall *v2)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v3[2]; // [rsp+18h] [rbp-1B8h] BYREF
  int v4; // [rsp+28h] [rbp-1A8h]
  char v5; // [rsp+3Ch] [rbp-194h]
  int v6; // [rsp+50h] [rbp-180h]
  CReliableBroadcastRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v8; // [rsp+198h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CUserMessageColoredText::CUserMessageColoredText(v3);
  v6 = 0;
  v3[0] = off_40CF250;
  v4 |= 4u;
  v5 = 1;
  v0 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent;
  v1 = g_pGameEventSystem;
  v2 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent);
  v2(v1, 0, 0, &filter, v0, v3, 56);
  v3[0] = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(v3);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_ResetMessageText  (line 1017, @0x000000000240ece0, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageColoredText_t, CUserMessagePB, FindGameEvent<CUserMessageColoredText_t>, FindOrCreateGameEvent<CUserMessageColoredText_t>, PostEvent<CUserMessageColoredText_t>, set_has_reset, set_reset, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageColoredText_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageColoredText::CUserMessageColoredText, CUserMessageColoredText::~CUserMessageColoredText, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: Script_UTIL_ResetMessageText
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent
void __fastcall UTIL_ResetMessageText(CBasePlayer *player)
{
  __int64 v2; // r14
  IGameEventSystem *v3; // r13
  void (__fastcall *v4)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v5[2]; // [rsp+18h] [rbp-1B8h] BYREF
  int v6; // [rsp+28h] [rbp-1A8h]
  char v7; // [rsp+3Ch] [rbp-194h]
  int v8; // [rsp+50h] [rbp-180h]
  CSingleUserRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v10; // [rsp+198h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, player);
  CRecipientFilter::MakeReliable(&filter);
  CUserMessageColoredText::CUserMessageColoredText(v5);
  v8 = 0;
  v5[0] = off_40CF250;
  v6 |= 4u;
  v7 = 1;
  v2 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent;
  v3 = g_pGameEventSystem;
  v4 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent);
  v4(v3, 0, 0, &filter, v2, v5, 56);
  v5[0] = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(v5);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_ClearTrace  (line 1028, @0x0000000002402430, libserver.so)
// calls: CGameTrace::Init
// callers: CBaseEntity::PhysicsMarkEntitiesAsTouching, CBaseEntity::VPhysicsStartTouch
void __fastcall UTIL_ClearTrace(trace_t *const trace)
{
  CGameTrace::Init(trace);
}


// UTIL_SetSize  (line 1038, @0x0000000002402440, libserver.so)  // inlines: SetCollisionBounds
// calls: CCollisionProperty::SetCollisionBounds
// callers: CC_Player_SetModel, CCommentaryViewPosition::Spawn, CPointCommentaryNode::Spawn, CItemSoda::CanThink, CItemSoda::Spawn, CFire::GoOut, CFire::Spawn, CFire::Start, CFuncLadder::Spawn, CRagGib::Init, CBasePlayer::Restore, CBasePlayer::SetOrResetInitialState (16 total)
void __fastcall UTIL_SetSize(CBaseModelEntity *pEnt, const Vector *const vecMin, const Vector *const vecMax)
{
  CCollisionProperty::SetCollisionBounds(&pEnt->m_Collision, vecMin, vecMax);
}


// UTIL_SetOrigin  (line 1047, @0x0000000002402460, libserver.so)
// calls: CBaseEntity::SetLocalOrigin, CBaseEntity::PhysicsTouchTriggers
// callers: CBaseDoor::SetToggleState, CBaseDoor::Spawn, CEntityFlame::Create, CEnvLaser::FireAtPoint, CFire::Init, CFuncMoveLinear::InputTeleportToTarget, CItem::Respawn, CRagGib::Init, CreatePlayerLoadSave, CBaseToggle::LinearMoveDone, MoveToRandomSpot, CFuncPlat::Spawn (17 total)
void __fastcall UTIL_SetOrigin(CBaseEntity *entity, const Vector *const vecOrigin, bool bFireTriggers)
{
  CBaseEntity::SetLocalOrigin(entity, vecOrigin);
  if ( bFireTriggers )
    CBaseEntity::PhysicsTouchTriggers(entity, 0);
}


// UTIL_ParticleEffect  (line 1057, @0x0000000002402490, libserver.so)
// calls: Msg
// strings: "UTIL_ParticleEffect:  Disabled\n"
void __fastcall UTIL_ParticleEffect(
        const Vector *const vecOrigin,
        const Vector *const vecDirection,
        uint32 ulColor,
        uint32 ulCount)
{
  Msg("UTIL_ParticleEffect:  Disabled\n", vecDirection, ulColor, ulCount);
}


// UTIL_Smoke  (line 1062, @0x00000000024024b0, libserver.so)
// calls: ITempEntsSystem::Smoke
// callers: UTIL_BloodDrips
void __fastcall UTIL_Smoke(const Vector *const origin, __m128i a2, float scale, const float framerate)
{
  ITempEntsSystem::Smoke(g_pEffects, origin, a2, scale);
}


// UTIL_SnapDirectionToAxis  (line 1068, @0x00000000024024d0, libserver.so)  // inlines: operator[]
// callers: CPhysTorque::Spawn, CPhysMotor::Spawn, CPhysSlideConstraint::CreateConstraint, CPhysHinge::Spawn
void __fastcall UTIL_SnapDirectionToAxis(Vector *const direction, float a2, float epsilon)
{
  Vector *v3; // rax
  int v4; // ecx
  __m128 v5; // xmm0

  v3 = direction;
  v4 = 0;
  while ( fabs(v3->x) <= (1.0 - a2) )
  {
    ++v4;
    v3 = (v3 + 4);
    if ( v4 == 3 )
      return;
  }
  v5 = _mm_cmplt_ss(LODWORD(v3->x), 0LL);
  LODWORD(v3->x) = _mm_andnot_ps(v5, 0x3F800000u).m128_u32[0] | v5.m128_i32[0] & 0xBF800000;
  *(&direction->x + (v4 + 1) % 3) = 0;
  *(&direction->x + (v4 + 2) % 3) = 0;
}


// UTIL_VarArgs  (line 1087, @0x0000000002402580, libserver.so)
// calls: V_vsnprintf
// callers: CBaseEntity::ModifyOrAppendCriteria, SendToServerConsole, CPropData::ParsePropFromKV, CBaseCombatWeapon::MakeWeaponNameFromEntity, CBaseEntity::InputKill, CResponseQueue::DispatchOneResponse_ThenANY, CResponseQueue::DispatchOneResponse, CC_Ent_Info, ent_setpos, ent_setang, ClientCommand, CFuncLadder::Spawn (41 total)
// globals: UTIL_VarArgs(char const*,...)::string
char *UTIL_VarArgs(const char *format, ...)
{
  va_list argptr; // [rsp+8h] [rbp-C8h] BYREF

  va_start(argptr, format);
  V_vsnprintf(UTIL_VarArgs(char const*,...)::string, 1024, format, argptr);
  return UTIL_VarArgs(char const*,...)::string;
}


// UTIL_IsMasterTriggered  (line 1099, @0x0000000002402630, libserver.so)  // inlines: CUtlSymbolLarge, operator!=
// calls: CGameEntitySystem::FindEntityByName, Warning
// callers: CBaseButton::ButtonActivate, CBaseButton::TriggerAndWait, CBaseButton::ButtonTouch, CBaseDoor::DoorActivate, CBaseDoor::DoorTouch, CRuleEntity::CanFireForActivator, CBaseDMStart::IsTriggered, CBaseToggle::IsLockedByMaster
// strings: "Master was null or not a master!\n"
__int64 __fastcall UTIL_IsMasterTriggered(string_t sMaster, CBaseEntity *pActivator)
{
  __int64 result; // rax
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v5; // rbx
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  result = 1;
  if ( *sMaster.u.m_Id != 0 )
  {
    v6[0] = *sMaster.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v6, 0, pActivator, 0, 0);
    v5 = EntityByName;
    if ( EntityByName != 0 && ((*(EntityByName->_vptr_IHandleEntity + 19))(EntityByName) & 0x10000000) != 0 )
    {
      return (*(v5->_vptr_IHandleEntity + 94))(v5, pActivator);
    }
    else
    {
      Warning("Master was null or not a master!\n");
      return 1;
    }
  }
  return result;
}


// UTIL_BloodStream  (line 1117, @0x00000000024026d0, libserver.so)  // inlines: CPVSFilter, ~CPVSFilter
// calls: UTIL_ShouldShowBlood, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CBlood::InputEmitBlood
void __fastcall UTIL_BloodStream(const Vector *const origin, const Vector *const direction, int color, int amount)
{
  int v7; // eax
  CPVSFilter filter; // [rsp+20h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+158h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( UTIL_ShouldShowBlood(color) )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FF45F0;
    CRecipientFilter::AddRecipientsByPVS(&filter, origin);
    v7 = 255;
    if ( amount <= 255 )
      v7 = amount;
    (*(te->_vptr_IPredictionSystem + 8))(te, &filter, origin, direction, 247, 63, 0.0, 14, 255, v7);
    filter._vptr_IRecipientFilter = &off_3FF45F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// UTIL_RandomBloodVector  (line 1130, @0x0000000002402800, libserver.so)
// callers: CBlood::Direction
Vector __cdecl UTIL_RandomBloodVector()
{
  double v0; // xmm0_8
  __int64 direction; // [rsp+8h] [rbp-38h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  LODWORD(direction) = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  HIDWORD(direction) = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  v0 = (*(*random_valve + 8LL))(random_valve, 0.0, 1.0);
  result.z = *&v0;
  *&result.x = direction;
  return result;
}


// UTIL_ImpactTrace  (line 1148, @0x0000000002402890, libserver.so)
// callers: CBaseEntity::DoImpactEffect, CWaterBullet::Touch
void __fastcall UTIL_ImpactTrace(trace_t *pTrace, int iDamageType, char *pCustomImpactName)
{
  CBaseEntity *m_pEnt; // rax

  m_pEnt = pTrace->m_pEnt;
  if ( m_pEnt != 0 && (pTrace->m_ShapeAttributes.m_nInteractsAs & 8) == 0 && pTrace->fraction != 1.0 )
    (*(m_pEnt->_vptr_IHandleEntity + 97))(pTrace->m_pEnt, pTrace, iDamageType, pCustomImpactName, 1.0);
}


// UTIL_PlayerDecalTrace  (line 1171, @0x0000000002402bd0, libserver.so)  // inlines: CBroadcastRecipientFilter, entindex, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CEntityInstance::GetEntityIndex, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall UTIL_PlayerDecalTrace(trace_t *pTrace, CEntityIndex playernum)
{
  void (__fastcall *v4)(ITempEntsSystem *, CBroadcastRecipientFilter *, Vector *, _QWORD, _QWORD, double); // r15
  CEntityIndex v5; // eax
  CBroadcastRecipientFilter filter; // [rsp+0h] [rbp-170h] BYREF
  unsigned __int64 v7; // [rsp+138h] [rbp-38h]

  v7 = __readfsqword(0x28u);
  if ( pTrace->fraction != 1.0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    v4 = *(te->_vptr_IPredictionSystem + 21);
    v5.m_Data = CEntityInstance::GetEntityIndex(pTrace->m_pEnt).m_Data;
    v4(te, &filter, &pTrace->endpos, playernum.m_Data, v5.m_Data, 0.0);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// UTIL_TeamsMatch  (line 1182, @0x0000000002402ce0, libserver.so)
// calls: V_stricmp_fast
bool __fastcall UTIL_TeamsMatch(const char *pTeamName1, const char *pTeamName2)
{
  char v4; // al
  bool v5; // dl

  v4 = (*(g_pGameRules->_vptr_CGameRules + 60))(g_pGameRules);
  v5 = 1;
  if ( v4 != 0 && (v5 = 0, *pTeamName1 != 0) && *pTeamName2 != 0 )
    return V_stricmp_fast(pTeamName1, pTeamName2) == 0;
  else
    return v5;
}


// UTIL_AxisStringToPointPoint  (line 1199, @0x0000000002402d40, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy, strtok, UTIL_StringToVector, __stack_chk_fail
// callers: UTIL_AxisStringToPointDir
void __fastcall UTIL_AxisStringToPointPoint(Vector *const start, Vector *const end, const char *pString)
{
  char *v5; // rax
  char *v6; // rax
  char tmpstr[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v8; // [rsp+108h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  _V_strncpy(tmpstr, pString, 256);
  v5 = strtok(tmpstr, ",");
  if ( v5 != 0 && *v5 != 0 )
  {
    UTIL_StringToVector(&start->x, v5);
    while ( 1 )
    {
      v6 = strtok(0, ",");
      if ( v6 == 0 || *v6 == 0 )
        break;
      UTIL_StringToVector(&end->x, v6);
    }
  }
}


// UTIL_AxisStringToPointDir  (line 1221, @0x0000000002402df0, libserver.so)  // inlines: VectorSubtract, operator-, operator=
// calls: UTIL_AxisStringToPointPoint, VectorNormalize
// callers: UTIL_AxisStringToUnitDir
void __fastcall UTIL_AxisStringToPointDir(Vector *const start, Vector *const dir, const char *pString)
{
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  Vector end; // [rsp+0h] [rbp-20h] BYREF

  UTIL_AxisStringToPointPoint(start, &end, pString);
  v5 = end.z - start->z;
  v6 = end.x - start->x;
  dir->y = end.y - start->y;
  dir->z = v5;
  dir->x = v6;
  VectorNormalize(dir);
}


// UTIL_AxisStringToUnitDir  (line 1229, @0x0000000002402e50, libserver.so)
// calls: UTIL_AxisStringToPointDir
void __fastcall UTIL_AxisStringToUnitDir(Vector *const dir, const char *pString)
{
  Vector start; // [rsp+0h] [rbp-10h] BYREF

  UTIL_AxisStringToPointDir(&start, dir, pString);
}


// UTIL_ClipPunchAngleOffset  (line 1241, @0x0000000002402e70, libserver.so)  // inlines: operator+, operator[]
void __fastcall UTIL_ClipPunchAngleOffset(QAngle *const in, const QAngle *const punch, const QAngle *const clip)
{
  __int64 v3; // rax
  float v4; // xmm1_4
  float y; // xmm2_4
  float x; // xmm0_4
  vec_t v7; // xmm2_4
  QAngle final; // [rsp+0h] [rbp-10h]

  v3 = 0;
  v4 = in->x + punch->x;
  y = in->y;
  final.z = in->z + punch->z;
  x = clip->x;
  v7 = y + punch->y;
  final.x = v4;
  final.y = v7;
  if ( v4 <= x )
  {
LABEL_2:
    x = -x;
    if ( x <= v4 )
    {
      x = v4;
      goto LABEL_4;
    }
  }
  while ( 1 )
  {
    *(&final.x + v3) = x;
LABEL_4:
    *(&in->x + v3) = x - *(&punch->x + v3);
    v3 += 4;
    if ( v3 == 12 )
      break;
    v4 = *(&final.x + v3);
    x = *(&clip->x + v3);
    if ( v4 <= x )
      goto LABEL_2;
  }
}


// UTIL_WaterLevel  (line 1262, @0x0000000002402f00, libserver.so)  // inlines: UTIL_PointContents
// calls: CGamePhysicsQueryInterface::GetPointContents
// callers: CFishPool::Spawn, UTIL_Bubbles
vec_t __fastcall UTIL_WaterLevel(const Vector *const position, vec_t a2, vec_t minz, float maxz)
{
  uint64 PointContents; // rax
  vec_t v5; // xmm2_4
  vec_t result; // xmm0_4
  uint64 v7; // rax
  float z; // xmm1_4
  __m128 z_low; // xmm2
  float v10; // xmm3_4
  __m128 v11; // xmm2
  __m128d v12; // xmm0
  vec_t v13; // xmm4_4
  uint64 v14; // rax
  float maxzb; // [rsp+8h] [rbp-28h]
  float maxzc; // [rsp+8h] [rbp-28h]
  float minzb; // [rsp+Ch] [rbp-24h]
  unsigned __int32 minzc; // [rsp+Ch] [rbp-24h]
  Vector midUp; // [rsp+10h] [rbp-20h] BYREF

  midUp.z = a2;
  *&midUp.x = *&position->x;
  PointContents = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &midUp, 0x1C000u);
  v5 = a2;
  if ( (PointContents & 0x1C000) == 0 )
    return a2;
  midUp.z = minz;
  minzb = minz;
  maxzb = v5;
  v7 = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &midUp, 0x1C000u);
  z = minzb;
  result = minzb;
  if ( (v7 & 0x1C000) == 0 )
  {
    z_low = LODWORD(maxzb);
    result = midUp.z;
    v10 = minzb - maxzb;
    if ( (minzb - maxzb) > 1.0 )
    {
      do
      {
        v11 = _mm_unpacklo_ps(z_low, z_low);
        v12 = _mm_cvtps_pd(v11);
        maxzc = z;
        minzc = v11.m128_i32[0];
        v12.m128d_f64[0] = v12.m128d_f64[0] + v10 * 0.5;
        v13 = _mm_movedup_pd(v12).m128d_f64[0];
        midUp.z = v13;
        v14 = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &midUp, 0x1C000u);
        z_low = minzc;
        z = maxzc;
        if ( (v14 & 0x1C000) != 0 )
          z_low = LODWORD(midUp.z);
        else
          z = midUp.z;
        result = midUp.z;
        v10 = z - z_low.m128_f32[0];
      }
      while ( (z - z_low.m128_f32[0]) > 1.0 );
    }
  }
  return result;
}


// CWaterTraceFilter::~CWaterTraceFilter  (line 1297, @0x0000000002410560, libserver.so)  // inlines: ~CTraceFilter
void __fastcall CWaterTraceFilter::~CWaterTraceFilter(CWaterTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CWaterTraceFilter::~CWaterTraceFilter  (line 1297, @0x0000000002410730, libserver.so)  // inlines: ~CTraceFilter, ~CWaterTraceFilter
// calls: operator delete
void __fastcall CWaterTraceFilter::~CWaterTraceFilter(CWaterTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CWaterTraceFilter::ShouldHitEntity  (line 1300, @0x0000000002411750, libserver.so)
bool __fastcall CWaterTraceFilter::ShouldHitEntity(CWaterTraceFilter *const this, CBaseEntity *pEntity)
{
  return pEntity != 0
      && pEntity->m_pCollision != 0
      && (pEntity[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClusters & 0x8000) != 0;
}


// UTIL_FindWaterSurface  (line 1314, @0x0000000002403030, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CTraceFilter, CWaterTraceFilter, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, TraceRay, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay
// callers: UTIL_BubbleTrail
vec_t __fastcall UTIL_FindWaterSurface(const Vector *const position, float a2, vec_t minz, float maxz)
{
  float y; // [rsp+8h] [rbp-148h]
  float x; // [rsp+Ch] [rbp-144h]
  CWaterTraceFilter waterTraceFilter; // [rsp+10h] [rbp-140h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-110h] BYREF
  trace_t tr; // [rsp+90h] [rbp-C0h] BYREF

  y = position->y;
  x = position->x;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  waterTraceFilter.m_attr.m_nHierarchyId = 0;
  ray.m_Start.w = 0.0;
  ray.m_Delta.x = x - x;
  ray.m_Delta.y = y - y;
  ray.m_Delta.z = a2 - minz;
  memset(&ray.m_Delta.w, 0, 40);
  *(&waterTraceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&waterTraceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  waterTraceFilter._vptr_CTraceFilter = off_40D0550;
  ray.m_Start.x = x;
  ray.m_Start.y = y;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.z = minz;
  waterTraceFilter.m_attr.m_nInteractsExclude = 0;
  waterTraceFilter.m_attr.m_nInteractsAs = 0;
  waterTraceFilter.m_attr.m_nCollisionGroup = 0;
  waterTraceFilter.m_attr.m_nEntityIdToIgnore = -1;
  waterTraceFilter.m_attr.m_nObjectSetMask = 7;
  ray.m_IsRay = 1;
  waterTraceFilter.m_attr.m_nInteractsWith = 114688;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &waterTraceFilter, &tr);
  return tr.endpos.z;
}


// UTIL_Bubbles  (line 1329, @0x0000000002403230, libserver.so)  // inlines: CPASFilter, VectorAdd, VectorMultiply, operator*, operator+, ~CPASFilter
// calls: UTIL_WaterLevel, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CEntityFlame::FlameThink
void __fastcall UTIL_Bubbles(const Vector *const mins, const Vector *const maxs, int count)
{
  float z; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  vec_t v9; // xmm0_4
  float flHeight; // [rsp+Ch] [rbp-184h]
  Vector mid; // [rsp+10h] [rbp-180h] BYREF
  CPASFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+158h] [rbp-38h]

  z = mins->z;
  v7 = mins->x + maxs->x;
  v13 = __readfsqword(0x28u);
  v8 = mins->y + maxs->y;
  v9 = (z + maxs->z) * 0.5;
  mid.x = v7 * 0.5;
  mid.z = v9;
  mid.y = v8 * 0.5;
  flHeight = UTIL_WaterLevel(&mid, v9, v9 + 1024.0, v8 * 0.5) - mins->z;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &mid);
  (*(te->_vptr_IPredictionSystem + 12))(te, &filter, mins, maxs, count, 0.0, flHeight, 8.0);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_BubbleTrail  (line 1341, @0x00000000024033a0, libserver.so)  // inlines: CBroadcastRecipientFilter, VectorLerp, ~CBroadcastRecipientFilter
// calls: UTIL_FindWaterSurface, IntersectRayWithAAPlane, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CBaseEntity::CreateBubbleTrailTracer
void __fastcall UTIL_BubbleTrail(const Vector *const from, const Vector *const to, int count)
{
  float v3; // xmm2_4
  const Vector *p_vecWaterPoint; // rbx
  vec_t WaterSurface; // xmm0_4
  __m128i v8; // xmm2
  __m128i z_low; // xmm3
  float v10; // xmm0_4
  unsigned int v11; // r15d
  float v12; // xmm0_4
  float y; // xmm2_4
  vec_t v14; // xmm1_4
  float z; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float flStartHeight; // [rsp+Ch] [rbp-184h]
  Vector vecWaterPoint; // [rsp+10h] [rbp-180h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+158h] [rbp-38h]

  p_vecWaterPoint = from;
  v21 = __readfsqword(0x28u);
  flStartHeight = UTIL_FindWaterSurface(from, from->z, from->z + 256.0, v3) - from->z;
  WaterSurface = UTIL_FindWaterSurface(to, to->z, to->z + 256.0, flStartHeight);
  v8 = LODWORD(flStartHeight);
  z_low = LODWORD(to->z);
  v10 = WaterSurface - *z_low.m128i_i32;
  if ( v10 != 0.0 || flStartHeight != 0.0 )
  {
    *v8.m128i_i32 = flStartHeight + p_vecWaterPoint->z;
    v11 = _mm_cvtsi128_si32(v8);
    if ( v10 == 0.0 )
    {
      if ( flStartHeight != 0.0 )
      {
LABEL_5:
        v12 = IntersectRayWithAAPlane(p_vecWaterPoint, to, 2, 1.0, *&v11);
        y = p_vecWaterPoint->y;
        vecWaterPoint.x = ((to->x - p_vecWaterPoint->x) * v12) + p_vecWaterPoint->x;
        v14 = ((to->y - y) * v12) + y;
        z = p_vecWaterPoint->z;
        vecWaterPoint.y = v14;
        vecWaterPoint.z = ((to->z - z) * v12) + z;
        v16 = count;
        if ( flStartHeight == 0.0 )
        {
          p_vecWaterPoint = &vecWaterPoint;
          v17 = v16 * (1.0 - v12);
        }
        else
        {
          v17 = v16 * v12;
          to = &vecWaterPoint;
        }
        count = v17;
        goto LABEL_8;
      }
    }
    else if ( flStartHeight != 0.0 )
    {
LABEL_8:
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filter);
      (*(te->_vptr_IPredictionSystem + 13))(
        te,
        &filter,
        p_vecWaterPoint,
        to,
        count,
        0.0,
        *_mm_cvtsi32_si128(v11).m128i_i64,
        8.0);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filter);
      return;
    }
    *z_low.m128i_i32 = *z_low.m128i_i32 + v10;
    v11 = _mm_cvtsi128_si32(z_low);
    goto LABEL_5;
  }
}


// UTIL_Beam  (line 1403, @0x0000000002403610, libserver.so)  // inlines: CBroadcastRecipientFilter, CWeakHandle, Init, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall UTIL_Beam(
        Vector *const Start,
        Vector *const End,
        HMaterial nModelIndex,
        HMaterial nHaloIndex,
        unsigned __int8 FrameStart,
        unsigned __int8 FrameRate,
        float Life,
        unsigned __int8 Width,
        unsigned __int8 EndWidth,
        unsigned __int8 FadeLength,
        unsigned __int8 Noise,
        unsigned __int8 Red,
        unsigned __int8 Green,
        unsigned __int8 Blue,
        unsigned __int8 Brightness,
        unsigned __int8 Speed)
{
  int (**vptr_IPredictionSystem)(...); // rax
  int (*v21)(...); // rax
  void *v25; // [rsp+80h] [rbp-190h] BYREF
  void *m_pData; // [rsp+90h] [rbp-180h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v28; // [rsp+1D8h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  vptr_IPredictionSystem = te->_vptr_IPredictionSystem;
  m_pData = nHaloIndex.m_pBinding->m_pData;
  v21 = vptr_IPredictionSystem[6];
  v25 = nModelIndex.m_pBinding->m_pData;
  v21(
    te,
    &filter,
    Start,
    End,
    &v25,
    &m_pData,
    0.0,
    Life,
    Width,
    EndWidth,
    Noise,
    FrameStart,
    FrameRate,
    FadeLength,
    Red,
    Green,
    Blue,
    Brightness,
    Speed);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_LogPrintf  (line 1434, @0x0000000002403810, libserver.so)
// calls: V_vsnprintf, __stack_chk_fail
// callers: CAI_Expresser::SpeechMsg, Host_Say, CEventLog::PrintPlayerEvent, AddDebugTextLine
// globals: g_bIsLogging
void UTIL_LogPrintf(const char *fmt, ...)
{
  va_list argptr; // [rsp+8h] [rbp-4E8h] BYREF
  char tempString[1032]; // [rsp+20h] [rbp-4D0h] BYREF
  unsigned __int64 v3; // [rsp+428h] [rbp-C8h]

  v3 = __readfsqword(0x28u);
  if ( g_bIsLogging )
  {
    va_start(argptr, fmt);
    V_vsnprintf(tempString, 1024, fmt, argptr);
    (*(*engine + 392LL))(engine, tempString);
  }
}


// UTIL_DotPoints  (line 1454, @0x0000000002403910, libserver.so)  // inlines: DotProduct2D, FastSqrt, Length, Vector2DLength, Vector2DNormalize, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator/=
float __fastcall UTIL_DotPoints(const Vector *const vecSrc, const Vector *const vecCheck, const Vector *const vecDir)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4

  v3 = vecCheck->x - vecSrc->x;
  v4 = vecCheck->y - vecSrc->y;
  v5 = fsqrt((v3 * v3) + (v4 * v4));
  if ( v5 == 0.0 )
    return (0.0 * vecDir->x) + (0.0 * vecDir->y);
  else
    return ((v3 * (1.0 / v5)) * vecDir->x) + (((1.0 / v5) * v4) * vecDir->y);
}


// UTIL_StripToken  (line 1468, @0x0000000002403990, libserver.so)
void __fastcall UTIL_StripToken(const char *pKey, char *pDest)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 i; // rcx

  v2 = *pKey;
  if ( *pKey == 35 || v2 == 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    for ( i = 0; ; i = v3++ )
    {
      pDest[i] = v2;
      v2 = pKey[v3];
      if ( v2 == 35 || v2 == 0 )
        break;
    }
  }
  pDest[v3] = 0;
}


// UTIL_ScaleForGravity  (line 1482, @0x00000000024039e0, libserver.so)  // inlines: GetFloat
// callers: CShower::Spawn
float __fastcall UTIL_ScaleForGravity(float a1, float desiredGravity)
{
  float m_fValue; // xmm1_4

  m_fValue = sv_gravity.m_pParent->m_Value.m_fValue;
  if ( m_fValue <= 0.0 )
    return 0.0;
  else
    return a1 / m_fValue;
}


// Sys_Error  (line 1493, @0x0000000002403a10, libserver.so)
// calls: V_vsnprintf, Warning, __stack_chk_fail
void Sys_Error(char *error, ...)
{
  va_list argptr; // [rsp+8h] [rbp-4E8h] BYREF
  char string[1032]; // [rsp+20h] [rbp-4D0h] BYREF
  unsigned __int64 v3; // [rsp+428h] [rbp-C8h]

  va_start(argptr, error);
  v3 = __readfsqword(0x28u);
  V_vsnprintf(string, 1024, error, argptr);
  Warning("%s", string);
}


// UTIL_EntityInSolid  (line 1509, @0x0000000002403b00, libserver.so)  // inlines: operator=
// calls: CBaseEntity::GetMoveParent, CBaseEntity::GetRootMoveParent, CGamePhysicsQueryInterface::GetPointContents
// callers: CreateEntityTransitionList
int __fastcall UTIL_EntityInSolid(CBaseEntity *pEntity)
{
  CBaseEntity *RootMoveParent; // rbx
  CBaseEntity *MoveParent; // rax
  vec_t v4; // xmm1_4
  Vector point; // [rsp+0h] [rbp-30h] BYREF
  Vector v6; // [rsp+10h] [rbp-20h]

  RootMoveParent = pEntity;
  MoveParent = CBaseEntity::GetMoveParent(pEntity);
  if ( MoveParent != 0 )
  {
    if ( (*(MoveParent->_vptr_IHandleEntity + 140))(MoveParent) != 0 )
      return 0;
    RootMoveParent = CBaseEntity::GetRootMoveParent(RootMoveParent);
  }
  *&v6.x = (*(RootMoveParent->_vptr_IHandleEntity + 62))(RootMoveParent);
  v6.z = v4;
  point = v6;
  return CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &point, 0xFFFFFFFFFFFFFFFFLL) & 0x87001;
}


// EntityMatrix::InitFromEntity  (line 1532, @0x0000000002403ba0, libserver.so)  // inlines: Identity
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, VMatrix::SetupMatrixOrgAngles, MatrixSetIdentity
// callers: CFire::Init
void __fastcall EntityMatrix::InitFromEntity(EntityMatrix *const this, CBaseEntity *pEntity)
{
  const QAngle *AbsAngles; // r13
  const Vector *AbsOrigin; // rax

  if ( pEntity != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(pEntity);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
    VMatrix::SetupMatrixOrgAngles(this, AbsOrigin, AbsAngles);
  }
  else
  {
    MatrixSetIdentity(this);
  }
}


// EntityMatrix::InitFromEntityAttachmentName  (line 1543, @0x0000000002403c00, libserver.so)  // inlines: Identity
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::LookupAttachment, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, VMatrix::SetupMatrixOrgAngles, CBaseAnimating::GetAttachment, MatrixSetIdentity
void __fastcall EntityMatrix::InitFromEntityAttachmentName(
        EntityMatrix *const this,
        CBaseEntity *pEntity,
        CUtlStringToken attachmentName)
{
  const CBaseAnimating *v6; // rax
  const CBaseAnimating *v7; // r14
  AttachmentHandle_t v8; // al
  const QAngle *AbsAngles; // r12
  const Vector *AbsOrigin; // rax
  Vector vOrigin; // [rsp+0h] [rbp-50h] BYREF
  QAngle vAngles; // [rsp+10h] [rbp-40h] BYREF

  if ( pEntity != 0 )
  {
    if ( attachmentName.m_nHashCode != 0
      && (v6 = (*(pEntity->_vptr_IHandleEntity + 43))(pEntity), v7 = v6, v6 != 0)
      && CBaseAnimating::GetModelPtr(v6) != 0
      && (v8 = CBaseAnimating::LookupAttachment(v7, attachmentName)) != 0
      && CBaseAnimating::GetAttachment(v7, v8, &vOrigin, &vAngles) )
    {
      VMatrix::SetupMatrixOrgAngles(this, &vOrigin, &vAngles);
    }
    else
    {
      AbsAngles = CBaseEntity::GetAbsAngles(pEntity);
      AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
      VMatrix::SetupMatrixOrgAngles(this, AbsOrigin, AbsAngles);
    }
  }
  else
  {
    MatrixSetIdentity(this);
  }
}


// EntityMatrix::InitFromEntityAttachmentHandle  (line 1572, @0x0000000002403cd0, libserver.so)  // inlines: Identity
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetAttachment, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, VMatrix::SetupMatrixOrgAngles, MatrixSetIdentity
void __fastcall EntityMatrix::InitFromEntityAttachmentHandle(
        EntityMatrix *const this,
        CBaseEntity *pEntity,
        AttachmentHandle_t hAttachment)
{
  const CBaseAnimating *v6; // rax
  const CBaseAnimating *v7; // r14
  const QAngle *AbsAngles; // r12
  const Vector *AbsOrigin; // rax
  Vector vOrigin; // [rsp+10h] [rbp-50h] BYREF
  QAngle vAngles; // [rsp+20h] [rbp-40h] BYREF

  if ( pEntity != 0 )
  {
    if ( hAttachment != 0
      && (v6 = (*(pEntity->_vptr_IHandleEntity + 43))(pEntity), v7 = v6, v6 != 0)
      && CBaseAnimating::GetModelPtr(v6) != 0
      && CBaseAnimating::GetAttachment(v7, hAttachment, &vOrigin, &vAngles) )
    {
      VMatrix::SetupMatrixOrgAngles(this, &vOrigin, &vAngles);
    }
    else
    {
      AbsAngles = CBaseEntity::GetAbsAngles(pEntity);
      AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
      VMatrix::SetupMatrixOrgAngles(this, AbsOrigin, AbsAngles);
    }
  }
  else
  {
    MatrixSetIdentity(this);
  }
}


// EntityMatrix::InitFromEntityLocal  (line 1600, @0x0000000002403da0, libserver.so)  // inlines: Identity
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin, VMatrix::SetupMatrixOrgAngles, MatrixSetIdentity
void __fastcall EntityMatrix::InitFromEntityLocal(EntityMatrix *const this, CBaseEntity *entity)
{
  const QAngle *LocalAngles; // r13
  const Vector *LocalOrigin; // rax

  if ( entity != 0 )
  {
    LocalAngles = CBaseEntity::GetLocalAngles(entity);
    LocalOrigin = CBaseEntity::GetLocalOrigin(entity);
    VMatrix::SetupMatrixOrgAngles(this, LocalOrigin, LocalAngles);
  }
  else
  {
    MatrixSetIdentity(this);
  }
}


// UTIL_ValidateSoundName  (line 1616, @0x0000000002403e00, libserver.so)  // inlines: String, ToCStr, V_strlen, operator=
// calls: strlen, V_stricmp_fast, AllocPooledString
// callers: CBaseDoor::Spawn, CBasePropDoor::CalcDoorSounds, CBasePlatTrain::Spawn
void __fastcall UTIL_ValidateSoundName(string_t *const name, const char *defaultStr)
{
  UtlSymLargeId_t m_Id; // r13
  UtlSymLargeId_t v5[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( name->u.m_Id == 0 || (m_Id = name->u.m_Id, strlen(name->u.m_pAsString) <= 0) || V_stricmp_fast(m_Id, "0") == 0 )
  {
    AllocPooledString(v5, defaultStr);
    name->u.m_Id = v5[0];
  }
}


// UTIL_ValidateSoundName  (line 1627, @0x0000000002403e60, libserver.so)  // inlines: String, ToCStr, V_strlen, V_strncpy<int>
// calls: _V_strncpy, strlen, V_stricmp_fast
// callers: CBaseDoor::Precache, CBasePlatTrain::Precache
void __fastcall UTIL_ValidateSoundName(
        char *pOutputName,
        int nOutputSize,
        const string_t *const name,
        const char *defaultStr)
{
  __int64 v8; // rdx
  const char *m_Id; // rsi
  UtlSymLargeId_t v10; // r15

  if ( name->u.m_Id != 0 && (v10 = name->u.m_Id, strlen(name->u.m_pAsString) > 0) && V_stricmp_fast(v10, "0") != 0 )
  {
    m_Id = "";
    if ( name->u.m_Id != 0 )
      m_Id = name->u.m_Id;
    v8 = nOutputSize;
  }
  else
  {
    v8 = nOutputSize;
    m_Id = defaultStr;
  }
  _V_strncpy(pOutputName, m_Id, v8);
}


// UTIL_SetAudioMixNameInput  (line 1641, @0x000000000240d6e0, libserver.so)  // inlines: CNetMessagePB, CUserMessageAudioParameter_t, CUserMessagePB, FindGameEvent<CUserMessageAudioParameter_t>, FindOrCreateGameEvent<CUserMessageAudioParameter_t>, PostEvent<CUserMessageAudioParameter_t>, set_has_int_value, set_has_parameter_type, set_int_value, set_name_hash_code, set_parameter_type, set_value, ~CNetMessagePB, ~CUserMessageAudioParameter_t, ~CUserMessagePB
// calls: CUserMessageAudioParameter::CUserMessageAudioParameter, CUserMessageAudioParameter::~CUserMessageAudioParameter, _Unwind_Resume
// callers: CBasePlayer::OnDamagedByExplosion, CBasePlayer::SetOrResetInitialState
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent
void __fastcall UTIL_SetAudioMixNameInput(IRecipientFilter *const filter, CUtlStringToken nName, uint32 nIntValue)
{
  __int64 v6; // r13
  IGameEventSystem *v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, _QWORD *, __int64); // r15
  _QWORD v9[2]; // [rsp+10h] [rbp-60h] BYREF
  int v10; // [rsp+20h] [rbp-50h]
  int v11; // [rsp+28h] [rbp-48h]
  uint32 m_nHashCode; // [rsp+2Ch] [rbp-44h]
  int v13; // [rsp+30h] [rbp-40h]
  uint32 nIntValuea; // [rsp+34h] [rbp-3Ch]

  CUserMessageAudioParameter::CUserMessageAudioParameter(v9);
  m_nHashCode = nName.m_nHashCode;
  v9[0] = off_40CFFD0;
  nIntValuea = nIntValue;
  v6 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent;
  v11 = -1326715226;
  v13 = 0;
  v10 |= 0xFu;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, v9, 40);
  v9[0] = &off_40CFE50;
  CUserMessageAudioParameter::~CUserMessageAudioParameter(v9);
}


// UTIL_SetAudioMixControlInput  (line 1653, @0x000000000240d7c0, libserver.so)  // inlines: CNetMessagePB, CUserMessageAudioParameter_t, CUserMessagePB, FindGameEvent<CUserMessageAudioParameter_t>, FindOrCreateGameEvent<CUserMessageAudioParameter_t>, PostEvent<CUserMessageAudioParameter_t>, set_has_int_value, set_has_parameter_type, set_int_value, set_name_hash_code, set_parameter_type, set_value, ~CNetMessagePB, ~CUserMessageAudioParameter_t, ~CUserMessagePB
// calls: CUserMessageAudioParameter::CUserMessageAudioParameter, CUserMessageAudioParameter::~CUserMessageAudioParameter, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent
void __fastcall UTIL_SetAudioMixControlInput(
        IRecipientFilter *const filter,
        CUtlStringToken nName,
        float a3,
        float flValue)
{
  __int64 v6; // r13
  IGameEventSystem *v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, _QWORD *, __int64); // r15
  _QWORD v10[2]; // [rsp+10h] [rbp-60h] BYREF
  int v11; // [rsp+20h] [rbp-50h]
  int v12; // [rsp+28h] [rbp-48h]
  uint32 m_nHashCode; // [rsp+2Ch] [rbp-44h]
  float v14; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+34h] [rbp-3Ch]

  CUserMessageAudioParameter::CUserMessageAudioParameter(v10);
  m_nHashCode = nName.m_nHashCode;
  v10[0] = off_40CFFD0;
  v12 = -378396473;
  v15 = 0;
  v6 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent;
  v14 = a3;
  v11 |= 0xFu;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageAudioParameter_t>(bool)::s_hEvent);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, v10, 40);
  v10[0] = &off_40CFE50;
  CUserMessageAudioParameter::~CUserMessageAudioParameter(v10);
}


// CCheckClient::~CCheckClient  (line 1669, @0x00000000024108a0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CCheckClient::~CCheckClient(CCheckClient *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CCheckClient::~CCheckClient  (line 1669, @0x00000000024108c0, libserver.so)  // inlines: ~CAutoGameSystem, ~CCheckClient
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CCheckClient::~CCheckClient(CCheckClient *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CCheckClient::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 1671, @0x00000000024100d0, libserver.so)
void __fastcall CCheckClient::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CCheckClient *const this)
{
  ;
}


// CCheckClient::DoesGameSystemReallocate  (line 1671, @0x00000000024100e0, libserver.so)
// globals: CCheckClient::sm_Factory
bool __fastcall CCheckClient::DoesGameSystemReallocate(const CCheckClient *const this)
{
  return (*(CCheckClient::sm_Factory->_vptr_IGameSystemFactory + 8))(CCheckClient::sm_Factory);
}


// CCheckClient::SetGameSystemGlobalPtrs  (line 1671, @0x0000000002410100, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CCheckClient::sm_Factory
void __fastcall CCheckClient::SetGameSystemGlobalPtrs(CCheckClient *const this, void *pValue)
{
  if ( CCheckClient::sm_Factory != 0 )
    (*(CCheckClient::sm_Factory->_vptr_IGameSystemFactory + 7))(CCheckClient::sm_Factory, pValue);
}


// CCheckClient::GameInit  (line 1680, @0x0000000002410130, libserver.so)
void __fastcall CCheckClient::GameInit(CCheckClient *const this, const EventGameInit_t *const msg)
{
  this->m_checkCluster = 8193;
  this->m_lastcheck = -1;
  this->m_lastchecktime = -1.0;
}


// CCheckClient::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 1698, @0x0000000002403ee0, libserver.so)
void __cdecl CCheckClient::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// UTIL_GetCurrentCheckClient  (line 1777, @0x00000000023fc470, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, UTIL_GetNewCheckClient, V_memset, curtime, memset, operator=
// calls: memset, CEntitySystem::GetActiveSpawnGroupHandle
// callers: UTIL_MaybeCacheClientPVS, UTIL_FindClientInPVS, UTIL_FindClientInPVSGuts
// globals: g_pCheckClient
CBaseEntity *__cdecl UTIL_GetCurrentCheckClient()
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v1; // rbx
  CCheckClient *v2; // r13
  int m_lastcheck; // r9d
  float v4; // xmm0_4
  int maxClients; // esi
  int v6; // ecx
  int v7; // ebx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *m_pInstance; // rdi
  int v13; // xmm1_4
  __int64 (__fastcall *v14)(IPVSManager *, _QWORD, _QWORD *); // r15
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  int v16; // eax
  CCheckClient *v17; // r15
  SpawnGroupHandle_t v18; // eax
  CGlobalVars *v19; // rbx
  CCheckClient *v20; // rax
  float v21; // xmm0_4
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rax
  CBaseEntity *result; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v26; // rax
  unsigned int v27; // [rsp-5Ch] [rbp-64h]
  void (__fastcall *v28)(IPVSManager *, _QWORD, _QWORD, vis_info_t *); // [rsp-58h] [rbp-60h]
  _QWORD v29[2]; // [rsp-50h] [rbp-58h] BYREF
  double v30; // [rsp-40h] [rbp-48h]
  int v31; // [rsp-38h] [rbp-40h]

  m_flCurrentTime = 0.0;
  v1 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v1->m_flCurrentTime;
  }
  v2 = g_pCheckClient;
  m_lastcheck = g_pCheckClient->m_lastcheck;
  v4 = m_flCurrentTime - g_pCheckClient->m_lastchecktime;
  if ( m_lastcheck == -1 )
  {
    m_lastcheck = 1;
  }
  else
  {
    if ( v4 < 0.1 && v4 >= 0.0 )
      goto LABEL_31;
    if ( m_lastcheck <= 0 )
      m_lastcheck = 1;
  }
  maxClients = gpGlobals->maxClients;
  if ( m_lastcheck > maxClients )
    m_lastcheck = gpGlobals->maxClients;
  if ( maxClients <= 0 )
  {
LABEL_38:
    v7 = -1;
  }
  else
  {
    v6 = m_lastcheck + 1;
    while ( 1 )
    {
      v7 = v6 % maxClients + 1;
      if ( v7 <= 0x7FFE )
      {
        v8 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && (v9->m_EHandle.m_Index & 0x7FFF) == v7 && v9->m_pInstance != 0 )
            break;
        }
      }
      if ( ++v6 == m_lastcheck + maxClients + 1 )
        goto LABEL_38;
    }
  }
  if ( m_lastcheck != v7 )
    memset(g_pCheckClient->m_checkVisibilityPVS, 0, sizeof(g_pCheckClient->m_checkVisibilityPVS));
  if ( v7 == -1 )
    goto LABEL_26;
  v10 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
  if ( v10 != 0 && (v11 = &v10[v7 & 0x1FF]) != 0 && (v11->m_EHandle.m_Index & 0x7FFF) == v7 )
    m_pInstance = v11->m_pInstance;
  else
    m_pInstance = 0;
  v30 = (*(m_pInstance->_vptr_IHandleEntity + 164))(m_pInstance);
  LODWORD(v29[1]) = v13;
  v31 = v13;
  *v29 = v30;
  v14 = *(g_pPVSManager->_vptr_IPVSManager + 4);
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v16 = v14(g_pPVSManager, ActiveSpawnGroupHandle, v29);
  v17 = g_pCheckClient;
  if ( v16 != g_pCheckClient->m_checkCluster )
  {
    g_pCheckClient->m_checkCluster = v16;
    v27 = v16;
    v28 = *(g_pPVSManager->_vptr_IPVSManager + 5);
    v18 = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v28(g_pPVSManager, v18, v27, &v17->m_checkPVSInfo);
LABEL_26:
    v17 = g_pCheckClient;
  }
  v2->m_lastcheck = v7;
  v19 = gpGlobals;
  v20 = v17;
  v21 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v26 = gpGlobals->m_pfnWarningFunc;
      if ( v26 != 0 )
      {
        (v26)(1, 0.0);
        v20 = g_pCheckClient;
      }
      else
      {
        v20 = v17;
      }
    }
    v21 = v19->m_flCurrentTime;
  }
  v17->m_lastchecktime = v21;
  m_lastcheck = v20->m_lastcheck;
  if ( m_lastcheck == -1 )
    return 0;
LABEL_31:
  if ( m_lastcheck > 0x7FFE )
    return 0;
  v22 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[m_lastcheck >> 9];
  if ( v22 == 0 )
    return 0;
  v23 = &v22[m_lastcheck & 0x1FF];
  if ( v23 == 0 )
    return 0;
  if ( (v23->m_EHandle.m_Index & 0x7FFF) != m_lastcheck )
    return 0;
  result = v23->m_pInstance;
  if ( result == 0 )
    return 0;
  return result;
}


// UTIL_MaybeCacheClientPVS  (line 1831, @0x0000000002403ef0, libserver.so)
// calls: UTIL_GetCurrentCheckClient
// callers: CSource2GameClients::ClientSetupVisibility
// globals: g_pCheckClient
void __fastcall UTIL_MaybeCacheClientPVS(CBaseEntity *pClient, vis_info_t *pPVS)
{
  const uint32 *m_pVisBits; // rcx
  const uint32 *v4; // rdi
  const uint32 *v5; // r8
  signed int v6; // esi
  __int64 v7; // rax

  if ( UTIL_GetCurrentCheckClient() == pClient )
  {
    m_pVisBits = pPVS->m_pVisBits;
    v4 = g_pCheckClient->m_checkPVSInfo.m_pVisBits;
    v5 = g_pCheckClient->m_checkVisibilityPVSInfo.m_pVisBits;
    v6 = pPVS->m_uVisBitsBufSize >> 2;
    if ( v6 != 0 )
    {
      v7 = 0;
      do
      {
        v5[v7] = m_pVisBits[v7] & ~v4[v7];
        ++v7;
      }
      while ( v6 > v7 );
    }
  }
}


// UTIL_FindClientInPVS  (line 1861, @0x0000000002403f60, libserver.so)
// calls: UTIL_GetCurrentCheckClient, CEntitySystem::GetActiveSpawnGroupHandle
// callers: CTriggerHurt::RadiationThink
// globals: g_pCheckClient
CBaseEntity *__fastcall UTIL_FindClientInPVS(const Vector *const vecBoxMins, const Vector *const vecBoxMaxs)
{
  CBaseEntity *v4; // r12
  unsigned __int8 (__fastcall *v5)(IPVSManager *, _QWORD, const Vector *const, const Vector *const, vis_info_t *); // r15
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  vis_info_t *p_m_checkPVSInfo; // [rsp+8h] [rbp-38h]

  v4 = UTIL_GetCurrentCheckClient();
  if ( v4 != 0
    && (v5 = *(g_pPVSManager->_vptr_IPVSManager + 7),
        p_m_checkPVSInfo = &g_pCheckClient->m_checkPVSInfo,
        ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem),
        v5(g_pPVSManager, ActiveSpawnGroupHandle, vecBoxMins, vecBoxMaxs, p_m_checkPVSInfo) != 0) )
  {
    return v4;
  }
  else
  {
    return 0;
  }
}


// UTIL_FindClientInPVSGuts  (line 1887, @0x0000000002404000, libserver.so)  // inlines: GetBool, GetInt, operator=
// calls: UTIL_GetCurrentCheckClient, CEntitySystem::GetActiveSpawnGroupHandle
// callers: CGameRules::DoFindClientInPVS
CBaseEntity *__fastcall UTIL_FindClientInPVSGuts(CBaseEntity *pe, const vis_info_t *checkpvs)
{
  CBaseEntity *v4; // rax
  CBaseEntity *v5; // rbx
  vec_t v6; // xmm1_4
  unsigned __int8 (__fastcall *v7)(IPVSManager *, _QWORD, Vector *, const vis_info_t *); // r14
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  Vector view; // [rsp+0h] [rbp-40h] BYREF
  Vector v11; // [rsp+10h] [rbp-30h]

  v4 = UTIL_GetCurrentCheckClient();
  v5 = v4;
  if ( v4 == 0 || (v4->m_fFlags.m_Value & 0x8000) != 0 && sv_strict_notarget.m_pParent->m_Value.m_nValue != 0 )
    return 0;
  if ( pe != 0
    && (*&v11.x = (*(pe->_vptr_IHandleEntity + 164))(pe),
        view = v11,
        v11.z = v6,
        v7 = *(g_pPVSManager->_vptr_IPVSManager + 6),
        ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem),
        v7(g_pPVSManager, ActiveSpawnGroupHandle, &view, checkpvs) == 0) )
  {
    return 0;
  }
  else
  {
    return v5;
  }
}


// UTIL_FindClientInPVS  (line 1923, @0x00000000024040e0, libserver.so)
// callers: CGameEntitySystem::FindEntityProcedural, CGib::SpawnHeadGib, CGameWeaponManager::Think, ShouldRemoveThisRagdoll
// globals: g_pCheckClient
CBaseEntity *__fastcall UTIL_FindClientInPVS(CBaseEntity *pEdict)
{
  return (*(g_pGameRules->_vptr_CGameRules + 142))(g_pGameRules, pEdict, &g_pCheckClient->m_checkPVSInfo);
}


// UTIL_FindClientInVisibilityPVS  (line 1931, @0x0000000002404110, libserver.so)
// globals: g_pCheckClient
CBaseEntity *__fastcall UTIL_FindClientInVisibilityPVS(CBaseEntity *pEdict)
{
  return (*(g_pGameRules->_vptr_CGameRules + 142))(g_pGameRules, pEdict, &g_pCheckClient->m_checkVisibilityPVSInfo);
}


// UTIL_EntitiesInPVS  (line 1946, @0x0000000002404140, libserver.so)  // inlines: Init, Vector, WorldSpaceSurroundingBounds, operator=, vis_info_t
// calls: CGameEntitySystem::NextEnt, CEntitySystem::GetActiveSpawnGroupHandle, CBaseEntity::GetAbsOrigin, __cxa_guard_acquire, __cxa_guard_release
// callers: CChangeLevel::BuildEntityTransitionList
// globals: `guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo, `guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg, UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo, UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg, UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvs
CBaseEntity *__fastcall UTIL_EntitiesInPVS(CBaseEntity *pPVSEntity, CBaseEntity *pStartingEntity)
{
  CBaseEntity *Ent; // rbx
  unsigned __int8 (__fastcall *v5)(IPVSManager *, _QWORD, Vector *, Vector *, vis_info_t *); // r15
  SpawnGroupHandle_t v6; // eax
  const CBaseEntity *v7; // rax
  CCollisionProperty *m_pCollision; // rdi
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t v13; // xmm1_4
  __int64 (__fastcall *v14)(IPVSManager *, _QWORD, Vector *); // r13
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  void (__fastcall *v16)(IPVSManager *, _QWORD, _QWORD, vis_info_t *); // r14
  SpawnGroupHandle_t v17; // eax
  Vector org; // [rsp+10h] [rbp-60h] BYREF
  Vector vecSurroundMins; // [rsp+20h] [rbp-50h] BYREF
  Vector vecSurroundMaxs; // [rsp+30h] [rbp-40h] BYREF

  if ( `guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo) != 0 )
  {
    UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo.m_uVisBitsBufSize = 1024;
    UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo.m_pVisBits = UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvs;
    UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo.m_flVisibleRadius = 0.0;
    UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo.m_SpawnGroupHandle = 0;
    __cxa_guard_release(&`guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo);
  }
  if ( `guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg) != 0 )
  {
    UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg.x = 0.0;
    UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg.y = 0.0;
    UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg.z = 0.0;
    __cxa_guard_release(&`guard variable for'UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::lastOrg);
  }
  if ( pPVSEntity == 0 )
    return 0;
  if ( pStartingEntity == 0 )
  {
    *&vecSurroundMaxs.x = (*(pPVSEntity->_vptr_IHandleEntity + 164))(pPVSEntity);
    vecSurroundMaxs.z = v13;
    org = vecSurroundMaxs;
    v14 = *(g_pPVSManager->_vptr_IPVSManager + 4);
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    LODWORD(v14) = v14(g_pPVSManager, ActiveSpawnGroupHandle, &org);
    v16 = *(g_pPVSManager->_vptr_IPVSManager + 5);
    v17 = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v16(g_pPVSManager, v17, v14, &UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo);
  }
  Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, pStartingEntity);
  if ( Ent == 0 )
    return 0;
  while ( 1 )
  {
    v7 = (*(Ent->_vptr_IHandleEntity + 68))(Ent);
    m_pCollision = v7->m_pCollision;
    if ( m_pCollision != 0 )
    {
      (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &vecSurroundMins, &vecSurroundMaxs);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      y = AbsOrigin->y;
      z = AbsOrigin->z;
      vecSurroundMins.x = AbsOrigin->x;
      vecSurroundMins.y = y;
      vecSurroundMins.z = z;
      vecSurroundMaxs = vecSurroundMins;
    }
    v5 = *(g_pPVSManager->_vptr_IPVSManager + 7);
    v6 = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    if ( v5(
           g_pPVSManager,
           v6,
           &vecSurroundMins,
           &vecSurroundMaxs,
           &UTIL_EntitiesInPVS(CBaseEntity *,CBaseEntity *)::pvsinfo) != 0 )
      break;
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, Ent);
    if ( Ent == 0 )
      return 0;
  }
  return Ent;
}


// UTIL_PredictedPosition  (line 1994, @0x00000000024043d0, libserver.so)  // inlines: ToBasePlayer, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: __dynamic_cast, CBaseAnimating::GetGroundSpeedVelocity, CBaseEntity::GetAbsOrigin
void __fastcall UTIL_PredictedPosition(
        CBaseEntity *pTarget,
        double a2,
        float flTimeDelta,
        Vector *vecPredictedPosition)
{
  __int64 v6; // r13
  const CBaseAnimating *v7; // rax
  float x; // xmm2_4
  float y; // xmm0_4
  const Vector *AbsOrigin; // rax
  vec_t v11; // xmm1_4
  vec_t v12; // xmm2_4
  int (**vptr_IHandleEntity)(...); // rax
  CBaseEntity *v14; // rdi
  __int64 v15; // rax
  float z; // xmm1_4
  float v17; // [rsp+4h] [rbp-3Ch]
  float v18; // [rsp+8h] [rbp-38h]
  float flTimeDeltaa; // [rsp+Ch] [rbp-34h]
  float flTimeDeltab; // [rsp+Ch] [rbp-34h]
  double v21; // [rsp+10h] [rbp-30h]
  double v22; // [rsp+10h] [rbp-30h]
  Vector GroundSpeedVelocity; // 0:kr00_12.12

  flTimeDeltaa = *&a2;
  if ( pTarget != 0 && vecPredictedPosition != 0 )
  {
    if ( (*(pTarget->_vptr_IHandleEntity + 140))(pTarget, a2, flTimeDelta) != 0 )
    {
      if ( (*(pTarget->_vptr_IHandleEntity + 346))(pTarget) == 0 )
        goto LABEL_13;
      vptr_IHandleEntity = pTarget->_vptr_IHandleEntity;
      v14 = pTarget;
    }
    else
    {
      v6 = (*(pTarget->_vptr_IHandleEntity + 147))(pTarget);
      if ( v6 == 0 || (*(*v6 + 2768LL))(v6) == 0 )
      {
        v7 = __dynamic_cast(pTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
        if ( v7 != 0 )
        {
          GroundSpeedVelocity = CBaseAnimating::GetGroundSpeedVelocity(v7);
          z = GroundSpeedVelocity.z;
          x = GroundSpeedVelocity.x;
          y = GroundSpeedVelocity.y;
LABEL_9:
          v17 = x * flTimeDeltaa;
          v18 = y * flTimeDeltaa;
          flTimeDeltab = z * flTimeDeltaa;
          AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
          v11 = flTimeDeltab + AbsOrigin->z;
          v12 = v17 + AbsOrigin->x;
          vecPredictedPosition->y = v18 + AbsOrigin->y;
          vecPredictedPosition->z = v11;
          vecPredictedPosition->x = v12;
          return;
        }
LABEL_13:
        v22 = (*(pTarget->_vptr_IHandleEntity + 172))(pTarget);
        x = *&v22;
        y = *(&v22 + 1);
        goto LABEL_9;
      }
      vptr_IHandleEntity = *v6;
      v14 = v6;
    }
    v15 = (vptr_IHandleEntity[349])(v14);
    v21 = (*(*v15 + 1376LL))(v15);
    x = *&v21;
    y = *(&v21 + 1);
    goto LABEL_9;
  }
}


// UTIL_PointAtEntity  (line 2054, @0x0000000002404570, libserver.so)  // inlines: VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, VectorAngles, CBaseEntity::SetLocalAngles, CBaseEntity::SetAbsAngles
// callers: UTIL_PointAtNamedEntity
bool __fastcall UTIL_PointAtEntity(CBaseEntity *pDest, CBaseEntity *pTarget)
{
  const Vector *AbsOrigin; // r13
  const Vector *v6; // rax
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  Vector dir; // [rsp+0h] [rbp-40h] BYREF
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF

  if ( pDest == 0 || pTarget == 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pDest);
  v6 = CBaseEntity::GetAbsOrigin(pTarget);
  v7 = v6->y - AbsOrigin->y;
  v8 = v6->z - AbsOrigin->z;
  dir.x = v6->x - AbsOrigin->x;
  dir.y = v7;
  dir.z = v8;
  VectorNormalize(&dir);
  VectorAngles(&dir, &angles);
  CBaseEntity::SetLocalAngles(pDest, &angles);
  CBaseEntity::SetAbsAngles(pDest, &angles);
  return 1;
}


// UTIL_PointAtNamedEntity  (line 2078, @0x0000000002404620, libserver.so)  // inlines: CUtlSymbolLarge, GetClassNameAsCStr, GetClassname, GetDebugName, String, ToCStr
// calls: CGameEntitySystem::FindEntityByName, UTIL_PointAtEntity, CEntityIdentity::GetDebugName, DevMsg
// callers: CPhysImpact::PointAtEntity, CPhysImpact::InputImpact
// strings: "%s (%s) was unable to point at an entity named: %s\n"
void __fastcall UTIL_PointAtNamedEntity(CBaseEntity *pDest, string_t strTarget)
{
  CBaseEntity *EntityByName; // rax
  const char *v5; // r13
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rsi
  const char *m_pAsString; // rdx
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  iszName.u.m_Id = *strTarget.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, pDest, 0, 0, 0);
  if ( !UTIL_PointAtEntity(pDest, EntityByName) )
  {
    v5 = "";
    if ( *strTarget.u.m_Id != 0 )
      v5 = *strTarget.u.m_pAsString;
    DebugName = CEntityIdentity::GetDebugName(pDest->m_pEntity);
    m_pEntity = pDest->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    DevMsg(1, "%s (%s) was unable to point at an entity named: %s\n", m_pAsString, DebugName, v5);
  }
}


// UTIL_TransferPoseParameters  (line 2092, @0x00000000024046e0, libserver.so)
// calls: __dynamic_cast, CBaseAnimating::GetPoseParameter, CBaseAnimating::SetPoseParameter
// callers: CPhysConvert::InputConvertTarget
bool __fastcall UTIL_TransferPoseParameters(CBaseEntity *pSourceEntity, CBaseEntity *pDestEntity)
{
  const CBaseAnimating *v3; // r13
  CBaseAnimating *v4; // r12
  int i; // ebx
  double v6; // xmm0_8
  float v7; // xmm1_4

  if ( pSourceEntity != 0 )
    v3 = __dynamic_cast(pSourceEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
  else
    v3 = 0;
  if ( pDestEntity == 0 )
    return 0;
  v4 = __dynamic_cast(pDestEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
  if ( v4 == 0 || v3 == 0 )
    return 0;
  for ( i = 0; i != 24; ++i )
  {
    *&v6 = CBaseAnimating::GetPoseParameter(v3, i);
    CBaseAnimating::SetPoseParameter(v4, i, v6, v7);
  }
  return 1;
}


// UTIL_MuzzleFlash  (line 2115, @0x0000000002404790, libserver.so)  // inlines: CPASFilter, ~CPASFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall UTIL_MuzzleFlash(const Vector *const origin, const QAngle *const angles, int scale, int type)
{
  CPASFilter filter; // [rsp+0h] [rbp-170h] BYREF
  unsigned __int64 v9; // [rsp+138h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, origin);
  (*(te->_vptr_IPredictionSystem + 25))(te, &filter, origin, angles, type, 0.0, scale);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// UTIL_PointOnLineNearestPoint  (line 2131, @0x0000000002404880, libserver.so)  // inlines: DotProduct, FastSqrt, Length, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: VectorNormalize
// callers: CBasePlayer::GetAutoaimScore
Vector __fastcall UTIL_PointOnLineNearestPoint(
        const Vector *const vStartPos,
        const Vector *const vEndPos,
        const Vector *const vPoint,
        bool clampEnds)
{
  float y; // xmm3_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  vec_t v9; // xmm1_4
  float z; // xmm6_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v20; // xmm2_4
  float fIntersectDist; // [rsp+Ch] [rbp-44h]
  Vector vEndToStart; // [rsp+20h] [rbp-30h] BYREF
  float v24[8]; // [rsp+30h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  y = vStartPos->y;
  v7 = vPoint->x - vStartPos->x;
  v8 = vPoint->y;
  v9 = vEndPos->y - y;
  z = vStartPos->z;
  vEndToStart.x = vEndPos->x - vStartPos->x;
  v11 = v8 - y;
  v12 = vEndPos->z;
  v13 = vPoint->z;
  vEndToStart.y = v9;
  v14 = v13 - z;
  vEndToStart.z = v12 - z;
  v15 = fsqrt(((v7 * v7) + (v11 * v11)) + (v14 * v14));
  fIntersectDist = ((((vEndToStart.x * v7) + (v9 * v11)) + (vEndToStart.z * v14))
                  / (fsqrt(((vEndToStart.x * vEndToStart.x) + (v9 * v9)) + (vEndToStart.z * vEndToStart.z)) * v15))
                 * v15;
  v16 = VectorNormalize(&vEndToStart);
  v17 = fIntersectDist;
  if ( clampEnds )
  {
    if ( fIntersectDist <= v16 )
      v16 = fmaxf(0.0, fIntersectDist);
    v17 = v16;
  }
  v18 = vEndToStart.y * v17;
  result.z = (vEndToStart.z * v17) + vStartPos->z;
  v20 = (v17 * vEndToStart.x) + vStartPos->x;
  v24[1] = v18 + vStartPos->y;
  v24[0] = v20;
  *&result.x = *v24;
  return result;
}


// WorldToLocalRotation  (line 2152, @0x00000000024049d0, libserver.so)  // inlines: VMul3x3Transpose, VectorMultiply, operator*
__m128i __fastcall WorldToLocalRotation(
        const VMatrix *const localToWorld,
        const Vector *const worldAxis,
        float a3,
        float rotation)
{
  __m128i v5; // [rsp+0h] [rbp-10h] BYREF

  v5.m128i_i64[0] = __PAIR64__(
                      ((localToWorld->m[0][1] * (worldAxis->x * a3)) + (localToWorld->m[1][1] * (worldAxis->y * a3)))
                    + (localToWorld->m[2][1] * (a3 * worldAxis->z)),
                      (((worldAxis->x * a3) * localToWorld->m[0][0]) + ((worldAxis->y * a3) * localToWorld->m[1][0]))
                    + ((a3 * worldAxis->z) * localToWorld->m[2][0]));
  return _mm_loadl_epi64(&v5);
}


// UTIL_LoadFileForMe  (line 2168, @0x0000000002404a60, libserver.so)
// callers: CEnvEffectsScript::ParseScriptFile, CMultiplayRules::GetNextLevelName, CPhysicsHook::FindOrAddVehicleScript
uint8 *__fastcall UTIL_LoadFileForMe(const char *filename, int *pLength)
{
  int v3; // eax
  void *buffer; // [rsp+28h] [rbp-18h] BYREF

  buffer = 0;
  v3 = (*(filesystem->_vptr_IAppSystem + 80))(filesystem, filename, "GAME", &buffer, 1, 1, 0, 0, 0);
  if ( pLength != 0 )
    *pLength = v3;
  return buffer;
}


// UTIL_FreeFile  (line 2186, @0x0000000002404ad0, libserver.so)
// callers: CEnvEffectsScript::ParseScriptFile, CMultiplayRules::GetNextLevelName, CPhysicsHook::FindOrAddVehicleScript
void __fastcall UTIL_FreeFile(uint8 *buffer)
{
  (*(filesystem->_vptr_IAppSystem + 93))(filesystem, buffer);
}


// UTIL_IsFacingWithinTolerance  (line 2199, @0x0000000002404af0, libserver.so)  // inlines: Dot, DotProduct, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize
// callers: UTIL_IsFacingWithinTolerance
bool __fastcall UTIL_IsFacingWithinTolerance(
        CBaseEntity *pViewer,
        const Vector *const vecPosition,
        double flDotTolerance,
        float *pflDot,
        double a5,
        double a6,
        double a7)
{
  bool result; // al
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm3_4
  vec_t v13; // xmm1_4
  float v14; // xmm1_4
  float flDotTolerancea; // [rsp+Ch] [rbp-44h]
  Vector forward; // [rsp+10h] [rbp-40h] BYREF
  Vector dir; // [rsp+20h] [rbp-30h] BYREF

  if ( pflDot != 0 )
    *pflDot = 0.0;
  result = 0;
  flDotTolerancea = *&flDotTolerance;
  if ( pViewer != 0 )
  {
    (*(pViewer->_vptr_IHandleEntity + 61))(pViewer, &forward, 0, 0, flDotTolerance, a5, a6, a7, flDotTolerance);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pViewer);
    v12 = vecPosition->x - AbsOrigin->x;
    v13 = vecPosition->z - AbsOrigin->z;
    dir.y = vecPosition->y - AbsOrigin->y;
    dir.x = v12;
    dir.z = v13;
    VectorNormalize(&dir);
    v14 = ((dir.x * forward.x) + (dir.y * forward.y)) + (dir.z * forward.z);
    if ( pflDot != 0 )
      *pflDot = v14;
    return v14 >= flDotTolerancea;
  }
  return result;
}


// UTIL_IsFacingWithinTolerance  (line 2240, @0x0000000002404bc0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, UTIL_IsFacingWithinTolerance
bool __fastcall UTIL_IsFacingWithinTolerance(
        CBaseEntity *pViewer,
        CBaseEntity *pTarget,
        float flDotTolerance,
        float *pflDot)
{
  const Vector *AbsOrigin; // rax
  double v7; // xmm1_8
  double v8; // xmm2_8
  double v9; // xmm3_8

  if ( pViewer == 0 || pTarget == 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  return UTIL_IsFacingWithinTolerance(pViewer, AbsOrigin, COERCE_DOUBLE(LODWORD(flDotTolerance)), pflDot, v7, v8, v9);
}


// UTIL_GetDebugColorForRelationship  (line 2253, @0x0000000002404c10, libserver.so)
void __fastcall UTIL_GetDebugColorForRelationship(int nRelationship, int *const r, int *const g, int *const b)
{
  if ( nRelationship == 2 )
  {
    *r = 255;
    *g = 255;
    *b = 0;
  }
  else
  {
    if ( nRelationship <= 2 )
    {
      if ( nRelationship == 1 )
      {
        *r = 255;
        *g = 0;
        *b = 0;
        return;
      }
    }
    else
    {
      if ( nRelationship == 3 )
      {
        *r = 0;
        *g = 255;
        *b = 0;
        return;
      }
      if ( nRelationship == 4 )
      {
        *r = 0;
        *g = 0;
        *b = 255;
        return;
      }
    }
    *r = 255;
    *g = 255;
    *b = 255;
  }
}


// UTIL_LoadAndSpawnEntitiesFromScript  (line 2289, @0x000000000240bbf0, libserver.so)  // inlines: AddToTail, CopyConstruct<CBaseEntity*>, Element, GrowMemory, operator[]
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstSubKey, KeyValues::GetName, V_stricmp_fast, KeyValues::FindKey, KeyValues::GetString, CreateEntityByName, ConvertOldKeyValuesToNew, CEntitySystem::QueueSpawnEntity, KeyValues::GetNextKey (17 total)
// strings: "UTIL_LoadAndSpawnEntitiesFromScript: Failed to spawn entity, type: '%s'\n"
bool __fastcall UTIL_LoadAndSpawnEntitiesFromScript(
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *const entities,
        const char *pScriptFile,
        const char *pBlock)
{
  KeyValues *v6; // rbx
  IBaseFileSystem *v7; // rsi
  bool v8; // r14
  KeyValues *i; // rbx
  const char *Name; // r12
  KeyValues *Key; // rax
  CBaseEntity *EntityByName; // r15
  CEntityKeyValues *v14; // rdx
  __int64 m_Size; // r12
  int v16; // eax
  CBaseEntity **v17; // rax

  v6 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v6, pBlock);
  v7 = 0;
  if ( filesystem != 0 )
    v7 = &filesystem->IBaseFileSystem;
  v8 = KeyValues::LoadFromFile(v6, v7, pScriptFile, "GAME", 0);
  if ( v8 )
  {
    for ( i = KeyValues::GetFirstSubKey(v6); i != 0; i = KeyValues::GetNextKey(i) )
    {
      Name = KeyValues::GetName(i);
      if ( V_stricmp_fast(Name, "entity") == 0 )
      {
        Key = KeyValues::FindKey(i, "classname", 0);
        if ( Key != 0 )
          Name = KeyValues::GetString(Key, 0, "", 0, 0);
        EntityByName = CreateEntityByName(Name, -1);
        if ( EntityByName != 0 )
        {
          v14 = ConvertOldKeyValuesToNew(i);
          CEntitySystem::QueueSpawnEntity(g_pEntitySystem, EntityByName->m_pEntity, v14);
          m_Size = entities->m_Size;
          v16 = entities->m_Size;
          if ( m_Size == entities->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CBaseEntity *,int>::Grow(&entities->m_Memory, 1);
            v16 = entities->m_Size;
          }
          entities->m_Size = v16 + 1;
          v17 = &entities->m_Memory.m_pMemory[m_Size];
          if ( v17 != 0 )
            *v17 = EntityByName;
        }
        else
        {
          Warning("UTIL_LoadAndSpawnEntitiesFromScript: Failed to spawn entity, type: '%s'\n", Name);
        }
      }
    }
    CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
  }
  return v8;
}


// UTIL_ParentToWorldSpace  (line 2349, @0x00000000023f9920, libserver.so)  // inlines: GetParent, MatrixGetColumn, MatrixSetColumn, SetColumn, memcpy, operator=
// calls: AngleMatrix, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetParentToWorldTransform, ConcatTransforms, MatrixAngles, CBaseEntity::EntityToWorldTransform
// callers: CBaseServerVehicle::HandleEntryExitFinish, CBaseServerVehicle::GetExitAnimToUse, UTIL_ParentToWorldSpace, CBaseServerVehicle::GetPassengerSeatPoint, CBaseServerVehicle::CacheEntryExitPoints
void __fastcall UTIL_ParentToWorldSpace(CBaseEntity *pEntity, Vector *const vecPosition, QAngle *const vecAngles)
{
  CGameSceneNode *m_pGameSceneNode; // rax
  const CGameSceneNode *m_pParent; // rdi
  matrix3x4a_t *ParentToWorldTransform; // rax
  matrix3x4a_t matEntityToParent; // [rsp+0h] [rbp-E0h] BYREF
  matrix3x4a_t matScratch; // [rsp+30h] [rbp-B0h] BYREF
  matrix3x4a_t matResult; // [rsp+60h] [rbp-80h] BYREF
  matrix3x4a_t matParentToWorld; // [rsp+90h] [rbp-50h] BYREF

  AngleMatrix(vecAngles, &matEntityToParent);
  m_pGameSceneNode = pEntity->m_pGameSceneNode;
  matEntityToParent.m_flMatVal[0][3] = vecPosition->x;
  matEntityToParent.m_flMatVal[1][3] = vecPosition->y;
  matEntityToParent.m_flMatVal[2][3] = vecPosition->z;
  m_pParent = m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0 )
    ParentToWorldTransform = CBaseEntity::GetParentToWorldTransform(pEntity, &matScratch);
  else
    ParentToWorldTransform = CBaseEntity::EntityToWorldTransform(pEntity);
  matParentToWorld = *ParentToWorldTransform;
  ConcatTransforms(&matParentToWorld, &matEntityToParent, &matResult);
  vecPosition->x = matResult.m_flMatVal[0][3];
  vecPosition->y = matResult.m_flMatVal[1][3];
  vecPosition->z = matResult.m_flMatVal[2][3];
  MatrixAngles(&matResult, vecAngles);
}


// UTIL_ParentToWorldSpace  (line 2349, @0x0000000002404cb0, libserver.so)
// calls: UTIL_ParentToWorldSpace
void __fastcall UTIL_ParentToWorldSpace(CBaseEntity *pEntity, Vector *const vecPosition, QAngle *const vecAngles)
{
  if ( pEntity != 0 )
    UTIL_ParentToWorldSpace(pEntity, vecPosition, vecAngles);
}


// UTIL_ParentToWorldSpace  (line 2384, @0x0000000002404cd0, libserver.so)  // inlines: UTIL_ParentToWorldSpace
// calls: QuaternionAngles, UTIL_ParentToWorldSpace, AngleQuaternion
// callers: CBaseEntity::TransformStepData_ParentToWorld, CBaseEntity::TransformStepData_ParentToParent
void __fastcall UTIL_ParentToWorldSpace(CBaseEntity *pEntity, Vector *const vecPosition, Quaternion *const quat)
{
  QAngle vecAngles; // [rsp+0h] [rbp-30h] BYREF

  if ( pEntity != 0 )
  {
    QuaternionAngles(quat, &vecAngles);
    UTIL_ParentToWorldSpace(pEntity, vecPosition, &vecAngles);
    AngleQuaternion(&vecAngles, quat);
  }
}


// UTIL_WorldToParentSpace  (line 2399, @0x0000000002404d30, libserver.so)  // inlines: GetParent, MatrixGetColumn, MatrixSetColumn, SetColumn, memcpy, operator=
// calls: AngleMatrix, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetParentToWorldTransform, MatrixInvert, ConcatTransforms, MatrixAngles, CBaseEntity::EntityToWorldTransform
// callers: UTIL_WorldToParentSpace
void __fastcall UTIL_WorldToParentSpace(CBaseEntity *pEntity, Vector *const vecPosition, QAngle *const vecAngles)
{
  CGameSceneNode *m_pGameSceneNode; // rax
  const CGameSceneNode *m_pParent; // rdi
  matrix3x4a_t matEntityToParent; // [rsp+10h] [rbp-F0h] BYREF
  matrix3x4a_t matScratch; // [rsp+40h] [rbp-C0h] BYREF
  matrix3x4a_t matResult; // [rsp+70h] [rbp-90h] BYREF
  matrix3x4a_t matWorldToParent; // [rsp+A0h] [rbp-60h] BYREF

  if ( pEntity != 0 )
  {
    AngleMatrix(vecAngles, &matEntityToParent);
    m_pGameSceneNode = pEntity->m_pGameSceneNode;
    matEntityToParent.m_flMatVal[0][3] = vecPosition->x;
    matEntityToParent.m_flMatVal[1][3] = vecPosition->y;
    matEntityToParent.m_flMatVal[2][3] = vecPosition->z;
    m_pParent = m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0 )
      matScratch = *CBaseEntity::GetParentToWorldTransform(pEntity, &matScratch);
    else
      matScratch = *CBaseEntity::EntityToWorldTransform(pEntity);
    MatrixInvert(&matScratch, &matWorldToParent);
    ConcatTransforms(&matWorldToParent, &matEntityToParent, &matResult);
    vecPosition->x = matResult.m_flMatVal[0][3];
    vecPosition->y = matResult.m_flMatVal[1][3];
    vecPosition->z = matResult.m_flMatVal[2][3];
    MatrixAngles(&matResult, vecAngles);
  }
}


// UTIL_WorldToParentSpace  (line 2435, @0x0000000002404ed0, libserver.so)
// calls: QuaternionAngles, UTIL_WorldToParentSpace, AngleQuaternion
// callers: CBaseEntity::TransformStepData_ParentToParent, CBaseEntity::TransformStepData_WorldToParent
void __fastcall UTIL_WorldToParentSpace(CBaseEntity *pEntity, Vector *const vecPosition, Quaternion *const quat)
{
  QAngle vecAngles; // [rsp+0h] [rbp-30h] BYREF

  if ( pEntity != 0 )
  {
    QuaternionAngles(quat, &vecAngles);
    UTIL_WorldToParentSpace(pEntity, vecPosition, &vecAngles);
    AngleQuaternion(&vecAngles, quat);
  }
}


// UTIL_BoundToWorldSize  (line 2450, @0x0000000002404f30, libserver.so)
void __fastcall UTIL_BoundToWorldSize(Vector *pVecPos)
{
  __int64 i; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4

  for ( i = 0; i != 12; i += 4 )
  {
    v2 = *(&pVecPos->x + i);
    v3 = 16384.0;
    if ( v2 <= 16384.0 )
      v3 = fmaxf(-16384.0, v2);
    *(&pVecPos->x + i) = v3;
  }
}


// UTIL_IsGroundLevel  (line 2464, @0x0000000002404f70, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, Vector, VectorAdd, VectorAligned, VectorSubtract, abs<float>, operator*=, operator+
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, NDebugOverlay::SweptBox
__int64 __fastcall UTIL_IsGroundLevel(
        float radius,
        const Vector *const position,
        float hullHeight,
        uint64 mask,
        const CBaseEntity *ignore,
        bool debugTraces)
{
  CGameTrace *v8; // r12
  uint64 *p_m_nInteractsExclude; // rbx
  CGameTrace_2 *v10; // rdi
  float v11; // xmm2_4
  int v12; // r12d
  trace_t *v13; // rbx
  float i; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float z; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm3_4
  int v23; // edi
  CGameTrace *j; // rsi
  __int64 result; // rax
  vec_t *p_z; // rcx
  int v27; // edx
  float v28; // xmm0_4
  float x; // [rsp+30h] [rbp-710h]
  CGameTrace *pTrace; // [rsp+48h] [rbp-6F8h]
  float y; // [rsp+50h] [rbp-6F0h]
  float size; // [rsp+70h] [rbp-6D0h]
  float v36; // [rsp+74h] [rbp-6CCh]
  float v37; // [rsp+78h] [rbp-6C8h]
  float radiusb; // [rsp+7Ch] [rbp-6C4h]
  Vector v40; // [rsp+80h] [rbp-6C0h] BYREF
  CTraceFilterSimple v41; // [rsp+90h] [rbp-6B0h] BYREF
  Ray_t v42; // [rsp+D0h] [rbp-670h] BYREF
  CGameTrace v43[9]; // [rsp+120h] [rbp-620h] BYREF
  _BYTE v44[56]; // [rsp+708h] [rbp-38h] BYREF

  v8 = v43;
  p_m_nInteractsExclude = &v43[0].m_ShapeAttributes.m_nInteractsExclude;
  do
  {
    *(p_m_nInteractsExclude - 2) = 0;
    v10 = v8;
    *(p_m_nInteractsExclude - 1) = 0;
    ++v8;
    p_m_nInteractsExclude += 21;
    *(p_m_nInteractsExclude - 21) = 0;
    *(p_m_nInteractsExclude - 154) = 0;
    *(p_m_nInteractsExclude - 153) = 7;
    *(p_m_nInteractsExclude - 40) = 0;
    *(p_m_nInteractsExclude - 78) = 0;
    CGameTrace::Init(v10);
  }
  while ( v8 != v44 );
  pTrace = v43;
  v11 = 0.0;
  x = -radius;
  size = (radius + radius) / 3.0;
  for ( y = -radius; ; y = size + y )
  {
    v12 = 3;
    v13 = pTrace;
    for ( i = x; ; i = v20 )
    {
      v36 = v11;
      v15 = position->y;
      v37 = i;
      v16 = position->x + v11;
      z = position->z;
      v42.m_Start.w = 0.0;
      v18 = v15 + v11;
      v42.m_Delta.w = 0.0;
      v42.m_StartOffset.w = 0.0;
      v42.m_Extents.w = 0.0;
      v42.m_flRadius = 0.0;
      v42.m_Extents.z = 5.0;
      radiusb = size + i;
      v42.m_Delta.x = v16 - v16;
      v42.m_Delta.y = v18 - v18;
      v42.m_Start.y = v18 + (0.5 * (y + (size + y)));
      v42.m_Delta.z = (z - 100.0) - (hullHeight + z);
      v42.m_Start.z = (hullHeight + z) + 5.0;
      v42.m_Extents.y = ((size + y) - y) * 0.5;
      v42.m_IsSwept = (((v42.m_Delta.x * v42.m_Delta.x) + (v42.m_Delta.y * v42.m_Delta.y))
                     + (v42.m_Delta.z * v42.m_Delta.z)) != v11;
      v42.m_Extents.x = ((size + i) - i) * 0.5;
      v42.m_IsRay = (((v42.m_Extents.x * v42.m_Extents.x) + (v42.m_Extents.y * v42.m_Extents.y)) + 25.0) < 0.000001;
      v19 = (i + (size + i)) * 0.5;
      v42.m_Start.x = v16 + v19;
      v42.m_StartOffset.x = -v19;
      v42.m_StartOffset.z = -5.0;
      v42.m_StartOffset.y = -(0.5 * (y + (size + y)));
      CTraceFilterSimple::CTraceFilterSimple(&v41, ignore, 11, 0);
      v41.m_attr.m_nInteractsWith |= mask;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v42, &v41, v13);
      v20 = radiusb;
      v11 = v36;
      if ( debugTraces )
      {
        v41._vptr_CTraceFilter = __PAIR64__(LODWORD(y), LODWORD(v37));
        v21 = position->y + v36;
        v40.z = hullHeight + position->z;
        v22 = v36 + position->x;
        v42.m_Start.x = radiusb;
        v42.m_Start.y = size + y;
        v42.m_Start.z = 10.0;
        LODWORD(v41.m_attr.m_nInteractsWith) = 0;
        v40.x = v22;
        v40.y = v21;
        NDebugOverlay::SweptBox(&v40, &v13->endpos, &v41, &v42.m_Start, &vec3_angle, 255, 5.0, 255, 0, 255);
        v20 = radiusb;
        v11 = v36;
      }
      ++v13;
      if ( --v12 == 0 )
        break;
    }
    pTrace += 3;
    if ( v44 == pTrace )
      break;
  }
  v23 = 0;
  for ( j = v43; ; ++j )
  {
    result = j->startsolid;
    if ( result != 0 )
      return 0;
    if ( j->fraction < 1.0 )
      break;
LABEL_14:
    if ( ++v23 == 9 )
      return 1;
  }
  if ( j->plane.normal.z >= 0.89999998 )
  {
    p_z = &v43[0].endpos.z;
    v27 = 0;
    while ( 1 )
    {
      if ( v23 != v27 )
      {
        v28 = j->endpos.z - *p_z;
        if ( v11 > v28 )
          v28 = -v28;
        if ( v28 > 10.0 )
          break;
      }
      ++v27;
      p_z += 42;
      if ( v27 == 9 )
        goto LABEL_14;
    }
  }
  return result;
}


// IsPlayerIndex  (line 2548, @0x00000000024054f0, libserver.so)
// callers: CEntitySaveRestoreBlockHandler::Restore, CreateEntitiesInTransitionList, CEntitySaveRestoreBlockHandler::Save
bool __fastcall IsPlayerIndex(CEntityIndex index)
{
  return index.m_Data > 0 && gpGlobals->maxClients >= index.m_Data;
}


// CV_GlobalChange_Tracking  (line 2588, @0x000000000240bff0, libserver.so)
// calls: CGlobalConvarTrackerAndReverter::ConvarChanged
// globals: g_GlobalConvarTrackerList
void __fastcall CV_GlobalChange_Tracking(IConVar *var, const char *pOldString, float a3, float flOldValue)
{
  __int64 i; // rbx

  for ( i = 0; i < g_GlobalConvarTrackerList.m_Size; ++i )
    CGlobalConvarTrackerAndReverter::ConvarChanged(g_GlobalConvarTrackerList.m_Memory.m_pMemory[i], var, pOldString, a3);
}


// InstallGlobalConvarTracker  (line 2596, @0x000000000240bdb0, libserver.so)  // inlines: AddToTail, CGlobalConvarTrackerAndReverter, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CGlobalConvarTrackerAndReverter*>, Element, GrowMemory, operator[]
// calls: operator new, CUtlMemory<CGlobalConvarTrackerAndReverter*, int>::Grow
// callers: CDOTA_Tutorial::InitializeTutorial
// globals: g_GlobalConvarTrackerID, g_GlobalConvarTrackerList, CV_GlobalChange_Tracking(IConVar *,char const*,float)
int __cdecl InstallGlobalConvarTracker()
{
  int v0; // ebx
  CGlobalConvarTrackerAndReverter *v1; // rax
  __int64 m_Size; // rbx
  int v3; // edx
  int v4; // ecx
  CGlobalConvarTrackerAndReverter **v5; // rdx
  CGlobalConvarTrackerAndReverter *pNewTrackera; // [rsp+8h] [rbp-18h]
  CGlobalConvarTrackerAndReverter *pNewTracker; // [rsp+8h] [rbp-18h]

  v0 = g_GlobalConvarTrackerID++;
  v1 = operator new(0x20u);
  v1->m_ID = v0;
  m_Size = g_GlobalConvarTrackerList.m_Size;
  v1->m_ModifiedConvars.m_Size = 0;
  v1->m_ModifiedConvars.m_Memory.m_pMemory = 0;
  v1->m_ModifiedConvars.m_Memory.m_nAllocationCount = 0;
  v1->m_ModifiedConvars.m_Memory.m_nGrowSize = 0;
  v3 = m_Size;
  if ( m_Size == g_GlobalConvarTrackerList.m_Memory.m_nAllocationCount )
  {
    pNewTracker = v1;
    CUtlMemory<CGlobalConvarTrackerAndReverter *,int>::Grow(&g_GlobalConvarTrackerList.m_Memory, 1);
    v3 = g_GlobalConvarTrackerList.m_Size;
    v1 = pNewTracker;
  }
  v4 = v3 + 1;
  g_GlobalConvarTrackerList.m_Size = v3 + 1;
  v5 = &g_GlobalConvarTrackerList.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    *v5 = v1;
    v4 = g_GlobalConvarTrackerList.m_Size;
  }
  if ( v4 != 1 )
    return v1->m_ID;
  pNewTrackera = v1;
  (*(*g_pCVar + 176LL))(g_pCVar, CV_GlobalChange_Tracking);
  return pNewTrackera->m_ID;
}


// ShutdownGlobalConvarTracker  (line 2610, @0x0000000002405520, libserver.so)  // inlines: Element, Purge, Remove, RemoveAll, ShiftElementsLeft, V_memmove, memmove, operator[], ~CGlobalConvarTrackerAndReverter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, memmove, CUtlMemory<convartracker_modifiedconvars_t, int>::Purge
// callers: CDOTA_Tutorial::Shutdown
// globals: g_GlobalConvarTrackerList, CV_GlobalChange_Tracking(IConVar *,char const*,float)
void __fastcall ShutdownGlobalConvarTracker(int nID)
{
  __int64 v1; // rax
  int v2; // ebx
  CGlobalConvarTrackerAndReverter *v3; // r12
  bool v4; // zf
  int m_Size; // edx
  __int64 v6; // r13

  if ( g_GlobalConvarTrackerList.m_Size > 0 )
  {
    v1 = 1;
    v2 = 0;
    v3 = *g_GlobalConvarTrackerList.m_Memory.m_pMemory;
    if ( **g_GlobalConvarTrackerList.m_Memory.m_pMemory == nID )
    {
      v6 = 0;
      v2 = 0;
LABEL_9:
      v4 = (v3->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v3->m_ModifiedConvars.m_Size = 0;
      if ( v4 )
      {
        CUtlMemory<convartracker_modifiedconvars_t,int>::Purge(&v3->m_ModifiedConvars.m_Memory);
        if ( (v3->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<convartracker_modifiedconvars_t,int>::Purge(&v3->m_ModifiedConvars.m_Memory);
      }
      operator delete(v3);
      m_Size = g_GlobalConvarTrackerList.m_Size;
      if ( g_GlobalConvarTrackerList.m_Size - v2 - 1 > 0 )
      {
        memmove(
          g_GlobalConvarTrackerList.m_Memory.m_pMemory + v6,
          &g_GlobalConvarTrackerList.m_Memory.m_pMemory[v2 + 1],
          8LL * (g_GlobalConvarTrackerList.m_Size - v2 - 1));
        m_Size = g_GlobalConvarTrackerList.m_Size;
      }
      g_GlobalConvarTrackerList.m_Size = m_Size - 1;
      if ( m_Size == 1 )
        (*(*g_pCVar + 184LL))(g_pCVar, CV_GlobalChange_Tracking);
    }
    else
    {
      while ( ++v2 != g_GlobalConvarTrackerList.m_Size )
      {
        v3 = g_GlobalConvarTrackerList.m_Memory.m_pMemory[v1];
        if ( v3->m_ID == nID )
        {
          v6 = v1 * 8;
          goto LABEL_9;
        }
        ++v1;
      }
    }
  }
}


// SetGlobalConvarTrackerActive  (line 2628, @0x0000000002405650, libserver.so)  // inlines: SetTracking, operator[]
// callers: CDOTA_Tutorial::SetTutorialConvar, CDOTA_Tutorial::InitializeTutorial, CDOTA_Tutorial::BeginLastHitChallenge, CDOTA_Tutorial::ParseLessonKeys
// globals: g_GlobalConvarTrackerList
void __fastcall SetGlobalConvarTrackerActive(int nID, bool bActive)
{
  CGlobalConvarTrackerAndReverter *v2; // rdx
  CGlobalConvarTrackerAndReverter **v3; // rax

  if ( g_GlobalConvarTrackerList.m_Size > 0 )
  {
    v2 = *g_GlobalConvarTrackerList.m_Memory.m_pMemory;
    if ( **g_GlobalConvarTrackerList.m_Memory.m_pMemory == nID )
    {
LABEL_7:
      v2->m_bTracking = bActive;
    }
    else
    {
      v3 = g_GlobalConvarTrackerList.m_Memory.m_pMemory + 1;
      while ( v3 != &g_GlobalConvarTrackerList.m_Memory.m_pMemory[(g_GlobalConvarTrackerList.m_Size - 1) + 1] )
      {
        v2 = *v3++;
        if ( v2->m_ID == nID )
          goto LABEL_7;
      }
    }
  }
}


// RevertGlobalConvarTrackerConvars  (line 2640, @0x0000000002405750, libserver.so)
// calls: CGlobalConvarTrackerAndReverter::RevertConvars
// callers: TutorialCleanupPost, CDOTA_Tutorial::PreSpawnGroupUnload, CDOTA_Tutorial::PostTutorialCleanup
// globals: g_GlobalConvarTrackerList
void __fastcall RevertGlobalConvarTrackerConvars(int nID)
{
  CGlobalConvarTrackerAndReverter *v1; // rdx
  CGlobalConvarTrackerAndReverter **v2; // rax

  if ( g_GlobalConvarTrackerList.m_Size > 0 )
  {
    v1 = *g_GlobalConvarTrackerList.m_Memory.m_pMemory;
    if ( **g_GlobalConvarTrackerList.m_Memory.m_pMemory == nID )
    {
LABEL_7:
      CGlobalConvarTrackerAndReverter::RevertConvars(v1);
    }
    else
    {
      v2 = g_GlobalConvarTrackerList.m_Memory.m_pMemory + 1;
      while ( v2 != &g_GlobalConvarTrackerList.m_Memory.m_pMemory[(g_GlobalConvarTrackerList.m_Size - 1) + 1] )
      {
        v1 = *v2++;
        if ( v1->m_ID == nID )
          goto LABEL_7;
      }
    }
  }
}


// CGlobalConvarTrackerAndReverter::ConvarChanged  (line 2652, @0x000000000240be90, libserver.so)  // inlines: AddToTail, GetName, GetString, GrowMemory, V_strncmp<int>, V_strncpy<int>, operator[]
// calls: ConVarRef::ConVarRef, _V_strncmp, _V_strncpy, CUtlMemory<convartracker_modifiedconvars_t, int>::Grow
// callers: CV_GlobalChange_Tracking
void __fastcall CGlobalConvarTrackerAndReverter::ConvarChanged(
        CGlobalConvarTrackerAndReverter *const this,
        IConVar *pConVar,
        const char *pOldString,
        float flOldValue)
{
  __int64 m_Size; // r15
  __int64 v7; // rbx
  int v8; // r13d
  convartracker_modifiedconvars_t *v9; // r15
  const char *v10; // rax
  IConVar *m_pConVar; // rdi
  __int64 v12; // rax
  ConVarRef var; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_bTracking )
  {
    ConVarRef::ConVarRef(&var, pConVar);
    m_Size = this->m_ModifiedConvars.m_Size;
    if ( m_Size <= 0 )
    {
LABEL_7:
      if ( m_Size == this->m_ModifiedConvars.m_Memory.m_nAllocationCount )
        CUtlMemory<convartracker_modifiedconvars_t,int>::Grow(&this->m_ModifiedConvars.m_Memory, 1);
      m_pConVar = var.m_pConVar;
      ++this->m_ModifiedConvars.m_Size;
      v12 = (*(m_pConVar->_vptr_IConVar + 4))(m_pConVar);
      _V_strncpy(&this->m_ModifiedConvars.m_Memory.m_pMemory[m_Size], v12, 256);
      _V_strncpy(
        this->m_ModifiedConvars.m_Memory.m_pMemory[m_Size].pszCurrentValue,
        var.m_pConVarState->m_Value.m_pszString,
        256);
      _V_strncpy(this->m_ModifiedConvars.m_Memory.m_pMemory[m_Size].pszOrgValue, pOldString, 256);
    }
    else
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = &this->m_ModifiedConvars.m_Memory.m_pMemory[v7];
        v10 = (*(var.m_pConVar->_vptr_IConVar + 4))(var.m_pConVar);
        if ( _V_strncmp(v10, v9->pszConvar, 256) == 0 )
          break;
        m_Size = this->m_ModifiedConvars.m_Size;
        ++v8;
        ++v7;
        if ( m_Size <= v8 )
          goto LABEL_7;
      }
      _V_strncpy(
        this->m_ModifiedConvars.m_Memory.m_pMemory[v7].pszCurrentValue,
        var.m_pConVarState->m_Value.m_pszString,
        256);
    }
  }
}


// CGlobalConvarTrackerAndReverter::RevertConvars  (line 2685, @0x00000000024056a0, libserver.so)  // inlines: Purge, RemoveAll, operator[]
// calls: CUtlMemory<convartracker_modifiedconvars_t, int>::Purge
// callers: RevertGlobalConvarTrackerConvars
void __fastcall CGlobalConvarTrackerAndReverter::RevertConvars(CGlobalConvarTrackerAndReverter *const this)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // rax
  bool v5; // zf

  if ( this->m_ModifiedConvars.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = (*(*g_pCVar + 144LL))(g_pCVar, &this->m_ModifiedConvars.m_Memory.m_pMemory[v2]);
      if ( v4 != 0 )
        (*(*v4 + 128LL))(v4, this->m_ModifiedConvars.m_Memory.m_pMemory[v2].pszOrgValue);
      ++v3;
      ++v2;
    }
    while ( this->m_ModifiedConvars.m_Size > v3 );
  }
  v5 = (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ModifiedConvars.m_Size = 0;
  if ( v5 )
    CUtlMemory<convartracker_modifiedconvars_t,int>::Purge(&this->m_ModifiedConvars.m_Memory);
}


// UTIL_FindEntityByClassnameNearest  (line 2701, @0x00000000024057b0, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: CGameEntitySystem::FindEntityByClassnameWithin
// callers: CNavEntityInterface::FindLadderEntity
CBaseEntity *__fastcall UTIL_FindEntityByClassnameNearest(
        const char *szName,
        const Vector *const vSrc,
        float a3,
        float flRadius)
{
  CBaseEntity *EntityByClassnameWithin; // r15
  CBaseEntity *v5; // r14
  float v8; // xmm1_4
  float flMaxDist2; // [rsp+Ch] [rbp-44h]
  double v12; // [rsp+10h] [rbp-40h]

  EntityByClassnameWithin = 0;
  v5 = 0;
  flMaxDist2 = 3221225500.0;
  while ( 1 )
  {
    EntityByClassnameWithin = CGameEntitySystem::FindEntityByClassnameWithin(
                                g_pGameEntitySystem,
                                EntityByClassnameWithin,
                                szName,
                                vSrc,
                                a3);
    if ( EntityByClassnameWithin == 0 )
      break;
    v12 = (*(EntityByClassnameWithin->_vptr_IHandleEntity + 62))(EntityByClassnameWithin);
    if ( flMaxDist2 > ((((*&v12 - vSrc->x) * (*&v12 - vSrc->x)) + ((*(&v12 + 1) - vSrc->y) * (*(&v12 + 1) - vSrc->y)))
                     + ((v8 - vSrc->z) * (v8 - vSrc->z))) )
    {
      flMaxDist2 = (((*&v12 - vSrc->x) * (*&v12 - vSrc->x)) + ((*(&v12 + 1) - vSrc->y) * (*(&v12 + 1) - vSrc->y)))
                 + ((v8 - vSrc->z) * (v8 - vSrc->z));
      v5 = EntityByClassnameWithin;
    }
  }
  return v5;
}


