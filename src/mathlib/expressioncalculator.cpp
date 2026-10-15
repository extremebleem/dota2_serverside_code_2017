// Reconstructed from DWARF by pahole; not original source.

// src/mathlib/expressioncalculator.cpp:74
class EvalState_t {
private:

	int m_stacksize;  // +0x0
	int m_nTokenIndex;  // +0x4
	EvalState_t(const EvalContext_t &);
	void Reset(EvalContext_t &);

	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_expressioncalculator.cpp  (line 0, @0x0000000001a6d120, libserver.so)  // inlines: CUtlStringToken, Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR, s_pFunction1ArgNames, s_pFunction2ArgNames, s_pFunction3ArgNames, s_pFunction5ArgNames
void __cdecl GLOBAL__sub_I_expressioncalculator_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  s_pFunction1ArgNames[0].m_nHashCode = 820944342;
  s_pFunction1ArgNames[1].m_nHashCode = -894059504;
  s_pFunction1ArgNames[2].m_nHashCode = 844966817;
  s_pFunction1ArgNames[3].m_nHashCode = -894275042;
  s_pFunction1ArgNames[4].m_nHashCode = -1695914025;
  s_pFunction1ArgNames[5].m_nHashCode = 906059814;
  s_pFunction1ArgNames[6].m_nHashCode = -302743276;
  s_pFunction1ArgNames[7].m_nHashCode = 1315148899;
  s_pFunction1ArgNames[8].m_nHashCode = -1379577020;
  s_pFunction1ArgNames[9].m_nHashCode = 781981521;
  s_pFunction1ArgNames[10].m_nHashCode = -53120988;
  s_pFunction1ArgNames[11].m_nHashCode = -764746150;
  s_pFunction1ArgNames[12].m_nHashCode = -1257400099;
  s_pFunction1ArgNames[13].m_nHashCode = 180519087;
  s_pFunction1ArgNames[14].m_nHashCode = -1778909991;
  s_pFunction1ArgNames[15].m_nHashCode = -1749231806;
  s_pFunction2ArgNames[0].m_nHashCode = -147052022;
  s_pFunction2ArgNames[1].m_nHashCode = -170049981;
  s_pFunction2ArgNames[2].m_nHashCode = -200318274;
  s_pFunction2ArgNames[3].m_nHashCode = 1098068457;
  s_pFunction3ArgNames[0].m_nHashCode = -822140340;
  s_pFunction3ArgNames[1].m_nHashCode = -1972143450;
  s_pFunction3ArgNames[2].m_nHashCode = 1553808906;
  s_pFunction3ArgNames[3].m_nHashCode = 1561216870;
  s_pFunction3ArgNames[4].m_nHashCode = -1181329056;
  s_pFunction3ArgNames[5].m_nHashCode = -1095288658;
  s_pFunction3ArgNames[6].m_nHashCode = -1926203902;
  s_pFunction3ArgNames[7].m_nHashCode = 708321006;
  s_pFunction5ArgNames[0].m_nHashCode = 2121043333;
  s_pFunction5ArgNames[1].m_nHashCode = -2026015971;
}


// ParseLiteral  (line 22, @0x00000000031b2ad0, libserver.so)
// calls: strtod
bool __fastcall ParseLiteral(const char **const expr, float *const value)
{
  const char *v4; // r12
  __m128d v5; // xmm0

  v4 = *expr;
  v5.m128d_f64[0] = strtod(*expr, expr);
  *value = _mm_movedup_pd(v5).m128d_f64[0];
  return *expr != v4;
}


// ParseIdentifier  (line 29, @0x00000000031b2b10, libserver.so)  // inlines: V_isalnum, V_isdigit, memcpy
// calls: memcpy, CUtlString::operator=, __stack_chk_fail
// callers: CExpressionCalculator::SetExpression
bool __fastcall ParseIdentifier(const char **const expr, CUtlString *const name)
{
  bool v2; // dl
  const char *v3; // r8
  char v4; // al
  unsigned int v6; // ecx
  char *v7; // rdx
  signed __int64 v8; // r12
  void *v9; // rsp
  const char *v10; // rax
  const char *v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // [rsp+10h] [rbp-10h] BYREF

  v2 = 0;
  v3 = *expr;
  v4 = **expr;
  if ( (v4 - 48) > 9u )
  {
    v6 = v4 - 9;
    if ( v6 <= 0x17 && ((1LL << v6) & 0x80001F) != 0 )
    {
      v12 = v3 + 1;
      do
      {
        *expr = v12;
        v3 = v12;
        v4 = *v12;
        v13 = *v12 - 9;
        if ( v13 > 0x17 )
          break;
        ++v12;
      }
      while ( ((1LL << v13) & 0x80001F) != 0 );
    }
    v7 = v3;
    while ( ((v4 & 0xDF) - 65) <= 0x19u || (v4 - 48) <= 9u || v4 == 95 )
    {
      *expr = ++v7;
      v4 = *v7;
    }
    v8 = v7 - v3;
    v9 = alloca(((v7 - v3 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v10 = memcpy((&v14 & 0xFFFFFFFFFFFFFFEFLL), v3, v7 - v3);
    v10[v8] = 0;
    CUtlString::operator=(name, v10);
    return 1;
  }
  return v2;
}


// ParseString  (line 57, @0x00000000031b2c40, libserver.so)  // inlines: StringAfterPrefix<char const>, V_isempty
// calls: _V_StringAfterPrefix
// callers: CExpressionCalculator::ParseToken
bool __fastcall ParseString(const char **const expr, const char *str)
{
  bool result; // al
  const char *v4; // r12
  char v5; // al
  const char *v6; // rax
  const char *v7; // rdi
  char v8; // dl
  const char *v9; // rax

  result = 0;
  if ( str != 0 && *str != 0 )
  {
    v4 = *expr;
    v5 = **expr;
    if ( v5 == 9 || v5 == 32 )
    {
      v6 = v4 + 1;
      do
      {
        do
        {
          *expr = v6;
          v7 = v6++;
          v8 = *(v6 - 1);
        }
        while ( v8 == 9 );
      }
      while ( v8 == 32 );
    }
    else
    {
      v7 = *expr;
    }
    v9 = _V_StringAfterPrefix(v7, str);
    if ( v9 != 0 )
    {
      *expr = v9;
      return 1;
    }
    else
    {
      *expr = v4;
      return 0;
    }
  }
  return result;
}


// CExpressionCalculator::ParseToken  (line 125, @0x00000000031b2cc0, libserver.so)
// calls: ParseString
// callers: CExpressionCalculator::SetExpression
// globals: s_pTokenNames
bool __fastcall CExpressionCalculator::ParseToken(
        CExpressionCalculator *const this,
        const char **const expr,
        CExpressionCalculator::TokenType_t *pToken)
{
  __int64 v5; // rbx
  bool result; // al

  v5 = 0;
  while ( 1 )
  {
    result = ParseString(expr, s_pTokenNames[v5]);
    if ( result )
      break;
    if ( ++v5 == 26 )
      return result;
  }
  *pToken = v5;
  return result;
}


// CExpressionCalculator::ComputeIdentifierType  (line 163, @0x00000000031b2d10, libserver.so)
// callers: CExpressionCalculator::SetExpression
// globals: s_pFunction1ArgNames, s_pFunction2ArgNames, s_pFunction3ArgNames, s_pFunction5ArgNames
CExpressionCalculator::TokenType_t __fastcall CExpressionCalculator::ComputeIdentifierType(
        CExpressionCalculator *const this,
        CUtlStringToken identifier,
        uint32 *pFunctionIndex)
{
  CUtlStringToken *v3; // rcx
  uint32 i; // eax
  CUtlStringToken *v5; // rcx
  CExpressionCalculator::TokenType_t result; // eax
  uint32 v7; // eax
  uint32 v8; // eax

  if ( s_pFunction1ArgNames[0].m_nHashCode != identifier.m_nHashCode )
  {
    v3 = s_pFunction1ArgNames;
    for ( i = 1; i != 16; ++i )
    {
      if ( v3[1].m_nHashCode == identifier.m_nHashCode )
        goto LABEL_16;
      ++v3;
    }
    if ( s_pFunction2ArgNames[0].m_nHashCode == identifier.m_nHashCode )
    {
      v7 = 0;
    }
    else if ( s_pFunction2ArgNames[1].m_nHashCode == identifier.m_nHashCode )
    {
      v7 = 1;
    }
    else if ( s_pFunction2ArgNames[2].m_nHashCode == identifier.m_nHashCode )
    {
      v7 = 2;
    }
    else
    {
      if ( s_pFunction2ArgNames[3].m_nHashCode != identifier.m_nHashCode )
      {
        v5 = s_pFunction3ArgNames;
        result = CExpressionCalculator::TokenType_t::TOK_RPAREN;
        if ( s_pFunction3ArgNames[0].m_nHashCode == identifier.m_nHashCode )
        {
          result = CExpressionCalculator::TokenType_t::TOK_LPAREN;
        }
        else
        {
          while ( v5[1].m_nHashCode != identifier.m_nHashCode )
          {
            ++result;
            ++v5;
            if ( result == CExpressionCalculator::TokenType_t::TOK_CONDITIONAL_OR )
            {
              if ( s_pFunction5ArgNames[0].m_nHashCode == identifier.m_nHashCode )
              {
                v8 = 0;
              }
              else
              {
                if ( s_pFunction5ArgNames[1].m_nHashCode != identifier.m_nHashCode )
                {
                  LOBYTE(result) = 25;
                  *pFunctionIndex = identifier.m_nHashCode;
                  return result;
                }
                v8 = 1;
              }
              *pFunctionIndex = v8;
              return CExpressionCalculator::TokenType_t::TOK_FUNCTION_5_ARGS;
            }
          }
        }
        *pFunctionIndex = result;
        return CExpressionCalculator::TokenType_t::TOK_FUNCTION_3_ARGS;
      }
      v7 = 3;
    }
    *pFunctionIndex = v7;
    return CExpressionCalculator::TokenType_t::TOK_FUNCTION_2_ARGS;
  }
  i = 0;
LABEL_16:
  *pFunctionIndex = i;
  return CExpressionCalculator::TokenType_t::TOK_FUNCTION_1_ARGS;
}


// CExpressionCalculator::SetExpression  (line 214, @0x00000000031b4680, libserver.so)  // inlines: AddToTail, CUtlKeyValuePair<CUtlStringToken, float>, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlString, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<CUtlKeyValuePair<CUtlStringToken, float>, CUtlStringToken, float>, ConvertToExternalMemory, CopyConstruct<CExpressionCalculator::Token_t>, CopyConstruct<CUtlString>, Destruct<CUtlString>, DoInsert<const CUtlStringToken&>, DoLookup<const CUtlStringToken&>, Element, GrowMemory, HashItem<unsigned int>, Insert, IsExternallyAllocated, MakeStringToken, ParseLiteral, Purge, Purge_FixedGrowable, RemoveAll, V_memcpy, memcpy, operator(), operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlString::FreeMemoryBlock, operator delete, operator delete [], CExpressionCalculator::ParseToken, strtod, CUtlMemory<CExpressionCalculator::Token_t, int>::Grow, ParseIdentifier, CUtlString::Get, CExpressionCalculator::ComputeIdentifierType, MurmurHash2, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed, CUtlString::Set (24 total)
// callers: CDOTA_ActionRunner::CalculateExpression, CEconStyleInfo::BInitFromKV, EvaluateExpression
void __fastcall CExpressionCalculator::SetExpression(
        CExpressionCalculator *const this,
        const char *expr,
        bool bTrackNames)
{
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *m_pVarNames; // r14
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v7; // rdi
  bool v8; // zf
  CExpressionCalculator::Token_t *m_pTokens; // rdi
  const char *v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  CExpressionCalculator::Token_t *v13; // rax
  const char *v14; // rbx
  __m128d v15; // xmm0
  const char *v16; // rax
  uint32 v17; // esi
  const char *v18; // rbx
  uint32 v19; // edx
  uint32 v20; // eax
  uint32 v21; // eax
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> >::handle_t *v22; // rcx
  unsigned int v23; // ebx
  CUtlHashtableEntry<CUtlStringToken,float> *v24; // rax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v25; // rbx
  int v26; // eax
  CUtlString *v27; // rbx
  const char *v28; // rax
  unsigned __int64 v29; // rax
  size_t v30; // rdi
  CExpressionCalculator::Token_t *v31; // rax
  __int64 m_nTokenCount; // rdx
  uint32 m_nGrowSize; // edx
  uint32 v34; // eax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v35; // rax
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *p_m_varValues; // [rsp+0h] [rbp-1B0h]
  int v37; // [rsp+Ch] [rbp-1A4h]
  uint32 v38; // [rsp+Ch] [rbp-1A4h]
  const char *expra; // [rsp+28h] [rbp-188h] BYREF
  CUtlStringToken nameToken; // [rsp+30h] [rbp-180h] BYREF
  CUtlString name; // [rsp+40h] [rbp-170h] BYREF
  CExpressionCalculator::Token_t token; // [rsp+50h] [rbp-160h] BYREF
  CUtlVectorFixedGrowable<CExpressionCalculator::Token_t,32ul> tokens; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v44; // [rsp+178h] [rbp-38h]

  expra = expr;
  v44 = __readfsqword(0x28u);
  if ( bTrackNames )
  {
    v35 = operator new(0x18u);
    v35->m_Size = 0;
    v35->m_Memory.m_pMemory = 0;
    v35->m_Memory.m_nAllocationCount = 0;
    v35->m_Memory.m_nGrowSize = 0;
    this->m_pVarNames = v35;
  }
  else
  {
    m_pVarNames = this->m_pVarNames;
    if ( m_pVarNames != 0 )
    {
      m_Size = m_pVarNames->m_Size;
      for ( i = 8LL * m_pVarNames->m_Size - 8; --m_Size >= 0; i -= 8 )
      {
        v7 = (m_pVarNames->m_Memory.m_pMemory + i);
        if ( v7->m_pString != 0 )
          CUtlString::FreeMemoryBlock(v7);
      }
      v8 = (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_pVarNames->m_Size = 0;
      if ( v8 )
      {
        CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
        if ( (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
      }
      operator delete(m_pVarNames);
    }
    this->m_pVarNames = 0;
  }
  m_pTokens = this->m_pTokens;
  if ( m_pTokens != 0 )
    operator delete[](m_pTokens);
  v10 = expra;
  this->m_pTokens = 0;
  this->m_nTokenCount = 0;
  if ( v10 == 0 )
    return;
  name.m_pString = 0;
  tokens.m_Size = 0;
  tokens.m_Memory.m_nAllocationCount = 32;
  tokens.m_Memory.m_nGrowSize = 0x80000000;
  tokens.m_Memory.m_pMemory = &tokens.m_Memory.m_FixedMemory;
  if ( *v10 == 0 )
  {
    this->m_nTokenCount = 0;
LABEL_51:
    tokens.m_Size = 0;
    if ( tokens.m_Memory.m_nAllocationCount < 0 )
    {
      v34 = tokens.m_Memory.m_nGrowSize & 0xC0000000;
    }
    else
    {
      m_nGrowSize = tokens.m_Memory.m_nGrowSize;
      v34 = tokens.m_Memory.m_nGrowSize & 0xC0000000;
      if ( tokens.m_Memory.m_pMemory != &tokens.m_Memory.m_FixedMemory )
      {
        if ( tokens.m_Memory.m_pMemory != 0 && v34 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = tokens.m_Memory.m_nGrowSize;
        }
        tokens.m_Memory.m_nAllocationCount = 32;
        tokens.m_Memory.m_pMemory = &tokens.m_Memory.m_FixedMemory;
        tokens.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_63:
        if ( name.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&name);
        return;
      }
    }
    if ( v34 == 0 )
      CUtlMemory<CExpressionCalculator::Token_t,int>::Purge(&tokens.m_Memory);
    goto LABEL_63;
  }
  p_m_varValues = &this->m_varValues;
  while ( 1 )
  {
    if ( CExpressionCalculator::ParseToken(this, &expra, &token) )
    {
      v11 = tokens.m_Size;
      token.m_nIdentifierId = 0;
      v12 = tokens.m_Size;
      if ( tokens.m_Size == tokens.m_Memory.m_nAllocationCount )
        goto LABEL_23;
      goto LABEL_17;
    }
    v14 = expra;
    v15.m128d_f64[0] = strtod(expra, &expra);
    token.m_flValue = _mm_movedup_pd(v15).m128d_f64[0];
    if ( v14 == expra )
      break;
    v11 = tokens.m_Size;
    token.m_nType = CExpressionCalculator::TokenType_t::TOK_NUMBER;
    v12 = tokens.m_Size;
    if ( tokens.m_Size == tokens.m_Memory.m_nAllocationCount )
      goto LABEL_23;
LABEL_17:
    tokens.m_Size = v12 + 1;
    v13 = &tokens.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = token;
    if ( *expra == 0 )
    {
      v29 = tokens.m_Size;
      v8 = tokens.m_Size == 0;
      this->m_nTokenCount = tokens.m_Size;
      if ( !v8 )
      {
        v30 = -1;
        if ( v29 <= 0xFE0000000000000LL )
          v30 = 8 * v29;
        v31 = operator new[](v30);
        m_nTokenCount = this->m_nTokenCount;
        this->m_pTokens = v31;
        memcpy(v31, tokens.m_Memory.m_pMemory, 8 * m_nTokenCount);
      }
      goto LABEL_51;
    }
  }
  if ( ParseIdentifier(&expra, &name) )
  {
    v16 = CUtlString::Get(&name);
    v17 = 0;
    v18 = v16;
    if ( v16 != 0 && *v16 != 0 )
    {
      v38 = MurmurHash2LowerCase(v16, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(v38, v18, 0, 1);
      v17 = v38;
    }
    nameToken.m_nHashCode = v17;
    token.m_nType = CExpressionCalculator::ComputeIdentifierType(this, v17, &token.m_nIdentifierId);
    if ( token.m_nType == CExpressionCalculator::TokenType_t::TOK_IDENTIFIER )
    {
      v21 = MurmurHash2(&nameToken, 4, 0x3501A674u);
      v23 = v21;
      if ( this->m_varValues.m_nUsed == 0
        || CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoLookup<CUtlStringToken const&>(
             p_m_varValues,
             &nameToken,
             v21,
             v22) == -1 )
      {
        v24 = &this->m_varValues.m_table.m_pMemory[CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsertUnconstructed(
                                                     p_m_varValues,
                                                     v23,
                                                     1)];
        if ( v24 != -4LL )
          *v24->data = nameToken.m_nHashCode;
        v25 = this->m_pVarNames;
        if ( v25 != 0 )
        {
          v26 = v25->m_Size;
          v37 = v25->m_Size;
          if ( v25->m_Size == v25->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(&v25->m_Memory, 1);
            v26 = v25->m_Size;
          }
          v25->m_Size = v26 + 1;
          v27 = &v25->m_Memory.m_pMemory[v37];
          if ( v27 != 0 )
          {
            v27->m_pString = 0;
            v28 = CUtlString::Get(&name);
            CUtlString::Set(v27, v28);
          }
        }
      }
    }
    v11 = tokens.m_Size;
    if ( tokens.m_Size != tokens.m_Memory.m_nAllocationCount )
    {
      v12 = tokens.m_Size;
      goto LABEL_17;
    }
LABEL_23:
    CUtlMemory<CExpressionCalculator::Token_t,int>::Grow(&tokens.m_Memory, 1);
    v12 = tokens.m_Size;
    goto LABEL_17;
  }
  tokens.m_Size = 0;
  if ( tokens.m_Memory.m_nAllocationCount < 0 )
  {
    v20 = tokens.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v19 = tokens.m_Memory.m_nGrowSize;
    v20 = tokens.m_Memory.m_nGrowSize & 0xC0000000;
    if ( tokens.m_Memory.m_pMemory != &tokens.m_Memory.m_FixedMemory )
    {
      if ( tokens.m_Memory.m_pMemory != 0 && v20 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v19 = tokens.m_Memory.m_nGrowSize;
      }
      tokens.m_Memory.m_nAllocationCount = 32;
      tokens.m_Memory.m_pMemory = &tokens.m_Memory.m_FixedMemory;
      tokens.m_Memory.m_nGrowSize = v19 & 0x3FFFFFFF | 0x80000000;
      goto LABEL_36;
    }
  }
  if ( v20 == 0 )
    CUtlMemory<CExpressionCalculator::Token_t,int>::Purge(&tokens.m_Memory);
LABEL_36:
  if ( name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&name);
}


// CExpressionCalculator::SetVariable  (line 287, @0x00000000031b4e40, libserver.so)  // inlines: HashItem<unsigned int>, Insert, MakeStringToken, SetVariable, operator(), operator[]
// calls: MurmurHash2, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsert<const CUtlStringToken&>, MurmurHash2LowerCase, RegisterStringToken
// callers: CDOTA_ActionRunner::CalculateExpression
void __fastcall CExpressionCalculator::SetVariable(
        CExpressionCalculator *const this,
        const char *var,
        float a3,
        float value)
{
  uint32 v4; // eax
  uint32 v7; // eax
  float v8; // [rsp+8h] [rbp-28h]
  int valueb; // [rsp+Ch] [rbp-24h]
  float valuea; // [rsp+Ch] [rbp-24h]
  uint32 valuec; // [rsp+Ch] [rbp-24h]
  CUtlStringToken key[8]; // [rsp+10h] [rbp-20h] BYREF

  v4 = 0;
  if ( var != 0 && *var != 0 )
  {
    valuea = a3;
    v4 = MurmurHash2LowerCase(var, 0x31415926u);
    a3 = valuea;
    if ( g_bUpdateStringTokenDatabase )
    {
      v8 = valuea;
      valuec = v4;
      RegisterStringToken(v4, var, 0, 1);
      a3 = v8;
      v4 = valuec;
    }
  }
  valueb = LODWORD(a3);
  key[0].m_nHashCode = v4;
  v7 = MurmurHash2(key, 4, 0x3501A674u);
  this->m_varValues.m_table.m_pMemory[CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsert<CUtlStringToken const&>(
                                        &this->m_varValues,
                                        key,
                                        v7,
                                        0)].data[1] = valueb;
}


// CExpressionCalculator::SetVariable  (line 292, @0x00000000031b4f00, libserver.so)  // inlines: HashItem<unsigned int>, Insert, operator(), operator[]
// calls: MurmurHash2, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsert<const CUtlStringToken&>
void __fastcall CExpressionCalculator::SetVariable(CExpressionCalculator *const this, uint32 a2, float a3, float value)
{
  uint32 v5; // eax
  UtlHashHandle_t v6; // eax
  CUtlStringToken vara; // [rsp+0h] [rbp-20h] BYREF
  int valuea; // [rsp+Ch] [rbp-14h]

  vara.m_nHashCode = a2;
  valuea = LODWORD(a3);
  v5 = MurmurHash2(&vara, 4, 0x3501A674u);
  v6 = CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsert<CUtlStringToken const&>(
         &this->m_varValues,
         &vara,
         v5,
         0);
  this->m_varValues.m_table.m_pMemory[v6].data[1] = valuea;
}


// CExpressionCalculator::SetVariable  (line 298, @0x00000000031b2e10, libserver.so)  // inlines: operator[]
// callers: CEconItemView::ComputeAutoStyle
void __fastcall CExpressionCalculator::SetVariable(
        CExpressionCalculator *const this,
        ExprVarHandle_t h,
        float a3,
        float value)
{
  *&this->m_varValues.m_table.m_pMemory[h].data[1] = a3;
}


// CExpressionCalculator::VariableCount  (line 306, @0x00000000031b2e30, libserver.so)
int __fastcall CExpressionCalculator::VariableCount(CExpressionCalculator *const this)
{
  return this->m_pVarNames->m_Size;
}


// CExpressionCalculator::VariableName  (line 312, @0x00000000031b2e40, libserver.so)  // inlines: Element, operator[]
// calls: CUtlString::Get
const char *__fastcall CExpressionCalculator::VariableName(CExpressionCalculator *const this, int nIndex)
{
  return CUtlString::Get(&this->m_pVarNames->m_Memory.m_pMemory[nIndex]);
}


// CExpressionCalculator::FirstVariable  (line 318, @0x00000000031b2e60, libserver.so)  // inlines: FirstHandle, NextHandle
// callers: CEconItemView::ComputeAutoStyle
ExprVarHandle_t __fastcall CExpressionCalculator::FirstVariable(CExpressionCalculator *const this)
{
  ExprVarHandle_t result; // eax
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // rdx
  int flags_and_hash; // edi
  CUtlHashtableEntry<CUtlStringToken,float> *v5; // rdx

  result = -1;
  m_nAllocationCount = this->m_varValues.m_table.m_nAllocationCount;
  m_pMemory = this->m_varValues.m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    flags_and_hash = m_pMemory->flags_and_hash;
    result = 0;
    v5 = m_pMemory + 1;
    if ( flags_and_hash < 0 )
    {
      while ( ++result != m_nAllocationCount )
      {
        ++v5;
        if ( v5[-1].flags_and_hash >= 0 )
          return result;
      }
      return -1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CExpressionCalculator::NextVariable  (line 323, @0x00000000031b2eb0, libserver.so)  // inlines: NextHandle
// callers: CEconItemView::ComputeAutoStyle
ExprVarHandle_t __fastcall CExpressionCalculator::NextVariable(CExpressionCalculator *const this, ExprVarHandle_t h)
{
  signed int v2; // esi
  ExprVarHandle_t result; // eax
  int m_nAllocationCount; // edx
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // rcx
  CUtlHashtableEntry<CUtlStringToken,float> *v6; // rax

  v2 = h + 1;
  result = -1;
  m_nAllocationCount = this->m_varValues.m_table.m_nAllocationCount;
  m_pMemory = this->m_varValues.m_table.m_pMemory;
  if ( v2 < m_nAllocationCount )
  {
    v6 = &m_pMemory[v2 + 1];
    if ( m_pMemory[v2].flags_and_hash < 0 )
    {
      while ( ++v2 != m_nAllocationCount )
      {
        ++v6;
        if ( v6[-1].flags_and_hash >= 0 )
          return v2;
      }
      return -1;
    }
    else
    {
      return v2;
    }
  }
  return result;
}


// CExpressionCalculator::InvalidVariable  (line 328, @0x00000000031b2f10, libserver.so)
// callers: CEconItemView::ComputeAutoStyle
ExprVarHandle_t __fastcall CExpressionCalculator::InvalidVariable(CExpressionCalculator *const this)
{
  return -1;
}


// CExpressionCalculator::VariableName  (line 333, @0x00000000031b2f20, libserver.so)  // inlines: Key, operator[]
// callers: CEconItemView::ComputeAutoStyle
CUtlStringToken __fastcall CExpressionCalculator::VariableName(CExpressionCalculator *const this, ExprVarHandle_t h)
{
  return this->m_varValues.m_table.m_pMemory[h].data[0];
}


// CExpressionCalculator::Evaluate  (line 341, @0x00000000031b3f10, libserver.so)  // inlines: CUtlMemory, CUtlStack, EvalContext_t, EvalExpr, ResetDbgInfo, ~EvalContext_t
// calls: CExpressionCalculator::EvalConditional, CUtlStack<float, CUtlMemory<float, int> >::~CUtlStack, _Unwind_Resume
// callers: CDOTA_ActionRunner::CalculateExpression, CEconItemView::ComputeAutoStyle, EvaluateExpression
bool __fastcall CExpressionCalculator::Evaluate(CExpressionCalculator *const this, float *const value)
{
  bool v3; // al
  bool v5; // [rsp+Ch] [rbp-44h]
  CExpressionCalculator::EvalContext_t ctx; // [rsp+10h] [rbp-40h] BYREF

  memset(&ctx, 0, 20);
  ctx.m_stack.m_pElements = 0;
  ctx.m_nTokenIndex = 0;
  v3 = CExpressionCalculator::EvalConditional(this, &ctx);
  if ( v3 && ctx.m_stack.m_Size == 1 )
  {
    *value = *ctx.m_stack.m_Memory.m_pMemory;
  }
  else
  {
    *value = 0.0;
    v3 = 0;
  }
  v5 = v3;
  CUtlStack<float,CUtlMemory<float,int>>::~CUtlStack(&ctx.m_stack);
  return v5;
}


// CExpressionCalculator::NextToken  (line 355, @0x00000000031b2f40, libserver.so)
bool __fastcall CExpressionCalculator::NextToken(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx,
        CExpressionCalculator::Token_t *pToken)
{
  __int64 m_nTokenIndex; // rcx
  bool result; // al

  m_nTokenIndex = ctx->m_nTokenIndex;
  result = 0;
  if ( m_nTokenIndex < this->m_nTokenCount )
  {
    *pToken = this->m_pTokens[m_nTokenIndex];
    ++ctx->m_nTokenIndex;
    return 1;
  }
  return result;
}


// CExpressionCalculator::EvalLiteral  (line 365, @0x00000000031b2f70, libserver.so)  // inlines: NextToken
bool __fastcall CExpressionCalculator::EvalLiteral(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx,
        float *pValue)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::Token_t *v4; // rcx
  CExpressionCalculator::TokenType_t m_nType; // edi
  uint32 m_nIdentifierId; // xmm0_4

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex >= this->m_nTokenCount )
    return 0;
  v4 = &this->m_pTokens[m_nTokenIndex];
  m_nType = v4->m_nType;
  m_nIdentifierId = v4->m_nIdentifierId;
  ctx->m_nTokenIndex = m_nTokenIndex + 1;
  if ( m_nType != CExpressionCalculator::TokenType_t::TOK_NUMBER )
    return 0;
  *pValue = m_nIdentifierId;
  return 1;
}


// CExpressionCalculator::EvalIdentifier  (line 378, @0x00000000031b2fb0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, Find, HashItem<unsigned int>, NextToken, operator(), operator[]
// calls: MurmurHash2, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoLookup<const CUtlStringToken&>
// callers: CExpressionCalculator::EvalPrimary
bool __fastcall CExpressionCalculator::EvalIdentifier(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx,
        float *pValue)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::Token_t *v6; // rcx
  CExpressionCalculator::TokenType_t m_nType; // edx
  uint32 m_nIdentifierId; // ecx
  uint32 v10; // eax
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> >::handle_t *v11; // rcx
  int v12; // eax
  int v13; // xmm0_4
  CUtlStringToken t; // [rsp+0h] [rbp-30h] BYREF

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex >= this->m_nTokenCount )
    return 0;
  v6 = &this->m_pTokens[m_nTokenIndex];
  m_nType = v6->m_nType;
  m_nIdentifierId = v6->m_nIdentifierId;
  ctx->m_nTokenIndex = m_nTokenIndex + 1;
  if ( m_nType != CExpressionCalculator::TokenType_t::TOK_IDENTIFIER )
    return 0;
  t.m_nHashCode = m_nIdentifierId;
  v10 = MurmurHash2(&t, 4, 0x3501A674u);
  if ( this->m_varValues.m_nUsed == 0
    || (v12 = CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoLookup<CUtlStringToken const&>(
                &this->m_varValues,
                &t,
                v10,
                v11)) == -1 )
  {
    *pValue = 0.0;
    return 1;
  }
  else
  {
    v13 = this->m_varValues.m_table.m_pMemory[v12].data[1];
    *pValue = v13;
    return 1;
  }
}


// CExpressionCalculator::EvalFunction  (line 402, @0x00000000031b3070, libserver.so)  // inlines: NextToken
bool __fastcall CExpressionCalculator::EvalFunction(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx,
        CExpressionCalculator::TokenType_t nFunctionType,
        uint32 *pFunctionIndex)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::Token_t *v5; // rdi
  CExpressionCalculator::TokenType_t m_nType; // r8d
  uint32 m_nIdentifierId; // edi

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex >= this->m_nTokenCount )
    return 0;
  v5 = &this->m_pTokens[m_nTokenIndex];
  m_nType = v5->m_nType;
  m_nIdentifierId = v5->m_nIdentifierId;
  ctx->m_nTokenIndex = m_nTokenIndex + 1;
  if ( nFunctionType != m_nType )
    return 0;
  *pFunctionIndex = m_nIdentifierId;
  return 1;
}


// CExpressionCalculator::EvalToken  (line 415, @0x00000000031b30b0, libserver.so)  // inlines: NextToken
bool __fastcall CExpressionCalculator::EvalToken(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx,
        CExpressionCalculator::TokenType_t token)
{
  int m_nTokenIndex; // ecx
  bool result; // al
  CExpressionCalculator::TokenType_t m_nType; // eax

  m_nTokenIndex = ctx->m_nTokenIndex;
  result = 0;
  if ( m_nTokenIndex < this->m_nTokenCount )
  {
    m_nType = this->m_pTokens[m_nTokenIndex].m_nType;
    ctx->m_nTokenIndex = m_nTokenIndex + 1;
    return token == m_nType;
  }
  return result;
}


// CExpressionCalculator::EvalTokenList  (line 424, @0x00000000031b30e0, libserver.so)  // inlines: NextToken
// callers: CExpressionCalculator::EvalUnary, CExpressionCalculator::EvalDivMul, CExpressionCalculator::EvalAddSub, CExpressionCalculator::EvalLessGreater, CExpressionCalculator::EvalEquality
bool __fastcall CExpressionCalculator::EvalTokenList(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx,
        CExpressionCalculator::TokenType_t *pOps,
        int *const nOp)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::TokenType_t m_nType; // edi
  __int64 v6; // rsi
  int v7; // eax
  CExpressionCalculator::TokenType_t *i; // rdx
  CExpressionCalculator::TokenType_t v9; // esi

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex < this->m_nTokenCount )
  {
    m_nType = this->m_pTokens[m_nTokenIndex].m_nType;
    ctx->m_nTokenIndex = m_nTokenIndex + 1;
    v6 = *nOp;
    v7 = v6 - 1;
    for ( i = &pOps[v6 - 1]; ; --i )
    {
      *nOp = v7;
      if ( v7 == -1 )
        break;
      v9 = *i;
      --v7;
      if ( v9 == m_nType )
        return 1;
    }
  }
  return 0;
}


// CExpressionCalculator::EvalExpr  (line 438, @0x00000000031b3f00, libserver.so)
// calls: CExpressionCalculator::EvalConditional
bool __fastcall CExpressionCalculator::EvalExpr(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  return CExpressionCalculator::EvalConditional(this, ctx);
}


// CExpressionCalculator::EvalConditional  (line 443, @0x00000000031b3df0, libserver.so)  // inlines: Element, EvalExpr, EvalState_t, EvalToken, NextToken, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalOr, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::Eval3ArgFunc, CExpressionCalculator::EvalPrimary, CExpressionCalculator::EvalExpr, CExpressionCalculator::Evaluate, CExpressionCalculator::Eval1ArgFunc, CExpressionCalculator::Eval2ArgFunc, CExpressionCalculator::Eval5ArgFunc
bool __fastcall CExpressionCalculator::EvalConditional(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  CExpressionCalculator::TokenType_t m_nType; // eax
  int v9; // eax
  CExpressionCalculator::TokenType_t v10; // edx
  bool v11; // r13
  int v12; // eax
  float *m_pMemory; // rdx
  __int64 v14; // rdi
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  const float *p_f3; // rsi
  float f3; // [rsp+8h] [rbp-38h] BYREF
  float f2; // [rsp+Ch] [rbp-34h] BYREF

  m_Size = ctx->m_stack.m_Size;
  m_nTokenIndex = ctx->m_nTokenIndex;
  v6 = CExpressionCalculator::EvalOr(this, ctx);
  if ( !v6 )
    goto LABEL_3;
  m_nTokenIndex = ctx->m_nTokenIndex;
  m_Size = ctx->m_stack.m_Size;
  if ( m_nTokenIndex >= this->m_nTokenCount )
    goto LABEL_3;
  m_nType = this->m_pTokens[m_nTokenIndex].m_nType;
  ctx->m_nTokenIndex = m_nTokenIndex + 1;
  if ( m_nType == CExpressionCalculator::TokenType_t::TOK_QUESTION
    && CExpressionCalculator::EvalConditional(this, ctx)
    && (v9 = ctx->m_nTokenIndex) < this->m_nTokenCount
    && (v10 = this->m_pTokens[v9].m_nType,
        ctx->m_nTokenIndex = v9 + 1,
        v10 == CExpressionCalculator::TokenType_t::TOK_COLON)
    && (v11 = CExpressionCalculator::EvalConditional(this, ctx)) )
  {
    v12 = ctx->m_stack.m_Size;
    m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
    v14 = v12 - 1;
    v15 = ctx->m_stack.m_Memory.m_pMemory[v14];
    ctx->m_stack.m_Size = v12 - 1;
    f3 = v15;
    v16 = m_pMemory[v14 - 1];
    ctx->m_stack.m_Size = v12 - 2;
    f2 = v16;
    v17 = m_pMemory[v14 - 2];
    ctx->m_stack.m_Size = v12 - 3;
    if ( v17 == 0.0 )
      p_f3 = &f3;
    else
      p_f3 = &f2;
    v6 = v11;
    CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, p_f3);
  }
  else
  {
LABEL_3:
    ctx->m_stack.m_Size = m_Size;
    ctx->m_nTokenIndex = m_nTokenIndex;
  }
  return v6;
}


// CExpressionCalculator::EvalOr  (line 471, @0x00000000031b3d00, libserver.so)  // inlines: Element, EvalState_t, EvalToken, NextToken, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalAnd, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::EvalConditional
bool __fastcall CExpressionCalculator::EvalOr(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  CExpressionCalculator::TokenType_t m_nType; // eax
  bool v9; // r13
  int v10; // eax
  float v11; // xmm0_4
  float *m_pMemory; // rdx
  float v13; // xmm1_4
  float v14; // xmm2_4
  float src[13]; // [rsp+Ch] [rbp-34h] BYREF

  m_Size = ctx->m_stack.m_Size;
  m_nTokenIndex = ctx->m_nTokenIndex;
  v6 = CExpressionCalculator::EvalAnd(this, ctx);
  if ( v6
    && (m_nTokenIndex = ctx->m_nTokenIndex, m_Size = ctx->m_stack.m_Size, m_nTokenIndex < this->m_nTokenCount)
    && (m_nType = this->m_pTokens[m_nTokenIndex].m_nType,
        ctx->m_nTokenIndex = m_nTokenIndex + 1,
        m_nType == CExpressionCalculator::TokenType_t::TOK_CONDITIONAL_OR)
    && (v9 = CExpressionCalculator::EvalOr(this, ctx)) )
  {
    v10 = ctx->m_stack.m_Size;
    v11 = 0.0;
    m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
    v13 = ctx->m_stack.m_Memory.m_pMemory[v10 - 1];
    ctx->m_stack.m_Size = v10 - 1;
    v14 = m_pMemory[v10 - 2];
    ctx->m_stack.m_Size = v10 - 2;
    if ( v13 != 0.0 || v14 != 0.0 )
      v11 = 1.0;
    src[0] = v11;
    CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
    return v9;
  }
  else
  {
    ctx->m_stack.m_Size = m_Size;
    ctx->m_nTokenIndex = m_nTokenIndex;
  }
  return v6;
}


// CExpressionCalculator::EvalAnd  (line 495, @0x00000000031b3c10, libserver.so)  // inlines: Element, EvalState_t, EvalToken, NextToken, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalEquality, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::EvalOr
bool __fastcall CExpressionCalculator::EvalAnd(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  CExpressionCalculator::TokenType_t m_nType; // eax
  bool v9; // r13
  int v10; // eax
  float v11; // xmm0_4
  float *m_pMemory; // rdx
  float v13; // xmm1_4
  float v14; // xmm2_4
  float src[13]; // [rsp+Ch] [rbp-34h] BYREF

  m_Size = ctx->m_stack.m_Size;
  m_nTokenIndex = ctx->m_nTokenIndex;
  v6 = CExpressionCalculator::EvalEquality(this, ctx);
  if ( v6
    && (m_nTokenIndex = ctx->m_nTokenIndex, m_Size = ctx->m_stack.m_Size, m_nTokenIndex < this->m_nTokenCount)
    && (m_nType = this->m_pTokens[m_nTokenIndex].m_nType,
        ctx->m_nTokenIndex = m_nTokenIndex + 1,
        m_nType == CExpressionCalculator::TokenType_t::TOK_CONDITIONAL_AND)
    && (v9 = CExpressionCalculator::EvalAnd(this, ctx)) )
  {
    v10 = ctx->m_stack.m_Size;
    v11 = 0.0;
    m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
    v13 = ctx->m_stack.m_Memory.m_pMemory[v10 - 1];
    ctx->m_stack.m_Size = v10 - 1;
    v14 = m_pMemory[v10 - 2];
    ctx->m_stack.m_Size = v10 - 2;
    if ( v13 != 0.0 && v14 != 0.0 )
      v11 = 1.0;
    src[0] = v11;
    CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
    return v9;
  }
  else
  {
    ctx->m_stack.m_Size = m_Size;
    ctx->m_nTokenIndex = m_nTokenIndex;
  }
  return v6;
}


// CExpressionCalculator::EvalEquality  (line 519, @0x00000000031b3b00, libserver.so)  // inlines: Element, EvalState_t, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalLessGreater, CExpressionCalculator::EvalTokenList, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::EvalAnd
bool __fastcall CExpressionCalculator::EvalEquality(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  bool v8; // r13
  int v9; // eax
  float *m_pMemory; // rdx
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int nOp; // [rsp+8h] [rbp-48h] BYREF
  float src; // [rsp+Ch] [rbp-44h] BYREF
  CExpressionCalculator::TokenType_t pOps[16]; // [rsp+10h] [rbp-40h] BYREF

  m_Size = ctx->m_stack.m_Size;
  m_nTokenIndex = ctx->m_nTokenIndex;
  v6 = CExpressionCalculator::EvalLessGreater(this, ctx);
  if ( v6 )
  {
    pOps[0] = CExpressionCalculator::TokenType_t::TOK_COMPARE_EQUAL;
    m_Size = ctx->m_stack.m_Size;
    pOps[1] = CExpressionCalculator::TokenType_t::TOK_COMPARE_NOT_EQUAL;
    m_nTokenIndex = ctx->m_nTokenIndex;
    nOp = 2;
    if ( CExpressionCalculator::EvalTokenList(this, ctx, pOps, &nOp) )
    {
      v8 = CExpressionCalculator::EvalEquality(this, ctx);
      if ( v8 )
      {
        v9 = ctx->m_stack.m_Size;
        m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
        v11 = ctx->m_stack.m_Memory.m_pMemory[v9 - 1];
        ctx->m_stack.m_Size = v9 - 1;
        v12 = m_pMemory[v9 - 2];
        ctx->m_stack.m_Size = v9 - 2;
        if ( nOp != 0 )
        {
          if ( nOp != 1 )
            return v8;
          if ( v12 != v11 )
            goto LABEL_13;
        }
        else if ( v12 == v11 )
        {
LABEL_13:
          v13 = 1.0;
          goto LABEL_11;
        }
        v13 = 0.0;
LABEL_11:
        src = v13;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
        return v8;
      }
    }
  }
  ctx->m_stack.m_Size = m_Size;
  ctx->m_nTokenIndex = m_nTokenIndex;
  return v6;
}


// CExpressionCalculator::EvalLessGreater  (line 554, @0x00000000031b39d0, libserver.so)  // inlines: Element, EvalState_t, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalAddSub, CExpressionCalculator::EvalTokenList, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::EvalEquality
bool __fastcall CExpressionCalculator::EvalLessGreater(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  bool v8; // r13
  int v9; // eax
  float *m_pMemory; // rdx
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int nOp; // [rsp+8h] [rbp-48h] BYREF
  float src; // [rsp+Ch] [rbp-44h] BYREF
  CExpressionCalculator::TokenType_t pOps[16]; // [rsp+10h] [rbp-40h] BYREF

  m_Size = ctx->m_stack.m_Size;
  m_nTokenIndex = ctx->m_nTokenIndex;
  v6 = CExpressionCalculator::EvalAddSub(this, ctx);
  if ( v6 )
  {
    pOps[0] = CExpressionCalculator::TokenType_t::TOK_COMPARE_LESS;
    m_Size = ctx->m_stack.m_Size;
    pOps[1] = CExpressionCalculator::TokenType_t::TOK_COMPARE_GREATER;
    m_nTokenIndex = ctx->m_nTokenIndex;
    pOps[2] = CExpressionCalculator::TokenType_t::TOK_COMPARE_LESS_EQUAL;
    pOps[3] = CExpressionCalculator::TokenType_t::TOK_COMPARE_GREATER_EQUAL;
    nOp = 4;
    if ( CExpressionCalculator::EvalTokenList(this, ctx, pOps, &nOp) )
    {
      v8 = CExpressionCalculator::EvalLessGreater(this, ctx);
      if ( v8 )
      {
        v9 = ctx->m_stack.m_Size;
        m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
        v11 = ctx->m_stack.m_Memory.m_pMemory[v9 - 1];
        ctx->m_stack.m_Size = v9 - 1;
        v12 = m_pMemory[v9 - 2];
        ctx->m_stack.m_Size = v9 - 2;
        if ( nOp != 1 )
        {
          if ( nOp <= 1 )
          {
            if ( nOp == 0 )
            {
              if ( v11 <= v12 )
                goto LABEL_11;
              goto LABEL_14;
            }
          }
          else
          {
            if ( nOp == 2 )
            {
              if ( v11 < v12 )
                goto LABEL_11;
              goto LABEL_14;
            }
            if ( nOp == 3 )
            {
              if ( v12 < v11 )
              {
LABEL_11:
                v13 = 0.0;
LABEL_12:
                src = v13;
                CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
                return v8;
              }
LABEL_14:
              v13 = 1.0;
              goto LABEL_12;
            }
          }
          return v8;
        }
        if ( v12 <= v11 )
          goto LABEL_11;
        goto LABEL_14;
      }
    }
  }
  ctx->m_stack.m_Size = m_Size;
  ctx->m_nTokenIndex = m_nTokenIndex;
  return v6;
}


// CExpressionCalculator::EvalAddSub  (line 595, @0x00000000031b38d0, libserver.so)  // inlines: Element, EvalState_t, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalDivMul, CExpressionCalculator::EvalTokenList, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::EvalLessGreater
bool __fastcall CExpressionCalculator::EvalAddSub(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  bool v8; // r13
  int v9; // eax
  float *m_pMemory; // rdx
  float v11; // xmm0_4
  float v12; // xmm1_4
  int nOp; // [rsp+8h] [rbp-48h] BYREF
  float src; // [rsp+Ch] [rbp-44h] BYREF
  CExpressionCalculator::TokenType_t pOps[16]; // [rsp+10h] [rbp-40h] BYREF

  m_Size = ctx->m_stack.m_Size;
  m_nTokenIndex = ctx->m_nTokenIndex;
  v6 = CExpressionCalculator::EvalDivMul(this, ctx);
  if ( v6
    && (pOps[0] = CExpressionCalculator::TokenType_t::TOK_ADD,
        m_Size = ctx->m_stack.m_Size,
        pOps[1] = CExpressionCalculator::TokenType_t::TOK_SUBTRACT,
        m_nTokenIndex = ctx->m_nTokenIndex,
        nOp = 2,
        CExpressionCalculator::EvalTokenList(this, ctx, pOps, &nOp))
    && (v8 = CExpressionCalculator::EvalAddSub(this, ctx)) )
  {
    v9 = ctx->m_stack.m_Size;
    m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
    v11 = ctx->m_stack.m_Memory.m_pMemory[v9 - 1];
    ctx->m_stack.m_Size = v9 - 1;
    v12 = m_pMemory[v9 - 2];
    ctx->m_stack.m_Size = v9 - 2;
    if ( nOp != 0 )
    {
      v6 = v8;
      if ( nOp == 1 )
      {
        src = v12 - v11;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
      }
    }
    else
    {
      v6 = v8;
      src = v11 + v12;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
    }
  }
  else
  {
    ctx->m_stack.m_Size = m_Size;
    ctx->m_nTokenIndex = m_nTokenIndex;
  }
  return v6;
}


// CExpressionCalculator::EvalDivMul  (line 630, @0x00000000031b3760, libserver.so)  // inlines: Element, EvalState_t, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalUnary, CExpressionCalculator::EvalTokenList, CUtlStack<float, CUtlMemory<float, int> >::Push, fmod
// callers: CExpressionCalculator::EvalAddSub
bool __fastcall CExpressionCalculator::EvalDivMul(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  bool v8; // r13
  int v9; // eax
  float *m_pMemory; // rdx
  float v11; // xmm0_4
  float v12; // xmm1_4
  long double v13; // fst6
  char v15; // c2
  float v16; // xmm4_4
  int nOp; // [rsp+28h] [rbp-48h] BYREF
  float src; // [rsp+2Ch] [rbp-44h] BYREF
  CExpressionCalculator::TokenType_t pOps[16]; // [rsp+30h] [rbp-40h] BYREF

  m_Size = ctx->m_stack.m_Size;
  m_nTokenIndex = ctx->m_nTokenIndex;
  v6 = CExpressionCalculator::EvalUnary(this, ctx);
  if ( v6
    && (pOps[0] = CExpressionCalculator::TokenType_t::TOK_MULTIPLY,
        m_Size = ctx->m_stack.m_Size,
        pOps[1] = CExpressionCalculator::TokenType_t::TOK_DIVIDE,
        m_nTokenIndex = ctx->m_nTokenIndex,
        pOps[2] = CExpressionCalculator::TokenType_t::TOK_MODULUS,
        nOp = 3,
        CExpressionCalculator::EvalTokenList(this, ctx, pOps, &nOp))
    && (v8 = CExpressionCalculator::EvalDivMul(this, ctx)) )
  {
    v9 = ctx->m_stack.m_Size;
    m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
    v11 = ctx->m_stack.m_Memory.m_pMemory[v9 - 1];
    ctx->m_stack.m_Size = v9 - 1;
    v12 = m_pMemory[v9 - 2];
    ctx->m_stack.m_Size = v9 - 2;
    if ( nOp == 1 )
    {
      v6 = v8;
      src = v12 / v11;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
    }
    else if ( nOp == 2 )
    {
      v13 = v12;
      do
        v13 = __FPREM__(v13, v11);
      while ( v15 != 0 );
      v6 = v8;
      v16 = _mm_movedup_pd(COERCE_UNSIGNED_INT64(v13)).m128d_f64[0];
      src = v16;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
    }
    else
    {
      v6 = v8;
      if ( nOp == 0 )
      {
        v6 = v8;
        src = v11 * v12;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
      }
    }
  }
  else
  {
    ctx->m_stack.m_Size = m_Size;
    ctx->m_nTokenIndex = m_nTokenIndex;
  }
  return v6;
}


// CExpressionCalculator::EvalUnary  (line 668, @0x00000000031b3630, libserver.so)  // inlines: Element, EvalState_t, Pop, PopMultiple, Reset, Top, operator[]
// calls: CExpressionCalculator::EvalTokenList, CExpressionCalculator::EvalPrimary, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::EvalDivMul
bool __fastcall CExpressionCalculator::EvalUnary(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_Size; // r15d
  int m_nTokenIndex; // r14d
  bool v6; // r12
  int v8; // eax
  float v9; // xmm0_4
  bool v10; // zf
  float v11; // xmm0_4
  int nOp; // [rsp+4h] [rbp-4Ch] BYREF
  float f1; // [rsp+8h] [rbp-48h] BYREF
  float src; // [rsp+Ch] [rbp-44h] BYREF
  CExpressionCalculator::TokenType_t pOps[16]; // [rsp+10h] [rbp-40h] BYREF

  pOps[0] = CExpressionCalculator::TokenType_t::TOK_ADD;
  m_Size = ctx->m_stack.m_Size;
  pOps[1] = CExpressionCalculator::TokenType_t::TOK_SUBTRACT;
  m_nTokenIndex = ctx->m_nTokenIndex;
  pOps[2] = CExpressionCalculator::TokenType_t::TOK_CONDITIONAL_NOT;
  nOp = 3;
  if ( CExpressionCalculator::EvalTokenList(this, ctx, pOps, &nOp) && (v6 = CExpressionCalculator::EvalUnary(this, ctx)) )
  {
    v8 = ctx->m_stack.m_Size - 1;
    v9 = ctx->m_stack.m_Memory.m_pMemory[v8];
    ctx->m_stack.m_Size = v8;
    f1 = v9;
    switch ( nOp )
    {
      case 1:
        src = -v9;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
        break;
      case 2:
        v10 = v9 == 0.0;
        v11 = 1.0;
        if ( !v10 )
          v11 = 0.0;
        src = v11;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src);
        break;
      case 0:
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &f1);
        break;
      default:
        break;
    }
  }
  else
  {
    ctx->m_stack.m_Size = m_Size;
    ctx->m_nTokenIndex = m_nTokenIndex;
    v6 = CExpressionCalculator::EvalPrimary(this, ctx);
    if ( !v6 )
    {
      ctx->m_stack.m_Size = m_Size;
      ctx->m_nTokenIndex = m_nTokenIndex;
    }
  }
  return v6;
}


// CExpressionCalculator::EvalPrimary  (line 703, @0x00000000031b34b0, libserver.so)  // inlines: EvalExpr, EvalLiteral, EvalState_t, EvalToken, NextToken, PopMultiple, Reset
// calls: CExpressionCalculator::EvalIdentifier, CExpressionCalculator::Eval1ArgFunc, CExpressionCalculator::EvalConditional, CUtlStack<float, CUtlMemory<float, int> >::Push, CExpressionCalculator::Eval2ArgFunc, CExpressionCalculator::Eval3ArgFunc, CExpressionCalculator::Eval5ArgFunc
// callers: CExpressionCalculator::EvalUnary
bool __fastcall CExpressionCalculator::EvalPrimary(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_nTokenIndex; // r12d
  int m_Size; // r14d
  CExpressionCalculator::Token_t *v6; // rax
  CExpressionCalculator::TokenType_t v7; // edx
  float m_flValue; // xmm0_4
  bool v9; // al
  CExpressionCalculator::TokenType_t m_nType; // eax
  int v13; // eax
  CExpressionCalculator::TokenType_t v14; // edx
  bool v15; // [rsp+Ch] [rbp-44h]
  float value[13]; // [rsp+1Ch] [rbp-34h] BYREF

  value[0] = 0.0;
  m_nTokenIndex = ctx->m_nTokenIndex;
  m_Size = ctx->m_stack.m_Size;
  if ( m_nTokenIndex < this->m_nTokenCount
    && (v6 = &this->m_pTokens[m_nTokenIndex],
        v7 = v6->m_nType,
        m_flValue = v6->m_flValue,
        ctx->m_nTokenIndex = m_nTokenIndex + 1,
        v7 == CExpressionCalculator::TokenType_t::TOK_NUMBER) )
  {
    value[0] = m_flValue;
    CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, value);
    return 1;
  }
  else
  {
    ctx->m_nTokenIndex = m_nTokenIndex;
    v9 = CExpressionCalculator::EvalIdentifier(this, ctx, value);
    if ( v9 )
    {
      v15 = v9;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, value);
      return v15;
    }
    else
    {
      ctx->m_stack.m_Size = m_Size;
      ctx->m_nTokenIndex = m_nTokenIndex;
      if ( m_nTokenIndex < this->m_nTokenCount )
      {
        m_nType = this->m_pTokens[m_nTokenIndex].m_nType;
        ctx->m_nTokenIndex = m_nTokenIndex + 1;
        if ( m_nType == CExpressionCalculator::TokenType_t::TOK_LPAREN
          && CExpressionCalculator::EvalConditional(this, ctx) )
        {
          v13 = ctx->m_nTokenIndex;
          if ( v13 < this->m_nTokenCount )
          {
            v14 = this->m_pTokens[v13].m_nType;
            ctx->m_nTokenIndex = v13 + 1;
            if ( v14 == CExpressionCalculator::TokenType_t::TOK_RPAREN )
              return 1;
          }
        }
      }
      ctx->m_stack.m_Size = m_Size;
      ctx->m_nTokenIndex = m_nTokenIndex;
      if ( CExpressionCalculator::Eval1ArgFunc(this, ctx) )
        return 1;
      ctx->m_stack.m_Size = m_Size;
      ctx->m_nTokenIndex = m_nTokenIndex;
      if ( CExpressionCalculator::Eval2ArgFunc(this, ctx) )
        return 1;
      ctx->m_stack.m_Size = m_Size;
      ctx->m_nTokenIndex = m_nTokenIndex;
      if ( CExpressionCalculator::Eval3ArgFunc(this, ctx) )
      {
        return 1;
      }
      else
      {
        ctx->m_stack.m_Size = m_Size;
        ctx->m_nTokenIndex = m_nTokenIndex;
        return CExpressionCalculator::Eval5ArgFunc(this, ctx);
      }
    }
  }
}


// CExpressionCalculator::Eval1ArgFunc  (line 773, @0x00000000031b3fb0, libserver.so)  // inlines: DEG2RAD, Element, EvalExpr, EvalFunction, EvalState_t, EvalToken, NextToken, Pop, RAD2DEG, Top, operator[]
// calls: CExpressionCalculator::EvalConditional, floorf, CUtlStack<float, CUtlMemory<float, int> >::Push, logf, exp, tanf, acosf, cosf, asinf, sinf, ceilf, sqrtf
// callers: CExpressionCalculator::EvalPrimary
// globals: jpt_31B406E
bool __fastcall CExpressionCalculator::Eval1ArgFunc(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::Token_t *v5; // rdx
  CExpressionCalculator::TokenType_t m_nType; // esi
  uint32 m_nIdentifierId; // r14d
  bool v8; // r12
  CExpressionCalculator::TokenType_t v10; // edx
  int v11; // eax
  CExpressionCalculator::TokenType_t v12; // edx
  int v13; // eax
  __m128 v14; // xmm0
  __m128d v15; // xmm0
  float v16; // xmm3_4
  float v17; // xmm1_4
  __m128 v18; // xmm1
  float src[9]; // [rsp+Ch] [rbp-24h] BYREF

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex >= this->m_nTokenCount )
    return 0;
  v5 = &this->m_pTokens[m_nTokenIndex];
  m_nType = v5->m_nType;
  m_nIdentifierId = v5->m_nIdentifierId;
  ctx->m_nTokenIndex = m_nTokenIndex + 1;
  if ( m_nType != CExpressionCalculator::TokenType_t::TOK_FUNCTION_1_ARGS )
    return 0;
  if ( m_nTokenIndex + 1 >= this->m_nTokenCount )
    return 0;
  v10 = this->m_pTokens[m_nTokenIndex + 1].m_nType;
  ctx->m_nTokenIndex = m_nTokenIndex + 2;
  if ( v10 != CExpressionCalculator::TokenType_t::TOK_LPAREN )
    return 0;
  v8 = CExpressionCalculator::EvalConditional(this, ctx);
  if ( !v8 )
    return 0;
  v11 = ctx->m_nTokenIndex;
  if ( v11 >= this->m_nTokenCount )
    return 0;
  v12 = this->m_pTokens[v11].m_nType;
  ctx->m_nTokenIndex = v11 + 1;
  if ( v12 != CExpressionCalculator::TokenType_t::TOK_RPAREN )
    return 0;
  v13 = ctx->m_stack.m_Size - 1;
  v14.m128_i32[0] = LODWORD(ctx->m_stack.m_Memory.m_pMemory[v13]);
  ctx->m_stack.m_Size = v13;
  switch ( m_nIdentifierId )
  {
    case 0u:
      src[0] = fabs(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 1u:
      src[0] = v14.m128_f32[0] * v14.m128_f32[0];
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 2u:
      v17 = fsqrt(v14.m128_f32[0]);
      goto LABEL_23;
    case 3u:
      src[0] = sinf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 4u:
      src[0] = asinf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 5u:
      src[0] = cosf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 6u:
      src[0] = acosf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 7u:
      src[0] = tanf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 8u:
      v15.m128d_f64[0] = exp(v14.m128_f32[0]);
      v16 = _mm_movedup_pd(v15).m128d_f64[0];
      src[0] = v16;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 9u:
      src[0] = logf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 0xAu:
      src[0] = v14.m128_f32[0] * 0.017453292;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 0xBu:
      src[0] = v14.m128_f32[0] * 57.295776;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 0xCu:
      goto LABEL_12;
    case 0xDu:
      src[0] = ceilf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      return v8;
    case 0xEu:
      v14.m128_f32[0] = v14.m128_f32[0] + 0.5;
LABEL_12:
      src[0] = floorf(v14.m128_f32[0]);
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      break;
    case 0xFu:
      v18 = _mm_cmple_ss(0LL, v14);
      LODWORD(v17) = _mm_andnot_ps(v18, 0xBF800000).m128_u32[0] | v18.m128_i32[0] & 0x3F800000;
LABEL_23:
      src[0] = v17;
      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
      break;
    default:
      return v8;
  }
  return v8;
}


// CExpressionCalculator::Eval2ArgFunc  (line 848, @0x00000000031b4250, libserver.so)  // inlines: Element, EvalExpr, EvalFunction, EvalState_t, EvalToken, NextToken, Pop, Top, operator[]
// calls: CExpressionCalculator::EvalConditional, pow, CUtlStack<float, CUtlMemory<float, int> >::Push, atan2
// callers: CExpressionCalculator::EvalPrimary
bool __fastcall CExpressionCalculator::Eval2ArgFunc(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::Token_t *v5; // rdx
  CExpressionCalculator::TokenType_t m_nType; // esi
  uint32 m_nIdentifierId; // r14d
  bool v8; // r12
  CExpressionCalculator::TokenType_t v10; // edx
  int v11; // eax
  CExpressionCalculator::TokenType_t v12; // edx
  int v13; // eax
  CExpressionCalculator::TokenType_t v14; // edx
  int m_Size; // eax
  float *m_pMemory; // rdx
  float v17; // xmm1_4
  float v18; // xmm0_4
  __m128d v19; // xmm0
  float v20; // xmm3_4
  CExpressionCalculator::EvalContext_t *v21; // rdi
  const float *p_f2; // rsi
  __m128d v23; // xmm0
  float v24; // xmm2_4
  float f2; // [rsp+4h] [rbp-2Ch] BYREF
  float f1; // [rsp+8h] [rbp-28h] BYREF
  float src[9]; // [rsp+Ch] [rbp-24h] BYREF

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex < this->m_nTokenCount )
  {
    v5 = &this->m_pTokens[m_nTokenIndex];
    m_nType = v5->m_nType;
    m_nIdentifierId = v5->m_nIdentifierId;
    ctx->m_nTokenIndex = m_nTokenIndex + 1;
    if ( m_nType == CExpressionCalculator::TokenType_t::TOK_FUNCTION_2_ARGS && m_nTokenIndex + 1 < this->m_nTokenCount )
    {
      v10 = this->m_pTokens[m_nTokenIndex + 1].m_nType;
      ctx->m_nTokenIndex = m_nTokenIndex + 2;
      if ( v10 == CExpressionCalculator::TokenType_t::TOK_LPAREN && CExpressionCalculator::EvalConditional(this, ctx) )
      {
        v11 = ctx->m_nTokenIndex;
        if ( v11 < this->m_nTokenCount )
        {
          v12 = this->m_pTokens[v11].m_nType;
          ctx->m_nTokenIndex = v11 + 1;
          if ( v12 == CExpressionCalculator::TokenType_t::TOK_COMMA )
          {
            v8 = CExpressionCalculator::EvalConditional(this, ctx);
            if ( v8 )
            {
              v13 = ctx->m_nTokenIndex;
              if ( v13 < this->m_nTokenCount )
              {
                v14 = this->m_pTokens[v13].m_nType;
                ctx->m_nTokenIndex = v13 + 1;
                if ( v14 == CExpressionCalculator::TokenType_t::TOK_RPAREN )
                {
                  m_Size = ctx->m_stack.m_Size;
                  m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
                  v17 = ctx->m_stack.m_Memory.m_pMemory[m_Size - 1];
                  ctx->m_stack.m_Size = m_Size - 1;
                  f2 = v17;
                  v18 = m_pMemory[m_Size - 2];
                  ctx->m_stack.m_Size = m_Size - 2;
                  f1 = v18;
                  if ( m_nIdentifierId == 1 )
                  {
                    v21 = ctx;
                    p_f2 = &f2;
                    if ( v18 > v17 )
                      p_f2 = &f1;
                    goto LABEL_24;
                  }
                  if ( m_nIdentifierId == 0 )
                  {
                    v21 = ctx;
                    p_f2 = &f2;
                    if ( v17 > v18 )
                      p_f2 = &f1;
LABEL_24:
                    CUtlStack<float,CUtlMemory<float,int>>::Push(&v21->m_stack, p_f2);
                    return v8;
                  }
                  if ( m_nIdentifierId != 2 )
                  {
                    if ( m_nIdentifierId == 3 )
                    {
                      v19.m128d_f64[0] = pow(v18, v17);
                      v20 = _mm_movedup_pd(v19).m128d_f64[0];
                      src[0] = v20;
                      CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
                      return v8;
                    }
                    return v8;
                  }
                  v23.m128d_f64[0] = atan2(v18, v17);
                  v24 = _mm_movedup_pd(v23).m128d_f64[0];
                  src[0] = v24;
                  CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
                  return v8;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ramp  (line 901, @0x00000000031b3140, libserver.so)
float __fastcall ramp(float a1, float x, float a, float b)
{
  return (a1 - x) / (a - x);
}


// lerp  (line 906, @0x00000000031b3160, libserver.so)
float __fastcall lerp(float a1, float x, float a, float b)
{
  return ((a - x) * a1) + x;
}


// smoothstep  (line 911, @0x00000000031b3180, libserver.so)
float __fastcall smoothstep(float a1, float x)
{
  return ((3.0 * a1) * a1) - (((a1 + a1) * a1) * a1);
}


// CExpressionCalculator::Eval3ArgFunc  (line 916, @0x00000000031b31d0, libserver.so)  // inlines: Element, EvalExpr, EvalFunction, EvalState_t, EvalToken, NextToken, Pop, Top, Vector, lerp, operator[], ramp, smoothstep
// calls: CExpressionCalculator::EvalConditional, CUtlStack<float, CUtlMemory<float, int> >::Push, ImprovedPerlinNoise
// callers: CExpressionCalculator::EvalPrimary
// globals: jpt_31B332B
bool __fastcall CExpressionCalculator::Eval3ArgFunc(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::Token_t *v5; // rdx
  CExpressionCalculator::TokenType_t m_nType; // esi
  uint32 m_nIdentifierId; // r14d
  bool v8; // r12
  bool result; // al
  CExpressionCalculator::TokenType_t v10; // edx
  int v11; // eax
  CExpressionCalculator::TokenType_t v12; // edx
  int v13; // eax
  CExpressionCalculator::TokenType_t v14; // edx
  int v15; // eax
  CExpressionCalculator::TokenType_t v16; // edx
  int m_Size; // eax
  float *m_pMemory; // rdx
  __int64 v19; // rdi
  __m128 v20; // xmm3
  float v21; // xmm1_4
  __m128 v22; // xmm0
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  const float *p_f3; // rsi
  float v29; // xmm0_4
  float f3; // [rsp+0h] [rbp-40h] BYREF
  float f2; // [rsp+4h] [rbp-3Ch] BYREF
  float f1; // [rsp+8h] [rbp-38h] BYREF
  float v33; // [rsp+Ch] [rbp-34h] BYREF
  Vector src[4]; // [rsp+10h] [rbp-30h] BYREF

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex >= this->m_nTokenCount )
    return 0;
  v5 = &this->m_pTokens[m_nTokenIndex];
  m_nType = v5->m_nType;
  m_nIdentifierId = v5->m_nIdentifierId;
  ctx->m_nTokenIndex = m_nTokenIndex + 1;
  if ( m_nType != CExpressionCalculator::TokenType_t::TOK_FUNCTION_3_ARGS )
    return 0;
  if ( m_nTokenIndex + 1 >= this->m_nTokenCount )
    return 0;
  v10 = this->m_pTokens[m_nTokenIndex + 1].m_nType;
  ctx->m_nTokenIndex = m_nTokenIndex + 2;
  if ( v10 != CExpressionCalculator::TokenType_t::TOK_LPAREN )
    return 0;
  if ( !CExpressionCalculator::EvalConditional(this, ctx) )
    return 0;
  v11 = ctx->m_nTokenIndex;
  if ( v11 >= this->m_nTokenCount )
    return 0;
  v12 = this->m_pTokens[v11].m_nType;
  ctx->m_nTokenIndex = v11 + 1;
  if ( v12 != CExpressionCalculator::TokenType_t::TOK_COMMA )
    return 0;
  if ( CExpressionCalculator::EvalConditional(this, ctx)
    && (v13 = ctx->m_nTokenIndex) < this->m_nTokenCount
    && (v14 = this->m_pTokens[v13].m_nType,
        ctx->m_nTokenIndex = v13 + 1,
        v14 == CExpressionCalculator::TokenType_t::TOK_COMMA)
    && (v8 = CExpressionCalculator::EvalConditional(this, ctx))
    && (v15 = ctx->m_nTokenIndex) < this->m_nTokenCount
    && (v16 = this->m_pTokens[v15].m_nType,
        ctx->m_nTokenIndex = v15 + 1,
        v16 == CExpressionCalculator::TokenType_t::TOK_RPAREN) )
  {
    m_Size = ctx->m_stack.m_Size;
    m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
    v19 = m_Size - 1;
    v20.m128_i32[0] = LODWORD(ctx->m_stack.m_Memory.m_pMemory[v19]);
    ctx->m_stack.m_Size = m_Size - 1;
    f3 = v20.m128_f32[0];
    v21 = m_pMemory[v19 - 1];
    ctx->m_stack.m_Size = m_Size - 2;
    f2 = v21;
    v22 = LODWORD(m_pMemory[v19 - 2]);
    ctx->m_stack.m_Size = m_Size - 3;
    f1 = v22.m128_f32[0];
    switch ( m_nIdentifierId )
    {
      case 0u:
        if ( v22.m128_f32[0] < v21 )
          v26 = 0.0;
        else
          LODWORD(v26) = _mm_cmple_ss(v22, v20).m128_u32[0] & 0x3F800000;
        goto LABEL_23;
      case 1u:
        p_f3 = &f3;
        if ( v22.m128_f32[0] <= v20.m128_f32[0] )
        {
          p_f3 = &f1;
          if ( v21 > v22.m128_f32[0] )
            p_f3 = &f2;
        }
        goto LABEL_29;
      case 2u:
        src[0].x = (v22.m128_f32[0] - v21) / (v20.m128_f32[0] - v21);
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src[0].x);
        return v8;
      case 3u:
        src[0].x = ((v20.m128_f32[0] - v21) * v22.m128_f32[0]) + v21;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src[0].x);
        return v8;
      case 4u:
        v24 = v22.m128_f32[0] - v21;
        v25 = v20.m128_f32[0] - v21;
        v26 = 1.0;
        v27 = v24 / v25;
        if ( v27 <= 1.0 )
          v26 = fmaxf(0.0, v27);
LABEL_23:
        src[0].x = v26;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src[0].x);
        result = v8;
        break;
      case 5u:
        v23 = ((v20.m128_f32[0] - v21) * v22.m128_f32[0]) + v21;
        if ( v23 <= v20.m128_f32[0] )
          v20.m128_i32[0] = fmaxf(v21, v23);
        LODWORD(src[0].x) = v20.m128_i32[0];
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src[0].x);
        return v8;
      case 6u:
        src[0].x = ((((3.0 * v22.m128_f32[0]) * v22.m128_f32[0])
                   - (((v22.m128_f32[0] + v22.m128_f32[0]) * v22.m128_f32[0]) * v22.m128_f32[0]))
                  * (v20.m128_f32[0] - v21))
                 + v21;
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, &src[0].x);
        return v8;
      case 7u:
        LODWORD(src[0].x) = v22.m128_i32[0];
        src[0].y = v21;
        LODWORD(src[0].z) = v20.m128_i32[0];
        v29 = ImprovedPerlinNoise(src);
        p_f3 = &v33;
        v33 = v29;
LABEL_29:
        CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, p_f3);
        result = v8;
        break;
      default:
        return v8;
    }
  }
  else
  {
    return 0;
  }
  return result;
}


// rescale  (line 975, @0x00000000031b31b0, libserver.so)  // inlines: lerp, ramp
float __fastcall rescale(float a1, float x, float a, float b, float c, float d)
{
  return (((a1 - x) / (a - x)) * (c - b)) + b;
}


// CExpressionCalculator::Eval5ArgFunc  (line 980, @0x00000000031b4420, libserver.so)  // inlines: Element, EvalExpr, EvalFunction, EvalState_t, EvalToken, NextToken, Pop, Top, lerp, operator[], ramp, rescale
// calls: CExpressionCalculator::EvalConditional, CUtlStack<float, CUtlMemory<float, int> >::Push
// callers: CExpressionCalculator::EvalPrimary
bool __fastcall CExpressionCalculator::Eval5ArgFunc(
        CExpressionCalculator *const this,
        CExpressionCalculator::EvalContext_t *const ctx)
{
  int m_nTokenIndex; // eax
  CExpressionCalculator::Token_t *v5; // rdx
  CExpressionCalculator::TokenType_t m_nType; // esi
  uint32 m_nIdentifierId; // r14d
  bool v8; // r12
  CExpressionCalculator::TokenType_t v10; // edx
  int v11; // eax
  CExpressionCalculator::TokenType_t v12; // edx
  int v13; // eax
  CExpressionCalculator::TokenType_t v14; // edx
  int v15; // eax
  CExpressionCalculator::TokenType_t v16; // edx
  int v17; // eax
  CExpressionCalculator::TokenType_t v18; // edx
  int v19; // eax
  CExpressionCalculator::TokenType_t v20; // edx
  int m_Size; // eax
  float *m_pMemory; // rdx
  __int64 v23; // rdi
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float src[9]; // [rsp+Ch] [rbp-24h] BYREF

  m_nTokenIndex = ctx->m_nTokenIndex;
  if ( m_nTokenIndex < this->m_nTokenCount )
  {
    v5 = &this->m_pTokens[m_nTokenIndex];
    m_nType = v5->m_nType;
    m_nIdentifierId = v5->m_nIdentifierId;
    ctx->m_nTokenIndex = m_nTokenIndex + 1;
    if ( m_nType == CExpressionCalculator::TokenType_t::TOK_FUNCTION_5_ARGS && m_nTokenIndex + 1 < this->m_nTokenCount )
    {
      v10 = this->m_pTokens[m_nTokenIndex + 1].m_nType;
      ctx->m_nTokenIndex = m_nTokenIndex + 2;
      if ( v10 == CExpressionCalculator::TokenType_t::TOK_LPAREN && CExpressionCalculator::EvalConditional(this, ctx) )
      {
        v11 = ctx->m_nTokenIndex;
        if ( v11 < this->m_nTokenCount )
        {
          v12 = this->m_pTokens[v11].m_nType;
          ctx->m_nTokenIndex = v11 + 1;
          if ( v12 == CExpressionCalculator::TokenType_t::TOK_COMMA && CExpressionCalculator::EvalConditional(this, ctx) )
          {
            v13 = ctx->m_nTokenIndex;
            if ( v13 < this->m_nTokenCount )
            {
              v14 = this->m_pTokens[v13].m_nType;
              ctx->m_nTokenIndex = v13 + 1;
              if ( v14 == CExpressionCalculator::TokenType_t::TOK_COMMA
                && CExpressionCalculator::EvalConditional(this, ctx) )
              {
                v15 = ctx->m_nTokenIndex;
                if ( v15 < this->m_nTokenCount )
                {
                  v16 = this->m_pTokens[v15].m_nType;
                  ctx->m_nTokenIndex = v15 + 1;
                  if ( v16 == CExpressionCalculator::TokenType_t::TOK_COMMA
                    && CExpressionCalculator::EvalConditional(this, ctx) )
                  {
                    v17 = ctx->m_nTokenIndex;
                    if ( v17 < this->m_nTokenCount )
                    {
                      v18 = this->m_pTokens[v17].m_nType;
                      ctx->m_nTokenIndex = v17 + 1;
                      if ( v18 == CExpressionCalculator::TokenType_t::TOK_COMMA )
                      {
                        v8 = CExpressionCalculator::EvalConditional(this, ctx);
                        if ( v8 )
                        {
                          v19 = ctx->m_nTokenIndex;
                          if ( v19 < this->m_nTokenCount )
                          {
                            v20 = this->m_pTokens[v19].m_nType;
                            ctx->m_nTokenIndex = v19 + 1;
                            if ( v20 == CExpressionCalculator::TokenType_t::TOK_RPAREN )
                            {
                              m_Size = ctx->m_stack.m_Size;
                              m_pMemory = ctx->m_stack.m_Memory.m_pMemory;
                              v23 = m_Size - 1;
                              v24 = ctx->m_stack.m_Memory.m_pMemory[v23];
                              ctx->m_stack.m_Size = m_Size - 1;
                              v25 = m_pMemory[v23 - 1];
                              ctx->m_stack.m_Size = m_Size - 2;
                              v26 = m_pMemory[v23 - 2];
                              ctx->m_stack.m_Size = m_Size - 3;
                              v27 = m_pMemory[v23 - 3];
                              ctx->m_stack.m_Size = m_Size - 4;
                              v28 = m_pMemory[v23 - 4];
                              ctx->m_stack.m_Size = m_Size - 5;
                              if ( m_nIdentifierId == 0 )
                              {
                                src[0] = (((v28 - v27) / (v26 - v27)) * (v24 - v25)) + v25;
                                CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
                                return v8;
                              }
                              if ( m_nIdentifierId != 1 )
                                return v8;
                              v29 = ((v28 - v27) / (v26 - v27)) * (v24 - v25);
                              v30 = v24;
                              v31 = v29 + v25;
                              if ( v31 <= v24 )
                                v30 = fmaxf(v25, v31);
                              src[0] = v30;
                              CUtlStack<float,CUtlMemory<float,int>>::Push(&ctx->m_stack, src);
                              return v8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// EvaluateExpression  (line 1023, @0x00000000031b4ce0, libserver.so)  // inlines: CExpressionCalculator, CUtlHashtable, CUtlMemory, Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CExpressionCalculator, ~CUtlHashtable, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CExpressionCalculator::SetExpression, CExpressionCalculator::Evaluate, CUtlString::FreeMemoryBlock, operator delete, operator delete [], CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, CUtlMemory<CUtlString, int>::Purge, CExpressionCalculator::~CExpressionCalculator, _Unwind_Resume, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::~CUtlHashtable
float __fastcall EvaluateExpression(const char *pExpr, __m128i a2, float flValueToReturnIfFailure)
{
  int v3; // ebx
  float v4; // r15d
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *m_pVarNames; // r14
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v8; // rdi
  bool v9; // zf
  unsigned int flResult; // [rsp+0h] [rbp-74h] BYREF
  CExpressionCalculator myEvaluator; // [rsp+4h] [rbp-70h] BYREF

  v3 = _mm_cvtsi128_si32(a2);
  myEvaluator.m_varValues.m_nMinSize = 32;
  myEvaluator.m_varValues.m_bSizeLocked = 0;
  myEvaluator.m_pVarNames = 0;
  memset(&myEvaluator.m_pTokens, 0, 28);
  myEvaluator.m_nTokenCount = 0;
  CExpressionCalculator::SetExpression(&myEvaluator, pExpr, 0);
  v4 = *&v3;
  if ( CExpressionCalculator::Evaluate(&myEvaluator, &flResult) )
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(flResult));
  m_pVarNames = myEvaluator.m_pVarNames;
  if ( myEvaluator.m_pVarNames != 0 )
  {
    m_Size = myEvaluator.m_pVarNames->m_Size;
    for ( i = 8LL * myEvaluator.m_pVarNames->m_Size - 8; --m_Size >= 0; i -= 8 )
    {
      v8 = (m_pVarNames->m_Memory.m_pMemory + i);
      if ( v8->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v8);
    }
    v9 = (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pVarNames->m_Size = 0;
    if ( v9 )
    {
      CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
      if ( (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
    }
    operator delete(m_pVarNames);
  }
  if ( myEvaluator.m_pTokens != 0 )
    operator delete[](myEvaluator.m_pTokens);
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(&myEvaluator.m_varValues);
  if ( (myEvaluator.m_varValues.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&myEvaluator.m_varValues.m_table);
  return v4;
}


