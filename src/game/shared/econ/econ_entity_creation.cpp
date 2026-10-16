
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
  this->_vptr_IGameSystem = off_47A0310;  // vptr: CItemGeneration
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
  CEntityKeyValues *v18; // rbx
  int v19; // r15d
  int m_enabled; // r8d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v22; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v24; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v26; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v30; // rdi
  CEntityIdentity *v31; // rax
  CEntityIdentity *v32; // rax
  CBaseEntity *m_pInstance; // rbx
  CUtlScratchMemoryPool *v34; // rdi
  CEntityKeyValues *v35; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v38; // rbx
  ThreadId_t v39; // r15
  uint64 v40; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v43; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v45; // rcx
  CVProfNode *m_pParent; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v48; // cx
  __int64 v49; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v50; // rdx
  int v51; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v52; // cx
  __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v54; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v56; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rax
  uint16 m_flags; // ax
  void *v61; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int16 v66; // dx
  unsigned __int64 v67; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // rax
  uint16 v71; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v77; // cx
  __int64 v78; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v79; // rdx
  __int64 v80; // r15
  unsigned __int64 v81; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v82; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v83; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v84; // rax
  uint16 v85; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // rax
  int16 m_nQueuedForSpawnCount; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  int v91; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v92; // cx
  __int64 v93; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v94; // rdx
  int v95; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v96; // cx
  __int64 v97; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v98; // rdx
  __int64 v99; // r15
  unsigned __int64 v100; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v101; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v102; // r13
  __int64 v103; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v104; // r13
  uint16 v105; // ax
  vec_t *v106; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v107; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v108; // rdx
  __int64 v109; // rax
  int v110; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v111; // cx
  __int64 v112; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v113; // rdx
  __int16 v114; // r13
  unsigned __int64 v115; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v116; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v117; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v118; // rax
  uint16 v119; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v120; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v124; // rdx
  __int64 v125; // rax
  const GameItemDefinition_t *StaticData; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v128; // rax
  __int16 v129; // ax
  void *v130; // rax
  __int16 v131; // ax
  __int64 v132; // rbx
  __int16 v133; // ax
  vec_t *v134; // rax
  __int64 v135; // rbx
  __int16 v136; // ax
  vec_t *v137; // rax
  __int16 v138; // ax
  __int16 v139; // ax
  signed int v140; // [rsp+1Ch] [rbp-114h]
  __int64 v141; // [rsp+20h] [rbp-110h]
  __int64 v142; // [rsp+28h] [rbp-108h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v143; // [rsp+28h] [rbp-108h]
  __int64 v144; // [rsp+28h] [rbp-108h]
  signed int v145; // [rsp+28h] [rbp-108h]
  bool vecAbsAnglesb; // [rsp+30h] [rbp-100h]
  CEntityKeyValues *vecAbsOriginb; // [rsp+38h] [rbp-F8h]
  int v150; // [rsp+40h] [rbp-F0h]
  _QWORD v151[2]; // [rsp+50h] [rbp-E0h] BYREF
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
      v56 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      v142 = v56;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v59 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v59 = 0;
      v141 = v142;
      v143 = &v59[v142];
      m_flags = v143->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v143->m_value.m_flags = m_flags & 0xFFFE;
      v143->m_value.m_uint64 = 0;
      v143->m_value.m_type = 30;
      if ( pszOverrideClassName != 0 )
      {
        v140 = strlen(pszOverrideClassName) + 1;
        v61 = CEntityVariantAllocator::Allocate(v140);
        v143->m_value.m_uint64 = v61;
        memcpy(v61, pszOverrideClassName, v140);
        v143->m_value.m_flags |= 1u;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v62 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v62 = 0;
      v62[v141].m_pAttributeName = 0;
      goto LABEL_9;
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
      if ( v50[v49] == -971301790 )
        break;
      if ( m_nCount <= ++v49 )
        goto LABEL_79;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v63 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v64 = v49;
      v65 = &v63[v64];
      if ( v63[v64].m_pAttributeName != 0 )
      {
LABEL_93:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v63[v64].m_pAttributeName);
        goto LABEL_9;
      }
    }
    else
    {
      v64 = v49;
      v63 = 0;
      v65 = v64 * 24;
      if ( *(v64 * 24 + 16) != 0 )
        goto LABEL_93;
    }
    v129 = *(v65 + 10);
    if ( (v129 & 1) != 0 )
      *(v65 + 10) = v129 & 0xFFFE;
    *v65 = 0;
    *(v65 + 8) = 30;
    if ( pszOverrideClassName != 0 )
    {
      v145 = strlen(pszOverrideClassName) + 1;
      v130 = CEntityVariantAllocator::Allocate(v145);
      *v65 = v130;
      memcpy(v130, pszOverrideClassName, v145);
      *(v65 + 10) |= 1u;
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
  v18 = spawner.m_pEntityKeyValues;
  v19 = Skin;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v51 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v51 <= 0 )
  {
LABEL_94:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v66 = v18->m_keyHashes.m_nCount - 1;
    v67 = v18->m_keyHashes.m_nAllocated;
    if ( v67 != 0 )
    {
      if ( v67 <= 9 )
        v68 = (&v18->m_keyHashes.m_nAllocAllocated + 1);
      else
        v68 = v18->m_keyHashes.m_pElements;
    }
    else
    {
      v68 = 0;
    }
    v68[(v18->m_keyHashes.m_nCount - 1)] = 2020856412;
    v144 = v66;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v18->m_keyValues);
    if ( v18->m_keyValues.m_nAllocated != 0 )
      v69 = v18->m_keyValues.m_pElements;
    else
      v69 = 0;
    v70 = &v69[v144];
    v71 = v70->m_value.m_flags;
    if ( (v71 & 1) != 0 )
      v70->m_value.m_flags = v71 & 0xFFFE;
    v70->m_value.m_uint64 = 0;
    v70->m_value.m_type = 5;
    v70->m_value.m_int = v19;
    if ( v18->m_keyValues.m_nAllocated != 0 )
      v72 = v18->m_keyValues.m_pElements;
    else
      v72 = 0;
    v72[v144].m_pAttributeName = 0;
  }
  else
  {
    v52 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v53 = 0;
    while ( 1 )
    {
      if ( v52 != 0 )
      {
        v54 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v52 > 9 )
          v54 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v54 = 0;
      }
      if ( v54[v53] == 2020856412 )
        break;
      if ( v51 <= ++v53 )
        goto LABEL_94;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v73 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v74 = v53;
      v75 = &v73[v74];
      if ( v73[v74].m_pAttributeName != 0 )
      {
LABEL_106:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v73[v74].m_pAttributeName);
        goto LABEL_107;
      }
    }
    else
    {
      v74 = v53;
      v73 = 0;
      v75 = v74 * 24;
      if ( *(v74 * 24 + 16) != 0 )
        goto LABEL_106;
    }
    v138 = *(v75 + 10);
    if ( (v138 & 1) != 0 )
      *(v75 + 10) = v138 & 0xFFFE;
    *v75 = 0;
    *(v75 + 8) = 5;
    *v75 = v19;
  }
LABEL_107:
  v18 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_13:
    v150 = -1;
    goto LABEL_14;
  }
  v76 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v76 > 0 )
  {
    v77 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v78 = 0;
    while ( 1 )
    {
      if ( v77 != 0 )
      {
        v79 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v77 > 9 )
          v79 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v79 = 0;
      }
      if ( v79[v78] == 1087599987 )
        break;
      if ( v76 <= ++v78 )
        goto LABEL_116;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v88 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v89 = v78;
      v90 = &v88[v89];
      if ( v88[v89].m_pAttributeName != 0 )
      {
LABEL_128:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v88[v89].m_pAttributeName);
LABEL_129:
        v18 = spawner.m_pEntityKeyValues;
        m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
        goto LABEL_130;
      }
    }
    else
    {
      v89 = v78;
      v88 = 0;
      v90 = v89 * 24;
      if ( *(v89 * 24 + 16) != 0 )
        goto LABEL_128;
    }
    v139 = *(v90 + 10);
    if ( (v139 & 1) != 0 )
      *(v90 + 10) = v139 & 0xFFFE;
    *v90 = pData;
    *(v90 + 8) = 33;
    goto LABEL_129;
  }
LABEL_116:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  LOWORD(v80) = v18->m_keyHashes.m_nCount - 1;
  v81 = v18->m_keyHashes.m_nAllocated;
  if ( v81 != 0 )
  {
    if ( v81 <= 9 )
      v82 = (&v18->m_keyHashes.m_nAllocAllocated + 1);
    else
      v82 = v18->m_keyHashes.m_pElements;
  }
  else
  {
    v82 = 0;
  }
  v80 = v80;
  v82[v80] = 1087599987;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v18->m_keyValues);
  if ( v18->m_keyValues.m_nAllocated != 0 )
    v83 = v18->m_keyValues.m_pElements;
  else
    v83 = 0;
  v84 = &v83[v80];
  v85 = v84->m_value.m_flags;
  if ( (v85 & 1) != 0 )
    v84->m_value.m_flags = v85 & 0xFFFE;
  v84->m_value.m_uint64 = pData;
  v84->m_value.m_type = 33;
  if ( v18->m_keyValues.m_nAllocated != 0 )
    v86 = v18->m_keyValues.m_pElements;
  else
    v86 = 0;
  v86[v80].m_pAttributeName = 0;
  v18 = spawner.m_pEntityKeyValues;
  m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
LABEL_130:
  if ( m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v91 = v18->m_keyHashes.m_nCount;
  if ( v91 <= 0 )
  {
LABEL_139:
    CEntityKeyValues::AddKeyValue<Vector>(v18, -467664362, vecAbsOrigin, 0);
    goto LABEL_140;
  }
  v92 = v18->m_keyHashes.m_nAllocated;
  v93 = 0;
  while ( 1 )
  {
    if ( v92 != 0 )
    {
      v94 = (&v18->m_keyHashes.m_nAllocAllocated + 1);
      if ( v92 > 9 )
        v94 = v18->m_keyHashes.m_pElements;
    }
    else
    {
      v94 = 0;
    }
    if ( v94[v93] == -467664362 )
      break;
    if ( v91 <= ++v93 )
      goto LABEL_139;
  }
  if ( v18->m_keyValues.m_nAllocated != 0 )
  {
    v124 = v18->m_keyValues.m_pElements;
    v125 = v93;
    if ( v124[v125].m_pAttributeName != 0 )
    {
LABEL_189:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v124[v125].m_pAttributeName);
      goto LABEL_140;
    }
    v132 = &v124[v125];
  }
  else
  {
    v125 = v93;
    v124 = 0;
    v132 = v125 * 24;
    if ( *(v125 * 24 + 16) != 0 )
      goto LABEL_189;
  }
  v133 = *(v132 + 10);
  if ( (v133 & 1) != 0 )
    *(v132 + 10) = v133 & 0xFFFE;
  *v132 = 0;
  *(v132 + 8) = 3;
  v134 = CEntityVariantAllocator::Allocate(0xCu);
  *v132 = v134;
  *v134 = vecAbsOrigin->x;
  v134[1] = vecAbsOrigin->y;
  v134[2] = vecAbsOrigin->z;
  *(v132 + 10) |= 1u;
LABEL_140:
  v18 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v95 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v95 <= 0 )
  {
LABEL_149:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    LOWORD(v99) = v18->m_keyHashes.m_nCount - 1;
    v100 = v18->m_keyHashes.m_nAllocated;
    if ( v100 != 0 )
    {
      if ( v100 <= 9 )
        v101 = (&v18->m_keyHashes.m_nAllocAllocated + 1);
      else
        v101 = v18->m_keyHashes.m_pElements;
    }
    else
    {
      v101 = 0;
    }
    v99 = v99;
    v101[v99] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v18->m_keyValues);
    if ( v18->m_keyValues.m_nAllocated != 0 )
      v102 = v18->m_keyValues.m_pElements;
    else
      v102 = 0;
    v103 = v99;
    v104 = &v102[v103];
    v105 = v104->m_value.m_flags;
    if ( (v105 & 1) != 0 )
      v104->m_value.m_flags = v105 & 0xFFFE;
    v104->m_value.m_uint64 = 0;
    v104->m_value.m_type = 39;
    v106 = CEntityVariantAllocator::Allocate(0xCu);
    v104->m_value.m_uint64 = v106;
    *v106 = vecAbsAngles->x;
    v106[1] = vecAbsAngles->y;
    v106[2] = vecAbsAngles->z;
    v104->m_value.m_flags |= 1u;
    if ( v18->m_keyValues.m_nAllocated != 0 )
      v107 = v18->m_keyValues.m_pElements;
    else
      v107 = 0;
    v107[v103].m_pAttributeName = 0;
  }
  else
  {
    v96 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v97 = 0;
    while ( 1 )
    {
      if ( v96 != 0 )
      {
        v98 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v96 > 9 )
          v98 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v98 = 0;
      }
      if ( v98[v97] == -1164387633 )
        break;
      if ( v95 <= ++v97 )
        goto LABEL_149;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v108 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v109 = v97;
      if ( v108[v109].m_pAttributeName != 0 )
      {
LABEL_161:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v108[v109].m_pAttributeName);
        goto LABEL_162;
      }
      v135 = &v108[v109];
    }
    else
    {
      v109 = v97;
      v108 = 0;
      v135 = v109 * 24;
      if ( *(v109 * 24 + 16) != 0 )
        goto LABEL_161;
    }
    v136 = *(v135 + 10);
    if ( (v136 & 1) != 0 )
      *(v135 + 10) = v136 & 0xFFFE;
    *v135 = 0;
    *(v135 + 8) = 39;
    v137 = CEntityVariantAllocator::Allocate(0xCu);
    *v135 = v137;
    *v137 = vecAbsAngles->x;
    v137[1] = vecAbsAngles->y;
    v137[2] = vecAbsAngles->z;
    *(v135 + 10) |= 1u;
  }
LABEL_162:
  v18 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_13;
  v110 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v110 > 0 )
  {
    v111 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v112 = 0;
    while ( 1 )
    {
      if ( v111 != 0 )
      {
        v113 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v111 > 9 )
          v113 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v113 = 0;
      }
      if ( v113[v112] == -1104771937 )
        break;
      if ( v110 <= ++v112 )
        goto LABEL_171;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v121 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v122 = v112;
      v123 = &v121[v122];
      if ( v121[v122].m_pAttributeName != 0 )
      {
LABEL_183:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v121[v122].m_pAttributeName);
LABEL_184:
        v18 = spawner.m_pEntityKeyValues;
        goto LABEL_185;
      }
    }
    else
    {
      v122 = v112;
      v121 = 0;
      v123 = v122 * 24;
      if ( *(v122 * 24 + 16) != 0 )
        goto LABEL_183;
    }
    v131 = *(v123 + 10);
    if ( (v131 & 1) != 0 )
      *(v123 + 10) = v131 & 0xFFFE;
    *v123 = 0;
    *(v123 + 8) = 13;
    *v123 = -1;
    goto LABEL_184;
  }
LABEL_171:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v114 = v18->m_keyHashes.m_nCount - 1;
  v115 = v18->m_keyHashes.m_nAllocated;
  if ( v115 != 0 )
  {
    if ( v115 <= 9 )
      v116 = (&v18->m_keyHashes.m_nAllocAllocated + 1);
    else
      v116 = v18->m_keyHashes.m_pElements;
  }
  else
  {
    v116 = 0;
  }
  v116[v114] = -1104771937;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v18->m_keyValues);
  if ( v18->m_keyValues.m_nAllocated != 0 )
    v117 = v18->m_keyValues.m_pElements;
  else
    v117 = 0;
  v118 = &v117[v114];
  v119 = v118->m_value.m_flags;
  if ( (v119 & 1) != 0 )
    v118->m_value.m_flags = v119 & 0xFFFE;
  v118->m_value.m_uint64 = 0;
  v118->m_value.m_type = 13;
  v118->m_value.m_int = -1;
  if ( v18->m_keyValues.m_nAllocated != 0 )
    v120 = v18->m_keyValues.m_pElements;
  else
    v120 = 0;
  v120[v114].m_pAttributeName = 0;
  v18 = spawner.m_pEntityKeyValues;
LABEL_185:
  v150 = -1;
  if ( v18 != 0 )
  {
LABEL_14:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    vecAbsAnglesb = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      v43 = __rdtsc();
      if ( m_TargetThreadId == ThreadGetCurrentId() )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "Spawn" )
        {
          m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v128 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v128->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      v45 = m_numTimeBaseTicks - v43;
      v18 = spawner.m_pEntityKeyValues;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v45 + __rdtsc();
    }
    if ( !CEntityKeyValues::HasValue(v18, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v22 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v22,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v24 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v26 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v150 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v26 & 0x7FFF;
      }
      v151[0] = m_pEntity;
      v151[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v151,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v24, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( vecAbsOriginb = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v30 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v30 - 1);
          (pfn)(v30, v24, vecAbsOriginb);
        }
      }
    }
    if ( vecAbsAnglesb )
    {
      v38 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v39 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v39 == ThreadGetCurrentId() )
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
      v40 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v40 - v38 + __rdtsc();
    }
    if ( (v150 + 2) > 1 )
    {
      v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v150 >> 9) & 0x3F];
      if ( v31 != 0 )
      {
        v32 = &v31[v150 & 0x1FF];
        if ( v32 != 0 && v150 == v32->m_EHandle.m_Index )
        {
          m_pInstance = v32->m_pInstance;
          if ( v32->m_pInstance != 0 )
            goto LABEL_35;
        }
      }
    }
  }
  m_pInstance = 0;
LABEL_35:
  v34 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v34 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v34);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v35 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v35);
      operator delete(v35);
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


