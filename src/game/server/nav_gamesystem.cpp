
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 24, @0x0000000002ed76e0, libserver.so)
void __cdecl CNavGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CNavGameSystem::CNavGameSystem  (line 43, @0x0000000002ee7e60, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetLessFunc, ~CUtlMap
// calls: NavMeshFactory, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, IGameSystem::~IGameSystem, _Unwind_Resume
// callers: CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::CreateGameSystem
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall CNavGameSystem::CNavGameSystem(CNavGameSystem *const this)
{
  this->_vptr_IGameSystem = off_47B0A70;
  this->m_NavInfoForSpawnGroup.m_Tree.m_Root = -1;
  this->m_NavInfoForSpawnGroup.m_Tree.m_NumElements = 0;
  this->m_NavInfoForSpawnGroup.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory = 0;
  this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_NavInfoForSpawnGroup.m_Tree.m_FirstFree = -1;
  this->m_NavInfoForSpawnGroup.m_Tree.m_LastAlloc.index = -1;
  this->m_NavInfoForSpawnGroup.m_Tree.m_pElements = 0;
  if ( sv_no_navmesh.m_pParent->m_Value.m_nValue != 0 )
    this->m_pNavMeshForSpawnGroupsWithNoNav = 0;
  else
    this->m_pNavMeshForSpawnGroupsWithNoNav = NavMeshFactory();
}


// CNavGameSystem::~CNavGameSystem  (line 51, @0x0000000002ee7f10, libserver.so)  // inlines: Purge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: ChangeTheNavMesh, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem
// callers: CNavGameSystem::~CNavGameSystem
void __fastcall CNavGameSystem::~CNavGameSystem(CNavGameSystem *const this)
{
  CNavMesh *m_pNavMeshForSpawnGroupsWithNoNav; // rdi

  this->_vptr_IGameSystem = off_47B0A70;
  m_pNavMeshForSpawnGroupsWithNoNav = this->m_pNavMeshForSpawnGroupsWithNoNav;
  if ( m_pNavMeshForSpawnGroupsWithNoNav != 0 )
    (*(m_pNavMeshForSpawnGroupsWithNoNav->_vptr_CNavMesh + 1))(m_pNavMeshForSpawnGroupsWithNoNav);
  ChangeTheNavMesh(0);
  CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_NavInfoForSpawnGroup.m_Tree);
  if ( (this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_NavInfoForSpawnGroup.m_Tree.m_Elements);
  IGameSystem::~IGameSystem(this);
}


// CNavGameSystem::~CNavGameSystem  (line 51, @0x0000000002ee7f70, libserver.so)
// calls: CNavGameSystem::~CNavGameSystem, operator delete
void __fastcall CNavGameSystem::~CNavGameSystem(CNavGameSystem *const this)
{
  CNavGameSystem::~CNavGameSystem(this);
  operator delete(this);
}


// CNavGameSystem::GameInit  (line 60, @0x0000000002ec6f10, libserver.so)
// calls: CNavGenParams::LoadDefaultsFromGameInfo
void __fastcall CNavGameSystem::GameInit(CNavGameSystem *const this, const EventGameInit_t *const rMsg)
{
  KeyValues *v2; // rax

  if ( g_pApplication != 0 )
  {
    v2 = (*(g_pApplication->_vptr_IAppSystem + 19))(g_pApplication, rMsg);
    CNavGenParams::LoadDefaultsFromGameInfo(v2);
  }
}


// CNavGameSystem::GameShutdown  (line 70, @0x0000000002ee7f90, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: operator delete, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Purge, ChangeTheNavMesh
void __fastcall CNavGameSystem::GameShutdown(CNavGameSystem *const this, const EventGameShutdown_t *const rMsg)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // si
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_NavInfoForSpawnGroup; // r13
  CNavMesh *v8; // rbx

  m_Root = this->m_NavInfoForSpawnGroup.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    p_m_NavInfoForSpawnGroup = &this->m_NavInfoForSpawnGroup;
  }
  else
  {
    m_pMemory = this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_NavInfoForSpawnGroup = &this->m_NavInfoForSpawnGroup;
    while ( 1 )
    {
      operator delete(m_pMemory[v5].m_Data.elem);
      m_Root = CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_NavInfoForSpawnGroup.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_NavInfoForSpawnGroup->m_Tree);
  v8 = TheNavMesh;
  if ( this->m_pNavMeshForSpawnGroupsWithNoNav != TheNavMesh )
  {
    ChangeTheNavMesh(0);
    if ( v8 != 0 )
      (*(v8->_vptr_CNavMesh + 1))(v8);
  }
}


// CNavGameSystem::SpawnGroupPrecache  (line 89, @0x0000000002ee5f00, libserver.so)  // inlines: IsEmpty, SpawnGroupHasWorldGeomemtry, String
// calls: LoggingSystem_IsChannelEnabled, CNavGameSystem::PrecacheNavForSpawnGroup, CUtlString::Get, LoggingSystem_Log
// strings: "CNavGameSystem::SpawnGroupPrecache (%s)\n"
void __fastcall CNavGameSystem::SpawnGroupPrecache(
        CNavGameSystem *const this,
        const EventSpawnGroupPrecache_t *const rMsg)
{
  char *m_pString; // rax
  const char *v5; // rax

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
  {
    v5 = CUtlString::Get(&rMsg->m_SpawnGroupName);
    LoggingSystem_Log(LOG_SERVER, 0, "CNavGameSystem::SpawnGroupPrecache (%s)\n", v5);
  }
  if ( (*(this->_vptr_IGameSystem + 40))(this) != 0
    && rMsg->m_SpawnGroupName.m_pString != 0
    && *rMsg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = rMsg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
      CNavGameSystem::PrecacheNavForSpawnGroup(this, rMsg->m_SpawnGroupHandle, rMsg->m_pConfig, rMsg->m_pManifest);
  }
}


// CNavGameSystem::PreSpawnGroupLoad  (line 109, @0x0000000002ef9400, libserver.so)  // inlines: CNavInfoForSpawnGroup, Element, FindInsertionPosition, Insert, InsertAt, IsEmpty, LeftChild, RightChild, SpawnGroupHasWorldGeomemtry, String, operator(), operator[]
// calls: LoggingSystem_IsChannelEnabled, operator new, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CNavGameSystem::LoadNavForSpawnGroup, CUtlString::Get, LoggingSystem_Log
// strings: "CNavGameSystem::PreSpawnGroupLoad (%s)\n"
void __fastcall CNavGameSystem::PreSpawnGroupLoad(
        CNavGameSystem *const this,
        const EventPreSpawnGroupLoad_t *const rMsg)
{
  char *m_pString; // rax
  CNavGameSystem::CNavInfoForSpawnGroup *v4; // rax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Right; // ax
  char v7; // cl
  bool v8; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v10; // ax
  const char *v11; // rax
  bool isLeft; // [rsp+4h] [rbp-5Ch]
  CNavGameSystem::CNavInfoForSpawnGroup *pNavInfo; // [rsp+10h] [rbp-50h]
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t pCopyFrom; // [rsp+20h] [rbp-40h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
  {
    v11 = CUtlString::Get(&rMsg->m_SpawnGroupName);
    LoggingSystem_Log(LOG_SERVER, 0, "CNavGameSystem::PreSpawnGroupLoad (%s)\n", v11);
  }
  if ( rMsg->m_SpawnGroupName.m_pString != 0 && *rMsg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = rMsg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      v4 = operator new(8u);
      v4->m_pNavMesh = 0;
      pNavInfo = v4;
      m_Root = this->m_NavInfoForSpawnGroup.m_Tree.m_Root;
      pCopyFrom.elem = v4;
      pCopyFrom.key = rMsg->m_SpawnGroupHandle;
      if ( m_Root != 0xFFFF )
      {
        while ( 1 )
        {
          v8 = !this->m_NavInfoForSpawnGroup.m_Tree.m_LessFunc.m_LessFunc(
                  &pCopyFrom,
                  &this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
          m_pMemory = this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory;
          if ( v8 )
          {
            m_Right = m_pMemory[m_Root].m_Right;
            v7 = 0;
            if ( m_Right == 0xFFFF )
              goto LABEL_13;
          }
          else
          {
            m_Right = m_pMemory[m_Root].m_Left;
            v7 = 1;
            if ( m_Right == 0xFFFF )
              goto LABEL_13;
          }
          m_Root = m_Right;
        }
      }
      m_Root = -1;
      v7 = 0;
LABEL_13:
      isLeft = v7;
      v10 = CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &this->m_NavInfoForSpawnGroup.m_Tree,
              &pCopyFrom);
      CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &this->m_NavInfoForSpawnGroup.m_Tree,
        v10,
        m_Root,
        isLeft);
      ++this->m_NavInfoForSpawnGroup.m_Tree.m_NumElements;
      CNavGameSystem::LoadNavForSpawnGroup(this, rMsg->m_SpawnGroupHandle, pNavInfo);
    }
  }
}


// CNavGameSystem::PostSpawnGroupLoad  (line 127, @0x0000000002ee8260, libserver.so)  // inlines: IsEmpty, SpawnGroupHasWorldGeomemtry, String
// calls: LoggingSystem_IsChannelEnabled, CNavGameSystem::GetNavForSpawnGroup, ChangeTheNavMesh, CUtlString::Get, LoggingSystem_Log, Warning
// strings: "CNavGameSystem::PostSpawnGroupLoad (%s)\n", "Nav mesh was generated with incompatible agent size settings.\n"
void __fastcall CNavGameSystem::PostSpawnGroupLoad(
        CNavGameSystem *const this,
        const EventPostSpawnGroupLoad_t *const rMsg)
{
  char *m_pString; // rax
  CNavMesh *NavForSpawnGroup; // rbx
  CNavMesh *v6; // r12
  const char *v7; // rax

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
  {
    v7 = CUtlString::Get(&rMsg->m_SpawnGroupName);
    LoggingSystem_Log(LOG_SERVER, 0, "CNavGameSystem::PostSpawnGroupLoad (%s)\n", v7);
  }
  if ( rMsg->m_SpawnGroupName.m_pString != 0 && *rMsg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = rMsg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      NavForSpawnGroup = CNavGameSystem::GetNavForSpawnGroup(this, rMsg->m_SpawnGroupHandle);
      if ( NavForSpawnGroup != 0 )
      {
        v6 = TheNavMesh;
        ChangeTheNavMesh(NavForSpawnGroup);
        (*(NavForSpawnGroup->_vptr_CNavMesh + 11))(NavForSpawnGroup);
        ChangeTheNavMesh(v6);
        if ( NavForSpawnGroup->m_NavGenParams.m_nAgentNumHulls == CNavGenParams::ms_NavGenParamsDefault.m_nAgentNumHulls )
          Warning("Nav mesh was generated with incompatible agent size settings.\n");
      }
    }
  }
}


// CNavGameSystem::PostSpawnGroupUnload  (line 167, @0x0000000002ef9580, libserver.so)  // inlines: Element, Find, FreeNode, IsEmpty, RemoveAt, SetLeftChild, SetRightChild, SpawnGroupHasWorldGeomemtry, String, operator[]
// calls: LoggingSystem_IsChannelEnabled, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator delete, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlString::Get, LoggingSystem_Log, ChangeTheNavMesh
// strings: "CNavGameSystem::PostSpawnGroupUnload (%s)\n"
void __fastcall CNavGameSystem::PostSpawnGroupUnload(
        CNavGameSystem *const this,
        const EventPostSpawnGroupUnload_t *const rMsg)
{
  char *m_pString; // rax
  unsigned __int16 v5; // r12
  __int64 v6; // r13
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // r15
  CNavMesh *m_pNavMesh; // rdi
  const char *v9; // rax
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
  {
    v9 = CUtlString::Get(&rMsg->m_SpawnGroupName);
    LoggingSystem_Log(LOG_SERVER, 0, "CNavGameSystem::PostSpawnGroupUnload (%s)\n", v9);
  }
  if ( rMsg->m_SpawnGroupName.m_pString != 0 && *rMsg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = rMsg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      search.key = rMsg->m_SpawnGroupHandle;
      v5 = CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &this->m_NavInfoForSpawnGroup.m_Tree,
             &search);
      v6 = v5;
      elem = this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
      m_pNavMesh = elem->m_pNavMesh;
      if ( elem->m_pNavMesh != this->m_pNavMeshForSpawnGroupsWithNoNav )
      {
        if ( m_pNavMesh == TheNavMesh )
        {
          ChangeTheNavMesh(0);
          m_pNavMesh = elem->m_pNavMesh;
        }
        if ( m_pNavMesh != 0 )
          (*(m_pNavMesh->_vptr_CNavMesh + 1))(m_pNavMesh);
      }
      elem->m_pNavMesh = 0;
      operator delete(this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem);
      if ( v5 != 0xFFFF )
      {
        CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
          &this->m_NavInfoForSpawnGroup.m_Tree,
          v5);
        this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[v5].m_Left = v5;
        this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[v6].m_Right = this->m_NavInfoForSpawnGroup.m_Tree.m_FirstFree;
        --this->m_NavInfoForSpawnGroup.m_Tree.m_NumElements;
        this->m_NavInfoForSpawnGroup.m_Tree.m_FirstFree = v5;
      }
    }
  }
}


// CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup  (line 205, @0x0000000002ee8070, libserver.so)  // inlines: Element, Find, operator[]
// calls: CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find, NavMeshFactory, ChangeTheNavMesh
// callers: CommandNavGenerate, CommandNavGenerateIncremental, CommandNavAnalyze, CommandNavMarkWalkable
void __fastcall CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup(CNavGameSystem *const this, bool bUpdateIfNew)
{
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  unsigned __int16 v5; // ax
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // r13
  CNavMesh *v7; // rax
  CNavMesh *m_pNavMesh; // rdi
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  ActiveSpawnGroupHandle = CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle(g_pSpawnGroupMgr);
  if ( ActiveSpawnGroupHandle != 0 )
  {
    search.key = ActiveSpawnGroupHandle;
    v5 = CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_NavInfoForSpawnGroup.m_Tree,
           &search);
    if ( v5 != 0xFFFF )
    {
      elem = this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem;
      if ( elem != 0 && elem->m_pNavMesh == this->m_pNavMeshForSpawnGroupsWithNoNav )
      {
        v7 = NavMeshFactory();
        m_pNavMesh = v7;
        elem->m_pNavMesh = v7;
        if ( bUpdateIfNew )
        {
          (*(v7->_vptr_CNavMesh + 8))(v7);
          m_pNavMesh = elem->m_pNavMesh;
        }
        ChangeTheNavMesh(m_pNavMesh);
      }
    }
  }
}


// CNavGameSystem::GetNavForSpawnGroup  (line 232, @0x0000000002ee8210, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CPhysicsProp::Spawn, CNavGameSystem::PostSpawnGroupLoad
CNavMesh *__fastcall CNavGameSystem::GetNavForSpawnGroup(CNavGameSystem *const this, SpawnGroupHandle_t hSpawnGroup)
{
  unsigned __int16 v3; // ax
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = hSpawnGroup;
  v3 = CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_NavInfoForSpawnGroup.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem->m_pNavMesh;
}


// CNavGameSystem::PrecacheNavForSpawnGroup  (line 244, @0x0000000002ee5dd0, libserver.so)  // inlines: CNavPlaceDirectory, CNavPrecacheInfo, CUtlMemory, CUtlVector, CUtlVectorBase, GetBool, GetInt, Purge, RemoveAll, ~CNavPlaceDirectory, ~CNavPrecacheInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CNavPlaceDirectory::Reset, CNavMesh::CreateAndLoadNavMeshPrecache, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavGameSystem::SpawnGroupPrecache
void __fastcall CNavGameSystem::PrecacheNavForSpawnGroup(
        CNavGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pManifest)
{
  void (__fastcall **v8)(CNavPrecacheInfo *__hidden); // [rsp-8h] [rbp-68h] BYREF
  CNavPrecacheInfo precacheInfo; // [rsp+0h] [rbp-60h] BYREF

  if ( sv_no_navmesh.m_pParent->m_Value.m_nValue == 0 )
  {
    v8 = off_47AE070;
    LODWORD(precacheInfo._vptr_CNavPrecacheInfo) = 0;
    *&precacheInfo.m_placeDirectory.m_Directory.m_Size = 0;
    precacheInfo.m_placeDirectory.m_Directory.m_Memory.m_pMemory = 0;
    CNavPlaceDirectory::Reset(&precacheInfo);
    if ( CNavMesh::CreateAndLoadNavMeshPrecache(gpGlobals->mapname, NavMeshFactory, &v8) )
      (*(this->_vptr_IGameSystem + 42))(this, hSpawnGroup, pConfig, pManifest, &v8);
    LODWORD(precacheInfo._vptr_CNavPrecacheInfo) = 0;
    v8 = off_47AE070;
    if ( (HIDWORD(precacheInfo.m_placeDirectory.m_Directory.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<unsigned int,int>::Purge(&precacheInfo.m_placeDirectory);
      if ( (HIDWORD(precacheInfo.m_placeDirectory.m_Directory.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<unsigned int,int>::Purge(&precacheInfo.m_placeDirectory);
    }
  }
}


// CNavGameSystem::LoadNavForSpawnGroup  (line 267, @0x0000000002ed76f0, libserver.so)  // inlines: GetBool, GetColumn, GetInt, MatrixGetColumn, operator=
// calls: CSpawnGroupMgrGameSystem::GetSpawnGroupName, CNavMesh::CreateAndLoadNavMesh, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset, CNavMesh::ShiftMesh, ChangeTheNavMesh
// callers: CNavGameSystem::PreSpawnGroupLoad
// globals: CNavGameSystem::s_NumListeners, CNavGameSystem::s_Listeners
void __fastcall CNavGameSystem::LoadNavForSpawnGroup(
        CNavGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        CNavGameSystem::CNavInfoForSpawnGroup *pNavInfo)
{
  CGlobalVars *v5; // r12
  const char *mapname; // r15
  CNavMesh *NavMesh; // rax
  CNavMesh *v8; // r12
  const matrix3x4a_t *SpawnGroupWorldOffset; // rax
  float v10; // xmm1_4
  float v11; // xmm2_4
  INavListener **v12; // r12
  int v13; // ebx
  INavListener *v14; // rdi
  CNavMesh *pNavInfoa; // [rsp+0h] [rbp-50h]
  CNavMesh *pOldNavMesh; // [rsp+8h] [rbp-48h] BYREF
  Vector vOffset; // [rsp+10h] [rbp-40h]

  if ( sv_no_navmesh.m_pParent->m_Value.m_nValue == 0 )
  {
    v5 = gpGlobals;
    pNavInfoa = TheNavMesh;
    mapname = gpGlobals->mapname;
    v5->mapname = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, hSpawnGroup);
    NavMesh = CNavMesh::CreateAndLoadNavMesh(gpGlobals->mapname, NavMeshFactory);
    v8 = NavMesh;
    if ( NavMesh != 0 )
    {
      pNavInfo->m_pNavMesh = NavMesh;
      SpawnGroupWorldOffset = CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset(g_pSpawnGroupMgr, hSpawnGroup);
      v10 = SpawnGroupWorldOffset->m_flMatVal[1][3];
      v11 = SpawnGroupWorldOffset->m_flMatVal[0][3];
      vOffset.x = SpawnGroupWorldOffset->m_flMatVal[2][3];
      pOldNavMesh = __PAIR64__(LODWORD(v10), LODWORD(v11));
      CNavMesh::ShiftMesh(v8, &pOldNavMesh);
      if ( CNavGameSystem::s_NumListeners > 0 )
      {
        v12 = CNavGameSystem::s_Listeners;
        v13 = 0;
        do
        {
          v14 = *v12;
          ++v13;
          ++v12;
          (**v14)(v14);
        }
        while ( CNavGameSystem::s_NumListeners > v13 );
      }
    }
    else
    {
      pNavInfo->m_pNavMesh = this->m_pNavMeshForSpawnGroupsWithNoNav;
    }
    ChangeTheNavMesh(pNavInfoa);
    gpGlobals->mapname = mapname;
  }
}


// CNavGameSystem::SwitchNav  (line 316, @0x0000000002ec6ef0, libserver.so)
// calls: ChangeTheNavMesh
void __fastcall CNavGameSystem::SwitchNav(
        CNavGameSystem *const this,
        CNavGameSystem::CNavInfoForSpawnGroup *pNavInfo,
        bool bIsFirst)
{
  if ( pNavInfo != 0 )
    ChangeTheNavMesh(pNavInfo->m_pNavMesh);
}


// CNavGameSystem::SwitchNav  (line 326, @0x0000000002ee8340, libserver.so)  // inlines: Element, Find, operator[]
// calls: CSpawnGroupMgrGameSystem::FindSpawnGroupByName, CUtlRBTree<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CNavGameSystem::ActiveSpawnGroupChanged, nav_switch
void __fastcall CNavGameSystem::SwitchNav(CNavGameSystem *const this, const char *pSpawnGroupName, bool bIsFirst)
{
  SpawnGroupHandle_t SpawnGroupByName; // eax
  unsigned __int16 v6; // ax
  CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(g_pSpawnGroupMgr, pSpawnGroupName);
  if ( SpawnGroupByName != 0 )
  {
    search.key = SpawnGroupByName;
    v6 = CUtlRBTree<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CNavGameSystem::CNavInfoForSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_NavInfoForSpawnGroup.m_Tree,
           &search);
    if ( v6 != 0xFFFF )
      (*(this->_vptr_IGameSystem + 41))(
        this,
        this->m_NavInfoForSpawnGroup.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem,
        bIsFirst);
  }
}


// CNavGameSystem::ActiveSpawnGroupChanged  (line 341, @0x0000000002ee83c0, libserver.so)  // inlines: String
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CNavGameSystem::SwitchNav
// strings: "CNavGameSystem::ActiveSpawnGroupChanged(%s) switching nav mesh\n"
void __fastcall CNavGameSystem::ActiveSpawnGroupChanged(
        CNavGameSystem *const this,
        const EventActiveSpawnGroupChanged_t *const rMsg)
{
  const char *v4; // rax
  CUtlString *p_m_SpawnGroupName; // rdi
  bool v6; // bl
  const char *v7; // rax

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
  {
    v4 = CUtlString::Get(&rMsg->m_SpawnGroupName);
    LoggingSystem_Log(LOG_SERVER, 0, "CNavGameSystem::ActiveSpawnGroupChanged(%s) switching nav mesh\n", v4);
  }
  p_m_SpawnGroupName = &rMsg->m_SpawnGroupName;
  v6 = rMsg->m_PreviousHandle == 0;
  v7 = CUtlString::Get(p_m_SpawnGroupName);
  CNavGameSystem::SwitchNav(this, v7, v6);
}


// CNavGameSystem::RegisterNavListener  (line 349, @0x0000000002ed7820, libserver.so)
// callers: CSource2Server::RegisterNavListener
// globals: CNavGameSystem::s_NumListeners, CNavGameSystem::s_Listeners
bool __fastcall CNavGameSystem::RegisterNavListener(INavListener *pListener)
{
  __int64 v1; // rcx
  bool result; // al
  INavListener **v3; // rax

  v1 = CNavGameSystem::s_NumListeners;
  result = 0;
  if ( CNavGameSystem::s_NumListeners <= 15 )
  {
    if ( CNavGameSystem::s_NumListeners > 0 )
    {
      if ( CNavGameSystem::s_Listeners[0] == pListener )
        return result;
      v3 = &CNavGameSystem::s_Listeners[1];
      while ( v3 != &CNavGameSystem::s_Listeners[(CNavGameSystem::s_NumListeners - 1) + 1] )
      {
        if ( *v3++ == pListener )
          return 0;
      }
    }
    ++CNavGameSystem::s_NumListeners;
    CNavGameSystem::s_Listeners[v1] = pListener;
    return 1;
  }
  return result;
}


// CNavGameSystem::UnregisterNavListener  (line 370, @0x0000000002ed7890, libserver.so)
// callers: CSource2Server::UnregisterNavListener
// globals: CNavGameSystem::s_NumListeners, CNavGameSystem::s_Listeners
void __fastcall CNavGameSystem::UnregisterNavListener(INavListener *pListener)
{
  INavListener **v1; // rdx
  int v2; // eax
  int v3; // ecx

  if ( CNavGameSystem::s_NumListeners > 0 )
  {
    v1 = &CNavGameSystem::s_Listeners[1];
    v2 = 0;
    if ( CNavGameSystem::s_Listeners[0] == pListener )
    {
      v2 = 0;
LABEL_7:
      v3 = CNavGameSystem::s_NumListeners - 1;
      CNavGameSystem::s_NumListeners = v3;
      CNavGameSystem::s_Listeners[v2] = CNavGameSystem::s_Listeners[v3];
      CNavGameSystem::s_Listeners[v3] = 0;
    }
    else
    {
      while ( ++v2 != CNavGameSystem::s_NumListeners )
      {
        if ( *v1++ == pListener )
          goto LABEL_7;
      }
    }
  }
}


// nav_switch  (line 388, @0x0000000002ee8440, libserver.so)  // inlines: V_FileBase<long unsigned int>
// calls: _V_FileBase, CNavGameSystem::SwitchNav, Msg, __stack_chk_fail
// strings: "Usage: switch_nav filename\n"
// globals: g_pNavGameSystem
void __fastcall nav_switch(const CCommandContext *const ctx, const CCommand *const args)
{
  char pSpawnGroupName[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v3; // [rsp+108h] [rbp-18h]

  v3 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 )
  {
    _V_FileBase(args->m_ppArgv[1], pSpawnGroupName, 260);
    CNavGameSystem::SwitchNav(g_pNavGameSystem, pSpawnGroupName, 0);
  }
  else
  {
    Msg("Usage: switch_nav filename\n");
  }
}


