// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_base_ability.cpp:168
class C_CDOTABaseAbility_MapInstall {
	C_CDOTABaseAbility_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DOTA_CreateAbility  (line 30, @0x000000000243b640, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<CEntityHandle>, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<char const*>, AddKeyValue<int>, AddToTail, Allocate, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetTimebaseRegister, InTargetThread, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetName, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValue<int>, SetValues, SetWorldTransform, Spawn, V_strlen, memcpy, operator CDOTABaseAbility*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetName, KeyValues::GetString, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity (34 total)
// callers: CDOTA_ActionRunner::PerformAction_AddAbility, CDOTA_BaseNPC::Script_AddAbility, CDOTA_BaseNPC::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::CreateAbilities, CDOTA_BaseNPC_Creature::AddNewAbility, CDOTA_BaseNPC_Hero::UpdateActionItemSlot, CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell, CDOTA_Ability_DoomBringer_Devour::OnSpellStart, CDOTA_Modifier_Rubick_SpellSteal::OnDestroy, CDOTA_Ability_Rubick_SpellSteal::OnProjectileHit, CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDOTABaseAbility *__fastcall DOTA_CreateAbility(const char *pScriptName, CBaseEntity *pOwner)
{
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  CDOTAGameManager *v8; // rax
  KeyValues *AbilityByName; // rax
  KeyValues *v10; // rbx
  const char *Name; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityIdentity *m_pEntity; // rax
  __int16 v14; // si
  CEntityKeyValues *v15; // rbx
  __int16 v16; // cx
  CEntityKeyValues *v17; // rdi
  int m_enabled; // edx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v20; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v22; // r15
  CEntityIdentity *v23; // rax
  __int16 v24; // si
  CEntitySpawnerContext<CDOTABaseAbility> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v28; // rdi
  CEntityInstance *v29; // rax
  CUtlScratchMemoryPool *v30; // rdi
  CDOTABaseAbility *v31; // rbx
  CEntityKeyValues *v32; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v36; // rbx
  ThreadId_t v37; // r15
  uint64 v38; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v40; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v44; // cx
  __int64 v45; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v46; // rdx
  int v47; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v48; // cx
  __int64 v49; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v50; // rdx
  int v51; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v52; // cx
  __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v54; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v56; // r14
  unsigned __int64 v57; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v58; // rax
  int v59; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rax
  uint16 v62; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rax
  __int16 v64; // dx
  unsigned __int64 v65; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v66; // rax
  int v67; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  uint16 v70; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rax
  int16 m_nQueuedForSpawnCount; // dx
  __int16 v73; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v76; // rax
  uint16 m_flags; // ax
  void *v78; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v83; // rdx
  __int64 v84; // rax
  const char *v85; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // rdx
  __int64 v87; // rax
  const char *m_pAttributeName; // rsi
  int v89; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v90; // cx
  __int64 v91; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v92; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v93; // rdx
  __int64 v94; // rax
  __int16 v95; // dx
  unsigned __int64 v96; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v97; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v98; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v99; // rax
  uint16 v100; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v101; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rcx
  int v105; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v106; // cx
  __int64 v107; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v108; // rdx
  __int16 v109; // dx
  unsigned __int64 v110; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v111; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v112; // rax
  __int16 v113; // ax
  void *v114; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v115; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rbx
  int v119; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v120; // cx
  __int64 v121; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v122; // rdx
  __int16 v123; // r15
  unsigned __int64 v124; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v125; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v126; // rax
  __int64 v127; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v128; // r15
  uint16 v129; // ax
  Vector *v130; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v131; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v132; // rdx
  __int64 v133; // rax
  int v134; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v135; // cx
  __int64 v136; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v137; // rdx
  __int16 v138; // r15
  unsigned __int64 v139; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v140; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v141; // rax
  __int64 v142; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v143; // r15
  uint16 v144; // ax
  QAngle *v145; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v146; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v148; // rax
  __int16 v149; // ax
  __int16 v150; // ax
  void *v151; // rax
  __int16 v152; // ax
  void *v153; // rax
  __int64 v154; // rbx
  __int16 v155; // ax
  Vector *v156; // rax
  int v157; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v158; // rax
  uint16 v159; // dx
  int v160; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v161; // rax
  uint16 v162; // dx
  __int64 v163; // rbx
  __int16 v164; // ax
  QAngle *v165; // rax
  signed int v166; // [rsp+24h] [rbp-11Ch]
  __int64 v167; // [rsp+28h] [rbp-118h]
  signed int v168; // [rsp+28h] [rbp-118h]
  bool v169; // [rsp+30h] [rbp-110h]
  __int64 v170; // [rsp+30h] [rbp-110h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v171; // [rsp+30h] [rbp-110h]
  __int64 v172; // [rsp+30h] [rbp-110h]
  __int64 v173; // [rsp+30h] [rbp-110h]
  signed int v174; // [rsp+30h] [rbp-110h]
  const char *pClassName; // [rsp+38h] [rbp-108h]
  CEntityKeyValues *pClassNamea; // [rsp+38h] [rbp-108h]
  const char *pClassNameb; // [rsp+38h] [rbp-108h]
  int pClassNamec; // [rsp+38h] [rbp-108h]
  const char *pClassNamed; // [rsp+38h] [rbp-108h]
  char *pClassNamee; // [rsp+38h] [rbp-108h]
  const char *pClassNamef; // [rsp+38h] [rbp-108h]
  const char *pClassNameg; // [rsp+38h] [rbp-108h]
  signed int pClassNameh; // [rsp+38h] [rbp-108h]
  CEntityHandle v184; // [rsp+40h] [rbp-100h] BYREF
  int v185; // [rsp+50h] [rbp-F0h]
  _QWORD v186[2]; // [rsp+60h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTABaseAbility> spawner; // [rsp+70h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_40D75B0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v4 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v4->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v4);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTABaseAbilityClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  v8 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v8, pScriptName);
  v10 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    Name = KeyValues::GetName(AbilityByName);
    pClassName = KeyValues::GetString(v10, "BaseClass", Name, 0, 0);
  }
  else
  {
    pClassName = pScriptName;
  }
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_6;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_106:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v73 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
    v170 = v73;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v76 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v76 = 0;
    v167 = v170;
    v171 = &v76[v170];
    m_flags = v171->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v171->m_value.m_flags = m_flags & 0xFFFE;
    v171->m_value.m_uint64 = 0;
    v171->m_value.m_type = 30;
    if ( pClassName != 0 )
    {
      v166 = strlen(pClassName) + 1;
      v78 = CEntityVariantAllocator::Allocate(v166);
      v171->m_value.m_uint64 = v78;
      memcpy(v78, pClassName, v166);
      v171->m_value.m_flags |= 1u;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v79 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v79 = 0;
    v79[v167].m_pAttributeName = 0;
  }
  else
  {
    v44 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v45 = 0;
    while ( 1 )
    {
      if ( v44 != 0 )
      {
        v46 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v44 > 9 )
          v46 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v46 = 0;
      }
      if ( v46[v45] == -971301790 )
        break;
      if ( m_nCount <= ++v45 )
        goto LABEL_106;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v80 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v81 = v45;
      v82 = &v80[v81];
      if ( v80[v81].m_pAttributeName != 0 )
      {
LABEL_120:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v80[v81].m_pAttributeName);
        goto LABEL_6;
      }
    }
    else
    {
      v81 = v45;
      v80 = 0;
      v82 = v81 * 24;
      if ( *(v81 * 24 + 16) != 0 )
        goto LABEL_120;
    }
    v152 = *(v82 + 10);
    if ( (v152 & 1) != 0 )
      *(v82 + 10) = v152 & 0xFFFE;
    *v82 = 0;
    *(v82 + 8) = 30;
    if ( pClassName != 0 )
    {
      v174 = strlen(pClassName) + 1;
      v153 = CEntityVariantAllocator::Allocate(v174);
      *v82 = v153;
      memcpy(v153, pClassName, v174);
      *(v82 + 10) |= 1u;
    }
  }
LABEL_6:
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, pClassName, &spawner.m_scriptClassName);
  m_pEntity = pOwner->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(v186[0]) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
  }
  else
  {
    LODWORD(v186[0]) = -1;
  }
  v15 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v47 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v47 <= 0 )
    {
LABEL_96:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v64 = v15->m_keyHashes.m_nCount - 1;
      v65 = v15->m_keyHashes.m_nAllocated;
      if ( v65 != 0 )
      {
        if ( v65 <= 9 )
          v66 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
        else
          v66 = v15->m_keyHashes.m_pElements;
      }
      else
      {
        v66 = 0;
      }
      v66[(v15->m_keyHashes.m_nCount - 1)] = 1166161001;
      pClassNameb = v64;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v15->m_keyValues);
      v67 = v186[0];
      if ( v15->m_keyValues.m_nAllocated != 0 )
        v68 = v15->m_keyValues.m_pElements;
      else
        v68 = 0;
      v69 = &v68[pClassNameb];
      v70 = v69->m_value.m_flags;
      if ( (v70 & 1) != 0 )
        v69->m_value.m_flags = v70 & 0xFFFE;
      v69->m_value.m_uint64 = 0;
      v69->m_value.m_type = 13;
      v69->m_value.m_int = v67;
      if ( v15->m_keyValues.m_nAllocated != 0 )
        v71 = v15->m_keyValues.m_pElements;
      else
        v71 = 0;
      v71[pClassNameb].m_pAttributeName = 0;
      v15 = spawner.m_pEntityKeyValues;
      m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
LABEL_131:
      if ( m_nQueuedForSpawnCount > 0 )
        goto LABEL_144;
      v89 = v15->m_keyHashes.m_nCount;
      pClassNamec = pOwner->m_iTeamNum.m_Value;
      if ( v89 <= 0 )
      {
LABEL_146:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v15->m_keyHashes);
        v95 = v15->m_keyHashes.m_nCount - 1;
        v96 = v15->m_keyHashes.m_nAllocated;
        if ( v96 != 0 )
        {
          if ( v96 <= 9 )
            v97 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
          else
            v97 = v15->m_keyHashes.m_pElements;
        }
        else
        {
          v97 = 0;
        }
        v97[(v15->m_keyHashes.m_nCount - 1)] = -175874245;
        v172 = v95;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v15->m_keyValues);
        if ( v15->m_keyValues.m_nAllocated != 0 )
          v98 = v15->m_keyValues.m_pElements;
        else
          v98 = 0;
        v99 = &v98[v172];
        v100 = v99->m_value.m_flags;
        if ( (v100 & 1) != 0 )
          v99->m_value.m_flags = v100 & 0xFFFE;
        v99->m_value.m_uint64 = 0;
        v99->m_value.m_type = 5;
        v99->m_value.m_int = pClassNamec;
        if ( v15->m_keyValues.m_nAllocated != 0 )
          v101 = v15->m_keyValues.m_pElements;
        else
          v101 = 0;
        v101[v172].m_pAttributeName = 0;
      }
      else
      {
        v90 = v15->m_keyHashes.m_nAllocated;
        v91 = 0;
        while ( 1 )
        {
          if ( v90 != 0 )
          {
            v92 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
            if ( v90 > 9 )
              v92 = v15->m_keyHashes.m_pElements;
          }
          else
          {
            v92 = 0;
          }
          if ( v92[v91] == -175874245 )
            break;
          if ( v89 <= ++v91 )
            goto LABEL_146;
        }
        if ( v15->m_keyValues.m_nAllocated != 0 )
        {
          v102 = v15->m_keyValues.m_pElements;
          v103 = v91;
          v104 = &v102[v103];
          if ( v102[v103].m_pAttributeName != 0 )
          {
LABEL_158:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v102[v103].m_pAttributeName);
            goto LABEL_159;
          }
        }
        else
        {
          v103 = v91;
          v102 = 0;
          v104 = v103 * 24;
          if ( *(v103 * 24 + 16) != 0 )
            goto LABEL_158;
        }
        v149 = *(v104 + 10);
        if ( (v149 & 1) != 0 )
          *(v104 + 10) = v149 & 0xFFFE;
        *v104 = 0;
        *(v104 + 8) = 5;
        *v104 = pClassNamec;
      }
LABEL_159:
      v15 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
        goto LABEL_144;
      v105 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
      if ( v105 <= 0 )
      {
LABEL_168:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
        v109 = v15->m_keyHashes.m_nCount - 1;
        v110 = v15->m_keyHashes.m_nAllocated;
        if ( v110 != 0 )
        {
          if ( v110 <= 9 )
            v111 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
          else
            v111 = v15->m_keyHashes.m_pElements;
        }
        else
        {
          v111 = 0;
        }
        v111[(v15->m_keyHashes.m_nCount - 1)] = 1094168427;
        pClassNamed = v109;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v15->m_keyValues);
        if ( v15->m_keyValues.m_nAllocated != 0 )
          v112 = v15->m_keyValues.m_pElements;
        else
          v112 = 0;
        v173 = pClassNamed;
        pClassNamee = &v112[pClassNamed];
        v113 = *(pClassNamee + 5);
        if ( (v113 & 1) != 0 )
          *(pClassNamee + 5) = v113 & 0xFFFE;
        *pClassNamee = 0;
        *(pClassNamee + 4) = 30;
        if ( pScriptName != 0 )
        {
          v168 = strlen(pScriptName) + 1;
          v114 = CEntityVariantAllocator::Allocate(v168);
          *pClassNamee = v114;
          memcpy(v114, pScriptName, v168);
          *(pClassNamee + 5) |= 1u;
        }
        if ( v15->m_keyValues.m_nAllocated != 0 )
          v115 = v15->m_keyValues.m_pElements;
        else
          v115 = 0;
        v115[v173].m_pAttributeName = 0;
      }
      else
      {
        v106 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v107 = 0;
        while ( 1 )
        {
          if ( v106 != 0 )
          {
            v108 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v106 > 9 )
              v108 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v108 = 0;
          }
          if ( v108[v107] == 1094168427 )
            break;
          if ( v105 <= ++v107 )
            goto LABEL_168;
        }
        if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v116 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
          v117 = v107;
          v118 = &v116[v117];
          if ( v116[v117].m_pAttributeName != 0 )
          {
LABEL_182:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v116[v117].m_pAttributeName);
            goto LABEL_183;
          }
        }
        else
        {
          v117 = v107;
          v116 = 0;
          v118 = v117 * 24;
          if ( *(v117 * 24 + 16) != 0 )
            goto LABEL_182;
        }
        v150 = *(v118 + 10);
        if ( (v150 & 1) != 0 )
          *(v118 + 10) = v150 & 0xFFFE;
        *v118 = 0;
        *(v118 + 8) = 30;
        if ( pScriptName != 0 )
        {
          pClassNameh = strlen(pScriptName) + 1;
          v151 = CEntityVariantAllocator::Allocate(pClassNameh);
          *v118 = v151;
          memcpy(v151, pScriptName, pClassNameh);
          *(v118 + 10) |= 1u;
        }
      }
LABEL_183:
      v15 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
        goto LABEL_144;
      v119 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
      if ( v119 <= 0 )
      {
LABEL_192:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
        v123 = v15->m_keyHashes.m_nCount - 1;
        v124 = v15->m_keyHashes.m_nAllocated;
        if ( v124 != 0 )
        {
          if ( v124 <= 9 )
            v125 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
          else
            v125 = v15->m_keyHashes.m_pElements;
        }
        else
        {
          v125 = 0;
        }
        v125[v123] = -467664362;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v15->m_keyValues);
        if ( v15->m_keyValues.m_nAllocated != 0 )
          v126 = v15->m_keyValues.m_pElements;
        else
          v126 = 0;
        v127 = v123;
        v128 = &v126[v127];
        pClassNamef = (v127 * 24);
        v129 = v126[v127].m_value.m_flags;
        if ( (v129 & 1) != 0 )
          v128->m_value.m_flags = v129 & 0xFFFE;
        v128->m_value.m_uint64 = 0;
        v128->m_value.m_type = 3;
        v130 = CEntityVariantAllocator::Allocate(0xCu);
        v128->m_value.m_uint64 = v130;
        *v130 = vec3_origin;
        v128->m_value.m_flags |= 1u;
        if ( v15->m_keyValues.m_nAllocated != 0 )
          v131 = v15->m_keyValues.m_pElements;
        else
          v131 = 0;
        *&pClassNamef[v131 + 16] = 0;
      }
      else
      {
        v120 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v121 = 0;
        while ( 1 )
        {
          if ( v120 != 0 )
          {
            v122 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v120 > 9 )
              v122 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v122 = 0;
          }
          if ( v122[v121] == -467664362 )
            break;
          if ( v119 <= ++v121 )
            goto LABEL_192;
        }
        if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v132 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
          v133 = v121;
          if ( v132[v133].m_pAttributeName != 0 )
          {
LABEL_204:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v132[v133].m_pAttributeName);
            goto LABEL_205;
          }
          v154 = &v132[v133];
        }
        else
        {
          v133 = v121;
          v132 = 0;
          v154 = v133 * 24;
          if ( *(v133 * 24 + 16) != 0 )
            goto LABEL_204;
        }
        v155 = *(v154 + 10);
        if ( (v155 & 1) != 0 )
          *(v154 + 10) = v155 & 0xFFFE;
        *v154 = 0;
        *(v154 + 8) = 3;
        v156 = CEntityVariantAllocator::Allocate(0xCu);
        *v154 = v156;
        *v156 = vec3_origin;
        *(v154 + 10) |= 1u;
      }
LABEL_205:
      v15 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
      {
        v134 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( v134 <= 0 )
        {
LABEL_214:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
          v138 = v15->m_keyHashes.m_nCount - 1;
          v139 = v15->m_keyHashes.m_nAllocated;
          if ( v139 != 0 )
          {
            if ( v139 <= 9 )
              v140 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
            else
              v140 = v15->m_keyHashes.m_pElements;
          }
          else
          {
            v140 = 0;
          }
          v140[v138] = -1164387633;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v15->m_keyValues);
          if ( v15->m_keyValues.m_nAllocated != 0 )
            v141 = v15->m_keyValues.m_pElements;
          else
            v141 = 0;
          v142 = v138;
          v143 = &v141[v142];
          pClassNameg = (v142 * 24);
          v144 = v141[v142].m_value.m_flags;
          if ( (v144 & 1) != 0 )
            v143->m_value.m_flags = v144 & 0xFFFE;
          v143->m_value.m_uint64 = 0;
          v143->m_value.m_type = 39;
          v145 = CEntityVariantAllocator::Allocate(0xCu);
          v143->m_value.m_uint64 = v145;
          *v145 = vec3_angle;
          v143->m_value.m_flags |= 1u;
          if ( v15->m_keyValues.m_nAllocated != 0 )
            v146 = v15->m_keyValues.m_pElements;
          else
            v146 = 0;
          v15 = spawner.m_pEntityKeyValues;
          *&pClassNameg[v146 + 16] = 0;
          m_pEntity = pOwner->m_pEntity;
          goto LABEL_11;
        }
        v135 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v136 = 0;
        while ( 1 )
        {
          if ( v135 != 0 )
          {
            v137 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v135 > 9 )
              v137 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v137 = 0;
          }
          if ( v137[v136] == -1164387633 )
            break;
          if ( v134 <= ++v136 )
            goto LABEL_214;
        }
        if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v93 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
          v94 = v136;
          if ( v93[v94].m_pAttributeName != 0 )
          {
LABEL_142:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v93[v94].m_pAttributeName);
LABEL_143:
            v15 = spawner.m_pEntityKeyValues;
            goto LABEL_144;
          }
          v163 = &v93[v94];
        }
        else
        {
          v94 = v136;
          v93 = 0;
          v163 = v94 * 24;
          if ( *(v94 * 24 + 16) != 0 )
            goto LABEL_142;
        }
        v164 = *(v163 + 10);
        if ( (v164 & 1) != 0 )
          *(v163 + 10) = v164 & 0xFFFE;
        *v163 = 0;
        *(v163 + 8) = 39;
        v165 = CEntityVariantAllocator::Allocate(0xCu);
        *v163 = v165;
        *v165 = vec3_angle;
        *(v163 + 10) |= 1u;
        goto LABEL_143;
      }
LABEL_144:
      m_pEntity = pOwner->m_pEntity;
      if ( m_pEntity != 0 )
        goto LABEL_12;
LABEL_145:
      v185 = -1;
      goto LABEL_15;
    }
    v48 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v49 = 0;
    while ( 1 )
    {
      if ( v48 != 0 )
      {
        v50 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v48 > 9 )
          v50 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v50 = 0;
      }
      if ( v50[v49] == 1166161001 )
        break;
      if ( v47 <= ++v49 )
        goto LABEL_96;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v86 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v87 = v49;
      m_pAttributeName = v86[v87].m_pAttributeName;
      if ( m_pAttributeName != 0 )
      {
LABEL_129:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
LABEL_130:
        v15 = spawner.m_pEntityKeyValues;
        m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
        goto LABEL_131;
      }
      v160 = v186[0];
    }
    else
    {
      v87 = v49;
      m_pAttributeName = *(v87 * 24 + 16);
      if ( m_pAttributeName != 0 )
        goto LABEL_129;
      v160 = v186[0];
      v86 = 0;
    }
    v161 = &v86[v87];
    v162 = v161->m_value.m_flags;
    if ( (v162 & 1) != 0 )
      v161->m_value.m_flags = v162 & 0xFFFE;
    v161->m_value.m_uint64 = 0;
    v161->m_value.m_type = 13;
    v161->m_value.m_int = v160;
    goto LABEL_130;
  }
LABEL_11:
  if ( m_pEntity == 0 )
    goto LABEL_145;
LABEL_12:
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v16 = 0x7FFF;
  else
    v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v185 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
LABEL_15:
  v17 = v15;
  if ( v15->m_nQueuedForSpawnCount <= 0 )
  {
    v51 = v15->m_keyHashes.m_nCount;
    if ( v51 <= 0 )
    {
LABEL_86:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v15->m_keyHashes);
      v56 = v15->m_keyHashes.m_nCount - 1;
      v57 = v15->m_keyHashes.m_nAllocated;
      if ( v57 != 0 )
      {
        if ( v57 <= 9 )
          v58 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
        else
          v58 = v15->m_keyHashes.m_pElements;
      }
      else
      {
        v58 = 0;
      }
      v58[v56] = -1104771937;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v15->m_keyValues);
      v59 = v185;
      if ( v15->m_keyValues.m_nAllocated != 0 )
        v60 = v15->m_keyValues.m_pElements;
      else
        v60 = 0;
      v61 = &v60[v56];
      v62 = v61->m_value.m_flags;
      if ( (v62 & 1) != 0 )
        v61->m_value.m_flags = v62 & 0xFFFE;
      v61->m_value.m_uint64 = 0;
      v61->m_value.m_type = 13;
      v61->m_value.m_int = v59;
      if ( v15->m_keyValues.m_nAllocated != 0 )
        v63 = v15->m_keyValues.m_pElements;
      else
        v63 = 0;
      v63[v56].m_pAttributeName = 0;
      v17 = spawner.m_pEntityKeyValues;
LABEL_125:
      v184.m_Index = -1;
      if ( v17 == 0 )
        goto LABEL_33;
      goto LABEL_17;
    }
    v52 = v15->m_keyHashes.m_nAllocated;
    v53 = 0;
    while ( 1 )
    {
      if ( v52 != 0 )
      {
        v54 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
        if ( v52 > 9 )
          v54 = v15->m_keyHashes.m_pElements;
      }
      else
      {
        v54 = 0;
      }
      if ( v54[v53] == -1104771937 )
        break;
      if ( v51 <= ++v53 )
        goto LABEL_86;
    }
    if ( v15->m_keyValues.m_nAllocated != 0 )
    {
      v83 = v15->m_keyValues.m_pElements;
      v84 = v53;
      v85 = v83[v84].m_pAttributeName;
      if ( v85 != 0 )
      {
LABEL_123:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v85);
LABEL_124:
        v17 = spawner.m_pEntityKeyValues;
        goto LABEL_125;
      }
      v157 = v185;
    }
    else
    {
      v84 = v53;
      v85 = *(v84 * 24 + 16);
      if ( v85 != 0 )
        goto LABEL_123;
      v157 = v185;
      v83 = 0;
    }
    v158 = &v83[v84];
    v159 = v158->m_value.m_flags;
    if ( (v159 & 1) != 0 )
      v158->m_value.m_flags = v159 & 0xFFFE;
    v158->m_value.m_uint64 = 0;
    v158->m_value.m_type = 13;
    v158->m_value.m_int = v157;
    goto LABEL_124;
  }
  v184.m_Index = -1;
LABEL_17:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v169 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v40 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v148 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v148->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    v17 = spawner.m_pEntityKeyValues;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v40 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(v17, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v20 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v20,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v22 = Entity;
  if ( Entity != 0 )
  {
    v23 = Entity->m_pEntity;
    if ( v23 != 0 )
    {
      v24 = 0x7FFF;
      if ( v23->m_EHandle.m_Index != -1 )
        v24 = v23->m_EHandle.m_Index & 0x7FFF;
      v184.m_Index = (((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15) | v24 & 0x7FFF;
    }
    else
    {
      v184.m_Index = -1;
    }
    v186[0] = v23;
    v186[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v186,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v22, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( pClassNamea = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v28 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v28 - 1);
        (pfn)(v28, v22, pClassNamea);
      }
    }
  }
  if ( v169 )
  {
    v36 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v37 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v37 == ThreadGetCurrentId() )
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
LABEL_33:
  v29 = CEntityHandle::operator CEntityInstance *(&v184);
  v30 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  v31 = v29;
  spawner._vptr_CEntitySpawnerBase = off_40D7590;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v30 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v30);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v32 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v32);
      operator delete(v32);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return v31;
}


// CDOTABaseAbility::CDOTABaseAbility  (line 51, @0x0000000002428c80, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, CUtlReference, DOTAGameRules, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, KillRef, NetworkStateChanged, RemoveFromDList<CUtlReference<CDOTA_Buff> >, RemoveNode, Set, item_definition_index_t, operator=, operator=<bool>, operator=<int>, ~CUtlReference
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CDOTABaseAbility::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_Lua::CDOTA_Ability_Lua, CDOTA_Ability_Lua::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_DataDriven::CDOTA_Ability_DataDriven, CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::ConstructInstance (1074 total)
void __fastcall CDOTABaseAbility::CDOTABaseAbility(CDOTABaseAbility *const this)
{
  CUtlReference<CDOTA_Buff> *p_m_pIntrinsicBuff; // r12
  int m_Value; // edx

  p_m_pIntrinsicBuff = &this->m_pIntrinsicBuff;
  CBaseEntity::CBaseEntity(this);
  this->m_bHidden.m_Value = 0;
  this->m_nBackedByEconItemIndex.m_Data = 0;
  this->_vptr_IHandleEntity = &off_40D75D0;
  this->m_hNeutralCastTarget.m_Index = -1;
  this->m_bActivated.m_Value = 0;
  this->m_iDirtyButtons.m_Value = 0;
  this->m_iLevel.m_Value = 0;
  this->m_bToggleState.m_Value = 0;
  this->m_bInAbilityPhase.m_Value = 0;
  this->m_fCooldown.m_Value = 0.0;
  this->m_iCastRange.m_Value = 0;
  this->m_flCooldownLength.m_Value = 0.0;
  this->m_iManaCost.m_Value = 0;
  this->m_bAutoCastState.m_Value = 0;
  this->m_flChannelStartTime.m_Value = 0.0;
  this->m_bInIndefiniteCooldown.m_Value = 0;
  this->m_bFrozenCooldown.m_Value = 0;
  this->m_flOverrideCastPoint.m_Value = 0.0;
  this->m_bStolen.m_Value = 0;
  this->m_pIntrinsicBuff.m_pPrev = 0;
  this->m_pIntrinsicBuff.m_pNext = 0;
  this->m_pIntrinsicBuff.m_pObject = 0;
  this->m_pIntrinsicBuff.m_ThisCheck = p_m_pIntrinsicBuff;
  this->m_pBotUsage = 0;
  this->m_pBotScript = 0;
  CBaseEntity::NetworkStateChanged(this, 0x325u, -1, -1);
  this->m_bActivated.m_Value = 1;
  m_Value = this->m_iCastRange.m_Value;
  this->m_bRefCountsModifiers = 0;
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 20 )
    this->m_bRefCountsModifiers = 1;
  this->m_iModifierRefCount = 0;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCastRange.m_Value = 0;
  }
  if ( this->m_flOverrideCastPoint.m_Value != -1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 848, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_flOverrideCastPoint.m_Value = -1.0;
  }
  this->m_bWantsToNeutralCast = 0;
  this->m_hNeutralCastTarget.m_Index = -1;
}


// CDOTABaseAbility::~CDOTABaseAbility  (line 76, @0x0000000002420770, libserver.so)  // inlines: GetAbilityName, KillRef, RemoveFromDList<CUtlReference<CDOTA_Buff> >, RemoveNode, ~CUtlReference
// calls: operator delete, CBaseEntity::~CBaseEntity, Warning
// callers: CDOTABaseAbility::~CDOTABaseAbility, CDOTA_Ability_Lua::~CDOTA_Ability_Lua, CDOTA_Ability_AttributeBonus::~CDOTA_Ability_AttributeBonus, CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven, CDOTA_Ability_Throw_Snowball::~CDOTA_Ability_Throw_Snowball, CDOTA_Ability_Throw_Coal::~CDOTA_Ability_Throw_Coal, CDOTA_Ability_Healing_Campfire::~CDOTA_Ability_Healing_Campfire, CDOTA_Ability_ShootFirework::~CDOTA_Ability_ShootFirework, CDOTA_Ability_Lesser_NightCrawler_Pounce::~CDOTA_Ability_Lesser_NightCrawler_Pounce, CDOTA_Ability_Zombie_Berserk::~CDOTA_Ability_Zombie_Berserk, CDOTA_Ability_Corspselord_Revive::~CDOTA_Ability_Corspselord_Revive, CDOTA_Ability_Slithereen_Riptide::~CDOTA_Ability_Slithereen_Riptide (1112 total)
// strings: "<NoAbilityName>", "Ability %s is refcounting and has refcount of %d on destruction!\n"
void __fastcall CDOTABaseAbility::~CDOTABaseAbility(CDOTABaseAbility *const this)
{
  int m_iModifierRefCount; // edx
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  CDOTABaseAbility_BotScript *m_pBotScript; // rdi
  CDOTA_Buff *m_pObject; // rdx
  CUtlReference<CDOTA_Buff> *m_pPrev; // rax
  CUtlReference<CDOTA_Buff> *m_pNext; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v9; // rsi
  const char *m_pszAbilityName; // rax
  CUtlReference<CDOTA_Buff> *v11; // rax

  this->_vptr_IHandleEntity = &off_40D75D0;
  if ( this->m_bRefCountsModifiers )
  {
    m_iModifierRefCount = this->m_iModifierRefCount;
    if ( m_iModifierRefCount != 0 )
    {
      m_pAbilityData = this->m_pAbilityData;
      v9 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v9 = m_pszAbilityName;
      }
      Warning("Ability %s is refcounting and has refcount of %d on destruction!\n", v9, m_iModifierRefCount);
    }
  }
  m_pBotUsage = this->m_pBotUsage;
  if ( m_pBotUsage != 0 )
    (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 1))(m_pBotUsage);
  m_pBotScript = this->m_pBotScript;
  if ( m_pBotScript != 0 )
    operator delete(m_pBotScript);
  m_pObject = this->m_pIntrinsicBuff.m_pObject;
  if ( m_pObject != 0 )
  {
    m_pPrev = this->m_pIntrinsicBuff.m_pPrev;
    if ( m_pPrev != 0 )
    {
      m_pPrev->m_pNext = this->m_pIntrinsicBuff.m_pNext;
      m_pNext = this->m_pIntrinsicBuff.m_pNext;
      if ( m_pNext != 0 )
        m_pNext->m_pPrev = this->m_pIntrinsicBuff.m_pPrev;
    }
    else if ( m_pObject->m_References.m_pHead == &this->m_pIntrinsicBuff )
    {
      v11 = this->m_pIntrinsicBuff.m_pNext;
      m_pObject->m_References.m_pHead = v11;
      if ( v11 != 0 )
        v11->m_pPrev = 0;
    }
    this->m_pIntrinsicBuff.m_pPrev = 0;
    this->m_pIntrinsicBuff.m_pNext = 0;
    this->m_pIntrinsicBuff.m_pObject = 0;
  }
  CBaseEntity::~CBaseEntity(this);
}


// CDOTABaseAbility::~CDOTABaseAbility  (line 76, @0x0000000002420890, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTABaseAbility::~CDOTABaseAbility(CDOTABaseAbility *const this)
{
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTABaseAbility::GetBotScript  (line 98, @0x0000000002428f80, libserver.so)  // inlines: CDOTABaseAbility_BotScript
// calls: operator new
// callers: CDOTA_Bot_Script::GetAbilityByName, CDOTA_Bot_Script::GetItemInSlot, CDOTA_Bot_Script::GetCurrentActiveAbility, Script_GetDroppedItemList
CDOTABaseAbility_BotScript *__fastcall CDOTABaseAbility::GetBotScript(CDOTABaseAbility *const this)
{
  CDOTABaseAbility_BotScript *result; // rax
  __int64 v3; // rdx

  result = this->m_pBotScript;
  if ( result == 0 )
  {
    result = operator new(0x80u);
    v3 = 0;
    result->_vptr_CDOTABaseAbility_BotScript = &off_40D90E0;
    result->m_pAbility = this;
    do
      result->m_hScriptHandle[v3++] = 0;
    while ( v3 != 14 );
    this->m_pBotScript = result;
  }
  return result;
}


// CDOTABaseAbility::UpdateOnRemove  (line 108, @0x0000000002420990, libserver.so)  // inlines: KillRef, RemoveFromDList<CUtlReference<CDOTA_Buff> >, RemoveNode, Set, operator=
// calls: CDOTA_Buff::Destroy, CBaseEntity::UpdateOnRemove
// callers: CDOTA_Item::UpdateOnRemove, CDOTA_Ability_MudGolem_HurlBoulder::UpdateOnRemove, CDOTA_Ability_DeathProphet_Exorcism::UpdateOnRemove, CDOTA_Ability_Brewmaster_HurlBoulder::UpdateOnRemove, CDOTA_Ability_Elder_Titan_AncestralSpirit::UpdateOnRemove, CDOTA_Ability_Wisp_Spirits::UpdateOnRemove
void __fastcall CDOTABaseAbility::UpdateOnRemove(CDOTABaseAbility *const this)
{
  CDOTA_Buff *v2; // rax
  CDOTA_Buff *m_pObject; // rax
  CUtlReference<CDOTA_Buff> *m_pPrev; // rdx
  CUtlReference<CDOTA_Buff> *m_pNext; // rax
  CUtlReference<CDOTA_Buff> *v6; // rdx

  if ( (*(this->_vptr_IHandleEntity + 263))(this) != 0 )
  {
    v2 = (*(this->_vptr_IHandleEntity + 263))(this);
    CDOTA_Buff::Destroy(v2, 0, 0, 0);
    m_pObject = this->m_pIntrinsicBuff.m_pObject;
    if ( m_pObject != 0 )
    {
      m_pPrev = this->m_pIntrinsicBuff.m_pPrev;
      if ( m_pPrev != 0 )
      {
        m_pPrev->m_pNext = this->m_pIntrinsicBuff.m_pNext;
        m_pNext = this->m_pIntrinsicBuff.m_pNext;
        if ( m_pNext != 0 )
          m_pNext->m_pPrev = this->m_pIntrinsicBuff.m_pPrev;
      }
      else if ( m_pObject->m_References.m_pHead == &this->m_pIntrinsicBuff )
      {
        v6 = this->m_pIntrinsicBuff.m_pNext;
        m_pObject->m_References.m_pHead = v6;
        if ( v6 != 0 )
          v6->m_pPrev = 0;
      }
      this->m_pIntrinsicBuff.m_pPrev = 0;
      this->m_pIntrinsicBuff.m_pNext = 0;
      this->m_pIntrinsicBuff.m_pObject = 0;
    }
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CDOTABaseAbility::YouForgotToImplementOrDeclareServerClass  (line 168, @0x000000000241f350, libserver.so)
int __fastcall CDOTABaseAbility::YouForgotToImplementOrDeclareServerClass(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::GetServerClass  (line 168, @0x0000000002423070, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTABaseAbility::GetServerClass(CDOTABaseAbility *const this)
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


// CDOTABaseAbility::Spawn  (line 174, @0x0000000002420f50, libserver.so)  // inlines: NetworkStateChanged, RemoveEFlags, Set, curtime, operator=<bool>, operator=<float>, operator=<int>
// calls: CBaseEntity::Spawn, CBaseEntity::ThinkSet, CCollisionProperty::UpdateLocateHandle
// callers: CDOTA_Ability_Lua::Spawn, CDOTA_Ability_DataDriven::Spawn, CDOTA_Item::Spawn, CDOTA_Ability_AncientApparition_IceBlast::Spawn, CDOTA_Ability_Morphling_Hybrid::Spawn, CDOTA_Ability_Zuus_Cloud::Spawn, CDOTA_Ability_DeathProphet_Exorcism::Spawn, CDOTA_Ability_FacelessVoid_TimeWalk::Spawn, CDOTA_Ability_LoneDruid_SavageRoar_Bear::Spawn, CDOTA_Ability_Weaver_TimeLapse::Spawn, CDOTA_Ability_MonkeyKing_Transform::Spawn, CDOTA_Ability_MonkeyKing_UnTransform::Spawn (22 total)
void __fastcall CDOTABaseAbility::Spawn(CDOTABaseAbility *const this, const CEntityKeyValues *pKeyValues)
{
  CGlobalVars *v3; // r12
  float m_flCurrentTime; // xmm0_4
  CCollisionProperty *m_pCollision; // rdi
  bool v6; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::Spawn(this, pKeyValues);
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
  else
  {
    m_flCurrentTime = 0.0;
  }
  CBaseEntity::ThinkSet(this, 0x3A9uLL, m_flCurrentTime, -1462483308, 0);
  m_pCollision = this->m_pCollision;
  this->m_iEFlags &= ~0x40000u;
  if ( m_pCollision != 0 )
    CCollisionProperty::UpdateLocateHandle(m_pCollision);
  (*(this->_vptr_IHandleEntity + 212))(this, 0);
  if ( this->m_fCooldown.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fCooldown.m_Value = 0.0;
  }
  if ( this->m_iManaCost.m_Value == 0 )
  {
    if ( !this->m_bToggleState.m_Value )
      goto LABEL_10;
LABEL_25:
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6 = !this->m_bAutoCastState.m_Value;
    this->m_bToggleState.m_Value = 0;
    if ( v6 )
      goto LABEL_11;
    goto LABEL_26;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v6 = !this->m_bToggleState.m_Value;
  this->m_iManaCost.m_Value = 0;
  if ( !v6 )
    goto LABEL_25;
LABEL_10:
  if ( !this->m_bAutoCastState.m_Value )
  {
LABEL_11:
    v6 = this->m_flChannelStartTime.m_Value == 0.0;
    goto LABEL_12;
  }
LABEL_26:
  (*(this->_vptr_IHandleEntity + 22))(this, 836, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_bAutoCastState.m_Value = 0;
  v6 = this->m_flChannelStartTime.m_Value == 0.0;
LABEL_12:
  if ( v6 )
  {
    if ( !this->m_bInAbilityPhase.m_Value )
      goto LABEL_14;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 840, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6 = !this->m_bInAbilityPhase.m_Value;
    this->m_flChannelStartTime.m_Value = 0.0;
    if ( v6 )
      goto LABEL_14;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_bInAbilityPhase.m_Value = 0;
LABEL_14:
  v6 = !this->m_bInIndefiniteCooldown.m_Value;
  this->m_bChanneling = 0;
  if ( !v6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 844, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInIndefiniteCooldown.m_Value = 0;
  }
  if ( this->m_bFrozenCooldown.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 845, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bFrozenCooldown.m_Value = 0;
  }
  if ( this->m_bStolen.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStolen.m_Value = 0;
  }
}


// CDOTABaseAbility::Precache  (line 197, @0x0000000002455180, libserver.so)  // inlines: GetAbilityData, GetAbilityKeyValues, Precache
// calls: CEntityInstance::Precache, CDOTABaseAbility::LoadAbilityData, KeyValues::FindKey, CDOTAGamerules::PrecacheResourcesFromKeys
// callers: CDOTA_Ability_DataDriven::Precache, CDOTA_Ability_Throw_Snowball::Precache, CDOTA_Ability_Throw_Coal::Precache, CDOTA_Ability_ShootFirework::Precache, CDOTA_Item::Precache, CDOTA_Ability_FillerAbility::Precache, CDOTA_Ability_Morphling_AdaptiveStrike::Precache, CDOTA_Ability_Warlock_RainOfChaos::Precache, CDOTA_Ability_Elder_Titan_AncestralSpirit::Precache, CDOTA_Ability_Phoenix_Supernova::Precache
// strings: "precache"
void __fastcall CDOTABaseAbility::Precache(CDOTABaseAbility *const this, const CEntityPrecacheContext *pContext)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  KeyValues *m_pKVData; // rdi
  KeyValues *Key; // rax

  CEntityInstance::Precache(this, pContext);
  CDOTABaseAbility::LoadAbilityData(this, 1);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 || (CDOTABaseAbility::LoadAbilityData(this, 0), (m_pAbilityData = this->m_pAbilityData) != 0) )
  {
    m_pKVData = m_pAbilityData->m_pKVData;
    if ( m_pKVData != 0 )
    {
      Key = KeyValues::FindKey(m_pKVData, "precache", 0);
      if ( Key != 0 )
        CDOTAGamerules::PrecacheResourcesFromKeys(Key, pContext->m_pManifest);
    }
  }
}


// CDOTABaseAbility::Think  (line 215, @0x000000000242f220, libserver.so)  // inlines: DOTAGameRules, Get, GetAbilityData, GetCaster, GetGameTime, GetOwnerEntity, GetSharedCooldownName, NetworkStateChanged, Set, curtime, operator=<float>
// calls: CBaseEntity::Think, CBaseEntity::ThinkSet, CEntityHandle::GetHandleEntity, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetSharedCooldownTime, CDOTA_UnitInventory::FindItemSlotInInventory, CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Item::Think, CDOTA_Ability_WitchDoctor_DeathWard::Think, CDOTA_Ability_MonkeyKing_FurArmy::Think, CDOTA_Ability_Tusk_Snowball::Think
// strings: "<NoSharedCooldownName>"
void __fastcall CDOTABaseAbility::Think(CDOTABaseAbility *const this)
{
  CGlobalVars *v2; // r12
  float v3; // xmm0_4
  IHandleEntity *HandleEntity; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTA_BaseNPC *v6; // rdi
  const char *m_pszSharedCooldownName; // r14
  CDOTA_UnitInventory *Inventory; // rax
  float SharedCooldownTime; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float m_Value; // xmm2_4
  float v13; // xmm0_4
  IHandleEntity *v14; // rax
  float v15; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_UnitInventory *v18; // rax
  IHandleEntity *v19; // rax
  float v20; // [rsp+8h] [rbp-28h]
  float v21; // [rsp+Ch] [rbp-24h]

  CBaseEntity::Think(this);
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v3 = v2->m_flCurrentTime + 0.1;
  }
  else
  {
    v3 = 0.1;
  }
  CBaseEntity::ThinkSet(this, 0x3A9uLL, v3, -1462483308, 0);
  if ( g_pGameRules == 0 || g_pGameRules[19].m_szQuestName[29] == 0 )
  {
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 )
    {
      m_pAbilityData = this->m_pAbilityData;
      v6 = HandleEntity;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        v19 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        m_pAbilityData = this->m_pAbilityData;
        v6 = v19;
      }
      m_pszSharedCooldownName = m_pAbilityData->m_pszSharedCooldownName;
      if ( m_pszSharedCooldownName == 0 )
      {
        m_pszSharedCooldownName = "<NoSharedCooldownName>";
        if ( m_pAbilityData->m_pszAbilityName != 0 )
          m_pszSharedCooldownName = m_pAbilityData->m_pszAbilityName;
      }
      Inventory = CDOTA_BaseNPC::GetInventory(v6);
      SharedCooldownTime = CDOTA_UnitInventory::GetSharedCooldownTime(Inventory, m_pszSharedCooldownName);
      v10 = g_pGameRules != 0 ? *&g_pGameRules[18].m_szQuestName[20] : 0.0;
      v11 = SharedCooldownTime - v10;
      m_Value = this->m_fCooldown.m_Value;
      if ( v11 > m_Value )
      {
        v13 = v11 + 0.0099999998;
        if ( m_Value != v13 )
        {
          v20 = v13;
          (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_fCooldown.m_Value = v20;
          m_Value = v20;
        }
      }
    }
    else
    {
      m_Value = this->m_fCooldown.m_Value;
    }
    if ( m_Value > 0.0 )
    {
      if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0
        && ((v14 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value),
             (*(v14->_vptr_IHandleEntity + 414))(v14) != *(this + 247))
         || (v17 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value),
             v18 = CDOTA_BaseNPC::GetInventory(v17),
             CDOTA_UnitInventory::FindItemSlotInInventory(v18, this, 3) > 5)) )
      {
        v15 = fmaxf(0.0, this->m_fCooldown.m_Value - 0.050000001);
        if ( this->m_fCooldown.m_Value != v15 )
        {
LABEL_20:
          v21 = v15;
          (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_fCooldown.m_Value = v21;
        }
      }
      else
      {
        v15 = fmaxf(0.0, this->m_fCooldown.m_Value - 0.1);
        if ( this->m_fCooldown.m_Value != v15 )
          goto LABEL_20;
      }
    }
  }
}


// CDOTABaseAbility::GetCursorTarget  (line 275, @0x0000000002428ff0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetCaster, GetCursorCastTarget, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator bool
// callers: CDOTA_Ability_DataDriven::FindNamedTarget, CDOTABaseAbility::Script_GetCursorTarget, CDOTABaseAbility::GetCastExecuteCriteria, CDOTABaseAbility::CastAbility, CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_Ability_DataDriven::OnSpellStart, CDOTA_Ability_DataDriven::OnAbilityPhaseStart, CDOTA_Ability_DataDriven::OnAbilityPhaseInterrupted, CDOTA_Ability_DataDriven::OnChannelFinish, CDOTA_Item_UpgradedMortar::OnSpellStart, CDOTA_Ability_Throw_Snowball::OnSpellStart, CDOTA_Ability_Throw_Coal::OnSpellStart (271 total)
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTABaseAbility::GetCursorTarget(CDOTABaseAbility *const this)
{
  uint32 m_Index; // ecx
  unsigned __int16 v2; // dx
  int v3; // r9d
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseEntity *result; // rax
  int m_Id; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  unsigned __int16 v11; // dx
  int v12; // ecx
  CEntityInstance *m_pInstance; // rsi
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  int v17; // edx
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx

  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  if ( m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 <= 1 )
    return 0;
  v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[v3 & 0x1FF];
  if ( v6 == 0 )
    return 0;
  if ( v4 != v6->m_EHandle.m_Index )
    return 0;
  if ( v6->m_pInstance == 0 )
    return 0;
  m_Id = v6->m_pInstance[64].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id + 2) <= 1 )
    return 0;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Id >> 9) & 0x3F];
  if ( v9 == 0 )
    return 0;
  v10 = &v9[m_Id & 0x1FF];
  if ( v10 == 0 || m_Id != v10->m_EHandle.m_Index )
    return 0;
  if ( m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  m_pInstance = 0;
  v14 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  if ( v14 + 2 > 1 )
  {
    v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
    if ( v15 != 0 )
    {
      v16 = &v15[v12 & 0x1FF];
      if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
        m_pInstance = v16->m_pInstance;
    }
  }
  v17 = m_pInstance[64].m_iszPrivateVScripts.u.m_Id;
  result = 0;
  if ( (v17 + 2) > 1 )
  {
    v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9) & 0x3F];
    if ( v18 != 0 )
    {
      v19 = &v18[v17 & 0x1FF];
      if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
        return v19->m_pInstance;
    }
  }
  return result;
}


// CDOTABaseAbility::GetCursorPosition  (line 283, @0x0000000002421430, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::GetCursorPosition
// callers: CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_Ability_DataDriven::OnSpellStart, CDOTA_Ability_DataDriven::OnAbilityPhaseStart, CDOTA_Ability_DataDriven::OnAbilityPhaseInterrupted, CDOTA_Ability_DataDriven::OnChannelFinish, CDOTA_Ability_Healing_Campfire::OnSpellStart, CDOTA_Item_DataDriven::OnSpellStart, CDOTA_Item_DataDriven::OnAbilityPhaseStart, CDOTA_Item_DataDriven::OnChannelFinish, CDOTA_Ability_HarpyStorm_ChainLightning::OnSpellStart, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart, CDOTA_Ability_AncientGolem_Rockslide::OnSpellStart (187 total)
Vector __fastcall CDOTABaseAbility::GetCursorPosition(CDOTABaseAbility *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  Vector CursorPosition; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    CursorPosition = CDOTA_BaseNPC::GetCursorPosition(v5->m_pInstance);
    *&result.x = *&CursorPosition.x;
    result.z = CursorPosition.z;
  }
  else
  {
    result.z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
  }
  return result;
}


// CDOTABaseAbility::GetCursorTargetingNothing  (line 291, @0x00000000024212d0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CDOTA_Ability_Furion_Teleportation::OnSpellStart
bool __fastcall CDOTABaseAbility::GetCursorTargetingNothing(CDOTABaseAbility *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rdx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 || v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  result = 0;
  if ( m_pInstance != 0 )
    return BYTE4(m_pInstance[64].m_iszPrivateVScripts.u.m_pAsString);
  return result;
}


// CDOTABaseAbility::UseResources  (line 299, @0x0000000002429b70, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTABaseAbility::PayManaCost, CDOTABaseAbility::PayGoldCost
// callers: CDOTABaseAbility::Script_UseResources, CDOTABaseAbility::ToggleAbility, CDOTABaseAbility::CastAbility, CDOTA_Modifier_SkeletonKing_Reincarnation::ReincarnateTime, CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackLanded
void __fastcall CDOTABaseAbility::UseResources(
        CDOTABaseAbility *const this,
        bool bMana,
        bool bGold,
        bool bCooldown,
        CDOTA_BaseNPC *pTarget)
{
  if ( (((*(this->_vptr_IHandleEntity + 251))(this) & 0x200) == 0 || !this->m_bToggleState.m_Value)
    && dota_ability_debug.m_pParent->m_Value.m_nValue == 0
    && (*(this->_vptr_IHandleEntity + 246))(this) != 0 )
  {
    if ( bMana )
      CDOTABaseAbility::PayManaCost(this, pTarget);
    if ( bGold )
      CDOTABaseAbility::PayGoldCost(this);
    if ( bCooldown )
      (*(this->_vptr_IHandleEntity + 241))(this, -1.0);
  }
}


// CDOTABaseAbility::Script_UseResources  (line 318, @0x0000000002429c30, libserver.so)
// calls: CDOTABaseAbility::UseResources
void __fastcall CDOTABaseAbility::Script_UseResources(
        CDOTABaseAbility *const this,
        bool bMana,
        bool bGold,
        bool bCooldown)
{
  CDOTABaseAbility::UseResources(this, bMana, bGold, bCooldown, 0);
}


// CDOTABaseAbility::OnToggle  (line 323, @0x0000000002420580, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CDOTA_Ability_Lua::Script_OnToggle, CDOTA_Ability_Lua::OnToggle, CDOTA_Ability_DataDriven::OnToggle, CDOTA_Item_Lua::Script_OnToggle, CDOTA_Item_DataDriven::OnToggle, CDOTA_Item_Lua::OnToggle, CDOTA_Ability_Morphling_Morph_Agi::OnToggle, CDOTA_Ability_Morphling_Morph_Str::OnToggle, CDOTA_Ability_Bane_NightmareEnd::OnToggle, CDOTA_Ability_Pudge_Rot::OnToggle, CDOTA_Ability_SkeletonKing_VampiricAura::OnToggle, CDOTA_Ability_WitchDoctor_VoodooRestoration::OnToggle (24 total)
void __fastcall CDOTABaseAbility::OnToggle(CDOTABaseAbility *const this)
{
  bool v2; // r12

  v2 = !this->m_bToggleState.m_Value;
  if ( this->m_bToggleState.m_Value != v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bToggleState.m_Value = v2;
  }
}


// CDOTABaseAbility::GetDuration  (line 328, @0x000000000242e270, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel, GetLevel, IsTrained
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_DataDriven::LookupValueSymbol, CDOTA_Ability_Healing_Campfire::OnSpellStart, CDOTA_Item_DataDriven::LookupValueSymbol, CDOTA_Ability_Greevil_Miniboss_Red_Overpower::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Blue_IceVortex::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Red_Earthshock::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::OnSpellStart, CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker::OnCreated, CDOTA_Bot_AbilityUsage_Tiny_Avalanche::UseAbility, CDOTA_Ability_AncientApparition_IceVortex::GetSlowDuration, CDOTA_Ability_DrowRanger_FrostArrows::GetSlowDuration, CDOTA_Ability_DrowRanger_Trueshot::OnSpellStart (121 total)
float __fastcall CDOTABaseAbility::GetDuration(CDOTABaseAbility *const this)
{
  int m_Value; // edx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v4; // edx

  m_Value = this->m_iLevel.m_Value;
  if ( m_Value <= 0 )
    return 0.0;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    m_Value = this->m_iLevel.m_Value;
  }
  v4 = m_Value - 1;
  if ( v4 > m_pAbilityData->m_nDurations - 1 )
    v4 = m_pAbilityData->m_nDurations - 1;
  if ( v4 < 0 )
    return 0.0;
  else
    return m_pAbilityData->m_pDurations[v4];
}


// CDOTABaseAbility::OnTakeDamage  (line 340, @0x0000000002421250, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTABaseAbility::OnTakeDamage(CDOTABaseAbility *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // ecx
  float m_flDamage; // xmm0_4
  CEntityInstance *m_pInstance; // rsi
  unsigned __int16 v6; // r9
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax

  m_Index = info->m_hAttacker.m_Index;
  m_flDamage = info->m_flDamage;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = info->m_hAttacker.m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  (*(this->_vptr_IHandleEntity + 278))(this, m_pInstance, m_flDamage);
  return 1;
}


// CDOTABaseAbility::ToggleAbility  (line 347, @0x0000000002429c50, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetOwnerEntity, GetSerialNumber, Set, SetUnit, ToDOTABaseNPCHero, operator=
// calls: CDOTABaseAbility::UseResources, CEntityHandle::GetHandleEntity, CDOTA_CombatLog::AddAbilityEvent, CDOTABaseAbility::SpeakAbilityConcept, CDOTAGamerules::SetLastUsedAbility, FireModifierEvent, DOTACommander, CDOTA_Commander::OnAbilityExecuted
// callers: CDOTA_Item::DuplicateState, CDOTA_Bot::UseAbilities, CDOTA_BaseNPC::Script_CastAbilityToggle, CDOTA_BaseNPC::CastAbilityToggle, CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnIntervalThink, CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnInventoryContentsChanged, CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex
void __fastcall CDOTABaseAbility::ToggleAbility(CDOTABaseAbility *const this)
{
  IHandleEntity *HandleEntity; // rax
  IHandleEntity *v3; // rax
  IHandleEntity *v4; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  __int16 v6; // cx
  CEntityIdentity *m_pEntity; // rax
  __int16 v8; // cx
  bool v9; // r13
  CDOTA_BaseNPC *v10; // r12
  char v11; // al
  IHandleEntity *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_Commander *v14; // rax
  CModifierParams params; // [rsp+0h] [rbp-B0h] BYREF

  if ( this->m_bActivated.m_Value )
  {
    CDOTABaseAbility::UseResources(this, 1, 1, 1, 0);
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 )
    {
      if ( (*(HandleEntity->_vptr_IHandleEntity + 408))(HandleEntity) == 0 )
        return;
      v3 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      if ( v3 != 0 && (v3[261]._vptr_IHandleEntity & 1) != 0 && (*(this->_vptr_IHandleEntity + 219))(this, 0) == 0 )
      {
        v12 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        if ( v12 == 0 || (v13 = v12, (v12[261]._vptr_IHandleEntity & 1) == 0) )
          v13 = 0;
        v14 = DOTACommander();
        CDOTA_Commander::OnAbilityExecuted(v14, v13, this, 0);
      }
    }
    params.bCraniumBasherTested = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.nActivity = -1;
    params.bTooltip = 0;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bHeartRegenApplied = 0;
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    v4 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( v4 != 0 )
    {
      vptr_IHandleEntity = v4[1]._vptr_IHandleEntity;
      if ( vptr_IHandleEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( *(vptr_IHandleEntity + 4) != -1 )
          v6 = vptr_IHandleEntity[2] & 0x7FFF;
        params.hunit.m_Index = (((*(vptr_IHandleEntity + 4) >> 15) - (vptr_IHandleEntity[6] & 1)) << 15) | v6 & 0x7FFF;
      }
    }
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
    if ( (*(this->_vptr_IHandleEntity + 219))(this, 0) == 0 )
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ABILITY_EXECUTED, &params);
    v9 = !this->m_bToggleState.m_Value;
    v10 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    v11 = (*(this->_vptr_IHandleEntity + 223))(this);
    CDOTA_CombatLog::AddAbilityEvent(g_pDOTACombatLog, 6 - (v11 == 0), 0, v10, this, v9, vec3_origin);
    (*(this->_vptr_IHandleEntity + 270))(this);
    if ( this->m_bToggleState.m_Value )
    {
      CDOTABaseAbility::SpeakAbilityConcept(this, 4);
      if ( (*(this->_vptr_IHandleEntity + 219))(this, 0) == 0 )
        CDOTAGamerules::SetLastUsedAbility(g_pGameRules, this);
    }
  }
}


// CDOTABaseAbility::CastAbility  (line 388, @0x000000000242f540, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CreateEvent, DOTAGameRules, Get, GetAbilityName, GetCaster, GetEHandle, GetEntryIndex, GetFloat, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsSpeaking, LookupEntity, Purge, RemoveAll, Set, SetInitiator, SetQuantity, SetTarget, SetUnit, SpeakConcept, State_Get, State_IsBefore, State_IsBeforeGameInProgress, State_Order, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, ToDOTAPlayer, operator=, ~CSingleUserRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::GetHandleEntity, DOTAInventoryManager, CDOTAInventoryManager::GetInventoryForPlayerID, CPlayerInventory::GetInventoryItemsByItemDef, CUtlMemory<CEconItemView*, int>::Purge, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::UseResources, CDOTA_BaseNPC::GetCursorPosition, CDOTA_CombatLog::AddAbilityEvent, CDOTA_PlayerResource::TrackPotentialAbilityAbuse (38 total)
// callers: CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Orange_LightStrikeArray::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Green_Overgrowth::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Purple_PlagueWard::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Orange_DragonSlave::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Yellow_Surge::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Green_LivingArmor::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Yellow_IonShell::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Blue_IceVortex::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Red_Overpower::DoDesiredCast (21 total)
// strings: "dota_player_used_ability", "<NoAbilityName>", "abilityname", "nagtime", "dota_non_player_used_ability"
// globals: INVALID_ITEM_DEF_INDEX, DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTABaseAbility::CastAbility(CDOTABaseAbility *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTAPlayer *HandleEntity; // r13
  int v9; // r15d
  CDOTAInventoryManager *v10; // rax
  CDOTAPlayerInventory *InventoryForPlayerID; // rax
  CDOTA_BaseNPC *v12; // rax
  int v13; // r15d
  char v14; // r14
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v16; // r14
  CDOTA_BaseNPC *v17; // r8
  vec_t z; // eax
  IHandleEntity *v19; // rcx
  CDOTA_BaseNPC *v20; // rdx
  char v21; // al
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  int (**vptr_IBaseInterface)(...); // rax
  __int64 v27; // rax
  unsigned int v28; // eax
  const char *v29; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CEntityIdentity *v32; // rax
  int v33; // edx
  __int16 v34; // cx
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  CEntityIdentity *v38; // rax
  int v39; // edx
  __int16 v40; // cx
  CDOTAConsumableEconItem *BehaviorForEconItem; // rax
  CDOTAConsumableEconItem *v42; // r15
  __int64 (__fastcall ***v43)(_QWORD); // rax
  unsigned __int16 v44; // ax
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v47; // r12
  CDOTA_BaseNPC *v48; // rax
  CEntityIdentity *m_pEntity; // rax
  int v50; // edx
  __int16 v51; // cx
  CEntityIdentity *v52; // rax
  int v53; // edx
  __int16 v54; // cx
  CEntityIdentity *v55; // rdx
  int v56; // eax
  __int16 v57; // cx
  float v58; // xmm2_4
  CDOTA_Speech *v59; // rdi
  __int64 v60; // rdx
  int v61; // eax
  CDOTA_BaseNPC *v62; // r15
  CDOTA_Commander *v63; // rax
  CEntityIdentity *v64; // rax
  int v65; // edx
  __int16 v66; // cx
  IHandleEntity *v67; // rax
  CDOTA_BaseNPC *pTarget; // [rsp+18h] [rbp-238h]
  CDOTA_UnitInventory *result; // [rsp+20h] [rbp-230h]
  CDOTA_BaseNPC *v70; // [rsp+20h] [rbp-230h]
  void (__fastcall *v71)(IGameEvent *, char *, _QWORD); // [rsp+20h] [rbp-230h]
  ActionItemResult_t v72; // [rsp+20h] [rbp-230h]
  CNetworkHandleBase<CBaseEntity,CBaseEntity::NetworkVar_m_hOwnerEntity> *event; // [rsp+28h] [rbp-228h]
  IGameEvent *eventc; // [rsp+28h] [rbp-228h]
  IGameEvent *eventd; // [rsp+28h] [rbp-228h]
  CEconItemView *eventa; // [rsp+28h] [rbp-228h]
  CBaseEntity *eventb; // [rsp+28h] [rbp-228h]
  CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > vecConsumableItems; // [rsp+30h] [rbp-220h] BYREF
  CModifierParams params; // [rsp+50h] [rbp-200h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+E0h] [rbp-170h] BYREF
  unsigned __int64 v81; // [rsp+218h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  params.ability.m_Index = v4;
  if ( v4 + 2 > 1
    && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) != 0
    && (v6 = &v5[v3 & 0x1FF]) != 0
    && v4 == v6->m_EHandle.m_Index )
  {
    m_pInstance = v6->m_pInstance;
    if ( v6->m_pInstance != 0
      && (*(m_pInstance->_vptr_IHandleEntity + 408))(v6->m_pInstance) == 0
      && ((*(this->_vptr_IHandleEntity + 251))(this) & 0x100000) == 0 )
    {
      return;
    }
  }
  else
  {
    m_pInstance = 0;
  }
  HandleEntity = CEntityHandle::GetHandleEntity(&m_pInstance[11].m_pEntity + 1);
  if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
  {
    v9 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
    if ( INVALID_ITEM_DEF_INDEX.m_Data != this->m_nBackedByEconItemIndex.m_Data )
    {
      vecConsumableItems.m_Size = 0;
      vecConsumableItems.m_Memory.m_pMemory = 0;
      vecConsumableItems.m_Memory.m_nAllocationCount = 0;
      vecConsumableItems.m_Memory.m_nGrowSize = 0;
      if ( DOTAInventoryManager() == 0
        || (v10 = DOTAInventoryManager(),
            (InventoryForPlayerID = CDOTAInventoryManager::GetInventoryForPlayerID(v10, v9, 1)) == 0)
        || (CPlayerInventory::GetInventoryItemsByItemDef(
              InventoryForPlayerID,
              this->m_nBackedByEconItemIndex,
              &vecConsumableItems),
            vecConsumableItems.m_Size == 0)
        || (eventa = *vecConsumableItems.m_Memory.m_pMemory,
            BehaviorForEconItem = CDOTAConsumableEconItem::CreateBehaviorForEconItem(*vecConsumableItems.m_Memory.m_pMemory),
            v42 = BehaviorForEconItem,
            BehaviorForEconItem == 0) )
      {
LABEL_14:
        vecConsumableItems.m_Size = 0;
        if ( (vecConsumableItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEconItemView *,int>::Purge(&vecConsumableItems.m_Memory);
          if ( (vecConsumableItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEconItemView *,int>::Purge(&vecConsumableItems.m_Memory);
        }
        return;
      }
      BehaviorForEconItem->m_pInitiator = HandleEntity;
      BehaviorForEconItem->m_iQuantity = CEconItemView::GetItemQuantity(eventa);
      v72 = CDOTAConsumableEconItem::TryUse(v42);
      operator delete(v42);
      if ( v72 != ActionItemResult_t::ACTION_ITEM_SUCCESS )
      {
        CSingleUserRecipientFilter::CSingleUserRecipientFilter(&filter, HandleEntity);
        v43 = (*(eventa->_vptr_IEconItemInterface + 12))(eventa);
        v44 = (**v43)(v43);
        SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_CANT_USE_ACTION_ITEM, v44, v72, &filter);
        if ( v72 == ActionItemResult_t::ACTION_ITEM_COOLDOWN )
        {
          AssignedHero = CDOTAPlayer::GetAssignedHero(HandleEntity);
          m_pSpeech = AssignedHero->m_Speech.m_pSpeech;
          v47 = AssignedHero;
          if ( m_pSpeech == 0 || !CDOTA_Speech::IsSpeaking(m_pSpeech) )
          {
            CDOTA_BaseNPC::GetLastNagTime(v47);
            CDOTA_BaseNPC::StartNagTime(v47);
            CResponseCriteriaSet::CResponseCriteriaSet(&params);
            CResponseCriteriaSet::AppendCriteria(&params, "nagtime", 1.0, v58);
            v59 = v47->m_Speech.m_pSpeech;
            if ( v59 != 0 )
              CDOTA_Speech::SpeakConcept(v59, 23, &params, 0, 0, 0, 0, 0);
            CResponseCriteriaSet::~CResponseCriteriaSet(&params);
          }
        }
        filter._vptr_IRecipientFilter = &off_3FCB0D0;
        CRecipientFilter::~CRecipientFilter(&filter);
        goto LABEL_14;
      }
      CUtlVectorBase<CEconItemView *,CUtlMemory<CEconItemView *,int>>::~CUtlVectorBase(&vecConsumableItems);
    }
  }
  else
  {
    HandleEntity = 0;
    (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
  }
  if ( (*(this->_vptr_IHandleEntity + 245))(this) == 0 )
    return;
  event = &this->m_hOwnerEntity;
  if ( (*(this->_vptr_IHandleEntity + 223))(this) == 0 || CEntityHandle::GetHandleEntity(&event->m_Value) == 0 )
    goto LABEL_31;
  if ( (*(this->_vptr_IHandleEntity + 223))(this) == 0 )
  {
    v48 = CEntityHandle::GetHandleEntity(&event->m_Value);
    CDOTA_BaseNPC::GetInventory(v48);
    goto LABEL_31;
  }
  v12 = CEntityHandle::GetHandleEntity(&event->m_Value);
  result = CDOTA_BaseNPC::GetInventory(v12);
  if ( result == 0 || *(this + 945) != 0 )
    goto LABEL_31;
  v13 = 0;
  v14 = 0;
  do
  {
    if ( this == CDOTA_UnitInventory::GetItemInSlot(result, v13) )
      v14 = 1;
    ++v13;
  }
  while ( v13 != 6 );
  if ( this == CDOTA_UnitInventory::GetItemInSlot(result, 18) || v14 != 0 )
  {
LABEL_31:
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v16 = CursorTarget;
    if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
      v17 = CursorTarget;
    else
      v17 = 0;
    CDOTABaseAbility::UseResources(this, 1, 1, 0, v17);
    if ( (*(this->_vptr_IHandleEntity + 219))(this, v16) == 0 )
    {
      CModifierParams::CModifierParams(&params);
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v50 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v51 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v51 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.hunit.m_Index) = v51 | params.hunit.m_Index & 0x8000;
        params.hunit.m_Index = (v50 << 15) | params.hunit.m_Index & 0x7FFF;
      }
      else
      {
        params.hunit.m_Index = -1;
      }
      v52 = this->m_pEntity;
      if ( v52 != 0 )
      {
        v53 = (v52->m_EHandle.m_Index >> 15) - (v52->m_flags & 1);
        v54 = 0x7FFF;
        if ( v52->m_EHandle.m_Index != -1 )
          v54 = v52->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.ability.m_Index) = v54 | params.ability.m_Index & 0x8000;
        params.ability.m_Index = (v53 << 15) | params.ability.m_Index & 0x7FFF;
      }
      else
      {
        params.ability.m_Index = -1;
      }
      if ( v16 != 0 && (v55 = v16->m_pEntity) != 0 )
      {
        v56 = (v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1);
        v57 = 0x7FFF;
        if ( v55->m_EHandle.m_Index != -1 )
          v57 = v55->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.htarget.m_Index) = v57 | params.htarget.m_Index & 0x8000;
        params.htarget.m_Index = (v56 << 15) | params.htarget.m_Index & 0x7FFF;
      }
      else
      {
        params.htarget.m_Index = -1;
      }
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ABILITY_EXECUTED, &params);
    }
    z = vec3_origin.z;
    *&vecConsumableItems.m_Size = *&vec3_origin.x;
    *&vecConsumableItems.m_Memory.m_pMemory = z;
    if ( ((*(this->_vptr_IHandleEntity + 251))(this) & 0x10) != 0
      || ((*(this->_vptr_IHandleEntity + 251))(this) & 0x20) != 0 )
    {
      *&params.ability.m_Index = CDOTA_BaseNPC::GetCursorPosition(m_pInstance);
      *&vecConsumableItems.m_Size = *&params.ability.m_Index;
      v19 = CEntityHandle::GetHandleEntity(&event->m_Value);
      if ( v16 == 0 )
      {
        v20 = 0;
        goto LABEL_39;
      }
    }
    else
    {
      if ( v16 == 0 )
      {
        *&params.ability.m_Index = CDOTA_BaseNPC::GetCursorPosition(m_pInstance);
        *&vecConsumableItems.m_Size = *&params.ability.m_Index;
        v67 = CEntityHandle::GetHandleEntity(&event->m_Value);
        v20 = 0;
        v19 = v67;
        goto LABEL_39;
      }
      v19 = CEntityHandle::GetHandleEntity(&event->m_Value);
    }
    v20 = 0;
    if ( v16->m_bIsDOTANPC )
      v20 = v16;
LABEL_39:
    pTarget = v20;
    v70 = v19;
    v21 = (*(this->_vptr_IHandleEntity + 223))(this);
    CDOTA_CombatLog::AddAbilityEvent(
      g_pDOTACombatLog,
      6 - (v21 == 0),
      pTarget,
      v70,
      this,
      0,
      *&vecConsumableItems.m_Size);
    v22 = CEntityHandle::GetHandleEntity(&event->m_Value);
    if ( v16 != 0 && v16->m_bIsDOTANPC )
      v23 = v16;
    else
      v23 = 0;
    CDOTA_PlayerResource::TrackPotentialAbilityAbuse(g_pDOTAPlayerResource, v23, v22, this);
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0
      && ((*(this->_vptr_IHandleEntity + 251))(this) & 0x100000) == 0 )
    {
      return;
    }
    CDOTABaseAbility::UseResources(this, 0, 0, 1, 0);
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0
      && ((*(this->_vptr_IHandleEntity + 251))(this) & 0x100000) == 0 )
    {
      return;
    }
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && (*(this->_vptr_IHandleEntity + 225))(this) == 0.0
      && (*(this->_vptr_IHandleEntity + 219))(this, v16) == 0 )
    {
      v62 = 0;
      eventb = CDOTABaseAbility::GetCursorTarget(this);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        v62 = m_pInstance;
      v63 = DOTACommander();
      CDOTA_Commander::OnAbilityExecuted(v63, v62, this, eventb);
    }
    if ( (*(this->_vptr_IHandleEntity + 219))(this, v16) != 0 )
      goto LABEL_53;
    vptr_IBaseInterface = gameeventmanager->_vptr_IBaseInterface;
    if ( HandleEntity != 0 )
    {
      v27 = (vptr_IBaseInterface[7])(gameeventmanager, "dota_player_used_ability", 0, 0);
      v25 = v27;
      if ( v27 != 0 )
      {
        eventc = v27;
        v71 = *(*v27 + 112LL);
        v28 = (*(HandleEntity->_vptr_IHandleEntity + 393))(HandleEntity);
        v71(eventc, "PlayerID", v28);
        v25 = eventc;
        goto LABEL_49;
      }
    }
    else
    {
      v25 = (vptr_IBaseInterface[7])(gameeventmanager, "dota_non_player_used_ability", 0, 0);
      if ( v25 != 0 )
      {
LABEL_49:
        v29 = "<NoAbilityName>";
        m_pAbilityData = this->m_pAbilityData;
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v29 = m_pszAbilityName;
        }
        eventd = v25;
        (*(*v25 + 136LL))(v25, "abilityname", v29);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, eventd, 1);
      }
    }
LABEL_53:
    if ( (*(this->_vptr_IHandleEntity + 219))(this, v16, v24, v25) == 0
      && ((*(this->_vptr_IHandleEntity + 251))(this) & 0x1000000) == 0
      && v16 != 0
      && v16->m_bIsDOTANPC
      && v16->m_iTeamNum.m_Value != HIBYTE(m_pInstance[7].m_CScriptComponent)
      && dota_unit_alert_range.m_pParent->m_Value.m_fValue >= CDOTA_BaseNPC::GetRangeToUnit(m_pInstance, v16) )
    {
      params.ability.m_Index = -1;
      v64 = this->m_pEntity;
      if ( v64 != 0 )
      {
        v65 = (v64->m_EHandle.m_Index >> 15) - (v64->m_flags & 1);
        v66 = 0x7FFF;
        if ( v64->m_EHandle.m_Index != -1 )
          v66 = v64->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.ability.m_Index) = v66 | params.ability.m_Index & 0x8000;
        params.ability.m_Index = (v65 << 15) | params.ability.m_Index & 0x7FFF;
      }
      CDOTA_BaseNPC::AlertNearbyUnits(v16, m_pInstance, &params);
      if ( ((*(this->_vptr_IHandleEntity + 251))(this) & 8) != 0 )
        (*(m_pInstance->_vptr_IHandleEntity + 451))(m_pInstance, v16->m_iTeamNum.m_Value);
    }
    if ( (*(this->_vptr_IHandleEntity + 300))(this) == 1 )
    {
      v60 = *&g_pGameRules[6].m_szQuestName[28];
      v61 = 0;
      if ( v60 <= 0xA )
        v61 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v60];
      if ( dword_491AD14 <= v61 )
        CDOTABaseAbility::SpeakAbilityConcept(this, 4);
    }
    CModifierParams::CModifierParams(&params);
    v32 = m_pInstance->m_pEntity;
    if ( v32 != 0 )
    {
      v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
      v34 = 0x7FFF;
      if ( v32->m_EHandle.m_Index != -1 )
        v34 = v32->m_EHandle.m_Index & 0x7FFF;
      LOWORD(params.hunit.m_Index) = v34 | params.hunit.m_Index & 0x8000;
      params.hunit.m_Index = (v33 << 15) | params.hunit.m_Index & 0x7FFF;
    }
    else
    {
      params.hunit.m_Index = -1;
    }
    if ( v16 != 0 && (v35 = v16->m_pEntity) != 0 )
    {
      v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
      v37 = 0x7FFF;
      if ( v35->m_EHandle.m_Index != -1 )
        v37 = v35->m_EHandle.m_Index & 0x7FFF;
      LOWORD(params.htarget.m_Index) = v37 | params.htarget.m_Index & 0x8000;
      params.htarget.m_Index = (v36 << 15) | params.htarget.m_Index & 0x7FFF;
    }
    else
    {
      params.htarget.m_Index = -1;
    }
    v38 = this->m_pEntity;
    if ( v38 != 0 )
    {
      v39 = (v38->m_EHandle.m_Index >> 15) - (v38->m_flags & 1);
      v40 = 0x7FFF;
      if ( v38->m_EHandle.m_Index != -1 )
        v40 = v38->m_EHandle.m_Index & 0x7FFF;
      LOWORD(params.ability.m_Index) = v40 | params.ability.m_Index & 0x8000;
      params.ability.m_Index = (v39 << 15) | params.ability.m_Index & 0x7FFF;
    }
    else
    {
      params.ability.m_Index = -1;
    }
    params.nCost = (*(this->_vptr_IHandleEntity + 274))(this, 0xFFFFFFFFLL);
    (*(this->_vptr_IHandleEntity + 266))(this);
    if ( (*(this->_vptr_IHandleEntity + 219))(this, v16) == 0 )
    {
      CDOTAGamerules::SetLastUsedAbility(g_pGameRules, this);
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ABILITY_FULLY_CAST, &params);
    }
  }
}


// CDOTABaseAbility::GetCastRange  (line 593, @0x000000000242e2f0, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel, GetLevel, IsTrained
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_Lua::Script_GetCastRange, CDOTA_Ability_DataDriven::GetCastRange, CDOTA_Item_Lua::Script_GetCastRange, CDOTA_Item_DataDriven::GetCastRange, CDOTA_Ability_DrowRanger_WaveOfSilence::GetCastRange, CDOTA_Ability_Earthshaker_EnchantTotem::GetCastRange, CDOTA_Ability_Lich_ChainFrost::GetCastRange, CDOTA_Ability_Lina_LagunaBlade::GetCastRange, CDOTA_Ability_Morphling_Waveform::GetCastRange, CDOTA_Ability_SandKing_BurrowStrike::GetCastRange, CDOTA_Ability_StormSpirit_ElectricVortex::GetCastRange, CDOTA_Ability_Tidehunter_Gush::GetCastRange (39 total)
int __fastcall CDOTABaseAbility::GetCastRange(
        CDOTABaseAbility *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int m_Value; // edx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v6; // edx

  m_Value = this->m_iLevel.m_Value;
  if ( m_Value <= 0 )
    return 0;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    m_Value = this->m_iLevel.m_Value;
  }
  v6 = m_Value - 1;
  if ( v6 > m_pAbilityData->m_nCastRanges - 1 )
    v6 = m_pAbilityData->m_nCastRanges - 1;
  if ( v6 < 0 )
    return 0;
  else
    return m_pAbilityData->m_pCastRanges[v6];
}


// CDOTABaseAbility::GetCastRangeBonus  (line 605, @0x0000000002422200, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsListeningToEvent, LookupEntity, Set, operator=
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
int __fastcall CDOTABaseAbility::GetCastRangeBonus(CDOTABaseAbility *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  uint32 m_Index; // ecx
  uint32 v5; // esi
  unsigned __int16 v6; // dx
  int v7; // r9d
  CEntityInstance *m_pInstance; // rdi
  int v9; // eax
  CEntityIdentity *v10; // r8
  CEntityIdentity *v11; // r8
  __int64 v12; // rax
  float Modifier_Constant_Highest_Internal; // xmm0_4
  CEntitySystem *v14; // r8
  float v15; // xmm2_4
  unsigned __int16 v16; // dx
  int v17; // ecx
  CEntityInstance *v18; // rdi
  int v19; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  __int64 v22; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float v25; // [rsp+Ch] [rbp-B4h]
  CModifierParams params; // [rsp+20h] [rbp-A0h] BYREF

  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v3 = 0x7FFF;
      else
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  v5 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  m_pInstance = 0;
  v9 = (v5 << 15) | v6 & 0x7FFF;
  if ( (v9 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v7 & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  v12 = BYTE3(m_pInstance[67].m_hPrivateScope.m_hScope);
  if ( v12 == 0xFF || *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v12) <= 0 )
  {
    v14 = g_pEntitySystem;
    v15 = 0.0;
    if ( m_Index == -1 )
      goto LABEL_16;
LABEL_18:
    v16 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v17 = v16;
    goto LABEL_19;
  }
  Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                         &m_pInstance[64].m_worldGroupId,
                                         modifierfunction::MODIFIER_PROPERTY_CAST_RANGE_BONUS,
                                         &params);
  v14 = g_pEntitySystem;
  v15 = Modifier_Constant_Highest_Internal;
  v5 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( this->m_hOwnerEntity.m_Value.m_Index != -1 )
    goto LABEL_18;
LABEL_16:
  v16 = 0x7FFF;
  v17 = 0x7FFF;
LABEL_19:
  v18 = 0;
  v19 = (v5 << 15) | v16 & 0x7FFF;
  if ( (v19 + 2) > 1 )
  {
    v20 = v14->m_EntityList.m_pIdentityChunks[v17 >> 9];
    if ( v20 != 0 )
    {
      v21 = &v20[v17 & 0x1FF];
      if ( v21 != 0 && v19 == v21->m_EHandle.m_Index )
        v18 = v21->m_pInstance;
    }
  }
  v22 = BYTE4(v18[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  if ( v22 != 0xFF && *(*&v18[65].m_worldGroupId.m_nHashCode + 24 * v22) > 0 )
  {
    v25 = v15;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v18[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_CAST_RANGE_BONUS_STACKING,
                                            &params);
    v15 = v25;
  }
  return (v15 + Modifier_Constant_Additive_Internal);
}


// CDOTABaseAbility::GetCastPoint  (line 613, @0x000000000242e370, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel, GetLevel, IsTrained, operator>=<float>
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_Earthshaker_EnchantTotem::GetCastPoint, CDOTA_Ability_Nyx_Assassin_Burrow::GetCastPoint, CDOTA_Ability_Oracle_PurifyingFlames::GetCastPoint
float __fastcall CDOTABaseAbility::GetCastPoint(CDOTABaseAbility *const this)
{
  float result; // xmm0_4
  int m_Value; // edx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v5; // edx

  result = this->m_flOverrideCastPoint.m_Value;
  if ( result < 0.0 )
  {
    m_Value = this->m_iLevel.m_Value;
    if ( m_Value <= 0 )
      return 0.0;
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
      m_Value = this->m_iLevel.m_Value;
    }
    v5 = m_Value - 1;
    if ( v5 > m_pAbilityData->m_nCastPoints - 1 )
      v5 = m_pAbilityData->m_nCastPoints - 1;
    if ( v5 < 0 )
      return 0.0;
    else
      return m_pAbilityData->m_pCastPoints[v5];
  }
  return result;
}


// CDOTABaseAbility::GetEffectiveCastPoint  (line 628, @0x0000000002421eb0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier_Constant_Lowest, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsListeningToEvent, LookupEntity
// calls: CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal
float __fastcall CDOTABaseAbility::GetEffectiveCastPoint(CDOTABaseAbility *const this)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  __int64 v4; // rsi
  CEntityInstance *m_pInstance; // rdi
  int v6; // eax
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  __int64 v9; // rsi
  __int64 m_pAsString_high; // rax
  float v11; // xmm1_4

  v2 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  m_pInstance = 0;
  v6 = (v2 << 15) | v3 & 0x7FFF;
  v7 = g_pEntitySystem;
  v8 = (v6 + 2);
  if ( v8 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v8 != 0 )
    {
      v9 = v4 & 0x1FF;
      v7 = 8 * v9;
      v4 = 120 * v9;
      v8 = (v8 + v4);
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  m_pAsString_high = HIBYTE(m_pInstance[67].m_iszPrivateVScripts.u.m_pAsString);
  v11 = 1.0;
  if ( m_pAsString_high != 0xFF )
  {
    v8 = *&m_pInstance[65].m_worldGroupId.m_nHashCode;
    v7 = *(&v8->m_pInstance + 6 * m_pAsString_high);
    if ( v7 > 0 )
      v11 = (100.0
           - CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
               &m_pInstance[64].m_worldGroupId,
               modifierfunction::MODIFIER_PROPERTY_CASTTIME_PERCENTAGE,
               &CModifierParams::s_Default))
          / 100.0;
  }
  return (*(this->_vptr_IHandleEntity + 231))(this, v4, v8, v7) * v11;
}


// CDOTABaseAbility::SpeakAbilityConcept  (line 635, @0x0000000002429780, libserver.so)  // inlines: Get, GetCaster, GetOwnerEntity, SpeakConcept
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CDOTABaseAbility::GetCastExecuteCriteria, CEntityHandle::GetHandleEntity, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTABaseAbility::ToggleAbility, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::CastAbility, CDOTABehaviorAbilityPhase::OnStart, CDOTA_Ability_Tiny_Toss::OnSpellStart
void __fastcall CDOTABaseAbility::SpeakAbilityConcept(CDOTABaseAbility *const this, int iConcept)
{
  int v4; // r14d
  int (**vptr_IHandleEntity)(...); // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 298))(this) != 0 )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CDOTABaseAbility::GetCastExecuteCriteria(this, &criteria);
    v4 = (*(this->_vptr_IHandleEntity + 299))(this);
    vptr_IHandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value)[420]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity != 0 )
      CDOTA_Speech::SpeakConcept(vptr_IHandleEntity, iConcept, &criteria, v4, 0, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// CDOTABaseAbility::GetCastExecuteCriteria  (line 648, @0x0000000002429250, libserver.so)  // inlines: CUtlSymbol, Get, GetAbilityName, GetCaster, GetClassNameAsCStr, GetClassname, GetOwnerEntity, GetUnitName, IsHero, String, ToCStr, ToDOTABaseNPC
// calls: CResponseCriteriaSet::AppendCriteria, CEntityHandle::GetHandleEntity, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCursorTarget, __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTABaseAbility::SpeakAbilityConcept, CDOTA_Ability_Rubick_SpellSteal::OnSpellStart
// strings: "<NoAbilityName>", "isitem", "primaryattribute", "targetunitname", "targetclassname", "hasscepter" (8 total)
// globals: `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityName, `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityLevel, `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHasScepter, `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHero, `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetClassName, `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetUnitName, `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symPrimaryAttribute, `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symIsItem (16 total)
void __fastcall CDOTABaseAbility::GetCastExecuteCriteria(
        CDOTABaseAbility *const this,
        CResponseCriteriaSet *const criteria)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v5; // rdx
  const char *m_pszAbilityName; // rax
  float m_Value; // xmm0_4
  CDOTA_BaseNPC *HandleEntity; // rax
  bool HasScepter; // al
  char v10; // al
  float v11; // xmm0_4
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v13; // r14
  float v14; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  const char *delta; // rdx
  float vptr_IHandleEntity_high; // xmm0_4
  CResponseCriteriaSet::CritSymbol_t v19; // [rsp+0h] [rbp-30h] BYREF

  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityName == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityName) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("abilityname");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityName);
  }
  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityLevel == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityLevel) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("abilitylevel");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityLevel);
  }
  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHasScepter == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHasScepter) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("hasscepter");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHasScepter);
  }
  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHero == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHero) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("hero");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHero);
  }
  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetClassName == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetClassName) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("targetclassname");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetClassName);
  }
  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetUnitName == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetUnitName) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("targetunitname");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetUnitName);
  }
  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symPrimaryAttribute == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symPrimaryAttribute) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("primaryattribute");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symPrimaryAttribute);
  }
  if ( `guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symIsItem == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symIsItem) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("isitem");
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symIsItem);
  }
  m_pAbilityData = this->m_pAbilityData;
  v5 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v5 = m_pszAbilityName;
  }
  v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityName.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v19, v5, 1.0);
  m_Value = this->m_iLevel.m_Value;
  v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symAbilityLevel.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v19, m_Value, 1.0);
  HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
  HasScepter = CDOTA_BaseNPC::HasScepter(HandleEntity);
  v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHasScepter.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v19, HasScepter, 1.0);
  v10 = (*(this->_vptr_IHandleEntity + 223))(this);
  v11 = 0.0;
  if ( v10 != 0 )
    v11 = 1.0;
  v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symIsItem.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v19, v11, 1.0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v13 = CursorTarget;
    if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    {
      v14 = (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 1);
      v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symHero.m_Id;
      CResponseCriteriaSet::AppendCriteria(criteria, &v19, v14, 1.0);
      m_pEntity = v13->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetClassName.m_Id;
      CResponseCriteriaSet::AppendCriteria(criteria, &v19, m_pAsString, 1.0);
      delta = "";
      if ( v13[4].m_pfnUse.__delta != 0 )
        delta = v13[4].m_pfnUse.__delta;
      v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symTargetUnitName.m_Id;
      CResponseCriteriaSet::AppendCriteria(criteria, &v19, delta, 1.0);
      vptr_IHandleEntity_high = -1.0;
      if ( (v13[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
        vptr_IHandleEntity_high = SHIDWORD(v13[6]._vptr_IHandleEntity);
      v19.m_Id = CDOTABaseAbility::GetCastExecuteCriteria(CResponseCriteriaSet &)::symPrimaryAttribute.m_Id;
      CResponseCriteriaSet::AppendCriteria(criteria, &v19, vptr_IHandleEntity_high, 1.0);
    }
  }
  (*(this->_vptr_IHandleEntity + 159))(this, criteria);
}


// CDOTABaseAbility::EndChannel  (line 696, @0x00000000024241e0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CreateEvent, Get, GetAbilityName, GetCaster, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetUnit, operator=, operator=<float>
// calls: CEntityHandle::GetHandleEntity, FireModifierEvent, CDOTA_CombatLog::AddInterruptChannelEvent, DOTACommander, CDOTA_Commander::OnAbilityExecuted
// callers: CDOTABaseAbility::EndChannel, CDOTABaseAbility::OwnerRespawned, CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::OnChannelThink
// strings: "dota_ability_channel_finished", "<NoAbilityName>", "abilityname"
void __fastcall CDOTABaseAbility::EndChannel(CDOTABaseAbility *const this, bool bInterrupted)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntitySystem *v7; // rcx
  CEntityIdentity *v8; // rdx
  __int64 v9; // rsi
  bool v10; // zf
  IHandleEntity *HandleEntity; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  __int16 v13; // cx
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // r14
  DOTAAbilityData_t *m_pAbilityData; // rcx
  const char *v19; // rdx
  const char *m_pszAbilityName; // rcx
  IHandleEntity *v21; // rax
  CEntityInstance *m_pInstance; // r13
  CDOTA_Commander *v23; // rax
  CModifierParams params; // [rsp+0h] [rbp-C0h] BYREF

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  params.ability.m_Index = v6;
  v7 = g_pEntitySystem;
  v8 = (v6 + 2);
  if ( v8 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 != 0 )
    {
      v9 = v5 & 0x1FF;
      v7 = (8 * v9);
      v8 += v9;
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v23 = DOTACommander();
          CDOTA_Commander::OnAbilityExecuted(v23, m_pInstance, this, 0);
        }
      }
    }
  }
  (*(this->_vptr_IHandleEntity + 267))(this, bInterrupted, v8, v7);
  if ( (*(this->_vptr_IHandleEntity + 219))(this, 0) == 0 )
  {
    params.bCraniumBasherTested = 0;
    params.bHeartRegenApplied = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.nActivity = -1;
    params.bTooltip = 0;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 )
    {
      vptr_IHandleEntity = HandleEntity[1]._vptr_IHandleEntity;
      if ( vptr_IHandleEntity != 0 )
      {
        v13 = 0x7FFF;
        if ( *(vptr_IHandleEntity + 4) != -1 )
          v13 = vptr_IHandleEntity[2] & 0x7FFF;
        params.hunit.m_Index = (((*(vptr_IHandleEntity + 4) >> 15) - (vptr_IHandleEntity[6] & 1)) << 15) | v13 & 0x7FFF;
      }
    }
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ABILITY_END_CHANNEL, &params);
    v16 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_ability_channel_finished", 0, 0);
    v17 = v16;
    if ( v16 != 0 )
    {
      (*(*v16 + 104LL))(v16, "interrupted", bInterrupted);
      m_pAbilityData = this->m_pAbilityData;
      v19 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v19 = m_pszAbilityName;
      }
      (*(*v17 + 136LL))(v17, "abilityname", v19);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v17, 1);
    }
    if ( bInterrupted )
    {
      v21 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      if ( v21 != 0 && (v21[261]._vptr_IHandleEntity & 1) != 0 )
        CDOTA_CombatLog::AddInterruptChannelEvent(&g_DOTACombatLog, v21);
    }
  }
  v10 = this->m_flChannelStartTime.m_Value == 0.0;
  this->m_bChanneling = 0;
  if ( !v10 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 840, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flChannelStartTime.m_Value = 0.0;
  }
}


// CDOTABaseAbility::EndChannel  (line 696, @0x00000000024245b0, libserver.so)
// calls: CDOTABaseAbility::EndChannel
// callers: CDOTA_Item_Tombstone::OnChannelThink, CDOTA_UnitInventory::SellItem, CDOTABehaviorAbilityChannel::OnEnd, CDOTA_BaseNPC_Hero::Think, CDOTA_Ability_NianCharge::OnHorizontalMotionInterrupted, CDOTA_Modifier_NianCharge::OnStateChanged, CDOTA_Ability_NianCharge::OnProjectileHit_ExtraData, CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged, CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnRefresh, CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnIntervalThink
void __fastcall CDOTABaseAbility::EndChannel(CDOTABaseAbility *const this, bool bInterrupted)
{
  if ( this->m_bChanneling )
    CDOTABaseAbility::EndChannel(this, bInterrupted);
}


// CDOTABaseAbility::SetChanneling  (line 736, @0x00000000024206a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, NetworkStateChanged, Set, operator=<float>
// callers: CDOTABehaviorAbilityChannel::OnStart, CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell, CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell
void __fastcall CDOTABaseAbility::SetChanneling(CDOTABaseAbility *const this, bool bChanneling)
{
  float v3; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( this->m_bChanneling != bChanneling )
  {
    this->m_bChanneling = bChanneling;
    if ( bChanneling )
    {
      v3 = 0.0;
      if ( g_pGameRules != 0 )
        v3 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v3 != this->m_flChannelStartTime.m_Value )
      {
        v4 = v3;
        (*(this->_vptr_IHandleEntity + 22))(this, 840, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flChannelStartTime.m_Value = v4;
      }
    }
    else if ( this->m_flChannelStartTime.m_Value != 0.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 840, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
      this->m_flChannelStartTime.m_Value = 0.0;
    }
  }
}


// CDOTABaseAbility::PayManaCost  (line 752, @0x0000000002429840, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::SpendMana
// callers: CDOTABaseAbility::UseResources, CDOTA_Ability_Holdout_Multishot::DoMultishot
void __fastcall CDOTABaseAbility::PayManaCost(CDOTABaseAbility *const this, CDOTA_BaseNPC *pTarget)
{
  float v4; // xmm0_4
  unsigned __int16 v5; // di
  int v6; // esi
  uint32 v7; // ecx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  v4 = (*(this->_vptr_IHandleEntity + 274))(this, 0xFFFFFFFFLL);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
  m_pInstance = 0;
  if ( v7 + 2 > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v6 & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  CDOTA_BaseNPC::SpendMana(m_pInstance, v4, this, pTarget);
}


// CDOTABaseAbility::Script_PayManaCost  (line 758, @0x0000000002421cf0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::SpendMana
void __fastcall CDOTABaseAbility::Script_PayManaCost(CDOTABaseAbility *const this)
{
  float v2; // xmm0_4
  unsigned __int16 v3; // cx
  int v4; // r8d
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v6; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  v2 = (*(this->_vptr_IHandleEntity + 274))(this, 0xFFFFFFFFLL);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  m_pInstance = 0;
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v4 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  CDOTA_BaseNPC::SpendMana(m_pInstance, v2, this, 0);
}


// CDOTABaseAbility::RefundManaCost  (line 764, @0x0000000002421dd0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::SetMana
void __fastcall CDOTABaseAbility::RefundManaCost(CDOTABaseAbility *const this)
{
  float v2; // xmm1_4
  unsigned __int16 v3; // cx
  int v4; // r8d
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v6; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  (*(this->_vptr_IHandleEntity + 274))(this, 0xFFFFFFFFLL);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  m_pInstance = 0;
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v4 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  CDOTA_BaseNPC::SetMana(m_pInstance, v2);
}


// CDOTABaseAbility::PayGoldCost  (line 770, @0x0000000002429af0, libserver.so)  // inlines: Get, GetCaster, GetOwnerEntity
// calls: CDOTABaseAbility::GetControllingPlayer, CDOTA_PlayerResource::SpendGold, CEntityHandle::GetHandleEntity
// callers: CDOTABaseAbility::UseResources
void __fastcall CDOTABaseAbility::PayGoldCost(CDOTABaseAbility *const this)
{
  int v2; // r12d
  CDOTAPlayer *ControllingPlayer; // rax
  int vptr_IHandleEntity; // eax

  v2 = (*(this->_vptr_IHandleEntity + 276))(this, 0xFFFFFFFFLL);
  if ( v2 > 0 )
  {
    ControllingPlayer = CDOTABaseAbility::GetControllingPlayer(this);
    if ( ControllingPlayer != 0 )
      vptr_IHandleEntity = (*(ControllingPlayer->_vptr_IHandleEntity + 393))(ControllingPlayer);
    else
      vptr_IHandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value)[276]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity != -1 )
      CDOTA_PlayerResource::SpendGold(g_pDOTAPlayerResource, vptr_IHandleEntity, v2, 7);
  }
}


// CDOTABaseAbility::PayGoldCostForUpgrade  (line 784, @0x0000000002429f80, libserver.so)
// calls: CDOTABaseAbility::GetControllingPlayer, CDOTA_PlayerResource::SpendGold
// callers: DOTA_ExecuteOrders
void __fastcall CDOTABaseAbility::PayGoldCostForUpgrade(CDOTABaseAbility *const this)
{
  int v2; // r12d
  CDOTAPlayer *ControllingPlayer; // rax
  int v4; // eax

  v2 = (*(this->_vptr_IHandleEntity + 277))(this, 4294967294LL);
  if ( v2 > 0 )
  {
    ControllingPlayer = CDOTABaseAbility::GetControllingPlayer(this);
    if ( ControllingPlayer != 0 )
    {
      v4 = (*(ControllingPlayer->_vptr_IHandleEntity + 393))(ControllingPlayer);
      if ( v4 != -1 )
        CDOTA_PlayerResource::SpendGold(g_pDOTAPlayerResource, v4, v2, 7);
    }
  }
}


// CDOTABaseAbility::CreateVisibilityNode  (line 798, @0x000000000241f9a0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTAFogOfWarSystem::AddTempViewer
void __fastcall CDOTABaseAbility::CreateVisibilityNode(
        CDOTABaseAbility *const this,
        const Vector *const vLocation,
        float a3,
        float fRadius,
        float fDuration)
{
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_VISIBILITY_NODE,
    this->m_iTeamNum.m_Value,
    vLocation,
    a3,
    fRadius,
    1);
}


// CDOTABaseAbility::StartCooldown  (line 803, @0x0000000002424920, libserver.so)  // inlines: Get, GetCaster, GetModifier_Constant_Highest, GetOwnerEntity, IsListeningToEvent, NetworkStateChanged, Set, SetInIndefiniteCooldown, operator=<bool>, operator=<float>
// calls: CEntityHandle::GetHandleEntity, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::StartCooldown, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTA_Item::StartCooldown
void __fastcall CDOTABaseAbility::StartCooldown(CDOTABaseAbility *const this, __m128i a2, float flCooldown)
{
  float v3; // r14d
  CDOTA_BaseNPC *v5; // rax
  CDOTA_UnitInventory *Inventory; // rax
  float v7; // xmm1_4
  IHandleEntity *HandleEntity; // rax
  __int64 v9; // rdx
  float Modifier_Constant_Highest_Internal; // xmm0_4
  __m128i v11; // xmm5
  __m128i v12; // xmm0

  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  if ( *a2.m128i_i32 == -1.0 )
  {
    *v12.m128i_i64 = (*(this->_vptr_IHandleEntity + 244))(this, 0xFFFFFFFFLL, *a2.m128i_i64, flCooldown);
    v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  }
  if ( (*(this->_vptr_IHandleEntity + 223))(this) == 0 )
  {
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    v9 = BYTE1(HandleEntity[399]._vptr_IHandleEntity);
    if ( v9 != 0xFF && SLODWORD(HandleEntity[394]._vptr_IHandleEntity[3 * v9]) > 0 )
    {
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             &HandleEntity[388],
                                             modifierfunction::MODIFIER_PROPERTY_COOLDOWN_REDUCTION_CONSTANT,
                                             &CModifierParams::s_Default);
      if ( Modifier_Constant_Highest_Internal > 0.0 )
      {
        v11 = _mm_cvtsi32_si128(LODWORD(v3));
        *v11.m128i_i32 = *v11.m128i_i32 - Modifier_Constant_Highest_Internal;
        v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      }
    }
  }
  if ( v3 > 0.0099999998 )
  {
    v5 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    Inventory = CDOTA_BaseNPC::GetInventory(v5);
    CDOTA_UnitInventory::StartCooldown(Inventory, this, v7);
    if ( v3 != this->m_fCooldown.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fCooldown.m_Value = v3;
    }
  }
  if ( this->m_bInIndefiniteCooldown.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 844, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInIndefiniteCooldown.m_Value = 0;
  }
  if ( v3 != this->m_flCooldownLength.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCooldownLength.m_Value = v3;
  }
}


// CDOTABaseAbility::EndCooldown  (line 830, @0x0000000002424ac0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator=<float>
// calls: CDOTA_BaseNPC::GetInventory, CEntityHandle::GetHandleEntity, CDOTA_UnitInventory::StartCooldown
// callers: CDOTAPlayer::CheatHeroRefresh, HeroRefresh, CDOTA_Ability_Holdout_CullingBlade::DoChop, CDOTA_Ability_Axe_CullingBlade::OnSpellStart, CDOTA_Modifier_Holdout_GodsStrength::OnDeath, CDOTA_Ability_Tinker_Rearm::OnChannelFinish, CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::OnDestroy, nian_cast_ability, CDOTA_Ability_Invoker_Invoke::OnSpellStart, CDOTA_Modifier_Phoenix_Sun::OnDestroy, CDOTA_Modifier_Treant_NaturesGuise::OnIntervalThink, CDOTA_Item_ShadowAmulet::OnSpellStart (15 total)
void __fastcall CDOTABaseAbility::EndCooldown(CDOTABaseAbility *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *HandleEntity; // rax
  CDOTA_UnitInventory *Inventory; // rax
  float v9; // xmm1_4

  if ( this->m_fCooldown.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fCooldown.m_Value = 0.0;
  }
  if ( this->m_flCooldownLength.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCooldownLength.m_Value = 0.0;
  }
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0
        && v4 == v6->m_EHandle.m_Index
        && v6->m_pInstance != 0
        && CDOTA_BaseNPC::GetInventory(v6->m_pInstance) != 0 )
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        Inventory = CDOTA_BaseNPC::GetInventory(HandleEntity);
        CDOTA_UnitInventory::StartCooldown(Inventory, this, v9);
      }
    }
  }
}


// CDOTABaseAbility::SetLevel  (line 840, @0x0000000002421b50, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTABaseAbility::SetLevel(CDOTABaseAbility *const this, int iLevel)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( this->m_iLevel.m_Value != iLevel )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iLevel.m_Value = iLevel;
  }
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          (*(m_pInstance->_vptr_IHandleEntity + 490))(m_pInstance);
      }
    }
  }
}


// CDOTABaseAbility::Script_SetLevel  (line 851, @0x000000000242a080, libserver.so)
// calls: CDOTABaseAbility::InitBaseValues
void __fastcall CDOTABaseAbility::Script_SetLevel(CDOTABaseAbility *const this, int iLevel)
{
  (*(this->_vptr_IHandleEntity + 212))(this, iLevel);
  (*(this->_vptr_IHandleEntity + 268))(this);
  CDOTABaseAbility::InitBaseValues(this);
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTABaseAbility::UpgradeAbility  (line 859, @0x000000000242a0c0, libserver.so)  // inlines: Get, GetCaster, GetOwnerEntity
// calls: CDOTABaseAbility::InitBaseValues, CEntityHandle::GetHandleEntity, CDOTABaseAbility::SpeakAbilityConcept, DOTACommander, CDOTA_Commander::OnAbilityCreated
// callers: CDOTABaseAbility::OnLoadState, CDOTA_ActionRunner::PerformAction_LevelUpAbility, CDOTA_ActionRunner::PerformAction_SpawnUnit, DOTA_ExecuteOrders, CDOTA_NPC_DataDriven::Spawn, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC_Hero::UpgradeAbility, CDOTA_BaseNPC_Creature::CreatureLevelUp, CDOTA_BaseNPC_Creep_Neutral::Spawn, CDOTA_BaseNPC_Creature::InitializeCreature, CDOTA_BaseNPC_Creature::Spawn (99 total)
void __fastcall CDOTABaseAbility::UpgradeAbility(CDOTABaseAbility *const this, bool bSupressSpeech)
{
  IHandleEntity *HandleEntity; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_Commander *v6; // rax

  (*(this->_vptr_IHandleEntity + 212))(this, (this->m_iLevel.m_Value + 1));
  (*(this->_vptr_IHandleEntity + 268))(this);
  if ( (*(this->_vptr_IHandleEntity + 214))(this) != 2 )
  {
    CDOTABaseAbility::InitBaseValues(this);
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 )
    {
      v5 = HandleEntity;
      if ( LOBYTE(HandleEntity[427]._vptr_IHandleEntity) == 0 && !bSupressSpeech )
      {
        CDOTABaseAbility::SpeakAbilityConcept(this, 21);
        v5 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      }
    }
    else
    {
      v5 = 0;
    }
    if ( v5->m_pBot != 0 && this->m_iLevel.m_Value == 1 )
    {
      v6 = DOTACommander();
      CDOTA_Commander::OnAbilityCreated(v6, v5, this);
    }
  }
}


// CDOTABaseAbility::OnAbilityPinged  (line 881, @0x0000000002424c50, libserver.so)  // inlines: CDOTAUserMsg_AbilityPing_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_AbilityPing_t>, FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>, Get, GetAbilityName, GetCaster, GetCooldownTimeRemaining, GetMana, GetOwnerEntity, GetTeamNumber, IsControllableByPlayer, IsPassive, PostEvent<CDOTAUserMsg_AbilityPing_t>, SendUserMessage<CDOTAUserMsg_AbilityPing_t>, set_ability_id, set_cooldown_seconds, set_has_ability_id, set_has_cooldown_seconds, set_has_level, set_has_mana_needed, set_has_passive, set_has_player_id, set_has_type, set_level, set_mana_needed, set_passive, set_player_id, set_type, ~CDOTAUserMsg_AbilityPing_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CDOTAPlayer::GetPlayerByPlayerID, CDOTAPlayer::IsChatWheelRateLimited, CDOTAUserMsg_AbilityPing::CDOTAUserMsg_AbilityPing, CEntityHandle::GetHandleEntity, CDOTAPlayer::NoteChatWheelTime, DOTAGameManager, CDOTAGameManager::GetAbilityIndex, CTeamRecipientFilter::CTeamRecipientFilter, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing, ceilf, CDOTABaseAbility::IsOwnersManaEnough (14 total)
// strings: "<NoAbilityName>"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent
void __fastcall CDOTABaseAbility::OnAbilityPinged(CDOTABaseAbility *const this, int nPlayerID)
{
  unsigned __int64 v3; // r12
  CDOTAPlayer *PlayerByPlayerID; // rax
  CDOTAPlayer *v5; // rbx
  IHandleEntity *HandleEntity; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  int v8; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v10; // r12
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v12; // rax
  int (**v13)(...); // rax
  char v14; // al
  __int64 v15; // r13
  IGameEventSystem *v16; // r12
  void (__fastcall *v17)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // r15
  IHandleEntity *v18; // rax
  int v19; // eax
  bool v20; // zf
  IHandleEntity *v21; // rax
  char v22; // al
  int v23; // edx
  IHandleEntity *v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  int v27; // [rsp+Ch] [rbp-1B4h]
  _QWORD v28[2]; // [rsp+10h] [rbp-1B0h] BYREF
  int v29; // [rsp+20h] [rbp-1A0h]
  int nPlayerIDa; // [rsp+28h] [rbp-198h]
  int AbilityIndex; // [rsp+2Ch] [rbp-194h]
  int v32; // [rsp+30h] [rbp-190h]
  int v33; // [rsp+34h] [rbp-18Ch]
  int m_Value; // [rsp+38h] [rbp-188h]
  bool v35; // [rsp+3Ch] [rbp-184h]
  int v36; // [rsp+40h] [rbp-180h]
  CTeamRecipientFilter filterbroadcast; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+188h] [rbp-38h]

  v3 = nPlayerID;
  v38 = __readfsqword(0x28u);
  PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(nPlayerID);
  v5 = PlayerByPlayerID;
  if ( PlayerByPlayerID != 0 && !CDOTAPlayer::IsChatWheelRateLimited(PlayerByPlayerID) )
  {
    CDOTAUserMsg_AbilityPing::CDOTAUserMsg_AbilityPing(v28);
    v28[0] = off_40D4F90;
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    vptr_IHandleEntity = HandleEntity[368]._vptr_IHandleEntity;
    if ( _bittest64(&vptr_IHandleEntity, v3) )
    {
      if ( this->m_iLevel.m_Value != 0 )
      {
        if ( (*(this->_vptr_IHandleEntity + 245))(this) != 0 )
        {
          v21 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
          if ( (*(v21->_vptr_IHandleEntity + 408))(v21) == 0 || CDOTABaseAbility::IsOwnersManaEnough(this) )
          {
            v32 = 1;
            LOBYTE(v8) = v29 | 4;
            v29 |= 4u;
          }
          else
          {
            v32 = 2;
            v27 = v29;
            v29 |= 4u;
            v24 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
            v25 = 0.0;
            if ( v24 != 0 )
              v25 = *&v24[267]._vptr_IHandleEntity;
            v26 = ceilf(this->m_iManaCost.m_Value - v25);
            LOBYTE(v8) = v27 | 0x44;
            v29 = v27 | 0x44;
            v36 = v26;
          }
        }
        else
        {
          v32 = 3;
          v19 = v29;
          v20 = !this->m_bInIndefiniteCooldown.m_Value;
          v29 |= 4u;
          if ( v20 )
          {
            v22 = (*(this->_vptr_IHandleEntity + 245))(this);
            v23 = 0;
            if ( v22 == 0 )
              v23 = ceilf(this->m_fCooldown.m_Value);
            v33 = v23;
            LOBYTE(v8) = v29 | 8;
            v29 |= 8u;
          }
          else
          {
            v33 = 9999;
            v8 = v19 | 0xC;
            v29 = v8;
          }
        }
      }
      else
      {
        v32 = 5;
        LOBYTE(v8) = v29 | 4;
        v29 |= 4u;
      }
    }
    else if ( HIBYTE(HandleEntity[47]._vptr_IHandleEntity) == v5->m_iTeamNum.m_Value
           || (HandleEntity[261]._vptr_IHandleEntity & 1) == 0 )
    {
      LOBYTE(v8) = v29;
    }
    else
    {
      v29 |= 4u;
      v32 = 4;
      v18 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      v33 = (*(v18->_vptr_IHandleEntity + 414))(v18);
      v29 |= 8u;
      LOBYTE(v8) = v29;
    }
    if ( (v8 & 4) != 0 )
    {
      CDOTAPlayer::NoteChatWheelTime(v5);
      m_pAbilityData = this->m_pAbilityData;
      nPlayerIDa = v3;
      v10 = "<NoAbilityName>";
      v29 |= 1u;
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v10 = m_pszAbilityName;
      }
      v12 = DOTAGameManager();
      AbilityIndex = CDOTAGameManager::GetAbilityIndex(v12, v10);
      m_Value = this->m_iLevel.m_Value;
      v13 = this->_vptr_IHandleEntity;
      v29 |= 0x12u;
      v14 = v13[251](this);
      v29 |= 0x20u;
      v35 = (v14 & 2) != 0;
      (*(this->_vptr_IHandleEntity + 216))(this, v28);
      CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, v5->m_iTeamNum.m_Value, 0);
      v15 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent;
      v16 = g_pGameEventSystem;
      v17 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent);
      v17(v16, 0, 0, &filterbroadcast, v15, v28, 56);
      filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
      CRecipientFilter::~CRecipientFilter(&filterbroadcast);
      v28[0] = &off_40D4E10;
      CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing(v28);
    }
    else
    {
      v28[0] = &off_40D4E10;
      CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing(v28);
    }
  }
}


// CDOTABaseAbility::OwnerRespawned  (line 950, @0x00000000024245e0, libserver.so)  // inlines: EndChannel, NetworkStateChanged, Set, SetInAbilityPhase, operator=<bool>
// calls: CDOTABaseAbility::EndChannel
// callers: CDOTA_Item::OwnerRespawned, CDOTA_Ability_Medusa_ManaShield::OwnerRespawned, CDOTA_Ability_Meepo_DividedWeStand::OwnerRespawned
void __fastcall CDOTABaseAbility::OwnerRespawned(CDOTABaseAbility *const this)
{
  int (**vptr_IHandleEntity)(...); // rax

  if ( this->m_iLevel.m_Value != 0 || (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    if ( (*(this->_vptr_IHandleEntity + 281))(this) != 0 && this->m_bToggleState.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bToggleState.m_Value = 0;
    }
    if ( this->m_bInAbilityPhase.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      this->m_bInAbilityPhase.m_Value = 0;
      vptr_IHandleEntity[265](this);
    }
    if ( this->m_bChanneling )
      CDOTABaseAbility::EndChannel(this, 1);
    (*(this->_vptr_IHandleEntity + 269))(this);
  }
}


// CDOTABaseAbility::OnUnStolen  (line 973, @0x00000000024246c0, libserver.so)  // inlines: EndChannel, NetworkStateChanged, Set, SetInAbilityPhase, operator=<bool>
// calls: CDOTABaseAbility::EndChannel
// callers: CDOTA_Ability_Lua::Script_OnUnStolen, CDOTA_Item_Lua::Script_OnUnStolen, CDOTA_Ability_Puck_IllusoryOrb::OnUnStolen, CDOTA_Ability_Morphling_Replicate::OnUnStolen, CDOTA_Ability_Kunkka_XMarksTheSpot::OnUnStolen, CDOTA_Ability_AncientApparition_IceBlast::OnUnStolen, CDOTA_Ability_DeathProphet_SpiritSiphon::OnUnStolen, CDOTA_Ability_Sniper_Shrapnel::OnUnStolen, CDOTA_Ability_Life_Stealer_Infest::OnUnStolen, CDOTA_Ability_LoneDruid_TrueForm::OnUnStolen, CDOTA_Ability_LoneDruid_SpiritBear::OnUnStolen, CDOTA_Ability_Broodmother_SpinWeb::OnUnStolen (31 total)
void __fastcall CDOTABaseAbility::OnUnStolen(CDOTABaseAbility *const this)
{
  int (**vptr_IHandleEntity)(...); // rax

  if ( this->m_bInAbilityPhase.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_bInAbilityPhase.m_Value = 0;
    vptr_IHandleEntity[265](this);
  }
  if ( this->m_bChanneling )
    CDOTABaseAbility::EndChannel(this, 1);
}


// CDOTABaseAbility::GetControllingPlayer  (line 986, @0x0000000002429920, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTAPlayer
// calls: CEntityHandle::GetHandleEntity
// callers: CDOTABaseAbility::PayGoldCost, CDOTABaseAbility::PayGoldCostForUpgrade
CDOTAPlayer *__fastcall CDOTABaseAbility::GetControllingPlayer(CDOTABaseAbility *const this)
{
  IHandleEntity *HandleEntity; // r12
  CEntitySystem *v2; // r9
  unsigned int vptr_IHandleEntity_high; // ecx
  unsigned int v4; // r8d
  unsigned __int16 v5; // si
  int v6; // edi
  int v7; // edx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  unsigned __int16 v10; // dx
  int v11; // esi
  int v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTAPlayer *m_pInstance; // r13

  HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
  if ( HandleEntity == 0 )
    return 0;
  v2 = g_pEntitySystem;
  while ( 1 )
  {
    vptr_IHandleEntity_high = HIDWORD(HandleEntity[67]._vptr_IHandleEntity);
    v4 = vptr_IHandleEntity_high >> 15;
    if ( vptr_IHandleEntity_high == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = WORD2(HandleEntity[67]._vptr_IHandleEntity) & 0x7FFF;
      v6 = v5;
    }
    v7 = (v4 << 15) | v5 & 0x7FFF;
    if ( (v7 + 2) <= 1 )
      goto LABEL_9;
    v8 = v2->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v6 & 0x1FF];
      if ( v9 != 0 )
      {
        if ( v7 != v9->m_EHandle.m_Index )
          goto LABEL_9;
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance == 0 )
          goto LABEL_9;
        if ( (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
          return m_pInstance;
        vptr_IHandleEntity_high = HIDWORD(HandleEntity[67]._vptr_IHandleEntity);
        v2 = g_pEntitySystem;
        v4 = vptr_IHandleEntity_high >> 15;
      }
    }
LABEL_9:
    if ( vptr_IHandleEntity_high == -1 )
    {
      v10 = 0x7FFF;
      v11 = 0x7FFF;
    }
    else
    {
      v10 = WORD2(HandleEntity[67]._vptr_IHandleEntity) & 0x7FFF;
      v11 = v10;
    }
    v12 = (v4 << 15) | v10 & 0x7FFF;
    if ( (v12 + 2) > 1 )
    {
      v13 = v2->m_EntityList.m_pIdentityChunks[v11 >> 9];
      if ( v13 != 0 )
      {
        v14 = &v13[v11 & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
        {
          HandleEntity = v14->m_pInstance;
          if ( v14->m_pInstance != 0 && BYTE3(HandleEntity[42]._vptr_IHandleEntity) != 0 )
            continue;
        }
      }
    }
    return 0;
  }
}


// CDOTABaseAbility::GetCastAnimation  (line 1000, @0x000000000242f0a0, libserver.so)  // inlines: ActivityList_IndexForName, Get, GetAbilityData, GetAbilityKeyValues, GetCaster, GetOwnerEntity
// calls: KeyValues::GetString, CDOTABaseAbility::LoadAbilityData, CEntityHandle::GetHandleEntity, CBaseAnimating::SelectWeightedSequence
// callers: CDOTA_Ability_Lua::Script_GetCastAnimation, CDOTA_Ability_Tinker_Rearm::GetCastAnimation
// strings: "AbilityCastAnimation"
// globals: jpt_242F162
Activity __fastcall CDOTABaseAbility::GetCastAnimation(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *String; // rax
  Activity result; // eax
  Activity v5; // r12d
  const CBaseAnimating *HandleEntity; // rax

  if ( (*(this->_vptr_IHandleEntity + 211))(this) != -1
    || this->m_bStolen.m_Value && (*(this->_vptr_IHandleEntity + 309))(this) == 0 )
  {
    return -1;
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 && (CDOTABaseAbility::LoadAbilityData(this, 0), (m_pAbilityData = this->m_pAbilityData) == 0)
    || m_pAbilityData->m_pKVData == 0
    || (String = KeyValues::GetString(m_pAbilityData->m_pKVData, "AbilityCastAnimation", "", 0, 0)) == 0
    || g_pAnimationSystem == 0
    || (result = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, String)) == -1 )
  {
    result = -1;
    switch ( this->m_iAbilityIndex )
    {
      case 0:
        v5 = 1510;
        goto LABEL_14;
      case 1:
        v5 = 1511;
        goto LABEL_14;
      case 2:
        v5 = 1512;
        goto LABEL_14;
      case 3:
        v5 = 1513;
        goto LABEL_14;
      case 4:
        v5 = 1514;
        goto LABEL_14;
      case 5:
        v5 = 1515;
        goto LABEL_14;
      case 6:
        v5 = 1598;
LABEL_14:
        HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        if ( CBaseAnimating::SelectWeightedSequence(HandleEntity, v5).m_Data == -1 )
          return -1;
        result = v5;
        break;
      default:
        return result;
    }
  }
  return result;
}


// CDOTABaseAbility::RefCountsModifiers  (line 1036, @0x000000000241faf0, libserver.so)  // inlines: GetBool, GetInt
// callers: CDOTA_Buff::SetAbility, CDOTA_Buff::~CDOTA_Buff, CDOTA_ProjectileManager::FinishTrackingProjectile, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTA_ProjectileManager::InternalDestroyLinearProjectile
bool __fastcall CDOTABaseAbility::RefCountsModifiers(CDOTABaseAbility *const this)
{
  bool result; // al

  result = 1;
  if ( !this->m_bRefCountsModifiers )
    return dota_ability_refcount_modifiers.m_pParent->m_Value.m_nValue != 0;
  return result;
}


// CDOTABaseAbility::SetAbilityIndex  (line 1041, @0x000000000241f360, libserver.so)
// callers: CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::SetAbilityByIndex, CDOTA_BaseNPC::CreateAbilities
void __fastcall CDOTABaseAbility::SetAbilityIndex(CDOTABaseAbility *const this, int iIndex)
{
  this->m_iAbilityIndex = iIndex;
}


// CDOTABaseAbility::GetBackswingTime  (line 1049, @0x000000000241f370, libserver.so)
float __fastcall CDOTABaseAbility::GetBackswingTime(CDOTABaseAbility *const this)
{
  return 0.5;
}


// CDOTABaseAbility::InitBaseValues  (line 1057, @0x0000000002429ff0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDOTABaseAbility::OnInventoryContentsChanged, CDOTA_Ability_Lua::Script_OnInventoryContentsChanged, CDOTABaseAbility::OnAbilityUpgrade, CDOTABaseAbility::Script_SetLevel, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::LoadAbilityData, CDOTA_Item_Lua::Script_OnInventoryContentsChanged, CDOTA_Item::Spawn, CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged, CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnInventoryContentsChanged
void __fastcall CDOTABaseAbility::InitBaseValues(CDOTABaseAbility *const this)
{
  int v2; // r12d
  int v3; // r12d

  v2 = (*(this->_vptr_IHandleEntity + 273))(this, 0xFFFFFFFFLL);
  if ( v2 != this->m_iManaCost.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iManaCost.m_Value = v2;
  }
  v3 = (*(this->_vptr_IHandleEntity + 226))(this, &vec3_origin, 0);
  if ( v3 != this->m_iCastRange.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCastRange.m_Value = v3;
  }
}


// CDOTABaseAbility::OnUpgrade  (line 1066, @0x000000000242e410, libserver.so)  // inlines: GetAbilityData, GetGameMode, GetParent, IsAddOnGame, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::LoadAbilityData, CDOTA_BaseNPC_Hero::AddAbilitySkilledHistory
// callers: CDOTA_Ability_Lua::OnUpgrade, CDOTA_Ability_Lua::Script_OnUpgrade, CDOTA_Ability_DataDriven::OnUpgrade, CDOTA_Item_DataDriven::OnUpgrade, CDOTA_Item_Lua::Script_OnUpgrade, CDOTA_Ability_AncientApparition_IceBlast::OnUpgrade, CDOTA_Ability_AncientApparition_IceBlast_Release::OnUpgrade, CDOTA_Ability_Bane_Nightmare::OnUpgrade, CDOTA_Ability_Kunkka_XMarksTheSpot::OnUpgrade, CDOTA_Ability_Kunkka_Return::OnUpgrade, CDOTA_Ability_Morphling_Morph_Agi::OnUpgrade, CDOTA_Ability_Morphling_Morph_Str::OnUpgrade (83 total)
void __fastcall CDOTABaseAbility::OnUpgrade(CDOTABaseAbility *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC_Hero *v4; // r12
  int v5; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v4 = OwnerEntity;
    if ( OwnerEntity != 0
      && OwnerEntity->m_bIsDOTANPC
      && (OwnerEntity[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
      && LOBYTE(OwnerEntity[4].m_pfnMoveDone.__delta) == 0
      && (*(OwnerEntity->_vptr_IHandleEntity + 390))(OwnerEntity) == 0 )
    {
      v5 = *&g_pGameRules[6].m_szQuestName[68];
      if ( v5 != 15 && v5 != 19 )
      {
        m_pAbilityData = this->m_pAbilityData;
        if ( m_pAbilityData == 0 )
        {
          CDOTABaseAbility::LoadAbilityData(this, 0);
          m_pAbilityData = this->m_pAbilityData;
        }
        CDOTA_BaseNPC_Hero::AddAbilitySkilledHistory(v4, m_pAbilityData->m_iAbilityID);
      }
    }
  }
  (*(this->_vptr_IHandleEntity + 262))(this);
}


// CDOTABaseAbility::OnOwnerSpawned  (line 1080, @0x000000000241f380, libserver.so)
// callers: CDOTA_Item_Lua::Script_OnOwnerSpawned, CDOTA_Item_DataDriven::OnOwnerSpawned, CDOTA_Ability_Meepo_DividedWeStand::OnOwnerSpawned
void __fastcall CDOTABaseAbility::OnOwnerSpawned(CDOTABaseAbility *const this)
{
  (*(this->_vptr_IHandleEntity + 262))(this);
}


// CDOTABaseAbility::OnChannelThink  (line 1086, @0x0000000002424730, libserver.so)  // inlines: CEntityHandle, EndChannel, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::SpendMana, CDOTABaseAbility::EndChannel
// callers: CDOTA_Ability_Lua::Script_OnChannelThink, CDOTA_Ability_Creature_Fire_Breath::OnChannelThink, CDOTA_Item_Lua::Script_OnChannelThink, CDOTA_Ability_Nian_Whirlpool::OnChannelThink, CDOTA_Ability_Warlock_Upheaval::OnChannelThink, CDOTA_Ability_Nian_Hurricane::OnChannelThink, CDOTA_Ability_Nian_Roar::OnChannelThink, CDOTA_Ability_Nian_Apocalypse::OnChannelThink
void __fastcall CDOTABaseAbility::OnChannelThink(CDOTABaseAbility *const this, double a2, float flInterval)
{
  float v4; // xmm1_4
  uint32 m_Index; // ecx
  float v6; // xmm0_4
  uint32 v7; // esi
  unsigned __int16 v8; // dx
  int v9; // r8d
  CEntityInstance *m_pInstance; // r9
  int v11; // eax
  CEntityIdentity *v12; // rdi
  CEntityIdentity *v13; // rdi
  CEntitySystem *v14; // r8
  unsigned __int16 v15; // dx
  int v16; // ecx
  CDOTA_BaseNPC *v17; // rdi
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  float flManaSpent; // [rsp+Ch] [rbp-24h]
  float flManaSpenta; // [rsp+Ch] [rbp-24h]

  flManaSpent = *&a2;
  v4 = (*(this->_vptr_IHandleEntity + 275))(this, 0xFFFFFFFFLL, a2, flInterval);
  if ( v4 <= 0.0 )
    return;
  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  v6 = flManaSpent * v4;
  v7 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v8 = 0x7FFF;
    v9 = 0x7FFF;
  }
  else
  {
    v8 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v9 = v8;
  }
  m_pInstance = 0;
  v11 = (v7 << 15) | v8 & 0x7FFF;
  if ( (v11 + 2) > 1 )
  {
    v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
    if ( v12 != 0 )
    {
      v13 = &v12[v9 & 0x1FF];
      if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        m_pInstance = v13->m_pInstance;
    }
  }
  if ( v6 > *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id && this->m_bChanneling )
  {
    flManaSpenta = flManaSpent * v4;
    CDOTABaseAbility::EndChannel(this, 1);
    v14 = g_pEntitySystem;
    v6 = flManaSpenta;
    v7 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
      goto LABEL_20;
LABEL_11:
    v15 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v16 = v15;
    goto LABEL_12;
  }
  v14 = g_pEntitySystem;
  if ( m_Index != -1 )
    goto LABEL_11;
LABEL_20:
  v15 = 0x7FFF;
  v16 = 0x7FFF;
LABEL_12:
  v17 = 0;
  v18 = (v7 << 15) | v15 & 0x7FFF;
  if ( (v18 + 2) > 1 )
  {
    v19 = v14->m_EntityList.m_pIdentityChunks[v16 >> 9];
    if ( v19 != 0 )
    {
      v20 = &v19[v16 & 0x1FF];
      if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
        v17 = v20->m_pInstance;
    }
  }
  CDOTA_BaseNPC::SpendMana(v17, v6, this, 0);
}


// CDOTABaseAbility::RefreshIntrinsicModifier  (line 1107, @0x0000000002420a60, libserver.so)  // inlines: AddRef, AddToDHead<CUtlReference<CDOTA_Buff> >, AddToHead, GetParent, KillRef, RemoveFromDList<CUtlReference<CDOTA_Buff> >, RemoveNode, Set, SetAttributes, ToDOTABaseNPC, operator=
// calls: KeyValues::KeyValues, CGameSceneNode::GetOwnerEntity, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Buff::GetAbility, CDOTA_ModifierManager::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::AddNewModifier, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Ability_DataDriven::RefreshIntrinsicModifier, CDOTA_Item::RefreshIntrinsicModifier
// strings: "RefreshIntrinsicModifier", "modifier_create_client", "creationtime", "stack_count"
CDOTA_Buff *__fastcall CDOTABaseAbility::RefreshIntrinsicModifier(CDOTABaseAbility *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v4; // r12
  __int64 v5; // rax
  float v6; // xmm1_4
  __int64 v7; // rax
  float v8; // xmm1_4
  __int64 v9; // rax
  int v10; // eax
  const char *v11; // r15
  CDOTA_Buff *v12; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTA_Buff *v14; // rbx
  const char *v16; // rax
  CDOTA_Buff *v17; // rax
  CUtlReference<CDOTA_Buff> *m_pNext; // rsi
  CDOTA_Buff *m_pObject; // rdi
  CUtlReference<CDOTA_Buff> *p_m_pIntrinsicBuff; // rdx
  CUtlReference<CDOTA_Buff> *m_pPrev; // rcx
  CUtlReference<CDOTA_Buff> *v22; // rcx
  CUtlReference<CDOTA_Buff> *m_pHead; // rcx
  CUtlReference<CDOTA_Buff> *v24; // rcx
  KeyValues kvIntrinsic; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( !this->m_bActivated.m_Value )
    return 0;
  KeyValues::KeyValues(&kvIntrinsic, "RefreshIntrinsicModifier");
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent == 0
    || (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), v4 = OwnerEntity, OwnerEntity == 0)
    || !OwnerEntity->m_bIsDOTANPC )
  {
    v14 = 0;
    goto LABEL_11;
  }
  if ( (*(this->_vptr_IHandleEntity + 263))(this) == 0 || (*((*(this->_vptr_IHandleEntity + 263))(this) + 138) & 4) != 0 )
  {
    if ( (*(this->_vptr_IHandleEntity + 280))(this) != 0 )
    {
      v16 = (*(this->_vptr_IHandleEntity + 280))(this);
      v17 = CDOTA_BaseNPC::AddNewModifier(v4, v4, this, v16, &kvIntrinsic, 0);
      m_pObject = this->m_pIntrinsicBuff.m_pObject;
      p_m_pIntrinsicBuff = &this->m_pIntrinsicBuff;
      if ( v17 != m_pObject )
      {
        if ( m_pObject != 0 )
        {
          m_pPrev = this->m_pIntrinsicBuff.m_pPrev;
          if ( m_pPrev != 0 )
          {
            m_pNext = this->m_pIntrinsicBuff.m_pNext;
            m_pPrev->m_pNext = m_pNext;
            v22 = this->m_pIntrinsicBuff.m_pNext;
            if ( v22 != 0 )
            {
              m_pNext = this->m_pIntrinsicBuff.m_pPrev;
              v22->m_pPrev = m_pNext;
            }
          }
          else if ( p_m_pIntrinsicBuff == m_pObject->m_References.m_pHead )
          {
            v24 = this->m_pIntrinsicBuff.m_pNext;
            m_pObject->m_References.m_pHead = v24;
            if ( v24 != 0 )
              v24->m_pPrev = 0;
          }
          this->m_pIntrinsicBuff.m_pPrev = 0;
          this->m_pIntrinsicBuff.m_pNext = 0;
        }
        this->m_pIntrinsicBuff.m_pObject = v17;
        if ( v17 == 0 )
          goto LABEL_9;
        this->m_pIntrinsicBuff.m_pNext = v17->m_References.m_pHead;
        m_pHead = v17->m_References.m_pHead;
        if ( m_pHead != 0 )
          m_pHead->m_pPrev = p_m_pIntrinsicBuff;
        this->m_pIntrinsicBuff.m_pPrev = 0;
        v17->m_References.m_pHead = p_m_pIntrinsicBuff;
        m_pObject = this->m_pIntrinsicBuff.m_pObject;
      }
      if ( m_pObject != 0 )
        this->m_pIntrinsicBuff.m_pObject->m_iAttributes |= (*(m_pObject->_vptr_CDOTA_Buff + 7))(
                                                             m_pObject,
                                                             m_pNext,
                                                             p_m_pIntrinsicBuff)
                                                         | 1;
    }
  }
  else
  {
    v5 = (*(this->_vptr_IHandleEntity + 263))(this);
    if ( ((*(*v5 + 56LL))(v5) & 2) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_create_client");
      (*(this->_vptr_IHandleEntity + 263))(this);
      KeyValues::SetFloat(&kv, "creationtime", v6);
      v7 = (*(this->_vptr_IHandleEntity + 263))(this);
      (*(*v7 + 248LL))(v7);
      KeyValues::SetFloat(&kv, "duration", v8);
      v9 = (*(this->_vptr_IHandleEntity + 263))(this);
      v10 = (*(*v9 + 216LL))(v9);
      KeyValues::SetInt(&kv, "stack_count", v10);
      v11 = (*(this->_vptr_IHandleEntity + 280))(this);
      v12 = (*(this->_vptr_IHandleEntity + 263))(this);
      Ability = CDOTA_Buff::GetAbility(v12);
      CDOTA_ModifierManager::AddNewModifier(&v4->m_ModifierManager, v4, Ability, v11, &kv, -1, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
LABEL_9:
  v14 = (*(this->_vptr_IHandleEntity + 263))(this);
LABEL_11:
  KeyValues::~KeyValues(&kvIntrinsic);
  return v14;
}


// CDOTABaseAbility::OnOwnerDied  (line 1145, @0x000000000241fbb0, libserver.so)
// callers: CDOTA_Ability_Lua::Script_OnOwnerDied, CDOTA_Ability_DataDriven::OnOwnerDied, CDOTA_Item::OnOwnerDied, CDOTA_Ability_Medusa_ManaShield::OnOwnerDied, CDOTA_Ability_Meepo_DividedWeStand::OnOwnerDied
void __fastcall CDOTABaseAbility::OnOwnerDied(CDOTABaseAbility *const this)
{
  if ( ((*(this->_vptr_IHandleEntity + 251))(this) & 0x200) != 0 && this->m_bToggleState.m_Value )
    (*(this->_vptr_IHandleEntity + 270))(this);
}


// CDOTABaseAbility::SetHidden  (line 1156, @0x00000000024204e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CDOTABaseAbility::OnLoadState, CDOTABaseAbility::LoadAbilityData, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::SetAbilityHidden, CDOTA_BaseNPC::CreateAbilities, CDOTA_Ability_Morphling_Hybrid::Spawn, CDOTA_Unit_Hero_Morphling::OnItemEquipped, CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell, CDOTA_Ability_Zuus_Cloud::Spawn, CDOTA_Unit_Hero_Zuus::OnItemEquipped, CDOTA_Ability_LoneDruid_SavageRoar_Bear::Spawn, CDOTA_Unit_Hero_Life_Stealer::OnItemEquipped (32 total)
void __fastcall CDOTABaseAbility::SetHidden(CDOTABaseAbility *const this, bool bHidden)
{
  if ( this->m_bHidden.m_Value != bHidden )
  {
    (*(this->_vptr_IHandleEntity + 297))(this);
    if ( this->m_bHidden.m_Value != bHidden )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bHidden.m_Value = bHidden;
    }
  }
}


// CDOTABaseAbility::SetActivated  (line 1166, @0x0000000002420530, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CDOTA_BaseNPC::SetAbilityActive, CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Modifier_Juggernaut_Omnislash::OnDestroy, CDOTA_Ability_Puck_IllusoryOrb::OnProjectileHit, CDOTA_Ability_Puck_EtherealJaunt::OnSpellStart, CDOTA_Ability_Puck_IllusoryOrb::OnSpellStart, CDOTA_Modifier_Juggernaut_Omnislash::OnIntervalThink, CDOTA_Ability_Tiny_Grow::OnStolen, CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnStolen, CDOTA_Ability_Venomancer_PlagueWard::OnUpgrade, CDOTA_Ability_Holdout_ScourgeWard::OnUpgrade, CDOTA_Ability_Venomancer_VenomousGale::OnUpgrade (40 total)
void __fastcall CDOTABaseAbility::SetActivated(CDOTABaseAbility *const this, bool bActivated)
{
  if ( this->m_bActivated.m_Value != bActivated )
  {
    (*(this->_vptr_IHandleEntity + 297))(this);
    if ( this->m_bActivated.m_Value != bActivated )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 805, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bActivated.m_Value = bActivated;
    }
  }
}


// CDOTABaseAbility::GetChannelTime  (line 1176, @0x000000000242e560, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel, GetLevel, IsTrained
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_Lua::Script_GetChannelTime, CDOTA_Ability_DataDriven::GetChannelTime, CDOTA_Item_Lua::Script_GetChannelTime, CDOTA_Item_DataDriven::GetChannelTime, CDOTA_Ability_Pudge_Dismember::GetChannelTime, CDOTA_Ability_Bane_FiendsGrip::GetChannelTime, CDOTA_Ability_ShadowShaman_Shackles::GetChannelTime, CDOTA_Ability_Riki_TricksOfTheTrade::GetChannelTime, CDOTA_Item_TeleportScroll::GetChannelTime
float __fastcall CDOTABaseAbility::GetChannelTime(CDOTABaseAbility *const this)
{
  int m_Value; // edx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v4; // edx

  m_Value = this->m_iLevel.m_Value;
  if ( m_Value <= 0 )
    return 0.0;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    m_Value = this->m_iLevel.m_Value;
  }
  v4 = m_Value - 1;
  if ( v4 > m_pAbilityData->m_nChannelTimes - 1 )
    v4 = m_pAbilityData->m_nChannelTimes - 1;
  if ( v4 < 0 )
    return 0.0;
  else
    return m_pAbilityData->m_pChannelTimes[v4];
}


// CDOTABaseAbility::MarkAbilityButtonDirty  (line 1188, @0x0000000002420490, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTABaseAbility::MarkAbilityButtonDirty(CDOTABaseAbility *const this)
{
  int m_Value; // edx
  int v3; // ebx

  m_Value = this->m_iDirtyButtons.m_Value;
  v3 = (m_Value + 1) % 8;
  if ( m_Value != v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDirtyButtons.m_Value = v3;
  }
}


// CDOTABaseAbility::OnSaveState  (line 1195, @0x000000000242de00, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetCooldownTimeRemaining, GetTeamNumber, SetBool, String
// calls: KeyValues::SetName, KeyValues::SetInt, KeyValues::SetFloat, CFmtStrN<256, false>::CFmtStrN, KeyValues::SetString, DOTA_SaveEntityDataDesc, __stack_chk_fail
// callers: CDOTA_Item::OnSaveState, CDOTA_Ability_Nevermore_Necromastery::OnSaveState, CDOTA_Ability_TemplarAssassin_Meld::OnSaveState, CDOTA_Ability_TemplarAssassin_Refraction::OnSaveState, CDOTA_Ability_BountyHunter_WindWalk::OnSaveState, CDOTA_Ability_Clinkz_WindWalk::OnSaveState, CDOTA_Ability_Nyx_Assassin_Vendetta::OnSaveState, CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnSaveState, CDOTA_Ability_Rubick_SpellSteal::OnSaveState, CDOTA_Ability_Undying_Tombstone::OnSaveState
// strings: "hidden", "isstolen", "m_iTeamNum"
bool __fastcall CDOTABaseAbility::OnSaveState(CDOTABaseAbility *const this, KeyValues *pKV)
{
  const char *m_pAsString; // rsi
  CEntityIdentity *m_pEntity; // rax
  float v6; // xmm1_4
  CFmtStrN<256,false> v8; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-28h]

  m_pAsString = "";
  v9 = __readfsqword(0x28u);
  m_pEntity = this->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  KeyValues::SetName(pKV, m_pAsString);
  KeyValues::SetInt(pKV, "level", this->m_iLevel.m_Value);
  (*(this->_vptr_IHandleEntity + 245))(this);
  KeyValues::SetFloat(pKV, "cooldown", v6);
  KeyValues::SetInt(pKV, "hidden", this->m_bHidden.m_Value);
  if ( this->m_bStolen.m_Value )
    KeyValues::SetInt(pKV, "isstolen", 1);
  CFmtStrN<256,false>::CFmtStrN(&v8, "%d", this->m_iTeamNum.m_Value);
  KeyValues::SetString(pKV, "m_iTeamNum", v8.m_szBuf);
  DOTA_SaveEntityDataDesc(this, pKV);
  return 1;
}


// CDOTABaseAbility::OnLoadState  (line 1218, @0x000000000242a1a0, libserver.so)  // inlines: GetBool, GetLevel, NetworkStateChanged, Set, operator=<bool>
// calls: KeyValues::GetInt, CDOTABaseAbility::UpgradeAbility, KeyValues::GetFloat, CDOTABaseAbility::SetHidden, DOTA_LoadEntityDataDesc, KeyValues::GetString, V_atoi
// callers: CDOTA_Item::OnLoadState, CDOTA_Ability_Nevermore_Necromastery::OnLoadState, CDOTA_Ability_TemplarAssassin_Refraction::OnLoadState, CDOTA_Ability_TemplarAssassin_Meld::OnLoadState, CDOTA_Ability_BountyHunter_WindWalk::OnLoadState, CDOTA_Ability_Clinkz_WindWalk::OnLoadState, CDOTA_Ability_LoneDruid_SpiritBear::OnLoadState, CDOTA_Ability_Broodmother_SpinWeb::OnLoadState, CDOTA_Ability_Nyx_Assassin_Vendetta::OnLoadState, CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnLoadState, CDOTA_Ability_MonkeyKing_Spring::OnLoadState, CDOTA_Ability_MonkeyKing_Transform::OnLoadState (14 total)
// strings: "isstolen", "hidden", "m_iTeamNum"
bool __fastcall CDOTABaseAbility::OnLoadState(CDOTABaseAbility *const this, KeyValues *pKV)
{
  int Int; // eax
  float v5; // xmm1_4
  int m_Value; // ebx
  int v7; // r13d
  unsigned int v8; // xmm1_4
  bool v9; // bl
  int v10; // eax
  const char *String; // rax
  void (__fastcall *v12)(CDOTABaseAbility *const, _QWORD); // rbx
  unsigned int v13; // eax

  Int = KeyValues::GetInt(pKV, "level", 0);
  m_Value = this->m_iLevel.m_Value;
  v7 = Int;
  if ( Int > m_Value )
  {
    do
    {
      ++m_Value;
      CDOTABaseAbility::UpgradeAbility(this, 0);
    }
    while ( m_Value != v7 );
  }
  *&v8 = fmaxf(0.0, KeyValues::GetFloat(pKV, "cooldown", v5));
  (*(this->_vptr_IHandleEntity + 241))(this, COERCE_DOUBLE(v8));
  v9 = KeyValues::GetInt(pKV, "isstolen", 0) != 0;
  if ( v9 != this->m_bStolen.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStolen.m_Value = v9;
  }
  v10 = KeyValues::GetInt(pKV, "hidden", 0);
  CDOTABaseAbility::SetHidden(this, v10 != 0);
  DOTA_LoadEntityDataDesc(this, pKV);
  String = KeyValues::GetString(pKV, "m_iTeamNum", "", 0, 0);
  if ( *String != 0 )
  {
    v12 = *(this->_vptr_IHandleEntity + 70);
    v13 = V_atoi(String);
    v12(this, v13);
  }
  return 1;
}


// CDOTABaseAbility::GetCloneSource  (line 1250, @0x000000000241f3a0, libserver.so)
CDOTA_BaseNPC *__fastcall CDOTABaseAbility::GetCloneSource(CDOTABaseAbility *const this)
{
  return 0;
}


// CDOTABaseAbility::SetBackedByEconConsumableIndex  (line 1256, @0x000000000242a2d0, libserver.so)
// callers: CDOTA_BaseNPC_Hero::UpdateActionItemSlot, CDOTA_Item_RiverPainter::OnEquip
void __fastcall CDOTABaseAbility::SetBackedByEconConsumableIndex(
        CDOTABaseAbility *const this,
        item_definition_index_t nIndex)
{
  this->m_nBackedByEconItemIndex = nIndex;
}


// CDOTABaseAbility::OnAbilityPhaseStart  (line 1261, @0x0000000002422550, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture
// callers: CDOTA_Ability_Lua::Script_OnAbilityPhaseStart, CDOTA_Ability_DataDriven::OnAbilityPhaseStart, CDOTA_Item_Lua::Script_OnAbilityPhaseStart, CDOTA_Item_DataDriven::OnAbilityPhaseStart, CDOTA_Ability_MonkeyKing_Boundless_Strike::OnAbilityPhaseStart, CDOTA_Ability_Legion_Commander_PressTheAttack::OnAbilityPhaseStart, CDOTA_Ability_Terrorblade_Reflection::OnAbilityPhaseStart
bool __fastcall CDOTABaseAbility::OnAbilityPhaseStart(CDOTABaseAbility *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  Activity v8; // eax
  unsigned __int16 v9; // cx
  int v10; // r8d
  CDOTA_BaseNPC *v11; // rdi
  uint32 v12; // edx
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx

  if ( (*(this->_vptr_IHandleEntity + 211))(this) != -1 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    m_pInstance = 0;
    v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    if ( v5 + 2 > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v3 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    CDOTA_BaseNPC::RemoveGesture(m_pInstance, 1536);
    v8 = (*(this->_vptr_IHandleEntity + 211))(this);
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v9 = 0x7FFF;
      v10 = 0x7FFF;
    }
    else
    {
      v9 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v10 = v9;
    }
    v11 = 0;
    v12 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
    if ( v12 + 2 > 1 )
    {
      v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
      if ( v13 != 0 )
      {
        v14 = &v13[v10 & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
          v11 = v14->m_pInstance;
      }
    }
    CDOTA_BaseNPC::StartGesture(v11, v8, 0.1, 0.1, 9, 0, 1.0);
  }
  return 1;
}


// CDOTABaseAbility::OnAbilityPhaseInterrupted  (line 1272, @0x0000000002422100, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::FadeGesture
// callers: CDOTA_Ability_Lua::Script_OnAbilityPhaseInterrupted, CDOTA_Ability_DataDriven::OnAbilityPhaseInterrupted, CDOTA_Item_Lua::Script_OnAbilityPhaseInterrupted, CDOTA_Ability_MonkeyKing_Boundless_Strike::OnAbilityPhaseInterrupted, CDOTA_Ability_Legion_Commander_PressTheAttack::OnAbilityPhaseInterrupted, CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseInterrupted, CDOTA_Ability_Terrorblade_Reflection::OnAbilityPhaseInterrupted
void __fastcall CDOTABaseAbility::OnAbilityPhaseInterrupted(CDOTABaseAbility *const this)
{
  Activity v2; // eax
  unsigned __int16 v3; // cx
  int v4; // r8d
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v6; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  if ( (*(this->_vptr_IHandleEntity + 211))(this) != -1 )
  {
    v2 = (*(this->_vptr_IHandleEntity + 211))(this);
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    m_pInstance = 0;
    v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    if ( v6 + 2 > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v4 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
          m_pInstance = v8->m_pInstance;
      }
    }
    CDOTA_BaseNPC::FadeGesture(m_pInstance, v2);
  }
}


// dota_ability_dump_refcounts  (line 1282, @0x00000000024230b0, libserver.so)  // inlines: Get, GetAbilityName, GetHero, GetInstance, GetUnitName, NumModifiersUsingAbility, String, ToCStr, ToDOTABaseNPCHero, operator[]
// calls: CEntityHandle::operator CEntityInstance*, Msg, CDOTA_BaseNPC::GetAbilityByIndex
// strings: "HERO: %s\n", "<NoAbilityName>", "   %s - %d\n"
void __fastcall dota_ability_dump_refcounts(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // r14d
  __int64 i; // r13
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  const char *m_pAsString; // rsi
  int v7; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  int m_iModifierRefCount; // edx
  const char *v10; // rsi
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax

  v2 = 0;
  for ( i = 0; v2 < g_HeroList.m_hHeroList.m_Size; ++i )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[i]);
    v5 = v4;
    if ( v4 != 0 && (v4[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      m_pAsString = "";
      if ( v4[70].m_iszPrivateVScripts.u.m_Id != 0 )
        m_pAsString = v4[70].m_iszPrivateVScripts.u.m_pAsString;
      v7 = 0;
      Msg("HERO: %s\n", m_pAsString);
      do
      {
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v5, v7);
        if ( AbilityByIndex != 0 )
        {
          m_iModifierRefCount = AbilityByIndex->m_iModifierRefCount;
          v10 = "<NoAbilityName>";
          m_pAbilityData = AbilityByIndex->m_pAbilityData;
          if ( m_pAbilityData != 0 )
          {
            m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
            if ( m_pszAbilityName != 0 )
              v10 = m_pszAbilityName;
          }
          Msg("   %s - %d\n", v10, m_iModifierRefCount);
        }
        ++v7;
      }
      while ( v7 != 24 );
    }
    ++v2;
  }
}


