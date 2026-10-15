
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// rr2::ComparatorBySymbol<rr2::CResponseQuery::CFact, ((const rr2::Symbol rr2::CResponseQuery::CFact::*)&rr2::CResponseQuery::CFact::key)>::qsortcompare  (line 41, @0x0000000003113160, libserver.so)  // inlines: Compare, operator int32
int __fastcall rr2::ComparatorBySymbol<rr2::CResponseQuery::CFact,&rr2::CResponseQuery::CFact::key>::qsortcompare(
        const rr2::CResponseQuery::CFact *a,
        const rr2::CResponseQuery::CFact *b)
{
  return a->key.m_Sym.m_Id - b->key.m_Sym.m_Id;
}


// rr2::ComparatorBySymbol<rr2::CriterionBase, ((const rr2::Symbol rr2::CriterionBase::*)&rr2::CriterionBase::m_name)>::qsortchild<rr2::CriterionStatic>  (line 57, @0x0000000003114470, libserver.so)  // inlines: Compare, operator int32, qsortcompare
int __fastcall rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionStatic>(
        const rr2::CriterionStatic *a,
        const rr2::CriterionStatic *b)
{
  return a->m_name.m_Sym.m_Id - b->m_name.m_Sym.m_Id;
}


// rr2::ComparatorBySymbol<rr2::CriterionBase, ((const rr2::Symbol rr2::CriterionBase::*)&rr2::CriterionBase::m_name)>::qsortchild<rr2::CriterionLambda>  (line 57, @0x0000000003114480, libserver.so)  // inlines: Compare, operator int32, qsortcompare
int __fastcall rr2::ComparatorBySymbol<rr2::CriterionBase,&rr2::CriterionBase::m_name>::qsortchild<rr2::CriterionLambda>(
        const rr2::CriterionLambda *a,
        const rr2::CriterionLambda *b)
{
  return a->m_name.m_Sym.m_Id - b->m_name.m_Sym.m_Id;
}


