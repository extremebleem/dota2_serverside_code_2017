// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/breakableprop.cpp:464
class C_CBreakableProp_MapInstall {
	C_CBreakableProp_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetVelocityFromDamageForce  (line 94, @0x000000000206f420, libserver.so)  // inlines: GetDamageForce, VectorMultiply, operator*
// calls: CBaseEntity::VPhysicsGetTotalMass
// callers: CPropDoorRotatingBreakable::OnTakeDamage
Vector __fastcall GetVelocityFromDamageForce(const CTakeDamageInfo *const info, const CBaseEntity *pEntity)
{
  float TotalMass; // xmm0_4
  vec_t z; // eax
  float x; // [rsp+4h] [rbp-3Ch]
  float y; // [rsp+8h] [rbp-38h]
  float force; // [rsp+Ch] [rbp-34h]
  __int64 v11; // [rsp+20h] [rbp-20h]
  float v12; // [rsp+28h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pEntity != 0 && CBaseEntity::VPhysicsGetTotalMass(pEntity) > 0.0 )
  {
    x = info->m_vecDamageForce.x;
    y = info->m_vecDamageForce.y;
    force = info->m_vecDamageForce.z;
    TotalMass = CBaseEntity::VPhysicsGetTotalMass(pEntity);
    *&v11 = x * (1.0 / TotalMass);
    *(&v11 + 1) = y * (1.0 / TotalMass);
    v12 = (1.0 / TotalMass) * force;
  }
  else
  {
    z = vec3_origin.z;
    v11 = *&vec3_origin.x;
    v12 = z;
  }
  *&result.x = v11;
  result.z = v12;
  return result;
}


// GetBreakableDamage  (line 109, @0x000000000206f4e0, libserver.so)  // inlines: GetFloat
// callers: CBreakableProp::OnTakeDamage, CBreakable::ModifyDamage, CBreakable::OnTakeDamage
float __fastcall GetBreakableDamage(const CTakeDamageInfo *const inputInfo, IBreakableWithPropData *pProp)
{
  unsigned int m_bitsDamageType; // ebx
  float m_flDamage; // xmm1_4
  float v5; // xmm0_4
  char v6; // al
  float v7; // xmm1_4
  float flDamage; // [rsp+Ch] [rbp-14h]
  float flDamagea; // [rsp+Ch] [rbp-14h]
  float flDamageb; // [rsp+Ch] [rbp-14h]

  m_bitsDamageType = inputInfo->m_bitsDamageType;
  m_flDamage = inputInfo->m_flDamage;
  if ( (m_bitsDamageType & 2) == 0 )
  {
    if ( (m_bitsDamageType & 0x80u) != 0 )
    {
      if ( pProp != 0 )
        goto LABEL_15;
      goto LABEL_24;
    }
LABEL_6:
    if ( (m_bitsDamageType & 0x40) != 0 )
    {
      if ( pProp != 0 )
        goto LABEL_8;
      goto LABEL_25;
    }
    goto LABEL_16;
  }
  if ( (m_bitsDamageType & 0x20000000) != 0 )
  {
    if ( pProp != 0 )
    {
      flDamage = inputInfo->m_flDamage;
      v5 = (*(pProp->_vptr_IBreakableWithPropData + 4))(pProp);
      m_flDamage = flDamage * (v5 + v5);
      goto LABEL_5;
    }
    m_flDamage = m_flDamage
               * (func_breakdmg_bullet.m_pParent->m_Value.m_fValue + func_breakdmg_bullet.m_pParent->m_Value.m_fValue);
  }
  else
  {
    if ( pProp != 0 )
    {
      flDamageb = inputInfo->m_flDamage;
      m_flDamage = flDamageb * (*(pProp->_vptr_IBreakableWithPropData + 4))(pProp);
LABEL_5:
      if ( (m_bitsDamageType & 0x80u) == 0 )
        goto LABEL_6;
LABEL_15:
      m_flDamage = m_flDamage * (*(pProp->_vptr_IBreakableWithPropData + 5))(pProp);
      if ( (m_bitsDamageType & 0x40) != 0 )
      {
LABEL_8:
        m_flDamage = m_flDamage * (*(pProp->_vptr_IBreakableWithPropData + 6))(pProp);
        if ( (m_bitsDamageType & 8) == 0 )
          goto LABEL_9;
LABEL_18:
        m_flDamage = m_flDamage * (*(pProp->_vptr_IBreakableWithPropData + 7))(pProp);
        if ( (m_bitsDamageType & 5) != 5 )
          goto LABEL_10;
        goto LABEL_19;
      }
      goto LABEL_16;
    }
    m_flDamage = m_flDamage * func_breakdmg_bullet.m_pParent->m_Value.m_fValue;
  }
  if ( (m_bitsDamageType & 0x80u) == 0 )
    goto LABEL_6;
LABEL_24:
  m_flDamage = m_flDamage * func_breakdmg_club.m_pParent->m_Value.m_fValue;
  if ( (m_bitsDamageType & 0x40) != 0 )
  {
LABEL_25:
    m_flDamage = m_flDamage * func_breakdmg_explosive.m_pParent->m_Value.m_fValue;
    goto LABEL_9;
  }
LABEL_16:
  if ( (m_bitsDamageType & 8) != 0 && pProp != 0 )
    goto LABEL_18;
LABEL_9:
  if ( (m_bitsDamageType & 5) == 5 )
LABEL_19:
    m_flDamage = m_flDamage * 10.0;
LABEL_10:
  flDamagea = m_flDamage;
  v6 = (*(g_pGameRules->_vptr_CGameRules + 22))(g_pGameRules, m_bitsDamageType);
  v7 = flDamagea;
  if ( v6 != 0 )
    return 0.0;
  return v7;
}


// CBreakableProp::SetEnableMotionPosition  (line 221, @0x00000000020813f0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<CEntityHandle>, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<char const*>, AddToTail, Allocate, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValues, SetWorldTransform, Spawn, V_strlen, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CBreakableProp::ClearEnableMotionPosition, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::~CEntityKeyValues (30 total)
// callers: CBreakableProp::StickAtPosition
// strings: "point_enable_motion_fixup", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
void __fastcall CBreakableProp::SetEnableMotionPosition(
        CBreakableProp *const this,
        const Vector *const position,
        const QAngle *const angles)
{
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityClass *ClassByDesignName; // rax
  __int64 v11; // rdi
  CEntityKeyValues *v12; // rbx
  int m_enabled; // ecx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v15; // rax
  CEntityInstance *Entity; // rax
  __int64 v17; // rdi
  CEntityInstance *v18; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v24; // rdi
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  CUtlScratchMemoryPool *v27; // rdi
  CEntityKeyValues *v28; // rbx
  const char *m_pszClassname; // r15
  CEntityKeyValues *v31; // rbx
  int v32; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v33; // cx
  __int64 v34; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rdx
  unsigned __int64 v36; // rbx
  ThreadId_t v37; // r15
  uint64 v38; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v40; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v42; // rcx
  CVProfNode *m_pParent; // rax
  int v44; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v45; // cx
  __int64 v46; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v47; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v49; // cx
  __int64 v50; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v51; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v53; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rax
  uint16 m_flags; // ax
  char *v58; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rax
  __int16 v60; // dx
  unsigned __int64 v61; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v62; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rax
  uint16 v64; // ax
  vec_t *v65; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rbx
  int v70; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v71; // cx
  __int64 v72; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v73; // rdx
  __int16 v74; // r14
  unsigned __int64 v75; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v76; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v77; // rax
  __int64 v78; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // r14
  uint16 v80; // ax
  vec_t *v81; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v82; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v83; // rdx
  __int64 v84; // rax
  int v85; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v86; // cx
  __int64 v87; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v88; // rdx
  __int16 v89; // r14
  unsigned __int64 v90; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v91; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v92; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v93; // rax
  uint16 v94; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v95; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rbx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v103; // rax
  __int16 v104; // dx
  unsigned __int64 v105; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v106; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v107; // rax
  uint16 v108; // ax
  void *v109; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v110; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rbx
  __int16 v114; // ax
  __int16 v115; // ax
  vec_t *v116; // rax
  __int16 v117; // ax
  char *v118; // rax
  __int64 v119; // rbx
  __int16 v120; // ax
  vec_t *v121; // rax
  __int16 v122; // ax
  void *v123; // rax
  __int64 v124; // [rsp+18h] [rbp-118h]
  signed int v125; // [rsp+24h] [rbp-10Ch]
  bool v126; // [rsp+28h] [rbp-108h]
  __int64 v127; // [rsp+28h] [rbp-108h]
  __int64 v128; // [rsp+28h] [rbp-108h]
  CEntityKeyValues *i; // [rsp+38h] [rbp-F8h]
  __int64 v131; // [rsp+38h] [rbp-F8h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v132; // [rsp+38h] [rbp-F8h]
  __int64 v133; // [rsp+38h] [rbp-F8h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v134; // [rsp+38h] [rbp-F8h]
  __int64 v135; // [rsp+38h] [rbp-F8h]
  __int64 v136; // [rsp+38h] [rbp-F8h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v137; // [rsp+38h] [rbp-F8h]
  signed int v138; // [rsp+38h] [rbp-F8h]
  int v139; // [rsp+40h] [rbp-F0h]
  _QWORD v140[2]; // [rsp+50h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+60h] [rbp-D0h] BYREF

  CBreakableProp::ClearEnableMotionPosition(this);
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v5 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v5->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v5);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v7 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v7;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_76:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v53 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -971301790;
    v131 = v53;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v56 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v56 = 0;
    v127 = v131;
    v132 = &v56[v131];
    m_flags = v132->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v132->m_value.m_flags = m_flags & 0xFFFE;
    v132->m_value.m_uint64 = 0;
    v132->m_value.m_type = 30;
    v58 = CEntityVariantAllocator::Allocate(0x1Au);
    v132->m_value.m_uint64 = v58;
    strcpy(v58, "point_enable_motion_fixup");
    v132->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v59 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v59 = 0;
    v59[v127].m_pAttributeName = 0;
  }
  else
  {
    v49 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v50 = 0;
    while ( 1 )
    {
      if ( v49 != 0 )
      {
        v51 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v49 > 9 )
          v51 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v51 = 0;
      }
      if ( v51[v50] == -971301790 )
        break;
      if ( m_nCount <= ++v50 )
        goto LABEL_76;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v99 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v100 = v50;
      v101 = &v99[v100];
      if ( v99[v100].m_pAttributeName != 0 )
      {
LABEL_148:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v99[v100].m_pAttributeName);
        goto LABEL_4;
      }
    }
    else
    {
      v100 = v50;
      v99 = 0;
      v101 = v100 * 24;
      if ( *(v100 * 24 + 16) != 0 )
        goto LABEL_148;
    }
    v117 = *(v101 + 10);
    if ( (v117 & 1) != 0 )
      *(v101 + 10) = v117 & 0xFFFE;
    *v101 = 0;
    *(v101 + 8) = 30;
    v118 = CEntityVariantAllocator::Allocate(0x1Au);
    *v101 = v118;
    strcpy(v118, "point_enable_motion_fixup");
    *(v101 + 10) |= 1u;
  }
LABEL_4:
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        "point_enable_motion_fixup",
                        &spawner.m_scriptClassName);
  v12 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_5:
    v139 = -1;
    goto LABEL_6;
  }
  v44 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v44 <= 0 )
  {
LABEL_86:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v60 = v12->m_keyHashes.m_nCount - 1;
    v61 = v12->m_keyHashes.m_nAllocated;
    if ( v61 != 0 )
    {
      if ( v61 <= 9 )
        v62 = (&v12->m_keyHashes.m_nAllocAllocated + 1);
      else
        v62 = v12->m_keyHashes.m_pElements;
    }
    else
    {
      v62 = 0;
    }
    v62[(v12->m_keyHashes.m_nCount - 1)] = -467664362;
    v133 = v60;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v12->m_keyValues);
    if ( v12->m_keyValues.m_nAllocated != 0 )
      v63 = v12->m_keyValues.m_pElements;
    else
      v63 = 0;
    v128 = v133;
    v134 = &v63[v133];
    v64 = v134->m_value.m_flags;
    if ( (v64 & 1) != 0 )
      v134->m_value.m_flags = v64 & 0xFFFE;
    v134->m_value.m_uint64 = 0;
    v134->m_value.m_type = 3;
    v65 = CEntityVariantAllocator::Allocate(0xCu);
    v134->m_value.m_uint64 = v65;
    *v65 = position->x;
    v65[1] = position->y;
    v65[2] = position->z;
    v134->m_value.m_flags |= 1u;
    if ( v12->m_keyValues.m_nAllocated != 0 )
      v66 = v12->m_keyValues.m_pElements;
    else
      v66 = 0;
    v66[v128].m_pAttributeName = 0;
  }
  else
  {
    v45 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v46 = 0;
    while ( 1 )
    {
      if ( v45 != 0 )
      {
        v47 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v45 > 9 )
          v47 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v47 = 0;
      }
      if ( v47[v46] == -467664362 )
        break;
      if ( v44 <= ++v46 )
        goto LABEL_86;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v67 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v68 = v46;
      v69 = &v67[v68];
      if ( v67[v68].m_pAttributeName != 0 )
      {
LABEL_98:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v67[v68].m_pAttributeName);
        goto LABEL_99;
      }
    }
    else
    {
      v68 = v46;
      v67 = 0;
      v69 = v68 * 24;
      if ( *(v68 * 24 + 16) != 0 )
        goto LABEL_98;
    }
    v115 = *(v69 + 10);
    if ( (v115 & 1) != 0 )
      *(v69 + 10) = v115 & 0xFFFE;
    *v69 = 0;
    *(v69 + 8) = 3;
    v116 = CEntityVariantAllocator::Allocate(0xCu);
    *v69 = v116;
    *v116 = position->x;
    v116[1] = position->y;
    v116[2] = position->z;
    *(v69 + 10) |= 1u;
  }
LABEL_99:
  v12 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_5;
  v70 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v70 <= 0 )
  {
LABEL_108:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v74 = v12->m_keyHashes.m_nCount - 1;
    v75 = v12->m_keyHashes.m_nAllocated;
    if ( v75 != 0 )
    {
      if ( v75 <= 9 )
        v76 = (&v12->m_keyHashes.m_nAllocAllocated + 1);
      else
        v76 = v12->m_keyHashes.m_pElements;
    }
    else
    {
      v76 = 0;
    }
    v76[v74] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v12->m_keyValues);
    if ( v12->m_keyValues.m_nAllocated != 0 )
      v77 = v12->m_keyValues.m_pElements;
    else
      v77 = 0;
    v78 = v74;
    v79 = &v77[v78];
    v135 = v78 * 24;
    v80 = v77[v78].m_value.m_flags;
    if ( (v80 & 1) != 0 )
      v79->m_value.m_flags = v80 & 0xFFFE;
    v79->m_value.m_uint64 = 0;
    v79->m_value.m_type = 39;
    v81 = CEntityVariantAllocator::Allocate(0xCu);
    v79->m_value.m_uint64 = v81;
    *v81 = angles->x;
    v81[1] = angles->y;
    v81[2] = angles->z;
    v79->m_value.m_flags |= 1u;
    if ( v12->m_keyValues.m_nAllocated != 0 )
      v82 = v12->m_keyValues.m_pElements;
    else
      v82 = 0;
    *(&v82->m_pAttributeName + v135) = 0;
  }
  else
  {
    v71 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v72 = 0;
    while ( 1 )
    {
      if ( v71 != 0 )
      {
        v73 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v71 > 9 )
          v73 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v73 = 0;
      }
      if ( v73[v72] == -1164387633 )
        break;
      if ( v70 <= ++v72 )
        goto LABEL_108;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v83 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v84 = v72;
      if ( v83[v84].m_pAttributeName != 0 )
      {
LABEL_120:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v83[v84].m_pAttributeName);
        goto LABEL_121;
      }
      v119 = &v83[v84];
    }
    else
    {
      v84 = v72;
      v83 = 0;
      v119 = v84 * 24;
      if ( *(v84 * 24 + 16) != 0 )
        goto LABEL_120;
    }
    v120 = *(v119 + 10);
    if ( (v120 & 1) != 0 )
      *(v119 + 10) = v120 & 0xFFFE;
    *v119 = 0;
    *(v119 + 8) = 39;
    v121 = CEntityVariantAllocator::Allocate(0xCu);
    *v119 = v121;
    *v121 = angles->x;
    v121[1] = angles->y;
    v121[2] = angles->z;
    *(v119 + 10) |= 1u;
  }
LABEL_121:
  v12 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_5;
  v85 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v85 > 0 )
  {
    v86 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v87 = 0;
    v11 = v86;
    while ( 1 )
    {
      if ( v86 != 0 )
      {
        v88 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v86 > 9 )
          v88 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v88 = 0;
      }
      if ( v88[v87] == -1104771937 )
        break;
      if ( v85 <= ++v87 )
        goto LABEL_130;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v96 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v97 = v87;
      v98 = &v96[v97];
      if ( v96[v97].m_pAttributeName != 0 )
      {
LABEL_142:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v96[v97].m_pAttributeName);
LABEL_143:
        v12 = spawner.m_pEntityKeyValues;
        goto LABEL_144;
      }
    }
    else
    {
      v97 = v87;
      v96 = 0;
      v98 = v97 * 24;
      if ( *(v97 * 24 + 16) != 0 )
        goto LABEL_142;
    }
    v114 = *(v98 + 10);
    if ( (v114 & 1) != 0 )
      *(v98 + 10) = v114 & 0xFFFE;
    *v98 = 0;
    *(v98 + 8) = 13;
    *v98 = -1;
    goto LABEL_143;
  }
LABEL_130:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v89 = v12->m_keyHashes.m_nCount - 1;
  v90 = v12->m_keyHashes.m_nAllocated;
  if ( v90 != 0 )
  {
    if ( v90 <= 9 )
      v91 = (&v12->m_keyHashes.m_nAllocAllocated + 1);
    else
      v91 = v12->m_keyHashes.m_pElements;
  }
  else
  {
    v91 = 0;
  }
  v91[v89] = -1104771937;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v12->m_keyValues);
  if ( v12->m_keyValues.m_nAllocated != 0 )
    v92 = v12->m_keyValues.m_pElements;
  else
    v92 = 0;
  v93 = &v92[v89];
  v94 = v93->m_value.m_flags;
  if ( (v94 & 1) != 0 )
    v93->m_value.m_flags = v94 & 0xFFFE;
  v11 = 13;
  v93->m_value.m_uint64 = 0;
  v93->m_value.m_type = 13;
  v93->m_value.m_int = -1;
  if ( v12->m_keyValues.m_nAllocated != 0 )
    v95 = v12->m_keyValues.m_pElements;
  else
    v95 = 0;
  v95[v89].m_pAttributeName = 0;
  v12 = spawner.m_pEntityKeyValues;
LABEL_144:
  v139 = -1;
  if ( v12 == 0 )
    goto LABEL_26;
LABEL_6:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v126 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v40 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(v11) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v103 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v103->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v42 = m_numTimeBaseTicks - v40;
    v12 = spawner.m_pEntityKeyValues;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v42 + __rdtsc();
  }
  if ( CEntityKeyValues::HasValue(v12, -971301790) )
    goto LABEL_8;
  m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
  if ( m_pszClassname == 0 )
    goto LABEL_8;
  v31 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_8;
  v32 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v32 <= 0 )
  {
LABEL_156:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v104 = v31->m_keyHashes.m_nCount - 1;
    v105 = v31->m_keyHashes.m_nAllocated;
    if ( v105 != 0 )
    {
      if ( v105 <= 9 )
        v106 = (&v31->m_keyHashes.m_nAllocAllocated + 1);
      else
        v106 = v31->m_keyHashes.m_pElements;
    }
    else
    {
      v106 = 0;
    }
    v106[(v31->m_keyHashes.m_nCount - 1)] = -971301790;
    v136 = v104;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v31->m_keyValues);
    if ( v31->m_keyValues.m_nAllocated != 0 )
      v107 = v31->m_keyValues.m_pElements;
    else
      v107 = 0;
    v124 = v136;
    v137 = &v107[v136];
    v108 = v137->m_value.m_flags;
    if ( (v108 & 1) != 0 )
      v137->m_value.m_flags = v108 & 0xFFFE;
    v137->m_value.m_uint64 = 0;
    v137->m_value.m_type = 30;
    v125 = strlen(m_pszClassname) + 1;
    v109 = CEntityVariantAllocator::Allocate(v125);
    v137->m_value.m_uint64 = v109;
    memcpy(v109, m_pszClassname, v125);
    v137->m_value.m_flags |= 1u;
    if ( v31->m_keyValues.m_nAllocated != 0 )
      v110 = v31->m_keyValues.m_pElements;
    else
      v110 = 0;
    v110[v124].m_pAttributeName = 0;
    goto LABEL_8;
  }
  v33 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  v34 = 0;
  while ( 1 )
  {
    if ( v33 != 0 )
    {
      v35 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      if ( v33 > 9 )
        v35 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v35 = 0;
    }
    if ( v35[v34] == -971301790 )
      break;
    if ( v32 <= ++v34 )
      goto LABEL_156;
  }
  if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated == 0 )
  {
    v112 = v34;
    v111 = 0;
    v113 = v112 * 24;
    if ( *(v112 * 24 + 16) != 0 )
      goto LABEL_168;
LABEL_186:
    v122 = *(v113 + 10);
    if ( (v122 & 1) != 0 )
      *(v113 + 10) = v122 & 0xFFFE;
    *v113 = 0;
    *(v113 + 8) = 30;
    v138 = strlen(m_pszClassname) + 1;
    v123 = CEntityVariantAllocator::Allocate(v138);
    *v113 = v123;
    memcpy(v123, m_pszClassname, v138);
    *(v113 + 10) |= 1u;
    goto LABEL_8;
  }
  v111 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
  v112 = v34;
  v113 = &v111[v112];
  if ( v111[v112].m_pAttributeName == 0 )
    goto LABEL_186;
LABEL_168:
  Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v111[v112].m_pAttributeName);
LABEL_8:
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v15 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v15,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v18 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v139 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
    }
    else
    {
      v139 = -1;
    }
    v140[0] = m_pEntity;
    v140[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v140,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v18, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v24 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v24 - 1);
        (pfn)(v24, v18, i);
      }
    }
  }
  if ( v126 )
  {
    v36 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v37 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v37 == ThreadGetCurrentId(v17) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v38 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v38 - v36 + __rdtsc();
  }
  if ( (v139 + 2) > 1 )
  {
    v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v139 >> 9) & 0x3F];
    if ( v25 != 0 )
    {
      v26 = &v25[v139 & 0x1FF];
      if ( v26 != 0 && v139 == v26->m_EHandle.m_Index && v26->m_pInstance != 0 )
        CBaseEntity::SetParent(v26->m_pInstance, this, 0, 0);
    }
  }
LABEL_26:
  v27 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v27 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v27);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v28 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v28);
      operator delete(v28);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CBreakableProp::FindEnableMotionFixup  (line 236, @0x0000000002077f80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ClassMatches, FClassnameIs, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::GetAllChildren, CEntityIdentity::ClassMatches, CUtlMemory<CBaseEntity*, int>::Purge, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBreakableProp::GetEnableMotionPosition, CBreakableProp::ClearEnableMotionPosition
// strings: "point_enable_motion_fixup"
CBaseEntity *__fastcall CBreakableProp::FindEnableMotionFixup(CBreakableProp *const this)
{
  int v1; // eax
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  CBaseEntity *v4; // rax
  CBaseEntity *result; // rax
  CBaseEntity *v6; // [rsp+8h] [rbp-48h]
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > list; // [rsp+10h] [rbp-40h] BYREF

  list.m_Size = 0;
  list.m_Memory.m_pMemory = 0;
  list.m_Memory.m_nAllocationCount = 0;
  list.m_Memory.m_nGrowSize = 0;
  CBaseEntity::GetAllChildren(this, &list);
  v1 = list.m_Size - 1;
  if ( list.m_Size - 1 < 0 )
  {
LABEL_9:
    result = 0;
    list.m_Size = 0;
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
    goto LABEL_7;
  }
  v2 = 8LL * v1;
  v3 = 8 * (v1 - v1) - 8;
  while ( 1 )
  {
    v4 = list.m_Memory.m_pMemory[v2 / 8];
    if ( v4 != 0 && CEntityIdentity::ClassMatches(v4->m_pEntity, "point_enable_motion_fixup") )
      break;
    v2 -= 8LL;
    if ( v2 == v3 )
      goto LABEL_9;
  }
  result = list.m_Memory.m_pMemory[v2 / 8];
  list.m_Size = 0;
  if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_7:
    v6 = result;
    CUtlMemory<CBaseEntity *,int>::Purge(&list.m_Memory);
    result = v6;
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CBaseEntity *,int>::Purge(&list.m_Memory);
      return v6;
    }
  }
  return result;
}


// CBreakableProp::GetEnableMotionPosition  (line 251, @0x0000000002078090, libserver.so)  // inlines: operator=
// calls: CBreakableProp::FindEnableMotionFixup, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles
// callers: CPhysicsProp::EnableMotion
bool __fastcall CBreakableProp::GetEnableMotionPosition(CBreakableProp *const this, Vector *pPosition, QAngle *pAngles)
{
  CBaseEntity *EnableMotionFixup; // rbx
  bool result; // al

  EnableMotionFixup = CBreakableProp::FindEnableMotionFixup(this);
  result = 0;
  if ( EnableMotionFixup != 0 )
  {
    *pPosition = *CBaseEntity::GetAbsOrigin(EnableMotionFixup);
    *pAngles = *CBaseEntity::GetAbsAngles(EnableMotionFixup);
    return 1;
  }
  return result;
}


// CBreakableProp::ClearEnableMotionPosition  (line 263, @0x0000000002078120, libserver.so)
// calls: CBreakableProp::FindEnableMotionFixup, UTIL_Remove
// callers: CBreakableProp::SetEnableMotionPosition, CPhysicsProp::EnableMotion
void __fastcall CBreakableProp::ClearEnableMotionPosition(CBreakableProp *const this)
{
  CBaseEntity *EnableMotionFixup; // rax

  EnableMotionFixup = CBreakableProp::FindEnableMotionFixup(this);
  if ( EnableMotionFixup != 0 )
    UTIL_Remove(EnableMotionFixup);
}


// CBreakableProp::Ignite  (line 276, @0x00000000020782c0, libserver.so)  // inlines: CEntityHandle, Get, GetEffectEntity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseAnimating::Ignite, CBaseEntity::GetAbsOrigin, CSoundEnt::InsertSound, CBaseEntity::AddEffects
void __fastcall CBreakableProp::Ignite(
        CBreakableProp *const this,
        float flFlameLifetime,
        bool bNPCOnly,
        float flSize,
        bool bCalledByLevelDesigner)
{
  float v8; // xmm2_4
  const Vector *AbsOrigin; // rax
  unsigned __int16 v10; // dx
  int v11; // esi
  CBaseEntity *m_pInstance; // rdi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx

  if ( (this->m_fFlags.m_Value & 0x8000000) == 0 && (*(this->_vptr_IHandleEntity + 284))(this, 12) != 0 )
  {
    CBaseAnimating::Ignite(this, flFlameLifetime, bNPCOnly, flSize, bCalledByLevelDesigner, v8);
    if ( (*(g_pGameRules->_vptr_CGameRules + 135))(g_pGameRules) != 0 )
    {
      if ( this->m_hEffectEntity.m_Value.m_Index == -1 )
      {
        v10 = 0x7FFF;
        v11 = 0x7FFF;
      }
      else
      {
        v10 = this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
        v11 = v10;
      }
      m_pInstance = 0;
      v13 = (this->m_hEffectEntity.m_Value.m_Index >> 15 << 15) | v10 & 0x7FFF;
      if ( v13 + 2 > 1 )
      {
        v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
        if ( v14 != 0 )
        {
          v15 = &v14[v11 & 0x1FF];
          if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
            m_pInstance = v15->m_pInstance;
        }
      }
      CBaseEntity::AddEffects(m_pInstance, 4);
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    CSoundEnt::InsertSound(8, AbsOrigin, 128, 1.0, this, 2, 0);
  }
}


// CBreakableProp::HandleFirstCollisionInteractions  (line 296, @0x0000000002082850, libserver.so)  // inlines: CGameTrace, CUtlMemory, CUtlVector, CUtlVectorBase, EnableInteractsWith, GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, Init, LengthSqr, Purge, Ray_t, RemoveAll, RnCollisionAttr_t, Set, SetAttacker, SetDamageForce, SetDamagePosition, SetDamageType, SetInflictor, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, entindex, operator*, operator+, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::GetHealth, CBaseEntity::VPhysicsGetObject, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::GetAllChildren, __dynamic_cast, CUtlMemory<CBaseEntity*, int>::Purge, CBreakableProp::HandleInteractionStick, VectorNormalize, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple (17 total)
// callers: CPhysicsProp::VPhysicsCollision
// strings: "PaintSplatBlue", "PaintSplatPink", "PaintSplatGreen"
// globals: `typeinfo for'IParentPropInteraction
// local variable allocation has failed, the output may be wrong!
void __fastcall CBreakableProp::HandleFirstCollisionInteractions(
        CBreakableProp *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  CBaseEntity *v6; // rdi
  float Health; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // si
  int v10; // edx
  int v11; // edx
  __int16 v12; // cx
  IPhysicsObject *Object; // rax
  __int32 v14; // xmm1_4
  IPhysicsObject *v15; // rax
  vec_t v16; // xmm1_4
  __int64 i; // rbx
  const void *v18; // rdi
  void (__fastcall ***v19)(void *, __int64, _QWORD, gamevcollisionevent_t *); // rax
  IPhysicsObject *v20; // rax
  double v21; // xmm0_8
  vec_t v22; // xmm1_4
  float m_fValue; // xmm7_4
  CEntityIndex v24; // ecx
  Vector vecVelocity_0; // [rsp+10h] [rbp-180h] BYREF
  __int128 vecVelocity; // [rsp+20h] [rbp-170h] OVERLAPPED BYREF
  Ray_t ray; // [rsp+60h] [rbp-130h] BYREF
  __m256i children; // [rsp+B0h] [rbp-E0h] OVERLAPPED BYREF
  int v29; // [rsp+E8h] [rbp-A8h]
  int v30; // [rsp+ECh] [rbp-A4h]
  float v31; // [rsp+F4h] [rbp-9Ch]
  __int64 v32; // [rsp+F8h] [rbp-98h]
  int v33; // [rsp+100h] [rbp-90h]
  __int64 v34; // [rsp+118h] [rbp-78h]
  __int64 v35; // [rsp+120h] [rbp-70h]
  __int64 v36; // [rsp+128h] [rbp-68h]
  int v37; // [rsp+130h] [rbp-60h]
  __int16 v38; // [rsp+134h] [rbp-5Ch]
  char v39; // [rsp+136h] [rbp-5Ah]
  char v40; // [rsp+137h] [rbp-59h]
  Vector vecPos; // 0:^0.12

  v6 = pEvent->pEntities[index == 0];
  if ( (*(v6->_vptr_IHandleEntity + 143))(v6) != 0 && (*(this->_vptr_IHandleEntity + 284))(this, 0) != 0 )
    CBreakableProp::HandleInteractionStick(this, index, pEvent);
  if ( (*(this->_vptr_IHandleEntity + 284))(this, 1) != 0 )
  {
    CTakeDamageInfo::CTakeDamageInfo(&children);
    Health = CBaseEntity::GetHealth(this);
    m_pEntity = this->m_pEntity;
    v31 = Health;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v30) = v9 | v30 & 0x8000;
      v30 = (v10 << 15) | v30 & 0x7FFF;
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v29) = v12 | v29 & 0x8000;
      v29 = (v11 << 15) | v29 & 0x7FFF;
    }
    else
    {
      v30 = -1;
      v29 = -1;
    }
    v33 = 0;
    Object = CBaseEntity::VPhysicsGetObject(this);
    *&vecVelocity = (*(*Object + 1688LL))(Object);
    DWORD2(vecVelocity) = v14;
    children.m256i_i32[4] = v14;
    children.m256i_i64[1] = vecVelocity;
    v15 = CBaseEntity::VPhysicsGetObject(this);
    *&ray.m_Start.x = (*(*v15 + 368LL))(v15);
    ray.m_Start.z = v16;
    *(&children.m256i_u64[2] + 4) = ray.m_Start.Vector;
    CBaseEntity::TakeDamage(this, &children);
    CTakeDamageInfo::~CTakeDamageInfo(&children);
  }
  else
  {
    if ( (*(this->_vptr_IHandleEntity + 284))(this, 2) != 0 )
    {
      v20 = CBaseEntity::VPhysicsGetObject(this);
      v21 = (*(*v20 + 368LL))(v20);
      vecPos.z = v22;
      *&vecPos.x = v21;
      vecVelocity_0 = pEvent->preVelocity[0];
      VectorNormalize(&vecVelocity_0);
      v38 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v39 = 0;
      v40 = 7;
      v37 = 0;
      CGameTrace::Init(&children);
      m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      ray.m_Delta.x = ((vecVelocity_0.x * 64.0) + vecPos.x) - vecPos.x;
      ray.m_Delta.y = ((vecVelocity_0.y * 64.0) + vecPos.y) - vecPos.y;
      ray.m_Start.w = 0.0;
      memset(&ray.m_Delta.w, 0, 36);
      ray.m_Delta.z = ((64.0 * vecVelocity_0.z) + vecPos.z) - vecPos.z;
      ray.m_flRadius = m_fValue;
      ray.m_Start.Vector = vecPos;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      ray.m_IsRay = 1;
      CTraceFilterSimple::CTraceFilterSimple(&vecVelocity, this, 4, 0);
      *(&vecVelocity + 1) |= 0x185003uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &vecVelocity, &children);
      if ( v32 != 0 )
      {
        v24.m_Data = CEntityInstance::GetEntityIndex(this).m_Data % 3;
        switch ( v24.m_Data )
        {
          case 1:
            UTIL_DecalTrace(&children, "PaintSplatGreen");
            break;
          case 2:
            UTIL_DecalTrace(&children, "PaintSplatPink");
            break;
          case 0:
            UTIL_DecalTrace(&children, "PaintSplatBlue");
            break;
          default:
            break;
        }
      }
    }
    if ( (*(this->_vptr_IHandleEntity + 284))(this, 11) != 0 )
    {
      children.m256i_i32[0] = 0;
      *&children.m256i_u64[1] = 0u;
      CBaseEntity::GetAllChildren(this, &children);
      for ( i = 0; children.m256i_i32[0] > i; ++i )
      {
        v18 = *(children.m256i_i64[1] + 8 * i);
        if ( v18 != 0 )
        {
          v19 = __dynamic_cast(v18, &`typeinfo for'CBaseEntity, &`typeinfo for'IParentPropInteraction, -2);
          if ( v19 != 0 )
            (**v19)(v19, 1, index, pEvent);
        }
      }
      children.m256i_i32[0] = 0;
      if ( (children.m256i_i32[5] & 0xC0000000) == 0 )
      {
        CUtlMemory<CBaseEntity *,int>::Purge(&children.m256i_u64[1]);
        if ( (children.m256i_i32[5] & 0xC0000000) == 0 )
          CUtlMemory<CBaseEntity *,int>::Purge(&children.m256i_u64[1]);
      }
    }
  }
}


// CBreakableProp::CheckRemoveRagdolls  (line 383, @0x000000000206f6b0, libserver.so)  // inlines: NetworkStateChanged, RemoveSpawnFlags, Set, operator&=<int>
// calls: DetachAttachedRagdollsForEntity
// callers: CPhysicsProp::HandleAnyCollisionInteractions, CPhysicsProp::EnableMotion, CPhysicsProp::OnPhysGunPickup
void __fastcall CBreakableProp::CheckRemoveRagdolls(CBreakableProp *const this)
{
  unsigned int v2; // r12d

  if ( (this->m_spawnflags.m_Value & 0x800) != 0 )
  {
    DetachAttachedRagdollsForEntity(this);
    v2 = this->m_spawnflags.m_Value & 0xFFFFF7FF;
    if ( this->m_spawnflags.m_Value != v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v2;
    }
  }
}


// CBreakableProp::StickAtPosition  (line 394, @0x0000000002082530, libserver.so)  // inlines: AddSpawnFlags, NetworkStateChanged, Set, SetCollisionGroup, operator|=<int>
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::EmitSound, CBreakableProp::SetEnableMotionPosition, CBaseEntity::PhysicsEnableMotion, CCollisionProperty::SetCollisionGroup
// callers: CBreakableProp::HandleInteractionStick
// strings: "Metal.SawbladeStick"
void __fastcall CBreakableProp::StickAtPosition(
        CBreakableProp *const this,
        const Vector *const stickPosition,
        const Vector *const savePosition,
        const QAngle *const saveAngles)
{
  IPhysicsObject *Object; // rax
  unsigned int v9; // r12d

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( (*(*Object + 1504LL))(Object) != 0 )
  {
    CBaseEntity::EmitSound(this, "Metal.SawbladeStick", 0.0, 0);
    (*(this->_vptr_IHandleEntity + 128))(this, stickPosition, 0, 0);
    CBreakableProp::SetEnableMotionPosition(this, savePosition, saveAngles);
    CBaseEntity::PhysicsEnableMotion(this, 0);
    v9 = this->m_spawnflags.m_Value | 0x40;
    if ( this->m_spawnflags.m_Value != v9 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v9;
    }
    CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
  }
}


// CBreakableProp::HandleInteractionStick  (line 415, @0x0000000002082600, libserver.so)  // inlines: DotProduct, ToQAngle, operator*=, operator+=
// calls: VectorNormalize, CBaseEntity::VPhysicsGetObject, QuaternionAngles, CBreakableProp::StickAtPosition
// callers: CBreakableProp::HandleFirstCollisionInteractions, CPhysicsProp::HandleAnyCollisionInteractions
// local variable allocation has failed, the output may be wrong!
void __fastcall CBreakableProp::HandleInteractionStick(
        CBreakableProp *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  __int64 v3; // r14
  vec_t z; // eax
  IPhysicsObject *Object; // rax
  vec_t v9; // xmm1_4
  IPhysicsObject *v10; // rax
  __int64 v11; // xmm1_8
  IPhysicsCollisionData *pInternalData; // rdi
  float x; // xmm0_4
  float y; // xmm2_4
  float v15; // xmm1_4
  __int64 v16; // rax
  __int16 v17; // ax
  vec_t v18; // eax
  Vector vecDir; // [rsp+10h] [rbp-90h] BYREF
  Vector position; // [rsp+20h] [rbp-80h] BYREF
  QAngle angles; // [rsp+30h] [rbp-70h] BYREF
  Vector vecNormal; // [rsp+40h] [rbp-60h] BYREF
  Vector savePosition; // [rsp+50h] [rbp-50h] BYREF
  __int128 vecEmbed; // [rsp+60h] [rbp-40h] OVERLAPPED BYREF

  v3 = index;
  z = pEvent->preVelocity[index].z;
  *&vecDir.x = *&pEvent->preVelocity[index].x;
  vecDir.z = z;
  if ( VectorNormalize(&vecDir) > 1000.0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    *&position.x = (*(*Object + 368LL))(Object);
    position.z = v9;
    v10 = CBaseEntity::VPhysicsGetObject(this);
    *&vecEmbed = (*(*v10 + 384LL))(v10);
    *(&vecEmbed + 1) = v11;
    QuaternionAngles(&vecEmbed, &savePosition);
    pInternalData = pEvent->pInternalData;
    angles = savePosition;
    (*pInternalData->_vptr_IPhysicsCollisionData)(pInternalData, &vecNormal);
    x = vecNormal.x;
    if ( index == 1 )
    {
      x = -vecNormal.x;
      vecNormal.x = -vecNormal.x;
      y = -vecNormal.y;
      vecNormal.y = -vecNormal.y;
      v15 = -vecNormal.z;
      vecNormal.z = -vecNormal.z;
    }
    else
    {
      y = vecNormal.y;
      v15 = vecNormal.z;
    }
    if ( (((x * vecDir.x) + (y * vecDir.y)) + (v15 * vecDir.z)) > 0.3 )
    {
      v16 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
      v17 = *((*(*v16 + 16LL))(v16, pEvent->surfaceProps[index == 0].m_nHashCode, 0) + 176);
      if ( v17 != 77 && v17 != 71 && v17 != 88 )
      {
        savePosition = position;
        v18 = pEvent->preVelocity[v3].z;
        *&vecEmbed = *&pEvent->preVelocity[v3].x;
        *(&vecEmbed + 2) = v18;
        VectorNormalize(&vecEmbed);
        *&vecEmbed = *&vecEmbed * 8.0;
        *(&vecEmbed + 1) = *(&vecEmbed + 1) * 8.0;
        *(&vecEmbed + 2) = 8.0 * *(&vecEmbed + 2);
        position.x = *&vecEmbed + position.x;
        position.y = *(&vecEmbed + 1) + position.y;
        position.z = *(&vecEmbed + 2) + position.z;
        CBreakableProp::StickAtPosition(this, &position, &savePosition, &angles);
      }
    }
  }
}


// CBreakableProp::YouForgotToImplementOrDeclareServerClass  (line 464, @0x0000000002058b60, libserver.so)
int __fastcall CBreakableProp::YouForgotToImplementOrDeclareServerClass(CBreakableProp *const this)
{
  return 0;
}


// CBreakableProp::GetServerClass  (line 464, @0x000000000205dff0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBreakableProp::GetServerClass(CBreakableProp *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CBreakableProp::GetDataDescMap  (line 467, @0x0000000002058b70, libserver.so)
// globals: CBreakableProp::m_DataMap
datamap_t *__fastcall CBreakableProp::GetDataDescMap(CBreakableProp *const this)
{
  return &CBreakableProp::m_DataMap;
}


// CBreakableProp::AddDatadescMetadataKeys  (line 467, @0x000000000206f720, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBreakableProp::GetEntityClass(void)
void __fastcall CBreakableProp::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBreakableProp::GetEntityClass);
}


// CBreakableProp::GetBaseMap  (line 467, @0x000000000206f740, libserver.so)
// globals: CBaseProp::m_DataMap
datamap_t *__cdecl CBreakableProp::GetBaseMap()
{
  return &CBaseProp::m_DataMap;
}


// DataMapInit<CBreakableProp>  (line 467, @0x000000000207ebe0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBreakableProp"
// globals: `guard variable for'DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder, `guard variable for'DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc, CBaseProp::m_DataMap, CBreakableProp::GetEntityClass(void), CBreakableProp::m_DataMap, DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBreakableProp>(CBreakableProp *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder) != 0 )
  {
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_pszBase = "CBreakableProp";
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder,
      &_dso_handle);
  }
  CBreakableProp::m_DataMap.baseMap = &CBaseProp::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc) != 0 )
  {
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[35].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[36].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[37].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[38].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[39].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[40].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[41].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[42].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_pszBase), "BreakThink");
    m_Size = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size == DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[43].fieldName = v2;
    v6 = operator new[](DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v6, DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_pszBase), "AnimateThink");
    v7 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size == DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[44].fieldName = v6;
    v10 = operator new[](DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_nLenBase + 23);
    strcpy(stpcpy(v10, DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_pszBase), "RampToDefaultFadeScale");
    v11 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size == DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[45].fieldName = v10;
    v14 = operator new[](DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_nLenBase + 19);
    strcpy(stpcpy(v14, DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_pszBase), "BreakablePropTouch");
    v15 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size == DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CBreakableProp>(CBreakableProp *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[46].fieldName = v14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc);
  }
  CBreakableProp::m_DataMap.dataNumFields = 60;
  CBreakableProp::m_DataMap.dataDesc = &DataMapInit<CBreakableProp>(CBreakableProp *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBreakableProp::m_DataMap, CBreakableProp::GetEntityClass);
  return &CBreakableProp::m_DataMap;
}


// CBreakableProp::CBreakableProp  (line 568, @0x000000000206f750, libserver.so)  // inlines: CBaseProp, CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, NetworkStateChanged, Set, SetGlobalFadeScale, operator=<bool>, operator=<float>, ~CBaseAnimating, ~CBaseProp
// calls: CBaseAnimating::CBaseAnimating, CBaseModelEntity::SetFadeDistance, CBaseEntity::SetDamageOptions, CNetworkTransmitComponent::StateChanged, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CBreakableProp::CEntityInstanceEntityClass::ConstructInstance, CDynamicProp::CDynamicProp, CPhysicsProp::CPhysicsProp
void __fastcall CBreakableProp::CBreakableProp(CBreakableProp *const this)
{
  double v2; // xmm2_8
  double v3; // xmm0_8
  double v4; // xmm1_8
  double v5; // xmm2_8
  __int64 v6; // xmm3_8
  bool v7; // zf

  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_3FF0430;
  this->m_iPhysicsMode.m_Value = 0;
  this->_vptr_IBreakableWithPropData = off_3FF0D80;
  this->_vptr_IPlayerPickupVPhysics = &off_3FF0E98;
  this->m_OnBreak._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnHealthChanged._vptr_CEntityIOOutput = off_3FD2290;
  this->m_OnTakeDamage._vptr_CEntityIOOutput = off_3F7C190;
  this->m_hBreaker.m_Index = -1;
  this->m_iszPhysicsDamageTableName.u.m_Id = 0;
  this->m_iszBreakableModel.u.m_Id = 0;
  this->m_iszBasePropData.u.m_Id = 0;
  this->m_hPhysicsAttacker.m_Index = -1;
  this->m_OnPhysCannonDetach._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysCannonAnimatePreStarted._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysCannonAnimatePullStarted._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysCannonAnimatePostStarted._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysCannonPullAnimFinished._vptr_CEntityIOOutput = off_3F7C190;
  this->m_explosionBuildupSound.u.m_Id = 0;
  this->m_hLastAttacker.m_Index = -1;
  this->m_hFlareEnt.m_Index = -1;
  this->m_iszPuntSound.u.m_Id = 0;
  this->m_noGhostCollision.m_Value = 0;
  this->m_flClothScale.m_Value = 0.0;
  CBaseModelEntity::SetFadeDistance(this, COERCE_DOUBLE(3212836864LL), 0.0, v2);
  if ( this->m_flFadeScale.m_Value != 1.0 )
  {
    CNetworkTransmitComponent::StateChanged(&this->m_NetworkTransmitComponent, this, 0x444u, -1, -1);
    this->m_flFadeScale.m_Value = 1.0;
  }
  this->m_flDefaultFadeScale = 1.0;
  this->m_mpBreakMode = mp_break_t::MULTIPLAYER_BREAK_DEFAULT;
  this->m_nBreakablePieceSpawnServerSideMask = 0;
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  v6 = 1065353216;
  if ( this->m_flClothScale.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1612, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3, v4, v5, 1.0);
    this->m_flClothScale.m_Value = 1.0;
  }
  v7 = !this->m_noGhostCollision.m_Value;
  this->m_bUsePuntSound = 1;
  this->m_explosionType = explosion_t::EXPLOSION_DEFAULT;
  if ( !v7 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1608, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3, v4, v5, *&v6);
    this->m_noGhostCollision.m_Value = 0;
  }
}


// CBreakableProp::Spawn  (line 593, @0x000000000207f760, libserver.so)  // inlines: AssignTo, Base, DisableAutoFade, Element, FindKeyHash, Get<int>, GetBool, GetInt, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetGlobalFadeScale, atoi, operator=, operator=<float>, operator[]
// calls: CEntityInstance::IsAuthoritative, CBaseProp::Spawn, CBaseEntity::GetModel, GetBreakableInfoForProp, CBaseAnimating::GetModelPtr, CModel::flags, CEntityKeyValues::HasValue, CBaseEntity::GetHealth, CBaseEntity::SetDamageOptions, CBaseEntity::SetMaxHealth, CBaseAnimating::SelectWeightedSequence, CCollisionProperty::EnableTouchPersistsNotification (17 total)
// callers: CDynamicProp::SpawnServerSide, CDynamicProp::Spawn, CPhysicsProp::Spawn
// strings: "No conversion from %s to int now\n"
// globals: CBreakableProp::BreakablePropTouch(CBaseEntity *), CEntityKeyValues::sm_EmptyVariant, jpt_207FBC6
void __fastcall CBreakableProp::Spawn(CBreakableProp *const this, const CEntityKeyValues *pKeyValues)
{
  uint32 *p_m_nBreakablePieceSpawnServerSideMask; // r15
  const CModel *ModelPtr; // rax
  double v6; // xmm0_8
  int Health; // eax
  int v8; // esi
  bool v9; // zf
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  const char *m_uint64; // rax
  unsigned __int64 m_float; // rsi
  const char *v19; // rax
  float m_flDefaultFadeScale; // [rsp+Ch] [rbp-44h]
  HModel hModel; // [rsp+10h] [rbp-40h] BYREF

  if ( !CEntityInstance::IsAuthoritative(this) )
  {
    CBaseProp::Spawn(this, pKeyValues);
    return;
  }
  this->m_flDefaultFadeScale = (*(this->_vptr_IHandleEntity + 207))(this);
  this->m_flDmgModBullet = 1.0;
  this->m_flDmgModClub = 1.0;
  this->m_flDmgModExplosive = 1.0;
  this->m_flDmgModFire = 1.0;
  CBaseProp::Spawn(this, pKeyValues);
  if ( (this->m_pEntity->m_flags & 0x200) == 0 )
  {
    if ( gpGlobals->maxClients <= 1
      || breakable_multiplayer.m_pParent->m_Value.m_nValue == 0
      || (*(this->_vptr_IHandleEntity + 286))(this) == 1 )
    {
      p_m_nBreakablePieceSpawnServerSideMask = &this->m_nBreakablePieceSpawnServerSideMask;
    }
    else
    {
      p_m_nBreakablePieceSpawnServerSideMask = 0;
    }
    CBaseEntity::GetModel(&hModel, this);
    GetBreakableInfoForProp(&hModel, &this->m_iNumBreakableChunks, p_m_nBreakablePieceSpawnServerSideMask);
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    if ( ModelPtr != 0 && ((CModel::flags(ModelPtr) >> 8) & 8) != 0 )
    {
      v6 = 0.0;
      if ( this->m_flFadeScale.m_Value != 0.0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
        this->m_flFadeScale.m_Value = 0.0;
      }
      this->m_flDefaultFadeScale = 0.0;
    }
    else
    {
      *&v6 = LODWORD(this->m_flDefaultFadeScale);
      if ( *&v6 != this->m_flFadeScale.m_Value )
      {
        m_flDefaultFadeScale = this->m_flDefaultFadeScale;
        (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        *&v6 = LODWORD(m_flDefaultFadeScale);
        this->m_flFadeScale.m_Value = m_flDefaultFadeScale;
      }
    }
    if ( this->m_iNumBreakableChunks == 0 )
    {
      (*(this->_vptr_IBreakableWithPropData + 15))(&hModel, &this->IBreakableWithPropData, v6);
      if ( hModel.m_pBinding != 0 && (*(this->_vptr_IBreakableWithPropData + 19))(&this->IBreakableWithPropData) != 0 )
        this->m_iNumBreakableChunks = (*(this->_vptr_IBreakableWithPropData + 19))(&this->IBreakableWithPropData);
    }
    if ( !CEntityKeyValues::HasValue(pKeyValues, -1700328872) )
      goto LABEL_16;
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_47:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      v12 = 0;
      while ( 1 )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        if ( m_pElements[v12] == -1700328872 )
          break;
        if ( m_nCount <= ++v12 )
          goto LABEL_47;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v16 = pKeyValues->m_keyValues.m_pElements;
      else
        v16 = 0;
      p_m_value = &v16[v12].m_value;
    }
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        goto LABEL_16;
      case 1:
        m_float = p_m_value->m_float;
        goto LABEL_58;
      case 5:
        m_float = p_m_value->m_uint;
        goto LABEL_58;
      case 6:
        m_float = p_m_value->m_char;
        goto LABEL_58;
      case 26:
        if ( p_m_value->m_int64 > 0x7FFFFFFF )
        {
          m_float = 0x7FFFFFFF;
        }
        else
        {
          m_float = 0xFFFFFFFF80000000LL;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_float = p_m_value->m_uint64;
LABEL_58:
          if ( m_float == 0 )
          {
LABEL_16:
            if ( CBaseEntity::GetHealth(this) != 0
              && (this->m_iNumBreakableChunks != 0
               || (*(this->_vptr_IHandleEntity + 284))(this, 6) != 0
               || (*(this->_vptr_IHandleEntity + 284))(this, 7) != 0
               || (*(this->_vptr_IHandleEntity + 284))(this, 1) != 0
               || (*(this->_vptr_IHandleEntity + 284))(this, 12) != 0
               || (*(this->_vptr_IHandleEntity + 284))(this, 14) != 0
               || (*(this->_vptr_IHandleEntity + 284))(this, 15) != 0
               || (*(this->_vptr_IHandleEntity + 284))(this, 13) != 0) )
            {
              CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
              if ( g_pGameRules != 0
                && (*(g_pGameRules->_vptr_CGameRules + 71))(g_pGameRules) == 2
                && ((*(this->_vptr_IHandleEntity + 284))(this, 6) != 0
                 || (*(this->_vptr_IHandleEntity + 284))(this, 7) != 0
                 || (*(this->_vptr_IHandleEntity + 284))(this, 14) != 0) )
              {
                CBaseEntity::AddFlag(this, 0x10000);
              }
            }
            else
            {
              (*(this->_vptr_IHandleEntity + 157))(this, 0);
              CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
            }
            Health = CBaseEntity::GetHealth(this);
            v8 = 1;
            if ( Health > 0 )
              v8 = CBaseEntity::GetHealth(this);
            CBaseEntity::SetMaxHealth(this, v8);
            v9 = this->m_impactEnergyScale == 0.0;
            this->m_createTick = gpGlobals->tickcount;
            if ( v9 )
              this->m_impactEnergyScale = 0.1;
            this->m_preferredCarryAngles.x = -5.0;
            this->m_preferredCarryAngles.y = 0.0;
            this->m_preferredCarryAngles.z = 0.0;
            if ( CBaseAnimating::SelectWeightedSequence(this, 399).m_Data == -1 )
              this->m_nPhysgunState = 2 * (CBaseAnimating::SelectWeightedSequence(this, 398).m_Data == -1);
            else
              this->m_nPhysgunState = 3;
            this->m_hLastAttacker.m_Index = -1;
            this->m_hBreaker.m_Index = -1;
            CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
            this->m_pfnTouch.__delta = 0;
            this->m_pfnTouch.__pfn = CBreakableProp::BreakablePropTouch;
            return;
          }
        }
LABEL_56:
        (*(this->_vptr_IHandleEntity + 157))(this, m_float);
        goto LABEL_16;
      case 30:
        m_float = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_58;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_61;
        goto LABEL_56;
      case 34:
        m_float = p_m_value->m_float64;
        goto LABEL_58;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_int > 0x7FFFFFFEu )
          goto LABEL_56;
LABEL_61:
        m_float = m_uint64;
        goto LABEL_58;
      default:
        v19 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v19);
        goto LABEL_16;
    }
  }
}


// CBreakableProp::UpdateOnRemove  (line 760, @0x0000000002059b90, libserver.so)
// calls: CBaseAnimating::UpdateOnRemove
// callers: CDynamicProp::UpdateOnRemove, CPhysicsProp::UpdateOnRemove
void __fastcall CBreakableProp::UpdateOnRemove(CBreakableProp *const this)
{
  CBaseAnimating::UpdateOnRemove(this);
}


// CBreakableProp::DisableAutoFade  (line 779, @0x000000000206f990, libserver.so)  // inlines: NetworkStateChanged, Set, SetGlobalFadeScale, operator=<float>
// callers: CBasePropDoor::Spawn
void __fastcall CBreakableProp::DisableAutoFade(CBreakableProp *const this)
{
  if ( this->m_flFadeScale.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeScale.m_Value = 0.0;
  }
  this->m_flDefaultFadeScale = 0.0;
}


// CBreakableProp::CopyFadeFrom  (line 789, @0x000000000206f9f0, libserver.so)  // inlines: NetworkStateChanged, Set, SetGlobalFadeScale, curtime, operator=<float>
// calls: CBaseEntity::GetNextThink, CBaseEntity::ThinkSet
// callers: BreakModelCreateSingle
// globals: s_pFadeScaleThink, CBreakableProp::RampToDefaultFadeScale(void)
void __fastcall CBreakableProp::CopyFadeFrom(CBreakableProp *const this, CBreakableProp *pSource)
{
  float v4; // xmm0_4
  float NextThink; // xmm0_4
  CGlobalVars *v6; // r12
  CGlobalVars *v7; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm2_4
  float interval_per_tick; // xmm1_4
  void (__fastcall *v11)(__int64); // rax
  float flNextThinka; // [rsp+Ch] [rbp-24h]
  float flNextThink; // [rsp+Ch] [rbp-24h]

  this->m_flDefaultFadeScale = pSource->m_flDefaultFadeScale;
  v4 = (*(pSource->_vptr_IHandleEntity + 207))(pSource);
  if ( v4 != this->m_flFadeScale.m_Value )
  {
    flNextThink = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeScale.m_Value = flNextThink;
  }
  if ( (*(this->_vptr_IHandleEntity + 207))(this) != this->m_flDefaultFadeScale )
  {
    NextThink = CBaseEntity::GetNextThink(pSource, s_pFadeScaleThink);
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v7 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v7 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          flNextThinka = NextThink;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v7 = gpGlobals;
          NextThink = flNextThinka;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    else
    {
      v7 = 0;
      m_flCurrentTime = 0.0;
    }
    interval_per_tick = v7->interval_per_tick;
    if ( (m_flCurrentTime + interval_per_tick) > NextThink )
    {
      if ( !v7->m_bEnableAssertions && !v7->m_bInSimulation )
      {
        v11 = v7->m_pfnWarningFunc;
        if ( v11 != 0 )
        {
          v11(1);
          interval_per_tick = gpGlobals->interval_per_tick;
        }
      }
      NextThink = interval_per_tick + v7->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, CBreakableProp::RampToDefaultFadeScale, NextThink, s_pFadeScaleThink, 0);
  }
}


// CBreakableProp::InputEnablePhyscannonPickup  (line 810, @0x0000000002059f90, libserver.so)  // inlines: RemoveEFlags
void __fastcall CBreakableProp::InputEnablePhyscannonPickup(CBreakableProp *const this, inputdata_t *const inputdata)
{
  this->m_iEFlags &= ~0x40000000u;
}


// CBreakableProp::InputDisablePhyscannonPickup  (line 815, @0x0000000002058b80, libserver.so)  // inlines: AddEFlags
void __fastcall CBreakableProp::InputDisablePhyscannonPickup(CBreakableProp *const this, inputdata_t *const inputdata)
{
  this->m_iEFlags |= 0x40000000u;
}


// CBreakableProp::BreakablePropTouch  (line 825, @0x000000000205cfb0, libserver.so)  // inlines: FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, Length, Set, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator-, operator=
// calls: CBaseEntity::GetHealth, CBaseEntity::GetGroundEntity, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::SetDamageOptions, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::GetAbsOrigin, CalculateMeleeDamageForce, CBaseEntity::TakeDamage, _Unwind_Resume
// globals: CBreakableProp::BreakThink(void)
void __fastcall CBreakableProp::BreakablePropTouch(CBreakableProp *const this, CBaseEntity *pOther)
{
  unsigned int m_Value; // eax
  float v5; // xmm1_4
  __m128d v6; // xmm0
  float v7; // r13d
  CBreakableProp *GroundEntity; // r13
  CEntityIdentity *m_pEntity; // rcx
  __int16 v10; // si
  int v11; // edx
  double v12; // xmm1_8
  double v13; // xmm0_8
  CGlobalVars *v14; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  void (__fastcall *v16)(CBreakableProp *const, CTakeDamageInfo *); // r15
  const Vector *AbsOrigin; // r15
  const Vector *v18; // r13
  const Vector *v19; // rax
  vec_t v20; // xmm2_4
  vec_t v21; // xmm1_4
  Vector vecMeleeDir; // [rsp+10h] [rbp-D0h] BYREF
  CTakeDamageInfo info; // [rsp+20h] [rbp-C0h] BYREF

  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x10) == 0 )
  {
    if ( (m_Value & 0x20) == 0 )
      return;
    goto LABEL_7;
  }
  info._vptr_CTakeDamageInfo = COERCE_INT_((*(pOther->_vptr_IHandleEntity + 172))(pOther));
  info.m_vecDamageForce.x = v5;
  v6.m128d_f64[1] = fsqrt(
                      ((*&info._vptr_CTakeDamageInfo * *&info._vptr_CTakeDamageInfo)
                     + (*(&info._vptr_CTakeDamageInfo + 1) * *(&info._vptr_CTakeDamageInfo + 1)))
                    + (v5 * v5));
  v6.m128d_f64[0] = v6.m128d_f64[1] * 0.01;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v6))));
  if ( v7 >= CBaseEntity::GetHealth(this) )
  {
    CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
    v16 = *(this->_vptr_IHandleEntity + 90);
    CTakeDamageInfo::CTakeDamageInfo(&info, pOther, pOther, v7, 1, 0);
    v16(this, &info);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
    CTakeDamageInfo::CTakeDamageInfo(&info, pOther, pOther, v7 * 0.25, 4, 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v18 = CBaseEntity::GetAbsOrigin(this);
    v19 = CBaseEntity::GetAbsOrigin(pOther);
    v20 = v19->x - v18->x;
    v21 = v19->y - v18->y;
    vecMeleeDir.z = v19->z - v18->z;
    vecMeleeDir.x = v20;
    vecMeleeDir.y = v21;
    CalculateMeleeDamageForce(&info, &vecMeleeDir, AbsOrigin, 1.0);
    CBaseEntity::TakeDamage(pOther, &info);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
  if ( (this->m_spawnflags.m_Value & 0x20) != 0 )
  {
LABEL_7:
    GroundEntity = CBaseEntity::GetGroundEntity(pOther);
    if ( GroundEntity == this )
    {
      if ( pOther != 0 && (m_pEntity = pOther->m_pEntity) != 0 )
      {
        v10 = 0x7FFF;
        v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hBreaker.m_Index) = v10 | this->m_hBreaker.m_Index & 0x8000;
        this->m_hBreaker.m_Index = (v11 << 15) | this->m_hBreaker.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hBreaker.m_Index = -1;
      }
      if ( this->m_think.__pfn != CBreakableProp::BreakThink || this->m_think.__delta != 0 )
      {
        CBaseEntity::ThinkSet(GroundEntity, CBreakableProp::BreakThink, 0.0, 0, 0);
        v13 = 0.0;
        v14 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          *&v13 = LODWORD(v14->m_flCurrentTime);
        }
        *&v13 = *&v13 + this->m_flPressureDelay;
        CBaseEntity::SetNextThink(GroundEntity, v13, v12, 0);
      }
    }
  }
}


// CBreakableProp::OnTakeDamage  (line 891, @0x0000000002079b50, libserver.so)  // inlines: CEntityHandle, CVariantBase, FastSqrt, FireOutput, FireOutput<float>, Free, Get, GetAttacker, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInflictor, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, Length, LookupEntity, ScaleDamage, Set, SetDamage, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, fpmin, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, ~CVariantBase
// calls: CTakeDamageInfo::CTakeDamageInfo, GetBreakableDamage, CBaseEntity::GetHealth, CBaseEntity::GetDamageOptions, CBaseEntity::SetDamageOptions, CBaseEntity::OnTakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CEntityIOOutput::FireOutputInternal, CBaseEntity::EmitSound, CEntityHandle::operator CEntityInstance*, CBaseEntity::SetMaxHealth, CBaseEntity::ThinkSet (16 total)
// callers: CPropDoorRotatingBreakable::OnTakeDamage, CPhysicsProp::OnTakeDamage
// globals: CEntityHandle::gm_pEntityList, CBreakableProp::BreakThink(void)
int __fastcall CBreakableProp::OnTakeDamage(CBreakableProp *const this, const CTakeDamageInfo *const inputInfo)
{
  uint32 m_Index; // eax
  unsigned __int64 v5; // rdx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rcx
  int m_bitsDamageType; // eax
  int Health; // r13d
  DamageOptions_t v11; // r13
  int v12; // r14d
  int v13; // ebx
  bool v15; // r13
  int v16; // r13d
  __m128i v17; // xmm5
  float v18; // r14d
  int v19; // eax
  float v20; // xmm0_4
  CEntityInstance *v21; // rsi
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  CEntityInstance *v24; // rsi
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  CEntityInstance *m_pInstance; // rax
  unsigned __int16 v28; // dx
  int v29; // esi
  int v30; // eax
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CEntityInstance *v33; // r14
  CEntityIdentity *m_pEntity; // rdx
  int v35; // eax
  __int16 v36; // cx
  CEntityInstance *v37; // rax
  CEntityIdentity *v38; // rdx
  int v39; // eax
  __int16 v40; // cx
  void (__fastcall *v41)(CBreakableProp *const, _QWORD); // r13
  unsigned int v42; // eax
  double v43; // xmm0_8
  double v44; // xmm1_8
  DamageOptions_t DamageOptions; // r14
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rdx
  void (__fastcall *v48)(CBreakableProp *const, _QWORD); // r13
  unsigned int v49; // eax
  void (__fastcall *v50)(CBreakableProp *const, _QWORD, _QWORD, double, double); // r13
  double v51; // xmm0_8
  __m128i v52; // xmm2
  float v53; // r14d
  int v54; // eax
  __m128i v55; // xmm2
  CEntityInstance *v56; // rax
  float64 v57; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  int v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  int v63; // eax
  int v64; // eax
  int v65; // eax
  float flBurnTime; // [rsp+8h] [rbp-D8h]
  float flPropDamage; // [rsp+Ch] [rbp-D4h]
  float flPropDamagea; // [rsp+Ch] [rbp-D4h]
  float flPropDamageb; // [rsp+Ch] [rbp-D4h]
  CVariant value; // [rsp+10h] [rbp-D0h] BYREF
  CVariant v71; // [rsp+20h] [rbp-C0h] BYREF
  CTakeDamageInfo info; // [rsp+30h] [rbp-B0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&info, inputInfo);
  if ( this->m_iMinHealthDmg > info.m_flDamage )
    goto LABEL_17;
  if ( (*(this->_vptr_IHandleEntity + 88))(this, &info) == 0 )
  {
    v13 = 1;
    goto LABEL_18;
  }
  m_Index = info.m_hAttacker.m_Index;
  if ( info.m_hAttacker.m_Index + 2 > 1 )
  {
    v5 = info.m_hAttacker.m_Index & 0x7FFF;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9)];
    if ( v6 != 0 )
    {
      v7 = &v6[info.m_hAttacker.m_Index & 0x1FF];
      if ( v7 != 0 && info.m_hAttacker.m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
      {
        if ( (*(v7->m_pInstance->_vptr_IHandleEntity + 147))(v7->m_pInstance) != 0 )
        {
          if ( info.m_hAttacker.m_Index + 2 <= 1 )
            goto LABEL_74;
          v46 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
          if ( v46 == 0 )
            goto LABEL_74;
          v47 = &v46[info.m_hAttacker.m_Index & 0x1FF];
          if ( v47 == 0 )
            goto LABEL_74;
          if ( info.m_hAttacker.m_Index != v47->m_EHandle.m_Index )
            goto LABEL_74;
          if ( v47->m_pInstance == 0 )
            goto LABEL_74;
          m_pEntity = v47->m_pInstance->m_pEntity;
          if ( m_pEntity == 0 )
            goto LABEL_74;
LABEL_51:
          v35 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v36 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v36 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hLastAttacker.m_Index) = v36 | this->m_hLastAttacker.m_Index & 0x8000;
          this->m_hLastAttacker.m_Index = (v35 << 15) | this->m_hLastAttacker.m_Index & 0x7FFF;
          goto LABEL_9;
        }
        m_Index = info.m_hAttacker.m_Index;
        if ( info.m_hAttacker.m_Index + 2 <= 1 )
          goto LABEL_9;
        v5 = info.m_hAttacker.m_Index & 0x7FFF;
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9)];
        if ( v6 == 0 )
          goto LABEL_9;
      }
      v8 = &v6[v5 & 0x1FF];
      if ( v8 == 0 )
        goto LABEL_9;
      if ( m_Index != v8->m_EHandle.m_Index )
        goto LABEL_9;
      m_pInstance = v8->m_pInstance;
      if ( v8->m_pInstance == 0 )
        goto LABEL_9;
      if ( HIDWORD(m_pInstance[11].m_pEntity) == -1 )
      {
        v28 = 0x7FFF;
        v29 = 0x7FFF;
      }
      else
      {
        v28 = WORD2(m_pInstance[11].m_pEntity) & 0x7FFF;
        v29 = v28;
      }
      v30 = (HIDWORD(m_pInstance[11].m_pEntity) >> 15 << 15) | v28 & 0x7FFF;
      v71.m_int = v30;
      if ( (v30 + 2) <= 1 )
        goto LABEL_9;
      v31 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v29 >> 9];
      if ( v31 == 0 )
        goto LABEL_9;
      v32 = &v31[v29 & 0x1FF];
      if ( v32 == 0 )
        goto LABEL_9;
      if ( v30 != v32->m_EHandle.m_Index )
        goto LABEL_9;
      v33 = v32->m_pInstance;
      if ( v32->m_pInstance == 0 || (*(v33->_vptr_IHandleEntity + 147))(v32->m_pInstance) == 0 )
        goto LABEL_9;
      m_pEntity = v33->m_pEntity;
      if ( m_pEntity == 0 )
      {
LABEL_74:
        this->m_hLastAttacker.m_Index = -1;
        goto LABEL_9;
      }
      goto LABEL_51;
    }
  }
LABEL_9:
  flPropDamage = GetBreakableDamage(&info, &this->IBreakableWithPropData);
  info.m_flDamage = flPropDamage;
  if ( this->m_iMinHealthDmg > flPropDamage )
  {
LABEL_17:
    v13 = 0;
    goto LABEL_18;
  }
  if ( this->m_createTick == gpGlobals->tickcount )
  {
    DamageOptions = CBaseEntity::GetDamageOptions(this);
    CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
    v16 = CBaseEntity::OnTakeDamage(this, &info);
    CBaseEntity::SetDamageOptions(this, DamageOptions);
LABEL_40:
    v13 = v16;
    goto LABEL_18;
  }
  if ( (this->m_fFlags.m_Value & 0x8000000) != 0 )
  {
    m_bitsDamageType = inputInfo->m_bitsDamageType;
    if ( (m_bitsDamageType & 8) != 0 && (m_bitsDamageType & 0x10000000) == 0 )
      goto LABEL_17;
  }
  Health = CBaseEntity::GetHealth(this);
  if ( (info.m_bitsDamageType & 0x84) == 0 || (*(this->_vptr_IHandleEntity + 284))(this, 15) == 0 )
  {
    v15 = flPropDamage >= Health;
    if ( !v15 )
      goto LABEL_22;
    if ( this->m_explosionDelay > 0.0
      && (this->m_think.__pfn != CBreakableProp::BreakThink || this->m_think.__delta != 0) )
    {
      if ( this->m_explosionBuildupSound.u.m_Id != 0 )
        CBaseEntity::EmitSound(this, this->m_explosionBuildupSound.u.m_pAsString, 0.0, 0);
      v37 = CEntityHandle::operator CEntityInstance *(&info.m_hInflictor);
      if ( v37 != 0 && (v38 = v37->m_pEntity) != 0 )
      {
        v39 = (v38->m_EHandle.m_Index >> 15) - (v38->m_flags & 1);
        v40 = 0x7FFF;
        if ( v38->m_EHandle.m_Index != -1 )
          v40 = v38->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hBreaker.m_Index) = v40 | this->m_hBreaker.m_Index & 0x8000;
        this->m_hBreaker.m_Index = (v39 << 15) | this->m_hBreaker.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hBreaker.m_Index = -1;
      }
      CBaseEntity::SetMaxHealth(this, 100);
      v41 = *(this->_vptr_IHandleEntity + 157);
      v42 = (*(this->_vptr_IHandleEntity + 156))(this);
      v41(this, v42);
      info.m_flDamage = 1.0;
      CBaseEntity::ThinkSet(this, CBreakableProp::BreakThink, 0.0, 0, 0);
      *&v43 = CGlobalVarsBase::curtime(gpGlobals, 0) + this->m_explosionDelay;
      CBaseEntity::SetNextThink(this, v43, v44, 0);
      goto LABEL_25;
    }
    if ( (info.m_bitsDamageType & 0x40) != 0 && (*(this->_vptr_IHandleEntity + 284))(this, 13) != 0 )
    {
      v56 = CEntityHandle::operator CEntityInstance *(&info.m_hInflictor);
      if ( v56 != 0 )
      {
        v57 = (*(v56->_vptr_IHandleEntity + 62))(v56);
        vptr_IHandleEntity = this->_vptr_IHandleEntity;
        *&v71.m_type = v59;
        v71.m_float64 = v57;
        value.m_uint64 = (vptr_IHandleEntity[62])(this);
        *&value.m_type = v60;
        v61 = fsqrt(
                (((value.m_float - v71.m_float) * (value.m_float - v71.m_float))
               + ((*(&value.m_pszString + 1) - *(&v71.m_pszString + 1))
                * (*(&value.m_pszString + 1) - *(&v71.m_pszString + 1))))
              + ((v60 - *&v71.m_type) * (v60 - *&v71.m_type)));
        if ( v61 < 32.0 )
        {
          (*(*random_valve + 8LL))(random_valve, 0.1, 0.2);
        }
        else
        {
          if ( v61 > 256.0 )
            flBurnTime = 5.0;
          else
            flBurnTime = fmaxf(0.5, (v61 * 0.00390625) * 5.0);
          v62 = (*(*random_valve + 8LL))(random_valve, 0.0, 0.5) + flBurnTime;
        }
        flPropDamagea = fminf(CBaseEntity::GetHealth(this), v62 * 5.0);
        v63 = CBaseEntity::GetHealth(this);
        info.m_flDamage = info.m_flDamage * ((v63 - flPropDamagea) / info.m_flDamage);
        v15 = info.m_flDamage >= CBaseEntity::GetHealth(this);
      }
    }
    if ( !v15 )
    {
LABEL_22:
      if ( (info.m_bitsDamageType & 0x40) != 0 || (info.m_bitsDamageType & 8) != 0 )
        goto LABEL_76;
      if ( (info.m_bitsDamageType & 2) == 0 || (*(this->_vptr_IHandleEntity + 284))(this, 14) == 0 )
        goto LABEL_25;
      v64 = CBaseEntity::GetHealth(this);
      flPropDamageb = v64 - info.m_flDamage;
      if ( ((*(this->_vptr_IHandleEntity + 156))(this) / 2) >= flPropDamageb )
      {
        if ( (this->m_fFlags.m_Value & 0x8000000) != 0 )
        {
LABEL_95:
          v65 = CBaseEntity::GetHealth(this);
          info.m_flDamage = (v65 / info.m_flDamage) * info.m_flDamage;
          goto LABEL_25;
        }
        v48 = *(this->_vptr_IHandleEntity + 157);
        v49 = (*(this->_vptr_IHandleEntity + 156))(this);
        v48(this, v49);
LABEL_76:
        v50 = *(this->_vptr_IHandleEntity + 239);
        v51 = (*(*random_valve + 8LL))(random_valve, 10.0, 15.0);
        v50(this, 0, 0, v51, 0.0);
        goto LABEL_25;
      }
      if ( (this->m_fFlags.m_Value & 0x8000000) != 0 )
        goto LABEL_95;
    }
LABEL_25:
    v16 = CBaseEntity::OnTakeDamage(this, &info);
    *v17.m128i_i32 = CBaseEntity::GetHealth(this);
    v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    v19 = (*(this->_vptr_IHandleEntity + 156))(this);
    v20 = 1.0;
    if ( (v18 / v19) <= 1.0 )
    {
      *v52.m128i_i32 = CBaseEntity::GetHealth(this);
      v53 = COERCE_FLOAT(_mm_cvtsi128_si32(v52));
      v54 = (*(this->_vptr_IHandleEntity + 156))(this);
      v20 = 0.0;
      if ( (v53 / v54) >= 0.0 )
      {
        *v55.m128i_i32 = CBaseEntity::GetHealth(this);
        v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v55)) / (*(this->_vptr_IHandleEntity + 156))(this);
      }
    }
    v21 = 0;
    if ( info.m_hAttacker.m_Index + 2 > 1 )
    {
      v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = &v22[info.m_hAttacker.m_Index & 0x1FF];
        if ( v23 != 0 && info.m_hAttacker.m_Index == v23->m_EHandle.m_Index )
          v21 = v23->m_pInstance;
      }
    }
    this->m_OnHealthChanged.m_Value = v20;
    value.m_type = 1;
    value.m_float = v20;
    value.m_flags = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnHealthChanged, v21, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    v24 = 0;
    if ( info.m_hAttacker.m_Index + 2 > 1 )
    {
      v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v25 != 0 )
      {
        v26 = &v25[info.m_hAttacker.m_Index & 0x1FF];
        if ( v26 != 0 && info.m_hAttacker.m_Index == v26->m_EHandle.m_Index )
          v24 = v26->m_pInstance;
      }
    }
    v71.m_type = 0;
    v71.m_flags = 0;
    v71.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnTakeDamage, v24, this, &v71, 0.0);
    if ( (v71.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v71.m_uint64);
    goto LABEL_40;
  }
  v11 = CBaseEntity::GetDamageOptions(this);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
  v12 = CBaseEntity::OnTakeDamage(this, &info);
  CBaseEntity::SetDamageOptions(this, v11);
  v13 = v12;
LABEL_18:
  CTakeDamageInfo::~CTakeDamageInfo(&info);
  return v13;
}


// CBreakableProp::Event_Killed  (line 1125, @0x000000000207b790, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::VPhysicsGetObject, CBreakableProp::Break, CBaseEntity::Event_Killed, CBaseEntity::PhysicsEnableMotion
// callers: CPropDoorRotatingBreakable::Event_Killed
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBreakableProp::Event_Killed(CBreakableProp *const this, const CTakeDamageInfo *const info)
{
  IPhysicsObject *Object; // rax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 && (*(*Object + 1512LL))(Object) == 0 )
  {
    CBaseEntity::PhysicsEnableMotion(this, 1);
    (*(this->_vptr_IHandleEntity + 55))(this, info);
  }
  m_Index = info->m_hInflictor.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[info->m_hInflictor.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  CBreakableProp::Break(this, m_pInstance, info);
  CBaseEntity::Event_Killed(this, info);
}


// CBreakableProp::InputBreak  (line 1144, @0x000000000207b850, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, operator=
// calls: CTakeDamageInfo::CTakeDamageInfo, CBreakableProp::Break, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CBreakableProp::InputBreak(CBreakableProp *const this, inputdata_t *const inputdata)
{
  CEntityIdentity *m_pEntity; // rcx
  __int16 v5; // dx
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&info);
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.m_hAttacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
  }
  else
  {
    info.m_hAttacker.m_Index = -1;
  }
  CBreakableProp::Break(this, inputdata->pActivator, &info);
  CTakeDamageInfo::~CTakeDamageInfo(&info);
}


// CBreakableProp::InputAddHealth  (line 1156, @0x000000000207bb60, libserver.so)  // inlines: Int, operator int
// calls: CBaseEntity::GetHealth, CBreakableProp::UpdateHealth
void __fastcall CBreakableProp::InputAddHealth(CBreakableProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // r13
  int Health; // eax
  int16 m_type; // cx
  int m_float; // esi

  pActivator = inputdata->pActivator;
  Health = CBaseEntity::GetHealth(this);
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  CBreakableProp::UpdateHealth(this, Health + m_float, pActivator);
}


// CBreakableProp::InputRemoveHealth  (line 1165, @0x000000000207bbd0, libserver.so)  // inlines: Int, operator int
// calls: CBaseEntity::GetHealth, CBreakableProp::UpdateHealth
void __fastcall CBreakableProp::InputRemoveHealth(CBreakableProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // r13
  int Health; // eax
  int16 m_type; // cx
  int m_float; // edx

  pActivator = inputdata->pActivator;
  Health = CBaseEntity::GetHealth(this);
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  CBreakableProp::UpdateHealth(this, Health - m_float, pActivator);
}


// CBreakableProp::InputSetHealth  (line 1174, @0x000000000207bc40, libserver.so)  // inlines: Int, operator int
// calls: CBreakableProp::UpdateHealth
void __fastcall CBreakableProp::InputSetHealth(CBreakableProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pActivator; // rdx

  m_type = inputdata->value.m_type;
  pActivator = inputdata->pActivator;
  if ( m_type == 1 )
  {
    CBreakableProp::UpdateHealth(this, inputdata->value.m_float, pActivator);
  }
  else if ( m_type == 34 )
  {
    CBreakableProp::UpdateHealth(this, inputdata->value.m_float64, pActivator);
  }
  else
  {
    CBreakableProp::UpdateHealth(this, inputdata->value.m_int, pActivator);
  }
}


// CBreakableProp::UpdateHealth  (line 1186, @0x000000000207b910, libserver.so)  // inlines: CVariantBase, FireOutput<float>, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, operator=, ~CVariantBase
// calls: CBaseEntity::GetHealth, CEntityIOOutput::FireOutputInternal, CTakeDamageInfo::CTakeDamageInfo, CBreakableProp::Break, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::SetMaxHealth, _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CBreakableProp::InputAddHealth, CBreakableProp::InputRemoveHealth, CBreakableProp::InputSetHealth
bool __fastcall CBreakableProp::UpdateHealth(CBreakableProp *const this, int iNewHealth, CBaseEntity *pActivator)
{
  int Health; // r12d
  int v7; // eax
  float v8; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx
  int v13; // r12d
  int v14; // eax
  int v15; // r12d
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h] BYREF

  if ( CBaseEntity::GetHealth(this) == iNewHealth )
    return 1;
  (*(this->_vptr_IHandleEntity + 157))(this, iNewHealth);
  if ( (*(this->_vptr_IHandleEntity + 156))(this) == 0 )
    CBaseEntity::SetMaxHealth(this, 1);
  Health = CBaseEntity::GetHealth(this);
  v7 = (*(this->_vptr_IHandleEntity + 156))(this);
  v8 = 1.0;
  if ( (Health / v7) <= 1.0 )
  {
    v13 = CBaseEntity::GetHealth(this);
    v14 = (*(this->_vptr_IHandleEntity + 156))(this);
    v8 = 0.0;
    if ( (v13 / v14) >= 0.0 )
    {
      v15 = CBaseEntity::GetHealth(this);
      v8 = v15 / (*(this->_vptr_IHandleEntity + 156))(this);
    }
  }
  this->m_OnHealthChanged.m_Value = v8;
  LODWORD(info.m_vecDamageForce.x) = 1;
  *&info._vptr_CTakeDamageInfo = v8;
  CEntityIOOutput::FireOutputInternal(&this->m_OnHealthChanged, pActivator, this, &info, 0.0);
  if ( (BYTE2(info.m_vecDamageForce.x) & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, info._vptr_CTakeDamageInfo);
    if ( CBaseEntity::GetHealth(this) > 0 )
      return 1;
  }
  else if ( CBaseEntity::GetHealth(this) > 0 )
  {
    return 1;
  }
  CTakeDamageInfo::CTakeDamageInfo(&info);
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.m_hAttacker.m_Index) = v12 | info.m_hAttacker.m_Index & 0x8000;
    info.m_hAttacker.m_Index = (v11 << 15) | info.m_hAttacker.m_Index & 0x7FFF;
  }
  else
  {
    info.m_hAttacker.m_Index = -1;
  }
  CBreakableProp::Break(this, pActivator, &info);
  CTakeDamageInfo::~CTakeDamageInfo(&info);
  return 0;
}


// CBreakableProp::OnAttemptPhysGunPickup  (line 1221, @0x0000000002079590, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetBaseAnimatingController, GetSkeletonInstance, ResetSequence, SetPlaybackRate, curtime, ~CVariantBase
// calls: CBaseAnimating::StudioFrameAdvanceManual, CBaseAnimating::ResetClientsideFrame, CBaseAnimating::DispatchAnimEvents, CBaseAnimating::SelectWeightedSequence, CBaseEntity::ThinkSet, CEntityIOOutput::FireOutputInternal, CGlobalVarsBase::curtime, CBaseAnimating::ResetSequence, CBaseAnimating::SetPlaybackRate, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: s_pPropAnimateThink, CBreakableProp::AnimateThink(void)
bool __fastcall CBreakableProp::OnAttemptPhysGunPickup(
        CBreakableProp *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason)
{
  double v3; // xmm1_8
  char m_nPhysgunState; // al
  __int64 frametime_low; // xmm0_8
  HSequence v9; // r14d
  CGlobalVars *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v12; // xmm0_4
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  HSequence v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  HSequence v24; // r13d
  CGlobalVars *v25; // rdi
  float v26; // xmm0_4
  float v27; // xmm1_4
  HSequence v28; // eax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_nPhysgunState = this->m_nPhysgunState;
  if ( m_nPhysgunState == 2 )
    return 1;
  if ( m_nPhysgunState == 5 )
    return 0;
  if ( m_nPhysgunState != 0 )
  {
    if ( m_nPhysgunState != 3 )
      goto LABEL_5;
    if ( reason == PhysGunPickup_t::PUNTED_BY_CANNON )
      return 0;
    v9.m_Data = CBaseAnimating::SelectWeightedSequence(this, 400).m_Data;
    if ( v9.m_Data == -1 )
    {
      v28.m_Data = CBaseAnimating::SelectWeightedSequence(this, 399).m_Data;
      this->m_nPhysgunState = 4;
      v9.m_Data = v28.m_Data;
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnPhysCannonAnimatePullStarted, 0, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_21;
    }
    else
    {
      this->m_nPhysgunState = 6;
      v10 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v12 = v10->m_flCurrentTime + 0.1;
      }
      else
      {
        v12 = 0.1;
      }
      CBaseEntity::ThinkSet(this, CBreakableProp::AnimateThink, v12, s_pPropAnimateThink, 0);
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnPhysCannonAnimatePreStarted, 0, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_21;
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
LABEL_21:
    v13 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
    if ( v13 != 0 )
      v14 = *(v13 + 736);
    else
      v14 = 0;
    (*(*v14 + 184LL))(v14, v9.m_Data, 1);
    v15 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
    if ( v15 != 0 )
      v16 = *(v15 + 736);
    else
      v16 = 0;
    (*(*v16 + 176LL))(v16, 1.0);
    CBaseAnimating::ResetClientsideFrame(this);
    m_nPhysgunState = this->m_nPhysgunState;
LABEL_5:
    if ( (m_nPhysgunState - 6) > 1u )
    {
      if ( m_nPhysgunState != 4 )
      {
        frametime_low = 1056964608;
        if ( reason == PhysGunPickup_t::PICKED_UP_BY_CANNON )
          frametime_low = LODWORD(gpGlobals->frametime);
        CBaseAnimating::StudioFrameAdvanceManual(this, *&frametime_low, v3);
        CBaseAnimating::ResetClientsideFrame(this);
        CBaseAnimating::DispatchAnimEvents(this, this);
        if ( (*(this->_vptr_IHandleEntity + 225))(this) == 0 )
          return 0;
        v17 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
        v18 = v17 != 0 ? *(v17 + 736) : 0LL;
        (*(*v18 + 176LL))(v18, 1.0);
        value.m_type = 0;
        value.m_flags = 0;
        this->m_nPhysgunState = 2;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPhysCannonDetach, 0, this, &value, 0.0);
        if ( (value.m_flags & 1) == 0 )
          return 0;
        goto LABEL_49;
      }
      if ( reason == PhysGunPickup_t::PUNTED_BY_CANNON )
        return 0;
      CBaseAnimating::StudioFrameAdvanceManual(this, COERCE_DOUBLE(LODWORD(gpGlobals->frametime)), v3);
      CBaseAnimating::DispatchAnimEvents(this, this);
      if ( (*(this->_vptr_IHandleEntity + 225))(this) == 0 )
        return 0;
      v24.m_Data = CBaseAnimating::SelectWeightedSequence(this, 401).m_Data;
      if ( v24.m_Data == -1 )
      {
        this->m_nPhysgunState = 5;
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPhysCannonPullAnimFinished, 0, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
LABEL_49:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      }
      else
      {
        v25 = gpGlobals;
        this->m_nPhysgunState = 7;
        v26 = CGlobalVarsBase::curtime(v25, 0) + 0.1;
        CBaseEntity::ThinkSet(this, CBreakableProp::AnimateThink, v26, s_pPropAnimateThink, 0);
        CBaseAnimating::ResetSequence(this, v24);
        CBaseAnimating::SetPlaybackRate(this, COERCE_DOUBLE(1065353216), v27);
        CBaseAnimating::ResetClientsideFrame(this);
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPhysCannonAnimatePostStarted, 0, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          goto LABEL_49;
      }
    }
    return 0;
  }
  v19.m_Data = CBaseAnimating::SelectWeightedSequence(this, 398).m_Data;
  v20 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v20 != 0 )
    v21 = *(v20 + 736);
  else
    v21 = 0;
  (*(*v21 + 184LL))(v21, v19.m_Data, 1);
  v22 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v22 != 0 )
    v23 = *(v22 + 736);
  else
    v23 = 0;
  (*(*v23 + 176LL))(v23, 0.0);
  CBaseAnimating::ResetClientsideFrame(this);
  this->m_nPhysgunState = 1;
  return 0;
}


// CBreakableProp::AnimateThink  (line 1328, @0x0000000002079390, libserver.so)  // inlines: CVariantBase, FireOutput, Free, curtime, ~CVariantBase
// calls: CBaseAnimating::StudioFrameAdvanceManual, CBaseAnimating::DispatchAnimEvents, CBaseEntity::SetNextThink, CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::ResetSequence, CBaseAnimating::SetPlaybackRate, CBaseAnimating::ResetClientsideFrame, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: s_pPropAnimateThink
void __fastcall CBreakableProp::AnimateThink(CBreakableProp *const this)
{
  double v1; // xmm1_8
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8
  HSequence v7; // eax
  float v8; // xmm1_4
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( (this->m_nPhysgunState - 6) <= 1u )
  {
    CBaseAnimating::StudioFrameAdvanceManual(this, COERCE_DOUBLE(1036831949), v1);
    CBaseAnimating::DispatchAnimEvents(this, this);
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v6 = v4->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v6 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v6, v3, s_pPropAnimateThink);
    if ( (*(this->_vptr_IHandleEntity + 225))(this) != 0 )
    {
      if ( this->m_nPhysgunState == 6 )
      {
        this->m_nPhysgunState = 4;
        v7.m_Data = CBaseAnimating::SelectWeightedSequence(this, 399).m_Data;
        CBaseAnimating::ResetSequence(this, v7);
        CBaseAnimating::SetPlaybackRate(this, COERCE_DOUBLE(1065353216), v8);
        CBaseAnimating::ResetClientsideFrame(this);
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPhysCannonAnimatePullStarted, 0, this, &value, 0.0);
        if ( (value.m_flags & 1) == 0 )
          goto LABEL_13;
      }
      else
      {
        this->m_nPhysgunState = 5;
        value.m_type = 0;
        value.m_uint64 = 0;
        value.m_flags = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPhysCannonPullAnimFinished, 0, this, &value, 0.0);
        if ( (value.m_flags & 1) == 0 )
        {
LABEL_13:
          CBaseEntity::ThinkSet(this, 0LL, -1.0, s_pPropAnimateThink, 0);
          return;
        }
      }
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      goto LABEL_13;
    }
  }
}


// CBreakableProp::SetPhysicsAttacker  (line 1364, @0x000000000206fb80, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
void __fastcall CBreakableProp::SetPhysicsAttacker(
        CBreakableProp *const this,
        CBasePlayer *pEntity,
        float a3,
        float flTime)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  if ( pEntity != 0 && (m_pEntity = pEntity->m_pEntity) != 0 )
  {
    v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v6 = 0x7FFF;
    else
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    this->m_flLastPhysicsInfluenceTime = a3;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v6 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v5 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
    this->m_flLastPhysicsInfluenceTime = a3;
  }
}


// CBreakableProp::ForceFadeScaleToAlwaysVisible  (line 1376, @0x000000000206fc20, libserver.so)  // inlines: NetworkStateChanged, Set, SetGlobalFadeScale, curtime, operator=<float>
// calls: CBaseEntity::ThinkSet
// callers: CBreakableProp::OnPhysGunPickup
// globals: s_pFadeScaleThink
void __fastcall CBreakableProp::ForceFadeScaleToAlwaysVisible(CBreakableProp *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_flFadeScale.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeScale.m_Value = 0.0;
  }
  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  CBaseEntity::ThinkSet(this, 0LL, m_flCurrentTime, s_pFadeScaleThink, 0);
}


// CBreakableProp::RampToDefaultFadeScale  (line 1384, @0x000000000205d2c0, libserver.so)  // inlines: NetworkStateChanged, Set, SetGlobalFadeScale, curtime, operator=<float>
// calls: CBaseEntity::ThinkSet
// globals: s_pFadeScaleThink, CBreakableProp::RampToDefaultFadeScale(void)
void __fastcall CBreakableProp::RampToDefaultFadeScale(CBreakableProp *const this)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float m_flDefaultFadeScale; // xmm1_4
  CGlobalVars *v5; // r12
  CGlobalVars *v6; // rax
  float v7; // xmm0_4
  FnGlobalVarsWarningFunc v8; // rax
  CGlobalVars *v9; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v12; // [rsp+Ch] [rbp-24h]
  float v13; // [rsp+Ch] [rbp-24h]

  v2 = (*(this->_vptr_IHandleEntity + 207))(this) + ((this->m_flDefaultFadeScale * gpGlobals->interval_per_tick) * 0.5);
  if ( v2 != this->m_flFadeScale.m_Value )
  {
    v12 = v2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeScale.m_Value = v12;
  }
  v3 = (*(this->_vptr_IHandleEntity + 207))(this);
  m_flDefaultFadeScale = this->m_flDefaultFadeScale;
  if ( v3 >= m_flDefaultFadeScale )
  {
    if ( m_flDefaultFadeScale != this->m_flFadeScale.m_Value )
    {
      v13 = this->m_flDefaultFadeScale;
      (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flFadeScale.m_Value = v13;
    }
    v9 = gpGlobals;
    m_flCurrentTime = 0.0;
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
    CBaseEntity::ThinkSet(this, 0LL, m_flCurrentTime, s_pFadeScaleThink, 0);
  }
  else
  {
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v6 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v8 = gpGlobals->m_pfnWarningFunc;
        if ( v8 != 0 )
          v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v6 = gpGlobals;
      }
      v7 = v5->m_flCurrentTime;
    }
    else
    {
      v6 = 0;
      v7 = 0.0;
    }
    CBaseEntity::ThinkSet(
      this,
      CBreakableProp::RampToDefaultFadeScale,
      v7 + v6->interval_per_tick,
      s_pFadeScaleThink,
      0);
  }
}


// CBreakableProp::OnPhysGunPickup  (line 1403, @0x000000000206fcc0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetPhysicsAttacker, curtime, operator=
// calls: CBreakableProp::ForceFadeScaleToAlwaysVisible, CBaseEntity::BlocksLOS, CBaseEntity::SetBlocksLOS, CBaseEntity::ThinkSet
// callers: CPhysicsProp::OnPhysGunPickup
// globals: s_pFadeScaleThink, CBreakableProp::RampToDefaultFadeScale(void)
void __fastcall CBreakableProp::OnPhysGunPickup(
        CBreakableProp *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  CGlobalVars *v7; // r12
  float m_flCurrentTime; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  CGlobalVars *v12; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v14; // xmm0_4
  FnGlobalVarsWarningFunc v15; // rax

  if ( reason != PhysGunPickup_t::PICKED_UP_BY_CANNON )
  {
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, pPhysGunUser, reason, nVRControllerID);
      }
      v14 = v12->m_flCurrentTime + 2.0;
    }
    else
    {
      v14 = 2.0;
    }
    CBaseEntity::ThinkSet(this, CBreakableProp::RampToDefaultFadeScale, v14, s_pFadeScaleThink, 0);
    if ( reason == PhysGunPickup_t::PUNTED_BY_CANNON )
      (*(this->_vptr_IHandleEntity + 253))(this);
  }
  else
  {
    CBreakableProp::ForceFadeScaleToAlwaysVisible(this);
  }
  v7 = gpGlobals;
  m_flCurrentTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v15 = gpGlobals->m_pfnWarningFunc;
      if ( v15 != 0 )
        (v15)(1, 0.0);
    }
    m_flCurrentTime = v7->m_flCurrentTime;
  }
  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v11 = 0x7FFF;
    else
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v11 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v10 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
  this->m_bOriginalBlockLOS = CBaseEntity::BlocksLOS(this);
  CBaseEntity::SetBlocksLOS(this, 0);
}


// CBreakableProp::OnPhysGunDrop  (line 1495, @0x000000000205cc20, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetPhysicsAttacker, curtime, operator=
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetBlocksLOS
// callers: CPhysicsProp::OnPhysGunDrop
// globals: s_pFadeScaleThink, CBreakableProp::RampToDefaultFadeScale(void)
void __fastcall CBreakableProp::OnPhysGunDrop(
        CBreakableProp *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t Reason,
        int nVRControllerID)
{
  CGlobalVars *v7; // r13
  float v8; // xmm0_4
  CGlobalVars *v9; // r13
  float m_flCurrentTime; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // si
  int v13; // eax
  FnGlobalVarsWarningFunc v14; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, pPhysGunUser, Reason, nVRControllerID);
    }
    v8 = v7->m_flCurrentTime + 2.0;
  }
  else
  {
    v8 = 2.0;
  }
  CBaseEntity::ThinkSet(this, CBreakableProp::RampToDefaultFadeScale, v8, s_pFadeScaleThink, 0);
  v9 = gpGlobals;
  m_flCurrentTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v14 = gpGlobals->m_pfnWarningFunc;
      if ( v14 != 0 )
        (v14)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v12 = 0x7FFF;
    v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v12 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v13 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
  if ( Reason == PhysGunDrop_t::LAUNCHED_BY_CANNON )
    (*(this->_vptr_IHandleEntity + 253))(this);
  CBaseEntity::SetBlocksLOS(this, this->m_bOriginalBlockLOS);
}


// CBreakableProp::PhysGunLaunchAngularImpulse  (line 1512, @0x000000000205be90, libserver.so)  // inlines: PhysGunLaunchAngularImpulse, RandomAngularImpulse
// calls: Vector::Random
AngularImpulse __fastcall CBreakableProp::PhysGunLaunchAngularImpulse(CBreakableProp *const this)
{
  vec_t v4; // xmm2_4
  Vector v5; // [rsp+10h] [rbp-20h] BYREF
  AngularImpulse result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (*(this->_vptr_IHandleEntity + 284))(this, 4) != 0 || (*(this->_vptr_IHandleEntity + 284))(this, 5) != 0 )
  {
    v5.x = 0.0;
    v5.y = 0.0;
    v5.z = 0.0;
  }
  else
  {
    Vector::Random(&v5, 600.0, v4);
  }
  *&result.x = *&v5.x;
  result.z = v5.z;
  return result;
}


// CBreakableProp::HasPhysicsAttacker  (line 1528, @0x000000000205cb30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBasePlayer*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBasePlayer *__fastcall CBreakableProp::HasPhysicsAttacker(CBreakableProp *const this, double a2, float dt)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  uint32 m_Index; // edx
  CBasePlayer *result; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v11; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        LODWORD(a2) = v11;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( this->m_flLastPhysicsInfluenceTime < (m_flCurrentTime - *&a2) )
    return 0;
  m_Index = this->m_hPhysicsAttacker.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsAttacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hPhysicsAttacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        return v9->m_pInstance;
    }
  }
  return result;
}


// CBreakableProp::BreakThink  (line 1539, @0x000000000207bc80, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetAttacker, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CTakeDamageInfo::CTakeDamageInfo, CBreakableProp::Break, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBreakableProp::BreakThink(CBreakableProp *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // si
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CTakeDamageInfo info; // [rsp+0h] [rbp-A0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&info);
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v3 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.m_hAttacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
  }
  else
  {
    info.m_hAttacker.m_Index = -1;
  }
  m_Index = this->m_hBreaker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBreaker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hBreaker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CBreakableProp::Break(this, m_pInstance, &info);
  CTakeDamageInfo::~CTakeDamageInfo(&info);
}


// CBreakableProp::PlayPuntSound  (line 1551, @0x000000000205a800, libserver.so)
// calls: CBaseEntity::EmitSound
void __fastcall CBreakableProp::PlayPuntSound(CBreakableProp *const this)
{
  if ( this->m_bUsePuntSound && this->m_iszPuntSound.u.m_Id != 0 )
    CBaseEntity::EmitSound(this, this->m_iszPuntSound.u.m_pAsString, 0.0, 0);
}


// CBreakableProp::Precache  (line 1566, @0x000000000208ccb0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CEntityInstance::IsAuthoritative, CBaseEntity::PrecacheScriptSound, CBaseProp::Precache
// callers: CPhysicsProp::Precache, CBasePropDoor::Precache
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CBreakableProp::Precache(CBreakableProp *const this, const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v5; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rax

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    m_pKeyValues = pContext->m_pKeyValues;
    v5 = pContext->m_pKeyValues->m_keyHashes.0;
    if ( *&v5 > 0 )
    {
      m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; *&v5 > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == -926958586 )
          {
LABEL_10:
            if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
              v9 = m_pKeyValues->m_keyValues.m_pElements;
            else
              v9 = 0;
            p_m_value = &v9[i].m_value;
            if ( p_m_value->m_type == 30 )
              goto LABEL_13;
            goto LABEL_16;
          }
        }
        else if ( *(4 * i) == -926958586 )
        {
          goto LABEL_10;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
    {
LABEL_13:
      if ( p_m_value->m_uint64 != 0 )
        (*(*pContext->m_pManifest + 8LL))(pContext->m_pManifest, p_m_value->m_uint64, PropBreakablePrecacheAll);
    }
LABEL_16:
    if ( this->m_iszPuntSound.u.m_Id != 0 )
      CBaseEntity::PrecacheScriptSound(this->m_iszPuntSound.u.m_pAsString, pContext->m_pManifest);
    if ( this->m_explosionBuildupSound.u.m_Id != 0 )
      CBaseEntity::PrecacheScriptSound(this->m_explosionBuildupSound.u.m_pAsString, pContext->m_pManifest);
  }
  CBaseProp::Precache(this, pContext);
}


// CBreakableProp::GetRootPhysicsObjectForBreak  (line 1603, @0x0000000002059ba0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
IPhysicsObject *__fastcall CBreakableProp::GetRootPhysicsObjectForBreak(CBreakableProp *const this)
{
  return CBaseEntity::VPhysicsGetObject(this);
}


// CBreakableProp::Break  (line 1613, @0x000000000207a640, libserver.so)  // inlines: CPASFilter, CVariantBase, ConvertToExternalMemory, CreateEvent, FireOutput, Free, Get, GetAbsVelocity, GetAttacker, GetBool, GetCollisionGroup, GetCollisionGroup_Inline, GetEffects, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetUserID, IndexToIdentity, Init, IsValid, LookupEntity, NextEntity, Purge, Purge_FixedGrowable, QAngleToAngularImpulse, RemoveAll, RotateVectorEntityToWorld, String, ToBasePlayer, ToCStr, ToQAngle, VectorRotate, _V_strcmp, breakablepropparams_t, entindex, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator!=, operator=, ~CEntitySphereQuery, ~COverlapList, ~CPASFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVariantBase
// calls: CBaseEntity::GetModelName, CEntityInstance::GetEntityIndex, CBaseEntity::SetDamageOptions, CEntityIOOutput::FireOutputInternal, QuaternionAngles, CBaseEntity::GetAbsOrigin, CBaseEntity::VPhysicsGetObject, CPhysicsGameSystem::PhysBreakSound, ExplosionCreate, CBaseEntity::EmitSound, CBaseAnimating::GetModelPtr, CModel::pszSurfaceProp (37 total)
// callers: CBreakableProp::Event_Killed, CBreakableProp::InputBreak, CBreakableProp::UpdateHealth, CBreakableProp::BreakThink, CPhysicsPropRespawnable::Event_Killed
// strings: "break_prop", "PropaneTank.Burst", "glassbottle"
// globals: g_BreakPropEvent, CEntityHandle::gm_pEntityList
void __fastcall CBreakableProp::Break(
        CBreakableProp *const this,
        CBaseEntity *pBreaker,
        const CTakeDamageInfo *const info)
{
  const char *v6; // rdi
  __int64 v7; // r15
  CEntityIndex v8; // eax
  IPhysicsObject *v9; // r13
  int v10; // xmm1_4
  int v11; // xmm1_4
  int v12; // xmm1_4
  const QAngle *v13; // xmm1_8
  IPhysicsObject *Object; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  uint32 v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  uint32 v21; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  double v24; // xmm0_8
  int v25; // xmm1_4
  Vector *v26; // r14
  IPhysicsObject *v27; // rax
  const CModel *ModelPtr; // rax
  bool v29; // zf
  const char *v30; // rax
  __int64 v31; // rcx
  const char *v32; // rdi
  char *v33; // rsi
  float m_impactEnergyScale; // xmm0_4
  CCollisionProperty *m_pCollision; // rax
  vec_t v36; // xmm1_4
  vec_t v37; // xmm1_4
  int v38; // eax
  float v39; // xmm1_4
  CBaseEntity *CurrentEntity; // r13
  __int64 v41; // rax
  CEntityInstance *v42; // rax
  __int64 v43; // rax
  char v44; // al
  CBaseEntity *v45; // rdi
  CEntityIndex v46; // eax
  unsigned int v47; // eax
  const QAngle *AbsAngles; // rax
  const matrix3x4_t *v49; // rax
  PerformanceMode_t m_PerformanceMode; // r14d
  int (**vptr_IHandleEntity)(...); // rax
  int v52; // xmm1_4
  uint32 v53; // eax
  const Vector *v54; // rax
  int v55; // xmm1_4
  void (__fastcall *v56)(ITempEntsSystem *, CEntitySphereQuery *, QAngle *, _QWORD, const Vector *, CVariant *, float, float, Vector *, int, unsigned int, int, int, int, _DWORD); // r13
  CUtlStringToken v57; // [rsp+40h] [rbp-1150h]
  unsigned int m_Value; // [rsp+44h] [rbp-114Ch]
  const Vector *v59; // [rsp+48h] [rbp-1148h]
  CUtlStringToken v60; // [rsp+48h] [rbp-1148h]
  const QAngle *v61; // [rsp+50h] [rbp-1140h]
  unsigned int v62; // [rsp+50h] [rbp-1140h]
  void (__fastcall *v63)(ITempEntsSystem *, CEntitySphereQuery *, QAngle *, _QWORD, const Vector *, const QAngle *, float, float, Vector *, int, unsigned int, int, int, int, _DWORD); // [rsp+58h] [rbp-1138h]
  const Vector *v64; // [rsp+58h] [rbp-1138h]
  int radiusa; // [rsp+68h] [rbp-1128h]
  int radius; // [rsp+68h] [rbp-1128h]
  float flScale; // [rsp+70h] [rbp-1120h]
  PerformanceMode_t flScalea; // [rsp+70h] [rbp-1120h]
  int bExplodedb; // [rsp+74h] [rbp-111Ch]
  char bExploded; // [rsp+74h] [rbp-111Ch]
  int bExplodeda; // [rsp+74h] [rbp-111Ch]
  CBaseEntity *pAttacker; // [rsp+78h] [rbp-1118h]
  QAngle *v73; // [rsp+80h] [rbp-1110h]
  Vector *AbsOrigin; // [rsp+80h] [rbp-1110h]
  QAngle *v75; // [rsp+80h] [rbp-1110h]
  CVariant *value; // [rsp+88h] [rbp-1108h]
  Vector velocity; // [rsp+90h] [rbp-1100h] BYREF
  AngularImpulse angVelocity; // [rsp+A0h] [rbp-10F0h] BYREF
  Vector origin; // [rsp+B0h] [rbp-10E0h] BYREF
  QAngle angles; // [rsp+C0h] [rbp-10D0h] BYREF
  Vector vVelocity; // [rsp+D0h] [rbp-10C0h] BYREF
  QAngle v82; // [rsp+E0h] [rbp-10B0h] BYREF
  breakablepropparams_t params; // [rsp+F0h] [rbp-10A0h] BYREF
  CEntitySphereQuery sphere; // [rsp+130h] [rbp-1060h] BYREF
  unsigned __int64 v85; // [rsp+1158h] [rbp-38h]

  v85 = __readfsqword(0x28u);
  CBaseEntity::GetModelName(&params, this);
  if ( params.origin != 0 )
    v6 = params.origin;
  else
    v6 = "";
  if ( V_stristr_fast(v6, "crate") != 0
    && (pBreaker != 0 && (*(pBreaker->_vptr_IHandleEntity + 140))(pBreaker) != 0
     || (v42 = CEntityHandle::operator CEntityInstance *(&this->m_hPhysicsAttacker)) != 0
     && (*(v42->_vptr_IHandleEntity + 140))(v42) != 0
     || pBreaker != 0
     && __dynamic_cast(pBreaker, &`typeinfo for'CBaseEntity, &`typeinfo for'CPropVehicleDriveable, 0) != 0
     && (v43 = (*(pBreaker->_vptr_IHandleEntity + 262))(pBreaker)) != 0
     && (*(*v43 + 1120LL))(v43) != 0) )
  {
    (*(gamestats->_vptr_CBaseGameStats + 26))(gamestats);
  }
  v7 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "break_prop", 0, &g_BreakPropEvent);
  if ( v7 != 0 )
  {
    if ( pBreaker != 0 && (*(pBreaker->_vptr_IHandleEntity + 140))(pBreaker) != 0 )
    {
      v75 = *(*v7 + 112LL);
      v44 = (*(pBreaker->_vptr_IHandleEntity + 140))(pBreaker);
      v45 = 0;
      if ( v44 != 0 )
        v45 = pBreaker;
      v46.m_Data = CEntityInstance::GetEntityIndex(v45).m_Data;
      v47 = (*(*engine + 224LL))(engine, (v46.m_Data - 1));
      (v75)(v7, "userid", v47);
    }
    else
    {
      (*(*v7 + 112LL))(v7, "userid", 0);
    }
    v73 = *(*v7 + 112LL);
    v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    (v73)(v7, "entindex", v8.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v7, 0);
  }
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  LODWORD(params.angles) = 0;
  params.origin = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnBreak, pBreaker, this, &params, 0.0);
  if ( (BYTE2(params.angles) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, params.origin);
  v9 = (*(this->_vptr_IHandleEntity + 254))(this);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  if ( v9 != 0 )
  {
    params.origin = COERCE_CONST_VECTOR_CONST((*(*v9 + 1688LL))(v9));
    LODWORD(params.angles) = v10;
    velocity = *&params.origin;
    params.origin = COERCE_CONST_VECTOR_CONST((*(*v9 + 592LL))(v9));
    LODWORD(params.angles) = v11;
    angVelocity = *&params.origin;
    params.origin = COERCE_CONST_VECTOR_CONST((*(*v9 + 368LL))(v9));
    LODWORD(params.angles) = v12;
    origin = *&params.origin;
    params.origin = COERCE_CONST_VECTOR_CONST((*(*v9 + 384LL))(v9));
    params.angles = v13;
    QuaternionAngles(&params, &v82);
    angles = v82;
    flScale = (*(*v9 + 1352LL))(v9);
  }
  else
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    velocity = this->m_vecAbsVelocity;
    angVelocity.x = this->m_vecAngVelocity.z;
    angVelocity.y = this->m_vecAngVelocity.x;
    angVelocity.z = this->m_vecAngVelocity.y;
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    if ( vec3_angle.x != AbsAngles->x || vec3_angle.y != AbsAngles->y || vec3_angle.z != AbsAngles->z )
    {
      v49 = CBaseEntity::EntityToWorldTransform(this);
      VectorRotate(&angVelocity.x, v49, &angVelocity.x);
    }
    origin = *CBaseEntity::GetAbsOrigin(this);
    angles = *CBaseEntity::GetAbsAngles(this);
    flScale = CBaseEntity::GetAbsScale(this);
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  Object = CBaseEntity::VPhysicsGetObject(this);
  CPhysicsGameSystem::PhysBreakSound(g_pPhysicsGameSystem, this, Object, *AbsOrigin);
  m_Index = info->m_hAttacker.m_Index;
  pAttacker = 0;
  if ( m_Index + 2 > 1 )
  {
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v16 != 0 )
    {
      v17 = &v16[info->m_hAttacker.m_Index & 0x1FF];
      if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
        pAttacker = v17->m_pInstance;
    }
  }
  v18 = this->m_hLastAttacker.m_Index;
  if ( v18 + 2 > 1
    && (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLastAttacker.m_Index) >> 9) & 0x3F]) != 0
    && (v20 = &v19[this->m_hLastAttacker.m_Index & 0x1FF]) != 0
    && v18 == v20->m_EHandle.m_Index )
  {
    pAttacker = v20->m_pInstance;
  }
  else
  {
    v21 = this->m_hPhysicsAttacker.m_Index;
    if ( v21 + 2 > 1 )
    {
      v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsAttacker.m_Index) >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = &v22[this->m_hPhysicsAttacker.m_Index & 0x1FF];
        if ( v23 != 0
          && v21 == v23->m_EHandle.m_Index
          && (CGlobalVarsBase::curtime(gpGlobals, 0) - this->m_flLastPhysicsInfluenceTime) <= 2.0 )
        {
          pAttacker = CEntityHandle::operator CBaseEntity *(&this->m_hPhysicsAttacker);
        }
      }
    }
  }
  if ( this->m_explodeDamage <= 0.0 && this->m_explodeRadius <= 0.0 )
  {
    bExploded = 0;
    goto LABEL_30;
  }
  if ( (*(this->_vptr_IHandleEntity + 284))(this, 6) != 0 )
  {
    radiusa = this->m_explodeRadius;
    bExplodedb = this->m_explodeDamage;
    v24 = (*(this->_vptr_IHandleEntity + 62))(this);
    LODWORD(params.angles) = v25;
    *&params.origin = v24;
    ExplosionCreate(&params, &angles, pAttacker, bExplodedb, radiusa, 9320, 0.0, this, -1, 0, Class_T::CLASS_NONE);
  }
  else
  {
    v29 = (*(this->_vptr_IHandleEntity + 284))(this, 7) == 0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    radius = this->m_explodeRadius;
    bExplodeda = this->m_explodeDamage;
    if ( v29 )
    {
      params.origin = COERCE_CONST_VECTOR_CONST((vptr_IHandleEntity[62])(this));
      LODWORD(params.angles) = v55;
      ExplosionCreate(&params, &angles, pAttacker, bExplodeda, radius, 9256, 0.0, this, -1, 0, Class_T::CLASS_NONE);
      bExploded = 1;
      goto LABEL_30;
    }
    params.origin = COERCE_CONST_VECTOR_CONST((vptr_IHandleEntity[62])(this));
    LODWORD(params.angles) = v52;
    ExplosionCreate(&params, &angles, pAttacker, bExplodeda, radius, 42089, 0.0, this, -1, 0, Class_T::CLASS_NONE);
  }
  CBaseEntity::EmitSound(this, "PropaneTank.Burst", 0.0, 0);
  bExploded = 1;
LABEL_30:
  (*(this->_vptr_IHandleEntity + 291))(this, &velocity, &angVelocity, pBreaker);
  v26 = CBaseEntity::GetAbsOrigin(this);
  v27 = CBaseEntity::VPhysicsGetObject(this);
  CPhysicsGameSystem::PhysBreakSound(g_pPhysicsGameSystem, this, v27, *v26);
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  v30 = CModel::pszSurfaceProp(ModelPtr);
  v31 = 12;
  v32 = "glassbottle";
  v33 = v30;
  do
  {
    if ( v31 == 0 )
      break;
    v29 = *v33++ == *v32++;
    --v31;
  }
  while ( v29 );
  if ( v29 )
  {
    v54 = CBaseEntity::GetAbsOrigin(this);
    CSoundEnt::InsertSound(0x20000, v54, 512, 1.0, 0, 0, 0);
  }
  params.velocity = &velocity;
  m_impactEnergyScale = this->m_impactEnergyScale;
  params.origin = &origin;
  params.scale = flScale;
  params.angularVelocity = &angVelocity;
  params.defBurstScale = 0.0;
  params.angles = &angles;
  m_pCollision = this->m_pCollision;
  params.defBurstRandomize = 0.0;
  params.defCollisionGroup = 4;
  params.useThisRawVelocity = 0;
  params.impactEnergyScale = m_impactEnergyScale;
  params.breakModelsNotToMake = 0;
  if ( m_pCollision == 0
    || (params.defCollisionGroup = m_pCollision->m_CollisionGroup.m_Value, params.defCollisionGroup == 4) )
  {
    params.defCollisionGroup = 7;
  }
  params.defBurstScale = 100.0;
  if ( gpGlobals->maxClients > 1 && breakable_multiplayer.m_pParent->m_Value.m_nValue != 0 )
  {
    *&v82.x = (*(this->_vptr_IHandleEntity + 62))(this, v33);
    v82.z = v36;
    CRecipientFilter::CRecipientFilter(&sphere);
    *&sphere.m_listIndex = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&sphere, &v82);
    vVelocity.x = 0.0;
    vVelocity.y = 0.0;
    vVelocity.z = 0.0;
    if ( v9 != 0 )
    {
      *&v82.x = (*(*v9 + 1688LL))(v9);
      v82.z = v37;
      vVelocity = v82;
    }
    v38 = (*(this->_vptr_IHandleEntity + 286))(this);
    if ( v38 != 1 )
    {
      if ( v38 <= 1 )
      {
        if ( v38 != 0 )
          goto LABEL_48;
      }
      else if ( v38 != 2 )
      {
        if ( v38 != 3 )
          goto LABEL_48;
        m_Value = this->m_fEffects.m_Value;
        v63 = *(te->_vptr_IPredictionSystem + 27);
        v61 = CBaseEntity::GetAbsAngles(this);
        v59 = CBaseEntity::GetAbsOrigin(this);
        v57.m_nHashCode = CBaseAnimating::GetSkin(this).m_nHashCode;
        CBaseEntity::GetModel(&v82, this);
        v63(te, &sphere, &v82, v57.m_nHashCode, v59, v61, -1.0, flScale, &vVelocity, 1, m_Value, 255, 255, 255, 0);
        flScalea = this->m_PerformanceMode;
        if ( flScalea == PerformanceMode_t::PM_NO_GIBS && breakable_disable_gib_limit.m_pParent->m_Value.m_nValue == 0 )
          goto LABEL_48;
        CBaseEntity::GetModel(&v82, this);
        goto LABEL_47;
      }
      v62 = this->m_fEffects.m_Value;
      v56 = *(te->_vptr_IPredictionSystem + 27);
      value = CBaseEntity::GetAbsAngles(this);
      v64 = CBaseEntity::GetAbsOrigin(this);
      v60.m_nHashCode = CBaseAnimating::GetSkin(this).m_nHashCode;
      CBaseEntity::GetModel(&v82, this);
      v56(te, &sphere, &v82, v60.m_nHashCode, v64, value, -1.0, flScale, &vVelocity, 1, v62, 255, 255, 255, 0);
      goto LABEL_48;
    }
    flScalea = this->m_PerformanceMode;
    if ( flScalea != PerformanceMode_t::PM_NO_GIBS || breakable_disable_gib_limit.m_pParent->m_Value.m_nValue != 0 )
    {
      params.breakModelsNotToMake = ~this->m_nBreakablePieceSpawnServerSideMask;
      CBaseEntity::GetModel(&v82, this);
LABEL_47:
      PropBreakableCreateAll(&v82, v9, &params, this, -1, flScalea == PerformanceMode_t::PM_FULL_GIBS, 0);
    }
LABEL_48:
    *&sphere.m_listIndex = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&sphere);
    goto LABEL_49;
  }
  m_PerformanceMode = this->m_PerformanceMode;
  if ( m_PerformanceMode != PerformanceMode_t::PM_NO_GIBS
    || breakable_disable_gib_limit.m_pParent->m_Value.m_nValue != 0 )
  {
    params.breakModelsNotToMake = ~this->m_nBreakablePieceSpawnServerSideMask;
    CBaseEntity::GetModel(&v82, this);
    PropBreakableCreateAll(&v82, v9, &params, this, -1, m_PerformanceMode == PerformanceMode_t::PM_FULL_GIBS, 1);
  }
LABEL_49:
  if ( (*(this->_vptr_IHandleEntity + 284))(this, 6) != 0 )
  {
    if ( bExploded == 0 )
      ExplosionCreate(
        &origin,
        &angles,
        pAttacker,
        1,
        this->m_explodeRadius,
        1065,
        0.0,
        this,
        -1,
        0,
        Class_T::CLASS_NONE);
    if ( this->m_explodeRadius > 0.0 )
    {
      CEntitySphereQuery::CEntitySphereQuery(&sphere, &origin, v39);
      while ( 1 )
      {
        CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
        if ( CurrentEntity == 0 )
          break;
        if ( (*(CurrentEntity->_vptr_IHandleEntity + 147))(CurrentEntity) != 0
          && (*(CurrentEntity->_vptr_IHandleEntity + 88))(CurrentEntity, info) != 0 )
        {
          v41 = (*(CurrentEntity->_vptr_IHandleEntity + 147))(CurrentEntity);
          (*(*v41 + 1912LL))(v41, 1, 0, 30.0, 0.0);
        }
        ++sphere.m_listIndex;
      }
      sphere.m_results.m_list.m_Size = 0;
      v53 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
      if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount < 0
        || sphere.m_results.m_list.m_Memory.m_pMemory == &sphere.m_results.m_list.m_Memory.m_FixedMemory )
      {
        if ( v53 == 0 )
          CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
      }
      else if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v53 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
    }
  }
  if ( (*(this->_vptr_IHandleEntity + 284))(this, 7) != 0 && bExploded == 0 )
    ExplosionCreate(&origin, &angles, pAttacker, 1, this->m_explodeRadius, 33832, 0.0, this, -1, 0, Class_T::CLASS_NONE);
  UTIL_Remove(this);
}


