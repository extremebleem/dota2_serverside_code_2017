
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_MapTree::GetDataDescMap  (line 21, @0x00000000026bd050, libserver.so)
// globals: CDOTA_MapTree::m_DataMap
datamap_t *__fastcall CDOTA_MapTree::GetDataDescMap(CDOTA_MapTree *const this)
{
  return &CDOTA_MapTree::m_DataMap;
}


// CDOTA_MapTree::AddDatadescMetadataKeys  (line 21, @0x00000000026f68f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_MapTree::GetEntityClass(void)
void __fastcall CDOTA_MapTree::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_MapTree::GetEntityClass);
}


// CDOTA_MapTree::GetBaseMap  (line 21, @0x00000000026f6910, libserver.so)
datamap_t *__cdecl CDOTA_MapTree::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CDOTA_MapTree>  (line 21, @0x00000000026f6920, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "CDOTA_MapTree"
// globals: `guard variable for'DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder, CDOTA_MapTree::GetEntityClass(void), CDOTA_MapTree::m_DataMap, DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder.m_pszBase = "CDOTA_MapTree";
    DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_MapTree::m_DataMap.dataNumFields = 3;
  CDOTA_MapTree::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CDOTA_MapTree::m_DataMap.dataDesc = &DataMapInit<CDOTA_MapTree>(CDOTA_MapTree *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_MapTree::m_DataMap, CDOTA_MapTree::GetEntityClass);
  return &CDOTA_MapTree::m_DataMap;
}


// CDOTA_MapTree::Spawn  (line 28, @0x00000000026f6da0, libserver.so)  // inlines: GetMapDataForSpawnGroup, GetSpawnGroupHandle, SetBinaryID
// calls: CBaseEntity::GetAbsOrigin, DOTATree_SnapLocationToGridNav, CWorldGameSystem::GetWorldInfoForSpawnGroup, CSpawnGroupMgrGameSystem::GetSpawnGroupEntityLumpName, CDOTA_BinaryObject::Spawn, CBaseEntity::SetAbsOrigin, CDOTAFogOfWarSystem::GetFoW, CFoW::AddOccluder, CGridNav::SetTreeBlocked, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "main lump", "Unknown tree on server in entity lump '%s' at < %.1f, %.1f >\n"
void __fastcall CDOTA_MapTree::Spawn(CDOTA_MapTree *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  __int64 m_mapDataHandle; // r13
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  CEntityIdentity *v8; // rax
  SpawnGroupHandle_t v9; // esi
  int v10; // eax
  const char *v11; // rcx
  int v12; // r14d
  CFoW *FoW; // rax
  const char *pEntityLumpName; // [rsp+8h] [rbp-48h]
  const char *pEntityLumpNamea; // [rsp+8h] [rbp-48h]
  Vector vTreeCenter; // [rsp+10h] [rbp-40h] BYREF

  vTreeCenter = *CBaseEntity::GetAbsOrigin(this);
  DOTATree_SnapLocationToGridNav(&vTreeCenter);
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  m_mapDataHandle = -1;
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, m_hSpawnGroup);
  if ( WorldInfoForSpawnGroup != 0 )
    m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
  if ( (*(*g_pDotaMapUtils + 152LL))(g_pDotaMapUtils, m_mapDataHandle) != 0 )
  {
    v8 = this->m_pEntity;
    if ( v8 != 0 )
      v9 = v8->m_hSpawnGroup;
    else
      v9 = 0;
    pEntityLumpName = CSpawnGroupMgrGameSystem::GetSpawnGroupEntityLumpName(g_pSpawnGroupMgr, v9);
    v10 = (*(*g_pDotaMapUtils + 160LL))(g_pDotaMapUtils, m_mapDataHandle, pEntityLumpName, vTreeCenter.x, vTreeCenter.y);
    v11 = pEntityLumpName;
    v12 = v10;
    if ( v10 == -1 )
    {
      if ( pEntityLumpName != 0 )
      {
        if ( *pEntityLumpName == 0 )
          v11 = "main lump";
      }
      else
      {
        v11 = "main lump";
      }
      pEntityLumpNamea = v11;
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
        LoggingSystem_Log(
          LOG_SERVER,
          2,
          "Unknown tree on server in entity lump '%s' at < %.1f, %.1f >\n",
          pEntityLumpNamea,
          vTreeCenter.x,
          vTreeCenter.y);
    }
    this->m_nBinaryID = v12;
  }
  CDOTA_BinaryObject::Spawn(this, pKeyValues);
  this->m_nObstructionProperties = 40;
  CBaseEntity::SetAbsOrigin(this, &vTreeCenter);
  FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, this->m_worldGroupId);
  this->m_nOccluderIndex = CFoW::AddOccluder(FoW, &vTreeCenter);
  CGridNav::SetTreeBlocked(&g_GridNav, &this->CDOTA_Tree, 1);
}


// CDOTA_MapTree::UpdateOnRemove  (line 64, @0x00000000026f7390, libserver.so)
// calls: CDOTA_BinaryObject::UpdateOnRemove, CGridNav::SetTreeBlocked, CDOTA_Tree::ShutdownTree
void __fastcall CDOTA_MapTree::UpdateOnRemove(CDOTA_MapTree *const this)
{
  CDOTA_Tree *v1; // rbx

  v1 = &this->CDOTA_Tree;
  CDOTA_BinaryObject::UpdateOnRemove(this);
  CGridNav::SetTreeBlocked(&g_GridNav, v1, 0);
  CDOTA_Tree::ShutdownTree(v1);
}


// CDOTA_MapTree::DefaultRegrowTime  (line 72, @0x00000000026f69f0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetTreeRegrowTime, RandomFloat
// callers: CDOTA_MapTree::CutDown, CDOTA_MapTree::Script_CutDown, CDOTA_MapTree::InputCutDown
float __fastcall CDOTA_MapTree::DefaultRegrowTime(CDOTA_MapTree *const this)
{
  float TreeRegrowTime; // [rsp+Ch] [rbp-4h]

  TreeRegrowTime = CDOTAGamerules::GetTreeRegrowTime(g_pGameRules);
  return RandomFloat(-1.0, 1.0) + TreeRegrowTime;
}


// CDOTA_MapTree::CutDown  (line 78, @0x00000000026febe0, libserver.so)
// calls: IncrementCommunityGoal, CDOTA_MapTree::DefaultRegrowTime, CDOTA_MapTree::CutDownEx
void __fastcall CDOTA_MapTree::CutDown(CDOTA_MapTree *const this, int nPlayerTreeKiller, int nTeamNumberKnownTo)
{
  float v5; // xmm0_4
  float v6; // xmm1_4

  IncrementCommunityGoal(
    EEvent::EVENT_ID_INTERNATIONAL_2016,
    EEventCommunityGoals_t::ECG_TI6_TreesDestroyed,
    1u,
    nPlayerTreeKiller);
  v5 = CDOTA_MapTree::DefaultRegrowTime(this);
  CDOTA_MapTree::CutDownEx(this, v5, v6, nTeamNumberKnownTo);
}


// CDOTA_MapTree::CutDownEx  (line 84, @0x00000000026fe800, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CreateEvent, EmitSound_t, Purge, RemoveAll, SoundEventGuid_t, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CGridNav::SetTreeBlocked, CDOTA_BinaryObject::SetActive, CDOTA_BinaryObjectSystem::ActivateIn, CDOTAFogOfWarSystem::GetFoW, CFoW::EnableOccluder, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CDOTAFogOfWarSystem::IsLocationVisible, CRecipientFilter::RemoveRecipientsByTeamNumber, CBaseEntity::EmitSound (17 total)
// callers: CDOTA_MapTree::CutDown, CDOTA_MapTree::Script_CutDown, CDOTA_MapTree::Script_CutDownRegrowAfter, CDOTA_MapTree::InputCutDown, CDOTA_MapTree::InputCutDownForever
// strings: "Tree.CutDown", "tree_cut", "tree_x", "tree_y"
void __fastcall CDOTA_MapTree::CutDownEx(
        CDOTA_MapTree *const this,
        float a2,
        float flRegrowAfter,
        int nTeamNumberKnownTo)
{
  float v6; // xmm1_4
  uint32 m_nOccluderIndex; // ebx
  CFoW *FoW; // rax
  const Vector *AbsOrigin; // rax
  __int64 v10; // rdx
  float v11; // xmm1_4
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rbx
  Vector vPos; // [rsp+10h] [rbp-1E0h] BYREF
  EmitSound_t ep; // [rsp+20h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+1B8h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( this->m_bStanding )
  {
    CGridNav::SetTreeBlocked(&g_GridNav, &this->CDOTA_Tree, 0);
    CDOTA_BinaryObject::SetActive(this, 0, nTeamNumberKnownTo);
    if ( a2 > 0.0 )
      CDOTA_BinaryObjectSystem::ActivateIn(&g_CDOTA_BinaryObjectSystem, this, a2, v6);
    m_nOccluderIndex = this->m_nOccluderIndex;
    FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, this->m_worldGroupId);
    CFoW::EnableOccluder(FoW, m_nOccluderIndex, 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v10 = *&AbsOrigin->x;
    ep.m_nChannel = 6;
    *&vPos.x = v10;
    *&AbsOrigin = AbsOrigin->z;
    ep.m_bEmitCloseCaption = 1;
    ep.m_flVolume = 1.0;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    ep.m_nFlags = 0;
    LODWORD(vPos.z) = AbsOrigin;
    ep.m_pSoundName = "Tree.CutDown";
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_nPitch = 100;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_pOrigin = &vPos;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v11);
    v12 = 0;
    while ( ++v12 != 14 )
    {
      while ( ((v12 - 6) <= 7 || (v12 - 2) <= 1)
           && nTeamNumberKnownTo != v12
           && !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v12, &vPos, 0.0) )
      {
        CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, v12++);
        if ( v12 == 14 )
          goto LABEL_11;
      }
    }
LABEL_11:
    CBaseEntity::EmitSound(&filter, 0, &ep);
    this->m_bStanding = 0;
    v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "tree_cut", 0, 0);
    v14 = v13;
    if ( v13 != 0 )
    {
      (*(*v13 + 128LL))(v13, "tree_x", vPos.x);
      (*(*v14 + 128LL))(v14, "tree_y", vPos.y);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v14, 1);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
  }
}


// CDOTA_MapTree::Script_CutDown  (line 131, @0x00000000026fec30, libserver.so)
// calls: CDOTA_MapTree::DefaultRegrowTime, CDOTA_MapTree::CutDownEx
void __fastcall CDOTA_MapTree::Script_CutDown(CDOTA_MapTree *const this, int nTeamNumberKnownTo)
{
  float v4; // xmm0_4
  float v5; // xmm1_4

  v4 = CDOTA_MapTree::DefaultRegrowTime(this);
  CDOTA_MapTree::CutDownEx(this, v4, v5, nTeamNumberKnownTo);
}


// CDOTA_MapTree::Script_CutDownRegrowAfter  (line 136, @0x00000000026fec60, libserver.so)
// calls: CDOTA_MapTree::CutDownEx
void __fastcall CDOTA_MapTree::Script_CutDownRegrowAfter(
        CDOTA_MapTree *const this,
        float a2,
        float flRegrowAfter,
        int nTeamNumberKnownTo)
{
  CDOTA_MapTree::CutDownEx(this, a2, flRegrowAfter, nTeamNumberKnownTo);
}


// CDOTA_MapTree::InputGrowBack  (line 141, @0x0000000002700a70, libserver.so)
// calls: CDOTA_MapTree::GrowBack
void __fastcall CDOTA_MapTree::InputGrowBack(CDOTA_MapTree *const this, inputdata_t *const inputdata)
{
  CDOTA_MapTree::GrowBack(this);
}


// CDOTA_MapTree::InputCutDown  (line 146, @0x00000000026fec70, libserver.so)  // inlines: GetTeamNumber
// calls: __dynamic_cast, CDOTA_MapTree::DefaultRegrowTime, CDOTA_MapTree::CutDownEx
void __fastcall CDOTA_MapTree::InputCutDown(CDOTA_MapTree *const this, inputdata_t *const inputdata)
{
  int v2; // r12d
  unsigned __int8 *v4; // rax
  float v5; // xmm0_4
  float v6; // xmm1_4

  v2 = -1;
  if ( inputdata->pActivator != 0 )
  {
    v4 = __dynamic_cast(inputdata->pActivator, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
    if ( v4 != 0 )
      v2 = v4[383];
  }
  v5 = CDOTA_MapTree::DefaultRegrowTime(this);
  CDOTA_MapTree::CutDownEx(this, v5, v6, v2);
}


// CDOTA_MapTree::InputCutDownForever  (line 159, @0x00000000026fecd0, libserver.so)  // inlines: GetTeamNumber
// calls: __dynamic_cast, CDOTA_MapTree::CutDownEx
void __fastcall CDOTA_MapTree::InputCutDownForever(CDOTA_MapTree *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  int v4; // ebx
  unsigned __int8 *v5; // rax

  v4 = -1;
  if ( inputdata->pActivator != 0 )
  {
    v5 = __dynamic_cast(inputdata->pActivator, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
    if ( v5 != 0 )
      v4 = v5[383];
  }
  CDOTA_MapTree::CutDownEx(this, -1.0, v2, v4);
}


// CDOTA_MapTree::GrowBack  (line 173, @0x0000000002700290, libserver.so)  // inlines: CEntityHandle, CEntityIndex, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, EmitSound_t, GetEHandle, GetEntryIndex, GetSerialNumber, Purge, Purge_FixedGrowable, RemoveAll, Set, SoundEventGuid_t, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~EmitSound_t
// calls: CGridNav::SetTreeBlocked, CBaseEntity::GetAbsOrigin, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, CDOTA_BinaryObjectSystem::ActivateIn, CUtlMemory<IntersectionRecord_t, int>::Purge, CDOTA_BinaryObject::SetActive, CDOTAFogOfWarSystem::GetFoW, CFoW::EnableOccluder, CPASAttenuationFilter::CPASAttenuationFilter, CDOTAFogOfWarSystem::IsLocationVisible, CRecipientFilter::RemoveRecipientsByTeamNumber (18 total)
// callers: CDOTA_MapTree::InputGrowBack, CDOTA_MapTree::SetActive
// strings: "Tree.GrowBack"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_MapTree::GrowBack(CDOTA_MapTree *const this)
{
  Vector *AbsOrigin; // rax
  double v3; // xmm0_8
  __int64 v4; // r12
  int i; // r13d
  const CBaseEntity *p_m_pObstructionRecord; // rbx
  CObstructionObject *m_pObstructionObject; // rax
  ObstructionRelationshipClass_t v8; // eax
  const Vector *v9; // rax
  __int64 v10; // rdx
  CEntityIdentity *m_pEntity; // rax
  int v12; // edx
  __int16 v13; // cx
  IntersectionRecord_t *m_pMemory; // rax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  uint32 v16; // eax
  float v17; // xmm1_4
  uint32 v18; // eax
  uint32 v19; // eax
  __int64 v20; // r12
  int v21; // r13d
  CObstructionObject *v22; // rax
  ObstructionRecord_t **v23; // rbx
  uint32 m_nOccluderIndex; // ebx
  CFoW *FoW; // rax
  float v26; // xmm1_4
  int v27; // ebx
  float v28; // xmm1_4
  CDOTA_Tree *pTree; // [rsp+18h] [rbp-568h]
  float flRelaitonshipRadiusAdjustment; // [rsp+44h] [rbp-53Ch]
  uint32 v31[4]; // [rsp+50h] [rbp-530h] BYREF
  Vector vPos; // [rsp+60h] [rbp-520h] BYREF
  __int128 vNPCPos; // [rsp+70h] [rbp-510h] OVERLAPPED BYREF
  int v34; // [rsp+80h] [rbp-500h]
  int v35; // [rsp+84h] [rbp-4FCh]
  int v36; // [rsp+88h] [rbp-4F8h]
  int v37; // [rsp+8Ch] [rbp-4F4h]
  Vector *p_vPos; // [rsp+90h] [rbp-4F0h]
  int v39; // [rsp+98h] [rbp-4E8h]
  __int64 v40; // [rsp+A0h] [rbp-4E0h]
  char v41; // [rsp+A8h] [rbp-4D8h]
  char v42; // [rsp+A9h] [rbp-4D7h]
  char v43; // [rsp+AAh] [rbp-4D6h]
  int v44; // [rsp+ACh] [rbp-4D4h]
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> > v45; // [rsp+B0h] [rbp-4D0h] BYREF
  int v46; // [rsp+C8h] [rbp-4B8h]
  char v47; // [rsp+CCh] [rbp-4B4h]
  CPASAttenuationFilter filter; // [rsp+D0h] [rbp-4B0h] BYREF
  CollisionResultList_t intersectionRecords; // [rsp+210h] [rbp-370h] BYREF
  CollisionResultList_t npcIntersectionRecords; // [rsp+3B0h] [rbp-1D0h] BYREF
  unsigned __int64 v51; // [rsp+548h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  if ( !this->m_bStanding )
  {
    pTree = &this->CDOTA_Tree;
    CGridNav::SetTreeBlocked(&g_GridNav, &this->CDOTA_Tree, 1);
    intersectionRecords.m_Size = 0;
    intersectionRecords.m_Memory.m_nAllocationCount = 16;
    intersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
    intersectionRecords.m_Memory.m_pMemory = &intersectionRecords.m_Memory.m_FixedMemory;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v3 = g_GridNav.m_flEdgeSize * 1.414213562373095;
    vPos = *AbsOrigin;
    *&v3 = v3;
    CGridNav::PrepareObstructionManager(
      &g_GridNav,
      *&v3,
      0x10u,
      0x42u,
      ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
      0.0);
    LODWORD(vNPCPos) = -2;
    CGridNav::CheckForCollisions(&g_GridNav, &vPos, &intersectionRecords, &vNPCPos, 0);
    if ( intersectionRecords.m_Size > 0 )
    {
      v4 = 0;
      for ( i = 0; intersectionRecords.m_Size > i; ++i )
      {
        p_m_pObstructionRecord = 0;
        m_pObstructionObject = intersectionRecords.m_Memory.m_pMemory[v4].m_pObsRec->m_pObstructionObject;
        if ( m_pObstructionObject != 0 )
          p_m_pObstructionRecord = &m_pObstructionObject[-86].m_pObstructionRecord;
        if ( (*(p_m_pObstructionRecord->_vptr_IHandleEntity + 412))(p_m_pObstructionRecord) != 0 )
        {
          npcIntersectionRecords.m_Size = 0;
          npcIntersectionRecords.m_Memory.m_nAllocationCount = 16;
          npcIntersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
          npcIntersectionRecords.m_Memory.m_pMemory = &npcIntersectionRecords.m_Memory.m_FixedMemory;
          flRelaitonshipRadiusAdjustment = p_m_pObstructionRecord[2].m_flOverriddenFriction;
          v8 = (*(p_m_pObstructionRecord->_vptr_IHandleEntity + 454))(p_m_pObstructionRecord);
          CGridNav::PrepareObstructionManager(
            &g_GridNav,
            *&p_m_pObstructionRecord[2].m_bNetworkQuantizeOriginAndAngles,
            0,
            0x10u,
            v8,
            flRelaitonshipRadiusAdjustment);
          v9 = CBaseEntity::GetAbsOrigin(p_m_pObstructionRecord);
          v10 = *&v9->x;
          v31[0] = -1;
          *&vNPCPos = v10;
          DWORD2(vNPCPos) = LODWORD(v9->z);
          m_pEntity = p_m_pObstructionRecord->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v13 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v31[0]) = v13 | v31[0] & 0x8000;
            v31[0] = (v12 << 15) | v31[0] & 0x7FFF;
          }
          CGridNav::CheckForCollisions(&g_GridNav, &vNPCPos, &npcIntersectionRecords, v31, 0);
          if ( npcIntersectionRecords.m_Size > 0 )
          {
            m_pMemory = npcIntersectionRecords.m_Memory.m_pMemory;
            m_pObstructionRecord = this->m_pObstructionRecord;
            if ( npcIntersectionRecords.m_Memory.m_pMemory->m_pObsRec == m_pObstructionRecord )
            {
LABEL_23:
              CGridNav::SetTreeBlocked(&g_GridNav, pTree, 0);
              CDOTA_BinaryObjectSystem::ActivateIn(&g_CDOTA_BinaryObjectSystem, this, 1.0, v17);
              npcIntersectionRecords.m_Size = 0;
              v18 = npcIntersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
              if ( npcIntersectionRecords.m_Memory.m_nAllocationCount < 0
                || npcIntersectionRecords.m_Memory.m_pMemory == &npcIntersectionRecords.m_Memory.m_FixedMemory )
              {
                if ( v18 == 0 )
                  CUtlMemory<IntersectionRecord_t,int>::Purge(&npcIntersectionRecords.m_Memory);
              }
              else if ( npcIntersectionRecords.m_Memory.m_pMemory != 0 && v18 == 0 )
              {
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
              }
              goto LABEL_28;
            }
            while ( m_pMemory != &npcIntersectionRecords.m_Memory.m_pMemory[npcIntersectionRecords.m_Size - 1] )
            {
              ++m_pMemory;
              if ( m_pMemory->m_pObsRec == m_pObstructionRecord )
                goto LABEL_23;
            }
          }
          npcIntersectionRecords.m_Size = 0;
          v16 = npcIntersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
          if ( npcIntersectionRecords.m_Memory.m_nAllocationCount < 0
            || npcIntersectionRecords.m_Memory.m_pMemory == &npcIntersectionRecords.m_Memory.m_FixedMemory )
          {
            if ( v16 == 0 )
              CUtlMemory<IntersectionRecord_t,int>::Purge(&npcIntersectionRecords.m_Memory);
          }
          else if ( npcIntersectionRecords.m_Memory.m_pMemory != 0 && v16 == 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          }
        }
        ++v4;
      }
    }
    npcIntersectionRecords.m_Size = 0;
    npcIntersectionRecords.m_Memory.m_nAllocationCount = 16;
    npcIntersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
    npcIntersectionRecords.m_Memory.m_pMemory = &npcIntersectionRecords.m_Memory.m_FixedMemory;
    CGridNav::PrepareObstructionManager(
      &g_GridNav,
      250.0,
      0x10u,
      0x42u,
      ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
      0.0);
    LODWORD(vNPCPos) = -2;
    CGridNav::CheckForCollisions(&g_GridNav, &vPos, &npcIntersectionRecords, &vNPCPos, 0);
    v20 = 0;
    v21 = 0;
    if ( npcIntersectionRecords.m_Size <= 0 )
    {
LABEL_45:
      CDOTA_BinaryObject::SetActive(this, 1, -1);
      m_nOccluderIndex = this->m_nOccluderIndex;
      FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, this->m_worldGroupId);
      CFoW::EnableOccluder(FoW, m_nOccluderIndex, 1);
      v34 = 1065353216;
      *(&vNPCPos + 1) = "Tree.GrowBack";
      v35 = 0;
      v36 = 0;
      v37 = 100;
      v39 = 0;
      v40 = 0;
      v41 = 1;
      v42 = 0;
      v43 = 0;
      v44 = -1;
      v45.m_Size = 0;
      v45.m_Memory.m_pMemory = 0;
      v45.m_Memory.m_nAllocationCount = 0;
      v45.m_Memory.m_nGrowSize = 0;
      v46 = 0;
      v47 = 0;
      LODWORD(vNPCPos) = 6;
      p_vPos = &vPos;
      CPASAttenuationFilter::CPASAttenuationFilter(&filter, &vPos, 0x3F4CCCCDu, v26);
      v27 = 0;
      while ( ++v27 != 14 )
      {
        if ( ((v27 - 6) <= 7 || (v27 - 2) <= 1)
          && !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v27, &vPos, 0.0) )
        {
          CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, v27);
        }
      }
      CBaseEntity::EmitSound(&filter, 0, &vNPCPos);
      this->m_bStanding = 1;
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&v45);
      CUtlVectorBase<IntersectionRecord_t,CUtlMemoryFixedGrowable<IntersectionRecord_t,16ul,int>>::~CUtlVectorBase(&npcIntersectionRecords);
      CUtlVectorBase<IntersectionRecord_t,CUtlMemoryFixedGrowable<IntersectionRecord_t,16ul,int>>::~CUtlVectorBase(&intersectionRecords);
    }
    else
    {
      while ( 1 )
      {
        v22 = npcIntersectionRecords.m_Memory.m_pMemory[v20].m_pObsRec->m_pObstructionObject;
        v23 = &v22[-86].m_pObstructionRecord;
        if ( v22 == 0 )
          v23 = 0;
        if ( (*&(*v23)[51].m_fRadiusAdjustFactor)(v23) != 0 && v23[368] != 0 )
          break;
        ++v21;
        ++v20;
        if ( npcIntersectionRecords.m_Size <= v21 )
          goto LABEL_45;
      }
      CGridNav::SetTreeBlocked(&g_GridNav, pTree, 0);
      CDOTA_BinaryObjectSystem::ActivateIn(&g_CDOTA_BinaryObjectSystem, this, 1.0, v28);
      CUtlVectorBase<IntersectionRecord_t,CUtlMemoryFixedGrowable<IntersectionRecord_t,16ul,int>>::~CUtlVectorBase(&npcIntersectionRecords);
LABEL_28:
      intersectionRecords.m_Size = 0;
      v19 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
      if ( intersectionRecords.m_Memory.m_nAllocationCount < 0
        || intersectionRecords.m_Memory.m_pMemory == &intersectionRecords.m_Memory.m_FixedMemory )
      {
        if ( v19 == 0 )
          CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionRecords.m_Memory);
      }
      else if ( intersectionRecords.m_Memory.m_pMemory != 0 && v19 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
    }
  }
}


// CDOTA_MapTree::SetActive  (line 263, @0x0000000002700a80, libserver.so)
// calls: CDOTA_MapTree::GrowBack
void __fastcall CDOTA_MapTree::SetActive(CDOTA_MapTree *const this, bool bActive, int nTeamNumberKnownTo)
{
  if ( bActive )
    CDOTA_MapTree::GrowBack(this);
}


// GetUnitOrderTreeIdForEntityIndex  (line 282, @0x00000000026f6a30, libserver.so)  // inlines: GetBinaryID, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, entindex
// calls: __dynamic_cast, CEntityInstance::GetEntityIndex
// callers: Script_GetTreeIdForEntityIndex, CDOTA_Modifier_MonkeyKing_BouncePerch::OnCreated, CDOTA_Modifier_MonkeyKing_Transform::OnCreated
// globals: `typeinfo for'CDOTA_MapTree, `typeinfo for'CDOTA_TempTree
DotaTreeId_t __fastcall GetUnitOrderTreeIdForEntityIndex(CEntityIndex nEntityIndex)
{
  DotaTreeId_t v1; // ebx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rax
  CEntityInstance *m_pInstance; // r12
  _DWORD *v6; // rax
  const CEntityInstance *v7; // rax

  v1 = -1;
  if ( nEntityIndex.m_Data <= 0 )
    return v1;
  if ( nEntityIndex.m_Data > 0x7FFE )
    return v1;
  v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
  if ( v3 == 0 )
    return v1;
  v4 = &v3[nEntityIndex.m_Data & 0x1FF];
  if ( v4 == 0 )
    return v1;
  if ( nEntityIndex.m_Data != (v4->m_EHandle.m_Index & 0x7FFF) )
    return v1;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return v1;
  v6 = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_MapTree, 0);
  if ( v6 == 0 )
  {
    v7 = __dynamic_cast(m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_TempTree, 0);
    if ( v7 != 0 )
      return g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size + CEntityInstance::GetEntityIndex(v7).m_Data;
    return v1;
  }
  return v6[195];
}


