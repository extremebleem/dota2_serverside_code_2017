
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_exprevaluator.cpp  (line 0, @0x0000000001a67460, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_exprevaluator_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// DefaultConditionalSymbolProc  (line 26, @0x0000000002f8d8e0, libserver.so)  // inlines: GetOSType
// calls: V_stricmp_fast, KeyValuesSystem, Plat_GetOSType, Plat_IsHighDPI
// strings: "WIN32", "WINDOWS", "X360", "PS3", "OSX", "LINUX" (11 total)
bool __fastcall DefaultConditionalSymbolProc(const char *pKey)
{
  const char *v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax

  v1 = &pKey[*pKey == 36];
  if ( V_stricmp_fast(v1, "WIN32") == 0 )
    return 1;
  if ( V_stricmp_fast(v1, "WINDOWS") != 0
    && V_stricmp_fast(v1, "X360") != 0
    && V_stricmp_fast(v1, "PS3") != 0
    && V_stricmp_fast(v1, "OSX") != 0 )
  {
    if ( V_stricmp_fast(v1, "LINUX") == 0 || V_stricmp_fast(v1, "POSIX") == 0 )
      return 1;
    if ( V_stricmp_fast(v1, "WINXP") == 0 )
      return Plat_GetOSType() == 7;
    if ( V_stricmp_fast(v1, "GAMECONSOLE") != 0 && V_stricmp_fast(v1, "DEMO") != 0 )
    {
      V_stricmp_fast(v1, "LOWVIOLENCE");
      if ( V_stricmp_fast(v1, "HIGHDPI") == 0 )
        return (Plat_IsHighDPI)(v3);
      v4 = KeyValuesSystem(v3);
      return (*(*v4 + 56LL))(v4, v1);
    }
  }
  return 0;
}


// DefaultConditionalErrorProc  (line 108, @0x0000000002f8da40, libserver.so)
// calls: Warning
// strings: "Conditional Error: %s\n"
void __fastcall DefaultConditionalErrorProc(const char *pReason)
{
  Warning("Conditional Error: %s\n", pReason);
}


// CExpressionEvaluator::CExpressionEvaluator  (line 113, @0x0000000002f8da60, libserver.so)
// callers: _GLOBAL__sub_I_keyvalues.cpp
void __fastcall CExpressionEvaluator::CExpressionEvaluator(CExpressionEvaluator *const this)
{
  this->m_ExprTree = 0;
}


// CExpressionEvaluator::~CExpressionEvaluator  (line 118, @0x0000000002f8db20, libserver.so)
// calls: CExpressionEvaluator::FreeTree
void __fastcall CExpressionEvaluator::~CExpressionEvaluator(CExpressionEvaluator *const this)
{
  CExpressionEvaluator::FreeTree(this, &this->m_ExprTree);
}


// CExpressionEvaluator::GetNextToken  (line 126, @0x0000000002f8da70, libserver.so)
char __fastcall CExpressionEvaluator::GetNextToken(CExpressionEvaluator *const this)
{
  int m_CurPosition; // edx
  const char *m_pExpression; // rsi
  char *v3; // rcx
  __int64 v4; // rax
  char result; // al

  m_CurPosition = this->m_CurPosition;
  m_pExpression = this->m_pExpression;
  v3 = &m_pExpression[m_CurPosition];
  if ( *v3 == 32 )
  {
    v4 = &m_pExpression[m_CurPosition + 1];
    do
    {
      ++m_CurPosition;
      v3 = v4++;
      this->m_CurPosition = m_CurPosition;
    }
    while ( *(v4 - 1) == 32 );
  }
  this->m_CurPosition = m_CurPosition + 1;
  result = *v3;
  this->m_CurToken = *v3;
  return result;
}


// CExpressionEvaluator::FreeNode  (line 142, @0x0000000002f8dac0, libserver.so)
// calls: operator delete
void __fastcall CExpressionEvaluator::FreeNode(CExpressionEvaluator *const this, ExprNode *pNode)
{
  operator delete(pNode);
}


// CExpressionEvaluator::AllocateNode  (line 147, @0x0000000002f8dad0, libserver.so)
// calls: operator new
ExprNode *__fastcall CExpressionEvaluator::AllocateNode(CExpressionEvaluator *const this)
{
  return operator new(0x18u);
}


// CExpressionEvaluator::FreeTree  (line 152, @0x0000000002f8dae0, libserver.so)  // inlines: FreeNode
// calls: operator delete
// callers: CExpressionEvaluator::~CExpressionEvaluator, CExpressionEvaluator::Evaluate
void __fastcall CExpressionEvaluator::FreeTree(CExpressionEvaluator *const this, ExprTree *const node)
{
  ExprTree v3; // rsi

  v3 = *node;
  if ( v3 != 0 )
  {
    CExpressionEvaluator::FreeTree(this, &v3->left);
    CExpressionEvaluator::FreeTree(this, &(*node)->right);
    operator delete(*node);
    *node = 0;
  }
}


// CExpressionEvaluator::IsConditional  (line 163, @0x0000000002f8dce0, libserver.so)
// calls: CFmtStrN<256, false>::CFmtStrN, __stack_chk_fail
// callers: CExpressionEvaluator::MakeExpression
// strings: "Bad expression operator: '%c%c', expected C style boolean expression operator."
bool __fastcall CExpressionEvaluator::IsConditional(
        CExpressionEvaluator *const this,
        bool *const bConditional,
        const char token)
{
  bool result; // al
  __int64 m_CurPosition; // rcx
  const char *m_pExpression; // r8
  __int64 v6; // rcx
  SyntaxErrorProc_t m_pSyntaxErrorProc; // rbx
  CFmtStrN<256,false> v8; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  result = token == 38 || token == 124;
  if ( result )
  {
    m_CurPosition = this->m_CurPosition;
    m_pExpression = this->m_pExpression;
    this->m_CurPosition = m_CurPosition + 1;
    v6 = m_pExpression[m_CurPosition];
    if ( (token & v6) == token )
    {
      *bConditional = 1;
    }
    else
    {
      m_pSyntaxErrorProc = this->m_pSyntaxErrorProc;
      if ( m_pSyntaxErrorProc != 0 )
      {
        CFmtStrN<256,false>::CFmtStrN(
          &v8,
          "Bad expression operator: '%c%c', expected C style boolean expression operator.",
          token,
          v6);
        m_pSyntaxErrorProc(v8.m_szBuf);
        return 0;
      }
    }
  }
  else
  {
    *bConditional = 0;
    return 1;
  }
  return result;
}


// CExpressionEvaluator::IsNotOp  (line 189, @0x0000000002f8db30, libserver.so)
bool __fastcall CExpressionEvaluator::IsNotOp(CExpressionEvaluator *const this, const char token)
{
  return token == 33;
}


// CExpressionEvaluator::IsIdentifierOrConstant  (line 197, @0x0000000002f8db40, libserver.so)  // inlines: V_isalnum, V_isdigit
// callers: CExpressionEvaluator::MakeFactor
bool __fastcall CExpressionEvaluator::IsIdentifierOrConstant(CExpressionEvaluator *const this, const char token)
{
  int m_CurPosition; // r9d
  int v3; // edx
  const char *v4; // r8
  char v5; // cl
  __int64 v6; // rax
  int v7; // ecx
  int v9; // eax
  __int64 v10; // rdx
  const char *m_pExpression; // r8
  int v12; // esi
  char v13; // al

  if ( token != 36 )
  {
    if ( (token - 48) <= 9u )
    {
      m_CurPosition = this->m_CurPosition;
      this->m_Identifier[0] = token;
      v3 = 1;
      v4 = &this->m_pExpression[m_CurPosition];
      v5 = *v4;
      if ( (*v4 - 48) > 9u )
        goto LABEL_7;
      v6 = 0;
      v3 = 1;
      while ( 1 )
      {
        this->m_Identifier[v6 + 1] = v5;
        v7 = v3 + m_CurPosition;
        ++v3;
        this->m_CurPosition = v7;
        v5 = v4[v6 + 1];
        if ( (v5 - 48) > 9u )
          break;
        ++v6;
        if ( v3 == 128 )
          return 0;
      }
      if ( v3 <= 126 )
      {
LABEL_7:
        this->m_Identifier[v3] = 0;
        return 1;
      }
    }
    return 0;
  }
  v9 = this->m_CurPosition;
  this->m_Identifier[0] = 36;
  v10 = 0;
  m_pExpression = this->m_pExpression;
  while ( 1 )
  {
    v12 = v10 + 1;
    v13 = m_pExpression[v9];
    if ( ((v13 & 0xDF) - 65) > 0x19u && (v13 - 48) > 9u && v13 != 95 )
      break;
    if ( ++v10 == 128 )
      return 0;
    this->m_Identifier[v10] = v13;
    v9 = this->m_CurPosition + 1;
    this->m_CurPosition = v9;
  }
  if ( v12 > 126 )
    return 0;
  this->m_Identifier[v12] = 0;
  return 1;
}


// CExpressionEvaluator::MakeExprNode  (line 241, @0x0000000002f8dda0, libserver.so)  // inlines: AllocateNode, V_isdigit
// calls: operator new, CFmtStrN<256, false>::CFmtStrN, V_atoi, __stack_chk_fail
// callers: CExpressionEvaluator::MakeFactor, CExpressionEvaluator::MakeTerm, CExpressionEvaluator::MakeExpression
// strings: "Logic Error in CExpressionEvaluator"
bool __fastcall CExpressionEvaluator::MakeExprNode(
        CExpressionEvaluator *const this,
        ExprTree *const tree,
        char token,
        Kind kind,
        ExprTree left,
        ExprTree right)
{
  ExprNode *v11; // rax
  bool v12; // r13
  SyntaxErrorProc_t m_pSyntaxErrorProc; // rbx
  char *m_Identifier; // rdi
  ExprTree v16; // rbx
  CFmtStrN<256,false> v18; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v19; // [rsp+128h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v11 = operator new(0x18u);
  *tree = v11;
  v11->left = left;
  v12 = 1;
  (*tree)->right = right;
  (*tree)->kind = kind;
  if ( kind != Kind::NOT )
  {
    if ( kind == Kind::LITERAL )
    {
      m_Identifier = this->m_Identifier;
      v16 = *tree;
      if ( (this->m_Identifier[0] - 48) > 9u )
        v16->data.cond = this->m_pGetSymbolProc(m_Identifier);
      else
        v16->data.cond = V_atoi(m_Identifier) != 0;
    }
    else if ( kind != Kind::CONDITIONAL )
    {
      m_pSyntaxErrorProc = this->m_pSyntaxErrorProc;
      v12 = 0;
      if ( m_pSyntaxErrorProc != 0 )
      {
        CFmtStrN<256,false>::CFmtStrN(&v18, "Logic Error in CExpressionEvaluator");
        m_pSyntaxErrorProc(v18.m_szBuf);
      }
    }
    else
    {
      (*tree)->data.cond = token;
    }
  }
  return v12;
}


// CExpressionEvaluator::MakeFactor  (line 283, @0x0000000002f8dec0, libserver.so)  // inlines: GetNextToken, IsNotOp
// calls: CExpressionEvaluator::IsIdentifierOrConstant, CFmtStrN<256, false>::CFmtStrN, CExpressionEvaluator::MakeExpression, CExpressionEvaluator::MakeExprNode, __stack_chk_fail
// callers: CExpressionEvaluator::MakeTerm
// strings: "Bad expression token: %c"
bool __fastcall CExpressionEvaluator::MakeFactor(CExpressionEvaluator *const this, ExprTree *const tree)
{
  char m_CurToken; // al
  bool IsIdentifierOrConstant; // al
  __int64 v6; // rdx
  bool result; // al
  SyntaxErrorProc_t m_pSyntaxErrorProc; // rbx
  const char *m_pExpression; // rsi
  int m_CurPosition; // edi
  char *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // esi
  int v15; // eax
  const char *v16; // rcx
  const char *i; // rdx
  CFmtStrN<256,false> v18; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v19; // [rsp+118h] [rbp-18h]

  v19 = __readfsqword(0x28u);
  m_CurToken = this->m_CurToken;
  if ( m_CurToken == 40 )
  {
    m_pExpression = this->m_pExpression;
    m_CurPosition = this->m_CurPosition;
    v11 = &m_pExpression[m_CurPosition];
    if ( *v11 == 32 )
    {
      v12 = m_CurPosition + 1;
      v13 = &m_pExpression[m_CurPosition + 1];
      do
      {
        this->m_CurPosition = v12;
        v11 = v13;
        m_CurPosition = v12;
        ++v13;
        ++v12;
      }
      while ( *v11 == 32 );
    }
    this->m_CurPosition = m_CurPosition + 1;
    this->m_CurToken = *v11;
    if ( !CExpressionEvaluator::MakeExpression(this, tree) )
      return 0;
  }
  else
  {
    IsIdentifierOrConstant = CExpressionEvaluator::IsIdentifierOrConstant(this, m_CurToken);
    v6 = this->m_CurToken;
    if ( !IsIdentifierOrConstant )
    {
      result = 1;
      if ( this->m_CurToken == 33 )
        return result;
      m_pSyntaxErrorProc = this->m_pSyntaxErrorProc;
      if ( m_pSyntaxErrorProc != 0 )
      {
        CFmtStrN<256,false>::CFmtStrN(&v18, "Bad expression token: %c", v6);
        m_pSyntaxErrorProc(v18.m_szBuf);
      }
      return 0;
    }
    if ( !CExpressionEvaluator::MakeExprNode(this, tree, this->m_CurToken, Kind::LITERAL, 0, 0) )
      return 0;
  }
  v14 = this->m_CurPosition;
  v15 = v14 + 1;
  v16 = &this->m_pExpression[v14];
  for ( i = v16 + 1; *v16 == 32; ++v15 )
  {
    this->m_CurPosition = v15;
    v16 = i;
    v14 = v15;
    ++i;
  }
  this->m_CurPosition = v14 + 1;
  this->m_CurToken = *v16;
  return 1;
}


// CExpressionEvaluator::MakeTerm  (line 327, @0x0000000002f8e030, libserver.so)  // inlines: GetNextToken, IsNotOp
// calls: CExpressionEvaluator::MakeFactor, CExpressionEvaluator::MakeExprNode
// callers: CExpressionEvaluator::MakeExpression
bool __fastcall CExpressionEvaluator::MakeTerm(CExpressionEvaluator *const this, ExprTree *const tree)
{
  bool Factor; // r13
  int m_CurPosition; // esi
  const char *m_pExpression; // rcx
  char *v8; // r8
  int v9; // edx
  __int64 v10; // rcx

  Factor = CExpressionEvaluator::MakeFactor(this, tree);
  if ( Factor )
  {
    while ( this->m_CurToken == 33 )
    {
      if ( CExpressionEvaluator::MakeExprNode(this, tree, 33, Kind::NOT, *tree, 0) )
      {
        m_CurPosition = this->m_CurPosition;
        m_pExpression = this->m_pExpression;
        v8 = &m_pExpression[m_CurPosition];
        if ( *v8 == 32 )
        {
          v9 = m_CurPosition + 1;
          v10 = &m_pExpression[m_CurPosition + 1];
          do
          {
            this->m_CurPosition = v9;
            v8 = v10;
            m_CurPosition = v9;
            ++v10;
            ++v9;
          }
          while ( *v8 == 32 );
        }
        this->m_CurPosition = m_CurPosition + 1;
        this->m_CurToken = *v8;
        if ( CExpressionEvaluator::MakeFactor(this, &(*tree)->right) )
          continue;
      }
      return 0;
    }
  }
  return Factor;
}


// CExpressionEvaluator::MakeExpression  (line 361, @0x0000000002f8e0f0, libserver.so)  // inlines: GetNextToken
// calls: CExpressionEvaluator::MakeTerm, CExpressionEvaluator::IsConditional, CExpressionEvaluator::MakeExprNode
// callers: CExpressionEvaluator::MakeFactor, CExpressionEvaluator::BuildExpression
bool __fastcall CExpressionEvaluator::MakeExpression(CExpressionEvaluator *const this, ExprTree *const tree)
{
  bool Term; // r13
  int m_CurPosition; // esi
  const char *m_pExpression; // rdi
  char *v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  bool bConditional; // [rsp+Fh] [rbp-21h] BYREF

  Term = CExpressionEvaluator::MakeTerm(this, tree);
  if ( Term )
  {
    do
    {
      if ( !CExpressionEvaluator::IsConditional(this, &bConditional, this->m_CurToken) )
        break;
      if ( !bConditional )
        return Term;
      if ( !CExpressionEvaluator::MakeExprNode(this, tree, this->m_CurToken, Kind::CONDITIONAL, *tree, 0) )
        break;
      m_CurPosition = this->m_CurPosition;
      m_pExpression = this->m_pExpression;
      v7 = &m_pExpression[m_CurPosition];
      if ( *v7 == 32 )
      {
        v8 = m_CurPosition + 1;
        v9 = &m_pExpression[m_CurPosition + 1];
        do
        {
          this->m_CurPosition = v8;
          v7 = v9;
          m_CurPosition = v8;
          ++v9;
          ++v8;
        }
        while ( *v7 == 32 );
      }
      this->m_CurPosition = m_CurPosition + 1;
      this->m_CurToken = *v7;
    }
    while ( CExpressionEvaluator::MakeTerm(this, &(*tree)->right) );
    return 0;
  }
  return Term;
}


// CExpressionEvaluator::BuildExpression  (line 406, @0x0000000002f8e1d0, libserver.so)  // inlines: GetNextToken
// calls: CExpressionEvaluator::MakeExpression
// callers: CExpressionEvaluator::Evaluate
bool __fastcall CExpressionEvaluator::BuildExpression(CExpressionEvaluator *const this)
{
  int m_CurPosition; // esi
  const char *m_pExpression; // r8
  char *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx

  m_CurPosition = this->m_CurPosition;
  m_pExpression = this->m_pExpression;
  v3 = &m_pExpression[m_CurPosition];
  if ( *v3 == 32 )
  {
    v4 = m_CurPosition + 1;
    v5 = &m_pExpression[m_CurPosition + 1];
    do
    {
      this->m_CurPosition = v4;
      v3 = v5;
      m_CurPosition = v4;
      ++v5;
      ++v4;
    }
    while ( *v3 == 32 );
  }
  this->m_CurPosition = m_CurPosition + 1;
  this->m_CurToken = *v3;
  return CExpressionEvaluator::MakeExpression(this, &this->m_ExprTree);
}


// CExpressionEvaluator::SimplifyNode  (line 417, @0x0000000002f8dc40, libserver.so)
// callers: CExpressionEvaluator::Evaluate
bool __fastcall CExpressionEvaluator::SimplifyNode(CExpressionEvaluator *const this, ExprTree *const node)
{
  bool result; // al
  ExprTree v4; // rsi
  bool v6; // r13
  bool v7; // al
  ExprTree v8; // rdx
  Kind kind; // ecx

  result = 0;
  v4 = *node;
  if ( v4 != 0 )
  {
    v6 = CExpressionEvaluator::SimplifyNode(this, &v4->left);
    v7 = CExpressionEvaluator::SimplifyNode(this, &(*node)->right);
    v8 = *node;
    kind = (*node)->kind;
    if ( kind != Kind::CONDITIONAL )
    {
      if ( kind == Kind::NOT )
      {
        v8->data.cond = !v7;
        v8 = *node;
      }
    }
    else
    {
      if ( v8->data.cond == 38 )
        v8->data.cond = v7 && v6;
      else
        v8->data.cond = v7 || v6;
      v8 = *node;
    }
    v8->kind = Kind::LITERAL;
    return (*node)->data.cond;
  }
  return result;
}


// CExpressionEvaluator::Evaluate  (line 457, @0x0000000002f8e220, libserver.so)  // inlines: V_strlen, V_strncpy<int>, strchr
// calls: CExpressionEvaluator::BuildExpression, CExpressionEvaluator::FreeTree, strlen, _V_strncpy, strchr, CFmtStrN<256, false>::CFmtStrN, CExpressionEvaluator::SimplifyNode, __stack_chk_fail
// callers: KeyValues::EvaluateConditional
// strings: "Bad expression syntax: '%s', expected a single matching pair of enclosing braces."
// globals: DefaultConditionalSymbolProc(char const*), DefaultConditionalErrorProc(char const*)
bool __fastcall CExpressionEvaluator::Evaluate(
        CExpressionEvaluator *const this,
        bool *const bResult,
        const char *pInfixExpression,
        GetSymbolProc_t pGetSymbolProc,
        SyntaxErrorProc_t pSyntaxErrorProc)
{
  const char *v5; // r12
  bool (*v8)(const char *); // rax
  void (*v9)(const char *); // rax
  bool v10; // r12
  unsigned int v12; // r14d
  __int64 v13; // rdx
  unsigned int v14; // r14d
  SyntaxErrorProc_t m_pSyntaxErrorProc; // r14
  CFmtStrN<256,false> v16; // [rsp+0h] [rbp-350h] BYREF
  char szCleanToken[520]; // [rsp+110h] [rbp-240h] BYREF
  unsigned __int64 v18; // [rsp+318h] [rbp-38h]

  v5 = pInfixExpression;
  v18 = __readfsqword(0x28u);
  if ( pInfixExpression == 0 )
    return 0;
  v8 = DefaultConditionalSymbolProc;
  if ( pGetSymbolProc != 0 )
    v8 = pGetSymbolProc;
  this->m_pGetSymbolProc = v8;
  v9 = DefaultConditionalErrorProc;
  if ( pSyntaxErrorProc != 0 )
    v9 = pSyntaxErrorProc;
  this->m_pSyntaxErrorProc = v9;
  if ( *pInfixExpression != 91 )
    goto LABEL_7;
  v12 = strlen(pInfixExpression);
  if ( (v12 + 1) > 0x200 )
    return 0;
  v13 = v12;
  v14 = v12 - 2;
  _V_strncpy(szCleanToken, v5 + 1, v13);
  if ( szCleanToken[v14] == 93 )
    szCleanToken[v14] = 0;
  m_pSyntaxErrorProc = this->m_pSyntaxErrorProc;
  if ( m_pSyntaxErrorProc != 0 && (strchr(szCleanToken, 91) != 0 || strchr(szCleanToken, 93) != 0) )
  {
    CFmtStrN<256,false>::CFmtStrN(
      &v16,
      "Bad expression syntax: '%s', expected a single matching pair of enclosing braces.",
      v5);
    m_pSyntaxErrorProc(v16.m_szBuf);
    return 0;
  }
  v5 = szCleanToken;
LABEL_7:
  this->m_pExpression = v5;
  this->m_ExprTree = 0;
  this->m_CurPosition = 0;
  this->m_CurToken = 0;
  v10 = CExpressionEvaluator::BuildExpression(this);
  if ( v10 )
    *bResult = CExpressionEvaluator::SimplifyNode(this, &this->m_ExprTree);
  CExpressionEvaluator::FreeTree(this, &this->m_ExprTree);
  this->m_ExprTree = 0;
  return v10;
}


