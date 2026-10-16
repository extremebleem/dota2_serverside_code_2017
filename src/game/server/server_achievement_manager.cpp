
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerAchievementState::CPlayerAchievementState  (line 24, @0x0000000001eb0580, libserver.so)  // inlines: CCallback, CCallbackBase, CCallbackImpl, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Register, ResetDbgInfo, SetDefLessFunc<CUtlMap<int, CBaseAchievement*> >, SetLessFunc, ~CCallback, ~CCallbackImpl, ~CUtlMap, ~CUtlVector
// calls: SteamAPI_RegisterCallback, SteamAPI_UnregisterCallback, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<CBaseAchievement*, CUtlMemory<CBaseAchievement*, int> >::~CUtlVectorBase, CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// callers: CServerAchievementManager::PlayerConnected
// globals: CPlayerAchievementState::Steam_OnGSStatsReceived(GSStatsReceived_t *), CPlayerAchievementState::Steam_OnGSStatsStored(GSStatsStored_t *), CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CPlayerAchievementState::CPlayerAchievementState(
        CPlayerAchievementState *const this,
        int nUserSlot,
        uint64 ulSteamID)
{
  bool v6; // zf

  this->m_mapAchievement.m_Tree.m_Root = -1;
  this->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_mapAchievement.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapAchievement.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapAchievement.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapAchievement.m_Tree.m_NumElements = 0;
  this->m_mapAchievement.m_Tree.m_FirstFree = -1;
  this->m_mapAchievement.m_Tree.m_LastAlloc.index = -1;
  this->m_mapAchievement.m_Tree.m_pElements = 0;
  this->m_vecAchievement.m_Size = 0;
  this->m_vecAchievement.m_Memory.m_pMemory = 0;
  this->m_vecAchievement.m_Memory.m_nAllocationCount = 0;
  this->m_vecAchievement.m_Memory.m_nGrowSize = 0;
  this->m_vecKillEventListeners.m_Size = 0;
  this->m_vecKillEventListeners.m_Memory.m_pMemory = 0;
  this->m_vecKillEventListeners.m_Memory.m_nAllocationCount = 0;
  this->m_vecKillEventListeners.m_Memory.m_nGrowSize = 0;
  this->m_vecMapEventListeners.m_Size = 0;
  this->m_vecMapEventListeners.m_Memory.m_pMemory = 0;
  this->m_vecMapEventListeners.m_Memory.m_nAllocationCount = 0;
  this->m_vecMapEventListeners.m_Memory.m_nGrowSize = 0;
  this->m_vecComponentListeners.m_Size = 0;
  this->m_vecComponentListeners.m_Memory.m_pMemory = 0;
  this->m_vecComponentListeners.m_Memory.m_nAllocationCount = 0;
  this->m_vecComponentListeners.m_Memory.m_nGrowSize = 0;
  this->m_vecAchievementInOrder.m_Size = 0;
  this->m_vecAchievementInOrder.m_Memory.m_pMemory = 0;
  this->m_CallbackGSStatsReceived._vptr_CCallbackBase = off_3FB39F0;
  this->m_vecAchievementInOrder.m_Memory.m_nAllocationCount = 0;
  this->m_vecAchievementInOrder.m_Memory.m_nGrowSize = 0;
  this->m_vecHurtEventListeners.m_Size = 0;
  this->m_vecHurtEventListeners.m_Memory.m_pMemory = 0;
  this->m_vecHurtEventListeners.m_Memory.m_nAllocationCount = 0;
  this->m_vecHurtEventListeners.m_Memory.m_nGrowSize = 0;
  this->m_AchievementsAwarded.m_Size = 0;
  this->m_AchievementsAwarded.m_Memory.m_pMemory = 0;
  this->m_AchievementsAwarded.m_Memory.m_nAllocationCount = 0;
  this->m_AchievementsAwarded.m_Memory.m_nGrowSize = 0;
  this->m_AchievementsAwardedDuringCurrentGame.m_Size = 0;
  this->m_AchievementsAwardedDuringCurrentGame.m_Memory.m_pMemory = 0;
  this->m_AchievementsAwardedDuringCurrentGame.m_Memory.m_nAllocationCount = 0;
  this->m_AchievementsAwardedDuringCurrentGame.m_Memory.m_nGrowSize = 0;
  this->m_CallbackGSStatsReceived.m_nCallbackFlags = 0;
  this->m_CallbackGSStatsReceived.m_iCallback = 0;
  this->m_CallbackGSStatsReceived.m_Func.__delta = 0;
  this->m_CallbackGSStatsReceived.m_pObj = this;
  this->m_CallbackGSStatsReceived.m_Func.__pfn = CPlayerAchievementState::Steam_OnGSStatsReceived;
  SteamAPI_RegisterCallback(&this->m_CallbackGSStatsReceived, 1800);
  this->m_CallbackGSStatsStored.m_nCallbackFlags = 0;
  this->m_CallbackGSStatsStored._vptr_CCallbackBase = off_3FB3A30;
  this->m_CallbackGSStatsStored.m_iCallback = 0;
  this->m_CallbackGSStatsStored.m_Func.__delta = 0;
  this->m_CallbackGSStatsStored.m_pObj = this;
  this->m_CallbackGSStatsStored.m_Func.__pfn = CPlayerAchievementState::Steam_OnGSStatsStored;
  SteamAPI_RegisterCallback(&this->m_CallbackGSStatsStored, 1801);
  v6 = this->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc == 0;
  this->m_bDirty = 0;
  this->m_flLevelInitTime = 0.0;
  this->m_ulSteamID = ulSteamID;
  this->m_nUserSlot = nUserSlot;
  if ( v6 )
    this->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
}


// CPlayerAchievementState::~CPlayerAchievementState  (line 39, @0x0000000001eb08d0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, RemoveAll, operator[], ~CCallback, ~CCallbackImpl, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, SteamAPI_UnregisterCallback, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CBaseAchievement*, int>::Purge, CUtlMemory<int, int>::Purge
// callers: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements
void __fastcall CPlayerAchievementState::~CPlayerAchievementState(CPlayerAchievementState *const this)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si
  CUtlMap<int,CBaseAchievement*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // rdi
  bool v7; // zf
  uint32 m_nGrowSize; // eax

  m_Root = this->m_mapAchievement.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      elem = m_pMemory[v4].m_Data.elem;
      if ( elem != 0 )
        (*(elem->_vptr_IGameEventListener2 + 1))(elem);
      m_Root = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_mapAchievement.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapAchievement.m_Tree);
  v7 = (this->m_CallbackGSStatsStored.m_nCallbackFlags & 1) == 0;
  this->m_vecAchievement.m_Size = 0;
  this->m_vecAchievementInOrder.m_Size = 0;
  this->m_vecKillEventListeners.m_Size = 0;
  this->m_vecMapEventListeners.m_Size = 0;
  this->m_vecComponentListeners.m_Size = 0;
  this->m_AchievementsAwarded.m_Size = 0;
  this->m_vecHurtEventListeners.m_Size = 0;
  this->m_AchievementsAwardedDuringCurrentGame.m_Size = 0;
  this->m_CallbackGSStatsStored._vptr_CCallbackBase = &off_3FB31D0;
  if ( !v7 )
    SteamAPI_UnregisterCallback(&this->m_CallbackGSStatsStored);
  v7 = (this->m_CallbackGSStatsReceived.m_nCallbackFlags & 1) == 0;
  this->m_CallbackGSStatsReceived._vptr_CCallbackBase = &off_3FB31D0;
  if ( !v7 )
    SteamAPI_UnregisterCallback(&this->m_CallbackGSStatsReceived);
  v7 = (this->m_AchievementsAwardedDuringCurrentGame.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AchievementsAwardedDuringCurrentGame.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<int,int>::Purge(&this->m_AchievementsAwardedDuringCurrentGame.m_Memory);
    if ( (this->m_AchievementsAwardedDuringCurrentGame.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_AchievementsAwardedDuringCurrentGame.m_Memory);
  }
  v7 = (this->m_AchievementsAwarded.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AchievementsAwarded.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<int,int>::Purge(&this->m_AchievementsAwarded.m_Memory);
    if ( (this->m_AchievementsAwarded.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_AchievementsAwarded.m_Memory);
  }
  v7 = (this->m_vecHurtEventListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecHurtEventListeners.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecHurtEventListeners.m_Memory);
    if ( (this->m_vecHurtEventListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecHurtEventListeners.m_Memory);
  }
  v7 = (this->m_vecAchievementInOrder.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecAchievementInOrder.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecAchievementInOrder.m_Memory);
    if ( (this->m_vecAchievementInOrder.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecAchievementInOrder.m_Memory);
  }
  v7 = (this->m_vecComponentListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecComponentListeners.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecComponentListeners.m_Memory);
    if ( (this->m_vecComponentListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecComponentListeners.m_Memory);
  }
  v7 = (this->m_vecMapEventListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecMapEventListeners.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecMapEventListeners.m_Memory);
    if ( (this->m_vecMapEventListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecMapEventListeners.m_Memory);
  }
  v7 = (this->m_vecKillEventListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecKillEventListeners.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecKillEventListeners.m_Memory);
    if ( (this->m_vecKillEventListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecKillEventListeners.m_Memory);
  }
  v7 = (this->m_vecAchievement.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecAchievement.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecAchievement.m_Memory);
    if ( (this->m_vecAchievement.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseAchievement *,int>::Purge(&this->m_vecAchievement.m_Memory);
  }
  CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapAchievement.m_Tree);
  v7 = (this->m_mapAchievement.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapAchievement.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAchievement.m_Tree.m_Elements);
    m_nGrowSize = this->m_mapAchievement.m_Tree.m_Elements.m_nGrowSize;
    this->m_mapAchievement.m_Tree.m_LastAlloc.index = -1;
    if ( (m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAchievement.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapAchievement.m_Tree.m_LastAlloc.index = -1;
  }
}


// ServerAchievementIDCompare  (line 57, @0x0000000001eae3a0, libserver.so)
int __fastcall ServerAchievementIDCompare(CBaseAchievement *const *ach1, CBaseAchievement *const *ach2)
{
  int v3; // ebx

  v3 = (*(**ach1 + 56LL))(*ach1);
  return v3 < (*(**ach2 + 56LL))(*ach2);
}


// ServerAchievementOrderCompare  (line 62, @0x0000000001eae3d0, libserver.so)
int __fastcall ServerAchievementOrderCompare(CBaseAchievement *const *ach1, CBaseAchievement *const *ach2)
{
  int v3; // ebx

  v3 = (*(**ach1 + 288LL))(*ach1);
  return v3 - (*(**ach2 + 288LL))(*ach2);
}


// CPlayerAchievementState::Init  (line 70, @0x0000000001eb2540, libserver.so)  // inlines: AddToTail, CSteamID, CopyConstruct<CBaseAchievement*>, Element, FindInsertionPosition, FirstInorder, GetEAccountType, GrowMemory, Insert, InsertAt, IsValid, LeftChild, NextInorder, RightChild, SetFromUint64, _V_strcmp, operator(), operator[]
// calls: COM_GetModDirectory, strcmp, CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<CBaseAchievement*, int>::Grow, CUtlVectorBase<CBaseAchievement*, CUtlMemory<CBaseAchievement*, int> >::Sort, CUtlVectorBase<CBaseAchievement*, CUtlMemory<CBaseAchievement*, int> >::AddVectorToTail<CUtlMemory<CBaseAchievement*, int> >
// callers: CServerAchievementManager::PlayerConnected
// globals: CBaseAchievementHelper::s_pFirst, ServerAchievementIDCompare(CBaseAchievement * const*,CBaseAchievement * const*), ServerAchievementOrderCompare(CBaseAchievement * const*,CBaseAchievement * const*)
void __fastcall CPlayerAchievementState::Init(CPlayerAchievementState *const this, IAchievementMgr *pAchievementMgr)
{
  uint64 m_ulSteamID; // rbx
  __int64 v4; // rdx
  const char *ModDirectory; // rax
  CBaseAchievementHelper *v6; // rbx
  CBaseAchievement *v7; // r15
  const char *m_pGameDirFilter; // rsi
  int v9; // eax
  unsigned __int16 m_Root; // r15
  unsigned __int16 m_Right; // ax
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *v16; // rsi
  __int64 v17; // rdx
  unsigned __int16 m_Left; // ax
  CBaseAchievement **v19; // rdx
  __int64 m_Size; // r12
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *v21; // r15
  int v22; // edx
  unsigned __int16 v23; // dx
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *v24; // rcx
  __int64 v25; // rax
  unsigned __int16 Inorder; // bx
  CUtlMap<int,CBaseAchievement*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r12
  const char *m_pMapNameFilter; // r15
  const char *v29; // rax
  int v30; // r15d
  int v31; // ecx
  CBaseAchievement **v32; // rax
  int v33; // r15d
  int v34; // ecx
  CBaseAchievement **v35; // rax
  int v36; // r15d
  int v37; // ecx
  CBaseAchievement **v38; // rax
  int v39; // r15d
  int v40; // ecx
  CBaseAchievement **v41; // rax
  ISteamGameServerStats *m_pSteamGameServerStats; // rdi
  char v43; // cl
  bool isLeft; // [rsp+8h] [rbp-68h]
  uint64 v45; // [rsp+10h] [rbp-60h]
  const char *pGameDir; // [rsp+18h] [rbp-58h]
  unsigned __int16 pCopyFrom; // [rsp+28h] [rbp-48h]
  int v49; // [rsp+30h] [rbp-40h] BYREF
  CBaseAchievement *pAchievement; // [rsp+38h] [rbp-38h]

  if ( steamgameserverapicontext->m_pSteamGameServerStats == 0 )
    return;
  m_ulSteamID = this->m_ulSteamID;
  v45 = m_ulSteamID;
  if ( (m_ulSteamID & 0xF0000000000000LL) == 0 )
    return;
  v4 = (m_ulSteamID >> 52) & 0xF;
  if ( v4 > 0xAu || (HIBYTE(m_ulSteamID) - 1) > 3u )
    return;
  if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x10 )
  {
    if ( m_ulSteamID == 0 || (HIDWORD(m_ulSteamID) & 0xFFFFFu) > 4 )
      return;
LABEL_8:
    if ( v4 != 1 )
      return;
    ModDirectory = COM_GetModDirectory();
    v6 = CBaseAchievementHelper::s_pFirst;
    for ( pGameDir = ModDirectory; v6 != 0; v6 = v6->m_pNext )
    {
      while ( 1 )
      {
        v7 = v6->m_pfnCreate();
        (*(v7->_vptr_IGameEventListener2 + 32))(v7, this->m_nUserSlot);
        m_pGameDirFilter = v7->m_pGameDirFilter;
        if ( m_pGameDirFilter == 0 || strcmp(pGameDir, m_pGameDirFilter) == 0 )
          break;
        (*(v7->_vptr_IGameEventListener2 + 1))(v7);
        v6 = v6->m_pNext;
        if ( v6 == 0 )
          goto LABEL_22;
      }
      v9 = (*(v7->_vptr_IGameEventListener2 + 7))(v7);
      pAchievement = v7;
      m_Root = this->m_mapAchievement.m_Tree.m_Root;
      v49 = v9;
      if ( m_Root != 0xFFFF )
      {
        while ( 1 )
        {
          v12 = this->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc(
                  &v49,
                  &this->m_mapAchievement.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
          m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
          if ( v12 )
          {
            m_Right = m_pMemory[m_Root].m_Right;
            v43 = 0;
            if ( m_Right == 0xFFFF )
              goto LABEL_21;
          }
          else
          {
            m_Right = m_pMemory[m_Root].m_Left;
            v43 = 1;
            if ( m_Right == 0xFFFF )
              goto LABEL_21;
          }
          m_Root = m_Right;
        }
      }
      m_Root = -1;
      v43 = 0;
LABEL_21:
      isLeft = v43;
      v14 = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &this->m_mapAchievement.m_Tree,
              &v49);
      CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &this->m_mapAchievement.m_Tree,
        v14,
        m_Root,
        isLeft);
      ++this->m_mapAchievement.m_Tree.m_NumElements;
    }
LABEL_22:
    v15 = this->m_mapAchievement.m_Tree.m_Root;
    if ( v15 != 0xFFFF )
    {
      v16 = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
      v17 = v15;
      m_Left = v16[v15].m_Left;
      if ( m_Left == 0xFFFF )
      {
        m_Left = this->m_mapAchievement.m_Tree.m_Root;
      }
      else
      {
        while ( 1 )
        {
          v17 = m_Left;
          if ( v16[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = v16[m_Left].m_Left;
        }
      }
      while ( 1 )
      {
        m_Size = this->m_vecAchievement.m_Size;
        v21 = &this->m_mapAchievement.m_Tree.m_Elements.m_pMemory[v17];
        v22 = this->m_vecAchievement.m_Size;
        if ( m_Size == this->m_vecAchievement.m_Memory.m_nAllocationCount )
        {
          pCopyFrom = m_Left;
          CUtlMemory<CBaseAchievement *,int>::Grow(&this->m_vecAchievement.m_Memory, 1);
          v22 = this->m_vecAchievement.m_Size;
          m_Left = pCopyFrom;
        }
        this->m_vecAchievement.m_Size = v22 + 1;
        v19 = &this->m_vecAchievement.m_Memory.m_pMemory[m_Size];
        if ( v19 != 0 )
          *v19 = v21->m_Data.elem;
        m_Left = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &this->m_mapAchievement.m_Tree,
                   m_Left);
        if ( m_Left == 0xFFFF )
          break;
        v17 = m_Left;
      }
    }
    CUtlVectorBase<CBaseAchievement *,CUtlMemory<CBaseAchievement *,int>>::Sort(
      &this->m_vecAchievement,
      ServerAchievementIDCompare);
    CUtlVectorBase<CBaseAchievement *,CUtlMemory<CBaseAchievement *,int>>::AddVectorToTail<CUtlMemory<CBaseAchievement *,int>>(
      &this->m_vecAchievementInOrder,
      &this->m_vecAchievement);
    CUtlVectorBase<CBaseAchievement *,CUtlMemory<CBaseAchievement *,int>>::Sort(
      &this->m_vecAchievementInOrder,
      ServerAchievementOrderCompare);
    v23 = this->m_mapAchievement.m_Tree.m_Root;
    if ( v23 == 0xFFFF )
    {
LABEL_66:
      m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
      if ( m_pSteamGameServerStats != 0 )
        (**m_pSteamGameServerStats)(m_pSteamGameServerStats, v45);
      return;
    }
    v24 = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
    v25 = v23;
    Inorder = v24[v23].m_Left;
    if ( Inorder == 0xFFFF )
    {
      Inorder = this->m_mapAchievement.m_Tree.m_Root;
    }
    else
    {
      while ( 1 )
      {
        v25 = Inorder;
        if ( v24[Inorder].m_Left == 0xFFFF )
          break;
        Inorder = v24[Inorder].m_Left;
      }
    }
    while ( 1 )
    {
      elem = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory[v25].m_Data.elem;
      m_pMapNameFilter = elem->m_pMapNameFilter;
      if ( m_pMapNameFilter != 0 )
      {
        v29 = (*(pAchievementMgr->_vptr_IAchievementMgr + 14))(pAchievementMgr);
        if ( strcmp(v29, m_pMapNameFilter) != 0 )
          goto LABEL_45;
      }
      if ( ((*(elem->_vptr_IGameEventListener2 + 9))(elem) & 1) == 0 )
        goto LABEL_40;
      v30 = this->m_vecKillEventListeners.m_Size;
      v31 = v30;
      if ( v30 == this->m_vecKillEventListeners.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseAchievement *,int>::Grow(&this->m_vecKillEventListeners.m_Memory, 1);
        v31 = this->m_vecKillEventListeners.m_Size;
      }
      this->m_vecKillEventListeners.m_Size = v31 + 1;
      v32 = &this->m_vecKillEventListeners.m_Memory.m_pMemory[v30];
      if ( v32 != 0 )
      {
        *v32 = elem;
        if ( ((*(elem->_vptr_IGameEventListener2 + 9))(elem) & 0x1000) == 0 )
          goto LABEL_41;
      }
      else
      {
LABEL_40:
        if ( ((*(elem->_vptr_IGameEventListener2 + 9))(elem) & 0x1000) == 0 )
          goto LABEL_41;
      }
      v33 = this->m_vecHurtEventListeners.m_Size;
      v34 = v33;
      if ( v33 == this->m_vecHurtEventListeners.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseAchievement *,int>::Grow(&this->m_vecHurtEventListeners.m_Memory, 1);
        v34 = this->m_vecHurtEventListeners.m_Size;
      }
      this->m_vecHurtEventListeners.m_Size = v34 + 1;
      v35 = &this->m_vecHurtEventListeners.m_Memory.m_pMemory[v33];
      if ( v35 == 0 )
      {
LABEL_41:
        if ( ((*(elem->_vptr_IGameEventListener2 + 9))(elem) & 2) == 0 )
          goto LABEL_42;
        goto LABEL_58;
      }
      *v35 = elem;
      if ( ((*(elem->_vptr_IGameEventListener2 + 9))(elem) & 2) == 0 )
        goto LABEL_42;
LABEL_58:
      v36 = this->m_vecMapEventListeners.m_Size;
      v37 = v36;
      if ( v36 == this->m_vecMapEventListeners.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseAchievement *,int>::Grow(&this->m_vecMapEventListeners.m_Memory, 1);
        v37 = this->m_vecMapEventListeners.m_Size;
      }
      this->m_vecMapEventListeners.m_Size = v37 + 1;
      v38 = &this->m_vecMapEventListeners.m_Memory.m_pMemory[v36];
      if ( v38 == 0 )
      {
LABEL_42:
        if ( ((*(elem->_vptr_IGameEventListener2 + 9))(elem) & 4) != 0 )
          goto LABEL_62;
        goto LABEL_43;
      }
      *v38 = elem;
      if ( ((*(elem->_vptr_IGameEventListener2 + 9))(elem) & 4) != 0 )
      {
LABEL_62:
        v39 = this->m_vecComponentListeners.m_Size;
        v40 = v39;
        if ( v39 == this->m_vecComponentListeners.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CBaseAchievement *,int>::Grow(&this->m_vecComponentListeners.m_Memory, 1);
          v40 = this->m_vecComponentListeners.m_Size;
        }
        this->m_vecComponentListeners.m_Size = v40 + 1;
        v41 = &this->m_vecComponentListeners.m_Memory.m_pMemory[v39];
        if ( v41 != 0 )
          *v41 = elem;
      }
LABEL_43:
      if ( (*(elem->_vptr_IGameEventListener2 + 20))(elem) != 0 )
        (*(elem->_vptr_IGameEventListener2 + 4))(elem);
LABEL_45:
      Inorder = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                  &this->m_mapAchievement.m_Tree,
                  Inorder);
      if ( Inorder == 0xFFFF )
        goto LABEL_66;
      v25 = Inorder;
    }
  }
  if ( (BYTE6(m_ulSteamID) & 0xF0) != 0x70 )
  {
    if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x30 && m_ulSteamID == 0 )
      return;
    goto LABEL_8;
  }
  if ( m_ulSteamID != 0 && (m_ulSteamID & 0xFFFFF00000000LL) == 0 )
    goto LABEL_8;
}


// CPlayerAchievementState::ClearAchievementData  (line 164, @0x0000000001eaff50, libserver.so)  // inlines: Element, operator[]
void __fastcall CPlayerAchievementState::ClearAchievementData(CPlayerAchievementState *const this)
{
  int i; // ebx
  __int64 v3; // rax
  CUtlMap<int,CBaseAchievement*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // rdi

  for ( i = 0; this->m_vecAchievement.m_Size > i; ++i )
  {
    v3 = i;
    elem = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
    (*(elem->_vptr_IGameEventListener2 + 34))(elem);
  }
}


// CPlayerAchievementState::PrintAchievementStatus  (line 173, @0x0000000001eaffa0, libserver.so)
void __fastcall CPlayerAchievementState::PrintAchievementStatus(CPlayerAchievementState *const this)
{
  ;
}


// CPlayerAchievementState::OnMapEvent  (line 179, @0x0000000001eaffb0, libserver.so)  // inlines: V_strncmp<int>
// calls: _V_strncmp, CBaseAchievement::OnComponentEvent
// callers: CServerAchievementManager::OnMapEvent
void __fastcall CPlayerAchievementState::OnMapEvent(CPlayerAchievementState *const this, const char *pchEventName)
{
  __int64 v4; // rbx
  CBaseAchievement *v5; // r13
  __int64 i; // rbx
  CBaseAchievement *v7; // rdi

  v4 = 0;
  if ( this->m_vecComponentListeners.m_Size > 0 )
  {
    while ( 1 )
    {
      v5 = this->m_vecComponentListeners.m_Memory.m_pMemory[v4];
      if ( _V_strncmp(pchEventName, v5->m_pszComponentPrefix, v5->m_iComponentPrefixLen) == 0 )
        break;
      if ( this->m_vecComponentListeners.m_Size <= ++v4 )
        goto LABEL_6;
    }
    CBaseAchievement::OnComponentEvent(v5, pchEventName);
  }
  else
  {
LABEL_6:
    for ( i = 0; this->m_vecMapEventListeners.m_Size > i; ++i )
    {
      v7 = this->m_vecMapEventListeners.m_Memory.m_pMemory[i];
      (*(v7->_vptr_IGameEventListener2 + 26))(v7, pchEventName);
    }
  }
}


// CPlayerAchievementState::GetAchievementByID  (line 202, @0x0000000001eb0060, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CServerAchievementManager::GetAchievementByID, CServerAchievementManager::ResetAchievement
CBaseAchievement *__fastcall CPlayerAchievementState::GetAchievementByID(
        CPlayerAchievementState *const this,
        int iAchievementID)
{
  __int64 m_Root; // rax
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rbx
  __int64 v6; // r14
  _DWORD v8[12]; // [rsp+0h] [rbp-30h] BYREF

  v8[0] = iAchievementID;
  m_Root = this->m_mapAchievement.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = m_Root;
      v6 = m_Root;
      if ( this->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc(v8, &m_pMemory[m_Root].m_Data) == 0 )
        break;
      m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v5].m_Left;
      if ( m_Root == 0xFFFF )
        return 0;
    }
    if ( this->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc(
           &this->m_mapAchievement.m_Tree.m_Elements.m_pMemory[v6].m_Data,
           v8) == 0 )
      break;
    m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v6].m_Right;
    if ( m_Root == 0xFFFF )
      return 0;
  }
  return this->m_mapAchievement.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
}


// CPlayerAchievementState::GetAchievementByName  (line 212, @0x0000000001eb0110, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// calls: V_stricmp_fast
// callers: CPlayerAchievementState::HasAchieved, CServerAchievementManager::GetAchievementByName
CBaseAchievement *__fastcall CPlayerAchievementState::GetAchievementByName(
        CPlayerAchievementState *const this,
        const char *pchName)
{
  __int64 v4; // r12
  int v5; // ebx
  int m_nAllocationCount; // edx
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *m_pMemory; // rax
  CBaseAchievement *elem; // r14
  __int64 v9; // rax

  v4 = 0;
  v5 = 0;
  m_nAllocationCount = this->m_mapAchievement.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount == 0 )
    return 0;
  while ( 1 )
  {
    if ( v5 < m_nAllocationCount )
    {
      if ( v5 > this->m_mapAchievement.m_Tree.m_LastAlloc.index )
        goto LABEL_8;
      m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
      if ( m_pMemory[v5].m_Left == v5 )
        goto LABEL_8;
      elem = m_pMemory[v4].m_Data.elem;
      if ( elem == 0 )
        goto LABEL_8;
      v9 = (*(elem->_vptr_IGameEventListener2 + 8))(elem);
      if ( V_stricmp_fast(pchName, v9) == 0 )
        return elem;
      m_nAllocationCount = this->m_mapAchievement.m_Tree.m_Elements.m_nAllocationCount;
    }
LABEL_8:
    ++v5;
    ++v4;
    if ( m_nAllocationCount <= v5 )
      return 0;
  }
}


// CPlayerAchievementState::GetAchievementByIndex  (line 224, @0x0000000001eb01c0, libserver.so)  // inlines: operator[]
CBaseAchievement *__fastcall CPlayerAchievementState::GetAchievementByIndex(
        CPlayerAchievementState *const this,
        int index)
{
  return this->m_vecAchievement.m_Memory.m_pMemory[index];
}


// CPlayerAchievementState::GetAchievementByDisplayOrder  (line 230, @0x0000000001eb01e0, libserver.so)  // inlines: operator[]
CBaseAchievement *__fastcall CPlayerAchievementState::GetAchievementByDisplayOrder(
        CPlayerAchievementState *const this,
        int orderIndex)
{
  return this->m_vecAchievementInOrder.m_Memory.m_pMemory[orderIndex];
}


// CPlayerAchievementState::HasAchieved  (line 236, @0x0000000001eb0200, libserver.so)
// calls: CPlayerAchievementState::GetAchievementByName
// callers: CServerAchievementManager::HasAchieved
bool __fastcall CPlayerAchievementState::HasAchieved(CPlayerAchievementState *const this, const char *pchName)
{
  CBaseAchievement *AchievementByName; // rax

  AchievementByName = CPlayerAchievementState::GetAchievementByName(this, pchName);
  return AchievementByName != 0 && (*(AchievementByName->_vptr_IGameEventListener2 + 19))(AchievementByName);
}


// CPlayerAchievementState::Steam_OnGSStatsReceived  (line 248, @0x0000000001eaf3f0, libserver.so)  // inlines: CreateEvent, IsValid, SetAchieved, SetComponentBits, SetCount
// calls: UTIL_CountNumBitsSet, CBaseAchievement::EvaluateIsAlreadyAchieved, DevMsg(char const*,...), V_snprintf, __stack_chk_fail
// strings: "ISteamGameServerStats::GetAchievement failed for %s\n", "%s_STAT", "%s_COMP", "user_data_downloaded", "ISteamGameServerStats::GetStat failed to get component value from Steam for achievement %, "ISteamGameServerStats::GetStat failed to get progress value from Steam for achievement %s
void __fastcall CPlayerAchievementState::Steam_OnGSStatsReceived(
        CPlayerAchievementState *const this,
        GSStatsReceived_t *pStatsReceived)
{
  ISteamGameServerStats *m_pSteamGameServerStats; // r10
  uint64 m_ulSteamID; // r15
  __int64 v5; // r14
  bool v6; // zf
  CBaseAchievement *v7; // rbx
  __int64 v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  uint64 v12; // rdi
  __int64 v13; // rax
  ISteamGameServerStats *v14; // [rsp+18h] [rbp-468h]
  unsigned __int8 (__fastcall *v15)(ISteamGameServerStats *, uint64, __int64, bool *); // [rsp+20h] [rbp-460h]
  int i; // [rsp+2Ch] [rbp-454h]
  bool bAchieved; // [rsp+3Bh] [rbp-445h] BYREF
  int iValue; // [rsp+3Ch] [rbp-444h] BYREF
  char pszProgressName[1032]; // [rsp+40h] [rbp-440h] BYREF
  unsigned __int64 v20; // [rsp+448h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
  if ( m_pSteamGameServerStats != 0 )
  {
    m_ulSteamID = this->m_ulSteamID;
    if ( (m_ulSteamID & 0xF0000000000000LL) != 0
      && ((m_ulSteamID >> 52) & 0xF) <= 0xA
      && (HIBYTE(m_ulSteamID) - 1) <= 3u )
    {
      if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x10 )
      {
        if ( m_ulSteamID == 0 || (HIDWORD(m_ulSteamID) & 0xFFFFFu) > 4 )
          return;
      }
      else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x70 )
      {
        if ( m_ulSteamID == 0 || (m_ulSteamID & 0xFFFFF00000000LL) != 0 )
          return;
      }
      else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x30 && m_ulSteamID == 0 )
      {
        return;
      }
      if ( m_ulSteamID == pStatsReceived->m_steamIDUser.m_steamid.m_unAll64Bits
        && pStatsReceived->m_eResult == EResult::k_EResultOK )
      {
        if ( this->m_vecAchievement.m_Size > 0 )
        {
          v5 = 0;
          i = 0;
          while ( 1 )
          {
            v14 = m_pSteamGameServerStats;
            v7 = this->m_vecAchievement.m_Memory.m_pMemory[v5];
            bAchieved = 0;
            v15 = *(*m_pSteamGameServerStats + 24LL);
            v8 = (*(v7->_vptr_IGameEventListener2 + 8))(v7);
            if ( v15(v14, m_ulSteamID, v8, &bAchieved) != 0 )
            {
              v7->m_iCount = 0;
              v6 = (v7->m_iFlags & 0x20) == 0;
              v7->m_bAchieved = bAchieved;
              if ( !v6 )
              {
                v7->m_iComponentBits = 0;
                v7->m_iCount = UTIL_CountNumBitsSet(0);
              }
            }
            else
            {
              v9 = (*(v7->_vptr_IGameEventListener2 + 8))(v7);
              DevMsg("ISteamGameServerStats::GetAchievement failed for %s\n", v9);
            }
            if ( v7->m_bStoreProgressInSteam )
            {
              if ( (*(v7->_vptr_IGameEventListener2 + 10))(v7) > 1 )
              {
                v10 = (*(v7->_vptr_IGameEventListener2 + 8))(v7);
                V_snprintf(pszProgressName, 1024, "%s_STAT", v10);
                if ( (*(*steamgameserverapicontext->m_pSteamGameServerStats + 8LL))(
                       steamgameserverapicontext->m_pSteamGameServerStats,
                       m_ulSteamID,
                       pszProgressName,
                       &iValue) != 0 )
                  v7->m_iCount = iValue;
                else
                  DevMsg(
                    "ISteamGameServerStats::GetStat failed to get progress value from Steam for achievement %s\n",
                    pszProgressName);
              }
              if ( (v7->m_iFlags & 0x20) != 0 )
              {
                v11 = (*(v7->_vptr_IGameEventListener2 + 8))(v7);
                V_snprintf(pszProgressName, 1024, "%s_COMP", v11);
                if ( (*(*steamgameserverapicontext->m_pSteamGameServerStats + 8LL))(
                       steamgameserverapicontext->m_pSteamGameServerStats,
                       m_ulSteamID,
                       pszProgressName,
                       &iValue) != 0 )
                {
                  v12 = iValue;
                  v7->m_iComponentBits = iValue;
                  v7->m_iCount = UTIL_CountNumBitsSet(v12);
                }
                else
                {
                  DevMsg(
                    "ISteamGameServerStats::GetStat failed to get component value from Steam for achievement %s\n",
                    pszProgressName);
                }
              }
            }
            ++v5;
            CBaseAchievement::EvaluateIsAlreadyAchieved(v7);
            if ( this->m_vecAchievement.m_Size <= ++i )
              break;
            m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
          }
        }
        v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "user_data_downloaded", 0, 0);
        if ( v13 != 0 )
          (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v13, 1);
      }
    }
  }
}


// CPlayerAchievementState::Steam_OnGSStatsStored  (line 336, @0x0000000001eb03c0, libserver.so)  // inlines: FirstInorder, IsValid, LeftChild, NextInorder, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: DevMsg(char const*,...), memmove, CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// strings: "CPlayerAchievementState: failed to upload stats to Steam, EResult %d\n"
void __fastcall CPlayerAchievementState::Steam_OnGSStatsStored(
        CPlayerAchievementState *const this,
        GSStatsStored_t *pStatsStored)
{
  uint64 m_ulSteamID; // rax
  EResult m_eResult; // esi
  int m_Size; // eax
  int v6; // edx
  int v7; // eax
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v10; // rax
  unsigned __int16 m_Left; // cx
  CUtlMap<int,CBaseAchievement*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r13

  m_ulSteamID = this->m_ulSteamID;
  if ( (m_ulSteamID & 0xF0000000000000LL) != 0 && ((m_ulSteamID >> 52) & 0xF) <= 0xA && (HIBYTE(m_ulSteamID) - 1) <= 3u )
  {
    if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x10 )
    {
      if ( m_ulSteamID == 0 || (HIDWORD(m_ulSteamID) & 0xFFFFFu) > 4 )
        return;
    }
    else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x70 )
    {
      if ( m_ulSteamID == 0 || (m_ulSteamID & 0xFFFFF00000000LL) != 0 )
        return;
    }
    else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x30 && m_ulSteamID == 0 )
    {
      return;
    }
    if ( m_ulSteamID == pStatsStored->m_steamIDUser.m_steamid.m_unAll64Bits )
    {
      m_eResult = pStatsStored->m_eResult;
      if ( m_eResult == EResult::k_EResultOK )
      {
        m_Size = this->m_AchievementsAwarded.m_Size;
        if ( m_Size > 0 )
        {
          v6 = 0;
          v7 = m_Size - 1;
          if ( v7 != 0 )
          {
            memmove(
              this->m_AchievementsAwarded.m_Memory.m_pMemory,
              this->m_AchievementsAwarded.m_Memory.m_pMemory + 1,
              4LL * v7);
            v6 = this->m_AchievementsAwarded.m_Size - 1;
          }
          this->m_AchievementsAwarded.m_Size = v6;
        }
        m_Root = this->m_mapAchievement.m_Tree.m_Root;
        if ( m_Root != 0xFFFF )
        {
          m_pMemory = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
          v10 = m_Root;
          m_Left = m_pMemory[m_Root].m_Left;
          if ( m_Left != 0xFFFF )
          {
            while ( 1 )
            {
              v10 = m_Left;
              if ( m_pMemory[m_Left].m_Left == 0xFFFF )
                break;
              m_Left = m_pMemory[m_Left].m_Left;
            }
            m_Root = m_Left;
          }
          while ( 1 )
          {
            elem = this->m_mapAchievement.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem;
            if ( (*(elem->_vptr_IGameEventListener2 + 19))(elem) == 0 )
              (*(elem->_vptr_IGameEventListener2 + 28))(elem);
            m_Root = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                       &this->m_mapAchievement.m_Tree,
                       m_Root);
            if ( m_Root == 0xFFFF )
              break;
            v10 = m_Root;
          }
        }
      }
      else
      {
        DevMsg("CPlayerAchievementState: failed to upload stats to Steam, EResult %d\n", m_eResult);
      }
    }
  }
}


// CServerAchievementManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 369, @0x0000000001eb0230, libserver.so)
void __cdecl CServerAchievementManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CServerAchievementManager::CServerAchievementManager  (line 372, @0x0000000001eb0240, libserver.so)  // inlines: CGameEventListener, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetDefLessFunc<CUtlMap<int, CPlayerAchievementState*> >, SetLessFunc
// callers: CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::CreateGameSystem
// globals: CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CServerAchievementManager::CServerAchievementManager(CServerAchievementManager *const this)
{
  this->_vptr_IGameSystem = &off_3FB3AD0;
  this->_vptr_IGameEventListener2 = off_3FB3CF0;
  this->_vptr_IAchievementMgr = off_3FB3D18;
  this->m_bRegisteredForEvents = 0;
  this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapPlayerAchievementState.m_Tree.m_Root = -1;
  this->m_mapPlayerAchievementState.m_Tree.m_NumElements = 0;
  this->m_mapPlayerAchievementState.m_Tree.m_FirstFree = -1;
  this->m_mapPlayerAchievementState.m_Tree.m_LastAlloc.index = -1;
  this->m_mapPlayerAchievementState.m_Tree.m_pElements = 0;
  this->m_szMap[0] = 0;
  this->m_bCheatsEverOn = 0;
  this->m_flTimeLastUpload = 0.0;
  this->m_mapPlayerAchievementState.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
}


// CServerAchievementManager::~CServerAchievementManager  (line 381, @0x0000000001eb0c90, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CAutoGameSystem, ~CGameEventListener, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~IGameEventListener2
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem
// callers: CServerAchievementManager::~CServerAchievementManager
void __fastcall CServerAchievementManager::~CServerAchievementManager(CServerAchievementManager *const this)
{
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)> *p_m_mapPlayerAchievementState; // rdi
  bool v3; // zf

  p_m_mapPlayerAchievementState = &this->m_mapPlayerAchievementState;
  p_m_mapPlayerAchievementState[-2].m_Tree.m_pElements = &off_3FB3AD0;
  p_m_mapPlayerAchievementState[-1].m_Tree.m_Elements.m_pMemory = off_3FB3CF0;
  *&p_m_mapPlayerAchievementState[-1].m_Tree.m_Root = off_3FB3D18;
  CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_mapPlayerAchievementState->m_Tree);
  if ( (this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapPlayerAchievementState.m_Tree.m_Elements);
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CServerAchievementManager::~CServerAchievementManager  (line 381, @0x0000000001eb0d40, libserver.so)
// calls: CServerAchievementManager::~CServerAchievementManager, operator delete
void __fastcall CServerAchievementManager::~CServerAchievementManager(CServerAchievementManager *const this)
{
  CServerAchievementManager::~CServerAchievementManager(this);
  operator delete(this);
}


// CServerAchievementManager::Init  (line 387, @0x0000000001eae400, libserver.so)  // inlines: ListenForGameEvent
// strings: "entity_killed", "entity_hurt"
bool __fastcall CServerAchievementManager::Init(CServerAchievementManager *const this)
{
  CGameEventListener *v2; // r12
  IGameEventManager2 *v3; // rdi

  v2 = &this->CGameEventListener;
  (*(*engine + 640LL))(engine, &this->IAchievementMgr);
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, v2, "entity_killed", 1);
  v3 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v3->_vptr_IBaseInterface + 4))(v3, v2, "entity_hurt", 1);
  return 1;
}


// CServerAchievementManager::Shutdown  (line 404, @0x0000000001eb1350, libserver.so)  // inlines: PurgeAndDeleteElements
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements
void __fastcall CServerAchievementManager::Shutdown(CServerAchievementManager *const this)
{
  (*(this->_vptr_IGameSystem + 48))(this);
  CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_mapPlayerAchievementState.m_Tree);
}


// CServerAchievementManager::Update  (line 413, @0x0000000001eaea30, libserver.so)  // inlines: GetBool, GetInt
void __fastcall CServerAchievementManager::Update(
        CServerAchievementManager *const this,
        const EventClientUpdate_t *const msg)
{
  if ( (*(this->_vptr_IGameSystem + 51))(this, msg) == 0
    && sv_cheats != 0
    && sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    this->m_bCheatsEverOn = 1;
  }
}


// CServerAchievementManager::GameInit  (line 428, @0x0000000001eb1380, libserver.so)  // inlines: PurgeAndDeleteElements, V_strncpy<long unsigned int>
// calls: CServerAchievementManager::PreRestoreSavedGame, CServerAchievementManager::PostRestoreSavedGame, _V_strncpy, CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements
void __fastcall CServerAchievementManager::GameInit(
        CServerAchievementManager *const this,
        const EventGameInit_t *const msg)
{
  __int64 v3; // rcx
  __int64 v4; // r8

  CServerAchievementManager::PreRestoreSavedGame(this);
  CServerAchievementManager::PostRestoreSavedGame(this);
  this->m_bCheatsEverOn = 0;
  _V_strncpy(this->m_szMap, gpGlobals->mapname, 260, v3, v4);
  CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_mapPlayerAchievementState.m_Tree);
}


// CServerAchievementManager::PreSpawnGroupUnload  (line 441, @0x0000000001eb13d0, libserver.so)  // inlines: PurgeAndDeleteElements
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements
void __fastcall CServerAchievementManager::PreSpawnGroupUnload(
        CServerAchievementManager *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  (*(this->_vptr_IGameSystem + 48))(this, msg);
  CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_mapPlayerAchievementState.m_Tree);
}


// CServerAchievementManager::SaveGlobalState  (line 449, @0x0000000001eb1450, libserver.so)  // inlines: CSteamID, IsValid, SetFromUint64
// calls: CServerAchievementManager::GetAchievementStateForPlayer
// callers: CServerAchievementManager::SaveGlobalStateIfDirty
void __fastcall CServerAchievementManager::SaveGlobalState(CServerAchievementManager *const this, int nUserSlot)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax
  ISteamGameServerStats *m_pSteamGameServerStats; // rdi
  uint64 m_ulSteamID; // rsi

  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer != 0 )
  {
    m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
    if ( m_pSteamGameServerStats != 0 )
    {
      m_ulSteamID = AchievementStateForPlayer->m_ulSteamID;
      if ( (m_ulSteamID & 0xF0000000000000LL) != 0
        && ((m_ulSteamID >> 52) & 0xF) <= 0xA
        && (HIBYTE(m_ulSteamID) - 1) <= 3u )
      {
        if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x10 )
        {
          if ( m_ulSteamID != 0 && (HIDWORD(m_ulSteamID) & 0xFFFFFu) <= 4 )
            goto LABEL_9;
        }
        else
        {
          if ( (BYTE6(m_ulSteamID) & 0xF0) != 0x70 )
          {
            if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x30 && m_ulSteamID == 0 )
              return;
LABEL_9:
            (*(*m_pSteamGameServerStats + 72LL))(m_pSteamGameServerStats);
            return;
          }
          if ( m_ulSteamID != 0 && (m_ulSteamID & 0xFFFFF00000000LL) == 0 )
            goto LABEL_9;
        }
      }
    }
  }
}


// CServerAchievementManager::SaveGlobalStateIfDirty  (line 468, @0x0000000001eb1510, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CServerAchievementManager::SaveGlobalState
void __fastcall CServerAchievementManager::SaveGlobalStateIfDirty(CServerAchievementManager *const this)
{
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *m_pMemory; // rcx
  __int64 v4; // rdx
  unsigned __int16 m_Left; // si
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // rdx
  unsigned __int16 v7; // [rsp+Ch] [rbp-14h]

  m_Root = this->m_mapPlayerAchievementState.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      elem = m_pMemory[v4].m_Data.elem;
      if ( elem->m_bDirty )
      {
        v7 = m_Root;
        CServerAchievementManager::SaveGlobalState(this, elem->m_nUserSlot);
        m_Root = v7;
      }
      m_Root = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_mapPlayerAchievementState.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
}


// CServerAchievementManager::GetAchievementStateForPlayer  (line 480, @0x0000000001eb1400, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CServerAchievementManager::SaveGlobalState, CServerAchievementManager::GetAchievementByID, CServerAchievementManager::GetAchievementByName, CServerAchievementManager::HasAchieved, CServerAchievementManager::PrintAchievementStatus, CServerAchievementManager::GetAchievementByIndex, CServerAchievementManager::GetAchievementByDisplayOrder, CServerAchievementManager::GetAchievementCount, CServerAchievementManager::ResetAchievement_Internal, CServerAchievementManager::ResetAchievement, CServerAchievementManager::GetAchievedDuringCurrentGame, CServerAchievementManager::SetDirty (16 total)
CPlayerAchievementState *__fastcall CServerAchievementManager::GetAchievementStateForPlayer(
        CServerAchievementManager *const this,
        int nUserSlot)
{
  unsigned __int16 v3; // ax
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = nUserSlot;
  v3 = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapPlayerAchievementState.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CServerAchievementManager::GetAchievementByID  (line 493, @0x0000000001eb15c0, libserver.so)
// calls: CServerAchievementManager::GetAchievementStateForPlayer, CPlayerAchievementState::GetAchievementByID
CBaseAchievement *__fastcall CServerAchievementManager::GetAchievementByID(
        CServerAchievementManager *const this,
        int iAchievementID,
        int nUserSlot)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax

  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer != 0 )
    return CPlayerAchievementState::GetAchievementByID(AchievementStateForPlayer, iAchievementID);
  else
    return 0;
}


// CServerAchievementManager::GetAchievementByName  (line 507, @0x0000000001eb1610, libserver.so)
// calls: CServerAchievementManager::GetAchievementStateForPlayer, CPlayerAchievementState::GetAchievementByName
CBaseAchievement *__fastcall CServerAchievementManager::GetAchievementByName(
        CServerAchievementManager *const this,
        const char *pchName,
        int nUserSlot)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax

  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer != 0 )
    return CPlayerAchievementState::GetAchievementByName(AchievementStateForPlayer, pchName);
  else
    return 0;
}


// CServerAchievementManager::HasAchieved  (line 520, @0x0000000001eb1650, libserver.so)
// calls: CServerAchievementManager::GetAchievementStateForPlayer, CPlayerAchievementState::HasAchieved
bool __fastcall CServerAchievementManager::HasAchieved(
        CServerAchievementManager *const this,
        const char *pchName,
        int nUserSlot)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax

  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  return AchievementStateForPlayer != 0 && CPlayerAchievementState::HasAchieved(AchievementStateForPlayer, pchName);
}


// CServerAchievementManager::AwardAchievement  (line 532, @0x0000000001eb1f00, libserver.so)  // inlines: Add, AddToTail, CMicroProfilerGuard, CMicroProfilerSample, CSteamID, CVProfScope, CopyConstruct<int>, Element, EnterScope, ExitScope, GetElapsed, GetInt, GetTimebaseRegister, GrowMemory, InTargetThread, IsEnabled, IsValid, PLAT_CPU_TIME, SetAchieved, SetFromUint64, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CServerAchievementManager::GetAchievementStateForPlayer, Msg, ThreadGetCurrentId, CVProfile::ExitScope, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CUtlMemory<int, int>::Grow, _Unwind_Resume, std::terminate(void)
// strings: "Achievements disabled, ignoring achievement unlock for %s\n", "Achievement awarded: %s\n", "Achievement award called but already achieved: %s\n", "CServerAchievementManager::AwardAchievement", "Steam"
void __fastcall CServerAchievementManager::AwardAchievement(
        CServerAchievementManager *const this,
        int iAchievementID,
        int nUserSlot)
{
  int m_enabled; // eax
  _BYTE *v7; // r13
  CPlayerAchievementState *AchievementStateForPlayer; // r14
  bool v9; // zf
  __int64 v10; // rax
  const char *v11; // rax
  unsigned __int64 v12; // r12
  ThreadId_t v13; // r13
  uint64 v14; // rcx
  unsigned __int64 v15; // r13
  uint64 m_numTimeBaseTicks; // rcx
  ConVar *v17; // rax
  const char *v18; // rax
  uint64 m_ulSteamID; // rcx
  __int64 v20; // rax
  __int64 m_Size; // r12
  int v22; // eax
  int *v23; // rax
  const char *v24; // rax
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  __int64 v27; // rax
  void (__fastcall *v28)(ISteamGameServerStats *, uint64, __int64); // [rsp+0h] [rbp-50h]
  uint64 v29; // [rsp+8h] [rbp-48h]
  ThreadId_t m_TargetThreadId; // [rsp+10h] [rbp-40h]
  ISteamGameServerStats *m_pSteamGameServerStats; // [rsp+10h] [rbp-40h]
  bool VProf_534; // [rsp+1Fh] [rbp-31h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_534 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v15 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CServerAchievementManager::AwardAchievement" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CServerAchievementManager::AwardAchievement",
                       0,
                       "Steam",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v27 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      *(v27 + 8) |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v15 + __rdtsc();
  }
  v7 = (*(this->_vptr_IGameSystem + 43))(this, iAchievementID, nUserSlot);
  if ( v7 == 0 )
    goto LABEL_6;
  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer == 0 )
    goto LABEL_6;
  v9 = (*(this->_vptr_IGameSystem + 53))(this) == 0;
  v10 = *v7;
  if ( v9 )
  {
    v11 = (*(v10 + 64))(v7);
    Msg("Achievements disabled, ignoring achievement unlock for %s\n", v11);
LABEL_6:
    if ( VProf_534 )
    {
      v12 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v13 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v13 == ThreadGetCurrentId() )
        {
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
      }
      v14 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v14 - v12 + __rdtsc();
    }
    return;
  }
  if ( (*(v10 + 152))(v7) != 0 )
  {
    if ( cc_achievement_debug.m_pParent->m_Value.m_nValue > 0 )
    {
      v24 = (*(*v7 + 64LL))(v7);
      Msg("Achievement award called but already achieved: %s\n", v24);
    }
    goto LABEL_6;
  }
  v17 = cc_achievement_debug.m_pParent;
  v7[148] = 1;
  if ( v17->m_Value.m_nValue > 0 )
  {
    v18 = (*(*v7 + 64LL))(v7);
    Msg("Achievement awarded: %s\n", v18);
  }
  AchievementStateForPlayer->m_bDirty = 1;
  m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
  if ( m_pSteamGameServerStats != 0 )
  {
    m_ulSteamID = AchievementStateForPlayer->m_ulSteamID;
    v29 = m_ulSteamID;
    if ( (m_ulSteamID & 0xF0000000000000LL) != 0
      && ((m_ulSteamID >> 52) & 0xF) <= 0xA
      && (HIBYTE(m_ulSteamID) - 1) <= 3u )
    {
      if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x10 )
      {
        if ( m_ulSteamID == 0 || (HIDWORD(m_ulSteamID) & 0xFFFFFu) > 4 )
          goto LABEL_25;
      }
      else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x70 )
      {
        if ( m_ulSteamID == 0 || (m_ulSteamID & 0xFFFFF00000000LL) != 0 )
          goto LABEL_25;
      }
      else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x30 && m_ulSteamID == 0 )
      {
        goto LABEL_25;
      }
      v28 = *(*m_pSteamGameServerStats + 56LL);
      v20 = (*(*v7 + 64LL))(v7);
      v28(m_pSteamGameServerStats, v29, v20);
    }
  }
LABEL_25:
  (*(this->_vptr_IGameSystem + 48))(this);
  m_Size = AchievementStateForPlayer->m_AchievementsAwardedDuringCurrentGame.m_Size;
  v22 = AchievementStateForPlayer->m_AchievementsAwardedDuringCurrentGame.m_Size;
  if ( m_Size == AchievementStateForPlayer->m_AchievementsAwardedDuringCurrentGame.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&AchievementStateForPlayer->m_AchievementsAwardedDuringCurrentGame.m_Memory, 1);
    v22 = AchievementStateForPlayer->m_AchievementsAwardedDuringCurrentGame.m_Size;
  }
  AchievementStateForPlayer->m_AchievementsAwardedDuringCurrentGame.m_Size = v22 + 1;
  v23 = &AchievementStateForPlayer->m_AchievementsAwardedDuringCurrentGame.m_Memory.m_pMemory[m_Size];
  if ( v23 != 0 )
    *v23 = iAchievementID;
  if ( VProf_534 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CServerAchievementManager::UpdateAchievement  (line 586, @0x0000000001eb02d0, libserver.so)  // inlines: GetInt
// calls: Msg
// strings: "Achievement update called but already achieved: %s\n", "Achievements disabled, ignoring achievement update for %s\n"
void __fastcall CServerAchievementManager::UpdateAchievement(
        CServerAchievementManager *const this,
        int iAchievementID,
        int nData,
        int nUserSlot)
{
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v6 = (*(this->_vptr_IGameSystem + 43))(this, iAchievementID, nUserSlot);
  if ( v6 != 0 )
  {
    v7 = (*(this->_vptr_IGameSystem + 53))(this) == 0;
    v8 = *v6;
    if ( v7 )
    {
      v10 = (*(v8 + 64))(v6);
      Msg("Achievements disabled, ignoring achievement update for %s\n", v10);
    }
    else if ( (*(v8 + 152))(v6) != 0 )
    {
      if ( cc_achievement_debug.m_pParent->m_Value.m_nValue > 0 )
      {
        v9 = (*(*v6 + 64LL))(v6);
        Msg("Achievement update called but already achieved: %s\n", v9);
      }
    }
    else
    {
      (*(*v6 + 232LL))(v6, nData);
    }
  }
}


// CServerAchievementManager::PreRestoreSavedGame  (line 612, @0x0000000001eb0d70, libserver.so)  // inlines: Element, FirstInorder, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CServerAchievementManager::GameInit
void __fastcall CServerAchievementManager::PreRestoreSavedGame(CServerAchievementManager *const this)
{
  unsigned __int16 m_Root; // r15
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v4; // rdx
  unsigned __int16 m_Left; // cx
  __int64 v6; // rbx
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // rdx
  unsigned __int16 v8; // ax
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *v9; // rdi
  __int64 v10; // rdx
  unsigned __int16 Inorder; // r14
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t v12; // r13
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)> *p_m_mapPlayerAchievementState; // [rsp+8h] [rbp-38h]

  m_Root = this->m_mapPlayerAchievementState.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_mapPlayerAchievementState = &this->m_mapPlayerAchievementState;
    while ( 1 )
    {
      v6 = v4;
      elem = m_pMemory[v4].m_Data.elem;
      v8 = elem->m_mapAchievement.m_Tree.m_Root;
      if ( v8 != 0xFFFF )
      {
        v9 = elem->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
        v10 = v8;
        Inorder = v9[v8].m_Left;
        if ( Inorder == 0xFFFF )
        {
          Inorder = v8;
        }
        else
        {
          while ( 1 )
          {
            v10 = Inorder;
            if ( v9[Inorder].m_Left == 0xFFFF )
              break;
            Inorder = v9[Inorder].m_Left;
          }
        }
        while ( 1 )
        {
          (*(v9[v10].m_Data.elem->_vptr_IGameEventListener2 + 16))(v9[v10].m_Data.elem);
          v12 = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
          Inorder = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                      &v12->m_mapAchievement.m_Tree,
                      Inorder);
          if ( Inorder == 0xFFFF )
            break;
          v9 = v12->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
          v10 = Inorder;
        }
      }
      m_Root = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &p_m_mapPlayerAchievementState->m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
}


// CServerAchievementManager::PostRestoreSavedGame  (line 624, @0x0000000001eb0eb0, libserver.so)  // inlines: Element, FirstInorder, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CServerAchievementManager::GameInit
void __fastcall CServerAchievementManager::PostRestoreSavedGame(CServerAchievementManager *const this)
{
  unsigned __int16 m_Root; // r15
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v4; // rdx
  unsigned __int16 m_Left; // cx
  __int64 v6; // rbx
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // rdx
  unsigned __int16 v8; // ax
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *v9; // rdi
  __int64 v10; // rdx
  unsigned __int16 Inorder; // r14
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t v12; // r13
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)> *p_m_mapPlayerAchievementState; // [rsp+8h] [rbp-38h]

  m_Root = this->m_mapPlayerAchievementState.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_mapPlayerAchievementState = &this->m_mapPlayerAchievementState;
    while ( 1 )
    {
      v6 = v4;
      elem = m_pMemory[v4].m_Data.elem;
      v8 = elem->m_mapAchievement.m_Tree.m_Root;
      if ( v8 != 0xFFFF )
      {
        v9 = elem->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
        v10 = v8;
        Inorder = v9[v8].m_Left;
        if ( Inorder == 0xFFFF )
        {
          Inorder = v8;
        }
        else
        {
          while ( 1 )
          {
            v10 = Inorder;
            if ( v9[Inorder].m_Left == 0xFFFF )
              break;
            Inorder = v9[Inorder].m_Left;
          }
        }
        while ( 1 )
        {
          (*(v9[v10].m_Data.elem->_vptr_IGameEventListener2 + 17))(v9[v10].m_Data.elem);
          v12 = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
          Inorder = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                      &v12->m_mapAchievement.m_Tree,
                      Inorder);
          if ( Inorder == 0xFFFF )
            break;
          v9 = v12->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
          v10 = Inorder;
        }
      }
      m_Root = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &p_m_mapPlayerAchievementState->m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
}


// CServerAchievementManager::CheckAchievementsEnabled  (line 640, @0x0000000001eaeaf0, libserver.so)
// calls: IsInCommentaryMode, Msg
// strings: "Achievements disabled: cheats turned on in this app session.\n", "Achievements disabled: in commentary mode.\n"
bool __fastcall CServerAchievementManager::CheckAchievementsEnabled(CServerAchievementManager *const this)
{
  bool v1; // bl

  v1 = 0;
  if ( cc_achievement_disable.m_pParent->m_Value.m_nValue != 0 )
    return v1;
  v1 = IsInCommentaryMode();
  if ( v1 )
  {
    Msg("Achievements disabled: in commentary mode.\n");
    return 0;
  }
  else
  {
    if ( (*(this->_vptr_IGameSystem + 51))(this) != 0 )
    {
      Msg("Achievements disabled: cheats turned on in this app session.\n");
      return v1;
    }
    return 1;
  }
}


// CServerAchievementManager::ResetAchievement  (line 681, @0x0000000001eb1990, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CServerAchievementManager::GetAchievementStateForPlayer, CPlayerAchievementState::GetAchievementByID, CServerAchievementManager::ResetAchievement_Internal, CUtlRBTree<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int, CUtlMap<int, CBaseAchievement*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
void __fastcall CServerAchievementManager::ResetAchievement(
        CServerAchievementManager *const this,
        int nUserSlot,
        int iAchievementID)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax
  const CUtlRBTree<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int,CUtlMap<int,CBaseAchievement*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int>,short unsigned int> > *p_m_Tree; // r12
  CBaseAchievement *AchievementByID; // rax
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v11; // rax
  unsigned __int16 m_Left; // cx

  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  p_m_Tree = &AchievementStateForPlayer->m_mapAchievement.m_Tree;
  if ( AchievementStateForPlayer != 0 )
  {
    if ( iAchievementID == -1 )
    {
      m_Root = AchievementStateForPlayer->m_mapAchievement.m_Tree.m_Root;
      if ( m_Root != 0xFFFF )
      {
        m_pMemory = AchievementStateForPlayer->m_mapAchievement.m_Tree.m_Elements.m_pMemory;
        v11 = m_Root;
        m_Left = m_pMemory[m_Root].m_Left;
        if ( m_Left != 0xFFFF )
        {
          while ( 1 )
          {
            v11 = m_Left;
            if ( m_pMemory[m_Left].m_Left == 0xFFFF )
              break;
            m_Left = m_pMemory[m_Left].m_Left;
          }
          m_Root = m_Left;
        }
        while ( 1 )
        {
          CServerAchievementManager::ResetAchievement_Internal(this, p_m_Tree->m_Elements.m_pMemory[v11].m_Data.elem);
          m_Root = CUtlRBTree<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CBaseAchievement *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                     p_m_Tree,
                     m_Root);
          if ( m_Root == 0xFFFF )
            break;
          v11 = m_Root;
        }
      }
    }
    else
    {
      AchievementByID = CPlayerAchievementState::GetAchievementByID(AchievementStateForPlayer, iAchievementID);
      if ( AchievementByID != 0 )
        CServerAchievementManager::ResetAchievement_Internal(this, AchievementByID);
    }
    (*(this->_vptr_IGameSystem + 52))(this, 1, nUserSlot);
    (*(this->_vptr_IGameSystem + 48))(this);
  }
}


// CServerAchievementManager::PrintAchievementStatus  (line 716, @0x0000000001eb16a0, libserver.so)
// calls: CServerAchievementManager::GetAchievementStateForPlayer
void __fastcall CServerAchievementManager::PrintAchievementStatus(CServerAchievementManager *const this, int nUserSlot)
{
  CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
}


// CServerAchievementManager::FireGameEvent  (line 729, @0x0000000001eae5d0, libserver.so)  // inlines: _V_strcmp
// calls: UTIL_EntityByIndex
// strings: "entity_killed", "entity_hurt", "entindex_killed", "entindex_attacker", "entindex_inflictor"
void __fastcall CServerAchievementManager::FireGameEvent(CServerAchievementManager *const this, IGameEvent *event)
{
  const char *v4; // rax
  CEntityIndex v5; // eax
  CBaseEntity *v6; // r13
  CEntityIndex v7; // eax
  CBaseEntity *v8; // r14
  CEntityIndex v9; // eax
  CBaseEntity *v10; // rax
  void (__fastcall *v11)(CServerAchievementManager *const, CBaseEntity *, CBaseEntity *, CBaseEntity *, IGameEvent *); // r9
  CEntityIndex v12; // eax
  CEntityIndex v13; // eax
  CEntityIndex v14; // eax

  v4 = (*(event->_vptr_IGameEvent + 2))(event);
  if ( strcmp(v4, "entity_killed") == 0 )
  {
    v12.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "entindex_killed", 0);
    v6 = UTIL_EntityByIndex(v12);
    v13.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "entindex_attacker", 0);
    v8 = UTIL_EntityByIndex(v13);
    v14.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "entindex_inflictor", 0);
    v10 = UTIL_EntityByIndex(v14);
    v11 = *(this->_vptr_IGameSystem + 63);
  }
  else
  {
    if ( strcmp(v4, "entity_hurt") != 0 )
      return;
    v5.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "entindex_killed", 0);
    v6 = UTIL_EntityByIndex(v5);
    v7.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "entindex_attacker", 0);
    v8 = UTIL_EntityByIndex(v7);
    v9.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "entindex_inflictor", 0);
    v10 = UTIL_EntityByIndex(v9);
    v11 = *(this->_vptr_IGameSystem + 64);
  }
  v11(this, v6, v8, v10, event);
}


// CServerAchievementManager::OnKillEvent  (line 763, @0x0000000001eb0ff0, libserver.so)  // inlines: ClassMatches, Element, FirstInorder, LeftChild, NameMatches, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CEntityIdentity::ClassMatches, CEntityIdentity::NameMatches
void __fastcall CServerAchievementManager::OnKillEvent(
        CServerAchievementManager *const this,
        CBaseEntity *pVictim,
        CBaseEntity *pAttacker,
        CBaseEntity *pInflictor,
        IGameEvent *event)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v7; // rax
  unsigned __int16 m_Left; // cx
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)> *p_m_mapPlayerAchievementState; // r14
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *v10; // r15
  __int64 v11; // r13
  __int64 v12; // r12
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // rax
  CBaseAchievement *v14; // r15
  const char *m_pVictimClassNameFilter; // rsi
  const char *m_pInflictorClassNameFilter; // rsi
  const char *m_pAttackerClassNameFilter; // rsi
  const char *m_pInflictorEntityNameFilter; // rsi

  if ( pVictim != 0 )
  {
    m_Root = this->m_mapPlayerAchievementState.m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
      v7 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( 1 )
        {
          v7 = m_Left;
          if ( m_pMemory[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
      p_m_mapPlayerAchievementState = &this->m_mapPlayerAchievementState;
      v10 = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        v11 = 0;
        v12 = v7;
        elem = v10[v7].m_Data.elem;
        if ( elem->m_vecKillEventListeners.m_Size > 0 )
        {
          do
          {
            v14 = elem->m_vecKillEventListeners.m_Memory.m_pMemory[v11];
            if ( (*(v14->_vptr_IGameEventListener2 + 20))(v14) != 0 )
            {
              m_pVictimClassNameFilter = v14->m_pVictimClassNameFilter;
              if ( m_pVictimClassNameFilter == 0
                || CEntityIdentity::ClassMatches(pVictim->m_pEntity, m_pVictimClassNameFilter) )
              {
                m_pInflictorClassNameFilter = v14->m_pInflictorClassNameFilter;
                if ( m_pInflictorClassNameFilter == 0
                  || pInflictor != 0
                  && CEntityIdentity::ClassMatches(pInflictor->m_pEntity, m_pInflictorClassNameFilter) )
                {
                  m_pAttackerClassNameFilter = v14->m_pAttackerClassNameFilter;
                  if ( m_pAttackerClassNameFilter == 0
                    || pAttacker != 0 && CEntityIdentity::ClassMatches(pAttacker->m_pEntity, m_pAttackerClassNameFilter) )
                  {
                    m_pInflictorEntityNameFilter = v14->m_pInflictorEntityNameFilter;
                    if ( m_pInflictorEntityNameFilter == 0
                      || pInflictor != 0
                      && CEntityIdentity::NameMatches(pInflictor->m_pEntity, m_pInflictorEntityNameFilter) )
                    {
                      (*(v14->_vptr_IGameEventListener2 + 5))(v14, pVictim, pAttacker, pInflictor, event);
                    }
                  }
                }
              }
            }
            ++v11;
            v10 = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
            elem = v10[v12].m_Data.elem;
          }
          while ( elem->m_vecKillEventListeners.m_Size > v11 );
        }
        m_Root = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &p_m_mapPlayerAchievementState->m_Tree,
                   m_Root);
        if ( m_Root == 0xFFFF )
          break;
        v7 = m_Root;
      }
    }
  }
}


// CServerAchievementManager::OnHurtEvent  (line 808, @0x0000000001eb11a0, libserver.so)  // inlines: ClassMatches, Element, FirstInorder, LeftChild, NameMatches, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CEntityIdentity::ClassMatches, CEntityIdentity::NameMatches
void __fastcall CServerAchievementManager::OnHurtEvent(
        CServerAchievementManager *const this,
        CBaseEntity *pVictim,
        CBaseEntity *pAttacker,
        CBaseEntity *pInflictor,
        IGameEvent *event)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v7; // rax
  unsigned __int16 m_Left; // cx
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)> *p_m_mapPlayerAchievementState; // r14
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *v10; // r15
  __int64 v11; // r13
  __int64 v12; // r12
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // rax
  CBaseAchievement *v14; // r15
  const char *m_pVictimClassNameFilter; // rsi
  const char *m_pInflictorClassNameFilter; // rsi
  const char *m_pAttackerClassNameFilter; // rsi
  const char *m_pInflictorEntityNameFilter; // rsi

  if ( pVictim != 0 )
  {
    m_Root = this->m_mapPlayerAchievementState.m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
      v7 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( 1 )
        {
          v7 = m_Left;
          if ( m_pMemory[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
      p_m_mapPlayerAchievementState = &this->m_mapPlayerAchievementState;
      v10 = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        v11 = 0;
        v12 = v7;
        elem = v10[v7].m_Data.elem;
        if ( elem->m_vecHurtEventListeners.m_Size > 0 )
        {
          do
          {
            v14 = elem->m_vecHurtEventListeners.m_Memory.m_pMemory[v11];
            if ( (*(v14->_vptr_IGameEventListener2 + 20))(v14) != 0 )
            {
              m_pVictimClassNameFilter = v14->m_pVictimClassNameFilter;
              if ( m_pVictimClassNameFilter == 0
                || CEntityIdentity::ClassMatches(pVictim->m_pEntity, m_pVictimClassNameFilter) )
              {
                m_pInflictorClassNameFilter = v14->m_pInflictorClassNameFilter;
                if ( m_pInflictorClassNameFilter == 0
                  || pInflictor != 0
                  && CEntityIdentity::ClassMatches(pInflictor->m_pEntity, m_pInflictorClassNameFilter) )
                {
                  m_pAttackerClassNameFilter = v14->m_pAttackerClassNameFilter;
                  if ( m_pAttackerClassNameFilter == 0
                    || pAttacker != 0 && CEntityIdentity::ClassMatches(pAttacker->m_pEntity, m_pAttackerClassNameFilter) )
                  {
                    m_pInflictorEntityNameFilter = v14->m_pInflictorEntityNameFilter;
                    if ( m_pInflictorEntityNameFilter == 0
                      || pInflictor != 0
                      && CEntityIdentity::NameMatches(pInflictor->m_pEntity, m_pInflictorEntityNameFilter) )
                    {
                      (*(v14->_vptr_IGameEventListener2 + 6))(v14, pVictim, pAttacker, pInflictor, event);
                    }
                  }
                }
              }
            }
            ++v11;
            v10 = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
            elem = v10[v12].m_Data.elem;
          }
          while ( elem->m_vecHurtEventListeners.m_Size > v11 );
        }
        m_Root = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &p_m_mapPlayerAchievementState->m_Tree,
                   m_Root);
        if ( m_Root == 0xFFFF )
          break;
        v7 = m_Root;
      }
    }
  }
}


// CServerAchievementManager::OnAchievementEvent  (line 850, @0x0000000001eb0390, libserver.so)
void __fastcall CServerAchievementManager::OnAchievementEvent(
        CServerAchievementManager *const this,
        int iAchievementID,
        int nUserSlot)
{
  __int64 v3; // rax

  v3 = (*(this->_vptr_IGameSystem + 43))(this, iAchievementID, nUserSlot);
  if ( v3 != 0 )
    (*(*v3 + 152LL))(v3);
}


// CServerAchievementManager::OnMapEvent  (line 869, @0x0000000001eb1e10, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CServerAchievementManager::GetAchievementStateForPlayer, CPlayerAchievementState::OnMapEvent, CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
void __fastcall CServerAchievementManager::OnMapEvent(
        CServerAchievementManager *const this,
        const char *pchEventName,
        int nUserSlot)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v8; // rax
  unsigned __int16 m_Left; // cx

  if ( pchEventName != 0 && *pchEventName != 0 )
  {
    if ( nUserSlot == -1 )
    {
      m_Root = this->m_mapPlayerAchievementState.m_Tree.m_Root;
      if ( m_Root != 0xFFFF )
      {
        m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
        v8 = m_Root;
        m_Left = m_pMemory[m_Root].m_Left;
        if ( m_Left != 0xFFFF )
        {
          while ( 1 )
          {
            v8 = m_Left;
            if ( m_pMemory[m_Left].m_Left == 0xFFFF )
              break;
            m_Left = m_pMemory[m_Left].m_Left;
          }
          m_Root = m_Left;
        }
        while ( 1 )
        {
          CPlayerAchievementState::OnMapEvent(
            this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem,
            pchEventName);
          m_Root = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                     &this->m_mapPlayerAchievementState.m_Tree,
                     m_Root);
          if ( m_Root == 0xFFFF )
            break;
          v8 = m_Root;
        }
      }
    }
    else
    {
      AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
      if ( AchievementStateForPlayer != 0 )
        CPlayerAchievementState::OnMapEvent(AchievementStateForPlayer, pchEventName);
    }
  }
}


// CServerAchievementManager::GetAchievementByIndex  (line 897, @0x0000000001eb16b0, libserver.so)  // inlines: GetAchievementByIndex
// calls: CServerAchievementManager::GetAchievementStateForPlayer
IAchievement *__fastcall CServerAchievementManager::GetAchievementByIndex(
        CServerAchievementManager *const this,
        int index,
        int nUserSlot)
{
  __int64 v3; // rbx
  CPlayerAchievementState *AchievementStateForPlayer; // rax
  IAchievement *v5; // rdx
  IAchievement *result; // rax

  v3 = index;
  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer == 0 )
    return 0;
  v5 = AchievementStateForPlayer->m_vecAchievement.m_Memory.m_pMemory[v3];
  result = 0;
  if ( v5 != 0 )
    return v5 + 2;
  return result;
}


// CServerAchievementManager::GetAchievementByDisplayOrder  (line 912, @0x0000000001eb1700, libserver.so)  // inlines: GetAchievementByDisplayOrder
// calls: CServerAchievementManager::GetAchievementStateForPlayer
IAchievement *__fastcall CServerAchievementManager::GetAchievementByDisplayOrder(
        CServerAchievementManager *const this,
        int orderIndex,
        int nUserSlot)
{
  __int64 v3; // rbx
  CPlayerAchievementState *AchievementStateForPlayer; // rax
  IAchievement *v5; // rdx
  IAchievement *result; // rax

  v3 = orderIndex;
  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer == 0 )
    return 0;
  v5 = AchievementStateForPlayer->m_vecAchievementInOrder.m_Memory.m_pMemory[v3];
  result = 0;
  if ( v5 != 0 )
    return v5 + 2;
  return result;
}


// CServerAchievementManager::GetAchievementCount  (line 927, @0x0000000001eb1760, libserver.so)
// calls: CServerAchievementManager::GetAchievementStateForPlayer
int __fastcall CServerAchievementManager::GetAchievementCount(CServerAchievementManager *const this, int nUserSlot)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax

  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer != 0 )
    return AchievementStateForPlayer->m_vecAchievement.m_Size;
  else
    return 0;
}


// CServerAchievementManager::ResetAchievement_Internal  (line 937, @0x0000000001eb1790, libserver.so)  // inlines: CSteamID, IsValid, SetAchieved, SetComponentBits, SetCount, SetFromUint64, SetProgressShown, StopListeningForAllEvents
// calls: CServerAchievementManager::GetAchievementStateForPlayer, UTIL_CountNumBitsSet, DevMsg(char const*,...)
// callers: CServerAchievementManager::ResetAchievement
// strings: "ISteamGameServerStats: Failed to clear achievement %s\n"
void __fastcall CServerAchievementManager::ResetAchievement_Internal(
        CServerAchievementManager *const this,
        CBaseAchievement *pAchievement)
{
  int v4; // eax
  CPlayerAchievementState *AchievementStateForPlayer; // rax
  ISteamGameServerStats *m_pSteamGameServerStats; // r14
  uint64 m_ulSteamID; // r13
  unsigned __int8 (__fastcall *v8)(ISteamGameServerStats *, uint64, __int64); // r15
  __int64 v9; // rax
  bool v10; // zf
  const char *v11; // rax

  v4 = (*(pAchievement->_vptr_IGameEventListener2 + 33))(pAchievement);
  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, v4);
  if ( AchievementStateForPlayer == 0 )
    return;
  m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
  if ( m_pSteamGameServerStats != 0 )
  {
    m_ulSteamID = AchievementStateForPlayer->m_ulSteamID;
    if ( (m_ulSteamID & 0xF0000000000000LL) != 0
      && ((m_ulSteamID >> 52) & 0xF) <= 0xA
      && (HIBYTE(m_ulSteamID) - 1) <= 3u )
    {
      if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x10 )
      {
        if ( m_ulSteamID == 0 || (HIDWORD(m_ulSteamID) & 0xFFFFFu) > 4 )
          goto LABEL_11;
      }
      else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x70 )
      {
        if ( m_ulSteamID == 0 || (m_ulSteamID & 0xFFFFF00000000LL) != 0 )
          goto LABEL_11;
      }
      else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x30 && m_ulSteamID == 0 )
      {
        goto LABEL_11;
      }
      v8 = *(*m_pSteamGameServerStats + 64LL);
      v9 = (*(pAchievement->_vptr_IGameEventListener2 + 8))(pAchievement);
      if ( v8(m_pSteamGameServerStats, m_ulSteamID, v9) == 0 )
      {
        v11 = (*(pAchievement->_vptr_IGameEventListener2 + 8))(pAchievement);
        DevMsg("ISteamGameServerStats: Failed to clear achievement %s\n", v11);
      }
    }
  }
LABEL_11:
  v10 = (pAchievement->m_iFlags & 0x20) == 0;
  pAchievement->m_bAchieved = 0;
  pAchievement->m_iCount = 0;
  if ( !v10 )
  {
    pAchievement->m_iComponentBits = 0;
    pAchievement->m_iCount = UTIL_CountNumBitsSet(0);
  }
  pAchievement->m_iProgressShown = 0;
  if ( pAchievement->m_bRegisteredForEvents )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, pAchievement);
    pAchievement->m_bRegisteredForEvents = 0;
  }
  if ( (*(pAchievement->_vptr_IGameEventListener2 + 20))(pAchievement) != 0 )
    (*(pAchievement->_vptr_IGameEventListener2 + 4))(pAchievement);
  (*(this->_vptr_IGameSystem + 56))(this, pAchievement);
}


// CServerAchievementManager::GetPlayerID  (line 975, @0x0000000001eaef90, libserver.so)  // inlines: GetUserID, entindex
// calls: CEntityInstance::GetEntityIndex
int __fastcall CServerAchievementManager::GetPlayerID(
        CServerAchievementManager *const this,
        CBaseMultiplayerPlayer *pPlayer)
{
  CEntityIndex v2; // eax

  v2.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  return (*(*engine + 224LL))(engine, (v2.m_Data - 1));
}


// CServerAchievementManager::PlayerConnected  (line 981, @0x0000000001eb2b00, libserver.so)  // inlines: CSteamID, ConvertToUint64, Element, FindInsertionPosition, Insert, InsertAt, IsValid, LeftChild, RightChild, operator(), operator[]
// calls: CBaseMultiplayerPlayer::GetSteamID, CServerAchievementManager::GetAchievementStateForPlayer, operator new, CPlayerAchievementState::CPlayerAchievementState, CPlayerAchievementState::Init, CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, Warning, operator delete, _Unwind_Resume
// strings: "CServerAchievementManager: PlayerConnected but has no valid steamID.  Player Name = %s\n", "CServerAchievementManager: PlayerConnected but has no valid PlayerID.  Player Name = %s I
void __fastcall CServerAchievementManager::PlayerConnected(
        CServerAchievementManager *const this,
        CBaseMultiplayerPlayer *pPlayer)
{
  char v4; // dl
  int v5; // eax
  int v6; // r13d
  uint64 m_unAll64Bits; // r14
  CPlayerAchievementState *v8; // rbx
  unsigned __int16 m_Root; // bx
  unsigned __int16 m_Right; // ax
  bool v11; // r14
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v14; // ax
  const char *v15; // rax
  const char *v16; // rax
  CSteamID steamID; // [rsp+0h] [rbp-50h] BYREF
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::Node_t pCopyFrom; // [rsp+10h] [rbp-40h] BYREF

  if ( pPlayer != 0 && (*(pPlayer->_vptr_IHandleEntity + 391))(pPlayer) == 0 )
  {
    HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
    steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
    CBaseMultiplayerPlayer::GetSteamID(pPlayer, &steamID);
    v4 = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF0;
    if ( (steamID.m_steamid.m_unAll64Bits & 0xF0000000000000LL) == 0
      || BYTE6(steamID.m_steamid.m_unAll64Bits) > 0xAFu
      || (HIBYTE(steamID.m_steamid.m_unAll64Bits) - 1) > 3u )
    {
      goto LABEL_23;
    }
    if ( v4 == 16 )
    {
      if ( steamID.m_steamid.m_comp == 0 || (*(&steamID.m_steamid.m_comp + 1) & 0xFFFFFu) > 4 )
        goto LABEL_23;
    }
    else if ( v4 == 112 )
    {
      if ( steamID.m_steamid.m_comp == 0 || (*(&steamID.m_steamid.m_comp + 1) & 0xFFFFF) != 0 )
        goto LABEL_23;
    }
    else if ( v4 == 48 && steamID.m_steamid.m_comp == 0 )
    {
LABEL_23:
      v15 = (*(pPlayer->_vptr_IHandleEntity + 106))(pPlayer);
      Warning("CServerAchievementManager: PlayerConnected but has no valid steamID.  Player Name = %s\n", v15);
      return;
    }
    v5 = (*(this->_vptr_IGameSystem + 62))(this, pPlayer);
    v6 = v5;
    if ( v5 < 0 )
    {
      v16 = (*(pPlayer->_vptr_IHandleEntity + 106))(pPlayer);
      Warning(
        "CServerAchievementManager: PlayerConnected but has no valid PlayerID.  Player Name = %s ID = %d\n",
        v16,
        v6);
    }
    else if ( CServerAchievementManager::GetAchievementStateForPlayer(this, v5) == 0 )
    {
      m_unAll64Bits = steamID.m_steamid.m_unAll64Bits;
      v8 = operator new(0x150u);
      CPlayerAchievementState::CPlayerAchievementState(v8, v6, m_unAll64Bits);
      CPlayerAchievementState::Init(v8, &this->IAchievementMgr);
      pCopyFrom.elem = v8;
      m_Root = this->m_mapPlayerAchievementState.m_Tree.m_Root;
      pCopyFrom.key = v6;
      if ( m_Root == 0xFFFF )
      {
        v11 = 0;
      }
      else
      {
        while ( 1 )
        {
          v12 = !this->m_mapPlayerAchievementState.m_Tree.m_LessFunc.m_LessFunc(
                   &pCopyFrom,
                   &this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
          m_pMemory = this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory;
          if ( v12 )
          {
            m_Right = m_pMemory[m_Root].m_Right;
            v11 = 0;
          }
          else
          {
            m_Right = m_pMemory[m_Root].m_Left;
            v11 = 1;
          }
          if ( m_Right == 0xFFFF )
            break;
          m_Root = m_Right;
        }
      }
      v14 = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &this->m_mapPlayerAchievementState.m_Tree,
              &pCopyFrom);
      CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &this->m_mapPlayerAchievementState.m_Tree,
        v14,
        m_Root,
        v11);
      ++this->m_mapPlayerAchievementState.m_Tree.m_NumElements;
    }
  }
}


// CServerAchievementManager::PlayerDisconnected  (line 1014, @0x0000000001eb2460, libserver.so)  // inlines: Find, FreeNode, Links, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int, CUtlMap<int, CPlayerAchievementState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int> >::Unlink
void __fastcall CServerAchievementManager::PlayerDisconnected(
        CServerAchievementManager *const this,
        CBaseMultiplayerPlayer *pPlayer)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  CUtlMap<int,CPlayerAchievementState*,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pPlayer != 0 && (*(pPlayer->_vptr_IHandleEntity + 391))(pPlayer) == 0 )
  {
    (*(this->_vptr_IGameSystem + 48))(this);
    if ( (*(this->_vptr_IGameSystem + 65))(this) == 0 )
    {
      search.key = (*(this->_vptr_IGameSystem + 62))(this, pPlayer);
      v4 = CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &this->m_mapPlayerAchievementState.m_Tree,
             &search);
      v5 = v4;
      if ( v4 != 0xFFFF )
      {
        CUtlRBTree<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CPlayerAchievementState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
          &this->m_mapPlayerAchievementState.m_Tree,
          v4);
        v6 = v5;
        this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory[v6].m_Left = v5;
        this->m_mapPlayerAchievementState.m_Tree.m_Elements.m_pMemory[v6].m_Right = this->m_mapPlayerAchievementState.m_Tree.m_FirstFree;
        --this->m_mapPlayerAchievementState.m_Tree.m_NumElements;
        this->m_mapPlayerAchievementState.m_Tree.m_FirstFree = v5;
      }
    }
  }
}


// CServerAchievementManager::GetAchievedDuringCurrentGame  (line 1035, @0x0000000001eb1a90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CServerAchievementManager::GetAchievementStateForPlayer, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// globals: `guard variable for'CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty, CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty, __dso_handle, CUtlVector<int,CUtlMemory<int,int>>::~CUtlVector()
const CUtlVector<int,CUtlMemory<int,int> > *__fastcall CServerAchievementManager::GetAchievedDuringCurrentGame(
        CServerAchievementManager *const this,
        int nPlayerSlot)
{
  if ( CServerAchievementManager::GetAchievementStateForPlayer(this, nPlayerSlot) == 0 )
    return (&stru_10 + 200);
  if ( `guard variable for'CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty == 0
    && __cxa_guard_acquire(&`guard variable for'CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty) != 0 )
  {
    CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty.m_Size = 0;
    CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty.m_Memory.m_pMemory = 0;
    CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty.m_Memory.m_nAllocationCount = 0;
    CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty);
    __cxa_atexit(
      CUtlVector<int,CUtlMemory<int,int>>::~CUtlVector,
      &CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty,
      &_dso_handle);
  }
  return &CServerAchievementManager::GetAchievedDuringCurrentGame(int)::empty;
}


// CServerAchievementManager::SetDirty  (line 1047, @0x0000000001eb1b30, libserver.so)
// calls: CServerAchievementManager::GetAchievementStateForPlayer
void __fastcall CServerAchievementManager::SetDirty(CServerAchievementManager *const this, bool bDirty, int nUserSlot)
{
  CPlayerAchievementState *AchievementStateForPlayer; // rax

  AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, nUserSlot);
  if ( AchievementStateForPlayer != 0 )
    AchievementStateForPlayer->m_bDirty = bDirty;
}


// CServerAchievementManager::SetProgressInSteam  (line 1057, @0x0000000001eb1b70, libserver.so)  // inlines: CSteamID, IsValid, SetFromUint64
// calls: CServerAchievementManager::GetAchievementStateForPlayer, V_snprintf, Plat_FloatTime, DevMsg(char const*,...), __stack_chk_fail
// strings: "%s_STAT", "%s_COMP", "ISteamGameServerStats::SetUserStat failed to set component value in Steam for achievement, "ISteamGameServerStats::SetUserStat failed to set progress value in Steam for achievement 
void __fastcall CServerAchievementManager::SetProgressInSteam(
        CServerAchievementManager *const this,
        CBaseAchievement *pAchievement)
{
  int v4; // eax
  CPlayerAchievementState *AchievementStateForPlayer; // rax
  uint64 m_ulSteamID; // r13
  const char *v7; // rax
  unsigned int v8; // eax
  const char *v9; // rax
  unsigned int v10; // eax
  double v11; // xmm0_8
  ISteamGameServerStats *m_pSteamGameServerStats; // [rsp+0h] [rbp-450h]
  unsigned __int8 (__fastcall *v13)(ISteamGameServerStats *, uint64, char *, _QWORD); // [rsp+8h] [rbp-448h]
  char pszProgressName[1032]; // [rsp+10h] [rbp-440h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( pAchievement != 0 )
  {
    v4 = (*(pAchievement->_vptr_IGameEventListener2 + 33))(pAchievement);
    AchievementStateForPlayer = CServerAchievementManager::GetAchievementStateForPlayer(this, v4);
    if ( AchievementStateForPlayer != 0 && steamgameserverapicontext->m_pSteamGameServerStats != 0 )
    {
      m_ulSteamID = AchievementStateForPlayer->m_ulSteamID;
      if ( (m_ulSteamID & 0xF0000000000000LL) != 0
        && ((m_ulSteamID >> 52) & 0xF) <= 0xA
        && (HIBYTE(m_ulSteamID) - 1) <= 3u )
      {
        if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x10 )
        {
          if ( m_ulSteamID == 0 || (HIDWORD(m_ulSteamID) & 0xFFFFFu) > 4 )
            return;
        }
        else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x70 )
        {
          if ( m_ulSteamID == 0 || (m_ulSteamID & 0xFFFFF00000000LL) != 0 )
            return;
        }
        else if ( (BYTE6(m_ulSteamID) & 0xF0) == 0x30 && m_ulSteamID == 0 )
        {
          return;
        }
        if ( (*(pAchievement->_vptr_IGameEventListener2 + 10))(pAchievement) > 1 )
        {
          v7 = (*(pAchievement->_vptr_IGameEventListener2 + 8))(pAchievement);
          V_snprintf(pszProgressName, 1024, "%s_STAT", v7);
          m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
          v13 = *(*m_pSteamGameServerStats + 32LL);
          v8 = (*(pAchievement->_vptr_IGameEventListener2 + 18))(pAchievement);
          if ( v13(m_pSteamGameServerStats, m_ulSteamID, pszProgressName, v8) == 0 )
            DevMsg(
              "ISteamGameServerStats::SetUserStat failed to set progress value in Steam for achievement %s\n",
              pszProgressName);
        }
        if ( (pAchievement->m_iFlags & 0x20) != 0 )
        {
          v9 = (*(pAchievement->_vptr_IGameEventListener2 + 8))(pAchievement);
          V_snprintf(pszProgressName, 1024, "%s_COMP", v9);
          v10 = (*(pAchievement->_vptr_IGameEventListener2 + 23))(pAchievement);
          if ( (*(*steamgameserverapicontext->m_pSteamGameServerStats + 32LL))(
                 steamgameserverapicontext->m_pSteamGameServerStats,
                 m_ulSteamID,
                 pszProgressName,
                 v10) == 0 )
            DevMsg(
              "ISteamGameServerStats::SetUserStat failed to set component value in Steam for achievement %s\n",
              pszProgressName);
        }
        v11 = 0.0;
        if ( this->m_flTimeLastUpload == 0.0 || (v11 = Plat_FloatTime(0.0) - this->m_flTimeLastUpload) > 900.0 )
          (*(this->_vptr_IGameSystem + 48))(this, v11);
      }
    }
  }
}


// CServerAchievementManager::IsCurrentMap  (line 1105, @0x0000000001eae560, libserver.so)  // inlines: V_strlen, V_strncmp<int>
// calls: strlen, _V_strncmp
bool __fastcall CServerAchievementManager::IsCurrentMap(CServerAchievementManager *const this, const char *pszMapName)
{
  int v4; // r13d
  const char *v5; // rax

  if ( pszMapName == 0 )
    return 0;
  v4 = strlen(pszMapName);
  v5 = (*(this->_vptr_IGameSystem + 54))(this);
  return _V_strncmp(v5, pszMapName, v4) == 0;
}


