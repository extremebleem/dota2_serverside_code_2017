
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_response_types_internal.cpp  (line 0, @0x0000000001a6a870, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_response_types_internal_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ResponseRulePartition::ResponseRulePartition  (line 14, @0x00000000031117e0, libserver.so)  // inlines: CResponseDict, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo
// callers: CResponseSystem::CResponseSystem
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall ResponseRulePartition::ResponseRulePartition(ResponseRulePartition *const this)
{
  ResponseRulePartition *v1; // rax
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,short unsigned int>,short unsigned int> *p_m_Elements; // r8
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*>::Node_t,short unsigned int>,short unsigned int> *v3; // rsi
  CUtlMap<unsigned int,char const*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_ReverseMap; // rcx
  ResponseRulePartition *v5; // rdx
  signed __int64 v6; // rdx

  v1 = this;
  p_m_Elements = &this->m_RuleParts[0].m_Tree.m_Elements;
  v3 = &this->m_RuleParts[0].m_ReverseMap.m_Tree.m_Elements;
  p_m_ReverseMap = &this->m_RuleParts[0].m_ReverseMap;
  do
  {
    v1->m_RuleParts[0].m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
    v5 = v1;
    v1 = (v1 + 80);
    v6 = v5 - this;
    *(&p_m_Elements->m_pMemory + v6) = 0;
    *(&p_m_Elements->m_nAllocationCount + v6) = 0;
    *(&p_m_Elements->m_nGrowSize + v6) = 0;
    v1[-1].m_RuleParts[255].m_Tree.m_Root = -1;
    v1[-1].m_RuleParts[255].m_Tree.m_NumElements = 0;
    v1[-1].m_RuleParts[255].m_Tree.m_FirstFree = -1;
    v1[-1].m_RuleParts[255].m_Tree.m_LastAlloc.index = -1;
    v1[-1].m_RuleParts[255].m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
    v1[-1].m_RuleParts[255].m_Tree.m_pElements = 0;
    *(&v3->m_pMemory + v6) = 0;
    *(&v3->m_nAllocationCount + v6) = 0;
    *(&v3->m_nGrowSize + v6) = 0;
    *(&p_m_ReverseMap->m_Tree.m_Root + v6) = -1;
    *(&p_m_ReverseMap->m_Tree.m_NumElements + v6) = 0;
    *(&p_m_ReverseMap->m_Tree.m_FirstFree + v6) = -1;
    v1[-1].m_RuleParts[255].m_ReverseMap.m_Tree.m_LastAlloc.index = -1;
    *(&p_m_ReverseMap->m_Tree.m_pElements + v6) = 0;
  }
  while ( v1 != this + 1 );
}


// ResponseRulePartition::~ResponseRulePartition  (line 21, @0x00000000031118d0, libserver.so)  // inlines: Purge, ~CResponseDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: ResponseRulePartition::RemoveAll, CUtlRBTree<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int, CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlRBTree<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int, CUtlMap<unsigned int, char const*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int>, short unsigned int>::Purge
// callers: CResponseSystem::CResponseSystem, CResponseSystem::~CResponseSystem
void __fastcall ResponseRulePartition::~ResponseRulePartition(ResponseRulePartition *const this)
{
  ResponseRulePartition *v2; // r13
  bool v3; // zf

  ResponseRulePartition::RemoveAll(this);
  if ( this != 0 )
  {
    v2 = this + 1;
    while ( 1 )
    {
      v2 = (v2 - 80);
      CUtlRBTree<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&v2->m_RuleParts[0].m_ReverseMap.m_Tree);
      v2->m_RuleParts[0].m_ReverseMap.m_Tree.m_FirstFree = -1;
      if ( (v2->m_RuleParts[0].m_ReverseMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
      {
        v2->m_RuleParts[0].m_ReverseMap.m_Tree.m_LastAlloc.index = -1;
      }
      else
      {
        CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_RuleParts[0].m_ReverseMap.m_Tree.m_Elements);
        v3 = (v2->m_RuleParts[0].m_ReverseMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
        v2->m_RuleParts[0].m_ReverseMap.m_Tree.m_LastAlloc.index = -1;
        if ( v3 )
          CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_RuleParts[0].m_ReverseMap.m_Tree.m_Elements);
      }
      CUtlRBTree<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(v2);
      v2->m_RuleParts[0].m_Tree.m_FirstFree = -1;
      if ( (v2->m_RuleParts[0].m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
      {
        v2->m_RuleParts[0].m_Tree.m_LastAlloc.index = -1;
LABEL_6:
        if ( this == v2 )
          return;
      }
      else
      {
        CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_RuleParts[0].m_Tree.m_Elements);
        v3 = (v2->m_RuleParts[0].m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
        v2->m_RuleParts[0].m_Tree.m_LastAlloc.index = -1;
        if ( !v3 )
          goto LABEL_6;
        CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_RuleParts[0].m_Tree.m_Elements);
        if ( this == v2 )
          return;
      }
    }
  }
}


// ResponseRulePartition::IndexFromDictElem  (line 26, @0x0000000003111310, libserver.so)
// callers: CResponseSystem::FindBestMatchingRule
ResponseRulePartition::tIndex __fastcall ResponseRulePartition::IndexFromDictElem(
        ResponseRulePartition *const this,
        ResponseRulePartition::tRuleDict *pDict,
        int elem)
{
  return elem & 0x1FFF | (-858980352 * ((pDict - this) >> 4));
}


// ResponseRulePartition::GetElementName  (line 39, @0x0000000003111330, libserver.so)  // inlines: BucketFromIdx, Element, Find, GetElementName, Key, LeftChild, RightChild, operator(), operator[]
// callers: CResponseSystem::DumpRules, CResponseSystem::DumpDictionary, CResponseSystem::FindBestResponse, CResponseSystem::CopyRuleFrom, Crr2LibPort::CreateNewRRDBFromOld
const char *__fastcall ResponseRulePartition::GetElementName(
        const ResponseRulePartition *const this,
        const ResponseRulePartition::tIndex *const i)
{
  CResponseDict<Rule*,short unsigned int> *v2; // rbx
  __int64 m_Root; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,char const*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // r12
  __int64 v6; // r14
  _DWORD v8[12]; // [rsp+0h] [rbp-30h] BYREF

  v2 = &this->m_RuleParts[HIWORD(*i)];
  v8[0] = v2->m_Tree.m_Elements.m_pMemory[*i & 0x1FFF].m_Data.key;
  m_Root = v2->m_ReverseMap.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return "";
  m_pMemory = v2->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = m_Root;
      v6 = m_Root;
      if ( !v2->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(v8, &m_pMemory[m_Root].m_Data.key) )
        break;
      m_pMemory = v2->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v5].m_Left;
      if ( m_Root == 0xFFFF )
        return "";
    }
    if ( !v2->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(
            &v2->m_ReverseMap.m_Tree.m_Elements.m_pMemory[v6].m_Data.key,
            v8) )
      break;
    m_pMemory = v2->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v6].m_Right;
    if ( m_Root == 0xFFFF )
      return "";
  }
  return v2->m_ReverseMap.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
}


// ResponseRulePartition::Count  (line 46, @0x0000000003111400, libserver.so)  // inlines: Count
// callers: CResponseFileParser::LoadFromBuffer, Crr2LibPort::CreateNewRRDBFromOld
int __fastcall ResponseRulePartition::Count(ResponseRulePartition *const this)
{
  __int64 v1; // rdx
  int result; // eax
  int m_NumElements; // ecx

  v1 = 0;
  result = 0;
  do
  {
    m_NumElements = this->m_RuleParts[v1++].m_Tree.m_NumElements;
    result += m_NumElements;
  }
  while ( v1 != 256 );
  return result;
}


// ResponseRulePartition::RemoveAll  (line 57, @0x0000000003111710, libserver.so)  // inlines: Element, FirstInorder, LeftChild, NextInorder, RemoveAll, operator[]
// calls: Rule::~Rule, operator delete, CUtlRBTree<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int, CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int, CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll
// callers: CResponseSystem::Clear, ResponseRulePartition::~ResponseRulePartition
void __fastcall ResponseRulePartition::RemoveAll(ResponseRulePartition *const this)
{
  int i; // r14d
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,short unsigned int> *m_pMemory; // rdx
  int m_Left; // ebx
  unsigned __int16 v6; // ax
  CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // r12
  ResponseRulePartition *v8; // rdi

  for ( i = 256; i != 0; --i )
  {
    m_Root = this->m_RuleParts[0].m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = this->m_RuleParts[0].m_Tree.m_Elements.m_pMemory;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left == 0xFFFF )
      {
        m_Left = m_Root;
      }
      else
      {
        while ( 1 )
        {
          v6 = m_pMemory[m_Left].m_Left;
          if ( v6 == 0xFFFF )
            break;
          m_Left = v6;
        }
      }
      while ( 1 )
      {
        elem = m_pMemory[m_Left].m_Data.elem;
        if ( elem != 0 )
        {
          Rule::~Rule(m_pMemory[m_Left].m_Data.elem);
          operator delete(elem);
        }
        m_Left = CUtlRBTree<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   this,
                   m_Left);
        if ( m_Left == 0xFFFF )
          break;
        m_pMemory = this->m_RuleParts[0].m_Tree.m_Elements.m_pMemory;
      }
    }
    v8 = this;
    this = (this + 80);
    CUtlRBTree<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(v8);
  }
}


// ResponseRulePartition::GetDictForRule  (line 78, @0x0000000003111430, libserver.so)  // inlines: CanBucketBySubject
// calls: __cxa_guard_acquire, Rule::GetValueForRuleCriterionByName, Rule::GetPointerForRuleCriterionByName, ResponseRulePartition::GetBucketForSpeakerAndConcept, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CResponseSystem::CopyRuleFrom, CResponseFileParser::ParseRule
// strings: "targetclassname"
// globals: `guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kWHO, `guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kCONCEPT, `guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kSUBJECT, ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kWHO, ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kCONCEPT, ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kSUBJECT
ResponseRulePartition::tRuleDict *__fastcall ResponseRulePartition::GetDictForRule(
        ResponseRulePartition *const this,
        CResponseSystem *pSystem,
        Rule *pRule)
{
  const char *ValueForRuleCriterionByName; // r14
  const char *v7; // r15
  const Criteria *PointerForRuleCriterionByName; // rax
  const char *value; // rcx

  if ( `guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kWHO == 0
    && __cxa_guard_acquire(&`guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kWHO) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol(
      &ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kWHO.m_Id,
      "classname");
    __cxa_guard_release(&`guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kWHO);
  }
  if ( `guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kCONCEPT == 0
    && __cxa_guard_acquire(&`guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kCONCEPT) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol(
      &ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kCONCEPT.m_Id,
      "Concept");
    __cxa_guard_release(&`guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kCONCEPT);
  }
  if ( `guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kSUBJECT == 0
    && __cxa_guard_acquire(&`guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kSUBJECT) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol(
      &ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kSUBJECT.m_Id,
      "targetclassname");
    __cxa_guard_release(&`guard variable for'ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kSUBJECT);
  }
  ValueForRuleCriterionByName = Rule::GetValueForRuleCriterionByName(
                                  pRule,
                                  pSystem,
                                  &ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kWHO);
  v7 = Rule::GetValueForRuleCriterionByName(
         pRule,
         pSystem,
         &ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kCONCEPT);
  PointerForRuleCriterionByName = Rule::GetPointerForRuleCriterionByName(
                                    pRule,
                                    pSystem,
                                    &ResponseRulePartition::GetDictForRule(CResponseSystem *,Rule *)::kSUBJECT);
  if ( PointerForRuleCriterionByName == 0
    || !PointerForRuleCriterionByName->required
    || (value = PointerForRuleCriterionByName->value) == 0
    || ((*value & 0xDF) - 65) > 0x19u )
  {
    value = 0;
  }
  return &this->m_RuleParts[ResponseRulePartition::GetBucketForSpeakerAndConcept(
                              this,
                              ValueForRuleCriterionByName,
                              v7,
                              value)];
}


// ResponseRulePartition::GetDictsForCriteria  (line 97, @0x0000000003111600, libserver.so)  // inlines: AddToTail, CopyConstruct<CResponseDict<Rule*>*>, Element, RemoveAll, operator[]
// calls: CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::GetValue, ResponseRulePartition::GetBucketForSpeakerAndConcept
// callers: CResponseSystem::FindBestMatchingRule
// strings: "targetclassname"
void __fastcall ResponseRulePartition::GetDictsForCriteria(
        ResponseRulePartition *const this,
        CUtlVectorFixed<CResponseDict<Rule*,short unsigned int>*,2ul> *pResult,
        const CResponseCriteriaSet *const criteria)
{
  const char *Value; // r14
  int CriterionIndex; // eax
  const char *v8; // r15
  int v9; // eax
  int v10; // eax
  const char *v11; // rcx
  unsigned int BucketForSpeakerAndConcept; // eax
  __int64 m_Size; // rdx
  CUtlVectorBase<CResponseDict<Rule*,short unsigned int>*,CUtlMemoryFixed<CResponseDict<Rule*,short unsigned int>*,2ul> >::CAllocator *p_m_Memory; // r12
  int v15; // ecx
  unsigned __int8 *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int8 *v20; // rdx

  Value = 0;
  pResult->m_Size = 0;
  CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(criteria, "classname");
  if ( CriterionIndex != -1 )
    Value = CResponseCriteriaSet::GetValue(criteria, CriterionIndex);
  v8 = 0;
  v9 = CResponseCriteriaSet::FindCriterionIndex(criteria, "Concept");
  if ( v9 != -1 )
    v8 = CResponseCriteriaSet::GetValue(criteria, v9);
  v10 = CResponseCriteriaSet::FindCriterionIndex(criteria, "targetclassname");
  if ( v10 == -1 || (v11 = CResponseCriteriaSet::GetValue(criteria, v10)) == 0 )
  {
    p_m_Memory = &pResult->m_Memory;
  }
  else
  {
    BucketForSpeakerAndConcept = ResponseRulePartition::GetBucketForSpeakerAndConcept(this, Value, v8, v11);
    m_Size = pResult->m_Size;
    p_m_Memory = &pResult->m_Memory;
    v15 = m_Size + 1;
    v16 = &pResult->m_Memory.m_Memory.m_Data[8 * m_Size];
    pResult->m_Size = v15;
    if ( v16 != 0 )
      *v16 = this + 80 * BucketForSpeakerAndConcept;
  }
  v17 = ResponseRulePartition::GetBucketForSpeakerAndConcept(this, Value, v8, 0);
  v18 = pResult->m_Size;
  v19 = v18 + 1;
  v20 = &p_m_Memory->m_Memory.m_Data[8 * v18];
  pResult->m_Size = v19;
  if ( v20 != 0 )
    *v20 = this + 80 * v17;
}


