
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_soid.cpp  (line 0, @0x0000000001a6e810, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName
// strings: "Party", "Invite"
// globals: UNSPECIFIED_LOGGING_COLOR, GCSDK::g_RegisterLock_SteamID, GCSDK::g_RegisterLock_Party, GCSDK::g_RegisterLock_Lobby, GCSDK::g_RegisterLock_Invite
void __cdecl GLOBAL__sub_I_soid_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName(&GCSDK::g_RegisterLock_SteamID, 1u, "SteamID", 1);
  GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName(&GCSDK::g_RegisterLock_Party, 2u, "Party", 0);
  GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName(&GCSDK::g_RegisterLock_Lobby, 3u, "Lobby", 0);
  GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName(&GCSDK::g_RegisterLock_Invite, 4u, "Invite", 0);
}


// GCSDK::GSOIDNameMap  (line 31, @0x0000000003242000, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: GCSDK::SOIDRender_t::SOIDRender_t, GCSDK::SOIDRender_t::GetName, GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName
// globals: `guard variable for'GCSDK::GSOIDNameMap(void)::s_SOIDNameMap, GCSDK::GSOIDNameMap(void)::s_SOIDNameMap, CDefOps<int>::LessFunc(int const&,int const&), __dso_handle, CUtlMap<int,GCSDK::CSOIDNameInfo,ushort,bool (*)(int const&,int const&)>::~CUtlMap()
GCSDK::TSOIDNameMap *__cdecl GCSDK::GSOIDNameMap()
{
  if ( `guard variable for'GCSDK::GSOIDNameMap(void)::s_SOIDNameMap != 0 )
    return &GCSDK::GSOIDNameMap(void)::s_SOIDNameMap;
  if ( __cxa_guard_acquire(&`guard variable for'GCSDK::GSOIDNameMap(void)::s_SOIDNameMap) != 0 )
  {
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_LastAlloc.index = -1;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_Root = -1;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_FirstFree = -1;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_Elements.m_pMemory = 0;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_Elements.m_nAllocationCount = 0;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_Elements.m_nGrowSize = 0;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_NumElements = 0;
    GCSDK::GSOIDNameMap(void)::s_SOIDNameMap.m_Tree.m_pElements = 0;
    __cxa_guard_release(&`guard variable for'GCSDK::GSOIDNameMap(void)::s_SOIDNameMap);
    __cxa_atexit(
      CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::~CUtlMap,
      &GCSDK::GSOIDNameMap(void)::s_SOIDNameMap,
      &_dso_handle);
  }
  return &GCSDK::GSOIDNameMap(void)::s_SOIDNameMap;
}


// GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName  (line 37, @0x0000000003242270, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: GCSDK::GSOIDNameMap, CUtlRBTree<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int, CUtlMap<int, GCSDK::CSOIDNameInfo>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int, CUtlMap<int, GCSDK::CSOIDNameInfo>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int, CUtlMap<int, GCSDK::CSOIDNameInfo>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: _GLOBAL__sub_I_soid.cpp
void __fastcall GCSDK::SOIDRender_t::CAutoRegisterName::CAutoRegisterName(
        GCSDK::SOIDRender_t::CAutoRegisterName *const this,
        uint16 nType,
        const char *pszDefaultString,
        bool bDisplaySteamID)
{
  CUtlMap<int,GCSDK::CSOIDNameInfo,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v5; // ebx
  GCSDK::TSOIDNameMap *v6; // rax
  GCSDK::TSOIDNameMap *v7; // rax
  unsigned __int16 m_Root; // r12
  CUtlRBTree<CUtlMap<int,GCSDK::CSOIDNameInfo>::Node_t,short unsigned int,CUtlMap<int,GCSDK::CSOIDNameInfo>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo>::Node_t,short unsigned int>,short unsigned int> > *p_m_Tree; // r14
  unsigned __int16 m_Left; // ax
  char v11; // cl
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v14; // r13
  __int64 v15; // rbx
  bool v16; // bl
  CUtlMap<int,GCSDK::CSOIDNameInfo,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+10h] [rbp-50h] BYREF

  v5 = nType;
  v6 = GCSDK::GSOIDNameMap();
  search.key = v5;
  if ( CUtlRBTree<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &v6->m_Tree,
         &search) != 0xFFFF )
    return;
  v7 = GCSDK::GSOIDNameMap();
  search.key = v5;
  m_Root = v7->m_Tree.m_Root;
  p_m_Tree = &v7->m_Tree;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v16 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v12 = !p_m_Tree->m_LessFunc.m_LessFunc(&search.key, &p_m_Tree->m_Elements.m_pMemory[m_Root].m_Data.key);
    m_pMemory = p_m_Tree->m_Elements.m_pMemory;
    if ( v12 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v11 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_8;
LABEL_5:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v11 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_5;
LABEL_8:
  v16 = v11;
LABEL_9:
  v14 = CUtlRBTree<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          p_m_Tree,
          &search);
  CUtlRBTree<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    p_m_Tree,
    v14,
    m_Root,
    v16);
  ++p_m_Tree->m_NumElements;
  v15 = v14;
  GCSDK::GSOIDNameMap()->m_Tree.m_Elements.m_pMemory[v15].m_Data.elem.m_pszName = pszDefaultString;
  GCSDK::GSOIDNameMap()->m_Tree.m_Elements.m_pMemory[v15].m_Data.elem.m_bSteamID = bDisplaySteamID;
}


// GCSDK::SOID_t::SOID_t  (line 52, @0x00000000032420d0, libserver.so)
// callers: GCSDK::CGCSOCacheUnsubscribedJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::SOCacheCreateMsg, GCSDK::CGCSOCreateJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::SOCacheUpdateMsg, GCSDK::CGCSOUpdateJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::SOCacheDestroyMsg, GCSDK::CGCSODestroyJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::SOCacheUpdateMultipleMsg, GCSDK::CGCSOUpdateMultipleJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg, GCSDK::CGCClient::ProcessSOCacheSubscribedMsg, GCSDK::CGCClient::ProcessWelcomeMsg (13 total)
void __fastcall GCSDK::SOID_t::SOID_t(GCSDK::SOID_t *const this, const CMsgSOIDOwner *const msgSOIDOwner)
{
  this->m_id = *(msgSOIDOwner + 3);
  *&this->m_type = *(msgSOIDOwner + 8);
}


// GCSDK::SOID_t::ToMsgSOIDOwner  (line 59, @0x00000000032420f0, libserver.so)  // inlines: set_has_id, set_has_type, set_id, set_type
// callers: CDOTAGCServerSystem::SODestroyed, GCSDK::CGCClient::SendHello, GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg, GCSDK::CGCClientSharedObjectCache::BuildCacheSubscribedMsg
void __fastcall GCSDK::SOID_t::ToMsgSOIDOwner(const GCSDK::SOID_t *const this, CMsgSOIDOwner *pMsgSOIDOwner)
{
  int v2; // ecx
  GCSDK::SOID_t::ID_t m_id; // rdx

  if ( pMsgSOIDOwner != 0 )
  {
    v2 = *(pMsgSOIDOwner + 4);
    *(pMsgSOIDOwner + 8) = this->m_type;
    *(pMsgSOIDOwner + 4) = v2 | 1;
    m_id = this->m_id;
    *(pMsgSOIDOwner + 4) = v2 | 3;
    *(pMsgSOIDOwner + 3) = m_id;
  }
}


// GCSDK::SOIDRender_t::SOIDRender_t  (line 68, @0x0000000003242120, libserver.so)  // inlines: CSteamID, Element, Find, SetFromUint64, operator[]
// calls: GCSDK::GSOIDNameMap, CUtlRBTree<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int, CUtlMap<int, GCSDK::CSOIDNameInfo>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int> >::Find, V_snprintf, CSteamID::Render
// callers: CPlayerInventory::SOCacheSubscribed, GCSDK::CGCClient::ProcessWelcomeMsg, GCSDK::CLock::GetName, GCSDK::CSharedObjectCache::Dump
// strings: "<%s:%llu>", "<%d:%llu>", "<%s:%s>"
void __fastcall GCSDK::SOIDRender_t::SOIDRender_t(GCSDK::SOIDRender_t *const this, const GCSDK::SOID_t id)
{
  GCSDK::SOID_t::ID_t m_id; // r15
  GCSDK::SOID_t::Type_t m_type; // r12d
  GCSDK::TSOIDNameMap *v5; // rax
  unsigned __int16 v6; // ax
  __int64 v7; // rbx
  bool m_bSteamID; // al
  const char *v9; // rax
  const char *pszStr; // [rsp+8h] [rbp-58h]
  CUtlMap<int,GCSDK::CSOIDNameInfo,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+10h] [rbp-50h] BYREF

  m_id = id.m_id;
  m_type = id.m_type;
  v5 = GCSDK::GSOIDNameMap();
  search.key = m_type;
  v6 = CUtlRBTree<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &v5->m_Tree,
         &search);
  if ( v6 == 0xFFFF
    || (v7 = v6,
        pszStr = GCSDK::GSOIDNameMap()->m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.m_pszName,
        m_bSteamID = GCSDK::GSOIDNameMap()->m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.m_bSteamID,
        pszStr == 0) )
  {
    V_snprintf(this, 128, "<%d:%llu>", m_type, m_id);
  }
  else if ( m_bSteamID )
  {
    *&search.key = m_id;
    v9 = CSteamID::Render(&search);
    V_snprintf(this, 128, "<%s:%s>", pszStr, v9);
  }
  else
  {
    V_snprintf(this, 128, "<%s:%llu>", pszStr, m_id);
  }
}


// GCSDK::SOIDRender_t::GetName  (line 103, @0x0000000003242220, libserver.so)  // inlines: Element, Find, operator[]
// calls: GCSDK::GSOIDNameMap, CUtlRBTree<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int, CUtlMap<int, GCSDK::CSOIDNameInfo>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: GCSDK::CLock::GetTypeName
const char *__fastcall GCSDK::SOIDRender_t::GetName(uint32 nType)
{
  GCSDK::TSOIDNameMap *v2; // rax
  unsigned __int16 v3; // bx
  CUtlMap<int,GCSDK::CSOIDNameInfo,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  v2 = GCSDK::GSOIDNameMap();
  search.key = nType;
  v3 = CUtlRBTree<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &v2->m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return GCSDK::GSOIDNameMap()->m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_pszName;
}


