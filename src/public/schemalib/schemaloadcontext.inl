
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaLoadContext::~CSchemaLoadContext  (line 148, @0x00000000031d24f0, libserver.so)  // inlines: FreeMemory, Purge, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<bool, int>::Purge, CUtlMemory<const CSchemaType*, int>::Purge, CUtlMemory<void*, int>::Purge
// callers: GetVsSignatureFromResourceHeader
void __fastcall CSchemaLoadContext::~CSchemaLoadContext(CSchemaLoadContext *const this)
{
  __int64 v2; // rax
  bool v3; // zf

  v2 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
  (*(*v2 + 168LL))(v2, this);
  if ( this->m_ErrorMessage.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_ErrorMessage);
  v3 = (this->m_ObjectOwnedByContext.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ObjectOwnedByContext.m_Size = 0;
  if ( !v3
    || (CUtlMemory<bool,int>::Purge(&this->m_ObjectOwnedByContext.m_Memory),
        (this->m_ObjectOwnedByContext.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v3 = (this->m_ObjectTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ObjectTypes.m_Size = 0;
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    CUtlMemory<bool,int>::Purge(&this->m_ObjectOwnedByContext.m_Memory);
    v3 = (this->m_ObjectTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ObjectTypes.m_Size = 0;
    if ( !v3 )
      goto LABEL_5;
  }
  CUtlMemory<CSchemaType const*,int>::Purge(&this->m_ObjectTypes.m_Memory);
  if ( (this->m_ObjectTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSchemaType const*,int>::Purge(&this->m_ObjectTypes.m_Memory);
    v3 = (this->m_Objects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Objects.m_Size = 0;
    if ( !v3 )
      return;
    goto LABEL_11;
  }
LABEL_5:
  v3 = (this->m_Objects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Objects.m_Size = 0;
  if ( !v3 )
    return;
LABEL_11:
  CUtlMemory<void *,int>::Purge(&this->m_Objects.m_Memory);
  if ( (this->m_Objects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<void *,int>::Purge(&this->m_Objects.m_Memory);
}


