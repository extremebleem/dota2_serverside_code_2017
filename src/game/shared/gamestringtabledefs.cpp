// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamestringtabledefs.cpp:15
class CGameNetworkStringTables : public IGameNetworkStringTables {
public:

private:

	bool m_bInitialized;  // +0x20
	CGameNetworkStringTables(CGameNetworkStringTables &);
	CGameNetworkStringTables(const CGameNetworkStringTables &);
	CGameNetworkStringTables();
	virtual bool InitStringTableDefinitions();
	virtual void ClearStringTablePointers();
	virtual void SV_CreateNetworkStringTables();
	virtual bool CL_InstallStringTableCallback(const char *);
	~CGameNetworkStringTables();

	// vtable[0] InitStringTableDefinitions
	// vtable[1] ClearStringTablePointers
	// vtable[2] SV_CreateNetworkStringTables
	// vtable[3] CL_InstallStringTableCallback
	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameNetworkStringTables::~CGameNetworkStringTables  (line 15, @0x00000000020fbc20, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<StringTableDef_t, int>::Purge
void __fastcall CGameNetworkStringTables::~CGameNetworkStringTables(CGameNetworkStringTables *const this)
{
  bool v2; // zf
  CUtlVectorBase<StringTableDef_t,CUtlMemory<StringTableDef_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_StringTableDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameNetworkStringTables = off_3FF7B30;
  this->m_StringTableDefs.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_StringTableDefs.m_Memory;
    CUtlMemory<StringTableDef_t,int>::Purge(&this->m_StringTableDefs.m_Memory);
    if ( (this->m_StringTableDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<StringTableDef_t,int>::Purge(p_m_Memory);
  }
}


// CGameNetworkStringTables::InitStringTableDefinitions  (line 37, @0x00000000020de4f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<StringTableDef_t, CUtlMemory<StringTableDef_t, int> >::SetCount, memcpy, CUtlMemory<StringTableDef_t, int>::Purge, _Unwind_Resume
bool __fastcall CGameNetworkStringTables::InitStringTableDefinitions(CGameNetworkStringTables *const this)
{
  int m_Size; // ebx
  StringTableDef_t *m_pMemory; // r14
  __int64 v4; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  StringTableDef_t *v7; // rsi
  StringTableDef_t *v8; // rdi
  CUtlVector<StringTableDef_t,CUtlMemory<StringTableDef_t,int> > tables; // [rsp+0h] [rbp-50h] BYREF

  this->m_bInitialized = 1;
  tables.m_Size = 0;
  tables.m_Memory.m_pMemory = 0;
  tables.m_Memory.m_nAllocationCount = 0;
  tables.m_Memory.m_nGrowSize = 0;
  (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 29))(g_pGameConfiguration, &tables);
  m_Size = tables.m_Size;
  m_pMemory = tables.m_Memory.m_pMemory;
  CUtlVectorBase<StringTableDef_t,CUtlMemory<StringTableDef_t,int>>::SetCount(&this->m_StringTableDefs, tables.m_Size);
  if ( m_Size > 0 )
  {
    v4 = 11 * ((m_Size - 1) + 1LL);
    v5 = 0;
    v6 = 16 * v4;
    do
    {
      v7 = &m_pMemory[v5 / 0xB0];
      v8 = &this->m_StringTableDefs.m_Memory.m_pMemory[v5 / 0xB0];
      v5 += 176LL;
      memcpy(v8, v7, sizeof(StringTableDef_t));
    }
    while ( v5 != v6 );
  }
  tables.m_Size = 0;
  if ( (tables.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<StringTableDef_t,int>::Purge(&tables.m_Memory);
    if ( (tables.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<StringTableDef_t,int>::Purge(&tables.m_Memory);
  }
  return 1;
}


// CGameNetworkStringTables::SV_CreateNetworkStringTables  (line 50, @0x000000000209f190, libserver.so)  // inlines: operator[]
void __fastcall CGameNetworkStringTables::SV_CreateNetworkStringTables(CGameNetworkStringTables *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  StringTableDef_t *v4; // rbx
  __int64 v5; // rax
  _QWORD *m_ppStringTablePointer; // rdx
  void (__fastcall *m_pfnPostCreateOrHook)(StringTableDef_t *, __int64); // rdx

  if ( this->m_StringTableDefs.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = &this->m_StringTableDefs.m_Memory.m_pMemory[v2];
      v5 = (*(g_pNetworkStringTable->_vptr_IAppSystem + 13))(
             g_pNetworkStringTable,
             v4,
             v4->m_nUserDataFixedSize,
             v4->m_nUserDataNetworkBits,
             v4->m_nFlags);
      m_ppStringTablePointer = v4->m_ppStringTablePointer;
      if ( m_ppStringTablePointer != 0 )
        *m_ppStringTablePointer = v5;
      m_pfnPostCreateOrHook = v4->m_pfnPostCreateOrHook;
      if ( m_pfnPostCreateOrHook != 0 )
        m_pfnPostCreateOrHook(v4, v5);
      ++v3;
      ++v2;
    }
    while ( this->m_StringTableDefs.m_Size > v3 );
  }
}


// CGameNetworkStringTables::CL_InstallStringTableCallback  (line 82, @0x000000000209c5f0, libserver.so)
bool __fastcall CGameNetworkStringTables::CL_InstallStringTableCallback(
        CGameNetworkStringTables *const this,
        const char *tableName)
{
  return 0;
}


// CGameNetworkStringTables::ClearStringTablePointers  (line 121, @0x000000000209f150, libserver.so)
void __fastcall CGameNetworkStringTables::ClearStringTablePointers(CGameNetworkStringTables *const this)
{
  __int64 v1; // rdx
  int i; // eax
  INetworkStringTable **m_ppStringTablePointer; // rcx

  v1 = 0;
  for ( i = 0; this->m_StringTableDefs.m_Size > i; ++v1 )
  {
    m_ppStringTablePointer = this->m_StringTableDefs.m_Memory.m_pMemory[v1].m_ppStringTablePointer;
    if ( m_ppStringTablePointer != 0 )
      *m_ppStringTablePointer = 0;
    ++i;
  }
}


