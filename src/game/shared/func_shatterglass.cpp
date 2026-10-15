// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/func_shatterglass.cpp:582
struct ShatterSpoke_t {
	int m_nIntersectsEdgeIndex;  // +0x10
	float flLength;  // +0x14
	ShatterSpoke_t();

	// sizeof = 24
};

// src/game/shared/func_shatterglass.cpp:590
struct ShatterEdgeSegment_t {
	ShatterEdgeSegment_t(Vector2D, Vector2D);
	ShatterEdgeSegment_t(const ShatterEdgeSegment_t &);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncShatterglass::GetDataDescMap  (line 47, @0x000000000221a570, libserver.so)
// globals: CFuncShatterglass::m_DataMap
datamap_t *__fastcall CFuncShatterglass::GetDataDescMap(CFuncShatterglass *const this)
{
  return &CFuncShatterglass::m_DataMap;
}


// CFuncShatterglass::AddDatadescMetadataKeys  (line 47, @0x000000000222c9d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncShatterglass::GetEntityClass(void)
void __fastcall CFuncShatterglass::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncShatterglass::GetEntityClass);
}


// CFuncShatterglass::GetBaseMap  (line 47, @0x000000000222c9f0, libserver.so)
datamap_t *__cdecl CFuncShatterglass::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncShatterglass>  (line 47, @0x0000000002235be0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncShatterglass"
// globals: `guard variable for'DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder, `guard variable for'DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc, CFuncShatterglass::GetEntityClass(void), CFuncShatterglass::m_DataMap, DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncShatterglass>(CFuncShatterglass *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_pszBase = "CFuncShatterglass";
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder,
      &_dso_handle);
  }
  CFuncShatterglass::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_pszBase), "GlassThink");
    m_Size = DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc[1].fieldName = v2;
    v6 = operator new[](DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v6, DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_pszBase), "RestoreThink");
    v7 = DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc[6].fieldName = v6;
    DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc[28].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc);
  }
  CFuncShatterglass::m_DataMap.dataNumFields = 30;
  CFuncShatterglass::m_DataMap.dataDesc = &DataMapInit<CFuncShatterglass>(CFuncShatterglass *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncShatterglass::m_DataMap, CFuncShatterglass::GetEntityClass);
  return &CFuncShatterglass::m_DataMap;
}


// shootbullet_f  (line 97, @0x000000000221bf60, libserver.so)  // inlines: FireBulletsInfo_t, Init, operator=
// calls: UTIL_GetLocalPlayer, CBasePlayer::EyeVectors
void __fastcall shootbullet_f(const CCommandContext *const a1, const CCommand *const a2)
{
  CBasePlayer *LocalPlayer; // rax
  CBaseEntity *v3; // rbx
  vec_t v4; // xmm1_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  Vector vecPlayerEyeDir; // [rsp+0h] [rbp-A0h] BYREF
  double v9; // [rsp+10h] [rbp-90h]
  vec_t v10; // [rsp+18h] [rbp-88h]
  FireBulletsInfo_t info; // [rsp+20h] [rbp-80h] BYREF

  LocalPlayer = UTIL_GetLocalPlayer();
  v3 = LocalPlayer;
  if ( LocalPlayer != 0 )
  {
    CBasePlayer::EyeVectors(LocalPlayer, &vecPlayerEyeDir, 0, 0);
    info.m_iShots = 1;
    info.m_vecSpread.x = 0.0;
    info.m_vecSpread.y = 0.0;
    info.m_vecSpread.z = 0.0;
    info.m_flDistance = 8192.0;
    info.m_iTracerFreq = 4;
    info.m_flDamage = 0.0;
    info.m_flPlayerDamage = 0.0;
    info.m_pAttacker = 0;
    info.m_nFlags = 0;
    info.m_pAdditionalIgnoreEnt = 0;
    info.m_pWeapon = 0;
    info.m_flDamageForceScale = 1.0;
    info.m_bPrimaryAttack = 1;
    v9 = (*(v3->_vptr_IHandleEntity + 164))(v3);
    info.m_vecSrc.z = v4;
    info.m_flDistance = 56755.84;
    *&info.m_vecSrc.x = v9;
    info.m_iAmmoType = 1;
    info.m_iTracerFreq = 1;
    info.m_vecDirShooting = vecPlayerEyeDir;
    info.m_iShots = 1;
    info.m_pAdditionalIgnoreEnt = v3;
    info.m_pWeapon = 0;
    info.m_vecSpread.x = vec3_origin.x;
    y = vec3_origin.y;
    info.m_flDamage = 50.0;
    info.m_vecSpread.y = y;
    z = vec3_origin.z;
    info.m_pAttacker = v3;
    info.m_vecSpread.z = z;
    vptr_IHandleEntity = v3->_vptr_IHandleEntity;
    v10 = v4;
    vptr_IHandleEntity[129](v3, &info);
  }
}


// restoreglass_f  (line 122, @0x0000000002244430, libserver.so)
// calls: CGameEntitySystem::FindEntityByClassname, __dynamic_cast, CFuncShatterglass::StartRestoreSlow
// strings: "func_shatterglass"
// globals: `typeinfo for'CFuncShatterglass
void __fastcall restoreglass_f(const CCommandContext *const a1, const CCommand *const a2)
{
  CBaseEntity *v2; // rbx
  CBaseEntity *EntityByClassname; // rax
  CFuncShatterglass *v4; // rax

  v2 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v2, "func_shatterglass");
    v2 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    v4 = __dynamic_cast(EntityByClassname, &`typeinfo for'CBaseEntity, &`typeinfo for'CFuncShatterglass, 0);
    if ( v4 != 0 )
      CFuncShatterglass::StartRestoreSlow(v4);
  }
}


// CShatterGlassShardPhysics::OnRestore  (line 158, @0x000000000221b640, libserver.so)
// calls: CBaseModelEntity::OnRestore, UTIL_Remove
// globals: g_nShatterGlassShardGlobal
void __fastcall CShatterGlassShardPhysics::OnRestore(CShatterGlassShardPhysics *const this)
{
  CBaseModelEntity::OnRestore(this);
  UTIL_Remove(this);
  ++g_nShatterGlassShardGlobal;
}


// CShatterGlassShardPhysics::UpdateTransmitState  (line 167, @0x000000000221ace0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CShatterGlassShardPhysics::UpdateTransmitState(CShatterGlassShardPhysics *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CShatterGlassShardPhysics::VPhysicsCollision  (line 172, @0x0000000002242bd0, libserver.so)  // inlines: GetBool, GetInt, IncrementShardsCreatedRecently, Line, VectorAdd, VectorMultiply, VertexColor_t, operator*, operator+
// calls: __dynamic_cast, CShatterGlassShard::IsTooSmallToShatter, CShatterGlassShard::FlagForRemoval, UTIL_GetLocalPlayer, CShatterGlassShard::TakeDamage, CShatterGlassShard::GetArea
// globals: `typeinfo for'CShatterGlassShardPhysics, g_nShatterGlassShardsCreatedRecentlyFrameRef, g_nShatterGlassShardsCreatedRecently, debugoverlay
void __fastcall CShatterGlassShardPhysics::VPhysicsCollision(
        CShatterGlassShardPhysics *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  CBaseEntity *v5; // rbx
  char v6; // r13
  bool v7; // r14
  void *v8; // rax
  IPhysicsCollisionData *pInternalData; // rdi
  bool v10; // zf
  int (**vptr_IPhysicsCollisionData)(...); // rax
  CBasePlayer *LocalPlayer; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r8
  Vector *p_damagePos; // r9
  float v18; // xmm0_4
  CShatterGlassShard *m_pParentShard; // rdi
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  float y; // [rsp+14h] [rbp-6Ch]
  float x; // [rsp+18h] [rbp-68h]
  float z; // [rsp+1Ch] [rbp-64h]
  _BYTE v24[16]; // [rsp+20h] [rbp-60h] BYREF
  Vector damagePos; // [rsp+30h] [rbp-50h] BYREF
  double v26; // [rsp+40h] [rbp-40h] BYREF
  float v27; // [rsp+48h] [rbp-38h]

  if ( this->m_pParentShard == 0 )
    return;
  if ( pEvent == 0 )
    return;
  v5 = pEvent->pEntities[index == 0];
  if ( v5 == 0 )
    return;
  v6 = 0;
  v7 = 0;
  if ( (*(v5->_vptr_IHandleEntity + 143))(v5) != 0 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer != 0 && (*(LocalPlayer->_vptr_IHandleEntity + 482))(LocalPlayer, this) != 0
      || this->m_bDroppedByPlayer )
    {
      v6 = 1;
      v7 = 0;
    }
    else
    {
      v7 = CShatterGlassShard::GetArea(this->m_pParentShard) < 2000.0;
      v6 = 0;
    }
  }
  v8 = __dynamic_cast(v5, &`typeinfo for'CBaseEntity, &`typeinfo for'CShatterGlassShardPhysics, 0);
  pInternalData = pEvent->pInternalData;
  v10 = v8 == 0;
  vptr_IPhysicsCollisionData = pInternalData->_vptr_IPhysicsCollisionData;
  if ( !v10 )
  {
    vptr_IPhysicsCollisionData[1](pInternalData, &damagePos);
    goto LABEL_7;
  }
  vptr_IPhysicsCollisionData[1](pInternalData, &damagePos);
  x = pEvent->preVelocity[0].x;
  y = pEvent->preVelocity[0].y;
  p_damagePos = &damagePos;
  z = pEvent->preVelocity[0].z;
  if ( v7 )
  {
LABEL_7:
    if ( CShatterGlassShard::IsTooSmallToShatter(this->m_pParentShard) )
    {
      if ( gpGlobals->framecount - g_nShatterGlassShardsCreatedRecentlyFrameRef > 24 )
      {
        g_nShatterGlassShardsCreatedRecentlyFrameRef = gpGlobals->framecount;
        g_nShatterGlassShardsCreatedRecently = 0;
      }
      else if ( g_nShatterGlassShardsCreatedRecently > 32 )
      {
        CShatterGlassShard::FlagForRemoval(this->m_pParentShard);
      }
    }
    return;
  }
  if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v27 = z + damagePos.z;
    *(&v26 + 1) = y + damagePos.y;
    *&v26 = x + damagePos.x;
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    v24[0] = 0;
    v24[1] = -1;
    v24[2] = 0;
    v24[3] = -1;
    vptr_ISceneViewDebugOverlays[13](debugoverlay, &damagePos, &v26, v24, 1, 10.0);
  }
  (*(*pEvent->pObjects[0] + 208LL))(pEvent->pObjects[0], v15, v13, v14, v16, p_damagePos);
  if ( v6 != 0 )
    v18 = 100.0;
  m_pParentShard = this->m_pParentShard;
  *&v26 = x * v18;
  v27 = z * v18;
  *(&v26 + 1) = y * v18;
  CShatterGlassShard::TakeDamage(
    m_pParentShard,
    ShatterDamageCause::SHATTERDAMAGE_MELEE,
    v5,
    *&damagePos.x,
    damagePos.z,
    v26,
    z * v18);
}


// CShatterGlassShardPhysics::OnTakeDamage  (line 276, @0x0000000002242e70, libserver.so)  // inlines: Get, GetDamageForce, GetDamagePosition, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CShatterGlassShard::TakeDamage
// globals: CEntityHandle::gm_pEntityList
int __fastcall CShatterGlassShardPhysics::OnTakeDamage(
        CShatterGlassShardPhysics *const this,
        const CTakeDamageInfo *const info)
{
  CShatterGlassShard *m_pParentShard; // rdi
  int result; // eax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  m_pParentShard = this->m_pParentShard;
  if ( m_pParentShard == 0 )
    return 0;
  result = 0;
  if ( info->m_flDamage != 0.0 )
  {
    m_Index = info->m_hInflictor.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[info->m_hInflictor.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    CShatterGlassShard::TakeDamage(
      m_pParentShard,
      ShatterDamageCause::SHATTERDAMAGE_BULLET,
      m_pInstance,
      *&info->m_vecDamagePosition.x,
      info->m_vecDamagePosition.z,
      *&info->m_vecDamageForce.x,
      info->m_vecDamageForce.z);
    return 1;
  }
  return result;
}


// CShatterGlassShard::TakeDamage  (line 285, @0x0000000002242840, libserver.so)  // inlines: DetermineImpactStressTypeFromDamageCause, FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, IsPrimaryShard, Length, Normalized, Set, SetStressType, SetStressVelocity, SpawnInvulnerabilityElapsed, VectorLength, VectorMultiply, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator*, operator=
// calls: CShatterGlassShard::IsTooSmallToShatter, CShatterGlassShard::UnFreeze, CShatterGlassShard::ApplyVelocity, CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame, CShatterGlassShard::Shatter, VectorNormalize
// callers: CShatterGlassShardPhysics::VPhysicsCollision, CShatterGlassShardPhysics::OnTakeDamage
// globals: CSWTCH.11949
void __fastcall CShatterGlassShard::TakeDamage(
        CShatterGlassShard *const this,
        ShatterDamageCause damageCause,
        CBaseEntity *pEntityHittingMe,
        double a4,
        vec_t a5,
        double a6,
        vec_t a7)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CFuncShatterglass *m_pParentPanel; // r12
  CGlobalVars *v12; // r13
  float v13; // xmm0_4
  FnGlobalVarsWarningFunc v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  CFuncShatterglass *v23; // rdi
  ShatterGlassStressType v24; // eax
  ShatterDamageCause v25; // [rsp+8h] [rbp-78h]
  float v26; // [rsp+Ch] [rbp-74h]
  CBaseEntity *pEntityHittingMeb; // [rsp+10h] [rbp-70h]
  CBaseEntity *pEntityHittingMec; // [rsp+10h] [rbp-70h]
  vec_t pEntityHittingMea; // [rsp+10h] [rbp-70h]
  ShatterDamageCause pEntityHittingMed; // [rsp+10h] [rbp-70h]
  vec_t v31; // [rsp+18h] [rbp-68h]
  ShatterDamageCause flDamageScalea; // [rsp+1Ch] [rbp-64h]
  ShatterDamageCause flDamageScaleb; // [rsp+1Ch] [rbp-64h]
  vec_t flDamageScale; // [rsp+1Ch] [rbp-64h]
  float flDamageScalec; // [rsp+1Ch] [rbp-64h]
  Vector vec; // [rsp+50h] [rbp-30h] BYREF
  Vector vecDamageVelocitya; // 0:^20.12

  *&vecDamageVelocitya.x = a6;
  vecDamageVelocitya.z = a7;
  if ( !this->m_bFlaggedForRemoval )
  {
    m_flCurrentTime = 0.0;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          pEntityHittingMeb = pEntityHittingMe;
          flDamageScalea = damageCause;
          (m_pfnWarningFunc)(1, 0.0);
          pEntityHittingMe = pEntityHittingMeb;
          damageCause = flDamageScalea;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    if ( (m_flCurrentTime - this->m_flPhysicsEntitySpawnedAtTime) >= 0.2 )
    {
      m_pParentPanel = this->m_pParentPanel;
      if ( m_pParentPanel != 0 )
      {
        v12 = gpGlobals;
        v13 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v14 = gpGlobals->m_pfnWarningFunc;
            if ( v14 != 0 )
            {
              pEntityHittingMec = pEntityHittingMe;
              flDamageScaleb = damageCause;
              (v14)(1, 0.0);
              pEntityHittingMe = pEntityHittingMec;
              damageCause = flDamageScaleb;
            }
          }
          v13 = v12->m_flCurrentTime;
        }
        if ( (v13 - m_pParentPanel->m_flInitAtTime) > m_pParentPanel->m_flSpawnInvulnerability )
        {
          if ( pEntityHittingMe != 0 && (m_pEntity = pEntityHittingMe->m_pEntity) != 0 )
          {
            v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v17 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hEntityHittingMe.m_Index) = v17 | this->m_hEntityHittingMe.m_Index & 0x8000;
            this->m_hEntityHittingMe.m_Index = (v16 << 15) | this->m_hEntityHittingMe.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hEntityHittingMe.m_Index = -1;
          }
          x = vecDamageVelocitya.x;
          y = vecDamageVelocitya.y;
          z = vecDamageVelocitya.z;
          v21 = fsqrt(((x * x) + (y * y)) + (z * z));
          v22 = v21;
          if ( v21 > 100.0 )
          {
            pEntityHittingMed = damageCause;
            flDamageScalec = v21;
            vec = vecDamageVelocitya;
            VectorNormalize(&vec);
            x = vec.x * 100.0;
            damageCause = pEntityHittingMed;
            y = vec.y * 100.0;
            v22 = flDamageScalec;
            z = 100.0 * vec.z;
          }
          v25 = damageCause;
          v26 = v22;
          v31 = x;
          pEntityHittingMea = y;
          flDamageScale = z;
          if ( !CShatterGlassShard::IsTooSmallToShatter(this) )
          {
            v23 = this->m_pParentPanel;
            if ( v23->m_ShatterPanelMode == ShatterPanelMode::SHATTER_DRYWALL )
            {
              if ( v26 < 700.0 )
              {
LABEL_31:
                CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame(v23);
                return;
              }
            }
            else if ( v26 < 70.0 )
            {
              if ( v26 > 6.0 && v23->m_vecShatterGlassShards.m_Size != 1 )
              {
                CShatterGlassShard::UnFreeze(this);
                CShatterGlassShard::ApplyVelocity(
                  this,
                  a4,
                  a5,
                  COERCE_DOUBLE(__PAIR64__(LODWORD(pEntityHittingMea), LODWORD(v31))),
                  flDamageScale);
                v23 = this->m_pParentPanel;
              }
              goto LABEL_31;
            }
            this->m_vecStressVelocity.x = v31;
            v24 = ShatterGlassStressType::SHATTERDRYWALL_CHUNKS;
            this->m_vecStressVelocity.y = pEntityHittingMea;
            this->m_vecStressVelocity.z = flDamageScale;
            if ( v23->m_ShatterPanelMode != ShatterPanelMode::SHATTER_DRYWALL )
            {
              LOBYTE(v24) = 0;
              if ( v25 <= ShatterDamageCause::SHATTERDAMAGE_SCRIPT )
                v24 = CSWTCH_11949[v25];
            }
            this->m_ShatterStressType = v24;
            CShatterGlassShard::Shatter(this, a4, a5);
            v23 = this->m_pParentPanel;
            goto LABEL_31;
          }
          CShatterGlassShard::UnFreeze(this);
          CShatterGlassShard::ApplyVelocity(
            this,
            a4,
            a5,
            COERCE_DOUBLE(__PAIR64__(LODWORD(pEntityHittingMea), LODWORD(v31))),
            flDamageScale);
          CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame(this->m_pParentPanel);
        }
      }
    }
  }
}


// CShatterGlassShard::GetIsNeighborOf  (line 352, @0x0000000002238250, libserver.so)  // inlines: DistToSqr, LengthSqr, Line, Vector2DSubtract, VertexColor_t, operator[]
// calls: CUtlVectorBase<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >::Find, CShatterGlassShard::GetPanelVertexAverage, CShatterGlassShard::LocalToWorldSpace, CShatterGlassShard::SetIsNeighborOf
// callers: CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame, CFuncShatterglass::Init
// globals: debugoverlay
bool __fastcall CShatterGlassShard::GetIsNeighborOf(
        CShatterGlassShard *const this,
        CShatterGlassShard *pOtherShard,
        bool bValidate)
{
  bool v3; // r13
  unsigned __int64 v8; // rcx
  Vector2D *m_pMemory; // rax
  Vector2D *v10; // rdx
  float x; // xmm2_4
  float y; // xmm3_4
  Vector2D *v13; // rdx
  int v14; // xmm1_4
  int v15; // xmm1_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  CShatterGlassShard *pOtherSharda; // [rsp+8h] [rbp-78h] BYREF
  _BYTE v18[16]; // [rsp+10h] [rbp-70h] BYREF
  Vector2D v19[2]; // [rsp+20h] [rbp-60h] BYREF
  Vector2D v20[2]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-38h]
  unsigned __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+58h] [rbp-28h]
  Vector2D v25; // 0:xmm0_8.8
  Vector2D v26; // 0:xmm0_8.8

  v3 = 0;
  pOtherSharda = pOtherShard;
  if ( pOtherShard == 0 )
    return v3;
  if ( CUtlVectorBase<CShatterGlassShard *,CUtlMemory<CShatterGlassShard *,int>>::Find(
         &this->m_vecNeighbors,
         &pOtherSharda) >= 0 )
  {
    v3 = 1;
    if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      CShatterGlassShard::GetPanelVertexAverage(v20, this);
      v23 = CShatterGlassShard::LocalToWorldSpace(this, v25, v20).m128i_u64[0];
      v24 = v14;
      CShatterGlassShard::GetPanelVertexAverage(v19, pOtherShard);
      v21 = CShatterGlassShard::LocalToWorldSpace(this, v26, v19).m128i_u64[0];
      v22 = v15;
      vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
      v18[0] = 0;
      v18[1] = -1;
      v18[2] = 0;
      v18[3] = -1;
      vptr_ISceneViewDebugOverlays[13](debugoverlay, &v21, &v23, v18, 1, 3.0);
      return 1;
    }
    return v3;
  }
  if ( !bValidate || this->m_vecPanelVertices.m_Size <= 0 )
    return v3;
  v8 = 0;
  while ( pOtherShard->m_vecPanelVertices.m_Size <= 0 )
  {
LABEL_13:
    v8 += 8LL;
    if ( v8 == 8LL * (this->m_vecPanelVertices.m_Size - 1) + 8 )
      return 0;
  }
  m_pMemory = pOtherShard->m_vecPanelVertices.m_Memory.m_pMemory;
  v10 = &this->m_vecPanelVertices.m_Memory.m_pMemory[v8 / 8];
  x = v10->x;
  y = v10->y;
  if ( (((v10->x - m_pMemory->x) * (v10->x - m_pMemory->x)) + ((y - m_pMemory->y) * (y - m_pMemory->y))) >= 1.0 )
  {
    v13 = &m_pMemory[pOtherShard->m_vecPanelVertices.m_Size - 1];
    while ( m_pMemory != v13 )
    {
      ++m_pMemory;
      if ( (((x - m_pMemory->x) * (x - m_pMemory->x)) + ((y - m_pMemory->y) * (y - m_pMemory->y))) < 1.0 )
        goto LABEL_16;
    }
    goto LABEL_13;
  }
LABEL_16:
  CShatterGlassShard::SetIsNeighborOf(this, pOtherShard);
  CShatterGlassShard::SetIsNeighborOf(pOtherShard, this);
  return 1;
}


// CShatterGlassShard::SetIsNeighborOf  (line 392, @0x00000000022381c0, libserver.so)  // inlines: AddToTail, CopyConstruct<CShatterGlassShard*>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >::Find, CUtlMemory<CShatterGlassShard*, int>::Grow
// callers: CShatterGlassShard::GetIsNeighborOf
void __fastcall CShatterGlassShard::SetIsNeighborOf(CShatterGlassShard *const this, CShatterGlassShard *pOtherShard)
{
  __int64 m_Size; // r12
  int v4; // eax
  CShatterGlassShard **v5; // rax
  CShatterGlassShard *pOtherSharda; // [rsp+8h] [rbp-18h] BYREF

  pOtherSharda = pOtherShard;
  if ( CUtlVectorBase<CShatterGlassShard *,CUtlMemory<CShatterGlassShard *,int>>::Find(
         &this->m_vecNeighbors,
         &pOtherSharda) < 0 )
  {
    m_Size = this->m_vecNeighbors.m_Size;
    v4 = this->m_vecNeighbors.m_Size;
    if ( m_Size == this->m_vecNeighbors.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CShatterGlassShard *,int>::Grow(&this->m_vecNeighbors.m_Memory, 1);
      v4 = this->m_vecNeighbors.m_Size;
    }
    this->m_vecNeighbors.m_Size = v4 + 1;
    v5 = &this->m_vecNeighbors.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = pOtherSharda;
  }
}


// CShatterGlassShard::IsPointWithinConvexBounds  (line 401, @0x000000000222d8f0, libserver.so)  // inlines: Lerp<Vector2D>, Vector2D, Vector2DAdd, Vector2DMultiply, Vector2DSubtract, operator*, operator+, operator-, operator[]
// calls: CShatterGlassShard::GetPanelVertexAverage
// callers: CShatterGlassShard::IsPointWithinConvexBounds, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CShatterGlassShard::Shatter
__int64 __fastcall CShatterGlassShard::IsPointWithinConvexBounds(
        CShatterGlassShard *const this,
        Vector2D vecPoint,
        float flOuterTolerance,
        float *a4)
{
  int m_Size; // edx
  __int64 v7; // rbx
  int v8; // r15d
  int v9; // r12d
  float v10; // xmm7_4
  float v11; // xmm1_4
  Vector2D *m_pMemory; // rcx
  float *v13; // r8
  __int64 v14; // rax
  float *v15; // rax
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v21; // [rsp+Ch] [rbp-5Ch]
  float x; // [rsp+14h] [rbp-54h]
  float v23; // [rsp+18h] [rbp-50h]
  float v24; // [rsp+1Ch] [rbp-4Ch]
  float v25; // [rsp+20h] [rbp-48h]
  float v26; // [rsp+24h] [rbp-44h]
  Vector2D vecAverage; // [rsp+28h] [rbp-40h] BYREF

  m_Size = this->m_vecPanelVertices.m_Size;
  if ( this->m_vecPanelVertices.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0.0;
    do
    {
      m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
      v13 = &m_pMemory[v7];
      v14 = 0;
      if ( m_Size - 1 > v7 )
        v14 = 8 * v7 + 8;
      v16 = *v13;
      v17 = v13[1];
      v15 = (m_pMemory + v14);
      v18 = *v15;
      v19 = v15[1];
      if ( vecPoint.x != 1.0 )
      {
        v21 = v10;
        x = vecPoint.x;
        v23 = v15[1];
        v24 = *v15;
        v25 = v13[1];
        v26 = *v13;
        CShatterGlassShard::GetPanelVertexAverage(&vecAverage, this);
        vecPoint.x = x;
        v10 = v21;
        v16 = ((v26 - vecAverage.x) * x) + vecAverage.x;
        v17 = ((v25 - vecAverage.y) * x) + vecAverage.y;
        v18 = ((v24 - vecAverage.x) * x) + vecAverage.x;
        v19 = ((v23 - vecAverage.y) * x) + vecAverage.y;
      }
      v11 = ((*a4 - v16) * (v19 - v17)) - ((a4[1] - v17) * (v18 - v16));
      if ( v11 <= v10 )
      {
        if ( v10 > v11 )
          ++v8;
        if ( v8 <= 0 )
          goto LABEL_7;
      }
      else
      {
        ++v9;
        if ( v8 <= 0 )
          goto LABEL_7;
      }
      if ( v9 > 0 )
        return 0;
LABEL_7:
      m_Size = this->m_vecPanelVertices.m_Size;
      ++v7;
    }
    while ( this->m_vecPanelVertices.m_Size > v7 );
  }
  return 1;
}


// CShatterGlassShard::IsPointWithinConvexBounds  (line 401, @0x000000000222dab0, libserver.so)
// calls: CShatterGlassShard::IsPointWithinConvexBounds
__int64 __fastcall CShatterGlassShard::IsPointWithinConvexBounds(
        CShatterGlassShard *const this,
        Vector2D vecPoint,
        float flOuterTolerance,
        float *a4)
{
  if ( (this->m_vecPanelVertices.m_Size - 3) > 0x7D )
    return 0;
  else
    return CShatterGlassShard::IsPointWithinConvexBounds(this, vecPoint, flOuterTolerance, a4);
}


// CShatterGlassShard::GetLineIntersectionPoint  (line 455, @0x000000000222ca00, libserver.so)
// calls: sqrtf, sqrt
// callers: CFuncShatterglass::SliceVoronoiFragVerts, CShatterGlassShard::Shatter
bool __fastcall CShatterGlassShard::GetLineIntersectionPoint(
        Vector2D p1,
        Vector2D p2,
        Vector2D p3,
        Vector2D p4,
        Vector2D *const vecResult,
        float *a6,
        float *a7,
        float *a8,
        float *a9)
{
  float y; // xmm12_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm11_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  double v21; // xmm5_8
  double v22; // xmm4_8
  float v23; // xmm3_4
  double v24; // xmm2_8
  double v25; // xmm0_8

  y = vecResult->y;
  v10 = *a6 - vecResult->x;
  v11 = a6[1] - y;
  v12 = a7[1];
  v13 = *a8 - *a7;
  v14 = a8[1] - v12;
  v15 = fsqrt((v10 * v10) + (v11 * v11));
  v16 = fsqrt((v13 * v13) + (v14 * v14));
  if ( fabs(((v10 * v13) + (v11 * v14)) / (v15 * v16)) == 1.0 )
    return 0;
  v18 = (((y - v12) * v13) - ((vecResult->x - *a7) * v14)) / ((v14 * v10) - (v13 * v11));
  v19 = (v10 * v18) + vecResult->x;
  *a9 = v19;
  v20 = (v11 * v18) + vecResult->y;
  a9[1] = v20;
  v21 = sqrt((((v19 - vecResult->x) * (v19 - vecResult->x)) + ((v20 - vecResult->y) * (v20 - vecResult->y))));
  v22 = sqrt((((v19 - *a6) * (v19 - *a6)) + ((v20 - a6[1]) * (v20 - a6[1]))));
  v23 = a9[1] - a8[1];
  v24 = sqrt((((*a9 - *a7) * (*a9 - *a7)) + ((a9[1] - a7[1]) * (a9[1] - a7[1]))));
  v25 = sqrt((((*a9 - *a8) * (*a9 - *a8)) + (v23 * v23)));
  return fabs(v15 - (v22 + v21)) <= 0.0099999998 && fabs(v16 - (v24 + v25)) <= 0.0099999998;
}


// CShatterGlassShard::ResetVertexStats  (line 515, @0x000000000222ce80, libserver.so)
void __fastcall CShatterGlassShard::ResetVertexStats(CShatterGlassShard *const this)
{
  this->m_flLongestEdge = -1.0;
  this->m_flShortestEdge = -1.0;
  this->m_flLongestAcross = -1.0;
  this->m_flShortestAcross = -1.0;
  this->m_flSumOfAllEdges = -1.0;
  this->m_flArea = -1.0;
}


// CShatterGlassShard::WeldNearbyVerts  (line 526, @0x00000000022318a0, libserver.so)  // inlines: DistTo, FastSqrt, Length, ResetVertexStats, Vector2D, Vector2DLength, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator[]
// calls: CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Remove
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
bool __fastcall CShatterGlassShard::WeldNearbyVerts(CShatterGlassShard *const this)
{
  int m_Size; // r13d
  Vector2D *m_pMemory; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  float v6; // xmm2_4
  __int64 v7; // r14
  float *v8; // rax
  __int64 v9; // r14
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  float v14; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_vecPanelVertices.m_Size;
  if ( this->m_vecPanelVertices.m_Size <= 1 )
    return 0;
  m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
  v4 = m_Size - 1;
  v5 = 0;
  v6 = 0.30000001;
  v7 = m_Size - 1;
  v8 = &m_pMemory[v7];
  v9 = v7 * 8 - 8;
  v10 = *v8;
  v11 = v8[1];
  while ( v6 <= fsqrt(
                  ((v10 - m_pMemory[v5].x) * (v10 - m_pMemory[v5].x))
                + ((v11 - m_pMemory[v5].y) * (v11 - m_pMemory[v5].y))) )
  {
    v12 = v4 - 1;
    if ( v4 == 0 )
      goto LABEL_9;
LABEL_4:
    m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
    v10 = *(&m_pMemory->x + v9);
    v11 = *(&m_pMemory->y + v9);
    if ( this->m_vecPanelVertices.m_Size - 1 <= v12 )
      v4 = 0;
    v9 -= 8;
    v5 = v4;
    v4 = v12;
  }
  v14 = v6;
  CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::Remove(&this->m_vecPanelVertices, v4);
  v12 = v4 - 1;
  v6 = v14;
  if ( v4 != 0 )
    goto LABEL_4;
LABEL_9:
  if ( m_Size != this->m_vecPanelVertices.m_Size )
  {
    this->m_flLongestEdge = -1.0;
    this->m_flShortestEdge = -1.0;
    this->m_flLongestAcross = -1.0;
    this->m_flShortestAcross = -1.0;
    this->m_flSumOfAllEdges = -1.0;
    this->m_flArea = -1.0;
    return 1;
  }
  return 0;
}


// CShatterGlassShard::AddVertex  (line 562, @0x0000000002238720, libserver.so)  // inlines: AddToTail, GrowMemory, ResetVertexStats, Vector2DCopy, operator[]
// calls: CUtlMemory<Vector2D, int>::Grow
// callers: CShatterGlassShard::Shatter, CFuncShatterglass::Init
void __fastcall CShatterGlassShard::AddVertex(CShatterGlassShard *const this, Vector2D vecNew, vec_t *a3)
{
  __int64 m_Size; // r12
  int v6; // eax
  Vector2D *v7; // rax

  m_Size = this->m_vecPanelVertices.m_Size;
  v6 = this->m_vecPanelVertices.m_Size;
  if ( m_Size == this->m_vecPanelVertices.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<Vector2D,int>::Grow(&this->m_vecPanelVertices.m_Memory, 1);
    v6 = this->m_vecPanelVertices.m_Size;
  }
  this->m_vecPanelVertices.m_Size = v6 + 1;
  v7 = &this->m_vecPanelVertices.m_Memory.m_pMemory[m_Size];
  v7->x = *a3;
  v7->y = a3[1];
  this->m_flLongestEdge = -1.0;
  this->m_flShortestEdge = -1.0;
  this->m_flLongestAcross = -1.0;
  this->m_flShortestAcross = -1.0;
  this->m_flSumOfAllEdges = -1.0;
  this->m_flArea = -1.0;
}


// CShatterGlassShard::ScaleVerts  (line 568, @0x000000000222dad0, libserver.so)  // inlines: Lerp<Vector2D>, ResetVertexStats, Vector2DAdd, Vector2DMultiply, Vector2DSubtract, operator*, operator+, operator-, operator=, operator[]
// calls: CShatterGlassShard::GetPanelVertexAverage
// callers: CShatterGlassShard::ScaleVerts, CShatterGlassShard::Shatter
void __fastcall CShatterGlassShard::ScaleVerts(CShatterGlassShard *const this, float a2, float flAmount)
{
  __int64 v4; // rcx
  int i; // edx
  Vector2D *v6; // rax
  float x; // xmm3_4
  float v8; // xmm2_4
  Vector2D vecAverage; // [rsp+8h] [rbp-20h] BYREF

  CShatterGlassShard::GetPanelVertexAverage(&vecAverage, this);
  v4 = 0;
  for ( i = 0; i < this->m_vecPanelVertices.m_Size; v6->x = (v8 * a2) + x )
  {
    ++i;
    v6 = &this->m_vecPanelVertices.m_Memory.m_pMemory[v4++];
    x = vecAverage.x;
    v8 = v6->x - vecAverage.x;
    v6->y = ((v6->y - vecAverage.y) * a2) + vecAverage.y;
  }
  this->m_flLongestEdge = -1.0;
  this->m_flShortestEdge = -1.0;
  this->m_flLongestAcross = -1.0;
  this->m_flShortestAcross = -1.0;
  this->m_flSumOfAllEdges = -1.0;
  this->m_flArea = -1.0;
}


// CShatterGlassShard::ScaleVerts  (line 568, @0x000000000222db80, libserver.so)
// calls: CShatterGlassShard::ScaleVerts
void __fastcall CShatterGlassShard::ScaleVerts(CShatterGlassShard *const this, float a2, float flAmount)
{
  if ( a2 > 0.0 )
    CShatterGlassShard::ScaleVerts(this, a2, 0.0);
}


// CShatterGlassShard::CShatterGlassShard  (line 601, @0x00000000022351a0, libserver.so)  // inlines: CEntityHandle, CHandle, CStrongHandle, CUtlMemory, CUtlVector, CUtlVectorBase, GetStressPositionA, GetStressPositionB, GetStressVelocity, IncrementNumShardsEverCreated, SetStressPositionA, SetStressPositionB, SetStressVelocity, Vector2D, operator=, ~CUtlVector
// calls: CStrongHandle<InfoForResourceTypeCModel>::Init, CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CFuncShatterglass::CreateNewShard
void __fastcall CShatterGlassShard::CShatterGlassShard(
        CShatterGlassShard *const this,
        CFuncShatterglass *pParentPanel,
        CShatterGlassShard *pParentShard)
{
  HModelStrong *p_m_hModel; // rdi
  __int64 v7; // rdx
  vec_t z; // eax
  int m_nNumShardsEverCreated; // eax
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4

  p_m_hModel = &this->m_hModel;
  LODWORD(p_m_hModel[-3].m_pBinding) = 0;
  p_m_hModel[-2].m_pBinding = 0;
  LODWORD(p_m_hModel[-1].m_pBinding) = 0;
  HIDWORD(p_m_hModel[-1].m_pBinding) = 0;
  p_m_hModel->m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeCModel>::Init(p_m_hModel, 0);
  this->m_hPhysicsEntity.m_Index = -1;
  this->m_pParentShard = 0;
  this->m_ShatterStressType = ShatterGlassStressType::SHATTERGLASS_BLUNT;
  this->m_bCreatedModel = 0;
  v7 = *&vec3_origin.x;
  this->m_flLongestEdge = -1.0;
  z = vec3_origin.z;
  this->m_flShortestEdge = -1.0;
  this->m_flLongestAcross = -1.0;
  this->m_flShortestAcross = -1.0;
  *&this->m_vecStressVelocity.x = v7;
  this->m_vecStressVelocity.z = z;
  this->m_flSumOfAllEdges = -1.0;
  this->m_flArea = -1.0;
  this->m_nOnFrameEdge = OnFrame::ONFRAME_UNKNOWN;
  this->m_nParentPanelsNthShard = 0;
  this->m_nSubShardGeneration = 0;
  this->m_bShattered = 0;
  this->m_vecAverageVertPosition.x = 0.0;
  this->m_vecAverageVertPosition.y = 0.0;
  this->m_bAverageVertPositionIsValid = 0;
  this->m_vecPanelSpaceStressPositionA.x = 0.0;
  this->m_vecPanelSpaceStressPositionA.y = 0.0;
  this->m_vecPanelSpaceStressPositionB.x = 0.0;
  this->m_vecPanelSpaceStressPositionB.y = 0.0;
  this->m_bStressPositionAIsValid = 0;
  this->m_bStressPositionBIsValid = 0;
  this->m_bFlaggedForRemoval = 0;
  this->m_flPhysicsEntitySpawnedAtTime = 0.0;
  this->m_bShatterRateLimited = 0;
  this->m_hEntityHittingMe.m_Index = -1;
  this->m_vecNeighbors.m_Size = 0;
  this->m_vecNeighbors.m_Memory.m_pMemory = 0;
  this->m_pParentPanel = pParentPanel;
  this->m_vecNeighbors.m_Memory.m_nAllocationCount = 0;
  this->m_vecNeighbors.m_Memory.m_nGrowSize = 0;
  ++pParentPanel->m_nNumShardsEverCreated;
  m_nNumShardsEverCreated = this->m_pParentPanel->m_nNumShardsEverCreated;
  this->m_pParentShard = pParentShard;
  this->m_nParentPanelsNthShard = m_nNumShardsEverCreated;
  if ( pParentShard != 0 )
  {
    this->m_nSubShardGeneration = pParentShard->m_nSubShardGeneration + 1;
    x = pParentShard->m_vecPanelSpaceStressPositionA.x;
    y = pParentShard->m_vecPanelSpaceStressPositionA.y;
    this->m_bStressPositionAIsValid = 1;
    this->m_vecPanelSpaceStressPositionA.x = x;
    this->m_vecPanelSpaceStressPositionA.y = y;
    v12 = pParentShard->m_vecPanelSpaceStressPositionB.x;
    v13 = pParentShard->m_vecPanelSpaceStressPositionB.y;
    this->m_bStressPositionBIsValid = 1;
    this->m_vecPanelSpaceStressPositionB.x = v12;
    this->m_vecPanelSpaceStressPositionB.y = v13;
    v14 = pParentShard->m_vecStressVelocity.y;
    v15 = pParentShard->m_vecStressVelocity.z;
    this->m_vecStressVelocity.x = pParentShard->m_vecStressVelocity.x;
    this->m_vecStressVelocity.y = v14;
    this->m_vecStressVelocity.z = v15;
  }
  else
  {
    this->m_nSubShardGeneration = 0;
  }
}


// CShatterGlassShard::FlagForRemoval  (line 628, @0x000000000222ec60, libserver.so)  // inlines: GetBool, GetInt, Line, Vector2D, VertexColor_t, operator[]
// calls: CShatterGlassShard::LocalToWorldSpace, CShatterGlassShard::DisableAndHidePhysics
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CShatterGlassShard::Shatter, CShatterGlassShardPhysics::VPhysicsCollision, CFuncShatterglass::GlassThink
// globals: debugoverlay
void __fastcall CShatterGlassShard::FlagForRemoval(CShatterGlassShard *const this)
{
  int m_Size; // edx
  __int64 v3; // rcx
  int v4; // r12d
  __int64 v5; // rdx
  float *v6; // rdx
  Vector2D v7; // xmm0_8
  Vector2D v8; // xmm0_8
  int v9; // xmm1_4
  int v10; // xmm1_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rdx
  Vector2D *m_pMemory; // rsi
  __int64 v13; // r13
  float v14; // [rsp+18h] [rbp-88h]
  float v15; // [rsp+1Ch] [rbp-84h]
  _BYTE v16[16]; // [rsp+20h] [rbp-80h] BYREF
  float v17[4]; // [rsp+30h] [rbp-70h] BYREF
  float v18[4]; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-50h] BYREF
  int v20; // [rsp+58h] [rbp-48h]
  Vector2D v21; // [rsp+60h] [rbp-40h] BYREF
  int v22; // [rsp+68h] [rbp-38h]

  if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    m_Size = this->m_vecPanelVertices.m_Size;
    if ( this->m_vecPanelVertices.m_Size > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
        v13 = v3 + 8;
        if ( m_Size - 1 > v4 )
          v5 = v3 + 8;
        else
          v5 = 0;
        v6 = (m_pMemory + v5);
        v14 = *(&m_pMemory->y + v3);
        ++v4;
        v7 = *(v6 + 1);
        v15 = *(&m_pMemory->x + v3);
        v18[0] = *v6;
        v18[1] = v7.x;
        v8 = CShatterGlassShard::LocalToWorldSpace(this, v7, v18).m128i_u64[0];
        v22 = v9;
        v21 = v8;
        v17[0] = v15;
        v17[1] = v14;
        v19 = CShatterGlassShard::LocalToWorldSpace(this, v8, v17).m128i_u64[0];
        v20 = v10;
        vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
        v16[0] = -1;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = -1;
        vptr_ISceneViewDebugOverlays[13](debugoverlay, &v19, &v21, v16, 1, 1.0);
        m_Size = this->m_vecPanelVertices.m_Size;
        v3 = v13;
      }
      while ( this->m_vecPanelVertices.m_Size > v4 );
    }
  }
  this->m_bFlaggedForRemoval = 1;
  CShatterGlassShard::DisableAndHidePhysics(this);
}


// CShatterGlassShard::DisableAndHidePhysics  (line 644, @0x000000000222ceb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetNavIgnore, operator CEntityInstance*, operator->, operator=<float>
// calls: CBaseEntity::PhysicsEnableMotion, CBaseEntity::AddEffects
// callers: CShatterGlassShard::FlagForRemoval, CShatterGlassShard::Shatter
// globals: CEntityHandle::gm_pEntityList
void __fastcall CShatterGlassShard::DisableAndHidePhysics(CShatterGlassShard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  float *m_pInstance; // r12
  CBaseEntity *v6; // rdi
  uint32 v7; // edx
  CEntityInstance *v8; // rax
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  uint32 v11; // edx
  CEntityInstance *v12; // rax
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx
  uint32 v15; // eax
  CBaseEntity *v16; // rdi
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CConcreteEntityList *v19; // rcx
  CEntityIdentity *v20; // rdx

  m_Index = this->m_hPhysicsEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hPhysicsEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          if ( (m_pInstance[183] >= 3.4028235e38
             || ((*(*m_pInstance + 176LL))(m_pInstance, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL),
                 v19 = CEntityHandle::gm_pEntityList,
                 m_pInstance[183] = 3.4028235e38,
                 (m_Index = this->m_hPhysicsEntity.m_Index) + 2 > 1)
             && (v20 = v19->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F]) != 0
             && (v4 = &v20[this->m_hPhysicsEntity.m_Index & 0x1FF]) != 0)
            && m_Index == v4->m_EHandle.m_Index )
          {
            v6 = v4->m_pInstance;
          }
          else
          {
            v6 = 0;
          }
          CBaseEntity::PhysicsEnableMotion(v6, 0);
          v7 = this->m_hPhysicsEntity.m_Index;
          v8 = 0;
          if ( v7 + 2 > 1 )
          {
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[this->m_hPhysicsEntity.m_Index & 0x1FF];
              if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
                v8 = v10->m_pInstance;
            }
          }
          (*(v8[17].m_iszPrivateVScripts.u.m_Id + 208))(&v8[17].m_iszPrivateVScripts, 0);
          v11 = this->m_hPhysicsEntity.m_Index;
          v12 = 0;
          if ( v11 + 2 > 1 )
          {
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[this->m_hPhysicsEntity.m_Index & 0x1FF];
              if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
                v12 = v14->m_pInstance;
            }
          }
          (*(v12[17].m_iszPrivateVScripts.u.m_Id + 128))(&v12[17].m_iszPrivateVScripts);
          v15 = this->m_hPhysicsEntity.m_Index;
          v16 = 0;
          if ( v15 + 2 > 1 )
          {
            v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
            if ( v17 != 0 )
            {
              v18 = &v17[this->m_hPhysicsEntity.m_Index & 0x1FF];
              if ( v18 != 0 && v15 == v18->m_EHandle.m_Index )
                v16 = v18->m_pInstance;
            }
          }
          CBaseEntity::AddEffects(v16, 32);
        }
      }
    }
  }
}


// CShatterGlassShard::FreezeInPlace  (line 657, @0x000000000222e550, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::PhysicsEnableMotion, CBaseEntity::SetParent, CShatterGlassShard::GetPanelVertexAverage, CShatterGlassShard::LocalToWorldSpace
// callers: CShatterGlassShard::Shatter, CFuncShatterglass::Init
// strings: "frozen"
// globals: CEntityHandle::gm_pEntityList, debugoverlay
void __fastcall CShatterGlassShard::FreezeInPlace(CShatterGlassShard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 v5; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  void (__fastcall *v9)(ISceneViewDebugOverlays *, unsigned __int64 *, const char *, double); // r13
  int v10; // xmm1_4
  Vector2D v11[2]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-30h] BYREF
  int v13; // [rsp+18h] [rbp-28h]
  Vector2D v14; // 0:xmm0_8.8

  m_Index = this->m_hPhysicsEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hPhysicsEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        CBaseEntity::PhysicsEnableMotion(v4->m_pInstance, 0);
        v5 = this->m_hPhysicsEntity.m_Index;
        m_pInstance = 0;
        if ( v5 + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[this->m_hPhysicsEntity.m_Index & 0x1FF];
            if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
              m_pInstance = v8->m_pInstance;
          }
        }
        CBaseEntity::SetParent(m_pInstance, this->m_pParentPanel, 0, 0);
        if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          v9 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 53);
          CShatterGlassShard::GetPanelVertexAverage(v11, this);
          v12 = CShatterGlassShard::LocalToWorldSpace(this, v14, v11).m128i_u64[0];
          v13 = v10;
          v9(debugoverlay, &v12, "frozen", 0.5);
        }
      }
    }
  }
}


// CShatterGlassShard::UnFreeze  (line 674, @0x000000000222d180, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetCollisionGroup, SetNavIgnore, operator CEntityInstance*, operator->, operator=<float>
// calls: CShatterGlassShard::IsFrozen, CBaseEntity::SetParent, CBaseEntity::PhysicsEnableMotion, CCollisionProperty::SetCollisionGroup
// callers: CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame, CShatterGlassShard::Shatter, CShatterGlassShard::TakeDamage, CFuncShatterglass::InputShatter
// globals: CEntityHandle::gm_pEntityList
void __fastcall CShatterGlassShard::UnFreeze(CShatterGlassShard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 v5; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  float *v9; // r12
  uint32 v10; // eax
  CConcreteEntityList *v11; // rsi
  unsigned int v12; // edx
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx
  CCollisionProperty *v15; // rdi
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx

  if ( CShatterGlassShard::IsFrozen(this) )
  {
    m_Index = this->m_hPhysicsEntity.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hPhysicsEntity.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        {
          CBaseEntity::SetParent(v4->m_pInstance, 0, 0, 0);
          v5 = this->m_hPhysicsEntity.m_Index;
          m_pInstance = 0;
          if ( v5 + 2 > 1 )
          {
            v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
            if ( v7 != 0 )
            {
              v8 = &v7[this->m_hPhysicsEntity.m_Index & 0x1FF];
              if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
                m_pInstance = v8->m_pInstance;
            }
          }
          v9 = 0;
          CBaseEntity::PhysicsEnableMotion(m_pInstance, 1);
          v10 = this->m_hPhysicsEntity.m_Index;
          v11 = CEntityHandle::gm_pEntityList;
          v12 = v10 + 2;
          if ( v10 + 2 > 1 )
          {
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[this->m_hPhysicsEntity.m_Index & 0x1FF];
              if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
                v9 = v14->m_pInstance;
            }
          }
          if ( v9[183] < 3.4028235e38 )
          {
            (*(*v9 + 176LL))(v9, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v11 = CEntityHandle::gm_pEntityList;
            v9[183] = 3.4028235e38;
            v10 = this->m_hPhysicsEntity.m_Index;
            v12 = v10 + 2;
          }
          v15 = 0;
          if ( v12 > 1 )
          {
            v16 = v11->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
            if ( v16 != 0 )
            {
              v17 = &v16[this->m_hPhysicsEntity.m_Index & 0x1FF];
              if ( v17 != 0 && v17->m_EHandle.m_Index == v10 )
                v15 = v17->m_pInstance;
            }
          }
          CCollisionProperty::SetCollisionGroup(v15 + 5, 5);
        }
      }
    }
  }
}


// CShatterGlassShard::IsFrozen  (line 691, @0x000000000222d110, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::PhysicsGetMotionType
// callers: CShatterGlassShard::UnFreeze, CShatterGlassShard::ApplyVelocity, CShatterGlassShard::IsEligibleToDeSpawn, CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CShatterGlassShard::Shatter, CFuncShatterglass::BreakLargestShard, CFuncShatterglass::GlassThink
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CShatterGlassShard::IsFrozen(CShatterGlassShard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  bool result; // al

  m_Index = this->m_hPhysicsEntity.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[this->m_hPhysicsEntity.m_Index & 0x1FF];
  if ( v3 == 0 || m_Index != v3->m_EHandle.m_Index )
    return 0;
  result = 0;
  if ( v3->m_pInstance != 0 )
    return CBaseEntity::PhysicsGetMotionType(v3->m_pInstance) == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED;
  return result;
}


// CShatterGlassShard::ApplyVelocity  (line 703, @0x000000000222d370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Line, LookupEntity, VectorAdd, VertexColor_t, operator CEntityInstance*, operator+, operator->
// calls: CShatterGlassShard::IsFrozen, CBaseEntity::PhysicsEnableMotion, CBaseEntity::VPhysicsGetObject
// callers: CShatterGlassShard::ApplyParentImpactVelocity, CShatterGlassShard::Shatter, CShatterGlassShard::TakeDamage
// globals: CEntityHandle::gm_pEntityList, debugoverlay
void __fastcall CShatterGlassShard::ApplyVelocity(
        CShatterGlassShard *const this,
        double a2,
        vec_t a3,
        double a4,
        vec_t a5)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // edx
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  uint32 v13; // eax
  const CBaseEntity *v14; // rdi
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  IPhysicsObject *Object; // rax
  int (**vptr_ISceneViewDebugOverlays)(...); // rdx
  IPhysicsObject *pObj; // [rsp+8h] [rbp-58h]
  Vector vecVela; // [rsp+10h] [rbp-50h] BYREF
  Vector vecPosa; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-30h] BYREF
  float v23[8]; // [rsp+40h] [rbp-20h] BYREF

  *&vecPosa.x = a2;
  m_Index = this->m_hPhysicsEntity.m_Index;
  vecPosa.z = a3;
  *&vecVela.x = a4;
  vecVela.z = a5;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hPhysicsEntity.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 && !CShatterGlassShard::IsFrozen(this) )
      {
        v9 = this->m_hPhysicsEntity.m_Index;
        m_pInstance = 0;
        if ( v9 + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[this->m_hPhysicsEntity.m_Index & 0x1FF];
            if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
              m_pInstance = v12->m_pInstance;
          }
        }
        CBaseEntity::PhysicsEnableMotion(m_pInstance, 1);
        v13 = this->m_hPhysicsEntity.m_Index;
        v14 = 0;
        if ( v13 + 2 > 1 )
        {
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[this->m_hPhysicsEntity.m_Index & 0x1FF];
            if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
              v14 = v16->m_pInstance;
          }
        }
        Object = CBaseEntity::VPhysicsGetObject(v14);
        if ( Object != 0 )
        {
          if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            pObj = Object;
            v23[2] = vecPosa.z + vecVela.z;
            v23[1] = vecPosa.y + vecVela.y;
            v23[0] = vecPosa.x + vecVela.x;
            vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
            v22[0] = -1;
            v22[1] = 0;
            v22[2] = 0;
            v22[3] = -1;
            vptr_ISceneViewDebugOverlays[13](debugoverlay, &vecPosa, v23, v22, 1, 1.0);
            Object = pObj;
          }
          (*(*Object + 1784LL))(Object, &vecVela, &vecPosa);
        }
      }
    }
  }
}


// CShatterGlassShard::ApplyParentImpactVelocity  (line 722, @0x000000000222e690, libserver.so)  // inlines: GetStressPositionA, GetStressVelocity, Vector2D
// calls: CShatterGlassShard::LocalToWorldSpace, CShatterGlassShard::ApplyVelocity
// callers: CShatterGlassShard::Shatter
void __fastcall CShatterGlassShard::ApplyParentImpactVelocity(CShatterGlassShard *const this)
{
  CShatterGlassShard *m_pParentShard; // rdi
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  Vector2D y_low; // xmm0_8
  double v6; // xmm0_8
  vec_t v7; // xmm1_4
  float v8[4]; // [rsp+0h] [rbp-40h] BYREF
  double v9; // [rsp+10h] [rbp-30h]
  vec_t z; // [rsp+18h] [rbp-28h]

  m_pParentShard = this->m_pParentShard;
  y = m_pParentShard->m_vecStressVelocity.y;
  z = m_pParentShard->m_vecStressVelocity.z;
  x = m_pParentShard->m_vecStressVelocity.x;
  v8[0] = m_pParentShard->m_vecPanelSpaceStressPositionA.x;
  y_low = LODWORD(m_pParentShard->m_vecPanelSpaceStressPositionA.y);
  v9 = COERCE_DOUBLE(__PAIR64__(LODWORD(y), LODWORD(x)));
  v8[1] = y_low.x;
  *&v6 = CShatterGlassShard::LocalToWorldSpace(m_pParentShard, y_low, v8).m128i_u64[0];
  CShatterGlassShard::ApplyVelocity(this, v6, v7, v9, z);
}


// CShatterGlassShard::DentShardInwards  (line 729, @0x000000000222e700, libserver.so)  // inlines: DotProduct, Get, GetInstance, GetPanelNormalWorldSpace, GetStressVelocity, Normalized, SetOrigin, ToQAngle, Vector2D, Vector2DMultiply, VectorAdd, VectorMultiply, VectorSubtract, abs<float>, operator*, operator+, operator-, operator->, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CShatterGlassShard::LocalToWorldSpace, VectorNormalize, MatrixBuildRotationAboutAxis, CBaseEntity::EntityToWorldTransform, ConcatTransforms, MatrixAngles, CBaseEntity::SetAbsAngles, CBaseEntity::SetAbsOrigin
// callers: CShatterGlassShard::Shatter
void __fastcall CShatterGlassShard::DentShardInwards(CShatterGlassShard *const this)
{
  CHandle<CShatterGlassShardPhysics> *p_m_hPhysicsEntity; // r12
  CFuncShatterglass *m_pParentPanel; // rax
  int m_Size; // r10d
  float v5; // xmm1_4
  float v6; // xmm3_4
  Vector2D *m_pMemory; // rdx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r8d
  float x; // xmm0_4
  int v12; // edi
  __int64 v13; // rcx
  float *v14; // rcx
  bool v15; // r9
  float v16; // xmm0_4
  unsigned int v17; // r14d
  bool v18; // si
  float y; // xmm0_4
  float v20; // xmm0_4
  bool v21; // cl
  float v22; // xmm1_4
  unsigned __int64 v23; // xmm0_8
  float v24; // xmm1_4
  CFuncShatterglass *v25; // rax
  vec_t z; // xmm5_4
  vec_t v27; // xmm7_4
  float v28; // ebx
  CBaseEntity *v29; // rax
  matrix3x4_t *v30; // rax
  __int64 v31; // rax
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  CFuncShatterglass *v35; // rax
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  CBaseEntity *v39; // rax
  CBaseEntity *v40; // rax
  float v41; // [rsp+Ch] [rbp-E4h]
  float v42; // [rsp+10h] [rbp-E0h]
  unsigned __int64 vecHingePoint1; // [rsp+20h] [rbp-D0h]
  float vecHingePoint1_8; // [rsp+28h] [rbp-C8h]
  Vector vecHingeAxis; // [rsp+40h] [rbp-B0h] BYREF
  QAngle angles; // [rsp+50h] [rbp-A0h] BYREF
  matrix3x4_t matRot; // [rsp+60h] [rbp-90h] BYREF
  matrix3x4_t matTemp; // [rsp+90h] [rbp-60h] BYREF

  p_m_hPhysicsEntity = &this->m_hPhysicsEntity;
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hPhysicsEntity) == 0 )
    return;
  m_pParentPanel = this->m_pParentPanel;
  m_Size = this->m_vecPanelVertices.m_Size;
  v5 = (m_pParentPanel->m_PanelSize.x * 0.5) * 0.99000001;
  v6 = (0.5 * m_pParentPanel->m_PanelSize.y) * 0.99000001;
  if ( this->m_vecPanelVertices.m_Size <= 0 )
    return;
  m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  while ( 1 )
  {
    while ( m_Size - 1 > v9 )
    {
      x = m_pMemory[v8].x;
      v12 = v9 + 1;
      v13 = v8 * 8 + 8;
      if ( x >= 0.0 )
        goto LABEL_6;
LABEL_14:
      if ( -x < v5 )
        goto LABEL_15;
LABEL_7:
      v14 = (m_pMemory + v13);
      v15 = 1;
      v16 = *v14;
      v17 = v10 >> 31;
      v18 = 0;
      if ( *v14 >= 0.0 )
        goto LABEL_8;
LABEL_18:
      if ( -v16 < v5 )
        goto LABEL_19;
LABEL_9:
      if ( v18 )
        v10 = v12;
LABEL_11:
      ++v9;
      ++v8;
      if ( v9 == m_Size )
        return;
    }
    x = m_pMemory[v8].x;
    v13 = 0;
    v12 = 0;
    if ( x < 0.0 )
      goto LABEL_14;
LABEL_6:
    if ( x >= v5 )
      goto LABEL_7;
LABEL_15:
    y = m_pMemory[v8].y;
    if ( y < 0.0 )
      y = -y;
    v15 = y >= v6;
    v14 = (m_pMemory + v13);
    v16 = *v14;
    LOBYTE(v17) = v10 < 0;
    v18 = v10 < 0 && !v15;
    if ( *v14 < 0.0 )
      goto LABEL_18;
LABEL_8:
    if ( v16 >= v5 )
      goto LABEL_9;
LABEL_19:
    v20 = v14[1];
    if ( v20 < 0.0 )
      v20 = -v20;
    if ( !v18 )
    {
      v21 = v15 && v20 < v6;
      goto LABEL_23;
    }
    if ( v20 < v6 )
      break;
    ++v9;
    ++v8;
    v10 = v12;
    if ( v9 == m_Size )
      return;
  }
  v21 = v15;
LABEL_23:
  if ( !v21 || v10 == v12 )
    goto LABEL_11;
  if ( v17 == 0 && v9 != v10 )
  {
    *&matTemp.m_flMatVal[0][0] = m_pMemory[v10];
    vecHingePoint1 = CShatterGlassShard::LocalToWorldSpace(this, LODWORD(matTemp.m_flMatVal[0][1]), &matTemp).m128i_u64[0];
    vecHingePoint1_8 = v22;
    *&matTemp.m_flMatVal[0][0] = this->m_vecPanelVertices.m_Memory.m_pMemory[v8];
    v23 = CShatterGlassShard::LocalToWorldSpace(this, LODWORD(matTemp.m_flMatVal[0][1]), &matTemp).m128i_u64[0];
    matTemp.m_flMatVal[0][1] = *(&vecHingePoint1 + 1) - *(&v23 + 1);
    matTemp.m_flMatVal[0][2] = vecHingePoint1_8 - v24;
    matTemp.m_flMatVal[0][0] = *&vecHingePoint1 - *&v23;
    VectorNormalize(&matTemp);
    v25 = this->m_pParentPanel;
    vecHingeAxis = *&matTemp.m_flMatVal[0][0];
    v41 = v25->m_vecPanelNormalWs.x;
    z = this->m_vecStressVelocity.z;
    v42 = v25->m_vecPanelNormalWs.y;
    v27 = this->m_vecStressVelocity.x;
    v28 = v25->m_vecPanelNormalWs.z;
    matTemp.m_flMatVal[0][1] = this->m_vecStressVelocity.y;
    matTemp.m_flMatVal[0][0] = v27;
    matTemp.m_flMatVal[0][2] = z;
    VectorNormalize(&matTemp);
    MatrixBuildRotationAboutAxis(
      &vecHingeAxis,
      ((v41 * matTemp.m_flMatVal[0][0]) + (v42 * matTemp.m_flMatVal[0][1])) + (v28 * matTemp.m_flMatVal[0][2]),
      &matRot);
    v29 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
    v30 = CBaseEntity::EntityToWorldTransform(v29);
    *&matTemp.m_flMatVal[0][0] = *&v30->m_flMatVal[0][0];
    qmemcpy(matTemp.m_flMatVal[1], v30->m_flMatVal[1], 24);
    v31 = *&v30->m_flMatVal[2][2];
    matTemp.m_flMatVal[0][3] = matTemp.m_flMatVal[0][3] - *&vecHingePoint1;
    matTemp.m_flMatVal[1][3] = matTemp.m_flMatVal[1][3] - *(&vecHingePoint1 + 1);
    LODWORD(matTemp.m_flMatVal[2][2]) = v31;
    matTemp.m_flMatVal[2][3] = *(&v31 + 1) - vecHingePoint1_8;
    ConcatTransforms(&matRot, &matTemp, &matTemp);
    v32 = *&vecHingePoint1 + matTemp.m_flMatVal[0][3];
    v33 = *(&vecHingePoint1 + 1) + matTemp.m_flMatVal[1][3];
    v34 = vecHingePoint1_8 + matTemp.m_flMatVal[2][3];
    v35 = this->m_pParentPanel;
    matTemp.m_flMatVal[0][3] = *&vecHingePoint1 + matTemp.m_flMatVal[0][3];
    matTemp.m_flMatVal[1][3] = *(&vecHingePoint1 + 1) + matTemp.m_flMatVal[1][3];
    matTemp.m_flMatVal[2][3] = vecHingePoint1_8 + matTemp.m_flMatVal[2][3];
    if ( v35->m_ShatterPanelMode == ShatterPanelMode::SHATTER_DRYWALL )
    {
      v36 = (v35->m_vecPanelNormalWs.y * 0.25) + v33;
      v37 = v35->m_vecPanelNormalWs.z;
      v38 = 0.25 * v35->m_vecPanelNormalWs.x;
      matTemp.m_flMatVal[1][3] = v36;
      matTemp.m_flMatVal[2][3] = (v37 * 0.25) + v34;
      matTemp.m_flMatVal[0][3] = v38 + v32;
    }
    MatrixAngles(&matTemp, &angles);
    v39 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
    CBaseEntity::SetAbsAngles(v39, &angles);
    angles.x = matTemp.m_flMatVal[0][3];
    angles.y = matTemp.m_flMatVal[1][3];
    angles.z = matTemp.m_flMatVal[2][3];
    v40 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
    CBaseEntity::SetAbsOrigin(v40, &angles);
  }
}


// CShatterGlassShard::GetSpawnTransform  (line 801, @0x000000000222e350, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CFuncShatterglass::GetPanelTransform, CBaseEntity::EntityToWorldTransform
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
// globals: CEntityHandle::gm_pEntityList
const matrix3x4_t *__fastcall CShatterGlassShard::GetSpawnTransform(CShatterGlassShard *const this)
{
  CShatterGlassShard *m_pParentShard; // rax
  uint32 m_Index; // edx
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CBaseEntity *m_pInstance; // rax

  m_pParentShard = this->m_pParentShard;
  if ( m_pParentShard != 0
    && (m_Index = m_pParentShard->m_hPhysicsEntity.m_Index) + 2 > 1
    && (v3 = m_pParentShard->m_hPhysicsEntity.m_Index,
        (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F]) != 0)
    && (v5 = &v4[v3 & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance) != 0 )
  {
    return CBaseEntity::EntityToWorldTransform(m_pInstance);
  }
  else
  {
    return CFuncShatterglass::GetPanelTransform(this->m_pParentPanel);
  }
}


// CShatterGlassShard::IsOnFrameEdge  (line 810, @0x000000000222d560, libserver.so)  // inlines: Vector2DMultiply, abs<float>, operator*
// callers: CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame, CShatterGlassShard::Shatter
bool __fastcall CShatterGlassShard::IsOnFrameEdge(CShatterGlassShard *const this)
{
  OnFrame m_nOnFrameEdge; // eax
  CFuncShatterglass *m_pParentPanel; // rax
  float v3; // xmm2_4
  float v4; // xmm3_4
  Vector2D *m_pMemory; // rax
  __int64 v6; // rdx
  float x; // xmm0_4
  float y; // xmm0_4

  m_nOnFrameEdge = this->m_nOnFrameEdge;
  if ( m_nOnFrameEdge != OnFrame::ONFRAME_UNKNOWN )
    return m_nOnFrameEdge == OnFrame::ONFRAME_TRUE;
  m_pParentPanel = this->m_pParentPanel;
  this->m_nOnFrameEdge = OnFrame::ONFRAME_FALSE;
  v3 = (m_pParentPanel->m_PanelSize.x * 0.5) * 0.99000001;
  v4 = (0.5 * m_pParentPanel->m_PanelSize.y) * 0.99000001;
  if ( this->m_vecPanelVertices.m_Size <= 0 )
    return 0;
  m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
  v6 = &m_pMemory[(this->m_vecPanelVertices.m_Size - 1) + 1];
  while ( 1 )
  {
    x = m_pMemory->x;
    if ( m_pMemory->x < 0.0 )
      x = -x;
    if ( x >= v3 )
      break;
    y = m_pMemory->y;
    if ( y < 0.0 )
      y = -y;
    if ( y >= v4 )
      break;
    if ( ++m_pMemory == v6 )
      return 0;
  }
  this->m_nOnFrameEdge = OnFrame::ONFRAME_TRUE;
  return 1;
}


// CShatterGlassShard::IsPrimaryShard  (line 833, @0x000000000222d620, libserver.so)
bool __fastcall CShatterGlassShard::IsPrimaryShard(CShatterGlassShard *const this)
{
  CFuncShatterglass *m_pParentPanel; // rax

  m_pParentPanel = this->m_pParentPanel;
  return m_pParentPanel != 0 && m_pParentPanel->m_vecShatterGlassShards.m_Size == 1;
}


// CShatterGlassShard::IsLongAndSkinnySliver  (line 838, @0x000000000222dc70, libserver.so)
// calls: CShatterGlassShard::GetArea, CShatterGlassShard::GetLongestAcross
// callers: CShatterGlassShard::IsTooSmallToShatter, CShatterGlassShard::IsTooSmallToSpawn
bool __fastcall CShatterGlassShard::IsLongAndSkinnySliver(CShatterGlassShard *const this)
{
  float v2; // r14d
  float Area; // xmm0_4
  float LongestAcross; // xmm0_4
  bool result; // al
  float flArea; // [rsp+Ch] [rbp-14h]

  v2 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3D4CCCCDu));
  if ( this->m_pParentPanel->m_ShatterPanelMode == ShatterPanelMode::SHATTER_DRYWALL )
    v2 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3DCCCCCDu));
  Area = CShatterGlassShard::GetArea(this);
  result = Area > 0.0
        && (flArea = Area, (LongestAcross = CShatterGlassShard::GetLongestAcross(this)) > 0.0)
        && v2 > ((flArea / LongestAcross) / LongestAcross);
  return result;
}


// CShatterGlassShard::IsTooSmallToShatter  (line 854, @0x000000000222dd00, libserver.so)
// calls: CShatterGlassShard::GetArea, CShatterGlassShard::GetLongestAcross, CShatterGlassShard::IsLongAndSkinnySliver
// callers: CShatterGlassShard::TakeDamage, CShatterGlassShardPhysics::VPhysicsCollision, CFuncShatterglass::InputShatter
bool __fastcall CShatterGlassShard::IsTooSmallToShatter(CShatterGlassShard *const this)
{
  return CShatterGlassShard::GetArea(this) < 9.0
      || CShatterGlassShard::GetLongestAcross(this) < 3.0
      || CShatterGlassShard::IsLongAndSkinnySliver(this);
}


// CShatterGlassShard::IsTooSmallToSpawn  (line 860, @0x000000000222dd60, libserver.so)  // inlines: GetSumOfAllEdges
// calls: CShatterGlassShard::GetArea, CShatterGlassShard::GetLongestAcross, CShatterGlassShard::IsLongAndSkinnySliver
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
bool __fastcall CShatterGlassShard::IsTooSmallToSpawn(CShatterGlassShard *const this)
{
  float m_flSumOfAllEdges; // xmm0_4

  if ( CShatterGlassShard::GetArea(this) < 4.0 || CShatterGlassShard::GetLongestAcross(this) < 0.5 )
    return 1;
  m_flSumOfAllEdges = this->m_flSumOfAllEdges;
  if ( m_flSumOfAllEdges < 0.0 )
  {
    CShatterGlassShard::GetLongestAcross(this);
    m_flSumOfAllEdges = this->m_flSumOfAllEdges;
  }
  return m_flSumOfAllEdges < 3.0 || CShatterGlassShard::IsLongAndSkinnySliver(this);
}


// CShatterGlassShard::GetLongestEdge  (line 866, @0x000000000222d730, libserver.so)  // inlines: GetSumOfAllEdges
// calls: CShatterGlassShard::GetLongestAcross
float __fastcall CShatterGlassShard::GetLongestEdge(CShatterGlassShard *const this)
{
  float result; // xmm0_4

  result = this->m_flLongestEdge;
  if ( result < 0.0 && this->m_flSumOfAllEdges < 0.0 )
  {
    CShatterGlassShard::GetLongestAcross(this);
    return this->m_flLongestEdge;
  }
  return result;
}


// CShatterGlassShard::GetShortestEdge  (line 875, @0x000000000222d770, libserver.so)  // inlines: GetSumOfAllEdges
// calls: CShatterGlassShard::GetLongestAcross
float __fastcall CShatterGlassShard::GetShortestEdge(CShatterGlassShard *const this)
{
  float result; // xmm0_4

  result = this->m_flShortestEdge;
  if ( result < 0.0 && this->m_flSumOfAllEdges < 0.0 )
  {
    CShatterGlassShard::GetLongestAcross(this);
    return this->m_flShortestEdge;
  }
  return result;
}


// CShatterGlassShard::GetLongestAcross  (line 884, @0x000000000222d650, libserver.so)  // inlines: DistTo, FastSqrt, Length, Vector2DLength, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator[]
// callers: CShatterGlassShard::GetLongestEdge, CShatterGlassShard::GetShortestEdge, CShatterGlassShard::GetShortestAcross, CShatterGlassShard::GetSumOfAllEdges, CShatterGlassShard::IsLongAndSkinnySliver, CShatterGlassShard::IsTooSmallToShatter, CShatterGlassShard::IsTooSmallToSpawn, CShatterGlassShard::GenerateProceduralShatterGlassShardModel
float __fastcall CShatterGlassShard::GetLongestAcross(CShatterGlassShard *const this)
{
  float result; // xmm0_4
  int m_Size; // edx
  __int64 v3; // r9
  __int64 v4; // rax
  Vector2D *m_pMemory; // rsi
  float *v6; // r8
  float *v7; // rsi
  float v8; // xmm2_4
  float v9; // xmm1_4
  float m_flShortestAcross; // xmm2_4
  float v11; // xmm1_4
  __int64 v12; // [rsp-8h] [rbp-8h]

  result = this->m_flLongestAcross;
  if ( result < 0.0 )
  {
    m_Size = this->m_vecPanelVertices.m_Size;
    this->m_flShortestAcross = 3.4028235e38;
    this->m_flLongestAcross = 0.0;
    this->m_flSumOfAllEdges = 0.0;
    if ( m_Size <= 0 )
    {
      return 0.0;
    }
    else
    {
      v3 = 0;
      result = 0.0;
      do
      {
        v4 = 0;
        do
        {
          while ( v3 >= v4 )
          {
            if ( m_Size <= ++v4 )
              goto LABEL_12;
          }
          m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
          v6 = &m_pMemory[v3];
          v7 = &m_pMemory[v4];
          v8 = v6[1] - v7[1];
          v9 = ((*v6 - *v7) * (*v6 - *v7)) + (v8 * v8);
          m_flShortestAcross = this->m_flShortestAcross;
          *(&v12 - 1) = v9;
          v11 = fsqrt(*(&v12 - 1));
          if ( m_flShortestAcross > v11 )
            this->m_flShortestAcross = v11;
          if ( v11 > result )
          {
            this->m_flLongestAcross = v11;
            result = v11;
          }
          ++v4;
          this->m_flSumOfAllEdges = v11 + this->m_flSumOfAllEdges;
        }
        while ( m_Size > v4 );
LABEL_12:
        ++v3;
      }
      while ( m_Size > v3 );
    }
  }
  return result;
}


// CShatterGlassShard::GetShortestAcross  (line 918, @0x000000000222d7b0, libserver.so)
// calls: CShatterGlassShard::GetLongestAcross
float __fastcall CShatterGlassShard::GetShortestAcross(CShatterGlassShard *const this)
{
  float result; // xmm0_4

  result = this->m_flShortestAcross;
  if ( result < 0.0 )
  {
    CShatterGlassShard::GetLongestAcross(this);
    return this->m_flShortestAcross;
  }
  return result;
}


// CShatterGlassShard::GetSumOfAllEdges  (line 927, @0x000000000222d7f0, libserver.so)
// calls: CShatterGlassShard::GetLongestAcross
float __fastcall CShatterGlassShard::GetSumOfAllEdges(CShatterGlassShard *const this)
{
  float result; // xmm0_4

  result = this->m_flSumOfAllEdges;
  if ( result < 0.0 )
  {
    CShatterGlassShard::GetLongestAcross(this);
    return this->m_flSumOfAllEdges;
  }
  return result;
}


// CShatterGlassShard::GetPanelVertexAverage  (line 937, @0x000000000222d830, libserver.so)  // inlines: Vector2D, operator+=, operator/=, operator=
// callers: CShatterGlassShard::IsPointWithinConvexBounds, CShatterGlassShard::ScaleVerts, CShatterGlassShard::FreezeInPlace, CShatterGlassShard::GetIsNeighborOf, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CShatterGlassShard::Shatter, CFuncShatterglass::InputHit
Vector2D *__fastcall CShatterGlassShard::GetPanelVertexAverage(Vector2D *a1, CShatterGlassShard *const this)
{
  Vector2D *result; // rax
  int m_Size; // edi
  float v4; // xmm1_4
  Vector2D *m_pMemory; // rcx
  float v6; // xmm0_4
  Vector2D *v7; // rdx
  __int64 v8; // r8
  float v9; // xmm2_4
  vec_t v10; // xmm0_4

  result = a1;
  if ( this->m_bAverageVertPositionIsValid
    || (m_Size = this->m_vecPanelVertices.m_Size, this->m_vecPanelVertices.m_Size == 0) )
  {
    *result = this->m_vecAverageVertPosition;
  }
  else
  {
    v4 = 0.0;
    this->m_vecAverageVertPosition.x = 0.0;
    this->m_vecAverageVertPosition.y = 0.0;
    if ( m_Size <= 0 )
    {
      v6 = 0.0;
    }
    else
    {
      m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
      v6 = 0.0;
      v7 = m_pMemory + 1;
      v8 = &m_pMemory[(m_Size - 1) + 1];
      while ( 1 )
      {
        v6 = v6 + m_pMemory->x;
        this->m_vecAverageVertPosition.x = v6;
        v4 = v4 + m_pMemory->y;
        m_pMemory = v7;
        this->m_vecAverageVertPosition.y = v4;
        if ( v7 == v8 )
          break;
        ++v7;
      }
    }
    this->m_bAverageVertPositionIsValid = 1;
    v9 = 1.0 / m_Size;
    v10 = v6 * v9;
    this->m_vecAverageVertPosition.x = v10;
    this->m_vecAverageVertPosition.y = v9 * v4;
    result->x = v10;
    result->y = this->m_vecAverageVertPosition.y;
  }
  return result;
}


// CShatterGlassShard::GetArea  (line 953, @0x000000000222dba0, libserver.so)  // inlines: Vector2D, abs<float>
// callers: CShatterGlassShard::IsLongAndSkinnySliver, CShatterGlassShard::IsTooSmallToShatter, CShatterGlassShard::IsTooSmallToSpawn, CShatterGlassShard::EmitShatterSound, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CShatterGlassShardPhysics::VPhysicsCollision, CFuncShatterglass::BreakLargestShard
float __fastcall CShatterGlassShard::GetArea(CShatterGlassShard *const this)
{
  float result; // xmm0_4
  int m_Size; // ecx
  Vector2D *m_pMemory; // rax
  int v4; // ecx
  int v5; // edx
  float x; // xmm6_4
  float y; // xmm5_4
  float v8; // xmm1_4

  result = this->m_flArea;
  if ( result < 0.0 )
  {
    m_Size = this->m_vecPanelVertices.m_Size;
    this->m_flArea = 0.0;
    result = 0.0;
    if ( m_Size > 2 )
    {
      m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
      v4 = m_Size - 1;
      v5 = 1;
      x = m_pMemory->x;
      y = m_pMemory->y;
      do
      {
        ++v5;
        v8 = ((m_pMemory[1].x - x) * (m_pMemory[2].y - y)) - ((m_pMemory[2].x - x) * (m_pMemory[1].y - y));
        if ( v8 < 0.0 )
          v8 = -v8;
        result = result + v8;
        ++m_pMemory;
        this->m_flArea = result;
      }
      while ( v5 != v4 );
      result = result * 0.5;
      if ( result < 0.0 )
        result = -result;
      this->m_flArea = result;
    }
  }
  return result;
}


// CShatterGlassShard::IsEligibleToDeSpawn  (line 997, @0x000000000222dde0, libserver.so)  // inlines: DotProduct, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, IsPrimaryShard, IsValid, LookupEntity, Normalized, VectorSubtract, curtime, operator CEntityInstance*, operator-, operator->
// calls: CShatterGlassShard::IsFrozen, UTIL_GetLocalPlayer, CEntityHandle::operator CEntityInstance*, CBasePlayer::EyeVectors, CBaseEntity::GetAbsOrigin, VectorNormalize
// callers: CFuncShatterglass::GlassThink
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CShatterGlassShard::IsEligibleToDeSpawn(CShatterGlassShard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  bool IsFrozen; // bl
  CFuncShatterglass *m_pParentPanel; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBasePlayer *LocalPlayer; // r13
  CHandle<CShatterGlassShardPhysics> *p_m_hPhysicsEntity; // r12
  CEntityInstance *v13; // rax
  float v14; // xmm1_4
  const CBaseEntity *v15; // rax
  const Vector *AbsOrigin; // rax
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  Vector vecPlayerEyeDir; // [rsp+0h] [rbp-50h] BYREF
  double v20; // [rsp+10h] [rbp-40h]
  float v21; // [rsp+18h] [rbp-38h]
  Vector vec; // [rsp+20h] [rbp-30h] BYREF

  m_Index = this->m_hPhysicsEntity.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1;
  v4 = &v3[this->m_hPhysicsEntity.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
    return 1;
  m_pParentPanel = this->m_pParentPanel;
  if ( m_pParentPanel == 0 || m_pParentPanel->m_vecShatterGlassShards.m_Size != 1 )
  {
    IsFrozen = CShatterGlassShard::IsFrozen(this);
    if ( !IsFrozen )
    {
      m_flCurrentTime = 0.0;
      v9 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        m_flCurrentTime = v9->m_flCurrentTime;
      }
      if ( shatterglass_shard_lifetime.m_pParent->m_Value.m_fValue <= (m_flCurrentTime
                                                                     - this->m_flPhysicsEntitySpawnedAtTime) )
      {
        LocalPlayer = UTIL_GetLocalPlayer();
        if ( LocalPlayer != 0 )
        {
          p_m_hPhysicsEntity = &this->m_hPhysicsEntity;
          v13 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
          if ( (*(LocalPlayer->_vptr_IHandleEntity + 482))(LocalPlayer, v13) == 0 )
          {
            CBasePlayer::EyeVectors(LocalPlayer, &vecPlayerEyeDir, 0, 0);
            v20 = (*(LocalPlayer->_vptr_IHandleEntity + 164))(LocalPlayer);
            v21 = v14;
            v15 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
            v17 = AbsOrigin->x - *&v20;
            v18 = AbsOrigin->z - v21;
            vec.y = AbsOrigin->y - *(&v20 + 1);
            vec.x = v17;
            vec.z = v18;
            VectorNormalize(&vec);
            return (((vec.x * vecPlayerEyeDir.x) + (vec.y * vecPlayerEyeDir.y)) + (vec.z * vecPlayerEyeDir.z)) < 0.30000001;
          }
          return IsFrozen;
        }
        return 1;
      }
    }
  }
  return 0;
}


// CShatterGlassShard::EmitShatterSound  (line 1039, @0x000000000222dfb0, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, ResetLastShatterSoundEmitTime, SpawnInvulnerabilityElapsed, curtime, entindex, ~CPASAttenuationFilter, ~CPASFilter
// calls: CShatterGlassShard::GetArea, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CPASAttenuationFilter::CPASAttenuationFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CShatterGlassShard::Shatter
// strings: "Phys.GlassBreakLg", "Phys.GlassBreakMd", "Phys.GlassBreakSm"
void __fastcall CShatterGlassShard::EmitShatterSound(CShatterGlassShard *const this, double a2, vec_t a3)
{
  CFuncShatterglass *m_pParentPanel; // rbx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v8; // rbx
  float v9; // xmm0_4
  FnGlobalVarsWarningFunc v10; // rax
  CFuncShatterglass *v11; // rbx
  CGlobalVars *v12; // r12
  float v13; // xmm0_4
  FnGlobalVarsWarningFunc v14; // rax
  float v15; // xmm1_4
  CEntityIndex v16; // eax
  CEntityIndex v17; // eax
  CEntityIndex v18; // eax
  Vector worldPositiona; // [rsp+0h] [rbp-170h] BYREF
  CPASAttenuationFilter filter; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v21; // [rsp+148h] [rbp-28h]

  worldPositiona.z = a3;
  v21 = __readfsqword(0x28u);
  m_pParentPanel = this->m_pParentPanel;
  *&worldPositiona.x = a2;
  if ( m_pParentPanel->m_ShatterPanelMode != ShatterPanelMode::SHATTER_DRYWALL )
  {
    m_flCurrentTime = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    if ( (m_flCurrentTime - m_pParentPanel->m_flInitAtTime) > m_pParentPanel->m_flSpawnInvulnerability )
    {
      v8 = gpGlobals;
      v9 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v10 = gpGlobals->m_pfnWarningFunc;
          if ( v10 != 0 )
            (v10)(1, 0.0);
        }
        v9 = v8->m_flCurrentTime;
      }
      v11 = this->m_pParentPanel;
      if ( (v9 - v11->m_flLastShatterSoundEmitTime) >= 0.1 )
      {
        v12 = gpGlobals;
        v13 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v14 = gpGlobals->m_pfnWarningFunc;
            if ( v14 != 0 )
              (v14)(1, 0.0);
          }
          v13 = v12->m_flCurrentTime;
        }
        v11->m_flLastShatterSoundEmitTime = v13;
        if ( CShatterGlassShard::GetArea(this) <= 1000.0 )
        {
          if ( CShatterGlassShard::GetArea(this) <= 500.0 )
          {
            CPASAttenuationFilter::CPASAttenuationFilter(&filter, &worldPositiona, soundlevel_t::SNDLVL_20dB);
            v18.m_Data = CEntityInstance::GetEntityIndex(this->m_pParentPanel).m_Data;
            CBaseEntity::EmitSound(&filter, v18, "Phys.GlassBreakSm", 0, 0.0, 0);
          }
          else
          {
            CPASAttenuationFilter::CPASAttenuationFilter(&filter, &worldPositiona, soundlevel_t::SNDLVL_40dB);
            v17.m_Data = CEntityInstance::GetEntityIndex(this->m_pParentPanel).m_Data;
            CBaseEntity::EmitSound(&filter, v17, "Phys.GlassBreakMd", 0, 0.0, 0);
          }
        }
        else
        {
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FCB190;
          CRecipientFilter::AddRecipientsByPAS(&filter, &worldPositiona);
          filter._vptr_IRecipientFilter = &off_3FECD70;
          CPASAttenuationFilter::Filter(&filter, &worldPositiona, 4.0, v15);
          v16.m_Data = CEntityInstance::GetEntityIndex(this->m_pParentPanel).m_Data;
          CBaseEntity::EmitSound(&filter, v16, "Phys.GlassBreakLg", 0, 0.0, 0);
        }
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
    }
  }
}


// CShatterGlassShard::IsShardNearPanelSpacePosition  (line 1073, @0x000000000222e3d0, libserver.so)  // inlines: DistToSqr, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LengthSqr, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::GetAbsOrigin, CFuncShatterglass::GetPanelTransform
// callers: CShatterGlassShard::Shatter
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CShatterGlassShard::IsShardNearPanelSpacePosition(CShatterGlassShard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *AbsOrigin; // r12
  float *PanelTransform; // rax
  float v8; // xmm1_4

  if ( this->m_pParentPanel == 0 )
    return 0;
  m_Index = this->m_hPhysicsEntity.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0;
  v4 = &v3[this->m_hPhysicsEntity.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4->m_pInstance);
  PanelTransform = CFuncShatterglass::GetPanelTransform(this->m_pParentPanel);
  v8 = PanelTransform[11] - AbsOrigin->z;
  return ((((PanelTransform[3] - AbsOrigin->x) * (PanelTransform[3] - AbsOrigin->x))
         + ((PanelTransform[7] - AbsOrigin->y) * (PanelTransform[7] - AbsOrigin->y)))
        + (v8 * v8)) < 4.0;
}


// CShatterGlassShard::Shatter  (line 1085, @0x00000000022426d0, libserver.so)  // inlines: IsPrimaryShard, Vector2D
// calls: CShatterGlassShard::GetPanelVertexAverage, CShatterGlassShard::Shatter, CUniformRandomStream::RandomFloat(float,float)
// callers: CFuncShatterglass::BreakLargestShard
// globals: g_ShatterGlassRandom
void __fastcall CShatterGlassShard::Shatter(CShatterGlassShard *const this)
{
  CFuncShatterglass *m_pParentPanel; // rax
  __m128i v3; // xmm0
  vec_t v4; // r12d
  Vector2D v5[4]; // [rsp+0h] [rbp-20h] BYREF
  Vector2D v6; // 0:xmm0_8.8
  Vector2D v7; // 0:xmm0_8.8

  m_pParentPanel = this->m_pParentPanel;
  if ( m_pParentPanel != 0 && m_pParentPanel->m_vecShatterGlassShards.m_Size == 1 )
  {
    CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.1, 0.89999998);
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.1, 0.89999998);
    v5[0].y = v4;
    v5[0].x = v7.x;
    CShatterGlassShard::Shatter(this, v7, v5);
  }
  else
  {
    CShatterGlassShard::GetPanelVertexAverage(v5, this);
    CShatterGlassShard::Shatter(this, v6, v5);
  }
}


// CShatterGlassShard::Shatter  (line 1099, @0x0000000002242780, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, InverseTR, IsValid, LookupEntity, Vector2D, VectorTransform, operator CEntityInstance*, operator->
// calls: CBaseEntity::EntityToWorldTransform, MatrixInvert, VectorTransform, CShatterGlassShard::Shatter
// callers: CShatterGlassShard::TakeDamage, CFuncShatterglass::BreakLargestShard, CFuncShatterglass::InputHit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CShatterGlassShard::Shatter(CShatterGlassShard *const this, double a2, vec_t a3)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  matrix3x4_t *v8; // rax
  Vector vecWorldSpaceImpactPositiona; // [rsp+0h] [rbp-60h] BYREF
  unsigned int v10; // [rsp+10h] [rbp-50h] BYREF
  Vector2D vecPanelSpaceImpactPosition; // [rsp+14h] [rbp-4Ch]
  matrix3x4_t out; // [rsp+20h] [rbp-40h] BYREF

  *&vecWorldSpaceImpactPositiona.x = a2;
  m_Index = this->m_hPhysicsEntity.m_Index;
  m_pInstance = 0;
  vecWorldSpaceImpactPositiona.z = a3;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hPhysicsEntity.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = CBaseEntity::EntityToWorldTransform(m_pInstance);
  MatrixInvert(v8, &out);
  VectorTransform(&vecWorldSpaceImpactPositiona.x, &out, &v10);
  *&out.m_flMatVal[0][0] = __PAIR64__(LODWORD(vecPanelSpaceImpactPosition.x), v10);
  CShatterGlassShard::Shatter(this, LODWORD(vecPanelSpaceImpactPosition.x), &out);
}


// CShatterGlassShard::Shatter  (line 1109, @0x0000000002240f70, libserver.so)  // inlines: AddToHead, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Construct<ShatterSpoke_t>, CopyConstruct<ShatterEdgeSegment_t>, CopyConstruct<Vector2D>, DistTo, DistToSqr, Element, FastSqrt, FireOutput, Free, Get, GetBool, GetInstance, GetInt, GetStressPositionA, GetStressVelocity, GrowMemory, GrowVector, IncrementShardsCreatedRecently, InsertBefore, IsPointWithinConvexBounds, Length, LengthSqr, Lerp<Vector2D>, Line, OutputOnBroken, Purge, RemoveAll, ScaleVerts, SetHasRateLimitedShards, SetIsBroken, SetOrigin, SetStressPositionA, SetStressPositionB, SetToIdentity, ShatterEdgeSegment_t, ShatterSpoke_t, ShiftElementsRight, Sphere, V_memmove, Vector2D, Vector2DAdd, Vector2DLength, Vector2DMultiply, Vector2DSubtract, VertexColor_t, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, memmove, operator*, operator+, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CEntityHandle::operator CEntityInstance*, CShatterGlassShard::IsFrozen, CShatterGlassShard::DisableAndHidePhysics, CUniformRandomStream::RandomInt(int,int), memmove, sincos, CUniformRandomStream::RandomFloat(float,float), CUtlMemory<ShatterSpoke_t, int>::Grow, CFuncShatterglass::CreateNewShard, CShatterGlassShard::AddVertex, CShatterGlassShard::ScaleVerts, CShatterGlassShard::GenerateProceduralShatterGlassShardModel (39 total)
// callers: CShatterGlassShard::Shatter, CFuncShatterglass::GlassThink
// globals: g_nShatterGlassShardsCreatedRecentlyFrameRef, g_nShatterGlassShardsCreatedRecently, s_ShatterGlassStressTypes, g_ShatterGlassRandom, debugoverlay
void __fastcall CShatterGlassShard::Shatter(
        CShatterGlassShard *const this,
        Vector2D vecPanelSpaceImpactPosition,
        float *a3)
{
  CShatterGlassShard *v3; // rbx
  int m_nShardGenerationLimit; // eax
  CEntityInstance *v6; // rax
  CFuncShatterglass *m_pParentPanel; // rdx
  const ShatterGenerationSetting_t *v8; // rax
  int v9; // r15d
  __m128d v10; // xmm0
  int v11; // r12d
  ShatterSpoke_t *m_pMemory; // r13
  Vector2D v13; // xmm2_8
  __m128d v14; // xmm1
  Vector2D x_low; // xmm3_8
  __int64 v16; // r13
  float v17; // xmm0_4
  int v18; // r14d
  CShatterGlassShard *v19; // r14
  __int64 v20; // r13
  int v21; // r12d
  float m_flCenterChunkScale; // xmm0_4
  vec_t v23; // xmm0_4
  Vector2D v24; // xmm0_8
  vec_t v25; // xmm1_4
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  Vector2D y_low; // xmm0_8
  vec_t v29; // xmm1_4
  const ShatterGenerationSetting_t *v30; // rax
  int v31; // eax
  int v32; // edx
  __int64 v33; // r12
  int m_nAllocationCount; // edi
  __int64 v35; // r15
  Vector2D *v36; // rcx
  vec_t *v37; // rsi
  __int64 v38; // rax
  float *v39; // rax
  float v40; // xmm4_4
  int v41; // eax
  __int64 v42; // r15
  bool v43; // zf
  ShatterEdgeSegment_t *v44; // r15
  float v45; // xmm1_4
  unsigned __int64 v46; // xmm0_8
  int v47; // xmm1_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  __int64 v49; // r12
  Vector2D *v50; // rax
  __int64 v51; // rbx
  Vector2D *v52; // r14
  ShatterEdgeSegment_t *v53; // rax
  Vector2D *v54; // rax
  int v55; // r14d
  ShatterSpoke_t *v56; // rax
  Vector2D v57; // xmm0_8
  int v58; // eax
  int v59; // r15d
  __int64 v60; // r14
  unsigned int v61; // esi
  int m_nIntersectsEdgeIndex; // r12d
  int v63; // r13d
  int v64; // eax
  bool v65; // cc
  float *v66; // r12
  const ShatterGenerationSetting_t *v67; // rax
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm7_4
  float v71; // xmm4_4
  float *v72; // r12
  float v73; // xmm0_4
  float *v74; // r13
  const ShatterGenerationSetting_t *v75; // rax
  float v76; // xmm4_4
  float v77; // xmm2_4
  float v78; // xmm0_4
  __int64 m_ShatterStressType; // rax
  float m_flTipSpawnChance; // xmm1_4
  float v81; // xmm0_4
  float m_flSecondTipSpawnChance; // xmm1_4
  float v83; // xmm0_4
  float *v84; // rax
  float v85; // xmm1_4
  float m_flShardScale; // xmm0_4
  ISceneViewDebugOverlays *v87; // r14
  int v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm0_4
  vec_t v91; // xmm2_4
  float v92; // xmm2_4
  float v93; // xmm1_4
  float v94; // xmm0_4
  vec_t v95; // xmm0_4
  int m_Size; // eax
  vec_t v97; // xmm0_4
  float v98; // xmm1_4
  float v99; // xmm1_4
  vec_t v100; // xmm0_4
  CShatterGlassShard *v101; // r13
  float v102; // xmm5_4
  float v103; // xmm0_4
  float v104; // xmm5_4
  float v105; // xmm7_4
  float v106; // xmm1_4
  float m_flSecondShardScale; // xmm0_4
  CShatterGlassShard *NewShard; // r13
  float v109; // xmm1_4
  float m_flTipScale; // xmm0_4
  float v111; // xmm1_4
  float v112; // xmm1_4
  float v113; // xmm1_4
  bool bThisShardWasFrozen; // [rsp+Bh] [rbp-145h]
  float v115; // [rsp+Ch] [rbp-144h]
  float *v116; // [rsp+10h] [rbp-140h]
  float v117; // [rsp+10h] [rbp-140h]
  float sinx; // [rsp+18h] [rbp-138h]
  float v119; // [rsp+20h] [rbp-130h]
  Vector2D *v120; // [rsp+20h] [rbp-130h]
  float v121; // [rsp+20h] [rbp-130h]
  float v122; // [rsp+28h] [rbp-128h]
  CUtlVectorBase<ShatterEdgeSegment_t,CUtlMemory<ShatterEdgeSegment_t,int> > *i; // [rsp+28h] [rbp-128h]
  float v124; // [rsp+28h] [rbp-128h]
  float v125; // [rsp+28h] [rbp-128h]
  float pSubShard; // [rsp+30h] [rbp-120h]
  vec_t pSubSharda; // [rsp+30h] [rbp-120h]
  float pSubShardc; // [rsp+30h] [rbp-120h]
  CShatterGlassShard *pSubShardb; // [rsp+30h] [rbp-120h]
  float nSpoke; // [rsp+38h] [rbp-118h]
  vec_t nSpokea; // [rsp+38h] [rbp-118h]
  int nSpokeb; // [rsp+38h] [rbp-118h]
  vec_t v133; // [rsp+40h] [rbp-110h]
  float vecTipPt1; // [rsp+48h] [rbp-108h]
  vec_t vecTipPt1a; // [rsp+48h] [rbp-108h]
  int vecTipPt1b; // [rsp+48h] [rbp-108h]
  float vecTipPt1c; // [rsp+48h] [rbp-108h]
  float vecTipPt1d; // [rsp+48h] [rbp-108h]
  double cosx; // [rsp+50h] [rbp-100h] BYREF
  double v140; // [rsp+58h] [rbp-F8h] BYREF
  _BYTE v141[16]; // [rsp+60h] [rbp-F0h] BYREF
  Vector2D vecResult; // [rsp+70h] [rbp-E0h] BYREF
  Vector2D vecTipPt2; // [rsp+80h] [rbp-D0h] BYREF
  vec_t v144; // [rsp+88h] [rbp-C8h]
  CUtlVector<ShatterSpoke_t,CUtlMemory<ShatterSpoke_t,int> > vecSpokes; // [rsp+90h] [rbp-C0h] BYREF
  CUtlVector<ShatterEdgeSegment_t,CUtlMemory<ShatterEdgeSegment_t,int> > vecSegments; // [rsp+B0h] [rbp-A0h] BYREF
  CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > vecCenterHoleVertices; // [rsp+D0h] [rbp-80h] BYREF
  Vector2D vecBetweenCorners; // [rsp+F0h] [rbp-60h] BYREF
  vec_t v149; // [rsp+F8h] [rbp-58h]
  int v150; // [rsp+FCh] [rbp-54h]
  int v151; // [rsp+10Ch] [rbp-44h]
  int v152; // [rsp+11Ch] [rbp-34h]
  Vector2D v153; // 0:xmm0_8.8
  Vector2D v154; // 0:xmm0_8.8
  Vector2D v155; // 0:xmm0_8.8

  v3 = this;
  if ( this->m_bFlaggedForRemoval || CEntityHandle::operator CEntityInstance *(&this->m_hPhysicsEntity) == 0 )
    return;
  m_nShardGenerationLimit = s_ShatterGlassStressTypes[v3->m_ShatterStressType].m_nShardGenerationLimit;
  if ( m_nShardGenerationLimit > 0 && m_nShardGenerationLimit <= v3->m_nSubShardGeneration )
  {
    CShatterGlassShard::UnFreeze(v3);
    y = v3->m_vecStressVelocity.y;
    *&vecCenterHoleVertices.m_Memory.m_pMemory = v3->m_vecStressVelocity.z;
    x = v3->m_vecStressVelocity.x;
    vecSegments.m_Size = LODWORD(v3->m_vecPanelSpaceStressPositionA.x);
    y_low = LODWORD(v3->m_vecPanelSpaceStressPositionA.y);
    *&vecCenterHoleVertices.m_Size = __PAIR64__(LODWORD(y), LODWORD(x));
    *(&vecSegments.m_Size + 1) = LODWORD(y_low.x);
    vecBetweenCorners = CShatterGlassShard::LocalToWorldSpace(v3, y_low, &vecSegments.m_Size).m128i_u64[0];
    v149 = v29;
    CShatterGlassShard::ApplyVelocity(
      v3,
      *&vecBetweenCorners,
      v29,
      *&vecCenterHoleVertices.m_Size,
      *&vecCenterHoleVertices.m_Memory.m_pMemory);
    return;
  }
  if ( !v3->m_bShatterRateLimited )
  {
    CShatterGlassShard::GetPanelVertexAverage(&vecBetweenCorners, v3);
    v92 = vecBetweenCorners.y;
    v93 = ((*a3 - vecBetweenCorners.x) * 0.94999999) + vecBetweenCorners.x;
    v94 = a3[1] - vecBetweenCorners.y;
    *a3 = v93;
    vecBetweenCorners.x = v93;
    v95 = (v94 * 0.94999999) + v92;
    a3[1] = v95;
    m_Size = v3->m_vecPanelVertices.m_Size;
    vecBetweenCorners.y = v95;
    if ( (m_Size - 3) > 0x7D
      || CShatterGlassShard::IsPointWithinConvexBounds(v3, 1065353216LL, v93, &vecBetweenCorners) == 0 )
    {
      return;
    }
    if ( v3->m_bStressPositionAIsValid )
    {
      v97 = v3->m_vecPanelSpaceStressPositionA.y;
      v98 = v3->m_vecPanelSpaceStressPositionA.x;
    }
    else
    {
      v97 = a3[1];
      v98 = *a3;
    }
    v3->m_vecPanelSpaceStressPositionB.x = v98;
    v3->m_vecPanelSpaceStressPositionB.y = v97;
    v3->m_bStressPositionBIsValid = 1;
    v99 = *a3;
    v100 = a3[1];
    v3->m_bStressPositionAIsValid = 1;
    v3->m_vecPanelSpaceStressPositionA.x = v99;
    v3->m_vecPanelSpaceStressPositionA.y = v100;
  }
  if ( gpGlobals->framecount - g_nShatterGlassShardsCreatedRecentlyFrameRef <= 24 )
  {
    if ( g_nShatterGlassShardsCreatedRecently > 32 )
    {
      if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        vecCenterHoleVertices.m_Size = LODWORD(v3->m_vecPanelSpaceStressPositionA.x);
        *(&vecCenterHoleVertices.m_Size + 1) = LODWORD(v3->m_vecPanelSpaceStressPositionA.y);
        vecBetweenCorners = CShatterGlassShard::LocalToWorldSpace(
                              v3,
                              *(&vecCenterHoleVertices.m_Size + 1),
                              &vecCenterHoleVertices.m_Size).m128i_u64[0];
        v149 = v113;
        vecSegments.m_Size = -16711681;
        ISceneViewDebugOverlays::Sphere(debugoverlay, &vecBetweenCorners, 5.0, &vecSegments, 1, 1.0);
      }
      v3->m_pParentPanel->m_bHasRateLimitedShards = 1;
      v3->m_bShatterRateLimited = 1;
      return;
    }
  }
  else
  {
    g_nShatterGlassShardsCreatedRecentlyFrameRef = gpGlobals->framecount;
    g_nShatterGlassShardsCreatedRecently = 0;
  }
  if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    vecCenterHoleVertices.m_Size = LODWORD(v3->m_vecPanelSpaceStressPositionA.x);
    *(&vecCenterHoleVertices.m_Size + 1) = LODWORD(v3->m_vecPanelSpaceStressPositionA.y);
    vecBetweenCorners = CShatterGlassShard::LocalToWorldSpace(
                          v3,
                          *(&vecCenterHoleVertices.m_Size + 1),
                          &vecCenterHoleVertices.m_Size).m128i_u64[0];
    v149 = v111;
    vecSegments.m_Size = -16776961;
    ISceneViewDebugOverlays::Sphere(debugoverlay, &vecBetweenCorners, 1.0, &vecSegments, 1, 0.5);
    vecCenterHoleVertices.m_Size = LODWORD(v3->m_vecPanelSpaceStressPositionB.x);
    *(&vecCenterHoleVertices.m_Size + 1) = LODWORD(v3->m_vecPanelSpaceStressPositionB.y);
    vecBetweenCorners = CShatterGlassShard::LocalToWorldSpace(
                          v3,
                          *(&vecCenterHoleVertices.m_Size + 1),
                          &vecCenterHoleVertices.m_Size).m128i_u64[0];
    v149 = v112;
    vecSegments.m_Size = -16711681;
    ISceneViewDebugOverlays::Sphere(debugoverlay, &vecBetweenCorners, 1.0, &vecSegments, 1, 0.5);
  }
  v6 = CEntityHandle::operator CEntityInstance *(&v3->m_hEntityHittingMe);
  m_pParentPanel = v3->m_pParentPanel;
  if ( !m_pParentPanel->m_bBroken )
  {
    v149 = 0.0;
    vecBetweenCorners = 0;
    CEntityIOOutput::FireOutputInternal(&m_pParentPanel->m_OnBroken, v6, m_pParentPanel, &vecBetweenCorners, 0.0);
    if ( (BYTE2(v149) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vecBetweenCorners);
    m_pParentPanel = v3->m_pParentPanel;
  }
  m_pParentPanel->m_bBroken = 1;
  bThisShardWasFrozen = CShatterGlassShard::IsFrozen(v3);
  CShatterGlassShard::DisableAndHidePhysics(v3);
  nSpoke = v3->m_pParentPanel->m_PanelSize.x + v3->m_pParentPanel->m_PanelSize.y;
  v8 = &s_ShatterGlassStressTypes[v3->m_ShatterStressType];
  if ( CUniformRandomStream::RandomInt(&g_ShatterGlassRandom, v8->m_nNumSpokesMin, v8->m_nNumSpokesMax) <= 2 )
  {
    vecSpokes.m_Size = 0;
    v9 = 3;
    vecSpokes.m_Memory.m_pMemory = 0;
    vecSpokes.m_Memory.m_nAllocationCount = 0;
    LODWORD(v10.m128d_f64[0]) = 1074137739;
    vecSpokes.m_Memory.m_nGrowSize = 0;
    pSubShard = 2.0943935;
    goto LABEL_13;
  }
  v30 = &s_ShatterGlassStressTypes[v3->m_ShatterStressType];
  v31 = CUniformRandomStream::RandomInt(&g_ShatterGlassRandom, v30->m_nNumSpokesMin, v30->m_nNumSpokesMax);
  vecSpokes.m_Size = 0;
  v9 = v31;
  vecSpokes.m_Memory.m_pMemory = 0;
  vecSpokes.m_Memory.m_nAllocationCount = 0;
  vecSpokes.m_Memory.m_nGrowSize = 0;
  pSubShard = 6.2831802 / v31;
  *&v10.m128d_f64[0] = COERCE_UNSIGNED_INT(fminf(pSubShard, 2.0943935));
  if ( v31 > 0 )
  {
LABEL_13:
    v11 = 0;
    v122 = 0.5 * *v10.m128d_f64;
    v119 = *v10.m128d_f64 * -0.5;
    do
    {
      CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, v119, v122);
      v16 = vecSpokes.m_Size;
      v18 = vecSpokes.m_Size + 1;
      vecTipPt1 = (v11 * pSubShard) + (0.89999998 * v17);
      if ( vecSpokes.m_Size + 1 > vecSpokes.m_Memory.m_nAllocationCount )
        CUtlMemory<ShatterSpoke_t,int>::Grow(&vecSpokes.m_Memory, v18 - vecSpokes.m_Memory.m_nAllocationCount);
      vecSpokes.m_Size = v18;
      if ( v16 > 0 )
        memmove(&vecSpokes.m_Memory.m_pMemory[1], vecSpokes.m_Memory.m_pMemory, 24 * v16);
      m_pMemory = vecSpokes.m_Memory.m_pMemory;
      if ( vecSpokes.m_Memory.m_pMemory != 0 )
      {
        vecSpokes.m_Memory.m_pMemory->m_nIntersectsEdgeIndex = -1;
        m_pMemory->flLength = -1.0;
      }
      ++v11;
      sincos(vecTipPt1, &v140, &cosx);
      v10 = _mm_cvtps_pd(LODWORD(v3->m_vecPanelSpaceStressPositionA.y));
      *&v13 = nSpoke * cosx;
      v10.m128d_f64[0] = v10.m128d_f64[0] + v140 * nSpoke;
      v14 = _mm_cvtps_pd(LODWORD(v3->m_vecPanelSpaceStressPositionA.x));
      v14.m128d_f64[0] = v14.m128d_f64[0] + *&v13;
      *&x_low = _mm_movedup_pd(v10).m128d_f64[0];
      m_pMemory->m_vecOuterPos.y = x_low.x;
      m_pMemory->m_vecOuterPos.x = _mm_movedup_pd(v14).m128d_f64[0];
    }
    while ( v11 != v9 );
  }
  vecSegments.m_Size = 0;
  v32 = v3->m_vecPanelVertices.m_Size;
  vecSegments.m_Memory.m_pMemory = 0;
  vecSegments.m_Memory.m_nAllocationCount = 0;
  vecSegments.m_Memory.m_nGrowSize = 0;
  if ( v32 > 0 )
  {
    v33 = 0;
    m_nAllocationCount = 0;
    v35 = 0;
    while ( 1 )
    {
      v36 = v3->m_vecPanelVertices.m_Memory.m_pMemory;
      v37 = &v36[v33];
      v38 = 0;
      vecTipPt1a = *v37;
      if ( v32 - 1 > v33 )
        v38 = 8 * v33 + 8;
      v133 = v37[1];
      v39 = (v36 + v38);
      v40 = *v39;
      x_low = *(v39 + 1);
      v41 = v35;
      nSpokea = v40;
      pSubSharda = x_low.x;
      if ( m_nAllocationCount == v35 )
      {
        CUtlMemory<ShatterEdgeSegment_t,int>::Grow(&vecSegments.m_Memory, 1);
        v41 = vecSegments.m_Size;
      }
      v42 = v35;
      v43 = &vecSegments.m_Memory.m_pMemory[v42] == 0;
      v44 = &vecSegments.m_Memory.m_pMemory[v42];
      vecSegments.m_Size = v41 + 1;
      if ( !v43 )
      {
        v44->m_V1.x = vecTipPt1a;
        x_low = LODWORD(nSpokea);
        v44->m_V1.y = v133;
        v44->m_V2.x = nSpokea;
        v44->m_V2.y = pSubSharda;
      }
      if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        vecTipPt2.x = nSpokea;
        vecTipPt2.y = pSubSharda;
        vecBetweenCorners = CShatterGlassShard::LocalToWorldSpace(v3, *&v10.m128d_f64[0], &vecTipPt2).m128i_u64[0];
        v149 = v45;
        vecResult.x = vecTipPt1a;
        vecResult.y = v133;
        v46 = CShatterGlassShard::LocalToWorldSpace(v3, vecBetweenCorners, &vecResult).m128i_u64[0];
        LODWORD(vecCenterHoleVertices.m_Memory.m_pMemory) = v47;
        *&vecCenterHoleVertices.m_Size = v46;
        vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
        v141[0] = 0;
        v141[1] = 0;
        v141[2] = -1;
        v141[3] = -1;
        vptr_ISceneViewDebugOverlays[13](debugoverlay, &vecCenterHoleVertices, &vecBetweenCorners, v141, 1, 1.0);
        v32 = v3->m_vecPanelVertices.m_Size;
        if ( v3->m_vecPanelVertices.m_Size <= ++v33 )
          break;
      }
      else
      {
        v32 = v3->m_vecPanelVertices.m_Size;
        if ( v3->m_vecPanelVertices.m_Size <= ++v33 )
          break;
      }
      v35 = vecSegments.m_Size;
      m_nAllocationCount = vecSegments.m_Memory.m_nAllocationCount;
    }
  }
  if ( vecSpokes.m_Size <= 0 )
  {
    vecCenterHoleVertices.m_Size = 0;
    vecCenterHoleVertices.m_Memory.m_pMemory = 0;
    vecCenterHoleVertices.m_Memory.m_nAllocationCount = 0;
    vecCenterHoleVertices.m_Memory.m_nGrowSize = 0;
  }
  else
  {
    v49 = 0;
    nSpokeb = 0;
    do
    {
      if ( vecSegments.m_Size > 0 )
      {
        v50 = v3;
        v51 = 0;
        v52 = v50;
        while ( 1 )
        {
          vecBetweenCorners = v52[16];
          v53 = &vecSegments.m_Memory.m_pMemory[v51];
          vecCenterHoleVertices.m_Size = LODWORD(vecSpokes.m_Memory.m_pMemory[v49].m_vecOuterPos.x);
          *(&vecCenterHoleVertices.m_Size + 1) = LODWORD(vecSpokes.m_Memory.m_pMemory[v49].m_vecOuterPos.y);
          vecTipPt2 = v53->m_V2;
          vecResult = v53->m_V1;
          if ( CShatterGlassShard::GetLineIntersectionPoint(
                 LODWORD(vecResult.y),
                 *&v14.m128d_f64[0],
                 v13,
                 x_low,
                 &vecResult,
                 &vecTipPt2,
                 &vecCenterHoleVertices.m_Size,
                 &vecBetweenCorners,
                 &vecSpokes.m_Memory.m_pMemory[v49].m_vecIntersection) )
          {
            break;
          }
          if ( ++v51 >= vecSegments.m_Size )
          {
            v3 = v52;
            goto LABEL_63;
          }
        }
        v54 = v52;
        v55 = v51;
        v3 = v54;
        v56 = &vecSpokes.m_Memory.m_pMemory[v49];
        v56->m_nIntersectsEdgeIndex = v55;
        x_low = LODWORD(v56->m_vecIntersection.x);
        v13 = LODWORD(v56->m_vecIntersection.y);
        *&v14.m128d_f64[0] = LODWORD(v3->m_vecPanelSpaceStressPositionA.y);
        *v14.m128d_f64 = (*v14.m128d_f64 - v13.x) * (*v14.m128d_f64 - v13.x);
        pSubShardc = ((v3->m_vecPanelSpaceStressPositionA.x - x_low.x) * (v3->m_vecPanelSpaceStressPositionA.x - x_low.x))
                   + *v14.m128d_f64;
        v57 = LODWORD(pSubShardc);
        v57.x = fsqrt(pSubShardc);
        v56->flLength = v57.x;
        if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          vecTipPt2.x = x_low.x;
          vecTipPt2.y = v13.x;
          *&vecCenterHoleVertices.m_Size = CShatterGlassShard::LocalToWorldSpace(v3, v57, &vecTipPt2).m128i_u64[0];
          v87 = debugoverlay;
          LODWORD(vecCenterHoleVertices.m_Memory.m_pMemory) = v88;
          vecResult.x = -1.7147039e38;
          SetIdentityMatrix(&vecBetweenCorners);
          v151 = *(&vecCenterHoleVertices.m_Size + 1);
          v150 = vecCenterHoleVertices.m_Size;
          v152 = vecCenterHoleVertices.m_Memory.m_pMemory;
          (*(v87->_vptr_ISceneViewDebugOverlays + 18))(v87, &vecBetweenCorners, &vecResult, 1, 0.5, 0.25);
        }
      }
LABEL_63:
      ++nSpokeb;
      ++v49;
      v58 = vecSpokes.m_Size;
    }
    while ( vecSpokes.m_Size > nSpokeb );
    vecCenterHoleVertices.m_Size = 0;
    vecCenterHoleVertices.m_Memory.m_pMemory = 0;
    vecCenterHoleVertices.m_Memory.m_nAllocationCount = 0;
    vecCenterHoleVertices.m_Memory.m_nGrowSize = 0;
    if ( vecSpokes.m_Size > 0 )
    {
      v59 = 0;
      v60 = 0;
      if ( vecSpokes.m_Size - 1 <= 0 )
        goto LABEL_94;
LABEL_66:
      v61 = (v59 + 1) >> 31;
      for ( i = (v60 * 24 + 24); ; i = 0 )
      {
        m_nIntersectsEdgeIndex = vecSpokes.m_Memory.m_pMemory[v60].m_nIntersectsEdgeIndex;
        vecTipPt1b = *(&i->m_Memory.m_nAllocationCount + vecSpokes.m_Memory.m_pMemory);
        if ( m_nIntersectsEdgeIndex >= 0
          && v61 == 0
          && *(&i->m_Memory.m_nAllocationCount + vecSpokes.m_Memory.m_pMemory) >= 0
          && (vecSpokes.m_Memory.m_pMemory[v60].flLength >= 0.5
           || *(&i->m_Memory.m_nGrowSize + vecSpokes.m_Memory.m_pMemory) >= 0.5) )
        {
          pSubShardb = CFuncShatterglass::CreateNewShard(v3->m_pParentPanel, v3);
          vecBetweenCorners = v3->m_vecPanelSpaceStressPositionA;
          CShatterGlassShard::AddVertex(pSubShardb, LODWORD(vecBetweenCorners.y), &vecBetweenCorners);
          vecBetweenCorners = vecSpokes.m_Memory.m_pMemory[v60].m_vecIntersection;
          CShatterGlassShard::AddVertex(pSubShardb, LODWORD(vecBetweenCorners.y), &vecBetweenCorners);
          v63 = 0;
          if ( m_nIntersectsEdgeIndex != vecTipPt1b )
          {
            do
            {
              vecBetweenCorners = vecSegments.m_Memory.m_pMemory[m_nIntersectsEdgeIndex].m_V2;
              CShatterGlassShard::AddVertex(pSubShardb, LODWORD(vecBetweenCorners.y), &vecBetweenCorners);
              v64 = m_nIntersectsEdgeIndex + 1;
              v65 = vecSegments.m_Size - 1 <= m_nIntersectsEdgeIndex;
              m_nIntersectsEdgeIndex = 0;
              if ( !v65 )
                m_nIntersectsEdgeIndex = v64;
              ++v63;
            }
            while ( m_nIntersectsEdgeIndex != vecTipPt1b && v63 <= 31 );
          }
          vecBetweenCorners = *(&vecSpokes.m_Memory.m_pMemory->m_vecIntersection + i);
          CShatterGlassShard::AddVertex(pSubShardb, LODWORD(vecBetweenCorners.y), &vecBetweenCorners);
          v66 = pSubShardb->m_vecPanelVertices.m_Memory.m_pMemory;
          v67 = &s_ShatterGlassStressTypes[v3->m_ShatterStressType];
          CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, v67->m_flTipScaleMin, v67->m_flTipScaleMax);
          v68 = *v66;
          v69 = v66[1];
          v70 = v66[2];
          v71 = v66[3];
          v72 = pSubShardb->m_vecPanelVertices.m_Memory.m_pMemory;
          v74 = &v72[2 * pSubShardb->m_vecPanelVertices.m_Size - 2];
          v75 = &s_ShatterGlassStressTypes[v3->m_ShatterStressType];
          v124 = v68 + ((v70 - v68) * v73);
          vecTipPt1c = v69 + (v73 * (v71 - v69));
          CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, v75->m_flTipScaleMin, v75->m_flTipScaleMax);
          v76 = *v72;
          v77 = *v74;
          vecTipPt2.y = ((v74[1] - v72[1]) * v78) + v72[1];
          vecTipPt2.x = ((v77 - v76) * v78) + v76;
          vecBetweenCorners.y = ((vecTipPt2.y - vecTipPt1c) * 0.5) + vecTipPt1c;
          vecBetweenCorners.x = ((vecTipPt2.x - v124) * 0.5) + v124;
          CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::AddToTail(&vecCenterHoleVertices, &vecBetweenCorners);
          m_ShatterStressType = v3->m_ShatterStressType;
          m_flTipSpawnChance = s_ShatterGlassStressTypes[m_ShatterStressType].m_flTipSpawnChance;
          if ( m_flTipSpawnChance > 0.0 )
          {
            CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.0, m_flTipSpawnChance);
            if ( v81 < 1.0 )
            {
              NewShard = CFuncShatterglass::CreateNewShard(v3->m_pParentPanel, v3);
              vecBetweenCorners = *pSubShardb->m_vecPanelVertices.m_Memory.m_pMemory;
              CShatterGlassShard::AddVertex(NewShard, LODWORD(vecBetweenCorners.y), &vecBetweenCorners);
              vecBetweenCorners.x = v124;
              vecBetweenCorners.y = vecTipPt1c;
              CShatterGlassShard::AddVertex(NewShard, v155, &vecBetweenCorners);
              vecBetweenCorners = vecTipPt2;
              CShatterGlassShard::AddVertex(NewShard, LODWORD(vecTipPt2.y), &vecBetweenCorners);
              m_flTipScale = s_ShatterGlassStressTypes[v3->m_ShatterStressType].m_flTipScale;
              if ( m_flTipScale > 0.0 )
                CShatterGlassShard::ScaleVerts(NewShard, m_flTipScale, v109);
              if ( CShatterGlassShard::GenerateProceduralShatterGlassShardModel(NewShard) && NewShard != 0 )
                CShatterGlassShard::ApplyParentImpactVelocity(NewShard);
            }
            m_ShatterStressType = v3->m_ShatterStressType;
          }
          m_flSecondTipSpawnChance = s_ShatterGlassStressTypes[m_ShatterStressType].m_flSecondTipSpawnChance;
          if ( m_flSecondTipSpawnChance > 0.0 )
          {
            CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.0, m_flSecondTipSpawnChance);
            if ( v83 < 1.0 )
            {
              v101 = CFuncShatterglass::CreateNewShard(v3->m_pParentPanel, v3);
              v120 = pSubShardb->m_vecPanelVertices.m_Memory.m_pMemory;
              CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.2, 0.5);
              v102 = v120[1].y - vecTipPt1c;
              v121 = ((v120[1].x - v124) * v103) + v124;
              sinx = (v103 * v102) + vecTipPt1c;
              v116 = &pSubShardb->m_vecPanelVertices.m_Memory.m_pMemory[pSubShardb->m_vecPanelVertices.m_Size - 1];
              CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.2, 0.5);
              v104 = *v116;
              v105 = v116[1];
              vecBetweenCorners.x = v124;
              vecBetweenCorners.y = vecTipPt1c;
              v117 = vecTipPt2.x + ((v104 - vecTipPt2.x) * v153.x);
              v115 = vecTipPt2.y + (v153.x * (v105 - vecTipPt2.y));
              CShatterGlassShard::AddVertex(v101, v153, &vecBetweenCorners);
              vecBetweenCorners.x = v121;
              vecBetweenCorners.y = sinx;
              CShatterGlassShard::AddVertex(v101, LODWORD(sinx), &vecBetweenCorners);
              vecBetweenCorners.x = v117;
              vecBetweenCorners.y = v115;
              CShatterGlassShard::AddVertex(v101, v154, &vecBetweenCorners);
              vecBetweenCorners = vecTipPt2;
              CShatterGlassShard::AddVertex(v101, LODWORD(vecTipPt2.y), &vecBetweenCorners);
              m_flSecondShardScale = s_ShatterGlassStressTypes[v3->m_ShatterStressType].m_flSecondShardScale;
              if ( m_flSecondShardScale > 0.0 )
                CShatterGlassShard::ScaleVerts(v101, m_flSecondShardScale, v106);
              CShatterGlassShard::GenerateProceduralShatterGlassShardModel(v101);
              vecTipPt2.x = v117;
              vecTipPt2.y = v115;
              vecTipPt1c = sinx;
              v124 = v121;
            }
          }
          CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::Remove(&pSubShardb->m_vecPanelVertices, 0);
          CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::GrowVector(&pSubShardb->m_vecPanelVertices, 1);
          CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::ShiftElementsRight(&pSubShardb->m_vecPanelVertices, 0, 1);
          v84 = pSubShardb->m_vecPanelVertices.m_Memory.m_pMemory;
          if ( v84 != 0 )
          {
            *v84 = v124;
            v84[1] = vecTipPt1c;
          }
          CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::AddToTail(&pSubShardb->m_vecPanelVertices, &vecTipPt2);
          v85 = (vecTipPt1c - vecTipPt2.y) * (vecTipPt1c - vecTipPt2.y);
          if ( (((v124 - vecTipPt2.x) * (v124 - vecTipPt2.x)) + v85) > 9.0 )
          {
            CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.40000001, 0.60000002);
            v125 = v124 + ((vecTipPt2.x - v124) * v89);
            vecTipPt1d = vecTipPt1c + (v89 * (vecTipPt2.y - vecTipPt1c));
            CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.1, 0.30000001);
            v91 = ((v3->m_vecPanelSpaceStressPositionA.x - v125) * v90) + v125;
            vecBetweenCorners.y = ((v3->m_vecPanelSpaceStressPositionA.y - vecTipPt1d) * v90) + vecTipPt1d;
            vecBetweenCorners.x = v91;
            CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::AddToTail(
              &pSubShardb->m_vecPanelVertices,
              &vecBetweenCorners);
          }
          m_flShardScale = s_ShatterGlassStressTypes[v3->m_ShatterStressType].m_flShardScale;
          if ( m_flShardScale > 0.0 )
            CShatterGlassShard::ScaleVerts(pSubShardb, m_flShardScale, v85);
          if ( CShatterGlassShard::GenerateProceduralShatterGlassShardModel(pSubShardb) )
          {
            if ( bThisShardWasFrozen
              && CShatterGlassShard::IsOnFrameEdge(pSubShardb)
              && CShatterGlassShard::IsShardNearPanelSpacePosition(pSubShardb)
              && v3->m_pParentPanel->m_bGlassInFrame )
            {
              CShatterGlassShard::FreezeInPlace(pSubShardb);
              CShatterGlassShard::DentShardInwards(pSubShardb);
            }
            else
            {
              CShatterGlassShard::ApplyParentImpactVelocity(pSubShardb);
            }
          }
          v58 = vecSpokes.m_Size;
        }
        ++v59;
        ++v60;
        if ( v58 <= v59 )
          break;
        if ( v58 - 1 > v59 )
          goto LABEL_66;
LABEL_94:
        LOBYTE(v61) = 0;
      }
    }
  }
  if ( s_ShatterGlassStressTypes[v3->m_ShatterStressType].m_bCenterChunk && vecCenterHoleVertices.m_Size > 2 )
  {
    v19 = CFuncShatterglass::CreateNewShard(v3->m_pParentPanel, v3);
    if ( vecCenterHoleVertices.m_Size > 0 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        vecBetweenCorners = vecCenterHoleVertices.m_Memory.m_pMemory[v20];
        CShatterGlassShard::AddVertex(v19, LODWORD(vecBetweenCorners.y), &vecBetweenCorners);
        ++v21;
        ++v20;
      }
      while ( vecCenterHoleVertices.m_Size > v21 );
    }
    m_flCenterChunkScale = s_ShatterGlassStressTypes[v3->m_ShatterStressType].m_flCenterChunkScale;
    if ( m_flCenterChunkScale > 0.0 )
      CShatterGlassShard::ScaleVerts(v19, m_flCenterChunkScale, 0.0);
    if ( CShatterGlassShard::GenerateProceduralShatterGlassShardModel(v19) && v19 != 0 )
      CShatterGlassShard::ApplyParentImpactVelocity(v19);
  }
  v23 = v3->m_vecPanelSpaceStressPositionA.x;
  v3->m_bShattered = 1;
  vecBetweenCorners.x = v23;
  vecBetweenCorners.y = v3->m_vecPanelSpaceStressPositionA.y;
  v24 = CShatterGlassShard::LocalToWorldSpace(v3, LODWORD(vecBetweenCorners.y), &vecBetweenCorners).m128i_u64[0];
  v144 = v25;
  vecTipPt2 = v24;
  CShatterGlassShard::EmitShatterSound(v3, *&v24, v25);
  CShatterGlassShard::FlagForRemoval(v3);
  CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::~CUtlVectorBase(&vecCenterHoleVertices);
  vecSegments.m_Size = 0;
  if ( (vecSegments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<ShatterEdgeSegment_t,int>::Purge(&vecSegments.m_Memory);
    if ( (vecSegments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ShatterEdgeSegment_t,int>::Purge(&vecSegments.m_Memory);
  }
  vecSpokes.m_Size = 0;
  if ( (vecSpokes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<ShatterSpoke_t,int>::Purge(&vecSpokes.m_Memory);
    if ( (vecSpokes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ShatterSpoke_t,int>::Purge(&vecSpokes.m_Memory);
  }
}


// CShatterGlassShard::GenerateProceduralShatterGlassShardModel  (line 1444, @0x000000000223d5c0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<CEntityHandle>, AddToTail, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<Vector2D>, CopyConstruct<Vector>, CopyConstruct<float>, DistTo, Element, FastSqrt, FindKeyHash, Free, FromUntypedHandleUnchecked, Get, GetAttrArray<Vector2D>, GetBool, GetEHandle, GetEntityClass, GetEntryIndex, GetFloat, GetHalfThickness, GetInstance, GetInt, GetNormalArray, GetPanelSize, GetPositionArray, GetSerialNumber, GrowMemory, IncrementShardsCreatedRecently, Init, InitUntypedUnchecked, IsPointWithinConvexBounds, IsValidIndex, Length, Lerp<Vector2D>, Lerp<Vector>, Line, NetworkStateChanged, NormalizeInPlace, OverrideAllocator, RemapValClamped, RnCollisionAttr_t, Set, SetClassName, SetNavIgnore, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValues, SetWorldTransform, Spawn, ToQAngle, Vector, Vector2D, Vector2DAdd, Vector2DLength, Vector2DMultiply, Vector2DNormalize, Vector2DSubtract, VectorAdd, VectorLength, VectorMax, VectorMin, VectorMultiply, VectorSubtract, VertexColor_t, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, abs<float>, clamp<float, float>, fpmax, fpmin, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator*, operator*=, operator+, operator+=, operator-, operator-=, operator/=, operator=, operator=<float>, operator==, operator[], operator|, operator|=, ~CEntitySpawner, ~CMeshVertexAttribute, ~CUtlString, ~CUtlVector
// calls: CShatterGlassShard::WeldNearbyVerts, CShatterGlassShard::IsTooSmallToSpawn, CShatterGlassShard::GetPanelVertexAverage, CShatterGlassShard::IsPointWithinConvexBounds, CModelBuilder::CModelBuilder, CUtlString::Set, CUtlMemory<Vector2D, int>::Grow, CShatterGlassShard::FlagForRemoval, CUniformRandomStream::RandomFloat(float,float), CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail, CUtlMemory<Vector, int>::Grow, CShatterGlassShard::GetArea (75 total)
// callers: CShatterGlassShard::Shatter, CFuncShatterglass::Init
// strings: "normal", "texcoord", "shatter_mesh_%i.vmesh", "shatter_phys_%i.vphys", "mdlkeyvalue{\"prop_data\"{\"base\" \"Item.Medium\"}\"physgun_interactions\"{}\"fire_inter, "shatter_model_%i.vmdl" (15 total)
// globals: g_ShatterGlassRandom, debugoverlay, g_nShatterGlassShardGlobal, `guard variable for'CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs, CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs, CEntityKeyValuesModifyScope::sm_pAllocatorOverride, g_nShatterGlassShardsCreatedRecentlyFrameRef, g_nShatterGlassShardsCreatedRecently
bool __fastcall CShatterGlassShard::GenerateProceduralShatterGlassShardModel(CShatterGlassShard *const this)
{
  bool m_bCreatedModel; // bl
  float v4; // xmm1_4
  CFuncShatterglass *m_pParentPanel; // rax
  int m_Size; // esi
  __int64 v7; // r13
  int m_nAllocationCount; // edx
  __int64 v9; // rbx
  Vector2D *v10; // rax
  int v11; // eax
  Vector2D *v12; // r12
  int v13; // eax
  __int64 v14; // rdx
  Vector2D *m_pMemory; // rcx
  float *v16; // rdx
  float v17; // xmm4_4
  float m_fValue; // xmm0_4
  int v19; // r14d
  int v20; // ebx
  float v21; // xmm0_4
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r12
  Vector2D *v25; // rax
  float v26; // xmm0_4
  Vector2D *v27; // r15
  float v28; // xmm3_4
  Vector2D *v29; // r12
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm5_4
  unsigned __int64 v33; // rbx
  Vector *v34; // rax
  __int64 v35; // r12
  vec_t v36; // r15d
  int v37; // eax
  float v38; // xmm0_4
  int v39; // edx
  __int64 v40; // r12
  int v41; // ebx
  int v42; // xmm1_4
  int v43; // xmm1_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  __int64 v45; // rax
  float *v46; // rax
  CShatterGlassShard *m_pParentShard; // rdi
  Vector2D v48; // xmm0_8
  int v49; // xmm1_4
  int v50; // xmm1_4
  void (__fastcall *v51)(ISceneViewDebugOverlays *, IndexBufferHandle_t *, CPhysBodyDesc_0 *, VertexBufferHandle_t *, __int64, double); // rax
  unsigned __int64 v52; // rbx
  Vector *v53; // rax
  __int64 v54; // r12
  vec_t v55; // r15d
  int v56; // eax
  __int64 v57; // r12
  int v58; // ebx
  int v59; // r15d
  float *v60; // rax
  __m128i v61; // xmm1
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // r13d
  float v65; // xmm0_4
  __int64 v66; // r13
  int v67; // eax
  RnHull_t *v68; // rax
  __int64 v69; // rbx
  int v70; // r13d
  Vector *v71; // rax
  int v72; // r12d
  __int64 v73; // r15
  int v74; // r12d
  Vector *v75; // rax
  Vector2D *v76; // r15
  int v77; // r13d
  vec_t v78; // xmm5_4
  vec_t v79; // r15d
  int v80; // r13d
  Vector *v81; // rax
  Vector2D *v82; // r14
  int v83; // eax
  vec_t v84; // r15d
  vec_t v85; // r12d
  Vector *v86; // rax
  int v87; // r15d
  __int64 v88; // r12
  Vector2D *v89; // rax
  int v90; // r13d
  int v91; // r13d
  int v92; // r15d
  __int64 v93; // rbx
  float *v94; // rax
  __m128i v95; // xmm2
  float v96; // xmm1_4
  float v97; // xmm0_4
  float v98; // r12d
  float v99; // xmm0_4
  __int64 v100; // r12
  int v101; // eax
  int m_nVertexStrideFloats; // r14d
  float *v103; // r15
  float v104; // xmm4_4
  float v105; // xmm5_4
  float v106; // xmm6_4
  float v107; // xmm7_4
  float *v108; // rdi
  __int64 v109; // r12
  float *m_pBase; // r9
  __int64 v111; // rcx
  float v112; // xmm9_4
  int v113; // eax
  __int64 v114; // r13
  float *v115; // rdx
  __int64 v116; // rbx
  float v117; // xmm10_4
  float *v118; // rsi
  float *v119; // r10
  float v120; // xmm14_4
  float v121; // xmm14_4
  float v122; // xmm14_4
  float v123; // xmm14_4
  float v124; // xmm14_4
  float v125; // xmm1_4
  Vector *v126; // r8
  Vector *v127; // r11
  float v128; // xmm8_4
  float v129; // xmm3_4
  float v130; // xmm8_4
  float v131; // xmm14_4
  float v132; // xmm2_4
  float v133; // xmm1_4
  float v134; // xmm2_4
  float v135; // xmm15_4
  float v136; // xmm15_4
  float *v137; // rcx
  __int64 v138; // rbx
  __int64 v139; // rax
  float *v140; // r8
  float *v141; // rsi
  __int64 v142; // r12
  float *v143; // rdx
  __int64 v144; // r11
  float *v145; // r9
  Vector *v146; // r14
  Vector *v147; // r14
  float v148; // xmm0_4
  float v149; // xmm1_4
  float v150; // xmm0_4
  Vector2D *v151; // r14
  float v152; // xmm8_4
  float v153; // xmm2_4
  float v154; // xmm9_4
  __int64 v155; // rdi
  float *v156; // rdx
  int v157; // eax
  float v158; // xmm3_4
  float v159; // xmm2_4
  float v160; // xmm1_4
  float v161; // xmm0_4
  Vector2D *v162; // rcx
  float v163; // xmm10_4
  __int64 v164; // rdx
  int v165; // eax
  __int64 v166; // rcx
  uint32 v167; // edi
  int v168; // ebx
  uint32 v169; // eax
  __int64 v170; // rdx
  uint32 v171; // ecx
  CMaterialDrawDescriptor *v172; // rbx
  CFuncShatterglass *v173; // rax
  IndexBufferHandle_t__ *m_pBinding; // rax
  void (__fastcall *v175)(IndexBufferHandle_t *, IMeshSystem *, const char *, _QWORD, CModelBuilder *); // r12
  const char *v176; // rax
  CUtlScratchMemoryPool *v177; // rax
  CEntitySystem *v178; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v180; // rax
  char v181; // al
  const char *v182; // rax
  const matrix3x4_t *SpawnTransform; // rax
  CFuncShatterglass *v184; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v186; // eax
  __int16 v187; // cx
  CEntityKeyValues *v188; // rbx
  CHandle<CShatterGlassShardPhysics> *p_m_hPhysicsEntity; // rbx
  CBaseEntity *v190; // rax
  const char *v191; // rbx
  CShatterGlassShard *v192; // rax
  const char *v193; // rax
  CMeshVertexAttribute *v194; // r12
  int v195; // esi
  int v196; // r12d
  float *v197; // rdi
  float *v198; // r13
  float v199; // xmm6_4
  int m_nStride; // r15d
  int v201; // r8d
  int v202; // r10d
  float v203; // xmm7_4
  Vector *v204; // rdx
  float z; // xmm4_4
  float v206; // xmm15_4
  float v207; // xmm14_4
  Vector *v208; // r9
  float v209; // xmm12_4
  float v210; // xmm11_4
  float v211; // xmm8_4
  Vector *v212; // rax
  float v213; // xmm13_4
  int v214; // r8d
  float v215; // xmm1_4
  float v216; // xmm3_4
  float v217; // xmm0_4
  int v218; // r10d
  float v219; // xmm2_4
  float *v220; // r9
  __int64 v221; // r9
  int v222; // r10d
  float *v223; // r9
  float v224; // xmm0_4
  float *v225; // r9
  float *v226; // r9
  int v227; // r11d
  __int64 v228; // r10
  float *v229; // r9
  __int64 v230; // r9
  int v231; // r11d
  float *v232; // rbx
  __int64 v233; // rdx
  __int64 v234; // r11
  float *v235; // rbx
  float *v236; // rbx
  float *v237; // r10
  float *v238; // r9
  float *v239; // rdx
  float *v240; // r11
  __int64 v241; // r11
  __int64 v242; // r9
  CMaterialDrawDescriptor *v243; // rbx
  IndexBufferHandle_t__ *v244; // rax
  int v245; // ebx
  int v246; // r14d
  float *v247; // r13
  int v248; // r12d
  int v249; // esi
  Vector *v250; // rdx
  vec_t v251; // xmm7_4
  vec_t v252; // xmm6_4
  Vector *v253; // rdx
  Vector *v254; // rax
  float v255; // xmm13_4
  float v256; // xmm1_4
  float v257; // xmm3_4
  float v258; // xmm0_4
  float v259; // xmm4_4
  int v260; // r12d
  int v261; // edi
  __int64 v262; // r11
  float v263; // xmm0_4
  IndexBufferHandle_t v264; // rcx
  int v265; // eax
  float v266; // xmm3_4
  __int64 v267; // rdx
  int v268; // eax
  float *p_unused; // rdx
  float v270; // xmm1_4
  float v271; // xmm2_4
  __int64 v272; // rdx
  int v273; // eax
  float *v274; // rdx
  float *v275; // rdx
  float *v276; // rax
  float v277; // xmm0_4
  __int64 v278; // rdx
  float *v279; // rdx
  float *v280; // rdx
  float *v281; // rax
  __int64 v282; // rcx
  CMaterialDrawDescriptor *v283; // rbx
  IndexBufferHandle_t__ *v284; // rax
  float *v285; // rax
  float *v286; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v288; // cx
  __int64 v289; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v290; // rdx
  __int64 v291; // r12
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  int v294; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v295; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v296; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v298; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v299; // rdx
  __int64 v300; // rax
  const char *m_pAttributeName; // rsi
  int v302; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v303; // rax
  uint16 v304; // dx
  char IsPointWithinConvexBounds; // [rsp+Fh] [rbp-CD1h]
  CSceneObjectData *pSceneObject; // [rsp+18h] [rbp-CC8h]
  int nNumTotalShardIndices; // [rsp+20h] [rbp-CC0h]
  int pRenderMesh; // [rsp+28h] [rbp-CB8h]
  CRenderMesh *pRenderMesha; // [rsp+28h] [rbp-CB8h]
  int nNumInnerCapVerts; // [rsp+68h] [rbp-C78h]
  int nNumFaceIndices; // [rsp+6Ch] [rbp-C74h]
  float nNumFaceIndicesa; // [rsp+6Ch] [rbp-C74h]
  float y; // [rsp+70h] [rbp-C70h]
  float v314; // [rsp+70h] [rbp-C70h]
  float x; // [rsp+74h] [rbp-C6Ch]
  float v316; // [rsp+74h] [rbp-C6Ch]
  int nNumTotalShardVertices; // [rsp+78h] [rbp-C68h]
  int nNumTotalShardVerticesa; // [rsp+78h] [rbp-C68h]
  int i_0; // [rsp+7Ch] [rbp-C64h]
  int i_0a; // [rsp+7Ch] [rbp-C64h]
  float vPushedA; // [rsp+88h] [rbp-C58h]
  float vPushedAa; // [rsp+88h] [rbp-C58h]
  float vPushedAb; // [rsp+88h] [rbp-C58h]
  float vPushedA_8; // [rsp+90h] [rbp-C50h]
  float vPushedA_8a; // [rsp+90h] [rbp-C50h]
  int nNumEdgeQuads; // [rsp+94h] [rbp-C4Ch]
  float nNumEdgeQuadsa; // [rsp+94h] [rbp-C4Ch]
  float v328; // [rsp+98h] [rbp-C48h]
  float v329; // [rsp+98h] [rbp-C48h]
  float flIncrement; // [rsp+A0h] [rbp-C40h]
  float flIncrementa; // [rsp+A0h] [rbp-C40h]
  float *flIncrementb; // [rsp+A0h] [rbp-C40h]
  float flIncrementc; // [rsp+A0h] [rbp-C40h]
  float flIncrementd; // [rsp+A0h] [rbp-C40h]
  float vertPos2D; // [rsp+A8h] [rbp-C38h]
  vec_t vertPos2Da; // [rsp+A8h] [rbp-C38h]
  float vertPos2Db; // [rsp+A8h] [rbp-C38h]
  float vertPos2Dc; // [rsp+A8h] [rbp-C38h]
  float vertPos2Dd; // [rsp+A8h] [rbp-C38h]
  float vertPos2De; // [rsp+A8h] [rbp-C38h]
  float vertPos2Df; // [rsp+A8h] [rbp-C38h]
  int nNumFaceVertices; // [rsp+ACh] [rbp-C34h]
  int nNumFaceVerticesa; // [rsp+ACh] [rbp-C34h]
  float v344; // [rsp+B0h] [rbp-C30h]
  float v345; // [rsp+B0h] [rbp-C30h]
  vec_t v346; // [rsp+B0h] [rbp-C30h]
  vec_t v347; // [rsp+B0h] [rbp-C30h]
  vec_t v348; // [rsp+B0h] [rbp-C30h]
  vec_t v349; // [rsp+B0h] [rbp-C30h]
  float v350; // [rsp+B0h] [rbp-C30h]
  float flUV; // [rsp+B8h] [rbp-C28h]
  float flUVa; // [rsp+B8h] [rbp-C28h]
  vec_t flUVb; // [rsp+B8h] [rbp-C28h]
  vec_t flUVc; // [rsp+B8h] [rbp-C28h]
  float flUVe; // [rsp+B8h] [rbp-C28h]
  float flUVd; // [rsp+B8h] [rbp-C28h]
  float flDist; // [rsp+BCh] [rbp-C24h]
  vec_t flDista; // [rsp+BCh] [rbp-C24h]
  float flDistb; // [rsp+BCh] [rbp-C24h]
  float flDistc; // [rsp+BCh] [rbp-C24h]
  float flDistd; // [rsp+BCh] [rbp-C24h]
  float flDiste; // [rsp+BCh] [rbp-C24h]
  float flDistf; // [rsp+BCh] [rbp-C24h]
  int flDamageAmt; // [rsp+C0h] [rbp-C20h]
  float flDamageAmta; // [rsp+C0h] [rbp-C20h]
  float flDamageAmtb; // [rsp+C0h] [rbp-C20h]
  float *flDamageAmtc; // [rsp+C0h] [rbp-C20h]
  float flDamageAmtd; // [rsp+C0h] [rbp-C20h]
  uint32 v370[4]; // [rsp+D0h] [rbp-C10h] BYREF
  _BYTE v371[16]; // [rsp+E0h] [rbp-C00h] BYREF
  int v372; // [rsp+F0h] [rbp-BF0h]
  Vector2D vecAverage; // [rsp+100h] [rbp-BE0h] BYREF
  CUtlString modelName; // [rsp+110h] [rbp-BD0h] BYREF
  Vector vMinBounds; // [rsp+120h] [rbp-BC0h] BYREF
  Vector vMaxBounds; // [rsp+130h] [rbp-BB0h] BYREF
  Vector vMinBoundsLocal; // [rsp+140h] [rbp-BA0h] BYREF
  Vector vMaxBoundsLocal; // [rsp+150h] [rbp-B90h] BYREF
  VertexBufferHandle_t hVB_0; // [rsp+160h] [rbp-B80h] BYREF
  int v380; // [rsp+168h] [rbp-B78h]
  VertexBufferHandle_t hIB_0[2]; // [rsp+170h] [rbp-B70h] BYREF
  CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > vecPanelVerticesSubdiv; // [rsp+180h] [rbp-B60h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > vertexPositions; // [rsp+1A0h] [rbp-B40h] BYREF
  CUtlVector<float,CUtlMemory<float,int> > vertexDamage; // [rsp+1C0h] [rbp-B20h] BYREF
  CMesh::CAttrArray<Vector> positions; // [rsp+1E0h] [rbp-B00h] BYREF
  CMesh::CAttrArray<Vector> normals; // [rsp+200h] [rbp-AE0h] BYREF
  CMesh::CAttrArray<Vector> colors; // [rsp+220h] [rbp-AC0h] BYREF
  CMesh::CAttrArray<Vector> edgeFinPositions; // [rsp+240h] [rbp-AA0h] BYREF
  __int64 v389; // [rsp+258h] [rbp-A88h]
  __int64 v390; // [rsp+260h] [rbp-A80h]
  __int64 v391; // [rsp+268h] [rbp-A78h]
  float v392; // [rsp+270h] [rbp-A70h] BYREF
  vec_t v393; // [rsp+274h] [rbp-A6Ch]
  IndexBufferHandle_t hIB; // [rsp+310h] [rbp-9D0h] BYREF
  CEntityKeyValues *v395; // [rsp+318h] [rbp-9C8h]
  CEntityKeyValuesModifyScope v396; // [rsp+320h] [rbp-9C0h] BYREF
  CShatterGlassShardPhysics::CEntityInstanceEntityClass *ClassByDesignName; // [rsp+330h] [rbp-9B0h]
  CUtlString v398; // [rsp+338h] [rbp-9A8h] BYREF
  int v399; // [rsp+340h] [rbp-9A0h]
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // [rsp+344h] [rbp-99Ch]
  __int64 v401; // [rsp+350h] [rbp-990h]
  __int64 v402; // [rsp+358h] [rbp-988h]
  __int64 v403; // [rsp+360h] [rbp-980h]
  __int64 v404; // [rsp+368h] [rbp-978h]
  __int64 v405; // [rsp+370h] [rbp-970h]
  __int64 v406; // [rsp+378h] [rbp-968h]
  char v407; // [rsp+380h] [rbp-960h]
  CUtlScratchMemoryPool *v408; // [rsp+388h] [rbp-958h]
  __int64 v409; // [rsp+390h] [rbp-950h]
  __int64 v410; // [rsp+3A0h] [rbp-940h]
  CPhysBodyDesc_0 physBodyDesc; // [rsp+3B0h] [rbp-930h] BYREF
  CMeshVertexAttribute vertexAttributes[5]; // [rsp+460h] [rbp-880h] BYREF
  CModelBuilder modelBuilder; // [rsp+530h] [rbp-7B0h] BYREF
  CMesh mesh; // [rsp+820h] [rbp-4C0h] BYREF
  CMesh meshEdgeFins; // [rsp+9A0h] [rbp-340h] BYREF
  CMesh meshInnerCap; // [rsp+B20h] [rbp-1C0h] BYREF
  unsigned __int64 v417; // [rsp+CA8h] [rbp-38h]

  v417 = __readfsqword(0x28u);
  m_bCreatedModel = this->m_bCreatedModel;
  if ( m_bCreatedModel )
    return 0;
  CShatterGlassShard::WeldNearbyVerts(this);
  if ( CShatterGlassShard::IsTooSmallToSpawn(this)
    || (CShatterGlassShard::GetPanelVertexAverage(&modelBuilder, this), (this->m_vecPanelVertices.m_Size - 3) > 0x7D)
    || (IsPointWithinConvexBounds = CShatterGlassShard::IsPointWithinConvexBounds(this, 1065353216LL, v4, &modelBuilder)) == 0 )
  {
    CShatterGlassShard::FlagForRemoval(this);
    return m_bCreatedModel;
  }
  CModelBuilder::CModelBuilder(&modelBuilder);
  vertexAttributes[0].m_name.m_pString = 0;
  modelBuilder.m_modelInfo.m_nInherentFlags |= 0x401u;
  CUtlString::Set(&vertexAttributes[0].m_name, "position");
  vertexAttributes[0].m_nameDelta.m_pString = 0;
  CUtlString::Set(&vertexAttributes[0].m_nameDelta, "");
  vertexAttributes[0].m_nSemanticIndex = 0;
  vertexAttributes[0].m_nOffsetFloats = 0;
  vertexAttributes[0].m_nSizeFloats = 3;
  vertexAttributes[0].m_bDelta = 0;
  vertexAttributes[0].m_bNoCompression = 0;
  vertexAttributes[0].m_dmeType = DmAttributeType_t::AT_VECTOR3_ARRAY;
  vertexAttributes[1].m_name.m_pString = 0;
  CUtlString::Set(&vertexAttributes[1].m_name, "normal");
  vertexAttributes[1].m_nameDelta.m_pString = 0;
  CUtlString::Set(&vertexAttributes[1].m_nameDelta, "");
  vertexAttributes[1].m_nSemanticIndex = 0;
  vertexAttributes[1].m_nOffsetFloats = 3;
  vertexAttributes[1].m_nSizeFloats = 3;
  vertexAttributes[1].m_bDelta = 0;
  vertexAttributes[1].m_bNoCompression = 0;
  vertexAttributes[1].m_dmeType = DmAttributeType_t::AT_VECTOR3_ARRAY;
  vertexAttributes[2].m_name.m_pString = 0;
  CUtlString::Set(&vertexAttributes[2].m_name, "texcoord");
  vertexAttributes[2].m_nameDelta.m_pString = 0;
  CUtlString::Set(&vertexAttributes[2].m_nameDelta, "");
  vertexAttributes[2].m_nSemanticIndex = 0;
  vertexAttributes[2].m_nOffsetFloats = 6;
  vertexAttributes[2].m_nSizeFloats = 2;
  vertexAttributes[2].m_bDelta = 0;
  vertexAttributes[2].m_bNoCompression = 0;
  vertexAttributes[2].m_dmeType = DmAttributeType_t::AT_VECTOR2_ARRAY;
  vertexAttributes[3].m_name.m_pString = 0;
  CUtlString::Set(&vertexAttributes[3].m_name, "texcoord");
  vertexAttributes[3].m_nameDelta.m_pString = 0;
  CUtlString::Set(&vertexAttributes[3].m_nameDelta, "");
  vertexAttributes[3].m_nSemanticIndex = 1;
  vertexAttributes[3].m_nOffsetFloats = 8;
  vertexAttributes[3].m_nSizeFloats = 2;
  vertexAttributes[3].m_bDelta = 0;
  vertexAttributes[3].m_bNoCompression = 0;
  vertexAttributes[3].m_dmeType = DmAttributeType_t::AT_VECTOR2_ARRAY;
  vertexAttributes[4].m_name.m_pString = 0;
  CUtlString::Set(&vertexAttributes[4].m_name, "color");
  vertexAttributes[4].m_nameDelta.m_pString = 0;
  CUtlString::Set(&vertexAttributes[4].m_nameDelta, "");
  vertexAttributes[4].m_nSemanticIndex = 0;
  vertexAttributes[4].m_nOffsetFloats = 10;
  vertexAttributes[4].m_nSizeFloats = 3;
  vertexAttributes[4].m_bDelta = 0;
  vertexAttributes[4].m_bNoCompression = 0;
  vertexAttributes[4].m_dmeType = DmAttributeType_t::AT_VECTOR3_ARRAY;
  CShatterGlassShard::GetPanelVertexAverage(&vecAverage, this);
  m_pParentPanel = this->m_pParentPanel;
  vecPanelVerticesSubdiv.m_Size = 0;
  vecPanelVerticesSubdiv.m_Memory.m_pMemory = 0;
  m_Size = this->m_vecPanelVertices.m_Size;
  vecPanelVerticesSubdiv.m_Memory.m_nAllocationCount = 0;
  vecPanelVerticesSubdiv.m_Memory.m_nGrowSize = 0;
  x = m_pParentPanel->m_PanelSize.x;
  y = m_pParentPanel->m_PanelSize.y;
  if ( m_Size <= 0 )
  {
    nNumTotalShardIndices = 0;
    pRenderMesh = 0;
    nNumTotalShardVertices = 2;
    i_0 = 2;
    nNumInnerCapVerts = 0;
    nNumFaceIndices = 0;
    nNumFaceVerticesa = 1;
    nNumEdgeQuads = 0;
  }
  else
  {
    v7 = 0;
    m_nAllocationCount = 0;
    v9 = 0;
    flDamageAmt = 0;
    while ( 1 )
    {
      v12 = &this->m_vecPanelVertices.m_Memory.m_pMemory[v7];
      v13 = v9;
      if ( v9 == m_nAllocationCount )
      {
        CUtlMemory<Vector2D,int>::Grow(&vecPanelVerticesSubdiv.m_Memory, 1);
        v13 = vecPanelVerticesSubdiv.m_Size;
      }
      vecPanelVerticesSubdiv.m_Size = v13 + 1;
      v10 = &vecPanelVerticesSubdiv.m_Memory.m_pMemory[v9];
      if ( v10 != 0 )
      {
        v10->x = v12->x;
        v10->y = v12->y;
      }
      if ( this->m_pParentPanel->m_ShatterPanelMode == ShatterPanelMode::SHATTER_DRYWALL )
      {
        v14 = 0;
        m_pMemory = this->m_vecPanelVertices.m_Memory.m_pMemory;
        v11 = this->m_vecPanelVertices.m_Size;
        v344 = m_pMemory[v7].x;
        flUV = m_pMemory[v7].y;
        if ( this->m_vecPanelVertices.m_Size - 1 > flDamageAmt )
          v14 = v7 * 8 + 8;
        v16 = (m_pMemory + v14);
        nNumFaceVertices = *v16;
        vertPos2D = v16[1];
        v17 = fsqrt(
                ((m_pMemory[v7].x - *&nNumFaceVertices) * (m_pMemory[v7].x - *&nNumFaceVertices))
              + ((m_pMemory[v7].y - vertPos2D) * (m_pMemory[v7].y - vertPos2D)));
        m_fValue = shatterglass_subdiv_size.m_pParent->m_Value.m_fValue;
        flDist = v17;
        if ( v17 > m_fValue )
        {
          v19 = (v17 / m_fValue);
          flIncrement = v17 / v19;
          if ( v19 > 1 )
          {
            v20 = 1;
            do
            {
              while ( 1 )
              {
                CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.0, 1.0);
                if ( v21 >= 0.2 )
                  break;
                if ( ++v20 == v19 )
                  goto LABEL_28;
              }
              v22 = vecPanelVerticesSubdiv.m_Size;
              v23 = vecPanelVerticesSubdiv.m_Size;
              if ( vecPanelVerticesSubdiv.m_Size == vecPanelVerticesSubdiv.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<Vector2D,int>::Grow(&vecPanelVerticesSubdiv.m_Memory, 1);
                v23 = vecPanelVerticesSubdiv.m_Size;
              }
              v24 = v22;
              vecPanelVerticesSubdiv.m_Size = v23 + 1;
              v25 = &vecPanelVerticesSubdiv.m_Memory.m_pMemory[v24];
              v26 = (v20 * flIncrement) / flDist;
              v25->x = ((*&nNumFaceVertices - v344) * v26) + v344;
              v25->y = ((vertPos2D - flUV) * v26) + flUV;
              v27 = &vecPanelVerticesSubdiv.m_Memory.m_pMemory[v24];
              CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 0.89999998, 1.1);
              ++v20;
              v28 = vecAverage.x;
              v29 = &vecPanelVerticesSubdiv.m_Memory.m_pMemory[v24];
              v31 = v27->x - vecAverage.x;
              v29->y = ((v27->y - vecAverage.y) * v30) + vecAverage.y;
              v29->x = (v31 * v30) + v28;
            }
            while ( v20 != v19 );
LABEL_28:
            v11 = this->m_vecPanelVertices.m_Size;
          }
        }
      }
      else
      {
        v11 = this->m_vecPanelVertices.m_Size;
      }
      ++flDamageAmt;
      ++v7;
      if ( flDamageAmt >= v11 )
        break;
      v9 = vecPanelVerticesSubdiv.m_Size;
      m_nAllocationCount = vecPanelVerticesSubdiv.m_Memory.m_nAllocationCount;
    }
    nNumEdgeQuads = vecPanelVerticesSubdiv.m_Size;
    nNumFaceVerticesa = vecPanelVerticesSubdiv.m_Size + 1;
    i_0 = 2 * (vecPanelVerticesSubdiv.m_Size + 1);
    nNumFaceIndices = 3 * vecPanelVerticesSubdiv.m_Size;
    nNumTotalShardVertices = 4 * vecPanelVerticesSubdiv.m_Size + i_0;
    nNumInnerCapVerts = 4 * vecPanelVerticesSubdiv.m_Size;
    nNumTotalShardIndices = 12 * vecPanelVerticesSubdiv.m_Size;
    pRenderMesh = 6 * vecPanelVerticesSubdiv.m_Size;
    m_pParentPanel = this->m_pParentPanel;
  }
  vertexPositions.m_Size = 0;
  v32 = 0.5 * m_pParentPanel->m_flGlassThickness;
  vertexPositions.m_Memory.m_pMemory = 0;
  physBodyDesc.m_flMass = vecAverage.x;
  vertexPositions.m_Memory.m_nAllocationCount = 0;
  vertexPositions.m_Memory.m_nGrowSize = 0;
  flDamageAmta = v32;
  *(&physBodyDesc.m_flMass + 1) = LODWORD(vecAverage.y);
  *&physBodyDesc.m_pBoneName = v32;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(&vertexPositions, &physBodyDesc);
  if ( nNumEdgeQuads > 0 )
  {
    v33 = 0;
    do
    {
      v35 = vertexPositions.m_Size;
      v36 = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v33 / 8].x;
      v37 = vertexPositions.m_Size;
      flDista = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v33 / 8].y;
      if ( vertexPositions.m_Size == vertexPositions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&vertexPositions.m_Memory, 1);
        v37 = vertexPositions.m_Size;
      }
      vertexPositions.m_Size = v37 + 1;
      v34 = &vertexPositions.m_Memory.m_pMemory[v35];
      if ( v34 != 0 )
      {
        v34->x = v36;
        v34->y = flDista;
        v34->z = flDamageAmta;
      }
      v33 += 8LL;
    }
    while ( v33 != 8LL * (nNumEdgeQuads - 1) + 8 );
  }
  if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v328 = 0.5;
    v38 = (CShatterGlassShard::GetArea(this) - 1.0) / 3999.0;
    if ( v38 >= 0.0 )
    {
      v328 = 5.0;
      if ( v38 <= 1.0 )
        v328 = (v38 * 4.5) + 0.5;
    }
    v39 = vecPanelVerticesSubdiv.m_Size;
    if ( vecPanelVerticesSubdiv.m_Size > 0 )
    {
      v40 = 0;
      v41 = 0;
      do
      {
        v45 = 0;
        if ( v39 - 1 > v41 )
          v45 = v40 * 8 + 8;
        v46 = (vecPanelVerticesSubdiv.m_Memory.m_pMemory + v45);
        v48 = *(v46 + 1);
        m_pParentShard = this->m_pParentShard;
        flDistb = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v40].x
                + (0.050000001 * (vecAverage.x - vecPanelVerticesSubdiv.m_Memory.m_pMemory[v40].x));
        v345 = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v40].y
             + (0.050000001 * (vecAverage.y - vecPanelVerticesSubdiv.m_Memory.m_pMemory[v40].y));
        flUVa = *v46 + (0.050000001 * (vecAverage.x - *v46));
        v48.x = v48.x + (0.050000001 * (vecAverage.y - v48.x));
        vertPos2Da = v48.x;
        if ( m_pParentShard != 0 && CShatterGlassShard::IsFrozen(m_pParentShard) )
        {
          v393 = vertPos2Da;
          v392 = flUVa;
          *&physBodyDesc.m_flMass = CShatterGlassShard::LocalToWorldSpace(this, v48, &v392).m128i_u64[0];
          LODWORD(physBodyDesc.m_pBoneName) = v42;
          edgeFinPositions.m_pBase = __PAIR64__(LODWORD(v345), LODWORD(flDistb));
          hIB = CShatterGlassShard::LocalToWorldSpace(this, *&physBodyDesc.m_flMass, &edgeFinPositions).m128i_u64[0];
          LODWORD(v395) = v43;
          vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
          v371[0] = 0;
          v371[1] = -1;
          v371[2] = -1;
          v371[3] = -1;
          vptr_ISceneViewDebugOverlays[13](debugoverlay, &hIB, &physBodyDesc, v371, 1, v328);
        }
        else
        {
          v392 = flUVa;
          v393 = vertPos2Da;
          *&physBodyDesc.m_flMass = CShatterGlassShard::LocalToWorldSpace(this, v48, &v392).m128i_u64[0];
          LODWORD(physBodyDesc.m_pBoneName) = v49;
          edgeFinPositions.m_pBase = __PAIR64__(LODWORD(v345), LODWORD(flDistb));
          hIB = CShatterGlassShard::LocalToWorldSpace(this, *&physBodyDesc.m_flMass, &edgeFinPositions).m128i_u64[0];
          LODWORD(v395) = v50;
          v51 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
          LODWORD(hVB_0) = -65281;
          v51(debugoverlay, &hIB, &physBodyDesc, &hVB_0, 1, v328);
        }
        v39 = vecPanelVerticesSubdiv.m_Size;
        ++v41;
        ++v40;
      }
      while ( vecPanelVerticesSubdiv.m_Size > v41 );
    }
  }
  physBodyDesc.m_flMass = vecAverage.x;
  flDistc = -flDamageAmta;
  *(&physBodyDesc.m_flMass + 1) = LODWORD(vecAverage.y);
  *&physBodyDesc.m_pBoneName = -flDamageAmta;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(&vertexPositions, &physBodyDesc);
  if ( nNumEdgeQuads > 0 )
  {
    v52 = 0;
    do
    {
      v54 = vertexPositions.m_Size;
      v55 = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v52 / 8].x;
      v56 = vertexPositions.m_Size;
      v346 = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v52 / 8].y;
      if ( vertexPositions.m_Size == vertexPositions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&vertexPositions.m_Memory, 1);
        v56 = vertexPositions.m_Size;
      }
      vertexPositions.m_Size = v56 + 1;
      v53 = &vertexPositions.m_Memory.m_pMemory[v54];
      if ( v53 != 0 )
      {
        v53->x = v55;
        v53->y = v346;
        v53->z = flDistc;
      }
      v52 += 8LL;
    }
    while ( v52 != 8LL * (nNumEdgeQuads - 1) + 8 );
  }
  vertexDamage.m_Size = 0;
  vertexDamage.m_Memory.m_pMemory = 0;
  vertexDamage.m_Memory.m_nAllocationCount = 0;
  vertexDamage.m_Memory.m_nGrowSize = 0;
  CUniformRandomStream::CUniformRandomStream(&v392);
  flIncrementa = CShatterGlassShard::GetLongestAcross(this);
  if ( flIncrementa > 5.0 && vertexPositions.m_Size > 0 )
  {
    v57 = 0;
    v58 = 0;
    *&v59 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    do
    {
      v66 = vertexDamage.m_Size;
      vPushedAa = vertexPositions.m_Memory.m_pMemory[v57].x;
      vPushedA_8 = vertexPositions.m_Memory.m_pMemory[v57].y;
      v67 = vertexDamage.m_Size;
      vertPos2Db = fmaxf(
                     0.0,
                     1.0
                   - (fsqrt(
                        ((this->m_vecPanelSpaceStressPositionA.x - vPushedAa)
                       * (this->m_vecPanelSpaceStressPositionA.x - vPushedAa))
                      + ((this->m_vecPanelSpaceStressPositionA.y - vPushedA_8)
                       * (this->m_vecPanelSpaceStressPositionA.y - vPushedA_8)))
                    / flIncrementa));
      if ( vertexDamage.m_Size == vertexDamage.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<float,int>::Grow(&vertexDamage.m_Memory, 1);
        v67 = vertexDamage.m_Size;
      }
      vertexDamage.m_Size = v67 + 1;
      v60 = &vertexDamage.m_Memory.m_pMemory[v66];
      if ( v60 != 0 )
        *v60 = vertPos2Db;
      if ( v58 != nNumFaceVerticesa && v58 != 0 && shatterglass_distort.m_pParent->m_Value.m_nValue != 0 )
      {
        v61 = LODWORD(vPushedAa);
        *v61.m128i_i32 = vPushedAa - vecAverage.x;
        v62 = vPushedA_8 - vecAverage.y;
        v63 = fsqrt((*v61.m128i_i32 * *v61.m128i_i32) + (v62 * v62));
        if ( v63 == 0.0 )
        {
          vPushedA = *&v59;
          v64 = *&v59;
        }
        else
        {
          *v61.m128i_i32 = *v61.m128i_i32 * (1.0 / v63);
          v64 = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
          vPushedA = v62 * (1.0 / v63);
        }
        CUniformRandomStream::SetSeed(
          &v392,
          ((vertexPositions.m_Memory.m_pMemory[v57].x + vertexPositions.m_Memory.m_pMemory[v57].y)
         + vertexPositions.m_Memory.m_pMemory[v57].z));
        CUniformRandomStream::RandomFloat(&v392, 0.0, 0.5);
        vertexPositions.m_Memory.m_pMemory[v57].x = ((v64 * v65) * vertPos2Db)
                                                  + vertexPositions.m_Memory.m_pMemory[v57].x;
        vertexPositions.m_Memory.m_pMemory[v57].y = ((v65 * vPushedA) * vertPos2Db)
                                                  + vertexPositions.m_Memory.m_pMemory[v57].y;
      }
      ++v58;
      ++v57;
    }
    while ( vertexPositions.m_Size > v58 );
  }
  ++g_nShatterGlassShardGlobal;
  CPhysBodyDesc::CPhysBodyDesc(&physBodyDesc, 1);
  hIB = 0;
  v395 = 0;
  v396.m_pKeyValues = 0;
  v396.m_pPrevAllocator = 0x700000000000000LL;
  v68 = (*(g_pVPhysics2->_vptr_IAppSystem + 31))(
          g_pVPhysics2,
          vertexPositions.m_Size,
          vertexPositions.m_Memory.m_pMemory,
          0,
          0,
          0);
  CPhysBodyDesc::AddHull(&physBodyDesc, v68, &hIB);
  if ( nNumEdgeQuads > 0 )
  {
    v69 = 0;
    do
    {
      if ( nNumEdgeQuads - 1 <= v69 )
        v87 = 0;
      else
        v87 = v69 + 1;
      v88 = vertexPositions.m_Size;
      v89 = &vecPanelVerticesSubdiv.m_Memory.m_pMemory[v69];
      v90 = vertexPositions.m_Size;
      v349 = v89->y;
      flUVc = v89->x;
      if ( vertexPositions.m_Size == vertexPositions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&vertexPositions.m_Memory, 1);
        v90 = vertexPositions.m_Size;
      }
      v70 = v90 + 1;
      vertexPositions.m_Size = v70;
      v71 = &vertexPositions.m_Memory.m_pMemory[v88];
      if ( v71 != 0 )
      {
        v71->x = flUVc;
        v70 = vertexPositions.m_Size;
        v71->y = v349;
        v71->z = flDistc;
      }
      v72 = v70;
      v73 = v87;
      v347 = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v73].y;
      flUVb = vecPanelVerticesSubdiv.m_Memory.m_pMemory[v73].x;
      if ( vertexPositions.m_Memory.m_nAllocationCount == v70 )
      {
        CUtlMemory<Vector,int>::Grow(&vertexPositions.m_Memory, 1);
        v72 = vertexPositions.m_Size;
      }
      v74 = v72 + 1;
      vertexPositions.m_Size = v74;
      v75 = &vertexPositions.m_Memory.m_pMemory[v70];
      if ( v75 != 0 )
      {
        v75->x = flUVb;
        v74 = vertexPositions.m_Size;
        v75->y = v347;
        v75->z = flDistc;
      }
      v76 = &vecPanelVerticesSubdiv.m_Memory.m_pMemory[v73];
      v77 = v74;
      v78 = v76->y;
      v79 = v76->x;
      v348 = v78;
      if ( vertexPositions.m_Memory.m_nAllocationCount == v74 )
      {
        CUtlMemory<Vector,int>::Grow(&vertexPositions.m_Memory, 1);
        v77 = vertexPositions.m_Size;
      }
      v80 = v77 + 1;
      vertexPositions.m_Size = v80;
      v81 = &vertexPositions.m_Memory.m_pMemory[v74];
      if ( v81 != 0 )
      {
        v81->x = v79;
        v80 = vertexPositions.m_Size;
        v81->y = v348;
        v81->z = flDamageAmta;
      }
      v82 = &vecPanelVerticesSubdiv.m_Memory.m_pMemory[v69];
      v83 = v80;
      v84 = v82->y;
      v85 = v82->x;
      if ( vertexPositions.m_Memory.m_nAllocationCount == v80 )
      {
        CUtlMemory<Vector,int>::Grow(&vertexPositions.m_Memory, 1);
        v83 = vertexPositions.m_Size;
      }
      vertexPositions.m_Size = v83 + 1;
      v86 = &vertexPositions.m_Memory.m_pMemory[v80];
      if ( v86 != 0 )
      {
        v86->x = v85;
        v86->y = v84;
        v86->z = flDamageAmta;
      }
      ++v69;
    }
    while ( nNumEdgeQuads > v69 );
  }
  if ( flIncrementa > 5.0 )
  {
    v91 = i_0;
    if ( vertexPositions.m_Size > i_0 )
    {
      *&v92 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
      v93 = i_0;
      do
      {
        v100 = vertexDamage.m_Size;
        flDiste = vertexPositions.m_Memory.m_pMemory[v93].x;
        vertPos2Dc = vertexPositions.m_Memory.m_pMemory[v93].y;
        v101 = vertexDamage.m_Size;
        flDamageAmtb = fmaxf(
                         0.0,
                         1.0
                       - (fsqrt(
                            ((this->m_vecPanelSpaceStressPositionA.x - flDiste)
                           * (this->m_vecPanelSpaceStressPositionA.x - flDiste))
                          + ((this->m_vecPanelSpaceStressPositionA.y - vertPos2Dc)
                           * (this->m_vecPanelSpaceStressPositionA.y - vertPos2Dc)))
                        / flIncrementa));
        if ( vertexDamage.m_Size == vertexDamage.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<float,int>::Grow(&vertexDamage.m_Memory, 1);
          v101 = vertexDamage.m_Size;
        }
        vertexDamage.m_Size = v101 + 1;
        v94 = &vertexDamage.m_Memory.m_pMemory[v100];
        if ( v94 != 0 )
          *v94 = flDamageAmtb;
        if ( shatterglass_distort.m_pParent->m_Value.m_nValue != 0 )
        {
          v95 = LODWORD(flDiste);
          *v95.m128i_i32 = flDiste - vecAverage.x;
          v96 = vertPos2Dc - vecAverage.y;
          v97 = fsqrt((*v95.m128i_i32 * *v95.m128i_i32) + (v96 * v96));
          if ( v97 == 0.0 )
          {
            flDistd = *&v92;
            v98 = *&v92;
          }
          else
          {
            *v95.m128i_i32 = *v95.m128i_i32 * (1.0 / v97);
            v98 = COERCE_FLOAT(_mm_cvtsi128_si32(v95));
            flDistd = v96 * (1.0 / v97);
          }
          CUniformRandomStream::SetSeed(
            &v392,
            ((vertexPositions.m_Memory.m_pMemory[v93].x + vertexPositions.m_Memory.m_pMemory[v93].y)
           + vertexPositions.m_Memory.m_pMemory[v93].z));
          CUniformRandomStream::RandomFloat(&v392, 0.0, 0.5);
          vertexPositions.m_Memory.m_pMemory[v93].x = ((v98 * v99) * flDamageAmtb)
                                                    + vertexPositions.m_Memory.m_pMemory[v93].x;
          vertexPositions.m_Memory.m_pMemory[v93].y = ((v99 * flDistd) * flDamageAmtb)
                                                    + vertexPositions.m_Memory.m_pMemory[v93].y;
        }
        ++v91;
        ++v93;
      }
      while ( vertexPositions.m_Size > v91 );
    }
  }
  CMesh::CMesh(&mesh);
  CMesh::AllocateMesh(&mesh, nNumTotalShardVertices, nNumTotalShardIndices, 13, vertexAttributes, 5);
  CMesh::FindAttrArray<Vector>(&positions, &mesh, "position");
  CMesh::FindAttrArray<Vector>(&normals, &mesh, "normal");
  m_nVertexStrideFloats = mesh.m_nVertexStrideFloats;
  v103 = &mesh.m_pVerts[mesh.m_pAttributes[2].m_nOffsetFloats];
  flDamageAmtc = &mesh.m_pVerts[mesh.m_pAttributes[3].m_nOffsetFloats];
  CMesh::FindAttrArray<Vector>(&colors, &mesh, "color");
  if ( `guard variable for'CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs == 0
    && __cxa_guard_acquire(&`guard variable for'CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs) != 0 )
  {
    CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs[0].x = 0.0;
    dword_4B1C544 = 0;
    dword_4B1C548 = 0;
    dword_4B1C54C = 1008981770;
    dword_4B1C550 = 1008981770;
    dword_4B1C554 = 1008981770;
    dword_4B1C558 = 1008981770;
    dword_4B1C55C = 0;
    __cxa_guard_release(&`guard variable for'CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs);
  }
  if ( this->m_pParentShard != 0 && this->m_pParentPanel->m_ShatterPanelMode != ShatterPanelMode::SHATTER_DRYWALL )
  {
    v104 = this->m_vecPanelSpaceStressPositionA.y / y;
    v105 = this->m_vecPanelSpaceStressPositionA.x / x;
    v106 = this->m_vecPanelSpaceStressPositionB.y / y;
    v107 = this->m_vecPanelSpaceStressPositionB.x / x;
    if ( nNumTotalShardVertices <= 0 )
    {
      v152 = 1.75;
      goto LABEL_242;
    }
    v108 = v103;
    v109 = 4LL * m_nVertexStrideFloats;
    m_pBase = colors.m_pBase;
    v111 = 0;
    v112 = 0.000099999997;
    v113 = 0;
    v114 = 4LL * positions.m_nStride;
    v115 = positions.m_pBase;
    v116 = 4LL * colors.m_nStride;
    v117 = 0.000099999997;
    v118 = flDamageAmtc;
    v119 = colors.m_pBase;
    while ( 1 )
    {
      v126 = &vertexPositions.m_Memory.m_pMemory[v111];
      *v115 = v126->x;
      v115[1] = v126->y;
      v115[2] = v126->z;
      v127 = &vertexPositions.m_Memory.m_pMemory[v111];
      v128 = v127->x / x;
      v129 = v128 - v107;
      v130 = v128 - v105;
      v131 = v130;
      v132 = v127->y / y;
      v133 = v132 - v106;
      v134 = v132 - v104;
      if ( v130 < 0.0 )
        v131 = -v130;
      if ( v134 < 0.0 )
      {
        v135 = -v134;
        if ( v131 <= -v134 )
          goto LABEL_140;
        v120 = v130;
        if ( v130 >= 0.0 )
          goto LABEL_113;
      }
      else
      {
        if ( v131 <= v134 )
        {
          v120 = v134;
          if ( v134 < 0.0 )
          {
            v135 = -v134;
LABEL_140:
            v120 = v135;
          }
LABEL_113:
          if ( v117 > v120 )
            goto LABEL_119;
          v121 = v130;
          if ( v130 < 0.0 )
            v121 = -v130;
          goto LABEL_116;
        }
        v120 = v130;
        if ( v130 >= 0.0 )
          goto LABEL_113;
      }
      v121 = -v120;
      if ( v117 > v121 )
        goto LABEL_119;
LABEL_116:
      if ( v134 >= 0.0 )
      {
        if ( v121 <= v134 )
        {
          v117 = v134;
          if ( v134 >= 0.0 )
            goto LABEL_119;
        }
        else
        {
LABEL_118:
          v117 = v130;
          if ( v130 >= 0.0 )
            goto LABEL_119;
        }
        v117 = -v117;
        goto LABEL_119;
      }
      v117 = -v134;
      if ( v121 > -v134 )
        goto LABEL_118;
LABEL_119:
      v122 = v129;
      if ( v129 < 0.0 )
        v122 = -v129;
      if ( v133 < 0.0 )
      {
        v136 = -v133;
        if ( v122 <= -v133 )
          goto LABEL_145;
        v123 = v129;
        if ( v129 >= 0.0 )
          goto LABEL_124;
      }
      else
      {
        if ( v122 <= v133 )
        {
          v123 = v133;
          if ( v133 < 0.0 )
          {
            v136 = -v133;
LABEL_145:
            v123 = v136;
          }
LABEL_124:
          if ( v112 > v123 )
            goto LABEL_130;
          v124 = v129;
          if ( v129 < 0.0 )
            v124 = -v129;
          goto LABEL_127;
        }
        v123 = v129;
        if ( v129 >= 0.0 )
          goto LABEL_124;
      }
      v124 = -v123;
      if ( v112 > v124 )
        goto LABEL_130;
LABEL_127:
      if ( v133 >= 0.0 )
      {
        if ( v124 <= v133 )
        {
          v112 = v133;
          if ( v133 >= 0.0 )
            goto LABEL_130;
        }
        else
        {
LABEL_129:
          v112 = v129;
          if ( v129 >= 0.0 )
            goto LABEL_130;
        }
        v112 = -v112;
        goto LABEL_130;
      }
      v112 = -v133;
      if ( v124 > -v133 )
        goto LABEL_129;
LABEL_130:
      *v108 = v130 + 0.5;
      v108[1] = v134 + 0.5;
      *v118 = v129 + 0.5;
      v118[1] = v133 + 0.5;
      if ( vertexDamage.m_Size > v113 )
      {
        v125 = vertexDamage.m_Memory.m_pMemory[v111];
        if ( v113 >= i_0 )
        {
LABEL_142:
          *v119 = 1.0;
          v119[1] = v125;
          v119[2] = 0.0;
          goto LABEL_133;
        }
      }
      else
      {
        v125 = 0.0;
        if ( v113 >= i_0 )
          goto LABEL_142;
      }
      *m_pBase = 0.0;
      m_pBase[1] = v125;
      m_pBase[2] = 0.0;
LABEL_133:
      ++v113;
      v115 = (v115 + v114);
      m_pBase = (m_pBase + v116);
      v119 = (v119 + v116);
      ++v111;
      v108 = (v108 + v109);
      v118 = (v118 + v109);
      if ( v113 == nNumTotalShardVertices )
      {
        v152 = 0.5 / v117;
        v153 = 0.5 / v112;
        v154 = 0.5 / v112;
        if ( (0.5 / v117) >= 1.75 )
          v152 = 1.75;
        if ( v153 < 1.75 )
        {
LABEL_171:
          if ( nNumTotalShardVertices > 0 )
          {
            v155 = 4LL * m_nVertexStrideFloats;
            v156 = flDamageAmtc;
            v157 = 0;
            do
            {
              v158 = ((((*v103 - 0.5) + v105) * v152) + (-v105 * v152)) + 0.5;
              v159 = ((((v103[1] - 0.5) + v104) * v152) + (-v104 * v152)) + 0.5;
              v160 = ((((*v156 - 0.5) + v107) * v154) + (-v107 * v154)) + 0.5;
              v161 = ((((v156[1] - 0.5) + v106) * v154) + (-v106 * v154)) + 0.5;
              if ( v157 >= i_0 )
              {
                v162 = &CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs[v157 % 4];
                v163 = v162->y;
                v158 = v158 + v162->x;
                v159 = v159 + v163;
                v160 = v160 + v162->x;
                v161 = v161 + v163;
              }
              ++v157;
              *v103 = v158;
              v103[1] = v159;
              v103 = (v103 + v155);
              *v156 = v160;
              v156[1] = v161;
              v156 = (v156 + v155);
            }
            while ( v157 != nNumTotalShardVertices );
          }
          goto LABEL_176;
        }
LABEL_242:
        v154 = 1.75;
        goto LABEL_171;
      }
    }
  }
  if ( nNumTotalShardVertices > 0 )
  {
    v137 = v103;
    v138 = 4LL * m_nVertexStrideFloats;
    v139 = 0;
    v140 = colors.m_pBase;
    v141 = positions.m_pBase;
    v142 = 4LL * positions.m_nStride;
    v143 = flDamageAmtc;
    v144 = 4LL * colors.m_nStride;
    v145 = colors.m_pBase;
    do
    {
      v146 = &vertexPositions.m_Memory.m_pMemory[v139];
      *v141 = v146->x;
      v141[1] = v146->y;
      v141[2] = v146->z;
      v147 = &vertexPositions.m_Memory.m_pMemory[v139];
      v148 = v147->y;
      v149 = (v147->x / x) + 0.5;
      *v137 = v149;
      v150 = (v148 / y) + 0.5;
      v137[1] = v150;
      *v143 = v149;
      v143[1] = v150;
      if ( v139 < i_0 )
      {
        *v140 = 0.0;
        v140[1] = 0.0;
        v140[2] = 0.0;
      }
      else
      {
        v151 = &CShatterGlassShard::GenerateProceduralShatterGlassShardModel(void)::vecEdgeUVs[v139 & 3];
        *v137 = *v137 + v151->x;
        v137[1] = v137[1] + v151->y;
        *v143 = *v143 + v151->x;
        v143[1] = v143[1] + v151->y;
        *v145 = 1.0;
        v145[1] = 0.0;
        v145[2] = 0.0;
      }
      ++v139;
      v141 = (v141 + v142);
      v137 = (v137 + v138);
      v143 = (v143 + v138);
      v140 = (v140 + v144);
      v145 = (v145 + v144);
    }
    while ( nNumTotalShardVertices > v139 );
  }
LABEL_176:
  if ( nNumEdgeQuads > 0 )
  {
    v164 = 0;
    v165 = 2;
    v166 = nNumFaceIndices;
    do
    {
      v167 = 1;
      if ( v165 < nNumFaceVerticesa )
        v167 = v165;
      mesh.m_pIndices[v164] = v167;
      mesh.m_pIndices[v164 + 1] = v165 - 1;
      v168 = nNumFaceVerticesa - 1 + v165++;
      mesh.m_pIndices[v164 + 2] = 0;
      v164 += 3;
      mesh.m_pIndices[v166] = v168;
      mesh.m_pIndices[v166 + 1] = nNumFaceVerticesa + v167;
      mesh.m_pIndices[v166 + 2] = nNumFaceVerticesa;
      v166 += 3;
    }
    while ( v165 != nNumEdgeQuads + 2 );
    v169 = i_0 + 2;
    v170 = pRenderMesh;
    do
    {
      mesh.m_pIndices[v170] = v169;
      mesh.m_pIndices[v170 + 1] = v169 - 1;
      v171 = v169 - 2;
      mesh.m_pIndices[v170 + 2] = v169 - 2;
      mesh.m_pIndices[v170 + 3] = v169 + 1;
      mesh.m_pIndices[v170 + 4] = v169;
      v169 += 4;
      mesh.m_pIndices[v170 + 5] = v171;
      v170 += 6;
    }
    while ( v169 != i_0 + 2 + 4 * nNumEdgeQuads );
  }
  pRenderMesha = operator new(0x198u);
  CRenderMesh::CRenderMesh(pRenderMesha);
  pSceneObject = CRenderMesh::AddSceneObject(pRenderMesha);
  CMesh::CalculateSmoothNormals(&mesh);
  vMinBounds.x = 3.4028235e38;
  vMinBounds.y = 3.4028235e38;
  vMinBounds.z = 3.4028235e38;
  vMaxBounds.x = -3.4028235e38;
  vMaxBounds.y = -3.4028235e38;
  vMaxBounds.z = -3.4028235e38;
  CMesh::CalculateBounds(&mesh, &vMinBoundsLocal, &vMaxBoundsLocal, 0, 0);
  vMinBounds.x = fminf(vMinBoundsLocal.x, vMinBounds.x);
  vMinBounds.y = fminf(vMinBoundsLocal.y, vMinBounds.y);
  vMinBounds.z = fminf(vMinBoundsLocal.z, vMinBounds.z);
  vMaxBounds.x = fmaxf(vMaxBoundsLocal.x, vMaxBounds.x);
  vMaxBounds.y = fmaxf(vMaxBoundsLocal.y, vMaxBounds.y);
  vMaxBounds.z = fmaxf(vMaxBoundsLocal.z, vMaxBounds.z);
  v172 = CSceneObjectData::AddDrawCall(pSceneObject);
  CMaterialDrawDescriptor::Init(
    v172,
    RenderPrimitiveType_t::RENDER_PRIM_TRIANGLES,
    0,
    mesh.m_nVertexCount,
    0,
    mesh.m_nIndexCount);
  edgeFinPositions.m_pBase = 0;
  hIB = 0;
  CMesh::CreateSimpleUnpackedVBAndIBForMesh(&mesh, &edgeFinPositions, &hIB);
  CMaterialDrawDescriptor::AddVertexBuffer(v172, edgeFinPositions.m_pBase, 0);
  CMaterialDrawDescriptor::SetIndexBuffer(v172, hIB, 0);
  v173 = this->m_pParentPanel;
  if ( v173->m_ShatterPanelMode == ShatterPanelMode::SHATTER_DRYWALL )
  {
    m_pBinding = v173->m_hConcreteMaterialEdgeFace.m_pBinding;
    if ( m_pBinding == 0 )
    {
      GetMaterialIndex("materials/concrete/damage/concrete_damage_face.vmat");
      CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_pParentPanel->m_hConcreteMaterialEdgeFace, hIB);
      m_pBinding = this->m_pParentPanel->m_hConcreteMaterialEdgeFace.m_pBinding;
    }
  }
  else if ( v173->m_bBroken )
  {
    m_pBinding = v173->m_hGlassMaterialDamaged.m_pBinding;
    if ( m_pBinding == 0 )
    {
      GetMaterialIndex("materials/glass/shatterglass.vmat");
      CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_pParentPanel->m_hGlassMaterialDamaged, hIB);
      m_pBinding = this->m_pParentPanel->m_hGlassMaterialDamaged.m_pBinding;
    }
  }
  else
  {
    m_pBinding = v173->m_hGlassMaterialUndamaged.m_pBinding;
    if ( m_pBinding == 0 )
    {
      GetMaterialIndex("materials/glass/shatterglass_undamaged.vmat");
      CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_pParentPanel->m_hGlassMaterialUndamaged, hIB);
      m_pBinding = this->m_pParentPanel->m_hGlassMaterialUndamaged.m_pBinding;
    }
  }
  hIB = m_pBinding;
  CMaterialDrawDescriptor::SetMaterial(v172, &hIB);
  if ( this->m_pParentPanel->m_ShatterPanelMode == ShatterPanelMode::SHATTER_DRYWALL )
  {
    CMesh::CMesh(&meshEdgeFins);
    CMesh::AllocateMesh(&meshEdgeFins, nNumInnerCapVerts, 12 * nNumEdgeQuads, 13, vertexAttributes, 5);
    CMesh::FindAttrArray<Vector>(&edgeFinPositions, &meshEdgeFins, "position");
    if ( nNumFaceVerticesa > 0 )
    {
      v195 = 1;
      v196 = meshEdgeFins.m_nVertexStrideFloats;
      v197 = edgeFinPositions.m_pBase;
      flIncrementb = &meshEdgeFins.m_pVerts[meshEdgeFins.m_pAttributes[3].m_nOffsetFloats];
      v198 = &meshEdgeFins.m_pVerts[meshEdgeFins.m_pAttributes[2].m_nOffsetFloats];
      v199 = 0.0;
      m_nStride = edgeFinPositions.m_nStride;
      do
      {
        if ( v195 >= nNumFaceVerticesa )
          v201 = v195 % nNumFaceVerticesa + 1;
        else
          v201 = v195;
        if ( ++v195 >= nNumFaceVerticesa )
          v202 = v195 % nNumFaceVerticesa + 1;
        else
          v202 = v195;
        v203 = vecAverage.y;
        v204 = &vertexPositions.m_Memory.m_pMemory[v201];
        z = v204->z;
        v206 = v204->x;
        v207 = v204->y;
        v208 = &vertexPositions.m_Memory.m_pMemory[v201 + nNumFaceVerticesa];
        v209 = v208->x;
        v210 = v208->y;
        v211 = v208->z;
        v212 = &vertexPositions.m_Memory.m_pMemory[v202];
        flUVe = v212->z;
        v213 = v212->x;
        vertPos2Dd = v212->y;
        LODWORD(v212) = v201 - 1;
        v214 = 4 * (v201 - 1);
        v215 = ((v208->x - vecAverage.x) * 1.3) + vecAverage.x;
        v216 = ((v204->x - vecAverage.x) * 1.3) + vecAverage.x;
        v217 = v210 - vecAverage.y;
        v218 = m_nStride + m_nStride * v214;
        v219 = ((v207 - vecAverage.y) * 1.3) + vecAverage.y;
        v220 = &v197[m_nStride * v214];
        *v220 = v204->x;
        v220[1] = v207;
        v220[2] = z;
        v221 = v218;
        v222 = m_nStride + v218;
        v223 = &v197[v221];
        *v223 = v209;
        v224 = (v217 * 1.3) + v203;
        v223[1] = v210;
        v223[2] = v211;
        v225 = &v197[v222];
        *v225 = v216;
        v225[1] = v219;
        v225[2] = ((z - z) * 1.3) + z;
        v226 = &v197[m_nStride + v222];
        *v226 = v215;
        v227 = v196 + v196 * v214;
        v228 = v196 * v214;
        v226[1] = v224;
        v226[2] = ((v211 - v211) * 1.3) + v211;
        v229 = &v198[v228];
        *v229 = (v206 / x) + 0.5;
        v229[1] = (v207 / y) + 0.5;
        v230 = v227;
        v231 = v196 + v227;
        v232 = &v198[v230];
        v233 = v231;
        v234 = v196 + v231;
        *v232 = (v209 / x) + 0.5;
        v232[1] = (v210 / y) + 0.5;
        v235 = &v198[v233];
        *v235 = (v216 / x) + 0.5;
        v235[1] = (v219 / y) + 0.5;
        v236 = &v198[v234];
        *v236 = (v215 / x) + 0.5;
        v236[1] = (v224 / y) + 0.5;
        v237 = &flIncrementb[v228];
        v238 = &flIncrementb[v230];
        v239 = &flIncrementb[v233];
        v240 = &flIncrementb[v234];
        *v237 = v199;
        v237[1] = 1.0;
        *v238 = v199;
        v238[1] = 1.0;
        *v239 = v199;
        v239[1] = 0.0;
        *v240 = v199;
        v240[1] = 0.0;
        v241 = 12 * v212;
        v199 = v199
             + (fsqrt(
                  (((v206 - v213) * (v206 - v213)) + ((v207 - vertPos2Dd) * (v207 - vertPos2Dd)))
                + ((z - flUVe) * (z - flUVe)))
              * shatterglass_edge_uv_scale.m_pParent->m_Value.m_fValue);
        meshEdgeFins.m_pIndices[v241] = v214 % nNumInnerCapVerts;
        v242 = v241 + 1;
        meshEdgeFins.m_pIndices[v242] = (v214 + 4) % nNumInnerCapVerts;
        LODWORD(v239) = (v214 + 6) % nNumInnerCapVerts;
        meshEdgeFins.m_pIndices[v242 + 1] = v239;
        meshEdgeFins.m_pIndices[v242 + 2] = v214 % nNumInnerCapVerts;
        meshEdgeFins.m_pIndices[v242 + 3] = v239;
        meshEdgeFins.m_pIndices[v242 + 4] = (v214 + 2) % nNumInnerCapVerts;
        meshEdgeFins.m_pIndices[v242 + 5] = (v214 + 1) % nNumInnerCapVerts;
        meshEdgeFins.m_pIndices[v242 + 6] = (v214 + 3) % nNumInnerCapVerts;
        LODWORD(v239) = (v214 + 7) % nNumInnerCapVerts;
        meshEdgeFins.m_pIndices[v242 + 7] = v239;
        meshEdgeFins.m_pIndices[v242 + 8] = (v214 + 1) % nNumInnerCapVerts;
        meshEdgeFins.m_pIndices[v242 + 9] = v239;
        meshEdgeFins.m_pIndices[v242 + 10] = (v214 + 5) % nNumInnerCapVerts;
      }
      while ( v195 <= nNumFaceVerticesa );
    }
    CMesh::CalculateSmoothNormals(&meshEdgeFins);
    v243 = CSceneObjectData::AddDrawCall(pSceneObject);
    CMaterialDrawDescriptor::Init(
      v243,
      RenderPrimitiveType_t::RENDER_PRIM_TRIANGLES,
      0,
      meshEdgeFins.m_nVertexCount,
      0,
      meshEdgeFins.m_nIndexCount);
    hIB_0[0] = 0;
    hIB = 0;
    CMesh::CreateSimpleUnpackedVBAndIBForMesh(&meshEdgeFins, hIB_0, &hIB);
    CMaterialDrawDescriptor::AddVertexBuffer(v243, hIB_0[0], 0);
    CMaterialDrawDescriptor::SetIndexBuffer(v243, hIB, 0);
    v244 = this->m_pParentPanel->m_hConcreteMaterialEdgeFins.m_pBinding;
    if ( v244 == 0 )
    {
      GetMaterialIndex("materials/concrete/damage/concrete_damage_edgefins.vmat");
      CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_pParentPanel->m_hConcreteMaterialEdgeFins, hIB);
      v244 = this->m_pParentPanel->m_hConcreteMaterialEdgeFins.m_pBinding;
    }
    hIB = v244;
    CMaterialDrawDescriptor::SetMaterial(v243, &hIB);
    CMesh::CMesh(&meshInnerCap);
    CMesh::AllocateMesh(&meshInnerCap, nNumInnerCapVerts, 18 * nNumEdgeQuads, 13, vertexAttributes, 5);
    CMesh::FindAttrArray<Vector>(&hIB, &meshInnerCap, "position");
    v245 = 1;
    flUVd = 0.0;
    v246 = meshInnerCap.m_nVertexStrideFloats;
    v247 = &meshInnerCap.m_pVerts[meshInnerCap.m_pAttributes[2].m_nOffsetFloats];
    if ( nNumFaceVerticesa > 0 )
    {
      do
      {
        if ( v245 >= nNumFaceVerticesa )
          v248 = v245 % nNumFaceVerticesa + 1;
        else
          v248 = v245;
        if ( ++v245 >= nNumFaceVerticesa )
          v249 = v245 % nNumFaceVerticesa + 1;
        else
          v249 = v245;
        v250 = &vertexPositions.m_Memory.m_pMemory[v248];
        v251 = v250->y;
        v350 = v250->x;
        v252 = v250->z;
        v253 = &vertexPositions.m_Memory.m_pMemory[v248 + nNumFaceVerticesa];
        flDistf = v251;
        flDamageAmtd = v252;
        v314 = v253->y;
        nNumFaceIndicesa = v253->x;
        v254 = &vertexPositions.m_Memory.m_pMemory[v249];
        v316 = v253->z;
        vertPos2De = vecAverage.y;
        flIncrementc = vecAverage.x;
        nNumTotalShardVerticesa = SLODWORD(v254->x);
        i_0a = SLODWORD(v254->y);
        vPushedA_8a = v254->z;
        CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 1.2, 1.4);
        v255 = flIncrementc;
        v256 = vertPos2De;
        v257 = flDistf - vertPos2De;
        v259 = (v350 - flIncrementc) * v258;
        vertPos2Df = vecAverage.y;
        flIncrementd = vecAverage.x;
        v329 = v255 + v259;
        nNumEdgeQuadsa = v256 + (v257 * v258);
        vPushedAb = (v258 * (flDamageAmtd - flDamageAmtd)) + flDamageAmtd;
        CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, 1.2, 1.4);
        v260 = v248 - 1;
        v261 = v395;
        v262 = 18 * v260;
        v264 = hIB;
        v265 = v395 * 4 * v260;
        v266 = ((nNumFaceIndicesa - flIncrementd) * v263) + flIncrementd;
        v267 = v265;
        v268 = v395 + v265;
        p_unused = &hIB[v267].unused;
        *p_unused = v350;
        p_unused[1] = flDistf;
        v270 = ((v316 - v316) * v263) + v316;
        v271 = ((v314 - vertPos2Df) * v263) + vertPos2Df;
        p_unused[2] = flDamageAmtd;
        v272 = v268;
        v273 = v261 + v268;
        v274 = &v264[v272].unused;
        *v274 = (0.050000001 * (v266 - v329)) + v329;
        v274[1] = (0.050000001 * (v271 - nNumEdgeQuadsa)) + nNumEdgeQuadsa;
        v274[2] = (0.050000001 * (v270 - vPushedAb)) + vPushedAb;
        v275 = &v264[v273].unused;
        v276 = &v264[v261 + v273].unused;
        *v275 = ((v329 - v266) * 0.050000001) + v266;
        v275[1] = ((nNumEdgeQuadsa - v271) * 0.050000001) + v271;
        v275[2] = ((vPushedAb - v270) * 0.050000001) + v270;
        *v276 = nNumFaceIndicesa;
        v276[1] = v314;
        v276[2] = v316;
        v277 = fsqrt(
                 (((v350 - *&nNumTotalShardVerticesa) * (v350 - *&nNumTotalShardVerticesa))
                + ((flDistf - *&i_0a) * (flDistf - *&i_0a)))
               + ((flDamageAmtd - vPushedA_8a) * (flDamageAmtd - vPushedA_8a)))
             * shatterglass_edge_uv_scale.m_pParent->m_Value.m_fValue;
        LODWORD(v276) = v246 + v246 * 4 * v260;
        *&v247[v246 * 4 * v260] = LODWORD(flUVd);
        v278 = v276;
        LODWORD(v276) = v246 + v276;
        v279 = &v247[v278];
        v279[1] = 0.25 * v277;
        *v279 = flUVd;
        v280 = &v247[v276];
        v281 = &v247[v246 + v276];
        *v280 = flUVd;
        v280[1] = 0.5 * v277;
        v281[1] = v277;
        *v281 = flUVd;
        flUVd = v277 + flUVd;
        meshInnerCap.m_pIndices[v262] = 4 * v260 % nNumInnerCapVerts;
        v282 = v262 + 1;
        meshInnerCap.m_pIndices[v282] = (4 * v260 + 4) % nNumInnerCapVerts;
        LODWORD(v280) = (4 * v260 + 5) % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 1] = v280;
        meshInnerCap.m_pIndices[v282 + 2] = 4 * v260 % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 3] = v280;
        LODWORD(v280) = (4 * v260 + 1) % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 4] = v280;
        meshInnerCap.m_pIndices[v282 + 5] = v280;
        meshInnerCap.m_pIndices[v282 + 6] = (4 * v260 + 5) % nNumInnerCapVerts;
        LODWORD(v280) = (4 * v260 + 6) % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 7] = v280;
        meshInnerCap.m_pIndices[v282 + 8] = (4 * v260 + 1) % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 9] = v280;
        LODWORD(v280) = (4 * v260 + 2) % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 10] = v280;
        meshInnerCap.m_pIndices[v282 + 11] = v280;
        meshInnerCap.m_pIndices[v282 + 12] = (4 * v260 + 6) % nNumInnerCapVerts;
        LODWORD(v280) = (4 * v260 + 7) % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 13] = v280;
        meshInnerCap.m_pIndices[v282 + 14] = (4 * v260 + 2) % nNumInnerCapVerts;
        meshInnerCap.m_pIndices[v282 + 15] = v280;
        meshInnerCap.m_pIndices[v282 + 16] = (4 * v260 + 3) % nNumInnerCapVerts;
      }
      while ( v245 <= nNumFaceVerticesa );
    }
    CMesh::CalculateSmoothNormals(&meshInnerCap);
    v283 = CSceneObjectData::AddDrawCall(pSceneObject);
    CMaterialDrawDescriptor::Init(
      v283,
      RenderPrimitiveType_t::RENDER_PRIM_TRIANGLES,
      0,
      meshInnerCap.m_nVertexCount,
      0,
      meshInnerCap.m_nIndexCount);
    hVB_0 = 0;
    hIB_0[0] = 0;
    CMesh::CreateSimpleUnpackedVBAndIBForMesh(&meshInnerCap, &hVB_0, hIB_0);
    CMaterialDrawDescriptor::AddVertexBuffer(v283, hVB_0, 0);
    CMaterialDrawDescriptor::SetIndexBuffer(v283, hIB_0[0], 0);
    v284 = this->m_pParentPanel->m_hConcreteMaterialEdgeCaps.m_pBinding;
    if ( v284 == 0 )
    {
      GetMaterialIndex("materials/concrete/damage/concrete_damage_edgecaps.vmat");
      CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_pParentPanel->m_hConcreteMaterialEdgeCaps, hIB_0[0]);
      v284 = this->m_pParentPanel->m_hConcreteMaterialEdgeCaps.m_pBinding;
    }
    hIB_0[0] = v284;
    CMaterialDrawDescriptor::SetMaterial(v283, hIB_0);
    CMesh::~CMesh(&meshInnerCap);
    CMesh::~CMesh(&meshEdgeFins);
  }
  CSceneObjectData::SetBounds(pSceneObject, &vMinBounds, &vMaxBounds);
  CFmtStrN<256,false>::CFmtStrN(&meshInnerCap, "shatter_mesh_%i.vmesh", g_nShatterGlassShardGlobal);
  CModelBuilder::AddProceduralMesh(
    &modelBuilder,
    &meshInnerCap.m_pAttributes + 1,
    0,
    pRenderMesha,
    0xFFFFFFFFFFFFFFFFLL,
    0xFFu);
  CModelBuilder::AppendSkeletonsFromChildResources(&modelBuilder);
  CFmtStrN<256,false>::CFmtStrN(&meshInnerCap, "shatter_phys_%i.vphys", g_nShatterGlassShardGlobal);
  CModelBuilder::AddPhysicsBody(&modelBuilder, &meshInnerCap.m_pAttributes + 1, 0, &physBodyDesc);
  CUtlString::operator=(
    &modelBuilder.m_modelInfo.m_keyValueText,
    "mdlkeyvalue{\"prop_data\"{\"base\" \"Item.Medium\"}\"physgun_interactions\"{}\"fire_interactions\"{}\"game_interacti"
    "ons\"{}\"bot_interactions\"{}}");
  CFmtStrN<256,false>::CFmtStrN(&meshInnerCap, "shatter_model_%i.vmdl", g_nShatterGlassShardGlobal);
  modelName.m_pString = 0;
  CUtlString::Set(&modelName, &meshInnerCap.m_pAttributes + 1);
  v175 = *(*g_pMeshSystem + 96LL);
  v176 = CUtlString::Get(&modelName);
  v175(&hIB, g_pMeshSystem, v176, 0, &modelBuilder);
  CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hModel, hIB);
  v396.m_pKeyValues = 0;
  hIB = off_404B510;
  v396.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&v396, 0);
  v398.m_pString = 0;
  hIB = off_404B530;
  v177 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  v409 = 0;
  v410 = 0;
  v178 = g_pEntitySystem;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  v408 = v177;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v178->m_entitySpawnerData;
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v178);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  v401 = *&SpawnOriginOffset->m_flMatVal[0][0];
  v402 = *&SpawnOriginOffset->m_flMatVal[0][2];
  v403 = *&SpawnOriginOffset->m_flMatVal[1][0];
  v404 = *&SpawnOriginOffset->m_flMatVal[1][2];
  v405 = *&SpawnOriginOffset->m_flMatVal[2][0];
  v180 = *&SpawnOriginOffset->m_flMatVal[2][2];
  v395 = 0;
  v406 = v180;
  ClassByDesignName = g_pEntityCShatterGlassShardPhysicsClass;
  if ( g_pApplication != 0 )
    v181 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v181 = 0;
  v407 = v181;
  v399 = 0;
  (*&hIB->unused)(&hIB);
  CEntityKeyValues::SetValue(v395, -971301790, "shatterglass_shard");
  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, "shatterglass_shard", &v398);
  v182 = CUtlString::Get(&modelName);
  CEntityKeyValues::SetValue(v395, -926958586, v182);
  SpawnTransform = CShatterGlassShard::GetSpawnTransform(this);
  v184 = this->m_pParentPanel;
  edgeFinPositions = *&SpawnTransform->m_flMatVal[0][0];
  v389 = *&SpawnTransform->m_flMatVal[1][2];
  v390 = *&SpawnTransform->m_flMatVal[2][0];
  v391 = *&SpawnTransform->m_flMatVal[2][2];
  MatrixAngles(&edgeFinPositions, hIB_0);
  hVB_0 = __PAIR64__(HIDWORD(v389), edgeFinPositions.m_nElementCount);
  v380 = HIDWORD(v391);
  CEntityKeyValues::SetValue<Vector>(v395, -467664362, &hVB_0);
  CEntityKeyValues::SetValue<QAngle>(v395, -1164387633, hIB_0);
  if ( v184 != 0 && (m_pEntity = v184->m_pEntity) != 0 )
  {
    v186 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v187 = 0x7FFF;
    else
      v187 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v372) = v187 | v372 & 0x8000;
    v372 = (v186 << 15) | v372 & 0x7FFF;
  }
  else
  {
    v372 = -1;
  }
  v188 = v395;
  if ( v395->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = v395->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_255:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v395->m_keyHashes);
      LOWORD(v291) = v188->m_keyHashes.m_nCount - 1;
      m_nAllocated = v188->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&v188->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = v188->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v291 = v291;
      m_pElements[v291] = -1104771937;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v188->m_keyValues);
      v294 = v372;
      if ( v188->m_keyValues.m_nAllocated != 0 )
        v295 = v188->m_keyValues.m_pElements;
      else
        v295 = 0;
      v296 = &v295[v291];
      m_flags = v296->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v296->m_value.m_flags = m_flags & 0xFFFE;
      v296->m_value.m_uint64 = 0;
      v296->m_value.m_type = 13;
      v296->m_value.m_int = v294;
      if ( v188->m_keyValues.m_nAllocated != 0 )
        v298 = v188->m_keyValues.m_pElements;
      else
        v298 = 0;
      v298[v291].m_pAttributeName = 0;
      goto LABEL_196;
    }
    v288 = v395->m_keyHashes.m_nAllocated;
    v289 = 0;
    while ( 1 )
    {
      if ( v288 != 0 )
      {
        v290 = (&v395->m_keyHashes.m_nAllocAllocated + 1);
        if ( v288 > 9 )
          v290 = v395->m_keyHashes.m_pElements;
      }
      else
      {
        v290 = 0;
      }
      if ( v290[v289] == -1104771937 )
        break;
      if ( m_nCount <= ++v289 )
        goto LABEL_255;
    }
    if ( v395->m_keyValues.m_nAllocated != 0 )
    {
      v299 = v395->m_keyValues.m_pElements;
      v300 = v289;
      m_pAttributeName = v299[v300].m_pAttributeName;
      if ( m_pAttributeName != 0 )
      {
LABEL_267:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
        goto LABEL_196;
      }
      v302 = v372;
    }
    else
    {
      v300 = v289;
      m_pAttributeName = *(v300 * 24 + 16);
      if ( m_pAttributeName != 0 )
        goto LABEL_267;
      v302 = v372;
      v299 = 0;
    }
    v303 = &v299[v300];
    v304 = v303->m_value.m_flags;
    if ( (v304 & 1) != 0 )
      v303->m_value.m_flags = v304 & 0xFFFE;
    v303->m_value.m_uint64 = 0;
    v303->m_value.m_type = 13;
    v303->m_value.m_int = v302;
  }
LABEL_196:
  CEntitySpawner<CShatterGlassShardPhysics>::Spawn(v370, &hIB);
  p_m_hPhysicsEntity = &this->m_hPhysicsEntity;
  this->m_hPhysicsEntity.m_Index = v370[0];
  v190 = CEntityHandle::operator CEntityInstance *(&this->m_hPhysicsEntity);
  LODWORD(hIB_0[0]) = -1;
  if ( CEntityHandle::operator CBaseEntity *(hIB_0) == v190 )
  {
    m_bCreatedModel = 0;
  }
  else
  {
    CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity)[40].m_CScriptComponent = this;
    this->m_flPhysicsEntitySpawnedAtTime = CGlobalVarsBase::curtime(gpGlobals, 0);
    if ( this->m_pParentPanel->m_bGlassNavIgnore )
    {
      v285 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
      v286 = v285;
      if ( v285[183] < 3.4028235e38 )
      {
        (*(*v285 + 176LL))(v285, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v286[183] = 3.4028235e38;
      }
    }
    if ( shatterglass_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      v191 = "";
      v192 = this->m_pParentShard;
      if ( v192 != 0 && v192->m_bShatterRateLimited )
        v191 = "[RateLimited!]";
      v193 = CUtlString::Get(&modelName);
      DevMsg("Generated procedural shatter debris model \"%s\" %s\n", v193, v191);
    }
    this->m_bCreatedModel = 1;
    if ( gpGlobals->framecount - g_nShatterGlassShardsCreatedRecentlyFrameRef <= 24 )
    {
      ++g_nShatterGlassShardsCreatedRecently;
      m_bCreatedModel = IsPointWithinConvexBounds;
    }
    else
    {
      m_bCreatedModel = IsPointWithinConvexBounds;
      g_nShatterGlassShardsCreatedRecentlyFrameRef = gpGlobals->framecount;
      g_nShatterGlassShardsCreatedRecently = 1;
    }
  }
  hIB = off_404B530;
  CEntitySpawnerBase<CShatterGlassShardPhysics>::~CEntitySpawnerBase(&hIB);
  if ( modelName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&modelName);
  CMesh::~CMesh(&mesh);
  CPhysBodyDesc::~CPhysBodyDesc(&physBodyDesc);
  CUtlVectorBase<float,CUtlMemory<float,int>>::~CUtlVectorBase(&vertexDamage);
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&vertexPositions);
  CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::~CUtlVectorBase(&vecPanelVerticesSubdiv);
  v194 = &vertexAttributes[4];
  do
  {
    if ( v194->m_nameDelta.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v194->m_nameDelta);
    if ( v194->m_name.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v194->m_name);
    --v194;
  }
  while ( v194 != &physBodyDesc.m_Hulls.m_Memory );
  CModelBuilder::~CModelBuilder(&modelBuilder);
  return m_bCreatedModel;
}


// CShatterGlassShard::LocalToWorldSpace  (line 2203, @0x000000000222e4a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Vector, VectorTransform, operator CEntityInstance*
// calls: CFuncShatterglass::GetPanelTransform, VectorTransform, CBaseEntity::EntityToWorldTransform
// callers: CShatterGlassShard::FreezeInPlace, CShatterGlassShard::ApplyParentImpactVelocity, CShatterGlassShard::DentShardInwards, CShatterGlassShard::FlagForRemoval, CShatterGlassShard::GetIsNeighborOf, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CShatterGlassShard::Shatter, CFuncShatterglass::InputHit
// globals: CEntityHandle::gm_pEntityList
__m128i __fastcall CShatterGlassShard::LocalToWorldSpace(CShatterGlassShard *const this, Vector2D in, float *a3)
{
  uint32 m_Index; // edx
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  const matrix3x4_t *PanelTransform; // rsi
  float v8; // xmm0_4
  float v9; // xmm1_4
  float in1[4]; // [rsp+10h] [rbp-30h] BYREF
  __m128i out[2]; // [rsp+20h] [rbp-20h] BYREF

  m_Index = this->m_hPhysicsEntity.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[this->m_hPhysicsEntity.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && v6->m_pInstance != 0 )
  {
    PanelTransform = CBaseEntity::EntityToWorldTransform(v6->m_pInstance);
  }
  else
  {
    PanelTransform = CFuncShatterglass::GetPanelTransform(this->m_pParentPanel);
  }
  v8 = a3[1];
  in1[2] = 0.0;
  v9 = *a3;
  in1[1] = v8;
  in1[0] = v9;
  VectorTransform(in1, PanelTransform, out[0].m128i_i32);
  return _mm_loadl_epi64(out);
}


// CShatterGlassShard::ResetRestoreMove  (line 2208, @0x000000000222ede0, libserver.so)  // inlines: CTransform, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, MatrixTransform, RemoveEffects, ToCTransform, ToQAngle, VectorAligned, operator CEntityInstance*, operator->
// calls: CBaseEntity::PhysicsEnableMotion, CEntityHandle::operator CEntityInstance*, CBaseEntity::DispatchUpdateTransmitState, Bias, CFuncShatterglass::GetPanelTransform, MatrixTransform, CBaseEntity::EntityToWorldTransform, TransformLerp, QuaternionAngles, CBaseEntity::SetAbsAngles, CBaseEntity::SetAbsOrigin
// callers: CFuncShatterglass::RestoreThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CShatterGlassShard::ResetRestoreMove(CShatterGlassShard *const this, double a2, float flRestoreLerp)
{
  CHandle<CShatterGlassShardPhysics> *p_m_hPhysicsEntity; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // rax
  CBaseEntity *v10; // r12
  float v11; // xmm2_4
  const matrix3x4_t *PanelTransform; // rax
  CBaseEntity *v13; // rax
  matrix3x4_t *v14; // rax
  CBaseEntity *v15; // rax
  CBaseEntity *v16; // rax
  float flRestoreLerpa; // [rsp+Ch] [rbp-84h]
  CTransform temp; // [rsp+10h] [rbp-80h] BYREF
  CTransform p; // [rsp+30h] [rbp-60h] BYREF
  CTransform out; // [rsp+50h] [rbp-40h] BYREF

  p_m_hPhysicsEntity = &this->m_hPhysicsEntity;
  m_Index = this->m_hPhysicsEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsEntity.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hPhysicsEntity.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
      {
        CBaseEntity::PhysicsEnableMotion(v7->m_pInstance, 0);
        v8 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
        (*(v8[17].m_iszPrivateVScripts.u.m_Id + 208))(&v8[17].m_iszPrivateVScripts, 0);
        v9 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
        (*(v9[17].m_iszPrivateVScripts.u.m_Id + 128))(&v9[17].m_iszPrivateVScripts);
        v10 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
        (*(v10->_vptr_IHandleEntity + 188))(v10, v10->m_fEffects.m_Value & 0xFFFFFFDF);
        v10->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
        CBaseEntity::DispatchUpdateTransmitState(v10);
        temp.m_vPosition.w = 0.0;
        flRestoreLerpa = Bias(0.1, v11);
        PanelTransform = CFuncShatterglass::GetPanelTransform(this->m_pParentPanel);
        out.m_vPosition.w = 0.0;
        MatrixTransform(PanelTransform, &out);
        v13 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
        v14 = CBaseEntity::EntityToWorldTransform(v13);
        p.m_vPosition.w = 0.0;
        MatrixTransform(v14, &p);
        TransformLerp(&p, &out, flRestoreLerpa, &temp);
        QuaternionAngles(&temp.m_orientation, &out);
        v15 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
        CBaseEntity::SetAbsAngles(v15, &out);
        out.m_vPosition.Vector = temp.m_vPosition.Vector;
        v16 = CEntityHandle::operator CEntityInstance *(p_m_hPhysicsEntity);
        CBaseEntity::SetAbsOrigin(v16, &out.m_vPosition);
      }
    }
  }
}


// CFuncShatterglass::CreateNewShard  (line 2225, @0x0000000002238110, libserver.so)  // inlines: AddToHead, CopyConstruct<CShatterGlassShard*>, GrowMemory, GrowVector, InsertBefore, ShiftElementsRight, V_memmove, memmove
// calls: operator new, CShatterGlassShard::CShatterGlassShard, CUtlMemory<CShatterGlassShard*, int>::Grow, memmove, operator delete, _Unwind_Resume
// callers: CShatterGlassShard::Shatter, CFuncShatterglass::Init
CShatterGlassShard *__fastcall CFuncShatterglass::CreateNewShard(
        CFuncShatterglass *const this,
        CShatterGlassShard *pParentShard)
{
  CShatterGlassShard *v4; // r12
  __int64 m_Size; // r13
  int m_nAllocationCount; // eax
  int v7; // r14d
  CShatterGlassShard **m_pMemory; // rax

  v4 = operator new(0xB8u);
  CShatterGlassShard::CShatterGlassShard(v4, this, pParentShard);
  m_Size = this->m_vecShatterGlassShards.m_Size;
  m_nAllocationCount = this->m_vecShatterGlassShards.m_Memory.m_nAllocationCount;
  v7 = m_Size + 1;
  if ( m_Size + 1 > m_nAllocationCount )
    CUtlMemory<CShatterGlassShard *,int>::Grow(&this->m_vecShatterGlassShards.m_Memory, v7 - m_nAllocationCount);
  this->m_vecShatterGlassShards.m_Size = v7;
  if ( m_Size > 0 )
    memmove(
      this->m_vecShatterGlassShards.m_Memory.m_pMemory + 1,
      this->m_vecShatterGlassShards.m_Memory.m_pMemory,
      8 * m_Size);
  m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
  if ( m_pMemory != 0 )
    *m_pMemory = v4;
  return v4;
}


// CShatterGlassShard::DestroyProceduralResources  (line 2232, @0x000000000222e270, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CShatterGlassShard::DestroyProceduralResources(CShatterGlassShard *const this)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hPhysicsEntity.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = this->m_hPhysicsEntity.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  UTIL_Remove(m_pInstance);
}


// CFuncShatterglass::CFuncShatterglass  (line 2238, @0x0000000002235540, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CStrongHandle, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, SetToIdentity, ~CStrongHandle, ~CUtlVector
// calls: CBaseModelEntity::CBaseModelEntity, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, SetIdentityMatrix, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume, CUtlVectorBase<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >::~CUtlVectorBase, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown
// callers: CFuncShatterglass::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFuncShatterglass::CFuncShatterglass(CFuncShatterglass *const this)
{
  __int64 v2; // rdx
  vec_t z; // eax

  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_404A2F0;
  this->m_hGlassMaterialDamaged.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hGlassMaterialDamaged, 0);
  this->m_hGlassMaterialUndamaged.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hGlassMaterialUndamaged, 0);
  this->m_hConcreteMaterialEdgeFace.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hConcreteMaterialEdgeFace, 0);
  this->m_hConcreteMaterialEdgeCaps.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hConcreteMaterialEdgeCaps, 0);
  this->m_hConcreteMaterialEdgeFins.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hConcreteMaterialEdgeFins, 0);
  this->m_bBroken = 0;
  this->m_vecShatterGlassShards.m_Size = 0;
  this->m_vecShatterGlassShards.m_Memory.m_pMemory = 0;
  this->m_vecShatterGlassShards.m_Memory.m_nAllocationCount = 0;
  v2 = *&vec3_origin.x;
  this->m_vecShatterGlassShards.m_Memory.m_nGrowSize = 0;
  z = vec3_origin.z;
  this->m_vecShatterGlassShardsToDelete.m_Size = 0;
  this->m_vecShatterGlassShardsToDelete.m_Memory.m_pMemory = 0;
  this->m_vecShatterGlassShardsToDelete.m_Memory.m_nAllocationCount = 0;
  this->m_vecShatterGlassShardsToDelete.m_Memory.m_nGrowSize = 0;
  this->m_vecPanelNormalWs.z = z;
  *&this->m_vecPanelNormalWs.x = v2;
  this->m_nNumShardsEverCreated = 0;
  this->m_flRestoreStartTime = 0.0;
  this->m_flLastShatterSoundEmitTime = 0.0;
  this->m_flLastCleanupTime = 0.0;
  this->m_bHasRateLimitedShards = 0;
  this->m_flInitAtTime = 0.0;
  this->m_bGlassNavIgnore = 0;
  this->m_flGlassThickness = 0.60000002;
  this->m_bGlassInFrame = 1;
  this->m_flSpawnInvulnerability = 3.0;
  this->m_bStartBroken = 0;
  this->m_szDamagePositioningEntityName.u.m_Id = 0;
  this->m_hDamagePositioningEntity.m_Index = -1;
  this->m_OnBroken._vptr_CEntityIOOutput = off_3F7C190;
  this->m_ShatterPanelMode = ShatterPanelMode::SHATTER_GLASS;
  this->m_iSurfaceType = 0;
  SetIdentityMatrix(&this->m_matPanelTransform);
}


// CFuncShatterglass::GetPanelTransform  (line 2243, @0x000000000222e2d0, libserver.so)  // inlines: ConcatTransforms
// calls: CBaseEntity::EntityToWorldTransform, ConcatTransforms
// callers: CShatterGlassShard::GetSpawnTransform, CShatterGlassShard::IsShardNearPanelSpacePosition, CShatterGlassShard::LocalToWorldSpace, CShatterGlassShard::ResetRestoreMove
const matrix3x4_t *__fastcall CFuncShatterglass::GetPanelTransform(CFuncShatterglass *const this)
{
  matrix3x4_t *v2; // rax
  matrix3x4_t out; // [rsp+0h] [rbp-40h] BYREF

  v2 = CBaseEntity::EntityToWorldTransform(this);
  ConcatTransforms(v2, &this->m_matPanelTransform, &out);
  this->m_matPanelTransformWsTemp = out;
  return &this->m_matPanelTransformWsTemp;
}


// CFuncShatterglass::PurgeAll  (line 2249, @0x0000000002234da0, libserver.so)  // inlines: DestroyProceduralResources, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CEntityInstance*, ~CShatterGlassShard, ~CStrongHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, UTIL_Remove, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CUtlMemory<Vector2D, int>::Purge, CUtlMemory<CShatterGlassShard*, int>::Purge
// callers: CFuncShatterglass::~CFuncShatterglass, CFuncShatterglass::Init
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncShatterglass::PurgeAll(CFuncShatterglass *const this)
{
  int v1; // r14d
  __int64 i; // r13
  CShatterGlassShard *v4; // rax
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rdi
  unsigned __int16 v7; // cx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CShatterGlassShard *v10; // r12
  bool v11; // zf
  int m_Size; // r12d
  __int64 v13; // r13
  int v14; // r14d
  CShatterGlassShard *v15; // rax
  uint32 v16; // edx
  CEntityInstance *v17; // rdi
  unsigned __int16 v18; // cx
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  CShatterGlassShard *v21; // r12

  v1 = 0;
  for ( i = 0; this->m_vecShatterGlassShards.m_Size > v1; ++i )
  {
    v4 = this->m_vecShatterGlassShards.m_Memory.m_pMemory[i];
    if ( v4 != 0 )
    {
      m_Index = v4->m_hPhysicsEntity.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v7 = v4->m_hPhysicsEntity.m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            m_pInstance = v9->m_pInstance;
        }
      }
      UTIL_Remove(m_pInstance);
      v10 = this->m_vecShatterGlassShards.m_Memory.m_pMemory[i];
      if ( v10 != 0 )
      {
        v11 = (v10->m_vecNeighbors.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v10->m_vecNeighbors.m_Size = 0;
        if ( v11 )
        {
          CUtlMemory<CShatterGlassShard *,int>::Purge(&v10->m_vecNeighbors.m_Memory);
          if ( (v10->m_vecNeighbors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CShatterGlassShard *,int>::Purge(&v10->m_vecNeighbors.m_Memory);
        }
        CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&v10->m_hModel);
        v10->m_vecPanelVertices.m_Size = 0;
        if ( (v10->m_vecPanelVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<Vector2D,int>::Purge(&v10->m_vecPanelVertices.m_Memory);
          if ( (v10->m_vecPanelVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<Vector2D,int>::Purge(&v10->m_vecPanelVertices.m_Memory);
        }
        operator delete(v10);
      }
    }
    ++v1;
  }
  m_Size = this->m_vecShatterGlassShardsToDelete.m_Size;
  v13 = 0;
  v14 = 0;
  this->m_vecShatterGlassShards.m_Size = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v15 = this->m_vecShatterGlassShardsToDelete.m_Memory.m_pMemory[v13];
      if ( v15 != 0 )
      {
        v16 = v15->m_hPhysicsEntity.m_Index;
        v17 = 0;
        if ( v16 + 2 > 1 )
        {
          v18 = v15->m_hPhysicsEntity.m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
              v17 = v20->m_pInstance;
          }
        }
        UTIL_Remove(v17);
        v21 = this->m_vecShatterGlassShardsToDelete.m_Memory.m_pMemory[v13];
        if ( v21 != 0 )
        {
          v11 = (v21->m_vecNeighbors.m_Memory.m_nGrowSize & 0xC0000000) == 0;
          v21->m_vecNeighbors.m_Size = 0;
          if ( v11 )
          {
            CUtlMemory<CShatterGlassShard *,int>::Purge(&v21->m_vecNeighbors.m_Memory);
            if ( (v21->m_vecNeighbors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CShatterGlassShard *,int>::Purge(&v21->m_vecNeighbors.m_Memory);
          }
          CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&v21->m_hModel);
          v21->m_vecPanelVertices.m_Size = 0;
          if ( (v21->m_vecPanelVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<Vector2D,int>::Purge(&v21->m_vecPanelVertices.m_Memory);
            if ( (v21->m_vecPanelVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<Vector2D,int>::Purge(&v21->m_vecPanelVertices.m_Memory);
          }
          operator delete(v21);
        }
      }
      ++v14;
      ++v13;
    }
    while ( this->m_vecShatterGlassShardsToDelete.m_Size > v14 );
  }
  this->m_vecShatterGlassShardsToDelete.m_Size = 0;
}


// CFuncShatterglass::~CFuncShatterglass  (line 2272, @0x0000000002235090, libserver.so)  // inlines: Purge, RemoveAll, ~CStrongHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CFuncShatterglass::PurgeAll, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CShatterGlassShard*, int>::Purge
// callers: CFuncShatterglass::~CFuncShatterglass
void __fastcall CFuncShatterglass::~CFuncShatterglass(CFuncShatterglass *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_404A2F0;
  CFuncShatterglass::PurgeAll(this);
  v2 = (this->m_vecShatterGlassShardsToDelete.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecShatterGlassShardsToDelete.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CShatterGlassShard *,int>::Purge(&this->m_vecShatterGlassShardsToDelete.m_Memory);
    if ( (this->m_vecShatterGlassShardsToDelete.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CShatterGlassShard *,int>::Purge(&this->m_vecShatterGlassShardsToDelete.m_Memory);
  }
  v2 = (this->m_vecShatterGlassShards.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecShatterGlassShards.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CShatterGlassShard *,int>::Purge(&this->m_vecShatterGlassShards.m_Memory);
    if ( (this->m_vecShatterGlassShards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CShatterGlassShard *,int>::Purge(&this->m_vecShatterGlassShards.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hConcreteMaterialEdgeFins);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hConcreteMaterialEdgeCaps);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hConcreteMaterialEdgeFace);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hGlassMaterialUndamaged);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hGlassMaterialDamaged);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncShatterglass::~CFuncShatterglass  (line 2272, @0x0000000002235180, libserver.so)
// calls: CFuncShatterglass::~CFuncShatterglass, CBaseEntity::operator delete
void __fastcall CFuncShatterglass::~CFuncShatterglass(CFuncShatterglass *const this)
{
  CFuncShatterglass::~CFuncShatterglass(this);
  CBaseEntity::operator delete(this);
}


// CFuncShatterglass::Spawn  (line 2277, @0x00000000022444f0, libserver.so)  // inlines: AddEFlags, CUtlSymbolLarge, CollisionToWorldSpace, ConcatTransforms, CrossProduct, FastSqrt, GetCollisionGroup, GetCollisionGroup_Inline, GetComponent<CBodyComponent>, GetEHandle, GetEntryIndex, GetModelData, GetPtr, GetRawPtr, GetSerialNumber, GetSkeletonInstance, InitXYZ, InverseTR, IsBoundsDefinedInEntitySpace, Length, NetworkStateChanged, Normalized, ResolveOffset, Set, SetNavIgnore, SetOrigin, SetSolid, SetToIdentity, VectorLength, VectorMA, VectorSubtract, VectorTransform, WorldSpaceCenter, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator const RuntimeClass_t*, operator-, operator=, operator=<float>, operator==, operator[]
// calls: CUniformRandomStream::SetSeed(int), CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CCollisionProperty::SetupPhysicsFromUnscaledModel, SetIdentityMatrix, VectorTransform, CModel::GetPhysicsContainer, CGameEntitySystem::FindEntityByName, CFuncShatterglass::Init, CFuncShatterglass::InputHit, CBaseEntity::AddEffects (16 total)
// globals: g_ShatterGlassRandom, g_nShatterGlassShardsCreatedRecentlyFrameRef
void __fastcall CFuncShatterglass::Spawn(CFuncShatterglass *const this, const CEntityKeyValues *pKeyValues)
{
  int (**vptr_ICollideable)(...); // rax
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  double v7; // xmm0_8
  bool v8; // zf
  float v9; // xmm1_4
  float *v10; // rax
  double v11; // xmm0_8
  const matrix3x4_t *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float *v16; // rax
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  const CModel *const *v22; // rax
  const CModel *v23; // r15
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *v25; // rdx
  int v26; // eax
  __int16 v27; // cx
  const CPhysAggregateData_1 *PhysicsContainer; // rax
  __int64 v29; // rdx
  const VPhysXBodyPart_t *v30; // rax
  __int64 m_nOffset; // rcx
  __int64 v32; // rcx
  Vector *v33; // rax
  const CPhysAggregateData_1 *v34; // rax
  __int64 v35; // rdx
  const VPhysXBodyPart_t *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  vec_t v41; // eax
  const CPhysAggregateData_1 *v42; // rax
  __int64 v43; // rdx
  const VPhysXBodyPart_t *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  vec_t v49; // eax
  matrix3x4_t *v50; // rax
  matrix3x4_t *v51; // rax
  matrix3x4_t *v52; // rax
  float v53; // xmm7_4
  float v54; // xmm6_4
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  int (**v59)(...); // rax
  double v60; // xmm0_8
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm3_4
  float v64; // xmm4_4
  float *v65; // rax
  double v66; // xmm0_8
  const matrix3x4_t *v67; // rax
  float v68; // xmm6_4
  float v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm3_4
  float v73; // xmm4_4
  float *v74; // rax
  float v75; // xmm3_4
  float v76; // xmm2_4
  float v77; // r12d
  vec_t x; // xmm0_4
  float v79; // xmm0_4
  vec_t y; // xmm0_4
  float v81; // xmm0_4
  vec_t z; // xmm0_4
  matrix3x4_t *v83; // rax
  float v84; // [rsp+10h] [rbp-E0h]
  float v85; // [rsp+14h] [rbp-DCh]
  float v86; // [rsp+14h] [rbp-DCh]
  float v87; // [rsp+18h] [rbp-D8h]
  float v88; // [rsp+18h] [rbp-D8h]
  float v89; // [rsp+18h] [rbp-D8h]
  float v90; // [rsp+1Ch] [rbp-D4h]
  float v91; // [rsp+1Ch] [rbp-D4h]
  float v92; // [rsp+1Ch] [rbp-D4h]
  float vecUp; // [rsp+20h] [rbp-D0h]
  float vecUpa; // [rsp+20h] [rbp-D0h]
  float vecUpb; // [rsp+20h] [rbp-D0h]
  float vecUp_4; // [rsp+24h] [rbp-CCh]
  float vecUp_8; // [rsp+28h] [rbp-C8h]
  float v98; // [rsp+2Ch] [rbp-C4h]
  float v99; // [rsp+2Ch] [rbp-C4h]
  Vector v0; // [rsp+30h] [rbp-C0h] BYREF
  Vector v1; // [rsp+40h] [rbp-B0h] BYREF
  Vector v2; // [rsp+50h] [rbp-A0h] BYREF
  matrix3x4_t out; // [rsp+60h] [rbp-90h] BYREF
  matrix3x4_t in1[2]; // [rsp+90h] [rbp-60h] BYREF

  g_nShatterGlassShardsCreatedRecentlyFrameRef = gpGlobals->framecount;
  CUniformRandomStream::SetSeed(&g_ShatterGlassRandom, g_nShatterGlassShardsCreatedRecentlyFrameRef);
  CBaseEntity::Spawn(this, pKeyValues);
  if ( this->m_flNavIgnoreUntilTime.m_Value < 3.4028235e38 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNavIgnoreUntilTime.m_Value = 3.4028235e38;
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  vptr_ICollideable = this->m_Collision._vptr_ICollideable;
  this->m_iEFlags |= 0x40000u;
  vptr_ICollideable[16](&this->m_Collision);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  SetIdentityMatrix(&this->m_matPanelTransform);
  v7 = (*(this->m_Collision._vptr_ICollideable + 19))(&this->m_Collision);
  v8 = (this->m_Collision.m_nSolidType.m_Value & 0xFD) == 0;
  *&in1[0].m_flMatVal[0][0] = v7;
  in1[0].m_flMatVal[0][2] = v9;
  if ( v8
    || (v10 = (*(this->m_Collision._vptr_ICollideable + 5))(&this->m_Collision),
        *&v11 = LODWORD(vec3_angle.x),
        vec3_angle.x == *v10)
    && (*&v11 = LODWORD(vec3_angle.y), *&v11 == v10[1])
    && (*&v11 = LODWORD(vec3_angle.z), *&v11 == v10[2]) )
  {
    v98 = (*(this->m_Collision._vptr_ICollideable + 27))(&this->m_Collision);
    v16 = (*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
    v15 = (in1[0].m_flMatVal[0][0] * v98) + *v16;
    v14 = (in1[0].m_flMatVal[0][1] * v98) + v16[1];
    v13 = (v98 * in1[0].m_flMatVal[0][2]) + v16[2];
  }
  else
  {
    v12 = (*(this->m_Collision._vptr_ICollideable + 6))(&this->m_Collision, v11);
    VectorTransform(in1, v12, &out);
    v13 = out.m_flMatVal[0][2];
    v14 = out.m_flMatVal[0][1];
    v15 = out.m_flMatVal[0][0];
  }
  m_pEntity = this->m_pEntity;
  this->m_matPanelTransform.m_flMatVal[0][3] = v15;
  this->m_matPanelTransform.m_flMatVal[1][3] = v14;
  this->m_matPanelTransform.m_flMatVal[2][3] = v13;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v20 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v20 != 0 )
      {
        v21 = (*(**(v20 + 8) + 72LL))(*(v20 + 8));
        if ( v21 != 0 )
        {
          v22 = *(v21 + 480);
          if ( v22 != 0 )
          {
            v23 = *v22;
            if ( *v22 != 0
              && CModel::GetPhysicsContainer(*v22) != 0
              && CModel::GetPhysicsContainer(v23)->m_Parts.m_Size != 0 )
            {
              PhysicsContainer = CModel::GetPhysicsContainer(v23);
              v29 = 0;
              v30 = *PhysicsContainer->m_Parts.m_Memory.m_pMemory;
              m_nOffset = v30->m_rnShape.m_meshes.m_nOffset;
              if ( m_nOffset != 0 )
                v29 = &v30->m_rnShape.m_meshes + m_nOffset;
              v32 = *(v29 + 40);
              v33 = 0;
              if ( v32 != 0 )
                v33 = (v29 + v32 + 40);
              v0 = *v33;
              v34 = CModel::GetPhysicsContainer(v23);
              v35 = 0;
              v36 = *v34->m_Parts.m_Memory.m_pMemory;
              v37 = v36->m_rnShape.m_meshes.m_nOffset;
              if ( v37 != 0 )
                v35 = &v36->m_rnShape.m_meshes + v37;
              v38 = *(v35 + 40);
              v39 = 0;
              if ( v38 != 0 )
                v39 = v35 + v38 + 40;
              v40 = *(v39 + 12);
              v41 = *(v39 + 20);
              *&v1.x = v40;
              v1.z = v41;
              v42 = CModel::GetPhysicsContainer(v23);
              v43 = 0;
              v44 = *v42->m_Parts.m_Memory.m_pMemory;
              v45 = v44->m_rnShape.m_meshes.m_nOffset;
              if ( v45 != 0 )
                v43 = &v44->m_rnShape.m_meshes + v45;
              v46 = *(v43 + 40);
              v47 = 0;
              if ( v46 != 0 )
                v47 = v43 + v46 + 40;
              v48 = *(v47 + 24);
              v49 = *(v47 + 32);
              *&v2.x = v48;
              v2.z = v49;
              v50 = CBaseEntity::EntityToWorldTransform(this);
              VectorTransform(&v0.x, v50, in1);
              v0 = *&in1[0].m_flMatVal[0][0];
              v51 = CBaseEntity::EntityToWorldTransform(this);
              VectorTransform(&v1.x, v51, in1);
              v1 = *&in1[0].m_flMatVal[0][0];
              v52 = CBaseEntity::EntityToWorldTransform(this);
              VectorTransform(&v2.x, v52, in1);
              v53 = v1.x - v0.x;
              v54 = v1.y - v0.y;
              v55 = v1.y - in1[0].m_flMatVal[0][1];
              v99 = v1.x - v0.x;
              v2 = *&in1[0].m_flMatVal[0][0];
              v90 = v1.y - in1[0].m_flMatVal[0][1];
              v56 = v1.z - in1[0].m_flMatVal[0][2];
              v57 = v1.x - in1[0].m_flMatVal[0][0];
              vecUp_8 = v1.y - v0.y;
              v87 = v1.z - in1[0].m_flMatVal[0][2];
              vecUp_4 = v1.z - v0.z;
              v58 = (v1.y - in1[0].m_flMatVal[0][1]) * (v1.y - in1[0].m_flMatVal[0][1]);
              this->m_PanelSize.x = fsqrt(
                                      (((v1.x - v0.x) * (v1.x - v0.x)) + ((v1.y - v0.y) * (v1.y - v0.y)))
                                    + ((v1.z - v0.z) * (v1.z - v0.z)));
              vecUp = v57;
              this->m_PanelSize.y = fsqrt(((v57 * v57) + v58) + (v56 * v56));
              in1[0].m_flMatVal[0][0] = (v54 * v56) - (vecUp_4 * v55);
              in1[0].m_flMatVal[0][1] = (vecUp_4 * v57) - (v53 * v56);
              in1[0].m_flMatVal[0][2] = (v53 * v55) - (v54 * v57);
              VectorNormalize(in1);
              v59 = this->m_Collision._vptr_ICollideable;
              *&this->m_vecPanelNormalWs.x = *&in1[0].m_flMatVal[0][0];
              this->m_vecPanelNormalWs.z = in1[0].m_flMatVal[0][2];
              v60 = (v59[19])(&this->m_Collision);
              v8 = (this->m_Collision.m_nSolidType.m_Value & 0xFD) == 0;
              *&in1[0].m_flMatVal[0][0] = v60;
              v61 = vecUp;
              in1[0].m_flMatVal[0][2] = v62;
              v63 = v90;
              v64 = v87;
              if ( v8
                || (v65 = (*(this->m_Collision._vptr_ICollideable + 5))(&this->m_Collision),
                    v61 = vecUp,
                    v63 = v90,
                    v64 = v87,
                    *&v66 = LODWORD(vec3_angle.x),
                    vec3_angle.x == *v65)
                && (*&v66 = LODWORD(vec3_angle.y), *&v66 == v65[1])
                && (*&v66 = LODWORD(vec3_angle.z), *&v66 == v65[2]) )
              {
                v85 = v64;
                v88 = v63;
                v91 = v61;
                vecUpa = (*(this->m_Collision._vptr_ICollideable + 27))(&this->m_Collision);
                v74 = (*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
                v71 = v91;
                v72 = v88;
                v73 = v85;
                v70 = (in1[0].m_flMatVal[0][0] * vecUpa) + *v74;
                v69 = (in1[0].m_flMatVal[0][1] * vecUpa) + v74[1];
                v68 = (in1[0].m_flMatVal[0][2] * vecUpa) + v74[2];
              }
              else
              {
                v67 = (*(this->m_Collision._vptr_ICollideable + 6))(&this->m_Collision, v66);
                VectorTransform(in1, v67, &out);
                v68 = out.m_flMatVal[0][2];
                v69 = out.m_flMatVal[0][1];
                v70 = out.m_flMatVal[0][0];
                v71 = vecUp;
                v72 = v90;
                v73 = v87;
              }
              v84 = v70;
              v86 = v69;
              v89 = v68;
              *&in1[0].m_flMatVal[0][0] = __PAIR64__(LODWORD(v72), LODWORD(v71));
              in1[0].m_flMatVal[0][2] = v73;
              VectorNormalize(in1);
              v75 = in1[0].m_flMatVal[0][0];
              in1[0].m_flMatVal[0][0] = v99;
              v76 = in1[0].m_flMatVal[0][1];
              in1[0].m_flMatVal[0][1] = vecUp_8;
              v92 = v75;
              v77 = in1[0].m_flMatVal[0][2];
              vecUpb = v76;
              in1[0].m_flMatVal[0][2] = vecUp_4;
              VectorNormalize(in1);
              this->m_matPanelTransform.m_flMatVal[0][0] = in1[0].m_flMatVal[0][0];
              x = this->m_vecPanelNormalWs.x;
              this->m_matPanelTransform.m_flMatVal[0][1] = v92;
              this->m_matPanelTransform.m_flMatVal[0][2] = x;
              v79 = in1[0].m_flMatVal[0][1];
              this->m_matPanelTransform.m_flMatVal[0][3] = v84;
              this->m_matPanelTransform.m_flMatVal[1][0] = v79;
              y = this->m_vecPanelNormalWs.y;
              this->m_matPanelTransform.m_flMatVal[1][1] = vecUpb;
              this->m_matPanelTransform.m_flMatVal[1][2] = y;
              v81 = in1[0].m_flMatVal[0][2];
              this->m_matPanelTransform.m_flMatVal[1][3] = v86;
              this->m_matPanelTransform.m_flMatVal[2][0] = v81;
              z = this->m_vecPanelNormalWs.z;
              this->m_matPanelTransform.m_flMatVal[2][3] = v89;
              this->m_matPanelTransform.m_flMatVal[2][2] = z;
              this->m_matPanelTransform.m_flMatVal[2][1] = v77;
              v83 = CBaseEntity::EntityToWorldTransform(this);
              MatrixInvert(v83, &out);
              ConcatTransforms(&out, &this->m_matPanelTransform, in1);
              this->m_matPanelTransform = in1[0];
            }
          }
        }
      }
    }
  }
  *&out.m_flMatVal[0][0] = this->m_szDamagePositioningEntityName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &out, this, 0, 0, 0);
  if ( EntityByName != 0 && (v25 = EntityByName->m_pEntity) != 0 )
  {
    v26 = (v25->m_EHandle.m_Index >> 15) - (v25->m_flags & 1);
    v27 = 0x7FFF;
    if ( v25->m_EHandle.m_Index != -1 )
      v27 = v25->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDamagePositioningEntity.m_Index) = v27 | this->m_hDamagePositioningEntity.m_Index & 0x8000;
    this->m_hDamagePositioningEntity.m_Index = (v26 << 15) | this->m_hDamagePositioningEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDamagePositioningEntity.m_Index = -1;
  }
  CFuncShatterglass::Init(this);
  if ( this->m_bStartBroken )
    CFuncShatterglass::InputHit(this);
  CBaseEntity::AddEffects(this, 32);
}


// CFuncShatterglass::SliceVoronoiFragVerts  (line 2360, @0x00000000022387c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<ShatterEdgeSegment_t>, CrossProduct, Dot, DotProduct2D, Element, FastSqrt, GrowMemory, InsertAfter, InsertBefore, Length, Lerp<Vector2D>, NormalizeInPlace, Normalized, Purge, RemoveAll, ShatterEdgeSegment_t, Vector2D, Vector2DAdd, Vector2DCopy, Vector2DLength, Vector2DMultiply, Vector2DNormalize, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator/=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<ShatterEdgeSegment_t, int>::Grow, VectorNormalize, CShatterGlassShard::GetLineIntersectionPoint, CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::GrowVector, CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ShiftElementsRight, CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Remove, CUtlMemory<ShatterEdgeSegment_t, int>::Purge, CUtlVectorBase<ShatterEdgeSegment_t, CUtlMemory<ShatterEdgeSegment_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CFuncShatterglass::Init
__int64 __fastcall CFuncShatterglass::SliceVoronoiFragVerts(
        CFuncShatterglass *const this,
        CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > *const vecFragVerts,
        Vector2D vecCenter,
        Vector2D vecRemote,
        float *a5,
        float *a6)
{
  int m_nAllocationCount; // edi
  __int64 v9; // r12
  __int64 v10; // rbx
  int m_Size; // eax
  __int64 v12; // r12
  bool v13; // zf
  ShatterEdgeSegment_t *v14; // r12
  Vector2D *m_pMemory; // rdx
  Vector2D *v16; // rsi
  bool v17; // cc
  __int64 v18; // rax
  float *v19; // rax
  float v20; // xmm5_4
  float v21; // xmm4_4
  int v22; // eax
  float v23; // xmm1_4
  vec_t v24; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  int v28; // r15d
  int v29; // eax
  Vector2D v30; // xmm2_8
  float v31; // xmm0_4
  __int64 v33; // r12
  __int64 v34; // rbx
  vec_t v35; // xmm0_4
  char *v36; // rax
  unsigned int v37; // ebx
  float v38; // xmm4_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  int v43; // ebx
  float v44; // xmm6_4
  __int64 v45; // r12
  Vector2D *v46; // rax
  float v47; // xmm1_4
  float v48; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  int v52; // esi
  bool bInsertedPoints; // [rsp+17h] [rbp-D9h]
  float x; // [rsp+18h] [rbp-D8h]
  float v57; // [rsp+1Ch] [rbp-D4h]
  vec_t vecSlicePointB; // [rsp+40h] [rbp-B0h]
  float vecSlicePointBa; // [rsp+40h] [rbp-B0h]
  vec_t vecSlicePointB_4; // [rsp+44h] [rbp-ACh]
  float vecSlicePointB_4a; // [rsp+44h] [rbp-ACh]
  float vecSlicePointB_4b; // [rsp+44h] [rbp-ACh]
  vec_t y; // [rsp+48h] [rbp-A8h]
  float v64; // [rsp+48h] [rbp-A8h]
  float v65; // [rsp+48h] [rbp-A8h]
  Vector2D vecPt; // [rsp+4Ch] [rbp-A4h] BYREF
  int v67; // [rsp+54h] [rbp-9Ch]
  Vector2D m_V1; // [rsp+60h] [rbp-90h] BYREF
  float v69[4]; // [rsp+70h] [rbp-80h] BYREF
  float v70[4]; // [rsp+80h] [rbp-70h] BYREF
  Vector vec; // [rsp+90h] [rbp-60h] BYREF
  CUtlVector<ShatterEdgeSegment_t,CUtlMemory<ShatterEdgeSegment_t,int> > vecSegments; // [rsp+A0h] [rbp-50h] BYREF
  Vector2D v73; // 0:xmm1_8.8
  Vector2D v74; // 0:xmm3_8.8

  m_nAllocationCount = 0;
  v9 = 0;
  v10 = 0;
  m_Size = vecFragVerts->m_Size;
  vecSegments.m_Size = 0;
  vecSegments.m_Memory.m_pMemory = 0;
  vecSegments.m_Memory.m_nAllocationCount = 0;
  vecSegments.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    while ( 1 )
    {
      m_pMemory = vecFragVerts->m_Memory.m_pMemory;
      v16 = &m_pMemory[v10];
      v17 = m_Size - 1 <= v10;
      v18 = 8 * v10 + 8;
      if ( v17 )
        v18 = 0;
      vecPt.x = v16->x;
      v19 = (m_pMemory + v18);
      y = v16->y;
      v20 = *v19;
      v21 = v19[1];
      v22 = v9;
      vecSlicePointB_4 = v20;
      vecSlicePointB = v21;
      if ( v9 == m_nAllocationCount )
      {
        CUtlMemory<ShatterEdgeSegment_t,int>::Grow(&vecSegments.m_Memory, 1);
        v22 = vecSegments.m_Size;
      }
      v12 = v9;
      v13 = &vecSegments.m_Memory.m_pMemory[v12] == 0;
      v14 = &vecSegments.m_Memory.m_pMemory[v12];
      vecSegments.m_Size = v22 + 1;
      if ( !v13 )
      {
        v14->m_V1.x = vecPt.x;
        v14->m_V1.y = y;
        v14->m_V2.x = vecSlicePointB_4;
        v14->m_V2.y = vecSlicePointB;
      }
      m_Size = vecFragVerts->m_Size;
      if ( vecFragVerts->m_Size <= ++v10 )
        break;
      v9 = vecSegments.m_Size;
      m_nAllocationCount = vecSegments.m_Memory.m_nAllocationCount;
    }
  }
  v23 = *a6;
  vec.z = 0.0;
  v24 = a6[1] - a5[1];
  vec.x = v23 - *a5;
  vec.y = v24;
  VectorNormalize(&vec);
  v73.y = 0.0;
  v26 = *a6;
  v30 = *(a5 + 1);
  v27 = a6[1] - v30.x;
  v28 = vecSegments.m_Size;
  v29 = vecSegments.m_Size - 1;
  v30.x = v30.x + (0.5 * v27);
  v57 = *a5 + ((v26 - *a5) * 0.5);
  x = v30.x;
  v31 = (vec.y - (0.0 * vec.z)) * 9999.0;
  v73.x = ((0.0 * vec.z) - vec.x) * 9999.0;
  vecPt.x = v57 + v31;
  v64 = v30.x + v73.x;
  v74.y = 0.0;
  v74.x = v30.x - v73.x;
  vecSlicePointB_4a = v57 - v31;
  vecSlicePointBa = v30.x - v73.x;
  if ( vecSegments.m_Size - 1 < 0 )
  {
    v37 = 0;
  }
  else
  {
    bInsertedPoints = 0;
    v33 = 8LL * v29 + 8;
    v34 = v29;
    do
    {
      while ( 1 )
      {
        vec.x = vecSlicePointB_4a;
        vec.y = vecSlicePointBa;
        v35 = vecSegments.m_Memory.m_pMemory[v34].m_V2.x;
        v70[0] = vecPt.x;
        v70[1] = v64;
        v69[0] = v35;
        v69[1] = vecSegments.m_Memory.m_pMemory[v34].m_V2.y;
        m_V1 = vecSegments.m_Memory.m_pMemory[v34].m_V1;
        if ( CShatterGlassShard::GetLineIntersectionPoint(
               LODWORD(m_V1.y),
               v73,
               v30,
               v74,
               &m_V1,
               v69,
               v70,
               &vec.x,
               &vecPt.y) )
        {
          break;
        }
        --v34;
        v33 -= 8;
        if ( --v28 == 0 )
          goto LABEL_17;
      }
      CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::GrowVector(vecFragVerts, 1);
      CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::ShiftElementsRight(vecFragVerts, v28, 1);
      v36 = vecFragVerts->m_Memory.m_pMemory + v33;
      *v36 = vecPt.y;
      *(v36 + 1) = v67;
      if ( bInsertedPoints )
        goto LABEL_18;
      --v34;
      v33 -= 8;
      --v28;
      bInsertedPoints = 1;
    }
    while ( v28 != 0 );
LABEL_17:
    v37 = 0;
    if ( !bInsertedPoints )
      goto LABEL_28;
LABEL_18:
    v38 = *a5 - v57;
    v39 = a5[1] - x;
    v40 = fsqrt((v38 * v38) + (v39 * v39));
    if ( v40 == 0.0 )
    {
      v42 = 0.0;
      v41 = 0.0;
    }
    else
    {
      v41 = v38 * (1.0 / v40);
      v42 = (1.0 / v40) * v39;
    }
    v43 = vecFragVerts->m_Size - 1;
    if ( v43 >= 0 )
    {
      v44 = -0.0099999998;
      v45 = v43;
      do
      {
        while ( 1 )
        {
          v46 = &vecFragVerts->m_Memory.m_pMemory[v45];
          v47 = v46->x - v57;
          v48 = v46->y - x;
          v49 = fsqrt((v47 * v47) + (v48 * v48));
          if ( v49 == 0.0 )
          {
            v51 = 0.0;
            v50 = 0.0;
          }
          else
          {
            v50 = v47 * (1.0 / v49);
            v51 = v48 * (1.0 / v49);
          }
          if ( v44 > ((v50 * v41) + (v51 * v42)) )
            break;
          --v43;
          --v45;
          if ( v43 == -1 )
            goto LABEL_27;
        }
        v52 = v43--;
        vecSlicePointB_4b = v44;
        --v45;
        v65 = v42;
        vecPt.x = v41;
        CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::Remove(vecFragVerts, v52);
        v44 = vecSlicePointB_4b;
        v42 = v65;
        v41 = vecPt.x;
      }
      while ( v43 != -1 );
    }
LABEL_27:
    v37 = 1;
  }
LABEL_28:
  vecSegments.m_Size = 0;
  if ( (vecSegments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<ShatterEdgeSegment_t,int>::Purge(&vecSegments.m_Memory);
    if ( (vecSegments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ShatterEdgeSegment_t,int>::Purge(&vecSegments.m_Memory);
  }
  return v37;
}


// CFuncShatterglass::Init  (line 2418, @0x00000000022437d0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<Vector2D>, Element, GetFloat, GrowMemory, Purge, RemoveAll, SetIsBroken, Vector2D, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CFuncShatterglass::PurgeAll, CFuncShatterglass::CreateNewShard, CShatterGlassShard::AddVertex, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CGlobalVarsBase::curtime, CFuncShatterglass::GlassThink, CUniformRandomStream::SetSeed(int), CUniformRandomStream::RandomFloat(float,float), CShatterGlassShard::FreezeInPlace, CUtlMemory<Vector2D, int>::Grow, CFuncShatterglass::SliceVoronoiFragVerts, CShatterGlassShard::GetIsNeighborOf (15 total)
// callers: CFuncShatterglass::StartRestore, CFuncShatterglass::InputRestore, CFuncShatterglass::RestoreThink, CFuncShatterglass::OnRestore, CFuncShatterglass::Spawn
// globals: g_nShatterGlassShardGlobal, g_ShatterGlassRandom
void __fastcall CFuncShatterglass::Init(CFuncShatterglass *const this)
{
  bool v2; // zf
  CShatterGlassShard *NewShard; // r12
  int v4; // xmm2_4
  int v5; // xmm1_4
  int v6; // xmm2_4
  int v7; // xmm0_4
  ConVar *m_pParent; // rax
  __m128i v9; // xmm3
  __m128i v10; // xmm6
  float v11; // r12d
  float v12; // r15d
  bool v13; // cf
  float v14; // xmm0_4
  float v15; // xmm0_4
  float x; // xmm1_4
  float v17; // xmm3_4
  float y; // xmm0_4
  __int64 m_Size; // r13
  int v20; // eax
  Vector2D *v21; // rax
  int v22; // r15d
  vec_t v23; // r13d
  float v24; // xmm7_4
  float v25; // xmm3_4
  __m128i v26; // xmm7
  vec_t v27; // r13d
  int v29; // r12d
  Vector2D *m_pMemory; // rax
  int v31; // eax
  int v32; // r13d
  Vector2D *v33; // rax
  int v34; // eax
  int v35; // r12d
  Vector2D *v36; // rax
  int v37; // eax
  __m128i v38; // xmm7
  int v39; // r13d
  Vector2D *v40; // rax
  __int64 v41; // r13
  int i; // r12d
  __int64 v43; // r13
  int v44; // r12d
  __int64 v45; // r15
  int v46; // r14d
  __int64 v47; // r13
  int v48; // r12d
  int v49; // eax
  float flHalfPointsX; // [rsp+4h] [rbp-DCh]
  float flHoriz; // [rsp+14h] [rbp-CCh]
  float v52; // [rsp+18h] [rbp-C8h]
  float v53; // [rsp+24h] [rbp-BCh]
  float v54; // [rsp+24h] [rbp-BCh]
  float flHalfPointsY; // [rsp+28h] [rbp-B8h]
  float flVert_0; // [rsp+30h] [rbp-B0h]
  __int64 flVert_0a; // [rsp+30h] [rbp-B0h]
  float vecFragVerts; // [rsp+40h] [rbp-A0h]
  float vecNew; // [rsp+48h] [rbp-98h]
  float vecNewa; // [rsp+48h] [rbp-98h]
  float vecNewb; // [rsp+48h] [rbp-98h]
  float vecNewc; // [rsp+48h] [rbp-98h]
  float vecNewd; // [rsp+48h] [rbp-98h]
  CShatterGlassShard *vecNewe; // [rsp+48h] [rbp-98h]
  Vector2D v65; // [rsp+50h] [rbp-90h] BYREF
  Vector2D v66[2]; // [rsp+60h] [rbp-80h] BYREF
  CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > vecVoronoiPoints; // [rsp+70h] [rbp-70h] BYREF
  CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > vecFrag; // [rsp+90h] [rbp-50h] BYREF
  Vector2D v69; // 0:xmm1_8.8

  CFuncShatterglass::PurgeAll(this);
  v2 = this->m_iSurfaceType == 1;
  this->m_bBroken = 0;
  if ( v2 )
  {
    m_pParent = shatterglass_voronoi_size.m_pParent;
    this->m_ShatterPanelMode = ShatterPanelMode::SHATTER_DRYWALL;
    vecFragVerts = m_pParent->m_Value.m_fValue;
  }
  else
  {
    vecFragVerts = shatterglass_voronoi_size.m_pParent->m_Value.m_fValue;
    if ( this->m_ShatterPanelMode != ShatterPanelMode::SHATTER_DRYWALL )
      goto LABEL_3;
  }
  if ( this->m_PanelSize.x <= vecFragVerts || this->m_PanelSize.y <= vecFragVerts )
  {
LABEL_3:
    NewShard = CFuncShatterglass::CreateNewShard(this, 0);
    *&v4 = -this->m_PanelSize.x * 0.5;
    *(&vecFrag.m_Size + 1) = -this->m_PanelSize.y * 0.5;
    vecFrag.m_Size = v4;
    CShatterGlassShard::AddVertex(NewShard, 1056964608LL, &vecFrag.m_Size);
    *&v5 = -this->m_PanelSize.x * 0.5;
    *(&vecFrag.m_Size + 1) = this->m_PanelSize.y * 0.5;
    vecFrag.m_Size = v5;
    CShatterGlassShard::AddVertex(NewShard, 1056964608LL, &vecFrag.m_Size);
    *&v6 = this->m_PanelSize.x * 0.5;
    *(&vecFrag.m_Size + 1) = this->m_PanelSize.y * 0.5;
    vecFrag.m_Size = v6;
    CShatterGlassShard::AddVertex(NewShard, 1056964608LL, &vecFrag.m_Size);
    *&v7 = 0.5 * this->m_PanelSize.x;
    *(&vecFrag.m_Size + 1) = -this->m_PanelSize.y * 0.5;
    vecFrag.m_Size = v7;
    CShatterGlassShard::AddVertex(NewShard, 1056964608LL, &vecFrag.m_Size);
    if ( CShatterGlassShard::GenerateProceduralShatterGlassShardModel(NewShard)
      && NewShard != 0
      && this->m_bGlassInFrame )
    {
      CShatterGlassShard::FreezeInPlace(NewShard);
    }
    goto LABEL_7;
  }
  vecVoronoiPoints.m_Size = 0;
  vecVoronoiPoints.m_Memory.m_pMemory = 0;
  vecVoronoiPoints.m_Memory.m_nAllocationCount = 0;
  vecVoronoiPoints.m_Memory.m_nGrowSize = 0;
  CUniformRandomStream::SetSeed(&g_ShatterGlassRandom, g_nShatterGlassShardGlobal);
  flHalfPointsX = 0.5 * ((this->m_PanelSize.x / vecFragVerts) * vecFragVerts);
  flHalfPointsY = 0.5 * ((this->m_PanelSize.y / vecFragVerts) * vecFragVerts);
  flHoriz = -flHalfPointsX;
  if ( flHalfPointsX >= -flHalfPointsX )
  {
    do
    {
      if ( flHalfPointsY >= -flHalfPointsY )
      {
        v9 = 0x3EFAE148u;
        *v9.m128i_i32 = 0.49000001 * vecFragVerts;
        v10 = 0xBEFAE148;
        *v10.m128i_i32 = -0.49000001 * vecFragVerts;
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
        flVert_0 = -flHalfPointsY;
        v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
        do
        {
          CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, v12, v11);
          vecNew = (flHoriz + (0.25 * vecFragVerts)) + v14;
          CUniformRandomStream::RandomFloat(&g_ShatterGlassRandom, v12, v11);
          x = this->m_PanelSize.x;
          if ( (0.49000001 * x) > vecNew && vecNew > (-x * 0.49000001) )
          {
            v17 = v15 + (flVert_0 + (0.25 * vecFragVerts));
            v52 = v17;
            y = this->m_PanelSize.y;
            if ( (0.49000001 * y) > v17 && v17 > (-y * 0.49000001) )
            {
              m_Size = vecVoronoiPoints.m_Size;
              v20 = vecVoronoiPoints.m_Size;
              if ( vecVoronoiPoints.m_Size == vecVoronoiPoints.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<Vector2D,int>::Grow(&vecVoronoiPoints.m_Memory, 1);
                v20 = vecVoronoiPoints.m_Size;
              }
              vecVoronoiPoints.m_Size = v20 + 1;
              v21 = &vecVoronoiPoints.m_Memory.m_pMemory[m_Size];
              if ( v21 != 0 )
              {
                v21->x = vecNew;
                v21->y = v52;
              }
            }
          }
          v13 = flHalfPointsY < (flVert_0 + vecFragVerts);
          flVert_0 = flVert_0 + vecFragVerts;
        }
        while ( !v13 );
      }
      v13 = flHalfPointsX < (flHoriz + vecFragVerts);
      flHoriz = flHoriz + vecFragVerts;
    }
    while ( !v13 );
  }
  if ( vecVoronoiPoints.m_Size > 0 )
  {
    v22 = 0;
    flVert_0a = 0;
    do
    {
      v23 = this->m_PanelSize.x;
      vecFrag.m_Size = 0;
      v24 = this->m_PanelSize.y;
      vecFrag.m_Memory.m_pMemory = 0;
      vecFrag.m_Memory.m_nAllocationCount = 0;
      vecFrag.m_Memory.m_nGrowSize = 0;
      v25 = 0.5 * -v24;
      v26 = _mm_cvtsi32_si128(LODWORD(v23) ^ 0x80000000);
      *v26.m128i_i32 = *v26.m128i_i32 * 0.5;
      vecNewa = v25;
      v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
      CUtlMemory<Vector2D,int>::Grow(&vecFrag.m_Memory, 1);
      v29 = vecFrag.m_Size + 1;
      m_pMemory = vecFrag.m_Memory.m_pMemory;
      ++vecFrag.m_Size;
      if ( vecFrag.m_Memory.m_pMemory != 0 )
      {
        vecFrag.m_Memory.m_pMemory->x = v27;
        m_pMemory->y = vecNewa;
        v29 = vecFrag.m_Size;
      }
      v31 = v29;
      vecNewb = 0.5 * this->m_PanelSize.y;
      v53 = 0.5 * -this->m_PanelSize.x;
      if ( vecFrag.m_Memory.m_nAllocationCount == v29 )
      {
        CUtlMemory<Vector2D,int>::Grow(&vecFrag.m_Memory, 1);
        v31 = vecFrag.m_Size;
      }
      v32 = v31 + 1;
      vecFrag.m_Size = v31 + 1;
      v33 = &vecFrag.m_Memory.m_pMemory[v29];
      if ( v33 != 0 )
      {
        v33->x = v53;
        v33->y = vecNewb;
        v32 = vecFrag.m_Size;
      }
      v34 = v32;
      vecNewc = 0.5 * this->m_PanelSize.y;
      v54 = 0.5 * this->m_PanelSize.x;
      if ( v32 == vecFrag.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector2D,int>::Grow(&vecFrag.m_Memory, 1);
        v34 = vecFrag.m_Size;
      }
      v35 = v34 + 1;
      vecFrag.m_Size = v34 + 1;
      v36 = &vecFrag.m_Memory.m_pMemory[v32];
      if ( v36 != 0 )
      {
        v36->x = v54;
        v36->y = vecNewc;
        v35 = vecFrag.m_Size;
      }
      v37 = v35;
      v38 = 0x3F000000u;
      *v38.m128i_i32 = 0.5 * this->m_PanelSize.x;
      vecNewd = 0.5 * -this->m_PanelSize.y;
      v39 = _mm_cvtsi128_si32(v38);
      if ( v35 == vecFrag.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector2D,int>::Grow(&vecFrag.m_Memory, 1);
        v37 = vecFrag.m_Size;
      }
      vecFrag.m_Size = v37 + 1;
      v40 = &vecFrag.m_Memory.m_pMemory[v35];
      if ( v40 != 0 )
      {
        LODWORD(v40->x) = v39;
        v40->y = vecNewd;
      }
      v41 = 0;
      for ( i = 0; vecVoronoiPoints.m_Size > i; ++v41 )
      {
        if ( v22 != i )
        {
          v66[0] = vecVoronoiPoints.m_Memory.m_pMemory[v41];
          v65 = vecVoronoiPoints.m_Memory.m_pMemory[flVert_0a];
          CFuncShatterglass::SliceVoronoiFragVerts(this, &vecFrag, LODWORD(v65.y), v69, &v65, v66);
        }
        ++i;
      }
      v43 = 0;
      v44 = 0;
      for ( vecNewe = CFuncShatterglass::CreateNewShard(this, 0); vecFrag.m_Size > v44; ++v43 )
      {
        v66[0] = vecFrag.m_Memory.m_pMemory[v43];
        CShatterGlassShard::AddVertex(vecNewe, LODWORD(v66[0].y), v66);
        ++v44;
      }
      if ( CShatterGlassShard::GenerateProceduralShatterGlassShardModel(vecNewe)
        && vecNewe != 0
        && this->m_bGlassInFrame )
      {
        CShatterGlassShard::FreezeInPlace(vecNewe);
      }
      vecFrag.m_Size = 0;
      if ( (vecFrag.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector2D,int>::Purge(&vecFrag.m_Memory);
        if ( (vecFrag.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Vector2D,int>::Purge(&vecFrag.m_Memory);
      }
      ++flVert_0a;
      ++v22;
    }
    while ( vecVoronoiPoints.m_Size > v22 );
  }
  v45 = 0;
  v46 = 0;
  if ( this->m_vecShatterGlassShards.m_Size > 0 )
  {
    do
    {
      v47 = 0;
      v48 = 0;
      do
      {
        if ( v46 < v48 )
          CShatterGlassShard::GetIsNeighborOf(
            this->m_vecShatterGlassShards.m_Memory.m_pMemory[v45],
            this->m_vecShatterGlassShards.m_Memory.m_pMemory[v47],
            1);
        v49 = this->m_vecShatterGlassShards.m_Size;
        ++v48;
        ++v47;
      }
      while ( v49 > v48 );
      ++v46;
      ++v45;
    }
    while ( v49 > v46 && v49 > 0 );
  }
  CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::~CUtlVectorBase(&vecVoronoiPoints);
LABEL_7:
  this->m_flInitAtTime = CGlobalVarsBase::curtime(gpGlobals, 0);
  CFuncShatterglass::GlassThink(this);
}


// CFuncShatterglass::IncrementShardsCreatedRecently  (line 2542, @0x000000000222efb0, libserver.so)
// globals: g_nShatterGlassShardsCreatedRecentlyFrameRef, g_nShatterGlassShardsCreatedRecently
int __fastcall CFuncShatterglass::IncrementShardsCreatedRecently(CFuncShatterglass *const this, int nShards)
{
  int result; // eax

  if ( gpGlobals->framecount - g_nShatterGlassShardsCreatedRecentlyFrameRef > 24 )
  {
    g_nShatterGlassShardsCreatedRecentlyFrameRef = gpGlobals->framecount;
    g_nShatterGlassShardsCreatedRecently = nShards;
    return nShards;
  }
  else
  {
    result = nShards + g_nShatterGlassShardsCreatedRecently;
    g_nShatterGlassShardsCreatedRecently += nShards;
  }
  return result;
}


// CFuncShatterglass::OutputOnBroken  (line 2558, @0x0000000002232190, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CFuncShatterglass::OutputOnBroken(CFuncShatterglass *const this, CBaseEntity *pEntityHittingMe)
{
  CVariant v2; // [rsp-28h] [rbp-28h] BYREF

  if ( !this->m_bBroken )
  {
    v2.m_flags = 0;
    v2.m_type = 0;
    v2.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnBroken, pEntityHittingMe, this, &v2, 0.0);
    if ( (v2.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2.m_uint64);
  }
}


// CFuncShatterglass::DetermineImpactStressTypeFromDamageCause  (line 2566, @0x000000000222eff0, libserver.so)
// globals: CSWTCH.11949
ShatterGlassStressType __fastcall CFuncShatterglass::DetermineImpactStressTypeFromDamageCause(
        CFuncShatterglass *const this,
        ShatterDamageCause damageCause)
{
  ShatterGlassStressType result; // eax

  result = ShatterGlassStressType::SHATTERDRYWALL_CHUNKS;
  if ( this->m_ShatterPanelMode != ShatterPanelMode::SHATTER_DRYWALL )
  {
    LOBYTE(result) = 0;
    if ( damageCause <= ShatterDamageCause::SHATTERDAMAGE_SCRIPT )
      return CSWTCH_11949[damageCause];
  }
  return result;
}


// CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame  (line 2589, @0x0000000002238430, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CShatterGlassShard*>, Element, GrowMemory, operator[], ~CUtlVector
// calls: CShatterGlassShard::IsFrozen, CShatterGlassShard::IsOnFrameEdge, CShatterGlassShard::GetIsNeighborOf, CUtlVectorBase<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >::Remove, CShatterGlassShard::UnFreeze, CUtlVectorBase<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >::~CUtlVectorBase, CUtlMemory<CShatterGlassShard*, int>::Grow, _Unwind_Resume
// callers: CShatterGlassShard::TakeDamage
void __fastcall CFuncShatterglass::UnfreezeAllShardsThatCantFindLinkageToFrame(CFuncShatterglass *const this)
{
  int m_Size; // eax
  __int64 v3; // rbx
  int v4; // r12d
  CShatterGlassShard *v5; // rdi
  __int64 v6; // r15
  int v7; // eax
  CShatterGlassShard **v8; // rax
  __int64 v9; // r15
  int v10; // eax
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // rbx
  int v15; // r12d
  __int64 v16; // rbx
  CShatterGlassShard **v17; // r12
  int v18; // eax
  CShatterGlassShard **v19; // rax
  __int64 v20; // r12
  int v21; // ebx
  int v22; // [rsp+8h] [rbp-88h]
  CUtlMemory<CShatterGlassShard*,int> *v23; // [rsp+10h] [rbp-80h]
  CUtlVector<CShatterGlassShard*,CUtlMemory<CShatterGlassShard*,int> > pAnchored; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<CShatterGlassShard*,CUtlMemory<CShatterGlassShard*,int> > pUnFreezeCandidates; // [rsp+40h] [rbp-50h] BYREF

  if ( this->m_ShatterPanelMode != ShatterPanelMode::SHATTER_DRYWALL )
    return;
  m_Size = this->m_vecShatterGlassShards.m_Size;
  pAnchored.m_Size = 0;
  pAnchored.m_Memory.m_pMemory = 0;
  pAnchored.m_Memory.m_nAllocationCount = 0;
  pAnchored.m_Memory.m_nGrowSize = 0;
  pUnFreezeCandidates.m_Size = 0;
  pUnFreezeCandidates.m_Memory.m_pMemory = 0;
  pUnFreezeCandidates.m_Memory.m_nAllocationCount = 0;
  pUnFreezeCandidates.m_Memory.m_nGrowSize = 0;
  if ( m_Size <= 0 )
  {
    v11 = 0;
    goto LABEL_17;
  }
  v3 = 0;
  v4 = 0;
  do
  {
    if ( CShatterGlassShard::IsFrozen(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v3]) )
    {
      v5 = this->m_vecShatterGlassShards.m_Memory.m_pMemory[v3];
      if ( !v5->m_bFlaggedForRemoval )
      {
        if ( CShatterGlassShard::IsOnFrameEdge(v5) )
        {
          v6 = pAnchored.m_Size;
          v23 = &this->m_vecShatterGlassShards.m_Memory.m_pMemory[v3];
          v7 = pAnchored.m_Size;
          if ( pAnchored.m_Size == pAnchored.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CShatterGlassShard *,int>::Grow(&pAnchored.m_Memory, 1);
            v7 = pAnchored.m_Size;
          }
          pAnchored.m_Size = v7 + 1;
          v8 = &pAnchored.m_Memory.m_pMemory[v6];
          if ( v8 != 0 )
            goto LABEL_11;
        }
        else
        {
          v9 = pUnFreezeCandidates.m_Size;
          v23 = &this->m_vecShatterGlassShards.m_Memory.m_pMemory[v3];
          v10 = pUnFreezeCandidates.m_Size;
          if ( pUnFreezeCandidates.m_Size == pUnFreezeCandidates.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CShatterGlassShard *,int>::Grow(&pUnFreezeCandidates.m_Memory, 1);
            v10 = pUnFreezeCandidates.m_Size;
          }
          pUnFreezeCandidates.m_Size = v10 + 1;
          v8 = &pUnFreezeCandidates.m_Memory.m_pMemory[v9];
          if ( v8 != 0 )
LABEL_11:
            *v8 = v23->m_pMemory;
        }
      }
    }
    ++v4;
    ++v3;
  }
  while ( this->m_vecShatterGlassShards.m_Size > v4 );
  v11 = pUnFreezeCandidates.m_Size;
LABEL_17:
  v22 = 4;
  while ( v11 != 0 )
  {
    v12 = v11 - 1;
    if ( v11 - 1 >= 0 )
    {
      v13 = v12;
      do
      {
        if ( pAnchored.m_Size > 0 )
        {
          v14 = 0;
          v15 = 0;
          while ( !CShatterGlassShard::GetIsNeighborOf(
                     pUnFreezeCandidates.m_Memory.m_pMemory[v13],
                     pAnchored.m_Memory.m_pMemory[v14],
                     0) )
          {
            ++v15;
            ++v14;
            if ( pAnchored.m_Size <= v15 )
              goto LABEL_30;
          }
          v16 = pAnchored.m_Size;
          v17 = &pUnFreezeCandidates.m_Memory.m_pMemory[v13];
          v18 = pAnchored.m_Size;
          if ( pAnchored.m_Size == pAnchored.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CShatterGlassShard *,int>::Grow(&pAnchored.m_Memory, 1);
            v18 = pAnchored.m_Size;
          }
          pAnchored.m_Size = v18 + 1;
          v19 = &pAnchored.m_Memory.m_pMemory[v16];
          if ( v19 != 0 )
            *v19 = *v17;
          CUtlVectorBase<CShatterGlassShard *,CUtlMemory<CShatterGlassShard *,int>>::Remove(&pUnFreezeCandidates, v12);
        }
LABEL_30:
        --v12;
        --v13;
      }
      while ( v12 != -1 );
      v11 = pUnFreezeCandidates.m_Size;
    }
    if ( --v22 == 0 )
    {
      v20 = 0;
      v21 = 0;
      if ( v11 > 0 )
      {
        do
        {
          CShatterGlassShard::UnFreeze(pUnFreezeCandidates.m_Memory.m_pMemory[v20]);
          ++v21;
          ++v20;
        }
        while ( pUnFreezeCandidates.m_Size > v21 );
      }
      break;
    }
  }
  CUtlVectorBase<CShatterGlassShard *,CUtlMemory<CShatterGlassShard *,int>>::~CUtlVectorBase(&pUnFreezeCandidates);
  CUtlVectorBase<CShatterGlassShard *,CUtlMemory<CShatterGlassShard *,int>>::~CUtlVectorBase(&pAnchored);
}


// CFuncShatterglass::Precache  (line 2649, @0x000000000223cce0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues, CBaseEntity::PrecacheScriptSound, PrecacheMaterial
// strings: "Phys.GlassBreakLg", "Phys.GlassBreakMd", "Phys.GlassBreakSm", "materials/glass/shatterglass.vmat", "materials/glass/shatterglass_undamaged.vmat", "materials/concrete/damage/concrete_damage_face.vmat" (8 total)
void __fastcall CFuncShatterglass::Precache(CFuncShatterglass *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  CBaseEntity::PrecacheScriptSound("Phys.GlassBreakLg", pContext);
  CBaseEntity::PrecacheScriptSound("Phys.GlassBreakMd", pContext);
  CBaseEntity::PrecacheScriptSound("Phys.GlassBreakSm", pContext);
  PrecacheMaterial("materials/glass/shatterglass.vmat", pContext);
  PrecacheMaterial("materials/glass/shatterglass_undamaged.vmat", pContext);
  PrecacheMaterial("materials/concrete/damage/concrete_damage_face.vmat", pContext);
  PrecacheMaterial("materials/concrete/damage/concrete_damage_edgecaps.vmat", pContext);
  PrecacheMaterial("materials/concrete/damage/concrete_damage_edgefins.vmat", pContext);
}


// CFuncShatterglass::GlassThink  (line 2666, @0x00000000022434c0, libserver.so)  // inlines: AddToTail, CopyConstruct<CShatterGlassShard*>, Element, GetBool, GetFloat, GetInt, GetStressPositionA, GrowMemory, IncrementShardsCreatedRecently, Vector2D, curtime, operator[]
// calls: CShatterGlassShard::Shatter, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CShatterGlassShard::IsFrozen, CShatterGlassShard::IsEligibleToDeSpawn, CUtlVectorBase<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >::Remove, CShatterGlassShard::FlagForRemoval, CUtlMemory<CShatterGlassShard*, int>::Grow
// callers: CFuncShatterglass::Init
// globals: g_nShatterGlassShardsCreatedRecentlyFrameRef, g_nShatterGlassShardsCreatedRecently, CFuncShatterglass::GlassThink(void)
void __fastcall CFuncShatterglass::GlassThink(CFuncShatterglass *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  CShatterGlassShard **m_pMemory; // rdx
  CShatterGlassShard *v9; // rax
  CGlobalVars *v10; // rax
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  double v12; // xmm0_8
  int v13; // r12d
  float v14; // xmm0_4
  int m_Size; // ebx
  float v16; // xmm0_4
  int v17; // ebx
  __int64 v18; // r14
  CShatterGlassShard *v19; // rdi
  CShatterGlassShard **v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  CShatterGlassShard **v23; // rcx
  int v24; // [rsp+4h] [rbp-5Ch]
  CShatterGlassShard **v25; // [rsp+8h] [rbp-58h]
  vec_t x; // [rsp+20h] [rbp-40h] BYREF
  vec_t y; // [rsp+24h] [rbp-3Ch]

  if ( shatterglass_cleanup.m_pParent->m_Value.m_nValue != 0
    && (CGlobalVarsBase::curtime(gpGlobals, 0) - this->m_flLastCleanupTime) > 1.0 )
  {
    v13 = 0;
    v14 = CGlobalVarsBase::curtime(gpGlobals, 0);
    m_Size = this->m_vecShatterGlassShards.m_Size;
    this->m_flLastCleanupTime = v14;
    v16 = m_Size - shatterglass_cleanup_max.m_pParent->m_Value.m_fValue;
    if ( v16 > 0.0 )
      v13 = v16;
    v17 = m_Size - 1;
    v18 = v17;
    if ( v17 >= 0 )
    {
      do
      {
        v20 = &this->m_vecShatterGlassShards.m_Memory.m_pMemory[v18];
        v19 = *v20;
        if ( (*v20)->m_bFlaggedForRemoval )
        {
          v21 = this->m_vecShatterGlassShardsToDelete.m_Size;
          v22 = this->m_vecShatterGlassShardsToDelete.m_Size;
          if ( v21 == this->m_vecShatterGlassShardsToDelete.m_Memory.m_nAllocationCount )
          {
            v24 = this->m_vecShatterGlassShardsToDelete.m_Size;
            v25 = &this->m_vecShatterGlassShards.m_Memory.m_pMemory[v18];
            CUtlMemory<CShatterGlassShard *,int>::Grow(&this->m_vecShatterGlassShardsToDelete.m_Memory, 1);
            v22 = this->m_vecShatterGlassShardsToDelete.m_Size;
            v21 = v24;
            v20 = v25;
          }
          this->m_vecShatterGlassShardsToDelete.m_Size = v22 + 1;
          v23 = &this->m_vecShatterGlassShardsToDelete.m_Memory.m_pMemory[v21];
          if ( v23 != 0 )
            *v23 = *v20;
          CUtlVectorBase<CShatterGlassShard *,CUtlMemory<CShatterGlassShard *,int>>::Remove(
            &this->m_vecShatterGlassShards,
            v17);
        }
        else
        {
          if ( v13 <= 0 )
            goto LABEL_29;
          if ( CShatterGlassShard::IsFrozen(v19) )
          {
            v19 = this->m_vecShatterGlassShards.m_Memory.m_pMemory[v18];
LABEL_29:
            if ( CShatterGlassShard::IsEligibleToDeSpawn(v19) )
              CShatterGlassShard::FlagForRemoval(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v18]);
            goto LABEL_31;
          }
          --v13;
          CShatterGlassShard::FlagForRemoval(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v18]);
        }
LABEL_31:
        --v17;
        --v18;
      }
      while ( v17 != -1 );
    }
  }
  v3 = gpGlobals;
  if ( !this->m_bHasRateLimitedShards )
    goto LABEL_11;
  if ( gpGlobals->framecount - g_nShatterGlassShardsCreatedRecentlyFrameRef > 24 )
  {
    g_nShatterGlassShardsCreatedRecentlyFrameRef = gpGlobals->framecount;
    g_nShatterGlassShardsCreatedRecently = 0;
    goto LABEL_5;
  }
  if ( g_nShatterGlassShardsCreatedRecently == 0 )
  {
LABEL_5:
    v4 = this->m_vecShatterGlassShards.m_Size;
    this->m_bHasRateLimitedShards = 0;
    v5 = v4 - 1;
    if ( v5 >= 0 )
    {
      v6 = 8LL * v5;
      v7 = 8 * (v5 - v5) - 8;
      m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
      do
      {
        v9 = m_pMemory[v6 / 8];
        if ( v9->m_bShatterRateLimited )
        {
          x = v9->m_vecPanelSpaceStressPositionA.x;
          y = v9->m_vecPanelSpaceStressPositionA.y;
          CShatterGlassShard::Shatter(m_pMemory[v6 / 8], LODWORD(y), &x);
          m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
          if ( m_pMemory[v6 / 8]->m_bShatterRateLimited )
            break;
        }
        v6 -= 8;
      }
      while ( v6 != v7 );
      v3 = gpGlobals;
    }
LABEL_11:
    if ( v3 != 0 )
      goto LABEL_12;
LABEL_20:
    v10 = 0;
    v12 = 0.0;
    goto LABEL_17;
  }
  if ( gpGlobals == 0 )
    goto LABEL_20;
LABEL_12:
  v10 = v3;
  if ( !v3->m_bEnableAssertions && !v3->m_bInSimulation )
  {
    m_pfnWarningFunc = v3->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
    {
      m_pfnWarningFunc(1);
      v10 = gpGlobals;
    }
    else
    {
      v10 = v3;
    }
  }
  *&v12 = LODWORD(v3->m_flCurrentTime);
LABEL_17:
  *&v12 = *&v12 + v10->interval_per_tick;
  CBaseEntity::SetNextThink(this, v12, v1, 0);
  CBaseEntity::ThinkSet(this, CFuncShatterglass::GlassThink, 0.0, 0, 0);
}


// CFuncShatterglass::InputHit  (line 2727, @0x0000000002243290, libserver.so)  // inlines: BreakLargestShard, DetermineImpactStressTypeFromDamageCause, DistTo, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWorldPositionAverage, IndexToIdentity, IsValid, Length, LookupEntity, SetStressType, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator[]
// calls: CFuncShatterglass::BreakLargestShard, CBaseEntity::GetAbsOrigin, CShatterGlassShard::GetPanelVertexAverage, CShatterGlassShard::LocalToWorldSpace, CShatterGlassShard::Shatter
// callers: CFuncShatterglass::InputHit, CFuncShatterglass::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncShatterglass::InputHit(CFuncShatterglass *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm6_4
  vec_t z; // xmm7_4
  int m_Size; // edx
  __int64 v9; // r12
  int v10; // ebx
  int v11; // xmm3_4
  CShatterGlassShard **m_pMemory; // rax
  CShatterGlassShard *v13; // r13
  unsigned __int64 v14; // xmm0_8
  float v15; // xmm1_4
  float v16; // xmm0_4
  bool v17; // zf
  CShatterGlassShard *v18; // rdx
  int v19; // [rsp+8h] [rbp-78h]
  float v20; // [rsp+Ch] [rbp-74h]
  double v21; // [rsp+10h] [rbp-70h]
  float flClosestDist; // [rsp+18h] [rbp-68h]
  Vector2D v23[2]; // [rsp+20h] [rbp-60h] BYREF
  Vector v24; // [rsp+30h] [rbp-50h]
  unsigned __int64 v25; // [rsp+40h] [rbp-40h]
  float v26; // [rsp+48h] [rbp-38h]
  Vector2D v27; // 0:xmm0_8.8

  m_Index = this->m_hDamagePositioningEntity.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDamagePositioningEntity.m_Index) >> 9)
                                                            & 0x3F]) != 0
    && (v4 = &v3[this->m_hDamagePositioningEntity.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4->m_pInstance);
    y = AbsOrigin->y;
    z = AbsOrigin->z;
    *&v21 = AbsOrigin->x;
    v24 = *AbsOrigin;
    *(&v21 + 1) = y;
    v20 = z;
    m_Size = this->m_vecShatterGlassShards.m_Size;
    if ( m_Size > 0 )
    {
      v9 = 0;
      v10 = 0;
      v19 = -1;
      *&v11 = -1.0;
      do
      {
        while ( 1 )
        {
          m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
          v13 = m_pMemory[v9];
          if ( !v13->m_bFlaggedForRemoval )
            break;
          ++v10;
          ++v9;
          if ( m_Size <= v10 )
            goto LABEL_18;
        }
        flClosestDist = *&v11;
        CShatterGlassShard::GetPanelVertexAverage(v23, m_pMemory[v9]);
        v14 = CShatterGlassShard::LocalToWorldSpace(v13, v27, v23).m128i_u64[0];
        *&v11 = flClosestDist;
        v25 = v14;
        v26 = v15;
        v16 = fsqrt(
                (((*&v14 - *&v21) * (*&v14 - *&v21)) + ((*(&v14 + 1) - *(&v21 + 1)) * (*(&v14 + 1) - *(&v21 + 1))))
              + ((v15 - v20) * (v15 - v20)));
        if ( flClosestDist < 0.0 || flClosestDist > v16 )
        {
          v19 = v10;
          *&v11 = v16;
        }
        m_Size = this->m_vecShatterGlassShards.m_Size;
        ++v10;
        ++v9;
      }
      while ( m_Size > v10 );
LABEL_18:
      if ( v19 != -1 )
      {
        v17 = this->m_ShatterPanelMode == ShatterPanelMode::SHATTER_DRYWALL;
        v18 = this->m_vecShatterGlassShards.m_Memory.m_pMemory[v19];
        *&v24.x = v21;
        v18->m_ShatterStressType = 3 * v17;
        CShatterGlassShard::Shatter(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v19], v21, v20);
        return;
      }
    }
    if ( m_Size != 0 )
LABEL_8:
      CFuncShatterglass::BreakLargestShard(this, ShatterDamageCause::SHATTERDAMAGE_MELEE, 1);
  }
  else if ( this->m_vecShatterGlassShards.m_Size != 0 )
  {
    goto LABEL_8;
  }
}


// CFuncShatterglass::BreakLargestShard  (line 2766, @0x0000000002242f50, libserver.so)  // inlines: DetermineImpactStressTypeFromDamageCause, Get, GetInstance, SetStressType, operator[]
// calls: CShatterGlassShard::IsFrozen, CShatterGlassShard::GetArea, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CShatterGlassShard::Shatter
// callers: CFuncShatterglass::BreakLargestShard, CFuncShatterglass::InputShatter, CFuncShatterglass::InputHit, CFuncShatterglass::OnRestore
// globals: CSWTCH.11949
void __fastcall CFuncShatterglass::BreakLargestShard(
        CFuncShatterglass *const this,
        ShatterDamageCause damageCause,
        bool bOnlyFrozen)
{
  __int64 v5; // rbx
  CShatterGlassShard **m_pMemory; // rax
  int v7; // r15d
  __int64 v8; // r14
  CShatterGlassShard *v9; // rdi
  __int64 v10; // rbx
  CShatterGlassShard *v11; // rdi
  int v12; // esi
  bool IsFrozen; // al
  float v14; // xmm0_4
  int v15; // edx
  const CBaseEntity *v16; // rax
  const Vector *AbsOrigin; // rax
  int v18; // [rsp+14h] [rbp-3Ch]
  float Area; // [rsp+18h] [rbp-38h]

  if ( this->m_vecShatterGlassShards.m_Size <= 0 )
    return;
  v5 = 0;
  while ( 1 )
  {
    m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
    v7 = v5;
    v8 = v5;
    v9 = m_pMemory[v5];
    if ( !v9->m_bFlaggedForRemoval && !v9->m_bShatterRateLimited )
    {
      if ( !bOnlyFrozen )
        goto LABEL_7;
      if ( CShatterGlassShard::IsFrozen(v9) )
        break;
    }
    if ( this->m_vecShatterGlassShards.m_Size <= ++v5 )
      return;
  }
  m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
LABEL_7:
  v10 = 0;
  if ( this->m_vecShatterGlassShards.m_Size > 1 )
  {
    do
    {
      v11 = m_pMemory[v10];
      v8 = v10;
      v12 = v10;
      if ( v11->m_bFlaggedForRemoval || v11->m_bShatterRateLimited )
      {
        v8 = v7;
      }
      else
      {
        if ( !bOnlyFrozen )
          goto LABEL_17;
        IsFrozen = CShatterGlassShard::IsFrozen(v11);
        v12 = v10;
        if ( IsFrozen )
        {
          m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
LABEL_17:
          v18 = v12;
          Area = CShatterGlassShard::GetArea(m_pMemory[v7]);
          v14 = CShatterGlassShard::GetArea(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v10]);
          m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
          if ( v14 <= Area )
            v8 = v7;
          else
            v7 = v18;
          goto LABEL_10;
        }
        m_pMemory = this->m_vecShatterGlassShards.m_Memory.m_pMemory;
        v8 = v7;
      }
LABEL_10:
      ++v10;
    }
    while ( this->m_vecShatterGlassShards.m_Size > v10 );
  }
  v15 = 3;
  if ( this->m_ShatterPanelMode != ShatterPanelMode::SHATTER_DRYWALL )
  {
    LOBYTE(v15) = 0;
    if ( damageCause <= ShatterDamageCause::SHATTERDAMAGE_SCRIPT )
      v15 = CSWTCH_11949[damageCause];
  }
  m_pMemory[v8]->m_ShatterStressType = v15;
  if ( this->m_bBroken || (v16 = CEntityHandle::operator CEntityInstance *(&this->m_hDamagePositioningEntity)) == 0 )
  {
    CShatterGlassShard::Shatter(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v8]);
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
    CShatterGlassShard::Shatter(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v8], *&AbsOrigin->x, AbsOrigin->z);
  }
}


// CFuncShatterglass::BreakLargestShard  (line 2766, @0x0000000002243180, libserver.so)
// calls: CFuncShatterglass::BreakLargestShard
void __fastcall CFuncShatterglass::BreakLargestShard(
        CFuncShatterglass *const this,
        ShatterDamageCause damageCause,
        bool bOnlyFrozen)
{
  if ( this->m_vecShatterGlassShards.m_Size != 0 )
    CFuncShatterglass::BreakLargestShard(this, damageCause, bOnlyFrozen);
}


// CFuncShatterglass::InputShatter  (line 2816, @0x00000000022431b0, libserver.so)  // inlines: BreakLargestShard
// calls: CFuncShatterglass::BreakLargestShard, CShatterGlassShard::IsTooSmallToShatter, CShatterGlassShard::UnFreeze
void __fastcall CFuncShatterglass::InputShatter(CFuncShatterglass *const this, inputdata_t *const data)
{
  int m_Size; // r13d
  int v4; // eax
  int i; // ebx
  __int64 v6; // rbx
  int v7; // r13d

  if ( !this->m_bBroken )
  {
    if ( this->m_vecShatterGlassShards.m_Size == 0 )
      return;
    CFuncShatterglass::BreakLargestShard(this, ShatterDamageCause::SHATTERDAMAGE_MELEE, 1);
  }
  m_Size = this->m_vecShatterGlassShards.m_Size;
  if ( m_Size > 0 )
  {
    v4 = this->m_vecShatterGlassShards.m_Size;
    for ( i = 0; i != m_Size; ++i )
    {
      while ( v4 == 0 )
      {
        if ( ++i == m_Size )
          goto LABEL_10;
      }
      CFuncShatterglass::BreakLargestShard(this, ShatterDamageCause::SHATTERDAMAGE_SCRIPT, 1);
      v4 = this->m_vecShatterGlassShards.m_Size;
    }
LABEL_10:
    if ( v4 > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        if ( !CShatterGlassShard::IsTooSmallToShatter(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v6]) )
          CShatterGlassShard::UnFreeze(this->m_vecShatterGlassShards.m_Memory.m_pMemory[v6]);
        ++v7;
        ++v6;
      }
      while ( this->m_vecShatterGlassShards.m_Size > v7 );
    }
  }
}


// CFuncShatterglass::StartRestore  (line 2840, @0x0000000002244170, libserver.so)
// calls: CFuncShatterglass::Init
void __fastcall CFuncShatterglass::StartRestore(CFuncShatterglass *const this)
{
  if ( this->m_bBroken )
  {
    this->m_flRestoreStartTime = 0.0;
    CFuncShatterglass::Init(this);
  }
}


// CFuncShatterglass::StartRestoreSlow  (line 2849, @0x00000000022443b0, libserver.so)  // inlines: curtime
// calls: CFuncShatterglass::RestoreThink
// callers: CFuncShatterglass::InputRestoreSlow, restoreglass_f
void __fastcall CFuncShatterglass::StartRestoreSlow(CFuncShatterglass *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_bBroken )
  {
    m_flCurrentTime = 0.0;
    if ( this->m_flRestoreStartTime == 0.0 )
    {
      v3 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        m_flCurrentTime = v3->m_flCurrentTime;
      }
      this->m_flRestoreStartTime = m_flCurrentTime;
      CFuncShatterglass::RestoreThink(this);
    }
  }
}


// CFuncShatterglass::RestoreThink  (line 2858, @0x0000000002244190, libserver.so)  // inlines: RemapValClamped, clamp<float, float>, curtime
// calls: CShatterGlassShard::ResetRestoreMove, CFuncShatterglass::Init, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// callers: CFuncShatterglass::StartRestoreSlow
// globals: CFuncShatterglass::RestoreThink(void)
void __fastcall CFuncShatterglass::RestoreThink(CFuncShatterglass *const this)
{
  CGlobalVars *v2; // r12
  float m_flCurrentTime; // xmm0_4
  double v4; // xmm1_8
  float v5; // xmm0_4
  __int64 v6; // r13
  int i; // r12d
  CShatterGlassShard *v8; // rdi
  __int64 v9; // r13
  int j; // r12d
  CShatterGlassShard *v11; // rdi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v13; // r12
  CGlobalVars *v14; // rax
  FnGlobalVarsWarningFunc v15; // rax
  double v16; // xmm0_8
  float v17; // [rsp+Ch] [rbp-24h]

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v2->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v4 = 0.0;
  v5 = (m_flCurrentTime - this->m_flRestoreStartTime) / 5.0;
  v17 = 0.0;
  if ( v5 >= 0.0 )
  {
    v17 = 1.0;
    if ( v5 <= 1.0 )
      v17 = v5 + 0.0;
  }
  v6 = 0;
  for ( i = 0; this->m_vecShatterGlassShards.m_Size > i; ++v6 )
  {
    v8 = this->m_vecShatterGlassShards.m_Memory.m_pMemory[v6];
    if ( !v8->m_bShattered )
      CShatterGlassShard::ResetRestoreMove(v8, COERCE_DOUBLE(LODWORD(v17)), *&v4);
    ++i;
  }
  v9 = 0;
  for ( j = 0; this->m_vecShatterGlassShardsToDelete.m_Size > j; ++v9 )
  {
    v11 = this->m_vecShatterGlassShardsToDelete.m_Memory.m_pMemory[v9];
    if ( !v11->m_bShattered )
      CShatterGlassShard::ResetRestoreMove(v11, COERCE_DOUBLE(LODWORD(v17)), *&v4);
    ++j;
  }
  if ( v17 < 0.60000002 )
  {
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v14 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v15 = gpGlobals->m_pfnWarningFunc;
        if ( v15 != 0 )
          v15(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v14 = gpGlobals;
      }
      *&v16 = LODWORD(v13->m_flCurrentTime);
    }
    else
    {
      v14 = 0;
      v16 = 0.0;
    }
    *&v16 = *&v16 + v14->interval_per_tick;
    CBaseEntity::SetNextThink(this, v16, v4, 0);
    CBaseEntity::ThinkSet(this, CFuncShatterglass::RestoreThink, 0.0, 0, 0);
  }
  else
  {
    this->m_flRestoreStartTime = 0.0;
    CFuncShatterglass::Init(this);
  }
}


// CFuncShatterglass::OnRestore  (line 2892, @0x0000000002244490, libserver.so)  // inlines: BreakLargestShard
// calls: CBaseModelEntity::OnRestore, CFuncShatterglass::Init, CFuncShatterglass::BreakLargestShard
void __fastcall CFuncShatterglass::OnRestore(CFuncShatterglass *const this)
{
  bool m_bBroken; // r12

  CBaseModelEntity::OnRestore(this);
  m_bBroken = this->m_bBroken;
  this->m_flRestoreStartTime = 0.0;
  CFuncShatterglass::Init(this);
  if ( m_bBroken && this->m_vecShatterGlassShards.m_Size != 0 )
    CFuncShatterglass::BreakLargestShard(this, ShatterDamageCause::SHATTERDAMAGE_MELEE, 1);
}


