
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameSaveRestoreInfo::CGameSaveRestoreInfo  (line 6, @0x0000000002f49e70, libserver.so)  // inlines: CCompressedResourceManifest, CEntityHandle, CUtlMemory, CUtlString, CUtlStringMap, CUtlVector, CUtlVectorBase, Purge, RemoveAll, levellist_t, operator[], saverestorelevelinfo_t, ~CUtlHash, ~CUtlMemory, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs>::CUtlHash, CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CGameSaveRestoreInfo::Clear, saverestorelevelinfo_t::~saverestorelevelinfo_t, _Unwind_Resume, CCompressedResourceManifest::~CCompressedResourceManifest, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int>::Purge, CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int> >::~CUtlVectorBase, CUtlMemory<entitytable_t, int>::Purge, CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int> >::~CUtlVectorBase
// callers: CEntity2SaveRestore::SaveInit, CEntity2SaveRestore::LoadSaveData, CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList, CEntity2SaveRestore::LoadAdjacentEnts
void __fastcall CGameSaveRestoreInfo::CGameSaveRestoreInfo(CGameSaveRestoreInfo *const this)
{
  levellist_t *m_levelList; // rcx
  bool *p_m_bUseLandmark; // r8
  levellist_t *v3; // rax
  CEntityHandle *p_m_hEntLandmark; // rsi
  CUtlString *p_m_sLandmarkName; // rdi
  levellist_t *v7; // rdx
  signed __int64 v8; // rdx
  __int64 v9; // rdx
  vec_t z; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi

  m_levelList = this->m_levelInfo.m_levelList;
  p_m_bUseLandmark = &this->m_levelInfo.m_bUseLandmark;
  v3 = this->m_levelInfo.m_levelList;
  p_m_hEntLandmark = &this->m_levelInfo.m_levelList[0].m_hEntLandmark;
  this->m_levelInfo.m_nConnectionCount = 0;
  p_m_sLandmarkName = &this->m_levelInfo.m_levelList[0].m_sLandmarkName;
  do
  {
    v3->m_sMapName.m_pString = 0;
    v7 = v3++;
    v8 = v7 - m_levelList;
    *(&p_m_sLandmarkName->m_pString + v8) = 0;
    *(&p_m_hEntLandmark->m_Index + v8) = -1;
  }
  while ( v3 != p_m_bUseLandmark );
  this->m_levelInfo.m_bUseLandmark = 0;
  this->m_levelInfo.m_sLandmarkName.m_pString = 0;
  this->m_levelInfo.m_flSaveTime = 0.0;
  v9 = *&vec3_origin.x;
  z = vec3_origin.z;
  this->m_levelInfo.m_nSaveTick = 0;
  this->m_levelInfo.m_sCurrentMapName.m_pString = 0;
  *&this->m_levelInfo.m_vecLandmarkOffset.x = v9;
  *&this->m_modelSpaceOffset.x = v9;
  this->m_levelInfo.m_vecLandmarkOffset.z = z;
  this->m_levelInfo.m_nMapVersion = 0;
  this->m_modelSpaceOffset.z = z;
  this->m_EntityTable.m_Size = 0;
  this->m_EntityTable.m_Memory.m_pMemory = 0;
  this->m_EntityTable.m_Memory.m_nAllocationCount = 0;
  this->m_EntityTable.m_Memory.m_nGrowSize = 0;
  this->m_pCurrentEntity = 0;
  this->m_bAdjacent = 0;
  CUtlHash<CGameSaveRestoreInfo::CHashElement,CGameSaveRestoreInfo::CHashFuncs,CGameSaveRestoreInfo::CHashFuncs>::CUtlHash(
    &this->m_EntityToIndex,
    0,
    0,
    0);
  this->m_ResourceList.m_resources.m_Vector.m_Size = 0;
  this->m_ResourceList.m_resources.m_Vector.m_Memory.m_pMemory = 0;
  this->m_ResourceList.m_resources.m_Vector.m_Memory.m_nAllocationCount = 32;
  this->m_ResourceList.m_resources.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(v11, v12);
  this->m_ResourceList.m_resources.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                                   g_pMemAlloc,
                                                                   24LL
                                                                 * this->m_ResourceList.m_resources.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_ResourceList.m_resources.m_SymbolTable, 0, 32, 1);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_ResourceList.m_paths, 0, 16, 0);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_ResourceList.m_extensions, 0, 16, 0);
  CGameSaveRestoreInfo::Clear(this);
}


// CGameSaveRestoreInfo::Clear  (line 11, @0x0000000002f48f60, libserver.so)  // inlines: Clear, Init, Purge, RemoveAll, operator=, operator[]
// calls: CUtlString::Clear, CUtlMemory<entitytable_t, int>::Purge, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int>::Purge, CCompressedResourceManifest::RemoveAll
// callers: CEntity2SaveRestore::LoadAdjacentEnts, CGameSaveRestoreInfo::CGameSaveRestoreInfo
void __fastcall CGameSaveRestoreInfo::Clear(CGameSaveRestoreInfo *const this)
{
  int v2; // r14d
  levellist_t *m_levelList; // r12
  Vector *p_m_vecLandmarkOrigin; // rbx
  vec_t x; // xmm2_4
  signed __int64 v6; // rdx
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  bool v9; // zf
  int m_Size; // edx
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v13; // rdi
  vec_t v14; // [rsp+0h] [rbp-40h]
  vec_t v15; // [rsp+4h] [rbp-3Ch]
  CEntityHandle *p_m_hEntLandmark; // [rsp+8h] [rbp-38h]
  vec_t v17; // [rsp+8h] [rbp-38h]

  v2 = 0;
  m_levelList = this->m_levelInfo.m_levelList;
  p_m_vecLandmarkOrigin = &this->m_levelInfo.m_levelList[0].m_vecLandmarkOrigin;
  this->m_levelInfo.m_nConnectionCount = 0;
  p_m_hEntLandmark = &this->m_levelInfo.m_levelList[0].m_hEntLandmark;
  do
  {
    ++v2;
    p_m_vecLandmarkOrigin = (p_m_vecLandmarkOrigin + 32);
    CUtlString::Clear(&m_levelList->m_sMapName);
    CUtlString::Clear(&m_levelList->m_sLandmarkName);
    x = vec3_origin.x;
    v6 = m_levelList++ - this;
    y = vec3_origin.y;
    z = vec3_origin.z;
    p_m_vecLandmarkOrigin[-3].y = vec3_origin.x;
    p_m_vecLandmarkOrigin[-3].z = y;
    p_m_vecLandmarkOrigin[-2].x = z;
    *(&p_m_hEntLandmark[-2].m_Index + v6) = -1;
  }
  while ( v2 != 16 );
  this->m_levelInfo.m_bUseLandmark = 0;
  v14 = z;
  v15 = y;
  v17 = x;
  CUtlString::Clear(&this->m_levelInfo.m_sLandmarkName);
  this->m_levelInfo.m_flSaveTime = 0.0;
  this->m_levelInfo.m_nSaveTick = 0;
  this->m_levelInfo.m_vecLandmarkOffset.x = v17;
  this->m_levelInfo.m_vecLandmarkOffset.y = v15;
  this->m_levelInfo.m_vecLandmarkOffset.z = v14;
  CUtlString::Clear(&this->m_levelInfo.m_sCurrentMapName);
  v9 = (this->m_EntityTable.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_levelInfo.m_nMapVersion = 0;
  this->m_modelSpaceOffset.x = 0.0;
  this->m_modelSpaceOffset.y = 0.0;
  this->m_modelSpaceOffset.z = 0.0;
  this->m_EntityTable.m_Size = 0;
  if ( v9 )
    CUtlMemory<entitytable_t,int>::Purge(&this->m_EntityTable.m_Memory);
  m_Size = this->m_EntityToIndex.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v11 = 0;
    v12 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v13 = &this->m_EntityToIndex.m_Buckets.m_Memory.m_pMemory[v11 / 0x18];
      v9 = (v13->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v13->m_Size = 0;
      if ( v9 )
        CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>::Purge(&v13->m_Memory);
      v11 += 24LL;
    }
    while ( v11 != v12 );
  }
  CCompressedResourceManifest::RemoveAll(&this->m_ResourceList);
}


// CGameSaveRestoreInfo::InitEntityTable  (line 20, @0x0000000002f49b80, libserver.so)  // inlines: AddMultipleToTail, CEntityHandle, CEntityIndex, CUtlSymbolLarge, Clear, Construct<entitytable_t>, EnsureCount, GrowMemory, GrowVector, Init, InsertMultipleBefore, entitytable_t, operator=, operator[]
// calls: CUtlMemory<entitytable_t, int>::Grow
// callers: CEntitySaveRestoreBlockHandler::ReadRestoreHeaders, CEntitySaveRestoreBlockHandler::SaveInitEntities
void __fastcall CGameSaveRestoreInfo::InitEntityTable(CGameSaveRestoreInfo *const this, int nEntityCount)
{
  int m_Size; // r12d
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  char *v9; // rax
  int v10; // r14d
  int m_nAllocationCount; // eax
  int v12; // ecx
  __int64 v13; // rdx
  char *v14; // rax

  m_Size = this->m_EntityTable.m_Size;
  v5 = m_Size;
  if ( nEntityCount > m_Size )
  {
    v10 = nEntityCount - m_Size;
    if ( nEntityCount != m_Size )
    {
      m_nAllocationCount = this->m_EntityTable.m_Memory.m_nAllocationCount;
      if ( nEntityCount > m_nAllocationCount )
        CUtlMemory<entitytable_t,int>::Grow(&this->m_EntityTable.m_Memory, nEntityCount - m_nAllocationCount);
      v12 = 0;
      this->m_EntityTable.m_Size = nEntityCount;
      v13 = m_Size << 6;
      v5 = nEntityCount;
      if ( v10 > 0 )
      {
        do
        {
          v14 = this->m_EntityTable.m_Memory.m_pMemory + v13;
          if ( v14 != 0 )
          {
            *(v14 + 1) = -1;
            *(v14 + 2) = -1;
            *(v14 + 3) = -1;
            *(v14 + 4) = -1;
            *(v14 + 4) = 0;
            *(v14 + 5) = 0;
          }
          ++v12;
          v13 += 64;
        }
        while ( v10 > v12 );
        v5 = this->m_EntityTable.m_Size;
      }
    }
  }
  v6 = 0;
  v7 = 0;
  if ( v5 > 0 )
  {
    do
    {
      v8 = v6;
      ++v7;
      v6 += 64;
      v9 = this->m_EntityTable.m_Memory.m_pMemory + v8;
      *v9 = -1;
      *(v9 + 1) = -1;
      *(v9 + 2) = -1;
      *(v9 + 3) = -1;
      *(v9 + 5) = 0;
      *(v9 + 6) = 0;
      *(v9 + 7) = 0;
      *(v9 + 4) = 0;
      *(v9 + 5) = 0;
      *(v9 + 12) = 0;
      *(v9 + 13) = 0;
      *(v9 + 14) = 0;
    }
    while ( this->m_EntityTable.m_Size > v7 );
  }
}


// CGameSaveRestoreInfo::ShutdownEntityTable  (line 29, @0x0000000002f49120, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<entitytable_t, int>::Purge
// callers: CEntity2SaveRestore::Finish
void __fastcall CGameSaveRestoreInfo::ShutdownEntityTable(CGameSaveRestoreInfo *const this)
{
  bool v1; // zf

  v1 = (this->m_EntityTable.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_EntityTable.m_Size = 0;
  if ( v1 )
    CUtlMemory<entitytable_t,int>::Purge(&this->m_EntityTable.m_Memory);
}


// CGameSaveRestoreInfo::GetCurrentEntityContext  (line 34, @0x0000000002f49150, libserver.so)
// callers: CPhysObjSaveRestoreOps::Save, CPhysObjSaveRestoreOps::Restore
CEntityInstance *__fastcall CGameSaveRestoreInfo::GetCurrentEntityContext(CGameSaveRestoreInfo *const this)
{
  return this->m_pCurrentEntity;
}


// CGameSaveRestoreInfo::NumEntities  (line 39, @0x0000000002f49160, libserver.so)
// callers: CDecalSaveRestoreBlockHandler::Restore, CEntity2SaveRestore::EntityPatchWrite, CEntity2SaveRestore::BuildRestoredIndexTranslationTable, CEntity2SaveRestore::StreamEntitiesFromFile, CEntitySaveRestoreBlockHandler::ReadRestoreHeaders, CSave::EntityFlagsSet, CRestore::EntityFromIndex, CEntitySaveRestoreBlockHandler::SaveInitEntities, CEntitySaveRestoreBlockHandler::Restore, CreateEntitiesInTransitionList, CEntitySaveRestoreBlockHandler::Save, CEntitySaveRestoreBlockHandler::WriteSaveHeaders (14 total)
int __fastcall CGameSaveRestoreInfo::NumEntities(const CGameSaveRestoreInfo *const this)
{
  return this->m_EntityTable.m_Size;
}


// CGameSaveRestoreInfo::GetEntityInfo  (line 44, @0x0000000002f49170, libserver.so)  // inlines: operator[]
// callers: CEntity2SaveRestore::EntityPatchRead, CEntity2SaveRestore::EntityPatchWrite, CEntity2SaveRestore::StreamEntitiesFromFile, CEntitySaveRestoreBlockHandler::ReadRestoreHeaders, CSave::EntityFlagsSet, CRestore::EntityFromIndex, CEntitySaveRestoreBlockHandler::SaveEntityOnTable, CEntitySaveRestoreBlockHandler::Restore, CreateEntitiesInTransitionList, CEntitySaveRestoreBlockHandler::Save, CEntitySaveRestoreBlockHandler::WriteSaveHeaders, CreateEntityTransitionList
entitytable_t *__fastcall CGameSaveRestoreInfo::GetEntityInfo(CGameSaveRestoreInfo *const this, int i)
{
  return &this->m_EntityTable.m_Memory.m_pMemory[i];
}


// CGameSaveRestoreInfo::GetEntityInfo  (line 49, @0x0000000002f49190, libserver.so)  // inlines: operator[]
// callers: CDecalSaveRestoreBlockHandler::Restore, CEntity2SaveRestore::BuildRestoredIndexTranslationTable
const entitytable_t *__fastcall CGameSaveRestoreInfo::GetEntityInfo(const CGameSaveRestoreInfo *const this, int i)
{
  return &this->m_EntityTable.m_Memory.m_pMemory[i];
}


// CGameSaveRestoreInfo::GetBaseTime  (line 54, @0x0000000002f491b0, libserver.so)
// callers: CSave::WriteTime, CRestore::ReadTime
float __fastcall CGameSaveRestoreInfo::GetBaseTime(const CGameSaveRestoreInfo *const this)
{
  return this->m_levelInfo.m_flSaveTime;
}


// CGameSaveRestoreInfo::GetBaseTick  (line 59, @0x0000000002f491c0, libserver.so)
// callers: CSave::WriteTick, CRestore::ReadTick
int __fastcall CGameSaveRestoreInfo::GetBaseTick(const CGameSaveRestoreInfo *const this)
{
  return this->m_levelInfo.m_nSaveTick;
}


// CGameSaveRestoreInfo::GetLandmark  (line 64, @0x0000000002f491d0, libserver.so)
// callers: CRestore::ReadPositionVector, CSave::WritePositionVector, CSave::WriteVMatrixWorldspace, CSave::WriteMatrix3x4Worldspace, CRestore::ReadVMatrixWorldspace, CRestore::ReadMatrix3x4Worldspace, CRestore::ReadNetworkOriginCellQuantizedVector, CSave::WriteNetworkOriginCellQuantizedVector
const Vector *__fastcall CGameSaveRestoreInfo::GetLandmark(const CGameSaveRestoreInfo *const this)
{
  const Vector *result; // rax

  result = &this->m_levelInfo.m_vecLandmarkOffset;
  if ( !this->m_levelInfo.m_bUseLandmark )
    return &vec3_origin;
  return result;
}


// CGameSaveRestoreInfo::AddResourceToSaveManifest  (line 69, @0x0000000002f49200, libserver.so)
// calls: CCompressedResourceManifest::FindResourceIndex, LoggingSystem_IsChannelEnabled, CCompressedResourceManifest::AddResource, LoggingSystem_Log
// callers: CEntity2SaveRestore::StreamEntitiesToFile, CSave::WriteSingleField
// strings: "SV", "%s:  adding resource to save: '%s'\n"
// globals: LOG_SAVERESTORE
int __fastcall CGameSaveRestoreInfo::AddResourceToSaveManifest(
        CGameSaveRestoreInfo *const this,
        const char *pResourceName)
{
  CCompressedResourceManifest *p_m_ResourceList; // r12
  int result; // eax

  p_m_ResourceList = &this->m_ResourceList;
  result = CCompressedResourceManifest::FindResourceIndex(&this->m_ResourceList, pResourceName);
  if ( result == -1 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
      LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  adding resource to save: '%s'\n", "SV", pResourceName);
    return CCompressedResourceManifest::AddResource(p_m_ResourceList, pResourceName);
  }
  return result;
}


// CGameSaveRestoreInfo::LookupResourceFromSaveManifest  (line 85, @0x0000000002f49280, libserver.so)
// calls: CCompressedResourceManifest::GetResource
// callers: CRestore::ReadSingleField
const char *__fastcall CGameSaveRestoreInfo::LookupResourceFromSaveManifest(
        const CGameSaveRestoreInfo *const this,
        int lookup)
{
  return CCompressedResourceManifest::GetResource(&this->m_ResourceList, lookup);
}


// CGameSaveRestoreInfo::GetResourceList  (line 90, @0x0000000002f492a0, libserver.so)
// callers: CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CEntity2SaveRestore::WriteResourceList, CEntity2SaveRestore::StreamEntitiesToFile
const CCompressedResourceManifest *__fastcall CGameSaveRestoreInfo::GetResourceList(
        const CGameSaveRestoreInfo *const this)
{
  return &this->m_ResourceList;
}


// CGameSaveRestoreInfo::GetResourceListForWrite  (line 95, @0x0000000002f492b0, libserver.so)
// callers: CEntity2SaveRestore::LoadSaveData
CCompressedResourceManifest *__fastcall CGameSaveRestoreInfo::GetResourceListForWrite(CGameSaveRestoreInfo *const this)
{
  return &this->m_ResourceList;
}


// CGameSaveRestoreInfo::BuildEntityHash  (line 100, @0x0000000002f49cc0, libserver.so)  // inlines: AddToTail, CHashElement, Construct<CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs>, int>, CopyConstruct<CGameSaveRestoreInfo::CHashElement>, DoFind, Element, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, HashItem<const CEntityInstance*>, IndexToIdentity, Insert, IsValid, LookupEntity, operator CEntityInstance*, operator(), operator[]
// calls: CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs>::CUtlHash, MurmurHash2, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int>::Grow
// callers: CEntitySaveRestoreBlockHandler::SaveInitEntities
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGameSaveRestoreInfo::BuildEntityHash(CGameSaveRestoreInfo *const this)
{
  CUtlHash<CGameSaveRestoreInfo::CHashElement,CGameSaveRestoreInfo::CHashFuncs,CGameSaveRestoreInfo::CHashFuncs> *p_m_EntityToIndex; // rdi
  __int64 v3; // r15
  int i; // r14d
  CEntityInstance *m_pInstance; // rcx
  entitytable_t *v6; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v8; // si
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  uint32 v11; // eax
  unsigned int v12; // edx
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v13; // r8
  __int64 m_Size; // r12
  CGameSaveRestoreInfo::CHashElement *m_pMemory; // rdx
  CGameSaveRestoreInfo::CHashElement *v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // r12
  bool v20; // zf
  CGameSaveRestoreInfo::CHashElement *v21; // r12
  __int64 v22; // rdx
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v23; // [rsp+18h] [rbp-48h]
  const CEntityInstance *key; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h]

  p_m_EntityToIndex = &this->m_EntityToIndex;
  if ( p_m_EntityToIndex != 0 )
    CUtlHash<CGameSaveRestoreInfo::CHashElement,CGameSaveRestoreInfo::CHashFuncs,CGameSaveRestoreInfo::CHashFuncs>::CUtlHash(
      p_m_EntityToIndex,
      1024,
      0,
      0);
  if ( this->m_EntityTable.m_Size > 0 )
  {
    v3 = 0;
    for ( i = 0; this->m_EntityTable.m_Size > i; ++i )
    {
      m_pInstance = 0;
      v6 = &this->m_EntityTable.m_Memory.m_pMemory[v3];
      m_Index = v6->hEnt.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v8 = v6->hEnt.m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            m_pInstance = v10->m_pInstance;
        }
      }
      key = m_pInstance;
      LODWORD(v25) = i;
      v11 = MurmurHash2(&key, 8, 0x3501A674u);
      if ( this->m_EntityToIndex.m_bPowerOfTwo )
        v12 = this->m_EntityToIndex.m_ModMask & v11;
      else
        v12 = v11 % this->m_EntityToIndex.m_Buckets.m_Size;
      v13 = &this->m_EntityToIndex.m_Buckets.m_Memory.m_pMemory[v12];
      m_Size = v13->m_Size;
      if ( m_Size <= 0 )
      {
        if ( m_Size == 0 )
          goto LABEL_17;
      }
      else
      {
        m_pMemory = v13->m_Memory.m_pMemory;
        if ( m_pMemory->pEntity != key )
        {
          v16 = m_pMemory + 1;
          v17 = 0;
          while ( ++v17 != m_Size )
          {
            ++v16;
            if ( key == v16[-1].pEntity )
              goto LABEL_21;
          }
LABEL_17:
          if ( m_Size == v13->m_Memory.m_nAllocationCount )
          {
            v23 = v13;
            CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>::Grow(&v13->m_Memory, 1);
            v13 = v23;
            v18 = v23->m_Size;
          }
          else
          {
            v18 = v13->m_Size;
          }
          v19 = m_Size;
          v20 = &v13->m_Memory.m_pMemory[v19] == 0;
          v21 = &v13->m_Memory.m_pMemory[v19];
          v13->m_Size = v18 + 1;
          if ( !v20 )
          {
            v22 = v25;
            v21->pEntity = key;
            *&v21->index = v22;
          }
        }
      }
LABEL_21:
      ++v3;
    }
  }
}


// CGameSaveRestoreInfo::PurgeEntityHash  (line 115, @0x0000000002f49a80, libserver.so)  // inlines: Destruct<CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs> >, Purge, RemoveAll, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CGameSaveRestoreInfo::CHashElement, int>::Purge, CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int>::Purge
// callers: CEntity2SaveRestore::Finish
void __fastcall CGameSaveRestoreInfo::PurgeEntityHash(CGameSaveRestoreInfo *const this)
{
  CGameSaveRestoreInfo::CEntityToIndexHash *p_m_EntityToIndex; // r12
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v6; // rax
  bool v7; // zf
  int v8; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v11; // rax

  p_m_EntityToIndex = &this->m_EntityToIndex;
  m_Size = this->m_EntityToIndex.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v6 = &this->m_EntityToIndex.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
      v7 = (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v6->m_Size = 0;
      if ( v7 )
        CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>::Purge(&v6->m_Memory);
      v4 += 24LL;
    }
    while ( v4 != v5 );
    v8 = this->m_EntityToIndex.m_Buckets.m_Size;
    if ( v8 > 0 )
    {
      v9 = 0;
      v10 = 8 * (3LL * (v8 - 1) + 3);
      do
      {
        v11 = &this->m_EntityToIndex.m_Buckets.m_Memory.m_pMemory[v9 / 0x18];
        v7 = (v11->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v11->m_Size = 0;
        if ( v7 )
          CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>::Purge(&v11->m_Memory);
        v9 += 24LL;
      }
      while ( v9 != v10 );
    }
  }
  CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>>::RemoveAll(&p_m_EntityToIndex->m_Buckets);
  if ( (this->m_EntityToIndex.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>::Purge(&this->m_EntityToIndex.m_Buckets.m_Memory);
    if ( (this->m_EntityToIndex.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>::Purge(&this->m_EntityToIndex.m_Buckets.m_Memory);
  }
}


// CGameSaveRestoreInfo::GetEntityIndex  (line 121, @0x0000000002f492c0, libserver.so)  // inlines: BuildHandle, CHashElement, Count, DoFind, Element, Find, GetBucketIndex, GetEntityIdentity, GetEntryIndex, HashItem<const CEntityInstance*>, IndexToIdentity, IsValid, LookupEntity, operator(), operator==, operator[]
// calls: MurmurHash2
// callers: CSave::WriteEntityPtr, CSave::WriteEHandle, CSave::EntityIndex
// globals: CEntityHandle::gm_pEntityList
int __fastcall CGameSaveRestoreInfo::GetEntityIndex(CGameSaveRestoreInfo *const this, const CEntityInstance *pEntity)
{
  int m_Size; // edx
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *m_pMemory; // rcx
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v5; // rax
  __int64 v6; // r8
  int v7; // edx
  int v8; // eax
  entitytable_t *v9; // r10
  entitytable_t *v10; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  uint32 v15; // eax
  signed int v16; // edx
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v17; // r9
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v18; // rcx
  int v19; // edi
  const CEntityInstance **p_pEntity; // rsi
  _QWORD *v21; // rsi
  int v22; // ecx
  const CEntityInstance *v23; // [rsp-28h] [rbp-28h] BYREF

  if ( pEntity == 0 )
    return -1;
  m_Size = this->m_EntityToIndex.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_EntityToIndex.m_Buckets.m_Memory.m_pMemory;
    v5 = m_pMemory + 1;
    v6 = &m_pMemory[(m_Size - 1) + 1];
    v7 = 0;
    while ( 1 )
    {
      v7 += m_pMemory->m_Size;
      m_pMemory = v5;
      if ( v5 == v6 )
        break;
      ++v5;
    }
    if ( v7 != 0 )
    {
      v23 = pEntity;
      v15 = MurmurHash2(&v23, 8, 0x3501A674u);
      if ( this->m_EntityToIndex.m_bPowerOfTwo )
        v16 = this->m_EntityToIndex.m_ModMask & v15;
      else
        v16 = v15 % this->m_EntityToIndex.m_Buckets.m_Size;
      v17 = this->m_EntityToIndex.m_Buckets.m_Memory.m_pMemory;
      v18 = &v17[v16];
      v19 = v18->m_Size;
      if ( v18->m_Size <= 0 )
      {
        if ( v19 == 0 )
          return -1;
      }
      else
      {
        p_pEntity = &v18->m_Memory.m_pMemory->pEntity;
        if ( *p_pEntity != v23 )
        {
          v21 = p_pEntity + 2;
          v22 = 0;
          while ( ++v22 != v19 )
          {
            v21 += 2;
            if ( *(v21 - 2) == v23 )
              goto LABEL_27;
          }
          return -1;
        }
      }
      v22 = 0;
LABEL_27:
      if ( (v22 | (v16 << 16)) != 0xFFFFFFFF )
        return v17[(v22 | (v16 << 16)) >> 16].m_Memory.m_pMemory[v22].index;
      return -1;
    }
  }
  v8 = this->m_EntityTable.m_Size;
  if ( v8 <= 0 )
    return -1;
  v9 = &this->m_EntityTable.m_Memory.m_pMemory[(v8 - 1) + 1];
  v10 = this->m_EntityTable.m_Memory.m_pMemory;
  while ( 1 )
  {
    m_Index = v10->hEnt.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->hEnt.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[v10->hEnt.m_Index & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index && pEntity == v13->m_pInstance )
          break;
      }
    }
    if ( ++v10 == v9 )
      return -1;
  }
  return v10->id;
}


// CGameSaveRestoreInfo::SetCurrentEntityContext  (line 146, @0x0000000002f49480, libserver.so)
// callers: CEntitySaveRestoreBlockHandler::DoRestoreEntity, CEntitySaveRestoreBlockHandler::Save
void __fastcall CGameSaveRestoreInfo::SetCurrentEntityContext(
        CGameSaveRestoreInfo *const this,
        CEntityInstance *pEntity)
{
  this->m_pCurrentEntity = pEntity;
}


// CGameSaveRestoreInfo::EntryInTableBitMask  (line 152, @0x0000000002f49490, libserver.so)  // inlines: operator==
// calls: CUtlString::IsEqual_CaseSensitive
// callers: CEntity2SaveRestore::LoadAdjacentEnts
int __fastcall CGameSaveRestoreInfo::EntryInTableBitMask(const CGameSaveRestoreInfo *const this, const char *pMapName)
{
  int v4; // ebx
  int v5; // r13d
  levellist_t *m_levelList; // r15

  if ( this->m_levelInfo.m_nConnectionCount <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  m_levelList = this->m_levelInfo.m_levelList;
  do
  {
    if ( CUtlString::IsEqual_CaseSensitive(&m_levelList->m_sMapName, pMapName) )
      v5 |= 1 << v4;
    ++v4;
    ++m_levelList;
  }
  while ( this->m_levelInfo.m_nConnectionCount > v4 );
  return v5;
}


// CGameSaveRestoreInfo::LandmarkOrigin  (line 166, @0x0000000002f49500, libserver.so)  // inlines: operator==
// calls: CUtlString::IsEqual_CaseSensitive
// callers: CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::LoadAdjacentEnts
Vector __fastcall CGameSaveRestoreInfo::LandmarkOrigin(
        const CGameSaveRestoreInfo *const this,
        const char *pLandmarkName)
{
  int v4; // r12d
  levellist_t *m_levelList; // rbx
  vec_t v6; // eax
  __int64 v9; // [rsp+10h] [rbp-30h]
  vec_t z; // [rsp+18h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v4 = 0;
  m_levelList = this->m_levelInfo.m_levelList;
  if ( this->m_levelInfo.m_nConnectionCount > 0 )
  {
    while ( !CUtlString::IsEqual_CaseSensitive(&m_levelList->m_sLandmarkName, pLandmarkName) )
    {
      ++v4;
      ++m_levelList;
      if ( this->m_levelInfo.m_nConnectionCount <= v4 )
        goto LABEL_6;
    }
    v9 = *&m_levelList->m_vecLandmarkOrigin.x;
    z = m_levelList->m_vecLandmarkOrigin.z;
  }
  else
  {
LABEL_6:
    v6 = vec3_origin.z;
    v9 = *&vec3_origin.x;
    z = v6;
  }
  *&result.x = v9;
  result.z = z;
  return result;
}


// CGameSaveRestoreInfo::SetAdjacent  (line 181, @0x0000000002f49590, libserver.so)
// callers: CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::LoadAdjacentEnts
void __fastcall CGameSaveRestoreInfo::SetAdjacent(CGameSaveRestoreInfo *const this, bool bAdjacent)
{
  this->m_bAdjacent = bAdjacent;
}


// CGameSaveRestoreInfo::IsAdjacent  (line 186, @0x0000000002f495a0, libserver.so)
bool __fastcall CGameSaveRestoreInfo::IsAdjacent(const CGameSaveRestoreInfo *const this)
{
  return this->m_bAdjacent;
}


