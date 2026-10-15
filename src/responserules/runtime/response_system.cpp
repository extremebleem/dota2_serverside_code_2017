// Reconstructed from DWARF by pahole; not original source.

// src/responserules/runtime/response_system.cpp:30
class CResponseStringBuckets {
	CResponseStringBuckets();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_response_system.cpp  (line 0, @0x0000000001a6a590, libserver.so)  // inlines: CResponseStringBuckets, CUtlLinkedList, CUtlMemory, CUtlRBTree, Color, ConstructList, ResetDbgInfo, SetColor, SetLessFunc, __static_initialization_and_destruction_0
// calls: __cxa_atexit, CUtlScratchMemoryPool::CUtlScratchMemoryPool
// globals: g_ResponseStrings, UNSPECIFIED_LOGGING_COLOR, __dso_handle, __tcf_0_105, StringLessThan(char const* const&,char const* const&), g_ResponseStringMemPool, CResponseSystem::m_DebugExcludeList, CUtlLinkedList<CRR_Concept,ushort,false,uint,CUtlMemory<UtlLinkedListElem_t<CRR_Concept,ushort>,uint>>::~CUtlLinkedList()
void __cdecl GLOBAL__sub_I_response_system_cpp()
{
  CUtlMemory<UtlRBTreeNode_t<char const*,short unsigned int>,short unsigned int> *p_m_Elements; // rdx
  CUtlRBTree<char const*,short unsigned int,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,short unsigned int>,short unsigned int> > *v1; // rax
  CUtlRBTree<char const*,short unsigned int,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,short unsigned int>,short unsigned int> > *v2; // rax

  p_m_Elements = &g_ResponseStrings[0].m_Elements;
  v1 = g_ResponseStrings;
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  do
  {
    ++v1;
    p_m_Elements = (p_m_Elements + 40);
    v1[-1].m_LessFunc = 0;
    *&p_m_Elements[-3].m_nAllocationCount = 0;
    LODWORD(p_m_Elements[-2].m_pMemory) = 0;
    HIDWORD(p_m_Elements[-2].m_pMemory) = 0;
    v1[-1].m_Root = -1;
    v1[-1].m_NumElements = 0;
    v1[-1].m_FirstFree = -1;
    v1[-1].m_LastAlloc.index = -1;
    v1[-1].m_pElements = 0;
  }
  while ( v1 != &unk_4D7CF80 );
  __cxa_atexit(_tcf_0_105, 0, &_dso_handle);
  v2 = g_ResponseStrings;
  do
  {
    while ( v2->m_LessFunc != 0 )
    {
      if ( ++v2 == &unk_4D7CF80 )
        goto LABEL_7;
    }
    ++v2;
    v2[-1].m_LessFunc = StringLessThan;
  }
  while ( v2 != &unk_4D7CF80 );
LABEL_7:
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(&g_ResponseStringMemPool, 4096, 0, 0);
  __cxa_atexit(CUtlScratchMemoryPool::~CUtlScratchMemoryPool, &g_ResponseStringMemPool, &_dso_handle);
  CResponseSystem::m_DebugExcludeList.m_Memory.m_pMemory = 0;
  CResponseSystem::m_DebugExcludeList.m_Memory.m_nAllocationCount = 0;
  CResponseSystem::m_DebugExcludeList.m_Memory.m_nGrowSize = 4;
  CResponseSystem::m_DebugExcludeList.m_LastAlloc.index = -1;
  CResponseSystem::m_DebugExcludeList.m_Head = 0xFFFF;
  CResponseSystem::m_DebugExcludeList.m_Tail = 0xFFFF;
  CResponseSystem::m_DebugExcludeList.m_FirstFree = 0xFFFF;
  CResponseSystem::m_DebugExcludeList.m_ElementCount = 0;
  CResponseSystem::m_DebugExcludeList.m_NumAlloced = 0;
  CResponseSystem::m_DebugExcludeList.m_pElements = 0;
  __cxa_atexit(
    CUtlLinkedList<CRR_Concept,unsigned short,false,unsigned int,CUtlMemory<UtlLinkedListElem_t<CRR_Concept,unsigned short>,unsigned int>>::~CUtlLinkedList,
    &CResponseSystem::m_DebugExcludeList,
    &_dso_handle);
}


// ResponseCopyString  (line 44, @0x00000000030fc340, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, V_memcpy, V_strlen, memcpy, operator[]
// calls: HashStringConventional, strlen, CUtlScratchMemoryPool::AllocAligned, memcpy, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::LinkToParent
// callers: Criteria::operator=, ParserResponse::operator=, Rule::operator=, Rule::SetContext, CResponseSystem::CopyCriteriaFrom, CResponseSystem::CopyResponsesFrom, CResponseSystem::CopyRuleFrom, CResponseFileParser::ParseResponse_Fire, CResponseFileParser::ParseResponse_Then, CResponseFileParser::ParseOneResponse, CResponseFileParser::ParseOneCriterion, CResponseFileParser::ParseRule (13 total)
// globals: g_ResponseStrings, g_ResponseStringMemPool
const char *__fastcall ResponseCopyString(const char *in)
{
  const char *result; // rax
  CUtlRBTree<char const*,short unsigned int,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,short unsigned int>,short unsigned int> > *v2; // r12
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<char const*,short unsigned int> *v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  size_t v7; // rbx
  void *v8; // rax
  const char *v9; // rsi
  void *v10; // r15
  unsigned __int16 v11; // r13
  unsigned __int16 m_Right; // ax
  char v13; // dl
  UtlRBTreeNode_t<char const*,short unsigned int> *m_pMemory; // rax
  bool v15; // bl
  unsigned __int16 v16; // ax
  void *v17; // rax
  const char *ina; // [rsp+8h] [rbp-48h] BYREF
  char *pCopyFrom[7]; // [rsp+18h] [rbp-38h] BYREF

  ina = in;
  if ( in == 0 )
    return 0;
  result = "";
  if ( *in != 0 )
  {
    v2 = &g_ResponseStrings[HashStringConventional(in) & 0x3F];
    m_Root = v2->m_Root;
    if ( m_Root == 0xFFFF )
    {
LABEL_9:
      if ( ina != 0 )
      {
        LODWORD(v7) = strlen(ina);
        v8 = CUtlScratchMemoryPool::AllocAligned(&g_ResponseStringMemPool, v7 + 1, 1);
        v9 = ina;
        v10 = v8;
        if ( (v7 & 0x80000000) != 0LL )
          __debugbreak();
        v7 = v7;
      }
      else
      {
        v7 = 0;
        v17 = CUtlScratchMemoryPool::AllocAligned(&g_ResponseStringMemPool, 1, 1);
        v9 = ina;
        v10 = v17;
      }
      memcpy(v10, v9, v7);
      *(v10 + v7) = 0;
      v11 = v2->m_Root;
      pCopyFrom[0] = v10;
      if ( v11 != 0xFFFF )
      {
        while ( 1 )
        {
          v6 = !v2->m_LessFunc(pCopyFrom, &v2->m_Elements.m_pMemory[v11].m_Data);
          m_pMemory = v2->m_Elements.m_pMemory;
          if ( v6 )
          {
            m_Right = m_pMemory[v11].m_Right;
            v13 = 0;
            if ( m_Right == 0xFFFF )
            {
LABEL_19:
              v15 = v13;
              goto LABEL_20;
            }
          }
          else
          {
            m_Right = m_pMemory[v11].m_Left;
            v13 = 1;
            if ( m_Right == 0xFFFF )
              goto LABEL_19;
          }
          v11 = m_Right;
        }
      }
      v11 = -1;
      v15 = 0;
LABEL_20:
      v16 = CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::NewNode(
              v2,
              pCopyFrom);
      CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::LinkToParent(
        v2,
        v16,
        v11,
        v15);
      ++v2->m_NumElements;
      return v10;
    }
    else
    {
      v4 = v2->m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = m_Root;
          if ( !v2->m_LessFunc(&ina, &v4[v5].m_Data) )
            break;
          v4 = v2->m_Elements.m_pMemory;
          m_Root = v4[v5].m_Left;
          if ( m_Root == 0xFFFF )
            goto LABEL_9;
        }
        v6 = !v2->m_LessFunc(&v2->m_Elements.m_pMemory[v5].m_Data, &ina);
        v4 = v2->m_Elements.m_pMemory;
        if ( v6 )
          return v4[v5].m_Data;
        m_Root = v4[v5].m_Right;
        if ( m_Root == 0xFFFF )
          goto LABEL_9;
      }
    }
  }
  return result;
}


// IResponseEngineEmulator::Get  (line 70, @0x00000000030f8040, libserver.so)
// callers: CResponseFileParser::GetCurrentScript, CResponseFileParser::ParseResponseGroup_NoDelay, CResponseFileParser::ParseResponse_NoDelay, CResponseFileParser::ParseResponseGroup_Soundlevel, CResponseFileParser::ParseResponse_Soundlevel, CResponseFileParser::ParseResponse_Odds, CResponseFileParser::ParseResponseGroup_Odds, CResponseFileParser::ParseResponse_Weight, CResponseFileParser::ParseResponse_WeaponDelay, CResponseFileParser::ParseResponseGroup_WeaponDelay, CResponseFileParser::ParseResponse_Delay, CResponseFileParser::ParseResponse_PreDelay (31 total)
IResponseEngineEmulator *__cdecl IResponseEngineEmulator::Get()
{
  return IResponseEngineEmulator::s_pSingleton;
}


// CResponseSystem::CResponseSystem  (line 91, @0x00000000030fa230, libserver.so)  // inlines: CRefCountServiceBase, CRefCounted, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Destruct<CResponseSystem::PendingCriterionRule>, Element, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetLessFunc, operator[], ~CRefCountServiceBase, ~CRefCounted, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IResponseSystem, ~PendingCriterionRule
// calls: ResponseRulePartition::ResponseRulePartition, operator new, CResponseFileParser::CResponseFileParser, CUtlDict<Criteria, short int>::Purge, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::~CUtlRBTree, CUtlDict<ResponseGroup, short int>::Purge, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::~CUtlRBTree, _Unwind_Resume, operator delete, CUtlString::FreeMemoryBlock, CUtlDict<CResponseSystem::Enumeration, short int>::Purge, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::~CUtlRBTree (15 total)
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CResponseSystem::CResponseSystem(CResponseSystem *const this)
{
  CResponseFileParser *v2; // r12

  this->_vptr_IResponseSystem = off_47C4C50;
  this->m_iRefs = 1;
  this->_vptr_CRefCountServiceBase = off_47C4C98;
  this->m_Responses.m_Elements.m_Tree.m_Root = -1;
  this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_Responses.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_Responses.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_Responses.m_Elements.m_Tree.m_NumElements = 0;
  this->m_Responses.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_Responses.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_Responses.m_Elements.m_Tree.m_pElements = 0;
  this->m_Responses.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_Criteria.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_Criteria.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_Criteria.m_Elements.m_Tree.m_Root = -1;
  this->m_Criteria.m_Elements.m_Tree.m_NumElements = 0;
  this->m_Criteria.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_Criteria.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_Criteria.m_Elements.m_Tree.m_pElements = 0;
  this->m_Criteria.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  ResponseRulePartition::ResponseRulePartition(&this->m_RulePartitions);
  this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_Enumerations.m_Elements.m_Tree.m_Root = -1;
  this->m_Enumerations.m_Elements.m_Tree.m_NumElements = 0;
  this->m_Enumerations.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_Enumerations.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_Enumerations.m_Elements.m_Tree.m_pElements = 0;
  this->m_Enumerations.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_FakedDepletes.m_Size = 0;
  this->m_FakedDepletes.m_Memory.m_pMemory = 0;
  this->m_FakedDepletes.m_Memory.m_nAllocationCount = 0;
  this->m_FakedDepletes.m_Memory.m_nGrowSize = 0;
  this->m_PendingCriterion.m_Size = 0;
  this->m_PendingCriterion.m_Memory.m_pMemory = 0;
  this->m_PendingCriterion.m_Memory.m_nAllocationCount = 0;
  this->m_PendingCriterion.m_Memory.m_nGrowSize = 0;
  this->m_bCustomManagable = 0;
  v2 = operator new(0x5E8u);
  CResponseFileParser::CResponseFileParser(v2, this);
  this->m_pParserWhichIsLoadedAllTheTimeWhichKindOfSucks = v2;
}


// CResponseSystem::~CResponseSystem  (line 100, @0x00000000030fa740, libserver.so)  // inlines: Destruct<CResponseSystem::PendingCriterionRule>, Element, Purge, RemoveAll, operator[], ~CRefCountServiceBase, ~CRefCounted, ~CResponseFileParser, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IResponseSystem, ~PendingCriterionRule
// calls: CResponseSystem::Clear, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)()>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::Purge, CStringPool::~CStringPool, operator delete, CUtlString::FreeMemoryBlock, CUtlDict<CResponseSystem::Enumeration, short int>::Purge, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int>::Purge (27 total)
// callers: CGameResponseSystem::~CGameResponseSystem, CResponseSystem::~CResponseSystem
void __fastcall CResponseSystem::~CResponseSystem(CResponseSystem *const this)
{
  CResponseFileParser *v2; // rbx
  bool v3; // zf
  int m_Size; // r12d
  __int64 i; // r14
  CUtlString *v6; // rbx

  this->_vptr_IResponseSystem = off_47C4C50;
  this->_vptr_CRefCountServiceBase = off_47C4C98;
  CResponseSystem::Clear(this);
  v2 = this->m_pParserWhichIsLoadedAllTheTimeWhichKindOfSucks;
  if ( v2 != 0 )
  {
    CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&v2->m_ResponseGroupDispatch.m_Tree);
    if ( (v2->m_ResponseGroupDispatch.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_ResponseGroupDispatch.m_Tree.m_Elements);
    CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&v2->m_ResponseDispatch.m_Tree);
    if ( (v2->m_ResponseDispatch.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_ResponseDispatch.m_Tree.m_Elements);
    CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&v2->m_RuleDispatch.m_Tree);
    if ( (v2->m_RuleDispatch.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_RuleDispatch.m_Tree.m_Elements);
    CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&v2->m_FileDispatch.m_Tree);
    if ( (v2->m_FileDispatch.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v2->m_FileDispatch.m_Tree.m_Elements);
    CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Purge(&v2->m_RootCommandHashes);
    if ( (v2->m_RootCommandHashes.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>::Purge(&v2->m_RootCommandHashes.m_Elements);
    CStringPool::~CStringPool(&v2->m_IncludedFiles);
    v3 = (v2->m_ScriptStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v2->m_ScriptStack.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<CResponseFileParser::ScriptEntry,int>::Purge(&v2->m_ScriptStack.m_Memory);
      if ( (v2->m_ScriptStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CResponseFileParser::ScriptEntry,int>::Purge(&v2->m_ScriptStack.m_Memory);
    }
    operator delete(v2);
  }
  m_Size = this->m_PendingCriterion.m_Size;
  this->m_pParserWhichIsLoadedAllTheTimeWhichKindOfSucks = 0;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v6 = (&this->m_PendingCriterion.m_Memory.m_pMemory->szToken + i);
    if ( v6[1].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v6 + 1);
    if ( v6->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v6);
  }
  v3 = (this->m_PendingCriterion.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PendingCriterion.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CResponseSystem::PendingCriterionRule,int>::Purge(&this->m_PendingCriterion.m_Memory);
    if ( (this->m_PendingCriterion.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CResponseSystem::PendingCriterionRule,int>::Purge(&this->m_PendingCriterion.m_Memory);
  }
  v3 = (this->m_FakedDepletes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_FakedDepletes.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<int,int>::Purge(&this->m_FakedDepletes.m_Memory);
    if ( (this->m_FakedDepletes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_FakedDepletes.m_Memory);
  }
  CUtlDict<CResponseSystem::Enumeration,short>::Purge(&this->m_Enumerations);
  CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Purge(&this->m_Enumerations.m_Elements.m_Tree);
  if ( (this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>::Purge(&this->m_Enumerations.m_Elements.m_Tree.m_Elements);
  ResponseRulePartition::~ResponseRulePartition(&this->m_RulePartitions);
  CUtlDict<Criteria,short>::Purge(&this->m_Criteria);
  CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Purge(&this->m_Criteria.m_Elements.m_Tree);
  if ( (this->m_Criteria.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>::Purge(&this->m_Criteria.m_Elements.m_Tree.m_Elements);
  CUtlDict<ResponseGroup,short>::Purge(&this->m_Responses);
  CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Purge(&this->m_Responses.m_Elements.m_Tree);
  if ( (this->m_Responses.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>::Purge(&this->m_Responses.m_Elements.m_Tree.m_Elements);
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  this->_vptr_IResponseSystem = off_3FECD30;
}


// CResponseSystem::~CResponseSystem  (line 100, @0x00000000030faa70, libserver.so)
// calls: CResponseSystem::~CResponseSystem, operator delete
void __fastcall CResponseSystem::~CResponseSystem(CResponseSystem *const this)
{
  CResponseSystem::~CResponseSystem(this);
  operator delete(this);
}


// CResponseSystem::GetParser  (line 108, @0x00000000030f8050, libserver.so)
CResponseFileParser *__fastcall CResponseSystem::GetParser(CResponseSystem *const this)
{
  return this->m_pParserWhichIsLoadedAllTheTimeWhichKindOfSucks;
}


// CResponseSystem::Clear  (line 117, @0x00000000030fa540, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, RemoveAll, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::RemoveAll, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::RemoveAll, ResponseRulePartition::RemoveAll, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::RemoveAll
// callers: rr_reloadresponsesystems, CResponseSystem::~CResponseSystem
void __fastcall CResponseSystem::Clear(CResponseSystem *const this)
{
  __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rdx
  __int64 v4; // rax
  __int16 m_Left; // si
  CUtlDict<ResponseGroup,short int> *p_m_Responses; // r14
  __int16 Inorder; // bx
  CUtlDict<Criteria,short int> *p_m_Criteria; // r14
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // si
  CUtlDict<CResponseSystem::Enumeration,short int> *p_m_Enumerations; // r14
  __int16 v13; // cx
  UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v14; // rdx
  __int64 v15; // rax
  __int16 v16; // bx

  m_Root = this->m_Responses.m_Elements.m_Tree.m_Root;
  if ( m_Root == -1 )
  {
    p_m_Responses = &this->m_Responses;
  }
  else
  {
    m_pMemory = this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_Responses = &this->m_Responses;
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NextInorder(
                 &this->m_Responses.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::RemoveAll(&p_m_Responses->m_Elements.m_Tree);
  Inorder = this->m_Criteria.m_Elements.m_Tree.m_Root;
  p_m_Criteria = &this->m_Criteria;
  if ( Inorder != -1 )
  {
    v9 = this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
    v10 = Inorder;
    v11 = v9[Inorder].m_Left;
    if ( v11 != -1 )
    {
      while ( 1 )
      {
        v10 = v11;
        if ( v9[v11].m_Left == -1 )
          break;
        v11 = v9[v11].m_Left;
      }
      Inorder = v11;
    }
    p_m_Criteria = &this->m_Criteria;
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9[v10].m_Data.key);
      Inorder = CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NextInorder(
                  &this->m_Criteria.m_Elements.m_Tree,
                  Inorder);
      if ( Inorder == -1 )
        break;
      v9 = this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
      v10 = Inorder;
    }
  }
  CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::RemoveAll(&p_m_Criteria->m_Elements.m_Tree);
  ResponseRulePartition::RemoveAll(&this->m_RulePartitions);
  p_m_Enumerations = &this->m_Enumerations;
  v13 = this->m_Enumerations.m_Elements.m_Tree.m_Root;
  if ( v13 != -1 )
  {
    v14 = this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
    v15 = v13;
    v16 = v14[v13].m_Left;
    if ( v16 == -1 )
    {
      v16 = this->m_Enumerations.m_Elements.m_Tree.m_Root;
    }
    else
    {
      while ( 1 )
      {
        v15 = v16;
        if ( v14[v16].m_Left == -1 )
          break;
        v16 = v14[v16].m_Left;
      }
    }
    p_m_Enumerations = &this->m_Enumerations;
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14[v15].m_Data.key);
      v16 = CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NextInorder(
              &this->m_Enumerations.m_Elements.m_Tree,
              v16);
      if ( v16 == -1 )
        break;
      v14 = this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
      v15 = v16;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::RemoveAll(&p_m_Enumerations->m_Elements.m_Tree);
}


// CResponseSystem::LookupEnumeration  (line 131, @0x00000000030f8060, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CResponseSystem::CompareUsingMatcherDota, CResponseSystem::CompareUsingMatcherL4D, CResponseSystem::CompareUsingMatcherNew, CResponseFileParser::ResolveToken
float __fastcall CResponseSystem::LookupEnumeration(CResponseSystem *const this, const char *name, bool *const found)
{
  __int16 m_Left; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rcx
  __int64 v6; // r15
  _QWORD v9[8]; // [rsp+10h] [rbp-40h] BYREF

  if ( name == 0 || (m_Left = this->m_Enumerations.m_Elements.m_Tree.m_Root, v9[0] = name, m_Left == -1) )
  {
LABEL_8:
    *found = 0;
    return 0.0;
  }
  else
  {
    m_pMemory = this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = m_Left;
        if ( !this->m_Enumerations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v9, &m_pMemory[v6].m_Data) )
          break;
        m_pMemory = this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Left = m_pMemory[m_Left].m_Left;
        if ( m_Left == -1 )
          goto LABEL_8;
      }
      if ( !this->m_Enumerations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data,
              v9) )
        break;
      m_pMemory = this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Left = m_pMemory[v6].m_Right;
      if ( m_Left == -1 )
        goto LABEL_8;
    }
    *found = 1;
    return this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem.value;
  }
}


// CResponseSystem::ComputeMatcher  (line 145, @0x00000000030f8160, libserver.so)  // inlines: V_AppearsToBeANumber, atof
// calls: CResponseFileParser::ResolveToken, strtod, Matcher::SetToken, Matcher::SetRaw, V_strtod, __stack_chk_fail
// callers: CResponseFileParser::ParseOneCriterion
void __fastcall CResponseSystem::ComputeMatcher(CResponseSystem *const this, Criteria *c, Matcher *const matcher)
{
  const char *value; // rbx
  const char *v6; // rbx
  int v7; // ecx
  char v8; // r11
  char v9; // r10
  char v10; // r9
  char v11; // r14
  __int64 v12; // rdx
  char v13; // al
  CResponseFileParser *v14; // rdi
  __m128d v15; // xmm0
  char v16; // al
  double v17; // xmm0_8
  bool v18; // dl
  __m128d v19; // xmm0
  char v20; // [rsp+Ch] [rbp-264h]
  char v21; // [rsp+10h] [rbp-260h]
  char v22; // [rsp+14h] [rbp-25Ch]
  char *v23; // [rsp+28h] [rbp-248h] BYREF
  char token[256]; // [rsp+30h] [rbp-240h] BYREF
  char rawtoken[264]; // [rsp+130h] [rbp-140h] BYREF
  unsigned __int64 v26; // [rsp+238h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  value = c->value;
  if ( value != 0 )
  {
    v6 = value + 1;
    v7 = 0;
    token[0] = 0;
    v8 = 0;
    v9 = 0;
    rawtoken[0] = 0;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v13 = *(v6 - 1);
      if ( v13 == 44 )
        break;
      if ( v13 > 44 )
      {
        switch ( v13 )
        {
          case '=':
            v9 = 1;
            break;
          case '>':
            v11 = 1;
            break;
          case '<':
            v10 = 1;
            break;
          default:
            goto LABEL_6;
        }
      }
      else
      {
        if ( v13 == 0 )
          break;
        if ( v13 != 33 )
        {
LABEL_6:
          v12 = v7++;
          rawtoken[v12] = v13;
          goto LABEL_7;
        }
        v8 = 1;
      }
LABEL_7:
      ++v6;
    }
    v14 = this->m_pParserWhichIsLoadedAllTheTimeWhichKindOfSucks;
    rawtoken[v7] = 0;
    v20 = v9;
    v21 = v10;
    v22 = v8;
    CResponseFileParser::ResolveToken(v14, matcher, token, 0x100u, rawtoken);
    if ( v11 != 0 )
    {
      *(matcher + 8) = (16 * v20) | *(matcher + 8) & 0xE7 | 8;
      v19.m128d_f64[0] = strtod(token, 0);
      *(matcher + 8) |= 2u;
      matcher->minval = _mm_movedup_pd(v19).m128d_f64[0];
    }
    else if ( v21 != 0 )
    {
      *(matcher + 8) = (v20 << 6) | *(matcher + 8) & 0x9F | 0x20;
      v15.m128d_f64[0] = strtod(token, 0);
      *(matcher + 8) |= 2u;
      matcher->maxval = _mm_movedup_pd(v15).m128d_f64[0];
    }
    else
    {
      v16 = *(matcher + 8);
      v23 = 0;
      *(matcher + 8) = (4 * v22) | v16 & 0xFB;
      v17 = V_strtod(token, &v23);
      if ( v23 == 0 || (v18 = 1, v23 == token) )
        v18 = v17 != 0.0;
      *(matcher + 8) = (2 * v18) | *(matcher + 8) & 0xFD;
    }
    if ( *(v6 - 1) == 0 )
    {
      Matcher::SetToken(matcher, token);
      Matcher::SetRaw(matcher, rawtoken);
      *(matcher + 8) |= 1u;
      return;
    }
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v7 = 0;
    goto LABEL_7;
  }
  *(matcher + 8) &= ~1u;
}


// CResponseSystem::CompareUsingMatcherDota  (line 254, @0x00000000030f8430, libserver.so)  // inlines: atof
// calls: Matcher::GetToken, V_stricmp_fast, strtod, CResponseSystem::LookupEnumeration
// callers: CResponseSystem::Compare
bool __fastcall CResponseSystem::CompareUsingMatcherDota(
        CResponseSystem *const this,
        const char *setValue,
        Matcher *const m,
        bool verbose)
{
  char v5; // al
  _BOOL4 v7; // eax
  bool result; // al
  const char *Token; // rax
  __m128d v11; // xmm0
  float v12; // xmm1_4
  char v13; // cl
  bool v14; // r13
  const char *v15; // rax
  float v16; // xmm0_4
  float minval; // xmm0_4
  _BOOL4 v18; // ecx
  float v19; // xmm0_4
  const char *v20; // rax
  const char *v21; // rax
  float v22; // xmm0_4
  bool v; // [rsp+Ch] [rbp-34h]
  float va; // [rsp+Ch] [rbp-34h]
  float vb; // [rsp+Ch] [rbp-34h]
  bool found; // [rsp+1Fh] [rbp-21h] BYREF

  v5 = *(m + 8);
  if ( (v5 & 1) == 0 )
    return 0;
  v7 = (v5 & 2) != 0;
  if ( !v7 )
  {
    Token = Matcher::GetToken(m);
    return V_stricmp_fast(setValue, Token) == 0;
  }
  if ( setValue == 0 || *setValue == 0 )
    return 0;
  v = v7;
  v11.m128d_f64[0] = strtod(setValue, 0);
  result = v;
  v12 = _mm_movedup_pd(v11).m128d_f64[0];
  if ( *setValue == 91 )
  {
    found = 0;
    v19 = CResponseSystem::LookupEnumeration(this, setValue, &found);
    result = v;
    v12 = v19;
  }
  v13 = *(m + 8);
  if ( (v13 & 8) != 0 )
  {
    minval = m->minval;
    if ( (v13 & 0x10) != 0 )
    {
      if ( minval > v12 )
        return 0;
    }
    else if ( minval >= v12 )
    {
      return 0;
    }
    if ( (v13 & 0x20) == 0 )
      return (*(m + 8) & 8) != 0;
LABEL_19:
    v18 = (v13 & 0x40) != 0;
    if ( v18 )
    {
      result = v18;
      if ( v12 <= m->maxval )
        return result;
    }
    else if ( v12 < m->maxval )
    {
      return result;
    }
    return 0;
  }
  if ( (v13 & 0x20) != 0 )
    goto LABEL_19;
  v14 = (v13 & 4) != 0;
  if ( (v13 & 4) != 0 )
  {
    if ( (*(m + 8) & 2) != 0 )
    {
      va = v12;
      v15 = Matcher::GetToken(m);
      v16 = strtod(v15, 0);
      return va != v16;
    }
    else
    {
      v20 = Matcher::GetToken(m);
      return V_stricmp_fast(setValue, v20) != 0;
    }
  }
  else
  {
    vb = v12;
    v21 = Matcher::GetToken(m);
    v22 = strtod(v21, 0);
    result = 1;
    if ( v22 != vb )
      return v14;
  }
  return result;
}


// CResponseSystem::CompareUsingMatcherL4D  (line 334, @0x00000000030f8610, libserver.so)  // inlines: atof
// calls: strtod, Matcher::GetToken, CResponseSystem::LookupEnumeration, V_stricmp_fast
bool __fastcall CResponseSystem::CompareUsingMatcherL4D(
        CResponseSystem *const this,
        const char *setValue,
        Matcher *const m,
        bool verbose)
{
  bool result; // al
  __m128d v8; // xmm0
  float v9; // xmm1_4
  char v10; // cl
  bool v11; // r13
  const char *Token; // rax
  float v13; // xmm0_4
  float minval; // xmm0_4
  _BOOL4 v15; // ecx
  float v16; // xmm0_4
  const char *v17; // rax
  float v18; // xmm0_4
  const char *v19; // rax
  const char *v20; // rax
  bool v; // [rsp+Ch] [rbp-34h]
  float va; // [rsp+Ch] [rbp-34h]
  float vb; // [rsp+Ch] [rbp-34h]
  bool found; // [rsp+1Fh] [rbp-21h] BYREF

  if ( (*(m + 8) & 1) == 0 )
    return 0;
  v = *(m + 8) & 1;
  v8.m128d_f64[0] = strtod(setValue, 0);
  result = v;
  v9 = _mm_movedup_pd(v8).m128d_f64[0];
  if ( *setValue == 91 )
  {
    found = 0;
    v16 = CResponseSystem::LookupEnumeration(this, setValue, &found);
    result = v;
    v9 = v16;
  }
  v10 = *(m + 8);
  if ( (v10 & 8) != 0 )
  {
    minval = m->minval;
    if ( (v10 & 0x10) != 0 )
    {
      if ( minval > v9 )
        return 0;
    }
    else if ( minval >= v9 )
    {
      return 0;
    }
    if ( (v10 & 0x20) == 0 )
      return (*(m + 8) & 8) != 0;
LABEL_14:
    v15 = (v10 & 0x40) != 0;
    if ( v15 )
    {
      result = v15;
      if ( v9 <= m->maxval )
        return result;
    }
    else if ( v9 < m->maxval )
    {
      return result;
    }
    return 0;
  }
  if ( (v10 & 0x20) != 0 )
    goto LABEL_14;
  v11 = (v10 & 4) != 0;
  if ( (v10 & 4) != 0 )
  {
    if ( (*(m + 8) & 2) != 0 )
    {
      va = v9;
      Token = Matcher::GetToken(m);
      v13 = strtod(Token, 0);
      return va != v13;
    }
    else
    {
      v19 = Matcher::GetToken(m);
      return V_stricmp_fast(setValue, v19) != 0;
    }
  }
  else
  {
    if ( (*(m + 8) & 2) == 0 )
    {
      v20 = Matcher::GetToken(m);
      return V_stricmp_fast(setValue, v20) == 0;
    }
    if ( *setValue == 0 )
      return 0;
    vb = v9;
    v17 = Matcher::GetToken(m);
    v18 = strtod(v17, 0);
    result = 1;
    if ( v18 != vb )
      return v11;
  }
  return result;
}


// CResponseSystem::CompareUsingMatcherNew  (line 416, @0x00000000030f87e0, libserver.so)  // inlines: atof
// calls: strtod, Matcher::GetToken, CResponseSystem::LookupEnumeration, V_stricmp_fast
bool __fastcall CResponseSystem::CompareUsingMatcherNew(
        CResponseSystem *const this,
        const char *setValue,
        Matcher *const m,
        bool verbose)
{
  bool result; // al
  __m128d v8; // xmm0
  float v9; // xmm1_4
  char v10; // cl
  bool v11; // r13
  const char *Token; // rax
  float v13; // xmm0_4
  float minval; // xmm0_4
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  float v18; // xmm0_4
  float v; // [rsp+Ch] [rbp-34h]
  float va; // [rsp+Ch] [rbp-34h]
  bool found; // [rsp+1Fh] [rbp-21h] BYREF

  if ( setValue == 0 || *setValue == 0 )
    return (*(m + 8) & 4) != 0;
  v8.m128d_f64[0] = strtod(setValue, 0);
  v9 = _mm_movedup_pd(v8).m128d_f64[0];
  if ( *setValue == 91 )
  {
    found = 0;
    v9 = CResponseSystem::LookupEnumeration(this, setValue, &found);
  }
  v10 = *(m + 8);
  if ( (v10 & 8) != 0 )
  {
    minval = m->minval;
    result = (v10 & 0x10) != 0;
    if ( (v10 & 0x10) != 0 )
    {
      result = 0;
      if ( minval > v9 )
        return result;
    }
    else if ( minval >= v9 )
    {
      return result;
    }
    if ( (v10 & 0x20) == 0 )
      return (*(m + 8) & 8) != 0;
LABEL_18:
    result = (v10 & 0x40) != 0;
    if ( (v10 & 0x40) != 0 )
    {
      result = 0;
      if ( v9 > m->maxval )
        return result;
    }
    else if ( v9 >= m->maxval )
    {
      return result;
    }
    return 1;
  }
  if ( (v10 & 0x20) != 0 )
    goto LABEL_18;
  v11 = (v10 & 4) != 0;
  if ( (v10 & 4) != 0 )
  {
    if ( (*(m + 8) & 2) != 0 )
    {
      v = v9;
      Token = Matcher::GetToken(m);
      v13 = strtod(Token, 0);
      return v != v13;
    }
    else
    {
      v16 = Matcher::GetToken(m);
      return V_stricmp_fast(setValue, v16) != 0;
    }
  }
  else if ( (*(m + 8) & 2) != 0 )
  {
    va = v9;
    v17 = Matcher::GetToken(m);
    v18 = strtod(v17, 0);
    result = 1;
    if ( v18 != va )
      return v11;
  }
  else
  {
    v15 = Matcher::GetToken(m);
    return V_stricmp_fast(setValue, v15) == 0;
  }
  return result;
}


// CResponseSystem::Compare  (line 505, @0x00000000030f89b0, libserver.so)
// calls: CResponseSystem::CompareUsingMatcherDota, DevMsg(char const*,...)
// callers: CResponseSystem::ScoreCriteriaAgainstRuleCriteria
// strings: "'%20s' vs. '%20s' = "
bool __fastcall CResponseSystem::Compare(CResponseSystem *const this, const char *setValue, Criteria *c, bool verbose)
{
  bool v7; // r14

  v7 = CResponseSystem::CompareUsingMatcherDota(this, setValue, &c->matcher, verbose);
  if ( verbose )
    DevMsg("'%20s' vs. '%20s' = ", setValue, c->value);
  return v7;
}


// CResponseSystem::RecursiveScoreSubcriteriaAgainstRule  (line 568, @0x00000000030f8dc0, libserver.so)  // inlines: Base, Convert16bitFloatTo32bits, Element, GetFloat, IsInfinity, IsNaN, operator[]
// calls: CResponseSystem::ScoreCriteriaAgainstRuleCriteria, DevMsg(char const*,...)
// callers: CResponseSystem::ScoreCriteriaAgainstRuleCriteria
float __fastcall CResponseSystem::RecursiveScoreSubcriteriaAgainstRule(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        Criteria *parent,
        bool *const exclude,
        bool verbose)
{
  __m128i v5; // xmm0
  unsigned __int64 v10; // r15
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  int v12; // edx
  unsigned __int64 m_nAllocated; // rax
  bool v14; // al
  float16::float16bits v15; // ax
  float v16; // xmm1_4
  int v17; // edx
  float v18; // xmm0_4
  int icriterion; // [rsp+14h] [rbp-5Ch]
  __int64 v22; // [rsp+20h] [rbp-50h]
  float score; // [rsp+2Ch] [rbp-44h]
  bool excludesubrule; // [rsp+3Fh] [rbp-31h] BYREF

  if ( parent->subcriteria.m_nCount <= 0 )
  {
    if ( parent->required )
    {
      v14 = 1;
      score = 0.0;
      goto LABEL_13;
    }
    score = 0.0;
LABEL_12:
    v14 = 0;
    goto LABEL_13;
  }
  v22 = 2LL * (parent->subcriteria.m_nCount - 1) + 2;
  v10 = 0;
  score = 0.0;
  do
  {
    m_nAllocated = parent->subcriteria.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 6 )
      {
        v12 = *(&parent->subcriteria.m_nAllocAllocated + v10 + 2);
        excludesubrule = 0;
        if ( !verbose )
          goto LABEL_5;
        goto LABEL_9;
      }
      m_pElements = parent->subcriteria.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    v12 = m_pElements[v10 / 2];
    excludesubrule = 0;
    if ( verbose )
    {
LABEL_9:
      icriterion = v12;
      DevMsg("\n");
      v12 = icriterion;
    }
LABEL_5:
    v10 += 2LL;
    *v5.m128i_i32 = CResponseSystem::ScoreCriteriaAgainstRuleCriteria(this, set, v12, &excludesubrule, verbose) + score;
    score = *v5.m128i_i32;
  }
  while ( v10 != v22 );
  if ( !parent->required )
    goto LABEL_12;
  v14 = 1;
  if ( *v5.m128i_i32 != 0.0 )
    goto LABEL_12;
LABEL_13:
  *exclude = v14;
  v15.rawWord = parent->weight.m_storage;
  if ( (v15.rawWord & 0x7FFF) == 0x7C00 )
  {
    v18 = 65504.0;
    if ( (v15.rawWord & 0x8000u) != 0 )
      v18 = -65504.0;
    return v18 * score;
  }
  if ( (HIBYTE(v15.rawWord) & 0x7C) == 0x7C )
  {
    v18 = 0.0;
    if ( (v15.rawWord & 0x3FF) != 0 )
      return v18 * score;
LABEL_21:
    v17 = (((((v15.rawWord >> 10) & 0x1F) + 112) * (((v15.rawWord >> 10) & 0x1F) != 0)) << 23)
        | (((v15.rawWord & 0x8000u) != 0) << 31)
        | ((v15.rawWord & 0x3FF) << 13);
    goto LABEL_22;
  }
  if ( (v15.rawWord & 0x7C00) != 0 || (v15.rawWord & 0x3FF) == 0 )
    goto LABEL_21;
  v16 = 1.0;
  if ( (v15.rawWord & 0x8000u) != 0 )
    v16 = -1.0;
  *v5.m128i_i32 = (((v15.rawWord & 0x3FF) * 0.0009765625) * v16) * 0.000061035156;
  v17 = _mm_cvtsi128_si32(v5);
LABEL_22:
  v18 = *&v17;
  return v18 * score;
}


// CResponseSystem::RecursiveLookForCriteria  (line 589, @0x00000000030f8a90, libserver.so)  // inlines: Base, Element, operator[]
// calls: CResponseSystem::LookForCriteria
// callers: CResponseSystem::LookForCriteria
float __fastcall CResponseSystem::RecursiveLookForCriteria(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const criteriaSet,
        Criteria *pParent)
{
  float v3; // xmm1_4
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  int v10; // edx
  unsigned __int64 m_nAllocated; // rax

  v3 = 0.0;
  if ( pParent->subcriteria.m_nCount > 0 )
  {
    v7 = 2LL * (pParent->subcriteria.m_nCount - 1) + 2;
    v8 = 0;
    v3 = 0.0;
    do
    {
      m_nAllocated = pParent->subcriteria.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated > 6 )
          m_pElements = pParent->subcriteria.m_pElements;
        else
          m_pElements = (&pParent->subcriteria.m_nAllocAllocated + 1);
      }
      else
      {
        m_pElements = 0;
      }
      v10 = m_pElements[v8 / 2];
      v8 += 2LL;
      v3 = v3 + CResponseSystem::LookForCriteria(this, criteriaSet, v10);
    }
    while ( v8 != v7 );
  }
  return v3;
}


// CResponseSystem::LookForCriteria  (line 602, @0x00000000030f8a00, libserver.so)  // inlines: CUtlSymbol, Element, operator[]
// calls: CResponseSystem::RecursiveLookForCriteria, CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::GetValue, V_stricmp_fast
// callers: CResponseSystem::RecursiveLookForCriteria
float __fastcall CResponseSystem::LookForCriteria(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const criteriaSet,
        int iCriteria)
{
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v4; // rbx
  int CriterionIndex; // eax
  const char *value; // rbx
  const char *v8; // rax
  CResponseCriteriaSet::CritSymbol_t criteria; // [rsp+0h] [rbp-20h] BYREF

  v4 = &this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory[iCriteria];
  if ( v4->m_Data.elem.subcriteria.m_nCount > 0 )
    return CResponseSystem::RecursiveLookForCriteria(this, criteriaSet, &v4->m_Data.elem);
  criteria.m_Id = v4->m_Data.elem.nameSym.m_Id;
  CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(criteriaSet, &criteria);
  if ( CriterionIndex == -1 )
    return 0.0;
  value = v4->m_Data.elem.value;
  v8 = CResponseCriteriaSet::GetValue(criteriaSet, CriterionIndex);
  if ( V_stricmp_fast(v8, value) != 0 )
    return 0.0;
  else
    return 1.0;
}


// CResponseSystem::ScoreCriteriaAgainstRuleCriteria  (line 621, @0x00000000030f8b30, libserver.so)  // inlines: CUtlSymbol, Convert16bitFloatTo32bits, Element, GetElementName, GetFloat, IsInfinity, IsNaN, SymbolToStr, operator[]
// calls: CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::GetValue, CResponseSystem::Compare, DevMsg(char const*,...), CResponseSystem::RecursiveScoreSubcriteriaAgainstRule, CUtlSymbolTable::String, CResponseCriteriaSet::GetWeight
// callers: CResponseSystem::RecursiveScoreSubcriteriaAgainstRule, CResponseSystem::ScoreCriteriaAgainstRule
// strings: "failed (+exclude rule)", "  criterion '%25s':'%15s' ", "matched, weight %4.2f (s %4.2f x c %4.2f)"
float __fastcall CResponseSystem::ScoreCriteriaAgainstRuleCriteria(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        int icriterion,
        bool *const exclude,
        bool verbose)
{
  __int64 v5; // r15
  char *v9; // rbx
  int CriterionIndex; // eax
  int v11; // r15d
  const char *Value; // rsi
  float v13; // xmm3_4
  char *v15; // rax
  float Weight; // xmm0_4
  __m128i v17; // xmm1
  unsigned __int16 v18; // ax
  float v19; // xmm2_4
  int v20; // edx
  float v21; // xmm2_4
  float excludeb; // [rsp+18h] [rbp-48h]
  CResponseCriteriaSet::CritSymbol_t criteria; // [rsp+20h] [rbp-40h] BYREF

  v5 = icriterion << 6;
  v9 = this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory + v5;
  if ( *(v9 + 24) > 0 )
    return CResponseSystem::RecursiveScoreSubcriteriaAgainstRule(this, set, (v9 + 16), exclude, verbose);
  if ( verbose )
  {
    criteria.m_Id = *(v9 + 8);
    v15 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &criteria.m_Id);
    DevMsg(
      "  criterion '%25s':'%15s' ",
      *(&this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory->m_Data.key + v5),
      v15);
  }
  *exclude = 0;
  criteria.m_Id = *(v9 + 8);
  CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(set, &criteria);
  v11 = CriterionIndex;
  if ( CriterionIndex == -1 )
  {
    Value = "";
  }
  else
  {
    Value = CResponseCriteriaSet::GetValue(set, CriterionIndex);
    if ( Value == 0 )
      return 0.0;
  }
  if ( !CResponseSystem::Compare(this, Value, (v9 + 16), verbose) )
  {
    if ( v9[34] != 0 )
    {
      *exclude = 1;
      if ( verbose )
        DevMsg("failed (+exclude rule)");
    }
    else if ( verbose )
    {
      DevMsg("failed");
      return 0.0;
    }
    return 0.0;
  }
  Weight = CResponseCriteriaSet::GetWeight(set, v11);
  v18 = *(v9 + 16);
  if ( (v18 & 0x7FFF) == 0x7C00 )
  {
    v21 = 65504.0;
    if ( (v18 & 0x8000u) != 0 )
      v21 = -65504.0;
    goto LABEL_26;
  }
  if ( (HIBYTE(v18) & 0x7C) == 0x7C )
  {
    v21 = 0.0;
    if ( (v18 & 0x3FF) != 0 )
      goto LABEL_26;
  }
  else if ( (v18 & 0x7C00) == 0 && (v18 & 0x3FF) != 0 )
  {
    v19 = 1.0;
    if ( (v18 & 0x8000u) != 0 )
      v19 = -1.0;
    *v17.m128i_i32 = (((v18 & 0x3FF) * 0.0009765625) * v19) * 0.000061035156;
    v20 = _mm_cvtsi128_si32(v17);
    goto LABEL_25;
  }
  v20 = (((((v18 >> 10) & 0x1F) + 112) * (((v18 >> 10) & 0x1F) != 0)) << 23)
      | (((v18 & 0x8000u) != 0) << 31)
      | ((v18 & 0x3FF) << 13);
LABEL_25:
  v21 = *&v20;
LABEL_26:
  v13 = Weight * v21;
  if ( verbose )
  {
    excludeb = Weight * v21;
    DevMsg("matched, weight %4.2f (s %4.2f x c %4.2f)", v13, Weight, v21);
    return excludeb;
  }
  return v13;
}


// CResponseSystem::ScoreCriteriaAgainstRule  (line 692, @0x00000000030f8fe0, libserver.so)  // inlines: Base, Element, Find, GetElementName, GetString, LeftChild, RightChild, operator(), operator[]
// calls: CResponseSystem::ScoreCriteriaAgainstRuleCriteria, DevMsg(char const*,...), __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, V_stricmp_fast, __cxa_guard_abort, _Unwind_Resume
// callers: CResponseSystem::FindBestMatchingRule
// strings: ", score %4.2f\n", "rr_debugrule", "Scoring rule '%s' (%i)\n{\n", "Rule is disabled.\n"
// globals: `guard variable for'CResponseSystem::ScoreCriteriaAgainstRule(CResponseCriteriaSet const&,CResponseDict<Rule *,ushort> &,int,bool)::rr_debugrule, CResponseSystem::ScoreCriteriaAgainstRule(CResponseCriteriaSet const&,CResponseDict<Rule *,ushort> &,int,bool)::rr_debugrule
float __fastcall CResponseSystem::ScoreCriteriaAgainstRule(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        ResponseRulePartition::tRuleDict *const dict,
        int irule,
        bool verbose)
{
  CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // r13
  char *m_pszString; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  int v11; // edx
  float v12; // xmm0_4
  unsigned __int64 m_nAllocated; // rax
  float result; // xmm0_4
  int m_nForceWeight; // eax
  unsigned __int64 m_Root; // rdx
  UtlRBTreeNode_t<CUtlMap<unsigned int,char const*>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // r14
  bool v20; // zf
  const char *v21; // rsi
  unsigned __int64 m_Left; // rdx
  UtlRBTreeNode_t<CUtlMap<unsigned int,char const*>::Node_t,short unsigned int> *v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // r14
  const char *v26; // rsi
  char *v28; // [rsp+8h] [rbp-68h]
  char verbosea; // [rsp+24h] [rbp-4Ch]
  __int64 score; // [rsp+28h] [rbp-48h]
  float scorea; // [rsp+28h] [rbp-48h]
  CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t exclude[16]; // [rsp+30h] [rbp-40h] BYREF

  score = irule;
  verbosea = verbose;
  elem = dict->m_Tree.m_Elements.m_pMemory[score].m_Data.elem;
  if ( `guard variable for'CResponseSystem::ScoreCriteriaAgainstRule(CResponseCriteriaSet const&,CResponseDict<Rule *,unsigned short> &,int,bool)::rr_debugrule == 0
    && __cxa_guard_acquire(&`guard variable for'CResponseSystem::ScoreCriteriaAgainstRule(CResponseCriteriaSet const&,CResponseDict<Rule *,unsigned short> &,int,bool)::rr_debugrule) != 0 )
  {
    ConVarRef::ConVarRef(
      &CResponseSystem::ScoreCriteriaAgainstRule(CResponseCriteriaSet const&,CResponseDict<Rule *,unsigned short> &,int,bool)::rr_debugrule,
      "rr_debugrule");
    __cxa_guard_release(&`guard variable for'CResponseSystem::ScoreCriteriaAgainstRule(CResponseCriteriaSet const&,CResponseDict<Rule *,unsigned short> &,int,bool)::rr_debugrule);
  }
  m_pszString = CResponseSystem::ScoreCriteriaAgainstRule(CResponseCriteriaSet const&,CResponseDict<Rule *,unsigned short> &,int,bool)::rr_debugrule.m_pConVarState->m_Value.m_pszString;
  v28 = m_pszString;
  if ( m_pszString != 0 && *m_pszString != 0 )
  {
    m_Root = dict->m_ReverseMap.m_Tree.m_Root;
    exclude[0] = dict->m_Tree.m_Elements.m_pMemory[score].m_Data.key;
    if ( m_Root == 0xFFFF )
    {
LABEL_33:
      v21 = "";
    }
    else
    {
      m_pMemory = dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = m_Root;
          v19 = m_Root;
          if ( !dict->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(exclude, &m_pMemory[m_Root].m_Data) )
            break;
          m_pMemory = dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[v18].m_Left;
          if ( m_Root == 0xFFFF )
            goto LABEL_33;
        }
        v20 = !dict->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(
                 &dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory[v19].m_Data,
                 exclude);
        m_pMemory = dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
        if ( v20 )
          break;
        m_Root = m_pMemory[v19].m_Right;
        if ( m_Root == 0xFFFF )
          goto LABEL_33;
      }
      v21 = m_pMemory[v19].m_Data.elem;
    }
    if ( V_stricmp_fast(v28, v21) == 0 )
    {
      if ( (*(elem + 41) & 4) == 0 )
      {
        DevMsg("Rule is disabled.\n");
        return 0.0;
      }
LABEL_36:
      m_Left = dict->m_ReverseMap.m_Tree.m_Root;
      exclude[0] = dict->m_Tree.m_Elements.m_pMemory[score].m_Data.key;
      if ( m_Left == 0xFFFF )
      {
LABEL_42:
        v26 = "";
      }
      else
      {
        v23 = dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v24 = m_Left;
            v25 = m_Left;
            if ( !dict->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(exclude, &v23[m_Left].m_Data) )
              break;
            v23 = dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
            m_Left = v23[v24].m_Left;
            if ( m_Left == 0xFFFF )
              goto LABEL_42;
          }
          v20 = !dict->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(
                   &dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory[v25].m_Data,
                   exclude);
          v23 = dict->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
          if ( v20 )
            break;
          m_Left = v23[v25].m_Right;
          if ( m_Left == 0xFFFF )
            goto LABEL_42;
        }
        v26 = v23[v25].m_Data.elem;
      }
      DevMsg("Scoring rule '%s' (%i)\n{\n", v26, irule + 1);
      verbosea = 1;
LABEL_6:
      if ( elem->m_Criteria.m_nCount > 0 )
      {
        v8 = 2LL * (elem->m_Criteria.m_nCount - 1) + 2;
        v9 = 0;
        scorea = 0.0;
        while ( 1 )
        {
          m_nAllocated = elem->m_Criteria.m_nAllocated;
          if ( m_nAllocated != 0 )
          {
            if ( m_nAllocated > 6 )
              m_pElements = elem->m_Criteria.m_pElements;
            else
              m_pElements = (&elem->m_Criteria.m_nAllocAllocated + 1);
          }
          else
          {
            m_pElements = 0;
          }
          v11 = m_pElements[v9 / 2];
          LOBYTE(exclude[0]) = 0;
          v12 = CResponseSystem::ScoreCriteriaAgainstRuleCriteria(this, set, v11, exclude, verbosea) + scorea;
          scorea = v12;
          if ( verbosea != 0 )
          {
            DevMsg(", score %4.2f\n", v12);
            if ( LOBYTE(exclude[0]) != 0 )
            {
LABEL_18:
              scorea = 0.0;
              goto LABEL_19;
            }
          }
          else if ( LOBYTE(exclude[0]) != 0 )
          {
            goto LABEL_18;
          }
          v9 += 2LL;
          if ( v9 == v8 )
            goto LABEL_19;
        }
      }
      scorea = 0.0;
LABEL_19:
      if ( verbosea != 0 )
        DevMsg("}\n");
      m_nForceWeight = elem->m_nForceWeight;
      result = scorea;
      if ( m_nForceWeight != 0 )
      {
        if ( (scorea - 1.1754944e-38) >= 0.0 )
          return m_nForceWeight;
        return 0.0;
      }
      return result;
    }
  }
  if ( (*(elem + 41) & 4) != 0 )
  {
    if ( !verbose )
      goto LABEL_6;
    goto LABEL_36;
  }
  return 0.0;
}


// CResponseSystem::DebugPrint  (line 764, @0x00000000030f9370, libserver.so)
// calls: V_vsnprintf, DevMsg(char const*,...), __stack_chk_fail
// callers: CResponseSystem::DescribeResponseGroup, CResponseSystem::ResolveResponse, CResponseSystem::GetBestResponse
void CResponseSystem::DebugPrint(CResponseSystem *const this, int depth, const char *fmt, ...)
{
  void *v3; // rsp
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rsi
  _BYTE *v7; // rax
  va_list argptr; // [rsp+8h] [rbp-4E8h] BYREF
  char szText[1032]; // [rsp+20h] [rbp-4D0h] BYREF
  unsigned __int64 v10; // [rsp+428h] [rbp-C8h]

  v10 = __readfsqword(0x28u);
  v3 = alloca(((3 * depth + 32) & 0xFFFFFFF0) + 16LL);
  v4 = &argptr[0].overflow_arg_area & 0xFFFFFFFFFFFFFFEFLL;
  v5 = 3 * depth - 1;
  *((&argptr[0].overflow_arg_area & 0xFFFFFFFFFFFFFFEFLL) + 3 * depth) = 0;
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (v4 + v5);
    do
      *v7-- = 32;
    while ( v7 != (v4 + v6 - 1LL - v6) );
  }
  va_start(argptr, fmt);
  V_vsnprintf(szText, 1024, fmt, argptr);
  DevMsg("%s%s", (&argptr[0].overflow_arg_area & 0xFFFFFFFFFFFFFFEFLL), szText);
}


// CResponseSystem::ResetResponseGroups  (line 788, @0x00000000030f94a0, libserver.so)  // inlines: Base, Element, Reset, SetCurrentIndex, SetEnabled, operator[]
// callers: CDefaultResponseSystem::GameActivate
void __fastcall CResponseSystem::ResetResponseGroups(CResponseSystem *const this)
{
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  int v4; // edx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v5; // rax
  bool v6; // cc
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // rsi

  if ( this->m_Responses.m_Elements.m_Tree.m_NumElements > 0 )
  {
    v1 = 0;
    v2 = 8 * (5LL * (this->m_Responses.m_Elements.m_Tree.m_NumElements - 1) + 5);
    do
    {
      v3 = 0;
      v4 = 0;
      v5 = &this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v1 / 0x28];
      v6 = v5->m_Data.elem.group.m_nCount <= 0;
      v5->m_Data.elem.m_bEnabled = 1;
      v5->m_Data.elem.m_nCurrentIndex = 0;
      v5->m_Data.elem.m_nDepletionCount = 1;
      if ( !v6 )
      {
        do
        {
          if ( v5->m_Data.elem.group.m_nAllocated != 0 )
            m_pElements = v5->m_Data.elem.group.m_pElements;
          else
            m_pElements = 0;
          m_pElements[v3].depletioncount = 0;
          ++v4;
          ++v3;
        }
        while ( v4 < v5->m_Data.elem.group.m_nCount );
      }
      v1 += 40LL;
    }
    while ( v1 != v2 );
  }
}


// CResponseSystem::FakeDepletes  (line 801, @0x00000000030faaa0, libserver.so)  // inlines: AddToTail, Base, CopyConstruct<int>, Element, GetType, GrowMemory, MarkResponseUsed, RemoveAll, operator[]
// calls: RandomInt, CUtlMemory<int, int>::Grow
// callers: CResponseSystem::SelectWeightedResponseFromResponseGroup
void __fastcall CResponseSystem::FakeDepletes(CResponseSystem *const this, ResponseGroup *g, IResponseFilter *pFilter)
{
  IResponseFilter *v3; // r9
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t m_nAllocated; // ax
  __int64 v7; // r14
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r13
  int v11; // eax
  int *v12; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v13; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // r12
  int v16; // r13d
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *i; // rsi
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v18; // rsi
  char v19; // al
  __int64 m_Size; // rax
  int v21; // edx
  int *v22; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // rdx
  IResponseFilter *v24; // [rsp+0h] [rbp-50h]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-48h]
  int c; // [rsp+14h] [rbp-3Ch]
  IResponseFilter *v27; // [rsp+18h] [rbp-38h]
  int v28; // [rsp+18h] [rbp-38h]

  v3 = pFilter;
  this->m_FakedDepletes.m_Size = 0;
  c = g->group.m_nCount;
  if ( pFilter != 0 && (*(g + 19) & 1) != 0 )
  {
    if ( g->group.m_nCount > 0 )
    {
      m_nAllocated = g->group.m_nAllocated;
      v14 = 0;
      v15 = 90 * ((g->group.m_nCount - 1) + 1LL);
      v16 = 0;
      p_m_Memory = &this->m_FakedDepletes.m_Memory;
      if ( m_nAllocated == 0 )
        goto LABEL_38;
LABEL_23:
      for ( i = g->group.m_pElements; ; i = 0 )
      {
        v18 = &i[v14 / 0x5A];
        if ( v18->depletioncount != g->m_nDepletionCount )
        {
          v27 = v3;
          v19 = (*v3->_vptr_IResponseFilter)(v3, *(v18 + 81) & 0x3F, v18->value);
          v3 = v27;
          if ( v19 == 0 )
          {
            m_Size = this->m_FakedDepletes.m_Size;
            if ( m_Size == this->m_FakedDepletes.m_Memory.m_nAllocationCount )
            {
              v24 = v27;
              v28 = this->m_FakedDepletes.m_Size;
              CUtlMemory<int,int>::Grow(p_m_Memory, 1);
              v21 = this->m_FakedDepletes.m_Size;
              v3 = v24;
              m_Size = v28;
            }
            else
            {
              v21 = this->m_FakedDepletes.m_Size;
            }
            this->m_FakedDepletes.m_Size = v21 + 1;
            v22 = &this->m_FakedDepletes.m_Memory.m_pMemory[m_Size];
            if ( v22 != 0 )
              *v22 = v16;
            if ( (*(g + 19) & 1) != 0 && g->group.m_nCount > v16 )
            {
              if ( g->group.m_nAllocated != 0 )
                m_pElements = g->group.m_pElements;
              else
                m_pElements = 0;
              m_pElements[v14 / 0x5A].depletioncount = g->m_nDepletionCount;
            }
          }
          m_nAllocated = g->group.m_nAllocated;
        }
        v14 += 90LL;
        ++v16;
        if ( v14 == v15 )
          break;
        if ( m_nAllocated != 0 )
          goto LABEL_23;
LABEL_38:
        ;
      }
LABEL_5:
      v7 = 0;
      while ( 1 )
      {
        if ( m_nAllocated != 0 )
          v8 = g->group.m_pElements;
        else
          v8 = 0;
        v9 = v7;
        if ( RandomInt(1, 100) <= v8[v7].params.odds )
          goto LABEL_6;
        v10 = this->m_FakedDepletes.m_Size;
        v11 = this->m_FakedDepletes.m_Size;
        if ( v10 == this->m_FakedDepletes.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&this->m_FakedDepletes.m_Memory, 1);
          v11 = this->m_FakedDepletes.m_Size;
        }
        this->m_FakedDepletes.m_Size = v11 + 1;
        v12 = &this->m_FakedDepletes.m_Memory.m_pMemory[v10];
        if ( v12 != 0 )
          *v12 = v7;
        if ( (*(g + 19) & 1) != 0 && v7 < g->group.m_nCount )
        {
          if ( g->group.m_nAllocated != 0 )
            v13 = g->group.m_pElements;
          else
            v13 = 0;
          ++v7;
          v13[v9].depletioncount = g->m_nDepletionCount;
          if ( c <= v7 )
            return;
        }
        else
        {
LABEL_6:
          if ( c <= ++v7 )
            return;
        }
        m_nAllocated = g->group.m_nAllocated;
      }
    }
  }
  else if ( c > 0 )
  {
    m_nAllocated = g->group.m_nAllocated;
    goto LABEL_5;
  }
}


// CResponseSystem::RevertFakedDepletes  (line 835, @0x00000000030f9520, libserver.so)  // inlines: Base, Element, RemoveAll, operator[]
// callers: CResponseSystem::SelectWeightedResponseFromResponseGroup
void __fastcall CResponseSystem::RevertFakedDepletes(CResponseSystem *const this, ResponseGroup *g)
{
  __int64 v2; // rdx
  int i; // eax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // r8
  __int64 v5; // rcx

  v2 = 0;
  for ( i = 0; this->m_FakedDepletes.m_Size > i; m_pElements[v5].depletioncount = 0 )
  {
    v5 = this->m_FakedDepletes.m_Memory.m_pMemory[v2];
    if ( g->group.m_nAllocated != 0 )
      m_pElements = g->group.m_pElements;
    else
      m_pElements = 0;
    ++i;
    ++v2;
  }
  this->m_FakedDepletes.m_Size = 0;
}


// CResponseSystem::SelectWeightedResponseFromResponseGroup  (line 849, @0x00000000030fad50, libserver.so)  // inlines: Base, Convert16bitFloatTo32bits, Element, Get, GetDepletionCount, GetFloat, GetType, HasUndepletedChoices, HasUndepletedFirst, HasUndepletedLast, IsInfinity, IsNaN, MarkResponseUsed, ResetDepletionCount, SetEnabled, operator[]
// calls: CResponseSystem::FakeDepletes, CResponseSystem::RevertFakedDepletes
// callers: CResponseSystem::ResolveResponse, CResponseSystem::GetBestResponse
int __fastcall CResponseSystem::SelectWeightedResponseFromResponseGroup(
        CResponseSystem *const this,
        ResponseGroup *g,
        IResponseFilter *pFilter)
{
  ResponseGroup *v3; // rbx
  int m_nCount; // r13d
  CResponseSystem *v5; // r15
  char v7; // r9
  int m_nDepletionCount; // r10d
  int v9; // r12d
  float v10; // xmm3_4
  ResponseGroup *v11; // r8
  IResponseFilter *v12; // r10
  unsigned __int64 v13; // r12
  float v14; // xmm2_4
  int v15; // r15d
  int v16; // ebx
  char v17; // r14
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // r13
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v19; // r13
  int v20; // ecx
  unsigned __int16 rawWord; // ax
  int v22; // edx
  float v23; // xmm0_4
  int v24; // ecx
  char v25; // al
  __m128i v26; // xmm0
  unsigned __int16 v27; // ax
  int v28; // edx
  float v29; // xmm0_4
  int v30; // r11d
  __int64 v32; // rax
  float v33; // xmm0_4
  unsigned __int16 v34; // ax
  __m128i v35; // xmm4
  int v36; // edx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v37; // rdx
  int v38; // r8d
  uint8 v39; // si
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t m_nAllocated; // dx
  __int64 i; // rax
  int v42; // edi
  __m128i v43; // xmm1
  float v44; // xmm1_4
  float v45; // xmm1_4
  __int64 v46; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v47; // rcx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v48; // rcx
  __int64 v49; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v50; // rcx
  __int64 v51; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v52; // rcx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v53; // rcx
  __int64 v54; // rcx
  int v55; // eax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v56; // rsi
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v57; // rsi
  CResponseSystem *thisa; // [rsp+8h] [rbp-68h]
  ResponseGroup *v59; // [rsp+10h] [rbp-60h]
  IResponseFilter *v60; // [rsp+10h] [rbp-60h]
  float v61; // [rsp+18h] [rbp-58h]
  ResponseGroup *v62; // [rsp+18h] [rbp-58h]
  int slota; // [rsp+24h] [rbp-4Ch]
  int slot; // [rsp+24h] [rbp-4Ch]
  IResponseFilter *totalweight; // [rsp+28h] [rbp-48h]
  float totalweighta; // [rsp+28h] [rbp-48h]
  float v67; // [rsp+30h] [rbp-40h]
  int v68; // [rsp+30h] [rbp-40h]
  int v69; // [rsp+34h] [rbp-3Ch]
  __int64 v70; // [rsp+38h] [rbp-38h]
  char v71; // [rsp+38h] [rbp-38h]

  v3 = g;
  m_nCount = g->group.m_nCount;
  if ( g->group.m_nCount == 0 )
    return -1;
  v5 = this;
  CResponseSystem::FakeDepletes(this, g, pFilter);
  v7 = *(v3 + 19) & 1;
  if ( v7 == 0 )
  {
    m_nDepletionCount = v3->m_nDepletionCount;
    goto LABEL_4;
  }
  v38 = v3->group.m_nCount;
  v39 = v3->m_nDepletionCount;
  if ( v38 > 0 )
  {
    m_nAllocated = v3->group.m_nAllocated;
    for ( i = 0; i != (v38 - 1) + 1LL; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        if ( v3->group.m_pElements[i].depletioncount != v39 )
          goto LABEL_59;
      }
      else if ( *(i * 90 + 80) != v39 )
      {
LABEL_59:
        m_nDepletionCount = v39;
        v42 = v3->group.m_nCount;
        goto LABEL_83;
      }
    }
  }
  v3->m_nDepletionCount = v39 + 1;
  v71 = v7;
  CResponseSystem::FakeDepletes(v5, v3, pFilter);
  v7 = v71;
  if ( (*(v3 + 19) & 1) != 0 )
  {
    if ( v3->group.m_nCount <= 0 )
      return -1;
    v49 = 0;
    while ( 1 )
    {
      v50 = v3->group.m_nAllocated != 0 ? v3->group.m_pElements : 0LL;
      if ( v50[v49].depletioncount != v3->m_nDepletionCount )
        break;
      if ( ++v49 == (v3->group.m_nCount - 1) + 1LL )
        return -1;
    }
  }
  if ( (*(v3 + 19) & 0x10) != 0 )
  {
    v3->m_bEnabled = 0;
    return -1;
  }
  v39 = v3->m_nDepletionCount;
  m_nDepletionCount = v39;
  if ( (*(v3 + 19) & 1) == 0 )
  {
    v7 = 0;
LABEL_4:
    v9 = -1;
    if ( m_nCount <= 0 )
      goto LABEL_34;
LABEL_5:
    v10 = 0.0;
    v69 = m_nDepletionCount;
    v11 = v3;
    thisa = v5;
    v12 = pFilter;
    v13 = 0;
    v14 = 0.0;
    v15 = 0;
    v16 = -1;
    v17 = v7;
    v70 = 90 * ((m_nCount - 1) + 1LL);
    while ( 1 )
    {
      if ( v11->group.m_nAllocated != 0 )
        m_pElements = v11->group.m_pElements;
      else
        m_pElements = 0;
      v19 = &m_pElements[v13 / 0x5A];
      if ( v17 != 0 && (v19->depletioncount == v69 || *(v19 + 81) < 0) )
        goto LABEL_32;
      v20 = v15;
      if ( v14 != v10 )
        v20 = v16;
      rawWord = v19->weight.m_storage.rawWord;
      if ( (rawWord & 0x7FFF) == 0x7C00 )
      {
        v23 = 65504.0;
        if ( (rawWord & 0x8000u) != 0 )
          v23 = -65504.0;
      }
      else
      {
        if ( (HIBYTE(rawWord) & 0x7C) != 0x7C )
        {
          if ( (rawWord & 0x7C00) == 0 && (rawWord & 0x3FF) != 0 )
          {
            v43 = 0x3F800000u;
            if ( (rawWord & 0x8000u) != 0 )
              v43 = 0xBF800000;
            *v43.m128i_i32 = (*v43.m128i_i32 * ((rawWord & 0x3FF) * 0.0009765625)) * 0.000061035156;
            *&v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
          }
          else
          {
LABEL_17:
            v22 = (((((rawWord >> 10) & 0x1F) + 112) * (((rawWord >> 10) & 0x1F) != 0)) << 23)
                | (((rawWord & 0x8000u) != 0) << 31)
                | ((rawWord & 0x3FF) << 13);
          }
          v23 = *&v22;
          goto LABEL_19;
        }
        v23 = v10;
        if ( (rawWord & 0x3FF) == 0 )
          goto LABEL_17;
      }
LABEL_19:
      v14 = v14 + v23;
      if ( v14 != v10 )
      {
        v60 = v12;
        v62 = v11;
        *&slot = v10;
        v68 = v20;
        totalweighta = v14;
        v32 = (*(*IResponseEngineEmulator::s_pSingleton + 16LL))(IResponseEngineEmulator::s_pSingleton);
        (*(*v32 + 8LL))(v32, 0.0, totalweighta);
        v34 = v19->weight.m_storage.rawWord;
        v14 = totalweighta;
        v24 = v68;
        v10 = *&slot;
        v11 = v62;
        v12 = v60;
        if ( (v34 & 0x7FFF) != 0x7C00 )
        {
          if ( (HIBYTE(v34) & 0x7C) == 0x7C )
          {
            v44 = *&slot;
            if ( (v34 & 0x3FF) != 0 )
              goto LABEL_69;
          }
          else if ( (v34 & 0x7C00) == 0 && (v34 & 0x3FF) != 0 )
          {
            v35 = 0x3F800000u;
            if ( (v34 & 0x8000u) != 0 )
              v35 = 0xBF800000;
            *v35.m128i_i32 = (*v35.m128i_i32 * ((v34 & 0x3FF) * 0.0009765625)) * 0.000061035156;
            *&v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
LABEL_68:
            v44 = *&v36;
LABEL_69:
            if ( v44 <= v33 )
              goto LABEL_21;
            goto LABEL_20;
          }
          v36 = (((((v34 >> 10) & 0x1F) + 112) * (((v34 >> 10) & 0x1F) != 0)) << 23)
              | (((v34 & 0x8000u) != 0) << 31)
              | ((v34 & 0x3FF) << 13);
          goto LABEL_68;
        }
        v44 = 65504.0;
        if ( (v34 & 0x8000u) != 0 )
          v44 = -65504.0;
        goto LABEL_69;
      }
LABEL_20:
      v24 = v15;
LABEL_21:
      if ( v17 != 0 )
        goto LABEL_35;
      if ( v24 == v16 )
        goto LABEL_35;
      if ( v12 == 0 )
        goto LABEL_35;
      v59 = v11;
      v61 = v10;
      slota = v24;
      v67 = v14;
      totalweight = v12;
      v25 = (*v12->_vptr_IResponseFilter)(v12, *(v19 + 81) & 0x3F, v19->value);
      v12 = totalweight;
      v14 = v67;
      v24 = slota;
      v10 = v61;
      v11 = v59;
      if ( v25 != 0 )
      {
LABEL_35:
        v16 = v24;
        goto LABEL_32;
      }
      v27 = v19->weight.m_storage.rawWord;
      if ( (v27 & 0x7FFF) == 0x7C00 )
      {
        v29 = 65504.0;
        if ( (v27 & 0x8000u) != 0 )
          v29 = -65504.0;
        goto LABEL_31;
      }
      if ( (HIBYTE(v27) & 0x7C) == 0x7C )
      {
        v29 = v61;
        if ( (v27 & 0x3FF) != 0 )
          goto LABEL_31;
      }
      else if ( (v27 & 0x7C00) == 0 && (v27 & 0x3FF) != 0 )
      {
        v45 = 1.0;
        if ( (v27 & 0x8000u) != 0 )
          v45 = -1.0;
        *v26.m128i_i32 = (((v27 & 0x3FF) * 0.0009765625) * v45) * 0.000061035156;
        *&v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
        goto LABEL_30;
      }
      v28 = (((((v27 >> 10) & 0x1F) + 112) * (((v27 >> 10) & 0x1F) != 0)) << 23)
          | (((v27 & 0x8000u) != 0) << 31)
          | ((v27 & 0x3FF) << 13);
LABEL_30:
      v29 = *&v28;
LABEL_31:
      v14 = v67 - v29;
LABEL_32:
      v13 += 90LL;
      ++v15;
      if ( v13 == v70 )
      {
        v30 = v16;
        v5 = thisa;
        v3 = v11;
        v9 = v30;
        if ( v30 == -1 )
          goto LABEL_34;
        goto LABEL_44;
      }
    }
  }
  v42 = v3->group.m_nCount;
  if ( v42 <= 0 )
    goto LABEL_4;
  m_nAllocated = v3->group.m_nAllocated;
LABEL_83:
  v46 = 0;
  v9 = 0;
  do
  {
    if ( m_nAllocated != 0 )
      v47 = v3->group.m_pElements;
    else
      v47 = 0;
    v48 = &v47[v46];
    if ( v39 != v48->depletioncount && (*(v48 + 81) & 0x40) != 0 )
    {
      if ( v9 != -1 )
        goto LABEL_44;
      goto LABEL_4;
    }
    ++v9;
    ++v46;
  }
  while ( v9 != v42 );
  v51 = 0;
  v9 = 0;
  while ( 1 )
  {
    v52 = m_nAllocated != 0 ? v3->group.m_pElements : 0LL;
    v53 = &v52[v51];
    if ( v39 != v53->depletioncount && *(v53 + 81) < 0 )
      break;
    ++v9;
    ++v51;
    if ( v42 <= v9 )
      goto LABEL_4;
  }
  v54 = 0;
  v55 = 0;
  if ( m_nCount > 0 )
  {
    while ( 1 )
    {
      v56 = m_nAllocated != 0 ? v3->group.m_pElements : 0LL;
      v57 = &v56[v54];
      if ( v57->depletioncount != m_nDepletionCount && *(v57 + 81) >= 0 )
        break;
      ++v55;
      ++v54;
      if ( m_nCount <= v55 )
        goto LABEL_44;
    }
    if ( m_nCount > v55 )
      goto LABEL_5;
  }
LABEL_44:
  if ( (*(v3 + 19) & 1) != 0 && v3->group.m_nCount > v9 )
  {
    if ( v3->group.m_nAllocated != 0 )
      v37 = v3->group.m_pElements;
    else
      v37 = 0;
    v37[v9].depletioncount = v3->m_nDepletionCount;
  }
LABEL_34:
  CResponseSystem::RevertFakedDepletes(v5, v3);
  return v9;
}


// CResponseSystem::ResolveResponse  (line 977, @0x00000000030fb490, libserver.so)  // inlines: Base, CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorImpl, Destruct<ParserResponse>, Element, Find, GetCurrentIndex, GetElementName, GetType, LeftChild, Node_t, Purge, RemoveAll, ResponseGroup, RightChild, SetCurrentIndex, SetEnabled, operator(), operator[], ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~Node_t, ~ResponseGroup
// calls: ParserResponse::~ParserResponse, CResponseSystem::DebugPrint, CResponseSystem::DescribeResponseGroup, CResponseSystem::SelectWeightedResponseFromResponseGroup, CUtlLeanVectorBase<ParserResponse, short int>::Purge, _Unwind_Resume
// callers: CResponseSystem::GetBestResponse
bool __fastcall CResponseSystem::ResolveResponse(
        CResponseSystem *const this,
        CResponseSystem::ResponseSearchResult *const searchResult,
        int depth,
        const char *name,
        bool verbose,
        IResponseFilter *pFilter)
{
  CResponseSystem *v6; // r12
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rdx
  __int64 v9; // r14
  __int16 v10; // ax
  __int64 v11; // r13
  int v12; // r14d
  __int64 v13; // rdi
  __int64 v14; // r14
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // r13d
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  bool v21; // bl
  __int64 v23; // r15
  __int64 v24; // rax
  ParserResponse *v25; // r10
  bool v26; // al
  int v27; // eax
  ResponseGroup *g; // [rsp+8h] [rbp-88h]
  __int64 v29; // [rsp+10h] [rbp-80h]
  unsigned __int8 v33; // [rsp+33h] [rbp-5Dh]
  CResponseSystem *thisa; // [rsp+38h] [rbp-58h]
  const char *v36; // [rsp+40h] [rbp-50h] BYREF
  __int16 v37; // [rsp+48h] [rbp-48h]
  __int16 v38; // [rsp+4Ah] [rbp-46h]
  __int64 v39; // [rsp+50h] [rbp-40h]
  char v40; // [rsp+58h] [rbp-38h]
  char v41; // [rsp+59h] [rbp-37h]
  char v42; // [rsp+5Ah] [rbp-36h]
  char v43; // [rsp+5Bh] [rbp-35h]

  if ( name == 0 )
    return 0;
  v6 = this;
  m_Root = this->m_Responses.m_Elements.m_Tree.m_Root;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 1;
  v41 = 0;
  v42 = 1;
  v43 = v43 & 0xE0 | 1;
  v36 = name;
  if ( m_Root == 0xFFFF )
  {
    v10 = 0;
  }
  else
  {
    m_pMemory = this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
    do
    {
      while ( 1 )
      {
        v9 = m_Root;
        if ( !v6->m_Responses.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v36, &m_pMemory[v9].m_Data.key) )
          break;
        m_pMemory = v6->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_8;
      }
      if ( !v6->m_Responses.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &v6->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data.key,
              &v36) )
        break;
      m_pMemory = v6->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v9].m_Right;
    }
    while ( m_Root != 0xFFFF );
LABEL_8:
    v10 = v38;
    if ( v38 != 0 )
      v11 = v39;
    else
      v11 = 0;
    if ( v37 > 0 )
    {
      v12 = 0;
      do
      {
        v13 = v12++;
        ParserResponse::~ParserResponse((v11 + 90 * v13));
      }
      while ( v37 > v12 );
      v10 = v38;
    }
  }
  v37 = 0;
  if ( v10 > 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v39);
  if ( m_Root == 0xFFFF )
    return 0;
  v29 = m_Root;
  v14 = &v6->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root];
  if ( *(v14 + 32) == 0 )
    return 0;
  v15 = *(v14 + 16);
  if ( *(v14 + 16) == 0 )
    return 0;
  g = (v14 + 16);
  if ( (*(v14 + 35) & 8) != 0 )
  {
    thisa = v6;
    v33 = *(v14 + 33);
    v16 = v33;
    while ( 1 )
    {
      v17 = v16;
      *(v14 + 33) = v16 + 1;
      if ( v15 <= v16 )
      {
        if ( (*(v14 + 35) & 0x10) != 0 )
        {
          *(v14 + 32) = 0;
          return 0;
        }
        *(v14 + 33) = 0;
        v18 = 0;
        v17 = 0;
      }
      else
      {
        v18 = 90 * v16;
      }
      if ( pFilter == 0
        || (*(v14 + 18) == 0 ? (v20 = *(v18 + 82), v19 = v18) : (v19 = *(v14 + 24) + v18, v20 = *(v19 + 82)),
            (*pFilter->_vptr_IResponseFilter)(pFilter, *(v19 + 81) & 0x3F, v20) != 0) )
      {
        v23 = v18;
        v6 = thisa;
        goto LABEL_31;
      }
      v16 = *(v14 + 33);
      if ( v33 == v16 )
        return 0;
    }
  }
  v27 = CResponseSystem::SelectWeightedResponseFromResponseGroup(v6, g, pFilter);
  v17 = v27;
  if ( v27 < 0 )
    return 0;
  v23 = 90LL * v27;
LABEL_31:
  if ( verbose )
  {
    CResponseSystem::DebugPrint(
      v6,
      depth,
      "%s\n",
      v6->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v29].m_Data.key);
    CResponseSystem::DebugPrint(v6, depth, "{\n");
    CResponseSystem::DescribeResponseGroup(v6, g, v17, depth);
  }
  if ( *(v14 + 18) != 0 )
    v24 = *(v14 + 24);
  else
    v24 = 0;
  v25 = (v24 + v23);
  if ( (*(v24 + v23 + 81) & 0x3F) == 4 )
  {
    v26 = CResponseSystem::ResolveResponse(v6, searchResult, depth + 1, v25->value, verbose, pFilter);
  }
  else
  {
    searchResult->action = v25;
    searchResult->group = g;
    v26 = 1;
  }
  v21 = v26;
  if ( verbose )
    CResponseSystem::DebugPrint(v6, depth, "}\n");
  return v21;
}


// CResponseSystem::DescribeResponseGroup  (line 1068, @0x00000000030f9590, libserver.so)  // inlines: Base, Convert16bitFloatTo32bits, Element, GetFloat, GetType, IsInfinity, IsNaN, operator[]
// calls: CRR_Response::DescribeResponse, CResponseSystem::DebugPrint
// callers: CResponseSystem::ResolveResponse, CResponseSystem::GetBestResponse
// strings: "%s%20s : %40s %5.3f\n"
void __fastcall CResponseSystem::DescribeResponseGroup(
        CResponseSystem *const this,
        ResponseGroup *group,
        int selected,
        int depth)
{
  __m128i v4; // xmm0
  unsigned __int64 v7; // r15
  int v8; // ebx
  float v9; // xmm1_4
  float v10; // ecx
  double v11; // xmm0_8
  const char *value; // r14
  const char *v13; // rax
  const char *v14; // rcx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v16; // rdx
  unsigned __int16 rawWord; // ax
  __int64 v18; // [rsp+0h] [rbp-50h]
  int v19; // [rsp+Ch] [rbp-44h]
  double v21; // [rsp+18h] [rbp-38h]

  if ( group->group.m_nCount > 0 )
  {
    v7 = 0;
    v19 = depth + 1;
    v8 = 0;
    v18 = 90 * ((group->group.m_nCount - 1) + 1LL);
    do
    {
      if ( group->group.m_nAllocated != 0 )
        m_pElements = group->group.m_pElements;
      else
        m_pElements = 0;
      v16 = &m_pElements[v7 / 0x5A];
      rawWord = v16->weight.m_storage.rawWord;
      if ( (rawWord & 0x7FFF) == 0x7C00 )
      {
        v11 = 65504.0;
        if ( (rawWord & 0x8000u) != 0 )
          v11 = -65504.0;
        goto LABEL_10;
      }
      if ( (HIBYTE(rawWord) & 0x7C) == 0x7C )
      {
        v11 = 0.0;
        if ( (rawWord & 0x3FF) != 0 )
          goto LABEL_10;
      }
      else if ( (rawWord & 0x7C00) == 0 && (rawWord & 0x3FF) != 0 )
      {
        v9 = 1.0;
        if ( (rawWord & 0x8000u) != 0 )
          v9 = -1.0;
        *v4.m128i_i32 = (((rawWord & 0x3FF) * 0.0009765625) * v9) * 0.000061035156;
        v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
        goto LABEL_9;
      }
      LODWORD(v10) = (((((rawWord >> 10) & 0x1F) + 112) * (((rawWord >> 10) & 0x1F) != 0)) << 23)
                   | (((rawWord & 0x8000u) != 0) << 31)
                   | ((rawWord & 0x3FF) << 13);
LABEL_9:
      v11 = v10;
LABEL_10:
      v21 = v11;
      value = v16->value;
      v13 = CRR_Response::DescribeResponse((*(v16 + 81) & 0x3F));
      v14 = "-> ";
      if ( v8 != selected )
        v14 = "   ";
      v7 += 90LL;
      ++v8;
      CResponseSystem::DebugPrint(this, v19, "%s%20s : %40s %5.3f\n", v14, v13, value, v21);
    }
    while ( v7 != v18 );
  }
}


// CResponseSystem::GetBestResponse  (line 1088, @0x00000000030fb830, libserver.so)  // inlines: Base, Element, Get, GetCurrentIndex, GetElementName, GetType, SetCurrentIndex, SetEnabled, operator[]
// calls: CResponseSystem::DebugPrint, CResponseSystem::SelectWeightedResponseFromResponseGroup, CResponseSystem::DescribeResponseGroup, CResponseSystem::ResolveResponse
// callers: CResponseSystem::FindBestResponse
bool __fastcall CResponseSystem::GetBestResponse(
        CResponseSystem *const this,
        CResponseSystem::ResponseSearchResult *const searchResult,
        Rule *rule,
        bool verbose,
        IResponseFilter *pFilter)
{
  int m_nCount; // r15d
  bool v7; // bl
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 m_nAllocated; // rdx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t *v14; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v15; // rbx
  __int64 v16; // rsi
  int v17; // r13d
  __int64 v18; // r15
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v19; // rax
  const char *value; // rdx
  __int64 v21; // rax
  int v22; // r15d
  __int64 v23; // r13
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // rbx
  ParserResponse *v25; // rbx
  bool v26; // al
  int v27; // eax
  ResponseGroup *g; // [rsp+8h] [rbp-58h]
  __int64 v29; // [rsp+10h] [rbp-50h]
  uint8 m_nCurrentIndex; // [rsp+1Fh] [rbp-41h]
  int count; // [rsp+2Ch] [rbp-34h]

  m_nCount = rule->m_Responses.m_nCount;
  if ( rule->m_Responses.m_nCount == 0 )
    return 0;
  v11 = (*(*IResponseEngineEmulator::s_pSingleton + 16LL))(IResponseEngineEmulator::s_pSingleton);
  v12 = (*(*v11 + 16LL))(v11, 0, (m_nCount - 1));
  m_nAllocated = rule->m_Responses.m_nAllocated;
  if ( m_nAllocated != 0 )
    v14 = m_nAllocated <= 6 ? &rule->m_Responses.m_nAllocAllocated + 1 : rule->m_Responses.m_pElements;
  else
    v14 = 0;
  v29 = v14[v12];
  v15 = &this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v29];
  if ( !v15->m_Data.elem.m_bEnabled )
    return 0;
  count = v15->m_Data.elem.group.m_nCount;
  if ( v15->m_Data.elem.group.m_nCount == 0 )
    return 0;
  g = &v15->m_Data.elem;
  if ( (*(&v15->m_Data.elem + 19) & 8) != 0 )
  {
    m_nCurrentIndex = v15->m_Data.elem.m_nCurrentIndex;
    v16 = m_nCurrentIndex;
    v17 = m_nCurrentIndex;
    v15->m_Data.elem.m_nCurrentIndex = m_nCurrentIndex + 1;
    if ( count <= m_nCurrentIndex )
      goto LABEL_17;
LABEL_11:
    v18 = 90 * v16;
    while ( pFilter != 0 )
    {
      if ( v15->m_Data.elem.group.m_nAllocated != 0 )
      {
        v19 = &v15->m_Data.elem.group.m_pElements[v18 / 0x5A];
        value = v19->value;
      }
      else
      {
        value = *(v18 + 82);
        v19 = v18;
      }
      if ( (*pFilter->_vptr_IResponseFilter)(pFilter, *(v19 + 81) & 0x3F, value) != 0 )
        break;
      v16 = v15->m_Data.elem.m_nCurrentIndex;
      if ( m_nCurrentIndex == v16 )
        return 0;
      v17 = v16;
      v15->m_Data.elem.m_nCurrentIndex = v16 + 1;
      if ( count > v16 )
        goto LABEL_11;
LABEL_17:
      if ( (*(&v15->m_Data.elem + 19) & 0x10) != 0 )
      {
        v15->m_Data.elem.m_bEnabled = 0;
        return 0;
      }
      v18 = 0;
      v17 = 0;
      v15->m_Data.elem.m_nCurrentIndex = 0;
    }
    v21 = v18;
    v22 = v17;
    v23 = v21;
    goto LABEL_20;
  }
  v27 = CResponseSystem::SelectWeightedResponseFromResponseGroup(this, g, pFilter);
  v22 = v27;
  if ( v27 < 0 )
    return 0;
  v23 = 90LL * v27;
LABEL_20:
  if ( v15->m_Data.elem.group.m_nAllocated != 0 )
    m_pElements = v15->m_Data.elem.group.m_pElements;
  else
    m_pElements = 0;
  v25 = (m_pElements + v23);
  if ( verbose )
  {
    CResponseSystem::DebugPrint(
      this,
      0,
      "%s\n",
      this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v29].m_Data.key);
    CResponseSystem::DebugPrint(this, 0, "{\n");
    CResponseSystem::DescribeResponseGroup(this, g, v22, 0);
  }
  if ( (*(v25 + 81) & 0x3F) == 4 )
  {
    v26 = CResponseSystem::ResolveResponse(this, searchResult, 1, v25->value, verbose, pFilter);
  }
  else
  {
    searchResult->action = v25;
    searchResult->group = g;
    v26 = 1;
  }
  v7 = v26;
  if ( verbose )
    CResponseSystem::DebugPrint(this, 0, "}\n");
  return v7;
}


// CResponseSystem::FindBestMatchingRule  (line 1189, @0x00000000030fbaf0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CopyConstruct<unsigned int>, Element, Get, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CMemAllocSystemInitialize, ResponseRulePartition::GetDictsForCriteria, CResponseSystem::ScoreCriteriaAgainstRule, ResponseRulePartition::IndexFromDictElem, CUtlMemory<unsigned int, int>::Grow, DevMsg(char const*,...), CUtlMemory<unsigned int, int>::Purge, __stack_chk_fail, _Unwind_Resume
// callers: CResponseSystem::FindBestResponse
// strings: "Found %i matching rules, selecting slot %i\n"
ResponseRulePartition::tIndex __fastcall CResponseSystem::FindBestMatchingRule(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        bool verbose,
        float *const scoreOfBestMatchingRule)
{
  unsigned int *v8; // rax
  ResponseRulePartition::tRuleDict *v9; // r13
  int m_NumElements; // r14d
  int v11; // r14d
  int v12; // ebx
  unsigned int *v13; // rax
  float v14; // xmm0_4
  __int64 m_Size; // r12
  ResponseRulePartition::tIndex v16; // r15d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r12
  ResponseRulePartition::tIndex v22; // ebx
  __int64 b; // [rsp+20h] [rbp-A0h]
  ResponseRulePartition *p_m_RulePartitions; // [rsp+30h] [rbp-90h]
  bool verbosea; // [rsp+48h] [rbp-78h]
  float bestscore; // [rsp+4Ch] [rbp-74h]
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > bestrules; // [rsp+50h] [rbp-70h] BYREF
  CUtlVectorFixed<CResponseDict<Rule*,short unsigned int>*,2ul> buckets; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  bestrules.m_Size = 0;
  bestrules.m_Memory.m_pMemory = 0;
  bestrules.m_Memory.m_nAllocationCount = 4;
  bestrules.m_Memory.m_nGrowSize = 16;
  CMemAllocSystemInitialize(this);
  v8 = (**g_pMemAlloc)(g_pMemAlloc, 16);
  *scoreOfBestMatchingRule = 0.0;
  bestrules.m_Memory.m_pMemory = v8;
  buckets.m_Size = 0;
  p_m_RulePartitions = &this->m_RulePartitions;
  ResponseRulePartition::GetDictsForCriteria(&this->m_RulePartitions, &buckets, set);
  if ( buckets.m_Size <= 0 )
  {
    bestscore = 0.001;
  }
  else
  {
    b = 0;
    verbosea = verbose;
    bestscore = 0.001;
    do
    {
      v9 = *&buckets.m_Memory.m_Memory.m_Data[8 * b];
      m_NumElements = v9->m_Tree.m_NumElements;
      if ( m_NumElements != 0 )
      {
        v11 = m_NumElements + 1;
        v12 = 1;
        do
        {
          v14 = CResponseSystem::ScoreCriteriaAgainstRule(this, set, v9, v12 - 1, verbosea);
          if ( v14 >= bestscore )
          {
            if ( bestscore != v14 )
            {
              bestrules.m_Size = 0;
              bestscore = v14;
            }
            m_Size = bestrules.m_Size;
            v16 = ResponseRulePartition::IndexFromDictElem(p_m_RulePartitions, v9, v12 - 1);
            v17 = bestrules.m_Size;
            if ( bestrules.m_Size == bestrules.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<unsigned int,int>::Grow(&bestrules.m_Memory, 1);
              v17 = bestrules.m_Size;
            }
            bestrules.m_Size = v17 + 1;
            v13 = &bestrules.m_Memory.m_pMemory[m_Size];
            if ( v13 != 0 )
              *v13 = v16;
          }
          ++v12;
        }
        while ( v12 != v11 );
      }
      v18 = b++;
    }
    while ( buckets.m_Size > v18 + 1 );
  }
  if ( bestrules.m_Size <= 0 )
  {
    v22 = -1;
  }
  else
  {
    *scoreOfBestMatchingRule = bestscore;
    if ( bestrules.m_Size == 1 )
    {
      v22 = *bestrules.m_Memory.m_pMemory;
    }
    else
    {
      v19 = (*(*IResponseEngineEmulator::s_pSingleton + 16LL))(IResponseEngineEmulator::s_pSingleton);
      v20 = (*(*v19 + 16LL))(v19, 0, (bestrules.m_Size - 1));
      v21 = v20;
      if ( verbose )
        DevMsg("Found %i matching rules, selecting slot %i\n", bestrules.m_Size, v20);
      v22 = bestrules.m_Memory.m_pMemory[v21];
    }
  }
  buckets.m_Size = 0;
  if ( (bestrules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&bestrules.m_Memory);
    if ( (bestrules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&bestrules.m_Memory);
  }
  return v22;
}


// CResponseSystem::PassesClassnameDebugFilter  (line 1242, @0x00000000030f9760, libserver.so)  // inlines: GetString, IsValidIndex
// calls: CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::GetValue, V_stricmp_fast, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CResponseSystem::SpewDebugInfo, CResponseSystem::FindBestResponse
// strings: "rr_debugclassname"
// globals: `guard variable for'CResponseSystem::PassesClassnameDebugFilter(CResponseCriteriaSet const&)::rr_debugclassname, CResponseSystem::PassesClassnameDebugFilter(CResponseCriteriaSet const&)::rr_debugclassname
bool __fastcall CResponseSystem::PassesClassnameDebugFilter(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const set)
{
  char *m_pszString; // rbx
  bool result; // al
  int CriterionIndex; // eax
  const char *Value; // rax
  int v7; // edx

  if ( `guard variable for'CResponseSystem::PassesClassnameDebugFilter(CResponseCriteriaSet const&)::rr_debugclassname == 0
    && __cxa_guard_acquire(&`guard variable for'CResponseSystem::PassesClassnameDebugFilter(CResponseCriteriaSet const&)::rr_debugclassname) != 0 )
  {
    ConVarRef::ConVarRef(
      &CResponseSystem::PassesClassnameDebugFilter(CResponseCriteriaSet const&)::rr_debugclassname,
      "rr_debugclassname");
    __cxa_guard_release(&`guard variable for'CResponseSystem::PassesClassnameDebugFilter(CResponseCriteriaSet const&)::rr_debugclassname);
  }
  m_pszString = CResponseSystem::PassesClassnameDebugFilter(CResponseCriteriaSet const&)::rr_debugclassname.m_pConVarState->m_Value.m_pszString;
  result = 1;
  if ( m_pszString != 0 && *m_pszString != 0 )
  {
    CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(set, "classname");
    if ( CriterionIndex < 0 )
      return 1;
    if ( CriterionIndex >= set->m_Lookup.m_NumElements )
      return 1;
    Value = CResponseCriteriaSet::GetValue(set, CriterionIndex);
    v7 = V_stricmp_fast(Value, m_pszString);
    result = 0;
    if ( v7 == 0 )
      return 1;
  }
  return result;
}


// CResponseSystem::SpewDebugInfo  (line 1260, @0x00000000030f9830, libserver.so)  // inlines: Element, Find, GetInt, GetString, IsIdxValid, IsValidIndex, Next, V_strlen, operator char const*, operator[]
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, CResponseSystem::PassesClassnameDebugFilter, strlen, CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::GetValue, V_stricmp_fast, CRR_Response::Describe, CRR_Concept::CRR_Concept, CRR_Concept::GetStringConcept, __cxa_guard_abort (13 total)
// callers: CInstancedResponseSystem::FindBestResponse, CResponseSystem::FindBestResponse
// strings: "rr_debugresponses", "rr_debugresponseconcept"
// globals: `guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponses, CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponses, `guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept, CResponseSystem::m_DebugExcludeList, CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept
void __fastcall CResponseSystem::SpewDebugInfo(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        CRR_Response *const response,
        bool matchSucceeded)
{
  int m_nValue; // ebx
  ConVar *m_pConVarState; // r13
  char *m_pszString; // rbx
  int CriterionIndex; // eax
  const char *Value; // rax
  int v12; // eax
  const char *v13; // rax
  unsigned int m_Head; // ebx
  UtlLinkedListElem_t<CRR_Concept,short unsigned int> *m_pMemory; // rdi
  __int64 v16; // r15
  const char *StringConcept; // r13
  CRR_Concept test; // [rsp+10h] [rbp-40h] BYREF

  if ( `guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponses == 0
    && __cxa_guard_acquire(&`guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponses) != 0 )
  {
    ConVarRef::ConVarRef(
      &CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponses,
      "rr_debugresponses");
    __cxa_guard_release(&`guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponses);
  }
  m_nValue = CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponses.m_pConVarState->m_Value.m_nValue;
  if ( (m_nValue - 1) > 2
    || !CResponseSystem::PassesClassnameDebugFilter(this, set)
    || !matchSucceeded && (m_nValue - 2) > 1 )
  {
    return;
  }
  if ( `guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept == 0
    && __cxa_guard_acquire(&`guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept) != 0 )
  {
    ConVarRef::ConVarRef(
      &CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept,
      "rr_debugresponseconcept");
    __cxa_guard_release(&`guard variable for'CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept);
  }
  m_pConVarState = CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept.m_pConVarState;
  m_pszString = CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept.m_pConVarState->m_Value.m_pszString;
  if ( m_pszString != 0
    && strlen(CResponseSystem::SpewDebugInfo(CResponseCriteriaSet const&,CRR_Response &,bool)::rr_debugresponseconcept.m_pConVarState->m_Value.m_pszString) > 0
    && m_pConVarState->m_Value.m_nValue == 0 )
  {
    CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(set, "concept");
    Value = CResponseCriteriaSet::GetValue(set, CriterionIndex);
    if ( V_stricmp_fast(m_pszString, Value) != 0 )
      return;
LABEL_13:
    CRR_Response::Describe(response, set);
    return;
  }
  if ( CResponseSystem::m_DebugExcludeList.m_ElementCount == 0 )
    goto LABEL_13;
  v12 = CResponseCriteriaSet::FindCriterionIndex(set, "concept");
  v13 = CResponseCriteriaSet::GetValue(set, v12);
  CRR_Concept::CRR_Concept(&test, v13);
  m_Head = CResponseSystem::m_DebugExcludeList.m_Head;
  m_pMemory = CResponseSystem::m_DebugExcludeList.m_Memory.m_pMemory;
  if ( CResponseSystem::m_DebugExcludeList.m_Head == 0xFFFF )
    goto LABEL_13;
  while ( 1 )
  {
    v16 = m_Head;
    StringConcept = CRR_Concept::GetStringConcept(&m_pMemory[v16].m_Element);
    if ( StringConcept == CRR_Concept::GetStringConcept(&test) )
      break;
    m_pMemory = CResponseSystem::m_DebugExcludeList.m_Memory.m_pMemory;
    m_Head = CResponseSystem::m_DebugExcludeList.m_Memory.m_pMemory[v16].m_Next;
    if ( m_Head == 0xFFFF )
      goto LABEL_13;
  }
  if ( m_Head >= CResponseSystem::m_DebugExcludeList.m_Memory.m_nAllocationCount
    || CResponseSystem::m_DebugExcludeList.m_LastAlloc.index < m_Head
    || CResponseSystem::m_DebugExcludeList.m_Memory.m_pMemory[v16].m_Previous == m_Head
    && m_Head != CResponseSystem::m_DebugExcludeList.m_Memory.m_pMemory[v16].m_Next )
  {
    goto LABEL_13;
  }
}


// CResponseSystem::FindBestResponse  (line 1302, @0x00000000030fbdf0, libserver.so)  // inlines: Count, Disable, GetContext, GetInt, GetType, IsMatchOnce, IsValid, ResponseParams, ResponseSearchResult, SetMatchScore, V_strncpy<long unsigned int>, operator=, operator[]
// calls: CResponseSystem::FindBestMatchingRule, CResponseSystem::GetBestResponse, ResponseRulePartition::GetElementName, _V_strncpy, CRR_Response::Init, CResponseSystem::SpewDebugInfo, CResponseSystem::PassesClassnameDebugFilter, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __stack_chk_fail, __cxa_guard_abort (13 total)
// strings: "rr_debugresponses"
// globals: `guard variable for'CResponseSystem::FindBestResponse(CResponseCriteriaSet const&,CRR_Response &,IResponseFilter *)::rr_debugresponses, CResponseSystem::FindBestResponse(CResponseCriteriaSet const&,CRR_Response &,IResponseFilter *)::rr_debugresponses
bool __fastcall CResponseSystem::FindBestResponse(
        CResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        CRR_Response *const response,
        IResponseFilter *pFilter)
{
  int m_nValue; // eax
  bool v9; // dl
  bool v10; // r14
  ResponseRulePartition::tIndex BestMatchingRule; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,short unsigned int> *m_pMemory; // r11
  bool BestResponse; // al
  ResponseRulePartition *p_m_RulePartitions; // r9
  int v17; // r10d
  const char *ElementName; // rax
  ResponseType_t v19; // r10d
  char v20; // al
  const char *worldContext; // rdx
  bool v22; // r15
  const char *v23; // r9
  char v24; // al
  bool v26; // al
  char v27; // si
  ResponseType_t responseType; // [rsp+8h] [rbp-1D8h]
  Rule *r; // [rsp+18h] [rbp-1C8h]
  bool rb; // [rsp+18h] [rbp-1C8h]
  bool ra; // [rsp+18h] [rbp-1C8h]
  float scoreOfBestRule; // [rsp+28h] [rbp-1B8h] BYREF
  ResponseRulePartition::tIndex bestRule; // [rsp+2Ch] [rbp-1B4h] BYREF
  CResponseSystem::ResponseSearchResult v34; // [rsp+30h] [rbp-1B0h] BYREF
  ResponseParams rp; // [rsp+40h] [rbp-1A0h] BYREF
  char ruleName[128]; // [rsp+60h] [rbp-180h] BYREF
  char responseName[200]; // [rsp+E0h] [rbp-100h] BYREF
  unsigned __int64 v38; // [rsp+1A8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( `guard variable for'CResponseSystem::FindBestResponse(CResponseCriteriaSet const&,CRR_Response &,IResponseFilter *)::rr_debugresponses == 0
    && __cxa_guard_acquire(&`guard variable for'CResponseSystem::FindBestResponse(CResponseCriteriaSet const&,CRR_Response &,IResponseFilter *)::rr_debugresponses) != 0 )
  {
    ConVarRef::ConVarRef(
      &CResponseSystem::FindBestResponse(CResponseCriteriaSet const&,CRR_Response &,IResponseFilter *)::rr_debugresponses,
      "rr_debugresponses");
    __cxa_guard_release(&`guard variable for'CResponseSystem::FindBestResponse(CResponseCriteriaSet const&,CRR_Response &,IResponseFilter *)::rr_debugresponses);
  }
  m_nValue = CResponseSystem::FindBestResponse(CResponseCriteriaSet const&,CRR_Response &,IResponseFilter *)::rr_debugresponses.m_pConVarState->m_Value.m_nValue;
  v9 = m_nValue == 3;
  v10 = 0;
  if ( (m_nValue - 1) <= 2 )
  {
    ra = m_nValue == 3;
    v26 = CResponseSystem::PassesClassnameDebugFilter(this, set);
    v9 = ra;
    v10 = v26;
  }
  BestMatchingRule = CResponseSystem::FindBestMatchingRule(this, set, v9, &scoreOfBestRule);
  rp.flags = 0;
  rp.odds = 100;
  bestRule = BestMatchingRule;
  rp.delay.start.m_storage.rawWord = 0;
  rp.delay.range.m_storage.rawWord = 0;
  rp.respeakdelay.start.m_storage.rawWord = 0;
  rp.respeakdelay.range.m_storage.rawWord = 0;
  rp.weapondelay.start.m_storage.rawWord = 0;
  rp.weapondelay.range.m_storage.rawWord = 0;
  rp.soundlevel = 0;
  rp.predelay.start.m_storage.rawWord = 0;
  rp.predelay.range.m_storage.rawWord = 0;
  rp.m_pFollowup = 0;
  ruleName[0] = 0;
  responseName[0] = 0;
  if ( BestMatchingRule == -1
    || (v12 = HIWORD(BestMatchingRule), HIWORD(BestMatchingRule) > 0xFFu)
    || (v13 = BestMatchingRule & 0x1FFF) >= this->m_RulePartitions.m_RuleParts[v12].m_Tree.m_NumElements )
  {
    v22 = 0;
    v24 = 0;
    v19 = ResponseType_t::RESPONSE_NONE;
    v23 = 0;
LABEL_14:
    worldContext = 0;
    goto LABEL_15;
  }
  m_pMemory = this->m_RulePartitions.m_RuleParts[v12].m_Tree.m_Elements.m_pMemory;
  v34.group = 0;
  v34.action = 0;
  r = m_pMemory[v13].m_Data.elem;
  BestResponse = CResponseSystem::GetBestResponse(this, &v34, r, v10, pFilter);
  p_m_RulePartitions = &this->m_RulePartitions;
  if ( BestResponse )
  {
    _V_strncpy(responseName, v34.action->value, 192);
    p_m_RulePartitions = &this->m_RulePartitions;
    v27 = *(v34.action + 81);
    *&rp.delay.start.m_storage.rawWord = *v34.action;
    *&rp.weapondelay.start.m_storage.rawWord = *&v34.action->params.weapondelay.start.m_storage.rawWord;
    v17 = v27 & 0x3F;
    *&rp.odds = *&v34.action->params.odds;
    rp.m_pFollowup = &v34.action->m_followup;
  }
  else
  {
    v17 = 0;
  }
  responseType = v17;
  ElementName = ResponseRulePartition::GetElementName(p_m_RulePartitions, &bestRule);
  _V_strncpy(ruleName, ElementName, 128);
  v19 = responseType;
  v20 = *(r + 41);
  if ( (v20 & 2) != 0 )
  {
    v20 &= ~4u;
    *(r + 41) = v20;
  }
  worldContext = r->m_szContext;
  response->m_fMatchScore = scoreOfBestRule;
  if ( (v20 & 1) == 0 )
  {
    v23 = worldContext;
    v22 = 1;
    v24 = 1;
    goto LABEL_14;
  }
  v22 = 1;
  v23 = 0;
  v24 = 1;
LABEL_15:
  rb = v24;
  CRR_Response::Init(response, v19, responseName, &rp, ruleName, v23, worldContext);
  CResponseSystem::SpewDebugInfo(this, set, response, v22);
  return rb;
}


// CResponseSystem::GetAllResponses  (line 1365, @0x00000000030fc1c0, libserver.so)  // inlines: AddToTail, Base, Construct<CRR_Response>, Element, GetType, GrowMemory, operator[]
// calls: CRR_Response::CRR_Response, CRR_Response::Init, CUtlMemory<CRR_Response, int>::Grow
void __fastcall CResponseSystem::GetAllResponses(
        CResponseSystem *const this,
        CUtlVector<CRR_Response,CUtlMemory<CRR_Response,int> > *pResponses)
{
  __int64 v3; // r14
  int v4; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v5; // r13
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // rcx
  ParserResponse *v7; // rcx
  unsigned __int8 v8; // r12
  int m_Size; // r8d
  const char *value; // rdx
  int v11; // esi
  __int64 v12; // rsi
  CRR_Response *v13; // rdi
  CUtlVectorBase<CRR_Response,CUtlMemory<CRR_Response,int> >::CAllocator *j; // [rsp+8h] [rbp-68h]
  __int64 v16; // [rsp+18h] [rbp-58h]
  int i; // [rsp+24h] [rbp-4Ch]
  ResponseParams *responseparamsa; // [rsp+28h] [rbp-48h]
  int responseparams; // [rsp+28h] [rbp-48h]
  ParserResponse *responsea; // [rsp+30h] [rbp-40h]
  ParserResponse *response; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+38h] [rbp-38h]
  const char *v23; // [rsp+38h] [rbp-38h]

  v16 = 0;
  i = 0;
  for ( j = &pResponses->m_Memory; this->m_Responses.m_Elements.m_Tree.m_NumElements > i; ++v16 )
  {
    v3 = 0;
    v4 = 0;
    v5 = &this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v16];
    if ( v5->m_Data.elem.group.m_nCount > 0 )
    {
      do
      {
        if ( v5->m_Data.elem.group.m_nAllocated != 0 )
          m_pElements = v5->m_Data.elem.group.m_pElements;
        else
          m_pElements = 0;
        v7 = &m_pElements[v3];
        v8 = *(v7 + 81) & 0x3F;
        if ( v8 != 4 )
        {
          m_Size = pResponses->m_Size;
          value = v7->value;
          v11 = pResponses->m_Size;
          if ( pResponses->m_Size == pResponses->m_Memory.m_nAllocationCount )
          {
            responseparams = pResponses->m_Size;
            response = v7;
            v23 = v7->value;
            CUtlMemory<CRR_Response,int>::Grow(j, 1);
            v11 = pResponses->m_Size;
            m_Size = responseparams;
            v7 = response;
            value = v23;
          }
          pResponses->m_Size = v11 + 1;
          v12 = m_Size;
          v13 = 0;
          v22 = v12 * 448;
          if ( &pResponses->m_Memory.m_pMemory[v12] != 0 )
          {
            responseparamsa = &v7->params;
            responsea = value;
            CRR_Response::CRR_Response(&pResponses->m_Memory.m_pMemory[v12]);
            v7 = responseparamsa;
            value = responsea;
            v13 = (pResponses->m_Memory.m_pMemory + v22);
          }
          CRR_Response::Init(v13, v8, value, &v7->params, 0, 0, 0);
        }
        ++v4;
        ++v3;
      }
      while ( v5->m_Data.elem.group.m_nCount > v4 );
    }
    ++i;
  }
}


// CResponseSystem::LoadFromBuffer  (line 1387, @0x00000000030f9ab0, libserver.so)
// calls: COM_TimestampedLog, CResponseFileParser::LoadFromBuffer
// strings: "CResponseSystem::LoadFromBuffer [%s] - Start"
void __fastcall CResponseSystem::LoadFromBuffer(
        CResponseSystem *const this,
        const char *scriptfile,
        const char *buffer)
{
  COM_TimestampedLog("CResponseSystem::LoadFromBuffer [%s] - Start", scriptfile);
  CResponseFileParser::LoadFromBuffer(this->m_pParserWhichIsLoadedAllTheTimeWhichKindOfSucks, scriptfile, buffer);
}


// CResponseSystem::LoadFromFile  (line 1397, @0x00000000030f9af0, libserver.so)
// calls: CResponseFileParser::LoadFromFile
void __fastcall CResponseSystem::LoadFromFile(CResponseSystem *const this, const char *basescript)
{
  CResponseFileParser::LoadFromFile(this->m_pParserWhichIsLoadedAllTheTimeWhichKindOfSucks, basescript);
}


// CResponseSystem::CopyCriteriaFrom  (line 1407, @0x00000000030fc530, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Base, Element, EnsureCapacity, Find, GetElementName, LeafCodeInfo_t, Node_t, memcpy, operator=, operator[], ~Node_t
// calls: Criteria::Criteria, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::Find, Criteria::~Criteria, ResponseCopyString, CUtlDict<Criteria, short int>::Insert, memcpy, _Unwind_Resume, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), __stack_chk_fail
// callers: CResponseSystem::CopyRuleFrom
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall CResponseSystem::CopyCriteriaFrom(
        CResponseSystem *const this,
        Rule *pSrcRule,
        Rule *pDstRule,
        CResponseSystem *pCustomSystem)
{
  int m_nCount; // eax
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  char *v8; // r13
  __int64 v9; // rbx
  __int16 v10; // bx
  __int64 v11; // r13
  int v12; // edx
  unsigned __int64 v13; // rcx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v14; // ax
  int v15; // r12d
  int v16; // eax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v17; // rdx
  const char *v18; // rdi
  char v19; // dl
  float v20; // xmm0_4
  char v21; // al
  float v22; // xmm0_4
  __int64 v23; // rbx
  char *v24; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v25; // r12
  const char *value; // r15
  CUtlDict<Criteria,short int> *v27; // r15
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // edx
  int v31; // r12d
  int v32; // eax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v33; // ax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v34; // rdx
  __int16 v35; // r13
  __int64 v36; // r12
  int v37; // edx
  unsigned __int64 v38; // rcx
  int v39; // ebx
  int v40; // eax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v41; // dx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v42; // rax
  int v43; // esi
  int v44; // esi
  void *v45; // rcx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v46; // rsi
  void *v47; // rcx
  unsigned __int64 v48; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v49; // rsi
  int v50; // esi
  void *v51; // rcx
  unsigned __int64 v52; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v73; // [rsp+18h] [rbp-138h]
  unsigned __int64 i; // [rsp+30h] [rbp-120h]
  __int64 v76; // [rsp+38h] [rbp-118h]
  CUtlDict<Criteria,short int> *p_m_Criteria; // [rsp+48h] [rbp-108h]
  __int64 v79; // [rsp+50h] [rbp-100h]
  __int16 v80; // [rsp+62h] [rbp-EEh]
  __int16 v81; // [rsp+64h] [rbp-ECh]
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v82; // [rsp+64h] [rbp-ECh]
  LeafCodeInfo_t v83; // [rsp+70h] [rbp-E0h] BYREF
  LeafCodeInfo_t v84; // [rsp+90h] [rbp-C0h] BYREF
  Criteria dstCriteria; // [rsp+B0h] [rbp-A0h] BYREF
  Criteria dstSubCriteria; // [rsp+E0h] [rbp-70h] BYREF
  unsigned __int64 v87; // [rsp+118h] [rbp-38h]

  v87 = __readfsqword(0x28u);
  m_nCount = pSrcRule->m_Criteria.m_nCount;
  if ( m_nCount > 0 )
  {
    v73 = 2LL * (m_nCount - 1) + 2;
    for ( i = 0; i != v73; i += 2LL )
    {
      m_nAllocated = pSrcRule->m_Criteria.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 6 )
          m_pElements = (&pSrcRule->m_Criteria.m_nAllocAllocated + 1);
        else
          m_pElements = pSrcRule->m_Criteria.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v76 = m_pElements[i / 2] << 6;
      v8 = this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory + v76;
      if ( v8 == -16LL )
        continue;
      v9 = *(v8 + 1);
      if ( v9 != 0 )
      {
        Criteria::Criteria(&dstSubCriteria.value);
        *&dstSubCriteria.nameSym.m_Id = v9;
        v10 = CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Find(
                &pCustomSystem->m_Criteria.m_Elements.m_Tree,
                &dstSubCriteria);
        Criteria::~Criteria(&dstSubCriteria.value);
        if ( v10 != -1 )
        {
          v11 = pDstRule->m_Criteria.m_nCount;
          if ( v11 == 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v84.m_szFile = "../../public/tier1/utlleanvector.h";
              v84.m_szFunction = "AddToTailGetPtr";
              v84.m_nLine = 557;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v84,
                "%s allocation count overflow",
                "AddToTailGetPtr");
            }
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v68, v69, v66, v67, v70, v71) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
          }
          v12 = v11 + 1;
          v13 = pDstRule->m_Criteria.m_nAllocated;
          v14 = pDstRule->m_Criteria.m_nCount;
          if ( v12 > v13 )
          {
            LOWORD(v15) = v11 + 1;
            if ( v12 > 6 )
            {
              v15 = pDstRule->m_Criteria.m_nAllocated;
              while ( 1 )
              {
                v16 = v15;
                if ( v12 <= v15 )
                  break;
                if ( v15 <= 16382 )
                {
                  v44 = 2 * v15;
                  v15 = 16;
                  if ( 2 * v16 > 15 )
                    v15 = v44;
                }
                else
                {
                  v15 = 0x7FFF;
                }
              }
            }
            if ( v13 > 6 )
            {
              pDstRule->m_Criteria.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                   g_pMemAlloc,
                                                   pDstRule->m_Criteria.m_pElements,
                                                   2LL * v15);
              v14 = pDstRule->m_Criteria.m_nCount;
            }
            else
            {
              v14 = pDstRule->m_Criteria.m_nCount;
              if ( v15 > 6 )
              {
                v47 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v15);
                v48 = pDstRule->m_Criteria.m_nAllocated;
                if ( v48 != 0 )
                {
                  if ( v48 <= 6 )
                    v49 = (&pDstRule->m_Criteria.m_nAllocAllocated + 1);
                  else
                    v49 = pDstRule->m_Criteria.m_pElements;
                }
                else
                {
                  v49 = 0;
                }
                pDstRule->m_Criteria.m_pElements = memcpy(v47, v49, 2LL * pDstRule->m_Criteria.m_nCount);
                v14 = pDstRule->m_Criteria.m_nCount;
              }
            }
            pDstRule->m_Criteria.m_nAllocated = v15;
            v13 = v15;
          }
          if ( v13 != 0 )
          {
            if ( v13 <= 6 )
              v17 = (&pDstRule->m_Criteria.m_nAllocAllocated + 1);
            else
              v17 = pDstRule->m_Criteria.m_pElements;
          }
          else
          {
            v17 = 0;
          }
          pDstRule->m_Criteria.m_nCount = v14 + 1;
          v17[v11] = v10;
          continue;
        }
      }
      Criteria::Criteria(&dstCriteria);
      v18 = *(v8 + 3);
      dstCriteria.nameSym.m_Id = *(v8 + 8);
      dstCriteria.value = ResponseCopyString(v18);
      v19 = v8[43];
      v20 = *(v8 + 35);
      dstCriteria.weight.m_storage.rawWord = *(v8 + 16);
      v21 = v8[34];
      dstCriteria.matcher.maxval = v20;
      v22 = *(v8 + 39);
      dstCriteria.required = v21;
      dstCriteria.matcher.minval = v22;
      *(&dstCriteria.matcher + 8) = v19 & 0x40
                                  | v19 & 0x20
                                  | v19 & 0x10
                                  | v19 & 8
                                  | v19 & 4
                                  | v19 & 2
                                  | v19 & 1
                                  | *(&dstCriteria.matcher + 8) & 0x80;
      dstCriteria.matcher.token.m_Id = *(v8 + 22);
      dstCriteria.matcher.rawtoken.m_Id = *(v8 + 23);
      if ( *(v8 + 24) > 0 )
      {
        v23 = 0;
        v79 = 2LL * (*(v8 + 24) - 1) + 2;
        p_m_Criteria = &pCustomSystem->m_Criteria;
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = *(v8 + 25);
            if ( v28 != 0 )
              v24 = v28 > 6 ? *(v8 + 7) : v8 + 52;
            else
              v24 = 0;
            v25 = &this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory[*&v24[v23]];
            value = v25->m_Data.elem.value;
            if ( value == 0 )
              break;
            Criteria::Criteria(&dstSubCriteria.value);
            *&dstSubCriteria.nameSym.m_Id = value;
            v27 = &pCustomSystem->m_Criteria;
            v81 = CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Find(
                    &p_m_Criteria->m_Elements.m_Tree,
                    &dstSubCriteria);
            Criteria::~Criteria(&dstSubCriteria.value);
            if ( v81 == -1 )
              break;
            v23 += 2;
            if ( v23 == v79 )
              goto LABEL_48;
          }
          Criteria::Criteria(&dstSubCriteria);
          dstSubCriteria.nameSym.m_Id = v25->m_Data.elem.nameSym.m_Id;
          dstSubCriteria.value = ResponseCopyString(v25->m_Data.elem.value);
          v27 = &pCustomSystem->m_Criteria;
          dstSubCriteria.weight.m_storage.rawWord = v25->m_Data.elem.weight.m_storage.rawWord;
          dstSubCriteria.required = v25->m_Data.elem.required;
          dstSubCriteria.matcher.maxval = v25->m_Data.elem.matcher.maxval;
          dstSubCriteria.matcher.minval = v25->m_Data.elem.matcher.minval;
          *(&dstSubCriteria.matcher + 8) = *(&v25->m_Data.elem.matcher + 8) & 1 | *(&dstSubCriteria.matcher + 8) & 0xFE;
          *(&dstSubCriteria.matcher + 8) = *(&v25->m_Data.elem.matcher + 8) & 2 | *(&dstSubCriteria.matcher + 8) & 0xFD;
          *(&dstSubCriteria.matcher + 8) = *(&v25->m_Data.elem.matcher + 8) & 4 | *(&dstSubCriteria.matcher + 8) & 0xFB;
          *(&dstSubCriteria.matcher + 8) = *(&v25->m_Data.elem.matcher + 8) & 8 | *(&dstSubCriteria.matcher + 8) & 0xF7;
          *(&dstSubCriteria.matcher + 8) = *(&v25->m_Data.elem.matcher + 8) & 0x10
                                         | *(&dstSubCriteria.matcher + 8) & 0xEF;
          *(&dstSubCriteria.matcher + 8) = *(&v25->m_Data.elem.matcher + 8) & 0x20
                                         | *(&dstSubCriteria.matcher + 8) & 0xDF;
          *(&dstSubCriteria.matcher + 8) = *(&v25->m_Data.elem.matcher + 8) & 0x40
                                         | *(&dstSubCriteria.matcher + 8) & 0xBF;
          dstSubCriteria.matcher.token.m_Id = v25->m_Data.elem.matcher.token.m_Id;
          dstSubCriteria.matcher.rawtoken.m_Id = v25->m_Data.elem.matcher.rawtoken.m_Id;
          v80 = CUtlDict<Criteria,short>::Insert(p_m_Criteria, v25->m_Data.elem.value, &dstSubCriteria);
          v82 = dstCriteria.subcriteria.m_nCount;
          if ( dstCriteria.subcriteria.m_nCount == 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_104;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v56, v57, v54, v55, v58, v59) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_104:
              v83.m_szFile = "../../public/tier1/utlleanvector.h";
              v83.m_szFunction = "AddToTailGetPtr";
              v83.m_nLine = 557;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v83,
                "%s allocation count overflow",
                "AddToTailGetPtr");
            }
          }
          v29 = dstCriteria.subcriteria.m_nAllocated;
          v30 = dstCriteria.subcriteria.m_nCount + 1;
          if ( v30 <= dstCriteria.subcriteria.m_nAllocated )
          {
            v33 = dstCriteria.subcriteria.m_nCount;
            if ( dstCriteria.subcriteria.m_nAllocated != 0 )
              goto LABEL_45;
          }
          else
          {
            LOWORD(v31) = dstCriteria.subcriteria.m_nCount + 1;
            if ( v30 > 6 )
            {
              v31 = dstCriteria.subcriteria.m_nAllocated;
              while ( 1 )
              {
                v32 = v31;
                if ( v30 <= v31 )
                  break;
                if ( v31 <= 16382 )
                {
                  v43 = 2 * v31;
                  v31 = 16;
                  if ( 2 * v32 > 15 )
                    v31 = v43;
                }
                else
                {
                  v31 = 0x7FFF;
                }
              }
            }
            if ( dstCriteria.subcriteria.m_nAllocated > 6 )
            {
              dstCriteria.subcriteria.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                      g_pMemAlloc,
                                                      dstCriteria.subcriteria.m_pElements,
                                                      2LL * v31);
              v33 = dstCriteria.subcriteria.m_nCount;
            }
            else
            {
              v33 = dstCriteria.subcriteria.m_nCount;
              if ( v31 > 6 )
              {
                v45 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v31);
                if ( dstCriteria.subcriteria.m_nAllocated != 0 )
                {
                  v46 = (&dstCriteria.subcriteria.m_nAllocAllocated + 1);
                  if ( dstCriteria.subcriteria.m_nAllocated >= 7 )
                    v46 = dstCriteria.subcriteria.m_pElements;
                }
                else
                {
                  v46 = 0;
                }
                dstCriteria.subcriteria.m_pElements = memcpy(v45, v46, 2LL * dstCriteria.subcriteria.m_nCount);
                v33 = dstCriteria.subcriteria.m_nCount;
              }
            }
            v29 = v31;
            dstCriteria.subcriteria.m_nAllocated = v31;
            if ( v31 != 0 )
            {
LABEL_45:
              v34 = (&dstCriteria.subcriteria.m_nAllocAllocated + 1);
              if ( v29 >= 7 )
                v34 = dstCriteria.subcriteria.m_pElements;
              goto LABEL_47;
            }
          }
          v34 = 0;
LABEL_47:
          v23 += 2;
          dstCriteria.subcriteria.m_nCount = v33 + 1;
          v34[v82] = v80;
          Criteria::~Criteria(&dstSubCriteria);
          if ( v23 == v79 )
            goto LABEL_48;
        }
      }
      v27 = &pCustomSystem->m_Criteria;
LABEL_48:
      v35 = CUtlDict<Criteria,short>::Insert(
              v27,
              *(&this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory->m_Data.key + v76),
              &dstCriteria);
      v36 = pDstRule->m_Criteria.m_nCount;
      if ( v36 == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_109;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v62, v63, v60, v61, v64, v65) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_109:
          v84.m_szFile = "../../public/tier1/utlleanvector.h";
          v84.m_szFunction = "AddToTailGetPtr";
          v84.m_nLine = 557;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v84,
            "%s allocation count overflow",
            "AddToTailGetPtr");
        }
      }
      v37 = v36 + 1;
      v38 = pDstRule->m_Criteria.m_nAllocated;
      if ( v37 <= v38 )
      {
        v41 = pDstRule->m_Criteria.m_nCount;
        if ( v38 != 0 )
          goto LABEL_58;
      }
      else
      {
        LOWORD(v39) = v36 + 1;
        if ( v37 > 6 )
        {
          v39 = pDstRule->m_Criteria.m_nAllocated;
          while ( 1 )
          {
            v40 = v39;
            if ( v37 <= v39 )
              break;
            if ( v39 <= 16382 )
            {
              v50 = 2 * v39;
              v39 = 16;
              if ( 2 * v40 > 15 )
                v39 = v50;
            }
            else
            {
              v39 = 0x7FFF;
            }
          }
        }
        if ( v38 > 6 )
        {
          pDstRule->m_Criteria.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                               g_pMemAlloc,
                                               pDstRule->m_Criteria.m_pElements,
                                               2LL * v39);
          v41 = pDstRule->m_Criteria.m_nCount;
        }
        else
        {
          v41 = pDstRule->m_Criteria.m_nCount;
          if ( v39 > 6 )
          {
            v51 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v39);
            v52 = pDstRule->m_Criteria.m_nAllocated;
            if ( v52 != 0 )
            {
              if ( v52 <= 6 )
                v53 = (&pDstRule->m_Criteria.m_nAllocAllocated + 1);
              else
                v53 = pDstRule->m_Criteria.m_pElements;
            }
            else
            {
              v53 = 0;
            }
            pDstRule->m_Criteria.m_pElements = memcpy(v51, v53, 2LL * pDstRule->m_Criteria.m_nCount);
            v41 = pDstRule->m_Criteria.m_nCount;
          }
        }
        v38 = v39;
        pDstRule->m_Criteria.m_nAllocated = v39;
        if ( v39 != 0 )
        {
LABEL_58:
          if ( v38 <= 6 )
            v42 = (&pDstRule->m_Criteria.m_nAllocAllocated + 1);
          else
            v42 = pDstRule->m_Criteria.m_pElements;
          goto LABEL_60;
        }
      }
      v42 = 0;
LABEL_60:
      pDstRule->m_Criteria.m_nCount = v41 + 1;
      v42[v36] = v35;
      Criteria::~Criteria(&dstCriteria);
    }
  }
}


// CResponseSystem::CopyResponsesFrom  (line 1467, @0x00000000030fd040, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Base, CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorImpl, Construct<ParserResponse>, Destruct<ParserResponse>, Element, EnsureCapacity, FindInsertionPosition, GetElementName, Insert, InsertAt, LeafCodeInfo_t, LeftChild, MemAlloc_StrDupFunc, Node_t, Purge, RemoveAll, ResponseGroup, RightChild, memcpy, operator(), operator=, operator[], strcpy, ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~Node_t, ~ResponseGroup
// calls: ParserResponse::ParserResponse, ResponseCopyString, ParserResponse::operator=, ParserResponse::~ParserResponse, strlen, strcpy, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::LinkToParent, memcpy, CUtlLeanVectorBase<ParserResponse, short int>::Purge, _Unwind_Resume, LoggingSystem_IsChannelEnabled (15 total)
// callers: CResponseSystem::CopyRuleFrom
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall CResponseSystem::CopyResponsesFrom(
        CResponseSystem *const this,
        Rule *pSrcRule,
        Rule *pDstRule,
        CResponseSystem *pCustomSystem)
{
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int16 v9; // bx
  int v10; // edx
  int v11; // eax
  __int64 v12; // r15
  __int16 v13; // ax
  __int16 v14; // r12
  __int64 v15; // r13
  ParserResponse *v16; // r14
  ParserResponse *v17; // r13
  __int16 v18; // ax
  __int64 v19; // rax
  ParserResponse *v20; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v21; // rax
  const char *key; // rbx
  size_t v23; // rax
  char *v24; // rax
  char *v25; // rax
  __int64 v26; // rax
  __int16 rawWord; // bx
  int v28; // edx
  int v29; // eax
  float16::float16bits v30; // ax
  float16::float16bits v31; // r12
  __int64 v32; // r13
  ParserResponse *v33; // r14
  ParserResponse *v34; // r13
  float16::float16bits v35; // ax
  __int64 v36; // rbx
  ParserResponse *v37; // rbx
  __int16 v38; // r12
  float16::float16bits v39; // ax
  __int64 v40; // rbx
  int v41; // r13d
  __int64 v42; // rdi
  __int64 m_nCount; // r13
  int v44; // edx
  unsigned __int64 v45; // rcx
  int v46; // ebx
  int v47; // eax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v48; // ax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v49; // rdx
  __int16 v50; // ax
  __int64 v51; // rbx
  int v52; // r12d
  __int64 v53; // rdi
  bool v54; // bl
  __int16 m_Root; // r13
  __int16 m_Right; // ax
  bool v57; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rax
  int v59; // esi
  void *v60; // rcx
  unsigned __int64 v61; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // r8
  __int64 v80; // r9
  CUtlDict<ResponseGroup,short int> *p_m_Responses; // [rsp+8h] [rbp-188h]
  __int64 v82; // [rsp+10h] [rbp-180h]
  __int64 v83; // [rsp+18h] [rbp-178h]
  unsigned __int64 v86; // [rsp+30h] [rbp-160h]
  __int64 v89; // [rsp+48h] [rbp-148h]
  ParserResponse *v90; // [rsp+50h] [rbp-140h]
  ParserResponse *v91; // [rsp+50h] [rbp-140h]
  __int64 v92; // [rsp+60h] [rbp-130h]
  float16::float16bits src; // [rsp+68h] [rbp-128h]
  __int64 v94; // [rsp+70h] [rbp-120h]
  __int64 v95; // [rsp+70h] [rbp-120h]
  __int64 v96; // [rsp+78h] [rbp-118h]
  __int64 v97; // [rsp+78h] [rbp-118h]
  __int16 dstResponseGroup; // [rsp+80h] [rbp-110h]
  __int16 dstResponseGroup_2; // [rsp+82h] [rbp-10Eh]
  __int64 dstResponseGroup_8; // [rsp+88h] [rbp-108h]
  bool dstResponseGroup_16; // [rsp+90h] [rbp-100h]
  __int16 dstResponseGroup_17; // [rsp+91h] [rbp-FFh]
  char dstResponseGroup_19; // [rsp+93h] [rbp-FDh]
  LeafCodeInfo_t v104; // [rsp+A0h] [rbp-F0h] BYREF
  LeafCodeInfo_t v105; // [rsp+C0h] [rbp-D0h] BYREF
  LeafCodeInfo_t v106; // [rsp+E0h] [rbp-B0h] BYREF
  ParserResponse dstResponse; // [rsp+100h] [rbp-90h] BYREF

  if ( pSrcRule->m_Responses.m_nCount > 0 )
  {
    v86 = 0;
    v82 = 2LL * (pSrcRule->m_Responses.m_nCount - 1) + 2;
    p_m_Responses = &pCustomSystem->m_Responses;
    do
    {
      m_nAllocated = pSrcRule->m_Responses.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 6 )
          m_pElements = (&pSrcRule->m_Responses.m_nAllocAllocated + 1);
        else
          m_pElements = pSrcRule->m_Responses.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v83 = m_pElements[v86 / 2];
      v6 = &this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v83];
      v90 = v6;
      if ( v6 == -16LL )
        goto LABEL_102;
      dstResponseGroup = 0;
      dstResponseGroup_2 = 0;
      dstResponseGroup_8 = 0;
      dstResponseGroup_17 = *&v6->m_Data.elem.m_nCurrentIndex;
      dstResponseGroup_19 = *(&v6->m_Data.elem + 19) & 0x10
                          | *(&v6->m_Data.elem + 19) & 8
                          | *(&v6->m_Data.elem + 19) & 4
                          | *(&v6->m_Data.elem + 19) & 2
                          | *(&v6->m_Data.elem + 19) & 1
                          | dstResponseGroup_19 & 0xE0;
      dstResponseGroup_16 = v6->m_Data.elem.m_bEnabled;
      if ( v6->m_Data.elem.group.m_nCount <= 0 )
      {
        v21 = &this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v83];
      }
      else
      {
        v94 = 0;
        v89 = 90 * ((v6->m_Data.elem.group.m_nCount - 1) + 1LL);
        do
        {
          if ( v90->params.flags != 0 )
            v7 = *(&v90->params.m_pFollowup + 3);
          else
            v7 = 0;
          v8 = v94 + v7;
          if ( v8 != 0 )
          {
            ParserResponse::ParserResponse(&dstResponse);
            dstResponse.weight.m_storage.rawWord = *(v8 + 78);
            *(&dstResponse + 81) = *(v8 + 81) & 0x3F | *(&dstResponse + 81) & 0xC0;
            dstResponse.value = ResponseCopyString(*(v8 + 82));
            dstResponse.depletioncount = *(v8 + 80);
            *(&dstResponse + 81) = *(v8 + 81) & 0x40 | *(&dstResponse + 81) & 0xBF;
            *(&dstResponse + 81) = *(v8 + 81) & 0x80 | *(&dstResponse + 81) & 0x7F;
            if ( dstResponseGroup == 0x7FFF )
            {
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                goto LABEL_141;
              while ( 1 )
              {
                if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v71, v72, v69, v70, v73, v74) != 0 )
                  loc_0 = -559038737;
                Plat_ExitProcess(1);
LABEL_141:
                v104.m_szFile = "../../public/tier1/utlleanvector.h";
                v104.m_szFunction = "AddToTailGetPtr";
                v104.m_nLine = 557;
                LoggingSystem_Log(
                  LOG_GENERAL,
                  LoggingSeverity_t::LS_ERROR,
                  &v104,
                  "%s allocation count overflow",
                  "AddToTailGetPtr");
              }
            }
            v9 = dstResponseGroup_2;
            v10 = dstResponseGroup + 1;
            v11 = dstResponseGroup_2;
            if ( v10 > dstResponseGroup_2 )
            {
              while ( v10 > v11 )
              {
                if ( v9 <= 16382 )
                {
                  if ( v9 <= 0 )
                  {
                    v9 = 1;
                    v11 = 1;
                  }
                  else
                  {
                    v9 *= 2;
                    v11 = v9;
                  }
                }
                else
                {
                  v9 = 0x7FFF;
                  v11 = 0x7FFF;
                }
              }
              v12 = (**g_pMemAlloc)(g_pMemAlloc, 90LL * v9);
              if ( dstResponseGroup_2 != 0 )
                v96 = dstResponseGroup_8;
              else
                v96 = 0;
              v13 = dstResponseGroup;
              if ( v9 <= dstResponseGroup )
                v13 = v9;
              v14 = 0;
              if ( v13 > 0 )
              {
                do
                {
                  v15 = 90LL * v14;
                  v16 = (v15 + v12);
                  if ( v15 + v12 != 0 )
                    ParserResponse::ParserResponse((v15 + v12));
                  v17 = (v96 + v15);
                  ParserResponse::operator=(v16, v17);
                  ++v14;
                  ParserResponse::~ParserResponse(v17);
                  v18 = dstResponseGroup;
                  if ( v9 <= dstResponseGroup )
                    v18 = v9;
                }
                while ( v14 < v18 );
              }
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, dstResponseGroup_8);
              dstResponseGroup_8 = v12;
              dstResponseGroup_2 = v9;
            }
            if ( v9 != 0 )
              v19 = dstResponseGroup_8;
            else
              v19 = 0;
            v20 = (v19 + 90LL * dstResponseGroup);
            if ( v20 != 0 )
              ParserResponse::ParserResponse(v20);
            ++dstResponseGroup;
            ParserResponse::operator=(v20, &dstResponse);
            ParserResponse::~ParserResponse(&dstResponse);
          }
          v94 += 90;
        }
        while ( v94 != v89 );
        v21 = &this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v83];
      }
      key = v21->m_Data.key;
      if ( key != 0 )
      {
        v23 = strlen(v21->m_Data.key);
        v24 = (**g_pMemAlloc)(g_pMemAlloc, v23 + 1);
        v25 = strcpy(v24, key);
      }
      else
      {
        v25 = 0;
      }
      *&dstResponse.params.delay.start.m_storage.rawWord = v25;
      *(&dstResponse.params.m_pFollowup + 3) = 1;
      dstResponse.params.weapondelay.start.m_storage.rawWord = 0;
      dstResponse.params.weapondelay.range.m_storage.rawWord = 0;
      *&dstResponse.params.odds = 0;
      BYTE5(dstResponse.params.m_pFollowup) = 1;
      BYTE6(dstResponse.params.m_pFollowup) = BYTE6(dstResponse.params.m_pFollowup) & 0xE0 | 1;
      if ( dstResponseGroup > 0 )
      {
        src.rawWord = 0;
        v92 = 0;
        if ( dstResponseGroup_2 != 0 )
        {
LABEL_40:
          v26 = dstResponseGroup_8;
          goto LABEL_41;
        }
        while ( 1 )
        {
          v26 = 0;
LABEL_41:
          v91 = (v92 + v26);
          if ( src.rawWord == 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_146;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v77, v78, v75, v76, v79, v80) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_146:
              v105.m_szFile = "../../public/tier1/utlleanvector.h";
              v105.m_szFunction = "AddToTailGetPtr";
              v105.m_nLine = 557;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v105,
                "%s allocation count overflow",
                "AddToTailGetPtr");
            }
          }
          rawWord = dstResponse.params.weapondelay.range.m_storage.rawWord;
          v28 = src.rawWord + 1;
          v29 = dstResponse.params.weapondelay.range.m_storage.rawWord;
          if ( v28 > dstResponse.params.weapondelay.range.m_storage.rawWord )
          {
            while ( v28 > v29 )
            {
              if ( rawWord <= 16382 )
              {
                if ( rawWord <= 0 )
                {
                  rawWord = 1;
                  v29 = 1;
                }
                else
                {
                  rawWord *= 2;
                  v29 = rawWord;
                }
              }
              else
              {
                rawWord = 0x7FFF;
                v29 = 0x7FFF;
              }
            }
            v97 = (**g_pMemAlloc)(g_pMemAlloc, 90LL * rawWord);
            if ( dstResponse.params.weapondelay.range.m_storage.rawWord != 0 )
              v95 = *&dstResponse.params.odds;
            else
              v95 = 0;
            v30.rawWord = dstResponse.params.weapondelay.start.m_storage;
            if ( rawWord <= dstResponse.params.weapondelay.start.m_storage.rawWord )
              v30.rawWord = rawWord;
            v31.rawWord = 0;
            if ( v30.rawWord > 0 )
            {
              do
              {
                v32 = 90LL * v31.rawWord;
                v33 = (v32 + v97);
                if ( v32 + v97 != 0 )
                  ParserResponse::ParserResponse((v32 + v97));
                v34 = (v95 + v32);
                ParserResponse::operator=(v33, v34);
                ++v31.rawWord;
                ParserResponse::~ParserResponse(v34);
                v35.rawWord = dstResponse.params.weapondelay.start.m_storage;
                if ( rawWord <= dstResponse.params.weapondelay.start.m_storage.rawWord )
                  v35.rawWord = rawWord;
              }
              while ( v31.rawWord < v35.rawWord );
            }
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&dstResponse.params.odds);
            dstResponse.params.weapondelay.range.m_storage.rawWord = rawWord;
            *&dstResponse.params.odds = v97;
          }
          if ( rawWord != 0 )
            v36 = *&dstResponse.params.odds;
          else
            v36 = 0;
          v37 = (90LL * src.rawWord + v36);
          if ( v37 != 0 )
            ParserResponse::ParserResponse(v37);
          ++dstResponse.params.weapondelay.start.m_storage.rawWord;
          ParserResponse::operator=(v37, v91);
          v92 += 90;
          if ( v92 == 90 * ((dstResponseGroup - 1) + 1LL) )
            break;
          src.rawWord = dstResponse.params.weapondelay.start.m_storage;
          if ( dstResponseGroup_2 != 0 )
            goto LABEL_40;
        }
      }
      v54 = 0;
      BYTE6(dstResponse.params.m_pFollowup) = dstResponseGroup_19 & 0x10
                                            | dstResponseGroup_19 & 8
                                            | dstResponseGroup_19 & 4
                                            | dstResponseGroup_19 & 2
                                            | dstResponseGroup_19 & 1
                                            | BYTE6(dstResponse.params.m_pFollowup) & 0xE0;
      BYTE3(dstResponse.params.m_pFollowup) = dstResponseGroup_16;
      WORD2(dstResponse.params.m_pFollowup) = dstResponseGroup_17;
      m_Root = pCustomSystem->m_Responses.m_Elements.m_Tree.m_Root;
      if ( m_Root != -1 )
      {
        while ( 1 )
        {
          v57 = !pCustomSystem->m_Responses.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                   &dstResponse,
                   &pCustomSystem->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
          m_pMemory = pCustomSystem->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory;
          if ( v57 )
          {
            m_Right = m_pMemory[m_Root].m_Right;
            v54 = 0;
          }
          else
          {
            m_Right = m_pMemory[m_Root].m_Left;
            v54 = 1;
          }
          if ( m_Right == -1 )
            break;
          m_Root = m_Right;
        }
      }
      v38 = CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NewNode(
              &p_m_Responses->m_Elements.m_Tree,
              &dstResponse);
      CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::LinkToParent(
        &p_m_Responses->m_Elements.m_Tree,
        v38,
        m_Root,
        v54);
      ++pCustomSystem->m_Responses.m_Elements.m_Tree.m_NumElements;
      v39.rawWord = dstResponse.params.weapondelay.range.m_storage;
      if ( dstResponse.params.weapondelay.range.m_storage.rawWord != 0 )
        v40 = *&dstResponse.params.odds;
      else
        v40 = 0;
      if ( dstResponse.params.weapondelay.start.m_storage.rawWord > 0 )
      {
        v41 = 0;
        do
        {
          v42 = v41++;
          ParserResponse::~ParserResponse((v40 + 90 * v42));
        }
        while ( v41 < dstResponse.params.weapondelay.start.m_storage.rawWord );
        v39.rawWord = dstResponse.params.weapondelay.range.m_storage;
      }
      dstResponse.params.weapondelay.start.m_storage.rawWord = 0;
      if ( v39.rawWord > 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&dstResponse.params.odds);
      m_nCount = pDstRule->m_Responses.m_nCount;
      if ( m_nCount == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_136;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v65, v66, v63, v64, v67, v68) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_136:
          v106.m_szFile = "../../public/tier1/utlleanvector.h";
          v106.m_szFunction = "AddToTailGetPtr";
          v106.m_nLine = 557;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v106,
            "%s allocation count overflow",
            "AddToTailGetPtr");
        }
      }
      v44 = m_nCount + 1;
      v45 = pDstRule->m_Responses.m_nAllocated;
      if ( v44 <= v45 )
      {
        v48 = pDstRule->m_Responses.m_nCount;
        if ( v45 == 0 )
          goto LABEL_115;
      }
      else
      {
        LOWORD(v46) = m_nCount + 1;
        if ( v44 > 6 )
        {
          v46 = pDstRule->m_Responses.m_nAllocated;
          while ( 1 )
          {
            v47 = v46;
            if ( v44 <= v46 )
              break;
            if ( v46 <= 16382 )
            {
              v59 = 2 * v46;
              v46 = 16;
              if ( 2 * v47 > 15 )
                v46 = v59;
            }
            else
            {
              v46 = 0x7FFF;
            }
          }
        }
        if ( v45 > 6 )
        {
          pDstRule->m_Responses.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                g_pMemAlloc,
                                                pDstRule->m_Responses.m_pElements,
                                                2LL * v46);
          v48 = pDstRule->m_Responses.m_nCount;
        }
        else
        {
          v48 = pDstRule->m_Responses.m_nCount;
          if ( v46 > 6 )
          {
            v60 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v46);
            v61 = pDstRule->m_Responses.m_nAllocated;
            if ( v61 != 0 )
            {
              if ( v61 <= 6 )
                v62 = (&pDstRule->m_Responses.m_nAllocAllocated + 1);
              else
                v62 = pDstRule->m_Responses.m_pElements;
            }
            else
            {
              v62 = 0;
            }
            pDstRule->m_Responses.m_pElements = memcpy(v60, v62, 2LL * pDstRule->m_Responses.m_nCount);
            v48 = pDstRule->m_Responses.m_nCount;
          }
        }
        pDstRule->m_Responses.m_nAllocated = v46;
        v45 = v46;
        if ( v46 == 0 )
        {
LABEL_115:
          v49 = 0;
          goto LABEL_94;
        }
      }
      if ( v45 <= 6 )
        v49 = (&pDstRule->m_Responses.m_nAllocAllocated + 1);
      else
        v49 = pDstRule->m_Responses.m_pElements;
LABEL_94:
      pDstRule->m_Responses.m_nCount = v48 + 1;
      v49[m_nCount] = v38;
      v50 = dstResponseGroup_2;
      if ( dstResponseGroup_2 != 0 )
        v51 = dstResponseGroup_8;
      else
        v51 = 0;
      if ( dstResponseGroup > 0 )
      {
        v52 = 0;
        do
        {
          v53 = v52++;
          ParserResponse::~ParserResponse((v51 + 90 * v53));
        }
        while ( v52 < dstResponseGroup );
        v50 = dstResponseGroup_2;
      }
      if ( v50 > 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, dstResponseGroup_8);
LABEL_102:
      v86 += 2LL;
    }
    while ( v86 != v82 );
  }
}


// CResponseSystem::CopyEnumerationsFrom  (line 1518, @0x00000000030fdcd0, libserver.so)  // inlines: Element, FindInsertionPosition, GetElementName, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::LinkToParent
void __fastcall CResponseSystem::CopyEnumerationsFrom(CResponseSystem *const this, CResponseSystem *pCustomSystem)
{
  UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v3; // rax
  const char *key; // rbx
  float value; // xmm0_4
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  __int16 m_Root; // bx
  __int16 m_Right; // ax
  char v11; // cl
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rax
  __int16 v14; // ax
  CUtlDict<CResponseSystem::Enumeration,short int> *p_m_Enumerations; // [rsp+8h] [rbp-68h]
  __int64 v16; // [rsp+10h] [rbp-60h]
  CResponseSystem::Enumeration dstEnumeration; // [rsp+24h] [rbp-4Ch]
  bool dstEnumerationa; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v20; // [rsp+28h] [rbp-48h]
  CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_Enumerations.m_Elements.m_Tree.m_NumElements > 0 )
  {
    v20 = 0;
    v16 = 8 * (3LL * (this->m_Enumerations.m_Elements.m_Tree.m_NumElements - 1) + 3);
    p_m_Enumerations = &pCustomSystem->m_Enumerations;
    do
    {
      v3 = &this->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory[v20 / 0x18];
      if ( v3 != -16LL )
      {
        key = v3->m_Data.key;
        value = v3->m_Data.elem.value;
        if ( key != 0 )
        {
          dstEnumeration.value = v3->m_Data.elem.value;
          v6 = strlen(v3->m_Data.key);
          v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
          v8 = strcpy(v7, key);
          value = dstEnumeration.value;
        }
        else
        {
          v8 = 0;
        }
        m_Root = pCustomSystem->m_Enumerations.m_Elements.m_Tree.m_Root;
        pCopyFrom.key = v8;
        pCopyFrom.elem.value = value;
        if ( m_Root != -1 )
        {
          while ( 1 )
          {
            v12 = !pCustomSystem->m_Enumerations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                     &pCopyFrom,
                     &pCustomSystem->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
            m_pMemory = pCustomSystem->m_Enumerations.m_Elements.m_Tree.m_Elements.m_pMemory;
            if ( v12 )
            {
              m_Right = m_pMemory[m_Root].m_Right;
              v11 = 0;
              if ( m_Right == -1 )
                goto LABEL_12;
            }
            else
            {
              m_Right = m_pMemory[m_Root].m_Left;
              v11 = 1;
              if ( m_Right == -1 )
                goto LABEL_12;
            }
            m_Root = m_Right;
          }
        }
        m_Root = -1;
        v11 = 0;
LABEL_12:
        dstEnumerationa = v11;
        v14 = CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NewNode(
                &p_m_Enumerations->m_Elements.m_Tree,
                &pCopyFrom);
        CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::LinkToParent(
          &p_m_Enumerations->m_Elements.m_Tree,
          v14,
          m_Root,
          dstEnumerationa);
        ++pCustomSystem->m_Enumerations.m_Elements.m_Tree.m_NumElements;
      }
      v20 += 24LL;
    }
    while ( v20 != v16 );
  }
}


// CResponseSystem::CopyRuleFrom  (line 1536, @0x00000000030fde60, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: operator new, Rule::Rule, Rule::SetContext, CResponseSystem::CopyCriteriaFrom, CResponseSystem::CopyResponsesFrom, ResponseRulePartition::GetElementName, ResponseRulePartition::GetDictForRule, ResponseCopyString, HashStringConventional, CUtlRBTree<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int, CUtlMap<unsigned int, char const*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int, CUtlMap<unsigned int, char const*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlRBTree<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int, CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int>, short unsigned int> >::NewNode (15 total)
void __fastcall CResponseSystem::CopyRuleFrom(
        CResponseSystem *const this,
        Rule *pSrcRule,
        ResponseRulePartition::tIndex iRule,
        CResponseSystem *pCustomSystem)
{
  char v7; // al
  char v8; // al
  const char *ElementName; // r15
  ResponseRulePartition::tRuleDict *DictForRule; // rbx
  const char *v11; // r12
  CUtlMap<unsigned int,char const*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t v12; // eax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Right; // ax
  char v15; // cl
  bool v16; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,char const*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // r12
  unsigned __int16 m_Left; // ax
  char v21; // cl
  UtlRBTreeNode_t<CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,short unsigned int> *v22; // rax
  unsigned __int16 v23; // ax
  bool v24; // r14
  bool isLeft; // [rsp+4h] [rbp-5Ch]
  Rule *dstRule; // [rsp+10h] [rbp-50h]
  CUtlMap<unsigned int,char const*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t v27; // [rsp+18h] [rbp-48h]
  ResponseRulePartition::tIndex iRulea; // [rsp+1Ch] [rbp-44h] BYREF
  CUtlMap<unsigned int,char const*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t pCopyFrom; // [rsp+20h] [rbp-40h] BYREF

  iRulea = iRule;
  if ( pSrcRule == 0 || pCustomSystem == 0 )
    return;
  dstRule = operator new(0x2Au);
  Rule::Rule(dstRule);
  Rule::SetContext(dstRule, pSrcRule->m_szContext);
  v7 = *(pSrcRule + 41) & 2 | *(dstRule + 41) & 0xFD;
  *(dstRule + 41) = v7;
  v8 = *(pSrcRule + 41) & 4 | v7 & 0xFB;
  *(dstRule + 41) = v8;
  *(dstRule + 41) = *(pSrcRule + 41) & 1 | v8 & 0xFE;
  CResponseSystem::CopyCriteriaFrom(this, pSrcRule, dstRule, pCustomSystem);
  CResponseSystem::CopyResponsesFrom(this, pSrcRule, dstRule, pCustomSystem);
  ElementName = ResponseRulePartition::GetElementName(&this->m_RulePartitions, &iRulea);
  DictForRule = ResponseRulePartition::GetDictForRule(&pCustomSystem->m_RulePartitions, this, dstRule);
  v11 = ResponseCopyString(ElementName);
  v12 = HashStringConventional(v11);
  pCopyFrom.elem = v11;
  pCopyFrom.key = v12;
  m_Root = DictForRule->m_ReverseMap.m_Tree.m_Root;
  v27 = v12;
  if ( m_Root != 0xFFFF )
  {
    while ( 1 )
    {
      v16 = !DictForRule->m_ReverseMap.m_Tree.m_LessFunc.m_LessFunc(
               &pCopyFrom.key,
               &DictForRule->m_ReverseMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.key);
      m_pMemory = DictForRule->m_ReverseMap.m_Tree.m_Elements.m_pMemory;
      if ( v16 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v15 = 0;
        if ( m_Right == 0xFFFF )
          goto LABEL_10;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v15 = 1;
        if ( m_Right == 0xFFFF )
          goto LABEL_10;
      }
      m_Root = m_Right;
    }
  }
  m_Root = -1;
  v15 = 0;
LABEL_10:
  isLeft = v15;
  v18 = CUtlRBTree<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &DictForRule->m_ReverseMap.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,char const*,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &DictForRule->m_ReverseMap.m_Tree,
    v18,
    m_Root,
    isLeft);
  ++DictForRule->m_ReverseMap.m_Tree.m_NumElements;
  pCopyFrom.key = v27;
  pCopyFrom.elem = dstRule;
  v19 = DictForRule->m_Tree.m_Root;
  if ( v19 == 0xFFFF )
  {
    v19 = -1;
    v24 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v16 = !DictForRule->m_Tree.m_LessFunc.m_LessFunc(
             &pCopyFrom.key,
             &DictForRule->m_Tree.m_Elements.m_pMemory[v19].m_Data.key);
    v22 = DictForRule->m_Tree.m_Elements.m_pMemory;
    if ( v16 )
      break;
    m_Left = v22[v19].m_Left;
    v21 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_16;
LABEL_13:
    v19 = m_Left;
  }
  m_Left = v22[v19].m_Right;
  v21 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_13;
LABEL_16:
  v24 = v21;
LABEL_17:
  v23 = CUtlRBTree<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &DictForRule->m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,Rule *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &DictForRule->m_Tree,
    v23,
    v19,
    v24);
  ++DictForRule->m_Tree.m_NumElements;
}


// CResponseSystem::DumpRules  (line 1569, @0x00000000030f7bc0, libserver.so)  // inlines: BucketFromIdx, Count, First, IsValid, Next, PartFromIdx
// calls: ResponseRulePartition::GetElementName, Msg
void __fastcall CResponseSystem::DumpRules(CResponseSystem *const this)
{
  unsigned __int16 *p_m_NumElements; // rdx
  int v2; // eax
  ResponseRulePartition *p_m_RulePartitions; // r13
  const char *ElementName; // rax
  ResponseRulePartition::tIndex v6; // eax
  unsigned __int16 *v7; // rdx
  ResponseRulePartition::tIndex v8; // eax
  ResponseRulePartition::tIndex idx[9]; // [rsp+Ch] [rbp-24h] BYREF

  p_m_NumElements = &this->m_RulePartitions.m_RuleParts[0].m_Tree.m_NumElements;
  v2 = 0;
  while ( *p_m_NumElements == 0 )
  {
    ++v2;
    p_m_NumElements += 40;
    if ( v2 == 256 )
      return;
  }
  idx[0] = v2 << 16;
  if ( v2 <= 0xFFu )
  {
    p_m_RulePartitions = &this->m_RulePartitions;
    if ( this->m_RulePartitions.m_RuleParts[v2].m_Tree.m_NumElements != 0 )
    {
      while ( 1 )
      {
        ElementName = ResponseRulePartition::GetElementName(&this->m_RulePartitions, idx);
        Msg("%s\n", ElementName);
        v6 = HIWORD(idx[0]);
        if ( (idx[0] & 0x1FFF) + 1 >= p_m_RulePartitions->m_RuleParts[HIWORD(idx[0])].m_Tree.m_NumElements )
          break;
        v8 = idx[0] + 1;
LABEL_12:
        idx[0] = v8;
        if ( v8 == -1
          || HIWORD(v8) > 0xFFu
          || (v8 & 0x1FFF) >= p_m_RulePartitions->m_RuleParts[HIWORD(v8)].m_Tree.m_NumElements )
        {
          return;
        }
      }
      v7 = &this->m_RulePartitions.m_RuleParts[v6 + 1].m_Tree.m_NumElements;
      while ( ++v6 <= 255 )
      {
        v7 += 40;
        if ( *(v7 - 40) != 0 )
        {
          v8 = v6 << 16;
          goto LABEL_12;
        }
      }
    }
  }
}


// CResponseSystem::DumpDictionary  (line 1581, @0x00000000030f9b10, libserver.so)  // inlines: Base, BucketFromIdx, CUtlSymbol, Count, Element, First, IsValid, Next, PartFromIdx, SymbolToStr, operator[]
// calls: Msg, ResponseRulePartition::GetElementName, CUtlSymbolTable::String
// strings: "\nDictionary: %s\n", "\tRule %d/%d: %s\n", "\t\tCriteria %d: %s %s\n", "\t\tResponseGroup %d: %s\n", "\t\t\tResponse %d: %s\n"
void __fastcall CResponseSystem::DumpDictionary(CResponseSystem *const this, const char *pszName)
{
  unsigned __int16 *p_m_NumElements; // rdx
  int v4; // eax
  const char *ElementName; // rax
  __int64 v6; // r14
  CUtlMap<unsigned int,Rule*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // r13
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  __int64 v9; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v10; // rax
  const char *value; // r12
  char *v12; // rax
  unsigned __int64 m_nAllocated; // rax
  int v14; // ebx
  __int64 v15; // r12
  ResponseRulePartition::tIndex v16; // eax
  ResponseRulePartition::tIndex v17; // eax
  unsigned __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v19; // rax
  __int64 v20; // r13
  int v21; // r14d
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v22; // r15
  int m_nCount; // ebx
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v24; // rax
  const char *v25; // rdx
  int v26; // esi
  unsigned __int16 *v27; // rdx
  const ResponseRulePartition *p_m_RulePartitions; // [rsp+8h] [rbp-68h]
  int nResponseGroupCount; // [rsp+1Ch] [rbp-54h]
  int nResponseGroupCounta; // [rsp+1Ch] [rbp-54h]
  Rule *pRule; // [rsp+20h] [rbp-50h]
  UtlSymId_t v33[6]; // [rsp+30h] [rbp-40h] BYREF
  ResponseRulePartition::tIndex idx[13]; // [rsp+3Ch] [rbp-34h] BYREF

  Msg("\nDictionary: %s\n", pszName);
  p_m_NumElements = &this->m_RulePartitions.m_RuleParts[0].m_Tree.m_NumElements;
  v4 = 0;
  while ( *p_m_NumElements == 0 )
  {
    ++v4;
    p_m_NumElements += 40;
    if ( v4 == 256 )
      return;
  }
  idx[0] = v4 << 16;
  if ( v4 <= 0xFFu )
  {
    p_m_RulePartitions = &this->m_RulePartitions;
    if ( this->m_RulePartitions.m_RuleParts[v4].m_Tree.m_NumElements != 0 )
    {
      while ( 1 )
      {
        ElementName = ResponseRulePartition::GetElementName(p_m_RulePartitions, idx);
        Msg("\tRule %d/%d: %s\n", HIWORD(idx[0]), idx[0] & 0x1FFF, ElementName);
        pRule = p_m_RulePartitions->m_RuleParts[HIWORD(idx[0])].m_Tree.m_Elements.m_pMemory[idx[0] & 0x1FFF].m_Data.elem;
        if ( pRule->m_Criteria.m_nCount > 0 )
        {
          nResponseGroupCount = p_m_RulePartitions->m_RuleParts[HIWORD(idx[0])].m_Tree.m_Elements.m_pMemory[idx[0] & 0x1FFF].m_Data.elem->m_Criteria.0;
          v6 = 0;
          elem = p_m_RulePartitions->m_RuleParts[HIWORD(idx[0])].m_Tree.m_Elements.m_pMemory[idx[0] & 0x1FFF].m_Data.elem;
          do
          {
            m_nAllocated = elem->m_Criteria.m_nAllocated;
            v14 = v6;
            if ( m_nAllocated != 0 )
            {
              if ( m_nAllocated > 6 )
                m_pElements = elem->m_Criteria.m_pElements;
              else
                m_pElements = (&elem->m_Criteria.m_nAllocAllocated + 1);
            }
            else
            {
              m_pElements = 0;
            }
            v9 = m_pElements[v6++];
            v10 = &this->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory[v9];
            value = v10->m_Data.elem.value;
            v33[0] = v10->m_Data.elem.nameSym.m_Id;
            v12 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, v33);
            Msg("\t\tCriteria %d: %s %s\n", v14, v12, value);
          }
          while ( nResponseGroupCount > v6 );
        }
        v15 = 0;
        nResponseGroupCounta = pRule->m_Responses.m_nCount;
        if ( nResponseGroupCounta > 0 )
        {
          do
          {
            v18 = pRule->m_Responses.m_nAllocated;
            if ( v18 != 0 )
            {
              if ( v18 <= 6 )
                v19 = (&pRule->m_Responses.m_nAllocAllocated + 1);
              else
                v19 = pRule->m_Responses.m_pElements;
            }
            else
            {
              v19 = 0;
            }
            v20 = 0;
            v21 = 0;
            v22 = &this->m_Responses.m_Elements.m_Tree.m_Elements.m_pMemory[v19[v15]];
            Msg("\t\tResponseGroup %d: %s\n", v15, v22->m_Data.key);
            m_nCount = v22->m_Data.elem.group.m_nCount;
            if ( m_nCount > 0 )
            {
              do
              {
                if ( v22->m_Data.elem.group.m_nAllocated != 0 )
                  v24 = v22->m_Data.elem.group.m_pElements;
                else
                  v24 = 0;
                v25 = v24[v20].value;
                v26 = v21++;
                ++v20;
                Msg("\t\t\tResponse %d: %s\n", v26, v25);
              }
              while ( m_nCount > v21 );
            }
            ++v15;
          }
          while ( nResponseGroupCounta > v15 );
        }
        v16 = HIWORD(idx[0]);
        if ( (idx[0] & 0x1FFF) + 1 >= p_m_RulePartitions->m_RuleParts[HIWORD(idx[0])].m_Tree.m_NumElements )
          break;
        v17 = idx[0] + 1;
LABEL_16:
        idx[0] = v17;
        if ( v17 == -1
          || HIWORD(v17) > 0xFFu
          || (v17 & 0x1FFF) >= p_m_RulePartitions->m_RuleParts[HIWORD(v17)].m_Tree.m_NumElements )
        {
          return;
        }
      }
      v27 = &this->m_RulePartitions.m_RuleParts[v16 + 1].m_Tree.m_NumElements;
      while ( ++v16 <= 255 )
      {
        v27 += 40;
        if ( *(v27 - 40) != 0 )
        {
          v17 = v16 << 16;
          goto LABEL_16;
        }
      }
    }
  }
}


// ResponseRulePartition::GetBucketForSpeakerAndConcept  (line 1622, @0x00000000030f9e50, libserver.so)  // inlines: HashStringFastCaseless
// calls: MurmurHash2LowerCase
// callers: ResponseRulePartition::GetDictForRule, ResponseRulePartition::GetDictsForCriteria
unsigned int __fastcall ResponseRulePartition::GetBucketForSpeakerAndConcept(
        ResponseRulePartition *const this,
        const char *pszSpeaker,
        const char *pszConcept,
        const char *pszSubject)
{
  unsigned __int8 v4; // r12
  uint32 v6; // eax

  v4 = 0;
  if ( pszConcept != 0 )
    v4 = MurmurHash2LowerCase(pszConcept, 0x3501A674u);
  LOBYTE(v6) = 0;
  if ( pszSubject != 0 )
    v6 = MurmurHash2LowerCase(pszSubject, 0x3501A674u) >> 3;
  return v4 ^ v6;
}


// Rule::GetValueForRuleCriterionByName  (line 1635, @0x00000000030f9f80, libserver.so)  // inlines: Base, Element, operator[]
// calls: Rule::RecursiveGetValueForRuleCriterionByName
// callers: ResponseRulePartition::GetDictForRule
const char *__fastcall Rule::GetValueForRuleCriterionByName(
        Rule *const this,
        CResponseSystem *pSystem,
        const CUtlSymbol *const pCritNameSym)
{
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t m_nAllocated; // r13
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // r15
  unsigned __int64 v7; // r14
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  const char *result; // rax
  __int64 v10; // [rsp+10h] [rbp-40h]

  if ( this->m_Criteria.m_nCount <= 0 )
    return 0;
  m_nAllocated = this->m_Criteria.m_nAllocated;
  m_pMemory = pSystem->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
  v7 = 0;
  v10 = 2LL * (this->m_Criteria.m_nCount - 1) + 2;
  do
  {
    if ( m_nAllocated != 0 )
    {
      m_pElements = (&this->m_Criteria.m_nAllocAllocated + 1);
      if ( m_nAllocated > 6 )
        m_pElements = this->m_Criteria.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    result = Rule::RecursiveGetValueForRuleCriterionByName(
               this,
               pSystem,
               &m_pMemory[m_pElements[v7 / 2]].m_Data.elem,
               pCritNameSym);
    if ( result != 0 )
      break;
    v7 += 2LL;
  }
  while ( v7 != v10 );
  return result;
}


// Rule::GetPointerForRuleCriterionByName  (line 1652, @0x00000000030fa100, libserver.so)  // inlines: Base, Element, operator[]
// calls: Rule::RecursiveGetPointerForRuleCriterionByName
// callers: ResponseRulePartition::GetDictForRule
const Criteria *__fastcall Rule::GetPointerForRuleCriterionByName(
        Rule *const this,
        CResponseSystem *pSystem,
        const CUtlSymbol *const pCritNameSym)
{
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t m_nAllocated; // r13
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // r15
  unsigned __int64 v7; // r14
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  const Criteria *result; // rax
  __int64 v10; // [rsp+10h] [rbp-40h]

  if ( this->m_Criteria.m_nCount <= 0 )
    return 0;
  m_nAllocated = this->m_Criteria.m_nAllocated;
  m_pMemory = pSystem->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
  v7 = 0;
  v10 = 2LL * (this->m_Criteria.m_nCount - 1) + 2;
  do
  {
    if ( m_nAllocated != 0 )
    {
      m_pElements = (&this->m_Criteria.m_nAllocAllocated + 1);
      if ( m_nAllocated > 6 )
        m_pElements = this->m_Criteria.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    result = Rule::RecursiveGetPointerForRuleCriterionByName(
               this,
               pSystem,
               &m_pMemory[m_pElements[v7 / 2]].m_Data.elem,
               pCritNameSym);
    if ( result != 0 )
      break;
    v7 += 2LL;
  }
  while ( v7 != v10 );
  return result;
}


// Rule::RecursiveGetValueForRuleCriterionByName  (line 1669, @0x00000000030f9ea0, libserver.so)  // inlines: Base, Element, operator[]
// callers: Rule::GetValueForRuleCriterionByName
const char *__fastcall Rule::RecursiveGetValueForRuleCriterionByName(
        Rule *const this,
        CResponseSystem *pSystem,
        const Criteria *pCrit,
        const CUtlSymbol *const pCritNameSym)
{
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t m_nAllocated; // r13
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // r15
  unsigned __int64 v8; // r14
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  const char *result; // rax
  __int64 v11; // [rsp+8h] [rbp-48h]

  if ( pCrit == 0 )
    return 0;
  if ( pCrit->subcriteria.m_nCount <= 0 )
  {
    result = 0;
    if ( pCrit->nameSym.m_Id == pCritNameSym->m_Id )
      return pCrit->value;
  }
  else
  {
    m_nAllocated = pCrit->subcriteria.m_nAllocated;
    m_pMemory = pSystem->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
    v8 = 0;
    v11 = 2LL * (pCrit->subcriteria.m_nCount - 1) + 2;
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pCrit->subcriteria.m_nAllocAllocated + 1);
        if ( m_nAllocated > 6 )
          m_pElements = pCrit->subcriteria.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      result = Rule::RecursiveGetValueForRuleCriterionByName(
                 this,
                 pSystem,
                 &m_pMemory[m_pElements[v8 / 2]].m_Data.elem,
                 pCritNameSym);
      if ( result != 0 )
        break;
      v8 += 2LL;
      if ( v8 == v11 )
        return 0;
    }
  }
  return result;
}


// Rule::RecursiveGetPointerForRuleCriterionByName  (line 1701, @0x00000000030fa020, libserver.so)  // inlines: Base, Element, operator[]
// callers: Rule::GetPointerForRuleCriterionByName
const Criteria *__fastcall Rule::RecursiveGetPointerForRuleCriterionByName(
        Rule *const this,
        CResponseSystem *pSystem,
        const Criteria *pCrit,
        const CUtlSymbol *const pCritNameSym)
{
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t m_nAllocated; // r13
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // r15
  unsigned __int64 v8; // r14
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rax
  const Criteria *result; // rax
  __int64 v11; // [rsp+8h] [rbp-48h]

  if ( pCrit == 0 )
    return 0;
  if ( pCrit->subcriteria.m_nCount <= 0 )
  {
    if ( pCrit->nameSym.m_Id == pCritNameSym->m_Id )
      return pCrit;
    return 0;
  }
  m_nAllocated = pCrit->subcriteria.m_nAllocated;
  m_pMemory = pSystem->m_Criteria.m_Elements.m_Tree.m_Elements.m_pMemory;
  v8 = 0;
  v11 = 2LL * (pCrit->subcriteria.m_nCount - 1) + 2;
  while ( 1 )
  {
    if ( m_nAllocated != 0 )
    {
      m_pElements = (&pCrit->subcriteria.m_nAllocAllocated + 1);
      if ( m_nAllocated > 6 )
        m_pElements = pCrit->subcriteria.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    result = Rule::RecursiveGetPointerForRuleCriterionByName(
               this,
               pSystem,
               &m_pMemory[m_pElements[v8 / 2]].m_Data.elem,
               pCritNameSym);
    if ( result != 0 )
      break;
    v8 += 2LL;
    if ( v8 == v11 )
      return 0;
  }
  return result;
}


