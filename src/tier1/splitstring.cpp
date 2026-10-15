
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_splitstring.cpp  (line 0, @0x0000000001a67230, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_splitstring_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSplitString::CSplitString  (line 13, @0x0000000002f81a30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CSplitString::CSplitString(CSplitString *const this)
{
  this->m_Size = 0;
  this->m_Memory.m_pMemory = 0;
  this->m_Memory.m_nAllocationCount = 0;
  this->m_Memory.m_nGrowSize = 0;
  this->m_szBuffer = 0;
}


// CSplitString::CSplitString  (line 18, @0x0000000002f81cd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ~CUtlVector
// calls: CSplitString::Construct, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CSplitString::CSplitString(
        CSplitString *const this,
        const char *pString,
        const char **pSeparators,
        int nSeparators)
{
  this->m_Size = 0;
  this->m_Memory.m_pMemory = 0;
  this->m_Memory.m_nAllocationCount = 0;
  this->m_Memory.m_nGrowSize = 0;
  CSplitString::Construct(this, pString, pSeparators, nSeparators);
}


// CSplitString::CSplitString  (line 23, @0x0000000002f81d20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ~CUtlVector
// calls: CSplitString::Construct, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CMarkupVolumeTagged::Spawn, CDOTA_TeamCommander::MakeHeroSelection, KeyValues3::ParseValueFromString
void __fastcall CSplitString::CSplitString(CSplitString *const this, const char *pString, const char *pSeparator)
{
  const char *pSeparatora; // [rsp+8h] [rbp-18h] BYREF

  pSeparatora = pSeparator;
  this->m_Size = 0;
  this->m_Memory.m_pMemory = 0;
  this->m_Memory.m_nAllocationCount = 0;
  this->m_Memory.m_nGrowSize = 0;
  CSplitString::Construct(this, pString, &pSeparatora, 1);
}


// CSplitString::~CSplitString  (line 28, @0x0000000002f81a60, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete [], CUtlMemory<char*, int>::Purge
// callers: CMarkupVolumeTagged::Spawn, CDOTA_TeamCommander::MakeHeroSelection, KeyValues3::ParseValueFromString
void __fastcall CSplitString::~CSplitString(CSplitString *const this)
{
  char *m_szBuffer; // rdi
  bool v3; // zf

  m_szBuffer = this->m_szBuffer;
  if ( m_szBuffer != 0 )
    operator delete[](m_szBuffer);
  v3 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Memory);
    if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Memory);
  }
}


// CSplitString::Set  (line 34, @0x0000000002f81d80, libserver.so)
// calls: operator delete [], CSplitString::Construct
void __fastcall CSplitString::Set(
        CSplitString *const this,
        const char *pString,
        const char **pSeparators,
        int nSeparators)
{
  char *m_szBuffer; // rdi

  m_szBuffer = this->m_szBuffer;
  if ( m_szBuffer != 0 )
    operator delete[](m_szBuffer);
  CSplitString::Construct(this, pString, pSeparators, nSeparators);
}


// CSplitString::Construct  (line 40, @0x0000000002f81af0, libserver.so)  // inlines: AddToTail, CopyConstruct<char*>, Element, GrowMemory, Purge, RemoveAll, V_strlen, memcpy, operator[]
// calls: strlen, operator new [], memcpy, V_stristr_fast(char const*,char const*), CUtlMemory<char*, int>::Purge, CUtlMemory<char*, int>::Grow
// callers: CSplitString::CSplitString, CSplitString::Set
void __fastcall CSplitString::Construct(
        CSplitString *const this,
        const char *pString,
        const char **pSeparators,
        int nSeparators)
{
  size_t v5; // rbx
  char *v6; // rax
  const char *v7; // r12
  size_t v8; // rax
  const char **v9; // r14
  int v10; // r15d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  char *v13; // r14
  __int64 m_Size; // r12
  int v15; // edx
  char **v16; // rdx
  __int64 v17; // rbx
  char *v18; // r12
  int v19; // eax
  char **v20; // rax
  CUtlVectorBase<char*,CUtlMemory<char*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-58h]
  int separatorLen; // [rsp+28h] [rbp-38h]
  size_t separatorLena; // [rsp+28h] [rbp-38h]

  if ( pString != 0 )
    v5 = (strlen(pString) + 1);
  else
    v5 = 1;
  v6 = operator new[](v5);
  this->m_szBuffer = v6;
  memcpy(v6, pString, v5);
  this->m_Size = 0;
  p_m_Memory = &this->m_Memory;
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&this->m_Memory);
  v7 = pString;
  if ( nSeparators > 0 )
  {
    while ( 1 )
    {
      v9 = pSeparators;
      v10 = 0;
      v11 = 0;
      separatorLen = -1;
      do
      {
        v12 = V_stristr_fast(v7, *v9);
        if ( v12 != 0 && (v11 > v12 || v11 == 0) )
        {
          v11 = v12;
          separatorLen = v10;
        }
        ++v10;
        ++v9;
      }
      while ( v10 != nSeparators );
      if ( v11 == 0 )
        break;
      v8 = strlen(pSeparators[separatorLen]);
      if ( v7 < v11 )
      {
        v13 = &this->m_szBuffer[v7 - pString];
        v13[v11 - v7] = 0;
        m_Size = this->m_Size;
        v15 = this->m_Size;
        if ( m_Size == this->m_Memory.m_nAllocationCount )
        {
          separatorLena = v8;
          CUtlMemory<char *,int>::Grow(p_m_Memory, 1);
          v15 = this->m_Size;
          v8 = separatorLena;
        }
        this->m_Size = v15 + 1;
        v16 = &this->m_Memory.m_pMemory[m_Size];
        if ( v16 != 0 )
          *v16 = v13;
      }
      v7 = (v11 + v8);
    }
  }
  if ( strlen(v7) != 0 )
  {
    v17 = this->m_Size;
    v18 = &this->m_szBuffer[v7 - pString];
    v19 = this->m_Size;
    if ( v17 == this->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(p_m_Memory, 1);
      v19 = this->m_Size;
    }
    this->m_Size = v19 + 1;
    v20 = &this->m_Memory.m_pMemory[v17];
    if ( v20 != 0 )
      *v20 = v18;
  }
}


// CSplitString::PurgeAndDeleteElements  (line 103, @0x0000000002f81ac0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<char*, int>::Purge
void __fastcall CSplitString::PurgeAndDeleteElements(CSplitString *const this)
{
  bool v1; // zf

  v1 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Size = 0;
  if ( v1 )
    CUtlMemory<char *,int>::Purge(&this->m_Memory);
}


