// Reconstructed from DWARF by pahole; not original source.

// src/kv3lib/keyvalues3_textreader.cpp:24
class CLoadKV3FromText {
private:

	bool m_bLoadedOk;  // +0x0

	CLoadKV3FromText(KeyValues3 *, CUtlString *, CUtlBuffer *);
	~CLoadKV3FromText();
	bool Parse();
	bool ReadHeader();
	bool ReadTable(KeyValues3 *);
	bool ReadValue(KeyValues3 *);
	bool ReadArrayValue(KeyValues3 *);
	bool ReadBinaryBlobValue(KeyValues3 *);
	bool ReadLiteralValue(KeyValues3 *);
	void ReportError(const char *);
	void ReportErrorNoLine(const char *);

	// sizeof = 728
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_keyvalues3_textreader.cpp  (line 0, @0x0000000001a6ad60, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_keyvalues3_textreader_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// KV3Helper_HasUTF8BOM  (line 53, @0x0000000003136b40, libserver.so)
bool __fastcall KV3Helper_HasUTF8BOM(const char *pBuffer, int nLen)
{
  bool result; // al

  result = 0;
  if ( nLen > 3 && *pBuffer == -17 && pBuffer[1] == -69 )
    return pBuffer[2] == -65;
  return result;
}


// KV3Helper_IsUTF16Buffer  (line 61, @0x0000000003136b70, libserver.so)
bool __fastcall KV3Helper_IsUTF16Buffer(const char *pBuffer, int nLen)
{
  bool result; // al

  result = 0;
  if ( nLen > 2 && *pBuffer == -1 )
    return pBuffer[1] == -2;
  return result;
}


// LooksLikeKV3TextData  (line 69, @0x0000000003136ba0, libserver.so)  // inlines: KV3Helper_HasUTF8BOM, KV3Helper_IsUTF16Buffer, V_strncmp<long unsigned int>
// calls: _V_strncmp, __stack_chk_fail
// callers: IsKV3Data, LoadKV3
bool __fastcall LooksLikeKV3TextData(void *pData, int nBufLen)
{
  bool result; // al
  char KV3_TEXT_PREFIX[24]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  if ( nBufLen <= 3 )
  {
LABEL_10:
    if ( nBufLen <= 2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( *pData == 0xEF && *(pData + 1) == 0xBB && *(pData + 2) == 0xBF )
  {
    pData = pData + 3;
    nBufLen -= 3;
    goto LABEL_10;
  }
LABEL_3:
  if ( *pData == 0xFF && *(pData + 1) == 0xFE )
  {
    pData = pData + 2;
    nBufLen -= 2;
  }
LABEL_4:
  strcpy(KV3_TEXT_PREFIX, "<!-- kv3 ");
  result = 0;
  if ( nBufLen > 8 )
    return _V_strncmp(pData, KV3_TEXT_PREFIX, 9) == 0;
  return result;
}


// LoadKV3Text  (line 96, @0x0000000003137fe0, libserver.so)  // inlines: KV3Helper_HasUTF8BOM, KV3Helper_IsUTF16Buffer, Purge, Purge_FixedGrowable, V_strlen, ~CLoadKV3FromText, ~CUtlBuffer, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlTokenizer, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: strlen, CUtlBuffer::CUtlBuffer, CLoadKV3FromText::CLoadKV3FromText, CLoadKV3FromText::Parse, CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlTokenReference::~CUtlTokenReference, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveAll, CUtlMemory<CUtlTokenReference, int>::ConvertToExternalMemory, CUtlMemory<CUtlTokenReference, int>::Purge, CUtlMemory<unsigned char, int>::Purge, CUtlMemory<TokenWarning_t, int>::Purge (18 total)
// callers: LoadKV3, LoadKV3Text
bool __fastcall LoadKV3Text(KeyValues3 *pRootTarget, CUtlString *pOutErrorMessage, const char *pBuffer)
{
  const char *v3; // r14
  int v6; // eax
  int v7; // r15d
  int v8; // edx
  bool v9; // r12
  int v11; // r14d
  void *v12; // r15
  const char *v13; // [rsp+8h] [rbp-368h]
  CUtlBuffer buf; // [rsp+10h] [rbp-360h] BYREF
  CLoadKV3FromText loader; // [rsp+60h] [rbp-310h] BYREF
  unsigned __int64 v16; // [rsp+338h] [rbp-38h]

  v3 = pBuffer;
  v16 = __readfsqword(0x28u);
  if ( pBuffer != 0 )
  {
    v6 = strlen(pBuffer);
    v7 = v6;
    if ( v6 > 3 && *v3 == -17 && v3[1] == -69 && v3[2] == -65 )
    {
      v8 = v6 - 2;
      v3 += 3;
      v7 = v6 - 3;
    }
    else
    {
      v8 = v6 + 1;
    }
  }
  else
  {
    v8 = 1;
    v7 = 0;
  }
  CUtlBuffer::CUtlBuffer(&buf, v3, v8, 9);
  if ( v7 > 2 && *v3 == -1 && v3[1] == -2 )
  {
    v13 = v3 + 2;
    v11 = V_UTF16ToUTF8(v3 + 2, 0, 0, 4);
    v12 = operator new[](v11);
    V_UTF16ToUTF8(v13, v12, v11, 4);
    CUtlBuffer::AssumeMemory(&buf, v12, v11, v11, 9);
  }
  CLoadKV3FromText::CLoadKV3FromText(&loader, pRootTarget, pOutErrorMessage, &buf);
  v9 = CLoadKV3FromText::Parse(&loader);
  CUtlVectorBase<TokenWarning_t,CUtlMemory<TokenWarning_t,int>>::RemoveAll(&loader.m_Tokenizer.m_Warnings);
  if ( (loader.m_Tokenizer.m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<TokenWarning_t,int>::Purge(&loader.m_Tokenizer.m_Warnings.m_Memory);
    if ( (loader.m_Tokenizer.m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<TokenWarning_t,int>::Purge(&loader.m_Tokenizer.m_Warnings.m_Memory);
  }
  if ( loader.m_Tokenizer.m_Filename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&loader.m_Tokenizer.m_Filename);
  CUtlTokenReference::~CUtlTokenReference(&loader.m_Tokenizer.m_LastConsumedToken);
  CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveAll(&loader.m_Tokenizer.m_LookaheadTokens);
  CUtlMemory<CUtlTokenReference,int>::ConvertToExternalMemory(
    &loader.m_Tokenizer.m_LookaheadTokens.m_Memory,
    &loader.m_Tokenizer.m_LookaheadTokens.m_Memory.m_FixedMemory,
    8,
    0,
    1,
    0x3FFFFFFFu);
  if ( (loader.m_Tokenizer.m_LookaheadTokens.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlTokenReference,int>::Purge(&loader.m_Tokenizer.m_LookaheadTokens.m_Memory);
  if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v9;
}


// LoadKV3Text  (line 122, @0x0000000003138250, libserver.so)
// calls: CUtlString::operator=, LoadKV3Text
// strings: "Expected CUtlBuffer::TEXT_BUFFER for LoadKV3Text"
bool __fastcall LoadKV3Text(KeyValues3 *pRootTarget, CUtlString *pOutErrorMessage, CUtlBuffer *pBuffer)
{
  if ( (pBuffer->m_Flags & 1) != 0 )
    return LoadKV3Text(pRootTarget, pOutErrorMessage, pBuffer->m_Memory.m_pMemory);
  if ( pOutErrorMessage != 0 )
    CUtlString::operator=(pOutErrorMessage, "Expected CUtlBuffer::TEXT_BUFFER for LoadKV3Text");
  return 0;
}


// CLoadKV3FromText::CLoadKV3FromText  (line 154, @0x0000000003137e90, libserver.so)
// calls: CUtlTokenizer::CUtlTokenizer, CUtlTokenizer::SetTokenDelimiters, CUtlTokenizer::~CUtlTokenizer, _Unwind_Resume
// callers: LoadKV3Text
// strings: "(None)", "{}[]=, \t\n'\":+;"
void __fastcall CLoadKV3FromText::CLoadKV3FromText(
        CLoadKV3FromText *const this,
        KeyValues3 *pRootTarget,
        CUtlString *pOutErrorMessage,
        CUtlBuffer *pSrcBuffer)
{
  CUtlTokenizer *p_m_Tokenizer; // r12

  p_m_Tokenizer = &this->m_Tokenizer;
  CUtlTokenizer::CUtlTokenizer(&this->m_Tokenizer, pSrcBuffer, "(None)");
  CUtlTokenizer::SetTokenDelimiters(p_m_Tokenizer, "{}[]=, \t\n'\":+;");
  this->m_pRootTarget = pRootTarget;
  this->m_pOutErrorMessage = pOutErrorMessage;
  this->m_pSrcBuffer = pSrcBuffer;
  this->m_bLoadedOk = 1;
}


// CLoadKV3FromText::~CLoadKV3FromText  (line 167, @0x0000000003137f10, libserver.so)  // inlines: Purge, Purge_FixedGrowable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlTokenizer, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlTokenReference::~CUtlTokenReference, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveAll, CUtlMemory<CUtlTokenReference, int>::ConvertToExternalMemory, CUtlMemory<TokenWarning_t, int>::Purge, CUtlMemory<CUtlTokenReference, int>::Purge
void __fastcall CLoadKV3FromText::~CLoadKV3FromText(CLoadKV3FromText *const this)
{
  CUtlVectorBase<TokenWarning_t,CUtlMemory<TokenWarning_t,int>>::RemoveAll(&this->m_Tokenizer.m_Warnings);
  if ( (this->m_Tokenizer.m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<TokenWarning_t,int>::Purge(&this->m_Tokenizer.m_Warnings.m_Memory);
    if ( (this->m_Tokenizer.m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<TokenWarning_t,int>::Purge(&this->m_Tokenizer.m_Warnings.m_Memory);
  }
  if ( this->m_Tokenizer.m_Filename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Tokenizer.m_Filename);
  CUtlTokenReference::~CUtlTokenReference(&this->m_Tokenizer.m_LastConsumedToken);
  CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveAll(&this->m_Tokenizer.m_LookaheadTokens);
  CUtlMemory<CUtlTokenReference,int>::ConvertToExternalMemory(
    &this->m_Tokenizer.m_LookaheadTokens.m_Memory,
    &this->m_Tokenizer.m_LookaheadTokens.m_Memory.m_FixedMemory,
    8,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_Tokenizer.m_LookaheadTokens.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlTokenReference,int>::Purge(&this->m_Tokenizer.m_LookaheadTokens.m_Memory);
}


// CLoadKV3FromText::ReportError  (line 174, @0x0000000003136cb0, libserver.so)
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::PeekToken, CUtlTokenReference::AsString, CUtlTokenizer::GetCurrentLineNumber, CFmtStrN<256, false>::CFmtStrN, CLoadKV3FromText::ReportErrorNoLine, CUtlTokenReference::~CUtlTokenReference, __stack_chk_fail, _Unwind_Resume
// callers: CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadLiteralValue, CLoadKV3FromText::ReadBinaryBlobValue, CLoadKV3FromText::ReadValue, CLoadKV3FromText::Parse, CLoadKV3FromText::ReadTable, CLoadKV3FromText::ReadArrayValue
// strings: "Line %d at \"%s\": %s", "Line %d: %s"
void __fastcall CLoadKV3FromText::ReportError(CLoadKV3FromText *const this, const char *pError)
{
  CUtlTokenizer *p_m_Tokenizer; // r13
  const char *v5; // r15
  int CurrentLineNumber; // eax
  int v7; // eax
  CUtlTokenReference nextToken; // [rsp+0h] [rbp-180h] BYREF
  CFmtStrN<256,false> v9; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v10; // [rsp+148h] [rbp-38h]

  p_m_Tokenizer = &this->m_Tokenizer;
  v10 = __readfsqword(0x28u);
  CUtlTokenReference::CUtlTokenReference(&nextToken);
  if ( CUtlTokenizer::PeekToken(p_m_Tokenizer, 0, &nextToken) )
  {
    v5 = CUtlTokenReference::AsString(&nextToken);
    CurrentLineNumber = CUtlTokenizer::GetCurrentLineNumber(p_m_Tokenizer);
    CFmtStrN<256,false>::CFmtStrN(&v9, "Line %d at \"%s\": %s", CurrentLineNumber, v5, pError);
  }
  else
  {
    v7 = CUtlTokenizer::GetCurrentLineNumber(p_m_Tokenizer);
    CFmtStrN<256,false>::CFmtStrN(&v9, "Line %d: %s", v7, pError);
  }
  CLoadKV3FromText::ReportErrorNoLine(this, v9.m_szBuf);
  CUtlTokenReference::~CUtlTokenReference(&nextToken);
}


// CLoadKV3FromText::ReportErrorNoLine  (line 190, @0x0000000003136c50, libserver.so)
// calls: Msg, CUtlString::operator+=
// callers: CLoadKV3FromText::ReportError, CLoadKV3FromText::ReadLiteralValue
// strings: "Unserialization Error: %s\n"
void __fastcall CLoadKV3FromText::ReportErrorNoLine(CLoadKV3FromText *const this, const char *pError)
{
  CUtlString *m_pOutErrorMessage; // rdi

  this->m_bLoadedOk = 0;
  Msg("Unserialization Error: %s\n", pError);
  m_pOutErrorMessage = this->m_pOutErrorMessage;
  if ( m_pOutErrorMessage != 0 )
  {
    CUtlString::operator+=(m_pOutErrorMessage, pError);
    CUtlString::operator+=(this->m_pOutErrorMessage, "\n");
  }
}


// CLoadKV3FromText::Parse  (line 205, @0x0000000003137a00, libserver.so)
// calls: CUtlTokenizer::Rewind, CLoadKV3FromText::ReadHeader, CLoadKV3FromText::ReadValue, CLoadKV3FromText::ReportError
// callers: LoadKV3Text
// strings: "Invalid header"
bool __fastcall CLoadKV3FromText::Parse(CLoadKV3FromText *const this)
{
  bool result; // al

  CUtlTokenizer::Rewind(&this->m_Tokenizer);
  if ( CLoadKV3FromText::ReadHeader(this) )
  {
    result = CLoadKV3FromText::ReadValue(this, this->m_pRootTarget);
    if ( result )
      return this->m_bLoadedOk;
  }
  else
  {
    CLoadKV3FromText::ReportError(this, "Invalid header");
    return 0;
  }
  return result;
}


// CLoadKV3FromText::ReadHeader  (line 225, @0x0000000003136db0, libserver.so)  // inlines: Plat_CompareUUIDs, operator!=
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeAtomicToken, CLoadKV3FromText::ReportError, CUtlTokenReference::~CUtlTokenReference, CUtlTokenizer::ConsumeIdentifier, CUtlTokenizer::ConsumeArbitraryToken, __stack_chk_fail, CUtlTokenReference::AsString, Plat_UUIDFromString, V_stricmp_fast, memcmp, _Unwind_Resume
// callers: CLoadKV3FromText::Parse
// strings: "<!--", "Bad header format (expected '<!--'", "kv3", "encoding", "Bad header format (expected encoding uuid)", "Bad header format (expected 'format'" (18 total)
// globals: KV3_FORMAT_GENERIC, KV3_ENCODING_TEXT
bool __fastcall CLoadKV3FromText::ReadHeader(CLoadKV3FromText *const this)
{
  char v2; // r12
  const char *v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  CUtlTokenReference encodingName; // [rsp+20h] [rbp-120h] BYREF
  CUtlTokenReference encodingId; // [rsp+50h] [rbp-F0h] BYREF
  CUtlTokenReference formatName; // [rsp+80h] [rbp-C0h] BYREF
  CUtlTokenReference formatId; // [rsp+B0h] [rbp-90h] BYREF
  V_uuid_t encodingUuid; // [rsp+E0h] [rbp-60h] BYREF
  V_uuid_t formatUuid; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+108h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CUtlTokenReference::CUtlTokenReference(&encodingName);
  CUtlTokenReference::CUtlTokenReference(&encodingId);
  CUtlTokenReference::CUtlTokenReference(&formatName);
  CUtlTokenReference::CUtlTokenReference(&formatId);
  if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "<!--", 0) )
  {
    CLoadKV3FromText::ReportError(this, "Bad header format (expected '<!--'");
LABEL_3:
    v2 = 0;
    goto LABEL_4;
  }
  if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "kv3", 0) )
  {
    CLoadKV3FromText::ReportError(this, "Bad header format (expected 'kv3'");
    goto LABEL_3;
  }
  if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "encoding", 0) )
  {
    CLoadKV3FromText::ReportError(this, "Bad header format (expected 'encoding'");
    goto LABEL_3;
  }
  if ( CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, ":", 0) )
  {
    if ( !CUtlTokenizer::ConsumeIdentifier(&this->m_Tokenizer, &encodingName) )
    {
      CLoadKV3FromText::ReportError(this, "Bad header format (expected encoding name)");
      goto LABEL_3;
    }
    if ( CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, ":", 0) )
    {
      if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "version", 0) )
      {
LABEL_19:
        CLoadKV3FromText::ReportError(this, "Bad header format (expected 'version'");
        goto LABEL_3;
      }
      if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "{", 0)
        || !CUtlTokenizer::ConsumeArbitraryToken(&this->m_Tokenizer, &encodingId)
        || !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "}", 0) )
      {
        CLoadKV3FromText::ReportError(this, "Bad header format (expected encoding uuid)");
      }
      if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "format", 0) )
      {
        CLoadKV3FromText::ReportError(this, "Bad header format (expected 'format'");
        goto LABEL_3;
      }
      if ( CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, ":", 0) )
      {
        if ( !CUtlTokenizer::ConsumeIdentifier(&this->m_Tokenizer, &formatName) )
        {
          CLoadKV3FromText::ReportError(this, "Bad header format (expected format name)");
          goto LABEL_3;
        }
        if ( CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, ":", 0) )
        {
          if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "version", 0) )
            goto LABEL_19;
          if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "{", 0)
            || !CUtlTokenizer::ConsumeArbitraryToken(&this->m_Tokenizer, &formatId)
            || !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "}", 0) )
          {
            CLoadKV3FromText::ReportError(this, "Bad header format (expected format uuid)");
          }
          if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "-->", 0) )
          {
            CLoadKV3FromText::ReportError(this, "Bad header format");
            goto LABEL_3;
          }
          v4 = CUtlTokenReference::AsString(&encodingId);
          if ( Plat_UUIDFromString(&encodingUuid, v4) == 0
            || (v5 = CUtlTokenReference::AsString(&formatId), (v2 = Plat_UUIDFromString(&formatUuid, v5)) == 0) )
          {
            CLoadKV3FromText::ReportError(this, "Bad header format (malformed UUID)");
            goto LABEL_3;
          }
          v6 = CUtlTokenReference::AsString(&formatName);
          if ( V_stricmp_fast(v6, "generic") != 0 || memcmp(&formatUuid, &KV3_FORMAT_GENERIC, 0x10u) != 0 )
          {
            CLoadKV3FromText::ReportError(this, "Bad header (unrecognized format specifier)");
            goto LABEL_3;
          }
          v7 = CUtlTokenReference::AsString(&encodingName);
          if ( V_stricmp_fast(v7, "text") != 0 || memcmp(&encodingUuid, &KV3_ENCODING_TEXT, 0x10u) != 0 )
          {
            CLoadKV3FromText::ReportError(this, "Bad header (unrecognized encoding specifier)");
            goto LABEL_3;
          }
LABEL_4:
          CUtlTokenReference::~CUtlTokenReference(&formatId);
          CUtlTokenReference::~CUtlTokenReference(&formatName);
          CUtlTokenReference::~CUtlTokenReference(&encodingId);
          CUtlTokenReference::~CUtlTokenReference(&encodingName);
          return v2;
        }
      }
    }
  }
  CLoadKV3FromText::ReportError(this, "Bad header format (expected ':'");
  goto LABEL_3;
}


// CLoadKV3FromText::ReadTable  (line 317, @0x0000000003137a60, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlTokenizer::ConsumeAtomicToken, KeyValues3::SetToEmptyTable, CUtlTokenReference::AsUnescapedString, CUtlString::Get, KeyValues3::SetMemberToNull, CLoadKV3FromText::ReadValue, CUtlString::FreeMemoryBlock, CUtlTokenReference::~CUtlTokenReference, CUtlTokenizer::PeekAtomicToken, CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenReference::IsIdentifier (18 total)
// callers: CLoadKV3FromText::ReadValue
// strings: "Invalid member name '%s'", "Expected '{'", "Expected member name or '}'", "Expected '=' after member name '%s'", "Invalid data for member '%s'"
bool __fastcall CLoadKV3FromText::ReadTable(CLoadKV3FromText *const this, KeyValues3 *pTarget)
{
  CUtlTokenizer *p_m_Tokenizer; // r12
  bool v4; // r14
  const char *v5; // rax
  KeyValues3 *v6; // rax
  const char *v7; // rax
  const char *v9; // rax
  const char *v10; // rax
  CUtlString unescapedName; // [rsp+10h] [rbp-190h] BYREF
  CUtlTokenReference memberName; // [rsp+20h] [rbp-180h] BYREF
  CFmtStrN<256,false> v14; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+168h] [rbp-38h]

  p_m_Tokenizer = &this->m_Tokenizer;
  v15 = __readfsqword(0x28u);
  v4 = CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "{", 0);
  if ( v4 )
  {
    KeyValues3::SetToEmptyTable(pTarget);
    while ( 1 )
    {
      v4 = CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "}", 0);
      if ( v4 )
        break;
      CUtlTokenReference::CUtlTokenReference(&memberName);
      if ( !CUtlTokenizer::ConsumeArbitraryToken(p_m_Tokenizer, &memberName) )
      {
        CFmtStrN<256,false>::CFmtStrN(&v14, "Expected member name or '}'");
        goto LABEL_13;
      }
      if ( !CUtlTokenReference::IsIdentifier(&memberName, 1) && !CUtlTokenReference::IsStringLiteral(&memberName) )
      {
        v7 = CUtlTokenReference::AsString(&memberName);
        CFmtStrN<256,false>::CFmtStrN(&v14, "Invalid member name '%s'", v7);
        goto LABEL_13;
      }
      if ( !CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "=", 0) )
      {
        v9 = CUtlTokenReference::AsString(&memberName);
        CFmtStrN<256,false>::CFmtStrN(&v14, "Expected '=' after member name '%s'", v9);
LABEL_13:
        CLoadKV3FromText::ReportError(this, v14.m_szBuf);
LABEL_14:
        CUtlTokenReference::~CUtlTokenReference(&memberName);
        return v4;
      }
      unescapedName.m_pString = 0;
      CUtlTokenReference::AsUnescapedString(&memberName, &unescapedName);
      v5 = CUtlString::Get(&unescapedName);
      v6 = KeyValues3::SetMemberToNull(pTarget, v5, 0);
      if ( !CLoadKV3FromText::ReadValue(this, v6) )
      {
        v10 = CUtlTokenReference::AsString(&memberName);
        CFmtStrN<256,false>::CFmtStrN(&v14, "Invalid data for member '%s'", v10);
        CLoadKV3FromText::ReportError(this, v14.m_szBuf);
        if ( unescapedName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&unescapedName);
        goto LABEL_14;
      }
      if ( unescapedName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&unescapedName);
      CUtlTokenReference::~CUtlTokenReference(&memberName);
    }
    CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "}", 0);
  }
  else
  {
    CLoadKV3FromText::ReportError(this, "Expected '{'");
  }
  return v4;
}


// CLoadKV3FromText::ReadValue  (line 384, @0x0000000003137800, libserver.so)  // inlines: ConsumeNextToken
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeIdentifier, CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenReference::AsString, KV3FlagFromText, KeyValues3::SetFlag, CUtlTokenReference::~CUtlTokenReference, CUtlTokenizer::PeekIdentifier, CUtlTokenizer::PeekAtomicToken, CLoadKV3FromText::ReadLiteralValue, CFmtStrN<256, false>::CFmtStrN, CLoadKV3FromText::ReportError (17 total)
// callers: CLoadKV3FromText::Parse, CLoadKV3FromText::ReadTable, CLoadKV3FromText::ReadArrayValue
// strings: "Unrecognized flag name '%s'", "Expected '['"
bool __fastcall CLoadKV3FromText::ReadValue(CLoadKV3FromText *const this, KeyValues3 *pTarget)
{
  CUtlTokenizer *p_m_Tokenizer; // rbx
  const char *v5; // rax
  KeyValues3Flag_t v6; // ax
  const char *v8; // rax
  CUtlTokenReference flag_name; // [rsp+0h] [rbp-170h] BYREF
  CFmtStrN<256,false> v10; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v11; // [rsp+148h] [rbp-28h]

  p_m_Tokenizer = &this->m_Tokenizer;
  v11 = __readfsqword(0x28u);
  while ( CUtlTokenizer::PeekIdentifier(p_m_Tokenizer, 0)
       && (CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 1, "+", 0)
        || CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 1, ":", 0)) )
  {
    CUtlTokenReference::CUtlTokenReference(&flag_name);
    CUtlTokenizer::ConsumeIdentifier(p_m_Tokenizer, &flag_name);
    CUtlTokenizer::ConsumeArbitraryToken(p_m_Tokenizer, 0);
    v5 = CUtlTokenReference::AsString(&flag_name);
    v6 = KV3FlagFromText(v5);
    if ( v6 == KeyValues3Flag_t::KEYVALUES3_FLAG_NONE )
    {
      v8 = CUtlTokenReference::AsString(&flag_name);
      CFmtStrN<256,false>::CFmtStrN(&v10, "Unrecognized flag name '%s'", v8);
      CLoadKV3FromText::ReportError(this, v10.m_szBuf);
      CLoadKV3FromText::ReportError(this, "Expected '['");
      CUtlTokenReference::~CUtlTokenReference(&flag_name);
      return 0;
    }
    KeyValues3::SetFlag(pTarget, v6, 1);
    CUtlTokenReference::~CUtlTokenReference(&flag_name);
  }
  if ( CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "[", 0) )
    return CLoadKV3FromText::ReadArrayValue(this, pTarget);
  if ( CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "#", 0)
    && CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 1, "[", 0) )
  {
    return CLoadKV3FromText::ReadBinaryBlobValue(this, pTarget);
  }
  if ( CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "{", 0) )
    return CLoadKV3FromText::ReadTable(this, pTarget);
  return CLoadKV3FromText::ReadLiteralValue(this, pTarget);
}


// CLoadKV3FromText::ReadArrayValue  (line 432, @0x0000000003137d00, libserver.so)
// calls: CUtlTokenizer::ConsumeAtomicToken, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, CLoadKV3FromText::ReadValue, CUtlTokenizer::PeekAtomicToken, CFmtStrN<256, false>::CFmtStrN, CLoadKV3FromText::ReportError, __stack_chk_fail
// callers: CLoadKV3FromText::ReadValue
// strings: "Expected ',' or '%s'", "Expected '['", "Expected value or ']'"
bool __fastcall CLoadKV3FromText::ReadArrayValue(CLoadKV3FromText *const this, KeyValues3 *arrayTarget)
{
  CUtlTokenizer *p_m_Tokenizer; // r13
  int v5; // ebx
  bool v6; // cl
  KeyValues3 *ArrayElement; // rax
  CFmtStrN<256,false> v9; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v10; // [rsp+128h] [rbp-38h]

  p_m_Tokenizer = &this->m_Tokenizer;
  v10 = __readfsqword(0x28u);
  if ( CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "[", 0) )
  {
    v5 = 0;
    KeyValues3::SetArrayElementCount(arrayTarget, 0);
    while ( 1 )
    {
      v6 = CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "]", 0);
      if ( v6 )
        break;
      KeyValues3::SetArrayElementCount(arrayTarget, v5 + 1);
      ArrayElement = KeyValues3::GetArrayElement(arrayTarget, v5);
      if ( !CLoadKV3FromText::ReadValue(this, ArrayElement) )
      {
        CLoadKV3FromText::ReportError(this, "Expected value or ']'");
        return 0;
      }
      if ( !CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, ",", 0)
        && !CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "]", 0) )
      {
        CFmtStrN<256,false>::CFmtStrN(&v9, "Expected ',' or '%s'", "]");
        CLoadKV3FromText::ReportError(this, v9.m_szBuf);
        return 0;
      }
      ++v5;
    }
  }
  else
  {
    CLoadKV3FromText::ReportError(this, "Expected '['");
    return 0;
  }
  return v6;
}


// CLoadKV3FromText::ReadBinaryBlobValue  (line 541, @0x00000000031374e0, libserver.so)  // inlines: AddToTail, ByteFromToken, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<unsigned char>, GetTokenSize, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlTokenizer::ConsumeAtomicToken, CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeArbitraryToken, CLoadKV3FromText::ReportError, CUtlTokenReference::~CUtlTokenReference, CUtlMemory<unsigned char, int>::Grow, CUtlMemory<unsigned char, int>::Purge, KeyValues3::SetToBinaryBlob, __stack_chk_fail, CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CLoadKV3FromText::ReadValue
// strings: "Expected hex byte (eg. 00-FF)", "Expected '['", "Expected '#'", "Expected token"
bool __fastcall CLoadKV3FromText::ReadBinaryBlobValue(CLoadKV3FromText *const this, KeyValues3 *arrayTarget)
{
  CUtlTokenizer *p_m_Tokenizer; // r12
  bool v4; // r13
  uint32 v5; // eax
  char v7; // al
  unsigned __int8 v8; // r14
  char v9; // al
  char v10; // r14
  unsigned __int8 v11; // r14
  __int64 m_Size; // r13
  bool v13; // zf
  unsigned __int8 *v14; // r13
  CUtlTokenReference memberValue; // [rsp+20h] [rbp-480h] BYREF
  CUtlVectorFixedGrowable<unsigned char,1024ul> byteArr; // [rsp+50h] [rbp-450h] BYREF
  unsigned __int64 v18; // [rsp+468h] [rbp-38h]

  p_m_Tokenizer = &this->m_Tokenizer;
  v18 = __readfsqword(0x28u);
  v4 = CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "#", 0);
  if ( v4 )
  {
    v4 = CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "[", 0);
    if ( v4 )
    {
      byteArr.m_Size = 0;
      byteArr.m_Memory.m_pMemory = byteArr.m_Memory.m_FixedMemory.m_Data;
      byteArr.m_Memory.m_nAllocationCount = 1024;
      byteArr.m_Memory.m_nGrowSize = 0x80000000;
      while ( 1 )
      {
        v4 = CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "]", 0);
        if ( v4 )
          break;
        CUtlTokenReference::CUtlTokenReference(&memberValue);
        if ( !CUtlTokenizer::ConsumeArbitraryToken(p_m_Tokenizer, &memberValue) )
        {
          CLoadKV3FromText::ReportError(this, "Expected token");
          goto LABEL_8;
        }
        if ( LODWORD(memberValue.m_pEnd) - LODWORD(memberValue.m_pStart) != 2 )
          goto LABEL_7;
        v7 = *memberValue.m_pStart;
        v8 = *memberValue.m_pStart - 48;
        if ( v8 > 9u )
        {
          v8 = v7 - 87;
          if ( (v7 - 97) > 5u )
          {
            if ( (v7 - 65) > 5u )
              goto LABEL_7;
            v8 = v7 - 55;
          }
        }
        v9 = *(memberValue.m_pStart + 1);
        v10 = 16 * v8;
        if ( (v9 - 48) <= 9u )
        {
          v11 = v9 - 48 + v10;
        }
        else if ( (v9 - 97) <= 5u )
        {
          v11 = v10 + v9 - 87;
        }
        else
        {
          if ( (v9 - 65) > 5u )
          {
LABEL_7:
            CLoadKV3FromText::ReportError(this, "Expected hex byte (eg. 00-FF)");
LABEL_8:
            CUtlTokenReference::~CUtlTokenReference(&memberValue);
            goto LABEL_9;
          }
          v11 = v10 + v9 - 55;
        }
        m_Size = byteArr.m_Size;
        if ( byteArr.m_Size == byteArr.m_Memory.m_nAllocationCount )
          CUtlMemory<unsigned char,int>::Grow(&byteArr.m_Memory, 1);
        v13 = &byteArr.m_Memory.m_pMemory[m_Size] == 0;
        v14 = &byteArr.m_Memory.m_pMemory[m_Size];
        ++byteArr.m_Size;
        if ( !v13 )
          *v14 = v11;
        CUtlTokenReference::~CUtlTokenReference(&memberValue);
      }
      KeyValues3::SetToBinaryBlob(arrayTarget, byteArr.m_Memory.m_pMemory, byteArr.m_Size);
LABEL_9:
      byteArr.m_Size = 0;
      v5 = byteArr.m_Memory.m_nGrowSize & 0xC0000000;
      if ( byteArr.m_Memory.m_nAllocationCount < 0 || byteArr.m_Memory.m_pMemory == &byteArr.m_Memory.m_FixedMemory )
      {
        if ( v5 == 0 )
          CUtlMemory<unsigned char,int>::Purge(&byteArr.m_Memory);
      }
      else if ( byteArr.m_Memory.m_pMemory != 0 && v5 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
    }
    else
    {
      CLoadKV3FromText::ReportError(this, "Expected '['");
    }
  }
  else
  {
    CLoadKV3FromText::ReportError(this, "Expected '#'");
  }
  return v4;
}


// CLoadKV3FromText::ReadLiteralValue  (line 599, @0x0000000003137250, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenReference::IsBool, CUtlTokenReference::IsEqual, KeyValues3::SetBool, CUtlTokenReference::~CUtlTokenReference, CUtlTokenReference::IsInteger, CUtlTokenReference::IsFloat, CUtlTokenReference::AsString, V_atod, KeyValues3::SetDouble, CLoadKV3FromText::ReportError (26 total)
// callers: CLoadKV3FromText::ReadValue
// strings: "true", "false", "Expected token", "Failed to assign bool literal value", "Line %d: Invalid value \"%s\""
bool __fastcall CLoadKV3FromText::ReadLiteralValue(CLoadKV3FromText *const this, KeyValues3 *pTarget)
{
  bool v4; // r12
  const char *v6; // rax
  double v7; // xmm0_8
  double v8; // xmm1_8
  const char *v9; // rax
  bool IsStringLiteral; // r15
  const char *v11; // rax
  const char *v12; // r14
  int LineNumber; // eax
  CUtlString strUnescaped; // [rsp+0h] [rbp-190h] BYREF
  CUtlTokenReference memberValue; // [rsp+10h] [rbp-180h] BYREF
  CFmtStrN<256,false> v16; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v17; // [rsp+158h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CUtlTokenReference::CUtlTokenReference(&memberValue);
  v4 = CUtlTokenizer::ConsumeArbitraryToken(&this->m_Tokenizer, &memberValue);
  if ( v4 )
  {
    if ( pTarget != 0 )
    {
      if ( CUtlTokenReference::IsBool(&memberValue) )
      {
        if ( CUtlTokenReference::IsEqual(&memberValue, "true", 0) )
        {
          KeyValues3::SetBool(pTarget, 1);
        }
        else if ( CUtlTokenReference::IsEqual(&memberValue, "false", 0) )
        {
          KeyValues3::SetBool(pTarget, 0);
        }
        else
        {
          CLoadKV3FromText::ReportError(this, "Failed to assign bool literal value");
        }
      }
      else if ( CUtlTokenReference::IsInteger(&memberValue) )
      {
        v9 = CUtlTokenReference::AsString(&memberValue);
        KeyValues3::SetIntFromString(pTarget, v9);
      }
      else if ( CUtlTokenReference::IsFloat(&memberValue) )
      {
        v6 = CUtlTokenReference::AsString(&memberValue);
        v7 = V_atod(v6);
        KeyValues3::SetDouble(pTarget, v7, v8);
      }
      else
      {
        IsStringLiteral = CUtlTokenReference::IsStringLiteral(&memberValue);
        if ( IsStringLiteral )
        {
          strUnescaped.m_pString = 0;
          CUtlTokenReference::AsUnescapedString(&memberValue, &strUnescaped);
          v11 = CUtlString::Get(&strUnescaped);
          KeyValues3::SetString(pTarget, v11);
          if ( CUtlTokenReference::IsMultiLineStringLiteral(&memberValue) )
            KeyValues3::SetFlag(pTarget, KeyValues3Flag_t::KEYVALUES3_FLAG_MULTILINE_STRING, 1);
          if ( strUnescaped.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&strUnescaped);
          v4 = IsStringLiteral;
        }
        else if ( CUtlTokenReference::IsEqual(&memberValue, "null", 0) )
        {
          KeyValues3::SetToNull(pTarget);
        }
        else
        {
          v12 = CUtlTokenReference::AsString(&memberValue);
          LineNumber = CUtlTokenReference::GetLineNumber(&memberValue);
          CFmtStrN<256,false>::CFmtStrN(&v16, "Line %d: Invalid value \"%s\"", LineNumber, v12);
          CLoadKV3FromText::ReportErrorNoLine(this, v16.m_szBuf);
          v4 = 0;
        }
      }
    }
  }
  else
  {
    CLoadKV3FromText::ReportError(this, "Expected token");
  }
  CUtlTokenReference::~CUtlTokenReference(&memberValue);
  return v4;
}


