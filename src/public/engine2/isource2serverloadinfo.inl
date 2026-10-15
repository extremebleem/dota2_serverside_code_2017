
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCreateGameServerLoadInfo::~CCreateGameServerLoadInfo  (line 14, @0x0000000001f84390, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
void __fastcall CCreateGameServerLoadInfo::~CCreateGameServerLoadInfo(CCreateGameServerLoadInfo *const this)
{
  if ( this->m_SpawnGroupSaveFileName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupSaveFileName);
  if ( this->m_SpawnGroupFilterName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupFilterName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


