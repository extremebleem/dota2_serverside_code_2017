
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gcclient.cpp  (line 0, @0x0000000001a6e230, libserver.so)  // inlines: CJobMgrAutoRegisterJobClass, Color, Job_RegisterJobType, SetColor, __static_initialization_and_destruction_0
// calls: LoggingSystem_RegisterLoggingChannel, GCSDK::CJobMgr::RegisterJobType
// globals: UNSPECIFIED_LOGGING_COLOR, GCSDK::g_JobType_CGCSOCreateJob, LOG_GCCLIENT, GCSDK::g_JobType_CGCSODestroyJob, GCSDK::g_JobType_CGCSOUpdateJob, GCSDK::g_JobType_CGCSOUpdateMultipleJob, GCSDK::g_JobType_CGCSOCacheSubscribedJob, GCSDK::g_JobType_CGCSOCacheSubscribedJobUpToDate (11 total)
void __cdecl GLOBAL__sub_I_gcclient_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  LOG_GCCLIENT = LoggingSystem_RegisterLoggingChannel("GCClient", 0, 0, 2, *&UNSPECIFIED_LOGGING_COLOR);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCSOCreateJob);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCSODestroyJob);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCSOUpdateJob);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCSOUpdateMultipleJob);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCSOCacheSubscribedJob);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCSOCacheSubscribedJobUpToDate);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCSOCacheUnsubscribedJob);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCPingJob);
  GCSDK::CJobMgr::RegisterJobType(&GCSDK::g_JobType_CGCToClientPollConvarJob);
}


// GCSDK::CGCClient::Get  (line 30, @0x0000000003211a10, libserver.so)
// callers: CIngameEvent_WM2016::GiveTip, CDOTAGCServerSystem::UpdateLiveFantasyStats
// globals: GCSDK::s_pGCClient
GCSDK::CGCClient *__cdecl GCSDK::CGCClient::Get()
{
  return GCSDK::s_pGCClient;
}


// GCSDK::CGCClient::CGCClient  (line 38, @0x0000000003212ab0, libserver.so)  // inlines: CCallback, CCallbackBase, CCallbackImpl, CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, Clear, ClearLogonQueueStats, ResetDbgInfo, SetGameserverFlag, ~CUtlMemory
// calls: CMemAllocSystemInitialize, GCSDK::CJobMgr::CJobMgr, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// callers: CGCClientSystem::CGCClientSystem
// globals: CDefOps<GCSDK::SOID_t>::LessFunc(GCSDK::SOID_t const&,GCSDK::SOID_t const&), GCSDK::s_pGCClient
void __fastcall GCSDK::CGCClient::CGCClient(GCSDK::CGCClient *const this, bool bGameserver)
{
  *this = off_47CF9B0;
  *(this + 4) = 0;
  *(this + 10) = 1024;
  *(this + 11) = 0;
  CMemAllocSystemInitialize(this);
  *(this + 4) = (**g_pMemAlloc)(g_pMemAlloc, *(this + 10));
  GCSDK::CJobMgr::CJobMgr((this + 48));
  *(this + 141) = CDefOps<GCSDK::SOID_t>::LessFunc;
  *(this + 576) = -1;
  *(this + 577) = 0;
  *(this + 578) = -1;
  *(this + 579) = -1;
  *(this + 146) = CDefOps<GCSDK::SOID_t>::LessFunc;
  *(this + 151) = CDefOps<GCSDK::SOID_t>::LessFunc;
  *(this + 142) = 0;
  *(this + 286) = 0;
  *(this + 287) = 0;
  *(this + 145) = 0;
  *(this + 147) = 0;
  *(this + 296) = 0;
  *(this + 297) = 0;
  *(this + 596) = -1;
  *(this + 597) = 0;
  *(this + 598) = -1;
  *(this + 599) = -1;
  *(this + 150) = 0;
  *(this + 152) = 0;
  *(this + 306) = 0;
  *(this + 307) = 0;
  *(this + 616) = -1;
  *(this + 617) = 0;
  *(this + 618) = -1;
  *(this + 619) = -1;
  *(this + 155) = 0;
  *(this + 312) = 0;
  *(this + 157) = 0;
  *(this + 316) = 0;
  *(this + 317) = 0;
  *(this + 159) = 0;
  *(this + 1312) = bGameserver;
  *(this + 1368) = 0;
  *(this + 170) = off_47CF8B0;
  *(this + 175) = off_47CF8F0;
  *(this + 180) = off_47CF930;
  *(this + 343) = 0;
  *(this + 172) = 0;
  *(this + 173) = 0;
  *(this + 174) = 0;
  *(this + 1408) = 0;
  *(this + 353) = 0;
  *(this + 177) = 0;
  *(this + 178) = 0;
  *(this + 179) = 0;
  *(this + 1448) = 0;
  *(this + 363) = 0;
  *(this + 182) = 0;
  *(this + 183) = 0;
  *(this + 184) = 0;
  *(this + 1488) = 0;
  *(this + 373) = 0;
  *(this + 185) = off_47CF970;
  *(this + 187) = 0;
  *(this + 188) = 0;
  *(this + 189) = 0;
  GCSDK::s_pGCClient = this;
  *(this + 3) = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 327) = 4;
  *(this + 160) = 0;
  *(this + 161) = 0;
  *(this + 162) = 0;
  *(this + 326) = 0;
  *(this + 1313) = 0;
  *(this + 329) = 0;
  *(this + 330) = -1;
  *(this + 1324) = 1;
  *(this + 332) = 0;
  *(this + 333) = -1;
  if ( bGameserver )
  {
    *(this + 1368) = 2;
    *(this + 1408) = 2;
    *(this + 1448) = 2;
    *(this + 1488) = 2;
  }
  *(this + 334) = -1;
  *(this + 335) = -1;
  *(this + 168) = 0;
  *(this + 169) = 0;
}


// GCSDK::CGCClient::Clear  (line 69, @0x0000000003211a20, libserver.so)
void __fastcall GCSDK::CGCClient::Clear(GCSDK::CGCClient *const this)
{
  *(this + 3) = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 327) = 4;
  *(this + 160) = 0;
  *(this + 161) = 0;
  *(this + 162) = 0;
  *(this + 326) = 0;
  *(this + 1313) = 0;
  *(this + 329) = 0;
  *(this + 330) = -1;
  *(this + 1324) = 1;
  *(this + 332) = 0;
  *(this + 333) = -1;
}


// GCSDK::CGCClient::~CGCClient  (line 91, @0x0000000003214030, libserver.so)  // inlines: First, FirstInorder, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, PurgeAndDeleteElements, RemoveAll, SetLeftChild, SetRightChild, operator==, operator[], ~CCallback, ~CCallbackImpl, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: GCSDK::CGCClient::Uninit, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, CUtlString::FreeMemoryBlock, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int>::Purge, GCSDK::CJobMgr::~CJobMgr, CUtlMemory<unsigned char, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<GCSDK::ISharedObjectListener*, int>::Purge (13 total)
// callers: CGCClientSystem::CGCClientSystem, CGCClientSystem::~CGCClientSystem, GCSDK::CGCClient::~CGCClient
// globals: GCSDK::s_pGCClient
void __fastcall GCSDK::CGCClient::~CGCClient(GCSDK::CGCClient *const this)
{
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache*>::Node_t,short unsigned int,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache*>::Node_t,short unsigned int>,short unsigned int> > *v2; // r13
  unsigned __int16 Inorder; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int16 v6; // cx
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int16 v9; // si
  __int64 v10; // rcx
  __int64 v11; // rax
  _WORD *v12; // r8

  *this = off_47CF9B0;
  v2 = (this + 1128);
  GCSDK::CGCClient::Uninit(this);
  Inorder = *(this + 576);
  if ( Inorder != 0xFFFF )
  {
    v4 = *(this + 142);
    v5 = Inorder;
    v6 = *(v4 + 32LL * Inorder);
    if ( v6 != 0xFFFF )
    {
      while ( *(v4 + 32LL * v6) != 0xFFFF )
        v6 = *(v4 + 32LL * v6);
      Inorder = v6;
      v5 = v6;
    }
    while ( 1 )
    {
      v7 = *(v4 + 32 * v5 + 24);
      if ( v7 != 0 )
        (*(*v7 + 8LL))(v7);
      Inorder = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                  v2,
                  Inorder);
      if ( Inorder == 0xFFFF )
        break;
      v4 = *(this + 142);
      v5 = Inorder;
    }
  }
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(v2);
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements((this + 1168));
  if ( GCSDK::s_pGCClient == this )
    GCSDK::s_pGCClient = 0;
  v8 = (*(this + 1488) & 1) == 0;
  *(this + 185) = &off_47A5F50;
  if ( !v8 )
    SteamAPI_UnregisterCallback(this + 1480);
  v8 = (*(this + 1448) & 1) == 0;
  *(this + 180) = &off_4186210;
  if ( !v8 )
    SteamAPI_UnregisterCallback(this + 1440);
  v8 = (*(this + 1408) & 1) == 0;
  *(this + 175) = &off_47CF870;
  if ( !v8 )
    SteamAPI_UnregisterCallback(this + 1400);
  v8 = (*(this + 1368) & 1) == 0;
  *(this + 170) = &off_47CF870;
  if ( !v8 )
    SteamAPI_UnregisterCallback(this + 1360);
  if ( *(this + 159) != 0 )
    CUtlString::FreeMemoryBlock(this + 159);
  v8 = (*(this + 317) & 0xC0000000) == 0;
  *(this + 312) = 0;
  if ( v8 )
  {
    CUtlMemory<GCSDK::ISharedObjectListener *,int>::Purge((this + 1256));
    if ( (*(this + 317) & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::ISharedObjectListener *,int>::Purge((this + 1256));
  }
  v9 = *(this + 619);
  if ( v9 != 0xFFFF )
  {
    v10 = *(this + 306);
    v11 = 0;
    if ( v10 > 0 )
    {
      do
      {
        if ( v11 < v10 && v11 <= v9 )
        {
          v12 = (*(this + 152) + 32 * v11);
          if ( *v12 != v11 )
          {
            v12[1] = *(this + 618);
            *(*(this + 152) + 32 * v11) = v11;
            v9 = *(this + 619);
            *(this + 618) = v11;
          }
        }
        if ( v11 == v9 )
          break;
        v10 = *(this + 306);
        if ( (v11 + 1) >= v10 )
          break;
        ++v11;
      }
      while ( v11 != 0xFFFF );
    }
    *(this + 616) = -1;
    *(this + 617) = 0;
  }
  v8 = (*(this + 307) & 0xC0000000) == 0;
  *(this + 618) = -1;
  if ( v8 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(this + 76);
    v8 = (*(this + 307) & 0xC0000000) == 0;
    *(this + 619) = -1;
    if ( v8 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(this + 76);
  }
  else
  {
    *(this + 619) = -1;
  }
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge((this + 1168));
  if ( (*(this + 297) & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>::Purge((this + 1176));
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(v2);
  if ( (*(this + 287) & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(this + 71);
  GCSDK::CJobMgr::~CJobMgr((this + 48));
  CUtlMemory<unsigned char,int>::Purge(this + 2);
}


// GCSDK::CGCClient::~CGCClient  (line 91, @0x00000000032143b0, libserver.so)
// calls: GCSDK::CGCClient::~CGCClient, operator delete
void __fastcall GCSDK::CGCClient::~CGCClient(GCSDK::CGCClient *const this)
{
  GCSDK::CGCClient::~CGCClient(this);
  operator delete(this);
}


// GCSDK::CGCClient::BMainLoop  (line 113, @0x0000000003213460, libserver.so)  // inlines: SetLimit
// calls: Plat_TicksAfterMicroSecs, GCSDK::CJobTime::UpdateJobTime, GCSDK::CJobMgr::BFrameFuncRunSleepingJobs, GCSDK::CJobMgr::BFrameFuncRunYieldingJobs, GCSDK::CGCClient::ThinkConnection
// callers: CGCClientSystem::GCThink
bool __fastcall GCSDK::CGCClient::BMainLoop(
        GCSDK::CGCClient *const this,
        uint64 ulLimitMicroseconds,
        uint64 ulFrameTimeMicroseconds)
{
  bool v4; // bl
  uint64 v6; // rax
  int v7; // edi
  bool v8; // r14
  CLimitTimer limitTimer; // [rsp+0h] [rbp-30h] BYREF

  v4 = 0;
  if ( *(this + 3) != 0 )
  {
    v6 = Plat_TicksAfterMicroSecs(ulLimitMicroseconds);
    v7 = 50000;
    if ( ulFrameTimeMicroseconds != 0 )
      v7 = ulFrameTimeMicroseconds;
    limitTimer.m_nTickLimit = v6;
    GCSDK::CJobTime::UpdateJobTime(v7);
    v8 = GCSDK::CJobMgr::BFrameFuncRunSleepingJobs((this + 48), &limitTimer);
    v4 = v8 | GCSDK::CJobMgr::BFrameFuncRunYieldingJobs((this + 48), &limitTimer);
    GCSDK::CGCClient::ThinkConnection(this);
  }
  return v4;
}


// GCSDK::CGCClient::BSendMessage  (line 142, @0x0000000003211ab0, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, GCSDK::CMessageList::TallySendMessage, GCSDK::PchMsgNameFromEMsg, LoggingSystem_Log
// callers: CGCClientSystem::BSendMessage, GCSDK::CProtoBufGCClientSendHandler::BAsyncSend, GCSDK::CGCClient::BSendMessage
// strings: "Trying to send message type %u (%s) before GC connection established.  This is guaranteed
// globals: LOG_GCCLIENT
bool __fastcall GCSDK::CGCClient::BSendMessage(
        GCSDK::CGCClient *const this,
        uint32 unMsgType,
        const uint8 *pubData,
        uint32 cubData)
{
  int v8; // eax
  bool result; // al
  uint32 v10; // r12d
  const char *v11; // rax

  v8 = *(this + 327);
  if ( v8 != 0 && unMsgType + 2147479642 > 1 )
  {
    if ( v8 != 5 && LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
    {
      v10 = unMsgType & 0x7FFFFFFF;
      v11 = GCSDK::PchMsgNameFromEMsg(v10);
      LoggingSystem_Log(
        LOG_GCCLIENT,
        2,
        "Trying to send message type %u (%s) before GC connection established.  This is guaranteed to fail.\n",
        v10,
        v11);
      return 0;
    }
  }
  else if ( *(this + 3) != 0 )
  {
    result = *(this + 1313);
    if ( !result )
    {
      GCSDK::CMessageList::TallySendMessage(&GCSDK::g_theMessageList, unMsgType & 0x7FFFFFFF, cubData, 0);
      return (***(this + 3))(*(this + 3), unMsgType, pubData, cubData) == 0;
    }
    return result;
  }
  return 0;
}


// GCSDK::SendMessageGenericClientToGC  (line 179, @0x0000000003211c40, libserver.so)
// calls: GCSDK::CGCClient::BSendMessage
// globals: GCSDK::s_pGCClient
void __fastcall GCSDK::SendMessageGenericClientToGC(const google::protobuf::Message *const msg, uint32 nMsgID)
{
  GCSDK::CGCClient::BSendMessage(GCSDK::s_pGCClient, msg, nMsgID);
}


// GCSDK::YldSendSendMessageGenericClientToGCEx  (line 184, @0x0000000003213820, libserver.so)
// calls: GCSDK::CGCClient::YldSendMessageAndGetReplyEx
// callers: CGCJobUploadSaveGame::BYieldingRunJob, CGCJobLoadSaveGame::BYieldingRunJob, GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>::BYieldingRunJob, CGCServerJobSendFantasyMatch::BYieldingRunJob, CGCClientJobGetGCStatus::BYieldingRunJob
// globals: GCSDK::s_pGCClient
GCSDK::ESendMessageAndGetReply __fastcall GCSDK::YldSendSendMessageGenericClientToGCEx(
        const google::protobuf::Message *const msg,
        uint32 nMsgID,
        google::protobuf::Message *pMsgReply,
        uint32 nMsgIDReply,
        GCSDK::EExpectedReply eExpectedReply)
{
  return GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
           GCSDK::s_pGCClient,
           msg,
           nMsgID,
           pMsgReply,
           nMsgIDReply,
           eExpectedReply,
           0);
}


// GCSDK::CGCClient::YldSendMessageAndGetReplyEx  (line 189, @0x0000000003213720, libserver.so)  // inlines: CProtoBufPtrMsg, ~CProtoBufPtrMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, GCSDK::CGCClient::YldSendMessageAndGetReplyEx, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, _Unwind_Resume
// callers: CGCClientJobRerollPlayerChallenge::BYieldingRunJob, GCSDK::YldSendSendMessageGenericClientToGCEx
GCSDK::ESendMessageAndGetReply __fastcall GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
        GCSDK::CGCClient *const this,
        const google::protobuf::Message *const msgOut,
        GCSDK::MsgType_t eMsgOut,
        google::protobuf::Message *pMsgIn,
        GCSDK::MsgType_t eMsgIn,
        GCSDK::EExpectedReply eExpectedReply,
        uint32 nTimeoutSeconds)
{
  GCSDK::CProtoBufMsgBase v13; // [rsp+10h] [rbp-90h] BYREF
  const google::protobuf::Message *msgOuta; // [rsp+30h] [rbp-70h]
  GCSDK::CProtoBufPtrMsg msgInWrapper; // [rsp+40h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&v13, eMsgOut);
  msgOuta = msgOut;
  v13._vptr_CProtoBufMsgBase = off_47CF7B0;
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgInWrapper);
  msgInWrapper._vptr_CProtoBufMsgBase = off_47CF7B0;
  msgInWrapper.m_pProtoBufBody = pMsgIn;
  LODWORD(this) = GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
                    this,
                    &v13,
                    &msgInWrapper,
                    eMsgIn,
                    eExpectedReply,
                    nTimeoutSeconds);
  msgInWrapper._vptr_CProtoBufMsgBase = off_47CF7B0;
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgInWrapper);
  v13._vptr_CProtoBufMsgBase = off_47CF7B0;
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&v13);
  return this;
}


// GCSDK::CGCClient::YldAwaitMsgReply  (line 196, @0x0000000003213580, libserver.so)  // inlines: GClientJobCur, GJobCur, SetJobTimeout
// calls: GCSDK::CJob::BYieldingWaitForMsg, GCSDK::CGCClient::MessageReplyTimedOut
// callers: GCSDK::CGCClient::YldSendMessageAndGetReplyEx
GCSDK::ESendMessageAndGetReply __fastcall GCSDK::CGCClient::YldAwaitMsgReply(
        GCSDK::CGCClient *const this,
        GCSDK::IMsgNetPacket **ppNetPacket,
        GCSDK::MsgType_t eMsg,
        GCSDK::EExpectedReply eExpectedReply,
        uint32 nTimeoutSeconds)
{
  uint32 v9; // ebx
  int v10; // edx
  GCSDK::CJob *v11; // rdi
  GCSDK::ESendMessageAndGetReply result; // eax
  int v13; // edx
  GCSDK::IMsgNetPacket *pNetPacketReply; // [rsp+18h] [rbp-38h] BYREF

  v9 = nTimeoutSeconds;
  if ( nTimeoutSeconds != 0 )
  {
    v10 = nTimeoutSeconds / 5LL + 1;
  }
  else
  {
    v10 = 3;
    v9 = 10;
  }
  pNetPacketReply = 0;
  v11 = GCSDK::g_pJobCur;
  *(&GCSDK::g_pJobCur[1] + 2) = v10;
  if ( GCSDK::CJob::BYieldingWaitForMsg(v11, &pNetPacketReply) )
  {
    v13 = (*(pNetPacketReply->_vptr_CRefCount + 7))(pNetPacketReply);
    result = GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_MsgTypeMismatch;
    if ( eMsg == v13 )
    {
      *ppNetPacket = pNetPacketReply;
      return GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK;
    }
  }
  else
  {
    result = GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_Timeout;
    if ( eExpectedReply == GCSDK::EExpectedReply::kExpectedReply_Critical )
    {
      GCSDK::CGCClient::MessageReplyTimedOut(this, eMsg, v9);
      return GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_Timeout;
    }
  }
  return result;
}


// GCSDK::CGCClient::YldSendMessageAndGetReplyEx  (line 219, @0x0000000003213660, libserver.so)  // inlines: BSendMessage, CProtoBufGCClientSendHandler, ExpectingReply, SetJobIDSource, set_has_job_id_source, set_job_id_source
// calls: GCSDK::CProtoBufMsgBase::BAsyncSend, GCSDK::CGCClient::YldAwaitMsgReply, GCSDK::CProtoBufMsgBase::InitFromPacketSafe
// callers: CGCClientJobGrantSurveyPermission::BYieldingRunJob, CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CGCServerJobGetAdditionalItems::BYieldingRunJob, CGCClientJobTeamFanfare::BYieldingRunJob, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob, CGCClientJobSetLeaverDetected::BYieldingRunJob, CGCSubmitGameserverCrashReportJob::BYieldingRunGCJob, CGCClientJobUploadMatchStats::BYieldingGetPermission, CGCClientJobUploadMatchStats::BYieldingRunJob, GCSDK::CGCClient::YldSendMessageAndGetReplyEx
GCSDK::ESendMessageAndGetReply __fastcall GCSDK::CGCClient::YldSendMessageAndGetReplyEx(
        GCSDK::CGCClient *const this,
        GCSDK::CProtoBufMsgBase *const msgOut,
        GCSDK::CProtoBufMsgBase *pMsgIn,
        GCSDK::MsgType_t eMsg,
        GCSDK::EExpectedReply eExpectedReply,
        uint32 nTimeoutSeconds)
{
  JobID_t m_JobID; // rdx
  CMsgProtoBufHeader *m_pProtoBufHdr; // rax
  bool v12; // al
  GCSDK::ESendMessageAndGetReply v13; // r10d
  GCSDK::IMsgNetPacket *pNetPacketIn; // [rsp+10h] [rbp-40h] BYREF
  GCSDK::CGCClient *v17; // [rsp+18h] [rbp-38h]

  m_JobID = GCSDK::g_pJobCur->m_JobID;
  m_pProtoBufHdr = msgOut->m_pProtoBufHdr;
  *(m_pProtoBufHdr + 4) |= 8u;
  *(m_pProtoBufHdr + 5) = m_JobID;
  pNetPacketIn = &off_47CFA30;
  v17 = this;
  v12 = GCSDK::CProtoBufMsgBase::BAsyncSend(msgOut, &pNetPacketIn);
  v13 = GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_SendFailed;
  if ( v12 )
  {
    pNetPacketIn = 0;
    v13 = GCSDK::CGCClient::YldAwaitMsgReply(this, &pNetPacketIn, eMsg, eExpectedReply, nTimeoutSeconds);
    if ( v13 == GCSDK::ESendMessageAndGetReply::k_ESendMessageAndGetReply_OK )
      return !GCSDK::CProtoBufMsgBase::InitFromPacketSafe(pMsgIn, pNetPacketIn) ? 3 : 0;
  }
  return v13;
}


// GCSDK::CGCClient::BSendMessage  (line 245, @0x0000000003211b90, libserver.so)
// calls: GCSDK::CGCClient::BSendMessage
// callers: CGCClientSystem::BSendMessage
bool __fastcall GCSDK::CGCClient::BSendMessage(GCSDK::CGCClient *const this, const GCSDK::CGCMsgBase *const msg)
{
  return GCSDK::CGCClient::BSendMessage(this, **(msg + 1), (*(msg + 1) + 16LL), *(msg + 6) - 16);
}


// GCSDK::CGCClient::BSendMessage  (line 250, @0x0000000003211bb0, libserver.so)  // inlines: BSendMessage, CProtoBufGCClientSendHandler, CProtoBufPtrMsg, ~CProtoBufPtrMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, GCSDK::CProtoBufMsgBase::BAsyncSend, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, _Unwind_Resume
// callers: GCSDK::SendMessageGenericClientToGC
bool __fastcall GCSDK::CGCClient::BSendMessage(
        GCSDK::CGCClient *const this,
        const google::protobuf::Message *const msgOut,
        GCSDK::MsgType_t eMsg)
{
  bool v6; // [rsp+Ch] [rbp-64h]
  GCSDK::CProtoBufMsgBase::IProtoBufSendHandler sender; // [rsp+10h] [rbp-60h] BYREF
  GCSDK::CGCClient *v8; // [rsp+18h] [rbp-58h]
  GCSDK::CProtoBufPtrMsg wrapper; // [rsp+20h] [rbp-50h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&wrapper, eMsg);
  wrapper._vptr_CProtoBufMsgBase = off_47CF7B0;
  wrapper.m_pProtoBufBody = msgOut;
  sender._vptr_IProtoBufSendHandler = &off_47CFA30;
  v8 = this;
  v6 = GCSDK::CProtoBufMsgBase::BAsyncSend(&wrapper, &sender);
  wrapper._vptr_CProtoBufMsgBase = off_47CF7B0;
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&wrapper);
  return v6;
}


// GCSDK::CProtoBufGCClientSendHandler::BAsyncSend  (line 264, @0x000000000321abc0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CGCClient::BSendMessage, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// strings: "CGCClient - BSendGCMsgToClient (ProtoBuf)", "Steam", "CGCClient"
bool __fastcall GCSDK::CProtoBufGCClientSendHandler::BAsyncSend(
        GCSDK::CProtoBufGCClientSendHandler *const this,
        GCSDK::MsgType_t eMsg,
        const uint8 *pubMsgBytes,
        uint32 cubSize)
{
  int m_enabled; // eax
  bool v7; // r12
  bool v8; // r13
  __int64 v9; // rdi
  bool v10; // r14
  unsigned __int64 v12; // r12
  ThreadId_t v13; // r13
  uint64 v14; // rcx
  unsigned __int64 v15; // r13
  ThreadId_t v16; // r15
  CVProfNode *m_pParent; // rax
  uint64 v18; // rcx
  unsigned __int64 v19; // r13
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v23; // rcx
  int v24; // r13d
  unsigned __int64 v25; // r13
  uint64 v26; // rcx
  uint64 v27; // rcx
  CVProfNode *v28; // rax
  CVProfNode *SubNode; // rax
  CVProfile::CBudgetGroup *v30; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v32; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-48h]
  ThreadId_t v34; // [rsp+8h] [rbp-48h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v7 = m_enabled != 0;
  v8 = 0;
  if ( m_enabled != 0 )
  {
    v19 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CGCClient" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CGCClient", 0, "Steam", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v32 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v32->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    v21 = __rdtsc();
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v23 = m_numTimeBaseTicks - v19;
    v24 = g_VProfCurrentProfile.m_enabled;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v23 + (v21 | (HIDWORD(v21) << 32));
    if ( v24 != 0 )
    {
      v25 = __rdtsc();
      v34 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v34 == ThreadGetCurrentId(v20) )
      {
        SubNode = g_VProfCurrentProfile.m_pCurNode;
        if ( SubNode->m_pszName != "CGCClient - BSendGCMsgToClient (ProtoBuf)" )
        {
          SubNode = CVProfNode::GetSubNode(
                      g_VProfCurrentProfile.m_pCurNode,
                      "CGCClient - BSendGCMsgToClient (ProtoBuf)",
                      0,
                      "Steam",
                      4);
          g_VProfCurrentProfile.m_pCurNode = SubNode;
        }
        v30 = &g_VProfCurrentProfile.m_pBudgetGroups[SubNode->m_BudgetGroupID];
        v30->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      v26 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      v27 = v26 - v25;
      v8 = v7;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v27 + __rdtsc();
    }
    else
    {
      v8 = 0;
    }
  }
  v10 = GCSDK::CGCClient::BSendMessage(this->m_pClient, eMsg | 0x80000000, pubMsgBytes, cubSize);
  if ( v8 )
  {
    v15 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v16 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v16 == ThreadGetCurrentId(v9) )
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
    v18 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v18 - v15 + __rdtsc();
  }
  if ( v7 )
  {
    v12 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v13 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v13 == ThreadGetCurrentId(v9) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          v28 = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( v28 != 0 )
            g_VProfCurrentProfile.m_pCurNode = v28;
          else
            v28 = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          v28 = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = v28 == &g_VProfCurrentProfile.m_Root;
      }
    }
    v14 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v14 - v12 + __rdtsc();
  }
  return v10;
}


// GCSDK::CGCClient::BSendMessage  (line 281, @0x0000000003211c60, libserver.so)  // inlines: CProtoBufGCClientSendHandler
// calls: GCSDK::CProtoBufMsgBase::BAsyncSend
// callers: CGCServerJobSendRealtimeStats::BYieldingRunJob, CGCClientSystem::BSendMessage
bool __fastcall GCSDK::CGCClient::BSendMessage(GCSDK::CGCClient *const this, const GCSDK::CProtoBufMsgBase *const msg)
{
  GCSDK::CProtoBufMsgBase::IProtoBufSendHandler sender; // [rsp+0h] [rbp-10h] BYREF
  GCSDK::CGCClient *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  sender._vptr_IProtoBufSendHandler = &off_47CFA30;
  return GCSDK::CProtoBufMsgBase::BAsyncSend(msg, &sender);
}


// GCSDK::CGCClient::OnGCMessageAvailable  (line 293, @0x0000000003216d50, libserver.so)  // inlines: Alloc, AllocNetPacket, CIMsgNetPacketAutoRelease, Construct<GCSDK::CNetPacket>, EnsureCapacity, Release, memcpy, ~CIMsgNetPacketAutoRelease
// calls: CUtlMemoryPoolBase::Alloc, GCSDK::CNetPacket::CNetPacket, GCSDK::CNetPacket::Init, GCSDK::IMsgNetPacketFromCNetPacket, GCSDK::CGCClient::DispatchPacket, GCSDK::CNetPacket::Release, memcpy, GCSDK::CRefCount::Release, _Unwind_Resume
// callers: GCSDK::CGCClient::BInit
void __fastcall GCSDK::CGCClient::OnGCMessageAvailable(GCSDK::CGCClient *const this, GCMessageAvailable_t *pCallback)
{
  __int64 v3; // rdi
  signed int v4; // ecx
  signed int v5; // r14d
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r12
  const void *v11; // r13
  int v12; // eax
  GCSDK::CNetPacket *v13; // rax
  GCSDK::CNetPacket *v14; // r13
  GCSDK::IMsgNetPacket *v15; // rax
  volatile signed __int32 *v16; // r12
  const void *v17; // r13
  _QWORD *v18; // rax
  GCSDK::CNetPacket *v19; // rax
  GCSDK::CNetPacket *v20; // r12
  GCSDK::IMsgNetPacket *v21; // rax
  volatile signed __int32 *v22; // r13
  uint32 cubData; // [rsp+18h] [rbp-38h] BYREF
  uint32 unMsgType[13]; // [rsp+1Ch] [rbp-34h] BYREF

  while ( 1 )
  {
    v3 = *(this + 3);
    if ( v3 == 0 || (*(*v3 + 8LL))(v3, &cubData) == 0 )
      break;
    v4 = *(this + 10);
    v5 = cubData + 16;
    if ( (cubData + 16) <= v4 || ((v6 = *(this + 11)) & 0x40000000) != 0 )
    {
      v10 = *(this + 4);
    }
    else
    {
      if ( (v6 & 0xC0000000) != 0 )
      {
        v17 = *(this + 4);
        v18 = (**g_pMemAlloc)(g_pMemAlloc, v5);
        *(this + 4) = v18;
        v10 = v18;
        if ( v17 != 0 )
        {
          memcpy(v18, v17, *(this + 10));
          v10 = *(this + 4);
        }
        *(this + 11) &= 0x3FFFFFFFu;
      }
      else
      {
        v7 = *(this + 4);
        v8 = *g_pMemAlloc;
        if ( v7 != 0 )
          v9 = (*(v8 + 8))(g_pMemAlloc, v7, v5);
        else
          v9 = (*v8)(g_pMemAlloc, v5);
        *(this + 4) = v9;
        v10 = v9;
      }
      *(this + 10) = v5;
      v4 = v5;
    }
    v11 = v10 + 2;
    v12 = (*(**(this + 3) + 16LL))(*(this + 3), unMsgType, v10 + 2, (v4 - 16), &cubData);
    if ( *(this + 1313) == 0 && v12 == 0 )
    {
      if ( (unMsgType[0] & 0x80000000) != 0 )
      {
        ++GCSDK::g_cNetPacket;
        v19 = CUtlMemoryPoolBase::Alloc(&GCSDK::CNetPacketPool::sm_MemPoolNetPacket);
        v20 = v19;
        if ( v19 != 0 )
          GCSDK::CNetPacket::CNetPacket(v19);
        GCSDK::CNetPacket::Init(v20, cubData, v11);
        v21 = GCSDK::IMsgNetPacketFromCNetPacket(v20);
        v22 = v21;
        if ( v21 != 0 )
          GCSDK::CGCClient::DispatchPacket(this, v21);
        GCSDK::CNetPacket::Release(v20);
        if ( v22 != 0 && _InterlockedSub(v22 + 2, 1u) == 0 )
          (*(*v22 + 16LL))(v22);
      }
      else
      {
        *v10 = unMsgType[0];
        v10[1] = 0;
        ++GCSDK::g_cNetPacket;
        v13 = CUtlMemoryPoolBase::Alloc(&GCSDK::CNetPacketPool::sm_MemPoolNetPacket);
        v14 = v13;
        if ( v13 != 0 )
          GCSDK::CNetPacket::CNetPacket(v13);
        GCSDK::CNetPacket::Init(v14, v5, v10);
        v15 = GCSDK::IMsgNetPacketFromCNetPacket(v14);
        v16 = v15;
        if ( v15 != 0 )
          GCSDK::CGCClient::DispatchPacket(this, v15);
        GCSDK::CNetPacket::Release(v14);
        if ( v16 != 0 && _InterlockedSub(v16 + 2, 1u) == 0 )
          (*(*v16 + 16LL))(v16);
      }
    }
  }
}


// GCSDK::CGCClient::MessageReplyTimedOut  (line 362, @0x00000000032134e0, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, GCSDK::CGCClient::ThinkConnection, LoggingSystem_Log
// callers: GCSDK::CGCClient::YldAwaitMsgReply
// strings: "Timed out waiting %d secs for reply msg %d from GC.  Assuming connection has been disrupt
// globals: LOG_GCCLIENT
void __fastcall GCSDK::CGCClient::MessageReplyTimedOut(
        GCSDK::CGCClient *const this,
        uint32 nExpectedMsg,
        uint nTimeoutSecs)
{
  if ( *(this + 327) == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
      LoggingSystem_Log(
        LOG_GCCLIENT,
        2,
        "Timed out waiting %d secs for reply msg %d from GC.  Assuming connection has been disrupted.\n",
        nTimeoutSecs,
        nExpectedMsg & 0x7FFFFFFF);
    *(this + 327) = 2;
    GCSDK::CGCClient::ThinkConnection(this);
  }
}


// GCSDK::CGCClient::OnSteamServersDisconnected  (line 376, @0x0000000003211e20, libserver.so)
// calls: GCSDK::CGCClient::UpdateLogonState
void __fastcall GCSDK::CGCClient::OnSteamServersDisconnected(
        GCSDK::CGCClient *const this,
        SteamServersDisconnected_t *pCallback)
{
  GCSDK::CGCClient::UpdateLogonState(this);
}


// GCSDK::CGCClient::OnSteamServerConnectFailure  (line 381, @0x0000000003211e30, libserver.so)
// calls: GCSDK::CGCClient::UpdateLogonState
void __fastcall GCSDK::CGCClient::OnSteamServerConnectFailure(
        GCSDK::CGCClient *const this,
        SteamServerConnectFailure_t *pCallback)
{
  GCSDK::CGCClient::UpdateLogonState(this);
}


// GCSDK::CGCClient::OnSteamServersConnected  (line 386, @0x0000000003211e40, libserver.so)
// calls: GCSDK::CGCClient::UpdateLogonState
void __fastcall GCSDK::CGCClient::OnSteamServersConnected(
        GCSDK::CGCClient *const this,
        SteamServersConnected_t *pCallback)
{
  GCSDK::CGCClient::UpdateLogonState(this);
}


// GCSDK::CGCClient::UpdateLogonState  (line 391, @0x0000000003211c90, libserver.so)  // inlines: ClearLogonQueueStats, LJobTimeCur
// callers: GCSDK::CGCClient::OnSteamServersDisconnected, GCSDK::CGCClient::OnSteamServerConnectFailure, GCSDK::CGCClient::OnSteamServersConnected, GCSDK::CGCClient::BInit
void __fastcall GCSDK::CGCClient::UpdateLogonState(GCSDK::CGCClient *const this)
{
  __int64 v2; // rdi
  char v3; // al
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rdi

  v2 = *(this + 1);
  if ( v2 != 0 )
  {
    v3 = (*(*v2 + 8LL))(v2);
  }
  else
  {
    v6 = *(this + 2);
    if ( v6 == 0 )
      goto LABEL_7;
    v3 = (*(*v6 + 64LL))(v6);
  }
  if ( v3 != 0 )
  {
    v4 = *(this + 327);
    if ( v4 == 4 )
    {
      *(this + 327) = 2;
      *(this + 334) = -1;
      *(this + 335) = -1;
      *(this + 168) = 0;
      *(this + 169) = 0;
      *(this + 162) = GCSDK::CJobTime::sm_lTimeCur;
    }
    else if ( v4 == 6 )
    {
      *(this + 327) = 1;
      *(this + 334) = -1;
      *(this + 335) = -1;
      *(this + 168) = 0;
      *(this + 169) = 0;
      *(this + 162) = GCSDK::CJobTime::sm_lTimeCur;
    }
    return;
  }
LABEL_7:
  v5 = *(this + 327) == 1;
  *(this + 162) = 0;
  if ( v5 )
    *(this + 327) = 6;
  else
    *(this + 327) = 4;
  *(this + 334) = -1;
  *(this + 335) = -1;
  *(this + 168) = 0;
  *(this + 169) = 0;
}


// GCSDK::CGCClient::DispatchPacket  (line 437, @0x00000000032163e0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, ClearLogonQueueStats, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, LJobTimeCur, Lock, Unlock, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgConnectionStatus::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, LoggingSystem_IsChannelEnabled (25 total)
// callers: GCSDK::CGCClient::OnGCMessageAvailable
// strings: "Attempting to re-establish GC connection.\n", "You are #%d in line of %d waiting players.\n", "Connection to GC confirmed.\n", "Connection to GC has been lost.\n", "In logon queue; waiting for GC to confirm connection.\n", "Estimated wait time remaining is %02d:%02d.\n" (10 total)
// globals: GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool, LOG_GCCLIENT, GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool
void __fastcall GCSDK::CGCClient::DispatchPacket(GCSDK::CGCClient *const this, GCSDK::IMsgNetPacket *pMsgNetPacket)
{
  unsigned int v4; // eax
  GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus> *v5; // r15
  const google::protobuf::Descriptor *v6; // rax
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  CMsgConnectionStatus *v10; // rax
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // r15
  int v15; // eax
  float v16; // xmm0_4
  unsigned __int64 v17; // rax
  google::protobuf::Message *v18; // rsi
  GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *v19; // r15
  const google::protobuf::Descriptor *v20; // rax
  const google::protobuf::Descriptor *v21; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v23; // rax
  google::protobuf::Message *m_pProtoBufBody; // rsi
  uint32 v25; // ebx
  GCSDK::MsgType_t v26; // eax
  GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *v27; // r15
  const google::protobuf::Descriptor *v28; // rax
  const google::protobuf::Descriptor *v29; // rax
  uint32 v30; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v31; // rax
  uint32 oldStatusa; // [rsp+Ch] [rbp-64h]
  GCConnectionStatus oldStatus; // [rsp+Ch] [rbp-64h]
  uint32 oldStatusb; // [rsp+Ch] [rbp-64h]
  uint32 oldStatusc; // [rsp+Ch] [rbp-64h]
  GCSDK::CProtoBufMsg<CMsgConnectionStatus> msg; // [rsp+10h] [rbp-60h] BYREF

  v4 = (*(pMsgNetPacket->_vptr_CRefCount + 7))(pMsgNetPacket);
  if ( v4 == 4005 )
  {
    if ( *(this + 1312) == 0 )
      return;
    if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
      LoggingSystem_Log(LOG_GCCLIENT, 1, "Received server welcome from GC.\n");
    *(this + 327) = 0;
    *(this + 334) = -1;
    *(this + 335) = -1;
    *(this + 168) = 0;
    *(this + 169) = 0;
    *(this + 161) = GCSDK::CJobTime::sm_lTimeCur;
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
    msg._vptr_CProtoBufMsgBase = &off_43055B0;
    msg.m_pProtoBufBody = 0;
    if ( !GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr )
      {
        v19 = operator new(0x28u);
        v20 = CMsgClientWelcome::descriptor();
        oldStatusb = google::protobuf::internal::ExtensionSet::GetInt32(
                       (v20->options_ + 8),
                       msgpool_hard_limit.number_,
                       msgpool_hard_limit.default_value_);
        v21 = CMsgClientWelcome::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v21->options_ + 8),
                  msgpool_soft_limit.number_,
                  msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v19, Int32, oldStatusb);
        v19->_vptr_CProtoBufMsgMemoryPoolBase = &off_43066D0;
        GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool = v19;
        v23 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v23, v19);
        GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool);
    GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pMsgNetPacket);
    GCSDK::CGCClient::ProcessWelcomeMsg(this, msg.m_pProtoBufBody);
    m_pProtoBufBody = msg.m_pProtoBufBody;
    msg._vptr_CProtoBufMsgBase = &off_43055B0;
    if ( msg.m_pProtoBufBody == 0 )
      goto LABEL_35;
LABEL_34:
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool, m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
    goto LABEL_35;
  }
  if ( v4 > 0xFA5 )
  {
    if ( v4 - 4009 <= 1 )
    {
      GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
      msg._vptr_CProtoBufMsgBase = off_47CFA50;
      msg.m_pProtoBufBody = 0;
      if ( !GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_bRegisteredWithMemoryPoolMgr )
      {
        pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
        if ( !GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_bRegisteredWithMemoryPoolMgr )
        {
          v5 = operator new(0x28u);
          v6 = CMsgConnectionStatus::descriptor();
          oldStatusa = google::protobuf::internal::ExtensionSet::GetInt32(
                         (v6->options_ + 8),
                         msgpool_hard_limit.number_,
                         msgpool_hard_limit.default_value_);
          v7 = CMsgConnectionStatus::descriptor();
          v8 = google::protobuf::internal::ExtensionSet::GetInt32(
                 (v7->options_ + 8),
                 msgpool_soft_limit.number_,
                 msgpool_soft_limit.default_value_);
          GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v5, v8, oldStatusa);
          v5->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D02D0;
          GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool = v5;
          v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
          GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v5);
          GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_bRegisteredWithMemoryPoolMgr = 1;
        }
        pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      }
      msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool);
      GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pMsgNetPacket);
      oldStatus = *(this + 327);
      v10 = msg.m_pProtoBufBody;
      v11 = *(msg.m_pProtoBufBody + 6);
      *(this + 334) = -1;
      *(this + 335) = -1;
      *(this + 168) = 0;
      *(this + 169) = 0;
      *(this + 327) = v11;
      *(this + 161) = GCSDK::CJobTime::sm_lTimeCur;
      v12 = *(v10 + 4);
      if ( (v12 & 0xC) == 0xC )
      {
        v13 = LOG_GCCLIENT;
        *(this + 334) = *(v10 + 8);
        *(this + 335) = *(v10 + 9);
        if ( LoggingSystem_IsChannelEnabled(v13, 1) != 0 )
          LoggingSystem_Log(
            LOG_GCCLIENT,
            1,
            "You are #%d in line of %d waiting players.\n",
            *(this + 334),
            *(this + 335));
        v10 = msg.m_pProtoBufBody;
        v12 = *(msg.m_pProtoBufBody + 4);
      }
      if ( (v12 & 0x10) != 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
          LoggingSystem_Log(
            LOG_GCCLIENT,
            1,
            "You have been waiting for approximately %02d:%02d.\n",
            *(msg.m_pProtoBufBody + 10) / 60,
            *(msg.m_pProtoBufBody + 10) % 60);
        v10 = msg.m_pProtoBufBody;
        *(this + 168) = GCSDK::CJobTime::sm_lTimeCur - 1000000LL * *(msg.m_pProtoBufBody + 10);
      }
      v14 = *(v10 + 11);
      if ( v14 > 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
          LoggingSystem_Log(LOG_GCCLIENT, 1, "Estimated wait time remaining is %02d:%02d.\n", v14 / 60, v14 % 60);
        *(this + 169) = GCSDK::CJobTime::sm_lTimeCur + 1000000 * v14;
      }
      v15 = *(this + 327);
      switch ( v15 )
      {
        case 2:
          if ( oldStatus == GCConnectionStatus::GCConnectionStatus_HAVE_SESSION
            && LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
          {
            LoggingSystem_Log(LOG_GCCLIENT, 2, "Connection to GC has been lost.\n");
          }
          if ( *(this + 1324) != 0 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
              LoggingSystem_Log(LOG_GCCLIENT, 1, "Attempting to re-establish GC connection.\n");
          }
          else if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
          {
            LoggingSystem_Log(LOG_GCCLIENT, 1, "Notifying GC we don't need a session.\n");
          }
          GCSDK::CGCClient::SendHello(this);
          break;
        case 3:
          if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
            LoggingSystem_Log(LOG_GCCLIENT, 1, "In logon queue; waiting for GC to confirm connection.\n");
          v18 = msg.m_pProtoBufBody;
          *(this + 330) = *(msg.m_pProtoBufBody + 7);
          msg._vptr_CProtoBufMsgBase = off_47CFA50;
          goto LABEL_56;
        case 0:
          if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
            LoggingSystem_Log(LOG_GCCLIENT, 1, "Connection to GC confirmed.\n");
          break;
        default:
          *(this + 160) = GCSDK::CJobTime::sm_lTimeCur;
          v16 = (RandomFloat(0.0, 10.0) + 60.0) * 1000000.0;
          if ( v16 >= 9.223372e18 )
            v17 = (v16 - 9.223372e18) ^ 0x8000000000000000LL;
          else
            v17 = v16;
          *(this + 160) += v17;
          v18 = msg.m_pProtoBufBody;
LABEL_55:
          msg._vptr_CProtoBufMsgBase = off_47CFA50;
          if ( v18 != 0 )
          {
LABEL_56:
            GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool, v18);
            msg.m_pProtoBufBody = 0;
          }
LABEL_35:
          GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
          goto LABEL_36;
      }
      v18 = msg.m_pProtoBufBody;
      goto LABEL_55;
    }
LABEL_36:
    GCSDK::CJobMgr::BRouteMsgToJob((this + 48), this, pMsgNetPacket, GCSDK::EGCMsgContext::k_eGCMsgContext_All);
    v25 = (*(pMsgNetPacket->_vptr_CRefCount + 6))(pMsgNetPacket);
    v26 = (*(pMsgNetPacket->_vptr_CRefCount + 7))(pMsgNetPacket);
    GCSDK::CMessageList::TallyReceiveMessage(&GCSDK::g_theMessageList, v26, v25, 0);
    return;
  }
  if ( v4 != 4004 )
    goto LABEL_36;
  if ( *(this + 1312) == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
      LoggingSystem_Log(LOG_GCCLIENT, 1, "Received client welcome from GC.\n");
    *(this + 327) = 0;
    *(this + 334) = -1;
    *(this + 335) = -1;
    *(this + 168) = 0;
    *(this + 169) = 0;
    *(this + 161) = GCSDK::CJobTime::sm_lTimeCur;
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
    msg._vptr_CProtoBufMsgBase = &off_43055B0;
    msg.m_pProtoBufBody = 0;
    if ( !GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr )
      {
        v27 = operator new(0x28u);
        v28 = CMsgClientWelcome::descriptor();
        oldStatusc = google::protobuf::internal::ExtensionSet::GetInt32(
                       (v28->options_ + 8),
                       msgpool_hard_limit.number_,
                       msgpool_hard_limit.default_value_);
        v29 = CMsgClientWelcome::descriptor();
        v30 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v29->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v27, v30, oldStatusc);
        v27->_vptr_CProtoBufMsgMemoryPoolBase = &off_43066D0;
        GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool = v27;
        v31 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v31, v27);
        GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool);
    GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pMsgNetPacket);
    GCSDK::CGCClient::ProcessWelcomeMsg(this, msg.m_pProtoBufBody);
    m_pProtoBufBody = msg.m_pProtoBufBody;
    msg._vptr_CProtoBufMsgBase = &off_43055B0;
    if ( msg.m_pProtoBufBody == 0 )
      goto LABEL_35;
    goto LABEL_34;
  }
}


// GCSDK::CGCClient::ClearLogonQueueStats  (line 582, @0x0000000003211e50, libserver.so)
void __fastcall GCSDK::CGCClient::ClearLogonQueueStats(GCSDK::CGCClient *const this)
{
  *(this + 334) = -1;
  *(this + 335) = -1;
  *(this + 168) = 0;
  *(this + 169) = 0;
}


// GCSDK::CGCClient::GetLogonQueueEstimatedSecondsRemaining  (line 590, @0x0000000003211e80, libserver.so)  // inlines: LJobTimeCur
int __fastcall GCSDK::CGCClient::GetLogonQueueEstimatedSecondsRemaining(const GCSDK::CGCClient *const this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(this + 169);
  if ( v1 != 0 && (v2 = v1 - GCSDK::CJobTime::sm_lTimeCur) >= 0 )
    return v2 / 1000000;
  else
    return -1;
}


// GCSDK::CGCClient::GetLogonQueueApproxWaitSeconds  (line 600, @0x0000000003211ed0, libserver.so)  // inlines: LJobTimeCur
int __fastcall GCSDK::CGCClient::GetLogonQueueApproxWaitSeconds(const GCSDK::CGCClient *const this)
{
  __int64 v1; // rdx

  v1 = *(this + 168);
  if ( v1 != 0 && (GCSDK::CJobTime::sm_lTimeCur - v1) >= 0 )
    return (GCSDK::CJobTime::sm_lTimeCur - v1) / 1000000;
  else
    return -1;
}


// GCSDK::CGCClient::SetSessionNeed  (line 610, @0x0000000003213850, libserver.so)
// calls: GCSDK::CGCClient::ThinkConnection
// callers: CDOTAGCServerSystem::SetSessionNeed
void __fastcall GCSDK::CGCClient::SetSessionNeed(GCSDK::CGCClient *const this, uint32 nSessionNeed, bool bWantSession)
{
  int v3; // eax

  v3 = *(this + 330);
  *(this + 329) = nSessionNeed;
  *(this + 1324) = bWantSession;
  if ( !bWantSession && v3 == -1 )
  {
    *(this + 330) = nSessionNeed;
  }
  else if ( nSessionNeed != v3 )
  {
    GCSDK::CGCClient::ThinkConnection(this);
  }
}


// GCSDK::CGCClient::SetGCSecretKey  (line 631, @0x0000000003211f20, libserver.so)
// calls: CUtlString::Set
// callers: CGCClientSystem::SetupGC
void __fastcall GCSDK::CGCClient::SetGCSecretKey(GCSDK::CGCClient *const this, const char *pszGCSecretKey)
{
  CUtlString::Set(this + 159, pszGCSecretKey);
}


// GCSDK::CGCClient::SendHello  (line 636, @0x0000000003212e60, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSOCacheHaveVersion>::TypeHandler>, AllocProto, BSendMessage, CProtoBufGCClientSendHandler, CProtoBufMsg, CVProfScope, Element, FirstInorder, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsEmpty, IsEnabled, Key, LJobTimeCur, LeftChild, Lock, New, NextInorder, String, Unlock, add_socache_have_versions, assign, length, mutable_soid, operator[], set_cached_file_version, set_client_language, set_client_launcher, set_client_session_need, set_engine, set_has_cached_file_version, set_has_client_language, set_has_client_launcher, set_has_client_session_need, set_has_engine, set_has_secret_key, set_has_service_id, set_has_soid, set_has_version, set_secret_key, set_service_id, set_version, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgClientHello::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope (28 total)
// callers: CDOTAGCServerSystem::ShouldHibernate, GCSDK::CGCClient::ThinkConnection, GCSDK::CGCClient::DispatchPacket
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Failed to send Hello message to the GC.\n"
// globals: GCSDK::CProtoBufMsg<CMsgClientHello>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool, LOG_GCCLIENT
void __fastcall GCSDK::CGCClient::SendHello(GCSDK::CGCClient *const this)
{
  GCSDK::MsgType_t v1; // esi
  int m_enabled; // r11d
  bool v3; // r13
  GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello> *v4; // rbx
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r14d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  google::protobuf::Message *m_pProtoBufBody; // rax
  int v11; // edx
  CMsgClientHello *v12; // rax
  int v13; // edx
  CMsgClientHello *v14; // rax
  int v15; // edx
  CMsgClientHello *v16; // rax
  int v17; // edx
  CMsgClientHello *v18; // rax
  _BYTE *v19; // rax
  const char *v20; // rax
  CMsgClientHello *v21; // rbx
  const char *v22; // r12
  size_t v23; // rax
  unsigned __int16 v24; // dx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int16 i; // si
  __int64 v28; // rax
  __int64 v29; // r13
  int v30; // r12d
  _QWORD *v31; // rcx
  GCSDK::SOID_t::ID_t v32; // rax
  void *v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdx
  CMsgSOIDOwner *v36; // rsi
  int v37; // edx
  int v38; // eax
  CMsgClientHello *v39; // rbx
  __int64 v40; // r14
  int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rdx
  CMsgSOIDOwner *v44; // rbx
  unsigned __int16 idx; // [rsp+1Eh] [rbp-92h]
  __int64 v46; // [rsp+28h] [rbp-88h]
  __int64 v48; // [rsp+38h] [rbp-78h]
  GCSDK::SOID_t owner; // [rsp+40h] [rbp-70h] BYREF
  GCSDK::CProtoBufMsg<CMsgClientHello> msgHello; // [rsp+50h] [rbp-60h] BYREF

  v1 = 4007 - (*(this + 1312) == 0);
  *(this + 160) = GCSDK::CJobTime::sm_lTimeCur;
  *(this + 330) = *(this + 329);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgHello, v1);
  msgHello._vptr_CProtoBufMsgBase = off_47CFA90;
  msgHello.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgClientHello>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgClientHello>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgClientHello::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgClientHello::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0310;
      GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgClientHello>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool);
  msgHello.m_pProtoBufBody = m_pProtoBufBody;
  if ( v3 )
  {
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    m_pProtoBufBody = msgHello.m_pProtoBufBody;
  }
  v11 = *(this + 326);
  *(m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 12) = v11;
  v12 = msgHello.m_pProtoBufBody;
  v13 = *(this + 329);
  *(msgHello.m_pProtoBufBody + 4) |= 4u;
  *(v12 + 13) = v13;
  v14 = msgHello.m_pProtoBufBody;
  v15 = *(this + 332);
  *(msgHello.m_pProtoBufBody + 4) |= 8u;
  *(v14 + 16) = v15;
  v16 = msgHello.m_pProtoBufBody;
  v17 = *(this + 333);
  *(msgHello.m_pProtoBufBody + 4) |= 0x20u;
  *(v16 + 17) = v17;
  v18 = msgHello.m_pProtoBufBody;
  *(msgHello.m_pProtoBufBody + 4) |= 0x40u;
  *(v18 + 18) = 1;
  v19 = *(this + 159);
  if ( v19 != 0 && *v19 != 0 )
  {
    v20 = CUtlString::Get(this + 159);
    v21 = msgHello.m_pProtoBufBody;
    v22 = v20;
    *(msgHello.m_pProtoBufBody + 4) |= 0x10u;
    v23 = strlen(v20);
    std::string::assign(*(v21 + 7), v22, v23);
  }
  v24 = *(this + 596);
  if ( v24 != 0xFFFF )
  {
    v25 = *(this + 147);
    v26 = v24;
    if ( *(v25 + 32LL * v24) == 0xFFFF )
    {
      idx = *(this + 596);
    }
    else
    {
      for ( i = *(v25 + 32LL * v24); ; i = *(v25 + 32LL * i) )
      {
        v26 = i;
        if ( *(v25 + 32LL * i) == 0xFFFF )
          break;
      }
      idx = i;
    }
    while ( 1 )
    {
      v28 = 32 * v26;
      v29 = 0;
      v30 = 0;
      v31 = (v28 + v25);
      v46 = v28;
      v32 = v31[1];
      *&owner.m_type = v31[2];
      owner.m_id = v32;
      v48 = v31[3];
      if ( *(v48 + 8) > 0 )
        break;
LABEL_37:
      idx = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
              (this + 1168),
              idx);
      if ( idx == 0xFFFF )
        goto LABEL_31;
      v25 = *(this + 147);
      v26 = idx;
    }
    while ( 1 )
    {
      v39 = msgHello.m_pProtoBufBody;
      v40 = *(v48 + 16) + v29;
      v41 = *(msgHello.m_pProtoBufBody + 9);
      v42 = *(msgHello.m_pProtoBufBody + 8);
      if ( v42 >= v41 )
        break;
      v43 = *(msgHello.m_pProtoBufBody + 3);
      *(msgHello.m_pProtoBufBody + 8) = v42 + 1;
      v33 = *(v43 + 8 * v42);
      v36 = *(v33 + 3);
      *(v33 + 4) |= 1u;
      if ( v36 == 0 )
        goto LABEL_30;
LABEL_23:
      GCSDK::SOID_t::ToMsgSOIDOwner(&owner, v36);
      v37 = *(v33 + 4);
      *(v33 + 4) = *(v40 + 8);
      *(v33 + 4) = v37 | 2;
      if ( *v40 != 0 )
      {
        *(v33 + 10) = *v40;
        *(v33 + 4) = v37 | 6;
      }
      v38 = **(*(this + 147) + v46 + 24);
      if ( v38 != 0 )
      {
        *(v33 + 4) |= 8u;
        *(v33 + 11) = v38;
      }
      ++v30;
      v29 += 16;
      if ( *(v48 + 8) <= v30 )
        goto LABEL_37;
    }
    if ( v41 == *(msgHello.m_pProtoBufBody + 10) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msgHello.m_pProtoBufBody + 1, v41 + 1);
    v33 = operator new(0x30u);
    CMsgSOCacheHaveVersion::CMsgSOCacheHaveVersion(v33);
    v34 = *(v39 + 8);
    v35 = *(v39 + 3);
    ++*(v39 + 9);
    *(v39 + 8) = v34 + 1;
    *(v35 + 8 * v34) = v33;
    v36 = *(v33 + 3);
    *(v33 + 4) |= 1u;
    if ( v36 != 0 )
      goto LABEL_23;
LABEL_30:
    v44 = operator new(0x28u);
    CMsgSOIDOwner::CMsgSOIDOwner(v44);
    *(v33 + 3) = v44;
    v36 = v44;
    goto LABEL_23;
  }
LABEL_31:
  owner.m_id = &off_47CFA30;
  *&owner.m_type = this;
  if ( !GCSDK::CProtoBufMsgBase::BAsyncSend(&msgHello, &owner) && LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
    LoggingSystem_Log(LOG_GCCLIENT, 2, "Failed to send Hello message to the GC.\n");
  msgHello._vptr_CProtoBufMsgBase = off_47CFA90;
  if ( msgHello.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool,
      msgHello.m_pProtoBufBody);
    msgHello.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgHello);
}


// GCSDK::CGCClient::SetSimulateGCConnectionFailure  (line 686, @0x0000000003211f40, libserver.so)  // inlines: LJobTimeCur
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: dev_simulate_gcdown, CGCClientSystem::SetupGC
// strings: "Simulated GC communications failure is not active.\n", "Simulated GC communications failure is active.\n"
// globals: LOG_GCCLIENT
void __fastcall GCSDK::CGCClient::SetSimulateGCConnectionFailure(GCSDK::CGCClient *const this, bool bForcedFailure)
{
  *(this + 1313) = bForcedFailure;
  if ( bForcedFailure )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
    {
      LoggingSystem_Log(LOG_GCCLIENT, 2, "Simulated GC communications failure is active.\n");
      if ( *(this + 327) == 4 )
        goto LABEL_5;
    }
    else if ( *(this + 327) == 4 )
    {
LABEL_5:
      *(this + 161) = GCSDK::CJobTime::sm_lTimeCur;
      return;
    }
    *(this + 327) = 2;
    goto LABEL_5;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 1) != 0 )
    LoggingSystem_Log(LOG_GCCLIENT, 1, "Simulated GC communications failure is not active.\n");
}


// GCSDK::CGCClient::ProcessWelcomeMsg  (line 707, @0x0000000003215dc0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, CopyConstruct<GCSDK::SOID_t>, Element, First, FirstInorder, Get, Get<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscribed>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscriptionCheck>::TypeHandler>, GrowMemory, IsIdxValid, IsValidIndex, LeftChild, Next, NextInorder, Purge, RemoveAll, ResetDbgInfo, SetLeftChild, SetRightChild, operator==, operator[], outofdate_subscribed_caches, owner_soid, uptodate_subscribed_caches, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: LoggingSystem_IsChannelEnabled, GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg, GCSDK::SOID_t::SOID_t, CUtlRBTree<GCSDK::SOID_t, short unsigned int, bool (*)(const GCSDK::SOID_t&, const GCSDK::SOID_t&), CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<GCSDK::SOID_t, short unsigned int, bool (*)(const GCSDK::SOID_t&, const GCSDK::SOID_t&), CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t, short unsigned int>, short unsigned int> >::Insert, GCSDK::SOIDRender_t::SOIDRender_t, LoggingSystem_Log, GCSDK::CGCClient::ProcessSOCacheSubscribedMsg, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, GCSDK::CGCClient::NotifySOCacheUnsubscribed, CUtlMemory<GCSDK::SOID_t, int>::Purge, CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t, short unsigned int>, short unsigned int>::Purge (16 total)
// callers: GCSDK::CGCClient::DispatchPacket
// strings: "Welcome message contained %s twice\n"
// globals: CDefOps<GCSDK::SOID_t>::LessFunc(GCSDK::SOID_t const&,GCSDK::SOID_t const&), LOG_GCCLIENT
void __fastcall GCSDK::CGCClient::ProcessWelcomeMsg(GCSDK::CGCClient *const this, const CMsgClientWelcome *const msg)
{
  int v4; // r10d
  __int64 v5; // r12
  const CMsgSOIDOwner *options; // rsi
  __int64 v7; // r12
  const CMsgSOIDOwner *v8; // rsi
  unsigned __int16 v9; // cx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int16 Inorder; // bx
  __int64 v13; // rdx
  __int64 m_id_low; // r13
  int m_id; // eax
  __int64 v16; // r13
  bool v17; // zf
  GCSDK::SOID_t *v18; // r13
  __int64 v19; // rbx
  int v20; // r12d
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  GCSDK::SOID_t subscribedID; // [rsp+10h] [rbp-120h] BYREF
  GCSDK::SOID_t owner; // [rsp+20h] [rbp-110h] BYREF
  int v27; // [rsp+30h] [rbp-100h]
  int v28; // [rsp+34h] [rbp-FCh]
  CUtlRBTree<GCSDK::SOID_t,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&),CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,short unsigned int>,short unsigned int> > treeSubscribedCaches; // [rsp+40h] [rbp-F0h] BYREF
  GCSDK::SOIDRender_t v30; // [rsp+70h] [rbp-C0h] BYREF
  unsigned __int64 v31; // [rsp+F8h] [rbp-38h]

  treeSubscribedCaches.m_Root = -1;
  v31 = __readfsqword(0x28u);
  v4 = *(msg + 16);
  treeSubscribedCaches.m_LessFunc = CDefOps<GCSDK::SOID_t>::LessFunc;
  treeSubscribedCaches.m_Elements.m_pMemory = 0;
  treeSubscribedCaches.m_Elements.m_nAllocationCount = 0;
  treeSubscribedCaches.m_NumElements = 0;
  treeSubscribedCaches.m_Elements.m_nGrowSize = 0;
  treeSubscribedCaches.m_FirstFree = -1;
  treeSubscribedCaches.m_LastAlloc.index = -1;
  treeSubscribedCaches.m_pElements = 0;
  if ( v4 > 0 )
  {
    v5 = 0;
    do
    {
      options = *(*(*(msg + 7) + 8 * v5) + 32LL);
      if ( options == 0 )
        options = CMsgSOCacheSubscriptionCheck::default_instance_->options_;
      GCSDK::SOID_t::SOID_t(&owner, options);
      if ( CUtlRBTree<GCSDK::SOID_t,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&),CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,unsigned short>,unsigned short>>::Find(
             &treeSubscribedCaches,
             &owner) == 0xFFFF )
      {
        CUtlRBTree<GCSDK::SOID_t,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&),CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,unsigned short>,unsigned short>>::Insert(
          &treeSubscribedCaches,
          &owner,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
      {
        GCSDK::SOIDRender_t::SOIDRender_t(&v30, owner);
        LoggingSystem_Log(LOG_GCCLIENT, 2, "Welcome message contained %s twice\n", v30.m_buf);
      }
      GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg(this, *(*(msg + 7) + 8 * v5++));
    }
    while ( *(msg + 16) > v5 );
  }
  if ( *(msg + 10) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(*(*(msg + 4) + 8 * v7) + 56LL);
      if ( v8 == 0 )
        v8 = *&CMsgSOCacheSubscribed::default_instance_->oneof_decl_count_;
      GCSDK::SOID_t::SOID_t(&owner, v8);
      if ( CUtlRBTree<GCSDK::SOID_t,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&),CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,unsigned short>,unsigned short>>::Find(
             &treeSubscribedCaches,
             &owner) == 0xFFFF )
      {
        CUtlRBTree<GCSDK::SOID_t,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&),CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,unsigned short>,unsigned short>>::Insert(
          &treeSubscribedCaches,
          &owner,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
      {
        GCSDK::SOIDRender_t::SOIDRender_t(&v30, owner);
        LoggingSystem_Log(LOG_GCCLIENT, 2, "Welcome message contained %s twice\n", v30.m_buf);
      }
      GCSDK::CGCClient::ProcessSOCacheSubscribedMsg(this, *(*(msg + 4) + 8 * v7++));
    }
    while ( *(msg + 10) > v7 );
  }
  v9 = *(this + 576);
  LODWORD(owner.m_id) = 0;
  *&owner.m_type = 0;
  v27 = 0;
  v28 = 0;
  if ( v9 != 0xFFFF )
  {
    v10 = *(this + 142);
    v11 = v9;
    Inorder = *(v10 + 32LL * v9);
    if ( Inorder == 0xFFFF )
    {
      Inorder = v9;
    }
    else
    {
      while ( 1 )
      {
        v11 = Inorder;
        if ( *(v10 + 32LL * Inorder) == 0xFFFF )
          break;
        Inorder = *(v10 + 32LL * Inorder);
      }
    }
    while ( 1 )
    {
      subscribedID.m_id = (*(**(v10 + 32 * v11 + 24) + 16LL))(*(v10 + 32 * v11 + 24));
      *&subscribedID.m_type = v13;
      if ( CUtlRBTree<GCSDK::SOID_t,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&),CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,unsigned short>,unsigned short>>::Find(
             &treeSubscribedCaches,
             &subscribedID) == 0xFFFF )
      {
        m_id_low = SLODWORD(owner.m_id);
        m_id = owner.m_id;
        if ( LODWORD(owner.m_id) == v27 )
        {
          CUtlMemory<GCSDK::SOID_t,int>::Grow(&owner.m_type, 1);
          m_id = owner.m_id;
        }
        v16 = 16 * m_id_low;
        v17 = *&owner.m_type + v16 == 0;
        v18 = (*&owner.m_type + v16);
        LODWORD(owner.m_id) = m_id + 1;
        if ( !v17 )
          *v18 = subscribedID;
      }
      Inorder = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                  (this + 1128),
                  Inorder);
      if ( Inorder == 0xFFFF )
        break;
      v10 = *(this + 142);
      v11 = Inorder;
    }
    if ( SLODWORD(owner.m_id) > 0 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        GCSDK::CGCClient::NotifySOCacheUnsubscribed(this, *(*&owner.m_type + v19));
        ++v20;
        v19 += 16;
      }
      while ( SLODWORD(owner.m_id) > v20 );
    }
  }
  LODWORD(owner.m_id) = 0;
  if ( (v28 & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::SOID_t,int>::Purge(&owner.m_type);
    if ( (v28 & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::SOID_t,int>::Purge(&owner.m_type);
  }
  index = treeSubscribedCaches.m_LastAlloc.index;
  if ( treeSubscribedCaches.m_LastAlloc.index != 0xFFFF )
  {
    m_nAllocationCount = treeSubscribedCaches.m_Elements.m_nAllocationCount;
    v23 = 0;
    v24 = 0;
    if ( treeSubscribedCaches.m_Elements.m_nAllocationCount > 0 )
    {
      do
      {
        if ( v24 < m_nAllocationCount && v24 <= index && treeSubscribedCaches.m_Elements.m_pMemory[v23].m_Left != v24 )
        {
          treeSubscribedCaches.m_Elements.m_pMemory[v23].m_Right = treeSubscribedCaches.m_FirstFree;
          treeSubscribedCaches.m_Elements.m_pMemory[v23].m_Left = v24;
          index = treeSubscribedCaches.m_LastAlloc.index;
          treeSubscribedCaches.m_FirstFree = v24;
        }
        if ( v24 == index )
          break;
        m_nAllocationCount = treeSubscribedCaches.m_Elements.m_nAllocationCount;
        if ( (v24 + 1) >= treeSubscribedCaches.m_Elements.m_nAllocationCount )
          break;
        ++v24;
        ++v23;
      }
      while ( v24 != 0xFFFF );
    }
    treeSubscribedCaches.m_Root = -1;
    treeSubscribedCaches.m_NumElements = 0;
  }
  treeSubscribedCaches.m_FirstFree = -1;
  if ( (treeSubscribedCaches.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,unsigned short>,unsigned short>::Purge(&treeSubscribedCaches.m_Elements);
    treeSubscribedCaches.m_LastAlloc.index = -1;
    if ( (treeSubscribedCaches.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t,unsigned short>,unsigned short>::Purge(&treeSubscribedCaches.m_Elements);
  }
}


// GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg  (line 752, @0x00000000032158a0, libserver.so)  // inlines: AllocProto, BSendMessage, CProtoBufGCClientSendHandler, CProtoBufMsg, CVProfScope, Element, Find, FindSOCache, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsEnabled, LeftChild, Lock, RightChild, Unlock, mutable_owner_soid, operator(), operator[], owner_soid, set_has_owner_soid, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::PartialHandleSubscription, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgSOCacheSubscriptionRefresh::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock (23 total)
// callers: GCSDK::CGCClient::ProcessWelcomeMsg
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool
void __fastcall GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg(
        GCSDK::CGCClient *const this,
        const CMsgSOCacheSubscriptionCheck *const msg)
{
  const CMsgSOIDOwner *options; // rsi
  const CMsgSOIDOwner *v5; // rsi
  const uint32 *pServiceList; // r14
  uint32 nServiceCount; // r15d
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  bool v11; // zf
  int m_enabled; // eax
  bool v13; // r15
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *v14; // r12
  const google::protobuf::Descriptor *v15; // rax
  uint32 Int32; // r14d
  const google::protobuf::Descriptor *v17; // rax
  uint32 v18; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v19; // rax
  google::protobuf::Message *m_pProtoBufBody; // r12
  CMsgSOIDOwner *v21; // rsi
  __int64 v22; // rdi
  CMsgSOIDOwner *v23; // r15
  uint64 nCacheVersion; // [rsp+28h] [rbp-98h]
  uint32 nServiceID; // [rsp+34h] [rbp-8Ch]
  uint64 nSyncID; // [rsp+38h] [rbp-88h]
  GCSDK::SOID_t owner; // [rsp+40h] [rbp-80h] BYREF
  GCSDK::CProtoBufMsgBase::IProtoBufSendHandler sender; // [rsp+50h] [rbp-70h] BYREF
  GCSDK::CGCClient *v29; // [rsp+58h] [rbp-68h]
  GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> msg_response; // [rsp+60h] [rbp-60h] BYREF
  GCSDK::SOID_t v31; // 0:rsi.8,8:rdx.8

  if ( (*(msg + 16) & 2) != 0 )
  {
    options = *(msg + 4);
    if ( options == 0 )
      options = CMsgSOCacheSubscriptionCheck::default_instance_->options_;
    GCSDK::SOID_t::SOID_t(&owner, options);
    v5 = *(msg + 4);
    pServiceList = *(msg + 5);
    nServiceCount = *(msg + 12);
    if ( v5 == 0 )
      v5 = CMsgSOCacheSubscriptionCheck::default_instance_->options_;
    nCacheVersion = *(msg + 3);
    nServiceID = *(msg + 16);
    nSyncID = *(msg + 7);
    GCSDK::SOID_t::SOID_t(&msg_response, v5);
    if ( GCSDK::CGCClient::PartialHandleSubscription(
           this,
           *&msg_response._vptr_CProtoBufMsgBase,
           nCacheVersion,
           nServiceID,
           nSyncID,
           nServiceCount,
           pServiceList,
           0) != 0 )
    {
      v8 = *(this + 576);
      *&msg_response._vptr_CProtoBufMsgBase = owner;
      if ( v8 == 0xFFFF )
        goto LABEL_14;
      v9 = *(this + 142);
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = 32 * v8;
          if ( (*(this + 141))(&msg_response, v9 + v10 + 8) == 0 )
            break;
          v9 = *(this + 142);
          v8 = *(v9 + v10);
          if ( v8 == 0xFFFF )
            goto LABEL_14;
        }
        v11 = (*(this + 141))(*(this + 142) + v10 + 8, &msg_response) == 0;
        v9 = *(this + 142);
        if ( v11 )
          break;
        v8 = *(v9 + v10 + 2);
        if ( v8 == 0xFFFF )
          goto LABEL_14;
      }
      v22 = *(v9 + v10 + 24);
      if ( v22 != 0 && *(v22 + 56) != 0 && *(v22 + 8) == *(msg + 3) )
      {
        v31.m_id = (*(*v22 + 16LL))(v22);
        GCSDK::CGCClient::NotifyResubscribedUpToDate(this, v31);
      }
      else
      {
LABEL_14:
        GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg_response, 0x1Cu);
        msg_response.m_pProtoBufBody = 0;
        msg_response._vptr_CProtoBufMsgBase = &off_4304FD0;
        m_enabled = g_VProfCurrentProfile.m_enabled;
        v13 = m_enabled != 0;
        if ( m_enabled != 0 )
          CVProfile::EnterScope(
            &g_VProfCurrentProfile,
            "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
            0,
            "Networking",
            0,
            4);
        if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr )
        {
          pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
          if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr )
          {
            v14 = operator new(0x28u);
            v15 = CMsgSOCacheSubscriptionRefresh::descriptor();
            Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                      (v15->options_ + 8),
                      msgpool_hard_limit.number_,
                      msgpool_hard_limit.default_value_);
            v17 = CMsgSOCacheSubscriptionRefresh::descriptor();
            v18 = google::protobuf::internal::ExtensionSet::GetInt32(
                    (v17->options_ + 8),
                    msgpool_soft_limit.number_,
                    msgpool_soft_limit.default_value_);
            GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v14, v18, Int32);
            v14->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306450;
            GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool = v14;
            v19 = GCSDK::GProtoBufMsgMemoryPoolMgr();
            GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v19, v14);
            GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr = 1;
          }
          pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
        }
        m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool);
        msg_response.m_pProtoBufBody = m_pProtoBufBody;
        if ( v13 )
        {
          CVProfile::ExitScope(&g_VProfCurrentProfile);
          m_pProtoBufBody = msg_response.m_pProtoBufBody;
        }
        v21 = *(m_pProtoBufBody + 3);
        *(m_pProtoBufBody + 4) |= 1u;
        if ( v21 == 0 )
        {
          v23 = operator new(0x28u);
          CMsgSOIDOwner::CMsgSOIDOwner(v23);
          *(m_pProtoBufBody + 3) = v23;
          v21 = v23;
        }
        GCSDK::SOID_t::ToMsgSOIDOwner(&owner, v21);
        v29 = this;
        sender._vptr_IProtoBufSendHandler = &off_47CFA30;
        GCSDK::CProtoBufMsgBase::BAsyncSend(&msg_response, &sender);
        msg_response._vptr_CProtoBufMsgBase = &off_4304FD0;
        if ( msg_response.m_pProtoBufBody != 0 )
        {
          GCSDK::CProtoBufMsgMemoryPoolBase::Free(
            GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool,
            msg_response.m_pProtoBufBody);
          msg_response.m_pProtoBufBody = 0;
        }
        GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg_response);
      }
    }
  }
}


// GCSDK::CGCClient::ProcessSOCacheSubscribedMsg  (line 786, @0x0000000003215cb0, libserver.so)  // inlines: owner_soid
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::PartialHandleSubscription, GCSDK::CGCClient::FindOrAddSOCache, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
// callers: GCSDK::CGCClient::ProcessWelcomeMsg, GCSDK::CGCSOCacheSubscribedJob::BYieldingRunJobFromProtoMsg
void __fastcall GCSDK::CGCClient::ProcessSOCacheSubscribedMsg(
        GCSDK::CGCClient *const this,
        const CMsgSOCacheSubscribed *const msg)
{
  const CMsgSOIDOwner *v3; // rsi
  const CMsgSOIDOwner *v5; // rsi
  const uint32 *pServiceList; // r14
  uint32 nServiceCount; // r13d
  uint64 v8; // r15
  GCSDK::CGCClientSharedObjectCache *v9; // rax
  uint32 nServiceID; // [rsp+24h] [rbp-5Ch]
  uint64 nCacheVersion; // [rsp+28h] [rbp-58h]
  GCSDK::SOID_t owner; // [rsp+30h] [rbp-50h] BYREF
  GCSDK::SOID_t soid; // [rsp+40h] [rbp-40h] BYREF

  if ( (*(msg + 16) & 4) != 0 )
  {
    v3 = *(msg + 7);
    if ( v3 == 0 )
      v3 = *&CMsgSOCacheSubscribed::default_instance_->oneof_decl_count_;
    GCSDK::SOID_t::SOID_t(&owner, v3);
    v5 = *(msg + 7);
    pServiceList = *(msg + 8);
    nServiceCount = *(msg + 18);
    v8 = *(msg + 10);
    nCacheVersion = *(msg + 6);
    if ( v5 == 0 )
      v5 = *&CMsgSOCacheSubscribed::default_instance_->oneof_decl_count_;
    nServiceID = *(msg + 22);
    GCSDK::SOID_t::SOID_t(&soid, v5);
    if ( GCSDK::CGCClient::PartialHandleSubscription(
           this,
           soid,
           nCacheVersion,
           nServiceID,
           v8,
           nServiceCount,
           pServiceList,
           msg) != 0 )
    {
      v9 = GCSDK::CGCClient::FindOrAddSOCache(this, owner);
      if ( v9 != 0 )
        GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg(v9, this, msg);
    }
  }
}


// GCSDK::CGCClient::ProcessSOCacheSubscribedUpToDateMsg  (line 814, @0x0000000003217250, libserver.so)  // inlines: owner_soid
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::PartialHandleSubscription
// callers: GCSDK::CGCSOCacheSubscribedJobUpToDate::BYieldingRunJobFromProtoMsg
void __fastcall GCSDK::CGCClient::ProcessSOCacheSubscribedUpToDateMsg(
        GCSDK::CGCClient *const this,
        const CMsgSOCacheSubscribedUpToDate *const msg)
{
  const CMsgSOIDOwner *options; // rsi
  const CMsgSOIDOwner *v5; // rsi
  const uint32 *pServiceList; // r14
  uint32 nServiceCount; // r13d
  uint64 v8; // r15
  uint32 nServiceID; // [rsp+24h] [rbp-5Ch]
  uint64 nCacheVersion; // [rsp+28h] [rbp-58h]
  GCSDK::SOID_t owner; // [rsp+30h] [rbp-50h] BYREF
  GCSDK::SOID_t soid; // [rsp+40h] [rbp-40h] BYREF

  if ( (*(msg + 16) & 2) != 0 )
  {
    options = *(msg + 4);
    if ( options == 0 )
      options = CMsgSOCacheSubscribedUpToDate::default_instance_->options_;
    GCSDK::SOID_t::SOID_t(&owner, options);
    v5 = *(msg + 4);
    pServiceList = *(msg + 5);
    nServiceCount = *(msg + 12);
    v8 = *(msg + 7);
    nCacheVersion = *(msg + 3);
    if ( v5 == 0 )
      v5 = CMsgSOCacheSubscribedUpToDate::default_instance_->options_;
    nServiceID = *(msg + 16);
    GCSDK::SOID_t::SOID_t(&soid, v5);
    GCSDK::CGCClient::PartialHandleSubscription(
      this,
      soid,
      nCacheVersion,
      nServiceID,
      v8,
      nServiceCount,
      pServiceList,
      0);
  }
}


// GCSDK::CGCClient::MarkAsSuspended  (line 832, @0x0000000003212010, libserver.so)
void __fastcall GCSDK::CGCClient::MarkAsSuspended(GCSDK::CGCClient *const this)
{
  *(this + 327) = 5;
}


// GCSDK::CGCClient::BInit  (line 845, @0x0000000003216fe0, libserver.so)  // inlines: Register, Unregister
// calls: GetCPUInformation, GCSDK::CJobMgr::SetThreadPoolSize, EGCSystemMsg_descriptor, GCSDK::MsgRegistrationFromEnumDescriptor, SteamAPI_RegisterCallback, GCSDK::CGCClient::UpdateLogonState, GCSDK::CGCClient::OnGCMessageAvailable, GCSDK::CGCClient::ThinkConnection, SteamAPI_UnregisterCallback
// callers: CGCClientSystem::InitGC
// strings: "SteamGameCoordinator001", "SteamUser019", "SteamGameServer012"
// globals: GCSDK::CGCClient::OnGCMessageAvailable(GCMessageAvailable_t *), GCSDK::CGCClient::OnSteamServersDisconnected(SteamServersDisconnected_t *), GCSDK::CGCClient::OnSteamServerConnectFailure(SteamServerConnectFailure_t *), GCSDK::CGCClient::OnSteamServersConnected(SteamServersConnected_t *)
bool __fastcall GCSDK::CGCClient::BInit(
        GCSDK::CGCClient *const this,
        uint32 unVersion,
        ISteamClient *pSteamClient,
        HSteamUser hSteamUser,
        HSteamPipe hSteamPipe)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // r8
  char *v14; // r12
  __int64 CPUInformation; // rax
  const google::protobuf::EnumDescriptor *v16; // rax
  __int64 v18; // rax
  void *pGenericInterface; // [rsp+8h] [rbp-38h]

  if ( pSteamClient == 0 )
    return 0;
  v10 = (*(*pSteamClient + 96LL))(pSteamClient, hSteamUser, hSteamPipe, "SteamGameCoordinator001");
  if ( v10 == 0 )
    return 0;
  pGenericInterface = v10;
  v11 = *pSteamClient;
  if ( *(this + 1312) != 0 )
  {
    v18 = (*(v11 + 48))(pSteamClient, hSteamUser, hSteamPipe, "SteamGameServer012");
    v13 = pGenericInterface;
    *(this + 2) = v18;
    if ( v18 != 0 )
      goto LABEL_5;
    return 0;
  }
  v12 = (*(v11 + 40))(pSteamClient, hSteamUser, hSteamPipe, "SteamUser019");
  v13 = pGenericInterface;
  *(this + 1) = v12;
  if ( v12 == 0 )
    return 0;
LABEL_5:
  *(this + 3) = v13;
  v14 = this + 1360;
  *(this + 326) = unVersion;
  CPUInformation = GetCPUInformation();
  GCSDK::CJobMgr::SetThreadPoolSize((this + 48), *(CPUInformation + 4) - 1);
  v16 = EGCSystemMsg_descriptor();
  GCSDK::MsgRegistrationFromEnumDescriptor(v16, 1);
  if ( (*(this + 1368) & 1) != 0 )
  {
    v14 = this + 1360;
    SteamAPI_UnregisterCallback(this + 1360);
  }
  *(this + 172) = this;
  *(this + 173) = GCSDK::CGCClient::OnGCMessageAvailable;
  *(this + 174) = 0;
  SteamAPI_RegisterCallback(v14, 1701);
  if ( (*(this + 1408) & 1) != 0 )
    SteamAPI_UnregisterCallback(this + 1400);
  *(this + 177) = this;
  *(this + 178) = GCSDK::CGCClient::OnSteamServersDisconnected;
  *(this + 179) = 0;
  SteamAPI_RegisterCallback(this + 1400, 103);
  if ( (*(this + 1448) & 1) != 0 )
    SteamAPI_UnregisterCallback(this + 1440);
  *(this + 182) = this;
  *(this + 183) = GCSDK::CGCClient::OnSteamServerConnectFailure;
  *(this + 184) = 0;
  SteamAPI_RegisterCallback(this + 1440, 102);
  if ( (*(this + 1488) & 1) != 0 )
    SteamAPI_UnregisterCallback(this + 1480);
  *(this + 188) = GCSDK::CGCClient::OnSteamServersConnected;
  *(this + 187) = this;
  *(this + 189) = 0;
  SteamAPI_RegisterCallback(this + 1480, 101);
  GCSDK::CGCClient::UpdateLogonState(this);
  GCSDK::CGCClient::OnGCMessageAvailable(this, 0);
  GCSDK::CGCClient::ThinkConnection(this);
  return 1;
}


// GCSDK::CGCClient::Uninit  (line 912, @0x0000000003213e10, libserver.so)  // inlines: Clear, FirstInorder, IsIdxValid, IsValidIndex, LeftChild, NextInorder, RemoveAt, Unregister, operator[]
// calls: SteamAPI_UnregisterCallback, GCSDK::CJobMgr::Shutdown, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAt
// callers: CGCClientSystem::Shutdown, GCSDK::CGCClient::~CGCClient
void __fastcall GCSDK::CGCClient::Uninit(GCSDK::CGCClient *const this)
{
  unsigned __int16 v2; // cx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int16 v5; // cx
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int16 Inorder; // ax
  _BYTE *v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r13
  void (__fastcall *v12)(__int64, __int64, __int64, __int64); // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache*>::Node_t,short unsigned int,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache*>::Node_t,short unsigned int>,short unsigned int> > *v15; // [rsp+0h] [rbp-40h]
  unsigned __int16 i; // [rsp+8h] [rbp-38h]
  unsigned __int16 nNextMapIndex; // [rsp+Eh] [rbp-32h]

  SteamAPI_UnregisterCallback(this + 1360);
  v2 = *(this + 576);
  nNextMapIndex = v2;
  v3 = 0xFFFF;
  if ( v2 != 0xFFFF )
  {
    v4 = *(this + 142);
    v3 = v2;
    v5 = *(v4 + 32LL * v2);
    if ( v5 != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = v5;
        if ( *(v4 + 32LL * v5) == 0xFFFF )
          break;
        v5 = *(v4 + 32LL * v5);
      }
      nNextMapIndex = v5;
    }
  }
  v6 = *(this + 286);
  v15 = (this + 1128);
  while ( 1 )
  {
    i = nNextMapIndex;
    if ( v3 >= v6 )
      break;
    if ( nNextMapIndex > *(this + 579) )
      break;
    if ( nNextMapIndex == 0xFFFF )
      break;
    v7 = *(this + 142) + 32 * v3;
    if ( nNextMapIndex == *v7 )
      break;
    Inorder = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                v15,
                nNextMapIndex);
    v9 = *(v7 + 24);
    nNextMapIndex = Inorder;
    if ( v9 != 0 )
    {
      if ( v9[57] != 0 && *(this + 312) > 0 )
      {
        v10 = 0;
        do
        {
          v11 = *(*(this + 157) + 8 * v10);
          v12 = *(*v11 + 32LL);
          v13 = (*(*v9 + 16LL))(v9);
          v12(v11, v13, v14, 6);
          ++v10;
        }
        while ( *(this + 312) > v10 );
      }
      (*(*v9 + 8LL))(v9);
      CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
        v15,
        i);
      v6 = *(this + 286);
    }
    v3 = nNextMapIndex;
  }
  GCSDK::CJobMgr::Shutdown((this + 48));
  *(this + 3) = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 327) = 4;
  *(this + 160) = 0;
  *(this + 161) = 0;
  *(this + 162) = 0;
  *(this + 326) = 0;
  *(this + 1313) = 0;
  *(this + 329) = 0;
  *(this + 330) = -1;
  *(this + 1324) = 1;
  *(this + 332) = 0;
  *(this + 333) = -1;
}


// GCSDK::CGCClient::ThinkConnection  (line 950, @0x00000000032133b0, libserver.so)  // inlines: LJobTimeCur
// calls: GCSDK::CGCClient::SendHello
// callers: GCSDK::CGCClient::BMainLoop, GCSDK::CGCClient::MessageReplyTimedOut, GCSDK::CGCClient::SetSessionNeed, GCSDK::CGCClient::BInit
void __fastcall GCSDK::CGCClient::ThinkConnection(GCSDK::CGCClient *const this)
{
  int v1; // eax
  __int64 v2; // rsi
  int v3; // edx
  unsigned __int64 v4; // rax

  v1 = *(this + 327);
  if ( v1 < 1 )
    return;
  if ( v1 > 2 )
  {
    if ( v1 != 3 )
      return;
    v2 = 2000000;
    v3 = *(this + 1324) == 0 ? -1 : 0x5A;
    if ( *(this + 330) != *(this + 329) )
      goto LABEL_5;
LABEL_12:
    if ( v3 <= 0 )
      return;
    v2 = 1000000LL * v3;
    goto LABEL_5;
  }
  v2 = 2000000;
  v3 = *(this + 1324) == 0 ? -1 : 0xA;
  if ( *(this + 330) == *(this + 329) )
    goto LABEL_12;
LABEL_5:
  v4 = *(this + 160);
  if ( v4 == 0 )
    goto LABEL_9;
  if ( *(this + 161) >= v4 )
    v4 = *(this + 161);
  if ( v4 + v2 < GCSDK::CJobTime::sm_lTimeCur )
LABEL_9:
    GCSDK::CGCClient::SendHello(this);
}


// GCSDK::CGCClient::FindSOCache  (line 1020, @0x0000000003212020, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CDOTAInventoryManager::SetUpDemoHeroItems, CGCClientSystem::GetSOCache, CPlayerInventory::SOCacheSubscribed, CGCClientSystem::LoadSerializedSOCache
GCSDK::CGCClientSharedObjectCache *__fastcall GCSDK::CGCClient::FindSOCache(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t ID)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  _QWORD v8[8]; // [rsp+0h] [rbp-40h] BYREF

  v8[0] = ID.m_id;
  v3 = *(this + 576);
  v8[1] = *&ID.m_type;
  if ( v3 == 0xFFFF )
    return 0;
  v4 = *(this + 142);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = 32 * v3;
      if ( (*(this + 141))(v8, v4 + v5 + 8) == 0 )
        break;
      v4 = *(this + 142);
      v3 = *(v4 + v5);
      if ( v3 == 0xFFFF )
        return 0;
    }
    v6 = (*(this + 141))(*(this + 142) + v5 + 8, v8) == 0;
    v4 = *(this + 142);
    if ( v6 )
      break;
    v3 = *(v4 + v5 + 2);
    if ( v3 == 0xFFFF )
      return 0;
  }
  return *(v4 + v5 + 24);
}


// GCSDK::CGCClient::FindSOCache  (line 1029, @0x00000000032120d0, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
// callers: CGCClientSystem::GetSOCache
const GCSDK::CGCClientSharedObjectCache *__fastcall GCSDK::CGCClient::FindSOCache(
        const GCSDK::CGCClient *const this,
        GCSDK::SOID_t ID)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  _QWORD v8[8]; // [rsp+0h] [rbp-40h] BYREF

  v8[0] = ID.m_id;
  v3 = *(this + 576);
  v8[1] = *&ID.m_type;
  if ( v3 == 0xFFFF )
    return 0;
  v4 = *(this + 142);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = 32 * v3;
      if ( (*(this + 141))(v8, v4 + v5 + 8) == 0 )
        break;
      v4 = *(this + 142);
      v3 = *(v4 + v5);
      if ( v3 == 0xFFFF )
        return 0;
    }
    v6 = (*(this + 141))(*(this + 142) + v5 + 8, v8) == 0;
    v4 = *(this + 142);
    if ( v6 )
      break;
    v3 = *(v4 + v5 + 2);
    if ( v3 == 0xFFFF )
      return 0;
  }
  return *(v4 + v5 + 24);
}


// GCSDK::CGCClient::FindOrAddSOCache  (line 1038, @0x00000000032143d0, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: operator new, GCSDK::CGCClientSharedObjectCache::CGCClientSharedObjectCache, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, operator delete, _Unwind_Resume
// callers: CGCClientSystem::FindOrAddSOCache, CGCClientSystem::LoadSerializedSOCache, GCSDK::CGCClient::SOCacheCreateMsg, GCSDK::CGCClient::SOCacheUpdateMultipleMsg, GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCClient::ProcessSOCacheSubscribedMsg
GCSDK::CGCClientSharedObjectCache *__fastcall GCSDK::CGCClient::FindOrAddSOCache(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t ID)
{
  __int64 v2; // r15
  GCSDK::SOID_t::ID_t m_id; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  GCSDK::CGCClientSharedObjectCache *v9; // rax
  GCSDK::CGCClientSharedObjectCache *v10; // rbx
  unsigned __int16 v11; // r15
  unsigned __int16 v12; // ax
  char v13; // dl
  __int64 v14; // rax
  bool v15; // r14
  unsigned __int16 v16; // ax
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t pCopyFrom; // [rsp+10h] [rbp-50h] BYREF
  GCSDK::SOID_t v19; // 0:rsi.8,8:rdx.8

  v2 = *&ID.m_type;
  m_id = ID.m_id;
  pCopyFrom.key.m_id = ID.m_id;
  v5 = *(this + 576);
  *&pCopyFrom.key.m_type = *&ID.m_type;
  if ( v5 == 0xFFFF )
  {
LABEL_7:
    v9 = operator new(0x40u);
    v19.m_id = m_id;
    *&v19.m_type = v2;
    v10 = v9;
    GCSDK::CGCClientSharedObjectCache::CGCClientSharedObjectCache(v9, v19);
    *&pCopyFrom.key.m_type = v2;
    v11 = *(this + 576);
    pCopyFrom.key.m_id = m_id;
    pCopyFrom.elem = v10;
    if ( v11 != 0xFFFF )
    {
      while ( 1 )
      {
        v8 = (*(this + 141))(&pCopyFrom, *(this + 142) + 32LL * v11 + 8) == 0;
        v14 = *(this + 142);
        if ( v8 )
        {
          v12 = *(v14 + 32LL * v11 + 2);
          v13 = 0;
          if ( v12 == 0xFFFF )
          {
LABEL_13:
            v15 = v13;
            goto LABEL_14;
          }
        }
        else
        {
          v12 = *(v14 + 32LL * v11);
          v13 = 1;
          if ( v12 == 0xFFFF )
            goto LABEL_13;
        }
        v11 = v12;
      }
    }
    v11 = -1;
    v15 = 0;
LABEL_14:
    v16 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            (this + 1128),
            &pCopyFrom);
    CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      (this + 1128),
      v16,
      v11,
      v15);
    ++*(this + 577);
    return v10;
  }
  else
  {
    v6 = *(this + 142);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = 32 * v5;
        if ( (*(this + 141))(&pCopyFrom, v6 + v7 + 8) == 0 )
          break;
        v6 = *(this + 142);
        v5 = *(v6 + v7);
        if ( v5 == 0xFFFF )
          goto LABEL_7;
      }
      v8 = (*(this + 141))(*(this + 142) + v7 + 8, &pCopyFrom) == 0;
      v6 = *(this + 142);
      if ( v8 )
        return *(v6 + v7 + 24);
      v5 = *(v6 + v7 + 2);
      if ( v5 == 0xFFFF )
        goto LABEL_7;
    }
  }
}


// GCSDK::CGCClient::FindSOCacheByType  (line 1057, @0x0000000003213a50, libserver.so)  // inlines: AddToTail, ConvertToExternalMemory, CopyConstruct<GCSDK::CGCClientSharedObjectCache*>, Element, GrowMemory, IsIdxValid, IsValidIndex, Key, LeftChild, Purge, Purge_FixedGrowable, RemoveAll, operator[]
// calls: CUtlMemory<GCSDK::CGCClientSharedObjectCache*, int>::Grow
bool __fastcall GCSDK::CGCClient::FindSOCacheByType(
        GCSDK::CGCClient *const this,
        uint32 type,
        GCSDK::CGCClient::ClientSOCacheVec_t *const cacheList)
{
  __int64 m_Size; // r14
  GCSDK::CGCClientSharedObjectCache **m_pMemory; // rsi
  GCSDK::CGCClientSharedObjectCache **p_m_FixedMemory; // rbx
  uint32 m_nGrowSize; // eax
  int v9; // eax
  CUtlVectorBase<GCSDK::CGCClientSharedObjectCache*,CUtlMemoryFixedGrowable<GCSDK::CGCClientSharedObjectCache*,1ul,int> >::CAllocator *p_m_Memory; // r15
  __int64 v11; // rbx
  __int64 v12; // r8
  GCSDK::CGCClient::ClientSOCacheVec_t *v13; // r8
  int v15; // eax
  int v16; // ecx
  GCSDK::CGCClientSharedObjectCache **v17; // rax
  GCSDK::CGCClientSharedObjectCache **v18; // rax
  GCSDK::CGCClient::ClientSOCacheVec_t *v19; // [rsp+0h] [rbp-40h]
  GCSDK::CGCClient::ClientSOCacheVec_t *cacheLista; // [rsp+8h] [rbp-38h]
  GCSDK::CGCClient::ClientSOCacheVec_t *cacheListb; // [rsp+8h] [rbp-38h]

  m_Size = 0;
  cacheList->m_Size = 0;
  if ( cacheList->m_Memory.m_nAllocationCount >= 0 )
  {
    m_pMemory = cacheList->m_Memory.m_pMemory;
    p_m_FixedMemory = &cacheList->m_Memory.m_FixedMemory;
    if ( &cacheList->m_Memory.m_FixedMemory != m_pMemory )
    {
      m_nGrowSize = cacheList->m_Memory.m_nGrowSize;
      if ( m_pMemory != 0 && (cacheList->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        cacheLista = cacheList;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        cacheList = cacheLista;
        m_nGrowSize = cacheLista->m_Memory.m_nGrowSize;
        m_Size = cacheLista->m_Size;
      }
      cacheList->m_Memory.m_pMemory = p_m_FixedMemory;
      cacheList->m_Memory.m_nAllocationCount = 1;
      cacheList->m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
    }
  }
  v9 = *(this + 286);
  if ( v9 != 0 )
  {
    p_m_Memory = &cacheList->m_Memory;
    v11 = 0;
    do
    {
      if ( v9 > v11 && v11 <= *(this + 579) )
      {
        v12 = *(this + 142);
        if ( *(v12 + 32LL * v11) != v11 )
        {
          v13 = (32 * v11 + v12);
          if ( v13->m_Memory.m_nAllocationCount == type )
          {
            v15 = m_Size;
            if ( m_Size == cacheList->m_Memory.m_nAllocationCount )
            {
              v19 = cacheList;
              cacheListb = v13;
              CUtlMemory<GCSDK::CGCClientSharedObjectCache *,int>::Grow(p_m_Memory, 1);
              cacheList = v19;
              v13 = cacheListb;
              v15 = v19->m_Size;
            }
            v16 = v15 + 1;
            v17 = cacheList->m_Memory.m_pMemory;
            cacheList->m_Size = v16;
            v18 = &v17[m_Size];
            if ( v18 != 0 )
            {
              *v18 = v13->m_Memory.m_FixedMemory;
              m_Size = cacheList->m_Size;
            }
            else
            {
              m_Size = v16;
            }
            v9 = *(this + 286);
          }
        }
      }
      ++v11;
    }
    while ( v9 > v11 );
  }
  return m_Size > 0;
}


// GCSDK::CGCClient::AddSOCacheListener  (line 1075, @0x0000000003213bc0, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::ISharedObjectListener*>, Element, GrowMemory, HasElement, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CUtlVectorBase<GCSDK::ISharedObjectListener*, CUtlMemory<GCSDK::ISharedObjectListener*, int> >::Find, GCSDK::CGCClientSharedObjectCache::NotifyObjectsCreated, CUtlMemory<GCSDK::ISharedObjectListener*, int>::Grow
// callers: CDOTAGCServerSystem::PostInitGC, CDOTAGCServerSystem::UseLobbyFromClient, CPlayerInventory::RequestInventory
bool __fastcall GCSDK::CGCClient::AddSOCacheListener(
        GCSDK::CGCClient *const this,
        GCSDK::ISharedObjectListener *pListener)
{
  int v3; // edx
  bool result; // al
  int v5; // eax
  __int64 v6; // r12
  int v7; // ebx
  __int64 v8; // rcx
  GCSDK::CGCClientSharedObjectCache *v9; // r14
  GCSDK::ISharedObjectListener *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  GCSDK::ISharedObjectListener **v15; // rax
  void (__fastcall *v16)(GCSDK::ISharedObjectListener *, __int64, __int64, __int64); // [rsp+0h] [rbp-40h]
  GCSDK::ISharedObjectListener *pListenera; // [rsp+8h] [rbp-38h] BYREF

  pListenera = pListener;
  v3 = CUtlVectorBase<GCSDK::ISharedObjectListener *,CUtlMemory<GCSDK::ISharedObjectListener *,int>>::Find(
         this + 52,
         &pListenera);
  result = 0;
  if ( v3 < 0 )
  {
    v5 = *(this + 286);
    v6 = 0;
    v7 = 0;
    if ( v5 != 0 )
    {
      do
      {
        while ( 1 )
        {
          if ( v5 > v7 && v7 <= *(this + 579) )
          {
            v8 = *(this + 142);
            if ( *(v8 + 32LL * v7) != v7 )
            {
              v9 = *(v8 + v6 + 24);
              if ( v9->m_bSubscribed )
                break;
            }
          }
          ++v7;
          v6 += 32;
          if ( v5 <= v7 )
            goto LABEL_10;
        }
        v10 = pListenera;
        v11 = *(v8 + v6 + 24);
        ++v7;
        v6 += 32;
        v16 = *(pListenera->_vptr_ISharedObjectListener + 3);
        v12 = (*(v9->_vptr_CSharedObjectCache + 2))(v11);
        v16(v10, v12, v13, 5);
        GCSDK::CGCClientSharedObjectCache::NotifyObjectsCreated(
          v9,
          v10,
          GCSDK::ESOCacheEvent::eSOCacheEvent_ListenerAdded);
        v5 = *(this + 286);
      }
      while ( v5 > v7 );
    }
LABEL_10:
    v14 = *(this + 312);
    if ( v14 == *(this + 316) )
      CUtlMemory<GCSDK::ISharedObjectListener *,int>::Grow((this + 1256), 1);
    ++*(this + 312);
    v15 = (*(this + 157) + 8 * v14);
    if ( v15 != 0 )
      *v15 = pListenera;
    return 1;
  }
  return result;
}


// GCSDK::CGCClient::RemoveSOCacheListener  (line 1099, @0x0000000003212850, libserver.so)  // inlines: Element, IsIdxValid, IsValidIndex, LeftChild, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CUtlVectorBase<GCSDK::ISharedObjectListener*, CUtlMemory<GCSDK::ISharedObjectListener*, int> >::Find, memmove
// callers: CDOTAGCServerSystem::SOCacheUnsubscribed, CDOTAGCServerSystem::UseLobbyFromClient, CDOTAGCServerSystem::Shutdown, CDOTAGCServerSystem::SOChanged, CPlayerInventory::SOClear
bool __fastcall GCSDK::CGCClient::RemoveSOCacheListener(
        GCSDK::CGCClient *const this,
        GCSDK::ISharedObjectListener *pListener)
{
  int v3; // r14d
  int v4; // edx
  __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // rsi
  _BYTE *v8; // rdi
  GCSDK::ISharedObjectListener *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  char *v14; // rsi
  void (__fastcall *v15)(GCSDK::ISharedObjectListener *, __int64, __int64, __int64); // [rsp+0h] [rbp-40h]
  GCSDK::ISharedObjectListener *pListenera; // [rsp+8h] [rbp-38h] BYREF

  pListenera = pListener;
  v3 = CUtlVectorBase<GCSDK::ISharedObjectListener *,CUtlMemory<GCSDK::ISharedObjectListener *,int>>::Find(
         this + 52,
         &pListenera);
  if ( v3 == -1 )
    return 0;
  v4 = *(this + 286);
  v5 = 0;
  v6 = 0;
  if ( v4 != 0 )
  {
    do
    {
      while ( 1 )
      {
        if ( v6 < v4 && v6 <= *(this + 579) )
        {
          v7 = *(this + 142);
          if ( *(v7 + 32LL * v6) != v6 )
          {
            v8 = *(v7 + v5 + 24);
            if ( v8[57] != 0 )
              break;
          }
        }
        ++v6;
        v5 += 32;
        if ( v4 <= v6 )
          goto LABEL_10;
      }
      v9 = pListenera;
      ++v6;
      v5 += 32;
      v15 = *(pListenera->_vptr_ISharedObjectListener + 4);
      v10 = (*(*v8 + 16LL))(v8);
      v15(v9, v10, v11, 6);
      v4 = *(this + 286);
    }
    while ( v4 > v6 );
  }
LABEL_10:
  v12 = *(this + 312);
  if ( v12 - v3 - 1 > 0 )
  {
    v14 = (*(this + 157) + 8LL * (v3 + 1));
    memmove(v14 - 8, v14, 8LL * (*(this + 312) - v3 - 1));
    v12 = *(this + 312);
  }
  *(this + 312) = v12 - 1;
  return 1;
}


// GCSDK::CGCClient::DispatchSOCreated  (line 1125, @0x0000000003212180, libserver.so)
// callers: CGCClientSystem::LoadSerializedSOCache, GCSDK::CGCClientSharedObjectCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
void __fastcall GCSDK::CGCClient::DispatchSOCreated(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        unsigned int eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  int v8; // ebx
  void (__fastcall ***v9)(_QWORD, GCSDK::SOID_t::ID_t, __int64, const GCSDK::CSharedObject *, _QWORD); // rdi

  m_id = owner.m_id;
  v5 = *&owner.m_type;
  v6 = 0;
  v8 = 0;
  while ( *(this + 312) > v8 )
  {
    ++v8;
    v9 = *(*(this + 157) + v6);
    v6 += 8;
    (**v9)(v9, m_id, v5, pObject, eEvent);
  }
}


// GCSDK::CGCClient::DispatchSOUpdated  (line 1133, @0x0000000003212200, libserver.so)
// callers: GCSDK::CGCClientSharedObjectCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectTypeCache::BUpdateFromMsg, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
void __fastcall GCSDK::CGCClient::DispatchSOUpdated(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        unsigned int eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  int v8; // ebx
  __int64 v9; // rdi

  m_id = owner.m_id;
  v5 = *&owner.m_type;
  v6 = 0;
  v8 = 0;
  while ( *(this + 312) > v8 )
  {
    ++v8;
    v9 = *(*(this + 157) + v6);
    v6 += 8;
    (*(*v9 + 8LL))(v9, m_id, v5, pObject, eEvent);
  }
}


// GCSDK::CGCClient::DispatchSODestroyed  (line 1141, @0x0000000003212280, libserver.so)
// callers: GCSDK::CGCClientSharedObjectTypeCache::BDestroyFromMsg, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
void __fastcall GCSDK::CGCClient::DispatchSODestroyed(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        unsigned int eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  int v8; // ebx
  __int64 v9; // rdi

  m_id = owner.m_id;
  v5 = *&owner.m_type;
  v6 = 0;
  v8 = 0;
  while ( *(this + 312) > v8 )
  {
    ++v8;
    v9 = *(*(this + 157) + v6);
    v6 += 8;
    (*(*v9 + 16LL))(v9, m_id, v5, pObject, eEvent);
  }
}


// GCSDK::CGCClient::DispatchSOCacheSubscribed  (line 1149, @0x0000000003212300, libserver.so)
// callers: GCSDK::CGCClient::NotifyResubscribedUpToDate, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
void __fastcall GCSDK::CGCClient::DispatchSOCacheSubscribed(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t owner,
        unsigned int eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r14
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 v8; // rdi

  m_id = owner.m_id;
  v5 = *&owner.m_type;
  for ( i = 0; *(this + 312) > i; ++i )
  {
    v8 = *(*(this + 157) + 8 * i);
    (*(*v8 + 24LL))(v8, m_id, v5, eEvent);
  }
}


// GCSDK::CGCClient::DispatchSOCacheUnsubscribed  (line 1157, @0x0000000003212370, libserver.so)
// callers: GCSDK::CGCClient::NotifySOCacheUnsubscribed
void __fastcall GCSDK::CGCClient::DispatchSOCacheUnsubscribed(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t owner,
        unsigned int eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r14
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 v8; // rdi

  m_id = owner.m_id;
  v5 = *&owner.m_type;
  for ( i = 0; *(this + 312) > i; ++i )
  {
    v8 = *(*(this + 157) + 8 * i);
    (*(*v8 + 32LL))(v8, m_id, v5, eEvent);
  }
}


// GCSDK::CGCClient::NotifySOCacheUnsubscribed  (line 1168, @0x00000000032146f0, libserver.so)  // inlines: Element, Find, IsIdxValid, IsValidIndex, LeftChild, RemoveAt, RightChild, SetSubscribed, operator(), operator[]
// calls: GCSDK::CGCClient::PartialHandleUnsubscribe, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAt, GCSDK::CGCClient::DispatchSOCacheUnsubscribed, GCSDK::CGCClientSharedObjectCache::NotifyObjectsDestroyed
// callers: GCSDK::CGCSOCacheUnsubscribedJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::ProcessWelcomeMsg
void __fastcall GCSDK::CGCClient::NotifySOCacheUnsubscribed(GCSDK::CGCClient *const this, GCSDK::SOID_t ID)
{
  __int64 v2; // r14
  GCSDK::SOID_t::ID_t m_id; // rbx
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int16 v9; // r14
  __int64 v10; // rax
  GCSDK::CGCClientSharedObjectCache *v11; // r13
  __int64 i; // rbx
  _QWORD v13[10]; // [rsp+10h] [rbp-50h] BYREF

  v2 = *&ID.m_type;
  m_id = ID.m_id;
  GCSDK::CGCClient::PartialHandleUnsubscribe(this, ID);
  v13[0] = m_id;
  v5 = *(this + 576);
  v13[1] = v2;
  if ( v5 == 0xFFFF )
  {
LABEL_7:
    v7 = 0xFFFF;
    v9 = -1;
    v5 = -1;
  }
  else
  {
    v6 = *(this + 142);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v5;
        v8 = 32LL * v5;
        if ( (*(this + 141))(v13, v6 + v8 + 8) == 0 )
          break;
        v6 = *(this + 142);
        v5 = *(v6 + 32LL * v5);
        if ( v5 == 0xFFFF )
          goto LABEL_7;
      }
      if ( (*(this + 141))(*(this + 142) + v8 + 8, v13) == 0 )
        break;
      v6 = *(this + 142);
      v5 = *(v6 + v8 + 2);
      if ( v5 == 0xFFFF )
        goto LABEL_7;
    }
    v9 = v5;
  }
  if ( *(this + 286) > v7 && v5 <= *(this + 579) && v5 != 0xFFFF )
  {
    v10 = *(this + 142) + 32LL * v5;
    if ( v5 != *v10 )
    {
      v11 = *(v10 + 24);
      if ( !v11->m_bSubscribed )
      {
        if ( ID.m_type == 1 )
          return;
        goto LABEL_14;
      }
      v11->m_bSubscribed = 0;
      GCSDK::CGCClient::DispatchSOCacheUnsubscribed(this, ID, 2u);
      if ( ID.m_type != 1 )
      {
        for ( i = 0; *(this + 312) > i; ++i )
          GCSDK::CGCClientSharedObjectCache::NotifyObjectsDestroyed(
            v11,
            *(*(this + 157) + 8 * i),
            GCSDK::ESOCacheEvent::eSOCacheEvent_Unsubscribed);
LABEL_14:
        (*(v11->_vptr_CSharedObjectCache + 1))(v11);
        CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClientSharedObjectCache *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
          (this + 1128),
          v9);
      }
    }
  }
}


// GCSDK::CGCClient::NotifyResubscribedUpToDate  (line 1220, @0x00000000032123e0, libserver.so)  // inlines: Element, Find, IsIdxValid, IsValidIndex, LeftChild, RightChild, SetSubscribed, operator(), operator[]
// calls: GCSDK::CGCClient::DispatchSOCacheSubscribed
// callers: GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg
void __fastcall GCSDK::CGCClient::NotifyResubscribedUpToDate(GCSDK::CGCClient *const this, GCSDK::SOID_t ID)
{
  unsigned __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 owner; // [rsp+0h] [rbp-60h]
  GCSDK::SOID_t::ID_t m_id; // [rsp+8h] [rbp-58h]
  GCSDK::SOID_t v11[5]; // [rsp+10h] [rbp-50h] BYREF
  GCSDK::SOID_t v12; // 0:rsi.8,8:rdx.8

  m_id = ID.m_id;
  v3 = *(this + 576);
  owner = *&ID.m_type;
  v11[0] = ID;
  if ( v3 == 0xFFFF )
  {
LABEL_7:
    v5 = 0xFFFF;
    v3 = -1;
  }
  else
  {
    v4 = *(this + 142);
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = v3;
        v6 = 32LL * v3;
        if ( (*(this + 141))(v11, v4 + v6 + 8) == 0 )
          break;
        v4 = *(this + 142);
        v3 = *(v4 + 32LL * v3);
        if ( v3 == 0xFFFF )
          goto LABEL_7;
      }
      if ( (*(this + 141))(*(this + 142) + v6 + 8, v11) == 0 )
        break;
      v4 = *(this + 142);
      v3 = *(v4 + v6 + 2);
      if ( v3 == 0xFFFF )
        goto LABEL_7;
    }
  }
  if ( *(this + 286) > v5 && *(this + 579) >= v3 && v3 != 0xFFFF )
  {
    v7 = *(this + 142) + 32LL * v3;
    if ( *v7 != v3 )
    {
      v8 = *(v7 + 24);
      if ( *(v8 + 57) == 0 )
      {
        v12.m_id = m_id;
        *(v8 + 57) = 1;
        *&v12.m_type = owner;
        GCSDK::CGCClient::DispatchSOCacheSubscribed(this, v12, 1u);
      }
    }
  }
}


// GCSDK::CGCClient::FindSharedObject  (line 1243, @0x00000000032124f0, libserver.so)  // inlines: Element, Find, FindSOCache, LeftChild, RightChild, operator(), operator[]
// calls: GCSDK::CSharedObjectCache::FindSharedObject
GCSDK::CSharedObject *__fastcall GCSDK::CGCClient::FindSharedObject(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t ID,
        const GCSDK::CSharedObject *const soIndex)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rbx
  bool v8; // zf
  GCSDK::CSharedObjectCache *v10; // rdi
  GCSDK::SOID_t::ID_t m_id; // [rsp+0h] [rbp-40h] BYREF
  GCSDK::SOID_t::Type_t m_type; // [rsp+8h] [rbp-38h]
  uint32 m_padding; // [rsp+Ch] [rbp-34h]

  m_id = ID.m_id;
  v4 = *(this + 576);
  m_type = ID.m_type;
  m_padding = ID.m_padding;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = *(this + 142);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = 32 * v4;
      if ( (*(this + 141))(&m_id, v5 + v7 + 8) == 0 )
        break;
      v5 = *(this + 142);
      v4 = *(v5 + v7);
      if ( v4 == 0xFFFF )
        return 0;
    }
    v8 = (*(this + 141))(*(this + 142) + v7 + 8, &m_id) == 0;
    v5 = *(this + 142);
    if ( v8 )
      break;
    v4 = *(v5 + v7 + 2);
    if ( v4 == 0xFFFF )
      return 0;
  }
  v10 = *(v5 + v7 + 24);
  if ( v10 == 0 )
    return 0;
  else
    return GCSDK::CSharedObjectCache::FindSharedObject(v10, soIndex);
}


// GCSDK::CGCClient::PartialSOCache_t::PartialSOCache_t  (line 1253, @0x00000000032129b0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, ResetDbgInfo
// callers: GCSDK::CGCClient::ConstructNewPartial
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall GCSDK::CGCClient::PartialSOCache_t::PartialSOCache_t(GCSDK::CGCClient::PartialSOCache_t *const this)
{
  this->m_WaitingServices.m_Size = 0;
  this->m_WaitingServices.m_Memory.m_pMemory = 0;
  this->m_WaitingServices.m_Memory.m_nAllocationCount = 0;
  this->m_WaitingServices.m_Memory.m_nGrowSize = 0;
  this->m_ReceivedServices.m_Size = 0;
  this->m_ReceivedServices.m_Memory.m_pMemory = 0;
  this->m_ReceivedServices.m_Memory.m_nAllocationCount = 0;
  this->m_ReceivedServices.m_Memory.m_nGrowSize = 0;
  this->m_UpToDateServices.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_UpToDateServices.m_Tree.m_Elements.m_pMemory = 0;
  this->m_UpToDateServices.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_UpToDateServices.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_UpToDateServices.m_Tree.m_Root = -1;
  this->m_UpToDateServices.m_Tree.m_NumElements = 0;
  this->m_UpToDateServices.m_Tree.m_FirstFree = -1;
  this->m_UpToDateServices.m_Tree.m_LastAlloc.index = -1;
  this->m_UpToDateServices.m_Tree.m_pElements = 0;
  this->m_QueuedSubscriptions.m_Size = 0;
  this->m_QueuedSubscriptions.m_Memory.m_pMemory = 0;
  this->m_QueuedSubscriptions.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedSubscriptions.m_Memory.m_nGrowSize = 0;
  this->m_QueuedUpdates.m_Size = 0;
  this->m_QueuedUpdates.m_Memory.m_pMemory = 0;
  this->m_QueuedUpdates.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedUpdates.m_Memory.m_nGrowSize = 0;
}


// GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t  (line 1259, @0x00000000032125c0, libserver.so)  // inlines: First, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, PurgeAndDeleteElements, RemoveAll, SetLeftChild, SetRightChild, operator==, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CMsgSOCacheSubscribed*, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t, int>::Purge
// callers: GCSDK::CGCClient::PartialHandleUnsubscribe, GCSDK::CGCClient::PartialHandleSubscription
void __fastcall GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t(GCSDK::CGCClient::PartialSOCache_t *const this)
{
  __int64 v1; // r13
  int i; // r12d
  CMsgSOCacheSubscribed *v4; // rdi
  bool v5; // zf
  __int64 v6; // r13
  int j; // r12d
  google::protobuf::Message *m_pMsg; // rdi
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *v13; // rcx

  v1 = 0;
  for ( i = 0; i < this->m_QueuedSubscriptions.m_Size; ++v1 )
  {
    v4 = this->m_QueuedSubscriptions.m_Memory.m_pMemory[v1];
    if ( v4 != 0 )
      (*(*v4 + 8LL))(v4);
    ++i;
  }
  v5 = (this->m_QueuedSubscriptions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_QueuedSubscriptions.m_Size = 0;
  if ( v5 )
    CUtlMemory<CMsgSOCacheSubscribed *,int>::Purge(&this->m_QueuedSubscriptions.m_Memory);
  v6 = 0;
  for ( j = 0; this->m_QueuedUpdates.m_Size > j; ++v6 )
  {
    m_pMsg = this->m_QueuedUpdates.m_Memory.m_pMemory[v6].m_pMsg;
    if ( m_pMsg != 0 )
      (*(*m_pMsg + 8LL))(m_pMsg);
    ++j;
  }
  v5 = (this->m_QueuedUpdates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_QueuedUpdates.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t,int>::Purge(&this->m_QueuedUpdates.m_Memory);
    if ( (this->m_QueuedUpdates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t,int>::Purge(&this->m_QueuedUpdates.m_Memory);
  }
  v5 = (this->m_QueuedSubscriptions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_QueuedSubscriptions.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CMsgSOCacheSubscribed *,int>::Purge(&this->m_QueuedSubscriptions.m_Memory);
    if ( (this->m_QueuedSubscriptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMsgSOCacheSubscribed *,int>::Purge(&this->m_QueuedSubscriptions.m_Memory);
  }
  index = this->m_UpToDateServices.m_Tree.m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_UpToDateServices.m_Tree.m_Elements.m_nAllocationCount;
    v11 = 0;
    v12 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v12 < m_nAllocationCount && v12 <= index )
        {
          v13 = &this->m_UpToDateServices.m_Tree.m_Elements.m_pMemory[v11];
          if ( v12 != v13->m_Left )
          {
            v13->m_Right = this->m_UpToDateServices.m_Tree.m_FirstFree;
            this->m_UpToDateServices.m_Tree.m_Elements.m_pMemory[v11].m_Left = v12;
            index = this->m_UpToDateServices.m_Tree.m_LastAlloc.index;
            this->m_UpToDateServices.m_Tree.m_FirstFree = v12;
          }
        }
        if ( v12 == index )
          break;
        m_nAllocationCount = this->m_UpToDateServices.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v12 + 1) >= m_nAllocationCount )
          break;
        ++v12;
        ++v11;
      }
      while ( v12 != 0xFFFF );
    }
    this->m_UpToDateServices.m_Tree.m_Root = -1;
    this->m_UpToDateServices.m_Tree.m_NumElements = 0;
  }
  v5 = (this->m_UpToDateServices.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_UpToDateServices.m_Tree.m_FirstFree = -1;
  if ( v5 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_UpToDateServices.m_Tree.m_Elements);
    v5 = (this->m_UpToDateServices.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_UpToDateServices.m_Tree.m_LastAlloc.index = -1;
    if ( v5 )
    {
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_UpToDateServices.m_Tree.m_Elements);
      v5 = (this->m_ReceivedServices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      this->m_ReceivedServices.m_Size = 0;
      if ( !v5 )
        goto LABEL_26;
      goto LABEL_30;
    }
  }
  else
  {
    this->m_UpToDateServices.m_Tree.m_LastAlloc.index = -1;
  }
  v5 = (this->m_ReceivedServices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ReceivedServices.m_Size = 0;
  if ( v5 )
  {
LABEL_30:
    CUtlMemory<unsigned int,int>::Purge(&this->m_ReceivedServices.m_Memory);
    if ( (this->m_ReceivedServices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<unsigned int,int>::Purge(&this->m_ReceivedServices.m_Memory);
      v5 = (this->m_WaitingServices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      this->m_WaitingServices.m_Size = 0;
      if ( !v5 )
        return;
      goto LABEL_32;
    }
  }
LABEL_26:
  v5 = (this->m_WaitingServices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_WaitingServices.m_Size = 0;
  if ( !v5 )
    return;
LABEL_32:
  CUtlMemory<unsigned int,int>::Purge(&this->m_WaitingServices.m_Memory);
  if ( (this->m_WaitingServices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned int,int>::Purge(&this->m_WaitingServices.m_Memory);
}


// GCSDK::CGCClient::PartialHandleUnsubscribe  (line 1269, @0x0000000003214580, libserver.so)  // inlines: Element, Find, FreeNode, Purge, RemoveAll, RemoveAt, SetLeftChild, SetRightChild, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~SOVersion_t
// calls: CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator delete, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAt, CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t, int>::Purge
// callers: GCSDK::CGCClient::NotifySOCacheUnsubscribed
void __fastcall GCSDK::CGCClient::PartialHandleUnsubscribe(GCSDK::CGCClient *const this, GCSDK::SOID_t soid)
{
  GCSDK::SOID_t::ID_t m_id; // r14
  __int64 v3; // r13
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r15
  __int64 v7; // r12
  CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t,int> *v8; // rcx
  bool v9; // zf
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*>::Node_t,short unsigned int,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*>::Node_t,short unsigned int>,short unsigned int> > *v10; // r15
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r12
  __int64 v13; // rdx
  void *v14; // rbx
  CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t,int> *v15; // [rsp+0h] [rbp-70h]
  CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t,int> *v16; // [rsp+8h] [rbp-68h]
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*>::Node_t,short unsigned int,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*>::Node_t,short unsigned int>,short unsigned int> > *v17; // [rsp+10h] [rbp-60h]
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t search; // [rsp+20h] [rbp-50h] BYREF

  m_id = soid.m_id;
  v3 = *&soid.m_type;
  search.key = soid;
  v17 = (this + 1168);
  v5 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         (this + 1168),
         &search);
  v6 = v5;
  if ( v5 != 0xFFFF )
  {
    v7 = 32LL * v5;
    v8 = *(*(this + 147) + v7 + 24);
    if ( v8 != 0 )
    {
      v9 = (v8[1].m_nGrowSize & 0xC0000000) == 0;
      v8->m_nAllocationCount = 0;
      if ( v9 )
      {
        v16 = v8;
        v15 = v8 + 1;
        CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t,int>::Purge(v8 + 1);
        v8 = v16;
        if ( (v16[1].m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t,int>::Purge(v15);
          v8 = v16;
        }
      }
      operator delete(v8);
    }
    CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
      v17,
      v6);
    *(*(this + 147) + v7) = v6;
    *(*(this + 147) + v7 + 2) = *(this + 598);
    --*(this + 597);
    *(this + 598) = v6;
  }
  v10 = (this + 1208);
  search.key.m_id = m_id;
  *&search.key.m_type = v3;
  v11 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          (this + 1208),
          &search);
  v12 = v11;
  if ( v11 != 0xFFFF )
  {
    v13 = *(this + 152) + 32LL * v11;
    v14 = *(v13 + 24);
    if ( v14 != 0 )
    {
      GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t(*(v13 + 24));
      operator delete(v14);
    }
    CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
      v10,
      v12);
  }
}


// GCSDK::CGCClient::PartialValidateExpectedService  (line 1293, @0x0000000003212a90, libserver.so)
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Find
// callers: GCSDK::CGCClient::PartialHandleSubscription
bool __fastcall GCSDK::CGCClient::PartialValidateExpectedService(
        const GCSDK::CGCClient::PartialSOCache_t *const partial,
        uint32 nService,
        uint32 nNumDependencies,
        const uint32 *pDependencies)
{
  uint32 nServicea; // [rsp+Ch] [rbp-4h] BYREF

  nServicea = nService;
  return CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&partial->m_WaitingServices, &nServicea) != -1;
}


// GCSDK::CGCClient::PartialMatchUpToDateVersions  (line 1326, @0x00000000032138f0, libserver.so)  // inlines: Element, Find, FirstInorder, Key, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, long long unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: GCSDK::CGCClient::PartialHandleCompletedCache
bool __fastcall GCSDK::CGCClient::PartialMatchUpToDateVersions(
        GCSDK::CGCClient *const this,
        const GCSDK::CGCClientSharedObjectCache *pSOCache,
        const GCSDK::CGCClient::PartialSOCache_t *const partial)
{
  bool m_bInitialized; // r14
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  unsigned __int16 m_Root; // dx
  __int64 v9; // rcx
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *m_pMemory; // r10
  __int64 v11; // rax
  unsigned __int16 m_Left; // si
  int v13; // edx
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *v14; // rax
  CUtlMap<unsigned int,long long unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t key; // r8d
  CUtlMap<unsigned int,long long unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // rax
  _DWORD *v17; // r13
  CUtlMap<unsigned int,long long unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_UpToDateServices; // r12
  __int64 v19; // rbx
  _DWORD *v20; // rcx
  _DWORD *v22; // r9
  unsigned __int16 Inorder; // ax
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *v24; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *v25; // [rsp+8h] [rbp-58h]
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t search; // [rsp+10h] [rbp-50h] BYREF

  if ( pSOCache == 0 )
    return 0;
  m_bInitialized = pSOCache->m_bInitialized;
  if ( !m_bInitialized )
    return 0;
  search.key.m_id = (*(pSOCache->_vptr_CSharedObjectCache + 2))(pSOCache);
  *&search.key.m_type = v6;
  v7 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         (this + 1168),
         &search);
  if ( v7 == 0xFFFF )
    return 0;
  m_Root = partial->m_UpToDateServices.m_Tree.m_Root;
  v9 = *(*(this + 147) + 32LL * v7 + 24);
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = partial->m_UpToDateServices.m_Tree.m_Elements.m_pMemory;
    v11 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left == 0xFFFF )
    {
      m_Left = partial->m_UpToDateServices.m_Tree.m_Root;
    }
    else
    {
      while ( 1 )
      {
        v11 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
    }
    v13 = *(v9 + 8);
    v14 = &m_pMemory[v11];
    key = v14->m_Data.key;
    elem = v14->m_Data.elem;
    if ( v13 > 0 )
    {
      v17 = *(v9 + 16);
      p_m_UpToDateServices = &partial->m_UpToDateServices;
      v19 = &v17[4 * (v13 - 1) + 4];
      while ( 1 )
      {
        v20 = v17 + 4;
        if ( key != *v17 )
          break;
        v22 = v17;
LABEL_17:
        if ( elem != *(v22 + 1) )
          return 0;
        v25 = m_pMemory;
        Inorder = CUtlRBTree<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                    &p_m_UpToDateServices->m_Tree,
                    m_Left);
        m_pMemory = v25;
        m_Left = Inorder;
        if ( Inorder == 0xFFFF )
          return m_bInitialized;
        v24 = &v25[Inorder];
        key = v24->m_Data.key;
        elem = v24->m_Data.elem;
      }
      while ( v20 != v19 )
      {
        v22 = v20;
        v20 += 4;
        if ( key == *(v20 - 4) )
          goto LABEL_17;
      }
    }
    return 0;
  }
  return m_bInitialized;
}


// GCSDK::CGCClient::PartialHandleCompletedCache  (line 1367, @0x00000000032150a0, libserver.so)  // inlines: AddToTail, BSendMessage, CProtoBufGCClientSendHandler, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<unsigned int>, Element, Find, FindSOCache, FirstInorder, FreeProto, GrowMemory, Key, LeftChild, NextInorder, Purge, RemoveAll, RightChild, mutable_owner_soid, operator(), operator[], set_has_owner_soid, ~CProtoBufMsg, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GCSDK::CGCClient::SOCacheUpdateMultipleMsg, GCSDK::CGCClient::SOCacheCreateMsg, GCSDK::CGCClient::SOCacheDestroyMsg, GCSDK::CGCClient::SOCacheUpdateMsg, GCSDK::CGCClient::PartialMatchUpToDateVersions, GCSDK::CGCClient::FindOrAddSOCache, CUtlRBTree<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, long long unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<unsigned int, int>::Grow, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg, CUtlMemory<unsigned int, int>::Purge, CMemAllocSystemInitialize, GCSDK::CGCClient::NotifyResubscribedUpToDate (23 total)
// callers: GCSDK::CGCClient::PartialHandleSubscription
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool
void __fastcall GCSDK::CGCClient::PartialHandleCompletedCache(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t::ID_t a2,
        __int64 a3,
        const GCSDK::CGCClient::PartialSOCache_t *const partial)
{
  bool v6; // zf
  __int64 v7; // r12
  GCSDK::CGCClient::PartialSOCache_t::Msg_t *v8; // rax
  unsigned int m_eMsgType; // edx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r12
  const GCSDK::CGCClientSharedObjectCache *v13; // r12
  __int64 m_Size; // r12
  GCSDK::CGCClientSharedObjectCache *v15; // rax
  __int64 v16; // rdi
  unsigned __int16 m_Root; // r13
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v19; // rax
  unsigned __int16 m_Left; // si
  int v21; // edx
  unsigned int *v22; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *v23; // r15
  int v24; // eax
  unsigned int *v25; // rax
  google::protobuf::Message *v26; // rbx
  CMsgSOIDOwner *v27; // rsi
  CMsgSOIDOwner *v28; // r12
  GCSDK::CGCClientSharedObjectCache *v29; // [rsp+8h] [rbp-A8h]
  GCSDK::SOID_t ownera; // [rsp+30h] [rbp-80h] BYREF
  GCSDK::CProtoBufMsgBase::IProtoBufSendHandler sender; // [rsp+40h] [rbp-70h] BYREF
  GCSDK::CGCClient *v32; // [rsp+48h] [rbp-68h]
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > vUpToDateSystems; // [rsp+50h] [rbp-60h] BYREF
  google::protobuf::Message *pObject; // [rsp+70h] [rbp-40h]
  GCSDK::SOID_t v36; // 0:rsi.8,8:rdx.8

  ownera.m_id = a2;
  v6 = partial->m_UpToDateServices.m_Tree.m_NumElements == 0;
  *&ownera.m_type = a3;
  if ( v6 )
    goto LABEL_2;
  *&vUpToDateSystems.m_Size = a2;
  v10 = *(this + 576);
  vUpToDateSystems.m_Memory.m_pMemory = *&ownera.m_type;
  if ( v10 == 0xFFFF )
  {
LABEL_22:
    v13 = 0;
  }
  else
  {
    v11 = *(this + 142);
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = 32 * v10;
        if ( (*(this + 141))(&vUpToDateSystems, v11 + v12 + 8) == 0 )
          break;
        v11 = *(this + 142);
        v10 = *(v11 + v12);
        if ( v10 == 0xFFFF )
          goto LABEL_22;
      }
      v6 = (*(this + 141))(*(this + 142) + v12 + 8, &vUpToDateSystems) == 0;
      v11 = *(this + 142);
      if ( v6 )
        break;
      v10 = *(v11 + v12 + 2);
      if ( v10 == 0xFFFF )
        goto LABEL_22;
    }
    v13 = *(v11 + v12 + 24);
  }
  if ( GCSDK::CGCClient::PartialMatchUpToDateVersions(this, v13, partial) )
  {
    if ( partial->m_QueuedSubscriptions.m_Size == 0 )
    {
      v36.m_id = (*(v13->_vptr_CSharedObjectCache + 2))(v13);
      GCSDK::CGCClient::NotifyResubscribedUpToDate(this, v36);
LABEL_2:
      if ( partial->m_QueuedSubscriptions.m_Size == 0 )
        goto LABEL_3;
    }
    m_Size = 0;
    v15 = GCSDK::CGCClient::FindOrAddSOCache(this, ownera);
    vUpToDateSystems.m_Size = 0;
    v29 = v15;
    LODWORD(v15) = partial->m_UpToDateServices.m_Tree.m_NumElements;
    vUpToDateSystems.m_Memory.m_pMemory = 0;
    vUpToDateSystems.m_Memory.m_nGrowSize = 1;
    vUpToDateSystems.m_Memory.m_nAllocationCount = v15;
    if ( v15 != 0 )
    {
      CMemAllocSystemInitialize(v16);
      v25 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * vUpToDateSystems.m_Memory.m_nAllocationCount);
      m_Root = partial->m_UpToDateServices.m_Tree.m_Root;
      vUpToDateSystems.m_Memory.m_pMemory = v25;
      m_Size = vUpToDateSystems.m_Size;
      if ( m_Root != 0xFFFF )
        goto LABEL_27;
    }
    else
    {
      m_Root = partial->m_UpToDateServices.m_Tree.m_Root;
      if ( m_Root != 0xFFFF )
      {
LABEL_27:
        m_pMemory = partial->m_UpToDateServices.m_Tree.m_Elements.m_pMemory;
        v19 = m_Root;
        m_Left = m_pMemory[m_Root].m_Left;
        if ( m_Left != 0xFFFF )
        {
          while ( 1 )
          {
            v19 = m_Left;
            if ( m_pMemory[m_Left].m_Left == 0xFFFF )
              break;
            m_Left = m_pMemory[m_Left].m_Left;
          }
          m_Root = m_Left;
        }
        while ( 1 )
        {
          v23 = &m_pMemory[v19];
          v24 = m_Size;
          if ( vUpToDateSystems.m_Memory.m_nAllocationCount == m_Size )
          {
            CUtlMemory<unsigned int,int>::Grow(&vUpToDateSystems.m_Memory, 1);
            v24 = vUpToDateSystems.m_Size;
          }
          v21 = v24 + 1;
          vUpToDateSystems.m_Size = v24 + 1;
          v22 = &vUpToDateSystems.m_Memory.m_pMemory[m_Size];
          if ( v22 != 0 )
          {
            *v22 = v23->m_Data.key;
            m_Size = vUpToDateSystems.m_Size;
          }
          else
          {
            m_Size = v21;
          }
          m_Root = CUtlRBTree<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                     &partial->m_UpToDateServices.m_Tree,
                     m_Root);
          if ( m_Root == 0xFFFF )
            break;
          m_pMemory = partial->m_UpToDateServices.m_Tree.m_Elements.m_pMemory;
          v19 = m_Root;
        }
      }
    }
    GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg(
      v29,
      this,
      partial->m_QueuedSubscriptions.m_Size,
      partial->m_QueuedSubscriptions.m_Memory.m_pMemory,
      m_Size,
      vUpToDateSystems.m_Memory.m_pMemory);
    vUpToDateSystems.m_Size = 0;
    if ( (vUpToDateSystems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<unsigned int,int>::Purge(&vUpToDateSystems.m_Memory);
      if ( (vUpToDateSystems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned int,int>::Purge(&vUpToDateSystems.m_Memory);
    }
LABEL_3:
    v7 = 0;
    if ( partial->m_QueuedUpdates.m_Size <= 0 )
      return;
    while ( 1 )
    {
      v8 = &partial->m_QueuedUpdates.m_Memory.m_pMemory[v7];
      m_eMsgType = v8->m_eMsgType;
      if ( v8->m_eMsgType == 22 )
        break;
      if ( m_eMsgType > 0x16 )
      {
        if ( m_eMsgType == 23 )
        {
          GCSDK::CGCClient::SOCacheDestroyMsg(this, v8->m_pMsg);
        }
        else if ( m_eMsgType == 26 )
        {
          GCSDK::CGCClient::SOCacheUpdateMultipleMsg(this, v8->m_pMsg);
        }
        goto LABEL_8;
      }
      if ( m_eMsgType == 21 )
      {
        GCSDK::CGCClient::SOCacheCreateMsg(this, v8->m_pMsg);
        if ( partial->m_QueuedUpdates.m_Size <= ++v7 )
          return;
      }
      else
      {
LABEL_8:
        if ( partial->m_QueuedUpdates.m_Size <= ++v7 )
          return;
      }
    }
    GCSDK::CGCClient::SOCacheUpdateMsg(this, v8->m_pMsg);
    goto LABEL_8;
  }
  GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::CProtoBufMsg(&vUpToDateSystems, 0x1Cu);
  v26 = pObject;
  v27 = *(pObject + 3);
  *(pObject + 4) |= 1u;
  if ( v27 == 0 )
  {
    v28 = operator new(0x28u);
    CMsgSOIDOwner::CMsgSOIDOwner(v28);
    *(v26 + 3) = v28;
    v27 = v28;
  }
  GCSDK::SOID_t::ToMsgSOIDOwner(&ownera, v27);
  v32 = this;
  sender._vptr_IProtoBufSendHandler = &off_47CFA30;
  GCSDK::CProtoBufMsgBase::BAsyncSend(&vUpToDateSystems, &sender);
  *&vUpToDateSystems.m_Size = &off_4304FD0;
  if ( pObject != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool, pObject);
    pObject = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&vUpToDateSystems);
}


// GCSDK::CGCClient::ConstructNewPartial  (line 1436, @0x00000000032148a0, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, FindInsertionPosition, GrowMemory, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: operator new, GCSDK::CGCClient::PartialSOCache_t::PartialSOCache_t, CUtlMemory<unsigned int, int>::Grow, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: GCSDK::CGCClient::PartialHandleSubscription
GCSDK::CGCClient::PartialSOCache_t *__fastcall GCSDK::CGCClient::ConstructNewPartial(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t soid,
        uint64 nSyncVersion,
        uint32 nNumDependencies,
        const uint32 *pDependencies)
{
  GCSDK::CGCClient::PartialSOCache_t *v8; // r12
  const uint32 *v9; // r13
  unsigned int *v10; // rax
  int m_Size; // r14d
  int v12; // edx
  unsigned __int16 v13; // r13
  unsigned __int16 v14; // ax
  char v15; // cl
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  bool v20; // bl
  __int64 v21; // [rsp+8h] [rbp-68h]
  GCSDK::SOID_t::ID_t m_id; // [rsp+10h] [rbp-60h]
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t pCopyFrom; // [rsp+20h] [rbp-50h] BYREF

  m_id = soid.m_id;
  v21 = *&soid.m_type;
  v8 = operator new(0x90u);
  GCSDK::CGCClient::PartialSOCache_t::PartialSOCache_t(v8);
  v8->m_nSyncID = nSyncVersion;
  if ( nNumDependencies != 0 )
  {
    v9 = &pDependencies[nNumDependencies];
    do
    {
      m_Size = v8->m_WaitingServices.m_Size;
      v12 = m_Size;
      if ( m_Size == v8->m_WaitingServices.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<unsigned int,int>::Grow(&v8->m_WaitingServices.m_Memory, 1);
        v12 = v8->m_WaitingServices.m_Size;
      }
      v8->m_WaitingServices.m_Size = v12 + 1;
      v10 = &v8->m_WaitingServices.m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
        *v10 = *pDependencies;
      ++pDependencies;
    }
    while ( pDependencies != v9 );
  }
  pCopyFrom.elem = v8;
  v13 = *(this + 616);
  pCopyFrom.key.m_id = m_id;
  *&pCopyFrom.key.m_type = v21;
  if ( v13 != 0xFFFF )
  {
    while ( 1 )
    {
      v16 = (*(this + 151))(&pCopyFrom, *(this + 152) + 32LL * v13 + 8) == 0;
      v17 = *(this + 152);
      if ( v16 )
      {
        v14 = *(v17 + 32LL * v13 + 2);
        v15 = 0;
        if ( v14 == 0xFFFF )
        {
LABEL_14:
          v20 = v15;
          goto LABEL_15;
        }
      }
      else
      {
        v14 = *(v17 + 32LL * v13);
        v15 = 1;
        if ( v14 == 0xFFFF )
          goto LABEL_14;
      }
      v13 = v14;
    }
  }
  v13 = -1;
  v20 = 0;
LABEL_15:
  v18 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          (this + 1208),
          &pCopyFrom);
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    (this + 1208),
    v18,
    v13,
    v20);
  ++*(this + 617);
  return v8;
}


// GCSDK::CGCClient::PartialHandleSubscription  (line 1452, @0x0000000003215530, libserver.so)  // inlines: AddToTail, CopyConstruct<CMsgSOCacheSubscribed*>, CopyConstruct<unsigned int>, Element, FastRemove, Find, FindAndFastRemove, FindInsertionPosition, GrowMemory, Insert, InsertAt, LeftChild, RemoveAt, RightChild, memcpy, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t, operator delete, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAt, GCSDK::CGCClient::ConstructNewPartial, operator new, CMsgSOCacheSubscribed::CMsgSOCacheSubscribed, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Find, GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCClient::PartialValidateExpectedService, CUtlMemory<unsigned int, int>::Grow, CUtlRBTree<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, long long unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NewNode (15 total)
// callers: GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg, GCSDK::CGCClient::ProcessSOCacheSubscribedMsg, GCSDK::CGCClient::ProcessSOCacheSubscribedUpToDateMsg
__int64 __fastcall GCSDK::CGCClient::PartialHandleSubscription(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t soid,
        uint64 nCacheVersion,
        uint32 nServiceID,
        uint64 nSyncID,
        uint32 nServiceCount,
        const uint32 *pServiceList,
        const CMsgSOCacheSubscribed *pSubscribeMsg)
{
  __int64 v9; // r14
  unsigned __int16 v11; // r12
  __int64 v12; // rax
  void *v13; // rbx
  __int64 v15; // rax
  GCSDK::CGCClient::PartialSOCache_t *v16; // rbx
  CMsgSOCacheSubscribed *v17; // r15
  __int64 m_Size; // rax
  int v19; // edx
  CMsgSOCacheSubscribed **v20; // rax
  int v21; // eax
  int v22; // edx
  int v23; // edx
  __int64 v24; // r15
  int v25; // eax
  uint32 *v26; // rax
  unsigned __int16 m_Right; // ax
  bool v28; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,long long unsigned int>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // r15
  char v32; // cl
  unsigned __int16 nCacheVersionb; // [rsp+8h] [rbp-78h]
  bool nCacheVersionc; // [rsp+8h] [rbp-78h]
  GCSDK::SOID_t::ID_t soida; // [rsp+10h] [rbp-70h]
  int soid_8; // [rsp+18h] [rbp-68h]
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*>::Node_t,short unsigned int,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*>::Node_t,short unsigned int>,short unsigned int> > *v38; // [rsp+20h] [rbp-60h]
  uint32 nServiceIDa; // [rsp+2Ch] [rbp-54h] BYREF
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t search; // [rsp+30h] [rbp-50h] BYREF
  GCSDK::SOID_t v41; // 0:rsi.8,8:rdx.8

  v9 = *&soid.m_type;
  search.key = soid;
  soida = soid.m_id;
  nServiceIDa = nServiceID;
  v38 = (this + 1208);
  v11 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          (this + 1208),
          &search);
  if ( nServiceCount != 0 )
  {
    if ( v11 != 0xFFFF )
    {
      v15 = *(this + 152) + 32LL * v11;
      v16 = *(v15 + 24);
      if ( v16->m_nSyncID == nSyncID )
      {
        if ( !GCSDK::CGCClient::PartialValidateExpectedService(*(v15 + 24), nServiceIDa, nServiceCount, pServiceList) )
          return 0;
        goto LABEL_11;
      }
      if ( v16->m_nSyncID > nSyncID )
        return 0;
      GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t(*(v15 + 24));
      operator delete(v16);
      CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
        v38,
        v11);
    }
    *&v41.m_type = v9;
    v11 = -1;
    v41.m_id = soida;
    v16 = GCSDK::CGCClient::ConstructNewPartial(this, v41, nSyncID, nServiceCount, pServiceList);
LABEL_11:
    if ( pSubscribeMsg != 0 )
    {
      v17 = operator new(0x60u);
      CMsgSOCacheSubscribed::CMsgSOCacheSubscribed(v17, pSubscribeMsg);
      m_Size = v16->m_QueuedSubscriptions.m_Size;
      v19 = v16->m_QueuedSubscriptions.m_Size;
      if ( m_Size == v16->m_QueuedSubscriptions.m_Memory.m_nAllocationCount )
      {
        soid_8 = v16->m_QueuedSubscriptions.m_Size;
        CUtlMemory<CMsgSOCacheSubscribed *,int>::Grow(&v16->m_QueuedSubscriptions.m_Memory, 1);
        v19 = v16->m_QueuedSubscriptions.m_Size;
        m_Size = soid_8;
      }
      v16->m_QueuedSubscriptions.m_Size = v19 + 1;
      v20 = &v16->m_QueuedSubscriptions.m_Memory.m_pMemory[m_Size];
      if ( v20 != 0 )
        *v20 = v17;
    }
    else
    {
      LODWORD(search.key.m_id) = nServiceIDa;
      *&search.key.m_type = nCacheVersion;
      nCacheVersionb = v16->m_UpToDateServices.m_Tree.m_Root;
      if ( nCacheVersionb == 0xFFFF )
      {
        v31 = -1;
        v32 = 0;
      }
      else
      {
        while ( 1 )
        {
          v28 = !v16->m_UpToDateServices.m_Tree.m_LessFunc.m_LessFunc(
                   &search,
                   &v16->m_UpToDateServices.m_Tree.m_Elements.m_pMemory[nCacheVersionb].m_Data.key);
          m_pMemory = v16->m_UpToDateServices.m_Tree.m_Elements.m_pMemory;
          if ( v28 )
          {
            m_Right = m_pMemory[nCacheVersionb].m_Right;
            v32 = 0;
          }
          else
          {
            m_Right = m_pMemory[nCacheVersionb].m_Left;
            v32 = 1;
          }
          if ( m_Right == 0xFFFF )
            break;
          nCacheVersionb = m_Right;
        }
        v31 = nCacheVersionb;
      }
      nCacheVersionc = v32;
      v30 = CUtlRBTree<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &v16->m_UpToDateServices.m_Tree,
              &search);
      CUtlRBTree<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned long long,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &v16->m_UpToDateServices.m_Tree,
        v30,
        v31,
        nCacheVersionc);
      ++v16->m_UpToDateServices.m_Tree.m_NumElements;
    }
    v21 = CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&v16->m_WaitingServices, &nServiceIDa);
    if ( v21 != -1 )
    {
      v22 = v16->m_WaitingServices.m_Size;
      if ( v22 > 0 )
      {
        v23 = v22 - 1;
        if ( v21 != v23 )
        {
          v16->m_WaitingServices.m_Memory.m_pMemory[v21] = v16->m_WaitingServices.m_Memory.m_pMemory[v23];
          v23 = v16->m_WaitingServices.m_Size - 1;
        }
        v16->m_WaitingServices.m_Size = v23;
      }
    }
    v24 = v16->m_ReceivedServices.m_Size;
    v25 = v16->m_ReceivedServices.m_Size;
    if ( v24 == v16->m_ReceivedServices.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<unsigned int,int>::Grow(&v16->m_ReceivedServices.m_Memory, 1);
      v25 = v16->m_ReceivedServices.m_Size;
    }
    v16->m_ReceivedServices.m_Size = v25 + 1;
    v26 = &v16->m_ReceivedServices.m_Memory.m_pMemory[v24];
    if ( v26 != 0 )
      *v26 = nServiceIDa;
    if ( v16->m_WaitingServices.m_Size == 0 )
    {
      GCSDK::CGCClient::PartialHandleCompletedCache(this, soida, v9, v16);
      GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t(v16);
      operator delete(v16);
      CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
        v38,
        v11);
      return 0;
    }
    return 0;
  }
  if ( v11 == 0xFFFF )
    return 1;
  v12 = *(this + 152) + 32LL * v11;
  v13 = *(v12 + 24);
  if ( v13 != 0 )
  {
    GCSDK::CGCClient::PartialSOCache_t::~PartialSOCache_t(*(v12 + 24));
    operator delete(v13);
  }
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
    v38,
    v11);
  return 1;
}


// GCSDK::CGCClient::PartialHandleUpdate  (line 1538, @0x0000000003213d30, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CGCClient::PartialSOCache_t::Msg_t>, Element, Find, GrowMemory, HasElement, operator[]
// calls: CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Find, CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t, int>::Grow
// callers: GCSDK::CGCSOCreateJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCSOUpdateJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCSODestroyJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCSOUpdateMultipleJob::BYieldingRunJobFromProtoMsg
__int64 __fastcall GCSDK::CGCClient::PartialHandleUpdate(
        GCSDK::CGCClient *const this,
        GCSDK::SOID_t soid,
        uint32 nService,
        GCSDK::MsgType_t eMsg,
        const google::protobuf::Message *msgUpdate)
{
  unsigned __int16 v8; // ax
  unsigned int v9; // edx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r14
  int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  uint32 nServicea; // [rsp+Ch] [rbp-44h] BYREF
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  search.key = soid;
  nServicea = nService;
  v8 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::PartialSOCache_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         (this + 1208),
         &search);
  v9 = 1;
  if ( v8 != 0xFFFF )
  {
    v10 = *(*(this + 152) + 32LL * v8 + 24);
    v11 = CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find((v10 + 32), &nServicea);
    v9 = 0;
    if ( v11 >= 0 )
    {
      v13 = (*(*msgUpdate + 24LL))(msgUpdate, v12, 0);
      (*(*v13 + 104LL))(v13, msgUpdate);
      v14 = *(v10 + 120);
      v15 = v14;
      if ( v14 == *(v10 + 136) )
      {
        CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t,int>::Grow((v10 + 128), 1);
        v15 = *(v10 + 120);
      }
      *(v10 + 120) = v15 + 1;
      v16 = *(v10 + 128) + 16LL * v14;
      if ( v16 != 0 )
      {
        *v16 = eMsg;
        *(v16 + 8) = v13;
      }
      return 0;
    }
  }
  return v9;
}


// GCSDK::CGCClient::SetSOCacheVersion  (line 1571, @0x0000000003214a20, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<GCSDK::CGCClient::ServiceCacheVersion_t>, Element, Find, FindInsertionPosition, GrowMemory, Insert, InsertAt, LeftChild, RightChild, SOVersion_t, SetVersion, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t, int>::Grow, operator new, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CGCClientSystem::LoadSerializedSOCache, GCSDK::CGCClient::SOCacheCreateMsg, GCSDK::CGCClient::SOCacheUpdateMsg, GCSDK::CGCClient::SOCacheDestroyMsg, GCSDK::CGCClient::SOCacheUpdateMultipleMsg, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
void __fastcall GCSDK::CGCClient::SetSOCacheVersion(
        GCSDK::CGCClient *const this,
        GCSDK::CSharedObjectCache *const cache,
        uint32 nService,
        uint64 nVersion,
        int32 nFileCacheVersion)
{
  uint64 m_ulVersion; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  GCSDK::CGCClient::SOVersion_t *v11; // r13
  __int64 m_Size; // r12
  GCSDK::CGCClient::ServiceCacheVersion_t *m_pMemory; // rax
  GCSDK::CGCClient::ServiceCacheVersion_t *v14; // rax
  GCSDK::CGCClient::ServiceCacheVersion_t *v15; // rdx
  GCSDK::CGCClient::ServiceCacheVersion_t *v16; // rcx
  int v17; // eax
  __int64 v18; // r12
  bool v19; // zf
  GCSDK::CGCClient::ServiceCacheVersion_t *v20; // r12
  GCSDK::CGCClient::SOVersion_t *v21; // rax
  GCSDK::SOID_t::ID_t v22; // rax
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  char v25; // dl
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  __int16 v28; // dx
  char v29; // cl
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*>::Node_t,short unsigned int,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*>::Node_t,short unsigned int>,short unsigned int> > *v30; // [rsp+0h] [rbp-70h]
  bool isLeft; // [rsp+10h] [rbp-60h]
  unsigned __int16 cacheb; // [rsp+18h] [rbp-58h]
  unsigned __int16 cachec; // [rsp+18h] [rbp-58h]
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t search; // [rsp+20h] [rbp-50h] BYREF

  m_ulVersion = nVersion;
  if ( cache->m_ulVersion >= nVersion )
    m_ulVersion = cache->m_ulVersion;
  cache->m_ulVersion = m_ulVersion;
  search.key.m_id = (*(cache->_vptr_CSharedObjectCache + 2))(cache);
  *&search.key.m_type = v9;
  v30 = (this + 1168);
  v10 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          (this + 1168),
          &search);
  if ( v10 != 0xFFFF )
  {
    v11 = *(*(this + 147) + 32LL * v10 + 24);
    goto LABEL_5;
  }
  v21 = operator new(0x20u);
  v21->m_VersionList.m_Size = 0;
  v11 = v21;
  v21->m_VersionList.m_Memory.m_pMemory = 0;
  v21->m_VersionList.m_Memory.m_nAllocationCount = 0;
  v21->m_VersionList.m_Memory.m_nGrowSize = 0;
  v21->m_nFileVersion = 0;
  v22 = (*(cache->_vptr_CSharedObjectCache + 2))(cache);
  search.elem = v11;
  search.key.m_id = v22;
  LOWORD(v22) = *(this + 596);
  *&search.key.m_type = v23;
  cacheb = v22;
  if ( v22 == 0xFFFF )
  {
    v28 = -1;
    v29 = 0;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v19 = (*(this + 146))(&search, *(this + 147) + 32LL * cacheb + 8) == 0;
    v26 = *(this + 147);
    if ( v19 )
      break;
    v24 = *(v26 + 32LL * cacheb);
    v25 = 1;
    if ( v24 == 0xFFFF )
      goto LABEL_25;
LABEL_22:
    cacheb = v24;
  }
  v24 = *(v26 + 32LL * cacheb + 2);
  v25 = 0;
  if ( v24 != 0xFFFF )
    goto LABEL_22;
LABEL_25:
  v29 = v25;
  v28 = cacheb;
LABEL_26:
  isLeft = v29;
  cachec = v28;
  v27 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          v30,
          &search);
  CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    v30,
    v27,
    cachec,
    isLeft);
  ++*(this + 597);
LABEL_5:
  if ( nFileCacheVersion >= 0 )
    v11->m_nFileVersion = nFileCacheVersion;
  m_Size = v11->m_VersionList.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_12:
    v17 = v11->m_VersionList.m_Size;
    if ( m_Size == v11->m_VersionList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t,int>::Grow(&v11->m_VersionList.m_Memory, 1);
      v17 = v11->m_VersionList.m_Size;
    }
    v18 = m_Size;
    v19 = &v11->m_VersionList.m_Memory.m_pMemory[v18] == 0;
    v20 = &v11->m_VersionList.m_Memory.m_pMemory[v18];
    v11->m_VersionList.m_Size = v17 + 1;
    if ( !v19 )
    {
      v20->m_nService = nService;
      v20->m_nVersion = nVersion;
    }
  }
  else
  {
    m_pMemory = v11->m_VersionList.m_Memory.m_pMemory;
    if ( m_pMemory->m_nService != nService )
    {
      v14 = m_pMemory + 1;
      v15 = &v14[(m_Size - 1)];
      while ( v14 != v15 )
      {
        v16 = v14++;
        if ( v14[-1].m_nService == nService )
          goto LABEL_18;
      }
      goto LABEL_12;
    }
    v16 = v11->m_VersionList.m_Memory.m_pMemory;
LABEL_18:
    v16->m_nVersion = nVersion;
  }
}


// GCSDK::CGCClient::GetVersionsForSOCache  (line 1615, @0x0000000003213890, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int, CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CGCClientSystem::SaveSerializedSOCache
const GCSDK::CGCClient::VecVersions_t *__fastcall GCSDK::CGCClient::GetVersionsForSOCache(
        const GCSDK::CGCClient *const this,
        GCSDK::SOID_t soid)
{
  unsigned __int16 v3; // ax
  CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t*,short unsigned int,bool (*)(const GCSDK::SOID_t&,const GCSDK::SOID_t&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  search.key = soid;
  v3 = CUtlRBTree<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short,CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t,GCSDK::CGCClient::SOVersion_t *,unsigned short,bool (*)(GCSDK::SOID_t const&,GCSDK::SOID_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         (this + 1168),
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return (*(*(this + 147) + 32LL * v3 + 24) + 8LL);
}


// GCSDK::CGCClient::SOCacheCreateMsg  (line 1624, @0x0000000003214c50, libserver.so)  // inlines: _M_data, _M_rep, owner_soid, size
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::FindOrAddSOCache, GCSDK::CGCClientSharedObjectCache::BCreateFromMsg, GCSDK::CGCClient::SetSOCacheVersion
// callers: GCSDK::CGCSOCreateJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::PartialHandleCompletedCache
void __fastcall GCSDK::CGCClient::SOCacheCreateMsg(GCSDK::CGCClient *const this, const CMsgSOSingleObject *const msg)
{
  google::protobuf::FieldDescriptor *fields; // rsi
  GCSDK::CGCClientSharedObjectCache *v5; // r13
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-30h] BYREF

  fields = *(msg + 6);
  if ( fields == 0 )
    fields = CMsgSOSingleObject::default_instance_->fields_;
  GCSDK::SOID_t::SOID_t(&owner, fields);
  v5 = GCSDK::CGCClient::FindOrAddSOCache(this, owner);
  if ( v5 != 0 )
  {
    GCSDK::CGCClientSharedObjectCache::BCreateFromMsg(
      v5,
      this,
      *(msg + 11),
      *(msg + 10),
      **(msg + 3),
      *(**(msg + 3) - 24LL));
    GCSDK::CGCClient::SetSOCacheVersion(this, v5, *(msg + 11), *(msg + 4), -1);
  }
}


// GCSDK::CGCClient::SOCacheUpdateMsg  (line 1646, @0x0000000003214ce0, libserver.so)  // inlines: Element, Find, FindSOCache, LeftChild, RightChild, _M_data, _M_rep, operator(), operator[], owner_soid, size
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClientSharedObjectCache::BUpdateFromMsg, GCSDK::CGCClient::SetSOCacheVersion
// callers: GCSDK::CGCSOUpdateJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::PartialHandleCompletedCache
void __fastcall GCSDK::CGCClient::SOCacheUpdateMsg(GCSDK::CGCClient *const this, const CMsgSOSingleObject *const msg)
{
  google::protobuf::FieldDescriptor *fields; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  GCSDK::CGCClientSharedObjectCache *v9; // rbx
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-50h] BYREF
  GCSDK::SOID_t v11[4]; // [rsp+10h] [rbp-40h] BYREF

  fields = *(msg + 6);
  if ( fields == 0 )
    fields = CMsgSOSingleObject::default_instance_->fields_;
  GCSDK::SOID_t::SOID_t(&owner, fields);
  v5 = *(this + 576);
  v11[0] = owner;
  if ( v5 != 0xFFFF )
  {
    v6 = *(this + 142);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = 32 * v5;
        if ( (*(this + 141))(v11, v6 + v7 + 8) == 0 )
          break;
        v6 = *(this + 142);
        v5 = *(v6 + v7);
        if ( v5 == 0xFFFF )
          return;
      }
      v8 = (*(this + 141))(*(this + 142) + v7 + 8, v11) == 0;
      v6 = *(this + 142);
      if ( v8 )
        break;
      v5 = *(v6 + v7 + 2);
      if ( v5 == 0xFFFF )
        return;
    }
    v9 = *(v6 + v7 + 24);
    if ( v9 != 0 )
    {
      GCSDK::CGCClientSharedObjectCache::BUpdateFromMsg(v9, this, *(msg + 10), **(msg + 3), *(**(msg + 3) - 24LL));
      GCSDK::CGCClient::SetSOCacheVersion(this, v9, *(msg + 11), *(msg + 4), -1);
    }
  }
}


// GCSDK::CGCClient::SOCacheDestroyMsg  (line 1668, @0x0000000003214e10, libserver.so)  // inlines: Element, Find, FindSOCache, LeftChild, RightChild, _M_data, _M_rep, operator(), operator[], owner_soid, size
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClientSharedObjectCache::BDestroyFromMsg, GCSDK::CGCClient::SetSOCacheVersion
// callers: GCSDK::CGCSODestroyJob::BYieldingRunJobFromProtoMsg, GCSDK::CGCClient::PartialHandleCompletedCache
void __fastcall GCSDK::CGCClient::SOCacheDestroyMsg(GCSDK::CGCClient *const this, const CMsgSOSingleObject *const msg)
{
  google::protobuf::FieldDescriptor *fields; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  GCSDK::CGCClientSharedObjectCache *v9; // rbx
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-50h] BYREF
  GCSDK::SOID_t v11[4]; // [rsp+10h] [rbp-40h] BYREF

  fields = *(msg + 6);
  if ( fields == 0 )
    fields = CMsgSOSingleObject::default_instance_->fields_;
  GCSDK::SOID_t::SOID_t(&owner, fields);
  v5 = *(this + 576);
  v11[0] = owner;
  if ( v5 != 0xFFFF )
  {
    v6 = *(this + 142);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = 32 * v5;
        if ( (*(this + 141))(v11, v6 + v7 + 8) == 0 )
          break;
        v6 = *(this + 142);
        v5 = *(v6 + v7);
        if ( v5 == 0xFFFF )
          return;
      }
      v8 = (*(this + 141))(*(this + 142) + v7 + 8, v11) == 0;
      v6 = *(this + 142);
      if ( v8 )
        break;
      v5 = *(v6 + v7 + 2);
      if ( v5 == 0xFFFF )
        return;
    }
    v9 = *(v6 + v7 + 24);
    if ( v9 != 0 )
    {
      GCSDK::CGCClientSharedObjectCache::BDestroyFromMsg(v9, this, *(msg + 10), **(msg + 3), *(**(msg + 3) - 24LL));
      GCSDK::CGCClient::SetSOCacheVersion(this, v9, *(msg + 11), *(msg + 4), -1);
    }
  }
}


// GCSDK::CGCClient::SOCacheUpdateMultipleMsg  (line 1690, @0x0000000003214f40, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSOMultipleObjects_SingleObject>::TypeHandler>, _M_data, _M_rep, objects_added, objects_modified, objects_removed, owner_soid, size
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::FindOrAddSOCache, GCSDK::CGCClientSharedObjectCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectCache::BUpdateFromMsg, GCSDK::CGCClientSharedObjectCache::BDestroyFromMsg, GCSDK::CGCClient::SetSOCacheVersion
// callers: GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCSOUpdateMultipleJob::BYieldingRunJobFromProtoMsg
void __fastcall GCSDK::CGCClient::SOCacheUpdateMultipleMsg(
        GCSDK::CGCClient *const this,
        const CMsgSOMultipleObjects *const msg)
{
  const CMsgSOIDOwner *v4; // rsi
  GCSDK::CGCClientSharedObjectCache *v5; // r12
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // r14d
  __int64 v14; // rax
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-40h] BYREF

  v4 = *(msg + 13);
  if ( v4 == 0 )
    v4 = *&CMsgSOMultipleObjects::default_instance_->extension_range_count_;
  GCSDK::SOID_t::SOID_t(&owner, v4);
  v5 = GCSDK::CGCClient::FindOrAddSOCache(this, owner);
  if ( v5 != 0 )
  {
    v6 = 0;
    v7 = 0;
    while ( v7 < *(msg + 16) )
    {
      ++v7;
      v8 = *(*(msg + 7) + v6);
      v6 += 8;
      GCSDK::CGCClientSharedObjectCache::BCreateFromMsg(
        v5,
        this,
        *(msg + 28),
        *(v8 + 32),
        **(v8 + 24),
        *(**(v8 + 24) - 24LL));
    }
    v9 = 0;
    v10 = 0;
    while ( v10 < *(msg + 8) )
    {
      ++v10;
      v11 = *(*(msg + 3) + v9);
      v9 += 8;
      GCSDK::CGCClientSharedObjectCache::BUpdateFromMsg(v5, this, *(v11 + 32), **(v11 + 24), *(**(v11 + 24) - 24LL));
    }
    v12 = 0;
    v13 = 0;
    while ( v13 < *(msg + 22) )
    {
      ++v13;
      v14 = *(*(msg + 10) + v12);
      v12 += 8;
      GCSDK::CGCClientSharedObjectCache::BDestroyFromMsg(v5, this, *(v14 + 32), **(v14 + 24), *(**(v14 + 24) - 24LL));
    }
    GCSDK::CGCClient::SetSOCacheVersion(this, v5, *(msg + 28), *(msg + 6), -1);
  }
}


// GCSDK::CGCSOCreateJob::~CGCSOCreateJob  (line 1768, @0x0000000003217950, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCSOCreateJob::~CGCSOCreateJob(GCSDK::CGCSOCreateJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCSOCreateJob::~CGCSOCreateJob  (line 1768, @0x0000000003217970, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCSOCreateJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCSOCreateJob::~CGCSOCreateJob(GCSDK::CGCSOCreateJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCSOCreateJob::BYieldingRunJobFromProtoMsg  (line 1772, @0x000000000321fde0, libserver.so)  // inlines: owner_soid
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::PartialHandleUpdate, GCSDK::CGCClient::SOCacheCreateMsg
bool __fastcall GCSDK::CGCSOCreateJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCSOCreateJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::TProtoMsg *const msg)
{
  CMsgSOSingleObject *m_pProtoBufBody; // rax
  google::protobuf::FieldDescriptor *fields; // rsi
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-20h] BYREF

  m_pProtoBufBody = msg->m_pProtoBufBody;
  if ( (*(m_pProtoBufBody + 16) & 8) == 0 )
    return 1;
  fields = *(m_pProtoBufBody + 6);
  if ( fields == 0 )
    fields = CMsgSOSingleObject::default_instance_->fields_;
  GCSDK::SOID_t::SOID_t(&owner, fields);
  if ( GCSDK::CGCClient::PartialHandleUpdate(
         this->m_pGCClient,
         owner,
         *(msg->m_pProtoBufBody + 11),
         0x15u,
         msg->m_pProtoBufBody) == 0 )
    return 1;
  GCSDK::CGCClient::SOCacheCreateMsg(this->m_pGCClient, msg->m_pProtoBufBody);
  return 1;
}


// GCSDK::CreateJob_CGCSOCreateJob  (line 1786, @0x0000000003211360, libserver.so)  // inlines: AllocateJob<GCSDK::CGCSOCreateJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCSOCreateJob, JobMgrAllocateJobClass<GCSDK::CGCSOCreateJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCSOCreateJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCSOCreateJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47CFB30;
  v2->m_pJobType = &GCSDK::g_JobType_CGCSOCreateJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCSODestroyJob::~CGCSODestroyJob  (line 1790, @0x0000000003217900, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCSODestroyJob::~CGCSODestroyJob(GCSDK::CGCSODestroyJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCSODestroyJob::~CGCSODestroyJob  (line 1790, @0x0000000003217920, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCSODestroyJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCSODestroyJob::~CGCSODestroyJob(GCSDK::CGCSODestroyJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCSODestroyJob::BYieldingRunJobFromProtoMsg  (line 1794, @0x000000000321ff20, libserver.so)  // inlines: owner_soid
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::PartialHandleUpdate, GCSDK::CGCClient::SOCacheDestroyMsg
bool __fastcall GCSDK::CGCSODestroyJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCSODestroyJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::TProtoMsg *const msg)
{
  CMsgSOSingleObject *m_pProtoBufBody; // rax
  google::protobuf::FieldDescriptor *fields; // rsi
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-20h] BYREF

  m_pProtoBufBody = msg->m_pProtoBufBody;
  if ( (*(m_pProtoBufBody + 16) & 8) == 0 )
    return 1;
  fields = *(m_pProtoBufBody + 6);
  if ( fields == 0 )
    fields = CMsgSOSingleObject::default_instance_->fields_;
  GCSDK::SOID_t::SOID_t(&owner, fields);
  if ( GCSDK::CGCClient::PartialHandleUpdate(
         this->m_pGCClient,
         owner,
         *(msg->m_pProtoBufBody + 11),
         0x17u,
         msg->m_pProtoBufBody) == 0 )
    return 1;
  GCSDK::CGCClient::SOCacheDestroyMsg(this->m_pGCClient, msg->m_pProtoBufBody);
  return 1;
}


// GCSDK::CreateJob_CGCSODestroyJob  (line 1808, @0x00000000032113d0, libserver.so)  // inlines: AllocateJob<GCSDK::CGCSODestroyJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCSODestroyJob, JobMgrAllocateJobClass<GCSDK::CGCSODestroyJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCSODestroyJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCSODestroyJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47CFBD0;
  v2->m_pJobType = &GCSDK::g_JobType_CGCSODestroyJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCSOUpdateJob::~CGCSOUpdateJob  (line 1812, @0x00000000032178b0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCSOUpdateJob::~CGCSOUpdateJob(GCSDK::CGCSOUpdateJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCSOUpdateJob::~CGCSOUpdateJob  (line 1812, @0x00000000032178d0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCSOUpdateJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCSOUpdateJob::~CGCSOUpdateJob(GCSDK::CGCSOUpdateJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCSOUpdateJob::BYieldingRunJobFromProtoMsg  (line 1816, @0x000000000321fe80, libserver.so)  // inlines: owner_soid
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::PartialHandleUpdate, GCSDK::CGCClient::SOCacheUpdateMsg
bool __fastcall GCSDK::CGCSOUpdateJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCSOUpdateJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::TProtoMsg *const msg)
{
  CMsgSOSingleObject *m_pProtoBufBody; // rax
  google::protobuf::FieldDescriptor *fields; // rsi
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-20h] BYREF

  m_pProtoBufBody = msg->m_pProtoBufBody;
  if ( (*(m_pProtoBufBody + 16) & 8) == 0 )
    return 1;
  fields = *(m_pProtoBufBody + 6);
  if ( fields == 0 )
    fields = CMsgSOSingleObject::default_instance_->fields_;
  GCSDK::SOID_t::SOID_t(&owner, fields);
  if ( GCSDK::CGCClient::PartialHandleUpdate(
         this->m_pGCClient,
         owner,
         *(msg->m_pProtoBufBody + 11),
         0x16u,
         msg->m_pProtoBufBody) == 0 )
    return 1;
  GCSDK::CGCClient::SOCacheUpdateMsg(this->m_pGCClient, msg->m_pProtoBufBody);
  return 1;
}


// GCSDK::CreateJob_CGCSOUpdateJob  (line 1830, @0x0000000003211440, libserver.so)  // inlines: AllocateJob<GCSDK::CGCSOUpdateJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCSOUpdateJob, JobMgrAllocateJobClass<GCSDK::CGCSOUpdateJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCSOUpdateJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCSOUpdateJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47CFC30;
  v2->m_pJobType = &GCSDK::g_JobType_CGCSOUpdateJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCSOUpdateMultipleJob::~CGCSOUpdateMultipleJob  (line 1834, @0x00000000032179f0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCSOUpdateMultipleJob::~CGCSOUpdateMultipleJob(GCSDK::CGCSOUpdateMultipleJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCSOUpdateMultipleJob::~CGCSOUpdateMultipleJob  (line 1834, @0x0000000003217a10, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCSOUpdateMultipleJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCSOUpdateMultipleJob::~CGCSOUpdateMultipleJob(GCSDK::CGCSOUpdateMultipleJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCSOUpdateMultipleJob::BYieldingRunJobFromProtoMsg  (line 1839, @0x000000000321ffc0, libserver.so)  // inlines: owner_soid
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::PartialHandleUpdate, GCSDK::CGCClient::SOCacheUpdateMultipleMsg
bool __fastcall GCSDK::CGCSOUpdateMultipleJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCSOUpdateMultipleJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::TProtoMsg *const msg)
{
  CMsgSOMultipleObjects *m_pProtoBufBody; // rax
  const CMsgSOIDOwner *v4; // rsi
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-20h] BYREF

  m_pProtoBufBody = msg->m_pProtoBufBody;
  if ( (*(m_pProtoBufBody + 16) & 0x10) == 0 )
    return 1;
  v4 = *(m_pProtoBufBody + 13);
  if ( v4 == 0 )
    v4 = *&CMsgSOMultipleObjects::default_instance_->extension_range_count_;
  GCSDK::SOID_t::SOID_t(&owner, v4);
  if ( GCSDK::CGCClient::PartialHandleUpdate(
         this->m_pGCClient,
         owner,
         *(msg->m_pProtoBufBody + 28),
         0x1Au,
         msg->m_pProtoBufBody) == 0 )
    return 1;
  GCSDK::CGCClient::SOCacheUpdateMultipleMsg(this->m_pGCClient, msg->m_pProtoBufBody);
  return 1;
}


// GCSDK::CreateJob_CGCSOUpdateMultipleJob  (line 1854, @0x00000000032114b0, libserver.so)  // inlines: AllocateJob<GCSDK::CGCSOUpdateMultipleJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCSOUpdateMultipleJob, JobMgrAllocateJobClass<GCSDK::CGCSOUpdateMultipleJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCSOUpdateMultipleJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCSOUpdateMultipleJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47CFCF0;
  v2->m_pJobType = &GCSDK::g_JobType_CGCSOUpdateMultipleJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCSOCacheSubscribedJob::~CGCSOCacheSubscribedJob  (line 1858, @0x0000000003217a90, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCSOCacheSubscribedJob::~CGCSOCacheSubscribedJob(GCSDK::CGCSOCacheSubscribedJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCSOCacheSubscribedJob::~CGCSOCacheSubscribedJob  (line 1858, @0x0000000003217ab0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCSOCacheSubscribedJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCSOCacheSubscribedJob::~CGCSOCacheSubscribedJob(GCSDK::CGCSOCacheSubscribedJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCSOCacheSubscribedJob::BYieldingRunJobFromProtoMsg  (line 1862, @0x0000000003220570, libserver.so)
// calls: GCSDK::CGCClient::ProcessSOCacheSubscribedMsg
bool __fastcall GCSDK::CGCSOCacheSubscribedJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCSOCacheSubscribedJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::TProtoMsg *const msg)
{
  GCSDK::CGCClient::ProcessSOCacheSubscribedMsg(this->m_pGCClient, msg->m_pProtoBufBody);
  return 1;
}


// GCSDK::CreateJob_CGCSOCacheSubscribedJob  (line 1868, @0x0000000003211520, libserver.so)  // inlines: AllocateJob<GCSDK::CGCSOCacheSubscribedJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCSOCacheSubscribedJob, JobMgrAllocateJobClass<GCSDK::CGCSOCacheSubscribedJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCSOCacheSubscribedJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCSOCacheSubscribedJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47CFDF0;
  v2->m_pJobType = &GCSDK::g_JobType_CGCSOCacheSubscribedJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCSOCacheSubscribedJobUpToDate::~CGCSOCacheSubscribedJobUpToDate  (line 1872, @0x0000000003217b30, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCSOCacheSubscribedJobUpToDate::~CGCSOCacheSubscribedJobUpToDate(
        GCSDK::CGCSOCacheSubscribedJobUpToDate *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCSOCacheSubscribedJobUpToDate::~CGCSOCacheSubscribedJobUpToDate  (line 1872, @0x0000000003217b50, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCSOCacheSubscribedJobUpToDate
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCSOCacheSubscribedJobUpToDate::~CGCSOCacheSubscribedJobUpToDate(
        GCSDK::CGCSOCacheSubscribedJobUpToDate *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCSOCacheSubscribedJobUpToDate::BYieldingRunJobFromProtoMsg  (line 1876, @0x0000000003220590, libserver.so)
// calls: GCSDK::CGCClient::ProcessSOCacheSubscribedUpToDateMsg
bool __fastcall GCSDK::CGCSOCacheSubscribedJobUpToDate::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCSOCacheSubscribedJobUpToDate *const this,
        const GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::TProtoMsg *const msg)
{
  GCSDK::CGCClient::ProcessSOCacheSubscribedUpToDateMsg(this->m_pGCClient, msg->m_pProtoBufBody);
  return 1;
}


// GCSDK::CreateJob_CGCSOCacheSubscribedJobUpToDate  (line 1882, @0x0000000003211590, libserver.so)  // inlines: AllocateJob<GCSDK::CGCSOCacheSubscribedJobUpToDate, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCSOCacheSubscribedJobUpToDate, JobMgrAllocateJobClass<GCSDK::CGCSOCacheSubscribedJobUpToDate, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCSOCacheSubscribedJobUpToDate
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCSOCacheSubscribedJobUpToDate(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47CFEF0;
  v2->m_pJobType = &GCSDK::g_JobType_CGCSOCacheSubscribedJobUpToDate;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCSOCacheUnsubscribedJob::~CGCSOCacheUnsubscribedJob  (line 1886, @0x0000000003217bd0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCSOCacheUnsubscribedJob::~CGCSOCacheUnsubscribedJob(
        GCSDK::CGCSOCacheUnsubscribedJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCSOCacheUnsubscribedJob::~CGCSOCacheUnsubscribedJob  (line 1886, @0x0000000003217bf0, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCSOCacheUnsubscribedJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCSOCacheUnsubscribedJob::~CGCSOCacheUnsubscribedJob(
        GCSDK::CGCSOCacheUnsubscribedJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCSOCacheUnsubscribedJob::BYieldingRunJobFromProtoMsg  (line 1890, @0x000000000321ef40, libserver.so)  // inlines: owner_soid
// calls: GCSDK::SOID_t::SOID_t, GCSDK::CGCClient::NotifySOCacheUnsubscribed
bool __fastcall GCSDK::CGCSOCacheUnsubscribedJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCSOCacheUnsubscribedJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::TProtoMsg *const msg)
{
  CMsgSOCacheUnsubscribed *m_pProtoBufBody; // rax
  const CMsgSOIDOwner *containing_type; // rsi
  GCSDK::SOID_t::ID_t v6; // [rsp-8h] [rbp-28h] BYREF
  GCSDK::SOID_t owner; // [rsp+0h] [rbp-20h]
  GCSDK::SOID_t v8; // 0:rsi.8,8:rdx.8

  m_pProtoBufBody = msg->m_pProtoBufBody;
  if ( (*(m_pProtoBufBody + 16) & 1) == 0 )
    return 1;
  containing_type = *(m_pProtoBufBody + 3);
  if ( containing_type == 0 )
    containing_type = CMsgSOCacheUnsubscribed::default_instance_->containing_type_;
  GCSDK::SOID_t::SOID_t(&v6, containing_type);
  v8.m_id = v6;
  *&v8.m_type = owner.m_id;
  GCSDK::CGCClient::NotifySOCacheUnsubscribed(this->m_pGCClient, v8);
  return 1;
}


// GCSDK::CreateJob_CGCSOCacheUnsubscribedJob  (line 1905, @0x0000000003211600, libserver.so)  // inlines: AllocateJob<GCSDK::CGCSOCacheUnsubscribedJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCSOCacheUnsubscribedJob, JobMgrAllocateJobClass<GCSDK::CGCSOCacheUnsubscribedJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCSOCacheUnsubscribedJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCSOCacheUnsubscribedJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47CFFF0;
  v2->m_pJobType = &GCSDK::g_JobType_CGCSOCacheUnsubscribedJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCPingJob::~CGCPingJob  (line 1909, @0x0000000003217c70, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCPingJob::~CGCPingJob(GCSDK::CGCPingJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCPingJob::~CGCPingJob  (line 1909, @0x0000000003217c90, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCPingJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCPingJob::~CGCPingJob(GCSDK::CGCPingJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCPingJob::BYieldingRunJobFromProtoMsg  (line 1913, @0x000000000321a200, libserver.so)  // inlines: Add, AllocProto, BSendMessage, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufGCClientSendHandler, CProtoBufMsg, CVProfScope, EnterScope, ExitScope, FreeProto, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, SetJobIDTarget, Unlock, operator=, set_has_job_id_target, set_job_id_target, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CMsgGCClientPing::CopyFrom, GCSDK::CProtoBufMsgBase::BAsyncSend, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator new, CMsgGCClientPing::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int) (23 total)
// strings: "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool
bool __fastcall GCSDK::CGCPingJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCPingJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgGCClientPing>::TProtoMsg *const msgRequest)
{
  __int64 m_enabled; // rdi
  bool v5; // r14
  uint64 m_numTimeBaseTicks; // rcx
  google::protobuf::Message *m_pProtoBufBody; // rdi
  __int64 v8; // rdx
  CMsgProtoBufHeader *m_pProtoBufHdr; // rax
  GCSDK::CGCClient *m_pGCClient; // rax
  const google::protobuf::Descriptor *v12; // rax
  const google::protobuf::Descriptor *v13; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v15; // rax
  unsigned __int64 v16; // r14
  uint64 v17; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v19; // rax
  CVProfNode *m_pParent; // rax
  uint32 unTargetHigh[2]; // [rsp+0h] [rbp-80h]
  uint32 unTargetHigha; // [rsp+0h] [rbp-80h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPool; // [rsp+8h] [rbp-78h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing> *pPoola; // [rsp+8h] [rbp-78h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPoolb; // [rsp+8h] [rbp-78h]
  GCSDK::CProtoBufMsgBase::IProtoBufSendHandler sender; // [rsp+10h] [rbp-70h] BYREF
  GCSDK::CGCClient *v27; // [rsp+18h] [rbp-68h]
  GCSDK::CProtoBufMsg<CMsgGCClientPing> msgReply; // [rsp+20h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgReply, 0xBBAu);
  msgReply._vptr_CProtoBufMsgBase = off_47D0150;
  msgReply.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    pPool = __rdtsc();
    *unTargetHigh = g_VProfCurrentProfile.m_TargetThreadId;
    if ( *unTargetHigh == ThreadGetCurrentId(m_enabled) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v19 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v19->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - pPool + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr )
    {
      pPoola = operator new(0x28u);
      v12 = CMsgGCClientPing::descriptor();
      unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v12->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v13 = CMsgGCClientPing::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v13->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(pPoola, Int32, unTargetHigha);
      pPoola->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0350;
      GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool = pPoola;
      v15 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v15, pPoola);
      GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool);
  msgReply.m_pProtoBufBody = m_pProtoBufBody;
  if ( v5 )
  {
    v16 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      pPoolb = g_VProfCurrentProfile.m_TargetThreadId;
      if ( pPoolb == ThreadGetCurrentId(m_pProtoBufBody) )
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
        m_pProtoBufBody = msgReply.m_pProtoBufBody;
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
      else
      {
        m_pProtoBufBody = msgReply.m_pProtoBufBody;
      }
    }
    v17 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v17 - v16 + __rdtsc();
  }
  CMsgGCClientPing::CopyFrom(m_pProtoBufBody, msgRequest->m_pProtoBufBody);
  v8 = *(msgRequest->m_pProtoBufHdr + 5);
  if ( v8 != -1 )
  {
    m_pProtoBufHdr = msgReply.m_pProtoBufHdr;
    *(msgReply.m_pProtoBufHdr + 4) |= 0x10u;
    *(m_pProtoBufHdr + 6) = v8;
  }
  m_pGCClient = this->m_pGCClient;
  sender._vptr_IProtoBufSendHandler = &off_47CFA30;
  v27 = m_pGCClient;
  GCSDK::CProtoBufMsgBase::BAsyncSend(&msgReply, &sender);
  msgReply._vptr_CProtoBufMsgBase = off_47D0150;
  if ( msgReply.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool,
      msgReply.m_pProtoBufBody);
    msgReply.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgReply);
  return 1;
}


// GCSDK::CreateJob_CGCPingJob  (line 1934, @0x0000000003211670, libserver.so)  // inlines: AllocateJob<GCSDK::CGCPingJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCPingJob, JobMgrAllocateJobClass<GCSDK::CGCPingJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCPingJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCPingJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47D00F0;
  v2->m_pJobType = &GCSDK::g_JobType_CGCPingJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


// GCSDK::CGCToClientPollConvarJob::~CGCToClientPollConvarJob  (line 1939, @0x0000000003217d10, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob
// calls: GCSDK::CJob::~CJob
void __fastcall GCSDK::CGCToClientPollConvarJob::~CGCToClientPollConvarJob(GCSDK::CGCToClientPollConvarJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// GCSDK::CGCToClientPollConvarJob::~CGCToClientPollConvarJob  (line 1939, @0x0000000003217d30, libserver.so)  // inlines: ~CGCClientJob, ~CGCClientProtoJob, ~CGCToClientPollConvarJob
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall GCSDK::CGCToClientPollConvarJob::~CGCToClientPollConvarJob(GCSDK::CGCToClientPollConvarJob *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// GCSDK::CGCToClientPollConvarJob::BYieldingRunJobFromProtoMsg  (line 1943, @0x000000000321a5d0, libserver.so)  // inlines: Add, AllocProto, BSendMessage, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufGCClientSendHandler, CProtoBufMsg, CSplitScreenSlot, CVProfScope, EnterScope, ExitScope, FreeProto, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetString, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, MakeStringToken, PLAT_CPU_TIME, Unlock, _M_data, assign, c_str, length, set_convar_value, set_has_convar_value, set_has_poll_id, set_poll_id, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator new, CMsgGCToClientPollConvarResponse::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr (29 total)
// strings: "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool
bool __fastcall GCSDK::CGCToClientPollConvarJob::BYieldingRunJobFromProtoMsg(
        GCSDK::CGCToClientPollConvarJob *const this,
        const GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::TProtoMsg *const msgRequest)
{
  __int64 v4; // rdi
  int m_enabled; // r9d
  bool v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  google::protobuf::Message *m_pProtoBufBody; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  IConfigurationSystem *v12; // rdi
  const char *v13; // r13
  __int64 (__fastcall *v14)(IConfigurationSystem *, __int64, __int64); // r14
  __int64 v15; // rax
  __int64 v16; // r14
  int v17; // eax
  const google::protobuf::Descriptor *v19; // rax
  const google::protobuf::Descriptor *v20; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v22; // rax
  CMsgGCToClientPollConvarResponse *v23; // rsi
  ConVar *m_pGCClient; // rax
  unsigned __int64 v25; // r14
  uint64 v26; // rsi
  CMsgGCToClientPollConvarResponse *v27; // r13
  char *m_pszString; // r14
  size_t v29; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v31; // rax
  CVProfNode *m_pParent; // rax
  uint32 unTargetHigh[2]; // [rsp+0h] [rbp-490h]
  uint32 unTargetHigha; // [rsp+0h] [rbp-490h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPool; // [rsp+8h] [rbp-488h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse> *pPoolb; // [rsp+8h] [rbp-488h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPoolc; // [rsp+8h] [rbp-488h]
  uint32 pPoola; // [rsp+8h] [rbp-488h]
  ConVarRef refConvar; // [rsp+10h] [rbp-480h] BYREF
  GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse> msgReply; // [rsp+20h] [rbp-470h] BYREF
  char szConfigValue[1032]; // [rsp+50h] [rbp-440h] BYREF
  unsigned __int64 v42; // [rsp+458h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msgReply, 0xBBCu);
  msgReply._vptr_CProtoBufMsgBase = off_47D0250;
  msgReply.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v6 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    pPool = __rdtsc();
    *unTargetHigh = g_VProfCurrentProfile.m_TargetThreadId;
    if ( *unTargetHigh == ThreadGetCurrentId(v4) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v31 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v31->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - pPool + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_bRegisteredWithMemoryPoolMgr )
    {
      pPoolb = operator new(0x28u);
      v19 = CMsgGCToClientPollConvarResponse::descriptor();
      unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v19->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v20 = CMsgGCToClientPollConvarResponse::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v20->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(pPoolb, Int32, unTargetHigha);
      pPoolb->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0390;
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool = pPoolb;
      v22 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v22, pPoolb);
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool);
  msgReply.m_pProtoBufBody = m_pProtoBufBody;
  if ( v6 )
  {
    v25 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      pPoolc = g_VProfCurrentProfile.m_TargetThreadId;
      if ( pPoolc == ThreadGetCurrentId(v9) )
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
        m_pProtoBufBody = msgReply.m_pProtoBufBody;
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
      else
      {
        m_pProtoBufBody = msgReply.m_pProtoBufBody;
      }
    }
    v26 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v26 - v25 + __rdtsc();
  }
  v10 = 0;
  v11 = *(msgRequest->m_pProtoBufBody + 8);
  *(m_pProtoBufBody + 4) |= 1u;
  v12 = g_pConfigurationSystem;
  *(m_pProtoBufBody + 8) = v11;
  v13 = **(msgRequest->m_pProtoBufBody + 3);
  v14 = *(*v12 + 272LL);
  if ( v13 != 0 && *v13 != 0 )
  {
    pPoola = MurmurHash2LowerCase(v13, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
      RegisterStringToken(pPoola, v13, 0, 1);
    v12 = g_pConfigurationSystem;
    v10 = pPoola;
  }
  v15 = v14(v12, v10, 0xFFFFFFFFLL);
  v16 = v15;
  if ( v15 != -1 )
  {
    v17 = (*(*g_pConfigurationSystem + 256LL))(g_pConfigurationSystem, v15);
    if ( (*(*g_pConfigurationSystem + 280LL))(g_pConfigurationSystem, v16, szConfigValue, 1024, (v17 == 3) - 1) == 0 )
      goto LABEL_13;
    v23 = msgReply.m_pProtoBufBody;
    *(msgReply.m_pProtoBufBody + 4) |= 2u;
    std::string::assign(*(v23 + 3), szConfigValue, strlen(szConfigValue));
    goto LABEL_17;
  }
  ConVarRef::ConVarRef(&refConvar, v13, 1);
  if ( ConVarRef::IsValid(&refConvar) )
  {
    v27 = msgReply.m_pProtoBufBody;
    m_pszString = refConvar.m_pConVarState->m_Value.m_pszString;
    *(msgReply.m_pProtoBufBody + 4) |= 2u;
    v29 = strlen(m_pszString);
    std::string::assign(*(v27 + 3), m_pszString, v29);
LABEL_17:
    m_pGCClient = this->m_pGCClient;
    refConvar.m_pConVar = &off_47CFA30;
    refConvar.m_pConVarState = m_pGCClient;
    GCSDK::CProtoBufMsgBase::BAsyncSend(&msgReply, &refConvar);
  }
LABEL_13:
  msgReply._vptr_CProtoBufMsgBase = off_47D0250;
  if ( msgReply.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool,
      msgReply.m_pProtoBufBody);
    msgReply.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msgReply);
  return 1;
}


// GCSDK::CreateJob_CGCToClientPollConvarJob  (line 1981, @0x00000000032116e0, libserver.so)  // inlines: AllocateJob<GCSDK::CGCToClientPollConvarJob, GCSDK::CGCClient>, CGCClientJob, CGCClientProtoJob, CGCToClientPollConvarJob, JobMgrAllocateJobClass<GCSDK::CGCToClientPollConvarJob, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: GCSDK::g_JobType_CGCToClientPollConvarJob
GCSDK::CJob *__fastcall GCSDK::CreateJob_CGCToClientPollConvarJob(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47D01F0;
  v2->m_pJobType = &GCSDK::g_JobType_CGCToClientPollConvarJob;
  *(&v2[1] + 2) = 4;
  return v2;
}


