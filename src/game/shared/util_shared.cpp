// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/util_shared.cpp:461
class CTraceFilterEntity : public CTraceFilterSimple {
public:

private:

	bool m_checkHash;  // +0x50
	CTraceFilterEntity(CTraceFilterEntity &);
	CTraceFilterEntity(const CTraceFilterEntity &);
	CTraceFilterEntity(CBaseEntity *, int, uint64);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterEntity();

	// vtable[2] ShouldHitEntity
	// sizeof = 88
};

// src/game/shared/util_shared.cpp:530
class CTraceFilterEntityIgnoreOther : public CTraceFilterEntity {
public:

private:

	const CBaseEntity * m_pIgnoreOther;  // +0x58
	CTraceFilterEntityIgnoreOther(CTraceFilterEntityIgnoreOther &);
	CTraceFilterEntityIgnoreOther(const CTraceFilterEntityIgnoreOther &);
	CTraceFilterEntityIgnoreOther(CBaseEntity *, const CBaseEntity *, int, uint64);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterEntityIgnoreOther();

	// vtable[2] ShouldHitEntity
	// sizeof = 96
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SafeGetViewVectors  (line 62, @0x00000000020bc760, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CBasePlayer::GetPlayerMins, CBasePlayer::GetPlayerMaxs, CBasePlayer::UpdateCollisionBounds, CBasePlayer::SharedSpawn, CC_Player_SetModel, CC_Test_Entity_Blocker, CFuncLadder::SetEndPoints, CFuncLadder::Spawn, CFuncLadder::DrawEntityDebugOverlays, CGameMovement::GetPlayerMins, CGameMovement::GetPlayerMaxs, CGameMovement::GetPlayerViewOffset (38 total)
// globals: `guard variable for'SafeGetViewVectors(void)::dummy, SafeGetViewVectors(void)::dummy
const CViewVectors *__cdecl SafeGetViewVectors()
{
  if ( `guard variable for'SafeGetViewVectors(void)::dummy == 0
    && __cxa_guard_acquire(&`guard variable for'SafeGetViewVectors(void)::dummy) != 0 )
  {
    __cxa_guard_release(&`guard variable for'SafeGetViewVectors(void)::dummy);
  }
  if ( g_pGameRules != 0 )
    return (*(g_pGameRules->_vptr_CGameRules + 36))(g_pGameRules);
  else
    return &SafeGetViewVectors(void)::dummy;
}


// CAllowPrecacheScopeGuard::CAllowPrecacheScopeGuard  (line 74, @0x00000000020bc7c0, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache
void __fastcall CAllowPrecacheScopeGuard::CAllowPrecacheScopeGuard(CAllowPrecacheScopeGuard *const this)
{
  this->m_bIsPrecacheEnabled = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
}


// CAllowPrecacheScopeGuard::~CAllowPrecacheScopeGuard  (line 80, @0x00000000020bc7f0, libserver.so)
// calls: CBaseEntity::SetAllowPrecache
void __fastcall CAllowPrecacheScopeGuard::~CAllowPrecacheScopeGuard(CAllowPrecacheScopeGuard *const this)
{
  CBaseEntity::SetAllowPrecache(this->m_bIsPrecacheEnabled);
}


// AllocPooledString  (line 92, @0x00000000020bc800, libserver.so)
// calls: CEntitySystem::AllocPooledString
// callers: CPointClientUIWorldPanel::RemoveCSSClasses, CPointClientUIWorldPanel::AddCSSClasses, ent_setname, CEnvCombinedLightProbeVolume::Input_SetLightGroups, CEnvCubemap::Input_SetLightGroups, CEnvLightProbeVolume::Input_SetLightGroups, CBaseLightProbeVolume::UpdateStateFromKeyValues, CBaseCubemap::UpdateStateFromKeyValues, DoEntFireByInstanceHandle, DoEntFire, CInfoData::Spawn, CPropData::ParsePropFromBase (68 total)
string_t __fastcall AllocPooledString(__int64 a1, const char *pString)
{
  CEntitySystem::AllocPooledString(g_pEntitySystem, pString);
  return a1;
}


// HasLaunchOption  (line 99, @0x00000000020bc830, libserver.so)
// calls: KeyValues::FindKey
// callers: CSource2Server::ApplyGameSettings
bool __fastcall HasLaunchOption(KeyValues *pLaunchOptions, const char *pOptionName)
{
  bool result; // al

  result = 0;
  if ( pOptionName != 0 && *pOptionName != 0 && pLaunchOptions != 0 )
    return KeyValues::FindKey(pLaunchOptions, pOptionName, 0) != 0;
  return result;
}


// GetLaunchOptionValue  (line 107, @0x00000000020bc860, libserver.so)
// calls: KeyValues::GetString
const char *__fastcall GetLaunchOptionValue(KeyValues *pLaunchOptions, const char *pOptionName)
{
  if ( pOptionName != 0 && *pOptionName != 0 && pLaunchOptions != 0 )
    return KeyValues::GetString(pLaunchOptions, pOptionName, "", 0, 0);
  else
    return 0;
}


// IsDedicatedServer  (line 117, @0x00000000020bc890, libserver.so)
// callers: CEntityDebugGameSystem::AddDebugLine, CEntityDebugGameSystem::PreRender, CEntityDebugGameSystem::OnEntityCreated, CEntityDebugGameSystem::AddScrollingMessage, CEntityDebugGameSystem::OnPostSimulate, CDOTAGamerules::HeroPickState_Think_CUSTOMGAME_SELECT, CDOTAGCServerSystem::SendMatchMetadataToClients
bool __cdecl IsDedicatedServer()
{
  return (*(g_pApplication->_vptr_IAppSystem + 33))(g_pApplication) == 2;
}


// IsSpawnGroupAssociatedWithPrimaryMap  (line 122, @0x00000000020bc8b0, libserver.so)  // inlines: operator==
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId
// callers: CPointCamera::UpdateOnRemove, CPointCamera::Spawn, CSkyCamera::Spawn, CDOTA_BinaryObjectSystem::PreSpawnGroupUnload, CDOTA_BinaryObjectSystem::PostSpawnGroupLoad, CDOTAGamerules::PreSpawnGroupUnload, CDOTAGamerules::PostSpawnGroupLoad
bool __fastcall IsSpawnGroupAssociatedWithPrimaryMap(SpawnGroupHandle_t hSpawnGroup)
{
  return CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, hSpawnGroup).m_nHashCode == 0;
}


// GetNextCommandEntity  (line 135, @0x00000000020bc8d0, libserver.so)  // inlines: ClassMatches, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, NameMatches, V_isdigit, V_isdigit_str, atoi
// calls: strtol, CEntityIdentity::NameMatches, CEntityIdentity::ClassMatches, __dynamic_cast
// callers: ent_script_dump, ent_setname, ent_call, ent_scale, script_reload_entity_code, CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities, CEntityDebugGameSystem::RemoveStickyEntTextName, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities, CEntityDebugGameSystem::SetDebugBitsOnMatchingEntities, CEntityDebugGameSystem::AddStickyEntTextName, CC_Ent_Show_Response_Criteria, SetDebugBits (15 total)
CBaseEntity *__fastcall GetNextCommandEntity(CBaseEntity *pPlayer, const char *pName, CBaseEntity *pEntity)
{
  char v5; // al
  const char *v6; // rcx
  int v7; // eax
  CBaseEntity **m_pNext; // rbx
  void *v10; // rax
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rdx

  if ( pName != 0 && (v5 = *pName, *pName != 0) )
  {
    v6 = pName;
    while ( 1 )
    {
      ++v6;
      if ( (v5 - 48) > 9u )
        break;
      v5 = *v6;
      if ( *v6 == 0 )
      {
        v7 = strtol(pName, 0, 10);
        if ( v7 != 0 )
        {
          if ( pEntity == 0 && v7 <= 0x7FFE && (v7 >> 9) <= 0x3F )
          {
            v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
            if ( v11 != 0 )
            {
              v12 = &v11[v7 & 0x1FF];
              if ( v12 != 0 && (v12->m_EHandle.m_Index & 0x7FFF) == v7 )
                return v12->m_pInstance;
            }
          }
          return 0;
        }
        break;
      }
    }
    if ( pEntity != 0 )
      m_pNext = pEntity->m_pEntity->m_pNext;
    else
      m_pNext = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;
    if ( m_pNext == 0 )
      return 0;
    while ( !CEntityIdentity::NameMatches((*m_pNext)->m_pEntity, pName)
         && !CEntityIdentity::ClassMatches((*m_pNext)->m_pEntity, pName) )
    {
      m_pNext = m_pNext[11];
      if ( m_pNext == 0 )
        return 0;
    }
    return *m_pNext;
  }
  else if ( pEntity == 0
         && pPlayer != 0
         && (v10 = __dynamic_cast(pPlayer, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0)) != 0 )
  {
    return (*(*v10 + 4248LL))(v10);
  }
  else
  {
    return 0;
  }
}


// UTIL_GetCommandClient  (line 195, @0x00000000020bca70, libserver.so)
// calls: UTIL_PlayerByIndex
// callers: ent_script_dump, ent_setname, ent_call, ent_scale, ent_remove, CDecalGameSystem::TraceDebugRay, script_reload_entity_code, ent_text_sticky_remove, ent_text_sticky_clear, ent_text_clear, ent_messages, ent_select (29 total)
CBasePlayer *__fastcall UTIL_GetCommandClient(const CCommandContext *const ctx)
{
  return UTIL_PlayerByIndex(1);
}


// UTIL_GetCommandClientIndex  (line 206, @0x00000000020bca80, libserver.so)
// callers: ent_picker
CEntityIndex __fastcall UTIL_GetCommandClientIndex(const CCommandContext *const ctx)
{
  return 1;
}


// UTIL_VecToYaw  (line 216, @0x00000000020bca90, libserver.so)  // inlines: RAD2DEG
// calls: atan2
// callers: CBaseAnimatingController::GetSequenceMoveYaw, IDebugOverlay::BoxDirection, NDebugOverlay::BoxDirection, CGridNavPath::Update, CDOTALocomotor::FaceTowards, CDOTALocomotor::GetCastAngle, CDOTALocomotor::IsFacingLocation, CDOTA_Ability_Beastmaster_PrimalRoar::OnSpellStart, CDOTA_Modifier_Nian_Dive::UpdateHorizontalMotion, NextBotGroundLocomotion::FaceTowards, NextBotGroundLocomotion::DescendLadder
float __fastcall UTIL_VecToYaw(const Vector *const vForward)
{
  float y; // xmm3_4
  float x; // xmm1_4
  float result; // xmm0_4

  y = vForward->y;
  x = vForward->x;
  if ( y != 0.0 || (result = 0.0, x != 0.0) )
  {
    result = atan2(y, x) * 57.295776;
    if ( result < 0.0 )
      return result + 360.0;
  }
  return result;
}


// UTIL_VecToPitch  (line 231, @0x00000000020bcb10, libserver.so)  // inlines: RAD2DEG
// calls: VectorNormalize, asinf
float __fastcall UTIL_VecToPitch(const Vector *const vec)
{
  Vector tmp; // [rsp+0h] [rbp-10h] BYREF

  tmp = *vec;
  if ( VectorNormalize(&tmp) <= 0.0 )
    return 0.0;
  else
    return asinf(-tmp.z) * 57.295776;
}


// UTIL_VecToYaw  (line 242, @0x00000000020bcb60, libserver.so)  // inlines: RAD2DEG
// calls: VectorNormalize, atan2
float __fastcall UTIL_VecToYaw(const matrix3x4_t *const matrix, const Vector *const vec)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float result; // xmm0_4
  Vector tmp; // [rsp+10h] [rbp-20h] BYREF

  tmp = *vec;
  VectorNormalize(&tmp);
  v3 = ((matrix->m_flMatVal[0][0] * tmp.x) + (matrix->m_flMatVal[1][0] * tmp.y)) + (matrix->m_flMatVal[2][0] * tmp.z);
  v4 = ((tmp.x * matrix->m_flMatVal[0][1]) + (tmp.y * matrix->m_flMatVal[1][1])) + (tmp.z * matrix->m_flMatVal[2][1]);
  if ( v4 != 0.0 || (result = 0.0, v3 != 0.0) )
  {
    result = atan2(-v4, v3) * 57.295776;
    if ( result < 0.0 )
      return result + 360.0;
  }
  return result;
}


// UTIL_VecToPitch  (line 263, @0x00000000020bcc50, libserver.so)  // inlines: RAD2DEG
// calls: VectorNormalize, asinf
float __fastcall UTIL_VecToPitch(const matrix3x4_t *const matrix, const Vector *const vec)
{
  float result; // xmm0_4
  Vector tmp; // [rsp+10h] [rbp-20h] BYREF

  tmp = *vec;
  if ( VectorNormalize(&tmp) <= 0.0 )
    return 0.0;
  result = asinf(-(((matrix->m_flMatVal[0][2] * tmp.x) + (matrix->m_flMatVal[1][2] * tmp.y))
                 + (matrix->m_flMatVal[2][2] * tmp.z)))
         * 57.295776;
  if ( result < 0.0 )
    return result + 360.0;
  return result;
}


// UTIL_YawToVector  (line 277, @0x00000000020bccf0, libserver.so)  // inlines: DEG2RAD, SinCos
// calls: sincosf
// callers: NDebugOverlay::YawArrow, CBasePlayer::CheatImpulseCommands, CNavEditor::UpdateSelection
__m128i __fastcall UTIL_YawToVector(float a1, float yaw)
{
  __int64 cosx; // [rsp+18h] [rbp-18h] BYREF
  __m128i v4; // [rsp+20h] [rbp-10h] BYREF

  sincosf(a1 * 0.017453292, &cosx + 1, &cosx);
  v4.m128i_i64[0] = cosx;
  return _mm_loadl_epi64(&v4);
}


// SeedFileLineHash  (line 295, @0x000000000209d680, libserver.so)  // inlines: V_strlen
// calls: CRC32_Init, CRC32_ProcessBuffer, strlen, CRC32_Final
// callers: SharedRandomFloat, SharedRandomVector, SharedRandomAngle, SharedRandomInt
int __fastcall SeedFileLineHash(int seedvalue, const char *sharedname, int additionalSeed)
{
  int v4; // edx
  int additionalSeeda; // [rsp+8h] [rbp-28h] BYREF
  int seedvaluea[4]; // [rsp+Ch] [rbp-24h] BYREF
  CRC32_t retval[5]; // [rsp+1Ch] [rbp-14h] BYREF

  seedvaluea[0] = seedvalue;
  additionalSeeda = additionalSeed;
  CRC32_Init(retval);
  CRC32_ProcessBuffer(retval, seedvaluea, 4);
  CRC32_ProcessBuffer(retval, &additionalSeeda, 4);
  if ( sharedname != 0 )
    v4 = strlen(sharedname);
  else
    v4 = 0;
  CRC32_ProcessBuffer(retval, sharedname, v4);
  CRC32_Final(retval);
  return retval[0];
}


// LogRandomValue  (line 315, @0x000000000209da80, libserver.so)  // inlines: Color, SetColor
// calls: ConColorMsg(Color const&,char const*,...), __stack_chk_fail
// callers: LogRandomValue, SharedRandomFloat, SharedRandomVector, SharedRandomAngle, SharedRandomInt
// strings: "%s: %s( %s %d %d )\n"
void __fastcall LogRandomValue(const char *functionName, const char *sharedName, int seed, int additionalSeed)
{
  Color v4; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  v4._color[0] = -1;
  v4._color[1] = -1;
  v4._color[2] = 0;
  v4._color[3] = -1;
  ConColorMsg(&v4, "%s: %s( %s %d %d )\n", "SERVER", functionName, sharedName, seed, additionalSeed);
}


// LogRandomValue  (line 315, @0x00000000020bcd30, libserver.so)  // inlines: GetBool, GetInt
// calls: LogRandomValue
void __fastcall LogRandomValue(const char *functionName, const char *sharedName, int seed, int additionalSeed)
{
  if ( debug_shared_random.m_pParent->m_Value.m_nValue != 0 )
    LogRandomValue(functionName, sharedName, seed, additionalSeed);
}


// SharedRandomFloat  (line 329, @0x00000000020f0d10, libserver.so)  // inlines: GetBool, GetInt, LogRandomValue
// calls: SeedFileLineHash, LogRandomValue, CUniformRandomStream::SetSeed(int), CUniformRandomStream::RandomFloat(float,float)
// strings: "SharedRandomFloat"
// globals: s_sharedUniformRandomStream
float __fastcall SharedRandomFloat(
        const char *sharedname,
        float a2,
        float flMinVal,
        float flMaxVal,
        int additionalSeed)
{
  int v7; // eax
  float v8; // xmm1_4
  int v9; // r12d
  float v10; // xmm0_4
  float result; // xmm0_4
  float flMinValb; // [rsp+8h] [rbp-28h]
  float flMinValc; // [rsp+8h] [rbp-28h]
  float flMaxValb; // [rsp+Ch] [rbp-24h]
  float flMaxValc; // [rsp+Ch] [rbp-24h]

  v7 = SeedFileLineHash(CBaseEntity::m_nPredictionRandomSeed, sharedname, additionalSeed);
  v8 = flMinVal;
  v9 = v7;
  v10 = a2;
  if ( debug_shared_random.m_pParent->m_Value.m_nValue != 0 )
  {
    flMinValb = flMinVal;
    flMaxValb = v10;
    LogRandomValue("SharedRandomFloat", sharedname, v7, additionalSeed);
    v8 = flMinValb;
    v10 = flMaxValb;
  }
  flMinValc = v8;
  flMaxValc = v10;
  CUniformRandomStream::SetSeed(&s_sharedUniformRandomStream, v9);
  CUniformRandomStream::RandomFloat(&s_sharedUniformRandomStream, flMaxValc, flMinValc);
  return result;
}


// SharedRandomInt  (line 339, @0x00000000020f0f60, libserver.so)  // inlines: GetBool, GetInt, LogRandomValue
// calls: SeedFileLineHash, LogRandomValue, CUniformRandomStream::SetSeed(int), CUniformRandomStream::RandomInt(int,int)
// strings: "SharedRandomInt"
// globals: s_sharedUniformRandomStream
int __fastcall SharedRandomInt(const char *sharedname, int iMinVal, int iMaxVal, int additionalSeed)
{
  int v8; // r12d

  v8 = SeedFileLineHash(CBaseEntity::m_nPredictionRandomSeed, sharedname, additionalSeed);
  if ( debug_shared_random.m_pParent->m_Value.m_nValue != 0 )
    LogRandomValue("SharedRandomInt", sharedname, v8, additionalSeed);
  CUniformRandomStream::SetSeed(&s_sharedUniformRandomStream, v8);
  return CUniformRandomStream::RandomInt(&s_sharedUniformRandomStream, iMinVal, iMaxVal);
}


// SharedRandomVector  (line 349, @0x00000000020f0dc0, libserver.so)  // inlines: GetBool, GetInt, LogRandomValue
// calls: SeedFileLineHash, LogRandomValue, CUniformRandomStream::SetSeed(int), CUniformRandomStream::RandomFloat(float,float)
// strings: "SharedRandomVector"
// globals: s_sharedUniformRandomStream
__m128i __fastcall SharedRandomVector(const char *sharedname, float a2, float minVal, float maxVal, int additionalSeed)
{
  int v7; // r12d
  __m128i v8; // xmm0
  int v9; // r12d
  __m128i v10; // xmm0
  int v11; // ebx
  __m128i v15[3]; // [rsp+20h] [rbp-30h] BYREF

  v7 = SeedFileLineHash(CBaseEntity::m_nPredictionRandomSeed, sharedname, additionalSeed);
  if ( debug_shared_random.m_pParent->m_Value.m_nValue != 0 )
    LogRandomValue("SharedRandomVector", sharedname, v7, additionalSeed);
  CUniformRandomStream::SetSeed(&s_sharedUniformRandomStream, v7);
  CUniformRandomStream::RandomFloat(&s_sharedUniformRandomStream, a2, minVal);
  v9 = _mm_cvtsi128_si32(v8);
  CUniformRandomStream::RandomFloat(&s_sharedUniformRandomStream, a2, minVal);
  v11 = _mm_cvtsi128_si32(v10);
  CUniformRandomStream::RandomFloat(&s_sharedUniformRandomStream, a2, minVal);
  v15[0].m128i_i64[0] = __PAIR64__(v11, v9);
  return _mm_loadl_epi64(v15);
}


// SharedRandomAngle  (line 365, @0x00000000020f0e90, libserver.so)  // inlines: GetBool, GetInt, LogRandomValue
// calls: SeedFileLineHash, LogRandomValue, CUniformRandomStream::SetSeed(int), CUniformRandomStream::RandomFloat(float,float)
// strings: "SharedRandomAngle"
// globals: s_sharedUniformRandomStream
__m128i __fastcall SharedRandomAngle(const char *sharedname, float a2, float minVal, float maxVal, int additionalSeed)
{
  int v7; // r12d
  __m128i v8; // xmm0
  int v9; // r12d
  __m128i v10; // xmm0
  int v11; // ebx
  __m128i v15[3]; // [rsp+20h] [rbp-30h] BYREF

  v7 = SeedFileLineHash(CBaseEntity::m_nPredictionRandomSeed, sharedname, additionalSeed);
  if ( debug_shared_random.m_pParent->m_Value.m_nValue != 0 )
    LogRandomValue("SharedRandomAngle", sharedname, v7, additionalSeed);
  CUniformRandomStream::SetSeed(&s_sharedUniformRandomStream, v7);
  CUniformRandomStream::RandomFloat(&s_sharedUniformRandomStream, a2, minVal);
  v9 = _mm_cvtsi128_si32(v8);
  CUniformRandomStream::RandomFloat(&s_sharedUniformRandomStream, a2, minVal);
  v11 = _mm_cvtsi128_si32(v10);
  CUniformRandomStream::RandomFloat(&s_sharedUniformRandomStream, a2, minVal);
  v15[0].m128i_i64[0] = __PAIR64__(v11, v9);
  return _mm_loadl_epi64(v15);
}


// UTIL_TraceRayVerticalGroundHeight  (line 384, @0x00000000020bcd60, libserver.so)  // inlines: GetMapDataForSpawnGroup
// calls: CWorldGameSystem::GetWorldInfoForSpawnGroup, CSpawnGroupMgrGameSystem::GetWorldGroupId, CPhysicsGameSystem::GetExistingLevelWorld
// callers: CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, FOWTraceRayVerticalGroundHeight, CDOTAPlayerMove::RunCommand, GetGroundHeight, CDOTA_BaseNPC_Hero::Event_Killed
float __fastcall UTIL_TraceRayVerticalGroundHeight(
        SpawnGroupHandle_t hSpawnGroup,
        float a2,
        float x,
        float y,
        float z0,
        float z1,
        float startsolidval,
        uint64 nInteractsWithMask)
{
  __int64 m_mapDataHandle; // r13
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  float v12; // xmm0_4
  WorldGroupId_t v13; // eax
  IVPhysics2World *ExistingLevelWorld; // rax
  float xa; // [rsp+8h] [rbp-28h]
  float yb; // [rsp+Ch] [rbp-24h]

  m_mapDataHandle = -1;
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, hSpawnGroup);
  v12 = a2;
  if ( WorldInfoForSpawnGroup != 0 )
    m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
  xa = x;
  yb = v12;
  v13.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, hSpawnGroup).m_nHashCode;
  ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, v13);
  if ( ExistingLevelWorld != 0 )
    return (*(*g_pDotaMapUtils + 104LL))(
             g_pDotaMapUtils,
             m_mapDataHandle,
             ExistingLevelWorld,
             nInteractsWithMask,
             yb,
             xa);
  else
    return -16384.0;
}


// UTIL_TraceRayVerticalGroundHeight  (line 399, @0x00000000020bce30, libserver.so)  // inlines: GetMapDataForSpawnGroup, NormalizeInPlace
// calls: CWorldGameSystem::GetWorldInfoForSpawnGroup, CSpawnGroupMgrGameSystem::GetWorldGroupId, CPhysicsGameSystem::GetExistingLevelWorld, VectorNormalize
// callers: CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData
float __fastcall UTIL_TraceRayVerticalGroundHeight(
        SpawnGroupHandle_t hSpawnGroup,
        float x,
        float y,
        float z0,
        float z1,
        float startsolidval,
        Vector *const vecNormal,
        uint64 nInteractsWithMask)
{
  __int64 m_mapDataHandle; // r12
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  WorldGroupId_t v13; // eax
  IVPhysics2World *ExistingLevelWorld; // rax
  IVPhysics2World *v15; // rbx
  float v16; // xmm0_4
  float flZBase; // [rsp+0h] [rbp-40h]
  float flZAlt1; // [rsp+4h] [rbp-3Ch]

  m_mapDataHandle = -1;
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, hSpawnGroup);
  if ( WorldInfoForSpawnGroup != 0 )
    m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
  v13.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, hSpawnGroup).m_nHashCode;
  ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, v13);
  v15 = ExistingLevelWorld;
  if ( ExistingLevelWorld == 0 )
    return -16384.0;
  flZBase = (*(*g_pDotaMapUtils + 104LL))(
              g_pDotaMapUtils,
              m_mapDataHandle,
              ExistingLevelWorld,
              nInteractsWithMask,
              x,
              y);
  flZAlt1 = (*(*g_pDotaMapUtils + 104LL))(
              g_pDotaMapUtils,
              m_mapDataHandle,
              v15,
              nInteractsWithMask,
              COERCE_DOUBLE(COERCE_UNSIGNED_INT(x + 1.0)),
              y);
  v16 = (*(*g_pDotaMapUtils + 104LL))(g_pDotaMapUtils, m_mapDataHandle, v15, nInteractsWithMask, x, y + 1.0);
  vecNormal->z = 1.0;
  vecNormal->x = flZBase - flZAlt1;
  vecNormal->y = flZBase - v16;
  VectorNormalize(vecNormal);
  return flZBase;
}


// UTIL_TraceModel  (line 429, @0x00000000020bcf90, libserver.so)  // inlines: Init, LengthSqr, Ray_t, VectorAdd, VectorAligned, VectorSubtract, memset, operator*=
// calls: CGamePhysicsQueryInterface::ClipRayToEntity
// callers: CGamePlayerZone::InputCountPlayersInZone
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceModel(
        const Vector *const vecStart,
        const Vector *const vecEnd,
        const Vector *const hullMin,
        const Vector *const hullMax,
        CBaseEntity *pentModel,
        int collisionGroup,
        trace_t *ptr)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float z; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm12_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  Ray_t ray; // [rsp+0h] [rbp-50h] BYREF

  if ( pentModel != 0 )
  {
    x = vecStart->x;
    y = vecStart->y;
    ray.m_Start.w = 0.0;
    v9 = vecEnd->x;
    ray.m_Delta.w = 0.0;
    v10 = vecEnd->y;
    ray.m_StartOffset.w = 0.0;
    z = vecStart->z;
    ray.m_Extents.w = 0.0;
    v12 = vecEnd->z;
    ray.m_flRadius = 0.0;
    v13 = hullMax->x;
    ray.m_Delta.x = v9 - x;
    ray.m_Delta.y = v10 - y;
    v14 = hullMax->y;
    v15 = hullMin->x;
    ray.m_Delta.z = v12 - z;
    v16 = hullMin->y;
    v17 = hullMax->z;
    v18 = hullMin->z;
    ray.m_Extents.y = (v14 - v16) * 0.5;
    ray.m_Extents.z = (v17 - v18) * 0.5;
    ray.m_Extents.x = (v13 - v15) * 0.5;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    v19 = (v13 + v15) * 0.5;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    v20 = (v14 + v16) * 0.5;
    v21 = (v17 + v18) * 0.5;
    ray.m_Start.x = x + v19;
    ray.m_StartOffset.x = -v19;
    ray.m_StartOffset.y = -v20;
    ray.m_Start.y = y + v20;
    ray.m_Start.z = z + v21;
    ray.m_StartOffset.z = -v21;
    CGamePhysicsQueryInterface::ClipRayToEntity(g_pPhysicsQuery, &ray, 0xFFFFFFFFFFFFFFFFLL, pentModel, ptr);
  }
  else
  {
    memset(ptr, 0, sizeof(trace_t));
    ptr->fraction = 1.0;
  }
}


// UTIL_EntityHasMatchingRootParent  (line 445, @0x00000000020bd150, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseEntity::GetRootMoveParent
// callers: CTraceFilterEntity::ShouldHitEntity, CTraceFilterEntityIgnoreOther::ShouldHitEntity, CTraceFilterPushMove::ShouldHitEntity
bool __fastcall UTIL_EntityHasMatchingRootParent(CBaseEntity *pRootParent, CBaseEntity *pEntity)
{
  bool result; // al
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  result = 0;
  if ( pRootParent != 0 )
  {
    result = 1;
    if ( pRootParent != CBaseEntity::GetRootMoveParent(pEntity) )
    {
      if ( pEntity->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v5 = 0x7FFF;
        v6 = 0x7FFF;
      }
      else
      {
        v5 = pEntity->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v6 = v5;
      }
      v7 = (pEntity->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
      if ( v7 + 2 <= 1 )
        return 0;
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v8 == 0 )
        return 0;
      v9 = &v8[v6 & 0x1FF];
      if ( v9 == 0
        || v7 != v9->m_EHandle.m_Index
        || v9->m_pInstance == 0
        || pRootParent != CBaseEntity::GetRootMoveParent(v9->m_pInstance) )
      {
        return 0;
      }
    }
  }
  return result;
}


// CTraceFilterEntity::~CTraceFilterEntity  (line 461, @0x00000000020f1bc0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterEntity::~CTraceFilterEntity(CTraceFilterEntity *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
}


// CTraceFilterEntity::~CTraceFilterEntity  (line 461, @0x00000000020f4bc0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterEntity, ~CTraceFilterSimple
// calls: operator delete
void __fastcall CTraceFilterEntity::~CTraceFilterEntity(CTraceFilterEntity *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
  operator delete(this);
}


// CTraceFilterEntity::ShouldHitEntity  (line 487, @0x000000000210c5f0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
// calls: UTIL_EntityHasMatchingRootParent, CBaseEntity::VPhysicsWorld, CTraceFilterSimple::ShouldHitEntity
bool __fastcall CTraceFilterEntity::ShouldHitEntity(CTraceFilterEntity *const this, CBaseEntity *pEntity)
{
  IVPhysics2World *v4; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 v6; // rdx
  __int16 v7; // si
  __int64 v8; // rsi
  CEntityIdentity *v9; // rcx
  __int16 v10; // di

  if ( UTIL_EntityHasMatchingRootParent(this->m_pRootParent, pEntity) )
    return 0;
  if ( !this->m_checkHash )
    return CTraceFilterSimple::ShouldHitEntity(this, pEntity);
  v4 = CBaseEntity::VPhysicsWorld(pEntity);
  m_pEntity = pEntity->m_pEntity;
  v6 = 0xFFFFFFFFLL;
  if ( m_pEntity != 0 )
  {
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v6 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
  }
  v8 = 0xFFFFFFFFLL;
  v9 = this->m_pEntity->m_pEntity;
  if ( v9 != 0 )
  {
    v10 = 0x7FFF;
    if ( v9->m_EHandle.m_Index != -1 )
      v10 = v9->m_EHandle.m_Index & 0x7FFF;
    v8 = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
  }
  return (*(*v4 + 384LL))(v4, v8, v6) == 0 && CTraceFilterSimple::ShouldHitEntity(this, pEntity);
}


// CTraceFilterEntityIgnoreOther::~CTraceFilterEntityIgnoreOther  (line 530, @0x00000000020f21a0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterEntity, ~CTraceFilterSimple
void __fastcall CTraceFilterEntityIgnoreOther::~CTraceFilterEntityIgnoreOther(
        CTraceFilterEntityIgnoreOther *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
}


// CTraceFilterEntityIgnoreOther::~CTraceFilterEntityIgnoreOther  (line 530, @0x00000000020f4c00, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterEntity, ~CTraceFilterEntityIgnoreOther, ~CTraceFilterSimple
// calls: operator delete
void __fastcall CTraceFilterEntityIgnoreOther::~CTraceFilterEntityIgnoreOther(
        CTraceFilterEntityIgnoreOther *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
  operator delete(this);
}


// CTraceFilterEntityIgnoreOther::ShouldHitEntity  (line 539, @0x000000000210c710, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, ShouldHitEntity
// calls: UTIL_EntityHasMatchingRootParent, CBaseEntity::VPhysicsWorld, CTraceFilterSimple::ShouldHitEntity
bool __fastcall CTraceFilterEntityIgnoreOther::ShouldHitEntity(
        CTraceFilterEntityIgnoreOther *const this,
        CBaseEntity *pHandleEntity)
{
  IVPhysics2World *v4; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 v6; // rdx
  __int16 v7; // si
  __int64 v8; // rsi
  CEntityIdentity *v9; // rcx
  __int16 v10; // di

  if ( this->m_pIgnoreOther == pHandleEntity || UTIL_EntityHasMatchingRootParent(this->m_pRootParent, pHandleEntity) )
    return 0;
  if ( !this->m_checkHash )
    return CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
  v4 = CBaseEntity::VPhysicsWorld(pHandleEntity);
  m_pEntity = pHandleEntity->m_pEntity;
  v6 = 0xFFFFFFFFLL;
  if ( m_pEntity != 0 )
  {
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v6 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
  }
  v8 = 0xFFFFFFFFLL;
  v9 = this->m_pEntity->CTraceFilterEntity::m_pEntity;
  if ( v9 != 0 )
  {
    v10 = 0x7FFF;
    if ( v9->m_EHandle.m_Index != -1 )
      v10 = v9->m_EHandle.m_Index & 0x7FFF;
    v8 = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
  }
  return (*(*v4 + 384LL))(v4, v8, v6) == 0 && CTraceFilterSimple::ShouldHitEntity(this, pHandleEntity);
}


// UTIL_TraceEntityAABB  (line 556, @0x00000000020e4440, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CTraceFilter, CTraceFilterEntity, CTraceFilterSimple, GetEHandle, GetEntryIndex, GetSerialNumber, HierarchyIDFromBaseEntity, Init, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, SetInteractsExclude, SetInteractsWith
// calls: EntityIDFromBaseEntity, CBaseEntity::GetRootMoveParent, CBaseEntity::VPhysicsWorld, CGamePhysicsQueryInterface::SweepCollideable
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceEntityAABB(
        CBaseEntity *pEntity,
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        uint64 mask,
        trace_t *ptr)
{
  uint8 v9; // r15
  CCollisionProperty *m_pCollision; // rax
  IVPhysics2World *v11; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 v13; // rsi
  __int16 v14; // si
  CCollisionProperty *v15; // rax
  CTraceFilterEntity traceFilter; // [rsp+20h] [rbp-90h] BYREF

  v9 = (*(pEntity->m_pCollision->_vptr_ICollideable + 9))(pEntity->m_pCollision);
  traceFilter.m_attr.m_nHierarchyId = 0;
  traceFilter._vptr_CTraceFilter = off_3FE6970;
  memset(&traceFilter.m_attr, 0, 24);
  traceFilter.m_attr.m_nCollisionGroup = 0;
  traceFilter.m_attr.m_nObjectSetMask = 7;
  *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter.m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(pEntity);
  m_pCollision = pEntity->m_pCollision;
  if ( m_pCollision != 0 )
    LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
  traceFilter.m_attr.m_nHierarchyId = m_pCollision;
  traceFilter.m_pPassEnt = pEntity;
  traceFilter.m_attr.m_nCollisionGroup = v9;
  traceFilter.m_pExtraShouldHitCheckFunction = 0;
  traceFilter._vptr_CTraceFilter = off_3FFCA30;
  traceFilter.m_pEntity = pEntity;
  traceFilter.m_pRootParent = CBaseEntity::GetRootMoveParent(pEntity);
  v11 = CBaseEntity::VPhysicsWorld(pEntity);
  m_pEntity = pEntity->m_pEntity;
  v13 = 0xFFFFFFFFLL;
  if ( m_pEntity != 0 )
  {
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v13 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
  }
  traceFilter.m_checkHash = (*(*v11 + 400LL))(v11, v13);
  v15 = pEntity->m_pCollision;
  if ( v15 != 0 )
    traceFilter.m_attr.m_nInteractsExclude = v15->m_collisionAttribute.m_nInteractsExclude.m_Value;
  else
    traceFilter.m_attr.m_nInteractsExclude = 0;
  traceFilter.m_attr.m_nInteractsWith = mask;
  CGamePhysicsQueryInterface::SweepCollideable(g_pPhysicsQuery, pEntity, vecAbsStart, vecAbsEnd, &traceFilter, ptr);
}


// UTIL_TraceEntityAABB  (line 570, @0x00000000020e45f0, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CTraceFilter, CTraceFilterEntity, CTraceFilterEntityIgnoreOther, CTraceFilterSimple, GetEHandle, GetEntryIndex, GetSerialNumber, HierarchyIDFromBaseEntity, Init, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, SetInteractsExclude, SetInteractsWith
// calls: EntityIDFromBaseEntity, CBaseEntity::GetRootMoveParent, CBaseEntity::VPhysicsWorld, CGamePhysicsQueryInterface::SweepCollideable
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceEntityAABB(
        CBaseEntity *pEntity,
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        uint64 mask,
        const CBaseEntity *pIgnoreEntity,
        int nCollisionGroup,
        trace_t *ptr)
{
  uint32 v12; // eax
  CCollisionProperty *m_pCollision; // rax
  IVPhysics2World *v14; // rax
  __int64 v15; // rsi
  CEntityIdentity *m_pEntity; // rdx
  __int16 v17; // si
  CCollisionProperty *v18; // rax
  char nCollisionGroupa; // [rsp+Ch] [rbp-A4h]
  CTraceFilterEntityIgnoreOther traceFilter; // [rsp+20h] [rbp-90h] BYREF

  traceFilter._vptr_CTraceFilter = off_3FE6970;
  memset(&traceFilter.m_attr, 0, 24);
  traceFilter.m_attr.m_nEntityIdToIgnore = -1;
  traceFilter.m_attr.m_nHierarchyId = 0;
  traceFilter.m_attr.m_nCollisionGroup = 0;
  *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter.m_attr.m_nObjectSetMask = 7;
  if ( pEntity != 0 )
  {
    nCollisionGroupa = nCollisionGroup;
    v12 = EntityIDFromBaseEntity(pEntity);
    LOBYTE(nCollisionGroup) = nCollisionGroupa;
    traceFilter.m_attr.m_nEntityIdToIgnore = v12;
    m_pCollision = pEntity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    traceFilter.m_attr.m_nHierarchyId = m_pCollision;
  }
  traceFilter.m_attr.m_nCollisionGroup = nCollisionGroup;
  traceFilter.m_pPassEnt = pEntity;
  traceFilter.m_pExtraShouldHitCheckFunction = 0;
  traceFilter._vptr_CTraceFilter = off_3FFCA30;
  traceFilter.m_pEntity = pEntity;
  traceFilter.m_pRootParent = CBaseEntity::GetRootMoveParent(pEntity);
  v14 = CBaseEntity::VPhysicsWorld(pEntity);
  v15 = 0xFFFFFFFFLL;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v17 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
  }
  traceFilter.m_checkHash = (*(*v14 + 400LL))(v14, v15);
  v18 = pEntity->m_pCollision;
  if ( v18 != 0 )
    traceFilter.m_attr.m_nInteractsExclude = v18->m_collisionAttribute.m_nInteractsExclude.m_Value;
  else
    traceFilter.m_attr.m_nInteractsExclude = 0;
  traceFilter.m_attr.m_nInteractsWith = mask;
  traceFilter.m_pIgnoreOther = pIgnoreEntity;
  traceFilter._vptr_CTraceFilter = off_3FFCA70;
  CGamePhysicsQueryInterface::SweepCollideable(g_pPhysicsQuery, pEntity, vecAbsStart, vecAbsEnd, &traceFilter, ptr);
}


// UTIL_TraceEntity  (line 580, @0x00000000020e47b0, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CTraceFilter, CTraceFilterEntity, CTraceFilterSimple, GetEHandle, GetEntryIndex, GetSerialNumber, HierarchyIDFromBaseEntity, Init, LengthSqr, Ray_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetIgnoreEntity, SetInteractsExclude, SetInteractsWith, TraceRay, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: EntityIDFromBaseEntity, CBaseEntity::GetRootMoveParent, CBaseEntity::VPhysicsWorld, CGamePhysicsQueryInterface::SweepCollideable, CGamePhysicsQueryInterface::TraceRay
// callers: TestEntityPosition, CGameRules::WeaponTraceEntity, Physics_TraceEntity, CLagCompensationManager::BacktrackEntity
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceEntity(
        CBaseEntity *pEntity,
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        uint64 mask,
        trace_t *ptr)
{
  CCollisionProperty *m_pCollision; // rdi
  CCollisionProperty *v11; // rax
  IVPhysics2World *v12; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(IVPhysics2World *, __int64); // r8
  __int16 v16; // si
  int v17; // edx
  __int16 v18; // cx
  CCollisionProperty *v19; // rax
  uint32 v20; // eax
  float x; // xmm6_4
  float y; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float z; // xmm4_4
  float v26; // xmm2_4
  uint8 nCollisionGroup; // [rsp+Ch] [rbp-C4h]
  CGameQueryAttributes traceFilter_0; // [rsp+10h] [rbp-C0h] BYREF
  CTraceFilterEntity traceFilter; // [rsp+40h] [rbp-90h] BYREF

  m_pCollision = pEntity->m_pCollision;
  if ( m_pCollision != 0 )
  {
    nCollisionGroup = (*(m_pCollision->_vptr_ICollideable + 9))(m_pCollision);
    traceFilter._vptr_CTraceFilter = off_3FE6970;
    memset(&traceFilter.m_attr, 0, 24);
    traceFilter.m_attr.m_nHierarchyId = 0;
    traceFilter.m_attr.m_nCollisionGroup = 0;
    *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
    traceFilter.m_attr.m_nObjectSetMask = 7;
    traceFilter.m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(pEntity);
    v11 = pEntity->m_pCollision;
    if ( v11 != 0 )
      LOWORD(v11) = v11->m_collisionAttribute.m_nHierarchyId.m_Value;
    traceFilter.m_attr.m_nHierarchyId = v11;
    traceFilter.m_pPassEnt = pEntity;
    traceFilter.m_pExtraShouldHitCheckFunction = 0;
    traceFilter.m_attr.m_nCollisionGroup = nCollisionGroup;
    traceFilter._vptr_CTraceFilter = off_3FFCA30;
    traceFilter.m_pEntity = pEntity;
    traceFilter.m_pRootParent = CBaseEntity::GetRootMoveParent(pEntity);
    v12 = CBaseEntity::VPhysicsWorld(pEntity);
    m_pEntity = pEntity->m_pEntity;
    v14 = 0xFFFFFFFFLL;
    v15 = *(*v12 + 400LL);
    if ( m_pEntity != 0 )
    {
      v16 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v17 = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15;
      v18 = v16 | traceFilter_0.m_nInteractsWith & 0x8000;
      v14 = v17 | v16 & 0x7FFFu;
      LODWORD(traceFilter_0.m_nInteractsWith) = v17 | v18 & 0x7FFF;
    }
    traceFilter.m_checkHash = v15(v12, v14);
    v19 = pEntity->m_pCollision;
    if ( v19 != 0 )
      traceFilter.m_attr.m_nInteractsExclude = v19->m_collisionAttribute.m_nInteractsExclude.m_Value;
    else
      traceFilter.m_attr.m_nInteractsExclude = 0;
    traceFilter.m_attr.m_nInteractsWith = mask;
    CGamePhysicsQueryInterface::SweepCollideable(g_pPhysicsQuery, pEntity, vecAbsStart, vecAbsEnd, &traceFilter, ptr);
  }
  else
  {
    traceFilter_0.m_nInteractsWith = mask;
    traceFilter_0.m_nInteractsExclude = 0;
    traceFilter_0.m_nInteractsAs = 0;
    traceFilter_0.m_nHierarchyId = 0;
    traceFilter_0.m_nEntityIdToIgnore = -1;
    *(&traceFilter_0.RnQueryShapeAttr_t + 31) = *(&traceFilter_0.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
    traceFilter_0.m_nObjectSetMask = 7;
    traceFilter_0.m_nCollisionGroup = 4;
    v20 = EntityIDFromBaseEntity(pEntity);
    x = vecAbsStart->x;
    y = vecAbsStart->y;
    traceFilter_0.m_nEntityIdToIgnore = v20;
    v23 = vecAbsEnd->x;
    v24 = vecAbsEnd->y;
    z = vecAbsStart->z;
    memset(&traceFilter.m_attr.m_nInteractsAs + 4, 0, 40);
    v26 = vecAbsEnd->z;
    *&traceFilter.m_attr.m_nInteractsExclude = v23 - x;
    *(&traceFilter.m_attr.m_nInteractsExclude + 1) = v24 - y;
    *&traceFilter.m_attr.m_nInteractsAs = v26 - z;
    BYTE4(traceFilter.m_pRootParent) = 1;
    traceFilter._vptr_CTraceFilter = __PAIR64__(LODWORD(y), LODWORD(x));
    traceFilter.m_attr.m_nInteractsWith = LODWORD(z);
    BYTE5(traceFilter.m_pRootParent) = (((*&traceFilter.m_attr.m_nInteractsExclude
                                        * *&traceFilter.m_attr.m_nInteractsExclude)
                                       + (*(&traceFilter.m_attr.m_nInteractsExclude + 1)
                                        * *(&traceFilter.m_attr.m_nInteractsExclude + 1)))
                                      + (*&traceFilter.m_attr.m_nInteractsAs * *&traceFilter.m_attr.m_nInteractsAs)) != 0.0;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &traceFilter, &traceFilter_0, ptr);
  }
}


// UTIL_TraceEntity  (line 610, @0x00000000020e4ac0, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CTraceFilter, CTraceFilterEntity, CTraceFilterEntityIgnoreOther, CTraceFilterSimple, GetEHandle, GetEntryIndex, GetSerialNumber, HierarchyIDFromBaseEntity, Init, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, SetInteractsExclude, SetInteractsWith
// calls: EntityIDFromBaseEntity, CBaseEntity::GetRootMoveParent, CBaseEntity::VPhysicsWorld, CGamePhysicsQueryInterface::SweepCollideable
// callers: CBaseCombatCharacter::Weapon_FindUsable, CBasePlayer::PostThinkVPhysics, CLagCompensationManager::RestoreEntityFromRecords, UTIL_DropToFloor
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceEntity(
        CBaseEntity *pEntity,
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        uint64 mask,
        const CBaseEntity *pIgnore,
        int nCollisionGroup,
        trace_t *ptr)
{
  uint32 v12; // eax
  CCollisionProperty *m_pCollision; // rax
  IVPhysics2World *v14; // rax
  __int64 v15; // rsi
  CEntityIdentity *m_pEntity; // rdx
  __int16 v17; // si
  CCollisionProperty *v18; // rax
  char nCollisionGroupa; // [rsp+Ch] [rbp-A4h]
  CTraceFilterEntityIgnoreOther traceFilter; // [rsp+20h] [rbp-90h] BYREF

  traceFilter._vptr_CTraceFilter = off_3FE6970;
  memset(&traceFilter.m_attr, 0, 24);
  traceFilter.m_attr.m_nEntityIdToIgnore = -1;
  traceFilter.m_attr.m_nHierarchyId = 0;
  traceFilter.m_attr.m_nCollisionGroup = 0;
  *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter.m_attr.m_nObjectSetMask = 7;
  if ( pEntity != 0 )
  {
    nCollisionGroupa = nCollisionGroup;
    v12 = EntityIDFromBaseEntity(pEntity);
    LOBYTE(nCollisionGroup) = nCollisionGroupa;
    traceFilter.m_attr.m_nEntityIdToIgnore = v12;
    m_pCollision = pEntity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    traceFilter.m_attr.m_nHierarchyId = m_pCollision;
  }
  traceFilter.m_attr.m_nCollisionGroup = nCollisionGroup;
  traceFilter.m_pPassEnt = pEntity;
  traceFilter.m_pExtraShouldHitCheckFunction = 0;
  traceFilter._vptr_CTraceFilter = off_3FFCA30;
  traceFilter.m_pEntity = pEntity;
  traceFilter.m_pRootParent = CBaseEntity::GetRootMoveParent(pEntity);
  v14 = CBaseEntity::VPhysicsWorld(pEntity);
  v15 = 0xFFFFFFFFLL;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v17 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
  }
  traceFilter.m_checkHash = (*(*v14 + 400LL))(v14, v15);
  v18 = pEntity->m_pCollision;
  if ( v18 != 0 )
    traceFilter.m_attr.m_nInteractsExclude = v18->m_collisionAttribute.m_nInteractsExclude.m_Value;
  else
    traceFilter.m_attr.m_nInteractsExclude = 0;
  traceFilter.m_attr.m_nInteractsWith = mask;
  traceFilter.m_pIgnoreOther = pIgnore;
  traceFilter._vptr_CTraceFilter = off_3FFCA70;
  CGamePhysicsQueryInterface::SweepCollideable(g_pPhysicsQuery, pEntity, vecAbsStart, vecAbsEnd, &traceFilter, ptr);
}


// UTIL_TraceEntity  (line 628, @0x00000000020e4c80, libserver.so)
// calls: CGamePhysicsQueryInterface::SweepCollideable
// callers: CPhysicsPushedEntities::IsPushedPositionValid, CPhysicsPushedEntities::SpeculativelyCheckPush
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceEntity(
        CBaseEntity *pEntity,
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        CTraceFilter *const traceFilter,
        trace_t *ptr)
{
  CGamePhysicsQueryInterface::SweepCollideable(g_pPhysicsQuery, pEntity, vecAbsStart, vecAbsEnd, traceFilter, ptr);
}


// UTIL_TraceLineFilterEntity  (line 647, @0x00000000020e4ca0, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CTraceFilter, CTraceFilterEntity, CTraceFilterSimple, GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, HierarchyIDFromBaseEntity, Init, LengthSqr, Ray_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, SetInteractsExclude, SetInteractsWith, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: EntityIDFromBaseEntity, CBaseEntity::GetRootMoveParent, CBaseEntity::VPhysicsWorld, CGamePhysicsQueryInterface::TraceRay
// callers: CBaseEntity::PhysicsStepRecheckGround
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceLineFilterEntity(
        CBaseEntity *pEntity,
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        uint64 mask,
        int nCollisionGroup,
        trace_t *ptr)
{
  uint32 v11; // eax
  CCollisionProperty *m_pCollision; // rax
  IVPhysics2World *v13; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 x_low; // rsi
  __int64 (__fastcall *v16)(IVPhysics2World *, __int64); // r8
  __int16 v17; // si
  CCollisionProperty *v18; // rax
  float x; // xmm6_4
  float y; // xmm5_4
  float v21; // xmm3_4
  float m_fValue; // xmm1_4
  float z; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  char nCollisionGroupa; // [rsp+Ch] [rbp-E4h]
  Ray_t ray; // [rsp+10h] [rbp-E0h] BYREF
  CTraceFilterEntity traceFilter; // [rsp+60h] [rbp-90h] BYREF

  traceFilter._vptr_CTraceFilter = off_3FE6970;
  traceFilter.m_attr.m_nHierarchyId = 0;
  memset(&traceFilter.m_attr, 0, 24);
  traceFilter.m_attr.m_nEntityIdToIgnore = -1;
  traceFilter.m_attr.m_nCollisionGroup = 0;
  *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter.m_attr.m_nObjectSetMask = 7;
  if ( pEntity != 0 )
  {
    nCollisionGroupa = nCollisionGroup;
    v11 = EntityIDFromBaseEntity(pEntity);
    LOBYTE(nCollisionGroup) = nCollisionGroupa;
    traceFilter.m_attr.m_nEntityIdToIgnore = v11;
    m_pCollision = pEntity->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    traceFilter.m_attr.m_nHierarchyId = m_pCollision;
  }
  traceFilter.m_attr.m_nCollisionGroup = nCollisionGroup;
  traceFilter.m_pPassEnt = pEntity;
  traceFilter.m_pExtraShouldHitCheckFunction = 0;
  traceFilter._vptr_CTraceFilter = off_3FFCA30;
  traceFilter.m_pEntity = pEntity;
  traceFilter.m_pRootParent = CBaseEntity::GetRootMoveParent(pEntity);
  v13 = CBaseEntity::VPhysicsWorld(pEntity);
  m_pEntity = pEntity->m_pEntity;
  x_low = 0xFFFFFFFFLL;
  v16 = *(*v13 + 400LL);
  if ( m_pEntity != 0 )
  {
    v17 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(ray.m_Start.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
    x_low = LODWORD(ray.m_Start.x);
  }
  traceFilter.m_checkHash = v16(v13, x_low);
  v18 = pEntity->m_pCollision;
  if ( v18 != 0 )
    traceFilter.m_attr.m_nInteractsExclude = v18->m_collisionAttribute.m_nInteractsExclude.m_Value;
  else
    traceFilter.m_attr.m_nInteractsExclude = 0;
  x = vecAbsStart->x;
  traceFilter.m_attr.m_nInteractsWith = mask;
  y = vecAbsStart->y;
  v21 = vecAbsEnd->y;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  z = vecAbsStart->z;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = m_fValue;
  v24 = vecAbsEnd->x;
  v25 = vecAbsEnd->z;
  ray.m_Delta.y = v21 - y;
  ray.m_Delta.x = v24 - x;
  ray.m_Delta.z = v25 - z;
  ray.m_IsRay = 1;
  ray.m_Start.x = x;
  ray.m_Start.y = y;
  ray.m_Start.z = z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, ptr);
}


// UTIL_ClipTraceToPlayers  (line 654, @0x00000000020bd240, libserver.so)  // inlines: CGameTrace, DistanceToRay, DotProduct, FastSqrt, Init, Length, LengthSqr, NormalizeInPlace, Ray_t, RnCollisionAttr_t, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CGameTrace::Init, UTIL_PlayerByIndex, VectorNormalize, CGamePhysicsQueryInterface::ClipRayToEntity
// globals: g_pPhysicsQuery
void __fastcall UTIL_ClipTraceToPlayers(
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        uint64 mask,
        CTraceFilter *pFilter,
        trace_t *tr)
{
  float fraction; // xmm5_4
  CEntityIndex v10; // ebx
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  CBasePlayer *v17; // rax
  CBaseEntity *v18; // r14
  double v19; // xmm0_8
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  vec_t v24; // xmm10_4
  float v25; // xmm4_4
  vec_t v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  uint8 type; // al
  vec_t v35; // xmm1_4
  uint8 signbits; // al
  vec_t v37; // xmm1_4
  vec_t v38; // xmm1_4
  __int16 v39; // ax
  vec_t v40; // xmm1_4
  uint64 contents; // rax
  vec_t v42; // xmm1_4
  float dist; // xmm1_4
  const CPhysSurfaceProperties *m_pSurfaceProperties; // rax
  CBaseEntity *m_pEnt; // rax
  vec_t v46; // xmm1_4
  const CHitBox *m_pHitbox; // rax
  vec_t v48; // xmm1_4
  IPhysicsBody *m_hBody; // rax
  vec_t v50; // xmm1_4
  IPhysicsShape *m_hShape; // rax
  float flSmallestFraction; // [rsp+24h] [rbp-17Ch]
  float v56; // [rsp+38h] [rbp-168h]
  float v57; // [rsp+3Ch] [rbp-164h]
  float v58; // [rsp+40h] [rbp-160h]
  float v59; // [rsp+44h] [rbp-15Ch]
  float v60; // [rsp+48h] [rbp-158h]
  float v61; // [rsp+4Ch] [rbp-154h]
  Vector v62; // [rsp+60h] [rbp-140h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-130h] BYREF
  trace_t playerTrace; // [rsp+C0h] [rbp-E0h] BYREF

  memset(&playerTrace.m_ShapeAttributes, 0, 31);
  playerTrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&playerTrace);
  fraction = tr->fraction;
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  flSmallestFraction = fraction;
  if ( pFilter != 0 )
    pFilter->m_attr.m_nInteractsWith |= mask;
  v10.m_Data = 1;
  x = vecAbsStart->x;
  ray.m_IsRay = 1;
  y = vecAbsStart->y;
  ray.m_flRadius = 0.0;
  z = vecAbsStart->z;
  ray.m_Extents.z = 0.0;
  v14 = vecAbsEnd->x;
  ray.m_Start.x = x;
  v15 = vecAbsEnd->y;
  ray.m_Start.y = y;
  v16 = vecAbsEnd->z;
  ray.m_Extents.y = 0.0;
  ray.m_Extents.x = 0.0;
  ray.m_Delta.x = v14 - x;
  ray.m_Delta.y = v15 - y;
  ray.m_Delta.z = v16 - z;
  ray.m_StartOffset.z = 0.0;
  ray.m_StartOffset.y = 0.0;
  ray.m_Start.z = z;
  ray.m_StartOffset.x = 0.0;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  if ( gpGlobals->maxClients > 0 )
  {
    while ( 1 )
    {
      v17 = UTIL_PlayerByIndex(v10);
      v18 = v17;
      if ( v17 != 0
        && (*(v17->_vptr_IHandleEntity + 139))(v17) != 0
        && (pFilter == 0 || (*(pFilter->_vptr_CTraceFilter + 2))(pFilter, v18) != 0) )
      {
        break;
      }
LABEL_14:
      if ( gpGlobals->maxClients < ++v10.m_Data )
        return;
    }
    v19 = (*(v18->_vptr_IHandleEntity + 62))(v18);
    v20 = vecAbsStart->z;
    v21 = *&v19;
    v60 = v22;
    v56 = *&v19;
    v23 = vecAbsStart->x;
    v58 = *(&v19 + 1);
    *&v19 = vecAbsStart->y;
    v24 = vecAbsEnd->z - v20;
    v61 = v22 - v20;
    v25 = vecAbsEnd->x;
    v26 = vecAbsEnd->y - *&v19;
    v62.z = v24;
    v57 = v21 - v23;
    v59 = *(&v19 + 1) - *&v19;
    v62.y = v26;
    v62.x = v25 - v23;
    v27 = VectorNormalize(&v62);
    v28 = ((v57 * v62.x) + (v59 * v62.y)) + (v61 * v62.z);
    if ( v28 < 0.0 )
    {
      v29 = v56 - vecAbsStart->x;
      v30 = v58 - vecAbsStart->y;
      v31 = v60 - vecAbsStart->z;
    }
    else
    {
      if ( v28 <= v27 )
      {
        v32 = fsqrt(
                (((v56 - ((v62.x * v28) + vecAbsStart->x)) * (v56 - ((v62.x * v28) + vecAbsStart->x)))
               + ((v58 - ((v62.y * v28) + vecAbsStart->y)) * (v58 - ((v62.y * v28) + vecAbsStart->y))))
              + ((v60 - ((v28 * v62.z) + vecAbsStart->z)) * (v60 - ((v28 * v62.z) + vecAbsStart->z))));
        goto LABEL_12;
      }
      v29 = v56 - vecAbsEnd->x;
      v30 = v58 - vecAbsEnd->y;
      v31 = v60 - vecAbsEnd->z;
    }
    v32 = -fsqrt(((v29 * v29) + (v30 * v30)) + (v31 * v31));
LABEL_12:
    if ( v32 >= 0.0 && v32 <= 60.0 )
    {
      CGamePhysicsQueryInterface::ClipRayToEntity(g_pPhysicsQuery, &ray, mask | 2, v18, &playerTrace);
      v33 = playerTrace.fraction;
      if ( flSmallestFraction > playerTrace.fraction )
      {
        type = playerTrace.plane.type;
        tr->startpos.x = playerTrace.startpos.x;
        v35 = playerTrace.startpos.y;
        tr->plane.type = type;
        signbits = playerTrace.plane.signbits;
        tr->startpos.y = v35;
        v37 = playerTrace.startpos.z;
        tr->fraction = v33;
        tr->startpos.z = v37;
        v38 = playerTrace.endpos.x;
        tr->plane.signbits = signbits;
        v39 = *playerTrace.plane.pad;
        tr->endpos.x = v38;
        tr->endpos.y = playerTrace.endpos.y;
        v40 = playerTrace.endpos.z;
        *tr->plane.pad = v39;
        contents = playerTrace.contents;
        tr->endpos.z = v40;
        tr->plane.normal.x = playerTrace.plane.normal.x;
        v42 = playerTrace.plane.normal.y;
        tr->contents = contents;
        LOBYTE(contents) = playerTrace.startsolid;
        tr->plane.normal.y = v42;
        tr->plane.normal.z = playerTrace.plane.normal.z;
        dist = playerTrace.plane.dist;
        tr->startsolid = contents;
        m_pSurfaceProperties = playerTrace.m_pSurfaceProperties;
        tr->plane.dist = dist;
        tr->m_pSurfaceProperties = m_pSurfaceProperties;
        m_pEnt = playerTrace.m_pEnt;
        tr->boneLocalPos.x = playerTrace.boneLocalPos.x;
        v46 = playerTrace.boneLocalPos.y;
        tr->m_pEnt = m_pEnt;
        m_pHitbox = playerTrace.m_pHitbox;
        tr->boneLocalPos.y = v46;
        tr->boneLocalPos.z = playerTrace.boneLocalPos.z;
        v48 = playerTrace.boneLocalNormal.x;
        tr->m_pHitbox = m_pHitbox;
        m_hBody = playerTrace.m_hBody;
        tr->boneLocalNormal.x = v48;
        tr->boneLocalNormal.y = playerTrace.boneLocalNormal.y;
        v50 = playerTrace.boneLocalNormal.z;
        tr->m_hBody = m_hBody;
        m_hShape = playerTrace.m_hShape;
        tr->boneLocalNormal.z = v50;
        tr->m_hShape = m_hShape;
        tr->m_ShapeAttributes = playerTrace.m_ShapeAttributes;
        tr->m_nFaceIndex = playerTrace.m_nFaceIndex;
        tr->hitboxBoneIndex = playerTrace.hitboxBoneIndex;
        tr->unused0 = playerTrace.unused0;
        flSmallestFraction = v33;
      }
    }
    goto LABEL_14;
  }
}


// UTIL_ParticleTracer  (line 708, @0x00000000020bdc20, libserver.so)  // inlines: CWeakHandle, Init
// calls: GetParticleSystemIndex, UTIL_Tracer
// callers: CBaseCombatWeapon::MakeTracer
// strings: "ParticleTracer"
void __fastcall UTIL_ParticleTracer(
        const char *pszTracerEffectName,
        const Vector *const vecStart,
        const Vector *const vecEnd,
        CEntityIndex iEntIndex,
        int iAttachment,
        bool bWhiz)
{
  const ResourceBindingBase_t *iParticleIndex; // [rsp+10h] [rbp-50h]
  HParticleSystemDefinition p_iParticleID; // [rsp+20h] [rbp-40h] BYREF

  GetParticleSystemIndex(pszTracerEffectName);
  p_iParticleID.m_pBinding = iParticleIndex;
  UTIL_Tracer(vecStart, vecEnd, iEntIndex, iAttachment, 0.0, bWhiz, "ParticleTracer", &p_iParticleID);
}


// UTIL_Tracer  (line 718, @0x00000000020bd880, libserver.so)  // inlines: CEffectData, CEntityHandle, CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, CWeakHandle, EnsureValidValue, EnsureValidValue<CEntityHandle>, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Normalized, Set, VectorSubtract, Zero, operator!=, operator-, operator=, operator=<CBaseEntity*>, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, operator=<float>, operator=<int>, operator|=<int>
// calls: CGameEntitySystem::GetBaseEntity, VectorNormalize, VectorAngles, DispatchEffect
// callers: CBaseEntity::MakeTracer, UTIL_ParticleTracer, CEnvTracer::TracerThink, CEnvGunfire::ShootThink
// globals: g_pGameEntitySystem
void __fastcall UTIL_Tracer(
        const Vector *const vecStart,
        const Vector *const vecEnd,
        CEntityIndex iEntIndex,
        int iAttachment,
        float flVelocity,
        bool bWhiz,
        const char *pCustomTracerName,
        HParticleSystemDefinition *p_iParticleID)
{
  float x; // xmm2_4
  float y; // xmm6_4
  float z; // xmm4_4
  float v14; // xmm3_4
  bool v15; // zf
  float v16; // xmm5_4
  vec_t v17; // xmm1_4
  CBaseEntity *BaseEntity; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v20; // cx
  float v21; // [rsp-10h] [rbp-D4h]
  float v22; // [rsp-Ch] [rbp-D0h]
  float v24; // [rsp-4h] [rbp-C8h]
  float flVelocitya; // [rsp+0h] [rbp-C4h]
  float v26; // [rsp+4h] [rbp-C0h]
  float v27; // [rsp+8h] [rbp-BCh]
  Vector v28; // [rsp+Ch] [rbp-B8h] BYREF
  __int64 (__fastcall **v29)(CEffectData *__hidden); // [rsp+1Ch] [rbp-A8h] BYREF
  CEffectData data; // [rsp+24h] [rbp-A0h] BYREF

  v29 = &off_3FB64D0;
  memset(&data, 0, 48);
  data.m_vAngles.m_Value.y = NAN;
  data.m_vAngles.m_Value.z = NAN;
  data.m_hEntity.m_Value.m_Index = 1065353216;
  memset(&data.m_hOtherEntity, 0, 31);
  *&data.m_nMaterial.m_Value = 0;
  x = vecStart->x;
  *&data.m_nColor.m_Value = 0;
  y = vecStart->y;
  if ( x == 0.0 )
  {
    z = vecStart->z;
    if ( y == 0.0 && z == 0.0 )
    {
      v14 = vecEnd->x;
      v15 = vecEnd->x == 0.0;
      goto LABEL_5;
    }
  }
  else
  {
    z = vecStart->z;
  }
  v14 = vecEnd->x;
  data.m_vOrigin.m_Value.y = x;
  data.m_vOrigin.m_Value.z = y;
  v15 = v14 == 0.0;
  data.m_vStart.m_Value.x = z;
LABEL_5:
  if ( !v15 )
  {
    v17 = vecEnd->y;
    v16 = vecEnd->z;
    goto LABEL_31;
  }
  if ( vecEnd->y != 0.0 )
  {
    v17 = vecEnd->y;
    v16 = vecEnd->z;
    goto LABEL_31;
  }
  v16 = vecEnd->z;
  v17 = vecEnd->y;
  if ( v16 != 0.0 )
  {
LABEL_31:
    data._vptr_CEffectData = __PAIR64__(LODWORD(v17), LODWORD(v14));
    data.m_vOrigin.m_Value.x = v16;
  }
  v21 = v16;
  v22 = z;
  v24 = y;
  flVelocitya = v14;
  v26 = x;
  v27 = v17;
  BaseEntity = CGameEntitySystem::GetBaseEntity(g_pGameEntitySystem, iEntIndex);
  if ( BaseEntity != 0 )
  {
    m_pEntity = BaseEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF) != 0xFFFFFFFF )
        LODWORD(data.m_vAngles.m_Value.y) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                          | v20 & 0x7FFF;
    }
  }
  if ( flVelocity != 1.0 )
    *&data.m_hEntity.m_Value.m_Index = flVelocity;
  v28.x = flVelocitya - v26;
  v28.y = v27 - v24;
  v28.z = v21 - v22;
  VectorNormalize(&v28);
  VectorAngles(&v28, &data.m_vNormal.m_Value.y);
  if ( bWhiz && BYTE1(data.m_nDamageType.m_Value) != (BYTE1(data.m_nDamageType.m_Value) | 1) )
    BYTE1(data.m_nDamageType.m_Value) |= 1u;
  if ( iAttachment != -1 )
  {
    if ( BYTE1(data.m_nDamageType.m_Value) != (BYTE1(data.m_nDamageType.m_Value) | 2) )
      BYTE1(data.m_nDamageType.m_Value) |= 2u;
    if ( iAttachment != BYTE2(data.m_nDamageType.m_Value) )
      BYTE2(data.m_nDamageType.m_Value) = iAttachment;
  }
  if ( p_iParticleID->m_pBinding != *&data.m_flRadius.m_Value )
  {
    *&data.m_flRadius.m_Value = p_iParticleID->m_pBinding;
    if ( pCustomTracerName != 0 )
      goto LABEL_26;
LABEL_33:
    DispatchEffect("Tracer", &v29);
    return;
  }
  if ( pCustomTracerName == 0 )
    goto LABEL_33;
LABEL_26:
  DispatchEffect(pCustomTracerName, &v29);
}


// UTIL_BloodDrips  (line 761, @0x00000000020dcad0, libserver.so)
// calls: UTIL_ShouldShowBlood, UTIL_BloodImpact, ITempEntsSystem::Sparks, UTIL_Smoke
// callers: SpawnBlood, CBaseEntity::TraceAttack, CBlood::InputEmitBlood
void __fastcall UTIL_BloodDrips(const Vector *const origin, const Vector *const direction, int color, int amount)
{
  int v8; // ecx
  float v9; // xmm2_4

  if ( UTIL_ShouldShowBlood(color) && color != -1 && amount != 0 )
  {
    if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
      amount *= 5;
    if ( color == 3 )
    {
      ITempEntsSystem::Sparks(g_pEffects, origin, 1, 1, 0);
      if ( (*(*random_valve + 8LL))(random_valve, 0.0, 2.0) >= 1.0 )
      {
        (*(*random_valve + 16LL))(random_valve, 10, 15);
        UTIL_Smoke(origin, 10.0, v9);
      }
    }
    else
    {
      v8 = 255;
      if ( amount <= 255 )
        v8 = amount;
      UTIL_BloodImpact(origin, direction, color, v8);
    }
  }
}


// UTIL_IsLowViolence  (line 801, @0x00000000020bdc90, libserver.so)  // inlines: GetBool, GetInt
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CGib::BounceGibTouch, CRagdollLowViolenceManager::ActiveSpawnGroupChanged
// strings: "violence_agibs", "violence_ablood", "violence_hgibs", "violence_hblood"
// globals: `guard variable for'UTIL_IsLowViolence(void)::violence_hblood, `guard variable for'UTIL_IsLowViolence(void)::violence_hgibs, `guard variable for'UTIL_IsLowViolence(void)::violence_ablood, `guard variable for'UTIL_IsLowViolence(void)::violence_agibs, UTIL_IsLowViolence(void)::violence_agibs, UTIL_IsLowViolence(void)::violence_ablood, UTIL_IsLowViolence(void)::violence_hgibs, UTIL_IsLowViolence(void)::violence_hblood
bool __cdecl UTIL_IsLowViolence()
{
  if ( `guard variable for'UTIL_IsLowViolence(void)::violence_hblood == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_IsLowViolence(void)::violence_hblood) != 0 )
  {
    ConVarRef::ConVarRef(&UTIL_IsLowViolence(void)::violence_hblood, "violence_hblood");
    __cxa_guard_release(&`guard variable for'UTIL_IsLowViolence(void)::violence_hblood);
  }
  if ( `guard variable for'UTIL_IsLowViolence(void)::violence_hgibs == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_IsLowViolence(void)::violence_hgibs) != 0 )
  {
    ConVarRef::ConVarRef(&UTIL_IsLowViolence(void)::violence_hgibs, "violence_hgibs");
    __cxa_guard_release(&`guard variable for'UTIL_IsLowViolence(void)::violence_hgibs);
  }
  if ( `guard variable for'UTIL_IsLowViolence(void)::violence_ablood == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_IsLowViolence(void)::violence_ablood) != 0 )
  {
    ConVarRef::ConVarRef(&UTIL_IsLowViolence(void)::violence_ablood, "violence_ablood");
    __cxa_guard_release(&`guard variable for'UTIL_IsLowViolence(void)::violence_ablood);
  }
  if ( `guard variable for'UTIL_IsLowViolence(void)::violence_agibs == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_IsLowViolence(void)::violence_agibs) != 0 )
  {
    ConVarRef::ConVarRef(&UTIL_IsLowViolence(void)::violence_agibs, "violence_agibs");
    __cxa_guard_release(&`guard variable for'UTIL_IsLowViolence(void)::violence_agibs);
  }
  return UTIL_IsLowViolence(void)::violence_hblood.m_pConVarState->m_Value.m_nValue == 0
      || UTIL_IsLowViolence(void)::violence_ablood.m_pConVarState->m_Value.m_nValue == 0
      || UTIL_IsLowViolence(void)::violence_hgibs.m_pConVarState->m_Value.m_nValue == 0
      || UTIL_IsLowViolence(void)::violence_agibs.m_pConVarState->m_Value.m_nValue == 0
      || (*(*engine + 336LL))(engine);
}


// UTIL_ShouldShowBlood  (line 817, @0x00000000020bde80, libserver.so)  // inlines: GetBool, GetInt
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: UTIL_BloodDecalTrace, UTIL_BloodDrips, UTIL_BloodStream
// strings: "violence_ablood", "violence_hblood"
// globals: `guard variable for'UTIL_ShouldShowBlood(int)::violence_hblood, `guard variable for'UTIL_ShouldShowBlood(int)::violence_ablood, UTIL_ShouldShowBlood(int)::violence_ablood, UTIL_ShouldShowBlood(int)::violence_hblood
bool __fastcall UTIL_ShouldShowBlood(int color)
{
  if ( `guard variable for'UTIL_ShouldShowBlood(int)::violence_hblood == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_ShouldShowBlood(int)::violence_hblood) != 0 )
  {
    ConVarRef::ConVarRef(&UTIL_ShouldShowBlood(int)::violence_hblood, "violence_hblood");
    __cxa_guard_release(&`guard variable for'UTIL_ShouldShowBlood(int)::violence_hblood);
  }
  if ( `guard variable for'UTIL_ShouldShowBlood(int)::violence_ablood == 0
    && __cxa_guard_acquire(&`guard variable for'UTIL_ShouldShowBlood(int)::violence_ablood) != 0 )
  {
    ConVarRef::ConVarRef(&UTIL_ShouldShowBlood(int)::violence_ablood, "violence_ablood");
    __cxa_guard_release(&`guard variable for'UTIL_ShouldShowBlood(int)::violence_ablood);
  }
  if ( color == -1 )
    return 0;
  if ( color != 0 )
    return UTIL_ShouldShowBlood(int)::violence_ablood.m_pConVarState->m_Value.m_nValue != 0;
  return UTIL_ShouldShowBlood(int)::violence_hblood.m_pConVarState->m_Value.m_nValue != 0;
}


// UTIL_DecalTrace  (line 842, @0x000000000209daf0, libserver.so)
// callers: UTIL_DecalTrace, UTIL_BloodDecalTrace
void __fastcall UTIL_DecalTrace(trace_t *pTrace, const char *decalName)
{
  CBaseEntity *m_pEnt; // rax

  m_pEnt = pTrace->m_pEnt;
  if ( m_pEnt != 0 )
    (*(m_pEnt->_vptr_IHandleEntity + 96))(pTrace->m_pEnt, pTrace, decalName);
}


// UTIL_DecalTrace  (line 842, @0x00000000020bdf90, libserver.so)
// calls: UTIL_DecalTrace
// callers: CBreakableProp::HandleFirstCollisionInteractions, CBeam::BeamDamage, CEnvExplosion::InputExplode, CRagdollProp::HandleFirstCollisionInteractions
void __fastcall UTIL_DecalTrace(trace_t *pTrace, const char *decalName)
{
  if ( pTrace->fraction != 1.0 )
    UTIL_DecalTrace(pTrace, decalName);
}


// UTIL_BloodDecalTrace  (line 854, @0x00000000020bdfc0, libserver.so)  // inlines: UTIL_DecalTrace
// calls: UTIL_ShouldShowBlood, UTIL_DecalTrace
// callers: CBaseEntity::TraceBleed, CBlood::InputEmitBlood, CGib::BounceGibTouch, CGib::StickyGibTouch, CBloodSplat::Think, CRagdollProp::HandleFirstCollisionInteractions
// strings: "YellowBlood", "GreenBlood"
void __fastcall UTIL_BloodDecalTrace(trace_t *pTrace, int bloodColor)
{
  const char *v4; // rsi

  if ( UTIL_ShouldShowBlood(bloodColor) )
  {
    if ( bloodColor == 0 )
    {
      if ( pTrace->fraction == 1.0 )
        return;
      v4 = "Blood";
LABEL_8:
      UTIL_DecalTrace(pTrace, v4);
      return;
    }
    if ( bloodColor == 4 )
    {
      if ( pTrace->fraction != 1.0 )
      {
        v4 = "GreenBlood";
        goto LABEL_8;
      }
    }
    else if ( pTrace->fraction != 1.0 )
    {
      v4 = "YellowBlood";
      goto LABEL_8;
    }
  }
}


// UTIL_BloodImpact  (line 891, @0x00000000020be050, libserver.so)  // inlines: CEffectData, CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, CWeakHandle, EnsureValidValue, EnsureValidValue<CEntityHandle>, Init, Set, Zero, operator!=, operator=, operator=<float>, operator=<unsigned char>
// calls: DispatchEffect
// callers: UTIL_BloodDrips
// strings: "bloodimpact"
void __fastcall UTIL_BloodImpact(const Vector *const pos, const Vector *const dir, int color, int amount)
{
  float x; // xmm1_4
  float y; // xmm2_4
  vec_t v6; // xmm1_4
  float v7; // xmm2_4
  bool v8; // zf
  float v9; // xmm0_4
  bool v10; // zf
  vec_t z; // xmm0_4
  __int64 (__fastcall **v12)(CEffectData *__hidden); // [rsp-8h] [rbp-78h] BYREF
  CEffectData data; // [rsp+0h] [rbp-70h] BYREF

  x = pos->x;
  y = pos->y;
  v12 = &off_3FB64D0;
  memset(&data, 0, 48);
  data.m_vAngles.m_Value.y = NAN;
  data.m_vAngles.m_Value.z = NAN;
  data.m_hEntity.m_Value.m_Index = 1065353216;
  memset(&data.m_hOtherEntity, 0, 31);
  *&data.m_nMaterial.m_Value = 0;
  *&data.m_nColor.m_Value = 0;
  if ( x == 0.0 && y == 0.0 && pos->z == 0.0 )
  {
    v6 = dir->x;
    v7 = dir->y;
    v8 = dir->x == 0.0;
  }
  else
  {
    data._vptr_CEffectData = __PAIR64__(LODWORD(y), LODWORD(x));
    v7 = dir->y;
    data.m_vOrigin.m_Value.x = pos->z;
    v6 = dir->x;
    v8 = dir->x == 0.0;
  }
  if ( v8 && v7 == 0.0 && dir->z == 0.0 )
  {
    v9 = amount;
    v10 = amount == 1.0;
  }
  else
  {
    z = dir->z;
    data.m_vStart.m_Value.y = v6;
    data.m_vStart.m_Value.z = v7;
    data.m_vNormal.m_Value.x = z;
    v9 = amount;
    v10 = amount == 1.0;
  }
  if ( !v10 )
    *&data.m_hEntity.m_Value.m_Index = v9;
  if ( color != 0 )
    LOBYTE(data.m_nDamageType.m_Value) = color;
  DispatchEffect("bloodimpact", &v12);
}


// UTIL_IsSpaceEmpty  (line 903, @0x00000000020e4f40, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CTraceFilter, CTraceFilterSimple, EnableInteractsWith, HierarchyIDFromBaseEntity, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-
// calls: CGameTrace::Init, EntityIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay
// globals: g_pPhysicsQuery
bool __fastcall UTIL_IsSpaceEmpty(CBaseEntity *pMainEnt, const Vector *const vMin, const Vector *const vMax)
{
  uint64 v3; // r13
  float x; // xmm9_4
  float y; // xmm8_4
  float z; // xmm7_4
  float v8; // xmm3_4
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm8_4
  float v12; // xmm2_4
  float v13; // xmm9_4
  float v14; // xmm3_4
  __int64 v15; // rax
  float v16; // xmm6_4
  float v17; // xmm2_4
  vec_t v18; // xmm4_4
  vec_t v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  CCollisionProperty *m_pCollision; // rax
  float v24; // [rsp+8h] [rbp-178h]
  float v25; // [rsp+8h] [rbp-178h]
  float v26; // [rsp+10h] [rbp-170h]
  float v27; // [rsp+14h] [rbp-16Ch]
  float v28; // [rsp+18h] [rbp-168h]
  float v29; // [rsp+1Ch] [rbp-164h]
  float v30; // [rsp+1Ch] [rbp-164h]
  CTraceFilter pTraceFilter; // [rsp+20h] [rbp-160h] BYREF
  CBaseEntity *v32; // [rsp+50h] [rbp-130h]
  __int64 v33; // [rsp+58h] [rbp-128h]
  Ray_t ray; // [rsp+60h] [rbp-120h] BYREF
  trace_t trace; // [rsp+B0h] [rbp-D0h] BYREF

  v3 = 552961;
  memset(&trace.m_ShapeAttributes, 0, 31);
  x = vMin->x;
  y = vMin->y;
  z = vMin->z;
  v8 = vMax->x;
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  v24 = (v8 - x) * 0.5;
  v26 = (vMax->y - y) * 0.5;
  v28 = (vMax->z - z) * 0.5;
  v27 = y + v26;
  v29 = z + v28;
  CGameTrace::Init(&trace);
  v9 = v29;
  v10 = v28;
  v11 = y + v26;
  v12 = v26;
  v13 = x + v24;
  v14 = v24;
  if ( pMainEnt != 0 )
  {
    v25 = v29;
    v30 = v14;
    v15 = (*(pMainEnt->_vptr_IHandleEntity + 123))(pMainEnt, 0.5);
    v9 = v25;
    v3 = v15;
    v11 = v27;
    v10 = v28;
    v12 = v26;
    v14 = v30;
  }
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_Delta.x = v13 - v13;
  ray.m_Delta.y = v11 - v11;
  ray.m_Delta.z = v9 - v9;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  memset(&pTraceFilter.m_attr, 0, 24);
  v16 = v12 + v12;
  pTraceFilter.m_attr.m_nCollisionGroup = 0;
  pTraceFilter.m_attr.m_nEntityIdToIgnore = -1;
  pTraceFilter.m_attr.m_nObjectSetMask = 7;
  v17 = (v12 - v12) * 0.5;
  v18 = (v14 + v14) * 0.5;
  v19 = (v10 + v10) * 0.5;
  ray.m_Extents.y = v16 * 0.5;
  ray.m_Extents.x = v18;
  ray.m_Extents.z = v19;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v20 = (v14 - v14) * 0.5;
  ray.m_Start.y = v11 + v17;
  v21 = (v10 - v10) * 0.5;
  pTraceFilter._vptr_CTraceFilter = off_3FE6970;
  ray.m_StartOffset.y = -v17;
  ray.m_StartOffset.x = -v20;
  ray.m_Start.x = v13 + v20;
  ray.m_Start.z = v9 + v21;
  ray.m_StartOffset.z = -v21;
  ray.m_IsRay = (((v18 * v18) + (ray.m_Extents.y * ray.m_Extents.y)) + (v19 * v19)) < 0.000001;
  pTraceFilter.m_attr.m_nHierarchyId = 0;
  *(&pTraceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&pTraceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  if ( pMainEnt != 0 )
  {
    pTraceFilter.m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(pMainEnt);
    m_pCollision = pMainEnt->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    pTraceFilter.m_attr.m_nHierarchyId = m_pCollision;
  }
  pTraceFilter._vptr_CTraceFilter = off_3FF7810;
  v32 = pMainEnt;
  pTraceFilter.m_attr.m_nCollisionGroup = 4;
  v33 = 0;
  pTraceFilter.m_attr.m_nInteractsWith = v3;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &pTraceFilter, &trace);
  return trace.fraction == 1.0 && !trace.startsolid;
}


// UTIL_IsSpaceEmpty  (line 916, @0x00000000020e5350, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay
// globals: g_pPhysicsQuery
bool __fastcall UTIL_IsSpaceEmpty(
        CBaseEntity *pMainEnt,
        const Vector *const vMin,
        const Vector *const vMax,
        uint64 mask,
        CTraceFilter *pFilter)
{
  float x; // xmm9_4
  float y; // xmm8_4
  float z; // xmm7_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  CGamePhysicsQueryInterface *v12; // rdi
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v19; // [rsp+8h] [rbp-138h]
  float v20; // [rsp+10h] [rbp-130h]
  float v21; // [rsp+18h] [rbp-128h]
  float v22; // [rsp+1Ch] [rbp-124h]
  Ray_t ray; // [rsp+20h] [rbp-120h] BYREF
  trace_t trace; // [rsp+70h] [rbp-D0h] BYREF

  x = vMin->x;
  memset(&trace.m_ShapeAttributes, 0, 31);
  y = vMin->y;
  z = vMin->z;
  v10 = vMax->x;
  v11 = vMax->y;
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  v19 = (v10 - x) * 0.5;
  v20 = (v11 - y) * 0.5;
  v21 = (vMax->z - z) * 0.5;
  v22 = z + v21;
  CGameTrace::Init(&trace);
  ray.m_Start.w = 0.0;
  v12 = g_pPhysicsQuery;
  v13 = v20;
  ray.m_Delta.w = 0.0;
  ray.m_Delta.z = v22 - v22;
  ray.m_Delta.x = (x + v19) - (x + v19);
  ray.m_Delta.y = (y + v20) - (y + v20);
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  v14 = v13 + v13;
  v15 = (v13 - v13) * 0.5;
  ray.m_Extents.y = v14 * 0.5;
  ray.m_Extents.x = (v19 + v19) * 0.5;
  ray.m_Extents.z = (v21 + v21) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.y = (y + v20) + v15;
  v16 = (v21 - v21) * 0.5;
  v17 = (v19 - v19) * 0.5;
  ray.m_StartOffset.y = -v15;
  ray.m_Start.z = v22 + v16;
  ray.m_StartOffset.z = -v16;
  ray.m_Start.x = (x + v19) + v17;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.x = -v17;
  pFilter->m_attr.m_nInteractsWith |= mask;
  CGamePhysicsQueryInterface::TraceRay(v12, &ray, pFilter, &trace);
  return trace.fraction == 1.0 && !trace.startsolid;
}


// UTIL_CanEntityFit  (line 929, @0x00000000020e6920, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CTraceFilter, CTraceFilterSimple, EnableInteractsWith, HierarchyIDFromBaseEntity, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGameTrace::Init, EntityIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay
// globals: g_pPhysicsQuery
bool __fastcall UTIL_CanEntityFit(
        CBaseEntity *pMainEnt,
        const Vector *const origin,
        const Vector *const vMins,
        const Vector *const vMaxs)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  uint64 v10; // rcx
  float x; // xmm6_4
  float y; // xmm5_4
  float v13; // xmm12_4
  float z; // xmm4_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm9_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  uint32 v23; // eax
  CCollisionProperty *m_pCollision; // rax
  uint64 mask; // [rsp+8h] [rbp-178h]
  CTraceFilter pTraceFilter; // [rsp+10h] [rbp-170h] BYREF
  CBaseEntity *v28; // [rsp+40h] [rbp-140h]
  __int64 v29; // [rsp+48h] [rbp-138h]
  Ray_t ray; // [rsp+50h] [rbp-130h] BYREF
  trace_t trace; // [rsp+A0h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  v10 = 552961;
  if ( pMainEnt != 0 )
    v10 = (*(pMainEnt->_vptr_IHandleEntity + 123))(pMainEnt, v9, v8, 552961);
  x = origin->x;
  y = origin->y;
  ray.m_Start.w = 0.0;
  v13 = vMaxs->x;
  ray.m_Delta.w = 0.0;
  z = origin->z;
  v15 = vMaxs->y;
  ray.m_StartOffset.w = 0.0;
  v16 = vMins->x;
  ray.m_Extents.w = 0.0;
  ray.m_Delta.x = x - x;
  ray.m_Delta.y = y - y;
  v17 = vMins->y;
  v18 = vMaxs->z;
  ray.m_flRadius = 0.0;
  ray.m_Delta.z = z - z;
  v19 = vMins->z;
  memset(&pTraceFilter.m_attr, 0, 24);
  ray.m_Extents.y = (v15 - v17) * 0.5;
  ray.m_Extents.z = (v18 - v19) * 0.5;
  ray.m_Extents.x = (v13 - v16) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  pTraceFilter._vptr_CTraceFilter = off_3FE6970;
  v20 = (v13 + v16) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v21 = (v15 + v17) * 0.5;
  v22 = (v18 + v19) * 0.5;
  ray.m_Start.x = x + v20;
  ray.m_StartOffset.x = -v20;
  ray.m_StartOffset.y = -v21;
  ray.m_StartOffset.z = -v22;
  ray.m_Start.y = y + v21;
  ray.m_Start.z = z + v22;
  pTraceFilter.m_attr.m_nEntityIdToIgnore = -1;
  pTraceFilter.m_attr.m_nHierarchyId = 0;
  pTraceFilter.m_attr.m_nCollisionGroup = 0;
  pTraceFilter.m_attr.m_nObjectSetMask = 7;
  *(&pTraceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&pTraceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  if ( pMainEnt != 0 )
  {
    mask = v10;
    v23 = EntityIDFromBaseEntity(pMainEnt);
    v10 = mask;
    pTraceFilter.m_attr.m_nEntityIdToIgnore = v23;
    m_pCollision = pMainEnt->m_pCollision;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    pTraceFilter.m_attr.m_nHierarchyId = m_pCollision;
  }
  pTraceFilter.m_attr.m_nInteractsWith = v10;
  pTraceFilter._vptr_CTraceFilter = off_3FF7810;
  v28 = pMainEnt;
  pTraceFilter.m_attr.m_nCollisionGroup = 4;
  v29 = 0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &pTraceFilter, &trace);
  return trace.fraction == 1.0 && !trace.startsolid;
}


// UTIL_CanEntityFit  (line 939, @0x00000000020e66c0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay
// globals: g_pPhysicsQuery
bool __fastcall UTIL_CanEntityFit(
        CBaseEntity *pMainEnt,
        const Vector *const origin,
        const Vector *const vMins,
        const Vector *const vMaxs,
        uint64 mask,
        CTraceFilter *pFilter)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v13; // xmm12_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm7_4
  CGamePhysicsQueryInterface *v19; // rdi
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  Ray_t ray; // [rsp+10h] [rbp-130h] BYREF
  trace_t trace; // [rsp+60h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  x = origin->x;
  y = origin->y;
  ray.m_Start.w = 0.0;
  z = origin->z;
  ray.m_Delta.w = 0.0;
  v13 = vMaxs->x;
  v14 = vMaxs->y;
  v15 = vMins->x;
  ray.m_Delta.x = x - x;
  v16 = vMaxs->z;
  ray.m_Delta.y = y - y;
  v17 = vMins->y;
  ray.m_Delta.z = z - z;
  v18 = vMins->z;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  v19 = g_pPhysicsQuery;
  ray.m_flRadius = 0.0;
  ray.m_Extents.y = (v14 - v17) * 0.5;
  ray.m_Extents.z = (v16 - v18) * 0.5;
  ray.m_Extents.x = (v13 - v15) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v20 = (v13 + v15) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  pFilter->m_attr.m_nInteractsWith |= mask;
  v21 = (v16 + v18) * 0.5;
  v22 = (v14 + v17) * 0.5;
  ray.m_Start.x = x + v20;
  ray.m_StartOffset.x = -v20;
  ray.m_StartOffset.y = -v22;
  ray.m_StartOffset.z = -v21;
  ray.m_Start.y = y + v22;
  ray.m_Start.z = z + v21;
  CGamePhysicsQueryInterface::TraceRay(v19, &ray, pFilter, &trace);
  return trace.fraction == 1.0 && !trace.startsolid;
}


// UTIL_StringToFloatArray  (line 949, @0x00000000020be1d0, libserver.so)  // inlines: V_strncpy<long unsigned int>, atof
// calls: _V_strncpy, strtod, __stack_chk_fail
// callers: ParseKeyvalue, UTIL_StringToVector
void __fastcall UTIL_StringToFloatArray(float *pVector, int count, const char *pString)
{
  char *v5; // rbx
  float *v6; // r14
  int v7; // r15d
  __m128d v8; // xmm0
  char v9; // al
  int v10; // r15d
  float *v11; // rax
  char tempString[128]; // [rsp+0h] [rbp-C0h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp-38h]

  v5 = tempString;
  v13 = __readfsqword(0x28u);
  _V_strncpy(tempString, pString, 128);
  if ( count > 0 )
  {
    v6 = pVector;
    v7 = 0;
    while ( 1 )
    {
      v8.m128d_f64[0] = strtod(v5, 0);
      *v6 = _mm_movedup_pd(v8).m128d_f64[0];
      v9 = *v5;
      if ( *v5 <= 32 )
      {
        while ( v9 != 0 )
        {
          v9 = *++v5;
          if ( *v5 > 32 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        while ( v9 > 32 )
          v9 = *++v5;
      }
      if ( v9 == 0 )
        break;
      ++v7;
      ++v5;
      ++v6;
      if ( v7 == count )
      {
        v10 = count + 1;
        goto LABEL_14;
      }
    }
    v10 = v7 + 1;
LABEL_14:
    if ( count > v10 )
    {
      v11 = &pVector[v10];
      do
        *v11++ = 0.0;
      while ( v11 != &pVector[(count - 1 - v10) + 1 + v10] );
    }
  }
}


// UTIL_StringToVector  (line 981, @0x00000000020be670, libserver.so)
// calls: UTIL_StringToFloatArray
// callers: CFogController::InputSetAngles, CRagdollProp::ApplyActivationRecord, CPhysicsProp::GetPropDataAngles, CShadowControl::InputSetAngles, UTIL_AxisStringToPointPoint, CDOTA_ActionRunner::PerformAction_Rotate, CDOTA_ActionRunner::SelectActionPoints, CDOTA_Tutorial::ParseLessonKeys, CParticleControlPointModifier::Init, CPetModifier::Init, createAssetModifierType<CParticleControlPointModifier>, createAssetModifierType<CPetModifier>
void __fastcall UTIL_StringToVector(float *pVector, const char *pString)
{
  UTIL_StringToFloatArray(pVector, 3, pString);
}


// UTIL_StringToColor  (line 986, @0x00000000020be690, libserver.so)  // inlines: SetAlpha, SetBlue, SetGreen, SetRed, V_strncpy<long unsigned int>, atoi
// calls: _V_strncpy, strtol, __stack_chk_fail
void __fastcall UTIL_StringToColor(Color *pColor, const char *pString)
{
  __int64 v2; // r15
  char *v4; // rbx
  int v5; // eax
  int v6; // edx
  char v7; // al
  int v8; // r15d
  __int64 v9; // rax
  int j; // [rsp+Ch] [rbp-D4h]
  int v[4]; // [rsp+10h] [rbp-D0h]
  char tempString[128]; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v13; // [rsp+A8h] [rbp-38h]

  v2 = 0;
  v4 = tempString;
  v13 = __readfsqword(0x28u);
  _V_strncpy(tempString, pString, 128);
  while ( 1 )
  {
    j = v2;
    v5 = strtol(v4, 0, 10);
    v6 = 255;
    if ( v5 < 0 )
      v5 = 0;
    if ( v5 <= 255 )
      v6 = v5;
    v[v2] = v6;
    v7 = *v4;
    if ( *v4 <= 32 )
    {
      while ( v7 != 0 )
      {
        v7 = *++v4;
        if ( *v4 > 32 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      while ( v7 > 32 )
        v7 = *++v4;
    }
    if ( v7 == 0 )
      break;
    ++v2;
    ++v4;
    if ( v2 == 4 )
      goto LABEL_15;
  }
  v8 = v2 + 1;
  if ( j != 3 )
  {
    while ( v8 != 3 )
    {
      v9 = v8++;
      v[v9] = 0;
      if ( v8 == 4 )
        goto LABEL_15;
    }
    v[3] = 255;
  }
LABEL_15:
  pColor->_color[0] = v[0];
  pColor->_color[1] = v[1];
  pColor->_color[2] = v[2];
  pColor->_color[3] = v[3];
}


// UTIL_DecodeICE  (line 1025, @0x00000000020be7e0, libserver.so)  // inlines: V_memcpy, memcpy
// calls: IceKey::IceKey, IceKey::set, IceKey::blockSize, IceKey::decrypt, memcpy, IceKey::~IceKey, _Unwind_Resume, __stack_chk_fail
// callers: ReadEncryptedKVFile, CWeaponScriptParser::ReadEncryptedKVFile, CEconItemSystem::DecryptItemFiles
void __fastcall UTIL_DecodeICE(unsigned __int8 *buffer, int size, const unsigned __int8 *key)
{
  unsigned __int8 *v4; // r13
  int v6; // r14d
  void *v7; // rsp
  unsigned __int8 *v8; // r12
  int v9; // ebx
  int v10; // edx
  size_t v11; // rdx
  int bytesLeft; // [rsp+10h] [rbp-60h] BYREF
  int v14; // [rsp+14h] [rbp-5Ch]
  IceKey *p_ice; // [rsp+18h] [rbp-58h]
  IceKey_0 ice; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v4 = buffer;
  v17 = __readfsqword(0x28u);
  bytesLeft = size;
  if ( key != 0 )
  {
    p_ice = &ice;
    IceKey::IceKey(&ice, 0);
    IceKey::set(&ice, key);
    v6 = IceKey::blockSize(&ice);
    v7 = alloca(((v6 * ((v6 + size - 1) / v6) + 31) & 0xFFFFFFF0) + 16LL);
    if ( v6 > size )
    {
      v11 = 0;
    }
    else
    {
      v8 = (&bytesLeft & 0xFFFFFFFFFFFFFFEFLL);
      v9 = size - v6;
      v14 = -v6;
      do
      {
        IceKey::decrypt(p_ice, v4, v8);
        v10 = v9;
        v9 += v14;
        v4 += v6;
        v8 += v6;
      }
      while ( v6 <= v9 + v6 );
      v11 = bytesLeft - v10;
      if ( (v11 & 0x80000000) != 0LL )
        __debugbreak();
    }
    memcpy(buffer, (&bytesLeft & 0xFFFFFFFFFFFFFFEFLL), v11);
    IceKey::~IceKey(p_ice);
  }
}


// UTIL_EncodeICE  (line 1053, @0x00000000020be920, libserver.so)
// calls: IceKey::IceKey, IceKey::set, IceKey::encrypt, IceKey::~IceKey, _Unwind_Resume
void __fastcall UTIL_EncodeICE(unsigned __int8 *buffer, unsigned int size, const unsigned __int8 *key)
{
  unsigned __int8 *v6; // rbx
  IceKey_0 ice; // [rsp+0h] [rbp-30h] BYREF

  if ( key != 0 )
  {
    IceKey::IceKey(&ice, 0);
    IceKey::set(&ice, key);
    v6 = buffer;
    if ( size != 0 )
    {
      do
      {
        IceKey::encrypt(&ice, v6, v6);
        v6 += 8;
      }
      while ( size > v6 - buffer );
    }
    IceKey::~IceKey(&ice);
  }
}


// UTIL_Base64Encode  (line 1074, @0x00000000020be9b0, libserver.so)
// strings: "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
bool __fastcall UTIL_Base64Encode(uint8 *pubData, uint32 cubData, uint8 *pubDest, uint32 cubDest)
{
  __int64 v5; // r13
  bool result; // al
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // rax
  uint8 v10; // al
  uint8 *v11; // rcx
  uint32 v12; // esi
  uint8 v13; // al
  uint8 *v14; // r8
  uint8 *v15; // r8

  v5 = cubData - 1;
  result = 0;
  if ( (cubData - 1) / 0x36 + 12 * ((cubData + 2) / 3) / 3 + 1 > cubDest )
    return result;
  if ( cubData == 0 )
    goto LABEL_14;
  v7 = -1;
  v8 = 0;
  do
  {
    while ( 1 )
    {
      if ( v8 != 0 )
      {
        if ( v8 == 54 * (v8 / 0x36) )
          *pubDest++ = 10;
        if ( v8 != 3 * (v8 / 3) )
          break;
      }
      *pubDest++ = aAbcdefghijklmn[pubData[v8] >> 2];
LABEL_5:
      ++v8;
      ++v7;
      if ( cubData <= v8 )
        goto LABEL_12;
    }
    v9 = v7;
    if ( v8 % 3 == 1 )
    {
      *pubDest++ = aAbcdefghijklmn[((pubData[v8] >> 4) + 16 * (pubData[v7] & 3)) & 0x7F];
      goto LABEL_5;
    }
    pubDest += 2;
    ++v7;
    *(pubDest - 2) = aAbcdefghijklmn[((pubData[v8] >> 6) + 4 * (pubData[v9] & 0xF)) & 0x7F];
    v10 = pubData[v8++];
    *(pubDest - 1) = aAbcdefghijklmn[v10 & 0x3F];
  }
  while ( cubData > v8 );
LABEL_12:
  v11 = pubDest;
  v12 = cubData % 3;
  if ( v12 == 1 )
  {
    v13 = pubData[v5];
    v14 = pubDest + 3;
    *(v14 - 2) = 61;
    *(v14 - 3) = aAbcdefghijklmn[(16 * v13) & 0x30];
    v11[2] = 61;
    *v14 = 0;
    return 1;
  }
  else if ( v12 == 2 )
  {
    v15 = pubDest + 2;
    *(v15 - 2) = aAbcdefghijklmn[(4 * pubData[v5]) & 0x3C];
    v11[1] = 61;
    *v15 = 0;
    return 1;
  }
  else
  {
LABEL_14:
    *pubDest = 0;
    return 1;
  }
}


// DecodeBase64Byte  (line 1124, @0x00000000020beba0, libserver.so)
// callers: UTIL_Base64Decode
bool __fastcall DecodeBase64Byte(uint8 ubIn, uint8 *pubOut)
{
  bool result; // al

  if ( (ubIn - 65) <= 0x19u )
  {
    *pubOut = ubIn - 65;
    return 1;
  }
  else if ( (ubIn - 97) <= 0x19u )
  {
    *pubOut = ubIn - 71;
    return 1;
  }
  else if ( (ubIn - 48) <= 9u )
  {
    *pubOut = ubIn + 4;
    return 1;
  }
  else if ( ubIn == 43 )
  {
    *pubOut = 62;
    return 1;
  }
  else
  {
    result = 0;
    if ( ubIn == 47 )
    {
      *pubOut = 63;
      return 1;
    }
  }
  return result;
}


// UTIL_Base64Decode  (line 1157, @0x00000000020bec20, libserver.so)
// calls: DecodeBase64Byte
uint32 __fastcall UTIL_Base64Decode(const uint8 *pubData, uint32 cubData, uint8 *pubDest, uint32 cubDest)
{
  uint32 result; // eax
  uint8 *v5; // r15
  uint8 *v6; // rbx
  const uint8 *v7; // r14
  char v8; // r12
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int pubDesta; // [rsp+0h] [rbp-40h]
  uint8 ubOut[41]; // [rsp+17h] [rbp-29h] BYREF

  result = 0;
  pubDesta = pubDest;
  if ( (3 * cubData) >> 2 <= cubDest && cubData != 0 )
  {
    v5 = pubData;
    v6 = pubDest;
    v7 = &pubData[cubData];
    v8 = 0;
    do
    {
      if ( DecodeBase64Byte(*v5, ubOut) )
      {
        v9 = v8 & 3;
        switch ( v9 )
        {
          case 2:
            v10 = ubOut[0] >> 2;
            v6[1] = ubOut[0] << 6;
            *v6++ |= v10;
            break;
          case 3:
            *v6++ |= ubOut[0];
            break;
          case 1:
            v11 = ubOut[0] >> 4;
            v6[1] = 16 * ubOut[0];
            *v6++ |= v11;
            break;
          default:
            *v6 = 4 * ubOut[0];
            break;
        }
        ++v8;
      }
      ++v5;
    }
    while ( v5 != v7 );
    while ( (v8 & 3) != 0 )
    {
      *++v6 = 0;
      ++v8;
    }
    return v6 - pubDesta;
  }
  return result;
}


// IntervalTimer::Now  (line 1205, @0x00000000020bed30, libserver.so)  // inlines: curtime, rendertime, simorrendertime
// callers: CBaseCombatCharacter::GetAliveDuration, CBaseCombatCharacter::GetTimeSinceLastInjury, CBaseCombatCharacter::RecordDamageHistory, CBaseCombatCharacter::Spawn, INextBot::GetImmobileDuration, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats, CDotaStatManager::ClearAllPlayerStats, CDotaStatManager::GetPlayerNetWorthTimeline, CDotaStatManager::CBasePlayerStatState::GetStatTimeline, CDotaStatManager::GetTimelineElapsedTime, CLocomotionBase::IsAttemptingToMove, CLocomotionBase::GetStuckDuration (26 total)
float __fastcall IntervalTimer::Now(const IntervalTimer *const this)
{
  float result; // xmm0_4

  result = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( gpGlobals->m_bInSimulation )
      return gpGlobals->m_flCurrentTime;
    else
      return gpGlobals->m_flRenderTime;
  }
  return result;
}


// CountdownTimer::CountdownTimer  (line 1212, @0x00000000020bed60, libserver.so)  // inlines: CNetworkVarBase
// callers: CSchemaClassBinding<CountdownTimer>::Allocate, CSchemaClassBinding<CountdownTimer>::ConstructInPlace, CSchemaClassBinding<CountdownTimer>::AllocateAndCopyConstruct, CBasePlayerAnimState::CBasePlayerAnimState, CBaseCombatCharacter::CBaseCombatCharacter, CFish::CFish, CFishPool::CFishPool, CBasePropDoor::CBasePropDoor, CDOTA_ActionDelayer::AddDelayedAction, CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::ConstructInstance, CModifierFactory<CDOTA_Modifier_Creature_HybridFlyer>::Create, DOTA_CombatLog_Record::DOTA_CombatLog_Record (154 total)
void __fastcall CountdownTimer::CountdownTimer(CountdownTimer *const this)
{
  this->_vptr_CountdownTimer = off_3FF42F0;  // vptr: CountdownTimer
  this->m_duration.m_Value = 0.0;
  this->m_timestamp.m_Value = -1.0;
  this->m_bUseGlobalsTime = 0;
}


// CountdownTimer::Now  (line 1222, @0x00000000020bed90, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime, rendertime, simorrendertime
// callers: CBasePlayerAnimState::Update, CBasePlayerAnimState::OnNewModel, CFish::Spawn, CountdownTimer::Start, CFish::FlockTo, CFish::Panic, CFish::Update, CFishPool::CFishPool, CFishPool::Update, CBaseCombatCharacter::PlayFootstepSound, CBasePropDoor::OnDoorClosed, CBasePropDoor::OnStartBlocked (246 total)
float __fastcall CountdownTimer::Now(const CountdownTimer *const this)
{
  if ( !this->m_bUseGlobalsTime )
  {
    if ( g_pGameRules != 0 )
      return *&g_pGameRules[18].m_szQuestName[20];
  }
  else if ( gpGlobals != 0 )
  {
    if ( gpGlobals->m_bInSimulation )
      return gpGlobals->m_flCurrentTime;
    else
      return gpGlobals->m_flRenderTime;
  }
  return 0.0;
}


// CTimeline::GetDataDescMap  (line 1254, @0x000000000209c850, libserver.so)
// globals: CTimeline::m_DataMap
datamap_t *__fastcall CTimeline::GetDataDescMap(CTimeline *const this)
{
  return &CTimeline::m_DataMap;
}


// CTimeline::AddDatadescMetadataKeys  (line 1254, @0x00000000020bedf0, libserver.so)
void __fastcall CTimeline::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CTimeline::GetBaseMap  (line 1254, @0x00000000020bee00, libserver.so)
datamap_t *__cdecl CTimeline::GetBaseMap()
{
  return 0;
}


// DataMapInit<CTimeline>  (line 1254, @0x00000000020bee10, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CTimeline"
// globals: `guard variable for'DataMapInit<CTimeline>(CTimeline *)::nameHolder, CTimeline::m_DataMap, DataMapInit<CTimeline>(CTimeline *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTimeline>(CTimeline *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTimeline>(CTimeline *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTimeline>(CTimeline *)::nameHolder) != 0 )
  {
    DataMapInit<CTimeline>(CTimeline *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTimeline>(CTimeline *)::nameHolder.m_pszBase = "CTimeline";
    DataMapInit<CTimeline>(CTimeline *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTimeline>(CTimeline *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTimeline>(CTimeline *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTimeline>(CTimeline *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTimeline>(CTimeline *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTimeline>(CTimeline *)::nameHolder,
      &_dso_handle);
  }
  CTimeline::m_DataMap.baseMap = 0;
  CTimeline::m_DataMap.dataDesc = &DataMapInit<CTimeline>(CTimeline *)::dataDesc[1];
  CTimeline::m_DataMap.dataNumFields = 7;
  return &CTimeline::m_DataMap;
}


// CTimeline::ClearValues  (line 1286, @0x00000000020beed0, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, SetDirect, operator=<float>
// calls: memcmp
// callers: CDotaStatManager::ClearAllPlayerStats, CDotaStatManager::GetPlayerNetWorthTimeline, CDotaStatManager::CBasePlayerStatState::GetStatTimeline
void __fastcall CTimeline::ClearValues(CTimeline *const this)
{
  unsigned int v2; // r12d
  CNetworkArrayBase<float,64,CTimeline::NetworkVar_m_flValues> *p_m_flValues; // rbx
  int (**vptr_IntervalTimer)(...); // rax
  int (**v5)(...); // rax
  int (**v6)(...); // rax
  _DWORD s2[13]; // [rsp+Ch] [rbp-34h] BYREF

  if ( this->m_timestamp.m_Value != -1.0 )
  {
    (*(this->_vptr_IntervalTimer + 2))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_timestamp.m_Value = -1.0;
  }
  v2 = 0;
  p_m_flValues = &this->m_flValues;
  do
  {
    s2[0] = 0;
    if ( memcmp(p_m_flValues, s2, 4u) != 0 )
    {
      (*(this->_vptr_IntervalTimer + 2))(this, 12, v2, 0xFFFFFFFFLL);
      p_m_flValues->m_Value[0] = 0.0;
    }
    s2[0] = 0;
    if ( memcmp(&p_m_flValues[1], s2, 4u) != 0 )
    {
      (*(this->_vptr_IntervalTimer + 2))(this, 268, v2, 0xFFFFFFFFLL);
      p_m_flValues[1].m_Value[0] = 0.0;
    }
    ++v2;
    p_m_flValues = (p_m_flValues + 4);
  }
  while ( v2 != 64 );
  (*(this->_vptr_IntervalTimer + 2))(this, 524, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  vptr_IntervalTimer = this->_vptr_IntervalTimer;
  this->m_nBucketCount.m_Value = 0;
  vptr_IntervalTimer[2](this, 528, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = this->_vptr_IntervalTimer;
  this->m_flInterval.m_Value = 0.25;
  v5[2](this, 532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v6 = this->_vptr_IntervalTimer;
  this->m_flFinalValue.m_Value = 0.0;
  v6[2](this, 540, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_bStopped.m_Value = 0;
}


// CTimeline::RecordValue  (line 1307, @0x00000000020cd3a0, libserver.so)  // inlines: GetCurrentBucket, GetForModify, HasStarted, NetworkStateChanged, Now, Set, curtime, operator=<float>, operator=<int>, operator==<TimelineCompression_t>, operator><float>, rendertime, simorrendertime
// calls: std::function<float()>::operator(), CTimeline::Compress, memcmp, CGlobalVarsBase::curtime
// callers: CDOTASpectatorGraphManager::RecordTeamStats, CDotaStatManager::IncrementTimelineStat
void __fastcall CTimeline::RecordValue(CTimeline *const this, float a2, const float flValue)
{
  float m_flRenderTime; // xmm0_4
  float m_Value; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  int v8; // r14d
  float m_flCurrentTime; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  int v13; // eax
  float *v14; // r12
  int v15; // ecx
  TimelineCompression_t v16; // edx
  int v17; // ebx
  float v18; // xmm0_4
  float v19; // xmm1_4
  unsigned int v20; // ebx
  char *v21; // r12
  char *v22; // r12
  int v23; // eax
  float v24; // xmm0_4
  int v25; // eax
  float v26; // [rsp-Ch] [rbp-64h]
  float v27; // [rsp-8h] [rbp-60h]
  float v28; // [rsp-4h] [rbp-5Ch]
  float v29; // [rsp-4h] [rbp-5Ch]
  float flNumBucketsa; // [rsp+0h] [rbp-58h]
  float flNumBuckets; // [rsp+0h] [rbp-58h]
  float flInterpBucketb; // [rsp+8h] [rbp-50h]
  float flInterpBucket; // [rsp+8h] [rbp-50h]
  float flInterpBucketc; // [rsp+8h] [rbp-50h]
  float flInterpBucketa; // [rsp+8h] [rbp-50h]
  float v37; // [rsp+18h] [rbp-40h] BYREF
  int v38; // [rsp+1Ch] [rbp-3Ch] BYREF

  if ( this->m_timestamp.m_Value <= 0.0 || this->m_bStopped.m_Value )
    return;
  if ( this->m_fnTime._M_manager != 0 )
  {
    m_flRenderTime = std::function<float ()(void)>::operator()(&this->m_fnTime);
    m_Value = this->m_timestamp.m_Value;
  }
  else if ( gpGlobals != 0 )
  {
    if ( gpGlobals->m_bInSimulation )
    {
      m_flRenderTime = CGlobalVarsBase::curtime(gpGlobals, 0);
      m_Value = this->m_timestamp.m_Value;
    }
    else
    {
      m_Value = this->m_timestamp.m_Value;
      m_flRenderTime = gpGlobals->m_flRenderTime;
    }
  }
  else
  {
    m_Value = this->m_timestamp.m_Value;
    m_flRenderTime = 0.0;
  }
  v6 = this->m_flInterval.m_Value;
  if ( ((m_flRenderTime - m_Value) / v6) >= 0.0 )
  {
    if ( this->m_fnTime._M_manager != 0 )
    {
      v7 = std::function<float ()(void)>::operator()(&this->m_fnTime);
      m_Value = this->m_timestamp.m_Value;
      v6 = this->m_flInterval.m_Value;
    }
    else
    {
      v7 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( gpGlobals->m_bInSimulation )
        {
          v7 = CGlobalVarsBase::curtime(gpGlobals, 0);
          m_Value = this->m_timestamp.m_Value;
          v6 = this->m_flInterval.m_Value;
        }
        else
        {
          v7 = gpGlobals->m_flRenderTime;
        }
      }
    }
    v8 = ((v7 - m_Value) / v6);
    if ( v8 <= 63 )
      goto LABEL_20;
    while ( 1 )
    {
      CTimeline::Compress(this);
      if ( this->m_fnTime._M_manager != 0 )
      {
        m_flCurrentTime = std::function<float ()(void)>::operator()(&this->m_fnTime);
      }
      else
      {
        m_flCurrentTime = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( gpGlobals->m_bInSimulation )
            m_flCurrentTime = gpGlobals->m_flCurrentTime;
          else
            m_flCurrentTime = gpGlobals->m_flRenderTime;
        }
      }
      v10 = this->m_timestamp.m_Value;
      v11 = this->m_flInterval.m_Value;
      if ( ((m_flCurrentTime - v10) / v11) < 0.0 )
        break;
      if ( this->m_fnTime._M_manager != 0 )
      {
        v12 = std::function<float ()(void)>::operator()(&this->m_fnTime);
        v10 = this->m_timestamp.m_Value;
        v11 = this->m_flInterval.m_Value;
      }
      else
      {
        v12 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( gpGlobals->m_bInSimulation )
            v12 = gpGlobals->m_flCurrentTime;
          else
            v12 = gpGlobals->m_flRenderTime;
        }
      }
      v8 = ((v12 - v10) / v11);
      if ( v8 <= 63 )
        goto LABEL_20;
    }
  }
  v8 = 0;
LABEL_20:
  v13 = this->m_nBucketCount.m_Value;
  if ( v13 <= v8 && v13 != v8 + 1 )
  {
    (*(this->_vptr_IntervalTimer + 2))(this, 524, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nBucketCount.m_Value = v8 + 1;
  }
  (*(this->_vptr_IntervalTimer + 2))(this, 12, v8, 0xFFFFFFFFLL);
  v14 = (this + 4 * v8);
  v14[3] = a2 + v14[3];
  (*(this->_vptr_IntervalTimer + 2))(this, 268, v8, 0xFFFFFFFFLL);
  v15 = *(v14 + 67) + 1;
  *(v14 + 67) = v15;
  v16 = this->m_nCompressionType.m_Value;
  if ( v16 == TimelineCompression_t::TIMELINE_COMPRESSION_SUM || (v16 - 2) <= 1 )
  {
    v17 = v8 - 1;
    v18 = v14[3] / v15;
    if ( v8 - 1 < 0 )
    {
LABEL_37:
      v37 = v14[3] / v15;
    }
    else
    {
      while ( this->m_nValueCounts.m_Value[v17] <= 0 )
      {
        if ( --v17 == -1 )
          goto LABEL_37;
      }
      v37 = v14[3] / v15;
      if ( v16 != TimelineCompression_t::TIMELINE_COMPRESSION_SUM )
      {
        v37 = this->m_flFinalValue.m_Value;
      }
      else
      {
        v19 = this->m_flValues.m_Value[v17];
        v37 = v19;
        if ( v15 == 1 )
        {
          flInterpBucketb = v19;
          flNumBucketsa = v18;
          (*(this->_vptr_IntervalTimer + 2))(this, 12, v8, 0xFFFFFFFFLL);
          v18 = flNumBucketsa;
          v14[3] = flInterpBucketb + v14[3];
        }
      }
    }
    v27 = (v8 - v17 + 1);
    if ( v27 >= 3.0 )
    {
      v20 = v17 + 1;
      if ( this->m_nCompressionType.m_Value == TimelineCompression_t::TIMELINE_COMPRESSION_AVERAGE_BLEND )
      {
        if ( v20 < v8 )
        {
          flNumBuckets = 1.0;
          v22 = &this->m_flValues.m_Value[v20];
          v26 = v37;
          do
          {
            v28 = v18;
            *&v38 = ((1.0 - (flNumBuckets / v27)) * v26) + ((flNumBuckets / v27) * v18);
            flInterpBucket = *&v38;
            v23 = memcmp(v22, &v38, 4u);
            v24 = v28;
            if ( v23 != 0 )
            {
              v29 = flInterpBucket;
              flInterpBucketc = v24;
              (*(this->_vptr_IntervalTimer + 2))(this, 12, v20, 0xFFFFFFFFLL);
              v24 = flInterpBucketc;
              this->m_flValues.m_Value[v20] = v29;
            }
            flInterpBucketa = v24;
            v38 = 1;
            v25 = memcmp(v22 + 256, &v38, 4u);
            v18 = flInterpBucketa;
            if ( v25 != 0 )
            {
              (*(this->_vptr_IntervalTimer + 2))(this, 268, v20, 0xFFFFFFFFLL, flInterpBucketa);
              v18 = flInterpBucketa;
              this->m_nValueCounts.m_Value[v20] = 1;
            }
            ++v20;
            v22 += 4;
            flNumBuckets = flNumBuckets + 1.0;
          }
          while ( v20 != v8 );
        }
      }
      else if ( v20 < v8 )
      {
        v21 = &this->m_flValues.m_Value[v20];
        do
        {
          if ( memcmp(v21, &v37, 4u) != 0 )
          {
            (*(this->_vptr_IntervalTimer + 2))(this, 12, v20, 0xFFFFFFFFLL);
            this->m_flValues.m_Value[v20] = v37;
          }
          v38 = 1;
          if ( memcmp(v21 + 256, &v38, 4u) != 0 )
          {
            (*(this->_vptr_IntervalTimer + 2))(this, 268, v20, 0xFFFFFFFFLL);
            this->m_nValueCounts.m_Value[v20] = 1;
          }
          ++v20;
          v21 += 4;
        }
        while ( v20 != v8 );
      }
    }
  }
  if ( a2 != this->m_flFinalValue.m_Value )
  {
    (*(this->_vptr_IntervalTimer + 2))(this, 532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFinalValue.m_Value = a2;
  }
}


// CTimeline::GetValue  (line 1395, @0x00000000020bf070, libserver.so)  // inlines: operator==<TimelineCompression_t>
// callers: CTimeline::GetValueAtInterp, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats, CDotaStatManager::CBasePlayerStatState::DumpStats, CDotaStatManager::IncrementTimelineStat, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer, CDOTAGCServerSystem::WriteMatchMetadataTeam
float __fastcall CTimeline::GetValue(const CTimeline *const this, int i)
{
  float result; // xmm0_4
  int m_Value; // eax
  char *v4; // rdx
  int v5; // ecx
  TimelineCompression_t v6; // esi

  result = 0.0;
  if ( i >= 0 )
  {
    m_Value = this->m_nBucketCount.m_Value;
    result = 0.0;
    if ( i < m_Value )
    {
      v4 = this + 4 * i;
      v5 = *(v4 + 67);
      if ( v5 > 0 )
      {
        if ( i != 0 )
        {
          if ( (this->m_nCompressionType.m_Value - 2) > 1 )
            return *(v4 + 3);
        }
        else
        {
          v6 = this->m_nCompressionType.m_Value;
          if ( v6 == TimelineCompression_t::TIMELINE_COMPRESSION_SUM )
          {
            if ( m_Value > 1 )
              return result;
            return *(v4 + 3);
          }
          if ( (v6 - 2) > 1 )
            return *(v4 + 3);
        }
        return *(v4 + 3) / v5;
      }
    }
  }
  return result;
}


// CTimeline::GetValueAtInterp  (line 1429, @0x00000000020bf0f0, libserver.so)
// calls: CTimeline::GetValue
// callers: GetTimelineValueByGameTime, CDotaStatManager::GetTimelineStatByInterp, CDotaStatManager::GetTimelineStatByGameTime, CDotaStatManager::CBasePlayerStatState::GetTimelineStatByInterp, CDotaStatManager::CBasePlayerStatState::GetTimelineStatByGameTime, CDotaStatManager::CBasePlayerStatState::GetTimelineStatPerMinute
float __fastcall CTimeline::GetValueAtInterp(const CTimeline *const this, float a2, float fInterp)
{
  int v3; // esi
  float v6; // xmm2_4
  int v7; // r12d
  float v8; // [rsp-18h] [rbp-20h]
  float Value; // [rsp-14h] [rbp-1Ch]

  v3 = 0;
  if ( a2 <= 0.0 )
    return CTimeline::GetValue(this, v3);
  if ( a2 >= 1.0 )
  {
    if ( this->m_nCompressionType.m_Value > TimelineCompression_t::TIMELINE_COMPRESSION_COUNT_PER_INTERVAL )
      return this->m_flFinalValue.m_Value;
    v3 = this->m_nBucketCount.m_Value - 1;
    return CTimeline::GetValue(this, v3);
  }
  v6 = (this->m_nBucketCount.m_Value - 1) * a2;
  v7 = v6;
  v8 = v6 - v6;
  Value = CTimeline::GetValue(this, v6);
  return ((1.0 - v8) * Value) + (CTimeline::GetValue(this, v7 + 1) * v8);
}


// CTimeline::Compress  (line 1459, @0x00000000020bf1c0, libserver.so)  // inlines: GetForModify, NetworkStateChanged, Set, operator*=<float>, operator=<int>
// calls: memcmp
// callers: CTimeline::RecordValue
void __fastcall CTimeline::Compress(CTimeline *const this)
{
  CNetworkArrayBase<int,64,CTimeline::NetworkVar_m_nValueCounts> *p_m_nValueCounts; // r14
  CNetworkArrayBase<int,64,CTimeline::NetworkVar_m_nValueCounts> *v2; // r15
  CNetworkArrayBase<float,64,CTimeline::NetworkVar_m_flValues> *p_m_flValues; // r12
  __int64 v5; // rbx
  float *v6; // rbx
  unsigned int i; // r12d
  double v8; // xmm0_8
  double v9; // xmm1_8
  CNetworkArrayBase<float,64,CTimeline::NetworkVar_m_flValues> *v10; // [rsp+8h] [rbp-48h]
  unsigned int v11; // [rsp+8h] [rbp-48h]
  _DWORD s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  p_m_nValueCounts = &this->m_nValueCounts;
  v2 = &this->m_nValueCounts;
  p_m_flValues = &this->m_flValues;
  v5 = 0;
  v10 = &this->m_flValues;
  if ( this->m_nCompressionType.m_Value != TimelineCompression_t::TIMELINE_COMPRESSION_SUM )
  {
    do
    {
      p_m_flValues = (p_m_flValues + 8);
      v2 = (v2 + 8);
      (*(this->_vptr_IntervalTimer + 2))(this, 12, v5, 0xFFFFFFFFLL);
      v10->m_Value[v5] = p_m_flValues[-1].m_Value[62] + p_m_flValues[-1].m_Value[63];
      (*(this->_vptr_IntervalTimer + 2))(this, 268, v5, 0xFFFFFFFFLL);
      p_m_nValueCounts->m_Value[v5++] = v2[-1].m_Value[63] + v2[-1].m_Value[62];
    }
    while ( v5 != 32 );
  }
  else
  {
    do
    {
      p_m_flValues = (p_m_flValues + 8);
      v2 = (v2 + 8);
      (*(this->_vptr_IntervalTimer + 2))(this, 12, v5, 0xFFFFFFFFLL);
      v10->m_Value[v5] = fmaxf(p_m_flValues[-1].m_Value[62], p_m_flValues[-1].m_Value[63]);
      (*(this->_vptr_IntervalTimer + 2))(this, 268, v5, 0xFFFFFFFFLL);
      p_m_nValueCounts->m_Value[v5++] = v2[-1].m_Value[63] + v2[-1].m_Value[62];
    }
    while ( v5 != 32 );
  }
  v6 = &this->m_flValues.m_Value[32];
  for ( i = 32; i != 64; ++i )
  {
    s2[0] = 0;
    if ( memcmp(v6, s2, 4u) != 0 )
    {
      (*(this->_vptr_IntervalTimer + 2))(this, 12, i, 0xFFFFFFFFLL);
      *(&v10->m_Value[-3] + v6 - this) = 0.0;
    }
    s2[0] = 0;
    if ( memcmp(v6 + 64, s2, 4u) != 0 )
    {
      (*(this->_vptr_IntervalTimer + 2))(this, 268, i, 0xFFFFFFFFLL);
      *(&p_m_nValueCounts->m_Value[-3] + v6 - this) = 0;
    }
    ++v6;
  }
  *&v8 = LODWORD(this->m_flInterval.m_Value);
  HIDWORD(v9) = 0;
  *&v9 = *&v8 + *&v8;
  if ( *&v8 != (*&v8 + *&v8) )
  {
    *&v11 = *&v8 + *&v8;
    (*(this->_vptr_IntervalTimer + 2))(this, 528, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v9 = v11;
    this->m_flInterval.m_Value = *&v11;
  }
  if ( this->m_nBucketCount.m_Value != 32 )
  {
    (*(this->_vptr_IntervalTimer + 2))(this, 524, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v8, v9);
    this->m_nBucketCount.m_Value = 32;
  }
}


// UTIL_GetAchievementEventMask  (line 1506, @0x00000000020bf420, libserver.so)  // inlines: V_strlen, V_strncpy<long unsigned int>
// calls: CRC32_Init, _V_strncpy, V_strlower_fast, CRC32_ProcessBuffer, CRC32_Final, __stack_chk_fail
// callers: CMultiplayRules::ClientCommand
unsigned __int16 __cdecl UTIL_GetAchievementEventMask()
{
  CRC32_t mapCRC; // [rsp+Ch] [rbp-124h] BYREF
  char lowercase[264]; // [rsp+10h] [rbp-120h] BYREF
  unsigned __int64 v3; // [rsp+118h] [rbp-18h]

  v3 = __readfsqword(0x28u);
  CRC32_Init(&mapCRC);
  _V_strncpy(lowercase, gpGlobals->mapname, 256);
  V_strlower_fast(lowercase);
  CRC32_ProcessBuffer(&mapCRC, lowercase, strlen(lowercase));
  CRC32_Final(&mapCRC);
  return mapCRC;
}


// ReadAndAllocStringValue  (line 1527, @0x00000000020bf4f0, libserver.so)  // inlines: V_strlen, V_strncpy<int>
// calls: KeyValues::GetString, strlen, operator new [], _V_strncpy, DevWarning(char const*,...)
// strings: "Can't get key value\t'%s' from file '%s'.\n"
char *__fastcall ReadAndAllocStringValue(KeyValues *pSub, const char *pName, const char *pFilename)
{
  const char *String; // rax
  const char *v6; // rbx
  unsigned int v7; // r13d
  char *v8; // r12

  String = KeyValues::GetString(pSub, pName, 0, 0, 0);
  v6 = String;
  if ( String != 0 )
  {
    v7 = strlen(String) + 1;
    v8 = operator new[](v7);
    _V_strncpy(v8, v6, v7);
    return v8;
  }
  v8 = "";
  if ( pFilename == 0 )
    return v8;
  DevWarning("Can't get key value\t'%s' from file '%s'.\n", pName, pFilename);
  return "";
}


// UTIL_StringFieldToInt  (line 1546, @0x00000000020bf580, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp
int __fastcall UTIL_StringFieldToInt(const char *szValue, const char **pValueStrings, int iNumStrings)
{
  int result; // eax
  const char *v7; // rsi
  const char **v8; // r12
  int v9; // ebx

  if ( szValue == 0 || *szValue == 0 )
    return -1;
  result = -1;
  if ( iNumStrings > 0 )
  {
    v7 = *pValueStrings;
    if ( szValue == v7 )
    {
      return 0;
    }
    else
    {
      v8 = pValueStrings + 1;
      v9 = 0;
      do
      {
        if ( strcmp(szValue, v7) == 0 )
          break;
        if ( ++v9 == iNumStrings )
          return -1;
        v7 = *v8++;
      }
      while ( szValue != v7 );
      return v9;
    }
  }
  return result;
}


// UTIL_CountNumBitsSet  (line 1581, @0x00000000020bf600, libserver.so)
// globals: s_NumBitsInNibble
int __fastcall UTIL_CountNumBitsSet(unsigned int nVar)
{
  int result; // eax
  char v2; // dl

  for ( result = 0; nVar != 0; result += s_NumBitsInNibble[v2 & 0xF] )
  {
    v2 = nVar;
    nVar >>= 4;
  }
  return result;
}


// UTIL_CountNumBitsSet  (line 1597, @0x00000000020bf630, libserver.so)
// callers: CBaseAchievement::ClearAchievementData, CPlayerAchievementState::Steam_OnGSStatsReceived, CBaseAchievement::EnsureComponentBitSetAndEvaluate, CBaseAchievement::SetComponentBits, CServerAchievementManager::ResetAchievement_Internal
// globals: s_NumBitsInNibble
int __fastcall UTIL_CountNumBitsSet(uint64 nVar)
{
  int result; // eax
  char v2; // dl

  for ( result = 0; nVar != 0; result += s_NumBitsInNibble[v2 & 0xF] )
  {
    v2 = nVar;
    nVar >>= 4;
  }
  return result;
}


// UTIL_FindClosestPassableSpace  (line 1613, @0x00000000020e5620, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, Ray_t, RnCollisionAttr_t, TraceRay, VectorAligned, VectorDivide, VectorMultiply, VectorSubtract, operator*, operator+=, operator-, operator-=, operator/, operator=
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay, sqrtf
// callers: UTIL_FindClosestPassableSpace
// globals: g_pPhysicsQuery
bool __fastcall UTIL_FindClosestPassableSpace(
        const Vector *const vOriginalCenter,
        const Vector *const vExtents,
        const Vector *const vIndecisivePush,
        CTraceFilter *pTraceFilter,
        uint64 fMask,
        unsigned int iIterations,
        Vector *const vCenterOut,
        int nAxisRestrictionFlags)
{
  vec_t x; // xmm3_4
  vec_t y; // xmm3_4
  vec_t z; // xmm4_4
  vec_t v15; // xmm5_4
  __int64 v16; // rax
  vec_t v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // eax
  float v22; // xmm7_4
  float v23; // xmm3_4
  __int64 v24; // r13
  float v25; // xmm3_4
  float v26; // xmm6_4
  float v27; // xmm3_4
  CTraceFilter *v28; // r14
  Vector *v29; // r15
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm4_4
  float v38; // xmm4_4
  Vector *v39; // rdx
  float v40; // xmm4_4
  __int64 v41; // rax
  char v42; // cl
  unsigned int v43; // ecx
  int v44; // ebx
  Vector *v45; // rax
  CTraceFilter *v46; // r15
  Vector *v47; // r14
  __int64 v48; // rax
  Vector *v49; // r13
  CTraceFilter *v50; // r14
  int v51; // r15d
  unsigned __int64 v52; // r12
  CGameTrace *v53; // rbx
  unsigned int v54; // edx
  unsigned int v55; // ecx
  float v56; // xmm0_4
  __int64 v57; // rsi
  bool v58; // zf
  float v59; // xmm5_4
  float *v60; // rdx
  __int64 v61; // rax
  float v62; // xmm4_4
  float v63; // xmm3_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  vec_t *p_x; // rax
  CGamePhysicsQueryInterface *v67; // rdi
  vec_t v68; // xmm0_4
  vec_t v69; // xmm1_4
  vec_t v70; // xmm2_4
  __int64 v71; // rdx
  float *v72; // rsi
  vec_t v73; // xmm0_4
  vec_t v74; // xmm2_4
  __int64 v75; // rax
  __int64 v76; // rax
  float v77; // xmm4_4
  float v79; // xmm1_4
  float v80; // xmm0_4
  vec_t v81; // xmm2_4
  CGamePhysicsQueryInterface *v82; // rdi
  float *v85; // [rsp+18h] [rbp-3B8h]
  float v86; // [rsp+3Ch] [rbp-394h]
  float v87; // [rsp+40h] [rbp-390h]
  float v88; // [rsp+44h] [rbp-38Ch]
  unsigned int v89; // [rsp+58h] [rbp-378h]
  int fXSqr; // [rsp+5Ch] [rbp-374h]
  float vCurrentExtents; // [rsp+60h] [rbp-370h]
  float vCurrentExtents_4; // [rsp+64h] [rbp-36Ch]
  float vCurrentExtents_8; // [rsp+68h] [rbp-368h]
  float v94; // [rsp+6Ch] [rbp-364h]
  float v95; // [rsp+70h] [rbp-360h]
  float v96; // [rsp+70h] [rbp-360h]
  float v97; // [rsp+74h] [rbp-35Ch]
  bool bExtentInvalid[16]; // [rsp+A0h] [rbp-330h]
  unsigned int counters[4]; // [rsp+B0h] [rbp-320h]
  Vector vOriginalExtents; // [rsp+C0h] [rbp-310h]
  float fExtentDistribution[8]; // [rsp+D0h] [rbp-300h]
  float fXDiff; // [rsp+F0h] [rbp-2E0h]
  float v104; // [rsp+F4h] [rbp-2DCh]
  float v105; // [rsp+F8h] [rbp-2D8h]
  float v106; // [rsp+FCh] [rbp-2D4h]
  float v107; // [rsp+100h] [rbp-2D0h]
  float v108; // [rsp+104h] [rbp-2CCh]
  float v109; // [rsp+108h] [rbp-2C8h]
  float v110; // [rsp+10Ch] [rbp-2C4h]
  float fExtentsValidation[8]; // [rsp+110h] [rbp-2C0h]
  float fExtentDists[8]; // [rsp+130h] [rbp-2A0h]
  Ray_t entRay; // [rsp+150h] [rbp-280h] BYREF
  Ray_t testRay; // [rsp+1A0h] [rbp-230h] BYREF
  Vector ptExtents[8]; // [rsp+1F0h] [rbp-1E0h] BYREF
  CGameTrace traces[2]; // [rsp+250h] [rbp-180h] BYREF

  traces[0].m_ShapeAttributes.m_nHierarchyId = 0;
  traces[0].m_ShapeAttributes.m_nInteractsAs = 0;
  traces[0].m_ShapeAttributes.m_nInteractsWith = 0;
  traces[0].m_ShapeAttributes.m_nInteractsExclude = 0;
  traces[0].m_ShapeAttributes.m_nCollisionGroup = 0;
  traces[0].m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  traces[0].m_ShapeAttributes.m_nEntityId = 0;
  CGameTrace::Init(traces);
  traces[1].m_ShapeAttributes.m_nInteractsAs = 0;
  traces[1].m_ShapeAttributes.m_nInteractsWith = 0;
  traces[1].m_ShapeAttributes.m_nInteractsExclude = 0;
  traces[1].m_ShapeAttributes.m_nCollisionGroup = 0;
  traces[1].m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  traces[1].m_ShapeAttributes.m_nEntityId = 0;
  traces[1].m_ShapeAttributes.m_nHierarchyId = 0;
  CGameTrace::Init(&traces[1]);
  entRay.m_Start.w = 0.0;
  x = vOriginalCenter->x;
  entRay.m_IsRay = 0;
  entRay.m_IsSwept = 1;
  v97 = x;
  y = vOriginalCenter->y;
  z = vec3_origin.z;
  entRay.m_Delta.w = 0.0;
  v15 = vec3_origin.y;
  v94 = y;
  entRay.m_StartOffset.z = z;
  v16 = *&vExtents->x;
  entRay.m_StartOffset.y = v15;
  v17 = vOriginalCenter->z;
  entRay.m_StartOffset.x = vec3_origin.x;
  v18 = vExtents->x;
  entRay.m_StartOffset.w = 0.0;
  v95 = v17;
  v19 = vExtents->y;
  *&vOriginalExtents.x = v16;
  *&v16 = vExtents->z;
  v20 = *&v16;
  entRay.m_Extents.x = v18;
  entRay.m_Extents.w = 0.0;
  entRay.m_Extents.y = v19;
  LODWORD(vOriginalExtents.z) = v16;
  LODWORD(entRay.m_Extents.z) = v16;
  v21 = 1;
  v22 = 1.0 / (iIterations + 1);
  v88 = v22 * v18;
  v87 = v22 * v19;
  v86 = v22 * entRay.m_Extents.z;
  vCurrentExtents_8 = v18 - (v22 * v18);
  vCurrentExtents_4 = v19 - (v22 * v19);
  v23 = vOriginalExtents.y;
  vCurrentExtents = entRay.m_Extents.z - (v22 * entRay.m_Extents.z);
  if ( vOriginalExtents.y <= v18 )
  {
    v23 = v18;
    LOBYTE(v21) = 0;
  }
  v24 = 8;
  if ( vOriginalExtents.z <= v23 )
    v24 = 4LL * v21;
  testRay.m_StartOffset.x = vec3_origin.x;
  testRay.m_StartOffset.z = z;
  testRay.m_Extents.x = v22 * v18;
  testRay.m_Start.w = 0.0;
  testRay.m_Extents.y = v22 * v19;
  testRay.m_Delta.w = 0.0;
  testRay.m_Extents.z = v22 * v20;
  testRay.m_StartOffset.w = 0.0;
  v25 = 1.0 / *(&vOriginalExtents.x + v24);
  testRay.m_Extents.w = 0.0;
  testRay.m_IsRay = 0;
  testRay.m_IsSwept = 1;
  testRay.m_StartOffset.y = v15;
  v104 = (v18 + v18) * v25;
  v105 = (v19 + v19) * v25;
  fXDiff = 0.0;
  v26 = (v105 * v105) + (v104 * v104);
  v107 = (v20 + v20) * v25;
  v106 = fsqrt(v26);
  v108 = fsqrt((v104 * v104) + (v107 * v107));
  v109 = fsqrt((v105 * v105) + (v107 * v107));
  v110 = fsqrt((v107 * v107) + v26);
  v96 = v95 + 0.001;
  if ( iIterations == 0 )
  {
LABEL_51:
    *vCenterOut = *vOriginalCenter;
    return 0;
  }
  fXSqr = 0;
  v27 = 0.0;
  v85 = (&vExtents->x + v24);
  v89 = iIterations - 1;
  v28 = pTraceFilter;
  v29 = ptExtents;
  while ( 2 )
  {
    v30 = 0.0;
    if ( (nAxisRestrictionFlags & 0x20) == 0 )
      v30 = -vCurrentExtents;
    v31 = 0.0;
    v32 = v30 + v96;
    fExtentDistribution[0] = v32;
    if ( (nAxisRestrictionFlags & 2) == 0 )
      v31 = -vCurrentExtents_8;
    v33 = v31 + v97;
    v34 = vCurrentExtents_8;
    fExtentDistribution[1] = v33;
    if ( (nAxisRestrictionFlags & 1) != 0 )
      v34 = 0.0;
    fExtentDistribution[2] = v34 + v97;
    v35 = 0.0;
    if ( (nAxisRestrictionFlags & 8) == 0 )
      v35 = -vCurrentExtents_4;
    v36 = v35 + v94;
    v37 = vCurrentExtents;
    fExtentDistribution[3] = v36;
    if ( (nAxisRestrictionFlags & 0x10) != 0 )
      v37 = 0.0;
    fExtentDistribution[4] = v37 + v96;
    v38 = vCurrentExtents_4;
    if ( (nAxisRestrictionFlags & 4) != 0 )
      v38 = 0.0;
    v39 = v29;
    fExtentDistribution[5] = v38 + v94;
    v40 = *v85;
    v41 = 0;
    while ( 1 )
    {
      fExtentsValidation[v41] = 0.0;
      ++v39;
      bExtentInvalid[v41] = 0;
      v42 = v41 + 1;
      v39[-1].x = v33;
      v39[-1].y = v36;
      fExtentDists[v41++] = v27 * v40;
      v39[-1].z = v32;
      if ( v41 == 8 )
        break;
      v27 = *(&fXDiff + v41);
      v33 = fExtentDistribution[(v42 & 1) + 1];
      v32 = fExtentDistribution[v42 & 4];
      v36 = fExtentDistribution[(v42 & 2) + 3];
    }
    v43 = 0;
    v44 = 0;
    counters[0] = 0;
    v45 = v29;
    v46 = v28;
    v47 = v45;
    do
    {
      v48 = v43;
      counters[1] = v43 + 1;
      v49 = v47;
      v50 = v46;
      v51 = v44;
      do
      {
        v52 = 0;
        v53 = traces;
        if ( bExtentInvalid[v48] )
        {
LABEL_25:
          v53->startsolid = 1;
          v53->fraction = 0.0;
          goto LABEL_26;
        }
        while ( 1 )
        {
          p_x = &v49[v48].x;
          v67 = g_pPhysicsQuery;
          testRay.m_Start.w = 0.0;
          v68 = p_x[2];
          testRay.m_Delta.w = 0.0;
          v69 = p_x[1];
          v70 = *p_x;
          testRay.m_Start.z = v68;
          v71 = counters[v52 / 0xFFFFFFFFFFFFFFFCLL + 1];
          testRay.m_Start.y = v69;
          testRay.m_Start.x = v70;
          v72 = &v49[v71].x;
          v73 = v72[2] - p_x[2];
          v74 = *v72 - *p_x;
          testRay.m_Delta.y = v72[1] - p_x[1];
          testRay.m_Delta.z = v73;
          testRay.m_Delta.x = v74;
          v50->m_attr.m_nInteractsWith |= fMask;
          CGamePhysicsQueryInterface::TraceRay(v67, &testRay, v50, v53);
LABEL_26:
          v52 += 4LL;
          ++v53;
          if ( v52 == 8 )
            break;
          v48 = counters[v52 / 4];
          if ( bExtentInvalid[v48] )
            goto LABEL_25;
        }
        v54 = counters[1];
        v55 = counters[0];
        v56 = fExtentDists[counters[0] ^ counters[1]];
        if ( traces[0].fraction == 1.0 )
        {
          if ( traces[1].fraction == 1.0 )
            goto LABEL_29;
          v75 = 0;
        }
        else
        {
          if ( traces[1].fraction != 1.0 )
          {
LABEL_29:
            v48 = counters[0];
            if ( !traces[0].startsolid )
              goto LABEL_30;
            goto LABEL_48;
          }
          v75 = 1;
        }
        v76 = 168 * v75;
        *(&traces[0].startsolid + v76) = 1;
        *(&traces[0].fraction + v76) = 0.0;
        v48 = v55;
        if ( !traces[0].startsolid )
        {
LABEL_30:
          v57 = v54;
          v58 = !traces[1].startsolid;
          fExtentsValidation[v48] = (traces[0].fraction * v56) + fExtentsValidation[v48];
          if ( !v58 )
            goto LABEL_31;
          goto LABEL_49;
        }
LABEL_48:
        v58 = !traces[1].startsolid;
        v51 = 1;
        v57 = v54;
        bExtentInvalid[v48] = 1;
        if ( !v58 )
        {
LABEL_31:
          bExtentInvalid[v57] = 1;
          v51 = 1;
          goto LABEL_32;
        }
LABEL_49:
        fExtentsValidation[v57] = (v56 * traces[1].fraction) + fExtentsValidation[v57];
LABEL_32:
        counters[1] = v54 + 1;
      }
      while ( v54 != 7 );
      v43 = v55 + 1;
      v44 = v51;
      v46 = v50;
      v47 = v49;
      counters[0] = v43;
    }
    while ( v43 != 7 );
    v28 = v46;
    v29 = v49;
    if ( v44 == 0 )
    {
      entRay.m_Start.w = 0.0;
      entRay.m_Delta.w = 0.0;
      entRay.m_Start.x = v97;
      v79 = vOriginalCenter->y;
      entRay.m_Start.y = v94;
      v80 = vOriginalCenter->z;
      entRay.m_Start.z = v96;
      v81 = vOriginalCenter->x - v97;
      v82 = g_pPhysicsQuery;
      entRay.m_Delta.y = v79 - v94;
      entRay.m_Delta.z = v80 - v96;
      v28->m_attr.m_nInteractsWith |= fMask;
      entRay.m_Delta.x = v81;
      CGamePhysicsQueryInterface::TraceRay(v82, &entRay, v28, traces);
      if ( !traces[0].startsolid )
      {
        *vCenterOut = traces[0].endpos;
        return 1;
      }
    }
    v59 = 0.0;
    v60 = &v49->x;
    v61 = 0;
    v62 = 0.0;
    v63 = 0.0;
    v64 = 0.0;
    do
    {
      if ( !bExtentInvalid[v61] )
      {
        v65 = fExtentsValidation[v61];
        v64 = v64 + v65;
        v59 = v59 + ((*v60 - v97) * v65);
        v62 = v62 + ((v60[1] - v94) * v65);
        v63 = v63 + ((v60[2] - v96) * v65);
      }
      ++v61;
      v60 += 3;
    }
    while ( v61 != 8 );
    if ( v64 == 0.0 )
    {
      testRay.m_Extents.w = 0.0;
      v77 = v97 + vIndecisivePush->x;
      testRay.m_Extents.y = v87;
      v97 = v77;
      testRay.m_Extents.z = v86;
      v94 = v94 + vIndecisivePush->y;
      v96 = v96 + vIndecisivePush->z;
      testRay.m_Extents.x = v88;
      vCurrentExtents_8 = vOriginalExtents.x - v88;
      vCurrentExtents_4 = vOriginalExtents.y - v87;
      vCurrentExtents = vOriginalExtents.z - v86;
      if ( fXSqr != v89 )
      {
LABEL_41:
        v27 = fXDiff;
        ++fXSqr;
        continue;
      }
    }
    else
    {
      v97 = (v59 * (1.0 / v64)) + v97;
      v94 = (v62 * (1.0 / v64)) + v94;
      v96 = ((1.0 / v64) * v63) + v96;
      vCurrentExtents_8 = vCurrentExtents_8 - v88;
      testRay.m_Extents.x = testRay.m_Extents.x + v88;
      vCurrentExtents_4 = vCurrentExtents_4 - v87;
      testRay.m_Extents.y = testRay.m_Extents.y + v87;
      vCurrentExtents = vCurrentExtents - v86;
      testRay.m_Extents.z = testRay.m_Extents.z + v86;
      if ( fXSqr != v89 )
        goto LABEL_41;
    }
    goto LABEL_51;
  }
}


// UTIL_FindClosestPassableSpace  (line 1822, @0x00000000020e6310, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, CTraceFilterSimple, GetCollisionGroup, HierarchyIDFromBaseEntity, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, VectorAdd, VectorDivide, VectorSubtract, WorldSpaceAABB, operator+, operator+=, operator-, operator-=, operator/, operator=
// calls: CBaseEntity::GetMoveParent, CBaseEntity::GetAbsOrigin, CCollisionProperty::CollisionAABBToWorldAABB, EntityIDFromBaseEntity, UTIL_FindClosestPassableSpace
// callers: UTIL_FindClosestPassableSpace
bool __fastcall UTIL_FindClosestPassableSpace(
        CBaseEntity *pEntity,
        const Vector *const vIndecisivePush,
        uint64 fMask,
        unsigned int iIterations,
        Vector *const vOriginOut,
        Vector *pStartingPosition,
        int nAxisRestrictionFlags)
{
  bool result; // al
  CCollisionProperty *m_pCollision; // rdi
  float x; // xmm2_4
  float v15; // xmm6_4
  float y; // xmm1_4
  float v17; // xmm5_4
  float z; // xmm0_4
  float v19; // xmm4_4
  const Vector *v20; // rax
  const Vector *v21; // rax
  vec_t v22; // xmm2_4
  vec_t v23; // xmm0_4
  CCollisionProperty *v24; // r13
  uint16 v25; // ax
  vec_t v26; // xmm0_4
  vec_t v27; // xmm2_4
  const Vector *AbsOrigin; // rax
  uint8 m_Value; // [rsp+1Bh] [rbp-C5h]
  float v30; // [rsp+1Ch] [rbp-C4h]
  float v31; // [rsp+20h] [rbp-C0h]
  float v32; // [rsp+24h] [rbp-BCh]
  Vector vEntityMaxs; // [rsp+30h] [rbp-B0h] BYREF
  Vector vEntityMins; // [rsp+40h] [rbp-A0h] BYREF
  Vector ptEntityCenter; // [rsp+50h] [rbp-90h] BYREF
  Vector vResult; // [rsp+60h] [rbp-80h] BYREF
  CTraceFilterSimple traceFilter; // [rsp+70h] [rbp-70h] BYREF

  if ( CBaseEntity::GetMoveParent(pEntity) != 0 )
  {
    *vOriginOut = *CBaseEntity::GetAbsOrigin(pEntity);
    return 0;
  }
  else
  {
    m_pCollision = pEntity->m_pCollision;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        m_pCollision,
        &m_pCollision->m_vecMins.m_Value,
        &m_pCollision->m_vecMaxs.m_Value,
        &vEntityMins,
        &vEntityMaxs);
      x = vEntityMins.x;
      v15 = vEntityMaxs.x;
      y = vEntityMins.y;
      v17 = vEntityMaxs.y;
      z = vEntityMins.z;
      v19 = vEntityMaxs.z;
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
      v15 = AbsOrigin->x;
      v17 = AbsOrigin->y;
      v19 = AbsOrigin->z;
      x = AbsOrigin->x;
      vEntityMins.x = AbsOrigin->x;
      y = v17;
      vEntityMins.y = v17;
      z = v19;
      vEntityMins.z = v19;
    }
    ptEntityCenter.x = (x + v15) * 0.5;
    ptEntityCenter.y = (y + v17) * 0.5;
    ptEntityCenter.z = (z + v19) * 0.5;
    vEntityMaxs.x = v15 - ptEntityCenter.x;
    vEntityMaxs.y = v17 - ptEntityCenter.y;
    vEntityMaxs.z = v19 - ptEntityCenter.z;
    v20 = CBaseEntity::GetAbsOrigin(pEntity);
    v32 = v20->x - ptEntityCenter.x;
    v31 = v20->y - ptEntityCenter.y;
    v30 = v20->z - ptEntityCenter.z;
    if ( pStartingPosition != 0 )
    {
      v21 = CBaseEntity::GetAbsOrigin(pEntity);
      v22 = (pStartingPosition->x - v21->x) + ptEntityCenter.x;
      v23 = (pStartingPosition->z - v21->z) + ptEntityCenter.z;
      ptEntityCenter.y = (pStartingPosition->y - v21->y) + ptEntityCenter.y;
      ptEntityCenter.x = v22;
      ptEntityCenter.z = v23;
    }
    v24 = pEntity->m_pCollision;
    if ( v24 != 0 )
      m_Value = v24->m_CollisionGroup.m_Value;
    else
      m_Value = 4;
    traceFilter._vptr_CTraceFilter = off_3FE6970;
    memset(&traceFilter.m_attr, 0, 24);
    traceFilter.m_attr.m_nEntityIdToIgnore = -1;
    traceFilter.m_attr.m_nHierarchyId = 0;
    traceFilter.m_attr.m_nCollisionGroup = 0;
    *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
    traceFilter.m_attr.m_nObjectSetMask = 7;
    traceFilter.m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(pEntity);
    if ( v24 != 0 )
      v25 = v24->m_collisionAttribute.m_nHierarchyId.m_Value;
    else
      v25 = 0;
    traceFilter.m_attr.m_nHierarchyId = v25;
    traceFilter._vptr_CTraceFilter = off_3FF7810;
    traceFilter.m_pPassEnt = pEntity;
    traceFilter.m_pExtraShouldHitCheckFunction = 0;
    traceFilter.m_attr.m_nCollisionGroup = m_Value;
    result = UTIL_FindClosestPassableSpace(
               &ptEntityCenter,
               &vEntityMaxs,
               vIndecisivePush,
               &traceFilter,
               fMask,
               iIterations,
               &vResult,
               nAxisRestrictionFlags);
    v26 = v30 + vResult.z;
    v27 = v32 + vResult.x;
    vOriginOut->y = v31 + vResult.y;
    vOriginOut->z = v26;
    vOriginOut->x = v27;
  }
  return result;
}


// UTIL_FindClosestPassableSpace  (line 1856, @0x00000000020e6670, libserver.so)
// calls: UTIL_FindClosestPassableSpace
bool __fastcall UTIL_FindClosestPassableSpace(
        CBaseEntity *pEntity,
        const Vector *const vIndecisivePush,
        uint64 fMask,
        Vector *pStartingPosition,
        int nAxisRestrictionFlags)
{
  bool result; // al
  bool v7; // [rsp+Ch] [rbp-24h]
  Vector vNewPos; // [rsp+10h] [rbp-20h] BYREF

  result = UTIL_FindClosestPassableSpace(
             pEntity,
             vIndecisivePush,
             fMask,
             0x64u,
             &vNewPos,
             pStartingPosition,
             nAxisRestrictionFlags);
  if ( result )
  {
    v7 = result;
    (*(pEntity->_vptr_IHandleEntity + 128))(pEntity, &vNewPos, 0, 0);
    return v7;
  }
  return result;
}


// ConvertOldKeyValuesToNew  (line 1875, @0x00000000020d6240, libserver.so)  // inlines: AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Base, CEntityKeyValuesModifyScope, CUtlMemory, CUtlVector, CUtlVectorBase, CopyData, Element, EnsureCapacity, FindKeyHash, Free, LeafCodeInfo_t, Purge, RemoveAll, SetValue, V_SetExtension<long unsigned int>, V_strcpy_safe<260ul>, V_strlen, memcpy, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, CEntitySystem::FindClassByDesignName, operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityClass::GetEntityUnserializer, V_GetFileExtension, V_stricmp_fast, ConvertMapDataKV, CEntityKeyValuesModifyScope::Release, _V_strncpy, _V_SetExtension (27 total)
// callers: CCommentarySystem::LoadCommentaryFile, UTIL_LoadAndSpawnEntitiesFromScript
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
CEntityKeyValues *__fastcall ConvertOldKeyValuesToNew(KeyValues *pKeyValues)
{
  const char *String; // rax
  const char *v3; // r13
  CEntityClass *ClassByDesignName; // r14
  CEntityKeyValues *v5; // rbx
  const char *v6; // rax
  const char *v7; // r14
  __int64 FileExtension; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v11; // cx
  __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v13; // rdx
  unsigned __int64 m_nAllocated; // rdx
  int v15; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v16; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  uint16 m_flags; // ax
  void *v19; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  __int64 v22; // rax
  __int16 v23; // ax
  void *v24; // rax
  __int16 v25; // cx
  void *v26; // rcx
  unsigned __int64 v27; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // [rsp+18h] [rbp-1C8h]
  signed int value; // [rsp+20h] [rbp-1C0h]
  signed int valuea; // [rsp+20h] [rbp-1C0h]
  __int16 v40; // [rsp+28h] [rbp-1B8h]
  __int64 v41; // [rsp+28h] [rbp-1B8h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // [rsp+28h] [rbp-1B8h]
  __int64 v43; // [rsp+28h] [rbp-1B8h]
  CEntityKeyValuesModifyScope_0 modify; // [rsp+30h] [rbp-1B0h] BYREF
  CUtlVector<ComponentUnserializerClassInfo_t*,CUtlMemory<ComponentUnserializerClassInfo_t*,int> > unserializer; // [rsp+40h] [rbp-1A0h] BYREF
  LeafCodeInfo_t v46; // [rsp+60h] [rbp-180h] BYREF
  LeafCodeInfo_t v47; // [rsp+80h] [rbp-160h] BYREF
  char pTemp[264]; // [rsp+A0h] [rbp-140h] BYREF
  unsigned __int64 v49; // [rsp+1A8h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  if ( pKeyValues == 0 )
    return 0;
  String = KeyValues::GetString(pKeyValues, "classname", 0, 0, 0);
  v3 = String;
  if ( String == 0 )
    return 0;
  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, String, 0);
  if ( ClassByDesignName == 0 )
    return 0;
  v5 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v5);
  modify.m_pKeyValues = 0;
  modify.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&modify, v5);
  if ( v5->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = v5->m_keyHashes.m_nCount;
    if ( v5->m_keyHashes.m_nCount <= 0 )
    {
LABEL_25:
      if ( m_nCount == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_75;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v35, v36, v33, v34) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_75:
          v46.m_szFile = "../../public/tier1/utlleanvector.h";
          v46.m_szFunction = "AddToTailGetPtr";
          v46.m_nLine = 557;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v46,
            "%s allocation count overflow",
            "AddToTailGetPtr");
        }
      }
      m_nAllocated = v5->m_keyHashes.m_nAllocated;
      v15 = m_nCount + 1;
      if ( v15 > m_nAllocated )
      {
        if ( v15 > 9 )
        {
          if ( m_nCount == 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_70;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v31, v32, v29, v30) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_70:
              v47.m_szFile = "../../public/tier1/utlleanvector.h";
              v47.m_szFunction = "EnsureCapacity";
              v47.m_nLine = 104;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v47,
                "%s allocation count overflow",
                "EnsureCapacity");
            }
          }
          v40 = v5->m_keyHashes.m_nAllocated;
          while ( v15 > v40 )
          {
            if ( v40 > 16382 )
            {
              v40 = 0x7FFF;
            }
            else
            {
              v25 = 2 * v40;
              if ( 2 * v40 <= 7 )
                v25 = 8;
              v40 = v25;
            }
          }
        }
        else
        {
          v40 = m_nCount + 1;
        }
        if ( m_nAllocated > 9 )
        {
          v5->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5->m_keyHashes.m_pElements, 4LL * v40);
          m_nCount = v5->m_keyHashes.m_nCount;
        }
        else if ( v40 > 9 )
        {
          v26 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v40);
          v27 = v5->m_keyHashes.m_nAllocated;
          if ( v27 != 0 )
          {
            m_pElements = (&v5->m_keyHashes.m_nAllocAllocated + 1);
            if ( v27 > 9 )
              m_pElements = v5->m_keyHashes.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          v5->m_keyHashes.m_pElements = memcpy(v26, m_pElements, 4LL * v5->m_keyHashes.m_nCount);
          m_nCount = v5->m_keyHashes.m_nCount;
        }
        v5->m_keyHashes.m_nAllocated = v40;
        m_nAllocated = v40;
      }
      v5->m_keyHashes.m_nCount = m_nCount + 1;
      if ( m_nAllocated != 0 )
      {
        v16 = (&v5->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          v16 = v5->m_keyHashes.m_pElements;
      }
      else
      {
        v16 = 0;
      }
      v16[m_nCount] = -971301790;
      v41 = m_nCount;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v5->m_keyValues);
      if ( v5->m_keyValues.m_nAllocated != 0 )
        v17 = v5->m_keyValues.m_pElements;
      else
        v17 = 0;
      v37 = v41;
      v42 = &v17[v41];
      m_flags = v42->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v42->m_value.m_flags = m_flags & 0xFFFE;
      v42->m_value.m_uint64 = 0;
      v42->m_value.m_type = 30;
      value = strlen(v3) + 1;
      v19 = CEntityVariantAllocator::Allocate(value);
      v42->m_value.m_uint64 = v19;
      memcpy(v19, v3, value);
      v42->m_value.m_flags |= 1u;
      if ( v5->m_keyValues.m_nAllocated != 0 )
        v20 = v5->m_keyValues.m_pElements;
      else
        v20 = 0;
      v20[v37].m_pAttributeName = 0;
      goto LABEL_5;
    }
    v11 = v5->m_keyHashes.m_nAllocated;
    v12 = 0;
    while ( 1 )
    {
      if ( v11 != 0 )
      {
        v13 = (&v5->m_keyHashes.m_nAllocAllocated + 1);
        if ( v11 > 9 )
          v13 = v5->m_keyHashes.m_pElements;
      }
      else
      {
        v13 = 0;
      }
      if ( v13[v12] == -971301790 )
        break;
      if ( m_nCount <= ++v12 )
        goto LABEL_25;
    }
    if ( v5->m_keyValues.m_nAllocated != 0 )
    {
      v21 = v5->m_keyValues.m_pElements;
      v22 = v12;
      if ( v21[v22].m_pAttributeName != 0 )
      {
LABEL_44:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v21[v22].m_pAttributeName);
        goto LABEL_5;
      }
      v43 = &v21[v22];
    }
    else
    {
      v22 = v12;
      v21 = 0;
      if ( *(v22 * 24 + 16) != 0 )
        goto LABEL_44;
      v43 = v22 * 24;
    }
    v23 = *(v43 + 10);
    if ( (v23 & 1) != 0 )
      *(v43 + 10) = v23 & 0xFFFE;
    *v43 = 0;
    *(v43 + 8) = 30;
    valuea = strlen(v3) + 1;
    v24 = CEntityVariantAllocator::Allocate(valuea);
    *v43 = v24;
    memcpy(v24, v3, valuea);
    *(v43 + 10) |= 1u;
  }
LABEL_5:
  unserializer.m_Size = 0;
  unserializer.m_Memory.m_pMemory = 0;
  unserializer.m_Memory.m_nAllocationCount = 0;
  unserializer.m_Memory.m_nGrowSize = 0;
  CEntityClass::GetEntityUnserializer(ClassByDesignName, &unserializer);
  v6 = KeyValues::GetString(pKeyValues, "model", 0, 0, 0);
  v7 = v6;
  if ( v6 != 0 && *v6 != 42 )
  {
    FileExtension = V_GetFileExtension(v6);
    if ( V_stricmp_fast(FileExtension, "mdl") == 0 )
    {
      _V_strncpy(pTemp, v7, 260);
      _V_SetExtension(pTemp, ".vmdl", 260);
      KeyValues::SetString(pKeyValues, "model", pTemp);
    }
  }
  ConvertMapDataKV(v3, v5, unserializer.m_Size, unserializer.m_Memory.m_pMemory, 0, 0, pKeyValues, 0);
  if ( v7 != 0 && *v7 == 42 )
    CEntityKeyValues::SetValue(v5, -926958586, v7);
  unserializer.m_Size = 0;
  if ( (unserializer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<ComponentUnserializerClassInfo_t *,int>::Purge(&unserializer.m_Memory);
    if ( (unserializer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentUnserializerClassInfo_t *,int>::Purge(&unserializer.m_Memory);
  }
  CEntityKeyValuesModifyScope::Release(&modify);
  return v5;
}


// GetSpriteInfo  (line 1976, @0x00000000020bf660, libserver.so)  // inlines: BuildSpriteLoadName, FindOrRegisterResourceByName<1952542070ull>, V_FileBase<long unsigned int>, V_StripExtension<int>, V_strncpy<int>, operator->, strchr
// calls: V_GetFileExtension, V_stricmp_fast, strchr, V_stristr_fast(char const*,char const*), _V_StripExtension, _V_FileBase, V_snprintf, _V_strncpy, DevMsg(char const*,...), __stack_chk_fail
// callers: CSprite::SetMaterialByIndex
// strings: "avi", "bik", "materials/", "materials\\", "sprites/%s", "Missing sprite material %s\n"
void __fastcall GetSpriteInfo(const char *pName, int *const nWidth, int *const nHeight, int *const nFrameCount)
{
  __int64 FileExtension; // r14
  int v9; // eax
  bool v10; // r14
  const char *v11; // rdi
  unsigned __int16 v12; // ax
  unsigned int v13; // r15d
  unsigned __int16 v14; // ax
  unsigned int v15; // r15d
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  bool bIsBIK; // [rsp+Bh] [rbp-255h]
  bool hAVIMaterial; // [rsp+Ch] [rbp-254h]
  unsigned __int16 hAVIMateriala; // [rsp+Ch] [rbp-254h]
  char pActualName[260]; // [rsp+10h] [rbp-250h] BYREF
  char v22[264]; // [rsp+120h] [rbp-140h] BYREF
  unsigned __int64 v23; // [rsp+228h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( pName != 0 && *pName != 0 )
  {
    FileExtension = V_GetFileExtension();
    hAVIMaterial = V_stricmp_fast(FileExtension, "avi") == 0;
    bIsBIK = V_stricmp_fast(FileExtension, "bik") == 0;
    v9 = V_stricmp_fast(FileExtension, "vmat");
    v10 = v9 == 0;
    if ( (hAVIMaterial || bIsBIK || v9 == 0) && (strchr(pName, 47) != 0 || strchr(pName, 92) != 0) )
    {
      if ( v10 )
      {
        if ( pName == V_stristr_fast(pName, "materials/") || pName == V_stristr_fast(pName, "materials\\") )
          v11 = pName + 10;
        else
          v11 = pName;
        _V_StripExtension(v11, pActualName, 260);
      }
      else
      {
        _V_strncpy(pActualName, pName, 260);
      }
    }
    else
    {
      _V_FileBase(pName, v22, 260);
      V_snprintf(pActualName, 260, "sprites/%s", v22);
    }
    *nFrameCount = 1;
    *nHeight = 1;
    *nWidth = 1;
    if ( hAVIMaterial && g_pAVI != 0 )
    {
      v12 = (*(*g_pAVI + 128LL))(g_pAVI, pName, pName, "GAME");
      v13 = v12;
      hAVIMateriala = v12;
      (*(*g_pAVI + 168LL))(g_pAVI, v12, nWidth, nHeight);
      *nFrameCount = (*(*g_pAVI + 192LL))(g_pAVI, v13);
      if ( hAVIMateriala != 0xFFFF )
        (*(*g_pAVI + 136LL))(g_pAVI, v13);
    }
    else if ( bIsBIK )
    {
      if ( g_pBIK != 0 )
      {
        v14 = (*(*g_pBIK + 88LL))(g_pBIK, pName, pName, "GAME", 0);
        if ( v14 != 0xFFFF )
        {
          v15 = v14;
          (*(*g_pBIK + 152LL))(g_pBIK, v14, nWidth, nHeight);
          *nFrameCount = (*(*g_pBIK + 176LL))(g_pBIK, v15);
          (*(*g_pBIK + 96LL))(g_pBIK, v15);
        }
      }
    }
    else
    {
      v16 = (*(*g_pResourceSystem + 256LL))(g_pResourceSystem, pName, 1952542070, 1);
      v17 = v16;
      if ( v16 != 0 )
      {
        *nWidth = (*(**v16 + 56LL))(*v16);
        *nHeight = (*(**v17 + 64LL))(*v17);
        *nFrameCount = (*(**v17 + 72LL))(*v17);
      }
      else
      {
        DevMsg("Missing sprite material %s\n", pName);
      }
    }
  }
  else
  {
    *nHeight = 0;
    *nWidth = 0;
    *nFrameCount = 1;
  }
}


// DispatchSpawn  (line 2051, @0x00000000020d5d80, libserver.so)  // inlines: AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Base, CEntityKeyValuesModifyScope, CopyData, Element, EnsureCapacity, FindKeyHash, Free, GetClassNameAsCStr, GetClassname, LeafCodeInfo_t, SetValue, String, V_strlen, memcpy, operator=, operator[], ~CEntityKeyValuesModifyScope
// calls: CEntitySystem::QueueSpawnEntity, CEntitySystem::ExecuteQueuedCreation, operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValuesModifyScope::Release, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CEntityVariantAllocator::Allocate, memcpy, Warning, _Unwind_Resume (17 total)
// callers: CGibShooter::CreateGib, CEnvShooter::CreateGib, CFuncLadderEndPoint::Validate, CreateWeaponManager, CBasePlayer::CreateViewModel, CBasePlayer::CheatImpulseCommands, CPhysicsEntitySolver::Create, CreatePlayerLoadSave, CPluginBotManager::CreateBot, CPointSpotlight::SpotlightCreate, BreakModelCreateSingle, CRopeKeyframe::Create (16 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow", "EnsureCapacity"
int __fastcall DispatchSpawn(CBaseEntity *pEntity, CEntityKeyValues *pEntityKeyValues)
{
  CEntityKeyValues *v3; // rbx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v8; // cx
  __int64 v9; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v10; // rdx
  unsigned __int64 m_nAllocated; // rdx
  int v12; // esi
  int v13; // r15d
  int v14; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rax
  __int64 v16; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  __int64 v18; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // r15
  uint16 m_flags; // ax
  void *v21; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r15
  __int16 v26; // ax
  void *v27; // rax
  int v28; // ecx
  void *v29; // rcx
  unsigned __int64 v30; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  signed int v40; // [rsp+4h] [rbp-8Ch]
  __int64 v41; // [rsp+8h] [rbp-88h]
  signed int v42; // [rsp+8h] [rbp-88h]
  CEntityKeyValuesModifyScope_0 sg; // [rsp+10h] [rbp-80h] BYREF
  LeafCodeInfo_t v44; // [rsp+20h] [rbp-70h] BYREF
  LeafCodeInfo_t v45; // [rsp+40h] [rbp-50h] BYREF

  if ( pEntity != 0 )
  {
    v3 = pEntityKeyValues;
    if ( pEntityKeyValues != 0 )
    {
LABEL_3:
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, pEntity, v3);
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      return 0;
    }
    v3 = operator new(0x70u);
    CEntityKeyValues::CEntityKeyValues(v3);
    sg.m_pKeyValues = 0;
    sg.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&sg, v3);
    m_pEntity = pEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    if ( v3->m_nQueuedForSpawnCount > 0 )
    {
LABEL_8:
      CEntityKeyValuesModifyScope::Release(&sg);
      goto LABEL_3;
    }
    m_nCount = v3->m_keyHashes.m_nCount;
    if ( v3->m_keyHashes.m_nCount <= 0 )
    {
LABEL_17:
      if ( m_nCount == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_64;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_64:
          v44.m_szFile = "../../public/tier1/utlleanvector.h";
          v44.m_szFunction = "AddToTailGetPtr";
          v44.m_nLine = 557;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v44,
            "%s allocation count overflow",
            "AddToTailGetPtr");
        }
      }
      m_nAllocated = v3->m_keyHashes.m_nAllocated;
      v12 = m_nCount + 1;
      if ( v12 > m_nAllocated )
      {
        LOWORD(v13) = m_nCount + 1;
        if ( v12 > 9 )
        {
          if ( m_nCount == 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_69;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v38, v39, v36, v37) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_69:
              v45.m_szFile = "../../public/tier1/utlleanvector.h";
              v45.m_szFunction = "EnsureCapacity";
              v45.m_nLine = 104;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v45,
                "%s allocation count overflow",
                "EnsureCapacity");
            }
          }
          v13 = v3->m_keyHashes.m_nAllocated;
          while ( 1 )
          {
            v14 = v13;
            if ( v12 <= v13 )
              break;
            if ( v13 <= 16382 )
            {
              v28 = 2 * v13;
              v13 = 8;
              if ( 2 * v14 > 7 )
                v13 = v28;
            }
            else
            {
              v13 = 0x7FFF;
            }
          }
        }
        if ( m_nAllocated > 9 )
        {
          v3->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v3->m_keyHashes.m_pElements, 4LL * v13);
          m_nCount = v3->m_keyHashes.m_nCount;
        }
        else if ( v13 > 9 )
        {
          v29 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v13);
          v30 = v3->m_keyHashes.m_nAllocated;
          if ( v30 != 0 )
          {
            m_pElements = (&v3->m_keyHashes.m_nAllocAllocated + 1);
            if ( v30 > 9 )
              m_pElements = v3->m_keyHashes.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          v3->m_keyHashes.m_pElements = memcpy(v29, m_pElements, 4LL * v3->m_keyHashes.m_nCount);
          m_nCount = v3->m_keyHashes.m_nCount;
        }
        v3->m_keyHashes.m_nAllocated = v13;
        m_nAllocated = v13;
      }
      v3->m_keyHashes.m_nCount = m_nCount + 1;
      if ( m_nAllocated != 0 )
      {
        v15 = (&v3->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          v15 = v3->m_keyHashes.m_pElements;
      }
      else
      {
        v15 = 0;
      }
      v16 = m_nCount;
      v15[m_nCount] = -971301790;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v3->m_keyValues);
      if ( v3->m_keyValues.m_nAllocated != 0 )
        v17 = v3->m_keyValues.m_pElements;
      else
        v17 = 0;
      v18 = 24 * v16;
      v19 = &v17[v16];
      v41 = v18;
      m_flags = v19->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v19->m_value.m_flags = m_flags & 0xFFFE;
      v19->m_value.m_uint64 = 0;
      v19->m_value.m_type = 30;
      if ( m_pAsString != 0 )
      {
        v40 = strlen(m_pAsString) + 1;
        v21 = CEntityVariantAllocator::Allocate(v40);
        v19->m_value.m_uint64 = v21;
        memcpy(v21, m_pAsString, v40);
        v19->m_value.m_flags |= 1u;
      }
      if ( v3->m_keyValues.m_nAllocated != 0 )
        v22 = v3->m_keyValues.m_pElements;
      else
        v22 = 0;
      *(&v22->m_pAttributeName + v41) = 0;
      goto LABEL_8;
    }
    v8 = v3->m_keyHashes.m_nAllocated;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 != 0 )
      {
        v10 = (&v3->m_keyHashes.m_nAllocAllocated + 1);
        if ( v8 > 9 )
          v10 = v3->m_keyHashes.m_pElements;
      }
      else
      {
        v10 = 0;
      }
      if ( v10[v9] == -971301790 )
        break;
      if ( m_nCount <= ++v9 )
        goto LABEL_17;
    }
    if ( v3->m_keyValues.m_nAllocated != 0 )
    {
      v23 = v3->m_keyValues.m_pElements;
      v24 = v9;
      v25 = &v23[v24];
      if ( v23[v24].m_pAttributeName != 0 )
      {
LABEL_42:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v23[v24].m_pAttributeName);
        goto LABEL_8;
      }
    }
    else
    {
      v24 = v9;
      v23 = 0;
      v25 = v24 * 24;
      if ( *(v24 * 24 + 16) != 0 )
        goto LABEL_42;
    }
    v26 = *(v25 + 10);
    if ( (v26 & 1) != 0 )
      *(v25 + 10) = v26 & 0xFFFE;
    *v25 = 0;
    *(v25 + 8) = 30;
    if ( m_pAsString != 0 )
    {
      v42 = strlen(m_pAsString) + 1;
      v27 = CEntityVariantAllocator::Allocate(v42);
      *v25 = v27;
      memcpy(v27, m_pAsString, v42);
      *(v25 + 10) |= 1u;
    }
    goto LABEL_8;
  }
  return 0;
}


// UTIL_MakeDir  (line 2080, @0x00000000020bf9d0, libserver.so)  // inlines: V_strlen, V_strncpy<long unsigned int>
// calls: _V_strncpy, __stack_chk_fail
// callers: UTIL_CreatePath
void __fastcall UTIL_MakeDir(const char *path)
{
  int v2; // edx
  __int64 v3; // rdx
  char v4; // al
  char *v5; // r13
  char testpath[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  _V_strncpy(testpath, path, 260);
  v2 = strlen(testpath);
  if ( v2 > 0 )
  {
    v3 = v2 - 1;
    v4 = testpath[v3];
    if ( v4 == 47 )
    {
      testpath[v3] = 0;
    }
    else if ( v4 == 92 )
    {
      testpath[v3] = 0;
    }
  }
  if ( testpath[0] == 47 || (v5 = "MOD", testpath[0] == 92) )
  {
    if ( testpath[1] == 47 || (v5 = "MOD", testpath[1] == 92) )
      v5 = 0;
  }
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, testpath, v5) != 0
    && (*(g_pFullFileSystem->_vptr_IAppSystem + 28))(g_pFullFileSystem, testpath, v5) == 0 )
  {
    (*(g_pFullFileSystem->_vptr_IAppSystem + 25))(g_pFullFileSystem, testpath, v5);
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 27))(g_pFullFileSystem, path, v5);
}


// UTIL_CreatePath  (line 2111, @0x00000000020bfb50, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy, UTIL_MakeDir, __stack_chk_fail
// callers: UTIL_CopyFile
void __fastcall UTIL_CreatePath(const char *path)
{
  char *v1; // r12
  char v2; // bl
  char temppath[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v4; // [rsp+208h] [rbp-28h]

  v1 = &temppath[1];
  v4 = __readfsqword(0x28u);
  _V_strncpy(temppath, path, 512);
  v2 = temppath[1];
  if ( temppath[1] != 0 )
  {
    do
    {
      while ( v2 != 92 && v2 != 47 )
      {
        v2 = *++v1;
        if ( *v1 == 0 )
          return;
      }
      *v1++ = 0;
      UTIL_MakeDir(temppath);
      *(v1 - 1) = v2;
      v2 = *v1;
    }
    while ( *v1 != 0 );
  }
}


// UTIL_CopyFile  (line 2131, @0x00000000020bfc00, libserver.so)
// calls: UTIL_CreatePath, __stack_chk_fail
// strings: "wb"
bool __fastcall UTIL_CopyFile(const char *netpath, const char *cachepath)
{
  bool v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  IBaseFileSystem *v6; // rdi
  int (**vptr_IBaseFileSystem)(...); // rax
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r8
  unsigned int v11; // r15d
  unsigned __int64 v13; // [rsp+0h] [rbp-1060h]
  __int64 v14; // [rsp+8h] [rbp-1058h]
  int v15; // [rsp+14h] [rbp-104Ch]
  __int64 v16; // [rsp+18h] [rbp-1048h]
  char buf[4104]; // [rsp+20h] [rbp-1040h] BYREF
  unsigned __int64 v18; // [rsp+1028h] [rbp-38h]

  v3 = 0;
  v18 = __readfsqword(0x28u);
  v4 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, netpath, "rb", 0);
  if ( v4 != 0 )
  {
    UTIL_CreatePath(cachepath);
    v5 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, cachepath, "wb", "MOD");
    v6 = &g_pFullFileSystem->IBaseFileSystem;
    vptr_IBaseFileSystem = g_pFullFileSystem->_vptr_IBaseFileSystem;
    if ( v5 != 0 )
    {
      v8 = vptr_IBaseFileSystem[6](v6, v4);
      v9 = v8;
      if ( v8 > 0 )
      {
        v10 = 0;
        v16 = -(v8 & 0xFFFFF000);
        v11 = v8;
        v13 = ~((v8 - 1) >> 12) << 12;
        if ( (v8 & 0xFFFFF000) != 0 )
        {
          while ( 1 )
          {
            v14 = v10;
            v15 = v9;
            (*g_pFullFileSystem->_vptr_IBaseFileSystem)(&g_pFullFileSystem->IBaseFileSystem, buf, 4096, v4);
            (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(&g_pFullFileSystem->IBaseFileSystem, buf, 4096, v5);
            v9 = v15;
            v10 = v14 - 4096;
            if ( v14 - 4096 == v13 )
              break;
            v11 = v15 + v10;
            if ( v10 == v16 )
              goto LABEL_7;
          }
        }
        else
        {
LABEL_7:
          (*g_pFullFileSystem->_vptr_IBaseFileSystem)(&g_pFullFileSystem->IBaseFileSystem, buf, v11, v4);
          (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(&g_pFullFileSystem->IBaseFileSystem, buf, v11, v5);
        }
      }
      v3 = 1;
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v4);
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v5);
    }
    else
    {
      vptr_IBaseFileSystem[3](v6, v4);
    }
  }
  return v3;
}


// CSortedEntityList::CSortedEntityList  (line 2186, @0x00000000020bfdf0, libserver.so)  // inlines: CUtlMemory, CUtlSortVector, CUtlVector, CUtlVectorBase
// callers: report_simthinklist, report_touchlinks
void __fastcall CSortedEntityList::CSortedEntityList(CSortedEntityList *const this)
{
  this->m_sortedList.m_Size = 0;
  this->m_sortedList.m_Memory.m_pMemory = 0;
  this->m_sortedList.m_Memory.m_nAllocationCount = 0;
  this->m_sortedList.m_Memory.m_nGrowSize = 0;
  this->m_sortedList.m_pLessContext = 0;
  this->m_sortedList.m_bNeedsSort = 0;
  this->m_emptyCount = 0;
}


// CSortedEntityList::CEntityReportLess::Less  (line 2190, @0x00000000020bfe30, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: V_stricmp_fast
// callers: CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > >::Insert
bool __fastcall CSortedEntityList::CEntityReportLess::Less(
        CSortedEntityList::CEntityReportLess *const this,
        const CSortedEntityList::ENTITYPTR *const src1,
        const CSortedEntityList::ENTITYPTR *const src2,
        void *pCtx)
{
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // rax
  const char *v6; // rdi
  CEntityIdentity *v7; // rdx

  m_pEntity = (*src2)->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v6 = "";
  v7 = (*src1)->m_pEntity;
  if ( v7->m_designerName.u.m_Id != 0 )
    v6 = v7->m_designerName.u.m_pAsString;
  return V_stricmp_fast(v6, m_pAsString) >> 31;
}


// CSortedEntityList::AddEntityToList  (line 2197, @0x00000000020dab00, libserver.so)
// calls: CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > >::Insert
// callers: report_simthinklist, report_touchlinks
void __fastcall CSortedEntityList::AddEntityToList(CSortedEntityList *const this, CBaseEntity *pEntity)
{
  CBaseEntity *pEntitya; // [rsp+8h] [rbp-8h] BYREF

  pEntitya = pEntity;
  if ( pEntity != 0 )
    CUtlSortVector<CBaseEntity *,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>>::Insert(
      &this->m_sortedList,
      &pEntitya);
  else
    ++this->m_emptyCount;
}


// CSortedEntityList::ReportEntityList  (line 2208, @0x00000000020bfe80, libserver.so)  // inlines: FStrEq, GetClassNameAsCStr, GetClassname, String, _V_strcmp
// calls: strcmp, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: report_simthinklist, report_touchlinks, report_entities
// strings: "Total %d entities (%d empty)\n", "Class: %s (%d)\n"
void __fastcall CSortedEntityList::ReportEntityList(CSortedEntityList *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  const char *v4; // r14
  CBaseEntity *v5; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rbx
  int v8; // eax
  const char *v9; // rcx
  int m_Size; // [rsp+8h] [rbp-38h]
  int count; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_sortedList.m_Size;
  if ( this->m_sortedList.m_Size <= 0 )
  {
    v8 = this->m_sortedList.m_Size;
    goto LABEL_14;
  }
  v2 = 0;
  v3 = 0;
  count = 0;
  v4 = "";
  do
  {
    while ( 1 )
    {
      v5 = this->m_sortedList.m_Memory.m_pMemory[v2];
      if ( v5 != 0 )
        break;
LABEL_5:
      ++v3;
      ++v2;
      if ( m_Size <= v3 )
        goto LABEL_12;
    }
    m_pEntity = v5->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    if ( v4 != m_pAsString && strcmp(m_pAsString, v4) != 0 )
    {
      if ( count != 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 1) != 0 )
        {
          v9 = v4;
          v4 = m_pAsString;
          LoggingSystem_Log(LOG_GENERAL, 1, "Class: %s (%d)\n", v9, count);
        }
        else
        {
          v4 = m_pAsString;
        }
        count = 1;
        m_Size = this->m_sortedList.m_Size;
      }
      else
      {
        v4 = m_pAsString;
        count = 1;
      }
      goto LABEL_5;
    }
    ++count;
    ++v3;
    ++v2;
  }
  while ( m_Size > v3 );
LABEL_12:
  v8 = m_Size;
  if ( *v4 != 0 && count != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 1) != 0 )
      LoggingSystem_Log(LOG_GENERAL, 1, "Class: %s (%d)\n", v4, count);
    v8 = this->m_sortedList.m_Size;
  }
LABEL_14:
  if ( v8 != 0 && LoggingSystem_IsChannelEnabled(LOG_GENERAL, 1) != 0 )
    LoggingSystem_Log(LOG_GENERAL, 1, "Total %d entities (%d empty)\n", this->m_sortedList.m_Size, this->m_emptyCount);
}


// UTIL_GetModDir  (line 2265, @0x00000000020c0060, libserver.so)  // inlines: V_StripLastDir<unsigned int>, V_strlen, V_strncpy<int>, V_strncpy<unsigned int>
// calls: CommandLine, strlen, _V_strncpy, V_strnchr, _V_StripLastDir
// callers: CBaseGameStats_Driver::ResetData
// strings: "hl2"
bool __fastcall UTIL_GetModDir(char *lpszTextOut, unsigned int nSize)
{
  __int64 v4; // rax
  const char *v5; // rax
  const char *v6; // rbx
  unsigned int v7; // edx
  bool result; // al
  int v9; // r14d
  __int64 v10; // r12
  int v11; // edx

  v4 = CommandLine(lpszTextOut, nSize);
  v5 = (*(*v4 + 80LL))(v4, "-game", "hl2");
  v6 = v5;
  if ( v5 == 0 || (v7 = strlen(v5), result = 0, nSize >= v7) )
  {
    _V_strncpy(lpszTextOut, v6, nSize);
    if ( V_strnchr(lpszTextOut, 47, nSize) != 0 || V_strnchr(lpszTextOut, 92, nSize) != 0 )
    {
      _V_StripLastDir(lpszTextOut, nSize);
      if ( lpszTextOut != 0 )
      {
        v9 = strlen(lpszTextOut);
        v10 = v9;
      }
      else
      {
        v10 = 0;
        v9 = 0;
      }
      if ( v6 != 0 )
        v11 = strlen(v6);
      else
        v11 = 0;
      _V_strncpy(lpszTextOut, &v6[v10], (v11 - v9 + 1));
    }
    return 1;
  }
  return result;
}


// COM_GetModDirectory  (line 2287, @0x00000000020c0160, libserver.so)  // inlines: V_StripLastDir<long unsigned int>, V_strlen, V_strncpy<long unsigned int>, strchr
// calls: CommandLine, _V_strncpy, strchr, _V_StripLastDir
// callers: CPlayerAchievementState::Init
// strings: "hl2", "-defaultgamedir"
// globals: COM_GetModDirectory(void)::modDir
const char *__cdecl COM_GetModDirectory()
{
  __int64 v0; // rdi
  char *v1; // rdx
  int v2; // ecx
  unsigned int v3; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, char *, __int64); // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // rcx
  int v13; // edi
  unsigned int v14; // edx
  __int64 v15; // rcx

  v1 = COM_GetModDirectory(void)::modDir;
  do
  {
    v2 = *v1;
    v1 += 4;
    v3 = ~v2 & (v2 - 16843009) & 0x80808080;
  }
  while ( v3 == 0 );
  if ( (~v2 & (v2 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v3) = (~v2 & (v2 - 16843009) & 0x80808080) >> 16;
    LODWORD(v1) = v1 + 2;
  }
  if ( v1 - (__CFADD__(v3, v3) + 3) != COM_GetModDirectory(void)::modDir )
    return COM_GetModDirectory(void)::modDir;
  v5 = CommandLine(v0, COM_GetModDirectory(void)::modDir);
  v6 = *(*v5 + 80LL);
  v9 = CommandLine(v7, v8);
  v10 = (*(*v9 + 80LL))(v9, "-defaultgamedir", "hl2");
  v11 = v6(v5, "-game", v10);
  _V_strncpy(COM_GetModDirectory(void)::modDir, v11, 260);
  if ( strchr(COM_GetModDirectory(void)::modDir, 47) != 0 || strchr(COM_GetModDirectory(void)::modDir, 92) != 0 )
  {
    _V_StripLastDir(COM_GetModDirectory(void)::modDir, 260);
    v12 = COM_GetModDirectory(void)::modDir;
    do
    {
      v13 = *v12;
      v12 += 4;
      v14 = ~v13 & (v13 - 16843009) & 0x80808080;
    }
    while ( v14 == 0 );
    if ( (~v13 & (v13 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v14) = (~v13 & (v13 - 16843009) & 0x80808080) >> 16;
      LODWORD(v12) = v12 + 2;
    }
    v15 = (v12 - (__CFADD__(v14, v14) + 3) - COM_GetModDirectory(void)::modDir);
    _V_strncpy(COM_GetModDirectory(void)::modDir, v11 + v15, 260 - v15);
  }
  return COM_GetModDirectory(void)::modDir;
}


// UTIL_CalcFrustumThroughConvexPolygon  (line 2307, @0x00000000020c02c0, libserver.so)  // inlines: Cross, CrossProduct, Dot, DotProduct, Init, LengthSqr, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, memcpy, memmove, operator*, operator+, operator-, operator=
// calls: ClipPolyToPlane, VectorNormalize, memcpy, memmove, __stack_chk_fail
int __fastcall UTIL_CalcFrustumThroughConvexPolygon(
        const Vector *pPolyVertices,
        int iPolyVertCount,
        const Vector *const vFrustumOrigin,
        const VPlane *pInputFrustumPlanes,
        int iInputFrustumPlanes,
        VPlane *pOutputFrustumPlanes,
        int iMaxOutputPlanes,
        int iPreserveCount)
{
  int v8; // ebx
  int result; // eax
  float m_Dist; // xmm0_4
  void *v13; // rsp
  unsigned __int64 v14; // r15
  int v15; // eax
  int v16; // esi
  Vector *v17; // rdi
  Vector *v18; // rdx
  int v19; // r13d
  const VPlane *v20; // r14
  int v21; // ebx
  int v22; // ecx
  char v23; // cl
  float *p_x; // r13
  __int64 v25; // r15
  int v26; // ecx
  size_t v27; // r14
  float x; // xmm8_4
  float v29; // xmm3_4
  float y; // xmm12_4
  float v31; // xmm4_4
  float z; // xmm2_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  float *v35; // rax
  vec_t v36; // xmm1_4
  vec_t v37; // xmm5_4
  VPlane *v38; // r14
  int v39; // r15d
  float v40; // xmm1_4
  char v41; // si
  int v42; // esi
  vec_t v43; // xmm1_4
  int v44; // ecx
  int v45; // esi
  vec_t v46; // xmm0_4
  vec_t v47; // xmm2_4
  Vector *v48; // rcx
  __int64 v49; // rcx
  Vector *v50; // rsi
  Vector *v51; // rcx
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  vec_t v56; // xmm1_4
  float v57; // xmm1_4
  float v58; // xmm0_4
  float v59; // xmm4_4
  void *v60; // rsp
  __int64 v61; // r15
  void *v62; // rsp
  float *v63; // r10
  float *v64; // rax
  unsigned __int64 v65; // rdx
  float v66; // xmm0_4
  float *v67; // rax
  float *v68; // r12
  float v69; // xmm1_4
  float v70; // xmm1_4
  float *v71; // rax
  int v72; // esi
  int v73; // edi
  int v74; // eax
  __int64 v75; // r11
  int v76; // r9d
  __int64 v77; // r8
  float *v78; // r8
  float v79; // xmm6_4
  int v80; // r10d
  __int64 v81; // r14
  int v82; // eax
  float *v83; // rdi
  float v84; // xmm12_4
  float v85; // xmm14_4
  float v86; // xmm13_4
  int v87; // r9d
  __int64 v88; // r15
  float *v89; // rsi
  float v90; // xmm2_4
  float v91; // xmm3_4
  float v92; // xmm1_4
  __int64 v93; // rdx
  float *v94; // rax
  float v95; // xmm15_4
  float v96; // xmm5_4
  float v97; // xmm4_4
  float v98; // xmm11_4
  float v99; // xmm5_4
  float v100; // xmm6_4
  float v101; // xmm9_4
  float v102; // xmm0_4
  float v103; // xmm6_4
  float v104; // xmm5_4
  float v105; // xmm0_4
  const Vector *vFrustumOrigina; // [rsp+0h] [rbp-90h]
  const Vector *vFrustumOriginb; // [rsp+0h] [rbp-90h]
  const VPlane *pInputFrustumPlanesa; // [rsp+10h] [rbp-80h] BYREF
  const Vector *pPolyVerticesa; // [rsp+18h] [rbp-78h]
  int iInputFrustumPlanesa; // [rsp+20h] [rbp-70h]
  int iFlipNormalsXOR; // [rsp+24h] [rbp-6Ch]
  __int64 iElementShift; // [rsp+28h] [rbp-68h]
  Vector vNormal; // [rsp+30h] [rbp-60h] BYREF
  Vector vTemp[2]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v116; // [rsp+58h] [rbp-38h]

  v8 = iPolyVertCount;
  pPolyVerticesa = pPolyVertices;
  v116 = __readfsqword(0x28u);
  result = 0;
  pInputFrustumPlanesa = pInputFrustumPlanes;
  iInputFrustumPlanesa = iInputFrustumPlanes;
  if ( iPolyVertCount <= 2 )
    return result;
  iFlipNormalsXOR = iMaxOutputPlanes - iPreserveCount;
  if ( iInputFrustumPlanes <= 0 )
  {
    p_x = &pPolyVerticesa->x;
    if ( iPolyVertCount <= iFlipNormalsXOR )
      goto LABEL_14;
    v25 = iPolyVertCount;
    v27 = 3LL * iPolyVertCount;
    v60 = alloca(((v27 * 4 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    p_x = (&pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL);
    memcpy((&pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL), pPolyVerticesa, v27 * 4);
    v26 = v8;
    goto LABEL_25;
  }
  m_Dist = pInputFrustumPlanes->m_Dist;
  v13 = alloca(((24LL * (iPolyVertCount + iInputFrustumPlanes) + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v14 = (&pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL) + 12LL * (iPolyVertCount + iInputFrustumPlanes);
  *&vTemp[0].x = &pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL;
  *&vTemp[0].z = v14;
  v15 = ClipPolyToPlane(
          pPolyVertices,
          iPolyVertCount,
          (&pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL),
          &pInputFrustumPlanes->m_Normal,
          m_Dist,
          0.0099999998);
  v16 = iInputFrustumPlanes;
  v8 = v15;
  if ( iInputFrustumPlanes != 1 )
  {
    if ( v15 <= 2 )
      return 0;
    v17 = (&pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL);
    v18 = v14;
    v19 = 2;
    v20 = pInputFrustumPlanesa + 1;
    v21 = v16;
    while ( 1 )
    {
      v15 = ClipPolyToPlane(v17, v15, v18, &v20->m_Normal, v20->m_Dist, 0.0099999998);
      v23 = v19;
      if ( v19 == v21 )
        break;
      ++v19;
      ++v20;
      if ( v15 <= 2 )
        return 0;
      v22 = v23 & 1;
      v18 = *(&vTemp[0].x + v22);
      v17 = *(&vTemp[0].x + (v22 ^ 1));
    }
    v8 = v15;
  }
  if ( v8 <= 2 )
    return 0;
  p_x = *(&vTemp[0].x + !(iInputFrustumPlanesa & 1));
  if ( iFlipNormalsXOR >= v8 )
    goto LABEL_14;
  v25 = v8;
  v26 = v8;
  v27 = 3LL * v8;
LABEL_25:
  v61 = v25;
  v62 = alloca(((v61 * 4 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v63 = (&pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL);
  if ( v8 != 1 )
  {
    v64 = p_x;
    v65 = &pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL;
    do
    {
      v66 = v64[3];
      v65 += 4LL;
      v64 += 3;
      *(v65 - 4) = (((v66 - *(v64 - 3)) * (v66 - *(v64 - 3))) + ((v64[1] - *(v64 - 2)) * (v64[1] - *(v64 - 2))))
                 + ((v64[2] - *(v64 - 1)) * (v64[2] - *(v64 - 1)));
    }
    while ( v65 != &v63[v8 - 2 + 1] );
  }
  v67 = &p_x[v27 - 3];
  --v8;
  vFrustumOriginb = vFrustumOrigin;
  v68 = (&pInputFrustumPlanesa & 0xFFFFFFFFFFFFFFEFLL);
  v69 = p_x[2] - v67[2];
  v63[v61 - 1] = (((*p_x - *v67) * (*p_x - *v67)) + ((p_x[1] - v67[1]) * (p_x[1] - v67[1]))) + (v69 * v69);
  v70 = *v63;
  if ( v8 == 0 )
    goto LABEL_37;
LABEL_29:
  v71 = v68 + 1;
  v72 = 1;
  v73 = 0;
  do
  {
    if ( v70 > *v71 )
    {
      v73 = v72;
      v70 = *v71;
    }
    ++v72;
    ++v71;
  }
  while ( v72 != v26 );
  v74 = v73 + 1;
  v75 = v73;
  v76 = v73 + 2;
  v77 = 3LL * v73;
  while ( 1 )
  {
    v78 = &p_x[v77];
    v79 = *v78;
    v80 = v74 % v26;
    v81 = v80;
    v82 = v73 + v8;
    v83 = &p_x[3 * v80];
    v84 = v83[1];
    v85 = v83[2];
    v86 = *v83;
    v87 = v76 % v26;
    v88 = v87;
    v89 = &p_x[3 * v87];
    v90 = v89[1] - v84;
    v91 = v89[2] - v85;
    v92 = *v89 - *v83;
    v93 = v82 % v26;
    v94 = &p_x[3 * v93];
    v95 = v94[2];
    v96 = v78[1];
    v97 = v78[2] - v95;
    v98 = *v94;
    *&iElementShift = v94[1];
    v99 = v96 - *&iElementShift;
    v100 = v79 - v98;
    v101 = (v99 * v91) - (v97 * v90);
    v102 = (((((v91 * (v84 - *&iElementShift)) - (v90 * (v85 - v95))) * v101)
           + ((((v85 - v95) * v92) - (v91 * (v86 - v98))) * ((v97 * v92) - (v100 * v91))))
          + (((v90 * (v86 - v98)) - (v92 * (v84 - *&iElementShift))) * ((v100 * v90) - (v99 * v92))))
         / (((v101 * v101) + (((v97 * v92) - (v100 * v91)) * ((v97 * v92) - (v100 * v91))))
          + (((v100 * v90) - (v99 * v92)) * ((v100 * v90) - (v99 * v92))));
    v103 = (v100 * v102) + v98;
    v104 = (v99 * v102) + *&iElementShift;
    v105 = (v102 * v97) + v95;
    *v78 = v103;
    v78[1] = v104;
    v78[2] = v105;
    v68[v93] = (((v103 - *v94) * (v103 - *v94)) + ((v104 - v94[1]) * (v104 - v94[1])))
             + ((v105 - v94[2]) * (v105 - v94[2]));
    v68[v75] = (((*v89 - *v78) * (*v89 - *v78)) + ((v89[1] - v78[1]) * (v89[1] - v78[1])))
             + ((v89[2] - v78[2]) * (v89[2] - v78[2]));
    if ( v80 < v87 )
      break;
    if ( iFlipNormalsXOR >= v8 )
      goto LABEL_39;
LABEL_36:
    v26 = v8--;
    v70 = *v68;
    if ( v8 != 0 )
      goto LABEL_29;
LABEL_37:
    v75 = 0;
    v77 = 0;
    v76 = 2;
    v74 = 1;
    v73 = 0;
  }
  iElementShift = v26 - v87;
  memmove(v83, v89, 12 * iElementShift);
  memmove(&v68[v81], &v68[v88], 4 * iElementShift);
  if ( iFlipNormalsXOR < v8 )
    goto LABEL_36;
LABEL_39:
  vFrustumOrigin = vFrustumOriginb;
LABEL_14:
  x = pPolyVerticesa[1].x;
  v29 = vFrustumOrigin->x;
  y = pPolyVerticesa->y;
  v31 = pPolyVerticesa[2].y - pPolyVerticesa[1].y;
  z = vFrustumOrigin->z;
  v33 = pPolyVerticesa[2].z - pPolyVerticesa[1].z;
  v34 = vFrustumOrigin->y;
  iFlipNormalsXOR = ((((vFrustumOrigin->x - pPolyVerticesa->x)
                     * (((pPolyVerticesa[1].z - pPolyVerticesa->z) * v31) - ((pPolyVerticesa[1].y - y) * v33)))
                    + ((v34 - y)
                     * ((v33 * (x - pPolyVerticesa->x))
                      - ((pPolyVerticesa[1].z - pPolyVerticesa->z) * (pPolyVerticesa[2].x - x)))))
                   + ((z - pPolyVerticesa->z)
                    * (((pPolyVerticesa[2].x - x) * (pPolyVerticesa[1].y - y)) - (v31 * (x - pPolyVerticesa->x))))) < 0.0;
  vFrustumOrigina = v8;
  v35 = &p_x[3 * v8 - 3];
  v36 = v35[2] - z;
  v37 = *v35 - v29;
  vTemp[0].y = v35[1] - v34;
  vTemp[0].z = v36;
  vTemp[0].x = v37;
  if ( v8 != 0 )
  {
    LODWORD(iElementShift) = v8;
    v38 = pOutputFrustumPlanes;
    v39 = 0;
    pPolyVerticesa = &vNormal;
    while ( 1 )
    {
      v40 = p_x[1];
      v41 = v39++;
      v42 = v41 & 1;
      p_x += 3;
      ++v38;
      v43 = v40 - v34;
      v44 = v42 ^ 1;
      v45 = iFlipNormalsXOR ^ v42;
      v46 = *(p_x - 1) - z;
      v47 = *(p_x - 3) - v29;
      v48 = &vTemp[v44];
      v48->y = v43;
      v48->x = v47;
      v48->z = v46;
      v49 = v45;
      v50 = &vTemp[v45 ^ 1];
      v51 = &vTemp[v49];
      v52 = v50->z;
      v53 = v50->y;
      v54 = v51->x;
      v55 = v50->x * v51->y;
      v56 = (v51->z * v50->x) - (v52 * v51->x);
      vNormal.x = (v51->y * v52) - (v51->z * v53);
      vNormal.y = v56;
      vNormal.z = (v54 * v53) - v55;
      VectorNormalize(pPolyVerticesa);
      v57 = vNormal.z;
      v58 = (vFrustumOrigin->x * vNormal.x) + (vFrustumOrigin->y * vNormal.y);
      v59 = vFrustumOrigin->z;
      v38[-1].m_Normal = vNormal;
      v38[-1].m_Dist = v58 + (v59 * v57);
      if ( iElementShift == v39 )
        break;
      v29 = vFrustumOrigin->x;
      v34 = vFrustumOrigin->y;
      z = vFrustumOrigin->z;
    }
    v8 = iElementShift;
  }
  if ( iPreserveCount > 0 )
    memcpy(
      &pOutputFrustumPlanes[vFrustumOrigina],
      &pInputFrustumPlanesa[iInputFrustumPlanesa - iPreserveCount],
      16LL * iPreserveCount);
  return v8 + iPreserveCount;
}


// CFlaggedEntitiesEnum::CFlaggedEntitiesEnum  (line 2515, @0x00000000020c0ae0, libserver.so)
void __fastcall CFlaggedEntitiesEnum::CFlaggedEntitiesEnum(
        CFlaggedEntitiesEnum *const this,
        CBaseEntity **pList,
        int listMax,
        int flagMask)
{
  this->_vptr_IPartitionEnumerator = &off_3FFCAF0;
  this->m_pList = pList;
  this->m_listMax = listMax;
  this->m_flagMask = flagMask;
  this->m_count = 0;
}


// CFlaggedEntitiesEnum::AddToList  (line 2523, @0x00000000020c0b10, libserver.so)
bool __fastcall CFlaggedEntitiesEnum::AddToList(CFlaggedEntitiesEnum *const this, CBaseEntity *pEntity)
{
  __int64 m_count; // rdx
  bool result; // al

  m_count = this->m_count;
  result = 0;
  if ( m_count < this->m_listMax )
  {
    this->m_pList[m_count] = pEntity;
    ++this->m_count;
    return 1;
  }
  return result;
}


// CFlaggedEntitiesEnum::EnumElement  (line 2535, @0x000000000209db80, libserver.so)  // inlines: AddToList
IterationRetval_t __fastcall CFlaggedEntitiesEnum::EnumElement(CFlaggedEntitiesEnum *const this, CBaseEntity *pEntity)
{
  int m_flagMask; // edx
  IterationRetval_t result; // eax
  __int64 m_count; // rdx

  if ( pEntity == 0 )
    return IterationRetval_t::ITERATION_CONTINUE;
  m_flagMask = this->m_flagMask;
  if ( m_flagMask == 0
    || (result = IterationRetval_t::ITERATION_CONTINUE, (m_flagMask & pEntity->m_fFlags.m_Value) != 0) )
  {
    m_count = this->m_count;
    result = IterationRetval_t::ITERATION_STOP;
    if ( m_count < this->m_listMax )
    {
      this->m_pList[m_count] = pEntity;
      ++this->m_count;
      return IterationRetval_t::ITERATION_CONTINUE;
    }
  }
  return result;
}


// UTIL_EntitiesInBox  (line 2550, @0x00000000020db330, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, EnsureCapacity, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, HitEntitiesOnlyByCollisionGroup, IndexToIdentity, Init, IsExternallyAllocated, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetObjectSetMask, memcpy, operator CBaseEntity*, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: memcpy, CGamePhysicsQueryInterface::EntitiesInBox, CUtlMemory<COverlapHit, int>::Purge, __stack_chk_fail, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: g_pPhysicsQuery, CEntityHandle::gm_pEntityList
int __fastcall UTIL_EntitiesInBox(
        const Vector *const vMins,
        const Vector *const vMaxs,
        CEntityInstance **pList,
        int nListMax)
{
  int result; // eax
  COverlapHit *m_pMemory; // r13
  unsigned __int64 v10; // rcx
  uint32 m_nEntityId; // esi
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  uint32 v15; // edx
  int v16; // [rsp+Ch] [rbp-1094h]
  int v17; // [rsp+Ch] [rbp-1094h]
  CGameQueryAttributes filter; // [rsp+20h] [rbp-1080h] BYREF
  COverlapList results; // [rsp+50h] [rbp-1050h] BYREF
  unsigned __int64 v20; // [rsp+1068h] [rbp-38h]

  results.m_list.m_Size = 0;
  v20 = __readfsqword(0x28u);
  results.m_list.m_Memory.m_nAllocationCount = 64;
  results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
  if ( nListMax > 64 )
  {
    results.m_list.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, nListMax << 6);
    memcpy(
      results.m_list.m_Memory.m_pMemory,
      &results.m_list.m_Memory.m_FixedMemory,
      results.m_list.m_Memory.m_nAllocationCount << 6);
    results.m_list.m_Memory.m_nAllocationCount = nListMax;
    results.m_list.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
  }
  filter.m_nHierarchyId = 0;
  memset(&filter, 0, 24);
  filter.m_nEntityIdToIgnore = -1;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 2;
  filter.m_nCollisionGroup = 4;
  result = CGamePhysicsQueryInterface::EntitiesInBox(
             g_pPhysicsQuery,
             vMins,
             vMaxs,
             &filter,
             OverlapTest_t::OVERLAP_TEST_SHAPE,
             &results);
  if ( result > 0 )
  {
    m_pMemory = results.m_list.m_Memory.m_pMemory;
    v10 = 0;
    do
    {
      m_nEntityId = m_pMemory[v10 / 8].m_ShapeAttributes.m_nEntityId;
      m_pInstance = 0;
      if ( m_nEntityId + 2 > 1 )
      {
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_nEntityId >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[m_nEntityId & 0x1FF];
          if ( v14 != 0 && m_nEntityId == v14->m_EHandle.m_Index )
            m_pInstance = v14->m_pInstance;
        }
      }
      pList[v10 / 8] = m_pInstance;
      v10 += 8LL;
    }
    while ( v10 != 8LL * (result - 1) + 8 );
  }
  results.m_list.m_Size = 0;
  if ( results.m_list.m_Memory.m_nAllocationCount < 0 )
  {
    v15 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v15 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
    if ( results.m_list.m_Memory.m_pMemory != &results.m_list.m_Memory.m_FixedMemory )
    {
      if ( results.m_list.m_Memory.m_pMemory != 0 && v15 == 0 )
      {
        v17 = result;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        return v17;
      }
      return result;
    }
  }
  if ( v15 == 0 )
  {
    v16 = result;
    CUtlMemory<COverlapHit,int>::Purge(&results.m_list.m_Memory);
    return v16;
  }
  return result;
}


// UTIL_EntitiesInBox  (line 2569, @0x00000000020db5c0, libserver.so)
// calls: CGamePhysicsQueryInterface::EnumerateElementsInBox
// globals: g_pPhysicsQuery
int __fastcall UTIL_EntitiesInBox(
        const Vector *const mins,
        const Vector *const maxs,
        CFlaggedEntitiesEnum *pEnum,
        int partitionMask)
{
  CGamePhysicsQueryInterface::EnumerateElementsInBox(g_pPhysicsQuery, mins, maxs, pEnum);
  return pEnum->m_count;
}


// CEntitySphereQuery::CEntitySphereQuery  (line 2578, @0x00000000020dbf60, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, HitEntitiesOnlyByCollisionGroup, Init, Purge, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetObjectSetMask, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CGamePhysicsQueryInterface::EntitiesInSphere, Plat_IsInDebugSessionRaw, CUtlMemory<COverlapHit, int>::Purge, _Unwind_Resume, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase
// callers: CBaseAnimatingController::CalculateIKLocks, CBreakableProp::Break, CBasePlayer::FindUseEntity, CInteractionManager::LookForInteractions, CGameRules::IsSpawnPointValid, CGameRules::RadiusDamage, CBasePlayer::EntSelectSpawnPoint, CFuncTrackTrain::NearestPath
// globals: g_pPhysicsQuery
void __fastcall CEntitySphereQuery::CEntitySphereQuery(
        CEntitySphereQuery *const this,
        const Vector *const vCenter,
        float a3,
        float flRadius)
{
  AlignedByteArray_t<64ul,COverlapHit> *p_m_FixedMemory; // r12
  char v7; // al
  COverlapList *p_m_results; // rbx
  CGamePhysicsQueryInterface *v9; // rdi
  CGameQueryAttributes filter; // [rsp+10h] [rbp-50h] BYREF

  p_m_FixedMemory = &this->m_results.m_list.m_Memory.m_FixedMemory;
  this->m_results.m_list.m_Size = 0;
  this->m_results.m_list.m_Memory.m_pMemory = 0;
  this->m_results.m_list.m_Memory.m_nAllocationCount = 64;
  this->m_results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 32) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  v7 = *(&filter.RnQueryShapeAttr_t + 31);
  this->m_listIndex = 0;
  p_m_results = &this->m_results;
  v9 = g_pPhysicsQuery;
  p_m_results->m_list.m_Memory.m_pMemory = p_m_FixedMemory;
  memset(&filter, 0, 24);
  filter.m_nEntityIdToIgnore = -1;
  filter.m_nHierarchyId = 0;
  *(&filter.RnQueryShapeAttr_t + 31) = v7 & 0xF0 | 9;
  filter.m_nObjectSetMask = 2;
  filter.m_nCollisionGroup = 4;
  CGamePhysicsQueryInterface::EntitiesInSphere(v9, vCenter, a3, &filter, 1u, p_m_results);
}


// CEntitySphereQuery::GetCurrentEntity  (line 2586, @0x00000000020c0b40, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*
// callers: CBaseAnimatingController::CalculateIKLocks, CBreakableProp::Break, CBasePlayer::FindUseEntity, CInteractionManager::LookForInteractions, CGameRules::IsSpawnPointValid, CGameRules::RadiusDamage, CBasePlayer::EntSelectSpawnPoint, CFuncTrackTrain::NearestPath
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CEntitySphereQuery::GetCurrentEntity(CEntitySphereQuery *const this)
{
  __int64 m_listIndex; // rdx
  CBaseEntity *result; // rax
  COverlapHit *v3; // rdx
  CConcreteEntityList *v4; // rdi
  uint32 m_nEntityId; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  __int64 v8; // [rsp-8h] [rbp-8h]

  m_listIndex = this->m_listIndex;
  result = 0;
  if ( m_listIndex < this->m_results.m_list.m_Size )
  {
    v3 = &this->m_results.m_list.m_Memory.m_pMemory[m_listIndex];
    v4 = CEntityHandle::gm_pEntityList;
    m_nEntityId = v3->m_ShapeAttributes.m_nEntityId;
    *(&v8 - 4) = m_nEntityId;
    if ( m_nEntityId + 2 > 1 )
    {
      v6 = v4->m_pIdentityChunks[(*(&v8 - 8) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[*(&v8 - 2) & 0x1FF];
        if ( v7 != 0 && m_nEntityId == v7->m_EHandle.m_Index )
          return v7->m_pInstance;
      }
    }
  }
  return result;
}


// GlobalVarsWarningFunc  (line 2594, @0x00000000020c0bb0, libserver.so)
// calls: Warning, __cxa_guard_acquire, CommandLine, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "gpGlocals->curtime() called while IsInSimulation() is false\n", "gpGlocals->rendertime() called while IsInSimulation() is true\n", "-curtimewarnings"
// globals: `guard variable for'GlobalVarsWarningFunc(GlobalVarsUsageWarning_t)::bEnableWarnings, GlobalVarsWarningFunc(GlobalVarsUsageWarning_t)::bEnableWarnings
void __fastcall GlobalVarsWarningFunc(GlobalVarsUsageWarning_t eWarningType)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax

  if ( `guard variable for'GlobalVarsWarningFunc(GlobalVarsUsageWarning_t)::bEnableWarnings == 0
    && __cxa_guard_acquire(&`guard variable for'GlobalVarsWarningFunc(GlobalVarsUsageWarning_t)::bEnableWarnings) != 0 )
  {
    v4 = CommandLine(v2, v3);
    GlobalVarsWarningFunc(GlobalVarsUsageWarning_t)::bEnableWarnings = (*(*v4 + 64LL))(v4, "-curtimewarnings") != 0;
    __cxa_guard_release(&`guard variable for'GlobalVarsWarningFunc(GlobalVarsUsageWarning_t)::bEnableWarnings);
  }
  if ( GlobalVarsWarningFunc(GlobalVarsUsageWarning_t)::bEnableWarnings )
  {
    if ( eWarningType != GlobalVarsUsageWarning_t::GV_RENDERTIME_CALLED_DURING_SIMULATION )
    {
      if ( eWarningType == GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING )
        Warning("gpGlocals->curtime() called while IsInSimulation() is false\n");
    }
    else
    {
      Warning("gpGlocals->rendertime() called while IsInSimulation() is true\n");
    }
  }
}


// CHurtableEntitiesEnum::CHurtableEntitiesEnum  (line 2622, @0x00000000020c0c70, libserver.so)
void __fastcall CHurtableEntitiesEnum::CHurtableEntitiesEnum(
        CHurtableEntitiesEnum *const this,
        CBaseEntity **pList,
        int listMax)
{
  this->_vptr_IPartitionEnumerator = &off_3FFCB10;
  this->m_pList = pList;
  this->m_listMax = listMax;
  this->m_count = 0;
}


// CHurtableEntitiesEnum::AddToList  (line 2629, @0x00000000020c0c90, libserver.so)
bool __fastcall CHurtableEntitiesEnum::AddToList(CHurtableEntitiesEnum *const this, CBaseEntity *pEntity)
{
  __int64 m_count; // rdx
  bool result; // al

  m_count = this->m_count;
  result = 0;
  if ( m_count < this->m_listMax )
  {
    this->m_pList[m_count] = pEntity;
    ++this->m_count;
    return 1;
  }
  return result;
}


// CHurtableEntitiesEnum::EnumElement  (line 2641, @0x000000000209db20, libserver.so)  // inlines: AddToList
// calls: CBaseEntity::GetDamageOptions, CBaseEntity::GetHealth
IterationRetval_t __fastcall CHurtableEntitiesEnum::EnumElement(
        CHurtableEntitiesEnum *const this,
        CBaseEntity *pEntity)
{
  IterationRetval_t result; // eax
  __int64 m_count; // rdx

  if ( pEntity == 0
    || (CBaseEntity::GetDamageOptions(pEntity) == DamageOptions_t::DAMAGE_NO || CBaseEntity::GetHealth(pEntity) <= 0)
    && pEntity->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
  {
    return IterationRetval_t::ITERATION_CONTINUE;
  }
  m_count = this->m_count;
  result = IterationRetval_t::ITERATION_STOP;
  if ( m_count < this->m_listMax )
  {
    this->m_pList[m_count] = pEntity;
    ++this->m_count;
    return IterationRetval_t::ITERATION_CONTINUE;
  }
  return result;
}


// UTIL_EntitiesAlongRay  (line 2657, @0x00000000020dba80, libserver.so)
// calls: CGamePhysicsQueryInterface::EnumerateElementsAlongRay
// globals: g_pPhysicsQuery
int __fastcall UTIL_EntitiesAlongRay(const Ray_t *const ray, CFlaggedEntitiesEnum *pEnum)
{
  CGamePhysicsQueryInterface::EnumerateElementsAlongRay(g_pPhysicsQuery, ray, pEnum);
  return pEnum->m_count;
}


// UTIL_EntitiesAlongSweep  (line 2664, @0x00000000020c0cc0, libserver.so)
int __fastcall UTIL_EntitiesAlongSweep(
        CBaseEntity **pList,
        int listMax,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        int flagMask)
{
  return 0;
}


// CEntityKeyIdIndexList::CEntityKeyIdIndexList  (line 2673, @0x00000000020d3ed0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, InsertMultipleBefore, RemoveMultipleFromTail, SetCount, operator[], ~CUtlVector
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ShiftElementsRight, CEntityKeyIdIndexList::GenerateStringCode, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: AppendNPCKeyValues
void __fastcall CEntityKeyIdIndexList::CEntityKeyIdIndexList(
        CEntityKeyIdIndexList *const this,
        const char *pRoot,
        int nCount)
{
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *p_m_hashList; // r15
  int v6; // edx
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned int *v9; // r13
  uint32 StringCode; // eax

  this->m_hashList.m_Size = 0;
  this->m_hashList.m_Memory.m_pMemory = 0;
  this->m_hashList.m_Memory.m_nAllocationCount = 0;
  this->m_hashList.m_Memory.m_nGrowSize = 0;
  this->m_pRoot = pRoot;
  if ( nCount > 0 )
  {
    p_m_hashList = &this->m_hashList;
    CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::GrowVector(&this->m_hashList, nCount);
    v6 = nCount;
    v7 = (nCount - 1) + 1LL;
    v8 = 0;
    CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::ShiftElementsRight(p_m_hashList, 0, v6);
    do
    {
      v9 = &this->m_hashList.m_Memory.m_pMemory[v8];
      StringCode = CEntityKeyIdIndexList::GenerateStringCode(this, v8++);
      *v9 = StringCode;
    }
    while ( v8 != v7 );
  }
  else if ( nCount != 0 )
  {
    this->m_hashList.m_Size = nCount;
  }
}


// CEntityKeyIdIndexList::GenerateStringCode  (line 2683, @0x00000000020c0cd0, libserver.so)  // inlines: MakeStringToken
// calls: V_snprintf, MurmurHash2LowerCase, RegisterStringToken, __stack_chk_fail
// callers: CEntityKeyIdIndexList::CEntityKeyIdIndexList, AppendNPCKeyValues
// strings: "%s%d"
uint32 __fastcall CEntityKeyIdIndexList::GenerateStringCode(CEntityKeyIdIndexList *const this, int nIndex)
{
  uint32 result; // eax
  uint32 v3; // [rsp+Ch] [rbp-424h]
  char fullBuf[1032]; // [rsp+10h] [rbp-420h] BYREF
  unsigned __int64 v5; // [rsp+418h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  V_snprintf(fullBuf, 1024, "%s%d", this->m_pRoot, nIndex);
  result = 0;
  if ( fullBuf[0] != 0 )
  {
    result = MurmurHash2LowerCase(fullBuf, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v3 = result;
      RegisterStringToken(result, fullBuf, 0, 1);
      return v3;
    }
  }
  return result;
}


// CGameTrace::GetHitboxIndex  (line 2691, @0x00000000020c0d70, libserver.so)
// callers: CBaseEntity::DecalTrace, CBaseEntity::ImpactTrace, cast_hull, cast_ray
int __fastcall CGameTrace::GetHitboxIndex(const CGameTrace *const this)
{
  const CHitBox *m_pHitbox; // rax

  m_pHitbox = this->m_pHitbox;
  if ( m_pHitbox != 0 )
    return m_pHitbox->m_nHitBoxIndex;
  else
    return 0;
}


// CGameTrace::GetHitGroup  (line 2697, @0x00000000020c0d90, libserver.so)
// callers: cast_hull, cast_ray, CPhysicsCannister::TraceAttack
int __fastcall CGameTrace::GetHitGroup(const CGameTrace *const this)
{
  const CHitBox *m_pHitbox; // rax

  m_pHitbox = this->m_pHitbox;
  if ( m_pHitbox != 0 )
    return m_pHitbox->m_nGroupId;
  else
    return 0;
}


// UTIL_TraceCapsule  (line 2703, @0x00000000020c0db0, libserver.so)  // inlines: CTransform, Init, QuaternionAligned, VectorAligned
// calls: CGamePhysicsQueryInterface::SweepShape, ConvertSweepToTrace
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceCapsule(
        const Vector *const vAbsStart,
        const Vector *const vAbsEnd,
        const RnCapsule_t *const capsule,
        bool bIgnoreStartInSolid,
        CGameQueryAttributes *const rFilter,
        trace_t *ptr)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  vec_t z; // xmm5_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm6_4
  vec_t v14; // xmm7_4
  vec_t w; // xmm0_4
  CSweepResult sweepResult; // [rsp+10h] [rbp-98h] BYREF
  CTransform xform1; // [rsp+30h] [rbp-78h] BYREF
  CTransform xform2; // [rsp+50h] [rbp-58h] BYREF

  xform1.m_vPosition.w = 0.0;
  xform2.m_vPosition.w = 0.0;
  y = vAbsStart->y;
  x = vAbsStart->x;
  xform1.m_vPosition.z = vAbsStart->z;
  xform1.m_vPosition.y = y;
  z = vAbsEnd->z;
  xform1.m_vPosition.x = x;
  v11 = quat_identity.z;
  xform1.m_orientation.x = quat_identity.x;
  v12 = quat_identity.y;
  xform2.m_vPosition.z = z;
  v13 = vAbsEnd->y;
  xform1.m_orientation.z = v11;
  v14 = vAbsEnd->x;
  xform1.m_orientation.y = v12;
  w = quat_identity.w;
  xform2.m_vPosition.y = v13;
  xform2.m_vPosition.x = v14;
  xform1.m_orientation.w = w;
  xform2.m_orientation.x = quat_identity.x;
  xform2.m_orientation.y = v12;
  xform2.m_orientation.z = v11;
  xform2.m_orientation.w = w;
  CGamePhysicsQueryInterface::SweepShape(
    &sweepResult,
    g_pPhysicsQuery,
    &xform1,
    &xform2,
    capsule,
    rFilter,
    bIgnoreStartInSolid);
  ConvertSweepToTrace(ptr, &xform1, &xform2, capsule, &sweepResult);
}


// UTIL_TraceCapsule  (line 2714, @0x00000000020e2560, libserver.so)  // inlines: CTransform, Init, QuaternionAligned, VectorAligned
// calls: CGamePhysicsQueryInterface::SweepShape, ConvertSweepToTrace
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceCapsule(
        const Vector *const vAbsStart,
        const Vector *const vAbsEnd,
        const RnCapsule_t *const capsule,
        bool bIgnoreStartInSolid,
        CTraceFilter *pFilter,
        trace_t *ptr)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  vec_t z; // xmm5_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm6_4
  vec_t v14; // xmm7_4
  vec_t w; // xmm0_4
  CSweepResult sweepResult; // [rsp+10h] [rbp-98h] BYREF
  CTransform xform1; // [rsp+30h] [rbp-78h] BYREF
  CTransform xform2; // [rsp+50h] [rbp-58h] BYREF

  xform1.m_vPosition.w = 0.0;
  xform2.m_vPosition.w = 0.0;
  y = vAbsStart->y;
  x = vAbsStart->x;
  xform1.m_vPosition.z = vAbsStart->z;
  xform1.m_vPosition.y = y;
  z = vAbsEnd->z;
  xform1.m_vPosition.x = x;
  v11 = quat_identity.z;
  xform1.m_orientation.x = quat_identity.x;
  v12 = quat_identity.y;
  xform2.m_vPosition.z = z;
  v13 = vAbsEnd->y;
  xform1.m_orientation.z = v11;
  v14 = vAbsEnd->x;
  xform1.m_orientation.y = v12;
  w = quat_identity.w;
  xform2.m_vPosition.y = v13;
  xform2.m_vPosition.x = v14;
  xform1.m_orientation.w = w;
  xform2.m_orientation.x = quat_identity.x;
  xform2.m_orientation.y = v12;
  xform2.m_orientation.z = v11;
  xform2.m_orientation.w = w;
  CGamePhysicsQueryInterface::SweepShape(
    &sweepResult,
    g_pPhysicsQuery,
    &xform1,
    &xform2,
    capsule,
    pFilter,
    bIgnoreStartInSolid);
  ConvertSweepToTrace(ptr, &xform1, &xform2, capsule, &sweepResult);
}


// UTIL_TraceCapsule  (line 2728, @0x00000000020e2660, libserver.so)  // inlines: CGameQueryAttributes, CTraceFilter, CTraceFilterSimple, CTransform, EnableInteractsWith, HierarchyIDFromBaseEntity, Init, QuaternionAligned, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, VectorAligned
// calls: EntityIDFromBaseEntity, CGamePhysicsQueryInterface::SweepShape, ConvertSweepToTrace
// globals: g_pPhysicsQuery
void __fastcall UTIL_TraceCapsule(
        const Vector *const vAbsStart,
        const Vector *const vAbsEnd,
        const RnCapsule_t *const capsule,
        uint64 mask,
        const CBaseEntity *pIgnoreEntity,
        int nCollisionGroup,
        bool bIgnoreStartInSolid,
        trace_t *ptr)
{
  uint32 v12; // eax
  CCollisionProperty *m_pCollision; // rax
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  vec_t v17; // xmm4_4
  vec_t v18; // xmm6_4
  vec_t v19; // xmm5_4
  vec_t w; // xmm0_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm2_4
  char nCollisionGroupa; // [rsp+14h] [rbp-DCh]
  uint64 maska; // [rsp+18h] [rbp-D8h]
  CSweepResult sweepResult; // [rsp+20h] [rbp-D0h] BYREF
  CTransform xform1; // [rsp+40h] [rbp-B0h] BYREF
  CTransform xform2; // [rsp+60h] [rbp-90h] BYREF
  CTraceFilter pFilter; // [rsp+80h] [rbp-70h] BYREF
  const CBaseEntity *pIgnoreEntitya; // [rsp+B0h] [rbp-40h]
  __int64 v30; // [rsp+B8h] [rbp-38h]

  pFilter._vptr_CTraceFilter = off_3FE6970;
  memset(&pFilter.m_attr, 0, 24);
  pFilter.m_attr.m_nEntityIdToIgnore = -1;
  pFilter.m_attr.m_nHierarchyId = 0;
  pFilter.m_attr.m_nCollisionGroup = 0;
  *(&pFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&pFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  pFilter.m_attr.m_nObjectSetMask = 7;
  if ( pIgnoreEntity != 0 )
  {
    nCollisionGroupa = nCollisionGroup;
    maska = mask;
    v12 = EntityIDFromBaseEntity(pIgnoreEntity);
    mask = maska;
    pFilter.m_attr.m_nEntityIdToIgnore = v12;
    m_pCollision = pIgnoreEntity->m_pCollision;
    LOBYTE(nCollisionGroup) = nCollisionGroupa;
    if ( m_pCollision != 0 )
      LOWORD(m_pCollision) = m_pCollision->m_collisionAttribute.m_nHierarchyId.m_Value;
    pFilter.m_attr.m_nHierarchyId = m_pCollision;
  }
  z = vAbsStart->z;
  pFilter._vptr_CTraceFilter = off_3FF7810;
  y = vAbsStart->y;
  pIgnoreEntitya = pIgnoreEntity;
  x = vAbsStart->x;
  xform1.m_vPosition.z = z;
  pFilter.m_attr.m_nCollisionGroup = nCollisionGroup;
  v17 = vAbsEnd->z;
  pFilter.m_attr.m_nInteractsWith = mask;
  v18 = vAbsEnd->x;
  xform1.m_vPosition.x = x;
  v19 = vAbsEnd->y;
  w = quat_identity.w;
  xform1.m_vPosition.y = y;
  v21 = quat_identity.z;
  xform2.m_vPosition.x = v18;
  v22 = quat_identity.y;
  xform1.m_orientation.w = w;
  xform1.m_orientation.z = v21;
  xform1.m_orientation.y = v22;
  xform1.m_orientation.x = quat_identity.x;
  xform2.m_vPosition.y = v19;
  xform2.m_vPosition.z = v17;
  xform2.m_orientation.x = quat_identity.x;
  xform2.m_orientation.y = v22;
  xform2.m_orientation.z = v21;
  xform2.m_orientation.w = w;
  v30 = 0;
  xform1.m_vPosition.w = 0.0;
  xform2.m_vPosition.w = 0.0;
  CGamePhysicsQueryInterface::SweepShape(
    &sweepResult,
    g_pPhysicsQuery,
    &xform1,
    &xform2,
    capsule,
    &pFilter,
    bIgnoreStartInSolid);
  ConvertSweepToTrace(ptr, &xform1, &xform2, capsule, &sweepResult);
}


