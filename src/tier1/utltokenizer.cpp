
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_utltokenizer.cpp  (line 0, @0x0000000001a6ebd0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_utltokenizer_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CUtlTokenReference::CUtlTokenReference  (line 41, @0x0000000003262b20, libserver.so)
// callers: CLoadKV3FromDynData::ReadHeader, CLoadKV3FromDynData::ReportError, CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromDynData::ReadObjectReference, CLoadKV3FromDynData::ReadObject, CLoadKV3FromText::ReportError, CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadLiteralValue, CLoadKV3FromText::ReadBinaryBlobValue, CLoadKV3FromText::ReadValue, CLoadKV3FromText::ReadTable (13 total)
void __fastcall CUtlTokenReference::CUtlTokenReference(CUtlTokenReference *const this)
{
  this->m_pLocalStrCopy = 0;
  this->m_pStart = 0;
  this->m_pEnd = 0;
  this->m_nTokenNumber = -1;
  this->m_nStartingLineNumber = 0;
}


// CUtlTokenReference::CUtlTokenReference  (line 53, @0x0000000003262b50, libserver.so)
void __fastcall CUtlTokenReference::CUtlTokenReference(
        CUtlTokenReference *const this,
        const CUtlTokenReference *const other)
{
  this->m_pLocalStrCopy = 0;
  this->m_pStart = other->m_pStart;
  this->m_pEnd = other->m_pEnd;
  this->m_nTokenNumber = other->m_nTokenNumber;
  this->m_nStartingLineNumber = other->m_nStartingLineNumber;
}


// CUtlTokenReference::MakeInvalid  (line 65, @0x0000000003262b80, libserver.so)
void __fastcall CUtlTokenReference::MakeInvalid(CUtlTokenReference *const this)
{
  if ( this->m_pLocalStrCopy != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  this->m_pLocalStrCopy = 0;
  this->m_pStart = 0;
  this->m_pEnd = 0;
  this->m_nTokenNumber = -1;
  this->m_nStartingLineNumber = 0;
}


// CUtlTokenReference::Init  (line 82, @0x0000000003262be0, libserver.so)
void __fastcall CUtlTokenReference::Init(
        CUtlTokenReference *const this,
        int nLine,
        const char *pStart,
        const char *pEnd,
        int nTokenNumber)
{
  if ( this->m_pLocalStrCopy != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  this->m_nStartingLineNumber = nLine;
  this->m_pStart = pStart;
  this->m_pEnd = pEnd;
  this->m_nTokenNumber = nTokenNumber;
  this->m_pLocalStrCopy = 0;
}


// CUtlTokenReference::~CUtlTokenReference  (line 99, @0x0000000003262c40, libserver.so)
// callers: CLoadKV3FromDynData::ReadHeader, CLoadKV3FromDynData::ReportError, CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadLiteralValue, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveAll, CLoadKV3FromDynData::ReadObjectReference, CLoadKV3FromDynData::ReadObject, CUtlTokenizer::~CUtlTokenizer, CLoadKV3FromDynData::~CLoadKV3FromDynData, CLoadKV3FromText::ReportError, CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadLiteralValue (18 total)
void __fastcall CUtlTokenReference::~CUtlTokenReference(CUtlTokenReference *const this)
{
  if ( this->m_pLocalStrCopy != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
}


// CUtlTokenReference::GetLineNumber  (line 110, @0x0000000003262c70, libserver.so)
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue
int __fastcall CUtlTokenReference::GetLineNumber(const CUtlTokenReference *const this)
{
  return this->m_nStartingLineNumber;
}


// CUtlTokenReference::AsString  (line 118, @0x0000000003262c80, libserver.so)  // inlines: IsValid, V_memcpy, memcpy
// calls: memcpy
// callers: CLoadKV3FromDynData::ReadHeader, CLoadKV3FromDynData::ReportError, CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromDynData::ReadObjectReference, CLoadKV3FromDynData::ReadObject, CLoadKV3FromText::ReportError, CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadLiteralValue, CLoadKV3FromText::ReadValue, CLoadKV3FromText::ReadTable, ParseInteractionLayerList
const char *__fastcall CUtlTokenReference::AsString(const CUtlTokenReference *const this)
{
  const char *result; // rax
  const char *m_pStart; // rdx
  const char *m_pEnd; // r12
  int v5; // r12d
  char *v6; // rax
  const char *v7; // rsi

  result = this->m_pLocalStrCopy;
  if ( result == 0 )
  {
    m_pStart = this->m_pStart;
    if ( m_pStart != 0 )
    {
      m_pEnd = this->m_pEnd;
      if ( m_pEnd != 0 && m_pStart != m_pEnd )
      {
        v5 = m_pEnd - m_pStart;
        v6 = (**g_pMemAlloc)(g_pMemAlloc, v5 + 1);
        v7 = this->m_pStart;
        this->m_pLocalStrCopy = v6;
        if ( v5 < 0 )
          __debugbreak();
        memcpy(v6, v7, v5);
        this->m_pLocalStrCopy[v5] = 0;
        return this->m_pLocalStrCopy;
      }
    }
  }
  return result;
}


// CUtlTokenReference::MakeStringToken  (line 133, @0x0000000003262d00, libserver.so)  // inlines: MakeStringToken
// calls: MurmurHash2LowerCase, RegisterStringToken
CUtlStringToken __fastcall CUtlTokenReference::MakeStringToken(const CUtlTokenReference *const this)
{
  CUtlStringToken result; // eax
  const char *m_pStart; // rbx
  const char *m_pEnd; // r12
  CUtlStringToken v4; // [rsp+Ch] [rbp-14h]

  result.m_nHashCode = 0;
  m_pStart = this->m_pStart;
  m_pEnd = this->m_pEnd;
  if ( m_pStart != 0 && *m_pStart != 0 )
  {
    result.m_nHashCode = MurmurHash2LowerCase(this->m_pStart, m_pEnd - m_pStart, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v4.m_nHashCode = result.m_nHashCode;
      RegisterStringToken(result.m_nHashCode, m_pStart, m_pEnd, 1);
      return v4;
    }
  }
  return result;
}


// CUtlTokenReference::AsString  (line 141, @0x0000000003262d70, libserver.so)
// calls: CUtlString::SetDirect
void __fastcall CUtlTokenReference::AsString(const CUtlTokenReference *const this, CUtlString *pOutResult)
{
  CUtlString::SetDirect(pOutResult, this->m_pStart, this->m_pEnd - this->m_pStart);
}


// UtlTokenizer_QuoteAndEscapeString  (line 150, @0x0000000003262d90, libserver.so)
// calls: CUtlString::operator=, CUtlString::operator+=
// callers: KeyValues3::GetMemberNameEscaped
// strings: "\\'", "\\\"", "\\n", "\\t"
// globals: jpt_3262DDA
bool __fastcall UtlTokenizer_QuoteAndEscapeString(const char *pStart, CUtlString *pOutResult)
{
  bool v2; // r14
  char i; // dl

  v2 = 0;
  CUtlString::operator=(pOutResult, "\"");
  for ( i = *pStart; *pStart != 0; i = *pStart )
  {
    switch ( i )
    {
      case 9:
        v2 = 1;
        CUtlString::operator+=(pOutResult, "\\t");
        break;
      case 10:
        v2 = 1;
        CUtlString::operator+=(pOutResult, "\\n");
        break;
      case 32:
        v2 = 1;
        goto LABEL_8;
      case 34:
        v2 = 1;
        CUtlString::operator+=(pOutResult, "\\\"");
        break;
      case 39:
        v2 = 1;
        CUtlString::operator+=(pOutResult, "\\'");
        break;
      default:
LABEL_8:
        CUtlString::operator+=(pOutResult, i);
        break;
    }
    ++pStart;
  }
  CUtlString::operator+=(pOutResult, "\"");
  return v2;
}


// UtlTokenizer_UnescapeString  (line 193, @0x00000000032630f0, libserver.so)  // inlines: CUtlString, Length, SetPtr, V_strlen, operator=, ~CUtlString
// calls: CUtlString::operator=, UtlTokenizer_IsMultilineString, CUtlString::operator+=, CUtlString::SetDirect, CUtlString::Replace, CUtlString::FreeMemoryBlock, strlen, CUtlString::Slice, _Unwind_Resume
// callers: CUtlTokenReference::AsUnescapedString
// strings: "\\\"\"\""
void __fastcall UtlTokenizer_UnescapeString(const char *pStart, const char *pEnd, CUtlString *pOutResult)
{
  char v6; // dl
  const char *v7; // rbx
  char v8; // si
  char v9; // al
  char *v10; // r12
  char *v11; // r12
  int v12; // eax
  char *m_pString; // r12
  char *v14; // r13
  bool v15; // zf
  CUtlString strCopy; // [rsp+0h] [rbp-80h] BYREF
  char *s; // [rsp+10h] [rbp-70h] BYREF
  char *v18; // [rsp+20h] [rbp-60h] BYREF
  CUtlString v19; // [rsp+30h] [rbp-50h] BYREF
  CUtlString v20; // [rsp+40h] [rbp-40h] BYREF

  CUtlString::operator=(pOutResult, "");
  if ( !UtlTokenizer_IsMultilineString(pStart, pEnd) )
  {
    v6 = 0;
    v7 = pStart;
    if ( pStart == pEnd )
      return;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( v7 != pStart && v7 != pEnd - 1 )
          break;
        if ( v9 != 34 )
          break;
LABEL_9:
        if ( pEnd == ++v7 )
          return;
      }
      if ( v9 != 92 || v6 != 0 )
      {
        v8 = *v7;
        if ( v6 != 0 )
        {
          v8 = 10;
          if ( v9 != 110 )
          {
            v8 = 9;
            if ( v9 != 116 )
              v8 = *v7;
          }
        }
        CUtlString::operator+=(pOutResult, v8);
        v6 = 0;
        goto LABEL_9;
      }
      ++v7;
      v6 = 1;
      if ( pEnd == v7 )
        return;
    }
  }
  strCopy.m_pString = 0;
  CUtlString::SetDirect(&strCopy, pStart + 3, pEnd - pStart - 6);
  CUtlString::Replace(&s, &strCopy, "\r\n", "\n", 0);
  v10 = s;
  if ( strCopy.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&strCopy);
  strCopy.m_pString = v10;
  if ( v10 != 0 && strlen(v10) > 0 )
  {
    CUtlString::Slice(&v18, &strCopy, 1, 0x7FFFFFFF);
    v11 = v18;
    if ( strCopy.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strCopy);
    strCopy.m_pString = v11;
    if ( v11 != 0 )
    {
      v12 = strlen(v11);
      if ( v12 > 0 )
      {
        CUtlString::Slice(&v19, &strCopy, 0, v12 - 1);
        m_pString = v19.m_pString;
        if ( strCopy.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&strCopy);
        strCopy.m_pString = m_pString;
      }
    }
  }
  CUtlString::Replace(&v20, &strCopy, "\\\"\"\"", "\"\"\"", 0);
  v14 = v20.m_pString;
  if ( pOutResult->m_pString != 0 )
    CUtlString::FreeMemoryBlock(pOutResult);
  v15 = strCopy.m_pString == 0;
  pOutResult->m_pString = v14;
  if ( !v15 )
    CUtlString::FreeMemoryBlock(&strCopy);
}


// CUtlTokenReference::AsUnescapedString  (line 262, @0x0000000003263360, libserver.so)
// calls: UtlTokenizer_UnescapeString
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue, CLoadKV3FromText::ReadTable
void __fastcall CUtlTokenReference::AsUnescapedString(const CUtlTokenReference *const this, CUtlString *pOutResult)
{
  UtlTokenizer_UnescapeString(this->m_pStart, this->m_pEnd, pOutResult);
}


// CUtlTokenReference::IsValid  (line 270, @0x0000000003262e90, libserver.so)
// callers: CLoadKV3FromDynData::ReadObject
bool __fastcall CUtlTokenReference::IsValid(const CUtlTokenReference *const this)
{
  const char *m_pStart; // rax
  const char *m_pEnd; // rdx

  m_pStart = this->m_pStart;
  return m_pStart != 0 && (m_pEnd = this->m_pEnd) != 0 && m_pStart != m_pEnd;
}


// CUtlTokenReference::MakeSafeIdentifier  (line 288, @0x0000000003262ec0, libserver.so)  // inlines: Length, V_strlen
// calls: strlen, CUtlString::GetForModify
bool __fastcall CUtlTokenReference::MakeSafeIdentifier(CUtlString *pInOutStr)
{
  char *m_pString; // rdi
  int v3; // eax
  int v4; // r13d
  __int64 v5; // rbx
  char *v6; // rax
  char v7; // dl

  if ( pInOutStr == 0 )
    return 0;
  m_pString = pInOutStr->m_pString;
  if ( m_pString == 0 )
    return 0;
  v3 = strlen(m_pString);
  v4 = v3;
  if ( v3 == 0 )
    return 0;
  v5 = 0;
  if ( v3 > 0 )
  {
    do
    {
      v6 = &CUtlString::GetForModify(pInOutStr)[v5];
      v7 = *v6;
      if ( ((*v6 & 0xDF) - 65) > 0x19u && v7 != 95 && v7 != 58 && v7 != 46 && (v5 == 0 || (v7 - 48) > 9u) )
        *v6 = 95;
      ++v5;
    }
    while ( v4 > v5 );
  }
  return 1;
}


// CUtlTokenReference::IsIdentifier  (line 316, @0x0000000003263470, libserver.so)  // inlines: IsValid
// calls: CUtlTokenReference::IsBool
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadTable, CUtlTokenizer::PeekIdentifier
bool __fastcall CUtlTokenReference::IsIdentifier(const CUtlTokenReference *const this, bool bIncludeBoolLiterals)
{
  const char *m_pStart; // r9
  const char *m_pEnd; // r8
  const char *v4; // rax
  char v5; // dl

  m_pStart = this->m_pStart;
  if ( m_pStart != 0 )
  {
    m_pEnd = this->m_pEnd;
    if ( m_pEnd != 0 && m_pStart != m_pEnd )
    {
      v4 = this->m_pStart;
      while ( 1 )
      {
        v5 = *v4;
        if ( ((*v4 & 0xDF) - 65) > 0x19u && v5 != 95 && v5 != 58 && v5 != 46 && (v4 == m_pStart || (v5 - 48) > 9u) )
          break;
        if ( ++v4 == m_pEnd )
          return bIncludeBoolLiterals || !CUtlTokenReference::IsBool(this);
      }
    }
  }
  return 0;
}


// CUtlTokenReference::IsInteger  (line 342, @0x0000000003262f70, libserver.so)  // inlines: IsValid
// callers: CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue
bool __fastcall CUtlTokenReference::IsInteger(const CUtlTokenReference *const this)
{
  const char *m_pStart; // rax
  const char *m_pEnd; // rsi
  char v3; // dl

  m_pStart = this->m_pStart;
  if ( m_pStart != 0 )
  {
    m_pEnd = this->m_pEnd;
    if ( m_pEnd != 0 && m_pStart != m_pEnd )
    {
      while ( 1 )
      {
        v3 = *m_pStart;
        if ( (*m_pStart - 48) > 9u && v3 != 43 && v3 != 45 )
          break;
        if ( ++m_pStart == m_pEnd )
          return 1;
      }
    }
  }
  return 0;
}


// CUtlTokenReference::IsFloat  (line 359, @0x0000000003262fc0, libserver.so)  // inlines: IsValid
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue
bool __fastcall CUtlTokenReference::IsFloat(const CUtlTokenReference *const this)
{
  const char *m_pStart; // rax
  const char *m_pEnd; // rsi
  char v3; // dl

  m_pStart = this->m_pStart;
  if ( m_pStart != 0 )
  {
    m_pEnd = this->m_pEnd;
    if ( m_pEnd != 0 && m_pStart != m_pEnd )
    {
      while ( 1 )
      {
        v3 = *m_pStart;
        if ( (*m_pStart - 48) > 9u && v3 != 43 && (v3 - 45) > 1u && (v3 & 0xDF) != 0x45 )
          break;
        if ( ++m_pStart == m_pEnd )
          return 1;
      }
    }
  }
  return 0;
}


// CUtlTokenReference::IsBool  (line 378, @0x0000000003263430, libserver.so)
// calls: CUtlTokenReference::IsEqual
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue, CUtlTokenReference::IsIdentifier
// strings: "true", "false"
bool __fastcall CUtlTokenReference::IsBool(const CUtlTokenReference *const this)
{
  return CUtlTokenReference::IsEqual(this, "true", 0) || CUtlTokenReference::IsEqual(this, "false", 0);
}


// CUtlTokenReference::IsStringLiteral  (line 386, @0x0000000003263020, libserver.so)  // inlines: IsValid
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue, CLoadKV3FromText::ReadTable
bool __fastcall CUtlTokenReference::IsStringLiteral(const CUtlTokenReference *const this)
{
  const char *m_pStart; // rdx
  const char *m_pEnd; // rcx
  bool result; // al

  m_pStart = this->m_pStart;
  if ( m_pStart == 0 )
    return 0;
  m_pEnd = this->m_pEnd;
  if ( m_pEnd == 0 || m_pStart == m_pEnd )
    return 0;
  result = 0;
  if ( m_pEnd - m_pStart <= 1 )
    return result;
  if ( *m_pStart != 34 )
    return 0;
  result = 1;
  if ( *(m_pEnd - 1) != 34 )
    return 0;
  return result;
}


// UtlTokenizer_IsMultilineString  (line 397, @0x0000000003263070, libserver.so)  // inlines: V_strncmp<int>
// calls: _V_strncmp
// callers: UtlTokenizer_UnescapeString, CUtlTokenReference::IsMultiLineStringLiteral
bool __fastcall UtlTokenizer_IsMultilineString(const char *pStart, const char *pEnd)
{
  bool result; // al

  result = pStart == 0 || pEnd == 0;
  if ( result )
    return 0;
  if ( pEnd - pStart > 5 )
    return _V_strncmp(pStart, "\"\"\"", 3) == 0 && _V_strncmp(pEnd - 3, "\"\"\"", 3) == 0;
  return result;
}


// CUtlTokenReference::IsMultiLineStringLiteral  (line 409, @0x0000000003263380, libserver.so)  // inlines: IsValid
// calls: UtlTokenizer_IsMultilineString
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue
bool __fastcall CUtlTokenReference::IsMultiLineStringLiteral(const CUtlTokenReference *const this)
{
  const char *m_pStart; // rax
  const char *m_pEnd; // rsi

  m_pStart = this->m_pStart;
  return m_pStart != 0
      && (m_pEnd = this->m_pEnd) != 0
      && m_pStart != m_pEnd
      && UtlTokenizer_IsMultilineString(this->m_pStart, m_pEnd);
}


// CUtlTokenReference::IsEqual  (line 420, @0x00000000032633b0, libserver.so)  // inlines: IsValid
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue, CUtlTokenReference::IsBool, CUtlTokenizer::PeekAtomicToken
bool __fastcall CUtlTokenReference::IsEqual(
        const CUtlTokenReference *const this,
        const char *pExpectedString,
        bool bCaseSensitive)
{
  const char *m_pStart; // rax
  const char *m_pEnd; // r9
  int v5; // ecx
  int v6; // edi

  m_pStart = this->m_pStart;
  if ( m_pStart != 0 )
  {
    m_pEnd = this->m_pEnd;
    if ( m_pEnd != 0 && m_pStart != m_pEnd && pExpectedString != 0 )
    {
      while ( 1 )
      {
        v5 = *pExpectedString;
        if ( *pExpectedString == 0 )
          break;
        if ( bCaseSensitive )
        {
          if ( v5 != *m_pStart )
            return 0;
        }
        else
        {
          v6 = *m_pStart;
          if ( (*m_pStart - 65) <= 0x19u )
            v6 += 32;
          if ( (v5 - 65) <= 0x19u )
            v5 += 32;
          if ( v6 != v5 )
            return 0;
        }
        ++m_pStart;
        ++pExpectedString;
        if ( m_pStart == m_pEnd )
          return *pExpectedString == 0;
      }
    }
  }
  return 0;
}


// CUtlTokenizer::CUtlTokenizer  (line 450, @0x0000000003263990, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlString, CUtlTokenReference, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlTokenReference, ~CUtlVector, ~CUtlVectorFixedGrowable
// calls: CharacterSetBuild, Plat_IsInDebugSessionRaw, CUtlMemory<CUtlTokenReference, int>::Purge, _Unwind_Resume, CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVectorBase, CUtlString::FreeMemoryBlock, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::~CUtlVectorBase
// strings: " \t\n\r"
void __fastcall CUtlTokenizer::CUtlTokenizer(CUtlTokenizer *const this)
{
  CUtlTokenReference *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_LookaheadTokens.m_Memory.m_FixedMemory;
  this->m_LookaheadTokens.m_Size = 0;
  this->m_LookaheadTokens.m_Memory.m_pMemory = 0;
  this->m_LookaheadTokens.m_Memory.m_nAllocationCount = 8;
  this->m_LookaheadTokens.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 32) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_LookaheadTokens.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_LastConsumedToken.m_pLocalStrCopy = 0;
  this->m_LastConsumedToken.m_pStart = 0;
  this->m_LastConsumedToken.m_pEnd = 0;
  this->m_LastConsumedToken.m_nTokenNumber = -1;
  this->m_LastConsumedToken.m_nStartingLineNumber = 0;
  this->m_Filename.m_pString = 0;
  this->m_Warnings.m_Size = 0;
  this->m_Warnings.m_Memory.m_pMemory = 0;
  this->m_Warnings.m_Memory.m_nAllocationCount = 0;
  this->m_Warnings.m_Memory.m_nGrowSize = 0;
  this->m_bParseStringsAsAtomicTokens = 1;
  this->m_bSkipComments = 1;
  this->m_bSkipWhitespace = 1;
  this->m_bWhiteSpaceIsDelimiter = 1;
  CharacterSetBuild(&this->m_TokenDelimiters, " \t\n\r");
  this->m_pSrcBuffer = 0;
  this->m_nLineNumberAfterLookaheadTokens = 0;
}


// CUtlTokenizer::Init  (line 464, @0x0000000003263500, libserver.so)
// calls: CUtlBuffer::SeekGet, CUtlString::operator=
void __fastcall CUtlTokenizer::Init(CUtlTokenizer *const this, CUtlBuffer *pSrcBuffer, const char *pFilename)
{
  this->m_pSrcBuffer = pSrcBuffer;
  CUtlBuffer::SeekGet(pSrcBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
  this->m_nLineNumberAfterLookaheadTokens = 1;
  CUtlString::operator=(&this->m_Filename, pFilename);
}


// CUtlTokenizer::CUtlTokenizer  (line 474, @0x0000000003263b20, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlString, CUtlTokenReference, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlTokenReference, ~CUtlVector, ~CUtlVectorFixedGrowable
// calls: CharacterSetBuild, CUtlBuffer::SeekGet, CUtlString::operator=, Plat_IsInDebugSessionRaw, CUtlMemory<CUtlTokenReference, int>::Purge, _Unwind_Resume, CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVectorBase, CUtlString::FreeMemoryBlock, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::~CUtlVectorBase
// callers: CLoadKV3FromDynData::CLoadKV3FromDynData, CLoadKV3FromText::CLoadKV3FromText, ParseInteractionLayerList
// strings: " \t\n\r"
void __fastcall CUtlTokenizer::CUtlTokenizer(CUtlTokenizer *const this, CUtlBuffer *pSrcBuffer, const char *pFilename)
{
  CUtlTokenReference *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_LookaheadTokens.m_Memory.m_FixedMemory;
  this->m_LookaheadTokens.m_Size = 0;
  this->m_LookaheadTokens.m_Memory.m_pMemory = 0;
  this->m_LookaheadTokens.m_Memory.m_nAllocationCount = 8;
  this->m_LookaheadTokens.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 32) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_LookaheadTokens.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_LastConsumedToken.m_pLocalStrCopy = 0;
  this->m_LastConsumedToken.m_pStart = 0;
  this->m_LastConsumedToken.m_pEnd = 0;
  this->m_LastConsumedToken.m_nTokenNumber = -1;
  this->m_LastConsumedToken.m_nStartingLineNumber = 0;
  this->m_Filename.m_pString = 0;
  this->m_Warnings.m_Size = 0;
  this->m_Warnings.m_Memory.m_pMemory = 0;
  this->m_Warnings.m_Memory.m_nAllocationCount = 0;
  this->m_Warnings.m_Memory.m_nGrowSize = 0;
  this->m_bParseStringsAsAtomicTokens = 1;
  this->m_bSkipComments = 1;
  this->m_bSkipWhitespace = 1;
  this->m_bWhiteSpaceIsDelimiter = 1;
  CharacterSetBuild(&this->m_TokenDelimiters, " \t\n\r");
  this->m_pSrcBuffer = pSrcBuffer;
  CUtlBuffer::SeekGet(pSrcBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
  this->m_nLineNumberAfterLookaheadTokens = 1;
  CUtlString::operator=(&this->m_Filename, pFilename);
}


// CUtlTokenizer::Rewind  (line 492, @0x0000000003263900, libserver.so)  // inlines: MakeInvalid
// calls: CUtlBuffer::SeekGet, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveAll
// callers: CLoadKV3FromDynData::Parse, CLoadKV3FromText::Parse
void __fastcall CUtlTokenizer::Rewind(CUtlTokenizer *const this)
{
  CUtlBuffer::SeekGet(this->m_pSrcBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
  CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveAll(&this->m_LookaheadTokens);
  if ( this->m_LastConsumedToken.m_pLocalStrCopy != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  this->m_LastConsumedToken.m_pLocalStrCopy = 0;
  this->m_LastConsumedToken.m_pStart = 0;
  this->m_LastConsumedToken.m_pEnd = 0;
  this->m_LastConsumedToken.m_nTokenNumber = -1;
  this->m_LastConsumedToken.m_nStartingLineNumber = 0;
  this->m_nLineNumberAfterLookaheadTokens = 1;
}


// CUtlTokenizer::SetTokenDelimiters  (line 503, @0x0000000003263540, libserver.so)
// calls: CharacterSetBuild
// callers: CLoadKV3FromDynData::CLoadKV3FromDynData, CLoadKV3FromText::CLoadKV3FromText, ParseInteractionLayerList
void __fastcall CUtlTokenizer::SetTokenDelimiters(CUtlTokenizer *const this, const char *pDelimiterChars)
{
  CharacterSetBuild(&this->m_TokenDelimiters, pDelimiterChars);
}


// CUtlTokenizer::SetParseStringsAsAtomicTokens  (line 511, @0x0000000003263550, libserver.so)
void __fastcall CUtlTokenizer::SetParseStringsAsAtomicTokens(
        CUtlTokenizer *const this,
        bool bParseStringsAsAtomicTokens)
{
  this->m_bParseStringsAsAtomicTokens = bParseStringsAsAtomicTokens;
}


// CUtlTokenizer::SetSkipComments  (line 519, @0x0000000003263560, libserver.so)
void __fastcall CUtlTokenizer::SetSkipComments(CUtlTokenizer *const this, bool bSkipComments)
{
  this->m_bSkipComments = bSkipComments;
}


// CUtlTokenizer::SetSkipWhitespace  (line 527, @0x0000000003263570, libserver.so)
void __fastcall CUtlTokenizer::SetSkipWhitespace(CUtlTokenizer *const this, bool bSkipWhitespace)
{
  this->m_bSkipWhitespace = bSkipWhitespace;
}


// CUtlTokenizer::SetWhitespaceIsDelimiter  (line 535, @0x0000000003263580, libserver.so)
void __fastcall CUtlTokenizer::SetWhitespaceIsDelimiter(CUtlTokenizer *const this, bool bWhiteSpaceIsDelimiter)
{
  this->m_bWhiteSpaceIsDelimiter = bWhiteSpaceIsDelimiter;
}


// CUtlTokenizer::PeekIdentifier  (line 543, @0x0000000003264620, libserver.so)  // inlines: operator[]
// calls: CUtlTokenizer::ReadUpThroughToken, CUtlTokenReference::IsIdentifier
// callers: CLoadKV3FromDynData::ReadValue, CLoadKV3FromText::ReadValue, CUtlTokenizer::ConsumeIdentifier
bool __fastcall CUtlTokenizer::PeekIdentifier(CUtlTokenizer *const this, int nTokenIndex)
{
  __int64 v2; // r12

  v2 = nTokenIndex;
  return CUtlTokenizer::ReadUpThroughToken(this, nTokenIndex)
      && CUtlTokenReference::IsIdentifier(&this->m_LookaheadTokens.m_Memory.m_pMemory[v2], 1);
}


// CUtlTokenizer::PeekAtomicToken  (line 554, @0x0000000003264720, libserver.so)  // inlines: operator[]
// calls: CUtlTokenizer::ReadUpThroughToken, CUtlTokenReference::IsEqual
// callers: CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadValue, CLoadKV3FromDynData::ReadObject, CLoadKV3FromDynData::ReadCompoundValue, CLoadKV3FromText::ReadValue, CLoadKV3FromText::ReadTable, CLoadKV3FromText::ReadArrayValue, CUtlTokenizer::ConsumeAtomicToken, CUtlTokenizer::ConsumeUntilAtomic
bool __fastcall CUtlTokenizer::PeekAtomicToken(
        CUtlTokenizer *const this,
        int nTokenIndex,
        const char *pExpectedString,
        bool bCaseSensitive)
{
  __int64 v6; // r12

  v6 = nTokenIndex;
  return CUtlTokenizer::ReadUpThroughToken(this, nTokenIndex)
      && CUtlTokenReference::IsEqual(&this->m_LookaheadTokens.m_Memory.m_pMemory[v6], pExpectedString, bCaseSensitive);
}


// CUtlTokenizer::PeekToken  (line 565, @0x0000000003264800, libserver.so)
// calls: CUtlTokenizer::ReadUpThroughToken
// callers: CLoadKV3FromDynData::ReportError, CLoadKV3FromText::ReportError
bool __fastcall CUtlTokenizer::PeekToken(CUtlTokenizer *const this, int nTokenIndex, CUtlTokenReference *pOutToken)
{
  __int64 v3; // r13
  bool result; // al
  CUtlTokenReference *v7; // rdx

  v3 = nTokenIndex;
  result = CUtlTokenizer::ReadUpThroughToken(this, nTokenIndex);
  if ( result && pOutToken != 0 )
  {
    v7 = &this->m_LookaheadTokens.m_Memory.m_pMemory[v3];
    *&pOutToken->m_nStartingLineNumber = *&v7->m_nStartingLineNumber;
    pOutToken->m_pLocalStrCopy = v7->m_pLocalStrCopy;
    pOutToken->m_pStart = v7->m_pStart;
    pOutToken->m_pEnd = v7->m_pEnd;
    pOutToken->m_nTokenNumber = v7->m_nTokenNumber;
  }
  return result;
}


// CUtlTokenizer::ConsumeIdentifier  (line 581, @0x0000000003264660, libserver.so)
// calls: CUtlTokenizer::PeekIdentifier, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveMultipleFromHead
// callers: CLoadKV3FromDynData::ReadHeader, CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadObjectReference, CLoadKV3FromDynData::ReadObject, CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadValue, ParseInteractionLayerList
bool __fastcall CUtlTokenizer::ConsumeIdentifier(CUtlTokenizer *const this, CUtlTokenReference *pOutToken)
{
  bool result; // al
  CUtlTokenReference *m_pMemory; // rdx
  CUtlTokenReference *v6; // rdx
  bool v7; // [rsp+Ch] [rbp-14h]

  result = CUtlTokenizer::PeekIdentifier(this, 0);
  if ( result )
  {
    if ( pOutToken != 0 )
    {
      m_pMemory = this->m_LookaheadTokens.m_Memory.m_pMemory;
      *&pOutToken->m_nStartingLineNumber = *&m_pMemory->m_nStartingLineNumber;
      pOutToken->m_pLocalStrCopy = m_pMemory->m_pLocalStrCopy;
      pOutToken->m_pStart = m_pMemory->m_pStart;
      pOutToken->m_pEnd = m_pMemory->m_pEnd;
      pOutToken->m_nTokenNumber = m_pMemory->m_nTokenNumber;
    }
    v6 = this->m_LookaheadTokens.m_Memory.m_pMemory;
    v7 = result;
    *&this->m_LastConsumedToken.m_nStartingLineNumber = *&v6->m_nStartingLineNumber;
    this->m_LastConsumedToken.m_pLocalStrCopy = v6->m_pLocalStrCopy;
    this->m_LastConsumedToken.m_pStart = v6->m_pStart;
    this->m_LastConsumedToken.m_pEnd = v6->m_pEnd;
    this->m_LastConsumedToken.m_nTokenNumber = v6->m_nTokenNumber;
    CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveMultipleFromHead(
      &this->m_LookaheadTokens,
      1);
    return v7;
  }
  return result;
}


// CUtlTokenizer::ConsumeArbitraryToken  (line 599, @0x0000000003264870, libserver.so)
// calls: CUtlTokenizer::ReadUpThroughToken, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveMultipleFromHead
// callers: CLoadKV3FromDynData::ReadHeader, CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadLiteralValue, CLoadKV3FromText::ReadBinaryBlobValue, CLoadKV3FromText::ReadValue, CLoadKV3FromText::ReadTable, CUtlTokenizer::ConsumeUntilAtomic
bool __fastcall CUtlTokenizer::ConsumeArbitraryToken(CUtlTokenizer *const this, CUtlTokenReference *pOutToken)
{
  bool result; // al
  CUtlTokenReference *m_pMemory; // rdx
  CUtlTokenReference *v6; // rdx
  bool v7; // [rsp+Ch] [rbp-14h]

  result = CUtlTokenizer::ReadUpThroughToken(this, 0);
  if ( result )
  {
    if ( pOutToken != 0 )
    {
      m_pMemory = this->m_LookaheadTokens.m_Memory.m_pMemory;
      *&pOutToken->m_nStartingLineNumber = *&m_pMemory->m_nStartingLineNumber;
      pOutToken->m_pLocalStrCopy = m_pMemory->m_pLocalStrCopy;
      pOutToken->m_pStart = m_pMemory->m_pStart;
      pOutToken->m_pEnd = m_pMemory->m_pEnd;
      pOutToken->m_nTokenNumber = m_pMemory->m_nTokenNumber;
    }
    v6 = this->m_LookaheadTokens.m_Memory.m_pMemory;
    v7 = result;
    *&this->m_LastConsumedToken.m_nStartingLineNumber = *&v6->m_nStartingLineNumber;
    this->m_LastConsumedToken.m_pLocalStrCopy = v6->m_pLocalStrCopy;
    this->m_LastConsumedToken.m_pStart = v6->m_pStart;
    this->m_LastConsumedToken.m_pEnd = v6->m_pEnd;
    this->m_LastConsumedToken.m_nTokenNumber = v6->m_nTokenNumber;
    CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveMultipleFromHead(
      &this->m_LookaheadTokens,
      1);
    return v7;
  }
  return result;
}


// CUtlTokenizer::ConsumeAtomicToken  (line 617, @0x0000000003264780, libserver.so)
// calls: CUtlTokenizer::PeekAtomicToken, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveMultipleFromHead
// callers: CLoadKV3FromDynData::ReadHeader, CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadObjectReference, CLoadKV3FromDynData::ReadValue, CLoadKV3FromDynData::ReadObject, CLoadKV3FromDynData::ReadCompoundValue, CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadBinaryBlobValue, CLoadKV3FromText::ReadTable, CLoadKV3FromText::ReadArrayValue, CUtlTokenizer::ConsumeUntilAtomic
bool __fastcall CUtlTokenizer::ConsumeAtomicToken(
        CUtlTokenizer *const this,
        const char *pExpectedString,
        bool bCaseSensitive)
{
  bool result; // al
  CUtlTokenReference *m_pMemory; // rdx
  bool v6; // [rsp+Ch] [rbp-14h]

  result = CUtlTokenizer::PeekAtomicToken(this, 0, pExpectedString, bCaseSensitive);
  if ( result )
  {
    m_pMemory = this->m_LookaheadTokens.m_Memory.m_pMemory;
    v6 = result;
    *&this->m_LastConsumedToken.m_nStartingLineNumber = *&m_pMemory->m_nStartingLineNumber;
    this->m_LastConsumedToken.m_pLocalStrCopy = m_pMemory->m_pLocalStrCopy;
    this->m_LastConsumedToken.m_pStart = m_pMemory->m_pStart;
    this->m_LastConsumedToken.m_pEnd = m_pMemory->m_pEnd;
    this->m_LastConsumedToken.m_nTokenNumber = m_pMemory->m_nTokenNumber;
    CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveMultipleFromHead(
      &this->m_LookaheadTokens,
      1);
    return v6;
  }
  return result;
}


// CUtlTokenizer::ConsumeUntilAtomic  (line 630, @0x0000000003264930, libserver.so)
// calls: CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenizer::PeekAtomicToken, CUtlTokenizer::ConsumeAtomicToken
bool __fastcall CUtlTokenizer::ConsumeUntilAtomic(
        CUtlTokenizer *const this,
        const char *pExpectedString,
        bool bCaseSensitive)
{
  do
  {
    if ( CUtlTokenizer::PeekAtomicToken(this, 0, pExpectedString, bCaseSensitive) )
      return CUtlTokenizer::ConsumeAtomicToken(this, pExpectedString, bCaseSensitive);
  }
  while ( CUtlTokenizer::ConsumeArbitraryToken(this, 0) );
  return 0;
}


// CUtlTokenizer::ReadUpThroughToken  (line 644, @0x00000000032644f0, libserver.so)  // inlines: EnsureCapacity, memcpy
// calls: CUtlTokenizer::ReadToken, memcpy
// callers: CUtlTokenizer::PeekIdentifier, CUtlTokenizer::PeekAtomicToken, CUtlTokenizer::PeekToken, CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenizer::AnyTokensRemaining
bool __fastcall CUtlTokenizer::ReadUpThroughToken(CUtlTokenizer *const this, int nTokenIndex)
{
  int v2; // r13d
  int v4; // r13d
  int v5; // ebx
  bool result; // al
  uint32 m_nGrowSize; // eax
  CUtlTokenReference *v8; // rsi
  CUtlTokenReference *m_pMemory; // rbx
  CUtlTokenReference *v10; // rax

  v2 = nTokenIndex + 1;
  if ( nTokenIndex + 1 > this->m_LookaheadTokens.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_LookaheadTokens.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_LookaheadTokens.m_Memory.m_pMemory;
        v10 = (**g_pMemAlloc)(g_pMemAlloc, 40LL * v2);
        this->m_LookaheadTokens.m_Memory.m_pMemory = v10;
        if ( m_pMemory != 0 )
          memcpy(v10, m_pMemory, 40LL * this->m_LookaheadTokens.m_Memory.m_nAllocationCount);
        this->m_LookaheadTokens.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v8 = this->m_LookaheadTokens.m_Memory.m_pMemory;
        if ( v8 != 0 )
          this->m_LookaheadTokens.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v8, 40LL * v2);
        else
          this->m_LookaheadTokens.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 40LL * v2);
      }
      this->m_LookaheadTokens.m_Memory.m_nAllocationCount = v2;
    }
  }
  v4 = v2 - this->m_LookaheadTokens.m_Size;
  v5 = 0;
  if ( v4 <= 0 )
    return 1;
  while ( 1 )
  {
    result = CUtlTokenizer::ReadToken(this);
    if ( !result )
      break;
    if ( ++v5 == v4 )
      return 1;
  }
  return result;
}


// CUtlTokenizer::ReadToken  (line 662, @0x0000000003264370, libserver.so)  // inlines: AddToTail, CUtlTokenReference, Construct<CUtlTokenReference>, Element, GrowMemory, Init, operator[]
// calls: CUtlTokenizer::ReadTokenChars, Plat_IsInDebugSessionRaw, CUtlMemory<CUtlTokenReference, int>::Grow
// callers: CUtlTokenizer::ReadUpThroughToken
// globals: CUtlTokenizer::ReadToken(void)::s_nTokens
bool __fastcall CUtlTokenizer::ReadToken(CUtlTokenizer *const this)
{
  bool result; // al
  __int64 m_Size; // r12
  int v4; // edx
  CUtlTokenReference *v5; // rdx
  CUtlTokenReference *v6; // rbx
  int v7; // r12d
  const char *v8; // r13
  const char *v9; // r14
  int v10; // r15d
  int v11; // edx
  bool v12; // [rsp+Ch] [rbp-54h]
  bool v13; // [rsp+Ch] [rbp-54h]
  bool bStringTokenContainsLineContinuations; // [rsp+1Bh] [rbp-45h] BYREF
  int nStartingLine; // [rsp+1Ch] [rbp-44h] BYREF
  const char *pStart; // [rsp+20h] [rbp-40h] BYREF
  const char *pEnd; // [rsp+28h] [rbp-38h] BYREF

  pStart = 0;
  pEnd = 0;
  if ( CUtlTokenizer::ReadToken(void)::s_nTokens == -1 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  bStringTokenContainsLineContinuations = 0;
  result = CUtlTokenizer::ReadTokenChars(this, &pStart, &pEnd, &bStringTokenContainsLineContinuations, &nStartingLine);
  if ( result )
  {
    m_Size = this->m_LookaheadTokens.m_Size;
    v4 = this->m_LookaheadTokens.m_Size;
    if ( m_Size == this->m_LookaheadTokens.m_Memory.m_nAllocationCount )
    {
      v13 = result;
      CUtlMemory<CUtlTokenReference,int>::Grow(&this->m_LookaheadTokens.m_Memory, 1);
      v4 = this->m_LookaheadTokens.m_Size;
      result = v13;
    }
    this->m_LookaheadTokens.m_Size = v4 + 1;
    v5 = &this->m_LookaheadTokens.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
    {
      v5->m_pLocalStrCopy = 0;
      v5->m_pStart = 0;
      v5->m_pEnd = 0;
      v5->m_nTokenNumber = -1;
      v5->m_nStartingLineNumber = 0;
      v6 = &this->m_LookaheadTokens.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v6 = 0;
    }
    v7 = CUtlTokenizer::ReadToken(void)::s_nTokens;
    v8 = pEnd;
    v9 = pStart;
    v10 = nStartingLine;
    v11 = CUtlTokenizer::ReadToken(void)::s_nTokens;
    if ( v6->m_pLocalStrCopy != 0 )
    {
      v12 = result;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v11 = CUtlTokenizer::ReadToken(void)::s_nTokens;
      result = v12;
    }
    v6->m_nStartingLineNumber = v10;
    v6->m_pLocalStrCopy = 0;
    v6->m_pStart = v9;
    v6->m_pEnd = v8;
    v6->m_nTokenNumber = v7;
    CUtlTokenizer::ReadToken(void)::s_nTokens = v11 + 1;
  }
  return result;
}


// EatWhiteSpaceCountingLines  (line 695, @0x0000000003263590, libserver.so)  // inlines: AtEndOfBuffer, GetChar, GetTypeBin<char>, PeekGet, operator[]
// calls: CUtlBuffer::PeekGet, CUtlBuffer::CheckGet
// callers: CUtlTokenizer::ReadTokenChars
int __fastcall EatWhiteSpaceCountingLines(CUtlBuffer *pBuffer)
{
  int v1; // r12d
  int m_Get; // edx
  char *v4; // rax
  unsigned int v5; // ecx
  bool v6; // al
  unsigned __int8 v7; // al

  v1 = 0;
  m_Get = pBuffer->m_Get;
  while ( pBuffer->m_nMaxPut != m_Get )
  {
    if ( pBuffer->m_Memory.m_pMemory[m_Get - pBuffer->m_nOffset] == 0 )
      break;
    v4 = CUtlBuffer::PeekGet(pBuffer, 1, 0);
    if ( v4 == 0 )
      break;
    v5 = *v4 - 9;
    if ( v5 > 0x17 || ((1LL << v5) & 0x80001F) == 0 )
      break;
    v6 = CUtlBuffer::CheckGet(pBuffer, 1);
    m_Get = pBuffer->m_Get;
    if ( !v6 )
      continue;
    ++m_Get;
    v7 = pBuffer->m_Memory.m_pMemory[pBuffer->m_Get - pBuffer->m_nOffset];
    pBuffer->m_Get = m_Get;
    v1 += v7 == 10;
  }
  return v1;
}


// ConsumeMultilineStringDelimiter  (line 719, @0x0000000003263640, libserver.so)  // inlines: V_strlen, V_strncmp<int>
// calls: strlen, CUtlBuffer::PeekGet, _V_strncmp, CUtlBuffer::SeekGet
// callers: CUtlTokenizer::ReadTokenChars
bool __fastcall ConsumeMultilineStringDelimiter(
        CUtlBuffer *pBuffer,
        const char *pExpected,
        const char *pExpectedCR,
        int *pInOutLineNumber)
{
  int v7; // r15d
  int v8; // ebx
  const char *v9; // rax
  bool v10; // r9
  const char *v11; // rcx
  const char *v12; // rdi
  int v13; // eax
  int v14; // eax
  bool result; // al
  const char *pStrCR; // [rsp+8h] [rbp-38h]
  const char *pStrCRb; // [rsp+8h] [rbp-38h]
  bool pStrCRa; // [rsp+8h] [rbp-38h]

  if ( pExpected != 0 )
    v7 = strlen(pExpected);
  else
    v7 = 0;
  if ( pExpectedCR != 0 )
    v8 = strlen(pExpectedCR);
  else
    v8 = 0;
  pStrCR = CUtlBuffer::PeekGet(pBuffer, v7, 0);
  v9 = CUtlBuffer::PeekGet(pBuffer, v8, 0);
  v10 = 0;
  v11 = v9;
  if ( pStrCR != 0 )
  {
    v12 = pStrCR;
    pStrCRb = v9;
    v13 = _V_strncmp(v12, pExpected, v7);
    v11 = pStrCRb;
    v10 = v13 == 0;
  }
  if ( v11 != 0 )
  {
    pStrCRa = v10;
    v14 = _V_strncmp(v11, pExpectedCR, v8);
    v10 = pStrCRa;
    if ( v14 == 0 )
    {
      if ( !pStrCRa )
      {
LABEL_10:
        CUtlBuffer::SeekGet(pBuffer, CUtlBuffer::SeekType_t::SEEK_CURRENT, v8);
        ++*pInOutLineNumber;
        return 1;
      }
LABEL_13:
      v8 = v7;
      goto LABEL_10;
    }
  }
  result = 0;
  if ( v10 )
    goto LABEL_13;
  return result;
}


// CUtlTokenizer::ReadTokenChars  (line 743, @0x0000000003263ce0, libserver.so)  // inlines: AddToTail, AtEndOfBuffer, CUtlString, Construct<TokenWarning_t>, Element, GetBytesRemaining, GetChar, GetTypeBin<char>, GrowMemory, IsDelimiter, PeekGet, TokenWarning_t, operator[]
// calls: CUtlBuffer::EatCComment, EatWhiteSpaceCountingLines, CUtlBuffer::EatCPPComment, CUtlBuffer::PeekGet, CUtlBuffer::CheckGet, CUtlBuffer::SeekGet, CUtlString::operator=, ConsumeMultilineStringDelimiter, CUtlMemory<TokenWarning_t, int>::Grow
// callers: CUtlTokenizer::ReadToken
// strings: "Newline in string literal", "\"\"\"\r\n", "\"\"\"\n", "\r\n\"\"\""
bool __fastcall CUtlTokenizer::ReadTokenChars(
        CUtlTokenizer *const this,
        const char **pOutStart,
        const char **pOutEnd,
        bool *pOutContainsLineContinuation,
        int *pOutStartingLine)
{
  CUtlBuffer *m_pSrcBuffer; // rdi
  int m_Get; // eax
  bool v11; // zf
  CUtlBuffer *v12; // rdi
  int v13; // eax
  bool v14; // r13
  int v16; // eax
  const char *v17; // rax
  CUtlBuffer *v18; // r15
  bool v19; // r14
  int v20; // edx
  char v21; // cl
  bool v22; // r13
  CUtlBuffer *v23; // rdx
  int m_nMaxPut; // r11d
  int v25; // eax
  int m_nOffset; // edi
  unsigned __int8 *m_pMemory; // rsi
  CUtlVectorBase<TokenWarning_t,CUtlMemory<TokenWarning_t,int> >::CAllocator *p_m_Memory; // rcx
  CUtlTokenizer *v29; // r13
  char v30; // r15
  char v31; // r14
  CUtlBuffer *v32; // rbx
  int v33; // r12d
  const char *v34; // rsi
  int v35; // edi
  CUtlBuffer *v36; // rdx
  int v37; // edx
  int v38; // eax
  char v39; // dl
  bool v40; // bl
  bool v41; // r9
  bool v42; // si
  bool m_bWhiteSpaceIsDelimiter; // al
  CUtlBuffer *v44; // r12
  char i; // r13
  bool v46; // al
  char v47; // dl
  int v48; // edx
  int v49; // eax
  __int64 v50; // rax
  unsigned __int8 *v51; // rcx
  int m_Size; // r15d
  int v53; // eax
  TokenWarning_t *v54; // rsi
  __int64 v55; // rdi
  bool v56; // al
  CUtlBuffer *v57; // r15
  bool v58; // cl
  int v59; // eax
  int v60; // edx
  unsigned __int8 v61; // al
  bool v62; // al
  bool v63; // [rsp+8h] [rbp-68h]
  char v64; // [rsp+Ch] [rbp-64h]
  CUtlMemory<TokenWarning_t,int> *v65; // [rsp+10h] [rbp-60h]
  bool *pOutContainsLineContinuationa; // [rsp+18h] [rbp-58h]
  char bWarnedForNewlineInStringLiteral; // [rsp+20h] [rbp-50h]
  char bWarnedForNewlineInStringLiterala; // [rsp+20h] [rbp-50h]
  bool v69; // [rsp+26h] [rbp-4Ah]
  char nQuoteType; // [rsp+27h] [rbp-49h]
  int nSkippedCLines[13]; // [rsp+3Ch] [rbp-34h] BYREF

  m_pSrcBuffer = this->m_pSrcBuffer;
  m_Get = m_pSrcBuffer->m_Get;
  if ( m_pSrcBuffer->m_nMaxPut == m_Get || m_pSrcBuffer->m_Memory.m_pMemory[m_Get - m_pSrcBuffer->m_nOffset] == 0 )
    return 0;
  if ( this->m_bSkipWhitespace )
    goto LABEL_14;
  while ( 1 )
  {
    v11 = !this->m_bSkipComments;
    nSkippedCLines[0] = 0;
    if ( v11 )
      break;
    if ( CUtlBuffer::EatCComment(this->m_pSrcBuffer, nSkippedCLines) )
    {
      this->m_nLineNumberAfterLookaheadTokens += nSkippedCLines[0];
    }
    else
    {
      if ( !this->m_bSkipComments || !CUtlBuffer::EatCPPComment(this->m_pSrcBuffer) )
        break;
      ++this->m_nLineNumberAfterLookaheadTokens;
    }
    m_pSrcBuffer = this->m_pSrcBuffer;
    v16 = m_pSrcBuffer->m_Get;
    if ( m_pSrcBuffer->m_nMaxPut == v16 || m_pSrcBuffer->m_Memory.m_pMemory[v16 - m_pSrcBuffer->m_nOffset] == 0 )
      return 0;
    if ( this->m_bSkipWhitespace )
LABEL_14:
      this->m_nLineNumberAfterLookaheadTokens += EatWhiteSpaceCountingLines(m_pSrcBuffer);
  }
  *pOutStartingLine = this->m_nLineNumberAfterLookaheadTokens;
  v12 = this->m_pSrcBuffer;
  v13 = v12->m_Get;
  if ( v12->m_nMaxPut == v13 )
    return 0;
  if ( v12->m_Memory.m_pMemory[v13 - v12->m_nOffset] == 0 )
    return 0;
  v17 = CUtlBuffer::PeekGet(v12, 1, 0);
  *pOutStart = v17;
  if ( v17 == 0 )
    return 0;
  v18 = this->m_pSrcBuffer;
  v19 = CUtlBuffer::CheckGet(v18, 1);
  if ( !v19 )
    return 0;
  v20 = v18->m_Get;
  v21 = v18->m_Memory.m_pMemory[v20 - v18->m_nOffset];
  v18->m_Get = v20 + 1;
  nQuoteType = v21;
  if ( v21 == 0 )
    return 0;
  if ( this->m_bParseStringsAsAtomicTokens )
  {
    v22 = v21 == 34 || v21 == 39;
    if ( v22 )
    {
      if ( v21 == 34
        && ConsumeMultilineStringDelimiter(
             this->m_pSrcBuffer,
             "\"\"\n",
             "\"\"\r\n",
             &this->m_nLineNumberAfterLookaheadTokens) )
      {
        v56 = ConsumeMultilineStringDelimiter(
                this->m_pSrcBuffer,
                "\"\"\"\n",
                "\"\"\"\r\n",
                &this->m_nLineNumberAfterLookaheadTokens);
        if ( v56 )
        {
          v14 = v56;
          *pOutEnd = &this->m_pSrcBuffer->m_Memory.m_pMemory[this->m_pSrcBuffer->m_Get
                                                           - this->m_pSrcBuffer->m_nOffset
                                                           - 1];
          return v14;
        }
        v23 = this->m_pSrcBuffer;
        m_nMaxPut = v23->m_nMaxPut;
        v57 = v23;
        v25 = v23->m_Get;
        if ( m_nMaxPut == v25 )
        {
          m_nOffset = v23->m_nOffset;
          m_pMemory = v23->m_Memory.m_pMemory;
LABEL_93:
          v25 = m_nMaxPut;
        }
        else
        {
          m_nOffset = v23->m_nOffset;
          m_pMemory = v23->m_Memory.m_pMemory;
          if ( v23->m_Memory.m_pMemory[v25 - m_nOffset] != 0 )
          {
            v58 = 0;
            do
            {
              if ( !v58 )
              {
                v62 = ConsumeMultilineStringDelimiter(
                        v57,
                        "\n\"\"\"",
                        "\r\n\"\"\"",
                        &this->m_nLineNumberAfterLookaheadTokens);
                if ( v62 )
                {
                  v14 = v62;
                  *pOutEnd = &this->m_pSrcBuffer->m_Memory.m_pMemory[this->m_pSrcBuffer->m_Get
                                                                   - this->m_pSrcBuffer->m_nOffset];
                  return v14;
                }
                v57 = this->m_pSrcBuffer;
              }
              if ( !CUtlBuffer::CheckGet(v57, 1) )
                return 0;
              v59 = v57->m_Get;
              v60 = v59 + 1;
              v61 = v57->m_Memory.m_pMemory[v59 - v57->m_nOffset];
              v57->m_Get = v60;
              if ( v61 == 10 )
              {
                ++this->m_nLineNumberAfterLookaheadTokens;
                v58 = 0;
              }
              else
              {
                if ( v61 == 0 )
                  return 0;
                v58 = v61 == 92;
              }
              v23 = this->m_pSrcBuffer;
              m_nMaxPut = v23->m_nMaxPut;
              v57 = v23;
              v25 = v23->m_Get;
              m_nOffset = v23->m_nOffset;
              m_pMemory = v23->m_Memory.m_pMemory;
              if ( m_nMaxPut == v25 )
                goto LABEL_93;
            }
            while ( m_pMemory[v25 - m_nOffset] != 0 );
          }
        }
      }
      else
      {
        v23 = this->m_pSrcBuffer;
        m_nMaxPut = v23->m_nMaxPut;
        v25 = v23->m_Get;
        m_nOffset = v23->m_nOffset;
        m_pMemory = v23->m_Memory.m_pMemory;
      }
      p_m_Memory = &this->m_Warnings.m_Memory;
      v69 = v22;
      pOutContainsLineContinuationa = pOutContainsLineContinuation;
      v29 = this;
      v30 = 0;
      v31 = 0;
      bWarnedForNewlineInStringLiteral = 0;
      v32 = v23;
      v65 = p_m_Memory;
      v33 = 0;
      while ( 1 )
      {
        if ( m_nMaxPut == v25 )
        {
          v14 = v69;
          v34 = &m_pMemory[m_nMaxPut - m_nOffset];
          goto LABEL_69;
        }
        v34 = &m_pMemory[v25 - m_nOffset];
        if ( *v34 == 0 )
          break;
        if ( !CUtlBuffer::CheckGet(v32, 1)
          || (v37 = v32->m_Get,
              v38 = v37 + 1,
              LOBYTE(v35) = v31 == 92,
              v33 = v35 & (v33 ^ 1),
              v39 = v32->m_Memory.m_pMemory[v37 - v32->m_nOffset],
              v32->m_Get = v38,
              ((v33 ^ 1) & (nQuoteType == v39)) != 0)
          || v39 == 0 )
        {
          v36 = v29->m_pSrcBuffer;
          v14 = v69;
          *pOutEnd = &v36->m_Memory.m_pMemory[v36->m_Get - v36->m_nOffset];
          return v14;
        }
        v40 = v39 == 10;
        v41 = v31 == 13;
        if ( v31 != 13 || (v42 = v39 == 10, v30 != 92) )
          v42 = 0;
        if ( v39 == 10 || v39 == 13 )
        {
          if ( (v40 || v39 == 13) && v31 == 92 || v42 )
          {
            *pOutContainsLineContinuationa = 1;
          }
          else if ( bWarnedForNewlineInStringLiteral == 0 )
          {
            m_Size = v29->m_Warnings.m_Size;
            v53 = m_Size;
            if ( m_Size == v29->m_Warnings.m_Memory.m_nAllocationCount )
            {
              bWarnedForNewlineInStringLiterala = v39;
              CUtlMemory<TokenWarning_t,int>::Grow(v65, 1);
              v53 = v29->m_Warnings.m_Size;
              v41 = v31 == 13;
              v39 = bWarnedForNewlineInStringLiterala;
            }
            v29->m_Warnings.m_Size = v53 + 1;
            v54 = &v29->m_Warnings.m_Memory.m_pMemory[m_Size];
            if ( v54 != 0 )
            {
              v54->m_WarningText.m_pString = 0;
              v55 = &v29->m_Warnings.m_Memory.m_pMemory[m_Size];
            }
            else
            {
              v55 = 0;
            }
            v63 = v41;
            v64 = v39;
            *(v55 + 8) = v29->m_nLineNumberAfterLookaheadTokens;
            CUtlString::operator=(v55, "Newline in string literal");
            bWarnedForNewlineInStringLiteral = 1;
            v41 = v63;
            v39 = v64;
          }
          if ( (!v41 || !v40) && v39 == 13 )
            v39 = 13;
          else
            ++v29->m_nLineNumberAfterLookaheadTokens;
        }
        v32 = v29->m_pSrcBuffer;
        v30 = v31;
        v31 = v39;
        m_nMaxPut = v32->m_nMaxPut;
        v25 = v32->m_Get;
        m_nOffset = v32->m_nOffset;
        m_pMemory = v32->m_Memory.m_pMemory;
      }
      v14 = v69;
LABEL_69:
      *pOutEnd = v34;
      return v14;
    }
    m_bWhiteSpaceIsDelimiter = this->m_bWhiteSpaceIsDelimiter;
  }
  else
  {
    m_bWhiteSpaceIsDelimiter = this->m_bWhiteSpaceIsDelimiter;
    if ( v21 == 39 || v21 == 34 )
      goto LABEL_48;
  }
  if ( this->m_TokenDelimiters.set[v21] != 0 || m_bWhiteSpaceIsDelimiter && v21 <= 32 )
  {
LABEL_48:
    v14 = v19;
    *pOutEnd = &this->m_pSrcBuffer->m_Memory.m_pMemory[this->m_pSrcBuffer->m_Get - this->m_pSrcBuffer->m_nOffset];
    return v14;
  }
  v44 = this->m_pSrcBuffer;
  for ( i = 0; ; i = v47 )
  {
    v46 = CUtlBuffer::CheckGet(v44, 1);
    v47 = 0;
    if ( v46 )
    {
      v48 = v44->m_Get;
      v49 = v48 + 1;
      v47 = v44->m_Memory.m_pMemory[v48 - v44->m_nOffset];
      v44->m_Get = v49;
    }
    if ( i != 92 && (v47 == 39 || v47 == 34)
      || this->m_TokenDelimiters.set[v47] != 0
      || v47 <= 32 && this->m_bWhiteSpaceIsDelimiter )
    {
      CUtlBuffer::SeekGet(this->m_pSrcBuffer, CUtlBuffer::SeekType_t::SEEK_CURRENT, -1);
      goto LABEL_48;
    }
    v44 = this->m_pSrcBuffer;
    v50 = v44->m_Get;
    v51 = v44->m_Memory.m_pMemory;
    if ( v44->m_nMaxPut == v50 || v51[v50 - v44->m_nOffset] == 0 )
      break;
  }
  v14 = v19;
  *pOutEnd = &v51[v50];
  return v14;
}


// CUtlTokenizer::AnyTokensRemaining  (line 924, @0x00000000032649a0, libserver.so)
// calls: CUtlTokenizer::ReadUpThroughToken
// callers: CLoadKV3FromDynData::Parse
bool __fastcall CUtlTokenizer::AnyTokensRemaining(CUtlTokenizer *const this)
{
  return CUtlTokenizer::ReadUpThroughToken(this, 0);
}


// CUtlTokenizer::GetCurrentLineNumber  (line 932, @0x0000000003263750, libserver.so)  // inlines: GetLineNumber
// callers: CLoadKV3FromDynData::ReportError, CLoadKV3FromText::ReportError
int __fastcall CUtlTokenizer::GetCurrentLineNumber(CUtlTokenizer *const this)
{
  if ( this->m_LookaheadTokens.m_Size != 0 )
    return this->m_LookaheadTokens.m_Memory.m_pMemory->m_nStartingLineNumber;
  else
    return this->m_nLineNumberAfterLookaheadTokens;
}


// CUtlTokenizer::HasWarnings  (line 947, @0x0000000003263780, libserver.so)
bool __fastcall CUtlTokenizer::HasWarnings(const CUtlTokenizer *const this)
{
  return this->m_Warnings.m_Size > 0;
}


// CUtlTokenizer::GetWarningCount  (line 955, @0x00000000032637a0, libserver.so)
int __fastcall CUtlTokenizer::GetWarningCount(const CUtlTokenizer *const this)
{
  return this->m_Warnings.m_Size > 0;
}


// CUtlTokenizer::GetWarning  (line 963, @0x00000000032637c0, libserver.so)  // inlines: operator[]
const TokenWarning_t *__fastcall CUtlTokenizer::GetWarning(const CUtlTokenizer *const this, int nIndex)
{
  return &this->m_Warnings.m_Memory.m_pMemory[nIndex];
}


// CUtlTokenizer::IsDelimiterOrWhitespace  (line 969, @0x00000000032637e0, libserver.so)
bool __fastcall CUtlTokenizer::IsDelimiterOrWhitespace(
        const CUtlTokenizer *const this,
        const CUtlTokenReference *const token)
{
  const char *m_pStart; // rax
  const char *m_pEnd; // rcx
  __int64 v4; // rdx

  m_pStart = token->m_pStart;
  m_pEnd = token->m_pEnd;
  if ( m_pStart >= m_pEnd )
    return 1;
  while ( 1 )
  {
    v4 = *m_pStart;
    if ( v4 > 32 && this->m_TokenDelimiters.set[v4] == 0 )
      break;
    if ( ++m_pStart == m_pEnd )
      return 1;
  }
  return 0;
}


// CUtlTokenizer::GetLastConsumedToken  (line 988, @0x0000000003263830, libserver.so)  // inlines: IsValid, MakeInvalid
bool __fastcall CUtlTokenizer::GetLastConsumedToken(CUtlTokenizer *const this, CUtlTokenReference *pOutToken)
{
  const char *m_pStart; // rax
  const char *m_pEnd; // rdx
  bool result; // al

  m_pStart = this->m_LastConsumedToken.m_pStart;
  if ( m_pStart != 0 && (m_pEnd = this->m_LastConsumedToken.m_pEnd) != 0 && m_pStart != m_pEnd )
  {
    result = 1;
    if ( pOutToken != 0 )
    {
      *pOutToken = this->m_LastConsumedToken;
      return 1;
    }
  }
  else if ( pOutToken != 0 )
  {
    if ( pOutToken->m_pLocalStrCopy != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    pOutToken->m_pLocalStrCopy = 0;
    pOutToken->m_pStart = 0;
    pOutToken->m_pEnd = 0;
    pOutToken->m_nTokenNumber = -1;
    pOutToken->m_nStartingLineNumber = 0;
    return 0;
  }
  else
  {
    return 0;
  }
  return result;
}


