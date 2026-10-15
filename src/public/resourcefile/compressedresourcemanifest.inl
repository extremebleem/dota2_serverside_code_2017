
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCompressedResourceManifest::~CCompressedResourceManifest  (line 18, @0x0000000002f4a320, libserver.so)  // inlines: Destruct<CCompressedResourceManifest::CompressedResourceName_t>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~CompressedResourceName_t
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int>::Purge
// callers: CGameSaveRestoreInfo::CGameSaveRestoreInfo
void __fastcall CCompressedResourceManifest::~CCompressedResourceManifest(CCompressedResourceManifest *const this)
{
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v4; // rax
  bool v5; // zf

  CUtlSymbolTable::~CUtlSymbolTable(&this->m_extensions);
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_paths);
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_resources.m_SymbolTable);
  m_Size = this->m_resources.m_Vector.m_Size;
  for ( i = 24LL * this->m_resources.m_Vector.m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v4 = (this->m_resources.m_Vector.m_Memory.m_pMemory + i);
    if ( v4[1].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v4 + 1);
  }
  v5 = (this->m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_resources.m_Vector.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Purge(&this->m_resources.m_Vector.m_Memory);
    if ( (this->m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Purge(&this->m_resources.m_Vector.m_Memory);
  }
}


