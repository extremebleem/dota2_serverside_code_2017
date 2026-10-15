
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlString::~CUtlString  (line 323, @0x0000000001ec3f00, libserver.so)
// calls: CUtlString::FreeMemoryBlock
// callers: CLightComponent::CLightComponent, CFuncMonitor::CFuncMonitor
void __fastcall CUtlString::~CUtlString(CUtlString *const this)
{
  if ( this->m_pString != 0 )
    CUtlString::FreeMemoryBlock(this);
}


// CUtlConstStringBase<wchar_t>::Set  (line 486, @0x0000000002eab060, libserver.so)  // inlines: Duplicate, MemAlloc_WcStrDupFunc, wcscpy
// calls: wcslen, wcscpy
// callers: CItemSocket_Empty::GetString, CItemSocket_Effect::GetString, CItemSocket_Spectator::GetItemType, CVGUILocalizationProvider::ConvertLoccharToUnicode, CVGUILocalizationProvider::ConvertUTF8ToLocchar, CItemSocket_Color::GetString, CItemSocket_Strange::GetString, CItemSocket_Spectator::GetString, CItemSocket_AssetModifier::GetString, CItemSocket_Autograph::GetString, TItemSocket<CProtoItemSocket_Autograph>::GetItemType, TItemSocket<CProtoItemSocket_AssetModifier>::GetItemType (17 total)
void __fastcall CUtlConstStringBase<wchar_t>::Set(CUtlConstStringBase<wchar_t> *const this, const wchar_t *pValue)
{
  wchar_t *v4; // rax
  size_t v5; // rax
  wchar_t *v6; // rax

  if ( this->m_pString != pValue )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    v4 = 0;
    if ( pValue != 0 && *pValue != 0 )
    {
      v5 = wcslen(pValue);
      v6 = (**g_pMemAlloc)(g_pMemAlloc, 4 * v5 + 4);
      v4 = wcscpy(v6, pValue);
    }
    this->m_pString = v4;
  }
}


// CUtlConstStringBase<char>::Set  (line 486, @0x0000000002eab0e0, libserver.so)  // inlines: Duplicate, MemAlloc_StrDupFunc, strcpy
// calls: strlen, strcpy
// callers: CVGUILocalizationProvider::ConvertLoccharToANSI, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent, CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::~CStaticRecipeComponent, CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::~CDynamicRecipeComponentCriteriaMatch, CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::~CDynamicRecipeComponentSpecificItem, CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::~CDynamicRecipeComponentLootList, CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::~CDynamicRecipeComponentSpecificItemFromLootList, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV, TItemSocket<CProtoItemSocket_Autograph>::GetImage, TItemSocket<CProtoItemSocket_AssetModifier>::GetImage, TItemSocket<CProtoItemSocket_Spectator>::GetImage, TItemSocket<CProtoItemSocket_Strange>::GetImage (15 total)
void __fastcall CUtlConstStringBase<char>::Set(CUtlConstStringBase<char> *const this, const char *pValue)
{
  char *v4; // rax
  size_t v5; // rax
  char *v6; // rax

  if ( this->m_pString != pValue )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    v4 = 0;
    if ( pValue != 0 && *pValue != 0 )
    {
      v5 = strlen(pValue);
      v6 = (**g_pMemAlloc)(g_pMemAlloc, v5 + 1);
      v4 = strcpy(v6, pValue);
    }
    this->m_pString = v4;
  }
}


// UtlStringLessFunc  (line 533, @0x000000000217b200, libserver.so)  // inlines: _V_strcmp
// calls: CUtlString::Get, strcmp
bool __fastcall UtlStringLessFunc(const CUtlString *const lhs, const CUtlString *const rhs)
{
  const char *v3; // r12
  const char *v4; // rax

  v3 = CUtlString::Get(rhs);
  v4 = CUtlString::Get(lhs);
  return strcmp(v4, v3) >> 31;
}


// UtlStringFastCaseInsensitiveLessFunc  (line 535, @0x000000000217b230, libserver.so)
// calls: CUtlString::Get, V_stricmp_fast
bool __fastcall UtlStringFastCaseInsensitiveLessFunc(const CUtlString *const lhs, const CUtlString *const rhs)
{
  const char *v3; // r12
  const char *v4; // rax

  v3 = CUtlString::Get(rhs);
  v4 = CUtlString::Get(lhs);
  return V_stricmp_fast(v4, v3) >> 31;
}


// CUtlStringBuilder::PrepareBuffer  (line 709, @0x000000000210af20, libserver.so)  // inlines: Capacity, HasError
// calls: CUtlStringBuilder::InternalPrepareBuffer, CUtlStringBuilder::Data::SetLength
// callers: CGameEventManager::PrintEventToString
char *__fastcall CUtlStringBuilder::PrepareBuffer(
        CUtlStringBuilder *const this,
        size_t nChars,
        bool bCopyOld,
        size_t nMinCapacity)
{
  signed __int8 v4; // al
  size_t m_nCapacity; // r8

  v4 = this->m_data.Stack.m_szString[19];
  if ( v4 < 0 )
  {
    m_nCapacity = this->m_data.Heap.m_nCapacity;
    if ( m_nCapacity >= nChars && m_nCapacity >= nMinCapacity )
      return CUtlStringBuilder::Data::SetLength(&this->m_data, nChars);
    if ( (v4 & 0x40) != 0 )
      return 0;
  }
  else if ( nChars <= 0x13 && nMinCapacity <= 0x13 )
  {
    return CUtlStringBuilder::Data::SetLength(&this->m_data, nChars);
  }
  if ( nChars >= nMinCapacity )
    nMinCapacity = nChars;
  return CUtlStringBuilder::InternalPrepareBuffer(this, nChars, bCopyOld, nMinCapacity);
}


// CUtlStringBuilder::Data::Clear  (line 805, @0x000000000210af80, libserver.so)  // inlines: Construct, FreeHeap, HasError, SetBytesLeft
// callers: CUtlStringBuilder::Format
void __fastcall CUtlStringBuilder::Data::Clear(CUtlStringBuilder::Data *const this)
{
  signed __int8 v2; // al

  v2 = this->Stack.m_szString[19];
  if ( v2 >= 0 )
    goto LABEL_2;
  if ( (v2 & 0x40) == 0 )
  {
    if ( this->Heap.m_pchString != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
LABEL_2:
    this->Heap.m_pchString = 0;
    this->Heap.sentinel = 19;
  }
}


// CUtlStringBuilder::SetDirect  (line 1118, @0x00000000025cc5a0, libserver.so)  // inlines: Capacity, Clear, Construct, FreeHeap, Get, HasError, PrepareBuffer, SetBytesLeft, String, memcpy
// calls: CUtlStringBuilder::Data::SetLength, CUtlStringBuilder::InternalPrepareBuffer, memcpy
// callers: CDOTAHLTVDirector::UploadReplayFiles, BRecursiveCheckBundles
void __fastcall CUtlStringBuilder::SetDirect(CUtlStringBuilder *const this, const char *pchSource, size_t nChars)
{
  signed __int8 v6; // al
  char *v7; // rax
  char *m_pchString; // rax

  v6 = this->m_data.Stack.m_szString[19];
  if ( v6 >= 0 )
  {
    if ( pchSource != 0 && nChars != 0 )
    {
      if ( nChars > 0x13 )
        v7 = CUtlStringBuilder::InternalPrepareBuffer(this, nChars, 0, nChars);
      else
        v7 = CUtlStringBuilder::Data::SetLength(&this->m_data, nChars);
LABEL_14:
      if ( v7 != 0 )
        memcpy(v7, pchSource, nChars);
      return;
    }
    goto LABEL_18;
  }
  if ( (v6 & 0x40) == 0 )
  {
    m_pchString = "";
    if ( this->m_data.Heap.m_pchString != 0 )
      m_pchString = this->m_data.Heap.m_pchString;
    if ( pchSource != m_pchString )
    {
      if ( pchSource != 0 && nChars != 0 )
      {
        if ( nChars <= this->m_data.Heap.m_nCapacity )
          v7 = CUtlStringBuilder::Data::SetLength(&this->m_data, nChars);
        else
          v7 = CUtlStringBuilder::InternalPrepareBuffer(this, nChars, 0, nChars);
        goto LABEL_14;
      }
      if ( this->m_data.Heap.m_pchString != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
LABEL_18:
      this->m_data.Heap.m_pchString = 0;
      this->m_data.Heap.sentinel = 19;
    }
  }
}


// CUtlStringBuilder::Format  (line 1200, @0x000000000210afd0, libserver.so)  // inlines: CReuseVaList, Capacity, Clear, Construct, FreeHeap, HasError, PrepareBuffer, SetBytesLeft, SetError, VFormat
// calls: V_vscprintf, CUtlStringBuilder::InternalPrepareBuffer, V_vsnprintf, CUtlStringBuilder::Data::SetLength, CUtlStringBuilder::Data::Clear, CUtlStringBuilder::Data::SetError
// callers: CGameEventManager::PrintEventToString
size_t CUtlStringBuilder::Format(CUtlStringBuilder *const this, const char *pFormat, ...)
{
  signed __int8 v4; // al
  int v5; // eax
  int v6; // r12d
  signed __int8 v7; // al
  char *v8; // rax
  signed __int8 v10; // al
  va_list va1; // [rsp+0h] [rbp-100h] BYREF
  va_list args; // [rsp+18h] [rbp-E8h] BYREF

  va_start(args, pFormat);
  v4 = this->m_data.Stack.m_szString[19];
  if ( v4 < 0 && (v4 & 0x40) != 0 )
    return 0;
  va_copy(va1, args);
  v5 = (V_vscprintf)(pFormat, va1);
  v6 = v5;
  if ( v5 < 0 )
  {
    CUtlStringBuilder::Data::Clear(&this->m_data);
    CUtlStringBuilder::Data::SetError(&this->m_data, 1);
    return 0;
  }
  else
  {
    if ( v5 != 0 )
    {
      v7 = this->m_data.Stack.m_szString[19];
      if ( v7 >= 0 )
      {
        if ( v6 <= 0x13 )
          v8 = CUtlStringBuilder::Data::SetLength(&this->m_data, v6);
        else
          v8 = CUtlStringBuilder::InternalPrepareBuffer(this, v6, 0, v6);
LABEL_7:
        if ( v8 != 0 )
          return V_vsnprintf(v8, (v6 + 1), pFormat, args);
        return 0;
      }
      if ( v6 <= this->m_data.Heap.m_nCapacity )
      {
        v8 = CUtlStringBuilder::Data::SetLength(&this->m_data, v6);
        goto LABEL_7;
      }
      if ( (v7 & 0x40) == 0 )
      {
        v8 = CUtlStringBuilder::InternalPrepareBuffer(this, v6, 0, v6);
        goto LABEL_7;
      }
      return 0;
    }
    v10 = this->m_data.Stack.m_szString[19];
    if ( v10 < 0 )
    {
      if ( (v10 & 0x40) != 0 )
        return 0;
      if ( this->m_data.Heap.m_pchString != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
    this->m_data.Heap.m_pchString = 0;
    this->m_data.Heap.sentinel = 19;
    return 0;
  }
}


// CUtlStringBuilder::AppendFormat  (line 1254, @0x000000000210b1a0, libserver.so)  // inlines: CReuseVaList, Capacity, HasError, Length, PrepareBuffer, SetError, VAppendFormat
// calls: V_vscprintf, CUtlStringBuilder::InternalPrepareBuffer, V_vsnprintf, CUtlStringBuilder::Data::SetError, CUtlStringBuilder::Data::SetLength
// callers: CGameEventManager::PrintEventToString, BRecursiveCheckBundles
size_t CUtlStringBuilder::AppendFormat(CUtlStringBuilder *const this, const char *pFormat, ...)
{
  __int64 sentinel; // rcx
  int v5; // eax
  signed __int8 v6; // r8
  int v7; // r13d
  __int64 m_nLength; // r14
  size_t v9; // rsi
  char *v10; // rax
  __int64 v11; // rax
  size_t result; // rax
  va_list va1; // [rsp+0h] [rbp-100h] BYREF
  va_list args; // [rsp+18h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]

  va_start(args, pFormat);
  v15 = va_arg(args, _QWORD);
  va_end(args);
  va_start(args, pFormat);
  sentinel = this->m_data.Heap.sentinel;
  if ( (sentinel & 0x80u) == 0LL || (result = 0, (sentinel &= 0x40u) == 0) )
  {
    va_copy(va1, args);
    v5 = V_vscprintf(pFormat, va1, v15, sentinel);
    v6 = this->m_data.Stack.m_szString[19];
    v7 = v5;
    if ( v6 < 0 )
      m_nLength = this->m_data.Heap.m_nLength;
    else
      m_nLength = 19 - v6;
    if ( v5 < 0 )
    {
      CUtlStringBuilder::Data::SetError(&this->m_data, 1);
      v11 = v7;
      return m_nLength + v11;
    }
    if ( v5 == 0 )
      goto LABEL_13;
    v9 = m_nLength + v5;
    if ( v6 < 0 )
    {
      if ( v9 > this->m_data.Heap.m_nCapacity )
      {
        if ( (this->m_data.Heap.sentinel & 0x40) != 0 )
          goto LABEL_13;
        goto LABEL_8;
      }
    }
    else if ( v9 > 0x13 )
    {
LABEL_8:
      v10 = CUtlStringBuilder::InternalPrepareBuffer(this, v9, 1, m_nLength + v5);
      goto LABEL_9;
    }
    v10 = CUtlStringBuilder::Data::SetLength(&this->m_data, v9);
LABEL_9:
    if ( v10 != 0 )
    {
      v11 = V_vsnprintf(&v10[m_nLength], (v7 + 1), pFormat, args);
      return m_nLength + v11;
    }
LABEL_13:
    v11 = 0;
    return m_nLength + v11;
  }
  return result;
}


