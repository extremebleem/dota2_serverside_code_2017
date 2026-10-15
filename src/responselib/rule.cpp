
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_rule.cpp  (line 0, @0x0000000001a6a930, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_rule_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// rr2::CRuleBuilder::Begin  (line 24, @0x00000000031132e0, libserver.so)
// callers: rr2::IResponseDB::AddRule
void __fastcall rr2::CRuleBuilder::Begin(rr2::CRuleBuilder *const this)
{
  ;
}


// rr2::CRuleBuilder::Compact  (line 34, @0x00000000031132f0, libserver.so)  // inlines: Compact, Purge, ReAlloc, RememberAllocSize
// callers: rr2::CRuleBuilder::Done
void __fastcall rr2::CRuleBuilder::Compact(rr2::CRuleBuilder *const this)
{
  rr2::CRule *m_pRule; // r12
  __int64 m_Size; // rax
  __int64 v4; // r14
  __int64 v5; // rax
  rr2::CRule *v6; // r12
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // rax
  rr2::CRule *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  rr2::CRule *v14; // rbx
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rax

  m_pRule = this->m_pRule;
  m_Size = m_pRule->m_mandatoryCriteria.m_static.m_Size;
  if ( m_Size <= 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory);
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize = 0;
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory = 0;
    v6 = this->m_pRule;
    v7 = v6->m_mandatoryCriteria.m_functors.m_Size;
    if ( v7 > 0 )
    {
LABEL_3:
      v8 = 16 * v7;
      v9 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v6->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory, v8);
      v6->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize = v8;
      v6->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory = v9;
      v10 = this->m_pRule;
      v11 = v10->m_optionalCriteria.m_static.m_Size;
      if ( v11 > 0 )
        goto LABEL_4;
LABEL_8:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10->m_optionalCriteria.m_static.m_Memory.m_pMemory);
      v10->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize = 0;
      v10->m_optionalCriteria.m_static.m_Memory.m_pMemory = 0;
      v14 = this->m_pRule;
      v15 = v14->m_optionalCriteria.m_functors.m_Size;
      if ( v15 > 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = 20 * m_Size;
    v5 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory, 20 * m_Size);
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize = v4;
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory = v5;
    v6 = this->m_pRule;
    v7 = v6->m_mandatoryCriteria.m_functors.m_Size;
    if ( v7 > 0 )
      goto LABEL_3;
  }
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory);
  v6->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize = 0;
  v6->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory = 0;
  v10 = this->m_pRule;
  v11 = v10->m_optionalCriteria.m_static.m_Size;
  if ( v11 <= 0 )
    goto LABEL_8;
LABEL_4:
  v12 = 20 * v11;
  v13 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v10->m_optionalCriteria.m_static.m_Memory.m_pMemory, 20 * v11);
  v10->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize = v12;
  v10->m_optionalCriteria.m_static.m_Memory.m_pMemory = v13;
  v14 = this->m_pRule;
  v15 = v14->m_optionalCriteria.m_functors.m_Size;
  if ( v15 > 0 )
  {
LABEL_5:
    v16 = 16 * v15;
    v17 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v14->m_optionalCriteria.m_functors.m_Memory.m_pMemory, v16);
    v14->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize = v16;
    v14->m_optionalCriteria.m_functors.m_Memory.m_pMemory = v17;
    return;
  }
LABEL_9:
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14->m_optionalCriteria.m_functors.m_Memory.m_pMemory);
  v14->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize = 0;
  v14->m_optionalCriteria.m_functors.m_Memory.m_pMemory = 0;
}


// rr2::CRuleBuilder::Cancel  (line 42, @0x00000000031134b0, libserver.so)
// callers: rr2::CRuleBuilder::~CRuleBuilder, Crr2LibPort::CreateNewRRDBFromOld
void __fastcall rr2::CRuleBuilder::Cancel(rr2::CRuleBuilder *const this)
{
  (*(this->m_pDB->_vptr_IResponseDB + 8))(this->m_pDB, this->m_pRule);
  this->m_pRule = 0;
}


// rr2::CRuleBuilder::Done  (line 54, @0x00000000031143f0, libserver.so)
// calls: rr2::CRuleBuilder::Compact, CUtlVectorBase<rr2::CriterionStatic, CUtlMemoryConservative<rr2::CriterionStatic> >::Sort, CUtlVectorBase<rr2::CriterionLambda, CUtlMemoryConservative<rr2::CriterionLambda> >::Sort
// callers: rr2::CRuleBuilder::~CRuleBuilder, Crr2LibPort::CreateNewRRDBFromOld
// globals: rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionStatic>(rr2::CriterionStatic const*,rr2::CriterionStatic const, rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionLambda>(rr2::CriterionLambda const*,rr2::CriterionLambda const
void __fastcall rr2::CRuleBuilder::Done(rr2::CRuleBuilder *const this)
{
  if ( this->m_pRule != 0 )
  {
    rr2::CRuleBuilder::Compact(this);
    CUtlVectorBase<rr2::CriterionStatic,CUtlMemoryConservative<rr2::CriterionStatic>>::Sort(
      &this->m_pRule->m_mandatoryCriteria.m_static,
      rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionStatic>);
    CUtlVectorBase<rr2::CriterionLambda,CUtlMemoryConservative<rr2::CriterionLambda>>::Sort(
      &this->m_pRule->m_mandatoryCriteria.m_functors,
      rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionLambda>);
    CUtlVectorBase<rr2::CriterionStatic,CUtlMemoryConservative<rr2::CriterionStatic>>::Sort(
      &this->m_pRule->m_optionalCriteria.m_static,
      rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionStatic>);
    CUtlVectorBase<rr2::CriterionLambda,CUtlMemoryConservative<rr2::CriterionLambda>>::Sort(
      &this->m_pRule->m_optionalCriteria.m_functors,
      rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionLambda>);
  }
}


// rr2::CRuleBuilder::OnDestructAsserts  (line 86, @0x00000000031134e0, libserver.so)
// callers: rr2::CRuleBuilder::~CRuleBuilder, Crr2LibPort::CreateNewRRDBFromOld
void __fastcall rr2::CRuleBuilder::OnDestructAsserts(const rr2::CRuleBuilder *const this)
{
  ;
}


// rr2::CRuleBuilder::SetPayload  (line 98, @0x00000000031134f0, libserver.so)  // inlines: SetPayload
// callers: CRuleScriptBridge::AddRuleFromScript, Crr2LibPort::CreateNewRRDBFromOld
void __fastcall rr2::CRuleBuilder::SetPayload(rr2::CRuleBuilder *const this, rr2::IRulePayload *payload)
{
  rr2::CRule *m_pRule; // rbx
  rr2::IRulePayload *m_pPayload; // rdi

  m_pRule = this->m_pRule;
  m_pPayload = m_pRule->m_pPayload;
  if ( m_pPayload != 0 )
    (*(m_pPayload->_vptr_IRulePayload + 1))(m_pPayload);
  m_pRule->m_pPayload = payload;
}


// rr2::CRuleBuilder::ReserveStaticCriteria  (line 112, @0x0000000003113520, libserver.so)  // inlines: EnsureCapacity, NumAllocated, ReAlloc, RememberAllocSize, ReserveCS<CUtlVectorConservative<rr2::CriterionStatic> >
// callers: CRuleScriptBridge::AddRuleFromScript, Crr2LibPort::CreateNewRRDBFromOld
void __fastcall rr2::CRuleBuilder::ReserveStaticCriteria(rr2::CRuleBuilder *const this, int nCount, bool bMandatory)
{
  rr2::CRule *m_pRule; // rbx
  unsigned __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax

  m_pRule = this->m_pRule;
  if ( bMandatory )
  {
    v9 = m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize / 0x14;
    v10 = v9 + nCount;
    v11 = v9;
    if ( v10 > v9 )
      v11 = v10;
    v12 = 20 * v11;
    v13 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory, 20 * v11);
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize = v12;
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory = v13;
  }
  else
  {
    v4 = m_pRule->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize / 0x14;
    v5 = v4 + nCount;
    v6 = v4;
    if ( v5 > v4 )
      v6 = v5;
    v7 = 20 * v6;
    v8 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pRule->m_optionalCriteria.m_static.m_Memory.m_pMemory, 20 * v6);
    m_pRule->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize = v7;
    m_pRule->m_optionalCriteria.m_static.m_Memory.m_pMemory = v8;
  }
}


// rr2::CRuleBuilder::ReserveLambdaCriteria  (line 124, @0x00000000031135d0, libserver.so)  // inlines: EnsureCapacity, NumAllocated, ReAlloc, RememberAllocSize, ReserveCS<CUtlVectorConservative<rr2::CriterionLambda> >
// callers: CRuleScriptBridge::AddRuleFromScript
void __fastcall rr2::CRuleBuilder::ReserveLambdaCriteria(rr2::CRuleBuilder *const this, int nCount, bool bMandatory)
{
  rr2::CRule *m_pRule; // r12
  size_t v4; // rax
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  size_t v9; // rax
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax

  m_pRule = this->m_pRule;
  if ( bMandatory )
  {
    v9 = m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize >> 4;
    v10 = v9 + nCount;
    v11 = v9;
    if ( v10 > v9 )
      v11 = v10;
    v12 = 16 * v11;
    v13 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory, v12);
    m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize = v12;
    m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory = v13;
  }
  else
  {
    v4 = m_pRule->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize >> 4;
    v5 = v4 + nCount;
    v6 = v4;
    if ( v5 > v4 )
      v6 = v5;
    v7 = 16 * v6;
    v8 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pRule->m_optionalCriteria.m_functors.m_Memory.m_pMemory, v7);
    m_pRule->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize = v7;
    m_pRule->m_optionalCriteria.m_functors.m_Memory.m_pMemory = v8;
  }
}


// rr2::CRuleBuilder::AddCriterion  (line 136, @0x0000000003113670, libserver.so)  // inlines: AddToTail, CUtlSymbol, CopyConstruct<rr2::CriterionStatic>, CriterionBase, CriterionStatic, Element, Grow, GrowMemory, NumAllocated, ReAlloc, RememberAllocSize, Symbol, operator[]
// callers: CRuleScriptBridge::AddCriterionFromScript, Crr2LibPort::CreateNewRRDBFromOld
void __fastcall rr2::CRuleBuilder::AddCriterion(
        rr2::CRuleBuilder *const this,
        const rr2::CriterionStatic *const crit,
        bool bMandatory)
{
  rr2::CRule *m_pRule; // r12
  __int64 m_Size; // r13
  __int64 m_pMemory; // rax
  int v7; // edx
  __int64 v8; // rax
  char v9; // dl
  char v10; // dl

  m_pRule = this->m_pRule;
  if ( !bMandatory )
    m_pRule = (m_pRule + 48);
  m_Size = m_pRule->m_mandatoryCriteria.m_static.m_Size;
  if ( m_Size == (m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize / 0x14) )
  {
    m_pMemory = (*(*g_pMemAlloc + 8LL))(
                  g_pMemAlloc,
                  m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory,
                  20LL * (m_Size + 1));
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize = 20LL * (m_Size + 1);
    v7 = m_pRule->m_mandatoryCriteria.m_static.m_Size;
    m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory = m_pMemory;
  }
  else
  {
    m_pMemory = m_pRule->m_mandatoryCriteria.m_static.m_Memory.m_pMemory;
    v7 = m_pRule->m_mandatoryCriteria.m_static.m_Size;
  }
  m_pRule->m_mandatoryCriteria.m_static.m_Size = v7 + 1;
  v8 = m_pMemory + 20 * m_Size;
  if ( v8 != 0 )
  {
    *v8 = crit->m_name.m_Sym.m_Id;
    v9 = *(v8 + 8);
    *(v8 + 4) = crit->m_score;
    v10 = *(crit + 8) & 1 | v9 & 0xFE;
    *(v8 + 8) = v10;
    *(v8 + 8) = *(crit + 8) & 2 | v10 & 0xFD;
    *(v8 + 12) = crit->12;
  }
}


// rr2::CRuleBuilder::AddCriterion  (line 143, @0x0000000003113750, libserver.so)  // inlines: AddRef, AddRef<rr2::ICriterionFunctor>, AddToTail, CSmartPtr, CUtlSymbol, CopyConstruct<rr2::CriterionLambda>, CriterionBase, CriterionLambda, DoAddRef, DoRelease, Element, Grow, GrowMemory, Increment, NumAllocated, ReAlloc, Release, Release<rr2::ICriterionFunctor>, RememberAllocSize, Symbol, ThreadInterlockedIncrement, operator=, operator[]
// callers: CRuleScriptBridge::AddCriterionFromScript
void __fastcall rr2::CRuleBuilder::AddCriterion(
        rr2::CRuleBuilder *const this,
        const rr2::CriterionLambda *const crit,
        bool bMandatory)
{
  rr2::CRule *m_pRule; // rbx
  int m_Size; // r12d
  __int64 m_pMemory; // rax
  int v7; // edx
  __int64 v8; // rbx
  UtlSymId_t m_Id; // ax
  rr2::ICriterionFunctor *m_pObj; // r12
  volatile signed __int32 *v11; // r13

  m_pRule = this->m_pRule;
  if ( !bMandatory )
    m_pRule = (m_pRule + 48);
  m_Size = m_pRule->m_mandatoryCriteria.m_functors.m_Size;
  if ( m_Size == (m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize >> 4) )
  {
    m_pMemory = (*(*g_pMemAlloc + 8LL))(
                  g_pMemAlloc,
                  m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory,
                  16LL * (m_Size + 1));
    m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize = 16LL * (m_Size + 1);
    v7 = m_pRule->m_mandatoryCriteria.m_functors.m_Size;
    m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory = m_pMemory;
  }
  else
  {
    m_pMemory = m_pRule->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory;
    v7 = m_pRule->m_mandatoryCriteria.m_functors.m_Size;
  }
  m_pRule->m_mandatoryCriteria.m_functors.m_Size = v7 + 1;
  v8 = 16LL * m_Size + m_pMemory;
  if ( v8 != 0 )
  {
    m_Id = crit->m_name.m_Sym.m_Id;
    *(v8 + 4) = 1065353216;
    *(v8 + 8) = 0;
    *v8 = m_Id;
    m_pObj = crit->m_pFunctor.m_pObj;
    if ( m_pObj != 0 )
    {
      _InterlockedAdd(&m_pObj->m_iRefs, 1u);
      v11 = *(v8 + 8);
      if ( v11 != 0 && _InterlockedSub(v11 + 2, 1u) == 0 && (*(*v11 + 16LL))(v11) != 0 )
        (*(*v11 + 8LL))(v11);
      *(v8 + 8) = m_pObj;
    }
  }
}


// AppendContext  (line 150, @0x0000000003113290, libserver.so)  // inlines: IsEmpty
// calls: CUtlString::Append
// callers: rr2::CRuleBuilder::AddContext
void __fastcall AppendContext(CUtlString *const context, const char *pContext)
{
  if ( context->m_pString != 0 && *context->m_pString != 0 )
  {
    CUtlString::Append(context, ",");
    CUtlString::Append(context, pContext);
  }
  else
  {
    CUtlString::Append(context, pContext);
  }
}


// rr2::CRuleBuilder::AddContext  (line 157, @0x0000000003113840, libserver.so)  // inlines: _V_strcmp
// calls: AppendContext
// callers: CRuleScriptBridge::AddContextFromScript
void __fastcall rr2::CRuleBuilder::AddContext(rr2::CRuleBuilder *const this, const char *pType, const char *pContext)
{
  rr2::CRule *m_pRule; // rdi

  m_pRule = this->m_pRule;
  if ( strcmp(pType, "world") == 0 )
    AppendContext(&m_pRule->m_WorldContext, pContext);
  else
    AppendContext(&m_pRule->m_SpeakerContext, pContext);
}


// rr2::CRule::~CRule  (line 165, @0x0000000003113890, libserver.so)  // inlines: Destruct<rr2::CriterionLambda>, Element, Purge, RememberAllocSize, RemoveAll, operator[], ~CUtlString, ~CUtlVectorBase, ~CUtlVectorConservative, ~CriteriaList_t
// calls: CUtlString::FreeMemoryBlock, rr2::CriterionLambda::~CriterionLambda
// callers: rr2::CResponseDB::DeleteRule, CUtlVectorBase<rr2::CRule, CUtlMemory<rr2::CRule, int> >::RemoveAll
void __fastcall rr2::CRule::~CRule(rr2::CRule *const this)
{
  rr2::IRulePayload *m_pPayload; // rdi
  int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  rr2::CriterionStatic *m_pMemory; // rsi
  int m_Size; // eax
  int v9; // r12d
  __int64 v10; // r13
  __int64 v11; // rdi
  _QWORD *v12; // rdi
  rr2::CriterionStatic *v13; // rsi
  _QWORD *v14; // rdi

  m_pPayload = this->m_pPayload;
  if ( m_pPayload != 0 )
  {
    (*(m_pPayload->_vptr_IRulePayload + 1))(m_pPayload);
    this->m_pPayload = 0;
  }
  if ( this->m_WorldContext.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_WorldContext);
  if ( this->m_SpeakerContext.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpeakerContext);
  v3 = this->m_optionalCriteria.m_functors.m_Size - 1;
  v4 = 16LL * v3;
  if ( v3 >= 0 )
  {
    do
    {
      v5 = v4;
      --v3;
      v4 -= 16;
      rr2::CriterionLambda::~CriterionLambda((this->m_optionalCriteria.m_functors.m_Memory.m_pMemory + v5));
    }
    while ( v3 != -1 );
  }
  this->m_optionalCriteria.m_functors.m_Size = 0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_optionalCriteria.m_functors.m_Memory.m_pMemory);
  v6 = g_pMemAlloc;
  this->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize = 0;
  this->m_optionalCriteria.m_functors.m_Memory.m_pMemory = 0;
  m_pMemory = this->m_optionalCriteria.m_static.m_Memory.m_pMemory;
  this->m_optionalCriteria.m_static.m_Size = 0;
  (*(*v6 + 16LL))(v6, m_pMemory);
  m_Size = this->m_mandatoryCriteria.m_functors.m_Size;
  this->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize = 0;
  this->m_optionalCriteria.m_static.m_Memory.m_pMemory = 0;
  v9 = m_Size - 1;
  v10 = 16LL * (m_Size - 1);
  if ( m_Size - 1 >= 0 )
  {
    do
    {
      v11 = v10;
      --v9;
      v10 -= 16;
      rr2::CriterionLambda::~CriterionLambda((this->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory + v11));
    }
    while ( v9 != -1 );
  }
  v12 = g_pMemAlloc;
  this->m_mandatoryCriteria.m_functors.m_Size = 0;
  (*(*v12 + 16LL))(v12, this->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory);
  this->m_mandatoryCriteria.m_static.m_Size = 0;
  v13 = this->m_mandatoryCriteria.m_static.m_Memory.m_pMemory;
  v14 = g_pMemAlloc;
  this->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize = 0;
  this->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory = 0;
  (*(*v14 + 16LL))(v14, v13);
  this->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize = 0;
  this->m_mandatoryCriteria.m_static.m_Memory.m_pMemory = 0;
}


// rr2::CRule::SetPayload  (line 178, @0x00000000031139e0, libserver.so)
void __fastcall rr2::CRule::SetPayload(rr2::CRule *const this, rr2::IRulePayload *payload)
{
  rr2::IRulePayload *m_pPayload; // rdi

  m_pPayload = this->m_pPayload;
  if ( m_pPayload != 0 )
    (*(m_pPayload->_vptr_IRulePayload + 1))(m_pPayload);
  this->m_pPayload = payload;
}


// rr2::CRule::GetSizeInMem  (line 189, @0x0000000003113a10, libserver.so)  // inlines: GetSizeInMem
// callers: rr2::CResponseDB::GetMemStats
size_t __fastcall rr2::CRule::GetSizeInMem(const rr2::CRule *const this)
{
  __int64 v1; // rax
  size_t v2; // rbx
  rr2::IRulePayload *m_pPayload; // rdi

  v1 = 0;
  v2 = this->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize
     + this->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize
     + this->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize
     + this->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize
     + 216;
  m_pPayload = this->m_pPayload;
  if ( m_pPayload != 0 )
    v1 = (*(m_pPayload->_vptr_IRulePayload + 2))(m_pPayload);
  return v2 + v1;
}


// rr2::CRule::CriteriaList_t::GetSizeInMem  (line 197, @0x0000000003113a50, libserver.so)
size_t __fastcall rr2::CRule::CriteriaList_t::GetSizeInMem(const rr2::CRule::CriteriaList_t *const this)
{
  return this->m_functors.m_Memory.m_nCurAllocSize + this->m_static.m_Memory.m_nCurAllocSize + 48;
}


// rr2::CRule::Match  (line 251, @0x0000000003113a70, libserver.so)  // inlines: CQueryIterator, CanCoerce, Clear, Compare, CompareAsFloat, CompareAsSymbol, CompareForAbsentFact, Fact, Get, IsSymbol, RVariant, Sym, TestCriteria<false, CUtlVectorConservative<rr2::CriterionLambda> >, TestCriteria<false, CUtlVectorConservative<rr2::CriterionStatic> >, TestCriteria<true, CUtlVectorConservative<rr2::CriterionLambda> >, TestCriteria<true, CUtlVectorConservative<rr2::CriterionStatic> >, operator const UtlSymId_t, operator int32, operator[]
// callers: rr2::CResponseDB::FindBestMatch, rr2::CResponseDB::FindMatches
rr2::MatchScore_t __fastcall rr2::CRule::Match(
        rr2::CRule *const this,
        rr2::CResponseQuery *pQuery,
        rr2::MatchInfo_t *pStats)
{
  rr2::MatchInfo_t *v3; // r9
  rr2::MatchScore_t result; // xmm0_4
  rr2::CResponseQuery *v5; // r8
  rr2::CRule *v6; // r14
  float v7; // xmm4_4
  int m_Size; // ebx
  int v9; // eax
  rr2::MatchInfo_t *v10; // r13
  int v11; // edi
  float v12; // xmm1_4
  rr2::CriterionStatic *v13; // r12
  rr2::CResponseQuery::CFact *v14; // rsi
  __int64 v15; // rdx
  rr2::CResponseQuery::CFact *v16; // r10
  UtlSymId_t v17; // cx
  int v18; // eax
  rr2::CResponseQuery::CFact *v19; // rdx
  char v20; // al
  char v21; // si
  bool v22; // al
  int v23; // eax
  unsigned __int64 v24; // r15
  int v25; // r12d
  float v26; // xmm1_4
  rr2::CRule *v27; // r9
  __int64 v28; // r10
  rr2::CriterionLambda *v29; // r14
  rr2::CResponseQuery::CFact *m_pMemory; // rsi
  UtlSymId_t m_Id; // r11
  __int64 v32; // rdx
  rr2::CResponseQuery::CFact *v33; // r13
  UtlSymId_t v34; // cx
  int v35; // eax
  rr2::CResponseQuery::CFact *v36; // rdx
  rr2::ICriterionFunctor *m_pObj; // rdi
  int v38; // ecx
  char v39; // dl
  float v40; // xmm2_4
  bool v41; // cl
  char v42; // al
  int v43; // eax
  unsigned __int64 v44; // r12
  int v45; // edx
  float v46; // xmm1_4
  __int64 v47; // r15
  rr2::CriterionStatic *v48; // r11
  rr2::CResponseQuery::CFact *v49; // rsi
  UtlSymId_t v50; // r13
  __int64 v51; // rax
  rr2::CResponseQuery::CFact *v52; // rdi
  UtlSymId_t v53; // cx
  rr2::CResponseQuery::CFact *v54; // rax
  char v55; // al
  char v56; // r10
  bool v57; // al
  int v58; // eax
  float v59; // xmm1_4
  unsigned __int64 v60; // r15
  int v61; // r12d
  float v62; // xmm2_4
  rr2::CRule *v63; // r10
  __int64 v64; // r11
  unsigned __int16 *v65; // r14
  rr2::CResponseQuery::CFact *v66; // rcx
  __int64 v67; // rax
  rr2::CResponseQuery::CFact *v68; // r13
  UtlSymId_t v69; // dx
  rr2::CResponseQuery::CFact *v70; // rax
  _BYTE *v71; // rdi
  __int64 (__fastcall *v72)(_BYTE *, unsigned __int16 *, int *, rr2::CResponseQuery *); // rax
  char v73; // al
  int m_n_low; // esi
  char v75; // cl
  float v76; // xmm1_4
  rr2::IRulePayload *m_pPayload; // rax
  float m_f; // xmm2_4
  bool v79; // si
  char v80; // al
  bool v81; // cl
  bool v82; // dl
  __int64 (__fastcall *v83)(rr2::ICriterionFunctor *, rr2::CriterionLambda *, int *, rr2::CResponseQuery *); // rax
  char v84; // al
  rr2::CRule *v85; // [rsp+8h] [rbp-70h]
  rr2::MatchInfo_t *v86; // [rsp+8h] [rbp-70h]
  rr2::MatchInfo_t *v87; // [rsp+8h] [rbp-70h]
  rr2::CRule *v88; // [rsp+8h] [rbp-70h]
  __int64 v89; // [rsp+10h] [rbp-68h]
  rr2::CRule *v90; // [rsp+10h] [rbp-68h]
  rr2::CRule *v91; // [rsp+10h] [rbp-68h]
  __int64 v92; // [rsp+10h] [rbp-68h]
  float v93; // [rsp+18h] [rbp-60h]
  __int64 v94; // [rsp+18h] [rbp-60h]
  __int64 v95; // [rsp+18h] [rbp-60h]
  float v96; // [rsp+18h] [rbp-60h]
  float v97; // [rsp+20h] [rbp-58h]
  float v98; // [rsp+20h] [rbp-58h]
  float v99; // [rsp+20h] [rbp-58h]
  float v100; // [rsp+20h] [rbp-58h]
  float v101; // [rsp+24h] [rbp-54h]
  float v102; // [rsp+24h] [rbp-54h]
  float v103; // [rsp+24h] [rbp-54h]
  float v104; // [rsp+24h] [rbp-54h]
  rr2::CResponseQuery *v105; // [rsp+28h] [rbp-50h]
  float v106; // [rsp+28h] [rbp-50h]
  float v107; // [rsp+28h] [rbp-50h]
  rr2::CResponseQuery *v108; // [rsp+28h] [rbp-50h]
  rr2::MatchInfo_t *pStatsa; // [rsp+30h] [rbp-48h]
  rr2::MatchInfo_t *pStatsb; // [rsp+30h] [rbp-48h]
  rr2::MatchInfo_t *pStatsc; // [rsp+30h] [rbp-48h]
  rr2::MatchInfo_t *pStatsd; // [rsp+30h] [rbp-48h]
  int v113; // [rsp+38h] [rbp-40h] BYREF
  int v114; // [rsp+3Ch] [rbp-3Ch]

  v3 = pStats;
  result = 0.0;
  v5 = pQuery;
  v6 = this;
  v7 = 0.0;
  pStats->score = -2147483600.0;
  pStats->optionalCriteriaMatched = 0;
  m_Size = pQuery->m_facts.m_Size;
  pStats->mandatoryCriteriaMatched = 0;
  pStats->pRulePayload = 0;
  pStats->m_pRule = 0;
  v9 = this->m_mandatoryCriteria.m_static.m_Size;
  if ( this->m_mandatoryCriteria.m_static.m_Size <= 0 )
  {
LABEL_15:
    v23 = v6->m_mandatoryCriteria.m_functors.m_Size;
    if ( v23 <= 0 )
      goto LABEL_45;
    pStatsb = v3;
    v24 = 0;
    v25 = 0;
    v26 = 0.0;
    v27 = v6;
    v28 = 16 * ((v23 - 1) + 1LL);
    while ( 1 )
    {
      v29 = &v27->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory[v24 / 0x10];
      if ( m_Size <= v25 )
        goto LABEL_22;
      m_pMemory = v5->m_facts.m_Memory.m_pMemory;
      m_Id = v29->m_name.m_Sym.m_Id;
      v32 = v25;
      v33 = &m_pMemory[v32];
      v34 = m_pMemory[v32].key.m_Sym.m_Id;
      if ( v34 < v29->m_name.m_Sym.m_Id )
        break;
LABEL_36:
      if ( v34 != m_Id )
        goto LABEL_22;
      if ( v29->m_pFunctor.m_pObj != 0 )
        goto LABEL_38;
      if ( (v33->val.m_floatBits & 0x7F800000) == 0x7F800000 )
        goto LABEL_38;
      v85 = v27;
      v89 = v28;
      v93 = result;
      v97 = v26;
      v101 = v7;
      v105 = v5;
      v42 = (*(loc_0 + 24LL))(0, v29, &v33->val, v5);
      v5 = v105;
      v7 = v101;
      v26 = v97;
      result = v93;
      v28 = v89;
      v27 = v85;
      if ( v42 == 0 )
      {
LABEL_38:
        if ( v33 != 0 )
          return result;
LABEL_22:
        m_pObj = v29->m_pFunctor.m_pObj;
        if ( m_pObj == 0 )
          return result;
        if ( m_pObj->m_nParamType != 16 )
          return result;
        v88 = v27;
        v92 = v28;
        v96 = result;
        v100 = v26;
        v83 = *(m_pObj->_vptr_CRefCountServiceBase + 3);
        v104 = v7;
        v108 = v5;
        v113 = 0;
        v114 = 0;
        v84 = v83(m_pObj, v29, &v113, v5);
        v5 = v108;
        v7 = v104;
        v26 = v100;
        result = v96;
        v28 = v92;
        v27 = v88;
        if ( v84 == 0 )
          return result;
      }
      v24 += 16LL;
      v26 = v26 + v29->m_score;
      ++pStatsb->mandatoryCriteriaMatched;
      if ( v24 == v28 )
      {
        v6 = v27;
        v3 = pStatsb;
        if ( v26 <= result )
          return result;
        m_Size = v5->m_facts.m_Size;
        v7 = v7 + v26;
LABEL_45:
        v43 = v6->m_optionalCriteria.m_static.m_Size;
        if ( v43 > 0 )
        {
          v44 = 0;
          v45 = 0;
          v46 = result;
          v47 = 4 * (5LL * (v43 - 1) + 5);
          while ( 1 )
          {
            v48 = &v6->m_optionalCriteria.m_static.m_Memory.m_pMemory[v44 / 0x14];
            if ( m_Size <= v45 )
              goto LABEL_52;
            v49 = v5->m_facts.m_Memory.m_pMemory;
            v50 = v48->m_name.m_Sym.m_Id;
            v51 = v45;
            v52 = &v49[v51];
            v53 = v49[v51].key.m_Sym.m_Id;
            if ( v53 < v48->m_name.m_Sym.m_Id )
              break;
LABEL_69:
            if ( v53 != v50 )
              goto LABEL_52;
            v55 = *(v48 + 8);
            v56 = v55 & 1;
            if ( (v55 & 1) != 0 )
            {
              m_n_low = 0xFFFF;
              if ( (v52->val.m_floatBits & 0x7F800000) == 0x7F800000 )
                m_n_low = LOWORD(v52->val.m_n);
              v75 = ((v55 & 2) != 0) ^ (v48->m_symbol == m_n_low);
            }
            else
            {
              m_f = v52->val.m_f;
              v79 = 0;
              if ( m_f >= v48->m_floats.fa )
                v79 = v48->m_floats.fb >= m_f;
              v75 = v79 ^ ((v55 & 2) != 0);
            }
            if ( v75 == 0 )
            {
              if ( v52 != 0 )
                goto LABEL_57;
              goto LABEL_53;
            }
LABEL_56:
            v46 = v46 + v48->m_score;
            ++v3->mandatoryCriteriaMatched;
LABEL_57:
            v44 += 20LL;
            if ( v44 == v47 )
              goto LABEL_58;
          }
          v54 = &v49[v51 + 1];
          while ( ++v45 != m_Size )
          {
            v53 = v54->key.m_Sym.m_Id;
            v52 = v54++;
            if ( v53 >= v50 )
              goto LABEL_69;
          }
LABEL_52:
          v55 = *(v48 + 8);
          v56 = v55 & 1;
LABEL_53:
          if ( v56 != 0 )
          {
            v57 = (v55 & 2) != 0;
          }
          else
          {
            v81 = 0;
            if ( (v55 & 2) != 0 )
              v81 = v48->m_floats.fa == v48->m_floats.fb;
            v57 = v81;
          }
          if ( !v57 )
            goto LABEL_57;
          goto LABEL_56;
        }
        v46 = result;
LABEL_58:
        v58 = v6->m_optionalCriteria.m_functors.m_Size;
        v59 = v46 + v7;
        if ( v58 <= 0 )
        {
          v62 = result;
LABEL_82:
          v76 = v59 + v62;
          if ( v76 > result )
          {
            m_pPayload = v6->m_pPayload;
            v3->m_pRule = v6;
            v3->score = v76;
            v3->pRulePayload = m_pPayload;
          }
          return v76;
        }
        v60 = 0;
        v61 = 0;
        v62 = result;
        v63 = v6;
        v64 = 16 * ((v58 - 1) + 1LL);
        while ( 2 )
        {
          v65 = &v63->m_optionalCriteria.m_functors.m_Memory.m_pMemory[v60 / 0x10].rr2::CriterionBase;
          if ( v61 >= m_Size )
          {
LABEL_65:
            v71 = *(v65 + 1);
            if ( v71 != 0 && v71[12] == 16 )
            {
              v86 = v3;
              v90 = v63;
              v94 = v64;
              v98 = result;
              v72 = *(*v71 + 24LL);
              v102 = v62;
              v106 = v59;
              pStatsc = v5;
              v113 = 0;
              v114 = 0;
              v73 = v72(v71, v65, &v113, v5);
              v5 = pStatsc;
              v59 = v106;
              v62 = v102;
              result = v98;
              v64 = v94;
              v63 = v90;
              v3 = v86;
              if ( v73 != 0 )
                goto LABEL_90;
            }
          }
          else
          {
            v66 = v5->m_facts.m_Memory.m_pMemory;
            v67 = v61;
            v68 = &v66[v67];
            v69 = v66[v67].key.m_Sym.m_Id;
            if ( v69 < *v65 )
            {
              v70 = &v66[v67 + 1];
              while ( ++v61 != m_Size )
              {
                v69 = v70->key.m_Sym.m_Id;
                v68 = v70++;
                if ( *v65 <= v69 )
                  goto LABEL_77;
              }
              goto LABEL_65;
            }
LABEL_77:
            if ( v69 != *v65 )
              goto LABEL_65;
            if ( *(v65 + 1) != 0 )
              goto LABEL_79;
            if ( (v68->val.m_floatBits & 0x7F800000) == 0x7F800000 )
              goto LABEL_79;
            v87 = v3;
            v91 = v63;
            v95 = v64;
            v99 = result;
            v103 = v62;
            v107 = v59;
            pStatsd = v5;
            v80 = (*(loc_0 + 24LL))(0, v65, &v68->val, v5);
            v5 = pStatsd;
            v59 = v107;
            v62 = v103;
            result = v99;
            v64 = v95;
            v63 = v91;
            v3 = v87;
            if ( v80 == 0 )
            {
LABEL_79:
              if ( v68 == 0 )
                goto LABEL_65;
            }
            else
            {
LABEL_90:
              v62 = v62 + *(v65 + 1);
              ++v3->mandatoryCriteriaMatched;
            }
          }
          v60 += 16LL;
          if ( v60 == v64 )
          {
            v6 = v63;
            goto LABEL_82;
          }
          continue;
        }
      }
    }
    v35 = v25 + 1;
    v36 = &m_pMemory[v32 + 1];
    while ( 1 )
    {
      v25 = v35;
      if ( v35 == m_Size )
        goto LABEL_22;
      v34 = v36->key.m_Sym.m_Id;
      v33 = v36;
      ++v35;
      ++v36;
      if ( m_Id <= v34 )
        goto LABEL_36;
    }
  }
  result = 0.0;
  v10 = 0;
  v11 = 0;
  v12 = 0.0;
  pStatsa = (4 * (5LL * (v9 - 1) + 5));
  do
  {
    v13 = (v6->m_mandatoryCriteria.m_static.m_Memory.m_pMemory + v10);
    if ( m_Size <= v11 )
      goto LABEL_8;
    v14 = v5->m_facts.m_Memory.m_pMemory;
    v15 = v11;
    v16 = &v14[v15];
    v17 = v14[v15].key.m_Sym.m_Id;
    if ( v17 < v13->m_name.m_Sym.m_Id )
    {
      v18 = v11 + 1;
      v19 = &v14[v15 + 1];
      while ( 1 )
      {
        v11 = v18;
        if ( v18 == m_Size )
          break;
        v17 = v19->key.m_Sym.m_Id;
        v16 = v19;
        ++v18;
        ++v19;
        if ( v17 >= v13->m_name.m_Sym.m_Id )
          goto LABEL_25;
      }
LABEL_8:
      v20 = *(v13 + 8);
      v21 = v20 & 1;
      goto LABEL_9;
    }
LABEL_25:
    if ( v17 != v13->m_name.m_Sym.m_Id )
      goto LABEL_8;
    v20 = *(v13 + 8);
    v21 = v20 & 1;
    if ( (v20 & 1) != 0 )
    {
      v38 = 0xFFFF;
      if ( (v16->val.m_floatBits & 0x7F800000) == 0x7F800000 )
        v38 = LOWORD(v16->val.m_n);
      v39 = ((v20 & 2) != 0) ^ (v13->m_symbol == v38);
    }
    else
    {
      v40 = v16->val.m_f;
      v41 = 0;
      if ( v40 >= v13->m_floats.fa )
        v41 = v13->m_floats.fb >= v40;
      v39 = v41 ^ ((v20 & 2) != 0);
    }
    if ( v39 == 0 )
    {
      if ( v16 != 0 )
        return result;
LABEL_9:
      if ( v21 != 0 )
      {
        v22 = (v20 & 2) != 0;
      }
      else
      {
        v82 = 0;
        if ( (v20 & 2) != 0 )
          v82 = v13->m_floats.fa == v13->m_floats.fb;
        v22 = v82;
      }
      if ( !v22 )
        return result;
    }
    v10 = (v10 + 20);
    v12 = v12 + v13->m_score;
    ++v3->mandatoryCriteriaMatched;
  }
  while ( v10 != pStatsa );
  if ( v12 > 0.0 )
  {
    v7 = v12 + 0.0;
    goto LABEL_15;
  }
  return result;
}


// rr2::CriterionStatic::DebugDump  (line 306, @0x0000000003114240, libserver.so)  // inlines: CUtlSymbol
// calls: CUtlSymbolTable::String, CUtlBuffer::PutString, CUtlBuffer::Printf
// callers: Crr2LibPort::CreateNewRRDBFromOld
// strings: " not in ", "[%f, %f]", "(\"%s\")"
void __fastcall rr2::CriterionStatic::DebugDump(
        const rr2::CriterionStatic *const this,
        CUtlBuffer *const bufout,
        const rr2::RRSymbolTable_t *const symbolTable)
{
  char *v6; // rax
  const char *v7; // rsi
  char *v8; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  id.m_Id = this->m_name.m_Sym.m_Id;
  v6 = CUtlSymbolTable::String(symbolTable, &id.m_Id);
  CUtlBuffer::PutString(bufout, v6);
  v7 = " not in ";
  if ( (*(this + 8) & 2) == 0 )
    v7 = " in ";
  CUtlBuffer::PutString(bufout, v7);
  if ( (*(this + 8) & 1) != 0 )
  {
    id.m_Id = this->m_symbol;
    v8 = CUtlSymbolTable::String(symbolTable, &id.m_Id);
    CUtlBuffer::Printf(bufout, "(\"%s\")", v8);
  }
  else
  {
    CUtlBuffer::Printf(bufout, "[%f, %f]", this->m_floats.fa, this->m_floats.fb);
  }
}


// rr2::CRule::HasCriterionWithKey  (line 333, @0x0000000003114310, libserver.so)  // inlines: CUtlSymbol, CriterionListHasKey<CUtlVectorConservative<rr2::CriterionLambda> >, CriterionListHasKey<CUtlVectorConservative<rr2::CriterionStatic> >, Symbol
bool __fastcall rr2::CRule::HasCriterionWithKey(const rr2::CRule *const this, const rr2::Symbol *const keyname)
{
  UtlSymId_t m_Id; // dx
  rr2::CriterionStatic *m_pMemory; // rax
  rr2::CriterionStatic *v4; // rcx
  int m_Size; // esi
  rr2::CriterionLambda *v6; // rcx
  int v7; // eax
  int v8; // ecx
  rr2::CriterionStatic *v9; // rax
  rr2::CriterionStatic *v10; // rcx
  int v11; // esi
  rr2::CriterionLambda *v12; // rcx
  int v13; // eax

  m_Id = keyname->m_Sym.m_Id;
  if ( this->m_mandatoryCriteria.m_static.m_Size > 0 )
  {
    m_pMemory = this->m_mandatoryCriteria.m_static.m_Memory.m_pMemory;
    if ( m_Id == m_pMemory->m_name.m_Sym.m_Id )
      return 1;
    v4 = &m_pMemory[this->m_mandatoryCriteria.m_static.m_Size - 1];
    while ( m_pMemory != v4 )
    {
      ++m_pMemory;
      if ( m_Id == m_pMemory->m_name.m_Sym.m_Id )
        return 1;
    }
  }
  m_Size = this->m_mandatoryCriteria.m_functors.m_Size;
  if ( m_Size > 0 )
  {
    v6 = this->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory;
    if ( m_Id == v6->m_name.m_Sym.m_Id )
      return 1;
    v7 = 0;
    while ( ++v7 != m_Size )
    {
      ++v6;
      if ( m_Id == v6->m_name.m_Sym.m_Id )
        return 1;
    }
  }
  v8 = this->m_optionalCriteria.m_static.m_Size;
  if ( v8 > 0 )
  {
    v9 = this->m_optionalCriteria.m_static.m_Memory.m_pMemory;
    if ( m_Id == v9->m_name.m_Sym.m_Id )
      return 1;
    v10 = &v9[v8 - 1];
    while ( v9 != v10 )
    {
      ++v9;
      if ( m_Id == v9->m_name.m_Sym.m_Id )
        return 1;
    }
  }
  v11 = this->m_optionalCriteria.m_functors.m_Size;
  if ( v11 <= 0 )
    return 0;
  v12 = this->m_optionalCriteria.m_functors.m_Memory.m_pMemory;
  if ( m_Id != v12->m_name.m_Sym.m_Id )
  {
    v13 = 0;
    while ( ++v13 != v11 )
    {
      ++v12;
      if ( m_Id == v12->m_name.m_Sym.m_Id )
        return 1;
    }
    return 0;
  }
  return 1;
}


