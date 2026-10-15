
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// saverestorelevelinfo_t::~saverestorelevelinfo_t  (line 165, @0x0000000002f4a280, libserver.so)  // inlines: ~CUtlString, ~levellist_t
// calls: CUtlString::FreeMemoryBlock
// callers: CGameSaveRestoreInfo::CGameSaveRestoreInfo
void __fastcall saverestorelevelinfo_t::~saverestorelevelinfo_t(saverestorelevelinfo_t *const this)
{
  bool *p_m_bUseLandmark; // r12
  CUtlString *p_m_sLandmarkName; // r14
  CUtlString *v4; // rbx
  levellist_t *v5; // r13
  levellist_t *m_levelList; // [rsp+8h] [rbp-38h]

  if ( this->m_sCurrentMapName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sCurrentMapName);
  if ( this->m_sLandmarkName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sLandmarkName);
  p_m_bUseLandmark = &this->m_bUseLandmark;
  m_levelList = this->m_levelList;
  p_m_sLandmarkName = &this->m_levelList[15].m_sLandmarkName;
  v4 = &this->m_bUseLandmark;
  v5 = &this->m_levelList[15];
  do
  {
    v4 -= 4;
    if ( *(&p_m_sLandmarkName[4].m_pString + v4 - p_m_bUseLandmark) != 0 )
      CUtlString::FreeMemoryBlock(v4 + 1);
    if ( *(&v5[1].m_sMapName.m_pString + v4 - p_m_bUseLandmark) != 0 )
      CUtlString::FreeMemoryBlock(v4);
  }
  while ( m_levelList != v4 );
}


// CGameSaveRestoreInfo::~CGameSaveRestoreInfo  (line 200, @0x0000000002097bf0, libserver.so)  // inlines: Purge, RemoveAll, operator[], ~CCompressedResourceManifest, ~CUtlHash, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~levellist_t, ~saverestorelevelinfo_t
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int> >::RemoveAll, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int>::Purge, CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int>::Purge, CUtlMemory<entitytable_t, int>::Purge, CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int>::Purge
// callers: CEntity2SaveRestore::LoadAdjacentEnts
void __fastcall CGameSaveRestoreInfo::~CGameSaveRestoreInfo(CGameSaveRestoreInfo *const this)
{
  CCompressedResourceManifest *p_m_ResourceList; // rbx
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v6; // rax
  bool v7; // zf
  bool *p_m_bUseLandmark; // r13
  CUtlString *p_m_sLandmarkName; // r14
  CUtlString *v10; // rbx
  levellist_t *v11; // r12
  levellist_t *m_levelList; // [rsp+8h] [rbp-38h]

  p_m_ResourceList = &this->m_ResourceList;
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_ResourceList.m_extensions);
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_ResourceList.m_paths);
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_ResourceList.m_resources.m_SymbolTable);
  CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t,CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>>::RemoveAll(&p_m_ResourceList->m_resources.m_Vector);
  if ( (this->m_ResourceList.m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Purge(&this->m_ResourceList.m_resources.m_Vector.m_Memory);
    if ( (this->m_ResourceList.m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Purge(&this->m_ResourceList.m_resources.m_Vector.m_Memory);
  }
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
  }
  CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>>::RemoveAll(&this->m_EntityToIndex.m_Buckets);
  if ( (this->m_EntityToIndex.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>::Purge(&this->m_EntityToIndex.m_Buckets.m_Memory);
    if ( (this->m_EntityToIndex.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>::Purge(&this->m_EntityToIndex.m_Buckets.m_Memory);
  }
  v7 = (this->m_EntityTable.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_EntityTable.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<entitytable_t,int>::Purge(&this->m_EntityTable.m_Memory);
    if ( (this->m_EntityTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<entitytable_t,int>::Purge(&this->m_EntityTable.m_Memory);
  }
  if ( this->m_levelInfo.m_sCurrentMapName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_levelInfo.m_sCurrentMapName);
  if ( this->m_levelInfo.m_sLandmarkName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_levelInfo.m_sLandmarkName);
  p_m_bUseLandmark = &this->m_levelInfo.m_bUseLandmark;
  m_levelList = this->m_levelInfo.m_levelList;
  p_m_sLandmarkName = &this->m_levelInfo.m_levelList[15].m_sLandmarkName;
  v10 = &this->m_levelInfo.m_bUseLandmark;
  v11 = &this->m_levelInfo.m_levelList[15];
  do
  {
    v10 -= 4;
    if ( *(&p_m_sLandmarkName[4].m_pString + v10 - p_m_bUseLandmark) != 0 )
      CUtlString::FreeMemoryBlock(v10 + 1);
    if ( *(&v11[1].m_sMapName.m_pString + v10 - p_m_bUseLandmark) != 0 )
      CUtlString::FreeMemoryBlock(v10);
  }
  while ( m_levelList != v10 );
}


