
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResourceReferenceFixupTraversal::~CResourceReferenceFixupTraversal  (line 55, @0x000000000326ad10, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CExtrefTraversal, ~CResourceRefTable, ~CSchemaFieldVisitor, ~CSchemaVisitorBase, ~CUtlHashtable, ~CUtlMemory, ~CUtlScalarHash
// calls: operator delete []
// callers: CIntrospectedResourceDataHandler::FixupExternalReferences
void __fastcall CResourceReferenceFixupTraversal::~CResourceReferenceFixupTraversal(
        CResourceReferenceFixupTraversal *const this)
{
  int m_nUsed; // ecx
  int v3; // edx
  CUtlHashtableEntry<ResourceId_t,char const*> *v4; // rax
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *m_pData; // rdi

  m_nUsed = this->m_RefTable.m_ExtrefLookup.m_nUsed;
  this->_vptr_CSchemaVisitorBase = &off_47D1350;
  if ( m_nUsed != 0 )
  {
    v3 = this->m_RefTable.m_ExtrefLookup.m_table.m_nAllocationCount - 1;
    if ( v3 >= 0 )
    {
      v4 = &this->m_RefTable.m_ExtrefLookup.m_table.m_pMemory[v3];
      do
      {
        if ( v4->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v4->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v3;
        --v4;
      }
      while ( v3 != -1 );
    }
    this->m_RefTable.m_ExtrefLookup.m_nUsed = 0;
  }
  if ( (this->m_RefTable.m_ExtrefLookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_RefTable.m_ExtrefLookup.m_table.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_RefTable.m_ExtrefLookup.m_table.m_pMemory = 0;
    }
    this->m_RefTable.m_ExtrefLookup.m_table.m_nAllocationCount = 0;
  }
  m_pData = this->m_VisitedClasses.m_pData;
  this->_vptr_CSchemaVisitorBase = &off_47D1170;
  if ( m_pData != 0 )
    operator delete[](m_pData);
}


