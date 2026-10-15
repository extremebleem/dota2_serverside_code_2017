
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder  (line 687, @0x0000000001b511f0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<char*, int>::Purge
void __fastcall CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder(CDatadescGeneratedNameHolder *const this)
{
  __int64 v2; // r12
  int i; // ebx
  char *v4; // rdi
  bool v5; // zf

  v2 = 0;
  for ( i = 0; this->m_Names.m_Size > i; ++i )
  {
    v4 = this->m_Names.m_Memory.m_pMemory[v2++];
    operator delete(v4);
  }
  v5 = (this->m_Names.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Names.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Names.m_Memory);
    if ( (this->m_Names.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Names.m_Memory);
  }
}


