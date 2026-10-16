
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseNugget_Private::~CBaseNugget_Private  (line 47, @0x00000000020458c0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
void __fastcall CBaseNugget_Private::~CBaseNugget_Private(CBaseNugget_Private *const this)
{
  CUtlString *p_m_NuggetName; // rdi

  this->_vptr_CBaseNugget_Private = off_3FEA9F0;  // vptr: CBaseNugget_Private
  p_m_NuggetName = &this->m_NuggetName;
  if ( this->m_NuggetName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_NuggetName);
}


// CBaseNugget_Private::~CBaseNugget_Private  (line 47, @0x00000000020458f0, libserver.so)  // inlines: ~CBaseNugget_Private, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, operator delete
void __fastcall CBaseNugget_Private::~CBaseNugget_Private(CBaseNugget_Private *const this)
{
  CUtlString *p_m_NuggetName; // rdi

  p_m_NuggetName = &this->m_NuggetName;
  p_m_NuggetName[-1].m_pString = off_3FEA9F0;
  if ( this->m_NuggetName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_NuggetName);
  operator delete(this);
}


// CBaseNugget_Private::Validate  (line 52, @0x0000000002045150, libserver.so)
bool __fastcall CBaseNugget_Private::Validate(CBaseNugget_Private *const this)
{
  return 1;
}


// CBaseNugget::~CBaseNugget  (line 70, @0x0000000002045930, libserver.so)  // inlines: ~CBaseNugget_Private, ~CUtlString
// calls: CUtlString::FreeMemoryBlock
void __fastcall CBaseNugget::~CBaseNugget(CBaseNugget *const this)
{
  CUtlString *p_m_NuggetName; // rdi

  this->_vptr_CBaseNugget_Private = off_3FEA9F0;  // vptr: CBaseNugget_Private
  p_m_NuggetName = &this->m_NuggetName;
  if ( this->m_NuggetName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_NuggetName);
}


// CBaseNugget::~CBaseNugget  (line 70, @0x0000000002045960, libserver.so)  // inlines: ~CBaseNugget, ~CBaseNugget_Private, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, operator delete
void __fastcall CBaseNugget::~CBaseNugget(CBaseNugget *const this)
{
  CUtlString *p_m_NuggetName; // rdi

  p_m_NuggetName = &this->m_NuggetName;
  p_m_NuggetName[-1].m_pString = off_3FEA9F0;
  if ( this->m_NuggetName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_NuggetName);
  operator delete(this);
}


// CBaseNugget::Schema_DynamicBinding  (line 72, @0x0000000002045160, libserver.so)
// globals: CBaseNugget::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseNugget::Schema_DynamicBinding(const CBaseNugget *const this)
{
  return CBaseNugget::s_pSchemaBinding;
}


