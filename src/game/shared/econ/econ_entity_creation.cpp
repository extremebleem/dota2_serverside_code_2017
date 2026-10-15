
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ItemGeneration  (line 24, @0x0000000002e39990, libserver.so)
// callers: CDOTA_BaseNPC::PrecacheWearables, CDOTA_BaseNPC::SpawnWearables, OnCreateBotWearingSetSpawnComplete, CDOTA_BaseNPC_Creature::AttachEconItem, CDOTA_BaseNPC_Effigy_Statue::Precache, CDOTA_BaseNPC_Effigy_Statue::Spawn, CDOTA_Unit_Courier::AddCourierWearables
// globals: g_ItemGenerationSystem
CItemGeneration *__cdecl ItemGeneration()
{
  return &g_ItemGenerationSystem;
}


// CItemGeneration::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 28, @0x0000000002e399a0, libserver.so)
void __cdecl CItemGeneration::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CItemGeneration::CItemGeneration  (line 33, @0x0000000002e399b0, libserver.so)
void __fastcall CItemGeneration::CItemGeneration(CItemGeneration *const this)
{
  this->_vptr_IGameSystem = off_47A0310;
}


// CItemGeneration::GenerateItemFromDefIndex  (line 40, @0x0000000002e4dd80, libserver.so)
// calls: CItemGeneration::SpawnItem
// callers: OnCreateBotWearingSetSpawnComplete, CDOTA_BaseNPC_Creature::AttachEconItem, CDOTA_Unit_Courier::AddCourierWearables
CBaseEntity *__fastcall CItemGeneration::GenerateItemFromDefIndex(
        CItemGeneration *const this,
        item_definition_index_t iDefIndex,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        CEntitySpawnerContext<CBaseEntity> *pSpawnContext)
{
  return CItemGeneration::SpawnItem(this, iDefIndex, vecOrigin, vecAngles, 1, 4, 0, pSpawnContext);
}


// CItemGeneration::PrecacheItemFromDefIndex  (line 45, @0x0000000002e4de50, libserver.so)
// calls: CItemGeneration::PrecacheItem
void __fastcall CItemGeneration::PrecacheItemFromDefIndex(
        CItemGeneration *const this,
        item_definition_index_t iDefIndex,
        const CEntityPrecacheContext *pContext)
{
  CItemGeneration::PrecacheItem(this, iDefIndex, 1, 4, pContext);
}


// CItemGeneration::GenerateItemFromScriptData  (line 53, @0x0000000002e4a9e0, libserver.so)
// calls: CItemGeneration::SpawnItem
// callers: CDOTA_BaseNPC::SpawnWearables, CDOTA_BaseNPC_Effigy_Statue::Spawn
CBaseEntity *__fastcall CItemGeneration::GenerateItemFromScriptData(
        CItemGeneration *const this,
        CEconItemView *pData,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        const char *pszOverrideClassName,
        CEntitySpawnerContext<CBaseEntity> *pSpawnContext,
        SpawnGroupHandle_t hSpawnGroup)
{
  return CItemGeneration::SpawnItem(this, pData, vecOrigin, vecAngles, pszOverrideClassName, pSpawnContext, hSpawnGroup);
}


// CItemGeneration::PrecacheItemFromScriptData  (line 58, @0x0000000002e399c0, libserver.so)  // inlines: PrecacheItem
// calls: CItemGeneration::PrecacheItem
// callers: CDOTA_BaseNPC::PrecacheWearables, CDOTA_BaseNPC_Effigy_Statue::Precache
void __fastcall CItemGeneration::PrecacheItemFromScriptData(
        CItemGeneration *const this,
        CEconItemView *pData,
        const CEntityPrecacheContext *pContext)
{
  if ( pData != 0 )
    CItemGeneration::PrecacheItem(pData, pContext, pContext);
}


// CItemGeneration::SpawnItem  (line 66, @0x0000000002e4dc90, libserver.so)  // inlines: GetStaticDataForItemByDefIndex
// calls: ItemSystem, CEconItemSchema::GetItemDefinition, CEconItemView::CEconItemView, CEconItemView::Init, CItemGeneration::SpawnItem, CEconItemView::~CEconItemView, _Unwind_Resume
// callers: CItemGeneration::GenerateItemFromDefIndex
// globals: INVALID_STYLE_INDEX
CBaseEntity *__fastcall CItemGeneration::SpawnItem(
        CItemGeneration *const this,
        item_definition_index_t iChosenItem,
        const Vector *const vecAbsOrigin,
        const QAngle *const vecAbsAngles,
        int iItemLevel,
        entityquality_t entityQuality,
        const char *pszOverrideClassName,
        CEntitySpawnerContext<CBaseEntity> *pSpawnContext)
{
  CEconItemSystem *v12; // rax
  CBaseEntity *thisb; // [rsp+18h] [rbp-118h]
  CEconItemView scriptItem; // [rsp+20h] [rbp-110h] BYREF

  v12 = ItemSystem();
  if ( CEconItemSchema::GetItemDefinition(&v12->m_itemSchema, iChosenItem, 0) == 0 )
    return 0;
  CEconItemView::CEconItemView(&scriptItem);
  CEconItemView::Init(&scriptItem, iChosenItem, entityQuality, iItemLevel, 0, 0, INVALID_STYLE_INDEX);
  thisb = CItemGeneration::SpawnItem(
            this,
            &scriptItem,
            vecAbsOrigin,
            vecAbsAngles,
            pszOverrideClassName,
            pSpawnContext,
            0xFFFFFFFF);
  CEconItemView::~CEconItemView(&scriptItem);
  return thisb;
}


// CItemGeneration::PrecacheItem  (line 78, @0x0000000002e4ddb0, libserver.so)  // inlines: GetStaticDataForItemByDefIndex, PrecacheItem
// calls: ItemSystem, CEconItemSchema::GetItemDefinition, CEconItemView::CEconItemView, CEconItemView::Init, CItemGeneration::PrecacheItem, CEconItemView::~CEconItemView, _Unwind_Resume
// callers: CItemGeneration::PrecacheItemFromDefIndex
// globals: INVALID_STYLE_INDEX
void __fastcall CItemGeneration::PrecacheItem(
        CItemGeneration *const this,
        item_definition_index_t iChosenItem,
        int iItemLevel,
        entityquality_t entityQuality,
        const CEntityPrecacheContext *pContext)
{
  CEconItemSystem *v9; // rax
  const CEntityPrecacheContext *v10; // rdx
  CEconItemView scriptItem; // [rsp+10h] [rbp-110h] BYREF

  v9 = ItemSystem();
  if ( CEconItemSchema::GetItemDefinition(&v9->m_itemSchema, iChosenItem, 0) != 0 )
  {
    CEconItemView::CEconItemView(&scriptItem);
    CEconItemView::Init(&scriptItem, iChosenItem, entityQuality, iItemLevel, 0, 0, INVALID_STYLE_INDEX);
    CItemGeneration::PrecacheItem(&scriptItem, pContext, v10);
    CEconItemView::~CEconItemView(&scriptItem);
  }
}


// CItemGeneration::SpawnItem  (line 93, @0x0000000002e49810, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<CEntityHandle>, AddKeyValue<QAngle>, AddKeyValue<char const*>, AddKeyValue<int>, AddKeyValue<long long unsigned int>, AddToTail, Allocate, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetItemClass, GetSerialNumber, GetTimebaseRegister, GetWithNull, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetPtrValue, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValue<int>, SetValue<long long unsigned int>, SetValues, SetWorldTransform, Spawn, String, V_strlen, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEconItemView::GetStaticData, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::FindClassByDesignName, CEconItemView::GetPlayerDisplayModel, CEconItemView::GetSkin, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue (33 total)
// callers: CItemGeneration::GenerateItemFromScriptData, CItemGeneration::SpawnItem
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CItemGeneration::SpawnItem(
        CItemGeneration *const this,
        CEconItemView *pData,
        const Vector *const vecAbsOrigin,
        const QAngle *const vecAbsAngles,
        const char *pszOverrideClassName,
        CEntitySpawnerContext<CBaseEntity> *pSpawnContext,
        SpawnGroupHandle_t hSpawnGroup)
{
  CEntitySystem *v10; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  char v14; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  const char *PlayerDisplayModel; // rax
  int Skin; // eax
  __int64 v18; // rdi
  CEntityKeyValues *v19; // rbx
  int v20; // r15d
  int m_enabled; // r8d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v23; // rax
  CEntityInstance *Entity; // rax
  __int64 v25; // rdi
  CEntityInstance *v26; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v28; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v32; // rdi
  CEntityIdentity *v33; // rax
  CEntityIdentity *v34; // rax
  CBaseEntity *m_pInstance; // rbx
  CUtlScratchMemoryPool *v36; // rdi
  CEntityKeyValues *v37; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v40; // rbx
  ThreadId_t v41; // r15
  uint64 v42; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v45; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v47; // rcx
  CVProfNode *m_pParent; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v50; // cx
  __int64 v51; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v52; // rdx
  int v53; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v54; // cx
  __int64 v55; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v56; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v58; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rax
  uint16 m_flags; // ax
  void *v63; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int16 v68; // dx
  unsigned __int64 v69; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v70; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rax
  uint16 v73; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rcx
  int v78; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v79; // cx
  __int64 v80; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v81; // rdx
  __int64 v82; // r15
  unsigned __int64 v83; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v84; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // rax
  uint16 v87; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v88; // rax
  int16 m_nQueuedForSpawnCount; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rcx
  int v93; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v94; // cx
  __int64 v95; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v96; // rdx
  int v97; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v98; // cx
  __int64 v99; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v100; // rdx
  __int64 v101; // r15
  unsigned __int64 v102; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v103; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v104; // r13
  __int64 v105; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v106; // r13
  uint16 v107; // ax
  vec_t *v108; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v109; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v110; // rdx
  __int64 v111; // rax
  int v112; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v113; // cx
  __int64 v114; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v115; // rdx
  __int16 v116; // r13
  unsigned __int64 v117; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v118; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v119; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v120; // rax
  uint16 v121; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v122; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v126; // rdx
  __int64 v127; // rax
  const GameItemDefinition_t *StaticData; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v130; // rax
  __int16 v131; // ax
  void *v132; // rax
  __int16 v133; // ax
  __int64 v134; // rbx
  __int16 v135; // ax
  vec_t *v136; // rax
  __int64 v137; // rbx
  __int16 v138; // ax
  vec_t *v139; // rax
  __int16 v140; // ax
  __int16 v141; // ax
  signed int v142; // [rsp+1Ch] [rbp-114h]
  __int64 v143; // [rsp+20h] [rbp-110h]
  __int64 v144; // [rsp+28h] [rbp-108h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v145; // [rsp+28h] [rbp-108h]
  __int64 v146; // [rsp+28h] [rbp-108h]
  signed int v147; // [rsp+28h] [rbp-108h]
  bool vecAbsAnglesb; // [rsp+30h] [rbp-100h]
  CEntityKeyValues *vecAbsOriginb; // [rsp+38h] [rbp-F8h]
  int v152; // [rsp+40h] [rbp-F0h]
  _QWORD v153[2]; // [rsp+50h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+60h] [rbp-D0h] BYREF

  if ( pData == 0 || CEconItemView::GetStaticData(pData) == 0 )
    return 0;
  if ( pszOverrideClassName == 0 )
  {
    StaticData = CEconItemView::GetStaticData(pData);
    if ( StaticData->m_symItemClassname.u.m_Id != 0 )
      pszOverrideClassName = StaticData->m_symItemClassname.u.m_pAsString;
  }
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = pSpawnContext;
  spawner.m_pSpawnBatch = 0;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  spawner.m_scriptClassName.m_pString = 0;
  v10 = g_pEntitySystem;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v10->m_entitySpawnerData;
  if ( hSpawnGroup == -1 )
  {
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v10);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  }
  else
  {
    spawner.m_hSpawnGroupHandle = hSpawnGroup;
    SpawnOriginOffset = &g_MatrixIdentity;
  }
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  v12 = *&SpawnOriginOffset->m_flMatVal[2][0];
  v13 = *&SpawnOriginOffset->m_flMatVal[2][2];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = v12;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v13;
  spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
  if ( g_pApplication != 0 )
    v14 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v14 = 0;
  spawner.m_bValidateKeys = v14;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_79:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v58 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      v144 = v58;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v61 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v61 = 0;
      v143 = v144;
      v145 = &v61[v144];
      m_flags = v145->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v145->m_value.m_flags = m_flags & 0xFFFE;
      v145->m_value.m_uint64 = 0;
      v145->m_value.m_type = 30;
      if ( pszOverrideClassName != 0 )
      {
        v142 = strlen(pszOverrideClassName) + 1;
        v63 = CEntityVariantAllocator::Allocate(v142);
        v145->m_value.m_uint64 = v63;
        memcpy(v63, pszOverrideClassName, v142);
        v145->m_value.m_flags |= 1u;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v64 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v64 = 0;
      v64[v143].m_pAttributeName = 0;
      goto LABEL_9;
    }
    v50 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v51 = 0;
    while ( 1 )
    {
      if ( v50 != 0 )
      {
        v52 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v50 > 9 )
          v52 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v52 = 0;
      }
      if ( v52[v51] == -971301790 )
        break;
      if ( m_nCount <= ++v51 )
        goto LABEL_79;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v65 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v66 = v51;
      v67 = &v65[v66];
      if ( v65[v66].m_pAttributeName != 0 )
      {
LABEL_93:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v65[v66].m_pAttributeName);
        goto LABEL_9;
      }
    }
    else
    {
      v66 = v51;
      v65 = 0;
      v67 = v66 * 24;
      if ( *(v66 * 24 + 16) != 0 )
        goto LABEL_93;
    }
    v131 = *(v67 + 10);
    if ( (v131 & 1) != 0 )
      *(v67 + 10) = v131 & 0xFFFE;
    *v67 = 0;
    *(v67 + 8) = 30;
    if ( pszOverrideClassName != 0 )
    {
      v147 = strlen(pszOverrideClassName) + 1;
      v132 = CEntityVariantAllocator::Allocate(v147);
      *v67 = v132;
      memcpy(v132, pszOverrideClassName, v147);
      *(v67 + 10) |= 1u;
    }
  }
LABEL_9:
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             pszOverrideClassName,
                             &spawner.m_scriptClassName);
  PlayerDisplayModel = CEconItemView::GetPlayerDisplayModel(pData, 0);
  if ( PlayerDisplayModel != 0 && *PlayerDisplayModel != 0 )
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -926958586, PlayerDisplayModel);
  Skin = CEconItemView::GetSkin(pData);
  v19 = spawner.m_pEntityKeyValues;
  v20 = Skin;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v53 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v53 <= 0 )
  {
LABEL_94:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v68 = v19->m_keyHashes.m_nCount - 1;
    v69 = v19->m_keyHashes.m_nAllocated;
    if ( v69 != 0 )
    {
      if ( v69 <= 9 )
        v70 = (&v19->m_keyHashes.m_nAllocAllocated + 1);
      else
        v70 = v19->m_keyHashes.m_pElements;
    }
    else
    {
      v70 = 0;
    }
    v70[(v19->m_keyHashes.m_nCount - 1)] = 2020856412;
    v146 = v68;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v19->m_keyValues);
    if ( v19->m_keyValues.m_nAllocated != 0 )
      v71 = v19->m_keyValues.m_pElements;
    else
      v71 = 0;
    v72 = &v71[v146];
    v73 = v72->m_value.m_flags;
    if ( (v73 & 1) != 0 )
      v72->m_value.m_flags = v73 & 0xFFFE;
    v18 = 5;
    v72->m_value.m_uint64 = 0;
    v72->m_value.m_type = 5;
    v72->m_value.m_int = v20;
    if ( v19->m_keyValues.m_nAllocated != 0 )
      v74 = v19->m_keyValues.m_pElements;
    else
      v74 = 0;
    v74[v146].m_pAttributeName = 0;
  }
  else
  {
    v54 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v55 = 0;
    v18 = v54;
    while ( 1 )
    {
      if ( v54 != 0 )
      {
        v56 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v54 > 9 )
          v56 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v56 = 0;
      }
      if ( v56[v55] == 2020856412 )
        break;
      if ( v53 <= ++v55 )
        goto LABEL_94;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v75 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v76 = v55;
      v77 = &v75[v76];
      if ( v75[v76].m_pAttributeName != 0 )
      {
LABEL_106:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v75[v76].m_pAttributeName);
        goto LABEL_107;
      }
    }
    else
    {
      v76 = v55;
      v75 = 0;
      v77 = v76 * 24;
      if ( *(v76 * 24 + 16) != 0 )
        goto LABEL_106;
    }
    v140 = *(v77 + 10);
    if ( (v140 & 1) != 0 )
      *(v77 + 10) = v140 & 0xFFFE;
    *v77 = 0;
    *(v77 + 8) = 5;
    *v77 = v20;
  }
LABEL_107:
  v19 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_13:
    v152 = -1;
    goto LABEL_14;
  }
  v78 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v78 > 0 )
  {
    v79 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v80 = 0;
    v18 = v79;
    while ( 1 )
    {
      if ( v79 != 0 )
      {
        v81 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v79 > 9 )
          v81 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v81 = 0;
      }
      if ( v81[v80] == 1087599987 )
        break;
      if ( v78 <= ++v80 )
        goto LABEL_116;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v90 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v91 = v80;
      v92 = &v90[v91];
      if ( v90[v91].m_pAttributeName != 0 )
      {
LABEL_128:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v90[v91].m_pAttributeName);
LABEL_129:
        v19 = spawner.m_pEntityKeyValues;
        m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
        goto LABEL_130;
      }
    }
    else
    {
      v91 = v80;
      v90 = 0;
      v92 = v91 * 24;
      if ( *(v91 * 24 + 16) != 0 )
        goto LABEL_128;
    }
    v141 = *(v92 + 10);
    if ( (v141 & 1) != 0 )
      *(v92 + 10) = v141 & 0xFFFE;
    *v92 = pData;
    *(v92 + 8) = 33;
    goto LABEL_129;
  }
LABEL_116:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  LOWORD(v82) = v19->m_keyHashes.m_nCount - 1;
  v83 = v19->m_keyHashes.m_nAllocated;
  if ( v83 != 0 )
  {
    if ( v83 <= 9 )
      v84 = (&v19->m_keyHashes.m_nAllocAllocated + 1);
    else
      v84 = v19->m_keyHashes.m_pElements;
  }
  else
  {
    v84 = 0;
  }
  v82 = v82;
  v84[v82] = 1087599987;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v19->m_keyValues);
  if ( v19->m_keyValues.m_nAllocated != 0 )
    v85 = v19->m_keyValues.m_pElements;
  else
    v85 = 0;
  v86 = &v85[v82];
  v87 = v86->m_value.m_flags;
  if ( (v87 & 1) != 0 )
    v86->m_value.m_flags = v87 & 0xFFFE;
  v86->m_value.m_uint64 = pData;
  v86->m_value.m_type = 33;
  if ( v19->m_keyValues.m_nAllocated != 0 )
    v88 = v19->m_keyValues.m_pElements;
  else
    v88 = 0;
  v88[v82].m_pAttributeName = 0;
  v19 = spawner.m_pEntityKeyValues;
  m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
LABEL_130:
  if ( m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v93 = v19->m_keyHashes.m_nCount;
  if ( v93 <= 0 )
  {
LABEL_139:
    CEntityKeyValues::AddKeyValue<Vector>(v19, -467664362, vecAbsOrigin, 0);
    goto LABEL_140;
  }
  v94 = v19->m_keyHashes.m_nAllocated;
  v95 = 0;
  while ( 1 )
  {
    if ( v94 != 0 )
    {
      v96 = (&v19->m_keyHashes.m_nAllocAllocated + 1);
      if ( v94 > 9 )
        v96 = v19->m_keyHashes.m_pElements;
    }
    else
    {
      v96 = 0;
    }
    if ( v96[v95] == -467664362 )
      break;
    if ( v93 <= ++v95 )
      goto LABEL_139;
  }
  if ( v19->m_keyValues.m_nAllocated != 0 )
  {
    v126 = v19->m_keyValues.m_pElements;
    v127 = v95;
    if ( v126[v127].m_pAttributeName != 0 )
    {
LABEL_189:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v126[v127].m_pAttributeName);
      goto LABEL_140;
    }
    v134 = &v126[v127];
  }
  else
  {
    v127 = v95;
    v126 = 0;
    v134 = v127 * 24;
    if ( *(v127 * 24 + 16) != 0 )
      goto LABEL_189;
  }
  v135 = *(v134 + 10);
  if ( (v135 & 1) != 0 )
    *(v134 + 10) = v135 & 0xFFFE;
  *v134 = 0;
  *(v134 + 8) = 3;
  v136 = CEntityVariantAllocator::Allocate(0xCu);
  *v134 = v136;
  *v136 = vecAbsOrigin->x;
  v136[1] = vecAbsOrigin->y;
  v136[2] = vecAbsOrigin->z;
  *(v134 + 10) |= 1u;
LABEL_140:
  v19 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v97 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v97 <= 0 )
  {
LABEL_149:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    LOWORD(v101) = v19->m_keyHashes.m_nCount - 1;
    v102 = v19->m_keyHashes.m_nAllocated;
    if ( v102 != 0 )
    {
      if ( v102 <= 9 )
        v103 = (&v19->m_keyHashes.m_nAllocAllocated + 1);
      else
        v103 = v19->m_keyHashes.m_pElements;
    }
    else
    {
      v103 = 0;
    }
    v101 = v101;
    v103[v101] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v19->m_keyValues);
    if ( v19->m_keyValues.m_nAllocated != 0 )
      v104 = v19->m_keyValues.m_pElements;
    else
      v104 = 0;
    v105 = v101;
    v106 = &v104[v105];
    v107 = v106->m_value.m_flags;
    if ( (v107 & 1) != 0 )
      v106->m_value.m_flags = v107 & 0xFFFE;
    v106->m_value.m_uint64 = 0;
    v106->m_value.m_type = 39;
    v108 = CEntityVariantAllocator::Allocate(0xCu);
    v106->m_value.m_uint64 = v108;
    *v108 = vecAbsAngles->x;
    v108[1] = vecAbsAngles->y;
    v108[2] = vecAbsAngles->z;
    v106->m_value.m_flags |= 1u;
    if ( v19->m_keyValues.m_nAllocated != 0 )
      v109 = v19->m_keyValues.m_pElements;
    else
      v109 = 0;
    v109[v105].m_pAttributeName = 0;
  }
  else
  {
    v98 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v99 = 0;
    while ( 1 )
    {
      if ( v98 != 0 )
      {
        v100 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v98 > 9 )
          v100 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v100 = 0;
      }
      if ( v100[v99] == -1164387633 )
        break;
      if ( v97 <= ++v99 )
        goto LABEL_149;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v110 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v111 = v99;
      if ( v110[v111].m_pAttributeName != 0 )
      {
LABEL_161:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v110[v111].m_pAttributeName);
        goto LABEL_162;
      }
      v137 = &v110[v111];
    }
    else
    {
      v111 = v99;
      v110 = 0;
      v137 = v111 * 24;
      if ( *(v111 * 24 + 16) != 0 )
        goto LABEL_161;
    }
    v138 = *(v137 + 10);
    if ( (v138 & 1) != 0 )
      *(v137 + 10) = v138 & 0xFFFE;
    *v137 = 0;
    *(v137 + 8) = 39;
    v139 = CEntityVariantAllocator::Allocate(0xCu);
    *v137 = v139;
    *v139 = vecAbsAngles->x;
    v139[1] = vecAbsAngles->y;
    v139[2] = vecAbsAngles->z;
    *(v137 + 10) |= 1u;
  }
LABEL_162:
  v19 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v112 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v112 > 0 )
  {
    v113 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v114 = 0;
    v18 = v113;
    while ( 1 )
    {
      if ( v113 != 0 )
      {
        v115 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v113 > 9 )
          v115 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v115 = 0;
      }
      if ( v115[v114] == -1104771937 )
        break;
      if ( v112 <= ++v114 )
        goto LABEL_171;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v123 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v124 = v114;
      v125 = &v123[v124];
      if ( v123[v124].m_pAttributeName != 0 )
      {
LABEL_183:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v123[v124].m_pAttributeName);
LABEL_184:
        v19 = spawner.m_pEntityKeyValues;
        goto LABEL_185;
      }
    }
    else
    {
      v124 = v114;
      v123 = 0;
      v125 = v124 * 24;
      if ( *(v124 * 24 + 16) != 0 )
        goto LABEL_183;
    }
    v133 = *(v125 + 10);
    if ( (v133 & 1) != 0 )
      *(v125 + 10) = v133 & 0xFFFE;
    *v125 = 0;
    *(v125 + 8) = 13;
    *v125 = -1;
    goto LABEL_184;
  }
LABEL_171:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v116 = v19->m_keyHashes.m_nCount - 1;
  v117 = v19->m_keyHashes.m_nAllocated;
  if ( v117 != 0 )
  {
    if ( v117 <= 9 )
      v118 = (&v19->m_keyHashes.m_nAllocAllocated + 1);
    else
      v118 = v19->m_keyHashes.m_pElements;
  }
  else
  {
    v118 = 0;
  }
  v118[v116] = -1104771937;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v19->m_keyValues);
  if ( v19->m_keyValues.m_nAllocated != 0 )
    v119 = v19->m_keyValues.m_pElements;
  else
    v119 = 0;
  v120 = &v119[v116];
  v121 = v120->m_value.m_flags;
  if ( (v121 & 1) != 0 )
    v120->m_value.m_flags = v121 & 0xFFFE;
  v120->m_value.m_uint64 = 0;
  v120->m_value.m_type = 13;
  v120->m_value.m_int = -1;
  if ( v19->m_keyValues.m_nAllocated != 0 )
    v122 = v19->m_keyValues.m_pElements;
  else
    v122 = 0;
  v122[v116].m_pAttributeName = 0;
  v19 = spawner.m_pEntityKeyValues;
LABEL_185:
  v152 = -1;
  if ( v19 != 0 )
  {
LABEL_14:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    vecAbsAnglesb = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      v45 = __rdtsc();
      if ( m_TargetThreadId == ThreadGetCurrentId(v18) )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "Spawn" )
        {
          m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v130 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v130->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      v47 = m_numTimeBaseTicks - v45;
      v19 = spawner.m_pEntityKeyValues;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v47 + __rdtsc();
    }
    if ( !CEntityKeyValues::HasValue(v19, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v23 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v23,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v26 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v28 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v152 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v28 & 0x7FFF;
      }
      v153[0] = m_pEntity;
      v153[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v153,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v26, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( vecAbsOriginb = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v32 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v32 - 1);
          (pfn)(v32, v26, vecAbsOriginb);
        }
      }
    }
    if ( vecAbsAnglesb )
    {
      v40 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || (v25 = g_VProfCurrentProfile.m_enabled) != 0 )
      {
        v41 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v41 == ThreadGetCurrentId(v25) )
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
      v42 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v42 - v40 + __rdtsc();
    }
    if ( (v152 + 2) > 1 )
    {
      v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v152 >> 9) & 0x3F];
      if ( v33 != 0 )
      {
        v34 = &v33[v152 & 0x1FF];
        if ( v34 != 0 && v152 == v34->m_EHandle.m_Index )
        {
          m_pInstance = v34->m_pInstance;
          if ( v34->m_pInstance != 0 )
            goto LABEL_35;
        }
      }
    }
  }
  m_pInstance = 0;
LABEL_35:
  v36 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v36 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v36);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v37 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v37);
      operator delete(v37);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CItemGeneration::PrecacheItem  (line 134, @0x0000000002e319c0, libserver.so)  // inlines: CSocketIterator, CSocketPair
// calls: CEconItemView::GetStaticData, CSocketIterator::GetSocket
// callers: CItemGeneration::PrecacheItemFromScriptData, CItemGeneration::PrecacheItem
void __fastcall CItemGeneration::PrecacheItem(
        CItemGeneration *const this,
        CEconItemView *pScriptItem,
        const CEntityPrecacheContext *pContext)
{
  const GameItemDefinition_t *StaticData; // rax
  CSocketIterator *m_Sockets; // rax
  int (**vptr_IGameSystem)(...); // rax
  CItemGeneration *v8; // rdi
  int v9; // ebx
  int v10; // esi
  IItemSocket *Socket; // rax
  CSocketIterator socketIterator; // [rsp+0h] [rbp-E0h] BYREF

  StaticData = CEconItemView::GetStaticData(this);
  (*(StaticData->_vptr_IEconItemDefinition + 25))(StaticData, pScriptItem);
  socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
  m_Sockets = socketIterator.m_Sockets;
  do
  {
    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
    m_Sockets = (m_Sockets + 16);
    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
  }
  while ( m_Sockets != &socketIterator.m_nSocketCount );
  vptr_IGameSystem = this->_vptr_IGameSystem;
  v8 = this;
  socketIterator.m_nSocketCount = 0;
  socketIterator.m_nGemCount = 0;
  v9 = 0;
  socketIterator.m_unAttribStorageTypeFlags = 3;
  vptr_IGameSystem[28](v8, &socketIterator);
  if ( socketIterator.m_nSocketCount > 0 )
  {
    do
    {
      v10 = v9++;
      Socket = CSocketIterator::GetSocket(&socketIterator, v10);
      (*(Socket->_vptr_IItemSocket + 26))(Socket, pScriptItem);
    }
    while ( v9 < socketIterator.m_nSocketCount );
  }
}


// CItemGeneration::PrecacheItem  (line 134, @0x0000000002e399e0, libserver.so)
// calls: CItemGeneration::PrecacheItem
void __fastcall CItemGeneration::PrecacheItem(
        CItemGeneration *const this,
        CEconItemView *pScriptItem,
        const CEntityPrecacheContext *pContext)
{
  if ( pScriptItem != 0 )
    CItemGeneration::PrecacheItem(pScriptItem, pContext, pContext);
}


// CItemGeneration::BuildAssetModifierContainer  (line 161, @0x0000000002e4ad60, libserver.so)
// calls: CAssetModifierContainer::PurgeAndDeleteElements, CAssetModifierContainer::CopyAssetModifiers
// callers: CDOTA_BaseNPC::PrecacheWearables
void __fastcall CItemGeneration::BuildAssetModifierContainer(
        CItemGeneration *const this,
        CAssetModifierContainer *pContainer,
        int nEconItemViewCount,
        CEconItemView **ppEconItemViews)
{
  CEconItemView **v7; // r12

  CAssetModifierContainer::PurgeAndDeleteElements(pContainer);
  if ( nEconItemViewCount > 0 )
  {
    v7 = &ppEconItemViews[(nEconItemViewCount - 1) + 1];
    do
    {
      if ( *ppEconItemViews != 0 )
        CAssetModifierContainer::CopyAssetModifiers(pContainer, &(*ppEconItemViews)->m_AssetModifiers, 0, -1);
      ++ppEconItemViews;
    }
    while ( ppEconItemViews != v7 );
  }
}


