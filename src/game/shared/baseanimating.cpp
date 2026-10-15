// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimating.cpp:126
class CAnimDebugMgr {
	struct DebugSeqInfo_t {
		float m_flTime;  // +0x0
		float m_flCycle;  // +0x4
		float m_flWeight;  // +0x8

		DebugSeqInfo_t();
		~DebugSeqInfo_t();
		DebugSeqInfo_t(const DebugSeqInfo_t &);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int m_nCurrent;  // +0x60
	int m_nLastSpew;  // +0x64
	CAnimDebugMgr();
	void AddEntry(float, const char *, float, float, const char *);
	void Spew();
	~CAnimDebugMgr();

	// sizeof = 104
};

// src/game/shared/baseanimating.cpp:265
class C_CBaseAnimating_MapInstall {
	C_CBaseAnimating_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DevMsgRT  (line 110, @0x0000000002061aa0, libserver.so)
// calls: V_vsnprintf, DevMsg
// callers: CBaseAnimating::SetMovementPoseParams, CAnimDebugMgr::Spew
// globals: DevMsgRT(char const*,...)::string
void DevMsgRT(const char *pMsg, ...)
{
  va_list argptr; // [rsp+8h] [rbp-C8h] BYREF

  va_start(argptr, pMsg);
  V_vsnprintf(DevMsgRT(char const*,...)::string, 1024, pMsg, argptr);
  DevMsg(1, "%s", DevMsgRT(char const*,...)::string);
}


// CAnimDebugMgr::~CAnimDebugMgr  (line 126, @0x00000000020979f0, libserver.so)  // inlines: Purge, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlDict<CAnimDebugMgr::DebugSeqInfo_t, int>::Purge, CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
void __fastcall CAnimDebugMgr::~CAnimDebugMgr(CAnimDebugMgr *const this)
{
  CAnimDebugMgr *p_m_nCurrent; // rbx

  if ( this != 0 )
  {
    p_m_nCurrent = &this->m_nCurrent;
    do
    {
      p_m_nCurrent = (p_m_nCurrent - 48);
      CUtlDict<CAnimDebugMgr::DebugSeqInfo_t,int>::Purge(p_m_nCurrent->m_DebugInfo);
      CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(p_m_nCurrent);
      if ( (p_m_nCurrent->m_DebugInfo[0].m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&p_m_nCurrent->m_DebugInfo[0].m_Elements.m_Tree.m_Elements);
    }
    while ( this != p_m_nCurrent );
  }
}


// CAnimDebugMgr::CAnimDebugMgr  (line 149, @0x00000000020883c0, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetCompareType, SetLessFunc
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CAnimDebugMgr::CAnimDebugMgr(CAnimDebugMgr *const this)
{
  this->m_DebugInfo[0].m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_Root = -1;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_NumElements = 0;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_FirstFree = -1;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_pElements = 0;
  this->m_DebugInfo[0].m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_Root = -1;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_NumElements = 0;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_FirstFree = -1;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_pElements = 0;
  this->m_DebugInfo[1].m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_nCurrent = 0;
  this->m_nLastSpew = 0;
}


// CAnimDebugMgr::AddEntry  (line 153, @0x000000000208b7a0, libserver.so)  // inlines: CUtlString, DebugSeqInfo_t, Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, operator(), operator[], strcpy, ~CUtlString, ~DebugSeqInfo_t, ~Node_t
// calls: CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, CUtlString::FreeMemoryBlock, CUtlString::operator=, CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, _Unwind_Resume, strcpy
// callers: DebugSequenceMsg
void __fastcall CAnimDebugMgr::AddEntry(
        CAnimDebugMgr *const this,
        float flTime,
        const char *pSequenceName,
        float flCycle,
        float flWeight,
        const char *pContext)
{
  __int64 v8; // rax
  CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int> > *v9; // rbx
  int v10; // eax
  const char *v11; // rsi
  __int64 v12; // rdi
  CUtlString *v13; // rdi
  char *v14; // rax
  int m_Root; // r15d
  bool v16; // r12
  int m_Right; // eax
  bool v18; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  char *v20; // rax
  int v21; // [rsp+0h] [rbp-60h]
  int v22; // [rsp+0h] [rbp-60h]
  CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+10h] [rbp-50h] BYREF

  v8 = 48LL * this->m_nCurrent;
  v9 = (this + v8);
  if ( pSequenceName == 0 )
  {
    v14 = 0;
LABEL_9:
    m_Root = v9->m_Root;
    search.elem.m_Context.m_pString = 0;
    search.key = v14;
    if ( m_Root == -1 )
    {
      v16 = 0;
    }
    else
    {
      while ( 1 )
      {
        v18 = !v9->m_LessFunc.m_LessFunc(&search.key, &v9->m_Elements.m_pMemory[m_Root].m_Data.key);
        m_pMemory = v9->m_Elements.m_pMemory;
        if ( v18 )
        {
          m_Right = m_pMemory[m_Root].m_Right;
          v16 = 0;
        }
        else
        {
          m_Right = m_pMemory[m_Root].m_Left;
          v16 = 1;
        }
        if ( m_Right == -1 )
          break;
        m_Root = m_Right;
      }
    }
    v22 = CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
            v9,
            &search);
    CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
      v9,
      v22,
      m_Root,
      v16);
    v10 = v22;
    ++v9->m_NumElements;
    if ( search.elem.m_Context.m_pString != 0 )
    {
      CUtlString::FreeMemoryBlock(&search.elem.m_Context);
      v10 = v22;
    }
    goto LABEL_5;
  }
  search.key = pSequenceName;
  search.elem.m_Context.m_pString = 0;
  v10 = CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
          (this + v8),
          &search);
  if ( search.elem.m_Context.m_pString != 0 )
  {
    v21 = v10;
    CUtlString::FreeMemoryBlock(&search.elem.m_Context);
    v10 = v21;
  }
  if ( v10 == -1 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, strlen(pSequenceName) + 1);
    v14 = strcpy(v20, pSequenceName);
    goto LABEL_9;
  }
LABEL_5:
  v11 = "";
  v12 = &v9->m_Elements.m_pMemory[v10];
  if ( pContext != 0 )
    v11 = pContext;
  *(v12 + 24) = flTime;
  v13 = (v12 + 40);
  *(&v13[-2].m_pString + 1) = flCycle;
  *&v13[-1].m_pString = flWeight;
  CUtlString::operator=(v13, v11);
}


// CAnimDebugMgr::Spew  (line 170, @0x0000000002088460, libserver.so)  // inlines: CUtlString, DebugSeqInfo_t, Element, Find, First, FirstInorder, GetElementName, Key, LeftChild, Next, NextInorder, Node_t, String, operator[], ~CUtlString, ~DebugSeqInfo_t, ~Node_t
// calls: CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, CUtlString::FreeMemoryBlock, CUtlString::Get, DevMsgRT, CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlDict<CAnimDebugMgr::DebugSeqInfo_t, int>::Purge, _Unwind_Resume
// strings: "    %8.4f : %30s : %5.3f [%5.3f]: %4.2f %s\n", "--- %8.4f : %30s : %5.3f [%5.3f]: %4.2f %s\n"
void __fastcall CAnimDebugMgr::Spew(CAnimDebugMgr *const this)
{
  int tickcount; // eax
  __int64 m_nCurrent; // rdx
  int v3; // eax
  const CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int> > *p_m_Tree; // r14
  int m_Root; // r12d
  CUtlDict<CAnimDebugMgr::DebugSeqInfo_t,int> *v6; // r15
  UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rbx
  __int64 v8; // rax
  int m_Left; // ecx
  int v10; // eax
  float m_flCycle; // xmm0_4
  float v12; // xmm2_4
  const char *v13; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v14; // rbx
  const char *key; // r13
  const char *v16; // rax
  int v18; // [rsp+18h] [rbp-58h]
  float deltaCycle; // [rsp+1Ch] [rbp-54h]
  float deltaCyclea; // [rsp+1Ch] [rbp-54h]
  float deltaCycleb; // [rsp+1Ch] [rbp-54h]
  CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t v22[2]; // [rsp+20h] [rbp-50h] BYREF

  tickcount = gpGlobals->tickcount;
  if ( tickcount == this->m_nLastSpew )
    return;
  m_nCurrent = this->m_nCurrent;
  this->m_nLastSpew = tickcount;
  v3 = 1 - m_nCurrent;
  p_m_Tree = &this->m_DebugInfo[m_nCurrent].m_Elements.m_Tree;
  m_Root = p_m_Tree->m_Root;
  v6 = &this->m_DebugInfo[1 - m_nCurrent];
  if ( m_Root == -1 )
    goto LABEL_24;
  m_pMemory = p_m_Tree->m_Elements.m_pMemory;
  v8 = m_Root;
  m_Left = m_pMemory[m_Root].m_Left;
  if ( m_Left != -1 )
  {
    while ( 1 )
    {
      v8 = m_Left;
      if ( m_pMemory[m_Left].m_Left == -1 )
        break;
      m_Left = m_pMemory[m_Left].m_Left;
    }
    m_Root = m_Left;
  }
  while ( 1 )
  {
    v14 = &m_pMemory[v8];
    key = v14->m_Data.key;
    deltaCycle = v14->m_Data.elem.m_flCycle;
    if ( key != 0 )
    {
      v22[0].elem.m_Context.m_pString = 0;
      v22[0].key = key;
      v10 = CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
              &v6->m_Elements.m_Tree,
              v22);
      if ( v22[0].elem.m_Context.m_pString != 0 )
      {
        v18 = v10;
        CUtlString::FreeMemoryBlock(&v22[0].elem.m_Context);
        v10 = v18;
      }
      if ( v10 != -1 )
        deltaCycle = v6->m_Elements.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem.m_flCycle;
      m_flCycle = v14->m_Data.elem.m_flCycle;
      v12 = m_flCycle - deltaCycle;
      if ( (m_flCycle - deltaCycle) >= 0.0 )
      {
LABEL_13:
        if ( v12 >= 0.0 )
          goto LABEL_14;
        goto LABEL_22;
      }
    }
    else
    {
      m_flCycle = v14->m_Data.elem.m_flCycle;
      v12 = deltaCycle - deltaCycle;
      if ( (deltaCycle - deltaCycle) >= 0.0 )
        goto LABEL_13;
    }
    if ( m_flCycle < 0.5 && deltaCycle > 0.5 )
    {
      v12 = v12 + 1.0;
      if ( v12 >= 0.0 )
      {
LABEL_14:
        deltaCyclea = v12;
        v13 = CUtlString::Get(&v14->m_Data.elem.m_Context);
        DevMsgRT(
          "    %8.4f : %30s : %5.3f [%5.3f]: %4.2f %s\n",
          key,
          v13,
          v14->m_Data.elem.m_flTime,
          v14->m_Data.elem.m_flCycle,
          deltaCyclea,
          v14->m_Data.elem.m_flWeight);
        goto LABEL_15;
      }
    }
LABEL_22:
    deltaCycleb = v12;
    v16 = CUtlString::Get(&v14->m_Data.elem.m_Context);
    DevMsgRT(
      "--- %8.4f : %30s : %5.3f [%5.3f]: %4.2f %s\n",
      key,
      v16,
      v14->m_Data.elem.m_flTime,
      v14->m_Data.elem.m_flCycle,
      deltaCycleb,
      v14->m_Data.elem.m_flWeight);
LABEL_15:
    m_Root = CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
               p_m_Tree,
               m_Root);
    if ( m_Root == -1 )
      break;
    m_pMemory = p_m_Tree->m_Elements.m_pMemory;
    v8 = m_Root;
  }
  v3 = 1 - this->m_nCurrent;
LABEL_24:
  this->m_nCurrent = v3;
  CUtlDict<CAnimDebugMgr::DebugSeqInfo_t,int>::Purge(v6);
}


// DebugSequenceMsg  (line 223, @0x000000000208b980, libserver.so)
// calls: CAnimDebugMgr::AddEntry
// globals: g_AnimDbgMgr
void __fastcall DebugSequenceMsg(
        float a1,
        float flTime,
        const char *pSequenceName,
        float flCycle,
        float flWeight,
        const char *pContext)
{
  CAnimDebugMgr::AddEntry(&g_AnimDbgMgr, a1, pSequenceName, flTime, flCycle, pContext);
}


// CBaseAnimating::GetDataDescMap  (line 229, @0x0000000002058830, libserver.so)
// globals: CBaseAnimating::m_DataMap
datamap_t *__fastcall CBaseAnimating::GetDataDescMap(CBaseAnimating *const this)
{
  return &CBaseAnimating::m_DataMap;
}


// CBaseAnimating::AddDatadescMetadataKeys  (line 229, @0x0000000002061b60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseAnimating::GetEntityClass(void)
void __fastcall CBaseAnimating::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseAnimating::GetEntityClass);
}


// CBaseAnimating::GetBaseMap  (line 229, @0x0000000002061b80, libserver.so)
// globals: CBaseModelEntity::m_DataMap
datamap_t *__cdecl CBaseAnimating::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CBaseAnimating>  (line 229, @0x0000000002061b90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBaseAnimating"
// globals: `guard variable for'DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder, `guard variable for'DataMapInit<CBaseAnimating>(CBaseAnimating *)::dataDesc, CBaseModelEntity::m_DataMap, CBaseAnimating::GetEntityClass(void), CBaseAnimating::m_DataMap, DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseAnimating>(CBaseAnimating *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder.m_pszBase = "CBaseAnimating";
    DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseAnimating>(CBaseAnimating *)::nameHolder,
      &_dso_handle);
  }
  CBaseAnimating::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseAnimating>(CBaseAnimating *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseAnimating>(CBaseAnimating *)::dataDesc) != 0 )
  {
    DataMapInit<CBaseAnimating>(CBaseAnimating *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseAnimating>(CBaseAnimating *)::dataDesc);
  }
  CBaseAnimating::m_DataMap.dataNumFields = 12;
  CBaseAnimating::m_DataMap.dataDesc = &DataMapInit<CBaseAnimating>(CBaseAnimating *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseAnimating::m_DataMap, CBaseAnimating::GetEntityClass);
  return &CBaseAnimating::m_DataMap;
}


// CBaseAnimating::YouForgotToImplementOrDeclareServerClass  (line 265, @0x0000000002058840, libserver.so)
int __fastcall CBaseAnimating::YouForgotToImplementOrDeclareServerClass(CBaseAnimating *const this)
{
  return 0;
}


// CBaseAnimating::GetServerClass  (line 265, @0x000000000205e070, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseAnimating::GetServerClass(CBaseAnimating *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CBaseAnimating::CBaseAnimating  (line 283, @0x000000000206e7c0, libserver.so)  // inlines: CEntityIOOutput, CNetworkVarBase, CNetworkVectorBase, EnsureValidValue, EnsureValidValue<int>, EnsureValidValue<unsigned char>, NetworkStateChanged, Set, SetGlobalFadeScale, Zero, operator=<float>, operator=<int>
// calls: CBaseModelEntity::CBaseModelEntity, CHitboxComponent::CHitboxComponent, CGlowProperty::Init, CNetworkTransmitComponent::StateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume, CHitboxComponent::~CHitboxComponent
// callers: CBaseAnimating::CEntityInstanceEntityClass::ConstructInstance, CBaseProp::CEntityInstanceEntityClass::ConstructInstance, CDevtestHierarchy2::CEntityInstanceEntityClass::ConstructInstance, CRagGib::CEntityInstanceEntityClass::ConstructInstance, CGib::CEntityInstanceEntityClass::ConstructInstance, CWaterBullet::CEntityInstanceEntityClass::ConstructInstance, CBaseAnimatingOverlay::CBaseAnimatingOverlay, CBreakableProp::CBreakableProp, CBaseVRHandAttachment::CBaseVRHandAttachment, CBaseCombatWeapon::CBaseCombatWeapon, CPointCommentaryNode::CEntityInstanceEntityClass::ConstructInstance, CItemSoda::CEntityInstanceEntityClass::ConstructInstance (36 total)
void __fastcall CBaseAnimating::CBaseAnimating(CBaseAnimating *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // r12
  bool v3; // zf

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::CHitboxComponent(p_m_CHitboxComponent);
  this->m_vecForce.m_Value.z = 0.0;
  this->m_vecForce.m_Value.y = 0.0;
  v3 = this->m_flFadeScale.m_Value == 1.0;
  this->m_vecForce.m_Value.x = 0.0;
  this->m_nForceBone.m_Value = 0;
  this->m_nMuzzleFlashParity.m_Value = 0;
  this->m_OnIgnite._vptr_CEntityIOOutput = off_3F7C190;
  if ( !v3 )
  {
    CNetworkTransmitComponent::StateChanged(&this->m_NetworkTransmitComponent, this, 0x444u, -1, -1);
    this->m_flFadeScale.m_Value = 1.0;
  }
  if ( this->m_nMuzzleFlashParity.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1185, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nMuzzleFlashParity.m_Value = 0;
  }
  this->m_bModelIsLocked = 0;
  CGlowProperty::Init(&this->m_Glow, this);
}


// CBaseAnimating::GetBaseAnimatingController  (line 305, @0x0000000002061cb0, libserver.so)  // inlines: GetSkeletonInstance
// callers: CBaseEntity::SetAnimTime, CNetworkedSequenceOperation::OnSequenceCycleChanged, CSkeletonInstance::ApplyIKBones, CBaseCombatWeapon::SetActivity, CBaseCombatWeapon::Operator_FrameUpdate, CBasePlayerAnimState::ComputeMainSequence, CBasePlayerAnimState::ComputePlaybackRate, CBaseCombatWeapon::DefaultReload, CBaseCombatWeapon::SetIdealActivity, CBaseCombatWeapon::Drop, CBaseCombatCharacter::CorpseFade, CBaseFlex::HandleStartGestureSceneEvent (48 total)
CBaseAnimatingController *__fastcall CBaseAnimating::GetBaseAnimatingController(CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return *(v1 + 736);
  else
    return 0;
}


// CBaseAnimating::GetBaseAnimatingController  (line 313, @0x0000000002061ce0, libserver.so)  // inlines: GetSkeletonInstance
// callers: CBaseAnimating::IsActivityFinished, CBaseAnimating::IsSequenceFinished, CNetworkedSequenceOperation::OnSequenceCycleChanged, CBaseCombatWeapon::Operator_FrameUpdate, CBasePlayerAnimState::ComputeMainSequence, CBasePlayerAnimState::ComputeAimSequence, CBaseCombatWeapon::MaintainIdealActivity, CBaseCombatWeapon::SetIdealActivity, CBasePlayerAnimState::DebugShowAnimState, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::ItemPostFrame, CBaseViewModel::FadePreviousLayer (40 total)
const CBaseAnimatingController *__fastcall CBaseAnimating::GetBaseAnimatingController(const CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return *(v1 + 736);
  else
    return 0;
}


// CBaseAnimating::ShouldAnimateDuringGameplayPause  (line 321, @0x0000000002061d10, libserver.so)
// callers: CDOTAAnimState::UpdateGestureLayer
bool __fastcall CBaseAnimating::ShouldAnimateDuringGameplayPause(const CBaseAnimating *const this)
{
  return this->m_worldGroupId.m_nHashCode != 0;
}


// CBaseAnimating::AddedToEntityDatabase  (line 334, @0x0000000002059590, libserver.so)
// calls: CBaseEntity::AddedToEntityDatabase
// callers: CEconEntity::AddedToEntityDatabase
void __fastcall CBaseAnimating::AddedToEntityDatabase(CBaseAnimating *const this)
{
  CBaseEntity::AddedToEntityDatabase(this);
}


// CBaseAnimating::Spawn  (line 343, @0x000000000207efc0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, MakeStringToken, Min<long long unsigned int>, Min<unsigned int>, TempString, atoi, operator[]
// calls: CBaseEntity::Spawn, CBaseAnimating::GetModelPtr, CEntityKeyValues::HasValue, CModel::flags, CBaseEntity::AddEffects, CBaseAnimating::SetSkin, strtol, VariantFieldTypeName, Warning, MurmurHash2LowerCase, RegisterStringToken, _Unwind_Resume
// callers: CDevtestHierarchy2::Spawn, CBaseProp::Spawn, CBaseVRHandAttachment::Spawn, CBaseCombatCharacter::Spawn, CBaseCombatWeapon::Spawn, CBaseViewModel::Spawn, CPointCommentaryNode::Spawn, CEnvAirStrikeOutdoorEffect::Spawn, CItemSoda::Spawn, CEnvAirStrikeIndoorEffect::Spawn, CEnvEffectsScript::Spawn, CFish::Spawn (28 total)
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_207F0FB
void __fastcall CBaseAnimating::Spawn(CBaseAnimating *const this, const CEntityKeyValues *pKeyValues)
{
  const CModel *ModelPtr; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *v12; // rsi
  const char *v13; // rax
  const char *m_uint64; // rbx
  CUtlStringToken v15; // esi
  uint32 v16; // eax
  uint32 v17; // [rsp+Ch] [rbp-14h]

  CBaseEntity::Spawn(this, pKeyValues);
  if ( CBaseAnimating::GetModelPtr(this) != 0 && CEntityKeyValues::HasValue(pKeyValues, 2020856412) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == 2020856412 )
          {
LABEL_15:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v9 = pKeyValues->m_keyValues.m_pElements;
            else
              v9 = 0;
            p_m_value = &v9[i].m_value;
            goto LABEL_19;
          }
        }
        else if ( *(4 * i) == 2020856412 )
        {
          goto LABEL_15;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_19:
    m_type = p_m_value->m_type;
    if ( m_type == 30 )
    {
      m_uint64 = p_m_value->m_uint64;
      v15.m_nHashCode = 0;
      if ( p_m_value->m_uint64 != 0 && *m_uint64 != 0 )
      {
        v16 = MurmurHash2LowerCase(p_m_value->m_pszString, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          v17 = v16;
          RegisterStringToken(v16, m_uint64, 0, 1);
          v15.m_nHashCode = v17;
        }
        else
        {
          v15.m_nHashCode = v16;
        }
      }
      CBaseAnimating::SetSkin(this, v15);
    }
    else if ( m_type == 38 )
    {
      CBaseAnimating::SetSkin(this, p_m_value->m_int);
    }
    else
    {
      switch ( m_type )
      {
        case 0:
          LODWORD(v12) = 0;
          break;
        case 1:
          LODWORD(v12) = p_m_value->m_float;
          break;
        case 5:
          LODWORD(v12) = p_m_value->m_int;
          break;
        case 6:
          LODWORD(v12) = p_m_value->m_char;
          break;
        case 26:
          LODWORD(v12) = 0x7FFFFFFF;
          if ( p_m_value->m_int64 <= 0x7FFFFFFF )
          {
            LODWORD(v12) = 0x80000000;
            if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
              v12 = p_m_value->m_uint64;
          }
          break;
        case 33:
          LODWORD(v12) = 0x7FFFFFFF;
          if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
            LODWORD(v12) = p_m_value->m_uint64;
          break;
        case 34:
          LODWORD(v12) = p_m_value->m_float64;
          break;
        case 37:
          LODWORD(v12) = 0x7FFFFFFF;
          if ( p_m_value->m_int <= 0x7FFFFFFEu )
            LODWORD(v12) = p_m_value->m_int;
          break;
        default:
          v13 = VariantFieldTypeName(m_type);
          Warning("No conversion from %s to int now\n", v13);
          LODWORD(v12) = 0;
          break;
      }
      CBaseAnimating::SetSkin(this, v12);
    }
  }
  if ( CBaseAnimating::GetModelPtr(this) != 0 )
  {
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    if ( (CModel::flags(ModelPtr) & 0x20000) != 0 )
      CBaseEntity::AddEffects(this, 16);
  }
}


// CBaseAnimating::Activate  (line 381, @0x0000000002059ae0, libserver.so)  // inlines: Activate
// calls: CBaseEntity::Activate, CCollisionProperty::UpdateLocateHandle
// callers: CBaseCombatWeapon::Activate, CBaseViewModel::Activate, CPointCommentaryNode::Activate, CEnvAirStrikeOutdoorEffect::Activate, CGenericFlexCycler::Activate, CItemGeneric::Activate, CRagdollProp::Activate, CBasePlayer::Activate, CPropHMDAvatar::Activate, CPropZipline::Activate, CDOTA_BaseNPC::Activate
void __fastcall CBaseAnimating::Activate(CBaseAnimating *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  CCollisionProperty::UpdateLocateHandle(&this->m_Collision);
}


// CBaseAnimating::UpdateOnRemove  (line 394, @0x0000000002059b50, libserver.so)  // inlines: UnlockStudioHdr
// calls: CGlowProperty::Reset, CBaseModelEntity::UpdateOnRemove
// callers: CBreakableProp::UpdateOnRemove, CBaseVRHandAttachment::UpdateOnRemove, CBaseCombatCharacter::UpdateOnRemove, CBaseViewModel::UpdateOnRemove, CItemGeneric::UpdateOnRemove, CRagdollProp::UpdateOnRemove, CPhysMagnet::UpdateOnRemove, CPropHMDAvatar::UpdateOnRemove, CPropVRHand::UpdateOnRemove, CPropZipline::UpdateOnRemove, CDOTA_Item_Physical::UpdateOnRemove, CDOTA_TempTree::UpdateOnRemove (13 total)
void __fastcall CBaseAnimating::UpdateOnRemove(CBaseAnimating *const this)
{
  if ( this->m_bModelIsLocked )
    this->m_bModelIsLocked = 0;
  CGlowProperty::Reset(&this->m_Glow);
  CBaseModelEntity::UpdateOnRemove(this);
}


// CBaseAnimating::SetTransmit  (line 438, @0x00000000020595c0, libserver.so)  // inlines: Get, IsAlreadyMarkedForTransmission, entindex
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::SetTransmit
// callers: CBaseCombatCharacter::SetTransmit, CBaseViewModel::SetTransmit, CPointCommentaryNode::SetTransmit
void __fastcall CBaseAnimating::SetTransmit(CBaseAnimating *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v6; // eax

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
    CBaseEntity::SetTransmit(this, pInfo, bAlways);
}


// CBaseAnimating::Restore  (line 451, @0x000000000205ac90, libserver.so)  // inlines: LockStudioHdr
// calls: CBaseEntity::Restore, CBaseAnimating::LockStudioHdr
// callers: CBaseCombatCharacter::Restore, CPropVehicle::Restore
int __fastcall CBaseAnimating::Restore(CBaseAnimating *const this, IRestore *const restore)
{
  int result; // eax
  int v4; // [rsp+Ch] [rbp-14h]

  result = CBaseEntity::Restore(this, restore);
  if ( !this->m_bModelIsLocked )
  {
    v4 = result;
    CBaseAnimating::LockStudioHdr(this);
    return v4;
  }
  return result;
}


// CBaseAnimating::PreDataUpdate  (line 464, @0x0000000002058850, libserver.so)
void __fastcall CBaseAnimating::PreDataUpdate(CBaseAnimating *const this, DataUpdateType_t updateType)
{
  ;
}


// CBaseAnimating::PostDataUpdate  (line 473, @0x00000000020595a0, libserver.so)
// calls: CEntityInstance::PostDataUpdate
void __fastcall CBaseAnimating::PostDataUpdate(CBaseAnimating *const this, DataUpdateType_t updateType)
{
  CEntityInstance::PostDataUpdate(this, updateType);
}


// CBaseAnimating::OnDataChanged  (line 499, @0x0000000002058860, libserver.so)
void __fastcall CBaseAnimating::OnDataChanged(CBaseAnimating *const this, DataUpdateType_t updateType)
{
  ;
}


// CBaseAnimating::OnSetDormant  (line 537, @0x00000000020595b0, libserver.so)
// calls: CBaseEntity::OnSetDormant
void __fastcall CBaseAnimating::OnSetDormant(
        CBaseAnimating *const this,
        EntityDormancyType_t nPrevDormancyType,
        EntityDormancyType_t nDormancyType)
{
  CBaseEntity::OnSetDormant(this, nPrevDormancyType, nDormancyType);
}


// CBaseAnimating::GetModelPtr  (line 555, @0x0000000002061d20, libserver.so)  // inlines: LockStudioHdr
// calls: CBaseEntity::GetModelData, CBaseEntity::GetModel, CBaseAnimating::LockStudioHdr
// callers: CBaseFlex::FindSceneFile, CBaseFlex::SetFlexWeight, CBaseFlex::GetFlexWeight, CBaseAnimating::ShadowCastType, CBaseAnimating::GetGlobalFadeScale, CBaseAnimating::SetBodygroup, CBaseAnimating::SetBodygroupByName, CBaseAnimating::GetBodygroup, CBaseAnimating::GetBodygroupName, CBaseAnimating::GetBodygroupPartName, CBaseAnimating::FindBodygroupByName, CBaseAnimating::GetBodygroupCount (77 total)
const CModel *__fastcall CBaseAnimating::GetModelPtr(const CBaseAnimating *const this)
{
  _QWORD v3[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_bModelIsLocked )
    return CBaseEntity::GetModelData(this);
  CBaseEntity::GetModel(v3, this);
  if ( v3[0] == 0 || this->m_bModelIsLocked )
    return CBaseEntity::GetModelData(this);
  CBaseAnimating::LockStudioHdr(this);
  return CBaseEntity::GetModelData(this);
}


// CBaseAnimating::ShadowCastType  (line 569, @0x0000000002061d80, libserver.so)
// calls: CBaseAnimating::GetModelPtr
ShadowType_t __fastcall CBaseAnimating::ShadowCastType(CBaseAnimating *const this)
{
  return CBaseAnimating::GetModelPtr(this) != 0 && (this->m_fEffects.m_Value & 0x30) == 0;
}


// CBaseAnimating::SetPredictable  (line 585, @0x0000000002058870, libserver.so)
void __fastcall CBaseAnimating::SetPredictable(CBaseAnimating *const this, bool state)
{
  ;
}


// CBaseAnimating::UpdateRelevantInterpolatedVars  (line 606, @0x0000000002061e00, libserver.so)
void __fastcall CBaseAnimating::UpdateRelevantInterpolatedVars(CBaseAnimating *const this)
{
  ;
}


// CBaseAnimating::GetGlobalFadeScale  (line 620, @0x0000000002061dc0, libserver.so)  // inlines: GetGlobalFadeScale
// calls: CBaseAnimating::GetModelPtr, CModel::flags
float __fastcall CBaseAnimating::GetGlobalFadeScale(const CBaseAnimating *const this)
{
  const CModel *ModelPtr; // rax
  ModelFlags_t v3; // eax
  float result; // xmm0_4

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return this->m_flFadeScale.m_Value;
  v3 = CModel::flags(ModelPtr);
  result = 0.0;
  if ( (BYTE1(v3) & 8) == 0 )
    return this->m_flFadeScale.m_Value;
  return result;
}


// CBaseAnimating::LockStudioHdr  (line 637, @0x000000000205ac60, libserver.so)
// calls: CBaseEntity::GetModel
// callers: CBaseAnimating::Restore, CBaseAnimating::OnNewModel, CBaseAnimating::GetModelPtr, CBaseAnimating::LockStudioHdr, CBaseAnimating::CopyAnimationDataFrom
void __fastcall CBaseAnimating::LockStudioHdr(CBaseAnimating *const this)
{
  HModel hModel; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::GetModel(&hModel, this);
  if ( hModel.m_pBinding != 0 )
    this->m_bModelIsLocked = 1;
}


// CBaseAnimating::LockStudioHdr  (line 637, @0x0000000002061e10, libserver.so)
// calls: CBaseAnimating::LockStudioHdr
void __fastcall CBaseAnimating::LockStudioHdr(CBaseAnimating *const this)
{
  if ( !this->m_bModelIsLocked )
    CBaseAnimating::LockStudioHdr(this);
}


// CBaseAnimating::UnlockStudioHdr  (line 649, @0x0000000002061e30, libserver.so)
void __fastcall CBaseAnimating::UnlockStudioHdr(CBaseAnimating *const this)
{
  if ( this->m_bModelIsLocked )
    this->m_bModelIsLocked = 0;
}


// CBaseAnimating::OnNewModel  (line 661, @0x000000000205bc40, libserver.so)  // inlines: CWeakHandle, Init, LockStudioHdr, NetworkStateChanged, Set, UnlockStudioHdr, operator=<int>
// calls: CBaseEntity::OnNewModel, CBaseEntity::GetModel, CBaseAnimating::LockStudioHdr
// callers: CBaseFlex::OnNewModel
void __fastcall CBaseAnimating::OnNewModel(CBaseAnimating *const this, HModel hOldModel, HModel hNewModel)
{
  HModel hOldModela; // [rsp+0h] [rbp-30h] BYREF
  HModel hNewModela; // [rsp+10h] [rbp-20h] BYREF

  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  hOldModela.m_pBinding = hOldModel.m_pBinding->m_pData;
  CBaseEntity::OnNewModel(this, &hOldModela, &hNewModela);
  if ( this->m_nForceBone.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nForceBone.m_Value = 0;
  }
  if ( this->m_bModelIsLocked )
    this->m_bModelIsLocked = 0;
  CBaseEntity::GetModel(&hNewModela, this);
  if ( hNewModela.m_pBinding != 0 && !this->m_bModelIsLocked )
    CBaseAnimating::LockStudioHdr(this);
}


// CBaseAnimating::GetPoseParameterNormalized  (line 713, @0x0000000002067d60, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetPoseParameterNormalized
float __fastcall CBaseAnimating::GetPoseParameterNormalized(CBaseAnimating *const this, int iPoseParameter)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetPoseParameterNormalized(*(v3 + 736), iPoseParameter);
  else
    return CBaseAnimatingController::GetPoseParameterNormalized(0, iPoseParameter);
}


// CBaseAnimating::StudioFrameAdvance  (line 722, @0x00000000020658d0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, ExitScope, GetAnimTime, GetBaseAnimatingController, GetElapsed, GetSkeletonInstance, GetTimebaseRegister, InTargetThread, IsEnabled, IsGamePaused, PLAT_CPU_TIME, ResetPrevAnimTime, ShouldAnimateDuringGameplayPause, curtime, ~CMicroProfilerGuard, ~CVProfScope
// calls: CBaseEntity::SetAnimTime, ThreadGetCurrentId, CBaseAnimating::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CGlobalVarsBase::curtime, Plat_FloatTime, LoggingSystem_Log, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), std::terminate(void), _Unwind_Resume (13 total)
// callers: CDevtestHierarchy::AnimationThink, CBaseAnimating::UpdateServerSideAnimation, CDynamicProp::AnimThink, CBaseCombatWeapon::Operator_FrameUpdate, CPointCommentaryNode::SpinThink, CEnvEffectsScript::Think, CEnvAirStrikeIndoorEffect::CrumbleThink, CEnvAirStrikeOutdoorEffect::CrumbleThink, CFlexCycler::FlexThink, CBasePlayer::PlayerDeathThink, CBasePlayer::PostThink, CPropVRHand::UpdatePoseOfAttachedEntity (14 total)
// strings: "SV", "%s:  %f tick(%d) curtime(%f) StudioFrameAdvance prev %f -> next %f [dt %f]\n", "BaseAnimating::StudioFrameAdvance", "Server Animation"
void __fastcall CBaseAnimating::StudioFrameAdvance(CBaseAnimating *const this, AnimationAdvanceType_t type)
{
  int m_enabled; // eax
  bool v5; // r13
  CGlobalVars *v6; // r15
  __int64 v7; // rax
  float v8; // xmm1_4
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  ThreadId_t v12; // r13
  uint64 v13; // rcx
  __int64 v14; // rax
  __m128 v15; // xmm0
  unsigned int tickcount; // r15d
  double v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  float v21; // xmm1_4
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  unsigned __int64 v23; // r15
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v25; // rdx
  ThreadId_t v26; // r13
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v29; // rax
  double v30; // [rsp+0h] [rbp-60h]
  float flPrevAnimTime; // [rsp+24h] [rbp-3Ch]
  float m_flCurrentTime; // [rsp+28h] [rbp-38h]
  ThreadId_t m_TargetThreadId; // [rsp+28h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v23 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "BaseAnimating::StudioFrameAdvance" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "BaseAnimating::StudioFrameAdvance",
                       0,
                       "Server Animation",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v29 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v29->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v25 = m_numTimeBaseTicks - v23 + __rdtsc();
    v6 = gpGlobals;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v25;
    if ( v6 != 0 )
      goto LABEL_3;
LABEL_31:
    m_flCurrentTime = 0.0;
    goto LABEL_5;
  }
  v6 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_31;
LABEL_3:
  if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
  {
    m_pfnWarningFunc = v6->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  m_flCurrentTime = v6->m_flCurrentTime;
LABEL_5:
  if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] != 0 && this->m_worldGroupId.m_nHashCode == 0 )
  {
    v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
    if ( v7 != 0 )
      v9 = *(v7 + 736);
    else
      v9 = 0;
    *(v9 + 88) = 0;
    CBaseEntity::SetAnimTime(this, m_flCurrentTime, v8, 3u);
    if ( v5 )
    {
      v11 = __rdtsc();
      if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0 )
        goto LABEL_14;
      v12 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v12 != ThreadGetCurrentId(v10) )
        goto LABEL_14;
      goto LABEL_36;
    }
  }
  else
  {
    flPrevAnimTime = this->m_flAnimTime.m_Value;
    if ( CBaseAnimating::IsSequenceDebugging(this) )
    {
      v14 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
      if ( v14 != 0 && *(v14 + 736) != 0 && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      {
        v15.m128_f32[0] = CGlobalVarsBase::curtime(gpGlobals, 0);
        v15.m128_u64[0] = _mm_unpacklo_ps(v15, v15).m128_u64[0];
        v30 = v15.m128_f32[0];
        tickcount = gpGlobals->tickcount;
        v17 = Plat_FloatTime(*v15.m128_u64);
        LoggingSystem_Log(
          LOG_SERVER,
          1,
          "%s:  %f tick(%d) curtime(%f) StudioFrameAdvance prev %f -> next %f [dt %f]\n",
          "SV",
          tickcount,
          v17,
          v30,
          flPrevAnimTime,
          m_flCurrentTime,
          (m_flCurrentTime - flPrevAnimTime));
      }
    }
    v18 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
    if ( v18 != 0 )
      v19 = *(v18 + 736);
    else
      v19 = 0;
    if ( (*(*v19 + 104LL))(v19, type, flPrevAnimTime, m_flCurrentTime) != 0 )
      CBaseEntity::SetAnimTime(this, m_flCurrentTime, v21, 3u);
    if ( v5 )
    {
      v11 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v26 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v26 != ThreadGetCurrentId(v20) )
          goto LABEL_14;
LABEL_36:
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
LABEL_14:
      v13 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v13 - v11 + __rdtsc();
    }
  }
}


// CBaseAnimating::StudioFrameAdvanceManual  (line 767, @0x000000000206a700, libserver.so)  // inlines: DOTAGameRules, GetBaseAnimatingController, GetSkeletonInstance, IsGamePaused, ResetPrevAnimTime, ShouldAnimateDuringGameplayPause, curtime
// calls: CBaseEntity::SetAnimTime, CBaseAnimatingController::AnimationFrameAdvanceManual
// callers: CBreakableProp::AnimateThink, CBreakableProp::OnAttemptPhysGunPickup
void __fastcall CBaseAnimating::StudioFrameAdvanceManual(CBaseAnimating *const this, double a2, double flInterval)
{
  CGlobalVars *v4; // rbx
  float m_flCurrentTime; // ebx
  __int64 v6; // rax
  float v7; // xmm1_4
  __int64 v8; // rax
  float v9; // xmm2_4
  CBaseAnimatingController *v10; // rdi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flIntervala; // [rsp+Ch] [rbp-14h]
  unsigned int flIntervalb; // [rsp+Ch] [rbp-14h]

  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        flIntervalb = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, *&flInterval);
        *&a2 = flIntervalb;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] != 0 && this->m_worldGroupId.m_nHashCode == 0 )
  {
    v6 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a2, flInterval);
    if ( v6 != 0 )
      v6 = *(v6 + 736);
    *(v6 + 88) = 0;
LABEL_10:
    CBaseEntity::SetAnimTime(this, m_flCurrentTime, v7, 1u);
    return;
  }
  flIntervala = *&a2;
  v8 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a2, flInterval);
  v10 = 0;
  if ( v8 != 0 )
    v10 = *(v8 + 736);
  if ( CBaseAnimatingController::AnimationFrameAdvanceManual(v10, m_flCurrentTime, flIntervala, v9) != 0 )
    goto LABEL_10;
}


// CBaseAnimating::SetModelScale  (line 791, @0x0000000002059780, libserver.so)  // inlines: DestroyDataObject, GetSkeletonInstance
// calls: CGameSceneNode::SetLocalScale, CEntityIdentity::DestroyDataObject
// callers: CDOTA_BaseNPC::SetModelScale, CDOTA_BaseNPC::UnitThink, CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CBaseAnimating::SetModelScale(CBaseAnimating *const this, double a2, float flScale)
{
  CGameSceneNode *v4; // rax
  float v5; // xmm1_4
  CEntityIdentity *m_pEntity; // rdi

  v4 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a2, flScale);
  CGameSceneNode::SetLocalScale(v4, v5);
  m_pEntity = this->m_pEntity;
  if ( (m_pEntity->m_fDataObjectTypes & 8) != 0 )
    CEntityIdentity::DestroyDataObject(m_pEntity, 3);
}


// CBaseAnimating::GetModelScale  (line 803, @0x0000000002061e50, libserver.so)  // inlines: GetSkeletonInstance
// callers: CPropVRHand::PostUpdateModifyPose, CDOTABody::GetAnimationSpeed, CDOTABehaviorAbilityPhase::BeginCast, CDOTA_BaseNPC::StartAbilityAnimation, CDOTA_BaseNPC::ManageModelChanges, CDOTA_BaseNPC::Spawn, CDOTA_Ability_Elder_Titan_AncestralSpirit::Spawn, CDOTA_Modifier_EarthSpirit_StoneThinker::OnCreated, CDOTA_Modifier_EarthSpirit_Petrify::OnCreated, CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnAttacked, CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX
float __fastcall CBaseAnimating::GetModelScale(const CBaseAnimating *const this)
{
  return *((*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode) + 212);
}


// CBaseAnimating::Script_SetModelScale  (line 808, @0x0000000002061e70, libserver.so)
void __fastcall CBaseAnimating::Script_SetModelScale(CBaseAnimating *const this, double a2, float flScale)
{
  (*(this->_vptr_IHandleEntity + 222))(this, a2, flScale);
}


// CBaseAnimating::HitboxToWorldTransforms  (line 817, @0x00000000020763f0, libserver.so)
// calls: CBaseAnimating::GetHitboxSet, CBaseAnimating::HitboxToWorldTransforms
int __fastcall CBaseAnimating::HitboxToWorldTransforms(
        const CBaseAnimating *const this,
        CUtlStringToken strHitBoxSet,
        matrix3x4a_t *pHitboxToWorld,
        int nTransformCount)
{
  const CHitBoxSet *HitboxSet; // rax

  HitboxSet = CBaseAnimating::GetHitboxSet(this, strHitBoxSet);
  return CBaseAnimating::HitboxToWorldTransforms(this, HitboxSet, pHitboxToWorld, nTransformCount);
}


// CBaseAnimating::HitboxToWorldTransforms  (line 827, @0x0000000002076050, libserver.so)  // inlines: CBoneAccessor, Cleanup, GetComponent<CBodyComponent>, GetModelData, GetWorldSpaceBones, GetWorldSpaceState, memcpy, operator const RuntimeClass_t*, operator=, operator[], ~CBoneAccessor
// calls: CHitBoxSet::numhitboxes, CSkeletonInstance::GetNumBones, CSkeletonInstance::CalcWorldSpaceBones, MatrixCopy, CModel::FindBoneIndexByHash, CBaseEntity::EntityToWorldTransform, operator delete [], CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CBaseAnimating::HitboxToWorldTransforms, CBaseAnimating::ComputeHitboxSurroundingBox, CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox
int __fastcall CBaseAnimating::HitboxToWorldTransforms(
        const CBaseAnimating *const this,
        const CHitBoxSet *pHitBoxSet,
        matrix3x4a_t *pHitboxToWorld,
        int nTransformCount)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  CSkeletonInstance *v12; // r12
  const CModel **v13; // rax
  const CModel *v14; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  int BoneIndexByHash; // eax
  matrix3x4a_t *transforms; // [rsp+10h] [rbp-50h]

  if ( pHitBoxSet == 0 )
    return 0;
  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v9 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v9 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v9 = 0;
  }
  v10 = *(v9 + 8);
  if ( v10 == 0 )
    return 0;
  v11 = (*(*v10 + 72LL))(v10);
  v12 = v11;
  if ( v11 == 0 )
    return 0;
  v13 = *(v11 + 480);
  if ( v13 == 0 )
    return 0;
  v14 = *v13;
  if ( *v13 == 0 || CHitBoxSet::numhitboxes(pHitBoxSet) == 0 )
    return 0;
  if ( CSkeletonInstance::GetNumBones(v12) != 0 )
  {
    if ( CHitBoxSet::numhitboxes(pHitBoxSet) <= nTransformCount )
      nTransformCount = CHitBoxSet::numhitboxes(pHitBoxSet);
    CSkeletonInstance::CalcWorldSpaceBones(v12, CModelSkeleton::BoneFlags_t::FLAG_HITBOX);
    transforms = v12->m_modelState.m_simulationState.m_pTransforms;
    if ( nTransformCount > 0 )
    {
      v16 = 0;
      v17 = 120 * ((nTransformCount - 1) + 1LL);
      do
      {
        while ( 1 )
        {
          BoneIndexByHash = CModel::FindBoneIndexByHash(
                              v14,
                              pHitBoxSet->m_HitBoxes.m_Memory.m_pMemory[v16 / 0x78].m_nBoneNameHash);
          if ( BoneIndexByHash < 0 )
            break;
          MatrixCopy(&transforms[BoneIndexByHash], pHitboxToWorld);
          v16 += 120LL;
          ++pHitboxToWorld;
          if ( v16 == v17 )
            return nTransformCount;
        }
        v16 += 120LL;
        ++pHitboxToWorld;
        pHitboxToWorld[-1] = *CBaseEntity::EntityToWorldTransform(this);
      }
      while ( v16 != v17 );
    }
    return nTransformCount;
  }
  else
  {
    *pHitboxToWorld = *CBaseEntity::EntityToWorldTransform(this);
    return 1;
  }
}


// CBaseAnimating::ComputeHitboxSurroundingBox  (line 879, @0x0000000002076430, libserver.so)  // inlines: Init, VectorMax, VectorMin, fpmax, fpmin, operator[]
// calls: CBaseAnimating::GetHitboxSet, CBaseAnimating::HitboxToWorldTransforms, TransformAABB
// callers: CCollisionProperty::ComputeHitboxSurroundingBox
bool __fastcall CBaseAnimating::ComputeHitboxSurroundingBox(
        CBaseAnimating *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  const CHitBoxSet *HitboxSet; // rax
  const CHitBoxSet *v7; // r12
  int v8; // eax
  matrix3x4a_t *v9; // r13
  unsigned __int64 v10; // r14
  const matrix3x4_t *v11; // rdi
  CHitBox *v12; // rsi
  __int64 v14; // [rsp+18h] [rbp-C058h]
  Vector vecBoxAbsMins; // [rsp+20h] [rbp-C050h] BYREF
  Vector vecBoxAbsMaxs; // [rsp+30h] [rbp-C040h] BYREF
  matrix3x4a_t hitboxmatrices[1024]; // [rsp+40h] [rbp-C030h] BYREF

  HitboxSet = CBaseAnimating::GetHitboxSet(this, 0);
  v7 = HitboxSet;
  if ( HitboxSet == 0 )
    return 0;
  if ( HitboxSet->m_HitBoxes.m_Size == 0 )
    return 0;
  v8 = CBaseAnimating::HitboxToWorldTransforms(this, HitboxSet, hitboxmatrices, 1024);
  if ( v8 == 0 )
    return 0;
  pVecWorldMins->x = 3.4028235e38;
  pVecWorldMins->y = 3.4028235e38;
  pVecWorldMins->z = 3.4028235e38;
  pVecWorldMaxs->x = -3.4028235e38;
  pVecWorldMaxs->y = -3.4028235e38;
  pVecWorldMaxs->z = -3.4028235e38;
  if ( v8 > 0 )
  {
    v9 = hitboxmatrices;
    v10 = 0;
    v14 = 120 * ((v8 - 1) + 1LL);
    do
    {
      v11 = v9;
      v12 = &v7->m_HitBoxes.m_Memory.m_pMemory[v10 / 0x78];
      v10 += 120LL;
      ++v9;
      TransformAABB(v11, &v12->m_vMinBounds, &v12->m_vMaxBounds, &vecBoxAbsMins, &vecBoxAbsMaxs);
      pVecWorldMins->x = fminf(pVecWorldMins->x, vecBoxAbsMins.x);
      pVecWorldMins->y = fminf(pVecWorldMins->y, vecBoxAbsMins.y);
      pVecWorldMins->z = fminf(pVecWorldMins->z, vecBoxAbsMins.z);
      pVecWorldMaxs->x = fmaxf(pVecWorldMaxs->x, vecBoxAbsMaxs.x);
      pVecWorldMaxs->y = fmaxf(pVecWorldMaxs->y, vecBoxAbsMaxs.y);
      pVecWorldMaxs->z = fmaxf(pVecWorldMaxs->z, vecBoxAbsMaxs.z);
    }
    while ( v10 != v14 );
  }
  return 1;
}


// CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox  (line 913, @0x00000000020765e0, libserver.so)  // inlines: Init, VectorMax, VectorMin, fpmax, fpmin, operator=, operator[]
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetHitboxSet, CBaseAnimating::HitboxToWorldTransforms, CBaseEntity::EntityToWorldTransform, MatrixInvert, ConcatTransforms, TransformAABB, CModel::FindBoneIndexByHash
// callers: CCollisionProperty::ComputeEntitySpaceHitboxSurroundingBox
bool __fastcall CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox(
        CBaseAnimating *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  const CHitBoxSet *HitboxSet; // rax
  matrix3x4a_t *v7; // rbx
  int v8; // eax
  int v9; // r12d
  matrix3x4_t *v10; // rax
  __int64 v11; // rax
  Vector *v12; // r12
  Vector *v13; // rax
  unsigned __int64 v14; // r13
  float *p_x; // r15
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  CHitBox *v22; // r14
  __int64 v24; // [rsp+28h] [rbp-C0C8h]
  const CModel *pModel; // [rsp+30h] [rbp-C0C0h]
  const CHitBoxSet *pSet; // [rsp+38h] [rbp-C0B8h]
  Vector vecBoxAbsMins; // [rsp+40h] [rbp-C0B0h] BYREF
  Vector vecBoxAbsMaxs; // [rsp+50h] [rbp-C0A0h] BYREF
  matrix3x4_t worldToEntity; // [rsp+60h] [rbp-C090h] BYREF
  matrix3x4_t boneToEntity; // [rsp+90h] [rbp-C060h] BYREF
  matrix3x4a_t hitboxbones[1024]; // [rsp+C0h] [rbp-C030h] BYREF

  pModel = CBaseAnimating::GetModelPtr(this);
  if ( pModel == 0 )
    return 0;
  HitboxSet = CBaseAnimating::GetHitboxSet(this, 0);
  pSet = HitboxSet;
  if ( HitboxSet == 0 || HitboxSet->m_HitBoxes.m_Size == 0 )
    return 0;
  v7 = hitboxbones;
  v8 = CBaseAnimating::HitboxToWorldTransforms(this, HitboxSet, hitboxbones, 1024);
  pVecWorldMins->x = 3.4028235e38;
  pVecWorldMins->y = 3.4028235e38;
  v9 = v8;
  pVecWorldMins->z = 3.4028235e38;
  pVecWorldMaxs->x = -3.4028235e38;
  pVecWorldMaxs->y = -3.4028235e38;
  pVecWorldMaxs->z = -3.4028235e38;
  v10 = CBaseEntity::EntityToWorldTransform(this);
  MatrixInvert(v10, &worldToEntity);
  if ( v9 > 0 )
  {
    v11 = (v9 - 1);
    v12 = pVecWorldMaxs;
    v24 = 120 * (v11 + 1);
    v13 = pVecWorldMins;
    v14 = 0;
    p_x = &v13->x;
    do
    {
      v22 = &pSet->m_HitBoxes.m_Memory.m_pMemory[v14 / 0x78];
      if ( CModel::FindBoneIndexByHash(pModel, v22->m_nBoneNameHash) >= 0 )
      {
        ConcatTransforms(&worldToEntity, v7, &boneToEntity);
        TransformAABB(&boneToEntity, &v22->m_vMinBounds, &v22->m_vMaxBounds, &vecBoxAbsMins, &vecBoxAbsMaxs);
        x = vecBoxAbsMins.x;
        y = vecBoxAbsMins.y;
        z = vecBoxAbsMins.z;
        v19 = vecBoxAbsMaxs.x;
        v20 = vecBoxAbsMaxs.y;
        v21 = vecBoxAbsMaxs.z;
      }
      else
      {
        x = v22->m_vMinBounds.x;
        y = v22->m_vMinBounds.y;
        z = v22->m_vMinBounds.z;
        vecBoxAbsMins.x = x;
        v19 = v22->m_vMaxBounds.x;
        vecBoxAbsMins.y = y;
        v20 = v22->m_vMaxBounds.y;
        vecBoxAbsMins.z = z;
        v21 = v22->m_vMaxBounds.z;
        vecBoxAbsMaxs.x = v19;
        vecBoxAbsMaxs.y = v20;
        vecBoxAbsMaxs.z = v21;
      }
      v14 += 120LL;
      ++v7;
      *p_x = fminf(*p_x, x);
      p_x[1] = fminf(p_x[1], y);
      p_x[2] = fminf(p_x[2], z);
      v12->x = fmaxf(v12->x, v19);
      v12->y = fmaxf(v12->y, v20);
      v12->z = fmaxf(v12->z, v21);
    }
    while ( v14 != v24 );
  }
  return 1;
}


// CBaseAnimating::SetBody  (line 964, @0x0000000002061e90, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetMeshGroupMask, GetSkeletonInstance, SetMeshGroupMask, operator[]
// calls: CSkeletonInstance::GetMeshGroupMask, CSkeletonInstance::SetMeshGroupMask
// callers: CBaseAnimating::SetBodygroup, CRagdollPropAttached::ApplyAttachedActivationRecord, CreateServerRagdoll
void __fastcall CBaseAnimating::SetBody(CBaseAnimating *const this, MeshGroupMask_t nBody)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v5; // rbx
  const CSkeletonInstance *v7; // rax
  MeshGroupMask_t MeshGroupMask; // rdx
  CSkeletonInstance *v9; // rax

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v5 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v5 != 0 )
      {
        v7 = (*(**(v5 + 8) + 72LL))(*(v5 + 8));
        MeshGroupMask = 0;
        if ( v7 != 0 )
          MeshGroupMask = CSkeletonInstance::GetMeshGroupMask(v7);
        if ( nBody != MeshGroupMask )
        {
          v9 = (*(**(v5 + 8) + 72LL))(*(v5 + 8));
          if ( v9 != 0 )
            CSkeletonInstance::SetMeshGroupMask(v9, nBody);
        }
      }
    }
  }
}


// CBaseAnimating::GetBody  (line 976, @0x0000000002061f20, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetMeshGroupMask, GetSkeletonInstance, operator[]
// calls: CSkeletonInstance::GetMeshGroupMask
// callers: CBaseAnimating::SetBodygroup, CBaseAnimating::GetBodygroup, CBaseAnimating::GetHitboxSet, CRagdollPropAttached::ApplyAttachedActivationRecord, CreateServerRagdoll
MeshGroupMask_t __fastcall CBaseAnimating::GetBody(const CBaseAnimating *const this)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v4; // rax
  const CSkeletonInstance *v5; // rax

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance == 0 )
    return 0;
  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
  if ( m_nBaseOffset == 0xFFFF )
    return 0;
  v4 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  if ( v4 == 0 )
    return 0;
  v5 = (*(**(v4 + 8) + 72LL))(*(v4 + 8));
  if ( v5 != 0 )
    return CSkeletonInstance::GetMeshGroupMask(v5);
  else
    return 0;
}


// CBaseAnimating::SetBodygroup  (line 986, @0x0000000002061f80, libserver.so)
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetBody, SetBodygroup, CBaseAnimating::SetBody, Warning
// callers: CBaseAnimating::SetBodygroupByName, CBaseAnimating::RandomizeBodygroups, CGibShooter::CreateGib, CEnvShooter::CreateGib, CGib::SpawnStickyGibs, CGib::SpawnHeadGib, CGib::SpawnSpecificGibs, CGib::SpawnRandomGibs, CBasePropDoor::Spawn, CDOTA_Unit_Hero_Juggernaut::Spawn, CDOTA_Unit_Hero_Juggernaut::Event_Killed, CDOTA_Unit_Hero_Beastmaster::Spawn (29 total)
// strings: "CBaseAnimating::SetBodygroup(%d,%d) failed: CBaseAnimating has no model!\n"
void __fastcall CBaseAnimating::SetBodygroup(CBaseAnimating *const this, int iGroup, int iValue)
{
  const CModel *ModelPtr; // r14
  MeshGroupMask_t newBody[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( iGroup >= 0 )
  {
    if ( CBaseAnimating::GetModelPtr(this) != 0 )
    {
      ModelPtr = CBaseAnimating::GetModelPtr(this);
      newBody[0] = CBaseAnimating::GetBody(this);
      SetBodygroup(ModelPtr, newBody, iGroup, iValue);
      CBaseAnimating::SetBody(this, newBody[0]);
    }
    else
    {
      Warning("CBaseAnimating::SetBodygroup(%d,%d) failed: CBaseAnimating has no model!\n", iGroup, iValue);
    }
  }
}


// CBaseAnimating::SetBodygroupByName  (line 1008, @0x0000000002062010, libserver.so)  // inlines: FindBodygroupByName
// calls: CBaseAnimating::GetModelPtr, FindBodygroupByName, CBaseAnimating::SetBodygroup
void __fastcall CBaseAnimating::SetBodygroupByName(CBaseAnimating *const this, const char *pName, int iValue)
{
  const CModel *ModelPtr; // rax
  int BodygroupByName; // eax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  BodygroupByName = FindBodygroupByName(ModelPtr, pName);
  if ( BodygroupByName >= 0 )
    CBaseAnimating::SetBodygroup(this, BodygroupByName, iValue);
}


// CBaseAnimating::GetBodygroup  (line 1017, @0x0000000002062070, libserver.so)
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetBody, GetBodygroup
// callers: IsPlayerAbleToLockOrUnlockDoor, CBaseAnimating::FindDamagedBodyGroupVariant
int __fastcall CBaseAnimating::GetBodygroup(const CBaseAnimating *const this, int iGroup)
{
  const CModel *ModelPtr; // r12
  MeshGroupMask_t Body; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  Body = CBaseAnimating::GetBody(this);
  return GetBodygroup(ModelPtr, Body, iGroup);
}


// CBaseAnimating::GetBodygroupName  (line 1025, @0x00000000020620b0, libserver.so)
// calls: CBaseAnimating::GetModelPtr, GetBodygroupName
const char *__fastcall CBaseAnimating::GetBodygroupName(const CBaseAnimating *const this, int iGroup)
{
  const CModel *ModelPtr; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  return GetBodygroupName(ModelPtr, iGroup);
}


// CBaseAnimating::GetBodygroupPartName  (line 1033, @0x00000000020620d0, libserver.so)
// calls: CBaseAnimating::GetModelPtr, GetBodygroupPartName
// callers: CBaseAnimating::FindDamagedBodyGroupVariant
void __fastcall CBaseAnimating::GetBodygroupPartName(
        const CBaseAnimating *const this,
        int iGroup,
        int iPart,
        char *pResourceName,
        int nSizeResourceName)
{
  const CModel *ModelPtr; // rax

  *pResourceName = 0;
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  GetBodygroupPartName(ModelPtr, iGroup, iPart, pResourceName, nSizeResourceName);
}


// CBaseAnimating::FindBodygroupByName  (line 1044, @0x0000000002062120, libserver.so)
// calls: CBaseAnimating::GetModelPtr, FindBodygroupByName
// callers: IsPlayerAbleToLockOrUnlockDoor, CDOTA_Unit_Nian::Spawn, CDOTA_Unit_Nian_Attachment::OnTakeDamage, CDOTA_Unit_Nian_Attachment::Regrow, CDOTA_Item_Necronomicon::OnSpellStart
int __fastcall CBaseAnimating::FindBodygroupByName(const CBaseAnimating *const this, const char *name)
{
  const CModel *ModelPtr; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  return FindBodygroupByName(ModelPtr, name);
}


// CBaseAnimating::GetBodygroupCount  (line 1052, @0x0000000002062150, libserver.so)
// calls: CBaseAnimating::GetModelPtr, GetBodygroupCount
int __fastcall CBaseAnimating::GetBodygroupCount(const CBaseAnimating *const this, int iGroup)
{
  const CModel *ModelPtr; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  return GetBodygroupCount(ModelPtr, iGroup);
}


// CBaseAnimating::GetNumBodyGroups  (line 1060, @0x0000000002062170, libserver.so)
// calls: CBaseAnimating::GetModelPtr, GetNumBodyGroups
int __fastcall CBaseAnimating::GetNumBodyGroups(const CBaseAnimating *const this)
{
  const CModel *ModelPtr; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  return GetNumBodyGroups(ModelPtr);
}


// CBaseAnimating::SetSkin  (line 1072, @0x00000000020621f0, libserver.so)
// calls: CBaseAnimating::GetModelPtr, CModel::GetMaterialGroupTokenForIndex, CBaseAnimating::SetSkin
// callers: CBaseAnimating::InputSkin, CBaseAnimating::Spawn, CPointCommentaryNode::StartCommentary, CEnvBeverage::Use, CEnvShooter::CreateGib, CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_BaseNPC::ManageModelChanges, CDOTA_BaseNPC_Creature::InitializeCreature, CDOTA_BaseNPC_Building::Spawn, CDOTA_BaseNPC_Pet::Spawn, CDOTA_Ability_Venomancer_PlagueWard::CreateWard, CDOTA_Modifier_DragonKnight_DragonForm::OnCreated (17 total)
void __fastcall CBaseAnimating::SetSkin(CBaseAnimating *const this, int iSkin)
{
  const CModel *ModelPtr; // rax
  CUtlStringToken v5; // eax

  if ( CBaseAnimating::GetModelPtr(this) != 0 )
  {
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    if ( ModelPtr != 0 )
    {
      v5.m_nHashCode = CModel::GetMaterialGroupTokenForIndex(ModelPtr, iSkin).m_nHashCode;
      CBaseAnimating::SetSkin(this, v5);
    }
  }
}


// CBaseAnimating::SetSkin  (line 1086, @0x0000000002062190, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetSkeletonInstance, SetMaterialGroup, operator[]
// calls: CSkeletonInstance::SetMaterialGroup
// callers: CBaseAnimating::SetSkin, CBaseAnimating::Spawn, CBaseViewModel::SetWeaponModel, CRagdollPropAttached::ApplyAttachedActivationRecord, CreateServerRagdoll, BreakModelCreateSingle, OnCreateIllusionsSpawnCompletion, CDOTA_Ability_Elder_Titan_AncestralSpirit::Spawn, CDOTA_Modifier_MonkeyKing_Transform::OnModelChange, CEconWearable::Equip
void __fastcall CBaseAnimating::SetSkin(CBaseAnimating *const this, CUtlStringToken nSkin)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v5; // rax
  CSkeletonInstance *v7; // rax

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v5 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v5 != 0 )
      {
        v7 = (*(**(v5 + 8) + 72LL))(*(v5 + 8));
        if ( v7 != 0 )
          CSkeletonInstance::SetMaterialGroup(v7, nSkin);
      }
    }
  }
}


// CBaseAnimating::GetSkin  (line 1094, @0x00000000020622b0, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetMaterialGroup, GetSkeletonInstance, operator[]
// callers: CreatePiecesFromBreakModelList, CBaseAnimating::GetS1Skin, CBreakableProp::Break, CRagdollPropAttached::ApplyAttachedActivationRecord, CreateServerRagdoll, CPropDoorRotatingBreakable::Event_Killed, CPropDoorRotatingBreakable::OnTakeDamage, OnCreateIllusionsSpawnCompletion, CDOTA_Ability_Elder_Titan_AncestralSpirit::Spawn, CDOTA_Modifier_MonkeyKing_Transform::OnModelChange, CEconWearable::Equip
CUtlStringToken __fastcall CBaseAnimating::GetSkin(const CBaseAnimating *const this)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v4; // rax
  CUtlStringToken *v5; // rax

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance == 0 )
    return 0;
  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
  if ( m_nBaseOffset == 0xFFFF )
    return 0;
  v4 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  if ( v4 == 0 )
    return 0;
  v5 = (*(**(v4 + 8) + 72LL))(*(v4 + 8));
  if ( v5 != 0 )
    return v5[181].m_nHashCode;
  else
    return 0;
}


// CBaseAnimating::GetS1Skin  (line 1104, @0x0000000002062310, libserver.so)
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetSkin, CModel::GetMaterialGroupIndex
// callers: CreatePiecesFromBreakModelList, CreateGibsFromList, CPointCommentaryNode::SpinThink, CPhysicsProp::DrawDebugTextOverlays, CPropDoorRotatingBreakable::Spawn, CDOTA_BaseNPC_Hero::AddPetsFromWearables
int __fastcall CBaseAnimating::GetS1Skin(const CBaseAnimating *const this)
{
  int v2; // ebx
  const CModel *ModelPtr; // r12
  CUtlStringToken v4; // eax
  int MaterialGroupIndex; // eax

  v2 = 0;
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr != 0 )
  {
    v4.m_nHashCode = CBaseAnimating::GetSkin(this).m_nHashCode;
    MaterialGroupIndex = CModel::GetMaterialGroupIndex(ModelPtr, v4);
    if ( MaterialGroupIndex >= 0 )
      return MaterialGroupIndex;
  }
  return v2;
}


// CBaseAnimating::InputSkin  (line 1116, @0x0000000002062230, libserver.so)  // inlines: Int, operator int
// calls: CEntityInstance::IsAuthoritative, CBaseAnimating::SetSkin
void __fastcall CBaseAnimating::InputSkin(CBaseAnimating *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    m_type = inputdata->value.m_type;
    if ( m_type == 1 )
    {
      CBaseAnimating::SetSkin(this, inputdata->value.m_float);
    }
    else if ( m_type == 34 )
    {
      CBaseAnimating::SetSkin(this, inputdata->value.m_float64);
    }
    else
    {
      CBaseAnimating::SetSkin(this, inputdata->value.m_int);
    }
  }
}


// CBaseAnimating::InputSetSequence  (line 1135, @0x0000000002062d30, libserver.so)  // inlines: VariantFieldTypeName
// calls: LoggingSystem_IsChannelEnabled, CBaseAnimating::LookupSequence, CBaseAnimating::SetSequence, LoggingSystem_Log
// strings: "InputSetSequence", "%s: unexpected parameter type %s, expected a CString\n", "js_raw_args", "js_array", "js_object", "js_value" (21 total)
// globals: jpt_2062DA5
void __fastcall CBaseAnimating::InputSetSequence(
        CBaseAnimating *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  HSequence v7; // esi
  const char *v8; // r8

  if ( value->m_type == 30 )
  {
    v7.m_Data = CBaseAnimating::LookupSequence(this, value->m_pszString).m_Data;
    if ( v7.m_Data != -1 )
      CBaseAnimating::SetSequence(this, v7, SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    switch ( value->m_type )
    {
      case 0:
        v8 = "void";
        break;
      case 1:
        v8 = "float";
        break;
      case 3:
        v8 = "vector";
        break;
      case 4:
        v8 = "quaternion";
        break;
      case 5:
        v8 = "integer";
        break;
      case 6:
        v8 = "boolean";
        break;
      case 8:
        v8 = "character";
        break;
      case 9:
        v8 = "color";
        break;
      case 0xD:
        v8 = "ehandle";
        break;
      case 0x19:
        v8 = "vector2d";
        break;
      case 0x1A:
        v8 = "int64";
        break;
      case 0x1B:
        v8 = "vector4d";
        break;
      case 0x1C:
        v8 = "resourcehandle";
        break;
      case 0x1E:
        v8 = "cstring";
        break;
      case 0x1F:
        v8 = "hscript";
        break;
      case 0x20:
        v8 = "variant";
        break;
      case 0x21:
        v8 = "uint64";
        break;
      case 0x22:
        v8 = "float64";
        break;
      case 0x25:
        v8 = "unsigned";
        break;
      case 0x26:
        v8 = "utlstringtoken";
        break;
      case 0x27:
        v8 = "qangle";
        break;
      case 0x30:
        v8 = "hscript_lightbinding";
        break;
      case 0x31:
        v8 = "js_value";
        break;
      case 0x32:
        v8 = "js_object";
        break;
      case 0x33:
        v8 = "js_array";
        break;
      case 0x34:
        v8 = "js_raw_args";
        break;
      default:
        v8 = "unknown_variant_type";
        break;
    }
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "%s: unexpected parameter type %s, expected a CString\n",
      "InputSetSequence",
      v8);
  }
}


// CBaseAnimating::InputSetBodyGroup  (line 1152, @0x0000000002062360, libserver.so)  // inlines: GetComponent<CBodyComponent>, TempString, VariantFieldTypeName, operator[]
// calls: LoggingSystem_IsChannelEnabled, CBodyComponent::SetBodyGroup, LoggingSystem_Log
// strings: "InputSetBodyGroup", "%s: unexpected parameter type %s, expected a CString\n", "js_raw_args", "js_array", "js_object", "js_value" (21 total)
// globals: jpt_20623ED
void __fastcall CBaseAnimating::InputSetBodyGroup(
        CBaseAnimating *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rcx
  CBodyComponent *v8; // rdi
  __int64 m_nBaseOffset; // rax
  const char *v10; // r8

  if ( value->m_type == 30 )
  {
    m_pEntity = this->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      v8 = 0;
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
        v8 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
    }
    else
    {
      v8 = 0;
    }
    CBodyComponent::SetBodyGroup(v8, value->m_pszString);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    switch ( value->m_type )
    {
      case 0:
        v10 = "void";
        break;
      case 1:
        v10 = "float";
        break;
      case 3:
        v10 = "vector";
        break;
      case 4:
        v10 = "quaternion";
        break;
      case 5:
        v10 = "integer";
        break;
      case 6:
        v10 = "boolean";
        break;
      case 8:
        v10 = "character";
        break;
      case 9:
        v10 = "color";
        break;
      case 0xD:
        v10 = "ehandle";
        break;
      case 0x19:
        v10 = "vector2d";
        break;
      case 0x1A:
        v10 = "int64";
        break;
      case 0x1B:
        v10 = "vector4d";
        break;
      case 0x1C:
        v10 = "resourcehandle";
        break;
      case 0x1E:
        v10 = "cstring";
        break;
      case 0x1F:
        v10 = "hscript";
        break;
      case 0x20:
        v10 = "variant";
        break;
      case 0x21:
        v10 = "uint64";
        break;
      case 0x22:
        v10 = "float64";
        break;
      case 0x25:
        v10 = "unsigned";
        break;
      case 0x26:
        v10 = "utlstringtoken";
        break;
      case 0x27:
        v10 = "qangle";
        break;
      case 0x30:
        v10 = "hscript_lightbinding";
        break;
      case 0x31:
        v10 = "js_value";
        break;
      case 0x32:
        v10 = "js_object";
        break;
      case 0x33:
        v10 = "js_array";
        break;
      case 0x34:
        v10 = "js_raw_args";
        break;
      default:
        v10 = "unknown_variant_type";
        break;
    }
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "%s: unexpected parameter type %s, expected a CString\n",
      "InputSetBodyGroup",
      v10);
  }
}


// CBaseAnimating::GetNumBones  (line 1169, @0x0000000002062550, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetNumBones
int __fastcall CBaseAnimating::GetNumBones(const CBaseAnimating *const this)
{
  const CSkeletonInstance *v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetNumBones(v1);
}


// CBaseAnimating::LookupBone  (line 1174, @0x0000000002062570, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::LookupBone
// callers: IsPlayerAbleToLockOrUnlockDoor, CreatePiece, CreateGibsFromList, CBaseCombatCharacter::Weapon_Drop
int __fastcall CBaseAnimating::LookupBone(const CBaseAnimating *const this, const char *szName)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::LookupBone(v3, szName);
}


// CBaseAnimating::LookupAttachment  (line 1183, @0x00000000020625a0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::LookupAttachment
// callers: IsPlayerAbleToLockOrUnlockDoor, CBaseAnimatingController::CalculateIKLocks, MaterialFootstepSound, CBaseCombatWeapon::GetTracerAttachment, CBaseCombatWeapon::BaseForceFire, CBaseEntity::SetParentAttachmentHelper, CEnvMuzzleFlash::Spawn, CEnvEffectsScript::SpriteEffectEvent, CPhysicsCannister::CalcLocalThrust, DispatchParticleEffect, CPropVRHand::UpdateUseTransform, CPropVRHand::UpdateHoldTransform (22 total)
AttachmentHandle_t __fastcall CBaseAnimating::LookupAttachment(
        const CBaseAnimating *const this,
        const char *pAttachmentName)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::LookupAttachment(v3, pAttachmentName);
}


// CBaseAnimating::ScriptLookupAttachment  (line 1188, @0x00000000020625d0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::LookupAttachment
int __fastcall CBaseAnimating::ScriptLookupAttachment(const CBaseAnimating *const this, const char *pAttachmentName)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::LookupAttachment(v3, pAttachmentName);
}


// CBaseAnimating::LookupAttachment  (line 1193, @0x0000000002062600, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::LookupAttachment
// callers: EntityMatrix::InitFromEntityAttachmentName
AttachmentHandle_t __fastcall CBaseAnimating::LookupAttachment(const CBaseAnimating *const this, CUtlStringToken name)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::LookupAttachment(v3, name);
}


// CBaseAnimating::GetAttachmentCount  (line 1198, @0x0000000002062630, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentCount
int __fastcall CBaseAnimating::GetAttachmentCount(const CBaseAnimating *const this)
{
  const CSkeletonInstance *v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentCount(v1);
}


// CBaseAnimating::GetAttachmentBoneCount  (line 1203, @0x0000000002062650, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentBoneCount
int __fastcall CBaseAnimating::GetAttachmentBoneCount(const CBaseAnimating *const this, AttachmentHandle_t iAttachment)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentBoneCount(v3, iAttachment);
}


// CBaseAnimating::GetAttachmentBone  (line 1208, @0x0000000002062680, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentBone
// callers: FindPhysicsAnchor
int __fastcall CBaseAnimating::GetAttachmentBone(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        int nIndex)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentBone(v5, iAttachment, nIndex);
}


// CBaseAnimating::GetAttachmentNameToken  (line 1213, @0x00000000020626b0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentNameToken
CUtlStringToken __fastcall CBaseAnimating::GetAttachmentNameToken(
        const CBaseAnimating *const this,
        AttachmentHandle_t hAttachment)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentNameToken(v3, hAttachment);
}


// CBaseAnimating::GetAttachment  (line 1218, @0x00000000020626e0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachment
// callers: CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::OnSpellStart, CDOTA_Modifier_ControllerTest_MeleeAttack::OnIntervalThink, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, CDOTA_BaseNPC_Building::OnTakeDamage_Alive, CDOTA_Ability_Lich_ChainFrost::OnSpellStart, CDOTA_Ability_Mirana_Arrow::OnSpellStart, CDOTA_Ability_Lich_ChainFrost::OnProjectileHit_ExtraData, CDOTA_Modifier_WitchDoctor_DeathWard::OnAttackLanded, CDOTA_Ability_Venomancer_VenomousGale::OnSpellStart, CDOTA_Ability_WitchDoctor_ParalyzingCask::OnSpellStart (27 total)
bool __fastcall CBaseAnimating::GetAttachment(
        const CBaseAnimating *const this,
        const char *szName,
        Vector *const absOrigin)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachment(v5, szName, absOrigin);
}


// CBaseAnimating::GetAttachment  (line 1223, @0x0000000002062710, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachment
// callers: CreatePiece, CreateGibsFromList, CInteractionManager::TestInteractionsWithEntity, CInteractionManager::UpdateInteraction, CFourWheelVehiclePhysics::CalcWheelData, CFourWheelVehiclePhysics::GetVehicleViewPosition, CVRHandModelOverride::UpdatePose, CBaseServerVehicle::HandleEntryExitFinish, CBaseServerVehicle::GetPassengerExitPoint, CBaseServerVehicle::GetExitAnimToUse, CDOTA_Modifier_Spectre_Desolate::OnAttack, CDOTA_Ability_MonkeyKing_Boundless_Strike::StrikeInLine
bool __fastcall CBaseAnimating::GetAttachment(
        const CBaseAnimating *const this,
        const char *szName,
        Vector *const absOrigin,
        QAngle *const absAngles)
{
  const CSkeletonInstance *v7; // rax

  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachment(v7, szName, absOrigin, absAngles);
}


// CBaseAnimating::GetAttachment  (line 1228, @0x0000000002062750, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachment
// callers: CEnvEffectsScript::HandleAnimEvent, FindPhysicsAnchor, CRopeKeyframe::GetEndPointPos2, CRopeKeyframe::SetupHangDistance, CTriggerCamera::FollowTarget
bool __fastcall CBaseAnimating::GetAttachment(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        Vector *const absOrigin)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachment(v5, iAttachment, absOrigin);
}


// CBaseAnimating::GetAttachment  (line 1233, @0x0000000002062780, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachment
// callers: CBaseEntity::ComputeTracerStartPosition, CBaseAnimating::ScriptGetAttachmentOrigin, CBaseAnimating::ScriptGetAttachmentAngles, CBaseAnimatingController::CalculateIKLocks, MaterialFootstepSound, CBaseCombatWeapon::BaseForceFire, CBaseServerVehicle::NPC_GetPassengerSeatPosition, EntityMatrix::InitFromEntityAttachmentName, EntityMatrix::InitFromEntityAttachmentHandle, SharedVehicleViewSmoothing
bool __fastcall CBaseAnimating::GetAttachment(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        Vector *const absOrigin,
        QAngle *const absAngles)
{
  const CSkeletonInstance *v7; // rax

  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachment(v7, iAttachment, absOrigin, absAngles);
}


// CBaseAnimating::GetAttachment  (line 1238, @0x00000000020597d0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachment
bool __fastcall CBaseAnimating::GetAttachment(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        matrix3x4_t *const attachmentToWorld)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachment(v5, iAttachment, attachmentToWorld);
}


// CBaseAnimating::GetAttachment  (line 1243, @0x00000000020627c0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachment
bool __fastcall CBaseAnimating::GetAttachment(
        const CBaseAnimating *const this,
        const char *szName,
        Vector *const absOrigin,
        Vector *forward,
        Vector *right,
        Vector *up)
{
  const CSkeletonInstance *v9; // rax

  v9 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachment(v9, szName, absOrigin, forward, right, up);
}


// CBaseAnimating::GetAttachment  (line 1248, @0x0000000002062810, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachment
bool __fastcall CBaseAnimating::GetAttachment(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        Vector *const absOrigin,
        Vector *forward,
        Vector *right,
        Vector *up)
{
  const CSkeletonInstance *v9; // rax

  v9 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachment(v9, iAttachment, absOrigin, forward, right, up);
}


// CBaseAnimating::ScriptGetAttachmentOrigin  (line 1260, @0x0000000002062860, libserver.so)
// calls: CBaseAnimating::GetAttachment, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::absOrigin, `guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::qa, CBaseAnimating::ScriptGetAttachmentOrigin(int)::qa, CBaseAnimating::ScriptGetAttachmentOrigin(int)::absOrigin
const Vector *__fastcall CBaseAnimating::ScriptGetAttachmentOrigin(CBaseAnimating *const this, int iAttachment)
{
  AttachmentHandle_t v2; // r12

  v2 = iAttachment;
  if ( `guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::absOrigin == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::absOrigin) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::absOrigin);
  }
  if ( `guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::qa == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::qa) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseAnimating::ScriptGetAttachmentOrigin(int)::qa);
  }
  CBaseAnimating::GetAttachment(
    this,
    v2,
    &CBaseAnimating::ScriptGetAttachmentOrigin(int)::absOrigin,
    &CBaseAnimating::ScriptGetAttachmentOrigin(int)::qa);
  return &CBaseAnimating::ScriptGetAttachmentOrigin(int)::absOrigin;
}


// CBaseAnimating::ScriptGetAttachmentAngles  (line 1271, @0x00000000020628f0, libserver.so)
// calls: CBaseAnimating::GetAttachment, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absOrigin, `guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absAngles, `guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::qa, CBaseAnimating::ScriptGetAttachmentAngles(int)::qa, CBaseAnimating::ScriptGetAttachmentAngles(int)::absOrigin, CBaseAnimating::ScriptGetAttachmentAngles(int)::absAngles
const Vector *__fastcall CBaseAnimating::ScriptGetAttachmentAngles(CBaseAnimating *const this, int iAttachment)
{
  AttachmentHandle_t v2; // r12

  v2 = iAttachment;
  if ( `guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absOrigin == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absOrigin) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absOrigin);
  }
  if ( `guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absAngles == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absAngles) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::absAngles);
  }
  if ( `guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::qa == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::qa) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseAnimating::ScriptGetAttachmentAngles(int)::qa);
  }
  CBaseAnimating::GetAttachment(
    this,
    v2,
    &CBaseAnimating::ScriptGetAttachmentAngles(int)::absOrigin,
    &CBaseAnimating::ScriptGetAttachmentAngles(int)::qa);
  CBaseAnimating::ScriptGetAttachmentAngles(int)::absAngles = CBaseAnimating::ScriptGetAttachmentAngles(int)::qa;
  return &CBaseAnimating::ScriptGetAttachmentAngles(int)::absAngles;
}


// CBaseAnimating::GetAttachmentLocal  (line 1286, @0x00000000020629f0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentLocal
bool __fastcall CBaseAnimating::GetAttachmentLocal(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        Vector *const origin)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentLocal(v5, iAttachment, origin);
}


// CBaseAnimating::GetAttachmentLocal  (line 1291, @0x0000000002062a20, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentLocal
bool __fastcall CBaseAnimating::GetAttachmentLocal(
        const CBaseAnimating *const this,
        const char *szName,
        Vector *const origin,
        QAngle *const angles)
{
  const CSkeletonInstance *v7; // rax

  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentLocal(v7, szName, origin, angles);
}


// CBaseAnimating::GetAttachmentLocal  (line 1296, @0x0000000002062a60, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentLocal
// callers: CBaseServerVehicle::NPC_GetPassengerSeatPositionLocal, CBaseServerVehicle::GetLocalAttachmentAtTime, SharedVehicleViewSmoothing
bool __fastcall CBaseAnimating::GetAttachmentLocal(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        Vector *const origin,
        QAngle *const angles)
{
  const CSkeletonInstance *v7; // rax

  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentLocal(v7, iAttachment, origin, angles);
}


// CBaseAnimating::GetAttachmentLocal  (line 1301, @0x0000000002062aa0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetAttachmentLocal
// callers: GetPlacementOriginTransform, CPropVRHand::GetHoldTransform, UTIL_ApplyLocalAttachmentInvTransform
bool __fastcall CBaseAnimating::GetAttachmentLocal(
        const CBaseAnimating *const this,
        AttachmentHandle_t iAttachment,
        matrix3x4_t *const attachmentToLocal)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetAttachmentLocal(v5, iAttachment, attachmentToLocal);
}


// CBaseAnimating::IsValidSequence  (line 1310, @0x00000000020665b0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::IsValidSequence
// callers: CFlexCycler::OnTakeDamage, CGenericFlexCycler::Spawn, CDOTA_BaseNPC::UpdateWearablesAnimation
bool __fastcall CBaseAnimating::IsValidSequence(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::IsValidSequence(*(v3 + 736), hSequence);
  else
    return CBaseAnimatingController::IsValidSequence(0, hSequence);
}


// CBaseAnimating::IsSequenceLooping  (line 1315, @0x0000000002069a80, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSkeletonInstance, IsSequenceLooping, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::IsSequenceLooping
// callers: CBaseViewModel::ItemPostFrame, CBaseViewModel::FadePreviousLayer, CDOTAAnimState::UpdateGestureLayer
bool __fastcall CBaseAnimating::IsSequenceLooping(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax
  const CBaseAnimatingController *v4; // rdi
  const CModel **m_pBinding; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
  {
    v4 = *(v3 + 736);
    m_pBinding = v4->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      return CBaseAnimatingController::IsSequenceLooping(v4, *m_pBinding, hSequence);
  }
  else
  {
    v4 = 0;
  }
  return CBaseAnimatingController::IsSequenceLooping(v4, 0, hSequence);
}


// CBaseAnimating::NotifyWhenSequenceFinishes  (line 1320, @0x0000000002062ad0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance, NotifyWhenSequenceFinishes
// callers: CDOTA_BaseNPC::ForcePlayActivityOnce
// write access to const memory has been detected, the output may be wrong!
void __fastcall CBaseAnimating::NotifyWhenSequenceFinishes(CBaseAnimating *const this, bool bEnable)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    *(*(v3 + 736) + 249LL) = bEnable;
  else
    BYTE1(stru_10.m_pIdentityChunks[28]) = bEnable;
}


// CBaseAnimating::SequenceDuration  (line 1325, @0x0000000002062b20, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance, SequenceDuration
// callers: CBaseCombatWeapon::DefaultDeploy, CBaseCombatWeapon::Holster, CBaseCombatWeapon::DefaultReload, CBaseCombatWeapon::SetIdealActivity
float __fastcall CBaseAnimating::SequenceDuration(const CBaseAnimating *const this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  float (__fastcall *v3)(__int64, _QWORD); // r12
  unsigned int v4; // eax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    v2 = *(v1 + 736);
  else
    v2 = 0;
  v3 = *(*v2 + 168LL);
  v4 = (*(*v2 + 192LL))(v2);
  return v3(v2, v4);
}


// CBaseAnimating::SequenceDuration  (line 1330, @0x0000000002062b70, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: CBaseCombatWeapon::SetActivity, CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::ProcessSequenceSceneEvent, CBaseViewModel::GetViewModelSequenceDurationForLayer, CBaseViewModel::FadePreviousLayer, CreateServerRagdoll, SharedVehicleViewSmoothing, CDOTAAnimState::UpdateGestureLayer, CDOTA_Modifier_Tutorial_ForceAnimation::OnCreated, CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorAttackPhase::Update, CDOTABehaviorDie::OnStart (19 total)
float __fastcall CBaseAnimating::SequenceDuration(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax
  __int64 v4; // rdi

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    v4 = *(v3 + 736);
  else
    v4 = 0;
  return (*(*v4 + 168LL))(v4, hSequence.m_Data);
}


// CBaseAnimating::GetSequenceCycleRate  (line 1335, @0x0000000002066b00, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSequenceCycleRate, GetSkeletonInstance, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::GetSequenceCycleRate
// callers: CBasePlayerAnimState::DebugShowAnimState, CBaseViewModel::ItemPostFrame, CDOTAAnimState::UpdateGestureLayer, CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorAttackPhase::Update
float __fastcall CBaseAnimating::GetSequenceCycleRate(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax
  const CBaseAnimatingController *v4; // rdi
  const CModel **m_pBinding; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
  {
    v4 = *(v3 + 736);
    m_pBinding = v4->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      return CBaseAnimatingController::GetSequenceCycleRate(v4, *m_pBinding, hSequence);
  }
  else
  {
    v4 = 0;
  }
  return CBaseAnimatingController::GetSequenceCycleRate(v4, 0, hSequence);
}


// CBaseAnimating::GetLastVisibleCycle  (line 1340, @0x0000000002066fa0, libserver.so)  // inlines: GetBaseAnimatingController, GetPlaybackRate, GetSkeletonInstance
// calls: CBaseAnimatingController::GetLastVisibleCycle
float __fastcall CBaseAnimating::GetLastVisibleCycle(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  float v7; // xmm1_4
  float v9; // [rsp+Ch] [rbp-14h]

  v4 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v4 != 0 )
    v5 = *(v4 + 736);
  else
    v5 = 0;
  v9 = *(v5 + 80);
  v6 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v6 != 0 )
    return CBaseAnimatingController::GetLastVisibleCycle(*(v6 + 736), hSequence, v9, v7);
  else
    return CBaseAnimatingController::GetLastVisibleCycle(0, hSequence, v9, v7);
}


// CBaseAnimating::LookupSequence  (line 1345, @0x0000000002062bc0, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSkeletonInstance, LookupSequence, operator const RuntimeClass_t*
// calls: LookupSequence
// callers: CDevtestHierarchy2::Spawn, CBaseAnimating::InputSetSequence, CDynamicProp::PropSetAnim, CDynamicProp::InputSetAnimationNoReset, CDynamicProp::InputSetAnimationTransition, CDynamicProp::SpawnServerSide, CBaseFlex::RequestStartSequenceSceneEvent, CBaseFlex::RequestStartGestureSceneEvent, CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CBasePlayerAnimState::CalcSequenceIndex, CPointCommentaryNode::Spawn (27 total)
HSequence __fastcall CBaseAnimating::LookupSequence(const CBaseAnimating *const this, const char *pSequenceName)
{
  __int64 v3; // rax
  const CModel **v4; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 && (v4 = *(*(*(v3 + 736) + 8LL) + 480LL)) != 0 )
    return LookupSequence(*v4, pSequenceName);
  else
    return LookupSequence(0, pSequenceName);
}


// CBaseAnimating::SequenceLoops  (line 1350, @0x0000000002069af0, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSkeletonInstance, SequenceLoops, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::IsSequenceLooping
// callers: CDynamicProp::AnimThink, CBaseCombatWeapon::Operator_FrameUpdate, CFlexCycler::FlexThink, CBasePlayer::SetAnimation
bool __fastcall CBaseAnimating::SequenceLoops(const CBaseAnimating *const this)
{
  __int64 v1; // rax
  const CBaseAnimatingController *v2; // rbx
  HSequence v3; // eax
  const CModel **m_pBinding; // rcx
  const CModel *v5; // rsi

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    v2 = *(v1 + 736);
  else
    v2 = 0;
  v3.m_Data = (*(v2->_vptr_CSkeletonAnimationController + 24))(v2);
  m_pBinding = v2->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    v5 = *m_pBinding;
  else
    v5 = 0;
  return CBaseAnimatingController::IsSequenceLooping(v2, v5, v3);
}


// CBaseAnimating::GetSequenceMoveYaw  (line 1355, @0x0000000002065280, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetSequenceMoveYaw
float __fastcall CBaseAnimating::GetSequenceMoveYaw(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetSequenceMoveYaw(*(v3 + 736), hSequence);
  else
    return CBaseAnimatingController::GetSequenceMoveYaw(0, hSequence);
}


// CBaseAnimating::GetSequenceMoveDist  (line 1360, @0x0000000002065320, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSequenceMoveDist, GetSkeletonInstance, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::GetSequenceMoveDist
float __fastcall CBaseAnimating::GetSequenceMoveDist(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax
  const CBaseAnimatingController *v4; // rdi
  const CModel **m_pBinding; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
  {
    v4 = *(v3 + 736);
    m_pBinding = v4->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      return CBaseAnimatingController::GetSequenceMoveDist(v4, *m_pBinding, hSequence);
  }
  else
  {
    v4 = 0;
  }
  return CBaseAnimatingController::GetSequenceMoveDist(v4, 0, hSequence);
}


// CBaseAnimating::GetSequenceLinearMotion  (line 1365, @0x00000000020653d0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetSequenceLinearMotion
// callers: CBaseAnimating::GetVelocity
void __fastcall CBaseAnimating::GetSequenceLinearMotion(
        const CBaseAnimating *const this,
        HSequence hSequence,
        Vector *pVec)
{
  __int64 v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v5 != 0 )
    CBaseAnimatingController::GetSequenceLinearMotion(*(v5 + 736), hSequence, pVec);
  else
    CBaseAnimatingController::GetSequenceLinearMotion(0, hSequence, pVec);
}


// CBaseAnimating::GetSequenceName  (line 1370, @0x0000000002065570, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetSequenceName
// callers: CBaseAnimating::DrawDebugTextOverlays, CNetworkedSequenceOperation::OnSequenceCycleChanged, CDOTA_BaseNPC::UpdateWearablesAnimation
const char *__fastcall CBaseAnimating::GetSequenceName(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetSequenceName(*(v3 + 736), hSequence);
  else
    return CBaseAnimatingController::GetSequenceName(0, hSequence);
}


// CBaseAnimating::GetSequenceActivity  (line 1375, @0x00000000020656a0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetSequenceActivity
// callers: CBasePlayerAnimState::ShouldResetMainSequence, CBasePlayerAnimState::ComputeMainSequence, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::FadePreviousLayer, CPropDoorRotatingBreakable::OnTakeDamage, CDOTAAnimState::UpdateGestureLayer, CDOTAAnimState::ComputeMainSequence, TE_UnitAnimation
Activity __fastcall CBaseAnimating::GetSequenceActivity(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetSequenceActivity(*(v3 + 736), hSequence);
  else
    return CBaseAnimatingController::GetSequenceActivity(0, hSequence);
}


// CBaseAnimating::GetSequenceActivityName  (line 1380, @0x0000000002065610, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetSequenceActivityName
// callers: CBaseAnimating::DrawDebugTextOverlays
const char *__fastcall CBaseAnimating::GetSequenceActivityName(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetSequenceActivityName(*(v3 + 736), hSequence);
  else
    return CBaseAnimatingController::GetSequenceActivityName(0, hSequence);
}


// CBaseAnimating::GetSequenceMovement  (line 1385, @0x00000000020697d0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetSequenceMovement
// callers: CDOTA_Modifier_Move_From_Activity::UpdateHorizontalMotion
bool __fastcall CBaseAnimating::GetSequenceMovement(
        const CBaseAnimating *const this,
        HSequence hSequence,
        float fromCycle,
        float toCycle,
        Vector *const deltaPosition,
        QAngle *const deltaAngles)
{
  __int64 v9; // rax
  const CBaseAnimatingController *v10; // rdi

  v9 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v9 != 0 )
    v10 = *(v9 + 736);
  else
    v10 = 0;
  return CBaseAnimatingController::GetSequenceMovement(v10, hSequence, fromCycle, toCycle, deltaPosition, deltaAngles);
}


// CBaseAnimating::FindTransitionSequence  (line 1390, @0x0000000002065750, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::FindTransitionSequence
HSequence __fastcall CBaseAnimating::FindTransitionSequence(
        const CBaseAnimating *const this,
        HSequence hCurrentSequence,
        HSequence hGoalSequence,
        int *piDir)
{
  __int64 v7; // rax
  const CBaseAnimatingController *v8; // rdi

  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v7 != 0 )
    v8 = *(v7 + 736);
  else
    v8 = 0;
  return CBaseAnimatingController::FindTransitionSequence(v8, hCurrentSequence, hGoalSequence, piDir);
}


// CBaseAnimating::GotoSequence  (line 1395, @0x0000000002062c40, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSkeletonInstance, GotoSequence, operator const RuntimeClass_t*
// calls: GotoSequence
// callers: CDynamicProp::PropSetSequence
bool __fastcall CBaseAnimating::GotoSequence(
        const CBaseAnimating *const this,
        HSequence hCurrentSequence,
        float flCurrentCycle,
        float flCurrentRate,
        HSequence hGoalSequence,
        HSequence *const hNextSequence,
        float *const flCycle,
        int *const iDir)
{
  __int64 v11; // rax
  const CModel **v12; // rax
  const CModel *v13; // rdi

  v11 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v11 != 0 && (v12 = *(*(*(v11 + 736) + 8LL) + 480LL)) != 0 )
    v13 = *v12;
  else
    v13 = 0;
  return GotoSequence(v13, hCurrentSequence, flCurrentCycle, flCurrentRate, hGoalSequence, hNextSequence, flCycle, iDir);
}


// CBaseAnimating::SetCycle  (line 1400, @0x00000000020667a0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::SetCycle
// callers: CEnvClock::UpdateInternal, CBaseAnimating::CopyAnimationDataFrom, CDynamicProp::FinishSetSequence, CBaseProp::Spawn, CBaseCombatWeapon::SetActivity, CBasePlayerAnimState::RestartMainSequence, CBaseCombatWeapon::SetIdealActivity, CBaseViewModel::ItemPostFrame, CEnvAirStrikeIndoorEffect::CrumbleThink, CEnvEffectsScript::InputSetSequence, CInteractionManager::UpdateInteraction, CFlexCycler::OnTakeDamage (29 total)
void __fastcall CBaseAnimating::SetCycle(CBaseAnimating *const this, double a2, float flCycle)
{
  __int64 v3; // rax
  float v4; // xmm1_4
  float flCyclea; // [rsp+Ch] [rbp-4h]

  flCyclea = *&a2;
  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a2, flCycle);
  if ( v3 != 0 )
    CBaseAnimatingController::SetCycle(*(v3 + 736), flCyclea, v4);
  else
    CBaseAnimatingController::SetCycle(0, flCyclea, v4);
}


// CBaseAnimating::SetPrevCycle  (line 1405, @0x0000000002066950, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::SetPrevCycle
// callers: CDOTA_BaseNPC::UpdateWearablesAnimation
void __fastcall CBaseAnimating::SetPrevCycle(CBaseAnimating *const this, double a2, float flPrevCycle)
{
  __int64 v3; // rax
  float v4; // xmm1_4
  float flPrevCyclea; // [rsp+Ch] [rbp-4h]

  flPrevCyclea = *&a2;
  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a2, flPrevCycle);
  if ( v3 != 0 )
    CBaseAnimatingController::SetPrevCycle(*(v3 + 736), flPrevCyclea, v4);
  else
    CBaseAnimatingController::SetPrevCycle(0, flPrevCyclea, v4);
}


// CBaseAnimating::SetSequence  (line 1410, @0x0000000002062ce0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: CDevtestHierarchy2::Spawn, CBaseAnimating::InputSetSequence, CBaseAnimating::CopyAnimationDataFrom, CDynamicProp::PropSetAnim, CBaseCombatWeapon::SetActivity, CBaseCombatWeapon::SetIdealActivity, CBasePlayer::SharedSpawn, CBaseViewModel::SetWeaponModel, CBaseViewModel::SendViewModelMatchingSequence, CEnvEffectsScript::InputSetSequence, CEnvAirStrikeIndoorEffect::FindAnimationSequence, CGenericFlexCycler::ToggleSequencesThink (26 total)
void __fastcall CBaseAnimating::SetSequence(
        CBaseAnimating *const this,
        HSequence hSequence,
        SetSequenceBehavior_t behavior)
{
  __int64 v5; // rax
  __int64 v6; // rdi

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v5 != 0 )
    v6 = *(v5 + 736);
  else
    v6 = 0;
  (*(*v6 + 184LL))(v6, hSequence.m_Data, behavior);
}


// CBaseAnimating::ResetSequenceInfo  (line 1415, @0x0000000002067330, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::ResetSequenceInfo
// callers: CBaseCombatWeapon::SetActivity, CBaseCombatWeapon::SetIdealActivity, CEnvEffectsScript::InputSetSequence, CFlexCycler::Spawn, CDOTA_Item_Physical::SetContainedItem, CDOTA_Item_Rune::SetRuneType, CFlexExpresser::Spawn
void __fastcall CBaseAnimating::ResetSequenceInfo(CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    CBaseAnimatingController::ResetSequenceInfo(*(v1 + 736));
  else
    CBaseAnimatingController::ResetSequenceInfo(0);
}


// CBaseAnimating::GetAnimTimeInterval  (line 1430, @0x0000000002064dc0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetAnimTimeInterval
// callers: CBaseFlex::IsSuppressedFlexAnimation
float __fastcall CBaseAnimating::GetAnimTimeInterval(const CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return CBaseAnimatingController::GetAnimTimeInterval(*(v1 + 736));
  else
    return CBaseAnimatingController::GetAnimTimeInterval(0);
}


// CBaseAnimating::ExtractBbox  (line 1439, @0x0000000002062ef0, libserver.so)
// calls: CBaseAnimating::GetModelPtr, ExtractBbox
int __fastcall CBaseAnimating::ExtractBbox(
        const CBaseAnimating *const this,
        HSequence hSequence,
        Vector *const mins,
        Vector *const maxs)
{
  const CModel *ModelPtr; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  return ExtractBbox(ModelPtr, hSequence, mins, maxs);
}


// CBaseAnimating::SetSequenceBox  (line 1446, @0x0000000002062f30, libserver.so)  // inlines: ExtractBbox, GetBaseAnimatingController, GetSequence, GetSkeletonInstance, SetCollisionBounds, Vector, operator=
// calls: CBaseAnimating::GetModelPtr, ExtractBbox, CBaseEntity::GetLocalAngles, sincosf, CCollisionProperty::SetCollisionBounds
void __fastcall CBaseAnimating::SetSequenceBox(CBaseAnimating *const this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  HSequence v4; // r12d
  const CModel *ModelPtr; // rax
  float v6; // xmm0_4
  __int64 v7; // rax
  float v8; // xmm11_4
  float x; // xmm13_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm13_4
  float v14; // xmm1_4
  float y; // xmm5_4
  float v16; // xmm4_4
  __m128 v17; // xmm3
  __m128 z_low; // xmm2
  float v19; // xmm14_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  float v22; // xmm13_4
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  float v25; // [rsp+0h] [rbp-90h]
  float cosx; // [rsp+8h] [rbp-88h] BYREF
  float sinx; // [rsp+Ch] [rbp-84h] BYREF
  Vector base; // [rsp+10h] [rbp-80h] BYREF
  Vector maxs; // [rsp+20h] [rbp-70h] BYREF
  Vector rmin; // [rsp+30h] [rbp-60h] BYREF
  Vector rmax; // [rsp+40h] [rbp-50h] BYREF
  Vector transformed; // [rsp+50h] [rbp-40h]
  Vector bounds[2]; // [rsp+60h] [rbp-30h]

  v2 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v2 != 0 )
    v3 = *(v2 + 736);
  else
    v3 = 0;
  v4.m_Data = (*(*v3 + 192LL))(v3);
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ExtractBbox(ModelPtr, v4, &base, &maxs) != 0 )
  {
    v6 = CBaseEntity::GetLocalAngles(this)->y * 0.0174532925199433;
    sincosf(v6, &sinx, &cosx);
    v7 = 0;
    bounds[0] = base;
    bounds[1] = maxs;
    v8 = base.y * cosx;
    x = base.x;
    rmax.x = -9999.0;
    rmin.x = 9999.0;
    v10 = -9999.0;
    v11 = 9999.0;
    rmin.y = 9999.0;
    rmin.z = 9999.0;
    rmax.y = -9999.0;
    rmax.z = -9999.0;
    v25 = -sinx * base.y;
    while ( 1 )
    {
      transformed.z = base.z;
      v12 = cosx * x;
      v13 = x * sinx;
      v14 = v25 + v12;
      transformed.y = v13 + v8;
      if ( v11 > (v25 + v12) )
        rmin.x = v25 + v12;
      if ( v14 > v10 )
        rmax.x = v25 + v12;
      y = rmin.y;
      v16 = rmax.y;
      if ( rmin.y > transformed.y )
      {
        rmin.y = transformed.y;
        y = transformed.y;
      }
      if ( transformed.y > rmax.y )
      {
        rmax.y = transformed.y;
        v16 = transformed.y;
      }
      v17.m128_i32[0] = LODWORD(rmin.z);
      z_low = LODWORD(rmax.z);
      if ( rmin.z > transformed.z )
      {
        rmin.z = transformed.z;
        v17.m128_i32[0] = LODWORD(transformed.z);
      }
      if ( transformed.z > rmax.z )
      {
        rmax.z = transformed.z;
        z_low = LODWORD(transformed.z);
      }
      v19 = rmin.x;
      transformed.y = v13 + v8;
      v20 = rmax.x;
      transformed.z = maxs.z;
      if ( rmin.x > v14 )
      {
        rmin.x = v25 + v12;
        v19 = v25 + v12;
      }
      if ( v14 > rmax.x )
      {
        rmax.x = v25 + v12;
        v20 = v25 + v12;
      }
      if ( y > transformed.y )
      {
        rmin.y = transformed.y;
        y = transformed.y;
      }
      if ( transformed.y > v16 )
      {
        rmax.y = transformed.y;
        v16 = transformed.y;
      }
      if ( v17.m128_f32[0] > transformed.z )
      {
        rmin.z = transformed.z;
        v17.m128_i32[0] = LODWORD(transformed.z);
      }
      if ( transformed.z > z_low.m128_f32[0] )
      {
        rmax.z = transformed.z;
        z_low = LODWORD(transformed.z);
      }
      v21 = v12 + (-sinx * maxs.y);
      transformed.z = base.z;
      v22 = v13 + (maxs.y * cosx);
      transformed.y = v22;
      if ( v19 > v21 )
      {
        rmin.x = v21;
        v19 = v21;
      }
      if ( v21 > v20 )
      {
        rmax.x = v21;
        v20 = v21;
      }
      if ( y > transformed.y )
      {
        rmin.y = transformed.y;
        y = transformed.y;
      }
      if ( transformed.y > v16 )
      {
        rmax.y = transformed.y;
        v16 = transformed.y;
      }
      if ( v17.m128_f32[0] > transformed.z )
      {
        rmin.z = transformed.z;
        v17.m128_i32[0] = LODWORD(transformed.z);
      }
      if ( transformed.z > z_low.m128_f32[0] )
      {
        rmax.z = transformed.z;
        z_low = LODWORD(transformed.z);
      }
      transformed.x = v21;
      transformed.y = v22;
      transformed.z = maxs.z;
      if ( v19 > v21 )
        rmin.x = v21;
      if ( v21 > v20 )
        rmax.x = v21;
      if ( y > transformed.y )
        rmin.y = transformed.y;
      if ( transformed.y > v16 )
        rmax.y = transformed.y;
      ++v7;
      v23 = _mm_cmpge_ss(z_low, LODWORD(transformed.z));
      v24 = _mm_cmpge_ss(LODWORD(transformed.z), v17);
      LODWORD(rmin.z) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v24, LODWORD(transformed.z)).m128_f32[0])
                      | LODWORD(rmin.z) & v24.m128_i32[0];
      LODWORD(rmax.z) = _mm_andnot_ps(v23, LODWORD(transformed.z)).m128_u32[0] | LODWORD(rmax.z) & v23.m128_i32[0];
      if ( v7 == 2 )
        break;
      x = bounds[v7].x;
      v11 = rmin.x;
      v10 = rmax.x;
    }
    rmin.z = 0.0;
    rmax.z = 1.0;
    CCollisionProperty::SetCollisionBounds(&this->m_Collision, &rmin, &rmax);
  }
}


// CBaseAnimating::SelectWeightedSequence  (line 1506, @0x0000000002064ea0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::SelectWeightedSequence
// callers: CBaseAnimating::CanBecomeRagdoll, CBreakableProp::AnimateThink, CBreakableProp::OnAttemptPhysGunPickup, CDynamicProp::AnimThink, CBreakableProp::Spawn, CBaseCombatCharacter::Weapon_CanUse, CBasePlayerAnimState::SelectWeightedSequence, CBaseCombatWeapon::SetActivity, CBaseCombatWeapon::Operator_FrameUpdate, CBaseCombatCharacter::GetDeathActivity, CBasePlayer::SharedSpawn, CRagdollProp::InitRagdollAnimation (38 total)
HSequence __fastcall CBaseAnimating::SelectWeightedSequence(const CBaseAnimating *const this, Activity activity)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::SelectWeightedSequence(*(v3 + 736), activity);
  else
    return CBaseAnimatingController::SelectWeightedSequence(0, activity);
}


// CBaseAnimating::SelectWeightedSequence  (line 1511, @0x00000000020632e0, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSkeletonInstance, SelectWeightedSequence, operator const RuntimeClass_t*
// calls: SelectWeightedSequence
HSequence __fastcall CBaseAnimating::SelectWeightedSequence(
        const CBaseAnimating *const this,
        Activity activity,
        HSequence hCurSequence)
{
  __int64 v5; // rax
  const CModel **v6; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v5 != 0 && (v6 = *(*(*(v5 + 736) + 8LL) + 480LL)) != 0 )
    return SelectWeightedSequence(*v6, activity, hCurSequence);
  else
    return SelectWeightedSequence(0, activity, hCurSequence);
}


// CBaseAnimating::SelectWeightedSequenceFromModifiers  (line 1516, @0x0000000002064fa0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::SelectWeightedSequenceFromModifiers
// callers: CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier, CDOTA_BaseNPC::UpdateWearablesAnimation, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, CDOTA_Modifier_Tusk_WalrusPunch::OnAttack
HSequence __fastcall CBaseAnimating::SelectWeightedSequenceFromModifiers(
        const CBaseAnimating *const this,
        Activity activity,
        const CUtlSymbol *pActivityModifiers,
        int iModifierCount)
{
  __int64 v7; // rax
  const CBaseAnimatingController *v8; // rdi

  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v7 != 0 )
    v8 = *(v7 + 736);
  else
    v8 = 0;
  return CBaseAnimatingController::SelectWeightedSequenceFromModifiers(v8, activity, pActivityModifiers, iModifierCount);
}


// CBaseAnimating::SelectHeaviestSequence  (line 1521, @0x0000000002063360, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSkeletonInstance, SelectHeaviestSequence, operator const RuntimeClass_t*
// calls: SelectHeaviestSequence
HSequence __fastcall CBaseAnimating::SelectHeaviestSequence(const CBaseAnimating *const this, Activity activity)
{
  __int64 v3; // rax
  const CModel **v4; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 && (v4 = *(*(*(v3 + 736) + 8LL) + 480LL)) != 0 )
    return SelectHeaviestSequence(*v4, activity);
  else
    return SelectHeaviestSequence(0, activity);
}


// CBaseAnimating::LookupActivity  (line 1526, @0x00000000020633d0, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSkeletonInstance, LookupActivity, operator const RuntimeClass_t*
// calls: LookupActivity
// callers: CDOTA_BaseNPC::Input_ForcePlayActivityOnce, CDOTA_Modifier_Move_From_Activity::OnCreated
Activity __fastcall CBaseAnimating::LookupActivity(const CBaseAnimating *const this, const char *pActivityName)
{
  __int64 v3; // rax
  const CModel **v4; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 && (v4 = *(*(*(v3 + 736) + 8LL) + 480LL)) != 0 )
    return LookupActivity(*v4, pActivityName);
  else
    return LookupActivity(0, pActivityName);
}


// CBaseAnimating::RegisterPrivateActivity  (line 1531, @0x0000000002063450, libserver.so)  // inlines: ActivityList_RegisterPrivateActivity
Activity __fastcall CBaseAnimating::RegisterPrivateActivity(
        const CBaseAnimating *const this,
        const char *pszActivityName)
{
  if ( g_pAnimationSystem != 0 )
    return (*(*g_pAnimationSystem + 296LL))(g_pAnimationSystem, pszActivityName);
  else
    return -1;
}


// CBaseAnimating::SetPoseParameter  (line 1540, @0x0000000002067f40, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::SetPoseParameter
// callers: CBaseAnimating::ScriptSetPoseParameter
float __fastcall CBaseAnimating::SetPoseParameter(
        CBaseAnimating *const this,
        const char *szName,
        double a3,
        float flValue)
{
  __int64 v5; // rax
  float v6; // xmm1_4
  float flValuea; // [rsp+Ch] [rbp-14h]

  flValuea = *&a3;
  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a3, flValue);
  if ( v5 != 0 )
    return CBaseAnimatingController::SetPoseParameter(*(v5 + 736), szName, flValuea, v6);
  else
    return CBaseAnimatingController::SetPoseParameter(0, szName, flValuea, v6);
}


// CBaseAnimating::SetPoseParameter  (line 1545, @0x00000000020679b0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::SetPoseParameter
// callers: CBaseAnimating::InitPoseParameters, CBaseAnimating::SetMovementPoseParams, CBasePlayerAnimState::ComputePoseParam_FlexAnim, CBasePlayerAnimState::SetOuterPoseParameter, CBasePlayerAnimState::SnapPoseParams, CBasePlayerAnimState::ConvergePoseParams, CBasePlayerAnimState::ComputePoseParam_MoveYaw, CGenericFlexCycler::OscillatePoseParametersThink, CGenericFlexCycler::Spawn, CFourWheelVehiclePhysics::InitializePoseParameters, CFourWheelVehiclePhysics::CalcWheelData, CFourWheelVehiclePhysics::VPhysicsUpdate (20 total)
float __fastcall CBaseAnimating::SetPoseParameter(CBaseAnimating *const this, int iParameter, double a3, float flValue)
{
  __int64 v5; // rax
  float v6; // xmm1_4
  float flValuea; // [rsp+Ch] [rbp-14h]

  flValuea = *&a3;
  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a3, flValue);
  if ( v5 != 0 )
    return CBaseAnimatingController::SetPoseParameter(*(v5 + 736), iParameter, flValuea, v6);
  else
    return CBaseAnimatingController::SetPoseParameter(0, iParameter, flValuea, v6);
}


// CBaseAnimating::ScriptSetPoseParameter  (line 1550, @0x0000000002067f90, libserver.so)
// calls: CBaseAnimating::SetPoseParameter
float __fastcall CBaseAnimating::ScriptSetPoseParameter(
        CBaseAnimating *const this,
        const char *szName,
        double a3,
        float fValue)
{
  return CBaseAnimating::SetPoseParameter(this, szName, a3, fValue);
}


// CBaseAnimating::GetPoseParameter  (line 1555, @0x0000000002067fd0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetPoseParameter
float __fastcall CBaseAnimating::GetPoseParameter(const CBaseAnimating *const this, const char *szName)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetPoseParameter(*(v3 + 736), szName);
  else
    return CBaseAnimatingController::GetPoseParameter(0, szName);
}


// CBaseAnimating::GetPoseParameter  (line 1560, @0x0000000002067cc0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetPoseParameter
// callers: CBasePlayerAnimState::SnapPoseParams, CBasePlayerAnimState::ConvergePoseParams, CFourWheelVehiclePhysics::Think, UTIL_TransferPoseParameters
float __fastcall CBaseAnimating::GetPoseParameter(const CBaseAnimating *const this, int iParameter)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetPoseParameter(*(v3 + 736), iParameter);
  else
    return CBaseAnimatingController::GetPoseParameter(0, iParameter);
}


// CBaseAnimating::GetNumPoseParameters  (line 1565, @0x0000000002067a80, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetNumPoseParameters
int __fastcall CBaseAnimating::GetNumPoseParameters(const CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return CBaseAnimatingController::GetNumPoseParameters(*(v1 + 736));
  else
    return CBaseAnimatingController::GetNumPoseParameters(0);
}


// CBaseAnimating::GetPoseParameterArray  (line 1570, @0x0000000002063480, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: CreateServerRagdoll
const float *__fastcall CBaseAnimating::GetPoseParameterArray(const CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return (*(v1 + 736) + 92LL);
  else
    return (&stru_10 + 76);
}


// CBaseAnimating::GetPoseParameterRange  (line 1575, @0x0000000002067e40, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetPoseParameterRange
// callers: CBasePlayerAnimState::SnapPoseParams, CBasePlayerAnimState::ConvergePoseParams, CPoseController::SetCurrentPose
bool __fastcall CBaseAnimating::GetPoseParameterRange(
        const CBaseAnimating *const this,
        int nIndex,
        float *const flMinValue,
        float *const flMaxValue)
{
  __int64 v7; // rax
  const CBaseAnimatingController *v8; // rdi

  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v7 != 0 )
    v8 = *(v7 + 736);
  else
    v8 = 0;
  return CBaseAnimatingController::GetPoseParameterRange(v8, nIndex, flMinValue, flMaxValue);
}


// CBaseAnimating::HasPoseParameter  (line 1580, @0x0000000002068150, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::HasPoseParameter
bool __fastcall CBaseAnimating::HasPoseParameter(
        const CBaseAnimating *const this,
        HSequence hSequence,
        const char *szName)
{
  __int64 v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v5 != 0 )
    return CBaseAnimatingController::HasPoseParameter(*(v5 + 736), hSequence, szName);
  else
    return CBaseAnimatingController::HasPoseParameter(0, hSequence, szName);
}


// CBaseAnimating::HasPoseParameter  (line 1585, @0x00000000020680c0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::HasPoseParameter
bool __fastcall CBaseAnimating::HasPoseParameter(const CBaseAnimating *const this, HSequence hSequence, int iParameter)
{
  __int64 v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v5 != 0 )
    return CBaseAnimatingController::HasPoseParameter(*(v5 + 736), hSequence, iParameter);
  else
    return CBaseAnimatingController::HasPoseParameter(0, hSequence, iParameter);
}


// CBaseAnimating::LookupPoseParameter  (line 1590, @0x0000000002067ec0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::LookupPoseParameter
// callers: CBasePlayerAnimState::CachePoseParameters, CBasePlayerAnimState::OnNewModel, CFourWheelVehiclePhysics::InitializePoseParameters, CBasePlayer::OnNewModel, CBasePlayer::OnRestore, CPoseController::BuildPropList, CPoseController::BuildPoseIndexList, CPoseController::SetProp, CDOTA_BaseNPC::OnNewModel, CDOTA_BaseNPC_ShadowShaman_SerpentWard::OnAlive, CDOTA_BaseNPC_Venomancer_PlagueWard::OnAlive
int __fastcall CBaseAnimating::LookupPoseParameter(const CBaseAnimating *const this, const char *pPoseParameterName)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::LookupPoseParameter(*(v3 + 736), pPoseParameterName);
  else
    return CBaseAnimatingController::LookupPoseParameter(0, pPoseParameterName);
}


// CBaseAnimating::EdgeLimitPoseParameter  (line 1595, @0x0000000002068250, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::EdgeLimitPoseParameter
float __fastcall CBaseAnimating::EdgeLimitPoseParameter(
        const CBaseAnimating *const this,
        int iParameter,
        double a3,
        float flValue,
        float flBase)
{
  __int64 v6; // rax
  float v7; // xmm2_4
  float flValuea; // [rsp+8h] [rbp-18h]

  flValuea = *&a3;
  v6 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode, a3, flValue, flBase);
  if ( v6 != 0 )
    return CBaseAnimatingController::EdgeLimitPoseParameter(*(v6 + 736), iParameter, flValuea, flValue, v7);
  else
    return CBaseAnimatingController::EdgeLimitPoseParameter(0, iParameter, flValuea, flValue, v7);
}


// CBaseAnimating::InitPoseParameters  (line 1600, @0x0000000002067a00, libserver.so)
// calls: CBaseEntity::GetModelData, CBaseAnimating::SetPoseParameter, CModel::GetNumPoseParameters
void __fastcall CBaseAnimating::InitPoseParameters(CBaseAnimating *const this)
{
  const CModel *ModelData; // r12
  int i; // ebx
  float v4; // xmm1_4

  ModelData = CBaseEntity::GetModelData(this);
  if ( ModelData != 0 )
  {
    for ( i = 0; i < CModel::GetNumPoseParameters(ModelData); ++i )
      CBaseAnimating::SetPoseParameter(this, i, 0.0, v4);
  }
}


// CBaseAnimating::DispatchAnimEvents  (line 1616, @0x00000000020634b0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: CDevtestHierarchy::AnimationThink, CBaseEntity::SetAnimTime, CBreakableProp::AnimateThink, CBreakableProp::OnAttemptPhysGunPickup, CDynamicProp::AnimThink, CBaseCombatWeapon::Operator_FrameUpdate, CPointCommentaryNode::SpinThink, CEnvEffectsScript::Think, CEnvAirStrikeOutdoorEffect::CrumbleThink, CFlexCycler::FlexThink, CBasePlayer::PostThink, CDOTABody::Update
void __fastcall CBaseAnimating::DispatchAnimEvents(CBaseAnimating *const this, CBaseAnimating *eventHandler)
{
  __int64 v4; // rax
  __int64 v5; // rdi

  v4 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v4 != 0 )
    v5 = *(v4 + 736);
  else
    v5 = 0;
  (*(*v5 + 112LL))(v5, eventHandler, this->m_flAnimTime.m_Value);
}


// CBaseAnimating::HasAnimEvent  (line 1621, @0x0000000002067850, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::HasAnimEvent
bool __fastcall CBaseAnimating::HasAnimEvent(const CBaseAnimating *const this, HSequence hSequence, int nEvent)
{
  __int64 v5; // rax

  v5 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v5 != 0 )
    return CBaseAnimatingController::HasAnimEvent(*(v5 + 736), hSequence, nEvent);
  else
    return CBaseAnimatingController::HasAnimEvent(0, hSequence, nEvent);
}


// CBaseAnimating::GetNumFlexControllers  (line 1630, @0x0000000002063500, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetNumFlexControllers
// callers: CBaseFlex::FindFlexController, CBaseFlex::SetFlexWeight, CBaseFlex::GetFlexWeight, CBaseFlex::ProcessSceneEvents, CBaseFlex::OnNewModel, CFlexCycler::SetFlexTarget, CFlexCycler::LookupFlex, CFlexCycler::FlexThink, CGenericFlexCycler::Spawn
LocalFlexController_t __fastcall CBaseAnimating::GetNumFlexControllers(const CBaseAnimating *const this)
{
  const CSkeletonInstance *v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetNumFlexControllers(v1);
}


// CBaseAnimating::GetFlexControllerName  (line 1635, @0x0000000002063520, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetFlexControllerName
// callers: CBaseFlex::FindFlexController, CFlexCycler::SetFlexTarget, CFlexCycler::LookupFlex, CFlexCycler::FlexThink
const char *__fastcall CBaseAnimating::GetFlexControllerName(
        const CBaseAnimating *const this,
        LocalFlexController_t iFlexController)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetFlexControllerName(v3, iFlexController);
}


// CBaseAnimating::GetFlexControllerType  (line 1640, @0x0000000002063550, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetFlexControllerType
// callers: CFlexCycler::SetFlexTarget, CFlexCycler::FlexThink
const char *__fastcall CBaseAnimating::GetFlexControllerType(
        const CBaseAnimating *const this,
        LocalFlexController_t iFlexController)
{
  const CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetFlexControllerType(v3, iFlexController);
}


// CBaseAnimating::GetIdealSpeed  (line 1649, @0x0000000002058880, libserver.so)  // inlines: GetBaseAnimatingController, GetGroundSpeed, GetSkeletonInstance
float __fastcall CBaseAnimating::GetIdealSpeed(const CBaseAnimating *const this)
{
  __int64 v1; // rax
  float result; // xmm0_4

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return *(*(v1 + 736) + 68LL);
  LODWORD(result) = 5;
  return result;
}


// CBaseAnimating::GetIdealAccel  (line 1654, @0x00000000020588c0, libserver.so)
float __fastcall CBaseAnimating::GetIdealAccel(const CBaseAnimating *const this)
{
  return (*(this->_vptr_IHandleEntity + 227))(this) + 50.0;
}


// CBaseAnimating::GetGroundSpeed  (line 1665, @0x0000000002063580, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
float __fastcall CBaseAnimating::GetGroundSpeed(const CBaseAnimating *const this)
{
  __int64 v1; // rax
  float result; // xmm0_4

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return *(*(v1 + 736) + 68LL);
  LODWORD(result) = 5;
  return result;
}


// CBaseAnimating::GetSequenceGroundSpeed  (line 1670, @0x00000000020670e0, libserver.so)  // inlines: GetBaseAnimatingController, GetModelData, GetModelPtr, GetSequenceGroundSpeed, GetSkeletonInstance, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::GetSequenceGroundSpeed
// callers: CBaseAnimating::DrawDebugTextOverlays, CBasePlayerAnimState::DebugShowAnimState, CDOTABody::GetAnimationSpeed
float __fastcall CBaseAnimating::GetSequenceGroundSpeed(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax
  const CBaseAnimatingController *v4; // rdi
  const CModel **m_pBinding; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
  {
    v4 = *(v3 + 736);
    m_pBinding = v4->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      return CBaseAnimatingController::GetSequenceGroundSpeed(v4, *m_pBinding, hSequence);
  }
  else
  {
    v4 = 0;
  }
  return CBaseAnimatingController::GetSequenceGroundSpeed(v4, 0, hSequence);
}


// CBaseAnimating::GetGroundSpeedVelocity  (line 1675, @0x0000000002069420, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetGroundSpeedVelocity
// callers: UTIL_PredictedPosition
Vector __fastcall CBaseAnimating::GetGroundSpeedVelocity(const CBaseAnimating *const this)
{
  __int64 v1; // rax
  Vector GroundSpeedVelocity; // 0:kr00_12.12
  Vector v5; // 0:kr14_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
  {
    GroundSpeedVelocity = CBaseAnimatingController::GetGroundSpeedVelocity(*(v1 + 736));
    *&result.x = *&GroundSpeedVelocity.x;
    result.z = GroundSpeedVelocity.z;
  }
  else
  {
    v5 = CBaseAnimatingController::GetGroundSpeedVelocity(0);
    *&result.x = *&v5.x;
    result.z = v5.z;
  }
  return result;
}


// CBaseAnimating::SetGroundSpeed  (line 1680, @0x00000000020635c0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance, SetGroundSpeed
// write access to const memory has been detected, the output may be wrong!
void __fastcall CBaseAnimating::SetGroundSpeed(CBaseAnimating *const this, double a2, float flGroundSpeed)
{
  __int64 v3; // rax
  int flGroundSpeeda; // [rsp+Ch] [rbp-4h]

  flGroundSpeeda = LODWORD(a2);
  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, a2, flGroundSpeed);
  if ( v3 != 0 )
    *(*(v3 + 736) + 68LL) = flGroundSpeeda;
  else
    HIDWORD(stru_10.m_pIdentityChunks[5]) = flGroundSpeeda;
}


// CBaseAnimating::GetInstantaneousVelocity  (line 1685, @0x0000000002069570, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetInstantaneousVelocity
float __fastcall CBaseAnimating::GetInstantaneousVelocity(
        const CBaseAnimating *const this,
        double a2,
        float flInterval)
{
  __int64 v3; // rax
  float v4; // xmm1_4
  int flIntervala; // [rsp+Ch] [rbp-4h]

  flIntervala = LODWORD(a2);
  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode, a2, flInterval);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetInstantaneousVelocity(*(v3 + 736), COERCE_DOUBLE(flIntervala), v4);
  else
    return CBaseAnimatingController::GetInstantaneousVelocity(0, COERCE_DOUBLE(flIntervala), v4);
}


// CBaseAnimating::GetEntryVelocity  (line 1690, @0x0000000002069640, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetEntryVelocity
float __fastcall CBaseAnimating::GetEntryVelocity(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetEntryVelocity(*(v3 + 736), hSequence);
  else
    return CBaseAnimatingController::GetEntryVelocity(0, hSequence);
}


// CBaseAnimating::GetExitVelocity  (line 1695, @0x0000000002069720, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::GetExitVelocity
float __fastcall CBaseAnimating::GetExitVelocity(const CBaseAnimating *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    return CBaseAnimatingController::GetExitVelocity(*(v3 + 736), hSequence);
  else
    return CBaseAnimatingController::GetExitVelocity(0, hSequence);
}


// CBaseAnimating::UseClientSideAnimation  (line 1704, @0x0000000002064a10, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::UseClientSideAnimation
// callers: CDynamicProp::SpawnServerSide, CGenericFlexCycler::Spawn, CDOTA_Item_Rune::Spawn, CDOTA_Item_Physical::Spawn, CDOTAPlayer::Connect, CDOTA_BaseNPC::Connect, CDOTA_Beastmaster_Axe::Spawn, CDOTA_DeathProphet_Exorcism_Spirit::Spawn, CDOTA_Wisp_Spirit::Spawn
void __fastcall CBaseAnimating::UseClientSideAnimation(CBaseAnimating *const this, bool bUseAnimation)
{
  __int64 v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    CBaseAnimatingController::UseClientSideAnimation(*(v3 + 736), bUseAnimation);
  else
    CBaseAnimatingController::UseClientSideAnimation(0, bUseAnimation);
}


// CBaseAnimating::IsUsingClientSideAnimation  (line 1709, @0x0000000002063610, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// callers: SendProxyUsingClientSideAnimation_RecipientsFilter, SendProxyNotUsingClientSideAnimation_RecipientsFilter, CDOTA_BaseNPC::ShouldWearableMatchAnimation
bool __fastcall CBaseAnimating::IsUsingClientSideAnimation(const CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 )
    return *(*(v1 + 736) + 188LL);
  else
    return 0;
}


// CBaseAnimating::EnableIK  (line 1714, @0x0000000002084730, libserver.so)  // inlines: EnableIK, GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::ResetIK
void __fastcall CBaseAnimating::EnableIK(CBaseAnimating *const this, bool bEnable)
{
  __int64 v3; // rax
  CBaseAnimatingController *v4; // rdi

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    v4 = *(v3 + 736);
  else
    v4 = 0;
  if ( bEnable != v4->m_bEnableIK )
  {
    v4->m_bEnableIK = bEnable;
    if ( !bEnable )
      CBaseAnimatingController::ResetIK(v4);
  }
}


// CBaseAnimating::SetHitboxSet  (line 1723, @0x0000000002063650, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::SetHitboxSet
void __fastcall CBaseAnimating::SetHitboxSet(CBaseAnimating *const this, int nSetNum)
{
  CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  CSkeletonInstance::SetHitboxSet(v3, nSetNum);
}


// CBaseAnimating::GetHitboxSet  (line 1728, @0x0000000002063680, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetHitboxSet
// callers: CBaseAnimating::GetHitboxBone, CBaseAnimating::GetHitboxesFrontside
int __fastcall CBaseAnimating::GetHitboxSet(const CBaseAnimating *const this)
{
  const CSkeletonInstance *v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetHitboxSet(v1);
}


// CBaseAnimating::GetHitboxBone  (line 1733, @0x00000000020636a0, libserver.so)
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetHitboxSet, CModel::GetHitboxSetByIndex, CHitBoxSet::numhitboxes, CHitBoxSet::pHitbox, CModel::GetBoneIndexForHitbox
// callers: CreateServerRagdoll
int __fastcall CBaseAnimating::GetHitboxBone(const CBaseAnimating *const this, int nHitboxIndex)
{
  const CModel *ModelPtr; // rbx
  int HitboxSet; // eax
  const CHitBoxSet *HitboxSetByIndex; // rax
  const CHitBoxSet *v7; // r12
  const CHitBox *v8; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return 0;
  HitboxSet = CBaseAnimating::GetHitboxSet(this);
  HitboxSetByIndex = CModel::GetHitboxSetByIndex(ModelPtr, HitboxSet, 0);
  v7 = HitboxSetByIndex;
  if ( HitboxSetByIndex == 0 || CHitBoxSet::numhitboxes(HitboxSetByIndex) <= nHitboxIndex )
    return 0;
  v8 = CHitBoxSet::pHitbox(v7, nHitboxIndex);
  return CModel::GetBoneIndexForHitbox(ModelPtr, v8);
}


// CBaseAnimating::HasSelectionBoxes  (line 1748, @0x0000000002063720, libserver.so)
// calls: CBaseAnimating::GetModelPtr, FindHitboxSetByName
// strings: "select_high", "select_low"
bool __fastcall CBaseAnimating::HasSelectionBoxes(CBaseAnimating *const this)
{
  const CModel *ModelPtr; // rax
  const CModel *v2; // rbx

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  v2 = ModelPtr;
  return ModelPtr != 0
      && FindHitboxSetByName(ModelPtr, "select_high") != -1
      && FindHitboxSetByName(v2, "select_low") != -1;
}


// CBaseAnimating::GetHitboxSet  (line 1763, @0x00000000020762a0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetBody, CModel::GetHitboxSetsForMeshGroupMask, CUtlMemory<HitBoxSetAndMesh_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseAnimating::HitboxToWorldTransforms, CBaseAnimating::ComputeHitboxSurroundingBox, CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox, CBaseAnimating::GetGlobalHitboxIndexFromSetIndex
const CHitBoxSet *__fastcall CBaseAnimating::GetHitboxSet(const CBaseAnimating *const this, CUtlStringToken setName)
{
  const CModel *ModelPtr; // r12
  MeshGroupMask_t Body; // rax
  const CHitBoxSet *m_pHitBoxSet; // r12
  uint32 v7; // edx
  CHitboxSetList hitBoxSets; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return 0;
  hitBoxSets.m_Size = 0;
  hitBoxSets.m_Memory.m_nAllocationCount = 16;
  hitBoxSets.m_Memory.m_nGrowSize = 0x80000000;
  hitBoxSets.m_Memory.m_pMemory = &hitBoxSets.m_Memory.m_FixedMemory;
  Body = CBaseAnimating::GetBody(this);
  CModel::GetHitboxSetsForMeshGroupMask(ModelPtr, &hitBoxSets, Body, setName);
  m_pHitBoxSet = 0;
  if ( hitBoxSets.m_Size != 0 )
    m_pHitBoxSet = hitBoxSets.m_Memory.m_pMemory->m_pHitBoxSet;
  hitBoxSets.m_Size = 0;
  v7 = hitBoxSets.m_Memory.m_nGrowSize & 0xC0000000;
  if ( hitBoxSets.m_Memory.m_nAllocationCount < 0 || hitBoxSets.m_Memory.m_pMemory == &hitBoxSets.m_Memory.m_FixedMemory )
  {
    if ( v7 == 0 )
      CUtlMemory<HitBoxSetAndMesh_t,int>::Purge(&hitBoxSets.m_Memory);
  }
  else if ( hitBoxSets.m_Memory.m_pMemory != 0 && v7 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return m_pHitBoxSet;
}


// CBaseAnimating::GetHitboxSetName  (line 1779, @0x0000000002063780, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetHitboxSetName
// callers: CBaseAnimating::GetGlobalHitboxIndexFromSetIndex
const char *__fastcall CBaseAnimating::GetHitboxSetName(CBaseAnimating *const this)
{
  const CSkeletonInstance *v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  return CSkeletonInstance::GetHitboxSetName(v1);
}


// CBaseAnimating::GetGlobalHitboxIndexFromSetIndex  (line 1785, @0x00000000020768a0, libserver.so)  // inlines: MakeStringToken
// calls: CBaseAnimating::GetHitboxSetName, CBaseAnimating::GetHitboxSet, CHitBoxSet::numhitboxes, CHitBoxSet::pHitbox, MurmurHash2LowerCase, RegisterStringToken
int __fastcall CBaseAnimating::GetGlobalHitboxIndexFromSetIndex(CBaseAnimating *const this, int nSetIndex)
{
  const char *HitboxSetName; // rax
  CUtlStringToken v5; // esi
  const char *v6; // rbx
  const CHitBoxSet *HitboxSet; // rax
  const CHitBoxSet *v8; // rbx
  const CHitBox *v9; // rax
  uint32 v11; // eax
  uint32 v12; // [rsp+Ch] [rbp-24h]

  HitboxSetName = CBaseAnimating::GetHitboxSetName(this);
  v5.m_nHashCode = 0;
  v6 = HitboxSetName;
  if ( HitboxSetName != 0 && *HitboxSetName != 0 )
  {
    v11 = MurmurHash2LowerCase(HitboxSetName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v12 = v11;
      RegisterStringToken(v11, v6, 0, 1);
      v5.m_nHashCode = v12;
    }
    else
    {
      v5.m_nHashCode = v11;
    }
  }
  HitboxSet = CBaseAnimating::GetHitboxSet(this, v5);
  v8 = HitboxSet;
  if ( HitboxSet != 0
    && CHitBoxSet::numhitboxes(HitboxSet) > nSetIndex
    && (v9 = CHitBoxSet::pHitbox(v8, nSetIndex)) != 0 )
  {
    return v9->m_nHitBoxIndex;
  }
  else
  {
    return -1;
  }
}


// CBaseAnimating::GetBonePosition  (line 1809, @0x0000000002063880, libserver.so)  // inlines: MatrixAngles, MatrixPosition, operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseAnimating::GetModelPtr, CModel::NumBones, CBaseAnimating::GetBoneTransform, MatrixAngles
// callers: CreatePiece, CreateGibsFromList, CBaseServerVehicle::GetEntryAnimForPoint, CDOTA_BaseNPC_Effigy_Statue::Spawn
void __fastcall CBaseAnimating::GetBonePosition(
        CBaseAnimating *const this,
        int iBone,
        Vector *const origin,
        QAngle *const angles)
{
  const CModel *ModelPtr; // rax
  matrix3x4_t bonetoworld; // [rsp+0h] [rbp-60h] BYREF

  *origin = *CBaseEntity::GetAbsOrigin(this);
  *angles = *CBaseEntity::GetAbsAngles(this);
  if ( iBone >= 0 )
  {
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    if ( ModelPtr != 0 && iBone < CModel::NumBones(ModelPtr) )
    {
      CBaseAnimating::GetBoneTransform(this, iBone, &bonetoworld);
      MatrixAngles(&bonetoworld, angles);
      origin->x = bonetoworld.m_flMatVal[0][3];
      origin->y = bonetoworld.m_flMatVal[1][3];
      origin->z = bonetoworld.m_flMatVal[2][3];
    }
  }
}


// CBaseAnimating::GetBoneTransform  (line 1837, @0x00000000020637a0, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetSkeletonInstance, operator[]
// calls: CSkeletonInstance::GetNumBones, CBaseEntity::EntityToWorldTransform, MatrixCopy, CSkeletonInstance::GetWorldSpaceTransform
// callers: CBaseAnimating::GetBonePosition, CBaseAnimating::GetHitboxesFrontside, CBaseCombatCharacter::Weapon_Drop
void __fastcall CBaseAnimating::GetBoneTransform(
        CBaseAnimating *const this,
        int iBone,
        matrix3x4_t *const boneToWorldOut)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v9; // rax
  const CSkeletonInstance *v10; // rax
  const CSkeletonInstance *v11; // r12
  matrix3x4_t *v12; // rax

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v9 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v9 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v9 = 0;
  }
  v10 = (*(**(v9 + 8) + 72LL))(*(v9 + 8));
  v11 = v10;
  if ( v10 != 0 && iBone >= 0 && iBone < CSkeletonInstance::GetNumBones(v10) )
  {
    *boneToWorldOut = CSkeletonInstance::GetWorldSpaceTransform(v11, iBone)->matrix3x4_t;
  }
  else
  {
    v12 = CBaseEntity::EntityToWorldTransform(this);
    MatrixCopy(v12, boneToWorldOut);
  }
}


// CBaseAnimating::DrawVCollide  (line 1862, @0x0000000002089910, libserver.so)  // inlines: CBoneAccessor, CSmartPtr, Cleanup, DebugMeshParams_t, DebugSceneObjectParams_t, FromUntypedHandleUnchecked, GetComponent<CBodyComponent>, GetSkeletonInstance, GetWorldSpaceBones, GetWorldSpaceState, InitUntypedUnchecked, IsSolid, Release<CPhysAggregateData>, Reset, ResourceHandleToData<InfoForResourceTypeCModel>, SetBounds, SetToIdentity, VertexColor_t, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator int, operator=, operator[], ~CBoneAccessor, ~CSmartPtr, ~DebugMeshParams_t, ~DebugSceneObjectParams_t
// calls: CBaseEntity::GetModel, CModel::HasCollision, CModel::MasterSkeleton, CModel::AcquirePhysicsRef, CPhysAggregateData::Release, CModelSkeleton::NumBones, CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::SetCount, CSkeletonInstance::CalcWorldSpaceBones, MatrixCopy, CModel::NumBones, SetIdentityMatrix, operator delete [] (14 total)
// globals: g_pDebugOverlay
void __fastcall CBaseAnimating::DrawVCollide(CBaseAnimating *const this, bool bWireframe)
{
  const CModel *m_pData; // r13
  CCollisionProperty *m_pCollision; // r15
  CPhysAggregateData *v6; // r15
  __int64 (__fastcall *v7)(ISceneSystem *, __int64, CBoneAccessor<matrix3x4a_t> *, SceneObjectBuffers_t *, __int64, _QWORD); // r15
  HMaterialStrong *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  const CModelSkeleton *v11; // rax
  int v12; // eax
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v16; // rax
  CSkeletonInstance *v17; // rbx
  const uint32 *m_pReadableBones; // rdx
  int v19; // r12d
  int m_nBoneCount; // eax
  const matrix3x4a_t *m_pTransforms; // rcx
  __int64 v22; // rbx
  const CModelSkeleton *v23; // rax
  int v24; // eax
  uint32 v25[4]; // [rsp+10h] [rbp-130h] BYREF
  HModel hModel; // [rsp+20h] [rbp-120h] BYREF
  CPhysAggregateData *v27; // [rsp+30h] [rbp-110h]
  Vector vecSurroundMins; // [rsp+40h] [rbp-100h] BYREF
  Vector vecSurroundMaxs; // [rsp+50h] [rbp-F0h] BYREF
  CBoneAccessor<matrix3x4a_t> worldspaceTransforms; // [rsp+60h] [rbp-E0h] BYREF
  SceneObjectBuffers_t dso; // [rsp+80h] [rbp-C0h] BYREF
  DebugSceneObjectParams_t params; // [rsp+C0h] [rbp-80h] BYREF

  if ( g_pVPhysics2 != 0 )
  {
    CBaseEntity::GetModel(&hModel, this);
    if ( hModel.m_pBinding != 0 && hModel.m_pBinding->m_nRefCount.m_value > 0 )
    {
      m_pData = hModel.m_pBinding->m_pData;
      if ( hModel.m_pBinding->m_pData != 0 && CModel::HasCollision(hModel.m_pBinding->m_pData) )
      {
        m_pCollision = this->m_pCollision;
        if ( m_pCollision != 0
          && ((*((*(m_pCollision->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) != 0
           || (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) != 0)
          && m_pCollision->m_nSolidType.m_Value != SolidType_t::SOLID_NONE )
        {
          LODWORD(dso.m_hDebugIndexBuffer) = -64;
          params.m_pCollisionMesh.m_pObj = 0;
          params.m_vColorSelectedCollision.color = -1;
          params.m_pMasterSkeleton = 0;
          params.m_vColorCollision.color = -4144960;
          params.m_flConstraintScale = 4.0;
          params.m_nConstraintAlpha = 0x80;
          params.m_nSelectedConstraintAlpha = -1;
          params.m_nSelectedConstraint = -1;
          params.m_nSelectedPart = -1;
          params.m_vColorStaticCollision.color = -64;
          params.m_nFlags = 0;
          params.m_nSortPoseCount = 0;
          params.m_pScaleVector = 0;
          params.m_pMasterSkeleton = CModel::MasterSkeleton(m_pData);
          (*(*g_pDebugOverlay + 80LL))(v25);
          params.m_nConstraintAlpha = 0;
          params.m_nFlags |= 1u;
          params.m_nSelectedConstraint = -1;
          params.m_nSelectedPart = -1;
          params.m_vColorCollision.color = v25[0];
          CModel::AcquirePhysicsRef(m_pData);
          v6 = v27;
          if ( params.m_pCollisionMesh.m_pObj != 0 )
            CPhysAggregateData::Release(params.m_pCollisionMesh.m_pObj);
          params.m_pCollisionMesh.m_pObj = v6;
          if ( (*(g_pVPhysics2->_vptr_IAppSystem + 53))(g_pVPhysics2, &params, &dso) != 0
            && ((v7 = *(*g_pSceneSystem + 856LL), !bWireframe)
              ? (v8 = &g_hShowCollisionGeometryFlatshaded)
              : (v8 = &g_hShowCollisionGeometryMatWireframe),
                worldspaceTransforms.m_pBones = v8->m_pBinding,
                v9 = (*(*g_pDebugOverlay + 584LL))(g_pDebugOverlay),
                (v10 = v7(g_pSceneSystem, v9, &worldspaceTransforms, &dso, 0x4200000001LL, 0)) != 0) )
          {
            v11 = CModel::MasterSkeleton(m_pData);
            v12 = CModelSkeleton::NumBones(v11);
            CUtlVectorBase<matrix3x4a_t,CUtlMemory<matrix3x4a_t,int>>::SetCount((v10 + 160), v12 + 1);
            m_pEntity = this->m_pEntity;
            m_pInstance = m_pEntity->m_pInstance;
            if ( m_pEntity->m_pInstance != 0 )
            {
              m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
              v16 = 0;
              if ( m_nBaseOffset != 0xFFFF )
                v16 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
            }
            else
            {
              v16 = 0;
            }
            v17 = (*(**(v16 + 8) + 72LL))(*(v16 + 8));
            CSkeletonInstance::CalcWorldSpaceBones(v17, CModelSkeleton::BoneFlags_t::FLAG_PHYSICS);
            m_pReadableBones = v17->m_modelState.m_simulationState.m_pReadableBones;
            v19 = 0;
            m_nBoneCount = v17->m_modelState.m_simulationState.m_nBoneCount;
            m_pTransforms = v17->m_modelState.m_simulationState.m_pTransforms;
            worldspaceTransforms.m_bOwnsMemory = 0;
            v22 = 0;
            worldspaceTransforms.m_pReadableBones = m_pReadableBones;
            worldspaceTransforms.m_nBones = m_nBoneCount;
            worldspaceTransforms.m_pBones = m_pTransforms;
            while ( v19 < CModel::NumBones(m_pData) )
            {
              MatrixCopy(&worldspaceTransforms.m_pBones[v22], (*(v10 + 168) + v22 * 48));
              ++v19;
              ++v22;
            }
            v23 = CModel::MasterSkeleton(m_pData);
            v24 = CModelSkeleton::NumBones(v23);
            SetIdentityMatrix((*(v10 + 168) + 48LL * v24));
            (*(this->m_Collision._vptr_ICollideable + 10))(&this->m_Collision, &vecSurroundMins, &vecSurroundMaxs);
            (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, v10, &vecSurroundMins, &vecSurroundMaxs);
            (*(*g_pDebugOverlay + 552LL))(g_pDebugOverlay, v10, 0.0);
            if ( worldspaceTransforms.m_bOwnsMemory )
            {
              if ( worldspaceTransforms.m_pBones != 0 )
                operator delete[](worldspaceTransforms.m_pBones);
              if ( worldspaceTransforms.m_pReadableBones != 0 )
                operator delete[](worldspaceTransforms.m_pReadableBones);
            }
            memset(&worldspaceTransforms, 0, 19);
            if ( params.m_pCollisionMesh.m_pObj != 0 )
              CPhysAggregateData::Release(params.m_pCollisionMesh.m_pObj);
          }
          else if ( params.m_pCollisionMesh.m_pObj != 0 )
          {
            CPhysAggregateData::Release(params.m_pCollisionMesh.m_pObj);
          }
        }
      }
    }
  }
}


// CBaseAnimating::SetMovementPoseParams  (line 1925, @0x0000000002068db0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance, Vector, Vector2D, entindex
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::SetPoseParameter, CBaseAnimating::IsSequenceDebugging, CBaseAnimatingController::GetBlendedLinearVelocity, CEntityInstance::GetEntityIndex, DevMsgRT
// strings: "%d (%d) : %.2f %.2f : %.2f %.2f : %.3f %.3f\n"
void __fastcall CBaseAnimating::SetMovementPoseParams(
        CBaseAnimating *const this,
        const Vector *const vecLocalVelocity,
        int iMoveX,
        int iMoveY,
        int iXSign,
        int iYSign,
        bool bConverg)
{
  __m128d x_low; // xmm0
  int v12; // r9d
  float y; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  bool IsSequenceDebugging; // r14
  float v17; // xmm1_4
  float v18; // xmm1_4
  double v19; // xmm0_8
  __int64 v20; // rax
  CBaseAnimatingController *v21; // rdi
  double v22; // xmm1_8
  double v23; // xmm1_8
  float v24; // xmm3_4
  CEntityIndex v25; // eax
  float v26; // xmm1_4
  CEntityIndex v27; // eax
  unsigned int i; // [rsp+4h] [rbp-8Ch]
  double z; // [rsp+8h] [rbp-88h]
  double v30; // [rsp+10h] [rbp-80h]
  double v31; // [rsp+18h] [rbp-78h]
  double v32; // [rsp+20h] [rbp-70h]
  double pVec; // [rsp+28h] [rbp-68h]
  double x; // [rsp+30h] [rbp-60h]
  float v36; // [rsp+48h] [rbp-48h]
  Vector vecAnimVelocity; // [rsp+4Ch] [rbp-44h] BYREF
  int v38; // [rsp+58h] [rbp-38h]

  LODWORD(vecAnimVelocity.x) = iYSign;
  if ( CBaseAnimating::GetModelPtr(this) == 0 )
    return;
  x_low = LODWORD(vecLocalVelocity->x);
  v12 = LODWORD(vecAnimVelocity.x);
  if ( *x_low.m128d_f64 == 0.0 )
  {
    y = vecLocalVelocity->y;
LABEL_11:
    if ( y == 0.0 )
    {
      v36 = 0.0;
      vecAnimVelocity.x = 0.0;
    }
    else
    {
      vecAnimVelocity.x = iXSign * (*x_low.m128d_f64 / fabs(y));
      if ( y < 0.0 )
        v12 = -v12;
      v36 = v12;
    }
    goto LABEL_13;
  }
  y = vecLocalVelocity->y;
  v14 = fabs(*x_low.m128d_f64);
  if ( v14 <= fabs(y) )
    goto LABEL_11;
  if ( *x_low.m128d_f64 < 0.0 )
    iXSign = -iXSign;
  vecAnimVelocity.x = iXSign;
  x_low.m128d_f64[0] = v12 * (y / v14);
  v36 = _mm_movedup_pd(x_low).m128d_f64[0];
LABEL_13:
  IsSequenceDebugging = CBaseAnimating::IsSequenceDebugging(this);
  if ( IsSequenceDebugging )
  {
    pVec = vecLocalVelocity->y;
    x = vecLocalVelocity->x;
    v27.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    DevMsgRT(
      "%d (%d) : %.2f %.2f : %.2f %.2f : %.3f %.3f\n",
      v27.m_Data,
      0xFFFFFFFFLL,
      x,
      pVec,
      0.0,
      0.0,
      vecAnimVelocity.x,
      v36);
  }
  if ( vecAnimVelocity.x == 0.0 && v36 == 0.0 )
  {
    CBaseAnimating::SetPoseParameter(this, iMoveX, COERCE_DOUBLE(LODWORD(vecAnimVelocity.x)), v17);
    CBaseAnimating::SetPoseParameter(this, iMoveY, 0.0, v15);
  }
  else
  {
    vecAnimVelocity.y = 0.0;
    vecAnimVelocity.z = 0.0;
    v38 = 0;
    CBaseAnimating::SetPoseParameter(this, iMoveX, COERCE_DOUBLE(LODWORD(vecAnimVelocity.x)), v17);
    *&v19 = CBaseAnimating::SetPoseParameter(this, iMoveY, COERCE_DOUBLE(LODWORD(v36)), v18);
    for ( i = 0; i != 6; ++i )
    {
      v20 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, v19);
      if ( v20 != 0 )
        v21 = *(v20 + 736);
      else
        v21 = 0;
      CBaseAnimatingController::GetBlendedLinearVelocity(v21, &vecAnimVelocity.y);
      v22 = fabs(vecAnimVelocity.y);
      if ( v22 <= 0.001 )
      {
        vecAnimVelocity.x = 0.0;
      }
      else
      {
        *&v22 = (vecLocalVelocity->x / vecAnimVelocity.y) * vecAnimVelocity.x;
        vecAnimVelocity.x = *&v22;
      }
      CBaseAnimating::SetPoseParameter(this, iMoveX, COERCE_DOUBLE(LODWORD(vecAnimVelocity.x)), *&v22);
      v23 = fabs(vecAnimVelocity.z);
      if ( v23 <= 0.001 )
      {
        v36 = 0.0;
      }
      else
      {
        *&v23 = (vecLocalVelocity->y / vecAnimVelocity.z) * v36;
        v36 = *&v23;
      }
      CBaseAnimating::SetPoseParameter(this, iMoveY, COERCE_DOUBLE(LODWORD(v36)), *&v23);
      if ( IsSequenceDebugging )
      {
        v30 = vecAnimVelocity.y;
        z = vecAnimVelocity.z;
        v31 = vecLocalVelocity->y;
        v32 = vecLocalVelocity->x;
        v25.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        DevMsgRT(
          "%d (%d) : %.2f %.2f : %.2f %.2f : %.3f %.3f\n",
          v25.m_Data,
          i,
          v32,
          v31,
          v30,
          z,
          vecAnimVelocity.x,
          v36);
      }
      if ( !bConverg )
        break;
      *&v19 = LODWORD(vecAnimVelocity.y);
      if ( vecAnimVelocity.x < 1.0 && vecAnimVelocity.x > -1.0 )
      {
        v26 = vecLocalVelocity->x - vecAnimVelocity.y;
        if ( v26 < -1.0 || v26 > 1.0 )
          continue;
      }
      if ( v36 >= 1.0 )
        break;
      if ( v36 <= -1.0 )
        break;
      v24 = vecLocalVelocity->y - vecAnimVelocity.z;
      if ( v24 >= -1.0 && v24 <= 1.0 )
        break;
    }
  }
}


// CBaseAnimating::IsRagdoll  (line 2024, @0x00000000020588e0, libserver.so)
bool __fastcall CBaseAnimating::IsRagdoll(const CBaseAnimating *const this)
{
  return this->m_bClientSideRagdoll.m_Value;
}


// MaterialFootstepSound  (line 2032, @0x0000000002076960, libserver.so)  // inlines: CEntityIndex, CGameTrace, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, EnableInteractsWith, GetFloat, Init, LengthSqr, Purge, Ray_t, RemoveAll, RnCollisionAttr_t, SetSoundName, SoundEventGuid_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, entindex, operator+, operator-, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CGameTrace::Init, CBaseAnimating::LookupAttachment, CBaseAnimating::GetAttachment, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CUtlString::Get, V_sprintf_safe<256ul>, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter (15 total)
// strings: "LeftFoot", "RightFoot"
void __fastcall MaterialFootstepSound(CBaseAnimating *pEnt, bool bLeftFoot, float flVolume, const char *pszOptions)
{
  AttachmentHandle_t v7; // si
  int m_fValue_low; // xmm7_4
  const char *v9; // rax
  int (**vptr_IHandleEntity)(...); // rax
  double v11; // xmm0_8
  int v12; // xmm1_4
  CEntityIndex v13; // eax
  const char *pArgList; // [rsp+8h] [rbp-3F8h]
  Vector traceStart; // [rsp+20h] [rbp-3E0h] BYREF
  QAngle angles; // [rsp+30h] [rbp-3D0h] BYREF
  CTraceFilterSimple v18; // [rsp+40h] [rbp-3C0h] BYREF
  EmitSound_t params; // [rsp+80h] [rbp-380h] BYREF
  const CPhysSurfaceProperties *psurf; // [rsp+E0h] [rbp-320h] BYREF
  float v21; // [rsp+10Ch] [rbp-2F4h]
  const CUtlString *v22; // [rsp+120h] [rbp-2E0h]
  __int64 v23; // [rsp+128h] [rbp-2D8h]
  __int64 v24; // [rsp+148h] [rbp-2B8h]
  __int64 v25; // [rsp+150h] [rbp-2B0h]
  __int64 v26; // [rsp+158h] [rbp-2A8h]
  int v27; // [rsp+160h] [rbp-2A0h]
  __int16 v28; // [rsp+164h] [rbp-29Ch]
  char v29; // [rsp+166h] [rbp-29Ah]
  char v30; // [rsp+167h] [rbp-299h]
  char pSoundName[256]; // [rsp+190h] [rbp-270h] BYREF
  CPASAttenuationFilter filter; // [rsp+290h] [rbp-170h] BYREF
  unsigned __int64 v33; // [rsp+3C8h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v30 = 7;
  v27 = 0;
  v28 = 0;
  CGameTrace::Init(&psurf);
  if ( bLeftFoot )
  {
    v7 = CBaseAnimating::LookupAttachment(pEnt, "LeftFoot");
    if ( v7 == 0 )
      return;
  }
  else
  {
    v7 = CBaseAnimating::LookupAttachment(pEnt, "RightFoot");
    if ( v7 == 0 )
      return;
  }
  CBaseAnimating::GetAttachment(pEnt, v7, &traceStart, &angles);
  m_fValue_low = LODWORD(phys_traceline_radius.m_pParent->m_Value.m_fValue);
  params.m_flVolume = traceStart.x - (traceStart.x + 0.0);
  *&params.m_SoundLevel = traceStart.y - (traceStart.y + 0.0);
  HIDWORD(params.m_pSoundName) = 0;
  memset(&params.m_nPitch, 0, 36);
  *&params.m_nFlags = (traceStart.z - 48.0) - (traceStart.z + 10.0);
  params.m_UtlVecSoundOrigin.m_Size = m_fValue_low;
  *&params.m_nChannel = traceStart.x + 0.0;
  *(&params.m_nChannel + 1) = traceStart.y + 0.0;
  *&params.m_pSoundName = traceStart.z + 10.0;
  *(&params.m_UtlVecSoundOrigin.m_Size + 5) = (((params.m_flVolume * params.m_flVolume)
                                              + (*&params.m_SoundLevel * *&params.m_SoundLevel))
                                             + (*&params.m_nFlags * *&params.m_nFlags)) != 0.0;
  *(&params.m_UtlVecSoundOrigin.m_Size + 4) = 1;
  CTraceFilterSimple::CTraceFilterSimple(&v18, pEnt, 4, 0);
  v18.m_attr.m_nInteractsWith |= 0x187001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &params, &v18, &psurf);
  if ( v21 < 1.0 && v23 != 0 && v22 != 0 )
  {
    if ( pszOptions != 0 && *pszOptions != 0 )
    {
      pArgList = "%s.%s";
    }
    else
    {
      pszOptions = "";
      pArgList = "%s%s";
    }
    params.m_nChannel = 0;
    params.m_pSoundName = 0;
    params.m_flVolume = 1.0;
    params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    params.m_nFlags = 0;
    params.m_nPitch = 100;
    params.m_pOrigin = 0;
    params.m_flSoundTime = 0.0;
    params.m_pflSoundDuration = 0;
    params.m_bEmitCloseCaption = 1;
    params.m_bWarnOnMissingCloseCaption = 0;
    params.m_bWarnOnDirectWaveReference = 0;
    params.m_nSpeakerEntity.m_Data = -1;
    params.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    if ( bLeftFoot )
      v9 = CUtlString::Get(v22 + 8);
    else
      v9 = CUtlString::Get(v22 + 9);
    V_sprintf_safe<256ul>(pSoundName, pArgList, pszOptions, v9);
    vptr_IHandleEntity = pEnt->_vptr_IHandleEntity;
    params.m_pSoundName = pSoundName;
    v11 = (vptr_IHandleEntity[186])(pEnt);
    LODWORD(v18.m_attr.m_nInteractsWith) = v12;
    *&v18._vptr_CTraceFilter = v11;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &v18);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    params.m_bWarnOnDirectWaveReference = 1;
    params.m_flVolume = flVolume;
    v13.m_Data = CEntityInstance::GetEntityIndex(pEnt).m_Data;
    CBaseEntity::EmitSound(&filter, v13, &params);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
    params.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
      if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    }
  }
}


// CBaseAnimating::HandleAnimEvent  (line 2119, @0x000000000205a830, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: EventList_NameForIndex, DevWarning, CBaseEntity::EmitSound
// callers: CDynamicProp::HandleAnimEvent, CEnvEffectsScript::HandleAnimEvent, CBasePlayer::HandleAnimEvent
// strings: "Unhandled animation event '%s'(%d) for %s\n"
void __fastcall CBaseAnimating::HandleAnimEvent(CBaseAnimating *const this, animevent_t *pEvent)
{
  int event; // edi
  const char *v4; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // r8
  const char *v7; // rdx

  event = pEvent->event;
  if ( pEvent->event == 17 )
  {
    CBaseEntity::EmitSound(this, pEvent->options, 0.0, 0);
  }
  else if ( event == 37 )
  {
    (*(this->_vptr_IHandleEntity + 236))(this, &vec3_origin);
  }
  else if ( !pEvent->m_bHandledByScript )
  {
    v4 = EventList_NameForIndex(event);
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v7 = "";
    if ( v4 != 0 )
      v7 = v4;
    DevWarning(1, "Unhandled animation event '%s'(%d) for %s\n", v7, pEvent->event, m_pAsString);
  }
}


// CBaseAnimating::HandleObsoleteAnimEvent  (line 2589, @0x0000000002063970, libserver.so)
void __fastcall CBaseAnimating::HandleObsoleteAnimEvent(CBaseAnimating *const this, animevent_t *pEvent)
{
  ;
}


// CBaseAnimating::UpdateFireDlight  (line 2655, @0x0000000002063980, libserver.so)
void __fastcall CBaseAnimating::UpdateFireDlight(CBaseAnimating *const this)
{
  ;
}


// CBaseAnimating::DrawDebugTextOverlays  (line 2685, @0x0000000002076e80, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, DescribeOp2, GetBaseAnimatingController, GetCycle, GetGroundSpeed, GetNameByToken, GetRaw, GetSkeletonInstance, GetSpewSourceName, Purge, RemoveAll, String, V_strlen, operator const RuntimeClass_t*, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::GetModel, CFmtStrN<256, false>::CFmtStrN, CModel::IsValidSequence, CUtlString::Format, CUtlString::Get, CBaseEntity::EntityText, CUtlString::FreeMemoryBlock, CBaseAnimating::GetSequence, CBaseAnimating::GetSequenceGroundSpeed, V_snprintf, CBaseAnimating::GetModelPtr (22 total)
// callers: CRagdollProp::DrawDebugTextOverlays, CPropDoorRotating::DrawDebugTextOverlays, CPhysicsProp::DrawDebugTextOverlays, CPropVRHand::DrawDebugTextOverlays, CPropVehicle::DrawDebugTextOverlays, CDOTA_BaseNPC::DrawDebugTextOverlays
// strings: "sequence[%d] ", "%s%12.12s:  cycle %6.4f (prev %6.4f) weight %5.3f rate %6.3f: % 4d=[%s]", "[DIFFERS]", "Grnd Spd: %8.3f (seq %8.3f) %s", "Cycle: %.5f (%.5f)", "no model" (9 total)
// globals: g_AnimOpSourceColors, g_AnimOpSources, tokenset_t<animopsource_t>::GetNameByToken(animopsource_t)::unknown
int __fastcall CBaseAnimating::DrawDebugTextOverlays(
        CBaseAnimating *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r12
  char v4; // bl
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // r12d
  TransitioningLaterMetaInfo_t *v10; // r13
  CAnimationDecodeOp *v11; // rbx
  Color *v12; // rax
  const CModel *v13; // r14
  bool IsValidSequence; // al
  char *SequenceName; // r9
  char *name; // rcx
  animopsource_t m_source; // esi
  tokenset_t<animopsource_t> *v18; // rdx
  const char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  HSequence v22; // eax
  float SequenceGroundSpeed; // xmm0_4
  const char *v24; // rcx
  int v25; // ebx
  const CModel *ModelPtr; // r12
  HSequence v27; // eax
  HSequence v28; // eax
  const char *SequenceActivityName; // rax
  const char *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  HSequence v33; // eax
  const char *v34; // rbx
  HSequence v35; // eax
  int r; // [rsp+44h] [rbp-4CCh]
  int g; // [rsp+48h] [rbp-4C8h]
  int b; // [rsp+4Ch] [rbp-4C4h]
  __int64 v39; // [rsp+50h] [rbp-4C0h]
  float flGroundSpeed; // [rsp+58h] [rbp-4B8h]
  int text_offset; // [rsp+68h] [rbp-4A8h]
  double text_offseta; // [rsp+68h] [rbp-4A8h]
  const CModel **v44; // [rsp+70h] [rbp-4A0h] BYREF
  CUtlString v45; // [rsp+80h] [rbp-490h] BYREF
  CUtlVector<CAnimationDecodeOp,CUtlMemory<CAnimationDecodeOp,int> > ops; // [rsp+90h] [rbp-480h] BYREF
  CUtlVector<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> > meta; // [rsp+B0h] [rbp-460h] BYREF
  CFmtStrN<256,false> tempstr; // [rsp+D0h] [rbp-440h] BYREF
  unsigned __int64 v49; // [rsp+4D8h] [rbp-38h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v49 = __readfsqword(0x28u);
  text_offset = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) == 0 || (v3 & 0x400) == 0 )
    return text_offset;
  v6 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v6 != 0 && (v7 = *(v6 + 736)) != 0 )
  {
    ops.m_Size = 0;
    ops.m_Memory.m_pMemory = 0;
    ops.m_Memory.m_nAllocationCount = 0;
    ops.m_Memory.m_nGrowSize = 0;
    meta.m_Size = 0;
    meta.m_Memory.m_pMemory = 0;
    meta.m_Memory.m_nAllocationCount = 0;
    meta.m_Memory.m_nGrowSize = 0;
    (*(*v7 + 240LL))(v7, &ops, &meta);
    if ( ops.m_Size > 0 )
    {
      v8 = 0;
      v9 = 0;
      v39 = 0;
      while ( 1 )
      {
        v10 = &meta.m_Memory.m_pMemory[v8];
        v11 = &ops.m_Memory.m_pMemory[v39];
        v12 = &g_AnimOpSourceColors[ops.m_Memory.m_pMemory[v39].m_source];
        b = v12->_color[2];
        g = v12->_color[1];
        r = v12->_color[0];
        CBaseEntity::GetModel(&v44, this);
        if ( v44 != 0 )
          v13 = *v44;
        else
          v13 = 0;
        CFmtStrN<256,false>::CFmtStrN(&tempstr, "sequence[%d] ", v9);
        v45.m_pString = 0;
        if ( v13 != 0 )
        {
          IsValidSequence = CModel::IsValidSequence(v13, v11->m_hSequence);
          SequenceName = "invalid";
          if ( IsValidSequence )
            SequenceName = CModel::GetSequenceName(v13, v11->m_hSequence);
        }
        else
        {
          SequenceName = "no model";
        }
        name = g_AnimOpSources[0].name;
        m_source = v11->m_source;
        if ( g_AnimOpSources[0].name == 0 )
          goto LABEL_18;
        if ( m_source != g_AnimOpSources[0].token )
          break;
LABEL_19:
        CUtlString::Format(
          &v45,
          "%s%12.12s:  cycle %6.4f (prev %6.4f) weight %5.3f rate %6.3f: % 4d=[%s]",
          tempstr.m_szBuf,
          name,
          v11->m_flCycle,
          v10->m_flPrevCycle,
          v11->m_flWeight,
          v10->m_flPlaybackRate,
          v11->m_hSequence.m_Data,
          SequenceName);
        v19 = CUtlString::Get(&v45);
        CBaseEntity::EntityText(this, text_offset, v19, 0.0, r, g, b, 255);
        if ( v45.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v45);
        ++text_offset;
        ++v9;
        ++v8;
        ++v39;
        if ( ops.m_Size <= v9 )
          goto LABEL_22;
      }
      v18 = g_AnimOpSources;
      while ( 1 )
      {
        ++v18;
        name = v18->name;
        if ( v18->name == 0 )
          break;
        if ( m_source == v18->token )
          goto LABEL_19;
      }
LABEL_18:
      name = tokenset_t<animopsource_t>::GetNameByToken(animopsource_t)const::unknown;
      goto LABEL_19;
    }
LABEL_22:
    meta.m_Size = 0;
    if ( (meta.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<TransitioningLaterMetaInfo_t,int>::Purge(&meta.m_Memory);
      if ( (meta.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<TransitioningLaterMetaInfo_t,int>::Purge(&meta.m_Memory);
    }
    ops.m_Size = 0;
    if ( (ops.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CAnimationDecodeOp,int>::Purge(&ops.m_Memory);
      if ( (ops.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CAnimationDecodeOp,int>::Purge(&ops.m_Memory);
    }
  }
  else
  {
    v33.m_Data = CBaseAnimating::GetSequence(this).m_Data;
    v34 = CBaseAnimating::GetSequenceName(this, v33);
    v35.m_Data = CBaseAnimating::GetSequence(this).m_Data;
    V_snprintf(&tempstr, 1024, "Sequence: (%3d) %s", v35.m_Data, v34);
    CBaseEntity::EntityText(this, text_offset++, &tempstr, 0.0, 255, 255, 0, 255);
  }
  v20 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v20 != 0 )
    v21 = *(v20 + 736);
  else
    v21 = 0;
  flGroundSpeed = *(v21 + 68);
  v22.m_Data = CBaseAnimating::GetSequence(this).m_Data;
  SequenceGroundSpeed = CBaseAnimating::GetSequenceGroundSpeed(this, v22);
  v24 = "";
  if ( SequenceGroundSpeed != flGroundSpeed )
    v24 = "[DIFFERS]";
  V_snprintf(&tempstr, 1024, "Grnd Spd: %8.3f (seq %8.3f) %s", flGroundSpeed, SequenceGroundSpeed, v24);
  CBaseEntity::EntityText(this, text_offset, &tempstr, 0.0, 255, 255, 0, 255);
  v25 = text_offset + 1;
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 || (v27.m_Data = CBaseAnimating::GetSequence(this).m_Data, !CModel::IsValidSequence(ModelPtr, v27)) )
  {
    v30 = "Unknown";
LABEL_42:
    V_snprintf(&tempstr, 1024, "Activity %s", v30);
    CBaseEntity::EntityText(this, v25, &tempstr, 0.0, 255, 255, 0, 255);
    v25 = text_offset + 2;
    goto LABEL_32;
  }
  v28.m_Data = CBaseAnimating::GetSequence(this).m_Data;
  SequenceActivityName = CBaseAnimating::GetSequenceActivityName(this, v28);
  v30 = SequenceActivityName;
  if ( SequenceActivityName != 0 && strlen(SequenceActivityName) != 0 )
    goto LABEL_42;
LABEL_32:
  text_offseta = this->m_flAnimTime.m_Value;
  v31 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v31 != 0 )
    v32 = *(v31 + 736);
  else
    v32 = 0;
  V_snprintf(&tempstr, 1024, "Cycle: %.5f (%.5f)", *(v32 + 40), text_offseta);
  CBaseEntity::EntityText(this, v25, &tempstr, 0.0, 255, 255, 0, 255);
  return v25 + 1;
}


// CBaseAnimating::UpdateServerSideAnimation  (line 4044, @0x0000000002065db0, libserver.so)
// calls: CBaseAnimating::StudioFrameAdvance
// callers: CDOTA_BaseNPC::UpdateServerSideAnimation
void __fastcall CBaseAnimating::UpdateServerSideAnimation(CBaseAnimating *const this)
{
  CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
}


// CBaseAnimating::BecomeRagdollOnClient  (line 4066, @0x000000000205d4a0, libserver.so)  // inlines: CEntityHandle, Get, GetEffectEntity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, curtime, operator!=, operator=, operator=<bool>
// calls: CBaseEntity::SetParent, CBaseEntity::AddFlag, CBaseEntity::SetMoveType, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, __dynamic_cast
bool __fastcall CBaseAnimating::BecomeRagdollOnClient(CBaseAnimating *const this, const Vector *const force)
{
  char v4; // r12
  double v6; // xmm0_8
  double v7; // xmm1_8
  CGlobalVars *v8; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v10; // xmm0_8
  unsigned __int16 v11; // dx
  int v12; // esi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CBaseEntity *v16; // rax
  CBaseEntity *v17; // rbx
  double v18; // xmm1_8
  CGlobalVars *v19; // r13
  FnGlobalVarsWarningFunc v20; // rax
  double v21; // xmm0_8
  Vector vecClampedForce; // [rsp+10h] [rbp-30h] BYREF

  v4 = (*(this->_vptr_IHandleEntity + 237))(this);
  if ( v4 == 0 )
    return v4;
  (*(this->_vptr_IHandleEntity + 51))(this);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  if ( !this->m_bClientSideRagdoll.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 380, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSideRagdoll.m_Value = 1;
  }
  (*(this->_vptr_IHandleEntity + 238))(this, force, &vecClampedForce);
  *&v6 = LODWORD(vecClampedForce.x);
  if ( vecClampedForce.x != this->m_vecForce.m_Value.x
    || (*&v6 = LODWORD(vecClampedForce.y), vecClampedForce.y != this->m_vecForce.m_Value.y)
    || (*&v6 = LODWORD(vecClampedForce.z), vecClampedForce.z != this->m_vecForce.m_Value.z) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6);
    this->m_vecForce.m_Value = vecClampedForce;
  }
  CBaseEntity::SetParent(this, 0, 0, 0);
  CBaseEntity::AddFlag(this, 0x20000000);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v10) = 0;
    *&v10 = v8->m_flCurrentTime + 2.0;
  }
  else
  {
    *&v10 = 0x40000000;
  }
  CBaseEntity::SetNextThink(this, v10, v7, 0);
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  if ( this->m_hEffectEntity.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = (this->m_hEffectEntity.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  if ( v13 + 2 <= 1 )
    return v4;
  v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
  if ( v14 == 0 )
    return v4;
  v15 = &v14[v12 & 0x1FF];
  if ( v15 == 0 )
    return v4;
  if ( v13 != v15->m_EHandle.m_Index )
    return v4;
  if ( v15->m_pInstance == 0 )
    return v4;
  v16 = __dynamic_cast(v15->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityFlame, 0);
  v17 = v16;
  if ( v16 == 0 )
    return v4;
  CBaseEntity::ThinkSet(v16, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v19 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v20 = gpGlobals->m_pfnWarningFunc;
      if ( v20 != 0 )
        v20(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v21) = 0;
    *&v21 = v19->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v21 = 1036831949;
  }
  CBaseEntity::SetNextThink(v17, v21, v18, 0);
  return v4;
}


// CBaseAnimating::CanBecomeRagdoll  (line 4107, @0x0000000002064ef0, libserver.so)
// calls: CBaseAnimating::SelectWeightedSequence
bool __fastcall CBaseAnimating::CanBecomeRagdoll(CBaseAnimating *const this)
{
  if ( CBaseAnimating::SelectWeightedSequence(this, 24).m_Data == -1 )
    return 0;
  else
    return ((this->m_fFlags.m_Value >> 29) ^ 1) & 1;
}


// CBaseAnimating::PopulatePoseParameters  (line 4131, @0x00000000020588f0, libserver.so)
void __fastcall CBaseAnimating::PopulatePoseParameters(CBaseAnimating *const this)
{
  ;
}


// CBaseAnimating::GetStepOrigin  (line 4140, @0x0000000002059800, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseEntity::GetLocalOrigin
Vector __fastcall CBaseAnimating::GetStepOrigin(const CBaseAnimating *const this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  Vector v7; // 0:^4.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v7 = *CBaseEntity::GetLocalOrigin(this);
  v2 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v2 != 0 )
    v3 = *(v2 + 736);
  else
    v3 = 0;
  result.z = v7.z + *(v3 + 216);
  *&result.x = *&v7.x;
  return result;
}


// CBaseAnimating::GetStepAngles  (line 4151, @0x0000000002059500, libserver.so)
// calls: CBaseEntity::GetLocalAngles
QAngle __fastcall CBaseAnimating::GetStepAngles(const CBaseAnimating *const this)
{
  const QAngle *LocalAngles; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  *&result.x = *&LocalAngles->x;
  result.z = LocalAngles->z;
  return result;
}


// CBaseAnimating::Teleport  (line 4161, @0x0000000002064980, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseEntity::Teleport, CBaseAnimatingController::OnTeleported
// callers: CBaseFlex::Teleport, CRagdollProp::Teleport, CPropVehicle::Teleport
void __fastcall CBaseAnimating::Teleport(
        CBaseAnimating *const this,
        const Vector *newPosition,
        const QAngle *newAngles,
        const Vector *newVelocity)
{
  __int64 v4; // rax

  CBaseEntity::Teleport(this, newPosition, newAngles, newVelocity);
  v4 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v4 )
    CBaseAnimatingController::OnTeleported(*(v4 + 736));
  else
    CBaseAnimatingController::OnTeleported(0);
}


// CBaseAnimating::CountBodyGroupVariants  (line 4171, @0x0000000002063990, libserver.so)  // inlines: GetBodygroupCount
// calls: CBaseAnimating::GetModelPtr, GetBodygroupCount
int __fastcall CBaseAnimating::CountBodyGroupVariants(CBaseAnimating *const this, int group)
{
  const CModel *ModelPtr; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  return GetBodygroupCount(ModelPtr, group);
}


// CBaseAnimating::FindBodyGroupVariant  (line 4207, @0x00000000020639b0, libserver.so)
int __fastcall CBaseAnimating::FindBodyGroupVariant(CBaseAnimating *const this, int group, int variant)
{
  return variant;
}


// CBaseAnimating::FindDamagedBodyGroupVariant  (line 4249, @0x0000000002084300, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GetBodygroupCount, GetNumBodyGroups, GrowMemory, Purge, RemoveAll, _V_strstr, operator[], strstr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseAnimating::GetModelPtr, GetNumBodyGroups, CBaseAnimating::GetBodygroup, CBaseAnimating::GetBodygroupPartName, GetBodygroupCount, strstr, CUtlMemory<int, int>::Purge, CUtlMemory<int, int>::Grow, RandomInt, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
int __fastcall CBaseAnimating::FindDamagedBodyGroupVariant(CBaseAnimating *const this, int group)
{
  const CModel *ModelPtr; // rax
  int Bodygroup; // eax
  const CModel *v5; // rax
  int v6; // ebx
  __int64 m_Size; // r15
  int *v8; // rax
  int v9; // ebx
  int BodygroupCount; // [rsp+1Ch] [rbp-284h]
  CUtlVector<int,CUtlMemory<int,int> > damaged; // [rsp+30h] [rbp-270h] BYREF
  char currentName[272]; // [rsp+50h] [rbp-250h] BYREF
  char partName[264]; // [rsp+160h] [rbp-140h] BYREF
  unsigned __int64 v16; // [rsp+268h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( group < 0 )
    return -1;
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( group >= GetNumBodyGroups(ModelPtr) )
    return -1;
  Bodygroup = CBaseAnimating::GetBodygroup(this, group);
  CBaseAnimating::GetBodygroupPartName(this, group, Bodygroup, currentName, 260);
  damaged.m_Size = 0;
  damaged.m_Memory.m_pMemory = 0;
  damaged.m_Memory.m_nAllocationCount = 0;
  damaged.m_Memory.m_nGrowSize = 0;
  v5 = CBaseAnimating::GetModelPtr(this);
  v6 = 0;
  BodygroupCount = GetBodygroupCount(v5, group);
  if ( BodygroupCount > 0 )
  {
    do
    {
      while ( 1 )
      {
        CBaseAnimating::GetBodygroupPartName(this, group, v6, partName, 260);
        if ( partName[0] == 68 && strstr(partName, currentName) != 0 )
        {
          m_Size = damaged.m_Size;
          if ( damaged.m_Size == damaged.m_Memory.m_nAllocationCount )
            CUtlMemory<int,int>::Grow(&damaged.m_Memory, 1);
          ++damaged.m_Size;
          v8 = &damaged.m_Memory.m_pMemory[m_Size];
          if ( v8 != 0 )
            break;
        }
        if ( ++v6 == BodygroupCount )
          goto LABEL_12;
      }
      *v8 = v6++;
    }
    while ( v6 != BodygroupCount );
  }
LABEL_12:
  if ( damaged.m_Size != 0 )
    v9 = damaged.m_Memory.m_pMemory[RandomInt(0, (damaged.m_Size - 1))];
  else
    v9 = -1;
  if ( (damaged.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&damaged.m_Memory);
    if ( (damaged.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&damaged.m_Memory);
  }
  return v9;
}


// CBaseAnimating::RandomizeBodygroups  (line 4281, @0x00000000020840b0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, CountBodyGroupVariants, Element, FindBodygroupByName, GetBodygroupCount, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseAnimating::GetModelPtr, FindBodygroupByName, GetBodygroupCount, CUtlMemory<int, int>::Grow, RandomInt, CBaseAnimating::SetBodygroup, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CBaseAnimating::RandomizeBodygroups(
        CBaseAnimating *const this,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *const groups)
{
  int m_Size; // r10d
  __int64 v4; // r14
  const char *v5; // r13
  const CModel *ModelPtr; // rax
  int BodygroupByName; // r13d
  int v8; // eax
  int *v9; // rax
  const CModel *v10; // rax
  const CModel *v11; // rax
  __int64 v12; // r12
  int j; // r13d
  int numVariants; // [rsp+Ch] [rbp-64h]
  int v16; // [rsp+18h] [rbp-58h]
  int i; // [rsp+1Ch] [rbp-54h]
  CUtlVector<int,CUtlMemory<int,int> > groupIndex; // [rsp+20h] [rbp-50h] BYREF

  m_Size = groups->m_Size;
  groupIndex.m_Size = 0;
  groupIndex.m_Memory.m_pMemory = 0;
  groupIndex.m_Memory.m_nAllocationCount = 0;
  groupIndex.m_Memory.m_nGrowSize = 0;
  if ( m_Size <= 0 )
  {
    numVariants = 10000;
    goto LABEL_15;
  }
  v4 = 0;
  numVariants = 10000;
  i = 0;
  do
  {
    while ( 1 )
    {
      v5 = groups->m_Memory.m_pMemory[v4];
      ModelPtr = CBaseAnimating::GetModelPtr(this);
      BodygroupByName = FindBodygroupByName(ModelPtr, v5);
      if ( BodygroupByName >= 0 )
      {
        v8 = groupIndex.m_Size;
        v16 = groupIndex.m_Size;
        if ( groupIndex.m_Size == groupIndex.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&groupIndex.m_Memory, 1);
          v8 = groupIndex.m_Size;
        }
        groupIndex.m_Size = v8 + 1;
        v9 = &groupIndex.m_Memory.m_pMemory[v16];
        if ( v9 != 0 )
          *v9 = BodygroupByName;
        v10 = CBaseAnimating::GetModelPtr(this);
        if ( GetBodygroupCount(v10, BodygroupByName) <= numVariants )
          break;
      }
      ++i;
      ++v4;
      if ( groups->m_Size <= i )
        goto LABEL_11;
    }
    v11 = CBaseAnimating::GetModelPtr(this);
    ++i;
    numVariants = GetBodygroupCount(v11, BodygroupByName);
    ++v4;
  }
  while ( groups->m_Size > i );
LABEL_11:
  if ( numVariants != 0 )
  {
LABEL_15:
    v12 = 0;
    for ( j = RandomInt(1, numVariants); v12 < groupIndex.m_Size; ++v12 )
    {
      if ( j >= 0 )
        CBaseAnimating::SetBodygroup(this, groupIndex.m_Memory.m_pMemory[v12], j);
    }
    if ( (groupIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&groupIndex.m_Memory);
      if ( (groupIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_23;
    }
    return;
  }
  if ( (groupIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&groupIndex.m_Memory);
    if ( (groupIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_23:
      CUtlMemory<int,int>::Purge(&groupIndex.m_Memory);
  }
}


// CBaseAnimating::GetVelocity  (line 4322, @0x0000000002065420, libserver.so)  // inlines: GetBaseAnimatingController, GetSequence, GetSkeletonInstance, QAngleToAngularImpulse, VectorRotate
// calls: CBaseAnimating::GetSequenceLinearMotion, CBaseEntity::GetLocalAngles, AngleMatrix, VectorRotate, CBaseEntity::GetVelocity
void __fastcall CBaseAnimating::GetVelocity(
        CBaseAnimating *const this,
        Vector *vVelocity,
        AngularImpulse *vAngVelocity)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  HSequence v8; // eax
  const QAngle *LocalAngles; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  Vector vRawVel; // [rsp+0h] [rbp-70h] BYREF
  matrix3x4_t fRotateMatrix; // [rsp+10h] [rbp-60h] BYREF

  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS || (this->m_fFlags.m_Value & 1) == 0 )
  {
    CBaseEntity::GetVelocity(this, vVelocity, vAngVelocity);
  }
  else
  {
    if ( vVelocity != 0 )
    {
      v6 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
      if ( v6 != 0 )
        v7 = *(v6 + 736);
      else
        v7 = 0;
      v8.m_Data = (*(*v7 + 192LL))(v7);
      CBaseAnimating::GetSequenceLinearMotion(this, v8, &vRawVel);
      LocalAngles = CBaseEntity::GetLocalAngles(this);
      AngleMatrix(LocalAngles, &fRotateMatrix);
      VectorRotate(&vRawVel.x, &fRotateMatrix, &vVelocity->x);
    }
    if ( vAngVelocity != 0 )
    {
      y = this->m_vecAngVelocity.y;
      z = this->m_vecAngVelocity.z;
      vAngVelocity->y = this->m_vecAngVelocity.x;
      vAngVelocity->z = y;
      vAngVelocity->x = z;
    }
  }
}


// CBaseAnimating::ResetClientsideFrame  (line 4357, @0x0000000002064bd0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::ResetClientsideFrame
// callers: CBreakableProp::AnimateThink, CBreakableProp::OnAttemptPhysGunPickup, CBaseServerVehicle::HandleEntryExitFinish, CBaseServerVehicle::HandlePassengerEntry, CBaseServerVehicle::HandlePassengerExit
void __fastcall CBaseAnimating::ResetClientsideFrame(CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    CBaseAnimatingController::ResetClientsideFrame(*(v1 + 736));
  else
    CBaseAnimatingController::ResetClientsideFrame(0);
}


// CBaseAnimating::DrawRawSkeleton  (line 4363, @0x00000000020639c0, libserver.so)  // inlines: FastSqrt, Length, MatrixPosition, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBaseAnimating::GetModelPtr, CModel::boneParent, NDebugOverlay::Line, CModel::NumBones
void __fastcall CBaseAnimating::DrawRawSkeleton(
        CBaseAnimating *const this,
        matrix3x4_t *boneToWorld,
        bool noDepthTest,
        float duration,
        bool monocolor)
{
  const CModel *ModelPtr; // r12
  float *v8; // r15
  int v9; // r13d
  int v10; // ebx
  int v11; // r13d
  float *v12; // rax
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  Vector p1; // [rsp+20h] [rbp-50h] BYREF
  Vector p2; // [rsp+30h] [rbp-40h] BYREF

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr != 0 )
  {
    v8 = &boneToWorld->m_flMatVal[0][3];
    v9 = -!monocolor;
    v10 = 0;
    v11 = ~v9;
    while ( v10 < CModel::NumBones(ModelPtr) )
    {
      p1.x = *v8;
      p1.y = v8[4];
      p1.z = v8[8];
      if ( CModel::boneParent(ModelPtr, v10) != -1 )
      {
        v12 = &boneToWorld[CModel::boneParent(ModelPtr, v10)];
        v13 = v12[3];
        v14 = v12[7];
        v15 = v12[11];
        p2.x = v13;
        p2.y = v14;
        p2.z = v15;
        if ( fsqrt(((p1.x * p1.x) + (p1.y * p1.y)) + (p1.z * p1.z)) >= 1.0
          && fsqrt(((v13 * v13) + (v14 * v14)) + (v15 * v15)) >= 1.0 )
        {
          NDebugOverlay::Line(&p1, &p2, 255, 255, v11, noDepthTest, duration);
        }
      }
      ++v10;
      v8 += 12;
    }
  }
}


// CBaseAnimating::GetPhysicsBone  (line 4393, @0x0000000002063b40, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::GetNumBones
// callers: FindPhysicsAnchor, CRagdollPropAttached::ApplyAttachedActivationRecord, CreateServerRagdoll
int __fastcall CBaseAnimating::GetPhysicsBone(const CBaseAnimating *const this, int boneIndex)
{
  __int64 v2; // rbx
  const CSkeletonInstance *v4; // rax

  v2 = boneIndex;
  if ( boneIndex >= 0
    && (v4 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode),
        v2 < CSkeletonInstance::GetNumBones(v4)) )
  {
    return *(*((*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode) + 656) + 2 * v2);
  }
  else
  {
    return -1;
  }
}


// CBaseAnimating::CopyAnimationDataFrom  (line 4401, @0x000000000206dcb0, libserver.so)  // inlines: GetBaseAnimatingController, GetCycle, GetSequence, GetSkeletonInstance, LockStudioHdr
// calls: CBaseEntity::GetModel, CBaseModelEntity::SetModel, CBaseAnimating::SetCycle, CBaseEntity::SetEffects, CBaseEntity::IncrementInterpolationFrame, CBaseAnimating::SetSequence, CBaseEntity::SetAnimTime, CBaseAnimating::LockStudioHdr
// callers: CRagdollProp::Spawn, CRagdollPropAttached::Spawn
void __fastcall CBaseAnimating::CopyAnimationDataFrom(CBaseAnimating *const this, CBaseAnimating *pSource)
{
  __int64 v4; // rax
  float v5; // xmm1_4
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  HSequence v9; // eax
  float v10; // xmm1_4
  HModel hModel; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::GetModel(&hModel, pSource);
  CBaseModelEntity::SetModel(this, &hModel);
  v4 = (*(pSource->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(pSource->m_pGameSceneNode);
  if ( v4 != 0 )
    v6 = *(v4 + 736);
  else
    v6 = 0;
  CBaseAnimating::SetCycle(this, COERCE_DOUBLE(*(v6 + 40)), v5);
  CBaseEntity::SetEffects(this, pSource->m_fEffects.m_Value);
  CBaseEntity::IncrementInterpolationFrame(this);
  v7 = (*(pSource->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(pSource->m_pGameSceneNode);
  if ( v7 != 0 )
    v8 = *(v7 + 736);
  else
    v8 = 0;
  v9.m_Data = (*(*v8 + 192LL))(v8);
  CBaseAnimating::SetSequence(this, v9, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  CBaseEntity::SetAnimTime(this, pSource->m_flAnimTime.m_Value, v10, 1u);
  if ( !this->m_bModelIsLocked )
    CBaseAnimating::LockStudioHdr(this);
}


// CBaseAnimating::GetHitboxesFrontside  (line 4412, @0x0000000002063ba0, libserver.so)  // inlines: DotProduct, VectorAdd, VectorMultiply, VectorTransform, operator*, operator+
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetHitboxSet, CModel::GetHitboxSetByIndex, CHitBoxSet::pHitbox, CModel::GetBoneIndexForHitbox, CBaseAnimating::GetBoneTransform, VectorTransform, CHitBoxSet::numhitboxes
// callers: CreateServerRagdoll
__int64 __fastcall CBaseAnimating::GetHitboxesFrontside(
        CBaseAnimating *const this,
        int *boxList,
        int boxMax,
        const Vector *const normal,
        float dist)
{
  int HitboxSet; // eax
  const CHitBoxSet *HitboxSetByIndex; // r13
  int i; // ebx
  const CHitBox *v9; // r15
  int BoneIndexForHitbox; // eax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  __int64 v13; // rax
  const CModel *pStudioHdr; // [rsp+30h] [rbp-90h]
  int count; // [rsp+3Ch] [rbp-84h]
  Vector center; // [rsp+40h] [rbp-80h] BYREF
  Vector centerWs; // [rsp+50h] [rbp-70h] BYREF
  matrix3x4_t matrix; // [rsp+60h] [rbp-60h] BYREF

  pStudioHdr = CBaseAnimating::GetModelPtr(this);
  if ( pStudioHdr != 0
    && (HitboxSet = CBaseAnimating::GetHitboxSet(this),
        (HitboxSetByIndex = CModel::GetHitboxSetByIndex(pStudioHdr, HitboxSet, 0)) != 0) )
  {
    count = 0;
    for ( i = 0; i < CHitBoxSet::numhitboxes(HitboxSetByIndex); ++i )
    {
      v9 = CHitBoxSet::pHitbox(HitboxSetByIndex, i);
      BoneIndexForHitbox = CModel::GetBoneIndexForHitbox(pStudioHdr, v9);
      CBaseAnimating::GetBoneTransform(this, BoneIndexForHitbox, &matrix);
      v11 = (v9->m_vMaxBounds.z + v9->m_vMinBounds.z) * 0.5;
      v12 = (v9->m_vMaxBounds.x + v9->m_vMinBounds.x) * 0.5;
      center.y = (v9->m_vMaxBounds.y + v9->m_vMinBounds.y) * 0.5;
      center.z = v11;
      center.x = v12;
      VectorTransform(&center.x, &matrix, &centerWs.x);
      if ( (((centerWs.x * normal->x) + (centerWs.y * normal->y)) + (centerWs.z * normal->z)) >= dist && count < boxMax )
      {
        v13 = count++;
        boxList[v13] = i;
      }
    }
  }
  else
  {
    return 0;
  }
  return count;
}


// CBaseAnimating::DoMuzzleFlash  (line 4447, @0x0000000002063d70, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CBaseCombatWeapon::Materialize, CBaseCombatCharacter::DoMuzzleFlash, CBasePlayer::DoMuzzleFlash, CItem::Materialize
void __fastcall CBaseAnimating::DoMuzzleFlash(CBaseAnimating *const this)
{
  unsigned __int8 m_Value; // al
  unsigned __int8 v3; // bl

  m_Value = this->m_nMuzzleFlashParity.m_Value;
  v3 = (m_Value + 1) & 3;
  if ( m_Value != v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1185, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nMuzzleFlashParity.m_Value = v3;
  }
}


// CBaseAnimating::SetModelScale  (line 4457, @0x0000000002063db0, libserver.so)  // inlines: CreateDataObject, GetLocalScale, GetModelScale, GetSkeletonInstance, curtime
// calls: CEntityIdentity::CreateDataObject
void __fastcall CBaseAnimating::SetModelScale(CBaseAnimating *const this, double a2, float flScale, float flDuration)
{
  float *DataObject; // rbx
  int v6; // xmm2_4
  float m_flCurrentTime; // xmm0_4
  float v8; // xmm1_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int flScalea; // [rsp+0h] [rbp-20h]

  if ( flScale <= 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 222))(this, a2, flScale, flDuration);
  }
  else
  {
    flScalea = LODWORD(a2);
    DataObject = CEntityIdentity::CreateDataObject(this->m_pEntity, 3);
    v6 = *((*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode) + 212);
    *(DataObject + 1) = flScalea;
    m_flCurrentTime = 0.0;
    *DataObject = v6;
    v8 = flScale;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          (m_pfnWarningFunc)(1, 0.0);
          v8 = flScale;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    DataObject[3] = m_flCurrentTime;
    DataObject[2] = v8 + m_flCurrentTime;
  }
}


// CBaseAnimating::UpdateModelScale  (line 4473, @0x0000000002063e90, libserver.so)  // inlines: DestroyDataObject, GetDataObject, GetSkeletonInstance, Lerp<float>, curtime
// calls: CEntityIdentity::GetDataObject, CGameSceneNode::SetLocalScale, CEntityIdentity::DestroyDataObject
void __fastcall CBaseAnimating::UpdateModelScale(CBaseAnimating *const this)
{
  float *DataObject; // rax
  float m_flModelScaleStartTime; // xmm2_4
  CGlobalVars *v4; // rdx
  float v5; // xmm0_4
  CGlobalVars *v6; // r14
  CGlobalVars *v7; // rbx
  float m_flCurrentTime; // xmm1_4
  float v9; // xmm1_4
  __int64 v10; // xmm0_8
  double v11; // xmm1_8
  float v12; // xmm0_4
  CGameSceneNode *v13; // rax
  float v14; // xmm1_4
  void (__fastcall *v15)(__int64, double); // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  CGameSceneNode *v17; // rax
  float v18; // xmm1_4
  ModelScale *mvs; // [rsp+0h] [rbp-30h]
  ModelScale *mvsa; // [rsp+0h] [rbp-30h]
  unsigned int frac; // [rsp+Ch] [rbp-24h]
  float fraca; // [rsp+Ch] [rbp-24h]

  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 3);
  if ( DataObject != 0 )
  {
    m_flModelScaleStartTime = DataObject[3];
    v4 = gpGlobals;
    v5 = DataObject[2] - m_flModelScaleStartTime;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v7 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v7 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          mvsa = DataObject;
          fraca = DataObject[2] - m_flModelScaleStartTime;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          DataObject = &mvsa->m_flModelScaleStart;
          v7 = gpGlobals;
          v5 = fraca;
          m_flModelScaleStartTime = mvsa->m_flModelScaleStartTime;
          v4 = gpGlobals;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    else
    {
      v7 = 0;
      m_flCurrentTime = 0.0;
    }
    v9 = (m_flCurrentTime - m_flModelScaleStartTime) / v5;
    v10 = 1065353216;
    if ( v9 <= 1.0 )
    {
      HIDWORD(v10) = 0;
      *&v10 = fmaxf(0.0, v9);
    }
    v11 = *&v10;
    v12 = 0.0;
    if ( v4 != 0 )
    {
      if ( !v7->m_bEnableAssertions && !v7->m_bInSimulation )
      {
        v15 = v7->m_pfnWarningFunc;
        if ( v15 != 0 )
        {
          mvs = DataObject;
          frac = LODWORD(v11);
          v15(1, 0.0);
          DataObject = &mvs->m_flModelScaleStart;
          *&v11 = frac;
        }
      }
      v12 = v7->m_flCurrentTime;
    }
    if ( v12 >= DataObject[2] )
    {
      v17 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode, DataObject[1], v11);
      CGameSceneNode::SetLocalScale(v17, v18);
      CEntityIdentity::DestroyDataObject(this->m_pEntity, 3);
    }
    else
    {
      v13 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
      CGameSceneNode::SetLocalScale(v13, v14);
    }
  }
}


// CBaseAnimating::Ignite  (line 4503, @0x0000000002078200, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityFlame::Create, CBaseEntity::AddFlag, CBaseEntity::SetEffectEntity, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBreakableProp::Ignite, NextBotCombatCharacter::Ignite
void __fastcall CBaseAnimating::Ignite(
        CBaseAnimating *const this,
        float flFlameLifetime,
        bool bNPCOnly,
        float flSize,
        bool bCalledByLevelDesigner,
        float a6)
{
  CEntityFlame *v7; // r12
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( (this->m_fFlags.m_Value & 0x8000000) == 0 && (this->m_bIsNPC || !bNPCOnly) )
  {
    v7 = CEntityFlame::Create(this, flSize, a6, 1);
    CBaseEntity::AddFlag(this, 0x8000000);
    CBaseEntity::SetEffectEntity(this, v7);
    value.m_flags = 0;
    value.m_type = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnIgnite, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CBaseAnimating::IgniteLifetime  (line 4533, @0x000000000205c810, libserver.so)  // inlines: CEntityHandle, Get, GetEffectEntity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: __dynamic_cast, CEntityFlame::SetLifetime
void __fastcall CBaseAnimating::IgniteLifetime(CBaseAnimating *const this, double a2, float flFlameLifetime)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityFlame *v9; // rax
  float v10; // xmm1_4

  if ( (this->m_fFlags.m_Value & 0x8000000) == 0 )
    (*(this->_vptr_IHandleEntity + 239))(this, 0, 1, 30.0, 0.0);
  if ( this->m_hEffectEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hEffectEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityFlame, 0);
        if ( v9 != 0 )
          CEntityFlame::SetLifetime(v9, v10);
      }
    }
  }
}


// CBaseAnimating::IgniteUseCheapEffect  (line 4546, @0x000000000205c6f0, libserver.so)  // inlines: CEntityHandle, Get, GetEffectEntity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: __dynamic_cast, CEntityFlame::UseCheapEffect
void __fastcall CBaseAnimating::IgniteUseCheapEffect(CBaseAnimating *const this, bool bUseCheapEffect)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityFlame *v9; // rax

  if ( (this->m_fFlags.m_Value & 0x8000000) == 0 )
    (*(this->_vptr_IHandleEntity + 239))(this, 0, 1, 30.0, 0.0);
  if ( this->m_hEffectEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hEffectEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityFlame, 0);
        if ( v9 != 0 )
          CEntityFlame::UseCheapEffect(v9, bUseCheapEffect);
      }
    }
  }
}


// CBaseAnimating::Dissolve  (line 4565, @0x000000000205b910, libserver.so)  // inlines: ClassMatches, CreateEvent, GetFlags, NetworkStateChanged, Set, SetDissolverOrigin, SetMagnitude, entindex, operator!=, operator=, operator=<int>
// calls: CEntityDissolve::Create, CBaseEntity::SetEffectEntity, CBaseEntity::AddFlag, CEntityIdentity::ClassMatches, CEntityInstance::GetEntityIndex
// strings: "ragdoll_dissolved"
_BOOL8 __fastcall CBaseAnimating::Dissolve(
        CBaseAnimating *const this,
        const char *pMaterialName,
        float flStartTime,
        bool bNPCOnly,
        int nDissolveType,
        Vector vDissolverOrigin,
        unsigned int iMagnitude)
{
  unsigned int m_Value; // edi
  _BOOL8 result; // rax
  CEntityDissolve *v11; // rax
  CEntityDissolve *v12; // r12
  __int64 v13; // r12
  void (__fastcall *v14)(__int64, char *, _QWORD); // r14
  CEntityIndex v15; // eax
  bool bRagdollCreated; // [rsp+2Fh] [rbp-21h] BYREF

  m_Value = this->m_fFlags.m_Value;
  if ( !bNPCOnly || (result = 0, (m_Value & 0x2000) != 0) )
  {
    result = 0;
    if ( (m_Value & 0x10000000) == 0 )
    {
      bRagdollCreated = 0;
      v11 = CEntityDissolve::Create(this, pMaterialName, flStartTime, nDissolveType, &bRagdollCreated);
      v12 = v11;
      if ( v11 != 0 )
      {
        CBaseEntity::SetEffectEntity(this, v11);
        CBaseEntity::AddFlag(this, 0x10000000);
        this->m_flDissolveStartTime = flStartTime;
        if ( vDissolverOrigin.x != v12->m_vDissolverOrigin.m_Value.x
          || vDissolverOrigin.y != v12->m_vDissolverOrigin.m_Value.y
          || vDissolverOrigin.z != v12->m_vDissolverOrigin.m_Value.z )
        {
          (*(v12->_vptr_IHandleEntity + 22))(v12, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v12->m_vDissolverOrigin.m_Value = vDissolverOrigin;
        }
        if ( iMagnitude != v12->m_nMagnitude.m_Value )
        {
          (*(v12->_vptr_IHandleEntity + 22))(v12, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v12->m_nMagnitude.m_Value = iMagnitude;
        }
      }
      if ( (*(this->_vptr_IHandleEntity + 47))(this) == 0
        && CEntityIdentity::ClassMatches(this->m_pEntity, "prop_ragdoll") )
      {
        v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "ragdoll_dissolved", 0, 0);
        if ( v13 != 0 )
        {
          v14 = *(*v13 + 112LL);
          v15.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
          v14(v13, "entindex", v15.m_Data);
          (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v13, 0);
        }
      }
      return bRagdollCreated;
    }
  }
  return result;
}


// CBaseAnimating::Scorch  (line 4605, @0x0000000002064060, libserver.so)  // inlines: GetRenderColor, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, b, g, r
void __fastcall CBaseAnimating::Scorch(CBaseAnimating *const this, int rate, int floor)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // si

  v4 = this->m_clrRender.m_Value._color[0];
  v5 = this->m_clrRender.m_Value._color[1];
  v6 = this->m_clrRender.m_Value._color[2];
  v7 = this->m_clrRender.m_Value._color[3];
  v8 = v4 - rate;
  if ( v4 <= floor )
    v8 = this->m_clrRender.m_Value._color[0];
  v9 = this->m_clrRender.m_Value._color[1] - rate;
  if ( floor >= v5 )
    v9 = this->m_clrRender.m_Value._color[1];
  v10 = v6 - rate;
  if ( floor < v6 )
    v6 = v10;
  if ( v8 != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5 = this->m_clrRender.m_Value._color[1];
    this->m_clrRender.m_Value._color[0] = v8;
  }
  if ( v9 != v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = v9;
  }
  if ( v6 != this->m_clrRender.m_Value._color[2] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = v6;
  }
  if ( v7 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v7;
  }
}


// CBaseAnimating::InputIgnite  (line 4624, @0x0000000002058900, libserver.so)
void __fastcall CBaseAnimating::InputIgnite(CBaseAnimating *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 239))(this, 0, 1, 30.0, 0.0);
}


// CBaseAnimating::InputIgniteLifetime  (line 4629, @0x0000000002058930, libserver.so)  // inlines: Float, operator float
void __fastcall CBaseAnimating::InputIgniteLifetime(CBaseAnimating *const this, inputdata_t *const inputdata)
{
  void (__fastcall *v2)(double); // rax

  v2 = *(this->_vptr_IHandleEntity + 240);
  if ( inputdata->value.m_type == 34 )
    v2(inputdata->value.m_float64);
  else
    v2(inputdata->value.m_float);
}


// CBaseAnimating::InputBecomeRagdoll  (line 4634, @0x0000000002058960, libserver.so)
void __fastcall CBaseAnimating::InputBecomeRagdoll(CBaseAnimating *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 236))(this, &vec3_origin);
}


// CBaseAnimating::PrefetchSequence  (line 4652, @0x0000000002064180, libserver.so)
// calls: CBaseAnimating::GetModelPtr
bool __fastcall CBaseAnimating::PrefetchSequence(CBaseAnimating *const this, HSequence hSequence)
{
  CBaseAnimating::GetModelPtr(this);
  return 1;
}


// CC_AnimEvents_Dump  (line 4669, @0x0000000002059880, libserver.so)
// calls: EventList_HighestIndex, EventList_NameForIndex, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "[%d]: '%s'\n"
void __fastcall CC_AnimEvents_Dump(const CCommandContext *const ctx, const CCommand *const args)
{
  AnimEventIndex_t v2; // r14d
  AnimEventIndex_t v3; // ebx
  const char *v4; // r12
  const char *v5; // r8

  v2.m_Data = EventList_HighestIndex().m_Data;
  if ( v2.m_Data > 0 )
  {
    for ( v3.m_Data = 0; v3.m_Data != v2.m_Data; ++v3.m_Data )
    {
      v4 = EventList_NameForIndex(v3);
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 1) != 0 )
      {
        v5 = v4;
        if ( v4 == 0 )
          v5 = "";
        LoggingSystem_Log(LOG_GENERAL, 1, "[%d]: '%s'\n", v3.m_Data, v5);
      }
    }
  }
}


// CBaseAnimating::IsSequenceDebugging  (line 4682, @0x00000000020658a0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance
// calls: CBaseAnimatingController::IsSequenceDebugging
// callers: CBaseAnimating::StudioFrameAdvance, CBaseAnimating::SetMovementPoseParams, CNetworkedSequenceOperation::OnSequenceCycleChanged, CDOTAAnimState::ResetSlotActivity, CDOTAAnimState::FadeAndDestroySlot, CDOTAAnimState::AddToGestureSlot, CDOTAAnimState::RestartGesture, CDOTAAnimState::UpdateGestureLayer, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTABody::StartAnimation, TE_UnitAnimation
bool __fastcall CBaseAnimating::IsSequenceDebugging(const CBaseAnimating *const this)
{
  __int64 v1; // rax

  v1 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v1 != 0 )
    return CBaseAnimatingController::IsSequenceDebugging(*(v1 + 736));
  else
    return CBaseAnimatingController::IsSequenceDebugging(0);
}


