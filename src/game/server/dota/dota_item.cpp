// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_item.cpp:321
class C_CDOTA_Item_MapInstall {
	C_CDOTA_Item_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_item.cpp:1330
class C_CDOTA_Item_Physical_MapInstall {
	C_CDOTA_Item_Physical_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_item.cpp:1496
class C_CDOTA_Item_Rune_MapInstall {
	C_CDOTA_Item_Rune_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_item.cpp:1717
class C_CDOTA_Item_RuneSpawner_Bounty_MapInstall {
	C_CDOTA_Item_RuneSpawner_Bounty_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_item.cpp:1728
class C_CDOTA_Item_RuneSpawner_Powerup_MapInstall {
	C_CDOTA_Item_RuneSpawner_Powerup_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DOTA_VScript_CreateItem  (line 33, @0x00000000025b37b0, libserver.so)  // inlines: DOTAGameRules, EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, DOTA_CreateItem, CEntityInstance::CreatePublicScriptScope, Warning
// strings: "Attempting to create an item too early, GameRules has not been created yet!."
HSCRIPT __fastcall DOTA_VScript_CreateItem(const char *pScriptName, HSCRIPT pParent, HSCRIPT pOwner)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  _BYTE *v8; // rax
  int v9; // r14d
  __int64 (__fastcall *v10)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v11; // rax
  CBaseEntity *v12; // rsi
  CDOTA_Item *Item; // rbx
  HSCRIPT result; // rax

  if ( g_pGameRules != 0 )
  {
    if ( pOwner != 0
      && (v6 = *(*g_pScriptVM + 208LL),
          Script = GetScriptDesc<CEntityInstance>(0),
          (v8 = v6(g_pScriptVM, pOwner, Script)) != 0)
      && v8[339] != 0 )
    {
      v9 = (*(*v8 + 3312LL))(v8);
    }
    else
    {
      v9 = -1;
    }
    if ( pParent != 0 )
    {
      v10 = *(*g_pScriptVM + 208LL);
      v11 = GetScriptDesc<CEntityInstance>(0);
      v12 = v10(g_pScriptVM, pParent, v11);
    }
    else
    {
      v12 = 0;
    }
    Item = DOTA_CreateItem(pScriptName, v12, v9);
    result = 0;
    if ( Item != 0 )
    {
      result = Item->m_pEntity->m_hPublicScope.m_hScope;
      if ( result == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(Item, 0);
        return Item->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
  }
  else
  {
    Warning("Attempting to create an item too early, GameRules has not been created yet!.", pParent, pOwner);
    return 0;
  }
  return result;
}


// VScript_CreateItemOnPositionSync  (line 45, @0x00000000025b23a0, libserver.so)  // inlines: DOTAGameRules, EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CreateItemOnPositionSync, CEntityInstance::CreatePublicScriptScope, Warning
// strings: "Attempting to create an item too early, GameRules has not been created yet!."
HSCRIPT __fastcall VScript_CreateItemOnPositionSync(HSCRIPT hContainedItem, double a2, vec_t a3)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx
  CDOTA_Item *v9; // rdi
  CDOTA_Item_Physical *ItemOnPositionSync; // rbx
  HSCRIPT result; // rax

  if ( g_pGameRules != 0 )
  {
    if ( hContainedItem != 0
      && (v4 = *(*g_pScriptVM + 208LL),
          Script = GetScriptDesc<CEntityInstance>(0),
          (v6 = v4(g_pScriptVM, hContainedItem, Script)) != 0)
      && (v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0), v8 = v7, v7 != 0)
      && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 )
    {
      v9 = v8;
    }
    else
    {
      v9 = 0;
    }
    ItemOnPositionSync = CreateItemOnPositionSync(v9, 0, a2, a3);
    result = 0;
    if ( ItemOnPositionSync != 0 )
    {
      result = ItemOnPositionSync->m_pEntity->m_hPublicScope.m_hScope;
      if ( result == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(ItemOnPositionSync, 0);
        return ItemOnPositionSync->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
  }
  else
  {
    Warning("Attempting to create an item too early, GameRules has not been created yet!.");
    return 0;
  }
  return result;
}


// VScript_CreateItemOnPositionForLaunch  (line 58, @0x00000000025b1950, libserver.so)  // inlines: DOTAGameRules, EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CreateItemOnPositionForLaunch, CEntityInstance::CreatePublicScriptScope, Warning
// strings: "Attempting to create an item too early, GameRules has not been created yet!."
HSCRIPT __fastcall VScript_CreateItemOnPositionForLaunch(HSCRIPT hContainedItem, double a2, vec_t a3)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx
  CDOTA_Item *v9; // rdi
  CDOTA_Item_Physical *ItemOnPositionForLaunch; // rbx
  HSCRIPT result; // rax

  if ( g_pGameRules != 0 )
  {
    if ( hContainedItem != 0
      && (v4 = *(*g_pScriptVM + 208LL),
          Script = GetScriptDesc<CEntityInstance>(0),
          (v6 = v4(g_pScriptVM, hContainedItem, Script)) != 0)
      && (v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0), v8 = v7, v7 != 0)
      && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 )
    {
      v9 = v8;
    }
    else
    {
      v9 = 0;
    }
    ItemOnPositionForLaunch = CreateItemOnPositionForLaunch(v9, 0, a2, a3);
    result = 0;
    if ( ItemOnPositionForLaunch != 0 )
    {
      result = ItemOnPositionForLaunch->m_pEntity->m_hPublicScope.m_hScope;
      if ( result == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(ItemOnPositionForLaunch, 0);
        return ItemOnPositionForLaunch->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
  }
  else
  {
    Warning("Attempting to create an item too early, GameRules has not been created yet!.");
    return 0;
  }
  return result;
}


// GetClassNameForItemName  (line 71, @0x0000000002593bb0, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetName, KeyValues::GetString, Warning
// callers: DOTA_PrecacheItemByNameSync, DOTA_PrecacheItemByNameAsync, DOTA_CreateItem
// strings: "Could not find data for item! %s\n"
const char *__fastcall GetClassNameForItemName(const char *pItemName)
{
  CDOTAGameManager *v2; // rax
  KeyValues *AbilityByName; // rax
  KeyValues *v4; // r12
  const char *Name; // rax

  if ( pItemName != 0 && *pItemName != 0 )
  {
    v2 = DOTAGameManager();
    AbilityByName = CDOTAGameManager::GetAbilityByName(v2, pItemName);
    v4 = AbilityByName;
    if ( AbilityByName != 0 )
    {
      Name = KeyValues::GetName(AbilityByName);
      return KeyValues::GetString(v4, "BaseClass", Name, 0, 0);
    }
    Warning("Could not find data for item! %s\n", pItemName);
  }
  return 0;
}


// DOTA_CreateItem  (line 89, @0x00000000025b24b0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<CEntityHandle>, AddKeyValue<QAngle>, AddKeyValue<float>, AddKeyValue<int>, AddToTail, Allocate<QAngle>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData<QAngle>, DOTAGameRules, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, NetworkStateChanged, OverrideAllocator, QAngle, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetName, SetPlayerOwnerID, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValue<float>, SetValue<int>, SetValues, SetWorldTransform, Spawn, Vector, operator CDOTA_Item*, operator!, operator(), operator=, operator=<int>, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, GetClassNameForItemName, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CDOTA_PlayerResource::IsValidTeamPlayerID, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release (30 total)
// callers: CDOTA_ActionRunner::PerformAction_CreateItem, CGridNav::DestroyTreesAroundPoint, CDOTA_Item_Tombstone::SpawnChildTombstone, DOTA_VScript_CreateItem, CDOTA_ItemSpawner::InputSpawnItem, CDOTA_Modifier_Gold_Bag_Launch::OnDestroy, CDOTA_Tutorial::ParseLessonKeys, CDOTA_UnitInventory::DisassembleItem, CDOTA_UnitInventory::TryItemCombine, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_ScriptedSpawner::InputTeleportToWaypoint, CDOTA_BaseNPC::AddItem (20 total)
// strings: "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDOTA_Item *__fastcall DOTA_CreateItem(const char *pScriptName, CBaseEntity *pParent, int nOwnerPlayerID)
{
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  const char *ClassNameForItemName; // rax
  const char *v10; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v12; // cx
  CEntityKeyValues *m_pEntityKeyValues; // r12
  CEntityKeyValues *v14; // r12
  int16 m_nQueuedForSpawnCount; // ax
  const QAngle *AbsAngles; // rax
  CEntityKeyValues *v17; // r12
  int m_enabled; // r9d
  EntityNetworkingMode_t m_nMode; // r12d
  const char *v20; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v22; // r14
  CEntityIdentity *v23; // rax
  __int16 v24; // si
  CEntitySpawnerContext<CDOTA_Item> *m_pContext; // r12
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v28; // rdi
  CEntityInstance *v29; // rax
  CDOTA_Item *v30; // r12
  CUtlScratchMemoryPool *v31; // rdi
  CEntityKeyValues *v32; // r13
  const char *m_pszClassname; // rdx
  int v36; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // cx
  __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rdx
  int v40; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v41; // cx
  __int64 v42; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v43; // rdx
  int v44; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v45; // cx
  __int64 v46; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v47; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v49; // cx
  __int64 v50; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v51; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v53; // r14
  unsigned __int64 v54; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v55; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rax
  __int64 v57; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // r14
  uint16 v59; // ax
  vec_t *v60; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rax
  __int16 v62; // dx
  unsigned __int64 v63; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v64; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // rax
  uint16 v67; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rax
  __int16 v69; // dx
  unsigned __int64 v70; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v71; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v73; // rax
  uint16 v74; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v75; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // r12
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
  __int16 v99; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  int v102; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v103; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v104; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v106; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v107; // rdx
  __int64 v108; // rax
  const char *m_pAttributeName; // rsi
  __int16 v110; // ax
  __int16 v111; // ax
  vec_t *v112; // rax
  __int16 v113; // ax
  __int16 v114; // ax
  int v115; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v116; // rax
  uint16 v117; // dx
  __int64 v118; // [rsp+20h] [rbp-120h]
  vec_t vAngles; // [rsp+28h] [rbp-118h]
  __int64 vAnglesa; // [rsp+28h] [rbp-118h]
  __int64 vAnglesb; // [rsp+28h] [rbp-118h]
  int vAngles_8; // [rsp+30h] [rbp-110h]
  int vAngles_8a; // [rsp+30h] [rbp-110h]
  vec_t vAngles_8b; // [rsp+30h] [rbp-110h]
  bool vAngles_8c; // [rsp+30h] [rbp-110h]
  __int64 vAngles_8d; // [rsp+30h] [rbp-110h]
  vec_t pScriptNameb; // [rsp+38h] [rbp-108h]
  CEntityKeyValues *pScriptNamec; // [rsp+38h] [rbp-108h]
  CEntityHandle v130; // [rsp+40h] [rbp-100h] BYREF
  Vector vOrigin; // [rsp+50h] [rbp-F0h] BYREF
  _QWORD v132[2]; // [rsp+60h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_Item> spawner; // [rsp+70h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_410B2D0;
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
  spawner.m_pEntityClass = g_pEntityCDOTA_ItemClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  ClassNameForItemName = GetClassNameForItemName(pScriptName);
  v10 = ClassNameForItemName;
  if ( ClassNameForItemName == 0 )
  {
    v30 = 0;
    goto LABEL_41;
  }
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, ClassNameForItemName);
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, v10, &spawner.m_scriptClassName);
  if ( pParent != 0 )
  {
    m_pEntity = pParent->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(v132[0]) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
    else
    {
      LODWORD(v132[0]) = -1;
    }
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
    {
      m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_158:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
        v99 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
        m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = 1166161001;
        vAngles_8d = v99;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
        v102 = v132[0];
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v103 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v103 = 0;
        v104 = &v103[vAngles_8d];
        m_flags = v104->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v104->m_value.m_flags = m_flags & 0xFFFE;
        v104->m_value.m_uint64 = 0;
        v104->m_value.m_type = 13;
        v104->m_value.m_int = v102;
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v106 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v106 = 0;
        v106[vAngles_8d].m_pAttributeName = 0;
        goto LABEL_10;
      }
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
        if ( v51[v50] == 1166161001 )
          break;
        if ( m_nCount <= ++v50 )
          goto LABEL_158;
      }
      if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v107 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
        v108 = v50;
        m_pAttributeName = v107[v108].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_170:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          goto LABEL_10;
        }
        v115 = v132[0];
      }
      else
      {
        v108 = v50;
        m_pAttributeName = *(v108 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_170;
        v115 = v132[0];
        v107 = 0;
      }
      v116 = &v107[v108];
      v117 = v116->m_value.m_flags;
      if ( (v117 & 1) != 0 )
        v116->m_value.m_flags = v117 & 0xFFFE;
      v116->m_value.m_uint64 = 0;
      v116->m_value.m_type = 13;
      v116->m_value.m_int = v115;
    }
  }
LABEL_10:
  if ( g_pDOTAPlayerResource != 0 && CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, nOwnerPlayerID) )
    vAngles_8 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nOwnerPlayerID);
  else
    vAngles_8 = 4;
  v14 = spawner.m_pEntityKeyValues;
  m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
  if ( m_nQueuedForSpawnCount > 0 )
    goto LABEL_14;
  v36 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v36 > 0 )
  {
    v37 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v38 = 0;
    while ( 1 )
    {
      if ( v37 != 0 )
      {
        v39 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v37 > 9 )
          v39 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v39 = 0;
      }
      if ( v39[v38] == -175874245 )
        break;
      if ( v36 <= ++v38 )
        goto LABEL_102;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v79 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v80 = v38;
      v81 = &v79[v80];
      if ( v79[v80].m_pAttributeName != 0 )
      {
LABEL_128:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v79[v80].m_pAttributeName);
LABEL_129:
        v14 = spawner.m_pEntityKeyValues;
        m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
        goto LABEL_14;
      }
    }
    else
    {
      v80 = v38;
      v79 = 0;
      v81 = v80 * 24;
      if ( *(v80 * 24 + 16) != 0 )
        goto LABEL_128;
    }
    v113 = *(v81 + 10);
    if ( (v113 & 1) != 0 )
      *(v81 + 10) = v113 & 0xFFFE;
    *v81 = 0;
    *(v81 + 8) = 5;
    *v81 = vAngles_8;
    goto LABEL_129;
  }
LABEL_102:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v62 = v14->m_keyHashes.m_nCount - 1;
  v63 = v14->m_keyHashes.m_nAllocated;
  if ( v63 != 0 )
  {
    if ( v63 <= 9 )
      v64 = (&v14->m_keyHashes.m_nAllocAllocated + 1);
    else
      v64 = v14->m_keyHashes.m_pElements;
  }
  else
  {
    v64 = 0;
  }
  v64[(v14->m_keyHashes.m_nCount - 1)] = -175874245;
  vAnglesa = v62;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v14->m_keyValues);
  if ( v14->m_keyValues.m_nAllocated != 0 )
    v65 = v14->m_keyValues.m_pElements;
  else
    v65 = 0;
  v66 = &v65[vAnglesa];
  v67 = v66->m_value.m_flags;
  if ( (v67 & 1) != 0 )
    v66->m_value.m_flags = v67 & 0xFFFE;
  v66->m_value.m_uint64 = 0;
  v66->m_value.m_type = 5;
  v66->m_value.m_int = vAngles_8;
  if ( v14->m_keyValues.m_nAllocated != 0 )
    v68 = v14->m_keyValues.m_pElements;
  else
    v68 = 0;
  v68[vAnglesa].m_pAttributeName = 0;
  v14 = spawner.m_pEntityKeyValues;
  m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
LABEL_14:
  if ( g_pGameRules != 0 )
    vAngles_8a = *&g_pGameRules[18].m_szQuestName[20];
  else
    vAngles_8a = 0;
  if ( m_nQueuedForSpawnCount > 0 )
    goto LABEL_17;
  v40 = v14->m_keyHashes.m_nCount;
  if ( v40 > 0 )
  {
    v41 = v14->m_keyHashes.m_nAllocated;
    v42 = 0;
    while ( 1 )
    {
      if ( v41 != 0 )
      {
        v43 = (&v14->m_keyHashes.m_nAllocAllocated + 1);
        if ( v41 > 9 )
          v43 = v14->m_keyHashes.m_pElements;
      }
      else
      {
        v43 = 0;
      }
      if ( v43[v42] == 706217196 )
        break;
      if ( v40 <= ++v42 )
        goto LABEL_112;
    }
    if ( v14->m_keyValues.m_nAllocated != 0 )
    {
      v76 = v14->m_keyValues.m_pElements;
      v77 = v42;
      v78 = &v76[v77];
      if ( v76[v77].m_pAttributeName != 0 )
      {
LABEL_124:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v76[v77].m_pAttributeName);
LABEL_125:
        v14 = spawner.m_pEntityKeyValues;
        goto LABEL_17;
      }
    }
    else
    {
      v77 = v42;
      v76 = 0;
      v78 = v77 * 24;
      if ( *(v77 * 24 + 16) != 0 )
        goto LABEL_124;
    }
    v110 = *(v78 + 10);
    if ( (v110 & 1) != 0 )
      *(v78 + 10) = v110 & 0xFFFE;
    *v78 = 0;
    *(v78 + 8) = 1;
    *v78 = vAngles_8a;
    goto LABEL_125;
  }
LABEL_112:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v14->m_keyHashes);
  v69 = v14->m_keyHashes.m_nCount - 1;
  v70 = v14->m_keyHashes.m_nAllocated;
  if ( v70 != 0 )
  {
    if ( v70 <= 9 )
      v71 = (&v14->m_keyHashes.m_nAllocAllocated + 1);
    else
      v71 = v14->m_keyHashes.m_pElements;
  }
  else
  {
    v71 = 0;
  }
  v71[(v14->m_keyHashes.m_nCount - 1)] = 706217196;
  vAnglesb = v69;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v14->m_keyValues);
  if ( v14->m_keyValues.m_nAllocated != 0 )
    v72 = v14->m_keyValues.m_pElements;
  else
    v72 = 0;
  v73 = &v72[vAnglesb];
  v74 = v73->m_value.m_flags;
  if ( (v74 & 1) != 0 )
    v73->m_value.m_flags = v74 & 0xFFFE;
  v73->m_value.m_uint64 = 0;
  v73->m_value.m_type = 1;
  v73->m_value.m_int = vAngles_8a;
  if ( v14->m_keyValues.m_nAllocated != 0 )
    v75 = v14->m_keyValues.m_pElements;
  else
    v75 = 0;
  v75[vAnglesb].m_pAttributeName = 0;
  v14 = spawner.m_pEntityKeyValues;
LABEL_17:
  CEntityKeyValues::SetValue(v14, 1094168427, pScriptName);
  vOrigin.x = 0.0;
  vOrigin.y = 0.0;
  vOrigin.z = 0.0;
  if ( pParent != 0 )
  {
    vOrigin = *CBaseEntity::GetAbsOrigin(pParent);
    AbsAngles = CBaseEntity::GetAbsAngles(pParent);
    vAngles_8b = AbsAngles->x;
    vAngles = AbsAngles->y;
    pScriptNameb = AbsAngles->z;
  }
  else
  {
    pScriptNameb = 0.0;
    vAngles = 0.0;
    vAngles_8b = 0.0;
  }
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &vOrigin);
  v17 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_20;
  v44 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v44 <= 0 )
  {
LABEL_92:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v53 = v17->m_keyHashes.m_nCount - 1;
    v54 = v17->m_keyHashes.m_nAllocated;
    if ( v54 != 0 )
    {
      if ( v54 <= 9 )
        v55 = (&v17->m_keyHashes.m_nAllocAllocated + 1);
      else
        v55 = v17->m_keyHashes.m_pElements;
    }
    else
    {
      v55 = 0;
    }
    v55[v53] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v17->m_keyValues);
    if ( v17->m_keyValues.m_nAllocated != 0 )
      v56 = v17->m_keyValues.m_pElements;
    else
      v56 = 0;
    v57 = v53;
    v58 = &v56[v57];
    v118 = v57 * 24;
    v59 = v56[v57].m_value.m_flags;
    if ( (v59 & 1) != 0 )
      v58->m_value.m_flags = v59 & 0xFFFE;
    v58->m_value.m_uint64 = 0;
    v58->m_value.m_type = 39;
    v60 = CEntityVariantAllocator::Allocate(0xCu);
    v58->m_value.m_uint64 = v60;
    *v60 = vAngles_8b;
    v60[1] = vAngles;
    v60[2] = pScriptNameb;
    v58->m_value.m_flags |= 1u;
    if ( v17->m_keyValues.m_nAllocated != 0 )
      v61 = v17->m_keyValues.m_pElements;
    else
      v61 = 0;
    *(&v61->m_pAttributeName + v118) = 0;
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
      if ( v47[v46] == -1164387633 )
        break;
      if ( v44 <= ++v46 )
        goto LABEL_92;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v82 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v83 = v46;
      v84 = &v82[v83];
      if ( v82[v83].m_pAttributeName != 0 )
      {
LABEL_132:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v82[v83].m_pAttributeName);
        goto LABEL_133;
      }
    }
    else
    {
      v83 = v46;
      v82 = 0;
      v84 = v83 * 24;
      if ( *(v83 * 24 + 16) != 0 )
        goto LABEL_132;
    }
    v111 = *(v84 + 10);
    if ( (v111 & 1) != 0 )
      *(v84 + 10) = v111 & 0xFFFE;
    *v84 = 0;
    *(v84 + 8) = 39;
    v112 = CEntityVariantAllocator::Allocate(0xCu);
    *v84 = v112;
    *v112 = vAngles_8b;
    v112[1] = vAngles;
    v112[2] = pScriptNameb;
    *(v84 + 10) |= 1u;
  }
LABEL_133:
  v17 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_20:
    v130.m_Index = -1;
LABEL_21:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    vAngles_8c = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      v17 = spawner.m_pEntityKeyValues;
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
        v130.m_Index = (((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15) | v24 & 0x7FFF;
      }
      else
      {
        v130.m_Index = -1;
      }
      v132[0] = v23;
      v132[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v132,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v22, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( pScriptNamec = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v28 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v28 - 1);
          (pfn)(v28, v22, pScriptNamec);
        }
      }
    }
    if ( vAngles_8c )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    goto LABEL_39;
  }
  v85 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v85 > 0 )
  {
    v86 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v87 = 0;
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
        goto LABEL_142;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v96 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v97 = v87;
      v98 = &v96[v97];
      if ( v96[v97].m_pAttributeName != 0 )
      {
LABEL_154:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v96[v97].m_pAttributeName);
LABEL_155:
        v17 = spawner.m_pEntityKeyValues;
        goto LABEL_156;
      }
    }
    else
    {
      v97 = v87;
      v96 = 0;
      v98 = v97 * 24;
      if ( *(v97 * 24 + 16) != 0 )
        goto LABEL_154;
    }
    v114 = *(v98 + 10);
    if ( (v114 & 1) != 0 )
      *(v98 + 10) = v114 & 0xFFFE;
    *v98 = 0;
    *(v98 + 8) = 13;
    *v98 = -1;
    goto LABEL_155;
  }
LABEL_142:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v89 = v17->m_keyHashes.m_nCount - 1;
  v90 = v17->m_keyHashes.m_nAllocated;
  if ( v90 != 0 )
  {
    if ( v90 <= 9 )
      v91 = (&v17->m_keyHashes.m_nAllocAllocated + 1);
    else
      v91 = v17->m_keyHashes.m_pElements;
  }
  else
  {
    v91 = 0;
  }
  v91[v89] = -1104771937;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v17->m_keyValues);
  if ( v17->m_keyValues.m_nAllocated != 0 )
    v92 = v17->m_keyValues.m_pElements;
  else
    v92 = 0;
  v93 = &v92[v89];
  v94 = v93->m_value.m_flags;
  if ( (v94 & 1) != 0 )
    v93->m_value.m_flags = v94 & 0xFFFE;
  v93->m_value.m_uint64 = 0;
  v93->m_value.m_type = 13;
  v93->m_value.m_int = -1;
  if ( v17->m_keyValues.m_nAllocated != 0 )
    v95 = v17->m_keyValues.m_pElements;
  else
    v95 = 0;
  v95[v89].m_pAttributeName = 0;
  v17 = spawner.m_pEntityKeyValues;
LABEL_156:
  v130.m_Index = -1;
  if ( v17 != 0 )
    goto LABEL_21;
LABEL_39:
  v29 = CEntityHandle::operator CEntityInstance *(&v130);
  v30 = v29;
  if ( nOwnerPlayerID != HIDWORD(v29[20].m_iszPrivateVScripts.u.m_pAsString) )
  {
    (*(v29->_vptr_IHandleEntity + 22))(v29, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v30->m_iPlayerOwnerID.m_Value = nOwnerPlayerID;
  }
LABEL_41:
  v31 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_410B2B0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v31 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v31);
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
  return v30;
}


// DOTA_PrecacheItemByNameSync  (line 119, @0x00000000025b0c60, libserver.so)
// calls: DOTA_PrecacheItemByNameSync
// callers: DOTA_VScript_PrecacheItemByNameSync
void __fastcall DOTA_PrecacheItemByNameSync(const char *pItemName, const CEntityPrecacheContext *pContext)
{
  if ( pContext != 0 )
    DOTA_PrecacheItemByNameSync(pItemName, pContext->m_pManifest);
  else
    DOTA_PrecacheItemByNameSync(pItemName, 0);
}


// DOTA_PrecacheItemByNameSync  (line 124, @0x00000000025b0980, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, GetEntityClass, Init, OverrideAllocator, PrecacheOther, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetClassName, SetName, SetValue, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, GetClassNameForItemName, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValuesModifyScope::Release, UTIL_PrecacheOther, CUtlString::FreeMemoryBlock, CEntityKeyValues::~CEntityKeyValues, operator delete, CEntitySpawnerBase<CDOTA_Item>::~CEntitySpawnerBase (14 total)
// callers: DOTA_PrecacheItemByNameSync
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall DOTA_PrecacheItemByNameSync(const char *pItemName, IEntityResourceManifest *pManifest)
{
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  const char *ClassNameForItemName; // rax
  const char *v9; // r15
  CUtlScratchMemoryPool *v10; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // r12
  int m_nEntitySpawnerDataUseCount; // ecx
  CEntitySpawner<CDOTA_Item> spawner; // [rsp+0h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_410B2D0;
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
  spawner.m_pEntityClass = g_pEntityCDOTA_ItemClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  ClassNameForItemName = GetClassNameForItemName(pItemName);
  v9 = ClassNameForItemName;
  if ( ClassNameForItemName != 0 )
  {
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, ClassNameForItemName);
    spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, v9, &spawner.m_scriptClassName);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, 1094168427, pItemName);
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      UTIL_PrecacheOther(spawner.m_pEntityKeyValues, pManifest);
    }
    v10 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner._vptr_CEntitySpawnerBase = off_410B2B0;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
    if ( v10 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v10);
    }
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
        operator delete(m_pEntityKeyValues);
      }
    }
    if ( spawner.m_scriptClassName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  }
  else
  {
    spawner._vptr_CEntitySpawnerBase = off_410B2D0;
    CEntitySpawnerBase<CDOTA_Item>::~CEntitySpawnerBase(&spawner);
  }
}


// DOTA_PrecacheItemByNameAsync  (line 137, @0x00000000025b0c80, libserver.so)  // inlines: AddSpawnGroupCompletionCallback, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, EntitySpawnerAsyncDesc_t, FastDelegate2, FilterSpawnGroupEntity, GetClassInfo, IsEmpty, OverrideAllocator, PrecacheOther, Purge, QueueContextCallbacks, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, SetClassName, SetMementoFrom, SetName, SetToIdentity, SetValue, SpawnInternal, operator!, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_Item>::Init, GetClassNameForItemName, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CGameEntitySystem::ListenForSpawnGroupToFinish, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix, CGameEntitySystem::ListenForEntityInSpawnGroupToFinish, CUtlString::FreeMemoryBlock, CEntityKeyValues::~CEntityKeyValues (18 total)
// callers: DOTA_VScript_PrecacheItemByNameAsync
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall DOTA_PrecacheItemByNameAsync(const char *pItemName, CBaseEntity *pCallbackListener, __int64 *a3)
{
  const char *ClassNameForItemName; // rax
  const char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *m_pEntityKeyValues; // r12
  bool v12; // zf
  CEntityInstance *v13; // r15
  CEntitySpawnerContext<CDOTA_Item> *m_pContext; // rbx
  __int64 delta; // rcx
  CEntityInstance *m_pCompletionListener; // r8
  __int64 m_pthis; // rax
  CUtlScratchMemoryPool *v18; // rdi
  CEntityKeyValues *v19; // rbx
  int m_nEntitySpawnerDataUseCount; // esi
  SpawnGroupHandle_t pCallbackListenerb; // [rsp+8h] [rbp-1A8h]
  CEntityKeyValues *v24; // [rsp+10h] [rbp-1A0h] BYREF
  CEntityKeyValues *v25; // [rsp+18h] [rbp-198h] BYREF
  __int64 v26[4]; // [rsp+20h] [rbp-190h] BYREF
  int v27; // [rsp+40h] [rbp-170h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v28; // [rsp+48h] [rbp-168h] BYREF
  int v29; // [rsp+60h] [rbp-150h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v30; // [rsp+68h] [rbp-148h] BYREF
  __int64 v31[4]; // [rsp+80h] [rbp-130h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_Item> spawnerDesc; // [rsp+A0h] [rbp-110h] BYREF
  CEntitySpawnerAsync<CDOTA_Item> spawner; // [rsp+D0h] [rbp-E0h] BYREF

  spawner._vptr_CEntitySpawnerBase = off_410B2B0;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = 0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pFilter = 0;
  spawner._vptr_CEntitySpawnerBase = off_410B310;
  spawnerDesc.m_hOwnerSpawnGroup = 0;
  spawnerDesc.m_flTimeoutInterval = 2.0;
  spawnerDesc.m_pContext = 0;
  spawnerDesc.m_pSpawnGroupToWorld = 0;
  spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  spawnerDesc.m_iPriorityLoader = -2;
  spawnerDesc.m_bManualCompletion = 0;
  spawnerDesc.m_worldGroupId.m_nHashCode = 0;
  spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
  CEntitySpawnerAsync<CDOTA_Item>::Init(&spawner, &spawnerDesc);
  ClassNameForItemName = GetClassNameForItemName(pItemName);
  v6 = ClassNameForItemName;
  if ( ClassNameForItemName != 0 )
  {
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, ClassNameForItemName);
    spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, v6, &spawner.m_scriptClassName);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, 1094168427, pItemName);
    v7 = a3[1];
    v8 = *a3;
    v26[2] = a3[2];
    v26[1] = v7;
    v26[0] = v8;
    CGameEntitySystem::ListenForSpawnGroupToFinish(
      g_pGameEntitySystem,
      spawner.m_hSpawnGroupHandle,
      pCallbackListener,
      v26);
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      if ( spawner.m_pEntityClass != 0 )
      {
        HasValue = CEntityKeyValues::HasValue(spawner.m_pEntityKeyValues, -971301790);
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( !HasValue && m_pszClassname != 0 )
        {
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
          m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        }
        (*(*engine + 464LL))(engine, spawner.m_hSpawnGroupHandle, m_pszClassname);
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        if ( spawner.m_pFilter == 0 )
          goto LABEL_13;
        v24 = spawner.m_pEntityKeyValues;
        v28.m_pMemory = &v24;
        v25 = 0;
        v27 = 1;
        v28.m_nAllocationCount = 1;
        v28.m_nGrowSize = 0x40000000;
        v29 = 0;
        v30.m_pMemory = &v25;
        v30.m_nAllocationCount = 1;
        v30.m_nGrowSize = 0x40000000;
        (*(spawner.m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(
          spawner.m_pFilter,
          spawner.m_hSpawnGroupHandle,
          spawner.m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY,
          &v27,
          &v29);
        m_pEntityKeyValues = 0;
        v12 = v29 == 1;
        v29 = 0;
        if ( v12 )
          m_pEntityKeyValues = v25;
        if ( (v30.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v30);
          if ( (v30.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityKeyValues const*,int>::Purge(&v30);
        }
        v27 = 0;
        if ( (v28.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v28);
          if ( (v28.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityKeyValues const*,int>::Purge(&v28);
        }
        if ( m_pEntityKeyValues != 0 )
        {
LABEL_13:
          SetIdentityMatrix(&spawnerDesc);
          v13 = (*(spawner.m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
                  spawner.m_pLoadingSpawnGroup,
                  spawner.m_hOwnerSpawnGroup,
                  &spawnerDesc,
                  1,
                  m_pEntityKeyValues);
          if ( v13 != 0 )
          {
            m_pContext = spawner.m_pContext;
            for ( pCallbackListenerb = spawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
            {
              m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
              if ( m_pthis != 0 || m_pContext->m_callback.m_Closure.m_pFunction.__pfn != 0 )
              {
                delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
                v31[1] = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
                v31[0] = m_pthis;
                m_pCompletionListener = m_pContext->m_pCompletionListener;
                v31[2] = delta;
                CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                  g_pGameEntitySystem,
                  pCallbackListenerb,
                  v13,
                  m_pEntityKeyValues,
                  m_pCompletionListener,
                  v31);
              }
            }
          }
        }
      }
      else
      {
        CEntityKeyValues::HasValue(spawner.m_pEntityKeyValues, -971301790);
      }
    }
    v18 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner._vptr_CEntitySpawnerBase = off_410B2B0;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
    if ( v18 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v18);
    }
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v19 = spawner.m_pEntityKeyValues;
      if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v19);
        operator delete(v19);
      }
    }
    if ( spawner.m_scriptClassName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  }
  else
  {
    spawner._vptr_CEntitySpawnerBase = off_410B2F0;
    CEntitySpawnerBase<CDOTA_Item>::~CEntitySpawnerBase(&spawner);
  }
}


// DOTAItemGiveCompletion  (line 152, @0x00000000025b61b0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Construct<CUtlString>, DOTAGameRules, Element, GetAbilitiesKeyValues, GrowMemory, IsAddOnGame, SplitString, V_strncmp<int>, V_strncpy<int>, _V_strstr, operator[], strstr, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector
// calls: _V_strncpy, strchr, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), DOTAGameManager, KeyValues::GetFirstSubKey, KeyValues::GetName, _V_strncmp, strstr, KeyValues::GetNextKey, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, CUtlString::Format (15 total)
// callers: DOTADetermineItemToGive
// strings: "item_"
void __fastcall DOTAItemGiveCompletion(
        const char *command,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  char *v3; // rax
  CDOTAGameManager *v4; // rax
  const KeyValues *m_pkvAddOnAbilities; // rdi
  KeyValues *i; // r13
  const char *Name; // rbx
  char **m_pMemory; // r15
  char **v9; // r12
  int m_Size; // r12d
  CUtlString *v11; // rax
  CUtlString *v12; // rdi
  CUtlStringList lstKeywords; // [rsp+20h] [rbp-160h] BYREF
  char pszCommand[264]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+148h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
  {
    _V_strncpy(pszCommand, command, 256);
    v3 = strchr(pszCommand, 32);
    if ( v3 != 0 )
    {
      *v3 = 0;
      lstKeywords.m_Size = 0;
      lstKeywords.m_Memory.m_pMemory = 0;
      lstKeywords.m_Memory.m_nAllocationCount = 0;
      lstKeywords.m_Memory.m_nGrowSize = 0;
      V_SplitString(v3 + 1, " ", &lstKeywords);
      v4 = DOTAGameManager();
      if ( v4->m_bCustomGame || v4->m_bEventGame )
        m_pkvAddOnAbilities = v4->m_pkvAddOnAbilities;
      else
        m_pkvAddOnAbilities = v4->m_pkvAbilities;
      for ( i = KeyValues::GetFirstSubKey(m_pkvAddOnAbilities); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Name = KeyValues::GetName(i);
        if ( _V_strncmp(Name, "item_", 5) == 0 )
        {
          if ( lstKeywords.m_Size <= 0 )
          {
LABEL_15:
            m_Size = commands->m_Size;
            if ( commands->m_Size == commands->m_Memory.m_nAllocationCount )
              CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
            ++commands->m_Size;
            v11 = &commands->m_Memory.m_pMemory[m_Size];
            if ( v11 != 0 )
            {
              v11->m_pString = 0;
              v12 = &commands->m_Memory.m_pMemory[m_Size];
            }
            else
            {
              v12 = 0;
            }
            CUtlString::Format(v12, "%s %s", pszCommand, Name);
          }
          else
          {
            m_pMemory = lstKeywords.m_Memory.m_pMemory;
            v9 = &lstKeywords.m_Memory.m_pMemory[(lstKeywords.m_Size - 1) + 1];
            while ( strstr(Name, *m_pMemory) != 0 )
            {
              if ( ++m_pMemory == v9 )
                goto LABEL_15;
            }
          }
        }
      }
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&lstKeywords);
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&lstKeywords);
    }
  }
}


// DOTADetermineItemToGive  (line 201, @0x00000000025b6420, libserver.so)  // inlines: AddToHead, Arg, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, GetCommandString, V_strlen, _V_strcmp, _V_strstr, operator char const*, operator[], strstr, ~CUtlString, ~CUtlVector
// calls: DOTAItemGiveCompletion, CUtlString::Get, strlen, CUtlString::Set, CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlString::operator+=, strcmp, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Remove, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertBefore, strstr, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddVectorToTail<CUtlMemory<CUtlString, int> > (15 total)
// callers: dota_create_item, dota_bot_give_item
// strings: "item_", " item_recipe_"
bool __fastcall DOTADetermineItemToGive(const CCommand *const args, CUtlString *const item)
{
  char *m_pArgSBuffer; // rax
  int m_nArgc; // edx
  const char *v4; // rdi
  int v5; // r15d
  const char *v6; // rax
  int v7; // r13d
  int v8; // ebx
  __int64 v9; // r14
  __int64 i; // r12
  int v11; // eax
  const char *v12; // rax
  __int64 v13; // r14
  const char *v14; // rax
  const char *v15; // rbx
  int v16; // ebx
  __int64 v17; // r12
  const char *v18; // rax
  const char *v19; // r13
  const char *v20; // rax
  int v21; // ebx
  __int64 v22; // r13
  const char *v23; // rax
  const char *v24; // rax
  const char *v25; // rax
  char *v26; // rax
  bool v27; // bl
  CUtlString *v31; // [rsp+28h] [rbp-98h]
  CUtlString alternateRequestedName; // [rsp+30h] [rbp-90h] BYREF
  CUtlString strCompletion_0; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > strCompletions; // [rsp+50h] [rbp-70h] BYREF
  CUtlString strCompletion; // [rsp+70h] [rbp-50h] BYREF
  __int64 v36; // [rsp+78h] [rbp-48h]
  int v37; // [rsp+80h] [rbp-40h]
  int v38; // [rsp+84h] [rbp-3Ch]

  m_pArgSBuffer = args->m_pArgSBuffer;
  m_nArgc = args->m_nArgc;
  v4 = "";
  strCompletions.m_Size = 0;
  strCompletions.m_Memory.m_pMemory = 0;
  strCompletions.m_Memory.m_nAllocationCount = 0;
  strCompletions.m_Memory.m_nGrowSize = 0;
  if ( m_nArgc != 0 )
    v4 = m_pArgSBuffer;
  DOTAItemGiveCompletion(v4, &strCompletions);
  if ( strCompletions.m_Size == 0 )
  {
    v27 = 0;
    goto LABEL_42;
  }
  v5 = strCompletions.m_Size - 1;
  if ( strCompletions.m_Size - 1 >= 0 )
  {
    v31 = (8LL * v5);
    do
    {
      v6 = CUtlString::Get((strCompletions.m_Memory.m_pMemory + v31));
      if ( v6 != 0 )
        v7 = strlen(v6);
      else
        v7 = 0;
      v8 = v5;
      v9 = v5;
      for ( i = &v31[-1]; --v8 != -1; i -= 8 )
      {
        v12 = CUtlString::Get((strCompletions.m_Memory.m_pMemory + i));
        if ( v12 != 0 )
          v11 = strlen(v12);
        else
          v11 = 0;
        if ( v7 < v11 )
        {
          v7 = v11;
          v9 = v8;
        }
      }
      if ( v9 != v5 )
      {
        v13 = v9;
        strCompletion.m_pString = 0;
        v14 = CUtlString::Get(&strCompletions.m_Memory.m_pMemory[v13]);
        CUtlString::Set(&strCompletion, v14);
        CUtlString::operator=(&strCompletions.m_Memory.m_pMemory[v13], (strCompletions.m_Memory.m_pMemory + v31));
        CUtlString::operator=((strCompletions.m_Memory.m_pMemory + v31), &strCompletion);
        if ( strCompletion.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&strCompletion);
      }
      --v5;
      --v31;
    }
    while ( v5 != -1 );
  }
  v15 = "";
  if ( args->m_nArgc > 1 )
    v15 = args->m_ppArgv[1];
  alternateRequestedName.m_pString = 0;
  CUtlString::Set(&alternateRequestedName, "item_");
  CUtlString::operator+=(&alternateRequestedName, v15);
  v16 = strCompletions.m_Size - 1;
  if ( strCompletions.m_Size - 1 >= 0 )
  {
    v17 = v16;
    while ( 1 )
    {
      strCompletion.m_pString = 0;
      v18 = CUtlString::Get(&strCompletions.m_Memory.m_pMemory[v17]);
      CUtlString::Set(&strCompletion, v18);
      v19 = CUtlString::Get(&alternateRequestedName);
      v20 = CUtlString::Get(&strCompletion);
      if ( strcmp(v20 + 17, v19) == 0 )
        break;
      if ( strCompletion.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&strCompletion);
      --v16;
      --v17;
      if ( v16 == -1 )
        goto LABEL_30;
    }
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::Remove(&strCompletions, v16);
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::InsertBefore(&strCompletions, 0, &strCompletion);
    if ( strCompletion.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strCompletion);
LABEL_30:
    LODWORD(strCompletion.m_pString) = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v21 = strCompletions.m_Size - 1;
    v22 = strCompletions.m_Size - 1;
    if ( strCompletions.m_Size - 1 < 0 )
      goto LABEL_38;
    while ( 1 )
    {
      strCompletion_0.m_pString = 0;
      v23 = CUtlString::Get(&strCompletions.m_Memory.m_pMemory[v22]);
      CUtlString::Set(&strCompletion_0, v23);
      v24 = CUtlString::Get(&strCompletion_0);
      if ( strstr(v24, " item_recipe_") != 0 )
        break;
      if ( strCompletion_0.m_pString != 0 )
      {
        --v21;
        --v22;
        CUtlString::FreeMemoryBlock(&strCompletion_0);
        if ( v21 == -1 )
          goto LABEL_38;
      }
      else
      {
LABEL_34:
        --v21;
        --v22;
        if ( v21 == -1 )
          goto LABEL_38;
      }
    }
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::Remove(&strCompletions, v21);
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::InsertBefore(&strCompletion, 0, &strCompletion_0);
    if ( strCompletion_0.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strCompletion_0);
    goto LABEL_34;
  }
  LODWORD(strCompletion.m_pString) = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
LABEL_38:
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddVectorToTail<CUtlMemory<CUtlString,int>>(
    &strCompletions,
    &strCompletion);
  v25 = CUtlString::Get(strCompletions.m_Memory.m_pMemory);
  v26 = strchr(v25, 32);
  if ( v26 != 0 )
  {
    CUtlString::operator=(item, v26 + 1);
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::~CUtlVectorBase(&strCompletion);
  if ( alternateRequestedName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&alternateRequestedName);
LABEL_42:
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::~CUtlVectorBase(&strCompletions);
  return v27;
}


// dota_create_item  (line 273, @0x00000000025b68d0, libserver.so)  // inlines: CEntityHandle, CUtlString, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*, ~CUtlString
// calls: CDOTAGamerules::IsCheatMode, DOTADetermineItemToGive, CUtlString::FreeMemoryBlock, UTIL_GetCommandClient, CUtlString::Get, CDOTA_BaseNPC::AddItem, _Unwind_Resume
void __fastcall dota_create_item(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // edx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CEntityInstance *v10; // rax
  const char *v11; // rax
  unsigned __int16 v12; // di
  int v13; // esi
  int v14; // ecx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // rdi
  CEntityInstance *m_pInstance; // rdx
  CUtlString itemToGive; // [rsp+10h] [rbp-30h] BYREF

  if ( CDOTAGamerules::IsCheatMode() && args->m_nArgc > 1 )
  {
    itemToGive.m_pString = 0;
    if ( !DOTADetermineItemToGive(args, &itemToGive) )
      goto LABEL_4;
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient == 0 || (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) == 0 )
      goto LABEL_4;
    if ( v4[1].m_iMaxHealth.m_Value == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = v4[1].m_iMaxHealth.m_Value & 0x7FFF;
      v6 = v5;
    }
    v7 = (v4[1].m_iMaxHealth.m_Value >> 15 << 15) | v5 & 0x7FFF;
    if ( (v7 + 2) > 1
      && (v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9]) != 0
      && (v9 = &v8[v6 & 0x1FF]) != 0
      && v7 == v9->m_EHandle.m_Index
      && (v10 = v9->m_pInstance) != 0
      && BYTE3(v10[7]._vptr_IHandleEntity) != 0
      && (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      v11 = CUtlString::Get(&itemToGive);
      if ( v4[1].m_iMaxHealth.m_Value == -1 )
      {
        v12 = 0x7FFF;
        v13 = 0x7FFF;
      }
      else
      {
        v12 = v4[1].m_iMaxHealth.m_Value & 0x7FFF;
        v13 = v12;
      }
      v14 = (v4[1].m_iMaxHealth.m_Value >> 15 << 15) | v12 & 0x7FFF;
      if ( (v14 + 2) > 1
        && (v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9]) != 0
        && (v16 = &v15[v13 & 0x1FF]) != 0
        && v14 == v16->m_EHandle.m_Index
        && (m_pInstance = v16->m_pInstance) != 0
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        v17 = 0;
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          v17 = m_pInstance;
      }
      else
      {
        v17 = 0;
      }
      CDOTA_BaseNPC::AddItem(v17, v11, 3, -1, 0);
      if ( itemToGive.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&itemToGive);
    }
    else
    {
LABEL_4:
      if ( itemToGive.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&itemToGive);
    }
  }
}


// CDOTA_Item::YouForgotToImplementOrDeclareServerClass  (line 321, @0x00000000025936d0, libserver.so)
int __fastcall CDOTA_Item::YouForgotToImplementOrDeclareServerClass(CDOTA_Item *const this)
{
  return 0;
}


// CDOTA_Item::GetServerClass  (line 321, @0x0000000002599790, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item::GetServerClass(CDOTA_Item *const this)
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


// CDOTA_Item::GetDataDescMap  (line 323, @0x00000000025936e0, libserver.so)
// globals: CDOTA_Item::m_DataMap
datamap_t *__fastcall CDOTA_Item::GetDataDescMap(CDOTA_Item *const this)
{
  return &CDOTA_Item::m_DataMap;
}


// CDOTA_Item::AddDatadescMetadataKeys  (line 323, @0x00000000025a4290, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_Item::GetEntityClass(void)
void __fastcall CDOTA_Item::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_Item::GetEntityClass);
}


// CDOTA_Item::GetBaseMap  (line 323, @0x00000000025a42b0, libserver.so)
datamap_t *__cdecl CDOTA_Item::GetBaseMap()
{
  return &CDOTABaseAbility::m_DataMap;
}


// DataMapInit<CDOTA_Item>  (line 323, @0x00000000025a42c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "CDOTA_Item"
// globals: `guard variable for'DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder, CDOTA_Item::GetEntityClass(void), CDOTA_Item::m_DataMap, DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_Item>(CDOTA_Item *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder.m_pszBase = "CDOTA_Item";
    DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_Item>(CDOTA_Item *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_Item::m_DataMap.dataNumFields = 5;
  CDOTA_Item::m_DataMap.baseMap = &CDOTABaseAbility::m_DataMap;
  CDOTA_Item::m_DataMap.dataDesc = &DataMapInit<CDOTA_Item>(CDOTA_Item *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_Item::m_DataMap, CDOTA_Item::GetEntityClass);
  return &CDOTA_Item::m_DataMap;
}


// CDOTA_Item::CDOTA_Item  (line 333, @0x00000000025a4390, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, NetworkStateChanged, Set, operator=, operator=<bool>, operator=<float>
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
// callers: CDOTA_Item::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_Book::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_BookStrength::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_BookAgility::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_Tombstone::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_Lua::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Item_DataDriven::CDOTA_Item_DataDriven (283 total)
void __fastcall CDOTA_Item::CDOTA_Item(CDOTA_Item *const this)
{
  bool v2; // zf
  __int64 v3; // xmm0_8

  CDOTABaseAbility::CDOTABaseAbility(this);
  this->_vptr_IHandleEntity = &off_410B330;
  this->m_bCombinable.m_Value = 0;
  this->m_bPermanent.m_Value = 0;
  this->m_bStackable.m_Value = 0;
  this->m_bRecipe.m_Value = 0;
  this->m_iSharability.m_Value = 0;
  this->m_bDroppable.m_Value = 0;
  this->m_bPurchasable.m_Value = 0;
  this->m_bSellable.m_Value = 0;
  this->m_bRequiresCharges.m_Value = 0;
  this->m_bKillable.m_Value = 0;
  this->m_bDisassemblable.m_Value = 0;
  this->m_bAlertable.m_Value = 0;
  this->m_iInitialCharges.m_Value = 0;
  this->m_bCastOnPickup.m_Value = 0;
  this->m_bCanBeUsedOutOfInventory.m_Value = 0;
  this->m_bItemEnabled.m_Value = 0;
  this->m_flEnableTime.m_Value = 0.0;
  this->m_flPurchaseTime.m_Value = 0.0;
  this->m_flAssembledTime.m_Value = 0.0;
  this->m_iCurrentCharges.m_Value = 0;
  this->m_iSecondaryCharges.m_Value = 0;
  this->m_bCombineLocked.m_Value = 0;
  this->m_hContainer.m_Index = -1;
  this->m_iPlayerOwnerID.m_Value = 0;
  this->m_bPurchasedWhileDead.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x3C4u, -1, -1);
  v2 = !this->m_bPurchasedWhileDead.m_Value;
  this->m_flPurchaseTime.m_Value = -1.0;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bPurchasedWhileDead.m_Value = 0;
  }
  v3 = 3212836864LL;
  if ( this->m_flAssembledTime.m_Value != -1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 968, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_flAssembledTime.m_Value = -1.0;
  }
  v2 = !this->m_bCanBeUsedOutOfInventory.m_Value;
  this->m_bHasCommentedOnEquip = 0;
  this->m_hContainer.m_Index = -1;
  this->m_iDeclarationFlags = 0;
  this->m_bCreatedByDisassemble = 0;
  this->m_bHasMixedOwnership = 0;
  this->m_nCombineVersion = 0;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 945, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3);
    this->m_bCanBeUsedOutOfInventory.m_Value = 0;
  }
  if ( this->m_bItemEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 946, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3);
    this->m_bItemEnabled.m_Value = 0;
  }
  if ( this->m_flEnableTime.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 948, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flEnableTime.m_Value = 0.0;
  }
  this->m_CastAnimation = -1;
  this->m_bIsClonedItemProxy = 0;
}


// CDOTA_Item::~CDOTA_Item  (line 351, @0x00000000025939b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
// callers: CDOTA_Item_GreaterClarity::~CDOTA_Item_GreaterClarity, CDOTA_Item_UpgradedMortar::~CDOTA_Item_UpgradedMortar, CDOTA_Item_UpgradedBarricade::~CDOTA_Item_UpgradedBarricade, CDOTA_Item_BagOfGold::~CDOTA_Item_BagOfGold, CDOTA_Item_Nian_Flag_Trap::~CDOTA_Item_Nian_Flag_Trap, CDOTA_Ability_Firework_Mine::~CDOTA_Ability_Firework_Mine, CDOTA_Item_ForceBoots::~CDOTA_Item_ForceBoots, CDOTA_Item_JumpBoots::~CDOTA_Item_JumpBoots, CDOTA_Item_Recipe_Vermillion_Robe::~CDOTA_Item_Recipe_Vermillion_Robe, CDOTA_Item_Vermillion_Robe::~CDOTA_Item_Vermillion_Robe, CDOTA_Item_Recipe_AbyssalBlade::~CDOTA_Item_Recipe_AbyssalBlade, CDOTA_Item_AbyssalBlade::~CDOTA_Item_AbyssalBlade (275 total)
void __fastcall CDOTA_Item::~CDOTA_Item(CDOTA_Item *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item::~CDOTA_Item  (line 351, @0x00000000025939d0, libserver.so)  // inlines: ~CDOTA_Item
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Item::~CDOTA_Item(CDOTA_Item *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item::Think  (line 355, @0x0000000002596360, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetItemEnableTime, NetworkStateChanged, Set, SetItemPendingEnable, operator=<bool>
// calls: CDOTABaseAbility::Think, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemSlotInInventory
// callers: CDOTA_Item_Tombstone::Think, CDOTA_Item_Aegis::Think, CDOTA_Item_Flying_Courier::Think, CDOTA_Item_EmptyBottle::Think
void __fastcall CDOTA_Item::Think(CDOTA_Item *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *Inventory; // rax

  CDOTABaseAbility::Think(this);
  if ( this->m_bItemEnabled.m_Value )
  {
    v2 = 0.0;
    if ( g_pGameRules != 0 )
      v2 = *&g_pGameRules[18].m_szQuestName[20];
    if ( v2 > this->m_flEnableTime.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 946, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bItemEnabled.m_Value = 0;
      Caster = CDOTABaseAbility::GetCaster(this);
      Inventory = CDOTA_BaseNPC::GetInventory(Caster);
      if ( CDOTA_UnitInventory::FindItemSlotInInventory(Inventory, this, 3) <= 5 )
        (*(this->_vptr_IHandleEntity + 333))(this);
    }
  }
}


// CDOTA_Item::Spawn  (line 372, @0x00000000025a9a00, libserver.so)  // inlines: ActivityList_IndexForName, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, DOTAGameRules, FStrEq, GetAbilityName, GetBool, GetDisassembleRule, GetGameTime, NetworkStateChanged, PurgeAndDeleteElements, RemoveAll, RemoveEFlags, Set, SetAssembledTime, _V_strcmp, operator=<EShareAbility>, operator=<bool>, operator=<float>, operator=<int>, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector
// calls: CDOTABaseAbility::Spawn, CCollisionProperty::UpdateLocateHandle, DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt, CDOTABaseAbility::InitBaseValues, KeyValues::GetString, CDOTA_Item::SetCurrentCharges, Warning, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), V_StripTrailingWhitespace, V_StripLeadingWhitespace (16 total)
// callers: CDOTA_Item_BagOfGold::Spawn, CDOTA_Item_Tombstone::Spawn, CDOTA_Item_DataDriven::Spawn, CDOTA_Item_Lua::Spawn, CDOTA_Item_BootsOfTravel::Spawn
// strings: "<NoAbilityName>", "ItemCombinable", "ItemPermanent", "ItemRecipe", "ItemDroppable", "ItemPurchasable" (23 total)
void __fastcall CDOTA_Item::Spawn(CDOTA_Item *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty *m_pCollision; // rdi
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v5; // r12
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v7; // rax
  KeyValues *AbilityByName; // r12
  void (__fastcall *v9)(CDOTA_Item *const, _QWORD); // r13
  unsigned int Int; // eax
  bool v11; // r13
  bool v12; // r13
  bool v13; // r13
  bool v14; // r13
  bool v15; // r13
  bool v16; // r13
  bool v17; // r13
  bool v18; // r13
  bool v19; // r13
  bool v20; // r13
  int v21; // r13d
  bool v22; // r13
  bool v23; // r13
  const char *String; // rsi
  Activity v25; // eax
  char *v26; // rax
  char *v27; // rax
  const char *v28; // rax
  int m_Value; // esi
  float v30; // xmm0_4
  DOTAAbilityData_t *v31; // rax
  const char *v32; // rsi
  const char *v33; // rax
  char *v34; // rax
  __int64 v35; // r12
  int v36; // r13d
  int v37; // eax
  __int64 v38; // r13
  int v39; // r12d
  char *v40; // rsi
  char *v41; // rax
  float v42; // [rsp+Ch] [rbp-54h]
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  CDOTABaseAbility::Spawn(this, pKeyValues);
  m_pCollision = this->m_pCollision;
  this->m_iEFlags &= ~0x40000u;
  if ( m_pCollision != 0 )
    CCollisionProperty::UpdateLocateHandle(m_pCollision);
  m_pAbilityData = this->m_pAbilityData;
  v5 = "<NoAbilityName>";
  this->m_iState = 0;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v5 = m_pszAbilityName;
  }
  v7 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v7, v5);
  if ( AbilityByName != 0 )
  {
    v9 = *(this->_vptr_IHandleEntity + 212);
    Int = KeyValues::GetInt(AbilityByName, "ItemBaseLevel", 1);
    v9(this, Int);
    CDOTABaseAbility::InitBaseValues(this);
    v11 = KeyValues::GetInt(AbilityByName, "ItemCombinable", 0) != 0;
    if ( v11 != this->m_bCombinable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bCombinable.m_Value = v11;
    }
    v12 = KeyValues::GetInt(AbilityByName, "ItemPermanent", 0) != 0;
    if ( v12 != this->m_bPermanent.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 921, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bPermanent.m_Value = v12;
    }
    v13 = KeyValues::GetInt(AbilityByName, "ItemStackable", 0) != 0;
    if ( v13 != this->m_bStackable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 922, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bStackable.m_Value = v13;
    }
    v14 = KeyValues::GetInt(AbilityByName, "ItemRecipe", 0) != 0;
    if ( v14 != this->m_bRecipe.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 923, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bRecipe.m_Value = v14;
    }
    v15 = KeyValues::GetInt(AbilityByName, "ItemDroppable", 0) != 0;
    if ( v15 != this->m_bDroppable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bDroppable.m_Value = v15;
    }
    v16 = KeyValues::GetInt(AbilityByName, "ItemPurchasable", 0) != 0;
    if ( v16 != this->m_bPurchasable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 929, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bPurchasable.m_Value = v16;
    }
    v17 = KeyValues::GetInt(AbilityByName, "ItemSellable", 0) != 0;
    if ( v17 != this->m_bSellable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bSellable.m_Value = v17;
    }
    v18 = KeyValues::GetInt(AbilityByName, "ItemRequiresCharges", 0) != 0;
    if ( v18 != this->m_bRequiresCharges.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 931, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bRequiresCharges.m_Value = v18;
    }
    v19 = KeyValues::GetInt(AbilityByName, "ItemKillable", 0) != 0;
    if ( v19 != this->m_bKillable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 932, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bKillable.m_Value = v19;
    }
    v20 = KeyValues::GetInt(AbilityByName, "ItemAlertable", 0) != 0;
    if ( v20 != this->m_bAlertable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 936, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bAlertable.m_Value = v20;
    }
    v21 = KeyValues::GetInt(AbilityByName, "ItemInitialCharges", 0);
    if ( v21 != this->m_iInitialCharges.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 940, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iInitialCharges.m_Value = v21;
    }
    v22 = KeyValues::GetInt(AbilityByName, "ItemCastOnPickup", 0) != 0;
    if ( v22 != this->m_bCastOnPickup.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bCastOnPickup.m_Value = v22;
    }
    v23 = KeyValues::GetInt(AbilityByName, "ItemCanBeUsedWithoutInventory", 0) != 0;
    if ( v23 != this->m_bCanBeUsedOutOfInventory.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 945, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bCanBeUsedOutOfInventory.m_Value = v23;
    }
    this->m_bIsTempestDoubleClonable = KeyValues::GetInt(AbilityByName, "IsTempestDoubleClonable", 1) != 0;
    String = KeyValues::GetString(AbilityByName, "ItemCastAnimation", 0, 0, 0);
    if ( String != 0 )
    {
      v25 = -1;
      if ( g_pAnimationSystem != 0 )
        v25 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, String);
      this->m_CastAnimation = v25;
    }
    v26 = KeyValues::GetString(AbilityByName, "ItemDisassembleRule", "", 0, 0);
    if ( v26 == "DOTA_ITEM_DISASSEMBLE_ALWAYS" || strcmp(v26, "DOTA_ITEM_DISASSEMBLE_ALWAYS") == 0 )
    {
      if ( !this->m_bDisassemblable.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 933, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bDisassemblable.m_Value = 1;
      }
    }
    else
    {
      if ( v26 == "DOTA_ITEM_DISASSEMBLE_NEVER" || strcmp(v26, "DOTA_ITEM_DISASSEMBLE_NEVER") == 0 )
      {
        if ( this->m_bDisassemblable.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 933, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bDisassemblable.m_Value = 0;
        }
        this->m_bNeverDisassemble = 1;
        goto LABEL_44;
      }
      if ( this->m_bDisassemblable.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 933, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bDisassemblable.m_Value = 0;
      }
    }
    this->m_bNeverDisassemble = 0;
LABEL_44:
    if ( this->m_iSharability.m_Value != 2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iSharability.m_Value = 2;
    }
    this->m_bStackWithOtherOwners = 0;
    v27 = KeyValues::GetString(AbilityByName, "ItemShareability", "", 0, 0);
    if ( v27 == "ITEM_PARTIALLY_SHAREABLE" || strcmp(v27, "ITEM_PARTIALLY_SHAREABLE") == 0 )
    {
      if ( this->m_iSharability.m_Value != 1 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iSharability.m_Value = 1;
      }
    }
    else
    {
      v34 = KeyValues::GetString(AbilityByName, "ItemShareability", "", 0, 0);
      if ( v34 == "ITEM_FULLY_SHAREABLE" || strcmp(v34, "ITEM_FULLY_SHAREABLE") == 0 )
      {
        if ( this->m_iSharability.m_Value != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iSharability.m_Value = 0;
        }
      }
      else
      {
        v41 = KeyValues::GetString(AbilityByName, "ItemShareability", "", 0, 0);
        if ( v41 == "ITEM_FULLY_SHAREABLE_STACKING" || strcmp(v41, "ITEM_FULLY_SHAREABLE_STACKING") == 0 )
        {
          if ( this->m_iSharability.m_Value != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_iSharability.m_Value = 0;
          }
          this->m_bStackWithOtherOwners = 1;
        }
      }
    }
    this->m_iDeclarationFlags = 0;
    v28 = KeyValues::GetString(AbilityByName, "ItemDeclarations", "", 0, 0);
    if ( v28 != 0 && *v28 != 0 )
    {
      szValues.m_Size = 0;
      szValues.m_Memory.m_pMemory = 0;
      szValues.m_Memory.m_nAllocationCount = 0;
      szValues.m_Memory.m_nGrowSize = 0;
      V_SplitString(v28, &unk_34E9DAD, &szValues);
      if ( szValues.m_Size > 0 )
      {
        v35 = 0;
        v36 = 0;
        do
        {
          V_StripTrailingWhitespace(szValues.m_Memory.m_pMemory[v35]);
          V_StripLeadingWhitespace(szValues.m_Memory.m_pMemory[v35]);
          v37 = StringFieldToInt(szValues.m_Memory.m_pMemory[v35], g_DOTAItemDeclarationFlags, 3, -1, 0);
          if ( v37 != -1 )
            this->m_iDeclarationFlags |= 1 << v37;
          ++v36;
          ++v35;
        }
        while ( szValues.m_Size > v36 );
        if ( szValues.m_Size > 0 )
        {
          v38 = 0;
          v39 = 0;
          do
          {
            ++v39;
            v40 = szValues.m_Memory.m_pMemory[v38++];
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v40);
          }
          while ( v39 < szValues.m_Size );
        }
      }
      szValues.m_Size = 0;
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szValues);
    }
    m_Value = this->m_iInitialCharges.m_Value;
    this->m_bTemporarilyUncombinable = 0;
    CDOTA_Item::SetCurrentCharges(this, m_Value);
    if ( !this->m_bDisassemblable.m_Value && this->m_bNeverDisassemble )
    {
      if ( this->m_flAssembledTime.m_Value != 0.0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 968, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
        this->m_flAssembledTime.m_Value = 0.0;
      }
    }
    else
    {
      v30 = 0.0;
      if ( g_pGameRules != 0 )
        v30 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v30 != this->m_flAssembledTime.m_Value )
      {
        v42 = v30;
        (*(this->_vptr_IHandleEntity + 22))(this, 968, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flAssembledTime.m_Value = v42;
      }
    }
    return;
  }
  v31 = this->m_pAbilityData;
  v32 = "<NoAbilityName>";
  if ( v31 != 0 )
  {
    v33 = v31->m_pszAbilityName;
    if ( v33 != 0 )
      v32 = v33;
  }
  Warning("Unknown object spawn! %s\n", v32);
}


// CDOTA_Item::Precache  (line 480, @0x00000000025a53c0, libserver.so)  // inlines: GetAbilityData, GetAbilityKeyValues
// calls: CDOTABaseAbility::Precache, CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CDOTA_Item::GetWorldDropSound, CBaseEntity::PrecacheScriptSound, KeyValues::GetString, CBaseEntity::PrecacheModel, CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Item_GreaterClarity::Precache, CDOTA_Item_Tombstone::Precache, CDOTA_Item_DataDriven::Precache, CDOTA_Item_Clarity::Precache, CDOTA_Item_EmptyBottle::Precache, CDOTA_Item_Flask::Precache, CDOTA_Item_Tango::Precache, CDOTA_Item_Sphere::Precache, CDOTA_Item_Tango_Single::Precache
// strings: "ModelAlternate"
void __fastcall CDOTA_Item::Precache(CDOTA_Item *const this, const CEntityPrecacheContext *pContext)
{
  bool IsPrecacheAllowed; // r13
  const char *WorldDropSound; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  KeyValues *m_pKVData; // r12
  const char *String; // rax
  const char *v9; // rax

  CDOTABaseAbility::Precache(this, pContext);
  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  WorldDropSound = CDOTA_Item::GetWorldDropSound(this);
  CBaseEntity::PrecacheScriptSound(WorldDropSound, pContext);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 || (CDOTABaseAbility::LoadAbilityData(this, 0), (m_pAbilityData = this->m_pAbilityData) != 0) )
  {
    m_pKVData = m_pAbilityData->m_pKVData;
    if ( m_pKVData != 0 )
    {
      String = KeyValues::GetString(m_pKVData, "Model", 0, 0, 0);
      if ( String != 0 )
        CBaseEntity::PrecacheModel(String, pContext);
      v9 = KeyValues::GetString(m_pKVData, "ModelAlternate", 0, 0, 0);
      if ( v9 != 0 )
        CBaseEntity::PrecacheModel(v9, pContext);
    }
  }
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CDOTA_Item::AddCharges  (line 508, @0x00000000025a4620, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<int>
// callers: CDOTA_Item::CombineStacks, CDOTA_Modifier_Item_Bloodstone::OnDeath, CDOTA_Item_MagicWand::IncomingCombineFrom, CDOTA_Modifier_Item_MagicWand::OnAbilityExecuted, CDOTA_Modifier_Item_MagicStick::OnAbilityExecuted, CDOTA_Item_Urn_Of_Shadows::OnHeroDiedNearby
void __fastcall CDOTA_Item::AddCharges(CDOTA_Item *const this, int iCharges)
{
  int m_Value; // eax
  int v4; // r12d

  m_Value = this->m_iCurrentCharges.m_Value;
  v4 = m_Value + iCharges;
  if ( m_Value != m_Value + iCharges )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 972, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCurrentCharges.m_Value = v4;
  }
  (*(this->_vptr_IHandleEntity + 341))(this);
}


// CDOTA_Item::SetCurrentCharges  (line 516, @0x0000000002596840, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDOTA_ActionRunner::PerformAction_CreateItem, CDOTA_Item::DuplicateState, CDOTA_Item::Spawn, CDOTA_Modifier_Gold_Bag_Launch::OnDestroy, HeroRefresh, CDOTA_BaseNPC_Creature::InitializeCreature, CDOTA_Ability_ArcWarden_TempestDouble::OnSpellStart, CDOTA_Modifier_Item_Bloodstone::OnDeath, CDOTA_Item_Diffusal_Blade::OnPurchase, CDOTA_Modifier_Item_TranquilBoots::OnIntervalThink, CDOTA_Modifier_Item_TranquilBoots2::OnIntervalThink, CDOTA_Modifier_Item_TranquilBoots::OnAttacked (26 total)
void __fastcall CDOTA_Item::SetCurrentCharges(CDOTA_Item *const this, int iCharges)
{
  if ( this->m_iCurrentCharges.m_Value != iCharges )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 972, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCurrentCharges.m_Value = iCharges;
  }
  (*(this->_vptr_IHandleEntity + 341))(this);
}


// CDOTA_Item::SetSecondaryCharges  (line 524, @0x00000000025a4670, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDOTA_Item::DuplicateState, CDOTA_Item_Ward_Dispenser::IncomingCombineFrom, CDOTA_Item_Ward_Dispenser::OnSpellStart
void __fastcall CDOTA_Item::SetSecondaryCharges(CDOTA_Item *const this, int iCharges)
{
  if ( this->m_iSecondaryCharges.m_Value != iCharges )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 976, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iSecondaryCharges.m_Value = iCharges;
  }
  (*(this->_vptr_IHandleEntity + 341))(this);
}


// CDOTA_Item::SpendCharge  (line 532, @0x0000000002595e10, libserver.so)  // inlines: NetworkStateChanged, RemoveItem, Set, operator--, operator-=<int>
// calls: UTIL_Remove
// callers: CDOTA_Item::SpendCharge, CDOTA_Item_Book::OnSpellStart
void __fastcall CDOTA_Item::SpendCharge(CDOTA_Item *const this)
{
  int v2; // r12d
  int (**vptr_IHandleEntity)(...); // rax

  v2 = this->m_iCurrentCharges.m_Value - 1;
  (*(this->_vptr_IHandleEntity + 22))(this, 972, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_iCurrentCharges.m_Value = v2;
  vptr_IHandleEntity[341](this);
  if ( (*(this->_vptr_IHandleEntity + 345))(this) == 0 && this->m_iCurrentCharges.m_Value == 0 )
    UTIL_Remove(this);
}


// CDOTA_Item::SpendCharge  (line 532, @0x0000000002595e80, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTA_Item::SpendCharge
// callers: CDOTA_ActionRunner::PerformAction_SpendCharge, CDOTA_Item_UpgradedMortar::OnSpellStart, CDOTA_Item_UpgradedBarricade::OnSpellStart, CDOTA_Item_GreaterClarity::OnSpellStart, CDOTA_Ability_Firework_Mine::OnSpellStart, CDOTA_Item_Nian_Flag_Trap::OnSpellStart, CDOTA_Item_Ancient_Janggo::OnSpellStart, CDOTA_Item_Cheese::OnSpellStart, CDOTA_Item_Clarity::OnSpellStart, CDOTA_Item_Diffusal_Blade::OnSpellStart, CDOTA_Item_Enchanted_Mango::OnSpellStart, CDOTA_Item_Faerie_Fire::OnSpellStart (25 total)
void __fastcall CDOTA_Item::SpendCharge(CDOTA_Item *const this)
{
  if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
    CDOTA_Item::SpendCharge(this);
}


// CDOTA_Item::CombineStacks  (line 549, @0x00000000025a4b30, libserver.so)  // inlines: GetPlayerOwnerID, GetPurchaseTime, NetworkStateChanged, Set, SetHasMixedOwnership, SetPlayerOwnerID, SetPurchaseTime, SetPurchasedWhileDead, SetSellable, operator=<bool>, operator=<float>, operator=<int>
// calls: CDOTA_Item::AddCharges, CDOTA_Item::ExpireSellback
// callers: CDOTA_UnitInventory::AddItem, CDOTA_UnitInventory::AddItems, CDOTA_UnitInventory::MoveItem
void __fastcall CDOTA_Item::CombineStacks(CDOTA_Item *const this, CDOTA_Item *pOtherItem)
{
  bool v4; // zf
  float v5; // xmm1_4
  int m_Value; // r13d
  float fOldestPurchaseTime; // [rsp+Ch] [rbp-24h]

  if ( pOtherItem->m_bHasMixedOwnership || this->m_iPlayerOwnerID.m_Value != pOtherItem->m_iPlayerOwnerID.m_Value )
  {
    v4 = !this->m_bSellable.m_Value;
    this->m_bHasMixedOwnership = 1;
    if ( !v4 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bSellable.m_Value = 0;
    }
  }
  v5 = fminf(this->m_flPurchaseTime.m_Value, pOtherItem->m_flPurchaseTime.m_Value);
  if ( v5 != this->m_flPurchaseTime.m_Value )
  {
    fOldestPurchaseTime = v5;
    (*(this->_vptr_IHandleEntity + 22))(this, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flPurchaseTime.m_Value = fOldestPurchaseTime;
  }
  if ( this->m_bPurchasedWhileDead.m_Value && !pOtherItem->m_bPurchasedWhileDead.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bPurchasedWhileDead.m_Value = 0;
  }
  if ( this->m_bHasMixedOwnership )
  {
    CDOTA_Item::ExpireSellback(this);
    if ( this->m_bPurchasedWhileDead.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bPurchasedWhileDead.m_Value = 0;
    }
    m_Value = pOtherItem->m_iPlayerOwnerID.m_Value;
    if ( m_Value != this->m_iPlayerOwnerID.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iPlayerOwnerID.m_Value = m_Value;
    }
  }
  CDOTA_Item::AddCharges(this, pOtherItem->m_iCurrentCharges.m_Value);
}


// CDOTA_Item::StartCooldown  (line 578, @0x00000000025a49f0, libserver.so)
// calls: CDOTABaseAbility::StartCooldown, CDOTA_Item::ExpireSellback
void __fastcall CDOTA_Item::StartCooldown(CDOTA_Item *const this, __m128i a2, float flCooldown)
{
  CDOTABaseAbility::StartCooldown(this, a2, flCooldown);
  CDOTA_Item::ExpireSellback(this);
}


// CDOTA_Item::InSellback  (line 587, @0x00000000025a4750, libserver.so)  // inlines: DOTAGameRules, GetGameTime, State_Get, State_IsBefore, State_IsBeforePreGame, State_Order
// callers: CDOTA_Item::GetSellPrice, CDOTA_UnitInventory::SellItem, CDOTA_Item_Ward_Dispenser::GetSellPrice
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
bool __fastcall CDOTA_Item::InSellback(CDOTA_Item *const this)
{
  bool result; // al
  __int64 v2; // rdx
  int v3; // eax

  if ( g_pGameRules == 0 )
    return this->m_flPurchaseTime.m_Value > (0.0 - dota_item_fullprice_buyback_interval.m_pParent->m_Value.m_fValue);
  result = 1;
  if ( this->m_flPurchaseTime.m_Value <= (*&g_pGameRules[18].m_szQuestName[20]
                                        - dota_item_fullprice_buyback_interval.m_pParent->m_Value.m_fValue) )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[28];
    v3 = 0;
    if ( v2 <= 0xA )
      v3 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v2];
    return dword_491AD10 > v3;
  }
  return result;
}


// CDOTA_Item::IsDisassemblable  (line 598, @0x0000000002594b50, libserver.so)  // inlines: DOTAGameRules, GetAbilityData, GetFloat, GetGameTime, IsInFreeDisassembleTime, IsRecipeGenerated
// calls: CDOTABaseAbility::LoadAbilityData
bool __fastcall CDOTA_Item::IsDisassemblable(CDOTA_Item *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  _BOOL4 v3; // eax
  float v4; // xmm0_4

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  v3 = (*(m_pAbilityData + 376) & 4) != 0;
  if ( v3 )
  {
    v4 = 0.0;
    if ( g_pGameRules != 0 )
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    if ( this->m_flAssembledTime.m_Value <= (v4 - dota_item_free_disassemble_interval.m_pParent->m_Value.m_fValue) )
      LOBYTE(v3) = this->m_bDisassemblable.m_Value;
  }
  return v3;
}


// CDOTA_Item::IsInFreeDisassembleTime  (line 611, @0x00000000025a48a0, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetGameTime
// callers: CDOTABaseAbility_BotScript::CanBeDisassembled
bool __fastcall CDOTA_Item::IsInFreeDisassembleTime(CDOTA_Item *const this)
{
  float v1; // xmm0_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return this->m_flAssembledTime.m_Value > (v1 - dota_item_free_disassemble_interval.m_pParent->m_Value.m_fValue);
}


// CDOTA_Item::GetDisassembleRule  (line 623, @0x00000000025a48e0, libserver.so)
// callers: CDOTABaseAbility_BotScript::CanBeDisassembled
EItemDisassembleRule __fastcall CDOTA_Item::GetDisassembleRule(CDOTA_Item *const this)
{
  EItemDisassembleRule result; // eax

  result = EItemDisassembleRule::ITEM_DISASSEMBLE_ALWAYS;
  if ( !this->m_bDisassemblable.m_Value )
    return 2 - !this->m_bNeverDisassemble;
  return result;
}


// CDOTA_Item::ExpireSellback  (line 636, @0x00000000025a4900, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetGameTime, NetworkStateChanged, Set, SetPurchaseTime, operator=<float>
// callers: CDOTA_Item::StartCooldown, CDOTA_Item::OnOwnerDied, CDOTA_Item::IncomingCombineFrom, CDOTA_Item::CombineStacks, CDOTA_UnitInventory::SetItemInSlot, CDOTA_Unit_Hero_Morphling::OnItemEquipped, CDOTA_Unit_Hero_Zuus::OnItemEquipped, CDOTA_Unit_Hero_Life_Stealer::OnItemEquipped, CDOTA_Unit_Hero_EarthSpirit::OnItemEquipped, CDOTA_Unit_Hero_Ogre_Magi::OnItemEquipped, CDOTA_Unit_Hero_Nyx_Assassin::OnItemEquipped, CDOTA_Ability_Meepo_DividedWeStand::OnItemEquipped (18 total)
void __fastcall CDOTA_Item::ExpireSellback(CDOTA_Item *const this)
{
  float v1; // xmm0_4
  CGameRules *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // [rsp-14h] [rbp-1Ch]
  float v8; // [rsp-14h] [rbp-1Ch]

  v1 = 0.0;
  v3 = g_pGameRules;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  v4 = v1 - dota_item_fullprice_buyback_interval.m_pParent->m_Value.m_fValue;
  if ( v4 != this->m_flPurchaseTime.m_Value )
  {
    v8 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v3 = g_pGameRules;
    this->m_flPurchaseTime.m_Value = v8;
  }
  v5 = 0.0;
  if ( v3 != 0 )
    v5 = *&v3[18].m_szQuestName[20];
  v6 = v5 - dota_item_free_disassemble_interval.m_pParent->m_Value.m_fValue;
  if ( v6 != this->m_flAssembledTime.m_Value )
  {
    v7 = v6;
    (*(this->_vptr_IHandleEntity + 22))(this, 968, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flAssembledTime.m_Value = v7;
  }
}


// CDOTA_Item::RemoveItem  (line 647, @0x00000000025a4cc0, libserver.so)
// calls: UTIL_Remove
// callers: CDOTA_Ability_ArcWarden_TempestDouble::OnSpellStart, CDOTA_Modifier_Item_Aegis::ReincarnateTime, CDOTA_Item_IronwoodBranch::OnSpellStart, CDOTA_Item_Moonshard::OnSpellStart, CDOTA_Item_RiverPainter::OnSpellStart, CDOTA_Item_UltimateScepter::OnSpellStart, CDOTA_Item_Ward_Dispenser::OnSpellStart
void __fastcall CDOTA_Item::RemoveItem(CDOTA_Item *const this)
{
  UTIL_Remove(this);
}


// CDOTA_Item::UpdateOnRemove  (line 654, @0x0000000002597350, libserver.so)  // inlines: GetParent, NetworkStateChanged, Set, SetPlayerOwnerID, ToDOTABaseNPC, operator=<int>
// calls: CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::UpdateOnRemove, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::RemoveItem
// callers: CDOTA_Item_BagOfGold::UpdateOnRemove, CDOTA_Item_Tombstone::UpdateOnRemove, CDOTA_Item_BootsOfTravel::UpdateOnRemove, CDOTA_Item_HelmOfTheDominator::UpdateOnRemove
void __fastcall CDOTA_Item::UpdateOnRemove(CDOTA_Item *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CDOTA_BaseNPC *OwnerEntity; // rax
  CDOTA_UnitInventory *Inventory; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      Inventory = CDOTA_BaseNPC::GetInventory(OwnerEntity);
      CDOTA_UnitInventory::RemoveItem(Inventory, this, 0, 0);
    }
  }
  if ( this->m_iPlayerOwnerID.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPlayerOwnerID.m_Value = -1;
  }
  CDOTABaseAbility::UpdateOnRemove(this);
}


// CDOTA_Item::OnDestroyed  (line 668, @0x00000000025936f0, libserver.so)
void __fastcall CDOTA_Item::OnDestroyed(CDOTA_Item *const this, CBaseEntity *pAttacker)
{
  ;
}


// CDOTA_Item::DuplicateState  (line 674, @0x00000000025a46c0, libserver.so)  // inlines: IsCombineLocked, IsToggle, NetworkStateChanged, Set, SetCombineLocked, operator=<bool>
// calls: CDOTA_Item::SetCurrentCharges, CDOTA_Item::SetSecondaryCharges, CDOTABaseAbility::ToggleAbility
// callers: CDOTA_Item_PowerTreads::DuplicateState, CDOTA_Item_Ward_Dispenser::DuplicateState
void __fastcall CDOTA_Item::DuplicateState(CDOTA_Item *const this, CDOTA_Item *pSourceItem)
{
  bool m_Value; // r12

  if ( ((*(this->_vptr_IHandleEntity + 251))(this) & 0x200) != 0 && pSourceItem->m_bToggleState.m_Value )
    CDOTABaseAbility::ToggleAbility(this);
  CDOTA_Item::SetCurrentCharges(this, pSourceItem->m_iCurrentCharges.m_Value);
  CDOTA_Item::SetSecondaryCharges(this, pSourceItem->m_iSecondaryCharges.m_Value);
  m_Value = pSourceItem->m_bCombineLocked.m_Value;
  if ( m_Value != this->m_bCombineLocked.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 980, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCombineLocked.m_Value = m_Value;
  }
}


// CDOTA_Item::IsCombinable  (line 692, @0x0000000002594be0, libserver.so)  // inlines: GetParent, IsConsideredHero, ToDOTABaseNPC
// calls: CGameSceneNode::GetOwnerEntity
bool __fastcall CDOTA_Item::IsCombinable(CDOTA_Item *const this)
{
  bool result; // al
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v5; // rdi
  uint32 m_Index; // edx

  result = 0;
  if ( !this->m_bTemporarilyUncombinable )
  {
    result = this->m_bCombinable.m_Value;
    if ( result )
    {
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0
        && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), v5 = OwnerEntity, OwnerEntity != 0)
        && OwnerEntity->m_bIsDOTANPC )
      {
        m_Index = OwnerEntity[2].m_hEffectEntity.m_Value.m_Index;
        result = 1;
        if ( (m_Index & 0x100) == 0 && (m_Index & 3) == 0 )
          return (*(v5->_vptr_IHandleEntity + 414))(v5) == this->m_iPlayerOwnerID.m_Value;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}


// CDOTA_Item::IsRecipeGenerated  (line 703, @0x00000000025938f0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_BaseNPC::AttemptToPurchaseItem
bool __fastcall CDOTA_Item::IsRecipeGenerated(const CDOTA_Item *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(&this->CDOTABaseAbility, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return (*(m_pAbilityData + 376) & 4) != 0;
}


// CDOTA_Item::OnEquip  (line 711, @0x0000000002595ef0, libserver.so)  // inlines: CreateEvent, DOTAGameRules, GetAbilityName, GetBool, GetInt, GetParent, GetTeamNumber, NetworkStateChanged, Set, SetPlayerOwnerID, ToDOTABaseNPC, ToDOTABaseNPCHero, operator=<int>
// calls: CDOTAGamerules::WriteGameState, CGameSceneNode::GetOwnerEntity, DOTACommander, CDOTA_Commander::OnItemEquip
// callers: CDOTA_Item_DataDriven::OnEquip, CDOTA_Item_Armlet::OnEquip, CDOTA_Item_Assault_Cuirass::OnEquip, CDOTA_Item_Aegis::OnEquip, CDOTA_Item_Cheese::OnEquip, CDOTA_Item_DivineRapier::OnEquip, CDOTA_Item_PowerTreads::OnEquip, CDOTA_Item_RingOfAquila::OnEquip, CDOTA_Item_Ring_Of_Basilius::OnEquip, CDOTA_Item_RiverPainter::OnEquip
// strings: "dota_inventory_player_got_item", "<NoAbilityName>", "itemname"
void __fastcall CDOTA_Item::OnEquip(CDOTA_Item *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v4; // r12
  void (__fastcall *v5)(CDOTA_Item *const, __int64); // r13
  CGameSceneNode *v6; // rdi
  CGameSceneNode *v7; // rdi
  CBaseEntity *v8; // rax
  __int64 m_Value; // rsi
  bool v10; // zf
  CGameSceneNode *v11; // rdi
  CBaseEntity *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_Commander *v14; // rax
  int v15; // r13d
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v17; // rax
  __int64 v18; // r12
  const char *v19; // rdx
  void (__fastcall *v20)(__int64, const char *, const char *); // rcx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  int (**v23)(...); // rax

  CDOTAGamerules::WriteGameState(g_pGameRules);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0
    && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), v4 = OwnerEntity, OwnerEntity != 0)
    && OwnerEntity->m_bIsDOTANPC )
  {
    if ( this->m_iPlayerOwnerID.m_Value == -1 )
    {
      v15 = (*(OwnerEntity->_vptr_IHandleEntity + 414))(OwnerEntity);
      if ( v15 != this->m_iPlayerOwnerID.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        vptr_IHandleEntity = this->_vptr_IHandleEntity;
        this->m_iPlayerOwnerID.m_Value = v15;
        if ( vptr_IHandleEntity[348](this) != 0 )
          goto LABEL_6;
LABEL_30:
        (*(this->_vptr_IHandleEntity + 262))(this);
        goto LABEL_6;
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
    goto LABEL_30;
LABEL_6:
  if ( v4 != 0 && (v4[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    v11 = this->m_pGameSceneNode->m_pParent;
    if ( v11 != 0 && (v12 = CGameSceneNode::GetOwnerEntity(v11)) != 0 && v12->m_bIsDOTANPC )
    {
      v13 = 0;
      if ( (v12[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
        v13 = v12;
    }
    else
    {
      v13 = 0;
    }
    v14 = DOTACommander();
    CDOTA_Commander::OnItemEquip(v14, v13, this, 1);
  }
  v5 = *(this->_vptr_IHandleEntity + 70);
  v6 = this->m_pGameSceneNode->m_pParent;
  if ( v6 != 0 && CGameSceneNode::GetOwnerEntity(v6) != 0 )
  {
    v7 = this->m_pGameSceneNode->m_pParent;
    v8 = 0;
    if ( v7 != 0 )
      v8 = CGameSceneNode::GetOwnerEntity(v7);
    m_Value = v8->m_iTeamNum.m_Value;
  }
  else
  {
    m_Value = 4;
  }
  v5(this, m_Value);
  v10 = !this->m_bHasCommentedOnEquip;
  this->m_iState = 1;
  if ( !v10 )
  {
    if ( v4 == 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( v4 != 0 )
  {
    if ( (*(v4->_vptr_IHandleEntity + 436))(v4) == 0
      && (*(v4->_vptr_IHandleEntity + 414))(v4) == this->m_iPlayerOwnerID.m_Value )
    {
      v23 = this->_vptr_IHandleEntity;
      this->m_bHasCommentedOnEquip = 1;
      v23[337](this);
    }
LABEL_16:
    (*(v4->_vptr_IHandleEntity + 479))(v4, this);
  }
LABEL_17:
  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
  {
    v17 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_inventory_player_got_item", 0, 0);
    v18 = v17;
    if ( v17 != 0 )
    {
      v19 = "<NoAbilityName>";
      v20 = *(*v17 + 136LL);
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v19 = m_pszAbilityName;
      }
      v20(v18, "itemname", v19);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v18, 1);
    }
  }
}


// CDOTA_Item::OnUnequip  (line 762, @0x0000000002593c20, libserver.so)  // inlines: GetParent, KillRef, RemoveFromDList<CUtlReference<CDOTA_Buff> >, RemoveNode, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator=
// calls: CDOTA_Buff::Destroy, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CGameSceneNode::GetOwnerEntity, DOTACommander, CDOTA_Commander::OnItemEquip
// callers: CDOTA_Item_DataDriven::OnUnequip, CDOTA_Item_Armlet::OnUnequip, CDOTA_Item_Assault_Cuirass::OnUnequip, CDOTA_Item_DivineRapier::OnUnequip, CDOTA_Item_RingOfAquila::OnUnequip, CDOTA_Item_Ring_Of_Basilius::OnUnequip
void __fastcall CDOTA_Item::OnUnequip(CDOTA_Item *const this)
{
  CDOTA_Buff *v2; // rax
  CDOTA_Buff *m_pObject; // rax
  CUtlReference<CDOTA_Buff> *m_pPrev; // rdx
  CUtlReference<CDOTA_Buff> *m_pNext; // rax
  CDOTA_BaseNPC *Caster; // rax
  int i; // r12d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CGameSceneNode *m_pParent; // rdi
  CGameSceneNode *v12; // rdi
  CBaseEntity *v13; // rax
  CGameSceneNode *v14; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v16; // r12
  CDOTA_Commander *v17; // rax
  CUtlReference<CDOTA_Buff> *v18; // rdx

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
        v18 = this->m_pIntrinsicBuff.m_pNext;
        m_pObject->m_References.m_pHead = v18;
        if ( v18 != 0 )
          v18->m_pPrev = 0;
      }
      this->m_pIntrinsicBuff.m_pPrev = 0;
      this->m_pIntrinsicBuff.m_pNext = 0;
      this->m_pIntrinsicBuff.m_pObject = 0;
    }
  }
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::GetInventory(Caster) != 0 )
    {
      for ( i = 0; i != 9; ++i )
      {
        while ( 1 )
        {
          v8 = CDOTABaseAbility::GetCaster(this);
          Inventory = CDOTA_BaseNPC::GetInventory(v8);
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
          if ( this != ItemInSlot && ItemInSlot != 0 && ItemInSlot->m_iState == 1 )
            break;
          if ( ++i == 9 )
            goto LABEL_15;
        }
        (*(ItemInSlot->_vptr_IHandleEntity + 262))(ItemInSlot);
      }
    }
  }
LABEL_15:
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0
    && CGameSceneNode::GetOwnerEntity(m_pParent) != 0
    && (v12 = this->m_pGameSceneNode->m_pParent) != 0
    && (v13 = CGameSceneNode::GetOwnerEntity(v12)) != 0
    && v13->m_bIsDOTANPC
    && (v13[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    v14 = this->m_pGameSceneNode->m_pParent;
    if ( v14 != 0 && (OwnerEntity = CGameSceneNode::GetOwnerEntity(v14)) != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      v16 = 0;
      if ( (OwnerEntity[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
        v16 = OwnerEntity;
    }
    else
    {
      v16 = 0;
    }
    v17 = DOTACommander();
    CDOTA_Commander::OnItemEquip(v17, v16, this, 0);
    this->m_iState = 0;
  }
  else
  {
    this->m_iState = 0;
  }
}


// CDOTA_Item::OnPurchase  (line 796, @0x00000000025c41c0, libserver.so)  // inlines: CDOTAUserMsg_ItemPurchased_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FStrEq, FindGameEvent<CDOTAUserMsg_ItemPurchased_t>, FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>, Get, GetAbilityName, GetInstance, GetPlayerOwnerID, GetTeamNumber, PostEvent<CDOTAUserMsg_ItemPurchased_t>, SendUserMessage<CDOTAUserMsg_ItemPurchased_t>, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, _V_strcmp, operator CBaseEntity*, set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_item_index, set_has_killer_account_id, set_item_index, set_killer_account_id, ~CDOTAUserMsg_ItemPurchased_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_CombatLog::AddPurchaseItemEvent, DOTAGameManager, CDOTAGameManager::GetAbilityDataByName, CDOTAGamerules::ReduceItemStock, CDOTA_PlayerResource::GetPlayer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CDOTAUserMsg_ItemPurchased::CDOTAUserMsg_ItemPurchased, CDOTAGameManager::GetAbilityIndex, CDOTAUserMsg_ItemPurchased::~CDOTAUserMsg_ItemPurchased (25 total)
// callers: CDOTA_Item_Ancient_Janggo::OnPurchase, CDOTA_Item_Flying_Courier::OnPurchase, CDOTA_Item_Courier::OnPurchase, CDOTA_Item_PowerTreads::OnPurchase, CDOTA_Item_Diffusal_Blade::OnPurchase, CDOTA_Item_EmptyBottle::OnPurchase, CDOTA_Item_SentryWard::OnPurchase, CDOTA_Item_ObserverWard::OnPurchase
// strings: "<NoAbilityName>", "item_rapier", "tournament_drops"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>(bool)::s_hEvent
void __fastcall CDOTA_Item::OnPurchase(CDOTA_Item *const this, int nCombineVersion, const char *pszRecipeItemName)
{
  __int64 v5; // rax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v9; // rdx
  const char *m_pszAbilityName; // rax
  int m_iDeclarationFlags; // eax
  DOTAAbilityData_t *v12; // rax
  const char *v13; // rbx
  const char *v14; // rax
  CDOTAGameManager *v15; // rax
  DOTAAbilityData_t *AbilityDataByName; // rax
  bool v17; // sf
  DOTAAbilityData_t *v18; // rax
  const char *v19; // rdx
  const char *v20; // rax
  CDOTAPlayer *Player; // rbx
  DOTAAbilityData_t *v22; // rax
  const char *v23; // rbx
  const char *v24; // rax
  CDOTAGameManager *v25; // rax
  unsigned __int16 AbilityIndex; // ax
  __int64 v27; // r12
  IGameEventSystem *v28; // rbx
  void (__fastcall *v29)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, CEntityHandle *, __int64); // r13
  DOTAAbilityData_t *v30; // rax
  const char *v31; // rsi
  int Team; // eax
  int v33; // eax
  int ItemID; // eax
  int v35; // ebx
  CBasePlayer *v36; // rax
  CDOTAPlayer *v37; // r12
  int v38; // eax
  const char *v39; // rbx
  const char *v40; // rax
  int v41; // eax
  __int64 v42; // [rsp+10h] [rbp-1E0h]
  int nOwnerPlayerID; // [rsp+1Ch] [rbp-1D4h]
  CEntityHandle v44[2]; // [rsp+20h] [rbp-1D0h] BYREF
  int v45; // [rsp+30h] [rbp-1C0h]
  AccountID_t SteamAccountID; // [rsp+38h] [rbp-1B8h]
  int v47; // [rsp+40h] [rbp-1B0h]
  _BOOL4 v48; // [rsp+58h] [rbp-198h]
  CTeamRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v50; // [rsp+1B8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  if ( nCombineVersion >= 0 && (*(this->_vptr_IHandleEntity + 263))(this, nCombineVersion, pszRecipeItemName) != 0 )
  {
    v5 = (*(this->_vptr_IHandleEntity + 263))(this);
    (*(*v5 + 712LL))(v5);
  }
  this->m_nCombineVersion = nCombineVersion;
  nOwnerPlayerID = this->m_iPlayerOwnerID.m_Value;
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, nOwnerPlayerID);
  v6 = CEntityHandle::operator CEntityInstance *(v44);
  v7 = v6;
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 && (v6[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    m_pAbilityData = this->m_pAbilityData;
    v9 = "<NoAbilityName>";
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      v9 = "<NoAbilityName>";
      if ( m_pszAbilityName != 0 )
        v9 = m_pszAbilityName;
    }
    CDOTA_CombatLog::AddPurchaseItemEvent(g_pDOTACombatLog, v7, v9);
  }
  else
  {
    v7 = 0;
  }
  if ( nOwnerPlayerID != -1 )
  {
    if ( !this->m_bCreatedByDisassemble
      && (v30 = this->m_pAbilityData) != 0
      && (v31 = v30->m_pszAbilityName, v30->m_pszAbilityName != 0)
      && (v31 == "item_rapier" || strcmp(v31, "item_rapier") == 0) )
    {
      CMsgTournamentItemEvent::CMsgTournamentItemEvent(v44);
      v47 = 9;
      v45 |= 4u;
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nOwnerPlayerID);
      v45 |= 0x80u;
      v48 = Team == 3;
      SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, nOwnerPlayerID);
      v45 |= 1u;
      TournamentItemEvent(v44, "tournament_drops");
      CMsgTournamentItemEvent::~CMsgTournamentItemEvent(v44);
      m_iDeclarationFlags = this->m_iDeclarationFlags;
      if ( (m_iDeclarationFlags & 1) != 0 )
      {
LABEL_37:
        v33 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nOwnerPlayerID);
        CTeamRecipientFilter::CTeamRecipientFilter(&filter, v33, 0);
        ItemID = CDOTA_Item::GetItemID(this);
        SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_ITEM_PURCHASE, ItemID, nOwnerPlayerID, &filter);
        filter._vptr_IRecipientFilter = &off_3FF4590;
        CRecipientFilter::~CRecipientFilter(&filter);
        if ( (this->m_iDeclarationFlags & 2) != 0 )
        {
LABEL_38:
          CTeamRecipientFilter::CTeamRecipientFilter(&filter, 1, 0);
          if ( v7 != 0 )
          {
            v42 = (*(v7->_vptr_IHandleEntity + 413))(v7);
            if ( v42 != 0 && gpGlobals->maxClients > 0 )
            {
              v35 = 1;
              do
              {
                while ( 1 )
                {
                  v36 = UTIL_PlayerByIndex(v35);
                  v37 = v36;
                  if ( v36 != 0
                    && (*(v36->_vptr_IHandleEntity + 140))(v36) != 0
                    && CDOTAPlayer::GetCoachedTeamNum(v37) == *(v42 + 383) )
                  {
                    break;
                  }
                  if ( gpGlobals->maxClients < ++v35 )
                    goto LABEL_47;
                }
                CRecipientFilter::AddRecipient(&filter, v37);
                ++v35;
              }
              while ( gpGlobals->maxClients >= v35 );
            }
          }
LABEL_47:
          v38 = CDOTA_Item::GetItemID(this);
          SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_ITEM_PURCHASE, v38, nOwnerPlayerID, &filter);
          filter._vptr_IRecipientFilter = &off_3FF4590;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
LABEL_16:
        v12 = this->m_pAbilityData;
        v13 = "<NoAbilityName>";
        if ( v12 != 0 )
        {
          v14 = v12->m_pszAbilityName;
          if ( v14 != 0 )
            v13 = v14;
        }
        v15 = DOTAGameManager();
        AbilityDataByName = CDOTAGameManager::GetAbilityDataByName(v15, v13);
        if ( AbilityDataByName != 0 && AbilityDataByName->m_iItemStockMax > 0 )
        {
          v17 = *(AbilityDataByName + 377) < 0;
          v18 = this->m_pAbilityData;
          if ( v17 )
          {
            v19 = "<NoAbilityName>";
            if ( v18 != 0 )
            {
              v20 = v18->m_pszAbilityName;
              if ( v20 != 0 )
                v19 = v20;
            }
            CDOTAGamerules::ReduceItemStock(g_pGameRules, -1, v19, nOwnerPlayerID);
          }
          else
          {
            v39 = "<NoAbilityName>";
            if ( v18 != 0 )
            {
              v40 = v18->m_pszAbilityName;
              if ( v40 != 0 )
                v39 = v40;
            }
            v41 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nOwnerPlayerID);
            CDOTAGamerules::ReduceItemStock(g_pGameRules, v41, v39, -1);
          }
        }
        Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nOwnerPlayerID);
        if ( Player != 0 )
        {
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::AddRecipient(&filter, Player);
          CDOTAUserMsg_ItemPurchased::CDOTAUserMsg_ItemPurchased(v44);
          *&v44[0].m_Index = off_41006F0;
          v22 = this->m_pAbilityData;
          v23 = "<NoAbilityName>";
          if ( v22 != 0 )
          {
            v24 = v22->m_pszAbilityName;
            if ( v24 != 0 )
              v23 = v24;
          }
          v25 = DOTAGameManager();
          AbilityIndex = CDOTAGameManager::GetAbilityIndex(v25, v23);
          v27 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>(bool)::s_hEvent;
          v45 |= 1u;
          SteamAccountID = AbilityIndex;
          v28 = g_pGameEventSystem;
          v29 = *(*g_pGameEventSystem + 128LL);
          (*(*g_pNetworkMessages + 96LL))(
            g_pNetworkMessages,
            IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemPurchased_t>(bool)::s_hEvent);
          v29(v28, 0, 0, &filter, v27, v44, 32);
          *&v44[0].m_Index = &off_4100570;
          CDOTAUserMsg_ItemPurchased::~CDOTAUserMsg_ItemPurchased(v44);
          filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
        return;
      }
    }
    else
    {
      m_iDeclarationFlags = this->m_iDeclarationFlags;
      if ( (m_iDeclarationFlags & 1) != 0 )
        goto LABEL_37;
    }
    if ( (m_iDeclarationFlags & 2) != 0 )
      goto LABEL_38;
    goto LABEL_16;
  }
}


// CDOTA_Item::TryToComment  (line 884, @0x0000000002593e20, libserver.so)  // inlines: DOTAGameRules, GetAbilityData, GetClassNameAsCStr, GetClassname, GetGameTime, GetPurchaseTime, GetUnitName, QueueConcept, State_Get, State_IsBefore, State_IsBeforeGameInProgress, State_Order, String, ToCStr
// calls: CDOTABaseAbility::GetCaster, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CDOTA_BaseNPC_Shop_Speech::MakeSpeechCallbackForItemPurchaseIfHeroDoesntHaveSomethingToSay, CDOTABaseAbility::LoadAbilityData, _Unwind_Resume
// strings: "itemname", "expensive_item", "iscombo"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTA_Item::TryToComment(CDOTA_Item *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  __int64 v3; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  float v6; // xmm2_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  IDOTA_SpeechQueuedCallback *v10; // rbx
  const char *v11; // rsi
  CDOTA_Speech *m_pSpeech; // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 )
  {
    v3 = *&g_pGameRules[6].m_szQuestName[28];
    if ( v3 <= 0xA )
    {
      if ( dword_491AD14 > DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v3] )
        return;
    }
    else if ( dword_491AD14 > 0 )
    {
      return;
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(&criteria, "itemname", m_pAsString, 5.0);
    CResponseCriteriaSet::AppendCriteria(&criteria, "expensive_item", 1.0, v6);
    if ( this->m_pAbilityData == 0 )
      CDOTABaseAbility::LoadAbilityData(this, 0);
    CResponseCriteriaSet::AppendCriteria(&criteria, "iscombo", 1.0, v7);
    (*(this->_vptr_IHandleEntity + 359))(this);
    CResponseCriteriaSet::AppendCriteria(&criteria, "cost", 1.0, v8);
    if ( g_pGameRules != 0 )
      v9 = *&g_pGameRules[18].m_szQuestName[20] - 5.0;
    else
      v9 = -5.0;
    if ( this->m_flPurchaseTime.m_Value >= v9 )
      v10 = CDOTA_BaseNPC_Shop_Speech::MakeSpeechCallbackForItemPurchaseIfHeroDoesntHaveSomethingToSay(this, Caster);
    else
      v10 = 0;
    v11 = "";
    if ( Caster->m_iszUnitName.m_Value.u.m_Id != 0 )
      v11 = Caster->m_iszUnitName.m_Value.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(&criteria, v11, "", 1.0);
    m_pSpeech = Caster->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 9, 1.0, &criteria, 0, 1, v10, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// CDOTA_Item::GetSellPrice  (line 912, @0x00000000025a47f0, libserver.so)  // inlines: DOTAGameRules, GetFloat
// calls: CDOTA_Item::InSellback
int __fastcall CDOTA_Item::GetSellPrice(CDOTA_Item *const this)
{
  if ( CDOTA_Item::InSellback(this) )
    return (*(this->_vptr_IHandleEntity + 359))(this);
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 20 )
    return ((*(this->_vptr_IHandleEntity + 359))(this) * dota_gamemode_ardm_sellback_percent.m_pParent->m_Value.m_fValue);
  (*(this->_vptr_IHandleEntity + 347))(this);
  return ((*(this->_vptr_IHandleEntity + 359))(this) * 0.5);
}


// CDOTA_Item::IncomingCombineFrom  (line 931, @0x00000000025a4aa0, libserver.so)  // inlines: NetworkStateChanged, Set, SetCreatedByDisassemble, SetHasMixedOwnership, SetSellable, operator=<bool>
// calls: CDOTA_Item::ExpireSellback
// callers: CDOTA_Item_MagicWand::IncomingCombineFrom, CDOTA_Item_Ward_Dispenser::IncomingCombineFrom
void __fastcall CDOTA_Item::IncomingCombineFrom(CDOTA_Item *const this, CDOTA_Item *pItem)
{
  bool v3; // zf

  if ( pItem != 0 )
  {
    if ( pItem->m_bCreatedByDisassemble )
      this->m_bCreatedByDisassemble = 1;
    if ( pItem->m_bHasMixedOwnership || pItem->m_iPlayerOwnerID.m_Value != this->m_iPlayerOwnerID.m_Value )
    {
      v3 = !this->m_bSellable.m_Value;
      this->m_bHasMixedOwnership = 1;
      if ( !v3 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bSellable.m_Value = 0;
      }
      CDOTA_Item::ExpireSellback(this);
    }
  }
}


// CDOTA_Item::GetMaxLevel  (line 950, @0x00000000025a4cd0, libserver.so)  // inlines: GetAbilityName
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt
// strings: "<NoAbilityName>", "MaxUpgradeLevel"
int __fastcall CDOTA_Item::GetMaxLevel(CDOTA_Item *const this)
{
  const char *v1; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v4; // rax
  KeyValues *AbilityByName; // rax

  v1 = "<NoAbilityName>";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v1 = m_pszAbilityName;
  }
  v4 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v4, v1);
  if ( AbilityByName != 0 )
    return KeyValues::GetInt(AbilityByName, "MaxUpgradeLevel", 1);
  else
    return 0;
}


// CDOTA_Item::GetItemID  (line 961, @0x00000000025a4d40, libserver.so)  // inlines: GetAbilityName, GetDebugName, GetInt, HKeySymbol
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, CEntityIdentity::GetDebugName, Warning
// callers: CDOTA_Item::OnPurchase, CDOTASpectatorGraphManager::RecordHeroInventorySnapshots, CDOTA_UnitInventory::SellItem, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_BaseNPC_Hero::Spawn, CDOTAGCServerSystem::FindItemID, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::SendMatchDetailsToClients, CDOTAGCServerSystem::UpdateRealtimeGameState, CDOTA_Item_Aegis::OnEquip, CDOTA_Item_Cheese::OnEquip
// strings: "<NoAbilityName>", "Item %s has a ID of zero.\n", "%s GetItemID returning 0.  Failed to find ability keyvalues.\n"
int __fastcall CDOTA_Item::GetItemID(CDOTA_Item *const this)
{
  const char *v2; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v5; // rax
  KeyValues *AbilityByName; // rbx
  CDOTAGameManager *v7; // rax
  KeyValues *Key; // rax
  int result; // eax
  const char *DebugName; // rax
  const char *v11; // rax

  v2 = "<NoAbilityName>";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v2 = m_pszAbilityName;
  }
  v5 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v5, v2);
  if ( AbilityByName != 0 )
  {
    v7 = DOTAGameManager();
    Key = KeyValues::FindKey(AbilityByName, v7->m_hKvSymbols[0]);
    if ( Key == 0 || (result = CKeyValues_Data::Internal_GetInt(Key)) == 0 )
    {
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      Warning("Item %s has a ID of zero.\n", DebugName);
      return 0;
    }
  }
  else
  {
    v11 = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("%s GetItemID returning 0.  Failed to find ability keyvalues.\n", v11);
    return 0;
  }
  return result;
}


// CDOTA_Item::GetNumberOfComponentLists  (line 980, @0x00000000025a4e00, libserver.so)  // inlines: GetAbilitiesKeyValues, IsAddOnGame
// calls: DOTAGameManager, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey
// callers: CDOTA_UnitInventory::TryItemCombine, CDOTA_BaseNPC_Hero::UpdateNextItemToPurchase
// strings: "ItemRequirements"
int __fastcall CDOTA_Item::GetNumberOfComponentLists(const char *pszItemName)
{
  CDOTAGameManager *v2; // rax
  KeyValues *Key; // rax
  KeyValues *v4; // rax
  KeyValues *FirstSubKey; // rax
  int v6; // ebx
  KeyValues *m_pkvAddOnAbilities; // rdi

  v2 = DOTAGameManager();
  if ( *&v2->m_bCustomGame != 0 )
    m_pkvAddOnAbilities = v2->m_pkvAddOnAbilities;
  else
    m_pkvAddOnAbilities = v2->m_pkvAbilities;
  if ( m_pkvAddOnAbilities == 0 )
    return 0;
  Key = KeyValues::FindKey(m_pkvAddOnAbilities, pszItemName, 0);
  if ( Key == 0 )
    return 0;
  v4 = KeyValues::FindKey(Key, "ItemRequirements", 0);
  if ( v4 == 0 )
    return 0;
  FirstSubKey = KeyValues::GetFirstSubKey(v4);
  if ( FirstSubKey == 0 )
    return 0;
  v6 = 0;
  do
  {
    ++v6;
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
  }
  while ( FirstSubKey != 0 );
  return v6;
}


// CDOTA_Item::GetComponentList  (line 1005, @0x00000000025a4eb0, libserver.so)  // inlines: GetAbilitiesKeyValues, IsAddOnGame
// calls: DOTAGameManager, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetString
// callers: CDOTA_UnitInventory::TryItemCombine, CDOTA_BaseNPC_Hero::UpdateNextItemToPurchase
// strings: "ItemRequirements"
const char *__fastcall CDOTA_Item::GetComponentList(const char *pszItemName, int iList)
{
  CDOTAGameManager *v4; // rax
  KeyValues *Key; // rax
  KeyValues *v6; // rax
  KeyValues *FirstSubKey; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  KeyValues *m_pkvAddOnAbilities; // rdi

  v4 = DOTAGameManager();
  if ( *&v4->m_bCustomGame != 0 )
    m_pkvAddOnAbilities = v4->m_pkvAddOnAbilities;
  else
    m_pkvAddOnAbilities = v4->m_pkvAbilities;
  if ( m_pkvAddOnAbilities == 0 )
    return 0;
  Key = KeyValues::FindKey(m_pkvAddOnAbilities, pszItemName, 0);
  if ( Key == 0 )
    return 0;
  v6 = KeyValues::FindKey(Key, "ItemRequirements", 0);
  if ( v6 == 0 )
    return 0;
  FirstSubKey = KeyValues::GetFirstSubKey(v6);
  if ( FirstSubKey == 0 )
    return 0;
  if ( iList != 0 )
  {
    v8 = 0;
    v9 = (iList - 1) + 1LL;
    while ( 1 )
    {
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        break;
      if ( ++v8 == v9 )
        return KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    }
    return 0;
  }
  return KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
}


// CDOTA_Item::GetResult  (line 1035, @0x00000000025a4f80, libserver.so)  // inlines: GetAbilitiesKeyValues, GetAbilityName, IsAddOnGame
// calls: DOTAGameManager, KeyValues::FindKey, KeyValues::GetString
// callers: CDOTA_UnitInventory::TryItemCombine
// strings: "<NoAbilityName>", "ItemResult"
const char *__fastcall CDOTA_Item::GetResult(CDOTA_Item *const this)
{
  CDOTAGameManager *v2; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *v4; // rsi
  const char *m_pszAbilityName; // rdx
  KeyValues *Key; // rax
  KeyValues *m_pkvAddOnAbilities; // rdi

  v2 = DOTAGameManager();
  if ( *&v2->m_bCustomGame != 0 )
    m_pkvAddOnAbilities = v2->m_pkvAddOnAbilities;
  else
    m_pkvAddOnAbilities = v2->m_pkvAbilities;
  if ( m_pkvAddOnAbilities == 0 )
    return 0;
  m_pAbilityData = this->m_pAbilityData;
  v4 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v4 = m_pszAbilityName;
  }
  Key = KeyValues::FindKey(m_pkvAddOnAbilities, v4, 0);
  if ( Key != 0 )
    return KeyValues::GetString(Key, "ItemResult", "", 0, 0);
  else
    return 0;
}


// CDOTA_Item::CreateModifier  (line 1050, @0x00000000025a5020, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::AddNewModifier, __dynamic_cast
// globals: `typeinfo for'CDOTA_Buff_Item
CDOTA_Buff_Item *__fastcall CDOTA_Item::CreateModifier(
        CDOTA_Item *const this,
        CBaseEntity *pCaster,
        CDOTABaseAbility *pAbility,
        const char *pModifier,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *v9; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTA_ModifierManager::AddNewModifier(&Caster->m_ModifierManager, pCaster, pAbility, pModifier, pKV, -1, 0);
  if ( v9 != 0 )
    return __dynamic_cast(v9, &`typeinfo for'CDOTA_Buff, &`typeinfo for'CDOTA_Buff_Item, 0);
  else
    return 0;
}


// CDOTA_Item::IsCooldownReady  (line 1058, @0x0000000002594070, libserver.so)
// calls: CDOTABaseAbility::IsCooldownReady
bool __fastcall CDOTA_Item::IsCooldownReady(CDOTA_Item *const this)
{
  return CDOTABaseAbility::IsCooldownReady(this);
}


// CDOTA_Item::PurchasableAtMainShop  (line 1071, @0x00000000025a5180, libserver.so)
// calls: CDOTA_Item::PurchasableAtSecretShop
bool __fastcall CDOTA_Item::PurchasableAtMainShop(CDOTA_Item *const this)
{
  return !CDOTA_Item::PurchasableAtSecretShop(this);
}


// CDOTA_Item::OnlyPurchasableAtSecretShop  (line 1079, @0x00000000025a50a0, libserver.so)  // inlines: GetAbilityName, GetBool
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt
// strings: "<NoAbilityName>"
bool __fastcall CDOTA_Item::OnlyPurchasableAtSecretShop(CDOTA_Item *const this)
{
  const char *v1; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v4; // rax
  KeyValues *AbilityByName; // rax
  KeyValues *v6; // rbx

  v1 = "<NoAbilityName>";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v1 = m_pszAbilityName;
  }
  v4 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v4, v1);
  v6 = AbilityByName;
  return AbilityByName != 0
      && KeyValues::GetInt(AbilityByName, "SecretShop", 0) != 0
      && KeyValues::GetInt(v6, "SideShop", 0) == 0;
}


// CDOTA_Item::PurchasableAtSecretShop  (line 1090, @0x00000000025a5120, libserver.so)  // inlines: GetAbilityName, GetBool
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt
// callers: CDOTA_Item::PurchasableAtMainShop
// strings: "<NoAbilityName>"
bool __fastcall CDOTA_Item::PurchasableAtSecretShop(CDOTA_Item *const this)
{
  const char *v1; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v4; // rax
  KeyValues *AbilityByName; // rdi
  bool result; // al

  v1 = "<NoAbilityName>";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v1 = m_pszAbilityName;
  }
  v4 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v4, v1);
  result = 0;
  if ( AbilityByName != 0 )
    return KeyValues::GetInt(AbilityByName, "SecretShop", 0) != 0;
  return result;
}


// CDOTA_Item::PurchasableAtSideShop  (line 1101, @0x00000000025a5190, libserver.so)  // inlines: GetAbilityName, GetBool
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt
// strings: "<NoAbilityName>"
bool __fastcall CDOTA_Item::PurchasableAtSideShop(CDOTA_Item *const this)
{
  const char *v1; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v4; // rax
  KeyValues *AbilityByName; // rdi
  bool result; // al

  v1 = "<NoAbilityName>";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v1 = m_pszAbilityName;
  }
  v4 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v4, v1);
  result = 0;
  if ( AbilityByName != 0 )
    return KeyValues::GetInt(AbilityByName, "SideShop", 0) != 0;
  return result;
}


// CDOTA_Item::SetContainer  (line 1110, @0x00000000025a51f0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
void __fastcall CDOTA_Item::SetContainer(CDOTA_Item *const this, CDOTA_Item_Physical *pContainer)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( pContainer != 0 && (m_pEntity = pContainer->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hContainer.m_Index) = v4 | this->m_hContainer.m_Index & 0x8000;
    this->m_hContainer.m_Index = (v3 << 15) | this->m_hContainer.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hContainer.m_Index = -1;
  }
}


// CDOTA_Item::ClearContainer  (line 1115, @0x00000000025a5270, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, SetContainer, operator CDOTA_Item_Physical*, operator CEntityInstance*, operator=
// callers: CDOTA_Item_Physical::UpdateOnRemove, CDOTA_Item_Tombstone_Drop::OnPickup
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item::ClearContainer(CDOTA_Item *const this, CDOTA_Item_Physical *pContainer)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  if ( pContainer != 0 )
  {
    m_Index = this->m_hContainer.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hContainer.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hContainer.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && pContainer == v4->m_pInstance )
          this->m_hContainer.m_Index = -1;
      }
    }
  }
}


// CDOTA_Item::GetContainer  (line 1123, @0x00000000025a52e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, CDOTA_UnitInventory::Think, CDOTA_UnitInventory::RemoveComponentsInBluePrint, CDOTA_UnitInventory::AddItem
// globals: CEntityHandle::gm_pEntityList
CDOTA_Item_Physical *__fastcall CDOTA_Item::GetContainer(CDOTA_Item *const this)
{
  CDOTA_Item_Physical *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hContainer.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hContainer.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hContainer.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CDOTA_Item::Script_GetContainer  (line 1128, @0x0000000002598170, libserver.so)  // inlines: EntityToHScript, Get, GetContainer, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Item::Script_GetContainer(CDOTA_Item *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hContainer.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hContainer.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hContainer.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_Item::GetWorldDropSound  (line 1134, @0x00000000025a5340, libserver.so)  // inlines: GetAbilityName
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetString
// callers: CDOTA_Item::Precache, CDOTA_Item_Physical::SetContainedItem
// strings: "Item.DropRecipeWorld", "<NoAbilityName>", "Item.DropWorld", "WorldDropSound"
const char *__fastcall CDOTA_Item::GetWorldDropSound(const CDOTA_Item *const this)
{
  const char *v1; // r12
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v4; // rbx
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v6; // rax
  KeyValues *AbilityByName; // rax
  const char *String; // rax

  v1 = "Item.DropRecipeWorld";
  if ( (*(this->_vptr_IHandleEntity + 347))(this) == 0 )
  {
    m_pAbilityData = this->m_pAbilityData;
    v4 = "<NoAbilityName>";
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pszAbilityName != 0 )
        v4 = m_pszAbilityName;
    }
    v6 = DOTAGameManager();
    v1 = "Item.DropWorld";
    AbilityByName = CDOTAGameManager::GetAbilityByName(v6, v4);
    if ( AbilityByName != 0 )
    {
      String = KeyValues::GetString(AbilityByName, "WorldDropSound", 0, 0, 0);
      if ( String != 0 )
        return String;
    }
  }
  return v1;
}


// CDOTA_Item::OnSaveState  (line 1151, @0x0000000002597720, libserver.so)  // inlines: CEntityHandle, Get, GetClassNameAsCStr, GetClassname, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, String
// calls: CDOTABaseAbility::OnSaveState, KeyValues::SetString
// callers: CDOTA_Item_GlimmerCape::OnSaveState, CDOTA_Item_ShadowAmulet::OnSaveState
bool __fastcall CDOTA_Item::OnSaveState(CDOTA_Item *const this, KeyValues *pKV)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx

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
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        m_pEntity = v8->m_pInstance->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        KeyValues::SetString(pKV, "owner", m_pAsString);
      }
    }
  }
  return CDOTABaseAbility::OnSaveState(this, pKV);
}


// CDOTA_Item::OnLoadState  (line 1162, @0x0000000002594080, libserver.so)
// calls: KeyValues::GetString, CGameEntitySystem::FindEntityByClassname, CDOTABaseAbility::OnLoadState
// callers: CDOTA_Item_GlimmerCape::OnLoadState, CDOTA_Item_ShadowAmulet::OnLoadState
bool __fastcall CDOTA_Item::OnLoadState(CDOTA_Item *const this, KeyValues *pKV)
{
  const char *String; // rax
  CBaseEntity *EntityByClassname; // rax

  String = KeyValues::GetString(pKV, "owner", 0, 0, 0);
  if ( String != 0 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, String);
    if ( EntityByClassname != 0 )
      (*(this->_vptr_IHandleEntity + 40))(this, EntityByClassname);
  }
  return CDOTABaseAbility::OnLoadState(this, pKV);
}


// CDOTA_Item::Script_SetPurchaser  (line 1178, @0x0000000002597590, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, NetworkStateChanged, Set, SetPlayerOwnerID, ToDOTABaseNPC, ToEnt, operator=<int>
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_Item::Script_SetPurchaser(CDOTA_Item *const this, HSCRIPT hPurchaser)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  _BYTE *v6; // rax
  int v7; // r12d

  if ( hPurchaser != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hPurchaser, Script)) != 0)
    && v6[339] != 0 )
  {
    v7 = (*(*v6 + 3312LL))(v6);
  }
  else
  {
    v7 = -1;
  }
  if ( v7 != this->m_iPlayerOwnerID.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPlayerOwnerID.m_Value = v7;
  }
}


// CDOTA_Item::Script_GetPurchaser  (line 1184, @0x0000000002597fa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlayerOwnerID, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Item::Script_GetPurchaser(CDOTA_Item *const this)
{
  int m_Value; // edx
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  HSCRIPT result; // rax
  CEntityInstance *m_pInstance; // rbx
  int v6; // [rsp-28h] [rbp-28h]

  m_Value = this->m_iPlayerOwnerID.m_Value;
  if ( m_Value == -1 )
    return 0;
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, m_Value);
  if ( (v6 + 2) <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[v6 & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( v6 != v3->m_EHandle.m_Index )
    return 0;
  m_pInstance = v3->m_pInstance;
  if ( v3->m_pInstance == 0 )
    return 0;
  result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(v3->m_pInstance, 0);
    return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
  }
  return result;
}


// CDOTA_Item::OnOwnerDied  (line 1196, @0x00000000025a4a10, libserver.so)  // inlines: NetworkStateChanged, Set, SetPurchasedWhileDead, operator=<bool>
// calls: CDOTABaseAbility::OnOwnerDied, CDOTA_Item::ExpireSellback
// callers: CDOTA_Item_DataDriven::OnOwnerDied, CDOTA_Item_Lua::Script_OnOwnerDied, CDOTA_Item_DivineRapier::OnOwnerDied, CDOTA_Item_GemOfTrueSight::OnOwnerDied
void __fastcall CDOTA_Item::OnOwnerDied(CDOTA_Item *const this)
{
  CDOTABaseAbility::OnOwnerDied(this);
  if ( this->m_bPurchasedWhileDead.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bPurchasedWhileDead.m_Value = 0;
  }
  CDOTA_Item::ExpireSellback(this);
}


// CDOTA_Item::RefreshIntrinsicModifier  (line 1204, @0x00000000025940e0, libserver.so)
// calls: CDOTABaseAbility::RefreshIntrinsicModifier
// callers: CDOTA_Item_DataDriven::RefreshIntrinsicModifier
CDOTA_Buff *__fastcall CDOTA_Item::RefreshIntrinsicModifier(CDOTA_Item *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 348))(this) != 0 )
    return 0;
  else
    return CDOTABaseAbility::RefreshIntrinsicModifier(this);
}


// CDOTA_Item::OnAbilityPinged  (line 1212, @0x00000000025999d0, libserver.so)  // inlines: CDOTAUserMsg_AbilityPing_t, CDOTAUserMsg_ItemAlert_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_AbilityPing_t>, FindGameEvent<CDOTAUserMsg_ItemAlert_t>, FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>, FindOrCreateGameEvent<CDOTAUserMsg_ItemAlert_t>, GetAbilityName, GetMana, GetTeamNumber, IsPassive, PostEvent<CDOTAUserMsg_AbilityPing_t>, PostEvent<CDOTAUserMsg_ItemAlert_t>, SendUserMessage<CDOTAUserMsg_AbilityPing_t>, SendUserMessage<CDOTAUserMsg_ItemAlert_t>, set_ability_id, set_cooldown_seconds, set_has_ability_id, set_has_cooldown_seconds, set_has_itemid, set_has_level, set_has_mana_needed, set_has_passive, set_has_player_id, set_has_type, set_has_x, set_has_y, set_itemid, set_level, set_mana_needed, set_passive, set_player_id, set_type, set_x, set_y, ~CDOTAUserMsg_AbilityPing_t, ~CDOTAUserMsg_ItemAlert_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CDOTAPlayer::GetPlayerByPlayerID, CDOTAPlayer::IsChatWheelRateLimited, CDOTAPlayer::NoteChatWheelTime, CDOTAUserMsg_AbilityPing::CDOTAUserMsg_AbilityPing, DOTAGameManager, CDOTAGameManager::GetAbilityIndex, CDOTABaseAbility::GetCooldownTimeRemaining, ceilf, CTeamRecipientFilter::CTeamRecipientFilter, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing, CDOTABaseAbility::GetCaster (19 total)
// strings: "<NoAbilityName>"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemAlert_t>(bool)::s_hEvent
void __fastcall CDOTA_Item::OnAbilityPinged(CDOTA_Item *const this, int nPlayerID)
{
  CDOTAPlayer *PlayerByPlayerID; // rax
  CDOTAPlayer *v5; // r14
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v7; // r12
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v9; // rax
  int (**vptr_IHandleEntity)(...); // rax
  char v11; // al
  float CooldownTimeRemaining; // xmm0_4
  float v13; // xmm0_4
  __int64 v14; // r14
  IGameEventSystem *v15; // r13
  void (__fastcall *v16)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v18; // rax
  int v19; // eax
  CDOTA_BaseNPC *v20; // rax
  int x; // r14d
  CDOTAMsg_ItemAlert *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  int y; // r14d
  CDOTAMsg_ItemAlert *v25; // rax
  const char *v26; // r14
  DOTAAbilityData_t *v27; // rax
  const char *v28; // rax
  CDOTAGameManager *v29; // rax
  int v30; // r14d
  CDOTAMsg_ItemAlert *v31; // rax
  __int64 v32; // r15
  IGameEventSystem *v33; // r14
  float v34; // xmm1_4
  float v35; // xmm0_4
  void (__fastcall *v36)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1E8h]
  _QWORD v37[2]; // [rsp+10h] [rbp-1E0h] BYREF
  int v38; // [rsp+20h] [rbp-1D0h]
  int v39; // [rsp+30h] [rbp-1C0h]
  _QWORD v40[2]; // [rsp+40h] [rbp-1B0h] BYREF
  int v41; // [rsp+50h] [rbp-1A0h]
  int nPlayerIDa; // [rsp+58h] [rbp-198h]
  int AbilityIndex; // [rsp+5Ch] [rbp-194h]
  int v44; // [rsp+60h] [rbp-190h]
  int v45; // [rsp+64h] [rbp-18Ch]
  int m_Value; // [rsp+68h] [rbp-188h]
  bool v47; // [rsp+6Ch] [rbp-184h]
  int v48; // [rsp+70h] [rbp-180h]
  CTeamRecipientFilter filterbroadcast; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v50; // [rsp+1B8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(nPlayerID);
  v5 = PlayerByPlayerID;
  if ( PlayerByPlayerID != 0 && !CDOTAPlayer::IsChatWheelRateLimited(PlayerByPlayerID) )
  {
    CDOTAPlayer::NoteChatWheelTime(v5);
    CDOTAUserMsg_AbilityPing::CDOTAUserMsg_AbilityPing(v40);
    nPlayerIDa = nPlayerID;
    v40[0] = off_40D4F90;
    m_pAbilityData = this->m_pAbilityData;
    v7 = "<NoAbilityName>";
    v41 |= 1u;
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pszAbilityName != 0 )
        v7 = m_pszAbilityName;
    }
    v9 = DOTAGameManager();
    AbilityIndex = CDOTAGameManager::GetAbilityIndex(v9, v7);
    m_Value = this->m_iLevel.m_Value;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    v41 |= 0x12u;
    v11 = vptr_IHandleEntity[251](this);
    v41 |= 0x20u;
    v47 = (v11 & 2) != 0;
    if ( (*(this->_vptr_IHandleEntity + 245))(this) != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) == 0 || CDOTABaseAbility::IsOwnersManaEnough(this) )
      {
        v18 = CDOTABaseAbility::GetCaster(this);
        if ( (*(v18->_vptr_IHandleEntity + 408))(v18) != 0 && (*(this->_vptr_IHandleEntity + 224))(this) != 0 )
        {
          CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, v5->m_iTeamNum.m_Value, 0);
          CDOTAUserMsg_ItemAlert::CDOTAUserMsg_ItemAlert(v37);
          v37[0] = off_40F2750;
          v19 = (*(v5->_vptr_IHandleEntity + 393))(v5);
          v38 |= 1u;
          v39 = v19;
          v20 = CDOTABaseAbility::GetCaster(this);
          x = CBaseEntity::GetAbsOrigin(v20)->x;
          v22 = CDOTAUserMsg_ItemAlert::mutable_item_alert(v37);
          *(v22 + 4) |= 1u;
          *(v22 + 6) = x;
          v23 = CDOTABaseAbility::GetCaster(this);
          y = CBaseEntity::GetAbsOrigin(v23)->y;
          v25 = CDOTAUserMsg_ItemAlert::mutable_item_alert(v37);
          *(v25 + 4) |= 2u;
          *(v25 + 7) = y;
          v26 = "<NoAbilityName>";
          v27 = this->m_pAbilityData;
          if ( v27 != 0 )
          {
            v28 = v27->m_pszAbilityName;
            if ( v28 != 0 )
              v26 = v28;
          }
          v29 = DOTAGameManager();
          v30 = CDOTAGameManager::GetAbilityIndex(v29, v26);
          v31 = CDOTAUserMsg_ItemAlert::mutable_item_alert(v37);
          *(v31 + 8) = v30;
          v32 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ItemAlert_t>(bool)::s_hEvent;
          *(v31 + 4) |= 4u;
          v33 = g_pGameEventSystem;
          v36 = *(*g_pGameEventSystem + 128LL);
          (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v32);
          v36(v33, 0, 0, &filterbroadcast, v32, v37, 40);
          v37[0] = &off_40F25D0;
          CDOTAUserMsg_ItemAlert::~CDOTAUserMsg_ItemAlert(v37);
          goto LABEL_10;
        }
        v41 |= 4u;
        v44 = 1;
      }
      else
      {
        v41 |= 4u;
        v44 = 2;
        if ( CDOTABaseAbility::GetCaster(this) != 0 )
          v34 = CDOTABaseAbility::GetCaster(this)->m_flMana.m_Value;
        else
          v34 = 0.0;
        v35 = ceilf(this->m_iManaCost.m_Value - v34);
        v41 |= 0x40u;
        v48 = v35;
      }
    }
    else
    {
      v41 |= 4u;
      v44 = 3;
      CooldownTimeRemaining = CDOTABaseAbility::GetCooldownTimeRemaining(this);
      v13 = ceilf(CooldownTimeRemaining);
      v41 |= 8u;
      v45 = v13;
    }
    (*(this->_vptr_IHandleEntity + 216))(this, v40);
    CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, v5->m_iTeamNum.m_Value, 0);
    v14 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent;
    v15 = g_pGameEventSystem;
    v16 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilityPing_t>(bool)::s_hEvent);
    v16(v15, 0, 0, &filterbroadcast, v14, v40, 56);
LABEL_10:
    filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
    CRecipientFilter::~CRecipientFilter(&filterbroadcast);
    v40[0] = &off_40D4E10;
    CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing(v40);
  }
}


// CDOTA_Item::SetTransmit  (line 1279, @0x00000000025937d0, libserver.so)  // inlines: Bitvec_Set, Get, Set, entindex
// calls: CEntityInstance::GetEntityIndex
void __fastcall CDOTA_Item::SetTransmit(CDOTA_Item *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v4; // eax
  CBitVec<16384> *m_pTransmitEdict; // rsi

  v4.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  m_pTransmitEdict = pInfo->m_pTransmitEdict;
  if ( ((1 << SLOBYTE(v4.m_Data)) & m_pTransmitEdict->m_Ints[v4.m_Data >> 5]) == 0 )
    m_pTransmitEdict->m_Ints[v4.m_Data >> 5] |= 1 << SLOBYTE(v4.m_Data);
}


// CDOTA_Item::CanUnitPickUp  (line 1292, @0x0000000002593700, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame, IsControllableByPlayer, IsFreeCourierMode
bool __fastcall CDOTA_Item::CanUnitPickUp(CDOTA_Item *const this, CDOTA_BaseNPC *pUnit)
{
  __int64 v2; // rax
  int v3; // edx

  if ( g_pGameRules != 0 && (LOBYTE(v2) = g_pGameRules[5].m_szQuestName[114], v2 != 0) )
  {
    v3 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v3 != 15 && v3 != 19 && pUnit != 0 && (pUnit->m_iUnitType & 0x100) != 0 )
      return (pUnit->m_iIsControllableByPlayer64.m_Value >> this->m_iPlayerOwnerID.m_Value) & 1;
  }
  else
  {
    LOBYTE(v2) = 1;
  }
  return v2;
}


// CDOTA_Item::IsMuted  (line 1305, @0x0000000002594c70, libserver.so)  // inlines: operator!=<int>
// calls: CDOTABaseAbility::GetCaster
bool __fastcall CDOTA_Item::IsMuted(CDOTA_Item *const this)
{
  int v2; // eax
  bool v3; // dl
  CDOTA_BaseNPC *Caster; // rax

  v2 = (*(this->_vptr_IHandleEntity + 355))(this);
  v3 = 0;
  if ( v2 == 2 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = 1;
    if ( Caster != 0 && (Caster->m_iUnitType & 0x100) == 0 )
      return (*(Caster->_vptr_IHandleEntity + 414))(Caster) != this->m_iPlayerOwnerID.m_Value;
  }
  return v3;
}


// CDOTA_Item_Physical::YouForgotToImplementOrDeclareServerClass  (line 1330, @0x0000000002593760, libserver.so)
int __fastcall CDOTA_Item_Physical::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Physical *const this)
{
  return 0;
}


// CDOTA_Item_Physical::GetServerClass  (line 1330, @0x0000000002599950, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Physical::GetServerClass(CDOTA_Item_Physical *const this)
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


// CDOTA_Item_Physical::Precache  (line 1334, @0x00000000025bfbc0, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, Get, GetValue, GetValue<CEntityInstance*>, Precache, operator[]
// calls: CEntityInstance::Precache, CEntityHandle::operator CEntityInstance*, CDOTA_Item_Physical::PrecacheContainedItem, VariantFieldTypeName, Warning
// strings: "No free conversion of %s variant to CEntityInstance * right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_Item_Physical::Precache(CDOTA_Item_Physical *const this, const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v5; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r9
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // dx
  uint32 m_int; // eax
  CDOTA_Item *v13; // rsi
  const char *v14; // rax
  CEntityHandle v15; // [rsp+0h] [rbp-20h] BYREF

  CEntityInstance::Precache(this, pContext);
  m_pKeyValues = pContext->m_pKeyValues;
  v5 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v5 <= 0 )
  {
LABEL_15:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_12;
    return;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v7) == 2079848080 )
      goto LABEL_9;
LABEL_6:
    if ( *&v5 <= ++v7 )
      goto LABEL_15;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v7] != 2079848080 )
    goto LABEL_6;
LABEL_9:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  p_m_value = &v9[v7].m_value;
  m_type = p_m_value->m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    m_int = p_m_value->m_int;
    if ( m_type == 13 )
    {
      v15.m_Index = m_int;
      v13 = CEntityHandle::operator CEntityInstance *(&v15);
      if ( v13 != 0 )
        CDOTA_Item_Physical::PrecacheContainedItem(this, v13, pContext);
    }
    else
    {
      v14 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to CEntityInstance * right now\n", v14);
    }
  }
}


// CDOTA_Item_Physical::Spawn  (line 1347, @0x00000000025b5990, libserver.so)  // inlines: AddDroppedItem, AddSolidFlags, AddToTail, AssignTo, Base, CCollisionAttributeWriter, CEntityHandle, CHandle, CNetworkVarBase, Compare, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, EnableInteractsAs, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FindKeyHash, Get, GetEHandle, GetEntryIndex, GetForModify, GetGameTime, GetSerialNumber, GetValue, GetValue<CEntityInstance*>, GetValue<Vector>, GetValue<bool>, GrowMemory, MarkPVSInformationDirty, NetworkStateChanged, Release, RemoveEffects, Set, SetSolid, VPhysicsCollisionAttribute_t, _V_strcmp, operator=, operator[], ~CCollisionAttributeWriter
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModel, CBaseEntity::DispatchUpdateTransmitState, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, CBaseAnimating::UseClientSideAnimation, CEntityHandle::operator CEntityInstance*, CDOTA_Item_Physical::SetContainedItem, WatchPositionChanges, VariantFieldTypeName, Warning, FindClearSpaceForUnit (14 total)
// callers: CDOTA_Item_Tombstone_Drop::Spawn
// strings: "models/props_gameplay/red_box.vmdl", "No free conversion of %s variant to CEntityInstance * right now\n", "No free conversion of %s variant to Vector right now\n", "false", "true", "Invalid conversion : CString '%s' to bool\n" (7 total)
// globals: jpt_25B5B7E, CEntityKeyValues::sm_EmptyVariant
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Item_Physical::Spawn(CDOTA_Item_Physical *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CGameRules *v7; // r14
  __int64 v8; // r15
  int v9; // edx
  _DWORD *v10; // rdx
  float v11; // xmm0_4
  int m_nCount; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rcx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // si
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rdx
  CEntityVariant *v23; // rax
  int16 v24; // dx
  int m_int; // eax
  CDOTA_Item *v26; // rsi
  unsigned __int64 m_Value; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r12
  const char *v30; // rax
  char m_char; // al
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v32; // si
  __int64 v33; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v34; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v35; // rdx
  CEntityVariant *v36; // rdi
  int16 v37; // ax
  vec_t x; // xmm0_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  const char *v41; // rax
  const char *m_uint64; // rax
  const char *v43; // rax
  __int128 vLocation; // [rsp+10h] [rbp-70h] OVERLAPPED BYREF
  unsigned __int64 v45; // [rsp+20h] [rbp-60h]
  unsigned __int64 v46; // [rsp+28h] [rbp-58h]
  unsigned __int64 v47; // [rsp+30h] [rbp-50h]
  unsigned int v48; // [rsp+38h] [rbp-48h]
  unsigned __int16 v49; // [rsp+3Ch] [rbp-44h]
  unsigned __int8 v50; // [rsp+3Eh] [rbp-42h]
  unsigned __int8 v51; // [rsp+3Fh] [rbp-41h]
  char v52; // [rsp+40h] [rbp-40h]
  Vector v53; // 0:kr10_12.12

  p_m_Collision = &this->m_Collision;
  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModel(this, "models/props_gameplay/red_box.vmdl");
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 2);
  CCollisionProperty::SetSolidFlags(p_m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  LODWORD(vLocation) = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(vLocation) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
  }
  v7 = g_pGameRules;
  v8 = *&g_pGameRules[55].m_szQuestName[80];
  v9 = *&g_pGameRules[55].m_szQuestName[80];
  if ( v8 == *&g_pGameRules[55].m_szQuestName[96] )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&g_pGameRules[55].m_szQuestName[88], 1);
    v9 = *&v7[55].m_szQuestName[80];
  }
  *&v7[55].m_szQuestName[80] = v9 + 1;
  v10 = (*&v7[55].m_szQuestName[88] + 4 * v8);
  if ( v10 != 0 )
    *v10 = vLocation;
  v11 = 0.0;
  if ( g_pGameRules != 0 )
    v11 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fCreationTime = v11;
  this->m_nFlags = 0;
  CBaseAnimating::UseClientSideAnimation(this, 1);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_24:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_25;
    goto LABEL_23;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v14) == -1252107960 )
      goto LABEL_20;
LABEL_17:
    if ( m_nCount <= ++v14 )
      goto LABEL_24;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v14] != -1252107960 )
    goto LABEL_17;
LABEL_20:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v16 = pKeyValues->m_keyValues.m_pElements;
  else
    v16 = 0;
  p_m_value = &v16[v14].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
    goto LABEL_25;
LABEL_23:
  switch ( m_type )
  {
    case 1:
      m_char = p_m_value->m_float != 0.0;
      goto LABEL_72;
    case 5:
    case 37:
      m_char = p_m_value->m_int != 0;
      goto LABEL_72;
    case 6:
      m_char = p_m_value->m_char;
      goto LABEL_72;
    case 26:
    case 33:
      m_char = p_m_value->m_uint64 != 0;
      goto LABEL_72;
    case 30:
      m_uint64 = p_m_value->m_uint64;
      if ( strcmp(p_m_value->m_pszString, "0") == 0 || strcmp(m_uint64, "false") == 0 || strcmp(m_uint64, "no") == 0 )
        goto LABEL_25;
      if ( strcmp(m_uint64, "1") == 0 || strcmp(m_uint64, "true") == 0 || strcmp(m_uint64, "yes") == 0 )
        goto LABEL_73;
      Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
      goto LABEL_89;
    case 34:
      m_char = p_m_value->m_float64 != 0.0;
LABEL_72:
      if ( m_char == 0 )
        goto LABEL_25;
LABEL_73:
      if ( m_nCount <= 0 )
        goto LABEL_85;
      v32 = pKeyValues->m_keyHashes.m_nAllocated;
      v33 = 0;
      break;
    default:
      v43 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v43);
      goto LABEL_89;
  }
  while ( 2 )
  {
    if ( v32 == 0 )
    {
      if ( *(4 * v33) == -1510174757 )
        break;
      goto LABEL_78;
    }
    v34 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v32 > 9 )
      v34 = pKeyValues->m_keyHashes.m_pElements;
    if ( v34[v33] != -1510174757 )
    {
LABEL_78:
      if ( m_nCount <= ++v33 )
      {
LABEL_85:
        v36 = &CEntityKeyValues::sm_EmptyVariant;
        goto LABEL_86;
      }
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v35 = pKeyValues->m_keyValues.m_pElements;
  else
    v35 = 0;
  v36 = &v35[v33].m_value;
LABEL_86:
  v37 = v36->m_type;
  if ( v37 != 0 )
  {
    if ( v37 == 30 )
    {
      if ( V_sscanf(v36->m_uint64, "%g %g %g", &vLocation, &vLocation + 4, &vLocation + 8) != 3 )
        goto LABEL_87;
      z = *(&vLocation + 2);
      y = *(&vLocation + 1);
      LODWORD(x) = vLocation;
    }
    else
    {
      if ( v37 != 39 && v37 != 3 )
      {
        v41 = VariantFieldTypeName(v37);
        Warning("No free conversion of %s variant to Vector right now\n", v41);
        goto LABEL_87;
      }
      x = *v36->m_pszString;
      y = *(v36->m_uint64 + 4);
      z = *(v36->m_uint64 + 8);
    }
  }
  else
  {
LABEL_87:
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
  }
  *&vLocation = __PAIR64__(LODWORD(y), LODWORD(x));
  *(&vLocation + 2) = z;
  *&v53.x = __PAIR64__(LODWORD(y), LODWORD(x));
  v53.z = z;
  FindClearSpaceForUnit(this, v53, 1);
LABEL_89:
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
LABEL_25:
  if ( m_nCount > 0 )
  {
    v19 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( v19 != 0 )
      {
        v21 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v19 > 9 )
          v21 = pKeyValues->m_keyHashes.m_pElements;
        if ( v21[i] == 2079848080 )
        {
LABEL_33:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v22 = pKeyValues->m_keyValues.m_pElements;
          else
            v22 = 0;
          v23 = &v22[i].m_value;
          v24 = v23->m_type;
          if ( v24 != 0 )
            goto LABEL_36;
          goto LABEL_40;
        }
      }
      else if ( *(4 * i) == 2079848080 )
      {
        goto LABEL_33;
      }
    }
  }
  v23 = &CEntityKeyValues::sm_EmptyVariant;
  v24 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v24 != 0 )
  {
LABEL_36:
    m_int = v23->m_int;
    if ( v24 == 13 )
    {
      LODWORD(vLocation) = m_int;
      v26 = CEntityHandle::operator CEntityInstance *(&vLocation);
      if ( v26 != 0 )
        CDOTA_Item_Physical::SetContainedItem(this, v26);
    }
    else
    {
      v30 = VariantFieldTypeName(v24);
      Warning("No free conversion of %s variant to CEntityInstance * right now\n", v30);
    }
  }
LABEL_40:
  *&vLocation = p_m_Collision;
  *(&vLocation + 1) = off_3FC4F90;
  v49 = 0;
  m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( m_Value != 0 )
    v45 = m_Value;
  v28 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  if ( v28 != 0 )
  {
    v46 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    v28 = v47;
  }
  if ( v28 != this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value )
  {
    (*(*(&vLocation + 1) + 16LL))(&vLocation + 8, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v47 = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
  }
  if ( v48 != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
  {
    (*(*(&vLocation + 1) + 16LL))(&vLocation + 8, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v48 = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
  }
  if ( v49 != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
  {
    (*(*(&vLocation + 1) + 16LL))(&vLocation + 8, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v49 = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  if ( v50 != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
  {
    (*(*(&vLocation + 1) + 16LL))(&vLocation + 8, 38, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v50 = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
  }
  if ( v51 != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
  {
    (*(*(&vLocation + 1) + 16LL))(&vLocation + 8, 39, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v51 = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  }
  v29 = vLocation;
  *(vLocation + 24) |= 0x40000000uLL;
  if ( v52 == 0 )
  {
    v52 = 1;
    if ( *(v29 + 24) != v45 )
      (*(*(v29 + 16) + 16LL))(v29 + 16, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( *(v29 + 32) != v46 )
      (*(*(v29 + 16) + 16LL))(v29 + 16, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( *(v29 + 40) != v47 )
      (*(*(v29 + 16) + 16LL))(v29 + 16, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( *(v29 + 48) != v48 )
      (*(*(v29 + 16) + 16LL))(v29 + 16, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( *(v29 + 52) != v49 )
      (*(*(v29 + 16) + 16LL))(v29 + 16, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( *(v29 + 54) != v50 )
      (*(*(v29 + 16) + 16LL))(v29 + 16, 38, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( *(v29 + 55) != v51 )
      (*(*(v29 + 16) + 16LL))(v29 + 16, 39, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  }
  WatchPositionChanges(this, this);
}


// CDOTA_Item_Physical::PrecacheContainedItem  (line 1386, @0x00000000025a54a0, libserver.so)  // inlines: GetAbilityData, GetEffectForDroppedItem, GetModelAlternateForDroppedItem, GetModelForDroppedItem
// calls: PrecacheParticleSystem, CBaseEntity::PrecacheModel, CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Item_Physical::Precache
void __fastcall CDOTA_Item_Physical::PrecacheContainedItem(
        CDOTA_Item_Physical *const this,
        CDOTA_Item *pItem,
        const CEntityPrecacheContext *pContext)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pModelName; // rdi
  const char *m_pModelAlternateName; // rdi
  const char *m_pEffectName; // rdi

  m_pAbilityData = pItem->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(pItem, 0);
    m_pAbilityData = pItem->m_pAbilityData;
  }
  m_pModelName = m_pAbilityData->m_pModelName;
  if ( m_pModelName != 0 && *m_pModelName != 0 )
  {
    CBaseEntity::PrecacheModel(m_pModelName, pContext);
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(pItem, 0);
      m_pAbilityData = pItem->m_pAbilityData;
    }
  }
  m_pModelAlternateName = m_pAbilityData->m_pModelAlternateName;
  if ( m_pModelAlternateName != 0 && *m_pModelAlternateName != 0 )
  {
    CBaseEntity::PrecacheModel(m_pModelAlternateName, pContext);
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(pItem, 0);
      m_pAbilityData = pItem->m_pAbilityData;
    }
  }
  m_pEffectName = m_pAbilityData->m_pEffectName;
  if ( m_pEffectName != 0 && *m_pEffectName != 0 )
    PrecacheParticleSystem(m_pEffectName, pContext);
}


// CDOTA_Item_Physical::SetContainedItem  (line 1407, @0x00000000025a5580, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetAbilityData, GetEHandle, GetEffectForDroppedItem, GetEntityIdentity, GetEntryIndex, GetInstance, GetModelAlternateForDroppedItem, GetModelForDroppedItem, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetContainer, operator CEntityInstance*, operator!=<CDOTA_Item>, operator=, operator=<CDOTA_Item*>
// calls: CBaseEntity::SetParent, CBaseModelEntity::SetModel, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetCaster, CDOTA_Item::GetWorldDropSound, CDOTA_BaseNPC::UnitEmitSound, CBaseAnimating::ResetSequenceInfo, CBaseEntity::GetModelName, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetSequence (13 total)
// callers: CDOTA_Item_Physical::Script_SetContainedItem, CDOTA_Item_Tombstone_Drop::OnPickup, CDOTA_Item_Physical::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Physical::SetContainedItem(CDOTA_Item_Physical *const this, CDOTA_Item *pItem)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  unsigned int v6; // esi
  uint32 m_Id; // r13d
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // rdx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  int v16; // edx
  __int16 v17; // cx
  bool v18; // zf
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pModelName; // rsi
  DOTAAbilityData_t *v21; // rax
  const char *m_pEffectName; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *Caster; // r13
  const char *WorldDropSound; // rax
  HSequence v27; // eax
  string_t modelname; // [rsp+0h] [rbp-30h] BYREF

  LODWORD(modelname.u.m_Id) = -1;
  if ( pItem != 0 && (m_pEntity = pItem->m_pEntity) != 0 )
  {
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(modelname.u.m_Id) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    v6 = LODWORD(modelname.u.m_Id) + 2;
    m_Id = modelname.u.m_Id;
  }
  else
  {
    v6 = 1;
    m_Id = -1;
  }
  m_Index = this->m_hItem.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Value.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hItem.m_Value.m_Index & 0x1FF];
      if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  v12 = 0;
  if ( v6 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(modelname.u.m_Id) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[modelname.u.m_Id & 0x1FF];
      if ( v14 != 0 && v14->m_EHandle.m_Index == m_Id )
        v12 = v14->m_pInstance;
    }
  }
  if ( m_pInstance != v12 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hItem.m_Value.m_Index = m_Id;
  }
  v15 = this->m_pEntity;
  if ( v15 != 0 )
  {
    v16 = (v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1);
    v17 = 0x7FFF;
    if ( v15->m_EHandle.m_Index != -1 )
      v17 = v15->m_EHandle.m_Index & 0x7FFF;
    LOWORD(pItem->m_hContainer.m_Index) = v17 | pItem->m_hContainer.m_Index & 0x8000;
    pItem->m_hContainer.m_Index = (v16 << 15) | pItem->m_hContainer.m_Index & 0x7FFF;
  }
  else
  {
    pItem->m_hContainer.m_Index = -1;
  }
  CBaseEntity::SetParent(pItem, 0, 0, 0);
  v18 = (*(pItem->_vptr_IHandleEntity + 332))(pItem) == 0;
  m_pAbilityData = pItem->m_pAbilityData;
  if ( v18 )
  {
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(pItem, 0);
      m_pAbilityData = pItem->m_pAbilityData;
    }
    m_pModelName = m_pAbilityData->m_pModelName;
  }
  else
  {
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(pItem, 0);
      m_pAbilityData = pItem->m_pAbilityData;
    }
    m_pModelName = m_pAbilityData->m_pModelAlternateName;
  }
  CBaseModelEntity::SetModel(this, m_pModelName);
  v21 = pItem->m_pAbilityData;
  if ( v21 == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(pItem, 0);
    v21 = pItem->m_pAbilityData;
  }
  m_pEffectName = v21->m_pEffectName;
  ParticleManager = GetParticleManager();
  LODWORD(m_pEffectName) = CDOTA_ParticleManager::CreateParticle(ParticleManager, m_pEffectName, 1, this, 0, 0);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, m_pEffectName);
  Caster = CDOTABaseAbility::GetCaster(pItem);
  if ( Caster != 0 )
  {
    WorldDropSound = CDOTA_Item::GetWorldDropSound(pItem);
    CDOTA_BaseNPC::UnitEmitSound(Caster, WorldDropSound, 0.0, 0, 0);
  }
  CBaseAnimating::ResetSequenceInfo(this);
  CBaseEntity::GetModelName(&modelname, this);
  v27.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1500).m_Data;
  if ( v27.m_Data != -1 )
    CBaseAnimating::SetSequence(this, v27, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
}


// CreateItemOnPositionAsync  (line 1438, @0x00000000025b4020, libserver.so)  // inlines: AddKeyValue<QAngle>, AddKeyValue<bool>, AddToTail, Allocate<QAngle>, Base, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyData<QAngle>, CopyFrom<FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void> >, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, CopyKeysFrom, Element, EntitySpawnerAsyncDesc_t, FastDelegate2, FilterSpawnGroupEntity, FindKeyHash, Free, GetClassInfo, IsEmpty, OverrideAllocator, Purge, QueueContextCallbacks, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, SetClassName, SetMementoFrom, SetToIdentity, SetValue, SetValue<CDOTA_Item*>, SetValue<QAngle>, SetValue<Vector>, SetValue<bool>, SetWorldTransform, Spawn, SpawnInternal, operator!, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_Item_Physical>::Init, CEntityKeyValues::CopyFrom, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<CDOTA_Item*>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix, CGameEntitySystem::ListenForEntityInSpawnGroupToFinish, Warning (23 total)
// callers: CDOTA_ActionRunner::PerformAction_CreateItem, CDOTA_Modifier_Gold_Bag_Launch::OnDestroy, CDOTA_Tutorial::ParseLessonKeys, CDOTA_BaseNPC_Creature::Event_Killed, CDOTA_Unit_SpiritBear::Event_Killed
// strings: "dota_item_drop", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CreateItemOnPositionAsync(
        Vector vLocation,
        CDOTA_Item *pContainedItem,
        CEntityKeyValues *pExtraKeyValues,
        const CEntityKeyValues *a4)
{
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *m_pEntityKeyValues; // r12
  CEntityKeyValues *v8; // r12
  __int64 v9; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v10; // r15
  __int64 v11; // rbx
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *v14; // r12
  bool v15; // zf
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // r14
  CEntitySpawnerContext<CDOTA_Item_Physical> *m_pContext; // rbx
  SpawnGroupHandle_t i; // r15d
  __int64 delta; // rcx
  CEntityInstance *m_pCompletionListener; // r8
  __int64 pfn; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  CUtlScratchMemoryPool *v26; // rdi
  CEntityKeyValues *v27; // rbx
  int v29; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v30; // cx
  __int64 v31; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v32; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v34; // cx
  __int64 v35; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v36; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int64 v38; // r15
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v41; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  __int64 v45; // r15
  unsigned __int64 v46; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v47; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rax
  __int64 v49; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // r15
  uint16 v51; // ax
  QAngle *v52; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int16 v57; // ax
  __int64 v58; // r12
  __int16 v59; // ax
  QAngle *v60; // rax
  __int64 v61; // [rsp+10h] [rbp-1C0h]
  __int64 v62; // [rsp+10h] [rbp-1C0h]
  CDOTA_Item *pContainedItema; // [rsp+18h] [rbp-1B8h] BYREF
  Vector vLocationa; // [rsp+20h] [rbp-1B0h] BYREF
  CEntityKeyValues *v65; // [rsp+30h] [rbp-1A0h] BYREF
  CEntityKeyValues *v66; // [rsp+38h] [rbp-198h] BYREF
  __int64 v67[4]; // [rsp+40h] [rbp-190h] BYREF
  int v68; // [rsp+60h] [rbp-170h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v69; // [rsp+68h] [rbp-168h] BYREF
  int v70; // [rsp+80h] [rbp-150h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v71; // [rsp+88h] [rbp-148h] BYREF
  __int64 v72[4]; // [rsp+A0h] [rbp-130h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_Item_Physical> spawnerDesc; // [rsp+C0h] [rbp-110h] BYREF
  CEntitySpawnerAsync<CDOTA_Item_Physical> spawner; // [rsp+F0h] [rbp-E0h] BYREF

  pContainedItema = pContainedItem;
  spawner._vptr_CEntitySpawnerBase = off_410C6D0;
  vLocationa = vLocation;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = 0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pFilter = 0;
  spawner._vptr_CEntitySpawnerBase = off_410C710;
  spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP;
  spawnerDesc.m_flTimeoutInterval = 2.0;
  spawnerDesc.m_pContext = 0;
  spawnerDesc.m_pSpawnGroupToWorld = 0;
  spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  spawnerDesc.m_iPriorityLoader = -2;
  spawnerDesc.m_bManualCompletion = 0;
  spawnerDesc.m_worldGroupId.m_nHashCode = 0;
  spawnerDesc.m_hOwnerSpawnGroup = -1;
  CEntitySpawnerAsync<CDOTA_Item_Physical>::Init(&spawner, &spawnerDesc);
  if ( a4 != 0 )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, a4, 1);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "dota_item_drop");
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        "dota_item_drop",
                        &spawner.m_scriptClassName);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_62:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      LOWORD(v38) = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      v38 = v38;
      m_pElements[v38] = -1252107960;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v41 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v41 = 0;
      v42 = &v41[v38];
      m_flags = v42->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v42->m_value.m_flags = m_flags & 0xFFFE;
      v42->m_value.m_uint64 = 0;
      v42->m_value.m_type = 6;
      v42->m_value.m_char = 1;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v44 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v44 = 0;
      v44[v38].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      goto LABEL_4;
    }
    v34 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v35 = 0;
    while ( 1 )
    {
      if ( v34 != 0 )
      {
        v36 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v34 > 9 )
          v36 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v36 = 0;
      }
      if ( v36[v35] == -1252107960 )
        break;
      if ( m_nCount <= ++v35 )
        goto LABEL_62;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v54 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v55 = v35;
      v56 = &v54[v55];
      if ( v54[v55].m_pAttributeName != 0 )
      {
LABEL_84:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v54[v55].m_pAttributeName);
LABEL_85:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_4;
      }
    }
    else
    {
      v55 = v35;
      v54 = 0;
      v56 = v55 * 24;
      if ( *(v55 * 24 + 16) != 0 )
        goto LABEL_84;
    }
    v57 = *(v56 + 10);
    if ( (v57 & 1) != 0 )
      *(v56 + 10) = v57 & 0xFFFE;
    *v56 = 0;
    *(v56 + 8) = 6;
    *v56 = 1;
    goto LABEL_85;
  }
LABEL_4:
  CEntityKeyValues::SetValue<Vector>(m_pEntityKeyValues, -1510174757, &vLocationa);
  CEntityKeyValues::SetValue<CDOTA_Item *>(spawner.m_pEntityKeyValues, 2079848080, &pContainedItema);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &vLocationa);
  v8 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
    v9 = *(&pExtraKeyValues->m_keyHashes.2 + 2);
    v10 = pExtraKeyValues->m_keyHashes.m_pElements;
    v11 = *&pExtraKeyValues->m_keyHashes.m_nCount;
    v61 = v9;
    goto LABEL_6;
  }
  v29 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v29 > 0 )
  {
    v30 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v31 = 0;
    while ( 1 )
    {
      if ( v30 != 0 )
      {
        v32 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v30 > 9 )
          v32 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v32 = 0;
      }
      if ( v32[v31] == -1164387633 )
        break;
      if ( v29 <= ++v31 )
        goto LABEL_72;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v23 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v24 = v31;
      if ( v23[v24].m_pAttributeName != 0 )
      {
LABEL_26:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v23[v24].m_pAttributeName);
LABEL_27:
        v8 = spawner.m_pEntityKeyValues;
        goto LABEL_28;
      }
      v58 = &v23[v24];
    }
    else
    {
      v24 = v31;
      v23 = 0;
      v58 = v24 * 24;
      if ( *(v24 * 24 + 16) != 0 )
        goto LABEL_26;
    }
    v59 = *(v58 + 10);
    if ( (v59 & 1) != 0 )
      *(v58 + 10) = v59 & 0xFFFE;
    *v58 = 0;
    *(v58 + 8) = 39;
    v60 = CEntityVariantAllocator::Allocate(0xCu);
    *v58 = v60;
    *v60 = vec3_angle;
    *(v58 + 10) |= 1u;
    goto LABEL_27;
  }
LABEL_72:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  LOWORD(v45) = v8->m_keyHashes.m_nCount - 1;
  v46 = v8->m_keyHashes.m_nAllocated;
  if ( v46 != 0 )
  {
    if ( v46 <= 9 )
      v47 = (&v8->m_keyHashes.m_nAllocAllocated + 1);
    else
      v47 = v8->m_keyHashes.m_pElements;
  }
  else
  {
    v47 = 0;
  }
  v45 = v45;
  v47[v45] = -1164387633;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v8->m_keyValues);
  if ( v8->m_keyValues.m_nAllocated != 0 )
    v48 = v8->m_keyValues.m_pElements;
  else
    v48 = 0;
  v49 = 24 * v45;
  v50 = &v48[v45];
  v62 = v49;
  v51 = v50->m_value.m_flags;
  if ( (v51 & 1) != 0 )
    v50->m_value.m_flags = v51 & 0xFFFE;
  v50->m_value.m_uint64 = 0;
  v50->m_value.m_type = 39;
  v52 = CEntityVariantAllocator::Allocate(0xCu);
  v50->m_value.m_uint64 = v52;
  *v52 = vec3_angle;
  v50->m_value.m_flags |= 1u;
  if ( v8->m_keyValues.m_nAllocated != 0 )
    v53 = v8->m_keyValues.m_pElements;
  else
    v53 = 0;
  v8 = spawner.m_pEntityKeyValues;
  *(&v53->m_pAttributeName + v62) = 0;
LABEL_28:
  v25 = *(&pExtraKeyValues->m_keyHashes.2 + 2);
  v10 = pExtraKeyValues->m_keyHashes.m_pElements;
  v11 = *&pExtraKeyValues->m_keyHashes.m_nCount;
  v61 = v25;
  if ( v8 == 0 )
    goto LABEL_29;
LABEL_6:
  if ( spawner.m_pEntityClass == 0 )
  {
    CEntityKeyValues::HasValue(v8, -971301790);
    goto LABEL_29;
  }
  HasValue = CEntityKeyValues::HasValue(v8, -971301790);
  m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
  if ( !HasValue && m_pszClassname != 0 )
  {
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
  }
  (*(*engine + 464LL))(engine, spawner.m_hSpawnGroupHandle, m_pszClassname);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  v14 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pFilter != 0 )
  {
    v65 = spawner.m_pEntityKeyValues;
    v69.m_pMemory = &v65;
    v66 = 0;
    v68 = 1;
    v69.m_nAllocationCount = 1;
    v69.m_nGrowSize = 0x40000000;
    v70 = 0;
    v71.m_pMemory = &v66;
    v71.m_nAllocationCount = 1;
    v71.m_nGrowSize = 0x40000000;
    (*(spawner.m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(
      spawner.m_pFilter,
      spawner.m_hSpawnGroupHandle,
      spawner.m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY,
      &v68,
      &v70);
    v14 = 0;
    v15 = v70 == 1;
    v70 = 0;
    if ( v15 )
      v14 = v66;
    if ( (v71.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&v71);
      if ( (v71.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v71);
    }
    v68 = 0;
    if ( (v69.m_nGrowSize & 0xC0000000) != 0
      || (CUtlMemory<CEntityKeyValues const*,int>::Purge(&v69), (v69.m_nGrowSize & 0xC0000000) != 0) )
    {
      if ( v14 == 0 )
        goto LABEL_29;
    }
    else
    {
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&v69);
      if ( v14 == 0 )
        goto LABEL_29;
    }
  }
  SetIdentityMatrix(&spawnerDesc);
  v16 = (*(spawner.m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
          spawner.m_pLoadingSpawnGroup,
          spawner.m_hOwnerSpawnGroup,
          &spawnerDesc,
          1,
          v14);
  v17 = v16;
  if ( v16 != 0 )
  {
    if ( v11 != 0 || v10 != 0 )
    {
      v67[1] = v10;
      v67[0] = v11;
      v67[2] = v61;
      CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
        g_pGameEntitySystem,
        spawner.m_hSpawnGroupHandle,
        v16,
        v14,
        0,
        v67);
    }
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pContext->m_callback.m_Closure.m_pthis != 0 || pfn != 0 )
      {
        v72[0] = m_pContext->m_callback.m_Closure.m_pthis;
        delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
        v72[1] = pfn;
        m_pCompletionListener = m_pContext->m_pCompletionListener;
        v72[2] = delta;
        CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
          g_pGameEntitySystem,
          i,
          v17,
          v14,
          m_pCompletionListener,
          v72);
      }
    }
  }
LABEL_29:
  v26 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_410C6D0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v26 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v26);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v27 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v27);
      operator delete(v27);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CreateItemOnPositionSync  (line 1454, @0x00000000025b1a60, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddKeyValue<bool>, AddToTail, Allocate<QAngle>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData<QAngle>, CopyKeysFrom, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<CDOTA_Item*>, SetValue<QAngle>, SetValue<Vector>, SetValue<bool>, SetWorldTransform, Spawn, operator CDOTA_Item_Physical*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::CopyFrom, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<CDOTA_Item*>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity (27 total)
// callers: CGridNav::DestroyTreesAroundPoint, VScript_CreateItemOnPositionSync, CDOTA_UnitInventory::DropItemAtFountain, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_UnitInventory::DisassembleItem, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_UnitInventory::AddItem
// strings: "dota_item_drop", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDOTA_Item_Physical *__fastcall CreateItemOnPositionSync(
        CDOTA_Item *pContainedItem,
        CEntityKeyValues *pExtraKeyValues,
        double a3,
        vec_t a4)
{
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityKeyValues *v11; // rbx
  int m_enabled; // edx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v14; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v16; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v18; // si
  int v19; // edx
  CEntitySpawnerContext<CDOTA_Item_Physical> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v24; // rdi
  CEntityInstance *v25; // rax
  CUtlScratchMemoryPool *v26; // rdi
  CEntityInstance *v27; // rbx
  CEntityKeyValues *v28; // r13
  const char *m_pszClassname; // rdx
  int v32; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v33; // cx
  __int64 v34; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // cx
  __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v41; // r14
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  __int16 v48; // r15
  unsigned __int64 v49; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v50; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v51; // r14
  __int64 v52; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // r14
  uint16 v54; // ax
  QAngle *v55; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v57; // rdx
  __int64 v58; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int16 v62; // ax
  __int64 v63; // rbx
  __int16 v64; // ax
  QAngle *v65; // rax
  bool v66; // [rsp+27h] [rbp-109h]
  CDOTA_Item *pContainedItema; // [rsp+28h] [rbp-108h] BYREF
  Vector vLocationa; // [rsp+30h] [rbp-100h] BYREF
  CEntityHandle v69; // [rsp+40h] [rbp-F0h] BYREF
  _QWORD v70[2]; // [rsp+50h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_Item_Physical> spawner; // [rsp+60h] [rbp-D0h] BYREF

  pContainedItema = pContainedItem;
  *&vLocationa.x = a3;
  vLocationa.z = a4;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_410C730;
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
  spawner.m_pEntityClass = g_pEntityCDOTA_Item_PhysicalClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  if ( pExtraKeyValues != 0 )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, pExtraKeyValues, 1);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "dota_item_drop");
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        "dota_item_drop",
                        &spawner.m_scriptClassName);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_57:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v41 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      m_pElements[v41] = -1252107960;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v44 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v44 = 0;
      v45 = &v44[v41];
      m_flags = v45->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v45->m_value.m_flags = m_flags & 0xFFFE;
      v45->m_value.m_uint64 = 0;
      v45->m_value.m_type = 6;
      v45->m_value.m_char = 1;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v47 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v47 = 0;
      v47[v41].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      goto LABEL_6;
    }
    v37 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v38 = 0;
    while ( 1 )
    {
      if ( v37 != 0 )
      {
        v39 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v37 > 9 )
          v39 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v39 = 0;
      }
      if ( v39[v38] == -1252107960 )
        break;
      if ( m_nCount <= ++v38 )
        goto LABEL_57;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v59 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v60 = v38;
      v61 = &v59[v60];
      if ( v59[v60].m_pAttributeName != 0 )
      {
LABEL_85:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v59[v60].m_pAttributeName);
LABEL_86:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_6;
      }
    }
    else
    {
      v60 = v38;
      v59 = 0;
      v61 = v60 * 24;
      if ( *(v60 * 24 + 16) != 0 )
        goto LABEL_85;
    }
    v62 = *(v61 + 10);
    if ( (v62 & 1) != 0 )
      *(v61 + 10) = v62 & 0xFFFE;
    *v61 = 0;
    *(v61 + 8) = 6;
    *v61 = 1;
    goto LABEL_86;
  }
LABEL_6:
  CEntityKeyValues::SetValue<Vector>(m_pEntityKeyValues, -1510174757, &vLocationa);
  CEntityKeyValues::SetValue<CDOTA_Item *>(spawner.m_pEntityKeyValues, 2079848080, &pContainedItema);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &vLocationa);
  v11 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v32 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v32 <= 0 )
    {
LABEL_67:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v48 = v11->m_keyHashes.m_nCount - 1;
      v49 = v11->m_keyHashes.m_nAllocated;
      if ( v49 != 0 )
      {
        if ( v49 <= 9 )
          v50 = (&v11->m_keyHashes.m_nAllocAllocated + 1);
        else
          v50 = v11->m_keyHashes.m_pElements;
      }
      else
      {
        v50 = 0;
      }
      v50[v48] = -1164387633;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v11->m_keyValues);
      if ( v11->m_keyValues.m_nAllocated != 0 )
        v51 = v11->m_keyValues.m_pElements;
      else
        v51 = 0;
      v52 = v48;
      v53 = &v51[v52];
      v54 = v53->m_value.m_flags;
      if ( (v54 & 1) != 0 )
        v53->m_value.m_flags = v54 & 0xFFFE;
      v53->m_value.m_uint64 = 0;
      v53->m_value.m_type = 39;
      v55 = CEntityVariantAllocator::Allocate(0xCu);
      v53->m_value.m_uint64 = v55;
      *v55 = vec3_angle;
      v53->m_value.m_flags |= 1u;
      if ( v11->m_keyValues.m_nAllocated != 0 )
        v56 = v11->m_keyValues.m_pElements;
      else
        v56 = 0;
      v56[v52].m_pAttributeName = 0;
      v11 = spawner.m_pEntityKeyValues;
LABEL_81:
      v69.m_Index = -1;
      if ( v11 == 0 )
        goto LABEL_26;
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
      if ( v35[v34] == -1164387633 )
        break;
      if ( v32 <= ++v34 )
        goto LABEL_67;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v57 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v58 = v34;
      if ( v57[v58].m_pAttributeName != 0 )
      {
LABEL_79:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v57[v58].m_pAttributeName);
LABEL_80:
        v11 = spawner.m_pEntityKeyValues;
        goto LABEL_81;
      }
      v63 = &v57[v58];
    }
    else
    {
      v58 = v34;
      v57 = 0;
      v63 = v58 * 24;
      if ( *(v58 * 24 + 16) != 0 )
        goto LABEL_79;
    }
    v64 = *(v63 + 10);
    if ( (v64 & 1) != 0 )
      *(v63 + 10) = v64 & 0xFFFE;
    *v63 = 0;
    *(v63 + 8) = 39;
    v65 = CEntityVariantAllocator::Allocate(0xCu);
    *v63 = v65;
    *v65 = vec3_angle;
    *(v63 + 10) |= 1u;
    goto LABEL_80;
  }
  v69.m_Index = -1;
LABEL_8:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v66 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    v11 = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(v11, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v14 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v14,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v16 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v18 = 0x7FFF;
      v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v69.m_Index) = v18 | v69.m_Index & 0x8000;
      v69.m_Index = (v19 << 15) | v69.m_Index & 0x7FFF;
    }
    else
    {
      v69.m_Index = -1;
    }
    v70[0] = m_pEntity;
    v70[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v70,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v16, spawner.m_pEntityKeyValues);
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
        (pfn)(v24, v16, i);
      }
    }
  }
  if ( v66 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
LABEL_26:
  v25 = CEntityHandle::operator CEntityInstance *(&v69);
  v26 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  v27 = v25;
  spawner._vptr_CEntitySpawnerBase = off_410C6D0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v26 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v26);
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
  return v27;
}


// CreateItemOnPositionForLaunch  (line 1469, @0x00000000025b11d0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddToTail, Allocate<QAngle>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData<QAngle>, CopyKeysFrom, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<CDOTA_Item*>, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, operator CDOTA_Item_Physical*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::CopyFrom, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<CDOTA_Item*>, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity (27 total)
// callers: VScript_CreateItemOnPositionForLaunch
// strings: "dota_item_drop", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDOTA_Item_Physical *__fastcall CreateItemOnPositionForLaunch(
        CDOTA_Item *pContainedItem,
        CEntityKeyValues *pExtraKeyValues,
        double a3,
        vec_t a4)
{
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // r14d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v12; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v14; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // si
  int v17; // edx
  CEntitySpawnerContext<CDOTA_Item_Physical> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v22; // rdi
  CEntityInstance *v23; // rax
  CUtlScratchMemoryPool *v24; // rdi
  CEntityInstance *v25; // rbx
  CEntityKeyValues *v26; // r13
  const char *m_pszClassname; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // cx
  __int64 v32; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v35; // r15
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // r14
  __int64 v39; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // r14
  uint16 m_flags; // ax
  QAngle *v42; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int16 v47; // ax
  QAngle *v48; // rax
  bool v49; // [rsp+27h] [rbp-109h]
  CDOTA_Item *pContainedItema; // [rsp+28h] [rbp-108h] BYREF
  Vector vLocationa; // [rsp+30h] [rbp-100h] BYREF
  CEntityHandle v52; // [rsp+40h] [rbp-F0h] BYREF
  _QWORD v53[2]; // [rsp+50h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_Item_Physical> spawner; // [rsp+60h] [rbp-D0h] BYREF

  pContainedItema = pContainedItem;
  *&vLocationa.x = a3;
  vLocationa.z = a4;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_410C730;
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
  spawner.m_pEntityClass = g_pEntityCDOTA_Item_PhysicalClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  if ( pExtraKeyValues != 0 )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, pExtraKeyValues, 1);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "dota_item_drop");
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             "dota_item_drop",
                             &spawner.m_scriptClassName);
  CEntityKeyValues::SetValue<CDOTA_Item *>(spawner.m_pEntityKeyValues, 2079848080, &pContainedItema);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &vLocationa);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_48:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v35 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      m_pElements[v35] = -1164387633;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v38 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v38 = 0;
      v39 = v35;
      v40 = &v38[v39];
      m_flags = v40->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v40->m_value.m_flags = m_flags & 0xFFFE;
      v40->m_value.m_uint64 = 0;
      v40->m_value.m_type = 39;
      v42 = CEntityVariantAllocator::Allocate(0xCu);
      v40->m_value.m_uint64 = v42;
      *v42 = vec3_angle;
      v40->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v43 = 0;
      v43[v39].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_62:
      v52.m_Index = -1;
      if ( m_pEntityKeyValues == 0 )
        goto LABEL_25;
      goto LABEL_7;
    }
    v31 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v32 = 0;
    while ( 1 )
    {
      if ( v31 != 0 )
      {
        v33 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v31 > 9 )
          v33 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v33 = 0;
      }
      if ( v33[v32] == -1164387633 )
        break;
      if ( m_nCount <= ++v32 )
        goto LABEL_48;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v44 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v45 = v32;
      if ( v44[v45].m_pAttributeName != 0 )
      {
LABEL_60:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v44[v45].m_pAttributeName);
LABEL_61:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_62;
      }
      v46 = &v44[v45];
    }
    else
    {
      v45 = v32;
      v44 = 0;
      v46 = v45 * 24;
      if ( *(v45 * 24 + 16) != 0 )
        goto LABEL_60;
    }
    v47 = *(v46 + 10);
    if ( (v47 & 1) != 0 )
      *(v46 + 10) = v47 & 0xFFFE;
    *v46 = 0;
    *(v46 + 8) = 39;
    v48 = CEntityVariantAllocator::Allocate(0xCu);
    *v46 = v48;
    *v48 = vec3_angle;
    *(v46 + 10) |= 1u;
    goto LABEL_61;
  }
  v52.m_Index = -1;
LABEL_7:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v49 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v12 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v12,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v14 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = 0x7FFF;
      v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v52.m_Index) = v16 | v52.m_Index & 0x8000;
      v52.m_Index = (v17 << 15) | v52.m_Index & 0x7FFF;
    }
    else
    {
      v52.m_Index = -1;
    }
    v53[0] = m_pEntity;
    v53[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v53,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v14, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v22 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v22 - 1);
        (pfn)(v22, v14, i);
      }
    }
  }
  if ( v49 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
LABEL_25:
  v23 = CEntityHandle::operator CEntityInstance *(&v52);
  v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  v25 = v23;
  spawner._vptr_CEntitySpawnerBase = off_410C6D0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v24 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v24);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v26 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v26);
      operator delete(v26);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return v25;
}


// CDOTA_Item_Rune::YouForgotToImplementOrDeclareServerClass  (line 1496, @0x0000000002593770, libserver.so)
int __fastcall CDOTA_Item_Rune::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Rune *const this)
{
  return 0;
}


// CDOTA_Item_Rune::GetServerClass  (line 1496, @0x0000000002599710, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Rune::GetServerClass(CDOTA_Item_Rune *const this)
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


// CDOTA_Item_Rune::CDOTA_Item_Rune  (line 1500, @0x00000000025a58c0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, EnsureValidValue<int>
// calls: CBaseAnimating::CBaseAnimating
void __fastcall CDOTA_Item_Rune::CDOTA_Item_Rune(CDOTA_Item_Rune *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->m_hRuneSpawner.m_Index = -1;
  this->_vptr_IHandleEntity = &off_410C750;
  this->m_iRuneType.m_Value = 0;
}


// CDOTA_Item_Rune::~CDOTA_Item_Rune  (line 1506, @0x0000000002593860, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_Item_Rune::~CDOTA_Item_Rune(CDOTA_Item_Rune *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_Item_Rune::~CDOTA_Item_Rune  (line 1506, @0x00000000025938a0, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Item_Rune
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Rune::~CDOTA_Item_Rune(CDOTA_Item_Rune *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Rune::Spawn  (line 1513, @0x0000000002596410, libserver.so)  // inlines: AddSolidFlags, MarkPVSInformationDirty, RemoveEffects, SetSolid
// calls: CBaseAnimating::Spawn, CBaseEntity::DispatchUpdateTransmitState, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, CCollisionProperty::EnableInteractsAsMask, CBaseAnimating::UseClientSideAnimation
void __fastcall CDOTA_Item_Rune::Spawn(CDOTA_Item_Rune *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseAnimating::Spawn(this, pKeyValues);
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CCollisionProperty::EnableInteractsAsMask(&this->m_Collision, 0x40000000u);
  this->m_iSentToClients = 0;
  CBaseAnimating::UseClientSideAnimation(this, 1);
}


// CDOTA_Item_Rune::Precache  (line 1531, @0x00000000025bfce0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CBaseEntity::PrecacheModel, PrecacheParticleSystem
// strings: "models/props_gameplay/rune_doubledamage01.vmdl", "models/props_gameplay/rune_haste01.vmdl", "models/props_gameplay/rune_illusion01.vmdl", "models/props_gameplay/rune_invisibility01.vmdl", "models/props_gameplay/rune_regeneration01.vmdl", "models/props_gameplay/rune_goldxp.vmdl" (13 total)
void __fastcall CDOTA_Item_Rune::Precache(CDOTA_Item_Rune *const this, const CEntityPrecacheContext *pContext)
{
  bool IsPrecacheAllowed; // r12

  CEntityInstance::Precache(this, pContext);
  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_doubledamage01.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_haste01.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_illusion01.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_invisibility01.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_regeneration01.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_goldxp.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_arcane.vmdl", pContext);
  PrecacheParticleSystem("particles/generic_gameplay/rune_doubledamage.vpcf", pContext);
  PrecacheParticleSystem("particles/generic_gameplay/rune_haste.vpcf", pContext);
  PrecacheParticleSystem("particles/generic_gameplay/rune_illusion.vpcf", pContext);
  PrecacheParticleSystem("particles/generic_gameplay/rune_invisibility.vpcf", pContext);
  PrecacheParticleSystem("particles/generic_gameplay/rune_regeneration.vpcf", pContext);
  PrecacheParticleSystem("particles/generic_gameplay/rune_arcane.vpcf", pContext);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CDOTA_Item_Rune::SetRuneType  (line 1558, @0x00000000025a5900, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: CBaseModelEntity::SetModel, CBaseAnimating::ResetSequenceInfo, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetSequence
// callers: CDOTABaseGameMode::SpawnRunes, CDOTAGamerules::SpawnRune
// strings: "models/props_gameplay/rune_doubledamage01.vmdl", "models/props_gameplay/rune_haste01.vmdl", "models/props_gameplay/rune_illusion01.vmdl", "models/props_gameplay/rune_invisibility01.vmdl", "models/props_gameplay/rune_regeneration01.vmdl", "models/props_gameplay/rune_goldxp.vmdl" (7 total)
// globals: jpt_25A594B
void __fastcall CDOTA_Item_Rune::SetRuneType(CDOTA_Item_Rune *const this, int iRuneType)
{
  int v2; // r12d
  unsigned int m_Value; // eax
  const char *v5; // rsi
  HSequence v6; // eax
  SetSequenceBehavior_t v7; // edx

  v2 = iRuneType;
  m_Value = this->m_iRuneType.m_Value;
  if ( m_Value == iRuneType )
  {
    v2 = this->m_iRuneType.m_Value;
    if ( m_Value > 6 )
    {
LABEL_5:
      v5 = "";
      goto LABEL_7;
    }
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iRuneType.m_Value = v2;
  }
  switch ( v2 )
  {
    case 0:
      v5 = "models/props_gameplay/rune_doubledamage01.vmdl";
      break;
    case 1:
      v5 = "models/props_gameplay/rune_haste01.vmdl";
      break;
    case 2:
      v5 = "models/props_gameplay/rune_illusion01.vmdl";
      break;
    case 3:
      v5 = "models/props_gameplay/rune_invisibility01.vmdl";
      break;
    case 4:
      v5 = "models/props_gameplay/rune_regeneration01.vmdl";
      break;
    case 5:
      v5 = "models/props_gameplay/rune_goldxp.vmdl";
      break;
    case 6:
      v5 = "models/props_gameplay/rune_arcane.vmdl";
      break;
    default:
      goto LABEL_5;
  }
LABEL_7:
  CBaseModelEntity::SetModel(this, v5);
  CBaseAnimating::ResetSequenceInfo(this);
  v6.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1500).m_Data;
  v7 = SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE;
  if ( v6.m_Data == -1 )
    v6.m_Data = 1;
  LOBYTE(v7) = 0;
  CBaseAnimating::SetSequence(this, v6, v7);
}


// CDOTA_Item_Rune::GetRuneType  (line 1626, @0x00000000025a5a10, libserver.so)
// callers: CDOTABaseGameMode::SpawnRunes, CDOTA_TeamCommander::UpdateRuneVision, CDOTA_BaseNPC::HandleRunePickup
int __fastcall CDOTA_Item_Rune::GetRuneType(const CDOTA_Item_Rune *const this)
{
  return this->m_iRuneType.m_Value;
}


// CDOTA_Item_Rune::ShouldTransmit  (line 1633, @0x00000000025938e0, libserver.so)
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_Item_Rune::ShouldTransmit(CDOTA_Item_Rune *const this, const CGameCheckTransmitInfo *pInfo)
{
  return CBaseEntity::ShouldTransmit(this, pInfo);
}


// CDOTA_Item::LaunchLoot  (line 1640, @0x0000000002598200, libserver.so)  // inlines: Get, GetContainer, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetBool, operator CEntityInstance*
// calls: __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, Thinker_Create, KeyValues::~KeyValues, _Unwind_Resume
// callers: ActionRunner_OnItemCreated
// strings: "modifier_lootdrop_thinker", "knockback_height", "knockback_target_x", "knockback_target_y", "knockback_target_z", "auto_use"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item::LaunchLoot(
        CDOTA_Item *const this,
        bool bAutoUse,
        double a3,
        float flHeight,
        float flDuration)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  m_Index = this->m_hContainer.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hContainer.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hContainer.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_lootdrop_thinker");
        KeyValues::SetFloat(&kv, "knockback_height", v10);
        KeyValues::SetFloat(&kv, "knockback_target_x", v11);
        KeyValues::SetFloat(&kv, "knockback_target_y", v12);
        KeyValues::SetFloat(&kv, "knockback_target_z", v13);
        KeyValues::SetFloat(&kv, "knockback_duration", v14);
        KeyValues::SetInt(&kv, "auto_use", bAutoUse);
        Thinker_Create(this, this, "modifier_lootdrop_thinker", &kv, vec3_origin, 4, 0, 1, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Item::LaunchLootInitialHeight  (line 1659, @0x0000000002598bb0, libserver.so)  // inlines: Get, GetContainer, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetBool, operator CEntityInstance*
// calls: __stack_chk_fail, CBaseEntity::GetAbsOrigin, MoveUnit, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, Thinker_Create, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_lootdrop_thinker", "knockback_height", "knockback_initial_height", "knockback_target_x", "knockback_target_y", "knockback_target_z" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item::LaunchLootInitialHeight(
        CDOTA_Item *const this,
        bool bAutoUse,
        double a3,
        float flInitialHeight,
        float flLaunchHeight,
        float flDuration)
{
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  Vector bSendToClient; // [rsp+0h] [rbp-90h]
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  m_Index = this->m_hContainer.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hContainer.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hContainer.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
      {
        CBaseEntity::GetAbsOrigin(this);
        MoveUnit(this, bSendToClient, 1);
        KeyValues::KeyValues(&kv, "modifier_lootdrop_thinker");
        KeyValues::SetFloat(&kv, "knockback_height", v11);
        KeyValues::SetFloat(&kv, "knockback_initial_height", v12);
        KeyValues::SetFloat(&kv, "knockback_target_x", v13);
        KeyValues::SetFloat(&kv, "knockback_target_y", v14);
        KeyValues::SetFloat(&kv, "knockback_target_z", v15);
        KeyValues::SetFloat(&kv, "knockback_duration", v16);
        KeyValues::SetInt(&kv, "auto_use", bAutoUse);
        Thinker_Create(this, this, "modifier_lootdrop_thinker", &kv, vec3_origin, 4, 0, 1, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Item::OwnerRespawned  (line 1681, @0x0000000002594330, libserver.so)
// calls: CDOTABaseAbility::OwnerRespawned
void __fastcall CDOTA_Item::OwnerRespawned(CDOTA_Item *const this)
{
  CDOTABaseAbility::OwnerRespawned(this);
}


// CDOTA_ItemSpawner::GetDataDescMap  (line 1686, @0x0000000002593780, libserver.so)
// globals: CDOTA_ItemSpawner::m_DataMap
datamap_t *__fastcall CDOTA_ItemSpawner::GetDataDescMap(CDOTA_ItemSpawner *const this)
{
  return &CDOTA_ItemSpawner::m_DataMap;
}


// CDOTA_ItemSpawner::AddDatadescMetadataKeys  (line 1686, @0x00000000025a5a20, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_ItemSpawner::GetEntityClass(void)
void __fastcall CDOTA_ItemSpawner::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_ItemSpawner::GetEntityClass);
}


// CDOTA_ItemSpawner::GetBaseMap  (line 1686, @0x00000000025a5a40, libserver.so)
datamap_t *__cdecl CDOTA_ItemSpawner::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CDOTA_ItemSpawner>  (line 1686, @0x00000000025a5a50, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "CDOTA_ItemSpawner"
// globals: `guard variable for'DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder, CDOTA_ItemSpawner::GetEntityClass(void), CDOTA_ItemSpawner::m_DataMap, DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder.m_pszBase = "CDOTA_ItemSpawner";
    DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_ItemSpawner::m_DataMap.dataNumFields = 3;
  CDOTA_ItemSpawner::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CDOTA_ItemSpawner::m_DataMap.dataDesc = &DataMapInit<CDOTA_ItemSpawner>(CDOTA_ItemSpawner *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_ItemSpawner::m_DataMap, CDOTA_ItemSpawner::GetEntityClass);
  return &CDOTA_ItemSpawner::m_DataMap;
}


// CDOTA_ItemSpawner::InputSpawnItem  (line 1695, @0x00000000025b4a10, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<bool>, AddToTail, Base, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, CVProfScope, Element, FindKeyHash, Free, GetClassInfo, GetEntityClass, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetClassName, SetValue, SetValue<CDOTA_Item*>, SetValue<Vector>, SetValue<bool>, Spawn, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: DOTA_CreateItem, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CBaseEntity::GetAbsOrigin, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<CDOTA_Item*>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get (26 total)
// strings: "dota_item_drop", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDOTA_ItemSpawner::InputSpawnItem(CDOTA_ItemSpawner *const this, inputdata_t *const inputdata)
{
  CEntitySystem *v3; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v5; // rdx
  char v6; // al
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *m_pEntityKeyValues; // r14
  const Vector *AbsOrigin; // rax
  CEntityKeyValues *v10; // rdi
  int m_enabled; // esi
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v13; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v15; // r14
  CEntitySpawnerContext<CDOTA_Item_Physical> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v20; // rdi
  CUtlScratchMemoryPool *v21; // rdi
  CEntityKeyValues *v22; // rbx
  const char *m_pszClassname; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v26; // cx
  __int64 v27; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v28; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v30; // r15
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v36; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int16 v40; // ax
  bool v41; // [rsp+1Fh] [rbp-F1h]
  CDOTA_Item *pContainedItem; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v43[2]; // [rsp+30h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_Item_Physical> spawner; // [rsp+40h] [rbp-D0h] BYREF

  if ( this->m_szItemName.u.m_Id == 0 )
    return;
  pContainedItem = DOTA_CreateItem(this->m_szItemName.u.m_pAsString, 0, -1);
  if ( pContainedItem == 0 )
    return;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_410C730;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v3 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v3->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v3);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v5 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v5;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTA_Item_PhysicalClass;
  if ( g_pApplication != 0 )
    v6 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v6 = 0;
  spawner.m_bValidateKeys = v6;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "dota_item_drop");
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        "dota_item_drop",
                        &spawner.m_scriptClassName);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_44:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v30 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      m_pElements[v30] = -1252107960;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v33 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v33 = 0;
      v34 = &v33[v30];
      m_flags = v34->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v34->m_value.m_flags = m_flags & 0xFFFE;
      v34->m_value.m_uint64 = 0;
      v34->m_value.m_type = 6;
      v34->m_value.m_char = 1;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v36 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v36 = 0;
      v36[v30].m_pAttributeName = 0;
      goto LABEL_6;
    }
    v26 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v27 = 0;
    while ( 1 )
    {
      if ( v26 != 0 )
      {
        v28 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v26 > 9 )
          v28 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v28 = 0;
      }
      if ( v28[v27] == -1252107960 )
        break;
      if ( m_nCount <= ++v27 )
        goto LABEL_44;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v37 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v38 = v27;
      v39 = &v37[v38];
      if ( v37[v38].m_pAttributeName != 0 )
      {
LABEL_56:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v37[v38].m_pAttributeName);
        goto LABEL_6;
      }
    }
    else
    {
      v38 = v27;
      v37 = 0;
      v39 = v38 * 24;
      if ( *(v38 * 24 + 16) != 0 )
        goto LABEL_56;
    }
    v40 = *(v39 + 10);
    if ( (v40 & 1) != 0 )
      *(v39 + 10) = v40 & 0xFFFE;
    *v39 = 0;
    *(v39 + 8) = 6;
    *v39 = 1;
  }
LABEL_6:
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -1510174757, AbsOrigin);
  CEntityKeyValues::SetValue<CDOTA_Item *>(spawner.m_pEntityKeyValues, 2079848080, &pContainedItem);
  v10 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v41 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      v10 = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(v10, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v13 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v13,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v15 = Entity;
    if ( Entity != 0 )
    {
      v43[0] = Entity->m_pEntity;
      v43[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v43,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v15, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v20 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v20 - 1);
          (pfn)(v20, v15, i);
        }
      }
    }
    if ( v41 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
  v21 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_410C6D0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v21 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v21);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v22 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v22);
      operator delete(v22);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CDOTA_ItemSpawner::InputSetItemName  (line 1712, @0x0000000002599370, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_25993A1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_ItemSpawner::InputSetItemName(CDOTA_ItemSpawner *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_szItemName.u.m_Id = v8;
}


// CDOTA_Item_RuneSpawner_Bounty::YouForgotToImplementOrDeclareServerClass  (line 1717, @0x0000000002593790, libserver.so)
int __fastcall CDOTA_Item_RuneSpawner_Bounty::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_RuneSpawner_Bounty *const this)
{
  return 0;
}


// CDOTA_Item_RuneSpawner_Bounty::GetServerClass  (line 1717, @0x0000000002599910, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_RuneSpawner_Bounty::GetServerClass(CDOTA_Item_RuneSpawner_Bounty *const this)
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


// CDOTA_Item_RuneSpawner_Bounty::CDOTA_Item_RuneSpawner_Bounty  (line 1718, @0x00000000025a5b20, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<float>, NetworkStateChanged, Set, operator=<float>, ~CBaseAnimating
// calls: CBaseAnimating::CBaseAnimating, CBaseEntity::NetworkStateChanged, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Item_RuneSpawner_Bounty::CDOTA_Item_RuneSpawner_Bounty(CDOTA_Item_RuneSpawner_Bounty *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_410D5F0;
  this->m_flLastSpawnTime.m_Value = 0.0;
  CBaseEntity::NetworkStateChanged(this, 0x4C0u, -1, -1);
  this->m_flLastSpawnTime.m_Value = -1000.0;
}


// CDOTA_Item_RuneSpawner_Bounty::RecordSpawnTime  (line 1723, @0x00000000025a5ba0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CDOTAGamerules::SpawnRune
void __fastcall CDOTA_Item_RuneSpawner_Bounty::RecordSpawnTime(
        CDOTA_Item_RuneSpawner_Bounty *const this,
        double a2,
        float flSpawnTime)
{
  float flSpawnTimea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flLastSpawnTime.m_Value )
  {
    flSpawnTimea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flSpawnTime);
    this->m_flLastSpawnTime.m_Value = flSpawnTimea;
  }
}


// CDOTA_Item_RuneSpawner_Powerup::YouForgotToImplementOrDeclareServerClass  (line 1728, @0x00000000025937a0, libserver.so)
int __fastcall CDOTA_Item_RuneSpawner_Powerup::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_RuneSpawner_Powerup *const this)
{
  return 0;
}


// CDOTA_Item_RuneSpawner_Powerup::GetServerClass  (line 1728, @0x0000000002599810, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_RuneSpawner_Powerup::GetServerClass(CDOTA_Item_RuneSpawner_Powerup *const this)
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


// CDOTA_Item_RuneSpawner_Powerup::CDOTA_Item_RuneSpawner_Powerup  (line 1730, @0x00000000025a5c00, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<float>, NetworkStateChanged, Set, operator=<float>, ~CBaseAnimating
// calls: CBaseAnimating::CBaseAnimating, CBaseEntity::NetworkStateChanged, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Item_RuneSpawner_Powerup::CDOTA_Item_RuneSpawner_Powerup(
        CDOTA_Item_RuneSpawner_Powerup *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_410DDF0;
  this->m_flLastSpawnTime.m_Value = 0.0;
  CBaseEntity::NetworkStateChanged(this, 0x4C0u, -1, -1);
  this->m_flLastSpawnTime.m_Value = -1000.0;
}


// CDOTA_Item_RuneSpawner_Powerup::RecordSpawnTime  (line 1735, @0x00000000025a5c80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CDOTAGamerules::SpawnRune
void __fastcall CDOTA_Item_RuneSpawner_Powerup::RecordSpawnTime(
        CDOTA_Item_RuneSpawner_Powerup *const this,
        double a2,
        float flSpawnTime)
{
  float flSpawnTimea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flLastSpawnTime.m_Value )
  {
    flSpawnTimea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flSpawnTime);
    this->m_flLastSpawnTime.m_Value = flSpawnTimea;
  }
}


