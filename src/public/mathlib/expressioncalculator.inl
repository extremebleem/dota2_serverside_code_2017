
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CExpressionCalculator::~CExpressionCalculator  (line 46, @0x0000000002460350, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CUtlHashtable, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, operator delete [], CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, CUtlMemory<CUtlString, int>::Purge
// callers: CDOTA_ActionRunner::CalculateExpression, EvaluateExpression
void __fastcall CExpressionCalculator::~CExpressionCalculator(CExpressionCalculator *const this)
{
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *m_pVarNames; // r13
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v5; // rdi
  bool v6; // zf
  CExpressionCalculator::Token_t *m_pTokens; // rdi
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *p_m_varValues; // r14

  m_pVarNames = this->m_pVarNames;
  if ( m_pVarNames != 0 )
  {
    m_Size = m_pVarNames->m_Size;
    for ( i = 8LL * m_pVarNames->m_Size - 8; --m_Size >= 0; i -= 8 )
    {
      v5 = (m_pVarNames->m_Memory.m_pMemory + i);
      if ( v5->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v5);
    }
    v6 = (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pVarNames->m_Size = 0;
    if ( v6 )
    {
      CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
      if ( (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
    }
    operator delete(m_pVarNames);
  }
  m_pTokens = this->m_pTokens;
  if ( m_pTokens != 0 )
    operator delete[](m_pTokens);
  p_m_varValues = &this->m_varValues;
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(p_m_varValues);
  CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&p_m_varValues->m_table);
}


