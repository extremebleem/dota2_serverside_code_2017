
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SaveStreamInfo_t::~SaveStreamInfo_t  (line 35, @0x0000000001f89c90, libserver.so)  // inlines: Purge, ~CCreateGameServerLoadInfo, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<CEntityHandle, int>::Purge
// callers: CSpawnGroupMgrGameSystem::SpawnGroupSaveEntities, CSpawnGroupMgrGameSystem::StreamEntitiesToFile
void __fastcall SaveStreamInfo_t::~SaveStreamInfo_t(SaveStreamInfo_t *const this)
{
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&this->m_SpawnGroupResources);
  if ( (this->m_SpawnGroupResources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_SpawnGroupResources.m_Memory);
    if ( (this->m_SpawnGroupResources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_SpawnGroupResources.m_Memory);
  }
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&this->m_Entities);
  if ( (this->m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_Entities.m_Memory);
    if ( (this->m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&this->m_Entities.m_Memory);
  }
  if ( this->m_SpawnGroup.m_SpawnGroupSaveFileName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroup.m_SpawnGroupSaveFileName);
  if ( this->m_SpawnGroup.m_SpawnGroupFilterName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroup.m_SpawnGroupFilterName);
  if ( this->m_SpawnGroup.m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroup.m_SpawnGroupName);
}


// SaveGameInfo_t::~SaveGameInfo_t  (line 45, @0x0000000001f843e0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSpawnGroupMgrGameSystem::SaveGame_Start, CEntity2SaveRestore::CEntity2SaveRestore
void __fastcall SaveGameInfo_t::~SaveGameInfo_t(SaveGameInfo_t *const this)
{
  if ( this->m_sLandmarkName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sLandmarkName);
  if ( this->m_sOldLevel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sOldLevel);
  if ( this->m_sSaveComment.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sSaveComment);
  if ( this->m_sSaveName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sSaveName);
}


// CSave::WriteAll  (line 174, @0x000000000210be80, libserver.so)
// calls: CSave::DoWriteAll
int __fastcall CSave::WriteAll(CSave *const this, const void *pLeafObject, datamap_t *pLeafMap)
{
  return CSave::DoWriteAll(this, pLeafObject, pLeafMap, pLeafMap);
}


// CSave::GetGameSaveRestoreInfo  (line 267, @0x00000000020f1380, libserver.so)
CGameSaveRestoreInfo *__fastcall CSave::GetGameSaveRestoreInfo(CSave *const this)
{
  return this->m_pGameInfo;
}


// CSaveFlushScope::~CSaveFlushScope  (line 358, @0x0000000002094c70, libserver.so)  // inlines: Release, operator char const*, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CUtlString::Get
// callers: CEntity2SaveRestore::SaveGameStateGlobals, CEntitySaveRestoreBlockHandler::Save, CEntitySaveRestoreBlockHandler::WriteSaveHeaders, CSaveRestoreBlockSet::Save, CSaveRestoreBlockSet::WriteSaveHeaders
void __fastcall CSaveFlushScope::~CSaveFlushScope(CSaveFlushScope *const this)
{
  CUtlString *p_m_sScopeName; // r12
  CSave *m_pSave; // rax
  int m_nFlushScopeDepth; // ecx
  void (__fastcall *v5)(CSave *, const char *); // r13
  const char *v6; // rax

  p_m_sScopeName = &this->m_sScopeName;
  m_pSave = this->m_pSave;
  if ( this->m_pSave != 0 )
  {
    m_nFlushScopeDepth = m_pSave->m_nFlushScopeDepth;
    p_m_sScopeName = &this->m_sScopeName;
    m_pSave->m_nFlushScopeDepth = m_nFlushScopeDepth - 1;
    if ( m_nFlushScopeDepth == 1 )
    {
      p_m_sScopeName = &this->m_sScopeName;
      v5 = *(this->m_pSave->_vptr_ISave + 74);
      v6 = CUtlString::Get(&this->m_sScopeName);
      v5(this->m_pSave, v6);
    }
    this->m_pSave = 0;
  }
  if ( this->m_sScopeName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_sScopeName);
}


// CRestore::~CRestore  (line 389, @0x00000000020fc6a0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRestore
// calls: CUtlMemory<int, int>::Purge
void __fastcall CRestore::~CRestore(CRestore *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IRestore = &off_3FF5F30;
  this->m_BlockEndStack.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_BlockEndStack.m_Memory,
        CUtlMemory<int,int>::Purge(&this->m_BlockEndStack.m_Memory),
        (this->m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IRestore = &off_3FEC5D0;
  }
  else
  {
    CUtlMemory<int,int>::Purge(p_m_Memory);
    this->_vptr_IRestore = &off_3FEC5D0;
  }
}


// CRestore::~CRestore  (line 389, @0x00000000020fc710, libserver.so)  // inlines: Purge, RemoveAll, ~CRestore, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRestore
// calls: operator delete, CUtlMemory<int, int>::Purge
void __fastcall CRestore::~CRestore(CRestore *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IRestore = &off_3FF5F30;
  this->m_BlockEndStack.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_BlockEndStack.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_BlockEndStack.m_Memory);
    if ( (this->m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->_vptr_IRestore = &off_3FEC5D0;
  operator delete(this);
}


// CRestore::ReadAll  (line 401, @0x000000000210be90, libserver.so)
// calls: CRestore::DoReadAll
int __fastcall CRestore::ReadAll(CRestore *const this, void *pLeafObject, datamap_t *pLeafMap)
{
  return CRestore::DoReadAll(this, pLeafObject, pLeafMap, pLeafMap);
}


// CRestore::SkipHeader  (line 420, @0x00000000020f1390, libserver.so)
int __fastcall CRestore::SkipHeader(CRestore *const this)
{
  SaveRestoreRecordHeader_t header; // [rsp+0h] [rbp-10h] BYREF

  (*(this->_vptr_IRestore + 9))(this, &header);
  return header.size;
}


// CRestore::GetPrecacheMode  (line 476, @0x00000000020f13b0, libserver.so)
bool __fastcall CRestore::GetPrecacheMode(CRestore *const this)
{
  return this->m_precache;
}


// CRestore::GetGameSaveRestoreInfo  (line 478, @0x00000000020f13c0, libserver.so)
CGameSaveRestoreInfo *__fastcall CRestore::GetGameSaveRestoreInfo(CRestore *const this)
{
  return this->m_pGameInfo;
}


