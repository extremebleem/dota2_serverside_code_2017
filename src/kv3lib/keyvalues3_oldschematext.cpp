// Reconstructed from DWARF by pahole; not original source.

// src/kv3lib/keyvalues3_oldschematext.cpp:27
class CLoadKV3FromDynData {
	struct LoadedObject_t {
		bool m_bReferenceResolved;  // +0x10
		LoadedObject_t();
		~LoadedObject_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct UnresolvedElementReference_t {
		UnresolvedElementReference_t();
		~UnresolvedElementReference_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	bool m_bLoadedOk;  // +0x0

	bool m_bReadTypes;  // +0x2c0

	CLoadKV3FromDynData(KeyValues3 *, CUtlString *, CUtlBuffer *);
	~CLoadKV3FromDynData();
	bool Parse();
	bool ReadHeader();
	bool ReadObject(KeyValues3 *, CUtlString *);
	bool HandleMember(KeyValues3 *, const char *);
	bool ReadValue(KeyValues3 *);
	bool HandleType();
	bool ReadCompoundValue(KeyValues3 *);
	bool ReadObjectReference(KeyValues3 *);
	bool ReadLiteralValue(KeyValues3 *);
	void ReportError(const char *);
	void ReportErrorNoLine(const char *);
	bool ResolveUnresolvedReferences();
	KeyValues3 * AllocTempKV3();
	void FreeAllTempKV3();

	// sizeof = 784
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_keyvalues3_oldschematext.cpp  (line 0, @0x0000000001a6ad30, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_keyvalues3_oldschematext_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// LoadKV3FromOldSchemaText  (line 80, @0x00000000031364b0, libserver.so)
// calls: CLoadKV3FromDynData::CLoadKV3FromDynData, CLoadKV3FromDynData::Parse, CLoadKV3FromDynData::~CLoadKV3FromDynData, __stack_chk_fail, _Unwind_Resume
// callers: LoadKV3
bool __fastcall LoadKV3FromOldSchemaText(KeyValues3 *pRootTarget, CUtlString *pOutErrorMessage, CUtlBuffer *pSrcBuffer)
{
  bool v3; // r12
  CLoadKV3FromDynData loader; // [rsp+0h] [rbp-330h] BYREF
  unsigned __int64 v6; // [rsp+318h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  CLoadKV3FromDynData::CLoadKV3FromDynData(&loader, pRootTarget, pOutErrorMessage, pSrcBuffer);
  v3 = CLoadKV3FromDynData::Parse(&loader);
  CLoadKV3FromDynData::~CLoadKV3FromDynData(&loader);
  return v3;
}


// CLoadKV3FromDynData::CLoadKV3FromDynData  (line 143, @0x00000000031361f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlTokenizer::CUtlTokenizer, CUtlTokenizer::SetTokenDelimiters, CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int> >::RemoveAll, CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::RemoveAll, CUtlTokenizer::~CUtlTokenizer, _Unwind_Resume, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Purge, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Purge
// callers: LoadKV3FromOldSchemaText
// strings: "(None)", "{}[]()=&, \t\n'\"*;"
void __fastcall CLoadKV3FromDynData::CLoadKV3FromDynData(
        CLoadKV3FromDynData *const this,
        KeyValues3 *pSingleRoot,
        CUtlString *pOutErrorMessage,
        CUtlBuffer *pSrcBuffer)
{
  CUtlTokenizer *p_m_Tokenizer; // r12

  p_m_Tokenizer = &this->m_Tokenizer;
  CUtlTokenizer::CUtlTokenizer(&this->m_Tokenizer, pSrcBuffer, "(None)");
  this->m_AdditionalRootObjects.m_Size = 0;
  this->m_AdditionalRootObjects.m_Memory.m_pMemory = 0;
  this->m_AdditionalRootObjects.m_Memory.m_nAllocationCount = 0;
  this->m_AdditionalRootObjects.m_Memory.m_nGrowSize = 0;
  this->m_UnresolvedElementReferences.m_Size = 0;
  this->m_UnresolvedElementReferences.m_Memory.m_pMemory = 0;
  this->m_UnresolvedElementReferences.m_Memory.m_nAllocationCount = 0;
  this->m_UnresolvedElementReferences.m_Memory.m_nGrowSize = 0;
  CUtlTokenizer::SetTokenDelimiters(p_m_Tokenizer, "{}[]()=&, \t\n'\"*;");
  this->m_pPrimaryRoot = pSingleRoot;
  this->m_pOutErrorMessage = pOutErrorMessage;
  this->m_pSrcBuffer = pSrcBuffer;
  this->m_bReadTypes = 1;
  this->m_bLoadedOk = 1;
}


// CLoadKV3FromDynData::~CLoadKV3FromDynData  (line 159, @0x0000000003136340, libserver.so)  // inlines: Purge, Purge_FixedGrowable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlTokenizer, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int> >::RemoveAll, CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::RemoveAll, CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlTokenReference::~CUtlTokenReference, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveAll, CUtlMemory<CUtlTokenReference, int>::ConvertToExternalMemory, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Purge, CUtlMemory<CUtlTokenReference, int>::Purge, CUtlMemory<TokenWarning_t, int>::Purge, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Purge
// callers: LoadKV3FromOldSchemaText
void __fastcall CLoadKV3FromDynData::~CLoadKV3FromDynData(CLoadKV3FromDynData *const this)
{
  CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t,CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t,int>>::RemoveAll(&this->m_UnresolvedElementReferences);
  if ( (this->m_UnresolvedElementReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t,int>::Purge(&this->m_UnresolvedElementReferences.m_Memory);
    if ( (this->m_UnresolvedElementReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t,int>::Purge(&this->m_UnresolvedElementReferences.m_Memory);
  }
  CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t,CUtlMemory<CLoadKV3FromDynData::LoadedObject_t,int>>::RemoveAll(&this->m_AdditionalRootObjects);
  if ( (this->m_AdditionalRootObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CLoadKV3FromDynData::LoadedObject_t,int>::Purge(&this->m_AdditionalRootObjects.m_Memory);
    if ( (this->m_AdditionalRootObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CLoadKV3FromDynData::LoadedObject_t,int>::Purge(&this->m_AdditionalRootObjects.m_Memory);
  }
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


// CLoadKV3FromDynData::ReportError  (line 167, @0x00000000031352b0, libserver.so)
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::PeekToken, CUtlTokenReference::AsString, CUtlTokenizer::GetCurrentLineNumber, CFmtStrN<256, false>::CFmtStrN, CLoadKV3FromDynData::ReportErrorNoLine, CUtlTokenReference::~CUtlTokenReference, __stack_chk_fail, _Unwind_Resume
// callers: CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromDynData::ResolveUnresolvedReferences, CLoadKV3FromDynData::ReadObjectReference, CLoadKV3FromDynData::ReadObject, CLoadKV3FromDynData::Parse, CLoadKV3FromDynData::ReadCompoundValue
// strings: "Line %d at \"%s\": %s", "Line %d: %s"
void __fastcall CLoadKV3FromDynData::ReportError(CLoadKV3FromDynData *const this, const char *pError)
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
  CLoadKV3FromDynData::ReportErrorNoLine(this, v9.m_szBuf);
  CUtlTokenReference::~CUtlTokenReference(&nextToken);
}


// CLoadKV3FromDynData::ReportErrorNoLine  (line 183, @0x0000000003134ed0, libserver.so)
// calls: Msg, CUtlString::operator+=
// callers: CLoadKV3FromDynData::ReportError, CLoadKV3FromDynData::ReadLiteralValue
// strings: "Unserialization Error: %s\n"
void __fastcall CLoadKV3FromDynData::ReportErrorNoLine(CLoadKV3FromDynData *const this, const char *pError)
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


// CLoadKV3FromDynData::Parse  (line 198, @0x0000000003135ed0, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CLoadKV3FromDynData::LoadedObject_t>, Element, GrowMemory, LoadedObject_t, operator[]
// calls: CUtlTokenizer::Rewind, CLoadKV3FromDynData::ReadHeader, CLoadKV3FromDynData::ReadObject, CUtlTokenizer::AnyTokensRemaining, CLoadKV3FromDynData::AllocTempKV3, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Grow, CLoadKV3FromDynData::ReportError, CLoadKV3FromDynData::ResolveUnresolvedReferences
// callers: LoadKV3FromOldSchemaText
// strings: "Invalid header"
bool __fastcall CLoadKV3FromDynData::Parse(CLoadKV3FromDynData *const this)
{
  CUtlTokenizer *p_m_Tokenizer; // r13
  __int64 v4; // r12
  CLoadKV3FromDynData::LoadedObject_t *v5; // rax
  CLoadKV3FromDynData::LoadedObject_t *v6; // r12
  KeyValues3 *v7; // r15
  __int64 m_Size; // r12
  int v9; // eax

  p_m_Tokenizer = &this->m_Tokenizer;
  CUtlTokenizer::Rewind(&this->m_Tokenizer);
  if ( !CLoadKV3FromDynData::ReadHeader(this) )
  {
    CLoadKV3FromDynData::ReportError(this, "Invalid header");
    return 0;
  }
  if ( !CLoadKV3FromDynData::ReadObject(this, this->m_pPrimaryRoot, 0) )
    return 0;
  if ( CUtlTokenizer::AnyTokensRemaining(p_m_Tokenizer) )
  {
    while ( CUtlTokenizer::AnyTokensRemaining(p_m_Tokenizer) )
    {
      m_Size = this->m_AdditionalRootObjects.m_Size;
      v9 = this->m_AdditionalRootObjects.m_Size;
      if ( m_Size == this->m_AdditionalRootObjects.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CLoadKV3FromDynData::LoadedObject_t,int>::Grow(&this->m_AdditionalRootObjects.m_Memory, 1);
        v9 = this->m_AdditionalRootObjects.m_Size;
      }
      v4 = m_Size;
      this->m_AdditionalRootObjects.m_Size = v9 + 1;
      v5 = &this->m_AdditionalRootObjects.m_Memory.m_pMemory[v4];
      if ( v5 != 0 )
      {
        v5->m_ObjName.m_pString = 0;
        v5->m_pObject = 0;
        v5->m_bReferenceResolved = 0;
        v6 = &this->m_AdditionalRootObjects.m_Memory.m_pMemory[v4];
      }
      else
      {
        v6 = 0;
      }
      v7 = CLoadKV3FromDynData::AllocTempKV3(this);
      if ( !CLoadKV3FromDynData::ReadObject(this, v7, &v6->m_ObjName) )
        return 0;
      v6->m_pObject = v7;
      v6->m_bReferenceResolved = 0;
    }
  }
  if ( !this->m_bLoadedOk )
    return 0;
  return CLoadKV3FromDynData::ResolveUnresolvedReferences(this);
}


// CLoadKV3FromDynData::ReadHeader  (line 241, @0x0000000003134f30, libserver.so)  // inlines: Plat_CompareUUIDs, operator!=, operator==
// calls: CUtlTokenizer::ConsumeAtomicToken, CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeIdentifier, CUtlTokenReference::~CUtlTokenReference, CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenReference::AsString, Plat_UUIDFromString, V_stricmp_fast, memcmp, __stack_chk_fail, _Unwind_Resume
// callers: CLoadKV3FromDynData::Parse
// strings: "<!--", "-->"
// globals: SCHEMA_FORMAT_GENERIC_INITIAL, SCHEMA_ENCODING_TEXT_INITIAL, SCHEMA_ENCODING_TEXT_WITH_TYPES
bool __fastcall CLoadKV3FromDynData::ReadHeader(CLoadKV3FromDynData *const this)
{
  CUtlTokenizer *p_m_Tokenizer; // rbx
  bool v3; // bl
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

  p_m_Tokenizer = &this->m_Tokenizer;
  v14 = __readfsqword(0x28u);
  if ( CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "<!--", 0)
    && CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "schema", 0) )
  {
    CUtlTokenReference::CUtlTokenReference(&encodingName);
    CUtlTokenReference::CUtlTokenReference(&encodingId);
    if ( !CUtlTokenizer::ConsumeIdentifier(p_m_Tokenizer, &encodingName)
      || !CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "{", 0)
      || !CUtlTokenizer::ConsumeArbitraryToken(p_m_Tokenizer, &encodingId)
      || !CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "}", 0) )
    {
      v3 = 0;
LABEL_7:
      CUtlTokenReference::~CUtlTokenReference(&encodingId);
      CUtlTokenReference::~CUtlTokenReference(&encodingName);
      return v3;
    }
    CUtlTokenReference::CUtlTokenReference(&formatName);
    CUtlTokenReference::CUtlTokenReference(&formatId);
    if ( CUtlTokenizer::ConsumeIdentifier(p_m_Tokenizer, &formatName)
      && CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "{", 0)
      && CUtlTokenizer::ConsumeArbitraryToken(p_m_Tokenizer, &formatId)
      && CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "}", 0) )
    {
      v5 = CUtlTokenReference::AsString(&encodingId);
      if ( Plat_UUIDFromString(&encodingUuid, v5) != 0 )
      {
        v6 = CUtlTokenReference::AsString(&formatId);
        if ( Plat_UUIDFromString(&formatUuid, v6) != 0 )
        {
          v3 = CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "-->", 0);
          if ( v3 )
          {
            v7 = CUtlTokenReference::AsString(&formatName);
            if ( V_stricmp_fast(v7, "generic") != 0 || memcmp(&formatUuid, &SCHEMA_FORMAT_GENERIC_INITIAL, 0x10u) == 0 )
            {
              if ( memcmp(&encodingUuid, &SCHEMA_ENCODING_TEXT_INITIAL, 0x10u) == 0 )
              {
                this->m_bReadTypes = 0;
                goto LABEL_13;
              }
              if ( memcmp(&encodingUuid, &SCHEMA_ENCODING_TEXT_WITH_TYPES, 0x10u) == 0 )
              {
                this->m_bReadTypes = 1;
                goto LABEL_13;
              }
            }
          }
        }
      }
    }
    v3 = 0;
LABEL_13:
    CUtlTokenReference::~CUtlTokenReference(&formatId);
    CUtlTokenReference::~CUtlTokenReference(&formatName);
    goto LABEL_7;
  }
  return 0;
}


// CLoadKV3FromDynData::ReadObject  (line 309, @0x0000000003135c00, libserver.so)
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeIdentifier, CUtlTokenizer::ConsumeAtomicToken, CLoadKV3FromDynData::ReportError, CUtlTokenReference::~CUtlTokenReference, KeyValues3::SetToEmptyTable, CUtlTokenReference::IsValid, CUtlTokenReference::AsString, CUtlString::operator=, CLoadKV3FromDynData::HandleType, CLoadKV3FromDynData::HandleMember, CUtlTokenizer::PeekAtomicToken (16 total)
// callers: CLoadKV3FromDynData::ReadValue, CLoadKV3FromDynData::Parse
// strings: "Expected '{'", "Expected <member name> after type", "Expected \"=\"after member '%s'", "Invalid data for member '%s'"
bool __fastcall CLoadKV3FromDynData::ReadObject(
        CLoadKV3FromDynData *const this,
        KeyValues3 *pTarget,
        CUtlString *pOutInstanceName)
{
  bool v6; // r14
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  CUtlTokenReference className; // [rsp+10h] [rbp-1E0h] BYREF
  CUtlTokenReference instanceName; // [rsp+40h] [rbp-1B0h] BYREF
  CUtlTokenReference memberName; // [rsp+70h] [rbp-180h] BYREF
  CFmtStrN<256,false> v16; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v17; // [rsp+1B8h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CUtlTokenReference::CUtlTokenReference(&className);
  CUtlTokenReference::CUtlTokenReference(&instanceName);
  if ( CUtlTokenizer::ConsumeIdentifier(&this->m_Tokenizer, &className) )
    CUtlTokenizer::ConsumeIdentifier(&this->m_Tokenizer, &instanceName);
  v6 = CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "{", 0);
  if ( !v6 )
  {
    CLoadKV3FromDynData::ReportError(this, "Expected '{'");
    goto LABEL_5;
  }
  KeyValues3::SetToEmptyTable(pTarget);
  if ( !CUtlTokenReference::IsValid(&className) )
  {
    if ( pOutInstanceName == 0 )
      goto LABEL_16;
    goto LABEL_8;
  }
  v10 = CUtlTokenReference::AsString(&className);
  KeyValues3::SetMemberString(pTarget, "_class", v10, 0);
  if ( pOutInstanceName != 0 )
  {
LABEL_8:
    v8 = CUtlTokenReference::AsString(&instanceName);
    CUtlString::operator=(pOutInstanceName, v8);
    goto LABEL_16;
  }
  while ( 1 )
  {
LABEL_16:
    v6 = CUtlTokenizer::PeekAtomicToken(&this->m_Tokenizer, 0, "}", 0);
    if ( v6 )
    {
      CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "}", 0);
      goto LABEL_5;
    }
    if ( this->m_bReadTypes && !CLoadKV3FromDynData::HandleType(this) )
      goto LABEL_5;
    CUtlTokenReference::CUtlTokenReference(&memberName);
    if ( !CUtlTokenizer::ConsumeIdentifier(&this->m_Tokenizer, &memberName) )
    {
      CFmtStrN<256,false>::CFmtStrN(&v16, "Expected <member name> after type");
      goto LABEL_21;
    }
    if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "=", 0) )
    {
      v11 = CUtlTokenReference::AsString(&memberName);
      CFmtStrN<256,false>::CFmtStrN(&v16, "Expected \"=\"after member '%s'", v11);
      goto LABEL_21;
    }
    v9 = CUtlTokenReference::AsString(&memberName);
    if ( !CLoadKV3FromDynData::HandleMember(this, pTarget, v9) )
      break;
    CUtlTokenReference::~CUtlTokenReference(&memberName);
  }
  v12 = CUtlTokenReference::AsString(&memberName);
  CFmtStrN<256,false>::CFmtStrN(&v16, "Invalid data for member '%s'", v12);
LABEL_21:
  CLoadKV3FromDynData::ReportError(this, v16.m_szBuf);
  CUtlTokenReference::~CUtlTokenReference(&memberName);
LABEL_5:
  CUtlTokenReference::~CUtlTokenReference(&instanceName);
  CUtlTokenReference::~CUtlTokenReference(&className);
  return v6;
}


// CLoadKV3FromDynData::HandleType  (line 399, @0x00000000031353b0, libserver.so)
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeIdentifier, CUtlTokenizer::PeekAtomicToken, CUtlTokenizer::ConsumeAtomicToken, CLoadKV3FromDynData::ReportError, CUtlTokenReference::~CUtlTokenReference, CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenReference::IsInteger, _Unwind_Resume
// callers: CLoadKV3FromDynData::ReadObject
// strings: "Expected []", "(", "Expected ( <count> )", "Expected type of next member"
bool __fastcall CLoadKV3FromDynData::HandleType(CLoadKV3FromDynData *const this)
{
  bool v2; // r14
  CUtlTokenReference typeRoot; // [rsp+0h] [rbp-90h] BYREF
  CUtlTokenReference tupleLength; // [rsp+30h] [rbp-60h] BYREF

  CUtlTokenReference::CUtlTokenReference(&typeRoot);
  v2 = CUtlTokenizer::ConsumeIdentifier(&this->m_Tokenizer, &typeRoot);
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( CUtlTokenizer::PeekAtomicToken(&this->m_Tokenizer, 0, "[", 0) )
        {
          if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "[", 0)
            || !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "]", 0) )
          {
            CLoadKV3FromDynData::ReportError(this, "Expected []");
            goto LABEL_5;
          }
        }
        if ( CUtlTokenizer::PeekAtomicToken(&this->m_Tokenizer, 0, "(", 0) )
          break;
        if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "*", 0) )
          goto LABEL_6;
      }
      CUtlTokenReference::CUtlTokenReference(&tupleLength);
      if ( !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "(", 0)
        || !CUtlTokenizer::ConsumeArbitraryToken(&this->m_Tokenizer, &tupleLength)
        || !CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, ")", 0)
        || !CUtlTokenReference::IsInteger(&tupleLength) )
      {
        break;
      }
      CUtlTokenReference::~CUtlTokenReference(&tupleLength);
    }
    CLoadKV3FromDynData::ReportError(this, "Expected ( <count> )");
    CUtlTokenReference::~CUtlTokenReference(&tupleLength);
  }
  else
  {
    CLoadKV3FromDynData::ReportError(this, "Expected type of next member");
  }
LABEL_5:
  v2 = 0;
LABEL_6:
  CUtlTokenReference::~CUtlTokenReference(&typeRoot);
  return v2;
}


// CLoadKV3FromDynData::HandleMember  (line 448, @0x0000000003135bd0, libserver.so)
// calls: KeyValues3::SetMemberToNull, CLoadKV3FromDynData::ReadValue
// callers: CLoadKV3FromDynData::ReadObject
bool __fastcall CLoadKV3FromDynData::HandleMember(
        CLoadKV3FromDynData *const this,
        KeyValues3 *pObject,
        const char *pMemberName)
{
  KeyValues3 *v4; // rax

  v4 = KeyValues3::SetMemberToNull(pObject, pMemberName, 0);
  return CLoadKV3FromDynData::ReadValue(this, v4);
}


// CLoadKV3FromDynData::ReadValue  (line 460, @0x0000000003135a90, libserver.so)
// calls: CUtlTokenizer::PeekAtomicToken, CLoadKV3FromDynData::ReadCompoundValue, CUtlTokenizer::ConsumeAtomicToken, CLoadKV3FromDynData::ReadObjectReference, CUtlTokenizer::PeekIdentifier, CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromDynData::ReadObject
// callers: CLoadKV3FromDynData::HandleMember, CLoadKV3FromDynData::ReadCompoundValue
// strings: "("
bool __fastcall CLoadKV3FromDynData::ReadValue(CLoadKV3FromDynData *const this, KeyValues3 *target)
{
  CUtlTokenizer *p_m_Tokenizer; // r12

  p_m_Tokenizer = &this->m_Tokenizer;
  if ( CUtlTokenizer::PeekAtomicToken(&this->m_Tokenizer, 0, "[", 0)
    || CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "(", 0) )
  {
    return CLoadKV3FromDynData::ReadCompoundValue(this, target);
  }
  if ( CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "&", 0)
    || CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "NULL", 0) )
  {
    return CLoadKV3FromDynData::ReadObjectReference(this, target);
  }
  if ( CUtlTokenizer::PeekIdentifier(p_m_Tokenizer, 0)
    && (CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 1, "{", 0)
     || CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 2, "{", 0))
    || CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, "{", 0) )
  {
    return CLoadKV3FromDynData::ReadObject(this, target, 0);
  }
  return CLoadKV3FromDynData::ReadLiteralValue(this, target);
}


// CLoadKV3FromDynData::ReadCompoundValue  (line 497, @0x0000000003136040, libserver.so)
// calls: CUtlTokenizer::ConsumeAtomicToken, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, CLoadKV3FromDynData::ReadValue, CUtlTokenizer::PeekAtomicToken, CFmtStrN<256, false>::CFmtStrN, CLoadKV3FromDynData::ReportError, __stack_chk_fail
// callers: CLoadKV3FromDynData::ReadValue
// strings: "(", "Expected ',' or '%s'", "Expected value or ']'", "Expected '[' or '('"
bool __fastcall CLoadKV3FromDynData::ReadCompoundValue(CLoadKV3FromDynData *const this, KeyValues3 *compoundTarget)
{
  CUtlTokenizer *p_m_Tokenizer; // r13
  const char *v4; // r15
  int v5; // ebx
  bool v6; // cl
  KeyValues3 *ArrayElement; // rax
  CFmtStrN<256,false> v10; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v11; // [rsp+128h] [rbp-38h]

  p_m_Tokenizer = &this->m_Tokenizer;
  v11 = __readfsqword(0x28u);
  if ( CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "[", 0) )
  {
    v4 = "]";
  }
  else
  {
    v4 = ")";
    if ( !CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, "(", 0) )
    {
      CLoadKV3FromDynData::ReportError(this, "Expected '[' or '('");
      return 0;
    }
  }
  v5 = 0;
  KeyValues3::SetArrayElementCount(compoundTarget, 0);
  while ( 1 )
  {
    v6 = CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, v4, 0);
    if ( v6 )
      break;
    KeyValues3::SetArrayElementCount(compoundTarget, v5 + 1);
    ArrayElement = KeyValues3::GetArrayElement(compoundTarget, v5);
    if ( !CLoadKV3FromDynData::ReadValue(this, ArrayElement) )
    {
      CLoadKV3FromDynData::ReportError(this, "Expected value or ']'");
      return 0;
    }
    if ( !CUtlTokenizer::ConsumeAtomicToken(p_m_Tokenizer, ",", 0)
      && !CUtlTokenizer::PeekAtomicToken(p_m_Tokenizer, 0, v4, 0) )
    {
      CFmtStrN<256,false>::CFmtStrN(&v10, "Expected ',' or '%s'", v4);
      CLoadKV3FromDynData::ReportError(this, v10.m_szBuf);
      return 0;
    }
    ++v5;
  }
  return v6;
}


// CLoadKV3FromDynData::ReadObjectReference  (line 562, @0x0000000003135950, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CLoadKV3FromDynData::UnresolvedElementReference_t>, Element, GrowMemory, UnresolvedElementReference_t, operator[]
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeAtomicToken, KeyValues3::SetToNull, CUtlTokenReference::~CUtlTokenReference, CUtlTokenizer::ConsumeIdentifier, CUtlTokenReference::AsString, CUtlString::operator=, CLoadKV3FromDynData::ReportError, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Grow, _Unwind_Resume
// callers: CLoadKV3FromDynData::ReadValue
// strings: "Expected '&' and instance name or 'NULL'"
bool __fastcall CLoadKV3FromDynData::ReadObjectReference(CLoadKV3FromDynData *const this, KeyValues3 *target)
{
  bool v4; // bl
  int m_Size; // r14d
  int v7; // eax
  CLoadKV3FromDynData::UnresolvedElementReference_t *v8; // rax
  CLoadKV3FromDynData::UnresolvedElementReference_t *v9; // r12
  const char *v10; // rax
  CUtlTokenReference instanceName; // [rsp+0h] [rbp-60h] BYREF

  CUtlTokenReference::CUtlTokenReference(&instanceName);
  v4 = CUtlTokenizer::ConsumeAtomicToken(&this->m_Tokenizer, "NULL", 0);
  if ( v4 )
  {
    KeyValues3::SetToNull(target);
  }
  else
  {
    v4 = CUtlTokenizer::ConsumeIdentifier(&this->m_Tokenizer, &instanceName);
    if ( v4 )
    {
      KeyValues3::SetToNull(target);
      m_Size = this->m_UnresolvedElementReferences.m_Size;
      v7 = m_Size;
      if ( m_Size == this->m_UnresolvedElementReferences.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t,int>::Grow(
          &this->m_UnresolvedElementReferences.m_Memory,
          1);
        v7 = this->m_UnresolvedElementReferences.m_Size;
      }
      this->m_UnresolvedElementReferences.m_Size = v7 + 1;
      v8 = &this->m_UnresolvedElementReferences.m_Memory.m_pMemory[m_Size];
      if ( v8 != 0 )
      {
        v8->m_ObjName.m_pString = 0;
        v9 = &this->m_UnresolvedElementReferences.m_Memory.m_pMemory[m_Size];
      }
      else
      {
        v9 = 0;
      }
      v10 = CUtlTokenReference::AsString(&instanceName);
      CUtlString::operator=(&v9->m_ObjName, v10);
      v9->m_pTargetKV = target;
    }
    else
    {
      CLoadKV3FromDynData::ReportError(this, "Expected '&' and instance name or 'NULL'");
    }
  }
  CUtlTokenReference::~CUtlTokenReference(&instanceName);
  return v4;
}


// CLoadKV3FromDynData::ReadLiteralValue  (line 589, @0x0000000003135560, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeArbitraryToken, CUtlTokenReference::IsBool, CUtlTokenReference::IsEqual, KeyValues3::SetBool, CUtlTokenReference::~CUtlTokenReference, CUtlTokenReference::IsIdentifier, CUtlTokenReference::IsInteger, CUtlTokenReference::AsString, V_atoi, KeyValues3::SetInt, CLoadKV3FromDynData::ReportError (26 total)
// callers: CLoadKV3FromDynData::ReadValue
// strings: "true", "false", "Expected token", "Failed to assign bool literal value", "Line %d: Invalid literal value \"%s\""
bool __fastcall CLoadKV3FromDynData::ReadLiteralValue(CLoadKV3FromDynData *const this, KeyValues3 *target)
{
  bool IsStringLiteral; // r12
  const char *v6; // rax
  int v7; // eax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  double v11; // xmm0_8
  double v12; // xmm1_8
  const char *v13; // r15
  int LineNumber; // eax
  CUtlString strUnescaped; // [rsp+0h] [rbp-190h] BYREF
  CUtlTokenReference memberValue; // [rsp+10h] [rbp-180h] BYREF
  CFmtStrN<256,false> v17; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v18; // [rsp+158h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  CUtlTokenReference::CUtlTokenReference(&memberValue);
  IsStringLiteral = CUtlTokenizer::ConsumeArbitraryToken(&this->m_Tokenizer, &memberValue);
  if ( IsStringLiteral )
  {
    if ( target != 0 )
    {
      if ( CUtlTokenReference::IsBool(&memberValue) )
      {
        if ( CUtlTokenReference::IsEqual(&memberValue, "true", 0) )
        {
          KeyValues3::SetBool(target, 1);
        }
        else if ( CUtlTokenReference::IsEqual(&memberValue, "false", 0) )
        {
          KeyValues3::SetBool(target, 0);
        }
        else
        {
          CLoadKV3FromDynData::ReportError(this, "Failed to assign bool literal value");
        }
      }
      else if ( CUtlTokenReference::IsIdentifier(&memberValue, 1) )
      {
        v8 = CUtlTokenReference::AsString(&memberValue);
        KeyValues3::SetString(target, v8);
      }
      else if ( CUtlTokenReference::IsInteger(&memberValue) )
      {
        v6 = CUtlTokenReference::AsString(&memberValue);
        v7 = V_atoi(v6);
        KeyValues3::SetInt(target, v7);
      }
      else if ( CUtlTokenReference::IsFloat(&memberValue) )
      {
        v10 = CUtlTokenReference::AsString(&memberValue);
        v11 = V_atod(v10);
        KeyValues3::SetDouble(target, v11, v12);
      }
      else
      {
        IsStringLiteral = CUtlTokenReference::IsStringLiteral(&memberValue);
        if ( IsStringLiteral )
        {
          strUnescaped.m_pString = 0;
          CUtlTokenReference::AsUnescapedString(&memberValue, &strUnescaped);
          v9 = CUtlString::Get(&strUnescaped);
          KeyValues3::SetString(target, v9);
          CUtlTokenReference::IsMultiLineStringLiteral(&memberValue);
          if ( strUnescaped.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&strUnescaped);
        }
        else
        {
          v13 = CUtlTokenReference::AsString(&memberValue);
          LineNumber = CUtlTokenReference::GetLineNumber(&memberValue);
          CFmtStrN<256,false>::CFmtStrN(&v17, "Line %d: Invalid literal value \"%s\"", LineNumber, v13);
          CLoadKV3FromDynData::ReportErrorNoLine(this, v17.m_szBuf);
        }
      }
    }
  }
  else
  {
    CLoadKV3FromDynData::ReportError(this, "Expected token");
  }
  CUtlTokenReference::~CUtlTokenReference(&memberValue);
  return IsStringLiteral;
}


// CLoadKV3FromDynData::ResolveUnresolvedReferences  (line 654, @0x00000000031357d0, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get, CUtlString::IsEqual_CaseSensitive, KeyValues3::MoveFrom, CLoadKV3FromDynData::FreeAllTempKV3, CFmtStrN<256, false>::CFmtStrN, CLoadKV3FromDynData::ReportError, __stack_chk_fail
// callers: CLoadKV3FromDynData::Parse
// strings: "Unresolved object reference '%s'", "Cycle or diamond double-reference to '%s'"
bool __fastcall CLoadKV3FromDynData::ResolveUnresolvedReferences(CLoadKV3FromDynData *const this)
{
  int m_Size; // eax
  CLoadKV3FromDynData::UnresolvedElementReference_t *v3; // r13
  __int64 v4; // r14
  int v5; // r15d
  CLoadKV3FromDynData::LoadedObject_t *v6; // r12
  const char *v7; // rax
  KeyValues3 *m_pObject; // rsi
  const char *v10; // rax
  const char *v11; // rax
  __int64 v12; // [rsp+0h] [rbp-160h]
  unsigned __int64 v13; // [rsp+8h] [rbp-158h]
  CFmtStrN<256,false> v14; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+128h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  m_Size = this->m_UnresolvedElementReferences.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_10:
    CLoadKV3FromDynData::FreeAllTempKV3(this);
    return 1;
  }
  else
  {
    v13 = 0;
    v12 = 16 * ((m_Size - 1) + 1LL);
    while ( 1 )
    {
      v3 = &this->m_UnresolvedElementReferences.m_Memory.m_pMemory[v13 / 0x10];
      if ( this->m_AdditionalRootObjects.m_Size <= 0 )
      {
LABEL_11:
        v10 = CUtlString::Get(&v3->m_ObjName);
        CFmtStrN<256,false>::CFmtStrN(&v14, "Unresolved object reference '%s'", v10);
        goto LABEL_12;
      }
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = &this->m_AdditionalRootObjects.m_Memory.m_pMemory[v4];
        v7 = CUtlString::Get(&v3->m_ObjName);
        if ( CUtlString::IsEqual_CaseSensitive(&v6->m_ObjName, v7) )
          break;
        ++v5;
        ++v4;
        if ( this->m_AdditionalRootObjects.m_Size <= v5 )
          goto LABEL_11;
      }
      if ( v6->m_bReferenceResolved )
        break;
      m_pObject = v6->m_pObject;
      v6->m_bReferenceResolved = 1;
      if ( m_pObject == 0 )
        goto LABEL_11;
      KeyValues3::MoveFrom(v3->m_pTargetKV, m_pObject);
      v13 += 16LL;
      if ( v13 == v12 )
        goto LABEL_10;
    }
    v11 = CUtlString::Get(&v3->m_ObjName);
    CFmtStrN<256,false>::CFmtStrN(&v14, "Cycle or diamond double-reference to '%s'", v11);
LABEL_12:
    CLoadKV3FromDynData::ReportError(this, v14.m_szBuf);
    return 0;
  }
}


// CLoadKV3FromDynData::AllocTempKV3  (line 707, @0x0000000003135210, libserver.so)
// calls: KeyValues3::FindOrCreateMember, KeyValues3::GetArrayElementCount, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement
// callers: CLoadKV3FromDynData::Parse
// globals: KV3_TEMP_UNSERIALIZATION_MEMBER
KeyValues3 *__fastcall CLoadKV3FromDynData::AllocTempKV3(CLoadKV3FromDynData *const this)
{
  KeyValues3 *Member; // rbx
  int ArrayElementCount; // r12d

  Member = KeyValues3::FindOrCreateMember(this->m_pPrimaryRoot, KV3_TEMP_UNSERIALIZATION_MEMBER, 0);
  ArrayElementCount = KeyValues3::GetArrayElementCount(Member);
  KeyValues3::SetArrayElementCount(Member, ArrayElementCount + 1);
  return KeyValues3::GetArrayElement(Member, ArrayElementCount);
}


// CLoadKV3FromDynData::FreeAllTempKV3  (line 718, @0x0000000003135260, libserver.so)
// calls: KeyValues3::FindOrCreateMember, KeyValues3::RemoveMember
// callers: CLoadKV3FromDynData::ResolveUnresolvedReferences
// globals: KV3_TEMP_UNSERIALIZATION_MEMBER
void __fastcall CLoadKV3FromDynData::FreeAllTempKV3(CLoadKV3FromDynData *const this)
{
  KeyValues3 *Member; // rax

  Member = KeyValues3::FindOrCreateMember(this->m_pPrimaryRoot, KV3_TEMP_UNSERIALIZATION_MEMBER, 0);
  if ( Member != 0 )
    KeyValues3::RemoveMember(this->m_pPrimaryRoot, Member);
}


