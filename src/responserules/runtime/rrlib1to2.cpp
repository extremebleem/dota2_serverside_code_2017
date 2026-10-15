
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Crr2Payload::Crr2Payload  (line 79, @0x000000000310f5b0, libserver.so)  // inlines: CUtlMemoryConservative, CUtlVectorBase, CUtlVectorConservative
void __fastcall Crr2Payload::Crr2Payload(Crr2Payload *const this, const char *pName, int numResponseGroups)
{
  this->_vptr_IRulePayload = off_47C4D10;
  this->m_pName = pName;
  this->m_Responses.m_Size = 0;
  this->m_Responses.m_Memory.m_pMemory = 0;
  this->m_Responses.m_Memory.m_nCurAllocSize = 0;
}


// Crr2Payload::AddResponse  (line 83, @0x000000000310fc10, libserver.so)
// calls: CUtlVectorBase<ResponseGroup, CUtlMemoryConservative<ResponseGroup> >::AddToTail
void __fastcall Crr2Payload::AddResponse(Crr2Payload *const this, const ResponseGroup *const g)
{
  CUtlVectorBase<ResponseGroup,CUtlMemoryConservative<ResponseGroup>>::AddToTail(&this->m_Responses, g);
}


// Crr2LibPort::CreateNewRRDBFromOld  (line 88, @0x000000000310fc20, libserver.so)  // inlines: AddResponse, Base, BucketFromIdx, CUtlMemoryConservative, CUtlSymbol, CUtlVectorBase, CUtlVectorConservative, Compact, Convert16bitFloatTo32bits, Count, CriterionBase, CriterionStatic, Crr2LibPort, Crr2Payload, Delete, Element, First, GetFloat, IsInfinity, IsNaN, IsValid, MakeStaticCriterion, Next, NextFloat, PartFromIdx, PrevFloat, Purge, ReAlloc, RememberAllocSize, Sym, Symbol, SymbolToStr, atof, operator int32, operator[], rr_intfloat, ~CPlainAutoPtr, ~CRuleBuilder, ~CUtlBuffer, ~CUtlMemory, ~RAIIStaging
// calls: __cxa_guard_acquire, operator new, rr2::IResponseDB::CreateDB, Crr2LibPort::rr2Warning, ResponseRulePartition::Count, Crr2LibPort::~Crr2LibPort, operator delete, CUtlSymbolTable::AddString, rr2::IResponseDB::AddRule, rr2::CRuleBuilder::ReserveStaticCriteria, Matcher::GetToken, Msg (29 total)
// callers: CDefaultResponseSystem::FindBestResponse
// strings: "Importing a response system with no Criteria\n", "Importing a response system with %d Enumerations; not supported in new system.\n", "\t\tMatcher token: %s\n", "numeric", "\t\t\t%s %.3f .. %.3f\n", "\t\t\tv: %d\tneq %d\tmin=%d\tmax=%d\n" (14 total)
// globals: `guard variable for'Crr2LibPort::CreateNewRRDBFromOld(CResponseSystem *,bool,bool)::sv_logsdir, Crr2LibPort::CreateNewRRDBFromOld(CResponseSystem *,bool,bool)::sv_logsdir
Crr2LibPort *__fastcall Crr2LibPort::CreateNewRRDBFromOld(
        CResponseSystem *pOldSystem,
        const bool bIsServer,
        const bool bVerbose)
{
  Crr2LibPort *v4; // rax
  Crr2LibPort *v5; // rbx
  rr2::IResponseDB *DB; // rax
  __int16 m_NumElements; // ax
  void (__fastcall *v9)(rr2::IResponseDB *, _QWORD); // rbx
  unsigned int v10; // eax
  ResponseRulePartition *v11; // rcx
  CResponseDict<Rule*,short unsigned int> *v12; // rdx
  int v13; // eax
  ResponseRulePartition::tIndex v14; // eax
  __m128i v15; // xmm0
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v16; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v17; // rbx
  const char *Token; // rax
  char *v19; // rsi
  unsigned __int8 v20; // r14
  bool v21; // al
  bool v22; // cl
  unsigned __int16 v23; // dx
  float v24; // xmm1_4
  int v25; // esi
  char v26; // di
  bool v27; // r14
  bool v28; // r13
  char *v29; // rax
  int v30; // xmm0_4
  int v31; // eax
  int v32; // eax
  int v33; // xmm0_4
  UtlSymId_t m_Id; // ax
  char v35; // cl
  unsigned __int64 m_nAllocated; // rax
  const char *v37; // rax
  ResponseRulePartition::tIndex v38; // eax
  const char *ElementName; // rax
  const char *value; // r13
  char *v41; // rax
  char *v42; // rax
  const char *v43; // rax
  __m128i v44; // xmm0
  unsigned __int16 rawWord; // ax
  int v46; // r13d
  float v47; // xmm1_4
  int v48; // r14d
  char v49; // r12
  char *v50; // rax
  const char *v51; // rax
  __m128d v52; // xmm0
  unsigned __int16 v53; // ax
  float v54; // r14d
  float v55; // xmm1_4
  int v56; // r13d
  char v57; // r12
  char *v58; // rax
  const char *v59; // rbx
  Crr2Payload *v60; // rax
  unsigned __int64 v61; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v63; // r13
  int m_nCount; // r14d
  __int64 v65; // r12
  int j; // ebx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v67; // rax
  __int64 m_Size; // rax
  ResponseGroup *m_pMemory; // rsi
  __int64 v70; // rbx
  unsigned __int16 *p_m_NumElements; // rdx
  rr2::IResponseDB *pDB2; // [rsp+0h] [rbp-1A0h]
  ResponseRulePartition *p_m_RulePartitions; // [rsp+8h] [rbp-198h]
  Crr2LibPort *pNewSys; // [rsp+10h] [rbp-190h]
  int numResponseGroups; // [rsp+1Ch] [rbp-184h]
  rr2::Symbol nSymConcept; // [rsp+22h] [rbp-17Eh]
  int numCriteria; // [rsp+24h] [rbp-17Ch]
  rr2::MatchScore_t v78; // [rsp+30h] [rbp-170h]
  int maxval_low; // [rsp+34h] [rbp-16Ch]
  int payload; // [rsp+38h] [rbp-168h]
  CPlainAutoPtr<Crr2Payload> payloada; // [rsp+38h] [rbp-168h]
  CUtlSymbolTable *symbolTable; // [rsp+48h] [rbp-158h]
  char v84; // [rsp+50h] [rbp-150h]
  CUtlVectorBase<ResponseGroup,CUtlMemoryConservative<ResponseGroup> > *p_m_Responses; // [rsp+50h] [rbp-150h]
  char pResponseGroup; // [rsp+58h] [rbp-148h]
  Rule *rule; // [rsp+60h] [rbp-140h]
  __int64 iResponseGroup; // [rsp+68h] [rbp-138h]
  __int64 iResponseGroupa; // [rsp+68h] [rbp-138h]
  CUtlSymbol id; // [rsp+70h] [rbp-130h] BYREF
  CUtlSymbol v91; // [rsp+80h] [rbp-120h] BYREF
  UtlSymId_t v92[8]; // [rsp+90h] [rbp-110h] BYREF
  CUtlSymbol v93; // [rsp+A0h] [rbp-100h] BYREF
  unsigned __int16 v94[8]; // [rsp+B0h] [rbp-F0h] BYREF
  UtlSymId_t v95[8]; // [rsp+C0h] [rbp-E0h] BYREF
  CUtlSymbol v96; // [rsp+D0h] [rbp-D0h] BYREF
  ResponseRulePartition::tIndex i; // [rsp+DCh] [rbp-C4h] BYREF
  rr2::CriterionStatic nuStyleCrit; // [rsp+E0h] [rbp-C0h] BYREF
  rr2::CRuleBuilder rb; // [rsp+100h] [rbp-A0h] BYREF
  CUtlBuffer dbgbuf; // [rsp+120h] [rbp-80h] BYREF

  if ( `guard variable for'Crr2LibPort::CreateNewRRDBFromOld(CResponseSystem *,bool,bool)::sv_logsdir == 0
    && __cxa_guard_acquire(&`guard variable for'Crr2LibPort::CreateNewRRDBFromOld(CResponseSystem *,bool,bool)::sv_logsdir) != 0 )
  {
    ConVarRef::ConVarRef(&Crr2LibPort::CreateNewRRDBFromOld(CResponseSystem *,bool,bool)::sv_logsdir, "sv_logsdir");
    __cxa_guard_release(&`guard variable for'Crr2LibPort::CreateNewRRDBFromOld(CResponseSystem *,bool,bool)::sv_logsdir);
  }
  v4 = operator new(0x10u);
  v4->m_hLogFile = 0;
  v5 = v4;
  pNewSys = v4;
  DB = rr2::IResponseDB::CreateDB();
  v5->m_pDB = DB;
  pDB2 = DB;
  if ( pOldSystem->m_Responses.m_Elements.m_Tree.m_NumElements == 0 )
    Crr2LibPort::rr2Warning(pNewSys, "Importing a response system with no Responses.\n");
  if ( pOldSystem->m_Criteria.m_Elements.m_Tree.m_NumElements == 0 )
    Crr2LibPort::rr2Warning(pNewSys, "Importing a response system with no Criteria\n");
  p_m_RulePartitions = &pOldSystem->m_RulePartitions;
  if ( ResponseRulePartition::Count(&pOldSystem->m_RulePartitions) <= 0 )
    Crr2LibPort::rr2Warning(pNewSys, "Importing a response system with no Rules\n");
  m_NumElements = pOldSystem->m_Enumerations.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements != 0 )
  {
    Crr2LibPort::rr2Warning(
      pNewSys,
      "Importing a response system with %d Enumerations; not supported in new system.\n",
      m_NumElements);
    goto LABEL_12;
  }
  v9 = *(pDB2->_vptr_IResponseDB + 4);
  v10 = ResponseRulePartition::Count(p_m_RulePartitions);
  v9(pDB2, v10);
  symbolTable = &pDB2->m_SymTab;
  CUtlSymbolTable::AddString(&rb, &pDB2->m_SymTab, "concept");
  v11 = &pOldSystem->m_RulePartitions;
  nSymConcept.m_Sym.m_Id = *&rb.m_bAutoCancel;
  v12 = &pOldSystem->m_RulePartitions.m_RuleParts[1];
  v13 = 0;
  while ( v11->m_RuleParts[0].m_Tree.m_NumElements == 0 )
  {
    if ( ++v13 == 256 )
      return pNewSys;
    v11 = v12++;
  }
  v14 = v13 << 16;
  i = v14;
  if ( HIWORD(v14) > 0xFFu || p_m_RulePartitions->m_RuleParts[HIWORD(v14)].m_Tree.m_NumElements == 0 )
    return pNewSys;
  while ( 1 )
  {
    rule = p_m_RulePartitions->m_RuleParts[HIWORD(v14)].m_Tree.m_Elements.m_pMemory[v14 & 0x1FFF].m_Data.elem;
    numCriteria = rule->m_Criteria.m_nCount;
    numResponseGroups = rule->m_Responses.m_nCount;
    if ( bVerbose )
    {
      ElementName = ResponseRulePartition::GetElementName(p_m_RulePartitions, &i);
      Msg("Rule @%p : %s , %dc, %dr\n", rule, ElementName, numResponseGroups, numCriteria);
    }
    rr2::IResponseDB::AddRule(&rb, pDB2);
    rr2::CRuleBuilder::ReserveStaticCriteria(&rb, numCriteria, 0);
    rr2::CRuleBuilder::ReserveStaticCriteria(&rb, numCriteria, 1);
    if ( numCriteria > 0 )
      break;
LABEL_61:
    v37 = ResponseRulePartition::GetElementName(p_m_RulePartitions, &i);
    Warning("Response Rule %s does not have a 'concept' criterion!\n", v37);
    rr2::CRuleBuilder::Cancel(&rb);
    if ( rb.m_bAutoCancel && rb.m_pRule != 0 )
      rr2::CRuleBuilder::Cancel(&rb);
LABEL_64:
    rr2::CRuleBuilder::Done(&rb);
    rr2::CRuleBuilder::OnDestructAsserts(&rb);
    v38 = HIWORD(i);
    if ( (i & 0x1FFF) + 1 >= p_m_RulePartitions->m_RuleParts[HIWORD(i)].m_Tree.m_NumElements )
    {
      p_m_NumElements = &pOldSystem->m_RulePartitions.m_RuleParts[v38 + 1].m_Tree.m_NumElements;
      while ( ++v38 <= 255 )
      {
        p_m_NumElements += 40;
        if ( *(p_m_NumElements - 40) != 0 )
        {
          v14 = v38 << 16;
          goto LABEL_66;
        }
      }
      return pNewSys;
    }
    v14 = i + 1;
LABEL_66:
    i = v14;
    if ( v14 == -1
      || HIWORD(v14) > 0xFFu
      || (v14 & 0x1FFF) >= p_m_RulePartitions->m_RuleParts[HIWORD(v14)].m_Tree.m_NumElements )
    {
      return pNewSys;
    }
  }
  iResponseGroup = 0;
  pResponseGroup = 0;
  while ( 1 )
  {
    m_nAllocated = rule->m_Criteria.m_nAllocated;
    if ( m_nAllocated != 0 )
      v16 = m_nAllocated > 6 ? rule->m_Criteria.m_pElements : (&rule->m_Criteria.m_nAllocAllocated + 1);
    else
      v16 = 0;
    v17 = &pOldSystem->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory[v16[iResponseGroup]];
    if ( bVerbose )
      break;
    if ( v17->m_Data.elem.subcriteria.m_nCount > 0 )
      goto LABEL_75;
LABEL_26:
    if ( bVerbose )
    {
      Token = Matcher::GetToken(&v17->m_Data.elem.matcher);
      Msg("\t\tMatcher token: %s\n", Token);
      v19 = "numeric";
      if ( (*(&v17->m_Data.elem.matcher + 8) & 2) == 0 )
        v19 = "string";
      Msg("\t\t\t%s %.3f .. %.3f\n", v19, v17->m_Data.elem.matcher.minval, v17->m_Data.elem.matcher.maxval);
      Msg(
        "\t\t\tv: %d\tneq %d\tmin=%d\tmax=%d\n",
        *(&v17->m_Data.elem.matcher + 8) & 1,
        (*(&v17->m_Data.elem.matcher + 8) & 4) != 0,
        (*(&v17->m_Data.elem.matcher + 8) & 0x10) != 0,
        (*(&v17->m_Data.elem.matcher + 8) & 0x40) != 0);
      Msg(
        "\t\t\tusemin: %d\tusemax: %d\n",
        (*(&v17->m_Data.elem.matcher + 8) & 8) != 0,
        (*(&v17->m_Data.elem.matcher + 8) & 0x20) != 0);
    }
    v20 = *(&v17->m_Data.elem.matcher + 8);
    if ( (v20 & 2) == 0 )
    {
      v43 = Matcher::GetToken(&v17->m_Data.elem.matcher);
      CUtlSymbolTable::AddString(v94, symbolTable, v43);
      rawWord = v17->m_Data.elem.weight.m_storage.rawWord;
      v46 = v94[0];
      if ( (rawWord & 0x7FFF) == 0x7C00 )
      {
        v48 = 1199562752;
        if ( (rawWord & 0x8000u) != 0 )
          v48 = -947920896;
        goto LABEL_86;
      }
      if ( (HIBYTE(rawWord) & 0x7C) == 0x7C )
      {
        v48 = 0;
        if ( (rawWord & 0x3FF) == 0 )
          goto LABEL_101;
      }
      else
      {
        if ( (rawWord & 0x7C00) == 0 && (rawWord & 0x3FF) != 0 )
        {
          v47 = 1.0;
          if ( (rawWord & 0x8000u) != 0 )
            v47 = -1.0;
          *v44.m128i_i32 = (((rawWord & 0x3FF) * 0.0009765625) * v47) * 0.000061035156;
          v48 = _mm_cvtsi128_si32(v44);
          goto LABEL_86;
        }
LABEL_101:
        v48 = (((((rawWord >> 10) & 0x1F) + 112) * (((rawWord >> 10) & 0x1F) != 0)) << 23)
            | (((rawWord & 0x8000u) != 0) << 31)
            | ((rawWord & 0x3FF) << 13);
      }
LABEL_86:
      v49 = *(&v17->m_Data.elem.matcher + 8);
      v93.m_Id = v17->m_Data.elem.nameSym.m_Id;
      v50 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &v93.m_Id);
      CUtlSymbolTable::AddString(v92, symbolTable, v50);
      LODWORD(nuStyleCrit.m_score) = v48;
      nuStyleCrit.m_symbol = v46;
      nuStyleCrit.m_name.m_Sym.m_Id = v92[0];
      *(&nuStyleCrit + 8) = (2 * ((v49 & 4) != 0)) | *(&nuStyleCrit + 8) & 0xFC | 1;
      m_Id = v92[0];
      goto LABEL_53;
    }
    v21 = (v20 & 8) != 0;
    if ( (v20 & 8) != 0 )
    {
      v22 = (v20 & 0x20) != 0;
      goto LABEL_33;
    }
    if ( (v20 & 0x20) == 0 )
    {
      v51 = Matcher::GetToken(&v17->m_Data.elem.matcher);
      v52.m128d_f64[0] = strtod(v51, 0);
      v53 = v17->m_Data.elem.weight.m_storage.rawWord;
      v54 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v52))));
      if ( (v53 & 0x7FFF) == 0x7C00 )
      {
        v56 = 1199562752;
        if ( (v53 & 0x8000u) != 0 )
          v56 = -947920896;
        goto LABEL_111;
      }
      if ( (HIBYTE(v53) & 0x7C) == 0x7C )
      {
        v56 = 0;
        if ( (v53 & 0x3FF) == 0 )
          goto LABEL_113;
      }
      else
      {
        if ( (v53 & 0x7C00) == 0 && (v53 & 0x3FF) != 0 )
        {
          v55 = 1.0;
          if ( (v53 & 0x8000u) != 0 )
            v55 = -1.0;
          *v52.m128d_f64 = (((v53 & 0x3FF) * 0.0009765625) * v55) * 0.000061035156;
          v56 = _mm_cvtsi128_si32(v52);
          goto LABEL_111;
        }
LABEL_113:
        v56 = (((((v53 >> 10) & 0x1F) + 112) * (((v53 >> 10) & 0x1F) != 0)) << 23)
            | (((v53 & 0x8000u) != 0) << 31)
            | ((v53 & 0x3FF) << 13);
      }
LABEL_111:
      v57 = *(&v17->m_Data.elem.matcher + 8);
      v96.m_Id = v17->m_Data.elem.nameSym.m_Id;
      v58 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &v96.m_Id);
      CUtlSymbolTable::AddString(v95, symbolTable, v58);
      LODWORD(nuStyleCrit.m_score) = v56;
      m_Id = v95[0];
      nuStyleCrit.m_floats.fa = v54;
      nuStyleCrit.m_floats.fb = v54;
      nuStyleCrit.m_name.m_Sym.m_Id = v95[0];
      *(&nuStyleCrit + 8) = (2 * ((v57 & 4) != 0)) | *(&nuStyleCrit + 8) & 0xFC;
      goto LABEL_53;
    }
    v22 = 1;
LABEL_33:
    v23 = v17->m_Data.elem.weight.m_storage.rawWord;
    if ( (v23 & 0x7FFF) == 0x7C00 )
    {
      v78 = 65504.0;
      if ( (v23 & 0x8000u) != 0 )
        v78 = -65504.0;
    }
    else
    {
      if ( (HIBYTE(v23) & 0x7C) != 0x7C )
      {
        if ( (v23 & 0x7C00) != 0 || (v23 & 0x3FF) == 0 )
        {
LABEL_92:
          v25 = (((((v23 >> 10) & 0x1F) + 112) * (((v23 >> 10) & 0x1F) != 0)) << 23)
              | (((v23 & 0x8000u) != 0) << 31)
              | ((v23 & 0x3FF) << 13);
        }
        else
        {
          v24 = 1.0;
          if ( (v23 & 0x8000u) != 0 )
            v24 = -1.0;
          *v15.m128i_i32 = (((v23 & 0x3FF) * 0.0009765625) * v24) * 0.000061035156;
          v25 = _mm_cvtsi128_si32(v15);
        }
        v78 = *&v25;
        goto LABEL_41;
      }
      v78 = 0.0;
      if ( (v23 & 0x3FF) == 0 )
        goto LABEL_92;
    }
LABEL_41:
    v26 = v20 >> 6;
    v27 = (v20 & 4) != 0;
    v28 = (*(&v17->m_Data.elem.matcher + 8) & 0x10) != 0;
    v84 = v26 & 1;
    if ( v22 )
    {
      maxval_low = LODWORD(v17->m_Data.elem.matcher.maxval);
      if ( v21 )
        goto LABEL_43;
    }
    else
    {
      maxval_low = 2139095039;
      if ( v21 )
      {
LABEL_43:
        payload = LODWORD(v17->m_Data.elem.matcher.minval);
        goto LABEL_44;
      }
    }
    payload = -8388609;
LABEL_44:
    LOWORD(dbgbuf.m_Memory.m_pMemory) = v17->m_Data.elem.nameSym.m_Id;
    v29 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &dbgbuf);
    CUtlSymbolTable::AddString(&nuStyleCrit.rr2::CriterionBase, symbolTable, v29);
    nuStyleCrit.m_score = v78;
    v30 = payload;
    *(&nuStyleCrit + 8) = (2 * v27) | *(&nuStyleCrit + 8) & 0xFC;
    if ( !v28 )
    {
      v31 = payload;
      if ( payload < 0 )
      {
        if ( payload <= 0xFF7FFFFF )
        {
          v30 = 1;
          if ( payload == 0x80000000 )
            goto LABEL_48;
          v31 = payload - 1;
        }
      }
      else if ( payload <= 0x7F7FFFFF )
      {
        v30 = payload + 1;
        goto LABEL_48;
      }
      v30 = v31;
    }
LABEL_48:
    v32 = maxval_low;
    nuStyleCrit.m_symbol = v30;
    v33 = maxval_low;
    if ( v84 == 0 )
    {
      if ( maxval_low >= 0 )
      {
        if ( maxval_low > 0x7F7FFFFF )
          goto LABEL_90;
        v33 = -2147483647;
        if ( maxval_low != 0 )
        {
          v32 = maxval_low - 1;
LABEL_90:
          v33 = v32;
        }
      }
      else
      {
        if ( maxval_low > 0xFF7FFFFF )
          goto LABEL_90;
        v33 = maxval_low + 1;
      }
    }
    LODWORD(nuStyleCrit.m_floats.fb) = v33;
    m_Id = nuStyleCrit.m_name.m_Sym.m_Id;
LABEL_53:
    v35 = pResponseGroup;
    if ( nSymConcept.m_Sym.m_Id == m_Id )
      v35 = 1;
    pResponseGroup = v35;
    if ( bVerbose )
    {
      CUtlBuffer::CUtlBuffer(&dbgbuf, 0, 0, 1);
      rr2::CriterionStatic::DebugDump(&nuStyleCrit, &dbgbuf, symbolTable);
      Msg("\t\tBecomes:\t%s\n", dbgbuf.m_Memory.m_pMemory);
      CUtlMemory<unsigned char,int>::Purge(&dbgbuf.m_Memory);
    }
    rr2::CRuleBuilder::AddCriterion(&rb, &nuStyleCrit, v17->m_Data.elem.required);
    if ( numCriteria <= ++iResponseGroup )
    {
      if ( pResponseGroup == 0 )
        goto LABEL_61;
      v59 = ResponseRulePartition::GetElementName(p_m_RulePartitions, &i);
      v60 = operator new(0x28u);
      v60->m_pName = v59;
      payloada.m_p = v60;
      v60->_vptr_IRulePayload = off_47C4D10;
      v60->m_Responses.m_Size = 0;
      v60->m_Responses.m_Memory.m_pMemory = 0;
      v60->m_Responses.m_Memory.m_nCurAllocSize = 0;
      if ( numResponseGroups <= 0 )
      {
        m_pMemory = 0;
      }
      else
      {
        iResponseGroupa = 0;
        p_m_Responses = &v60->m_Responses;
        do
        {
          v61 = rule->m_Responses.m_nAllocated;
          if ( v61 != 0 )
          {
            if ( v61 <= 6 )
              m_pElements = (&rule->m_Responses.m_nAllocAllocated + 1);
            else
              m_pElements = rule->m_Responses.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          v63 = &pOldSystem->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[m_pElements[iResponseGroupa]];
          if ( bVerbose )
            Msg("\tResponseGroup %d: %s\n", iResponseGroupa, v63->m_Data.key);
          m_nCount = v63->m_Data.elem.group.m_nCount;
          v65 = 0;
          for ( j = 0; m_nCount > j; ++v65 )
          {
            while ( 1 )
            {
              v67 = v63->m_Data.elem.group.m_nAllocated != 0 ? v63->m_Data.elem.group.m_pElements : 0LL;
              if ( bVerbose )
                break;
              ++j;
              ++v65;
              if ( m_nCount <= j )
                goto LABEL_131;
            }
            Msg("\tResponse %d: %s\n", j++, v67[v65].value);
          }
LABEL_131:
          CUtlVectorBase<ResponseGroup,CUtlMemoryConservative<ResponseGroup>>::AddToTail(
            p_m_Responses,
            &v63->m_Data.elem);
          ++iResponseGroupa;
        }
        while ( numResponseGroups > iResponseGroupa );
        m_Size = payloada.m_p->m_Responses.m_Size;
        m_pMemory = payloada.m_p->m_Responses.m_Memory.m_pMemory;
        if ( m_Size > 0 )
        {
          v70 = 20 * m_Size;
          payloada.m_p->m_Responses.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20 * m_Size);
          payloada.m_p->m_Responses.m_Memory.m_nCurAllocSize = v70;
LABEL_134:
          rr2::CRuleBuilder::SetPayload(&rb, payloada.m_p);
          if ( rb.m_bAutoCancel && rb.m_pRule != 0 )
            rr2::CRuleBuilder::Cancel(&rb);
          goto LABEL_64;
        }
      }
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory);
      payloada.m_p->m_Responses.m_Memory.m_nCurAllocSize = 0;
      payloada.m_p->m_Responses.m_Memory.m_pMemory = 0;
      goto LABEL_134;
    }
  }
  value = v17->m_Data.elem.value;
  id.m_Id = v17->m_Data.elem.nameSym.m_Id;
  v41 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &id.m_Id);
  Msg("\tCriteria %d: %s %s\n", iResponseGroup, v41, value);
  if ( v17->m_Data.elem.subcriteria.m_nCount <= 0 )
    goto LABEL_26;
LABEL_75:
  v91.m_Id = v17->m_Data.elem.nameSym.m_Id;
  v42 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &v91.m_Id);
  Crr2LibPort::rr2Warning(pNewSys, "Criterion %s has subcriteria, no longer supported!\n", v42);
  if ( rb.m_bAutoCancel && rb.m_pRule != 0 )
    rr2::CRuleBuilder::Cancel(&rb);
  rr2::CRuleBuilder::Done(&rb);
  rr2::CRuleBuilder::OnDestructAsserts(&rb);
LABEL_12:
  Crr2LibPort::~Crr2LibPort(pNewSys);
  operator delete(pNewSys);
  return 0;
}


// Crr2LibPort::Crr2LibPort  (line 230, @0x000000000310f5e0, libserver.so)
// calls: rr2::IResponseDB::CreateDB
void __fastcall Crr2LibPort::Crr2LibPort(
        Crr2LibPort *const this,
        const char *const pszLogDirPath,
        const bool bIsServer)
{
  this->m_hLogFile = 0;
  this->m_pDB = rr2::IResponseDB::CreateDB();
}


// Crr2LibPort::~Crr2LibPort  (line 247, @0x000000000310f610, libserver.so)
// callers: CDefaultResponseSystem::GameInit, CDefaultResponseSystem::~CDefaultResponseSystem, Crr2LibPort::CreateNewRRDBFromOld
void __fastcall Crr2LibPort::~Crr2LibPort(Crr2LibPort *const this)
{
  rr2::IResponseDB *m_pDB; // rdi

  if ( this->m_hLogFile != 0 )
  {
    (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem);
    this->m_hLogFile = 0;
  }
  m_pDB = this->m_pDB;
  if ( m_pDB != 0 )
    (*(m_pDB->_vptr_IResponseDB + 1))(m_pDB);
}


// Crr2LibPort::MapOldToNewQuery  (line 258, @0x000000000310f800, libserver.so)  // inlines: CUtlSymbol, Clear, EnsureCapacity, FirstInorder, Head, IsValidIndex, LeftChild, Next, RemoveAll, Sym, Symbol, V_AppearsToBeANumber, atof, memcpy, operator[]
// calls: CResponseCriteriaSet::GetCount, CResponseCriteriaSet::GetValue, V_strtod, strtod, CResponseCriteriaSet::GetNameSymbol, Crr2LibPort::TranslateSymbol, rr2::CResponseQuery::AddFact, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::NextInorder, __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, memcpy (15 total)
// callers: Crr2LibPort::FindBestResponse
// globals: `guard variable for'Crr2LibPort::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT, Crr2LibPort::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT
void __fastcall Crr2LibPort::MapOldToNewQuery(
        Crr2LibPort *const this,
        const CResponseCriteriaSet *const inset,
        rr2::CResponseQuery *pOut)
{
  int Count; // ebx
  uint32 m_nGrowSize; // eax
  rr2::CResponseQuery::CFact *v7; // rsi
  int m_Root; // ebx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v9; // rcx
  __int16 m_Left; // dx
  const char *Value; // rax
  double v12; // xmm0_8
  float v13; // xmm1_4
  rr2::CResponseQuery::CFact *m_pMemory; // r12
  rr2::CResponseQuery::CFact *v15; // rax
  const char *pvalue; // [rsp+18h] [rbp-68h]
  UtlSymId_t v18[8]; // [rsp+20h] [rbp-60h] BYREF
  CResponseCriteriaSet::CritSymbol_t sym; // [rsp+30h] [rbp-50h] BYREF
  rr2::Symbol key[4]; // [rsp+40h] [rbp-40h] BYREF

  pOut->m_facts.m_Size = 0;
  pOut->m_bSorted = 1;
  Count = CResponseCriteriaSet::GetCount(inset);
  if ( Count > pOut->m_facts.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = pOut->m_facts.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = pOut->m_facts.m_Memory.m_pMemory;
        v15 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * Count);
        pOut->m_facts.m_Memory.m_pMemory = v15;
        if ( m_pMemory != 0 )
          memcpy(v15, m_pMemory, 12LL * pOut->m_facts.m_Memory.m_nAllocationCount);
        pOut->m_facts.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v7 = pOut->m_facts.m_Memory.m_pMemory;
        if ( v7 != 0 )
          pOut->m_facts.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v7, 12LL * Count);
        else
          pOut->m_facts.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 12LL * Count);
      }
      pOut->m_facts.m_Memory.m_nAllocationCount = Count;
    }
  }
  if ( `guard variable for'Crr2LibPort::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT == 0
    && __cxa_guard_acquire(&`guard variable for'Crr2LibPort::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol(
      &Crr2LibPort::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT.m_Id,
      "concept");
    __cxa_guard_release(&`guard variable for'Crr2LibPort::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT);
  }
  m_Root = inset->m_Lookup.m_Root;
  if ( inset->m_Lookup.m_Root != -1 )
  {
    v9 = inset->m_Lookup.m_Elements.m_pMemory;
    m_Left = v9[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( v9[m_Left].m_Left != -1 )
        m_Left = v9[m_Left].m_Left;
      m_Root = m_Left;
    }
    for ( ;
          m_Root >= 0 && m_Root < inset->m_Lookup.m_NumElements;
          m_Root = CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::NextInorder(
                     &inset->m_Lookup,
                     m_Root) )
    {
      Value = CResponseCriteriaSet::GetValue(inset, m_Root);
      *&key[0].m_Sym.m_Id = 0;
      pvalue = Value;
      v12 = V_strtod(Value, key);
      if ( (*&key[0].m_Sym.m_Id == 0 || pvalue == *&key[0].m_Sym.m_Id) && v12 == 0.0 )
      {
        CUtlSymbolTable::AddString(&key[0].m_Sym.m_Id, &this->m_pDB->m_SymTab, pvalue);
        sym.m_Id = key[0].m_Sym.m_Id;
        CResponseCriteriaSet::GetNameSymbol(v18, inset, m_Root);
        Crr2LibPort::TranslateSymbol(&key[0].m_Sym, this, v18);
        rr2::CResponseQuery::AddFact(pOut, key, &sym);
      }
      else
      {
        strtod(pvalue, 0);
        CResponseCriteriaSet::GetNameSymbol(&sym.m_Id, inset, m_Root);
        Crr2LibPort::TranslateSymbol(&key[0].m_Sym, this, &sym);
        rr2::CResponseQuery::AddFact(pOut, key, v13);
      }
    }
  }
}


// Crr2LibPort::TranslateSymbol  (line 293, @0x000000000310f670, libserver.so)  // inlines: CUtlSymbol, Sym, Symbol, SymbolToStr
// calls: CUtlSymbolTable::String, CUtlSymbolTable::AddString
// callers: Crr2LibPort::MapOldToNewQuery
CUtlSymbol *__fastcall Crr2LibPort::TranslateSymbol(
        CUtlSymbol *a1,
        Crr2LibPort *const this,
        const CResponseCriteriaSet::CritSymbol_t *const sym)
{
  char *v5; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  id.m_Id = sym->m_Id;
  v5 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &id.m_Id);
  CUtlSymbolTable::AddString(&id.m_Id, &this->m_pDB->m_SymTab, v5);
  a1->m_Id = id.m_Id;
  return a1;
}


// Crr2LibPort::FindBestResponse  (line 298, @0x000000000310fae0, libserver.so)  // inlines: CResponseQuery, CUtlMemory, CUtlVector, CUtlVectorBase, IsValid, Purge, RemoveAll, ~CResponseQuery, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Crr2LibPort::MapOldToNewQuery, CUtlMemory<rr2::CResponseQuery::CFact, int>::Purge, _Unwind_Resume
// callers: CDefaultResponseSystem::FindBestResponse
bool __fastcall Crr2LibPort::FindBestResponse(
        Crr2LibPort *const this,
        const CResponseCriteriaSet *const set,
        rr2::MatchInfo_t_0 *const match,
        IResponseFilter *pFilter)
{
  rr2::IResponseDB *m_pDB; // rax
  float score; // xmm0_4
  bool v8; // bl
  _QWORD v10[4]; // [rsp+0h] [rbp-70h] BYREF
  rr2::CResponseQuery vQuery; // [rsp+20h] [rbp-50h] BYREF

  vQuery.m_facts.m_Size = 0;
  m_pDB = this->m_pDB;
  vQuery.m_facts.m_Memory.m_pMemory = 0;
  vQuery.m_facts.m_Memory.m_nAllocationCount = 0;
  vQuery.m_facts.m_Memory.m_nGrowSize = 0;
  vQuery.m_bSorted = 0;
  vQuery.m_db = m_pDB;
  Crr2LibPort::MapOldToNewQuery(this, set, &vQuery);
  (*(this->m_pDB->_vptr_IResponseDB + 2))(v10, this->m_pDB, &vQuery, 0);
  *&match->score = v10[0];
  score = match->score;
  match->pRulePayload = v10[1];
  match->m_pRule = v10[2];
  v8 = 0;
  if ( score == -2147483600.0 )
  {
    vQuery.m_facts.m_Size = 0;
    if ( (vQuery.m_facts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return v8;
  }
  else
  {
    vQuery.m_facts.m_Size = 0;
    v8 = score > 0.0;
    if ( (vQuery.m_facts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return v8;
  }
  CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&vQuery.m_facts.m_Memory);
  if ( (vQuery.m_facts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v8;
  CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&vQuery.m_facts.m_Memory);
  return v8;
}


// Crr2Payload::GetSizeInMem  (line 320, @0x000000000310f4e0, libserver.so)  // inlines: NumAllocated
size_t __fastcall Crr2Payload::GetSizeInMem(const Crr2Payload *const this)
{
  int m_Size; // r8d
  ResponseGroup *m_pMemory; // rax
  __int64 p_m_nAllocated; // rsi
  size_t v4; // rcx
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t *v5; // rdx
  __int64 v6; // rax
  size_t v7; // rdx

  m_Size = this->m_Responses.m_Size;
  if ( m_Size <= 0 )
  {
    m_Size = 0;
    v4 = 8;
  }
  else
  {
    m_pMemory = this->m_Responses.m_Memory.m_pMemory;
    p_m_nAllocated = &m_pMemory[(m_Size - 1) + 1].group.m_nAllocated;
    v4 = 8;
    v5 = &m_pMemory->group.m_nAllocated;
    do
    {
      v6 = *v5;
      v5 += 10;
      v4 += 90 * v6 + 20;
    }
    while ( v5 != p_m_nAllocated );
  }
  v7 = this->m_Responses.m_Memory.m_nCurAllocSize / 0x14;
  if ( m_Size < v7 )
    v4 += 20LL * (v7 - m_Size);
  return v4;
}


// Crr2LibPort::rr2Warning  (line 337, @0x000000000310f700, libserver.so)  // inlines: CUtlTextBuffer, rr2Warning, ~CUtlBuffer, ~CUtlMemory, ~CUtlTextBuffer
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::VaPrintf, Warning, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// callers: CDefaultResponseSystem::GameInit, CDefaultResponseSystem::FindBestResponse, Crr2LibPort::CreateNewRRDBFromOld
// strings: "(null)", "[RESPONSELIB] %s\n"
void Crr2LibPort::rr2Warning(Crr2LibPort *const this, const tchar *pMsg, ...)
{
  unsigned __int8 *m_pMemory; // rsi
  va_list vl; // [rsp+8h] [rbp-128h] BYREF
  Crr2LibPort::CUtlTextBuffer msg; // [rsp+20h] [rbp-110h] BYREF

  va_start(vl, pMsg);
  CUtlBuffer::CUtlBuffer(&msg, 0, 0, 5);
  CUtlBuffer::VaPrintf(&msg, pMsg, vl);
  m_pMemory = "(null)";
  if ( msg.m_Memory.m_pMemory != 0 )
    m_pMemory = msg.m_Memory.m_pMemory;
  Warning("[RESPONSELIB] %s\n", m_pMemory);
  CUtlMemory<unsigned char,int>::Purge(&msg.m_Memory);
}


// Crr2LibPort::rr2Warning  (line 349, @0x000000000310f6d0, libserver.so)
// calls: Warning
// strings: "[RESPONSELIB] %s\n", "(null)"
void __fastcall Crr2LibPort::rr2Warning(Crr2LibPort *const this, const Crr2LibPort::CUtlTextBuffer *const msg)
{
  unsigned __int8 *m_pMemory; // rax
  const char *v3; // rsi

  m_pMemory = msg->m_Memory.m_pMemory;
  v3 = "(null)";
  if ( m_pMemory != 0 )
    v3 = m_pMemory;
  Warning("[RESPONSELIB] %s\n", v3);
}


