// Reconstructed from DWARF by pahole; not original source.

// src/tier1/keyvalues.cpp:135
struct kvbinaryheader_t {
	uint32 m_nKVFourCC;  // +0x0
	uint32 m_nCRC;  // +0x4

	// sizeof = 8
};

// src/tier1/keyvalues.cpp:145
struct KVJSONParserStackEntry_t {
	uint m_unSubNodes;  // +0x10

	// sizeof = 24
};

// src/tier1/keyvalues.cpp:152
struct KVJSONParserContext_t {
	KVJSONParserContext_t();
	~KVJSONParserContext_t();

	// sizeof = 104
};

// src/tier1/keyvalues.cpp:161
class CDefaultKeyValuesErrorSpew : public IKeyValuesErrorSpew {
public:

	~CDefaultKeyValuesErrorSpew();
	CDefaultKeyValuesErrorSpew(CDefaultKeyValuesErrorSpew &);
	CDefaultKeyValuesErrorSpew(const CDefaultKeyValuesErrorSpew &);
	CDefaultKeyValuesErrorSpew();
	virtual void Warning(const char *);

	// vtable[2] Warning
	// sizeof = 8
} __attribute__((__packed__));

// src/tier1/keyvalues.cpp:173
class CKeyValuesErrorStack {
private:

	const char * m_pFilename;  // +0x100
	int m_errorIndex;  // +0x108
	int m_maxErrorIndex;  // +0x10c
	bool m_bEncounteredErrors;  // +0x110

	CKeyValuesErrorStack(IKeyValuesErrorSpew *);
	~CKeyValuesErrorStack();
	void SetFilename(const char *);
	int Push(HKeySymbol);
	void Pop();
	void Reset(int, HKeySymbol);
	void ReportError(const char *);
	bool EncounteredAnyErrors();
	void ClearErrorFlag();

	// sizeof = 296
};

// src/tier1/keyvalues.cpp:277
class CKeyValuesTokenReader {
private:

	const CUtlBuffer & m_Buffer;  // +0x10
	char m_pTokenBuf[32768];  // +0x18
	int m_nTokensRead;  // +0x8018
	bool m_bUsePriorToken;  // +0x801c
	bool m_bPriorTokenWasQuoted;  // +0x801d
	bool m_bPriorTokenWasConditional;  // +0x801e
	CKeyValuesTokenReader(CKeyValuesErrorStack *, KeyValues *, CUtlBuffer &);
	const char * ReadToken(bool &, bool &);
	void SeekBackOneToken();

	// sizeof = 32800
};

// src/tier1/keyvalues.cpp:429
class CKeyErrorContext {
private:

	int m_stackLevel;  // +0x8
	CKeyErrorContext(CKeyValuesErrorStack *, HKeySymbol);
	~CKeyErrorContext();
	void Reset(HKeySymbol);
	int GetStackLevel();
	void Init(HKeySymbol);

	// sizeof = 16
};

// src/tier1/keyvalues.cpp:525
class CKeyValuesGrowableStringTable {
	class CLookupFunctor {
	private:

		const char * m_pchCurString;  // +0x0
		const char * m_pchCurBase;  // +0x8
		CLookupFunctor();
		void SetCurString(const char *);
		void SetCurStringBase(const char *);
		bool operator()(int, int);
		unsigned int operator()(int);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CKeyValuesGrowableStringTable();
	int GetSymbolForString(const char *, bool);
	const char * GetStringForSymbol(int);

	// sizeof = 104
};

// src/tier1/keyvalues.cpp:3553
class CBinaryKVHeaderWriter {
	int m_nHeaderPos;  // +0x0
	void StartHeader(CUtlBuffer &);
	void FinishHeader(CUtlBuffer &);

	// sizeof = 4
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_keyvalues.cpp  (line 0, @0x0000000001a670f0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: CExpressionEvaluator::CExpressionEvaluator, __cxa_atexit
// globals: g_ExpressionEvaluator, UNSPECIFIED_LOGGING_COLOR, __dso_handle
void __cdecl GLOBAL__sub_I_keyvalues_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  CExpressionEvaluator::CExpressionEvaluator(&g_ExpressionEvaluator);
  __cxa_atexit(CExpressionEvaluator::~CExpressionEvaluator, &g_ExpressionEvaluator, &_dso_handle);
}


// CKeySymbol::CKeySymbol  (line 121, @0x0000000002f73f20, libserver.so)  // inlines: HKeySymbol
// calls: KeyValuesSystem
// callers: CPropData::ParsePropFromKV, CEconTool_GemCombiner::BInitFromKV, CEconTool_HeroStatueForge::BInitFromKV, CEconTool_Gift::BInitFromKV, CEconTool_VictoryPrediction::BInitFromKV, CEconTool_EventTicket::BInitFromKV, CEconTool_TournamentPassport::BInitFromKV, CEconTool_DropRateBooster::BInitFromKV, CEconTool_TeamShowcaseForge::BInitFromKV, CEconTool_CompendiumSetSelection::BInitFromKV, CEconTool_FantasyTicket::BInitFromKV, CEconTool_AwardEventPoints::BInitFromKV (59 total)
void __fastcall CKeySymbol::CKeySymbol(CKeySymbol *const this, const char *pszSymbolName)
{
  __int64 v4; // rax

  this->m_hKeySymbol.nIndex = 0xFFFFFF;
  v4 = KeyValuesSystem();
  this->m_hKeySymbol.nIndex = (*(*v4 + 16LL))(v4, pszSymbolName, 1);
}


// CDefaultKeyValuesErrorSpew::Warning  (line 164, @0x0000000002f7eef0, libserver.so)
// calls: Warning
void __fastcall CDefaultKeyValuesErrorSpew::Warning(CDefaultKeyValuesErrorSpew *const this, const char *text)
{
  Warning("%s", text);
}


// CKeyValuesErrorStack::ReportError  (line 230, @0x0000000002f7ef10, libserver.so)
// calls: CFmtStrN<256, false>::CFmtStrN, KeyValuesSystem, __stack_chk_fail
// callers: KeyValues::EvaluateConditional, CKeyValuesTokenReader::ReadToken, KeyValues::RecursiveLoadFromBuffer
// strings: "KeyValues Error: %s in file %s\n", "%s, ", "(*%s*), "
void __fastcall CKeyValuesErrorStack::ReportError(CKeyValuesErrorStack *const this, const char *pError)
{
  CKeyValuesErrorStack *v3; // r13
  void (__fastcall *v4)(IKeyValuesErrorSpew *, char *); // rbx
  __int64 v5; // rdi
  int i; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  void (__fastcall *v9)(IKeyValuesErrorSpew *, char *); // r15
  __int64 v10; // rax
  __int64 v11; // rax
  CFmtStrN<256,false> v12; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v13; // [rsp+128h] [rbp-38h]

  v3 = this;
  v13 = __readfsqword(0x28u);
  v4 = *(this->m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
  CFmtStrN<256,false>::CFmtStrN(&v12, "KeyValues Error: %s in file %s\n", pError, this->m_pFilename);
  v4(this->m_pErrorSpew, v12.m_szBuf);
  for ( i = 0; this->m_maxErrorIndex > i; v3 = (v3 + 4) )
  {
    if ( i <= 63 && v3->m_errorStack[0].nIndex != 0xFFFFFF )
    {
      v9 = *(this->m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
      if ( this->m_errorIndex > i )
      {
        v7 = KeyValuesSystem(v5);
        v8 = (*(*v7 + 24LL))(v7, this->m_errorStack[i].nIndex);
        CFmtStrN<256,false>::CFmtStrN(&v12, "%s, ", v8);
      }
      else
      {
        v10 = KeyValuesSystem(v5);
        v11 = (*(*v10 + 24LL))(v10, this->m_errorStack[i].nIndex);
        CFmtStrN<256,false>::CFmtStrN(&v12, "(*%s*), ", v11);
      }
      v9(this->m_pErrorSpew, v12.m_szBuf);
    }
    ++i;
  }
  (*(this->m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2))(this->m_pErrorSpew, "\n");
  this->m_bEncounteredErrors = 1;
}


// CKeyValuesTokenReader::CKeyValuesTokenReader  (line 299, @0x0000000002f73f50, libserver.so)
void __fastcall CKeyValuesTokenReader::CKeyValuesTokenReader(
        CKeyValuesTokenReader *const this,
        CKeyValuesErrorStack *pErrorStack,
        KeyValues *pKeyValues,
        CUtlBuffer *const buf)
{
  this->m_pErrorStack = pErrorStack;
  this->m_pKeyValues = pKeyValues;
  this->m_Buffer = buf;
  this->m_nTokensRead = 0;
  this->m_bUsePriorToken = 0;
  this->m_bPriorTokenWasQuoted = 0;
  this->m_bPriorTokenWasConditional = 0;
  this->m_pTokenBuf[0] = 0;
}


// CKeyValuesTokenReader::ReadToken  (line 305, @0x0000000002f78cf0, libserver.so)  // inlines: GetChar, GetTypeBin<char>, Internal_HasEscapeSequences
// calls: CUtlBuffer::EatCPPComment, CUtlBuffer::EatWhiteSpace, CUtlBuffer::PeekGet, CUtlBuffer::CheckGet, CKeyValuesErrorStack::ReportError, KeyValuesSystem, CUtlBuffer::GetDelimitedString
// callers: KeyValues::RecursiveLoadFromBuffer, KeyValues::LoadFromBuffer
// strings: " ReadToken overflow"
const char *__fastcall CKeyValuesTokenReader::ReadToken(
        CKeyValuesTokenReader *const this,
        bool *const wasQuoted,
        bool *const wasConditional)
{
  CUtlBuffer *m_Buffer; // rdi
  bool v7; // al
  CUtlBuffer *v8; // rdi
  bool m_bPriorTokenWasQuoted; // al
  char *v11; // rax
  __int64 v12; // rdi
  char v13; // al
  int v14; // r12d
  char v15; // r14
  char *v16; // rax
  char v17; // dl
  char v18; // si
  unsigned int v19; // ecx
  __int64 v20; // rax
  CUtlBuffer *v21; // r15
  CUtlBuffer *v22; // r12
  __int64 v23; // rax
  CUtlCharConversion *v24; // rax
  bool bReportedError; // [rsp+Fh] [rbp-31h]

  if ( this->m_bUsePriorToken )
  {
    m_bPriorTokenWasQuoted = this->m_bPriorTokenWasQuoted;
    this->m_bUsePriorToken = 0;
    *wasQuoted = m_bPriorTokenWasQuoted;
    *wasConditional = this->m_bPriorTokenWasConditional;
    return this->m_pTokenBuf;
  }
  *wasQuoted = 0;
  this->m_bPriorTokenWasQuoted = 0;
  *wasConditional = 0;
  this->m_bPriorTokenWasConditional = 0;
  m_Buffer = this->m_Buffer;
  if ( m_Buffer->m_Error != 0 )
    return 0;
  do
  {
    CUtlBuffer::EatWhiteSpace(m_Buffer);
    v8 = this->m_Buffer;
    if ( v8->m_Error != 0 )
      return 0;
    v7 = CUtlBuffer::EatCPPComment(v8);
    m_Buffer = this->m_Buffer;
  }
  while ( v7 );
  v11 = CUtlBuffer::PeekGet(m_Buffer, 1, 0);
  if ( v11 == 0 )
    return 0;
  v13 = *v11;
  if ( v13 == 34 )
  {
    *wasQuoted = 1;
    this->m_bPriorTokenWasQuoted = 1;
    v23 = KeyValuesSystem(v12);
    v24 = (*(*v23 + 112LL))(v23, (*(&this->m_pKeyValues->CKeyValues_Data + 11) & 8) != 0);
    CUtlBuffer::GetDelimitedString(this->m_Buffer, v24, this->m_pTokenBuf, 0x8000);
    ++this->m_nTokensRead;
    return this->m_pTokenBuf;
  }
  else
  {
    if ( v13 != 123 && (v13 & 0xBF) != 0x3D )
    {
      v14 = 0;
      v15 = 0;
      bReportedError = 0;
      while ( 1 )
      {
        v16 = CUtlBuffer::PeekGet(this->m_Buffer, 1, 0);
        if ( v16 == 0 || (v17 = *v16, *v16 == 0) || v17 == 34 || v17 == 123 || (v17 & 0xBF) == 0x3D )
        {
LABEL_31:
          this->m_pTokenBuf[v14] = 0;
          ++this->m_nTokensRead;
          return this->m_pTokenBuf;
        }
        if ( v17 == 91 )
        {
          v15 = 1;
        }
        else
        {
          v18 = *v16;
          if ( v17 == 93 )
          {
            if ( v15 == 0 )
              goto LABEL_24;
            *wasConditional = 1;
            v15 = 0;
            this->m_bPriorTokenWasConditional = 1;
            v18 = *v16;
          }
          v19 = v18 - 9;
          if ( v19 <= 0x17 && ((1LL << v19) & 0x80001F) != 0 && v15 == 0 )
            goto LABEL_31;
          v17 = v18;
        }
LABEL_24:
        if ( v14 > 32766 )
        {
          if ( !bReportedError )
          {
            CKeyValuesErrorStack::ReportError(this->m_pErrorStack, " ReadToken overflow");
            bReportedError = 1;
          }
        }
        else
        {
          v20 = v14++;
          this->m_pTokenBuf[v20] = v17;
        }
        v21 = this->m_Buffer;
        if ( CUtlBuffer::CheckGet(v21, 1) )
          ++v21->m_Get;
      }
    }
    v22 = this->m_Buffer;
    this->m_pTokenBuf[0] = v13;
    this->m_pTokenBuf[1] = 0;
    if ( CUtlBuffer::CheckGet(v22, 1) )
      ++v22->m_Get;
    ++this->m_nTokensRead;
    return this->m_pTokenBuf;
  }
}


// CKeyValuesTokenReader::SeekBackOneToken  (line 409, @0x0000000002f73f90, libserver.so)
void __fastcall CKeyValuesTokenReader::SeekBackOneToken(CKeyValuesTokenReader *const this)
{
  if ( !this->m_bUsePriorToken && this->m_nTokensRead != 0 )
    this->m_bUsePriorToken = 1;
}


// KeyValues::SetUseGrowableStringTable  (line 621, @0x0000000002f7eca0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CKeyValuesGrowableStringTable, CLookupFunctor, CThreadFastMutex, CUtlHash, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char>, GrowMemory, GrowVector, InsertMultipleBefore, Purge, RemoveAll, RemoveMultipleFromTail, SetCount, SetGrowSize, operator[], ~CUtlHash, ~CUtlVector
// calls: operator new, CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::SetCount, CUtlMemory<int, int>::Grow, CMemAllocSystemInitialize, CUtlMemory<char, int>::Grow, CUtlMemory<int, int>::Purge, CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume, CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase
// globals: KeyValues::s_pGrowableStringTable, KeyValues::GetStringForSymbolGrowable(int), KeyValues::s_pfGetStringForSymbol, KeyValues::GetSymbolForStringGrowable(char const*,bool), KeyValues::s_pfGetSymbolForString, KeyValues::GetStringForSymbolClassic(int), KeyValues::GetSymbolForStringClassic(char const*,bool)
void __fastcall KeyValues::SetUseGrowableStringTable(bool bUseGrowableTable)
{
  CKeyValuesGrowableStringTable *v1; // r13
  __int64 v2; // rdi
  __int64 m_nAllocationCount; // rsi
  __int64 v4; // rbx
  CUtlVector<int,CUtlMemory<int,int> > *v5; // rax
  CUtlVector<int,CUtlMemory<int,int> > *v6; // r12
  __int64 m_pMemory; // rax
  __int64 m_Size; // rbx
  int v9; // edx
  bool v10; // zf
  _BYTE *v11; // rbx

  if ( !bUseGrowableTable )
  {
    KeyValues::s_pfGetStringForSymbol = KeyValues::GetStringForSymbolClassic;
    KeyValues::s_pfGetSymbolForString = KeyValues::GetSymbolForStringClassic;
    return;
  }
  KeyValues::s_pfGetStringForSymbol = KeyValues::GetStringForSymbolGrowable;
  KeyValues::s_pfGetSymbolForString = KeyValues::GetSymbolForStringGrowable;
  if ( KeyValues::s_pGrowableStringTable == 0 )
  {
    v1 = operator new(0x68u);
    v1->m_mutex.m_ownerID = 0;
    v1->m_mutex.m_depth = 0;
    v1->m_Functor.m_pchCurString = 0;
    v1->m_Functor.m_pchCurBase = 0;
    v1->m_hashLookup.m_Buckets.m_Size = 0;
    v1->m_hashLookup.m_Buckets.m_Memory.m_pMemory = 0;
    v1->m_hashLookup.m_Buckets.m_Memory.m_nAllocationCount = 0;
    v1->m_hashLookup.m_Buckets.m_Memory.m_nGrowSize = 0;
    v1->m_hashLookup.m_CompareFunc = &v1->m_Functor;
    v1->m_hashLookup.m_KeyFunc = &v1->m_Functor;
    CUtlVectorBase<CUtlVector<int,CUtlMemory<int,int>>,CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>>::SetCount(
      &v1->m_hashLookup.m_Buckets,
      2048);
    v4 = 0;
    while ( 1 )
    {
      v6 = &v1->m_hashLookup.m_Buckets.m_Memory.m_pMemory[v4];
      if ( -v6->m_Size >= 0 && v6->m_Size != 0 )
        break;
      v5 = &v1->m_hashLookup.m_Buckets.m_Memory.m_pMemory[v4];
      if ( v6->m_Size != 0 )
        goto LABEL_11;
LABEL_7:
      v5->m_Memory.m_nGrowSize &= 0xC0000000;
      if ( ++v4 == 2048 )
      {
        v1->m_hashLookup.m_bPowerOfTwo = 1;
        v1->m_hashLookup.m_ModMask = 2047;
        v1->m_vecStrings.m_Size = 0;
        v1->m_vecStrings.m_Memory.m_pMemory = 0;
        v1->m_vecStrings.m_Memory.m_nAllocationCount = 0x200000;
        v1->m_vecStrings.m_Memory.m_nGrowSize = 0;
        CMemAllocSystemInitialize(v2, m_nAllocationCount);
        m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, v1->m_vecStrings.m_Memory.m_nAllocationCount);
        m_Size = v1->m_vecStrings.m_Size;
        v1->m_vecStrings.m_Memory.m_pMemory = m_pMemory;
        v9 = m_Size;
        if ( m_Size == v1->m_vecStrings.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<char,int>::Grow(&v1->m_vecStrings.m_Memory, 1);
          v9 = v1->m_vecStrings.m_Size;
          m_pMemory = v1->m_vecStrings.m_Memory.m_pMemory;
        }
        v10 = m_pMemory + m_Size == 0;
        v11 = (m_pMemory + m_Size);
        v1->m_vecStrings.m_Size = v9 + 1;
        if ( !v10 )
          *v11 = 0;
        KeyValues::s_pGrowableStringTable = v1;
        return;
      }
    }
    m_nAllocationCount = v6->m_Memory.m_nAllocationCount;
    if ( m_nAllocationCount < 0 )
      CUtlMemory<int,int>::Grow(&v6->m_Memory, -m_nAllocationCount);
LABEL_11:
    v6->m_Size = 0;
    v5 = &v1->m_hashLookup.m_Buckets.m_Memory.m_pMemory[v4];
    goto LABEL_7;
  }
}


// KeyValues::GetSymbolForStringClassic  (line 645, @0x0000000002f73ca0, libserver.so)
// calls: KeyValuesSystem
int __fastcall KeyValues::GetSymbolForStringClassic(const char *name, bool bCreate)
{
  __int64 v4; // rax

  v4 = KeyValuesSystem();
  return (*(*v4 + 16LL))(v4, name, bCreate);
}


// KeyValues::GetStringForSymbolClassic  (line 650, @0x0000000002f73c70, libserver.so)
// calls: KeyValuesSystem
const char *__fastcall KeyValues::GetStringForSymbolClassic(int symbol)
{
  __int64 v2; // rax

  v2 = KeyValuesSystem();
  return (*(*v2 + 24LL))(v2, symbol);
}


// KeyValues::GetSymbolForStringGrowable  (line 655, @0x0000000002f7e8d0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, BuildHandle, CAutoLockT, CopyConstruct<char>, CopyConstruct<int>, DoFind, Element, Find, GetBucketIndex, GetSymbolForString, GrowMemory, HashStringFastCaseless, Insert, InsertMultipleBefore, IsValidHandle, Lock, SetCurString, SetCurStringBase, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, V_strlen, operator(), operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, MurmurHash2LowerCase, V_stricmp_fast, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, strlen, CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector, CUtlVectorBase<char, CUtlMemory<char, int> >::ShiftElementsRight, CUtlMemory<int, int>::Grow, _Unwind_Resume
// globals: KeyValues::s_pGrowableStringTable
int __fastcall KeyValues::GetSymbolForStringGrowable(const char *name, bool bCreate)
{
  CKeyValuesGrowableStringTable *v3; // rbx
  signed __int64 CurrentId; // rsi
  const char *m_pchCurString; // rdi
  uint32 v6; // eax
  CUtlVector<int,CUtlMemory<int,int> > *m_pMemory; // rax
  CUtlVector<int,CUtlMemory<int,int> > *v8; // r15
  int m_Size; // r14d
  __int64 v10; // r13
  int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *p_m_pchCurString; // rax
  uint32 v15; // eax
  __int64 v16; // r15
  int v17; // r14d
  __int64 v18; // r13
  int v19; // r12d
  __int64 v20; // rdi
  __int64 v21; // rdi
  _QWORD *v22; // rax
  int v23; // r12d
  unsigned int v24; // edx
  __int64 v25; // rax
  int v26; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  CUtlVector<int,CUtlMemory<int,int> > *v30; // r13
  int v31; // r12d
  int v32; // eax
  int *v33; // rax
  unsigned int v34; // r13d
  int v35; // eax
  int v36; // r14d
  int v37; // r12d
  __int64 v38; // rdx
  CUtlVectorBase<char,CUtlMemory<char,int> > *p_m_vecStrings; // r15
  __int64 v40; // rax
  char *v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-48h]
  int v43; // [rsp+14h] [rbp-3Ch]
  int nameb; // [rsp+18h] [rbp-38h]

  v3 = KeyValues::s_pGrowableStringTable;
  CurrentId = ThreadGetCurrentId(name);
  if ( CurrentId != v3->m_mutex.m_ownerID && _InterlockedCompareExchange64(v3, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(v3, CurrentId, 0);
  }
  else
  {
    ++v3->m_mutex.m_depth;
  }
  v3->m_Functor.m_pchCurString = name;
  v3->m_Functor.m_pchCurBase = v3->m_vecStrings.m_Memory.m_pMemory;
  m_pchCurString = v3->m_hashLookup.m_KeyFunc->m_pchCurString;
  if ( bCreate )
  {
    v6 = MurmurHash2LowerCase(m_pchCurString, 0x3501A674u);
    if ( v3->m_hashLookup.m_bPowerOfTwo )
      v43 = v3->m_hashLookup.m_ModMask & v6;
    else
      v43 = v6 % v3->m_hashLookup.m_Buckets.m_Size;
    m_pMemory = v3->m_hashLookup.m_Buckets.m_Memory.m_pMemory;
    v8 = &m_pMemory[v43];
    v42 = v43;
    m_Size = v8->m_Size;
    if ( v8->m_Size <= 0 )
    {
      v11 = 0;
LABEL_33:
      if ( m_Size != v11 )
      {
        v28 = v11;
        v29 = (v11 | (v43 << 16)) >> 16;
LABEL_35:
        v23 = m_pMemory[v29].m_Memory.m_pMemory[v28];
        goto LABEL_29;
      }
    }
    else
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v13 = v8->m_Memory.m_pMemory[v10];
        p_m_pchCurString = &v3->m_hashLookup.m_CompareFunc->m_pchCurString;
        if ( v13 > 0 )
          v12 = p_m_pchCurString[1] + v13;
        else
          v12 = *p_m_pchCurString;
        if ( V_stricmp_fast(v12, *p_m_pchCurString) == 0 )
        {
          m_pMemory = v3->m_hashLookup.m_Buckets.m_Memory.m_pMemory;
          goto LABEL_33;
        }
        ++v11;
        ++v10;
      }
      while ( v11 != m_Size );
      m_pMemory = v3->m_hashLookup.m_Buckets.m_Memory.m_pMemory;
    }
    v30 = &m_pMemory[v42];
    v31 = m_pMemory[v43].m_Size;
    if ( v31 == m_pMemory[v42].m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&v30->m_Memory, 1);
      v32 = v30->m_Size;
    }
    else
    {
      v32 = m_pMemory[v43].m_Size;
    }
    v30->m_Size = v32 + 1;
    v33 = &v30->m_Memory.m_pMemory[v31];
    if ( v33 != 0 )
      *v33 = -1;
    v34 = v31 | (v43 << 16);
    if ( name != 0 )
    {
      v35 = strlen(name);
      v36 = v3->m_vecStrings.m_Size;
      v37 = v35 + 1;
      if ( v35 == -1 )
      {
LABEL_43:
        v28 = v34;
        v29 = HIWORD(v34);
        v3->m_hashLookup.m_Buckets.m_Memory.m_pMemory[v29].m_Memory.m_pMemory[v28] = v36;
        m_pMemory = v3->m_hashLookup.m_Buckets.m_Memory.m_pMemory;
        goto LABEL_35;
      }
      p_m_vecStrings = &v3->m_vecStrings;
    }
    else
    {
      p_m_vecStrings = &v3->m_vecStrings;
      v36 = v3->m_vecStrings.m_Size;
      v37 = 1;
    }
    CUtlVectorBase<char,CUtlMemory<char,int>>::GrowVector(p_m_vecStrings, v37);
    CUtlVectorBase<char,CUtlMemory<char,int>>::ShiftElementsRight(p_m_vecStrings, v36, v37);
    if ( name != 0 && v37 > 0 )
    {
      v40 = 0;
      do
      {
        v41 = &v3->m_vecStrings.m_Memory.m_pMemory[v40 + v36];
        if ( v41 != 0 )
          *v41 = name[v40];
        ++v40;
      }
      while ( v37 > v40 );
    }
    goto LABEL_43;
  }
  v15 = MurmurHash2LowerCase(m_pchCurString, 0x3501A674u);
  if ( v3->m_hashLookup.m_bPowerOfTwo )
    nameb = v3->m_hashLookup.m_ModMask & v15;
  else
    nameb = v15 % v3->m_hashLookup.m_Buckets.m_Size;
  v16 = &v3->m_hashLookup.m_Buckets.m_Memory.m_pMemory[nameb];
  v17 = *v16;
  if ( *v16 <= 0 )
  {
    v19 = 0;
  }
  else
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v21 = *(*(v16 + 8) + v18);
      v22 = &v3->m_hashLookup.m_CompareFunc->m_pchCurString;
      v20 = v21 > 0 ? v22[1] + v21 : *v22;
      if ( V_stricmp_fast(v20, *v22) == 0 )
        break;
      ++v19;
      v18 += 4;
      if ( v19 == v17 )
        goto LABEL_44;
    }
  }
  if ( v17 == v19 )
  {
LABEL_44:
    v26 = 0xFFFF;
    v25 = 0xFFFF;
    v23 = -1;
    if ( v3->m_hashLookup.m_Buckets.m_Size <= 0xFFFF )
      goto LABEL_29;
  }
  else
  {
    LODWORD(v25) = v19 | (nameb << 16);
    v23 = -1;
    v24 = v25;
    v25 = v25;
    v26 = HIWORD(v24);
    if ( v3->m_hashLookup.m_Buckets.m_Size <= v26 )
      goto LABEL_29;
  }
  v38 = &v3->m_hashLookup.m_Buckets.m_Memory.m_pMemory[v26];
  if ( v25 < *v38 )
    v23 = *(*(v38 + 8) + 4 * v25);
LABEL_29:
  if ( --v3->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(v3, 0);
  return v23;
}


// KeyValues::GetStringForSymbolGrowable  (line 660, @0x0000000002f73b50, libserver.so)  // inlines: GetStringForSymbol
// globals: KeyValues::s_pGrowableStringTable
const char *__fastcall KeyValues::GetStringForSymbolGrowable(int symbol)
{
  return &KeyValues::s_pGrowableStringTable->m_vecStrings.m_Memory.m_pMemory[symbol];
}


// CKeyValues_Data::Internal_GetSubKey  (line 666, @0x0000000002f73fb0, libserver.so)  // inlines: ResolveSubKeyValue
KeyValues *__fastcall CKeyValues_Data::Internal_GetSubKey(const CKeyValues_Data *const this)
{
  KeyValues *result; // rax

  result = 0;
  if ( (*(this + 11) & 0x47) == 0x40 )
    return this->m_uValue;
  return result;
}


// CKeyValues_Data::Internal_SetSubKey  (line 682, @0x0000000002f740e0, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
// callers: KeyValues::AddSubkeyUsingKnownLastChild, KeyValues::AddSubKey, KeyValues::InsertSubKey, KeyValues::SwapSubKey, KeyValues::RemoveSubKey, KeyValues::CreateKeyUsingKnownLastChild, KeyValues::ElideSubKey, KeyValues::RecursiveCopyKeyValues, KeyValues::CopySubkeys, KeyValues::AddKey, KeyValues::FindKey, KeyValues::ReadAsBinaryInternal
void __fastcall CKeyValues_Data::Internal_SetSubKey(CKeyValues_Data *const this, KeyValues *pSub)
{
  KeyValues *pSuba; // [rsp+8h] [rbp-18h]

  if ( pSub != 0 )
  {
    if ( (*(this + 11) & 7) != 0 )
    {
      pSuba = pSub;
      CKeyValues_Data::Internal_ClearData(this);
      pSub = pSuba;
    }
    *(this + 11) |= 0x40u;
    this->m_uValue = pSub;
  }
  else
  {
    *(this + 11) &= ~0x40u;
  }
}


// CKeyValues_Data::ResolveSubKeyValue  (line 713, @0x0000000002f73fd0, libserver.so)
KeyValues *__fastcall CKeyValues_Data::ResolveSubKeyValue(const CKeyValues_Data *const this)
{
  return this->m_uValue;
}


// CKeyValues_Data::Internal_SetHasEscapeSequences  (line 721, @0x0000000002f73fe0, libserver.so)
void __fastcall CKeyValues_Data::Internal_SetHasEscapeSequences(CKeyValues_Data *const this, bool bUsesEscapeSequences)
{
  *(this + 11) = (8 * bUsesEscapeSequences) | *(this + 11) & 0xF7;
}


// CKeyValues_Data::Internal_HasEscapeSequences  (line 726, @0x0000000002f74000, libserver.so)
bool __fastcall CKeyValues_Data::Internal_HasEscapeSequences(const CKeyValues_Data *const this)
{
  return (*(this + 11) & 8) != 0;
}


// KeyValues::KeyValues  (line 735, @0x0000000002f76570, libserver.so)  // inlines: CKeyValues_Data, Init, Internal_ClearAll, ~CKeyValues_Data
// calls: CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetName, _Unwind_Resume
// callers: ProtoBufHelper::CreateKVFromProtoBuf, CBaseEntity::PrecacheModelComponents, CGameConfiguration::InitGameSession, ScriptTableToKeyValues, ScriptVmKeyValueFromVariant, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, Script_LoadKeyValuesFromString, Script_LoadKeyValues, CBreakModelsPrecached::ComputeServerSideSpawn, CPropData::ParsePropDataFile, CBaseAnimatingController::GetSequenceKeyValues, CBaseProp::ParsePropData (1112 total)
void __fastcall KeyValues::KeyValues(KeyValues *const this, const char *setName)
{
  char v4; // al

  v4 = *(&this->CKeyValues_Data + 11);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  this->m_uValue = 0;
  *(&this->CKeyValues_Data + 11) = v4 & 0x80;
  CKeyValues_Data::Internal_ClearData(this);
  *(&this->CKeyValues_Data + 11) &= ~8u;
  this->m_pPeer = 0;
  CKeyValues_Data::Internal_SetName(this, setName);
}


// KeyValues::KeyValues  (line 743, @0x0000000002f741b0, libserver.so)  // inlines: CKeyValues_Data, Init, Internal_ClearAll, Internal_SetNameFrom, ~CKeyValues_Data
// calls: CKeyValues_Data::Internal_ClearData, _Unwind_Resume
void __fastcall KeyValues::KeyValues(KeyValues *const this, const KeyValues *pOther, bool a3)
{
  char v5; // al
  char v6; // cl
  int v7; // eax

  v5 = *(&this->CKeyValues_Data + 11);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  this->m_uValue = 0;
  *(&this->CKeyValues_Data + 11) = v5 & 0x80;
  CKeyValues_Data::Internal_ClearData(this);
  v6 = *(&this->CKeyValues_Data + 11);
  this->m_pPeer = 0;
  *(&this->CKeyValues_Data + 11) = v6 & 0xF7;
  v7 = *(&pOther->CKeyValues_Data + 4) | (*(&pOther->CKeyValues_Data + 10) << 16);
  *(&this->CKeyValues_Data + 8) = *(&pOther->CKeyValues_Data + 4);
  *(&this->CKeyValues_Data + 10) = BYTE2(v7);
  *(&this->CKeyValues_Data + 9) = BYTE1(v7);
  *(&this->CKeyValues_Data + 11) = *(&pOther->CKeyValues_Data + 11) & 0x20 | v6 & 0xD7;
}


// KeyValues::KeyValues  (line 754, @0x0000000002f79f40, libserver.so)  // inlines: CKeyValues_Data, Init, Internal_ClearAll, ~CKeyValues_Data
// calls: CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetName, KeyValues::SetString, _Unwind_Resume
// callers: ConvertMapDataKV
void __fastcall KeyValues::KeyValues(
        KeyValues *const this,
        const char *setName,
        const char *firstKey,
        const char *firstValue)
{
  char v8; // al

  v8 = *(&this->CKeyValues_Data + 11);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  this->m_uValue = 0;
  *(&this->CKeyValues_Data + 11) = v8 & 0x80;
  CKeyValues_Data::Internal_ClearData(this);
  *(&this->CKeyValues_Data + 11) &= ~8u;
  this->m_pPeer = 0;
  CKeyValues_Data::Internal_SetName(this, setName);
  KeyValues::SetString(this, firstKey, firstValue);
}


// KeyValues::KeyValues  (line 766, @0x0000000002f7a0a0, libserver.so)  // inlines: CKeyValues_Data, Init, Internal_ClearAll, ~CKeyValues_Data
// calls: CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetName, KeyValues::SetWString, _Unwind_Resume
void __fastcall KeyValues::KeyValues(
        KeyValues *const this,
        const char *setName,
        const char *firstKey,
        const wchar_t *firstValue)
{
  char v8; // al

  v8 = *(&this->CKeyValues_Data + 11);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  this->m_uValue = 0;
  *(&this->CKeyValues_Data + 11) = v8 & 0x80;
  CKeyValues_Data::Internal_ClearData(this);
  *(&this->CKeyValues_Data + 11) &= ~8u;
  this->m_pPeer = 0;
  CKeyValues_Data::Internal_SetName(this, setName);
  KeyValues::SetWString(this, firstKey, firstValue);
}


// KeyValues::KeyValues  (line 778, @0x0000000002f7a160, libserver.so)  // inlines: CKeyValues_Data, Init, Internal_ClearAll, ~CKeyValues_Data
// calls: CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetName, KeyValues::SetInt, _Unwind_Resume
void __fastcall KeyValues::KeyValues(KeyValues *const this, const char *setName, const char *firstKey, int firstValue)
{
  char v8; // al

  v8 = *(&this->CKeyValues_Data + 11);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  this->m_uValue = 0;
  *(&this->CKeyValues_Data + 11) = v8 & 0x80;
  CKeyValues_Data::Internal_ClearData(this);
  *(&this->CKeyValues_Data + 11) &= ~8u;
  this->m_pPeer = 0;
  CKeyValues_Data::Internal_SetName(this, setName);
  KeyValues::SetInt(this, firstKey, firstValue);
}


// KeyValues::KeyValues  (line 790, @0x0000000002f79fc0, libserver.so)  // inlines: CKeyValues_Data, Init, Internal_ClearAll, ~CKeyValues_Data
// calls: CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetName, KeyValues::SetString, _Unwind_Resume
void __fastcall KeyValues::KeyValues(
        KeyValues *const this,
        const char *setName,
        const char *firstKey,
        const char *firstValue,
        const char *secondKey,
        const char *secondValue)
{
  char v11; // al

  v11 = *(&this->CKeyValues_Data + 11);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  this->m_uValue = 0;
  *(&this->CKeyValues_Data + 11) = v11 & 0x80;
  CKeyValues_Data::Internal_ClearData(this);
  *(&this->CKeyValues_Data + 11) &= ~8u;
  this->m_pPeer = 0;
  CKeyValues_Data::Internal_SetName(this, setName);
  KeyValues::SetString(this, firstKey, firstValue);
  KeyValues::SetString(this, secondKey, secondValue);
}


// KeyValues::KeyValues  (line 803, @0x0000000002f7a1e0, libserver.so)  // inlines: CKeyValues_Data, Init, Internal_ClearAll, ~CKeyValues_Data
// calls: CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetName, KeyValues::SetInt, _Unwind_Resume
void __fastcall KeyValues::KeyValues(
        KeyValues *const this,
        const char *setName,
        const char *firstKey,
        int firstValue,
        const char *secondKey,
        int secondValue)
{
  char v11; // al

  v11 = *(&this->CKeyValues_Data + 11);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  this->m_uValue = 0;
  *(&this->CKeyValues_Data + 11) = v11 & 0x80;
  CKeyValues_Data::Internal_ClearData(this);
  *(&this->CKeyValues_Data + 11) &= ~8u;
  this->m_pPeer = 0;
  CKeyValues_Data::Internal_SetName(this, setName);
  KeyValues::SetInt(this, firstKey, firstValue);
  KeyValues::SetInt(this, secondKey, secondValue);
}


// CKeyValues_Data::CKeyValues_Data  (line 816, @0x0000000002f74010, libserver.so)
void __fastcall CKeyValues_Data::CKeyValues_Data(CKeyValues_Data *const this)
{
  char v1; // al

  *(this + 8) = -1;
  *(this + 9) = -1;
  *(this + 10) = -1;
  v1 = *(this + 11);
  this->m_uValue = 0;
  *(this + 11) = v1 & 0x80;
}


// KeyValues::Init  (line 834, @0x0000000002f74170, libserver.so)  // inlines: Internal_ClearAll
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall KeyValues::Init(KeyValues *const this)
{
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  CKeyValues_Data::Internal_ClearData(this);
  this->m_pPeer = 0;
  *(&this->CKeyValues_Data + 11) &= ~8u;
}


// CKeyValues_Data::~CKeyValues_Data  (line 846, @0x0000000002f74130, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall CKeyValues_Data::~CKeyValues_Data(CKeyValues_Data *const this)
{
  CKeyValues_Data::Internal_ClearData(this);
}


// KeyValues::~KeyValues  (line 851, @0x0000000002f77cc0, libserver.so)  // inlines: ~CKeyValues_Data
// calls: KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData
// callers: CBaseEntity::PrecacheModelComponents, CGameConfiguration::ShutdownGameSession, CGameConfiguration::~CGameConfiguration, CGameConfiguration::InitGameSession, ScriptHelper_CreateEvent, Script_LoadKeyValuesFromString, Script_LoadKeyValues, CBreakModelsPrecached::ComputeServerSideSpawn, CPropData::GameShutdown, CPropData::ParsePropDataFile, CGameEventManager::LoadEventsFromFile, CBaseCombatCharacter::GetFilteredDamage (1044 total)
void __fastcall KeyValues::~KeyValues(KeyValues *const this)
{
  KeyValues::RemoveEverything(this);
  CKeyValues_Data::Internal_ClearData(this);
}


// KeyValues::deleteThis  (line 861, @0x0000000002f77ce0, libserver.so)  // inlines: ~CKeyValues_Data, ~KeyValues
// calls: KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::operator delete
// callers: CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>::~CBaseCmdKeyValues, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>::~CBaseCmdKeyValues, CNetMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CNetMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CNetMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CNetMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CGameConfiguration::SetupGameSessionConfiguration, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>::~CBaseCmdKeyValues, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>::~CBaseCmdKeyValues, CNetMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::~CNetMessagePB, CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1>::~CUserMessagePB, CUserMsg_CustomGameEvent_t::~CUserMsg_CustomGameEvent_t (117 total)
void __fastcall KeyValues::deleteThis(KeyValues *const this)
{
  if ( this != 0 )
  {
    KeyValues::RemoveEverything(this);
    CKeyValues_Data::Internal_ClearData(this);
    KeyValues::operator delete(this);
  }
}


// CKeyValues_Data::Internal_ClearAll  (line 869, @0x0000000002f74140, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall CKeyValues_Data::Internal_ClearAll(CKeyValues_Data *const this)
{
  *(this + 8) = -1;
  *(this + 9) = -1;
  *(this + 10) = -1;
  CKeyValues_Data::Internal_ClearData(this);
  *(this + 11) &= ~8u;
}


// CKeyValues_Data::Internal_ClearData  (line 878, @0x0000000002f74040, libserver.so)
// calls: operator delete, KeyValuesSystem
// callers: CKeyValues_Data::Internal_SetSubKey, CKeyValues_Data::~CKeyValues_Data, CKeyValues_Data::Internal_ClearAll, KeyValues::Init, KeyValues::KeyValues, CKeyValues_Data::Internal_SetColor, CKeyValues_Data::Internal_SetString, CKeyValues_Data::Internal_SetWString, CKeyValues_Data::Internal_SetFromString, CKeyValues_Data::Internal_SetInt, CKeyValues_Data::Internal_SetUint64, CKeyValues_Data::Internal_SetFloat (39 total)
void __fastcall CKeyValues_Data::Internal_ClearData(CKeyValues_Data *const this)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = *(this + 11) & 7;
  if ( v2 == 5 )
  {
    if ( this->m_uValue != 0 )
    {
      if ( (*(this + 11) & 0x10) != 0 )
      {
        v3 = KeyValuesSystem();
        (*(*v3 + 104LL))(v3, this->m_uValue);
      }
      goto LABEL_8;
    }
    goto LABEL_4;
  }
  if ( v2 == 7 )
  {
    if ( (*(this + 11) & 0x10) != 0 )
      operator delete(this->m_pValue);
    goto LABEL_4;
  }
  if ( v2 != 1 || this->m_uValue == 0 )
  {
LABEL_4:
    *(this + 11) &= 0xA8u;
    return;
  }
  if ( (*(this + 11) & 0x10) != 0 )
  {
    v4 = KeyValuesSystem();
    (*(*v4 + 88LL))(v4, this->m_uValue);
  }
LABEL_8:
  *(this + 11) &= 0xA8u;
  this->m_uValue = 0;
}


// KeyValues::RemoveEverything  (line 933, @0x0000000002f77c10, libserver.so)  // inlines: Internal_GetSubKey, Internal_SetSubKey, ResolveSubKeyValue
// calls: KeyValues::~KeyValues, KeyValues::operator delete, CKeyValues_Data::Internal_ClearData
// callers: KeyValues::~KeyValues, KeyValues::deleteThis, KeyValues::ElideSubKey, KeyValues::operator=, KeyValues::Clear, KeyValues::RecursiveLoadFromBuffer, KeyValues::ReadAsBinaryFiltered, KeyValues::ReadAsBinaryInternal, KeyValues::ReadAsBinary, KeyValues::ProcessResolutionKeys, KeyValues::MergeFrom, KeyValues::ParseIncludedKeys (13 total)
void __fastcall KeyValues::RemoveEverything(KeyValues *const this)
{
  KeyValues *v2; // rbx
  KeyValues *v3; // r12
  KeyValues *m_uValue; // rbx
  KeyValues *m_pPeer; // r12

  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( 1 )
      {
        m_pPeer = m_uValue->m_pPeer;
        m_uValue->m_pPeer = 0;
        KeyValues::~KeyValues(m_uValue);
        KeyValues::operator delete(m_uValue);
        if ( m_pPeer == 0 )
          break;
        m_uValue = m_pPeer;
      }
    }
  }
  v2 = this->m_pPeer;
  *(&this->CKeyValues_Data + 11) &= ~0x40u;
  if ( this != v2 && v2 != 0 )
  {
    while ( 1 )
    {
      v3 = v2->m_pPeer;
      v2->m_pPeer = 0;
      KeyValues::~KeyValues(v2);
      KeyValues::operator delete(v2);
      if ( this == v3 || v3 == 0 )
        break;
      v2 = v3;
    }
  }
  CKeyValues_Data::Internal_ClearData(this);
}


// KeyValues::RecursiveSaveToFile  (line 961, @0x0000000002f75000, libserver.so)
// calls: KeyValues::RecursiveSaveToFile
// callers: CCommentarySystem::LoadCommentaryFile, CSource2Server::OnSaveSessionPersisters, CBaseGameStats_Driver::SendData
void __fastcall KeyValues::RecursiveSaveToFile(
        KeyValues *const this,
        CUtlBuffer *const buf,
        int indentLevel,
        bool bWriteRootKey)
{
  KeyValues::RecursiveSaveToFile(this, 0, 0, buf, indentLevel, 0, bWriteRootKey);
}


// CKeyValues_Data::Internal_GetName  (line 983, @0x0000000002f74250, libserver.so)
// calls: KeyValuesSystem
// callers: IKeyValuesDumpContextAsText::KvBeginKey, KeyValues::GetName, KeyValues::RecursiveSaveToFile, KeyValues::WriteAsBinaryInternal, KeyValues::WriteAsBinaryFilteredInternal, KeyValues::CreateNewKey, KeyValues::RecursiveMergeKeyValues, KeyValues::ReadAsBinaryInternal, KeyValues::ProcessResolutionKeys, KeyValues::MergeFrom, IKeyValuesDumpContextAsText::KvWriteValue
const char *__fastcall CKeyValues_Data::Internal_GetName(const CKeyValues_Data *const this)
{
  __int64 v2; // rax

  v2 = KeyValuesSystem();
  return (*(*v2 + 24LL))(v2, *(this + 4) | (*(this + 10) << 16));
}


// KeyValues::GetName  (line 988, @0x0000000002f743e0, libserver.so)
// calls: CKeyValues_Data::Internal_GetName
// callers: ScriptTableFromKeyValues, Recursive_ConvertKeyValuesToTable, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CPropData::ParsePropFromKV, CPropData::ParsePropDataFile, CGameEvent::GetName, CGameEventManager::WriteEventList, CGameEventManager::ConPrintEvent, CGameEventManager::PrintEventToString, CGameEventManager::SerializeEvent, CGameEventManager::UnserializeEvent, CGameEventManager::RegisterEvent (242 total)
const char *__fastcall KeyValues::GetName(const KeyValues *const this)
{
  if ( this != 0 )
    return CKeyValues_Data::Internal_GetName(this);
  else
    return "";
}


// CKeyValues_Data::Internal_GetNameSymbol  (line 1001, @0x0000000002f73da0, libserver.so)
// calls: KeyValuesSystem
// callers: CKeyValues_Data::Internal_GetNameSymbol, KeyValues::GetNameSymbol, KeyValues::FindKey
HKeySymbol __fastcall CKeyValues_Data::Internal_GetNameSymbol(const CKeyValues_Data *const this)
{
  __int64 v2; // rax

  v2 = KeyValuesSystem();
  return (*(*v2 + 72LL))(v2, *(this + 4) | (*(this + 10) << 16));
}


// CKeyValues_Data::Internal_GetNameSymbol  (line 1001, @0x0000000002f74400, libserver.so)
// calls: CKeyValues_Data::Internal_GetNameSymbol
HKeySymbol __fastcall CKeyValues_Data::Internal_GetNameSymbol(const CKeyValues_Data *const this)
{
  if ( (*(this + 11) & 0x20) != 0 )
    return ((*(this + 10) << 16) | *(this + 4));
  else
    return CKeyValues_Data::Internal_GetNameSymbol(this);
}


// KeyValues::GetNameSymbol  (line 1014, @0x0000000002f74430, libserver.so)  // inlines: HKeySymbol, Internal_GetNameSymbol
// calls: CKeyValues_Data::Internal_GetNameSymbol
// callers: CDOTA_Ability_DataDriven::GetModifierDataIndexByName, CDOTA_Item_DataDriven::GetModifierDataIndexByName, KeyValues::RecursiveLoadFromBuffer
HKeySymbol __fastcall KeyValues::GetNameSymbol(const KeyValues *const this)
{
  if ( this == 0 )
    return 0xFFFFFF;
  if ( (*(&this->CKeyValues_Data + 11) & 0x20) != 0 )
    return ((*(&this->CKeyValues_Data + 10) << 16) | *(&this->CKeyValues_Data + 4));
  return CKeyValues_Data::Internal_GetNameSymbol(this);
}


// CKeyValues_Data::Internal_GetNameSymbolCaseSensitive  (line 1024, @0x0000000002f74470, libserver.so)
HKeySymbol __fastcall CKeyValues_Data::Internal_GetNameSymbolCaseSensitive(const CKeyValues_Data *const this)
{
  return (*(this + 4) | (*(this + 10) << 16));
}


// KeyValues::GetNameSymbolCaseSensitive  (line 1029, @0x0000000002f74490, libserver.so)  // inlines: HKeySymbol, Internal_GetNameSymbolCaseSensitive
HKeySymbol __fastcall KeyValues::GetNameSymbolCaseSensitive(const KeyValues *const this)
{
  HKeySymbol result; // eax

  result.nIndex = 0xFFFFFF;
  if ( this != 0 )
    return ((*(&this->CKeyValues_Data + 10) << 16) | *(&this->CKeyValues_Data + 4));
  return result;
}


// KeyValues::UsesEscapeSequences  (line 1043, @0x0000000002f744c0, libserver.so)  // inlines: Internal_SetHasEscapeSequences
// callers: ReadEncryptedKVFile, CWeaponScriptParser::ReadEncryptedKVFile, CEconItemSchema::BInitBinaryBuffer, CEconItemSchema::BInitTextBuffer
void __fastcall KeyValues::UsesEscapeSequences(KeyValues *const this, bool state)
{
  *(&this->CKeyValues_Data + 11) = (8 * state) | *(&this->CKeyValues_Data + 11) & 0xF7;
}


// KeyValues::SetParserEmptyKeyReplacement  (line 1053, @0x0000000002f744e0, libserver.so)
// globals: KeyValues::s_pParserCompat_EmptyKeyReplacement
const char *__fastcall KeyValues::SetParserEmptyKeyReplacement(const char *pNew)
{
  const char *result; // rax

  result = KeyValues::s_pParserCompat_EmptyKeyReplacement;
  KeyValues::s_pParserCompat_EmptyKeyReplacement = pNew;
  return result;
}


// KeyValues::LoadFromFile  (line 1065, @0x0000000002f7e040, libserver.so)  // inlines: AlignValue<int>, GetOptimalReadSize<int>
// calls: KeyValues::LoadFromBuffer
// callers: Script_LoadKeyValues, CPropData::ParsePropDataFile, CGameEventManager::LoadEventsFromFile, ReadEncryptedKVFile, CWeaponScriptParser::ReadEncryptedKVFile, CWeaponScriptParser::LoadFileWeaponInfoDatabase, CDataDrivenCameraLoader::LoadFromFile, CCommentarySystem::LoadCommentaryFile, CDecalEmitterSystem::LoadDecalsFromScript, CSource2Server::OnLoadSessionPersisters, CMultiplayRules::LoadVoiceCommandScript, CTier2AppSystemDict::GetAvailableAddonMaps_ (41 total)
// globals: s_LastFileLoadingFrom
bool __fastcall KeyValues::LoadFromFile(
        KeyValues *const this,
        IBaseFileSystem *filesystem,
        const char *resourceName,
        const char *pathID,
        GetSymbolProc_t pfnEvaluateSymbolProc)
{
  __int64 v7; // rbx
  bool result; // al
  int (**vptr_IBaseFileSystem)(...); // rax
  unsigned int v10; // r14d
  int v11; // eax
  __int64 v12; // rsi
  bool v13; // bl
  char *v14; // r10
  bool v15; // al
  char *buffer; // [rsp+28h] [rbp-58h]
  int v20; // [rsp+34h] [rbp-4Ch]
  unsigned int fileSize; // [rsp+38h] [rbp-48h]
  _DWORD v22[13]; // [rsp+4Ch] [rbp-34h] BYREF

  v7 = (*(filesystem->_vptr_IBaseFileSystem + 2))(filesystem, resourceName, "rb");
  result = 0;
  if ( v7 != 0 )
  {
    vptr_IBaseFileSystem = filesystem->_vptr_IBaseFileSystem;
    s_LastFileLoadingFrom = resourceName;
    fileSize = vptr_IBaseFileSystem[6](filesystem, v7);
    v10 = fileSize + 2;
    if ( (*(filesystem[-1]._vptr_IBaseFileSystem + 91))(filesystem - 1, v7, v22, 0, 0) != 0 )
      v10 = -v22[0] & (v10 + v22[0] - 1);
    buffer = (*(filesystem[-1]._vptr_IBaseFileSystem + 92))(filesystem - 1, v7, v10, 0);
    v11 = (*(filesystem[-1]._vptr_IBaseFileSystem + 79))(filesystem - 1, buffer, v10, fileSize, v7);
    v12 = v7;
    v20 = v11;
    v13 = 0;
    (*(filesystem->_vptr_IBaseFileSystem + 3))(filesystem, v12);
    v14 = buffer;
    if ( v20 != 0 )
    {
      buffer[fileSize] = 0;
      buffer[fileSize + 1] = 0;
      v15 = KeyValues::LoadFromBuffer(this, resourceName, buffer, filesystem, pathID, pfnEvaluateSymbolProc, 0);
      v14 = buffer;
      v13 = v15;
    }
    (*(filesystem[-1]._vptr_IBaseFileSystem + 93))(filesystem - 1, v14);
    return v13;
  }
  return result;
}


// KeyValues::SaveToFile  (line 1103, @0x0000000002f75030, libserver.so)
// calls: KeyValues::RecursiveSaveToFile, DevMsg
// callers: CDOTAGamerules::SaveLocalCustomGameAccountRecords, WriteSaveGameToFile, CNavMesh::CommandNavSaveSelected
// strings: "wb", "KeyValues::SaveToFile: couldn't open file \"%s\" in path \"%s\".\n"
bool __fastcall KeyValues::SaveToFile(
        KeyValues *const this,
        IBaseFileSystem *filesystem,
        const char *resourceName,
        const char *pathID,
        bool bWriteEmptySubkeys)
{
  void *v9; // rax
  void *v10; // r12
  char *v12; // rcx
  char *v13; // rdx

  v9 = (*(filesystem->_vptr_IBaseFileSystem + 2))(filesystem, resourceName, "wb");
  v10 = v9;
  if ( v9 != 0 )
  {
    KeyValues::RecursiveSaveToFile(this, filesystem, v9, 0, 0, bWriteEmptySubkeys, 1);
    (*(filesystem->_vptr_IBaseFileSystem + 3))(filesystem, v10);
    return 1;
  }
  else
  {
    v12 = pathID;
    v13 = "NULL";
    if ( pathID == 0 )
      v12 = "NULL";
    if ( resourceName != 0 )
      v13 = resourceName;
    DevMsg(1, "KeyValues::SaveToFile: couldn't open file \"%s\" in path \"%s\".\n", v13, v12);
    return 0;
  }
}


// KeyValues::WriteIndents  (line 1124, @0x0000000002f74560, libserver.so)
// calls: KeyValues::InternalWrite
void __fastcall KeyValues::WriteIndents(
        KeyValues *const this,
        IBaseFileSystem *filesystem,
        FileHandle_t f,
        CUtlBuffer *pBuf,
        int indentLevel)
{
  int v8; // r12d

  v8 = 0;
  if ( indentLevel > 0 )
  {
    do
    {
      ++v8;
      KeyValues::InternalWrite(this, filesystem, f, pBuf, "\t", 1);
    }
    while ( v8 != indentLevel );
  }
}


// KeyValues::WriteConvertedString  (line 1135, @0x0000000002f745d0, libserver.so)  // inlines: V_strlen
// calls: strlen, KeyValues::InternalWrite
// callers: KeyValues::RecursiveSaveToFile
void __fastcall KeyValues::WriteConvertedString(
        KeyValues *const this,
        IBaseFileSystem *filesystem,
        FileHandle_t f,
        CUtlBuffer *pBuf,
        const char *pszString)
{
  const char *v8; // r15
  int v9; // ecx
  const char *v10; // r8
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rsi
  char v14; // dl
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rax
  int v19; // [rsp+10h] [rbp-40h]

  if ( pszString != 0 )
  {
    v19 = strlen(pszString);
    v8 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * (v19 + 1));
    v9 = v19;
    v10 = pszString;
    if ( v19 < 0 )
      goto LABEL_9;
  }
  else
  {
    v17 = (**g_pMemAlloc)(g_pMemAlloc, 2);
    v9 = 0;
    v10 = 0;
    v8 = v17;
  }
  v11 = v10;
  v12 = 0;
  do
  {
    v14 = *v11;
    if ( *v11 == 34 || (*(&this->CKeyValues_Data + 11) & 8) != 0 && v14 == 92 )
    {
      v15 = v12++;
      v8[v15] = 92;
      v14 = *v11;
    }
    v13 = v12;
    ++v11;
    ++v12;
    v8[v13] = v14;
  }
  while ( v9 >= v11 - v10 );
LABEL_9:
  if ( v8 != 0 )
    v16 = strlen(v8);
  else
    v16 = 0;
  KeyValues::InternalWrite(this, filesystem, f, pBuf, v8, v16);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
}


// KeyValues::InternalWrite  (line 1164, @0x0000000002f74500, libserver.so)
// calls: CUtlBuffer::Put
// callers: KeyValues::WriteIndents, KeyValues::WriteConvertedString, KeyValues::RecursiveSaveToFile
void __fastcall KeyValues::InternalWrite(
        KeyValues *const this,
        IBaseFileSystem *filesystem,
        FileHandle_t f,
        CUtlBuffer *pBuf,
        const void *pData,
        int len)
{
  if ( filesystem != 0 )
    (*(filesystem->_vptr_IBaseFileSystem + 1))(filesystem, pData, len, f);
  if ( pBuf != 0 )
    CUtlBuffer::Put(pBuf, pData, len);
}


// KeyValues::RecursiveSaveToFile  (line 1182, @0x0000000002f74700, libserver.so)  // inlines: GetName, Internal_GetSubKey, ResolveStringValue, ResolveSubKeyValue, ResolveUint64Value, ResolveWStringValue, V_strlen, WriteIndents
// calls: KeyValues::InternalWrite, CKeyValues_Data::Internal_GetName, KeyValues::WriteConvertedString, strlen, V_snprintf, DevMsg, operator new [], V_UTF32ToUTF8, operator delete [], __stack_chk_fail
// callers: KeyValues::RecursiveSaveToFile, KeyValues::SaveToFile, KeyValues::RecursiveSaveToLocalizationFile
// strings: "\"\t\t\"", "0x%016llX", "KeyValues::RecursiveSaveToFile: TODO, missing code for TYPE_COLOR.\n"
// globals: jpt_2F74924
void __fastcall KeyValues::RecursiveSaveToFile(
        KeyValues *const this,
        IBaseFileSystem *filesystem,
        FileHandle_t f,
        CUtlBuffer *pBuf,
        int indentLevel,
        bool bWriteEmptySubkeys,
        bool bWriteRootKey)
{
  int v10; // edx
  int v12; // ebx
  const char *Name; // r8
  int v14; // ebx
  int v15; // ebx
  float *m_uValue; // rbx
  int v17; // r15d
  char v18; // al
  int n; // ebx
  const char *v20; // rax
  const char *v21; // r8
  int v22; // eax
  int v23; // r9d
  const char *v24; // rcx
  char *v25; // r9
  int v26; // edx
  unsigned int v27; // eax
  const char *v28; // r8
  int m; // ebx
  const char *v30; // rax
  const char *v31; // r8
  int v32; // eax
  int v33; // r9d
  int k; // ebx
  const char *v35; // rax
  const char *v36; // r8
  int v37; // eax
  int v38; // r9d
  int v39; // edx
  int j; // ebx
  const char *v41; // rax
  const char *v42; // r8
  int v43; // eax
  int v44; // r9d
  int v45; // edx
  const char *v46; // rax
  int i; // ebx
  const char *v48; // rax
  const char *pNameb; // [rsp+10h] [rbp-A0h]
  const char *pName; // [rsp+10h] [rbp-A0h]
  const char *pNamec; // [rsp+10h] [rbp-A0h]
  const char *pNamea; // [rsp+10h] [rbp-A0h]
  const char *pString; // [rsp+18h] [rbp-98h]
  const char *pStringe; // [rsp+18h] [rbp-98h]
  char *pStringa; // [rsp+18h] [rbp-98h]
  const char *pStringb; // [rsp+18h] [rbp-98h]
  const char *pStringf; // [rsp+18h] [rbp-98h]
  const char *pStringc; // [rsp+18h] [rbp-98h]
  const char *pStringg; // [rsp+18h] [rbp-98h]
  const char *pStringd; // [rsp+18h] [rbp-98h]
  KeyValues *thisa; // [rsp+38h] [rbp-78h]
  char buf[48]; // [rsp+40h] [rbp-70h] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-38h]

  v10 = 0;
  v65 = __readfsqword(0x28u);
  if ( bWriteRootKey )
  {
    v12 = 0;
    if ( indentLevel > 0 )
    {
      do
      {
        KeyValues::InternalWrite(this, filesystem, f, pBuf, "\t", 1);
        ++v12;
      }
      while ( v12 != indentLevel );
    }
    KeyValues::InternalWrite(this, filesystem, f, pBuf, "\"", 1);
    Name = "";
    if ( this != 0 )
      Name = CKeyValues_Data::Internal_GetName(this);
    v14 = 0;
    KeyValues::WriteConvertedString(this, filesystem, f, pBuf, Name);
    KeyValues::InternalWrite(this, filesystem, f, pBuf, "\"\n", 2);
    if ( indentLevel > 0 )
    {
      do
      {
        KeyValues::InternalWrite(this, filesystem, f, pBuf, "\t", 1);
        ++v14;
      }
      while ( v14 != indentLevel );
    }
    KeyValues::InternalWrite(this, filesystem, f, pBuf, "{\n", 2);
    v10 = 1;
  }
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      thisa = this;
      v17 = indentLevel + v10;
      while ( 2 )
      {
        v18 = *(m_uValue + 11);
        if ( (v18 & 0x47) == 0x40 )
          goto LABEL_37;
LABEL_18:
        switch ( v18 & 7 )
        {
          case 0:
            if ( bWriteEmptySubkeys )
              KeyValues::RecursiveSaveToFile(m_uValue, filesystem, f, pBuf, v17, 1, 1);
            break;
          case 1:
            pStringd = m_uValue;
            if ( (v18 & 0x10) != 0 )
            {
              v46 = "";
              if ( *m_uValue != 0 )
                v46 = *m_uValue;
              pStringd = v46;
            }
            if ( *pStringd == 0 && !bWriteEmptySubkeys )
              break;
            if ( v17 > 0 )
            {
              pNamea = m_uValue;
              for ( i = 0; i != v17; ++i )
                KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\t", 1);
              m_uValue = pNamea;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"", 1);
            v48 = CKeyValues_Data::Internal_GetName(m_uValue);
            KeyValues::WriteConvertedString(thisa, filesystem, f, pBuf, v48);
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"\t\t\"", 4);
            KeyValues::WriteConvertedString(thisa, filesystem, f, pBuf, pStringd);
            goto LABEL_32;
          case 2:
            if ( v17 > 0 )
            {
              pStringc = m_uValue;
              for ( j = 0; j != v17; ++j )
                KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\t", 1);
              m_uValue = pStringc;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"", 1);
            v41 = CKeyValues_Data::Internal_GetName(m_uValue);
            v42 = v41;
            if ( v41 != 0 )
            {
              pStringg = v41;
              v43 = strlen(v41);
              v42 = pStringg;
              v44 = v43;
            }
            else
            {
              v44 = 0;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, v42, v44);
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"\t\t\"", 4);
            V_snprintf(buf, 32, "%d", *m_uValue);
            v25 = buf;
            do
            {
              v45 = *v25;
              v25 += 4;
              v27 = ~v45 & (v45 - 16843009) & 0x80808080;
            }
            while ( v27 == 0 );
            goto LABEL_29;
          case 3:
            if ( v17 > 0 )
            {
              pStringb = m_uValue;
              for ( k = 0; k != v17; ++k )
                KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\t", 1);
              m_uValue = pStringb;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"", 1);
            v35 = CKeyValues_Data::Internal_GetName(m_uValue);
            v36 = v35;
            if ( v35 != 0 )
            {
              pStringf = v35;
              v37 = strlen(v35);
              v36 = pStringf;
              v38 = v37;
            }
            else
            {
              v38 = 0;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, v36, v38);
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"\t\t\"", 4);
            V_snprintf(buf, 48, "%f", *m_uValue);
            v25 = buf;
            do
            {
              v39 = *v25;
              v25 += 4;
              v27 = ~v39 & (v39 - 16843009) & 0x80808080;
            }
            while ( v27 == 0 );
            goto LABEL_29;
          case 4:
            break;
          case 5:
            if ( (v18 & 0x10) != 0 )
            {
              v28 = *m_uValue;
              if ( *m_uValue == 0 )
                break;
            }
            else
            {
              v28 = m_uValue;
            }
            pNameb = v28;
            pStringa = operator new[](0x8000u);
            if ( V_UTF32ToUTF8(pNameb, pStringa, 0x8000, 4) != 0 )
            {
              if ( v17 > 0 )
              {
                pName = m_uValue;
                for ( m = 0; m != v17; ++m )
                  KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\t", 1);
                m_uValue = pName;
              }
              KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"", 1);
              v30 = CKeyValues_Data::Internal_GetName(m_uValue);
              v31 = v30;
              if ( v30 != 0 )
              {
                pNamec = v30;
                v32 = strlen(v30);
                v31 = pNamec;
                v33 = v32;
              }
              else
              {
                v33 = 0;
              }
              KeyValues::InternalWrite(thisa, filesystem, f, pBuf, v31, v33);
              KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"\t\t\"", 4);
              KeyValues::WriteConvertedString(thisa, filesystem, f, pBuf, pStringa);
              KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"\n", 2);
            }
            if ( pStringa != 0 )
              operator delete[](pStringa);
            break;
          case 6:
            DevMsg(1, "KeyValues::RecursiveSaveToFile: TODO, missing code for TYPE_COLOR.\n");
            break;
          case 7:
            if ( v17 > 0 )
            {
              pString = m_uValue;
              for ( n = 0; n != v17; ++n )
                KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\t", 1);
              m_uValue = pString;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"", 1);
            v20 = CKeyValues_Data::Internal_GetName(m_uValue);
            v21 = v20;
            if ( v20 != 0 )
            {
              pStringe = v20;
              v22 = strlen(v20);
              v21 = pStringe;
              v23 = v22;
            }
            else
            {
              v23 = 0;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, v21, v23);
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"\t\t\"", 4);
            if ( (*(m_uValue + 11) & 0x10) != 0 )
              v24 = **m_uValue;
            else
              v24 = *m_uValue;
            V_snprintf(buf, 32, "0x%016llX", v24);
            v25 = buf;
            do
            {
              v26 = *v25;
              v25 += 4;
              v27 = ~v26 & (v26 - 16843009) & 0x80808080;
            }
            while ( v27 == 0 );
LABEL_29:
            if ( (v27 & 0x8080) == 0 )
            {
              LOBYTE(v27) = BYTE2(v27);
              LODWORD(v25) = v25 + 2;
            }
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, buf, v25 - (__CFADD__(v27, v27) + 3) - buf);
LABEL_32:
            KeyValues::InternalWrite(thisa, filesystem, f, pBuf, "\"\n", 2);
            m_uValue = *(m_uValue + 3);
            if ( m_uValue == 0 )
              goto LABEL_33;
            continue;
        }
        break;
      }
      while ( 1 )
      {
        m_uValue = *(m_uValue + 3);
        if ( m_uValue == 0 )
          break;
        v18 = *(m_uValue + 11);
        if ( (v18 & 0x47) != 0x40 )
          goto LABEL_18;
LABEL_37:
        if ( *m_uValue == 0 )
          goto LABEL_18;
        KeyValues::RecursiveSaveToFile(m_uValue, filesystem, f, pBuf, v17, bWriteEmptySubkeys, 1);
      }
LABEL_33:
      this = thisa;
    }
  }
  if ( bWriteRootKey )
  {
    v15 = 0;
    if ( indentLevel > 0 )
    {
      do
      {
        KeyValues::InternalWrite(this, filesystem, f, pBuf, "\t", 1);
        ++v15;
      }
      while ( v15 != indentLevel );
    }
    KeyValues::InternalWrite(this, filesystem, f, pBuf, "}\n", 2);
  }
}


// KeyValues::RecursiveSaveToLocalizationFile  (line 1331, @0x0000000002f78a80, libserver.so)  // inlines: PeekPut, PutChar, PutTabs, PutTypeBin<char>, RecursiveSaveToFile, WasLastCharacterCR, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::SetBufferType, KeyValues::RecursiveSaveToFile, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, V_UnicodeLength(char const*), V_UTF8CharsToUTF16, operator new [], operator delete [], CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
void __fastcall KeyValues::RecursiveSaveToLocalizationFile(
        KeyValues *const this,
        IBaseFileSystem *filesystem,
        FileHandle_t f,
        int indentLevel)
{
  int m_nTab; // r14d
  unsigned __int8 *m_pMemory; // r15
  size_t v10; // rdi
  unsigned __int64 v11; // rax
  void *v12; // r14
  unsigned int nUTF8Length; // [rsp+8h] [rbp-98h]
  int nWideBufBytes; // [rsp+Ch] [rbp-94h]
  unsigned __int16 marker; // [rsp+1Eh] [rbp-82h] BYREF
  CUtlBuffer localizationKVbuf; // [rsp+20h] [rbp-80h] BYREF

  if ( f != 0 )
  {
    CUtlBuffer::CUtlBuffer(&localizationKVbuf, 0, 0, 0);
    CUtlBuffer::SetBufferType(&localizationKVbuf, 1, 0);
    KeyValues::RecursiveSaveToFile(this, 0, 0, &localizationKVbuf, indentLevel, 0, 1);
    if ( (localizationKVbuf.m_Flags & 1) != 0
      && localizationKVbuf.m_Put != localizationKVbuf.m_nOffset
      && localizationKVbuf.m_Memory.m_pMemory[localizationKVbuf.m_Put - 1 - localizationKVbuf.m_nOffset] == 10
      || localizationKVbuf.m_Put == 0 )
    {
      m_nTab = 0;
      if ( (localizationKVbuf.m_Flags & 0x10) == 0 )
        m_nTab = localizationKVbuf.m_nTab;
      while ( --m_nTab >= 0 )
      {
        while ( CUtlBuffer::CheckPut(&localizationKVbuf, 1) )
        {
          localizationKVbuf.m_Memory.m_pMemory[localizationKVbuf.m_Put - localizationKVbuf.m_nOffset] = 9;
          ++localizationKVbuf.m_Put;
          CUtlBuffer::AddNullTermination(&localizationKVbuf);
          if ( --m_nTab < 0 )
            goto LABEL_10;
        }
      }
    }
LABEL_10:
    if ( CUtlBuffer::CheckPut(&localizationKVbuf, 1) )
    {
      localizationKVbuf.m_Memory.m_pMemory[localizationKVbuf.m_Put - localizationKVbuf.m_nOffset] = 0;
      ++localizationKVbuf.m_Put;
      CUtlBuffer::AddNullTermination(&localizationKVbuf);
    }
    m_pMemory = localizationKVbuf.m_Memory.m_pMemory;
    nUTF8Length = V_UnicodeLength(localizationKVbuf.m_Memory.m_pMemory);
    nWideBufBytes = V_UTF8CharsToUTF16(m_pMemory, nUTF8Length, 0, 0, 4);
    v10 = -1;
    v11 = nWideBufBytes >> 1;
    if ( v11 <= 0x3F80000000000000LL )
      v10 = 2 * v11;
    v12 = operator new[](v10);
    V_UTF8CharsToUTF16(m_pMemory, nUTF8Length, v12, nWideBufBytes, 4);
    marker = -257;
    (*(filesystem->_vptr_IBaseFileSystem + 1))(filesystem, &marker, 2, f);
    (*(filesystem->_vptr_IBaseFileSystem + 1))(filesystem, v12, (nWideBufBytes - 2), f);
    if ( v12 != 0 )
      operator delete[](v12);
    CUtlMemory<unsigned char,int>::Purge(&localizationKVbuf.m_Memory);
  }
}


// KeyValues::FindKey  (line 1368, @0x0000000002f750f0, libserver.so)  // inlines: Internal_GetNameSymbol, Internal_GetSubKey, ResolveSubKeyValue
// calls: CKeyValues_Data::Internal_GetNameSymbol
// callers: CBaseEntity::PrecacheModelComponents, CPropData::ParsePropFromKV, CBaseProp::ParsePropData, CDOTABaseAbility::ProcessAbilityData, CDOTAGameManager::GetHeroIDByName, CDOTAGameManager::GetFirstHero, CDOTAGameManager::GetNextHero, CDOTAGameManager::LoadCustomHeroList, IsHeroAvailableByKV, CDOTAGameManager::VerifyUniqueAbilityIDs, CDOTAGameManager::VerifyHeroIDs, CDOTAGameManager::SetupSingleItemCombine (83 total)
KeyValues *__fastcall KeyValues::FindKey(const KeyValues *const this, HKeySymbol keySymbol)
{
  uintp i; // rbx

  if ( this == 0 || (*(&this->CKeyValues_Data + 11) & 0x47) != 0x40 )
    return 0;
  for ( i = this->m_uValue; i != 0; i = *(i + 12) )
  {
    if ( (*(i + 11) & 0x20) != 0 )
    {
      if ( keySymbol.nIndex == ((*(i + 10) << 16) | *(i + 8)) )
        return i;
    }
    else if ( keySymbol.nIndex == CKeyValues_Data::Internal_GetNameSymbol(i).nIndex )
    {
      return i;
    }
  }
  return 0;
}


// KeyValues::FindKey  (line 1390, @0x0000000002f799a0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCount, InsertMultipleBefore, Internal_GetNameSymbol, Internal_GetSubKey, Purge, RemoveAll, ResolveSubKeyValue, V_memcpy, V_strlen, memcpy, strchr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: strchr, memcpy, strlen, KeyValuesSystem, CUtlMemory<char, int>::Purge, CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector, CUtlVectorBase<char, CUtlMemory<char, int> >::ShiftElementsRight, CKeyValues_Data::Internal_GetNameSymbol, KeyValues::operator new, KeyValues::KeyValues, CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetSubKey (15 total)
// callers: ProtoBufHelper::RecursiveAddProtoBufToKV, ProtoBufHelper::ParseKV, CPropData::ParsePropFromBase, CPropData::GetPropValueFromBase, CBreakModelsPrecached::ComputeServerSideSpawn, CPropData::ParsePropDataFile, HasLaunchOption, FileWeaponInfo_t::Parse, CSource2Server::ApplyGameSettings, CBaseFlex::HandleStartGestureSceneEvent, CDataDrivenCameraLoader::LoadFromFile, CCommentarySystem::ApplyCommentaryModifications (211 total)
KeyValues *__fastcall KeyValues::FindKey(KeyValues *const this, const char *keyName, bool bCreate)
{
  const void *v4; // r13
  KeyValues *result; // rax
  char *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  char *m_pMemory; // rdi
  int v10; // r12d
  __int64 v11; // rax
  int v12; // r12d
  uintp m_uValue; // rbx
  KeyValues *v14; // r12
  char *v15; // [rsp+10h] [rbp-60h]
  KeyValues *v17; // [rsp+18h] [rbp-58h]
  CUtlVector<char,CUtlMemory<char,int> > szBuf; // [rsp+20h] [rbp-50h] BYREF

  if ( this == 0 )
    return 0;
  v4 = keyName;
  result = this;
  if ( keyName != 0 && *keyName != 0 )
  {
    szBuf.m_Size = 0;
    szBuf.m_Memory.m_pMemory = 0;
    szBuf.m_Memory.m_nAllocationCount = 0;
    szBuf.m_Memory.m_nGrowSize = 0;
    v6 = strchr(keyName, 47);
    v15 = v6;
    if ( v6 != 0 )
    {
      v8 = v6 - v4;
      m_pMemory = 0;
      v10 = v6 - v4 + 1;
      if ( v10 > 0 )
      {
        CUtlVectorBase<char,CUtlMemory<char,int>>::GrowVector(&szBuf, v10);
        CUtlVectorBase<char,CUtlMemory<char,int>>::ShiftElementsRight(&szBuf, 0, v10);
        m_pMemory = szBuf.m_Memory.m_pMemory;
      }
      if ( v8 < 0 )
        __debugbreak();
      memcpy(m_pMemory, v4, v8);
      szBuf.m_Memory.m_pMemory[v8] = 0;
      if ( strlen(v4) >= 2 )
        v4 = szBuf.m_Memory.m_pMemory;
    }
    v11 = KeyValuesSystem(v7);
    v12 = (*(*v11 + 16LL))(v11, v4, bCreate);
    if ( v12 == 0xFFFFFF )
      goto LABEL_15;
    m_uValue = 0;
    if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
    {
      m_uValue = this->m_uValue;
      if ( this->m_uValue != 0 )
      {
        while ( 1 )
        {
          if ( (*(m_uValue + 11) & 0x20) != 0 )
          {
            if ( ((*(m_uValue + 10) << 16) | *(m_uValue + 8)) == v12 )
              goto LABEL_26;
          }
          else if ( CKeyValues_Data::Internal_GetNameSymbol(m_uValue).nIndex == v12 )
          {
            goto LABEL_26;
          }
          if ( *(m_uValue + 12) == 0 )
            break;
          m_uValue = *(m_uValue + 12);
        }
      }
    }
    if ( bCreate )
    {
      v14 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v14, v4);
      if ( m_uValue != 0 )
      {
        *(m_uValue + 12) = v14;
      }
      else
      {
        CKeyValues_Data::Internal_ClearData(this);
        CKeyValues_Data::Internal_SetSubKey(this, v14);
      }
      v14->m_pPeer = 0;
      m_uValue = v14;
LABEL_26:
      if ( v15 != 0 )
        result = KeyValues::FindKey(m_uValue, v15 + 1, bCreate);
      else
        result = m_uValue;
    }
    else
    {
LABEL_15:
      result = 0;
    }
    szBuf.m_Size = 0;
    if ( (szBuf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      v17 = result;
      CUtlMemory<char,int>::Purge(&szBuf.m_Memory);
      result = v17;
      if ( (szBuf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<char,int>::Purge(&szBuf.m_Memory);
        return v17;
      }
    }
  }
  return result;
}


// KeyValues::CreateNewKey  (line 1505, @0x0000000002f77eb0, libserver.so)  // inlines: GetName, Internal_GetSubKey, ResolveSubKeyValue
// calls: V_snprintf, KeyValues::CreateKeyUsingKnownLastChild, CKeyValues_Data::Internal_GetName, V_atoi, __stack_chk_fail
// callers: ProtoBufHelper::RecursiveAddProtoBufToKV, CDOTAGamerules::SaveStockInformation, PerformDOTASaveGame, CDOTA_PlayerResource::WriteSaveGameInformation, CDOTA_BaseNPC::OnSaveState, SaveRoshanInformation, CDOTA_Unit_Hero_Legion_Commander::OnSaveState
KeyValues *__fastcall KeyValues::CreateNewKey(KeyValues *const this)
{
  int v2; // r12d
  KeyValues *m_uValue; // rbx
  const char *Name; // rax
  int v6; // eax
  char buf[24]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v2 = 1;
  m_uValue = 0;
  v8 = __readfsqword(0x28u);
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( 1 )
      {
        Name = CKeyValues_Data::Internal_GetName(m_uValue);
        v6 = V_atoi(Name);
        if ( v6 >= v2 )
          v2 = v6 + 1;
        if ( m_uValue->m_pPeer == 0 )
          break;
        m_uValue = m_uValue->m_pPeer;
      }
    }
  }
  V_snprintf(buf, 12, "%d", v2);
  return KeyValues::CreateKeyUsingKnownLastChild(this, buf, m_uValue);
}


// KeyValues::CreateKey  (line 1534, @0x0000000002f77f70, libserver.so)  // inlines: FindLastSubKey, Internal_GetSubKey, ResolveSubKeyValue
// calls: KeyValues::CreateKeyUsingKnownLastChild
// callers: KeyValues::ReadAsBinaryFilteredInternal, KeyValues::KVJSONParserCreateNewSubNode
KeyValues *__fastcall KeyValues::CreateKey(KeyValues *const this, const char *keyName)
{
  KeyValues *v2; // rdx
  uintp m_uValue; // rcx

  v2 = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( *(m_uValue + 12) != 0 )
        m_uValue = *(m_uValue + 12);
      v2 = m_uValue;
    }
  }
  return KeyValues::CreateKeyUsingKnownLastChild(this, keyName, v2);
}


// KeyValues::CreatePeerKey  (line 1543, @0x0000000002f77dc0, libserver.so)  // inlines: Internal_SetHasEscapeSequences
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::operator delete, _Unwind_Resume
// callers: KeyValues::KVJSONParserCreateNewSubNode
KeyValues *__fastcall KeyValues::CreatePeerKey(KeyValues *const this, const char *keyName)
{
  KeyValues *v4; // rbx

  v4 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v4, keyName);
  *(&v4->CKeyValues_Data + 11) = *(&this->CKeyValues_Data + 11) & 8 | *(&v4->CKeyValues_Data + 11) & 0xF7;
  v4->m_pPeer = this->m_pPeer;
  this->m_pPeer = v4;
  return v4;
}


// KeyValues::CreateKeyUsingKnownLastChild  (line 1557, @0x0000000002f77e30, libserver.so)  // inlines: AddSubkeyUsingKnownLastChild, Internal_SetHasEscapeSequences, SetNextKey
// calls: KeyValues::operator new, KeyValues::KeyValues, CKeyValues_Data::Internal_SetSubKey, KeyValues::operator delete, _Unwind_Resume
// callers: KeyValues::CreateNewKey, KeyValues::CreateKey, KeyValues::RecursiveLoadFromBuffer
KeyValues *__fastcall KeyValues::CreateKeyUsingKnownLastChild(
        KeyValues *const this,
        const char *keyName,
        KeyValues *pLastChild)
{
  KeyValues *v6; // rbx

  v6 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v6, keyName);
  *(&v6->CKeyValues_Data + 11) = *(&this->CKeyValues_Data + 11) & 8 | *(&v6->CKeyValues_Data + 11) & 0xF7;
  if ( pLastChild != 0 )
    pLastChild->m_pPeer = v6;
  else
    CKeyValues_Data::Internal_SetSubKey(this, v6);
  return v6;
}


// KeyValues::AddSubkeyUsingKnownLastChild  (line 1571, @0x0000000002f75170, libserver.so)  // inlines: SetNextKey
// calls: CKeyValues_Data::Internal_SetSubKey
void __fastcall KeyValues::AddSubkeyUsingKnownLastChild(
        KeyValues *const this,
        KeyValues *pSubkey,
        KeyValues *pLastChild)
{
  if ( pLastChild != 0 )
    pLastChild->m_pPeer = pSubkey;
  else
    CKeyValues_Data::Internal_SetSubKey(this, pSubkey);
}


// KeyValues::AddSubKey  (line 1596, @0x0000000002f75190, libserver.so)  // inlines: GetNextKey, Internal_GetSubKey, ResolveSubKeyValue, SetNextKey
// calls: CKeyValues_Data::Internal_SetSubKey
// callers: ScriptTableToKeyValues, CBaseEntity::ApplySessionPersisterValues, CSource2Server::OnSaveSessionPersisters, CBaseGameStats_Driver::CollectData, CMultiplayRules::GetTaggedConVarList, CBasePlayer::ApplySessionPersisterValues, CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV, CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive, KeyValues::RecursiveMergeKeyValues, KeyValues::FromString, KeyValues::MergeFrom
void __fastcall KeyValues::AddSubKey(KeyValues *const this, KeyValues *pSubkey)
{
  uintp m_uValue; // rdx

  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 && (m_uValue = this->m_uValue, this->m_uValue != 0) )
  {
    while ( *(m_uValue + 12) != 0 )
      m_uValue = *(m_uValue + 12);
    *(m_uValue + 12) = pSubkey;
  }
  else
  {
    CKeyValues_Data::Internal_SetSubKey(this, pSubkey);
  }
}


// KeyValues::FindAndDeleteSubKey  (line 1619, @0x0000000002f79c20, libserver.so)
// calls: KeyValues::FindKey, KeyValues::RemoveSubKey
void __fastcall KeyValues::FindAndDeleteSubKey(KeyValues *const this, const char *keyName)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  if ( Key != 0 )
    KeyValues::RemoveSubKey(this, Key, 1);
}


// KeyValues::Count  (line 1627, @0x0000000002f751d0, libserver.so)  // inlines: GetFirstSubKey, GetNextKey, Internal_GetSubKey, ResolveSubKeyValue
// callers: CDOTAEventDefinition::InitEventScoreRewards, CDOTAEventDefinition::InitEventActions
int __fastcall KeyValues::Count(const KeyValues *const this)
{
  int result; // eax
  uintp i; // rdx

  if ( this == 0 )
    return 0;
  result = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    for ( i = this->m_uValue; i != 0; ++result )
      i = *(i + 12);
  }
  return result;
}


// KeyValues::Element  (line 1637, @0x0000000002f75220, libserver.so)  // inlines: GetFirstSubKey, GetNextKey, Internal_GetSubKey, ResolveSubKeyValue
KeyValues *__fastcall KeyValues::Element(const KeyValues *const this, int nIndex)
{
  KeyValues *result; // rax
  KeyValues *m_uValue; // rdx

  if ( this == 0 )
    return 0;
  result = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      if ( nIndex == 0 )
        return m_uValue;
      while ( 1 )
      {
        m_uValue = m_uValue->m_pPeer;
        LODWORD(result) = result + 1;
        if ( m_uValue == 0 )
          break;
        if ( nIndex == result )
          return m_uValue;
      }
      return 0;
    }
  }
  return result;
}


// KeyValues::RemoveSubKey  (line 1656, @0x0000000002f77d20, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
// calls: KeyValues::deleteThis, CKeyValues_Data::Internal_SetSubKey
// callers: CDOTAGameManager::ApplyAbilitiesOverride, PerformDOTASaveGame, CCompendiumDataFileTemplateHandler::ResolveDefines, CCompendiumDataFileTemplateHandler::ResolveTemplatesRecursive, CCompendiumDataFileTemplateHandler::ExtractTemplatesRecursive, CCompendiumDataFileTemplateHandler::ExtractTemplates, KeyValues::RecursiveLoadFromBuffer, KeyValues::FromJSON, KeyValues::FindAndDeleteSubKey, KeyValues::ProcessResolutionKeys, KeyValues::MergeFrom
void __fastcall KeyValues::RemoveSubKey(KeyValues *const this, KeyValues *subKey, bool bDelete)
{
  uintp m_uValue; // rax
  KeyValues *v5; // rcx
  KeyValues *m_pPeer; // rax
  bool v7; // [rsp+Ch] [rbp-14h]

  if ( subKey != 0 )
  {
    if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
    {
      m_uValue = this->m_uValue;
      if ( subKey == this->m_pSub )
      {
        v7 = bDelete;
        CKeyValues_Data::Internal_SetSubKey(this, subKey->m_pPeer);
        bDelete = v7;
      }
      else if ( m_uValue != 0 )
      {
        v5 = *(m_uValue + 12);
        if ( v5 != 0 )
        {
          if ( subKey == v5 )
          {
            v5 = this->m_uValue;
LABEL_14:
            v5->m_pPeer = subKey->m_pPeer;
          }
          else
          {
            while ( 1 )
            {
              m_pPeer = v5->m_pPeer;
              if ( m_pPeer == 0 )
                break;
              if ( subKey == m_pPeer )
                goto LABEL_14;
              v5 = v5->m_pPeer;
            }
          }
        }
      }
    }
    subKey->m_pPeer = 0;
    if ( bDelete )
      KeyValues::deleteThis(subKey);
  }
}


// KeyValues::InsertSubKey  (line 1690, @0x0000000002f75270, libserver.so)  // inlines: GetFirstSubKey, GetNextKey, Internal_GetSubKey, ResolveSubKeyValue
// calls: CKeyValues_Data::Internal_SetSubKey
void __fastcall KeyValues::InsertSubKey(KeyValues *const this, int nIndex, KeyValues *pSubKey)
{
  uintp m_uValue; // rcx
  int v4; // eax

  if ( nIndex != 0 )
  {
    if ( this != 0 && (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
    {
      m_uValue = this->m_uValue;
      if ( this->m_uValue != 0 )
      {
        v4 = 1;
        if ( nIndex == 1 )
        {
LABEL_13:
          pSubKey->m_pPeer = *(m_uValue + 12);
          *(m_uValue + 12) = pSubKey;
        }
        else
        {
          while ( 1 )
          {
            m_uValue = *(m_uValue + 12);
            if ( m_uValue == 0 )
              break;
            if ( ++v4 == nIndex )
              goto LABEL_13;
          }
        }
      }
    }
  }
  else
  {
    if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
      pSubKey->m_pPeer = this->m_uValue;
    else
      pSubKey->m_pPeer = 0;
    CKeyValues_Data::Internal_SetSubKey(this, pSubKey);
  }
}


// KeyValues::ContainsSubKey  (line 1720, @0x0000000002f75300, libserver.so)  // inlines: GetFirstSubKey, GetNextKey, Internal_GetSubKey, ResolveSubKeyValue
bool __fastcall KeyValues::ContainsSubKey(KeyValues *const this, KeyValues *pSubKey)
{
  bool result; // al
  KeyValues *m_uValue; // rdx

  if ( this == 0 )
    return 0;
  result = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( pSubKey != m_uValue )
      {
        m_uValue = m_uValue->m_pPeer;
        if ( m_uValue == 0 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}


// KeyValues::SwapSubKey  (line 1732, @0x0000000002f75350, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
// calls: CKeyValues_Data::Internal_SetSubKey
// callers: CDOTAEventSchema::Initialize
void __fastcall KeyValues::SwapSubKey(KeyValues *const this, KeyValues *pExistingSubkey, KeyValues *pNewSubKey)
{
  uintp m_uValue; // rcx
  KeyValues *v4; // rax

  if ( (*(&this->CKeyValues_Data + 11) & 0x47) != 0x40 )
  {
    if ( pExistingSubkey != 0 )
    {
      m_uValue = 0;
      goto LABEL_8;
    }
    goto LABEL_11;
  }
  m_uValue = this->m_uValue;
  if ( pExistingSubkey == this->m_pSub )
  {
LABEL_11:
    pNewSubKey->m_pPeer = pExistingSubkey->m_pPeer;
    pExistingSubkey->m_pPeer = 0;
    CKeyValues_Data::Internal_SetSubKey(this, pNewSubKey);
    return;
  }
LABEL_8:
  while ( 1 )
  {
    v4 = *(m_uValue + 12);
    if ( v4 == 0 )
      break;
    if ( pExistingSubkey == v4 )
    {
      pNewSubKey->m_pPeer = pExistingSubkey->m_pPeer;
      pExistingSubkey->m_pPeer = 0;
      *(m_uValue + 12) = pNewSubKey;
      return;
    }
    m_uValue = *(m_uValue + 12);
  }
}


// KeyValues::ElideSubKey  (line 1767, @0x0000000002f77fc0, libserver.so)  // inlines: GetNextKey, Internal_GetSubKey, Internal_SetSubKey, ResolveSubKeyValue, ~CKeyValues_Data, ~KeyValues
// calls: KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::operator delete, CKeyValues_Data::Internal_SetSubKey
void __fastcall KeyValues::ElideSubKey(KeyValues *const this, KeyValues *pSubKey)
{
  KeyValues *m_uValue; // rdx
  KeyValues *m_pPeer; // rax
  uintp v5; // r12
  _QWORD *p_m_pPeer; // rdx

  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      if ( pSubKey == m_uValue )
      {
        p_m_pPeer = 0;
LABEL_11:
        if ( (*(&pSubKey->CKeyValues_Data + 11) & 0x47) == 0x40 && (v5 = pSubKey->m_uValue, pSubKey->m_uValue != 0) )
        {
          if ( p_m_pPeer != 0 )
            *p_m_pPeer = v5;
          else
            CKeyValues_Data::Internal_SetSubKey(this, pSubKey->m_pSub);
          while ( *(v5 + 12) != 0 )
            v5 = *(v5 + 12);
          *(v5 + 12) = pSubKey->m_pPeer;
          *(&pSubKey->CKeyValues_Data + 11) &= ~0x40u;
          pSubKey->m_pPeer = 0;
          KeyValues::RemoveEverything(pSubKey);
          CKeyValues_Data::Internal_ClearData(pSubKey);
          KeyValues::operator delete(pSubKey);
        }
        else
        {
          if ( p_m_pPeer != 0 )
            *p_m_pPeer = pSubKey->m_pPeer;
          else
            CKeyValues_Data::Internal_SetSubKey(this, pSubKey->m_pPeer);
          KeyValues::RemoveEverything(pSubKey);
          CKeyValues_Data::Internal_ClearData(pSubKey);
          KeyValues::operator delete(pSubKey);
        }
      }
      else
      {
        while ( 1 )
        {
          m_pPeer = m_uValue->m_pPeer;
          if ( m_pPeer == 0 )
            break;
          if ( pSubKey == m_pPeer )
          {
            p_m_pPeer = &m_uValue->m_pPeer;
            goto LABEL_11;
          }
          m_uValue = m_uValue->m_pPeer;
        }
      }
    }
  }
}


// KeyValues::FindLastSubKey  (line 1824, @0x0000000002f753d0, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
KeyValues *__fastcall KeyValues::FindLastSubKey(KeyValues *const this)
{
  KeyValues *result; // rax
  KeyValues *m_uValue; // rdx

  result = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( m_uValue->m_pPeer != 0 )
        m_uValue = m_uValue->m_pPeer;
      return m_uValue;
    }
  }
  return result;
}


// KeyValues::GetFirstSubKey  (line 1841, @0x0000000002f75410, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
// callers: ProtoBufHelper::ParseKV, CBaseEntity::PrecacheModelComponents, ScriptTableFromKeyValues, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CPropData::ParsePropFromKV, CPropData::ParsePropDataFile, CGameEventManager::WriteEventList, CGameEventManager::ConPrintEvent, CGameEventManager::PrintEventToString, CGameEventManager::SerializeEvent, CGameEventManager::UnserializeEvent, CGameEventManager::RegisterEvent (140 total)
KeyValues *__fastcall KeyValues::GetFirstSubKey(const KeyValues *const this)
{
  KeyValues *result; // rax

  if ( this == 0 )
    return 0;
  result = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
    return this->m_uValue;
  return result;
}


// KeyValues::GetNextKey  (line 1854, @0x0000000002f75440, libserver.so)
// callers: ProtoBufHelper::ParseKV, CBaseEntity::PrecacheModelComponents, ScriptTableFromKeyValues, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CPropData::ParsePropFromKV, CPropData::ParsePropDataFile, CGameEventManager::WriteEventList, CGameEventManager::ConPrintEvent, CGameEventManager::PrintEventToString, CGameEventManager::SerializeEvent, CGameEventManager::UnserializeEvent, CGameEventManager::RegisterEvent (141 total)
KeyValues *__fastcall KeyValues::GetNextKey(const KeyValues *const this)
{
  if ( this != 0 )
    return this->m_pPeer;
  else
    return 0;
}


// KeyValues::SetNextKey  (line 1867, @0x0000000002f75460, libserver.so)
void __fastcall KeyValues::SetNextKey(KeyValues *const this, KeyValues *pDat)
{
  this->m_pPeer = pDat;
}


// KeyValues::GetFirstTrueSubKey  (line 1873, @0x0000000002f75470, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
// callers: Recursive_ConvertKeyValuesToTable, CDataDrivenCameraLoader::LoadFromFile, Recursive_DecodeKeyValuesIntoScriptTable, CDOTA_Ability_DataDriven::ReadKeyValues, CDOTACompendiumDefinition::LoadCompendiumDefinition, CDOTAGamerules::LoadStockInformation, PerformDOTALoadGame, CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary, CDOTAGameManager::ReloadPortraitData, CDOTA_Item_DataDriven::ReadKeyValues, CDOTA_Modifier_DataDriven::LookupValueSymbol (49 total)
KeyValues *__fastcall KeyValues::GetFirstTrueSubKey(KeyValues *const this)
{
  KeyValues *result; // rax

  if ( this == 0 )
    return 0;
  result = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    for ( result = this->m_uValue; result != 0; result = result->m_pPeer )
    {
      if ( (*(&result->CKeyValues_Data + 11) & 7) == 0 )
        break;
    }
  }
  return result;
}


// KeyValues::GetNextTrueSubKey  (line 1887, @0x0000000002f754c0, libserver.so)
// callers: Recursive_ConvertKeyValuesToTable, CDataDrivenCameraLoader::LoadFromFile, Recursive_DecodeKeyValuesIntoScriptTable, CDOTA_Ability_DataDriven::ReadKeyValues, CDOTACompendiumDefinition::LoadCompendiumDefinition, CDOTAGamerules::LoadStockInformation, PerformDOTALoadGame, CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary, CDOTAGameManager::ReloadPortraitData, CDOTA_Item_DataDriven::ReadKeyValues, CDOTA_Modifier_DataDriven::LookupValueSymbol (49 total)
KeyValues *__fastcall KeyValues::GetNextTrueSubKey(KeyValues *const this)
{
  KeyValues *result; // rax

  if ( this == 0 )
    return 0;
  for ( result = this->m_pPeer; result != 0; result = result->m_pPeer )
  {
    if ( (*(&result->CKeyValues_Data + 11) & 7) == 0 )
      break;
  }
  return result;
}


// KeyValues::GetFirstValue  (line 1901, @0x0000000002f75500, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
// callers: Recursive_ConvertKeyValuesToTable, CTier2AppSystemDict::SetupFileSystemPaths, Recursive_DecodeKeyValuesIntoScriptTable, CChatLanguageAnalyzer::BInit, CDOTAEventDefinition::InitFromKeyValues, CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV, ParseChallengeQuests, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats, CDotaStatManager::CPlayerStatState::DumpStats, CEconTool_PlayerCardPack::BInitFromKV, CDOTAStaticRecipeComponentEvent::ParseKV, ConvertMapDataKV (13 total)
KeyValues *__fastcall KeyValues::GetFirstValue(KeyValues *const this)
{
  KeyValues *result; // rax

  if ( this == 0 )
    return 0;
  result = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    for ( result = this->m_uValue; result != 0; result = result->m_pPeer )
    {
      if ( (*(&result->CKeyValues_Data + 11) & 7) != 0 )
        break;
    }
  }
  return result;
}


// KeyValues::GetNextValue  (line 1915, @0x0000000002f75550, libserver.so)
// callers: Recursive_ConvertKeyValuesToTable, CTier2AppSystemDict::SetupFileSystemPaths, Recursive_DecodeKeyValuesIntoScriptTable, CChatLanguageAnalyzer::BInit, CDOTAEventDefinition::InitFromKeyValues, CCompendiumDataFileTemplateHandler::MergeTemplateIntoKV, ParseChallengeQuests, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats, CDotaStatManager::CPlayerStatState::DumpStats, CEconTool_PlayerCardPack::BInitFromKV, CDOTAStaticRecipeComponentEvent::ParseKV, ConvertMapDataKV (13 total)
KeyValues *__fastcall KeyValues::GetNextValue(KeyValues *const this)
{
  KeyValues *result; // rax

  if ( this == 0 )
    return 0;
  for ( result = this->m_pPeer; result != 0; result = result->m_pPeer )
  {
    if ( (*(&result->CKeyValues_Data + 11) & 7) != 0 )
      break;
  }
  return result;
}


// CKeyValues_Data::Internal_GetInt  (line 1935, @0x0000000002f75590, libserver.so)  // inlines: ResolveIntValue, ResolveStringValue, ResolveWStringValue
// calls: V_atoi, V_wcstoi64
// callers: CPropData::ParsePropFromKV, CDOTABaseAbility::ProcessAbilityData, CDOTAGameManager::GetHeroIDByName, CDOTAGameManager::GetFirstHero, CDOTAGameManager::GetNextHero, CDOTAGameManager::LoadCustomHeroList, IsHeroAvailableByKV, CDOTAGameManager::VerifyUniqueAbilityIDs, CDOTAGameManager::VerifyHeroIDs, CDOTAGameManager::SetupSingleItemCombine, CDOTAGameManager::SetupGameKeyValues, CDOTAGameManager::PrintHighestFreeIDs (42 total)
// globals: jpt_2F755B3
int __fastcall CKeyValues_Data::Internal_GetInt(CKeyValues_Data *const this)
{
  int result; // eax

  switch ( *(this + 11) & 7 )
  {
    case 0:
    case 2:
    case 4:
    case 6:
      result = this->m_iValue;
      break;
    case 1:
      if ( (*(this + 11) & 0x10) != 0 )
        this = this->m_uValue;
      result = V_atoi(this);
      break;
    case 3:
      result = this->m_flValue;
      break;
    case 5:
      if ( (*(this + 11) & 0x10) != 0 )
        this = this->m_uValue;
      result = V_wcstoi64(this, 0, 10);
      break;
    case 7:
      result = 0;
      break;
  }
  return result;
}


// KeyValues::GetInt  (line 1964, @0x0000000002f79c60, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetInt
// callers: ProtoBufHelper::ParseKV, CLightComponent::CreateLightObject, CGameConfiguration::SetupGameSessionConfiguration, ScriptHelper_CreateEvent, ScriptTableFromKeyValues, Recursive_ConvertKeyValuesToTable, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CPropData::ParsePropFromKV, CPropData::GetPropValueFromBase, CBreakModelsPrecached::ComputeServerSideSpawn, CGameEvent::GetBool, CGameEvent::GetInt (410 total)
int __fastcall KeyValues::GetInt(KeyValues *const this, const char *keyName, int defaultValue)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  if ( Key != 0 )
    return CKeyValues_Data::Internal_GetInt(Key);
  else
    return defaultValue;
}


// CKeyValues_Data::Internal_GetUint64  (line 1978, @0x0000000002f75610, libserver.so)  // inlines: ResolveStringValue, ResolveUint64Value, ResolveWStringValue
// calls: V_sscanf, V_swscanf
// callers: KeyValues::GetUint64
// globals: jpt_2F75633
uint64 __fastcall CKeyValues_Data::Internal_GetUint64(CKeyValues_Data *const this)
{
  uint64 result; // rax
  bool v2; // zf
  uint64 uiResult; // [rsp+18h] [rbp-8h] BYREF

  switch ( *(this + 11) & 7 )
  {
    case 0:
    case 2:
    case 6:
      result = this->m_iValue;
      break;
    case 1:
      v2 = (*(this + 11) & 0x10) == 0;
      uiResult = 0;
      if ( !v2 )
        this = this->m_uValue;
      V_sscanf(this, "%lld", &uiResult);
      result = uiResult;
      break;
    case 3:
      result = this->m_flValue;
      break;
    case 4:
      result = this->m_uValue;
      break;
    case 5:
      v2 = (*(this + 11) & 0x10) == 0;
      uiResult = 0;
      if ( !v2 )
        this = this->m_uValue;
      V_swscanf(this, &unk_3500580, &uiResult);
      result = uiResult;
      break;
    case 7:
      result = this->m_uValue;
      if ( (*(this + 11) & 0x10) != 0 )
        result = *result;
      break;
  }
  return result;
}


// KeyValues::GetUint64  (line 2013, @0x0000000002f79ca0, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetUint64
// callers: ProtoBufHelper::ParseKV, ScriptTableFromKeyValues, Recursive_ConvertKeyValuesToTable, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CGameEvent::GetUint64, CDOTAEventDefinition::InitEventReward, CDOTAEventDefinition::InitFromKeyValues, CDOTAGamerules::GameInit, ParseChallengeQuests, CDOTALobby::ParseSaveGame, CGCJobUploadSaveGame::BYieldingRunJob, CEconTool_VictoryPrediction::BInitFromKV (17 total)
uint64 __fastcall KeyValues::GetUint64(KeyValues *const this, const char *keyName, uint64 defaultValue)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  if ( Key != 0 )
    return CKeyValues_Data::Internal_GetUint64(Key);
  else
    return defaultValue;
}


// CKeyValues_Data::Internal_GetPtr  (line 2027, @0x0000000002f756d0, libserver.so)  // inlines: ResolvePtrValue
void *__fastcall CKeyValues_Data::Internal_GetPtr(CKeyValues_Data *const this)
{
  if ( ((1LL << (*(this + 11) & 7)) & 0xEF) != 0 )
    return 0;
  else
    return this->m_uValue;
}


// KeyValues::GetPtr  (line 2055, @0x0000000002f79ce0, libserver.so)  // inlines: Internal_GetPtr, ResolvePtrValue
// calls: KeyValues::FindKey
// callers: ProtoBufHelper::ParseKV, Recursive_ConvertKeyValuesToTable, CGameEvent::GetPtr, CDOTA_Ability_Lua::OnHeroDiedNearby, CDOTA_Item_Lua::OnHeroDiedNearby, CDOTA_Modifier_HarpyStorm_ChainLightning::OnCreated, CDOTA_Modifier_Lich_Chain_Frost_Thinker::OnCreated, CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::OnCreated, CDOTA_Ability_Pudge_FleshHeap::OnHeroDiedNearby, CDOTA_Modifier_Razor_StaticLink::OnCreated, CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnCreated, CDOTA_Modifier_Mirana_Starfall_Thinker::OnCreated (60 total)
void *__fastcall KeyValues::GetPtr(KeyValues *const this, const char *keyName, void *defaultValue)
{
  KeyValues *Key; // rax
  void **v5; // rdi
  char v6; // cl
  void *result; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  v5 = Key;
  if ( Key == 0 )
    return defaultValue;
  v6 = *(&Key->CKeyValues_Data + 11);
  result = 0;
  if ( ((1LL << (v6 & 7)) & 0xEF) == 0 )
    return *v5;
  return result;
}


// CKeyValues_Data::Internal_GetFloat  (line 2069, @0x0000000002f75700, libserver.so)  // inlines: ResolveFloatValue, ResolveStringValue, ResolveUint64Value, ResolveWStringValue
// calls: V_atof, V_wcstod
// callers: CPropData::ParsePropFromKV, CEconItemRarityDefinition::BInitFromKV, CEconItemSetDefinition::BInitFromKV, CEconStyleInfo::BInitFromKV, CTimedItemRewardDefinition::BInitFromKV, lootlist_attrib_t::BInitFromKV, CEconLootListDefinition::BInitFromKV, KeyValues::GetFloat
// globals: jpt_2F75723
float __fastcall CKeyValues_Data::Internal_GetFloat(CKeyValues_Data *const this)
{
  float result; // xmm0_4
  uintp m_uValue; // rax

  switch ( *(this + 11) & 7 )
  {
    case 0:
    case 4:
    case 6:
      result = 0.0;
      break;
    case 1:
      if ( (*(this + 11) & 0x10) != 0 )
        this = this->m_uValue;
      result = V_atof(this);
      break;
    case 2:
      result = this->m_iValue;
      break;
    case 3:
      result = this->m_flValue;
      break;
    case 5:
      if ( (*(this + 11) & 0x10) != 0 )
        this = this->m_uValue;
      result = V_wcstod(this, 0);
      break;
    case 7:
      m_uValue = this->m_uValue;
      if ( (*(this + 11) & 0x10) != 0 )
        m_uValue = *m_uValue;
      if ( (m_uValue & 0x8000000000000000LL) != 0LL )
        result = (m_uValue & 1 | (m_uValue >> 1)) + (m_uValue & 1 | (m_uValue >> 1));
      else
        result = m_uValue;
      break;
  }
  return result;
}


// KeyValues::GetFloat  (line 2096, @0x0000000002f79d30, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetFloat
// callers: ProtoBufHelper::ParseKV, ScriptTableFromKeyValues, Recursive_ConvertKeyValuesToTable, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CGameEvent::GetFloat, CBaseCombatCharacter::GetFilteredDamage, CDataDrivenCameraLoader::LoadFromFile, CDecalEmitterSystem::LoadDecalsFromScript, CSource2Server::GetDefaultScaleForCharacter, CSource2Server::OnLoadSessionPersisters, CSource2Server::GetDefaultScaleForModel, CPhysicsProp::GetCarryDistanceOffset (206 total)
float __fastcall KeyValues::GetFloat(KeyValues *const this, const char *keyName, float a3, float defaultValue)
{
  KeyValues *Key; // rax
  float result; // xmm0_4

  Key = KeyValues::FindKey(this, keyName, 0);
  result = a3;
  if ( Key != 0 )
    return CKeyValues_Data::Internal_GetFloat(Key);
  return result;
}


// CKeyValues_Data::Internal_GetString  (line 2110, @0x0000000002f75a90, libserver.so)  // inlines: ResolveStringValue, ResolveUint64Value, ResolveWStringValue, V_memcpy, V_strlen, memcpy
// calls: V_snprintf, CKeyValues_Data::Internal_SetString, memcpy, V_UTF32ToUTF8, __stack_chk_fail
// callers: CBaseEntity::PrecacheModelComponents, CPropData::ParsePropFromKV, KeyValues::GetString, CEconItemDefinition::BInitFromKV, CEconItemAssetInfo::InitAlternateIcons, CEconItemQualityDefinition::BInitFromKV, CEconItemRarityDefinition::BInitFromKV, CEconItemSetDefinition::BInitFromKV, CEconItemAttributeDefinition::BInitFromKV, CEconStyleInfo::BInitFromKV, CEconItemSchema::BInitAutographs, CEconItemSchema::BInitAssetModifiers (24 total)
// globals: jpt_2F75AE0
const char *__fastcall CKeyValues_Data::Internal_GetString(
        CKeyValues_Data *const this,
        const char *defaultValue,
        char *pScratchSpace,
        size_t nScratchSpaceCount)
{
  int v5; // r13d
  CKeyValues_Data *v7; // rbx
  uintp m_uValue; // rcx
  int v9; // eax
  const char *result; // rax
  int v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  char conversionBuf[2056]; // [rsp+10h] [rbp-840h] BYREF
  unsigned __int64 v16; // [rsp+818h] [rbp-38h]

  v5 = nScratchSpaceCount;
  v7 = this;
  v16 = __readfsqword(0x28u);
  switch ( *(this + 11) & 7 )
  {
    case 0:
    case 6:
      return defaultValue;
    case 1:
      goto LABEL_5;
    case 2:
      v9 = V_snprintf(conversionBuf, 2048, "%d", this->m_iValue);
      if ( pScratchSpace != 0 )
        goto LABEL_10;
      goto LABEL_4;
    case 3:
      v9 = V_snprintf(conversionBuf, 2048, "%f", this->m_flValue);
      if ( pScratchSpace == 0 )
        goto LABEL_4;
      goto LABEL_10;
    case 4:
      m_uValue = this->m_uValue;
      goto LABEL_3;
    case 5:
      if ( (*(this + 11) & 0x10) != 0 )
        this = this->m_uValue;
      v12 = V_UTF32ToUTF8(this, conversionBuf, 2048, 4);
      result = defaultValue;
      if ( v12 == 0 )
        return result;
      if ( pScratchSpace == 0 )
        goto LABEL_4;
      v13 = strlen(conversionBuf);
      if ( v13 >= v5 )
        goto LABEL_4;
      v14 = v13 + 1;
      if ( v14 < 0 )
        __debugbreak();
      memcpy(pScratchSpace, conversionBuf, v14);
      result = pScratchSpace;
      break;
    case 7:
      if ( (*(this + 11) & 0x10) != 0 )
        m_uValue = *this->m_pValue;
      else
        m_uValue = this->m_uValue;
LABEL_3:
      v9 = V_snprintf(conversionBuf, 2048, "%lld", m_uValue);
      if ( pScratchSpace == 0 )
        goto LABEL_4;
LABEL_10:
      if ( v9 >= v5 )
      {
LABEL_4:
        CKeyValues_Data::Internal_SetString(v7, conversionBuf);
LABEL_5:
        result = v7;
        if ( (*(v7 + 11) & 0x10) != 0 )
          result = v7->m_uValue;
      }
      else
      {
        v11 = v9 + 1;
        if ( v11 < 0 )
          __debugbreak();
        memcpy(pScratchSpace, conversionBuf, v11);
        result = pScratchSpace;
      }
      break;
  }
  return result;
}


// KeyValues::GetString  (line 2200, @0x0000000002f79d70, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetString
// callers: ProtoBufHelper::ParseKV, CGameConfiguration::SetupGameSessionConfiguration, ScriptTableFromKeyValues, Recursive_ConvertKeyValuesToTable, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CPropData::ParsePropFromKV, CPropData::GetPropValueFromBase, CBreakModelsPrecached::ComputeServerSideSpawn, CGameEvent::GetString, GetLaunchOptionValue, ReadAndAllocStringValue, ConvertOldKeyValuesToNew (297 total)
const char *__fastcall KeyValues::GetString(
        KeyValues *const this,
        const char *keyName,
        const char *defaultValue,
        char *pScratchSpace,
        size_t nScratchSpaceCount)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  if ( Key != 0 )
    return CKeyValues_Data::Internal_GetString(Key, defaultValue, pScratchSpace, nScratchSpaceCount);
  else
    return defaultValue;
}


// CKeyValues_Data::Internal_GetWString  (line 2211, @0x0000000002f76140, libserver.so)  // inlines: ResolveStringValue, ResolveUint64Value, ResolveWStringValue, V_memcpy, V_strlen, V_wcslen, memcpy
// calls: V_snwprintf, CKeyValues_Data::Internal_SetWString, strlen, operator new [], V_UTF8ToUTF32, wcslen, operator delete [], memcpy
// callers: KeyValues::GetWString
// globals: jpt_2F76181
const wchar_t *__fastcall CKeyValues_Data::Internal_GetWString(
        CKeyValues_Data *const this,
        const wchar_t *defaultValue,
        wchar_t *pScratchSpace,
        size_t nScratchSpaceCount)
{
  int v6; // r12d
  int v8; // eax
  const wchar_t *result; // rax
  const char *m_uValue; // r13
  int v11; // esi
  size_t v12; // rdi
  wchar_t *v13; // rax
  int v14; // esi
  int v15; // eax
  int v16; // r13d
  int v17; // eax
  int v18; // eax
  wchar_t *pDelete; // [rsp+0h] [rbp-2040h]
  int pWBuf; // [rsp+8h] [rbp-2038h]
  const wchar_t *pWBufa; // [rsp+8h] [rbp-2038h]
  wchar_t conversionBuf[2060]; // [rsp+10h] [rbp-2030h] BYREF

  v6 = nScratchSpaceCount;
  switch ( *(this + 11) & 7 )
  {
    case 0:
    case 6:
      return defaultValue;
    case 1:
      if ( (*(this + 11) & 0x10) != 0 )
      {
        m_uValue = this->m_uValue;
        if ( this->m_uValue == 0 )
        {
          pDelete = 0;
          pWBufa = conversionBuf;
          v15 = V_UTF8ToUTF32(0, conversionBuf, 4, 4);
          goto LABEL_12;
        }
      }
      else
      {
        m_uValue = this;
      }
      v11 = strlen(m_uValue) + 1;
      if ( v11 <= 0x800 )
      {
        pDelete = 0;
        pWBufa = conversionBuf;
        v15 = V_UTF8ToUTF32(m_uValue, conversionBuf, (4 * v11), 4);
      }
      else
      {
        v12 = -1;
        pWBuf = v11;
        if ( v11 <= 0x1FC0000000000000LL )
          v12 = 4LL * v11;
        v13 = operator new[](v12);
        v14 = pWBuf;
        pDelete = v13;
        pWBufa = v13;
        v15 = V_UTF8ToUTF32(m_uValue, v13, (4 * v14), 4);
      }
LABEL_12:
      v16 = v15;
      if ( v15 >= 0 )
      {
        if ( pScratchSpace != 0 )
        {
          v17 = wcslen(pWBufa);
          if ( v17 < v6 )
          {
            memcpy(pScratchSpace, conversionBuf, 4LL * (v17 + 1));
            return pScratchSpace;
          }
        }
        CKeyValues_Data::Internal_SetWString(this, pWBufa);
      }
      if ( pDelete != 0 )
        operator delete[](pDelete);
      if ( v16 < 0 )
        return defaultValue;
      goto LABEL_4;
    case 2:
      v8 = V_snwprintf(conversionBuf, 2048, &dword_33EEEC4);
      if ( pScratchSpace != 0 )
        goto LABEL_24;
      goto LABEL_3;
    case 3:
      v8 = V_snwprintf(conversionBuf, 2048, &unk_3500594);
      if ( pScratchSpace == 0 )
        goto LABEL_3;
      goto LABEL_24;
    case 4:
    case 7:
      v8 = V_snwprintf(conversionBuf, 2048, &unk_3500580);
      if ( pScratchSpace == 0 )
        goto LABEL_3;
LABEL_24:
      if ( v8 >= v6 )
      {
LABEL_3:
        CKeyValues_Data::Internal_SetWString(this, conversionBuf);
LABEL_4:
        result = &this->0;
        if ( (*(this + 11) & 0x10) != 0 )
          return this->m_uValue;
      }
      else
      {
        v18 = v8 + 1;
        if ( v18 < 0 )
          __debugbreak();
        memcpy(pScratchSpace, conversionBuf, v18);
        return pScratchSpace;
      }
      return result;
    case 5:
      goto LABEL_4;
  }
}


// KeyValues::GetWString  (line 2323, @0x0000000002f79dc0, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetWString
// callers: IKeyValuesDumpContextAsText::KvWriteValue
const wchar_t *__fastcall KeyValues::GetWString(
        KeyValues *const this,
        const char *keyName,
        const wchar_t *defaultValue,
        wchar_t *pScratchSpace,
        size_t nScratchSpaceCount)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  if ( Key != 0 )
    return CKeyValues_Data::Internal_GetWString(Key, defaultValue, pScratchSpace, nScratchSpaceCount);
  else
    return defaultValue;
}


// CKeyValues_Data::Internal_GetColor  (line 2336, @0x0000000002f757c0, libserver.so)  // inlines: ResolveColorValue, ResolveStringValue
// calls: V_sscanf
// callers: KeyValues::GetColor
// strings: "%f %f %f %f"
Color __fastcall CKeyValues_Data::Internal_GetColor(CKeyValues_Data *const this, Color color)
{
  int m_flValue; // ecx
  int v3; // ebx
  unsigned __int8 v4; // al
  int v5; // esi
  char v6; // r8
  int v7; // edx
  char v8; // al
  unsigned __int16 v9; // ax
  float a; // [rsp+0h] [rbp-20h] BYREF
  float b; // [rsp+4h] [rbp-1Ch] BYREF
  float c; // [rsp+8h] [rbp-18h] BYREF
  float d; // [rsp+Ch] [rbp-14h] BYREF

  LOBYTE(m_flValue) = color._color[0];
  LOBYTE(v3) = color._color[1];
  v4 = color._color[2];
  v5 = color._color[3];
  v6 = *(this + 11);
  LOBYTE(v7) = v4;
  v8 = v6 & 7;
  if ( (v6 & 7) == 6 )
    return ((this->m_Color[3] << 24) | (this->m_Color[2] << 16) | LOWORD(this->m_flValue));
  switch ( v8 )
  {
    case 3:
      m_flValue = this->m_flValue;
      break;
    case 2:
      LOBYTE(m_flValue) = this->m_Color[0];
      break;
    case 1:
      a = 0.0;
      b = 0.0;
      c = 0.0;
      d = 0.0;
      if ( (v6 & 0x10) != 0 )
        this = this->m_uValue;
      V_sscanf(this, "%f %f %f %f", &a, &b, &c, &d);
      m_flValue = a;
      v3 = b;
      v7 = c;
      v5 = d;
      break;
    default:
      break;
  }
  LOBYTE(v9) = m_flValue;
  HIBYTE(v9) = v3;
  return ((v5 << 24) | (v7 << 16) | v9);
}


// KeyValues::GetColor  (line 2364, @0x0000000002f79e10, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetColor
// callers: Recursive_ConvertKeyValuesToTable, CalculateKeyValuesCRCRecursive, TE_BloodStream, KeyValues::UnpackIntoStructure
Color __fastcall KeyValues::GetColor(KeyValues *const this, const char *keyName, const Color *const defaultColor)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  if ( Key != 0 )
    return CKeyValues_Data::Internal_GetColor(Key, *defaultColor);
  else
    return *defaultColor;
}


// CKeyValues_Data::Internal_SetColor  (line 2377, @0x0000000002f758c0, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall CKeyValues_Data::Internal_SetColor(CKeyValues_Data *const this, Color value)
{
  char v4; // al

  CKeyValues_Data::Internal_ClearData(this);
  v4 = *(this + 11);
  this->m_Color[0] = value._color[0];
  *(this + 11) = v4 & 0xF8 | 6;
  this->m_Color[1] = value._color[1];
  this->m_Color[3] = value._color[3];
  this->m_Color[2] = value._color[2];
}


// CKeyValues_Data::ResolveColorValue  (line 2387, @0x0000000002f75910, libserver.so)
Color __fastcall CKeyValues_Data::ResolveColorValue(const CKeyValues_Data *const this)
{
  return ((this->m_Color[3] << 24) | (this->m_Color[2] << 16) & 0xFFFFFF | LOWORD(this->m_flValue));
}


// KeyValues::SetColor  (line 2393, @0x0000000002f79e50, libserver.so)  // inlines: Internal_SetColor
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_ClearData
// callers: KeyValues::ReadAsBinaryFilteredInternal
void __fastcall KeyValues::SetColor(KeyValues *const this, const char *keyName, Color value)
{
  KeyValues *Key; // rax
  Color *v5; // rbx
  unsigned __int8 v6; // al

  Key = KeyValues::FindKey(this, keyName, 1);
  v5 = Key;
  if ( Key != 0 )
  {
    CKeyValues_Data::Internal_ClearData(Key);
    v6 = v5[2]._color[3];
    *v5 = value;
    v5[2]._color[3] = v6 & 0xF8 | 6;
  }
}


// CKeyValues_Data::Internal_SetFromString  (line 2405, @0x0000000002f75dd0, libserver.so)  // inlines: Internal_SetColor, Internal_SetFloat, Internal_SetInt, Internal_SetPtr, Internal_SetUint64, V_memcpy, V_strlen, memcpy
// calls: strlen, memcpy, V_sscanf, CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetString, V_atoi, V_atof, operator new [], V_UTF8ToUTF32, CKeyValues_Data::Internal_SetWString, operator delete [], __stack_chk_fail
// callers: KeyValues::SetFromString
// strings: "%f %f %f %f"
// globals: jpt_2F75E20
void __fastcall CKeyValues_Data::Internal_SetFromString(
        CKeyValues_Data *const this,
        CKeyValues_Data::types_t type,
        const char *szString)
{
  size_t v3; // r15
  const char *v4; // r14
  const char *v5; // r13
  int v8; // eax
  char *v9; // rax
  int v10; // r15d
  int v11; // r14d
  int v12; // r12d
  char v13; // al
  uintp v14; // r12
  char v15; // al
  int v16; // r12d
  char v17; // al
  char v18; // al
  uintp v19; // r12
  char v20; // al
  int v21; // r12d
  const wchar_t *v22; // rax
  __int64 v23; // rdx
  const wchar_t *v24; // r12
  unsigned __int64 v25; // rax
  void *v26; // rsp
  int len; // [rsp+Ch] [rbp-54h]
  int lena; // [rsp+Ch] [rbp-54h]
  int lenb; // [rsp+Ch] [rbp-54h]
  __int64 v30; // [rsp+10h] [rbp-50h] BYREF
  float b; // [rsp+18h] [rbp-48h] BYREF
  float c; // [rsp+1Ch] [rbp-44h] BYREF
  int64 nIntValue; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-38h]

  v4 = szString;
  v5 = 0;
  v34 = __readfsqword(0x28u);
  if ( (*(this + 11) & 7) == 1 && this->m_uValue != 0 && szString == this->m_sValue )
  {
    v8 = strlen(szString);
    v3 = v8 + 1;
    len = v8 + 1;
    v9 = (**g_pMemAlloc)(g_pMemAlloc, v3);
    v5 = v9;
    if ( len < 0 )
      __debugbreak();
    memcpy(v9, v4, v3);
    v4 = v5;
  }
  switch ( type )
  {
    case CKeyValues_Data::types_t::TYPE_NONE:
      CKeyValues_Data::Internal_ClearData(this);
      goto LABEL_9;
    case CKeyValues_Data::types_t::TYPE_STRING:
      CKeyValues_Data::Internal_SetString(this, v4);
      goto LABEL_9;
    case CKeyValues_Data::types_t::TYPE_INT:
      v16 = V_atoi(v4);
      CKeyValues_Data::Internal_ClearData(this);
      v17 = *(this + 11);
      this->m_iValue = v16;
      *(this + 11) = v17 & 0xF8 | 2;
      goto LABEL_9;
    case CKeyValues_Data::types_t::TYPE_FLOAT:
      lenb = V_atof(v4);
      CKeyValues_Data::Internal_ClearData(this);
      v18 = *(this + 11);
      this->m_iValue = lenb;
      *(this + 11) = v18 & 0xF8 | 3;
      goto LABEL_9;
    case CKeyValues_Data::types_t::TYPE_PTR:
      V_sscanf(v4, "%lld", &nIntValue);
      v19 = nIntValue;
      CKeyValues_Data::Internal_ClearData(this);
      v20 = *(this + 11);
      this->m_uValue = v19;
      *(this + 11) = v20 & 0xF8 | 4;
      goto LABEL_9;
    case CKeyValues_Data::types_t::TYPE_WSTRING:
      if ( v4 != 0 )
      {
        v21 = strlen(v4) + 1;
        if ( v21 > 2048 )
        {
          v22 = operator new[](4LL * v21);
          v23 = (4 * v21);
          v3 = v22;
          v24 = v22;
LABEL_21:
          if ( V_UTF8ToUTF32(v4, v24, v23, 4) < 0 )
            goto LABEL_25;
          CKeyValues_Data::Internal_SetWString(this, v24);
          goto LABEL_23;
        }
        v23 = (4 * v21);
        v25 = (4LL * v21 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v23 = 4;
        v25 = 32;
      }
      v3 = 0;
      v26 = alloca(v25 + 16);
      v24 = (&v30 & 0xFFFFFFFFFFFFFFEFLL);
      goto LABEL_21;
    case CKeyValues_Data::types_t::TYPE_COLOR:
      HIDWORD(v30) = 0;
      b = 0.0;
      c = 0.0;
      LODWORD(nIntValue) = 0;
      V_sscanf(v4, "%f %f %f %f", &v30 + 4, &b, &c, &nIntValue);
      v10 = b;
      v11 = c;
      v12 = *&nIntValue;
      lena = *(&v30 + 1);
      CKeyValues_Data::Internal_ClearData(this);
      v13 = *(this + 11);
      this->m_Color[1] = v10;
      this->m_Color[2] = v11;
      this->m_Color[3] = v12;
      this->m_Color[0] = lena;
      *(this + 11) = v13 & 0xF8 | 6;
      goto LABEL_9;
    case CKeyValues_Data::types_t::TYPE_UINT64:
      nIntValue = 0;
      V_sscanf(v4, "%lld", &nIntValue);
      v14 = nIntValue;
      CKeyValues_Data::Internal_ClearData(this);
      v15 = *(this + 11);
      this->m_uValue = v14;
      *(this + 11) = v15 & 0xE8 | 7;
      goto LABEL_9;
    default:
LABEL_25:
      CKeyValues_Data::Internal_SetWString(this, U"CKeyValues_Data::Internal_SetFromString() conversion error");
LABEL_23:
      if ( v3 != 0 )
        operator delete[](v3);
LABEL_9:
      if ( v5 != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
      return;
  }
}


// KeyValues::SetFromString  (line 2518, @0x0000000002f79ec0, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_SetFromString
void __fastcall KeyValues::SetFromString(
        KeyValues *const this,
        const char *keyName,
        CKeyValues_Data::types_t type,
        const char *szValue)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 1);
  if ( Key != 0 )
    CKeyValues_Data::Internal_SetFromString(Key, type, szValue);
}


// CKeyValues_Data::Internal_SetString  (line 2527, @0x0000000002f75940, libserver.so)  // inlines: V_memcpy, memcpy
// calls: strlen, CKeyValues_Data::Internal_ClearData, memcpy, KeyValuesSystem
// callers: CDOTAChallengeSystem::SetChallengeDynamicVarForTemplateIndex, CDOTAInGamePredictionGameSystem::RecursiveReplaceTemplateVariable, CKeyValues_Data::Internal_GetString, CKeyValues_Data::Internal_SetFromString, CKeyValues_Data::Internal_CopyData, KeyValues::AddString, KeyValues::RecursiveLoadFromBuffer, KeyValues::SetString, KeyValues::ReadAsBinaryInternal
void __fastcall CKeyValues_Data::Internal_SetString(CKeyValues_Data *const this, const char *value)
{
  const char *v2; // r12
  int v4; // r14d
  size_t v5; // r15
  const char *v6; // r13
  char v7; // dl
  __int64 v8; // rax
  uintp v9; // rax
  char v10; // dl
  char *v11; // rax

  v2 = value;
  if ( value != 0 )
  {
    v4 = strlen(value) + 1;
    v5 = v4;
  }
  else
  {
    v5 = 1;
    v4 = 1;
    v2 = "";
  }
  v6 = 0;
  if ( this->m_uValue != 0 && v2 == this->m_sValue )
  {
    v11 = (**g_pMemAlloc)(g_pMemAlloc, v5);
    v6 = v11;
    if ( v4 < 0 )
      __debugbreak();
    memcpy(v11, v2, v5);
    v2 = v6;
  }
  CKeyValues_Data::Internal_ClearData(this);
  if ( v5 > 8 )
  {
    v8 = KeyValuesSystem();
    v9 = (*(*v8 + 80LL))(v8, v2);
    v10 = *(this + 11);
    this->m_uValue = v9;
    v10 |= 0x10u;
    *(this + 11) = v10;
    *(this + 11) = v10 & 0xF8 | 1;
    if ( v6 != 0 )
LABEL_9:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
  }
  else
  {
    if ( v4 < 0 )
      __debugbreak();
    memcpy(this, v2, v5);
    v7 = *(this + 11) & 0xEF;
    *(this + 11) = v7;
    *(this + 11) = v7 & 0xF8 | 1;
    if ( v6 != 0 )
      goto LABEL_9;
  }
}


// CKeyValues_Data::ResolveStringValue  (line 2577, @0x0000000002f75ca0, libserver.so)
const char *__fastcall CKeyValues_Data::ResolveStringValue(const CKeyValues_Data *const this)
{
  const char *result; // rax

  result = this;
  if ( (*(this + 11) & 0x10) != 0 )
    return this->m_uValue;
  return result;
}


// KeyValues::SetString  (line 2586, @0x0000000002f79f00, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_SetString
// callers: ProtoBufHelper::RecursiveAddProtoBufToKV, ScriptVmKeyValueFromVariant, CGameEvent::SetString, ConvertOldKeyValuesToNew, CLoopModeGame::LoopInit, CBaseGameStats_Driver::CollectData, CBaseGameStats_Driver::ResetData, CMultiplayRules::GetTaggedConVarList, CDOTA_ActionRunner::LookupModifierCreateParameters, CDOTA_Ability_DataDriven::RefreshIntrinsicModifier, CDOTA_Ability_DataDriven::LookupModifierCreateParameters, CDOTA_ActionRunner::PerformAction_AnimationAttack (117 total)
void __fastcall KeyValues::SetString(KeyValues *const this, const char *keyName, const char *value)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 1);
  if ( Key != 0 )
    CKeyValues_Data::Internal_SetString(Key, value);
}


// CKeyValues_Data::Internal_SetWString  (line 2598, @0x0000000002f75cc0, libserver.so)  // inlines: V_memcpy, V_wcslen, memcpy
// calls: wcslen, CKeyValues_Data::Internal_ClearData, memcpy, KeyValuesSystem
// callers: CKeyValues_Data::Internal_SetFromString, CKeyValues_Data::Internal_GetWString, CKeyValues_Data::Internal_CopyData, KeyValues::SetWString, KeyValues::ReadAsBinaryInternal
void __fastcall CKeyValues_Data::Internal_SetWString(CKeyValues_Data *const this, const wchar_t *value)
{
  const wchar_t *v2; // r12
  int v4; // eax
  void *v5; // r13
  size_t v6; // r14
  char v7; // dl
  __int64 v8; // rax
  uintp v9; // rax
  char v10; // dl

  v2 = value;
  if ( value == 0 )
    v2 = &dword_33C3BD0;
  v4 = wcslen(v2) + 1;
  if ( this->m_uValue != 0 && v2 == this->m_wsValue )
  {
    v6 = 4LL * v4;
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v6);
    memcpy(v5, v2, v6);
    v2 = v5;
  }
  else
  {
    v5 = 0;
    v6 = 4LL * v4;
  }
  CKeyValues_Data::Internal_ClearData(this);
  if ( v6 > 8 )
  {
    v8 = KeyValuesSystem();
    v9 = (*(*v8 + 96LL))(v8, v2);
    v10 = *(this + 11);
    this->m_uValue = v9;
    v10 |= 0x10u;
    *(this + 11) = v10;
    *(this + 11) = v10 & 0xF8 | 5;
    if ( v5 != 0 )
      goto LABEL_8;
  }
  else
  {
    memcpy(this, v2, v6);
    v7 = *(this + 11) & 0xEF;
    *(this + 11) = v7;
    *(this + 11) = v7 & 0xF8 | 5;
    if ( v5 != 0 )
LABEL_8:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
  }
}


// CKeyValues_Data::ResolveWStringValue  (line 2638, @0x0000000002f76400, libserver.so)
const wchar_t *__fastcall CKeyValues_Data::ResolveWStringValue(const CKeyValues_Data *const this)
{
  const wchar_t *result; // rax

  result = &this->0;
  if ( (*(this + 11) & 0x10) != 0 )
    return this->m_uValue;
  return result;
}


// KeyValues::SetWString  (line 2644, @0x0000000002f7a060, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_SetWString
// callers: KeyValues::KeyValues, KeyValues::ReadAsBinaryFilteredInternal
void __fastcall KeyValues::SetWString(KeyValues *const this, const char *keyName, const wchar_t *value)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 1);
  if ( Key != 0 )
    CKeyValues_Data::Internal_SetWString(Key, value);
}


// CKeyValues_Data::Internal_SetInt  (line 2656, @0x0000000002f76420, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall CKeyValues_Data::Internal_SetInt(CKeyValues_Data *const this, int value)
{
  char v4; // al

  CKeyValues_Data::Internal_ClearData(this);
  v4 = *(this + 11);
  this->m_iValue = value;
  *(this + 11) = v4 & 0xF8 | 2;
}


// CKeyValues_Data::ResolveIntValue  (line 2663, @0x0000000002f76450, libserver.so)
int __fastcall CKeyValues_Data::ResolveIntValue(const CKeyValues_Data *const this)
{
  return this->m_iValue;
}


// KeyValues::SetInt  (line 2669, @0x0000000002f7a120, libserver.so)  // inlines: Internal_SetInt
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_ClearData
// callers: ProtoBufHelper::RecursiveAddProtoBufToKV, ScriptVmKeyValueFromVariant, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, CGameEvent::SetBool, CGameEvent::SetInt, CGameEvent::CGameEvent, CGameEventManager::ParseEventList, CGameEventManager::RegisterEvent, CSource2Server::ApplyGameSettings, CBaseMultiplayerPlayer::SetPerLifeCounterKV, CBaseCombatCharacter::GetFilteredDamage, CBaseGameStats_Driver::CollectData (269 total)
void __fastcall KeyValues::SetInt(KeyValues *const this, const char *keyName, int value)
{
  KeyValues *Key; // rax
  KeyValues *v5; // rbx
  char v6; // al

  Key = KeyValues::FindKey(this, keyName, 1);
  v5 = Key;
  if ( Key != 0 )
  {
    CKeyValues_Data::Internal_ClearData(Key);
    v6 = *(&v5->CKeyValues_Data + 11);
    v5->m_iValue = value;
    *(&v5->CKeyValues_Data + 11) = v6 & 0xF8 | 2;
  }
}


// CKeyValues_Data::Internal_SetUint64  (line 2681, @0x0000000002f76460, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall CKeyValues_Data::Internal_SetUint64(CKeyValues_Data *const this, uint64 value)
{
  char v4; // al

  CKeyValues_Data::Internal_ClearData(this);
  v4 = *(this + 11);
  this->m_uValue = value;
  *(this + 11) = v4 & 0xE8 | 7;
}


// CKeyValues_Data::ResolveUint64Value  (line 2702, @0x0000000002f76490, libserver.so)
uint64 __fastcall CKeyValues_Data::ResolveUint64Value(const CKeyValues_Data *const this)
{
  uint64 result; // rax

  result = this->m_uValue;
  if ( (*(this + 11) & 0x10) != 0 )
    return *result;
  return result;
}


// KeyValues::SetUint64  (line 2708, @0x0000000002f7a530, libserver.so)  // inlines: Internal_SetUint64
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_ClearData
// callers: ProtoBufHelper::RecursiveAddProtoBufToKV, CGameEvent::SetUint64, CDOTAGameConfiguration::GetBugReportLaunchURLParameters, CDOTAGameConfiguration::SetupGameSessionConfiguration, PerformDOTASaveGame, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroDeath, CDOTA_OGS::LogBuildingDeath, CVProfOGSMode::UploadToDB, CDOTA_PlayerResource::WriteSaveGameInformation, KeyValues::ReadAsBinaryFilteredInternal, KeyValues::JSONParserCallback (13 total)
void __fastcall KeyValues::SetUint64(KeyValues *const this, const char *keyName, uint64 value)
{
  KeyValues *Key; // rax
  KeyValues *v5; // rbx
  char v6; // al

  Key = KeyValues::FindKey(this, keyName, 1);
  v5 = Key;
  if ( Key != 0 )
  {
    CKeyValues_Data::Internal_ClearData(Key);
    v6 = *(&v5->CKeyValues_Data + 11);
    v5->m_uValue = value;
    *(&v5->CKeyValues_Data + 11) = v6 & 0xE8 | 7;
  }
}


// CKeyValues_Data::Internal_SetFloat  (line 2720, @0x0000000002f764b0, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall CKeyValues_Data::Internal_SetFloat(CKeyValues_Data *const this, float a2, float value)
{
  char v4; // al

  CKeyValues_Data::Internal_ClearData(this);
  v4 = *(this + 11);
  this->m_flValue = a2;
  *(this + 11) = v4 & 0xF8 | 3;
}


// CKeyValues_Data::ResolveFloatValue  (line 2727, @0x0000000002f764f0, libserver.so)
float __fastcall CKeyValues_Data::ResolveFloatValue(const CKeyValues_Data *const this)
{
  return this->m_flValue;
}


// KeyValues::SetFloat  (line 2733, @0x0000000002f7a570, libserver.so)  // inlines: Internal_SetFloat
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_ClearData
// callers: ProtoBufHelper::RecursiveAddProtoBufToKV, ScriptVmKeyValueFromVariant, CGameEvent::SetFloat, CBaseCombatCharacter::GetFilteredDamage, CBasePlayer::ApplySessionPersisterValues, CDOTABaseAbility::RefreshIntrinsicModifier, CDOTA_Ability_DataDriven::LookupModifierCreateParameters, CDOTA_ActionRunner::PerformAction_AnimationAttack, CDOTABaseAbility::OnSaveState, CDOTA_Ability_DataDriven::Script_ApplyDataDrivenModifier, CDOTA_Ability_DataDriven::Script_ApplyDataDrivenThinker, CDOTA_Ability_Lua::Script_OnProjectileHit_ExtraData (811 total)
void __fastcall KeyValues::SetFloat(KeyValues *const this, const char *keyName, __m128i a3, float value)
{
  int v4; // r14d
  KeyValues *Key; // rax
  KeyValues *v6; // rbx
  char v7; // al

  v4 = _mm_cvtsi128_si32(a3);
  Key = KeyValues::FindKey(this, keyName, 1);
  v6 = Key;
  if ( Key != 0 )
  {
    CKeyValues_Data::Internal_ClearData(Key);
    v7 = *(&v6->CKeyValues_Data + 11);
    v6->m_iValue = v4;
    *(&v6->CKeyValues_Data + 11) = v7 & 0xF8 | 3;
  }
}


// CKeyValues_Data::Internal_SetName  (line 2742, @0x0000000002f76500, libserver.so)  // inlines: HKeySymbol
// calls: KeyValuesSystem
// callers: KeyValues::KeyValues, KeyValues::SetName, KeyValues::ReadAsBinaryFilteredInternal, KeyValues::ReadAsBinaryInternal, KeyValues::ProcessResolutionKeys, KeyValues::LoadFromBuffer
void __fastcall CKeyValues_Data::Internal_SetName(CKeyValues_Data *const this, const char *setName)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // edx
  bool v7; // zf
  HKeySymbol hCaseInsensitiveKeyName; // [rsp+0h] [rbp-20h] BYREF

  hCaseInsensitiveKeyName.nIndex = 0xFFFFFF;
  v4 = KeyValuesSystem();
  v5 = (*(*v4 + 64LL))(v4, &hCaseInsensitiveKeyName, setName, 1);
  *(this + 4) = v5;
  v6 = HIWORD(v5);
  v7 = v5 == hCaseInsensitiveKeyName.nIndex;
  LOBYTE(v5) = *(this + 11);
  *(this + 10) = v6;
  *(this + 11) = (32 * v7) | v5 & 0xDF;
}


// CKeyValues_Data::Internal_SetNameFrom  (line 2755, @0x0000000002f765d0, libserver.so)
void __fastcall CKeyValues_Data::Internal_SetNameFrom(CKeyValues_Data *const this, const CKeyValues_Data *const other)
{
  int v2; // eax
  char v3; // dl

  v2 = *(other + 4) | (*(other + 10) << 16);
  v3 = HIBYTE(*(other + 4));
  *(this + 8) = *(other + 4);
  *(this + 10) = BYTE2(v2);
  LOBYTE(v2) = *(this + 11);
  *(this + 9) = v3;
  *(this + 11) = *(other + 11) & 0x20 | v2 & 0xDF;
}


// KeyValues::SetName  (line 2761, @0x0000000002f76620, libserver.so)
// calls: CKeyValues_Data::Internal_SetName
// callers: ScriptTableToKeyValues, CDOTABaseAbility::OnSaveState, CDOTAGamerules::SaveStockInformation, PerformDOTASaveGame, CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary, CDOTA_PlayerResource::WriteSaveGameInformation, CCompendiumDataFileTemplateHandler::ResolveDefinesRecursive, CDOTA_BaseNPC::OnSaveState, SaveRoshanInformation, CDOTA_Unit_Hero_Legion_Commander::OnSaveState, CEconItemSchema::ItemTesting_CreateTestItemDefinitionNoClone
void __fastcall KeyValues::SetName(KeyValues *const this, const char *setName)
{
  CKeyValues_Data::Internal_SetName(this, setName);
}


// CKeyValues_Data::Internal_SetPtr  (line 2769, @0x0000000002f76630, libserver.so)
// calls: CKeyValues_Data::Internal_ClearData
void __fastcall CKeyValues_Data::Internal_SetPtr(CKeyValues_Data *const this, void *value)
{
  char v4; // al

  CKeyValues_Data::Internal_ClearData(this);
  v4 = *(this + 11);
  this->m_uValue = value;
  *(this + 11) = v4 & 0xF8 | 4;
}


// CKeyValues_Data::ResolvePtrValue  (line 2776, @0x0000000002f76660, libserver.so)
void *__fastcall CKeyValues_Data::ResolvePtrValue(const CKeyValues_Data *const this)
{
  return this->m_uValue;
}


// KeyValues::SetPtr  (line 2782, @0x0000000002f7a5b0, libserver.so)  // inlines: Internal_SetPtr
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_ClearData
// callers: ScriptVmKeyValueFromVariant, CGameEvent::SetPtr, CDOTA_Ability_HarpyStorm_ChainLightning::OnSpellStart, CDOTAHeroList::DistributeRewardsForKill, CDOTA_Ability_Razor_StaticLink::OnSpellStart, CDOTA_Modifier_PhantomLancer_PhantomEdge::OnIntervalThink, CDOTA_Ability_Kunkka_XMarksTheSpot::OnSpellStart, CDOTA_Ability_Lich_ChainFrost::OnSpellStart, CDOTA_Ability_Mirana_Starfall::CastStarfall, CDOTA_Ability_Lich_ChainFrost::OnProjectileHit_ExtraData, CDOTA_Modifier_AntiMage_SpellShield::ReflectSpell, CDOTA_Ability_Zuus_ArcLightning::OnSpellStart (65 total)
void __fastcall KeyValues::SetPtr(KeyValues *const this, const char *keyName, void *value)
{
  KeyValues *Key; // rax
  KeyValues *v5; // rbx
  char v6; // al

  Key = KeyValues::FindKey(this, keyName, 1);
  v5 = Key;
  if ( Key != 0 )
  {
    CKeyValues_Data::Internal_ClearData(Key);
    v6 = *(&v5->CKeyValues_Data + 11);
    v5->m_uValue = value;
    *(&v5->CKeyValues_Data + 11) = v6 & 0xF8 | 4;
  }
}


// CKeyValues_Data::Internal_CopyName  (line 2791, @0x0000000002f76670, libserver.so)
void __fastcall CKeyValues_Data::Internal_CopyName(CKeyValues_Data *const this, const CKeyValues_Data *const src)
{
  int v2; // eax
  char v3; // dl

  v2 = *(src + 4) | (*(src + 10) << 16);
  v3 = HIBYTE(*(src + 4));
  *(this + 8) = *(src + 4);
  *(this + 10) = BYTE2(v2);
  LOBYTE(v2) = *(this + 11);
  *(this + 9) = v3;
  *(this + 11) = *(src + 11) & 0x20 | v2 & 0xDF;
}


// CKeyValues_Data::Internal_CopyData  (line 2797, @0x0000000002f766c0, libserver.so)  // inlines: Internal_GetSubKey, Internal_SetColor, Internal_SetFloat, Internal_SetInt, Internal_SetPtr, Internal_SetUint64, ResolveColorValue, ResolveFloatValue, ResolveIntValue, ResolvePtrValue, ResolveStringValue, ResolveUint64Value, ResolveWStringValue
// calls: CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetWString, CKeyValues_Data::Internal_SetString
// callers: KeyValues::RecursiveCopyKeyValues, KeyValues::MakeCopy
// globals: jpt_2F766FE
void __fastcall CKeyValues_Data::Internal_CopyData(CKeyValues_Data *const this, const CKeyValues_Data *const src)
{
  char v3; // al
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // r14
  unsigned __int8 v7; // r15
  char v8; // al
  uintp m_uValue; // r12
  char v10; // al
  int v11; // r12d
  char v12; // al
  int m_iValue; // r12d
  char v14; // al
  uintp v15; // r12
  char v16; // al

  v3 = *(src + 11);
  if ( (v3 & 0x47) != 0x40 || src->m_uValue == 0 )
  {
    switch ( *(src + 11) & 7 )
    {
      case 0:
        CKeyValues_Data::Internal_ClearData(this);
        break;
      case 1:
        if ( (v3 & 0x10) != 0 )
          src = src->m_uValue;
        CKeyValues_Data::Internal_SetString(this, src);
        break;
      case 2:
        m_iValue = src->m_iValue;
        CKeyValues_Data::Internal_ClearData(this);
        v14 = *(this + 11);
        this->m_iValue = m_iValue;
        *(this + 11) = v14 & 0xF8 | 2;
        break;
      case 3:
        v11 = src->m_iValue;
        CKeyValues_Data::Internal_ClearData(this);
        v12 = *(this + 11);
        this->m_iValue = v11;
        *(this + 11) = v12 & 0xF8 | 3;
        break;
      case 4:
        m_uValue = src->m_uValue;
        CKeyValues_Data::Internal_ClearData(this);
        v10 = *(this + 11);
        this->m_uValue = m_uValue;
        *(this + 11) = v10 & 0xF8 | 4;
        break;
      case 5:
        if ( (v3 & 0x10) != 0 )
          src = src->m_uValue;
        CKeyValues_Data::Internal_SetWString(this, &src->0);
        break;
      case 6:
        v4 = src->m_Color[3];
        v5 = src->m_Color[2];
        v6 = src->m_Color[1];
        v7 = src->m_Color[0];
        CKeyValues_Data::Internal_ClearData(this);
        v8 = *(this + 11);
        this->m_Color[3] = v4;
        this->m_Color[2] = v5;
        this->m_Color[1] = v6;
        this->m_Color[0] = v7;
        *(this + 11) = v8 & 0xF8 | 6;
        break;
      case 7:
        if ( (v3 & 0x10) != 0 )
          v15 = *src->m_pValue;
        else
          v15 = src->m_uValue;
        CKeyValues_Data::Internal_ClearData(this);
        v16 = *(this + 11);
        this->m_uValue = v15;
        *(this + 11) = v16 & 0xE8 | 7;
        break;
    }
  }
}


// KeyValues::RecursiveCopyKeyValues  (line 2841, @0x0000000002f780d0, libserver.so)  // inlines: Internal_CopyName, Internal_GetSubKey, ResolveSubKeyValue
// calls: KeyValues::operator new, KeyValues::KeyValues, CKeyValues_Data::Internal_CopyData, CKeyValues_Data::Internal_SetSubKey, KeyValues::operator delete, _Unwind_Resume
// callers: KeyValues::operator=
void __fastcall KeyValues::RecursiveCopyKeyValues(KeyValues *const this, KeyValues *const src)
{
  KeyValues *v4; // r13
  int v5; // eax
  KeyValues *v6; // r13
  KeyValues *m_uValue; // rsi

  while ( 1 )
  {
    v5 = *(&src->CKeyValues_Data + 4) | (*(&src->CKeyValues_Data + 10) << 16);
    *(&this->CKeyValues_Data + 8) = *(&src->CKeyValues_Data + 4);
    *(&this->CKeyValues_Data + 10) = BYTE2(v5);
    LOBYTE(v5) = *(&this->CKeyValues_Data + 11);
    *(&this->CKeyValues_Data + 9) = BYTE1(v5);
    *(&this->CKeyValues_Data + 11) = *(&src->CKeyValues_Data + 11) & 0x20 | v5 & 0xDF;
    CKeyValues_Data::Internal_CopyData(this, src);
    if ( (*(&src->CKeyValues_Data + 11) & 0x47) == 0x40 && src->m_uValue != 0 )
      break;
    if ( src->m_pPeer == 0 )
      return;
LABEL_3:
    v4 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v4, 0);
    this->m_pPeer = v4;
    this = v4;
    src = src->m_pPeer;
  }
  v6 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v6, 0);
  CKeyValues_Data::Internal_SetSubKey(this, v6);
  m_uValue = 0;
  if ( (*(&src->CKeyValues_Data + 11) & 0x47) == 0x40 )
    m_uValue = src->m_uValue;
  KeyValues::RecursiveCopyKeyValues(v6, m_uValue);
  if ( src->m_pPeer != 0 )
    goto LABEL_3;
}


// KeyValues::operator=  (line 2884, @0x0000000002f78200, libserver.so)  // inlines: Init, Internal_ClearAll
// calls: KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::RecursiveCopyKeyValues
KeyValues *__fastcall KeyValues::operator=(KeyValues *const this, KeyValues *const src)
{
  KeyValues::RemoveEverything(this);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  CKeyValues_Data::Internal_ClearData(this);
  this->m_pPeer = 0;
  *(&this->CKeyValues_Data + 11) &= ~8u;
  KeyValues::RecursiveCopyKeyValues(this, src);
  return this;
}


// KeyValues::CopySubkeys  (line 2896, @0x0000000002f782f0, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
// calls: KeyValues::MakeCopy, CKeyValues_Data::Internal_SetSubKey
// callers: CSoundParametersInternal::SetOperatorsKV, CSoundParametersInternal::SetGameData, CDOTABaseAbility::ProcessAbilityData, KeyValues::MakeCopy
void __fastcall KeyValues::CopySubkeys(const KeyValues *const this, KeyValues *pParent)
{
  const KeyValues *m_uValue; // rbx
  KeyValues *i; // r12
  KeyValues *Copy; // rax
  KeyValues *v6; // [rsp-8h] [rbp-30h]

  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      for ( i = 0; ; i = Copy )
      {
        Copy = KeyValues::MakeCopy(m_uValue);
        if ( i != 0 )
        {
          i->m_pPeer = Copy;
        }
        else
        {
          v6 = Copy;
          CKeyValues_Data::Internal_SetSubKey(pParent, Copy);
          Copy = v6;
        }
        Copy->m_pPeer = 0;
        m_uValue = m_uValue->m_pPeer;
        if ( m_uValue == 0 )
          break;
      }
    }
  }
}


// KeyValues::MakeCopy  (line 2924, @0x0000000002f78250, libserver.so)  // inlines: Internal_CopyName
// calls: KeyValues::operator new, KeyValues::KeyValues, CKeyValues_Data::Internal_CopyData, KeyValues::CopySubkeys, KeyValues::operator delete, _Unwind_Resume
// callers: CNetMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CNetMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CGameConfiguration::SetupGameSessionConfiguration, CGameConfiguration::InitGameSession, CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CNetMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CGameEventManager::DuplicateEvent, CDOTAChallengeSystem::GenerateBasicQuery, CDOTAChallengeSystem::GenerateMultiQuery, CDOTAChallengeSystem::GenerateRankedQuery, CDOTAChallengeSystem::GenerateRankedMultiQuery, PerformDOTALoadGame (32 total)
KeyValues *__fastcall KeyValues::MakeCopy(const KeyValues *const this)
{
  KeyValues *v2; // rbx
  int v3; // eax

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, 0);
  v3 = *(&this->CKeyValues_Data + 4) | (*(&this->CKeyValues_Data + 10) << 16);
  *(&v2->CKeyValues_Data + 8) = *(&this->CKeyValues_Data + 4);
  *(&v2->CKeyValues_Data + 10) = BYTE2(v3);
  LOBYTE(v3) = *(&v2->CKeyValues_Data + 11);
  *(&v2->CKeyValues_Data + 9) = BYTE1(v3);
  *(&v2->CKeyValues_Data + 11) = *(&this->CKeyValues_Data + 11) & 0x20 | v3 & 0xDF;
  CKeyValues_Data::Internal_CopyData(v2, this);
  KeyValues::CopySubkeys(this, v2);
  return v2;
}


// KeyValues::IsEmpty  (line 2941, @0x0000000002f7b3a0, libserver.so)  // inlines: Internal_GetDataType, Internal_GetSubKey
// calls: KeyValues::FindKey
// callers: CGameEvent::IsEmpty, CDOTA_Modifier_Illusion::OnCreated, KeyValues::ReadAsBinaryInternal
bool __fastcall KeyValues::IsEmpty(KeyValues *const this, const char *keyName)
{
  KeyValues *Key; // rax
  uintp *v3; // rdx
  char v4; // cl
  bool result; // al

  Key = KeyValues::FindKey(this, keyName, 0);
  v3 = Key;
  if ( Key == 0 )
    return 1;
  v4 = *(&Key->CKeyValues_Data + 11);
  result = 0;
  if ( (v4 & 7) == 0 && ((v4 & 0x47) != 0x40 || *v3 == 0) )
    return 1;
  return result;
}


// KeyValues::Clear  (line 2956, @0x0000000002f78470, libserver.so)  // inlines: Internal_GetSubKey, Internal_SetSubKey, ResolveSubKeyValue, ~CKeyValues_Data, ~KeyValues
// calls: CKeyValues_Data::Internal_ClearData, KeyValues::RemoveEverything, KeyValues::operator delete
// callers: CBaseMultiplayerPlayer::SetOrResetInitialState, CBaseMultiplayerPlayer::ResetPerLifeCounters, KeyValues::LoadFromBuffer
void __fastcall KeyValues::Clear(KeyValues *const this)
{
  CKeyValues_Data *m_uValue; // r12

  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 && (m_uValue = this->m_uValue, this->m_uValue != 0) )
  {
    KeyValues::RemoveEverything(this->m_pSub);
    CKeyValues_Data::Internal_ClearData(m_uValue);
    KeyValues::operator delete(m_uValue);
    *(&this->CKeyValues_Data + 11) &= ~0x40u;
    CKeyValues_Data::Internal_ClearData(this);
  }
  else
  {
    CKeyValues_Data::Internal_ClearData(this);
  }
}


// KeyValues::GetDataType  (line 2970, @0x0000000002f7c340, libserver.so)  // inlines: Internal_GetDataType
// calls: KeyValues::FindKey
// callers: ProtoBufHelper::ParseKV, ScriptTableFromKeyValues, Recursive_ConvertKeyValuesToTable, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CGameEventManager::LoadEventsFromFile, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats, CDotaStatManager::CPlayerStatState::DumpStats, CalculateKeyValuesCRCRecursive, ConvertTextDataToNewKeyValues, ConvertMapDataKV
CKeyValues_Data::types_t __fastcall KeyValues::GetDataType(KeyValues *const this, const char *keyName)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keyName, 0);
  if ( Key != 0 )
    return *(&Key->CKeyValues_Data + 11) & 7;
  else
    return CKeyValues_Data::types_t::TYPE_NONE;
}


// KeyValues::AppendIncludedKeys  (line 2985, @0x0000000002f76860, libserver.so)  // inlines: GetNextKey, SetNextKey
// callers: KeyValues::LoadFromBuffer
void __fastcall KeyValues::AppendIncludedKeys(
        KeyValues *const this,
        CUtlVector<KeyValues*,CUtlMemory<KeyValues*,int> > *const includedKeys)
{
  int m_Size; // eax
  unsigned __int64 v3; // rdx
  KeyValues *v4; // rcx

  m_Size = includedKeys->m_Size;
  if ( includedKeys->m_Size > 0 )
  {
    v3 = 0;
    do
    {
      v4 = includedKeys->m_Memory.m_pMemory[v3 / 8];
      if ( this != 0 )
      {
        while ( this->m_pPeer != 0 )
          this = this->m_pPeer;
      }
      v3 += 8LL;
      this->m_pPeer = v4;
    }
    while ( v3 != 8LL * (m_Size - 1) + 8 );
  }
}


// KeyValues::ParseIncludedKeys  (line 3004, @0x0000000002f7d100, libserver.so)  // inlines: AddToTail, CopyConstruct<KeyValues*>, Element, GrowMemory, Internal_SetHasEscapeSequences, UsesEscapeSequences, V_strlen, V_strncat<long unsigned int>, V_strncpy<long unsigned int>, operator[], ~CKeyValues_Data, ~KeyValues
// calls: _V_strncpy, _V_strncat, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, DevMsg(char const*,...), KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::operator delete, CUtlMemory<KeyValues*, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: KeyValues::LoadFromBuffer
// strings: "KeyValues::ParseIncludedKeys: Couldn't load included keyvalue file %s\n"
void __fastcall KeyValues::ParseIncludedKeys(
        KeyValues *const this,
        const char *resourceName,
        const char *filetoinclude,
        IBaseFileSystem *pFileSystem,
        const char *pPathID,
        CUtlVector<KeyValues*,CUtlMemory<KeyValues*,int> > *const includedKeys,
        GetSymbolProc_t pfnEvaluateSymbolProc)
{
  int v11; // eax
  char v12; // dl
  KeyValues *v13; // r12
  __int64 m_Size; // rbx
  int v15; // eax
  KeyValues **v16; // rax
  char fullpath[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v19; // [rsp+218h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( pFileSystem != 0 )
  {
    _V_strncpy(fullpath, resourceName, 512);
    v11 = strlen(fullpath);
    if ( v11 > 0 )
    {
      do
      {
        v12 = fullpath[--v11];
        if ( v12 == 47 )
          break;
        if ( v12 == 92 )
          break;
        fullpath[v11] = 0;
      }
      while ( v11 != 0 );
    }
    _V_strncat(fullpath, filetoinclude, 512, 0xFFFFFFFFLL);
    v13 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v13, fullpath);
    *(&v13->CKeyValues_Data + 11) = *(&this->CKeyValues_Data + 11) & 8 | *(&v13->CKeyValues_Data + 11) & 0xF7;
    if ( KeyValues::LoadFromFile(v13, pFileSystem, fullpath, pPathID, pfnEvaluateSymbolProc) )
    {
      m_Size = includedKeys->m_Size;
      v15 = includedKeys->m_Size;
      if ( m_Size == includedKeys->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<KeyValues *,int>::Grow(&includedKeys->m_Memory, 1);
        v15 = includedKeys->m_Size;
      }
      includedKeys->m_Size = v15 + 1;
      v16 = &includedKeys->m_Memory.m_pMemory[m_Size];
      if ( v16 != 0 )
        *v16 = v13;
    }
    else
    {
      DevMsg("KeyValues::ParseIncludedKeys: Couldn't load included keyvalue file %s\n", fullpath);
      KeyValues::RemoveEverything(v13);
      CKeyValues_Data::Internal_ClearData(v13);
      KeyValues::operator delete(v13);
    }
  }
}


// KeyValues::MergeBaseKeys  (line 3067, @0x0000000002f78420, libserver.so)
// calls: KeyValues::RecursiveMergeKeyValues
// callers: KeyValues::LoadFromBuffer
void __fastcall KeyValues::MergeBaseKeys(
        KeyValues *const this,
        CUtlVector<KeyValues*,CUtlMemory<KeyValues*,int> > *const baseKeys)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  KeyValues *v6; // rsi

  if ( baseKeys->m_Size > 0 )
  {
    v4 = 0;
    v5 = 8LL * (baseKeys->m_Size - 1) + 8;
    do
    {
      v6 = baseKeys->m_Memory.m_pMemory[v4 / 8];
      v4 += 8LL;
      KeyValues::RecursiveMergeKeyValues(this, v6);
    }
    while ( v4 != v5 );
  }
}


// KeyValues::RecursiveMergeKeyValues  (line 3084, @0x0000000002f78370, libserver.so)  // inlines: GetName, Internal_GetSubKey, ResolveSubKeyValue, _V_strcmp
// calls: KeyValues::MakeCopy, KeyValues::AddSubKey, CKeyValues_Data::Internal_GetName, strcmp
// callers: KeyValues::MergeBaseKeys
void __fastcall KeyValues::RecursiveMergeKeyValues(KeyValues *const this, KeyValues *baseKV)
{
  KeyValues *i; // r13
  KeyValues *Copy; // rax
  KeyValues *m_uValue; // rbx
  const char *Name; // r12
  const char *v7; // rax

  if ( (*(&baseKV->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    for ( i = baseKV->m_uValue; i != 0; i = i->m_pPeer )
    {
      while ( 1 )
      {
        if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
        {
          m_uValue = this->m_uValue;
          if ( this->m_uValue != 0 )
            break;
        }
LABEL_4:
        Copy = KeyValues::MakeCopy(i);
        KeyValues::AddSubKey(this, Copy);
        i = i->m_pPeer;
        if ( i == 0 )
          return;
      }
      while ( 1 )
      {
        Name = CKeyValues_Data::Internal_GetName(m_uValue);
        v7 = CKeyValues_Data::Internal_GetName(i);
        if ( strcmp(v7, Name) == 0 )
          break;
        m_uValue = m_uValue->m_pPeer;
        if ( m_uValue == 0 )
          goto LABEL_4;
      }
      KeyValues::RecursiveMergeKeyValues(m_uValue, i);
    }
  }
}


// KeyValues::EvaluateConditional  (line 3120, @0x0000000002f78ca0, libserver.so)
// calls: CExpressionEvaluator::Evaluate, CKeyValuesErrorStack::ReportError
// callers: KeyValues::RecursiveLoadFromBuffer, KeyValues::LoadFromBuffer
// strings: "KV Conditional Evaluation Error"
// globals: g_ExpressionEvaluator
bool __fastcall KeyValues::EvaluateConditional(
        KeyValues *const this,
        CKeyValuesErrorStack *pErrorStack,
        const char *pExpressionString,
        GetSymbolProc_t pfnEvaluateSymbolProc)
{
  bool bResult; // [rsp+Fh] [rbp-11h] BYREF

  bResult = 0;
  if ( !CExpressionEvaluator::Evaluate(&g_ExpressionEvaluator, &bResult, pExpressionString, pfnEvaluateSymbolProc, 0) )
    CKeyValuesErrorStack::ReportError(pErrorStack, "KV Conditional Evaluation Error");
  return bResult;
}


// KeyValues::LoadFromBuffer  (line 3138, @0x0000000002f7d2d0, libserver.so)  // inlines: CKeyValuesErrorStack, CKeyValuesTokenReader, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, ClearErrorFlag, HKeySymbol, Internal_SetHasEscapeSequences, Purge, RemoveAll, ReportError, SetFilename, SetNextKey, UsesEscapeSequences, operator char const*, ~CKeyValuesErrorStack, ~CKeyValues_Data, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~KeyValues
// calls: CKeyValuesTokenReader::ReadToken, V_stricmp_fast, CFmtStrN<256, false>::CFmtStrN, KeyValuesSystem, KeyValues::AppendIncludedKeys, KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::operator delete, KeyValues::MergeBaseKeys, CKeyValues_Data::Internal_SetName, CUtlString::Format, CUtlString::Get (23 total)
// callers: Script_LoadKeyValuesFromString, CEconItemSchema::BInitTextBuffer, KeyValues::LoadFromBuffer, KeyValues::LoadTemporaryFromBuffer, LoadGameInfo
// strings: "#include", "#include is NULL ", "KeyValues Error: %s in file %s\n", "%s, ", "(*%s*), ", "#base" (9 total)
bool __fastcall KeyValues::LoadFromBuffer(
        KeyValues *const this,
        const char *resourceName,
        CUtlBuffer *const buf,
        IBaseFileSystem *pFileSystem,
        const char *pPathID,
        GetSymbolProc_t pfnEvaluateSymbolProc,
        IKeyValuesErrorSpew *pErrorSpew)
{
  CDefaultKeyValuesErrorSpew *p_m_DefaultSpew; // rdi
  CKeyValuesErrorStack *p_errorStack; // rax
  int (**vptr_IKeyValuesErrorSpew)(...); // rax
  const char *v10; // rbx
  const char *v11; // rax
  void (__fastcall *v12)(IKeyValuesErrorSpew *, char *); // r12
  __int64 m_maxErrorIndex; // rdi
  int v14; // ebx
  CKeyValuesErrorStack *v15; // r12
  void (__fastcall *v16)(IKeyValuesErrorSpew *, char *); // r13
  __int64 v17; // rax
  const char *v18; // rax
  void (__fastcall *v19)(IKeyValuesErrorSpew *, char *); // r13
  __int64 v20; // rax
  const char *v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r12
  KeyValues *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r13
  KeyValues *v30; // rbx
  bool m_bEncounteredErrors; // bl
  bool v32; // bl
  const char *v34; // rax
  const char *v35; // rdx
  const char *v36; // rax
  void (__fastcall *v37)(IKeyValuesErrorSpew *, char *); // rbx
  __int64 v38; // rdi
  int v39; // ebx
  CKeyValuesErrorStack *v40; // r12
  void (__fastcall *v41)(IKeyValuesErrorSpew *, char *); // r13
  __int64 v42; // rax
  const char *v43; // rax
  void (__fastcall *v44)(IKeyValuesErrorSpew *, char *); // r13
  __int64 v45; // rax
  const char *v46; // rax
  KeyValues *v47; // rax
  const char *v48; // rax
  void (__fastcall *v49)(IKeyValuesErrorSpew *, char *); // r12
  __int64 v50; // rdi
  int v51; // ebx
  CKeyValuesErrorStack *i; // r12
  __int64 v53; // rax
  const char *v54; // rax
  void (__fastcall *v55)(IKeyValuesErrorSpew *, char *); // r13
  __int64 v56; // rax
  const char *v57; // rax
  KeyValues *v58; // rax
  const char *v59; // rsi
  KeyValues *v60; // rbx
  KeyValues *pPreviousKey; // [rsp+50h] [rbp-8BE0h]
  bool bAccepted; // [rsp+78h] [rbp-8BB8h]
  KeyValues *v68; // [rsp+88h] [rbp-8BA8h]
  bool wasQuoted; // [rsp+BEh] [rbp-8B72h] BYREF
  bool wasConditional; // [rsp+BFh] [rbp-8B71h] BYREF
  CUtlString errorText; // [rsp+C0h] [rbp-8B70h] BYREF
  CUtlVector<KeyValues*,CUtlMemory<KeyValues*,int> > includedKeys; // [rsp+D0h] [rbp-8B60h] BYREF
  CUtlVector<KeyValues*,CUtlMemory<KeyValues*,int> > baseKeys; // [rsp+F0h] [rbp-8B40h] BYREF
  CKeyValuesErrorStack errorStack; // [rsp+110h] [rbp-8B20h] BYREF
  CFmtStrN<256,false> v76; // [rsp+240h] [rbp-89F0h] BYREF
  CFmtStrN<256,false> v77; // [rsp+350h] [rbp-88E0h] BYREF
  CFmtStrN<256,false> v78; // [rsp+460h] [rbp-87D0h] BYREF
  CFmtStrN<256,false> v79; // [rsp+570h] [rbp-86C0h] BYREF
  CFmtStrN<256,false> v80; // [rsp+680h] [rbp-85B0h] BYREF
  CFmtStrN<256,false> v81; // [rsp+790h] [rbp-84A0h] BYREF
  CFmtStrN<256,false> v82; // [rsp+8A0h] [rbp-8390h] BYREF
  CFmtStrN<256,false> v83; // [rsp+9B0h] [rbp-8280h] BYREF
  CFmtStrN<256,false> v84; // [rsp+AC0h] [rbp-8170h] BYREF
  CKeyValuesTokenReader tokenReader; // [rsp+BD0h] [rbp-8060h] BYREF
  unsigned __int64 v86; // [rsp+8BF8h] [rbp-38h]

  v86 = __readfsqword(0x28u);
  p_m_DefaultSpew = pErrorSpew;
  p_errorStack = &errorStack;
  includedKeys.m_Size = 0;
  includedKeys.m_Memory.m_pMemory = 0;
  includedKeys.m_Memory.m_nAllocationCount = 0;
  includedKeys.m_Memory.m_nGrowSize = 0;
  baseKeys.m_Size = 0;
  baseKeys.m_Memory.m_pMemory = 0;
  baseKeys.m_Memory.m_nAllocationCount = 0;
  baseKeys.m_Memory.m_nGrowSize = 0;
  do
  {
    p_errorStack->m_errorStack[0].nIndex = 0xFFFFFF;
    p_errorStack = (p_errorStack + 4);
  }
  while ( p_errorStack != &errorStack.m_pFilename );
  errorStack.m_errorIndex = 0;
  errorStack.m_pFilename = "NULL";
  errorStack.m_maxErrorIndex = 0;
  errorStack.m_bEncounteredErrors = 0;
  errorStack.m_DefaultSpew._vptr_IKeyValuesErrorSpew = off_47BEFD0;
  if ( pErrorSpew != 0 )
  {
    vptr_IKeyValuesErrorSpew = pErrorSpew->_vptr_IKeyValuesErrorSpew;
    errorStack.m_pErrorSpew = pErrorSpew;
  }
  else
  {
    p_m_DefaultSpew = &errorStack.m_DefaultSpew;
    errorStack.m_pErrorSpew = &errorStack.m_DefaultSpew;
    vptr_IKeyValuesErrorSpew = off_47BEFD0;
  }
  (*vptr_IKeyValuesErrorSpew)(p_m_DefaultSpew, resourceName, &errorStack.m_pFilename);
  tokenReader.m_nTokensRead = 0;
  tokenReader.m_bUsePriorToken = 0;
  tokenReader.m_bPriorTokenWasQuoted = 0;
  tokenReader.m_bPriorTokenWasConditional = 0;
  tokenReader.m_pErrorStack = &errorStack;
  tokenReader.m_Buffer = buf;
  tokenReader.m_pTokenBuf[0] = 0;
  errorStack.m_maxErrorIndex = 0;
  tokenReader.m_pKeyValues = this;
  v68 = this;
  errorStack.m_pFilename = resourceName;
  pPreviousKey = 0;
  do
  {
    v10 = CKeyValuesTokenReader::ReadToken(&tokenReader, &wasQuoted, &wasConditional);
    if ( buf->m_Error != 0 || v10 == 0 || !wasQuoted && *v10 == 0 )
      break;
    if ( V_stricmp_fast(v10, "#include") != 0 )
    {
      if ( V_stricmp_fast(v10, "#base") != 0 )
      {
        if ( v68 != 0 )
        {
          CKeyValues_Data::Internal_SetName(v68, v10);
        }
        else
        {
          v58 = KeyValues::operator new(0x14u);
          v59 = v10;
          v68 = v58;
          v60 = v58;
          KeyValues::KeyValues(v58, v59);
          *(&v60->CKeyValues_Data + 11) = *(&this->CKeyValues_Data + 11) & 8 | *(&v60->CKeyValues_Data + 11) & 0xF7;
          if ( pPreviousKey != 0 )
            pPreviousKey->m_pPeer = v60;
        }
        v34 = CKeyValuesTokenReader::ReadToken(&tokenReader, &wasQuoted, &wasConditional);
        bAccepted = 1;
        if ( wasConditional )
        {
          bAccepted = KeyValues::EvaluateConditional(this, &errorStack, v34, pfnEvaluateSymbolProc);
          v34 = CKeyValuesTokenReader::ReadToken(&tokenReader, &wasQuoted, &wasConditional);
          if ( v34 != 0 )
            goto LABEL_41;
        }
        else if ( v34 != 0 )
        {
LABEL_41:
          if ( *v34 == 123 && !wasQuoted )
          {
            KeyValues::RecursiveLoadFromBuffer(v68, &errorStack, resourceName, &tokenReader, pfnEvaluateSymbolProc);
LABEL_53:
            if ( bAccepted )
            {
              v47 = v68;
              v68 = 0;
              pPreviousKey = v47;
            }
            else
            {
              if ( pPreviousKey != 0 )
                pPreviousKey->m_pPeer = 0;
              KeyValues::Clear(v68);
            }
            continue;
          }
          errorText.m_pString = 0;
          v35 = v34;
LABEL_43:
          CUtlString::Format(&errorText, "LoadFromBuffer: expected '{', found '%s'", v35);
          v36 = CUtlString::Get(&errorText);
          v37 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
          CFmtStrN<256,false>::CFmtStrN(&v82, "KeyValues Error: %s in file %s\n", v36, errorStack.m_pFilename);
          v37(errorStack.m_pErrorSpew, v82.m_szBuf);
          v39 = 0;
          v40 = &errorStack;
          if ( errorStack.m_maxErrorIndex <= 0 )
          {
LABEL_51:
            (*(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2))(errorStack.m_pErrorSpew, "\n");
            errorStack.m_bEncounteredErrors = 1;
            if ( errorText.m_pString != 0 )
              CUtlString::FreeMemoryBlock(&errorText);
            goto LABEL_53;
          }
          while ( 1 )
          {
LABEL_47:
            if ( v39 > 63 || v40->m_errorStack[0].nIndex == 0xFFFFFF )
              goto LABEL_46;
            if ( v39 < errorStack.m_errorIndex )
              break;
            v44 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
            v45 = KeyValuesSystem(v38);
            v46 = (*(*v45 + 24LL))(v45, errorStack.m_errorStack[v39].nIndex);
            CFmtStrN<256,false>::CFmtStrN(&v84, "(*%s*), ", v46);
            v44(errorStack.m_pErrorSpew, v84.m_szBuf);
            ++v39;
            v40 = (v40 + 4);
            if ( v39 >= errorStack.m_maxErrorIndex )
              goto LABEL_51;
          }
          v41 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
          v42 = KeyValuesSystem(v38);
          v43 = (*(*v42 + 24LL))(v42, errorStack.m_errorStack[v39].nIndex);
          CFmtStrN<256,false>::CFmtStrN(&v83, "%s, ", v43);
          v41(errorStack.m_pErrorSpew, v83.m_szBuf);
LABEL_46:
          ++v39;
          v40 = (v40 + 4);
          if ( v39 >= errorStack.m_maxErrorIndex )
            goto LABEL_51;
          goto LABEL_47;
        }
        errorText.m_pString = 0;
        v35 = "<NULL>";
        goto LABEL_43;
      }
      v48 = CKeyValuesTokenReader::ReadToken(&tokenReader, &wasQuoted, &wasConditional);
      if ( v48 != 0 && *v48 != 0 )
      {
        KeyValues::ParseIncludedKeys(this, resourceName, v48, pFileSystem, pPathID, &baseKeys, pfnEvaluateSymbolProc);
        continue;
      }
      v49 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
      CFmtStrN<256,false>::CFmtStrN(&v79, "KeyValues Error: %s in file %s\n", "#base is NULL ", errorStack.m_pFilename);
      v49(errorStack.m_pErrorSpew, v79.m_szBuf);
      v51 = 0;
      for ( i = &errorStack; v51 < errorStack.m_maxErrorIndex; i = (i + 4) )
      {
        if ( v51 <= 63 && i->m_errorStack[0].nIndex != 0xFFFFFF )
        {
          v55 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
          if ( errorStack.m_errorIndex > v51 )
          {
            v53 = KeyValuesSystem(v50);
            v54 = (*(*v53 + 24LL))(v53, errorStack.m_errorStack[v51].nIndex);
            CFmtStrN<256,false>::CFmtStrN(&v80, "%s, ", v54);
            v55(errorStack.m_pErrorSpew, v80.m_szBuf);
          }
          else
          {
            v56 = KeyValuesSystem(v50);
            v57 = (*(*v56 + 24LL))(v56, errorStack.m_errorStack[v51].nIndex);
            CFmtStrN<256,false>::CFmtStrN(&v81, "(*%s*), ", v57);
            v55(errorStack.m_pErrorSpew, v81.m_szBuf);
          }
        }
        ++v51;
      }
    }
    else
    {
      v11 = CKeyValuesTokenReader::ReadToken(&tokenReader, &wasQuoted, &wasConditional);
      if ( v11 != 0 && *v11 != 0 )
      {
        KeyValues::ParseIncludedKeys(
          this,
          resourceName,
          v11,
          pFileSystem,
          pPathID,
          &includedKeys,
          pfnEvaluateSymbolProc);
        continue;
      }
      v12 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
      CFmtStrN<256,false>::CFmtStrN(
        &v76,
        "KeyValues Error: %s in file %s\n",
        "#include is NULL ",
        errorStack.m_pFilename);
      v12(errorStack.m_pErrorSpew, v76.m_szBuf);
      m_maxErrorIndex = errorStack.m_maxErrorIndex;
      v14 = 0;
      v15 = &errorStack;
      if ( errorStack.m_maxErrorIndex > 0 )
      {
        while ( 1 )
        {
          if ( v14 > 63 || v15->m_errorStack[0].nIndex == 0xFFFFFF )
            goto LABEL_16;
          if ( v14 < errorStack.m_errorIndex )
          {
            v16 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
            v17 = KeyValuesSystem(m_maxErrorIndex);
            v18 = (*(*v17 + 24LL))(v17, errorStack.m_errorStack[v14].nIndex);
            CFmtStrN<256,false>::CFmtStrN(&v77, "%s, ", v18);
            v16(errorStack.m_pErrorSpew, v77.m_szBuf);
LABEL_16:
            ++v14;
            v15 = (v15 + 4);
            if ( v14 >= errorStack.m_maxErrorIndex )
              break;
          }
          else
          {
            v19 = *(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2);
            v20 = KeyValuesSystem(m_maxErrorIndex);
            v21 = (*(*v20 + 24LL))(v20, errorStack.m_errorStack[v14].nIndex);
            CFmtStrN<256,false>::CFmtStrN(&v78, "(*%s*), ", v21);
            v19(errorStack.m_pErrorSpew, v78.m_szBuf);
            ++v14;
            v15 = (v15 + 4);
            if ( v14 >= errorStack.m_maxErrorIndex )
              break;
          }
        }
      }
    }
    (*(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 2))(errorStack.m_pErrorSpew, "\n");
    errorStack.m_bEncounteredErrors = 1;
  }
  while ( buf->m_Error == 0 );
  KeyValues::AppendIncludedKeys(this, &includedKeys);
  v22 = includedKeys.m_Size - 1;
  if ( includedKeys.m_Size - 1 > 0 )
  {
    v23 = 8LL * v22;
    v24 = 8 * (v22 - (includedKeys.m_Size - 2)) - 8;
    do
    {
      v25 = includedKeys.m_Memory.m_pMemory[v23 / 8];
      if ( v25 != 0 )
      {
        KeyValues::RemoveEverything(includedKeys.m_Memory.m_pMemory[v23 / 8]);
        CKeyValues_Data::Internal_ClearData(v25);
        KeyValues::operator delete(v25);
      }
      v23 -= 8LL;
    }
    while ( v23 != v24 );
  }
  KeyValues::MergeBaseKeys(this, &baseKeys);
  v27 = (baseKeys.m_Size - 1);
  if ( baseKeys.m_Size - 1 >= 0 )
  {
    v27 = v27;
    v28 = 8LL * v27;
    v29 = 8 * (v27 - v27) - 8;
    do
    {
      v30 = baseKeys.m_Memory.m_pMemory[v28 / 8];
      if ( v30 != 0 )
      {
        KeyValues::RemoveEverything(baseKeys.m_Memory.m_pMemory[v28 / 8]);
        CKeyValues_Data::Internal_ClearData(v30);
        KeyValues::operator delete(v30);
      }
      v28 -= 8LL;
    }
    while ( v28 != v29 );
  }
  errorStack.m_maxErrorIndex = 0;
  m_bEncounteredErrors = errorStack.m_bEncounteredErrors;
  errorStack.m_pFilename = "";
  errorStack.m_bEncounteredErrors = 0;
  v32 = !m_bEncounteredErrors;
  (*(errorStack.m_pErrorSpew->_vptr_IKeyValuesErrorSpew + 1))(errorStack.m_pErrorSpew, v26, v27);
  baseKeys.m_Size = 0;
  if ( (baseKeys.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<KeyValues *,int>::Purge(&baseKeys.m_Memory);
    if ( (baseKeys.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<KeyValues *,int>::Purge(&baseKeys.m_Memory);
  }
  includedKeys.m_Size = 0;
  if ( (includedKeys.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<KeyValues *,int>::Purge(&includedKeys.m_Memory);
    if ( (includedKeys.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<KeyValues *,int>::Purge(&includedKeys.m_Memory);
  }
  return v32;
}


// KeyValues::LoadFromBuffer  (line 3288, @0x0000000002f7de90, libserver.so)  // inlines: V_strlen, ~CUtlBuffer, ~CUtlMemory
// calls: strlen, CUtlBuffer::CUtlBuffer, KeyValues::LoadFromBuffer, CUtlMemory<unsigned char, int>::Purge, V_UTF16ToUTF8, operator new [], CUtlBuffer::AssumeMemory, _Unwind_Resume
// callers: CBaseEntity::PrecacheModelComponents, CBreakModelsPrecached::ComputeServerSideSpawn, CBaseAnimatingController::GetSequenceKeyValues, CBaseProp::ParsePropData, ReadEncryptedKVFile, CWeaponScriptParser::ReadEncryptedKVFile, CRagdollProp::HasPhysgunInteraction, CBasePropDoor::CalcDoorSounds, CPhysicsProp::GetPropDataAngles, CPhysicsProp::GetCarryDistanceOffset, CPropDoorRotatingBreakable::OnTakeDamage, CPropDoorRotatingBreakable::PrecacheBreakables (19 total)
bool __fastcall KeyValues::LoadFromBuffer(
        KeyValues *const this,
        const char *resourceName,
        const char *pBuffer,
        IBaseFileSystem *pFileSystem,
        const char *pPathID,
        GetSymbolProc_t pfnEvaluateSymbolProc,
        IKeyValuesErrorSpew *pErrorSpew)
{
  const char *v7; // r12
  int v11; // eax
  int v12; // r8d
  int v14; // r12d
  char *pUTF8Buf; // [rsp+10h] [rbp-A0h]
  int nLen; // [rsp+18h] [rbp-98h]
  const char *nLena; // [rsp+18h] [rbp-98h]
  bool thisb; // [rsp+28h] [rbp-88h]
  CUtlBuffer buf; // [rsp+30h] [rbp-80h] BYREF

  v7 = pBuffer;
  if ( pBuffer != 0 )
  {
    v11 = strlen(pBuffer);
    v12 = v11;
    if ( v11 > 3 )
    {
      if ( *v7 != -17 || v7[1] != -69 || v7[2] != -65 )
      {
        CUtlBuffer::CUtlBuffer(&buf, v7, v11, 9);
        if ( *v7 != -1 )
        {
LABEL_5:
          thisb = KeyValues::LoadFromBuffer(
                    this,
                    resourceName,
                    &buf,
                    pFileSystem,
                    pPathID,
                    pfnEvaluateSymbolProc,
                    pErrorSpew);
          CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
          return thisb;
        }
LABEL_11:
        if ( v7[1] == -2 )
        {
          nLena = v7 + 2;
          v14 = V_UTF16ToUTF8(v7 + 2, 0, 0, 4);
          pUTF8Buf = operator new[](v14);
          V_UTF16ToUTF8(nLena, pUTF8Buf, v14, 4);
          CUtlBuffer::AssumeMemory(&buf, pUTF8Buf, v14, v14, 9);
        }
        goto LABEL_5;
      }
      v12 = v11 - 3;
      v7 += 3;
    }
    nLen = v12;
    CUtlBuffer::CUtlBuffer(&buf, v7, v12, 9);
    if ( nLen <= 2 || *v7 != -1 )
      goto LABEL_5;
    goto LABEL_11;
  }
  return 1;
}


// KeyValues::RecursiveLoadFromBuffer  (line 3317, @0x0000000002f78fa0, libserver.so)  // inlines: CKeyErrorContext, FindLastSubKey, GetNameSymbolCaseSensitive, HKeySymbol, Init, Internal_GetNameSymbolCaseSensitive, Internal_GetSubKey, Internal_SetFloat, Internal_SetInt, Internal_SetSubKey, Internal_SetUint64, Pop, Push, Reset, ResolveSubKeyValue, SeekBackOneToken, V_strlen, ~CKeyErrorContext, ~CKeyValues_Data, ~KeyValues
// calls: CKeyValuesTokenReader::ReadToken, KeyValues::CreateKeyUsingKnownLastChild, KeyValues::EvaluateConditional, CKeyValues_Data::Internal_ClearData, strlen, V_strtoi64, V_SetErrno, V_strtod, V_GetErrno, tolower, CKeyValues_Data::Internal_SetString, KeyValues::RemoveEverything (19 total)
// callers: KeyValues::LoadFromBuffer
// strings: "RecursiveLoadFromBuffer:  got NULL key", "RecursiveLoadFromBuffer:  recursion overflow", "RecursiveLoadFromBuffer:  got EOF instead of keyname", "RecursiveLoadFromBuffer:  got conditional between key and value", "RecursiveLoadFromBuffer:  got empty keyname", "RecursiveLoadFromBuffer:  got } in key"
// globals: KeyValues::s_pParserCompat_EmptyKeyReplacement
void __fastcall KeyValues::RecursiveLoadFromBuffer(
        KeyValues *const this,
        CKeyValuesErrorStack *pErrorStack,
        const char *resourceName,
        CKeyValuesTokenReader *const tokenReader,
        GetSymbolProc_t pfnEvaluateSymbolProc)
{
  uint32 v6; // edx
  int m_errorIndex; // eax
  int m_maxErrorIndex; // edx
  int v9; // eax
  KeyValues *m_uValue; // r15
  const char *v11; // rax
  char v12; // dl
  KeyValues *KeyUsingKnownLastChild; // rax
  KeyValues *v14; // r12
  uint32 v15; // eax
  const char *v16; // rax
  char *v17; // rbx
  char v18; // al
  int v19; // r14d
  double v20; // xmm0_8
  __m128d v21; // xmm0
  float v22; // xmm1_4
  const char *v23; // rax
  const char *v24; // rax
  HKeySymbol v25; // eax
  KeyValues *Key; // rax
  KeyValues *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r14
  char v30; // al
  char v31; // al
  char v32; // al
  int64 ival; // [rsp+20h] [rbp-90h]
  int Errno; // [rsp+28h] [rbp-88h]
  float fval; // [rsp+2Ch] [rbp-84h]
  char *pSEnd; // [rsp+30h] [rbp-80h]
  int v40; // [rsp+40h] [rbp-70h]
  char bAccepted; // [rsp+47h] [rbp-69h]
  bool wasQuoted; // [rsp+6Eh] [rbp-42h] BYREF
  bool bFoundConditional; // [rsp+6Fh] [rbp-41h] BYREF
  char *pIEnd; // [rsp+70h] [rbp-40h] BYREF
  char *pFEnd; // [rsp+78h] [rbp-38h] BYREF

  if ( this != 0 )
    v6 = *(&this->CKeyValues_Data + 4) | (*(&this->CKeyValues_Data + 10) << 16);
  else
    v6 = 0xFFFFFF;
  m_errorIndex = pErrorStack->m_errorIndex;
  if ( m_errorIndex <= 63 )
    pErrorStack->m_errorStack[m_errorIndex].nIndex = v6;
  v40 = m_errorIndex + 1;
  m_maxErrorIndex = pErrorStack->m_maxErrorIndex;
  pErrorStack->m_errorIndex = m_errorIndex + 1;
  if ( m_errorIndex + 1 > m_maxErrorIndex )
    m_maxErrorIndex = m_errorIndex;
  pErrorStack->m_maxErrorIndex = m_maxErrorIndex;
  if ( m_errorIndex > 100 )
  {
    CKeyValuesErrorStack::ReportError(pErrorStack, "RecursiveLoadFromBuffer:  recursion overflow");
    --pErrorStack->m_errorIndex;
    return;
  }
  if ( v40 <= 63 )
  {
    pErrorStack->m_errorStack[v40].nIndex = 0xFFFFFF;
    m_maxErrorIndex = pErrorStack->m_maxErrorIndex;
  }
  v9 = m_errorIndex + 2;
  if ( v9 > m_maxErrorIndex )
    m_maxErrorIndex = v40;
  m_uValue = 0;
  pErrorStack->m_errorIndex = v9;
  pErrorStack->m_maxErrorIndex = m_maxErrorIndex;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( m_uValue->m_pPeer != 0 )
        m_uValue = m_uValue->m_pPeer;
    }
  }
  while ( 1 )
  {
    v11 = CKeyValuesTokenReader::ReadToken(tokenReader, &wasQuoted, &bFoundConditional);
    if ( v11 == 0 )
    {
      CKeyValuesErrorStack::ReportError(pErrorStack, "RecursiveLoadFromBuffer:  got EOF instead of keyname");
      goto LABEL_65;
    }
    v12 = *v11;
    if ( *v11 == 0 )
    {
      v11 = KeyValues::s_pParserCompat_EmptyKeyReplacement;
      if ( KeyValues::s_pParserCompat_EmptyKeyReplacement == 0 )
      {
        CKeyValuesErrorStack::ReportError(pErrorStack, "RecursiveLoadFromBuffer:  got empty keyname");
        goto LABEL_65;
      }
      v12 = *KeyValues::s_pParserCompat_EmptyKeyReplacement;
    }
    if ( v12 == 125 && !wasQuoted )
      goto LABEL_65;
    KeyUsingKnownLastChild = KeyValues::CreateKeyUsingKnownLastChild(this, v11, m_uValue);
    v14 = KeyUsingKnownLastChild;
    if ( KeyUsingKnownLastChild != 0 )
      v15 = (*(&KeyUsingKnownLastChild->CKeyValues_Data + 10) << 16) | *(&KeyUsingKnownLastChild->CKeyValues_Data + 4);
    else
      v15 = 0xFFFFFF;
    if ( v40 <= 63 )
      pErrorStack->m_errorStack[v40].nIndex = v15;
    v16 = CKeyValuesTokenReader::ReadToken(tokenReader, &wasQuoted, &bFoundConditional);
    v17 = v16;
    if ( bFoundConditional )
    {
      if ( v16 == 0 )
        goto LABEL_64;
      bAccepted = KeyValues::EvaluateConditional(this, pErrorStack, v16, pfnEvaluateSymbolProc);
      v17 = CKeyValuesTokenReader::ReadToken(tokenReader, &wasQuoted, &bFoundConditional);
    }
    else
    {
      bAccepted = 1;
    }
    if ( v17 == 0 )
    {
LABEL_64:
      CKeyValuesErrorStack::ReportError(pErrorStack, "RecursiveLoadFromBuffer:  got NULL key");
      goto LABEL_65;
    }
    v18 = *v17;
    if ( *v17 == 61 )
    {
      if ( wasQuoted )
        goto LABEL_37;
      v24 = CKeyValuesTokenReader::ReadToken(tokenReader, &wasQuoted, &bFoundConditional);
      v17 = v24;
      if ( bFoundConditional )
      {
        if ( v24 != 0 )
        {
          bAccepted = KeyValues::EvaluateConditional(this, pErrorStack, v24, pfnEvaluateSymbolProc);
          v17 = CKeyValuesTokenReader::ReadToken(tokenReader, &wasQuoted, &bFoundConditional);
        }
        if ( bAccepted != 0 )
        {
          v25.nIndex = KeyValues::GetNameSymbol(v14).nIndex;
          Key = KeyValues::FindKey(this, v25);
          v27 = Key;
          if ( v14 != Key && Key != 0 )
          {
            KeyValues::RemoveSubKey(this, Key, 0);
            KeyValues::deleteThis(v27);
          }
        }
      }
      if ( v17 == 0 )
        goto LABEL_64;
      v18 = *v17;
    }
    if ( v18 != 125 )
    {
      if ( v18 == 123 && !wasQuoted )
      {
        if ( v40 <= 63 )
          pErrorStack->m_errorStack[v40].nIndex = 0xFFFFFF;
        KeyValues::RecursiveLoadFromBuffer(v14, pErrorStack, resourceName, tokenReader, pfnEvaluateSymbolProc);
        goto LABEL_34;
      }
      goto LABEL_37;
    }
    if ( !wasQuoted )
      break;
LABEL_37:
    if ( bFoundConditional )
    {
      CKeyValuesErrorStack::ReportError(pErrorStack, "RecursiveLoadFromBuffer:  got conditional between key and value");
      goto LABEL_65;
    }
    CKeyValues_Data::Internal_ClearData(v14);
    v19 = strlen(v17);
    pSEnd = &v17[v19];
    ival = V_strtoi64(v17, &pIEnd, 10);
    v20 = V_SetErrno(0);
    v21.m128d_f64[0] = V_strtod(v17, &pFEnd, v20);
    v22 = _mm_movedup_pd(v21).m128d_f64[0];
    fval = v22;
    Errno = V_GetErrno();
    if ( v19 > 1 && tolower(v17[1]) == 120 )
    {
      pFEnd = v17;
      fval = 0.0;
    }
    if ( *v17 == 0 )
      goto LABEL_46;
    if ( v19 == 18 && *v17 == 48 && v17[1] == 120 )
    {
      v28 = 0;
      v29 = 0;
      do
      {
        v30 = v17[v28 + 2];
        if ( v30 > 96 )
        {
          v30 -= 39;
        }
        else if ( v30 >= 65 )
        {
          v30 -= 7;
        }
        ++v28;
        v29 = v30 - 48 + 16 * v29;
      }
      while ( v28 != 16 );
      CKeyValues_Data::Internal_ClearData(v14);
      v32 = *(&v14->CKeyValues_Data + 11);
      v14->m_uValue = v29;
      *(&v14->CKeyValues_Data + 11) = v32 & 0xE8 | 7;
      goto LABEL_47;
    }
    if ( pFEnd > pIEnd && pSEnd == pFEnd && Errno != 34 )
    {
      CKeyValues_Data::Internal_ClearData(v14);
      v31 = *(&v14->CKeyValues_Data + 11);
      v14->m_flValue = fval;
      *(&v14->CKeyValues_Data + 11) = v31 & 0xF8 | 3;
      goto LABEL_47;
    }
    if ( pSEnd == pIEnd && (ival + 0x80000000LL) <= 0xFFFFFFFF )
    {
      CKeyValues_Data::Internal_ClearData(v14);
      v14->m_iValue = ival;
      *(&v14->CKeyValues_Data + 11) = *(&v14->CKeyValues_Data + 11) & 0xF8 | 2;
    }
    else
    {
LABEL_46:
      CKeyValues_Data::Internal_SetString(v14, v17);
    }
LABEL_47:
    v23 = CKeyValuesTokenReader::ReadToken(tokenReader, &wasQuoted, &bFoundConditional);
    if ( bFoundConditional )
    {
      bAccepted = KeyValues::EvaluateConditional(this, pErrorStack, v23, pfnEvaluateSymbolProc);
      goto LABEL_34;
    }
    if ( tokenReader->m_bUsePriorToken || tokenReader->m_nTokensRead == 0 )
    {
LABEL_34:
      if ( bAccepted != 0 )
        goto LABEL_35;
LABEL_51:
      if ( m_uValue != 0 )
        m_uValue->m_pPeer = 0;
      else
        *(&this->CKeyValues_Data + 11) &= ~0x40u;
      if ( v14 != 0 )
      {
        KeyValues::RemoveEverything(v14);
        CKeyValues_Data::Internal_ClearData(v14);
        KeyValues::operator delete(v14);
      }
    }
    else
    {
      tokenReader->m_bUsePriorToken = 1;
      if ( bAccepted == 0 )
        goto LABEL_51;
LABEL_35:
      m_uValue = v14;
    }
  }
  CKeyValuesErrorStack::ReportError(pErrorStack, "RecursiveLoadFromBuffer:  got } in key");
LABEL_65:
  pErrorStack->m_errorIndex -= 2;
}


// KeyValues::WriteAsBinary  (line 3579, @0x0000000002f770f0, libserver.so)  // inlines: CRC32_ProcessSingleBuffer, FinishHeader, IsValid, PeekPut, StartHeader, operator[]
// calls: CUtlBuffer::Put, KeyValues::WriteAsBinaryInternal, CUtlBuffer::SeekPut, CRC32_Init, CRC32_ProcessBuffer, CRC32_Final
// callers: CNetMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CNetMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CGameConfiguration::SetupGameSessionConfiguration, CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CNetMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CCustomGameEventManager::Script_Send_ServerToAllClients, CCustomGameEventManager::Script_Send_ServerToTeam, CCustomGameEventManager::Script_Send_ServerToPlayer, CCustomNetTableManager::Script_SetTableValue, CDOTA_CustomUIManager::Script_Hud_Create, CDOTA_CustomUIManager::Script_Hud_SetDialogVariables, CDOTAGCServerSystem::EnsureLastMatchMetadata (13 total)
bool __fastcall KeyValues::WriteAsBinary(KeyValues *const this, CUtlBuffer *const buffer)
{
  int m_Put; // r14d
  int v6; // r15d
  unsigned __int8 *v7; // r12
  CRC32_t pMem[16]; // [rsp+0h] [rbp-40h] BYREF

  if ( (buffer->m_Flags & 1) != 0 )
    return 0;
  if ( buffer->m_Error != 0 )
    return 0;
  m_Put = buffer->m_Put;
  pMem[0] = 1447772758;
  pMem[1] = 0;
  CUtlBuffer::Put(buffer, pMem, 8);
  if ( !KeyValues::WriteAsBinaryInternal(this, buffer) )
    return 0;
  v6 = buffer->m_Put;
  CUtlBuffer::SeekPut(buffer, CUtlBuffer::SeekType_t::SEEK_HEAD, m_Put);
  v7 = &buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset];
  CRC32_Init(pMem);
  CRC32_ProcessBuffer(pMem, v7 + 8, v6 - m_Put - 8);
  CRC32_Final(pMem);
  *(v7 + 1) = pMem[0];
  CUtlBuffer::SeekPut(buffer, CUtlBuffer::SeekType_t::SEEK_HEAD, v6);
  return buffer->m_Error == 0;
}


// KeyValues::WriteAsBinaryInternal  (line 3602, @0x0000000002f768b0, libserver.so)  // inlines: Internal_GetDataType, Internal_GetSubKey, IsValid, LowLevelByteSwap<float>, LowLevelByteSwap<int>, LowLevelByteSwap<long long int>, LowLevelByteSwap<short int>, LowLevelByteSwap<void*>, PeekPut, PutFloat, PutInt, PutInt64, PutPtr, PutShort, PutType<float>, PutType<int>, PutType<long long int>, PutType<short int>, PutType<short unsigned int>, PutTypeBin<float>, PutTypeBin<int>, PutTypeBin<long long int>, PutTypeBin<short int>, PutTypeBin<unsigned char>, PutTypeBin<void*>, PutUnsignedChar, PutUnsignedShort, ResolveColorValue, ResolveFloatValue, ResolveIntValue, ResolvePtrValue, ResolveStringValue, ResolveSubKeyValue, ResolveUint64Value, ResolveWStringValue, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long int>, SwapBufferToTargetEndian<short int>, SwapBufferToTargetEndian<void*>, V_memcpy, V_wcslen, memcpy, operator[]
// calls: CUtlBuffer::Printf, CKeyValues_Data::Internal_GetName, CUtlBuffer::PutString, wcslen, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: KeyValues::WriteAsBinary
// strings: "%hu", "%hd", "0x%p"
// globals: jpt_2F76938
bool __fastcall KeyValues::WriteAsBinaryInternal(KeyValues *const this, CUtlBuffer *const buffer)
{
  KeyValues *v2; // r12
  unsigned __int8 v4; // r14
  const char *Name; // rax
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r14
  const wchar_t *v9; // r14
  int v10; // eax
  int v11; // r8d
  int v12; // r8d
  const wchar_t *v13; // r15
  __int64 v14; // r14
  int v15; // eax
  KeyValues *m_uValue; // rdi
  uintp v17; // rdx
  const char *v18; // rsi
  unsigned __int8 *v19; // rdx
  int v20; // eax
  unsigned __int8 *v21; // r8
  __int64 v22; // rdx
  __int64 j; // rax
  char v24; // si
  _BYTE *v25; // rcx
  bool v26; // al
  int v27; // eax
  int m_Put; // eax
  unsigned __int8 *v29; // rdx
  unsigned __int8 *v30; // rdx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rcx
  __int64 i; // rax
  char v34; // di
  _BYTE *v35; // rsi
  unsigned __int8 *v36; // rdx
  unsigned __int8 v37; // [rsp+18h] [rbp-68h]
  unsigned __int8 nLength; // [rsp+1Ch] [rbp-64h]
  int nLengtha; // [rsp+1Ch] [rbp-64h]
  __int16 v40; // [rsp+2Ch] [rbp-54h]
  __int16 v41; // [rsp+2Eh] [rbp-52h]
  int m_iValue; // [rsp+30h] [rbp-50h]
  int v43; // [rsp+34h] [rbp-4Ch]
  uintp v44; // [rsp+38h] [rbp-48h]
  uintp v45; // [rsp+40h] [rbp-40h]
  _QWORD v46[7]; // [rsp+48h] [rbp-38h] BYREF

  v2 = this;
  if ( this != 0 )
  {
    while ( 2 )
    {
      v4 = *(&v2->CKeyValues_Data + 11) & 7;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buffer, "%hu", v4);
      }
      else if ( CUtlBuffer::CheckPut(buffer, 1) )
      {
        buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v4;
        ++buffer->m_Put;
        CUtlBuffer::AddNullTermination(buffer);
      }
      Name = CKeyValues_Data::Internal_GetName(v2);
      CUtlBuffer::PutString(buffer, Name);
      switch ( v4 )
      {
        case 0u:
          m_uValue = 0;
          if ( (*(&v2->CKeyValues_Data + 11) & 0x47) == 0x40 )
            m_uValue = v2->m_uValue;
          KeyValues::WriteAsBinaryInternal(m_uValue, buffer);
          goto LABEL_13;
        case 1u:
          if ( (*(&v2->CKeyValues_Data + 11) & 0x10) != 0 )
          {
            v18 = v2->m_uValue;
            if ( v2->m_uValue == 0 )
              goto LABEL_46;
          }
          else
          {
            v18 = v2;
          }
          if ( *v18 == 0 )
LABEL_46:
            v18 = "";
          CUtlBuffer::PutString(buffer, v18);
LABEL_13:
          v2 = v2->m_pPeer;
          if ( v2 == 0 )
            break;
          continue;
        case 2u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%d", v2->m_iValue);
          }
          else
          {
            m_iValue = v2->m_iValue;
            if ( CUtlBuffer::CheckPut(buffer, 4) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                m_Put = buffer->m_Put;
                v29 = &buffer->m_Memory.m_pMemory[m_Put - buffer->m_nOffset];
                if ( v29 != 0 )
                {
                  LOBYTE(v46[0]) = HIBYTE(m_iValue);
                  BYTE1(v46[0]) = BYTE2(m_iValue);
                  BYTE2(v46[0]) = BYTE1(m_iValue);
                  BYTE3(v46[0]) = m_iValue;
                  *v29 = v46[0];
                  m_Put = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = m_iValue;
                m_Put = buffer->m_Put;
              }
              goto LABEL_80;
            }
          }
          goto LABEL_13;
        case 3u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%f", v2->m_flValue);
          }
          else
          {
            v43 = v2->m_iValue;
            if ( CUtlBuffer::CheckPut(buffer, 4) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                m_Put = buffer->m_Put;
                v36 = &buffer->m_Memory.m_pMemory[m_Put - buffer->m_nOffset];
                if ( v36 != 0 )
                {
                  LOBYTE(v46[0]) = HIBYTE(v43);
                  BYTE1(v46[0]) = BYTE2(v43);
                  BYTE2(v46[0]) = BYTE1(v43);
                  BYTE3(v46[0]) = v43;
                  *v36 = v46[0];
                  m_Put = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v43;
                m_Put = buffer->m_Put;
              }
LABEL_80:
              buffer->m_Put = m_Put + 4;
              CUtlBuffer::AddNullTermination(buffer);
            }
          }
          goto LABEL_13;
        case 4u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "0x%p", v2->m_pValue);
          }
          else
          {
            v45 = v2->m_uValue;
            if ( CUtlBuffer::CheckPut(buffer, 8) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v20 = buffer->m_Put;
                v31 = &buffer->m_Memory.m_pMemory[v20 - buffer->m_nOffset];
                if ( v31 != 0 )
                {
                  v32 = 0;
                  v46[0] = *v31;
                  for ( i = 8; i != 0; --i )
                  {
                    v34 = *(&v44 + i + 7);
                    v35 = v46 + v32;
                    v32 = 9 - i;
                    *v35 = v34;
                  }
                  *v31 = v46[0];
                  v20 = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v45;
                v20 = buffer->m_Put;
              }
              goto LABEL_84;
            }
          }
          goto LABEL_13;
        case 5u:
          if ( (*(&v2->CKeyValues_Data + 11) & 0x10) != 0 )
          {
            v9 = v2->m_uValue;
            if ( v2->m_uValue == 0 )
            {
              LOWORD(v10) = 0;
              v11 = 0;
              goto LABEL_20;
            }
          }
          else
          {
            v9 = &v2->0;
          }
          v10 = wcslen(v9);
          v11 = v10;
LABEL_20:
          nLengtha = v11;
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hd", v10);
            v12 = nLengtha;
          }
          else
          {
            v40 = v10;
            v26 = CUtlBuffer::CheckPut(buffer, 2);
            v12 = nLengtha;
            if ( v26 )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v27 = buffer->m_Put;
                v30 = &buffer->m_Memory.m_pMemory[v27 - buffer->m_nOffset];
                if ( v30 != 0 )
                {
                  LOBYTE(v46[0]) = HIBYTE(v40);
                  BYTE1(v46[0]) = v40;
                  *v30 = v46[0];
                  v27 = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v40;
                v27 = buffer->m_Put;
              }
              buffer->m_Put = v27 + 2;
              CUtlBuffer::AddNullTermination(buffer);
              v12 = nLengtha;
            }
          }
          if ( v12 > 0 )
          {
            v13 = v9;
            v14 = &v9[v12 - 1 + 1];
            do
            {
              if ( (buffer->m_Flags & 1) != 0 )
              {
                CUtlBuffer::Printf(buffer, "%hd", *v13);
              }
              else
              {
                v41 = *v13;
                if ( CUtlBuffer::CheckPut(buffer, 2) )
                {
                  if ( (*&buffer->m_Byteswap & 1) != 0 )
                  {
                    v15 = buffer->m_Put;
                    v19 = &buffer->m_Memory.m_pMemory[v15 - buffer->m_nOffset];
                    if ( v19 != 0 )
                    {
                      LOBYTE(v46[0]) = HIBYTE(v41);
                      BYTE1(v46[0]) = v41;
                      *v19 = v46[0];
                      v15 = buffer->m_Put;
                    }
                  }
                  else
                  {
                    *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v41;
                    v15 = buffer->m_Put;
                  }
                  buffer->m_Put = v15 + 2;
                  CUtlBuffer::AddNullTermination(buffer);
                }
              }
              ++v13;
            }
            while ( v13 != v14 );
          }
          goto LABEL_13;
        case 6u:
          v6 = v2->m_Color[3];
          v7 = v2->m_Color[1];
          nLength = v2->m_Color[2];
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", v2->m_Color[0]);
          }
          else
          {
            v37 = v2->m_Color[0];
            if ( CUtlBuffer::CheckPut(buffer, 1) )
            {
              buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v37;
              ++buffer->m_Put;
              CUtlBuffer::AddNullTermination(buffer);
            }
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", v7);
          }
          else if ( CUtlBuffer::CheckPut(buffer, 1) )
          {
            buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v7;
            ++buffer->m_Put;
            CUtlBuffer::AddNullTermination(buffer);
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", nLength);
          }
          else if ( CUtlBuffer::CheckPut(buffer, 1) )
          {
            buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = nLength;
            ++buffer->m_Put;
            CUtlBuffer::AddNullTermination(buffer);
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", v6);
          }
          else if ( CUtlBuffer::CheckPut(buffer, 1) )
          {
            buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v6;
            ++buffer->m_Put;
            CUtlBuffer::AddNullTermination(buffer);
          }
          goto LABEL_13;
        case 7u:
          if ( (*(&v2->CKeyValues_Data + 11) & 0x10) != 0 )
          {
            v17 = *v2->m_pValue;
            if ( (buffer->m_Flags & 1) == 0 )
              goto LABEL_55;
          }
          else
          {
            v17 = v2->m_uValue;
            if ( (buffer->m_Flags & 1) == 0 )
            {
LABEL_55:
              v44 = v17;
              if ( CUtlBuffer::CheckPut(buffer, 8) )
              {
                if ( (*&buffer->m_Byteswap & 1) != 0 )
                {
                  v20 = buffer->m_Put;
                  v21 = &buffer->m_Memory.m_pMemory[v20 - buffer->m_nOffset];
                  if ( v21 != 0 )
                  {
                    v22 = 0;
                    v46[0] = *v21;
                    for ( j = 8; j != 0; --j )
                    {
                      v24 = *(&v43 + j + 3);
                      v25 = v46 + v22;
                      v22 = 9 - j;
                      *v25 = v24;
                    }
                    *v21 = v46[0];
                    v20 = buffer->m_Put;
                  }
                }
                else
                {
                  *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v44;
                  v20 = buffer->m_Put;
                }
LABEL_84:
                buffer->m_Put = v20 + 8;
                CUtlBuffer::AddNullTermination(buffer);
              }
              goto LABEL_13;
            }
          }
          CUtlBuffer::Printf(buffer, "%lld", v17);
          goto LABEL_13;
      }
      break;
    }
  }
  if ( (buffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buffer, "%hu", 11);
  }
  else if ( CUtlBuffer::CheckPut(buffer, 1) )
  {
    buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = 11;
    ++buffer->m_Put;
    CUtlBuffer::AddNullTermination(buffer);
  }
  return buffer->m_Error == 0;
}


// KeyValues::IsValidBinaryKVBuffer  (line 3693, @0x0000000002f771d0, libserver.so)  // inlines: CRC32_ProcessSingleBuffer, PeekGet, operator[]
// calls: CRC32_Init, CRC32_ProcessBuffer, CRC32_Final, CUtlBuffer::SeekGet
// callers: KeyValues::ReadAsBinaryFiltered, KeyValues::ReadAsBinary
bool __fastcall KeyValues::IsValidBinaryKVBuffer(KeyValues *const this, CUtlBuffer *const buffer)
{
  __int64 v3; // rax
  bool v4; // zf
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // r12
  int v8; // r14d
  CRC32_t pulCRC[9]; // [rsp+Ch] [rbp-24h] BYREF

  if ( (buffer->m_Flags & 1) != 0 || buffer->m_Error != 0 )
    return 0;
  v3 = buffer->m_Get - buffer->m_nOffset;
  v4 = &buffer->m_Memory.m_pMemory[v3] == 0;
  v5 = &buffer->m_Memory.m_pMemory[v3];
  v6 = v5;
  if ( !v4 )
  {
    if ( *v5 != 1447772758 )
      return v5[buffer->m_Put - 1] == 11;
    v8 = buffer->m_nMaxPut - 8;
    CRC32_Init(pulCRC);
    CRC32_ProcessBuffer(pulCRC, v6 + 8, v8);
    CRC32_Final(pulCRC);
    if ( *(v6 + 1) == pulCRC[0] )
    {
      CUtlBuffer::SeekGet(buffer, CUtlBuffer::SeekType_t::SEEK_CURRENT, 8);
      return 1;
    }
    return 0;
  }
  return 1;
}


// KeyValues::ReadAsBinary  (line 3727, @0x0000000002f7c1c0, libserver.so)  // inlines: Init, Internal_ClearAll
// calls: KeyValues::IsValidBinaryKVBuffer, KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::ReadAsBinaryInternal, __stack_chk_fail
// callers: CGameConfiguration::InitGameSession, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, CCustomNetTableManager::GetTableValue, CCustomNetTableManager::GetTableValueByIndex, CCustomNetTableManager::Script_GetTableValue, CDOTAGamerules::GameInit, CDOTAGameConfiguration::InitGameSession, CEconItemSchema::BInitBinaryBuffer, KeyValues::ReadTemporaryAsBinary
bool __fastcall KeyValues::ReadAsBinary(KeyValues *const this, CUtlBuffer *const buffer)
{
  bool result; // al
  char token[32776]; // [rsp+0h] [rbp-8020h] BYREF
  unsigned __int64 v6; // [rsp+8008h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  result = KeyValues::IsValidBinaryKVBuffer(this, buffer);
  if ( result )
  {
    KeyValues::RemoveEverything(this);
    *(&this->CKeyValues_Data + 8) = -1;
    *(&this->CKeyValues_Data + 9) = -1;
    *(&this->CKeyValues_Data + 10) = -1;
    CKeyValues_Data::Internal_ClearData(this);
    this->m_pPeer = 0;
    *(&this->CKeyValues_Data + 11) &= ~8u;
    return KeyValues::ReadAsBinaryInternal(this, buffer, token, 0x8000u);
  }
  return result;
}


// KeyValues::ReadAsBinaryInternal  (line 3739, @0x0000000002f7b3e0, libserver.so)  // inlines: GetFloat, GetInt, GetInt64, GetName, GetPtr, GetShort, GetType<float>, GetType<int>, GetType<long long int>, GetType<short int>, GetType<short unsigned int>, GetTypeBin<float>, GetTypeBin<int>, GetTypeBin<long long int>, GetTypeBin<short int>, GetTypeBin<unsigned char>, GetTypeText<float>, GetTypeText<int>, GetTypeText<long long int>, GetTypeText<short int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, Internal_SetColor, Internal_SetFloat, Internal_SetInt, Internal_SetPtr, Internal_SetUint64, IsValid, LowLevelByteSwap<float>, LowLevelByteSwap<int>, LowLevelByteSwap<long long int>, LowLevelByteSwap<short int>, PeekGet, StringToNumber<float>, StringToNumber<int>, StringToNumber<long long int>, StringToNumber<short int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long int>, SwapBufferToTargetEndian<short int>, V_memcpy, memcpy, operator[], ~CKeyValues_Data, ~KeyValues
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::GetString, CKeyValues_Data::Internal_SetName, CKeyValues_Data::Internal_ClearData, operator new [], CUtlBuffer::CheckGet, CKeyValues_Data::Internal_SetWString, operator delete [], KeyValues::operator new, KeyValues::KeyValues, KeyValues::IsEmpty, CKeyValues_Data::Internal_GetName (20 total)
// callers: KeyValues::ReadAsBinary
// globals: jpt_2F7B4C0
bool __fastcall KeyValues::ReadAsBinaryInternal(
        KeyValues *const this,
        CUtlBuffer *const buffer,
        char *pTokenBuffer,
        size_t nTokenBufferSize)
{
  int v8; // r13d
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // r13
  bool v11; // al
  unsigned __int8 v12; // cl
  char v13; // dl
  unsigned __int64 v14; // rdx
  int v15; // r13d
  size_t v16; // rdi
  __int64 v17; // r13
  wchar_t *v18; // r12
  bool v19; // al
  __int64 v20; // rdx
  bool v21; // al
  int v22; // eax
  wchar_t v23; // edx
  uintp v24; // r13
  char v25; // al
  KeyValues *v26; // r14
  KeyValues *v27; // r13
  uintp v28; // r13
  char v29; // al
  int v30; // r13d
  char v31; // al
  bool v32; // al
  float v33; // xmm0_4
  char v34; // al
  int v35; // edx
  int v36; // r15d
  __int16 v37; // ax
  int v38; // r14d
  unsigned __int8 v39; // al
  int v40; // edx
  int *v41; // rdx
  int v42; // r8d
  bool v43; // al
  int v44; // eax
  bool v45; // zf
  int v46; // edx
  int v47; // edx
  __int64 v48; // rax
  int v49; // edx
  bool v50; // al
  int v51; // edx
  int v52; // edx
  int v53; // edx
  unsigned __int8 v54; // cl
  int v55; // r8d
  int v56; // r13d
  unsigned __int8 v57; // al
  unsigned __int8 v58; // al
  int v59; // r13d
  unsigned __int8 v60; // al
  int v61; // r13d
  unsigned __int8 v62; // al
  int v63; // r14d
  unsigned __int8 v64; // al
  int v65; // r14d
  __int64 v66; // rax
  int v67; // r14d
  __int64 v68; // rax
  int v69; // r13d
  int v70; // r14d
  int v71; // r13d
  __int16 v72; // ax
  int v73; // eax
  int *v74; // rax
  int *v75; // rdi
  __int64 v76; // rdx
  __int64 i; // rax
  char v78; // si
  _BYTE *v79; // rcx
  int v80; // eax
  int *v81; // rax
  int *v82; // rdi
  __int64 v83; // rdx
  __int64 j; // rax
  char v85; // si
  _BYTE *v86; // rcx
  int m_Get; // edx
  size_t v88; // [rsp+8h] [rbp-A8h]
  __int64 v89; // [rsp+10h] [rbp-A0h]
  char *v90; // [rsp+18h] [rbp-98h]
  KeyValues *dat; // [rsp+20h] [rbp-90h]
  unsigned __int8 pDeleteb; // [rsp+28h] [rbp-88h]
  wchar_t *pDelete; // [rsp+28h] [rbp-88h]
  int pDeletea; // [rsp+28h] [rbp-88h]
  unsigned __int8 pTempWSValue; // [rsp+30h] [rbp-80h]
  wchar_t *pTempWSValuea; // [rsp+30h] [rbp-80h]
  int pTempWSValueb; // [rsp+30h] [rbp-80h]
  int nMaxChars; // [rsp+54h] [rbp-5Ch]
  char *v100; // [rsp+58h] [rbp-58h]
  int v101; // [rsp+6Ch] [rbp-44h] BYREF
  int nIncrement[2]; // [rsp+70h] [rbp-40h] BYREF
  _QWORD v103[7]; // [rsp+78h] [rbp-38h] BYREF

  if ( buffer->m_Error != 0 )
    return 0;
  if ( (buffer->m_Flags & 1) != 0 )
  {
    nIncrement[0] = 128;
    v8 = 0;
    if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
    {
      v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
      v63 = v103[0];
      v64 = V_strtoui64(v103[0], v103, 10);
      if ( LODWORD(v103[0]) != v63 )
        buffer->m_Get += LODWORD(v103[0]) - v63;
      v8 = v64;
    }
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buffer, 1) )
    {
      v8 = 0;
      goto LABEL_6;
    }
    m_Get = buffer->m_Get;
    v8 = buffer->m_Memory.m_pMemory[m_Get - buffer->m_nOffset];
    buffer->m_Get = m_Get + 1;
  }
  if ( v8 != 11 )
  {
LABEL_6:
    nMaxChars = nTokenBufferSize - 1;
    v88 = nTokenBufferSize >> 2;
    v100 = &pTokenBuffer[nTokenBufferSize - 1];
    while ( 1 )
    {
      CUtlBuffer::GetString(buffer, pTokenBuffer, nMaxChars);
      *v100 = 0;
      CKeyValues_Data::Internal_SetName(this, pTokenBuffer);
      switch ( v8 )
      {
        case 0:
          v27 = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(v27, "");
          KeyValues::ReadAsBinaryInternal(v27, buffer, pTokenBuffer, nTokenBufferSize);
          if ( !KeyValues::IsEmpty(v27, 0) )
            goto LABEL_58;
          if ( v27 != 0 )
          {
            if ( *CKeyValues_Data::Internal_GetName(v27) != 0 )
            {
LABEL_58:
              CKeyValues_Data::Internal_SetSubKey(this, v27);
            }
            else
            {
              KeyValues::RemoveEverything(v27);
              CKeyValues_Data::Internal_ClearData(v27);
              KeyValues::operator delete(v27);
            }
          }
          goto LABEL_39;
        case 1:
          CUtlBuffer::GetString(buffer, pTokenBuffer, nMaxChars);
          *v100 = 0;
          CKeyValues_Data::Internal_SetString(this, pTokenBuffer);
          goto LABEL_39;
        case 2:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v30 = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v70 = v103[0];
              v101 = V_strtoi64(v103[0], v103, 10);
              v30 = v101;
              if ( LODWORD(v103[0]) != v70 )
                buffer->m_Get += LODWORD(v103[0]) - v70;
            }
          }
          else
          {
            v30 = 0;
            if ( CUtlBuffer::CheckGet(buffer, 4) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v46 = buffer->m_Get;
                v80 = v46 - buffer->m_nOffset;
                LODWORD(v103[0]) = v101;
                v81 = &buffer->m_Memory.m_pMemory[v80];
                if ( v81 == 0 )
                  v81 = &v101;
                LOBYTE(v103[0]) = *(v81 + 3);
                BYTE1(v103[0]) = *(v81 + 2);
                BYTE2(v103[0]) = *(v81 + 1);
                BYTE3(v103[0]) = *v81;
                v30 = v103[0];
              }
              else
              {
                v46 = buffer->m_Get;
                v30 = *&buffer->m_Memory.m_pMemory[v46 - buffer->m_nOffset];
              }
              buffer->m_Get = v46 + 4;
            }
          }
          CKeyValues_Data::Internal_ClearData(this);
          v31 = *(&this->CKeyValues_Data + 11);
          this->m_iValue = v30;
          *(&this->CKeyValues_Data + 11) = v31 & 0xF8 | 2;
          goto LABEL_39;
        case 3:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v32 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement);
            v33 = 0.0;
            if ( v32 )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v69 = v103[0];
              v33 = V_strtod(v103[0], v103, 0.0);
              v101 = LODWORD(v33);
              if ( LODWORD(v103[0]) != v69 )
                buffer->m_Get += LODWORD(v103[0]) - v69;
            }
          }
          else
          {
            v43 = CUtlBuffer::CheckGet(buffer, 4);
            v33 = 0.0;
            if ( v43 )
            {
              v44 = buffer->m_Get;
              v45 = (*&buffer->m_Byteswap & 1) == 0;
              v33 = *&buffer->m_Memory.m_pMemory[v44 - buffer->m_nOffset];
              v101 = LODWORD(v33);
              if ( !v45 )
              {
                LOBYTE(v103[0]) = HIBYTE(v101);
                BYTE1(v103[0]) = BYTE2(v101);
                BYTE2(v103[0]) = BYTE1(v101);
                BYTE3(v103[0]) = v101;
                v33 = *v103;
              }
              buffer->m_Get = v44 + 4;
            }
          }
          pTempWSValueb = LODWORD(v33);
          CKeyValues_Data::Internal_ClearData(this);
          v34 = *(&this->CKeyValues_Data + 11);
          this->m_iValue = pTempWSValueb;
          *(&this->CKeyValues_Data + 11) = v34 & 0xF8 | 3;
          goto LABEL_39;
        case 4:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            v101 = 128;
            v24 = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &v101) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v67 = v103[0];
              v68 = V_strtoi64(v103[0], v103, 10);
              *nIncrement = v68;
              if ( LODWORD(v103[0]) != v67 )
                buffer->m_Get += LODWORD(v103[0]) - v67;
              v24 = v68;
            }
          }
          else
          {
            v24 = 0;
            if ( CUtlBuffer::CheckGet(buffer, 8) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v55 = buffer->m_Get;
                v75 = &buffer->m_Memory.m_pMemory[v55 - buffer->m_nOffset];
                if ( v75 == 0 )
                  v75 = nIncrement;
                v76 = 0;
                v103[0] = *nIncrement;
                for ( i = 8; i != 0; --i )
                {
                  v78 = *(v75 + i - 1);
                  v79 = v103 + v76;
                  v76 = 9 - i;
                  *v79 = v78;
                }
                v24 = v103[0];
              }
              else
              {
                v55 = buffer->m_Get;
                v24 = *&buffer->m_Memory.m_pMemory[v55 - buffer->m_nOffset];
              }
              buffer->m_Get = v55 + 8;
            }
          }
          CKeyValues_Data::Internal_ClearData(this);
          v25 = *(&this->CKeyValues_Data + 11);
          this->m_uValue = v24;
          *(&this->CKeyValues_Data + 11) = v25 & 0xF8 | 4;
          goto LABEL_39;
        case 5:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v71 = v103[0];
              v72 = V_strtoi64(v103[0], v103, 10);
              LOWORD(v101) = v72;
              if ( LODWORD(v103[0]) != v71 )
                buffer->m_Get += LODWORD(v103[0]) - v71;
              v15 = v72;
              v14 = v72 + 1;
              v89 = v72;
            }
            else
            {
              v89 = 0;
              v14 = 1;
              v15 = 0;
            }
          }
          else
          {
            if ( !CUtlBuffer::CheckGet(buffer, 2) )
            {
              if ( v88 > 1 )
              {
                *pTokenBuffer = 0;
                CKeyValues_Data::Internal_SetWString(this, pTokenBuffer);
                goto LABEL_39;
              }
              v89 = 0;
              v16 = 4;
              v15 = 0;
              goto LABEL_23;
            }
            if ( (*&buffer->m_Byteswap & 1) != 0 )
            {
              v47 = buffer->m_Get;
              v73 = v47 - buffer->m_nOffset;
              LOWORD(v103[0]) = v101;
              v74 = &buffer->m_Memory.m_pMemory[v73];
              if ( v74 == 0 )
                v74 = &v101;
              LOBYTE(v103[0]) = *(v74 + 1);
              BYTE1(v103[0]) = *v74;
              v48 = SLOWORD(v103[0]);
            }
            else
            {
              v47 = buffer->m_Get;
              v48 = *&buffer->m_Memory.m_pMemory[v47 - buffer->m_nOffset];
            }
            v15 = v48;
            buffer->m_Get = v47 + 2;
            v14 = v48 + 1;
            v89 = v48;
          }
          if ( v14 < v88 )
          {
            pTempWSValuea = pTokenBuffer;
            pDelete = 0;
            goto LABEL_24;
          }
          v16 = -1;
          if ( v14 <= 0x1FC0000000000000LL )
            v16 = 4 * v14;
LABEL_23:
          pTempWSValuea = operator new[](v16);
          pDelete = pTempWSValuea;
LABEL_24:
          if ( v15 > 0 )
          {
            dat = this;
            v90 = pTokenBuffer;
            v17 = &pTempWSValuea[v15 - 1 + 1];
            v18 = pTempWSValuea;
            while ( (buffer->m_Flags & 1) == 0 )
            {
              v21 = CUtlBuffer::CheckGet(buffer, 2);
              LODWORD(v20) = 0;
              if ( v21 )
              {
                if ( (*&buffer->m_Byteswap & 1) != 0 )
                {
                  v22 = buffer->m_Get;
                  v40 = v22 - buffer->m_nOffset;
                  LOWORD(v103[0]) = v101;
                  v41 = &buffer->m_Memory.m_pMemory[v40];
                  if ( v41 == 0 )
                    v41 = &v101;
                  LOBYTE(v103[0]) = *(v41 + 1);
                  BYTE1(v103[0]) = *v41;
                  v23 = SLOWORD(v103[0]);
                }
                else
                {
                  v22 = buffer->m_Get;
                  v23 = *&buffer->m_Memory.m_pMemory[v22 - buffer->m_nOffset];
                }
                ++v18;
                buffer->m_Get = v22 + 2;
                *(v18 - 1) = v23;
                if ( v18 == v17 )
                {
LABEL_33:
                  this = dat;
                  pTokenBuffer = v90;
                  goto LABEL_34;
                }
              }
              else
              {
LABEL_27:
                *v18++ = v20;
                if ( v18 == v17 )
                  goto LABEL_33;
              }
            }
            nIncrement[0] = 128;
            v19 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement);
            v20 = 0;
            if ( v19 )
            {
              LOBYTE(v20) = 10;
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v36 = v103[0];
              v37 = V_strtoi64(v103[0], v103, v20);
              LOWORD(v101) = v37;
              if ( LODWORD(v103[0]) != v36 )
                buffer->m_Get += LODWORD(v103[0]) - v36;
              LODWORD(v20) = v37;
            }
            goto LABEL_27;
          }
LABEL_34:
          pTempWSValuea[v89] = 0;
          CKeyValues_Data::Internal_SetWString(this, pTempWSValuea);
          if ( pDelete != 0 )
            operator delete[](pDelete);
LABEL_39:
          if ( buffer->m_Error != 0 )
            return 0;
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v8 = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v38 = v103[0];
              v39 = V_strtoui64(v103[0], v103, 10);
              if ( LODWORD(v103[0]) != v38 )
                buffer->m_Get += LODWORD(v103[0]) - v38;
              v8 = v39;
            }
            if ( v8 == 11 )
              return buffer->m_Error == 0;
          }
          else
          {
            v8 = 0;
            if ( CUtlBuffer::CheckGet(buffer, 1) )
            {
              v35 = buffer->m_Get;
              v8 = buffer->m_Memory.m_pMemory[v35 - buffer->m_nOffset];
              buffer->m_Get = v35 + 1;
              if ( v8 == 11 )
                return buffer->m_Error == 0;
            }
          }
          v26 = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(v26, "");
          this->m_pPeer = v26;
          this = v26;
          break;
        case 6:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            pTempWSValue = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v56 = v103[0];
              v57 = V_strtoui64(v103[0], v103, 10);
              if ( LODWORD(v103[0]) != v56 )
                buffer->m_Get += LODWORD(v103[0]) - v56;
              pTempWSValue = v57;
            }
          }
          else
          {
            pTempWSValue = 0;
            if ( CUtlBuffer::CheckGet(buffer, 1) )
            {
              v53 = buffer->m_Get;
              v54 = buffer->m_Memory.m_pMemory[v53 - buffer->m_nOffset];
              buffer->m_Get = v53 + 1;
              pTempWSValue = v54;
            }
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v9 = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v61 = v103[0];
              v62 = V_strtoui64(v103[0], v103, 10);
              if ( LODWORD(v103[0]) != v61 )
                buffer->m_Get += LODWORD(v103[0]) - v61;
              v9 = v62;
            }
          }
          else
          {
            v9 = 0;
            if ( CUtlBuffer::CheckGet(buffer, 1) )
            {
              v52 = buffer->m_Get;
              v9 = buffer->m_Memory.m_pMemory[v52 - buffer->m_nOffset];
              buffer->m_Get = v52 + 1;
            }
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v10 = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v59 = v103[0];
              v60 = V_strtoui64(v103[0], v103, 10);
              if ( LODWORD(v103[0]) != v59 )
                buffer->m_Get += LODWORD(v103[0]) - v59;
              v10 = v60;
            }
LABEL_14:
            if ( (buffer->m_Flags & 1) != 0 )
              goto LABEL_15;
            goto LABEL_90;
          }
          v10 = 0;
          if ( !CUtlBuffer::CheckGet(buffer, 1) )
            goto LABEL_14;
          v49 = buffer->m_Get;
          v45 = (buffer->m_Flags & 1) == 0;
          v10 = buffer->m_Memory.m_pMemory[v49 - buffer->m_nOffset];
          buffer->m_Get = v49 + 1;
          if ( !v45 )
          {
LABEL_15:
            nIncrement[0] = 128;
            v11 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement);
            v12 = 0;
            if ( v11 )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              pDeletea = v103[0];
              v58 = V_strtoui64(v103[0], v103, 10);
              if ( LODWORD(v103[0]) != pDeletea )
                buffer->m_Get += LODWORD(v103[0]) - pDeletea;
              v12 = v58;
            }
            goto LABEL_16;
          }
LABEL_90:
          v50 = CUtlBuffer::CheckGet(buffer, 1);
          v12 = 0;
          if ( v50 )
          {
            v51 = buffer->m_Get;
            v12 = buffer->m_Memory.m_pMemory[v51 - buffer->m_nOffset];
            buffer->m_Get = v51 + 1;
          }
LABEL_16:
          pDeleteb = v12;
          CKeyValues_Data::Internal_ClearData(this);
          v13 = *(&this->CKeyValues_Data + 11);
          this->m_Color[1] = v9;
          this->m_Color[2] = v10;
          *(&this->CKeyValues_Data + 11) = v13 & 0xF8 | 6;
          this->m_Color[0] = pTempWSValue;
          this->m_Color[3] = pDeleteb;
          goto LABEL_39;
        case 7:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            v101 = 128;
            v28 = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &v101) )
            {
              v103[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v65 = v103[0];
              v66 = V_strtoi64(v103[0], v103, 10);
              *nIncrement = v66;
              if ( LODWORD(v103[0]) != v65 )
                buffer->m_Get += LODWORD(v103[0]) - v65;
              v28 = v66;
            }
          }
          else
          {
            v28 = 0;
            if ( CUtlBuffer::CheckGet(buffer, 8) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v42 = buffer->m_Get;
                v82 = &buffer->m_Memory.m_pMemory[v42 - buffer->m_nOffset];
                if ( v82 == 0 )
                  v82 = nIncrement;
                v83 = 0;
                v103[0] = *nIncrement;
                for ( j = 8; j != 0; --j )
                {
                  v85 = *(v82 + j - 1);
                  v86 = v103 + v83;
                  v83 = 9 - j;
                  *v86 = v85;
                }
                v28 = v103[0];
              }
              else
              {
                v42 = buffer->m_Get;
                v28 = *&buffer->m_Memory.m_pMemory[v42 - buffer->m_nOffset];
              }
              buffer->m_Get = v42 + 8;
            }
          }
          CKeyValues_Data::Internal_ClearData(this);
          v29 = *(&this->CKeyValues_Data + 11);
          this->m_uValue = v28;
          *(&this->CKeyValues_Data + 11) = v29 & 0xE8 | 7;
          goto LABEL_39;
        default:
          goto LABEL_39;
      }
    }
  }
  return buffer->m_Error == 0;
}


// KeyValues::WriteAsBinaryFiltered  (line 3876, @0x0000000002f77ac0, libserver.so)  // inlines: CRC32_ProcessSingleBuffer, FinishHeader, IsValid, PeekPut, StartHeader, operator[]
// calls: CUtlBuffer::Put, KeyValues::WriteAsBinaryFilteredInternal, CUtlBuffer::SeekPut, CRC32_Init, CRC32_ProcessBuffer, CRC32_Final
// callers: PerformDOTASaveGame, CGCJobUploadSaveGame::BYieldingRunJob
bool __fastcall KeyValues::WriteAsBinaryFiltered(KeyValues *const this, CUtlBuffer *const buffer)
{
  int m_Put; // r14d
  int v6; // r15d
  unsigned __int8 *v7; // r12
  CRC32_t pMem[16]; // [rsp+0h] [rbp-40h] BYREF

  if ( (buffer->m_Flags & 1) != 0 )
    return 0;
  if ( buffer->m_Error != 0 )
    return 0;
  m_Put = buffer->m_Put;
  pMem[0] = 1447772758;
  pMem[1] = 0;
  CUtlBuffer::Put(buffer, pMem, 8);
  if ( !KeyValues::WriteAsBinaryFilteredInternal(this, buffer) )
    return 0;
  v6 = buffer->m_Put;
  CUtlBuffer::SeekPut(buffer, CUtlBuffer::SeekType_t::SEEK_HEAD, m_Put);
  v7 = &buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset];
  CRC32_Init(pMem);
  CRC32_ProcessBuffer(pMem, v7 + 8, v6 - m_Put - 8);
  CRC32_Final(pMem);
  *(v7 + 1) = pMem[0];
  CUtlBuffer::SeekPut(buffer, CUtlBuffer::SeekType_t::SEEK_HEAD, v6);
  return buffer->m_Error == 0;
}


// KeyValues::WriteAsBinaryFilteredInternal  (line 3899, @0x0000000002f772a0, libserver.so)  // inlines: GetName, Internal_GetDataType, Internal_GetSubKey, IsValid, LowLevelByteSwap<float>, LowLevelByteSwap<int>, LowLevelByteSwap<long long unsigned int>, LowLevelByteSwap<short int>, LowLevelByteSwap<void*>, PeekPut, PutFloat, PutInt, PutPtr, PutShort, PutType<float>, PutType<int>, PutType<long long unsigned int>, PutType<short int>, PutType<short unsigned int>, PutTypeBin<float>, PutTypeBin<int>, PutTypeBin<long long unsigned int>, PutTypeBin<short int>, PutTypeBin<unsigned char>, PutTypeBin<void*>, PutUnsignedChar, PutUnsignedInt64, PutUnsignedShort, ResolveColorValue, ResolveFloatValue, ResolveIntValue, ResolvePtrValue, ResolveStringValue, ResolveSubKeyValue, ResolveUint64Value, ResolveWStringValue, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long unsigned int>, SwapBufferToTargetEndian<short int>, SwapBufferToTargetEndian<void*>, V_memcpy, V_wcslen, memcpy, operator[]
// calls: CKeyValues_Data::Internal_GetName, CUtlBuffer::PutString, CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, wcslen
// callers: KeyValues::WriteAsBinaryFiltered
// strings: "%hu", "%hd", "0x%p"
// globals: jpt_2F77441
bool __fastcall KeyValues::WriteAsBinaryFilteredInternal(KeyValues *const this, CUtlBuffer *const buffer)
{
  const char *Name; // rsi
  unsigned __int8 *m_uValue; // r14
  unsigned __int8 v7; // al
  __int64 v8; // r13
  const char *v9; // rax
  const char *v10; // rdx
  unsigned __int8 v11; // r13
  unsigned __int8 v12; // r15
  const wchar_t *v13; // r13
  int v14; // eax
  int v15; // r9d
  int v16; // r9d
  const wchar_t *v17; // r15
  __int64 v18; // r13
  int v19; // eax
  const char *v20; // rsi
  unsigned __int8 *v21; // rdx
  int v22; // eax
  bool v23; // al
  int v24; // eax
  int m_Put; // eax
  unsigned __int8 *v26; // rdx
  __int64 v27; // rsi
  __int64 j; // rax
  _BYTE *v29; // r8
  char v30; // r9
  unsigned __int8 *v31; // rdx
  unsigned __int8 *v32; // rdx
  unsigned __int8 *v33; // rdx
  __int64 v34; // rsi
  __int64 i; // rax
  _BYTE *v36; // r8
  char v37; // r9
  unsigned __int8 v38; // [rsp+0h] [rbp-80h]
  unsigned __int8 nLength; // [rsp+4h] [rbp-7Ch]
  int nLengtha; // [rsp+4h] [rbp-7Ch]
  __int16 v41; // [rsp+2Ch] [rbp-54h]
  __int16 v42; // [rsp+2Eh] [rbp-52h]
  int v43; // [rsp+30h] [rbp-50h]
  int v44; // [rsp+34h] [rbp-4Ch]
  const char *v45; // [rsp+38h] [rbp-48h]
  const char *v46; // [rsp+40h] [rbp-40h]
  _QWORD v47[7]; // [rsp+48h] [rbp-38h] BYREF

  Name = "";
  if ( this != 0 )
    Name = CKeyValues_Data::Internal_GetName(this);
  CUtlBuffer::PutString(buffer, Name);
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( 1 )
      {
        if ( (m_uValue[11] & 0x47) == 0x40 && *m_uValue != 0 )
        {
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", 0);
          }
          else if ( CUtlBuffer::CheckPut(buffer, 1) )
          {
            buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = 0;
            ++buffer->m_Put;
            CUtlBuffer::AddNullTermination(buffer);
          }
          KeyValues::WriteAsBinaryFilteredInternal(m_uValue, buffer);
          goto LABEL_12;
        }
        v7 = m_uValue[11] & 7;
        v8 = v7;
        if ( v7 != 0 )
          break;
LABEL_12:
        m_uValue = *(m_uValue + 12);
        if ( m_uValue == 0 )
          goto LABEL_4;
      }
      if ( (buffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buffer, "%hu", v7);
      }
      else if ( CUtlBuffer::CheckPut(buffer, 1) )
      {
        buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v8;
        ++buffer->m_Put;
        CUtlBuffer::AddNullTermination(buffer);
      }
      v9 = CKeyValues_Data::Internal_GetName(m_uValue);
      CUtlBuffer::PutString(buffer, v9);
      switch ( v8 )
      {
        case 0LL:
          goto LABEL_12;
        case 1LL:
          if ( (m_uValue[11] & 0x10) != 0 )
          {
            v20 = *m_uValue;
            if ( *m_uValue == 0 )
              goto LABEL_60;
          }
          else
          {
            v20 = m_uValue;
          }
          if ( *v20 != 0 )
          {
LABEL_61:
            CUtlBuffer::PutString(buffer, v20);
            goto LABEL_12;
          }
LABEL_60:
          v20 = "";
          goto LABEL_61;
        case 2LL:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%d", *m_uValue);
          }
          else
          {
            v43 = *m_uValue;
            if ( CUtlBuffer::CheckPut(buffer, 4) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                m_Put = buffer->m_Put;
                v32 = &buffer->m_Memory.m_pMemory[m_Put - buffer->m_nOffset];
                if ( v32 != 0 )
                {
                  LOBYTE(v47[0]) = HIBYTE(v43);
                  BYTE1(v47[0]) = BYTE2(v43);
                  BYTE2(v47[0]) = BYTE1(v43);
                  BYTE3(v47[0]) = v43;
                  *v32 = v47[0];
                  m_Put = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v43;
                m_Put = buffer->m_Put;
              }
              goto LABEL_87;
            }
          }
          goto LABEL_12;
        case 3LL:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%f", *m_uValue);
          }
          else
          {
            v44 = *m_uValue;
            if ( CUtlBuffer::CheckPut(buffer, 4) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                m_Put = buffer->m_Put;
                v33 = &buffer->m_Memory.m_pMemory[m_Put - buffer->m_nOffset];
                if ( v33 != 0 )
                {
                  LOBYTE(v47[0]) = HIBYTE(v44);
                  BYTE1(v47[0]) = BYTE2(v44);
                  BYTE2(v47[0]) = BYTE1(v44);
                  BYTE3(v47[0]) = v44;
                  *v33 = v47[0];
                  m_Put = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v44;
                m_Put = buffer->m_Put;
              }
LABEL_87:
              buffer->m_Put = m_Put + 4;
              CUtlBuffer::AddNullTermination(buffer);
            }
          }
          goto LABEL_12;
        case 4LL:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "0x%p", *m_uValue);
          }
          else
          {
            v46 = *m_uValue;
            if ( CUtlBuffer::CheckPut(buffer, 8) )
            {
              if ( (*&buffer->m_Byteswap & 1) == 0 )
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v46;
                v22 = buffer->m_Put;
                goto LABEL_79;
              }
              v22 = buffer->m_Put;
              v26 = &buffer->m_Memory.m_pMemory[v22 - buffer->m_nOffset];
              if ( v26 != 0 )
              {
                v34 = 0;
                v47[0] = *v26;
                for ( i = 8; i != 0; --i )
                {
                  v36 = v47 + v34;
                  v34 = 9 - i;
                  v37 = *(&v45 + i + 7);
                  *v36 = v37;
                }
                goto LABEL_97;
              }
              goto LABEL_79;
            }
          }
          goto LABEL_12;
        case 5LL:
          if ( (m_uValue[11] & 0x10) != 0 )
          {
            v13 = *m_uValue;
            if ( *m_uValue == 0 )
            {
              LOWORD(v14) = 0;
              v15 = 0;
              goto LABEL_40;
            }
          }
          else
          {
            v13 = m_uValue;
          }
          v14 = wcslen(v13);
          v15 = v14;
LABEL_40:
          nLengtha = v15;
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hd", v14);
            v16 = nLengtha;
          }
          else
          {
            v41 = v14;
            v23 = CUtlBuffer::CheckPut(buffer, 2);
            v16 = nLengtha;
            if ( v23 )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v24 = buffer->m_Put;
                v31 = &buffer->m_Memory.m_pMemory[v24 - buffer->m_nOffset];
                if ( v31 != 0 )
                {
                  LOBYTE(v47[0]) = HIBYTE(v41);
                  BYTE1(v47[0]) = v41;
                  *v31 = v47[0];
                  v24 = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v41;
                v24 = buffer->m_Put;
              }
              buffer->m_Put = v24 + 2;
              CUtlBuffer::AddNullTermination(buffer);
              v16 = nLengtha;
            }
          }
          if ( v16 > 0 )
          {
            v17 = v13;
            v18 = &v13[v16 - 1 + 1];
            do
            {
              if ( (buffer->m_Flags & 1) != 0 )
              {
                CUtlBuffer::Printf(buffer, "%hd", *v17);
              }
              else
              {
                v42 = *v17;
                if ( CUtlBuffer::CheckPut(buffer, 2) )
                {
                  if ( (*&buffer->m_Byteswap & 1) != 0 )
                  {
                    v19 = buffer->m_Put;
                    v21 = &buffer->m_Memory.m_pMemory[v19 - buffer->m_nOffset];
                    if ( v21 != 0 )
                    {
                      LOBYTE(v47[0]) = HIBYTE(v42);
                      BYTE1(v47[0]) = v42;
                      *v21 = v47[0];
                      v19 = buffer->m_Put;
                    }
                  }
                  else
                  {
                    *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v42;
                    v19 = buffer->m_Put;
                  }
                  buffer->m_Put = v19 + 2;
                  CUtlBuffer::AddNullTermination(buffer);
                }
              }
              ++v17;
            }
            while ( v17 != v18 );
          }
          goto LABEL_12;
        case 6LL:
          v11 = m_uValue[1];
          v12 = m_uValue[3];
          nLength = m_uValue[2];
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", *m_uValue);
          }
          else
          {
            v38 = *m_uValue;
            if ( CUtlBuffer::CheckPut(buffer, 1) )
            {
              buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v38;
              ++buffer->m_Put;
              CUtlBuffer::AddNullTermination(buffer);
            }
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", v11);
          }
          else if ( CUtlBuffer::CheckPut(buffer, 1) )
          {
            buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v11;
            ++buffer->m_Put;
            CUtlBuffer::AddNullTermination(buffer);
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", nLength);
          }
          else if ( CUtlBuffer::CheckPut(buffer, 1) )
          {
            buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = nLength;
            ++buffer->m_Put;
            CUtlBuffer::AddNullTermination(buffer);
          }
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%hu", v12);
          }
          else if ( CUtlBuffer::CheckPut(buffer, 1) )
          {
            buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v12;
            ++buffer->m_Put;
            CUtlBuffer::AddNullTermination(buffer);
          }
          goto LABEL_12;
        case 7LL:
          if ( (m_uValue[11] & 0x10) != 0 )
            v10 = **m_uValue;
          else
            v10 = *m_uValue;
          if ( (buffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(buffer, "%llu", v10);
          }
          else
          {
            v45 = v10;
            if ( CUtlBuffer::CheckPut(buffer, 8) )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v22 = buffer->m_Put;
                v26 = &buffer->m_Memory.m_pMemory[v22 - buffer->m_nOffset];
                if ( v26 != 0 )
                {
                  v27 = 0;
                  v47[0] = *v26;
                  for ( j = 8; j != 0; --j )
                  {
                    v29 = v47 + v27;
                    v27 = 9 - j;
                    v30 = *(&v44 + j + 3);
                    *v29 = v30;
                  }
LABEL_97:
                  *v26 = v47[0];
                  v22 = buffer->m_Put;
                }
              }
              else
              {
                *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v45;
                v22 = buffer->m_Put;
              }
LABEL_79:
              buffer->m_Put = v22 + 8;
              CUtlBuffer::AddNullTermination(buffer);
            }
          }
          goto LABEL_12;
      }
    }
  }
LABEL_4:
  if ( (buffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buffer, "%hu", 11);
  }
  else if ( CUtlBuffer::CheckPut(buffer, 1) )
  {
    buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = 11;
    ++buffer->m_Put;
    CUtlBuffer::AddNullTermination(buffer);
  }
  return buffer->m_Error == 0;
}


// KeyValues::ReadAsBinaryFiltered  (line 3997, @0x0000000002f7b340, libserver.so)  // inlines: Init, Internal_ClearAll
// calls: KeyValues::IsValidBinaryKVBuffer, KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::ReadAsBinaryFilteredInternal
// callers: CGCJobLoadSaveGame::BYieldingRunJob
bool __fastcall KeyValues::ReadAsBinaryFiltered(KeyValues *const this, CUtlBuffer *const buffer)
{
  if ( !KeyValues::IsValidBinaryKVBuffer(this, buffer) )
    return 0;
  KeyValues::RemoveEverything(this);
  *(&this->CKeyValues_Data + 8) = -1;
  *(&this->CKeyValues_Data + 9) = -1;
  *(&this->CKeyValues_Data + 10) = -1;
  CKeyValues_Data::Internal_ClearData(this);
  this->m_pPeer = 0;
  *(&this->CKeyValues_Data + 11) &= ~8u;
  return KeyValues::ReadAsBinaryFilteredInternal(this, buffer);
}


// KeyValues::ReadAsBinaryFilteredInternal  (line 4008, @0x0000000002f7a5f0, libserver.so)  // inlines: Color, GetFloat, GetInt, GetInt64, GetPtr, GetShort, GetType<float>, GetType<int>, GetType<long long int>, GetType<short int>, GetType<short unsigned int>, GetTypeBin<float>, GetTypeBin<int>, GetTypeBin<long long int>, GetTypeBin<short int>, GetTypeBin<unsigned char>, GetTypeText<float>, GetTypeText<int>, GetTypeText<long long int>, GetTypeText<short int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, IsValid, LowLevelByteSwap<float>, LowLevelByteSwap<int>, LowLevelByteSwap<long long int>, LowLevelByteSwap<short int>, PeekGet, SetColor, SetName, StringToNumber<float>, StringToNumber<int>, StringToNumber<long long int>, StringToNumber<short int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long int>, SwapBufferToTargetEndian<short int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::GetString, CKeyValues_Data::Internal_SetName, CUtlBuffer::CheckArbitraryPeekGet, KeyValues::CreateKey, CUtlBuffer::CheckGet, KeyValues::SetUint64, KeyValues::SetColor, operator new [], KeyValues::SetWString, operator delete [], KeyValues::SetPtr, KeyValues::SetFloat (18 total)
// callers: KeyValues::ReadAsBinaryFiltered
// globals: jpt_2F7A721
bool __fastcall KeyValues::ReadAsBinaryFilteredInternal(KeyValues *const this, CUtlBuffer *const buffer)
{
  char *v4; // rbx
  KeyValues *Key; // rax
  int m_Get; // edx
  unsigned __int8 v7; // r12
  int v8; // edx
  bool v9; // al
  uint64 v10; // rdx
  unsigned __int8 v12; // r15
  unsigned __int8 v13; // r12
  bool v14; // al
  int v15; // esi
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rdx
  int v18; // r12d
  size_t v19; // rdi
  __int64 v20; // r12
  wchar_t *v21; // rbx
  bool v22; // al
  __int64 v23; // rdx
  bool v24; // al
  int v25; // eax
  wchar_t v26; // edx
  bool v27; // al
  void *v28; // rdx
  bool v29; // al
  float v30; // xmm1_4
  __m128i v31; // xmm0
  bool v32; // al
  __int64 v33; // rdx
  int v34; // r15d
  unsigned __int8 v35; // al
  bool v36; // al
  int v37; // esi
  bool v38; // al
  int v39; // eax
  bool v40; // zf
  __int64 v41; // rdx
  int v42; // edx
  int v43; // edx
  unsigned __int8 v44; // cl
  int v45; // edx
  bool v46; // al
  int v47; // edx
  bool v48; // al
  int v49; // r9d
  int v50; // edx
  __int64 v51; // rax
  bool v52; // al
  int v53; // r9d
  int v54; // r14d
  __int16 v55; // ax
  int v56; // edx
  int *v57; // rdx
  int v58; // eax
  int v59; // r12d
  unsigned __int8 v60; // al
  int v61; // r12d
  unsigned __int8 v62; // al
  int v63; // r12d
  unsigned __int8 v64; // al
  int v65; // r12d
  int v66; // r12d
  __int64 v67; // rax
  int v68; // r12d
  __int16 v69; // ax
  int v70; // r12d
  __int64 v71; // rax
  int v72; // r12d
  __m128d v73; // xmm0
  int *v74; // r8
  __int64 v75; // rdx
  __int64 j; // rax
  char v77; // si
  char *v78; // rcx
  int v79; // eax
  int *v80; // rax
  int v81; // eax
  int *v82; // rax
  int *v83; // r8
  __int64 v84; // rdx
  __int64 i; // rax
  char v86; // si
  char *v87; // rcx
  char *v88; // [rsp+0h] [rbp-100A0h]
  KeyValues *v89; // [rsp+8h] [rbp-10098h]
  __int64 v90; // [rsp+10h] [rbp-10090h]
  int v91; // [rsp+10h] [rbp-10090h]
  unsigned __int8 v92; // [rsp+18h] [rbp-10088h]
  wchar_t *v93; // [rsp+18h] [rbp-10088h]
  int v94; // [rsp+4Ch] [rbp-10054h] BYREF
  int nIncrement[2]; // [rsp+50h] [rbp-10050h] BYREF
  unsigned __int8 *v96; // [rsp+58h] [rbp-10048h] BYREF
  char name[32768]; // [rsp+60h] [rbp-10040h] BYREF
  char token[32776]; // [rsp+8060h] [rbp-8040h] BYREF
  unsigned __int64 v99; // [rsp+10068h] [rbp-38h]

  v4 = name;
  v99 = __readfsqword(0x28u);
  CUtlBuffer::GetString(buffer, name, 0x7FFF);
  name[0x7FFF] = 0;
  CKeyValues_Data::Internal_SetName(this, name);
  while ( 1 )
  {
    if ( (buffer->m_Flags & 1) == 0 )
    {
      if ( !CUtlBuffer::CheckGet(buffer, 1) )
        goto LABEL_3;
      m_Get = buffer->m_Get;
      v7 = buffer->m_Memory.m_pMemory[m_Get - buffer->m_nOffset];
      buffer->m_Get = m_Get + 1;
      v8 = v7;
      if ( v7 == 11 )
        return buffer->m_Error == 0;
      goto LABEL_8;
    }
    nIncrement[0] = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
      goto LABEL_3;
    v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
    v34 = v96;
    v35 = V_strtoui64(v96, &v96, 10);
    if ( v96 != v34 )
      buffer->m_Get += v96 - v34;
    v8 = v35;
    v7 = v35;
    if ( v35 == 11 )
      return buffer->m_Error == 0;
LABEL_8:
    if ( v8 != 0 )
    {
      CUtlBuffer::GetString(buffer, v4, 0x7FFF);
      name[0x7FFF] = 0;
      switch ( v7 )
      {
        case 1u:
          CUtlBuffer::GetString(buffer, token, 0x7FFF);
          token[0x7FFF] = 0;
          KeyValues::SetString(this, v4, token);
          goto LABEL_4;
        case 2u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v32 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement);
            v33 = 0;
            if ( v32 )
            {
              LOBYTE(v33) = 10;
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v65 = v96;
              v94 = V_strtoi64(v96, &v96, v33);
              LODWORD(v33) = v94;
              if ( v96 != v65 )
                buffer->m_Get += v96 - v65;
            }
          }
          else
          {
            v36 = CUtlBuffer::CheckGet(buffer, 4);
            LODWORD(v33) = 0;
            if ( v36 )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v37 = buffer->m_Get;
                v81 = v37 - buffer->m_nOffset;
                LODWORD(v96) = v94;
                v82 = &buffer->m_Memory.m_pMemory[v81];
                if ( v82 == 0 )
                  v82 = &v94;
                LOBYTE(v96) = *(v82 + 3);
                BYTE1(v96) = *(v82 + 2);
                BYTE2(v96) = *(v82 + 1);
                BYTE3(v96) = *v82;
                LODWORD(v33) = v96;
              }
              else
              {
                v37 = buffer->m_Get;
                LODWORD(v33) = *&buffer->m_Memory.m_pMemory[v37 - buffer->m_nOffset];
              }
              buffer->m_Get = v37 + 4;
            }
          }
          KeyValues::SetInt(this, v4, v33);
          goto LABEL_4;
        case 3u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v29 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement);
            v31 = 0;
            if ( v29 )
            {
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v72 = v96;
              v73.m128d_f64[0] = V_strtod(v96, &v96, 0.0);
              v31 = _mm_cvtpd_ps(_mm_unpacklo_pd(v73, v73));
              v94 = v31.m128i_i32[0];
              if ( v96 != v72 )
                buffer->m_Get += v96 - v72;
            }
          }
          else
          {
            v38 = CUtlBuffer::CheckGet(buffer, 4);
            v31 = 0;
            if ( v38 )
            {
              v39 = buffer->m_Get;
              v40 = (*&buffer->m_Byteswap & 1) == 0;
              v41 = v39 - buffer->m_nOffset;
              v31 = *&buffer->m_Memory.m_pMemory[v41];
              v94 = *&buffer->m_Memory.m_pMemory[v41];
              if ( !v40 )
              {
                LOBYTE(v96) = HIBYTE(v94);
                BYTE1(v96) = BYTE2(v94);
                BYTE2(v96) = BYTE1(v94);
                BYTE3(v96) = v94;
                v31 = v96;
              }
              buffer->m_Get = v39 + 4;
            }
          }
          KeyValues::SetFloat(this, v4, v31, v30);
          goto LABEL_4;
        case 4u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            v94 = 128;
            v27 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &v94);
            v28 = 0;
            if ( v27 )
            {
              LOBYTE(v28) = 10;
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v70 = v96;
              v71 = V_strtoi64(v96, &v96, v28);
              *nIncrement = v71;
              if ( v96 != v70 )
                buffer->m_Get += v96 - v70;
              v28 = v71;
            }
          }
          else
          {
            v48 = CUtlBuffer::CheckGet(buffer, 8);
            v28 = 0;
            if ( v48 )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v49 = buffer->m_Get;
                v83 = &buffer->m_Memory.m_pMemory[v49 - buffer->m_nOffset];
                if ( v83 == 0 )
                  v83 = nIncrement;
                v84 = 0;
                v96 = *nIncrement;
                for ( i = 8; i != 0; --i )
                {
                  v86 = *(v83 + i - 1);
                  v87 = &name[v84 - 8];
                  v84 = 9 - i;
                  *v87 = v86;
                }
                v28 = v96;
              }
              else
              {
                v49 = buffer->m_Get;
                v28 = *&buffer->m_Memory.m_pMemory[v49 - buffer->m_nOffset];
              }
              buffer->m_Get = v49 + 8;
            }
          }
          KeyValues::SetPtr(this, v4, v28);
          goto LABEL_4;
        case 5u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v68 = v96;
              v69 = V_strtoi64(v96, &v96, 10);
              LOWORD(v94) = v69;
              if ( v96 != v68 )
                buffer->m_Get += v96 - v68;
              v18 = v69;
              v17 = v69 + 1;
              v90 = v69;
            }
            else
            {
              v90 = 0;
              v17 = 1;
              v18 = 0;
            }
          }
          else
          {
            if ( !CUtlBuffer::CheckGet(buffer, 2) )
            {
              v90 = 0;
              v19 = 4;
              v18 = 0;
              goto LABEL_28;
            }
            if ( (*&buffer->m_Byteswap & 1) != 0 )
            {
              v50 = buffer->m_Get;
              v79 = v50 - buffer->m_nOffset;
              LOWORD(v96) = v94;
              v80 = &buffer->m_Memory.m_pMemory[v79];
              if ( v80 == 0 )
                v80 = &v94;
              LOBYTE(v96) = *(v80 + 1);
              BYTE1(v96) = *v80;
              v51 = v96;
            }
            else
            {
              v50 = buffer->m_Get;
              v51 = *&buffer->m_Memory.m_pMemory[v50 - buffer->m_nOffset];
            }
            v18 = v51;
            buffer->m_Get = v50 + 2;
            v17 = v51 + 1;
            v90 = v51;
          }
          v19 = -1;
          if ( v17 <= 0x1FC0000000000000LL )
            v19 = 4 * v17;
LABEL_28:
          v93 = operator new[](v19);
          if ( v18 <= 0 )
            goto LABEL_38;
          v88 = v4;
          v89 = this;
          v20 = &v93[v18 - 1 + 1];
          v21 = v93;
          do
          {
LABEL_32:
            if ( (buffer->m_Flags & 1) != 0 )
            {
              nIncrement[0] = 128;
              v22 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement);
              v23 = 0;
              if ( v22 )
              {
                LOBYTE(v23) = 10;
                v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
                v54 = v96;
                v55 = V_strtoi64(v96, &v96, v23);
                LOWORD(v94) = v55;
                if ( v96 != v54 )
                  buffer->m_Get += v96 - v54;
                LODWORD(v23) = v55;
              }
LABEL_31:
              *v21++ = v23;
              if ( v21 == v20 )
                break;
              goto LABEL_32;
            }
            v24 = CUtlBuffer::CheckGet(buffer, 2);
            LODWORD(v23) = 0;
            if ( !v24 )
              goto LABEL_31;
            if ( (*&buffer->m_Byteswap & 1) != 0 )
            {
              v25 = buffer->m_Get;
              v56 = v25 - buffer->m_nOffset;
              LOWORD(v96) = v94;
              v57 = &buffer->m_Memory.m_pMemory[v56];
              if ( v57 == 0 )
                v57 = &v94;
              LOBYTE(v96) = *(v57 + 1);
              BYTE1(v96) = *v57;
              v26 = v96;
            }
            else
            {
              v25 = buffer->m_Get;
              v26 = *&buffer->m_Memory.m_pMemory[v25 - buffer->m_nOffset];
            }
            ++v21;
            buffer->m_Get = v25 + 2;
            *(v21 - 1) = v26;
          }
          while ( v21 != v20 );
          this = v89;
          v4 = v88;
LABEL_38:
          v93[v90] = 0;
          KeyValues::SetWString(this, v4, v93);
          if ( v93 != 0 )
            operator delete[](v93);
          goto LABEL_4;
        case 6u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            v12 = 0;
            nIncrement[0] = 128;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v63 = v96;
              v64 = V_strtoui64(v96, &v96, 10);
              if ( v96 != v63 )
                buffer->m_Get += v96 - v63;
              v12 = v64;
            }
LABEL_16:
            if ( (buffer->m_Flags & 1) != 0 )
              goto LABEL_17;
            goto LABEL_64;
          }
          v12 = 0;
          if ( !CUtlBuffer::CheckGet(buffer, 1) )
            goto LABEL_16;
          v42 = buffer->m_Get;
          v40 = (buffer->m_Flags & 1) == 0;
          v12 = buffer->m_Memory.m_pMemory[v42 - buffer->m_nOffset];
          buffer->m_Get = v42 + 1;
          if ( !v40 )
          {
LABEL_17:
            nIncrement[0] = 128;
            v92 = 0;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v61 = v96;
              v62 = V_strtoui64(v96, &v96, 10);
              if ( v96 != v61 )
                buffer->m_Get += v96 - v61;
              v92 = v62;
            }
LABEL_18:
            if ( (buffer->m_Flags & 1) != 0 )
              goto LABEL_19;
            goto LABEL_66;
          }
LABEL_64:
          v92 = 0;
          if ( !CUtlBuffer::CheckGet(buffer, 1) )
            goto LABEL_18;
          v43 = buffer->m_Get;
          v40 = (buffer->m_Flags & 1) == 0;
          v44 = buffer->m_Memory.m_pMemory[v43 - buffer->m_nOffset];
          buffer->m_Get = v43 + 1;
          v92 = v44;
          if ( !v40 )
          {
LABEL_19:
            v13 = 0;
            nIncrement[0] = 128;
            if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement) )
            {
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v59 = v96;
              v60 = V_strtoui64(v96, &v96, 10);
              if ( v96 != v59 )
                buffer->m_Get += v96 - v59;
              v13 = v60;
            }
LABEL_20:
            if ( (buffer->m_Flags & 1) != 0 )
              goto LABEL_21;
            goto LABEL_68;
          }
LABEL_66:
          v13 = 0;
          if ( !CUtlBuffer::CheckGet(buffer, 1) )
            goto LABEL_20;
          v45 = buffer->m_Get;
          v40 = (buffer->m_Flags & 1) == 0;
          v13 = buffer->m_Memory.m_pMemory[v45 - buffer->m_nOffset];
          buffer->m_Get = v45 + 1;
          if ( !v40 )
          {
LABEL_21:
            nIncrement[0] = 128;
            v14 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, nIncrement);
            v15 = 0;
            if ( v14 )
            {
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v91 = v96;
              v58 = V_strtoui64(v96, &v96, 10);
              if ( v96 != v91 )
                buffer->m_Get += v96 - v91;
              v15 = v58;
            }
            goto LABEL_22;
          }
LABEL_68:
          v46 = CUtlBuffer::CheckGet(buffer, 1);
          v15 = 0;
          if ( v46 )
          {
            v47 = buffer->m_Get;
            v15 = buffer->m_Memory.m_pMemory[v47 - buffer->m_nOffset];
            buffer->m_Get = v47 + 1;
          }
LABEL_22:
          LOBYTE(v16) = v12;
          HIBYTE(v16) = v92;
          KeyValues::SetColor(this, v4, ((v15 << 24) | (v13 << 16) | v16));
          break;
        case 7u:
          if ( (buffer->m_Flags & 1) != 0 )
          {
            v94 = 128;
            v9 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &v94);
            v10 = 0;
            if ( v9 )
            {
              LOBYTE(v10) = 10;
              v96 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v66 = v96;
              v67 = V_strtoi64(v96, &v96, v10);
              *nIncrement = v67;
              if ( v96 != v66 )
                buffer->m_Get += v96 - v66;
              v10 = v67;
            }
          }
          else
          {
            v52 = CUtlBuffer::CheckGet(buffer, 8);
            v10 = 0;
            if ( v52 )
            {
              if ( (*&buffer->m_Byteswap & 1) != 0 )
              {
                v53 = buffer->m_Get;
                v74 = &buffer->m_Memory.m_pMemory[v53 - buffer->m_nOffset];
                if ( v74 == 0 )
                  v74 = nIncrement;
                v75 = 0;
                v96 = *nIncrement;
                for ( j = 8; j != 0; --j )
                {
                  v77 = *(v74 + j - 1);
                  v78 = &name[v75 - 8];
                  v75 = 9 - j;
                  *v78 = v77;
                }
                v10 = v96;
              }
              else
              {
                v53 = buffer->m_Get;
                v10 = *&buffer->m_Memory.m_pMemory[v53 - buffer->m_nOffset];
              }
              buffer->m_Get = v53 + 8;
            }
          }
          KeyValues::SetUint64(this, v4, v10);
          if ( buffer->m_Error != 0 )
            return 0;
          continue;
        default:
          goto LABEL_4;
      }
      goto LABEL_4;
    }
LABEL_3:
    Key = KeyValues::CreateKey(this, "");
    KeyValues::ReadAsBinaryFilteredInternal(Key, buffer);
LABEL_4:
    if ( buffer->m_Error != 0 )
      return 0;
  }
}


// KeyValues::operator new  (line 4117, @0x0000000002f77ba0, libserver.so)
// calls: KeyValuesSystem
// callers: ProtoBufHelper::CreateKVFromProtoBuf, CGameConfiguration::InitGameSession, ScriptTableToKeyValues, ScriptVmKeyValueFromVariant, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, Script_LoadKeyValuesFromString, Script_LoadKeyValues, CPropData::ParsePropDataFile, CBaseAnimatingController::GetSequenceKeyValues, CBaseProp::ParsePropData, CGameEvent::CGameEvent, CGameEventManager::ParseEventList (148 total)
void *__fastcall KeyValues::operator new(size_t iAllocSize)
{
  void *(__fastcall ***v1)(_QWORD); // rax

  v1 = KeyValuesSystem(iAllocSize);
  return (**v1)(v1);
}


// KeyValues::operator new  (line 4123, @0x0000000002f77bc0, libserver.so)
// calls: KeyValuesSystem
void *__fastcall KeyValues::operator new(size_t iAllocSize, int nBlockUse, const char *pFileName, int nLine)
{
  void *(__fastcall ***v4)(_QWORD); // rax

  v4 = KeyValuesSystem(iAllocSize);
  return (**v4)(v4);
}


// KeyValues::operator delete  (line 4131, @0x0000000002f77be0, libserver.so)
// calls: KeyValuesSystem
// callers: ProtoBufHelper::CreateKVFromProtoBuf, CGameConfiguration::ShutdownGameSession, CGameConfiguration::~CGameConfiguration, CGameConfiguration::InitGameSession, ScriptTableToKeyValues, ScriptVmKeyValueFromVariant, ScriptHelper_CreateEvent, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, Script_LoadKeyValuesFromString, Script_LoadKeyValues, CPropData::GameShutdown, CPropData::ParsePropDataFile (172 total)
void __fastcall KeyValues::operator delete(void *pMem)
{
  __int64 v2; // rax

  v2 = KeyValuesSystem(pMem);
  (*(*v2 + 8LL))(v2, pMem);
}


// KeyValues::operator delete  (line 4136, @0x0000000002f784d0, libserver.so)
// calls: KeyValuesSystem
void __fastcall KeyValues::operator delete(void *pMem, int nBlockUse, const char *pFileName, int nLine)
{
  __int64 v5; // rax

  v5 = KeyValuesSystem(pMem);
  (*(*v5 + 8LL))(v5, pMem);
}


// KeyValues::UnpackIntoStructure  (line 4145, @0x0000000002f7c370, libserver.so)  // inlines: Color, Init, SetColor, memset, operator*=, strncpy
// calls: KeyValues::FindKey, KeyValues::GetString, V_sscanf, V_atoi, KeyValues::GetInt, strncpy, V_atof, KeyValues::GetFloat, KeyValues::GetColor, __stack_chk_fail
// strings: "%f %f %f %f"
// globals: jpt_2F7C3D2
void __fastcall KeyValues::UnpackIntoStructure(
        KeyValues *const this,
        const KeyValuesUnpackStructure *pUnpackTable,
        void *pDest)
{
  const KeyValuesUnpackStructure *v3; // r15
  const char *m_pKeyName; // rsi
  char *v7; // rbx
  KeyValues *Key; // rax
  float v9; // xmm1_4
  const char *v10; // rax
  const char *v11; // rdi
  int v12; // edx
  const char *v13; // rdx
  size_t m_nFieldSize; // r14
  const char *v15; // rax
  const char *m_pKeyDefault; // rdi
  float v17; // xmm0_4
  const char *v18; // rax
  const char *v19; // rsi
  Color Color; // eax
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  const char *String; // rax
  const char *v25; // rdi
  Color defaultColor; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+8h] [rbp-38h]

  v3 = pUnpackTable;
  v27 = __readfsqword(0x28u);
  m_pKeyName = pUnpackTable->m_pKeyName;
  if ( m_pKeyName != 0 )
  {
    do
    {
      v7 = pDest + v3->m_nFieldOffset;
      Key = KeyValues::FindKey(this, m_pKeyName, 0);
      switch ( v3->m_eDataType )
      {
        case KeyValuesUnpackDestinationTypes_t::UNPACK_TYPE_FLOAT:
          m_pKeyDefault = v3->m_pKeyDefault;
          v17 = 0.0;
          if ( m_pKeyDefault != 0 )
            v17 = V_atof(m_pKeyDefault);
          *v7 = KeyValues::GetFloat(this, v3->m_pKeyName, v17, v9);
          break;
        case KeyValuesUnpackDestinationTypes_t::UNPACK_TYPE_VECTOR:
          String = KeyValues::GetString(this, v3->m_pKeyName, v3->m_pKeyDefault, 0, 0);
          if ( String == 0 || V_sscanf(String, "%f %f %f", v7, v7 + 4, v7 + 8) != 3 )
          {
            *v7 = 0;
            *(v7 + 1) = 0;
            *(v7 + 2) = 0;
          }
          break;
        case KeyValuesUnpackDestinationTypes_t::UNPACK_TYPE_VECTOR_COLOR:
          if ( Key != 0 )
          {
            v19 = v3->m_pKeyName;
            defaultColor._color[0] = 0;
            defaultColor._color[1] = 0;
            defaultColor._color[2] = 0;
            defaultColor._color[3] = 0;
            Color = KeyValues::GetColor(this, v19, &defaultColor);
            v21 = Color._color[0] * 0.0039215689;
            v22 = Color._color[1] * 0.0039215689;
            v23 = Color._color[2] * 0.0039215689;
          }
          else
          {
            v25 = v3->m_pKeyDefault;
            if ( v25 != 0 )
            {
              V_sscanf(v25, "%f %f %f", v7, v7 + 4, v7 + 8);
              v21 = 0.0039215689 * *v7;
              v22 = 0.0039215689 * *(v7 + 1);
              v23 = 0.0039215689 * *(v7 + 2);
            }
            else
            {
              v23 = 0.0;
              v22 = 0.0;
              v21 = 0.0;
            }
          }
          *v7 = v21;
          *(v7 + 1) = v22;
          *(v7 + 2) = v23;
          break;
        case KeyValuesUnpackDestinationTypes_t::UNPACK_TYPE_STRING:
          v13 = v3->m_pKeyDefault;
          m_nFieldSize = v3->m_nFieldSize;
          if ( v13 == 0 )
            v13 = "";
          v15 = KeyValues::GetString(this, v3->m_pKeyName, v13, 0, 0);
          strncpy(v7, v15, m_nFieldSize);
          break;
        case KeyValuesUnpackDestinationTypes_t::UNPACK_TYPE_INT:
          v11 = v3->m_pKeyDefault;
          v12 = 0;
          if ( v11 != 0 )
            v12 = V_atoi(v11);
          *v7 = KeyValues::GetInt(this, v3->m_pKeyName, v12);
          break;
        case KeyValuesUnpackDestinationTypes_t::UNPACK_TYPE_FOUR_FLOATS:
          v10 = KeyValues::GetString(this, v3->m_pKeyName, v3->m_pKeyDefault, 0, 0);
          if ( v10 == 0 || V_sscanf(v10, "%f %f %f %f", v7, v7 + 4, v7 + 8, v7 + 12) != 4 )
          {
            *v7 = 0;
            *(v7 + 1) = 0;
          }
          break;
        case KeyValuesUnpackDestinationTypes_t::UNPACK_TYPE_TWO_FLOATS:
          v18 = KeyValues::GetString(this, v3->m_pKeyName, v3->m_pKeyDefault, 0, 0);
          if ( v18 == 0 || V_sscanf(v18, "%f %f", v7, v7 + 4) != 2 )
            *v7 = 0;
          break;
        default:
          break;
      }
      ++v3;
      m_pKeyName = v3->m_pKeyName;
    }
    while ( v3->m_pKeyName != 0 );
  }
}


// KeyValues::ProcessResolutionKeys  (line 4253, @0x0000000002f7c680, libserver.so)  // inlines: GetFirstSubKey, GetName, GetNextKey, Internal_GetSubKey, ResolveSubKeyValue, SetName, V_stristr_fast, V_strncpy<long unsigned int>, ~CKeyValues_Data, ~KeyValues
// calls: CKeyValues_Data::Internal_GetName, V_stristr_fast(char const*,char const*), _V_strncpy, V_stricmp_fast, KeyValues::FindKey, KeyValues::RemoveSubKey, KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::operator delete, CKeyValues_Data::Internal_SetName, __stack_chk_fail
bool __fastcall KeyValues::ProcessResolutionKeys(KeyValues *const this, const char *pResString)
{
  bool result; // al
  KeyValues *m_uValue; // rbx
  const char *Name; // rax
  const char *v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // r13
  KeyValues *Key; // rax
  KeyValues *v11; // r13
  char normalKeyName[136]; // [rsp+0h] [rbp-C0h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  result = 0;
  if ( pResString == 0 || this == 0 )
    return 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      do
      {
        KeyValues::ProcessResolutionKeys(m_uValue, pResString);
        Name = CKeyValues_Data::Internal_GetName(m_uValue);
        if ( V_stristr_fast(Name, pResString) != 0 )
        {
          v7 = CKeyValues_Data::Internal_GetName(m_uValue);
          _V_strncpy(normalKeyName, v7, 128);
          v8 = V_stristr_fast(normalKeyName, pResString);
          v9 = v8;
          if ( v8 != 0 && V_stricmp_fast(v8, pResString) == 0 )
          {
            *v9 = 0;
            Key = KeyValues::FindKey(this, normalKeyName, 0);
            v11 = Key;
            if ( Key != 0 )
            {
              KeyValues::RemoveSubKey(this, Key, 0);
              KeyValues::RemoveEverything(v11);
              CKeyValues_Data::Internal_ClearData(v11);
              KeyValues::operator delete(v11);
            }
            CKeyValues_Data::Internal_SetName(m_uValue, normalKeyName);
          }
        }
        m_uValue = m_uValue->m_pPeer;
      }
      while ( m_uValue != 0 );
      return 1;
    }
  }
  return result;
}


// KeyValues::MergeFrom  (line 4307, @0x0000000002f7c7d0, libserver.so)  // inlines: GetFirstTrueSubKey, GetFirstValue, GetName, GetNextTrueSubKey, GetNextValue, Internal_GetSubKey, ResolveSubKeyValue, ~CKeyValues_Data, ~KeyValues
// calls: CKeyValues_Data::Internal_GetName, KeyValues::FindKey, KeyValues::RemoveSubKey, KeyValues::RemoveEverything, CKeyValues_Data::Internal_ClearData, KeyValues::operator delete, KeyValues::MakeCopy, KeyValues::AddSubKey
// callers: CDOTABaseAbility::ProcessAbilityData, CDOTAGameManager::ApplyAbilitiesOverride, CDOTAGameManager::Playtesting_UpdateAddOnKeyValues, CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary, CDOTAGameManager::SetupGameKeyValues, CEconItemDefinition::BInitFromKV, KeyValues::MergeFromTemporary
// strings: "borrow"
// globals: jpt_2F7C80C
void __fastcall KeyValues::MergeFrom(KeyValues *const this, KeyValues *kvMerge, KeyValues::MergeKeyValuesOp_t eOp)
{
  KeyValues *v3; // r13
  KeyValues::MergeKeyValuesOp_t v5; // r14d
  const char *v6; // rax
  KeyValues *v7; // rax
  KeyValues *v8; // r13
  KeyValues *v9; // rax
  uintp v10; // rbx
  uintp v11; // rax
  uintp v12; // rbx
  uintp v13; // rbx
  uintp v14; // rax
  uintp v15; // rbx
  uintp v16; // rbx
  uintp m_uValue; // rax
  uintp v18; // rbx
  KeyValues *Key; // rax
  KeyValues *v20; // rax
  uintp v21; // rax
  uintp v22; // rbx
  uintp v23; // rbx
  const char *v24; // rax
  KeyValues *v25; // rax
  const char *v26; // rax
  KeyValues *v27; // rdi
  const char *v28; // rax
  KeyValues *v29; // rax
  const char *Name; // rax
  KeyValues *v31; // rdi
  KeyValues *Copy; // rax
  KeyValues *v33; // rax
  const char *v34; // rax
  KeyValues *v35; // rax
  KeyValues *v36; // r13
  KeyValues *v37; // rax
  const char *v38; // rax
  KeyValues *v39; // rax
  KeyValues *v40; // r13
  const char *v41; // rax
  KeyValues *v42; // rax

  v3 = kvMerge;
  if ( kvMerge != 0 && this != 0 )
  {
    v5 = eOp;
    while ( 2 )
    {
      switch ( eOp )
      {
        case KeyValues::MergeKeyValuesOp_t::MERGE_KV_ALL:
          Key = KeyValues::FindKey(v3, "update", 0);
          KeyValues::MergeFrom(this, Key, KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
          v20 = KeyValues::FindKey(v3, "delete", 0);
          KeyValues::MergeFrom(this, v20, KeyValues::MergeKeyValuesOp_t::MERGE_KV_DELETE);
          v3 = KeyValues::FindKey(v3, "borrow", 0);
          if ( v3 != 0 )
          {
            v5 = KeyValues::MergeKeyValuesOp_t::MERGE_KV_BORROW;
            continue;
          }
          return;
        case KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE:
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) != 0x40 )
            return;
          m_uValue = v3->m_uValue;
          v18 = v3->m_uValue;
          if ( v3->m_uValue == 0 )
            goto LABEL_37;
          if ( (*(m_uValue + 11) & 7) != 0 )
          {
            v18 = *(v18 + 12);
            if ( v18 == 0 )
              goto LABEL_37;
            while ( (*(v18 + 11) & 7) != 0 )
            {
              v18 = *(v18 + 12);
              if ( v18 == 0 )
                goto LABEL_37;
            }
          }
LABEL_72:
          Name = CKeyValues_Data::Internal_GetName(v18);
          v31 = KeyValues::FindKey(this, Name, 0);
          if ( v31 != 0 )
          {
            KeyValues::MergeFrom(v31, v18, v5);
          }
          else
          {
            Copy = KeyValues::MakeCopy(v18);
            KeyValues::AddSubKey(this, Copy);
          }
          while ( 1 )
          {
            v18 = *(v18 + 12);
            if ( v18 == 0 )
              break;
            if ( (*(v18 + 11) & 7) == 0 )
              goto LABEL_72;
          }
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) == 0x40 )
          {
            m_uValue = v3->m_uValue;
LABEL_37:
            v10 = m_uValue;
            if ( m_uValue != 0 )
            {
              while ( (*(v10 + 11) & 7) == 0 )
              {
                v10 = *(v10 + 12);
                if ( v10 == 0 )
                  return;
              }
LABEL_6:
              v6 = CKeyValues_Data::Internal_GetName(v10);
              v7 = KeyValues::FindKey(this, v6, 0);
              v8 = v7;
              if ( v7 != 0 )
              {
                KeyValues::RemoveSubKey(this, v7, 0);
                KeyValues::RemoveEverything(v8);
                CKeyValues_Data::Internal_ClearData(v8);
                KeyValues::operator delete(v8);
              }
              v9 = KeyValues::MakeCopy(v10);
              KeyValues::AddSubKey(this, v9);
              while ( 1 )
              {
                v10 = *(v10 + 12);
                if ( v10 == 0 )
                  break;
                if ( (*(v10 + 11) & 7) != 0 )
                  goto LABEL_6;
              }
            }
          }
          break;
        case KeyValues::MergeKeyValuesOp_t::MERGE_KV_DELETE:
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) != 0x40 )
            return;
          v21 = v3->m_uValue;
          v22 = v3->m_uValue;
          if ( v3->m_uValue == 0 )
            goto LABEL_49;
          if ( (*(v21 + 11) & 7) != 0 )
          {
            v22 = *(v22 + 12);
            if ( v22 == 0 )
              goto LABEL_49;
            while ( (*(v22 + 11) & 7) != 0 )
            {
              v22 = *(v22 + 12);
              if ( v22 == 0 )
                goto LABEL_49;
            }
          }
LABEL_54:
          v24 = CKeyValues_Data::Internal_GetName(v22);
          v25 = KeyValues::FindKey(this, v24, 0);
          if ( v25 != 0 )
            KeyValues::MergeFrom(v25, v22, v5);
          while ( 1 )
          {
            v22 = *(v22 + 12);
            if ( v22 == 0 )
              break;
            if ( (*(v22 + 11) & 7) == 0 )
              goto LABEL_54;
          }
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) == 0x40 )
          {
            v21 = v3->m_uValue;
LABEL_49:
            v23 = v21;
            if ( v21 != 0 )
            {
              while ( (*(v23 + 11) & 7) == 0 )
              {
                v23 = *(v23 + 12);
                if ( v23 == 0 )
                  return;
              }
LABEL_85:
              v38 = CKeyValues_Data::Internal_GetName(v23);
              v39 = KeyValues::FindKey(this, v38, 0);
              v40 = v39;
              if ( v39 != 0 )
              {
                KeyValues::RemoveSubKey(this, v39, 0);
                KeyValues::RemoveEverything(v40);
                CKeyValues_Data::Internal_ClearData(v40);
                KeyValues::operator delete(v40);
              }
              while ( 1 )
              {
                v23 = *(v23 + 12);
                if ( v23 == 0 )
                  break;
                if ( (*(v23 + 11) & 7) != 0 )
                  goto LABEL_85;
              }
            }
          }
          break;
        case KeyValues::MergeKeyValuesOp_t::MERGE_KV_BORROW:
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) != 0x40 )
            return;
          v11 = v3->m_uValue;
          v12 = v3->m_uValue;
          if ( v3->m_uValue == 0 )
            goto LABEL_17;
          if ( (*(v11 + 11) & 7) != 0 )
          {
            v12 = *(v12 + 12);
            if ( v12 == 0 )
              goto LABEL_17;
            while ( (*(v12 + 11) & 7) != 0 )
            {
              v12 = *(v12 + 12);
              if ( v12 == 0 )
                goto LABEL_17;
            }
          }
LABEL_66:
          v28 = CKeyValues_Data::Internal_GetName(v12);
          v29 = KeyValues::FindKey(this, v28, 0);
          if ( v29 != 0 )
            KeyValues::MergeFrom(v29, v12, v5);
          while ( 1 )
          {
            v12 = *(v12 + 12);
            if ( v12 == 0 )
              break;
            if ( (*(v12 + 11) & 7) == 0 )
              goto LABEL_66;
          }
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) == 0x40 )
          {
            v11 = v3->m_uValue;
LABEL_17:
            v13 = v11;
            if ( v11 != 0 )
            {
              while ( (*(v13 + 11) & 7) == 0 )
              {
                v13 = *(v13 + 12);
                if ( v13 == 0 )
                  return;
              }
LABEL_80:
              v34 = CKeyValues_Data::Internal_GetName(v13);
              v35 = KeyValues::FindKey(this, v34, 0);
              v36 = v35;
              if ( v35 != 0 )
              {
                KeyValues::RemoveSubKey(this, v35, 0);
                KeyValues::RemoveEverything(v36);
                CKeyValues_Data::Internal_ClearData(v36);
                KeyValues::operator delete(v36);
                v37 = KeyValues::MakeCopy(v13);
                KeyValues::AddSubKey(this, v37);
              }
              while ( 1 )
              {
                v13 = *(v13 + 12);
                if ( v13 == 0 )
                  break;
                if ( (*(v13 + 11) & 7) != 0 )
                  goto LABEL_80;
              }
            }
          }
          break;
        case KeyValues::MergeKeyValuesOp_t::MERGE_KV_ADD_ONLY:
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) != 0x40 )
            return;
          v14 = v3->m_uValue;
          v15 = v3->m_uValue;
          if ( v3->m_uValue == 0 )
            goto LABEL_27;
          if ( (*(v14 + 11) & 7) != 0 )
          {
            v15 = *(v15 + 12);
            if ( v15 == 0 )
              goto LABEL_27;
            while ( (*(v15 + 11) & 7) != 0 )
            {
              v15 = *(v15 + 12);
              if ( v15 == 0 )
                goto LABEL_27;
            }
          }
LABEL_60:
          v26 = CKeyValues_Data::Internal_GetName(v15);
          v27 = KeyValues::FindKey(this, v26, 0);
          if ( v27 != 0 )
          {
            KeyValues::MergeFrom(v27, v15, v5);
          }
          else
          {
            v33 = KeyValues::MakeCopy(v15);
            KeyValues::AddSubKey(this, v33);
          }
          while ( 1 )
          {
            v15 = *(v15 + 12);
            if ( v15 == 0 )
              break;
            if ( (*(v15 + 11) & 7) == 0 )
              goto LABEL_60;
          }
          if ( (*(&v3->CKeyValues_Data + 11) & 0x47) == 0x40 )
          {
            v14 = v3->m_uValue;
LABEL_27:
            v16 = v14;
            if ( v14 != 0 )
            {
              while ( (*(v16 + 11) & 7) == 0 )
              {
                v16 = *(v16 + 12);
                if ( v16 == 0 )
                  return;
              }
LABEL_90:
              v41 = CKeyValues_Data::Internal_GetName(v16);
              if ( KeyValues::FindKey(this, v41, 0) == 0 )
              {
                v42 = KeyValues::MakeCopy(v16);
                KeyValues::AddSubKey(this, v42);
              }
              while ( 1 )
              {
                v16 = *(v16 + 12);
                if ( v16 == 0 )
                  break;
                if ( (*(v16 + 11) & 7) != 0 )
                  goto LABEL_90;
              }
            }
          }
          break;
        default:
          return;
      }
      break;
    }
  }
}


// KeyValues::MergeFromTemporary  (line 4440, @0x0000000002f7cd80, libserver.so)  // inlines: CTemporaryKeyValues
// calls: operator new, KeyValuesSystem, KeyValues::MakeCopy, KeyValues::MergeFrom
// callers: CEconItemDefinition::BInitFromKV
CTemporaryKeyValues *__fastcall KeyValues::MergeFromTemporary(
        KeyValues *const this,
        KeyValues *kvMerge,
        KeyValues::MergeKeyValuesOp_t eOp)
{
  CTemporaryKeyValues *v6; // rax
  CTemporaryKeyValues *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r13
  KeyValues *Copy; // r12
  __int64 v14; // rdi
  __int64 v15; // rax

  v6 = operator new(0x10u);
  v6->m_pKeyValues = 0;
  v7 = v6;
  v6->m_hScope = 0;
  v9 = KeyValuesSystem(v8);
  v7->m_hScope = (*(*v9 + 120LL))(v9);
  v11 = KeyValuesSystem(v10);
  v12 = (*(*v11 + 136LL))(v11, v7->m_hScope);
  Copy = KeyValues::MakeCopy(this);
  KeyValues::MergeFrom(Copy, kvMerge, eOp);
  v15 = KeyValuesSystem(v14);
  (*(*v15 + 136LL))(v15, v12);
  v7->m_pKeyValues = Copy;
  return v7;
}


// ParseStringToken  (line 4462, @0x0000000002f73b70, libserver.so)
// callers: KeyValues::FromString
const char *__fastcall ParseStringToken(const char *szStringVal, const char **ppEndOfParse)
{
  const char *result; // rax
  char v3; // di
  unsigned int v4; // ecx
  const char *v5; // rdx
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx

  result = szStringVal;
  v3 = *szStringVal;
  v4 = v3 - 9;
  if ( v4 <= 0x17 && ((1LL << v4) & 0x80001F) != 0 )
  {
    do
    {
      v3 = *++result;
      v8 = *result - 9;
    }
    while ( v8 <= 0x17 && ((1LL << v8) & 0x80001F) != 0 );
  }
  v5 = result;
  if ( v3 != 0 )
  {
    v6 = v3;
    do
    {
      v7 = v6 - 9;
      if ( v7 <= 0x17 && ((1LL << v7) & 0x80001F) != 0 )
        break;
      v6 = *++v5;
    }
    while ( *v5 != 0 );
  }
  if ( ppEndOfParse != 0 )
    *ppEndOfParse = v5;
  return result;
}


// KeyValues::FromString  (line 4481, @0x0000000002f7a280, libserver.so)  // inlines: StringAfterPrefix<char const>, V_strncpy<int>
// calls: KeyValues::operator new, KeyValues::KeyValues, ParseStringToken, _V_strncpy, _V_StringAfterPrefix, V_atoi, KeyValues::SetInt, KeyValues::AddSubKey, V_stricmp_fast, KeyValues::SetString, __stack_chk_fail, KeyValues::operator delete (13 total)
// strings: "#int#", "#empty#"
KeyValues *__fastcall KeyValues::FromString(const char *szName, const char *szStringVal, const char **ppEndOfParse)
{
  const char *v3; // r12
  const char *v4; // rbx
  const char *v5; // rax
  __int64 v6; // rdx
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  char *v11; // rdi
  KeyValues *v12; // rax
  KeyValues *kv; // [rsp+8h] [rbp-258h]
  const char *szEnd; // [rsp+18h] [rbp-248h] BYREF
  char chName[256]; // [rsp+20h] [rbp-240h] BYREF
  char chValue[264]; // [rsp+120h] [rbp-140h] BYREF
  unsigned __int64 v19; // [rsp+228h] [rbp-38h]

  v3 = szName;
  v4 = szStringVal;
  v19 = __readfsqword(0x28u);
  if ( szName == 0 )
    v3 = "";
  if ( szStringVal == 0 )
    v4 = "";
  kv = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(kv, v3);
  if ( kv == 0 )
    return 0;
  memset(chName, 0, sizeof(chName));
  memset(chValue, 0, 0x100u);
  while ( 1 )
  {
    v5 = ParseStringToken(v4, &szEnd);
    if ( *v5 == 0 )
      break;
    if ( *v5 == 125 )
    {
      v4 = v5 + 1;
      break;
    }
    v6 = (szEnd - v5 + 1);
    if ( (szEnd - v5 + 1) > 0x100 )
      v6 = 256;
    _V_strncpy(chName, v5, v6);
    v4 = szEnd;
    if ( chName[0] == 123 )
    {
      v11 = "";
do_sub_key:
      v12 = KeyValues::FromString(v11, v4, &szEnd);
      if ( v12 != 0 )
        KeyValues::AddSubKey(kv, v12);
      v4 = szEnd;
    }
    else
    {
      v7 = ParseStringToken(szEnd, &szEnd);
      if ( *v7 == 125 )
      {
        v4 = v7 + 1;
        KeyValues::SetString(kv, chName, "");
        break;
      }
      v8 = (szEnd - v7 + 1);
      if ( (szEnd - v7 + 1) > 0x100 )
        v8 = 256;
      _V_strncpy(chValue, v7, v8);
      v4 = szEnd;
      if ( chValue[0] == 123 )
      {
        v11 = chName;
        goto do_sub_key;
      }
      v9 = _V_StringAfterPrefix(chValue, "#int#");
      if ( v9 != 0 )
      {
        v10 = V_atoi(v9);
        KeyValues::SetInt(kv, chName, v10);
      }
      else if ( V_stricmp_fast(chValue, "#empty#") != 0 )
      {
        KeyValues::SetString(kv, chName, chValue);
      }
      else
      {
        KeyValues::SetString(kv, chName, "");
      }
    }
  }
  if ( ppEndOfParse != 0 )
    *ppEndOfParse = v4;
  return kv;
}


// CKeyValues_Data::Internal_IsEqual  (line 4573, @0x0000000002f78500, libserver.so)  // inlines: ResolveColorValue, ResolveStringValue, ResolveUint64Value, ResolveWStringValue, _V_strcmp, operator==
// calls: strcmp, _V_wcscmp
// callers: KeyValues::IsEqual
// globals: jpt_2F7852F
bool __fastcall CKeyValues_Data::Internal_IsEqual(CKeyValues_Data *const this, CKeyValues_Data *pRHS)
{
  bool result; // al
  unsigned __int8 v3; // dl
  uintp m_uValue; // rdx
  _QWORD *v5; // rax

  result = 0;
  v3 = *(this + 11);
  if ( ((v3 ^ *(pRHS + 11)) & 7) == 0 )
  {
    switch ( v3 & 7 )
    {
      case 0:
        result = 1;
        break;
      case 1:
        if ( (*(pRHS + 11) & 0x10) != 0 )
          pRHS = pRHS->m_uValue;
        if ( (*(this + 11) & 0x10) != 0 )
          this = this->m_uValue;
        result = strcmp(this, pRHS) == 0;
        break;
      case 2:
        result = this->m_iValue == pRHS->m_iValue;
        break;
      case 3:
        result = this->m_flValue == pRHS->m_flValue;
        break;
      case 4:
        result = this->m_uValue == pRHS->m_uValue;
        break;
      case 5:
        if ( (*(pRHS + 11) & 0x10) != 0 )
          pRHS = pRHS->m_uValue;
        if ( (*(this + 11) & 0x10) != 0 )
          this = this->m_uValue;
        result = _V_wcscmp(&this->0, &pRHS->0) == 0;
        break;
      case 6:
        result = ((pRHS->m_Color[3] << 24) | (pRHS->m_Color[2] << 16) | LOWORD(pRHS->m_flValue)) == ((this->m_Color[3] << 24) | (this->m_Color[2] << 16) | LOWORD(this->m_flValue));
        break;
      case 7:
        if ( (*(this + 11) & 0x10) != 0 )
          m_uValue = *this->m_pValue;
        else
          m_uValue = this->m_uValue;
        v5 = pRHS->m_uValue;
        if ( (*(pRHS + 11) & 0x10) != 0 )
          v5 = *v5;
        result = m_uValue == v5;
        break;
    }
  }
  return result;
}


// KeyValues::IsEqual  (line 4603, @0x0000000002f78640, libserver.so)  // inlines: GetFirstSubKey, GetNextKey, Internal_GetDataType, Internal_GetSubKey, ResolveSubKeyValue
// calls: CKeyValues_Data::Internal_IsEqual
bool __fastcall KeyValues::IsEqual(KeyValues *const this, KeyValues *pRHS)
{
  bool IsEqual; // r13
  char v5; // al
  KeyValues *m_uValue; // r12
  bool v7; // cl
  KeyValues *v8; // rbx
  bool v9; // dl

  if ( pRHS == 0 )
    return 0;
  IsEqual = CKeyValues_Data::Internal_IsEqual(this, pRHS);
  if ( !IsEqual )
    return 0;
  v5 = *(&this->CKeyValues_Data + 11);
  if ( (v5 & 7) == 0 )
  {
    m_uValue = 0;
    v7 = IsEqual;
    if ( (v5 & 0x47) == 0x40 )
    {
      m_uValue = this->m_uValue;
      v7 = this->m_uValue == 0;
    }
    v8 = 0;
    v9 = IsEqual;
    if ( (*(&pRHS->CKeyValues_Data + 11) & 0x47) == 0x40 )
    {
      v8 = pRHS->m_uValue;
      v9 = pRHS->m_uValue == 0;
    }
    if ( v9 )
    {
      if ( v7 )
        return IsEqual;
    }
    else if ( !v7 )
    {
      while ( KeyValues::IsEqual(m_uValue, v8) )
      {
        m_uValue = m_uValue->m_pPeer;
        v8 = v8->m_pPeer;
        if ( v8 == 0 )
        {
          if ( m_uValue != 0 )
            return 0;
          return IsEqual;
        }
        if ( m_uValue == 0 )
          return 0;
      }
    }
    return 0;
  }
  return IsEqual;
}


// KeyValues::Dump  (line 4648, @0x0000000002f78710, libserver.so)  // inlines: GetFirstTrueSubKey, GetFirstValue, GetNextTrueSubKey, GetNextValue, Internal_GetSubKey, ResolveSubKeyValue
// callers: ScriptHelper_CreateEvent, PerformDOTASaveGame, CVProfOGSMode::UploadToDB
bool __fastcall KeyValues::Dump(KeyValues *const this, IKeyValuesDumpContext *pDump, int nIndentLevel)
{
  uintp m_uValue; // rax
  uintp v8; // rbx
  uintp v9; // rbx

  if ( (*pDump->_vptr_IKeyValuesDumpContext)(pDump, this) == 0 )
    return 0;
  if ( this == 0 || (*(&this->CKeyValues_Data + 11) & 0x47) != 0x40 )
    return (*(pDump->_vptr_IKeyValuesDumpContext + 2))(pDump, this, nIndentLevel);
  m_uValue = this->m_uValue;
  v8 = this->m_uValue;
  if ( this->m_uValue != 0 )
  {
    if ( (*(m_uValue + 11) & 7) != 0 )
    {
LABEL_11:
      if ( (*(pDump->_vptr_IKeyValuesDumpContext + 1))(pDump, v8, (nIndentLevel + 1)) == 0 )
        return 0;
      while ( 1 )
      {
        v8 = *(v8 + 12);
        if ( v8 == 0 )
          break;
        if ( (*(v8 + 11) & 7) != 0 )
          goto LABEL_11;
      }
      if ( (*(&this->CKeyValues_Data + 11) & 0x47) != 0x40 )
        return (*(pDump->_vptr_IKeyValuesDumpContext + 2))(pDump, this, nIndentLevel);
      m_uValue = this->m_uValue;
    }
    else
    {
      while ( 1 )
      {
        v8 = *(v8 + 12);
        if ( v8 == 0 )
          break;
        if ( (*(v8 + 11) & 7) != 0 )
          goto LABEL_11;
      }
    }
  }
  v9 = m_uValue;
  if ( m_uValue == 0 )
    return (*(pDump->_vptr_IKeyValuesDumpContext + 2))(pDump, this, nIndentLevel);
  if ( (*(m_uValue + 11) & 7) != 0 )
  {
    do
    {
      v9 = *(v9 + 12);
      if ( v9 == 0 )
        return (*(pDump->_vptr_IKeyValuesDumpContext + 2))(pDump, this, nIndentLevel);
    }
    while ( (*(v9 + 11) & 7) != 0 );
  }
LABEL_21:
  if ( KeyValues::Dump(v9, pDump, nIndentLevel + 1) )
  {
    while ( 1 )
    {
      v9 = *(v9 + 12);
      if ( v9 == 0 )
        return (*(pDump->_vptr_IKeyValuesDumpContext + 2))(pDump, this, nIndentLevel);
      if ( (*(v9 + 11) & 7) == 0 )
        goto LABEL_21;
    }
  }
  return 0;
}


// KeyValues::AddKey  (line 4677, @0x0000000002f78860, libserver.so)  // inlines: Internal_GetSubKey, ResolveSubKeyValue
// calls: KeyValues::operator new, KeyValues::KeyValues, CKeyValues_Data::Internal_ClearData, CKeyValues_Data::Internal_SetSubKey, KeyValues::operator delete, _Unwind_Resume
// callers: DOTA_ExecuteOrders, KeyValues::AddString, KeyValues::AddFloat, KeyValues::AddInt, KeyValues::AddUint64, KeyValues::AddPtr
KeyValues *__fastcall KeyValues::AddKey(KeyValues *const this, const char *keyName)
{
  uintp m_uValue; // rbx
  KeyValues *v5; // r12

  m_uValue = 0;
  if ( (*(&this->CKeyValues_Data + 11) & 0x47) == 0x40 )
  {
    m_uValue = this->m_uValue;
    if ( this->m_uValue != 0 )
    {
      while ( *(m_uValue + 12) != 0 )
        m_uValue = *(m_uValue + 12);
    }
  }
  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, keyName);
  if ( m_uValue != 0 )
  {
    *(m_uValue + 12) = v5;
  }
  else
  {
    CKeyValues_Data::Internal_ClearData(this);
    CKeyValues_Data::Internal_SetSubKey(this, v5);
  }
  v5->m_pPeer = 0;
  return v5;
}


// KeyValues::AddString  (line 4712, @0x0000000002f78900, libserver.so)
// calls: KeyValues::AddKey, CKeyValues_Data::Internal_SetString
// callers: CBaseEntity::ApplySessionPersisterValues
void __fastcall KeyValues::AddString(KeyValues *const this, const char *keyName, const char *value)
{
  KeyValues *v4; // rax

  v4 = KeyValues::AddKey(this, keyName);
  CKeyValues_Data::Internal_SetString(v4, value);
}


// KeyValues::AddFloat  (line 4718, @0x0000000002f78930, libserver.so)  // inlines: Internal_SetFloat
// calls: KeyValues::AddKey, CKeyValues_Data::Internal_ClearData
// callers: CBaseEntity::ApplySessionPersisterValues, CBasePlayer::ApplySessionPersisterValues
void __fastcall KeyValues::AddFloat(KeyValues *const this, const char *keyName, __m128i a3, float value)
{
  int v4; // r14d
  KeyValues *v5; // rax
  KeyValues *v6; // rbx
  char v7; // al

  v4 = _mm_cvtsi128_si32(a3);
  v5 = KeyValues::AddKey(this, keyName);
  v6 = v5;
  if ( v5 != 0 )
  {
    CKeyValues_Data::Internal_ClearData(v5);
    v7 = *(&v6->CKeyValues_Data + 11);
    v6->m_iValue = v4;
    *(&v6->CKeyValues_Data + 11) = v7 & 0xF8 | 3;
  }
}


// KeyValues::AddInt  (line 4727, @0x0000000002f78970, libserver.so)  // inlines: Internal_SetInt
// calls: KeyValues::AddKey, CKeyValues_Data::Internal_ClearData
// callers: CDOTA_Modifier_Slark_ShadowDance::OnCreated
void __fastcall KeyValues::AddInt(KeyValues *const this, const char *keyName, int value)
{
  KeyValues *v4; // rax
  KeyValues *v5; // rbx
  char v6; // al

  v4 = KeyValues::AddKey(this, keyName);
  v5 = v4;
  if ( v4 != 0 )
  {
    CKeyValues_Data::Internal_ClearData(v4);
    v6 = *(&v5->CKeyValues_Data + 11);
    v5->m_iValue = value;
    *(&v5->CKeyValues_Data + 11) = v6 & 0xF8 | 2;
  }
}


// KeyValues::AddUint64  (line 4736, @0x0000000002f789b0, libserver.so)  // inlines: Internal_SetUint64
// calls: KeyValues::AddKey, CKeyValues_Data::Internal_ClearData
void __fastcall KeyValues::AddUint64(KeyValues *const this, const char *keyName, uint64 value)
{
  KeyValues *v4; // rax
  KeyValues *v5; // rbx
  char v6; // al

  v4 = KeyValues::AddKey(this, keyName);
  v5 = v4;
  if ( v4 != 0 )
  {
    CKeyValues_Data::Internal_ClearData(v4);
    v6 = *(&v5->CKeyValues_Data + 11);
    v5->m_uValue = value;
    *(&v5->CKeyValues_Data + 11) = v6 & 0xE8 | 7;
  }
}


// KeyValues::AddPtr  (line 4746, @0x0000000002f789f0, libserver.so)  // inlines: Internal_SetPtr
// calls: KeyValues::AddKey, CKeyValues_Data::Internal_ClearData
void __fastcall KeyValues::AddPtr(KeyValues *const this, const char *keyName, void *value)
{
  KeyValues *v4; // rax
  KeyValues *v5; // rbx
  char v6; // al

  v4 = KeyValues::AddKey(this, keyName);
  v5 = v4;
  if ( v4 != 0 )
  {
    CKeyValues_Data::Internal_ClearData(v4);
    v6 = *(&v5->CKeyValues_Data + 11);
    v5->m_uValue = value;
    *(&v5->CKeyValues_Data + 11) = v6 & 0xF8 | 4;
  }
}


// IKeyValuesDumpContextAsText::KvBeginKey  (line 4759, @0x0000000002f74290, libserver.so)  // inlines: GetName
// calls: CKeyValues_Data::Internal_GetName
// callers: CKeyValuesDumpContextAsDevMsg::KvBeginKey
// strings: "<< NULL >>\n"
bool __fastcall IKeyValuesDumpContextAsText::KvBeginKey(
        IKeyValuesDumpContextAsText *const this,
        KeyValues *pKey,
        int nIndentLevel)
{
  int (**vptr_IKeyValuesDumpContext)(...); // rax
  unsigned __int8 (__fastcall *v6)(IKeyValuesDumpContextAsText *const, const char *); // r13
  const char *Name; // rax

  vptr_IKeyValuesDumpContext = this->_vptr_IKeyValuesDumpContext;
  if ( pKey != 0 )
  {
    if ( vptr_IKeyValuesDumpContext[3](this, nIndentLevel) == 0 )
      return 0;
    v6 = *(this->_vptr_IKeyValuesDumpContext + 4);
    Name = CKeyValues_Data::Internal_GetName(pKey);
    if ( v6(this, Name) == 0 )
      return 0;
    return (*(this->_vptr_IKeyValuesDumpContext + 4))(this, " {\n");
  }
  else
  {
    if ( vptr_IKeyValuesDumpContext[3](this, nIndentLevel) == 0 )
      return 0;
    return (*(this->_vptr_IKeyValuesDumpContext + 4))(this, "<< NULL >>\n");
  }
}


// IKeyValuesDumpContextAsText::KvWriteValue  (line 4776, @0x0000000002f7ce30, libserver.so)  // inlines: GetDataType, GetName, Internal_GetDataType, V_wcslen
// calls: CKeyValues_Data::Internal_GetName, KeyValues::GetUint64, V_snprintf, KeyValues::GetWString, wcslen, KeyValues::GetPtr, KeyValues::GetFloat, KeyValues::GetInt, KeyValues::GetString, __stack_chk_fail
// strings: "<< NULL >>\n", "u64( %lld = 0x%llX )", "%ls [wstring, len = %d]", "ptr( 0x%p )", "float( %f )", "int( %d = 0x%X )"
// globals: jpt_2F7CEE2
bool __fastcall IKeyValuesDumpContextAsText::KvWriteValue(
        IKeyValuesDumpContextAsText *const this,
        KeyValues *val,
        int nIndentLevel)
{
  int (**vptr_IKeyValuesDumpContext)(...); // rax
  unsigned __int8 (__fastcall *v6)(IKeyValuesDumpContextAsText *const, const char *); // r13
  const char *Name; // rax
  bool result; // al
  float v9; // xmm1_4
  uint64 Uint64; // rax
  unsigned __int64 v11; // r12
  const wchar_t *WString; // r15
  size_t v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // r12
  void *Ptr; // rax
  float Float; // xmm0_4
  int Int; // eax
  unsigned __int8 (__fastcall *v19)(IKeyValuesDumpContextAsText *const, const char *); // r13
  const char *String; // rax
  _BYTE v21[144]; // [rsp+2h] [rbp-E0h] BYREF
  size_t v22; // [rsp+92h] [rbp-50h]
  unsigned __int64 v23; // [rsp+AAh] [rbp-38h]

  v23 = __readfsqword(0x28u);
  vptr_IKeyValuesDumpContext = this->_vptr_IKeyValuesDumpContext;
  if ( val == 0 )
  {
    if ( vptr_IKeyValuesDumpContext[3](this, nIndentLevel) != 0 )
      return (*(this->_vptr_IKeyValuesDumpContext + 4))(this, "<< NULL >>\n");
    return 0;
  }
  if ( vptr_IKeyValuesDumpContext[3](this, nIndentLevel) == 0 )
    return 0;
  v6 = *(this->_vptr_IKeyValuesDumpContext + 4);
  Name = CKeyValues_Data::Internal_GetName(val);
  if ( v6(this, Name) == 0 || (*(this->_vptr_IKeyValuesDumpContext + 4))(this, " ") == 0 )
    return 0;
  LOBYTE(v22) = *(&val->CKeyValues_Data + 11);
  switch ( v22 & 7 )
  {
    case 0uLL:
    case 6uLL:
      goto LABEL_11;
    case 1uLL:
      v19 = *(this->_vptr_IKeyValuesDumpContext + 4);
      String = KeyValues::GetString(val, 0, "", 0, 0);
      if ( v19(this, String) == 0 )
        return 0;
      goto LABEL_11;
    case 2uLL:
      Int = KeyValues::GetInt(val, 0, 0);
      v11 = v21 & 0xFFFFFFFFFFFFFFEFLL;
      V_snprintf(v21 & 0xFFFFFFFFFFFFFFEFLL, 128, "int( %d = 0x%X )", Int, Int);
      goto LABEL_10;
    case 3uLL:
      Float = KeyValues::GetFloat(val, 0, 0.0, v9);
      v11 = v21 & 0xFFFFFFFFFFFFFFEFLL;
      V_snprintf(v21 & 0xFFFFFFFFFFFFFFEFLL, 128, "float( %f )", Float);
      goto LABEL_10;
    case 4uLL:
      Ptr = KeyValues::GetPtr(val, 0, 0);
      v11 = v21 & 0xFFFFFFFFFFFFFFEFLL;
      V_snprintf(v21 & 0xFFFFFFFFFFFFFFEFLL, 128, "ptr( 0x%p )", Ptr);
      goto LABEL_10;
    case 5uLL:
      WString = KeyValues::GetWString(val, 0, &dword_33C3BD0, 0, 0);
      v13 = wcslen(WString);
      v14 = 2 * v13 + 64;
      v22 = v13;
      v15 = (**g_pMemAlloc)(g_pMemAlloc, v14);
      V_snprintf(v15, v14, "%ls [wstring, len = %d]", WString, v22);
      LOBYTE(v14) = (*(this->_vptr_IKeyValuesDumpContext + 4))(this, v15);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v15);
      if ( v14 == 0 )
        return 0;
      goto LABEL_11;
    case 7uLL:
      Uint64 = KeyValues::GetUint64(val, 0, 0);
      v11 = v21 & 0xFFFFFFFFFFFFFFEFLL;
      V_snprintf(v21 & 0xFFFFFFFFFFFFFFEFLL, 128, "u64( %lld = 0x%llX )", Uint64, Uint64);
LABEL_10:
      if ( (*(this->_vptr_IKeyValuesDumpContext + 4))(this, v11) == 0 )
        return 0;
LABEL_11:
      result = (*(this->_vptr_IKeyValuesDumpContext + 4))(this, "\n");
      break;
  }
  return result;
}


// IKeyValuesDumpContextAsText::KvEndKey  (line 4872, @0x0000000002f73c20, libserver.so)
bool __fastcall IKeyValuesDumpContextAsText::KvEndKey(
        IKeyValuesDumpContextAsText *const this,
        KeyValues *pKey,
        int nIndentLevel)
{
  bool result; // al

  if ( pKey == 0 )
    return 1;
  result = (*(this->_vptr_IKeyValuesDumpContext + 3))(this, nIndentLevel);
  if ( result )
    return (*(this->_vptr_IKeyValuesDumpContext + 4))(this, "}\n");
  return result;
}


// IKeyValuesDumpContextAsText::KvWriteIndent  (line 4886, @0x0000000002f73cd0, libserver.so)  // inlines: memset
// calls: memset, __stack_chk_fail
bool __fastcall IKeyValuesDumpContextAsText::KvWriteIndent(IKeyValuesDumpContextAsText *const this, int nIndentLevel)
{
  int v3; // ebx
  void *v4; // rsp
  char *v5; // rax
  __int64 v7; // [rsp+10h] [rbp-10h] BYREF

  v3 = 2 * nIndentLevel;
  v4 = alloca(((2 * nIndentLevel + 32) & 0xFFFFFFF0) + 16LL);
  v5 = memset((&v7 & 0xFFFFFFFFFFFFFFEFLL), 32, 2 * nIndentLevel);
  v5[v3] = 0;
  return (*(this->_vptr_IKeyValuesDumpContext + 4))(this, v5);
}


// CKeyValuesDumpContextAsDevMsg::KvBeginKey  (line 4896, @0x0000000002f74320, libserver.so)
// calls: __cxa_guard_acquire, ConVarRef::IsValid, IKeyValuesDumpContextAsText::KvBeginKey, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "developer"
// globals: `guard variable for'CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer, CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer
bool __fastcall CKeyValuesDumpContextAsDevMsg::KvBeginKey(
        CKeyValuesDumpContextAsDevMsg *const this,
        KeyValues *pKey,
        int nIndentLevel)
{
  if ( `guard variable for'CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer == 0
    && __cxa_guard_acquire(&`guard variable for'CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer) != 0 )
  {
    ConVarRef::ConVarRef(&CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer, "developer");
    __cxa_guard_release(&`guard variable for'CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer);
  }
  return (!ConVarRef::IsValid(&CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer)
       || this->m_nDeveloperLevel <= CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues *,int)::r_developer.m_pConVarState->m_Value.m_nValue)
      && IKeyValuesDumpContextAsText::KvBeginKey(this, pKey, nIndentLevel);
}


// CKeyValuesDumpContextAsDevMsg::KvWriteText  (line 4906, @0x0000000002f73d60, libserver.so)
// calls: DevMsg, Msg
bool __fastcall CKeyValuesDumpContextAsDevMsg::KvWriteText(
        CKeyValuesDumpContextAsDevMsg *const this,
        const char *szText)
{
  __int64 m_nDeveloperLevel; // rdi

  m_nDeveloperLevel = this->m_nDeveloperLevel;
  if ( m_nDeveloperLevel <= 0 )
    Msg("%s", szText);
  else
    DevMsg(m_nDeveloperLevel, "%s", szText);
  return 1;
}


// KeyValues::KVJSONParserCreateNewSubNode  (line 4919, @0x0000000002f7e4a0, libserver.so)  // inlines: AddToTail, CNumStr, Clear, GrowMemory, SetUint32, operator[]
// calls: KeyValues::CreatePeerKey, CUtlBuffer::AddNullTermination, V_snprintf, KeyValues::CreateKey, CUtlMemory<KVJSONParserStackEntry_t, int>::Grow, __stack_chk_fail
// callers: KeyValues::JSONParserCallback
KeyValues *__fastcall KeyValues::KVJSONParserCreateNewSubNode(KVJSONParserContext_t *ctx, bool bPush)
{
  KVJSONParserStackEntry_t *v4; // r12
  CNumStr *p_numStr; // rsi
  KeyValues *m_pLastSubNode; // rdi
  KeyValues *PeerKey; // rax
  KeyValues *v8; // r13
  KeyValues *Key; // rax
  __int64 m_Size; // r12
  int v12; // eax
  KVJSONParserStackEntry_t *v13; // rax
  CNumStr numStr; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  numStr.m_szBuf[0] = 0;
  v15 = __readfsqword(0x28u);
  v4 = &ctx->m_vecStack.m_Memory.m_pMemory[ctx->m_vecStack.m_Size - 1];
  if ( ctx->m_bufNextChildName.m_Put != 0
    && (p_numStr = ctx->m_bufNextChildName.m_Memory.m_pMemory) != 0
    && p_numStr->m_szBuf[0] != 0 )
  {
    m_pLastSubNode = v4->m_pLastSubNode;
    if ( m_pLastSubNode != 0 )
      goto LABEL_5;
  }
  else
  {
    V_snprintf(&numStr, 28, "%u", v4->m_unSubNodes);
    m_pLastSubNode = v4->m_pLastSubNode;
    p_numStr = &numStr;
    if ( m_pLastSubNode != 0 )
    {
LABEL_5:
      PeerKey = KeyValues::CreatePeerKey(m_pLastSubNode, p_numStr->m_szBuf);
      ++v4->m_unSubNodes;
      v8 = PeerKey;
      v4->m_pLastSubNode = PeerKey;
      if ( !bPush )
        goto LABEL_6;
      goto LABEL_9;
    }
  }
  Key = KeyValues::CreateKey(v4->m_pNode, p_numStr->m_szBuf);
  ++v4->m_unSubNodes;
  v8 = Key;
  v4->m_pLastSubNode = Key;
  if ( bPush )
  {
LABEL_9:
    m_Size = ctx->m_vecStack.m_Size;
    v12 = ctx->m_vecStack.m_Size;
    if ( m_Size == ctx->m_vecStack.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<KVJSONParserStackEntry_t,int>::Grow(&ctx->m_vecStack.m_Memory, 1);
      v12 = ctx->m_vecStack.m_Size;
    }
    ctx->m_vecStack.m_Size = v12 + 1;
    v13 = &ctx->m_vecStack.m_Memory.m_pMemory[m_Size];
    v13->m_pNode = v8;
    v13->m_pLastSubNode = 0;
    v13->m_unSubNodes = 0;
  }
LABEL_6:
  ctx->m_bufNextChildName.m_Get = 0;
  ctx->m_bufNextChildName.m_Put = 0;
  ctx->m_bufNextChildName.m_Error = 0;
  ctx->m_bufNextChildName.m_nOffset = 0;
  ctx->m_bufNextChildName.m_nMaxPut = -1;
  CUtlBuffer::AddNullTermination(&ctx->m_bufNextChildName);
  return v8;
}


// KeyValues::JSONParserCallback  (line 4952, @0x0000000002f7e610, libserver.so)  // inlines: AddToTail, Clear, GrowMemory
// calls: KeyValues::operator new, KeyValues::KeyValues, CUtlBuffer::AddNullTermination, CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Remove, KeyValues::KVJSONParserCreateNewSubNode, CUtlBuffer::Put, KeyValues::SetInt, KeyValues::SetPtr, KeyValues::SetFloat, KeyValues::SetString, KeyValues::SetUint64, CUtlMemory<KVJSONParserStackEntry_t, int>::Grow (14 total)
// globals: jpt_2F7E63D, jpt_2F7E713
int __fastcall KeyValues::JSONParserCallback(void *void_ctx, int type, const JSON_value *value)
{
  int v6; // eax
  const char *v7; // r14
  __int64 v8; // r12
  KeyValues *v9; // r13
  int result; // eax
  KeyValues *NewSubNode; // rax
  float v12; // xmm1_4
  CUtlBuffer *v13; // r12
  JSON_int_t integer_value; // rdx
  KeyValues *v15; // rdi

  switch ( type )
  {
    case 1:
      v6 = *void_ctx;
      if ( *void_ctx != 0 )
        goto LABEL_15;
      if ( *(void_ctx + 4) == 0 )
      {
        CUtlMemory<KVJSONParserStackEntry_t,int>::Grow((void_ctx + 8), 1);
        v6 = *void_ctx;
      }
      goto LABEL_5;
    case 2:
    case 4:
      if ( *void_ctx <= 1 )
        goto LABEL_6;
      CUtlVectorBase<KVJSONParserStackEntry_t,CUtlMemory<KVJSONParserStackEntry_t,int>>::Remove(void_ctx, *void_ctx - 1);
      result = 1;
      break;
    case 3:
      v6 = *void_ctx;
      if ( *void_ctx != 0 )
      {
LABEL_15:
        KeyValues::KVJSONParserCreateNewSubNode(void_ctx, 1);
        result = 1;
      }
      else
      {
        if ( *(void_ctx + 4) == 0 )
        {
          CUtlMemory<KVJSONParserStackEntry_t,int>::Grow((void_ctx + 8), 1);
          v6 = *void_ctx;
        }
LABEL_5:
        v7 = *(void_ctx + 3);
        *void_ctx = v6 + 1;
        v8 = *(void_ctx + 1);
        v9 = KeyValues::operator new(0x14u);
        KeyValues::KeyValues(v9, v7);
        *v8 = v9;
        *(v8 + 8) = 0;
        *(v8 + 16) = 0;
        *(void_ctx + 10) = 0;
        *(void_ctx + 11) = 0;
        *(void_ctx + 48) = 0;
        *(void_ctx + 15) = 0;
        *(void_ctx + 14) = -1;
        CUtlBuffer::AddNullTermination((void_ctx + 24));
LABEL_6:
        result = 1;
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      NewSubNode = KeyValues::KVJSONParserCreateNewSubNode(void_ctx, 0);
      switch ( type )
      {
        case 6:
          KeyValues::SetFloat(NewSubNode, 0, _mm_cvtpd_ps(value->vu.integer_value), v12);
          break;
        case 7:
          KeyValues::SetPtr(NewSubNode, 0, 0);
          break;
        case 8:
          KeyValues::SetInt(NewSubNode, 0, 1);
          break;
        case 9:
          LODWORD(integer_value) = 0;
          v15 = NewSubNode;
          goto LABEL_20;
        case 10:
          KeyValues::SetString(NewSubNode, 0, value->vu.str.value);
          break;
        default:
          integer_value = value->vu.integer_value;
          v15 = NewSubNode;
          if ( (value->vu.integer_value + 0x80000000LL) <= 0xFFFFFFFF )
LABEL_20:
            KeyValues::SetInt(v15, 0, integer_value);
          else
            KeyValues::SetUint64(NewSubNode, 0, integer_value);
          break;
      }
      goto LABEL_6;
    case 11:
      v13 = (void_ctx + 24);
      *(void_ctx + 10) = 0;
      *(void_ctx + 11) = 0;
      *(void_ctx + 48) = 0;
      *(void_ctx + 15) = 0;
      *(void_ctx + 14) = -1;
      CUtlBuffer::AddNullTermination((void_ctx + 24));
      CUtlBuffer::Put(v13, value->vu.str.value, LODWORD(value->vu.str.length) + 1);
      return 1;
    default:
      goto LABEL_6;
  }
  return result;
}


// KeyValues::FromJSON  (line 5070, @0x0000000002f79690, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetBytesRemaining, GetFirstValue, Internal_GetSubKey, KVJSONParserContext_t, PeekGet, Purge, RemoveAll, ResolveSubKeyValue, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~KVJSONParserContext_t
// calls: CUtlBuffer::EatWhiteSpace, CUtlBuffer::CUtlBuffer, init_JSON_config, new_JSON_parser, JSON_parser_string, JSON_parser_done, delete_JSON_parser, CUtlMemory<unsigned char, int>::Purge, JSON_parser_char, KeyValues::RemoveSubKey, KeyValues::deleteThis, CUtlMemory<KVJSONParserStackEntry_t, int>::Purge (14 total)
// globals: KeyValues::JSONParserCallback(void *,int,JSON_value_struct const*)
KeyValues *__fastcall KeyValues::FromJSON(CUtlBuffer *const inputBuffer)
{
  int m_nMaxPut; // r14d
  int m_Get; // r12d
  int v4; // r14d
  const char *v5; // r12
  bool v6; // zf
  bool v7; // r15
  JSON_parser_struct *v8; // rax
  JSON_parser_struct *v9; // r13
  int v10; // r12d
  KeyValues *m_pNode; // r12
  int m_Size; // eax
  KVJSONParserStackEntry_t *m_pMemory; // rdx
  KeyValues *v15; // r13
  uintp m_uValue; // r12
  JSON_config config; // [rsp+0h] [rbp-D0h] BYREF
  KVJSONParserContext_t context; // [rsp+30h] [rbp-A0h] BYREF

  CUtlBuffer::EatWhiteSpace(inputBuffer);
  m_nMaxPut = inputBuffer->m_nMaxPut;
  m_Get = inputBuffer->m_Get;
  if ( m_nMaxPut == m_Get )
    return 0;
  v4 = m_nMaxPut - m_Get;
  v5 = &inputBuffer->m_Memory.m_pMemory[m_Get - inputBuffer->m_nOffset];
  v6 = *v5 == 34;
  context.m_vecStack.m_Size = 0;
  context.m_vecStack.m_Memory.m_pMemory = 0;
  context.m_vecStack.m_Memory.m_nAllocationCount = 0;
  context.m_vecStack.m_Memory.m_nGrowSize = 0;
  v7 = v6;
  CUtlBuffer::CUtlBuffer(&context.m_bufNextChildName, 0, 0, 0);
  init_JSON_config(&config);
  config.depth = 19;
  config.callback = KeyValues::JSONParserCallback;
  config.allow_comments = 1;
  config.handle_floats_manually = 0;
  config.callback_ctx = &context;
  config.malloc = &MemAlloc_AllocFunc;
  config.free = &MemAlloc_FreeFunc;
  v8 = new_JSON_parser(&config);
  v9 = v8;
  if ( v7 )
    JSON_parser_char(v8, 123);
  v10 = JSON_parser_string(v9, v5, v4);
  if ( v7 )
    JSON_parser_char(v9, 125);
  if ( v10 != 0 )
    LOBYTE(v10) = JSON_parser_done(v9) != 0;
  delete_JSON_parser(v9);
  if ( v10 == 0 )
  {
    m_Size = context.m_vecStack.m_Size;
LABEL_17:
    if ( m_Size == 0 )
      goto LABEL_11;
    m_pMemory = context.m_vecStack.m_Memory.m_pMemory;
LABEL_23:
    KeyValues::deleteThis(m_pMemory->m_pNode);
    goto LABEL_11;
  }
  if ( !v7 )
  {
LABEL_16:
    m_Size = context.m_vecStack.m_Size;
    if ( context.m_vecStack.m_Size == 1 )
    {
      m_pNode = context.m_vecStack.m_Memory.m_pMemory->m_pNode;
      goto LABEL_12;
    }
    goto LABEL_17;
  }
  if ( context.m_vecStack.m_Size != 0 )
  {
    m_pMemory = context.m_vecStack.m_Memory.m_pMemory;
    v15 = context.m_vecStack.m_Memory.m_pMemory[context.m_vecStack.m_Size - 1].m_pNode;
    if ( v15 == 0 )
      goto LABEL_23;
    if ( (*(&v15->CKeyValues_Data + 11) & 0x47) != 0x40 )
      goto LABEL_23;
    m_uValue = v15->m_uValue;
    if ( v15->m_uValue == 0 )
      goto LABEL_23;
    while ( (*(m_uValue + 11) & 7) == 0 )
    {
      m_uValue = *(m_uValue + 12);
      if ( m_uValue == 0 )
        goto LABEL_23;
    }
    if ( *(m_uValue + 12) != 0 )
      goto LABEL_23;
    KeyValues::RemoveSubKey(v15, m_uValue, 0);
    KeyValues::deleteThis(v15);
    context.m_vecStack.m_Memory.m_pMemory[context.m_vecStack.m_Size - 1].m_pNode = m_uValue;
    goto LABEL_16;
  }
LABEL_11:
  m_pNode = 0;
LABEL_12:
  CUtlMemory<unsigned char,int>::Purge(&context.m_bufNextChildName.m_Memory);
  context.m_vecStack.m_Size = 0;
  if ( (context.m_vecStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<KVJSONParserStackEntry_t,int>::Purge(&context.m_vecStack.m_Memory);
    if ( (context.m_vecStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<KVJSONParserStackEntry_t,int>::Purge(&context.m_vecStack.m_Memory);
  }
  return m_pNode;
}


// CTemporaryKeyValues::CTemporaryKeyValues  (line 5228, @0x0000000002f78a30, libserver.so)
void __fastcall CTemporaryKeyValues::CTemporaryKeyValues(CTemporaryKeyValues *const this)
{
  this->m_pKeyValues = 0;
  this->m_hScope = 0;
}


// CTemporaryKeyValues::~CTemporaryKeyValues  (line 5232, @0x0000000002f78a50, libserver.so)
// calls: KeyValuesSystem
// callers: CDOTAGameManager::ReloadPortraitData, CEconItemSchema::BInit, CEconItemDefinition::BInitFromKV, CEconItemSchema::BInitBinaryBuffer, CEconItemSchema::BInitTextBuffer
void __fastcall CTemporaryKeyValues::~CTemporaryKeyValues(CTemporaryKeyValues *const this)
{
  __int64 v2; // rax

  v2 = KeyValuesSystem(this);
  (*(*v2 + 128LL))(v2, this->m_hScope);
}


// KeyValues::LoadTemporaryFromFile  (line 5237, @0x0000000002f7e180, libserver.so)  // inlines: CTemporaryKeyValues, Internal_SetHasEscapeSequences, UsesEscapeSequences
// calls: operator new, KeyValuesSystem, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::operator delete, _Unwind_Resume
// callers: CDOTAGameManager::ReloadPortraitData, CEconItemSchema::BInit
CTemporaryKeyValues *__fastcall KeyValues::LoadTemporaryFromFile(
        bool bUseEscapeSequences,
        IBaseFileSystem *pFileSystem,
        const char *pFileName,
        const char *pPathID,
        GetSymbolProc_t pfnEvaluateSymbolProc)
{
  CTemporaryKeyValues *v8; // rax
  CTemporaryKeyValues *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  KeyValues *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  KeyValues *v17; // rdx
  HTemporaryKeyValueAllocationScope hPrevScope; // [rsp+18h] [rbp-38h]

  v8 = operator new(0x10u);
  v8->m_pKeyValues = 0;
  v9 = v8;
  v8->m_hScope = 0;
  v11 = KeyValuesSystem(v10);
  v9->m_hScope = (*(*v11 + 120LL))(v11);
  v13 = KeyValuesSystem(v12);
  hPrevScope = (*(*v13 + 136LL))(v13, v9->m_hScope);
  v14 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v14, "");
  *(&v14->CKeyValues_Data + 11) = (8 * bUseEscapeSequences) | *(&v14->CKeyValues_Data + 11) & 0xF7;
  LOBYTE(pPathID) = KeyValues::LoadFromFile(v14, pFileSystem, pFileName, pPathID, pfnEvaluateSymbolProc);
  v16 = KeyValuesSystem(v15);
  (*(*v16 + 136LL))(v16, hPrevScope);
  v17 = 0;
  if ( pPathID != 0 )
    v17 = v14;
  v9->m_pKeyValues = v17;
  return v9;
}


// KeyValues::ReadTemporaryAsBinary  (line 5257, @0x0000000002f7c250, libserver.so)  // inlines: CTemporaryKeyValues, Internal_SetHasEscapeSequences, UsesEscapeSequences
// calls: operator new, KeyValuesSystem, KeyValues::operator new, KeyValues::KeyValues, KeyValues::ReadAsBinary, KeyValues::operator delete, _Unwind_Resume
// callers: CEconItemSchema::BInitBinaryBuffer
CTemporaryKeyValues *__fastcall KeyValues::ReadTemporaryAsBinary(bool bUseEscapeSequences, CUtlBuffer *const buffer)
{
  CTemporaryKeyValues *v4; // rax
  CTemporaryKeyValues *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  KeyValues *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rax
  KeyValues *v14; // rdx

  v4 = operator new(0x10u);
  v4->m_pKeyValues = 0;
  v5 = v4;
  v4->m_hScope = 0;
  v7 = KeyValuesSystem(v6);
  v5->m_hScope = (*(*v7 + 120LL))(v7);
  v9 = KeyValuesSystem(v8);
  v10 = (*(*v9 + 136LL))(v9, v5->m_hScope);
  v11 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v11, "");
  *(&v11->CKeyValues_Data + 11) = (8 * bUseEscapeSequences) | *(&v11->CKeyValues_Data + 11) & 0xF7;
  LOBYTE(buffer) = KeyValues::ReadAsBinary(v11, buffer);
  v13 = KeyValuesSystem(v12);
  (*(*v13 + 136LL))(v13, v10);
  v14 = 0;
  if ( buffer != 0 )
    v14 = v11;
  v5->m_pKeyValues = v14;
  return v5;
}


// KeyValues::LoadTemporaryFromBuffer  (line 5277, @0x0000000002f7e390, libserver.so)  // inlines: CTemporaryKeyValues, Internal_SetHasEscapeSequences, UsesEscapeSequences
// calls: operator new, KeyValuesSystem, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromBuffer, KeyValues::operator delete, _Unwind_Resume
// callers: CEconItemSchema::BInitTextBuffer
CTemporaryKeyValues *__fastcall KeyValues::LoadTemporaryFromBuffer(
        bool bUseEscapeSequences,
        const char *pResourceName,
        CUtlBuffer *const buf,
        IBaseFileSystem *pFileSystem,
        const char *pPathID,
        GetSymbolProc_t pfnEvaluateSymbolProc)
{
  CTemporaryKeyValues *v9; // rax
  CTemporaryKeyValues *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  KeyValues *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rax
  KeyValues *v18; // rdx
  HTemporaryKeyValueAllocationScope hPrevScope; // [rsp+28h] [rbp-38h]

  v9 = operator new(0x10u);
  v9->m_pKeyValues = 0;
  v10 = v9;
  v9->m_hScope = 0;
  v12 = KeyValuesSystem(v11);
  v10->m_hScope = (*(*v12 + 120LL))(v12);
  v14 = KeyValuesSystem(v13);
  hPrevScope = (*(*v14 + 136LL))(v14, v10->m_hScope);
  v15 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v15, "");
  *(&v15->CKeyValues_Data + 11) = (8 * bUseEscapeSequences) | *(&v15->CKeyValues_Data + 11) & 0xF7;
  LOBYTE(pPathID) = KeyValues::LoadFromBuffer(v15, pResourceName, buf, pFileSystem, pPathID, pfnEvaluateSymbolProc, 0);
  v17 = KeyValuesSystem(v16);
  (*(*v17 + 136LL))(v17, hPrevScope);
  v18 = 0;
  if ( pPathID != 0 )
    v18 = v15;
  v10->m_pKeyValues = v18;
  return v10;
}


// KeyValues::LoadTemporaryFromBuffer  (line 5297, @0x0000000002f7e280, libserver.so)  // inlines: CTemporaryKeyValues, Internal_SetHasEscapeSequences, UsesEscapeSequences
// calls: operator new, KeyValuesSystem, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromBuffer, KeyValues::operator delete, _Unwind_Resume
CTemporaryKeyValues *__fastcall KeyValues::LoadTemporaryFromBuffer(
        bool bUseEscapeSequences,
        const char *resourceName,
        const char *pBuffer,
        IBaseFileSystem *pFileSystem,
        const char *pPathID,
        GetSymbolProc_t pfnEvaluateSymbolProc,
        IKeyValuesErrorSpew *pErrorSpew)
{
  CTemporaryKeyValues *v10; // rax
  CTemporaryKeyValues *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  KeyValues *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  KeyValues *v19; // rdx
  HTemporaryKeyValueAllocationScope hPrevScope; // [rsp+28h] [rbp-38h]

  v10 = operator new(0x10u);
  v10->m_pKeyValues = 0;
  v11 = v10;
  v10->m_hScope = 0;
  v13 = KeyValuesSystem(v12);
  v11->m_hScope = (*(*v13 + 120LL))(v13);
  v15 = KeyValuesSystem(v14);
  hPrevScope = (*(*v15 + 136LL))(v15, v11->m_hScope);
  v16 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v16, "");
  *(&v16->CKeyValues_Data + 11) = (8 * bUseEscapeSequences) | *(&v16->CKeyValues_Data + 11) & 0xF7;
  LOBYTE(pPathID) = KeyValues::LoadFromBuffer(
                      v16,
                      resourceName,
                      pBuffer,
                      pFileSystem,
                      pPathID,
                      pfnEvaluateSymbolProc,
                      pErrorSpew);
  v18 = KeyValuesSystem(v17);
  (*(*v18 + 136LL))(v18, hPrevScope);
  v19 = 0;
  if ( pPathID != 0 )
    v19 = v16;
  v11->m_pKeyValues = v19;
  return v11;
}


