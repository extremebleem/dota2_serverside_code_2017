
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameResponseSystem::GetScriptFile  (line 32, @0x000000000208f820, libserver.so)  // inlines: String
// calls: CUtlString::Get
const char *__fastcall CGameResponseSystem::GetScriptFile(CGameResponseSystem *const this)
{
  return CUtlString::Get(&this->m_sScriptFile);
}


// CGameResponseSystem::PrecacheResponses  (line 37, @0x000000000208eb30, libserver.so)
void __fastcall CGameResponseSystem::PrecacheResponses(CGameResponseSystem *const this, bool bEnable)
{
  this->m_bPrecache = bEnable;
}


// CGameResponseSystem::~CGameResponseSystem  (line 62, @0x000000000208fe90, libserver.so)  // inlines: String, ~CUtlString
// calls: CUtlString::Get, CUtlString::FreeMemoryBlock, CResponseSystem::~CResponseSystem
void __fastcall CGameResponseSystem::~CGameResponseSystem(CGameResponseSystem *const this)
{
  CUtlString *p_m_sScriptFile; // r12
  void (__fastcall *v3)(IResponseRulesFileCache *, const char *); // r13
  const char *v4; // rax

  p_m_sScriptFile = &this->m_sScriptFile;
  this->_vptr_IResponseSystem = off_3FECDD0;
  this->_vptr_CRefCountServiceBase = off_3FECE18;
  v3 = *(*this->m_pCache + 96LL);
  v4 = CUtlString::Get(&this->m_sScriptFile);
  v3(this->m_pCache, v4);
  if ( this->m_sScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_sScriptFile);
  CResponseSystem::~CResponseSystem(this);
}


// CGameResponseSystem::~CGameResponseSystem  (line 62, @0x0000000002092b80, libserver.so)  // inlines: String, ~CGameResponseSystem, ~CUtlString
// calls: CUtlString::Get, CUtlString::FreeMemoryBlock, CResponseSystem::~CResponseSystem, operator delete
void __fastcall CGameResponseSystem::~CGameResponseSystem(CGameResponseSystem *const this)
{
  CUtlString *p_m_sScriptFile; // r12
  void (__fastcall *v3)(IResponseRulesFileCache *, const char *); // r13
  const char *v4; // rax

  p_m_sScriptFile = &this->m_sScriptFile;
  this->_vptr_IResponseSystem = off_3FECDD0;
  this->_vptr_CRefCountServiceBase = off_3FECE18;
  v3 = *(*this->m_pCache + 96LL);
  v4 = CUtlString::Get(&this->m_sScriptFile);
  v3(this->m_pCache, v4);
  if ( this->m_sScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_sScriptFile);
  CResponseSystem::~CResponseSystem(this);
  operator delete(this);
}


