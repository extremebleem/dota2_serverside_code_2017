
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_response_types.cpp  (line 0, @0x0000000001a6a560, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_response_types_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// Matcher::Matcher  (line 24, @0x00000000030f6840, libserver.so)  // inlines: CUtlSymbol
void __fastcall Matcher::Matcher(Matcher *const this)
{
  this->token.m_Id = -1;
  this->rawtoken.m_Id = -1;
  *(this + 8) &= 0x80u;
  this->maxval = 0.0;
  this->minval = 0.0;
}


// Matcher::Describe  (line 40, @0x00000000030f6870, libserver.so)  // inlines: CUtlSymbol, GetToken, IsValid, V_strncat<long unsigned int>
// calls: V_snprintf, _V_strncat, DevMsg(char const*,...), CUtlSymbolTable::String, __stack_chk_fail
// strings: "<%s%.3f", " and ", "    matcher:  %s\n", ">%s%.3f", "    invalid!\n", "    matcher:  !=%s\n" (7 total)
void __fastcall Matcher::Describe(Matcher *const this)
{
  char v2; // al
  int v3; // r13d
  const char *v4; // rcx
  const char *v5; // rcx
  char *v6; // rsi
  bool v7; // zf
  UtlSymId_t m_Id; // ax
  CUtlSymbol id; // [rsp+0h] [rbp-140h] BYREF
  char sz[128]; // [rsp+10h] [rbp-130h] BYREF
  char sz2[128]; // [rsp+90h] [rbp-B0h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  v2 = *(this + 8);
  if ( (v2 & 1) != 0 )
  {
    sz[0] = 0;
    if ( (v2 & 8) != 0 )
    {
      v3 = 1;
      v5 = "=";
      if ( (v2 & 0x10) == 0 )
        v5 = "";
      V_snprintf(sz, 128, ">%s%.3f", v5, this->minval);
      v2 = *(this + 8);
      if ( (v2 & 0x20) == 0 )
        goto LABEL_10;
      goto LABEL_5;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v3 = 0;
LABEL_5:
      v4 = "=";
      if ( (v2 & 0x40) == 0 )
        v4 = "";
      V_snprintf(sz2, 128, "<%s%.3f", v4, this->maxval);
      if ( v3 == 1 )
        _V_strncat(sz, " and ", 128, 0xFFFFFFFFLL);
      _V_strncat(sz, sz2, 128, 0xFFFFFFFFLL);
LABEL_10:
      DevMsg("    matcher:  %s\n", sz);
      return;
    }
    v6 = "";
    v7 = (v2 & 4) == 0;
    m_Id = this->token.m_Id;
    if ( v7 )
    {
      if ( m_Id != 0xFFFF )
      {
        id.m_Id = this->token.m_Id;
        v6 = CUtlSymbolTable::String(&g_ResponseSymbolTable, &id.m_Id);
      }
      DevMsg("    matcher:  ==%s\n", v6);
    }
    else
    {
      if ( m_Id != 0xFFFF )
      {
        id.m_Id = this->token.m_Id;
        v6 = CUtlSymbolTable::String(&g_ResponseSymbolTable, &id.m_Id);
      }
      DevMsg("    matcher:  !=%s\n", v6);
    }
  }
  else
  {
    DevMsg("    invalid!\n");
  }
}


// Matcher::SetToken  (line 84, @0x00000000030f6a60, libserver.so)  // inlines: operator=
// calls: CUtlSymbolTable::AddString
// callers: CResponseSystem::ComputeMatcher
void __fastcall Matcher::SetToken(Matcher *const this, const char *s)
{
  UtlSymId_t v3[16]; // [rsp+0h] [rbp-20h] BYREF

  CUtlSymbolTable::AddString(v3, &g_ResponseSymbolTable, s);
  this->token.m_Id = v3[0];
}


// Matcher::SetRaw  (line 89, @0x00000000030f6a90, libserver.so)  // inlines: operator=
// calls: CUtlSymbolTable::AddString
// callers: CResponseSystem::ComputeMatcher
void __fastcall Matcher::SetRaw(Matcher *const this, const char *raw)
{
  UtlSymId_t v3[16]; // [rsp+0h] [rbp-20h] BYREF

  CUtlSymbolTable::AddString(v3, &g_ResponseSymbolTable, raw);
  this->rawtoken.m_Id = v3[0];
}


// Matcher::GetToken  (line 94, @0x00000000030f6ac0, libserver.so)  // inlines: CUtlSymbol, IsValid
// calls: CUtlSymbolTable::String
// callers: CResponseSystem::CompareUsingMatcherDota, CResponseSystem::CompareUsingMatcherL4D, CResponseSystem::CompareUsingMatcherNew, Crr2LibPort::CreateNewRRDBFromOld
const char *__fastcall Matcher::GetToken(const Matcher *const this)
{
  __int64 v1; // rbp
  UtlSymId_t m_Id; // dx
  const char *result; // rax
  _QWORD v4[3]; // [rsp-18h] [rbp-18h] BYREF

  m_Id = this->token.m_Id;
  result = "";
  if ( m_Id != 0xFFFF )
  {
    v4[2] = v1;
    LOWORD(v4[0]) = m_Id;
    return CUtlSymbolTable::String(&g_ResponseSymbolTable, v4);
  }
  return result;
}


// Matcher::GetRaw  (line 103, @0x00000000030f6af0, libserver.so)  // inlines: CUtlSymbol, IsValid
// calls: CUtlSymbolTable::String
const char *__fastcall Matcher::GetRaw(Matcher *const this)
{
  __int64 v1; // rbp
  UtlSymId_t m_Id; // dx
  const char *result; // rax
  _QWORD v4[3]; // [rsp-18h] [rbp-18h] BYREF

  m_Id = this->rawtoken.m_Id;
  result = "";
  if ( m_Id != 0xFFFF )
  {
    v4[2] = v1;
    LOWORD(v4[0]) = m_Id;
    return CUtlSymbolTable::String(&g_ResponseSymbolTable, v4);
  }
  return result;
}


// Criteria::Criteria  (line 114, @0x00000000030f6b20, libserver.so)  // inlines: CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlSymbol, Matcher, SetFloat
// callers: CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CUtlDict<Criteria, short int>::Insert, CResponseSystem::CopyCriteriaFrom, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Find, CResponseFileParser::ParseRule_Criteria, CResponseFileParser::ParseOneCriterion
void __fastcall Criteria::Criteria(Criteria *const this)
{
  this->nameSym.m_Id = -1;
  *(&this->matcher + 8) &= 0x80u;
  this->matcher.token.m_Id = -1;
  this->matcher.rawtoken.m_Id = -1;
  this->matcher.maxval = 0.0;
  this->matcher.minval = 0.0;
  this->subcriteria.m_nCount = 0;
  this->subcriteria.m_nAllocated = 6;
  this->value = 0;
  this->weight.m_storage.rawWord = 15360;
  this->required = 0;
}


// Criteria::Criteria  (line 120, @0x00000000030f7a90, libserver.so)  // inlines: CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlSymbol, Matcher, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// calls: Criteria::operator=, CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>::Purge, _Unwind_Resume
// callers: CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode
void __fastcall Criteria::Criteria(Criteria *const this, const Criteria *const src)
{
  *(&this->matcher + 8) &= 0x80u;
  this->matcher.token.m_Id = -1;
  this->nameSym.m_Id = -1;
  this->matcher.rawtoken.m_Id = -1;
  this->matcher.maxval = 0.0;
  this->matcher.minval = 0.0;
  this->subcriteria.m_nCount = 0;
  this->subcriteria.m_nAllocated = 6;
  Criteria::operator=(this, src);
}


// Criteria::~Criteria  (line 125, @0x00000000030f6b80, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// callers: CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::RemoveAll, CUtlDict<Criteria, short int>::Insert, CResponseSystem::CopyCriteriaFrom, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Find, CResponseFileParser::ParseRule_Criteria, CResponseFileParser::ParseOneCriterion
void __fastcall Criteria::~Criteria(Criteria *const this)
{
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v3)(_QWORD *, CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *); // rdx

  this->subcriteria.m_nCount = 0;
  m_nAllocated = this->subcriteria.m_nAllocated;
  if ( m_nAllocated > 6 )
  {
    v3 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v3(g_pMemAlloc, this->subcriteria.m_pElements);
    else
      v3(g_pMemAlloc, 0);
    this->subcriteria.m_nAllocated = 6;
  }
  else
  {
    this->subcriteria.m_nAllocated = 6;
  }
}


// Criteria::operator=  (line 130, @0x00000000030f6bf0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Base, Element, EnsureCapacity, LeafCodeInfo_t, memcpy, operator=, operator[]
// calls: ResponseCopyString, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: Criteria::Criteria, CUtlDict<Criteria, short int>::Insert
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
Criteria *__fastcall Criteria::operator=(Criteria *const this, const Criteria *const src)
{
  const char *v3; // rax
  const Criteria *v4; // r8
  unsigned __int64 m_nAllocated; // rdx
  int v6; // ebx
  int v7; // r13d
  __int64 v8; // rax
  const Criteria *v9; // r15
  unsigned __int64 v10; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v11; // r9
  __int64 m_nCount; // r14
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v13; // r13
  unsigned __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v15; // dx
  int v16; // ecx
  int v17; // ebx
  int v18; // edx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v19; // rcx
  int v21; // esi
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v22; // rax
  void *v23; // rcx
  unsigned __int64 v24; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v25; // rsi
  int v26; // eax
  void *v27; // rcx
  unsigned __int64 v28; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rsi
  int v30; // ecx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  const Criteria *v36; // [rsp+0h] [rbp-60h]
  const Criteria *v37; // [rsp+0h] [rbp-60h]
  const Criteria *srcb; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v40; // [rsp+10h] [rbp-50h] BYREF

  if ( this == src )
    return this;
  this->nameSym.m_Id = src->nameSym.m_Id;
  v3 = ResponseCopyString(src->value);
  v4 = src;
  this->value = v3;
  this->weight.m_storage.rawWord = src->weight.m_storage.rawWord;
  this->required = src->required;
  LOBYTE(v3) = *(&this->matcher + 8);
  this->matcher.maxval = src->matcher.maxval;
  this->matcher.minval = src->matcher.minval;
  LOBYTE(v3) = *(&src->matcher + 8) & 1 | v3 & 0xFE;
  *(&this->matcher + 8) = v3;
  LOBYTE(v3) = *(&src->matcher + 8) & 2 | v3 & 0xFD;
  *(&this->matcher + 8) = v3;
  LOBYTE(v3) = *(&src->matcher + 8) & 4 | v3 & 0xFB;
  *(&this->matcher + 8) = v3;
  LOBYTE(v3) = *(&src->matcher + 8) & 8 | v3 & 0xF7;
  *(&this->matcher + 8) = v3;
  LOBYTE(v3) = *(&src->matcher + 8) & 0x10 | v3 & 0xEF;
  *(&this->matcher + 8) = v3;
  LOBYTE(v3) = *(&src->matcher + 8) & 0x20 | v3 & 0xDF;
  *(&this->matcher + 8) = v3;
  m_nAllocated = this->subcriteria.m_nAllocated;
  *(&this->matcher + 8) = *(&src->matcher + 8) & 0x40 | v3 & 0xBF;
  this->matcher.token.m_Id = src->matcher.token.m_Id;
  this->matcher.rawtoken.m_Id = src->matcher.rawtoken.m_Id;
  LOWORD(v6) = src->subcriteria.m_nCount;
  v7 = v6;
  if ( m_nAllocated < v6 )
  {
    v8 = v6;
    if ( v6 <= 6 )
    {
      if ( m_nAllocated <= 6 )
      {
LABEL_5:
        this->subcriteria.m_nAllocated = v6;
        goto LABEL_6;
      }
      goto LABEL_49;
    }
    v6 = m_nAllocated;
    while ( 1 )
    {
      v26 = v6;
      if ( v7 <= v6 )
        break;
      if ( v6 <= 16382 )
      {
        v30 = 2 * v6;
        v6 = 16;
        if ( 2 * v26 > 15 )
          v6 = v30;
      }
      else
      {
        v6 = 0x7FFF;
      }
    }
    v8 = v6;
    if ( m_nAllocated > 6 )
    {
LABEL_49:
      v31 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->subcriteria.m_pElements, 2 * v8);
      v4 = src;
      this->subcriteria.m_nAllocated = v6;
      this->subcriteria.m_pElements = v31;
      goto LABEL_6;
    }
    if ( v6 <= 6 )
      goto LABEL_5;
    v27 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v6);
    v28 = this->subcriteria.m_nAllocated;
    if ( v28 != 0 )
    {
      m_pElements = (&this->subcriteria.m_nAllocAllocated + 1);
      if ( v28 > 6 )
        m_pElements = this->subcriteria.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    this->subcriteria.m_pElements = memcpy(v27, m_pElements, 2LL * this->subcriteria.m_nCount);
    v4 = src;
    this->subcriteria.m_nAllocated = v6;
  }
LABEL_6:
  if ( v7 > 0 )
  {
    v9 = 0;
    srcb = (2LL * (v7 - 1) + 2);
    do
    {
      v10 = v4->subcriteria.m_nAllocated;
      if ( v10 != 0 )
      {
        v11 = (&v4->subcriteria.m_nAllocAllocated + 1);
        if ( v10 > 6 )
          v11 = v4->subcriteria.m_pElements;
      }
      else
      {
        v11 = 0;
      }
      m_nCount = this->subcriteria.m_nCount;
      v13 = (&v9->nameSym.m_Id + v11);
      if ( m_nCount == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_56;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_56:
          v40.m_szFile = "../../public/tier1/utlleanvector.h";
          v40.m_szFunction = "AddToTailGetPtr";
          v40.m_nLine = 557;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v40,
            "%s allocation count overflow",
            "AddToTailGetPtr");
        }
      }
      v14 = this->subcriteria.m_nAllocated;
      v15 = this->subcriteria.m_nCount;
      v16 = m_nCount + 1;
      if ( v16 > v14 )
      {
        LOWORD(v17) = m_nCount + 1;
        if ( v16 > 6 )
        {
          v17 = this->subcriteria.m_nAllocated;
          while ( 1 )
          {
            v18 = v17;
            if ( v16 <= v17 )
              break;
            if ( v17 <= 16382 )
            {
              v21 = 2 * v17;
              v17 = 16;
              if ( 2 * v18 > 15 )
                v17 = v21;
            }
            else
            {
              v17 = 0x7FFF;
            }
          }
        }
        if ( v14 > 6 )
        {
          v36 = v4;
          v22 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->subcriteria.m_pElements, 2LL * v17);
          v15 = this->subcriteria.m_nCount;
          this->subcriteria.m_pElements = v22;
          v4 = v36;
        }
        else
        {
          v15 = this->subcriteria.m_nCount;
          if ( v17 > 6 )
          {
            v37 = v4;
            v23 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v17, m_nCount);
            v24 = this->subcriteria.m_nAllocated;
            if ( v24 != 0 )
            {
              v25 = (&this->subcriteria.m_nAllocAllocated + 1);
              if ( v24 > 6 )
                v25 = this->subcriteria.m_pElements;
            }
            else
            {
              v25 = 0;
            }
            this->subcriteria.m_pElements = memcpy(v23, v25, 2LL * this->subcriteria.m_nCount);
            v15 = this->subcriteria.m_nCount;
            v4 = v37;
          }
        }
        this->subcriteria.m_nAllocated = v17;
        v14 = v17;
      }
      if ( v14 != 0 )
      {
        v19 = (&this->subcriteria.m_nAllocAllocated + 1);
        if ( v14 > 6 )
          v19 = this->subcriteria.m_pElements;
      }
      else
      {
        v19 = 0;
      }
      v9 = (v9 + 2);
      this->subcriteria.m_nCount = v15 + 1;
      v19[m_nCount] = *v13;
    }
    while ( v9 != srcb );
  }
  return this;
}


// ParserResponse::ParserResponse  (line 157, @0x00000000030f7050, libserver.so)  // inlines: ResponseFollowup, ResponseParams, SetFloat, operator=
// callers: ResponseGroup::ResponseGroup, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CResponseSystem::CopyResponsesFrom, CResponseFileParser::ParseOneResponse, CUtlVectorBase<ResponseGroup, CUtlMemoryConservative<ResponseGroup> >::AddToTail
void __fastcall ParserResponse::ParserResponse(ParserResponse *const this)
{
  this->params.flags = 0;
  this->params.odds = 100;
  this->params.delay.start.m_storage.rawWord = 0;
  this->params.delay.range.m_storage.rawWord = 0;
  this->params.respeakdelay.start.m_storage.rawWord = 0;
  this->params.respeakdelay.range.m_storage.rawWord = 0;
  this->params.weapondelay.start.m_storage.rawWord = 0;
  this->params.weapondelay.range.m_storage.rawWord = 0;
  this->params.soundlevel = 0;
  this->params.predelay.start.m_storage.rawWord = 0;
  this->params.predelay.range.m_storage.rawWord = 0;
  this->params.m_pFollowup = 0;
  this->m_followup.followup_concept = 0;
  this->m_followup.followup_contexts = 0;
  this->m_followup.followup_delay = 0.0;
  this->m_followup.followup_target = 0;
  this->m_followup.followup_entityiotarget = 0;
  this->m_followup.followup_entityioinput = 0;
  this->m_followup.followup_entityiodelay = 0.0;
  this->m_followup.bFired = 0;
  this->value = 0;
  this->weight.m_storage.rawWord = 15360;
  this->depletioncount = 0;
  *(this + 81) = 0;
}


// ParserResponse::operator=  (line 167, @0x00000000030f7100, libserver.so)
// calls: ResponseCopyString
// callers: ParserResponse::ParserResponse, ResponseGroup::ResponseGroup, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CResponseSystem::CopyResponsesFrom, CResponseFileParser::ParseOneResponse, CUtlVectorBase<ResponseGroup, CUtlMemoryConservative<ResponseGroup> >::AddToTail
ParserResponse *__fastcall ParserResponse::operator=(ParserResponse *const this, const ParserResponse *const src)
{
  char v4; // al

  if ( this != src )
  {
    this->weight.m_storage.rawWord = src->weight.m_storage.rawWord;
    *(this + 81) = *(src + 81) & 0x3F | *(this + 81) & 0xC0;
    this->value = ResponseCopyString(src->value);
    this->depletioncount = src->depletioncount;
    v4 = *(src + 81) & 0x40 | *(this + 81) & 0xBF;
    *(this + 81) = v4;
    *(this + 81) = *(src + 81) & 0x80 | v4 & 0x7F;
    *&this->params.delay.start.m_storage.rawWord = *&src->params.delay.start.m_storage.rawWord;
    *&this->params.weapondelay.start.m_storage.rawWord = *&src->params.weapondelay.start.m_storage.rawWord;
    *&this->params.odds = *&src->params.odds;
    *(&this->params.m_pFollowup + 3) = *(&src->params.m_pFollowup + 3);
    HIBYTE(this->params.m_pFollowup) = HIBYTE(src->params.m_pFollowup);
    this->m_followup.followup_concept = ResponseCopyString(src->m_followup.followup_concept);
    this->m_followup.followup_contexts = ResponseCopyString(src->m_followup.followup_contexts);
    this->m_followup.followup_target = ResponseCopyString(src->m_followup.followup_target);
    this->m_followup.followup_entityioinput = ResponseCopyString(src->m_followup.followup_entityioinput);
    this->m_followup.followup_entityiotarget = ResponseCopyString(src->m_followup.followup_entityiotarget);
    this->m_followup.followup_delay = src->m_followup.followup_delay;
    this->m_followup.followup_entityiodelay = src->m_followup.followup_entityiodelay;
  }
  return this;
}


// ParserResponse::ParserResponse  (line 190, @0x00000000030f7200, libserver.so)  // inlines: ResponseFollowup, ResponseParams, operator=
// calls: ParserResponse::operator=
void __fastcall ParserResponse::ParserResponse(ParserResponse *const this, const ParserResponse *const src)
{
  this->params.flags = 0;
  this->params.odds = 100;
  this->params.delay.start.m_storage.rawWord = 0;
  this->params.delay.range.m_storage.rawWord = 0;
  this->params.respeakdelay.start.m_storage.rawWord = 0;
  this->params.respeakdelay.range.m_storage.rawWord = 0;
  this->params.weapondelay.start.m_storage.rawWord = 0;
  this->params.weapondelay.range.m_storage.rawWord = 0;
  this->params.soundlevel = 0;
  this->params.predelay.start.m_storage.rawWord = 0;
  this->params.predelay.range.m_storage.rawWord = 0;
  this->params.m_pFollowup = 0;
  this->m_followup.followup_concept = 0;
  this->m_followup.followup_contexts = 0;
  this->m_followup.followup_delay = 0.0;
  this->m_followup.followup_target = 0;
  this->m_followup.followup_entityiotarget = 0;
  this->m_followup.followup_entityioinput = 0;
  this->m_followup.followup_entityiodelay = 0.0;
  this->m_followup.bFired = 0;
  ParserResponse::operator=(this, src);
}


// ParserResponse::~ParserResponse  (line 195, @0x00000000030f72a0, libserver.so)
// callers: CUtlLeanVectorBase<ParserResponse, short int>::Purge, CResponseSystemSaveRestoreOps::Restore, CDefaultResponseSystemSaveRestoreBlockHandler::Restore, ResponseGroup::ResponseGroup, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::RemoveAll, CResponseSystem::ResolveResponse, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CResponseSystem::CopyResponsesFrom, CResponseFileParser::ParseOneResponse, CResponseFileParser::ParseRule_Response, Crr2Payload::~Crr2Payload, CUtlVectorBase<ResponseGroup, CUtlMemoryConservative<ResponseGroup> >::AddToTail
void __fastcall ParserResponse::~ParserResponse(ParserResponse *const this)
{
  ;
}


// Rule::Rule  (line 203, @0x00000000030f72b0, libserver.so)  // inlines: CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl
// callers: CResponseSystem::CopyRuleFrom, CResponseFileParser::ParseRule
void __fastcall Rule::Rule(Rule *const this)
{
  char v1; // al

  this->m_Criteria.m_nAllocated = 6;
  this->m_Responses.m_nCount = 0;
  this->m_Responses.m_nAllocated = 6;
  v1 = *(this + 41);
  this->m_Criteria.m_nCount = 0;
  this->m_nForceWeight = 0;
  this->m_szContext = 0;
  *(this + 41) = v1 & 0xF8 | 4;
}


// Rule::operator=  (line 211, @0x00000000030f72f0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Base, Element, EnsureCapacity, LeafCodeInfo_t, SetContext, memcpy, operator[]
// calls: ResponseCopyString, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: Rule::Rule
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
Rule *__fastcall Rule::operator=(Rule *const this, const Rule *const src)
{
  int v4; // ebx
  unsigned __int64 m_nAllocated; // rdx
  int m_nCount; // r13d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v11; // r9
  __int64 v12; // r15
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v13; // r9
  unsigned __int64 v14; // rcx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v15; // dx
  int v16; // eax
  int v17; // ebx
  int v18; // edx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v19; // rcx
  unsigned int *v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v25; // r9
  __int64 v26; // r15
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v27; // r9
  unsigned __int64 v28; // rcx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v29; // dx
  int v30; // eax
  int v31; // ebx
  int v32; // edx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v33; // rcx
  char v34; // al
  char v35; // al
  int v37; // esi
  int v38; // esi
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v39; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v40; // rax
  void *v41; // rcx
  unsigned __int64 v42; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v43; // rsi
  void *v44; // rcx
  unsigned __int64 v45; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v46; // rsi
  int v47; // eax
  void *v48; // rcx
  unsigned __int64 v49; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v50; // rsi
  int v51; // eax
  void *v52; // rcx
  unsigned __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rsi
  int v55; // ecx
  int v56; // ecx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v57; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v63; // [rsp+0h] [rbp-60h]
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v64; // [rsp+0h] [rbp-60h]
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v65; // [rsp+0h] [rbp-60h]
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v66; // [rsp+0h] [rbp-60h]
  __int64 v67; // [rsp+8h] [rbp-58h]
  __int64 v68; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v69; // [rsp+10h] [rbp-50h] BYREF

  if ( this == src )
    return this;
  LOWORD(v4) = src->m_Criteria.m_nCount;
  m_nAllocated = this->m_Criteria.m_nAllocated;
  m_nCount = src->m_Criteria.m_nCount;
  if ( m_nAllocated < src->m_Criteria.m_nCount )
  {
    v7 = v4;
    if ( v4 <= 6 )
    {
      if ( m_nAllocated <= 6 )
      {
LABEL_5:
        this->m_Criteria.m_nAllocated = v4;
        goto LABEL_6;
      }
      goto LABEL_99;
    }
    v4 = this->m_Criteria.m_nAllocated;
    while ( 1 )
    {
      v51 = v4;
      if ( m_nCount <= v4 )
        break;
      if ( v4 <= 16382 )
      {
        v55 = 2 * v4;
        v4 = 16;
        if ( 2 * v51 > 15 )
          v4 = v55;
      }
      else
      {
        v4 = 0x7FFF;
      }
    }
    v7 = v4;
    if ( m_nAllocated > 6 )
    {
LABEL_99:
      v58 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Criteria.m_pElements, 2 * v7);
      this->m_Criteria.m_nAllocated = v4;
      this->m_Criteria.m_pElements = v58;
      goto LABEL_6;
    }
    if ( v4 <= 6 )
      goto LABEL_5;
    v52 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v4);
    v53 = this->m_Criteria.m_nAllocated;
    if ( v53 != 0 )
    {
      m_pElements = (&this->m_Criteria.m_nAllocAllocated + 1);
      if ( v53 > 6 )
        m_pElements = this->m_Criteria.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    this->m_Criteria.m_pElements = memcpy(v52, m_pElements, 2LL * this->m_Criteria.m_nCount);
    this->m_Criteria.m_nAllocated = v4;
  }
LABEL_6:
  if ( m_nCount > 0 )
  {
    v8 = 2LL * (m_nCount - 1) + 2;
    v9 = 0;
    v67 = v8;
    do
    {
      v10 = src->m_Criteria.m_nAllocated;
      if ( v10 != 0 )
      {
        v11 = (&src->m_Criteria.m_nAllocAllocated + 1);
        if ( v10 > 6 )
          v11 = src->m_Criteria.m_pElements;
      }
      else
      {
        v11 = 0;
      }
      v12 = this->m_Criteria.m_nCount;
      v13 = (v11 + v9);
      if ( v12 == 0x7FFF )
        goto LABEL_103;
      v14 = this->m_Criteria.m_nAllocated;
      v15 = this->m_Criteria.m_nCount;
      v16 = v12 + 1;
      if ( v16 > v14 )
      {
        LOWORD(v17) = v12 + 1;
        if ( v16 > 6 )
        {
          v17 = this->m_Criteria.m_nAllocated;
          while ( 1 )
          {
            v18 = v17;
            if ( v16 <= v17 )
              break;
            if ( v17 <= 16382 )
            {
              v37 = 2 * v17;
              v17 = 16;
              if ( 2 * v18 > 15 )
                v17 = v37;
            }
            else
            {
              v17 = 0x7FFF;
            }
          }
        }
        if ( v14 > 6 )
        {
          v63 = v13;
          v39 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Criteria.m_pElements, 2LL * v17);
          v15 = this->m_Criteria.m_nCount;
          this->m_Criteria.m_pElements = v39;
          v13 = v63;
        }
        else
        {
          v15 = this->m_Criteria.m_nCount;
          if ( v17 > 6 )
          {
            v65 = v13;
            v41 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v17, v12);
            v42 = this->m_Criteria.m_nAllocated;
            if ( v42 != 0 )
            {
              v43 = (&this->m_Criteria.m_nAllocAllocated + 1);
              if ( v42 > 6 )
                v43 = this->m_Criteria.m_pElements;
            }
            else
            {
              v43 = 0;
            }
            this->m_Criteria.m_pElements = memcpy(v41, v43, 2LL * this->m_Criteria.m_nCount);
            v15 = this->m_Criteria.m_nCount;
            v13 = v65;
          }
        }
        this->m_Criteria.m_nAllocated = v17;
        v14 = v17;
      }
      if ( v14 != 0 )
      {
        if ( v14 <= 6 )
          v19 = (&this->m_Criteria.m_nAllocAllocated + 1);
        else
          v19 = this->m_Criteria.m_pElements;
      }
      else
      {
        v19 = 0;
      }
      v9 += 2;
      this->m_Criteria.m_nCount = v15 + 1;
      v19[v12] = *v13;
    }
    while ( v9 != v67 );
  }
  LOWORD(v20) = src->m_Responses.m_nCount;
  v21 = this->m_Responses.m_nAllocated;
  LODWORD(v9) = v20;
  if ( v21 >= v20 )
    goto LABEL_29;
  v22 = v20;
  if ( v20 > 6 )
  {
    LODWORD(v20) = this->m_Responses.m_nAllocated;
    while ( 1 )
    {
      v47 = v20;
      if ( v9 <= v20 )
        break;
      if ( v20 <= 16382 )
      {
        v56 = 2 * v20;
        LODWORD(v20) = 16;
        if ( 2 * v47 > 15 )
          LODWORD(v20) = v56;
      }
      else
      {
        LODWORD(v20) = 0x7FFF;
      }
    }
    v22 = v20;
    if ( v21 <= 6 )
    {
      if ( v20 > 6 )
      {
        v48 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v20);
        v49 = this->m_Responses.m_nAllocated;
        if ( v49 == 0 )
          goto LABEL_108;
        v50 = (&this->m_Responses.m_nAllocAllocated + 1);
        if ( v49 > 6 )
          v50 = this->m_Responses.m_pElements;
        goto LABEL_81;
      }
      goto LABEL_28;
    }
LABEL_98:
    v57 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Responses.m_pElements, 2 * v22);
    this->m_Responses.m_nAllocated = v20;
    this->m_Responses.m_pElements = v57;
    goto LABEL_29;
  }
  if ( v21 > 6 )
    goto LABEL_98;
LABEL_28:
  this->m_Responses.m_nAllocated = v20;
LABEL_29:
  while ( v9 > 0 )
  {
    v23 = 2LL * (v9 - 1) + 2;
    v9 = 0;
    v68 = v23;
    while ( 1 )
    {
      v24 = src->m_Responses.m_nAllocated;
      if ( v24 != 0 )
      {
        v25 = (&src->m_Responses.m_nAllocAllocated + 1);
        if ( v24 > 6 )
          v25 = src->m_Responses.m_pElements;
      }
      else
      {
        v25 = 0;
      }
      v26 = this->m_Responses.m_nCount;
      v27 = (v25 + v9);
      if ( v26 == 0x7FFF )
        break;
      v28 = this->m_Responses.m_nAllocated;
      v29 = this->m_Responses.m_nCount;
      v30 = v26 + 1;
      if ( v30 > v28 )
      {
        LOWORD(v31) = v26 + 1;
        if ( v30 > 6 )
        {
          v31 = this->m_Responses.m_nAllocated;
          while ( 1 )
          {
            v32 = v31;
            if ( v30 <= v31 )
              break;
            if ( v31 <= 16382 )
            {
              v38 = 2 * v31;
              v31 = 16;
              if ( 2 * v32 > 15 )
                v31 = v38;
            }
            else
            {
              v31 = 0x7FFF;
            }
          }
        }
        if ( v28 > 6 )
        {
          v64 = v27;
          v40 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_Responses.m_pElements, 2LL * v31);
          v29 = this->m_Responses.m_nCount;
          this->m_Responses.m_pElements = v40;
          v27 = v64;
        }
        else
        {
          v29 = this->m_Responses.m_nCount;
          if ( v31 > 6 )
          {
            v66 = v27;
            v44 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v31, v26);
            v45 = this->m_Responses.m_nAllocated;
            if ( v45 != 0 )
            {
              v46 = (&this->m_Responses.m_nAllocAllocated + 1);
              if ( v45 > 6 )
                v46 = this->m_Responses.m_pElements;
            }
            else
            {
              v46 = 0;
            }
            this->m_Responses.m_pElements = memcpy(v44, v46, 2LL * this->m_Responses.m_nCount);
            v29 = this->m_Responses.m_nCount;
            v27 = v66;
          }
        }
        this->m_Responses.m_nAllocated = v31;
        v28 = v31;
      }
      if ( v28 != 0 )
      {
        if ( v28 <= 6 )
          v33 = (&this->m_Responses.m_nAllocAllocated + 1);
        else
          v33 = this->m_Responses.m_pElements;
      }
      else
      {
        v33 = 0;
      }
      v9 += 2;
      this->m_Responses.m_nCount = v29 + 1;
      v33[v26] = *v27;
      if ( v9 == v68 )
        goto LABEL_48;
    }
LABEL_103:
    v20 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v69.m_nLine = 557;
      v69.m_szFile = "../../public/tier1/utlleanvector.h";
      v69.m_szFunction = "AddToTailGetPtr";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v69,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v61, v62, v59, v60) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_108:
    v50 = 0;
LABEL_81:
    this->m_Responses.m_pElements = memcpy(v48, v50, 2LL * this->m_Responses.m_nCount);
    this->m_Responses.m_nAllocated = v20;
  }
LABEL_48:
  this->m_szContext = ResponseCopyString(src->m_szContext);
  v34 = *(src + 41) & 2 | *(this + 41) & 0xFD;
  *(this + 41) = v34;
  v35 = *(src + 41) & 4 | v34 & 0xFB;
  *(this + 41) = v35;
  *(this + 41) = *(src + 41) & 1 | v35 & 0xFE;
  this->m_nForceWeight = src->m_nForceWeight;
  return this;
}


// Rule::Rule  (line 241, @0x00000000030f7b00, libserver.so)  // inlines: CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// calls: Rule::operator=, CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>::Purge, _Unwind_Resume
void __fastcall Rule::Rule(Rule *const this, const Rule *const src)
{
  this->m_Criteria.m_nAllocated = 6;
  this->m_Responses.m_nCount = 0;
  this->m_Criteria.m_nCount = 0;
  this->m_Responses.m_nAllocated = 6;
  Rule::operator=(this, src);
}


// Rule::~Rule  (line 246, @0x00000000030f79b0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// callers: CResponseFileParser::ParseRule, ResponseRulePartition::RemoveAll
void __fastcall Rule::~Rule(Rule *const this)
{
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t m_nAllocated; // ax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v3; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *); // rdx
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *); // rdx

  this->m_Responses.m_nCount = 0;
  m_nAllocated = this->m_Responses.m_nAllocated;
  if ( m_nAllocated > 6 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_Responses.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_Responses.m_nAllocated = 6;
  this->m_Criteria.m_nCount = 0;
  v3 = this->m_Criteria.m_nAllocated;
  if ( v3 > 6 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( v3 != 0 )
      v5(g_pMemAlloc, this->m_Criteria.m_pElements);
    else
      v5(g_pMemAlloc, 0);
    this->m_Criteria.m_nAllocated = 6;
  }
  else
  {
    this->m_Criteria.m_nAllocated = 6;
  }
}


// Rule::SetContext  (line 250, @0x00000000030f7a70, libserver.so)
// calls: ResponseCopyString
// callers: CResponseSystem::CopyRuleFrom, CResponseFileParser::ParseRule_ApplyContext
void __fastcall Rule::SetContext(Rule *const this, const char *context)
{
  this->m_szContext = ResponseCopyString(context);
}


